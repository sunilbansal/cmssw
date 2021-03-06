#ifndef CSCTriggerPrimitives_CSCMotherboardME11_h
#define CSCTriggerPrimitives_CSCMotherboardME11_h

/** \class CSCMotherboardME11
 *
 * Extended CSCMotherboard for ME11 TMB upgrade
 * to handle ME1b and (primarily unganged) ME1a separately
 *
 * \author Vadim Khotilovich 12 May 2009
 *
 * Based on CSCMotherboard code
 *
 */

#include <L1Trigger/CSCTriggerPrimitives/src/CSCMotherboard.h>
#include <DataFormats/CSCDigi/interface/CSCCorrelatedLCTDigi.h>
#include <DataFormats/GEMDigi/interface/GEMCSCPadDigiCollection.h>

class CSCGeometry;
class GEMGeometry;
class CSCChamber;

class CSCMotherboardME11 : public CSCMotherboard
{
 public:
  /** Normal constructor. */
  CSCMotherboardME11(unsigned endcap, unsigned station, unsigned sector, 
		 unsigned subsector, unsigned chamber,
		 const edm::ParameterSet& conf);

  /** Constructor for use during testing. */
  CSCMotherboardME11();

  /** Default destructor. */
  ~CSCMotherboardME11();

  /** Run function for normal usage.  Runs cathode and anode LCT processors,
      takes results and correlates into CorrelatedLCT. */
  void run(const CSCWireDigiCollection* wiredc,
	   const CSCComparatorDigiCollection* compdc,
	   const GEMCSCPadDigiCollection* gemPads);

  /** Returns vectors of found correlated LCTs in ME1a and ME1b, if any. */
  std::vector<CSCCorrelatedLCTDigi> getLCTs1a();
  std::vector<CSCCorrelatedLCTDigi> getLCTs1b();

  /** Returns vectors of found ALCTs in ME1a and ME1b, if any. */
  std::vector<CSCALCTDigi> getALCTs1b() {return alctV;}

  /** Returns vectors of found CLCTs in ME1a and ME1b, if any. */
  std::vector<CSCCLCTDigi> getCLCTs1a() {return clctV1a;}
  std::vector<CSCCLCTDigi> getCLCTs1b() {return clctV1b;}

  /** Clears correlated LCT and passes clear signal on to cathode and anode
      LCT processors. */
  void clear();

  /** Set configuration parameters obtained via EventSetup mechanism. */
  void setConfigParameters(const CSCDBL1TPParameters* conf);

  /** additional Cathode LCT processor for ME1a */
  CSCCathodeLCTProcessor* clct1a;

  std::vector<CSCCorrelatedLCTDigi> readoutLCTs1a();
  std::vector<CSCCorrelatedLCTDigi> readoutLCTs1b();
  std::vector<CSCCorrelatedLCTDigi> readoutLCTs(int me1ab);

  /// set CSC and GEM geometries for the matching needs
  void setCSCGeometry(const CSCGeometry *g) { csc_g = g; }
  void setGEMGeometry(const GEMGeometry *g) { gem_g = g; }

 private:

  /** labels for ME1a and ME1B */
  enum {ME1B = 1, ME1A=4};

  static const int lut_wg_vs_hs_me1b[48][2];
  static const int lut_wg_vs_hs_me1a[48][2];
  static const int lut_wg_vs_hs_me1ag[48][2];
  static const double lut_pt_vs_dphi_gemcsc[7][3];

  /** SLHC: special configuration parameters for ME11 treatment. */
  bool smartME1aME1b, disableME1a, gangedME1a;

  bool doesALCTCrossCLCT(CSCALCTDigi &a, CSCCLCTDigi &c, int me);

  /** Container for first correlated LCT in ME1a. */
  //CSCCorrelatedLCTDigi firstLCT1a[MAX_LCT_BINS];

  /** Container for second correlated LCT in ME1a. */
  //CSCCorrelatedLCTDigi secondLCT1a[MAX_LCT_BINS];

  /** for the case when more than 2 LCTs/BX are allowed;
      maximum match window = 15 */
  CSCCorrelatedLCTDigi allLCTs1b[MAX_LCT_BINS][15][2];
  CSCCorrelatedLCTDigi allLCTs1a[MAX_LCT_BINS][15][2];

  void correlateLCTs(CSCALCTDigi bestALCT, CSCALCTDigi secondALCT,
		     CSCCLCTDigi bestCLCT, CSCCLCTDigi secondCLCT,
		     CSCCorrelatedLCTDigi& lct1, CSCCorrelatedLCTDigi& lct2);

  void correlateLCTs(CSCALCTDigi bestALCT, CSCALCTDigi secondALCT,
		     CSCCLCTDigi bestCLCT, CSCCLCTDigi secondCLCT,
		     CSCCorrelatedLCTDigi& lct1, CSCCorrelatedLCTDigi& lct2, int me);

  void matchGEMPads(const GEMCSCPadDigiCollection* gemPads);

  std::vector<CSCALCTDigi> alctV;
  std::vector<CSCCLCTDigi> clctV1b;
  std::vector<CSCCLCTDigi> clctV1a;

  /** "preferential" index array in matching window for cross-BX sorting */
  int pref[MAX_LCT_BINS];

  bool match_earliest_alct_me11_only;
  bool match_earliest_clct_me11_only;

  /** if true: use regular CLCT-to-ALCT matching in TMB
      if false: do ALCT-to-CLCT matching */
  bool clct_to_alct;

  /** whether to not reuse CLCTs that were used by previous matching ALCTs
      in ALCT-to-CLCT algorithm */
  bool drop_used_clcts;

  unsigned int tmb_cross_bx_algo;

  /** maximum lcts per BX in ME11: 2, 3, 4 or 999 */
  unsigned int max_me11_lcts;

  /// Do GEM matching?
  bool do_gem_matching;

  /// GEM matching dphi and deta
  double gem_match_delta_phi_odd;
  double gem_match_delta_phi_even;
  double gem_match_delta_eta;

  /// delta BX for GEM pads matching
  int gem_match_delta_bx;

  /// min eta of LCT for which we require GEM match (we don't throw out LCTs below this min eta) 
  double gem_match_min_eta;

  /// whether to throw out GEM-fiducial LCTs that have no gem match
  bool gem_clear_nomatch_lcts;

  const CSCGeometry* csc_g;
  const GEMGeometry* gem_g;
  //CSCChamber* cscChamber;

  // central LCT bx number
  int lct_central_bx;

  // debug gem matching
  bool debug_gem_matching;
};
#endif
