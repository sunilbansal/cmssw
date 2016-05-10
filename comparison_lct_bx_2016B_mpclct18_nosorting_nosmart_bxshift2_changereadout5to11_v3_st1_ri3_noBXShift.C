void comparison_lct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st1_ri3_noBXShift()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 15:28:32 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-3.454839,18.12903,19.57742);
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
   
   TH1D *simCscTriggerPrimitiveDigis__16 = new TH1D("simCscTriggerPrimitiveDigis__16","CSCCorrelatedLCTDigi BX ME1/2",22,-6,16);
   simCscTriggerPrimitiveDigis__16->SetBinContent(12,11);
   simCscTriggerPrimitiveDigis__16->SetBinContent(13,15);
   simCscTriggerPrimitiveDigis__16->SetBinContent(14,17);
   simCscTriggerPrimitiveDigis__16->SetBinContent(15,15);
   simCscTriggerPrimitiveDigis__16->SetBinContent(16,6);
   simCscTriggerPrimitiveDigis__16->SetBinContent(17,13);
   simCscTriggerPrimitiveDigis__16->SetBinContent(18,13);
   simCscTriggerPrimitiveDigis__16->SetEntries(90);
   
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
   AText = ptstats->AddText("Entries = 90     ");
   AText = ptstats->AddText("Mean  =    7.9");
   AText = ptstats->AddText("Std Dev   =  1.972");
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
   simCscTriggerPrimitiveDigis_MPCSORTED__17->SetBinContent(12,11);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->SetBinContent(13,15);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->SetBinContent(14,17);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->SetBinContent(15,15);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->SetBinContent(16,6);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->SetBinContent(17,13);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->SetBinContent(18,13);
   simCscTriggerPrimitiveDigis_MPCSORTED__17->SetEntries(90);
   
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
   AText = ptstats->AddText("Entries = 90     ");
   AText = ptstats->AddText("Mean  =    7.9");
   AText = ptstats->AddText("Std Dev   =  1.972");
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
   csctfDigis__18->SetBinContent(10,11);
   csctfDigis__18->SetBinContent(11,15);
   csctfDigis__18->SetBinContent(12,17);
   csctfDigis__18->SetBinContent(13,15);
   csctfDigis__18->SetBinContent(14,6);
   csctfDigis__18->SetBinContent(15,13);
   csctfDigis__18->SetBinContent(16,13);
   csctfDigis__18->SetEntries(90);
   
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
   AText = ptstats->AddText("Entries = 90     ");
   AText = ptstats->AddText("Mean  =    5.9");
   AText = ptstats->AddText("Std Dev   =  1.972");
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
   muonCSCDigis__19->SetBinContent(7,49);
   muonCSCDigis__19->SetBinContent(8,41);
   muonCSCDigis__19->SetEntries(90);
   
   ptstats = new TPaveStats(0.78,0.2,0.98,0.4,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 90     ");
   AText = ptstats->AddText("Mean  = 0.4556");
   AText = ptstats->AddText("Std Dev   =  0.498");
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
   AText = ptstats->AddText("Entries = 90     ");
   AText = ptstats->AddText("Mean  =    7.9");
   AText = ptstats->AddText("Std Dev   =  1.972");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__20 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__20","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->SetBinContent(12,11);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->SetBinContent(13,15);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->SetBinContent(14,17);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->SetBinContent(15,15);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->SetBinContent(16,6);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->SetBinContent(17,13);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->SetBinContent(18,13);
   simCscTriggerPrimitiveDigis_MPCSORTED__20->SetEntries(90);
   
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
   AText = ptstats->AddText("Entries = 90     ");
   AText = ptstats->AddText("Mean  =    7.9");
   AText = ptstats->AddText("Std Dev   =  1.972");
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
   AText = ptstats->AddText("Entries = 90     ");
   AText = ptstats->AddText("Mean  =    5.9");
   AText = ptstats->AddText("Std Dev   =  1.972");
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
   AText = ptstats->AddText("Entries = 90     ");
   AText = ptstats->AddText("Mean  = 0.4556");
   AText = ptstats->AddText("Std Dev   =  0.498");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.15,0.9343782,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCorrelatedLCTDigi BX ME1/2");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
