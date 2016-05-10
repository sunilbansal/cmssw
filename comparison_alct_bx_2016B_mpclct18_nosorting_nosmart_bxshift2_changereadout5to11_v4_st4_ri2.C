void comparison_alct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st4_ri2()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 01:08:04 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-7.519355,18.12903,42.60968);
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
   
   TH1D *simCscTriggerPrimitiveDigis__74 = new TH1D("simCscTriggerPrimitiveDigis__74","CSCALCTDigi BX ME4/2",22,-6,16);
   simCscTriggerPrimitiveDigis__74->SetBinContent(7,23);
   simCscTriggerPrimitiveDigis__74->SetBinContent(8,24);
   simCscTriggerPrimitiveDigis__74->SetBinContent(9,17);
   simCscTriggerPrimitiveDigis__74->SetBinContent(10,29);
   simCscTriggerPrimitiveDigis__74->SetBinContent(11,21);
   simCscTriggerPrimitiveDigis__74->SetBinContent(12,33);
   simCscTriggerPrimitiveDigis__74->SetBinContent(13,37);
   simCscTriggerPrimitiveDigis__74->SetEntries(184);
   
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
   AText = ptstats->AddText("Entries = 184    ");
   AText = ptstats->AddText("Mean  =  3.348");
   AText = ptstats->AddText("Std Dev   =  2.064");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__74->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__74);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__74->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__74->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__74->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__74->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__74->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__74->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__74->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__74->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__74->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__74->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__74->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__74->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__74->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__74->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__74->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__74->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__74->Draw("");
   
   TH1D *muonCSCDigis__75 = new TH1D("muonCSCDigis__75","muonCSCDigis",22,-6,16);
   muonCSCDigis__75->SetBinContent(7,23);
   muonCSCDigis__75->SetBinContent(8,24);
   muonCSCDigis__75->SetBinContent(9,17);
   muonCSCDigis__75->SetBinContent(10,29);
   muonCSCDigis__75->SetBinContent(11,21);
   muonCSCDigis__75->SetBinContent(12,33);
   muonCSCDigis__75->SetBinContent(13,37);
   muonCSCDigis__75->SetEntries(184);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 184    ");
   AText = ptstats->AddText("Mean  =  3.348");
   AText = ptstats->AddText("Std Dev   =  2.064");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__75->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__75);
   muonCSCDigis__75->SetMarkerStyle(8);
   muonCSCDigis__75->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__75->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__75->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__75->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__75->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__75->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__75->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__75->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__75->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__75->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__75->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__75->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__75->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 184    ");
   AText = ptstats->AddText("Mean  =  3.348");
   AText = ptstats->AddText("Std Dev   =  2.064");
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
   AText = ptstats->AddText("Entries = 184    ");
   AText = ptstats->AddText("Mean  =  3.348");
   AText = ptstats->AddText("Std Dev   =  2.064");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2016834,0.9343782,0.7983166,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCALCTDigi BX ME4/2");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
