void comparison_clct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st1_ri1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 02:22:08 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-1006.374,18.12903,5702.787);
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
   
   TH1D *simCscTriggerPrimitiveDigis__53 = new TH1D("simCscTriggerPrimitiveDigis__53","CSCCLCTDigi BX",22,-6,16);
   simCscTriggerPrimitiveDigis__53->SetBinContent(12,4);
   simCscTriggerPrimitiveDigis__53->SetBinContent(14,4952);
   simCscTriggerPrimitiveDigis__53->SetBinContent(15,17);
   simCscTriggerPrimitiveDigis__53->SetEntries(4973);
   
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
   AText = ptstats->AddText("Entries = 4973   ");
   AText = ptstats->AddText("Mean  =  7.002");
   AText = ptstats->AddText("Std Dev   = 0.08144");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__53->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__53);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__53->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__53->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__53->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__53->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__53->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__53->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__53->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__53->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__53->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__53->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__53->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__53->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__53->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__53->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__53->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__53->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__53->Draw("");
   
   TH1D *muonCSCDigis__54 = new TH1D("muonCSCDigis__54","muonCSCDigis",22,-6,16);
   muonCSCDigis__54->SetBinContent(7,1234);
   muonCSCDigis__54->SetBinContent(8,1296);
   muonCSCDigis__54->SetBinContent(9,1228);
   muonCSCDigis__54->SetBinContent(10,1304);
   muonCSCDigis__54->SetEntries(5062);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 5062   ");
   AText = ptstats->AddText("Mean  =  1.514");
   AText = ptstats->AddText("Std Dev   =  1.119");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__54->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__54);
   muonCSCDigis__54->SetMarkerStyle(8);
   muonCSCDigis__54->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__54->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__54->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__54->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__54->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__54->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__54->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__54->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__54->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__54->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__54->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__54->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__54->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 4973   ");
   AText = ptstats->AddText("Mean  =  7.002");
   AText = ptstats->AddText("Std Dev   = 0.08144");
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
   AText = ptstats->AddText("Entries = 5062   ");
   AText = ptstats->AddText("Mean  =  1.514");
   AText = ptstats->AddText("Std Dev   =  1.119");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2808291,0.9343782,0.7191709,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCLCTDigi BX");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
