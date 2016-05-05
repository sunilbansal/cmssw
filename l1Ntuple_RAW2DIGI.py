# Auto generated configuration file
# using: 
# Revision: 1.19 
# Source: /local/reps/CMSSW/CMSSW/Configuration/Applications/python/ConfigBuilder.py,v 
# with command line options: l1Ntuple -s RAW2DIGI --era=Run2_2016 --customise=L1Trigger/Configuration/customiseReEmul.L1TReEmulFromRAW --customise=L1Trigger/L1TNtuples/customiseL1Ntuple.L1NtupleEMU --customise=L1Trigger/Configuration/customiseUtils.L1TTurnOffUnpackStage2GtGmtAndCalo --conditions=auto:run2_data -n 200 --data --no_exec --no_output --filein=/store/data/Run2016A/ZeroBias1/RAW/v1/000/271/336/00000/00963A5A-BF0A-E611-A657-02163E0141FB.root --geometry=Extended2016,Extended2016Reco --customise=L1Trigger/Configuration/customiseReEmul.L1TEventSetupForHF1x1TPs
import FWCore.ParameterSet.Config as cms

from Configuration.StandardSequences.Eras import eras

process = cms.Process('RAW2DIGI',eras.Run2_2016)

# import of standard configurations
process.load('Configuration.StandardSequences.Services_cff')
process.load('SimGeneral.HepPDTESSource.pythiapdt_cfi')
process.load('FWCore.MessageService.MessageLogger_cfi')
process.load('Configuration.EventContent.EventContent_cff')
process.load('Configuration.Geometry.GeometryExtended2016Reco_cff')
process.load('Configuration.StandardSequences.MagneticField_AutoFromDBCurrent_cff')
process.load('Configuration.StandardSequences.RawToDigi_Data_cff')
process.load('Configuration.StandardSequences.EndOfProcess_cff')
process.load('Configuration.StandardSequences.FrontierConditions_GlobalTag_cff')

process.maxEvents = cms.untracked.PSet(
    input = cms.untracked.int32(2000)
)

files_2015D = [
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/1076F212-AA79-E511-A824-02163E0146F7.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/1A0E9C21-AA79-E511-B929-02163E0143E4.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/20F3ADFB-C379-E511-A921-02163E01456E.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/2874D05C-A379-E511-9B7B-02163E014281.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/7427C66DE-C379-E511-9911-02163E0144F5.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/44E4C2C2-C379-E511-BBCA-02163E01242D.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/48AD69D1-C379-E511-B887-02163E0137BC.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/50029FE9-C379-E511-93E4-02163E0143B1.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/521BA130-C479-E511-912B-02163E0143D5.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/62DB0BE2-C379-E511-A888-02163E0136F5.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/6A66A0E2-C379-E511-BBCB-02163E011EF1.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/7E0638EC-C379-E511-BB0C-02163E014118.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/82543606-AA79-E511-85FF-02163E0135BB.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/8A46E218-A679-E511-8BB2-02163E014634.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/A0067C1D-AA79-E511-88F3-02163E01232C.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/A4C38600-C479-E511-940C-02163E0119C8.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/B6091BFB-C379-E511-BDA6-02163E01424C.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/B6785BC4-C379-E511-AE65-02163E014480.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/B8FE9436-ED76-E511-85FD-02163E013441.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/C6DB78F2-C379-E511-A85C-02163E01376A.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/CEC213E1-C379-E511-934F-02163E011989.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/D88E12CB-C379-E511-8411-02163E014469.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/F46ADAC4-C379-E511-9AC4-02163E011EBC.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/F659BB0B-C479-E511-8EA3-02163E0146D6.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/FC6974EC-C379-E511-8742-02163E01242D.root",
"/store/data/Run2015D/ZeroBias/RAW/v1/000/259/626/00000/FCA4A331-C479-E511-A117-02163E013805.root"
]

