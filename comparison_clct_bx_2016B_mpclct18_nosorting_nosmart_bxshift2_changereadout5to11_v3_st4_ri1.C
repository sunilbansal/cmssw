void comparison_clct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st4_ri1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 15:28:43 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-0.5326987,18.12903,4.192568);
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
   
   TH1D *simCscTriggerPrimitiveDigis__87 = new TH1D("simCscTriggerPrimitiveDigis__87","CSCCLCTDigi BX ME4/1",22,-6,16);
   simCscTriggerPrimitiveDigis__87->SetBinContent(12,3);
   simCscTriggerPrimitiveDigis__87->SetBinContent(14,3636);
   simCscTriggerPrimitiveDigis__87->SetEntries(3639);
   
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
   AText = ptstats->AddText("Entries = 3639   ");
   AText = ptstats->AddText("Mean  =  6.998");
   AText = ptstats->AddText("Std Dev   = 0.0574");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__87->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__87);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__87->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__87->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__87->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__87->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__87->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__87->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__87->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__87->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__87->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__87->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__87->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__87->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__87->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__87->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__87->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__87->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__87->Draw("");
   
   TH1D *muonCSCDigis__88 = new TH1D("muonCSCDigis__88","muonCSCDigis",22,-6,16);
   muonCSCDigis__88->SetBinContent(7,939);
   muonCSCDigis__88->SetBinContent(8,952);
   muonCSCDigis__88->SetBinContent(9,889);
   muonCSCDigis__88->SetBinContent(10,859);
   muonCSCDigis__88->SetEntries(3639);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 3639   ");
   AText = ptstats->AddText("Mean  =  1.458");
   AText = ptstats->AddText("Std Dev   =  1.112");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__88->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__88);
   muonCSCDigis__88->SetMarkerStyle(8);
   muonCSCDigis__88->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__88->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__88->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__88->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__88->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__88->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__88->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__88->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__88->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__88->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__88->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__88->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__88->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 3639   ");
   AText = ptstats->AddText("Mean  =  6.998");
   AText = ptstats->AddText("Std Dev   = 0.0574");
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
   AText = ptstats->AddText("Entries = 3639   ");
   AText = ptstats->AddText("Mean  =  1.458");
   AText = ptstats->AddText("Std Dev   =  1.112");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2054523,0.9343782,0.7945477,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCLCTDigi BX ME4/1");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
