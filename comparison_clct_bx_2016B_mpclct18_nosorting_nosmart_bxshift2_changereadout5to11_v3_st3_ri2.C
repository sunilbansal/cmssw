void comparison_clct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st3_ri2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 15:28:42 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-1.167583,18.12903,3.449938);
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
   
   TH1D *simCscTriggerPrimitiveDigis__85 = new TH1D("simCscTriggerPrimitiveDigis__85","CSCCLCTDigi BX ME3/2",22,-6,16);
   simCscTriggerPrimitiveDigis__85->SetBinContent(14,670);
   simCscTriggerPrimitiveDigis__85->SetEntries(670);
   
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
   AText = ptstats->AddText("Entries = 670    ");
   AText = ptstats->AddText("Mean  =      7");
   AText = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__85->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__85);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__85->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__85->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__85->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__85->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__85->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__85->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__85->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__85->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__85->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__85->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__85->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__85->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__85->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__85->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__85->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__85->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__85->Draw("");
   
   TH1D *muonCSCDigis__86 = new TH1D("muonCSCDigis__86","muonCSCDigis",22,-6,16);
   muonCSCDigis__86->SetBinContent(7,146);
   muonCSCDigis__86->SetBinContent(8,171);
   muonCSCDigis__86->SetBinContent(9,173);
   muonCSCDigis__86->SetBinContent(10,180);
   muonCSCDigis__86->SetEntries(670);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 670    ");
   AText = ptstats->AddText("Mean  =  1.578");
   AText = ptstats->AddText("Std Dev   =  1.103");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__86->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__86);
   muonCSCDigis__86->SetMarkerStyle(8);
   muonCSCDigis__86->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__86->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__86->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__86->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__86->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__86->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__86->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__86->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__86->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__86->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__86->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__86->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__86->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 670    ");
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
   AText = ptstats->AddText("Entries = 670    ");
   AText = ptstats->AddText("Mean  =  1.578");
   AText = ptstats->AddText("Std Dev   =  1.103");
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
