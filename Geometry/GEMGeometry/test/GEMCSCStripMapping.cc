#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/one/EDAnalyzer.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/EventSetup.h"
#include "FWCore/Framework/interface/ESHandle.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"

#include "Geometry/GEMGeometry/interface/GEMGeometry.h"
#include "Geometry/CSCGeometry/interface/CSCGeometry.h"
#include "Geometry/Records/interface/MuonGeometryRecord.h"
#include "Geometry/GEMGeometry/interface/GEMEtaPartitionSpecs.h"
#include "Geometry/CommonTopologies/interface/StripTopology.h"

#include "L1Trigger/CSCCommonTrigger/interface/CSCTriggerGeometry.h"

#include "DataFormats/Math/interface/deltaPhi.h"

#include <memory>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

class GEMCSCStripMapping : public edm::one::EDAnalyzer<> 
{
public: 
  GEMCSCStripMapping( const edm::ParameterSet& pset);
  
  ~GEMCSCStripMapping();

  void beginJob() override {}
  void analyze(edm::Event const& iEvent, edm::EventSetup const&) override;
  void endJob() override {}
  
private:
  const std::string& myName() { return myName_;}

  const int dashedLineWidth_;
  const std::string dashedLine_;
  const std::string myName_;
  std::ofstream ofos;

  const CSCGeometry* csc_g;
  const GEMGeometry* gem_g;

  static const double lut_wg_etaMin_etaMax_odd[48][3];
  static const double lut_wg_etaMin_etaMax_even[48][3];

};

using namespace std;
GEMCSCStripMapping::GEMCSCStripMapping( const edm::ParameterSet& /*iConfig*/ )
  : dashedLineWidth_(104), dashedLine_( std::string(dashedLineWidth_, '-') ), 
    myName_( "GEMCSCStripMapping" ) 
{ 
  ofos.open("MytestOutput.out"); 
  ofos <<"======================== Opening output file"<< std::endl;
  //  usesResource("CSCTriggerGeometry");
}


GEMCSCStripMapping::~GEMCSCStripMapping() 
{
  ofos.close();
  ofos <<"======================== Closing output file"<< std::endl;
}

void
GEMCSCStripMapping::analyze( const edm::Event& /*iEvent*/, const edm::EventSetup& iSetup )
{
  edm::ESHandle<GEMGeometry> gemGeo;
  iSetup.get<MuonGeometryRecord>().get(gemGeo);     
  const GEMGeometry* gem_g = &*gemGeo; 
      
  edm::ESHandle<CSCGeometry> cscGeo;
  iSetup.get<MuonGeometryRecord>().get(cscGeo);
  const CSCGeometry* csc_g = &*cscGeo; 

  CSCTriggerGeometry::setGeometry(cscGeo);
  
  ofos << myName() << ": Analyzer..." << std::endl;
  ofos << "start " << dashedLine_ << std::endl;

  const int theStation = 1;
  const int theEndcap = 1;

  // retrieve CSCChamber geometry
  CSCTriggerGeomManager* geo_manager(CSCTriggerGeometry::get());
  const CSCChamber* cscChamberME1b(geo_manager->chamber(1, 1, 1, 1, 1));
  const CSCDetId me1bId(cscChamberME1b->id());
  const CSCDetId me1aId(me1bId.endcap(), 1, 4, me1bId.chamber());
  const CSCChamber* cscChamberME1a(csc_g->chamber(me1aId));

  // trigger geometry
  const CSCLayer* keyLayerME1b(cscChamberME1b->layer(3));
  const CSCLayerGeometry* keyLayerGeometryME1b(keyLayerME1b->geometry());
  const CSCLayer* keyLayerME1a(cscChamberME1a->layer(3));
  const CSCLayerGeometry* keyLayerGeometryME1a(keyLayerME1a->geometry());
  
  const bool isEven(me1bId.chamber()%2==0);
  const int region((theEndcap == 1) ? 1: -1);
  const GEMDetId gem_id(region, 1, theStation, 1, me1bId.chamber(), 0);
  const GEMChamber* gemChamber(gem_g->chamber(gem_id));

  const int numberOfWG(keyLayerGeometryME1b->numberOfWireGroups());
  for (int i = 0; i< numberOfWG; ++i){
    auto etaMin(isEven ? lut_wg_etaMin_etaMax_even[i][1] : lut_wg_etaMin_etaMax_odd[i][1]); 
    auto etaMax(isEven ? lut_wg_etaMin_etaMax_even[i][2] : lut_wg_etaMin_etaMax_odd[i][2]); 
    std::cout << etaMin << " " << etaMax << std::endl;
    //    cscWgToGemRoll_[i] = std::make_pair(assignGEMRoll(etaMin), assignGEMRoll(etaMax));
  }

  auto randRoll(gemChamber->etaPartition(2));

  // ME1a
  auto nStripsME1a(keyLayerGeometryME1a->numberOfStrips());
  for (float i = 0; i< nStripsME1a; i = i+0.5){
    const LocalPoint lpCSC(keyLayerGeometryME1a->topology()->localPosition(i));
    const GlobalPoint gp(keyLayerME1a->toGlobal(lpCSC));
    const LocalPoint lpGEM(randRoll->toLocal(gp));
    const int HS(i/0.5);
    const bool edge(HS < 4 or HS > 93);
    const float pad(edge ? -99 : randRoll->pad(lpGEM));
    // HS are wrapped-around
    std::cout << std::floor(pad)<<" " << std::ceil(pad) << std::endl;
    //cscHsToGemPadME1a_[HS] = std::make_pair(std::floor(pad),std::ceil(pad));
  }
  // ME1b
  auto nStripsME1b(keyLayerGeometryME1b->numberOfStrips());
  for (float i = 0; i< nStripsME1b; i = i+0.5){
    const LocalPoint lpCSC(keyLayerGeometryME1b->topology()->localPosition(i));
    const GlobalPoint gp(keyLayerME1b->toGlobal(lpCSC));
    const LocalPoint lpGEM(randRoll->toLocal(gp));
    const int HS(i/0.5);
    const bool edge(HS < 5 or HS > 124);
    const float pad(edge ? -99 : randRoll->pad(lpGEM));
    // HS are wrapped-around
    std::cout << std::floor(pad)<<" " << std::ceil(pad)<< std::endl;
    //cscHsToGemPadME1b_[HS] = std::make_pair(std::floor(pad),std::ceil(pad));
  }

/*

  const bool isEven(me1bId.chamber()%2==0);
  const int region((theEndcap == 1) ? 1: -1);
  const GEMDetId gem_id(region, 1, theStation, 1, me1bId.chamber(), 0);
  const GEMChamber* gemChamber(gem_g->chamber(gem_id));
  */
  ofos << dashedLine_ << " end" << std::endl;
  cout << "End of analyze" << endl;
}

