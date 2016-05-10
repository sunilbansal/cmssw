void comparison_alct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st1_ri1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 01:08:02 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-125.7968,18.12903,712.8484);
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
   
   TH1D *simCscTriggerPrimitiveDigis__56 = new TH1D("simCscTriggerPrimitiveDigis__56","CSCALCTDigi BX ME1/b",22,-6,16);
   simCscTriggerPrimitiveDigis__56->SetBinContent(7,470);
   simCscTriggerPrimitiveDigis__56->SetBinContent(8,499);
   simCscTriggerPrimitiveDigis__56->SetBinContent(9,607);
   simCscTriggerPrimitiveDigis__56->SetBinContent(10,619);
   simCscTriggerPrimitiveDigis__56->SetBinContent(11,579);
   simCscTriggerPrimitiveDigis__56->SetBinContent(12,511);
   simCscTriggerPrimitiveDigis__56->SetBinContent(13,472);
   simCscTriggerPrimitiveDigis__56->SetEntries(3757);
   
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
   AText = ptstats->AddText("Entries = 3757   ");
   AText = ptstats->AddText("Mean  =  3.001");
   AText = ptstats->AddText("Std Dev   =   1.91");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__56->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__56);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__56->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__56->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__56->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__56->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__56->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__56->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__56->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__56->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__56->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__56->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__56->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__56->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__56->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__56->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__56->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__56->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__56->Draw("");
   
   TH1D *muonCSCDigis__57 = new TH1D("muonCSCDigis__57","muonCSCDigis",22,-6,16);
   muonCSCDigis__57->SetBinContent(7,470);
   muonCSCDigis__57->SetBinContent(8,499);
   muonCSCDigis__57->SetBinContent(9,607);
   muonCSCDigis__57->SetBinContent(10,619);
   muonCSCDigis__57->SetBinContent(11,579);
   muonCSCDigis__57->SetBinContent(12,511);
   muonCSCDigis__57->SetBinContent(13,472);
   muonCSCDigis__57->SetEntries(3757);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 3757   ");
   AText = ptstats->AddText("Mean  =  3.001");
   AText = ptstats->AddText("Std Dev   =   1.91");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__57->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__57);
   muonCSCDigis__57->SetMarkerStyle(8);
   muonCSCDigis__57->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__57->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__57->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__57->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__57->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__57->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__57->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__57->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__57->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__57->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__57->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__57->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__57->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 3757   ");
   AText = ptstats->AddText("Mean  =  3.001");
   AText = ptstats->AddText("Std Dev   =   1.91");
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
   AText = ptstats->AddText("Entries = 3757   ");
   AText = ptstats->AddText("Mean  =  3.001");
   AText = ptstats->AddText("Std Dev   =   1.91");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2004271,0.9343782,0.7995729,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCALCTDigi BX ME1/b");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
