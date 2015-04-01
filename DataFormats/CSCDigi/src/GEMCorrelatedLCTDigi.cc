/**\class GEMCorrelatedLCTDigi
 *
 * Digi for Correlated GEM-LCT trigger primitives.
 *
 *
 * \author Sven Dildick (TAMU)
 */

#include "DataFormats/CSCDigi/interface/GEMCorrelatedLCTDigi.h"
#include "FWCore/MessageLogger/interface/MessageLogger.h"
#include <iostream>

/// Constructors
GEMCorrelatedLCTDigi::GEMCorrelatedLCTDigi(const int itrknmb, const int ivalid,
					   const int iquality,
					   const int ikeywire,
					   const int istrip,
					   const int ipattern, const int ibend,
					   const int ibx, const int impclink, 
					   const uint16_t ibx0,
					   const uint16_t isyncErr, 
					   const uint16_t icscID):
  BaseCorrelatedLCTDigi(itrknmb, ikeywire, istrip, ibx, impclink, ibx0, isyncErr, icscID),
  gem_valid(ivalid),
  gemcsc_quality(iquality),
  gemcsc_pattern(ipattern),
  gemcsc_bend(ibend)
{}

/// Default
GEMCorrelatedLCTDigi::GEMCorrelatedLCTDigi() {
  clear(); // set contents to zero
}

/// Clears this LCT.
void GEMCorrelatedLCTDigi::clear() {
  BaseCorrelatedLCTDigi::clear();
  gem_valid   = 0;
  gemcsc_quality = 0;
  gemcsc_pattern = 0;
  gemcsc_bend    = 0;
}

/// Comparison
bool GEMCorrelatedLCTDigi::operator==(const GEMCorrelatedLCTDigi &rhs) const {
  return ((getTrknmb() == rhs.getTrknmb()) && (gemcsc_quality == rhs.gemcsc_quality) &&
	  (getKeyWG() == rhs.getKeyWG()) && (getStrip() == rhs.getStrip())     &&
	  (gemcsc_pattern == rhs.gemcsc_pattern) && (gemcsc_bend == rhs.gemcsc_bend) &&
	  (getBX() == rhs.getBX()) && (gem_valid == rhs.gem_valid) && 
	  (getMPCLink() == rhs.getMPCLink()));
}

/// Debug
void GEMCorrelatedLCTDigi::print() const {
  if (hasValidGEM()) {
    edm::LogVerbatim("GEMCorrelatedLCTDigi")
      << "CSC LCT #"        << getTrknmb() 
      << ": Valid GEM = "       << hasValidGEM()
      << " GEM-CSC Quality = "      << getGEMCSCQuality()
      << " Key Wire = "     << getKeyWG()
      << " Strip = "        << getStrip()
      << " GEM-CSC Pattern = "      << getGEMCSCPattern()
      << " GEM-CSC Bend = "         << ( (getGEMCSCBend() == 0) ? 'L' : 'R' )
      << " BX = "           << getBX() 
      << " MPC Link = "     << getMPCLink();
  }
  else {
    edm::LogVerbatim("GEMCorrelatedLCTDigi") << "Not a valid correlated GEM LCT.";
  }
}

std::ostream & operator<<(std::ostream & o, const GEMCorrelatedLCTDigi& digi) {
  return o << "GEMCorrelatedLCTDigi #"   << digi.getTrknmb()
           << ": Valid = "  << digi.hasValidGEM()
           << " GEM-CSC Quality = " << digi.getGEMCSCQuality()
           << " MPC Link = " << digi.getMPCLink()
	   << " cscID = "   << digi.getCSCID() << "\n"
           <<"  cathode info: Strip = "    << digi.getStrip()
	   << " GEM-CSC Pattern = " << digi.getGEMCSCPattern()
           << " GEM-CSC Bend = "    << ((digi.getGEMCSCBend() == 0) ? 'L' : 'R') << "\n"
           <<"    anode info: Key wire = " << digi.getKeyWG()
           << " BX = "      << digi.getBX()
           << " bx0 = "     << digi.getBX0()
           << " syncErr = " << digi.getSyncErr() << "\n";
}
