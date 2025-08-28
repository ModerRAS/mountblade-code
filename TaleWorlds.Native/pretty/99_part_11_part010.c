#include "TaleWorlds.Native.Split.h"

// 99_part_11_part010.c - 8 个函数

// 函数: void FUN_1806e0451(void)
void FUN_1806e0451(void)

{
  return;
}



float * FUN_1806e04e0(int64_t param_1,float *param_2)

{
  int64_t *plVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int8_t auStack_a8 [16];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  
  (**(code **)(**(int64_t **)(param_1 + 0x60) + 0x30))
            (*(int64_t **)(param_1 + 0x60),&plStackX_8,&plStackX_10);
  FUN_1806dfd60(param_1,&fStack_98,plStackX_8);
  fVar6 = 0.0;
  if (plStackX_8 == (int64_t *)0x0) {
LAB_1806e0599:
    fVar5 = 0.0;
    fVar3 = 0.0;
    fVar4 = 0.0;
  }
  else {
    plVar1 = (int64_t *)0x0;
    if ((short)plStackX_8[1] == 6) {
      plVar1 = plStackX_8;
    }
    if (plVar1 != (int64_t *)0x0) goto LAB_1806e0599;
    (**(code **)(*plStackX_8 + 0x130))(plStackX_8,auStack_a8);
    pfVar2 = (float *)(**(code **)(*plStackX_8 + 0x140))(plStackX_8,auStack_a8);
    fVar5 = *pfVar2;
    fVar3 = pfVar2[1];
    fVar4 = pfVar2[2];
  }
  if (plStackX_10 != (int64_t *)0x0) {
    plVar1 = (int64_t *)0x0;
    if ((short)plStackX_10[1] == 6) {
      plVar1 = plStackX_10;
    }
    if (plVar1 == (int64_t *)0x0) {
      (**(code **)(*plStackX_10 + 0x130))(plStackX_10,auStack_a8);
      pfVar2 = (float *)(**(code **)(*plStackX_10 + 0x140))(plStackX_10,auStack_a8);
      fVar6 = *pfVar2;
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      goto LAB_1806e05fb;
    }
  }
  fVar7 = 0.0;
  fVar8 = 0.0;
LAB_1806e05fb:
  fStack_88 = (fVar6 - fVar5) - fStack_88;
  fStack_84 = (fVar7 - fVar3) - fStack_84;
  fStack_80 = (fVar8 - fVar4) - fStack_80;
  fStack_88 = fStack_88 + fStack_88;
  fStack_84 = fStack_84 + fStack_84;
  fVar5 = fStack_8c * fStack_8c - 0.5;
  fStack_80 = fStack_80 + fStack_80;
  fVar6 = fStack_94 * fStack_84 + fStack_98 * fStack_88 + fStack_90 * fStack_80;
  *param_2 = (fVar5 * fStack_88 - (fStack_94 * fStack_80 - fStack_90 * fStack_84) * fStack_8c) +
             fStack_98 * fVar6;
  param_2[1] = (fVar5 * fStack_84 - (fStack_90 * fStack_88 - fStack_98 * fStack_80) * fStack_8c) +
               fStack_94 * fVar6;
  param_2[2] = (fVar5 * fStack_80 - (fStack_98 * fStack_84 - fStack_94 * fStack_88) * fStack_8c) +
               fStack_90 * fVar6;
  return param_2;
}



