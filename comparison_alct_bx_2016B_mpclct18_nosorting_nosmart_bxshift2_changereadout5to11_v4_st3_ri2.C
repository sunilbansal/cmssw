void comparison_alct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st3_ri2()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 01:08:03 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-2.845161,18.12903,16.12258);
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
   
   TH1D *simCscTriggerPrimitiveDigis__70 = new TH1D("simCscTriggerPrimitiveDigis__70","CSCALCTDigi BX ME3/2",22,-6,16);
   simCscTriggerPrimitiveDigis__70->SetBinContent(7,8);
   simCscTriggerPrimitiveDigis__70->SetBinContent(8,10);
   simCscTriggerPrimitiveDigis__70->SetBinContent(9,11);
   simCscTriggerPrimitiveDigis__70->SetBinContent(10,14);
   simCscTriggerPrimitiveDigis__70->SetBinContent(11,5);
   simCscTriggerPrimitiveDigis__70->SetBinContent(12,11);
   simCscTriggerPrimitiveDigis__70->SetBinContent(13,10);
   simCscTriggerPrimitiveDigis__70->SetEntries(69);
   
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
   AText = ptstats->AddText("Entries = 69     ");
   AText = ptstats->AddText("Mean  =  3.029");
   AText = ptstats->AddText("Std Dev   =  1.948");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__70->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__70);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__70->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__70->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__70->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__70->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__70->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__70->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__70->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__70->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__70->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__70->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__70->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__70->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__70->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__70->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__70->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__70->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__70->Draw("");
   
   TH1D *muonCSCDigis__71 = new TH1D("muonCSCDigis__71","muonCSCDigis",22,-6,16);
   muonCSCDigis__71->SetBinContent(7,8);
   muonCSCDigis__71->SetBinContent(8,10);
   muonCSCDigis__71->SetBinContent(9,11);
   muonCSCDigis__71->SetBinContent(10,14);
   muonCSCDigis__71->SetBinContent(11,5);
   muonCSCDigis__71->SetBinContent(12,11);
   muonCSCDigis__71->SetBinContent(13,10);
   muonCSCDigis__71->SetEntries(69);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 69     ");
   AText = ptstats->AddText("Mean  =  3.029");
   AText = ptstats->AddText("Std Dev   =  1.948");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__71->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__71);
   muonCSCDigis__71->SetMarkerStyle(8);
   muonCSCDigis__71->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__71->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__71->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__71->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__71->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__71->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__71->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__71->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__71->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__71->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__71->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__71->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__71->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 69     ");
   AText = ptstats->AddText("Mean  =  3.029");
   AText = ptstats->AddText("Std Dev   =  1.948");
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
   AText = ptstats->AddText("Entries = 69     ");
   AText = ptstats->AddText("Mean  =  3.029");
   AText = ptstats->AddText("Std Dev   =  1.948");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2016834,0.9343782,0.7983166,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCALCTDigi BX ME3/2");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
