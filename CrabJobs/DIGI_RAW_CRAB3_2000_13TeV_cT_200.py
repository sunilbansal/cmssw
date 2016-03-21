from WMCore.Configuration import Configuration
config = Configuration()
config.section_("General")
config.General.requestName = 'DarkSUSY_mH_125_mGammaD_2000_cT_200_13TeV_DIGI_L1_DIGI2RAW_PU_MCRUN2_80_V6_v1'
config.General.workArea = 'crab_projects'
config.General.transferOutputs = True
config.section_("JobType")
config.JobType.pluginName = 'Analysis'
config.JobType.psetName = 'DisplacedMuJet_Run2_Spring_2016_cfi_DIGI_L1_DIGI2RAW_PU.py'
config.section_("Data")
config.Data.inputDataset = '/DarkSUSY_mH_125_mGammaD_2000_cT_200_13TeV_MG452_BR224_LHE_pythia8_GEN_SIM_MCRUN2_80_V6_v1/dildick-DarkSUSY_mH_125_mGammaD_2000_cT_200_13TeV_MG452_BR224_LHE_pythia8_GEN_SIM_MCRUN2_80_V6_v1-ba98ff3b5531267a52624815cad3195d/USER'
config.Data.inputDBS = 'phys03'
config.Data.splitting = 'FileBased'
config.Data.unitsPerJob = 1
config.Data.outLFNDirBase = '/store/user/dildick/'
config.Data.publication = True
config.Data.publishDataName = config.General.requestName
config.section_("Site")
config.Site.storageSite = 'T3_US_FNALLPC'
