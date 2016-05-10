void comparison_lct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st2_ri2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 02:22:06 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-4.470968,18.12903,25.33548);
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
   
   TH1D *simCscTriggerPrimitiveDigis__26 = new TH1D("simCscTriggerPrimitiveDigis__26","CSCCorrelatedLCTDigi BX",22,-6,16);
   simCscTriggerPrimitiveDigis__26->SetBinContent(10,16);
   simCscTriggerPrimitiveDigis__26->SetBinContent(11,16);
   simCscTriggerPrimitiveDigis__26->SetBinContent(12,15);
   simCscTriggerPrimitiveDigis__26->SetBinContent(13,22);
   simCscTriggerPrimitiveDigis__26->SetBinContent(14,10);
   simCscTriggerPrimitiveDigis__26->SetBinContent(15,17);
   simCscTriggerPrimitiveDigis__26->SetBinContent(16,13);
   simCscTriggerPrimitiveDigis__26->SetEntries(109);
   
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
   AText = ptstats->AddText("Entries = 109    ");
   AText = ptstats->AddText("Mean  =   5.89");
   AText = ptstats->AddText("Std Dev   =  1.955");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__26->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__26);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__26->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__26->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__26->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__26->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__26->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__26->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__26->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__26->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__26->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__26->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__26->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__26->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__26->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__26->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__26->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__26->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__26->Draw("");
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__27 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__27","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__27->SetBinContent(10,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__27->SetBinContent(11,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__27->SetBinContent(12,15);
   simCscTriggerPrimitiveDigis_MPCSORTED__27->SetBinContent(13,22);
   simCscTriggerPrimitiveDigis_MPCSORTED__27->SetBinContent(14,10);
   simCscTriggerPrimitiveDigis_MPCSORTED__27->SetBinContent(15,17);
   simCscTriggerPrimitiveDigis_MPCSORTED__27->SetBinContent(16,13);
   simCscTriggerPrimitiveDigis_MPCSORTED__27->SetEntries(109);
   
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
   AText = ptstats->AddText("Entries = 109    ");
   AText = ptstats->AddText("Mean  =   5.89");
   AText = ptstats->AddText("Std Dev   =  1.955");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis_MPCSORTED__27->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis_MPCSORTED__27);

   ci = TColor::GetColor("#0000ff");
   simCscTriggerPrimitiveDigis_MPCSORTED__27->SetLineColor(ci);
   simCscTriggerPrimitiveDigis_MPCSORTED__27->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis_MPCSORTED__27->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__27->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__27->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__27->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__27->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__27->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__27->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__27->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__27->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__27->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__27->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__27->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__27->Draw("sames");
   
   TH1D *csctfDigis__28 = new TH1D("csctfDigis__28","csctfDigis",22,-6,16);
   csctfDigis__28->SetBinContent(10,16);
   csctfDigis__28->SetBinContent(11,16);
   csctfDigis__28->SetBinContent(12,15);
   csctfDigis__28->SetBinContent(13,22);
   csctfDigis__28->SetBinContent(14,10);
   csctfDigis__28->SetBinContent(15,17);
   csctfDigis__28->SetBinContent(16,13);
   csctfDigis__28->SetEntries(109);
   
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
   AText = ptstats->AddText("Entries = 109    ");
   AText = ptstats->AddText("Mean  =   5.89");
   AText = ptstats->AddText("Std Dev   =  1.955");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   csctfDigis__28->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(csctfDigis__28);

   ci = TColor::GetColor("#009900");
   csctfDigis__28->SetLineColor(ci);
   csctfDigis__28->SetMarkerStyle(8);
   csctfDigis__28->GetXaxis()->SetLabelFont(42);
   csctfDigis__28->GetXaxis()->SetLabelSize(0.035);
   csctfDigis__28->GetXaxis()->SetTitleSize(0.06);
   csctfDigis__28->GetXaxis()->SetTitleFont(42);
   csctfDigis__28->GetYaxis()->SetLabelFont(42);
   csctfDigis__28->GetYaxis()->SetLabelSize(0.035);
   csctfDigis__28->GetYaxis()->SetTitleSize(0.06);
   csctfDigis__28->GetYaxis()->SetTitleFont(42);
   csctfDigis__28->GetZaxis()->SetLabelFont(42);
   csctfDigis__28->GetZaxis()->SetLabelSize(0.035);
   csctfDigis__28->GetZaxis()->SetTitleSize(0.06);
   csctfDigis__28->GetZaxis()->SetTitleFont(42);
   csctfDigis__28->Draw("sames");
   
   TH1D *muonCSCDigis__29 = new TH1D("muonCSCDigis__29","muonCSCDigis",22,-6,16);
   muonCSCDigis__29->SetBinContent(7,47);
   muonCSCDigis__29->SetBinContent(8,62);
   muonCSCDigis__29->SetEntries(109);
   
   ptstats = new TPaveStats(0.78,0.2,0.98,0.4,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 109    ");
   AText = ptstats->AddText("Mean  = 0.5688");
   AText = ptstats->AddText("Std Dev   = 0.4952");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__29->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__29);
   muonCSCDigis__29->SetMarkerStyle(8);
   muonCSCDigis__29->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__29->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__29->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__29->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__29->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__29->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__29->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__29->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__29->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__29->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__29->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__29->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__29->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 109    ");
   AText = ptstats->AddText("Mean  =   5.89");
   AText = ptstats->AddText("Std Dev   =  1.955");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__30 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__30","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__30->SetBinContent(10,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__30->SetBinContent(11,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__30->SetBinContent(12,15);
   simCscTriggerPrimitiveDigis_MPCSORTED__30->SetBinContent(13,22);
   simCscTriggerPrimitiveDigis_MPCSORTED__30->SetBinContent(14,10);
   simCscTriggerPrimitiveDigis_MPCSORTED__30->SetBinContent(15,17);
   simCscTriggerPrimitiveDigis_MPCSORTED__30->SetBinContent(16,13);
   simCscTriggerPrimitiveDigis_MPCSORTED__30->SetEntries(109);
   
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
   AText = ptstats->AddText("Entries = 109    ");
   AText = ptstats->AddText("Mean  =   5.89");
   AText = ptstats->AddText("Std Dev   =  1.955");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis_MPCSORTED__30->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis_MPCSORTED__30);

   ci = TColor::GetColor("#0000ff");
   simCscTriggerPrimitiveDigis_MPCSORTED__30->SetLineColor(ci);
   simCscTriggerPrimitiveDigis_MPCSORTED__30->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis_MPCSORTED__30->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__30->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__30->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__30->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__30->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__30->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__30->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__30->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__30->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__30->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__30->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__30->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__30->Draw("same");
   
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
   AText = ptstats->AddText("Entries = 109    ");
   AText = ptstats->AddText("Mean  =   5.89");
   AText = ptstats->AddText("Std Dev   =  1.955");
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
   AText = ptstats->AddText("Entries = 109    ");
   AText = ptstats->AddText("Mean  = 0.5688");
   AText = ptstats->AddText("Std Dev   = 0.4952");
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
