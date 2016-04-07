#! /usr/bin/env python

import ROOT
import sys
from DataFormats.FWLite import Events, Handle

# use Varparsing object
events = Events ('outputPhysicsMuons.root')

# create handle outside of loop
handle  = Handle ("edm::TriggerResults")

# for now, label is just a tuple of strings that is initialized just
# like and edm::InputTag
label = ("TriggerResults")

# Create histograms, etc.
ROOT.gROOT.SetBatch()        # don't pop up canvases
ROOT.gROOT.SetStyle('Plain') # white background

# loop over events
for event in events:
    # use getByLabel, just like in cmsRun
    event.getByLabel (label, handle)
    # get the product
    triggerResults = handle.product()
    print "n paths", triggerResults.size()
    print triggerResults.parameterSetID()
    pset = triggerResults.parameterSetID()
    """
    print triggerEvent
   
    print triggerEvent.collectionTags()
    vector = triggerEvent.collectionTags()
    for vv in vector:
        print vv,

    print triggerEvent.usedProcessName()
    print triggerEvent.collectionKeys(), len(triggerEvent.collectionKeys())
    #keys = triggerEvent.collectionKeys()
    print triggerEvent.getObjects(), len(triggerEvent.getObjects())
    print triggerEvent.collectionTags(), len(triggerEvent.collectionTags())
    #print triggerEvent.getObjects()
    #for key in keys:
    #    print triggerEvent.collectionTagEncoded(key)
    """