float * FUN_1806e0750(int64_t param_1,float *param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  float *pfVar3;
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
  float fStackX_8;
  float fStackX_10;
  int32_t uStackX_18;
  int32_t uStackX_1c;
  float fStackX_20;
  float fStack_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
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
  float fStack_108;
  int8_t auStack_100 [16];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  
  (**(code **)(**(int64_t **)(param_1 + 0x60) + 0x30))
            (*(int64_t **)(param_1 + 0x60),&uStackX_18,&uStack_128);
  FUN_1806dfd60(param_1,&fStack_120,CONCAT44(uStackX_1c,uStackX_18));
  FUN_1806dfd60(param_1,&fStack_f0,CONCAT44(uStack_124,uStack_128));
  plVar1 = (int64_t *)CONCAT44(uStackX_1c,uStackX_18);
  fStack_140 = 0.0;
  if (plVar1 == (int64_t *)0x0) {
LAB_1806e086b:
    fStack_134 = 0.0;
    fVar8 = 0.0;
    fStack_148 = 0.0;
    fStackX_20 = 0.0;
    fStack_138 = 0.0;
    fStack_12c = 0.0;
  }
  else {
    plVar2 = (int64_t *)0x0;
    if ((short)plVar1[1] == 6) {
      plVar2 = plVar1;
    }
    if (plVar2 != (int64_t *)0x0) goto LAB_1806e086b;
    pfVar3 = (float *)(**(code **)(*plVar1 + 0x130))(plVar1,auStack_100);
    fStackX_20 = *pfVar3;
    fStack_138 = pfVar3[1];
    fStack_12c = pfVar3[2];
    pfVar3 = (float *)(**(code **)(*plVar1 + 0x140))(plVar1,auStack_100);
    fStack_134 = *pfVar3;
    fVar8 = pfVar3[2];
    fStack_148 = pfVar3[1];
  }
  fVar4 = 0.0;
  plVar1 = (int64_t *)CONCAT44(uStack_124,uStack_128);
  if (plVar1 != (int64_t *)0x0) {
    plVar2 = (int64_t *)0x0;
    if ((short)plVar1[1] == 6) {
      plVar2 = plVar1;
    }
    if (plVar2 == (int64_t *)0x0) {
      pfVar3 = (float *)(**(code **)(*plVar1 + 0x130))(plVar1,auStack_100);
      fStackX_8 = *pfVar3;
      fStack_13c = pfVar3[1];
      fStack_130 = pfVar3[2];
      pfVar3 = (float *)(**(code **)(*plVar1 + 0x140))(plVar1,auStack_100);
      fStack_140 = *pfVar3;
      fStackX_10 = pfVar3[1];
      fVar4 = pfVar3[2];
      goto LAB_1806e0935;
    }
  }
  fStackX_10 = 0.0;
  fStackX_8 = 0.0;
  fStack_13c = 0.0;
  fStack_130 = 0.0;
LAB_1806e0935:
  fVar9 = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x38);
  fVar6 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x3c);
  fVar7 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x40);
  fVar13 = fStack_114 * fStack_114 - 0.5;
  fVar5 = fStack_11c * fVar6 + fStack_120 * fVar9 + fStack_118 * fVar7;
  fVar16 = (fStack_11c * fVar7 - fStack_118 * fVar6) * fStack_114 + fVar13 * fVar9 +
           fStack_120 * fVar5;
  fVar10 = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x58);
  fVar15 = (fStack_118 * fVar9 - fStack_120 * fVar7) * fStack_114 + fVar13 * fVar6 +
           fStack_11c * fVar5;
  fVar14 = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x54);
  fVar12 = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x5c);
  fVar11 = fStack_e4 * fStack_e4 - 0.5;
  fVar9 = (fStack_120 * fVar6 - fStack_11c * fVar9) * fStack_114 + fVar13 * fVar7 +
          fStack_118 * fVar5;
  fVar5 = fStack_ec * fVar10 + fStack_f0 * fVar14 + fStack_e8 * fVar12;
  fVar7 = (fStack_ec * fVar12 - fStack_e8 * fVar10) * fStack_e4 + fVar11 * fVar14 +
          fStack_f0 * fVar5;
  fVar6 = (fStack_e8 * fVar14 - fStack_f0 * fVar12) * fStack_e4 + fVar11 * fVar10 +
          fStack_ec * fVar5;
  fVar5 = (fStack_f0 * fVar10 - fStack_ec * fVar14) * fStack_e4 + fVar11 * fVar12 +
          fStack_e8 * fVar5;
  fStack_110 = (((fStackX_8 - (fVar5 * fStackX_10 - fVar6 * fVar4)) - fStackX_20) +
               (fVar9 * fStack_148 - fVar15 * fVar8)) - fStack_110;
  fStack_110 = fStack_110 + fStack_110;
  fStack_108 = (((fStack_130 - (fVar6 * fStack_140 - fVar7 * fStackX_10)) - fStack_12c) +
               (fVar15 * fStack_134 - fVar16 * fStack_148)) - fStack_108;
  fStack_10c = (((fStack_13c - (fVar7 * fVar4 - fVar5 * fStack_140)) - fStack_138) +
               (fVar8 * fVar16 - fVar9 * fStack_134)) - fStack_10c;
  fStack_108 = fStack_108 + fStack_108;
  fStack_10c = fStack_10c + fStack_10c;
  fVar8 = fStack_11c * fStack_10c + fStack_120 * fStack_110 + fStack_118 * fStack_108;
  *param_2 = (fVar13 * fStack_110 - (fStack_11c * fStack_108 - fStack_118 * fStack_10c) * fStack_114
             ) + fStack_120 * fVar8;
  param_2[1] = (fVar13 * fStack_10c -
               (fStack_118 * fStack_110 - fStack_120 * fStack_108) * fStack_114) +
               fStack_11c * fVar8;
  param_2[2] = (fVar13 * fStack_108 -
               (fStack_120 * fStack_10c - fStack_11c * fStack_110) * fStack_114) +
               fStack_118 * fVar8;
  return param_2;
}



int32_t * FUN_1806e0d70(int64_t param_1,int32_t *param_2)

