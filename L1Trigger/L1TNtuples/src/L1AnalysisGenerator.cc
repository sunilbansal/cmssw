#include "L1Trigger/L1TNtuples/interface/L1AnalysisGenerator.h"
#include "DataFormats/HepMCCandidate/interface/GenParticle.h"
#include "SimDataFormats/GeneratorProducts/interface/HepMCProduct.h"
#include "HepMC/GenParticle.h"
#include "HepMC/GenVertex.h"
#include "DataFormats/HepMCCandidate/interface/GenParticle.h"

using namespace reco;

bool PtOrder (const reco::GenParticle* p1, const reco::GenParticle* p2) { return (p1->pt() > p2->pt() ); }

double My_dPhi (double phi1, double phi2) {
  double dPhi = phi1 - phi2;
  if (dPhi >  M_PI) dPhi -= 2.*M_PI;
  if (dPhi < -M_PI) dPhi += 2.*M_PI;
  return dPhi;
}


L1Analysis::L1AnalysisGenerator::L1AnalysisGenerator() 
{
  m_threshold_Mu17_pT  = 17.0; // min pT in GeV
  m_threshold_Mu17_eta =  0.9; // max eta in Barrel
  m_threshold_Mu8_pT   =  8.0; // min pT in GeV
  m_threshold_Mu8_eta  =  2.4; // max eta in Endcaps
  
  m_threshold_GenA_Lxy = 4.0; //
  
  m_threshold_DiMuons_dz = 0.1; //
  
  m_threshold_DiMuons_Iso_dR = 0.4; // Isolation cone
  m_threshold_DiMuons_Iso_dz = 0.1; // Track displacement [cm]
  m_threshold_DiMuons_Iso_pT = 0.5; // Track pT [GeV]

}

L1Analysis::L1AnalysisGenerator::~L1AnalysisGenerator()
{
}

