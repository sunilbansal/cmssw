// -*- C++ -*-
//
// Package:     test
// Class  :     TestPRegisterModules
// 
// Implementation:
//     <Notes on implementation>
//
// Original Author:  Chris Jones
//         Created:  Sat Sep 24 10:58:40 CEST 2005
// $Id: TestPRegisterModules.cc,v 1.1 2007/05/08 03:15:18 wmtan Exp $
//

// system include files

// user include files
#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/Framework/test/stubs/TestPRegisterModule1.h"
#include "FWCore/Framework/test/stubs/TestPRegisterModule2.h"

DEFINE_FWK_MODULE(TestPRegisterModule1);
DEFINE_FWK_MODULE(TestPRegisterModule2);
