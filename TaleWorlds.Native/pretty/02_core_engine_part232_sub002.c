#include "TaleWorlds.Native.Split.h"
// 02_core_engine_part232_sub002.c - 1 个函数
// 函数: void function_202d4d(int32_t param_1,float *param_2)
void function_202d4d(int32_t param_1,float *param_2)
{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  float *pfVar4;
  float *pfVar5;
  int8_t unaff_BL;
  int64_t unaff_RBP;
  float *unaff_RSI;
  float fVar6;
  float fVar7;
  do {
    pfVar5 = param_2;
    if (unaff_RBP < 1) break;
    lVar3 = (int64_t)param_2 - (int64_t)unaff_RSI >> 2;
    if (lVar3 < 0) {
      lVar3 = lVar3 + 1;
    }
    fVar6 = *unaff_RSI;
    fVar1 = param_2[-1];
    fVar2 = unaff_RSI[lVar3 >> 1];
    fVar7 = fVar6;
    if (fVar6 < fVar2) {
      fVar7 = fVar2;
      fVar2 = fVar6;
    }
    pfVar4 = param_2;
    pfVar5 = unaff_RSI;
    if ((fVar1 <= fVar7) && (fVar7 = fVar2, fVar2 < fVar1)) {
      fVar7 = fVar1;
    }
    while( true ) {
      while (fVar6 < fVar7) {
        fVar6 = pfVar5[1];
        pfVar5 = pfVar5 + 1;
      }
      pfVar4 = pfVar4 + -1;
      fVar1 = *pfVar4;
      while (fVar7 < fVar1) {
        pfVar4 = pfVar4 + -1;
        fVar1 = *pfVar4;
      }
      if (pfVar4 <= pfVar5) break;
      fVar1 = *pfVar5;
      *pfVar5 = *pfVar4;
      *pfVar4 = fVar1;
      fVar6 = pfVar5[1];
      pfVar5 = pfVar5 + 1;
    }
    unaff_RBP = unaff_RBP + -1;
    param_1 = function_202d20(pfVar5,param_2,unaff_RBP,unaff_BL);
    param_2 = pfVar5;
  } while (0x70 < (int64_t)((int64_t)pfVar5 - (int64_t)unaff_RSI & 0xfffffffffffffffcU));
  if (unaff_RBP == 0) {
    function_203100(param_1,pfVar5,pfVar5,unaff_BL);
  }
  return;
}