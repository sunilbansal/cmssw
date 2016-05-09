void comparison_clct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v2_clctpretrig2()
{
//=========Macro generated from canvas: c/c
//=========  (Sat May  7 09:45:47 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-1188.668,18.12903,6735.784);
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
   
   TH1D *simCscTriggerPrimitiveDigis__8 = new TH1D("simCscTriggerPrimitiveDigis__8","CSCCLCTDigi BX",22,-6,16);
   simCscTriggerPrimitiveDigis__8->SetBinContent(12,102);
   simCscTriggerPrimitiveDigis__8->SetBinContent(13,2570);
   simCscTriggerPrimitiveDigis__8->SetBinContent(14,5849);
   simCscTriggerPrimitiveDigis__8->SetEntries(8521);
   
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
   AText = ptstats->AddText("Entries = 8521   ");
   AText = ptstats->AddText("Mean  =  6.674");
   AText = ptstats->AddText("Std Dev   = 0.4935");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__8->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__8);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__8->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__8->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__8->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__8->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__8->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__8->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__8->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__8->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__8->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__8->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__8->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__8->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__8->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__8->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__8->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__8->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__8->Draw("");
   
   TH1D *muonCSCDigis__9 = new TH1D("muonCSCDigis__9","muonCSCDigis",22,-6,16);
   muonCSCDigis__9->SetBinContent(7,2136);
   muonCSCDigis__9->SetBinContent(8,2166);
   muonCSCDigis__9->SetBinContent(9,2094);
   muonCSCDigis__9->SetBinContent(10,2213);
   muonCSCDigis__9->SetEntries(8609);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 8609   ");
   AText = ptstats->AddText("Mean  =  1.509");
   AText = ptstats->AddText("Std Dev   =  1.123");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__9->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__9);
   muonCSCDigis__9->SetMarkerStyle(8);
   muonCSCDigis__9->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__9->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__9->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__9->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__9->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__9->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__9->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__9->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__9->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__9->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__9->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__9->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__9->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 8521   ");
   AText = ptstats->AddText("Mean  =  6.674");
   AText = ptstats->AddText("Std Dev   = 0.4935");
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
   AText = ptstats->AddText("Entries = 8609   ");
   AText = ptstats->AddText("Mean  =  1.509");
   AText = ptstats->AddText("Std Dev   =  1.123");
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
