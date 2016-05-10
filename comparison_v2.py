from ROOT import *

"""
1) CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_muonCSCDigis_MuonCSCCorrelatedLCTDigi_RAW2DIGI. 145.235 97.11
2) CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis_MPCSORTED_RAW2DIGI. 140.985 96.185
3) CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__RAW2DIGI. 137.835 92.49
4) CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_csctfDigis__RAW2DIGI. 135.135 89.72
"""

csclabel = {
    0 : {
        0 : "All" 
        },
    1 : {
        1 : "ME1/b",
        4 : "ME1/a",
        3 : "ME1/2",
        2 : "ME1/3"
        },
    2 : {
        1 : "ME2/1",
        2 : "ME2/2"
        },
    3 : {
        1 : "ME3/1",
        2 : "ME3/2"
        },
    4 : {
        1 : "ME4/1",
        2 : "ME4/2"
        },
    }

gROOT.SetBatch(1)
gStyle.SetStatStyle(0)
gStyle.SetOptStat("nemr")
#file = TFile("output_l1_2016B_fixed.root")
#file = TFile("output_l1_2016B_mpclct18.root")
#file = TFile("output_l1_2016B_mpclct18_nosorting.root")
#file = TFile("output_l1_2016B_original.root")
#file = TFile("output_l1_2016B_mpclct18_nosorting_nosmart.root")
#file = TFile("output_l1_2016B_mpclct18_nosorting_nosmart_changereadout5to11_v2.root")
#file = TFile("output_l1_2016B_mpclct18_nosorting_nosmart_changereadout5to11_v2_clctpretrig2.root")
#file = TFile("output_l1_2016B_mpclct18_nosorting_nosmart_changereadout5to11_v2_clctpretrig2_clcthitpersist6.root")
#file = TFile("output_l1_2016B_mpclct18_nosorting_nosmart_changereadout5to11_v3.root")
file = TFile("output_l1_2016B_mpclct18_nosorting_nosmart_changereadout5to11_v4_reboot.root")

tree = file.Get("Events")

