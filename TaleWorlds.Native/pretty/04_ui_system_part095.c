#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part095.c - 13 个函数

// 函数: void FUN_180723360(int64_t param_1,uint64_t param_2)
void FUN_180723360(int64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int8_t auStack_48 [8];
  uint64_t uStack_40;
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_48;
  uVar1 = (int64_t)(*(int *)(param_1 + 0x10c) + *(int *)(param_1 + 0x114)) * 4;
  uVar2 = uVar1 + 0xf;
  if (uVar2 <= uVar1) {
    uVar2 = 0xffffffffffffff0;
  }
  uStack_40 = param_2;
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0(uVar2 & 0xfffffffffffffff0);
}



int16_t *
FUN_1807234d0(int16_t *param_1,int64_t param_2,short *param_3,int param_4,int param_5,
             int param_6,int param_7)

{
  short *psVar1;
  int64_t lVar2;
  int *piVar3;
  int iVar4;
  int16_t uVar5;
  int iVar6;
  
  if (param_4 == 0x12) {
    iVar4 = 0;
    if (0 < param_6) {
      do {
        piVar3 = (int *)(((int64_t)iVar4 >> 0x10) * 4 + param_2);
        iVar6 = (int)((uint64_t)(ushort)iVar4 * (int64_t)(short)param_5 >> 0x10);
        psVar1 = param_3 + iVar6 * 9;
        lVar2 = (int64_t)((param_5 - iVar6) * 9);
        iVar6 = ((int)((uint64_t)((int64_t)piVar3[0x11] * (int64_t)param_3[lVar2 + -9]) >> 0x10)
                 + (int)((uint64_t)((int64_t)param_3[lVar2 + -2] * (int64_t)piVar3[10]) >> 0x10)
                   + (int)((uint64_t)((int64_t)param_3[lVar2 + -4] * (int64_t)piVar3[0xc]) >>
                          0x10) +
                     (int)((uint64_t)((int64_t)piVar3[0xe] * (int64_t)param_3[lVar2 + -6]) >>
                          0x10) +
                     (int)((uint64_t)((int64_t)piVar3[0xf] * (int64_t)param_3[lVar2 + -7]) >>
                          0x10) +
                     (int)((uint64_t)((int64_t)psVar1[8] * (int64_t)piVar3[8]) >> 0x10) +
                     (int)((uint64_t)((int64_t)psVar1[7] * (int64_t)piVar3[7]) >> 0x10) +
                     (int)((uint64_t)((int64_t)psVar1[6] * (int64_t)piVar3[6]) >> 0x10) +
                     (int)((uint64_t)((int64_t)psVar1[5] * (int64_t)piVar3[5]) >> 0x10) +
                     (int)((uint64_t)((int64_t)psVar1[4] * (int64_t)piVar3[4]) >> 0x10) +
                     (int)((uint64_t)((int64_t)psVar1[3] * (int64_t)piVar3[3]) >> 0x10) +
                     (int)((uint64_t)((int64_t)psVar1[2] * (int64_t)piVar3[2]) >> 0x10) +
                     (int)((uint64_t)((int64_t)psVar1[1] * (int64_t)piVar3[1]) >> 0x10) +
                     (int)((uint64_t)((int64_t)*psVar1 * (int64_t)*piVar3) >> 0x10) +
                     (int)((uint64_t)((int64_t)piVar3[0x10] * (int64_t)param_3[lVar2 + -8]) >>
                          0x10) +
                     (int)((uint64_t)((int64_t)param_3[lVar2 + -5] * (int64_t)piVar3[0xd]) >>
                          0x10) +
                     (int)((uint64_t)((int64_t)param_3[lVar2 + -3] * (int64_t)piVar3[0xb]) >>
                          0x10) +
                   (int)((uint64_t)((int64_t)param_3[lVar2 + -1] * (int64_t)piVar3[9]) >> 0x10)
                >> 5) + 1 >> 1;
        if (iVar6 < 0x8000) {
          uVar5 = (int16_t)iVar6;
          if (iVar6 < -0x8000) {
            uVar5 = 0x8000;
          }
        }
        else {
          uVar5 = 0x7fff;
        }
        iVar4 = iVar4 + param_7;
        *param_1 = uVar5;
        param_1 = param_1 + 1;
      } while (iVar4 < param_6);
    }
  }
  else if (param_4 == 0x18) {
    iVar4 = 0;
    if (0 < param_6) {
      do {
        piVar3 = (int *)(((int64_t)iVar4 >> 0x10) * 4 + param_2);
        iVar6 = ((int)((uint64_t)((int64_t)(piVar3[0xc] + piVar3[0xb]) * (int64_t)param_3[0xb])
                      >> 0x10) +
                 (int)((uint64_t)((int64_t)(piVar3[0xe] + piVar3[9]) * (int64_t)param_3[9]) >>
                      0x10) +
                 (int)((uint64_t)((int64_t)(piVar3[0x10] + piVar3[7]) * (int64_t)param_3[7]) >>
                      0x10) +
                 (int)((uint64_t)((int64_t)(piVar3[0x12] + piVar3[5]) * (int64_t)param_3[5]) >>
                      0x10) +
                 (int)((uint64_t)((int64_t)(piVar3[0x14] + piVar3[3]) * (int64_t)param_3[3]) >>
                      0x10) +
                 (int)((uint64_t)((int64_t)(piVar3[0x16] + piVar3[1]) * (int64_t)param_3[1]) >>
                      0x10) +
                 (int)((uint64_t)((int64_t)(piVar3[0xd] + piVar3[10]) * (int64_t)param_3[10]) >>
                      0x10) +
                 (int)((uint64_t)((int64_t)(piVar3[0xf] + piVar3[8]) * (int64_t)param_3[8]) >>
                      0x10) +
                 (int)((uint64_t)((int64_t)(piVar3[0x11] + piVar3[6]) * (int64_t)param_3[6]) >>
                      0x10) +
                 (int)((uint64_t)((int64_t)(piVar3[0x13] + piVar3[4]) * (int64_t)param_3[4]) >>
                      0x10) +
                 (int)((uint64_t)((int64_t)(piVar3[0x15] + piVar3[2]) * (int64_t)param_3[2]) >>
                      0x10) +
                 (int)((uint64_t)((int64_t)(piVar3[0x17] + *piVar3) * (int64_t)*param_3) >> 0x10)
                >> 5) + 1 >> 1;
        if (iVar6 < 0x8000) {
          uVar5 = (int16_t)iVar6;
          if (iVar6 < -0x8000) {
            uVar5 = 0x8000;
          }
        }
        else {
          uVar5 = 0x7fff;
        }
        *param_1 = uVar5;
        iVar4 = iVar4 + param_7;
        param_1 = param_1 + 1;
      } while (iVar4 < param_6);
      return param_1;
    }
  }
  else if ((param_4 == 0x24) && (iVar4 = 0, 0 < param_6)) {
    do {
      piVar3 = (int *)(((int64_t)iVar4 >> 0x10) * 4 + param_2);
      iVar6 = ((int)((uint64_t)((int64_t)(piVar3[0x14] + piVar3[0xf]) * (int64_t)param_3[0xf]) >>
                    0x10) +
               (int)((uint64_t)((int64_t)(piVar3[0x16] + piVar3[0xd]) * (int64_t)param_3[0xd]) >>
                    0x10) +
               (int)((uint64_t)((int64_t)(piVar3[0x18] + piVar3[0xb]) * (int64_t)param_3[0xb]) >>
                    0x10) +
               (int)((uint64_t)((int64_t)(piVar3[0x1a] + piVar3[9]) * (int64_t)param_3[9]) >>
                    0x10) +
               (int)((uint64_t)((int64_t)(piVar3[0x1c] + piVar3[7]) * (int64_t)param_3[7]) >>
                    0x10) +
               (int)((uint64_t)((int64_t)(piVar3[0x1e] + piVar3[5]) * (int64_t)param_3[5]) >>
                    0x10) +
               (int)((uint64_t)((int64_t)(piVar3[0x20] + piVar3[3]) * (int64_t)param_3[3]) >>
                    0x10) +
               (int)((uint64_t)((int64_t)(piVar3[0x22] + piVar3[1]) * (int64_t)param_3[1]) >>
                    0x10) +
               (int)((uint64_t)((int64_t)(piVar3[0x12] + piVar3[0x11]) * (int64_t)param_3[0x11])
                    >> 0x10) +
               (int)((uint64_t)((int64_t)(piVar3[0x13] + piVar3[0x10]) * (int64_t)param_3[0x10])
                    >> 0x10) +
               (int)((uint64_t)((int64_t)(piVar3[0x15] + piVar3[0xe]) * (int64_t)param_3[0xe]) >>
                    0x10) +
               (int)((uint64_t)((int64_t)(piVar3[0x17] + piVar3[0xc]) * (int64_t)param_3[0xc]) >>
                    0x10) +
               (int)((uint64_t)((int64_t)(piVar3[0x19] + piVar3[10]) * (int64_t)param_3[10]) >>
                    0x10) +
               (int)((uint64_t)((int64_t)(piVar3[0x1b] + piVar3[8]) * (int64_t)param_3[8]) >>
                    0x10) +
               (int)((uint64_t)((int64_t)(piVar3[0x1d] + piVar3[6]) * (int64_t)param_3[6]) >>
                    0x10) +
               (int)((uint64_t)((int64_t)(piVar3[0x1f] + piVar3[4]) * (int64_t)param_3[4]) >>
                    0x10) +
               (int)((uint64_t)((int64_t)(piVar3[0x21] + piVar3[2]) * (int64_t)param_3[2]) >>
                    0x10) +
               (int)((uint64_t)((int64_t)(piVar3[0x23] + *piVar3) * (int64_t)*param_3) >> 0x10)
              >> 5) + 1 >> 1;
      if (iVar6 < 0x8000) {
        uVar5 = (int16_t)iVar6;
        if (iVar6 < -0x8000) {
          uVar5 = 0x8000;
        }
      }
      else {
        uVar5 = 0x7fff;
      }
      *param_1 = uVar5;
      iVar4 = iVar4 + param_7;
      param_1 = param_1 + 1;
    } while (iVar4 < param_6);
    return param_1;
  }
  return param_1;
}