{
  float *pfVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
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
  int64_t *plStack_118;
  int64_t *plStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  
  (**(code **)(**(int64_t **)(param_1 + 0x60) + 0x30))
            (*(int64_t **)(param_1 + 0x60),&plStack_118,&plStack_110);
  if (plStack_118 == (int64_t *)0x0) {
    fStack_e8 = 0.0;
    fStack_e4 = 0.0;
    uStack_f8 = 0;
    uStack_f0 = 0x3f80000000000000;
    fStack_e0 = 0.0;
  }
  else {
    (**(code **)(*plStack_118 + 0x90))(plStack_118,&uStack_f8);
  }
  fVar14 = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x38);
  fVar6 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x3c);
  fVar11 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x40);
  fVar8 = uStack_f0._4_4_ * uStack_f0._4_4_ - 0.5;
  fVar4 = uStack_f8._4_4_ * fVar6 + (float)uStack_f8 * fVar14 + (float)uStack_f0 * fVar11;
  fVar20 = (uStack_f8._4_4_ * fVar11 - (float)uStack_f0 * fVar6) * uStack_f0._4_4_ + fVar8 * fVar14
           + (float)uStack_f8 * fVar4 + fStack_e8;
  fVar19 = ((float)uStack_f8 * fVar6 - uStack_f8._4_4_ * fVar14) * uStack_f0._4_4_ + fVar8 * fVar11
           + (float)uStack_f0 * fVar4 + fStack_e0;
  fVar14 = ((float)uStack_f0 * fVar14 - (float)uStack_f8 * fVar11) * uStack_f0._4_4_ + fVar8 * fVar6
           + uStack_f8._4_4_ * fVar4 + fStack_e4;
  pfVar1 = (float *)SystemCore_Initializer(&uStack_f8,&fStack_108);
  fVar4 = *pfVar1;
  fVar6 = pfVar1[1];
  fVar8 = pfVar1[2];
  fVar11 = pfVar1[3];
  if (plStack_110 == (int64_t *)0x0) {
    uStack_f8 = 0;
    uStack_f0 = 0x3f80000000000000;
    fStack_e8 = 0.0;
    fStack_e4 = 0.0;
    fStack_e0 = 0.0;
  }
  else {
    (**(code **)(*plStack_110 + 0x90))(plStack_110,&uStack_f8);
  }
  fVar15 = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x54);
  fVar7 = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x58);
  fVar12 = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x5c);
  fVar9 = uStack_f0._4_4_ * uStack_f0._4_4_ - 0.5;
  fVar5 = uStack_f8._4_4_ * fVar7 + (float)uStack_f8 * fVar15 + (float)uStack_f0 * fVar12;
  fVar17 = (uStack_f8._4_4_ * fVar12 - (float)uStack_f0 * fVar7) * uStack_f0._4_4_ + fVar9 * fVar15
           + (float)uStack_f8 * fVar5 + fStack_e8;
  fVar16 = ((float)uStack_f0 * fVar15 - (float)uStack_f8 * fVar12) * uStack_f0._4_4_ + fVar9 * fVar7
           + uStack_f8._4_4_ * fVar5 + fStack_e4;
  fVar18 = ((float)uStack_f8 * fVar7 - uStack_f8._4_4_ * fVar15) * uStack_f0._4_4_ + fVar9 * fVar12
           + (float)uStack_f0 * fVar5 + fStack_e0;
  puVar2 = (uint64_t *)SystemCore_Initializer(&uStack_f8,&fStack_108);
  uStack_d8 = *puVar2;
  uStack_d0 = puVar2[1];
  fVar20 = fVar17 - fVar20;
  fStack_108 = -fVar4;
  fStack_104 = -fVar6;
  fStack_100 = -fVar8;
  fVar14 = fVar16 - fVar14;
  fVar19 = fVar18 - fVar19;
  fVar20 = fVar20 + fVar20;
  fVar14 = fVar14 + fVar14;
  fVar19 = fVar19 + fVar19;
  fVar10 = fStack_104 * fVar19;
  fVar9 = fVar11 * fVar11 - 0.5;
  fVar7 = fStack_108 * fVar20 + fStack_104 * fVar14 + fStack_100 * fVar19;
  fVar15 = fStack_100 * fVar20;
  fVar4 = fStack_100 * fVar14;
  fVar8 = fVar7 * fStack_108;
  fVar6 = fStack_108 * fVar19;
  fVar13 = fStack_108 * fVar14;
  fVar5 = fVar7 * fStack_104;
  fVar12 = fStack_104 * fVar20;
  fVar7 = fVar7 * fStack_100;
  fStack_fc = fVar11;
  fStack_c8 = fVar17;
  fStack_c4 = fVar16;
  fStack_c0 = fVar18;
  puVar3 = (int32_t *)SystemCore_Initializer(&fStack_108,&uStack_f8,&uStack_d8);
  *param_2 = *puVar3;
  param_2[1] = puVar3[1];
  param_2[2] = puVar3[2];
  param_2[3] = puVar3[3];
  param_2[4] = (fVar10 - fVar4) * fVar11 + fVar9 * fVar20 + fVar8;
  param_2[5] = (fVar15 - fVar6) * fVar11 + fVar9 * fVar14 + fVar5;
  param_2[6] = (fVar13 - fVar12) * fVar11 + fVar9 * fVar19 + fVar7;
  return param_2;
}



