#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part575.c - 4 个函数

// 函数: void FUN_180581090(int64_t param_1,float param_2)
void FUN_180581090(int64_t param_1,float param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int64_t lVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint64_t *puVar15;
  int64_t lVar16;
  int iVar17;
  float fVar18;
  int64_t *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint64_t uStack_178;
  float fStack_170;
  int32_t uStack_16c;
  uint64_t uStack_168;
  float fStack_160;
  int iStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  int iStack_14c;
  uint64_t uStack_148;
  float fStack_140;
  int iStack_138;
  uint64_t uStack_130;
  int8_t auStack_128 [240];
  
  uStack_130 = 0xfffffffffffffffe;
  FUN_1805817b0(param_1,&uStack_168);
  fVar12 = fStack_160;
  fVar11 = uStack_168._4_4_;
  fStack_170 = (fStack_160 + fStack_150) * 0.5;
  fVar10 = (float)uStack_168;
  uStack_178 = CONCAT44((uStack_168._4_4_ + fStack_154) * 0.5,((float)uStack_168 + fStack_158) * 0.5
                       );
  uStack_16c = 0x7f7fffff;
  uStack_148 = 0;
  uStack_168 = (int64_t *)0x0;
  FUN_1804ff330(*(int64_t *)(param_1 + 0x10) + 0x98d230,&uStack_178,0x40800000,&uStack_168);
  if (uStack_168 == (int64_t *)0x0) {
    return;
  }
  fVar14 = uStack_148._4_4_;
  fVar13 = (float)uStack_148;
  uStack_178 = system_cache_buffer;
  plVar19 = uStack_168;
  iVar17 = iStack_15c;
  fVar18 = fStack_160;
LAB_180581210:
  lVar5 = *plVar19;
  uVar2 = *(uint *)(lVar5 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x2a0);
  if ((((((uVar2 != uVar3) && ((*(byte *)(lVar5 + 0x51c) & 0x40) == 0)) &&
        ((*(uint *)(lVar5 + 0x56c) & 0x10000) != 0)) &&
       ((*(int *)(lVar5 + 0x568) == 1 && (*(int *)(lVar5 + 0x570) == 1)))) &&
      (((int)uVar3 < 0 ||
       (uVar2 != *(uint *)((int64_t)(int)uVar3 * 0xa60 + 0x3604 + *(int64_t *)(param_1 + 0x10)))))
      ) && (*(int *)(lVar5 + 0x720) == 0)) {
    lVar16 = 0;
    if (*(byte *)(param_1 + 0x2e8) != 0) {
      do {
        if (*(ushort *)(param_1 + 0x2a8 + lVar16 * 2) == uVar2) goto LAB_18058148d;
        lVar16 = lVar16 + 1;
      } while (lVar16 < (int64_t)(uint64_t)*(byte *)(param_1 + 0x2e8));
    }
    lVar16 = *(int64_t *)(lVar5 + 0x20);
    fVar21 = fVar10 - *(float *)(lVar16 + 0xc);
    fVar22 = fVar11 - *(float *)(lVar16 + 0x10);
    fVar20 = fVar12 - (*(float *)(*(int64_t *)(lVar5 + 0x6d8) + 0x904) + *(float *)(lVar16 + 0x14))
    ;
    fVar21 = fVar22 * fVar22 + fVar21 * fVar21 + fVar20 * fVar20;
    fVar20 = *(float *)(lVar5 + 0x338) * 4.0 + *(float *)(lVar16 + 0x1d0);
    if (fVar21 < fVar20 * fVar20) {
      *(float *)(*(int64_t *)(lVar5 + 0x6e0) + 0x13d4) =
           (fVar20 - SQRT(fVar21)) * param_2 * 20.0 +
           *(float *)(*(int64_t *)(lVar5 + 0x6e0) + 0x13d4);
      lVar16 = *(int64_t *)(lVar5 + 0x6e0);
      if ((1.0 < *(float *)(lVar16 + 0x13d4) || *(float *)(lVar16 + 0x13d4) == 1.0) &&
         ((*(byte *)(lVar16 + 0x1484) & 1) == 0)) {
        *(uint *)(lVar16 + 0x1484) = *(uint *)(lVar16 + 0x1484) | 1;
        lVar16 = lVar5;
        if (-1 < (int)uVar3) {
          lVar16 = (int64_t)(int)uVar3 * 0xa60 + *(int64_t *)(lVar5 + 0x8d8) + 0x30a0;
        }
        puVar15 = (uint64_t *)FUN_180516f50(lVar16,auStack_128);
        lVar16 = *(int64_t *)(lVar5 + 0x6e0);
        *(uint64_t *)(lVar16 + 0x13d8) = *puVar15;
        uVar9 = puVar15[4];
        *(uint64_t *)(lVar16 + 0x13f0) = puVar15[3];
        *(uint64_t *)(lVar16 + 0x13f8) = uVar9;
        uVar6 = *(int32_t *)((int64_t)puVar15 + 0x2c);
        uVar7 = *(int32_t *)(puVar15 + 6);
        uVar8 = *(int32_t *)((int64_t)puVar15 + 0x34);
        *(int32_t *)(lVar16 + 0x1400) = *(int32_t *)(puVar15 + 5);
        *(int32_t *)(lVar16 + 0x1404) = uVar6;
        *(int32_t *)(lVar16 + 0x1408) = uVar7;
        *(int32_t *)(lVar16 + 0x140c) = uVar8;
        *(uint64_t *)(lVar16 + 0x13e0) = puVar15[1];
        *(uint64_t *)(lVar16 + 0x13e8) = puVar15[2];
        *(uint64_t *)(lVar16 + 0x1410) = puVar15[7];
        *(int32_t *)(lVar16 + 0x1418) = *(int32_t *)(puVar15 + 8);
        puVar1 = (ushort *)(*(int64_t *)(lVar5 + 0x6e0) + 0x130);
        *puVar1 = *puVar1 | 0x200;
        FUN_1805a43d0(lVar5 + 0x28);
        lVar16 = render_system_data_config;
        iVar4 = *(int *)(lVar5 + 0x18);
        iStack_138 = iVar4;
        if ((iVar4 != 0) && (uStack_178 != 0)) {
          (**(code **)(uStack_178 + 0x30))(iVar4);
        }
        (**(code **)(lVar16 + 0x58))(iVar4,1);
        uStack_178 = system_cache_buffer;
        if ((iVar4 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x18))();
          uStack_178 = system_cache_buffer;
        }
      }
    }
  }
