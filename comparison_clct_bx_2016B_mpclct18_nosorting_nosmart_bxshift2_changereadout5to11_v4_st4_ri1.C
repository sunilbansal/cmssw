void comparison_clct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st4_ri1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 01:08:05 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-1.495348,18.12903,3.122174);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLogy();
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.15);
   c->SetRightMargin(0.075);
   c->SetTopMargin(0.075);
   c->SetBottomMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1D *simCscTriggerPrimitiveDigis__92 = new TH1D("simCscTriggerPrimitiveDigis__92","CSCCLCTDigi BX ME4/1",22,-6,16);
   simCscTriggerPrimitiveDigis__92->SetBinContent(14,315);
   simCscTriggerPrimitiveDigis__92->SetEntries(315);
   
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
   AText = ptstats->AddText("Entries = 315    ");
   AText = ptstats->AddText("Mean  =      7");
   AText = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__92->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__92);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__92->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__92->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__92->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__92->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__92->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__92->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__92->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__92->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__92->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__92->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__92->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__92->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__92->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__92->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__92->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__92->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__92->Draw("");
   
   TH1D *muonCSCDigis__93 = new TH1D("muonCSCDigis__93","muonCSCDigis",22,-6,16);
   muonCSCDigis__93->SetBinContent(7,79);
   muonCSCDigis__93->SetBinContent(8,85);
   muonCSCDigis__93->SetBinContent(9,80);
   muonCSCDigis__93->SetBinContent(10,71);
   muonCSCDigis__93->SetEntries(315);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 315    ");
   AText = ptstats->AddText("Mean  =  1.454");
   AText = ptstats->AddText("Std Dev   =  1.096");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__93->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__93);
   muonCSCDigis__93->SetMarkerStyle(8);
   muonCSCDigis__93->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__93->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__93->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__93->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__93->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__93->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__93->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__93->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__93->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__93->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__93->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__93->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__93->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 315    ");
   AText = ptstats->AddText("Mean  =      7");
   AText = ptstats->AddText("Std Dev   =      0");
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
   AText = ptstats->AddText("Entries = 315    ");
   AText = ptstats->AddText("Mean  =  1.454");
   AText = ptstats->AddText("Std Dev   =  1.096");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2054523,0.9343782,0.7945477,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCLCTDigi BX ME4/1");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
