#ifndef __L1Analysis_L1AnalysisGeneratorDataFormat_H__
#define __L1Analysis_L1AnalysisGeneratorDataFormat_H__

//-------------------------------------------------------------------------------
// Created 15/04/2010 - E. Conte, A.C. Le Bihan
// 
// 
// Original code : L1Trigger/L1TNtuples/L1NtupleProducer
//-------------------------------------------------------------------------------
#include <TROOT.h>
#include <vector>
//#include <TString.h>

#include "CommonTools/UtilAlgos/interface/TFileService.h"
#include "DataFormats/Candidate/interface/Candidate.h"
#include "DataFormats/DetId/interface/DetId.h"
#include "DataFormats/GeometrySurface/interface/Cylinder.h"
#include "DataFormats/GeometrySurface/interface/Plane.h"
#include "DataFormats/HepMCCandidate/interface/GenParticleFwd.h"
#include "DataFormats/HepMCCandidate/interface/GenParticle.h"
#include "DataFormats/Math/interface/LorentzVector.h"
#include "DataFormats/MuonReco/interface/MuonChamberMatch.h"
#include "DataFormats/MuonReco/interface/Muon.h"
#include "DataFormats/MuonReco/interface/MuonSegmentMatch.h"
#include "DataFormats/PatCandidates/interface/Muon.h"
#include "DataFormats/PatCandidates/interface/TriggerEvent.h"
#include "DataFormats/TrackingRecHit/interface/TrackingRecHit.h"
#include "DataFormats/TrackReco/interface/HitPattern.h"
#include "DataFormats/TrackReco/interface/TrackFwd.h"
#include "DataFormats/TrackReco/interface/Track.h"
#include "DataFormats/VertexReco/interface/VertexFwd.h"
#include "DataFormats/VertexReco/interface/Vertex.h"
#include "FWCore/Framework/interface/EDAnalyzer.h"
#include "FWCore/Framework/interface/ESHandle.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/ServiceRegistry/interface/Service.h"
#include "FWCore/Utilities/interface/InputTag.h"
#include "Geometry/CommonDetUnit/interface/GlobalTrackingGeometry.h"
#include "Geometry/CommonTopologies/interface/PixelTopology.h"
#include "Geometry/Records/interface/GlobalTrackingGeometryRecord.h"
#include "Geometry/Records/interface/TrackerDigiGeometryRecord.h"
#include "Geometry/TrackerGeometryBuilder/interface/PixelGeomDetUnit.h"
#include "Geometry/TrackerGeometryBuilder/interface/TrackerGeometry.h"
#include "MagneticField/Engine/interface/MagneticField.h"
#include "MagneticField/Records/interface/IdealMagneticFieldRecord.h"
#include "SimDataFormats/GeneratorProducts/interface/GenEventInfoProduct.h"
#include "TrackingTools/GeomPropagators/interface/Propagator.h"
#include "TrackingTools/Records/interface/TrackingComponentsRecord.h"
#include "TrackingTools/TrajectoryState/interface/FreeTrajectoryState.h"
#include "TrackingTools/TrajectoryState/interface/TrajectoryStateOnSurface.h"
#include "TrackingTools/TransientTrack/interface/TransientTrackBuilder.h"
#include "TrackingTools/Records/interface/TransientTrackRecord.h"
#include "TrackPropagation/SteppingHelixPropagator/interface/SteppingHelixPropagator.h"



namespace L1Analysis
{
  struct L1AnalysisGeneratorDataFormat
  {
  
    L1AnalysisGeneratorDataFormat(){Reset();};
    ~L1AnalysisGeneratorDataFormat(){};
    
    void Reset()
    {
     weight = -999.;
     pthat  = -999.;
                id.resize(0);
		status.resize(0);
		parent_id.resize(0);
		px.resize(0);
		py.resize(0);
		pz.resize(0);
		e.resize(0);

    }

                   
    // ---- L1AnalysisGeneratorDataFormat information.
    
    float weight;
    float pthat;
    std::vector<int> id;
    std::vector<int> status;
    std::vector<int> parent_id;
    std::vector<float> px;
    std::vector<float> py;
    std::vector<float> pz;
    std::vector<float> e;
    

    Float_t beamSpot_x;
    Float_t beamSpot_y;
    Float_t beamSpot_z;

    Float_t genMu0_px;
    Float_t genMu1_px;
    Float_t genMu2_px;
    Float_t genMu3_px;
  
    Float_t genMu0_py;
    Float_t genMu1_py;
    Float_t genMu2_py;
    Float_t genMu3_py;
  
