void comparison_clct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st2_ri1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 15:28:41 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-0.4341111,18.12903,4.466829);
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
   
   TH1D *simCscTriggerPrimitiveDigis__79 = new TH1D("simCscTriggerPrimitiveDigis__79","CSCCLCTDigi BX ME2/1",22,-6,16);
   simCscTriggerPrimitiveDigis__79->SetBinContent(12,4);
   simCscTriggerPrimitiveDigis__79->SetBinContent(14,6633);
   simCscTriggerPrimitiveDigis__79->SetEntries(6637);
   
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
   AText = ptstats->AddText("Entries = 6637   ");
   AText = ptstats->AddText("Mean  =  6.999");
   AText = ptstats->AddText("Std Dev   = 0.04908");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__79->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__79);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__79->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__79->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__79->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__79->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__79->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__79->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__79->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__79->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__79->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__79->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__79->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__79->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__79->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__79->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__79->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__79->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__79->Draw("");
   
   TH1D *muonCSCDigis__80 = new TH1D("muonCSCDigis__80","muonCSCDigis",22,-6,16);
   muonCSCDigis__80->SetBinContent(7,1671);
   muonCSCDigis__80->SetBinContent(8,1650);
   muonCSCDigis__80->SetBinContent(9,1653);
   muonCSCDigis__80->SetBinContent(10,1663);
   muonCSCDigis__80->SetEntries(6637);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 6637   ");
   AText = ptstats->AddText("Mean  =  1.498");
   AText = ptstats->AddText("Std Dev   =   1.12");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__80->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__80);
   muonCSCDigis__80->SetMarkerStyle(8);
   muonCSCDigis__80->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__80->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__80->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__80->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__80->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__80->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__80->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__80->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__80->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__80->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__80->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__80->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__80->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 6637   ");
   AText = ptstats->AddText("Mean  =  6.999");
   AText = ptstats->AddText("Std Dev   = 0.04908");
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
   AText = ptstats->AddText("Entries = 6637   ");
   AText = ptstats->AddText("Mean  =  1.498");
   AText = ptstats->AddText("Std Dev   =   1.12");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2054523,0.9343782,0.7945477,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCLCTDigi BX ME2/1");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
