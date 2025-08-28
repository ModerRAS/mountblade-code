#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part098.c - 8 个函数

// 函数: void FUN_180725950(float *param_1,float param_2,float param_3,uint param_4)
void FUN_180725950(float *param_1,float param_2,float param_3,uint param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  iVar3 = 0;
  lVar11 = (longlong)(int)param_4;
  uVar13 = param_4 - 1;
  lVar8 = (longlong)(int)uVar13;
  if (3 < lVar8) {
    lVar12 = (lVar8 - 4U >> 2) + 1;
    pfVar4 = param_1 + lVar8 + -2;
    lVar8 = lVar8 + lVar12 * -4;
    do {
      fVar14 = pfVar4[1] - param_2 * pfVar4[2];
      pfVar4[1] = fVar14;
      fVar14 = *pfVar4 - fVar14 * param_2;
      *pfVar4 = fVar14;
      fVar14 = pfVar4[-1] - fVar14 * param_2;
      pfVar4[-1] = fVar14;
      pfVar4[-2] = pfVar4[-2] - fVar14 * param_2;
      pfVar4 = pfVar4 + -4;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (0 < lVar8) {
    pfVar4 = param_1 + lVar8 + -1;
    do {
      lVar8 = lVar8 + -1;
      *pfVar4 = *pfVar4 - param_2 * pfVar4[1];
      pfVar4 = pfVar4 + -1;
    } while (0 < lVar8);
  }
  iVar6 = 0;
  fVar17 = 1.0 - param_2 * param_2;
  fVar14 = fVar17 / (param_2 * *param_1 + 1.0);
  if ((0 < (int)param_4) && (0xf < param_4)) {
    uVar5 = param_4 & 0x8000000f;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
    }
    lVar8 = 0;
    pfVar4 = param_1 + 8;
    do {
      iVar6 = iVar6 + 0x10;
      lVar8 = lVar8 + 0x10;
      pfVar4[-8] = pfVar4[-8] * fVar14;
      pfVar4[-7] = pfVar4[-7] * fVar14;
      pfVar4[-6] = pfVar4[-6] * fVar14;
      pfVar4[-5] = pfVar4[-5] * fVar14;
      pfVar4[-4] = fVar14 * pfVar4[-4];
      pfVar4[-3] = fVar14 * pfVar4[-3];
      pfVar4[-2] = fVar14 * pfVar4[-2];
      pfVar4[-1] = fVar14 * pfVar4[-1];
      *pfVar4 = *pfVar4 * fVar14;
      pfVar4[1] = pfVar4[1] * fVar14;
      pfVar4[2] = pfVar4[2] * fVar14;
      pfVar4[3] = pfVar4[3] * fVar14;
      pfVar4[4] = pfVar4[4] * fVar14;
      pfVar4[5] = pfVar4[5] * fVar14;
      pfVar4[6] = pfVar4[6] * fVar14;
      pfVar4[7] = pfVar4[7] * fVar14;
      pfVar4 = pfVar4 + 0x10;
    } while (lVar8 < (int)(param_4 - uVar5));
  }
  lVar8 = (longlong)iVar6;
  if (lVar8 < lVar11) {
    if (3 < lVar11 - lVar8) {
      lVar12 = lVar8 + 2;
      lVar9 = ((lVar11 - lVar8) - 4U >> 2) + 1;
      lVar8 = lVar8 + lVar9 * 4;
      pfVar4 = param_1 + lVar12;
      do {
        pfVar4[-2] = pfVar4[-2] * fVar14;
        pfVar4[-1] = pfVar4[-1] * fVar14;
        *pfVar4 = *pfVar4 * fVar14;
        pfVar4[1] = pfVar4[1] * fVar14;
        lVar9 = lVar9 + -1;
        pfVar4 = pfVar4 + 4;
      } while (lVar9 != 0);
    }
    for (; lVar8 < lVar11; lVar8 = lVar8 + 1) {
      param_1[lVar8] = fVar14 * param_1[lVar8];
    }
  }
  iVar6 = 0;
  do {
    iVar7 = 0;
    lVar8 = 0;
    fVar16 = -1.0;
    if (3 < (int)param_4) {
      pfVar4 = param_1 + 2;
      do {
        fVar15 = ABS(pfVar4[-2]);
        iVar10 = iVar7;
        if (ABS(pfVar4[-2]) <= fVar16) {
          fVar15 = fVar16;
          iVar10 = iVar3;
        }
        iVar3 = iVar7 + 1;
        fVar16 = ABS(pfVar4[-1]);
        if (ABS(pfVar4[-1]) <= fVar15) {
          iVar3 = iVar10;
          fVar16 = fVar15;
        }
        iVar10 = iVar7 + 2;
        fVar15 = ABS(*pfVar4);
        if (ABS(*pfVar4) <= fVar16) {
          iVar10 = iVar3;
          fVar15 = fVar16;
        }
        iVar3 = iVar7 + 3;
        fVar16 = ABS(pfVar4[1]);
        if (ABS(pfVar4[1]) <= fVar15) {
          iVar3 = iVar10;
          fVar16 = fVar15;
        }
        lVar8 = lVar8 + 4;
        iVar7 = iVar7 + 4;
        pfVar4 = pfVar4 + 4;
      } while (iVar7 < (int)(param_4 - 3));
    }
    if (iVar7 < (int)param_4) {
      pfVar4 = param_1 + lVar8;
      iVar10 = iVar3;
      do {
        fVar15 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        iVar3 = iVar7;
        fVar2 = ABS(fVar15);
        if (ABS(fVar15) <= fVar16) {
          iVar3 = iVar10;
          fVar2 = fVar16;
        }
        fVar16 = fVar2;
        iVar7 = iVar7 + 1;
        iVar10 = iVar3;
      } while (iVar7 < (int)param_4);
    }
    if (fVar16 <= param_3) {
      return;
    }
    lVar8 = 1;
    if ((1 < (int)param_4) && (0xf < uVar13)) {
      uVar5 = uVar13 & 0x8000000f;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
      }
      pfVar4 = param_1;
      do {
        lVar8 = lVar8 + 0x10;
        *pfVar4 = pfVar4[1] * param_2 + *pfVar4;
        pfVar4[1] = pfVar4[2] * param_2 + pfVar4[1];
        pfVar4[2] = pfVar4[3] * param_2 + pfVar4[2];
        pfVar4[3] = pfVar4[4] * param_2 + pfVar4[3];
        pfVar4[4] = pfVar4[5] * param_2 + pfVar4[4];
        pfVar4[5] = pfVar4[6] * param_2 + pfVar4[5];
        pfVar4[6] = pfVar4[7] * param_2 + pfVar4[6];
        pfVar4[7] = pfVar4[8] * param_2 + pfVar4[7];
        pfVar4[8] = pfVar4[9] * param_2 + pfVar4[8];
        pfVar4[9] = pfVar4[10] * param_2 + pfVar4[9];
        pfVar4[10] = pfVar4[0xb] * param_2 + pfVar4[10];
        pfVar4[0xb] = pfVar4[0xc] * param_2 + pfVar4[0xb];
        pfVar4[0xc] = pfVar4[0xd] * param_2 + pfVar4[0xc];
        pfVar4[0xd] = pfVar4[0xe] * param_2 + pfVar4[0xd];
        pfVar4[0xe] = pfVar4[0xf] * param_2 + pfVar4[0xe];
        pfVar4[0xf] = pfVar4[0x10] * param_2 + pfVar4[0xf];
        pfVar4 = pfVar4 + 0x10;
      } while (lVar8 < (int)(param_4 - uVar5));
    }
    if (lVar8 < lVar11) {
      if (3 < lVar11 - lVar8) {
        pfVar4 = param_1 + lVar8 + 1;
        lVar12 = ((lVar11 - lVar8) - 4U >> 2) + 1;
        lVar8 = lVar8 + lVar12 * 4;
        do {
          pfVar4[-2] = pfVar4[-1] * param_2 + pfVar4[-2];
          pfVar4[-1] = *pfVar4 * param_2 + pfVar4[-1];
          *pfVar4 = pfVar4[1] * param_2 + *pfVar4;
          pfVar4[1] = param_2 * pfVar4[2] + pfVar4[1];
          pfVar4 = pfVar4 + 4;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      if (lVar8 < lVar11) {
        pfVar4 = param_1 + lVar8 + -1;
        lVar12 = lVar11 - lVar8;
        fVar15 = param_1[lVar8 + -1];
        do {
          pfVar1 = pfVar4 + 1;
          *pfVar4 = *pfVar1 * param_2 + fVar15;
          pfVar4 = pfVar4 + 1;
          lVar12 = lVar12 + -1;
          fVar15 = *pfVar1;
        } while (lVar12 != 0);
      }
    }
    lVar8 = 0;
    fVar14 = 1.0 / fVar14;
    if ((0 < (int)param_4) && (0xf < param_4)) {
      uVar5 = param_4 & 0x8000000f;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
      }
      pfVar4 = param_1 + 8;
      do {
        lVar8 = lVar8 + 0x10;
        pfVar4[-8] = fVar14 * pfVar4[-8];
        pfVar4[-7] = fVar14 * pfVar4[-7];
        pfVar4[-6] = fVar14 * pfVar4[-6];
        pfVar4[-5] = fVar14 * pfVar4[-5];
        pfVar4[-4] = pfVar4[-4] * fVar14;
        pfVar4[-3] = pfVar4[-3] * fVar14;
        pfVar4[-2] = pfVar4[-2] * fVar14;
        pfVar4[-1] = pfVar4[-1] * fVar14;
        *pfVar4 = fVar14 * *pfVar4;
        pfVar4[1] = fVar14 * pfVar4[1];
        pfVar4[2] = fVar14 * pfVar4[2];
        pfVar4[3] = fVar14 * pfVar4[3];
        pfVar4[4] = fVar14 * pfVar4[4];
        pfVar4[5] = fVar14 * pfVar4[5];
        pfVar4[6] = fVar14 * pfVar4[6];
        pfVar4[7] = fVar14 * pfVar4[7];
        pfVar4 = pfVar4 + 0x10;
      } while (lVar8 < (int)(param_4 - uVar5));
    }
    if (lVar8 < lVar11) {
      if (3 < lVar11 - lVar8) {
        lVar12 = lVar8 + 2;
        lVar9 = ((lVar11 - lVar8) - 4U >> 2) + 1;
        lVar8 = lVar8 + lVar9 * 4;
        pfVar4 = param_1 + lVar12;
        do {
          pfVar4[-2] = pfVar4[-2] * fVar14;
          pfVar4[-1] = pfVar4[-1] * fVar14;
          *pfVar4 = *pfVar4 * fVar14;
          pfVar4[1] = pfVar4[1] * fVar14;
          lVar9 = lVar9 + -1;
          pfVar4 = pfVar4 + 4;
        } while (lVar9 != 0);
      }
      for (; lVar8 < lVar11; lVar8 = lVar8 + 1) {
        param_1[lVar8] = fVar14 * param_1[lVar8];
      }
    }
    func_0x00018072ae80(param_1,param_4,
                        0.99 - (((float)iVar6 * 0.1 + 0.8) * (fVar16 - param_3)) /
                               ((float)(iVar3 + 1) * fVar16));
    lVar8 = lVar11 + -1;
    if (3 < lVar8) {
      lVar12 = (lVar11 - 5U >> 2) + 1;
      pfVar4 = param_1 + lVar11 + -3;
      lVar8 = lVar8 + lVar12 * -4;
      do {
        fVar14 = pfVar4[1] - param_2 * pfVar4[2];
        pfVar4[1] = fVar14;
        fVar14 = *pfVar4 - fVar14 * param_2;
        *pfVar4 = fVar14;
        fVar14 = pfVar4[-1] - fVar14 * param_2;
        pfVar4[-1] = fVar14;
        pfVar4[-2] = pfVar4[-2] - fVar14 * param_2;
        pfVar4 = pfVar4 + -4;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    if (0 < lVar8) {
      pfVar4 = param_1 + lVar8 + -1;
      do {
        lVar8 = lVar8 + -1;
        *pfVar4 = *pfVar4 - param_2 * pfVar4[1];
        pfVar4 = pfVar4 + -1;
      } while (0 < lVar8);
    }
    lVar8 = 0;
    fVar14 = fVar17 / (param_2 * *param_1 + 1.0);
    if ((0 < (int)param_4) && (0xf < param_4)) {
      uVar5 = param_4 & 0x8000000f;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
      }
      pfVar4 = param_1 + 8;
      do {
        lVar8 = lVar8 + 0x10;
        pfVar4[-8] = fVar14 * pfVar4[-8];
        pfVar4[-7] = fVar14 * pfVar4[-7];
        pfVar4[-6] = fVar14 * pfVar4[-6];
        pfVar4[-5] = fVar14 * pfVar4[-5];
        pfVar4[-4] = pfVar4[-4] * fVar14;
        pfVar4[-3] = pfVar4[-3] * fVar14;
        pfVar4[-2] = pfVar4[-2] * fVar14;
        pfVar4[-1] = pfVar4[-1] * fVar14;
        *pfVar4 = fVar14 * *pfVar4;
        pfVar4[1] = fVar14 * pfVar4[1];
        pfVar4[2] = fVar14 * pfVar4[2];
        pfVar4[3] = fVar14 * pfVar4[3];
        pfVar4[4] = pfVar4[4] * fVar14;
        pfVar4[5] = pfVar4[5] * fVar14;
        pfVar4[6] = pfVar4[6] * fVar14;
        pfVar4[7] = pfVar4[7] * fVar14;
        pfVar4 = pfVar4 + 0x10;
      } while (lVar8 < (int)(param_4 - uVar5));
    }
    if (lVar8 < lVar11) {
      if (3 < lVar11 - lVar8) {
        lVar12 = lVar8 + 2;
        lVar9 = ((lVar11 - lVar8) - 4U >> 2) + 1;
        lVar8 = lVar8 + lVar9 * 4;
        pfVar4 = param_1 + lVar12;
        do {
          pfVar4[-2] = pfVar4[-2] * fVar14;
          pfVar4[-1] = pfVar4[-1] * fVar14;
          *pfVar4 = *pfVar4 * fVar14;
          pfVar4[1] = pfVar4[1] * fVar14;
          lVar9 = lVar9 + -1;
          pfVar4 = pfVar4 + 4;
        } while (lVar9 != 0);
      }
      for (; lVar8 < lVar11; lVar8 = lVar8 + 1) {
        param_1[lVar8] = fVar14 * param_1[lVar8];
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807260d0(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_1807260d0(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  int8_t auStack_778 [304];
  int8_t auStack_648 [1536];
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_778;
  lVar1 = param_4 + (longlong)*(int *)(param_1 + 0x11ec) * -4 +
          ((longlong)
           (*(int *)(param_1 + 0x11e4) + *(int *)(param_1 + 0x11ec) + *(int *)(param_1 + 0x11f0)) -
          (longlong)*(int *)(param_1 + 0x11c0)) * 4;
  FUN_18072b830(auStack_648,lVar1,1);
  lVar2 = (longlong)*(int *)(param_1 + 0x11f0) * 4;
                    // WARNING: Subroutine does not return
  memcpy(auStack_648 + lVar2,lVar1 + lVar2,
         (longlong)(*(int *)(param_1 + 0x11c0) + *(int *)(param_1 + 0x11f0) * -2) << 2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807263d0(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4,
void FUN_1807263d0(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4,
                  int32_t param_5)

{
  double dVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int8_t *puVar7;
  float fVar8;
  int8_t auStack_8a8 [32];
  float *pfStack_888;
  int8_t *puStack_880;
  int8_t *puStack_878;
  int iStack_870;
  int32_t uStack_868;
  int32_t uStack_860;
  float afStack_858 [4];
  int8_t auStack_848 [80];
  int8_t auStack_7f8 [400];
  int8_t auStack_668 [1536];
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_8a8;
  uVar3 = *(uint *)(param_1 + 0x11e0);
  if (0 < (int)uVar3) {
    uVar5 = (ulonglong)uVar3;
    pfVar2 = afStack_858;
    do {
      *pfVar2 = 1.0 / *(float *)((param_2 - (longlong)afStack_858) + -4 + (longlong)(pfVar2 + 1));
      uVar5 = uVar5 - 1;
      pfVar2 = pfVar2 + 1;
    } while (uVar5 != 0);
  }
  if (*(char *)(param_1 + 0x12a5) == '\x02') {
    puStack_880 = (int8_t *)CONCAT44(puStack_880._4_4_,uVar3);
    pfStack_888 = (float *)CONCAT44(pfStack_888._4_4_,*(int32_t *)(param_1 + 0x11e8));
    FUN_18072e9a0(auStack_7f8,auStack_848,param_3,param_2 + 0xe4);
    uStack_860 = *(int32_t *)(param_1 + 0x13ec);
    uStack_868 = *(int32_t *)(param_1 + 0x11e0);
    iStack_870 = *(int32_t *)(param_1 + 0x11e8);
    puStack_878 = auStack_848;
    puStack_880 = auStack_7f8;
    pfStack_888 = (float *)(param_2 + 0x2c4);
    FUN_1807270a0(param_2 + 0x90,param_1 + 0x128c,param_1 + 0x12a8,param_1 + 0x122c);
    func_0x00018072e6b0(param_1,param_2,param_5);
    iStack_870 = *(int *)(param_1 + 0x121c);
    puStack_878 = (int8_t *)CONCAT44(puStack_878._4_4_,*(int32_t *)(param_1 + 0x11e0));
    puStack_880 = (int8_t *)CONCAT44(puStack_880._4_4_,*(int32_t *)(param_1 + 0x11e8));
    pfStack_888 = afStack_858;
    FUN_18072eb00(auStack_668,param_4 + (longlong)iStack_870 * -4,param_2 + 0x90,param_2 + 0xe4);
    if (*(int *)(param_1 + 0x1234) == 0) {
      dVar1 = (double)pow(0,SUB84((double)(*(float *)(param_2 + 0x2c4) * 0.33333334),0));
      fVar8 = ((float)dVar1 * 0.0001) / (*(float *)(param_2 + 700) * 0.75 + 0.25);
    }
    else {
      fVar8 = 0.01;
    }
    FUN_18072e720(param_1,&uStack_68,auStack_668,fVar8);
    FUN_180726fd0(param_1,param_2 + 0x10,&uStack_68,param_1 + 0x1190);
    puStack_878 = (int8_t *)CONCAT44(puStack_878._4_4_,*(int32_t *)(param_1 + 0x121c));
    puStack_880 = (int8_t *)CONCAT44(puStack_880._4_4_,*(int32_t *)(param_1 + 0x11e0));
    pfStack_888 = (float *)CONCAT44(pfStack_888._4_4_,*(int32_t *)(param_1 + 0x11e8));
    FUN_18072ec50(param_2 + 0x2c8,auStack_668,param_2 + 0x10,param_2);
    *(int32_t *)(param_1 + 0x1190) = uStack_68;
    *(int32_t *)(param_1 + 0x1194) = uStack_64;
    *(int32_t *)(param_1 + 0x1198) = uStack_60;
    *(int32_t *)(param_1 + 0x119c) = uStack_5c;
    *(int32_t *)(param_1 + 0x11a0) = uStack_58;
    *(int32_t *)(param_1 + 0x11a4) = uStack_54;
    *(int32_t *)(param_1 + 0x11a8) = uStack_50;
    *(int32_t *)(param_1 + 0x11ac) = uStack_4c;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_8a8);
  }
  puVar7 = auStack_668;
  iVar6 = 0;
  param_4 = param_4 + (longlong)*(int *)(param_1 + 0x121c) * -4;
  if (0 < (int)uVar3) {
    iVar4 = *(int *)(param_1 + 0x121c) + *(int *)(param_1 + 0x11e8);
    pfVar2 = afStack_858;
    do {
      FUN_18072e4b0(puVar7,param_4,*pfVar2,iVar4);
      pfVar2 = pfVar2 + 1;
      iVar6 = iVar6 + 1;
      iVar4 = *(int *)(param_1 + 0x121c) + *(int *)(param_1 + 0x11e8);
      param_4 = param_4 + (longlong)*(int *)(param_1 + 0x11e8) * 4;
      uVar3 = *(uint *)(param_1 + 0x11e0);
      puVar7 = puVar7 + (longlong)iVar4 * 4;
    } while (iVar6 < (int)uVar3);
  }
                    // WARNING: Subroutine does not return
  memset(param_2 + 0x90,0,(longlong)(int)(uVar3 * 5) << 2);
}





// 函数: void FUN_1807263f2(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4)
void FUN_1807263f2(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int32_t *puVar5;
  int iVar6;
  longlong unaff_RSI;
  int8_t *puVar7;
  int32_t uVar8;
  double dVar9;
  float fVar10;
  int32_t uVar11;
  int32_t in_stack_00000840;
  int32_t in_stack_00000844;
  int32_t in_stack_00000848;
  int32_t in_stack_0000084c;
  int32_t in_stack_00000850;
  int32_t in_stack_00000854;
  int32_t in_stack_00000858;
  int32_t in_stack_0000085c;
  ulonglong in_stack_00000860;
  int32_t in_stack_000008d0;
  
  uVar2 = *(uint *)(param_1 + 0x11e0);
  if (0 < (int)uVar2) {
    uVar4 = (ulonglong)uVar2;
    pfVar1 = (float *)&stack0x00000050;
    do {
      *pfVar1 = 1.0 / *(float *)((param_2 - (longlong)&stack0x00000050) + -4 +
                                (longlong)(pfVar1 + 1));
      uVar4 = uVar4 - 1;
      pfVar1 = pfVar1 + 1;
    } while (uVar4 != 0);
  }
  if (*(char *)(unaff_RSI + 0x12a5) == '\x02') {
    FUN_18072e9a0(&stack0x000000b0,&stack0x00000060,param_3,param_2 + 0xe4,
                  *(int32_t *)(unaff_RSI + 0x11e8));
    uVar8 = FUN_1807270a0(param_2 + 0x90,unaff_RSI + 0x128c,unaff_RSI + 0x12a8,unaff_RSI + 0x122c,
                          (float *)(param_2 + 0x2c4));
    func_0x00018072e6b0(uVar8,param_2,in_stack_000008d0);
    puVar7 = &stack0x00000050;
    uVar8 = FUN_18072eb00(&stack0x00000240,param_4 + (longlong)*(int *)(unaff_RSI + 0x121c) * -4,
                          param_2 + 0x90,param_2 + 0xe4,puVar7);
    uVar11 = (int32_t)((ulonglong)puVar7 >> 0x20);
    if (*(int *)(unaff_RSI + 0x1234) == 0) {
      dVar9 = (double)pow(0,SUB84((double)(*(float *)(param_2 + 0x2c4) * 0.33333334),0));
      uVar8 = SUB84(dVar9,0);
      fVar10 = ((float)dVar9 * 0.0001) / (*(float *)(param_2 + 700) * 0.75 + 0.25);
    }
    else {
      fVar10 = 0.01;
    }
    uVar8 = FUN_18072e720(uVar8,&stack0x00000840,&stack0x00000240,fVar10);
    FUN_180726fd0(uVar8,param_2 + 0x10,&stack0x00000840,unaff_RSI + 0x1190);
    FUN_18072ec50(param_2 + 0x2c8,&stack0x00000240,param_2 + 0x10,param_2,
                  CONCAT44(uVar11,*(int32_t *)(unaff_RSI + 0x11e8)));
    *(int32_t *)(unaff_RSI + 0x1190) = in_stack_00000840;
    *(int32_t *)(unaff_RSI + 0x1194) = in_stack_00000844;
    *(int32_t *)(unaff_RSI + 0x1198) = in_stack_00000848;
    *(int32_t *)(unaff_RSI + 0x119c) = in_stack_0000084c;
    *(int32_t *)(unaff_RSI + 0x11a0) = in_stack_00000850;
    *(int32_t *)(unaff_RSI + 0x11a4) = in_stack_00000854;
    *(int32_t *)(unaff_RSI + 0x11a8) = in_stack_00000858;
    *(int32_t *)(unaff_RSI + 0x11ac) = in_stack_0000085c;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(in_stack_00000860 ^ (ulonglong)&stack0x00000000);
  }
  puVar7 = &stack0x00000240;
  iVar6 = 0;
  param_4 = param_4 + (longlong)*(int *)(unaff_RSI + 0x121c) * -4;
  if (0 < (int)uVar2) {
    iVar3 = *(int *)(unaff_RSI + 0x121c) + *(int *)(unaff_RSI + 0x11e8);
    puVar5 = (int32_t *)&stack0x00000050;
    do {
      FUN_18072e4b0(puVar7,param_4,*puVar5,iVar3);
      puVar5 = puVar5 + 1;
      iVar6 = iVar6 + 1;
      iVar3 = *(int *)(unaff_RSI + 0x121c) + *(int *)(unaff_RSI + 0x11e8);
      param_4 = param_4 + (longlong)*(int *)(unaff_RSI + 0x11e8) * 4;
      uVar2 = *(uint *)(unaff_RSI + 0x11e0);
      puVar7 = puVar7 + (longlong)iVar3 * 4;
    } while (iVar6 < (int)uVar2);
  }
                    // WARNING: Subroutine does not return
  memset(param_2 + 0x90,0,(longlong)(int)(uVar2 * 5) << 2);
}





// 函数: void FUN_1807265fd(int32_t param_1)
void FUN_1807265fd(int32_t param_1)

{
  longlong unaff_RSI;
  longlong unaff_R15;
  int32_t uVar1;
  int32_t in_stack_00000840;
  int32_t in_stack_00000844;
  int32_t in_stack_00000848;
  int32_t in_stack_0000084c;
  int32_t in_stack_00000850;
  int32_t in_stack_00000854;
  int32_t in_stack_00000858;
  int32_t in_stack_0000085c;
  ulonglong in_stack_00000860;
  
  uVar1 = FUN_18072e720(param_1,&stack0x00000840,&stack0x00000240,0x3c23d70a);
  FUN_180726fd0(uVar1,unaff_R15 + 0x10,&stack0x00000840,unaff_RSI + 0x1190);
  FUN_18072ec50(unaff_R15 + 0x2c8,&stack0x00000240,unaff_R15 + 0x10);
  *(int32_t *)(unaff_RSI + 0x1190) = in_stack_00000840;
  *(int32_t *)(unaff_RSI + 0x1194) = in_stack_00000844;
  *(int32_t *)(unaff_RSI + 0x1198) = in_stack_00000848;
  *(int32_t *)(unaff_RSI + 0x119c) = in_stack_0000084c;
  *(int32_t *)(unaff_RSI + 0x11a0) = in_stack_00000850;
  *(int32_t *)(unaff_RSI + 0x11a4) = in_stack_00000854;
  *(int32_t *)(unaff_RSI + 0x11a8) = in_stack_00000858;
  *(int32_t *)(unaff_RSI + 0x11ac) = in_stack_0000085c;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000860 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180726700(longlong param_1,float *param_2)
void FUN_180726700(longlong param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  double dVar9;
  int8_t auStack_78 [48];
  int aiStack_48 [4];
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_78;
  iVar5 = 0;
  if (*(char *)(param_1 + 0x12a5) == '\x02') {
    dVar9 = (double)exp((double)((param_2[0xb1] - 12.0) * -0.25));
    pfVar1 = param_2;
    iVar2 = iVar5;
    if (0 < *(int *)(param_1 + 0x11e0)) {
      do {
        iVar2 = iVar2 + 1;
        *pfVar1 = (1.0 - (float)(1.0 / (dVar9 + 1.0)) * 0.5) * *pfVar1;
        pfVar1 = pfVar1 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x11e0));
    }
  }
  dVar9 = (double)pow(0x4000000000000000,
                      (double)(6.9300003 - (float)*(int *)(param_1 + 0x1274) * 0.002578125));
  iVar2 = *(int *)(param_1 + 0x11e8);
  uVar3 = *(uint *)(param_1 + 0x11e0);
  uVar7 = (ulonglong)uVar3;
  pfVar1 = param_2;
  if (0 < (int)uVar3) {
    do {
      iVar5 = iVar5 + 1;
      fVar8 = SQRT((float)(dVar9 / (double)iVar2) * pfVar1[0xb2] + *pfVar1 * *pfVar1);
      if (32767.0 <= fVar8) {
        fVar8 = 32767.0;
      }
      *pfVar1 = fVar8;
      uVar3 = *(uint *)(param_1 + 0x11e0);
      uVar7 = (ulonglong)uVar3;
      pfVar1 = pfVar1 + 1;
    } while (iVar5 < (int)uVar3);
    if (0 < (int)uVar3) {
      piVar4 = aiStack_48;
      uVar6 = uVar7;
      do {
        *piVar4 = (int)(*(float *)(((longlong)param_2 - (longlong)aiStack_48) + (longlong)piVar4) *
                       65536.0);
        uVar6 = uVar6 - 1;
        piVar4 = piVar4 + 1;
      } while (uVar6 != 0);
    }
  }
                    // WARNING: Subroutine does not return
  memcpy(param_2 + 0xb6,aiStack_48,(longlong)(int)uVar3 << 2,uVar7);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180726a00(uint64_t param_1,longlong param_2,int param_3)
void FUN_180726a00(uint64_t param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int8_t auStack_88 [48];
  int aiStack_58 [16];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_88;
  if (0 < param_3) {
    lVar1 = 0;
    do {
      aiStack_58[lVar1] = (int)ROUND(*(float *)(param_2 + lVar1 * 4) * 65536.0);
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_3);
  }
  FUN_18072edd0(param_1,aiStack_58);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_88);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180726a70(ulonglong param_1,uint64_t param_2,uint param_3)
void FUN_180726a70(ulonglong param_1,uint64_t param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int8_t auVar6 [12];
  int8_t auVar7 [12];
  int8_t auVar8 [12];
  int8_t auVar9 [12];
  float *pfVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int8_t auVar16 [16];
  int8_t auVar20 [16];
  int8_t auVar23 [16];
  int8_t auVar26 [16];
  int8_t auStack_68 [32];
  uint64_t uStack_48;
  ulonglong auStack_40 [6];
  int8_t auVar17 [16];
  int8_t auVar18 [16];
  int16_t uVar19;
  int8_t auVar21 [16];
  int8_t auVar22 [16];
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  int8_t auVar27 [16];
  int8_t auVar28 [16];
  
  auStack_40[3] = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_68;
  lVar14 = (longlong)(int)param_3;
  FUN_18072f4d0(&uStack_48,param_2,param_3);
  uVar13 = 0;
  uVar15 = uVar13;
  if (((0 < (int)param_3) && (uVar15 = 0, 0xf < param_3)) &&
     (((ulonglong)((longlong)&uStack_48 + (longlong)(int)(param_3 - 1) * 2) < param_1 ||
      ((uint64_t *)(param_1 + (longlong)(int)(param_3 - 1) * 4) < &uStack_48)))) {
    uVar11 = param_3 & 0x8000000f;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
    }
    pfVar10 = (float *)(param_1 + 0x20);
    uVar15 = uVar13;
    do {
      uVar1 = *(ulonglong *)((longlong)&uStack_48 + uVar13 * 2);
      uVar2 = *(ulonglong *)((longlong)auStack_40 + uVar13 * 2);
      uVar15 = (ulonglong)((int)uVar15 + 0x10);
      uVar19 = (int16_t)(uVar1 >> 0x30);
      auVar18._8_4_ = 0;
      auVar18._0_8_ = uVar1;
      auVar18._12_2_ = uVar19;
      auVar18._14_2_ = uVar19;
      uVar19 = (int16_t)(uVar1 >> 0x20);
      auVar17._12_4_ = auVar18._12_4_;
      auVar17._8_2_ = 0;
      auVar17._0_8_ = uVar1;
      auVar17._10_2_ = uVar19;
      auVar16._10_6_ = auVar17._10_6_;
      auVar16._8_2_ = uVar19;
      auVar16._0_8_ = uVar1;
      uVar19 = (int16_t)(uVar1 >> 0x10);
      auVar6._4_8_ = auVar16._8_8_;
      auVar6._2_2_ = uVar19;
      auVar6._0_2_ = uVar19;
      uVar19 = (int16_t)(uVar2 >> 0x30);
      auVar22._8_4_ = 0;
      auVar22._0_8_ = uVar2;
      auVar22._12_2_ = uVar19;
      auVar22._14_2_ = uVar19;
      uVar19 = (int16_t)(uVar2 >> 0x20);
      auVar21._12_4_ = auVar22._12_4_;
      auVar21._8_2_ = 0;
      auVar21._0_8_ = uVar2;
      auVar21._10_2_ = uVar19;
      auVar20._10_6_ = auVar21._10_6_;
      auVar20._8_2_ = uVar19;
      auVar20._0_8_ = uVar2;
      uVar19 = (int16_t)(uVar2 >> 0x10);
      auVar7._4_8_ = auVar20._8_8_;
      auVar7._2_2_ = uVar19;
      auVar7._0_2_ = uVar19;
      pfVar10[-8] = (float)(int)(short)uVar1 * 0.00024414063;
      pfVar10[-7] = (float)(auVar6._0_4_ >> 0x10) * 0.00024414063;
      pfVar10[-6] = (float)(auVar16._8_4_ >> 0x10) * 0.00024414063;
      pfVar10[-5] = (float)(auVar17._12_4_ >> 0x10) * 0.00024414063;
      uVar1 = *(ulonglong *)((longlong)auStack_40 + uVar13 * 2 + 8);
      uVar19 = (int16_t)(uVar1 >> 0x30);
      auVar25._8_4_ = 0;
      auVar25._0_8_ = uVar1;
      auVar25._12_2_ = uVar19;
      auVar25._14_2_ = uVar19;
      uVar19 = (int16_t)(uVar1 >> 0x20);
      auVar24._12_4_ = auVar25._12_4_;
      auVar24._8_2_ = 0;
      auVar24._0_8_ = uVar1;
      auVar24._10_2_ = uVar19;
      auVar23._10_6_ = auVar24._10_6_;
      auVar23._8_2_ = uVar19;
      auVar23._0_8_ = uVar1;
      uVar19 = (int16_t)(uVar1 >> 0x10);
      auVar8._4_8_ = auVar23._8_8_;
      auVar8._2_2_ = uVar19;
      auVar8._0_2_ = uVar19;
      pfVar10[-4] = (float)(int)(short)uVar2 * 0.00024414063;
      pfVar10[-3] = (float)(auVar7._0_4_ >> 0x10) * 0.00024414063;
      pfVar10[-2] = (float)(auVar20._8_4_ >> 0x10) * 0.00024414063;
      pfVar10[-1] = (float)(auVar21._12_4_ >> 0x10) * 0.00024414063;
      uVar2 = *(ulonglong *)((longlong)auStack_40 + uVar13 * 2 + 0x10);
      uVar13 = uVar13 + 0x10;
      uVar19 = (int16_t)(uVar2 >> 0x30);
      auVar28._8_4_ = 0;
      auVar28._0_8_ = uVar2;
      auVar28._12_2_ = uVar19;
      auVar28._14_2_ = uVar19;
      uVar19 = (int16_t)(uVar2 >> 0x20);
      auVar27._12_4_ = auVar28._12_4_;
      auVar27._8_2_ = 0;
      auVar27._0_8_ = uVar2;
      auVar27._10_2_ = uVar19;
      auVar26._10_6_ = auVar27._10_6_;
      auVar26._8_2_ = uVar19;
      auVar26._0_8_ = uVar2;
      uVar19 = (int16_t)(uVar2 >> 0x10);
      auVar9._4_8_ = auVar26._8_8_;
      auVar9._2_2_ = uVar19;
      auVar9._0_2_ = uVar19;
      *pfVar10 = (float)(int)(short)uVar1 * 0.00024414063;
      pfVar10[1] = (float)(auVar8._0_4_ >> 0x10) * 0.00024414063;
      pfVar10[2] = (float)(auVar23._8_4_ >> 0x10) * 0.00024414063;
      pfVar10[3] = (float)(auVar24._12_4_ >> 0x10) * 0.00024414063;
      pfVar10[4] = (float)(int)(short)uVar2 * 0.00024414063;
      pfVar10[5] = (float)(auVar9._0_4_ >> 0x10) * 0.00024414063;
      pfVar10[6] = (float)(auVar26._8_4_ >> 0x10) * 0.00024414063;
      pfVar10[7] = (float)(auVar27._12_4_ >> 0x10) * 0.00024414063;
      pfVar10 = pfVar10 + 0x10;
    } while ((longlong)uVar13 < (longlong)(int)(param_3 - uVar11));
  }
  lVar12 = (longlong)(int)uVar15;
  if (lVar12 < lVar14) {
    if (3 < lVar14 - lVar12) {
      pfVar10 = (float *)(param_1 + 8 + lVar12 * 4);
      do {
        sVar3 = *(short *)((longlong)&uStack_48 + lVar12 * 2 + 2);
        sVar4 = *(short *)((longlong)&uStack_48 + lVar12 * 2 + 4);
        pfVar10[-2] = (float)(int)*(short *)((longlong)&uStack_48 + lVar12 * 2) * 0.00024414063;
        sVar5 = *(short *)((longlong)&uStack_48 + lVar12 * 2 + 6);
        lVar12 = lVar12 + 4;
        pfVar10[-1] = (float)(int)sVar3 * 0.00024414063;
        *pfVar10 = (float)(int)sVar4 * 0.00024414063;
        pfVar10[1] = (float)(int)sVar5 * 0.00024414063;
        pfVar10 = pfVar10 + 4;
      } while (lVar12 < lVar14 + -3);
    }
    for (; lVar12 < lVar14; lVar12 = lVar12 + 1) {
      *(float *)(param_1 + lVar12 * 4) =
           (float)(int)*(short *)((longlong)&uStack_48 + lVar12 * 2) * 0.00024414063;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(auStack_40[3] ^ (ulonglong)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



