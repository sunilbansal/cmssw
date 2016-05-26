from ROOT import *

"""
1) CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_muonCSCDigis_MuonCSCCorrelatedLCTDigi_RAW2DIGI. 145.235 97.11
2) CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis_MPCSORTED_RAW2DIGI. 140.985 96.185
3) CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__RAW2DIGI. 137.835 92.49
4) CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_csctfDigis__RAW2DIGI. 135.135 89.72
"""
cscstations = [ [0,0], 
                [1,1], [1,2], [1,3], [1,4],
                [2,1], [2,2],
                [3,1], [3,2],
                [4,1], [4,2],]
csclabel = {
    1 : {
        0 : {
            0 : "pAll" 
            },
        1 : {
            1 : "pME1b",
            3 : "pME12",
            2 : "pME13",
            4 : "pME1a",
            },
        2 : {
            1 : "pME21",
            2 : "pME22"
            },
        3 : {
            1 : "pME31",
            2 : "pME32"
            },
        4 : {
            1 : "pME41",
            2 : "pME42"
            },
        },
    2 : {
        0 : {
            0 : "mAll" 
            },
        1 : {
            1 : "mME1b",
            3 : "mME12",
            2 : "mME13",
            4 : "mME1a",
            },
        2 : {
            1 : "mME21",
            2 : "mME22"
            },
        3 : {
            1 : "mME31",
            2 : "mME32"
            },
        4 : {
            1 : "mME41",
            2 : "mME42"
            },
        },
    }
gROOT.SetBatch(1)
gStyle.SetStatStyle(0)
gStyle.SetOptStat("nemr")
#file = TFile("output_l1_2016B_fixed.root")
#file = TFile("output_l1_2016B_mpclct18.root")
#file = TFile("output_l1_2016B_mpclct18_nosorting.root")
#file = TFile("output_l1_2016B_original.root")
#file = TFile("output_l1_2016B_mpclct18_nosorting_nosmart.root")
#file = TFile("output_l1_2016B_mpclct18_nosorting_nosmart_changereadout5to11_v2.root")
#file = TFile("output_l1_2016B_mpclct18_nosorting_nosmart_changereadout5to11_v2_clctpretrig2.root")
#file = TFile("output_l1_2016B_mpclct18_nosorting_nosmart_changereadout5to11_v2_clctpretrig2_clcthitpersist6.root")
#file = TFile("output_l1_2016B_mpclct18_nosorting_nosmart_changereadout5to11_v3.root")
#file = TFile("output_l1_2016B_mpclct18_nosorting_nosmart_changereadout5to11_v3_lessoutput.root")
#file = TFile("output_l1_2016B_mpclct18_nosorting_nosmart_changereadout5to11_v4_reboot.root")
#file = TFile("output_l1_2016A_mpclct18_nosorting_nosmart_changereadout5to11_v1.root")
#file = TFile("output_l1_2016A_run_271036_mpclct18_nosorting_nosmart_changereadout5to11_v1.root")
#file = TFile("output_l1_Commissioning2016_run_268955_mpclct18_nosorting_nosmart_changereadout5to11_v1.root")
file = TFile("output_l1_2016B_run_273730.root")
#outputdirectory = "Commissioning2016_run_268955_mpclct18_nosorting_nosmart_changereadout5to11_v1/"
outputdirectory = "2016B_run_273730_10k/"

tree = file.Get("Events")

csccorrelatedlctdigi = {
    0 : ["trknmb", "trknmb",10,0,10],
    1 : ["valid", "valid",20,0,20],
    2 : ["quality", "quality",20,0,20],
    3 : ["keywire", "keywire",150,0,150],
    4 : ["strip", "strip",224,0,224],
    5 : ["pattern", "pattern",16,0,16],
    6 : ["bend", "bend",10,0,10],
    7 : ["bx", "bx",16,0,16],
    8 : ["mpclink", "mpclink",5,0,5],
    9 : ["bx0", "bx0",10,0,10],
    10 : ["syncErr", "syncErr",10,0,10],
    11 : ["cscID", "cscID",15,0,15],
    }

cscalctdigi = {
    0 : ["valid_", "valid",10,0,10],
    1 : ["quality_", "quality",20,0,20],
    2 : ["accel_", "accelerator",10,0,10],
    3 : ["patternb_", "patternb",10,0,10],
    4 : ["keywire_", "keywire",150,0,150],
    5 : ["bx_", "bx",12,0,12],
    6 : ["trknmb_", "trknmb",10,0,10],
    7 : ["fullbx_", "fullbx",10,0,10],
}

