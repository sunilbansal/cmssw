void comparison_alct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st1_ri2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 15:28:36 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-49.5871,18.12903,280.9935);
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
   
   TH1D *simCscTriggerPrimitiveDigis__55 = new TH1D("simCscTriggerPrimitiveDigis__55","CSCALCTDigi BX ME1/3",22,-6,16);
   simCscTriggerPrimitiveDigis__55->SetBinContent(7,176);
   simCscTriggerPrimitiveDigis__55->SetBinContent(8,159);
   simCscTriggerPrimitiveDigis__55->SetBinContent(9,221);
   simCscTriggerPrimitiveDigis__55->SetBinContent(10,244);
   simCscTriggerPrimitiveDigis__55->SetBinContent(11,193);
   simCscTriggerPrimitiveDigis__55->SetBinContent(12,199);
   simCscTriggerPrimitiveDigis__55->SetBinContent(13,197);
   simCscTriggerPrimitiveDigis__55->SetEntries(1389);
   
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
   AText = ptstats->AddText("Entries = 1389   ");
   AText = ptstats->AddText("Mean  =  3.083");
   AText = ptstats->AddText("Std Dev   =  1.934");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__55->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__55);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__55->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__55->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__55->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__55->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__55->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__55->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__55->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__55->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__55->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__55->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__55->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__55->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__55->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__55->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__55->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__55->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__55->Draw("");
   
   TH1D *muonCSCDigis__56 = new TH1D("muonCSCDigis__56","muonCSCDigis",22,-6,16);
   muonCSCDigis__56->SetBinContent(7,176);
   muonCSCDigis__56->SetBinContent(8,159);
   muonCSCDigis__56->SetBinContent(9,221);
   muonCSCDigis__56->SetBinContent(10,244);
   muonCSCDigis__56->SetBinContent(11,193);
   muonCSCDigis__56->SetBinContent(12,199);
   muonCSCDigis__56->SetBinContent(13,197);
   muonCSCDigis__56->SetEntries(1389);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 1389   ");
   AText = ptstats->AddText("Mean  =  3.083");
   AText = ptstats->AddText("Std Dev   =  1.934");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__56->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__56);
   muonCSCDigis__56->SetMarkerStyle(8);
   muonCSCDigis__56->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__56->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__56->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__56->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__56->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__56->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__56->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__56->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__56->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__56->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__56->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__56->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__56->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 1389   ");
   AText = ptstats->AddText("Mean  =  3.083");
   AText = ptstats->AddText("Std Dev   =  1.934");
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
   AText = ptstats->AddText("Entries = 1389   ");
   AText = ptstats->AddText("Mean  =  3.083");
   AText = ptstats->AddText("Std Dev   =  1.934");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2016834,0.9343782,0.7983166,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCALCTDigi BX ME1/3");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