int16_t * FUN_1807238f3(void)

{
  short *psVar1;
  int64_t lVar2;
  int64_t lVar3;
  int16_t *unaff_RBX;
  int iVar4;
  int16_t uVar5;
  int iVar6;
  int *piVar7;
  int unaff_R12D;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int in_stack_00000058;
  int in_stack_00000060;
  
  iVar4 = 0;
  if (0 < in_stack_00000058) {
    do {
      piVar7 = (int *)(((int64_t)iVar4 >> 0x10) * 4 + unaff_R13);
      iVar6 = (int)((uint64_t)(ushort)iVar4 * (int64_t)(short)unaff_R12D >> 0x10);
      psVar1 = (short *)(unaff_R14 + (int64_t)(iVar6 * 9) * 2);
      lVar3 = (int64_t)((unaff_R12D - iVar6) * 9);
      lVar2 = unaff_R14 + lVar3 * 2;
      iVar6 = ((int)((uint64_t)((int64_t)piVar7[0x11] * (int64_t)*(short *)(lVar2 + -0x12)) >>
                    0x10) +
               (int)((uint64_t)((int64_t)*(short *)(lVar2 + -4) * (int64_t)piVar7[10]) >> 0x10) +
               (int)((uint64_t)((int64_t)*(short *)(lVar2 + -8) * (int64_t)piVar7[0xc]) >> 0x10)
               + (int)((uint64_t)((int64_t)piVar7[0xe] * (int64_t)*(short *)(lVar2 + -0xc)) >>
                      0x10) +
                 (int)((uint64_t)
                       ((int64_t)piVar7[0xf] * (int64_t)*(short *)(unaff_R14 + -0xe + lVar3 * 2))
                      >> 0x10) +
                 (int)((uint64_t)((int64_t)psVar1[8] * (int64_t)piVar7[8]) >> 0x10) +
                 (int)((uint64_t)((int64_t)psVar1[7] * (int64_t)piVar7[7]) >> 0x10) +
                 (int)((uint64_t)((int64_t)psVar1[6] * (int64_t)piVar7[6]) >> 0x10) +
                 (int)((uint64_t)((int64_t)psVar1[5] * (int64_t)piVar7[5]) >> 0x10) +
                 (int)((uint64_t)((int64_t)psVar1[4] * (int64_t)piVar7[4]) >> 0x10) +
                 (int)((uint64_t)((int64_t)psVar1[3] * (int64_t)piVar7[3]) >> 0x10) +
                 (int)((uint64_t)((int64_t)psVar1[2] * (int64_t)piVar7[2]) >> 0x10) +
                 (int)((uint64_t)((int64_t)psVar1[1] * (int64_t)piVar7[1]) >> 0x10) +
                 (int)((uint64_t)((int64_t)*psVar1 * (int64_t)*piVar7) >> 0x10) +
                 (int)((uint64_t)((int64_t)piVar7[0x10] * (int64_t)*(short *)(lVar2 + -0x10)) >>
                      0x10) +
                 (int)((uint64_t)((int64_t)*(short *)(lVar2 + -10) * (int64_t)piVar7[0xd]) >>
                      0x10) +
               (int)((uint64_t)((int64_t)*(short *)(lVar2 + -6) * (int64_t)piVar7[0xb]) >> 0x10)
               + (int)((uint64_t)((int64_t)*(short *)(lVar2 + -2) * (int64_t)piVar7[9]) >> 0x10)
              >> 5) + 1 >> 1;
      if (iVar6 < 0x8000) {
        uVar5 = (int16_t)iVar6;
        if (iVar6 < -0x8000) {
          uVar5 = 0x8000;
        }
      }
      else {
        uVar5 = 0x7fff;
      }
      iVar4 = iVar4 + in_stack_00000060;
      *unaff_RBX = uVar5;
      unaff_RBX = unaff_RBX + 1;
    } while (iVar4 < in_stack_00000058);
  }
  return unaff_RBX;
}



