#include "TaleWorlds.Native.Split.h"

// 03_rendering_part704.c - 4 个函数

// 函数: void FUN_1806718d0(longlong param_1,longlong param_2,longlong param_3,short *param_4,short *param_5,
void FUN_1806718d0(longlong param_1,longlong param_2,longlong param_3,short *param_4,short *param_5,
                  int param_6,int param_7,int *param_8,uint64_t *param_9,longlong *param_10,
                  short *param_11)

{
  short *psVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  short sVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  short sVar15;
  int *piVar16;
  longlong lVar17;
  int8_t auStack_138 [32];
  uint *puStack_118;
  int iStack_108;
  int iStack_104;
  int32_t uStack_100;
  int iStack_fc;
  int iStack_f8;
  uint uStack_f4;
  int iStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  uint64_t *puStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  int *piStack_b0;
  ulonglong uStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  short *psStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  uint auStack_60 [4];
  ulonglong uStack_50;
  
  uStack_50 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  iVar10 = *(int *)(param_1 + 0x23d8);
  iVar11 = *(int *)(param_1 + 0x23dc);
  lVar17 = *(longlong *)(param_1 + 0x1e98);
  sVar3 = *param_11;
  sVar8 = param_11[1];
  lStack_c8 = *(longlong *)(param_1 + 0x2398);
  piStack_b0 = param_8;
  puStack_d8 = param_9;
  lVar9 = (longlong)*(int *)(param_2 + 0x50) + **(longlong **)(param_2 + 0x48);
  uStack_100 = *(int32_t *)(param_2 + 0x54);
  iStack_104 = *(int *)(param_1 + 0x1e70);
  iStack_f0 = 0;
  iStack_fc = 0;
  iStack_f8 = 0;
  lStack_d0 = *(longlong *)(param_1 + 0x23a0);
  psStack_88 = param_11;
  iVar5 = (int)param_4[1];
  if ((int)param_4[1] < *(int *)(param_1 + 0x23d0)) {
    iVar5 = *(int *)(param_1 + 0x23d0);
  }
  iVar4 = (int)(short)iVar5;
  if (*(int *)(param_1 + 0x23d4) < (int)(short)iVar5) {
    iVar4 = *(int *)(param_1 + 0x23d4);
  }
  sVar15 = (short)iVar4;
  param_4[1] = sVar15;
  iVar5 = (int)*param_4;
  if (*param_4 < iVar10) {
    iVar5 = iVar10;
  }
  lStack_b8 = (longlong)(sVar8 >> 3);
  iVar10 = (int)(short)iVar5;
  if (iVar11 < (short)iVar5) {
    iVar10 = iVar11;
  }
  sVar8 = (short)iVar10;
  *param_4 = sVar8;
  *param_8 = 0;
  *param_5 = sVar8;
  param_5[1] = sVar15;
  lStack_c0 = (longlong)(sVar3 >> 3);
  lVar13 = *(int *)(param_3 + 0x20) + lVar17 + (longlong)(sVar8 * iStack_104) + (longlong)sVar15;
  iVar10 = *(int *)(lStack_c8 + (sVar8 - lStack_c0) * 4);
  iVar11 = *(int *)(lStack_d0 + (sVar15 - lStack_b8) * 4);
  lStack_e8 = lVar13;
  lStack_e0 = lVar9;
  lStack_a0 = param_1;
  lStack_90 = lVar13;
  iVar5 = (*(code *)*param_9)(lVar9,uStack_100,lVar13,iStack_104);
  uVar12 = ((iVar10 + iVar11) * param_7 + 0x80 >> 8) + iVar5;
  iVar10 = 1;
  lVar17 = *(longlong *)(param_1 + 0x2348) + (longlong)(param_6 * *(int *)(param_1 + 0x2354)) * 8;
  uVar6 = *(int *)(param_1 + 0x2350) / *(int *)(param_1 + 0x2354) - param_6;
  lStack_98 = lVar17;
  if (0 < (int)uVar6) {
    lVar14 = 1;
    uStack_a8 = (ulonglong)uVar6;
    lVar9 = lStack_c8;
    do {
      psVar1 = (short *)(lVar17 + lVar14 * 8);
      iStack_108 = 0;
      if (((*(int *)(param_1 + 0x23d0) < (int)psVar1[9] + (int)param_5[1] &&
           (int)psVar1[4] + (int)*param_5 < *(int *)(param_1 + 0x23dc)) &&
          (int)psVar1[0xd] + (int)param_5[1] < *(int *)(param_1 + 0x23d4)) &&
          *(int *)(param_1 + 0x23d8) < (int)*psVar1 + (int)*param_5) {
        if (0 < *(int *)(param_1 + 0x2354)) {
          do {
            lStack_80 = *(int *)(lVar17 + 4 + lVar14 * 8) + lVar13;
            lStack_78 = *(int *)(lVar17 + 0xc + lVar14 * 8) + lVar13;
            lStack_70 = *(int *)(lVar17 + 0x14 + lVar14 * 8) + lVar13;
            lStack_68 = *(int *)(lVar17 + 0x1c + lVar14 * 8) + lVar13;
            puStack_118 = auStack_60;
            (*(code *)puStack_d8[8])(lStack_e0,uStack_100,&lStack_80,iStack_104);
            puVar7 = auStack_60;
            lVar13 = 4;
            do {
              if (*puVar7 < uVar12) {
                uVar6 = ((*(int *)(lVar9 + ((short)(*(short *)(lVar17 + lVar14 * 8) + *param_5) -
                                           lStack_c0) * 4) +
                         *(int *)(lStack_d0 +
                                 ((short)(*(short *)(lVar17 + 2 + lVar14 * 8) + param_5[1]) -
                                 lStack_b8) * 4)) * param_7 + 0x80 >> 8) + *puVar7;
                *puVar7 = uVar6;
                if (uVar6 < uVar12) {
                  uVar12 = uVar6;
                  iStack_fc = iVar10;
                }
              }
              puVar7 = puVar7 + 1;
              iVar10 = iVar10 + 1;
              lVar14 = lVar14 + 1;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            iStack_108 = iStack_108 + 4;
            lVar13 = lStack_e8;
            param_1 = lStack_a0;
          } while (iStack_108 < *(int *)(lStack_a0 + 0x2354));
        }
      }
      else if (0 < *(int *)(param_1 + 0x2354)) {
        piVar16 = (int *)(psVar1 + 2);
        do {
          iVar11 = (int)(short)piVar16[-1] + (int)*param_5;
          iVar5 = (int)*(short *)((longlong)piVar16 + -2) + (int)param_5[1];
          if ((((*(int *)(param_1 + 0x23d0) < iVar5) && (iVar5 < *(int *)(param_1 + 0x23d4))) &&
              (*(int *)(param_1 + 0x23d8) < iVar11)) &&
             (((iVar11 < *(int *)(param_1 + 0x23dc) &&
               (uStack_f4 = (*(code *)*puStack_d8)
                                      (lStack_e0,uStack_100,*piVar16 + lStack_e8,iStack_104),
               uStack_f4 < uVar12)) &&
              (uStack_f4 = uStack_f4 +
                           ((*(int *)(lStack_c8 + ((short)iVar11 - lStack_c0) * 4) +
                            *(int *)(lStack_d0 + ((short)iVar5 - lStack_b8) * 4)) * param_7 + 0x80
                           >> 8), uStack_f4 < uVar12)))) {
            uVar12 = uStack_f4;
            iStack_fc = iVar10;
          }
          iVar10 = iVar10 + 1;
          iStack_108 = iStack_108 + 1;
          lVar14 = lVar14 + 1;
          piVar16 = piVar16 + 2;
          lVar13 = lStack_e8;
          lVar17 = lStack_98;
          lVar9 = lStack_c8;
        } while (iStack_108 < *(int *)(param_1 + 0x2354));
      }
      if (iStack_fc == iStack_f8) {
        if (lVar13 == lStack_90) {
          *piStack_b0 = *piStack_b0 + 1;
        }
      }
      else {
        lVar2 = lVar17 + (longlong)iStack_fc * 8;
        *param_5 = *param_5 + *(short *)(lVar17 + (longlong)iStack_fc * 8);
        param_5[1] = param_5[1] + *(short *)(lVar2 + 2);
        lVar13 = lVar13 + *(int *)(lVar2 + 4);
        iStack_f8 = iStack_fc;
        lStack_e8 = lVar13;
      }
      uStack_a8 = uStack_a8 - 1;
    } while (uStack_a8 != 0);
    uStack_a8 = 0;
    lVar9 = lStack_e0;
  }
  if (param_10 != (longlong *)0x0) {
    iStack_f0 = (*(int *)(param_10[1] +
                         ((longlong)((int)(short)(param_5[1] << 3) - (int)psStack_88[1]) >> 1) * 4)
                + *(int *)(*param_10 +
                          ((longlong)((int)(short)(*param_5 << 3) - (int)*psStack_88) >> 1) * 4)) *
                *(int *)(param_1 + 0x2358) + 0x80 >> 8;
  }
  puStack_118 = &uStack_f4;
  (*(code *)puStack_d8[1])(lVar9,uStack_100,lVar13,iStack_104);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_50 ^ (ulonglong)auStack_138);
}



