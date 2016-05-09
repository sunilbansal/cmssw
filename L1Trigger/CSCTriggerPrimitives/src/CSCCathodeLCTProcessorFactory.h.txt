#ifndef L1Trigger_CSCTriggerPrimitives_CSCCathodeLCTProcessorFactory_h
#define L1Trigger_CSCTriggerPrimitives_CSCCathodeLCTProcessorFactory_h

/** \class GEMDigiModelFactory
 *
 * Factory of seal plugins for CSCCathodeLCTProcessor
 *
 * \author Sven Dildick
 *
 */
#include "FWCore/PluginManager/interface/PluginFactory.h"

namespace edm{
  class ParameterSet;
}

class CSCCathodeLCTProcessor;

typedef edmplugin::PluginFactory<CSCCathodeLCTProcessor *(const edm::ParameterSet &)> CSCCathodeLCTProcessorFactory;

#endif
