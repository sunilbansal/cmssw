void comparison_lct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st1_ri2_noBXShift()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 01:08:01 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-4.064516,18.12903,23.03226);
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
   
   TH1D *simCscTriggerPrimitiveDigis__16 = new TH1D("simCscTriggerPrimitiveDigis__16","CSCCorrelatedLCTDigi BX ME1/3",22,-6,16);
   simCscTriggerPrimitiveDigis__16->SetBinContent(12,15);
   simCscTriggerPrimitiveDigis__16->SetBinContent(13,9);
   simCscTriggerPrimitiveDigis__16->SetBinContent(14,20);
   simCscTriggerPrimitiveDigis__16->SetBinContent(15,19);
   simCscTriggerPrimitiveDigis__16->SetBinContent(16,6);
   simCscTriggerPrimitiveDigis__16->SetBinContent(17,11);
   simCscTriggerPrimitiveDigis__16->SetBinContent(18,16);
   simCscTriggerPrimitiveDigis__16->SetEntries(96);
   
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
   AText = ptstats->AddText("Entries = 96     ");
   AText = ptstats->AddText("Mean  =  7.927");
   AText = ptstats->AddText("Std Dev   =  2.001");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__16->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__16);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__16->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__16->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__16->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__16->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__16->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__16->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__16->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__16->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__16->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__16->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__16->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__16->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__16->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__16->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__16->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__16->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__16->Draw("");
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__17 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__17","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->SetBinContent(12,15);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->SetBinContent(13,9);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->SetBinContent(14,20);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->SetBinContent(15,19);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->SetBinContent(16,6);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->SetBinContent(17,11);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->SetBinContent(18,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->SetEntries(96);
   
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
   AText = ptstats->AddText("Entries = 96     ");
   AText = ptstats->AddText("Mean  =  7.927");
   AText = ptstats->AddText("Std Dev   =  2.001");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis_MPCSORTED__17->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis_MPCSORTED__17);

   ci = TColor::GetColor("#0000ff");
   simCscTriggerPrimitiveDigis_MPCSORTED__17->SetLineColor(ci);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->Draw("sames");
   
   TH1D *csctfDigis__18 = new TH1D("csctfDigis__18","csctfDigis",22,-6,16);
   csctfDigis__18->SetBinContent(10,15);
   csctfDigis__18->SetBinContent(11,9);
   csctfDigis__18->SetBinContent(12,20);
   csctfDigis__18->SetBinContent(13,19);
   csctfDigis__18->SetBinContent(14,6);
   csctfDigis__18->SetBinContent(15,11);
   csctfDigis__18->SetBinContent(16,15);
   csctfDigis__18->SetEntries(95);
   
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
   AText = ptstats->AddText("Entries = 95     ");
   AText = ptstats->AddText("Mean  =  5.895");
   AText = ptstats->AddText("Std Dev   =  1.987");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   csctfDigis__18->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(csctfDigis__18);

   ci = TColor::GetColor("#009900");
   csctfDigis__18->SetLineColor(ci);
   csctfDigis__18->SetMarkerStyle(8);
   csctfDigis__18->GetXaxis()->SetLabelFont(42);
   csctfDigis__18->GetXaxis()->SetLabelSize(0.035);
   csctfDigis__18->GetXaxis()->SetTitleSize(0.06);
   csctfDigis__18->GetXaxis()->SetTitleFont(42);
   csctfDigis__18->GetYaxis()->SetLabelFont(42);
   csctfDigis__18->GetYaxis()->SetLabelSize(0.035);
   csctfDigis__18->GetYaxis()->SetTitleSize(0.06);
   csctfDigis__18->GetYaxis()->SetTitleFont(42);
   csctfDigis__18->GetZaxis()->SetLabelFont(42);
   csctfDigis__18->GetZaxis()->SetLabelSize(0.035);
   csctfDigis__18->GetZaxis()->SetTitleSize(0.06);
   csctfDigis__18->GetZaxis()->SetTitleFont(42);
   csctfDigis__18->Draw("sames");
   
   TH1D *muonCSCDigis__19 = new TH1D("muonCSCDigis__19","muonCSCDigis",22,-6,16);
   muonCSCDigis__19->SetBinContent(7,40);
   muonCSCDigis__19->SetBinContent(8,56);
   muonCSCDigis__19->SetEntries(96);
   
   ptstats = new TPaveStats(0.78,0.2,0.98,0.4,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 96     ");
   AText = ptstats->AddText("Mean  = 0.5833");
   AText = ptstats->AddText("Std Dev   =  0.493");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__19->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__19);
   muonCSCDigis__19->SetMarkerStyle(8);
   muonCSCDigis__19->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__19->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__19->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__19->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__19->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__19->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__19->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__19->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__19->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__19->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__19->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__19->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__19->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 96     ");
   AText = ptstats->AddText("Mean  =  7.927");
   AText = ptstats->AddText("Std Dev   =  2.001");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__20 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__20","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->SetBinContent(12,15);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->SetBinContent(13,9);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->SetBinContent(14,20);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->SetBinContent(15,19);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->SetBinContent(16,6);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->SetBinContent(17,11);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->SetBinContent(18,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->SetEntries(96);
   
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
   AText = ptstats->AddText("Entries = 96     ");
   AText = ptstats->AddText("Mean  =  7.927");
   AText = ptstats->AddText("Std Dev   =  2.001");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis_MPCSORTED__20->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis_MPCSORTED__20);

   ci = TColor::GetColor("#0000ff");
   simCscTriggerPrimitiveDigis_MPCSORTED__20->SetLineColor(ci);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->Draw("same");
   
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
   AText = ptstats->AddText("Entries = 95     ");
   AText = ptstats->AddText("Mean  =  5.895");
   AText = ptstats->AddText("Std Dev   =  1.987");
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
   AText = ptstats->AddText("Entries = 96     ");
   AText = ptstats->AddText("Mean  = 0.5833");
   AText = ptstats->AddText("Std Dev   =  0.493");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.15,0.9343782,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCorrelatedLCTDigi BX ME1/3");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