files_2016B = [
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/02BF7BEC-9F0D-E611-90BB-02163E0143F1.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/02C0D3DB-980D-E611-B09F-02163E01433F.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/047083AF-A40D-E611-ADD1-02163E0144CB.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/0664629B-9D0D-E611-91CB-02163E0135AD.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/06D3228A-9D0D-E611-ADD9-02163E011C76.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/089B1747-A40D-E611-B4EC-02163E014389.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/0A19D1FA-980D-E611-A1CB-02163E0144CB.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/0A4BDAB3-9F0D-E611-A94D-02163E01451E.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/0A90A988-BB0D-E611-BB0B-02163E013470.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/0AEF65D9-9F0D-E611-8468-02163E014541.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/0C6767BC-960D-E611-975F-02163E014396.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/0C81E1BE-960D-E611-966D-02163E011DE6.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/0CDBB6A3-9B0D-E611-882B-02163E012A40.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/0CFCBB97-A40D-E611-98C3-02163E011F8F.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/10A6932E-C90D-E611-BE48-02163E01353C.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/10AD0FD5-9F0D-E611-A5ED-02163E014145.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/10BBFAA7-A10D-E611-BC6D-02163E011E33.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/1433FFF5-9B0D-E611-95EE-02163E014552.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/16222B0E-990D-E611-936F-02163E0143E1.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/16450F42-A40D-E611-BE19-02163E014439.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/184E59A6-A40D-E611-A76D-02163E012263.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/1866206F-B60D-E611-BD94-02163E0137D9.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/18B23CDE-980D-E611-90A1-02163E014274.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/201B6E89-960D-E611-9532-02163E01374F.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/20751512-A30D-E611-B344-02163E011ECA.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/20E77156-A40D-E611-9CDA-02163E011FB0.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/22E3F2E4-9B0D-E611-B6A4-02163E011954.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/240C1889-9D0D-E611-90DE-02163E0138D2.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/243BE666-9A0D-E611-BE43-02163E012984.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/24EA037D-9E0D-E611-903D-02163E01197B.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/26EB93E2-9B0D-E611-AE9F-02163E011AB9.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/28D9D7AF-A40D-E611-B749-02163E0143BC.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/2A000188-9D0D-E611-BEB6-02163E013903.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/2A14A9BE-9B0D-E611-B64F-02163E011AB9.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/2A3DD2AE-A40D-E611-B11B-02163E01234A.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/2C85A7DA-9F0D-E611-9DB8-02163E014732.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/2C9FFFA9-A40D-E611-86C1-02163E014155.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/2ED072BD-A40D-E611-AC6E-02163E01430F.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/3081DB20-990D-E611-A920-02163E014121.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/30E2EBA2-9B0D-E611-9FC2-02163E0145E5.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/30F6C8F7-B40D-E611-8E1E-02163E012AAE.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/32A05EF7-9B0D-E611-AB56-02163E0122E5.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/34222566-B50D-E611-91E7-02163E013405.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/38B85B42-A40D-E611-A3C5-02163E01372C.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/3A564AE4-9B0D-E611-94F7-02163E011BFF.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/3A736FE4-9F0D-E611-B7BA-02163E014628.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/3C0AB98B-9D0D-E611-A6B1-02163E0143A3.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/3C40DAEF-A00D-E611-9364-02163E01434A.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/3CA95128-970D-E611-8320-02163E011C27.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/3CE01828-9E0D-E611-A551-02163E014430.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/3E572BA8-A10D-E611-8548-02163E0144C3.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/4016745A-9A0D-E611-B305-02163E014360.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/401AA642-A40D-E611-B394-02163E011D07.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/40455955-9A0D-E611-B6DA-02163E0138B4.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/40555756-9A0D-E611-BC37-02163E011933.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/40ADF855-A10D-E611-BBAC-02163E013848.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/422A8957-9A0D-E611-95B2-02163E0140DF.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/425C1A87-9D0D-E611-B8E7-02163E011F8F.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/44E24403-A10D-E611-959E-02163E013429.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/463070EC-A00D-E611-AE82-02163E014281.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/46C628E4-9B0D-E611-B5FA-02163E0133D0.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/485A6710-A00D-E611-8655-02163E011F48.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/4869472F-970D-E611-B309-02163E0118F9.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/4A047B77-A10D-E611-A392-02163E0141C3.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/4A4A4A89-9D0D-E611-8BCA-02163E011FEC.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/4A5CEF26-990D-E611-9788-02163E01380C.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/4E26A3F2-A00D-E611-9DF3-02163E0135F2.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/4EC48477-9C0D-E611-B891-02163E01382D.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/4ECC3DFE-A40D-E611-AF91-02163E0135FC.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/4EEABC90-980D-E611-855C-02163E0142BD.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/4EF4DF03-A30D-E611-A8FB-02163E0143D1.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/50471942-A40D-E611-BD8D-02163E011E0E.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/504CC1DC-980D-E611-B607-02163E013454.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/505B77F9-A20D-E611-AE9C-02163E013959.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/529B253F-A40D-E611-9130-02163E014408.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/529DEAA4-A40D-E611-A209-02163E0122B3.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/545C42A8-A10D-E611-AF35-02163E011FF5.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/56E2B2A7-A40D-E611-8430-02163E0138EF.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/58472266-A10D-E611-B285-02163E014155.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/5884EABF-A10D-E611-AA8A-02163E011BE4.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/58EE5CDD-980D-E611-94AB-02163E0134AF.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/5A34E563-A10D-E611-90F0-02163E01262F.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/5AC43593-C80D-E611-95D7-02163E011B3F.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/6225B945-B60D-E611-9953-02163E01396F.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/626B0C58-9C0D-E611-A51B-02163E0142BC.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/62F6D925-9E0D-E611-BA28-02163E01226E.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/6414DE41-A40D-E611-B259-02163E013952.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/6618AA56-9A0D-E611-9D21-02163E0137CE.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/681419DC-980D-E611-8E53-02163E014371.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/6AA43B2E-970D-E611-B751-02163E0138CB.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/6EDF6D9D-9D0D-E611-9F7C-02163E014508.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/709F8B57-9A0D-E611-9C9C-02163E014475.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/7212DFAC-A40D-E611-BCB2-02163E011E2A.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/721D2DBC-960D-E611-A7A6-02163E01425B.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/72ACECFC-980D-E611-BFC7-02163E01474D.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/746FAEE1-9B0D-E611-8CBB-02163E013952.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/74BB6EE4-9B0D-E611-8202-02163E011E57.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/76B7B6E5-9F0D-E611-9AF7-02163E014450.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/78362F40-A10D-E611-9B90-02163E01416D.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/787ED0E3-9B0D-E611-A281-02163E011C37.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/78F519C1-9E0D-E611-AEC1-02163E0144C1.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/7C98F825-A00D-E611-BB8E-02163E01448F.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/7C9C4E92-980D-E611-A607-02163E012A8C.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/7E22DF88-9D0D-E611-B106-02163E0126AD.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/7EAC77AA-A40D-E611-970A-02163E012A0D.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/800D9699-A20D-E611-9C4C-02163E013424.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/827B5642-B50D-E611-BA87-02163E011D07.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/82A90F9B-9D0D-E611-9CCE-02163E0119D0.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/84415157-9C0D-E611-86AE-02163E014373.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/869C6E9A-9D0D-E611-B26E-02163E0119B1.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/86D7075B-9A0D-E611-9EB3-02163E014483.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/887EEA64-960D-E611-AB23-02163E011E2F.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/88DE77A6-9E0D-E611-9E7A-02163E011F71.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/8A25C001-9E0D-E611-8D57-02163E0145DC.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/8C75EDF5-980D-E611-BE88-02163E0144EC.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/8E22AFF3-980D-E611-97EB-02163E012053.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/8EB2A090-980D-E611-BF83-02163E012AA8.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/8EE439D7-9F0D-E611-8381-02163E01357D.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/9013C084-A40D-E611-AD4A-02163E0145F3.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/90B981E9-9B0D-E611-BAF2-02163E01224A.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/92710143-A40D-E611-8144-02163E01283E.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/92901885-A40D-E611-BF3C-02163E014396.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/9431F633-C50D-E611-9665-02163E013469.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/981716EF-A00D-E611-A223-02163E0143B3.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/9892FFBD-9F0D-E611-92AF-02163E013661.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/9A0A39D8-9F0D-E611-84BB-02163E0142BE.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/9AC7C738-9E0D-E611-8496-02163E011F5F.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/9ACA53DF-9F0D-E611-86B7-02163E01419A.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/9C4EEA9C-A20D-E611-A37D-02163E01476A.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/9CA6F3D9-9F0D-E611-9D30-02163E014335.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/9CC32FE2-9D0D-E611-9122-02163E0119DE.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/9CFDED8F-9D0D-E611-A20D-02163E014743.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/9EBE0EDE-980D-E611-A426-02163E011D01.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/9EDD0551-A10D-E611-8118-02163E014627.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/A46382E9-9B0D-E611-BDB7-02163E01345A.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/A89E13BA-960D-E611-88B5-02163E0141C0.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/ACDBDDE5-9B0D-E611-86BB-02163E014345.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/AE654BA4-980D-E611-BFA2-02163E014208.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/AE8F3E27-9E0D-E611-A5F5-02163E0145A3.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/B0CCC768-9E0D-E611-B82B-02163E011E2A.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/B2985057-A40D-E611-B3E3-02163E01390A.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/B41D71CC-960D-E611-A2B9-02163E0121D2.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/B67808F4-980D-E611-BB13-02163E011F4E.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/B8BFAB6A-9A0D-E611-80C8-02163E01421A.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/BA12C788-9D0D-E611-82D3-02163E01391D.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/BA2DD531-9E0D-E611-8FE3-02163E011FB7.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/BAACA151-A10D-E611-867C-02163E0142D2.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/BC680739-960D-E611-BB8D-02163E0144BA.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/BE4E0E24-9E0D-E611-A216-02163E0145B7.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/C0657343-A10D-E611-BF91-02163E01195C.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/C252B25D-9A0D-E611-825C-02163E011C13.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/C475B389-9D0D-E611-9657-02163E0143FD.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/C4E88788-9D0D-E611-80DC-02163E01472A.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/C6693BEF-A00D-E611-ADE1-02163E01429D.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/C8066A89-9D0D-E611-8351-02163E01415F.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/C81BE682-A40D-E611-B338-02163E0133FC.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/C899CAA6-9B0D-E611-997A-02163E0146DB.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/CA3A4BE2-9B0D-E611-B789-02163E01234A.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/CABF7C13-A50D-E611-B872-02163E011EB1.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/CC02E4CA-960D-E611-8CE7-02163E013658.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/CC2A06A1-9E0D-E611-ADC1-02163E012AA8.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/CC30BADD-980D-E611-9099-02163E013661.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/CEDEC6DE-B20D-E611-BBFF-02163E01393D.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/D0AF0EEB-AE0D-E611-BEC3-02163E0145E6.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/D45BE5E0-C80D-E611-A0A7-02163E01181E.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/D49F7BE3-9B0D-E611-BA4E-02163E01440F.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/D623D28C-980D-E611-A2D6-02163E0145EF.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/D6E5E06C-B50D-E611-AA40-02163E011807.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/D80DB4E3-9B0D-E611-819E-02163E0135FA.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/D89495DD-980D-E611-86D1-02163E0137DC.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/DA6D77DA-A70D-E611-879B-02163E014183.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/DAD39839-9E0D-E611-98B9-02163E01448F.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/DC1E3B79-A10D-E611-9D44-02163E012950.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/E041488A-A20D-E611-9D56-02163E0123C8.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/E2C69651-A10D-E611-A934-02163E01361B.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/E41399C5-9F0D-E611-B878-02163E01413B.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/E6D39DE2-9D0D-E611-A574-02163E0143CD.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/E85181B0-9E0D-E611-B60F-02163E011C1D.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/E86D5F56-9A0D-E611-89DA-02163E01452D.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/E8DC5831-B60D-E611-A84C-02163E014258.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/EA3B4B88-9D0D-E611-810B-02163E01181C.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/EA6555F1-A00D-E611-8942-02163E0136FD.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/ECD6B5B0-A40D-E611-B803-02163E012259.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/EEAEEC8A-960D-E611-8EDC-02163E013906.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/F00DEE6D-9C0D-E611-AE90-02163E011DF8.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/F06FAA3C-960D-E611-A1BA-02163E012330.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/F23161EA-9F0D-E611-A1DD-02163E013533.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/F4C97BDD-980D-E611-8172-02163E013685.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/F6BF7A87-A20D-E611-8C22-02163E014769.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/F840528C-A20D-E611-84CC-02163E012B39.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/F87572F7-9B0D-E611-88F0-02163E014562.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/FA20B6FA-A20D-E611-BCEC-02163E013922.root",
"/store/user/abrinke1/EMTF/Run2016B/2016_04_29/RAW/ZeroBias1/272012/FC2893DC-980D-E611-8851-02163E011E3C.root",
]

