#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part163.c - 4 个函数

// 函数: void FUN_18014b7f0(longlong param_1,uint64_t param_2)
void FUN_18014b7f0(longlong param_1,uint64_t param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int16_t uVar4;
  int16_t *puVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  int32_t *puVar9;
  int32_t *puVar10;
  int32_t *puVar11;
  int16_t *puVar12;
  longlong lVar13;
  longlong lVar14;
  int32_t *puVar15;
  longlong lStackX_18;
  int iStackX_20;
  int32_t *puStack_1a0;
  int32_t *puStack_198;
  int32_t *puStack_190;
  int32_t uStack_188;
  int32_t *puStack_180;
  int32_t *puStack_178;
  int32_t *puStack_170;
  int32_t uStack_168;
  int16_t *puStack_160;
  int16_t *puStack_158;
  int16_t *puStack_150;
  int32_t uStack_148;
  longlong lStack_140;
  int32_t *puStack_138;
  int32_t *puStack_130;
  int32_t *puStack_128;
  longlong lStack_120;
  longlong lStack_118;
  int32_t uStack_108;
  int32_t uStack_104;
  int32_t *puStack_100;
  int32_t uStack_f8;
  int32_t uStack_f4;
  int32_t uStack_f0;
  int32_t uStack_ec;
  int32_t *puStack_e8;
  int32_t uStack_e0;
  int32_t uStack_dc;
  int16_t uStack_d8;
  int32_t uStack_d0;
  int16_t *puStack_c8;
  int32_t uStack_b8;
  int32_t uStack_b4;
  uint64_t uStack_b0;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  uint64_t uStack_98;
  int32_t uStack_90;
  int32_t uStack_8c;
  uint64_t uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  puStack_1a0 = (int32_t *)0x0;
  puStack_198 = (int32_t *)0x0;
  puStack_190 = (int32_t *)0x0;
  uStack_188 = 3;
  puStack_180 = (int32_t *)0x0;
  puStack_178 = (int32_t *)0x0;
  puStack_170 = (int32_t *)0x0;
  uStack_168 = 3;
  puStack_160 = (int16_t *)0x0;
  puStack_158 = (int16_t *)0x0;
  puStack_150 = (int16_t *)0x0;
  uStack_148 = 3;
  FUN_18014e7d0(&puStack_1a0,
                ((*(longlong *)(param_1 + 0x70) - *(longlong *)(param_1 + 0x68)) / 0x18) * 3);
  FUN_18014e8b0(&puStack_180,
                ((*(longlong *)(param_1 + 0x70) - *(longlong *)(param_1 + 0x68)) / 0x18) * 3);
  lVar13 = *(longlong *)(param_1 + 0x70);
  lVar14 = (lVar13 - *(longlong *)(param_1 + 0x68)) / 0x18;
  if (lVar14 != 0) {
    puStack_160 = (int16_t *)
                  FUN_18062b420(_DAT_180c8ed18,lVar14 * 2,CONCAT71((int7)((ulonglong)lVar13 >> 8),3)
                               );
    puStack_150 = puStack_160 + lVar14;
    lVar13 = *(longlong *)(param_1 + 0x70);
    puStack_158 = puStack_160;
  }
  iStackX_20 = 0;
  lStack_120 = *(longlong *)(param_1 + 0x68);
  lVar14 = lVar13 - lStack_120 >> 0x3f;
  puVar9 = puStack_180;
  puVar15 = puStack_178;
  puVar10 = puStack_1a0;
  puVar11 = puStack_198;
  if ((lVar13 - lStack_120) / 0x18 + lVar14 != lVar14) {
    lStack_140 = 0;
    do {
      puVar5 = puStack_158;
      puVar7 = (int32_t *)0x0;
      lVar13 = *(longlong *)(param_1 + 0x28);
      puStack_138 = (int32_t *)
                    ((longlong)*(int *)(lStack_120 + 4 + lStack_140 * 0x18) * 0x10 + lVar13);
      puStack_130 = (int32_t *)
                    ((longlong)*(int *)(lStack_120 + 8 + lStack_140 * 0x18) * 0x10 + lVar13);
      puStack_128 = (int32_t *)
                    ((longlong)*(int *)(lStack_120 + 0xc + lStack_140 * 0x18) * 0x10 + lVar13);
      lVar13 = ((longlong)puVar11 - (longlong)puVar10) / 6 +
               ((longlong)puVar11 - (longlong)puVar10 >> 0x3f);
      lVar13 = (lVar13 >> 1) - (lVar13 >> 0x3f);
      if (puVar15 < puStack_170) {
        *puVar15 = (int)lVar13;
        puVar7 = puVar9;
      }
      else {
        lStack_118 = (longlong)puVar15 - (longlong)puVar9;
        if (lStack_118 >> 2 == 0) {
          lStackX_18 = 1;
LAB_18014ba35:
          puVar7 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,lStackX_18 * 4,(int8_t)uStack_168)
          ;
        }
        else {
          lStackX_18 = (lStack_118 >> 2) * 2;
          if (lStackX_18 != 0) goto LAB_18014ba35;
        }
        if (puVar9 != puVar15) {
                    // WARNING: Subroutine does not return
          memmove(puVar7,puVar9,lStack_118);
        }
        *puVar7 = (int)lVar13;
        if (puVar9 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar9);
        }
        puStack_170 = puVar7 + lStackX_18;
        puStack_180 = puVar7;
        puVar15 = puVar7;
      }
      puVar8 = puVar15 + 1;
      puVar9 = (int32_t *)0x0;
      uVar1 = puStack_138[2];
      uVar2 = puStack_138[1];
      uVar3 = *puStack_138;
      puStack_178 = puVar8;
      if (puVar11 < puStack_190) {
        *puVar11 = uVar3;
        puVar11[1] = uVar2;
        puVar11[2] = uVar1;
        puVar9 = puVar10;
        puVar6 = puVar11;
      }
      else {
        if (lVar13 == 0) {
          lVar13 = 1;
LAB_18014baf6:
          puVar9 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,lVar13 * 0xc,(int8_t)uStack_188);
        }
        else {
          lVar13 = lVar13 * 2;
          if (lVar13 != 0) goto LAB_18014baf6;
        }
        puVar6 = puVar9;
        if (puVar10 != puVar11) {
          lVar14 = (longlong)puVar10 - (longlong)puVar9;
          do {
            *puVar6 = *(int32_t *)(lVar14 + (longlong)puVar6);
            puVar6[1] = *(int32_t *)((longlong)puVar6 + lVar14 + 4);
            puVar6[2] = *(int32_t *)((longlong)puVar6 + lVar14 + 8);
            puVar6 = puVar6 + 3;
          } while ((int32_t *)(lVar14 + (longlong)puVar6) != puVar11);
        }
        *puVar6 = uVar3;
        puVar6[1] = uVar2;
        puVar6[2] = uVar1;
        if (puVar10 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar10);
        }
        puStack_190 = puVar9 + lVar13 * 3;
        puStack_1a0 = puVar9;
      }
      puVar11 = puVar6 + 3;
      lVar13 = ((longlong)puVar11 - (longlong)puVar9) / 6 +
               ((longlong)puVar11 - (longlong)puVar9 >> 0x3f);
      lVar13 = (lVar13 >> 1) - (lVar13 >> 0x3f);
      puStack_198 = puVar11;
      if (puVar8 < puStack_170) {
        puVar15 = puVar15 + 2;
        *puVar8 = (int)lVar13;
        puVar10 = puVar7;
      }
      else {
        puStack_138 = (int32_t *)((longlong)puVar8 - (longlong)puVar7);
        if ((longlong)puStack_138 >> 2 == 0) {
          lStackX_18 = 1;
LAB_18014bbf9:
          puVar10 = (int32_t *)
                    FUN_18062b420(_DAT_180c8ed18,lStackX_18 * 4,(int8_t)uStack_168);
        }
        else {
          lStackX_18 = ((longlong)puStack_138 >> 2) * 2;
          if (lStackX_18 != 0) goto LAB_18014bbf9;
          puVar10 = (int32_t *)0x0;
        }
        if (puVar7 != puVar8) {
                    // WARNING: Subroutine does not return
          memmove(puVar10,puVar7,puStack_138);
        }
        *puVar10 = (int)lVar13;
        puVar15 = puVar10 + 1;
        if (puVar7 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar7);
        }
        puStack_170 = puVar10 + lStackX_18;
        puStack_180 = puVar10;
      }
      uVar1 = puStack_130[2];
      uVar2 = puStack_130[1];
      uVar3 = *puStack_130;
      puStack_178 = puVar15;
      if (puVar11 < puStack_190) {
        puVar8 = puVar6 + 6;
        *puVar11 = uVar3;
        puVar6[4] = uVar2;
        puVar6[5] = uVar1;
        puVar7 = puVar9;
      }
      else {
        if (lVar13 == 0) {
          lVar13 = 1;
LAB_18014bcbe:
          puVar7 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,lVar13 * 0xc,(int8_t)uStack_188);
        }
        else {
          lVar13 = lVar13 * 2;
          if (lVar13 != 0) goto LAB_18014bcbe;
          puVar7 = (int32_t *)0x0;
        }
        puVar8 = puVar7;
        if (puVar9 != puVar11) {
          lVar14 = (longlong)puVar9 - (longlong)puVar7;
          do {
            *puVar8 = *(int32_t *)(lVar14 + (longlong)puVar8);
            puVar8[1] = *(int32_t *)(lVar14 + 4 + (longlong)puVar8);
            puVar8[2] = *(int32_t *)(lVar14 + 8 + (longlong)puVar8);
            puVar8 = puVar8 + 3;
          } while ((int32_t *)(lVar14 + (longlong)puVar8) != puVar11);
        }
        *puVar8 = uVar3;
        puVar8[1] = uVar2;
        puVar8[2] = uVar1;
        puVar8 = puVar8 + 3;
        if (puVar9 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar9);
        }
        puStack_190 = puVar7 + lVar13 * 3;
        puStack_1a0 = puVar7;
      }
      lVar13 = ((longlong)puVar8 - (longlong)puVar7) / 6 +
               ((longlong)puVar8 - (longlong)puVar7 >> 0x3f);
      lVar13 = (lVar13 >> 1) - (lVar13 >> 0x3f);
      puStack_198 = puVar8;
      if (puVar15 < puStack_170) {
        *puVar15 = (int)lVar13;
        puVar9 = puVar10;
      }
      else {
        puStack_130 = (int32_t *)((longlong)puVar15 - (longlong)puVar10);
        if ((longlong)puStack_130 >> 2 == 0) {
          lStackX_18 = 1;
LAB_18014bdc7:
          puVar9 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,lStackX_18 * 4,(int8_t)uStack_168)
          ;
        }
        else {
          lStackX_18 = ((longlong)puStack_130 >> 2) * 2;
          if (lStackX_18 != 0) goto LAB_18014bdc7;
          puVar9 = (int32_t *)0x0;
        }
        if (puVar10 != puVar15) {
                    // WARNING: Subroutine does not return
          memmove(puVar9,puVar10,puStack_130);
        }
        *puVar9 = (int)lVar13;
        if (puVar10 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar10);
        }
        puStack_170 = puVar9 + lStackX_18;
        puStack_180 = puVar9;
        puVar15 = puVar9;
      }
      puVar15 = puVar15 + 1;
      uVar1 = puStack_128[2];
      uVar2 = puStack_128[1];
      uVar3 = *puStack_128;
      puStack_178 = puVar15;
      if (puVar8 < puStack_190) {
        *puVar8 = uVar3;
        puVar8[1] = uVar2;
        puVar8[2] = uVar1;
        puVar10 = puVar7;
        puVar11 = puVar8;
      }
      else {
        if (lVar13 == 0) {
          lVar13 = 1;
LAB_18014be81:
          puVar10 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,lVar13 * 0xc,(int8_t)uStack_188);
        }
        else {
          lVar13 = lVar13 * 2;
          if (lVar13 != 0) goto LAB_18014be81;
          puVar10 = (int32_t *)0x0;
        }
        puVar11 = puVar10;
        if (puVar7 != puVar8) {
          lVar14 = (longlong)puVar7 - (longlong)puVar10;
          do {
            *puVar11 = *(int32_t *)(lVar14 + (longlong)puVar11);
            puVar11[1] = *(int32_t *)(lVar14 + 4 + (longlong)puVar11);
            puVar11[2] = *(int32_t *)(lVar14 + 8 + (longlong)puVar11);
            puVar11 = puVar11 + 3;
          } while ((int32_t *)(lVar14 + (longlong)puVar11) != puVar8);
        }
        *puVar11 = uVar3;
        puVar11[1] = uVar2;
        puVar11[2] = uVar1;
        if (puVar7 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar7);
        }
        puStack_190 = puVar10 + lVar13 * 3;
        puStack_1a0 = puVar10;
      }
      puVar11 = puVar11 + 3;
      uVar4 = *(int16_t *)(lStack_120 + 0x14 + lStack_140 * 0x18);
      puStack_198 = puVar11;
      if (puVar5 < puStack_150) {
        *puVar5 = uVar4;
        puVar12 = puVar5;
      }
      else {
        puStack_128 = (int32_t *)((longlong)puVar5 - (longlong)puStack_160);
        if ((longlong)puStack_128 >> 1 == 0) {
          lVar13 = 1;
LAB_18014bf70:
          puVar12 = (int16_t *)FUN_18062b420(_DAT_180c8ed18,lVar13 * 2,3);
        }
        else {
          lVar13 = ((longlong)puStack_128 >> 1) * 2;
          if (lVar13 != 0) goto LAB_18014bf70;
          puVar12 = (int16_t *)0x0;
        }
        if (puStack_160 != puVar5) {
                    // WARNING: Subroutine does not return
          memmove(puVar12,puStack_160,puStack_128);
        }
        *puVar12 = uVar4;
        if (puStack_160 != (int16_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_150 = puVar12 + lVar13;
        puStack_160 = puVar12;
      }
      puStack_158 = puVar12 + 1;
      iStackX_20 = iStackX_20 + 1;
      lStack_140 = lStack_140 + 1;
      lStack_120 = *(longlong *)(param_1 + 0x68);
    } while ((ulonglong)(longlong)iStackX_20 <
             (ulonglong)((*(longlong *)(param_1 + 0x70) - lStack_120) / 0x18));
  }
  puVar5 = puStack_160;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_ec = uStack_9c;
  _uStack_f8 = CONCAT44(uStack_a4,(int)(((longlong)puVar11 - (longlong)puVar10) / 0xc));
  _uStack_108 = CONCAT44(uStack_b4,0xc);
  _uStack_e0 = CONCAT44(uStack_8c,(int)((ulonglong)((longlong)puVar15 - (longlong)puVar9 >> 2) / 3))
  ;
  uStack_f0 = 0xc;
  uStack_d0 = 2;
  uStack_d8 = 0;
  puStack_100 = puVar10;
  puStack_e8 = puVar9;
  puStack_c8 = puStack_160;
  (**(code **)(**(longlong **)(_DAT_180c8a990 + 0x28) + 0x20))
            (*(longlong **)(_DAT_180c8a990 + 0x28),&uStack_108,param_2,0);
  if (puVar5 != (int16_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar5);
  }
  if (puVar9 == (int32_t *)0x0) {
    if (puVar10 == (int32_t *)0x0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar10);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar9);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_18014c160(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t *puVar4;
  int8_t uVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  longlong lVar8;
  int32_t *puVar9;
  longlong lVar10;
  int32_t *puVar11;
  uint uVar12;
  ulonglong uVar14;
  int aiStackX_8 [2];
  uint64_t uStackX_10;
  int32_t *puStack_e0;
  int32_t *puStack_d8;
  int32_t *puStack_d0;
  int32_t uStack_c8;
  int32_t auStack_b8 [2];
  int32_t *puStack_b0;
  int32_t uStack_a8;
  int32_t uStack_a0;
  uint64_t uStack_98;
  int32_t uStack_90;
  int32_t uStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  ushort uStack_70;
  int32_t uStack_6e;
  ulonglong uVar13;
  
  puStack_e0 = (int32_t *)0x0;
  puStack_d8 = (int32_t *)0x0;
  uVar13 = 0;
  puStack_d0 = (int32_t *)0x0;
  uStack_c8 = 3;
  uStackX_10 = param_2;
  FUN_18014e7d0(&puStack_e0,*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 4,
                param_3,param_4,0xfffffffffffffffe);
  lVar8 = *(longlong *)(param_1 + 0x28);
  puVar9 = puStack_e0;
  puVar6 = puStack_e0;
  puVar11 = puStack_d0;
  uVar14 = uVar13;
  if (*(longlong *)(param_1 + 0x30) - lVar8 >> 4 != 0) {
    do {
      puVar4 = puStack_d8;
      puVar6 = (int32_t *)0x0;
      uVar1 = *(int32_t *)(lVar8 + 8 + uVar14);
      uVar2 = *(int32_t *)(lVar8 + 4 + uVar14);
      uVar3 = *(int32_t *)(lVar8 + uVar14);
      if (puStack_d8 < puVar11) {
        *puStack_d8 = uVar3;
        puStack_d8[1] = uVar2;
        puStack_d8[2] = uVar1;
        puVar6 = puVar9;
        puVar7 = puStack_d8;
      }
      else {
        lVar8 = ((longlong)puStack_d8 - (longlong)puVar9) / 0xc;
        if (lVar8 == 0) {
          lVar8 = 1;
LAB_18014c263:
          puVar6 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,lVar8 * 0xc,(int8_t)uStack_c8);
        }
        else {
          lVar8 = lVar8 * 2;
          if (lVar8 != 0) goto LAB_18014c263;
        }
        puVar7 = puVar6;
        if (puVar9 != puVar4) {
          lVar10 = (longlong)puVar9 - (longlong)puVar6;
          do {
            *puVar7 = *(int32_t *)(lVar10 + (longlong)puVar7);
            puVar7[1] = *(int32_t *)((longlong)puVar7 + lVar10 + 4);
            puVar7[2] = *(int32_t *)((longlong)puVar7 + lVar10 + 8);
            puVar7 = puVar7 + 3;
          } while ((int32_t *)(lVar10 + (longlong)puVar7) != puVar4);
        }
        *puVar7 = uVar3;
        puVar7[1] = uVar2;
        puVar7[2] = uVar1;
        if (puVar9 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar9);
        }
        puVar11 = puVar6 + lVar8 * 3;
        puStack_e0 = puVar6;
        puStack_d0 = puVar11;
      }
      puStack_d8 = puVar7 + 3;
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
      lVar8 = *(longlong *)(param_1 + 0x28);
      param_2 = uStackX_10;
      puVar9 = puVar6;
      uVar14 = uVar14 + 0x10;
    } while ((ulonglong)(longlong)(int)uVar12 <
             (ulonglong)(*(longlong *)(param_1 + 0x30) - lVar8 >> 4));
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_6e = 0xff00ff;
  uStack_a8 = (int32_t)(((longlong)puStack_d8 - (longlong)puVar6) / 0xc);
  auStack_b8[0] = 0xc;
  uStack_70 = 6;
  puStack_b0 = puVar6;
  uVar5 = (**(code **)(**(longlong **)(_DAT_180c8a990 + 0x28) + 0x38))
                    (*(longlong **)(_DAT_180c8a990 + 0x28),auStack_b8,param_2,aiStackX_8);
  if (aiStackX_8[0] == 1) {
    uStack_70 = 2;
    uVar5 = (**(code **)(**(longlong **)(_DAT_180c8a990 + 0x28) + 0x38))
                      (*(longlong **)(_DAT_180c8a990 + 0x28),auStack_b8,param_2,aiStackX_8);
  }
  if (aiStackX_8[0] == 2) {
    uStack_70 = uStack_70 | 8;
    uVar5 = (**(code **)(**(longlong **)(_DAT_180c8a990 + 0x28) + 0x38))
                      (*(longlong **)(_DAT_180c8a990 + 0x28),auStack_b8,param_2,aiStackX_8);
  }
  if (puVar6 == (int32_t *)0x0) {
    return uVar5;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar6);
}