cscclctdigi = {
    0 : ["valid_", "valid",10,0,10],
    1 : ["quality_", "quality",16,0,16],
    2 : ["pattern_", "pattern",20,0,20],
    3 : ["striptype_", "striptype",10,0,10],
    4 : ["bend_", "bend",10,0,10],
    5 : ["cfeb_", "cfeb",10,0,10],
    6 : ["strip_", "strip",32,0,32],
    7 : ["bx_", "bx",12,0,12],
    8 : ["trknmb_", "trknmb",10,0,10],
    9 : ["fullbx_", "fullbx",10,0,10],
    10 : ["getKeyStrip()", "keyStrip",224,0,224],
    }

def compareLCTs(endcap, station, ring, variable):

    var = csccorrelatedlctdigi[variable][0]
    varstr = csccorrelatedlctdigi[variable][1]
    varnbin = csccorrelatedlctdigi[variable][2]
    varminbin = csccorrelatedlctdigi[variable][3]
    varmaxbin = csccorrelatedlctdigi[variable][4]

    extraCut = "strip >= 0"
    realRing = ring
    
    if station==1 and ring==1:
        extraCut = "strip < 128"

    if station==1 and ring==4:
        extraCut = "strip >= 128"
        realRing = 1

    c = TCanvas("c","c",800,800)
    c.cd()

    simCscTriggerPrimitiveDigis = TH1D("simCscTriggerPrimitiveDigis","CSCCorrelatedLCTDigi " + varstr + " " + 
                                       csclabel[endcap][station][ring] + "; " + varstr + "; Entries",varnbin,varminbin,varmaxbin)
    collection = "CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__RAW2DIGI"
    if station==0 and realRing==0:
        tree.Draw(collection + ".obj.data_.second." + var + ">>simCscTriggerPrimitiveDigis",
                  collection + ".obj.data_.first.endcap() == %d"%(endcap))
    else:
        tree.Draw(collection + ".obj.data_.second." + var + ">>simCscTriggerPrimitiveDigis",
                  collection + ".obj.data_.first.endcap() == %d && "%(endcap) + 
                  collection + ".obj.data_.first.station() == %d && "%(station) + 
                  collection + ".obj.data_.first.ring()    == %d && "%(realRing) +
                  collection + ".obj.data_.second." + extraCut)
    
    simCscTriggerPrimitiveDigis.SetLineColor(kRed)
    simCscTriggerPrimitiveDigis.Draw()
    gPad.Update();
    
    simCscTriggerPrimitiveDigis_st = simCscTriggerPrimitiveDigis.FindObject("stats");
    X1 = simCscTriggerPrimitiveDigis_st.GetX1NDC();
    Y1 = simCscTriggerPrimitiveDigis_st.GetY1NDC();
    X2 = simCscTriggerPrimitiveDigis_st.GetX2NDC();
    Y2 = simCscTriggerPrimitiveDigis_st.GetY2NDC();
    simCscTriggerPrimitiveDigis_st.SetY1NDC(0.8);
    simCscTriggerPrimitiveDigis_st.SetY2NDC(1.);
    simCscTriggerPrimitiveDigis_st.SetTextColor(kRed);

    simCscTriggerPrimitiveDigis_MPCSORTED = TH1D("simCscTriggerPrimitiveDigis_MPCSORTED","SimCscTriggerPrimitiveDigis_MPCSORTED",
                                                 varnbin,varminbin,varmaxbin)
    collection = "CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis_MPCSORTED_RAW2DIGI"
    if station==0 and realRing==0:
        tree.Draw(collection + ".obj.data_.second." + var + ">>simCscTriggerPrimitiveDigis_MPCSORTED",
                  collection + ".obj.data_.first.endcap() == %d"%(endcap))
    else:
        tree.Draw(collection + ".obj.data_.second." + var + ">>simCscTriggerPrimitiveDigis_MPCSORTED",
                  collection + ".obj.data_.first.endcap() == %d && "%(endcap) +
                  collection + ".obj.data_.first.station()==%d && "%(station) + 
                  collection + ".obj.data_.first.ring()==%d && "%(realRing) + 
                  collection + ".obj.data_.second." + extraCut)
    simCscTriggerPrimitiveDigis_MPCSORTED.SetLineColor(kBlue)
    simCscTriggerPrimitiveDigis_MPCSORTED.Draw()
    gPad.Update();
    
    simCscTriggerPrimitiveDigis_MPCSORTED_st = simCscTriggerPrimitiveDigis_MPCSORTED.FindObject("stats");
    simCscTriggerPrimitiveDigis_MPCSORTED_st.SetX1NDC(X1);
    simCscTriggerPrimitiveDigis_MPCSORTED_st.SetX2NDC(X2);
    simCscTriggerPrimitiveDigis_MPCSORTED_st.SetY1NDC(Y1-(Y2-Y1));
    simCscTriggerPrimitiveDigis_MPCSORTED_st.SetY2NDC(Y1);
    simCscTriggerPrimitiveDigis_MPCSORTED_st.SetY1NDC(0.6);
    simCscTriggerPrimitiveDigis_MPCSORTED_st.SetY2NDC(0.8);
    simCscTriggerPrimitiveDigis_MPCSORTED_st.SetTextColor(kBlue);
 
    csctfDigis = TH1D("csctfDigis","csctfDigis",varnbin,varminbin,varmaxbin)
    collection = "CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_csctfDigis__RAW2DIGI"
    if station==0 and realRing==0:
        tree.Draw(collection + ".obj.data_.second." + var + ">>csctfDigis",
                  collection + ".obj.data_.first.endcap() == %d"%(endcap))
    else:
        tree.Draw(collection + ".obj.data_.second." + var + ">>csctfDigis",
                  collection + ".obj.data_.first.endcap() == %d && "%(endcap) +
                  collection + ".obj.data_.first.station()==%d && "%(station) + 
                  collection + ".obj.data_.first.ring()==%d && "%(realRing) + 
                  collection + ".obj.data_.second." + extraCut)
    csctfDigis.SetLineColor(kGreen+2)
    csctfDigis.Draw()
    gPad.Update();

    csctfDigis_st = csctfDigis.FindObject("stats");
    csctfDigis_st.SetX1NDC(X1);
    csctfDigis_st.SetX2NDC(X2);
    csctfDigis_st.SetY1NDC(0.4);
    csctfDigis_st.SetY2NDC(0.6);
    csctfDigis_st.SetTextColor(kGreen+2);
    Y5 = csctfDigis_st.GetY1NDC();
    Y6 = csctfDigis_st.GetY2NDC();

    muonCSCDigis = TH1D("muonCSCDigis","muonCSCDigis",varnbin,varminbin,varmaxbin)
    collection = "CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_muonCSCDigis_MuonCSCCorrelatedLCTDigi_RAW2DIGI"
    if station==0 and realRing==0:
        tree.Draw(collection + ".obj.data_.second." + var + ">>muonCSCDigis",
                  collection + ".obj.data_.first.endcap() == %d"%(endcap))
    else:
        tree.Draw(collection + ".obj.data_.second." + var + ">>muonCSCDigis",
                  collection + ".obj.data_.first.endcap() == %d && "%(endcap) +
                  collection + ".obj.data_.first.station()==%d && "%(station) + 
                  collection + ".obj.data_.first.ring()==%d && "%(realRing) + 
                  collection + ".obj.data_.second." + extraCut)
    muonCSCDigis.SetLineColor(kBlack)
    muonCSCDigis.Draw()
    gPad.Update();

    muonCSCDigis_st = muonCSCDigis.FindObject("stats");
    muonCSCDigis_st.SetX1NDC(X1);
    muonCSCDigis_st.SetX2NDC(X2);
    muonCSCDigis_st.SetY1NDC(Y5-(Y6-Y5));
    muonCSCDigis_st.SetY2NDC(Y5);
    muonCSCDigis_st.SetY1NDC(0.2);
    muonCSCDigis_st.SetY2NDC(0.4);
    muonCSCDigis_st.SetTextColor(kBlack);

    simCscTriggerPrimitiveDigis.Draw();
    simCscTriggerPrimitiveDigis_MPCSORTED.Draw("sames");
    csctfDigis.Draw("sames");
    muonCSCDigis.Draw("sames");
    
    simCscTriggerPrimitiveDigis_st.Draw("same");
    simCscTriggerPrimitiveDigis_MPCSORTED.Draw("same");
    csctfDigis_st.Draw("same");
    muonCSCDigis_st.Draw("same");
    
    c.SaveAs(outputdirectory  + "comparison_lct_" + varstr + "_" + csclabel[endcap][station][ring] + ".png")

