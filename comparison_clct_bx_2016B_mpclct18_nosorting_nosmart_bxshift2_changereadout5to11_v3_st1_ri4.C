void comparison_clct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st1_ri4()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 15:28:40 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-2.993658,18.12903,1.623863);
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
   
   TH1D *simCscTriggerPrimitiveDigis__73 = new TH1D("simCscTriggerPrimitiveDigis__73","CSCCLCTDigi BX ME1/a",22,-6,16);
   
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
   AText = ptstats->AddText("Entries = 0      ");
   AText = ptstats->AddText("Mean  =      0");
   AText = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__73->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__73);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__73->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__73->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__73->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__73->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__73->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__73->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__73->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__73->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__73->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__73->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__73->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__73->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__73->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__73->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__73->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__73->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__73->Draw("");
   
   TH1D *muonCSCDigis__74 = new TH1D("muonCSCDigis__74","muonCSCDigis",22,-6,16);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 0      ");
   AText = ptstats->AddText("Mean  =      0");
   AText = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__74->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__74);
   muonCSCDigis__74->SetMarkerStyle(8);
   muonCSCDigis__74->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__74->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__74->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__74->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__74->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__74->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__74->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__74->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__74->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__74->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__74->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__74->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__74->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 0      ");
   AText = ptstats->AddText("Mean  =      0");
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
   AText = ptstats->AddText("Entries = 0      ");
   AText = ptstats->AddText("Mean  =      0");
   AText = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2010553,0.9343782,0.7989447,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCLCTDigi BX ME1/a");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
