#ifndef GEMStripNoises_h
#define GEMStripNoises_h

#include<vector>
#include<map>
#include<iostream>
#include<boost/cstdint.hpp>

class GEMStripNoises {

 public:

  struct NoiseItem {
    int dpid;
    float noise;
    float eff;
    float time;
  };
  
  GEMStripNoises(){}
  ~GEMStripNoises(){}
  
  std::vector<NoiseItem>  const & getVNoise() const {return v_noises;}
  std::vector<float>  const & getCls() const {return v_cls;}

  std::vector<NoiseItem>  v_noises; 
  std::vector<float>  v_cls; 
};

#endif
