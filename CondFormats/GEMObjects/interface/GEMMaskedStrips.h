#ifndef GEMMaskedStrips_h
#define GEMMaskedStrips_h

#include<vector>
#include<iostream>
#include<boost/cstdint.hpp>


class GEMMaskedStrips {

 public:

  struct MaskItem {
    int rawId;
    int strip;
  };
  
  GEMMaskedStrips(){}

  ~GEMMaskedStrips(){}

  std::vector<MaskItem> const & getMaskVec() const {return MaskVec;}

  std::vector<MaskItem> MaskVec;

};

#endif
