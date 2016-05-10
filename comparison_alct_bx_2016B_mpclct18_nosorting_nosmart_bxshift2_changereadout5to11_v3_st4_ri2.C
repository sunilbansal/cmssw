void comparison_alct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st4_ri2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 15:28:39 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-78.24193,18.12903,443.371);
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
   
   TH1D *simCscTriggerPrimitiveDigis__69 = new TH1D("simCscTriggerPrimitiveDigis__69","CSCALCTDigi BX ME4/2",22,-6,16);
   simCscTriggerPrimitiveDigis__69->SetBinContent(7,226);
   simCscTriggerPrimitiveDigis__69->SetBinContent(8,244);
   simCscTriggerPrimitiveDigis__69->SetBinContent(9,265);
   simCscTriggerPrimitiveDigis__69->SetBinContent(10,329);
   simCscTriggerPrimitiveDigis__69->SetBinContent(11,320);
   simCscTriggerPrimitiveDigis__69->SetBinContent(12,332);
   simCscTriggerPrimitiveDigis__69->SetBinContent(13,385);
   simCscTriggerPrimitiveDigis__69->SetEntries(2101);
   
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
   AText = ptstats->AddText("Entries = 2101   ");
   AText = ptstats->AddText("Mean  =  3.337");
   AText = ptstats->AddText("Std Dev   =  1.969");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__69->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__69);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__69->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__69->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__69->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__69->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__69->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__69->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__69->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__69->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__69->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__69->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__69->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__69->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__69->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__69->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__69->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__69->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__69->Draw("");
   
   TH1D *muonCSCDigis__70 = new TH1D("muonCSCDigis__70","muonCSCDigis",22,-6,16);
   muonCSCDigis__70->SetBinContent(7,226);
   muonCSCDigis__70->SetBinContent(8,244);
   muonCSCDigis__70->SetBinContent(9,265);
   muonCSCDigis__70->SetBinContent(10,329);
   muonCSCDigis__70->SetBinContent(11,320);
   muonCSCDigis__70->SetBinContent(12,332);
   muonCSCDigis__70->SetBinContent(13,385);
   muonCSCDigis__70->SetEntries(2101);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 2101   ");
   AText = ptstats->AddText("Mean  =  3.337");
   AText = ptstats->AddText("Std Dev   =  1.969");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__70->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__70);
   muonCSCDigis__70->SetMarkerStyle(8);
   muonCSCDigis__70->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__70->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__70->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__70->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__70->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__70->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__70->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__70->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__70->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__70->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__70->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__70->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__70->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 2101   ");
   AText = ptstats->AddText("Mean  =  3.337");
   AText = ptstats->AddText("Std Dev   =  1.969");
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
   AText = ptstats->AddText("Entries = 2101   ");
   AText = ptstats->AddText("Mean  =  3.337");
   AText = ptstats->AddText("Std Dev   =  1.969");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2016834,0.9343782,0.7983166,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCALCTDigi BX ME4/2");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
