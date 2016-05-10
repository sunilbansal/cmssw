void comparison_clct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st3_ri1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 15:28:42 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-1.100955,18.12903,4.23188);
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
   
   TH1D *simCscTriggerPrimitiveDigis__83 = new TH1D("simCscTriggerPrimitiveDigis__83","CSCCLCTDigi BX ME3/1",22,-6,16);
   simCscTriggerPrimitiveDigis__83->SetBinContent(12,1);
   simCscTriggerPrimitiveDigis__83->SetBinContent(14,3584);
   simCscTriggerPrimitiveDigis__83->SetEntries(3585);
   
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
   AText = ptstats->AddText("Entries = 3585   ");
   AText = ptstats->AddText("Mean  =  6.999");
   AText = ptstats->AddText("Std Dev   = 0.0334");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__83->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__83);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__83->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__83->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__83->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__83->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__83->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__83->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__83->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__83->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__83->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__83->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__83->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__83->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__83->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__83->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__83->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__83->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__83->Draw("");
   
   TH1D *muonCSCDigis__84 = new TH1D("muonCSCDigis__84","muonCSCDigis",22,-6,16);
   muonCSCDigis__84->SetBinContent(7,882);
   muonCSCDigis__84->SetBinContent(8,906);
   muonCSCDigis__84->SetBinContent(9,926);
   muonCSCDigis__84->SetBinContent(10,871);
   muonCSCDigis__84->SetEntries(3585);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 3585   ");
   AText = ptstats->AddText("Mean  =  1.498");
   AText = ptstats->AddText("Std Dev   =  1.108");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__84->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__84);
   muonCSCDigis__84->SetMarkerStyle(8);
   muonCSCDigis__84->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__84->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__84->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__84->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__84->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__84->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__84->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__84->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__84->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__84->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__84->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__84->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__84->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 3585   ");
   AText = ptstats->AddText("Mean  =  6.999");
   AText = ptstats->AddText("Std Dev   = 0.0334");
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
   AText = ptstats->AddText("Entries = 3585   ");
   AText = ptstats->AddText("Mean  =  1.498");
   AText = ptstats->AddText("Std Dev   =  1.108");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2054523,0.9343782,0.7945477,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCLCTDigi BX ME3/1");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
