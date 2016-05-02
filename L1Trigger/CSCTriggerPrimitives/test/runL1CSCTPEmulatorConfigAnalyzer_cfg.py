import FWCore.ParameterSet.Config as cms

from Configuration.StandardSequences.Eras import eras

process = cms.Process("TEST",eras.Run2_25ns)

process.load('Configuration.StandardSequences.GeometryDB_cff')
process.load('L1Trigger.CSCTriggerPrimitives.cscTriggerPrimitiveDigis_cfi')
process.load("Configuration.StandardSequences.FrontierConditions_GlobalTag_cff")
from Configuration.AlCa.GlobalTag import GlobalTag
process.GlobalTag = GlobalTag(process.GlobalTag, 'auto:run2_mc', '')

process.maxEvents = cms.untracked.PSet(
    input = cms.untracked.int32(1)
)
process.source = cms.Source("EmptySource")

process.L1CSCTPEmulatorConfigAnalyzer = cms.EDAnalyzer("L1CSCTPEmulatorConfigAnalyzer",
    alctParam07 = process.cscTriggerPrimitiveDigis.alctParam07,
    clctParam07 = process.cscTriggerPrimitiveDigis.clctParam07,
    tmbParam = process.cscTriggerPrimitiveDigis.tmbParam,
)

process.p = cms.Path(process.L1CSCTPEmulatorConfigAnalyzer)
