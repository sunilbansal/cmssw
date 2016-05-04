from ROOT import *

"""
1) CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_muonCSCDigis_MuonCSCCorrelatedLCTDigi_RAW2DIGI. 145.235 97.11
2) CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis_MPCSORTED_RAW2DIGI. 140.985 96.185
3) CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__RAW2DIGI. 137.835 92.49
4) CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_csctfDigis__RAW2DIGI. 135.135 89.72
"""

gROOT.SetBatch(1)
gStyle.SetStatStyle(0)
gStyle.SetOptStat("nemr")
file = TFile("output_l1.root")
tree = file.Get("Events")

c = TCanvas("c","c",800,800)
c.cd()
#histo=TH1F("histo","", 100, -5,5)
#tree.Draw("elec_eta>>histo", "")

simCscTriggerPrimitiveDigis = TH1D("simCscTriggerPrimitiveDigis","CSCCorrelatedLCTDigi BX; BX; Entries",22,-6,16)
tree.Draw("CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__RAW2DIGI.obj.data_.second.bx>>simCscTriggerPrimitiveDigis")
simCscTriggerPrimitiveDigis.SetLineColor(kRed)
simCscTriggerPrimitiveDigis.Draw()
gPad.Update();

simCscTriggerPrimitiveDigis_st = simCscTriggerPrimitiveDigis.FindObject("stats");
X1 = simCscTriggerPrimitiveDigis_st.GetX1NDC();
Y1 = simCscTriggerPrimitiveDigis_st.GetY1NDC();
X2 = simCscTriggerPrimitiveDigis_st.GetX2NDC();
Y2 = simCscTriggerPrimitiveDigis_st.GetY2NDC();
simCscTriggerPrimitiveDigis_st.SetY1NDC(0.75);
simCscTriggerPrimitiveDigis_st.SetY2NDC(1.);

simCscTriggerPrimitiveDigis_st.SetTextColor(kRed);
#simCscTriggerPrimitiveDigis_st.SetTextSize(0.8);

simCscTriggerPrimitiveDigis_MPCSORTED = TH1D("simCscTriggerPrimitiveDigis_MPCSORTED","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16)
tree.Draw("CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis_MPCSORTED_RAW2DIGI.obj.data_.second.bx>>simCscTriggerPrimitiveDigis_MPCSORTED")
simCscTriggerPrimitiveDigis_MPCSORTED.SetLineColor(kBlue)
simCscTriggerPrimitiveDigis_MPCSORTED.Draw()
gPad.Update();

simCscTriggerPrimitiveDigis_MPCSORTED_st = simCscTriggerPrimitiveDigis_MPCSORTED.FindObject("stats");
simCscTriggerPrimitiveDigis_MPCSORTED_st.SetX1NDC(X1);
simCscTriggerPrimitiveDigis_MPCSORTED_st.SetX2NDC(X2);
simCscTriggerPrimitiveDigis_MPCSORTED_st.SetY1NDC(Y1-(Y2-Y1));
simCscTriggerPrimitiveDigis_MPCSORTED_st.SetY2NDC(Y1);
simCscTriggerPrimitiveDigis_MPCSORTED_st.SetY1NDC(0.5);
simCscTriggerPrimitiveDigis_MPCSORTED_st.SetY2NDC(0.75);

simCscTriggerPrimitiveDigis_MPCSORTED_st.SetTextColor(kBlue);
#simCscTriggerPrimitiveDigis_MPCSORTED_st.SetTextSize(0.8);
 
csctfDigis = TH1D("csctfDigis","csctfDigis",22,-6,16)
tree.Draw("CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_csctfDigis__RAW2DIGI.obj.data_.second.bx>>csctfDigis")
csctfDigis.SetLineColor(kGreen+2)
csctfDigis.Draw()
gPad.Update();

csctfDigis_st = csctfDigis.FindObject("stats");
csctfDigis_st.SetX1NDC(X1);
csctfDigis_st.SetX2NDC(X2);
csctfDigis_st.SetY1NDC(0.25);
csctfDigis_st.SetY2NDC(0.5);
Y5 = csctfDigis_st.GetY1NDC();
Y6 = csctfDigis_st.GetY2NDC();

csctfDigis_st.SetTextColor(kGreen+2);
#csctfDigis_st.SetTextSize(0.8);


muonCSCDigis = TH1D("muonCSCDigis","muonCSCDigis",22,-6,16)
tree.Draw("CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_muonCSCDigis_MuonCSCCorrelatedLCTDigi_RAW2DIGI.obj.data_.second.bx>>muonCSCDigis")
muonCSCDigis.SetLineColor(kBlack)
muonCSCDigis.Draw()
gPad.Update();

muonCSCDigis_st = muonCSCDigis.FindObject("stats");
muonCSCDigis_st.SetX1NDC(X1);
muonCSCDigis_st.SetX2NDC(X2);
muonCSCDigis_st.SetY1NDC(Y5-(Y6-Y5));
muonCSCDigis_st.SetY2NDC(Y5);
muonCSCDigis_st.SetY1NDC(0.);
muonCSCDigis_st.SetY2NDC(0.25);

muonCSCDigis_st.SetTextColor(kBlack);
#muonCSCDigis_st.SetTextSize(0.8);


simCscTriggerPrimitiveDigis.Draw();
simCscTriggerPrimitiveDigis_MPCSORTED.Draw("sames");
csctfDigis.Draw("sames");
muonCSCDigis.Draw("sames");

simCscTriggerPrimitiveDigis_st.Draw("same");
simCscTriggerPrimitiveDigis_MPCSORTED.Draw("same");
csctfDigis_st.Draw("same");
muonCSCDigis_st.Draw("same");

"""
legend=TLegend(0.6,0.6,0.8,0.8)
legend.SetTextSize(0.5)
legend.AddEntry(g, "Old", "l")
legend.AddEntry(h, "SimCscTriggerPrimitiveDigis_MPCSORTED", "l")
legend.Draw("same")
"""

c.SaveAs("test.png")
c.SaveAs("test.C")
