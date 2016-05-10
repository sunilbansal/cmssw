void comparison_alct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st3_ri1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 15:28:38 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-122.3419,18.12903,693.271);
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
   
   TH1D *simCscTriggerPrimitiveDigis__63 = new TH1D("simCscTriggerPrimitiveDigis__63","CSCALCTDigi BX ME3/1",22,-6,16);
   simCscTriggerPrimitiveDigis__63->SetBinContent(7,463);
   simCscTriggerPrimitiveDigis__63->SetBinContent(8,480);
   simCscTriggerPrimitiveDigis__63->SetBinContent(9,527);
   simCscTriggerPrimitiveDigis__63->SetBinContent(10,602);
   simCscTriggerPrimitiveDigis__63->SetBinContent(11,538);
   simCscTriggerPrimitiveDigis__63->SetBinContent(12,534);
   simCscTriggerPrimitiveDigis__63->SetBinContent(13,456);
   simCscTriggerPrimitiveDigis__63->SetEntries(3600);
   
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
   AText = ptstats->AddText("Entries = 3600   ");
   AText = ptstats->AddText("Mean  =  3.027");
   AText = ptstats->AddText("Std Dev   =  1.929");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__63->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__63);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__63->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__63->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__63->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__63->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__63->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__63->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__63->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__63->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__63->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__63->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__63->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__63->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__63->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__63->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__63->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__63->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__63->Draw("");
   
   TH1D *muonCSCDigis__64 = new TH1D("muonCSCDigis__64","muonCSCDigis",22,-6,16);
   muonCSCDigis__64->SetBinContent(7,463);
   muonCSCDigis__64->SetBinContent(8,480);
   muonCSCDigis__64->SetBinContent(9,527);
   muonCSCDigis__64->SetBinContent(10,602);
   muonCSCDigis__64->SetBinContent(11,538);
   muonCSCDigis__64->SetBinContent(12,534);
   muonCSCDigis__64->SetBinContent(13,456);
   muonCSCDigis__64->SetEntries(3600);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 3600   ");
   AText = ptstats->AddText("Mean  =  3.027");
   AText = ptstats->AddText("Std Dev   =  1.929");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__64->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__64);
   muonCSCDigis__64->SetMarkerStyle(8);
   muonCSCDigis__64->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__64->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__64->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__64->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__64->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__64->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__64->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__64->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__64->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__64->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__64->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__64->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__64->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 3600   ");
   AText = ptstats->AddText("Mean  =  3.027");
   AText = ptstats->AddText("Std Dev   =  1.929");
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
   AText = ptstats->AddText("Entries = 3600   ");
   AText = ptstats->AddText("Mean  =  3.027");
   AText = ptstats->AddText("Std Dev   =  1.929");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2054523,0.9343782,0.7945477,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCALCTDigi BX ME3/1");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
