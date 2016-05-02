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
  const std::string& myName() { return myName_;}

  const int dashedLineWidth_;
  const std::string dashedLine_;
  const std::string myName_;
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
  setup.get<CSCDBL1TPParametersRcd>().get(confH);
  const CSCDBL1TPParameters* dbConfig = confH.product();
  
  
  alctFifoTbins()    {return m_alct_fifo_tbins;}

  alctFifoPretrig()  {return m_alct_fifo_pretrig;}

  alctDriftDelay()   {return m_alct_drift_delay;}

  alctNplanesHitPretrig()  

  /** returns ALCT nplanes_hit_pattern */
  alctNplanesHitPattern() 
  {return m_alct_nplanes_hit_pattern;}

  /** returns ALCT nplanes_hit_accel_pretrig */
  alctNplanesHitAccelPretrig() 
  {return m_alct_nplanes_hit_accel_pretrig;}

  /** returns ALCT nplanes_hit_accel_pattern */
  alctNplanesHitAccelPattern() 
  {return m_alct_nplanes_hit_accel_pattern;}

  /** returns ALCT trig_mode */
  alctTrigMode()     {return m_alct_trig_mode;}

  /** returns ALCT accel_mode */
  alctAccelMode()    {return m_alct_accel_mode;}

  /** returns ALCT l1a_window_width */
  alctL1aWindowWidth() 
  {return m_alct_l1a_window_width;}

  /** returns CLCT fifo_tbins */
  clctFifoTbins()    {return m_clct_fifo_tbins;}


  /** returns CLCT fifo_pretrig */
  clctFifoPretrig()  {return m_clct_fifo_pretrig;}

  /** returns CLCT hit_persist */
  clctHitPersist()   {return m_clct_hit_persist;}

  /** returns CLCT drift_delay */
  clctDriftDelay()   {return m_clct_drift_delay;}

  /** returns CLCT nplanes_hit_pretrig */
  clctNplanesHitPretrig() 
  {return m_clct_nplanes_hit_pretrig;}

  /** returns CLCT nplanes_hit_pattern */
  clctNplanesHitPattern() 
  {return m_clct_nplanes_hit_pattern;}

  /** returns CLCT pid_thresh_pretrig */
  clctPidThreshPretrig() 
  {return m_clct_pid_thresh_pretrig;}

  /** returns CLCT min_separation */
  clctMinSeparation()  {return m_clct_min_separation;}

  /** returns TMB mpc_block_me1a */
  tmbMpcBlockMe1a()  {return m_mpc_block_me1a;}

  /** returns TMB alct_trig_enable */
  tmbAlctTrigEnable() 
  {return m_alct_trig_enable;}

  /** returns TMB clct_trig_enable */
  tmbClctTrigEnable() 
  {return m_clct_trig_enable;}


  /** returns TMB match_trig_enable */
  tmbMatchTrigEnable() 
  {return m_match_trig_enable;}

  /** returns TMB match_trig_window_size */
  tmbMatchTrigWindowSize() 
  {return m_match_trig_window_size;}

  /** returns TMB tmb_l1a_window_size */
  tmbTmbL1aWindowSize() 
  {return m_tmb_l1a_window_size;}

}

//define this as a plug-in
#include "FWCore/Framework/interface/MakerMacros.h"
DEFINE_FWK_MODULE(L1CSCTPEmulatorConfigAnalyzer);
