#! /usr/bin/env python

import ROOT
import sys
from DataFormats.FWLite import Events, Handle

# Make VarParsing object
# https://twiki.cern.ch/twiki/bin/view/CMS/SWGuideAboutPythonConfigFile#VarParsing_Example
from FWCore.ParameterSet.VarParsing import VarParsing
options = VarParsing ('python')
options.parseArguments()

# Events takes either
# - single file name
# - list of file names
# - VarParsing options

# use Varparsing object
events = Events ("output_l1_2016A_mpclct18_nosorting_nosmart_changereadout5to11_v1.root")

collection = 'MuonDigiCollection<CSCDetId,CSCCorrelatedLCTDigi>'
# create handle outside of loop
handle_simCscTriggerPrimitiveDigis = Handle (collection)
handle_simCscTriggerPrimitiveDigis_MPCSORTED = Handle (collection)
handle_csctfDigis = Handle (collection)
handle_muonCSCDigis = Handle (collection)

# for now, label is just a tuple of strings that is initialized just
# like and edm::InputTag
label_simCscTriggerPrimitiveDigis = ("simCscTriggerPrimitiveDigis")
label_simCscTriggerPrimitiveDigis_MPCSORTED = ("simCscTriggerPrimitiveDigis","MPCSORTED")
label_csctfDigis = ("csctfDigis")
label_muonCSCDigis = ("muonCSCDigis","MuonCSCCorrelatedLCTDigi")


# Create histograms, etc.
ROOT.gROOT.SetBatch()        # don't pop up canvases
ROOT.gROOT.SetStyle('Plain') # white background
#zmassHist = ROOT.TH1F ("zmass", "Z Candidate Mass", 50, 20, 220)

# loop over events
nEvent = 0
for event in events:
    nEvent = 1
    if nEvent > 1:
        break
    # use getByLabel, just like in cmsRun
    event.getByLabel (label_simCscTriggerPrimitiveDigis, handle_simCscTriggerPrimitiveDigis)
    event.getByLabel (label_simCscTriggerPrimitiveDigis_MPCSORTED, handle_simCscTriggerPrimitiveDigis_MPCSORTED)
    event.getByLabel (label_csctfDigis, handle_csctfDigis)
    event.getByLabel (label_muonCSCDigis, handle_muonCSCDigis)

    # get the product
    simCscTriggerPrimitiveDigis  = handle_simCscTriggerPrimitiveDigis.product()
    simCscTriggerPrimitiveDigis_MPCSORTED  = handle_simCscTriggerPrimitiveDigis_MPCSORTED.product()
    csctfDigis  = handle_csctfDigis.product()
    muonCSCDigis  = handle_muonCSCDigis.product()

    simCscTriggerPrimitiveDigis_begin = simCscTriggerPrimitiveDigis.begin()
    simCscTriggerPrimitiveDigis_MPCSORTED_begin  = simCscTriggerPrimitiveDigis_MPCSORTED.begin()
    csctfDigis_begin  = csctfDigis.begin()
    muonCSCDigis_begin  = muonCSCDigis.begin()

    detid = digis_begin.first
    #digis = digis_begin.second
    print "detID", detid.rawId(), detid.station()
    #print  (digis_begin).first
    #print *detid
    print type(detid)
    #print type(digis)

    #print digis.first is not digis.second
    #print "digi", digis.first
    #detUnitIt = simCscTriggerPrimitiveDigis.DigiRangeIterator
    #print detUnitIt
    #for i in range(
    #bg simCscTriggerPrimitiveDigis.begin()
    #    for p in simCscTriggerPrimitiveDigis:
    #       print p
    """
    print len(simCscTriggerPrimitiveDigis)
    print len(simCscTriggerPrimitiveDigis_MPCSORTED)
    print len(csctfDigis)
    print len(muonCSCDigis)
    """
    """
    # use muons to make Z peak
    numMuons = len (muons)
    if muons < 2: continue
    for outer in xrange (numMuons - 1):
        outerMuon = muons[outer]
        for inner in xrange (outer + 1, numMuons):
            innerMuon = muons[inner]
            if outerMuon.charge() * innerMuon.charge() >= 0:
                continue
            inner4v = ROOT.TLorentzVector (innerMuon.px(), innerMuon.py(),
                                           innerMuon.pz(), innerMuon.energy())
            outer4v = ROOT.TLorentzVector (outerMuon.px(), outerMuon.py(),
                                           outerMuon.pz(), outerMuon.energy())
            #zmassHist.Fill( (inner4v + outer4v).M() )
    """
# make a canvas, draw, and save it
#c1 = ROOT.TCanvas()
#zmassHist.Draw()
#c1.Print ("zmass_py.png")