LAB_18058148d:
  lVar5 = *(int64_t *)(param_1 + 0x10);
  plVar19 = (int64_t *)plVar19[3];
  while (plVar19 == (int64_t *)0x0) {
    if (fVar18 == fStack_150) {
      if (iVar17 == iStack_14c) break;
      iVar17 = iVar17 + 1;
      fVar18 = fStack_158;
      iStack_15c = iVar17;
    }
    else {
      fVar18 = (float)((int)fVar18 + 1);
    }
    fStack_160 = fVar18;
    plVar19 = *(int64_t **)
               ((int64_t)(iStack_15c * *(int *)(lVar5 + 0x98d238) + (int)fVar18) * 9 +
               *(int64_t *)(lVar5 + 0x98d248));
  }
  do {
    if ((plVar19 == (int64_t *)0x0) ||
       (fVar20 = fVar14 - *(float *)((int64_t)plVar19 + 0xc),
       (fVar13 - *(float *)(plVar19 + 1)) * (fVar13 - *(float *)(plVar19 + 1)) + fVar20 * fVar20 <=
       fStack_140)) break;
    plVar19 = (int64_t *)plVar19[3];
    while (plVar19 == (int64_t *)0x0) {
      if (fVar18 == fStack_150) {
        if (iVar17 == iStack_14c) break;
        iVar17 = iVar17 + 1;
        fVar18 = fStack_158;
        iStack_15c = iVar17;
      }
      else {
        fVar18 = (float)((int)fVar18 + 1);
      }
      fStack_160 = fVar18;
      plVar19 = *(int64_t **)
                 ((int64_t)(iStack_15c * *(int *)(lVar5 + 0x98d238) + (int)fVar18) * 9 +
                 *(int64_t *)(lVar5 + 0x98d248));
    }
  } while( true );
  if (plVar19 == (int64_t *)0x0) {
    return;
  }
  goto LAB_180581210;
}



float * FUN_1805815f0(int64_t param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int8_t auVar10 [16];
  float fVar11;
  float fVar12;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int8_t auStack_68 [104];
  
  uStack_a8 = 0x3f800000;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_80 = 0x3f800000;
  uStack_78 = 0;
  uStack_70 = 0x3f80000000000000;
  fVar1 = *(float *)(param_1 + 0x8c);
  fStack_94 = *(float *)(param_1 + 0x90);
  fVar2 = *(float *)(param_1 + 0x94);
  fStack_8c = *(float *)(param_1 + 0x98);
  fVar5 = fVar1 * fVar1 + fStack_94 * fStack_94 + fVar2 * fVar2;
  auVar10 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
  fVar9 = auVar10._0_4_;
  fStack_90 = fVar9 * 0.5 * (3.0 - fVar5 * fVar9 * fVar9);
  fStack_98 = fVar1 * fStack_90;
  fStack_94 = fStack_94 * fStack_90;
  fStack_90 = fVar2 * fStack_90;
  FUN_180084ae0(&uStack_a8,fStack_94,param_3,param_1,fVar1,fVar2);
  lVar4 = *(int64_t *)(param_1 + 0xf0);
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar5 = param_3[2];
  fVar9 = param_3[3];
  pfVar3 = (float *)func_0x00018058fa90(lVar4,auStack_68);
  fVar6 = -*(float *)(lVar4 + 0x98);
  fVar7 = -*(float *)(lVar4 + 0x94);
  fVar8 = -*(float *)(lVar4 + 0x9c);
  fVar11 = pfVar3[4] * fVar6 + *pfVar3 * fVar7 + pfVar3[8] * fVar8 + pfVar3[0xc];
  fVar12 = pfVar3[5] * fVar6 + pfVar3[1] * fVar7 + pfVar3[9] * fVar8 + pfVar3[0xd];
  fVar6 = pfVar3[6] * fVar6 + pfVar3[2] * fVar7 + pfVar3[10] * fVar8 + pfVar3[0xe];
  *param_2 = fStack_98 * fVar12 + (float)uStack_a8 * fVar11 + (float)uStack_88 * fVar6 + fVar1;
  param_2[1] = fStack_94 * fVar12 + uStack_a8._4_4_ * fVar11 + uStack_88._4_4_ * fVar6 + fVar2;
  param_2[2] = fStack_90 * fVar12 + (float)uStack_a0 * fVar11 + (float)uStack_80 * fVar6 + fVar5;
  param_2[3] = fStack_8c * fVar12 + uStack_a0._4_4_ * fVar11 + uStack_80._4_4_ * fVar6 + fVar9;
  return param_2;
}





