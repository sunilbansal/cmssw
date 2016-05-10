void comparison_lct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st1_ri2_noBXShift()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 15:28:31 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-42.27097,18.12903,239.5355);
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
   
   TH1D *simCscTriggerPrimitiveDigis__11 = new TH1D("simCscTriggerPrimitiveDigis__11","CSCCorrelatedLCTDigi BX ME1/3",22,-6,16);
   simCscTriggerPrimitiveDigis__11->SetBinContent(12,143);
   simCscTriggerPrimitiveDigis__11->SetBinContent(13,132);
   simCscTriggerPrimitiveDigis__11->SetBinContent(14,179);
   simCscTriggerPrimitiveDigis__11->SetBinContent(15,208);
   simCscTriggerPrimitiveDigis__11->SetBinContent(16,158);
   simCscTriggerPrimitiveDigis__11->SetBinContent(17,161);
   simCscTriggerPrimitiveDigis__11->SetBinContent(18,160);
   simCscTriggerPrimitiveDigis__11->SetEntries(1141);
   
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
   AText = ptstats->AddText("Entries = 1141   ");
   AText = ptstats->AddText("Mean  =  8.077");
   AText = ptstats->AddText("Std Dev   =  1.925");
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
   simCscTriggerPrimitiveDigis_MPCSORTED__12->SetBinContent(12,143);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->SetBinContent(13,132);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->SetBinContent(14,179);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->SetBinContent(15,208);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->SetBinContent(16,158);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->SetBinContent(17,161);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->SetBinContent(18,160);
   simCscTriggerPrimitiveDigis_MPCSORTED__12->SetEntries(1141);
   
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
   AText = ptstats->AddText("Entries = 1141   ");
   AText = ptstats->AddText("Mean  =  8.077");
   AText = ptstats->AddText("Std Dev   =  1.925");
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
   csctfDigis__13->SetBinContent(10,143);
   csctfDigis__13->SetBinContent(11,132);
   csctfDigis__13->SetBinContent(12,179);
   csctfDigis__13->SetBinContent(13,208);
   csctfDigis__13->SetBinContent(14,158);
   csctfDigis__13->SetBinContent(15,160);
   csctfDigis__13->SetBinContent(16,159);
   csctfDigis__13->SetEntries(1139);
   
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
   AText = ptstats->AddText("Entries = 1139   ");
   AText = ptstats->AddText("Mean  =  6.073");
   AText = ptstats->AddText("Std Dev   =  1.924");
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
   muonCSCDigis__14->SetBinContent(7,557);
   muonCSCDigis__14->SetBinContent(8,584);
   muonCSCDigis__14->SetEntries(1141);
   
   ptstats = new TPaveStats(0.78,0.2,0.98,0.4,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 1141   ");
   AText = ptstats->AddText("Mean  = 0.5118");
   AText = ptstats->AddText("Std Dev   = 0.4999");
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
   AText = ptstats->AddText("Entries = 1141   ");
   AText = ptstats->AddText("Mean  =  8.077");
   AText = ptstats->AddText("Std Dev   =  1.925");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__15 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__15","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->SetBinContent(12,143);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->SetBinContent(13,132);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->SetBinContent(14,179);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->SetBinContent(15,208);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->SetBinContent(16,158);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->SetBinContent(17,161);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->SetBinContent(18,160);
   simCscTriggerPrimitiveDigis_MPCSORTED__15->SetEntries(1141);
   
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
   AText = ptstats->AddText("Entries = 1141   ");
   AText = ptstats->AddText("Mean  =  8.077");
   AText = ptstats->AddText("Std Dev   =  1.925");
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
   AText = ptstats->AddText("Entries = 1139   ");
   AText = ptstats->AddText("Mean  =  6.073");
   AText = ptstats->AddText("Std Dev   =  1.924");
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
   AText = ptstats->AddText("Entries = 1141   ");
   AText = ptstats->AddText("Mean  = 0.5118");
   AText = ptstats->AddText("Std Dev   = 0.4999");
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
