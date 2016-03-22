# /dev/CMSSW_8_0_0/GRun/V32 (CMSSW_8_0_3)

import FWCore.ParameterSet.Config as cms


HLTConfigVersion = cms.PSet(
  tableName = cms.string('/dev/CMSSW_8_0_0/GRun/V32')
)

HLTPSetInitialStepTrajectoryFilterBase = cms.PSet( 
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  minimumNumberOfHits = cms.int32( 3 ),
  chargeSignificance = cms.double( -1.0 ),
  minPt = cms.double( 0.05 ),
  nSigmaMinPt = cms.double( 5.0 ),
  minHitsMinPt = cms.int32( 3 ),
  maxLostHits = cms.int32( 999 ),
  maxConsecLostHits = cms.int32( 1 ),
  maxNumberOfHits = cms.int32( 100 ),
  maxLostHitsFraction = cms.double( 0.1 ),
  constantValueForLostHitsFractionFilter = cms.double( 1.0 ),
  minNumberOfHits = cms.int32( 13 ),
  minNumberOfHitsPerLoop = cms.int32( 4 ),
  extraNumberOfHitsBeforeTheFirstLoop = cms.int32( 4 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  maxCCCLostHits = cms.int32( 9999 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTPSetInitialStepTrajectoryBuilder = cms.PSet( 
  ComponentType = cms.string( "GroupedCkfTrajectoryBuilder" ),
  bestHitOnly = cms.bool( True ),
  propagatorAlong = cms.string( "PropagatorWithMaterial" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetInitialStepTrajectoryFilterBase" ) ),
  inOutTrajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetInitialStepTrajectoryFilterBase" ) ),
  useSameTrajFilter = cms.bool( True ),
  maxCand = cms.int32( 6 ),
  intermediateCleaning = cms.bool( True ),
  lostHitPenalty = cms.double( 30.0 ),
  MeasurementTrackerName = cms.string( "" ),
  lockHits = cms.bool( True ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  foundHitBonus = cms.double( 5.0 ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( True ),
  requireSeedHitsInRebuild = cms.bool( True ),
  keepOriginalIfRebuildFails = cms.bool( False ),
  estimator = cms.string( "hltESPInitialStepChi2MeasurementEstimator36" ),
  propagatorOpposite = cms.string( "PropagatorWithMaterialOpposite" ),
  minNrOfHitsForRebuild = cms.int32( 5 ),
  maxDPhiForLooperReconstruction = cms.double( 2.0 ),
  maxPtForLooperReconstruction = cms.double( 0.7 )
)
HLTPSetDetachedStepTrajectoryFilterBase = cms.PSet( 
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  minimumNumberOfHits = cms.int32( 3 ),
  chargeSignificance = cms.double( -1.0 ),
  minPt = cms.double( 0.075 ),
  nSigmaMinPt = cms.double( 5.0 ),
  minHitsMinPt = cms.int32( 3 ),
  maxLostHits = cms.int32( 999 ),
  maxConsecLostHits = cms.int32( 1 ),
  maxNumberOfHits = cms.int32( 100 ),
  maxLostHitsFraction = cms.double( 0.1 ),
  constantValueForLostHitsFractionFilter = cms.double( 0.601 ),
  minNumberOfHits = cms.int32( 13 ),
  minNumberOfHitsPerLoop = cms.int32( 4 ),
  extraNumberOfHitsBeforeTheFirstLoop = cms.int32( 4 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  maxCCCLostHits = cms.int32( 9999 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTPSetDetachedStepTrajectoryBuilder = cms.PSet( 
  ComponentType = cms.string( "GroupedCkfTrajectoryBuilder" ),
  bestHitOnly = cms.bool( True ),
  propagatorAlong = cms.string( "PropagatorWithMaterial" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetDetachedStepTrajectoryFilterBase" ) ),
  inOutTrajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetDetachedStepTrajectoryFilterBase" ) ),
  useSameTrajFilter = cms.bool( True ),
  maxCand = cms.int32( 2 ),
  intermediateCleaning = cms.bool( True ),
  lostHitPenalty = cms.double( 30.0 ),
  MeasurementTrackerName = cms.string( "" ),
  lockHits = cms.bool( True ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  foundHitBonus = cms.double( 5.0 ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( False ),
  requireSeedHitsInRebuild = cms.bool( True ),
  keepOriginalIfRebuildFails = cms.bool( False ),
  estimator = cms.string( "hltESPChi2MeasurementEstimator9" ),
  propagatorOpposite = cms.string( "PropagatorWithMaterialOpposite" ),
  minNrOfHitsForRebuild = cms.int32( 5 ),
  maxDPhiForLooperReconstruction = cms.double( 2.0 ),
  maxPtForLooperReconstruction = cms.double( 0.7 )
)
HLTPSetPixelPairStepTrajectoryFilterBase = cms.PSet( 
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  minimumNumberOfHits = cms.int32( 3 ),
  chargeSignificance = cms.double( -1.0 ),
  minPt = cms.double( 0.05 ),
  nSigmaMinPt = cms.double( 5.0 ),
  minHitsMinPt = cms.int32( 3 ),
  maxLostHits = cms.int32( 999 ),
  maxConsecLostHits = cms.int32( 1 ),
  maxNumberOfHits = cms.int32( 100 ),
  maxLostHitsFraction = cms.double( 0.1 ),
  constantValueForLostHitsFractionFilter = cms.double( 1.0 ),
  minNumberOfHits = cms.int32( 13 ),
  minNumberOfHitsPerLoop = cms.int32( 4 ),
  extraNumberOfHitsBeforeTheFirstLoop = cms.int32( 4 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  maxCCCLostHits = cms.int32( 9999 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTPSetPixelPairStepTrajectoryBuilder = cms.PSet( 
  ComponentType = cms.string( "GroupedCkfTrajectoryBuilder" ),
  bestHitOnly = cms.bool( True ),
  propagatorAlong = cms.string( "PropagatorWithMaterial" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetPixelPairStepTrajectoryFilterBase" ) ),
  inOutTrajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetPixelPairStepTrajectoryFilterBase" ) ),
  useSameTrajFilter = cms.bool( True ),
  maxCand = cms.int32( 6 ),
  intermediateCleaning = cms.bool( True ),
  lostHitPenalty = cms.double( 30.0 ),
  MeasurementTrackerName = cms.string( "" ),
  lockHits = cms.bool( True ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  foundHitBonus = cms.double( 5.0 ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( True ),
  requireSeedHitsInRebuild = cms.bool( True ),
  keepOriginalIfRebuildFails = cms.bool( False ),
  estimator = cms.string( "hltESPPixelPairStepChi2MeasurementEstimator25" ),
  propagatorOpposite = cms.string( "PropagatorWithMaterialOpposite" ),
  minNrOfHitsForRebuild = cms.int32( 5 ),
  maxDPhiForLooperReconstruction = cms.double( 2.0 ),
  maxPtForLooperReconstruction = cms.double( 0.7 )
)
HLTPSetMixedStepTrajectoryFilterBase = cms.PSet( 
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  minimumNumberOfHits = cms.int32( 3 ),
  seedPairPenalty = cms.int32( 0 ),
  chargeSignificance = cms.double( -1.0 ),
  minPt = cms.double( 0.05 ),
  nSigmaMinPt = cms.double( 5.0 ),
  minHitsMinPt = cms.int32( 3 ),
  maxLostHits = cms.int32( 0 ),
  maxConsecLostHits = cms.int32( 1 ),
  maxNumberOfHits = cms.int32( 100 ),
  maxLostHitsFraction = cms.double( 0.1 ),
  constantValueForLostHitsFractionFilter = cms.double( 2.0 ),
  minNumberOfHits = cms.int32( 13 ),
  minNumberOfHitsPerLoop = cms.int32( 4 ),
  extraNumberOfHitsBeforeTheFirstLoop = cms.int32( 4 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  maxCCCLostHits = cms.int32( 9999 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTPSetMixedStepTrajectoryBuilder = cms.PSet( 
  ComponentType = cms.string( "GroupedCkfTrajectoryBuilder" ),
  bestHitOnly = cms.bool( True ),
  propagatorAlong = cms.string( "PropagatorWithMaterialForMixedStep" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetMixedStepTrajectoryFilterBase" ) ),
  inOutTrajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetMixedStepTrajectoryFilterBase" ) ),
  useSameTrajFilter = cms.bool( True ),
  maxCand = cms.int32( 3 ),
  intermediateCleaning = cms.bool( True ),
  lostHitPenalty = cms.double( 30.0 ),
  MeasurementTrackerName = cms.string( "" ),
  lockHits = cms.bool( True ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  foundHitBonus = cms.double( 5.0 ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( True ),
  requireSeedHitsInRebuild = cms.bool( True ),
  keepOriginalIfRebuildFails = cms.bool( False ),
  estimator = cms.string( "hltESPPixelPairStepChi2MeasurementEstimator25" ),
  propagatorOpposite = cms.string( "PropagatorWithMaterialForMixedStepOpposite" ),
  minNrOfHitsForRebuild = cms.int32( 5 ),
  maxDPhiForLooperReconstruction = cms.double( 2.0 ),
  maxPtForLooperReconstruction = cms.double( 0.7 )
)
HLTPSetPixelLessStepTrajectoryFilterBase = cms.PSet( 
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  minimumNumberOfHits = cms.int32( 4 ),
  chargeSignificance = cms.double( -1.0 ),
  minPt = cms.double( 0.05 ),
  nSigmaMinPt = cms.double( 5.0 ),
  minHitsMinPt = cms.int32( 3 ),
  maxLostHits = cms.int32( 0 ),
  maxConsecLostHits = cms.int32( 1 ),
  maxNumberOfHits = cms.int32( 100 ),
  maxLostHitsFraction = cms.double( 0.1 ),
  constantValueForLostHitsFractionFilter = cms.double( 1.0 ),
  minNumberOfHits = cms.int32( 13 ),
  minNumberOfHitsPerLoop = cms.int32( 4 ),
  extraNumberOfHitsBeforeTheFirstLoop = cms.int32( 4 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  maxCCCLostHits = cms.int32( 9999 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTPSetPixelLessStepTrajectoryBuilder = cms.PSet( 
  ComponentType = cms.string( "GroupedCkfTrajectoryBuilder" ),
  bestHitOnly = cms.bool( True ),
  propagatorAlong = cms.string( "PropagatorWithMaterial" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetPixelLessStepTrajectoryFilterBase" ) ),
  inOutTrajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetPixelLessStepTrajectoryFilterBase" ) ),
  useSameTrajFilter = cms.bool( True ),
  maxCand = cms.int32( 2 ),
  intermediateCleaning = cms.bool( True ),
  lostHitPenalty = cms.double( 30.0 ),
  MeasurementTrackerName = cms.string( "" ),
  lockHits = cms.bool( True ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  foundHitBonus = cms.double( 5.0 ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( False ),
  requireSeedHitsInRebuild = cms.bool( True ),
  keepOriginalIfRebuildFails = cms.bool( False ),
  estimator = cms.string( "hltESPChi2MeasurementEstimator9" ),
  propagatorOpposite = cms.string( "PropagatorWithMaterialOpposite" ),
  minNrOfHitsForRebuild = cms.int32( 4 ),
  maxDPhiForLooperReconstruction = cms.double( 2.0 ),
  maxPtForLooperReconstruction = cms.double( 0.7 )
)
transferSystem = cms.PSet( 
  destinations = cms.vstring( 'Tier0',
    'DQM',
    'ECAL',
    'EventDisplay',
    'Lustre',
    'None' ),
  transferModes = cms.vstring( 'default',
    'test',
    'emulator' ),
  streamA = cms.PSet( 
    default = cms.vstring( 'Tier0' ),
    test = cms.vstring( 'Lustre' ),
    emulator = cms.vstring( 'Lustre' )
  ),
  streamCalibration = cms.PSet( 
    default = cms.vstring( 'Tier0' ),
    test = cms.vstring( 'Lustre' ),
    emulator = cms.vstring( 'None' )
  ),
  streamDQM = cms.PSet( 
    default = cms.vstring( 'DQM' ),
    test = cms.vstring( 'DQM',
      'Lustre' ),
    emulator = cms.vstring( 'None' )
  ),
  streamDQMCalibration = cms.PSet( 
    default = cms.vstring( 'DQM' ),
    test = cms.vstring( 'DQM',
      'Lustre' ),
    emulator = cms.vstring( 'None' )
  ),
  streamEcalCalibration = cms.PSet( 
    default = cms.vstring( 'ECAL' ),
    test = cms.vstring( 'ECAL' ),
    emulator = cms.vstring( 'None' )
  ),
  streamEventDisplay = cms.PSet( 
    default = cms.vstring( 'EventDisplay',
      'Tier0' ),
    test = cms.vstring( 'EventDisplay',
      'Lustre' ),
    emulator = cms.vstring( 'None' )
  ),
  streamExpressCosmics = cms.PSet( 
    default = cms.vstring( 'Tier0' ),
    test = cms.vstring( 'Lustre' ),
    emulator = cms.vstring( 'Lustre' )
  ),
  streamNanoDST = cms.PSet( 
    default = cms.vstring( 'Tier0' ),
    test = cms.vstring( 'Lustre' ),
    emulator = cms.vstring( 'None' )
  ),
  streamRPCMON = cms.PSet( 
    default = cms.vstring( 'Tier0' ),
    test = cms.vstring( 'Lustre' ),
    emulator = cms.vstring( 'None' )
  ),
  streamTrackerCalibration = cms.PSet( 
    default = cms.vstring( 'Tier0' ),
    test = cms.vstring( 'Lustre' ),
    emulator = cms.vstring( 'None' )
  ),
  default = cms.PSet( 
    default = cms.vstring( 'Tier0' ),
    test = cms.vstring( 'Lustre' ),
    emulator = cms.vstring( 'Lustre' ),
    streamLookArea = cms.PSet(  )
  ),
  streamLookArea = cms.PSet( 
    default = cms.vstring( 'DQM' ),
    test = cms.vstring( 'DQM',
      'Lustre' ),
    emulator = cms.vstring( 'None' )
  )
)
HLTPSetTrajectoryBuilderForGsfElectrons = cms.PSet( 
  propagatorAlong = cms.string( "hltESPFwdElectronPropagator" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetTrajectoryFilterForElectrons" ) ),
  maxCand = cms.int32( 5 ),
  ComponentType = cms.string( "CkfTrajectoryBuilder" ),
  propagatorOpposite = cms.string( "hltESPBwdElectronPropagator" ),
  MeasurementTrackerName = cms.string( "hltESPMeasurementTracker" ),
  estimator = cms.string( "hltESPChi2ChargeMeasurementEstimator2000" ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( True ),
  intermediateCleaning = cms.bool( False ),
  lostHitPenalty = cms.double( 90.0 )
)
HLTIter4PSetTrajectoryFilterIT = cms.PSet( 
  minPt = cms.double( 0.3 ),
  minHitsMinPt = cms.int32( 3 ),
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  maxLostHits = cms.int32( 0 ),
  maxNumberOfHits = cms.int32( 100 ),
  maxConsecLostHits = cms.int32( 1 ),
  minimumNumberOfHits = cms.int32( 6 ),
  nSigmaMinPt = cms.double( 5.0 ),
  chargeSignificance = cms.double( -1.0 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  maxCCCLostHits = cms.int32( 9999 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTIter3PSetTrajectoryFilterIT = cms.PSet( 
  minPt = cms.double( 0.3 ),
  minHitsMinPt = cms.int32( 3 ),
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  maxLostHits = cms.int32( 0 ),
  maxNumberOfHits = cms.int32( 100 ),
  maxConsecLostHits = cms.int32( 1 ),
  minimumNumberOfHits = cms.int32( 3 ),
  nSigmaMinPt = cms.double( 5.0 ),
  chargeSignificance = cms.double( -1.0 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  maxCCCLostHits = cms.int32( 9999 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTIter2PSetTrajectoryFilterIT = cms.PSet( 
  minPt = cms.double( 0.3 ),
  minHitsMinPt = cms.int32( 3 ),
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  maxLostHits = cms.int32( 1 ),
  maxNumberOfHits = cms.int32( 100 ),
  maxConsecLostHits = cms.int32( 1 ),
  minimumNumberOfHits = cms.int32( 3 ),
  nSigmaMinPt = cms.double( 5.0 ),
  chargeSignificance = cms.double( -1.0 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutLoose" ) ),
  maxCCCLostHits = cms.int32( 1 ),
  seedExtension = cms.int32( 1 ),
  strictSeedExtension = cms.bool( False )
)
HLTIter1PSetTrajectoryFilterIT = cms.PSet( 
  minPt = cms.double( 0.2 ),
  minHitsMinPt = cms.int32( 3 ),
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  maxLostHits = cms.int32( 1 ),
  maxNumberOfHits = cms.int32( 100 ),
  maxConsecLostHits = cms.int32( 1 ),
  minimumNumberOfHits = cms.int32( 3 ),
  nSigmaMinPt = cms.double( 5.0 ),
  chargeSignificance = cms.double( -1.0 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutLoose" ) ),
  maxCCCLostHits = cms.int32( 1 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTPSetbJetRegionalTrajectoryFilter = cms.PSet( 
  minPt = cms.double( 1.0 ),
  minHitsMinPt = cms.int32( 3 ),
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  maxLostHits = cms.int32( 1 ),
  maxNumberOfHits = cms.int32( 8 ),
  maxConsecLostHits = cms.int32( 1 ),
  minimumNumberOfHits = cms.int32( 5 ),
  nSigmaMinPt = cms.double( 5.0 ),
  chargeSignificance = cms.double( -1.0 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  maxCCCLostHits = cms.int32( 9999 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTPSetTrajectoryFilterL3 = cms.PSet( 
  minPt = cms.double( 0.5 ),
  minHitsMinPt = cms.int32( 3 ),
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  maxLostHits = cms.int32( 1 ),
  maxNumberOfHits = cms.int32( 1000000000 ),
  maxConsecLostHits = cms.int32( 1 ),
  minimumNumberOfHits = cms.int32( 5 ),
  nSigmaMinPt = cms.double( 5.0 ),
  chargeSignificance = cms.double( -1.0 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  maxCCCLostHits = cms.int32( 9999 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTPSetTrajectoryFilterIT = cms.PSet( 
  minPt = cms.double( 0.3 ),
  minHitsMinPt = cms.int32( 3 ),
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  maxLostHits = cms.int32( 1 ),
  maxNumberOfHits = cms.int32( 100 ),
  maxConsecLostHits = cms.int32( 1 ),
  minimumNumberOfHits = cms.int32( 3 ),
  nSigmaMinPt = cms.double( 5.0 ),
  chargeSignificance = cms.double( -1.0 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  maxCCCLostHits = cms.int32( 9999 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTPSetTrajectoryFilterForElectrons = cms.PSet( 
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  minPt = cms.double( 2.0 ),
  minHitsMinPt = cms.int32( -1 ),
  maxLostHits = cms.int32( 1 ),
  maxNumberOfHits = cms.int32( -1 ),
  maxConsecLostHits = cms.int32( 1 ),
  nSigmaMinPt = cms.double( 5.0 ),
  minimumNumberOfHits = cms.int32( 5 ),
  chargeSignificance = cms.double( -1.0 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  maxCCCLostHits = cms.int32( 9999 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTPSetMuonCkfTrajectoryFilter = cms.PSet( 
  minPt = cms.double( 0.9 ),
  minHitsMinPt = cms.int32( 3 ),
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  maxLostHits = cms.int32( 1 ),
  maxNumberOfHits = cms.int32( -1 ),
  maxConsecLostHits = cms.int32( 1 ),
  chargeSignificance = cms.double( -1.0 ),
  nSigmaMinPt = cms.double( 5.0 ),
  minimumNumberOfHits = cms.int32( 5 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  maxCCCLostHits = cms.int32( 9999 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTPSetMuTrackJpsiTrajectoryFilter = cms.PSet( 
  minPt = cms.double( 10.0 ),
  minHitsMinPt = cms.int32( 3 ),
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  maxLostHits = cms.int32( 1 ),
  maxNumberOfHits = cms.int32( 8 ),
  maxConsecLostHits = cms.int32( 1 ),
  minimumNumberOfHits = cms.int32( 5 ),
  nSigmaMinPt = cms.double( 5.0 ),
  chargeSignificance = cms.double( -1.0 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  maxCCCLostHits = cms.int32( 9999 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTPSetMuTrackJpsiEffTrajectoryFilter = cms.PSet( 
  minPt = cms.double( 1.0 ),
  minHitsMinPt = cms.int32( 3 ),
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  maxLostHits = cms.int32( 1 ),
  maxNumberOfHits = cms.int32( 9 ),
  maxConsecLostHits = cms.int32( 1 ),
  minimumNumberOfHits = cms.int32( 5 ),
  nSigmaMinPt = cms.double( 5.0 ),
  chargeSignificance = cms.double( -1.0 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  maxCCCLostHits = cms.int32( 9999 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTPSetCkfTrajectoryFilter = cms.PSet( 
  minPt = cms.double( 0.9 ),
  minHitsMinPt = cms.int32( 3 ),
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  maxLostHits = cms.int32( 1 ),
  maxNumberOfHits = cms.int32( -1 ),
  maxConsecLostHits = cms.int32( 1 ),
  minimumNumberOfHits = cms.int32( 5 ),
  nSigmaMinPt = cms.double( 5.0 ),
  chargeSignificance = cms.double( -1.0 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  maxCCCLostHits = cms.int32( 9999 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTPSetCkf3HitTrajectoryFilter = cms.PSet( 
  minPt = cms.double( 0.9 ),
  minHitsMinPt = cms.int32( 3 ),
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  maxLostHits = cms.int32( 1 ),
  maxNumberOfHits = cms.int32( -1 ),
  maxConsecLostHits = cms.int32( 1 ),
  minimumNumberOfHits = cms.int32( 3 ),
  nSigmaMinPt = cms.double( 5.0 ),
  chargeSignificance = cms.double( -1.0 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  maxCCCLostHits = cms.int32( 9999 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTIter4PSetTrajectoryBuilderIT = cms.PSet( 
  propagatorAlong = cms.string( "PropagatorWithMaterialParabolicMf" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTIter4PSetTrajectoryFilterIT" ) ),
  maxCand = cms.int32( 1 ),
  ComponentType = cms.string( "CkfTrajectoryBuilder" ),
  propagatorOpposite = cms.string( "PropagatorWithMaterialParabolicMfOpposite" ),
  MeasurementTrackerName = cms.string( "hltIter4ESPMeasurementTracker" ),
  estimator = cms.string( "hltESPChi2ChargeLooseMeasurementEstimator16" ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( False ),
  intermediateCleaning = cms.bool( True ),
  lostHitPenalty = cms.double( 30.0 ),
  minNrOfHitsForRebuild = cms.untracked.int32( 4 )
)
HLTIter3PSetTrajectoryBuilderIT = cms.PSet( 
  propagatorAlong = cms.string( "PropagatorWithMaterialParabolicMf" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTIter3PSetTrajectoryFilterIT" ) ),
  maxCand = cms.int32( 1 ),
  ComponentType = cms.string( "CkfTrajectoryBuilder" ),
  propagatorOpposite = cms.string( "PropagatorWithMaterialParabolicMfOpposite" ),
  MeasurementTrackerName = cms.string( "hltIter3ESPMeasurementTracker" ),
  estimator = cms.string( "hltESPChi2ChargeLooseMeasurementEstimator16" ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( False ),
  intermediateCleaning = cms.bool( True ),
  lostHitPenalty = cms.double( 30.0 )
)
HLTIter2PSetTrajectoryBuilderIT = cms.PSet( 
  propagatorAlong = cms.string( "PropagatorWithMaterialParabolicMf" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTIter2PSetTrajectoryFilterIT" ) ),
  maxCand = cms.int32( 2 ),
  ComponentType = cms.string( "CkfTrajectoryBuilder" ),
  propagatorOpposite = cms.string( "PropagatorWithMaterialParabolicMfOpposite" ),
  MeasurementTrackerName = cms.string( "hltIter2ESPMeasurementTracker" ),
  estimator = cms.string( "hltESPChi2ChargeMeasurementEstimator16" ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( False ),
  intermediateCleaning = cms.bool( True ),
  lostHitPenalty = cms.double( 30.0 )
)
HLTIter1PSetTrajectoryBuilderIT = cms.PSet( 
  propagatorAlong = cms.string( "PropagatorWithMaterialParabolicMf" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTIter1PSetTrajectoryFilterIT" ) ),
  maxCand = cms.int32( 2 ),
  ComponentType = cms.string( "CkfTrajectoryBuilder" ),
  propagatorOpposite = cms.string( "PropagatorWithMaterialParabolicMfOpposite" ),
  MeasurementTrackerName = cms.string( "hltIter1ESPMeasurementTracker" ),
  estimator = cms.string( "hltESPChi2ChargeMeasurementEstimator16" ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( False ),
  intermediateCleaning = cms.bool( True ),
  lostHitPenalty = cms.double( 30.0 )
)
HLTPSetTrajectoryBuilderForElectrons = cms.PSet( 
  propagatorAlong = cms.string( "hltESPFwdElectronPropagator" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetTrajectoryFilterForElectrons" ) ),
  maxCand = cms.int32( 5 ),
  ComponentType = cms.string( "CkfTrajectoryBuilder" ),
  propagatorOpposite = cms.string( "hltESPBwdElectronPropagator" ),
  MeasurementTrackerName = cms.string( "hltESPMeasurementTracker" ),
  estimator = cms.string( "hltESPChi2ChargeMeasurementEstimator30" ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( True ),
  intermediateCleaning = cms.bool( False ),
  lostHitPenalty = cms.double( 90.0 )
)
HLTPSetMuTrackJpsiTrajectoryBuilder = cms.PSet( 
  propagatorAlong = cms.string( "PropagatorWithMaterial" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetMuTrackJpsiTrajectoryFilter" ) ),
  maxCand = cms.int32( 1 ),
  ComponentType = cms.string( "CkfTrajectoryBuilder" ),
  propagatorOpposite = cms.string( "PropagatorWithMaterialOpposite" ),
  MeasurementTrackerName = cms.string( "hltESPMeasurementTracker" ),
  estimator = cms.string( "hltESPChi2ChargeMeasurementEstimator30" ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( False ),
  intermediateCleaning = cms.bool( True ),
  lostHitPenalty = cms.double( 30.0 )
)
HLTPSetMuTrackJpsiEffTrajectoryBuilder = cms.PSet( 
  propagatorAlong = cms.string( "PropagatorWithMaterial" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetMuTrackJpsiEffTrajectoryFilter" ) ),
  maxCand = cms.int32( 1 ),
  ComponentType = cms.string( "CkfTrajectoryBuilder" ),
  propagatorOpposite = cms.string( "PropagatorWithMaterialOpposite" ),
  MeasurementTrackerName = cms.string( "hltESPMeasurementTracker" ),
  estimator = cms.string( "hltESPChi2ChargeMeasurementEstimator30" ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( False ),
  intermediateCleaning = cms.bool( True ),
  lostHitPenalty = cms.double( 30.0 )
)
HLTPSetMuonCkfTrajectoryBuilderSeedHit = cms.PSet( 
  propagatorAlong = cms.string( "PropagatorWithMaterial" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetMuonCkfTrajectoryFilter" ) ),
  maxCand = cms.int32( 5 ),
  ComponentType = cms.string( "MuonCkfTrajectoryBuilder" ),
  propagatorOpposite = cms.string( "PropagatorWithMaterialOpposite" ),
  useSeedLayer = cms.bool( True ),
  deltaEta = cms.double( -1.0 ),
  deltaPhi = cms.double( -1.0 ),
  estimator = cms.string( "hltESPChi2ChargeMeasurementEstimator30" ),
  rescaleErrorIfFail = cms.double( 1.0 ),
  propagatorProximity = cms.string( "SteppingHelixPropagatorAny" ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( True ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  MeasurementTrackerName = cms.string( "hltESPMeasurementTracker" ),
  intermediateCleaning = cms.bool( False ),
  lostHitPenalty = cms.double( 30.0 )
)
HLTPSetMuonCkfTrajectoryBuilder = cms.PSet( 
  propagatorAlong = cms.string( "PropagatorWithMaterial" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetMuonCkfTrajectoryFilter" ) ),
  maxCand = cms.int32( 5 ),
  ComponentType = cms.string( "MuonCkfTrajectoryBuilder" ),
  propagatorOpposite = cms.string( "PropagatorWithMaterialOpposite" ),
  useSeedLayer = cms.bool( False ),
  deltaEta = cms.double( -1.0 ),
  deltaPhi = cms.double( -1.0 ),
  estimator = cms.string( "hltESPChi2ChargeMeasurementEstimator30" ),
  rescaleErrorIfFail = cms.double( 1.0 ),
  propagatorProximity = cms.string( "SteppingHelixPropagatorAny" ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( True ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  MeasurementTrackerName = cms.string( "hltESPMeasurementTracker" ),
  intermediateCleaning = cms.bool( False ),
  lostHitPenalty = cms.double( 30.0 )
)
HLTPSetPvClusterComparer = cms.PSet( 
  track_pt_min = cms.double( 2.5 ),
  track_pt_max = cms.double( 10.0 ),
  track_chi2_max = cms.double( 9999999.0 ),
  track_prob_min = cms.double( -1.0 )
)
HLTIter0PSetTrajectoryBuilderIT = cms.PSet( 
  propagatorAlong = cms.string( "PropagatorWithMaterialParabolicMf" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTIter0PSetTrajectoryFilterIT" ) ),
  maxCand = cms.int32( 2 ),
  ComponentType = cms.string( "CkfTrajectoryBuilder" ),
  propagatorOpposite = cms.string( "PropagatorWithMaterialParabolicMfOpposite" ),
  estimator = cms.string( "hltESPChi2ChargeMeasurementEstimator9" ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( False ),
  intermediateCleaning = cms.bool( True ),
  lostHitPenalty = cms.double( 30.0 )
)
HLTIter0PSetTrajectoryFilterIT = cms.PSet( 
  minPt = cms.double( 0.3 ),
  minHitsMinPt = cms.int32( 3 ),
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  maxLostHits = cms.int32( 1 ),
  maxNumberOfHits = cms.int32( 100 ),
  maxConsecLostHits = cms.int32( 1 ),
  minimumNumberOfHits = cms.int32( 3 ),
  nSigmaMinPt = cms.double( 5.0 ),
  chargeSignificance = cms.double( -1.0 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutLoose" ) ),
  maxCCCLostHits = cms.int32( 1 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTPSetPvClusterComparerForBTag = cms.PSet( 
  track_pt_min = cms.double( 0.1 ),
  track_pt_max = cms.double( 20.0 ),
  track_chi2_max = cms.double( 20.0 ),
  track_prob_min = cms.double( -1.0 )
)
HLTSeedFromConsecutiveHitsTripletOnlyCreator = cms.PSet( 
  ComponentName = cms.string( "SeedFromConsecutiveHitsTripletOnlyCreator" ),
  propagator = cms.string( "PropagatorWithMaterialParabolicMf" ),
  SeedMomentumForBOFF = cms.double( 5.0 ),
  OriginTransverseErrorMultiplier = cms.double( 1.0 ),
  MinOneOverPtError = cms.double( 1.0 ),
  magneticField = cms.string( "ParabolicMf" ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  forceKinematicWithRegionDirection = cms.bool( False )
)
HLTSeedFromConsecutiveHitsCreator = cms.PSet( 
  ComponentName = cms.string( "SeedFromConsecutiveHitsCreator" ),
  propagator = cms.string( "PropagatorWithMaterial" ),
  SeedMomentumForBOFF = cms.double( 5.0 ),
  OriginTransverseErrorMultiplier = cms.double( 1.0 ),
  MinOneOverPtError = cms.double( 1.0 ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  forceKinematicWithRegionDirection = cms.bool( False ),
  magneticField = cms.string( "" )
)
HLTIter0HighPtTkMuPSetTrajectoryBuilderIT = cms.PSet( 
  propagatorAlong = cms.string( "PropagatorWithMaterialParabolicMf" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTIter0PSetTrajectoryFilterIT" ) ),
  maxCand = cms.int32( 4 ),
  ComponentType = cms.string( "CkfTrajectoryBuilder" ),
  propagatorOpposite = cms.string( "PropagatorWithMaterialParabolicMfOpposite" ),
  estimator = cms.string( "hltESPChi2ChargeMeasurementEstimator30" ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( True ),
  intermediateCleaning = cms.bool( True ),
  lostHitPenalty = cms.double( 30.0 )
)
HLTIter2HighPtTkMuPSetTrajectoryBuilderIT = cms.PSet( 
  propagatorAlong = cms.string( "PropagatorWithMaterialParabolicMf" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTIter2HighPtTkMuPSetTrajectoryFilterIT" ) ),
  maxCand = cms.int32( 2 ),
  ComponentType = cms.string( "CkfTrajectoryBuilder" ),
  propagatorOpposite = cms.string( "PropagatorWithMaterialParabolicMfOpposite" ),
  estimator = cms.string( "hltESPChi2ChargeMeasurementEstimator30" ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( False ),
  intermediateCleaning = cms.bool( True ),
  lostHitPenalty = cms.double( 30.0 ),
  MeasurementTrackerName = cms.string( "hltIter2HighPtTkMuESPMeasurementTracker" )
)
HLTIter2HighPtTkMuPSetTrajectoryFilterIT = cms.PSet( 
  minPt = cms.double( 0.3 ),
  minHitsMinPt = cms.int32( 3 ),
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  maxLostHits = cms.int32( 1 ),
  maxNumberOfHits = cms.int32( 100 ),
  maxConsecLostHits = cms.int32( 3 ),
  minimumNumberOfHits = cms.int32( 5 ),
  nSigmaMinPt = cms.double( 5.0 ),
  chargeSignificance = cms.double( -1.0 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  maxCCCLostHits = cms.int32( 9999 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTPSetPvClusterComparerForIT = cms.PSet( 
  track_pt_min = cms.double( 1.0 ),
  track_pt_max = cms.double( 20.0 ),
  track_chi2_max = cms.double( 20.0 ),
  track_prob_min = cms.double( -1.0 )
)
HLTSiStripClusterChargeCutNone = cms.PSet(  value = cms.double( -1.0 ) )
HLTSiStripClusterChargeCutLoose = cms.PSet(  value = cms.double( 1620.0 ) )
HLTSiStripClusterChargeCutTight = cms.PSet(  value = cms.double( 1945.0 ) )
HLTSeedFromConsecutiveHitsCreatorIT = cms.PSet( 
  ComponentName = cms.string( "SeedFromConsecutiveHitsCreator" ),
  propagator = cms.string( "PropagatorWithMaterialParabolicMf" ),
  SeedMomentumForBOFF = cms.double( 5.0 ),
  OriginTransverseErrorMultiplier = cms.double( 1.0 ),
  MinOneOverPtError = cms.double( 1.0 ),
  magneticField = cms.string( "ParabolicMf" ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  forceKinematicWithRegionDirection = cms.bool( False )
)
HLTSeedFromProtoTracks = cms.PSet( 
  ComponentName = cms.string( "SeedFromConsecutiveHitsCreator" ),
  propagator = cms.string( "PropagatorWithMaterialParabolicMf" ),
  SeedMomentumForBOFF = cms.double( 5.0 ),
  MinOneOverPtError = cms.double( 1.0 ),
  magneticField = cms.string( "ParabolicMf" ),
  TTRHBuilder = cms.string( "hltESPTTRHBuilderPixelOnly" ),
  OriginTransverseErrorMultiplier = cms.double( 1.0 ),
  forceKinematicWithRegionDirection = cms.bool( False )
)
HLTPSetMuonTrackingRegionBuilder8356 = cms.PSet( 
  Rescale_eta = cms.double( 3.0 ),
  Rescale_phi = cms.double( 3.0 ),
  Rescale_Dz = cms.double( 3.0 ),
  EtaR_UpperLimit_Par1 = cms.double( 0.25 ),
  EtaR_UpperLimit_Par2 = cms.double( 0.15 ),
  PhiR_UpperLimit_Par1 = cms.double( 0.6 ),
  PhiR_UpperLimit_Par2 = cms.double( 0.2 ),
  UseVertex = cms.bool( False ),
  Pt_fixed = cms.bool( False ),
  Z_fixed = cms.bool( True ),
  Phi_fixed = cms.bool( False ),
  Eta_fixed = cms.bool( False ),
  Pt_min = cms.double( 1.5 ),
  Phi_min = cms.double( 0.1 ),
  Eta_min = cms.double( 0.1 ),
  DeltaZ = cms.double( 15.9 ),
  DeltaR = cms.double( 0.2 ),
  DeltaEta = cms.double( 0.2 ),
  DeltaPhi = cms.double( 0.2 ),
  maxRegions = cms.int32( 2 ),
  precise = cms.bool( True ),
  OnDemand = cms.int32( -1 ),
  MeasurementTrackerName = cms.InputTag( "hltESPMeasurementTracker" ),
  beamSpot = cms.InputTag( "hltOnlineBeamSpot" ),
  vertexCollection = cms.InputTag( "pixelVertices" ),
  input = cms.InputTag( 'hltL2Muons','UpdatedAtVtx' )
)
HLTPSetDetachedCkfTrajectoryBuilderForHI = cms.PSet( 
  MeasurementTrackerName = cms.string( "" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetDetachedCkfTrajectoryFilterForHI" ) ),
  maxCand = cms.int32( 2 ),
  estimator = cms.string( "hltESPChi2MeasurementEstimator9" ),
  ComponentType = cms.string( "GroupedCkfTrajectoryBuilder" ),
  inOutTrajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetDetachedCkfTrajectoryFilterForHI" ) ),
  useSameTrajFilter = cms.bool( True ),
  intermediateCleaning = cms.bool( True ),
  lostHitPenalty = cms.double( 30.0 ),
  lockHits = cms.bool( True ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  foundHitBonus = cms.double( 5.0 ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( False ),
  requireSeedHitsInRebuild = cms.bool( True ),
  keepOriginalIfRebuildFails = cms.bool( False ),
  propagatorAlong = cms.string( "PropagatorWithMaterialForHI" ),
  propagatorOpposite = cms.string( "PropagatorWithMaterialOppositeForHI" ),
  minNrOfHitsForRebuild = cms.int32( 5 ),
  maxDPhiForLooperReconstruction = cms.double( 0.0 ),
  maxPtForLooperReconstruction = cms.double( 0.0 ),
  bestHitOnly = cms.bool( True )
)
HLTPSetDetachedCkfTrajectoryFilterForHI = cms.PSet( 
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  minimumNumberOfHits = cms.int32( 6 ),
  chargeSignificance = cms.double( -1.0 ),
  minPt = cms.double( 0.3 ),
  nSigmaMinPt = cms.double( 5.0 ),
  minHitsMinPt = cms.int32( 3 ),
  maxLostHits = cms.int32( 1 ),
  maxConsecLostHits = cms.int32( 1 ),
  maxNumberOfHits = cms.int32( 100 ),
  constantValueForLostHitsFractionFilter = cms.double( 0.701 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  maxCCCLostHits = cms.int32( 9999 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTPSetPixelPairCkfTrajectoryFilterForHI = cms.PSet( 
  minPt = cms.double( 1.0 ),
  minHitsMinPt = cms.int32( 3 ),
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  maxLostHits = cms.int32( 100 ),
  maxConsecLostHits = cms.int32( 1 ),
  minimumNumberOfHits = cms.int32( 6 ),
  nSigmaMinPt = cms.double( 5.0 ),
  chargeSignificance = cms.double( -1.0 ),
  maxNumberOfHits = cms.int32( 100 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  maxCCCLostHits = cms.int32( 9999 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTPSetPixelPairCkfTrajectoryBuilderForHI = cms.PSet( 
  MeasurementTrackerName = cms.string( "" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetPixelPairCkfTrajectoryFilterForHI" ) ),
  maxCand = cms.int32( 3 ),
  estimator = cms.string( "hltESPChi2ChargeMeasurementEstimator9ForHI" ),
  ComponentType = cms.string( "GroupedCkfTrajectoryBuilder" ),
  inOutTrajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetPixelPairCkfTrajectoryFilterForHI" ) ),
  useSameTrajFilter = cms.bool( True ),
  intermediateCleaning = cms.bool( True ),
  lostHitPenalty = cms.double( 30.0 ),
  lockHits = cms.bool( True ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  foundHitBonus = cms.double( 5.0 ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( True ),
  requireSeedHitsInRebuild = cms.bool( True ),
  keepOriginalIfRebuildFails = cms.bool( False ),
  propagatorAlong = cms.string( "PropagatorWithMaterialForHI" ),
  propagatorOpposite = cms.string( "PropagatorWithMaterialOppositeForHI" ),
  minNrOfHitsForRebuild = cms.int32( 5 ),
  maxDPhiForLooperReconstruction = cms.double( 2.0 ),
  maxPtForLooperReconstruction = cms.double( 0.7 ),
  bestHitOnly = cms.bool( True )
)
HLTSiStripClusterChargeCutForHI = cms.PSet(  value = cms.double( 2069.0 ) )
HLTPSetDetachedCkfTrajectoryFilterForHIGlobalPt8 = cms.PSet( 
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  minimumNumberOfHits = cms.int32( 6 ),
  chargeSignificance = cms.double( -1.0 ),
  minPt = cms.double( 8.0 ),
  nSigmaMinPt = cms.double( 5.0 ),
  minHitsMinPt = cms.int32( 3 ),
  maxLostHits = cms.int32( 1 ),
  maxConsecLostHits = cms.int32( 1 ),
  maxNumberOfHits = cms.int32( 100 ),
  constantValueForLostHitsFractionFilter = cms.double( 0.701 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  maxCCCLostHits = cms.int32( 9999 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTPSetDetachedCkfTrajectoryBuilderForHIGlobalPt8 = cms.PSet( 
  MeasurementTrackerName = cms.string( "" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetDetachedCkfTrajectoryFilterForHIGlobalPt8" ) ),
  maxCand = cms.int32( 2 ),
  estimator = cms.string( "hltESPChi2MeasurementEstimator9" ),
  ComponentType = cms.string( "GroupedCkfTrajectoryBuilder" ),
  inOutTrajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetDetachedCkfTrajectoryFilterForHIGlobalPt8" ) ),
  useSameTrajFilter = cms.bool( True ),
  intermediateCleaning = cms.bool( True ),
  lostHitPenalty = cms.double( 30.0 ),
  lockHits = cms.bool( True ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  foundHitBonus = cms.double( 5.0 ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( False ),
  requireSeedHitsInRebuild = cms.bool( True ),
  keepOriginalIfRebuildFails = cms.bool( False ),
  propagatorAlong = cms.string( "PropagatorWithMaterialForHI" ),
  propagatorOpposite = cms.string( "PropagatorWithMaterialOppositeForHI" ),
  minNrOfHitsForRebuild = cms.int32( 5 ),
  maxDPhiForLooperReconstruction = cms.double( 0.0 ),
  maxPtForLooperReconstruction = cms.double( 0.0 ),
  bestHitOnly = cms.bool( True )
)
HLTPSetPixelPairCkfTrajectoryFilterForHIGlobalPt8 = cms.PSet( 
  minPt = cms.double( 8.0 ),
  minHitsMinPt = cms.int32( 3 ),
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  maxLostHits = cms.int32( 100 ),
  maxConsecLostHits = cms.int32( 1 ),
  minimumNumberOfHits = cms.int32( 6 ),
  nSigmaMinPt = cms.double( 5.0 ),
  chargeSignificance = cms.double( -1.0 ),
  maxNumberOfHits = cms.int32( 100 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  maxCCCLostHits = cms.int32( 9999 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTPSetPixelPairCkfTrajectoryBuilderForHIGlobalPt8 = cms.PSet( 
  MeasurementTrackerName = cms.string( "" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetPixelPairCkfTrajectoryFilterForHIGlobalPt8" ) ),
  maxCand = cms.int32( 3 ),
  estimator = cms.string( "hltESPChi2ChargeMeasurementEstimator9ForHI" ),
  ComponentType = cms.string( "GroupedCkfTrajectoryBuilder" ),
  inOutTrajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetPixelPairCkfTrajectoryFilterForHIGlobalPt8" ) ),
  useSameTrajFilter = cms.bool( True ),
  intermediateCleaning = cms.bool( True ),
  lostHitPenalty = cms.double( 30.0 ),
  lockHits = cms.bool( True ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  foundHitBonus = cms.double( 5.0 ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( True ),
  requireSeedHitsInRebuild = cms.bool( True ),
  keepOriginalIfRebuildFails = cms.bool( False ),
  propagatorAlong = cms.string( "PropagatorWithMaterialForHI" ),
  propagatorOpposite = cms.string( "PropagatorWithMaterialOppositeForHI" ),
  minNrOfHitsForRebuild = cms.int32( 5 ),
  maxDPhiForLooperReconstruction = cms.double( 2.0 ),
  maxPtForLooperReconstruction = cms.double( 0.7 ),
  bestHitOnly = cms.bool( True )
)
HLTPSetInitialCkfTrajectoryBuilderForHI = cms.PSet( 
  propagatorAlong = cms.string( "PropagatorWithMaterialForHI" ),
  trajectoryFilter = cms.PSet(  refToPSet_ = cms.string( "HLTPSetInitialCkfTrajectoryFilterForHI" ) ),
  maxCand = cms.int32( 5 ),
  ComponentType = cms.string( "CkfTrajectoryBuilder" ),
  intermediateCleaning = cms.bool( False ),
  propagatorOpposite = cms.string( "PropagatorWithMaterialOppositeForHI" ),
  MeasurementTrackerName = cms.string( "hltESPMeasurementTracker" ),
  estimator = cms.string( "hltESPChi2MeasurementEstimator30" ),
  TTRHBuilder = cms.string( "hltESPTTRHBWithTrackAngle" ),
  updator = cms.string( "hltESPKFUpdator" ),
  alwaysUseInvalidHits = cms.bool( False ),
  lostHitPenalty = cms.double( 30.0 )
)
HLTPSetInitialCkfTrajectoryFilterForHI = cms.PSet( 
  minimumNumberOfHits = cms.int32( 6 ),
  minHitsMinPt = cms.int32( 3 ),
  ComponentType = cms.string( "CkfBaseTrajectoryFilter" ),
  maxLostHits = cms.int32( 999 ),
  maxNumberOfHits = cms.int32( 100 ),
  maxConsecLostHits = cms.int32( 1 ),
  chargeSignificance = cms.double( -1.0 ),
  nSigmaMinPt = cms.double( 5.0 ),
  minPt = cms.double( 0.9 ),
  minGoodStripCharge = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  maxCCCLostHits = cms.int32( 9999 ),
  seedExtension = cms.int32( 0 ),
  strictSeedExtension = cms.bool( False )
)
HLTSiStripClusterChargeCutTiny = cms.PSet(  value = cms.double( 800.0 ) )
streams = cms.PSet( 
  ALCAELECTRON = cms.vstring( 'AlCaElectron' ),
  ALCALUMIPIXELS = cms.vstring( 'AlCaLumiPixels' ),
  ALCAP0 = cms.vstring( 'AlCaP0' ),
  ALCAPHISYM = cms.vstring( 'AlCaPhiSym' ),
  Calibration = cms.vstring( 'TestEnablesEcalHcal' ),
  DQM = cms.vstring( 'OnlineMonitor' ),
  DQMCalibration = cms.vstring( 'TestEnablesEcalHcalDQM' ),
  DQMEventDisplay = cms.vstring( 'EventDisplay' ),
  EcalCalibration = cms.vstring( 'EcalLaser' ),
  Express = cms.vstring( 'ExpressPhysics' ),
  HLTMonitor = cms.vstring( 'HLTMonitor' ),
  NanoDST = cms.vstring( 'L1Accept' ),
  Parking = cms.vstring( 'ParkingHT450to470',
    'ParkingHT470to500',
    'ParkingHT500to550',
    'ParkingHT550to650',
    'ParkingHT650',
    'ParkingMuons' ),
  PhysicsEGammaCommissioning = cms.vstring( 'Commissioning',
    'DoubleEG',
    'HLTPhysics',
    'HcalHPDNoise',
    'HcalNZS',
    'MonteCarlo',
    'NoBPTX',
    'SingleElectron',
    'SinglePhoton',
    'ZeroBias' ),
  PhysicsEndOfFill = cms.vstring( 'FullTrackEOF',
    'HINCaloJets',
    'HINMuon',
    'HINPFJets',
    'HINPhoton',
    'HighMultiplicity85EOF',
    'HighMultiplicityEOF' ),
  PhysicsHadronsTaus = cms.vstring( 'BTagCSV',
    'BTagMu',
    'DisplacedJet',
    'HTMHT',
    'JetHT',
    'MET',
    'Tau' ),
  PhysicsMuons = cms.vstring( 'Charmonium',
    'DoubleMuon',
    'DoubleMuonLowMass',
    'MuOnia',
    'MuonEG',
    'SingleMuon' ),
  PhysicsParkingScoutingMonitor = cms.vstring( 'ParkingScoutingMonitor' ),
  RPCMON = cms.vstring( 'RPCMonitor' ),
  ScoutingCalo = cms.vstring( 'ScoutingCaloCommissioning',
    'ScoutingCaloHT' ),
  ScoutingPF = cms.vstring( 'ScoutingPFCommissioning',
    'ScoutingPFHT',
    'ScoutingPFMuons' )
)
datasets = cms.PSet( 
  AlCaElectron = cms.vstring( 'AlCa_Ele23_WPVeryLoose_Gsf_v2',
    'HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v3',
    'HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_v3' ),
  AlCaLumiPixels = cms.vstring( 'AlCa_LumiPixels_Random_v1',
    'AlCa_LumiPixels_ZeroBias_v2' ),
  AlCaP0 = cms.vstring( 'AlCa_EcalEtaEBonly_v3',
    'AlCa_EcalEtaEEonly_v3',
    'AlCa_EcalPi0EBonly_v3',
    'AlCa_EcalPi0EEonly_v3' ),
  AlCaPhiSym = cms.vstring( 'AlCa_EcalPhiSym_v3' ),
  BTagCSV = cms.vstring( 'HLT_DoubleJet90_Double30_DoubleBTagCSV_p087_v1',
    'HLT_DoubleJet90_Double30_TripleBTagCSV_p087_v1',
    'HLT_DoubleJetsC100_DoubleBTagCSV_p014_DoublePFJetsC100MaxDeta1p6_v1',
    'HLT_DoubleJetsC100_DoubleBTagCSV_p026_DoublePFJetsC160_v1',
    'HLT_DoubleJetsC112_DoubleBTagCSV_p014_DoublePFJetsC112MaxDeta1p6_v1',
    'HLT_DoubleJetsC112_DoubleBTagCSV_p026_DoublePFJetsC172_v1',
    'HLT_QuadJet45_DoubleBTagCSV_p087_v1',
    'HLT_QuadJet45_TripleBTagCSV_p087_v1',
    'HLT_QuadPFJet_BTagCSV_p037_VBF_Mqq460_v1',
    'HLT_QuadPFJet_BTagCSV_p037_VBF_Mqq500_v1',
    'HLT_QuadPFJet_BTagCSV_p037_p11_VBF_Mqq200_v1',
    'HLT_QuadPFJet_BTagCSV_p037_p11_VBF_Mqq240_v1',
    'HLT_Rsq0p02_MR300_TriPFJet80_60_40_BTagCSV_p063_p20_Mbb60_200_v1',
    'HLT_Rsq0p02_MR300_TriPFJet80_60_40_DoubleBTagCSV_p063_Mbb60_200_v1' ),
  BTagMu = cms.vstring( 'HLT_BTagMu_DiJet110_Mu5_v2',
    'HLT_BTagMu_DiJet20_Mu5_v2',
    'HLT_BTagMu_DiJet40_Mu5_v2',
    'HLT_BTagMu_DiJet70_Mu5_v2',
    'HLT_BTagMu_Jet300_Mu5_v2' ),
  Charmonium = cms.vstring( 'HLT_Dimuon0_Jpsi_Muon_v2',
    'HLT_Dimuon0er16_Jpsi_NoOS_NoVertexing_v2',
    'HLT_Dimuon0er16_Jpsi_NoVertexing_v2',
    'HLT_Dimuon10_Jpsi_Barrel_v2',
    'HLT_Dimuon13_PsiPrime_v2',
    'HLT_Dimuon16_Jpsi_v2',
    'HLT_Dimuon20_Jpsi_v2',
    'HLT_Dimuon6_Jpsi_NoVertexing_v2',
    'HLT_Dimuon8_PsiPrime_Barrel_v2',
    'HLT_DoubleMu4_3_Bs_v2',
    'HLT_DoubleMu4_3_Jpsi_Displaced_v2',
    'HLT_DoubleMu4_JpsiTrk_Displaced_v2',
    'HLT_DoubleMu4_PsiPrimeTrk_Displaced_v2',
    'HLT_Mu7p5_L2Mu2_Jpsi_v2',
    'HLT_Mu7p5_Track2_Jpsi_v2',
    'HLT_Mu7p5_Track3p5_Jpsi_v2',
    'HLT_Mu7p5_Track7_Jpsi_v2',
    'HLT_QuadMuon0_Dimuon0_Jpsi_v2' ),
  Commissioning = cms.vstring( 'HLT_Activity_Ecal_SC7_v2',
    'HLT_IsoTrackHB_v1',
    'HLT_IsoTrackHE_v1',
    'HLT_L1SingleMuOpen_DT_v2',
    'HLT_L1Tech_DT_GlobalOR_v2' ),
  DisplacedJet = cms.vstring( 'HLT_HT250_DisplacedDijet40_DisplacedTrack_v2',
    'HLT_HT350_DisplacedDijet40_DisplacedTrack_v2',
    'HLT_HT350_DisplacedDijet80_DisplacedTrack_v2',
    'HLT_HT350_DisplacedDijet80_Tight_DisplacedTrack_v2',
    'HLT_HT400_DisplacedDijet40_Inclusive_v2',
    'HLT_HT500_DisplacedDijet40_Inclusive_v2',
    'HLT_HT550_DisplacedDijet40_Inclusive_v2',
    'HLT_HT650_DisplacedDijet80_Inclusive_v2',
    'HLT_HT750_DisplacedDijet80_Inclusive_v2',
    'HLT_VBF_DisplacedJet40_DisplacedTrack_2TrackIP2DSig5_v2',
    'HLT_VBF_DisplacedJet40_DisplacedTrack_v2',
    'HLT_VBF_DisplacedJet40_Hadronic_2PromptTrack_v2',
    'HLT_VBF_DisplacedJet40_Hadronic_v2',
    'HLT_VBF_DisplacedJet40_TightID_DisplacedTrack_v2',
    'HLT_VBF_DisplacedJet40_TightID_Hadronic_v2',
    'HLT_VBF_DisplacedJet40_VTightID_DisplacedTrack_v2',
    'HLT_VBF_DisplacedJet40_VTightID_Hadronic_v2',
    'HLT_VBF_DisplacedJet40_VVTightID_DisplacedTrack_v2',
    'HLT_VBF_DisplacedJet40_VVTightID_Hadronic_v2' ),
  DoubleEG = cms.vstring( 'HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_v1',
    'HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_v1',
    'HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70_v1',
    'HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_v1',
    'HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55_v1',
    'HLT_DoubleEle24_22_eta2p1_WPLoose_Gsf_v2',
    'HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_MW_v3',
    'HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_v3',
    'HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT250_v1',
    'HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_v4',
    'HLT_DoublePhoton60_v1',
    'HLT_DoublePhoton85_v2',
    'HLT_ECALHT800_v2',
    'HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV_p13_v1',
    'HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_v3',
    'HLT_Ele12_CaloIdL_TrackIdL_IsoVL_v3',
    'HLT_Ele12_CaloIdM_TrackIdM_PFJet30_v3',
    'HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL_v3',
    'HLT_Ele17_CaloIdL_TrackIdL_IsoVL_v2',
    'HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v3',
    'HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_v3',
    'HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_v3',
    'HLT_Ele23_CaloIdL_TrackIdL_IsoVL_v3',
    'HLT_Ele23_CaloIdM_TrackIdM_PFJet30_v3',
    'HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v3',
    'HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_v3',
    'HLT_Ele30WP60_Ele8_Mass55_v2',
    'HLT_Ele30WP60_SC4_Mass55_v3',
    'HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_v3',
    'HLT_Ele33_CaloIdM_TrackIdM_PFJet30_v3',
    'HLT_Ele8_CaloIdM_TrackIdM_PFJet30_v3',
    'HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60_v2',
    'HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15_v2',
    'HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15_v2' ),
  DoubleMuon = cms.vstring( 'HLT_DoubleMu18NoFiltersNoVtx_v2',
    'HLT_DoubleMu23NoFiltersNoVtxDisplaced_v2',
    'HLT_DoubleMu28NoFiltersNoVtxDisplaced_v2',
    'HLT_DoubleMu33NoFiltersNoVtx_v2',
    'HLT_DoubleMu38NoFiltersNoVtx_v2',
    'HLT_DoubleMu8_Mass8_PFHT250_v1',
    'HLT_DoubleMu8_Mass8_PFHT300_v4',
    'HLT_L2DoubleMu23_NoVertex_v2',
    'HLT_L2DoubleMu28_NoVertex_2Cha_Angle2p5_Mass10_v2',
    'HLT_L2DoubleMu38_NoVertex_2Cha_Angle2p5_Mass10_v2',
    'HLT_Mu10_CentralPFJet30_BTagCSV_p13_v1',
    'HLT_Mu17_Mu8_DZ_v2',
    'HLT_Mu17_Mu8_SameSign_DZ_v1',
    'HLT_Mu17_Mu8_v1',
    'HLT_Mu17_TkMu8_DZ_v2',
    'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_v2',
    'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v2',
    'HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_v2',
    'HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_v2',
    'HLT_Mu17_TrkIsoVVL_v2',
    'HLT_Mu17_v2',
    'HLT_Mu20_Mu10_DZ_v1',
    'HLT_Mu20_Mu10_SameSign_DZ_v1',
    'HLT_Mu20_Mu10_v1',
    'HLT_Mu27_TkMu8_v2',
    'HLT_Mu30_TkMu11_v2',
    'HLT_Mu40_TkMu11_v2',
    'HLT_Mu8_TrkIsoVVL_v3',
    'HLT_Mu8_v3',
    'HLT_TripleMu_12_10_5_v2',
    'HLT_TrkMu15_DoubleTrkMu5NoFiltersNoVtx_v2',
    'HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx_v2' ),
  DoubleMuonLowMass = cms.vstring( 'HLT_DoubleMu4_LowMassNonResonantTrk_Displaced_v2' ),
  EcalLaser = cms.vstring( 'HLT_EcalCalibration_v2' ),
  EventDisplay = cms.vstring( 'HLT_AK4PFJet100_v3',
    'HLT_AK8PFJet360_TrimMass30_v3',
    'HLT_HISinglePhoton60_v2',
    'HLT_Photon175_v3' ),
  ExpressPhysics = cms.vstring( 'HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v3',
    'HLT_HT2000_v1',
    'HLT_HT2500_v1',
    'HLT_IsoMu20_v3',
    'HLT_MET250_v1',
    'HLT_MET300_v1',
    'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_v2',
    'HLT_Mu300_v1',
    'HLT_Mu350_v1',
    'HLT_PFMET300_v1',
    'HLT_PFMET400_v1',
    'HLT_Photon500_v1',
    'HLT_Photon600_v1',
    'HLT_Physics_v2',
    'HLT_Random_v1',
    'HLT_ZeroBias_v2' ),
  FullTrackEOF = cms.vstring( 'HLT_FullTrack12ForEndOfFill_v1',
    'HLT_FullTrack50_v2' ),
  HINCaloJets = cms.vstring( 'HLT_AK4CaloJet100_v2',
    'HLT_AK4CaloJet30_v3',
    'HLT_AK4CaloJet40_v2',
    'HLT_AK4CaloJet50_v2',
    'HLT_AK4CaloJet80_v2' ),
  HINMuon = cms.vstring( 'HLT_HIL1DoubleMu0BPTX_v1',
    'HLT_HIL2DoubleMu0BPTX_v1',
    'HLT_HIL2Mu3BPTX_v1',
    'HLT_HIL3Mu3BPTX_v1' ),
  HINPFJets = cms.vstring( 'HLT_AK4PFJet100_v3',
    'HLT_AK4PFJet30_v3',
    'HLT_AK4PFJet50_v3',
    'HLT_AK4PFJet80_v3' ),
  HINPhoton = cms.vstring( 'HLT_HISinglePhoton10ForEndOfFill_v1',
    'HLT_HISinglePhoton15ForEndOfFill_v1',
    'HLT_HISinglePhoton20ForEndOfFill_v1',
    'HLT_HISinglePhoton40_v2',
    'HLT_HISinglePhoton60_v2' ),
  HLTMonitor = cms.vstring( 'HLT_DiPFJetAve40_v2',
    'HLT_PFHT350_v3',
    'HLT_QuadPFJet_BTagCSV_p037_VBF_Mqq500_v1' ),
  HLTPhysics = cms.vstring( 'HLT_Physics_v2' ),
  HTMHT = cms.vstring( 'HLT_DiCentralPFJet55_PFMET110_v1',
    'HLT_DiPFJet40_DEta3p5_MJJ600_PFMETNoMu140_v1',
    'HLT_DiPFJet40_DEta3p5_MJJ600_PFMETNoMu80_v1',
    'HLT_PFHT200_DiPFJetAve90_PFAlphaT0p57_v2',
    'HLT_PFHT200_DiPFJetAve90_PFAlphaT0p63_v2',
    'HLT_PFHT200_PFAlphaT0p51_v2',
    'HLT_PFHT250_DiPFJetAve90_PFAlphaT0p55_v2',
    'HLT_PFHT250_DiPFJetAve90_PFAlphaT0p58_v2',
    'HLT_PFHT300_DiPFJetAve90_PFAlphaT0p53_v2',
    'HLT_PFHT300_DiPFJetAve90_PFAlphaT0p54_v2',
    'HLT_PFHT350_DiPFJetAve90_PFAlphaT0p52_v2',
    'HLT_PFHT350_DiPFJetAve90_PFAlphaT0p53_v2',
    'HLT_PFHT350_PFMET100_v1',
    'HLT_PFHT400_DiPFJetAve90_PFAlphaT0p51_v2',
    'HLT_PFHT400_DiPFJetAve90_PFAlphaT0p52_v2',
    'HLT_Rsq0p25_v2',
    'HLT_Rsq0p30_v2',
    'HLT_RsqMR240_Rsq0p09_MR200_4jet_v2',
    'HLT_RsqMR240_Rsq0p09_MR200_v2',
    'HLT_RsqMR270_Rsq0p09_MR200_4jet_v2',
    'HLT_RsqMR270_Rsq0p09_MR200_v2' ),
  HcalHPDNoise = cms.vstring( 'HLT_GlobalRunHPDNoise_v3' ),
  HcalNZS = cms.vstring( 'HLT_HcalNZS_v2',
    'HLT_HcalPhiSym_v2',
    'HLT_HcalUTCA_v2' ),
  HighMultiplicity85EOF = cms.vstring( 'HLT_PixelTracks_Multiplicity85ForEndOfFill_v1' ),
  HighMultiplicityEOF = cms.vstring( 'HLT_PixelTracks_Multiplicity110ForEndOfFill_v1',
    'HLT_PixelTracks_Multiplicity135ForEndOfFill_v1',
    'HLT_PixelTracks_Multiplicity160ForEndOfFill_v1',
    'HLT_PixelTracks_Multiplicity60ForEndOfFill_v1' ),
  JetHT = cms.vstring( 'HLT_AK8DiPFJet250_200_TrimMass30_BTagCSV_p20_v1',
    'HLT_AK8DiPFJet280_200_TrimMass30_BTagCSV_p20_v1',
    'HLT_AK8PFHT600_TrimR0p1PT0p03Mass50_BTagCSV_p20_v1',
    'HLT_AK8PFHT650_TrimR0p1PT0p03Mass50_v2',
    'HLT_AK8PFHT700_TrimR0p1PT0p03Mass50_v3',
    'HLT_AK8PFJet360_TrimMass30_v3',
    'HLT_CaloJet500_NoJetID_v2',
    'HLT_DiPFJetAve100_HFJEC_v3',
    'HLT_DiPFJetAve140_v2',
    'HLT_DiPFJetAve160_HFJEC_v3',
    'HLT_DiPFJetAve200_v2',
    'HLT_DiPFJetAve220_HFJEC_v3',
    'HLT_DiPFJetAve260_v2',
    'HLT_DiPFJetAve300_HFJEC_v3',
    'HLT_DiPFJetAve320_v2',
    'HLT_DiPFJetAve400_v2',
    'HLT_DiPFJetAve40_v2',
    'HLT_DiPFJetAve500_v2',
    'HLT_DiPFJetAve60_HFJEC_v3',
    'HLT_DiPFJetAve60_v2',
    'HLT_DiPFJetAve80_HFJEC_v3',
    'HLT_DiPFJetAve80_v2',
    'HLT_HT2000_v1',
    'HLT_HT200_v1',
    'HLT_HT2500_v1',
    'HLT_HT275_v1',
    'HLT_HT325_v1',
    'HLT_HT425_v1',
    'HLT_HT575_v1',
    'HLT_L1_TripleJet_VBF_v4',
    'HLT_PFHT200_v2',
    'HLT_PFHT250_v2',
    'HLT_PFHT300_v2',
    'HLT_PFHT350_v3',
    'HLT_PFHT400_SixJet30_DoubleBTagCSV_p056_v1',
    'HLT_PFHT400_SixJet30_v3',
    'HLT_PFHT400_v2',
    'HLT_PFHT450_SixJet40_BTagCSV_p056_v1',
    'HLT_PFHT450_SixJet40_v3',
    'HLT_PFHT475_v2',
    'HLT_PFHT550_4JetPt50_v1',
    'HLT_PFHT600_v3',
    'HLT_PFHT650_4JetPt50_v1',
    'HLT_PFHT650_WideJetMJJ900DEtaJJ1p5_v3',
    'HLT_PFHT650_WideJetMJJ950DEtaJJ1p5_v3',
    'HLT_PFHT650_v3',
    'HLT_PFHT750_4JetPt50_v3',
    'HLT_PFHT800_v2',
    'HLT_PFJet140_v4',
    'HLT_PFJet200_v4',
    'HLT_PFJet260_v4',
    'HLT_PFJet320_v4',
    'HLT_PFJet400_v4',
    'HLT_PFJet40_v4',
    'HLT_PFJet450_v4',
    'HLT_PFJet500_v4',
    'HLT_PFJet60_v4',
    'HLT_PFJet80_v4',
    'HLT_QuadPFJet_VBF_v4' ),
  L1Accept = cms.vstring( 'DST_Physics_v1' ),
  MET = cms.vstring( 'HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_BTagCSV_p067_v1',
    'HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_v2',
    'HLT_MET200_v1',
    'HLT_MET250_v1',
    'HLT_MET300_v1',
    'HLT_MET60_IsoTrk35_Loose_v1',
    'HLT_MET75_IsoTrk50_v2',
    'HLT_MET90_IsoTrk50_v2',
    'HLT_MonoCentralPFJet80_PFMETNoMu120_JetIdCleaned_PFMHTNoMu120_IDTight_v2',
    'HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight_v1',
    'HLT_MonoCentralPFJet80_PFMETNoMu90_JetIdCleaned_PFMHTNoMu90_IDTight_v3',
    'HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90_IDTight_v1',
    'HLT_Mu14er_PFMET100_v1',
    'HLT_Mu3er_PFHT140_PFMET125_v1',
    'HLT_Mu6_PFHT200_PFMET100_v1',
    'HLT_Mu6_PFHT200_PFMET80_BTagCSV_p067_v1',
    'HLT_PFMET100_PFMHT100_IDTight_v2',
    'HLT_PFMET110_PFMHT110_IDTight_v2',
    'HLT_PFMET120_BTagCSV_p067_v1',
    'HLT_PFMET120_Mu5_v1',
    'HLT_PFMET120_PFMHT120_IDTight_v2',
    'HLT_PFMET170_HBHECleaned_v2',
    'HLT_PFMET170_JetIdCleaned_v2',
    'HLT_PFMET170_NoiseCleaned_v3',
    'HLT_PFMET170_v2',
    'HLT_PFMET300_v1',
    'HLT_PFMET400_v1',
    'HLT_PFMET90_PFMHT90_IDTight_v2',
    'HLT_PFMETNoMu120_JetIdCleaned_PFMHTNoMu120_IDTight_v2',
    'HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_v1',
    'HLT_PFMETNoMu90_JetIdCleaned_PFMHTNoMu90_IDTight_v3',
    'HLT_PFMETNoMu90_PFMHTNoMu90_IDTight_v1' ),
  MonteCarlo = cms.vstring( 'MC_AK4CaloJets_v1',
    'MC_AK4PFJets_v2',
    'MC_AK8CaloHT_v1',
    'MC_AK8PFHT_v2',
    'MC_AK8PFJets_v2',
    'MC_AK8TrimPFJets_v2',
    'MC_CaloHT_v1',
    'MC_CaloMET_JetIdCleaned_v1',
    'MC_CaloMET_v1',
    'MC_CaloMHT_v1',
    'MC_Diphoton10_10_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass10_v1',
    'MC_DoubleEle5_CaloIdL_GsfTrkIdVL_MW_v2',
    'MC_DoubleGlbTrkMu_TrkIsoVVL_DZ_v1',
    'MC_DoubleMuNoFiltersNoVtx_v1',
    'MC_DoubleMu_TrkIsoVVL_DZ_v1',
    'MC_Ele15_Ele10_CaloIdL_TrackIdL_IsoVL_DZ_v2',
    'MC_Ele5_WPLoose_Gsf_v2',
    'MC_IsoMu_v4',
    'MC_IsoTkMu15_v3',
    'MC_PFHT_v2',
    'MC_PFMET_v2',
    'MC_PFMHT_v2',
    'MC_ReducedIterativeTracking_v1' ),
  MuOnia = cms.vstring( 'HLT_Dimuon0_Phi_Barrel_v2',
    'HLT_Dimuon0_Upsilon_Muon_v2',
    'HLT_Dimuon13_Upsilon_v2',
    'HLT_Dimuon8_Upsilon_Barrel_v2',
    'HLT_Mu16_TkMu0_dEta18_Onia_v2',
    'HLT_Mu16_TkMu0_dEta18_Phi_v2',
    'HLT_Mu25_TkMu0_dEta18_Onia_v2',
    'HLT_Mu7p5_L2Mu2_Upsilon_v2',
    'HLT_Mu7p5_Track2_Upsilon_v2',
    'HLT_Mu7p5_Track3p5_Upsilon_v2',
    'HLT_Mu7p5_Track7_Upsilon_v2',
    'HLT_QuadMuon0_Dimuon0_Upsilon_v2' ),
  MuonEG = cms.vstring( 'HLT_DiMu9_Ele9_CaloIdL_TrackIdL_v3',
    'HLT_Mu12_Photon25_CaloIdL_L1ISO_v3',
    'HLT_Mu12_Photon25_CaloIdL_L1OR_v3',
    'HLT_Mu12_Photon25_CaloIdL_v3',
    'HLT_Mu17_Photon22_CaloIdL_L1ISO_v1',
    'HLT_Mu17_Photon30_CaloIdL_L1ISO_v3',
    'HLT_Mu17_Photon35_CaloIdL_L1ISO_v3',
    'HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v3',
    'HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL_v2',
    'HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v3',
    'HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL_v2',
    'HLT_Mu30_Ele30_CaloIdL_GsfTrkIdVL_v3',
    'HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL_v2',
    'HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL_v2',
    'HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL_v2',
    'HLT_Mu8_DiEle12_CaloIdL_TrackIdL_v3',
    'HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT250_v1',
    'HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_v4',
    'HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL_v3',
    'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_v3' ),
  NoBPTX = cms.vstring( 'HLT_JetE30_NoBPTX3BX_NoHalo_v2',
    'HLT_JetE30_NoBPTX_v2',
    'HLT_JetE50_NoBPTX3BX_NoHalo_v2',
    'HLT_JetE70_NoBPTX3BX_NoHalo_v2',
    'HLT_L2Mu10_NoVertex_NoBPTX3BX_NoHalo_v2',
    'HLT_L2Mu10_NoVertex_NoBPTX_v2',
    'HLT_L2Mu35_NoVertex_3Sta_NoBPTX3BX_NoHalo_v2',
    'HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX_NoHalo_v2' ),
  OnlineMonitor = ( cms.vstring( 'DST_CaloJet40_BTagScouting_v1',
    'DST_CaloJet40_CaloScouting_PFScouting_v1',
    'DST_DoubleMu3_Mass10_BTagScouting_v1',
    'DST_DoubleMu3_Mass10_PFScouting_v1',
    'DST_HT250_CaloScouting_v2',
    'DST_HT450_BTagScouting_v1',
    'DST_HT450_PFScouting_v1',
    'DST_L1DoubleMu_BTagScouting_v1',
    'DST_L1DoubleMu_PFScouting_v1',
    'DST_L1HTT_BTagScouting_v1',
    'DST_L1HTT_CaloScouting_PFScouting_v1',
    'DST_ZeroBias_BTagScouting_v1',
    'DST_ZeroBias_PFScouting_v1',
    'HLT_AK4CaloJet100_v2',
    'HLT_AK4CaloJet30_v3',
    'HLT_AK4CaloJet40_v2',
    'HLT_AK4CaloJet50_v2',
    'HLT_AK4CaloJet80_v2',
    'HLT_AK4PFJet100_v3',
    'HLT_AK4PFJet30_v3',
    'HLT_AK4PFJet50_v3',
    'HLT_AK4PFJet80_v3',
    'HLT_AK8DiPFJet250_200_TrimMass30_BTagCSV_p20_v1',
    'HLT_AK8DiPFJet280_200_TrimMass30_BTagCSV_p20_v1',
    'HLT_AK8PFHT600_TrimR0p1PT0p03Mass50_BTagCSV_p20_v1',
    'HLT_AK8PFHT650_TrimR0p1PT0p03Mass50_v2',
    'HLT_AK8PFHT700_TrimR0p1PT0p03Mass50_v3',
    'HLT_AK8PFJet360_TrimMass30_v3',
    'HLT_Activity_Ecal_SC7_v2',
    'HLT_BTagMu_DiJet110_Mu5_v2',
    'HLT_BTagMu_DiJet20_Mu5_v2',
    'HLT_BTagMu_DiJet40_Mu5_v2',
    'HLT_BTagMu_DiJet70_Mu5_v2',
    'HLT_BTagMu_Jet300_Mu5_v2',
    'HLT_CaloJet500_NoJetID_v2',
    'HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_BTagCSV_p067_v1',
    'HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_v2',
    'HLT_DiCentralPFJet55_PFMET110_v1',
    'HLT_DiMu9_Ele9_CaloIdL_TrackIdL_v3',
    'HLT_DiPFJet40_DEta3p5_MJJ600_PFMETNoMu140_v1',
    'HLT_DiPFJet40_DEta3p5_MJJ600_PFMETNoMu80_v1',
    'HLT_DiPFJetAve100_HFJEC_v3',
    'HLT_DiPFJetAve140_v2',
    'HLT_DiPFJetAve160_HFJEC_v3',
    'HLT_DiPFJetAve200_v2',
    'HLT_DiPFJetAve220_HFJEC_v3',
    'HLT_DiPFJetAve260_v2',
    'HLT_DiPFJetAve300_HFJEC_v3',
    'HLT_DiPFJetAve320_v2',
    'HLT_DiPFJetAve400_v2',
    'HLT_DiPFJetAve40_v2',
    'HLT_DiPFJetAve500_v2',
    'HLT_DiPFJetAve60_HFJEC_v3',
    'HLT_DiPFJetAve60_v2',
    'HLT_DiPFJetAve80_HFJEC_v3',
    'HLT_DiPFJetAve80_v2',
    'HLT_Dimuon0_Jpsi_Muon_v2',
    'HLT_Dimuon0_Phi_Barrel_v2',
    'HLT_Dimuon0_Upsilon_Muon_v2',
    'HLT_Dimuon0er16_Jpsi_NoOS_NoVertexing_v2',
    'HLT_Dimuon0er16_Jpsi_NoVertexing_v2',
    'HLT_Dimuon10_Jpsi_Barrel_v2',
    'HLT_Dimuon13_PsiPrime_v2',
    'HLT_Dimuon13_Upsilon_v2',
    'HLT_Dimuon16_Jpsi_v2',
    'HLT_Dimuon20_Jpsi_v2',
    'HLT_Dimuon6_Jpsi_NoVertexing_v2',
    'HLT_Dimuon8_PsiPrime_Barrel_v2',
    'HLT_Dimuon8_Upsilon_Barrel_v2',
    'HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_v1',
    'HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_v1',
    'HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70_v1',
    'HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_v1',
    'HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55_v1',
    'HLT_DoubleEle24_22_eta2p1_WPLoose_Gsf_v2',
    'HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_MW_v3',
    'HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_v3',
    'HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT250_v1',
    'HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_v4',
    'HLT_DoubleIsoMu17_eta2p1_v3',
    'HLT_DoubleJet90_Double30_DoubleBTagCSV_p087_v1',
    'HLT_DoubleJet90_Double30_TripleBTagCSV_p087_v1',
    'HLT_DoubleJetsC100_DoubleBTagCSV_p014_DoublePFJetsC100MaxDeta1p6_v1',
    'HLT_DoubleJetsC100_DoubleBTagCSV_p026_DoublePFJetsC160_v1',
    'HLT_DoubleJetsC112_DoubleBTagCSV_p014_DoublePFJetsC112MaxDeta1p6_v1',
    'HLT_DoubleJetsC112_DoubleBTagCSV_p026_DoublePFJetsC172_v1',
    'HLT_DoubleMediumIsoPFTau35_Trk1_eta2p1_Reg_v2',
    'HLT_DoubleMediumIsoPFTau40_Trk1_eta2p1_Reg_v4',
    'HLT_DoubleMu18NoFiltersNoVtx_v2',
    'HLT_DoubleMu23NoFiltersNoVtxDisplaced_v2',
    'HLT_DoubleMu28NoFiltersNoVtxDisplaced_v2',
    'HLT_DoubleMu33NoFiltersNoVtx_v2',
    'HLT_DoubleMu38NoFiltersNoVtx_v2',
    'HLT_DoubleMu3_Mass10_v1',
    'HLT_DoubleMu4_3_Bs_v2',
    'HLT_DoubleMu4_3_Jpsi_Displaced_v2',
    'HLT_DoubleMu4_JpsiTrk_Displaced_v2',
    'HLT_DoubleMu4_LowMassNonResonantTrk_Displaced_v2',
    'HLT_DoubleMu4_PsiPrimeTrk_Displaced_v2',
    'HLT_DoubleMu8_Mass8_PFHT250_v1',
    'HLT_DoubleMu8_Mass8_PFHT300_v4',
    'HLT_DoublePhoton60_v1',
    'HLT_DoublePhoton85_v2',
    'HLT_ECALHT800_v2',
    'HLT_Ele105_CaloIdVT_GsfTrkIdT_v3',
    'HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV_p13_v1',
    'HLT_Ele115_CaloIdVT_GsfTrkIdT_v2',
    'HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_v3',
    'HLT_Ele12_CaloIdL_TrackIdL_IsoVL_v3',
    'HLT_Ele12_CaloIdM_TrackIdM_PFJet30_v3',
    'HLT_Ele15_IsoVVVL_BTagCSV_p067_PFHT400_v1',
    'HLT_Ele15_IsoVVVL_PFHT350_PFMET50_v2',
    'HLT_Ele15_IsoVVVL_PFHT350_v2',
    'HLT_Ele15_IsoVVVL_PFHT600_v3',
    'HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL_v3',
    'HLT_Ele17_CaloIdL_TrackIdL_IsoVL_v2',
    'HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v3',
    'HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_v3',
    'HLT_Ele22_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1_v2',
    'HLT_Ele22_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_v3',
    'HLT_Ele22_eta2p1_WPLoose_Gsf_v3',
    'HLT_Ele22_eta2p1_WPTight_Gsf_v3',
    'HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_v3',
    'HLT_Ele23_CaloIdL_TrackIdL_IsoVL_v3',
    'HLT_Ele23_CaloIdM_TrackIdM_PFJet30_v3',
    'HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v3',
    'HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_v3',
    'HLT_Ele23_WPLoose_Gsf_CentralPFJet30_BTagCSV_p063_v1',
    'HLT_Ele23_WPLoose_Gsf_TriCentralPFJet50_40_30_v2',
    'HLT_Ele23_WPLoose_Gsf_WHbbBoost_v2',
    'HLT_Ele23_WPLoose_Gsf_v3',
    'HLT_Ele27_WPLoose_Gsf_CentralPFJet30_BTagCSV_p063_v1',
    'HLT_Ele27_WPLoose_Gsf_TriCentralPFJet50_40_30_v1',
    'HLT_Ele27_WPLoose_Gsf_WHbbBoost_v2',
    'HLT_Ele27_WPLoose_Gsf_v1',
    'HLT_Ele27_eta2p1_WPLoose_Gsf_DoubleMediumIsoPFTau35_Trk1_eta2p1_Reg_v2',
    'HLT_Ele27_eta2p1_WPLoose_Gsf_DoubleMediumIsoPFTau40_Trk1_eta2p1_Reg_v3',
    'HLT_Ele27_eta2p1_WPLoose_Gsf_HT200_v2',
    'HLT_Ele27_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_v3',
    'HLT_Ele27_eta2p1_WPLoose_Gsf_v2',
    'HLT_Ele27_eta2p1_WPTight_Gsf_v2',
    'HLT_Ele30WP60_Ele8_Mass55_v2',
    'HLT_Ele30WP60_SC4_Mass55_v3',
    'HLT_Ele32_eta2p1_WPTight_Gsf_v2',
    'HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_v3',
    'HLT_Ele33_CaloIdM_TrackIdM_PFJet30_v3',
    'HLT_Ele35_CaloIdVT_GsfTrkIdT_PFJet150_PFJet50_v1',
    'HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50_v3',
    'HLT_Ele8_CaloIdM_TrackIdM_PFJet30_v3',
    'HLT_FullTrack12ForEndOfFill_v1',
    'HLT_FullTrack50_v2',
    'HLT_GlobalRunHPDNoise_v3',
    'HLT_HIL1DoubleMu0BPTX_v1',
    'HLT_HIL2DoubleMu0BPTX_v1',
    'HLT_HIL2Mu3BPTX_v1',
    'HLT_HIL3Mu3BPTX_v1',
    'HLT_HISinglePhoton10ForEndOfFill_v1',
    'HLT_HISinglePhoton15ForEndOfFill_v1',
    'HLT_HISinglePhoton20ForEndOfFill_v1',
    'HLT_HISinglePhoton40_v2',
    'HLT_HISinglePhoton60_v2',
    'HLT_HT2000_v1',
    'HLT_HT200_v1',
    'HLT_HT2500_v1',
    'HLT_HT250_DisplacedDijet40_DisplacedTrack_v2',
    'HLT_HT275_v1',
    'HLT_HT325_v1',
    'HLT_HT350_DisplacedDijet40_DisplacedTrack_v2',
    'HLT_HT350_DisplacedDijet80_DisplacedTrack_v2',
    'HLT_HT350_DisplacedDijet80_Tight_DisplacedTrack_v2',
    'HLT_HT400_DisplacedDijet40_Inclusive_v2',
    'HLT_HT425_v1',
    'HLT_HT450to470_v1',
    'HLT_HT470to500_v1',
    'HLT_HT500_DisplacedDijet40_Inclusive_v2',
    'HLT_HT500to550_v1',
    'HLT_HT550_DisplacedDijet40_Inclusive_v2',
    'HLT_HT550to650_v1',
    'HLT_HT575_v1',
    'HLT_HT650_DisplacedDijet80_Inclusive_v2',
    'HLT_HT650_v2',
    'HLT_HT750_DisplacedDijet80_Inclusive_v2',
    'HLT_HcalNZS_v2',
    'HLT_HcalPhiSym_v2',
    'HLT_HcalUTCA_v2',
    'HLT_IsoMu16_eta2p1_MET30_LooseIsoPFTau50_Trk30_eta2p1_v1',
    'HLT_IsoMu16_eta2p1_MET30_v1',
    'HLT_IsoMu17_eta2p1_LooseIsoPFTau20_SingleL1_v4',
    'HLT_IsoMu17_eta2p1_LooseIsoPFTau20_v4',
    'HLT_IsoMu17_eta2p1_MediumIsoPFTau35_Trk1_eta2p1_Reg_v3',
    'HLT_IsoMu17_eta2p1_MediumIsoPFTau40_Trk1_eta2p1_Reg_v5',
    'HLT_IsoMu17_eta2p1_v3',
    'HLT_IsoMu18_CentralPFJet30_BTagCSV_p063_v1',
    'HLT_IsoMu18_TriCentralPFJet50_40_30_v2',
    'HLT_IsoMu18_v2',
    'HLT_IsoMu20_eta2p1_LooseIsoPFTau20_v3',
    'HLT_IsoMu20_v3',
    'HLT_IsoMu22_CentralPFJet30_BTagCSV_p063_v1',
    'HLT_IsoMu22_TriCentralPFJet50_40_30_v2',
    'HLT_IsoMu22_v2',
    'HLT_IsoMu27_v3',
    'HLT_IsoTkMu18_v2',
    'HLT_IsoTkMu20_v4',
    'HLT_IsoTkMu22_v2',
    'HLT_IsoTkMu27_v3',
    'HLT_IsoTrackHB_v1',
    'HLT_IsoTrackHE_v1',
    'HLT_JetE30_NoBPTX3BX_NoHalo_v2',
    'HLT_JetE30_NoBPTX_v2',
    'HLT_JetE50_NoBPTX3BX_NoHalo_v2',
    'HLT_JetE70_NoBPTX3BX_NoHalo_v2',
    'HLT_L1SingleMu16_v1',
    'HLT_L1SingleMuOpen_DT_v2',
    'HLT_L1SingleMuOpen_v2',
    'HLT_L1Tech_DT_GlobalOR_v2',
    'HLT_L1_TripleJet_VBF_v4',
    'HLT_L2DoubleMu23_NoVertex_v2',
    'HLT_L2DoubleMu28_NoVertex_2Cha_Angle2p5_Mass10_v2',
    'HLT_L2DoubleMu38_NoVertex_2Cha_Angle2p5_Mass10_v2',
    'HLT_L2Mu10_NoVertex_NoBPTX3BX_NoHalo_v2',
    'HLT_L2Mu10_NoVertex_NoBPTX_v2',
    'HLT_L2Mu10_v1',
    'HLT_L2Mu35_NoVertex_3Sta_NoBPTX3BX_NoHalo_v2',
    'HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX_NoHalo_v2',
    'HLT_LooseIsoPFTau50_Trk30_eta2p1_MET120_v1',
    'HLT_LooseIsoPFTau50_Trk30_eta2p1_MET80_v1',
    'HLT_LooseIsoPFTau50_Trk30_eta2p1_v3',
    'HLT_MET200_v1',
    'HLT_MET250_v1',
    'HLT_MET300_v1',
    'HLT_MET60_IsoTrk35_Loose_v1',
    'HLT_MET75_IsoTrk50_v2',
    'HLT_MET90_IsoTrk50_v2',
    'HLT_MonoCentralPFJet80_PFMETNoMu120_JetIdCleaned_PFMHTNoMu120_IDTight_v2',
    'HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight_v1',
    'HLT_MonoCentralPFJet80_PFMETNoMu90_JetIdCleaned_PFMHTNoMu90_IDTight_v3',
    'HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90_IDTight_v1',
    'HLT_Mu10_CentralPFJet30_BTagCSV_p13_v1',
    'HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60_v1',
    'HLT_Mu12_Photon25_CaloIdL_L1ISO_v3',
    'HLT_Mu12_Photon25_CaloIdL_L1OR_v3',
    'HLT_Mu12_Photon25_CaloIdL_v3',
    'HLT_Mu14er_PFMET100_v1',
    'HLT_Mu15_IsoVVVL_BTagCSV_p067_PFHT400_v1',
    'HLT_Mu15_IsoVVVL_PFHT350_PFMET50_v2',
    'HLT_Mu15_IsoVVVL_PFHT350_v2',
    'HLT_Mu15_IsoVVVL_PFHT600_v3',
    'HLT_Mu16_TkMu0_dEta18_Onia_v2',
    'HLT_Mu16_TkMu0_dEta18_Phi_v2',
    'HLT_Mu16_eta2p1_MET30_v1',
    'HLT_Mu17_Mu8_DZ_v2',
    'HLT_Mu17_Mu8_SameSign_DZ_v1',
    'HLT_Mu17_Mu8_v1',
    'HLT_Mu17_Photon22_CaloIdL_L1ISO_v1',
    'HLT_Mu17_Photon30_CaloIdL_L1ISO_v3')+cms.vstring( 'HLT_Mu17_Photon35_CaloIdL_L1ISO_v3',
    'HLT_Mu17_TkMu8_DZ_v2',
    'HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v3',
    'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_v2',
    'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v2',
    'HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_v2',
    'HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_v2',
    'HLT_Mu17_TrkIsoVVL_v2',
    'HLT_Mu17_v2',
    'HLT_Mu20_Mu10_DZ_v1',
    'HLT_Mu20_Mu10_SameSign_DZ_v1',
    'HLT_Mu20_Mu10_v1',
    'HLT_Mu20_v2',
    'HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL_v2',
    'HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v3',
    'HLT_Mu24_eta2p1_v2',
    'HLT_Mu25_TkMu0_dEta18_Onia_v2',
    'HLT_Mu27_TkMu8_v2',
    'HLT_Mu27_v2',
    'HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL_v2',
    'HLT_Mu28NoFiltersNoVtx_CentralCaloJet40_v2',
    'HLT_Mu28NoFiltersNoVtx_DisplacedJet40_Loose_v2',
    'HLT_Mu300_v1',
    'HLT_Mu30_Ele30_CaloIdL_GsfTrkIdVL_v3',
    'HLT_Mu30_TkMu11_v2',
    'HLT_Mu30_eta2p1_PFJet150_PFJet50_v1',
    'HLT_Mu33NoFiltersNoVtxDisplaced_DisplacedJet50_Loose_v2',
    'HLT_Mu33NoFiltersNoVtxDisplaced_DisplacedJet50_Tight_v2',
    'HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL_v2',
    'HLT_Mu350_v1',
    'HLT_Mu38NoFiltersNoVtxDisplaced_DisplacedJet60_Loose_v2',
    'HLT_Mu38NoFiltersNoVtxDisplaced_DisplacedJet60_Tight_v2',
    'HLT_Mu38NoFiltersNoVtx_DisplacedJet60_Loose_v2',
    'HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL_v2',
    'HLT_Mu3er_PFHT140_PFMET125_v1',
    'HLT_Mu40_TkMu11_v2',
    'HLT_Mu40_eta2p1_PFJet200_PFJet50_v3',
    'HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL_v2',
    'HLT_Mu45_eta2p1_v2',
    'HLT_Mu50_v2',
    'HLT_Mu55_v1',
    'HLT_Mu6_PFHT200_PFMET100_v1',
    'HLT_Mu6_PFHT200_PFMET80_BTagCSV_p067_v1',
    'HLT_Mu7p5_L2Mu2_Jpsi_v2',
    'HLT_Mu7p5_L2Mu2_Upsilon_v2',
    'HLT_Mu7p5_Track2_Jpsi_v2',
    'HLT_Mu7p5_Track2_Upsilon_v2',
    'HLT_Mu7p5_Track3p5_Jpsi_v2',
    'HLT_Mu7p5_Track3p5_Upsilon_v2',
    'HLT_Mu7p5_Track7_Jpsi_v2',
    'HLT_Mu7p5_Track7_Upsilon_v2',
    'HLT_Mu8_DiEle12_CaloIdL_TrackIdL_v3',
    'HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT250_v1',
    'HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_v4',
    'HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL_v3',
    'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_v3',
    'HLT_Mu8_TrkIsoVVL_v3',
    'HLT_Mu8_v3',
    'HLT_OldIsoMu18_v1',
    'HLT_OldIsoTkMu18_v2',
    'HLT_PFHT200_DiPFJetAve90_PFAlphaT0p57_v2',
    'HLT_PFHT200_DiPFJetAve90_PFAlphaT0p63_v2',
    'HLT_PFHT200_PFAlphaT0p51_v2',
    'HLT_PFHT200_v2',
    'HLT_PFHT250_DiPFJetAve90_PFAlphaT0p55_v2',
    'HLT_PFHT250_DiPFJetAve90_PFAlphaT0p58_v2',
    'HLT_PFHT250_v2',
    'HLT_PFHT300_DiPFJetAve90_PFAlphaT0p53_v2',
    'HLT_PFHT300_DiPFJetAve90_PFAlphaT0p54_v2',
    'HLT_PFHT300_v2',
    'HLT_PFHT350_DiPFJetAve90_PFAlphaT0p52_v2',
    'HLT_PFHT350_DiPFJetAve90_PFAlphaT0p53_v2',
    'HLT_PFHT350_PFMET100_v1',
    'HLT_PFHT350_v3',
    'HLT_PFHT400_DiPFJetAve90_PFAlphaT0p51_v2',
    'HLT_PFHT400_DiPFJetAve90_PFAlphaT0p52_v2',
    'HLT_PFHT400_SixJet30_DoubleBTagCSV_p056_v1',
    'HLT_PFHT400_SixJet30_v3',
    'HLT_PFHT400_v2',
    'HLT_PFHT450_SixJet40_BTagCSV_p056_v1',
    'HLT_PFHT450_SixJet40_v3',
    'HLT_PFHT475_v2',
    'HLT_PFHT550_4JetPt50_v1',
    'HLT_PFHT600_v3',
    'HLT_PFHT650_4JetPt50_v1',
    'HLT_PFHT650_WideJetMJJ900DEtaJJ1p5_v3',
    'HLT_PFHT650_WideJetMJJ950DEtaJJ1p5_v3',
    'HLT_PFHT650_v3',
    'HLT_PFHT750_4JetPt50_v3',
    'HLT_PFHT800_v2',
    'HLT_PFJet140_v4',
    'HLT_PFJet200_v4',
    'HLT_PFJet260_v4',
    'HLT_PFJet320_v4',
    'HLT_PFJet400_v4',
    'HLT_PFJet40_v4',
    'HLT_PFJet450_v4',
    'HLT_PFJet500_v4',
    'HLT_PFJet60_v4',
    'HLT_PFJet80_v4',
    'HLT_PFMET100_PFMHT100_IDTight_v2',
    'HLT_PFMET110_PFMHT110_IDTight_v2',
    'HLT_PFMET120_BTagCSV_p067_v1',
    'HLT_PFMET120_Mu5_v1',
    'HLT_PFMET120_PFMHT120_IDTight_v2',
    'HLT_PFMET170_HBHECleaned_v2',
    'HLT_PFMET170_JetIdCleaned_v2',
    'HLT_PFMET170_NoiseCleaned_v3',
    'HLT_PFMET170_v2',
    'HLT_PFMET300_v1',
    'HLT_PFMET400_v1',
    'HLT_PFMET90_PFMHT90_IDTight_v2',
    'HLT_PFMETNoMu120_JetIdCleaned_PFMHTNoMu120_IDTight_v2',
    'HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_v1',
    'HLT_PFMETNoMu90_JetIdCleaned_PFMHTNoMu90_IDTight_v3',
    'HLT_PFMETNoMu90_PFMHTNoMu90_IDTight_v1',
    'HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40_v3',
    'HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF_v2',
    'HLT_Photon120_R9Id90_HE10_IsoM_v3',
    'HLT_Photon120_v3',
    'HLT_Photon135_PFMET100_v1',
    'HLT_Photon165_HE10_v3',
    'HLT_Photon165_R9Id90_HE10_IsoM_v3',
    'HLT_Photon175_v3',
    'HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40_v3',
    'HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF_v2',
    'HLT_Photon22_R9Id90_HE10_IsoM_v2',
    'HLT_Photon22_v2',
    'HLT_Photon250_NoHE_v2',
    'HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60_v2',
    'HLT_Photon300_NoHE_v2',
    'HLT_Photon30_R9Id90_HE10_IsoM_v3',
    'HLT_Photon30_v3',
    'HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15_v2',
    'HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40_v3',
    'HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF_v2',
    'HLT_Photon36_R9Id90_HE10_IsoM_v3',
    'HLT_Photon36_v3',
    'HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15_v2',
    'HLT_Photon500_v1',
    'HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40_v3',
    'HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF_v2',
    'HLT_Photon50_R9Id90_HE10_IsoM_v3',
    'HLT_Photon50_v3',
    'HLT_Photon600_v1',
    'HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40_v3',
    'HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF_v2',
    'HLT_Photon75_R9Id90_HE10_IsoM_v3',
    'HLT_Photon75_v3',
    'HLT_Photon90_CaloIdL_PFHT500_v3',
    'HLT_Photon90_CaloIdL_PFHT600_v2',
    'HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40_v3',
    'HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF_v2',
    'HLT_Photon90_R9Id90_HE10_IsoM_v3',
    'HLT_Photon90_v3',
    'HLT_Physics_v2',
    'HLT_PixelTracks_Multiplicity110ForEndOfFill_v1',
    'HLT_PixelTracks_Multiplicity135ForEndOfFill_v1',
    'HLT_PixelTracks_Multiplicity160ForEndOfFill_v1',
    'HLT_PixelTracks_Multiplicity60ForEndOfFill_v1',
    'HLT_PixelTracks_Multiplicity85ForEndOfFill_v1',
    'HLT_QuadJet45_DoubleBTagCSV_p087_v1',
    'HLT_QuadJet45_TripleBTagCSV_p087_v1',
    'HLT_QuadMuon0_Dimuon0_Jpsi_v2',
    'HLT_QuadMuon0_Dimuon0_Upsilon_v2',
    'HLT_QuadPFJet_BTagCSV_p037_VBF_Mqq460_v1',
    'HLT_QuadPFJet_BTagCSV_p037_VBF_Mqq500_v1',
    'HLT_QuadPFJet_BTagCSV_p037_p11_VBF_Mqq200_v1',
    'HLT_QuadPFJet_BTagCSV_p037_p11_VBF_Mqq240_v1',
    'HLT_QuadPFJet_VBF_v4',
    'HLT_Random_v1',
    'HLT_Rsq0p02_MR300_TriPFJet80_60_40_BTagCSV_p063_p20_Mbb60_200_v1',
    'HLT_Rsq0p02_MR300_TriPFJet80_60_40_DoubleBTagCSV_p063_Mbb60_200_v1',
    'HLT_Rsq0p25_v2',
    'HLT_Rsq0p30_v2',
    'HLT_RsqMR240_Rsq0p09_MR200_4jet_v2',
    'HLT_RsqMR240_Rsq0p09_MR200_v2',
    'HLT_RsqMR270_Rsq0p09_MR200_4jet_v2',
    'HLT_RsqMR270_Rsq0p09_MR200_v2',
    'HLT_TkMu20_v2',
    'HLT_TkMu24_eta2p1_v2',
    'HLT_TkMu27_v2',
    'HLT_TripleMu_12_10_5_v2',
    'HLT_TrkMu15_DoubleTrkMu5NoFiltersNoVtx_v2',
    'HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx_v2',
    'HLT_VBF_DisplacedJet40_DisplacedTrack_2TrackIP2DSig5_v2',
    'HLT_VBF_DisplacedJet40_DisplacedTrack_v2',
    'HLT_VBF_DisplacedJet40_Hadronic_2PromptTrack_v2',
    'HLT_VBF_DisplacedJet40_Hadronic_v2',
    'HLT_VBF_DisplacedJet40_TightID_DisplacedTrack_v2',
    'HLT_VBF_DisplacedJet40_TightID_Hadronic_v2',
    'HLT_VBF_DisplacedJet40_VTightID_DisplacedTrack_v2',
    'HLT_VBF_DisplacedJet40_VTightID_Hadronic_v2',
    'HLT_VBF_DisplacedJet40_VVTightID_DisplacedTrack_v2',
    'HLT_VBF_DisplacedJet40_VVTightID_Hadronic_v2',
    'HLT_ZeroBias_IsolatedBunches_v1',
    'HLT_ZeroBias_v2') ),
  ParkingHT450to470 = cms.vstring( 'HLT_HT450to470_v1' ),
  ParkingHT470to500 = cms.vstring( 'HLT_HT470to500_v1' ),
  ParkingHT500to550 = cms.vstring( 'HLT_HT500to550_v1' ),
  ParkingHT550to650 = cms.vstring( 'HLT_HT550to650_v1' ),
  ParkingHT650 = cms.vstring( 'HLT_HT650_v2' ),
  ParkingMuons = cms.vstring( 'HLT_DoubleMu3_Mass10_v1' ),
  ParkingScoutingMonitor = cms.vstring( 'DST_CaloJet40_BTagScouting_v1',
    'DST_CaloJet40_CaloScouting_PFScouting_v1',
    'DST_DoubleMu3_Mass10_BTagScouting_v1',
    'DST_DoubleMu3_Mass10_PFScouting_v1',
    'DST_HT250_CaloScouting_v2',
    'DST_HT450_BTagScouting_v1',
    'DST_HT450_PFScouting_v1',
    'DST_L1DoubleMu_BTagScouting_v1',
    'DST_L1DoubleMu_PFScouting_v1',
    'DST_L1HTT_BTagScouting_v1',
    'DST_L1HTT_CaloScouting_PFScouting_v1',
    'DST_ZeroBias_BTagScouting_v1',
    'DST_ZeroBias_PFScouting_v1',
    'HLT_DoubleMu3_Mass10_v1',
    'HLT_HT450to470_v1',
    'HLT_HT470to500_v1',
    'HLT_HT500to550_v1',
    'HLT_HT550to650_v1',
    'HLT_HT650_v2' ),
  RPCMonitor = cms.vstring( 'AlCa_RPCMuonNoHits_v2',
    'AlCa_RPCMuonNoTriggers_v2',
    'AlCa_RPCMuonNormalisation_v2' ),
  ScoutingCaloCommissioning = cms.vstring( 'DST_CaloJet40_CaloScouting_PFScouting_v1',
    'DST_L1HTT_CaloScouting_PFScouting_v1' ),
  ScoutingCaloHT = cms.vstring( 'DST_HT250_CaloScouting_v2' ),
  ScoutingPFCommissioning = cms.vstring( 'DST_CaloJet40_BTagScouting_v1',
    'DST_CaloJet40_CaloScouting_PFScouting_v1',
    'DST_L1DoubleMu_BTagScouting_v1',
    'DST_L1DoubleMu_PFScouting_v1',
    'DST_L1HTT_BTagScouting_v1',
    'DST_L1HTT_CaloScouting_PFScouting_v1',
    'DST_ZeroBias_BTagScouting_v1',
    'DST_ZeroBias_PFScouting_v1' ),
  ScoutingPFHT = cms.vstring( 'DST_HT450_BTagScouting_v1',
    'DST_HT450_PFScouting_v1' ),
  ScoutingPFMuons = cms.vstring( 'DST_DoubleMu3_Mass10_BTagScouting_v1',
    'DST_DoubleMu3_Mass10_PFScouting_v1' ),
  SingleElectron = cms.vstring( 'HLT_Ele105_CaloIdVT_GsfTrkIdT_v3',
    'HLT_Ele115_CaloIdVT_GsfTrkIdT_v2',
    'HLT_Ele15_IsoVVVL_BTagCSV_p067_PFHT400_v1',
    'HLT_Ele15_IsoVVVL_PFHT350_PFMET50_v2',
    'HLT_Ele15_IsoVVVL_PFHT350_v2',
    'HLT_Ele15_IsoVVVL_PFHT600_v3',
    'HLT_Ele22_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1_v2',
    'HLT_Ele22_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_v3',
    'HLT_Ele22_eta2p1_WPLoose_Gsf_v3',
    'HLT_Ele22_eta2p1_WPTight_Gsf_v3',
    'HLT_Ele23_WPLoose_Gsf_CentralPFJet30_BTagCSV_p063_v1',
    'HLT_Ele23_WPLoose_Gsf_TriCentralPFJet50_40_30_v2',
    'HLT_Ele23_WPLoose_Gsf_WHbbBoost_v2',
    'HLT_Ele23_WPLoose_Gsf_v3',
    'HLT_Ele27_WPLoose_Gsf_CentralPFJet30_BTagCSV_p063_v1',
    'HLT_Ele27_WPLoose_Gsf_TriCentralPFJet50_40_30_v1',
    'HLT_Ele27_WPLoose_Gsf_WHbbBoost_v2',
    'HLT_Ele27_WPLoose_Gsf_v1',
    'HLT_Ele27_eta2p1_WPLoose_Gsf_DoubleMediumIsoPFTau35_Trk1_eta2p1_Reg_v2',
    'HLT_Ele27_eta2p1_WPLoose_Gsf_DoubleMediumIsoPFTau40_Trk1_eta2p1_Reg_v3',
    'HLT_Ele27_eta2p1_WPLoose_Gsf_HT200_v2',
    'HLT_Ele27_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_v3',
    'HLT_Ele27_eta2p1_WPLoose_Gsf_v2',
    'HLT_Ele27_eta2p1_WPTight_Gsf_v2',
    'HLT_Ele32_eta2p1_WPTight_Gsf_v2',
    'HLT_Ele35_CaloIdVT_GsfTrkIdT_PFJet150_PFJet50_v1',
    'HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50_v3' ),
  SingleMuon = cms.vstring( 'HLT_DoubleIsoMu17_eta2p1_v3',
    'HLT_IsoMu16_eta2p1_MET30_LooseIsoPFTau50_Trk30_eta2p1_v1',
    'HLT_IsoMu16_eta2p1_MET30_v1',
    'HLT_IsoMu17_eta2p1_LooseIsoPFTau20_SingleL1_v4',
    'HLT_IsoMu17_eta2p1_LooseIsoPFTau20_v4',
    'HLT_IsoMu17_eta2p1_MediumIsoPFTau35_Trk1_eta2p1_Reg_v3',
    'HLT_IsoMu17_eta2p1_MediumIsoPFTau40_Trk1_eta2p1_Reg_v5',
    'HLT_IsoMu17_eta2p1_v3',
    'HLT_IsoMu18_CentralPFJet30_BTagCSV_p063_v1',
    'HLT_IsoMu18_TriCentralPFJet50_40_30_v2',
    'HLT_IsoMu18_v2',
    'HLT_IsoMu20_eta2p1_LooseIsoPFTau20_v3',
    'HLT_IsoMu20_v3',
    'HLT_IsoMu22_CentralPFJet30_BTagCSV_p063_v1',
    'HLT_IsoMu22_TriCentralPFJet50_40_30_v2',
    'HLT_IsoMu22_v2',
    'HLT_IsoMu27_v3',
    'HLT_IsoTkMu18_v2',
    'HLT_IsoTkMu20_v4',
    'HLT_IsoTkMu22_v2',
    'HLT_IsoTkMu27_v3',
    'HLT_L1SingleMu16_v1',
    'HLT_L1SingleMuOpen_v2',
    'HLT_L2Mu10_v1',
    'HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60_v1',
    'HLT_Mu15_IsoVVVL_BTagCSV_p067_PFHT400_v1',
    'HLT_Mu15_IsoVVVL_PFHT350_PFMET50_v2',
    'HLT_Mu15_IsoVVVL_PFHT350_v2',
    'HLT_Mu15_IsoVVVL_PFHT600_v3',
    'HLT_Mu16_eta2p1_MET30_v1',
    'HLT_Mu20_v2',
    'HLT_Mu24_eta2p1_v2',
    'HLT_Mu27_v2',
    'HLT_Mu28NoFiltersNoVtx_CentralCaloJet40_v2',
    'HLT_Mu28NoFiltersNoVtx_DisplacedJet40_Loose_v2',
    'HLT_Mu300_v1',
    'HLT_Mu30_eta2p1_PFJet150_PFJet50_v1',
    'HLT_Mu33NoFiltersNoVtxDisplaced_DisplacedJet50_Loose_v2',
    'HLT_Mu33NoFiltersNoVtxDisplaced_DisplacedJet50_Tight_v2',
    'HLT_Mu350_v1',
    'HLT_Mu38NoFiltersNoVtxDisplaced_DisplacedJet60_Loose_v2',
    'HLT_Mu38NoFiltersNoVtxDisplaced_DisplacedJet60_Tight_v2',
    'HLT_Mu38NoFiltersNoVtx_DisplacedJet60_Loose_v2',
    'HLT_Mu40_eta2p1_PFJet200_PFJet50_v3',
    'HLT_Mu45_eta2p1_v2',
    'HLT_Mu50_v2',
    'HLT_Mu55_v1',
    'HLT_OldIsoMu18_v1',
    'HLT_OldIsoTkMu18_v2',
    'HLT_TkMu20_v2',
    'HLT_TkMu24_eta2p1_v2',
    'HLT_TkMu27_v2' ),
  SinglePhoton = cms.vstring( 'HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40_v3',
    'HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF_v2',
    'HLT_Photon120_R9Id90_HE10_IsoM_v3',
    'HLT_Photon120_v3',
    'HLT_Photon135_PFMET100_v1',
    'HLT_Photon165_HE10_v3',
    'HLT_Photon165_R9Id90_HE10_IsoM_v3',
    'HLT_Photon175_v3',
    'HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40_v3',
    'HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF_v2',
    'HLT_Photon22_R9Id90_HE10_IsoM_v2',
    'HLT_Photon22_v2',
    'HLT_Photon250_NoHE_v2',
    'HLT_Photon300_NoHE_v2',
    'HLT_Photon30_R9Id90_HE10_IsoM_v3',
    'HLT_Photon30_v3',
    'HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40_v3',
    'HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF_v2',
    'HLT_Photon36_R9Id90_HE10_IsoM_v3',
    'HLT_Photon36_v3',
    'HLT_Photon500_v1',
    'HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40_v3',
    'HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF_v2',
    'HLT_Photon50_R9Id90_HE10_IsoM_v3',
    'HLT_Photon50_v3',
    'HLT_Photon600_v1',
    'HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40_v3',
    'HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF_v2',
    'HLT_Photon75_R9Id90_HE10_IsoM_v3',
    'HLT_Photon75_v3',
    'HLT_Photon90_CaloIdL_PFHT500_v3',
    'HLT_Photon90_CaloIdL_PFHT600_v2',
    'HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40_v3',
    'HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF_v2',
    'HLT_Photon90_R9Id90_HE10_IsoM_v3',
    'HLT_Photon90_v3' ),
  Tau = cms.vstring( 'HLT_DoubleMediumIsoPFTau35_Trk1_eta2p1_Reg_v2',
    'HLT_DoubleMediumIsoPFTau40_Trk1_eta2p1_Reg_v4',
    'HLT_LooseIsoPFTau50_Trk30_eta2p1_MET120_v1',
    'HLT_LooseIsoPFTau50_Trk30_eta2p1_MET80_v1',
    'HLT_LooseIsoPFTau50_Trk30_eta2p1_v3' ),
  TestEnablesEcalHcal = cms.vstring( 'HLT_EcalCalibration_v2',
    'HLT_HcalCalibration_v1' ),
  TestEnablesEcalHcalDQM = cms.vstring( 'HLT_EcalCalibration_v2',
    'HLT_HcalCalibration_v1' ),
  ZeroBias = cms.vstring( 'HLT_Random_v1',
    'HLT_ZeroBias_IsolatedBunches_v1',
    'HLT_ZeroBias_v2' )
)

source = cms.Source( "FedRawDataInputSource",
  numBuffers = cms.untracked.uint32( 2 ),
  useL1EventID = cms.untracked.bool( False ),
  eventChunkSize = cms.untracked.uint32( 32 ),
  fileNames = cms.untracked.vstring(  ),
  verifyChecksum = cms.untracked.bool( True ),
  eventChunkBlock = cms.untracked.uint32( 32 ),
  verifyAdler32 = cms.untracked.bool( True ),
  maxBufferedFiles = cms.untracked.uint32( 2 ),
  fileListMode = cms.untracked.bool( False )
)

CSCChannelMapperESSource = cms.ESSource( "EmptyESSource",
  iovIsRunNotTime = cms.bool( True ),
  recordName = cms.string( "CSCChannelMapperRecord" ),
  firstValid = cms.vuint32( 1 )
)
CSCINdexerESSource = cms.ESSource( "EmptyESSource",
  iovIsRunNotTime = cms.bool( True ),
  recordName = cms.string( "CSCIndexerRecord" ),
  firstValid = cms.vuint32( 1 )
)
GlobalTag = cms.ESSource( "PoolDBESSource",
  globaltag = cms.string( "74X_dataRun2_HLT_v1" ),
  RefreshEachRun = cms.untracked.bool( True ),
  snapshotTime = cms.string( "" ),
  toGet = cms.VPSet( 
  ),
  DBParameters = cms.PSet( 
    authenticationPath = cms.untracked.string( "." ),
    connectionRetrialTimeOut = cms.untracked.int32( 60 ),
    idleConnectionCleanupPeriod = cms.untracked.int32( 10 ),
    messageLevel = cms.untracked.int32( 0 ),
    enablePoolAutomaticCleanUp = cms.untracked.bool( False ),
    enableConnectionSharing = cms.untracked.bool( True ),
    enableReadOnlySessionOnUpdateConnection = cms.untracked.bool( False ),
    connectionTimeOut = cms.untracked.int32( 0 ),
    connectionRetrialPeriod = cms.untracked.int32( 10 )
  ),
  RefreshAlways = cms.untracked.bool( False ),
  connect = cms.string( "frontier://(proxyurl=http://localhost:3128)(serverurl=http://localhost:8000/FrontierOnProd)(serverurl=http://localhost:8000/FrontierOnProd)(retrieve-ziplevel=0)/CMS_CONDITIONS" ),
  ReconnectEachRun = cms.untracked.bool( True ),
  RefreshOpenIOVs = cms.untracked.bool( False ),
  DumpStat = cms.untracked.bool( False )
)
HepPDTESSource = cms.ESSource( "HepPDTESSource",
  pdtFileName = cms.FileInPath( "SimGeneral/HepPDTESSource/data/pythiaparticle.tbl" )
)
StableParametersRcdSource = cms.ESSource( "EmptyESSource",
  iovIsRunNotTime = cms.bool( True ),
  recordName = cms.string( "L1TGlobalStableParametersRcd" ),
  firstValid = cms.vuint32( 1 )
)
eegeom = cms.ESSource( "EmptyESSource",
  iovIsRunNotTime = cms.bool( True ),
  recordName = cms.string( "EcalMappingRcd" ),
  firstValid = cms.vuint32( 1 )
)
es_hardcode = cms.ESSource( "HcalHardcodeCalibrations",
  fromDDD = cms.untracked.bool( False ),
  toGet = cms.untracked.vstring( 'GainWidths' )
)
hltESSBTagRecord = cms.ESSource( "EmptyESSource",
  iovIsRunNotTime = cms.bool( True ),
  recordName = cms.string( "JetTagComputerRecord" ),
  firstValid = cms.vuint32( 1 )
)
hltESSEcalSeverityLevel = cms.ESSource( "EmptyESSource",
  iovIsRunNotTime = cms.bool( True ),
  recordName = cms.string( "EcalSeverityLevelAlgoRcd" ),
  firstValid = cms.vuint32( 1 )
)
hltESSHcalSeverityLevel = cms.ESSource( "EmptyESSource",
  iovIsRunNotTime = cms.bool( True ),
  recordName = cms.string( "HcalSeverityLevelComputerRcd" ),
  firstValid = cms.vuint32( 1 )
)

AnyDirectionAnalyticalPropagator = cms.ESProducer( "AnalyticalPropagatorESProducer",
  MaxDPhi = cms.double( 1.6 ),
  ComponentName = cms.string( "AnyDirectionAnalyticalPropagator" ),
  PropagationDirection = cms.string( "anyDirection" )
)
CSCChannelMapperESProducer = cms.ESProducer( "CSCChannelMapperESProducer",
  AlgoName = cms.string( "CSCChannelMapperPostls1" )
)
CSCGeometryESModule = cms.ESProducer( "CSCGeometryESModule",
  useRealWireGeometry = cms.bool( True ),
  appendToDataLabel = cms.string( "" ),
  alignmentsLabel = cms.string( "" ),
  useGangedStripsInME1a = cms.bool( False ),
  debugV = cms.untracked.bool( False ),
  useOnlyWiresInME1a = cms.bool( False ),
  useDDD = cms.bool( False ),
  useCentreTIOffsets = cms.bool( False ),
  applyAlignment = cms.bool( True )
)
CSCIndexerESProducer = cms.ESProducer( "CSCIndexerESProducer",
  AlgoName = cms.string( "CSCIndexerPostls1" )
)
CSCObjectMapESProducer = cms.ESProducer( "CSCObjectMapESProducer",
  appendToDataLabel = cms.string( "" )
)
CaloGeometryBuilder = cms.ESProducer( "CaloGeometryBuilder",
  SelectedCalos = cms.vstring( 'HCAL',
    'ZDC',
    'EcalBarrel',
    'EcalEndcap',
    'EcalPreshower',
    'TOWER' )
)
CaloTopologyBuilder = cms.ESProducer( "CaloTopologyBuilder" )
CaloTowerConstituentsMapBuilder = cms.ESProducer( "CaloTowerConstituentsMapBuilder",
  appendToDataLabel = cms.string( "" ),
  MapFile = cms.untracked.string( "Geometry/CaloTopology/data/CaloTowerEEGeometric.map.gz" )
)
CaloTowerGeometryFromDBEP = cms.ESProducer( "CaloTowerGeometryFromDBEP",
  applyAlignment = cms.bool( False ),
  hcalTopologyConstants = cms.PSet( 
    maxDepthHE = cms.int32( 3 ),
    maxDepthHB = cms.int32( 2 ),
    mode = cms.string( "HcalTopologyMode::LHC" )
  )
)
CaloTowerTopologyEP = cms.ESProducer( "CaloTowerTopologyEP",
  appendToDataLabel = cms.string( "" )
)
CastorDbProducer = cms.ESProducer( "CastorDbProducer",
  appendToDataLabel = cms.string( "" )
)
ClusterShapeHitFilterESProducer = cms.ESProducer( "ClusterShapeHitFilterESProducer",
  ComponentName = cms.string( "ClusterShapeHitFilter" ),
  clusterChargeCut = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutNone" ) ),
  PixelShapeFile = cms.string( "RecoPixelVertexing/PixelLowPtUtilities/data/pixelShape.par" )
)
DTGeometryESModule = cms.ESProducer( "DTGeometryESModule",
  appendToDataLabel = cms.string( "" ),
  fromDDD = cms.bool( False ),
  applyAlignment = cms.bool( True ),
  alignmentsLabel = cms.string( "" )
)
DTObjectMapESProducer = cms.ESProducer( "DTObjectMapESProducer",
  appendToDataLabel = cms.string( "" )
)
EcalBarrelGeometryFromDBEP = cms.ESProducer( "EcalBarrelGeometryFromDBEP",
  applyAlignment = cms.bool( True )
)
EcalElectronicsMappingBuilder = cms.ESProducer( "EcalElectronicsMappingBuilder" )
EcalEndcapGeometryFromDBEP = cms.ESProducer( "EcalEndcapGeometryFromDBEP",
  applyAlignment = cms.bool( True )
)
EcalLaserCorrectionService = cms.ESProducer( "EcalLaserCorrectionService" )
EcalPreshowerGeometryFromDBEP = cms.ESProducer( "EcalPreshowerGeometryFromDBEP",
  applyAlignment = cms.bool( True )
)
HcalGeometryFromDBEP = cms.ESProducer( "HcalGeometryFromDBEP",
  applyAlignment = cms.bool( False ),
  hcalTopologyConstants = cms.PSet( 
    maxDepthHE = cms.int32( 3 ),
    maxDepthHB = cms.int32( 2 ),
    mode = cms.string( "HcalTopologyMode::LHC" )
  )
)
HcalTopologyIdealEP = cms.ESProducer( "HcalTopologyIdealEP",
  Exclude = cms.untracked.string( "" ),
  appendToDataLabel = cms.string( "" )
)
MaterialPropagator = cms.ESProducer( "PropagatorWithMaterialESProducer",
  SimpleMagneticField = cms.string( "" ),
  PropagationDirection = cms.string( "alongMomentum" ),
  ComponentName = cms.string( "PropagatorWithMaterial" ),
  Mass = cms.double( 0.105 ),
  ptMin = cms.double( -1.0 ),
  MaxDPhi = cms.double( 1.6 ),
  useRungeKutta = cms.bool( False )
)
MaterialPropagatorForHI = cms.ESProducer( "PropagatorWithMaterialESProducer",
  SimpleMagneticField = cms.string( "ParabolicMf" ),
  PropagationDirection = cms.string( "alongMomentum" ),
  ComponentName = cms.string( "PropagatorWithMaterialForHI" ),
  Mass = cms.double( 0.139 ),
  ptMin = cms.double( -1.0 ),
  MaxDPhi = cms.double( 1.6 ),
  useRungeKutta = cms.bool( False )
)
MaterialPropagatorParabolicMF = cms.ESProducer( "PropagatorWithMaterialESProducer",
  SimpleMagneticField = cms.string( "ParabolicMf" ),
  PropagationDirection = cms.string( "alongMomentum" ),
  ComponentName = cms.string( "PropagatorWithMaterialParabolicMf" ),
  Mass = cms.double( 0.105 ),
  ptMin = cms.double( -1.0 ),
  MaxDPhi = cms.double( 1.6 ),
  useRungeKutta = cms.bool( False )
)
OppositeMaterialPropagator = cms.ESProducer( "PropagatorWithMaterialESProducer",
  SimpleMagneticField = cms.string( "" ),
  PropagationDirection = cms.string( "oppositeToMomentum" ),
  ComponentName = cms.string( "PropagatorWithMaterialOpposite" ),
  Mass = cms.double( 0.105 ),
  ptMin = cms.double( -1.0 ),
  MaxDPhi = cms.double( 1.6 ),
  useRungeKutta = cms.bool( False )
)
OppositeMaterialPropagatorForHI = cms.ESProducer( "PropagatorWithMaterialESProducer",
  SimpleMagneticField = cms.string( "ParabolicMf" ),
  PropagationDirection = cms.string( "oppositeToMomentum" ),
  ComponentName = cms.string( "PropagatorWithMaterialOppositeForHI" ),
  Mass = cms.double( 0.139 ),
  ptMin = cms.double( -1.0 ),
  MaxDPhi = cms.double( 1.6 ),
  useRungeKutta = cms.bool( False )
)
OppositeMaterialPropagatorParabolicMF = cms.ESProducer( "PropagatorWithMaterialESProducer",
  SimpleMagneticField = cms.string( "ParabolicMf" ),
  PropagationDirection = cms.string( "oppositeToMomentum" ),
  ComponentName = cms.string( "PropagatorWithMaterialParabolicMfOpposite" ),
  Mass = cms.double( 0.105 ),
  ptMin = cms.double( -1.0 ),
  MaxDPhi = cms.double( 1.6 ),
  useRungeKutta = cms.bool( False )
)
OppositePropagatorWithMaterialForMixedStep = cms.ESProducer( "PropagatorWithMaterialESProducer",
  SimpleMagneticField = cms.string( "ParabolicMf" ),
  PropagationDirection = cms.string( "oppositeToMomentum" ),
  ComponentName = cms.string( "PropagatorWithMaterialForMixedStepOpposite" ),
  Mass = cms.double( 0.105 ),
  ptMin = cms.double( 0.05 ),
  MaxDPhi = cms.double( 1.6 ),
  useRungeKutta = cms.bool( False )
)
ParametrizedMagneticFieldProducer = cms.ESProducer( "AutoParametrizedMagneticFieldProducer",
  version = cms.string( "Parabolic" ),
  valueOverride = cms.int32( -1 ),
  label = cms.untracked.string( "ParabolicMf" )
)
PropagatorWithMaterialForLoopers = cms.ESProducer( "PropagatorWithMaterialESProducer",
  SimpleMagneticField = cms.string( "ParabolicMf" ),
  PropagationDirection = cms.string( "alongMomentum" ),
  ComponentName = cms.string( "PropagatorWithMaterialForLoopers" ),
  Mass = cms.double( 0.1396 ),
  ptMin = cms.double( -1.0 ),
  MaxDPhi = cms.double( 4.0 ),
  useRungeKutta = cms.bool( False )
)
PropagatorWithMaterialForMixedStep = cms.ESProducer( "PropagatorWithMaterialESProducer",
  SimpleMagneticField = cms.string( "ParabolicMf" ),
  PropagationDirection = cms.string( "alongMomentum" ),
  ComponentName = cms.string( "PropagatorWithMaterialForMixedStep" ),
  Mass = cms.double( 0.105 ),
  ptMin = cms.double( 0.05 ),
  MaxDPhi = cms.double( 1.6 ),
  useRungeKutta = cms.bool( False )
)
RPCGeometryESModule = cms.ESProducer( "RPCGeometryESModule",
  useDDD = cms.untracked.bool( False ),
  compatibiltyWith11 = cms.untracked.bool( True )
)
SiStripGainESProducer = cms.ESProducer( "SiStripGainESProducer",
  printDebug = cms.untracked.bool( False ),
  appendToDataLabel = cms.string( "" ),
  APVGain = cms.VPSet( 
    cms.PSet(  Record = cms.string( "SiStripApvGainRcd" ),
      NormalizationFactor = cms.untracked.double( 1.0 ),
      Label = cms.untracked.string( "" )
    ),
    cms.PSet(  Record = cms.string( "SiStripApvGain2Rcd" ),
      NormalizationFactor = cms.untracked.double( 1.0 ),
      Label = cms.untracked.string( "" )
    )
  ),
  AutomaticNormalization = cms.bool( False )
)
SiStripQualityESProducer = cms.ESProducer( "SiStripQualityESProducer",
  appendToDataLabel = cms.string( "" ),
  PrintDebugOutput = cms.bool( False ),
  ThresholdForReducedGranularity = cms.double( 0.3 ),
  UseEmptyRunInfo = cms.bool( False ),
  ReduceGranularity = cms.bool( False ),
  ListOfRecordToMerge = cms.VPSet( 
    cms.PSet(  record = cms.string( "SiStripDetVOffRcd" ),
      tag = cms.string( "" )
    ),
    cms.PSet(  record = cms.string( "SiStripDetCablingRcd" ),
      tag = cms.string( "" )
    ),
    cms.PSet(  record = cms.string( "SiStripBadChannelRcd" ),
      tag = cms.string( "" )
    ),
    cms.PSet(  record = cms.string( "SiStripBadFiberRcd" ),
      tag = cms.string( "" )
    ),
    cms.PSet(  record = cms.string( "SiStripBadModuleRcd" ),
      tag = cms.string( "" )
    )
  )
)
SiStripRecHitMatcherESProducer = cms.ESProducer( "SiStripRecHitMatcherESProducer",
  PreFilter = cms.bool( False ),
  ComponentName = cms.string( "StandardMatcher" ),
  NSigmaInside = cms.double( 3.0 )
)
SiStripRegionConnectivity = cms.ESProducer( "SiStripRegionConnectivity",
  EtaDivisions = cms.untracked.uint32( 20 ),
  PhiDivisions = cms.untracked.uint32( 20 ),
  EtaMax = cms.untracked.double( 2.5 )
)
SimpleSecondaryVertex3TrkComputer = cms.ESProducer( "SimpleSecondaryVertexESProducer",
  minTracks = cms.uint32( 3 ),
  use3d = cms.bool( True ),
  unBoost = cms.bool( False ),
  useSignificance = cms.bool( True )
)
StableParameters = cms.ESProducer( "StableParametersTrivialProducer",
  NumberL1IsoEG = cms.uint32( 4 ),
  NumberL1JetCounts = cms.uint32( 12 ),
  UnitLength = cms.int32( 8 ),
  NumberL1ForJet = cms.uint32( 4 ),
  IfCaloEtaNumberBits = cms.uint32( 4 ),
  IfMuEtaNumberBits = cms.uint32( 6 ),
  NumberL1TauJet = cms.uint32( 4 ),
  NumberL1Mu = cms.uint32( 4 ),
  NumberConditionChips = cms.uint32( 1 ),
  NumberPsbBoards = cms.int32( 7 ),
  NumberL1CenJet = cms.uint32( 4 ),
  NumberPhysTriggers = cms.uint32( 512 ),
  PinsOnConditionChip = cms.uint32( 512 ),
  NumberL1NoIsoEG = cms.uint32( 4 ),
  NumberTechnicalTriggers = cms.uint32( 64 ),
  NumberPhysTriggersExtended = cms.uint32( 64 ),
  WordLength = cms.int32( 64 ),
  OrderConditionChip = cms.vint32( 1 )
)
SteppingHelixPropagatorAny = cms.ESProducer( "SteppingHelixPropagatorESProducer",
  NoErrorPropagation = cms.bool( False ),
  endcapShiftInZPos = cms.double( 0.0 ),
  PropagationDirection = cms.string( "anyDirection" ),
  useTuningForL2Speed = cms.bool( False ),
  useIsYokeFlag = cms.bool( True ),
  endcapShiftInZNeg = cms.double( 0.0 ),
  SetVBFPointer = cms.bool( False ),
  AssumeNoMaterial = cms.bool( False ),
  returnTangentPlane = cms.bool( True ),
  useInTeslaFromMagField = cms.bool( False ),
  VBFName = cms.string( "VolumeBasedMagneticField" ),
  useEndcapShiftsInZ = cms.bool( False ),
  sendLogWarning = cms.bool( False ),
  useMatVolumes = cms.bool( True ),
  debug = cms.bool( False ),
  ApplyRadX0Correction = cms.bool( True ),
  useMagVolumes = cms.bool( True ),
  ComponentName = cms.string( "SteppingHelixPropagatorAny" )
)
TrackerDigiGeometryESModule = cms.ESProducer( "TrackerDigiGeometryESModule",
  appendToDataLabel = cms.string( "" ),
  fromDDD = cms.bool( False ),
  applyAlignment = cms.bool( True ),
  alignmentsLabel = cms.string( "" )
)
TrackerGeometricDetESModule = cms.ESProducer( "TrackerGeometricDetESModule",
  appendToDataLabel = cms.string( "" ),
  fromDDD = cms.bool( False )
)
TransientTrackBuilderESProducer = cms.ESProducer( "TransientTrackBuilderESProducer",
  ComponentName = cms.string( "TransientTrackBuilder" )
)
VolumeBasedMagneticFieldESProducer = cms.ESProducer( "VolumeBasedMagneticFieldESProducerFromDB",
  debugBuilder = cms.untracked.bool( False ),
  valueOverride = cms.int32( -1 ),
  label = cms.untracked.string( "" )
)
ZdcGeometryFromDBEP = cms.ESProducer( "ZdcGeometryFromDBEP",
  applyAlignment = cms.bool( False )
)
caloDetIdAssociator = cms.ESProducer( "DetIdAssociatorESProducer",
  ComponentName = cms.string( "CaloDetIdAssociator" ),
  etaBinSize = cms.double( 0.087 ),
  nEta = cms.int32( 70 ),
  nPhi = cms.int32( 72 ),
  includeBadChambers = cms.bool( False )
)
cosmicsNavigationSchoolESProducer = cms.ESProducer( "NavigationSchoolESProducer",
  ComponentName = cms.string( "CosmicNavigationSchool" ),
  SimpleMagneticField = cms.string( "" )
)
ecalDetIdAssociator = cms.ESProducer( "DetIdAssociatorESProducer",
  ComponentName = cms.string( "EcalDetIdAssociator" ),
  etaBinSize = cms.double( 0.02 ),
  nEta = cms.int32( 300 ),
  nPhi = cms.int32( 360 ),
  includeBadChambers = cms.bool( False )
)
ecalSeverityLevel = cms.ESProducer( "EcalSeverityLevelESProducer",
  dbstatusMask = cms.PSet( 
    kGood = cms.vstring( 'kOk' ),
    kProblematic = cms.vstring( 'kDAC',
      'kNoLaser',
      'kNoisy',
      'kNNoisy',
      'kNNNoisy',
      'kNNNNoisy',
      'kNNNNNoisy',
      'kFixedG6',
      'kFixedG1',
      'kFixedG0' ),
    kRecovered = cms.vstring(  ),
    kTime = cms.vstring(  ),
    kWeird = cms.vstring(  ),
    kBad = cms.vstring( 'kNonRespondingIsolated',
      'kDeadVFE',
      'kDeadFE',
      'kNoDataNoTP' )
  ),
  timeThresh = cms.double( 2.0 ),
  flagMask = cms.PSet( 
    kGood = cms.vstring( 'kGood' ),
    kProblematic = cms.vstring( 'kPoorReco',
      'kPoorCalib',
      'kNoisy',
      'kSaturated' ),
    kRecovered = cms.vstring( 'kLeadingEdgeRecovered',
      'kTowerRecovered' ),
    kTime = cms.vstring( 'kOutOfTime' ),
    kWeird = cms.vstring( 'kWeird',
      'kDiWeird' ),
    kBad = cms.vstring( 'kFaultyHardware',
      'kDead',
      'kKilled' )
  )
)
hcalDDDRecConstants = cms.ESProducer( "HcalDDDRecConstantsESModule",
  appendToDataLabel = cms.string( "" )
)
hcalDDDSimConstants = cms.ESProducer( "HcalDDDSimConstantsESModule",
  appendToDataLabel = cms.string( "" )
)
hcalDetIdAssociator = cms.ESProducer( "DetIdAssociatorESProducer",
  ComponentName = cms.string( "HcalDetIdAssociator" ),
  etaBinSize = cms.double( 0.087 ),
  nEta = cms.int32( 70 ),
  nPhi = cms.int32( 72 ),
  includeBadChambers = cms.bool( False )
)
hcalRecAlgos = cms.ESProducer( "HcalRecAlgoESProducer",
  RecoveredRecHitBits = cms.vstring( 'TimingAddedBit',
    'TimingSubtractedBit' ),
  SeverityLevels = cms.VPSet( 
    cms.PSet(  RecHitFlags = cms.vstring(  ),
      ChannelStatus = cms.vstring(  ),
      Level = cms.int32( 0 )
    ),
    cms.PSet(  RecHitFlags = cms.vstring(  ),
      ChannelStatus = cms.vstring( 'HcalCellCaloTowerProb' ),
      Level = cms.int32( 1 )
    ),
    cms.PSet(  RecHitFlags = cms.vstring( 'HSCP_R1R2',
  'HSCP_FracLeader',
  'HSCP_OuterEnergy',
  'HSCP_ExpFit',
  'ADCSaturationBit',
  'HBHEIsolatedNoise',
  'AddedSimHcalNoise' ),
      ChannelStatus = cms.vstring( 'HcalCellExcludeFromHBHENoiseSummary' ),
      Level = cms.int32( 5 )
    ),
    cms.PSet(  RecHitFlags = cms.vstring( 'HBHEHpdHitMultiplicity',
  'HBHEPulseShape',
  'HOBit',
  'HFInTimeWindow',
  'ZDCBit',
  'CalibrationBit',
  'TimingErrorBit',
  'HBHETriangleNoise',
  'HBHETS4TS5Noise' ),
      ChannelStatus = cms.vstring(  ),
      Level = cms.int32( 8 )
    ),
    cms.PSet(  RecHitFlags = cms.vstring( 'HFLongShort',
  'HFPET',
  'HFS8S1Ratio',
  'HFDigiTime' ),
      ChannelStatus = cms.vstring(  ),
      Level = cms.int32( 11 )
    ),
    cms.PSet(  RecHitFlags = cms.vstring( 'HBHEFlatNoise',
  'HBHESpikeNoise' ),
      ChannelStatus = cms.vstring( 'HcalCellCaloTowerMask' ),
      Level = cms.int32( 12 )
    ),
    cms.PSet(  RecHitFlags = cms.vstring(  ),
      ChannelStatus = cms.vstring( 'HcalCellHot' ),
      Level = cms.int32( 15 )
    ),
    cms.PSet(  RecHitFlags = cms.vstring(  ),
      ChannelStatus = cms.vstring( 'HcalCellOff',
        'HcalCellDead' ),
      Level = cms.int32( 20 )
    )
  ),
  DropChannelStatusBits = cms.vstring( 'HcalCellMask',
    'HcalCellOff',
    'HcalCellDead' )
)
hcal_db_producer = cms.ESProducer( "HcalDbProducer" )
hltCombinedSecondaryVertex = cms.ESProducer( "CombinedSecondaryVertexESProducer",
  recordLabel = cms.string( "HLT" ),
  categoryVariableName = cms.string( "vertexCategory" ),
  useTrackWeights = cms.bool( True ),
  useCategories = cms.bool( True ),
  pseudoMultiplicityMin = cms.uint32( 2 ),
  correctVertexMass = cms.bool( True ),
  trackSelection = cms.PSet( 
    totalHitsMin = cms.uint32( 0 ),
    jetDeltaRMax = cms.double( 0.3 ),
    qualityClass = cms.string( "any" ),
    pixelHitsMin = cms.uint32( 0 ),
    sip3dSigMin = cms.double( -99999.9 ),
    sip3dSigMax = cms.double( 99999.9 ),
    normChi2Max = cms.double( 99999.9 ),
    maxDistToAxis = cms.double( 0.07 ),
    sip2dValMax = cms.double( 99999.9 ),
    maxDecayLen = cms.double( 5.0 ),
    ptMin = cms.double( 0.0 ),
    sip2dSigMax = cms.double( 99999.9 ),
    sip2dSigMin = cms.double( -99999.9 ),
    sip3dValMax = cms.double( 99999.9 ),
    sip2dValMin = cms.double( -99999.9 ),
    sip3dValMin = cms.double( -99999.9 )
  ),
  calibrationRecords = cms.vstring( 'CombinedSVRecoVertex',
    'CombinedSVPseudoVertex',
    'CombinedSVNoVertex' ),
  trackPairV0Filter = cms.PSet(  k0sMassWindow = cms.double( 0.03 ) ),
  charmCut = cms.double( 1.5 ),
  vertexFlip = cms.bool( False ),
  minimumTrackWeight = cms.double( 0.5 ),
  pseudoVertexV0Filter = cms.PSet(  k0sMassWindow = cms.double( 0.05 ) ),
  trackMultiplicityMin = cms.uint32( 3 ),
  trackPseudoSelection = cms.PSet( 
    totalHitsMin = cms.uint32( 0 ),
    jetDeltaRMax = cms.double( 0.3 ),
    qualityClass = cms.string( "any" ),
    pixelHitsMin = cms.uint32( 0 ),
    sip3dSigMin = cms.double( -99999.9 ),
    sip3dSigMax = cms.double( 99999.9 ),
    normChi2Max = cms.double( 99999.9 ),
    maxDistToAxis = cms.double( 0.07 ),
    sip2dValMax = cms.double( 99999.9 ),
    maxDecayLen = cms.double( 5.0 ),
    ptMin = cms.double( 0.0 ),
    sip2dSigMax = cms.double( 99999.9 ),
    sip2dSigMin = cms.double( 2.0 ),
    sip3dValMax = cms.double( 99999.9 ),
    sip2dValMin = cms.double( -99999.9 ),
    sip3dValMin = cms.double( -99999.9 )
  ),
  trackSort = cms.string( "sip2dSig" ),
  trackFlip = cms.bool( False )
)
hltCombinedSecondaryVertexV2 = cms.ESProducer( "CombinedSecondaryVertexESProducer",
  recordLabel = cms.string( "HLT" ),
  categoryVariableName = cms.string( "vertexCategory" ),
  useTrackWeights = cms.bool( True ),
  useCategories = cms.bool( True ),
  pseudoMultiplicityMin = cms.uint32( 2 ),
  correctVertexMass = cms.bool( True ),
  trackSelection = cms.PSet( 
    b_pT = cms.double( 0.3684 ),
    max_pT = cms.double( 500.0 ),
    useVariableJTA = cms.bool( False ),
    maxDecayLen = cms.double( 5.0 ),
    sip3dValMin = cms.double( -99999.9 ),
    max_pT_dRcut = cms.double( 0.1 ),
    a_pT = cms.double( 0.005263 ),
    totalHitsMin = cms.uint32( 0 ),
    jetDeltaRMax = cms.double( 0.3 ),
    a_dR = cms.double( -0.001053 ),
    maxDistToAxis = cms.double( 0.07 ),
    ptMin = cms.double( 0.0 ),
    qualityClass = cms.string( "any" ),
    pixelHitsMin = cms.uint32( 0 ),
    sip2dValMax = cms.double( 99999.9 ),
    max_pT_trackPTcut = cms.double( 3.0 ),
    sip2dValMin = cms.double( -99999.9 ),
    normChi2Max = cms.double( 99999.9 ),
    sip3dValMax = cms.double( 99999.9 ),
    sip3dSigMin = cms.double( -99999.9 ),
    min_pT = cms.double( 120.0 ),
    min_pT_dRcut = cms.double( 0.5 ),
    sip2dSigMax = cms.double( 99999.9 ),
    sip3dSigMax = cms.double( 99999.9 ),
    sip2dSigMin = cms.double( -99999.9 ),
    b_dR = cms.double( 0.6263 )
  ),
  calibrationRecords = cms.vstring( 'CombinedSVIVFV2RecoVertex',
    'CombinedSVIVFV2PseudoVertex',
    'CombinedSVIVFV2NoVertex' ),
  trackPairV0Filter = cms.PSet(  k0sMassWindow = cms.double( 0.03 ) ),
  charmCut = cms.double( 1.5 ),
  vertexFlip = cms.bool( False ),
  minimumTrackWeight = cms.double( 0.5 ),
  pseudoVertexV0Filter = cms.PSet(  k0sMassWindow = cms.double( 0.05 ) ),
  trackMultiplicityMin = cms.uint32( 3 ),
  trackPseudoSelection = cms.PSet( 
    b_pT = cms.double( 0.3684 ),
    max_pT = cms.double( 500.0 ),
    useVariableJTA = cms.bool( False ),
    maxDecayLen = cms.double( 5.0 ),
    sip3dValMin = cms.double( -99999.9 ),
    max_pT_dRcut = cms.double( 0.1 ),
    a_pT = cms.double( 0.005263 ),
    totalHitsMin = cms.uint32( 0 ),
    jetDeltaRMax = cms.double( 0.3 ),
    a_dR = cms.double( -0.001053 ),
    maxDistToAxis = cms.double( 0.07 ),
    ptMin = cms.double( 0.0 ),
    qualityClass = cms.string( "any" ),
    pixelHitsMin = cms.uint32( 0 ),
    sip2dValMax = cms.double( 99999.9 ),
    max_pT_trackPTcut = cms.double( 3.0 ),
    sip2dValMin = cms.double( -99999.9 ),
    normChi2Max = cms.double( 99999.9 ),
    sip3dValMax = cms.double( 99999.9 ),
    sip3dSigMin = cms.double( -99999.9 ),
    min_pT = cms.double( 120.0 ),
    min_pT_dRcut = cms.double( 0.5 ),
    sip2dSigMax = cms.double( 99999.9 ),
    sip3dSigMax = cms.double( 99999.9 ),
    sip2dSigMin = cms.double( 2.0 ),
    b_dR = cms.double( 0.6263 )
  ),
  trackSort = cms.string( "sip2dSig" ),
  trackFlip = cms.bool( False )
)
hltDisplacedDijethltESPPromptTrackCountingESProducer = cms.ESProducer( "PromptTrackCountingESProducer",
  maxImpactParameterSig = cms.double( 999999.0 ),
  deltaR = cms.double( -1.0 ),
  minimumImpactParameter = cms.double( -1.0 ),
  maximumDecayLength = cms.double( 999999.0 ),
  impactParameterType = cms.int32( 1 ),
  trackQualityClass = cms.string( "any" ),
  deltaRmin = cms.double( 0.0 ),
  maxImpactParameter = cms.double( 0.1 ),
  useSignedImpactParameterSig = cms.bool( True ),
  maximumDistanceToJetAxis = cms.double( 999999.0 ),
  nthTrack = cms.int32( -1 )
)
hltDisplacedDijethltESPTrackCounting2D1st = cms.ESProducer( "TrackCountingESProducer",
  b_pT = cms.double( 0.3684 ),
  deltaR = cms.double( -1.0 ),
  minimumImpactParameter = cms.double( 0.05 ),
  a_dR = cms.double( -0.001053 ),
  min_pT = cms.double( 120.0 ),
  maximumDistanceToJetAxis = cms.double( 9999999.0 ),
  max_pT = cms.double( 500.0 ),
  impactParameterType = cms.int32( 1 ),
  trackQualityClass = cms.string( "any" ),
  useVariableJTA = cms.bool( False ),
  min_pT_dRcut = cms.double( 0.5 ),
  max_pT_trackPTcut = cms.double( 3.0 ),
  max_pT_dRcut = cms.double( 0.1 ),
  b_dR = cms.double( 0.6263 ),
  a_pT = cms.double( 0.005263 ),
  maximumDecayLength = cms.double( 999999.0 ),
  nthTrack = cms.int32( 1 ),
  useSignedImpactParameterSig = cms.bool( False )
)
hltESPAnalyticalPropagator = cms.ESProducer( "AnalyticalPropagatorESProducer",
  MaxDPhi = cms.double( 1.6 ),
  ComponentName = cms.string( "hltESPAnalyticalPropagator" ),
  PropagationDirection = cms.string( "alongMomentum" )
)
hltESPBwdAnalyticalPropagator = cms.ESProducer( "AnalyticalPropagatorESProducer",
  MaxDPhi = cms.double( 1.6 ),
  ComponentName = cms.string( "hltESPBwdAnalyticalPropagator" ),
  PropagationDirection = cms.string( "oppositeToMomentum" )
)
hltESPBwdElectronPropagator = cms.ESProducer( "PropagatorWithMaterialESProducer",
  SimpleMagneticField = cms.string( "" ),
  PropagationDirection = cms.string( "oppositeToMomentum" ),
  ComponentName = cms.string( "hltESPBwdElectronPropagator" ),
  Mass = cms.double( 5.11E-4 ),
  ptMin = cms.double( -1.0 ),
  MaxDPhi = cms.double( 1.6 ),
  useRungeKutta = cms.bool( False )
)
hltESPChi2ChargeLooseMeasurementEstimator16 = cms.ESProducer( "Chi2ChargeMeasurementEstimatorESProducer",
  appendToDataLabel = cms.string( "" ),
  MinimalTolerance = cms.double( 0.5 ),
  clusterChargeCut = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutLoose" ) ),
  MaxDisplacement = cms.double( 0.5 ),
  MaxSagitta = cms.double( 2.0 ),
  pTChargeCutThreshold = cms.double( -1.0 ),
  nSigma = cms.double( 3.0 ),
  ComponentName = cms.string( "hltESPChi2ChargeLooseMeasurementEstimator16" ),
  MaxChi2 = cms.double( 16.0 )
)
hltESPChi2ChargeMeasurementEstimator16 = cms.ESProducer( "Chi2ChargeMeasurementEstimatorESProducer",
  appendToDataLabel = cms.string( "" ),
  MinimalTolerance = cms.double( 0.5 ),
  clusterChargeCut = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutTiny" ) ),
  MaxDisplacement = cms.double( 0.5 ),
  MaxSagitta = cms.double( 2.0 ),
  pTChargeCutThreshold = cms.double( -1.0 ),
  nSigma = cms.double( 3.0 ),
  ComponentName = cms.string( "hltESPChi2ChargeMeasurementEstimator16" ),
  MaxChi2 = cms.double( 16.0 )
)
hltESPChi2ChargeMeasurementEstimator2000 = cms.ESProducer( "Chi2ChargeMeasurementEstimatorESProducer",
  appendToDataLabel = cms.string( "" ),
  MinimalTolerance = cms.double( 10.0 ),
  clusterChargeCut = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutLoose" ) ),
  MaxDisplacement = cms.double( 100.0 ),
  MaxSagitta = cms.double( -1.0 ),
  pTChargeCutThreshold = cms.double( -1.0 ),
  nSigma = cms.double( 3.0 ),
  ComponentName = cms.string( "hltESPChi2ChargeMeasurementEstimator2000" ),
  MaxChi2 = cms.double( 2000.0 )
)
hltESPChi2ChargeMeasurementEstimator30 = cms.ESProducer( "Chi2ChargeMeasurementEstimatorESProducer",
  appendToDataLabel = cms.string( "" ),
  MinimalTolerance = cms.double( 10.0 ),
  clusterChargeCut = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutLoose" ) ),
  MaxDisplacement = cms.double( 100.0 ),
  MaxSagitta = cms.double( -1.0 ),
  pTChargeCutThreshold = cms.double( -1.0 ),
  nSigma = cms.double( 3.0 ),
  ComponentName = cms.string( "hltESPChi2ChargeMeasurementEstimator30" ),
  MaxChi2 = cms.double( 30.0 )
)
hltESPChi2ChargeMeasurementEstimator9 = cms.ESProducer( "Chi2ChargeMeasurementEstimatorESProducer",
  appendToDataLabel = cms.string( "" ),
  MinimalTolerance = cms.double( 0.5 ),
  clusterChargeCut = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutTiny" ) ),
  MaxDisplacement = cms.double( 0.5 ),
  MaxSagitta = cms.double( 2.0 ),
  pTChargeCutThreshold = cms.double( 15.0 ),
  nSigma = cms.double( 3.0 ),
  ComponentName = cms.string( "hltESPChi2ChargeMeasurementEstimator9" ),
  MaxChi2 = cms.double( 9.0 )
)
hltESPChi2ChargeMeasurementEstimator9ForHI = cms.ESProducer( "Chi2ChargeMeasurementEstimatorESProducer",
  appendToDataLabel = cms.string( "" ),
  MinimalTolerance = cms.double( 10.0 ),
  clusterChargeCut = cms.PSet(  refToPSet_ = cms.string( "HLTSiStripClusterChargeCutForHI" ) ),
  MaxDisplacement = cms.double( 100.0 ),
  MaxSagitta = cms.double( -1.0 ),
  pTChargeCutThreshold = cms.double( 15.0 ),
  nSigma = cms.double( 3.0 ),
  ComponentName = cms.string( "hltESPChi2ChargeMeasurementEstimator9ForHI" ),
  MaxChi2 = cms.double( 9.0 )
)
hltESPChi2MeasurementEstimator16 = cms.ESProducer( "Chi2MeasurementEstimatorESProducer",
  appendToDataLabel = cms.string( "" ),
  MinimalTolerance = cms.double( 10.0 ),
  MaxDisplacement = cms.double( 100.0 ),
  ComponentName = cms.string( "hltESPChi2MeasurementEstimator16" ),
  nSigma = cms.double( 3.0 ),
  MaxSagitta = cms.double( -1.0 ),
  MaxChi2 = cms.double( 16.0 )
)
hltESPChi2MeasurementEstimator30 = cms.ESProducer( "Chi2MeasurementEstimatorESProducer",
  appendToDataLabel = cms.string( "" ),
  MinimalTolerance = cms.double( 10.0 ),
  MaxDisplacement = cms.double( 100.0 ),
  ComponentName = cms.string( "hltESPChi2MeasurementEstimator30" ),
  nSigma = cms.double( 3.0 ),
  MaxSagitta = cms.double( -1.0 ),
  MaxChi2 = cms.double( 30.0 )
)
hltESPChi2MeasurementEstimator9 = cms.ESProducer( "Chi2MeasurementEstimatorESProducer",
  appendToDataLabel = cms.string( "" ),
  MinimalTolerance = cms.double( 10.0 ),
  MaxDisplacement = cms.double( 100.0 ),
  ComponentName = cms.string( "hltESPChi2MeasurementEstimator9" ),
  nSigma = cms.double( 3.0 ),
  MaxSagitta = cms.double( -1.0 ),
  MaxChi2 = cms.double( 9.0 )
)
hltESPCloseComponentsMerger5D = cms.ESProducer( "CloseComponentsMergerESProducer5D",
  ComponentName = cms.string( "hltESPCloseComponentsMerger5D" ),
  MaxComponents = cms.int32( 12 ),
  DistanceMeasure = cms.string( "hltESPKullbackLeiblerDistance5D" )
)
hltESPDetachedStepTrajectoryCleanerBySharedHits = cms.ESProducer( "TrajectoryCleanerESProducer",
  ComponentName = cms.string( "hltESPDetachedStepTrajectoryCleanerBySharedHits" ),
  fractionShared = cms.double( 0.13 ),
  ValidHitBonus = cms.double( 5.0 ),
  ComponentType = cms.string( "TrajectoryCleanerBySharedHits" ),
  MissingHitPenalty = cms.double( 20.0 ),
  allowSharedFirstHit = cms.bool( True )
)
hltESPDisplacedDijethltPromptTrackCountingESProducer = cms.ESProducer( "PromptTrackCountingESProducer",
  maxImpactParameterSig = cms.double( 999999.0 ),
  deltaR = cms.double( -1.0 ),
  minimumImpactParameter = cms.double( -1.0 ),
  maximumDecayLength = cms.double( 999999.0 ),
  impactParameterType = cms.int32( 1 ),
  trackQualityClass = cms.string( "any" ),
  deltaRmin = cms.double( 0.0 ),
  maxImpactParameter = cms.double( 0.1 ),
  useSignedImpactParameterSig = cms.bool( True ),
  maximumDistanceToJetAxis = cms.double( 999999.0 ),
  nthTrack = cms.int32( -1 )
)
hltESPDisplacedDijethltPromptTrackCountingESProducerLong = cms.ESProducer( "PromptTrackCountingESProducer",
  maxImpactParameterSig = cms.double( 999999.0 ),
  deltaR = cms.double( -1.0 ),
  minimumImpactParameter = cms.double( -1.0 ),
  maximumDecayLength = cms.double( 999999.0 ),
  impactParameterType = cms.int32( 1 ),
  trackQualityClass = cms.string( "any" ),
  deltaRmin = cms.double( 0.0 ),
  maxImpactParameter = cms.double( 0.2 ),
  useSignedImpactParameterSig = cms.bool( True ),
  maximumDistanceToJetAxis = cms.double( 999999.0 ),
  nthTrack = cms.int32( -1 )
)
hltESPDisplacedDijethltTrackCounting2D1st = cms.ESProducer( "TrackCountingESProducer",
  b_pT = cms.double( 0.3684 ),
  deltaR = cms.double( -1.0 ),
  minimumImpactParameter = cms.double( 0.05 ),
  a_dR = cms.double( -0.001053 ),
  min_pT = cms.double( 120.0 ),
  maximumDistanceToJetAxis = cms.double( 9999999.0 ),
  max_pT = cms.double( 500.0 ),
  impactParameterType = cms.int32( 1 ),
  trackQualityClass = cms.string( "any" ),
  useVariableJTA = cms.bool( False ),
  min_pT_dRcut = cms.double( 0.5 ),
  max_pT_trackPTcut = cms.double( 3.0 ),
  max_pT_dRcut = cms.double( 0.1 ),
  b_dR = cms.double( 0.6263 ),
  a_pT = cms.double( 0.005263 ),
  maximumDecayLength = cms.double( 999999.0 ),
  nthTrack = cms.int32( 1 ),
  useSignedImpactParameterSig = cms.bool( False )
)
hltESPDisplacedDijethltTrackCounting2D2ndLong = cms.ESProducer( "TrackCountingESProducer",
  b_pT = cms.double( 0.3684 ),
  deltaR = cms.double( -1.0 ),
  minimumImpactParameter = cms.double( 0.2 ),
  a_dR = cms.double( -0.001053 ),
  min_pT = cms.double( 120.0 ),
  maximumDistanceToJetAxis = cms.double( 9999999.0 ),
  max_pT = cms.double( 500.0 ),
  impactParameterType = cms.int32( 1 ),
  trackQualityClass = cms.string( "any" ),
  useVariableJTA = cms.bool( False ),
  min_pT_dRcut = cms.double( 0.5 ),
  max_pT_trackPTcut = cms.double( 3.0 ),
  max_pT_dRcut = cms.double( 0.1 ),
  b_dR = cms.double( 0.6263 ),
  a_pT = cms.double( 0.005263 ),
  maximumDecayLength = cms.double( 999999.0 ),
  nthTrack = cms.int32( 2 ),
  useSignedImpactParameterSig = cms.bool( True )
)
hltESPDummyDetLayerGeometry = cms.ESProducer( "DetLayerGeometryESProducer",
  ComponentName = cms.string( "hltESPDummyDetLayerGeometry" )
)
hltESPEcalTrigTowerConstituentsMapBuilder = cms.ESProducer( "EcalTrigTowerConstituentsMapBuilder",
  MapFile = cms.untracked.string( "Geometry/EcalMapping/data/EndCap_TTMap.txt" )
)
hltESPElectronMaterialEffects = cms.ESProducer( "GsfMaterialEffectsESProducer",
  BetheHeitlerParametrization = cms.string( "BetheHeitler_cdfmom_nC6_O5.par" ),
  EnergyLossUpdator = cms.string( "GsfBetheHeitlerUpdator" ),
  ComponentName = cms.string( "hltESPElectronMaterialEffects" ),
  MultipleScatteringUpdator = cms.string( "MultipleScatteringUpdator" ),
  Mass = cms.double( 5.11E-4 ),
  BetheHeitlerCorrection = cms.int32( 2 )
)
hltESPFastSteppingHelixPropagatorAny = cms.ESProducer( "SteppingHelixPropagatorESProducer",
  NoErrorPropagation = cms.bool( False ),
  endcapShiftInZPos = cms.double( 0.0 ),
  PropagationDirection = cms.string( "anyDirection" ),
  useTuningForL2Speed = cms.bool( True ),
  useIsYokeFlag = cms.bool( True ),
  endcapShiftInZNeg = cms.double( 0.0 ),
  SetVBFPointer = cms.bool( False ),
  AssumeNoMaterial = cms.bool( False ),
  returnTangentPlane = cms.bool( True ),
  useInTeslaFromMagField = cms.bool( False ),
  VBFName = cms.string( "VolumeBasedMagneticField" ),
  useEndcapShiftsInZ = cms.bool( False ),
  sendLogWarning = cms.bool( False ),
  useMatVolumes = cms.bool( True ),
  debug = cms.bool( False ),
  ApplyRadX0Correction = cms.bool( True ),
  useMagVolumes = cms.bool( True ),
  ComponentName = cms.string( "hltESPFastSteppingHelixPropagatorAny" )
)
hltESPFastSteppingHelixPropagatorOpposite = cms.ESProducer( "SteppingHelixPropagatorESProducer",
  NoErrorPropagation = cms.bool( False ),
  endcapShiftInZPos = cms.double( 0.0 ),
  PropagationDirection = cms.string( "oppositeToMomentum" ),
  useTuningForL2Speed = cms.bool( True ),
  useIsYokeFlag = cms.bool( True ),
  endcapShiftInZNeg = cms.double( 0.0 ),
  SetVBFPointer = cms.bool( False ),
  AssumeNoMaterial = cms.bool( False ),
  returnTangentPlane = cms.bool( True ),
  useInTeslaFromMagField = cms.bool( False ),
  VBFName = cms.string( "VolumeBasedMagneticField" ),
  useEndcapShiftsInZ = cms.bool( False ),
  sendLogWarning = cms.bool( False ),
  useMatVolumes = cms.bool( True ),
  debug = cms.bool( False ),
  ApplyRadX0Correction = cms.bool( True ),
  useMagVolumes = cms.bool( True ),
  ComponentName = cms.string( "hltESPFastSteppingHelixPropagatorOpposite" )
)
hltESPFittingSmootherIT = cms.ESProducer( "KFFittingSmootherESProducer",
  EstimateCut = cms.double( -1.0 ),
  appendToDataLabel = cms.string( "" ),
  LogPixelProbabilityCut = cms.double( -16.0 ),
  MinDof = cms.int32( 2 ),
  NoOutliersBeginEnd = cms.bool( False ),
  Fitter = cms.string( "hltESPTrajectoryFitterRK" ),
  MinNumberOfHits = cms.int32( 3 ),
  Smoother = cms.string( "hltESPTrajectorySmootherRK" ),
  MaxNumberOfOutliers = cms.int32( 3 ),
  BreakTrajWith2ConsecutiveMissing = cms.bool( True ),
  MaxFractionOutliers = cms.double( 0.3 ),
  NoInvalidHitsBeginEnd = cms.bool( True ),
  ComponentName = cms.string( "hltESPFittingSmootherIT" ),
  RejectTracks = cms.bool( True )
)
hltESPFittingSmootherRK = cms.ESProducer( "KFFittingSmootherESProducer",
  EstimateCut = cms.double( -1.0 ),
  appendToDataLabel = cms.string( "" ),
  LogPixelProbabilityCut = cms.double( -16.0 ),
  MinDof = cms.int32( 2 ),
  NoOutliersBeginEnd = cms.bool( False ),
  Fitter = cms.string( "hltESPTrajectoryFitterRK" ),
  MinNumberOfHits = cms.int32( 5 ),
  Smoother = cms.string( "hltESPTrajectorySmootherRK" ),
  MaxNumberOfOutliers = cms.int32( 3 ),
  BreakTrajWith2ConsecutiveMissing = cms.bool( False ),
  MaxFractionOutliers = cms.double( 0.3 ),
  NoInvalidHitsBeginEnd = cms.bool( False ),
  ComponentName = cms.string( "hltESPFittingSmootherRK" ),
  RejectTracks = cms.bool( True )
)
hltESPFlexibleKFFittingSmoother = cms.ESProducer( "FlexibleKFFittingSmootherESProducer",
  ComponentName = cms.string( "hltESPFlexibleKFFittingSmoother" ),
  appendToDataLabel = cms.string( "" ),
  standardFitter = cms.string( "hltESPKFFittingSmootherWithOutliersRejectionAndRK" ),
  looperFitter = cms.string( "hltESPKFFittingSmootherForLoopers" )
)
hltESPFwdElectronPropagator = cms.ESProducer( "PropagatorWithMaterialESProducer",
  SimpleMagneticField = cms.string( "" ),
  PropagationDirection = cms.string( "alongMomentum" ),
  ComponentName = cms.string( "hltESPFwdElectronPropagator" ),
  Mass = cms.double( 5.11E-4 ),
  ptMin = cms.double( -1.0 ),
  MaxDPhi = cms.double( 1.6 ),
  useRungeKutta = cms.bool( False )
)
hltESPGlobalDetLayerGeometry = cms.ESProducer( "GlobalDetLayerGeometryESProducer",
  ComponentName = cms.string( "hltESPGlobalDetLayerGeometry" )
)
hltESPGlobalTrackingGeometryESProducer = cms.ESProducer( "GlobalTrackingGeometryESProducer" )
hltESPGsfElectronFittingSmoother = cms.ESProducer( "KFFittingSmootherESProducer",
  EstimateCut = cms.double( -1.0 ),
  appendToDataLabel = cms.string( "" ),
  LogPixelProbabilityCut = cms.double( -16.0 ),
  MinDof = cms.int32( 2 ),
  NoOutliersBeginEnd = cms.bool( False ),
  Fitter = cms.string( "hltESPGsfTrajectoryFitter" ),
  MinNumberOfHits = cms.int32( 5 ),
  Smoother = cms.string( "hltESPGsfTrajectorySmoother" ),
  MaxNumberOfOutliers = cms.int32( 3 ),
  BreakTrajWith2ConsecutiveMissing = cms.bool( True ),
  MaxFractionOutliers = cms.double( 0.3 ),
  NoInvalidHitsBeginEnd = cms.bool( True ),
  ComponentName = cms.string( "hltESPGsfElectronFittingSmoother" ),
  RejectTracks = cms.bool( True )
)
hltESPGsfTrajectoryFitter = cms.ESProducer( "GsfTrajectoryFitterESProducer",
  Merger = cms.string( "hltESPCloseComponentsMerger5D" ),
  ComponentName = cms.string( "hltESPGsfTrajectoryFitter" ),
  MaterialEffectsUpdator = cms.string( "hltESPElectronMaterialEffects" ),
  RecoGeometry = cms.string( "hltESPGlobalDetLayerGeometry" ),
  GeometricalPropagator = cms.string( "hltESPAnalyticalPropagator" )
)
hltESPGsfTrajectorySmoother = cms.ESProducer( "GsfTrajectorySmootherESProducer",
  ErrorRescaling = cms.double( 100.0 ),
  RecoGeometry = cms.string( "hltESPGlobalDetLayerGeometry" ),
  Merger = cms.string( "hltESPCloseComponentsMerger5D" ),
  ComponentName = cms.string( "hltESPGsfTrajectorySmoother" ),
  GeometricalPropagator = cms.string( "hltESPBwdAnalyticalPropagator" ),
  MaterialEffectsUpdator = cms.string( "hltESPElectronMaterialEffects" )
)
hltESPInitialStepChi2MeasurementEstimator36 = cms.ESProducer( "Chi2MeasurementEstimatorESProducer",
  appendToDataLabel = cms.string( "" ),
  MinimalTolerance = cms.double( 10.0 ),
  MaxDisplacement = cms.double( 100.0 ),
  ComponentName = cms.string( "hltESPInitialStepChi2MeasurementEstimator36" ),
  nSigma = cms.double( 3.0 ),
  MaxSagitta = cms.double( -1.0 ),
  MaxChi2 = cms.double( 36.0 )
)
hltESPKFFittingSmoother = cms.ESProducer( "KFFittingSmootherESProducer",
  EstimateCut = cms.double( -1.0 ),
  appendToDataLabel = cms.string( "" ),
  LogPixelProbabilityCut = cms.double( -16.0 ),
  MinDof = cms.int32( 2 ),
  NoOutliersBeginEnd = cms.bool( False ),
  Fitter = cms.string( "hltESPKFTrajectoryFitter" ),
  MinNumberOfHits = cms.int32( 5 ),
  Smoother = cms.string( "hltESPKFTrajectorySmoother" ),
  MaxNumberOfOutliers = cms.int32( 3 ),
  BreakTrajWith2ConsecutiveMissing = cms.bool( False ),
  MaxFractionOutliers = cms.double( 0.3 ),
  NoInvalidHitsBeginEnd = cms.bool( False ),
  ComponentName = cms.string( "hltESPKFFittingSmoother" ),
  RejectTracks = cms.bool( True )
)
hltESPKFFittingSmootherForL2Muon = cms.ESProducer( "KFFittingSmootherESProducer",
  EstimateCut = cms.double( -1.0 ),
  appendToDataLabel = cms.string( "" ),
  LogPixelProbabilityCut = cms.double( -16.0 ),
  MinDof = cms.int32( 2 ),
  NoOutliersBeginEnd = cms.bool( False ),
  Fitter = cms.string( "hltESPKFTrajectoryFitterForL2Muon" ),
  MinNumberOfHits = cms.int32( 5 ),
  Smoother = cms.string( "hltESPKFTrajectorySmootherForL2Muon" ),
  MaxNumberOfOutliers = cms.int32( 3 ),
  BreakTrajWith2ConsecutiveMissing = cms.bool( False ),
  MaxFractionOutliers = cms.double( 0.3 ),
  NoInvalidHitsBeginEnd = cms.bool( False ),
  ComponentName = cms.string( "hltESPKFFittingSmootherForL2Muon" ),
  RejectTracks = cms.bool( True )
)
hltESPKFFittingSmootherForLoopers = cms.ESProducer( "KFFittingSmootherESProducer",
  EstimateCut = cms.double( 20.0 ),
  appendToDataLabel = cms.string( "" ),
  LogPixelProbabilityCut = cms.double( -14.0 ),
  MinDof = cms.int32( 2 ),
  NoOutliersBeginEnd = cms.bool( False ),
  Fitter = cms.string( "hltESPKFTrajectoryFitterForLoopers" ),
  MinNumberOfHits = cms.int32( 3 ),
  Smoother = cms.string( "hltESPKFTrajectorySmootherForLoopers" ),
  MaxNumberOfOutliers = cms.int32( 3 ),
  BreakTrajWith2ConsecutiveMissing = cms.bool( True ),
  MaxFractionOutliers = cms.double( 0.3 ),
  NoInvalidHitsBeginEnd = cms.bool( True ),
  ComponentName = cms.string( "hltESPKFFittingSmootherForLoopers" ),
  RejectTracks = cms.bool( True )
)
hltESPKFFittingSmootherWithOutliersRejectionAndRK = cms.ESProducer( "KFFittingSmootherESProducer",
  EstimateCut = cms.double( 20.0 ),
  appendToDataLabel = cms.string( "" ),
  LogPixelProbabilityCut = cms.double( -14.0 ),
  MinDof = cms.int32( 2 ),
  NoOutliersBeginEnd = cms.bool( False ),
  Fitter = cms.string( "hltESPRKTrajectoryFitter" ),
  MinNumberOfHits = cms.int32( 3 ),
  Smoother = cms.string( "hltESPRKTrajectorySmoother" ),
  MaxNumberOfOutliers = cms.int32( 3 ),
  BreakTrajWith2ConsecutiveMissing = cms.bool( True ),
  MaxFractionOutliers = cms.double( 0.3 ),
  NoInvalidHitsBeginEnd = cms.bool( True ),
  ComponentName = cms.string( "hltESPKFFittingSmootherWithOutliersRejectionAndRK" ),
  RejectTracks = cms.bool( True )
)
hltESPKFTrajectoryFitter = cms.ESProducer( "KFTrajectoryFitterESProducer",
  appendToDataLabel = cms.string( "" ),
  minHits = cms.int32( 3 ),
  ComponentName = cms.string( "hltESPKFTrajectoryFitter" ),
  Estimator = cms.string( "hltESPChi2MeasurementEstimator30" ),
  Updator = cms.string( "hltESPKFUpdator" ),
  Propagator = cms.string( "PropagatorWithMaterialParabolicMf" ),
  RecoGeometry = cms.string( "hltESPDummyDetLayerGeometry" )
)
hltESPKFTrajectoryFitterForL2Muon = cms.ESProducer( "KFTrajectoryFitterESProducer",
  appendToDataLabel = cms.string( "" ),
  minHits = cms.int32( 3 ),
  ComponentName = cms.string( "hltESPKFTrajectoryFitterForL2Muon" ),
  Estimator = cms.string( "hltESPChi2MeasurementEstimator30" ),
  Updator = cms.string( "hltESPKFUpdator" ),
  Propagator = cms.string( "hltESPFastSteppingHelixPropagatorAny" ),
  RecoGeometry = cms.string( "hltESPDummyDetLayerGeometry" )
)
hltESPKFTrajectoryFitterForLoopers = cms.ESProducer( "KFTrajectoryFitterESProducer",
  appendToDataLabel = cms.string( "" ),
  minHits = cms.int32( 3 ),
  ComponentName = cms.string( "hltESPKFTrajectoryFitterForLoopers" ),
  Estimator = cms.string( "hltESPChi2MeasurementEstimator30" ),
  Updator = cms.string( "hltESPKFUpdator" ),
  Propagator = cms.string( "PropagatorWithMaterialForLoopers" ),
  RecoGeometry = cms.string( "hltESPGlobalDetLayerGeometry" )
)
hltESPKFTrajectorySmoother = cms.ESProducer( "KFTrajectorySmootherESProducer",
  errorRescaling = cms.double( 100.0 ),
  minHits = cms.int32( 3 ),
  ComponentName = cms.string( "hltESPKFTrajectorySmoother" ),
  appendToDataLabel = cms.string( "" ),
  Estimator = cms.string( "hltESPChi2MeasurementEstimator30" ),
  Updator = cms.string( "hltESPKFUpdator" ),
  Propagator = cms.string( "PropagatorWithMaterialParabolicMf" ),
  RecoGeometry = cms.string( "hltESPDummyDetLayerGeometry" )
)
hltESPKFTrajectorySmootherForL2Muon = cms.ESProducer( "KFTrajectorySmootherESProducer",
  errorRescaling = cms.double( 100.0 ),
  minHits = cms.int32( 3 ),
  ComponentName = cms.string( "hltESPKFTrajectorySmootherForL2Muon" ),
  appendToDataLabel = cms.string( "" ),
  Estimator = cms.string( "hltESPChi2MeasurementEstimator30" ),
  Updator = cms.string( "hltESPKFUpdator" ),
  Propagator = cms.string( "hltESPFastSteppingHelixPropagatorOpposite" ),
  RecoGeometry = cms.string( "hltESPDummyDetLayerGeometry" )
)
hltESPKFTrajectorySmootherForLoopers = cms.ESProducer( "KFTrajectorySmootherESProducer",
  errorRescaling = cms.double( 10.0 ),
  minHits = cms.int32( 3 ),
  ComponentName = cms.string( "hltESPKFTrajectorySmootherForLoopers" ),
  appendToDataLabel = cms.string( "" ),
  Estimator = cms.string( "hltESPChi2MeasurementEstimator30" ),
  Updator = cms.string( "hltESPKFUpdator" ),
  Propagator = cms.string( "PropagatorWithMaterialForLoopers" ),
  RecoGeometry = cms.string( "hltESPGlobalDetLayerGeometry" )
)
hltESPKFTrajectorySmootherForMuonTrackLoader = cms.ESProducer( "KFTrajectorySmootherESProducer",
  errorRescaling = cms.double( 10.0 ),
  minHits = cms.int32( 3 ),
  ComponentName = cms.string( "hltESPKFTrajectorySmootherForMuonTrackLoader" ),
  appendToDataLabel = cms.string( "" ),
  Estimator = cms.string( "hltESPChi2MeasurementEstimator30" ),
  Updator = cms.string( "hltESPKFUpdator" ),
  Propagator = cms.string( "hltESPSmartPropagatorAnyOpposite" ),
  RecoGeometry = cms.string( "hltESPDummyDetLayerGeometry" )
)
hltESPKFUpdator = cms.ESProducer( "KFUpdatorESProducer",
  ComponentName = cms.string( "hltESPKFUpdator" )
)
hltESPKullbackLeiblerDistance5D = cms.ESProducer( "DistanceBetweenComponentsESProducer5D",
  ComponentName = cms.string( "hltESPKullbackLeiblerDistance5D" ),
  DistanceMeasure = cms.string( "KullbackLeibler" )
)
hltESPL3MuKFTrajectoryFitter = cms.ESProducer( "KFTrajectoryFitterESProducer",
  appendToDataLabel = cms.string( "" ),
  minHits = cms.int32( 3 ),
  ComponentName = cms.string( "hltESPL3MuKFTrajectoryFitter" ),
  Estimator = cms.string( "hltESPChi2MeasurementEstimator30" ),
  Updator = cms.string( "hltESPKFUpdator" ),
  Propagator = cms.string( "hltESPSmartPropagatorAny" ),
  RecoGeometry = cms.string( "hltESPDummyDetLayerGeometry" )
)
hltESPMeasurementTracker = cms.ESProducer( "MeasurementTrackerESProducer",
  UseStripStripQualityDB = cms.bool( True ),
  StripCPE = cms.string( "hltESPStripCPEfromTrackAngle" ),
  UsePixelROCQualityDB = cms.bool( True ),
  DebugPixelROCQualityDB = cms.untracked.bool( False ),
  UseStripAPVFiberQualityDB = cms.bool( True ),
  badStripCuts = cms.PSet( 
    TOB = cms.PSet( 
      maxConsecutiveBad = cms.uint32( 2 ),
      maxBad = cms.uint32( 4 )
    ),
    TID = cms.PSet( 
      maxBad = cms.uint32( 4 ),
      maxConsecutiveBad = cms.uint32( 2 )
    ),
    TEC = cms.PSet( 
      maxConsecutiveBad = cms.uint32( 2 ),
      maxBad = cms.uint32( 4 )
    ),
    TIB = cms.PSet( 
      maxConsecutiveBad = cms.uint32( 2 ),
      maxBad = cms.uint32( 4 )
    )
  ),
  DebugStripModuleQualityDB = cms.untracked.bool( False ),
  ComponentName = cms.string( "hltESPMeasurementTracker" ),
  DebugPixelModuleQualityDB = cms.untracked.bool( False ),
  UsePixelModuleQualityDB = cms.bool( True ),
  DebugStripAPVFiberQualityDB = cms.untracked.bool( False ),
  HitMatcher = cms.string( "StandardMatcher" ),
  DebugStripStripQualityDB = cms.untracked.bool( False ),
  PixelCPE = cms.string( "hltESPPixelCPEGeneric" ),
  SiStripQualityLabel = cms.string( "" ),
  UseStripModuleQualityDB = cms.bool( True ),
  MaskBadAPVFibers = cms.bool( True )
)
hltESPMixedStepTrajectoryCleanerBySharedHits = cms.ESProducer( "TrajectoryCleanerESProducer",
  ComponentName = cms.string( "hltESPMixedStepTrajectoryCleanerBySharedHits" ),
  fractionShared = cms.double( 0.11 ),
  ValidHitBonus = cms.double( 5.0 ),
  ComponentType = cms.string( "TrajectoryCleanerBySharedHits" ),
  MissingHitPenalty = cms.double( 20.0 ),
  allowSharedFirstHit = cms.bool( True )
)
hltESPMuonDetLayerGeometryESProducer = cms.ESProducer( "MuonDetLayerGeometryESProducer" )
hltESPMuonTransientTrackingRecHitBuilder = cms.ESProducer( "MuonTransientTrackingRecHitBuilderESProducer",
  ComponentName = cms.string( "hltESPMuonTransientTrackingRecHitBuilder" )
)
hltESPPixelCPEGeneric = cms.ESProducer( "PixelCPEGenericESProducer",
  useLAAlignmentOffsets = cms.bool( False ),
  DoCosmics = cms.bool( False ),
  eff_charge_cut_highX = cms.double( 1.0 ),
  eff_charge_cut_highY = cms.double( 1.0 ),
  inflate_all_errors_no_trk_angle = cms.bool( False ),
  eff_charge_cut_lowY = cms.double( 0.0 ),
  eff_charge_cut_lowX = cms.double( 0.0 ),
  UseErrorsFromTemplates = cms.bool( True ),
  TruncatePixelCharge = cms.bool( True ),
  size_cutY = cms.double( 3.0 ),
  size_cutX = cms.double( 3.0 ),
  useLAWidthFromDB = cms.bool( False ),
  inflate_errors = cms.bool( False ),
  Alpha2Order = cms.bool( True ),
  ClusterProbComputationFlag = cms.int32( 0 ),
  PixelErrorParametrization = cms.string( "NOTcmsim" ),
  EdgeClusterErrorX = cms.double( 50.0 ),
  EdgeClusterErrorY = cms.double( 85.0 ),
  LoadTemplatesFromDB = cms.bool( True ),
  ComponentName = cms.string( "hltESPPixelCPEGeneric" ),
  IrradiationBiasCorrection = cms.bool( False )
)
hltESPPixelCPETemplateReco = cms.ESProducer( "PixelCPETemplateRecoESProducer",
  DoLorentz = cms.bool( True ),
  DoCosmics = cms.bool( False ),
  LoadTemplatesFromDB = cms.bool( True ),
  ComponentName = cms.string( "hltESPPixelCPETemplateReco" ),
  Alpha2Order = cms.bool( True ),
  ClusterProbComputationFlag = cms.int32( 0 ),
  speed = cms.int32( -2 ),
  UseClusterSplitter = cms.bool( False )
)
hltESPPixelPairStepChi2MeasurementEstimator25 = cms.ESProducer( "Chi2MeasurementEstimatorESProducer",
  appendToDataLabel = cms.string( "" ),
  MinimalTolerance = cms.double( 10.0 ),
  MaxDisplacement = cms.double( 100.0 ),
  ComponentName = cms.string( "hltESPPixelPairStepChi2MeasurementEstimator25" ),
  nSigma = cms.double( 3.0 ),
  MaxSagitta = cms.double( -1.0 ),
  MaxChi2 = cms.double( 25.0 )
)
hltESPPixelPairTrajectoryCleanerBySharedHits = cms.ESProducer( "TrajectoryCleanerESProducer",
  ComponentName = cms.string( "hltESPPixelPairTrajectoryCleanerBySharedHits" ),
  fractionShared = cms.double( 0.19 ),
  ValidHitBonus = cms.double( 5.0 ),
  ComponentType = cms.string( "TrajectoryCleanerBySharedHits" ),
  MissingHitPenalty = cms.double( 20.0 ),
  allowSharedFirstHit = cms.bool( True )
)
hltESPRKTrajectoryFitter = cms.ESProducer( "KFTrajectoryFitterESProducer",
  appendToDataLabel = cms.string( "" ),
  minHits = cms.int32( 3 ),
  ComponentName = cms.string( "hltESPRKTrajectoryFitter" ),
  Estimator = cms.string( "hltESPChi2MeasurementEstimator30" ),
  Updator = cms.string( "hltESPKFUpdator" ),
  Propagator = cms.string( "hltESPRungeKuttaTrackerPropagator" ),
  RecoGeometry = cms.string( "hltESPGlobalDetLayerGeometry" )
)
hltESPRKTrajectorySmoother = cms.ESProducer( "KFTrajectorySmootherESProducer",
  errorRescaling = cms.double( 100.0 ),
  minHits = cms.int32( 3 ),
  ComponentName = cms.string( "hltESPRKTrajectorySmoother" ),
  appendToDataLabel = cms.string( "" ),
  Estimator = cms.string( "hltESPChi2MeasurementEstimator30" ),
  Updator = cms.string( "hltESPKFUpdator" ),
  Propagator = cms.string( "hltESPRungeKuttaTrackerPropagator" ),
  RecoGeometry = cms.string( "hltESPGlobalDetLayerGeometry" )
)
hltESPRungeKuttaTrackerPropagator = cms.ESProducer( "PropagatorWithMaterialESProducer",
  SimpleMagneticField = cms.string( "" ),
  PropagationDirection = cms.string( "alongMomentum" ),
  ComponentName = cms.string( "hltESPRungeKuttaTrackerPropagator" ),
  Mass = cms.double( 0.105 ),
  ptMin = cms.double( -1.0 ),
  MaxDPhi = cms.double( 1.6 ),
  useRungeKutta = cms.bool( True )
)
hltESPSmartPropagator = cms.ESProducer( "SmartPropagatorESProducer",
  Epsilon = cms.double( 5.0 ),
  TrackerPropagator = cms.string( "PropagatorWithMaterial" ),
  MuonPropagator = cms.string( "hltESPSteppingHelixPropagatorAlong" ),
  PropagationDirection = cms.string( "alongMomentum" ),
  ComponentName = cms.string( "hltESPSmartPropagator" )
)
hltESPSmartPropagatorAny = cms.ESProducer( "SmartPropagatorESProducer",
  Epsilon = cms.double( 5.0 ),
  TrackerPropagator = cms.string( "PropagatorWithMaterial" ),
  MuonPropagator = cms.string( "SteppingHelixPropagatorAny" ),
  PropagationDirection = cms.string( "alongMomentum" ),
  ComponentName = cms.string( "hltESPSmartPropagatorAny" )
)
hltESPSmartPropagatorAnyOpposite = cms.ESProducer( "SmartPropagatorESProducer",
  Epsilon = cms.double( 5.0 ),
  TrackerPropagator = cms.string( "PropagatorWithMaterialOpposite" ),
  MuonPropagator = cms.string( "SteppingHelixPropagatorAny" ),
  PropagationDirection = cms.string( "oppositeToMomentum" ),
  ComponentName = cms.string( "hltESPSmartPropagatorAnyOpposite" )
)
hltESPSoftLeptonByDistance = cms.ESProducer( "LeptonTaggerByDistanceESProducer",
  distance = cms.double( 0.5 )
)
hltESPSteppingHelixPropagatorAlong = cms.ESProducer( "SteppingHelixPropagatorESProducer",
  NoErrorPropagation = cms.bool( False ),
  endcapShiftInZPos = cms.double( 0.0 ),
  PropagationDirection = cms.string( "alongMomentum" ),
  useTuningForL2Speed = cms.bool( False ),
  useIsYokeFlag = cms.bool( True ),
  endcapShiftInZNeg = cms.double( 0.0 ),
  SetVBFPointer = cms.bool( False ),
  AssumeNoMaterial = cms.bool( False ),
  returnTangentPlane = cms.bool( True ),
  useInTeslaFromMagField = cms.bool( False ),
  VBFName = cms.string( "VolumeBasedMagneticField" ),
  useEndcapShiftsInZ = cms.bool( False ),
  sendLogWarning = cms.bool( False ),
  useMatVolumes = cms.bool( True ),
  debug = cms.bool( False ),
  ApplyRadX0Correction = cms.bool( True ),
  useMagVolumes = cms.bool( True ),
  ComponentName = cms.string( "hltESPSteppingHelixPropagatorAlong" )
)
hltESPSteppingHelixPropagatorOpposite = cms.ESProducer( "SteppingHelixPropagatorESProducer",
  NoErrorPropagation = cms.bool( False ),
  endcapShiftInZPos = cms.double( 0.0 ),
  PropagationDirection = cms.string( "oppositeToMomentum" ),
  useTuningForL2Speed = cms.bool( False ),
  useIsYokeFlag = cms.bool( True ),
  endcapShiftInZNeg = cms.double( 0.0 ),
  SetVBFPointer = cms.bool( False ),
  AssumeNoMaterial = cms.bool( False ),
  returnTangentPlane = cms.bool( True ),
  useInTeslaFromMagField = cms.bool( False ),
  VBFName = cms.string( "VolumeBasedMagneticField" ),
  useEndcapShiftsInZ = cms.bool( False ),
  sendLogWarning = cms.bool( False ),
  useMatVolumes = cms.bool( True ),
  debug = cms.bool( False ),
  ApplyRadX0Correction = cms.bool( True ),
  useMagVolumes = cms.bool( True ),
  ComponentName = cms.string( "hltESPSteppingHelixPropagatorOpposite" )
)
hltESPStripCPEfromTrackAngle = cms.ESProducer( "StripCPEESProducer",
  ComponentType = cms.string( "StripCPEfromTrackAngle" ),
  ComponentName = cms.string( "hltESPStripCPEfromTrackAngle" ),
  parameters = cms.PSet( 
    mLC_P2 = cms.double( 0.3 ),
    mLC_P1 = cms.double( 0.618 ),
    mLC_P0 = cms.double( -0.326 ),
    useLegacyError = cms.bool( False ),
    mTEC_P1 = cms.double( 0.471 ),
    mTEC_P0 = cms.double( -1.885 ),
    mTOB_P0 = cms.double( -1.026 ),
    mTOB_P1 = cms.double( 0.253 ),
    mTIB_P0 = cms.double( -0.742 ),
    mTIB_P1 = cms.double( 0.202 ),
    mTID_P0 = cms.double( -1.427 ),
    mTID_P1 = cms.double( 0.433 ),
    maxChgOneMIP = cms.double( 6000.0 )
  )
)
hltESPTTRHBWithTrackAngle = cms.ESProducer( "TkTransientTrackingRecHitBuilderESProducer",
  StripCPE = cms.string( "hltESPStripCPEfromTrackAngle" ),
  Matcher = cms.string( "StandardMatcher" ),
  ComputeCoarseLocalPositionFromDisk = cms.bool( False ),
  PixelCPE = cms.string( "hltESPPixelCPEGeneric" ),
  ComponentName = cms.string( "hltESPTTRHBWithTrackAngle" )
)
hltESPTTRHBuilderAngleAndTemplate = cms.ESProducer( "TkTransientTrackingRecHitBuilderESProducer",
  StripCPE = cms.string( "hltESPStripCPEfromTrackAngle" ),
  Matcher = cms.string( "StandardMatcher" ),
  ComputeCoarseLocalPositionFromDisk = cms.bool( False ),
  PixelCPE = cms.string( "hltESPPixelCPETemplateReco" ),
  ComponentName = cms.string( "hltESPTTRHBuilderAngleAndTemplate" )
)
hltESPTTRHBuilderPixelOnly = cms.ESProducer( "TkTransientTrackingRecHitBuilderESProducer",
  StripCPE = cms.string( "Fake" ),
  Matcher = cms.string( "StandardMatcher" ),
  ComputeCoarseLocalPositionFromDisk = cms.bool( False ),
  PixelCPE = cms.string( "hltESPPixelCPEGeneric" ),
  ComponentName = cms.string( "hltESPTTRHBuilderPixelOnly" )
)
hltESPTTRHBuilderWithoutAngle4PixelTriplets = cms.ESProducer( "TkTransientTrackingRecHitBuilderESProducer",
  StripCPE = cms.string( "Fake" ),
  Matcher = cms.string( "StandardMatcher" ),
  ComputeCoarseLocalPositionFromDisk = cms.bool( False ),
  PixelCPE = cms.string( "hltESPPixelCPEGeneric" ),
  ComponentName = cms.string( "hltESPTTRHBuilderWithoutAngle4PixelTriplets" )
)
hltESPTrackerRecoGeometryESProducer = cms.ESProducer( "TrackerRecoGeometryESProducer",
  appendToDataLabel = cms.string( "" ),
  trackerGeometryLabel = cms.untracked.string( "" )
)
hltESPTrajectoryCleanerBySharedHits = cms.ESProducer( "TrajectoryCleanerESProducer",
  ComponentName = cms.string( "hltESPTrajectoryCleanerBySharedHits" ),
  fractionShared = cms.double( 0.5 ),
  ValidHitBonus = cms.double( 100.0 ),
  ComponentType = cms.string( "TrajectoryCleanerBySharedHits" ),
  MissingHitPenalty = cms.double( 0.0 ),
  allowSharedFirstHit = cms.bool( False )
)
hltESPTrajectoryCleanerBySharedSeeds = cms.ESProducer( "TrajectoryCleanerESProducer",
  ComponentName = cms.string( "hltESPTrajectoryCleanerBySharedSeeds" ),
  fractionShared = cms.double( 0.5 ),
  ValidHitBonus = cms.double( 100.0 ),
  ComponentType = cms.string( "TrajectoryCleanerBySharedSeeds" ),
  MissingHitPenalty = cms.double( 0.0 ),
  allowSharedFirstHit = cms.bool( True )
)
hltESPTrajectoryFitterRK = cms.ESProducer( "KFTrajectoryFitterESProducer",
  appendToDataLabel = cms.string( "" ),
  minHits = cms.int32( 3 ),
  ComponentName = cms.string( "hltESPTrajectoryFitterRK" ),
  Estimator = cms.string( "hltESPChi2MeasurementEstimator30" ),
  Updator = cms.string( "hltESPKFUpdator" ),
  Propagator = cms.string( "hltESPRungeKuttaTrackerPropagator" ),
  RecoGeometry = cms.string( "hltESPDummyDetLayerGeometry" )
)
hltESPTrajectorySmootherRK = cms.ESProducer( "KFTrajectorySmootherESProducer",
  errorRescaling = cms.double( 100.0 ),
  minHits = cms.int32( 3 ),
  ComponentName = cms.string( "hltESPTrajectorySmootherRK" ),
  appendToDataLabel = cms.string( "" ),
  Estimator = cms.string( "hltESPChi2MeasurementEstimator30" ),
  Updator = cms.string( "hltESPKFUpdator" ),
  Propagator = cms.string( "hltESPRungeKuttaTrackerPropagator" ),
  RecoGeometry = cms.string( "hltESPDummyDetLayerGeometry" )
)
hoDetIdAssociator = cms.ESProducer( "DetIdAssociatorESProducer",
  ComponentName = cms.string( "HODetIdAssociator" ),
  etaBinSize = cms.double( 0.087 ),
  nEta = cms.int32( 30 ),
  nPhi = cms.int32( 72 ),
  includeBadChambers = cms.bool( False )
)
muonDetIdAssociator = cms.ESProducer( "DetIdAssociatorESProducer",
  ComponentName = cms.string( "MuonDetIdAssociator" ),
  etaBinSize = cms.double( 0.125 ),
  nEta = cms.int32( 48 ),
  nPhi = cms.int32( 48 ),
  includeBadChambers = cms.bool( False )
)
navigationSchoolESProducer = cms.ESProducer( "NavigationSchoolESProducer",
  ComponentName = cms.string( "SimpleNavigationSchool" ),
  SimpleMagneticField = cms.string( "ParabolicMf" )
)
preshowerDetIdAssociator = cms.ESProducer( "DetIdAssociatorESProducer",
  ComponentName = cms.string( "PreshowerDetIdAssociator" ),
  etaBinSize = cms.double( 0.1 ),
  nEta = cms.int32( 60 ),
  nPhi = cms.int32( 30 ),
  includeBadChambers = cms.bool( False )
)
siPixelQualityESProducer = cms.ESProducer( "SiPixelQualityESProducer",
  ListOfRecordToMerge = cms.VPSet( 
    cms.PSet(  record = cms.string( "SiPixelQualityFromDbRcd" ),
      tag = cms.string( "" )
    ),
    cms.PSet(  record = cms.string( "SiPixelDetVOffRcd" ),
      tag = cms.string( "" )
    )
  )
)
siPixelTemplateDBObjectESProducer = cms.ESProducer( "SiPixelTemplateDBObjectESProducer" )
siStripBackPlaneCorrectionDepESProducer = cms.ESProducer( "SiStripBackPlaneCorrectionDepESProducer",
  LatencyRecord = cms.PSet( 
    record = cms.string( "SiStripLatencyRcd" ),
    label = cms.untracked.string( "" )
  ),
  BackPlaneCorrectionDeconvMode = cms.PSet( 
    record = cms.string( "SiStripBackPlaneCorrectionRcd" ),
    label = cms.untracked.string( "deconvolution" )
  ),
  BackPlaneCorrectionPeakMode = cms.PSet( 
    record = cms.string( "SiStripBackPlaneCorrectionRcd" ),
    label = cms.untracked.string( "peak" )
  )
)
siStripLorentzAngleDepESProducer = cms.ESProducer( "SiStripLorentzAngleDepESProducer",
  LatencyRecord = cms.PSet( 
    record = cms.string( "SiStripLatencyRcd" ),
    label = cms.untracked.string( "" )
  ),
  LorentzAngleDeconvMode = cms.PSet( 
    record = cms.string( "SiStripLorentzAngleRcd" ),
    label = cms.untracked.string( "deconvolution" )
  ),
  LorentzAnglePeakMode = cms.PSet( 
    record = cms.string( "SiStripLorentzAngleRcd" ),
    label = cms.untracked.string( "peak" )
  )
)
sistripconn = cms.ESProducer( "SiStripConnectivity" )
trackerTopology = cms.ESProducer( "TrackerTopologyEP",
  appendToDataLabel = cms.string( "" )
)

EvFDaqDirector = cms.Service( "EvFDaqDirector",
  buBaseDir = cms.untracked.string( "." ),
  baseDir = cms.untracked.string( "." ),
  fuLockPollInterval = cms.untracked.uint32( 2000 ),
  runNumber = cms.untracked.uint32( 0 ),
  microMergeDisabled = cms.untracked.bool( False ),
  outputAdler32Recheck = cms.untracked.bool( False ),
  selectedTransferMode = cms.untracked.string( "" ),
  requireTransfersPSet = cms.untracked.bool( False ),
  emptyLumisectionMode = cms.untracked.bool( False )
)
FastMonitoringService = cms.Service( "FastMonitoringService",
  fastMonIntervals = cms.untracked.uint32( 2 ),
  sleepTime = cms.untracked.int32( 1 )
)
PrescaleService = cms.Service( "PrescaleService",
  forceDefault = cms.bool( False ),
  prescaleTable = cms.VPSet(  *(
    cms.PSet(  pathName = cms.string( "HLT_AK8PFJet360_TrimMass30_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_AK8PFHT700_TrimR0p1PT0p03Mass50_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_AK8PFHT650_TrimR0p1PT0p03Mass50_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_AK8PFHT600_TrimR0p1PT0p03Mass50_BTagCSV_p20_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_CaloJet500_NoJetID_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Dimuon13_PsiPrime_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Dimuon13_Upsilon_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Dimuon20_Jpsi_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleEle24_22_eta2p1_WPLoose_Gsf_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_MW_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleMediumIsoPFTau35_Trk1_eta2p1_Reg_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleMediumIsoPFTau40_Trk1_eta2p1_Reg_v4" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleMu33NoFiltersNoVtx_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleMu38NoFiltersNoVtx_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleMu23NoFiltersNoVtxDisplaced_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleMu28NoFiltersNoVtxDisplaced_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleMu4_3_Bs_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleMu4_3_Jpsi_Displaced_v2" ),
      prescales = cms.vuint32( 5, 5, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleMu4_JpsiTrk_Displaced_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleMu4_LowMassNonResonantTrk_Displaced_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleMu4_PsiPrimeTrk_Displaced_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu7p5_L2Mu2_Jpsi_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu7p5_L2Mu2_Upsilon_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu7p5_Track2_Jpsi_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu7p5_Track3p5_Jpsi_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu7p5_Track7_Jpsi_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu7p5_Track2_Upsilon_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu7p5_Track3p5_Upsilon_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu7p5_Track7_Upsilon_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Dimuon0er16_Jpsi_NoOS_NoVertexing_v2" ),
      prescales = cms.vuint32( 50, 1, 50, 36, 24, 14, 7, 5, 3, 2, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Dimuon0er16_Jpsi_NoVertexing_v2" ),
      prescales = cms.vuint32( 100, 100, 50, 35, 25, 14, 7, 5, 3, 2, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Dimuon6_Jpsi_NoVertexing_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoublePhoton60_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoublePhoton85_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele22_eta2p1_WPLoose_Gsf_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele22_eta2p1_WPTight_Gsf_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele22_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele22_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele30WP60_SC4_Mass55_v3" ),
      prescales = cms.vuint32( 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele30WP60_Ele8_Mass55_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele23_WPLoose_Gsf_v3" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele23_WPLoose_Gsf_TriCentralPFJet50_40_30_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele23_WPLoose_Gsf_CentralPFJet30_BTagCSV_p063_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele23_WPLoose_Gsf_WHbbBoost_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele27_WPLoose_Gsf_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele27_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_v3" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele27_eta2p1_WPLoose_Gsf_DoubleMediumIsoPFTau35_Trk1_eta2p1_Reg_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele27_eta2p1_WPLoose_Gsf_DoubleMediumIsoPFTau40_Trk1_eta2p1_Reg_v3" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele27_WPLoose_Gsf_CentralPFJet30_BTagCSV_p063_v1" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele27_WPLoose_Gsf_TriCentralPFJet50_40_30_v1" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele27_WPLoose_Gsf_WHbbBoost_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele27_eta2p1_WPLoose_Gsf_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele27_eta2p1_WPTight_Gsf_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele32_eta2p1_WPTight_Gsf_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele35_CaloIdVT_GsfTrkIdT_PFJet150_PFJet50_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele105_CaloIdVT_GsfTrkIdT_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HT200_v1" ),
      prescales = cms.vuint32( 20000, 20000, 10000, 7100, 5000, 2800, 1400, 1000, 710, 500, 280, 150, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HT275_v1" ),
      prescales = cms.vuint32( 8000, 8000, 4000, 2800, 2000, 1100, 570, 400, 280, 200, 110, 60, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HT325_v1" ),
      prescales = cms.vuint32( 4000, 4000, 2000, 1400, 1000, 570, 280, 200, 140, 100, 60, 30, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HT425_v1" ),
      prescales = cms.vuint32( 1500, 1500, 750, 530, 370, 210, 100, 75, 50, 36, 20, 10, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HT575_v1" ),
      prescales = cms.vuint32( 500, 500, 250, 170, 120, 70, 35, 25, 20, 12, 10, 3, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HT450to470_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HT470to500_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HT500to550_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HT550to650_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HT650_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu16_eta2p1_MET30_v1" ),
      prescales = cms.vuint32( 220, 220, 110, 80, 60, 30, 15, 10, 7, 5, 3, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_IsoMu16_eta2p1_MET30_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_IsoMu16_eta2p1_MET30_LooseIsoPFTau50_Trk30_eta2p1_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_IsoMu17_eta2p1_v3" ),
      prescales = cms.vuint32( 1, 1, 110, 80, 55, 30, 15, 10, 7, 5, 3, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_IsoMu17_eta2p1_LooseIsoPFTau20_v4" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_IsoMu17_eta2p1_LooseIsoPFTau20_SingleL1_v4" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_IsoMu17_eta2p1_MediumIsoPFTau35_Trk1_eta2p1_Reg_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_IsoMu17_eta2p1_MediumIsoPFTau40_Trk1_eta2p1_Reg_v5" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleIsoMu17_eta2p1_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_IsoMu18_v2" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_OldIsoMu18_v1" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_IsoMu18_CentralPFJet30_BTagCSV_p063_v1" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_IsoMu18_TriCentralPFJet50_40_30_v2" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_IsoMu20_v3" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_IsoMu20_eta2p1_LooseIsoPFTau20_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_IsoMu22_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_IsoMu22_CentralPFJet30_BTagCSV_p063_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_IsoMu22_TriCentralPFJet50_40_30_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_IsoMu27_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_IsoTkMu18_v2" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_OldIsoTkMu18_v2" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_IsoTkMu20_v4" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_IsoTkMu22_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_IsoTkMu27_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_JetE30_NoBPTX3BX_NoHalo_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_JetE30_NoBPTX_v2" ),
      prescales = cms.vuint32( 160, 160, 60, 42, 30, 17, 8, 6, 4, 3, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_JetE50_NoBPTX3BX_NoHalo_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_JetE70_NoBPTX3BX_NoHalo_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_L1SingleMu16_v1" ),
      prescales = cms.vuint32( 80000, 80000, 40000, 5000, 3500, 2000, 1000, 700, 500, 350, 200, 100, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_L2Mu10_v1" ),
      prescales = cms.vuint32( 20000, 20000, 10000, 500, 350, 200, 100, 70, 50, 35, 20, 10, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_L1SingleMuOpen_v2" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_L1SingleMuOpen_DT_v2" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_L1Tech_DT_GlobalOR_v2" ),
      prescales = cms.vuint32( 0, 3000, 3000, 3000, 3000, 3000, 3000, 3000, 3000, 3000, 3000, 3000, 0, 0, 0, 0, 0, 3000 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_L2DoubleMu23_NoVertex_v2" ),
      prescales = cms.vuint32( 200, 200, 100, 70, 50, 28, 12, 10, 6, 5, 2, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_L2DoubleMu28_NoVertex_2Cha_Angle2p5_Mass10_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_L2DoubleMu38_NoVertex_2Cha_Angle2p5_Mass10_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_L2Mu10_NoVertex_NoBPTX3BX_NoHalo_v2" ),
      prescales = cms.vuint32( 100, 100, 100, 70, 50, 30, 15, 10, 7, 5, 2, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_L2Mu10_NoVertex_NoBPTX_v2" ),
      prescales = cms.vuint32( 100, 100, 100, 70, 50, 30, 15, 10, 7, 5, 2, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_L2Mu35_NoVertex_3Sta_NoBPTX3BX_NoHalo_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX_NoHalo_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_LooseIsoPFTau50_Trk30_eta2p1_v3" ),
      prescales = cms.vuint32( 8, 8, 4, 4, 4, 4, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_LooseIsoPFTau50_Trk30_eta2p1_MET120_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_LooseIsoPFTau50_Trk30_eta2p1_MET80_v1" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu17_Mu8_v1" ),
      prescales = cms.vuint32( 50, 50, 50, 35, 25, 14, 6, 5, 3, 2, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu17_Mu8_DZ_v2" ),
      prescales = cms.vuint32( 50, 50, 50, 35, 25, 15, 7, 5, 3, 2, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu17_Mu8_SameSign_DZ_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu20_Mu10_v1" ),
      prescales = cms.vuint32( 25, 25, 25, 14, 10, 7, 3, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu20_Mu10_DZ_v1" ),
      prescales = cms.vuint32( 25, 25, 25, 14, 10, 7, 3, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu20_Mu10_SameSign_DZ_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu17_TkMu8_DZ_v2" ),
      prescales = cms.vuint32( 50, 50, 50, 35, 25, 15, 7, 5, 3, 2, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v2" ),
      prescales = cms.vuint32( 50, 50, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_v2" ),
      prescales = cms.vuint32( 50, 50, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu25_TkMu0_dEta18_Onia_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu27_TkMu8_v2" ),
      prescales = cms.vuint32( 50, 50, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu30_TkMu11_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu30_eta2p1_PFJet150_PFJet50_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu40_TkMu11_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu40_eta2p1_PFJet200_PFJet50_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu20_v2" ),
      prescales = cms.vuint32( 0, 0, 90, 60, 40, 20, 10, 8, 6, 4, 2, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_TkMu20_v2" ),
      prescales = cms.vuint32( 0, 0, 450, 300, 200, 100, 50, 40, 30, 20, 10, 5, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu24_eta2p1_v2" ),
      prescales = cms.vuint32( 700, 700, 350, 250, 150, 100, 50, 35, 25, 15, 10, 5, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_TkMu24_eta2p1_v2" ),
      prescales = cms.vuint32( 700, 700, 350, 250, 170, 100, 50, 35, 25, 17, 10, 5, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu27_v2" ),
      prescales = cms.vuint32( 500, 500, 250, 180, 120, 70, 35, 25, 18, 12, 7, 3, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_TkMu27_v2" ),
      prescales = cms.vuint32( 500, 500, 250, 180, 120, 70, 35, 25, 18, 12, 7, 3, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu50_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu45_eta2p1_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL_v2" ),
      prescales = cms.vuint32( 40, 40, 20, 14, 10, 5, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleMu18NoFiltersNoVtx_v2" ),
      prescales = cms.vuint32( 120, 120, 60, 35, 25, 17, 6, 5, 4, 3, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu33NoFiltersNoVtxDisplaced_DisplacedJet50_Tight_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu33NoFiltersNoVtxDisplaced_DisplacedJet50_Loose_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu28NoFiltersNoVtx_DisplacedJet40_Loose_v2" ),
      prescales = cms.vuint32( 140, 140, 70, 50, 35, 20, 10, 7, 5, 3, 2, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu38NoFiltersNoVtxDisplaced_DisplacedJet60_Tight_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu38NoFiltersNoVtxDisplaced_DisplacedJet60_Loose_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu38NoFiltersNoVtx_DisplacedJet60_Loose_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu28NoFiltersNoVtx_CentralCaloJet40_v2" ),
      prescales = cms.vuint32( 600, 600, 300, 200, 140, 80, 40, 35, 20, 15, 8, 4, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT350_PFMET100_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT550_4JetPt50_v1" ),
      prescales = cms.vuint32( 110, 110, 55, 36, 30, 15, 6, 4, 3, 2, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT650_4JetPt50_v1" ),
      prescales = cms.vuint32( 90, 90, 45, 24, 20, 10, 6, 4, 3, 2, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT750_4JetPt50_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT600_v3" ),
      prescales = cms.vuint32( 50, 50, 25, 18, 12, 6, 3, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT650_v3" ),
      prescales = cms.vuint32( 40, 40, 20, 12, 10, 5, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT800_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFJet40_v4" ),
      prescales = cms.vuint32( 5000, 150, 70, 50, 30, 60, 60, 45, 300, 300, 300, 300, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFJet60_v4" ),
      prescales = cms.vuint32( 1, 1, 1, 12, 12, 12, 12, 12, 12, 12, 12, 12, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFJet80_v4" ),
      prescales = cms.vuint32( 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFJet140_v4" ),
      prescales = cms.vuint32( 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFJet200_v4" ),
      prescales = cms.vuint32( 1, 1, 270, 189, 135, 80, 42, 28, 36, 24, 15, 6, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFJet260_v4" ),
      prescales = cms.vuint32( 180, 180, 90, 63, 45, 8, 6, 4, 3, 2, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFJet320_v4" ),
      prescales = cms.vuint32( 60, 60, 30, 21, 15, 4, 3, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFJet400_v4" ),
      prescales = cms.vuint32( 20, 20, 10, 7, 5, 2, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFJet450_v4" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFJet500_v4" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DiPFJetAve40_v2" ),
      prescales = cms.vuint32( 25, 25, 16, 12, 8, 5, 3, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DiPFJetAve60_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DiPFJetAve80_v2" ),
      prescales = cms.vuint32( 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 7 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DiPFJetAve140_v2" ),
      prescales = cms.vuint32( 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DiPFJetAve200_v2" ),
      prescales = cms.vuint32( 250, 250, 125, 85, 60, 35, 16, 12, 9, 6, 4, 2, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DiPFJetAve260_v2" ),
      prescales = cms.vuint32( 85, 85, 85, 60, 42, 24, 12, 8, 6, 4, 2, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DiPFJetAve320_v2" ),
      prescales = cms.vuint32( 15, 15, 15, 10, 6, 4, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DiPFJetAve400_v2" ),
      prescales = cms.vuint32( 5, 5, 5, 3, 2, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DiPFJetAve500_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DiPFJetAve60_HFJEC_v3" ),
      prescales = cms.vuint32( 1000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DiPFJetAve80_HFJEC_v3" ),
      prescales = cms.vuint32( 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DiPFJetAve100_HFJEC_v3" ),
      prescales = cms.vuint32( 1500, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DiPFJetAve160_HFJEC_v3" ),
      prescales = cms.vuint32( 48, 48, 24, 16, 12, 6, 3, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DiPFJetAve220_HFJEC_v3" ),
      prescales = cms.vuint32( 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DiPFJetAve300_HFJEC_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DiPFJet40_DEta3p5_MJJ600_PFMETNoMu140_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DiPFJet40_DEta3p5_MJJ600_PFMETNoMu80_v1" ),
      prescales = cms.vuint32( 1, 1, 80, 60, 40, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DiCentralPFJet55_PFMET110_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT200_v2" ),
      prescales = cms.vuint32( 3060, 3060, 3060, 3060, 3060, 3060, 3060, 3060, 3060, 3060, 3060, 3060, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT250_v2" ),
      prescales = cms.vuint32( 2040, 2040, 2040, 2040, 2040, 2040, 2040, 2040, 2040, 2040, 2040, 2040, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT300_v2" ),
      prescales = cms.vuint32( 1020, 1020, 1020, 1020, 1020, 1020, 1020, 1020, 1020, 1020, 1020, 1020, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT350_v3" ),
      prescales = cms.vuint32( 180, 180, 180, 180, 180, 180, 180, 180, 180, 180, 180, 180, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT400_v2" ),
      prescales = cms.vuint32( 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT475_v2" ),
      prescales = cms.vuint32( 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT200_PFAlphaT0p51_v2" ),
      prescales = cms.vuint32( 1, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT200_DiPFJetAve90_PFAlphaT0p57_v2" ),
      prescales = cms.vuint32( 0, 150, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT200_DiPFJetAve90_PFAlphaT0p63_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT250_DiPFJetAve90_PFAlphaT0p55_v2" ),
      prescales = cms.vuint32( 0, 150, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT250_DiPFJetAve90_PFAlphaT0p58_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT300_DiPFJetAve90_PFAlphaT0p53_v2" ),
      prescales = cms.vuint32( 0, 150, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT300_DiPFJetAve90_PFAlphaT0p54_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT350_DiPFJetAve90_PFAlphaT0p52_v2" ),
      prescales = cms.vuint32( 0, 150, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT350_DiPFJetAve90_PFAlphaT0p53_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT400_DiPFJetAve90_PFAlphaT0p51_v2" ),
      prescales = cms.vuint32( 0, 150, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT400_DiPFJetAve90_PFAlphaT0p52_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_MET60_IsoTrk35_Loose_v1" ),
      prescales = cms.vuint32( 500, 500, 250, 170, 120, 70, 35, 25, 17, 12, 7, 3, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_MET75_IsoTrk50_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_MET90_IsoTrk50_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFMET120_BTagCSV_p067_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFMET120_Mu5_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFMET170_NoiseCleaned_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFMET170_HBHECleaned_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFMET170_JetIdCleaned_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFMET170_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFMET90_PFMHT90_IDTight_v2" ),
      prescales = cms.vuint32( 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFMET100_PFMHT100_IDTight_v2" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFMET110_PFMHT110_IDTight_v2" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFMET120_PFMHT120_IDTight_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_BTagCSV_p067_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_v2" ),
      prescales = cms.vuint32( 50, 50, 25, 17, 12, 7, 3, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_QuadPFJet_BTagCSV_p037_p11_VBF_Mqq200_v1" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_QuadPFJet_BTagCSV_p037_VBF_Mqq460_v1" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_QuadPFJet_BTagCSV_p037_p11_VBF_Mqq240_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_QuadPFJet_BTagCSV_p037_VBF_Mqq500_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_QuadPFJet_VBF_v4" ),
      prescales = cms.vuint32( 2500, 2500, 1250, 900, 600, 350, 170, 120, 90, 60, 35, 17, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_L1_TripleJet_VBF_v4" ),
      prescales = cms.vuint32( 10000, 10000, 5000, 3600, 2400, 1400, 680, 500, 360, 240, 140, 68, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_QuadJet45_TripleBTagCSV_p087_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_QuadJet45_DoubleBTagCSV_p087_v1" ),
      prescales = cms.vuint32( 50, 50, 25, 18, 12, 7, 3, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleJet90_Double30_TripleBTagCSV_p087_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleJet90_Double30_DoubleBTagCSV_p087_v1" ),
      prescales = cms.vuint32( 50, 50, 25, 18, 12, 7, 3, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleJetsC100_DoubleBTagCSV_p026_DoublePFJetsC160_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleJetsC100_DoubleBTagCSV_p014_DoublePFJetsC100MaxDeta1p6_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleJetsC112_DoubleBTagCSV_p026_DoublePFJetsC172_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleJetsC112_DoubleBTagCSV_p014_DoublePFJetsC112MaxDeta1p6_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon135_PFMET100_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40_v3" ),
      prescales = cms.vuint32( 9, 9, 9, 90, 60, 36, 18, 12, 9, 6, 3, 2, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF_v2" ),
      prescales = cms.vuint32( 3, 3, 3, 30, 20, 12, 6, 4, 3, 2, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon250_NoHE_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon300_NoHE_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60_v2" ),
      prescales = cms.vuint32( 300, 300, 150, 100, 75, 42, 21, 15, 10, 7, 4, 2, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40_v3" ),
      prescales = cms.vuint32( 100, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF_v2" ),
      prescales = cms.vuint32( 10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40_v3" ),
      prescales = cms.vuint32( 10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF_v2" ),
      prescales = cms.vuint32( 6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40_v3" ),
      prescales = cms.vuint32( 6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF_v2" ),
      prescales = cms.vuint32( 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40_v3" ),
      prescales = cms.vuint32( 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF_v2" ),
      prescales = cms.vuint32( 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu8_TrkIsoVVL_v3" ),
      prescales = cms.vuint32( 30, 30, 40, 30, 30, 30, 30, 40, 55, 55, 55, 55, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu17_TrkIsoVVL_v2" ),
      prescales = cms.vuint32( 40, 40, 7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 150, 150, 150, 200, 150, 100, 65, 30, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1600, 1100, 650, 325, 250, 180, 125, 75, 36, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_v3" ),
      prescales = cms.vuint32( 2, 2, 1300, 950, 660, 380, 190, 125, 90, 60, 35, 20, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_BTagMu_DiJet20_Mu5_v2" ),
      prescales = cms.vuint32( 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_BTagMu_DiJet40_Mu5_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_BTagMu_DiJet70_Mu5_v2" ),
      prescales = cms.vuint32( 4, 4, 4, 3, 3, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_BTagMu_DiJet110_Mu5_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_BTagMu_Jet300_Mu5_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v3" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL_v3" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v3" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu30_Ele30_CaloIdL_GsfTrkIdVL_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu8_DiEle12_CaloIdL_TrackIdL_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu12_Photon25_CaloIdL_v3" ),
      prescales = cms.vuint32( 10000, 10000, 5000, 3500, 2500, 1400, 700, 500, 350, 250, 140, 70, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu12_Photon25_CaloIdL_L1ISO_v3" ),
      prescales = cms.vuint32( 1000, 1000, 500, 350, 250, 140, 70, 50, 35, 25, 14, 7, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu12_Photon25_CaloIdL_L1OR_v3" ),
      prescales = cms.vuint32( 20, 20, 10, 7, 5, 2, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu17_Photon22_CaloIdL_L1ISO_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu17_Photon30_CaloIdL_L1ISO_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu17_Photon35_CaloIdL_L1ISO_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DiMu9_Ele9_CaloIdL_TrackIdL_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_TripleMu_12_10_5_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu3er_PFHT140_PFMET125_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu6_PFHT200_PFMET80_BTagCSV_p067_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu6_PFHT200_PFMET100_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu14er_PFMET100_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_v3" ),
      prescales = cms.vuint32( 10, 10, 5, 3, 2, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_v3" ),
      prescales = cms.vuint32( 0, 0, 10, 7, 5, 2, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele23_CaloIdL_TrackIdL_IsoVL_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1000, 700, 400, 200, 140, 100, 70, 40, 20, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele17_CaloIdL_TrackIdL_IsoVL_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 11, 11, 11, 15, 11, 8, 5, 3, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele12_CaloIdL_TrackIdL_IsoVL_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 125, 125, 125, 175, 125, 50, 25, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_AK8DiPFJet280_200_TrimMass30_BTagCSV_p20_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_AK8DiPFJet250_200_TrimMass30_BTagCSV_p20_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT650_WideJetMJJ900DEtaJJ1p5_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT650_WideJetMJJ950DEtaJJ1p5_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon22_v2" ),
      prescales = cms.vuint32( 36, 36, 9, 10000, 8000, 5000, 2400, 1800, 1200, 1000, 500, 260, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon30_v3" ),
      prescales = cms.vuint32( 36, 36, 7200, 6000, 4000, 2500, 1200, 900, 600, 500, 250, 130, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon36_v3" ),
      prescales = cms.vuint32( 24, 24, 3600, 3000, 2000, 1250, 600, 450, 300, 250, 125, 65, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon50_v3" ),
      prescales = cms.vuint32( 5700, 3600, 1800, 1000, 900, 360, 200, 160, 96, 72, 40, 20, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon75_v3" ),
      prescales = cms.vuint32( 1200, 1200, 600, 500, 300, 180, 100, 80, 48, 36, 20, 10, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon90_v3" ),
      prescales = cms.vuint32( 600, 600, 300, 250, 150, 90, 50, 40, 24, 18, 10, 5, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon120_v3" ),
      prescales = cms.vuint32( 200, 150, 75, 50, 30, 15, 10, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon175_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon165_HE10_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon22_R9Id90_HE10_IsoM_v2" ),
      prescales = cms.vuint32( 4, 4, 1, 2000, 1200, 800, 400, 300, 200, 100, 80, 40, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon30_R9Id90_HE10_IsoM_v3" ),
      prescales = cms.vuint32( 2, 2, 1200, 960, 600, 400, 200, 150, 100, 50, 40, 20, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon36_R9Id90_HE10_IsoM_v3" ),
      prescales = cms.vuint32( 1, 1, 600, 480, 300, 200, 100, 75, 50, 25, 20, 10, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon50_R9Id90_HE10_IsoM_v3" ),
      prescales = cms.vuint32( 125, 120, 60, 48, 30, 20, 10, 6, 4, 3, 2, 2, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon75_R9Id90_HE10_IsoM_v3" ),
      prescales = cms.vuint32( 24, 24, 12, 12, 6, 4, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon90_R9Id90_HE10_IsoM_v3" ),
      prescales = cms.vuint32( 13, 12, 6, 4, 3, 2, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon120_R9Id90_HE10_IsoM_v3" ),
      prescales = cms.vuint32( 5, 4, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon165_R9Id90_HE10_IsoM_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Dimuon0_Jpsi_Muon_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Dimuon0_Upsilon_Muon_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_QuadMuon0_Dimuon0_Jpsi_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_QuadMuon0_Dimuon0_Upsilon_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Rsq0p25_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Rsq0p30_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_RsqMR240_Rsq0p09_MR200_v2" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_RsqMR240_Rsq0p09_MR200_4jet_v2" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_RsqMR270_Rsq0p09_MR200_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_RsqMR270_Rsq0p09_MR200_4jet_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Rsq0p02_MR300_TriPFJet80_60_40_BTagCSV_p063_p20_Mbb60_200_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Rsq0p02_MR300_TriPFJet80_60_40_DoubleBTagCSV_p063_Mbb60_200_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HT750_DisplacedDijet80_Inclusive_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HT650_DisplacedDijet80_Inclusive_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HT350_DisplacedDijet80_Tight_DisplacedTrack_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HT250_DisplacedDijet40_DisplacedTrack_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HT350_DisplacedDijet40_DisplacedTrack_v2" ),
      prescales = cms.vuint32( 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HT350_DisplacedDijet80_DisplacedTrack_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HT400_DisplacedDijet40_Inclusive_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HT500_DisplacedDijet40_Inclusive_v2" ),
      prescales = cms.vuint32( 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HT550_DisplacedDijet40_Inclusive_v2" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_VBF_DisplacedJet40_DisplacedTrack_v2" ),
      prescales = cms.vuint32( 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_VBF_DisplacedJet40_DisplacedTrack_2TrackIP2DSig5_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_VBF_DisplacedJet40_TightID_DisplacedTrack_v2" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_VBF_DisplacedJet40_Hadronic_v2" ),
      prescales = cms.vuint32( 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_VBF_DisplacedJet40_Hadronic_2PromptTrack_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_VBF_DisplacedJet40_TightID_Hadronic_v2" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_VBF_DisplacedJet40_VTightID_Hadronic_v2" ),
      prescales = cms.vuint32( 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_VBF_DisplacedJet40_VVTightID_Hadronic_v2" ),
      prescales = cms.vuint32( 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_VBF_DisplacedJet40_VTightID_DisplacedTrack_v2" ),
      prescales = cms.vuint32( 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_VBF_DisplacedJet40_VVTightID_DisplacedTrack_v2" ),
      prescales = cms.vuint32( 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFMETNoMu90_PFMHTNoMu90_IDTight_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFMETNoMu90_JetIdCleaned_PFMHTNoMu90_IDTight_v3" ),
      prescales = cms.vuint32( 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFMETNoMu120_JetIdCleaned_PFMHTNoMu120_IDTight_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90_IDTight_v1" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_MonoCentralPFJet80_PFMETNoMu90_JetIdCleaned_PFMHTNoMu90_IDTight_v3" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_MonoCentralPFJet80_PFMETNoMu120_JetIdCleaned_PFMHTNoMu120_IDTight_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele27_eta2p1_WPLoose_Gsf_HT200_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon90_CaloIdL_PFHT500_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleMu8_Mass8_PFHT250_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT250_v1" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT250_v1" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleMu8_Mass8_PFHT300_v4" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_v4" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_v4" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu10_CentralPFJet30_BTagCSV_p13_v1" ),
      prescales = cms.vuint32( 45, 45, 22, 22, 22, 22, 3, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV_p13_v1" ),
      prescales = cms.vuint32( 5, 5, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele15_IsoVVVL_BTagCSV_p067_PFHT400_v1" ),
      prescales = cms.vuint32( 10, 10, 5, 3, 2, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele15_IsoVVVL_PFHT350_PFMET50_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele15_IsoVVVL_PFHT600_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele15_IsoVVVL_PFHT350_v2" ),
      prescales = cms.vuint32( 10, 10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu15_IsoVVVL_BTagCSV_p067_PFHT400_v1" ),
      prescales = cms.vuint32( 10, 10, 5, 3, 2, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu15_IsoVVVL_PFHT350_PFMET50_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu15_IsoVVVL_PFHT600_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu15_IsoVVVL_PFHT350_v2" ),
      prescales = cms.vuint32( 10, 10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Dimuon16_Jpsi_v2" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Dimuon10_Jpsi_Barrel_v2" ),
      prescales = cms.vuint32( 0, 0, 5, 3, 2, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Dimuon8_PsiPrime_Barrel_v2" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Dimuon8_Upsilon_Barrel_v2" ),
      prescales = cms.vuint32( 0, 0, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Dimuon0_Phi_Barrel_v2" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu16_TkMu0_dEta18_Onia_v2" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu16_TkMu0_dEta18_Phi_v2" ),
      prescales = cms.vuint32( 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_TrkMu15_DoubleTrkMu5NoFiltersNoVtx_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu8_v3" ),
      prescales = cms.vuint32( 60, 60, 80, 60, 60, 60, 60, 80, 110, 110, 110, 110, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu17_v2" ),
      prescales = cms.vuint32( 1300, 1300, 1300, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele8_CaloIdM_TrackIdM_PFJet30_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 8, 8, 8, 8, 8, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele12_CaloIdM_TrackIdM_PFJet30_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 300, 300, 300, 400, 300, 200, 130, 60, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele23_CaloIdM_TrackIdM_PFJet30_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 650, 530, 300, 150, 120, 80, 60, 32, 16, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele33_CaloIdM_TrackIdM_PFJet30_v3" ),
      prescales = cms.vuint32( 1, 1, 530, 360, 260, 150, 75, 60, 40, 28, 16, 8, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT450_SixJet40_BTagCSV_p056_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT400_SixJet30_DoubleBTagCSV_p056_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT450_SixJet40_v3" ),
      prescales = cms.vuint32( 60, 6, 4, 3, 2, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFHT400_SixJet30_v3" ),
      prescales = cms.vuint32( 350, 100, 75, 50, 38, 22, 10, 8, 5, 4, 2, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Ele115_CaloIdVT_GsfTrkIdT_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu55_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon90_CaloIdL_PFHT600_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PixelTracks_Multiplicity60ForEndOfFill_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PixelTracks_Multiplicity85ForEndOfFill_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PixelTracks_Multiplicity110ForEndOfFill_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PixelTracks_Multiplicity135ForEndOfFill_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PixelTracks_Multiplicity160ForEndOfFill_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_ECALHT800_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_MET200_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Physics_v2" ),
      prescales = cms.vuint32( 6400, 6400, 6400, 6400, 6400, 6400, 6400, 4500, 3600, 3200, 3200, 3200, 0, 0, 0, 0, 0, 3200 )
    ),
    cms.PSet(  pathName = cms.string( "DST_Physics_v1" ),
      prescales = cms.vuint32( 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 )
    ),
    cms.PSet(  pathName = cms.string( "DST_CaloJet40_BTagScouting_v1" ),
      prescales = cms.vuint32( 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 0, 0, 0, 0, 0, 10 )
    ),
    cms.PSet(  pathName = cms.string( "DST_CaloJet40_CaloScouting_PFScouting_v1" ),
      prescales = cms.vuint32( 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 0, 0, 0, 0, 0, 10 )
    ),
    cms.PSet(  pathName = cms.string( "DST_L1HTT_BTagScouting_v1" ),
      prescales = cms.vuint32( 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 0, 0, 0, 0, 0, 1000 )
    ),
    cms.PSet(  pathName = cms.string( "DST_L1HTT_CaloScouting_PFScouting_v1" ),
      prescales = cms.vuint32( 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 0, 0, 0, 0, 0, 1000 )
    ),
    cms.PSet(  pathName = cms.string( "DST_HT250_CaloScouting_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "DST_HT450_BTagScouting_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "DST_HT450_PFScouting_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "DST_ZeroBias_PFScouting_v1" ),
      prescales = cms.vuint32( 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 0, 0, 0, 0, 0, 200 )
    ),
    cms.PSet(  pathName = cms.string( "DST_ZeroBias_BTagScouting_v1" ),
      prescales = cms.vuint32( 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 0, 0, 0, 0, 0, 200 )
    ),
    cms.PSet(  pathName = cms.string( "DST_L1DoubleMu_BTagScouting_v1" ),
      prescales = cms.vuint32( 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 0, 0, 0, 0, 0, 50 )
    ),
    cms.PSet(  pathName = cms.string( "DST_L1DoubleMu_PFScouting_v1" ),
      prescales = cms.vuint32( 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 0, 0, 0, 0, 0, 50 )
    ),
    cms.PSet(  pathName = cms.string( "DST_DoubleMu3_Mass10_BTagScouting_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "DST_DoubleMu3_Mass10_PFScouting_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_DoubleMu3_Mass10_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Random_v1" ),
      prescales = cms.vuint32( 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 0, 0, 0, 0, 0, 120 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_ZeroBias_v2" ),
      prescales = cms.vuint32( 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 0, 0, 0, 0, 0, 200 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_AK4CaloJet30_v3" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_AK4CaloJet40_v2" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_AK4CaloJet50_v2" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_AK4CaloJet80_v2" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_AK4CaloJet100_v2" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_AK4PFJet30_v3" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_AK4PFJet50_v3" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_AK4PFJet80_v3" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_AK4PFJet100_v3" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HISinglePhoton10ForEndOfFill_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HISinglePhoton15ForEndOfFill_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HISinglePhoton20ForEndOfFill_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HISinglePhoton40_v2" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HISinglePhoton60_v2" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HIL1DoubleMu0BPTX_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HIL2Mu3BPTX_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HIL2DoubleMu0BPTX_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HIL3Mu3BPTX_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_FullTrack12ForEndOfFill_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_FullTrack50_v2" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Activity_Ecal_SC7_v2" ),
      prescales = cms.vuint32( 2500, 3000, 3000, 2000, 1400, 800, 400, 300, 200, 150, 80, 40, 0, 0, 0, 0, 0, 40 )
    ),
    cms.PSet(  pathName = cms.string( "AlCa_EcalPhiSym_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "AlCa_Ele23_WPVeryLoose_Gsf_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_GlobalRunHPDNoise_v3" ),
      prescales = cms.vuint32( 3500, 3500, 3500, 3500, 3500, 3500, 3500, 3500, 3500, 3500, 3500, 3500, 0, 0, 0, 0, 0, 3500 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HcalNZS_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HcalPhiSym_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HcalUTCA_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_ZeroBias_IsolatedBunches_v1" ),
      prescales = cms.vuint32( 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 0, 0, 0, 0, 0, 50 )
    ),
    cms.PSet(  pathName = cms.string( "AlCa_RPCMuonNoTriggers_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "AlCa_RPCMuonNoHits_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "AlCa_RPCMuonNormalisation_v2" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "AlCa_LumiPixels_Random_v1" ),
      prescales = cms.vuint32( 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12 )
    ),
    cms.PSet(  pathName = cms.string( "AlCa_LumiPixels_ZeroBias_v2" ),
      prescales = cms.vuint32( 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 2, 2, 2, 2, 2, 45 )
    ),
    cms.PSet(  pathName = cms.string( "MC_ReducedIterativeTracking_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "MC_PFMET_v2" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "MC_AK4PFJets_v2" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "MC_PFHT_v2" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "MC_PFMHT_v2" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "MC_CaloMET_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "MC_CaloMET_JetIdCleaned_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "MC_AK4CaloJets_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "MC_CaloHT_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "MC_CaloMHT_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "MC_AK8PFJets_v2" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "MC_AK8TrimPFJets_v2" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "MC_AK8PFHT_v2" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "MC_AK8CaloHT_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "MC_Diphoton10_10_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass10_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "MC_DoubleEle5_CaloIdL_GsfTrkIdVL_MW_v2" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "MC_Ele5_WPLoose_Gsf_v2" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "MC_Ele15_Ele10_CaloIdL_TrackIdL_IsoVL_DZ_v2" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "MC_IsoMu_v4" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "MC_IsoTkMu15_v3" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "MC_DoubleMu_TrkIsoVVL_DZ_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "MC_DoubleGlbTrkMu_TrkIsoVVL_DZ_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "MC_DoubleMuNoFiltersNoVtx_v1" ),
      prescales = cms.vuint32( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon500_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Photon600_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu300_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_Mu350_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_MET250_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_MET300_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFMET300_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_PFMET400_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HT2000_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_HT2500_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_IsoTrackHE_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "HLT_IsoTrackHB_v1" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "AlCa_EcalPi0EEonly_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "AlCa_EcalPi0EBonly_v3" ),
      prescales = cms.vuint32( 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 5 )
    ),
    cms.PSet(  pathName = cms.string( "AlCa_EcalEtaEBonly_v3" ),
      prescales = cms.vuint32( 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 5 )
    ),
    cms.PSet(  pathName = cms.string( "AlCa_EcalEtaEEonly_v3" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "PhysicsEGammaCommissioningOutput" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "PhysicsEndOfFillOutput" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "PhysicsHadronsTausOutput" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "PhysicsMuonsOutput" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "DQMOutput" ),
      prescales = cms.vuint32( 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 )
    ),
    cms.PSet(  pathName = cms.string( "ALCAP0Output" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "ExpressOutput" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "LookAreaOutput" ),
      prescales = cms.vuint32( 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 )
    ),
    cms.PSet(  pathName = cms.string( "PhysicsParkingScoutingMonitorOutput" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "ScoutingCaloOutput" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    ),
    cms.PSet(  pathName = cms.string( "ScoutingPFOutput" ),
      prescales = cms.vuint32( 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 )
    )
) ),
  lvl1DefaultLabel = cms.string( "7e33" ),
  lvl1Labels = cms.vstring( 'Emergency',
    '1e34',
    '7e33',
    '5e33',
    '3.5e33',
    '2e33',
    '1e33',
    '7e32',
    '5e32',
    '3.5e32',
    '2e32',
    '1e32',
    'HI30kHz',
    'HI20kHz',
    'HI12kHz',
    'HI8kHz',
    'HI6kHz',
    'CirculatingBeam' )
)


