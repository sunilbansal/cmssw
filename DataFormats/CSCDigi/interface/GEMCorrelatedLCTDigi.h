#ifndef CSCDigi_GEMCorrelatedLCTDigi_h
#define CSCDigi_GEMCorrelatedLCTDigi_h

/**\class GEMCorrelatedLCTDigi
 *
 * Digi for Correlated GEM-LCT trigger primitives. 
 *
 *
 * \author Sven Dildick (TAMU)
 */

#include "DataFormats/CSCDigi/interface/BaseCorrelatedLCTDigi.h"
#include <boost/cstdint.hpp>
#include <iosfwd>

class GEMCorrelatedLCTDigi : public BaseCorrelatedLCTDigi
{
 public:
  
  /// Constructors
  GEMCorrelatedLCTDigi(const int trknmb, const int valid, const int quality,
		       const int keywire, const int strip, const int pattern,
		       const int bend, const int bx, const int mpclink = 0,
		       const uint16_t bx0=0, const uint16_t syncErr = 0,
		       const uint16_t cscID=0);
  GEMCorrelatedLCTDigi();                               /// default

  /// clear this LCT
  void clear();

  /// return valid GEM pattern bit
  bool hasValidGEM()   const { return gem_valid; }

  /// return the 4 bit Correlated GEM-LCT Quality
  int getGEMCSCQuality() const { return gemcsc_quality; }

  /// return pattern
  int getGEMCSCPattern() const { return gemcsc_pattern; }

  /// return bend
  int getGEMCSCBend()    const { return gemcsc_bend; }

  /// return CLCT pattern number (in use again Feb 2011)
  int getCLCTPattern() const { return (gemcsc_pattern & 0xF); }

  /// Print content of correlated LCT digi
  void print() const;

  ///Comparison
  bool operator == (const GEMCorrelatedLCTDigi &) const;
  bool operator != (const GEMCorrelatedLCTDigi &rhs) const
    { return !(this->operator==(rhs)); }

  /// set quality code
  void setGEMCSCQuality(unsigned int q) {gemcsc_quality=q;}

 private:
  uint16_t gem_valid;
  uint16_t gemcsc_quality;
  uint16_t gemcsc_pattern;
  uint16_t gemcsc_bend;
};

std::ostream & operator<<(std::ostream & o, const GEMCorrelatedLCTDigi& digi);

#endif
