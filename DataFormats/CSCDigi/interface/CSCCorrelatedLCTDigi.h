#ifndef CSCDigi_CSCCorrelatedLCTDigi_h
#define CSCDigi_CSCCorrelatedLCTDigi_h

/**\class CSCCorrelatedLCTDigi
 *
 * Digi for Correlated LCT trigger primitives. 
 *
 *
 * \author L. Gray, UF
 * \author Sven Dildick (TAMU)
 */

#include "DataFormats/CSCDigi/interface/BaseCorrelatedLCTDigi.h"
#include <boost/cstdint.hpp>
#include <iosfwd>

class CSCCorrelatedLCTDigi : public BaseCorrelatedLCTDigi
{
 public:
  
  /// Constructors
  CSCCorrelatedLCTDigi(const int trknmb, const int valid, const int quality,
		       const int keywire, const int strip, const int pattern,
		       const int bend, const int bx, const int mpclink = 0,
		       const uint16_t bx0=0, const uint16_t syncErr = 0,
		       const uint16_t cscID=0);
  CSCCorrelatedLCTDigi();                               /// default

  /// clear this LCT
  void clear();

  /// return valid pattern bit
  bool isValid()   const { return valid; }

  /// return the 4 bit Correlated LCT Quality
  int getQuality() const { return quality; }

  /// return pattern
  int getPattern() const { return pattern; }

  /// return bend
  int getBend()    const { return bend; }

  /// return CLCT pattern number (in use again Feb 2011)
  int getCLCTPattern() const { return (pattern & 0xF); }

  /// return strip type (obsolete since mid-2008)
  int getStripType() const   { return ((pattern & 0x8) >> 3); }

  /// Print content of correlated LCT digi
  void print() const;

  ///Comparison
  bool operator == (const CSCCorrelatedLCTDigi &) const;
  bool operator != (const CSCCorrelatedLCTDigi &rhs) const
    { return !(this->operator==(rhs)); }

  /// set quality code
  void setQuality(unsigned int q) {quality=q;}

 private:
  uint16_t valid;
  uint16_t quality;
  uint16_t pattern;
  uint16_t bend;
};

std::ostream & operator<<(std::ostream & o, const CSCCorrelatedLCTDigi& digi);

#endif