const double GEMCSCStripMapping::lut_wg_etaMin_etaMax_odd[48][3] = {
  {0, 2.44005, 2.44688},
  {1, 2.38863, 2.45035},
  {2, 2.32742, 2.43077},
  {3, 2.30064, 2.40389},
  {4, 2.2746, 2.37775},
  {5, 2.24925, 2.35231},
  {6, 2.22458, 2.32754},
  {7, 2.20054, 2.30339},
  {8, 2.1771, 2.27985},
  {9, 2.15425, 2.25689},
  {10, 2.13194, 2.23447},
  {11, 2.11016, 2.21258},
  {12, 2.08889, 2.19119},
  {13, 2.06809, 2.17028},
  {14, 2.04777, 2.14984},
  {15, 2.02788, 2.12983},
  {16, 2.00843, 2.11025},
  {17, 1.98938, 2.09108},
  {18, 1.97073, 2.0723},
  {19, 1.95246, 2.0539},
  {20, 1.93456, 2.03587},
  {21, 1.91701, 2.01818},
    {22, 1.8998, 2.00084},
    {23, 1.88293, 1.98382},
    {24, 1.86637, 1.96712},
    {25, 1.85012, 1.95073},
    {26, 1.83417, 1.93463},
    {27, 1.8185, 1.91882},
    {28, 1.80312, 1.90329},
    {29, 1.788, 1.88803},
    {30, 1.77315, 1.87302},
    {31, 1.75855, 1.85827},
    {32, 1.74421, 1.84377},
    {33, 1.7301, 1.8295},
    {34, 1.71622, 1.81547},
    {35, 1.70257, 1.80166},
    {36, 1.68914, 1.78807},
    {37, 1.67592, 1.77469},
    {38, 1.66292, 1.76151},
    {39, 1.65011, 1.74854},
    {40, 1.63751, 1.73577},
    {41, 1.62509, 1.72319},
    {42, 1.61287, 1.71079},
    {43, 1.60082, 1.69857},
    {44, 1.59924, 1.68654},
    {45, 1.6006, 1.67467},
    {46, 1.60151, 1.66297},
    {47, 1.60198, 1.65144} };

const double GEMCSCStripMapping::lut_wg_etaMin_etaMax_even[48][3] = {
  {0, 2.3917, 2.39853},
  {1, 2.34037, 2.40199},
  {2, 2.27928, 2.38244},
  {3, 2.25254, 2.35561},
  {4, 2.22655, 2.32951},
  {5, 2.20127, 2.30412},
  {6, 2.17665, 2.27939},
  {7, 2.15267, 2.25529},
  {8, 2.12929, 2.2318},
  {9, 2.1065, 2.20889},
  {10, 2.08425, 2.18652},
  {11, 2.06253, 2.16468},
  {12, 2.04132, 2.14334},
  {13, 2.0206, 2.12249},
  {14, 2.00033, 2.1021},
  {15, 1.98052, 2.08215},
  {16, 1.96113, 2.06262},
  {17, 1.94215, 2.04351},
  {18, 1.92357, 2.02479},
  {19, 1.90538, 2.00645},
  {20, 1.88755, 1.98847},
  {21, 1.87007, 1.97085},
  {22, 1.85294, 1.95357},
  {23, 1.83614, 1.93662},
  {24, 1.81965, 1.91998},
  {25, 1.80348, 1.90365},
  {26, 1.78761, 1.88762},
  {27, 1.77202, 1.87187},
  {28, 1.75672, 1.85641},
  {29, 1.74168, 1.84121},
  {30, 1.72691, 1.82628},
  {31, 1.7124, 1.8116},
  {32, 1.69813, 1.79716},
  {33, 1.68411, 1.78297},
  {34, 1.67032, 1.769},
  {35, 1.65675, 1.75526},
  {36, 1.64341, 1.74174},
  {37, 1.63028, 1.72844},
  {38, 1.61736, 1.71534},
  {39, 1.60465, 1.70245},
  {40, 1.59213, 1.68975},
  {41, 1.57981, 1.67724},
  {42, 1.56767, 1.66492},
  {43, 1.55572, 1.65278},
  {44, 1.55414, 1.64082},
  {45, 1.55549, 1.62903},
  {46, 1.5564, 1.61742},
  {47, 1.55686, 1.60596} 
};


//define this as a plug-in
#include "FWCore/Framework/interface/MakerMacros.h"
DEFINE_FWK_MODULE(GEMCSCStripMapping);