// 函数: void FUN_1805817b0(int64_t param_1,uint64_t *param_2)
void FUN_1805817b0(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  float fVar5;
  float fVar6;
  int8_t auStack_28 [16];
  int8_t auStack_18 [16];
  
  if (*(char *)(param_1 + 0x3d1) != '\0') {
    lVar1 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0xf0) + 0x38) + 0xb8);
    fVar5 = *(float *)(lVar1 + 0x108) - *(float *)(lVar1 + 0xf8);
    fVar6 = *(float *)(lVar1 + 0x10c) - *(float *)(lVar1 + 0xfc);
    if (fVar6 <= fVar5) {
      fVar6 = fVar5;
    }
    uVar2 = *(uint64_t *)(param_1 + 0x70);
    *param_2 = *(uint64_t *)(param_1 + 0x68);
    param_2[1] = uVar2;
    uVar2 = *(uint64_t *)(param_1 + 0x60);
    param_2[2] = *(uint64_t *)(param_1 + 0x58);
    param_2[3] = uVar2;
    *(float *)(param_2 + 4) = fVar6 * 0.5;
    return;
  }
  puVar3 = (uint64_t *)FUN_1805815f0(param_1,auStack_28);
  puVar4 = (uint64_t *)FUN_1805815f0(param_1,auStack_18,param_1 + 0x68);
  uVar2 = puVar4[1];
  *param_2 = *puVar4;
  param_2[1] = uVar2;
  uVar2 = puVar3[1];
  param_2[2] = *puVar3;
  param_2[3] = uVar2;
  *(int32_t *)(param_2 + 4) = 0x3c23d70a;
  return;
}