void L1Analysis::L1AnalysisGenerator::Set(const edm::Event& e)
{
  int m_debug = 0;
  double eq = 0.000001; // small number used below to compare variables
  


  edm::Handle<reco::GenParticleCollection> genParticles;
   e.getByLabel("genParticles", genParticles);
   for(size_t i = 0; i < genParticles->size(); ++ i) {
     const GenParticle & p = (*genParticles)[i];
     int id = p.pdgId();
     int st = p.status();  
     if (abs(id) == 13) {
       unsigned int nMo=p.numberOfMothers();
       std::cout << "id " << id << "; st " << st 
                 << "; nMo " << nMo << std::endl;
       for(unsigned int i=0;i<nMo;++i){
         int thisParentID = dynamic_cast	<const reco::GenParticle*>(p.mother(i))->pdgId();
         std::cout << "   mother ID " << thisParentID << std::endl;
       }
		}
     
     //
// See if the parent was interesting
		int parentID = -10000;
 		unsigned int nMo=p.numberOfMothers();
		for(unsigned int i=0;i<nMo;++i){
			int thisParentID = dynamic_cast
					<const reco::GenParticle*>(p.mother(i))->pdgId();
//
// Is this a bottom hadron?
			int hundredsIndex = abs(thisParentID)/100;
			int thousandsIndex = abs(thisParentID)/1000;
			if ( ((abs(thisParentID) >= 23) && 
						(abs(thisParentID) <= 25)) ||
						(abs(thisParentID) == 6) ||
						(hundredsIndex == 5) ||
						(hundredsIndex == 4) ||
						(thousandsIndex == 5) ||
						(thousandsIndex == 4) 
					)
				parentID = thisParentID;
		}
		if ((parentID == -10000) && (nMo > 0)) 
			parentID = dynamic_cast
					<const reco::GenParticle*>(p.mother(0))->pdgId();
//
// If the parent of this particle is interesting, store all of the info
		if ((parentID != p.pdgId()) &&
			((parentID > -9999) 
			   || (abs(id) == 11)
			   || (abs(id) == 13)
			   || (abs(id) == 23)
			   || (abs(id) == 24)
			   || (abs(id) == 25)
			   || (abs(id) == 4)
			   || (abs(id) == 5)
			   || (abs(id) == 6))
			)
		{
      generator_.id.push_back(p.pdgId());
			generator_.status.push_back(p.status());
			generator_.px.push_back(p.px());
			generator_.py.push_back(p.py());
			generator_.pz.push_back(p.pz());
			generator_.e.push_back(p.energy());
			generator_.parent_id.push_back(parentID);
		}
   }

   edm::Handle<reco::BeamSpot> beamSpot;
   e.getByLabel("offlineBeamSpot", beamSpot);
   generator_.beamSpot_x = beamSpot->position().x();
   generator_.beamSpot_y = beamSpot->position().y();
   generator_.beamSpot_z = beamSpot->position().z();
   if ( m_debug > 10 ) {
     std::cout << " Beam spot "
               << " x " << generator_.beamSpot_x
               << " y " << generator_.beamSpot_y
               << " z " << generator_.beamSpot_z
               << std::endl;
   }
   //edm::Handle<reco::GenParticleCollection> genParticles;
   //e.getByLabel("genParticles", genParticles);
  
   // Loop over all genParticles and save prompt muons from particles with codes 36 (a1) or 3000022 (gammaD) in vector genMuons
   std::vector<const reco::GenParticle*> genH;
   std::vector<const reco::GenParticle*> genA_unsorted;
   std::vector<const reco::GenParticle*> genA;
   std::vector<const reco::GenParticle*> genMuons;
   std::vector<const reco::Candidate*>   genMuonMothers;
   // Loop over all gen particles
   int counterGenParticle = 0;
   for(reco::GenParticleCollection::const_iterator iGenParticle = genParticles->begin();  iGenParticle != genParticles->end();  ++iGenParticle) {
     counterGenParticle++;
     //    std::cout << counterGenParticle << " " << iGenParticle->status() << " " << iGenParticle->pdgId() << " " << iGenParticle->vx() << " " << iGenParticle->vy() << " " << iGenParticle->vz() << std::endl;
     // Check if gen particle is muon (pdgId = +/-13) and stable (status = 1)
     if ( fabs( iGenParticle->pdgId() ) == 13 && iGenParticle->status() == 1 ) {
       // Mother of the muon can be muon. Find the last muon in this chain: genMuonCand
       // Example: a1 -> mu+ (status = 3) mu- (status = 3)
       //          mu- (status = 3) -> mu- (status = 2) -> mu- (status = 1)
       const reco::Candidate *genMuonCand = &(*iGenParticle);
       bool isMuonMother = true;
       while(isMuonMother) {
         isMuonMother = false;
         for ( size_t iMother = 0; iMother < genMuonCand->numberOfMothers(); iMother++ ) {
           if ( fabs( genMuonCand->mother(iMother)->pdgId() ) == 13 ) {
             isMuonMother = true;
             genMuonCand = genMuonCand->mother(iMother);
           }
         }
       }
       // Loop over all real (non-muon) mothers of the muon (here we use genMuonCand)
       for ( size_t iMother = 0; iMother < genMuonCand->numberOfMothers(); iMother++ ) {
         // Check if mother is CP-odd Higgs (PdgId = 36) or gamma_Dark (PdgId = 3000022)
         //        if ( genMuonCand->mother(iMother)->pdgId() == 36 || genMuonCand->mother(iMother)->pdgId() == 3000022 || genMuonCand->mother(iMother)->pdgId() == 443 ) {
         if ( genMuonCand->mother(iMother)->pdgId() == 36 || genMuonCand->mother(iMother)->pdgId() == 3000022 ) {
           // Store the muon (stable, first in chain) into vector
           genMuons.push_back(&(*iGenParticle));
           // Store mother of the muon into vector. We need this to group muons into dimuons later
           genMuonMothers.push_back(genMuonCand->mother(iMother));
         }
       }
     }
     // Check if gen particle is
     if (    ( iGenParticle->status() == 3 && iGenParticle->pdgId() == 25 ) // decaying (status = 3) SM Higgs (pdgId = 25)
             || ( iGenParticle->status() == 3 && iGenParticle->pdgId() == 35 ) // decaying (status = 3) CP-even Higgs (pdgId = 35)
             ) {
       genH.push_back(&(*iGenParticle)); // Store the Higgs into vector
     }
     // Check if gen particle is
     if (    ( iGenParticle->status() == 3 && iGenParticle->pdgId() == 36      ) // decaying (status = 3) CP-odd Higgs (pdgId = 36)
             || ( iGenParticle->status() == 3 && iGenParticle->pdgId() == 3000022 ) // decaying (status = 3) gamma_Dark (pdgId = 3000022)
             //         || ( iGenParticle->status() == 2 && iGenParticle->pdgId() == 443   ) // decaying (status = 2) J/psi (pdgId = 443)
             ) {
       genA_unsorted.push_back(&(*iGenParticle));
     }
   }
  
   if ( genH.size() == 1 ) {
     generator_.genH_m   = genH[0]->mass();
     generator_.genH_px  = genH[0]->px();
     generator_.genH_py  = genH[0]->py();
     generator_.genH_pz  = genH[0]->pz();
     generator_.genH_eta = genH[0]->eta();
     generator_.genH_phi = genH[0]->phi();
     generator_.genH_vx  = genH[0]->vx() - generator_.beamSpot_x;
     generator_.genH_vy  = genH[0]->vy() - generator_.beamSpot_y;
     generator_.genH_vz  = genH[0]->vz() - generator_.beamSpot_z;
   } else {
     //    std::cout << "WARNING! genH.size() != 1" << std::endl;
   }
   if ( genA_unsorted.size() >= 2 ) {
     // Sort genA by pT (leading pT first)
     std::sort (genA_unsorted.begin(), genA_unsorted.end(), PtOrder);
      
     // Remove duplicates from genA
     //    Float_t A_pT = genA_unsorted[0]->pt();
     //    for ( unsigned int i = 1; i < genA_unsorted.size(); i++ ) {
     //      if ( fabs( genA_unsorted[i]->pt() - A_pT) > eq ) {
     //        A_pT = genA_unsorted[i]->pt();
     //        genA.push_back( genA_unsorted[i] );
     //      }
     //    }
   }
  
   genA = genA_unsorted;
  
   if ( genA.size() >= 2 ) {
     generator_.genA0_m   = genA[0]->mass();
     generator_.genA0_px  = genA[0]->px();
     generator_.genA0_py  = genA[0]->py();
     generator_.genA0_pz  = genA[0]->pz();
     generator_.genA0_eta = genA[0]->eta();
     generator_.genA0_phi = genA[0]->phi();
     generator_.genA0_vx  = genA[0]->vx() - generator_.beamSpot_x;
     generator_.genA0_vy  = genA[0]->vy() - generator_.beamSpot_y;
     generator_.genA0_vz  = genA[0]->vz() - generator_.beamSpot_z;
    
     generator_.genA1_m   = genA[1]->mass();
     generator_.genA1_px  = genA[1]->px();
     generator_.genA1_py  = genA[1]->py();
     generator_.genA1_pz  = genA[1]->pz();
     generator_.genA1_eta = genA[1]->eta();
     generator_.genA1_phi = genA[1]->phi();
     generator_.genA1_vx  = genA[1]->vx() - generator_.beamSpot_x;
     generator_.genA1_vy  = genA[1]->vy() - generator_.beamSpot_y;
     generator_.genA1_vz  = genA[1]->vz() - generator_.beamSpot_z;
   } else {
     std::cout << "WARNING! genA.size() < 2" << std::endl;
   }
   // Group muons with the same mother
   std::vector< std::vector<const reco::GenParticle*> > genMuonGroupsUnsorted;
   std::vector<const reco::Candidate*> genMuonGroupsUnsortedMothers;
   std::vector<const reco::GenParticle*> genMuonsTMP1       = genMuons;
   std::vector<const reco::Candidate*>   genMuonMothersTMP1 = genMuonMothers;
   unsigned int nMuonGroup = 0;
   while ( genMuonsTMP1.size() > 0 ) {
     std::vector<const reco::GenParticle*> genMuonsTMP2;
     std::vector<const reco::Candidate*>   genMuonMothersTMP2;
     std::vector<const reco::GenParticle*> genMuonsSameMother;
     std::vector<const reco::Candidate*>   genMuonMothersSame;
     for ( unsigned int j = 0; j < genMuonsTMP1.size(); j++ ) {
       // Check if mothers are the same particle
       if ( fabs( genMuonMothersTMP1[0]->pt() - genMuonMothersTMP1[j]->pt() ) < eq ) {
         genMuonsSameMother.push_back( genMuonsTMP1[j] );
       } else {
         genMuonsTMP2.push_back( genMuonsTMP1[j] );
         genMuonMothersTMP2.push_back( genMuonMothersTMP1[j] );
       }
     }
     genMuonGroupsUnsorted.push_back(genMuonsSameMother);
     genMuonGroupsUnsortedMothers.push_back(genMuonMothersTMP1[0]);
     genMuonsTMP1       = genMuonsTMP2;
     genMuonMothersTMP1 = genMuonMothersTMP2;
     nMuonGroup++;
   }
   // Sort muon groups to match order of genA vector
   std::vector< std::vector<const reco::GenParticle*> > genMuonGroups;
   std::vector<const reco::Candidate*> genMuonGroupsMothers;
   for (unsigned int iA = 0; iA < genA.size(); iA++ ) {
     bool isMuGroupMatchedToA = false;
     int  nMuGroup = -1;
     for ( unsigned int iMuGroup = 0; iMuGroup < genMuonGroupsUnsortedMothers.size(); iMuGroup++ ) {
       if ( fabs ( genA[iA]->pt() - genMuonGroupsUnsortedMothers[iMuGroup]->pt() ) < eq ) {
         isMuGroupMatchedToA = true;
         nMuGroup = iMuGroup;
         break;
       }
     }
     if ( isMuGroupMatchedToA && nMuGroup >= 0 ) {
       genMuonGroups.push_back( genMuonGroupsUnsorted[nMuGroup] );
       genMuonGroupsMothers.push_back( genMuonGroupsUnsortedMothers[nMuGroup] );
     } else {
       std::cout << "Error! Muon group has no matched boson A" << std::endl;
     }
   }
   generator_.isGenALxyOK = false;
   if ( genMuonGroups.size() == 2 && genMuonGroups[0].size() == 2 && genMuonGroups[1].size() == 2 ) {
     std::sort( genMuonGroups[0].begin(), genMuonGroups[0].end(), PtOrder );
     std::sort( genMuonGroups[1].begin(), genMuonGroups[1].end(), PtOrder );
    
     generator_.genA0Mu0_px = genMuonGroups[0][0]->px();
     generator_.genA0Mu1_px = genMuonGroups[0][1]->px();
     generator_.genA1Mu0_px = genMuonGroups[1][0]->px();
     generator_.genA1Mu1_px = genMuonGroups[1][1]->px();
      
     generator_.genA0Mu0_py = genMuonGroups[0][0]->py();
     generator_.genA0Mu1_py = genMuonGroups[0][1]->py();
     generator_.genA1Mu0_py = genMuonGroups[1][0]->py();
     generator_.genA1Mu1_py = genMuonGroups[1][1]->py();
      
     generator_.genA0Mu0_pz = genMuonGroups[0][0]->pz();
     generator_.genA0Mu1_pz = genMuonGroups[0][1]->pz();
     generator_.genA1Mu0_pz = genMuonGroups[1][0]->pz();
     generator_.genA1Mu1_pz = genMuonGroups[1][1]->pz();
    
     generator_.genA0Mu0_eta = genMuonGroups[0][0]->eta();
     generator_.genA0Mu1_eta = genMuonGroups[0][1]->eta();
     generator_.genA1Mu0_eta = genMuonGroups[1][0]->eta();
     generator_.genA1Mu1_eta = genMuonGroups[1][1]->eta();
    
     generator_.genA0Mu0_phi = genMuonGroups[0][0]->phi();
     generator_.genA0Mu1_phi = genMuonGroups[0][1]->phi();
     generator_.genA1Mu0_phi = genMuonGroups[1][0]->phi();
     generator_.genA1Mu1_phi = genMuonGroups[1][1]->phi();
     generator_.genA0Mu0_vx = genMuonGroups[0][0]->vx() - generator_.beamSpot_x;
     generator_.genA0Mu1_vx = genMuonGroups[0][1]->vx() - generator_.beamSpot_x;
     generator_.genA1Mu0_vx = genMuonGroups[1][0]->vx() - generator_.beamSpot_x;
     generator_.genA1Mu1_vx = genMuonGroups[1][1]->vx() - generator_.beamSpot_x;
    
     generator_.genA0Mu0_vy = genMuonGroups[0][0]->vy() - generator_.beamSpot_y;
     generator_.genA0Mu1_vy = genMuonGroups[0][1]->vy() - generator_.beamSpot_y;
     generator_.genA1Mu0_vy = genMuonGroups[1][0]->vy() - generator_.beamSpot_y;
     generator_.genA1Mu1_vy = genMuonGroups[1][1]->vy() - generator_.beamSpot_y;
    
     generator_.genA0Mu0_vz = genMuonGroups[0][0]->vz() - generator_.beamSpot_z;
     generator_.genA0Mu1_vz = genMuonGroups[0][1]->vz() - generator_.beamSpot_z;
     generator_.genA1Mu0_vz = genMuonGroups[1][0]->vz() - generator_.beamSpot_z;
     generator_.genA1Mu1_vz = genMuonGroups[1][1]->vz() - generator_.beamSpot_z;

     if (    fabs(generator_.genA0Mu0_vx - generator_.genA0Mu1_vx) < eq
             && fabs(generator_.genA1Mu0_vx - generator_.genA1Mu1_vx) < eq
             && fabs(generator_.genA0Mu0_vy - generator_.genA0Mu1_vy) < eq
             && fabs(generator_.genA1Mu0_vy - generator_.genA1Mu1_vy) < eq
             && fabs(generator_.genA0Mu0_vz - generator_.genA0Mu1_vz) < eq
             && fabs(generator_.genA1Mu0_vz - generator_.genA1Mu1_vz) < eq
             ) {
       generator_.genA0_Lx = generator_.genA0Mu0_vx - generator_.genA0_vx;
       generator_.genA1_Lx = generator_.genA1Mu0_vx - generator_.genA1_vx;
            
       generator_.genA0_Ly = generator_.genA0Mu0_vy - generator_.genA0_vy;
       generator_.genA1_Ly = generator_.genA1Mu0_vy - generator_.genA1_vy;
            
       generator_.genA0_Lz = generator_.genA0Mu0_vz - generator_.genA0_vz;
       generator_.genA1_Lz = generator_.genA1Mu0_vz - generator_.genA1_vz;
            
       generator_.genA0_Lxy = sqrt( generator_.genA0_Lx * generator_.genA0_Lx + generator_.genA0_Ly * generator_.genA0_Ly );
       generator_.genA1_Lxy = sqrt( generator_.genA1_Lx * generator_.genA1_Lx + generator_.genA1_Ly * generator_.genA1_Ly );

       generator_.genA0_L = sqrt( generator_.genA0_Lx * generator_.genA0_Lx + generator_.genA0_Ly * generator_.genA0_Ly + generator_.genA0_Lz * generator_.genA0_Lz );
       generator_.genA1_L = sqrt( generator_.genA1_Lx * generator_.genA1_Lx + generator_.genA1_Ly * generator_.genA1_Ly + generator_.genA1_Lz * generator_.genA1_Lz );
               
       if ( generator_.genA0_Lxy < m_threshold_GenA_Lxy && generator_.genA1_Lxy < m_threshold_GenA_Lxy ) generator_.isGenALxyOK = true;
     } else {
       std::cout << "WARNING! Muon vertexes are different. No Lxy's are calculated." << std::endl;
       generator_.genA0_Lx  = -1000.0;
       generator_.genA1_Lx  = -1000.0;
       generator_.genA0_Ly  = -1000.0;
       generator_.genA1_Ly  = -1000.0;
       generator_.genA0_Lz  = -1000.0;
       generator_.genA1_Lz  = -1000.0;
       generator_.genA0_Lxy = -1000.0;
       generator_.genA1_Lxy = -1000.0;
       generator_.genA0_L   = -1000.0;
       generator_.genA1_L   = -1000.0;
     }

     generator_.genA0Mu_dEta = genMuonGroups[0][0]->eta() - genMuonGroups[0][1]->eta();
     generator_.genA1Mu_dEta = genMuonGroups[1][0]->eta() - genMuonGroups[1][1]->eta();
     generator_.genA0Mu_dPhi = My_dPhi( genMuonGroups[0][0]->phi(), genMuonGroups[0][1]->phi() );
     generator_.genA1Mu_dPhi = My_dPhi( genMuonGroups[1][0]->phi(), genMuonGroups[1][1]->phi() );
     generator_.genA0Mu_dR   = sqrt(generator_.genA0Mu_dEta*generator_.genA0Mu_dEta + generator_.genA0Mu_dPhi*generator_.genA0Mu_dPhi);
     generator_.genA1Mu_dR   = sqrt(generator_.genA1Mu_dEta*generator_.genA1Mu_dEta + generator_.genA1Mu_dPhi*generator_.genA1Mu_dPhi);
   } else {
      
   }
    
   if ( generator_.isGenALxyOK ) m_eventsGenALxyOK++;
  
   // Sort genMuons by pT (leading pT first)
   if ( genMuons.size() > 1 ) std::sort( genMuons.begin(), genMuons.end(), PtOrder );
  
   generator_.is4GenMu = false;

   if ( genMuons.size() == 4 ){
     m_events4GenMu++;
     generator_.is4GenMu = true;
   }

   if ( genMuons.size() > 0 ) {
     generator_.genMu0_px  = genMuons[0]->px();
     generator_.genMu0_py  = genMuons[0]->py();
     generator_.genMu0_pz  = genMuons[0]->pz();
     generator_.genMu0_pT  = genMuons[0]->pt();
     generator_.genMu0_eta = genMuons[0]->eta();
     generator_.genMu0_phi = genMuons[0]->phi();
   } else {
     generator_.genMu0_px  = -100.0;
     generator_.genMu0_py  = -100.0;
     generator_.genMu0_pz  = -100.0;
     generator_.genMu0_pT  = -100.0;
     generator_.genMu0_eta = -100.0;
     generator_.genMu0_phi = -100.0;
   }
   if ( genMuons.size() > 1 ) {
     generator_.genMu1_px  = genMuons[1]->px();
     generator_.genMu1_py  = genMuons[1]->py();
     generator_.genMu1_pz  = genMuons[1]->pz();
     generator_.genMu1_pT  = genMuons[1]->pt();
     generator_.genMu1_eta = genMuons[1]->eta();
     generator_.genMu1_phi = genMuons[1]->phi();
   } else {
     generator_.genMu1_px  = -100.0;
     generator_.genMu1_py  = -100.0;
     generator_.genMu1_pz  = -100.0;
     generator_.genMu1_pT  = -100.0;
     generator_.genMu1_eta = -100.0;
     generator_.genMu1_phi = -100.0;
   }

   if ( genMuons.size() > 2 ) {
     generator_.genMu2_px  = genMuons[2]->px();
     generator_.genMu2_py  = genMuons[2]->py();
     generator_.genMu2_pz  = genMuons[2]->pz();
     generator_.genMu2_pT  = genMuons[2]->pt();
     generator_.genMu2_eta = genMuons[2]->eta();
     generator_.genMu2_phi = genMuons[2]->phi();
   } else {
     generator_.genMu2_px  = -100.0;
     generator_.genMu2_py  = -100.0;
     generator_.genMu2_pz  = -100.0;
     generator_.genMu2_pT  = -100.0;
     generator_.genMu2_eta = -100.0;
     generator_.genMu2_phi = -100.0;
   }
   if ( genMuons.size() > 3 ) {
     generator_.genMu3_px  = genMuons[3]->px();
     generator_.genMu3_py  = genMuons[3]->py();
     generator_.genMu3_pz  = genMuons[3]->pz();
     generator_.genMu3_pT  = genMuons[3]->pt();
     generator_.genMu3_eta = genMuons[3]->eta();
     generator_.genMu3_phi = genMuons[3]->phi();
   } else {
     generator_.genMu3_px  = -100.0;
     generator_.genMu3_py  = -100.0;
     generator_.genMu3_pz  = -100.0;
     generator_.genMu3_pT  = -100.0;
     generator_.genMu3_eta = -100.0;
     generator_.genMu3_phi = -100.0;
   }

   std::vector<const reco::GenParticle*> genMuons17;
   std::vector<const reco::GenParticle*> genMuons8;
  
   for ( unsigned int i = 0; i < genMuons.size(); i++ ) {
     if ( genMuons[i]->pt() > m_threshold_Mu17_pT && fabs( genMuons[i]->eta() ) < m_threshold_Mu17_eta ) {
       genMuons17.push_back(genMuons[i]);
     }
     if ( genMuons[i]->pt() > m_threshold_Mu8_pT && fabs( genMuons[i]->eta() ) < m_threshold_Mu8_eta ) {
       genMuons8.push_back(genMuons[i]);
     }
   }
   generator_.is1GenMu17 = false; 
   generator_.is2GenMu8  = false;
   generator_.is3GenMu8  = false;
   generator_.is4GenMu8  = false;

   if ( genMuons17.size() >=1) {
     m_events1GenMu17++;
     generator_.is1GenMu17 = true;
     if ( genMuons8.size() >=2 ) {
       m_events2GenMu8++;
       generator_.is2GenMu8 = true;
     }
     if ( genMuons8.size() >=3 ) {
       m_events3GenMu8++;
       generator_.is3GenMu8 = true;
     }
     if ( genMuons8.size() >=4 ) {
       m_events4GenMu8++;
       generator_.is4GenMu8 = true;
     }
   }

}
