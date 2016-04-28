from ROOT import *

gROOT.SetBatch(1)
gStyle.SetStatStyle(0)
gStyle.SetOptStat(1111111111)
file = TFile("out_l1_merged_10k.root")
tree = file.Get("Events")

#histo=TH1F("histo","", 100, -5,5)
#tree.Draw("elec_eta>>histo", "")

cscnames = {
    1 : {
        1 : "ME1/b",
        2 : "ME1/2",
        3 : "ME1/3",
        4 : "ME1/a",
        },
    2 : {
        1 : "ME2/1",
        2 : "ME2/2",
        3 : "ME2/3",
        },
    3 : {
        2 : "ME3/2",
        3 : "ME3/3",
        },
    3 : {
        2 : "ME4/2",
        3 : "ME4/3",
        },
    }

def makePlot(lcttype,variable, nBin, minBin, maxBin, st=1, ri=1):

    opt = ("CSCDetId" + lcttype + "DigiMuonDigiCollection_simCscTriggerPrimitiveDigisSLHC__L1.obj.data_.first.station()==%d"%(st) + " && " + 
           "CSCDetId" + lcttype + "DigiMuonDigiCollection_simCscTriggerPrimitiveDigisSLHC__L1.obj.data_.first.ring()==%d"%(ri) )

    if st==0 and ri==0:
        sector = "All"
    else:
        sector = cscnames[st][ri]

    c = TCanvas("c","c",800,600)
    c.cd()
    old = TH1D("old","CSCDetId" + lcttype + " " + variable + " " + sector + "; " + variable +"; Entries",nBin,minBin,maxBin)
    tree.Draw("CSCDetId" + lcttype + "DigiMuonDigiCollection_simCscTriggerPrimitiveDigisSLHC__L1.obj.data_.second." + variable + ">>old", opt)
    old.SetLineColor(kRed)
    old.Draw()
    gPad.Update();
    
    st1 = old.FindObject("stats");
    X1 = st1.GetX1NDC();
    Y1 = st1.GetY1NDC();
    X2 = st1.GetX2NDC();
    Y2 = st1.GetY2NDC();


    new = TH1D("new","New",nBin,minBin,maxBin)
    tree.Draw("CSCDetId" + lcttype + "DigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1.obj.data_.second." + variable +">>new", opt)
    new.Draw()
    gPad.Update();

    st2 = new.FindObject("stats");
    st2.SetX1NDC(X1);
    st2.SetX2NDC(X2);
    st2.SetY1NDC(Y1-(Y2-Y1));
    st2.SetY2NDC(Y1);
    
    st1.SetTextColor(kRed);
    st2.SetTextColor(kBlue);
    
    old.Draw();
    new.Draw("sames");
    st1.Draw("same");
    st2.Draw("same");

    c.SaveAs("comparison_plots/" + lcttype + "_" + variable + ".png")

csctypes = [
    (1,1),
    (1,2),
    (1,3),
    (1,4),

    (2,1),
    (2,2),
    (2,3),

    (3,2),
    (3,3),

    (4,2),
    (4,3),
]

makePlot("CSCALCT","valid_",3,0,3,0,0)
makePlot("CSCALCT","bx_",8,4,12,0,0)
makePlot("CSCALCT","quality_",8,0,8,0,0)

makePlot("CSCCLCT","valid_",3,0,3,0,0)
makePlot("CSCCLCT","bx_",8,4,12,0,0)
makePlot("CSCCLCT","quality_",8,0,8,0,0)

makePlot("CSCCorrelatedLCT","valid_",3,0,3,0,0)
makePlot("CSCCorrelatedLCT","bx_",8,4,12,0,0)
makePlot("CSCCorrelatedLCT","quality_",10,10,20,0,0)

for p in csctypes:
    st = p[0]
    ri = p[1]
    makePlot("CSCALCT","valid_",3,0,3,st,ri)
    makePlot("CSCALCT","bx_",8,4,12,st,ri)
    makePlot("CSCALCT","quality_",8,0,8,st,ri)

    makePlot("CSCCLCT","valid_",3,0,3,st,ri)
    makePlot("CSCCLCT","bx_",8,4,12,st,ri)
    makePlot("CSCCLCT","quality_",8,0,8,st,ri)

    makePlot("CSCCorrelatedLCT","valid_",3,0,3,st,ri)
    makePlot("CSCCorrelatedLCT","bx_",8,4,12,st,ri)
    makePlot("CSCCorrelatedLCT","quality_",10,10,20,st,ri)
