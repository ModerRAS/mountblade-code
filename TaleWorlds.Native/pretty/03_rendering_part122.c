#include "TaleWorlds.Native.Split.h"

// 03_rendering_part122.c - 1 个函数

// 函数: void FUN_18033ddb0(uint64_t param_1,longlong param_2,longlong param_3)
void FUN_18033ddb0(uint64_t param_1,longlong param_2,longlong param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t *puVar3;
  int8_t *puVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  int16_t *puVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  int32_t uVar18;
  
  uVar10 = 0;
  puVar3 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x18,0x13);
  *(int8_t *)puVar3 = 0;
  FUN_18064e990(puVar3);
  *puVar3 = 0x65786950;
  puVar3[1] = 0x68735f6c;
  puVar3[2] = 0x72656461;
  puVar3[3] = 0x706e695f;
  *(uint64_t *)(puVar3 + 4) = 0x657079745f7475;
  iVar17 = *(int *)(param_2 + 0x10);
  iVar11 = iVar17 + 0x11;
  FUN_1806277c0(param_2,iVar11);
  puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar5 = 0x20666923;
  puVar5[1] = 0x45584950;
  puVar5[2] = 0x48535f4c;
  puVar5[3] = 0x52454441;
  *(int16_t *)(puVar5 + 4) = 10;
  *(int *)(param_2 + 0x10) = iVar11;
  if (*(char *)(param_3 + 0x10f8) == '\0') {
    FUN_1806277c0(param_2,iVar17 + 0x39);
    puVar6 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar6 = 0x504c412120666923;
    puVar6[1] = 0x20545345545f4148;
    *(int32_t *)(puVar6 + 2) = 0x21202626;
    *(int32_t *)((longlong)puVar6 + 0x14) = 0x5f455355;
    *(int32_t *)(puVar6 + 3) = 0x4f4f4d53;
    *(int32_t *)((longlong)puVar6 + 0x1c) = 0x465f4854;
    puVar6[4] = 0xa54554f5f454441;
    *(int8_t *)(puVar6 + 5) = 0;
    *(int *)(param_2 + 0x10) = iVar17 + 0x39;
    FUN_1806277c0(param_2,iVar17 + 0x4d);
    puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar5 = 0x7261655b;
    puVar5[1] = 0x6564796c;
    puVar5[2] = 0x73687470;
    puVar5[3] = 0x636e6574;
    puVar5[4] = 0xa5d6c69;
    *(int8_t *)(puVar5 + 5) = 0;
    *(int *)(param_2 + 0x10) = iVar17 + 0x4d;
    iVar11 = iVar17 + 0x54;
    FUN_1806277c0(param_2,iVar11);
    *(uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) =
         0xa6669646e6523;
    *(int *)(param_2 + 0x10) = iVar11;
  }
  FUN_1806277c0(param_2,iVar11 + 0x19);
  puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar5 = 0x4f5f5350;
  puVar5[1] = 0x55505455;
  puVar5[2] = 0x4f545f54;
  puVar5[3] = 0x4553555f;
  *(uint64_t *)(puVar5 + 4) = 0x73705f6e69616d20;
  *(int16_t *)(puVar5 + 6) = 0x28;
  *(int *)(param_2 + 0x10) = iVar11 + 0x19;
  FUN_1806277c0(param_2,iVar11 + 0x30);
  puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  uVar18 = puVar3[1];
  uVar1 = puVar3[2];
  uVar2 = puVar3[3];
  *puVar5 = *puVar3;
  puVar5[1] = uVar18;
  puVar5[2] = uVar1;
  puVar5[3] = uVar2;
  *(uint64_t *)(puVar5 + 4) = *(uint64_t *)(puVar3 + 4);
  *(int *)(param_2 + 0x10) = iVar11 + 0x30;
  FUN_1806277c0(param_2,iVar11 + 0x35);
  puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar5 = 0x296e4920;
  *(int16_t *)(puVar5 + 1) = 10;
  *(int *)(param_2 + 0x10) = iVar11 + 0x35;
  FUN_1806277c0(param_2,iVar11 + 0x37);
  puVar7 = (int16_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar7 = 0xa7b;
  *(int8_t *)(puVar7 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar11 + 0x37;
  FUN_1806277c0(param_2,iVar11 + 0x67);
  puVar6 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar6 = 0x5054554f5f535009;
  puVar6[1] = 0x53555f4f545f5455;
  *(int32_t *)(puVar6 + 2) = 0x754f2045;
  *(int32_t *)((longlong)puVar6 + 0x14) = 0x74757074;
  *(int32_t *)(puVar6 + 3) = 0x28203d20;
  *(int32_t *)((longlong)puVar6 + 0x1c) = 0x4f5f5350;
  *(int32_t *)(puVar6 + 4) = 0x55505455;
  *(int32_t *)((longlong)puVar6 + 0x24) = 0x4f545f54;
  *(int32_t *)(puVar6 + 5) = 0x4553555f;
  *(int32_t *)((longlong)puVar6 + 0x2c) = 0xa3b3029;
  *(int8_t *)(puVar6 + 6) = 0;
  *(int *)(param_2 + 0x10) = iVar11 + 0x67;
  FUN_1806277c0(param_2,iVar11 + 0xae);
  puVar6 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar6 = 0x7869705f72655009;
  puVar6[1] = 0x69746174735f6c65;
  puVar6[2] = 0x6261697261765f63;
  puVar6[3] = 0x735f70702073656c;
  puVar6[4] = 0x203d206369746174;
  puVar6[5] = 0x7869705f72655028;
  *(int32_t *)(puVar6 + 6) = 0x735f6c65;
  *(int32_t *)((longlong)puVar6 + 0x34) = 0x69746174;
  *(int32_t *)(puVar6 + 7) = 0x61765f63;
  *(int32_t *)((longlong)puVar6 + 0x3c) = 0x62616972;
  puVar6[8] = 0xa3b302973656c;
  *(int *)(param_2 + 0x10) = iVar11 + 0xae;
  FUN_1806277c0(param_2,iVar11 + 0x102);
  puVar6 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar6 = 0x7869705f72655009;
  puVar6[1] = 0x6669646f6d5f6c65;
  puVar6[2] = 0x61765f656c626169;
  puVar6[3] = 0x2073656c62616972;
  puVar6[4] = 0x6669646f6d5f7070;
  puVar6[5] = 0x203d20656c626169;
  *(int32_t *)(puVar6 + 6) = 0x72655028;
  *(int32_t *)((longlong)puVar6 + 0x34) = 0x7869705f;
  *(int32_t *)(puVar6 + 7) = 0x6d5f6c65;
  *(int32_t *)((longlong)puVar6 + 0x3c) = 0x6669646f;
  *(int32_t *)(puVar6 + 8) = 0x6c626169;
  *(int32_t *)((longlong)puVar6 + 0x44) = 0x61765f65;
  *(int32_t *)(puVar6 + 9) = 0x62616972;
  *(int32_t *)((longlong)puVar6 + 0x4c) = 0x2973656c;
  *(int32_t *)(puVar6 + 10) = 0xa0a3b30;
  *(int8_t *)((longlong)puVar6 + 0x54) = 0;
  *(int *)(param_2 + 0x10) = iVar11 + 0x102;
  FUN_1806277c0(param_2,iVar11 + 0x14d);
  puVar6 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar6 = 0x7869705f72655009;
  puVar6[1] = 0x6c697875615f6c65;
  puVar6[2] = 0x7261765f79726169;
  puVar6[3] = 0x702073656c626169;
  puVar6[4] = 0x203d207875615f70;
  puVar6[5] = 0x7869705f72655028;
  *(int32_t *)(puVar6 + 6) = 0x615f6c65;
  *(int32_t *)((longlong)puVar6 + 0x34) = 0x6c697875;
  *(int32_t *)(puVar6 + 7) = 0x79726169;
  *(int32_t *)((longlong)puVar6 + 0x3c) = 0x7261765f;
  puVar6[8] = 0x302973656c626169;
  *(int32_t *)(puVar6 + 9) = 0xa0a3b;
  *(int *)(param_2 + 0x10) = iVar11 + 0x14d;
  iVar11 = iVar11 + 0x184;
  FUN_1806277c0(param_2,iVar11);
  puVar6 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar6 = 0x616c75636c616309;
  puVar6[1] = 0x705f7265705f6574;
  puVar6[2] = 0x6174735f6c657869;
  puVar6[3] = 0x697261765f636974;
  uVar18 = 0x656c6261;
  *(int32_t *)(puVar6 + 4) = 0x656c6261;
  *(int32_t *)((longlong)puVar6 + 0x24) = 0x6e492873;
  *(int32_t *)(puVar6 + 5) = 0x7070202c;
  *(int32_t *)((longlong)puVar6 + 0x2c) = 0x6174735f;
  puVar6[6] = 0xa0a3b29636974;
  *(int *)(param_2 + 0x10) = iVar11;
  lVar8 = *(longlong *)(param_3 + 0x498) - *(longlong *)(param_3 + 0x490);
  lVar13 = lVar8 >> 0x3f;
  uVar15 = uVar10;
  uVar16 = uVar10;
  if (lVar8 / 0x98 + lVar13 != lVar13) {
    do {
      iVar12 = iVar11 + 1;
      FUN_1806277c0(param_2,iVar12);
      *(int16_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 9;
      *(int *)(param_2 + 0x10) = iVar12;
      lVar13 = *(longlong *)(param_3 + 0x490);
      iVar17 = *(int *)(lVar13 + 0x10 + uVar16);
      if (0 < iVar17) {
        FUN_1806277c0(param_2,iVar12 + iVar17);
                    // WARNING: Subroutine does not return
        memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
               *(uint64_t *)(lVar13 + 8 + uVar16),(longlong)(*(int *)(lVar13 + 0x10 + uVar16) + 1)
              );
      }
      iVar11 = iVar11 + 7;
      uVar18 = FUN_1806277c0(param_2,iVar11);
      puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
      *puVar5 = 0x296e4928;
      *(int16_t *)(puVar5 + 1) = 0xa3b;
      *(int8_t *)((longlong)puVar5 + 6) = 0;
      *(int *)(param_2 + 0x10) = iVar11;
      uVar9 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar9;
      uVar16 = uVar16 + 0x98;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)((*(longlong *)(param_3 + 0x498) - *(longlong *)(param_3 + 0x490)) / 0x98));
  }
  do {
    if (uVar10 != 5) {
      if (*(int *)(param_3 + (uVar10 * 0x26 + 0x290) * 4) != 0) {
        iVar17 = *(int *)(param_2 + 0x10);
        iVar12 = iVar17 + 1;
        FUN_1806277c0(param_2,iVar12);
        *(int16_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 9;
        *(int *)(param_2 + 0x10) = iVar12;
        iVar11 = *(int *)(param_3 + (uVar10 * 0x26 + 0x290) * 4);
        if (0 < iVar11) {
          FUN_1806277c0(param_2,iVar12 + iVar11);
                    // WARNING: Subroutine does not return
          memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
                 *(uint64_t *)(param_3 + (uVar10 * 0x26 + 0x28e) * 4),
                 (longlong)(*(int *)(param_3 + (uVar10 * 0x26 + 0x290) * 4) + 1));
        }
        FUN_1806277c0(param_2,iVar17 + 0x20);
        puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
        *puVar5 = 0x206e4928;
        puVar5[1] = 0x7070202c;
        puVar5[2] = 0x6174735f;
        puVar5[3] = 0x20636974;
        puVar5[4] = 0x7070202c;
        puVar5[5] = 0x646f6d5f;
        puVar5[6] = 0x61696669;
        puVar5[7] = 0x656c62;
        *(int *)(param_2 + 0x10) = iVar17 + 0x20;
        iVar11 = iVar17 + 0x28;
        if (uVar10 - 7 < 2) {
          FUN_1806277c0(param_2,iVar11);
          puVar6 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8))
          ;
          *puVar6 = 0x74757074754f202c;
        }
        else {
          FUN_1806277c0(param_2,iVar11);
          puVar6 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8))
          ;
          *puVar6 = 0x7875615f7070202c;
        }
        *(int8_t *)(puVar6 + 1) = 0;
        *(int *)(param_2 + 0x10) = iVar11;
        uVar18 = FUN_1806277c0(param_2,iVar17 + 0x2b);
        *(int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0xa3b29
        ;
        *(int *)(param_2 + 0x10) = iVar17 + 0x2b;
      }
      if (uVar10 == 1) {
        uVar18 = FUN_180344f00(uVar18,param_2,param_3);
      }
    }
    uVar10 = uVar10 + 1;
  } while ((longlong)uVar10 < 9);
  iVar17 = 0;
  lVar8 = *(longlong *)(param_3 + 0x10c0) - *(longlong *)(param_3 + 0x10b8);
  lVar13 = lVar8 >> 0x3f;
  if (lVar8 / 0x98 + lVar13 != lVar13) {
    lVar13 = 0;
    iVar11 = *(int *)(param_2 + 0x10);
    do {
      iVar12 = iVar11 + 1;
      if (iVar12 != 0) {
        uVar9 = iVar11 + 2;
        if (*(longlong *)(param_2 + 8) == 0) {
          if ((int)uVar9 < 0x10) {
            uVar9 = 0x10;
          }
          puVar4 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar9,0x13);
          *(int8_t **)(param_2 + 8) = puVar4;
          *puVar4 = 0;
          uVar10 = *(ulonglong *)(param_2 + 8);
          uVar15 = uVar10 & 0xffffffffffc00000;
          if (uVar15 == 0) {
            uVar9 = 0;
          }
          else {
            lVar8 = uVar15 + 0x80 + (uVar10 - uVar15 >> 0x10) * 0x50;
LAB_18033e4da:
            puVar14 = (uint *)(lVar8 - (ulonglong)*(uint *)(lVar8 + 4));
            if ((*(byte *)((longlong)puVar14 + 0xe) & 2) == 0) {
              uVar9 = puVar14[7];
              if (0x3ffffff < uVar9) {
                uVar9 = *puVar14 << 0x10;
              }
            }
            else {
              uVar9 = puVar14[7];
              if (uVar9 < 0x4000000) {
                uVar16 = (ulonglong)uVar9;
              }
              else {
                uVar16 = (ulonglong)*puVar14 << 0x10;
              }
              if (0x3ffffff < uVar9) {
                uVar9 = *puVar14 << 0x10;
              }
              uVar9 = uVar9 - (int)((uVar10 - (((longlong)((longlong)puVar14 + (-0x80 - uVar15)) /
                                               0x50) * 0x10000 + uVar15)) % uVar16);
            }
          }
        }
        else {
          if (uVar9 <= *(uint *)(param_2 + 0x18)) goto LAB_18033e55d;
          uVar10 = FUN_18062b8b0(_DAT_180c8ed18,*(longlong *)(param_2 + 8),uVar9,0x10,0x13);
          *(ulonglong *)(param_2 + 8) = uVar10;
          uVar15 = uVar10 & 0xffffffffffc00000;
          if (uVar15 != 0) {
            lVar8 = (uVar10 - uVar15 >> 0x10) * 0x50 + 0x80 + uVar15;
            goto LAB_18033e4da;
          }
          uVar9 = 0;
        }
        *(uint *)(param_2 + 0x18) = uVar9;
      }
LAB_18033e55d:
      *(int16_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 9;
      *(int *)(param_2 + 0x10) = iVar12;
      lVar8 = lVar13 * 0x98 + *(longlong *)(param_3 + 0x10b8);
      if (0 < *(int *)(lVar8 + 0x10)) {
        iVar12 = *(int *)(lVar8 + 0x10) + iVar12;
        if (iVar12 == 0) goto LAB_18033e6d2;
        uVar9 = iVar12 + 1;
        if (*(longlong *)(param_2 + 8) == 0) {
          if ((int)uVar9 < 0x10) {
            uVar9 = 0x10;
          }
          puVar4 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar9,0x13);
          *(int8_t **)(param_2 + 8) = puVar4;
          *puVar4 = 0;
          uVar10 = *(ulonglong *)(param_2 + 8);
          uVar15 = uVar10 & 0xffffffffffc00000;
          if (uVar15 == 0) {
            uVar9 = 0;
          }
          else {
            lVar13 = uVar15 + 0x80 + (uVar10 - uVar15 >> 0x10) * 0x50;
LAB_18033e648:
            puVar14 = (uint *)(lVar13 - (ulonglong)*(uint *)(lVar13 + 4));
            if ((*(byte *)((longlong)puVar14 + 0xe) & 2) == 0) {
              uVar9 = puVar14[7];
              if (0x3ffffff < uVar9) {
                uVar9 = *puVar14 << 0x10;
              }
            }
            else {
              uVar9 = puVar14[7];
              if (uVar9 < 0x4000000) {
                uVar16 = (ulonglong)uVar9;
              }
              else {
                uVar16 = (ulonglong)*puVar14 << 0x10;
              }
              if (0x3ffffff < uVar9) {
                uVar9 = *puVar14 << 0x10;
              }
              uVar9 = uVar9 - (int)((uVar10 - (((longlong)((longlong)puVar14 + (-0x80 - uVar15)) /
                                               0x50) * 0x10000 + uVar15)) % uVar16);
            }
          }
        }
        else {
          if (uVar9 <= *(uint *)(param_2 + 0x18)) goto LAB_18033e6d2;
          uVar10 = FUN_18062b8b0(_DAT_180c8ed18,*(longlong *)(param_2 + 8),uVar9,0x10,0x13);
          *(ulonglong *)(param_2 + 8) = uVar10;
          uVar15 = uVar10 & 0xffffffffffc00000;
          if (uVar15 != 0) {
            lVar13 = (uVar10 - uVar15 >> 0x10) * 0x50 + 0x80 + uVar15;
            goto LAB_18033e648;
          }
          uVar9 = 0;
        }
        *(uint *)(param_2 + 0x18) = uVar9;
LAB_18033e6d2:
                    // WARNING: Subroutine does not return
        memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
               *(uint64_t *)(lVar8 + 8),(longlong)(*(int *)(lVar8 + 0x10) + 1));
      }
      iVar12 = iVar11 + 0x33;
      if (iVar12 != 0) {
        uVar9 = iVar11 + 0x34;
        if (*(longlong *)(param_2 + 8) == 0) {
          if ((int)uVar9 < 0x10) {
            uVar9 = 0x10;
          }
          puVar4 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar9,0x13);
          *(int8_t **)(param_2 + 8) = puVar4;
          *puVar4 = 0;
          uVar10 = *(ulonglong *)(param_2 + 8);
          uVar15 = uVar10 & 0xffffffffffc00000;
          if (uVar15 == 0) {
            uVar9 = 0;
          }
          else {
            lVar8 = uVar15 + 0x80 + (uVar10 - uVar15 >> 0x10) * 0x50;
LAB_18033e7b1:
            puVar14 = (uint *)(lVar8 - (ulonglong)*(uint *)(lVar8 + 4));
            if ((*(byte *)((longlong)puVar14 + 0xe) & 2) == 0) {
              uVar9 = puVar14[7];
              if (0x3ffffff < uVar9) {
                uVar9 = *puVar14 << 0x10;
              }
            }
            else {
              uVar9 = puVar14[7];
              if (uVar9 < 0x4000000) {
                uVar16 = (ulonglong)uVar9;
              }
              else {
                uVar16 = (ulonglong)*puVar14 << 0x10;
              }
              if (0x3ffffff < uVar9) {
                uVar9 = *puVar14 << 0x10;
              }
              uVar9 = uVar9 - (int)((uVar10 - (((longlong)((longlong)puVar14 + (-0x80 - uVar15)) /
                                               0x50) * 0x10000 + uVar15)) % uVar16);
            }
          }
        }
        else {
          if (uVar9 <= *(uint *)(param_2 + 0x18)) goto LAB_18033e834;
          uVar10 = FUN_18062b8b0(_DAT_180c8ed18,*(longlong *)(param_2 + 8),uVar9,0x10,0x13);
          *(ulonglong *)(param_2 + 8) = uVar10;
          uVar15 = uVar10 & 0xffffffffffc00000;
          if (uVar15 != 0) {
            lVar8 = (uVar10 - uVar15 >> 0x10) * 0x50 + 0x80 + uVar15;
            goto LAB_18033e7b1;
          }
          uVar9 = 0;
        }
        *(uint *)(param_2 + 0x18) = uVar9;
      }
