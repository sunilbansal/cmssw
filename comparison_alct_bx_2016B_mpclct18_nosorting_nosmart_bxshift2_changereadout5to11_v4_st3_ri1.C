void comparison_alct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st3_ri1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 01:08:03 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-11.17742,18.12903,63.33871);
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
   
   TH1D *simCscTriggerPrimitiveDigis__68 = new TH1D("simCscTriggerPrimitiveDigis__68","CSCALCTDigi BX ME3/1",22,-6,16);
   simCscTriggerPrimitiveDigis__68->SetBinContent(7,39);
   simCscTriggerPrimitiveDigis__68->SetBinContent(8,53);
   simCscTriggerPrimitiveDigis__68->SetBinContent(9,55);
   simCscTriggerPrimitiveDigis__68->SetBinContent(10,45);
   simCscTriggerPrimitiveDigis__68->SetBinContent(11,52);
   simCscTriggerPrimitiveDigis__68->SetBinContent(12,55);
   simCscTriggerPrimitiveDigis__68->SetBinContent(13,40);
   simCscTriggerPrimitiveDigis__68->SetEntries(339);
   
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
   AText = ptstats->AddText("Entries = 339    ");
   AText = ptstats->AddText("Mean  =  3.012");
   AText = ptstats->AddText("Std Dev   =   1.92");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__68->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__68);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__68->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__68->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__68->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__68->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__68->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__68->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__68->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__68->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__68->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__68->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__68->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__68->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__68->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__68->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__68->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__68->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__68->Draw("");
   
   TH1D *muonCSCDigis__69 = new TH1D("muonCSCDigis__69","muonCSCDigis",22,-6,16);
   muonCSCDigis__69->SetBinContent(7,39);
   muonCSCDigis__69->SetBinContent(8,53);
   muonCSCDigis__69->SetBinContent(9,55);
   muonCSCDigis__69->SetBinContent(10,45);
   muonCSCDigis__69->SetBinContent(11,52);
   muonCSCDigis__69->SetBinContent(12,55);
   muonCSCDigis__69->SetBinContent(13,40);
   muonCSCDigis__69->SetEntries(339);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 339    ");
   AText = ptstats->AddText("Mean  =  3.012");
   AText = ptstats->AddText("Std Dev   =   1.92");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__69->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__69);
   muonCSCDigis__69->SetMarkerStyle(8);
   muonCSCDigis__69->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__69->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__69->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__69->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__69->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__69->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__69->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__69->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__69->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__69->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__69->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__69->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__69->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 339    ");
   AText = ptstats->AddText("Mean  =  3.012");
   AText = ptstats->AddText("Std Dev   =   1.92");
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
   AText = ptstats->AddText("Entries = 339    ");
   AText = ptstats->AddText("Mean  =  3.012");
   AText = ptstats->AddText("Std Dev   =   1.92");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2054523,0.9343782,0.7945477,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCALCTDigi BX ME3/1");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
