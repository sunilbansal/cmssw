import FWCore.ParameterSet.Config as cms

from DQM.GEMMonitorModule.gem_dqm_source_offline_cfi import *

gemSources = cms.Sequence(dqmGEMSource)
