#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part041.c - 12 个函数

// 函数: void FUN_1803cdc10(int64_t param_1,uint64_t *param_2,int64_t param_3)
void FUN_1803cdc10(int64_t param_1,uint64_t *param_2,int64_t param_3)

{
  char cVar1;
  int iVar2;
  void **ppuVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int32_t uVar6;
  int16_t auStackX_8 [4];
  int32_t uStackX_10;
  int32_t uStackX_14;
  uint64_t uStack_1a8;
  uint64_t uStack_1a0;
  uint64_t uStack_198;
  uint64_t uStack_190;
  int16_t uStack_188;
  int32_t uStack_180;
  int32_t uStack_17c;
  int32_t uStack_178;
  void *puStack_168;
  int64_t lStack_160;
  int64_t *plStack_158;
  int32_t uStack_150;
  ushort uStack_148;
  uint64_t uStack_144;
  int32_t uStack_13c;
  uint64_t uStack_138;
  uint64_t uStack_130;
  int8_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  void *puStack_108;
  int64_t lStack_100;
  int32_t uStack_f8;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  int32_t uStack_d8;
  uint uStack_d4;
  int32_t uStack_cc;
  int32_t uStack_c8;
  int32_t uStack_c4;
  int32_t uStack_c0;
  int32_t uStack_bc;
  int32_t uStack_b8;
  int32_t uStack_b4;
  int32_t uStack_b0;
  int32_t uStack_ac;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  uint64_t uStack_88;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_90 = *(int32_t *)(param_2 + 1);
  uStack_94 = *(int32_t *)((int64_t)param_2 + 4);
  uStack_98 = *(int32_t *)param_2;
  uStack_178 = *(int32_t *)(param_2 + 3);
  uStack_17c = *(int32_t *)((int64_t)param_2 + 0x14);
  uStack_180 = *(int32_t *)(param_2 + 2);
  uStackX_14 = *(int32_t *)((int64_t)param_2 + 0x24);
  lStack_160 = 0;
  plStack_158 = (int64_t *)0x0;
  uStack_150 = 0xffffffff;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_130 = 0x7f7fffff00000000;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  puStack_168 = &unknown_var_3312_ptr;
  uStackX_10 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3f800000;
  uStack_190 = 0;
  uStack_198 = 0;
  uStack_188 = 3;
  lStack_100 = param_2[5];
  puStack_108 = &unknown_var_3600_ptr;
  uVar6 = 2;
  uStack_f8 = uVar6;
  if (lStack_100 != 0) {
    uStack_f8 = *(int32_t *)(lStack_100 + 8);
  }
  if (param_2[5] != 0) {
    uStack_188 = 7;
  }
  auStackX_8[0] = 0x603;
  ppuVar3 = &puStack_108;
  if (param_2[5] == 0) {
    ppuVar3 = (void **)0x0;
  }
  cVar1 = (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x2b8))
                    (*(int64_t **)(param_1 + 0xb8),&uStackX_10,&uStack_a8,&uStack_180,
                     *(int32_t *)(param_2 + 4),&puStack_168,auStackX_8,&uStack_198,ppuVar3,0,0);
  if (cVar1 != '\0') {
    uStack_e8 = *(uint64_t *)(*(int64_t *)(lStack_160 + 0x10) + 8);
    lVar4 = (**(code **)(*plStack_158 + 0xd8))(plStack_158,uStack_150);
    if (lVar4 == 0) {
      uStack_e0 = 0;
    }
    else {
      uStack_e0 = *(uint64_t *)(*(int64_t *)(lVar4 + 0x10) + 8);
    }
    uStack_d8 = 0;
    if ((uStack_148 & 1) == 0) {
      uStack_1a8 = *param_2;
      uStack_1a0 = param_2[1];
    }
    else {
      uStack_1a8 = uStack_144;
      uStack_1a0 = CONCAT44(0x7f7fffff,uStack_13c);
    }
    uStack_cc = (int32_t)uStack_1a8;
    uStack_c8 = (int32_t)((uint64_t)uStack_1a8 >> 0x20);
    uStack_c4 = (int32_t)uStack_1a0;
    uStack_c0 = (int32_t)((uint64_t)uStack_1a0 >> 0x20);
    uStack_bc = (int32_t)uStack_138;
    uStack_b8 = uStack_138._4_4_;
    uStack_b4 = (int32_t)uStack_130;
    uStack_b0 = 0x7f7fffff;
    iVar2 = (**(code **)(*plStack_158 + 0x38))();
    uStack_d4 = (uint)(iVar2 == 6);
    iVar2 = (**(code **)(*plStack_158 + 0x38))();
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    else if (iVar2 != 1) {
      if (iVar2 == 2) {
        uVar6 = 3;
      }
      else if (iVar2 == 3) {
        uVar6 = 4;
      }
      else if (iVar2 == 4) {
        uVar6 = 5;
      }
      else if (iVar2 == 5) {
        uVar6 = 6;
      }
      else {
        uVar6 = 0;
        if (iVar2 == 6) {
          uVar6 = 7;
        }
      }
    }
    puVar5 = (uint64_t *)((int64_t)*(int *)(param_3 + 0x40) * 0x40 + param_3);
    *puVar5 = uStack_e8;
    puVar5[1] = uStack_e0;
    puVar5[2] = CONCAT44(uStack_d4,uStack_d8);
    puVar5[3] = CONCAT44(uStack_cc,uVar6);
    puVar5[4] = CONCAT44(uStack_c4,uStack_c8);
    puVar5[5] = CONCAT44(uStack_bc,uStack_c0);
    puVar5[6] = CONCAT44(uStack_b4,uStack_b8);
    puVar5[7] = CONCAT44(uStack_ac,uStack_b0);
    *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + 1;
  }
  return;
}