int16_t * FUN_18072390f(uint64_t param_1,int64_t param_2)

{
  short *psVar1;
  int64_t lVar2;
  int64_t lVar3;
  int16_t *unaff_RBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  int16_t uVar4;
  int iVar5;
  int *piVar6;
  int unaff_R12D;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int in_stack_00000060;
  
  do {
    piVar6 = (int *)(((int64_t)unaff_EDI >> 0x10) * 4 + unaff_R13);
    iVar5 = (int)((uint64_t)(ushort)unaff_EDI * param_2 >> 0x10);
    psVar1 = (short *)(unaff_R14 + (int64_t)(iVar5 * 9) * 2);
    lVar3 = (int64_t)((unaff_R12D - iVar5) * 9);
    lVar2 = unaff_R14 + lVar3 * 2;
    iVar5 = ((int)((uint64_t)((int64_t)piVar6[0x11] * (int64_t)*(short *)(lVar2 + -0x12)) >> 0x10
                  ) + (int)((uint64_t)((int64_t)*(short *)(lVar2 + -4) * (int64_t)piVar6[10]) >>
                           0x10) +
                      (int)((uint64_t)((int64_t)*(short *)(lVar2 + -8) * (int64_t)piVar6[0xc]) >>
                           0x10) +
                      (int)((uint64_t)((int64_t)piVar6[0xe] * (int64_t)*(short *)(lVar2 + -0xc))
                           >> 0x10) +
                      (int)((uint64_t)
                            ((int64_t)piVar6[0xf] *
                            (int64_t)*(short *)(unaff_R14 + -0xe + lVar3 * 2)) >> 0x10) +
                      (int)((uint64_t)((int64_t)psVar1[8] * (int64_t)piVar6[8]) >> 0x10) +
                      (int)((uint64_t)((int64_t)psVar1[7] * (int64_t)piVar6[7]) >> 0x10) +
                      (int)((uint64_t)((int64_t)psVar1[6] * (int64_t)piVar6[6]) >> 0x10) +
                      (int)((uint64_t)((int64_t)psVar1[5] * (int64_t)piVar6[5]) >> 0x10) +
                      (int)((uint64_t)((int64_t)psVar1[4] * (int64_t)piVar6[4]) >> 0x10) +
                      (int)((uint64_t)((int64_t)psVar1[3] * (int64_t)piVar6[3]) >> 0x10) +
                      (int)((uint64_t)((int64_t)psVar1[2] * (int64_t)piVar6[2]) >> 0x10) +
                      (int)((uint64_t)((int64_t)psVar1[1] * (int64_t)piVar6[1]) >> 0x10) +
                      (int)((uint64_t)((int64_t)*psVar1 * (int64_t)*piVar6) >> 0x10) +
                      (int)((uint64_t)
                            ((int64_t)piVar6[0x10] * (int64_t)*(short *)(lVar2 + -0x10)) >> 0x10)
                      + (int)((uint64_t)((int64_t)*(short *)(lVar2 + -10) * (int64_t)piVar6[0xd])
                             >> 0x10) +
                      (int)((uint64_t)((int64_t)*(short *)(lVar2 + -6) * (int64_t)piVar6[0xb]) >>
                           0x10) +
                      (int)((uint64_t)((int64_t)*(short *)(lVar2 + -2) * (int64_t)piVar6[9]) >>
                           0x10) >> 5) + 1 >> 1;
    if (iVar5 < 0x8000) {
      uVar4 = (int16_t)iVar5;
      if (iVar5 < unaff_ESI) {
        uVar4 = (int16_t)unaff_ESI;
      }
    }
    else {
      uVar4 = 0x7fff;
    }
    unaff_EDI = unaff_EDI + in_stack_00000060;
    *unaff_RBX = uVar4;
    unaff_RBX = unaff_RBX + 1;
  } while (unaff_EDI < unaff_EBP);
  return unaff_RBX;
}





