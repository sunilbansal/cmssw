void comparison_clct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st1_ri4()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 01:08:04 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-2.993658,18.12903,1.623863);
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
   
   TH1D *simCscTriggerPrimitiveDigis__78 = new TH1D("simCscTriggerPrimitiveDigis__78","CSCCLCTDigi BX ME1/a",22,-6,16);
   
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
   AText = ptstats->AddText("Entries = 0      ");
   AText = ptstats->AddText("Mean  =      0");
   AText = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__78->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__78);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__78->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__78->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__78->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__78->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__78->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__78->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__78->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__78->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__78->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__78->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__78->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__78->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__78->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__78->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__78->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__78->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__78->Draw("");
   
   TH1D *muonCSCDigis__79 = new TH1D("muonCSCDigis__79","muonCSCDigis",22,-6,16);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 0      ");
   AText = ptstats->AddText("Mean  =      0");
   AText = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__79->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__79);
   muonCSCDigis__79->SetMarkerStyle(8);
   muonCSCDigis__79->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__79->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__79->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__79->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__79->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__79->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__79->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__79->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__79->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__79->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__79->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__79->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__79->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 0      ");
   AText = ptstats->AddText("Mean  =      0");
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
   AText = ptstats->AddText("Entries = 0      ");
   AText = ptstats->AddText("Mean  =      0");
   AText = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2010553,0.9343782,0.7989447,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCLCTDigi BX ME1/a");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
