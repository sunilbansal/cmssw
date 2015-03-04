import FWCore.ParameterSet.Config as cms

#### PF CLUSTER HGCEE ####

#cleaning 

#seeding
_noseeds_HGCHEB = cms.PSet(
    algoName = cms.string("PassThruSeedFinder")   
)

#topo clusters
#for arbor this is more a pre-clustering step to find little clusters
_arborTopoClusterizer_HGCHEB = cms.PSet(
    algoName = cms.string("IntraLayerClusteringAlgorithm"),    
    IntraLayerMaxDistance = cms.double( 186.0 ), # hit separation in mm
    ShouldSplitClusterInSingleCaloHitClusters = cms.bool(False), # splitsmall clusters
    MaximumSizeForClusterSplitting = cms.uint32( 3 ), #largest of small clusters to split
    thresholdsByDetector = cms.VPSet( )
)

#the real arbor clusterizer
_manqiArborClusterizer_HGCHEB = cms.PSet(
    algoName = cms.string("SimpleArborClusterizer"), 
    # use basic pad sizes in HGCEE
    cellSize = cms.double(35.0),
    layerThickness = cms.double(65.0),
    distSeedForMerge = cms.double(20.0),
    killNoiseClusters = cms.bool(True),
    maxNoiseClusterSize = cms.uint32(3),
    allowSameLayerSeedMerge = cms.bool(True),
    thresholdsByDetector = cms.VPSet( )
)

#weights for layers from P.Silva (24 October 2014)                                                                 
# this is for V5!!!!!                                                                                          
weight_vec_hef = [0.0464]
weight_vec_hef.extend([0.0474 for x in range(11)])
weight_vec_heb = [0.1215 for x in range(12)]

# MIP effective to 1.0/GeV (from fit to data of P. Silva) for HEF
#f(x) = a/(1+exp(-bx - c))
# x = cosh(eta)
# a = 1.0 <--- from straight average of Pedro's data
# b = 1e6 
# c = 1e6

#for HEB
# a = 1.0 <--- from straight average of Pedro's data
# b = 1e6 
# c = 1e6

_HGCHEB_HadronEnergy = cms.PSet(
    algoName = cms.string("HGCHEHadronicEnergyCalibrator"),
    weights_hef = cms.vdouble(weight_vec_hef),
    weights_heb = cms.vdouble(weight_vec_heb),
    effMip_to_InverseGeV_a_HEF = cms.double(1.0),
    effMip_to_InverseGeV_b_HEF = cms.double(1e6),
    effMip_to_InverseGeV_c_HEF = cms.double(1e6),
    MipValueInGeV_HEF = cms.double(85.0*1e-6),
    effMip_to_InverseGeV_a_HEB = cms.double(1.0),
    effMip_to_InverseGeV_b_HEB = cms.double(1e6),
    effMip_to_InverseGeV_c_HEB = cms.double(1e6),
    MipValueInGeV_HEB = cms.double(1498.4*1e-6)
)

particleFlowClusterHGCHEB = cms.EDProducer(
    "PFClusterProducer",
    recHitsSource = cms.InputTag("particleFlowRecHitHGCHEB"),
    recHitCleaners = cms.VPSet(),
    seedFinder = _noseeds_HGCHEB,
    initialClusteringStep = _manqiArborClusterizer_HGCHEB,
    pfClusterBuilder = cms.PSet( ),
    positionReCalc = cms.PSet(),
    energyCorrector = _HGCHEB_HadronEnergy
)