def compareLCTs(station, ring):

    c = TCanvas("c","c",800,800)
    c.cd()
    #histo=TH1F("histo","", 100, -5,5)
    #tree.Draw("elec_eta>>histo", "")

    simCscTriggerPrimitiveDigis = TH1D("simCscTriggerPrimitiveDigis","CSCCorrelatedLCTDigi BX " + csclabel[station][ring] + "; BX; Entries",22,-6,16)
    collection = "CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__RAW2DIGI"
    if station==0 and ring==0:
        tree.Draw(collection + ".obj.data_.second.bx>>simCscTriggerPrimitiveDigis")
    else:
        tree.Draw(collection + ".obj.data_.second.bx>>simCscTriggerPrimitiveDigis",
                  collection + ".obj.data_.first.station()==%d && "%(station) + collection + ".obj.data_.first.ring()==%d"%(ring))
    
    simCscTriggerPrimitiveDigis.SetLineColor(kRed)
    simCscTriggerPrimitiveDigis.Draw()
    gPad.Update();
    
    simCscTriggerPrimitiveDigis_st = simCscTriggerPrimitiveDigis.FindObject("stats");
    X1 = simCscTriggerPrimitiveDigis_st.GetX1NDC();
    Y1 = simCscTriggerPrimitiveDigis_st.GetY1NDC();
    X2 = simCscTriggerPrimitiveDigis_st.GetX2NDC();
    Y2 = simCscTriggerPrimitiveDigis_st.GetY2NDC();
    simCscTriggerPrimitiveDigis_st.SetY1NDC(0.8);
    simCscTriggerPrimitiveDigis_st.SetY2NDC(1.);
    
    simCscTriggerPrimitiveDigis_st.SetTextColor(kRed);
    #simCscTriggerPrimitiveDigis_st.SetTextSize(0.8);

    simCscTriggerPrimitiveDigis_MPCSORTED = TH1D("simCscTriggerPrimitiveDigis_MPCSORTED","SimCscTriggerPrimitiveDigis_MPCSORTED",22,-6,16)
    collection = "CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis_MPCSORTED_RAW2DIGI"
    if station==0 and ring==0:
        tree.Draw(collection + ".obj.data_.second.bx>>simCscTriggerPrimitiveDigis_MPCSORTED")
    else:
        tree.Draw(collection + ".obj.data_.second.bx>>simCscTriggerPrimitiveDigis_MPCSORTED",
                  collection + ".obj.data_.first.station()==%d && "%(station) + collection + ".obj.data_.first.ring()==%d"%(ring))
    simCscTriggerPrimitiveDigis_MPCSORTED.SetLineColor(kBlue)
    simCscTriggerPrimitiveDigis_MPCSORTED.Draw()
    gPad.Update();
    
    simCscTriggerPrimitiveDigis_MPCSORTED_st = simCscTriggerPrimitiveDigis_MPCSORTED.FindObject("stats");
    simCscTriggerPrimitiveDigis_MPCSORTED_st.SetX1NDC(X1);
    simCscTriggerPrimitiveDigis_MPCSORTED_st.SetX2NDC(X2);
    simCscTriggerPrimitiveDigis_MPCSORTED_st.SetY1NDC(Y1-(Y2-Y1));
    simCscTriggerPrimitiveDigis_MPCSORTED_st.SetY2NDC(Y1);
    simCscTriggerPrimitiveDigis_MPCSORTED_st.SetY1NDC(0.6);
    simCscTriggerPrimitiveDigis_MPCSORTED_st.SetY2NDC(0.8);
    
    simCscTriggerPrimitiveDigis_MPCSORTED_st.SetTextColor(kBlue);
    #simCscTriggerPrimitiveDigis_MPCSORTED_st.SetTextSize(0.8);
 
    csctfDigis = TH1D("csctfDigis","csctfDigis",22,-6,16)
    #tree.Draw("CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_csctfDigis__RAW2DIGI.obj.data_.second.bx>>csctfDigis")
    collection = "CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_csctfDigis__RAW2DIGI"
    if station==0 and ring==0:
        tree.Draw(collection + ".obj.data_.second.bx>>csctfDigis")
    else:
        tree.Draw(collection + ".obj.data_.second.bx>>csctfDigis",
                  collection + ".obj.data_.first.station()==%d && "%(station) + collection + ".obj.data_.first.ring()==%d"%(ring))
    csctfDigis.SetLineColor(kGreen+2)
    csctfDigis.Draw()
    gPad.Update();

    csctfDigis_st = csctfDigis.FindObject("stats");
    csctfDigis_st.SetX1NDC(X1);
    csctfDigis_st.SetX2NDC(X2);
    csctfDigis_st.SetY1NDC(0.4);
    csctfDigis_st.SetY2NDC(0.6);
    Y5 = csctfDigis_st.GetY1NDC();
    Y6 = csctfDigis_st.GetY2NDC();
    
    csctfDigis_st.SetTextColor(kGreen+2);
    #csctfDigis_st.SetTextSize(0.8);


    muonCSCDigis = TH1D("muonCSCDigis","muonCSCDigis",22,-6,16)
    #tree.Draw("CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_muonCSCDigis_MuonCSCCorrelatedLCTDigi_RAW2DIGI.obj.data_.second.bx>>muonCSCDigis")
    collection = "CSCDetIdCSCCorrelatedLCTDigiMuonDigiCollection_muonCSCDigis_MuonCSCCorrelatedLCTDigi_RAW2DIGI"
    if station==0 and ring==0:
        tree.Draw(collection + ".obj.data_.second.bx>>muonCSCDigis")
    else:
        tree.Draw(collection + ".obj.data_.second.bx>>muonCSCDigis",
                  collection + ".obj.data_.first.station()==%d && "%(station) + collection + ".obj.data_.first.ring()==%d"%(ring))
    muonCSCDigis.SetLineColor(kBlack)
    muonCSCDigis.Draw()
    gPad.Update();

    muonCSCDigis_st = muonCSCDigis.FindObject("stats");
    muonCSCDigis_st.SetX1NDC(X1);
    muonCSCDigis_st.SetX2NDC(X2);
    muonCSCDigis_st.SetY1NDC(Y5-(Y6-Y5));
    muonCSCDigis_st.SetY2NDC(Y5);
    muonCSCDigis_st.SetY1NDC(0.2);
    muonCSCDigis_st.SetY2NDC(0.4);
    
    muonCSCDigis_st.SetTextColor(kBlack);
    #muonCSCDigis_st.SetTextSize(0.8);


    simCscTriggerPrimitiveDigis.Draw();
    simCscTriggerPrimitiveDigis_MPCSORTED.Draw("sames");
    csctfDigis.Draw("sames");
    muonCSCDigis.Draw("sames");
    
    simCscTriggerPrimitiveDigis_st.Draw("same");
    simCscTriggerPrimitiveDigis_MPCSORTED.Draw("same");
    csctfDigis_st.Draw("same");
    muonCSCDigis_st.Draw("same");
    
    """
    legend=TLegend(0.6,0.6,0.8,0.8)
    legend.SetTextSize(0.5)
    legend.AddEntry(g, "Old", "l")
    legend.AddEntry(h, "SimCscTriggerPrimitiveDigis_MPCSORTED", "l")
    legend.Draw("same")
    """

    #c.SaveAs("comparison_lct_bx_2016B_mpclct18.png")
    #c.SaveAs("comparison_lct_bx_2016B_mpclct18.C")
    #c.SaveAs("comparison_lct_bx_2016B_mpclct18_nosorting_bxshift2.png")
    #c.SaveAs("comparison_lct_bx_2016B_mpclct18_nosorting_bxshift2.C")
    #c.SaveAs("comparison_lct_bx_2016B_original.png")
    #c.SaveAs("comparison_lct_bx_2016B_original.C")
    #c.SaveAs("comparison_lct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v2_clctpretrig2_clcthitpersist6.png")
    #c.SaveAs("comparison_lct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v2_clctpretrig2_clcthitpersist6.C")
    c.SaveAs("comparison_lct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st%d_ri%d_noBXShift.png"%(station, ring))
    c.SaveAs("comparison_lct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st%d_ri%d_noBXShift.C"%(station, ring))
    