// 函数: void FUN_18014c430(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18014c430(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int *piVar10;
  int32_t auStackX_8 [2];
  int *piStack_30;
  longlong lStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  
  piStack_30 = (int *)0x0;
  lStack_28 = 0;
  uVar5 = 0;
  uStack_20 = 0;
  uStack_18 = 3;
  auStackX_8[0] = 0;
  FUN_18014e020(&piStack_30,(longlong)(int)(param_1[1] - *param_1 >> 3),auStackX_8,param_4,
                0xfffffffffffffffe);
  lVar2 = param_1[0xe] - param_1[0xd] >> 0x3f;
  uVar6 = uVar5;
  uVar9 = uVar5;
  if ((param_1[0xe] - param_1[0xd]) / 0x18 + lVar2 != lVar2) {
    do {
      piStack_30[*(int *)(uVar6 + 0x14 + param_1[0xd])] =
           piStack_30[*(int *)(uVar6 + 0x14 + param_1[0xd])] + 1;
      uVar7 = (int)uVar9 + 1;
      uVar6 = uVar6 + 0x18;
      uVar9 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 < (ulonglong)((param_1[0xe] - param_1[0xd]) / 0x18));
  }
  iVar4 = -0x80000000;
  iVar8 = -1;
  uVar6 = lStack_28 - (longlong)piStack_30 >> 2;
  piVar10 = piStack_30;
  if (uVar6 != 0) {
    do {
      iVar1 = *piVar10;
      iVar3 = (int)uVar5;
      if (iVar1 <= iVar4) {
        iVar3 = iVar8;
      }
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
      if (iVar1 <= iVar4) {
        iVar1 = iVar4;
      }
      iVar4 = iVar1;
      piVar10 = piVar10 + 1;
      iVar8 = iVar3;
    } while ((ulonglong)(longlong)(int)uVar7 < uVar6);
    if (uVar6 != 0) {
      param_1[4] = *(longlong *)(*param_1 + (longlong)iVar3 * 8);
    }
  }
  if (piStack_30 == (int *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(piStack_30);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_18014c570(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  lVar4 = param_2[1] - *param_2 >> 3;
  uVar1 = *(uint *)(param_2 + 3);
  *(uint *)(param_1 + 3) = uVar1;
  lVar3 = 0;
  lVar2 = lVar3;
  if (lVar4 != 0) {
    lVar2 = FUN_18062b420(_DAT_180c8ed18,lVar4 * 8,uVar1 & 0xff,param_4,0xfffffffffffffffe);
  }
  *param_1 = lVar2;
  param_1[1] = lVar2;
  param_1[2] = lVar2 + lVar4 * 8;
  lVar2 = *param_2;
  if (lVar2 != param_2[1]) {
                    // WARNING: Subroutine does not return
    memmove(*param_1,lVar2,param_2[1] - lVar2);
  }
  param_1[1] = *param_1;
  param_1[4] = param_2[4];
  lVar4 = param_2[6] - param_2[5] >> 4;
  uVar1 = *(uint *)(param_2 + 8);
  *(uint *)(param_1 + 8) = uVar1;
  lVar2 = lVar3;
  if (lVar4 != 0) {
    lVar2 = FUN_18062b420(_DAT_180c8ed18,lVar4 << 4,uVar1 & 0xff,param_4,uVar5);
  }
  param_1[5] = lVar2;
  param_1[6] = lVar2;
  param_1[7] = lVar4 * 0x10 + lVar2;
  lVar2 = param_1[5];
  lVar4 = param_2[5];
  if (lVar4 == param_2[6]) {
    param_1[6] = lVar2;
    lVar4 = param_2[10] - param_2[9] >> 2;
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0xc) = uVar1;
    lVar2 = lVar3;
    if (lVar4 != 0) {
      lVar2 = FUN_18062b420(_DAT_180c8ed18,lVar4 * 4,uVar1 & 0xff,param_4,uVar5);
    }
    param_1[9] = lVar2;
    param_1[10] = lVar2;
    param_1[0xb] = lVar2 + lVar4 * 4;
    lVar2 = param_1[9];
    lVar4 = param_2[9];
    if (lVar4 == param_2[10]) {
      param_1[10] = lVar2;
      lVar2 = (param_2[0xe] - param_2[0xd]) / 6 + (param_2[0xe] - param_2[0xd] >> 0x3f);
      lVar2 = (lVar2 >> 2) - (lVar2 >> 0x3f);
      uVar1 = *(uint *)(param_2 + 0x10);
      *(uint *)(param_1 + 0x10) = uVar1;
      if (lVar2 != 0) {
        lVar3 = FUN_18062b420(_DAT_180c8ed18,lVar2 * 0x18,uVar1 & 0xff,param_4,uVar5);
      }
      param_1[0xd] = lVar3;
      param_1[0xe] = lVar3;
      param_1[0xf] = lVar3 + lVar2 * 0x18;
      lVar2 = param_1[0xd];
      lVar3 = param_2[0xd];
      if (lVar3 == param_2[0xe]) {
        param_1[0xe] = lVar2;
        return param_1;
      }
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar3,param_2[0xe] - lVar3);
    }
                    // WARNING: Subroutine does not return
    memmove(lVar2,lVar4,param_2[10] - lVar4);
  }
                    // WARNING: Subroutine does not return
  memmove(lVar2,lVar4,param_2[6] - lVar4);
}





