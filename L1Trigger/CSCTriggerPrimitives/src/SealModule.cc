#include "FWCore/PluginManager/interface/ModuleDef.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "L1Trigger/CSCTriggerPrimitives/src/CSCCathodeLCTProcessorFactory.h""

#include "L1Trigger/CSCTriggerPrimitives/src/GEMTrivialModel.h"
DEFINE_EDM_PLUGIN(GEMDigiModelFactory, GEMTrivialModel, "GEMTrivialModel");

#include "L1Trigger/CSCTriggerPrimitives/src/GEMSimpleModel.h"
DEFINE_EDM_PLUGIN(GEMDigiModelFactory, GEMSimpleModel, "GEMSimpleModel");

