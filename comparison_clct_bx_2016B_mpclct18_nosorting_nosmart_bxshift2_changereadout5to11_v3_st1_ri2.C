void comparison_clct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v3_st1_ri2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 10 15:28:40 2016) by ROOT version6.06/01
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-10.25806,-0.9367533,18.12903,3.680768);
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
   
   TH1D *simCscTriggerPrimitiveDigis__75 = new TH1D("simCscTriggerPrimitiveDigis__75","CSCCLCTDigi BX ME1/3",22,-6,16);
   simCscTriggerPrimitiveDigis__75->SetBinContent(14,1140);
   simCscTriggerPrimitiveDigis__75->SetEntries(1140);
   
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
   AText = ptstats->AddText("Entries = 1140   ");
   AText = ptstats->AddText("Mean  =      7");
   AText = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   simCscTriggerPrimitiveDigis__75->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(simCscTriggerPrimitiveDigis__75);

   ci = TColor::GetColor("#ff0000");
   simCscTriggerPrimitiveDigis__75->SetLineColor(ci);
   simCscTriggerPrimitiveDigis__75->SetMarkerStyle(8);
   simCscTriggerPrimitiveDigis__75->GetXaxis()->SetTitle(" BX");
   simCscTriggerPrimitiveDigis__75->GetXaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__75->GetXaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__75->GetXaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__75->GetXaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__75->GetYaxis()->SetTitle(" Entries");
   simCscTriggerPrimitiveDigis__75->GetYaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__75->GetYaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__75->GetYaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__75->GetYaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__75->GetZaxis()->SetLabelFont(42);
   simCscTriggerPrimitiveDigis__75->GetZaxis()->SetLabelSize(0.035);
   simCscTriggerPrimitiveDigis__75->GetZaxis()->SetTitleSize(0.06);
   simCscTriggerPrimitiveDigis__75->GetZaxis()->SetTitleFont(42);
   simCscTriggerPrimitiveDigis__75->Draw("");
   
   TH1D *muonCSCDigis__76 = new TH1D("muonCSCDigis__76","muonCSCDigis",22,-6,16);
   muonCSCDigis__76->SetBinContent(7,280);
   muonCSCDigis__76->SetBinContent(8,277);
   muonCSCDigis__76->SetBinContent(9,289);
   muonCSCDigis__76->SetBinContent(10,294);
   muonCSCDigis__76->SetEntries(1140);
   
   ptstats = new TPaveStats(0.78,0.375,0.98,0.655,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("muonCSCDigis");
   AText->SetTextSize(0.06439999);
   AText = ptstats->AddText("Entries = 1140   ");
   AText = ptstats->AddText("Mean  =  1.524");
   AText = ptstats->AddText("Std Dev   =  1.121");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   muonCSCDigis__76->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(muonCSCDigis__76);
   muonCSCDigis__76->SetMarkerStyle(8);
   muonCSCDigis__76->GetXaxis()->SetLabelFont(42);
   muonCSCDigis__76->GetXaxis()->SetLabelSize(0.035);
   muonCSCDigis__76->GetXaxis()->SetTitleSize(0.06);
   muonCSCDigis__76->GetXaxis()->SetTitleFont(42);
   muonCSCDigis__76->GetYaxis()->SetLabelFont(42);
   muonCSCDigis__76->GetYaxis()->SetLabelSize(0.035);
   muonCSCDigis__76->GetYaxis()->SetTitleSize(0.06);
   muonCSCDigis__76->GetYaxis()->SetTitleFont(42);
   muonCSCDigis__76->GetZaxis()->SetLabelFont(42);
   muonCSCDigis__76->GetZaxis()->SetLabelSize(0.035);
   muonCSCDigis__76->GetZaxis()->SetTitleSize(0.06);
   muonCSCDigis__76->GetZaxis()->SetTitleFont(42);
   muonCSCDigis__76->Draw("sames");
   
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
   AText = ptstats->AddText("Entries = 1140   ");
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
   AText = ptstats->AddText("Entries = 1140   ");
   AText = ptstats->AddText("Mean  =  1.524");
   AText = ptstats->AddText("Std Dev   =  1.121");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   TPaveText *pt = new TPaveText(0.2016834,0.9343782,0.7983166,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("CSCCLCTDigi BX ME1/3");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