// 函数: void FUN_180723afd(void)
void FUN_180723afd(void)

{
  return;
}





// 函数: void FUN_180723b02(void)
void FUN_180723b02(void)

{
  return;
}





// 函数: void FUN_180723b20(int *param_1,int64_t param_2,int64_t param_3,int param_4)
void FUN_180723b20(int *param_1,int64_t param_2,int64_t param_3,int param_4)

{
  int16_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  
  if (0 < param_4) {
    lVar7 = 0;
    do {
      iVar4 = *(short *)(param_3 + lVar7 * 2) * 0x400;
      iVar2 = (int)((uint64_t)((int64_t)(iVar4 - *param_1) * 0x6d2) >> 0x10);
      iVar5 = *param_1 + iVar2;
      *param_1 = iVar2 + iVar4;
      iVar3 = (int)((uint64_t)((int64_t)(iVar5 - param_1[1]) * 0x3a8a) >> 0x10);
      iVar6 = param_1[1] + iVar3;
      iVar2 = param_1[2];
      param_1[1] = iVar5 + iVar3;
      iVar3 = iVar6 - iVar2;
      iVar3 = (int)((uint64_t)((int64_t)iVar3 * -0x6755) >> 0x10) + iVar3;
      param_1[2] = iVar6 + iVar3;
      iVar2 = (iVar2 + iVar3 >> 9) + 1 >> 1;
      if (iVar2 < 0x8000) {
        uVar1 = (int16_t)iVar2;
        if (iVar2 < -0x8000) {
          uVar1 = 0x8000;
        }
      }
      else {
        uVar1 = 0x7fff;
      }
      *(int16_t *)(param_2 + lVar7 * 4) = uVar1;
      iVar2 = (int)((uint64_t)((int64_t)(iVar4 - param_1[3]) * 0x1ac6) >> 0x10);
      iVar5 = param_1[3] + iVar2;
      param_1[3] = iVar2 + iVar4;
      iVar3 = (int)((uint64_t)((int64_t)(iVar5 - param_1[4]) * 0x64a9) >> 0x10);
      iVar4 = param_1[4] + iVar3;
      iVar2 = param_1[5];
      param_1[4] = iVar5 + iVar3;
      iVar3 = iVar4 - iVar2;
      iVar3 = (int)((uint64_t)((int64_t)iVar3 * -0x270a) >> 0x10) + iVar3;
      param_1[5] = iVar4 + iVar3;
      iVar2 = (iVar2 + iVar3 >> 9) + 1 >> 1;
      if (iVar2 < 0x8000) {
        uVar1 = (int16_t)iVar2;
        if (iVar2 < -0x8000) {
          uVar1 = 0x8000;
        }
      }
      else {
        uVar1 = 0x7fff;
      }
      *(int16_t *)(param_2 + 2 + lVar7 * 4) = uVar1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_4);
  }
  return;
}





