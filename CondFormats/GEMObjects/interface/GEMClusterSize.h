#ifndef GEMClusterSize_h
#define GEMClusterSize_h

#include<vector>
#include<map>
#include<iostream>
#include<boost/cstdint.hpp>

class GEMClusterSize {

 public:

  
  //structure suitable for cluster size
  struct ClusterSizeItem {
    int dpid;
    float clusterSize;
  };
  
  
  GEMClusterSize(){}
  ~GEMClusterSize(){}
  

  std::vector<ClusterSizeItem>  const & getCls() const {return v_cls;}
  std::vector<ClusterSizeItem>  v_cls; 

};

#endif  //GEMClusterSize_h
