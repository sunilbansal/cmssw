#ifndef CSCDigi_BaseCorrelatedLCTDigi_h
#define CSCDigi_BaseCorrelatedLCTDigi_h

/**\class BaseCorrelatedLCTDigi
 *
 * Base Digi for Correlated GEM-LCT or LCT trigger primitives. 
 *
 *
 * \author Sven Dildick (TAMU)
 */

#include <boost/cstdint.hpp>
#include <iosfwd>

class BaseCorrelatedLCTDigi 
{
 public:
  
  /// Constructors
  BaseCorrelatedLCTDigi(const int trknmb, const int keywire, const int strip, 
		       const int bx, const int mpclink = 0,
		       const uint16_t bx0=0, const uint16_t syncErr = 0,
		       const uint16_t cscID=0);
  BaseCorrelatedLCTDigi();                               /// default

  /// clear this LCT
  void clear();

  /// return track number
  int getTrknmb()  const { return trknmb; }

  /// return the key wire group
  int getKeyWG()   const { return keywire; }

  /// return the key halfstrip from 0,159
  int getStrip()   const { return strip; }

  /// return BX
  int getBX()      const { return bx; }

  /// return MPC link number, 0 means not sorted, 1-3 give MPC sorting rank
  int getMPCLink() const { return mpclink; }

  uint16_t getCSCID()   const {return cscID;}
  uint16_t getBX0()     const {return bx0;}
  uint16_t getSyncErr() const {return syncErr;}

  /// Set track number (1,2) after sorting LCTs.
  void setTrknmb(const uint16_t number) {trknmb = number;}

  /// Set mpc link number after MPC sorting
  void setMPCLink(const uint16_t& link) { mpclink = link; }

  ///Comparison
  bool operator == (const BaseCorrelatedLCTDigi &) const;
  bool operator != (const BaseCorrelatedLCTDigi &rhs) const
    { return !(this->operator==(rhs)); }

  /// set wiregroup number
  void setWireGroup(unsigned int wiregroup) {keywire= wiregroup;}

 private:
  uint16_t trknmb;
  uint16_t keywire;
  uint16_t strip;
  uint16_t bx;
  uint16_t mpclink;
  uint16_t bx0; 
  uint16_t syncErr;
  uint16_t cscID;
};

#endif
