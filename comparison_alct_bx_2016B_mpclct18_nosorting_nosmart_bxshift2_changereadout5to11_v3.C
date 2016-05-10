void comparison_alct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 04:10:46 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-1957.877,18.12903,11094.64);
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
   
   TH1D *simCscTriggerPrimitiveDigis__51 = new TH1D("simCscTriggerPrimitiveDigis__51","CSCALCTDigi BX",22,-6,16);
   simCscTriggerPrimitiveDigis__51->SetBinContent(12,7029);
   simCscTriggerPrimitiveDigis__51->SetBinContent(13,7734);
   simCscTriggerPrimitiveDigis__51->SetBinContent(14,8697);
   simCscTriggerPrimitiveDigis__51->SetBinContent(15,9634);
   simCscTriggerPrimitiveDigis__51->SetBinContent(16,8589);
   simCscTriggerPrimitiveDigis__51->SetBinContent(17,8241);
   simCscTriggerPrimitiveDigis__51->SetBinContent(18,7438);
   simCscTriggerPrimitiveDigis__51->SetEntries(57362);
   
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
   AText = ptstats->AddText("Entries = 57362  ");
   AText = ptstats->AddText("Mean  =  8.037");
   AText = ptstats->AddText("Std Dev   =  1.919");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__51->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__51);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__51->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__51->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__51->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__51->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__51->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__51->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__51->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__51->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__51->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__51->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__51->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__51->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__51->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__51->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__51->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__51->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__51->Draw("");
   
   TH1D *muonCSCDigis__52 = new TH1D("muonCSCDigis__52","muonCSCDigis",22,-6,16);
   muonCSCDigis__52->SetBinContent(7,7029);
   muonCSCDigis__52->SetBinContent(8,7735);
   muonCSCDigis__52->SetBinContent(9,8698);
   muonCSCDigis__52->SetBinContent(10,9638);
   muonCSCDigis__52->SetBinContent(11,8592);
   muonCSCDigis__52->SetBinContent(12,8243);
   muonCSCDigis__52->SetBinContent(13,7439);
   muonCSCDigis__52->SetEntries(57374);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 57374  ");
   AText = ptstats->AddText("Mean  =  3.037");
   AText = ptstats->AddText("Std Dev   =  1.919");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__52->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__52);
   muonCSCDigis__52->SetMarkerStyle(8);
   muonCSCDigis__52->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__52->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__52->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__52->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__52->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__52->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__52->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__52->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__52->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__52->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__52->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__52->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__52->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 57362  ");
   AText = ptstats->AddText("Mean  =  8.037");
   AText = ptstats->AddText("Std Dev   =  1.919");
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
   AText = ptstats->AddText("Entries = 57374  ");
   AText = ptstats->AddText("Mean  =  3.037");
   AText = ptstats->AddText("Std Dev   =  1.919");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2808291,0.9343782,0.7191709,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCALCTDigi BX");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
