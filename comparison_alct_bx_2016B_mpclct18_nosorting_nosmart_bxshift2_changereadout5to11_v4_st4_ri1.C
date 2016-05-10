void comparison_alct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st4_ri1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 01:08:03 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-9.754839,18.12903,55.27742);
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
   
   TH1D *simCscTriggerPrimitiveDigis__72 = new TH1D("simCscTriggerPrimitiveDigis__72","CSCALCTDigi BX ME4/1",22,-6,16);
   simCscTriggerPrimitiveDigis__72->SetBinContent(7,35);
   simCscTriggerPrimitiveDigis__72->SetBinContent(8,40);
   simCscTriggerPrimitiveDigis__72->SetBinContent(9,48);
   simCscTriggerPrimitiveDigis__72->SetBinContent(10,42);
   simCscTriggerPrimitiveDigis__72->SetBinContent(11,37);
   simCscTriggerPrimitiveDigis__72->SetBinContent(12,35);
   simCscTriggerPrimitiveDigis__72->SetBinContent(13,31);
   simCscTriggerPrimitiveDigis__72->SetEntries(268);
   
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
   AText = ptstats->AddText("Entries = 268    ");
   AText = ptstats->AddText("Mean  =  2.877");
   AText = ptstats->AddText("Std Dev   =  1.907");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__72->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__72);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__72->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__72->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__72->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__72->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__72->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__72->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__72->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__72->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__72->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__72->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__72->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__72->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__72->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__72->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__72->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__72->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__72->Draw("");
   
   TH1D *muonCSCDigis__73 = new TH1D("muonCSCDigis__73","muonCSCDigis",22,-6,16);
   muonCSCDigis__73->SetBinContent(7,35);
   muonCSCDigis__73->SetBinContent(8,40);
   muonCSCDigis__73->SetBinContent(9,48);
   muonCSCDigis__73->SetBinContent(10,42);
   muonCSCDigis__73->SetBinContent(11,37);
   muonCSCDigis__73->SetBinContent(12,35);
   muonCSCDigis__73->SetBinContent(13,31);
   muonCSCDigis__73->SetEntries(268);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 268    ");
   AText = ptstats->AddText("Mean  =  2.877");
   AText = ptstats->AddText("Std Dev   =  1.907");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__73->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__73);
   muonCSCDigis__73->SetMarkerStyle(8);
   muonCSCDigis__73->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__73->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__73->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__73->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__73->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__73->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__73->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__73->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__73->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__73->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__73->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__73->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__73->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 268    ");
   AText = ptstats->AddText("Mean  =  2.877");
   AText = ptstats->AddText("Std Dev   =  1.907");
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
   AText = ptstats->AddText("Entries = 268    ");
   AText = ptstats->AddText("Mean  =  2.877");
   AText = ptstats->AddText("Std Dev   =  1.907");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2054523,0.9343782,0.7945477,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCALCTDigi BX ME4/1");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