uint64_t FUN_1806e12f0(uint64_t param_1,int64_t param_2)

{
  char *pcVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  iVar2 = strcmp();
  if (iVar2 != 0) {
    lVar3 = 0;
    lVar4 = lVar3;
    do {
      pcVar1 = &rendering_buffer_2448_ptr + lVar4;
      lVar4 = lVar4 + 1;
      if (*pcVar1 != *(char *)(param_2 + -1 + lVar4)) {
        do {
          lVar4 = lVar3 + 1;
          if (*(char *)(param_2 + lVar3) != (&rendering_buffer_2396_ptr)[lVar3]) {
            return 0;
          }
          lVar3 = lVar4;
        } while (lVar4 != 7);
        return 1;
      }
    } while (lVar4 != 8);
  }
  return 1;
}



float FUN_1806e1390(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = SQRT(*param_1 * *param_1 + param_1[1] * param_1[1] + param_1[2] * param_1[2] +
               param_1[3] * param_1[3]);
  if (fVar2 != 0.0) {
    fVar1 = 1.0 / fVar2;
    *param_1 = fVar1 * *param_1;
    param_1[1] = fVar1 * param_1[1];
    param_1[2] = fVar1 * param_1[2];
    param_1[3] = fVar1 * param_1[3];
  }
  return fVar2;
}






// 函数: void FUN_1806e13f0(int64_t param_1,uint param_2)
void FUN_1806e13f0(int64_t param_1,uint param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t *puVar4;
  int64_t lVar5;
  int64_t lVar6;
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
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  uint64_t uStack_b8;
  int8_t auStack_b0 [8];
  int8_t auStack_a8 [16];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  
  (**(code **)(**(int64_t **)(param_1 + 0x48) + 0x30))
            (*(int64_t **)(param_1 + 0x48),&uStack_b8,auStack_b0);
  FUN_1806dfd60(param_1 + -0x18,&fStack_98,(&uStack_b8)[param_2]);
  fStack_c0 = -fStack_90;
  fStack_c8 = -fStack_98;
  fStack_c4 = -fStack_94;
  fVar12 = fStack_8c * fStack_8c - 0.5;
  lVar5 = (uint64_t)param_2 * 0x1c;
  fStack_bc = fStack_8c;
  lVar6 = param_1 + 0x10 + lVar5;
  fStack_88 = *(float *)(lVar6 + 0x10) - fStack_88;
  fStack_84 = *(float *)(lVar6 + 0x14) - fStack_84;
  fStack_80 = *(float *)(lVar6 + 0x18) - fStack_80;
  fVar14 = fStack_88 + fStack_88;
  fVar13 = fStack_84 + fStack_84;
  fVar17 = fStack_80 + fStack_80;
  fVar16 = fStack_c4 * fVar17;
  fVar15 = fStack_c0 * fVar14;
  fVar7 = fStack_c0 * fVar13;
  fVar11 = fStack_c4 * fVar13 + fStack_c8 * fVar14 + fStack_c0 * fVar17;
  fVar9 = fVar11 * fStack_c8;
  fVar8 = fStack_c8 * fVar17;
  fVar19 = fStack_c8 * fVar13;
  fVar10 = fVar11 * fStack_c4;
  fVar18 = fStack_c4 * fVar14;
  fVar11 = fVar11 * fStack_c0;
  puVar4 = (int32_t *)SystemCore_Initializer(&fStack_c8,auStack_a8);
  lVar6 = *(int64_t *)(param_1 + 0x50);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *(int32_t *)(lVar6 + 0x10 + lVar5) = *puVar4;
  *(int32_t *)(lVar6 + 0x14 + lVar5) = uVar1;
  *(int32_t *)(lVar6 + 0x18 + lVar5) = uVar2;
  *(int32_t *)(lVar6 + 0x1c + lVar5) = uVar3;
  *(float *)(lVar6 + 0x20 + lVar5) = (fVar16 - fVar7) * fStack_8c + fVar12 * fVar14 + fVar9;
  *(float *)(lVar6 + 0x24 + lVar5) = (fVar15 - fVar8) * fStack_8c + fVar12 * fVar13 + fVar10;
  *(float *)(lVar6 + 0x28 + lVar5) = (fVar19 - fVar18) * fStack_8c + fVar12 * fVar17 + fVar11;
                    // WARNING: Could not recover jumptable at 0x0001806e1620. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(int64_t **)(param_1 + 0x48) + 0x40))();
  return;
}