// 函数: void FUN_180723b34(int *param_1,int64_t param_2,int64_t param_3,int param_4)
void FUN_180723b34(int *param_1,int64_t param_2,int64_t param_3,int param_4)

{
  int16_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  
  lVar7 = 0;
  do {
    iVar4 = *(short *)(param_3 + lVar7 * 2) * 0x400;
    iVar2 = (int)((uint64_t)((int64_t)(iVar4 - *param_1) * 0x6d2) >> 0x10);
    iVar5 = *param_1 + iVar2;
    *param_1 = iVar2 + iVar4;
    iVar3 = (int)((uint64_t)((int64_t)(iVar5 - param_1[1]) * 0x3a8a) >> 0x10);
    iVar6 = param_1[1] + iVar3;
    iVar2 = param_1[2];
    param_1[1] = iVar5 + iVar3;
    iVar3 = iVar6 - iVar2;
    iVar3 = (int)((uint64_t)((int64_t)iVar3 * -0x6755) >> 0x10) + iVar3;
    param_1[2] = iVar6 + iVar3;
    iVar2 = (iVar2 + iVar3 >> 9) + 1 >> 1;
    if (iVar2 < 0x8000) {
      uVar1 = (int16_t)iVar2;
      if (iVar2 < -0x8000) {
        uVar1 = 0x8000;
      }
    }
    else {
      uVar1 = 0x7fff;
    }
    *(int16_t *)(param_2 + lVar7 * 4) = uVar1;
    iVar2 = (int)((uint64_t)((int64_t)(iVar4 - param_1[3]) * 0x1ac6) >> 0x10);
    iVar5 = param_1[3] + iVar2;
    param_1[3] = iVar2 + iVar4;
    iVar3 = (int)((uint64_t)((int64_t)(iVar5 - param_1[4]) * 0x64a9) >> 0x10);
    iVar4 = param_1[4] + iVar3;
    iVar2 = param_1[5];
    param_1[4] = iVar5 + iVar3;
    iVar3 = iVar4 - iVar2;
    iVar3 = (int)((uint64_t)((int64_t)iVar3 * -0x270a) >> 0x10) + iVar3;
    param_1[5] = iVar4 + iVar3;
    iVar2 = (iVar2 + iVar3 >> 9) + 1 >> 1;
    if (iVar2 < 0x8000) {
      uVar1 = (int16_t)iVar2;
      if (iVar2 < -0x8000) {
        uVar1 = 0x8000;
      }
    }
    else {
      uVar1 = 0x7fff;
    }
    *(int16_t *)(param_2 + 2 + lVar7 * 4) = uVar1;
    lVar7 = lVar7 + 1;
  } while (lVar7 < param_4);
  return;
}





