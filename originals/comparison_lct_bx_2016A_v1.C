void comparison_lct_bx_2016A_v1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 23:51:35 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-38.81613,18.12903,219.9581);
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
   
   TH1D *simCscTriggerPrimitiveDigis__1 = new TH1D("simCscTriggerPrimitiveDigis__1","CSCCorrelatedLCTDigi BX",22,-6,16);
   simCscTriggerPrimitiveDigis__1->SetBinContent(14,1);
   simCscTriggerPrimitiveDigis__1->SetBinContent(15,191);
   simCscTriggerPrimitiveDigis__1->SetEntries(192);
   
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
   AText = ptstats->AddText("Entries = 192    ");
   AText = ptstats->AddText("Mean  =  7.995");
   AText = ptstats->AddText("Std Dev   = 0.07198");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__1);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__1->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__1->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__1->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__1->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__1->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__1->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__1->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__1->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__1->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__1->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__1->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__1->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__1->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__1->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__1->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__1->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__1->Draw("");
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__2 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__2","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__2->SetBinContent(14,1);
   simCscTriggerPrimitiveDigis_MPCSORTED__2->SetBinContent(15,191);
   simCscTriggerPrimitiveDigis_MPCSORTED__2->SetEntries(192);
   
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
   AText = ptstats->AddText("Entries = 192    ");
   AText = ptstats->AddText("Mean  =  7.995");
   AText = ptstats->AddText("Std Dev   = 0.07198");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis_MPCSORTED__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis_MPCSORTED__2);

   ci = TColor::GetColor("#0000ff");
   simCscTriggerPrimitiveDigis_MPCSORTED__2->SetLineColor(ci);
   simCscTriggerPrimitiveDigis_MPCSORTED__2->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis_MPCSORTED__2->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__2->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__2->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__2->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__2->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__2->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__2->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__2->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__2->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__2->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__2->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__2->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__2->Draw("sames");
   
   TH1D *csctfDigis__3 = new TH1D("csctfDigis__3","csctfDigis",22,-6,16);
   csctfDigis__3->SetBinContent(13,200);
   csctfDigis__3->SetBinContent(14,5);
   csctfDigis__3->SetEntries(205);
   
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
   AText = ptstats->AddText("Entries = 205    ");
   AText = ptstats->AddText("Mean  =  6.024");
   AText = ptstats->AddText("Std Dev   = 0.1543");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   csctfDigis__3->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(csctfDigis__3);

   ci = TColor::GetColor("#009900");
   csctfDigis__3->SetLineColor(ci);
   csctfDigis__3->SetMarkerStyle(8);
   csctfDigis__3->GetXaxis()->SetLabelFont(42);
   csctfDigis__3->GetXaxis()->SetLabelSize(0.035);
   csctfDigis__3->GetXaxis()->SetTitleSize(0.06);
   csctfDigis__3->GetXaxis()->SetTitleFont(42);
   csctfDigis__3->GetYaxis()->SetLabelFont(42);
   csctfDigis__3->GetYaxis()->SetLabelSize(0.035);
   csctfDigis__3->GetYaxis()->SetTitleSize(0.06);
   csctfDigis__3->GetYaxis()->SetTitleFont(42);
   csctfDigis__3->GetZaxis()->SetLabelFont(42);
   csctfDigis__3->GetZaxis()->SetLabelSize(0.035);
   csctfDigis__3->GetZaxis()->SetTitleSize(0.06);
   csctfDigis__3->GetZaxis()->SetTitleFont(42);
   csctfDigis__3->Draw("sames");
   
   TH1D *muonCSCDigis__4 = new TH1D("muonCSCDigis__4","muonCSCDigis",22,-6,16);
   muonCSCDigis__4->SetBinContent(7,125);
   muonCSCDigis__4->SetBinContent(8,80);
   muonCSCDigis__4->SetEntries(205);
   
   ptstats = new TPaveStats(0.78,0.2,0.98,0.4,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 205    ");
   AText = ptstats->AddText("Mean  = 0.3902");
   AText = ptstats->AddText("Std Dev   = 0.4878");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__4->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__4);
   muonCSCDigis__4->SetMarkerStyle(8);
   muonCSCDigis__4->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__4->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__4->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__4->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__4->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__4->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__4->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__4->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__4->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__4->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__4->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__4->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__4->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 192    ");
   AText = ptstats->AddText("Mean  =  7.995");
   AText = ptstats->AddText("Std Dev   = 0.07198");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__5 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__5","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__5->SetBinContent(14,1);
   simCscTriggerPrimitiveDigis_MPCSORTED__5->SetBinContent(15,191);
   simCscTriggerPrimitiveDigis_MPCSORTED__5->SetEntries(192);
   
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
   AText = ptstats->AddText("Entries = 192    ");
   AText = ptstats->AddText("Mean  =  7.995");
   AText = ptstats->AddText("Std Dev   = 0.07198");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis_MPCSORTED__5->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis_MPCSORTED__5);

   ci = TColor::GetColor("#0000ff");
   simCscTriggerPrimitiveDigis_MPCSORTED__5->SetLineColor(ci);
   simCscTriggerPrimitiveDigis_MPCSORTED__5->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis_MPCSORTED__5->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__5->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__5->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__5->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__5->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__5->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__5->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__5->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__5->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__5->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__5->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__5->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__5->Draw("same");
   
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
   AText = ptstats->AddText("Entries = 205    ");
   AText = ptstats->AddText("Mean  =  6.024");
   AText = ptstats->AddText("Std Dev   = 0.1543");
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
   AText = ptstats->AddText("Entries = 205    ");
   AText = ptstats->AddText("Mean  = 0.3902");
   AText = ptstats->AddText("Std Dev   = 0.4878");
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
