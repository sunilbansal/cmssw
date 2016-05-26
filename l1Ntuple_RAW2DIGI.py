# Auto generated configuration file
# using: 
# Revision: 1.19 
# Source: /local/reps/CMSSW/CMSSW/Configuration/Applications/python/ConfigBuilder.py,v 
# with command line options: l1Ntuple -s RAW2DIGI --era=Run2_2016 --customise=L1Trigger/Configuration/customiseReEmul.L1TReEmulFromRAW --customise=L1Trigger/L1TNtuples/customiseL1Ntuple.L1NtupleEMU --customise=L1Trigger/Configuration/customiseUtils.L1TTurnOffUnpackStage2GtGmtAndCalo --conditions=auto:run2_data -n 200 --data --no_exec --no_output --filein=/store/data/Run2016A/ZeroBias1/RAW/v1/000/271/336/00000/00963A5A-BF0A-E611-A657-02163E0141FB.root --geometry=Extended2016,Extended2016Reco --customise=L1Trigger/Configuration/customiseReEmul.L1TEventSetupForHF1x1TPs
import FWCore.ParameterSet.Config as cms

from Configuration.StandardSequences.Eras import eras

process = cms.Process('RAW2DIGI',eras.Run2_2016)

# import of standard configurations
process.load('Configuration.StandardSequences.Services_cff')
process.load('SimGeneral.HepPDTESSource.pythiapdt_cfi')
process.load('FWCore.MessageService.MessageLogger_cfi')
process.load('Configuration.EventContent.EventContent_cff')
process.load('Configuration.Geometry.GeometryExtended2016Reco_cff')
process.load('Configuration.StandardSequences.MagneticField_AutoFromDBCurrent_cff')
process.load('Configuration.StandardSequences.RawToDigi_Data_cff')
process.load('Configuration.StandardSequences.EndOfProcess_cff')
process.load('Configuration.StandardSequences.FrontierConditions_GlobalTag_cff')

process.maxEvents = cms.untracked.PSet(
    input = cms.untracked.int32(10000)
)

files_2016B_run_273730 = [
"/store/data/Run2016B/ZeroBias/RAW/v2/000/273/730/00000/0041814D-AC1F-E611-A789-02163E011A12.root",
"/store/data/Run2016B/ZeroBias/RAW/v2/000/273/730/00000/021611D7-4D1F-E611-8406-02163E01393D.root",
"/store/data/Run2016B/ZeroBias/RAW/v2/000/273/730/00000/026C1DCF-AC1F-E611-9F48-02163E012429.root",
"/store/data/Run2016B/ZeroBias/RAW/v2/000/273/730/00000/0289DA67-AD1F-E611-A869-02163E013832.root",
"/store/data/Run2016B/ZeroBias/RAW/v2/000/273/730/00000/02F2A91B-4E1F-E611-9471-02163E01215C.root",
"/store/data/Run2016B/ZeroBias/RAW/v2/000/273/730/00000/062978C6-AD1F-E611-A2D1-02163E012628.root",
"/store/data/Run2016B/ZeroBias/RAW/v2/000/273/730/00000/0674AFEA-AC1F-E611-A9BE-02163E011EB9.root",
"/store/data/Run2016B/ZeroBias/RAW/v2/000/273/730/00000/0C00CEDB-A61F-E611-9F92-02163E011EC5.root",
"/store/data/Run2016B/ZeroBias/RAW/v2/000/273/730/00000/0E6E13DF-4D1F-E611-88DE-02163E0133FF.root",
"/store/data/Run2016B/ZeroBias/RAW/v2/000/273/730/00000/10089A49-AC1F-E611-8038-02163E01395B.root",
"/store/data/Run2016B/ZeroBias/RAW/v2/000/273/730/00000/100DAC68-AD1F-E611-A66E-02163E01366C.root",
"/store/data/Run2016B/ZeroBias/RAW/v2/000/273/730/00000/12AF9AEA-AC1F-E611-B25B-02163E0124FA.root",
"/store/data/Run2016B/ZeroBias/RAW/v2/000/273/730/00000/12B27480-AD1F-E611-B58A-02163E0141E8.root",
"/store/data/Run2016B/ZeroBias/RAW/v2/000/273/730/00000/12F14C73-AD1F-E611-80DC-02163E012147.root",
"/store/data/Run2016B/ZeroBias/RAW/v2/000/273/730/00000/14E74712-4E1F-E611-9C2C-02163E012BC3.root",
"/store/data/Run2016B/ZeroBias/RAW/v2/000/273/730/00000/166E11D4-4D1F-E611-89A0-02163E011922.root",
"/store/data/Run2016B/ZeroBias/RAW/v2/000/273/730/00000/1814811B-4E1F-E611-A86F-02163E0141BA.root",
"/store/data/Run2016B/ZeroBias/RAW/v2/000/273/730/00000/1A0214D6-A61F-E611-B005-02163E013892.root",
"/store/data/Run2016B/ZeroBias/RAW/v2/000/273/730/00000/1C400ED7-4D1F-E611-B995-02163E01350A.root",
    ]


