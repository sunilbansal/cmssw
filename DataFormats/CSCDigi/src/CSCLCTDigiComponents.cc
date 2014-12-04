#include "DataFormats/CSCDigi/interface/CSCLCTDigiComponents.h"
#include <iostream>

namespace {
  const std::string lct_types[9] = {
    "ALCT-CLCT", "ALCT-CLCT-GEMPad", "ALCT-CLCT-GEMCoPad", "ALCT-GEMCoPad", 
    "CLCT-GEMCoPad", "ALCT-CLCT-RPC", "ALCT-RPC", "CLCT-RPC"};
}

CSCLCTDigiComponents::CSCLCTDigiComponents(const CSCALCTDigi& alct, 
					   const CSCCLCTDigi& clct, 
					   const CSCCorrelatedLCTDigi& lct) : 
  lct_type_(kAlctClct)
  // alct_(alct),
  // clct_(clct),
  // lct_(lct)
{
}

CSCLCTDigiComponents::CSCLCTDigiComponents(const CSCALCTDigi& alct, 
					   const CSCCLCTDigi& clct, 
					   const CSCCorrelatedLCTDigi& lct, 
					   const GEMCSCPadDigi& gem) : 
  lct_type_(kAlctClctGem),
  alct_(alct),
  clct_(clct),
  lct_(lct),
  pad_(gem)
{
}

CSCLCTDigiComponents::CSCLCTDigiComponents(const CSCALCTDigi& alct, 
					   const CSCCLCTDigi& clct, 
					   const CSCCorrelatedLCTDigi& lct, 
					   const GEMCSCCoPadDigi& gem) : 
  lct_type_(kAlctClct2Gem),
  alct_(alct),
  clct_(clct),
  lct_(lct),
  copad_(gem)
{
}

CSCLCTDigiComponents::CSCLCTDigiComponents(const CSCALCTDigi& alct, 
					   const CSCCorrelatedLCTDigi& lct, 
					   const GEMCSCCoPadDigi& gem) : 
  lct_type_(kAlct2Gem),
  alct_(alct),
  lct_(lct),
  copad_(gem)
{
}

CSCLCTDigiComponents::CSCLCTDigiComponents(const CSCCLCTDigi& clct, 
					   const CSCCorrelatedLCTDigi& lct, 
					   const GEMCSCCoPadDigi& gem) : 
  lct_type_(kClct2Gem),
  clct_(clct),
  lct_(lct),
  copad_(gem)
{
}

CSCLCTDigiComponents::CSCLCTDigiComponents(const CSCALCTDigi& alct, 
					   const CSCCLCTDigi& clct, 
					   const CSCCorrelatedLCTDigi& lct, 
					   const RPCDigi& rpc) : 
  lct_type_(kAlctClctRpc),
  alct_(alct),
  clct_(clct),
  lct_(lct),
  rpc_(rpc)
{
}

CSCLCTDigiComponents::CSCLCTDigiComponents(const CSCALCTDigi& alct, 
					   const CSCCorrelatedLCTDigi& lct, 
					   const RPCDigi& rpc) : 
  lct_type_(kAlctRpc),
  alct_(alct),
  lct_(lct),
  rpc_(rpc)
{
}

CSCLCTDigiComponents::CSCLCTDigiComponents(const CSCCLCTDigi& clct, 
					   const CSCCorrelatedLCTDigi& lct, 
					   const RPCDigi& rpc) : 
  lct_type_(kClctRpc),
  clct_(clct),
  lct_(lct),
  rpc_(rpc)
{
}

CSCLCTDigiComponents& CSCLCTDigiComponents::operator=(const CSCLCTDigiComponents& rhs) 
{
  this->lct_type_=rhs.lct_type_;
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
