void comparison_clct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st3_ri2()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 01:08:05 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-2.180745,18.12903,2.436776);
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
   
   TH1D *simCscTriggerPrimitiveDigis__90 = new TH1D("simCscTriggerPrimitiveDigis__90","CSCCLCTDigi BX ME3/2",22,-6,16);
   simCscTriggerPrimitiveDigis__90->SetBinContent(14,65);
   simCscTriggerPrimitiveDigis__90->SetEntries(65);
   
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
   AText = ptstats->AddText("Entries = 65     ");
   AText = ptstats->AddText("Mean  =      7");
   AText = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__90->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__90);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__90->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__90->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__90->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__90->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__90->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__90->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__90->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__90->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__90->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__90->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__90->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__90->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__90->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__90->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__90->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__90->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__90->Draw("");
   
   TH1D *muonCSCDigis__91 = new TH1D("muonCSCDigis__91","muonCSCDigis",22,-6,16);
   muonCSCDigis__91->SetBinContent(7,16);
   muonCSCDigis__91->SetBinContent(8,17);
   muonCSCDigis__91->SetBinContent(9,13);
   muonCSCDigis__91->SetBinContent(10,19);
   muonCSCDigis__91->SetEntries(65);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 65     ");
   AText = ptstats->AddText("Mean  =  1.538");
   AText = ptstats->AddText("Std Dev   =  1.151");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__91->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__91);
   muonCSCDigis__91->SetMarkerStyle(8);
   muonCSCDigis__91->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__91->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__91->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__91->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__91->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__91->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__91->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__91->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__91->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__91->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__91->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__91->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__91->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 65     ");
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
   AText = ptstats->AddText("Entries = 65     ");
   AText = ptstats->AddText("Mean  =  1.538");
   AText = ptstats->AddText("Std Dev   =  1.151");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2016834,0.9343782,0.7983166,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCLCTDigi BX ME3/2");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
