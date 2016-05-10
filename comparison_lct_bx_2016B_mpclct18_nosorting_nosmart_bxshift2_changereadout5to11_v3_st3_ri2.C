void comparison_lct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st3_ri2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 06:08:55 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-0.2032258,18.12903,1.151613);
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
   
   TH1D *simCscTriggerPrimitiveDigis__36 = new TH1D("simCscTriggerPrimitiveDigis__36","CSCCorrelatedLCTDigi BX ME3/2",22,-6,16);
   
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
   AText = ptstats->AddText("Entries = 0      ");
   AText = ptstats->AddText("Mean  =      0");
   AText = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__36->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__36);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__36->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__36->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__36->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__36->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__36->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__36->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__36->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__36->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__36->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__36->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__36->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__36->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__36->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__36->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__36->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__36->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__36->Draw("");
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__37 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__37","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__37->SetBinContent(10,68);
   simCscTriggerPrimitiveDigis_MPCSORTED__37->SetBinContent(11,67);
   simCscTriggerPrimitiveDigis_MPCSORTED__37->SetBinContent(12,103);
   simCscTriggerPrimitiveDigis_MPCSORTED__37->SetBinContent(13,111);
   simCscTriggerPrimitiveDigis_MPCSORTED__37->SetBinContent(14,80);
   simCscTriggerPrimitiveDigis_MPCSORTED__37->SetBinContent(15,98);
   simCscTriggerPrimitiveDigis_MPCSORTED__37->SetBinContent(16,79);
   simCscTriggerPrimitiveDigis_MPCSORTED__37->SetEntries(606);
   
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
   AText = ptstats->AddText("Entries = 606    ");
   AText = ptstats->AddText("Mean  =  6.119");
   AText = ptstats->AddText("Std Dev   =  1.887");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis_MPCSORTED__37->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis_MPCSORTED__37);

   ci = TColor::GetColor("#0000ff");
   simCscTriggerPrimitiveDigis_MPCSORTED__37->SetLineColor(ci);
   simCscTriggerPrimitiveDigis_MPCSORTED__37->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis_MPCSORTED__37->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__37->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__37->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__37->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__37->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__37->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__37->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__37->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__37->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__37->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__37->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__37->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__37->Draw("sames");
   
   TH1D *csctfDigis__38 = new TH1D("csctfDigis__38","csctfDigis",22,-6,16);
   csctfDigis__38->SetBinContent(10,72);
   csctfDigis__38->SetBinContent(11,67);
   csctfDigis__38->SetBinContent(12,106);
   csctfDigis__38->SetBinContent(13,111);
   csctfDigis__38->SetBinContent(14,81);
   csctfDigis__38->SetBinContent(15,98);
   csctfDigis__38->SetBinContent(16,81);
   csctfDigis__38->SetEntries(616);
   
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
   AText = ptstats->AddText("Entries = 616    ");
   AText = ptstats->AddText("Mean  =  6.104");
   AText = ptstats->AddText("Std Dev   =  1.897");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   csctfDigis__38->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(csctfDigis__38);

   ci = TColor::GetColor("#009900");
   csctfDigis__38->SetLineColor(ci);
   csctfDigis__38->SetMarkerStyle(8);
   csctfDigis__38->GetXaxis()->SetLabelFont(42);
   csctfDigis__38->GetXaxis()->SetLabelSize(0.035);
   csctfDigis__38->GetXaxis()->SetTitleSize(0.06);
   csctfDigis__38->GetXaxis()->SetTitleFont(42);
   csctfDigis__38->GetYaxis()->SetLabelFont(42);
   csctfDigis__38->GetYaxis()->SetLabelSize(0.035);
   csctfDigis__38->GetYaxis()->SetTitleSize(0.06);
   csctfDigis__38->GetYaxis()->SetTitleFont(42);
   csctfDigis__38->GetZaxis()->SetLabelFont(42);
   csctfDigis__38->GetZaxis()->SetLabelSize(0.035);
   csctfDigis__38->GetZaxis()->SetTitleSize(0.06);
   csctfDigis__38->GetZaxis()->SetTitleFont(42);
   csctfDigis__38->Draw("sames");
   
   TH1D *muonCSCDigis__39 = new TH1D("muonCSCDigis__39","muonCSCDigis",22,-6,16);
   muonCSCDigis__39->SetBinContent(7,301);
   muonCSCDigis__39->SetBinContent(8,308);
   muonCSCDigis__39->SetEntries(609);
   
   ptstats = new TPaveStats(0.78,0.2,0.98,0.4,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 609    ");
   AText = ptstats->AddText("Mean  = 0.5057");
   AText = ptstats->AddText("Std Dev   =    0.5");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__39->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__39);
   muonCSCDigis__39->SetMarkerStyle(8);
   muonCSCDigis__39->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__39->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__39->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__39->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__39->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__39->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__39->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__39->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__39->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__39->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__39->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__39->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__39->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 0      ");
   AText = ptstats->AddText("Mean  =      0");
   AText = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__40 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__40","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__40->SetBinContent(10,68);
   simCscTriggerPrimitiveDigis_MPCSORTED__40->SetBinContent(11,67);
   simCscTriggerPrimitiveDigis_MPCSORTED__40->SetBinContent(12,103);
   simCscTriggerPrimitiveDigis_MPCSORTED__40->SetBinContent(13,111);
   simCscTriggerPrimitiveDigis_MPCSORTED__40->SetBinContent(14,80);
   simCscTriggerPrimitiveDigis_MPCSORTED__40->SetBinContent(15,98);
   simCscTriggerPrimitiveDigis_MPCSORTED__40->SetBinContent(16,79);
   simCscTriggerPrimitiveDigis_MPCSORTED__40->SetEntries(606);
   
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
   AText = ptstats->AddText("Entries = 606    ");
   AText = ptstats->AddText("Mean  =  6.119");
   AText = ptstats->AddText("Std Dev   =  1.887");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis_MPCSORTED__40->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis_MPCSORTED__40);

   ci = TColor::GetColor("#0000ff");
   simCscTriggerPrimitiveDigis_MPCSORTED__40->SetLineColor(ci);
   simCscTriggerPrimitiveDigis_MPCSORTED__40->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis_MPCSORTED__40->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__40->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__40->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__40->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__40->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__40->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__40->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__40->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__40->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__40->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__40->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__40->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__40->Draw("same");
   
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
   AText = ptstats->AddText("Entries = 616    ");
   AText = ptstats->AddText("Mean  =  6.104");
   AText = ptstats->AddText("Std Dev   =  1.897");
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
   AText = ptstats->AddText("Entries = 609    ");
   AText = ptstats->AddText("Mean  = 0.5057");
   AText = ptstats->AddText("Std Dev   =    0.5");
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
