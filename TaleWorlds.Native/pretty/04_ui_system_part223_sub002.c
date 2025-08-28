#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part223_sub002.c - 1 个函数

// 函数: void FUN_1807975fc(int64_t param_1,uint64_t param_2,float *param_3,float *param_4)
void FUN_1807975fc(int64_t param_1,uint64_t param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  int64_t lVar3;
  float *unaff_RBP;
  float *unaff_RSI;
  int64_t in_R10;
  int64_t in_R11;
  int64_t unaff_R14;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float afStackX_8 [6];
  float afStackX_20 [2];
  uint64_t in_stack_00000040;
  
  if (3 < in_R10 - param_1) {
    fVar8 = unaff_XMM6_Da - in_XMM4_Da;
    do {
      fVar4 = unaff_XMM8_Da;
      if (afStackX_20[param_1] < unaff_XMM6_Da) {
        fVar4 = unaff_XMM7_Da - (afStackX_20[param_1] - in_XMM4_Da) / fVar8;
        fVar4 = fVar4 * fVar4;
      }
      afStackX_20[param_1 + -8] = fVar4;
      fVar5 = unaff_XMM8_Da;
      if (afStackX_20[param_1 + 1] < unaff_XMM6_Da) {
        fVar5 = unaff_XMM7_Da - (afStackX_20[param_1 + 1] - in_XMM4_Da) / fVar8;
        fVar5 = fVar5 * fVar5;
      }
      afStackX_20[param_1 + -7] = fVar5;
      fVar6 = unaff_XMM8_Da;
      if (*(float *)(&stack0x00000028 + param_1 * 4) < unaff_XMM6_Da) {
        fVar6 = unaff_XMM7_Da - (*(float *)(&stack0x00000028 + param_1 * 4) - in_XMM4_Da) / fVar8;
        fVar6 = fVar6 * fVar6;
      }
      afStackX_8[param_1] = fVar6;
      fVar7 = unaff_XMM8_Da;
      if (*(float *)(&stack0x0000002c + param_1 * 4) < unaff_XMM6_Da) {
        fVar7 = unaff_XMM7_Da - (*(float *)(&stack0x0000002c + param_1 * 4) - in_XMM4_Da) / fVar8;
        fVar7 = fVar7 * fVar7;
      }
      afStackX_8[param_1 + 1] = fVar7;
      in_XMM5_Da = in_XMM5_Da + fVar4 + fVar5 + fVar6 + fVar7;
      param_1 = param_1 + 4;
    } while (param_1 < in_R10 + -3);
  }
  for (; param_1 < in_R10; param_1 = param_1 + 1) {
    fVar8 = unaff_XMM8_Da;
    if (afStackX_20[param_1] < unaff_XMM6_Da) {
      fVar8 = unaff_XMM7_Da - (afStackX_20[param_1] - in_XMM4_Da) / (unaff_XMM6_Da - in_XMM4_Da);
      fVar8 = fVar8 * fVar8;
    }
    afStackX_20[param_1 + -8] = fVar8;
    in_XMM5_Da = in_XMM5_Da + fVar8;
  }
  *(int64_t *)param_3 = unaff_R14;
  fVar8 = (float)unaff_R14;
  param_3[2] = fVar8;
  *(int64_t *)param_4 = unaff_R14;
  param_4[2] = fVar8;
  if (in_XMM5_Da != unaff_XMM8_Da) {
    lVar3 = unaff_R14;
    if (3 < in_R10) {
      pfVar2 = (float *)(in_R11 + 8);
      do {
        fVar4 = afStackX_20[lVar3 + -8];
        fVar5 = afStackX_20[lVar3 + -7];
        *param_3 = fVar4 * pfVar2[-1] + *param_3;
        param_3[1] = fVar4 * *pfVar2 + param_3[1];
        param_3[2] = fVar4 * pfVar2[1] + param_3[2];
        *param_4 = fVar4 * pfVar2[5] + *param_4;
        param_4[1] = fVar4 * pfVar2[6] + param_4[1];
        param_4[2] = fVar4 * pfVar2[7] + param_4[2];
        fVar4 = afStackX_8[lVar3];
        *param_3 = fVar5 * pfVar2[0xb] + *param_3;
        param_3[1] = fVar5 * pfVar2[0xc] + param_3[1];
        param_3[2] = fVar5 * pfVar2[0xd] + param_3[2];
        *param_4 = fVar5 * pfVar2[0x11] + *param_4;
        param_4[1] = fVar5 * pfVar2[0x12] + param_4[1];
        param_4[2] = fVar5 * pfVar2[0x13] + param_4[2];
        fVar5 = afStackX_8[lVar3 + 1];
        *param_3 = fVar4 * pfVar2[0x17] + *param_3;
        param_3[1] = fVar4 * pfVar2[0x18] + param_3[1];
        param_3[2] = fVar4 * pfVar2[0x19] + param_3[2];
        *param_4 = fVar4 * pfVar2[0x1d] + *param_4;
        param_4[1] = fVar4 * pfVar2[0x1e] + param_4[1];
        param_4[2] = fVar4 * pfVar2[0x1f] + param_4[2];
        *param_3 = fVar5 * pfVar2[0x23] + *param_3;
        param_3[1] = fVar5 * pfVar2[0x24] + param_3[1];
        lVar3 = lVar3 + 4;
        param_3[2] = fVar5 * pfVar2[0x25] + param_3[2];
        *param_4 = fVar5 * pfVar2[0x29] + *param_4;
        param_4[1] = fVar5 * pfVar2[0x2a] + param_4[1];
        pfVar1 = pfVar2 + 0x2b;
        pfVar2 = pfVar2 + 0x30;
        param_4[2] = fVar5 * *pfVar1 + param_4[2];
      } while (lVar3 < in_R10 + -3);
    }
    if (lVar3 < in_R10) {
      pfVar2 = (float *)(in_R11 + 8 + lVar3 * 0x30);
      do {
        fVar4 = afStackX_20[lVar3 + -8];
        lVar3 = lVar3 + 1;
        *param_3 = fVar4 * pfVar2[-1] + *param_3;
        param_3[1] = fVar4 * *pfVar2 + param_3[1];
        param_3[2] = fVar4 * pfVar2[1] + param_3[2];
        *param_4 = fVar4 * pfVar2[5] + *param_4;
        param_4[1] = fVar4 * pfVar2[6] + param_4[1];
        pfVar1 = pfVar2 + 7;
        pfVar2 = pfVar2 + 0xc;
        param_4[2] = fVar4 * *pfVar1 + param_4[2];
      } while (lVar3 < in_R10);
    }
    fVar4 = unaff_XMM7_Da / in_XMM5_Da;
    *param_3 = fVar4 * *param_3;
    param_3[2] = fVar4 * param_3[2];
    param_3[1] = fVar4 * param_3[1];
    fVar4 = param_4[1];
    fVar5 = *param_4;
    fVar6 = param_4[2];
    fVar7 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6);
    if (unaff_XMM8_Da < fVar7) {
      fVar7 = unaff_XMM7_Da / fVar7;
      *param_4 = fVar7 * fVar5;
      param_4[1] = fVar7 * fVar4;
      param_4[2] = fVar7 * fVar6;
    }
    else {
      *(int64_t *)param_4 = unaff_R14;
      param_4[2] = fVar8;
    }
  }
  *unaff_RSI = in_XMM4_Da;
  *unaff_RBP = SQRT(param_3[2] * param_3[2] + *param_3 * *param_3);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000040 ^ (uint64_t)&stack0x00000000);
}






