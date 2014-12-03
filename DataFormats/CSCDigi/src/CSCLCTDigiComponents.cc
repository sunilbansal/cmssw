/**\class CSCLCTDigiComponents
 *
 * Digi for LCT trigger primitive components
 *
 * \author S. Dildick, TAMU
 */

#include "DataFormats/CSCDigi/interface/CSCLCTDigiComponents.h"
#include <iostream>

namespace {
  const std::string lct_types[9] = {
    "ALCT-CLCT", "ALCT-CLCT-GEMPad", "ALCT-CLCT-GEMCoPad", "ALCT-GEMCoPad", 
    "CLCT-GEMCoPad", "ALCT-CLCT-RPC", "ALCT-RPC", "CLCT-RPC"};
}

CSCLCTDigiComponents::CSCLCTDigiComponents(const CSCALCTDigi& alct, const CSCCLCTDigi& clct) : 
  lct_type_(kAlctClct)
{
  alct_.valid_ = alct.isValid();      
  alct_.quality_ = alct.getQuality();    
  alct_.accel_ = alct.getAccelerator();      
  alct_.keywire_ = alct.getKeyWG();   
  alct_.bx_ = alct.getBX();   
  alct_.trknmb_ = alct.getTrknmb();
  alct_.fullbx_ = alct.getFullBX();
  clct_.valid_ = clct.isValid();
  clct_.quality_ = clct.getQuality();
  clct_.pattern_ = clct.getPattern();
  clct_.bend_ = clct.getBend();
  clct_.strip_ = clct.getStripType();
  clct_.cfeb_ = clct.getCFEB();
  clct_.bx_ = clct.getBX();
  clct_.trknmb_ = clct.getTrknmb();
  clct_.fullbx_ = clct.getFullBX();
}


CSCLCTDigiComponents::CSCLCTDigiComponents(const CSCALCTDigi& alct, const CSCCLCTDigi& clct, const GEMCSCPadDigi& gem) : 
  lct_type_(kAlctClctGem)
{
  alct_.valid_ = alct.isValid();      
  alct_.quality_ = alct.getQuality();    
  alct_.accel_ = alct.getAccelerator();      
  alct_.keywire_ = alct.getKeyWG();   
  alct_.bx_ = alct.getBX();   
  alct_.trknmb_ = alct.getTrknmb();
  alct_.fullbx_ = alct.getFullBX();
  clct_.valid_ = clct.isValid();
  clct_.quality_ = clct.getQuality();
  clct_.pattern_ = clct.getPattern();
  clct_.bend_ = clct.getBend();
  clct_.strip_ = clct.getStripType();
  clct_.cfeb_ = clct.getCFEB();
  clct_.bx_ = clct.getBX();
  clct_.trknmb_ = clct.getTrknmb();
  clct_.fullbx_ = clct.getFullBX();
  gem_.pad1_ = gem.pad();
  gem_.bx1_ = gem.bx();
}

CSCLCTDigiComponents::CSCLCTDigiComponents(const CSCALCTDigi& alct, const CSCCLCTDigi& clct, const GEMCSCCoPadDigi& gem) : 
  lct_type_(kAlctClct2Gem)
{
  alct_.valid_ = alct.isValid();      
  alct_.quality_ = alct.getQuality();    
  alct_.accel_ = alct.getAccelerator();      
  alct_.keywire_ = alct.getKeyWG();   
  alct_.bx_ = alct.getBX();   
  alct_.trknmb_ = alct.getTrknmb();
  alct_.fullbx_ = alct.getFullBX();
  clct_.valid_ = clct.isValid();
  clct_.quality_ = clct.getQuality();
  clct_.pattern_ = clct.getPattern();
  clct_.bend_ = clct.getBend();
  clct_.strip_ = clct.getStripType();
  clct_.cfeb_ = clct.getCFEB();
  clct_.bx_ = clct.getBX();
  clct_.trknmb_ = clct.getTrknmb();
  clct_.fullbx_ = clct.getFullBX();
  gem_.pad1_ = gem.pad(1);
  gem_.bx1_ = gem.bx(1);
  gem_.pad2_ = gem.pad(2);
  gem_.bx2_ = gem.bx(2);
}

CSCLCTDigiComponents::CSCLCTDigiComponents(const CSCALCTDigi& alct, const GEMCSCCoPadDigi& gem) : 
  lct_type_(kAlct2Gem)
{
  alct_.valid_ = alct.isValid();      
  alct_.quality_ = alct.getQuality();    
  alct_.accel_ = alct.getAccelerator();      
  alct_.keywire_ = alct.getKeyWG();   
  alct_.bx_ = alct.getBX();   
  alct_.trknmb_ = alct.getTrknmb();
  alct_.fullbx_ = alct.getFullBX();
  gem_.pad1_ = gem.pad(1);
  gem_.bx1_ = gem.bx(1);
  gem_.pad2_ = gem.pad(2);
  gem_.bx2_ = gem.bx(2);
}

