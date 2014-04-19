import FWCore.ParameterSet.Config as cms

gemUnpacker = cms.EDProducer("GEMRawToDigiModule",
    inputLabel = cms.InputTag("rawDataCollector"),
)
