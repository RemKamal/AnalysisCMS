#if !defined(MYLIB_CUTSSTOP_H)
#define MYLIB_CUTSSTOP_H 1

#include "TString.h"


enum {
  Stop_00_Has2Leptons,
  Stop_00_2LMt2upper100, 
  Stop_00_mll20,
  // Z peak sigth
  Stop_05_Zpeak,
  Stop_05_NoTagZpeak,
  Stop_05_TagZpeak,
  // DY estimation Rout/Rin
  Stop_04_Routin,
  Stop_04_Jet2Routin,
  Stop_04_TagRoutin,
  Stop_04_NoTagRoutin,
  //~~~~~~~~~~~~~~~~~~~~~~~
  Stop_00_Zveto,
  // We fill our testing minitre
  Stop_01_Tag,
  Stop_01_NoTag,
  Stop_02_VR1_Tag,
  Stop_02_VR1_NoTag,
  Stop_02_SR1_Tag,
  Stop_02_SR1_NoTag,
  Stop_02_SR2_Tag,
  Stop_02_SR2_NoTag,
  Stop_02_SR3_Tag,
  Stop_02_SR3_NoTag,

  ncut  // This line should be always last
};

const TString scut[ncut] = {
  "Stop/00_Has2Leptons",
  "Stop/00_2LMt2upper100",
  "Stop/00_mll20",
  // Z peak sigth
  "Stop/05_Zpeak",
  "Stop/05_NoTagZpeak",
  "Stop/05_TagZpeak",
  // DY estimation Rout/Rin
  "Stop/04_Routin",
  "Stop/04_Jet2Routin",
  "Stop/04_TagRoutin",
  "Stop/04_NoTagRoutin",
  //~~~~~~~~~~~~~~~~~~~~~~
  "Stop/00_Zveto",
  "Stop/01_Tag",
  "Stop/01_NoTag",
  "Stop/02_VR1_Tag",
  "Stop/02_VR1_NoTag",
  "Stop/02_SR1_Tag",
  "Stop/02_SR1_NoTag",
  "Stop/02_SR2_Tag",
  "Stop/02_SR2_NoTag",
  "Stop/02_SR3_Tag",
  "Stop/02_SR3_NoTag",

};

#endif
