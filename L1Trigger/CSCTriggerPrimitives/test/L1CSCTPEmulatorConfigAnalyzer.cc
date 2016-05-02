/** 
 *  Compare configuration from DB with Python
 *
 *  \author S. Dildick - Texas A&M University
 */

#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/one/EDAnalyzer.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/EventSetup.h"
#include "FWCore/Framework/interface/ESHandle.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"

// Configuration via EventSetup
#include "CondFormats/CSCObjects/interface/CSCDBL1TPParameters.h"
#include "CondFormats/DataRecord/interface/CSCDBL1TPParametersRcd.h"

#include <memory>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <iomanip>
#include <set>

class L1CSCTPEmulatorConfigAnalyzer : public edm::one::EDAnalyzer<> {

public: 
  L1CSCTPEmulatorConfigAnalyzer( const edm::ParameterSet& pset);

  ~L1CSCTPEmulatorConfigAnalyzer();

  void beginJob() override {}
  void analyze(edm::Event const& iEvent, edm::EventSetup const&) override;
  void endJob() override {}
  
private:

  std::ofstream ofos;
  edm::ParameterSet pyConfig;
};

using namespace std;
L1CSCTPEmulatorConfigAnalyzer::L1CSCTPEmulatorConfigAnalyzer( const edm::ParameterSet& iConfig )
{ 
  pyConfig = iConfig;

  ofos.open("MytestOutput.out"); 
  ofos <<"======================== Opening output file"<< std::endl;
}


L1CSCTPEmulatorConfigAnalyzer::~L1CSCTPEmulatorConfigAnalyzer() 
{
  ofos.close();
  ofos <<"======================== Closing output file"<< std::endl;
}