int FUN_180671eb0(longlong param_1,longlong param_2,longlong param_3,short *param_4,int param_5,
                 int param_6,uint64_t *param_7,longlong *param_8,short *param_9)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  int32_t uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  uint auStackX_20 [2];
  
  uVar5 = *(uint *)(param_1 + 0x1e70);
  sVar1 = *param_4;
  sVar2 = param_4[1];
  lVar18 = (longlong)*(int *)(param_2 + 0x50) + **(longlong **)(param_2 + 0x48);
  uVar6 = *(int32_t *)(param_2 + 0x54);
  lVar7 = *(longlong *)(param_1 + 0x23a0);
  lVar16 = (longlong)*(int *)(param_3 + 0x20) + *(longlong *)(param_1 + 0x1e98);
  lVar8 = *(longlong *)(param_1 + 0x2398);
  sVar3 = *param_9;
  sVar4 = param_9[1];
  *(short *)(param_3 + 0x30) = sVar1;
  *(short *)(param_3 + 0x32) = sVar2;
  lVar19 = (int)((int)sVar1 * uVar5) + lVar16 + (longlong)sVar2;
  iVar15 = *(int *)(lVar8 + ((longlong)sVar1 - (longlong)(sVar3 >> 3)) * 4);
  iVar11 = *(int *)(lVar7 + ((longlong)sVar2 - (longlong)(sVar4 >> 3)) * 4);
  iVar9 = (*(code *)*param_7)(lVar18,uVar6,lVar19,uVar5);
  uVar20 = ((iVar15 + iVar11) * param_5 + 0x80 >> 8) + iVar9;
  iVar15 = sVar2 - param_6;
  if (sVar2 - param_6 < *(int *)(param_1 + 0x23d0)) {
    iVar15 = *(int *)(param_1 + 0x23d0);
  }
  iVar11 = sVar2 + param_6;
  if (*(int *)(param_1 + 0x23d4) < sVar2 + param_6) {
    iVar11 = *(int *)(param_1 + 0x23d4);
  }
  iVar9 = sVar1 - param_6;
  if (sVar1 - param_6 < *(int *)(param_1 + 0x23d8)) {
    iVar9 = *(int *)(param_1 + 0x23d8);
  }
  iVar12 = sVar1 + param_6;
  if (*(int *)(param_1 + 0x23dc) < sVar1 + param_6) {
    iVar12 = *(int *)(param_1 + 0x23dc);
  }
  if (iVar9 < iVar12) {
    lVar16 = (longlong)iVar15 + lVar16 + (int)(iVar9 * uVar5);
    uVar13 = (longlong)(int)uVar5;
    do {
      if (iVar15 < iVar11) {
        lVar17 = lVar16;
        iVar14 = iVar15;
        do {
          iVar10 = (*(code *)*param_7)(lVar18,uVar6,lVar17,uVar13 & 0xffffffff);
          auStackX_20[0] =
               iVar10 + ((*(int *)(lVar7 + ((longlong)(short)iVar14 - (longlong)(sVar4 >> 3)) * 4) +
                         *(int *)(lVar8 + ((longlong)(short)iVar9 - (longlong)(sVar3 >> 3)) * 4)) *
                         param_5 + 0x80 >> 8);
          if (auStackX_20[0] < uVar20) {
            *(short *)(param_3 + 0x30) = (short)iVar9;
            *(short *)(param_3 + 0x32) = (short)iVar14;
            lVar19 = lVar17;
            uVar20 = auStackX_20[0];
          }
          uVar13 = (ulonglong)uVar5;
          lVar17 = lVar17 + 1;
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar11);
      }
      lVar16 = lVar16 + (int)uVar5;
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar12);
  }
  if (param_8 == (longlong *)0x0) {
    iVar15 = 0;
  }
  else {
    iVar15 = (*(int *)(param_8[1] +
                      ((longlong)((int)(short)(*(short *)(param_3 + 0x32) << 3) - (int)param_9[1])
                      >> 1) * 4) +
             *(int *)(*param_8 +
                     ((longlong)((int)(short)(*(short *)(param_3 + 0x30) << 3) - (int)*param_9) >> 1
                     ) * 4)) * *(int *)(param_1 + 0x2358) + 0x80 >> 8;
  }
  iVar11 = (*(code *)param_7[1])(lVar18,uVar6,lVar19,uVar5,auStackX_20);
  return iVar11 + iVar15;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806721d0(longlong param_1,longlong param_2,longlong param_3,short *param_4,int param_5,
void FUN_1806721d0(longlong param_1,longlong param_2,longlong param_3,short *param_4,int param_5,
                  int param_6,uint64_t *param_7,uint64_t param_8,short *param_9)

{
  short sVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int8_t auStack_e8 [32];
  uint *puStack_c8;
  uint uStack_b8;
  int iStack_b4;
  uint uStack_b0;
  int32_t uStack_ac;
  int iStack_a8;
  int iStack_a4;
  longlong lStack_a0;
  uint64_t *puStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  ulonglong uStack_70;
  short *psStack_68;
  uint auStack_60 [4];
  ulonglong uStack_50;
  
  uStack_50 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  uVar12 = *(uint *)(param_1 + 0x1e70);
  sVar9 = *param_4;
  sVar1 = param_4[1];
  lVar4 = *(longlong *)(param_1 + 0x2398);
  lVar5 = *(longlong *)(param_1 + 0x23a0);
  lStack_a0 = (longlong)*(int *)(param_3 + 0x20) + *(longlong *)(param_1 + 0x1e98);
  sVar2 = *param_9;
  puStack_98 = param_7;
  psStack_68 = param_9;
  lStack_90 = (longlong)*(int *)(param_2 + 0x50) + **(longlong **)(param_2 + 0x48);
  uStack_ac = *(int32_t *)(param_2 + 0x54);
  sVar3 = param_9[1];
  *(short *)(param_3 + 0x30) = sVar9;
  *(short *)(param_3 + 0x32) = sVar1;
  iStack_a8 = sVar9 + param_6;
  iStack_a4 = sVar1 - param_6;
  iStack_b4 = sVar1 + param_6;
  lStack_80 = (longlong)(sVar3 >> 3);
  lStack_88 = (longlong)(sVar2 >> 3);
  lVar16 = (int)((int)sVar9 * uVar12) + lStack_a0 + (longlong)sVar1;
  iVar10 = *(int *)(lVar5 + (sVar1 - lStack_80) * 4);
  iVar7 = *(int *)(lVar4 + (sVar9 - lStack_88) * 4);
  uStack_b8 = uVar12;
  lStack_78 = param_1;
  iVar6 = (*(code *)*param_7)(lStack_90,uStack_ac,lVar16,uVar12);
  uVar11 = ((iVar10 + iVar7) * param_5 + 0x80 >> 8) + iVar6;
  if (iStack_a4 < *(int *)(lStack_78 + 0x23d0)) {
    iStack_a4 = *(int *)(lStack_78 + 0x23d0);
  }
  if (*(int *)(lStack_78 + 0x23d4) < iStack_b4) {
    iStack_b4 = *(int *)(lStack_78 + 0x23d4);
  }
  iVar10 = sVar9 - param_6;
  if (sVar9 - param_6 < *(int *)(lStack_78 + 0x23d8)) {
    iVar10 = *(int *)(lStack_78 + 0x23d8);
  }
  if (*(int *)(lStack_78 + 0x23dc) < iStack_a8) {
    iStack_a8 = *(int *)(lStack_78 + 0x23dc);
  }
  if (iVar10 < iStack_a8) {
    uVar13 = (ulonglong)(int)uVar12;
    lVar14 = (longlong)iStack_a4 + lStack_a0 + (int)(iVar10 * uVar12);
    uStack_70 = uVar13;
    iVar7 = iStack_b4;
    do {
      sVar9 = (short)iVar10;
      lStack_a0 = lVar14;
      iVar6 = iStack_a4;
      if (iStack_a4 + 2 < iVar7) {
        do {
          puStack_c8 = auStack_60;
          (*(code *)puStack_98[6])(lStack_90,uStack_ac,lVar14);
          lVar15 = 0;
          do {
            iVar8 = iVar6;
            uStack_b0 = auStack_60[lVar15];
            if (uStack_b0 < uVar11) {
              uStack_b0 = uStack_b0 +
                          ((*(int *)(lVar4 + (sVar9 - lStack_88) * 4) +
                           *(int *)(lVar5 + ((short)iVar8 - lStack_80) * 4)) * param_5 + 0x80 >> 8);
              if (uStack_b0 < uVar11) {
                *(short *)(param_3 + 0x30) = sVar9;
                *(short *)(param_3 + 0x32) = (short)iVar8;
                lVar16 = lVar14;
                uVar11 = uStack_b0;
              }
            }
            lVar14 = lVar14 + 1;
            iVar6 = iVar8 + 1;
            lVar15 = lVar15 + 1;
          } while (lVar15 < 3);
          uVar13 = (ulonglong)uStack_b8;
          iVar7 = iStack_b4;
        } while (iVar8 + 3 < iStack_b4);
      }
      if (iVar6 < iVar7) {
        do {
          uStack_b0 = (*(code *)*puStack_98)(lStack_90,uStack_ac,lVar14,uVar13 & 0xffffffff);
          if (uStack_b0 < uVar11) {
            uStack_b0 = uStack_b0 +
                        ((*(int *)(lVar4 + (sVar9 - lStack_88) * 4) +
                         *(int *)(lVar5 + ((short)iVar6 - lStack_80) * 4)) * param_5 + 0x80 >> 8);
            if (uStack_b0 < uVar11) {
              *(short *)(param_3 + 0x30) = sVar9;
              *(short *)(param_3 + 0x32) = (short)iVar6;
              lVar16 = lVar14;
              uVar11 = uStack_b0;
            }
          }
          lVar14 = lVar14 + 1;
          uVar13 = (ulonglong)uStack_b8;
          iVar6 = iVar6 + 1;
          iVar7 = iStack_b4;
        } while (iVar6 < iStack_b4);
      }
      lVar14 = lStack_a0 + uStack_70;
      iVar10 = iVar10 + 1;
      uVar13 = (ulonglong)uStack_b8;
      uVar12 = uStack_b8;
      lStack_a0 = lVar14;
    } while (iVar10 < iStack_a8);
  }
  puStack_c8 = &uStack_b0;
  (*(code *)puStack_98[1])(lStack_90,uStack_ac,lVar16,uVar12);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_50 ^ (ulonglong)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806725c0(longlong param_1,longlong param_2,longlong param_3,short *param_4,int param_5,
void FUN_1806725c0(longlong param_1,longlong param_2,longlong param_3,short *param_4,int param_5,
                  int param_6,uint64_t *param_7,uint64_t param_8,short *param_9)

{
  short sVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int8_t auStack_118 [32];
  uint *puStack_f8;
  int iStack_e8;
  uint uStack_e4;
  int iStack_e0;
  int32_t uStack_dc;
  int iStack_d8;
  int iStack_d4;
  longlong lStack_d0;
  uint64_t *puStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  short *psStack_98;
  uint auStack_90 [6];
  uint auStack_78 [8];
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  sVar9 = *param_4;
  sVar1 = param_4[1];
  iStack_e8 = *(int *)(param_1 + 0x1e70);
  lVar4 = *(longlong *)(param_1 + 0x2398);
  sVar2 = *param_9;
  lVar5 = *(longlong *)(param_1 + 0x23a0);
  lVar12 = (longlong)*(int *)(param_3 + 0x20) + *(longlong *)(param_1 + 0x1e98);
  puStack_c8 = param_7;
  psStack_98 = param_9;
  lStack_d0 = (longlong)*(int *)(param_2 + 0x50) + **(longlong **)(param_2 + 0x48);
  uStack_dc = *(int32_t *)(param_2 + 0x54);
  sVar3 = param_9[1];
  iStack_d8 = sVar9 + param_6;
  *(short *)(param_3 + 0x30) = sVar9;
  iStack_d4 = sVar1 - param_6;
  *(short *)(param_3 + 0x32) = sVar1;
  iStack_e0 = sVar1 + param_6;
  lStack_c0 = (longlong)(sVar3 >> 3);
  lStack_b8 = (longlong)(sVar2 >> 3);
  lVar14 = sVar9 * iStack_e8 + lVar12 + (longlong)sVar1;
  iVar10 = *(int *)(lVar5 + (sVar1 - lStack_c0) * 4);
  iVar7 = *(int *)(lVar4 + (sVar9 - lStack_b8) * 4);
  lStack_a8 = param_1;
  iVar6 = (*(code *)*param_7)(lStack_d0,uStack_dc,lVar14,iStack_e8);
  uVar11 = ((iVar10 + iVar7) * param_5 + 0x80 >> 8) + iVar6;
  if (iStack_d4 < *(int *)(lStack_a8 + 0x23d0)) {
    iStack_d4 = *(int *)(lStack_a8 + 0x23d0);
  }
  if (*(int *)(lStack_a8 + 0x23d4) < iStack_e0) {
    iStack_e0 = *(int *)(lStack_a8 + 0x23d4);
  }
  iVar10 = sVar9 - param_6;
  if (sVar9 - param_6 < *(int *)(lStack_a8 + 0x23d8)) {
    iVar10 = *(int *)(lStack_a8 + 0x23d8);
  }
  if (*(int *)(lStack_a8 + 0x23dc) < iStack_d8) {
    iStack_d8 = *(int *)(lStack_a8 + 0x23dc);
  }
  if (iVar10 < iStack_d8) {
    lStack_a0 = (longlong)iStack_e8;
    lVar12 = (longlong)iStack_d4 + lVar12 + iVar10 * iStack_e8;
    iVar7 = iStack_e0;
    do {
      sVar9 = (short)iVar10;
      lStack_b0 = lVar12;
      iVar6 = iStack_d4;
      if (iStack_d4 + 7 < iVar7) {
        do {
          puStack_f8 = auStack_78;
          (*(code *)puStack_c8[7])(lStack_d0,uStack_dc,lVar12);
          lVar13 = 0;
          do {
            iVar8 = iVar6;
            uStack_e4 = auStack_78[lVar13];
            if (uStack_e4 < uVar11) {
              uStack_e4 = uStack_e4 +
                          ((*(int *)(lVar5 + ((short)iVar8 - lStack_c0) * 4) +
                           *(int *)(lVar4 + (sVar9 - lStack_b8) * 4)) * param_5 + 0x80 >> 8);
              if (uStack_e4 < uVar11) {
                *(short *)(param_3 + 0x30) = sVar9;
                *(short *)(param_3 + 0x32) = (short)iVar8;
                lVar14 = lVar12;
                uVar11 = uStack_e4;
              }
            }
            lVar12 = lVar12 + 1;
            iVar6 = iVar8 + 1;
            lVar13 = lVar13 + 1;
          } while (lVar13 < 8);
          iVar7 = iStack_e0;
        } while (iVar8 + 8 < iStack_e0);
      }
      if (iVar6 + 2 < iVar7) {
        do {
          puStack_f8 = auStack_90;
          (*(code *)puStack_c8[6])(lStack_d0,uStack_dc,lVar12);
          lVar13 = 0;
          do {
            iVar8 = iVar6;
            uStack_e4 = auStack_90[lVar13];
            if (uStack_e4 < uVar11) {
              uStack_e4 = uStack_e4 +
                          ((*(int *)(lVar5 + ((short)iVar8 - lStack_c0) * 4) +
                           *(int *)(lVar4 + (sVar9 - lStack_b8) * 4)) * param_5 + 0x80 >> 8);
              if (uStack_e4 < uVar11) {
                *(short *)(param_3 + 0x30) = sVar9;
                *(short *)(param_3 + 0x32) = (short)iVar8;
                lVar14 = lVar12;
                uVar11 = uStack_e4;
              }
            }
            lVar12 = lVar12 + 1;
            iVar6 = iVar8 + 1;
            lVar13 = lVar13 + 1;
          } while (lVar13 < 3);
          iVar7 = iStack_e0;
        } while (iVar8 + 3 < iStack_e0);
      }
      if (iVar6 < iVar7) {
        do {
          uStack_e4 = (*(code *)*puStack_c8)(lStack_d0,uStack_dc,lVar12,iStack_e8);
          if (uStack_e4 < uVar11) {
            uStack_e4 = uStack_e4 +
                        ((*(int *)(lVar5 + ((short)iVar6 - lStack_c0) * 4) +
                         *(int *)(lVar4 + (sVar9 - lStack_b8) * 4)) * param_5 + 0x80 >> 8);
            if (uStack_e4 < uVar11) {
              *(short *)(param_3 + 0x30) = sVar9;
              *(short *)(param_3 + 0x32) = (short)iVar6;
              lVar14 = lVar12;
              uVar11 = uStack_e4;
            }
          }
          lVar12 = lVar12 + 1;
          iVar6 = iVar6 + 1;
          iVar7 = iStack_e0;
        } while (iVar6 < iStack_e0);
      }
      iVar10 = iVar10 + 1;
      lVar12 = lStack_b0 + lStack_a0;
      lStack_b0 = lVar12;
    } while (iVar10 < iStack_d8);
  }
  puStack_f8 = &uStack_e4;
  (*(code *)puStack_c8[1])(lStack_d0,uStack_dc,lVar14,iStack_e8);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180672a50(longlong param_1,longlong param_2,longlong param_3,short *param_4,int param_5,
void FUN_180672a50(longlong param_1,longlong param_2,longlong param_3,short *param_4,int param_5,
                  int param_6,uint64_t *param_7,uint64_t param_8,short *param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int8_t auStack_e8 [32];
  uint *puStack_c8;
  int iStack_b8;
  int iStack_b4;
  uint uStack_b0;
  int32_t uStack_ac;
  longlong lStack_a8;
  ulonglong uStack_a0;
  longlong lStack_98;
  uint64_t *puStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  short *psStack_68;
  short asStack_60 [8];
  ulonglong uStack_50;
  
  uStack_50 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  iVar1 = *(int *)(param_1 + 0x1e70);
  lStack_70 = *(longlong *)(param_1 + 0x23a0);
  uStack_ac = *(int32_t *)(param_2 + 0x54);
  lVar7 = (longlong)*(int *)(param_2 + 0x50) + **(longlong **)(param_2 + 0x48);
  psStack_68 = param_9;
  puStack_90 = param_7;
  asStack_60[0] = -1;
  asStack_60[1] = 0;
  asStack_60[2] = 0;
  asStack_60[3] = -1;
  asStack_60[4] = 0;
  asStack_60[5] = 1;
  asStack_60[6] = 1;
  asStack_60[7] = 0;
  lStack_78 = *(longlong *)(param_1 + 0x2398);
  lVar9 = (longlong)(*param_4 * iVar1) + (longlong)*(int *)(param_3 + 0x20) +
          *(longlong *)(param_1 + 0x1e98) + (longlong)param_4[1];
  lStack_80 = (longlong)(param_9[1] >> 3);
  lStack_88 = (longlong)(*param_9 >> 3);
  iVar11 = *(int *)(lStack_78 + (*param_4 - lStack_88) * 4);
  iVar2 = *(int *)(lStack_70 + (param_4[1] - lStack_80) * 4);
  lStack_a8 = lVar9;
  lStack_98 = lVar7;
  iVar4 = (*(code *)*param_7)(lVar7,uStack_ac);
  uVar13 = ((iVar11 + iVar2) * param_5 + 0x80 >> 8) + iVar4;
  iStack_b4 = 0;
  if (0 < param_6) {
    do {
      uVar8 = 0;
      iVar11 = -1;
      uVar12 = 0xffffffffffffffff;
      iStack_b8 = -1;
      uStack_a0 = 0xffffffffffffffff;
      uVar10 = uVar8;
      do {
        sVar6 = asStack_60[uVar8 * 2 + 1] + param_4[1];
        sVar5 = asStack_60[uVar8 * 2] + *param_4;
        iVar4 = (int)uVar10;
        uVar3 = uVar13;
        iVar2 = iStack_b8;
        uVar10 = uStack_a0;
        if ((((*(int *)(param_1 + 0x23d0) < (int)sVar6) && ((int)sVar6 < *(int *)(param_1 + 0x23d4))
             ) && (*(int *)(param_1 + 0x23d8) < (int)sVar5)) &&
           (((int)sVar5 < *(int *)(param_1 + 0x23dc) &&
            ((uStack_b0 = (*(code *)*puStack_90)
                                    (lStack_98,uStack_ac,
                                     (asStack_60[uVar8 * 2] * iVar1 + (int)asStack_60[uVar8 * 2 + 1]
                                     ) + lStack_a8,iVar1), uVar13 <= uStack_b0 ||
             (uStack_b0 = uStack_b0 +
                          ((*(int *)(lStack_78 + (sVar5 - lStack_88) * 4) +
                           *(int *)(lStack_70 + (sVar6 - lStack_80) * 4)) * param_5 + 0x80 >> 8),
             uVar12 = uVar8, uVar3 = uStack_b0, iVar11 = iVar4, iVar2 = iVar4, uVar10 = uVar8,
             uVar13 <= uStack_b0)))))) {
          uVar12 = uStack_a0;
          uVar3 = uVar13;
          iVar11 = iStack_b8;
          iVar2 = iStack_b8;
          uVar10 = uStack_a0;
        }
        uStack_a0 = uVar10;
        iStack_b8 = iVar2;
        uVar13 = uVar3;
        uVar10 = (ulonglong)(iVar4 + 1U);
        uVar8 = uVar8 + 1;
      } while ((int)(iVar4 + 1U) < 4);
      param_7 = puStack_90;
      lVar7 = lStack_98;
      lVar9 = lStack_a8;
      if (iVar11 == -1) break;
      sVar5 = asStack_60[uVar12 * 2];
      *param_4 = *param_4 + sVar5;
      sVar6 = asStack_60[uVar12 * 2 + 1];
      param_4[1] = param_4[1] + sVar6;
      lVar9 = lStack_a8 + (sVar5 * iVar1 + (int)sVar6);
      iStack_b4 = iStack_b4 + 1;
      lStack_a8 = lVar9;
    } while (iStack_b4 < param_6);
  }
  puStack_c8 = &uStack_b0;
  (*(code *)param_7[1])(lVar7,uStack_ac,lVar9,iVar1);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_50 ^ (ulonglong)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



