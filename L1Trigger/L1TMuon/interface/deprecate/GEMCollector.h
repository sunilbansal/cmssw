#ifndef __L1TMUON_GEMCOLLECTOR_H__
#define __L1TMUON_GEMCOLLECTOR_H__
// 
// Class: L1TMuon::GEMCollector
//
// Info: Processes GEM digis into L1TMuon trigger primitives. 
//       Positional information is not assigned here.
//
// Author: L. Gray (FNAL)
//
#include <vector>
#include "SubsystemCollector.h"
#include "FWCore/Utilities/interface/InputTag.h"

namespace L1TMuon {
  
  class GEMCollector: public SubsystemCollector {
  public:
    GEMCollector(const edm::ParameterSet&);
    ~GEMCollector() {}

    virtual void extractPrimitives(const edm::Event&, const edm::EventSetup&, 
				   std::vector<TriggerPrimitive>&) const;
  private:    
  };
}

#endif
