void comparison_alct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st2_ri1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 01:08:03 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-24.3871,18.12903,138.1935);
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
   
   TH1D *simCscTriggerPrimitiveDigis__64 = new TH1D("simCscTriggerPrimitiveDigis__64","CSCALCTDigi BX ME2/1",22,-6,16);
   simCscTriggerPrimitiveDigis__64->SetBinContent(7,81);
   simCscTriggerPrimitiveDigis__64->SetBinContent(8,97);
   simCscTriggerPrimitiveDigis__64->SetBinContent(9,109);
   simCscTriggerPrimitiveDigis__64->SetBinContent(10,99);
   simCscTriggerPrimitiveDigis__64->SetBinContent(11,102);
   simCscTriggerPrimitiveDigis__64->SetBinContent(12,120);
   simCscTriggerPrimitiveDigis__64->SetBinContent(13,82);
   simCscTriggerPrimitiveDigis__64->SetEntries(690);
   
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
   AText = ptstats->AddText("Entries = 690    ");
   AText = ptstats->AddText("Mean  =  3.061");
   AText = ptstats->AddText("Std Dev   =   1.92");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__64->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__64);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__64->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__64->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__64->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__64->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__64->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__64->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__64->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__64->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__64->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__64->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__64->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__64->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__64->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__64->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__64->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__64->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__64->Draw("");
   
   TH1D *muonCSCDigis__65 = new TH1D("muonCSCDigis__65","muonCSCDigis",22,-6,16);
   muonCSCDigis__65->SetBinContent(7,81);
   muonCSCDigis__65->SetBinContent(8,97);
   muonCSCDigis__65->SetBinContent(9,109);
   muonCSCDigis__65->SetBinContent(10,99);
   muonCSCDigis__65->SetBinContent(11,102);
   muonCSCDigis__65->SetBinContent(12,120);
   muonCSCDigis__65->SetBinContent(13,82);
   muonCSCDigis__65->SetEntries(690);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 690    ");
   AText = ptstats->AddText("Mean  =  3.061");
   AText = ptstats->AddText("Std Dev   =   1.92");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__65->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__65);
   muonCSCDigis__65->SetMarkerStyle(8);
   muonCSCDigis__65->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__65->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__65->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__65->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__65->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__65->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__65->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__65->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__65->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__65->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__65->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__65->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__65->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 690    ");
   AText = ptstats->AddText("Mean  =  3.061");
   AText = ptstats->AddText("Std Dev   =   1.92");
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
   AText = ptstats->AddText("Entries = 690    ");
   AText = ptstats->AddText("Mean  =  3.061");
   AText = ptstats->AddText("Std Dev   =   1.92");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2054523,0.9343782,0.7945477,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCALCTDigi BX ME2/1");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