def compareALCTs(endcap, station, ring, variable):

    var = cscalctdigi[variable][0]
    varstr = cscalctdigi[variable][1]
    varnbin = cscalctdigi[variable][2]
    varminbin = cscalctdigi[variable][3]
    varmaxbin = cscalctdigi[variable][4]

    if station==1 and ring==1:
        realLabel = "ME11"
    else:
        realLabel = csclabel[endcap][station][ring]

    c = TCanvas("c","c",800,800)
    c.cd()

    simCscTriggerPrimitiveDigis = TH1D("simCscTriggerPrimitiveDigis","CSCALCTDigi " + varstr + " " + 
                                       realLabel + "; " + varstr + "; Entries",varnbin,varminbin,varmaxbin)
    collection = "CSCDetIdCSCALCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__RAW2DIGI"
    if station==0 and ring==0:
        tree.Draw(collection + ".obj.data_.second." + var + ">>simCscTriggerPrimitiveDigis",
                  collection + ".obj.data_.first.endcap() == %d"%(endcap))
    else:
        tree.Draw(collection + ".obj.data_.second." + var + ">>simCscTriggerPrimitiveDigis",
                  collection + ".obj.data_.first.endcap() == %d && "%(endcap) +
                  collection + ".obj.data_.first.station()==%d && "%(station) + 
                  collection + ".obj.data_.first.ring()==%d"%(ring))
    
    simCscTriggerPrimitiveDigis.SetLineColor(kRed)
    simCscTriggerPrimitiveDigis.Draw()
    gPad.Update();
    
    simCscTriggerPrimitiveDigis_st = simCscTriggerPrimitiveDigis.FindObject("stats");
    X1 = simCscTriggerPrimitiveDigis_st.GetX1NDC();
    Y1 = simCscTriggerPrimitiveDigis_st.GetY1NDC();
    X2 = simCscTriggerPrimitiveDigis_st.GetX2NDC();
    Y2 = simCscTriggerPrimitiveDigis_st.GetY2NDC();
    simCscTriggerPrimitiveDigis_st.SetY1NDC(0.8);
    simCscTriggerPrimitiveDigis_st.SetY2NDC(1.);
    simCscTriggerPrimitiveDigis_st.SetTextColor(kRed);


    muonCSCDigis = TH1D("muonCSCDigis","muonCSCDigis",varnbin,varminbin,varmaxbin)
    collection = "CSCDetIdCSCALCTDigiMuonDigiCollection_muonCSCDigis_MuonCSCALCTDigi_RAW2DIGI"
    if station==0 and ring==0:
        tree.Draw(collection + ".obj.data_.second." + var + ">>muonCSCDigis",
                  collection + ".obj.data_.first.endcap() == %d"%(endcap))
    else:
        tree.Draw(collection + ".obj.data_.second." + var + ">>muonCSCDigis",
                  collection + ".obj.data_.first.endcap() == %d && "%(endcap) +
                  collection + ".obj.data_.first.station()==%d && "%(station) + 
                  collection + ".obj.data_.first.ring()==%d"%(ring))
    muonCSCDigis.SetLineColor(kBlack)
    muonCSCDigis.Draw()
    gPad.Update();

    muonCSCDigis_st = muonCSCDigis.FindObject("stats");
    muonCSCDigis_st.SetX1NDC(X1);
    muonCSCDigis_st.SetX2NDC(X2);
    muonCSCDigis_st.SetY1NDC(Y1-(Y2-Y1));
    muonCSCDigis_st.SetY2NDC(Y1);
    muonCSCDigis_st.SetY1NDC(0.2);
    muonCSCDigis_st.SetY2NDC(0.4);
    muonCSCDigis_st.SetTextColor(kBlack);

    simCscTriggerPrimitiveDigis.Draw();
    muonCSCDigis.Draw("sames");
    
    simCscTriggerPrimitiveDigis_st.Draw("same");
    muonCSCDigis_st.Draw("same");

    c.SaveAs(outputdirectory  + "comparison_alct_" + varstr + "_" + csclabel[endcap][station][ring] + ".png")


