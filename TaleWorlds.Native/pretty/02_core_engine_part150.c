#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part150.c - 6 个函数

// 函数: void FUN_180139880(uint64_t *param_1,longlong param_2,uint64_t *param_3,longlong param_4)
void FUN_180139880(uint64_t *param_1,longlong param_2,uint64_t *param_3,longlong param_4)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  uint64_t uVar4;
  char cVar5;
  int32_t uVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  uint64_t *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  uint64_t *puVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint64_t uStackX_8;
  longlong lStackX_10;
  uint64_t uStackX_18;
  longlong lStackX_20;
  uint64_t uStack_178;
  float fStack_170;
  float fStack_16c;
  uint uStack_168;
  longlong lStack_160;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  longlong lStack_140;
  uint64_t uStack_138;
  float fStack_130;
  float fStack_12c;
  int32_t uStack_128;
  int32_t uStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  longlong alStack_108 [2];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  
  lStack_160 = SYSTEM_DATA_MANAGER_A;
  cVar5 = *(char *)(SYSTEM_DATA_MANAGER_A + 0xc3);
  uStackX_8 = param_1;
  lStackX_10 = param_2;
  uStackX_18 = param_3;
  lStackX_20 = param_4;
  alStack_108[0] = FUN_1801247c0(param_1[5]);
  iVar15 = 1;
  lVar17 = 1;
  lStack_140 = 1;
  if ((param_1[5] != param_3[5]) && (lStack_140 = 1, cVar5 == '\0')) {
    alStack_108[1] = FUN_1801247c0();
    lVar17 = 2;
    lStack_140 = 2;
  }
  uStack_178 = *(float **)(SYSTEM_DATA_MANAGER_A + 0x18f8);
  fStack_170 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1900);
  fVar22 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
  fStack_16c = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1904) * fVar22;
  lVar10 = SYSTEM_DATA_MANAGER_A;
  fStack_150 = (float)func_0x000180121e20(&uStack_178);
  fVar20 = 0.6;
  if (cVar5 == '\0') {
    fVar18 = 0.4;
  }
  else {
    fVar18 = 0.6;
  }
  uStack_178 = *(float **)(lVar10 + 0x1928);
  fStack_170 = *(float *)(lVar10 + 0x1930);
  fStack_16c = *(float *)(lVar10 + 0x1934) * fVar22 * fVar18;
  uVar6 = func_0x000180121e20(&uStack_178);
  if (cVar5 == '\0') {
    fVar18 = 0.7;
  }
  else {
    fVar18 = 0.9;
  }
  uStack_178 = *(float **)(lVar10 + 0x1928);
  fStack_170 = *(float *)(lVar10 + 0x1930);
  fStack_16c = *(float *)(lVar10 + 0x1934) * fVar22 * fVar18;
  uStack_124 = func_0x000180121e20(&uStack_178);
  if (cVar5 == '\0') {
    fVar18 = 1.0;
  }
  else {
    fVar18 = 1.2;
  }
  uStack_178 = *(float **)(lVar10 + 0x1928);
  fStack_170 = *(float *)(lVar10 + 0x1930);
  fStack_16c = *(float *)(lVar10 + 0x1934) * fVar22 * fVar18;
  uStack_128 = func_0x000180121e20(&uStack_178);
  if (cVar5 != '\0') {
    fVar20 = 0.8;
  }
  uStack_178 = *(float **)(lVar10 + 0x19b8);
  fStack_170 = *(float *)(lVar10 + 0x19c0);
  fStack_16c = *(float *)(lVar10 + 0x19c4) * fVar22 * fVar20;
  uVar7 = func_0x000180121e20(&uStack_178);
  if ((uStackX_18[0x82] == 0) || (0 < *(int *)(uStackX_18[0x82] + 0x20))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  cVar5 = *(char *)(lStackX_20 + 0xa8);
  lVar14 = lStackX_10;
  uStack_168 = uVar7;
  if (cVar5 == '\0') goto LAB_180139e51;
  fVar22 = *(float *)(lStackX_20 + 0x38);
  uStack_178 = *(float **)(lStackX_20 + 0x38);
  fStack_170 = fVar22 + *(float *)(lStackX_20 + 0x40);
  fStack_16c = *(float *)(lStackX_20 + 0x3c) + *(float *)(lStackX_20 + 0x44);
  if (*(int *)(lStackX_20 + 0xb8) == -1) {
    if (bVar1) {
      uStack_178 = (float *)CONCAT44(*(float *)(lVar10 + 0x1660) + *(float *)(lVar10 + 0x1660) +
                                     *(float *)(lVar10 + 0x19f8) + *(float *)(lStackX_20 + 0x3c),
                                     fVar22);
    }
    if (*(char *)(lStackX_20 + 0xa9) != '\0') goto LAB_180139b2f;
  }
  else {
LAB_180139b2f:
    lVar10 = 0;
    do {
      FUN_180293f50(alStack_108[lVar10],&uStack_178,&fStack_170,uVar6,*(int32_t *)(param_1 + 0xf)
                    ,0xf);
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar17);
    cVar5 = *(char *)(lStackX_20 + 0xa8);
  }
  puVar11 = uStackX_18;
  lVar14 = lStackX_10;
  if ((((cVar5 != '\0') && (bVar1)) && (*(int *)(lStackX_20 + 0xb8) == -1)) &&
     (*(char *)(lStackX_20 + 0xa9) != '\0')) {
    func_0x000180138fc0(&uStack_138,lStackX_20);
    lVar14 = lStackX_10;
    fVar22 = (float)uStack_138;
    if ((lStackX_10 == 0) || (*(longlong *)(lStackX_10 + 0x30) == 0)) {
      fVar20 = (float)uStack_138;
      if ((*(uint *)((longlong)param_1 + 0xc) & 0x20000000) == 0) {
        pfVar8 = (float *)FUN_18011ce30(&uStack_178,*param_1,
                                        *(int8_t *)((longlong)param_1 + 0xb7));
        fVar20 = *(float *)(lStack_160 + 0x1674) + *pfVar8 + fVar22;
      }
    }
    else {
      if ((*(byte *)(lStackX_10 + 0xa0) & 0x40) == 0) {
        fVar20 = *(float *)(*(longlong *)(lStackX_10 + 0x30) + 0x3c);
      }
      else {
        pfVar8 = (float *)FUN_18011ce30(&uStack_178,
                                        *(uint64_t *)**(longlong **)(lStackX_10 + 0x28),
                                        *(int8_t *)(**(longlong **)(lStackX_10 + 0x28) + 0xb7));
        fVar20 = *pfVar8;
      }
      fVar20 = fVar22 + fVar20 + *(float *)(lStack_160 + 0x1674);
    }
    if (puVar11[0x82] != 0) {
      iVar15 = **(int **)(puVar11[0x82] + 0x30);
    }
    lVar17 = (longlong)iVar15;
    uVar7 = uStack_168;
    if (0 < iVar15) {
      lVar10 = 0;
      fVar18 = uStack_138._4_4_;
      do {
        lVar14 = lStack_160;
        puVar16 = puVar11;
        if (puVar11[0x82] != 0) {
          puVar16 = *(uint64_t **)
                     (*(longlong *)(*(longlong *)(puVar11[0x82] + 0x30) + 8) + 8 + lVar10);
        }
        cVar5 = func_0x000180138e60(puVar16,param_1);
        fVar23 = fVar20;
        if (cVar5 != '\0') {
          FUN_18011ce30(&fStack_158,*puVar16,*(int8_t *)((longlong)puVar16 + 0xb7));
          uVar4 = uStack_138;
          fVar3 = fStack_150;
          fVar19 = fVar20 + fStack_158;
          fVar21 = fVar18 + fStack_154;
          uStack_178 = (float *)CONCAT44(fVar18,fVar20);
          lVar12 = 0;
          fStack_148 = fVar20 + fStack_158 + *(float *)(lVar14 + 0x1674);
          fVar24 = fVar18;
          fStack_170 = fVar19;
          fStack_16c = fVar21;
          do {
            uVar7 = *(uint *)((longlong)puVar16 + 0xc) >> 0x14 & 1 | 0x200000;
            if (((fVar20 < fVar22) || (fVar24 < fVar18)) ||
               ((fStack_130 < fVar19 || (fStack_12c < fVar21)))) {
              FUN_180291b40(alStack_108[lVar12],uVar4,CONCAT44(fStack_12c,fStack_130),0);
            }
            lVar14 = alStack_108[lVar12];
            FUN_18011cf80(lVar14,&uStack_178,uVar7,fVar3);
            FUN_18011d200(lVar14,&uStack_178,uVar7,*puVar16,0,0);
            fVar21 = fStack_16c;
            fVar19 = fStack_170;
            fVar20 = (float)uStack_178;
            fVar24 = uStack_178._4_4_;
            if (((((float)uStack_178 < fVar22) || (uStack_178._4_4_ < fVar18)) ||
                (fStack_130 < fStack_170)) || (fStack_12c < fStack_16c)) {
              *(int *)(lVar14 + 0x60) = *(int *)(lVar14 + 0x60) + -1;
              FUN_180291950(lVar14);
            }
            lVar12 = lVar12 + 1;
            puVar11 = uStackX_18;
            param_1 = uStackX_8;
            fVar23 = fStack_148;
          } while (lVar12 < lStack_140);
        }
        lVar10 = lVar10 + 0x28;
        lVar17 = lVar17 + -1;
        lVar14 = lStackX_10;
        fVar20 = fVar23;
        uVar7 = uStack_168;
      } while (lVar17 != 0);
    }
  }
LAB_180139e51:
  uVar13 = 0xffffffffffffffff;
  fVar22 = *(float *)(lStack_160 + 0x1664);
  if (fVar22 <= 3.0) {
    fVar22 = 3.0;
  }
  uStack_178 = (float *)(lStackX_20 + 0xc4);
  uStack_138 = 0xffffffffffffffff;
  lVar17 = lStackX_20;
  lVar10 = lStack_160;
  do {
    lVar12 = lStack_140;
    uVar2 = uStack_168;
    iVar15 = (int)uStack_138;
    if ((uStack_178[-1] <= uStack_178[1]) && (*uStack_178 <= uStack_178[2])) {
      fVar24 = uStack_178[-1] - -2.0;
      fVar23 = *uStack_178 - -2.0;
      fVar18 = uStack_178[1] - 2.0;
      fStack_f8 = uStack_178[-1];
      fStack_f4 = *uStack_178;
      fStack_f0 = uStack_178[1];
      fStack_ec = uStack_178[2];
      fVar20 = uStack_178[2] - 2.0;
      if ((*(int *)(lVar17 + 0xb8) != iVar15) ||
         (uVar6 = uStack_128, *(char *)(lVar17 + 0xab) == '\0')) {
        uVar6 = uStack_124;
      }
      lVar17 = 0;
      fVar19 = (float)(int)((fVar24 + fVar18) * 0.5);
      fVar21 = (float)(int)((fVar23 + fVar20) * 0.5);
      do {
        lVar10 = alStack_108[lVar17];
        FUN_180293f50(lVar10,&fStack_f8,&fStack_f0,uVar6,fVar22,0xf);
        if ((uVar7 & 0xff000000) != 0) {
          if ((*(byte *)(lVar10 + 0x30) & 1) == 0) {
            fStack_158 = fVar18 - 0.49;
            fStack_154 = fVar20 - 0.49;
            pfVar8 = &fStack_158;
            pfVar9 = &fStack_148;
            fStack_148 = fVar24 + 0.5;
            fStack_144 = fVar23 + 0.5;
          }
          else {
            uStackX_8 = (uint64_t *)CONCAT44(fVar23 + 0.5,fVar24 + 0.5);
            pfVar8 = (float *)&uStackX_18;
            pfVar9 = (float *)&uStackX_8;
            uStackX_18 = (uint64_t *)CONCAT44(fVar20 - 0.5,fVar18 - 0.5);
          }
          FUN_1802939e0(lVar10,pfVar9,pfVar8,fVar22,0xf);
          FUN_1802923e0(lVar10,*(uint64_t *)(lVar10 + 0x88),*(int32_t *)(lVar10 + 0x80),uVar2,1
                        ,0x3f800000);
          *(int32_t *)(lVar10 + 0x80) = 0;
        }
        if (uVar13 < 2) {
          fStack_150 = fVar19;
          fStack_14c = fVar20;
          fStack_120 = fVar19;
          fStack_11c = fVar23;
          FUN_180293d20(lVar10,&fStack_120,&fStack_150,uVar2,0x3f800000);
        }
        if (uVar13 - 2 < 2) {
          fStack_118 = fVar18;
          fStack_114 = fVar21;
          fStack_110 = fVar24;
          fStack_10c = fVar21;
          FUN_180293d20(lVar10,&fStack_110,&fStack_118,uVar2,0x3f800000);
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 < lVar12);
      iVar15 = (int)uStack_138;
      lVar17 = lStackX_20;
      lVar10 = lStack_160;
      lVar14 = lStackX_10;
    }
    if ((lVar14 != 0) && ((*(byte *)(lVar14 + 4) & 2) != 0)) {
      return;
    }
    if (*(char *)(lVar10 + 0xc0) != '\0') {
      return;
    }
    uStack_138 = (ulonglong)(iVar15 + 1);
    uStack_178 = uStack_178 + 4;
    uVar13 = uVar13 + 1;
    uVar7 = uStack_168;
  } while ((longlong)uVar13 < 4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013a1b0(longlong param_1,longlong param_2,int param_3,int param_4,float param_5,
void FUN_18013a1b0(longlong param_1,longlong param_2,int param_3,int param_4,float param_5,
                  int32_t *param_6)

{
  float fVar1;
  longlong lVar2;
  byte bVar3;
  int32_t uVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  longlong lVar7;
  longlong lVar8;
  int32_t uVar10;
  int32_t uVar11;
  int8_t auVar9 [16];
  int32_t uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int32_t uVar18;
  int8_t auVar17 [16];
  int32_t uVar19;
  uint64_t uStackX_20;
  uint64_t uStack_58;
  ulonglong auStack_50 [3];
  uint64_t uStack_38;
  longlong lStack_30;
  
  uStack_38 = 0xfffffffffffffffe;
  lVar8 = (longlong)param_3;
  if ((param_6 == (int32_t *)0x0) || (puVar5 = param_6, param_4 == 0)) {
    uVar4 = FUN_1801358c0();
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    lStack_30 = func_0x000180120ce0(0xa8,SYSTEM_DATA_MANAGER_B);
    if (lStack_30 == 0) {
      puVar5 = (int32_t *)0x0;
    }
    else {
      puVar5 = (int32_t *)FUN_180136a10(lStack_30,uVar4);
    }
    *(byte *)(puVar5 + 0x28) = *(byte *)(puVar5 + 0x28) | 3;
    FUN_180122160(*(uint64_t *)(param_1 + 0x2df8),*puVar5,puVar5);
  }
  *(longlong *)(puVar5 + 2) = param_2;
  if ((param_6 == (int32_t *)0x0) || (param_4 == 1)) {
    uVar4 = FUN_1801358c0(param_1);
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    lStack_30 = func_0x000180120ce0(0xa8,SYSTEM_DATA_MANAGER_B);
    if (lStack_30 == 0) {
      param_6 = (int32_t *)0x0;
    }
    else {
      param_6 = (int32_t *)FUN_180136a10(lStack_30,uVar4);
    }
    *(byte *)(param_6 + 0x28) = *(byte *)(param_6 + 0x28) | 3;
    FUN_180122160(*(uint64_t *)(param_1 + 0x2df8),*param_6,param_6);
  }
  *(longlong *)(param_6 + 2) = param_2;
  puVar6 = param_6;
  if (param_4 == 0) {
    puVar6 = puVar5;
  }
  lVar2 = *(longlong *)(param_2 + 0x10);
  *(longlong *)(puVar6 + 4) = lVar2;
  lVar7 = *(longlong *)(param_2 + 0x18);
  *(longlong *)(puVar6 + 6) = lVar7;
  if (lVar2 != 0) {
    *(int32_t **)(lVar2 + 8) = puVar6;
    lVar7 = *(longlong *)(puVar6 + 6);
  }
  if (lVar7 != 0) {
    *(int32_t **)(lVar7 + 8) = puVar6;
  }
  puVar6[0x14] = *(int32_t *)(param_2 + 0x50);
  *(uint64_t *)(puVar6 + 0x12) = *(uint64_t *)(param_2 + 0x48);
  *(int32_t **)(param_2 + 0x10) = puVar5;
  *(int32_t **)(param_2 + 0x18) = param_6;
  *(uint64_t *)(*(longlong *)(param_2 + 0x10 + (longlong)param_4 * 8) + 0x70) =
       *(uint64_t *)(param_2 + 0x70);
  *(int *)(param_2 + 0x50) = param_3;
  *(uint64_t *)(param_2 + 0x70) = 0;
  fVar15 = *(float *)(param_2 + 0x40 + lVar8 * 4) - 2.0;
  uVar4 = *(int32_t *)(param_2 + 0x40);
  uVar10 = *(int32_t *)(param_2 + 0x44);
  param_6[0x12] = uVar4;
  param_6[0x13] = uVar10;
  puVar5[0x12] = uVar4;
  puVar5[0x13] = uVar10;
  fVar13 = (float)(int)(fVar15 * param_5);
  puVar5[lVar8 + 0x12] = fVar13;
  param_6[lVar8 + 0x12] = (float)(int)(fVar15 - fVar13);
  FUN_180136f60(*(uint64_t *)(param_2 + 0x10 + (longlong)param_4 * 8),param_2);
  auStack_50[0] = *(ulonglong *)(param_2 + 0x40);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = auStack_50[0];
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *(ulonglong *)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x38) = *(ulonglong *)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x40) = auStack_50[0];
  lVar8 = *(longlong *)(param_2 + 0x10);
  do {
    if (lVar8 == 0) {
      return;
    }
    lVar8 = *(longlong *)(param_2 + 0x10);
    uVar18 = auVar17._8_4_;
    uVar19 = auVar17._12_4_;
    lVar2 = *(longlong *)(param_2 + 0x18);
    uVar4 = auVar9._0_4_;
    uVar10 = auVar9._4_4_;
    uStack_58 = auVar9._0_8_;
    uVar11 = auVar9._8_4_;
    uVar12 = auVar9._12_4_;
    uStackX_20 = uStack_58;
    bVar3 = *(byte *)(lVar8 + 0xa0);
    if (((bVar3 & 4) != 0) && ((*(byte *)(lVar2 + 0xa0) & 4) != 0)) {
      lVar7 = (longlong)*(int *)(param_2 + 0x50);
      fVar13 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x163c + lVar7 * 4);
      fVar15 = *(float *)((longlong)auStack_50 + lVar7 * 4) - 2.0;
      fVar13 = fVar13 + fVar13;
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      if (fVar15 <= fVar13) {
        fVar13 = fVar15;
      }
      fVar13 = (float)(int)(fVar13 * 0.5);
      if ((*(byte *)(lVar8 + 0xa1) & 4) == 0) {
        if ((*(byte *)(lVar2 + 0xa1) & 4) == 0) {
          if (((*(byte *)(lVar2 + 0xa0) & 0x20) == 0) ||
             (fVar1 = *(float *)(lVar8 + 0x48 + lVar7 * 4), fVar1 == 0.0)) {
            if (((bVar3 & 0x20) != 0) &&
               (fVar1 = *(float *)(lVar2 + 0x48 + lVar7 * 4), fVar1 != 0.0)) {
              fVar16 = fVar15 - fVar13;
              if (fVar1 <= fVar15 - fVar13) {
                fVar16 = fVar1;
              }
              fVar14 = fVar15 - fVar16;
              goto LAB_18013a7a6;
            }
            fVar1 = *(float *)(lVar8 + 0x48 + lVar7 * 4);
            fVar14 = (float)(int)((fVar1 / (fVar1 + *(float *)(lVar2 + 0x48 + lVar7 * 4))) * fVar15
                                 + 0.5);
            if (fVar14 <= fVar13) {
              fVar14 = fVar13;
            }
          }
          else {
            fVar14 = fVar15 - fVar13;
            if (fVar1 <= fVar15 - fVar13) {
              fVar14 = fVar1;
            }
          }
          fVar16 = fVar15 - fVar14;
        }
        else {
          *(byte *)(lVar2 + 0xa1) = *(byte *)(lVar2 + 0xa1) & 0xfb;
          fVar16 = *(float *)(lVar2 + 0x40 + lVar7 * 4);
          fVar14 = fVar15 - fVar16;
          *(float *)(lVar2 + 0x48 + lVar7 * 4) = fVar16;
          *(float *)(lVar8 + 0x48 + lVar7 * 4) = fVar14;
        }
      }
      else {
        *(byte *)(lVar8 + 0xa1) = *(byte *)(lVar8 + 0xa1) & 0xfb;
        fVar14 = *(float *)(lVar8 + 0x40 + lVar7 * 4);
        fVar16 = fVar15 - fVar14;
        *(float *)(lVar8 + 0x48 + lVar7 * 4) = fVar14;
        *(float *)(lVar2 + 0x48 + lVar7 * 4) = fVar16;
      }
LAB_18013a7a6:
      *(float *)((longlong)auStack_50 + lVar7 * 4 + -8) = fVar16;
      *(float *)((longlong)&uStackX_20 + lVar7 * 4) = fVar14;
      bVar3 = *(byte *)(lVar8 + 0xa0);
      uVar4 = (int32_t)uStack_58;
      uVar10 = (int32_t)((ulonglong)uStack_58 >> 0x20);
      uVar11 = 0;
      uVar12 = 0;
      *(float *)(&stack0x00000008 + lVar7 * 4) =
           fVar14 + 2.0 + *(float *)(&stack0x00000008 + lVar7 * 4);
      uVar18 = 0;
      uVar19 = 0;
    }
    if ((bVar3 & 4) != 0) {
      FUN_18013a5e0(lVar8,auVar17._0_8_,uStackX_20);
    }
    if ((*(byte *)(lVar2 + 0xa0) & 4) == 0) {
      return;
    }
    *(uint64_t *)(lVar2 + 0x38) = auVar17._0_8_;
    *(ulonglong *)(lVar2 + 0x40) = CONCAT44(uVar10,uVar4);
    auVar17._8_4_ = uVar18;
    auVar17._12_4_ = uVar19;
    lVar8 = *(longlong *)(lVar2 + 0x10);
    auVar9._4_4_ = uVar10;
    auVar9._0_4_ = uVar4;
    auVar9._8_4_ = uVar11;
    auVar9._12_4_ = uVar12;
    auStack_50[0] = CONCAT44(uVar10,uVar4);
    param_2 = lVar2;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013a3d0(longlong param_1,int32_t *param_2,longlong param_3)
void FUN_18013a3d0(longlong param_1,int32_t *param_2,longlong param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  byte bVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  puVar5 = *(int32_t **)(param_2 + 4);
  puVar6 = *(int32_t **)(param_2 + 6);
  uVar1 = param_2[0x12];
  uVar2 = param_2[0x13];
  lVar7 = *(longlong *)(param_3 + 0x10);
  *(longlong *)(param_2 + 4) = lVar7;
  lVar8 = *(longlong *)(param_3 + 0x18);
  *(longlong *)(param_2 + 6) = lVar8;
  if (lVar7 != 0) {
    *(int32_t **)(lVar7 + 8) = param_2;
    lVar8 = *(longlong *)(param_2 + 6);
  }
  if (lVar8 != 0) {
    *(int32_t **)(lVar8 + 8) = param_2;
  }
  uVar10 = 0;
  param_2[0x14] = *(int32_t *)(param_3 + 0x50);
  *(uint64_t *)(param_2 + 0x12) = *(uint64_t *)(param_3 + 0x48);
  *(uint64_t *)(param_3 + 0x18) = 0;
  *(uint64_t *)(param_3 + 0x10) = 0;
  if (puVar5 != (int32_t *)0x0) {
    FUN_180136f60(param_2,puVar5);
    FUN_18013bf60(*puVar5,*param_2);
  }
  if (puVar6 != (int32_t *)0x0) {
    FUN_180136f60(param_2,puVar6);
    FUN_18013bf60(*puVar6,*param_2);
  }
  uVar12 = uVar10;
  if (0 < (int)param_2[8]) {
    do {
      uVar11 = (int)uVar12 + 1;
      uVar3 = param_2[0xf];
      lVar7 = *(longlong *)(uVar10 + *(longlong *)(param_2 + 10));
      *(int32_t *)(lVar7 + 0x40) = param_2[0xe];
      *(int32_t *)(lVar7 + 0x44) = uVar3;
      uVar3 = param_2[0x11];
      lVar7 = *(longlong *)(uVar10 + *(longlong *)(param_2 + 10));
      *(int32_t *)(lVar7 + 0x50) = param_2[0x10];
      *(int32_t *)(lVar7 + 0x54) = uVar3;
      uVar10 = uVar10 + 8;
      uVar12 = (ulonglong)uVar11;
    } while ((int)uVar11 < (int)param_2[8]);
  }
  bVar4 = *(byte *)(param_2 + 0x28);
  *(byte *)(param_2 + 0x28) = bVar4 & 0xfc;
  *(uint64_t *)(param_2 + 0x1c) = *(uint64_t *)(param_3 + 0x70);
  if (((puVar5 == (int32_t *)0x0) || ((*(byte *)(puVar5 + 0x28) & 0x20) == 0)) &&
     ((puVar6 == (int32_t *)0x0 || ((*(byte *)(puVar6 + 0x28) & 0x20) == 0)))) {
    bVar9 = 0;
  }
  else {
    bVar9 = 0x20;
  }
  bVar9 = bVar4 & 0xdc | bVar9;
  *(byte *)(param_2 + 0x28) = bVar9;
  bVar4 = *(byte *)(param_3 + 0xa0);
  param_2[0x12] = uVar1;
  param_2[0x13] = uVar2;
  *(byte *)(param_2 + 0x28) = (bVar4 ^ bVar9) & 0x40 ^ bVar9;
  if (puVar5 == (int32_t *)0x0) {
    if (puVar6 == (int32_t *)0x0) {
      return;
    }
    FUN_180122160(*(uint64_t *)(param_1 + 0x2df8),*puVar6,0);
    FUN_180136ab0(puVar6);
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(puVar6,SYSTEM_DATA_MANAGER_B);
  }
  FUN_180122160(*(uint64_t *)(param_1 + 0x2df8),*puVar5,0);
  FUN_180136ab0(puVar5);
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0(puVar5,SYSTEM_DATA_MANAGER_B);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013a5e0(longlong param_1,ulonglong param_2,ulonglong param_3)
void FUN_18013a5e0(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  int32_t uVar6;
  float fVar7;
  int32_t uVar9;
  int32_t uVar10;
  int8_t auVar8 [16];
  int32_t uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int32_t uVar15;
  int32_t uVar17;
  int32_t uVar18;
  int8_t auVar16 [16];
  int32_t uVar19;
  uint64_t auStackX_8 [3];
  uint64_t uStackX_20;
  uint64_t uStack_58;
  ulonglong auStack_50 [9];
  
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_3;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_2;
  *(ulonglong *)(param_1 + 0x38) = param_2;
  *(ulonglong *)(param_1 + 0x40) = param_3;
  lVar2 = *(longlong *)(param_1 + 0x10);
  auStack_50[0] = param_3;
  do {
    if (lVar2 == 0) {
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    uVar15 = auVar16._0_4_;
    uVar17 = auVar16._4_4_;
    uVar18 = auVar16._8_4_;
    uVar19 = auVar16._12_4_;
    lVar3 = *(longlong *)(param_1 + 0x18);
    uVar6 = auVar8._0_4_;
    uVar9 = auVar8._4_4_;
    uStack_58 = auVar8._0_8_;
    uVar10 = auVar8._8_4_;
    uVar11 = auVar8._12_4_;
    auStackX_8[0] = auVar16._0_8_;
    uStackX_20 = uStack_58;
    bVar4 = *(byte *)(lVar2 + 0xa0);
    if (((bVar4 & 4) != 0) && ((*(byte *)(lVar3 + 0xa0) & 4) != 0)) {
      lVar5 = (longlong)*(int *)(param_1 + 0x50);
      fVar7 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x163c + lVar5 * 4);
      fVar13 = *(float *)((longlong)auStack_50 + lVar5 * 4) - 2.0;
      fVar7 = fVar7 + fVar7;
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      if (fVar13 <= fVar7) {
        fVar7 = fVar13;
      }
      fVar7 = (float)(int)(fVar7 * 0.5);
      if ((*(byte *)(lVar2 + 0xa1) & 4) == 0) {
        if ((*(byte *)(lVar3 + 0xa1) & 4) == 0) {
          if (((*(byte *)(lVar3 + 0xa0) & 0x20) == 0) ||
             (fVar1 = *(float *)(lVar2 + 0x48 + lVar5 * 4), fVar1 == 0.0)) {
            if (((bVar4 & 0x20) != 0) &&
               (fVar1 = *(float *)(lVar3 + 0x48 + lVar5 * 4), fVar1 != 0.0)) {
              fVar14 = fVar13 - fVar7;
              if (fVar1 <= fVar13 - fVar7) {
                fVar14 = fVar1;
              }
              fVar12 = fVar13 - fVar14;
              goto LAB_18013a7a6;
            }
            fVar1 = *(float *)(lVar2 + 0x48 + lVar5 * 4);
            fVar12 = (float)(int)((fVar1 / (fVar1 + *(float *)(lVar3 + 0x48 + lVar5 * 4))) * fVar13
                                 + 0.5);
            if (fVar12 <= fVar7) {
              fVar12 = fVar7;
            }
          }
          else {
            fVar12 = fVar13 - fVar7;
            if (fVar1 <= fVar13 - fVar7) {
              fVar12 = fVar1;
            }
          }
          fVar14 = fVar13 - fVar12;
        }
        else {
          *(byte *)(lVar3 + 0xa1) = *(byte *)(lVar3 + 0xa1) & 0xfb;
          fVar14 = *(float *)(lVar3 + 0x40 + lVar5 * 4);
          fVar12 = fVar13 - fVar14;
          *(float *)(lVar3 + 0x48 + lVar5 * 4) = fVar14;
          *(float *)(lVar2 + 0x48 + lVar5 * 4) = fVar12;
        }
      }
      else {
        *(byte *)(lVar2 + 0xa1) = *(byte *)(lVar2 + 0xa1) & 0xfb;
        fVar12 = *(float *)(lVar2 + 0x40 + lVar5 * 4);
        fVar14 = fVar13 - fVar12;
        *(float *)(lVar2 + 0x48 + lVar5 * 4) = fVar12;
        *(float *)(lVar3 + 0x48 + lVar5 * 4) = fVar14;
      }
LAB_18013a7a6:
      *(float *)((longlong)auStack_50 + lVar5 * 4 + -8) = fVar14;
      *(float *)((longlong)&uStackX_20 + lVar5 * 4) = fVar12;
      bVar4 = *(byte *)(lVar2 + 0xa0);
      uVar6 = (int32_t)uStack_58;
      uVar9 = (int32_t)((ulonglong)uStack_58 >> 0x20);
      uVar10 = 0;
      uVar11 = 0;
      *(float *)((longlong)auStackX_8 + lVar5 * 4) =
           fVar12 + 2.0 + *(float *)((longlong)auStackX_8 + lVar5 * 4);
      uVar15 = (int32_t)auStackX_8[0];
      uVar17 = (int32_t)((ulonglong)auStackX_8[0] >> 0x20);
      uVar18 = 0;
      uVar19 = 0;
    }
    if ((bVar4 & 4) != 0) {
      FUN_18013a5e0(lVar2,auVar16._0_8_,uStackX_20);
    }
    if ((*(byte *)(lVar3 + 0xa0) & 4) == 0) {
      return;
    }
    *(ulonglong *)(lVar3 + 0x38) = CONCAT44(uVar17,uVar15);
    *(ulonglong *)(lVar3 + 0x40) = CONCAT44(uVar9,uVar6);
    auVar16._4_4_ = uVar17;
    auVar16._0_4_ = uVar15;
    auVar16._8_4_ = uVar18;
    auVar16._12_4_ = uVar19;
    lVar2 = *(longlong *)(lVar3 + 0x10);
    auVar8._4_4_ = uVar9;
    auVar8._0_4_ = uVar6;
    auVar8._8_4_ = uVar10;
    auVar8._12_4_ = uVar11;
    auStack_50[0] = CONCAT44(uVar9,uVar6);
    param_1 = lVar3;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013a611(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_18013a611(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  float fVar6;
  uint64_t in_XMM0_Qa;
  float fVar7;
  float fVar8;
  float fVar9;
  int32_t uVar10;
  int32_t uVar11;
  float in_XMM5_Da;
  int32_t uVar12;
  int32_t uVar13;
  float afStackX_20 [2];
  uint64_t uStack0000000000000080;
  uint64_t uStack0000000000000098;
  
  afStackX_20[1] = (float)((ulonglong)in_XMM0_Qa >> 0x20);
  fVar6 = (float)in_XMM0_Qa;
  uVar10 = (int)param_4;
  uVar11 = (int)((ulonglong)param_4 >> 0x20);
  do {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = *(longlong *)(param_1 + 0x18);
    uStack0000000000000080 = CONCAT44(uVar11,uVar10);
    uStack0000000000000098 = CONCAT44(afStackX_20[1],fVar6);
    bVar4 = *(byte *)(lVar2 + 0xa0);
    uVar12 = uVar10;
    uVar13 = uVar11;
    afStackX_20[0] = fVar6;
    if (((bVar4 & 4) != 0) && ((*(byte *)(lVar3 + 0xa0) & 4) != 0)) {
      lVar5 = (longlong)*(int *)(param_1 + 0x50);
      fVar6 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x163c + lVar5 * 4);
      fVar8 = *(float *)((longlong)&param_5 + lVar5 * 4) - in_XMM5_Da;
      fVar6 = fVar6 + fVar6;
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      if (fVar8 <= fVar6) {
        fVar6 = fVar8;
      }
      fVar6 = (float)(int)(fVar6 * 0.5);
      if ((*(byte *)(lVar2 + 0xa1) & 4) == 0) {
        if ((*(byte *)(lVar3 + 0xa1) & 4) == 0) {
          if (((*(byte *)(lVar3 + 0xa0) & 0x20) == 0) ||
             (fVar1 = *(float *)(lVar2 + 0x48 + lVar5 * 4), fVar1 == 0.0)) {
            if (((bVar4 & 0x20) != 0) &&
               (fVar1 = *(float *)(lVar3 + 0x48 + lVar5 * 4), fVar1 != 0.0)) {
              fVar9 = fVar8 - fVar6;
              if (fVar1 <= fVar8 - fVar6) {
                fVar9 = fVar1;
              }
              fVar7 = fVar8 - fVar9;
              goto LAB_18013a7a6;
            }
            fVar1 = *(float *)(lVar2 + 0x48 + lVar5 * 4);
            fVar7 = (float)(int)((fVar1 / (fVar1 + *(float *)(lVar3 + 0x48 + lVar5 * 4))) * fVar8 +
                                0.5);
            if (fVar7 <= fVar6) {
              fVar7 = fVar6;
            }
          }
          else {
            fVar7 = fVar8 - fVar6;
            if (fVar1 <= fVar8 - fVar6) {
              fVar7 = fVar1;
            }
          }
          fVar9 = fVar8 - fVar7;
        }
        else {
          *(byte *)(lVar3 + 0xa1) = *(byte *)(lVar3 + 0xa1) & 0xfb;
          fVar9 = *(float *)(lVar3 + 0x40 + lVar5 * 4);
          fVar7 = fVar8 - fVar9;
          *(float *)(lVar3 + 0x48 + lVar5 * 4) = fVar9;
          *(float *)(lVar2 + 0x48 + lVar5 * 4) = fVar7;
        }
      }
      else {
        *(byte *)(lVar2 + 0xa1) = *(byte *)(lVar2 + 0xa1) & 0xfb;
        fVar7 = *(float *)(lVar2 + 0x40 + lVar5 * 4);
        fVar9 = fVar8 - fVar7;
        *(float *)(lVar2 + 0x48 + lVar5 * 4) = fVar7;
        *(float *)(lVar3 + 0x48 + lVar5 * 4) = fVar9;
      }
LAB_18013a7a6:
      afStackX_20[lVar5] = fVar9;
      *(float *)((longlong)&stack0x00000098 + lVar5 * 4) = fVar7;
      bVar4 = *(byte *)(lVar2 + 0xa0);
      *(float *)((longlong)&stack0x00000080 + lVar5 * 4) =
           fVar7 + in_XMM5_Da + *(float *)((longlong)&stack0x00000080 + lVar5 * 4);
      uVar12 = (int32_t)uStack0000000000000080;
      uVar13 = (int32_t)((ulonglong)uStack0000000000000080 >> 0x20);
    }
    fVar6 = afStackX_20[0];
    if ((bVar4 & 4) != 0) {
      FUN_18013a5e0(lVar2,CONCAT44(uVar11,uVar10),uStack0000000000000098);
      in_XMM5_Da = 2.0;
    }
    if ((*(byte *)(lVar3 + 0xa0) & 4) == 0) {
      return;
    }
    *(ulonglong *)(lVar3 + 0x38) = CONCAT44(uVar13,uVar12);
    *(ulonglong *)(lVar3 + 0x40) = CONCAT44(afStackX_20[1],fVar6);
    param_5 = CONCAT44(afStackX_20[1],fVar6);
    param_1 = lVar3;
    uVar10 = uVar12;
    uVar11 = uVar13;
    if (*(longlong *)(lVar3 + 0x10) == 0) {
      return;
    }
  } while( true );
}





// 函数: void FUN_18013a851(void)
void FUN_18013a851(void)

{
  return;
}