// 函数: void FUN_1806e1630(int64_t param_1)
void FUN_1806e1630(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  
  lVar1 = *(int64_t *)(param_1 + 0x50);
  if (lVar1 != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  plVar2 = (int64_t *)(param_1 + -0x18);
  *(uint64_t *)(param_1 + 0x50) = 0;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,1);
  }
  return;
}






// 函数: void FUN_1806e1680(int64_t param_1,float *param_2)
void FUN_1806e1680(int64_t param_1,float *param_2)

{
  int64_t lVar1;
  int64_t lStack_18;
  int64_t lStack_10;
  
  (**(code **)(**(int64_t **)(param_1 + 0x48) + 0x30))
            (*(int64_t **)(param_1 + 0x48),&lStack_18,&lStack_10);
  if (lStack_18 == 0) {
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) - *param_2;
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) - param_2[1];
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) - param_2[2];
    lVar1 = *(int64_t *)(param_1 + 0x50);
    *(float *)(lVar1 + 0x20) = *(float *)(lVar1 + 0x20) - *param_2;
    *(float *)(lVar1 + 0x24) = *(float *)(lVar1 + 0x24) - param_2[1];
    *(float *)(lVar1 + 0x28) = *(float *)(lVar1 + 0x28) - param_2[2];
  }
  else {
    if (lStack_10 != 0) {
      return;
    }
    *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) - *param_2;
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) - param_2[1];
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) - param_2[2];
    lVar1 = *(int64_t *)(param_1 + 0x50);
    *(float *)(lVar1 + 0x3c) = *(float *)(lVar1 + 0x3c) - *param_2;
    *(float *)(lVar1 + 0x40) = *(float *)(lVar1 + 0x40) - param_2[1];
    *(float *)(lVar1 + 0x44) = *(float *)(lVar1 + 0x44) - param_2[2];
  }
  (**(code **)(**(int64_t **)(param_1 + 0x48) + 0x40))();
  return;
}






