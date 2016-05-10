void comparison_clct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st4_ri2()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 01:08:05 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-1.768349,18.12903,2.849172);
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
   
   TH1D *simCscTriggerPrimitiveDigis__94 = new TH1D("simCscTriggerPrimitiveDigis__94","CSCCLCTDigi BX ME4/2",22,-6,16);
   simCscTriggerPrimitiveDigis__94->SetBinContent(14,168);
   simCscTriggerPrimitiveDigis__94->SetEntries(168);
   
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
   AText = ptstats->AddText("Entries = 168    ");
   AText = ptstats->AddText("Mean  =      7");
   AText = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__94->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__94);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__94->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__94->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__94->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__94->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__94->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__94->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__94->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__94->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__94->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__94->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__94->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__94->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__94->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__94->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__94->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__94->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__94->Draw("");
   
   TH1D *muonCSCDigis__95 = new TH1D("muonCSCDigis__95","muonCSCDigis",22,-6,16);
   muonCSCDigis__95->SetBinContent(7,40);
   muonCSCDigis__95->SetBinContent(8,47);
   muonCSCDigis__95->SetBinContent(9,38);
   muonCSCDigis__95->SetBinContent(10,43);
   muonCSCDigis__95->SetEntries(168);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 168    ");
   AText = ptstats->AddText("Mean  =    1.5");
   AText = ptstats->AddText("Std Dev   =  1.113");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__95->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__95);
   muonCSCDigis__95->SetMarkerStyle(8);
   muonCSCDigis__95->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__95->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__95->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__95->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__95->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__95->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__95->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__95->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__95->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__95->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__95->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__95->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__95->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 168    ");
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
   AText = ptstats->AddText("Entries = 168    ");
   AText = ptstats->AddText("Mean  =    1.5");
   AText = ptstats->AddText("Std Dev   =  1.113");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2016834,0.9343782,0.7983166,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCLCTDigi BX ME4/2");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
