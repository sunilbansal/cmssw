#include "L1Trigger/L1TMuon/interface/deprecate/GEMCollector.h"
#include "DataFormats/GEMDigi/interface/GEMPadDigi.h"
#include "DataFormats/GEMDigi/interface/GEMPadDigiCollection.h"
#include "DataFormats/MuonDetId/interface/GEMDetId.h"

#include "DataFormats/Common/interface/Handle.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/EventSetup.h"

using namespace L1TMuon;

GEMCollector::GEMCollector( const edm::ParameterSet& ps ):
  SubsystemCollector(ps) {
}

void GEMCollector::
extractPrimitives(const edm::Event& ev, 
		  const edm::EventSetup& es, 
		  std::vector<TriggerPrimitive>& out) const {
  edm::Handle<GEMPadDigiCollection> gemDigis;  
  ev.getByLabel(_src,gemDigis);
  
  auto chamber = gemDigis->begin();
  auto chend  = gemDigis->end();
  for( ; chamber != chend; ++chamber ) {
    auto digi = (*chamber).second.first;
    auto dend = (*chamber).second.second;
    for( ; digi != dend; ++digi ) {
      out.push_back(TriggerPrimitive((*chamber).first,
				     digi->pad(),
				     (*chamber).first.layer(),
				     digi->bx()));
    }
  }  
}

#include "L1Trigger/L1TMuon/interface/deprecate/SubsystemCollectorFactory.h"
DEFINE_EDM_PLUGIN( SubsystemCollectorFactory, GEMCollector, "GEMCollector");
