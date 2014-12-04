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
#include "DataFormats/CSCDigi/interface/CSCCorrelatedLCTDigi.h"
#include "DataFormats/GEMDigi/interface/GEMCSCPadDigi.h"
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

  // constructors
  CSCLCTDigiComponents() : lct_type_(kNone) {}

  // kAlctClct
  CSCLCTDigiComponents(const CSCALCTDigi&, 
		       const CSCCLCTDigi&, 
		       const CSCCorrelatedLCTDigi&);
  
  // kAlctClctGem
  CSCLCTDigiComponents(const CSCALCTDigi&, 
		       const CSCCLCTDigi&, 
		       const CSCCorrelatedLCTDigi&, 
		       const GEMCSCPadDigi&);
  
  // kAlctClct2Gem
  CSCLCTDigiComponents(const CSCALCTDigi&, 
		       const CSCCLCTDigi&, 
		       const CSCCorrelatedLCTDigi&, 
		       const GEMCSCCoPadDigi&);
 
  // kAlct2Gem 
  CSCLCTDigiComponents(const CSCALCTDigi&, 
		       const CSCCorrelatedLCTDigi&, 
		       const GEMCSCCoPadDigi&);

  // kClct2Gem 
  CSCLCTDigiComponents(const CSCCLCTDigi&, 
		       const CSCCorrelatedLCTDigi&, 
		       const GEMCSCCoPadDigi&);

  // kAlctClctRpc 
  CSCLCTDigiComponents(const CSCALCTDigi&, 
		       const CSCCLCTDigi&, 
		       const CSCCorrelatedLCTDigi&, 
		       const RPCDigi&);

  // kAlctRpc 
  CSCLCTDigiComponents(const CSCALCTDigi&, 
		       const CSCCorrelatedLCTDigi&, 
		       const RPCDigi&);

  // kClctRpc
  CSCLCTDigiComponents(const CSCCLCTDigi&, 
		       const CSCCorrelatedLCTDigi&, 
		       const RPCDigi&);


  CSCLCTDigiComponents& operator=(const CSCLCTDigiComponents&);
  bool operator == (const CSCLCTDigiComponents&) const;
  bool operator != (const CSCLCTDigiComponents &rhs) const
    { return !(this->operator==(rhs)); }

  const lct_type type() const { return lct_type_; }

  const CSCALCTDigi& getCSCALCTDigi() const {return alct_;}
  const CSCCLCTDigi& getCSCCLCTDigi() const {return clct_;}
  const CSCCorrelatedLCTDigi& getCSCCorrelatedLCTDigi() const {return lct_;}
  const GEMCSCPadDigi& getGEMCSCPadDigi() const {return pad_;}
  const GEMCSCCoPadDigi& getGEMCSCCoPadDigi() const {return copad_;}
  const RPCDigi& getRPCDigi() const {return rpc_;}

  /// Print content of LCT digi components
  void print() const;

 private:
  lct_type lct_type_;

  CSCALCTDigi alct_;
  CSCCLCTDigi clct_;
  CSCCorrelatedLCTDigi lct_;
  GEMCSCPadDigi pad_;
  GEMCSCCoPadDigi copad_;
  RPCDigi rpc_;
};

std::ostream & operator<<(std::ostream & o, const CSCLCTDigiComponents& digi);

#endif
