void comparison_alct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st2_ri2()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 01:08:03 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-2.845161,18.12903,16.12258);
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
   
   TH1D *simCscTriggerPrimitiveDigis__66 = new TH1D("simCscTriggerPrimitiveDigis__66","CSCALCTDigi BX ME2/2",22,-6,16);
   simCscTriggerPrimitiveDigis__66->SetBinContent(7,9);
   simCscTriggerPrimitiveDigis__66->SetBinContent(8,10);
   simCscTriggerPrimitiveDigis__66->SetBinContent(9,14);
   simCscTriggerPrimitiveDigis__66->SetBinContent(10,14);
   simCscTriggerPrimitiveDigis__66->SetBinContent(11,6);
   simCscTriggerPrimitiveDigis__66->SetBinContent(12,11);
   simCscTriggerPrimitiveDigis__66->SetBinContent(13,6);
   simCscTriggerPrimitiveDigis__66->SetEntries(70);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.655,0.98,0.935,"brNDC");
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
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 70     ");
   AText = ptstats->AddText("Mean  =  2.786");
   AText = ptstats->AddText("Std Dev   =  1.835");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__66->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__66);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__66->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__66->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__66->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__66->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__66->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__66->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__66->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__66->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__66->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__66->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__66->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__66->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__66->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__66->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__66->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__66->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__66->Draw("");
   
   TH1D *muonCSCDigis__67 = new TH1D("muonCSCDigis__67","muonCSCDigis",22,-6,16);
   muonCSCDigis__67->SetBinContent(7,9);
   muonCSCDigis__67->SetBinContent(8,10);
   muonCSCDigis__67->SetBinContent(9,14);
   muonCSCDigis__67->SetBinContent(10,14);
   muonCSCDigis__67->SetBinContent(11,6);
   muonCSCDigis__67->SetBinContent(12,11);
   muonCSCDigis__67->SetBinContent(13,6);
   muonCSCDigis__67->SetEntries(70);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 70     ");
   AText = ptstats->AddText("Mean  =  2.786");
   AText = ptstats->AddText("Std Dev   =  1.835");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__67->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__67);
   muonCSCDigis__67->SetMarkerStyle(8);
   muonCSCDigis__67->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__67->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__67->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__67->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__67->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__67->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__67->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__67->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__67->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__67->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__67->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__67->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__67->Draw("sames");
   
   ptstats = new TPaveStats(0.78,0.655,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#ff0000");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("simCscTriggerPrimitiveDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 70     ");
   AText = ptstats->AddText("Mean  =  2.786");
   AText = ptstats->AddText("Std Dev   =  1.835");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 70     ");
   AText = ptstats->AddText("Mean  =  2.786");
   AText = ptstats->AddText("Std Dev   =  1.835");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2016834,0.9343782,0.7983166,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCALCTDigi BX ME2/2");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
