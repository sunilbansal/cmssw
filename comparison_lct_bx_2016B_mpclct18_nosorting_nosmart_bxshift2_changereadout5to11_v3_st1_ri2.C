void comparison_lct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st1_ri2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 02:22:05 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-8.941935,18.12903,50.67097);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.15);
   c->SetRightMargin(0.075);
   c->SetTopMargin(0.075);
   c->SetBottomMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1D *simCscTriggerPrimitiveDigis__11 = new TH1D("simCscTriggerPrimitiveDigis__11","CSCCorrelatedLCTDigi BX",22,-6,16);
   simCscTriggerPrimitiveDigis__11->SetBinContent(10,33);
   simCscTriggerPrimitiveDigis__11->SetBinContent(11,23);
   simCscTriggerPrimitiveDigis__11->SetBinContent(12,32);
   simCscTriggerPrimitiveDigis__11->SetBinContent(13,44);
   simCscTriggerPrimitiveDigis__11->SetBinContent(14,19);
   simCscTriggerPrimitiveDigis__11->SetBinContent(15,35);
   simCscTriggerPrimitiveDigis__11->SetBinContent(16,37);
   simCscTriggerPrimitiveDigis__11->SetEntries(223);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.8,0.98,1,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   TText *AText = ptstats->AddText("simCscTriggerPrimitiveDigis");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 223    ");
   AText = ptstats->AddText("Mean  =  6.103");
   AText = ptstats->AddText("Std Dev   =  2.021");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__11->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__11);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__11->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__11->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__11->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__11->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__11->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__11->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__11->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__11->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__11->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__11->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__11->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__11->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__11->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__11->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__11->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__11->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__11->Draw("");
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__12 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__12","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->SetBinContent(10,33);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->SetBinContent(11,23);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->SetBinContent(12,32);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->SetBinContent(13,44);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->SetBinContent(14,19);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->SetBinContent(15,35);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->SetBinContent(16,37);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->SetEntries(223);
   
   ptstats = new TPaveStats(0.78,0.6,0.98,0.8,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0000ff");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("simCscTriggerPrimitiveDigis_MPCSORTED");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 223    ");
   AText = ptstats->AddText("Mean  =  6.103");
   AText = ptstats->AddText("Std Dev   =  2.021");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis_MPCSORTED__12->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis_MPCSORTED__12);

   ci = TColor::GetColor("#0000ff");
   simCscTriggerPrimitiveDigis_MPCSORTED__12->SetLineColor(ci);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->Draw("sames");
   
   TH1D *csctfDigis__13 = new TH1D("csctfDigis__13","csctfDigis",22,-6,16);
   csctfDigis__13->SetBinContent(10,33);
   csctfDigis__13->SetBinContent(11,23);
   csctfDigis__13->SetBinContent(12,32);
   csctfDigis__13->SetBinContent(13,44);
   csctfDigis__13->SetBinContent(14,19);
   csctfDigis__13->SetBinContent(15,35);
   csctfDigis__13->SetBinContent(16,36);
   csctfDigis__13->SetEntries(222);
   
   ptstats = new TPaveStats(0.78,0.4,0.98,0.6,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#009900");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("csctfDigis");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 222    ");
   AText = ptstats->AddText("Mean  =   6.09");
   AText = ptstats->AddText("Std Dev   =  2.016");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   csctfDigis__13->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(csctfDigis__13);

   ci = TColor::GetColor("#009900");
   csctfDigis__13->SetLineColor(ci);
   csctfDigis__13->SetMarkerStyle(8);
   csctfDigis__13->GetXaxis()->SetLabelFont(42);
   csctfDigis__13->GetXaxis()->SetLabelSize(0.035);
   csctfDigis__13->GetXaxis()->SetTitleSize(0.06);
   csctfDigis__13->GetXaxis()->SetTitleFont(42);
   csctfDigis__13->GetYaxis()->SetLabelFont(42);
   csctfDigis__13->GetYaxis()->SetLabelSize(0.035);
   csctfDigis__13->GetYaxis()->SetTitleSize(0.06);
   csctfDigis__13->GetYaxis()->SetTitleFont(42);
   csctfDigis__13->GetZaxis()->SetLabelFont(42);
   csctfDigis__13->GetZaxis()->SetLabelSize(0.035);
   csctfDigis__13->GetZaxis()->SetTitleSize(0.06);
   csctfDigis__13->GetZaxis()->SetTitleFont(42);
   csctfDigis__13->Draw("sames");
   
   TH1D *muonCSCDigis__14 = new TH1D("muonCSCDigis__14","muonCSCDigis",22,-6,16);
   muonCSCDigis__14->SetBinContent(7,99);
   muonCSCDigis__14->SetBinContent(8,124);
   muonCSCDigis__14->SetEntries(223);
   
   ptstats = new TPaveStats(0.78,0.2,0.98,0.4,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 223    ");
   AText = ptstats->AddText("Mean  = 0.5561");
   AText = ptstats->AddText("Std Dev   = 0.4968");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__14->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__14);
   muonCSCDigis__14->SetMarkerStyle(8);
   muonCSCDigis__14->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__14->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__14->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__14->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__14->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__14->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__14->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__14->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__14->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__14->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__14->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__14->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__14->Draw("sames");
   
   ptstats = new TPaveStats(0.78,0.8,0.98,1,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#ff0000");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("simCscTriggerPrimitiveDigis");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 223    ");
   AText = ptstats->AddText("Mean  =  6.103");
   AText = ptstats->AddText("Std Dev   =  2.021");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__15 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__15","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->SetBinContent(10,33);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->SetBinContent(11,23);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->SetBinContent(12,32);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->SetBinContent(13,44);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->SetBinContent(14,19);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->SetBinContent(15,35);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->SetBinContent(16,37);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->SetEntries(223);
   
   ptstats = new TPaveStats(0.78,0.6,0.98,0.8,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0000ff");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("simCscTriggerPrimitiveDigis_MPCSORTED");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 223    ");
   AText = ptstats->AddText("Mean  =  6.103");
   AText = ptstats->AddText("Std Dev   =  2.021");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis_MPCSORTED__15->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis_MPCSORTED__15);

   ci = TColor::GetColor("#0000ff");
   simCscTriggerPrimitiveDigis_MPCSORTED__15->SetLineColor(ci);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->Draw("same");
   
   ptstats = new TPaveStats(0.78,0.4,0.98,0.6,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#009900");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("csctfDigis");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 222    ");
   AText = ptstats->AddText("Mean  =   6.09");
   AText = ptstats->AddText("Std Dev   =  2.016");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   ptstats = new TPaveStats(0.78,0.2,0.98,0.4,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 223    ");
   AText = ptstats->AddText("Mean  = 0.5561");
   AText = ptstats->AddText("Std Dev   = 0.4968");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.1734171,0.9343782,0.8265829,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCorrelatedLCTDigi BX");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
