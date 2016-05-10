void comparison_lct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st2_ri2_noBXShift()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 01:08:02 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-2.43871,18.12903,13.81935);
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
   
   TH1D *simCscTriggerPrimitiveDigis__31 = new TH1D("simCscTriggerPrimitiveDigis__31","CSCCorrelatedLCTDigi BX ME2/2",22,-6,16);
   simCscTriggerPrimitiveDigis__31->SetBinContent(12,7);
   simCscTriggerPrimitiveDigis__31->SetBinContent(13,9);
   simCscTriggerPrimitiveDigis__31->SetBinContent(14,8);
   simCscTriggerPrimitiveDigis__31->SetBinContent(15,12);
   simCscTriggerPrimitiveDigis__31->SetBinContent(16,6);
   simCscTriggerPrimitiveDigis__31->SetBinContent(17,10);
   simCscTriggerPrimitiveDigis__31->SetBinContent(18,3);
   simCscTriggerPrimitiveDigis__31->SetEntries(55);
   
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
   AText = ptstats->AddText("Entries = 55     ");
   AText = ptstats->AddText("Mean  =  7.782");
   AText = ptstats->AddText("Std Dev   =  1.796");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__31->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__31);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__31->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__31->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__31->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__31->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__31->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__31->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__31->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__31->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__31->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__31->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__31->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__31->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__31->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__31->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__31->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__31->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__31->Draw("");
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__32 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__32","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__32->SetBinContent(12,7);
   simCscTriggerPrimitiveDigis_MPCSORTED__32->SetBinContent(13,9);
   simCscTriggerPrimitiveDigis_MPCSORTED__32->SetBinContent(14,8);
   simCscTriggerPrimitiveDigis_MPCSORTED__32->SetBinContent(15,12);
   simCscTriggerPrimitiveDigis_MPCSORTED__32->SetBinContent(16,6);
   simCscTriggerPrimitiveDigis_MPCSORTED__32->SetBinContent(17,10);
   simCscTriggerPrimitiveDigis_MPCSORTED__32->SetBinContent(18,3);
   simCscTriggerPrimitiveDigis_MPCSORTED__32->SetEntries(55);
   
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
   AText = ptstats->AddText("Entries = 55     ");
   AText = ptstats->AddText("Mean  =  7.782");
   AText = ptstats->AddText("Std Dev   =  1.796");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis_MPCSORTED__32->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis_MPCSORTED__32);

   ci = TColor::GetColor("#0000ff");
   simCscTriggerPrimitiveDigis_MPCSORTED__32->SetLineColor(ci);
   simCscTriggerPrimitiveDigis_MPCSORTED__32->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis_MPCSORTED__32->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__32->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__32->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__32->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__32->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__32->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__32->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__32->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__32->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__32->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__32->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__32->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__32->Draw("sames");
   
   TH1D *csctfDigis__33 = new TH1D("csctfDigis__33","csctfDigis",22,-6,16);
   csctfDigis__33->SetBinContent(10,7);
   csctfDigis__33->SetBinContent(11,9);
   csctfDigis__33->SetBinContent(12,8);
   csctfDigis__33->SetBinContent(13,12);
   csctfDigis__33->SetBinContent(14,6);
   csctfDigis__33->SetBinContent(15,10);
   csctfDigis__33->SetBinContent(16,3);
   csctfDigis__33->SetEntries(55);
   
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
   AText = ptstats->AddText("Entries = 55     ");
   AText = ptstats->AddText("Mean  =  5.782");
   AText = ptstats->AddText("Std Dev   =  1.796");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   csctfDigis__33->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(csctfDigis__33);

   ci = TColor::GetColor("#009900");
   csctfDigis__33->SetLineColor(ci);
   csctfDigis__33->SetMarkerStyle(8);
   csctfDigis__33->GetXaxis()->SetLabelFont(42);
   csctfDigis__33->GetXaxis()->SetLabelSize(0.035);
   csctfDigis__33->GetXaxis()->SetTitleSize(0.06);
   csctfDigis__33->GetXaxis()->SetTitleFont(42);
   csctfDigis__33->GetYaxis()->SetLabelFont(42);
   csctfDigis__33->GetYaxis()->SetLabelSize(0.035);
   csctfDigis__33->GetYaxis()->SetTitleSize(0.06);
   csctfDigis__33->GetYaxis()->SetTitleFont(42);
   csctfDigis__33->GetZaxis()->SetLabelFont(42);
   csctfDigis__33->GetZaxis()->SetLabelSize(0.035);
   csctfDigis__33->GetZaxis()->SetTitleSize(0.06);
   csctfDigis__33->GetZaxis()->SetTitleFont(42);
   csctfDigis__33->Draw("sames");
   
   TH1D *muonCSCDigis__34 = new TH1D("muonCSCDigis__34","muonCSCDigis",22,-6,16);
   muonCSCDigis__34->SetBinContent(7,19);
   muonCSCDigis__34->SetBinContent(8,36);
   muonCSCDigis__34->SetEntries(55);
   
   ptstats = new TPaveStats(0.78,0.2,0.98,0.4,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 55     ");
   AText = ptstats->AddText("Mean  = 0.6545");
   AText = ptstats->AddText("Std Dev   = 0.4755");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__34->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__34);
   muonCSCDigis__34->SetMarkerStyle(8);
   muonCSCDigis__34->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__34->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__34->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__34->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__34->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__34->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__34->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__34->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__34->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__34->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__34->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__34->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__34->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 55     ");
   AText = ptstats->AddText("Mean  =  7.782");
   AText = ptstats->AddText("Std Dev   =  1.796");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__35 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__35","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__35->SetBinContent(12,7);
   simCscTriggerPrimitiveDigis_MPCSORTED__35->SetBinContent(13,9);
   simCscTriggerPrimitiveDigis_MPCSORTED__35->SetBinContent(14,8);
   simCscTriggerPrimitiveDigis_MPCSORTED__35->SetBinContent(15,12);
   simCscTriggerPrimitiveDigis_MPCSORTED__35->SetBinContent(16,6);
   simCscTriggerPrimitiveDigis_MPCSORTED__35->SetBinContent(17,10);
   simCscTriggerPrimitiveDigis_MPCSORTED__35->SetBinContent(18,3);
   simCscTriggerPrimitiveDigis_MPCSORTED__35->SetEntries(55);
   
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
   AText = ptstats->AddText("Entries = 55     ");
   AText = ptstats->AddText("Mean  =  7.782");
   AText = ptstats->AddText("Std Dev   =  1.796");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis_MPCSORTED__35->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis_MPCSORTED__35);

   ci = TColor::GetColor("#0000ff");
   simCscTriggerPrimitiveDigis_MPCSORTED__35->SetLineColor(ci);
   simCscTriggerPrimitiveDigis_MPCSORTED__35->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis_MPCSORTED__35->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__35->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__35->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__35->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__35->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__35->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__35->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__35->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__35->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__35->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__35->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__35->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__35->Draw("same");
   
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
   AText = ptstats->AddText("Entries = 55     ");
   AText = ptstats->AddText("Mean  =  5.782");
   AText = ptstats->AddText("Std Dev   =  1.796");
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
   AText = ptstats->AddText("Entries = 55     ");
   AText = ptstats->AddText("Mean  = 0.6545");
   AText = ptstats->AddText("Std Dev   = 0.4755");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.15,0.9343782,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCorrelatedLCTDigi BX ME2/2");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
