from CRABClient.UserUtilities import config
config = config()

config.section_("General")
config.General.requestName = ''
config.General.workArea = 'crab_projects'
config.General.transferLogs = True

config.section_("JobType")
config.JobType.pluginName = 'Analysis'
config.JobType.psetName = ''
config.JobType.outputFiles = 'out_hlt.root'

config.section_("Data")
config.Data.inputDataset = '/HLTPhysics4/Run2015D-v1/RAW'
config.Data.inputDBS = 'global'
config.Data.splitting = 'LumiBased'
config.Data.unitsPerJob = 5
config.Data.lumiMask = 'Cert_246908-260627_13TeV_PromptReco_Collisions15_25ns_JSON_v2.txt'
#config.Data.outLFNDirBase = '/store/group/alca_muonalign/lpernie/DoubleMuonRun2015D_PromptReco_AOD246908-258750_7412p4_patch1_patTuple_cutana_mujets'
config.Data.outLFNDirBase = '/store/group/lpcgem/'
config.Data.publication = True
config.Data.outputDatasetTag = ''
'''
- 4569 2232 bunches, PU: 17 ~ 13 , run 260627
- 4525 517 bunches (8b4e) , PU: 22 ~ 20, run 259721
- 4518 589 bunches , PU: 17 ~ 15, run 259626
- 4467 1596 bunches, PU: 15 ~ 9 , run 258425
'''
config.Data.runRange = '258425,259626,259721,260627'
config.section_("Site")
#config.Site.storageSite = 'T2_CH_CERN'
config.Site.storageSite = 'T3_US_FNALLPC'

#https://cms-service-dqm.web.cern.ch/cms-service-dqm/CAF/certification/Collisions15/13TeV/
#https://cmsweb.cern.ch/das/request?view=list&limit=50&instance=prod%2Fglobal&input=dataset%3D%2FDoubleMu*%2FRun2015*-PromptReco-v1%2FAOD

#NJOBS = 1
#config.Data.totalUnits = config.Data.unitsPerJob * NJOBS
