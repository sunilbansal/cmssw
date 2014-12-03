#ifndef CSCDigi_CSCLCTDigiComponents_h
#define CSCDigi_CSCLCTDigiComponents_h

/**\class CSCLCTDigiComponents
 *
 * Digi for LCT trigger primitive components
 *
 * \author S. Dildick, TAMU
 */

#include "DataFormats/CSCDigi/interface/CSCALCTDigi.h"
#include "DataFormats/CSCDigi/interface/CSCCLCTDigi.h"
#include "DataFormats/GEMDigi/interface/GEMCSCCoPadDigi.h"
#include "DataFormats/RPCDigi/interface/RPCDigi.h"

#include <boost/cstdint.hpp>
#include <iosfwd>
#include <string>

class CSCLCTDigiComponents 
{
 public:
  
  enum lct_type{
    kAlctClct, kAlctClctGem, kAlctClct2Gem, 
    kAlct2Gem, kClct2Gem, kAlctClctRpc, 
    kAlctRpc, kClctRpc, kNone};

  struct ALCTData{
    ALCTData() : valid_(0), quality_(0), accel_(0), keywire_(0), 
                 bx_(0), trknmb_(0), fullbx_(0) {}

    uint16_t valid_;      
    uint16_t quality_;    
    uint16_t accel_;      
    uint16_t keywire_;   
    uint16_t bx_;   
    uint16_t trknmb_;
    uint16_t fullbx_;
  };

  struct CLCTData{
    CLCTData() : valid_(0), quality_(0), pattern_(0), bend_(0), 
                 strip_(0), cfeb_(0), bx_(0), trknmb_(0), fullbx_(0) {}

    uint16_t valid_;
    uint16_t quality_;
    uint16_t pattern_;
    uint16_t bend_;
    uint16_t strip_;
    uint16_t cfeb_;
    uint16_t bx_;
    uint16_t trknmb_;
    uint16_t fullbx_;
  };

  struct GEMData{
    GEMData() : pad1_(0), bx1_(0), pad2_(0), bx2_(0), isCoPad_(0) {}

    uint16_t pad1_;
    uint16_t bx1_;
    uint16_t pad2_;
    uint16_t bx2_;
    bool isCoPad_;
  };

  struct RPCData{
    RPCData() : strip_(0), bx_(0) {}

    uint16_t strip_;
    uint16_t bx_;
  };

  // constructors
  CSCLCTDigiComponents(): lct_type_(kNone) {}

  // kAlctClct
  CSCLCTDigiComponents(const CSCALCTDigi&, const CSCCLCTDigi&);
  
  // kAlctClctGem
  CSCLCTDigiComponents(const CSCALCTDigi&, const CSCCLCTDigi&, const GEMCSCPadDigi&);
  
  // kAlctClct2Gem
  CSCLCTDigiComponents(const CSCALCTDigi&, const CSCCLCTDigi&, const GEMCSCCoPadDigi&);
 
  // kAlct2Gem 
  CSCLCTDigiComponents(const CSCALCTDigi&, const GEMCSCCoPadDigi&);

  // kClct2Gem 
  CSCLCTDigiComponents(const CSCCLCTDigi&, const GEMCSCCoPadDigi&);

  // kAlctClctRpc 
  CSCLCTDigiComponents(const CSCALCTDigi&, const CSCCLCTDigi&, const RPCDigi&);

  // kAlctRpc 
  CSCLCTDigiComponents(const CSCALCTDigi&, const RPCDigi&);

  // kClctRpc
  CSCLCTDigiComponents(const CSCCLCTDigi&, const RPCDigi&);


  CSCLCTDigiComponents& operator=(const CSCLCTDigiComponents&);
  bool operator == (const CSCLCTDigiComponents&) const;
  bool operator != (const CSCLCTDigiComponents &rhs) const
    { return !(this->operator==(rhs)); }

  const lct_type type() const { return lct_type_; }

  const ALCTData getALCTData()  const { return alct_;  }
  const CLCTData getCLCTData()  const { return clct_;  }
  const GEMData getGEMData()  const { return gem_;  }
  const RPCData getRPCData()  const { return rpc_;  }

  /// Print content of LCT digi components
  void print() const;

 private:
  ALCTData alct_;
  CLCTData clct_;
  GEMData gem_;
  RPCData rpc_;

  lct_type lct_type_;
};

std::ostream & operator<<(std::ostream & o, const CSCLCTDigiComponents& digi);

#endif
