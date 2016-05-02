import FWCore.ParameterSet.Config as cms

process = cms.Process("TEST")

process.load('Configuration.StandardSequences.GeometryDB_cff')
process.load("Configuration.StandardSequences.FrontierConditions_GlobalTag_cff")
from Configuration.AlCa.GlobalTag import GlobalTag
process.GlobalTag = GlobalTag(process.GlobalTag, 'auto:run2_mc', '')

L1CSCTPEmulatorConfigAnalyzer = cms.EDAnalyzer("L1CSCTPEmulatorConfigAnalyzer")

process.p = cms.Path(process.L1CSCTPEmulatorConfigAnalyzer)