void
L1CSCTPEmulatorConfigAnalyzer::analyze( const edm::Event& /*iEvent*/, const edm::EventSetup& iSetup )
{
  edm::ESHandle<CSCDBL1TPParameters> confH;
  iSetup.get<CSCDBL1TPParametersRcd>().get(confH);
  const CSCDBL1TPParameters* dbConfig = confH.product();
  
  // python params
  edm::ParameterSet tmbParams  = pyConfig.getParameter<edm::ParameterSet>("tmbParam");
  edm::ParameterSet alctParams = pyConfig.getParameter<edm::ParameterSet>("alctParam07");
  edm::ParameterSet clctParams = pyConfig.getParameter<edm::ParameterSet>("clctParam07");

  unsigned int db_alctFifoTbins = dbConfig->alctFifoTbins();
  unsigned int db_alctFifoPretrig = dbConfig->alctFifoPretrig();
  unsigned int db_alctDriftDelay = dbConfig->alctDriftDelay();
  unsigned int db_alctNplanesHitPretrig = dbConfig->alctNplanesHitPretrig();  
  unsigned int db_alctNplanesHitPattern = dbConfig->alctNplanesHitPattern(); 
  unsigned int db_alctNplanesHitAccelPretrig = dbConfig->alctNplanesHitAccelPretrig(); 
  unsigned int db_alctNplanesHitAccelPattern = dbConfig->alctNplanesHitAccelPattern(); 
  unsigned int db_alctTrigMode = dbConfig->alctTrigMode();   
  unsigned int db_alctAccelMode = dbConfig->alctAccelMode();  
  unsigned int db_alctL1aWindowWidth = dbConfig->alctL1aWindowWidth(); 

  unsigned int db_clctFifoTbins = dbConfig->clctFifoTbins(); 
  unsigned int db_clctFifoPretrig = dbConfig->clctFifoPretrig(); 
  unsigned int db_clctHitPersist = dbConfig->clctHitPersist();
  unsigned int db_clctDriftDelay = dbConfig->clctDriftDelay();
  unsigned int db_clctNplanesHitPretrig = dbConfig->clctNplanesHitPretrig(); 
  unsigned int db_clctNplanesHitPattern = dbConfig->clctNplanesHitPattern(); 
  unsigned int db_clctPidThreshPretrig = dbConfig->clctPidThreshPretrig(); 
  unsigned int db_clctMinSeparation = dbConfig->clctMinSeparation(); 

  unsigned int db_tmbMpcBlockMe1a = dbConfig->tmbMpcBlockMe1a();
  unsigned int db_tmbAlctTrigEnable = dbConfig->tmbAlctTrigEnable(); 
  unsigned int db_tmbClctTrigEnable = dbConfig->tmbClctTrigEnable(); 
  unsigned int db_tmbMatchTrigEnable = dbConfig->tmbMatchTrigEnable(); 
  unsigned int db_tmbMatchTrigWindowSize = dbConfig->tmbMatchTrigWindowSize(); 
  unsigned int db_tmbTmbL1aWindowSize = dbConfig->tmbTmbL1aWindowSize(); 

  unsigned int py_alctFifoTbins = alctParams->getParameter<unsigned int>("alctFifoTbins");
  unsigned int py_alctFifoPretrig = alctParams->getParameter<unsigned int>("alctFifoPretrig");
  unsigned int py_alctDriftDelay = alctParams->getParameter<unsigned int>("alctDriftDelay");
  unsigned int py_alctNplanesHitPretrig = alctParams->getParameter<unsigned int>("alctNplanesHitPretrig");  
  unsigned int py_alctNplanesHitPattern = alctParams->getParameter<unsigned int>("alctNplanesHitPattern"); 
  unsigned int py_alctNplanesHitAccelPretrig = alctParams->getParameter<unsigned int>("alctNplanesHitAccelPretrig"); 
  unsigned int py_alctNplanesHitAccelPattern = alctParams->getParameter<unsigned int>("alctNplanesHitAccelPattern"); 
  unsigned int py_alctTrigMode = alctParams->getParameter<unsigned int>("alctTrigMode");   
  unsigned int py_alctAccelMode = alctParams->getParameter<unsigned int>("alctAccelMode");  
  unsigned int py_alctL1aWindowWidth = alctParams->getParameter<unsigned int>("alctL1aWindowWidth"); 

  unsigned int py_clctFifoTbins = clctParams->getParameter<unsigned int>("clctFifoTbins"); 
  unsigned int py_clctFifoPretrig = clctParams->getParameter<unsigned int>("clctFifoPretrig"); 
  unsigned int py_clctHitPersist = clctParams->getParameter<unsigned int>("clctHitPersist");
  unsigned int py_clctDriftDelay = clctParams->getParameter<unsigned int>("clctDriftDelay");
  unsigned int py_clctNplanesHitPretrig = clctParams->getParameter<unsigned int>("clctNplanesHitPretrig"); 
  unsigned int py_clctNplanesHitPattern = clctParams->getParameter<unsigned int>("clctNplanesHitPattern"); 
  unsigned int py_clctPidThreshPretrig = clctParams->getParameter<unsigned int>("clctPidThreshPretrig"); 
  unsigned int py_clctMinSeparation = clctParams->getParameter<unsigned int>("clctMinSeparation"); 

  unsigned int py_tmbMpcBlockMe1a = tmbParams->getParameter<unsigned int>("tmbMpcBlockMe1a");
  unsigned int py_tmbAlctTrigEnable = tmbParams->getParameter<unsigned int>("tmbAlctTrigEnable"); 
  unsigned int py_tmbClctTrigEnable = tmbParams->getParameter<unsigned int>("tmbClctTrigEnable"); 
  unsigned int py_tmbMatchTrigEnable = tmbParams->getParameter<unsigned int>("tmbMatchTrigEnable"); 
  unsigned int py_tmbMatchTrigWindowSize = tmbParams->getParameter<unsigned int>("tmbMatchTrigWindowSize"); 
  unsigned int py_tmbTmbL1aWindowSize = tmbParams->getParameter<unsigned int>("tmbTmbL1aWindowSize"); 

  
  if (dbConfig->alctFifoTbins() != alctParams.getParameter<unsigned int>("alctFifoTbins"))
    std::cout << "alctFifoTbins " << dbConfig->alctFifoTbins() << " " << alctParams.getParameter<unsigned int>("alctFifoTbins") << std::endl;
  else
    std::cout << "They are the same " << dbConfig->alctFifoTbins() << std::endl;
  /*

    alctParam07 = cms.PSet(
        alctFifoTbins   = cms.uint32(16),
        alctFifoPretrig = cms.uint32(10),
        alctDriftDelay  = cms.uint32(2),
        alctNplanesHitPretrig = cms.uint32(3),
        alctNplanesHitPattern = cms.uint32(4),
        alctNplanesHitAccelPretrig = cms.uint32(3),
        alctNplanesHitAccelPattern = cms.uint32(4),
        alctTrigMode       = cms.uint32(2),
        alctAccelMode      = cms.uint32(0),
        alctL1aWindowWidth = cms.uint32(7),
        verbosity = cms.int32(0),

        # Configure early_tbins instead of hardcoding it
        alctEarlyTbins = cms.int32(4),

        # Use narrow pattern mask for ring 1 chambers
        alctNarrowMaskForR1 = cms.bool(False),

        # configured, not hardcoded, hit persistency
        alctHitPersist  = cms.uint32(6),

        # configure, not hardcode, up to how many BXs in the past
        # ghost cancellation in neighboring WGs may happen
        alctGhostCancellationBxDepth = cms.int32(4),

        # whether to compare the quality of stubs in neighboring WGs in the past
        # to the quality of a stub in current WG 
        # when doing ghost cancellation 
        alctGhostCancellationSideQuality = cms.bool(False),
        
        # how soon after pretrigger and alctDriftDelay can next pretrigger happen?
        alctPretrigDeadtime = cms.uint32(4),
        
        # SLHC only for ME11:
        # whether to store the "corrected" ALCT stub time 
        # (currently it is median time of particular hits in a pattern) into the ASCCLCTDigi bx,
        # and temporary store the regular "key layer hit" time into the CSCCLCTDigi fullBX:
        alctUseCorrectedBx = cms.bool(False)


  alctFifoPretrig()  {return m_alct_fifo_pretrig;}

  alctDriftDelay()   {return m_alct_drift_delay;}

  alctNplanesHitPretrig()  

  alctNplanesHitPattern() 

  alctNplanesHitAccelPretrig() 

  alctNplanesHitAccelPattern() 

  alctTrigMode()     {return m_alct_trig_mode;}

  alctAccelMode()    {return m_alct_accel_mode;}

  alctL1aWindowWidth() 

  clctFifoTbins()    {return m_clct_fifo_tbins;}

  clctFifoPretrig()  {return m_clct_fifo_pretrig;}

  clctHitPersist()   {return m_clct_hit_persist;}

  clctDriftDelay()   {return m_clct_drift_delay;}

  clctNplanesHitPretrig() 

  clctNplanesHitPattern() 

  clctPidThreshPretrig() 

  clctMinSeparation() 

  tmbMpcBlockMe1a()

  tmbAlctTrigEnable() 

  tmbClctTrigEnable() 


  tmbMatchTrigEnable() 

  tmbMatchTrigWindowSize() 

  tmbTmbL1aWindowSize() 
    */
}

//define this as a plug-in
#include "FWCore/Framework/interface/MakerMacros.h"
DEFINE_FWK_MODULE(L1CSCTPEmulatorConfigAnalyzer);
