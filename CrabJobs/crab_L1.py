from CRABClient.UserUtilities import config, getUsernameFromSiteDB
config = config()
config.General.requestName = 'SingleMuPt2-50Fwd_L1_ForPR13364'
config.General.workArea = 'crab_projects'
config.General.transferOutputs = True
config.General.transferLogs = True
config.JobType.pluginName = 'Analysis'
config.JobType.psetName = 'SingleMuPt2-50Fwd_cfi_DIGI_L1.py'
config.Data.inputDBS = 'phys03'
config.Data.inputDataset = '/SingleMuPt2-50Fwd_GEN_SIM_ForPR13364/dildick-SingleMuPt2-50Fwd_DIGI_ForPR13364-32c6d4d00e8ebd04df8770f060496d8c/USER'
#config.Data.secondaryInputDataset = '/RelValMinBias_13/CMSSW_7_6_0_pre7-76X_mcRun2_asymptotic_v9_realBS-v1/GEN-SIM'
config.Data.splitting = 'FileBased'
config.Data.unitsPerJob = 1
config.Data.outLFNDirBase = '/store/user/dildick/'
config.Data.publication = True
config.Data.outputDatasetTag = config.General.requestName
config.Site.storageSite = 'T3_US_FNALLPC'