# Input source
process.source = cms.Source("PoolSource",
#    fileNames = cms.untracked.vstring('/store/data/Run2016A/ZeroBias1/RAW/v1/000/271/336/00000/00963A5A-BF0A-E611-A657-02163E0141FB.root'),
    fileNames = cms.untracked.vstring(*files_2016B),
    #fileNames = cms.untracked.vstring(*files_2016B),
    secondaryFileNames = cms.untracked.vstring()
)

process.options = cms.untracked.PSet(

)

# Production Info
process.configurationMetadata = cms.untracked.PSet(
    annotation = cms.untracked.string('l1Ntuple nevts:200'),
    name = cms.untracked.string('Applications'),
    version = cms.untracked.string('$Revision: 1.19 $')
)

# Output definition
process.RECOSIMoutput = cms.OutputModule("PoolOutputModule",
    dataset = cms.untracked.PSet(
        dataTier = cms.untracked.string(''),
        filterName = cms.untracked.string('')
    ),
    eventAutoFlushCompressedSize = cms.untracked.int32(5242880),
    fileName = cms.untracked.string('output_l1_2016B_fixed.root'),
    outputCommands = cms.untracked.vstring('keep *'),
#                                         process.RECOSIMEventContent.outputCommands,                                                                                     
    splitLevel = cms.untracked.int32(0)
)

