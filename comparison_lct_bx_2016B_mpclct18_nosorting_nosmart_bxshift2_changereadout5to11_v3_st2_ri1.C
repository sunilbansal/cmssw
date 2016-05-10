void comparison_lct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st2_ri1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 02:22:06 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-41.05161,18.12903,232.6258);
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
   
   TH1D *simCscTriggerPrimitiveDigis__21 = new TH1D("simCscTriggerPrimitiveDigis__21","CSCCorrelatedLCTDigi BX",22,-6,16);
   simCscTriggerPrimitiveDigis__21->SetBinContent(10,133);
   simCscTriggerPrimitiveDigis__21->SetBinContent(11,170);
   simCscTriggerPrimitiveDigis__21->SetBinContent(12,202);
   simCscTriggerPrimitiveDigis__21->SetBinContent(13,188);
   simCscTriggerPrimitiveDigis__21->SetBinContent(14,173);
   simCscTriggerPrimitiveDigis__21->SetBinContent(15,184);
   simCscTriggerPrimitiveDigis__21->SetBinContent(16,140);
   simCscTriggerPrimitiveDigis__21->SetEntries(1190);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.8,0.98,1,"brNDC");
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
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 1190   ");
   AText = ptstats->AddText("Mean  =  6.017");
   AText = ptstats->AddText("Std Dev   =  1.889");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__21->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__21);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__21->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__21->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__21->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__21->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__21->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__21->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__21->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__21->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__21->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__21->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__21->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__21->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__21->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__21->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__21->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__21->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__21->Draw("");
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__22 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__22","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__22->SetBinContent(10,133);
   simCscTriggerPrimitiveDigis_MPCSORTED__22->SetBinContent(11,170);
   simCscTriggerPrimitiveDigis_MPCSORTED__22->SetBinContent(12,202);
   simCscTriggerPrimitiveDigis_MPCSORTED__22->SetBinContent(13,188);
   simCscTriggerPrimitiveDigis_MPCSORTED__22->SetBinContent(14,173);
   simCscTriggerPrimitiveDigis_MPCSORTED__22->SetBinContent(15,184);
   simCscTriggerPrimitiveDigis_MPCSORTED__22->SetBinContent(16,140);
   simCscTriggerPrimitiveDigis_MPCSORTED__22->SetEntries(1190);
   
   ptstats = new TPaveStats(0.78,0.6,0.98,0.8,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0000ff");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("simCscTriggerPrimitiveDigis_MPCSORTED");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 1190   ");
   AText = ptstats->AddText("Mean  =  6.017");
   AText = ptstats->AddText("Std Dev   =  1.889");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis_MPCSORTED__22->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis_MPCSORTED__22);

   ci = TColor::GetColor("#0000ff");
   simCscTriggerPrimitiveDigis_MPCSORTED__22->SetLineColor(ci);
   simCscTriggerPrimitiveDigis_MPCSORTED__22->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis_MPCSORTED__22->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__22->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__22->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__22->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__22->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__22->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__22->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__22->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__22->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__22->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__22->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__22->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__22->Draw("sames");
   
   TH1D *csctfDigis__23 = new TH1D("csctfDigis__23","csctfDigis",22,-6,16);
   csctfDigis__23->SetBinContent(10,143);
   csctfDigis__23->SetBinContent(11,170);
   csctfDigis__23->SetBinContent(12,202);
   csctfDigis__23->SetBinContent(13,188);
   csctfDigis__23->SetBinContent(14,173);
   csctfDigis__23->SetBinContent(15,184);
   csctfDigis__23->SetBinContent(16,141);
   csctfDigis__23->SetEntries(1201);
   
   ptstats = new TPaveStats(0.78,0.4,0.98,0.6,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#009900");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("csctfDigis");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 1201   ");
   AText = ptstats->AddText("Mean  =  5.994");
   AText = ptstats->AddText("Std Dev   =  1.902");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   csctfDigis__23->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(csctfDigis__23);

   ci = TColor::GetColor("#009900");
   csctfDigis__23->SetLineColor(ci);
   csctfDigis__23->SetMarkerStyle(8);
   csctfDigis__23->GetXaxis()->SetLabelFont(42);
   csctfDigis__23->GetXaxis()->SetLabelSize(0.035);
   csctfDigis__23->GetXaxis()->SetTitleSize(0.06);
   csctfDigis__23->GetXaxis()->SetTitleFont(42);
   csctfDigis__23->GetYaxis()->SetLabelFont(42);
   csctfDigis__23->GetYaxis()->SetLabelSize(0.035);
   csctfDigis__23->GetYaxis()->SetTitleSize(0.06);
   csctfDigis__23->GetYaxis()->SetTitleFont(42);
   csctfDigis__23->GetZaxis()->SetLabelFont(42);
   csctfDigis__23->GetZaxis()->SetLabelSize(0.035);
   csctfDigis__23->GetZaxis()->SetTitleSize(0.06);
   csctfDigis__23->GetZaxis()->SetTitleFont(42);
   csctfDigis__23->Draw("sames");
   
   TH1D *muonCSCDigis__24 = new TH1D("muonCSCDigis__24","muonCSCDigis",22,-6,16);
   muonCSCDigis__24->SetBinContent(7,575);
   muonCSCDigis__24->SetBinContent(8,625);
   muonCSCDigis__24->SetEntries(1200);
   
   ptstats = new TPaveStats(0.78,0.2,0.98,0.4,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 1200   ");
   AText = ptstats->AddText("Mean  = 0.5208");
   AText = ptstats->AddText("Std Dev   = 0.4996");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__24->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__24);
   muonCSCDigis__24->SetMarkerStyle(8);
   muonCSCDigis__24->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__24->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__24->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__24->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__24->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__24->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__24->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__24->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__24->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__24->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__24->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__24->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__24->Draw("sames");
   
   ptstats = new TPaveStats(0.78,0.8,0.98,1,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#ff0000");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("simCscTriggerPrimitiveDigis");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 1190   ");
   AText = ptstats->AddText("Mean  =  6.017");
   AText = ptstats->AddText("Std Dev   =  1.889");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__25 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__25","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__25->SetBinContent(10,133);
   simCscTriggerPrimitiveDigis_MPCSORTED__25->SetBinContent(11,170);
   simCscTriggerPrimitiveDigis_MPCSORTED__25->SetBinContent(12,202);
   simCscTriggerPrimitiveDigis_MPCSORTED__25->SetBinContent(13,188);
   simCscTriggerPrimitiveDigis_MPCSORTED__25->SetBinContent(14,173);
   simCscTriggerPrimitiveDigis_MPCSORTED__25->SetBinContent(15,184);
   simCscTriggerPrimitiveDigis_MPCSORTED__25->SetBinContent(16,140);
   simCscTriggerPrimitiveDigis_MPCSORTED__25->SetEntries(1190);
   
   ptstats = new TPaveStats(0.78,0.6,0.98,0.8,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0000ff");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("simCscTriggerPrimitiveDigis_MPCSORTED");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 1190   ");
   AText = ptstats->AddText("Mean  =  6.017");
   AText = ptstats->AddText("Std Dev   =  1.889");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis_MPCSORTED__25->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis_MPCSORTED__25);

   ci = TColor::GetColor("#0000ff");
   simCscTriggerPrimitiveDigis_MPCSORTED__25->SetLineColor(ci);
   simCscTriggerPrimitiveDigis_MPCSORTED__25->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis_MPCSORTED__25->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__25->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__25->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__25->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__25->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__25->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__25->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__25->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__25->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__25->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__25->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__25->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__25->Draw("same");
   
   ptstats = new TPaveStats(0.78,0.4,0.98,0.6,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#009900");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("csctfDigis");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 1201   ");
   AText = ptstats->AddText("Mean  =  5.994");
   AText = ptstats->AddText("Std Dev   =  1.902");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   ptstats = new TPaveStats(0.78,0.2,0.98,0.4,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 1200   ");
   AText = ptstats->AddText("Mean  = 0.5208");
   AText = ptstats->AddText("Std Dev   = 0.4996");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.1734171,0.9343782,0.8265829,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCorrelatedLCTDigi BX");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
