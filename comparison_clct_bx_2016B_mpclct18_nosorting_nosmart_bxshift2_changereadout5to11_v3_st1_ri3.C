void comparison_clct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st1_ri3()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 15:28:41 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-2.006886,18.12903,2.610635);
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
   
   TH1D *simCscTriggerPrimitiveDigis__77 = new TH1D("simCscTriggerPrimitiveDigis__77","CSCCLCTDigi BX ME1/2",22,-6,16);
   simCscTriggerPrimitiveDigis__77->SetBinContent(14,97);
   simCscTriggerPrimitiveDigis__77->SetEntries(97);
   
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
   AText = ptstats->AddText("Entries = 97     ");
   AText = ptstats->AddText("Mean  =      7");
   AText = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__77->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__77);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__77->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__77->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__77->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__77->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__77->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__77->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__77->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__77->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__77->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__77->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__77->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__77->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__77->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__77->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__77->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__77->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__77->Draw("");
   
   TH1D *muonCSCDigis__78 = new TH1D("muonCSCDigis__78","muonCSCDigis",22,-6,16);
   muonCSCDigis__78->SetBinContent(7,22);
   muonCSCDigis__78->SetBinContent(8,27);
   muonCSCDigis__78->SetBinContent(9,30);
   muonCSCDigis__78->SetBinContent(10,18);
   muonCSCDigis__78->SetEntries(97);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 97     ");
   AText = ptstats->AddText("Mean  =  1.454");
   AText = ptstats->AddText("Std Dev   =  1.036");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__78->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__78);
   muonCSCDigis__78->SetMarkerStyle(8);
   muonCSCDigis__78->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__78->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__78->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__78->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__78->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__78->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__78->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__78->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__78->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__78->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__78->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__78->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__78->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 97     ");
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
   AText = ptstats->AddText("Entries = 97     ");
   AText = ptstats->AddText("Mean  =  1.454");
   AText = ptstats->AddText("Std Dev   =  1.036");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2016834,0.9343782,0.7983166,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCLCTDigi BX ME1/2");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