# Additional output definition

# Other statements
from Configuration.AlCa.GlobalTag import GlobalTag
process.GlobalTag = GlobalTag(process.GlobalTag, 'auto:run2_data', '')

# Path and EndPath definitions
process.raw2digi_step = cms.Path(process.RawToDigi*process.csctfDigis)
process.endjob_step = cms.EndPath(process.endOfProcess)
process.RECOSIMoutput_step = cms.EndPath(process.RECOSIMoutput)

# Schedule definition
process.schedule = cms.Schedule(process.raw2digi_step,process.endjob_step,process.RECOSIMoutput_step)

# customisation of the process.

# Automatic addition of the customisation function from L1Trigger.Configuration.customiseReEmul
from L1Trigger.Configuration.customiseReEmul import L1TReEmulFromRAW,L1TEventSetupForHF1x1TPs 

#call to customisation function L1TReEmulFromRAW imported from L1Trigger.Configuration.customiseReEmul
process = L1TReEmulFromRAW(process)

#call to customisation function L1TEventSetupForHF1x1TPs imported from L1Trigger.Configuration.customiseReEmul
process = L1TEventSetupForHF1x1TPs(process)

# Automatic addition of the customisation function from L1Trigger.L1TNtuples.customiseL1Ntuple
from L1Trigger.L1TNtuples.customiseL1Ntuple import L1NtupleEMU 

#call to customisation function L1NtupleEMU imported from L1Trigger.L1TNtuples.customiseL1Ntuple
process = L1NtupleEMU(process)

# Automatic addition of the customisation function from L1Trigger.Configuration.customiseUtils
from L1Trigger.Configuration.customiseUtils import L1TTurnOffUnpackStage2GtGmtAndCalo 

#call to customisation function L1TTurnOffUnpackStage2GtGmtAndCalo imported from L1Trigger.Configuration.customiseUtils
process = L1TTurnOffUnpackStage2GtGmtAndCalo(process)

# End of customisation functions

