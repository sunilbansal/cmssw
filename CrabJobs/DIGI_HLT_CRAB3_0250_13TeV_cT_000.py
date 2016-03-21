from WMCore.Configuration import Configuration
config = Configuration()
config.section_("General")
config.General.requestName = 'DarkSUSY_mH_125_mGammaD_0250_cT_000_13TeV_DIGI_L1_DIGI2RAW_HLT_PU_MCRUN2_74_V9_v1'
config.General.workArea = 'crab_projects'
config.General.transferOutputs = True
config.section_("JobType")
config.JobType.pluginName = 'Analysis'
config.JobType.psetName = 'DIGI_L1_DIGI2RAW_HLT_0250_cT_000_25ns_PoissonOOTPU_MCRUN2_74_V9_cfg.py'
config.section_("Data")
config.Data.inputDataset = '/DarkSUSY_mH_125_mGammaD_0250_cT_000_13TeV_MG452_BR224_LHE_pythia8_GEN_SIM_MCRUN2_71_V1_v1/dildick-DarkSUSY_mH_125_mGammaD_0250_cT_000_13TeV_MG452_BR224_LHE_pythia8_GEN_SIM_MCRUN2_71_V1_v1-2254e2fc8ad772cb0c788e4657181752/USER'
config.Data.inputDBS = 'phys03'
config.Data.splitting = 'FileBased'
config.Data.unitsPerJob = 1
config.Data.outLFNDirBase = '/store/user/dildick/'
config.Data.publication = True
config.Data.publishDataName = 'DarkSUSY_mH_125_mGammaD_0250_cT_000_13TeV_DIGI_L1_DIGI2RAW_HLT_PU_MCRUN2_74_V9_v1'
config.section_("Site")
config.Site.storageSite = 'T3_US_FNALLPC'