uint64_t * FUN_180581880(int64_t param_1,uint64_t *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  uint64_t uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int8_t auVar9 [16];
  float fVar10;
  float fVar11;
  float fStackX_20;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  
  fVar1 = param_3[2];
  fVar6 = *(float *)(param_1 + 0x60) - fVar1;
  lVar4 = *(int64_t *)(param_1 + 0xf0);
  fVar2 = *param_3;
  fVar7 = *(float *)(param_1 + 0x58) - fVar2;
  fVar3 = param_3[1];
  fVar11 = *(float *)(param_1 + 0x5c) - fVar3;
  uVar5 = *(uint64_t *)(param_1 + 0x58);
  uStack_c0 = *(uint64_t *)(param_1 + 0x60);
  uStack_c8._4_4_ = (float)((uint64_t)uVar5 >> 0x20);
  uStack_c8._0_4_ = (float)uVar5;
  *param_2 = uVar5;
  param_2[1] = uStack_c0;
  fStack_b0 = (float)*(uint64_t *)(param_1 + 0x94);
  fStack_b4 = (float)((uint64_t)*(uint64_t *)(param_1 + 0x8c) >> 0x20);
  fStack_b8 = (float)*(uint64_t *)(param_1 + 0x8c);
  fStackX_20 = 0.0;
  fVar10 = (float)uStack_c0;
  fVar6 = fVar11 * fVar11 + fVar7 * fVar7 + fVar6 * fVar6;
  do {
    uStack_c8._0_4_ = (float)uStack_c8 + fStack_b8 * 0.02;
    uStack_c8._4_4_ = uStack_c8._4_4_ + fStack_b4 * 0.02;
    fVar11 = (float)uStack_c8 - fVar2;
    fVar10 = fVar10 + fStack_b0 * 0.02;
    fVar8 = uStack_c8._4_4_ - fVar3;
    uStack_c0 = CONCAT44(uStack_c0._4_4_,fVar10);
    fVar7 = fVar10 - fVar1;
    fVar7 = fVar8 * fVar8 + fVar11 * fVar11 + fVar7 * fVar7;
    if (fVar6 <= fVar7) {
      return param_2;
    }
    fStack_b0 = fStack_b0 - 0.19612;
    *param_2 = uStack_c8;
    param_2[1] = uStack_c0;
    fVar11 = fStack_b4 * fStack_b4 + fStack_b8 * fStack_b8 + fStack_b0 * fStack_b0;
    auVar9 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
    fVar6 = auVar9._0_4_;
    fVar6 = fVar6 * 0.5 * (3.0 - fVar11 * fVar6 * fVar6);
    fVar11 = fVar6 * fVar11;
    fStackX_20 = fStackX_20 + 0.02;
    fVar11 = fVar11 - fVar11 * fVar11 * *(float *)(lVar4 + 0xa4) * 0.02;
    fStack_b8 = fStack_b8 * fVar6 * fVar11;
    fStack_b4 = fStack_b4 * fVar6 * fVar11;
    fStack_b0 = fStack_b0 * fVar6 * fVar11;
    fVar6 = fVar7;
  } while (fStackX_20 < 2.0);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180581b00(int64_t param_1,int64_t param_2,int8_t param_3,int64_t param_4,
void FUN_180581b00(int64_t param_1,int64_t param_2,int8_t param_3,int64_t param_4,
                  int64_t *param_5,float param_6,float *param_7,float *param_8,uint64_t *param_9,
                  int64_t *param_10,uint64_t *param_11,int param_12,int32_t param_13,
                  float param_14,int param_15,int64_t param_16,char param_17)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int iVar3;
  uint64_t *puVar4;
  code *pcVar5;
  int iVar6;
  int8_t uVar7;
  int32_t uVar8;
  float *pfVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint uVar14;
  int64_t lVar15;
  int64_t lVar16;
  int8_t auVar17 [16];
  int8_t auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int64_t *plStackX_8;
  int64_t lStackX_10;
  uint64_t in_stack_fffffffffffffec8;
  uint in_stack_fffffffffffffed0;
  uint in_stack_fffffffffffffed8;
  uint64_t uStack_104;
  uint64_t uStack_fc;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  float fStack_d8;
  float fStack_d4;
  int32_t uStack_d0;
  int32_t uStack_cc;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  int32_t uStack_9c;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  
  uStack_88 = 0xfffffffffffffffe;
  *(int64_t *)(param_1 + 0x10) = param_2;
  *(int8_t *)(param_1 + 200) = param_3;
  plVar1 = (int64_t *)(param_1 + 0xf0);
  *plVar1 = param_4;
  plVar2 = (int64_t *)(param_1 + 0x100);
  plStackX_8 = (int64_t *)*param_5;
  lStackX_10 = param_2;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  lVar15 = *plVar1;
  FUN_1805e8630(plVar2,lVar15 + 0x100,
                (int64_t)*(int *)(lVar15 + 0xf0) * 0xa0 + *(int64_t *)(lVar15 + 0xd0),&plStackX_8)
  ;
  iVar6 = param_15;
  *(int8_t *)(param_1 + 0x226) = 0;
  *(int *)(param_1 + 0x2a4) = param_12;
  uVar12 = param_10[1];
  *(int64_t *)(param_1 + 0x78) = *param_10;
  *(uint64_t *)(param_1 + 0x80) = uVar12;
  *(int32_t *)(param_1 + 0x88) = 0;
  uVar12 = *(uint64_t *)(param_7 + 2);
  *(uint64_t *)(param_1 + 0x18) = *(uint64_t *)param_7;
  *(uint64_t *)(param_1 + 0x20) = uVar12;
  uVar12 = param_9[1];
  *(uint64_t *)(param_1 + 0x28) = *param_9;
  *(uint64_t *)(param_1 + 0x30) = uVar12;
  uVar12 = param_9[3];
  *(uint64_t *)(param_1 + 0x38) = param_9[2];
  *(uint64_t *)(param_1 + 0x40) = uVar12;
  uVar12 = param_9[5];
  *(uint64_t *)(param_1 + 0x48) = param_9[4];
  *(uint64_t *)(param_1 + 0x50) = uVar12;
  uVar12 = param_9[3];
  *(uint64_t *)(param_1 + 0xb0) = param_9[2];
  *(uint64_t *)(param_1 + 0xb8) = uVar12;
  *(float *)(param_1 + 0xc0) = param_14;
  fVar23 = param_8[2];
  fVar19 = param_8[1];
  fVar21 = param_14 * *param_8;
  uStack_e8 = CONCAT44(param_14 * fVar19,fVar21);
  uStack_e0 = CONCAT44(0x7f7fffff,param_14 * fVar23);
  *(float *)(param_1 + 0x8c) = fVar21;
  *(float *)(param_1 + 0x90) = param_14 * fVar19;
  *(float *)(param_1 + 0x94) = param_14 * fVar23;
  *(int32_t *)(param_1 + 0x98) = 0x7f7fffff;
  uVar12 = param_11[1];
  *(uint64_t *)(param_1 + 0x9c) = *param_11;
  *(uint64_t *)(param_1 + 0xa4) = uVar12;
  *(int32_t *)(param_1 + 0xac) = 0;
  uVar12 = *(uint64_t *)(param_7 + 2);
  *(uint64_t *)(param_1 + 0x58) = *(uint64_t *)param_7;
  *(uint64_t *)(param_1 + 0x60) = uVar12;
  if (param_17 == '\0') {
    uVar12 = *(uint64_t *)(param_7 + 2);
    *(uint64_t *)(param_1 + 0x68) = *(uint64_t *)param_7;
    *(uint64_t *)(param_1 + 0x70) = uVar12;
    iVar3 = param_12;
  }
  else {
    lVar16 = (int64_t)param_15 * 0xa60;
    lVar15 = *(int64_t *)(param_1 + 0x10);
    lVar13 = *(int64_t *)
              (*(int64_t *)(*(int64_t *)(*(int64_t *)(lVar16 + 0x3778 + lVar15) + 0x8a8) + 0x260)
              + 0x210);
    uVar14 = *(uint *)((int64_t)*(int *)(*plVar1 + 0xf0) * 0xa0 + 0x58 +
                      *(int64_t *)(*plVar1 + 0xd0)) & 0x300;
    if (uVar14 == 0x100) {
      uVar7 = *(int8_t *)(lVar13 + 0x25fc);
    }
    else if (uVar14 == 0x200) {
      uVar7 = *(int8_t *)(lVar13 + 0x25fe);
    }
    else {
      uVar7 = *(int8_t *)(lVar13 + 0x25fb);
    }
    *(int8_t *)(param_1 + 0x188) = uVar7;
    if (*(int64_t *)(param_1 + 0x108) != 0) {
      func_0x0001805ec5f0(*(int64_t *)(param_1 + 0x108),0xff,fVar21);
    }
    uStack_104 = CONCAT44(param_7[1] + param_8[1],*param_7 + *param_8);
    uStack_fc = CONCAT44(0x7f7fffff,param_7[2] + param_8[2]);
    lVar13 = *(int64_t *)(lVar16 + 0x30c0 + lVar15);
    puVar4 = *(uint64_t **)param_8;
    param_10._4_4_ = (float)((uint64_t)puVar4 >> 0x20);
    param_10._0_4_ = SUB84(puVar4,0);
    fVar19 = param_10._4_4_ * param_10._4_4_ + param_10._0_4_ * param_10._0_4_;
    auVar17 = rsqrtss(ZEXT416((uint)(param_10._0_4_ * param_10._0_4_)),ZEXT416((uint)fVar19));
    fVar23 = auVar17._0_4_;
    fStack_d4 = fVar23 * 0.5 * (3.0 - fVar19 * fVar23 * fVar23);
    fStack_d8 = param_10._0_4_ * fStack_d4;
    fStack_d4 = param_10._4_4_ * fStack_d4;
    uStack_d0 = 0;
    uStack_cc = 0x7f7fffff;
    uStack_e8 = *(uint64_t *)(lVar13 + 0xc);
    uStack_e0 = *(uint64_t *)(lVar13 + 0x14);
    param_10 = puVar4;
    FUN_1803a49f0(&uStack_e8,param_7,&uStack_104,param_1 + 0x68);
    lVar13 = *(int64_t *)(lVar16 + 0x3778 + lVar15);
    fVar23 = (*(float *)(lVar13 + 0x904) / *(float *)(lVar13 + 0x8c0)) * 1.5;
    lVar15 = *(int64_t *)(lVar16 + 0x30c0 + lVar15);
    if (fVar23 < *(float *)(param_1 + 0x70) - *(float *)(lVar15 + 0x14)) {
      uStack_e8 = CONCAT44(param_7[1] + param_8[1],*param_7 + *param_8);
      uStack_e0 = CONCAT44(0x7f7fffff,param_7[2] + param_8[2]);
      fVar23 = fVar23 + *(float *)(lVar15 + 0x14);
      puVar4 = (uint64_t *)(lVar15 + 0xc);
      uStack_c8 = *puVar4;
      uStack_104 = *puVar4;
      uStack_b8 = 0;
      uStack_b0 = 0x7f7fffffbf800000;
      uStack_fc = CONCAT44(0x7f7fffff,fVar23);
      uStack_c0 = CONCAT44(0x7f7fffff,fVar23);
      FUN_1803a49f0(&uStack_c8,*(int32_t *)puVar4,&uStack_e8,param_1 + 0x68);
    }
    pfVar9 = (float *)FUN_1805815f0(param_1,&uStack_104,param_1 + 0x68);
    fVar23 = param_8[1];
    fVar19 = param_8[2];
    fVar21 = (*pfVar9 - *(float *)(param_1 + 0x68)) * *param_8 +
             fVar23 * (pfVar9[1] - *(float *)(param_1 + 0x6c)) +
             fVar19 * (pfVar9[2] - *(float *)(param_1 + 0x70));
    *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x68) - *param_8 * fVar21;
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) - fVar23 * fVar21;
    *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x70) - fVar19 * fVar21;
    iVar3 = *(int *)(param_1 + 0x2a4);
  }
  lVar15 = *(int64_t *)(param_1 + 0x10);
  if (iVar3 == -1) {
    if ((*(int *)((int64_t)iVar6 * 0xa60 + 0x3610 + lVar15) == 2) &&
       (0.01 < *(float *)(SYSTEM_STATE_MANAGER + 0x17a0))) {
      uVar8 = FUN_1802e5900(*(int64_t *)(lVar15 + 0x18) + 0x8228,0xffffff01);
      *(int32_t *)(param_1 + 0x2a4) = uVar8;
    }
  }
  else if ((*(int *)((int64_t)iVar6 * 0xa60 + 0x3610 + lVar15) == 2) &&
          (*(float *)(SYSTEM_STATE_MANAGER + 0x17a0) <= 0.01)) {
    FUN_1802e5a50(*(int64_t *)(lVar15 + 0x18) + 0x8228);
    *(int32_t *)(param_1 + 0x2a4) = 0xffffffff;
  }
  *(int64_t **)(*plVar1 + 0xf8) = plVar2;
  plVar11 = (int64_t *)*plVar2;
  if (plVar11 != (int64_t *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  param_10 = (int64_t *)plVar11[4];
  if (plVar11 != (int64_t *)0x0) {
    (**(code **)(*plVar11 + 0x38))(plVar11);
  }
  if (param_10 == (int64_t *)0x0) {
    uVar12 = *(uint64_t *)(*(int64_t *)(param_1 + 0x10) + 0x18);
    uVar10 = FUN_1804dfed0(plVar2,&param_10);
    in_stack_fffffffffffffec8 = 0;
    FUN_180198b90(uVar12,uVar10,1,1,0,in_stack_fffffffffffffed0 & 0xffffff00,
                  in_stack_fffffffffffffed8 & 0xffffff00);
  }
  plVar2 = (int64_t *)*plVar1;
  plVar11 = plVar1;
  if ((*(uint *)((int64_t)(int)plVar2[0x1e] * 0xa0 + 0x50 + plVar2[0x1a]) >> 8 & 1) == 0) {
    plVar11 = plVar2;
  }
  lVar15 = *plVar11;
  lVar13 = *(int64_t *)(lVar15 + 0xf8);
  if (lVar13 != 0) {
    uVar12 = func_0x00018058fa90(plVar2,&uStack_c8);
    FUN_1805ecc80(lVar13,uVar12);
    if ((*(uint64_t *)
          ((int64_t)*(int *)(lVar15 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar15 + 0xd0)) &
        0x80000000) != 0) {
      FUN_1805ece60(*(uint64_t *)(lVar15 + 0xf8),(int)plVar2[0x19]);
    }
  }
  uStack_c8 = 0x3f800000;
  uStack_c0 = 0;
  uStack_98 = 0;
  uStack_90 = 0x3f80000000000000;
  uStack_b8 = *(uint64_t *)param_8;
  uStack_b0 = *(uint64_t *)(param_8 + 2);
  fStack_a8 = 0.0;
  fStack_a4 = 0.0;
  fStack_a0 = 1.0;
  uStack_9c = 0x7f7fffff;
  FUN_180084ae0(&uStack_c8);
  fVar23 = *param_7;
  fVar19 = param_7[1];
  fVar21 = param_7[2];
  fVar22 = param_7[3];
  plVar2 = (int64_t *)**(int64_t **)(*plVar1 + 0xf8);
  param_10 = plVar2;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  if (((((((fVar23 != *(float *)(plVar2 + 0xc)) || (fVar19 != *(float *)((int64_t)plVar2 + 100)))
         || (fVar21 != *(float *)(plVar2 + 0xd))) ||
        (((float)uStack_c8 != *(float *)(plVar2 + 6) ||
         (uStack_c8._4_4_ != *(float *)((int64_t)plVar2 + 0x34))))) ||
       (((float)uStack_c0 != *(float *)(plVar2 + 7) ||
        (((float)uStack_b8 != *(float *)(plVar2 + 8) ||
         (uStack_b8._4_4_ != *(float *)((int64_t)plVar2 + 0x44))))))) ||
      ((float)uStack_b0 != *(float *)(plVar2 + 9))) ||
     (((fStack_a8 != *(float *)(plVar2 + 10) || (fStack_a4 != *(float *)((int64_t)plVar2 + 0x54)))
      || (fStack_a0 != *(float *)(plVar2 + 0xb))))) {
    plVar2[6] = uStack_c8;
    plVar2[7] = uStack_c0;
    *(float *)(plVar2 + 8) = (float)uStack_b8;
    *(float *)((int64_t)plVar2 + 0x44) = uStack_b8._4_4_;
    *(float *)(plVar2 + 9) = (float)uStack_b0;
    *(int32_t *)((int64_t)plVar2 + 0x4c) = uStack_b0._4_4_;
    plVar2[10] = CONCAT44(fStack_a4,fStack_a8);
    plVar2[0xb] = CONCAT44(uStack_9c,fStack_a0);
    *(float *)(plVar2 + 0xc) = fVar23;
    *(float *)((int64_t)plVar2 + 100) = fVar19;
    *(float *)(plVar2 + 0xd) = fVar21;
    *(float *)((int64_t)plVar2 + 0x6c) = fVar22;
    FUN_180254610(plVar2);
    FUN_1802eace0();
  }
  *(short *)(plVar2 + 0x56) = (short)plVar2[0x56] + 1;
  if (plVar2[0x2d] != 0) {
    func_0x0001802eeba0();
  }
  *(float *)(param_1 + 0x288) =
       (float)*(int *)((int64_t)*(int *)(*plVar1 + 0xf0) * 0xa0 + *(int64_t *)(*plVar1 + 0xd0) +
                      0x78) + param_6;
  *(int *)(param_1 + 0x2a0) = param_15;
  *(uint64_t *)(param_1 + 0x290) =
       *(uint64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x298) * 8);
  *(int32_t *)(param_1 + 0xc4) = param_13;
  lVar15 = *plVar1;
  if (((*(uint64_t *)
         ((int64_t)*(int *)(lVar15 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar15 + 0xd0)) &
       0x20000000) == 0) || (*(int64_t *)(lVar15 + 0x38) == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(int8_t *)(param_1 + 0x3d1) = uVar7;
  *(int64_t *)(param_1 + 0x3c8) = param_16;
  *(int32_t *)(param_1 + 0x2fc) = 0xffff;
  *(int32_t *)(param_1 + 0x2ec) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x2f4) = 0xffffffffbf800000;
  *(int8_t *)(param_1 + 0x2e8) = 0;
  *(int32_t *)(param_1 + 0x330) = 0xf149f2ca;
  *(int32_t *)(param_1 + 0x370) = 0xf149f2ca;
  *(int8_t *)(param_1 + 0x380) = 0xff;
  *(int8_t *)(param_1 + 0x3c4) = 0;
  *(int8_t *)(param_1 + 0x3d0) = 0;
  *(uint64_t *)(param_1 + 0x280) = 0;
  fVar23 = *(float *)(param_1 + 0x8c);
  fVar19 = *(float *)(param_1 + 0x90);
  fVar21 = *(float *)(param_1 + 0x94);
  auVar17._4_4_ = fVar21;
  auVar17._0_4_ = fVar21;
  auVar17._8_4_ = fVar21;
  auVar17._12_4_ = fVar21;
  auVar18._4_12_ = auVar17._4_12_;
  auVar18._0_4_ = fVar21 * fVar21;
  fVar20 = fVar19 * fVar19 + fVar23 * fVar23 + auVar18._0_4_;
  auVar17 = rsqrtss(auVar18,ZEXT416((uint)fVar20));
  fVar22 = auVar17._0_4_;
  fVar22 = fVar22 * 0.5 * (3.0 - fVar20 * fVar22 * fVar22);
  uVar7 = *(int8_t *)(param_1 + 0x3d0);
  if (0.1 < fVar23 * fVar22 * (*(float *)(lStackX_10 + 0x98d97c) - *(float *)(param_1 + 0x58)) +
            fVar19 * fVar22 * (*(float *)(lStackX_10 + 0x98d980) - *(float *)(param_1 + 0x5c)) +
            fVar21 * fVar22 * (*(float *)(lStackX_10 + 0x98d984) - *(float *)(param_1 + 0x60))) {
    uVar7 = 1;
  }
  *(int8_t *)(param_1 + 0x3d0) = uVar7;
  lVar15 = *plVar1;
  if (((*(uint64_t *)
         ((int64_t)*(int *)(lVar15 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar15 + 0xd0)) &
       0x100000000) == 0) && (param_16 == 0)) {
    FUN_1802ee720(plVar2);
    lVar15 = *plVar1;
  }
  lVar13 = (int64_t)*(int *)(lVar15 + 0xf0) * 0xa0;
  if (((*(uint64_t *)(lVar13 + 0x50 + *(int64_t *)(lVar15 + 0xd0)) & 0x20000000) != 0) &&
     (lVar16 = *(int64_t *)(lVar15 + 0x38), lVar16 != 0)) {
    if ((*(int64_t *)(lVar16 + 0xb8) == 0) && (*(int64_t *)(lVar16 + 0xa8) != 0)) {
      FUN_1800b4e00(lVar13,lVar16,0xffffffff);
      lVar16 = *(int64_t *)(lVar15 + 0x38);
    }
    if (*(float *)(*(int64_t *)(lVar16 + 0xb8) + 0x128) == 0.0) {
      FUN_18014aff0();
    }
  }
  if ((*(int *)(*plVar1 + 0xc0) != -1) && (*(char *)(render_system_data_config + 0x210) == '\0')) {
    FUN_1804f83f0(*(uint64_t *)(param_1 + 0x10),*(int *)(*plVar1 + 0xc0),param_1 + 0x58,1,
                  in_stack_fffffffffffffec8 & 0xffffffffffffff00,0xffffffff,0xffffffff,0,
                  (int64_t *)(param_1 + 0xd8),0);
    plVar1 = *(int64_t **)(param_1 + 0xd8);
    if (plVar1 != (int64_t *)0x0) {
      pcVar5 = *(code **)(*plVar1 + 0xe8);
      if (*(char *)(param_1 + 0x3d2) == '\0') {
        uStack_104 = *(uint64_t *)(param_1 + 0x8c);
        uStack_fc = *(uint64_t *)(param_1 + 0x94);
      }
      else {
        (**(code **)(**(int64_t **)(param_1 + 0xe8) + 0xa0))
                  (*(int64_t **)(param_1 + 0xe8),&uStack_104);
      }
      (*pcVar5)(plVar1,&uStack_104);
    }
  }
  FUN_180585590(param_1);
  if ((int64_t *)*param_5 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_5 + 0x38))();
  }
  return;
}



