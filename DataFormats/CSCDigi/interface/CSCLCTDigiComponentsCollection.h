#ifndef CSCDigi_CSCLCTDigiComponentsCollection_h
#define CSCDigi_CSCLCTDigiComponentsCollection_h

/** \class CSCLCTDigiComponentsCollection
 *
*/

#include <DataFormats/MuonDetId/interface/CSCDetId.h>
#include <DataFormats/CSCDigi/interface/CSCLCTDigiComponents.h>
#include <DataFormats/MuonData/interface/MuonDigiCollection.h>

typedef MuonDigiCollection<CSCDetId,CSCLCTDigiComponents> CSCLCTDigiComponentsCollection;

#endif
