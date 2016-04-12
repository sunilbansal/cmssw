from ROOT import *

gROOT.SetBatch(1)
gStyle.SetStatStyle(0)
gStyle.SetOptStat(1111111111)
file = TFile("out_l1_merged.root")
tree = file.Get("Events")

#histo=TH1F("histo","", 100, -5,5)
#tree.Draw("elec_eta>>histo", "")

def makePlot(lcttype,variable, nBin, minBin, maxBin):
    c = TCanvas("c","c",800,600)
    c.cd()
    old = TH1D("old","CSCDetId" + lcttype + "DigiMuonDigiCollection_simCscTriggerPrimitiveDigisSLHC__L1.obj.data_.second." + variable +"; " + variable +"; Entries",nBin,minBin,maxBin)
    tree.Draw("CSCDetId" + lcttype + "DigiMuonDigiCollection_simCscTriggerPrimitiveDigisSLHC__L1.obj.data_.second." + variable + ">>old")
    old.SetLineColor(kRed)
    old.Draw()
    gPad.Update();
    
    st1 = old.FindObject("stats");
    X1 = st1.GetX1NDC();
    Y1 = st1.GetY1NDC();
    X2 = st1.GetX2NDC();
    Y2 = st1.GetY2NDC();


    new = TH1D("new","New",nBin,minBin,maxBin)
    tree.Draw("CSCDetId" + lcttype + "DigiMuonDigiCollection_simCscTriggerPrimitiveDigis__L1.obj.data_.second." + variable +">>new")
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

    c.SaveAs("" + lcttype + "_" + variable + ".png")

makePlot("CSCALCT","valid_",3,0,3)
makePlot("CSCALCT","bx_",8,4,12)
makePlot("CSCALCT","quality_",8,0,8)
makePlot("CSCALCT","quality_",8,0,8)

makePlot("CSCCLCT","valid_",3,0,3)
makePlot("CSCCLCT","bx_",8,4,12)
makePlot("CSCCLCT","quality_",8,0,8)