// 函数: void FUN_18014c7d0(ulonglong *param_1)
void FUN_18014c7d0(ulonglong *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_1[0xd] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



uint64_t * FUN_18014c850(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = *(int32_t *)(param_2 + 3);
  uVar3 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar3;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar3;
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar3;
  uVar2 = *(int32_t *)(param_1 + 3);
  *(int32_t *)(param_1 + 3) = *(int32_t *)(param_2 + 3);
  *(int32_t *)(param_2 + 3) = uVar2;
  param_1[4] = param_2[4];
  puVar1 = param_1 + 5;
  *puVar1 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 8) = *(int32_t *)(param_2 + 8);
  uVar3 = *puVar1;
  *puVar1 = param_2[5];
  param_2[5] = uVar3;
  uVar3 = param_1[6];
  param_1[6] = param_2[6];
  param_2[6] = uVar3;
  uVar3 = param_1[7];
  param_1[7] = param_2[7];
  param_2[7] = uVar3;
  uVar2 = *(int32_t *)(param_1 + 8);
  *(int32_t *)(param_1 + 8) = *(int32_t *)(param_2 + 8);
  *(int32_t *)(param_2 + 8) = uVar2;
  puVar1 = param_1 + 9;
  *puVar1 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(int32_t *)(param_1 + 0xc) = *(int32_t *)(param_2 + 0xc);
  uVar3 = *puVar1;
  *puVar1 = param_2[9];
  param_2[9] = uVar3;
  uVar3 = param_1[10];
  param_1[10] = param_2[10];
  param_2[10] = uVar3;
  uVar3 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  param_2[0xb] = uVar3;
  uVar2 = *(int32_t *)(param_1 + 0xc);
  *(int32_t *)(param_1 + 0xc) = *(int32_t *)(param_2 + 0xc);
  *(int32_t *)(param_2 + 0xc) = uVar2;
  puVar1 = param_1 + 0xd;
  *puVar1 = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x10) = *(int32_t *)(param_2 + 0x10);
  uVar3 = *puVar1;
  *puVar1 = param_2[0xd];
  param_2[0xd] = uVar3;
  uVar3 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  param_2[0xe] = uVar3;
  uVar3 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  param_2[0xf] = uVar3;
  uVar2 = *(int32_t *)(param_1 + 0x10);
  *(int32_t *)(param_1 + 0x10) = *(int32_t *)(param_2 + 0x10);
  *(int32_t *)(param_2 + 0x10) = uVar2;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18014c9e0(uint64_t param_1,longlong param_2)
