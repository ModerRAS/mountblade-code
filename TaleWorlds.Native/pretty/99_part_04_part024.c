#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part024.c - 1 个函数

// 函数: void FUN_18026e450(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18026e450(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong lStack_30;
  longlong lStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  
  if (*(longlong *)(param_1 + 8) == *(longlong *)(param_1 + 0x10)) {
    *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 100) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x74) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x7c) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x90) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x98) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0xa8) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0xac) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    fVar13 = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x30) = fVar13;
    *(float *)(param_1 + 0x34) = fVar13;
  }
  else {
    lStack_30 = 0;
    lStack_28 = 0;
    uStack_20 = 0;
    lVar8 = 5;
    uStack_18 = 5;
    FUN_180419ec0(0,0x1e,&lStack_30,param_4,0xfffffffffffffffe);
    uVar10 = lStack_28 - lStack_30 >> 3;
    iVar11 = 2;
    pfVar5 = (float *)(param_1 + 0x3c);
    do {
      iVar9 = 0;
      iVar3 = (int)uVar10;
      uVar6 = uVar10 & 0xffffffff;
      fVar13 = (float)(iVar11 + -2);
      if (0 < iVar3) {
        do {
          iVar2 = (uint)uVar6 - iVar9;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          uVar4 = (iVar2 >> 1) + iVar9;
          bVar1 = *(float *)(lStack_30 + (longlong)(int)uVar4 * 8) < fVar13;
          uVar7 = uVar4;
          if (bVar1) {
            uVar7 = (uint)uVar6;
          }
          uVar6 = (ulonglong)uVar7;
          if (bVar1) {
            iVar9 = uVar4 + 1;
          }
        } while (iVar9 < (int)uVar7);
      }
      uVar6 = (ulonglong)iVar9;
      if (uVar6 == uVar10) {
        fVar13 = *(float *)(lStack_28 + -4);
      }
      else if (iVar9 == 0) {
        fVar13 = *(float *)(lStack_30 + 4);
      }
      else {
        fVar13 = (*(float *)(lStack_30 + 4 + uVar6 * 8) - *(float *)(lStack_30 + -4 + uVar6 * 8)) *
                 ((fVar13 - *(float *)(lStack_30 + -8 + uVar6 * 8)) /
                 (*(float *)(lStack_30 + uVar6 * 8) - *(float *)(lStack_30 + -8 + uVar6 * 8))) +
                 *(float *)(lStack_30 + -4 + uVar6 * 8);
      }
      pfVar5[-1] = fVar13 * *(float *)(param_1 + 0x28);
      iVar9 = 0;
      uVar6 = uVar10 & 0xffffffff;
      if (0 < iVar3) {
        do {
          iVar2 = (uint)uVar6 - iVar9;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          uVar4 = (iVar2 >> 1) + iVar9;
          bVar1 = *(float *)(lStack_30 + (longlong)(int)uVar4 * 8) < (float)(iVar11 + -1);
          uVar7 = uVar4;
          if (bVar1) {
            uVar7 = (uint)uVar6;
          }
          uVar6 = (ulonglong)uVar7;
          if (bVar1) {
            iVar9 = uVar4 + 1;
          }
        } while (iVar9 < (int)uVar7);
      }
      uVar6 = (ulonglong)iVar9;
      if (uVar6 == uVar10) {
        fVar13 = *(float *)(lStack_28 + -4);
      }
      else if (iVar9 == 0) {
        fVar13 = *(float *)(lStack_30 + 4);
      }
      else {
        fVar13 = (*(float *)(lStack_30 + 4 + uVar6 * 8) - *(float *)(lStack_30 + -4 + uVar6 * 8)) *
                 (((float)(iVar11 + -1) - *(float *)(lStack_30 + -8 + uVar6 * 8)) /
                 (*(float *)(lStack_30 + uVar6 * 8) - *(float *)(lStack_30 + -8 + uVar6 * 8))) +
                 *(float *)(lStack_30 + -4 + uVar6 * 8);
      }
      *pfVar5 = fVar13 * *(float *)(param_1 + 0x28);
      iVar9 = 0;
      uVar6 = uVar10 & 0xffffffff;
      if (0 < iVar3) {
        do {
          iVar2 = (uint)uVar6 - iVar9;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          uVar4 = (iVar2 >> 1) + iVar9;
          bVar1 = *(float *)(lStack_30 + (longlong)(int)uVar4 * 8) < (float)iVar11;
          uVar7 = uVar4;
          if (bVar1) {
            uVar7 = (uint)uVar6;
          }
          uVar6 = (ulonglong)uVar7;
          if (bVar1) {
            iVar9 = uVar4 + 1;
          }
        } while (iVar9 < (int)uVar7);
      }
      uVar6 = (ulonglong)iVar9;
      if (uVar6 == uVar10) {
        fVar13 = *(float *)(lStack_28 + -4);
      }
      else if (iVar9 == 0) {
        fVar13 = *(float *)(lStack_30 + 4);
      }
      else {
        fVar13 = (*(float *)(lStack_30 + 4 + uVar6 * 8) - *(float *)(lStack_30 + -4 + uVar6 * 8)) *
                 (((float)iVar11 - *(float *)(lStack_30 + -8 + uVar6 * 8)) /
                 (*(float *)(lStack_30 + uVar6 * 8) - *(float *)(lStack_30 + -8 + uVar6 * 8))) +
                 *(float *)(lStack_30 + -4 + uVar6 * 8);
      }
      pfVar5[1] = fVar13 * *(float *)(param_1 + 0x28);
      iVar9 = 0;
      uVar6 = uVar10 & 0xffffffff;
      if (0 < iVar3) {
        do {
          iVar2 = (uint)uVar6 - iVar9;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          uVar4 = (iVar2 >> 1) + iVar9;
          bVar1 = *(float *)(lStack_30 + (longlong)(int)uVar4 * 8) < (float)(iVar11 + 1);
          uVar7 = uVar4;
          if (bVar1) {
            uVar7 = (uint)uVar6;
          }
          uVar6 = (ulonglong)uVar7;
          if (bVar1) {
            iVar9 = uVar4 + 1;
          }
        } while (iVar9 < (int)uVar7);
      }
      uVar6 = (ulonglong)iVar9;
      if (uVar6 == uVar10) {
        fVar13 = *(float *)(lStack_28 + -4);
      }
      else if (iVar9 == 0) {
        fVar13 = *(float *)(lStack_30 + 4);
      }
      else {
        fVar13 = (*(float *)(lStack_30 + 4 + uVar6 * 8) - *(float *)(lStack_30 + -4 + uVar6 * 8)) *
                 (((float)(iVar11 + 1) - *(float *)(lStack_30 + -8 + uVar6 * 8)) /
                 (*(float *)(lStack_30 + uVar6 * 8) - *(float *)(lStack_30 + -8 + uVar6 * 8))) +
                 *(float *)(lStack_30 + -4 + uVar6 * 8);
      }
      pfVar5[2] = fVar13 * *(float *)(param_1 + 0x28);
      iVar9 = 0;
      uVar6 = uVar10 & 0xffffffff;
      if (0 < iVar3) {
        do {
          iVar2 = (uint)uVar6 - iVar9;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          uVar4 = (iVar2 >> 1) + iVar9;
          bVar1 = *(float *)(lStack_30 + (longlong)(int)uVar4 * 8) < (float)(iVar11 + 2);
          uVar7 = uVar4;
          if (bVar1) {
            uVar7 = (uint)uVar6;
          }
          uVar6 = (ulonglong)uVar7;
          if (bVar1) {
            iVar9 = uVar4 + 1;
          }
        } while (iVar9 < (int)uVar7);
      }
      uVar6 = (ulonglong)iVar9;
      if (uVar6 == uVar10) {
        fVar13 = *(float *)(lStack_28 + -4);
      }
      else if (iVar9 == 0) {
        fVar13 = *(float *)(lStack_30 + 4);
      }
      else {
        fVar13 = (*(float *)(lStack_30 + 4 + uVar6 * 8) - *(float *)(lStack_30 + -4 + uVar6 * 8)) *
                 (((float)(iVar11 + 2) - *(float *)(lStack_30 + -8 + uVar6 * 8)) /
                 (*(float *)(lStack_30 + uVar6 * 8) - *(float *)(lStack_30 + -8 + uVar6 * 8))) +
                 *(float *)(lStack_30 + -4 + uVar6 * 8);
      }
      pfVar5[3] = fVar13 * *(float *)(param_1 + 0x28);
      iVar9 = 0;
      uVar6 = uVar10 & 0xffffffff;
      if (0 < iVar3) {
        do {
          iVar3 = (uint)uVar6 - iVar9;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          uVar7 = (iVar3 >> 1) + iVar9;
          bVar1 = *(float *)(lStack_30 + (longlong)(int)uVar7 * 8) < (float)(iVar11 + 3);
          uVar4 = uVar7;
          if (bVar1) {
            uVar4 = (uint)uVar6;
          }
          uVar6 = (ulonglong)uVar4;
          if (bVar1) {
            iVar9 = uVar7 + 1;
          }
        } while (iVar9 < (int)uVar4);
      }
      uVar6 = (ulonglong)iVar9;
      if (uVar6 == uVar10) {
        fVar13 = *(float *)(lStack_28 + -4);
      }
      else if (iVar9 == 0) {
        fVar13 = *(float *)(lStack_30 + 4);
      }
      else {
        fVar13 = (*(float *)(lStack_30 + 4 + uVar6 * 8) - *(float *)(lStack_30 + -4 + uVar6 * 8)) *
                 (((float)(iVar11 + 3) - *(float *)(lStack_30 + -8 + uVar6 * 8)) /
                 (*(float *)(lStack_30 + uVar6 * 8) - *(float *)(lStack_30 + -8 + uVar6 * 8))) +
                 *(float *)(lStack_30 + -4 + uVar6 * 8);
      }
      pfVar5[4] = *(float *)(param_1 + 0x28) * fVar13;
      iVar11 = iVar11 + 6;
      pfVar5 = pfVar5 + 6;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    if (lStack_30 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lStack_30);
    }
  }
  fVar13 = 3.4028235e+38;
  fVar14 = -3.4028235e+38;
  lVar8 = 2;
  *(int32_t *)(param_1 + 0x34) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x30) = 0xff7fffff;
  pfVar5 = (float *)(param_1 + 0x3c);
  do {
    fVar12 = pfVar5[-1];
    if (fVar13 <= pfVar5[-1]) {
      fVar12 = fVar13;
    }
    *(float *)(param_1 + 0x34) = fVar12;
    fVar13 = pfVar5[-1];
    if (pfVar5[-1] <= fVar14) {
      fVar13 = fVar14;
    }
    *(float *)(param_1 + 0x30) = fVar13;
    fVar14 = *pfVar5;
    if (fVar12 <= *pfVar5) {
      fVar14 = fVar12;
    }
    *(float *)(param_1 + 0x34) = fVar14;
    fVar12 = *pfVar5;
    if (*pfVar5 <= fVar13) {
      fVar12 = fVar13;
    }
    *(float *)(param_1 + 0x30) = fVar12;
    fVar13 = pfVar5[1];
    if (fVar14 <= pfVar5[1]) {
      fVar13 = fVar14;
    }
    *(float *)(param_1 + 0x34) = fVar13;
    fVar14 = pfVar5[1];
    if (pfVar5[1] <= fVar12) {
      fVar14 = fVar12;
    }
    *(float *)(param_1 + 0x30) = fVar14;
    fVar12 = pfVar5[2];
    if (fVar13 <= pfVar5[2]) {
      fVar12 = fVar13;
    }
    *(float *)(param_1 + 0x34) = fVar12;
    fVar13 = pfVar5[2];
    if (pfVar5[2] <= fVar14) {
      fVar13 = fVar14;
    }
    *(float *)(param_1 + 0x30) = fVar13;
    fVar14 = pfVar5[3];
    if (fVar12 <= pfVar5[3]) {
      fVar14 = fVar12;
    }
    *(float *)(param_1 + 0x34) = fVar14;
    fVar12 = pfVar5[3];
    if (pfVar5[3] <= fVar13) {
      fVar12 = fVar13;
    }
    *(float *)(param_1 + 0x30) = fVar12;
    fVar13 = pfVar5[4];
    if (fVar14 <= pfVar5[4]) {
      fVar13 = fVar14;
    }
    *(float *)(param_1 + 0x34) = fVar13;
    fVar14 = pfVar5[4];
    if (pfVar5[4] <= fVar12) {
      fVar14 = fVar12;
    }
    *(float *)(param_1 + 0x30) = fVar14;
    fVar12 = pfVar5[5];
    if (fVar13 <= pfVar5[5]) {
      fVar12 = fVar13;
    }
    *(float *)(param_1 + 0x34) = fVar12;
    fVar13 = pfVar5[5];
    if (pfVar5[5] <= fVar14) {
      fVar13 = fVar14;
    }
    *(float *)(param_1 + 0x30) = fVar13;
    fVar14 = pfVar5[6];
    if (fVar12 <= pfVar5[6]) {
      fVar14 = fVar12;
    }
    *(float *)(param_1 + 0x34) = fVar14;
    fVar12 = pfVar5[6];
    if (pfVar5[6] <= fVar13) {
      fVar12 = fVar13;
    }
    *(float *)(param_1 + 0x30) = fVar12;
    fVar13 = pfVar5[7];
    if (fVar14 <= pfVar5[7]) {
      fVar13 = fVar14;
    }
    *(float *)(param_1 + 0x34) = fVar13;
    fVar14 = pfVar5[7];
    if (pfVar5[7] <= fVar12) {
      fVar14 = fVar12;
    }
    *(float *)(param_1 + 0x30) = fVar14;
    fVar12 = pfVar5[8];
    if (fVar13 <= pfVar5[8]) {
      fVar12 = fVar13;
    }
    *(float *)(param_1 + 0x34) = fVar12;
    fVar13 = pfVar5[8];
    if (pfVar5[8] <= fVar14) {
      fVar13 = fVar14;
    }
    *(float *)(param_1 + 0x30) = fVar13;
    fVar14 = pfVar5[9];
    if (fVar12 <= pfVar5[9]) {
      fVar14 = fVar12;
    }
    *(float *)(param_1 + 0x34) = fVar14;
    fVar12 = pfVar5[9];
    if (pfVar5[9] <= fVar13) {
      fVar12 = fVar13;
    }
    *(float *)(param_1 + 0x30) = fVar12;
    fVar13 = pfVar5[10];
    if (fVar14 <= pfVar5[10]) {
      fVar13 = fVar14;
    }
    *(float *)(param_1 + 0x34) = fVar13;
    fVar14 = pfVar5[10];
    if (pfVar5[10] <= fVar12) {
      fVar14 = fVar12;
    }
    *(float *)(param_1 + 0x30) = fVar14;
    fVar12 = pfVar5[0xb];
    if (fVar13 <= pfVar5[0xb]) {
      fVar12 = fVar13;
    }
    *(float *)(param_1 + 0x34) = fVar12;
    fVar13 = pfVar5[0xb];
    if (pfVar5[0xb] <= fVar14) {
      fVar13 = fVar14;
    }
    *(float *)(param_1 + 0x30) = fVar13;
    fVar14 = pfVar5[0xc];
    if (fVar12 <= pfVar5[0xc]) {
      fVar14 = fVar12;
    }
    *(float *)(param_1 + 0x34) = fVar14;
    fVar12 = pfVar5[0xc];
    if (pfVar5[0xc] <= fVar13) {
      fVar12 = fVar13;
    }
    *(float *)(param_1 + 0x30) = fVar12;
    fVar13 = pfVar5[0xd];
    if (fVar14 <= pfVar5[0xd]) {
      fVar13 = fVar14;
    }
    *(float *)(param_1 + 0x34) = fVar13;
    fVar14 = pfVar5[0xd];
    if (pfVar5[0xd] <= fVar12) {
      fVar14 = fVar12;
    }
    *(float *)(param_1 + 0x30) = fVar14;
    lVar8 = lVar8 + -1;
    pfVar5 = pfVar5 + 0xf;
  } while (lVar8 != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18026ead0(uint64_t *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint uVar2;
  uint64_t uVar3;
  longlong lVar4;
  uint64_t *puVar5;
  longlong lVar6;
  
  *param_1 = &unknown_var_7440_ptr;
  lVar6 = *(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8) >> 5;
  uVar2 = *(uint *)(param_2 + 0x20);
  *(uint *)(param_1 + 4) = uVar2;
  if (lVar6 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_18062b420(system_memory_pool_ptr,lVar6 << 5,uVar2 & 0xff,param_4,0xfffffffffffffffe);
  }
  param_1[1] = lVar4;
  param_1[2] = lVar4;
  param_1[3] = lVar6 * 0x20 + lVar4;
  puVar5 = (uint64_t *)param_1[1];
  lVar6 = *(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8) >> 5;
  if (0 < lVar6) {
    lVar4 = *(longlong *)(param_2 + 8) - (longlong)puVar5;
    do {
      puVar1 = (uint64_t *)(lVar4 + (longlong)puVar5);
      uVar3 = puVar1[1];
      *puVar5 = *puVar1;
      puVar5[1] = uVar3;
      puVar1 = (uint64_t *)(lVar4 + 0x10 + (longlong)puVar5);
      uVar3 = puVar1[1];
      puVar5[2] = *puVar1;
      puVar5[3] = uVar3;
      lVar6 = lVar6 + -1;
      puVar5 = puVar5 + 4;
    } while (0 < lVar6);
  }
  param_1[2] = puVar5;
  return param_1;
}



uint64_t *
FUN_18026eba0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_7440_ptr;
  FUN_1802708b0(param_1 + 1);
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if ((param_2 & 1) != 0) {
    free(param_1,0x30,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00018026e6e6)
// WARNING: Removing unreachable block (ram,0x00018026e6ee)
// WARNING: Removing unreachable block (ram,0x00018026e6f0)
// WARNING: Removing unreachable block (ram,0x00018026e703)
// WARNING: Removing unreachable block (ram,0x00018026e707)
// WARNING: Removing unreachable block (ram,0x00018026e70d)
// WARNING: Removing unreachable block (ram,0x00018026e711)
// WARNING: Removing unreachable block (ram,0x00018026e9f7)
// WARNING: Removing unreachable block (ram,0x00018026ea02)
// WARNING: Removing unreachable block (ram,0x00018026ea0a)
// WARNING: Removing unreachable block (ram,0x00018026ea0c)
// WARNING: Removing unreachable block (ram,0x00018026ea1f)
// WARNING: Removing unreachable block (ram,0x00018026ea23)
// WARNING: Removing unreachable block (ram,0x00018026ea29)
// WARNING: Removing unreachable block (ram,0x00018026ea2d)
// WARNING: Removing unreachable block (ram,0x00018026e8b3)
// WARNING: Removing unreachable block (ram,0x00018026e8c0)
// WARNING: Removing unreachable block (ram,0x00018026e8c8)
// WARNING: Removing unreachable block (ram,0x00018026e8ca)
// WARNING: Removing unreachable block (ram,0x00018026e8dd)
// WARNING: Removing unreachable block (ram,0x00018026e8e1)
// WARNING: Removing unreachable block (ram,0x00018026e8e7)
// WARNING: Removing unreachable block (ram,0x00018026e8eb)
// WARNING: Removing unreachable block (ram,0x00018026e771)
// WARNING: Removing unreachable block (ram,0x00018026e780)
// WARNING: Removing unreachable block (ram,0x00018026e788)
// WARNING: Removing unreachable block (ram,0x00018026e78a)
// WARNING: Removing unreachable block (ram,0x00018026e79d)
// WARNING: Removing unreachable block (ram,0x00018026e7a1)
// WARNING: Removing unreachable block (ram,0x00018026e7a7)
// WARNING: Removing unreachable block (ram,0x00018026e7ab)
// WARNING: Removing unreachable block (ram,0x00018026e815)
// WARNING: Removing unreachable block (ram,0x00018026e820)
// WARNING: Removing unreachable block (ram,0x00018026e828)
// WARNING: Removing unreachable block (ram,0x00018026e82a)
// WARNING: Removing unreachable block (ram,0x00018026e83d)
// WARNING: Removing unreachable block (ram,0x00018026e841)
// WARNING: Removing unreachable block (ram,0x00018026e847)
// WARNING: Removing unreachable block (ram,0x00018026e84b)
// WARNING: Removing unreachable block (ram,0x00018026e956)
// WARNING: Removing unreachable block (ram,0x00018026e961)
// WARNING: Removing unreachable block (ram,0x00018026e969)
// WARNING: Removing unreachable block (ram,0x00018026e96b)
// WARNING: Removing unreachable block (ram,0x00018026e97e)
// WARNING: Removing unreachable block (ram,0x00018026e982)
// WARNING: Removing unreachable block (ram,0x00018026e988)
// WARNING: Removing unreachable block (ram,0x00018026e98c)
// WARNING: Removing unreachable block (ram,0x00018026eaa8)
// WARNING: Removing unreachable block (ram,0x00018026e9a0)
// WARNING: Removing unreachable block (ram,0x00018026e9ac)
// WARNING: Removing unreachable block (ram,0x00018026e9a5)
// WARNING: Removing unreachable block (ram,0x00018026e85f)
// WARNING: Removing unreachable block (ram,0x00018026e86b)
// WARNING: Removing unreachable block (ram,0x00018026e864)
// WARNING: Removing unreachable block (ram,0x00018026e731)
// WARNING: Removing unreachable block (ram,0x00018026e725)
// WARNING: Removing unreachable block (ram,0x00018026e72a)
// WARNING: Removing unreachable block (ram,0x00018026e7bf)
// WARNING: Removing unreachable block (ram,0x00018026e7cb)
// WARNING: Removing unreachable block (ram,0x00018026e7c4)
// WARNING: Removing unreachable block (ram,0x00018026e8ff)
// WARNING: Removing unreachable block (ram,0x00018026e90b)
// WARNING: Removing unreachable block (ram,0x00018026e904)
// WARNING: Removing unreachable block (ram,0x00018026ea41)
// WARNING: Removing unreachable block (ram,0x00018026ea4d)
// WARNING: Removing unreachable block (ram,0x00018026ea46)




