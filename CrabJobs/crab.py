from CRABClient.UserUtilities import config, getUsernameFromSiteDB
config = config()
config.General.requestName = 'SingleMuPt2-50Fwd_GEN_SIM_ForPR13364'
config.General.workArea = 'crab_projects'
config.General.transferOutputs = True
config.General.transferLogs = False
config.JobType.pluginName = 'PrivateMC'
config.JobType.psetName = 'SingleMuPt2-50Fwd_cfi_GEN_SIM.py'
config.Data.outputPrimaryDataset = config.General.requestName
config.Data.splitting = 'EventBased'
config.Data.unitsPerJob = 100
config.Data.totalUnits = 50000
config.Data.outLFNDirBase = '/store/user/dildick/'
config.Data.publication = True
config.Data.outputDatasetTag = config.General.requestName
config.Site.storageSite = 'T3_US_FNALLPC'
