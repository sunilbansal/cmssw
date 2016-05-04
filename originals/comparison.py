from ROOT import *

"""
1) CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_muonCSCDigis_MuonCSCCorrelatedLCTDigi_RAW2DIGI. 145.235 97.11
2) CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis_MPCSORTED_RAW2DIGI. 140.985 96.185
3) CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__RAW2DIGI. 137.835 92.49
4) CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_csctfDigis__RAW2DIGI. 135.135 89.72
"""

gROOT.SetBatch(1)
gStyle.SetStatStyle(0)
gStyle.SetOptStat(1111111111)
file = TFile("output_l1.root")
tree = file.Get("Events")

c = TCanvas("c","c",1600,800)
c.cd()
#histo=TH1F("histo","", 100, -5,5)
#tree.Draw("elec_eta>>histo", "")

lct = TH1D("lct","CSCCorrelatedLCTDigi BX; BX; Entries",10,0,10)
tree.Draw("CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__RAW2DIGI.obj.data_.second.bx>>lct")
lct.SetLineColor(kRed)
lct.Draw()
gPad.Update();

lct_st = lct.FindObject("stats");
X1 = lct_st.GetX1NDC();
Y1 = lct_st.GetY1NDC();
X2 = lct_st.GetX2NDC();
Y2 = lct_st.GetY2NDC();

lct_st.SetTextColor(kRed);

mpc_lct = TH1D("mpc_lct","Mpc_Lct",10,0,10)
tree.Draw("CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis_MPCSORTED_RAW2DIGI.obj.data_.second.bx>>mpc_lct")
mpc_lct.Draw()
gPad.Update();

mpc_lct_st = mpc_lct.FindObject("stats");
mpc_lct_st.SetX1NDC(X1);
mpc_lct_st.SetX2NDC(X2);
mpc_lct_st.SetY1NDC(Y1-(Y2-Y1));
mpc_lct_st.SetY2NDC(Y1);

mpc_lct_st.SetTextColor(kBlue);
 
csctf_lct = TH1D("csctf_lct","csctf_Lct",10,0,10)
tree.Draw("CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_csctfDigis__RAW2DIGI.obj.data_.second.bx>>csctf_lct")
csctf_lct.Draw()
gPad.Update();

csctf_st = csctf_lct.FindObject("stats");
csctf_st.SetX1NDC(X1);
csctf_st.SetX2NDC(X2);
csctf_st.SetY1NDC(Y1-(Y2-Y1));
csctf_st.SetY2NDC(Y1);

csctf_st.SetTextColor(kGreen+1);


muonraw_lct = TH1D("muonraw_lct","muonraw_Lct",10,0,10)
tree.Draw("CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_muonCSCDigis_MuonCSCCorrelatedLCTDigi_RAW2DIGI.obj.data_.second.bx>>muonraw_lct")
muonraw_lct.Draw()
gPad.Update();

muonraw_st = muonraw_lct.FindObject("stats");
muonraw_st.SetX1NDC(X1);
muonraw_st.SetX2NDC(X2);
muonraw_st.SetY1NDC(Y1-(Y2-Y1));
muonraw_st.SetY2NDC(Y1);

muonraw_st.SetTextColor(kBlack);


lct.Draw();
mpc_lct.Draw("sames");
csctf_lct.Draw("sames");
muonraw_lct.Draw("sames");

lct_st.Draw("same");
mpc_lct.Draw("same");
csctf_st.Draw("same");
muonraw_st.Draw("same");

"""
legend=TLegend(0.6,0.6,0.8,0.8)
legend.SetTextSize(0.5)
legend.AddEntry(g, "Old", "l")
legend.AddEntry(h, "Mpc_Lct", "l")
legend.Draw("same")
"""

c.SaveAs("test.png")