// 函数: void FUN_180723c9b(void)
void FUN_180723c9b(void)

{
  return;
}



void thunk_FUN_180723b20(int *param_1,int64_t param_2,int64_t param_3,int param_4)

{
  int16_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  
  if (0 < param_4) {
    lVar7 = 0;
    do {
      iVar4 = *(short *)(param_3 + lVar7 * 2) * 0x400;
      iVar2 = (int)((uint64_t)((int64_t)(iVar4 - *param_1) * 0x6d2) >> 0x10);
      iVar5 = *param_1 + iVar2;
      *param_1 = iVar2 + iVar4;
      iVar3 = (int)((uint64_t)((int64_t)(iVar5 - param_1[1]) * 0x3a8a) >> 0x10);
      iVar6 = param_1[1] + iVar3;
      iVar2 = param_1[2];
      param_1[1] = iVar5 + iVar3;
      iVar3 = iVar6 - iVar2;
      iVar3 = (int)((uint64_t)((int64_t)iVar3 * -0x6755) >> 0x10) + iVar3;
      param_1[2] = iVar6 + iVar3;
      iVar2 = (iVar2 + iVar3 >> 9) + 1 >> 1;
      if (iVar2 < 0x8000) {
        uVar1 = (int16_t)iVar2;
        if (iVar2 < -0x8000) {
          uVar1 = 0x8000;
        }
      }
      else {
        uVar1 = 0x7fff;
      }
      *(int16_t *)(param_2 + lVar7 * 4) = uVar1;
      iVar2 = (int)((uint64_t)((int64_t)(iVar4 - param_1[3]) * 0x1ac6) >> 0x10);
      iVar5 = param_1[3] + iVar2;
      param_1[3] = iVar2 + iVar4;
      iVar3 = (int)((uint64_t)((int64_t)(iVar5 - param_1[4]) * 0x64a9) >> 0x10);
      iVar4 = param_1[4] + iVar3;
      iVar2 = param_1[5];
      param_1[4] = iVar5 + iVar3;
      iVar3 = iVar4 - iVar2;
      iVar3 = (int)((uint64_t)((int64_t)iVar3 * -0x270a) >> 0x10) + iVar3;
      param_1[5] = iVar4 + iVar3;
      iVar2 = (iVar2 + iVar3 >> 9) + 1 >> 1;
      if (iVar2 < 0x8000) {
        uVar1 = (int16_t)iVar2;
        if (iVar2 < -0x8000) {
          uVar1 = 0x8000;
        }
      }
      else {
        uVar1 = 0x7fff;
      }
      *(int16_t *)(param_2 + 2 + lVar7 * 4) = uVar1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_4);
  }
  return;
}



int FUN_180723d20(int *param_1,uint64_t param_2,uint64_t param_3,int *param_4,int32_t param_5
                 ,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint64_t uVar8;
  short sVar9;
  int64_t lVar10;
  int aiStackX_8 [2];
  int aiStackX_20 [2];
  uint uStack_38;
  uint auStack_34 [3];
  
  FUN_18072aa30(aiStackX_8,auStack_34,param_2,param_5);
  FUN_18072aa30(aiStackX_20,&uStack_38,param_3,param_5);
  uVar3 = uStack_38;
  if ((int)uStack_38 < (int)auStack_34[0]) {
    uVar3 = auStack_34[0];
  }
  iVar7 = uVar3 + (uVar3 & 1);
  aiStackX_20[0] = aiStackX_20[0] >> ((char)iVar7 - (char)uStack_38 & 0x1fU);
  iVar5 = aiStackX_8[0] >> ((char)iVar7 - (char)auStack_34[0] & 0x1fU);
  aiStackX_8[0] = 1;
  if (1 < iVar5) {
    aiStackX_8[0] = iVar5;
  }
  iVar1 = FUN_18072ab70(param_2,param_3,iVar7,param_5);
  iVar2 = FUN_18071b660(iVar1,aiStackX_8[0],0xd);
  iVar5 = 0x4000;
  if ((iVar2 < 0x4001) && (iVar5 = iVar2, iVar2 < -0x4000)) {
    iVar5 = -0x4000;
  }
  lVar10 = (int64_t)iVar5 * (int64_t)(short)iVar5;
  sVar9 = (short)((uint64_t)lVar10 >> 0x10);
  uVar3 = (uint)((uint64_t)lVar10 >> 0x10);
  uVar6 = (int)uVar3 >> 0x1f;
  uVar8 = (uint64_t)((uVar3 ^ uVar6) - uVar6);
  iVar2 = func_0x000180723cb0(aiStackX_8[0]);
  bVar4 = (byte)(iVar7 >> 1);
  if ((int)uVar8 < param_6) {
    uVar8 = (uint64_t)(ushort)param_6;
  }
  lVar10 = (int64_t)(short)uVar8;
  *param_4 = *param_4 + (int)((uint64_t)(((iVar2 << (bVar4 & 0x1f)) - *param_4) * lVar10) >> 0x10);
  aiStackX_20[0] =
       aiStackX_20[0] +
       (int)((uint64_t)((int64_t)sVar9 * (int64_t)aiStackX_8[0]) >> 0x10) * 0x40 +
       (int)((uint64_t)((int64_t)iVar1 * (int64_t)(short)iVar5) >> 0x10) * -0x10;
  iVar7 = func_0x000180723cb0();
  iVar1 = param_4[1] + (int)((uint64_t)(((iVar7 << (bVar4 & 0x1f)) - param_4[1]) * lVar10) >> 0x10)
  ;
  param_4[1] = iVar1;
  iVar7 = 1;
  if (1 < *param_4) {
    iVar7 = *param_4;
  }
  iVar7 = FUN_18071b660(iVar1,iVar7,0xe);
  if (iVar7 < 0x8000) {
    iVar1 = 0;
    if (-1 < iVar7) {
      iVar1 = iVar7;
    }
    *param_1 = iVar1;
  }
  else {
    *param_1 = 0x7fff;
  }
  return iVar5;
}





