void comparison_lct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st4_ri1_noBXShift()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 01:08:02 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-8.941935,18.12903,50.67097);
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
   
   TH1D *simCscTriggerPrimitiveDigis__46 = new TH1D("simCscTriggerPrimitiveDigis__46","CSCCorrelatedLCTDigi BX ME4/1",22,-6,16);
   simCscTriggerPrimitiveDigis__46->SetBinContent(12,31);
   simCscTriggerPrimitiveDigis__46->SetBinContent(13,33);
   simCscTriggerPrimitiveDigis__46->SetBinContent(14,44);
   simCscTriggerPrimitiveDigis__46->SetBinContent(15,33);
   simCscTriggerPrimitiveDigis__46->SetBinContent(16,31);
   simCscTriggerPrimitiveDigis__46->SetBinContent(17,24);
   simCscTriggerPrimitiveDigis__46->SetBinContent(18,28);
   simCscTriggerPrimitiveDigis__46->SetEntries(224);
   
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
   AText = ptstats->AddText("Entries = 224    ");
   AText = ptstats->AddText("Mean  =  7.821");
   AText = ptstats->AddText("Std Dev   =  1.921");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__46->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__46);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__46->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__46->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__46->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__46->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__46->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__46->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__46->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__46->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__46->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__46->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__46->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__46->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__46->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__46->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__46->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__46->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__46->Draw("");
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__47 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__47","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__47->SetBinContent(12,31);
   simCscTriggerPrimitiveDigis_MPCSORTED__47->SetBinContent(13,33);
   simCscTriggerPrimitiveDigis_MPCSORTED__47->SetBinContent(14,44);
   simCscTriggerPrimitiveDigis_MPCSORTED__47->SetBinContent(15,33);
   simCscTriggerPrimitiveDigis_MPCSORTED__47->SetBinContent(16,31);
   simCscTriggerPrimitiveDigis_MPCSORTED__47->SetBinContent(17,24);
   simCscTriggerPrimitiveDigis_MPCSORTED__47->SetBinContent(18,28);
   simCscTriggerPrimitiveDigis_MPCSORTED__47->SetEntries(224);
   
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
   AText = ptstats->AddText("Entries = 224    ");
   AText = ptstats->AddText("Mean  =  7.821");
   AText = ptstats->AddText("Std Dev   =  1.921");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis_MPCSORTED__47->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis_MPCSORTED__47);

   ci = TColor::GetColor("#0000ff");
   simCscTriggerPrimitiveDigis_MPCSORTED__47->SetLineColor(ci);
   simCscTriggerPrimitiveDigis_MPCSORTED__47->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis_MPCSORTED__47->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__47->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__47->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__47->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__47->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__47->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__47->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__47->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__47->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__47->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__47->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__47->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__47->Draw("sames");
   
   TH1D *csctfDigis__48 = new TH1D("csctfDigis__48","csctfDigis",22,-6,16);
   csctfDigis__48->SetBinContent(10,31);
   csctfDigis__48->SetBinContent(11,33);
   csctfDigis__48->SetBinContent(12,44);
   csctfDigis__48->SetBinContent(13,33);
   csctfDigis__48->SetBinContent(14,31);
   csctfDigis__48->SetBinContent(15,24);
   csctfDigis__48->SetBinContent(16,28);
   csctfDigis__48->SetEntries(224);
   
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
   AText = ptstats->AddText("Entries = 224    ");
   AText = ptstats->AddText("Mean  =  5.821");
   AText = ptstats->AddText("Std Dev   =  1.921");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   csctfDigis__48->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(csctfDigis__48);

   ci = TColor::GetColor("#009900");
   csctfDigis__48->SetLineColor(ci);
   csctfDigis__48->SetMarkerStyle(8);
   csctfDigis__48->GetXaxis()->SetLabelFont(42);
   csctfDigis__48->GetXaxis()->SetLabelSize(0.035);
   csctfDigis__48->GetXaxis()->SetTitleSize(0.06);
   csctfDigis__48->GetXaxis()->SetTitleFont(42);
   csctfDigis__48->GetYaxis()->SetLabelFont(42);
   csctfDigis__48->GetYaxis()->SetLabelSize(0.035);
   csctfDigis__48->GetYaxis()->SetTitleSize(0.06);
   csctfDigis__48->GetYaxis()->SetTitleFont(42);
   csctfDigis__48->GetZaxis()->SetLabelFont(42);
   csctfDigis__48->GetZaxis()->SetLabelSize(0.035);
   csctfDigis__48->GetZaxis()->SetTitleSize(0.06);
   csctfDigis__48->GetZaxis()->SetTitleFont(42);
   csctfDigis__48->Draw("sames");
   
   TH1D *muonCSCDigis__49 = new TH1D("muonCSCDigis__49","muonCSCDigis",22,-6,16);
   muonCSCDigis__49->SetBinContent(7,113);
   muonCSCDigis__49->SetBinContent(8,109);
   muonCSCDigis__49->SetEntries(222);
   
   ptstats = new TPaveStats(0.78,0.2,0.98,0.4,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.046);
   AText = ptstats->AddText("Entries = 222    ");
   AText = ptstats->AddText("Mean  =  0.491");
   AText = ptstats->AddText("Std Dev   = 0.4999");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__49->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__49);
   muonCSCDigis__49->SetMarkerStyle(8);
   muonCSCDigis__49->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__49->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__49->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__49->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__49->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__49->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__49->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__49->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__49->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__49->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__49->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__49->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__49->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 224    ");
   AText = ptstats->AddText("Mean  =  7.821");
   AText = ptstats->AddText("Std Dev   =  1.921");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TH1D *simCscTriggerPrimitiveDigis_MPCSORTED__50 = new TH1D("simCscTriggerPrimitiveDigis_MPCSORTED__50","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16);
   simCscTriggerPrimitiveDigis_MPCSORTED__50->SetBinContent(12,31);
   simCscTriggerPrimitiveDigis_MPCSORTED__50->SetBinContent(13,33);
   simCscTriggerPrimitiveDigis_MPCSORTED__50->SetBinContent(14,44);
   simCscTriggerPrimitiveDigis_MPCSORTED__50->SetBinContent(15,33);
   simCscTriggerPrimitiveDigis_MPCSORTED__50->SetBinContent(16,31);
   simCscTriggerPrimitiveDigis_MPCSORTED__50->SetBinContent(17,24);
   simCscTriggerPrimitiveDigis_MPCSORTED__50->SetBinContent(18,28);
   simCscTriggerPrimitiveDigis_MPCSORTED__50->SetEntries(224);
   
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
   AText = ptstats->AddText("Entries = 224    ");
   AText = ptstats->AddText("Mean  =  7.821");
   AText = ptstats->AddText("Std Dev   =  1.921");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis_MPCSORTED__50->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis_MPCSORTED__50);

   ci = TColor::GetColor("#0000ff");
   simCscTriggerPrimitiveDigis_MPCSORTED__50->SetLineColor(ci);
   simCscTriggerPrimitiveDigis_MPCSORTED__50->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis_MPCSORTED__50->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__50->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__50->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__50->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__50->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__50->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__50->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__50->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__50->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__50->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis_MPCSORTED__50->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis_MPCSORTED__50->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis_MPCSORTED__50->Draw("same");
   
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
   AText = ptstats->AddText("Entries = 224    ");
   AText = ptstats->AddText("Mean  =  5.821");
   AText = ptstats->AddText("Std Dev   =  1.921");
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
   AText = ptstats->AddText("Entries = 222    ");
   AText = ptstats->AddText("Mean  =  0.491");
   AText = ptstats->AddText("Std Dev   = 0.4999");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.15,0.9343782,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCorrelatedLCTDigi BX ME4/1");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