# Input source
process.source = cms.Source("PoolSource",
    #fileNames = cms.untracked.vstring('/store/data/Run2016A/ZeroBias1/RAW/v1/000/271/336/00000/00963A5A-BF0A-E611-A657-02163E0141FB.root'),
    fileNames = cms.untracked.vstring(*files_2016B_run_273730),
    secondaryFileNames = cms.untracked.vstring()
)

process.options = cms.untracked.PSet(

)

# Production Info
process.configurationMetadata = cms.untracked.PSet(
    annotation = cms.untracked.string('l1Ntuple nevts:200'),
    name = cms.untracked.string('Applications'),
    version = cms.untracked.string('$Revision: 1.19 $')
)

# Output definition
process.RECOSIMoutput = cms.OutputModule("PoolOutputModule",
    dataset = cms.untracked.PSet(
        dataTier = cms.untracked.string(''),
        filterName = cms.untracked.string('')
    ),
    eventAutoFlushCompressedSize = cms.untracked.int32(5242880),
    fileName = cms.untracked.string('output_l1_2016B_run_273730.root'),
    outputCommands = cms.untracked.vstring('drop *',
                                           'keep *_simCscTriggerPrimitiveDigis_*_*',
                                           'keep *_csctfDigis_*_*',
                                           'keep *_muonCSCDigis_*_*'
                                           ),
    splitLevel = cms.untracked.int32(0)
)

# Additional output definition

# Other statements
from Configuration.AlCa.GlobalTag import GlobalTag
process.GlobalTag = GlobalTag(process.GlobalTag, 'auto:run2_data', '')

# Path and EndPath definitions
process.raw2digi_step = cms.Path(process.RawToDigi*process.csctfDigis)
process.endjob_step = cms.EndPath(process.endOfProcess)
process.RECOSIMoutput_step = cms.EndPath(process.RECOSIMoutput)

# Schedule definition
process.schedule = cms.Schedule(process.raw2digi_step,process.endjob_step,process.RECOSIMoutput_step)

# customisation of the process.

# Automatic addition of the customisation function from L1Trigger.Configuration.customiseReEmul
from L1Trigger.Configuration.customiseReEmul import L1TReEmulFromRAW,L1TEventSetupForHF1x1TPs 

#call to customisation function L1TReEmulFromRAW imported from L1Trigger.Configuration.customiseReEmul
process = L1TReEmulFromRAW(process)

#call to customisation function L1TEventSetupForHF1x1TPs imported from L1Trigger.Configuration.customiseReEmul
process = L1TEventSetupForHF1x1TPs(process)

# Automatic addition of the customisation function from L1Trigger.L1TNtuples.customiseL1Ntuple
from L1Trigger.L1TNtuples.customiseL1Ntuple import L1NtupleEMU 

#call to customisation function L1NtupleEMU imported from L1Trigger.L1TNtuples.customiseL1Ntuple
process = L1NtupleEMU(process)

# Automatic addition of the customisation function from L1Trigger.Configuration.customiseUtils
from L1Trigger.Configuration.customiseUtils import L1TTurnOffUnpackStage2GtGmtAndCalo 

#call to customisation function L1TTurnOffUnpackStage2GtGmtAndCalo imported from L1Trigger.Configuration.customiseUtils
process = L1TTurnOffUnpackStage2GtGmtAndCalo(process)

# End of customisation functions

