#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part070.c - 14 个函数

// 函数: void FUN_180703a80(longlong *param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void FUN_180703a80(longlong *param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  int param_5)

{
  int8_t auStack_d8 [4];
  int iStack_d4;
  int32_t uStack_d0;
  int32_t uStack_c4;
  uint64_t uStack_b0;
  longlong *plStack_a8;
  uint64_t uStack_98;
  longlong lStack_88;
  ulonglong uStack_68;
  
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  lStack_88 = *param_1;
  uStack_d0 = *(int32_t *)(lStack_88 + 4);
  iStack_d4 = param_5 + 0x400;
  uStack_c4 = param_4;
  uStack_b0 = param_2;
  plStack_a8 = param_1;
  uStack_98 = param_3;
                    // WARNING: Subroutine does not return
  FUN_1808fd200(0xffffffffffffff0);
}



bool FUN_1807040a0(longlong param_1,longlong param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  int iVar10;
  longlong lVar11;
  float *pfVar12;
  byte bVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  short *psVar19;
  float fVar20;
  float fVar21;
  
  fVar20 = 1e-15;
  lVar17 = 0xd;
  fVar21 = 1e-15;
  lVar18 = (longlong)param_4;
  psVar19 = *(short **)(param_1 + 0x20);
  do {
    sVar9 = *psVar19;
    psVar19 = psVar19 + 1;
    bVar13 = (byte)param_3;
    lVar16 = (longlong)((int)sVar9 << (bVar13 & 0x1f));
    lVar14 = (longlong)((int)*psVar19 << (bVar13 & 0x1f));
    if (lVar16 < lVar14) {
      if (3 < lVar14 - lVar16) {
        pfVar12 = (float *)(param_2 + 4 + lVar16 * 4);
        lVar11 = ((lVar14 - lVar16) - 4U >> 2) + 1;
        lVar16 = lVar16 + lVar11 * 4;
        do {
          fVar1 = pfVar12[-1];
          fVar2 = pfVar12[lVar18 + -1];
          fVar3 = *pfVar12;
          fVar4 = pfVar12[lVar18];
          fVar5 = pfVar12[1];
          fVar6 = pfVar12[lVar18 + 1];
          fVar7 = pfVar12[2];
          fVar8 = pfVar12[lVar18 + 2];
          pfVar12 = pfVar12 + 4;
          fVar20 = fVar20 + ABS(fVar2) + ABS(fVar1) + ABS(fVar4) + ABS(fVar3) +
                   ABS(fVar6) + ABS(fVar5) + ABS(fVar8) + ABS(fVar7);
          fVar21 = fVar21 + ABS(fVar1 - fVar2) + ABS(fVar2 + fVar1) +
                   ABS(fVar3 - fVar4) + ABS(fVar4 + fVar3) + ABS(fVar5 - fVar6) + ABS(fVar6 + fVar5)
                   + ABS(fVar7 - fVar8) + ABS(fVar8 + fVar7);
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      if (lVar16 < lVar14) {
        pfVar12 = (float *)(param_2 + lVar16 * 4);
        lVar14 = lVar14 - lVar16;
        do {
          fVar1 = *pfVar12;
          fVar2 = pfVar12[lVar18];
          pfVar12 = pfVar12 + 1;
          fVar20 = fVar20 + ABS(fVar2) + ABS(fVar1);
          fVar21 = fVar21 + ABS(fVar1 - fVar2) + ABS(fVar2 + fVar1);
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
    }
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  iVar15 = (int)(*(short **)(param_1 + 0x20))[0xd] << (bVar13 + 1 & 0x1f);
  iVar10 = 5;
  if (1 < param_3) {
    iVar10 = 0xd;
  }
  return (float)iVar15 * fVar20 < (float)(iVar10 + iVar15) * fVar21 * 0.707107;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807042f0(uint64_t param_1,int param_2,int32_t param_3,uint64_t param_4)
void FUN_1807042f0(uint64_t param_1,int param_2,int32_t param_3,uint64_t param_4)

{
  int8_t auStack_c8 [16];
  int iStack_b8;
  int32_t uStack_b4;
  uint64_t uStack_88;
  uint64_t uStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  
  uStack_50 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  lStack_58 = (longlong)param_2;
  iStack_b8 = param_2;
  uStack_b4 = param_3;
  uStack_88 = param_1;
  uStack_60 = param_4;
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_1807048a0(int param_1,int param_2,int param_3,longlong param_4,int param_5,uint param_6,
void FUN_1807048a0(int param_1,int param_2,int param_3,longlong param_4,int param_5,uint param_6,
                  longlong param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = (longlong)param_2;
  lVar10 = (longlong)param_1;
  iVar8 = 0x1f;
  if (*(uint *)(param_7 + 0x20) != 0) {
    for (; *(uint *)(param_7 + 0x20) >> iVar8 == 0; iVar8 = iVar8 + -1) {
    }
  }
  iVar8 = *(int *)(param_7 + 0x18) - iVar8;
  uVar5 = *(int *)(param_7 + 8) * 8;
  iVar7 = 4;
  if (param_3 != 0) {
    iVar7 = 2;
  }
  uVar2 = 0;
  iVar3 = iVar8 + -1;
  if ((param_5 < 1) || (uVar1 = 1, uVar5 < (uint)(iVar8 + iVar7))) {
    uVar1 = 0;
  }
  uVar4 = 0;
  if (lVar10 < lVar9) {
    lVar6 = lVar10;
    uVar4 = uVar2;
    do {
      if (uVar5 - uVar1 < (uint)(iVar7 + iVar3)) {
        *(uint *)(param_4 + lVar6 * 4) = uVar2;
      }
      else {
        func_0x000180705150(param_7,uVar2 ^ *(uint *)(param_4 + lVar6 * 4));
        iVar8 = 0x1f;
        if (*(uint *)(param_7 + 0x20) != 0) {
          for (; *(uint *)(param_7 + 0x20) >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        uVar2 = *(uint *)(param_4 + lVar6 * 4);
        iVar3 = (*(int *)(param_7 + 0x18) - iVar8) + -1;
        uVar4 = uVar4 | uVar2;
      }
      lVar6 = lVar6 + 1;
      iVar7 = 5 - (uint)(param_3 != 0);
    } while (lVar6 < lVar9);
  }
  uVar5 = 0;
  if ((uVar1 != 0) &&
     (lVar6 = (longlong)(int)(uVar4 + param_3 * 4) + (longlong)param_5 * 8, uVar5 = 0,
     (&UNK_180953110)[lVar6] != (&UNK_180953112)[lVar6])) {
    func_0x000180705150(param_7,param_6,1);
    uVar5 = param_6;
  }
  if (lVar10 < lVar9) {
    do {
      *(int *)(param_4 + lVar10 * 4) =
           (int)(char)(&UNK_180953110)
                      [(longlong)(int)(*(int *)(param_4 + lVar10 * 4) + (uVar5 + param_3 * 2) * 2) +
                       (longlong)param_5 * 8];
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar9);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180704a20(uint64_t param_1,int param_2,int32_t param_3,uint64_t param_4)
void FUN_180704a20(uint64_t param_1,int param_2,int32_t param_3,uint64_t param_4)

{
  int8_t auStack_108 [20];
  int32_t uStack_f4;
  longlong lStack_f0;
  uint64_t uStack_e0;
  ulonglong uStack_d8;
  
  uStack_d8 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  lStack_f0 = (longlong)param_2;
  uStack_f4 = param_3;
  uStack_e0 = param_4;
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_180705180(longlong *param_1,int param_2,int param_3)
void FUN_180705180(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  uVar4 = *(uint *)(param_1 + 2);
  if (0x20 < (uint)(iVar3 + param_3)) {
    do {
      if ((uint)(*(int *)((longlong)param_1 + 0x1c) + *(int *)((longlong)param_1 + 0xc)) <
          *(uint *)(param_1 + 1)) {
        iVar1 = *(int *)((longlong)param_1 + 0xc) + 1;
        *(int *)((longlong)param_1 + 0xc) = iVar1;
        *(char *)((ulonglong)(*(uint *)(param_1 + 1) - iVar1) + *param_1) = (char)uVar4;
        uVar2 = 0;
      }
      else {
        uVar2 = 0xffffffff;
      }
      *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar2;
      iVar3 = iVar3 + -8;
      uVar4 = uVar4 >> 8;
    } while (7 < iVar3);
  }
  *(int *)(param_1 + 3) = (int)param_1[3] + param_3;
  *(uint *)(param_1 + 2) = param_2 << ((byte)iVar3 & 0x1f) | uVar4;
  *(int *)((longlong)param_1 + 0x14) = iVar3 + param_3;
  return;
}





// 函数: void FUN_180705210(longlong *param_1)
void FUN_180705210(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar6 = *(uint *)(param_1 + 4);
  iVar3 = 0x1f;
  if (uVar6 != 0) {
    for (; uVar6 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  iVar9 = -iVar3 + 0x1f;
  uVar7 = 0x7fffffff >> ((byte)iVar9 & 0x1f);
  uVar8 = iVar2 + uVar7 & ~uVar7;
  if (iVar2 + uVar6 <= (uVar8 | uVar7)) {
    iVar9 = -iVar3 + 0x20;
    uVar8 = iVar2 + (uVar7 >> 1) & ~(uVar7 >> 1);
  }
  if (iVar9 < 1) {
    uVar6 = *(uint *)((longlong)param_1 + 0x2c);
  }
  else {
    uVar5 = (ulonglong)((iVar9 - 1U >> 3) + 1);
    do {
      if (uVar8 >> 0x17 == 0xff) {
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
        uVar6 = *(uint *)((longlong)param_1 + 0x2c);
      }
      else {
        cVar4 = -(char)((int)uVar8 >> 0x1f);
        if (-1 < *(int *)((longlong)param_1 + 0x2c)) {
          if (*(int *)((longlong)param_1 + 0xc) + *(uint *)((longlong)param_1 + 0x1c) <
              *(uint *)(param_1 + 1)) {
            *(char *)((ulonglong)*(uint *)((longlong)param_1 + 0x1c) + *param_1) =
                 (char)*(int *)((longlong)param_1 + 0x2c) + cVar4;
            *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
            uVar6 = 0;
          }
          else {
            uVar6 = 0xffffffff;
          }
          *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar6;
        }
        if ((int)param_1[5] != 0) {
          uVar6 = *(uint *)((longlong)param_1 + 0x1c);
          do {
            if (*(int *)((longlong)param_1 + 0xc) + uVar6 < *(uint *)(param_1 + 1)) {
              *(char *)((ulonglong)uVar6 + *param_1) = cVar4 + -1;
              *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
              uVar6 = *(uint *)((longlong)param_1 + 0x1c);
              uVar7 = 0;
            }
            else {
              uVar7 = 0xffffffff;
            }
            *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar7;
            plVar1 = param_1 + 5;
            *(int *)plVar1 = (int)*plVar1 + -1;
          } while ((int)*plVar1 != 0);
        }
        uVar6 = uVar8 >> 0x17 & 0xff;
        *(uint *)((longlong)param_1 + 0x2c) = uVar6;
      }
      uVar8 = (uVar8 & 0x7fffff) << 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if ((int)uVar6 < 0) {
    iVar3 = (int)param_1[5];
    if (iVar3 == 0) goto LAB_1807053b0;
  }
  else {
    if (*(int *)((longlong)param_1 + 0xc) + *(uint *)((longlong)param_1 + 0x1c) <
        *(uint *)(param_1 + 1)) {
      *(char *)((ulonglong)*(uint *)((longlong)param_1 + 0x1c) + *param_1) = (char)uVar6;
      *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
      uVar6 = 0;
    }
    else {
      uVar6 = 0xffffffff;
    }
    *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar6;
    iVar3 = (int)param_1[5];
  }
  while (iVar3 != 0) {
    if (*(int *)((longlong)param_1 + 0xc) + *(uint *)((longlong)param_1 + 0x1c) <
        *(uint *)(param_1 + 1)) {
      *(int8_t *)((ulonglong)*(uint *)((longlong)param_1 + 0x1c) + *param_1) = 0xff;
      *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
      uVar6 = 0;
    }
    else {
      uVar6 = 0xffffffff;
    }
    *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar6;
    plVar1 = param_1 + 5;
    *(int *)plVar1 = (int)*plVar1 + -1;
    iVar3 = (int)*plVar1;
  }
  *(int32_t *)((longlong)param_1 + 0x2c) = 0;
LAB_1807053b0:
  uVar6 = *(uint *)(param_1 + 2);
  if ((int)*(uint *)((longlong)param_1 + 0x14) < 8) {
    uVar7 = *(uint *)(param_1 + 6);
  }
  else {
    uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0x14) >> 3);
    do {
      if ((uint)(*(int *)((longlong)param_1 + 0x1c) + *(int *)((longlong)param_1 + 0xc)) <
          *(uint *)(param_1 + 1)) {
        iVar3 = *(int *)((longlong)param_1 + 0xc) + 1;
        *(int *)((longlong)param_1 + 0xc) = iVar3;
        uVar7 = 0;
        *(char *)((ulonglong)(*(uint *)(param_1 + 1) - iVar3) + *param_1) = (char)uVar6;
      }
      else {
        uVar7 = 0xffffffff;
      }
      uVar7 = *(uint *)(param_1 + 6) | uVar7;
      uVar6 = uVar6 >> 8;
      *(uint *)(param_1 + 6) = uVar7;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (uVar7 == 0) {
                    // WARNING: Subroutine does not return
    memset((ulonglong)*(uint *)((longlong)param_1 + 0x1c) + *param_1,0,
           ((int)param_1[1] - *(uint *)((longlong)param_1 + 0x1c)) -
           *(int *)((longlong)param_1 + 0xc));
  }
  return;
}





// 函数: void FUN_1807054a0(longlong *param_1,int param_2,longlong param_3,byte param_4)
void FUN_1807054a0(longlong *param_1,int param_2,longlong param_3,byte param_4)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 4);
  uVar5 = uVar6 >> (param_4 & 0x1f);
  pbVar4 = (byte *)(param_2 + param_3);
  if (param_2 < 1) {
    *(uint *)(param_1 + 4) = uVar6 - *pbVar4 * uVar5;
  }
  else {
    *(int *)((longlong)param_1 + 0x24) =
         *(int *)((longlong)param_1 + 0x24) + (uVar6 - pbVar4[-1] * uVar5);
    *(uint *)(param_1 + 4) = ((uint)pbVar4[-1] - (uint)*pbVar4) * uVar5;
  }
  if (*(uint *)(param_1 + 4) < 0x800001) {
    uVar6 = *(uint *)((longlong)param_1 + 0x24);
    do {
      if (uVar6 >> 0x17 == 0xff) {
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
      }
      else {
        cVar2 = (char)((int)uVar6 >> 0x1f);
        if (-1 < *(int *)((longlong)param_1 + 0x2c)) {
          if (*(int *)((longlong)param_1 + 0xc) + *(uint *)((longlong)param_1 + 0x1c) <
              *(uint *)(param_1 + 1)) {
            *(char *)((ulonglong)*(uint *)((longlong)param_1 + 0x1c) + *param_1) =
                 (char)*(int *)((longlong)param_1 + 0x2c) - cVar2;
            *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
            uVar5 = 0;
          }
          else {
            uVar5 = 0xffffffff;
          }
          *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar5;
        }
        if ((int)param_1[5] != 0) {
          uVar5 = *(uint *)((longlong)param_1 + 0x1c);
          do {
            if (*(int *)((longlong)param_1 + 0xc) + uVar5 < *(uint *)(param_1 + 1)) {
              *(char *)((ulonglong)uVar5 + *param_1) = -1 - cVar2;
              *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
              uVar5 = *(uint *)((longlong)param_1 + 0x1c);
              uVar3 = 0;
            }
            else {
              uVar3 = 0xffffffff;
            }
            *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar3;
            plVar1 = param_1 + 5;
            *(int *)plVar1 = (int)*plVar1 + -1;
          } while ((int)*plVar1 != 0);
        }
        *(uint *)((longlong)param_1 + 0x2c) = uVar6 >> 0x17 & 0xff;
      }
      *(int *)(param_1 + 4) = (int)param_1[4] << 8;
      *(int *)(param_1 + 3) = (int)param_1[3] + 8;
      uVar6 = (*(uint *)((longlong)param_1 + 0x24) & 0x7fffff) << 8;
      *(uint *)((longlong)param_1 + 0x24) = uVar6;
    } while (*(uint *)(param_1 + 4) < 0x800001);
  }
  return;
}





// 函数: void FUN_180705530(longlong *param_1)
void FUN_180705530(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(uint *)(param_1 + 4) < 0x800001) {
    uVar5 = *(uint *)((longlong)param_1 + 0x24);
    do {
      if (uVar5 >> 0x17 == 0xff) {
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
      }
      else {
        cVar2 = (char)((int)uVar5 >> 0x1f);
        if (-1 < *(int *)((longlong)param_1 + 0x2c)) {
          if (*(int *)((longlong)param_1 + 0xc) + *(uint *)((longlong)param_1 + 0x1c) <
              *(uint *)(param_1 + 1)) {
            *(char *)((ulonglong)*(uint *)((longlong)param_1 + 0x1c) + *param_1) =
                 (char)*(int *)((longlong)param_1 + 0x2c) - cVar2;
            *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
            uVar3 = 0;
          }
          else {
            uVar3 = 0xffffffff;
          }
          *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar3;
        }
        if ((int)param_1[5] != 0) {
          uVar3 = *(uint *)((longlong)param_1 + 0x1c);
          do {
            if (*(int *)((longlong)param_1 + 0xc) + uVar3 < *(uint *)(param_1 + 1)) {
              *(char *)((ulonglong)uVar3 + *param_1) = -1 - cVar2;
              *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
              uVar3 = *(uint *)((longlong)param_1 + 0x1c);
              uVar4 = 0;
            }
            else {
              uVar4 = 0xffffffff;
            }
            *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar4;
            plVar1 = param_1 + 5;
            *(int *)plVar1 = (int)*plVar1 + -1;
          } while ((int)*plVar1 != 0);
        }
        *(uint *)((longlong)param_1 + 0x2c) = uVar5 >> 0x17 & 0xff;
      }
      *(int *)(param_1 + 4) = (int)param_1[4] << 8;
      *(int *)(param_1 + 3) = (int)param_1[3] + 8;
      uVar5 = (*(uint *)((longlong)param_1 + 0x24) & 0x7fffff) << 8;
      *(uint *)((longlong)param_1 + 0x24) = uVar5;
    } while (*(uint *)(param_1 + 4) < 0x800001);
  }
  return;
}





// 函数: void FUN_180705545(longlong *param_1,uint64_t param_2,uint64_t param_3,uint param_4)
void FUN_180705545(longlong *param_1,uint64_t param_2,uint64_t param_3,uint param_4)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  do {
    if (param_4 >> 0x17 == 0xff) {
      *(int *)(param_1 + 5) = (int)param_1[5] + 1;
    }
    else {
      cVar2 = (char)((int)param_4 >> 0x1f);
      if (-1 < *(int *)((longlong)param_1 + 0x2c)) {
        if (*(int *)((longlong)param_1 + 0xc) + *(uint *)((longlong)param_1 + 0x1c) <
            *(uint *)(param_1 + 1)) {
          *(char *)((ulonglong)*(uint *)((longlong)param_1 + 0x1c) + *param_1) =
               (char)*(int *)((longlong)param_1 + 0x2c) - cVar2;
          *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
          uVar3 = 0;
        }
        else {
          uVar3 = 0xffffffff;
        }
        *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar3;
      }
      if ((int)param_1[5] != 0) {
        uVar3 = *(uint *)((longlong)param_1 + 0x1c);
        do {
          if (*(int *)((longlong)param_1 + 0xc) + uVar3 < *(uint *)(param_1 + 1)) {
            *(char *)((ulonglong)uVar3 + *param_1) = -1 - cVar2;
            *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
            uVar3 = *(uint *)((longlong)param_1 + 0x1c);
            uVar4 = 0;
          }
          else {
            uVar4 = 0xffffffff;
          }
          *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar4;
          plVar1 = param_1 + 5;
          *(int *)plVar1 = (int)*plVar1 + -1;
        } while ((int)*plVar1 != 0);
      }
      *(uint *)((longlong)param_1 + 0x2c) = param_4 >> 0x17 & 0xff;
    }
    *(int *)(param_1 + 4) = (int)param_1[4] << 8;
    *(int *)(param_1 + 3) = (int)param_1[3] + 8;
    param_4 = (*(uint *)((longlong)param_1 + 0x24) & 0x7fffff) << 8;
    *(uint *)((longlong)param_1 + 0x24) = param_4;
  } while (*(uint *)(param_1 + 4) < 0x800001);
  return;
}





// 函数: void FUN_180705616(void)
void FUN_180705616(void)

{
  return;
}





// 函数: void FUN_1807056b0(longlong *param_1,uint param_2)
void FUN_1807056b0(longlong *param_1,uint param_2)

{
                    // WARNING: Subroutine does not return
  memmove(((ulonglong)param_2 - (ulonglong)*(uint *)((longlong)param_1 + 0xc)) + *param_1,
          ((ulonglong)*(uint *)(param_1 + 1) - (ulonglong)*(uint *)((longlong)param_1 + 0xc)) +
          *param_1);
}





// 函数: void FUN_1807056f0(longlong *param_1,uint param_2,uint param_3)
void FUN_1807056f0(longlong *param_1,uint param_2,uint param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar9 = *(uint *)(param_1 + 4);
  uVar6 = param_3 - 1;
  iVar5 = 0x1f;
  if (uVar6 != 0) {
    for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  if (iVar5 + 1 < 9) {
    uVar6 = uVar9 / param_3;
    if (param_2 == 0) {
      uVar6 = uVar9 - ((param_3 - param_2) + -1) * uVar6;
    }
    else {
      *(int *)((longlong)param_1 + 0x24) =
           *(int *)((longlong)param_1 + 0x24) + (uVar9 - (param_3 - param_2) * uVar6);
    }
    *(uint *)(param_1 + 4) = uVar6;
    if (*(uint *)(param_1 + 4) < 0x800001) {
      uVar9 = *(uint *)((longlong)param_1 + 0x24);
      do {
        if (uVar9 >> 0x17 == 0xff) {
          *(int *)(param_1 + 5) = (int)param_1[5] + 1;
        }
        else {
          cVar3 = (char)((int)uVar9 >> 0x1f);
          if (-1 < *(int *)((longlong)param_1 + 0x2c)) {
            if (*(int *)((longlong)param_1 + 0xc) + *(uint *)((longlong)param_1 + 0x1c) <
                *(uint *)(param_1 + 1)) {
              *(char *)((ulonglong)*(uint *)((longlong)param_1 + 0x1c) + *param_1) =
                   (char)*(int *)((longlong)param_1 + 0x2c) - cVar3;
              *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
              uVar6 = 0;
            }
            else {
              uVar6 = 0xffffffff;
            }
            *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar6;
          }
          if ((int)param_1[5] != 0) {
            uVar6 = *(uint *)((longlong)param_1 + 0x1c);
            do {
              if (*(int *)((longlong)param_1 + 0xc) + uVar6 < *(uint *)(param_1 + 1)) {
                *(char *)((ulonglong)uVar6 + *param_1) = -1 - cVar3;
                *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
                uVar6 = *(uint *)((longlong)param_1 + 0x1c);
                uVar7 = 0;
              }
              else {
                uVar7 = 0xffffffff;
              }
              *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar7;
              plVar2 = param_1 + 5;
              *(int *)plVar2 = (int)*plVar2 + -1;
            } while ((int)*plVar2 != 0);
          }
          *(uint *)((longlong)param_1 + 0x2c) = uVar9 >> 0x17 & 0xff;
        }
        *(int *)(param_1 + 4) = (int)param_1[4] << 8;
        *(int *)(param_1 + 3) = (int)param_1[3] + 8;
        uVar9 = (*(uint *)((longlong)param_1 + 0x24) & 0x7fffff) << 8;
        *(uint *)((longlong)param_1 + 0x24) = uVar9;
      } while (*(uint *)(param_1 + 4) < 0x800001);
    }
    return;
  }
  iVar5 = iVar5 + -7;
  bVar4 = (byte)iVar5;
  uVar7 = (uVar6 >> (bVar4 & 0x1f)) + 1;
  uVar6 = uVar9 / uVar7;
  iVar8 = uVar7 - (param_2 >> (bVar4 & 0x1f));
  if (param_2 >> (bVar4 & 0x1f) == 0) {
    uVar6 = uVar9 - (iVar8 + -1) * uVar6;
  }
  else {
    *(int *)((longlong)param_1 + 0x24) =
         *(int *)((longlong)param_1 + 0x24) + (uVar9 - iVar8 * uVar6);
  }
  *(uint *)(param_1 + 4) = uVar6;
  FUN_180705530(param_1,(ulonglong)uVar9 % (ulonglong)uVar7);
  iVar8 = *(int *)((longlong)param_1 + 0x14);
  uVar9 = *(uint *)(param_1 + 2);
  if (0x20 < (uint)(iVar8 + iVar5)) {
    do {
      if ((uint)(*(int *)((longlong)param_1 + 0x1c) + *(int *)((longlong)param_1 + 0xc)) <
          *(uint *)(param_1 + 1)) {
        iVar1 = *(int *)((longlong)param_1 + 0xc) + 1;
        *(int *)((longlong)param_1 + 0xc) = iVar1;
        *(char *)((ulonglong)(*(uint *)(param_1 + 1) - iVar1) + *param_1) = (char)uVar9;
        uVar6 = 0;
      }
      else {
        uVar6 = 0xffffffff;
      }
      *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar6;
      iVar8 = iVar8 + -8;
      uVar9 = uVar9 >> 8;
    } while (7 < iVar8);
  }
  *(int *)(param_1 + 3) = (int)param_1[3] + iVar5;
  *(uint *)(param_1 + 2) = ((1 << (bVar4 & 0x1f)) - 1U & param_2) << ((byte)iVar8 & 0x1f) | uVar9;
  *(int *)((longlong)param_1 + 0x14) = iVar8 + iVar5;
  return;
}





// 函数: void FUN_180705870(longlong *param_1,int param_2,int param_3,byte param_4)
void FUN_180705870(longlong *param_1,int param_2,int param_3,byte param_4)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 4);
  uVar5 = uVar6 >> (param_4 & 0x1f);
  iVar4 = 1 << (param_4 & 0x1f);
  if (param_2 == 0) {
    *(uint *)(param_1 + 4) = uVar6 - (iVar4 - param_3) * uVar5;
  }
  else {
    *(int *)((longlong)param_1 + 0x24) =
         *(int *)((longlong)param_1 + 0x24) + (uVar6 - (iVar4 - param_2) * uVar5);
    *(uint *)(param_1 + 4) = (param_3 - param_2) * uVar5;
  }
  if (*(uint *)(param_1 + 4) < 0x800001) {
    uVar6 = *(uint *)((longlong)param_1 + 0x24);
    do {
      if (uVar6 >> 0x17 == 0xff) {
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
      }
      else {
        cVar2 = (char)((int)uVar6 >> 0x1f);
        if (-1 < *(int *)((longlong)param_1 + 0x2c)) {
          if (*(int *)((longlong)param_1 + 0xc) + *(uint *)((longlong)param_1 + 0x1c) <
              *(uint *)(param_1 + 1)) {
            *(char *)((ulonglong)*(uint *)((longlong)param_1 + 0x1c) + *param_1) =
                 (char)*(int *)((longlong)param_1 + 0x2c) - cVar2;
            *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
            uVar5 = 0;
          }
          else {
            uVar5 = 0xffffffff;
          }
          *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar5;
        }
        if ((int)param_1[5] != 0) {
          uVar5 = *(uint *)((longlong)param_1 + 0x1c);
          do {
            if (*(int *)((longlong)param_1 + 0xc) + uVar5 < *(uint *)(param_1 + 1)) {
              *(char *)((ulonglong)uVar5 + *param_1) = -1 - cVar2;
              *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
              uVar5 = *(uint *)((longlong)param_1 + 0x1c);
              uVar3 = 0;
            }
            else {
              uVar3 = 0xffffffff;
            }
            *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar3;
            plVar1 = param_1 + 5;
            *(int *)plVar1 = (int)*plVar1 + -1;
          } while ((int)*plVar1 != 0);
        }
        *(uint *)((longlong)param_1 + 0x2c) = uVar6 >> 0x17 & 0xff;
      }
      *(int *)(param_1 + 4) = (int)param_1[4] << 8;
      *(int *)(param_1 + 3) = (int)param_1[3] + 8;
      uVar6 = (*(uint *)((longlong)param_1 + 0x24) & 0x7fffff) << 8;
      *(uint *)((longlong)param_1 + 0x24) = uVar6;
    } while (*(uint *)(param_1 + 4) < 0x800001);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001807058f7)
// WARNING: Removing unreachable block (ram,0x0001807058e9)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807058d0(void)
void FUN_1807058d0(void)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int8_t auStack_28 [16];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_28;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar3 = piVar1[2];
  if (*piVar1 != 0) {
    lVar2 = cpuid_Version_info(1);
    uVar3 = *(uint *)(lVar2 + 8);
    if ((uVar3 >> 0x19 & 1) != 0) {
      if ((uVar3 >> 0x1a & 1) == 0) {
                    // WARNING: Subroutine does not return
        FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_28);
      }
      if ((*(uint *)(lVar2 + 0xc) >> 0x13 & 1) != 0) {
                    // WARNING: Subroutine does not return
        FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_28);
      }
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_28);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_28,uVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