// 函数: void FUN_1803cdf80(int64_t param_1,float *param_2,int64_t param_3)
void FUN_1803cdf80(int64_t param_1,float *param_2,int64_t param_3)

{
  char cVar1;
  int iVar2;
  void **ppuVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int32_t uVar6;
  int16_t auStackX_8 [4];
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  int16_t uStack_1b8;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  int32_t uStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  void *puStack_188;
  int64_t lStack_180;
  int64_t *plStack_178;
  int32_t uStack_170;
  ushort uStack_168;
  uint64_t uStack_164;
  float fStack_15c;
  uint64_t uStack_158;
  uint64_t uStack_150;
  int8_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  void *puStack_128;
  int64_t lStack_120;
  int32_t uStack_118;
  uint64_t uStack_108;
  uint64_t uStack_100;
  int32_t uStack_f8;
  uint uStack_f4;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  int32_t uStack_e0;
  int32_t uStack_dc;
  int32_t uStack_d8;
  int32_t uStack_d4;
  int32_t uStack_d0;
  int32_t uStack_cc;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  uint64_t uStack_a8;
  
  uStack_a8 = 0xfffffffffffffffe;
  fStack_1d0 = (param_2[6] + param_2[2]) * 0.5;
  fStack_1d4 = (param_2[5] + param_2[1]) * 0.5;
  fStack_1d8 = (*param_2 + param_2[4]) * 0.5;
  fStack_194 = (param_2[6] - param_2[2]) * 0.5;
  fStack_198 = (param_2[5] - param_2[1]) * 0.5;
  fStack_1a8 = param_2[10];
  fStack_1ac = param_2[9];
  fStack_1b0 = param_2[8];
  lStack_180 = 0;
  plStack_178 = (int64_t *)0x0;
  uStack_170 = 0xffffffff;
  uStack_168 = 0;
  uStack_164 = 0;
  fStack_15c = 0.0;
  uStack_158 = 0;
  uStack_150 = 0x7f7fffff00000000;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  puStack_188 = &unknown_var_3312_ptr;
  uStack_1a0 = 3;
  fStack_19c = (param_2[4] - *param_2) * 0.5;
  uStack_c8 = 0;
  uStack_c0 = 0x3f80000000000000;
  uStack_1c0 = 0;
  uStack_1c8 = 0;
  uStack_1b8 = 3;
  lStack_120 = *(int64_t *)(param_2 + 0xe);
  puStack_128 = &unknown_var_3600_ptr;
  uVar6 = 2;
  uStack_118 = uVar6;
  if (lStack_120 != 0) {
    uStack_118 = *(int32_t *)(lStack_120 + 8);
  }
  if (*(int64_t *)(param_2 + 0xe) != 0) {
    uStack_1b8 = 7;
  }
  auStackX_8[0] = 0x403;
  ppuVar3 = &puStack_128;
  if (*(int64_t *)(param_2 + 0xe) == 0) {
    ppuVar3 = (void **)0x0;
  }
  fStack_b8 = fStack_1d8;
  fStack_b4 = fStack_1d4;
  fStack_b0 = fStack_1d0;
  cVar1 = (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x2b8))
                    (*(int64_t **)(param_1 + 0xb8),&uStack_1a0,&uStack_c8,&fStack_1b0,param_2[0xc],
                     &puStack_188,auStackX_8,&uStack_1c8,ppuVar3,0,0);
  if (cVar1 != '\0') {
    uStack_108 = *(uint64_t *)(*(int64_t *)(lStack_180 + 0x10) + 8);
    lVar4 = (**(code **)(*plStack_178 + 0xd8))(plStack_178,uStack_170);
    if (lVar4 == 0) {
      uStack_100 = 0;
    }
    else {
      uStack_100 = *(uint64_t *)(*(int64_t *)(lVar4 + 0x10) + 8);
    }
    uStack_f8 = 0;
    if ((uStack_168 & 1) != 0) {
      fStack_1d8 = (float)uStack_164;
      fStack_1d4 = uStack_164._4_4_;
      fStack_1d0 = fStack_15c;
    }
    fStack_ec = fStack_1d8;
    fStack_e8 = fStack_1d4;
    fStack_e4 = fStack_1d0;
    uStack_e0 = 0x7f7fffff;
    uStack_dc = (int32_t)uStack_158;
    uStack_d8 = uStack_158._4_4_;
    uStack_d4 = (int32_t)uStack_150;
    uStack_d0 = 0x7f7fffff;
    iVar2 = (**(code **)(*plStack_178 + 0x38))();
    uStack_f4 = (uint)(iVar2 == 6);
    iVar2 = (**(code **)(*plStack_178 + 0x38))();
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    else if (iVar2 != 1) {
      if (iVar2 == 2) {
        uVar6 = 3;
      }
      else if (iVar2 == 3) {
        uVar6 = 4;
      }
      else if (iVar2 == 4) {
        uVar6 = 5;
      }
      else if (iVar2 == 5) {
        uVar6 = 6;
      }
      else {
        uVar6 = 0;
        if (iVar2 == 6) {
          uVar6 = 7;
        }
      }
    }
    puVar5 = (uint64_t *)((int64_t)*(int *)(param_3 + 0x40) * 0x40 + param_3);
    *puVar5 = uStack_108;
    puVar5[1] = uStack_100;
    puVar5[2] = CONCAT44(uStack_f4,uStack_f8);
    puVar5[3] = CONCAT44(fStack_ec,uVar6);
    puVar5[4] = CONCAT44(fStack_e4,fStack_e8);
    puVar5[5] = CONCAT44(uStack_dc,uStack_e0);
    puVar5[6] = CONCAT44(uStack_d4,uStack_d8);
    puVar5[7] = CONCAT44(uStack_cc,uStack_d0);
    *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + 1;
  }
  return;
}