float * FUN_180582660(float *param_1,uint64_t param_2,uint64_t param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int8_t auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStackX_10;
  float fStackX_14;
  float fStackX_18;
  float fStackX_1c;
  
  fStackX_10 = (float)param_2;
  fStackX_14 = (float)((uint64_t)param_2 >> 0x20);
  fStackX_1c = (float)((uint64_t)param_3 >> 0x20);
  fStackX_18 = (float)param_3;
  param_1[2] = 0.0;
  fVar8 = fStackX_1c;
  fVar10 = fStackX_18;
  fVar2 = 0.0;
  fVar3 = 0.0;
  while( true ) {
    fVar5 = fVar3;
    fVar1 = fVar2;
    fVar2 = fVar10 * 0.02 + fVar1;
    fVar3 = fVar8 * 0.02 + fVar5;
    fVar9 = param_1[2];
    if (param_1[2] < fVar3) {
      param_1[2] = fVar3;
      fVar9 = fVar3;
    }
    fVar7 = fVar2 - fVar1;
    if (fVar7 <= 0.01) break;
    fVar8 = fVar8 - 0.19612;
    fVar4 = 1.0 - SQRT(fVar10 * fVar10 + fVar8 * fVar8) * param_4 * 0.02;
    fVar10 = fVar10 * fVar4;
    fVar8 = fVar8 * fVar4;
    if (((0.0 < fStackX_14 - fVar3) && (fVar8 <= 0.0)) || (fStackX_10 <= fVar2)) break;
  }
  if (fStackX_10 <= fVar2) {
    fVar5 = ((fStackX_10 - fVar1) / fVar7) * (fVar3 - fVar5) + fVar5;
    fVar8 = fStackX_14 - fVar5;
    param_1[1] = fVar5 - fStackX_14;
    *param_1 = fVar8 * fVar8 + 0.0;
    return param_1;
  }
  *param_1 = (fStackX_10 - fVar2) * (fStackX_10 - fVar2) +
             (fStackX_14 - fVar3) * (fStackX_14 - fVar3);
  if ((fStackX_14 <= fVar9) || (0.0 < fVar8)) {
    if ((0.01 < fVar7) || (fVar8 < 0.0)) {
      fVar8 = fStackX_1c * fStackX_1c + fStackX_18 * fStackX_18;
      auVar6 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar10 = auVar6._0_4_;
      if (fStackX_1c * fVar10 * 0.5 * (3.0 - fVar8 * fVar10 * fVar10) < 0.6156615)
      goto LAB_180582831;
    }
    param_1[1] = 1e+30;
  }
  else {
LAB_180582831:
    param_1[1] = -1e+30;
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805828f0(int64_t param_1)
void FUN_1805828f0(int64_t param_1)

{
  int32_t uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  
  lVar7 = 0;
  if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
    iVar5 = _Mtx_lock(0x180c95528);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
    uVar1 = *(int32_t *)(param_1 + 0xc);
    cVar4 = SystemBufferProcessor(0x180c95578,0,&system_param1_ptr);
    if ((cVar4 != '\0') && (cVar4 = SystemBufferProcessor(0x180c95578,0x13,&unknown_var_3472_ptr), cVar4 != '\0'))
    {
      SystemBufferProcessor(0x180c95578,uVar1,&unknown_var_3296_ptr);
    }
    render_system_config = render_system_config & 0xffffffff00000000;
    iVar5 = (int)(render_system_config - render_system_config >> 3);
    lVar6 = render_system_config;
    if (0 < iVar5) {
      do {
        lVar2 = *(int64_t *)(lVar6 + lVar7 * 8);
        if ((lVar2 != 0) && (*(char *)(*(int64_t *)(lVar2 + 0x58f8) + 0x1c) != '\0')) {
          FUN_1805b59d0(lVar2,0x180c95578);
          lVar6 = render_system_config;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar5);
    }
    if (render_system_config != 0) {
      FUN_180567f30(render_system_config,0x180c95578);
    }
    render_system_config = 0;
                    // WARNING: Subroutine does not return
    memset(render_system_config,0,(int64_t)(render_system_config >> 3));
  }
  *(int16_t *)(param_1 + 0x3d1) = 0;
  if (*(int64_t *)(*(int64_t *)(param_1 + 0xe0) + 0x20) != 0) {
    FUN_180198980();
  }
  plVar3 = *(int64_t **)(param_1 + 0xe0);
  *(uint64_t *)(param_1 + 0xe0) = 0;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  *(uint64_t *)(param_1 + 0xe8) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



