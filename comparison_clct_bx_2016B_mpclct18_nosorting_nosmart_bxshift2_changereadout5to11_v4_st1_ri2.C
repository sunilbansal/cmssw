void comparison_clct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st1_ri2()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 01:08:04 2016) by ROOT version6.06/01
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
   
   TH1D *simCscTriggerPrimitiveDigis__80 = new TH1D("simCscTriggerPrimitiveDigis__80","CSCCLCTDigi BX ME1/3",22,-6,16);
   simCscTriggerPrimitiveDigis__80->SetBinContent(14,97);
   simCscTriggerPrimitiveDigis__80->SetEntries(97);
   
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
   simCscTriggerPrimitiveDigis__80->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__80);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__80->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__80->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__80->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__80->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__80->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__80->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__80->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__80->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__80->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__80->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__80->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__80->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__80->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__80->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__80->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__80->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__80->Draw("");
   
   TH1D *muonCSCDigis__81 = new TH1D("muonCSCDigis__81","muonCSCDigis",22,-6,16);
   muonCSCDigis__81->SetBinContent(7,20);
   muonCSCDigis__81->SetBinContent(8,28);
   muonCSCDigis__81->SetBinContent(9,29);
   muonCSCDigis__81->SetBinContent(10,20);
   muonCSCDigis__81->SetEntries(97);
   
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
   AText = ptstats->AddText("Mean  =  1.505");
   AText = ptstats->AddText("Std Dev   =  1.037");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__81->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__81);
   muonCSCDigis__81->SetMarkerStyle(8);
   muonCSCDigis__81->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__81->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__81->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__81->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__81->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__81->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__81->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__81->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__81->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__81->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__81->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__81->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__81->Draw("sames");
   
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
   AText = ptstats->AddText("Mean  =  1.505");
   AText = ptstats->AddText("Std Dev   =  1.037");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2016834,0.9343782,0.7983166,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCLCTDigi BX ME1/3");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