CSCLCTDigiComponents::CSCLCTDigiComponents(const CSCCLCTDigi& clct, const GEMCSCCoPadDigi& gem) : 
  lct_type_(kClct2Gem)
{
  clct_.valid_ = clct.isValid();
  clct_.quality_ = clct.getQuality();
  clct_.pattern_ = clct.getPattern();
  clct_.bend_ = clct.getBend();
  clct_.strip_ = clct.getStripType();
  clct_.cfeb_ = clct.getCFEB();
  clct_.bx_ = clct.getBX();
  clct_.trknmb_ = clct.getTrknmb();
  clct_.fullbx_ = clct.getFullBX();
  gem_.pad1_ = gem.pad(1);
  gem_.bx1_ = gem.bx(1);
  gem_.pad2_ = gem.pad(2);
  gem_.bx2_ = gem.bx(2);
}

CSCLCTDigiComponents::CSCLCTDigiComponents(const CSCALCTDigi& alct, const CSCCLCTDigi& clct, const RPCDigi& rpc) : 
  lct_type_(kAlctClctRpc)
{
  alct_.valid_ = alct.isValid();      
  alct_.quality_ = alct.getQuality();    
  alct_.accel_ = alct.getAccelerator();      
  alct_.keywire_ = alct.getKeyWG();   
  alct_.bx_ = alct.getBX();   
  alct_.trknmb_ = alct.getTrknmb();
  alct_.fullbx_ = alct.getFullBX();
  clct_.valid_ = clct.isValid();
  clct_.quality_ = clct.getQuality();
  clct_.pattern_ = clct.getPattern();
  clct_.bend_ = clct.getBend();
  clct_.strip_ = clct.getStripType();
  clct_.cfeb_ = clct.getCFEB();
  clct_.bx_ = clct.getBX();
  clct_.trknmb_ = clct.getTrknmb();
  clct_.fullbx_ = clct.getFullBX();
  rpc_.strip_ = rpc.strip();
  rpc_.bx_ = rpc.bx();
}

CSCLCTDigiComponents::CSCLCTDigiComponents(const CSCALCTDigi& alct, const RPCDigi& rpc) : 
  lct_type_(kAlctRpc)
{
  alct_.valid_ = alct.isValid();      
  alct_.quality_ = alct.getQuality();    
  alct_.accel_ = alct.getAccelerator();      
  alct_.keywire_ = alct.getKeyWG();   
  alct_.bx_ = alct.getBX();   
  alct_.trknmb_ = alct.getTrknmb();
  alct_.fullbx_ = alct.getFullBX();
  rpc_.strip_ = rpc.strip();
  rpc_.bx_ = rpc.bx();
}

CSCLCTDigiComponents::CSCLCTDigiComponents(const CSCCLCTDigi& clct, const RPCDigi& rpc) : 
lct_type_(kClctRpc)
{
  clct_.valid_ = clct.isValid();
  clct_.quality_ = clct.getQuality();
  clct_.pattern_ = clct.getPattern();
  clct_.bend_ = clct.getBend();
  clct_.strip_ = clct.getStripType();
  clct_.cfeb_ = clct.getCFEB();
  clct_.bx_ = clct.getBX();
  clct_.trknmb_ = clct.getTrknmb();
  clct_.fullbx_ = clct.getFullBX();
  rpc_.strip_ = rpc.strip();
  rpc_.bx_ = rpc.bx();
}

CSCLCTDigiComponents& CSCLCTDigiComponents::operator=(const CSCLCTDigiComponents& rhs) 
{
  this->lct_type_=rhc.lct_type_;
  return *this;
}

bool CSCLCTDigiComponents::operator == (const CSCLCTDigiComponents&) const
{
  return false;
}

/*
CSCLCTDigiComponents& CSCLCTDigiComponents::operator=(const CSCLCTDigiComponents& c)
{

  this->
  this->
  this->
  this->_hcal = tp._hcal;
  this->_subsystem = tp._subsystem;
  this->_globalsector = tp._globalsector;
  this->_subsector = tp._subsector;
  this->_eta = tp._eta;
  this->_phi = tp._phi;
  return *this;
}
*/

/*
  bool operator == (const CSCLCTDigiComponents&) const;
  bool operator != (const CSCLCTDigiComponents &rhs) const
    { return !(this->operator==(rhs)); }

  /// Print content of LCT digi components
  void print() const;

std::ostream & operator<<(std::ostream & o, const CSCLCTDigiComponents& digi);
*/
