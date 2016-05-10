void comparison_clct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st1_ri1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 01:08:04 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-1.067806,18.12903,4.044034);
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
   
   TH1D *simCscTriggerPrimitiveDigis__76 = new TH1D("simCscTriggerPrimitiveDigis__76","CSCCLCTDigi BX ME1/b",22,-6,16);
   simCscTriggerPrimitiveDigis__76->SetBinContent(12,1);
   simCscTriggerPrimitiveDigis__76->SetBinContent(14,2416);
   simCscTriggerPrimitiveDigis__76->SetBinContent(15,7);
   simCscTriggerPrimitiveDigis__76->SetEntries(2424);
   
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
   AText = ptstats->AddText("Entries = 2424   ");
   AText = ptstats->AddText("Mean  =  7.002");
   AText = ptstats->AddText("Std Dev   = 0.06733");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__76->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__76);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__76->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__76->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__76->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__76->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__76->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__76->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__76->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__76->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__76->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__76->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__76->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__76->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__76->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__76->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__76->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__76->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__76->Draw("");
   
   TH1D *muonCSCDigis__77 = new TH1D("muonCSCDigis__77","muonCSCDigis",22,-6,16);
   muonCSCDigis__77->SetBinContent(7,607);
   muonCSCDigis__77->SetBinContent(8,650);
   muonCSCDigis__77->SetBinContent(9,566);
   muonCSCDigis__77->SetBinContent(10,644);
   muonCSCDigis__77->SetEntries(2467);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 2467   ");
   AText = ptstats->AddText("Mean  =  1.505");
   AText = ptstats->AddText("Std Dev   =  1.124");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__77->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__77);
   muonCSCDigis__77->SetMarkerStyle(8);
   muonCSCDigis__77->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__77->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__77->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__77->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__77->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__77->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__77->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__77->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__77->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__77->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__77->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__77->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__77->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 2424   ");
   AText = ptstats->AddText("Mean  =  7.002");
   AText = ptstats->AddText("Std Dev   = 0.06733");
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
   AText = ptstats->AddText("Entries = 2467   ");
   AText = ptstats->AddText("Mean  =  1.505");
   AText = ptstats->AddText("Std Dev   =  1.124");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2004271,0.9343782,0.7995729,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCLCTDigi BX ME1/b");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
