void comparison_clct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st2_ri1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 02:22:08 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-263.1774,18.12903,1491.339);
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
   
   TH1D *simCscTriggerPrimitiveDigis__61 = new TH1D("simCscTriggerPrimitiveDigis__61","CSCCLCTDigi BX",22,-6,16);
   simCscTriggerPrimitiveDigis__61->SetBinContent(14,1295);
   simCscTriggerPrimitiveDigis__61->SetEntries(1295);
   
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
   AText = ptstats->AddText("Entries = 1295   ");
   AText = ptstats->AddText("Mean  =      7");
   AText = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__61->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__61);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__61->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__61->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__61->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__61->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__61->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__61->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__61->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__61->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__61->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__61->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__61->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__61->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__61->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__61->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__61->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__61->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__61->Draw("");
   
   TH1D *muonCSCDigis__62 = new TH1D("muonCSCDigis__62","muonCSCDigis",22,-6,16);
   muonCSCDigis__62->SetBinContent(7,348);
   muonCSCDigis__62->SetBinContent(8,300);
   muonCSCDigis__62->SetBinContent(9,320);
   muonCSCDigis__62->SetBinContent(10,327);
   muonCSCDigis__62->SetEntries(1295);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 1295   ");
   AText = ptstats->AddText("Mean  =  1.483");
   AText = ptstats->AddText("Std Dev   =  1.137");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__62->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__62);
   muonCSCDigis__62->SetMarkerStyle(8);
   muonCSCDigis__62->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__62->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__62->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__62->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__62->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__62->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__62->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__62->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__62->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__62->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__62->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__62->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__62->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 1295   ");
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
   AText = ptstats->AddText("Entries = 1295   ");
   AText = ptstats->AddText("Mean  =  1.483");
   AText = ptstats->AddText("Std Dev   =  1.137");
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
