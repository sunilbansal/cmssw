from WMCore.Configuration import Configuration
config = Configuration()
config.section_("General")
config.General.requestName = 'DarkSUSY_mH_125_mGammaD_2000_cT_500_13TeV_ST2L1HLT_MCRUN2_80_V6_v1'
config.General.workArea = 'crab_projects_20160401'
config.General.transferOutputs = True
config.section_("JobType")
config.JobType.pluginName = 'Analysis'
config.JobType.psetName = 'hlt_L1v4_GRun_MC_works.py'
config.section_("Data")
config.Data.inputDataset = '/DarkSUSY_mH_125_mGammaD_2000_cT_500_13TeV_MG452_BR224_LHE_pythia8_GEN_SIM_MCRUN2_80_V6_v1/dildick-DarkSUSY_mH_125_mGammaD_2000_cT_500_13TeV_DIGI_L1_DIGI2RAW_PU_MCRUN2_80_V6_v1-64ce36c4ab82e670280d68dcbacdbdad/USER'
config.Data.inputDBS = 'phys03'
config.Data.splitting = 'FileBased'
config.Data.unitsPerJob = 1
config.Data.outLFNDirBase = '/store/user/dildick/'
config.Data.publication = True
config.Data.outputDatasetTag = config.General.requestName
config.section_("Site")
config.Site.storageSite = 'T3_US_FNALLPC'
config.JobType.allowUndistributedCMSSW = True
