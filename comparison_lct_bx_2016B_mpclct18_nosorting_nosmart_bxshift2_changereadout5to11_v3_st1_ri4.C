void comparison_lct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st1_ri4()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 06:08:51 2016) by ROOT version6.06/01
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
   
   TH1D *simCscTriggerPrimitiveDigis__6 = new TH1D("simCscTriggerPrimitiveDigis__6","CSCCorrelatedLCTDigi BX ME1/a",22,-6,16);
   
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
   simCscTriggerPrimitiveDigis__6->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__6);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__6->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__6->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__6->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__6->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__6->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__6->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__6->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__6->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__6->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__6->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__6->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__6->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__6->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__6->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__6->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__6->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__6->Draw("");
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__7 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__7","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   
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
   AText = ptstats->AddText("Entries = 0      ");
   AText = ptstats->AddText("Mean  =      0");
   AText = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis_MPCSORTED__7->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis_MPCSORTED__7);

   ci = TColor::GetColor("#0000ff");
   simCscTriggerPrimitiveDigis_MPCSORTED__7->SetLineColor(ci);
   simCscTriggerPrimitiveDigis_MPCSORTED__7->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis_MPCSORTED__7->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__7->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__7->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__7->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__7->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__7->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__7->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__7->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__7->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__7->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__7->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__7->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__7->Draw("sames");
   
   TH1D *csctfDigis__8 = new TH1D("csctfDigis__8","csctfDigis",22,-6,16);
   
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
   AText = ptstats->AddText("Entries = 0      ");
   AText = ptstats->AddText("Mean  =      0");
   AText = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   csctfDigis__8->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(csctfDigis__8);

   ci = TColor::GetColor("#009900");
   csctfDigis__8->SetLineColor(ci);
   csctfDigis__8->SetMarkerStyle(8);
   csctfDigis__8->GetXaxis()->SetLabelFont(42);
   csctfDigis__8->GetXaxis()->SetLabelSize(0.035);
   csctfDigis__8->GetXaxis()->SetTitleSize(0.06);
   csctfDigis__8->GetXaxis()->SetTitleFont(42);
   csctfDigis__8->GetYaxis()->SetLabelFont(42);
   csctfDigis__8->GetYaxis()->SetLabelSize(0.035);
   csctfDigis__8->GetYaxis()->SetTitleSize(0.06);
   csctfDigis__8->GetYaxis()->SetTitleFont(42);
   csctfDigis__8->GetZaxis()->SetLabelFont(42);
   csctfDigis__8->GetZaxis()->SetLabelSize(0.035);
   csctfDigis__8->GetZaxis()->SetTitleSize(0.06);
   csctfDigis__8->GetZaxis()->SetTitleFont(42);
   csctfDigis__8->Draw("sames");
   
   TH1D *muonCSCDigis__9 = new TH1D("muonCSCDigis__9","muonCSCDigis",22,-6,16);
   
   ptstats = new TPaveStats(0.78,0.2,0.98,0.4,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 0      ");
   AText = ptstats->AddText("Mean  =      0");
   AText = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__9->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__9);
   muonCSCDigis__9->SetMarkerStyle(8);
   muonCSCDigis__9->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__9->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__9->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__9->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__9->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__9->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__9->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__9->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__9->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__9->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__9->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__9->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__9->Draw("sames");
   
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
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__10 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__10","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   
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
   AText = ptstats->AddText("Entries = 0      ");
   AText = ptstats->AddText("Mean  =      0");
   AText = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis_MPCSORTED__10->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis_MPCSORTED__10);

   ci = TColor::GetColor("#0000ff");
   simCscTriggerPrimitiveDigis_MPCSORTED__10->SetLineColor(ci);
   simCscTriggerPrimitiveDigis_MPCSORTED__10->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis_MPCSORTED__10->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__10->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__10->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__10->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__10->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__10->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__10->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__10->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__10->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__10->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__10->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__10->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__10->Draw("same");
   
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
   AText = ptstats->AddText("Entries = 0      ");
   AText = ptstats->AddText("Mean  =      0");
   AText = ptstats->AddText("Std Dev   =      0");
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
   AText = ptstats->AddText("Entries = 0      ");
   AText = ptstats->AddText("Mean  =      0");
   AText = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.15,0.9343782,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCorrelatedLCTDigi BX ME1/a");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