    Float_t genMu0_pz;
    Float_t genMu1_pz;
    Float_t genMu2_pz;
    Float_t genMu3_pz;
  
    Float_t genMu0_pT;
    Float_t genMu1_pT;
    Float_t genMu2_pT;
    Float_t genMu3_pT;
  
    Float_t genMu0_eta;
    Float_t genMu1_eta;
    Float_t genMu2_eta;
    Float_t genMu3_eta;
  
    Float_t genMu0_phi;
    Float_t genMu1_phi;
    Float_t genMu2_phi;
    Float_t genMu3_phi;

    // GEN Level Counters: number of events with ...
    Int_t m_events4GenMu;    // ... with 4 gen muons
    Int_t m_events1GenMu17;  // ... with 1 gen muon:  pT > 17 GeV, |eta| < 0.9
    Int_t m_events2GenMu8;   // ... with 2 gen muons: pT > 8 GeV,  |eta| < 2.4
    Int_t m_events3GenMu8;   // ... with 3 gen muons: pT > 8 GeV,  |eta| < 2.4
    Int_t m_events4GenMu8;   // ... with 4 gen muons: pT > 8 GeV,  |eta| < 2.4
    Int_t m_eventsGenALxyOK; // ... with both A bosons decay inside Lxy < 4 cm
  
    // GEN Level Selectors
    Bool_t is4GenMu;
    Bool_t is1GenMu17;
    Bool_t is2GenMu8;
    Bool_t is3GenMu8;
    Bool_t is4GenMu8;
    Bool_t isGenALxyOK;

    // Bosons
    Float_t genH_m;
    Float_t genH_px;
    Float_t genH_py;
    Float_t genH_pz;
    Float_t genH_eta;
    Float_t genH_phi;
    Float_t genH_vx;
    Float_t genH_vy;
    Float_t genH_vz;
  
    Float_t genA0_m;
    Float_t genA0_px;
    Float_t genA0_py;
    Float_t genA0_pz;
    Float_t genA0_eta;
    Float_t genA0_phi;
    Float_t genA0_vx;
    Float_t genA0_vy;
    Float_t genA0_vz;
  
    Float_t genA0_Lx;
    Float_t genA0_Ly;
    Float_t genA0_Lz;
    Float_t genA0_Lxy;
    Float_t genA0_L;
  
    Float_t genA1_m;
    Float_t genA1_px;
    Float_t genA1_py;
    Float_t genA1_pz;
    Float_t genA1_eta;
    Float_t genA1_phi;
    Float_t genA1_vx;
    Float_t genA1_vy;
    Float_t genA1_vz;
  
    Float_t genA1_Lx;
    Float_t genA1_Ly;
    Float_t genA1_Lz;
    Float_t genA1_Lxy;
    Float_t genA1_L;


    // Muons accossiated with A-bosons
    Float_t genA0Mu0_px;
    Float_t genA0Mu1_px;
    Float_t genA1Mu0_px;
    Float_t genA1Mu1_px;
  
    Float_t genA0Mu0_py;
    Float_t genA0Mu1_py;
    Float_t genA1Mu0_py;
    Float_t genA1Mu1_py;
  
    Float_t genA0Mu0_pz;
    Float_t genA0Mu1_pz;
    Float_t genA1Mu0_pz;
    Float_t genA1Mu1_pz;
  
    Float_t genA0Mu0_eta;
    Float_t genA0Mu1_eta;
    Float_t genA1Mu0_eta;
    Float_t genA1Mu1_eta;
  
    Float_t genA0Mu0_phi;
    Float_t genA0Mu1_phi;
    Float_t genA1Mu0_phi;
    Float_t genA1Mu1_phi;
  
    Float_t genA0Mu0_vx;
    Float_t genA0Mu1_vx;
    Float_t genA1Mu0_vx;
    Float_t genA1Mu1_vx;
  
    Float_t genA0Mu0_vy;
    Float_t genA0Mu1_vy;
    Float_t genA1Mu0_vy;
    Float_t genA1Mu1_vy;
  
    Float_t genA0Mu0_vz;
    Float_t genA0Mu1_vz;
    Float_t genA1Mu0_vz;
    Float_t genA1Mu1_vz;

    Float_t genA0Mu_dEta;
    Float_t genA1Mu_dEta;
    Float_t genA0Mu_dPhi;
    Float_t genA1Mu_dPhi;
    Float_t genA0Mu_dR;
    Float_t genA1Mu_dR;
     
  }; 
} 
#endif


