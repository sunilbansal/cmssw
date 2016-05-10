void comparison_clct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st4_ri2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 15:28:43 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-0.6917834,18.12903,3.920106);
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
   
   TH1D *simCscTriggerPrimitiveDigis__89 = new TH1D("simCscTriggerPrimitiveDigis__89","CSCCLCTDigi BX ME4/2",22,-6,16);
   simCscTriggerPrimitiveDigis__89->SetBinContent(12,2);
   simCscTriggerPrimitiveDigis__89->SetBinContent(14,1980);
   simCscTriggerPrimitiveDigis__89->SetEntries(1982);
   
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
   AText = ptstats->AddText("Entries = 1982   ");
   AText = ptstats->AddText("Mean  =  6.998");
   AText = ptstats->AddText("Std Dev   = 0.0635");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__89->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__89);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__89->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__89->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__89->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__89->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__89->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__89->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__89->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__89->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__89->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__89->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__89->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__89->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__89->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__89->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__89->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__89->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__89->Draw("");
   
   TH1D *muonCSCDigis__90 = new TH1D("muonCSCDigis__90","muonCSCDigis",22,-6,16);
   muonCSCDigis__90->SetBinContent(7,469);
   muonCSCDigis__90->SetBinContent(8,504);
   muonCSCDigis__90->SetBinContent(9,449);
   muonCSCDigis__90->SetBinContent(10,560);
   muonCSCDigis__90->SetEntries(1982);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 1982   ");
   AText = ptstats->AddText("Mean  =  1.555");
   AText = ptstats->AddText("Std Dev   =  1.134");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__90->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__90);
   muonCSCDigis__90->SetMarkerStyle(8);
   muonCSCDigis__90->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__90->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__90->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__90->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__90->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__90->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__90->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__90->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__90->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__90->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__90->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__90->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__90->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 1982   ");
   AText = ptstats->AddText("Mean  =  6.998");
   AText = ptstats->AddText("Std Dev   = 0.0635");
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
   AText = ptstats->AddText("Entries = 1982   ");
   AText = ptstats->AddText("Mean  =  1.555");
   AText = ptstats->AddText("Std Dev   =  1.134");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2016834,0.9343782,0.7983166,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCLCTDigi BX ME4/2");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