compareLCTs(0,0)
compareLCTs(1,1)
compareLCTs(1,4)
compareLCTs(1,2)
compareLCTs(1,3)

compareLCTs(2,1)
compareLCTs(2,2)

compareLCTs(3,1)
compareLCTs(3,2)

compareLCTs(4,1)
compareLCTs(4,2)


def compareALCTs(station, ring):

    ## ALCT comparison
    c = TCanvas("c","c",800,800)
    c.cd()
    #histo=TH1F("histo","", 100, -5,5)
    #tree.Draw("elec_eta>>histo", "")
    
    simCscTriggerPrimitiveDigis = TH1D("simCscTriggerPrimitiveDigis","CSCALCTDigi BX " + csclabel[station][ring] + "; BX; Entries",22,-6,16)
    collection = "CSCDetIdCSCALCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__RAW2DIGI"
    tree.Draw(collection + ".obj.data_.second.bx_-5>>simCscTriggerPrimitiveDigis",
              collection + ".obj.data_.first.station()==%d && "%(station) + collection + ".obj.data_.first.ring()==%d"%(ring))
    simCscTriggerPrimitiveDigis.SetLineColor(kRed)
    simCscTriggerPrimitiveDigis.Draw()
    gPad.Update();

    simCscTriggerPrimitiveDigis_st = simCscTriggerPrimitiveDigis.FindObject("stats");
    X1 = simCscTriggerPrimitiveDigis_st.GetX1NDC();
    Y1 = simCscTriggerPrimitiveDigis_st.GetY1NDC();
    X2 = simCscTriggerPrimitiveDigis_st.GetX2NDC();
    Y2 = simCscTriggerPrimitiveDigis_st.GetY2NDC();

    simCscTriggerPrimitiveDigis_st.SetTextColor(kRed);
    #simCscTriggerPrimitiveDigis_st.SetTextSize(0.8);

    muonCSCDigis = TH1D("muonCSCDigis","muonCSCDigis",22,-6,16)
    collection = "CSCDetIdCSCALCTDigiMuonDigiCollection_muonCSCDigis_MuonCSCALCTDigi_RAW2DIGI"
    tree.Draw(collection + ".obj.data_.second.bx_>>muonCSCDigis",
              collection + ".obj.data_.first.station()==%d && "%(station) + collection + ".obj.data_.first.ring()==%d"%(ring))
    #tree.Draw("CSCDetIdCSCALCTDigiMuonDigiCollection_muonCSCDigis_MuonCSCALCTDigi_RAW2DIGI.obj.data_.second.bx_>>muonCSCDigis")
           
    muonCSCDigis.SetLineColor(kBlack)
    muonCSCDigis.Draw()
    gPad.Update();
    
    muonCSCDigis_st = muonCSCDigis.FindObject("stats");
    muonCSCDigis_st.SetX1NDC(X1);
    muonCSCDigis_st.SetX2NDC(X2);
    muonCSCDigis_st.SetY1NDC(Y1-(Y2-Y1));
    muonCSCDigis_st.SetY2NDC(Y1);
    
    muonCSCDigis_st.SetTextColor(kBlack);
    #muonCSCDigis_st.SetTextSize(0.8);
    

    simCscTriggerPrimitiveDigis.Draw();
    muonCSCDigis.Draw("sames");
    
    simCscTriggerPrimitiveDigis_st.Draw("same");
    muonCSCDigis_st.Draw("same");

    c.SaveAs("comparison_alct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st%d_ri%d.png"%(station, ring))
    c.SaveAs("comparison_alct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st%d_ri%d.C"%(station, ring))

