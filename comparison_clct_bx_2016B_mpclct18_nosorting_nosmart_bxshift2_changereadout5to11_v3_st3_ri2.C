void comparison_clct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st3_ri2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 02:22:09 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-28.45161,18.12903,161.2258);
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
   
   TH1D *simCscTriggerPrimitiveDigis__67 = new TH1D("simCscTriggerPrimitiveDigis__67","CSCCLCTDigi BX",22,-6,16);
   simCscTriggerPrimitiveDigis__67->SetBinContent(14,140);
   simCscTriggerPrimitiveDigis__67->SetEntries(140);
   
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
   AText = ptstats->AddText("Entries = 140    ");
   AText = ptstats->AddText("Mean  =      7");
   AText = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__67->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__67);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__67->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__67->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__67->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__67->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__67->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__67->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__67->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__67->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__67->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__67->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__67->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__67->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__67->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__67->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__67->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__67->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__67->Draw("");
   
   TH1D *muonCSCDigis__68 = new TH1D("muonCSCDigis__68","muonCSCDigis",22,-6,16);
   muonCSCDigis__68->SetBinContent(7,31);
   muonCSCDigis__68->SetBinContent(8,41);
   muonCSCDigis__68->SetBinContent(9,31);
   muonCSCDigis__68->SetBinContent(10,37);
   muonCSCDigis__68->SetEntries(140);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 140    ");
   AText = ptstats->AddText("Mean  =  1.529");
   AText = ptstats->AddText("Std Dev   =  1.105");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__68->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__68);
   muonCSCDigis__68->SetMarkerStyle(8);
   muonCSCDigis__68->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__68->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__68->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__68->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__68->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__68->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__68->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__68->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__68->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__68->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__68->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__68->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__68->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 140    ");
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
   AText = ptstats->AddText("Entries = 140    ");
   AText = ptstats->AddText("Mean  =  1.529");
   AText = ptstats->AddText("Std Dev   =  1.105");
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