LAB_18033e834:
      puVar6 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
      *puVar6 = 0x7070202c206e4928;
      puVar6[1] = 0x206369746174735f;
      puVar6[2] = 0x646f6d5f7070202c;
      puVar6[3] = 0x2c656c6261696669;
      *(int32_t *)(puVar6 + 4) = 0x5f707020;
      *(int32_t *)((longlong)puVar6 + 0x24) = 0x2c787561;
      *(int32_t *)(puVar6 + 5) = 0x74754f20;
      *(int32_t *)((longlong)puVar6 + 0x2c) = 0x29747570;
      *(int16_t *)(puVar6 + 6) = 0xa3b;
      *(int8_t *)((longlong)puVar6 + 0x32) = 0;
      *(int *)(param_2 + 0x10) = iVar12;
      iVar17 = iVar17 + 1;
      lVar13 = lVar13 + 1;
      iVar11 = iVar12;
    } while ((ulonglong)(longlong)iVar17 <
             (ulonglong)((*(longlong *)(param_3 + 0x10c0) - *(longlong *)(param_3 + 0x10b8)) / 0x98)
            );
  }
  iVar17 = *(int *)(param_2 + 0x10);
  FUN_1806277c0(param_2,iVar17 + 0x21);
  puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar5 = 0x64666923;
  puVar5[1] = 0x53206665;
  puVar5[2] = 0x45545359;
  puVar5[3] = 0x48535f4d;
  puVar5[4] = 0x565f574f;
  puVar5[5] = 0x45545245;
  puVar5[6] = 0x4f435f58;
  puVar5[7] = 0x53524f4c;
  *(int16_t *)(puVar5 + 8) = 10;
  *(int *)(param_2 + 0x10) = iVar17 + 0x21;
  FUN_1806277c0(param_2,iVar17 + 0xa3);
  puVar6 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar6 = 0x414d282066692309;
  puVar6[1] = 0x495f4c4149524554;
  puVar6[2] = 0x4941525245545f44;
  puVar6[3] = 0x5f796d203d21204e;
  puVar6[4] = 0x6c6169726574616d;
  puVar6[5] = 0x202626202964695f;
  puVar6[6] = 0x4149524554414d28;
  puVar6[7] = 0x4645445f44495f4c;
  puVar6[8] = 0x3d21204445525245;
  puVar6[9] = 0x6574616d5f796d20;
  puVar6[10] = 0x2964695f6c616972;
  puVar6[0xb] = 0x54414d2820262620;
  *(int32_t *)(puVar6 + 0xc) = 0x41495245;
  *(int32_t *)((longlong)puVar6 + 100) = 0x44495f4c;
  *(int32_t *)(puVar6 + 0xd) = 0x4152475f;
  *(int32_t *)((longlong)puVar6 + 0x6c) = 0x21205353;
  *(int32_t *)(puVar6 + 0xe) = 0x796d203d;
  *(int32_t *)((longlong)puVar6 + 0x74) = 0x74616d5f;
  *(int32_t *)(puVar6 + 0xf) = 0x61697265;
  *(int32_t *)((longlong)puVar6 + 0x7c) = 0x64695f6c;
  *(int16_t *)(puVar6 + 0x10) = 0xa29;
  *(int8_t *)((longlong)puVar6 + 0x82) = 0;
  *(int *)(param_2 + 0x10) = iVar17 + 0xa3;
  FUN_1806277c0(param_2,iVar17 + 0xeb);
  puVar6 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar6 = 0x74757074754f0909;
  puVar6[1] = 0x6f6c6f434247522e;
  puVar6[2] = 0x3d20616267722e72;
  puVar6[3] = 0x73616d5f74656720;
  puVar6[4] = 0x747265765f64656b;
  puVar6[5] = 0x726f6c6f635f7865;
  *(int32_t *)(puVar6 + 6) = 0x2e6e4928;
  *(int32_t *)((longlong)puVar6 + 0x34) = 0x74726576;
  *(int32_t *)(puVar6 + 7) = 0x635f7865;
  *(int32_t *)((longlong)puVar6 + 0x3c) = 0x726f6c6f;
  puVar6[8] = 0xa3b29616267722e;
  *(int8_t *)(puVar6 + 9) = 0;
  *(int *)(param_2 + 0x10) = iVar17 + 0xeb;
  FUN_1806277c0(param_2,iVar17 + 0xf3);
  puVar6 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar6 = 0xa6669646e652309;
  *(int8_t *)(puVar6 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar17 + 0xf3;
  FUN_1806277c0(param_2,iVar17 + 0xfa);
  *(uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) =
       0xa6669646e6523;
  *(int *)(param_2 + 0x10) = iVar17 + 0xfa;
  FUN_1806277c0(param_2,iVar17 + 0x10a);
  puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar5 = 0x74657209;
  puVar5[1] = 0x206e7275;
  puVar5[2] = 0x7074754f;
  puVar5[3] = 0xa3b7475;
  *(int8_t *)(puVar5 + 4) = 0;
  *(int *)(param_2 + 0x10) = iVar17 + 0x10a;
  FUN_1806277c0(param_2,iVar17 + 0x10c);
  puVar7 = (int16_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar7 = 0xa7d;
  *(int8_t *)(puVar7 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar17 + 0x10c;
  FUN_1806277c0(param_2,iVar17 + 0x113);
  *(uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) =
       0xa6669646e6523;
  *(int *)(param_2 + 0x10) = iVar17 + 0x113;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