def compareCLCTs(endcap, station, ring, variable):

    var = cscclctdigi[variable][0]
    varstr = cscclctdigi[variable][1]
    varnbin = cscclctdigi[variable][2]
    varminbin = cscclctdigi[variable][3]
    varmaxbin = cscclctdigi[variable][4]

    extraCut = "getKeyStrip() >=0"
    realRing = ring

    if station==1 and ring==1:
        extraCut = "getKeyStrip() <128"

    if station==1 and ring==4:
        realRing = 1
        extraCut = "getKeyStrip() >=128"

    c = TCanvas("c","c",800,800)
    c.cd()

    simCscTriggerPrimitiveDigis = TH1D("simCscTriggerPrimitiveDigis","CSCCLCTDigi " + varstr + " " + 
                                       csclabel[endcap][station][ring] + "; " + varstr + "; Entries",varnbin,varminbin,varmaxbin)
    collection = "CSCDetIdCSCCLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__RAW2DIGI"
    if station==0 and realRing==0:
        tree.Draw(collection + ".obj.data_.second." + var + ">>simCscTriggerPrimitiveDigis",
                  collection + ".obj.data_.first.endcap() == %d"%(endcap))
    else:
        tree.Draw(collection + ".obj.data_.second." + var + ">>simCscTriggerPrimitiveDigis",
                  collection + ".obj.data_.first.endcap() == %d && "%(endcap) +
                  collection + ".obj.data_.first.station()==%d && "%(station) + 
                  collection + ".obj.data_.first.ring()==%d && "%(realRing) +
                  collection + ".obj.data_.second." + extraCut)
    
    simCscTriggerPrimitiveDigis.SetLineColor(kRed)
    simCscTriggerPrimitiveDigis.Draw()
    gPad.Update();
    
    simCscTriggerPrimitiveDigis_st = simCscTriggerPrimitiveDigis.FindObject("stats");
    X1 = simCscTriggerPrimitiveDigis_st.GetX1NDC();
    Y1 = simCscTriggerPrimitiveDigis_st.GetY1NDC();
    X2 = simCscTriggerPrimitiveDigis_st.GetX2NDC();
    Y2 = simCscTriggerPrimitiveDigis_st.GetY2NDC();
    simCscTriggerPrimitiveDigis_st.SetY1NDC(0.8);
    simCscTriggerPrimitiveDigis_st.SetY2NDC(1.);
    simCscTriggerPrimitiveDigis_st.SetTextColor(kRed);


    muonCSCDigis = TH1D("muonCSCDigis","muonCSCDigis",varnbin,varminbin,varmaxbin)
    collection = "CSCDetIdCSCCLCTDigiMuonDigiCollection_muonCSCDigis_MuonCSCCLCTDigi_RAW2DIGI"
    if station==0 and realRing==0:
        tree.Draw(collection + ".obj.data_.second." + var + ">>muonCSCDigis",
                  collection + ".obj.data_.first.endcap() == %d"%(endcap))
    else:
        tree.Draw(collection + ".obj.data_.second." + var + ">>muonCSCDigis",
                  collection + ".obj.data_.first.endcap() == %d && "%(endcap) +
                  collection + ".obj.data_.first.station()==%d && "%(station) + 
                  collection + ".obj.data_.first.ring()==%d"%(realRing)
                  + " && " + collection + ".obj.data_.second." + extraCut)
    muonCSCDigis.SetLineColor(kBlack)
    muonCSCDigis.Draw()
    gPad.Update();

    muonCSCDigis_st = muonCSCDigis.FindObject("stats");
    muonCSCDigis_st.SetX1NDC(X1);
    muonCSCDigis_st.SetX2NDC(X2);
    muonCSCDigis_st.SetY1NDC(Y1-(Y2-Y1));
    muonCSCDigis_st.SetY2NDC(Y2);
    muonCSCDigis_st.SetY1NDC(0.2);
    muonCSCDigis_st.SetY2NDC(0.4);
    muonCSCDigis_st.SetTextColor(kBlack);

    simCscTriggerPrimitiveDigis.Draw();
    muonCSCDigis.Draw("sames");
    
    simCscTriggerPrimitiveDigis_st.Draw("same");
    muonCSCDigis_st.Draw("same");
    
    c.SaveAs(outputdirectory  + "comparison_clct_" + varstr + "_" + csclabel[endcap][station][ring] + ".png")

def compareLCTsAll():
    for i in range(0,12):
        for p in cscstations:
            compareLCTs(1,p[0],p[1],i)
            compareLCTs(2,p[0],p[1],i)

def compareALCTsAll():
    for i in range(0,8):
        for p in cscstations:
            if p[0]==1 and p[1]==4 : continue
            compareALCTs(1,p[0],p[1],i)
            compareALCTs(2,p[0],p[1],i)
        
def compareCLCTsAll():
    for i in range(0,11):
        for p in cscstations:
            compareCLCTs(1,p[0],p[1],i)
            compareCLCTs(2,p[0],p[1],i)
        
compareLCTsAll()
compareALCTsAll()
compareCLCTsAll()