// 函数: void FUN_1806e1790(int64_t param_1,float *param_2,uint64_t param_3,float *param_4,uint param_5,
void FUN_1806e1790(int64_t param_1,float *param_2,uint64_t param_3,float *param_4,uint param_5,
                  uint param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
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
  float fVar22;
  float fVar23;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  
  pfVar6 = *(float **)(param_1 + 8);
  fVar1 = *(float *)(param_1 + 0x1c);
  fVar19 = *(float *)(param_1 + 0x14);
  fVar16 = *(float *)(param_1 + 0x18);
  fVar13 = 0.0;
  fVar15 = 0.0;
  fVar18 = 0.0;
  fVar2 = *(float *)(param_1 + 0x20);
  fVar3 = *(float *)(param_1 + 0x24);
  fVar14 = *(float *)(param_1 + 0x10);
  if (param_5 != 0) {
    fVar8 = param_2[2];
    fVar10 = param_2[1];
    fVar4 = param_2[3];
    fVar7 = *param_2;
    fVar21 = fVar10 + fVar10;
    fVar12 = fVar7 + fVar7;
    fVar9 = (fVar8 + fVar8) * fVar4;
    fVar11 = (fVar8 + fVar8) * fVar8;
    fVar22 = 1.0 - fVar7 * fVar12;
    fVar7 = (1.0 - fVar21 * fVar10) - fVar11;
    fVar23 = fVar22 - fVar21 * fVar10;
    fVar22 = fVar22 - fVar11;
    fVar11 = fVar9 + fVar12 * fVar10;
    fVar9 = fVar12 * fVar10 - fVar9;
    fVar10 = fVar21 * fVar8 + fVar12 * fVar4;
    fVar20 = fVar21 * fVar8 - fVar12 * fVar4;
    fVar17 = fVar12 * fVar8 - fVar21 * fVar4;
    fVar8 = fVar21 * fVar4 + fVar12 * fVar8;
    if ((param_5 & 1) != 0) {
      fVar15 = *param_4;
      fVar13 = -(fVar15 * fVar7);
      fVar18 = -(fVar15 * fVar11);
      fVar15 = -(fVar15 * fVar17);
    }
    if ((param_5 & 2) != 0) {
      fVar4 = param_4[1];
      fVar13 = fVar13 - fVar4 * fVar9;
      fVar18 = fVar18 - fVar4 * fVar22;
      fVar15 = fVar15 - fVar4 * fVar10;
    }
    if ((param_5 & 4) != 0) {
      fVar4 = param_4[2];
      fVar13 = fVar13 - fVar4 * fVar8;
      fVar18 = fVar18 - fVar4 * fVar20;
      fVar15 = fVar15 - fVar4 * fVar23;
    }
    fVar14 = fVar13 + fVar14;
    fVar19 = fVar18 + fVar19;
    fVar16 = fVar15 + fVar16;
    if ((param_5 & 1) != 0) {
      fVar13 = *param_4;
      *(int16_t *)((int64_t)pfVar6 + 0x4e) = 0x800;
      pfVar6[1] = fVar11;
      *pfVar6 = fVar7;
      pfVar6[2] = fVar17;
      pfVar6[4] = fVar17 * fVar19 - fVar11 * fVar16;
      pfVar6[5] = fVar7 * fVar16 - fVar17 * fVar14;
      pfVar6[6] = fVar11 * fVar14 - fVar7 * fVar19;
      pfVar6[9] = fVar11;
      pfVar6[8] = fVar7;
      pfVar6[10] = fVar17;
      pfVar6[0xc] = fVar2 * fVar17 - fVar3 * fVar11;
      pfVar6[0xd] = fVar3 * fVar7 - fVar17 * fVar1;
      pfVar6[0xe] = fVar11 * fVar1 - fVar2 * fVar7;
      pfVar6[3] = -fVar13;
      pfVar6 = pfVar6 + 0x14;
    }
    if ((param_5 & 2) != 0) {
      fVar13 = param_4[1];
      *(int16_t *)((int64_t)pfVar6 + 0x4e) = 0x800;
      *pfVar6 = fVar9;
      pfVar6[1] = fVar22;
      pfVar6[2] = fVar10;
      pfVar6[4] = fVar19 * fVar10 - fVar16 * fVar22;
      pfVar6[5] = fVar16 * fVar9 - fVar14 * fVar10;
      pfVar6[6] = fVar14 * fVar22 - fVar9 * fVar19;
      pfVar6[8] = fVar9;
      pfVar6[9] = fVar22;
      pfVar6[10] = fVar10;
      pfVar6[0xc] = fVar2 * fVar10 - fVar3 * fVar22;
      pfVar6[0xd] = fVar3 * fVar9 - fVar10 * fVar1;
      pfVar6[0xe] = fVar22 * fVar1 - fVar2 * fVar9;
      pfVar6[3] = -fVar13;
      pfVar6 = pfVar6 + 0x14;
    }
    if ((param_5 & 4) != 0) {
      fVar13 = param_4[2];
      *(int16_t *)((int64_t)pfVar6 + 0x4e) = 0x800;
      pfVar6[1] = fVar20;
      pfVar6[2] = fVar23;
      *pfVar6 = fVar8;
      pfVar6[4] = fVar23 * fVar19 - fVar20 * fVar16;
      pfVar6[5] = fVar8 * fVar16 - fVar14 * fVar23;
      pfVar6[6] = fVar14 * fVar20 - fVar8 * fVar19;
      pfVar6[9] = fVar20;
      pfVar6[10] = fVar23;
      pfVar6[8] = fVar8;
      pfVar6[0xc] = fVar2 * fVar23 - fVar3 * fVar20;
      pfVar6[0xd] = fVar3 * fVar8 - fVar23 * fVar1;
      pfVar6[0xe] = fVar20 * fVar1 - fVar2 * fVar8;
      pfVar6[3] = -fVar13;
      pfVar6 = pfVar6 + 0x14;
    }
  }
  if (param_6 != 0) {
    fStack_104 = -*param_2;
    fStack_100 = -param_2[1];
    fStack_fc = -param_2[2];
    fStack_f8 = param_2[3];
    SystemCore_Initializer(&fStack_104,&fStack_c8);
    FUN_1806df0b0(&fStack_f0,param_2,param_3);
    if ((param_6 & 1) != 0) {
      *(int16_t *)((int64_t)pfVar6 + 0x4e) = 0x800;
      pfVar6[0] = 0.0;
      pfVar6[1] = 0.0;
      pfVar6[2] = 0.0;
      pfVar6[6] = fStack_e8;
      pfVar6[4] = fStack_f0;
      pfVar6[5] = fStack_ec;
      pfVar6[8] = 0.0;
      pfVar6[9] = 0.0;
      pfVar6[10] = 0.0;
      pfVar6[0xe] = fStack_e8;
      pfVar6[0xc] = fStack_f0;
      pfVar6[0xd] = fStack_ec;
      *(ushort *)(pfVar6 + 0x13) = *(ushort *)(pfVar6 + 0x13) | 0x40;
      pfVar6[3] = -fStack_c8;
      pfVar6 = pfVar6 + 0x14;
    }
    if ((param_6 & 2) != 0) {
      *(int16_t *)((int64_t)pfVar6 + 0x4e) = 0x800;
      pfVar6[0] = 0.0;
      pfVar6[1] = 0.0;
      pfVar6[2] = 0.0;
      pfVar6[6] = fStack_dc;
      pfVar6[4] = fStack_e4;
      pfVar6[5] = fStack_e0;
      pfVar6[8] = 0.0;
      pfVar6[9] = 0.0;
      pfVar6[10] = 0.0;
      pfVar6[0xe] = fStack_dc;
      pfVar6[0xc] = fStack_e4;
      pfVar6[0xd] = fStack_e0;
      *(ushort *)(pfVar6 + 0x13) = *(ushort *)(pfVar6 + 0x13) | 0x40;
      pfVar6[3] = -fStack_c4;
      pfVar6 = pfVar6 + 0x14;
    }
    if ((param_6 & 4) != 0) {
      *(int16_t *)((int64_t)pfVar6 + 0x4e) = 0x800;
      pfVar6[0] = 0.0;
      pfVar6[1] = 0.0;
      pfVar6[2] = 0.0;
      pfVar6[6] = fStack_d0;
      pfVar6[4] = fStack_d8;
      pfVar6[5] = fStack_d4;
      pfVar6[8] = 0.0;
      pfVar6[9] = 0.0;
      pfVar6[10] = 0.0;
      pfVar6[0xe] = fStack_d0;
      pfVar6[0xc] = fStack_d8;
      pfVar6[0xd] = fStack_d4;
      *(ushort *)(pfVar6 + 0x13) = *(ushort *)(pfVar6 + 0x13) | 0x40;
      pfVar6[3] = -fStack_c0;
      pfVar6 = pfVar6 + 0x14;
    }
  }
  *param_7 = fVar14;
  param_7[1] = fVar19;
  param_7[2] = fVar16;
  *param_8 = fVar1;
  param_8[1] = fVar2;
  param_8[2] = fVar3;
  for (pfVar5 = *(float **)(param_1 + 8); pfVar5 < pfVar6; pfVar5 = pfVar5 + 0x14) {
    *(ushort *)(pfVar5 + 0x13) = *(ushort *)(pfVar5 + 0x13) | 0x10;
  }
  *(float **)(param_1 + 8) = pfVar6;
  return;
}



