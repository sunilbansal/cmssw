import FWCore.ParameterSet.Config as cms

process = cms.Process("TEST")

process.load('Configuration.StandardSequences.GeometryDB_cff')
process.load("Configuration.StandardSequences.FrontierConditions_GlobalTag_cff")
from Configuration.AlCa.GlobalTag import GlobalTag
process.GlobalTag = GlobalTag(process.GlobalTag, 'auto:run2_mc', '')

process.maxEvents = cms.untracked.PSet(
    input = cms.untracked.int32(1)
)
process.source = cms.Source("EmptySource")


from L1Trigger.CSCTriggerPrimitives.cscTriggerPrimitiveDigis_cfi import cscTriggerPrimitiveDigis

process.L1CSCTPEmulatorConfigAnalyzer = cms.EDAnalyzer("L1CSCTPEmulatorConfigAnalyzer",
                                               alctParam07 = cscTriggerPrimitiveDigis.alctParam07,
                                               clctParam07 = cscTriggerPrimitiveDigis.clctParam07,
                                               tmbParam = cscTriggerPrimitiveDigis.tmbParam,
)

process.p = cms.Path(process.L1CSCTPEmulatorConfigAnalyzer)
