#ifndef GEMCalibSetUp_h
#define GEMCalibSetUp_h

#include "FWCore/Framework/interface/EDProducer.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/EventSetup.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include <map>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include<cstring>
#include<string>
#include<stdlib.h>
#include <utility>

class GEMDigitizer;
class GEMGeometry;
class GEMDetId;

class GEMCalibSetUp
{
public:

  explicit GEMCalibSetUp(const edm::ParameterSet& ps);
  virtual ~GEMCalibSetUp();

  std::vector<float> getNoise(uint32_t id);
  std::vector<float> getEff(uint32_t id);
  float getTime(uint32_t id);
  std::map< int, std::vector<double> > getClsMap();
  //  std::map<int, std::vector<double> > getClsMap(uint32_t id);
  std::vector<double> getCls(uint32_t id);

  void setGeometry(const GEMGeometry * geom) {theGeometry = geom;}
  const GEMGeometry * getGeometry() { return theGeometry; }

 private:

  const GEMGeometry * theGeometry;
  std::map<uint32_t, std::vector<float> > _mapDetIdNoise;
  std::map<uint32_t, std::vector<float> > _mapDetIdEff;
  std::map<GEMDetId, float> _bxmap;
  std::map< int, std::vector<double> > _clsMap;
  std::map<uint32_t, std::vector<double> > _mapDetClsMap;
};

#endif
