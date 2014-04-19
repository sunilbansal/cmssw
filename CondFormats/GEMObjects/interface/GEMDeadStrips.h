#ifndef GEMDeadStrips_h
#define GEMDeadStrips_h

#include<vector>
#include<iostream>
#include<boost/cstdint.hpp>


class GEMDeadStrips {

 public:

  struct DeadItem {
    int rawId;
    int strip;
  };
  
  GEMDeadStrips(){}

  ~GEMDeadStrips(){}

  std::vector<DeadItem> const & getDeadVec() const {return DeadVec;}

  std::vector<DeadItem> DeadVec;

};

#endif
