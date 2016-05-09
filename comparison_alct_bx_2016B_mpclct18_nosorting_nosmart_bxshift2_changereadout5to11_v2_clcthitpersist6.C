void comparison_alct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v2_clcthitpersist6()
{
//=========Macro generated from canvas: c/c
//=========  (Sat May  7 09:10:06 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-390.3968,18.12903,2212.248);
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
   
   TH1D *simCscTriggerPrimitiveDigis__6 = new TH1D("simCscTriggerPrimitiveDigis__6","CSCALCTDigi BX",22,-6,16);
   simCscTriggerPrimitiveDigis__6->SetBinContent(12,1354);
   simCscTriggerPrimitiveDigis__6->SetBinContent(13,1508);
   simCscTriggerPrimitiveDigis__6->SetBinContent(14,1762);
   simCscTriggerPrimitiveDigis__6->SetBinContent(15,1921);
   simCscTriggerPrimitiveDigis__6->SetBinContent(16,1641);
   simCscTriggerPrimitiveDigis__6->SetBinContent(17,1657);
   simCscTriggerPrimitiveDigis__6->SetBinContent(18,1427);
   simCscTriggerPrimitiveDigis__6->SetEntries(11270);
   
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
   AText = ptstats->AddText("Entries = 11270  ");
   AText = ptstats->AddText("Mean  =  8.035");
   AText = ptstats->AddText("Std Dev   =  1.909");
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
   
   TH1D *muonCSCDigis__7 = new TH1D("muonCSCDigis__7","muonCSCDigis",22,-6,16);
   muonCSCDigis__7->SetBinContent(7,1354);
   muonCSCDigis__7->SetBinContent(8,1508);
   muonCSCDigis__7->SetBinContent(9,1762);
   muonCSCDigis__7->SetBinContent(10,1920);
   muonCSCDigis__7->SetBinContent(11,1642);
   muonCSCDigis__7->SetBinContent(12,1657);
   muonCSCDigis__7->SetBinContent(13,1427);
   muonCSCDigis__7->SetEntries(11270);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 11270  ");
   AText = ptstats->AddText("Mean  =  3.035");
   AText = ptstats->AddText("Std Dev   =  1.909");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__7->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__7);
   muonCSCDigis__7->SetMarkerStyle(8);
   muonCSCDigis__7->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__7->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__7->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__7->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__7->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__7->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__7->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__7->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__7->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__7->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__7->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__7->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__7->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 11270  ");
   AText = ptstats->AddText("Mean  =  8.035");
   AText = ptstats->AddText("Std Dev   =  1.909");
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
   AText = ptstats->AddText("Entries = 11270  ");
   AText = ptstats->AddText("Mean  =  3.035");
   AText = ptstats->AddText("Std Dev   =  1.909");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2808291,0.9343782,0.7191709,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCALCTDigi BX");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
