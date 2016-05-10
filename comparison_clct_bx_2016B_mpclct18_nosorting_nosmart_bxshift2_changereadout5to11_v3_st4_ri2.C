void comparison_clct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st4_ri2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 02:22:09 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-77.22581,18.12903,437.6129);
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
   
   TH1D *simCscTriggerPrimitiveDigis__71 = new TH1D("simCscTriggerPrimitiveDigis__71","CSCCLCTDigi BX",22,-6,16);
   simCscTriggerPrimitiveDigis__71->SetBinContent(12,1);
   simCscTriggerPrimitiveDigis__71->SetBinContent(14,380);
   simCscTriggerPrimitiveDigis__71->SetEntries(381);
   
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
   AText = ptstats->AddText("Entries = 381    ");
   AText = ptstats->AddText("Mean  =  6.995");
   AText = ptstats->AddText("Std Dev   = 0.1023");
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
   muonCSCDigis__72->SetBinContent(7,85);
   muonCSCDigis__72->SetBinContent(8,94);
   muonCSCDigis__72->SetBinContent(9,97);
   muonCSCDigis__72->SetBinContent(10,105);
   muonCSCDigis__72->SetEntries(381);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 381    ");
   AText = ptstats->AddText("Mean  =  1.583");
   AText = ptstats->AddText("Std Dev   =  1.114");
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
   AText = ptstats->AddText("Entries = 381    ");
   AText = ptstats->AddText("Mean  =  6.995");
   AText = ptstats->AddText("Std Dev   = 0.1023");
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
   AText = ptstats->AddText("Entries = 381    ");
   AText = ptstats->AddText("Mean  =  1.583");
   AText = ptstats->AddText("Std Dev   =  1.114");
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