compareALCTs(1,1)
compareALCTs(1,4)
compareALCTs(1,2)
compareALCTs(1,3)

compareALCTs(2,1)
compareALCTs(2,2)

compareALCTs(3,1)
compareALCTs(3,2)

compareALCTs(4,1)
compareALCTs(4,2)


def compareCLCTs(station, ring):

    ## CLCT comparison
    c = TCanvas("c","c",800,800)
    c.cd()
    #histo=TH1F("histo","", 100, -5,5)
    #tree.Draw("elec_eta>>histo", "")
    
    simCscTriggerPrimitiveDigis = TH1D("simCscTriggerPrimitiveDigis","CSCCLCTDigi BX " + csclabel[station][ring] + "; BX; Entries",22,-6,16)
    collection = "CSCDetIdCSCCLCTDigiMuonDigiCollection_simCscTriggerPrimitiveDigis__RAW2DIGI"
    tree.Draw(collection + ".obj.data_.second.bx_>>simCscTriggerPrimitiveDigis",
              collection + ".obj.data_.first.station()==%d && "%(station) + collection + ".obj.data_.first.ring()==%d"%(ring))
    simCscTriggerPrimitiveDigis.SetLineColor(kRed)
    simCscTriggerPrimitiveDigis.Draw()
    gPad.Update();

    simCscTriggerPrimitiveDigis_st = simCscTriggerPrimitiveDigis.FindObject("stats");
    X1 = simCscTriggerPrimitiveDigis_st.GetX1NDC();
    Y1 = simCscTriggerPrimitiveDigis_st.GetY1NDC();
    X2 = simCscTriggerPrimitiveDigis_st.GetX2NDC();
    Y2 = simCscTriggerPrimitiveDigis_st.GetY2NDC();

    simCscTriggerPrimitiveDigis_st.SetTextColor(kRed);
    #simCscTriggerPrimitiveDigis_st.SetTextSize(0.8);

    muonCSCDigis = TH1D("muonCSCDigis","muonCSCDigis",22,-6,16)
    collection = "CSCDetIdCSCCLCTDigiMuonDigiCollection_muonCSCDigis_MuonCSCCLCTDigi_RAW2DIGI"
    tree.Draw(collection + ".obj.data_.second.bx_>>muonCSCDigis",
              collection + ".obj.data_.first.station()==%d && "%(station) + collection + ".obj.data_.first.ring()==%d"%(ring))
    #tree.Draw("CSCDetIdCSCCLCTDigiMuonDigiCollection_muonCSCDigis_MuonCSCCLCTDigi_RAW2DIGI.obj.data_.second.bx_>>muonCSCDigis")
           
    muonCSCDigis.SetLineColor(kBlack)
    muonCSCDigis.Draw()
    gPad.Update();
    gPad.SetLogy(1)
    muonCSCDigis_st = muonCSCDigis.FindObject("stats");
    muonCSCDigis_st.SetX1NDC(X1);
    muonCSCDigis_st.SetX2NDC(X2);
    muonCSCDigis_st.SetY1NDC(Y1-(Y2-Y1));
    muonCSCDigis_st.SetY2NDC(Y1);
    
    muonCSCDigis_st.SetTextColor(kBlack);
    #muonCSCDigis_st.SetTextSize(0.8);
    

    simCscTriggerPrimitiveDigis.Draw();
    muonCSCDigis.Draw("sames");
    
    simCscTriggerPrimitiveDigis_st.Draw("same");
    muonCSCDigis_st.Draw("same");

    c.SaveAs("comparison_clct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st%d_ri%d.png"%(station, ring))
    c.SaveAs("comparison_clct_bx_2016B_mpclct18_nosorting_nosmart_bxshift2_changereadout5to11_v4_st%d_ri%d.C"%(station, ring))

compareCLCTs(1,1)
compareCLCTs(1,4)
compareCLCTs(1,2)
compareCLCTs(1,3)

compareCLCTs(2,1)
compareCLCTs(2,2)

compareCLCTs(3,1)
compareCLCTs(3,2)

compareCLCTs(4,1)
compareCLCTs(4,2)
