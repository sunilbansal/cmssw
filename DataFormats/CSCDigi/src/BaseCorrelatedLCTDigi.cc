/**\class CSCCorrelatedLCTDigi
 *
 * Base digi for Correlated LCT trigger primitives.
 *
 *
 * \author Sven Dildick (TAMU)
 */

#include "DataFormats/CSCDigi/interface/BaseCorrelatedLCTDigi.h"
#include "FWCore/MessageLogger/interface/MessageLogger.h"
#include <iostream>

/// Constructors
BaseCorrelatedLCTDigi::BaseCorrelatedLCTDigi(const int itrknmb, 
					   const int ikeywire,
					   const int istrip,
					   const int ibx, const int impclink, 
					   const uint16_t ibx0,
					   const uint16_t isyncErr, 
					   const uint16_t icscID):
  trknmb(itrknmb),
  keywire(ikeywire),
  strip(istrip),
  bx(ibx),
  mpclink(impclink),
  bx0(ibx0),
  syncErr(isyncErr),
  cscID(icscID)
{}

/// Default
BaseCorrelatedLCTDigi::BaseCorrelatedLCTDigi() {
  clear(); // set contents to zero
}

/// Clears this LCT.
void BaseCorrelatedLCTDigi::clear() {
  trknmb  = 0;
  keywire = 0;
  strip   = 0;
  bx      = 0;
  mpclink = 0;
  bx0     = 0; 
  syncErr = 0;
  cscID   = 0;
}

/// Comparison
bool BaseCorrelatedLCTDigi::operator==(const BaseCorrelatedLCTDigi &rhs) const {
  return ((trknmb == rhs.trknmb)   && (keywire == rhs.keywire) && (strip == rhs.strip) &&
	  (bx == rhs.bx)           && (mpclink == rhs.mpclink) );
}
