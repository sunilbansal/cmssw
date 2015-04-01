/**\class CSCCorrelatedLCTDigi
 *
 * Digi for Correlated LCT trigger primitives.
 *
 *
 * \author L.Gray, UF
 * \author Sven Dildick (TAMU)
 */

#include "DataFormats/CSCDigi/interface/CSCCorrelatedLCTDigi.h"
#include "FWCore/MessageLogger/interface/MessageLogger.h"
#include <iostream>

/// Constructors
CSCCorrelatedLCTDigi::CSCCorrelatedLCTDigi(const int itrknmb, const int ivalid,
					   const int iquality,
					   const int ikeywire,
					   const int istrip,
					   const int ipattern, const int ibend,
					   const int ibx, const int impclink, 
					   const uint16_t ibx0,
					   const uint16_t isyncErr, 
					   const uint16_t icscID):
  BaseCorrelatedLCTDigi(itrknmb, ikeywire, istrip, ibx, impclink, ibx0, isyncErr, icscID),
  valid(ivalid),
  quality(iquality),
  pattern(ipattern),
  bend(ibend)
{}

/// Default
CSCCorrelatedLCTDigi::CSCCorrelatedLCTDigi() {
  clear(); // set contents to zero
}

/// Clears this LCT.
void CSCCorrelatedLCTDigi::clear() {
  BaseCorrelatedLCTDigi::clear();
  valid   = 0;
  quality = 0;
  pattern = 0;
  bend    = 0;
}

/// Comparison
bool CSCCorrelatedLCTDigi::operator==(const CSCCorrelatedLCTDigi &rhs) const {
  return ((getTrknmb() == rhs.getTrknmb()) && (quality == rhs.quality) &&
	  (getKeyWG() == rhs.getKeyWG()) && (getStrip() == rhs.getStrip())     &&
	  (pattern == rhs.pattern) && (bend == rhs.bend) &&
	  (getBX() == rhs.getBX()) && (valid == rhs.valid) && (getMPCLink() == rhs.getMPCLink()));
}

/// Debug
void CSCCorrelatedLCTDigi::print() const {
  if (isValid()) {
    edm::LogVerbatim("CSCCorrelatedLCTDigi")
      << "CSC LCT #"        << getTrknmb() 
      << ": Valid = "       << isValid()
      << " Quality = "      << getQuality()
      << " Key Wire = "     << getKeyWG()
      << " Strip = "        << getStrip()
      << " Pattern = "      << getPattern()
      << " Bend = "         << ( (getBend() == 0) ? 'L' : 'R' )
      << " BX = "           << getBX() 
      << " MPC Link = "     << getMPCLink();
  }
  else {
    edm::LogVerbatim("CSCCorrelatedLCTDigi") << "Not a valid correlated CSC LCT.";
  }
}

std::ostream & operator<<(std::ostream & o, const CSCCorrelatedLCTDigi& digi) {
  return o << "CSCCorrelatedLCTDigi #"   << digi.getTrknmb()
           << ": Valid = "  << digi.isValid()
           << " Quality = " << digi.getQuality()
           << " MPC Link = " << digi.getMPCLink()
	   << " cscID = "   << digi.getCSCID() << "\n"
           <<"  cathode info: Strip = "    << digi.getStrip()
	   << " Pattern = " << digi.getPattern()
           << " Bend = "    << ((digi.getBend() == 0) ? 'L' : 'R') << "\n"
           <<"    anode info: Key wire = " << digi.getKeyWG()
           << " BX = "      << digi.getBX()
           << " bx0 = "     << digi.getBX0()
           << " syncErr = " << digi.getSyncErr() << "\n";
}