// 函数: void FUN_180723ee0(int *param_1,char *param_2)
void FUN_180723ee0(int *param_1,char *param_2)

{
  short sVar1;
  short sVar2;
  int64_t lVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  cVar6 = *param_2;
  iVar11 = 0;
  iVar9 = 0x7fffffff;
  iVar12 = 0x7fffffff;
  iVar8 = 0;
  do {
    iVar7 = 0;
    sVar1 = *(short *)(&processed_var_9616_ptr + (int64_t)iVar8 * 2);
    sVar2 = *(short *)(&processed_var_9618_ptr + (int64_t)iVar8 * 2);
    iVar4 = iVar12;
    iVar10 = iVar11;
    do {
      iVar11 = (int)(short)((short)iVar7 * 2 + 1) *
               (int)(short)((uint64_t)(uint)((int)sVar2 - (int)sVar1) * 0x199a >> 0x10) +
               (int)sVar1;
      iVar12 = *param_1 - iVar11;
      if (*param_1 - iVar11 < 1) {
        iVar12 = iVar11 - *param_1;
      }
      if (iVar4 <= iVar12) goto LAB_180723f9b;
      param_2[1] = (char)iVar7;
      iVar7 = iVar7 + 1;
      cVar6 = (char)iVar8;
      *param_2 = cVar6;
      iVar4 = iVar12;
      iVar10 = iVar11;
    } while (iVar7 < 5);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0xf);
LAB_180723f9b:
  lVar3 = (int64_t)(int)cVar6;
  cVar5 = (char)((uint64_t)(lVar3 * 0x55555556) >> 0x20) +
          (char)((lVar3 / 3 + (lVar3 >> 0x3f) & 0xffffffffU) >> 0x1f);
  param_2[2] = cVar5;
  *param_2 = cVar6 + cVar5 * -3;
  iVar12 = 0;
  *param_1 = iVar10;
  do {
    iVar4 = 0;
    sVar1 = *(short *)(&processed_var_9616_ptr + (int64_t)iVar12 * 2);
    sVar2 = *(short *)(&processed_var_9618_ptr + (int64_t)iVar12 * 2);
    iVar8 = iVar10;
    iVar11 = iVar9;
    do {
      iVar10 = (int)(short)((short)iVar4 * 2 + 1) *
               (int)(short)((uint64_t)(uint)((int)sVar2 - (int)sVar1) * 0x199a >> 0x10) +
               (int)sVar1;
      iVar9 = param_1[1] - iVar10;
      if (param_1[1] - iVar10 < 1) {
        iVar9 = iVar10 - param_1[1];
      }
      if (iVar11 <= iVar9) goto LAB_18072403c;
      param_2[4] = (char)iVar4;
      iVar4 = iVar4 + 1;
      param_2[3] = (char)iVar12;
      iVar8 = iVar10;
      iVar11 = iVar9;
    } while (iVar4 < 5);
    iVar12 = iVar12 + 1;
  } while (iVar12 < 0xf);
LAB_18072403c:
  lVar3 = (int64_t)(int)param_2[3];
  cVar6 = (char)((uint64_t)(lVar3 * 0x55555556) >> 0x20) +
          (char)((lVar3 / 3 + (lVar3 >> 0x3f) & 0xffffffffU) >> 0x1f);
  param_2[5] = cVar6;
  param_2[3] = param_2[3] + cVar6 * -3;
  param_1[1] = iVar8;
  *param_1 = *param_1 - iVar8;
  return;
}





