void comparison_clct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st1_ri1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 15:28:40 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-1.264596,18.12903,5.159179);
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
   
   TH1D *simCscTriggerPrimitiveDigis__71 = new TH1D("simCscTriggerPrimitiveDigis__71","CSCCLCTDigi BX ME1/b",22,-6,16);
   simCscTriggerPrimitiveDigis__71->SetBinContent(12,32);
   simCscTriggerPrimitiveDigis__71->SetBinContent(14,25110);
   simCscTriggerPrimitiveDigis__71->SetBinContent(15,67);
   simCscTriggerPrimitiveDigis__71->SetBinContent(16,1);
   simCscTriggerPrimitiveDigis__71->SetEntries(25210);
   
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
   AText = ptstats->AddText("Entries = 25210  ");
   AText = ptstats->AddText("Mean  =      7");
   AText = ptstats->AddText("Std Dev   = 0.08885");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__71->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__71);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__71->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__71->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__71->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__71->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__71->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__71->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__71->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__71->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__71->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__71->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__71->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__71->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__71->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__71->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__71->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__71->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__71->Draw("");
   
   TH1D *muonCSCDigis__72 = new TH1D("muonCSCDigis__72","muonCSCDigis",22,-6,16);
   muonCSCDigis__72->SetBinContent(7,6179);
   muonCSCDigis__72->SetBinContent(8,6608);
   muonCSCDigis__72->SetBinContent(9,6356);
   muonCSCDigis__72->SetBinContent(10,6449);
   muonCSCDigis__72->SetEntries(25592);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 25592  ");
   AText = ptstats->AddText("Mean  =  1.511");
   AText = ptstats->AddText("Std Dev   =  1.112");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__72->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__72);
   muonCSCDigis__72->SetMarkerStyle(8);
   muonCSCDigis__72->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__72->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__72->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__72->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__72->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__72->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__72->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__72->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__72->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__72->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__72->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__72->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__72->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 25210  ");
   AText = ptstats->AddText("Mean  =      7");
   AText = ptstats->AddText("Std Dev   = 0.08885");
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
   AText = ptstats->AddText("Entries = 25592  ");
   AText = ptstats->AddText("Mean  =  1.511");
   AText = ptstats->AddText("Std Dev   =  1.112");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2004271,0.9343782,0.7995729,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCLCTDigi BX ME1/b");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