// 函数: void FUN_1803ce380(int64_t param_1,int64_t *param_2,int64_t param_3,char param_4,char param_5)
void FUN_1803ce380(int64_t param_1,int64_t *param_2,int64_t param_3,char param_4,char param_5)

{
  float fVar1;
  int32_t uVar2;
  float *pfVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  void **ppuVar8;
  int32_t uVar9;
  int64_t *plVar10;
  ushort uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int16_t auStackX_8 [4];
  float fStackX_10;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  int32_t uStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  int32_t uStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  int32_t uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  int32_t uStack_19c;
  uint64_t uStack_198;
  uint64_t uStack_190;
  ushort uStack_188;
  void *puStack_178;
  int64_t lStack_170;
  int64_t *plStack_168;
  int32_t uStack_160;
  ushort uStack_158;
  uint64_t uStack_154;
  float fStack_14c;
  int32_t uStack_148;
  int32_t uStack_144;
  int32_t uStack_140;
  int32_t uStack_13c;
  int8_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  void *puStack_118;
  int64_t lStack_110;
  int32_t uStack_108;
  float fStack_100;
  float fStack_fc;
  int32_t uStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  uint64_t uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  pfVar3 = (float *)*param_2;
  fStack_208 = *pfVar3;
  fStack_204 = pfVar3[1];
  fVar1 = pfVar3[2];
  fStack_218 = (pfVar3[4] + fStack_208 + pfVar3[8] + pfVar3[0xc] + pfVar3[0x10] + pfVar3[0x14] +
                pfVar3[0x18] + pfVar3[0x1c]) * 0.125;
  fStack_214 = (fStack_204 + pfVar3[5] + pfVar3[9] + pfVar3[0xd] + pfVar3[0x11] + pfVar3[0x15] +
                pfVar3[0x19] + pfVar3[0x1d]) * 0.125;
  fStackX_10 = (fVar1 + pfVar3[6] + pfVar3[10] + pfVar3[0xe] + pfVar3[0x12] + pfVar3[0x16] +
                pfVar3[0x1a] + pfVar3[0x1e]) * 0.125;
  uStack_1d8._4_4_ = pfVar3[0x1d] - fStack_204;
  uStack_1d8._0_4_ = pfVar3[0x1c] - fStack_208;
  fStack_1f0 = pfVar3[10] - fVar1;
  fStack_1f4 = pfVar3[9] - fStack_204;
  fStack_1f8 = pfVar3[8] - fStack_208;
  fStack_200 = pfVar3[0x12] - fVar1;
  fStack_204 = pfVar3[0x11] - fStack_204;
  fStack_208 = pfVar3[0x10] - fStack_208;
  uStack_1d0 = CONCAT44(0x7f7fffff,pfVar3[0x1e] - fVar1);
  uStack_1ec = 0x7f7fffff;
  fStack_1bc = 3.4028235e+38;
  fStack_1fc = 3.4028235e+38;
  uStack_1ac = 0x7f7fffff;
  uStack_20c = 0x7f7fffff;
  uStack_19c = 0x7f7fffff;
  plVar10 = param_2;
  fStack_210 = fStackX_10;
  fStack_1e8 = fStack_218;
  fStack_1e4 = fStack_214;
  fStack_1c8 = fStack_1f8;
  fStack_1c4 = fStack_1f4;
  fStack_1c0 = fStack_1f0;
  fStack_1b8 = fStack_208;
  fStack_1b4 = fStack_204;
  fStack_1b0 = fStack_200;
  fStack_1a8 = fStack_218;
  fStack_1a4 = fStack_214;
  fStack_1a0 = fStackX_10;
  FUN_180084ae0(&uStack_1d8);
  lVar6 = *param_2;
  fVar13 = *(float *)(lVar6 + 0x18) - fStack_1a0;
  fVar12 = *(float *)(lVar6 + 0x14) - fStack_1a4;
  fVar14 = *(float *)(lVar6 + 0x10) - fStack_1a8;
  fStack_1fc = ABS(fVar14 * fStack_1b8 + fVar12 * fStack_1b4 + fVar13 * fStack_1b0);
  fStack_200 = ABS(fVar14 * fStack_1c8 + fVar12 * fStack_1c4 + fVar13 * fStack_1c0);
  lVar6 = param_2[2];
  uVar2 = *(int32_t *)((int64_t)param_2 + 0xc);
  fVar1 = *(float *)(param_2 + 1);
  ppuVar8 = (void **)0x0;
  lStack_170 = 0;
  plStack_168 = (int64_t *)0x0;
  uStack_160 = 0xffffffff;
  uStack_158 = 0;
  uStack_154 = 0;
  fStack_14c = 0.0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_13c = 0x7f7fffff;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  puStack_178 = &unknown_var_3312_ptr;
  fStack_208 = 4.2039e-45;
  fStack_204 = ABS(fVar14 * (float)uStack_1d8 + fVar12 * uStack_1d8._4_4_ +
                   fVar13 * (float)uStack_1d0);
  FUN_18063b470(&fStack_218,&uStack_1d8);
  fStack_100 = fStack_214;
  fStack_fc = fStack_210;
  uStack_f8 = uStack_20c;
  fStack_f4 = fStack_218;
  fStack_f0 = fStack_1a8;
  fStack_ec = fStack_1a4;
  fStack_e8 = fStack_1a0;
  uStack_190 = 0;
  uStack_198 = 0;
  uStack_188 = 3;
  lStack_110 = plVar10[4];
  puStack_118 = &unknown_var_3600_ptr;
  uVar9 = 2;
  uStack_108 = uVar9;
  if (lStack_110 != 0) {
    uStack_108 = *(int32_t *)(lStack_110 + 8);
  }
  if (plVar10[4] != 0) {
    if (param_4 == '\0') {
      uVar11 = 3;
    }
    else {
      uVar11 = 7;
      uStack_188 = 7;
    }
    if (param_5 != '\0') {
      uStack_188 = uVar11 | 8;
    }
    ppuVar8 = &puStack_118;
  }
  auStackX_8[0] = 0x203;
  fStack_1f8 = fVar1;
  fStack_1f4 = (float)uVar2;
  fStack_1f0 = (float)(int)lVar6;
  cVar4 = (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x2b8))
                    (*(int64_t **)(param_1 + 0xb8),&fStack_208,&fStack_100,&fStack_1f8,
                     (int)plVar10[3],&puStack_178,auStackX_8,&uStack_198,ppuVar8,0,0);
  if (cVar4 != '\0') {
    uStack_1d8 = *(uint64_t *)(*(int64_t *)(lStack_170 + 0x10) + 8);
    lVar6 = (**(code **)(*plStack_168 + 0xd8))(plStack_168,uStack_160);
    if (lVar6 == 0) {
      uStack_1d0 = 0;
    }
    else {
      uStack_1d0 = *(uint64_t *)(*(int64_t *)(lVar6 + 0x10) + 8);
    }
    fStack_1c8 = 0.0;
    if ((uStack_158 & 1) == 0) {
      fStack_218 = fStack_1e8;
      fStack_210 = fStackX_10;
      fStack_214 = fStack_1e4;
    }
    else {
      fStack_218 = (float)uStack_154;
      fStack_210 = fStack_14c;
      fStack_214 = uStack_154._4_4_;
    }
    fStack_1bc = fStack_218;
    fStack_1b4 = fStack_210;
    fStack_1b0 = 3.4028235e+38;
    uStack_20c = 0x7f7fffff;
    uStack_1ac = uStack_148;
    fStack_1a8 = (float)uStack_144;
    fStack_1a4 = (float)uStack_140;
    fStack_1a0 = 3.4028235e+38;
    fStack_1b8 = fStack_214;
    iVar5 = (**(code **)(*plStack_168 + 0x38))();
    fStack_1c4 = (float)(uint)(iVar5 == 6);
    iVar5 = (**(code **)(*plStack_168 + 0x38))();
    if (iVar5 == 0) {
      uVar9 = 1;
    }
    else if (iVar5 != 1) {
      if (iVar5 == 2) {
        uVar9 = 3;
      }
      else if (iVar5 == 3) {
        uVar9 = 4;
      }
      else if (iVar5 == 4) {
        uVar9 = 5;
      }
      else if (iVar5 == 5) {
        uVar9 = 6;
      }
      else {
        uVar9 = 0;
        if (iVar5 == 6) {
          uVar9 = 7;
        }
      }
    }
    puVar7 = (uint64_t *)((int64_t)*(int *)(param_3 + 0x40) * 0x40 + param_3);
    *puVar7 = uStack_1d8;
    puVar7[1] = uStack_1d0;
    puVar7[2] = CONCAT44(fStack_1c4,fStack_1c8);
    puVar7[3] = CONCAT44(fStack_1bc,uVar9);
    puVar7[4] = CONCAT44(fStack_1b4,fStack_1b8);
    puVar7[5] = CONCAT44(uStack_1ac,fStack_1b0);
    puVar7[6] = CONCAT44(fStack_1a4,fStack_1a8);
    puVar7[7] = CONCAT44(uStack_19c,fStack_1a0);
    *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + 1;
  }
  return;
}