uint64_t
FUN_1806e1f70(uint64_t param_1,float *param_2,float *param_3,int32_t param_4,uint64_t param_5
             )

{
  uint64_t uVar1;
  float fVar2;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int8_t auStack_38 [48];
  
  fStack_44 = param_3[1] * param_2[1] + *param_3 * *param_2 + param_3[2] * param_2[2];
  if (ABS(fStack_44) < 1e-06) {
    fStack_4c = 1.0;
    fStack_48 = 0.0;
    fStack_44 = 0.0;
    fStack_40 = 0.0;
  }
  else {
    fStack_4c = param_2[3];
    fStack_48 = *param_3 * fStack_44;
    fStack_40 = param_3[2] * fStack_44;
    fStack_44 = param_3[1] * fStack_44;
    fVar2 = 1.0 / SQRT(fStack_44 * fStack_44 + fStack_48 * fStack_48 + fStack_40 * fStack_40 +
                       fStack_4c * fStack_4c);
    fStack_48 = fStack_48 * fVar2;
    fStack_44 = fStack_44 * fVar2;
    fStack_40 = fStack_40 * fVar2;
    fStack_4c = fStack_4c * fVar2;
  }
  fStack_58 = -fStack_48;
  fStack_54 = -fStack_44;
  fStack_50 = -fStack_40;
  fStack_3c = fStack_4c;
  SystemCore_Initializer(param_2,auStack_38,&fStack_58);
  uVar1 = FUN_1806e2f90(&fStack_58,auStack_38,param_4,param_5);
  SystemCore_Initializer(uVar1,param_1,&fStack_48);
  return param_1;
}






// 函数: void FUN_1806e20e0(int64_t param_1,int64_t *param_2)
void FUN_1806e20e0(int64_t param_1,int64_t *param_2)

