void comparison_lct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st4_ri2_noBXShift()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 01:08:02 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-5.080645,18.12903,28.79032);
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
   
   TH1D *simCscTriggerPrimitiveDigis__51 = new TH1D("simCscTriggerPrimitiveDigis__51","CSCCorrelatedLCTDigi BX ME4/2",22,-6,16);
   simCscTriggerPrimitiveDigis__51->SetBinContent(12,21);
   simCscTriggerPrimitiveDigis__51->SetBinContent(13,18);
   simCscTriggerPrimitiveDigis__51->SetBinContent(14,12);
   simCscTriggerPrimitiveDigis__51->SetBinContent(15,20);
   simCscTriggerPrimitiveDigis__51->SetBinContent(16,14);
   simCscTriggerPrimitiveDigis__51->SetBinContent(17,24);
   simCscTriggerPrimitiveDigis__51->SetBinContent(18,25);
   simCscTriggerPrimitiveDigis__51->SetEntries(134);
   
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
   AText = ptstats->AddText("Entries = 134    ");
   AText = ptstats->AddText("Mean  =  8.194");
   AText = ptstats->AddText("Std Dev   =  2.121");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__51->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__51);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__51->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__51->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__51->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__51->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__51->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__51->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__51->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__51->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__51->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__51->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__51->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__51->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__51->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__51->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__51->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__51->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__51->Draw("");
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__52 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__52","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__52->SetBinContent(12,21);
   simCscTriggerPrimitiveDigis_MPCSORTED__52->SetBinContent(13,18);
   simCscTriggerPrimitiveDigis_MPCSORTED__52->SetBinContent(14,12);
   simCscTriggerPrimitiveDigis_MPCSORTED__52->SetBinContent(15,20);
   simCscTriggerPrimitiveDigis_MPCSORTED__52->SetBinContent(16,14);
   simCscTriggerPrimitiveDigis_MPCSORTED__52->SetBinContent(17,24);
   simCscTriggerPrimitiveDigis_MPCSORTED__52->SetBinContent(18,25);
   simCscTriggerPrimitiveDigis_MPCSORTED__52->SetEntries(134);
   
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
   AText = ptstats->AddText("Entries = 134    ");
   AText = ptstats->AddText("Mean  =  8.194");
   AText = ptstats->AddText("Std Dev   =  2.121");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis_MPCSORTED__52->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis_MPCSORTED__52);

   ci = TColor::GetColor("#0000ff");
   simCscTriggerPrimitiveDigis_MPCSORTED__52->SetLineColor(ci);
   simCscTriggerPrimitiveDigis_MPCSORTED__52->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis_MPCSORTED__52->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__52->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__52->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__52->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__52->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__52->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__52->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__52->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__52->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__52->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__52->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__52->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__52->Draw("sames");
   
   TH1D *csctfDigis__53 = new TH1D("csctfDigis__53","csctfDigis",22,-6,16);
   csctfDigis__53->SetBinContent(10,21);
   csctfDigis__53->SetBinContent(11,18);
   csctfDigis__53->SetBinContent(12,12);
   csctfDigis__53->SetBinContent(13,20);
   csctfDigis__53->SetBinContent(14,14);
   csctfDigis__53->SetBinContent(15,24);
   csctfDigis__53->SetBinContent(16,25);
   csctfDigis__53->SetEntries(134);
   
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
   AText = ptstats->AddText("Entries = 134    ");
   AText = ptstats->AddText("Mean  =  6.194");
   AText = ptstats->AddText("Std Dev   =  2.121");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   csctfDigis__53->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(csctfDigis__53);

   ci = TColor::GetColor("#009900");
   csctfDigis__53->SetLineColor(ci);
   csctfDigis__53->SetMarkerStyle(8);
   csctfDigis__53->GetXaxis()->SetLabelFont(42);
   csctfDigis__53->GetXaxis()->SetLabelSize(0.035);
   csctfDigis__53->GetXaxis()->SetTitleSize(0.06);
   csctfDigis__53->GetXaxis()->SetTitleFont(42);
   csctfDigis__53->GetYaxis()->SetLabelFont(42);
   csctfDigis__53->GetYaxis()->SetLabelSize(0.035);
   csctfDigis__53->GetYaxis()->SetTitleSize(0.06);
   csctfDigis__53->GetYaxis()->SetTitleFont(42);
   csctfDigis__53->GetZaxis()->SetLabelFont(42);
   csctfDigis__53->GetZaxis()->SetLabelSize(0.035);
   csctfDigis__53->GetZaxis()->SetTitleSize(0.06);
   csctfDigis__53->GetZaxis()->SetTitleFont(42);
   csctfDigis__53->Draw("sames");
   
   TH1D *muonCSCDigis__54 = new TH1D("muonCSCDigis__54","muonCSCDigis",22,-6,16);
   muonCSCDigis__54->SetBinContent(7,81);
   muonCSCDigis__54->SetBinContent(8,53);
   muonCSCDigis__54->SetEntries(134);
   
   ptstats = new TPaveStats(0.78,0.2,0.98,0.4,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 134    ");
   AText = ptstats->AddText("Mean  = 0.3955");
   AText = ptstats->AddText("Std Dev   =  0.489");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__54->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__54);
   muonCSCDigis__54->SetMarkerStyle(8);
   muonCSCDigis__54->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__54->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__54->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__54->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__54->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__54->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__54->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__54->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__54->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__54->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__54->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__54->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__54->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 134    ");
   AText = ptstats->AddText("Mean  =  8.194");
   AText = ptstats->AddText("Std Dev   =  2.121");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__55 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__55","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__55->SetBinContent(12,21);
   simCscTriggerPrimitiveDigis_MPCSORTED__55->SetBinContent(13,18);
   simCscTriggerPrimitiveDigis_MPCSORTED__55->SetBinContent(14,12);
   simCscTriggerPrimitiveDigis_MPCSORTED__55->SetBinContent(15,20);
   simCscTriggerPrimitiveDigis_MPCSORTED__55->SetBinContent(16,14);
   simCscTriggerPrimitiveDigis_MPCSORTED__55->SetBinContent(17,24);
   simCscTriggerPrimitiveDigis_MPCSORTED__55->SetBinContent(18,25);
   simCscTriggerPrimitiveDigis_MPCSORTED__55->SetEntries(134);
   
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
   AText = ptstats->AddText("Entries = 134    ");
   AText = ptstats->AddText("Mean  =  8.194");
   AText = ptstats->AddText("Std Dev   =  2.121");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis_MPCSORTED__55->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis_MPCSORTED__55);

   ci = TColor::GetColor("#0000ff");
   simCscTriggerPrimitiveDigis_MPCSORTED__55->SetLineColor(ci);
   simCscTriggerPrimitiveDigis_MPCSORTED__55->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis_MPCSORTED__55->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__55->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__55->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__55->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__55->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__55->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__55->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__55->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__55->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__55->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__55->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__55->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__55->Draw("same");
   
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
   AText = ptstats->AddText("Entries = 134    ");
   AText = ptstats->AddText("Mean  =  6.194");
   AText = ptstats->AddText("Std Dev   =  2.121");
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
   AText = ptstats->AddText("Entries = 134    ");
   AText = ptstats->AddText("Mean  = 0.3955");
   AText = ptstats->AddText("Std Dev   =  0.489");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.15,0.9343782,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCorrelatedLCTDigi BX ME4/2");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
