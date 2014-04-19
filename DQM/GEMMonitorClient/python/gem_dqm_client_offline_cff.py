import FWCore.ParameterSet.Config as cms

from DQM.GEMMonitorClient.gem_dqm_client_offline_cfi import *

gemClients = cms.Sequence(dqmGEMClient)
