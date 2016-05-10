void comparison_lct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st3_ri2_noBXShift()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 01:08:02 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-2.235484,18.12903,12.66774);
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
   
   TH1D *simCscTriggerPrimitiveDigis__41 = new TH1D("simCscTriggerPrimitiveDigis__41","CSCCorrelatedLCTDigi BX ME3/2",22,-6,16);
   simCscTriggerPrimitiveDigis__41->SetBinContent(12,7);
   simCscTriggerPrimitiveDigis__41->SetBinContent(13,6);
   simCscTriggerPrimitiveDigis__41->SetBinContent(14,11);
   simCscTriggerPrimitiveDigis__41->SetBinContent(15,11);
   simCscTriggerPrimitiveDigis__41->SetBinContent(16,4);
   simCscTriggerPrimitiveDigis__41->SetBinContent(17,11);
   simCscTriggerPrimitiveDigis__41->SetBinContent(18,7);
   simCscTriggerPrimitiveDigis__41->SetEntries(57);
   
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
   AText = ptstats->AddText("Entries = 57     ");
   AText = ptstats->AddText("Mean  =  8.053");
   AText = ptstats->AddText("Std Dev   =  1.914");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__41->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__41);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__41->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__41->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__41->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__41->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__41->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__41->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__41->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__41->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__41->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__41->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__41->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__41->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__41->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__41->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__41->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__41->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__41->Draw("");
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__42 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__42","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__42->SetBinContent(12,7);
   simCscTriggerPrimitiveDigis_MPCSORTED__42->SetBinContent(13,6);
   simCscTriggerPrimitiveDigis_MPCSORTED__42->SetBinContent(14,11);
   simCscTriggerPrimitiveDigis_MPCSORTED__42->SetBinContent(15,11);
   simCscTriggerPrimitiveDigis_MPCSORTED__42->SetBinContent(16,4);
   simCscTriggerPrimitiveDigis_MPCSORTED__42->SetBinContent(17,11);
   simCscTriggerPrimitiveDigis_MPCSORTED__42->SetBinContent(18,7);
   simCscTriggerPrimitiveDigis_MPCSORTED__42->SetEntries(57);
   
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
   AText = ptstats->AddText("Entries = 57     ");
   AText = ptstats->AddText("Mean  =  8.053");
   AText = ptstats->AddText("Std Dev   =  1.914");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis_MPCSORTED__42->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis_MPCSORTED__42);

   ci = TColor::GetColor("#0000ff");
   simCscTriggerPrimitiveDigis_MPCSORTED__42->SetLineColor(ci);
   simCscTriggerPrimitiveDigis_MPCSORTED__42->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis_MPCSORTED__42->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__42->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__42->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__42->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__42->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__42->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__42->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__42->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__42->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__42->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__42->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__42->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__42->Draw("sames");
   
   TH1D *csctfDigis__43 = new TH1D("csctfDigis__43","csctfDigis",22,-6,16);
   csctfDigis__43->SetBinContent(10,7);
   csctfDigis__43->SetBinContent(11,6);
   csctfDigis__43->SetBinContent(12,11);
   csctfDigis__43->SetBinContent(13,11);
   csctfDigis__43->SetBinContent(14,4);
   csctfDigis__43->SetBinContent(15,11);
   csctfDigis__43->SetBinContent(16,7);
   csctfDigis__43->SetEntries(57);
   
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
   AText = ptstats->AddText("Entries = 57     ");
   AText = ptstats->AddText("Mean  =  6.053");
   AText = ptstats->AddText("Std Dev   =  1.914");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   csctfDigis__43->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(csctfDigis__43);

   ci = TColor::GetColor("#009900");
   csctfDigis__43->SetLineColor(ci);
   csctfDigis__43->SetMarkerStyle(8);
   csctfDigis__43->GetXaxis()->SetLabelFont(42);
   csctfDigis__43->GetXaxis()->SetLabelSize(0.035);
   csctfDigis__43->GetXaxis()->SetTitleSize(0.06);
   csctfDigis__43->GetXaxis()->SetTitleFont(42);
   csctfDigis__43->GetYaxis()->SetLabelFont(42);
   csctfDigis__43->GetYaxis()->SetLabelSize(0.035);
   csctfDigis__43->GetYaxis()->SetTitleSize(0.06);
   csctfDigis__43->GetYaxis()->SetTitleFont(42);
   csctfDigis__43->GetZaxis()->SetLabelFont(42);
   csctfDigis__43->GetZaxis()->SetLabelSize(0.035);
   csctfDigis__43->GetZaxis()->SetTitleSize(0.06);
   csctfDigis__43->GetZaxis()->SetTitleFont(42);
   csctfDigis__43->Draw("sames");
   
   TH1D *muonCSCDigis__44 = new TH1D("muonCSCDigis__44","muonCSCDigis",22,-6,16);
   muonCSCDigis__44->SetBinContent(7,25);
   muonCSCDigis__44->SetBinContent(8,32);
   muonCSCDigis__44->SetEntries(57);
   
   ptstats = new TPaveStats(0.78,0.2,0.98,0.4,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 57     ");
   AText = ptstats->AddText("Mean  = 0.5614");
   AText = ptstats->AddText("Std Dev   = 0.4962");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__44->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__44);
   muonCSCDigis__44->SetMarkerStyle(8);
   muonCSCDigis__44->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__44->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__44->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__44->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__44->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__44->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__44->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__44->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__44->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__44->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__44->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__44->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__44->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 57     ");
   AText = ptstats->AddText("Mean  =  8.053");
   AText = ptstats->AddText("Std Dev   =  1.914");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__45 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__45","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__45->SetBinContent(12,7);
   simCscTriggerPrimitiveDigis_MPCSORTED__45->SetBinContent(13,6);
   simCscTriggerPrimitiveDigis_MPCSORTED__45->SetBinContent(14,11);
   simCscTriggerPrimitiveDigis_MPCSORTED__45->SetBinContent(15,11);
   simCscTriggerPrimitiveDigis_MPCSORTED__45->SetBinContent(16,4);
   simCscTriggerPrimitiveDigis_MPCSORTED__45->SetBinContent(17,11);
   simCscTriggerPrimitiveDigis_MPCSORTED__45->SetBinContent(18,7);
   simCscTriggerPrimitiveDigis_MPCSORTED__45->SetEntries(57);
   
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
   AText = ptstats->AddText("Entries = 57     ");
   AText = ptstats->AddText("Mean  =  8.053");
   AText = ptstats->AddText("Std Dev   =  1.914");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis_MPCSORTED__45->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis_MPCSORTED__45);

   ci = TColor::GetColor("#0000ff");
   simCscTriggerPrimitiveDigis_MPCSORTED__45->SetLineColor(ci);
   simCscTriggerPrimitiveDigis_MPCSORTED__45->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis_MPCSORTED__45->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__45->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__45->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__45->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__45->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__45->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__45->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__45->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__45->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__45->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__45->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__45->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__45->Draw("same");
   
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
   AText = ptstats->AddText("Entries = 57     ");
   AText = ptstats->AddText("Mean  =  6.053");
   AText = ptstats->AddText("Std Dev   =  1.914");
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
   AText = ptstats->AddText("Entries = 57     ");
   AText = ptstats->AddText("Mean  = 0.5614");
   AText = ptstats->AddText("Std Dev   = 0.4962");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.15,0.9343782,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCorrelatedLCTDigi BX ME3/2");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