void FUN_18014c9e0(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint64_t uStack_30;
  uint64_t uStack_28;
  code *pcStack_20;
  code *pcStack_18;
  
  lVar3 = _DAT_180c8a9b8;
  lVar1 = _DAT_180c8a9b8 + 0x38;
  iVar4 = _Mtx_lock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  if ((*(longlong *)(param_2 + 0xa8) != 0) && (*(longlong *)(param_2 + 0xb8) == 0)) {
    uStack_30 = 0;
    uStack_28 = 0;
    iVar4 = 0;
    pcStack_20 = (code *)0x0;
    pcStack_18 = _guard_check_icall;
    FUN_18014a370(param_2,1,&uStack_30);
    if (pcStack_20 != (code *)0x0) {
      (*pcStack_20)(&uStack_30,0,0);
    }
    plVar6 = *(longlong **)(param_2 + 0xb8);
    lVar7 = ((plVar6[1] - *plVar6) / 0x30) * 0x30 + (plVar6[5] - plVar6[4] & 0xffffffffffffffe0U);
    lVar5 = plVar6[9] - plVar6[8];
    lVar2 = lVar5 >> 0x3f;
    lVar5 = lVar5 / 0x88 + lVar2;
    if (lVar5 != lVar2) {
      plVar6 = (longlong *)(plVar6[8] + 0x30);
      do {
        lVar7 = lVar7 + (*plVar6 - plVar6[-1] >> 4) * 0x14 + ((plVar6[8] - plVar6[7]) / 0x18) * 0x18
        ;
        iVar4 = iVar4 + 1;
        plVar6 = plVar6 + 0x11;
      } while ((ulonglong)(longlong)iVar4 < (ulonglong)(lVar5 - lVar2));
    }
    *(longlong *)(lVar3 + 0x30) = *(longlong *)(lVar3 + 0x30) + lVar7;
  }
  iVar4 = _Mtx_unlock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