{
  int64_t lStackX_8;
  int64_t lStackX_10;
  
  (**(code **)(*param_2 + 8))(param_2,*(uint64_t *)(param_1 + 0x60));
  lStackX_8 = 0;
  lStackX_10 = 0;
  (**(code **)(**(int64_t **)(param_1 + 0x60) + 0x30))
            (*(int64_t **)(param_1 + 0x60),&lStackX_8,&lStackX_10);
  if (lStackX_8 != 0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  if (lStackX_10 != 0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  return;
}






// 函数: void FUN_1806e2150(int64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1806e2150(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t lVar4;
  int64_t *plVar5;
  float *pfVar6;
  int32_t *puVar7;
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
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  int8_t auStack_b8 [16];
  int8_t auStack_a8 [160];
  
  (**(code **)(**(int64_t **)(param_1 + 0x60) + 0x38))();
  pfVar6 = (float *)FUN_1806dfd60(param_1,auStack_a8,param_2);
  fStack_bc = pfVar6[3];
  fStack_c0 = -pfVar6[2];
  fStack_c8 = -*pfVar6;
  fVar13 = *(float *)(param_1 + 0x38) - pfVar6[4];
  fVar12 = *(float *)(param_1 + 0x3c) - pfVar6[5];
  fVar16 = *(float *)(param_1 + 0x40) - pfVar6[6];
  fStack_c4 = -pfVar6[1];
  fVar13 = fVar13 + fVar13;
  fVar12 = fVar12 + fVar12;
  fVar11 = fStack_bc * fStack_bc - 0.5;
  fVar16 = fVar16 + fVar16;
  fVar10 = fStack_c4 * fVar12 + fStack_c8 * fVar13 + fStack_c0 * fVar16;
  fVar8 = fVar10 * fStack_c8;
  fVar15 = (fStack_c4 * fVar16 - fStack_c0 * fVar12) * fStack_bc;
  fVar9 = fVar10 * fStack_c4;
  fVar14 = (fStack_c0 * fVar13 - fStack_c8 * fVar16) * fStack_bc;
  fVar10 = fVar10 * fStack_c0;
  fVar17 = (fStack_c8 * fVar12 - fStack_c4 * fVar13) * fStack_bc;
  puVar7 = (int32_t *)SystemCore_Initializer(&fStack_c8,auStack_b8,param_1 + 0x28);
  lVar4 = *(int64_t *)(param_1 + 0x68);
  uVar1 = puVar7[2];
  uVar2 = puVar7[3];
  uVar3 = *puVar7;
  *(int32_t *)(lVar4 + 0x14) = puVar7[1];
  *(int32_t *)(lVar4 + 0x18) = uVar1;
  *(int32_t *)(lVar4 + 0x1c) = uVar2;
  *(int32_t *)(lVar4 + 0x10) = uVar3;
  *(float *)(lVar4 + 0x20) = fVar15 + fVar11 * fVar13 + fVar8;
  *(float *)(lVar4 + 0x24) = fVar14 + fVar11 * fVar12 + fVar9;
  *(float *)(lVar4 + 0x28) = fVar17 + fVar11 * fVar16 + fVar10;
  pfVar6 = (float *)FUN_1806dfd60(param_1,auStack_a8,param_3);
  fVar8 = *pfVar6;
  fVar9 = pfVar6[1];
  fStack_bc = pfVar6[3];
  fStack_c8 = -fVar8;
  fVar17 = *(float *)(param_1 + 0x54) - pfVar6[4];
  fVar10 = pfVar6[2];
  fVar13 = *(float *)(param_1 + 0x58) - pfVar6[5];
  fVar14 = *(float *)(param_1 + 0x5c) - pfVar6[6];
  fVar17 = fVar17 + fVar17;
  fStack_c4 = -fVar9;
  fVar13 = fVar13 + fVar13;
  fVar12 = fStack_bc * fStack_bc - 0.5;
  fVar14 = fVar14 + fVar14;
  fStack_c0 = -fVar10;
  fVar11 = fVar17 * fVar8 + fVar13 * fVar9 + fVar14 * fVar10;
  fVar16 = (fVar13 * fVar10 - fVar9 * fVar14) * fStack_bc;
  fVar15 = (fVar8 * fVar14 - fVar17 * fVar10) * fStack_bc;
  fVar18 = (fVar17 * fVar9 - fVar8 * fVar13) * fStack_bc;
  puVar7 = (int32_t *)SystemCore_Initializer(&fStack_c8,auStack_b8,param_1 + 0x44);
  plVar5 = *(int64_t **)(param_1 + 0x60);
  uVar1 = puVar7[1];
  uVar2 = puVar7[2];
  uVar3 = puVar7[3];
  lVar4 = *(int64_t *)(param_1 + 0x68);
  *(int32_t *)(lVar4 + 0x2c) = *puVar7;
  *(int32_t *)(lVar4 + 0x30) = uVar1;
  *(int32_t *)(lVar4 + 0x34) = uVar2;
  *(int32_t *)(lVar4 + 0x38) = uVar3;
  *(float *)(lVar4 + 0x3c) = fVar16 + fVar12 * fVar17 + fVar8 * fVar11;
  *(float *)(lVar4 + 0x40) = fVar15 + fVar12 * fVar13 + fVar9 * fVar11;
  *(float *)(lVar4 + 0x44) = fVar18 + fVar12 * fVar14 + fVar10 * fVar11;
                    // WARNING: Could not recover jumptable at 0x0001806e24e1. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar5 + 0x40))();
  return;
}






// 函数: void FUN_1806e2510(int64_t param_1,int16_t *param_2)
void FUN_1806e2510(int64_t param_1,int16_t *param_2)

{
  int16_t auStackX_8 [16];
  
  auStackX_8[0] = *param_2;
  (**(code **)(**(int64_t **)(param_1 + 0x60) + 0x48))(*(int64_t **)(param_1 + 0x60),auStackX_8);
  return;
}






