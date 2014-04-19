import FWCore.ParameterSet.Config as cms

gemPacker = cms.EDProducer("GEMDigiToRawModule",
    stripDigiTag = cms.InputTag("simMuonGEMDigis"),
    padDigiTag = cms.InputTag("simMuonGEMCSCPadDigis"),
    coPadDigiTag = cms.InputTag("simMuonGEMCSCPadDigis","Coincidence"),
)