// 函数: void FUN_1803ce9f0(int64_t param_1,uint64_t param_2)
void FUN_1803ce9f0(int64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  
  lVar1 = *(int64_t *)(param_1 + 0x158);
  puVar7 = (uint64_t *)(lVar1 + (param_2 % (uint64_t)*(uint *)(param_1 + 0x160)) * 8);
  puVar6 = (uint64_t *)*puVar7;
  do {
    if (puVar6 == (uint64_t *)0x0) {
      lVar5 = *(int64_t *)(param_1 + 0x160);
      puVar7 = (uint64_t *)(lVar1 + lVar5 * 8);
      puVar6 = (uint64_t *)*puVar7;
LAB_1803cea4c:
      if (puVar6 == *(uint64_t **)(lVar1 + lVar5 * 8)) {
        return;
      }
      uVar2 = puVar6[5];
      puVar3 = puVar7;
      while (uVar2 == 0) {
        puVar3 = puVar3 + 1;
        uVar2 = *puVar3;
      }
      puVar3 = (uint64_t *)*puVar7;
      puVar4 = (uint64_t *)puVar3[5];
      if (puVar3 == puVar6) {
        *puVar7 = (uint64_t)puVar4;
      }
      else {
        for (; puVar4 != puVar6; puVar4 = (uint64_t *)puVar4[5]) {
          puVar3 = puVar4;
        }
        puVar3[5] = puVar4[5];
      }
      if (puVar6[1] != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(puVar6);
    }
    if (param_2 == *puVar6) {
      lVar5 = *(int64_t *)(param_1 + 0x160);
      goto LAB_1803cea4c;
    }
    puVar6 = (uint64_t *)puVar6[5];
  } while( true );
}






// 函数: void FUN_1803ceaf0(uint64_t *param_1)
void FUN_1803ceaf0(uint64_t *param_1)

{
  LOCK();
  *(int8_t *)(param_1[5] + 0xd4) = 1;
  UNLOCK();
  if ((void *)*param_1 == &unknown_var_4488_ptr) {
                    // WARNING: Could not recover jumptable at 0x0001803ceb23. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*(int64_t *)param_1[2] + 0x70))((int64_t *)param_1[2],param_1);
    return;
  }
  (**(code **)((void *)*param_1 + 0x18))();
  return;
}



uint64_t *
FUN_1803ceb40(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_3440_ptr;
  *param_1 = &unknown_var_3472_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x1040,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t *
FUN_1803cebb0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_3440_ptr;
  *param_1 = &unknown_var_3472_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x240,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}






// 函数: void FUN_1803cec00(int64_t param_1)
void FUN_1803cec00(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  FUN_1803cec30();
  if ((1 < *(uint64_t *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
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






// 函数: void FUN_1803cec30(int64_t param_1)
void FUN_1803cec30(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  uVar1 = *(uint64_t *)(param_1 + 0x10);
  lVar2 = *(int64_t *)(param_1 + 8);
  uVar4 = 0;
  if (uVar1 == 0) {
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  else {
    do {
      lVar3 = *(int64_t *)(lVar2 + uVar4 * 8);
      if (lVar3 != 0) {
        if (*(int64_t *)(lVar3 + 8) != 0) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(lVar3);
      }
      *(uint64_t *)(lVar2 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1803cece0(int64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t param_5)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  
  uVar2 = param_5 % (uint64_t)*(uint *)(param_1 + 0x10);
  plVar4 = (int64_t *)(*(int64_t *)(param_1 + 8) + uVar2 * 8);
  plVar3 = (int64_t *)*plVar4;
  if (plVar3 != (int64_t *)0x0) {
    do {
      if (*param_4 == *plVar3) {
        *param_2 = plVar3;
        param_2[1] = plVar4;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
      plVar3 = (int64_t *)plVar3[5];
    } while (plVar3 != (int64_t *)0x0);
  }
  FUN_18066c220(param_1 + 0x20,&param_5,(uint64_t)*(uint *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),1);
  plVar4 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x30,*(int8_t *)(param_1 + 0x2c));
  *plVar4 = *param_4;
  plVar4[1] = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  *(int32_t *)(plVar4 + 4) = 3;
  plVar4[5] = 0;
  if ((char)param_5 == '\0') {
    plVar4[5] = *(int64_t *)(*(int64_t *)(param_1 + 8) + uVar2 * 8);
    *(int64_t **)(*(int64_t *)(param_1 + 8) + uVar2 * 8) = plVar4;
    *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
    lVar1 = *(int64_t *)(param_1 + 8);
    *param_2 = plVar4;
    param_2[1] = lVar1 + uVar2 * 8;
    *(int8_t *)(param_2 + 2) = 1;
    return param_2;
  }
  uVar5 = CoreMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)param_5._4_4_ * 8 + 8,8,
                        *(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
  memset(uVar5,0,(uint64_t)param_5._4_4_ * 8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1803ceee0(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = CoreMemoryPoolAllocator(system_memory_pool_ptr,param_1 * 4);
  iVar3 = 0;
  lVar2 = lVar1 + 3;
  do {
    iVar3 = iVar3 + 1;
    *(int16_t *)(lVar2 + -1) = 0;
    lVar2 = lVar2 + 4;
  } while ((uint64_t)(int64_t)iVar3 < param_1);
  return lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803cef40(int64_t *param_1,int32_t *param_2)
void FUN_1803cef40(int64_t *param_1,int32_t *param_2)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int64_t lVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  
  lVar8 = param_1[1];
  lVar7 = *param_1;
  lVar6 = lVar8 - lVar7 >> 6;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) {
      puVar2 = (int32_t *)0x0;
      goto LAB_1803cefa0;
    }
  }
  puVar2 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar6 << 6,(char)param_1[3]);
  lVar8 = param_1[1];
  lVar7 = *param_1;
LAB_1803cefa0:
  puVar4 = puVar2;
  if (lVar7 != lVar8) {
    lVar7 = lVar7 - (int64_t)puVar2;
    puVar5 = puVar2 + 5;
    do {
      puVar1 = puVar5 + 0x10;
      *puVar4 = *(int32_t *)(lVar7 + -0x14 + (int64_t)puVar5);
      puVar4 = puVar4 + 0x10;
      puVar5[-4] = *(int32_t *)(lVar7 + -0x50 + (int64_t)puVar1);
      puVar5[-3] = *(int32_t *)(lVar7 + -0x4c + (int64_t)puVar1);
      puVar5[-2] = *(int32_t *)(lVar7 + -0x48 + (int64_t)puVar1);
      puVar5[-1] = *(int32_t *)(lVar7 + -0x44 + (int64_t)puVar1);
      *puVar5 = *(int32_t *)(lVar7 + -0x40 + (int64_t)puVar1);
      puVar5[1] = *(int32_t *)(lVar7 + -0x3c + (int64_t)puVar1);
      puVar5[2] = *(int32_t *)(lVar7 + -0x38 + (int64_t)puVar1);
      puVar5[3] = *(int32_t *)(lVar7 + -0x34 + (int64_t)puVar1);
      puVar5[4] = *(int32_t *)(lVar7 + -0x30 + (int64_t)puVar1);
      puVar5[5] = *(int32_t *)(lVar7 + -0x2c + (int64_t)puVar1);
      puVar5[6] = *(int32_t *)(lVar7 + -0x28 + (int64_t)puVar1);
      *(int8_t *)(puVar5 + 7) = *(int8_t *)(lVar7 + -0x24 + (int64_t)puVar1);
      *(int16_t *)((int64_t)puVar5 + 0x1e) = *(int16_t *)(lVar7 + -0x22 + (int64_t)puVar1);
      puVar5[8] = *(int32_t *)(lVar7 + -0x20 + (int64_t)puVar1);
      puVar5[9] = *(int32_t *)(lVar7 + -0x1c + (int64_t)puVar1);
      puVar5[10] = *(int32_t *)(lVar7 + -0x18 + (int64_t)puVar1);
      lVar3 = (int64_t)puVar5 + lVar7 + 0x2c;
      puVar5 = puVar1;
    } while (lVar3 != lVar8);
  }
  *puVar4 = *param_2;
  puVar4[1] = param_2[1];
  puVar4[2] = param_2[2];
  puVar4[3] = param_2[3];
  puVar4[4] = param_2[4];
  puVar4[5] = param_2[5];
  puVar4[6] = param_2[6];
  puVar4[7] = param_2[7];
  puVar4[8] = param_2[8];
  puVar4[9] = param_2[9];
  puVar4[10] = param_2[10];
  puVar4[0xb] = param_2[0xb];
  *(int8_t *)(puVar4 + 0xc) = *(int8_t *)(param_2 + 0xc);
  *(int16_t *)((int64_t)puVar4 + 0x32) = *(int16_t *)((int64_t)param_2 + 0x32);
  puVar4[0xd] = param_2[0xd];
  puVar4[0xe] = param_2[0xe];
  puVar4[0xf] = param_2[0xf];
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *param_1 = (int64_t)puVar2;
  param_1[2] = (int64_t)(puVar2 + lVar6 * 0x10);
  param_1[1] = (int64_t)(puVar4 + 0x10);
  return;
}



uint64_t * FUN_1803cf110(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_4096_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



uint64_t *
FUN_1803cf140(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_3312_ptr;
  *param_1 = &unknown_var_3344_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x60,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t * FUN_1803cf190(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_3344_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x60);
  }
  return param_1;
}






// 函数: void FUN_1803cf1d0(uint64_t *param_1)
void FUN_1803cf1d0(uint64_t *param_1)

{
  *param_1 = &unknown_var_3312_ptr;
  *param_1 = &unknown_var_3344_ptr;
  return;
}



uint64_t *
FUN_1803cf200(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_3376_ptr;
  *param_1 = &unknown_var_3408_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x60,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t * FUN_1803cf250(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_3408_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x60);
  }
  return param_1;
}






// 函数: void FUN_1803cf290(uint64_t *param_1)
void FUN_1803cf290(uint64_t *param_1)

{
  *param_1 = &unknown_var_3376_ptr;
  *param_1 = &unknown_var_3408_ptr;
  return;
}



uint64_t *
FUN_1803cf2c0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_3440_ptr;
  *param_1 = &unknown_var_3472_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x40,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t * FUN_1803cf310(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_3472_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x40);
  }
  return param_1;
}






// 函数: void FUN_1803cf350(uint64_t *param_1)
void FUN_1803cf350(uint64_t *param_1)

{
  *param_1 = &unknown_var_3440_ptr;
  *param_1 = &unknown_var_3472_ptr;
  return;
}






// 函数: void FUN_1803cf380(float *param_1,uint64_t param_2,float *param_3)
void FUN_1803cf380(float *param_1,uint64_t param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar14 = fVar1 * fVar2 * 1.0;
  fVar3 = param_3[2];
  fVar19 = fVar1 * fVar1 * 1.0 - 4.371139e-08;
  fVar16 = fVar2 * fVar2 * 1.0 - 4.371139e-08;
  fVar17 = fVar3 * fVar1 * 1.0;
  fVar15 = fVar14 + fVar3 * 1.0;
  fVar18 = fVar3 * fVar2 * 1.0;
  fVar14 = fVar14 - fVar3 * 1.0;
  fVar20 = fVar17 + fVar2 * 1.0;
  fVar13 = fVar18 - fVar1 * 1.0;
  fVar4 = param_1[8];
  fVar5 = param_1[9];
  fVar6 = param_1[10];
  fVar7 = param_1[0xb];
  fVar21 = fVar3 * fVar3 * 1.0 - 4.371139e-08;
  fVar17 = fVar17 - fVar2 * 1.0;
  fVar2 = param_1[4];
  fVar3 = param_1[5];
  fVar8 = param_1[6];
  fVar9 = param_1[7];
  fVar18 = fVar18 + fVar1 * 1.0;
  fVar1 = *param_1;
  fVar10 = param_1[1];
  fVar11 = param_1[2];
  fVar12 = param_1[3];
  *param_1 = fVar15 * fVar2 + fVar19 * fVar1 + fVar17 * fVar4;
  param_1[1] = fVar15 * fVar3 + fVar19 * fVar10 + fVar17 * fVar5;
  param_1[2] = fVar15 * fVar8 + fVar19 * fVar11 + fVar17 * fVar6;
  param_1[3] = fVar15 * fVar9 + fVar19 * fVar12 + fVar17 * fVar7;
  param_1[4] = fVar16 * fVar2 + fVar14 * fVar1 + fVar18 * fVar4;
  param_1[5] = fVar16 * fVar3 + fVar14 * fVar10 + fVar18 * fVar5;
  param_1[6] = fVar16 * fVar8 + fVar14 * fVar11 + fVar18 * fVar6;
  param_1[7] = fVar16 * fVar9 + fVar14 * fVar12 + fVar18 * fVar7;
  param_1[8] = fVar13 * fVar2 + fVar20 * fVar1 + fVar21 * fVar4;
  param_1[9] = fVar13 * fVar3 + fVar20 * fVar10 + fVar21 * fVar5;
  param_1[10] = fVar13 * fVar8 + fVar20 * fVar11 + fVar21 * fVar6;
  param_1[0xb] = fVar13 * fVar9 + fVar20 * fVar12 + fVar21 * fVar7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