// 函数: void FUN_180724090(uint64_t param_1,int64_t param_2,int param_3,short param_4,short param_5,
void FUN_180724090(uint64_t param_1,int64_t param_2,int param_3,short param_4,short param_5,
                  int64_t param_6)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int8_t uStack_28;
  int8_t uStack_27;
  
  uStack_27 = 0;
  lVar6 = (int64_t)(param_3 + 8) >> 4;
  if (0 < lVar6) {
    lVar5 = 0;
    do {
      uVar3 = *(uint *)(param_6 + lVar5 * 4);
      if (0 < (int)uVar3) {
        uVar3 = uVar3 & 0x1f;
        uVar1 = 6;
        if (uVar3 < 6) {
          uVar1 = uVar3;
        }
        lVar4 = 0;
        uStack_28 = (&processed_var_4048_ptr)
                    [(uint64_t)uVar1 + (int64_t)((short)(param_4 * 2 + param_5) * 7)];
        do {
          if (0 < *(short *)(param_2 + lVar4 * 2)) {
            sVar2 = FUN_18070f3e0(param_1,&uStack_28,8);
            *(short *)(param_2 + lVar4 * 2) = *(short *)(param_2 + lVar4 * 2) * (sVar2 * 2 + -1);
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < 0x10);
      }
      param_2 = param_2 + 0x20;
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar6);
  }
  return;
}





// 函数: void FUN_1807240d8(void)
void FUN_1807240d8(void)

{
  short sVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  int64_t in_stack_00000078;
  
  lVar3 = 0;
  do {
    if (0 < *(int *)(in_stack_00000078 + lVar3 * 4)) {
      lVar2 = 0;
      do {
        if (0 < *(short *)(unaff_RDI + lVar2 * 2)) {
          sVar1 = FUN_18070f3e0();
          *(short *)(unaff_RDI + lVar2 * 2) = *(short *)(unaff_RDI + lVar2 * 2) * (sVar1 * 2 + -1);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < 0x10);
    }
    unaff_RDI = unaff_RDI + 0x20;
    lVar3 = lVar3 + 1;
  } while (lVar3 < unaff_R14);
  return;
}





// 函数: void FUN_180724160(void)
void FUN_180724160(void)

{
  return;
}





// 函数: void FUN_180724170(uint64_t param_1,int64_t param_2,int param_3,short param_4,short param_5,
void FUN_180724170(uint64_t param_1,int64_t param_2,int param_3,short param_4,short param_5,
                  int64_t param_6)

{
  uint uVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int8_t uStack_28;
  int8_t uStack_27;
  
  uStack_27 = 0;
  lVar5 = (int64_t)(param_3 + 8) >> 4;
  if (0 < lVar5) {
    lVar4 = 0;
    do {
      uVar2 = *(uint *)(param_6 + lVar4 * 4);
      if (0 < (int)uVar2) {
        uVar2 = uVar2 & 0x1f;
        uVar1 = 6;
        if (uVar2 < 6) {
          uVar1 = uVar2;
        }
        lVar3 = 0;
        uStack_28 = (&processed_var_4048_ptr)
                    [(uint64_t)uVar1 + (int64_t)((short)(param_4 * 2 + param_5) * 7)];
        do {
          if (*(char *)(lVar3 + param_2) != '\0') {
            FUN_1807054a0(param_1,((int)*(char *)(lVar3 + param_2) >> 7) + 1,&uStack_28,8);
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 < 0x10);
      }
      param_2 = param_2 + 0x10;
      lVar4 = lVar4 + 1;
    } while (lVar4 < lVar5);
  }
  return;
}





// 函数: void FUN_1807241b8(void)
void FUN_1807241b8(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  int64_t in_stack_00000078;
  
  lVar2 = 0;
  do {
    if (0 < *(int *)(in_stack_00000078 + lVar2 * 4)) {
      lVar1 = 0;
      do {
        if (*(char *)(lVar1 + unaff_RDI) != '\0') {
          FUN_1807054a0();
        }
        lVar1 = lVar1 + 1;
      } while (lVar1 < 0x10);
    }
    unaff_RDI = unaff_RDI + 0x10;
    lVar2 = lVar2 + 1;
  } while (lVar2 < unaff_R14);
  return;
}





// 函数: void FUN_180724237(void)
void FUN_180724237(void)

{
  return;
}





