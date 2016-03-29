#ifndef __L1Analysis_L1AnalysisGenerator_H__
#define __L1Analysis_L1AnalysisGenerator_H__

//-------------------------------------------------------------------------------
// Created 06/01/2010 - A.C. Le Bihan
// 
// 
// Original code : L1Trigger/L1TNtuples/L1NtupleProducer
//-------------------------------------------------------------------------------
#include "FWCore/Framework/interface/Event.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisGeneratorDataFormat.h"

namespace L1Analysis
{
  class L1AnalysisGenerator 
  {
  public:
    L1AnalysisGenerator();
    ~L1AnalysisGenerator();
    void Reset() {generator_.Reset();}
    void Set(const edm::Event& e);
    L1AnalysisGeneratorDataFormat * getData(){return &generator_;}
   
  private :
    L1AnalysisGeneratorDataFormat generator_;            

    // GEN Level Counters: number of events with ...
    Int_t m_events4GenMu;    // ... with 4 gen muons
    Int_t m_events1GenMu17;  // ... with 1 gen muon:  pT > 17 GeV, |eta| < 0.9
    Int_t m_events2GenMu8;   // ... with 2 gen muons: pT > 8 GeV,  |eta| < 2.4
    Int_t m_events3GenMu8;   // ... with 3 gen muons: pT > 8 GeV,  |eta| < 2.4
    Int_t m_events4GenMu8;   // ... with 4 gen muons: pT > 8 GeV,  |eta| < 2.4
    Int_t m_eventsGenALxyOK; // ... with both A bosons decay inside Lxy < 4 cm

    Float_t m_threshold_Mu17_pT;
    Float_t m_threshold_Mu17_eta;
    Float_t m_threshold_Mu8_pT;
    Float_t m_threshold_Mu8_eta;
  
    Float_t m_threshold_GenA_Lxy;
  
    Float_t m_threshold_DiMuons_dz;
  
    Float_t m_threshold_DiMuons_Iso;
    Float_t m_threshold_DiMuons_Iso_dR;  
    Float_t m_threshold_DiMuons_Iso_dz;
    Float_t m_threshold_DiMuons_Iso_pT;
     
  }; 
} 
#endif


