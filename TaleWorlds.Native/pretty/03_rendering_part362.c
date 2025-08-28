#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part362.c - 5 个函数

// 函数: void FUN_180465753(void)
void FUN_180465753(void)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t *unaff_RBX;
  int iVar14;
  uint64_t uVar15;
  int64_t *in_R9;
  int64_t in_R10;
  int64_t lVar16;
  uint64_t in_R11;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float unaff_XMM6_Da;
  float fVar22;
  
  lVar1 = *in_R9;
  lVar2 = in_R9[1];
  lVar16 = in_R10 - (int64_t)in_R9 >> 3;
  fVar22 = 0.0;
  fVar20 = *(float *)(lVar1 + 0x34) - *(float *)(lVar2 + 0x34);
  fVar18 = *(float *)(lVar1 + 0x30) - *(float *)(lVar2 + 0x30);
  fVar17 = *(float *)(lVar1 + 0x38) - *(float *)(lVar2 + 0x38);
  fVar17 = SQRT(fVar20 * fVar20 + fVar18 * fVar18 + fVar17 * fVar17);
  if (lVar16 != 1) {
    uVar15 = 1;
    do {
      iVar14 = (int)uVar15;
      if (unaff_XMM6_Da <= fVar17) {
        lVar1 = in_R9[in_R11 & 0xffffffff];
        lVar2 = in_R9[uVar15];
        fVar20 = *(float *)(lVar1 + 0x34) - *(float *)(lVar2 + 0x34);
        fVar17 = *(float *)(lVar1 + 0x38) - *(float *)(lVar2 + 0x38);
        fVar18 = *(float *)(lVar1 + 0x30) - *(float *)(lVar2 + 0x30);
        fVar18 = fVar18 * fVar18;
        fVar17 = SQRT(fVar20 * fVar20 + fVar18 + fVar17 * fVar17);
        FUN_180466610(fVar17,fVar18,(unaff_XMM6_Da - fVar22) / fVar17,in_R11 & 0xffffffff);
        return;
      }
      lVar1 = in_R9[uVar15];
      lVar2 = in_R9[iVar14 + 1];
      fVar20 = *(float *)(lVar1 + 0x30) - *(float *)(lVar2 + 0x30);
      fVar21 = *(float *)(lVar1 + 0x34) - *(float *)(lVar2 + 0x34);
      fVar18 = *(float *)(lVar1 + 0x38) - *(float *)(lVar2 + 0x38);
      uVar13 = in_R11 & 0xffffffff;
      in_R11 = (uint64_t)iVar14;
      uVar15 = (uint64_t)(iVar14 + 1);
      lVar2 = in_R9[uVar13];
      fVar19 = *(float *)(lVar2 + 0x30) - *(float *)(lVar1 + 0x30);
      fVar17 = fVar17 + SQRT(fVar21 * fVar21 + fVar20 * fVar20 + fVar18 * fVar18);
      fVar20 = *(float *)(lVar2 + 0x34) - *(float *)(lVar1 + 0x34);
      fVar18 = *(float *)(lVar2 + 0x38) - *(float *)(lVar1 + 0x38);
      fVar22 = fVar22 + SQRT(fVar20 * fVar20 + fVar19 * fVar19 + fVar18 * fVar18);
    } while (in_R11 < lVar16 - 1U);
  }
  puVar3 = (uint64_t *)in_R9[(int64_t)(int)lVar16 + -1];
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  uVar7 = puVar3[4];
  uVar8 = puVar3[5];
  uVar9 = puVar3[6];
  uVar10 = puVar3[7];
  uVar11 = puVar3[0x18];
  uVar12 = puVar3[0x19];
  *unaff_RBX = *puVar3;
  unaff_RBX[1] = uVar4;
  unaff_RBX[2] = uVar5;
  unaff_RBX[3] = uVar6;
  unaff_RBX[4] = uVar7;
  unaff_RBX[5] = uVar8;
  unaff_RBX[6] = uVar9;
  unaff_RBX[7] = uVar10;
  unaff_RBX[8] = uVar11;
  unaff_RBX[9] = uVar12;
  return;
}





// 函数: void FUN_1804658c6(void)
void FUN_1804658c6(void)

{
  return;
}





// 函数: void FUN_1804658e2(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_1804658e2(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  uint in_R11D;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_XMM6_Da;
  float unaff_XMM8_Da;
  
  lVar1 = *(int64_t *)(param_4 + (uint64_t)in_R11D * 8);
  lVar2 = *(int64_t *)(param_4 + param_2 * 8);
  fVar5 = *(float *)(lVar1 + 0x34) - *(float *)(lVar2 + 0x34);
  fVar3 = *(float *)(lVar1 + 0x38) - *(float *)(lVar2 + 0x38);
  fVar4 = *(float *)(lVar1 + 0x30) - *(float *)(lVar2 + 0x30);
  fVar4 = fVar4 * fVar4;
  fVar3 = SQRT(fVar5 * fVar5 + fVar4 + fVar3 * fVar3);
  FUN_180466610(fVar3,fVar4,(unaff_XMM6_Da - unaff_XMM8_Da) / fVar3,in_R11D);
  return;
}



float * FUN_180465950(int64_t param_1,float *param_2,float param_3)

{
  uint64_t *puVar1;
  float fVar2;
  float fVar3;
  uint64_t *puVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t lVar15;
  float fVar16;
  uint64_t uVar17;
  float fVar18;
  float fVar19;
  int8_t auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int aiStackX_8 [2];
  int8_t auStackX_20 [8];
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  
  lVar13 = *(int64_t *)(param_1 + 0xd8);
  lVar15 = *(int64_t *)(param_1 + 0xd0);
  aiStackX_8[0] = 0;
  if (lVar13 - lVar15 >> 3 != 0) {
    puVar1 = (uint64_t *)(param_1 + 0x180);
    do {
      iVar5 = aiStackX_8[0];
      puVar12 = puVar1;
      puVar4 = *(uint64_t **)(param_1 + 400);
      while (puVar4 != (uint64_t *)0x0) {
        if (*(int *)(puVar4 + 4) < aiStackX_8[0]) {
          puVar4 = (uint64_t *)*puVar4;
        }
        else {
          puVar12 = puVar4;
          puVar4 = (uint64_t *)puVar4[1];
        }
      }
      if ((puVar12 == puVar1) || (aiStackX_8[0] < *(int *)(puVar12 + 4))) {
        puVar12 = (uint64_t *)FUN_1804695d0(puVar1,auStackX_20,lVar13,puVar12,aiStackX_8);
        puVar12 = (uint64_t *)*puVar12;
      }
      puVar11 = puVar12 + 5;
      puVar4 = (uint64_t *)puVar12[7];
      while (puVar4 != (uint64_t *)0x0) {
        if (*(float *)(puVar4 + 4) <= param_3) {
          puVar4 = (uint64_t *)*puVar4;
        }
        else {
          puVar11 = puVar4;
          puVar4 = (uint64_t *)puVar4[1];
        }
      }
      if (puVar11 == (uint64_t *)puVar12[6]) {
        if (iVar5 != 0) {
          aiStackX_8[0] = iVar5 + -1;
          puVar12 = puVar1;
          puVar4 = *(uint64_t **)(param_1 + 400);
          while (puVar4 != (uint64_t *)0x0) {
            if (*(int *)(puVar4 + 4) < aiStackX_8[0]) {
              puVar4 = (uint64_t *)*puVar4;
            }
            else {
              puVar12 = puVar4;
              puVar4 = (uint64_t *)puVar4[1];
            }
          }
          if ((puVar12 == puVar1) || (aiStackX_8[0] < *(int *)(puVar12 + 4))) {
            puVar12 = (uint64_t *)FUN_1804695d0(puVar1,&fStack_168);
            puVar12 = (uint64_t *)*puVar12;
          }
          uVar14 = func_0x00018066bd70(puVar12[6]);
          lVar13 = func_0x00018066b9a0(uVar14);
          fVar16 = *(float *)(lVar13 + 0x20);
          lVar13 = func_0x00018066b9a0(uVar14);
          uStack_148 = *(uint64_t *)(lVar13 + 0x34);
          uStack_140 = *(uint64_t *)(lVar13 + 0x3c);
          uStack_138 = *(uint64_t *)(lVar13 + 0x44);
          uStack_130 = *(uint64_t *)(lVar13 + 0x4c);
          uStack_128 = *(uint64_t *)(lVar13 + 0x54);
          uStack_120 = *(uint64_t *)(lVar13 + 0x5c);
          lVar13 = func_0x00018066b9a0(uVar14);
LAB_180465c02:
          fVar25 = (param_3 - fVar16) / (*(float *)(puVar11 + 4) - fVar16);
          fVar16 = *(float *)((int64_t)puVar11 + 0x54);
          fVar2 = *(float *)(puVar11 + 0xb);
          fVar3 = *(float *)((int64_t)puVar11 + 0x5c);
          fVar34 = 1.0 - fVar25;
          fVar23 = fVar25 * *(float *)((int64_t)puVar11 + 0x34) + (float)uStack_148 * fVar34;
          fVar22 = fVar25 * *(float *)(puVar11 + 7) + uStack_148._4_4_ * fVar34;
          fVar32 = fVar25 * *(float *)((int64_t)puVar11 + 0x3c) + (float)uStack_140 * fVar34;
          fVar18 = fVar22 * fVar22 + fVar23 * fVar23 + fVar32 * fVar32;
          auVar20 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
          fVar19 = auVar20._0_4_;
          fVar21 = fVar19 * 0.5 * (3.0 - fVar18 * fVar19 * fVar19);
          fVar31 = (float)uStack_138 * fVar34 + fVar25 * *(float *)((int64_t)puVar11 + 0x44);
          fVar30 = fVar25 * *(float *)(puVar11 + 9) + uStack_138._4_4_ * fVar34;
          fVar29 = fVar25 * *(float *)((int64_t)puVar11 + 0x4c) + (float)uStack_130 * fVar34;
          fVar18 = fVar30 * fVar30 + fVar31 * fVar31 + fVar29 * fVar29;
          auVar20 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
          fVar19 = auVar20._0_4_;
          fVar18 = fVar19 * 0.5 * (3.0 - fVar18 * fVar19 * fVar19);
          fVar29 = fVar29 * fVar18;
          fVar30 = fVar30 * fVar18;
          fVar31 = fVar31 * fVar18;
          fVar28 = fVar29 * fVar22 * fVar21 - fVar30 * fVar32 * fVar21;
          fVar27 = fVar30 * fVar23 * fVar21 - fVar22 * fVar21 * fVar31;
          fVar33 = fVar32 * fVar21 * fVar31 - fVar29 * fVar23 * fVar21;
          fVar18 = fVar33 * fVar33 + fVar28 * fVar28 + fVar27 * fVar27;
          auVar20 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
          fVar19 = auVar20._0_4_;
          fVar18 = fVar19 * 0.5 * (3.0 - fVar18 * fVar19 * fVar19);
          fVar33 = fVar33 * fVar18;
          fVar27 = fVar27 * fVar18;
          fVar28 = fVar28 * fVar18;
          fVar26 = fVar30 * fVar27 - fVar29 * fVar33;
          fVar24 = fVar28 * fVar29 - fVar31 * fVar27;
          fVar32 = fVar31 * fVar33 - fVar28 * fVar30;
          fVar18 = fVar24 * fVar24 + fVar26 * fVar26 + fVar32 * fVar32;
          auVar20 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
          fVar19 = auVar20._0_4_;
          fStack_168 = (float)*(uint64_t *)(lVar13 + 100);
          fVar23 = fVar19 * 0.5 * (3.0 - fVar18 * fVar19 * fVar19);
          fVar18 = *(float *)((int64_t)puVar11 + 100);
          fVar19 = *(float *)(puVar11 + 0xd);
          fVar21 = *(float *)((int64_t)puVar11 + 0x6c);
          fStack_164 = (float)((uint64_t)*(uint64_t *)(lVar13 + 100) >> 0x20);
          fVar22 = *(float *)(puVar11 + 0xe);
          fStack_160 = (float)*(uint64_t *)(lVar13 + 0x6c);
          fStack_15c = (float)((uint64_t)*(uint64_t *)(lVar13 + 0x6c) >> 0x20);
          *param_2 = fVar28;
          param_2[1] = fVar33;
          param_2[2] = fVar27;
          param_2[3] = 3.4028235e+38;
          param_2[4] = fVar26 * fVar23;
          param_2[5] = fVar24 * fVar23;
          param_2[6] = fVar32 * fVar23;
          param_2[7] = 3.4028235e+38;
          param_2[8] = fVar31;
          param_2[9] = fVar30;
          param_2[10] = fVar29;
          param_2[0xb] = 3.4028235e+38;
          *(uint64_t *)(param_2 + 0xc) =
               CONCAT44(fVar25 * fVar2 + uStack_128._4_4_ * fVar34,
                        fVar25 * fVar16 + (float)uStack_128 * fVar34);
          *(uint64_t *)(param_2 + 0xe) =
               CONCAT44(0x7f7fffff,fVar25 * fVar3 + (float)uStack_120 * fVar34);
          param_2[0x10] = fVar25 * fVar18 + fStack_168 * fVar34;
          param_2[0x11] = fVar25 * fVar19 + fStack_164 * fVar34;
          param_2[0x12] = fVar25 * fVar21 + fStack_160 * fVar34;
          param_2[0x13] = fVar25 * fVar22 + fVar34 * fStack_15c;
          return param_2;
        }
        uVar14 = *(uint64_t *)((int64_t)puVar11 + 0x2c);
        uVar17 = *(uint64_t *)((int64_t)puVar11 + 0x34);
        uVar6 = *(uint64_t *)((int64_t)puVar11 + 0x3c);
        *(uint64_t *)param_2 = *(uint64_t *)((int64_t)puVar11 + 0x24);
        *(uint64_t *)(param_2 + 2) = uVar14;
        uVar14 = *(uint64_t *)((int64_t)puVar11 + 0x44);
        uVar7 = *(uint64_t *)((int64_t)puVar11 + 0x4c);
        *(uint64_t *)(param_2 + 4) = uVar17;
        *(uint64_t *)(param_2 + 6) = uVar6;
        uVar6 = *(uint64_t *)((int64_t)puVar11 + 0x54);
        uVar8 = *(uint64_t *)((int64_t)puVar11 + 0x5c);
        *(uint64_t *)(param_2 + 8) = uVar14;
        *(uint64_t *)(param_2 + 10) = uVar7;
        uVar14 = *(uint64_t *)((int64_t)puVar11 + 100);
        uVar17 = *(uint64_t *)((int64_t)puVar11 + 0x6c);
        *(uint64_t *)(param_2 + 0xc) = uVar6;
        *(uint64_t *)(param_2 + 0xe) = uVar8;
        goto LAB_180465ae9;
      }
      if (puVar11 != puVar12 + 5) {
        lVar13 = func_0x00018066b9a0(puVar11);
        uStack_148 = *(uint64_t *)(lVar13 + 0x34);
        uStack_140 = *(uint64_t *)(lVar13 + 0x3c);
        uStack_138 = *(uint64_t *)(lVar13 + 0x44);
        uStack_130 = *(uint64_t *)(lVar13 + 0x4c);
        fVar16 = *(float *)(lVar13 + 0x20);
        uStack_128 = *(uint64_t *)(lVar13 + 0x54);
        uStack_120 = *(uint64_t *)(lVar13 + 0x5c);
        goto LAB_180465c02;
      }
      lVar13 = *(int64_t *)(param_1 + 0xd8);
      aiStackX_8[0] = iVar5 + 1;
      lVar15 = *(int64_t *)(param_1 + 0xd0);
    } while ((uint64_t)(int64_t)aiStackX_8[0] < (uint64_t)(lVar13 - lVar15 >> 3));
  }
  iVar5 = (int)(lVar13 - lVar15 >> 3);
  fVar16 = (float)(iVar5 + -1);
  if (9.223372e+18 <= fVar16) {
    fVar16 = fVar16 - 9.223372e+18;
  }
  puVar1 = *(uint64_t **)(lVar15 + (int64_t)fVar16 * 8);
  uVar14 = puVar1[1];
  uVar17 = puVar1[2];
  uVar6 = puVar1[3];
  uVar7 = puVar1[4];
  uVar8 = puVar1[5];
  uVar9 = puVar1[6];
  uVar10 = puVar1[7];
  lVar13 = *(int64_t *)(lVar15 + -8 + (int64_t)iVar5 * 8);
  *(uint64_t *)param_2 = *puVar1;
  *(uint64_t *)(param_2 + 2) = uVar14;
  *(uint64_t *)(param_2 + 4) = uVar17;
  *(uint64_t *)(param_2 + 6) = uVar6;
  uVar14 = *(uint64_t *)(lVar13 + 0xc0);
  uVar17 = *(uint64_t *)(lVar13 + 200);
  *(uint64_t *)(param_2 + 8) = uVar7;
  *(uint64_t *)(param_2 + 10) = uVar8;
  *(uint64_t *)(param_2 + 0xc) = uVar9;
  *(uint64_t *)(param_2 + 0xe) = uVar10;
LAB_180465ae9:
  *(uint64_t *)(param_2 + 0x10) = uVar14;
  *(uint64_t *)(param_2 + 0x12) = uVar17;
  return param_2;
}





// 函数: void FUN_180465c27(float param_1)
void FUN_180465c27(float param_1)

{
  float fVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  float *unaff_R14;
  float fVar4;
  float fVar5;
  int8_t auVar6 [16];
  float in_XMM4_Da;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_XMM7_Da;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint64_t in_stack_00000038;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  
  param_1 = unaff_XMM7_Da / param_1;
  fVar4 = *(float *)(unaff_RDI + 0x54);
  fVar5 = *(float *)(unaff_RDI + 0x58);
  fVar7 = *(float *)(unaff_RDI + 0x5c);
  fVar8 = *(float *)(unaff_RDI + 0x34);
  fVar18 = *(float *)(unaff_RDI + 0x38);
  fVar1 = *(float *)(unaff_RDI + 0x3c);
  fVar20 = 1.0 - param_1;
  *(float *)(unaff_RBP + 0xd0) = param_1;
  *(float *)(unaff_RBP + -0x60) = param_1 * fVar4 + *(float *)(unaff_RBP + -0x70) * fVar20;
  *(float *)(unaff_RBP + -0x5c) = param_1 * fVar5 + *(float *)(unaff_RBP + -0x6c) * fVar20;
  *(float *)(unaff_RBP + -0x58) = param_1 * fVar7 + *(float *)(unaff_RBP + -0x68) * fVar20;
  *(int32_t *)(unaff_RBP + -0x54) = in_stack_00000038._4_4_;
  fVar10 = param_1 * fVar8 + fStack0000000000000070 * fVar20;
  fVar8 = param_1 * fVar18 + fStack0000000000000074 * fVar20;
  fVar18 = param_1 * fVar1 + in_stack_00000078 * fVar20;
  fVar4 = fVar8 * fVar8 + fVar10 * fVar10 + fVar18 * fVar18;
  auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
  fVar5 = auVar6._0_4_;
  fVar7 = in_XMM4_Da * fVar5 * (3.0 - fVar4 * fVar5 * fVar5);
  fVar17 = *(float *)(unaff_RBP + -0x80) * fVar20 + param_1 * *(float *)(unaff_RDI + 0x44);
  fVar16 = param_1 * *(float *)(unaff_RDI + 0x48) + *(float *)(unaff_RBP + -0x7c) * fVar20;
  fVar15 = param_1 * *(float *)(unaff_RDI + 0x4c) + *(float *)(unaff_RBP + -0x78) * fVar20;
  fVar4 = fVar16 * fVar16 + fVar17 * fVar17 + fVar15 * fVar15;
  auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
  fVar5 = auVar6._0_4_;
  fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
  fVar15 = fVar15 * fVar4;
  fVar16 = fVar16 * fVar4;
  fVar17 = fVar17 * fVar4;
  fVar14 = fVar15 * fVar8 * fVar7 - fVar16 * fVar18 * fVar7;
  fVar13 = fVar16 * fVar10 * fVar7 - fVar8 * fVar7 * fVar17;
  fVar19 = fVar18 * fVar7 * fVar17 - fVar15 * fVar10 * fVar7;
  fVar4 = fVar19 * fVar19 + fVar14 * fVar14 + fVar13 * fVar13;
  auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
  fVar5 = auVar6._0_4_;
  fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
  fVar19 = fVar19 * fVar4;
  fVar13 = fVar13 * fVar4;
  fVar14 = fVar14 * fVar4;
  fVar12 = fVar16 * fVar13 - fVar15 * fVar19;
  *(int32_t *)(unaff_RBP + -0x44) = 0x7f7fffff;
  fVar11 = fVar14 * fVar15 - fVar17 * fVar13;
  fVar9 = fVar17 * fVar19 - fVar14 * fVar16;
  fVar4 = fVar11 * fVar11 + fVar12 * fVar12 + fVar9 * fVar9;
  auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
  fVar5 = auVar6._0_4_;
  fVar10 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
  fVar4 = *(float *)(unaff_RBP + 0xd0);
  fVar5 = *(float *)(unaff_RDI + 100);
  fVar7 = *(float *)(unaff_RDI + 0x68);
  fVar8 = *(float *)(unaff_RDI + 0x6c);
  fVar18 = *(float *)(unaff_RDI + 0x70);
  fVar1 = *(float *)(unaff_RBP + -0x44);
  *unaff_R14 = fVar14;
  unaff_R14[1] = fVar19;
  unaff_R14[2] = fVar13;
  unaff_R14[3] = fVar1;
  uVar2 = *(uint64_t *)(unaff_RBP + -0x60);
  uVar3 = *(uint64_t *)(unaff_RBP + -0x58);
  unaff_R14[4] = fVar12 * fVar10;
  unaff_R14[5] = fVar11 * fVar10;
  unaff_R14[6] = fVar9 * fVar10;
  unaff_R14[7] = 3.4028235e+38;
  unaff_R14[8] = fVar17;
  unaff_R14[9] = fVar16;
  unaff_R14[10] = fVar15;
  unaff_R14[0xb] = 3.4028235e+38;
  *(uint64_t *)(unaff_R14 + 0xc) = uVar2;
  *(uint64_t *)(unaff_R14 + 0xe) = uVar3;
  unaff_R14[0x10] = fVar4 * fVar5 + fStack0000000000000050 * fVar20;
  unaff_R14[0x11] = fVar4 * fVar7 + fStack0000000000000054 * fVar20;
  unaff_R14[0x12] = fVar4 * fVar8 + fStack0000000000000058 * fVar20;
  unaff_R14[0x13] = fVar4 * fVar18 + fVar20 * fStack000000000000005c;
  return;
}



int FUN_1804660e0(uint64_t param_1,uint64_t *param_2,void *param_3,void *param_4)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  iVar1 = *(int *)(param_2 + 2);
  if (iVar1 == 6) {
    param_3 = (void *)param_2[1];
    param_4 = &unknown_var_1148_ptr;
    lVar2 = 0;
    while (lVar3 = lVar2 + 1, param_3[lVar2] == (&unknown_var_1148_ptr)[lVar2]) {
      lVar2 = lVar3;
      if (lVar3 == 7) {
        *param_2 = &system_data_buffer_ptr;
        if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        param_2[1] = 0;
        *(int32_t *)(param_2 + 3) = 0;
        *param_2 = &system_state_ptr;
        return 0;
      }
    }
  }
  if (iVar1 == 7) {
    param_3 = &unknown_var_1496_ptr;
    lVar2 = 0;
    while (lVar3 = lVar2, *(char *)(param_2[1] + lVar3) == (&unknown_var_1496_ptr)[lVar3]) {
      lVar2 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        FUN_180627b90(param_2);
        return (int)lVar3 + -5;
      }
    }
  }
  if (iVar1 == 9) {
    iVar1 = strcmp(param_2[1],&unknown_var_1504_ptr,param_3,param_4,0xfffffffffffffffe);
    if (iVar1 == 0) {
      FUN_180627b90(param_2);
      return 1;
    }
  }
  FUN_180627b90(param_2);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1804661f0(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uStackX_8;
  
  lVar1 = *(int64_t *)(param_1 + 0xd8);
  lVar2 = *(int64_t *)(param_1 + 0xd0);
  uVar3 = FUN_18062b1e0(system_memory_pool_ptr,0xd8,8,3);
  uStackX_8 = func_0x000180464d70(uVar3,param_2,param_3);
  FUN_18005ea90(param_1 + 0xd0,&uStackX_8);
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  return lVar1 - lVar2 >> 3 & 0xffffffff;
}





// 函数: void FUN_180466280(int64_t param_1,uint64_t *param_2,uint64_t param_3)
void FUN_180466280(int64_t param_1,uint64_t *param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  int iVar3;
  float fStackX_18;
  float fStackX_1c;
  
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  fStackX_18 = (float)param_3;
  fStackX_1c = (float)((uint64_t)param_3 >> 0x20);
  iVar3 = (int)fStackX_1c;
  if (9.223372e+18 <= fStackX_18) {
    fStackX_18 = fStackX_18 - 9.223372e+18;
  }
  puVar1 = *(uint64_t **)(*(int64_t *)(param_1 + 0xd0) + (int64_t)fStackX_18 * 8);
  if (iVar3 == 0) {
    uVar2 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    uVar2 = param_2[3];
    puVar1[2] = param_2[2];
    puVar1[3] = uVar2;
    uVar2 = param_2[5];
    puVar1[4] = param_2[4];
    puVar1[5] = uVar2;
    uVar2 = param_2[7];
    puVar1[6] = param_2[6];
    puVar1[7] = uVar2;
  }
  else {
    if (iVar3 == 1) {
      uVar2 = param_2[1];
      puVar1[8] = *param_2;
      puVar1[9] = uVar2;
      uVar2 = param_2[3];
      puVar1[10] = param_2[2];
      puVar1[0xb] = uVar2;
      uVar2 = param_2[5];
      puVar1[0xc] = param_2[4];
      puVar1[0xd] = uVar2;
      uVar2 = param_2[7];
      puVar1[0xe] = param_2[6];
      puVar1[0xf] = uVar2;
      *(float *)(puVar1 + 0x16) =
           (*(float *)(puVar1 + 6) - *(float *)(puVar1 + 0xe)) + *(float *)(puVar1 + 6);
      *(float *)((int64_t)puVar1 + 0xb4) =
           (*(float *)((int64_t)puVar1 + 0x34) - *(float *)((int64_t)puVar1 + 0x74)) +
           *(float *)((int64_t)puVar1 + 0x34);
      *(float *)(puVar1 + 0x17) =
           (*(float *)(puVar1 + 7) - *(float *)(puVar1 + 0xf)) + *(float *)(puVar1 + 7);
      *(int32_t *)((int64_t)puVar1 + 0xbc) = 0x7f7fffff;
      return;
    }
    if (iVar3 == 2) {
      uVar2 = param_2[1];
      puVar1[0x10] = *param_2;
      puVar1[0x11] = uVar2;
      uVar2 = param_2[3];
      puVar1[0x12] = param_2[2];
      puVar1[0x13] = uVar2;
      uVar2 = param_2[5];
      puVar1[0x14] = param_2[4];
      puVar1[0x15] = uVar2;
      uVar2 = param_2[7];
      puVar1[0x16] = param_2[6];
      puVar1[0x17] = uVar2;
      *(float *)(puVar1 + 0xe) =
           (*(float *)(puVar1 + 6) - *(float *)(puVar1 + 0x16)) + *(float *)(puVar1 + 6);
      *(float *)((int64_t)puVar1 + 0x74) =
           (*(float *)((int64_t)puVar1 + 0x34) - *(float *)((int64_t)puVar1 + 0xb4)) +
           *(float *)((int64_t)puVar1 + 0x34);
      *(float *)(puVar1 + 0xf) =
           (*(float *)(puVar1 + 7) - *(float *)(puVar1 + 0x17)) + *(float *)(puVar1 + 7);
      *(int32_t *)((int64_t)puVar1 + 0x7c) = 0x7f7fffff;
      return;
    }
  }
  return;
}



float FUN_180466360(int64_t param_1,uint param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  if (iVar1 == 0) {
    lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0xd0) + (uint64_t)param_2 * 8);
    lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0xd0) + (uint64_t)(param_2 + 1) * 8);
    fVar4 = *(float *)(lVar2 + 0x38) - *(float *)(lVar3 + 0x38);
    fVar6 = *(float *)(lVar2 + 0x34) - *(float *)(lVar3 + 0x34);
    fVar5 = *(float *)(lVar2 + 0x30) - *(float *)(lVar3 + 0x30);
    return SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  }
  if ((iVar1 != 2) && (iVar1 != 1)) {
    return 0.0;
  }
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0xf0)) {
    FUN_180467500();
    *(int32_t *)(param_1 + 0xf0) = *(int32_t *)(param_1 + 0x70);
  }
  return *(float *)(*(int64_t *)(param_1 + 0xf8) + (uint64_t)param_2 * 4);
}



float FUN_180466420(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  uint uVar10;
  uint uVar11;
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
  float fVar24;
  float fVar25;
  int iVar12;
  
  if (*(int *)(param_1 + 0x1b0) == 0) {
    lVar1 = *(int64_t *)(param_1 + 0xd0);
    uVar7 = 0;
    fVar25 = 0.0;
    iVar12 = (int)(*(int64_t *)(param_1 + 0xd8) - lVar1 >> 3);
    uVar11 = iVar12 - 1;
    if (3 < uVar11) {
      plVar9 = (int64_t *)(lVar1 + 0x10);
      uVar10 = 2;
      uVar6 = (iVar12 - 5U >> 2) + 1;
      uVar8 = (uint64_t)uVar6;
      uVar7 = (uint64_t)(uVar6 * 4);
      do {
        lVar2 = plVar9[-2];
        lVar3 = *(int64_t *)(lVar1 + (uint64_t)(uVar10 - 1) * 8);
        fVar14 = *(float *)(lVar2 + 0x34) - *(float *)(lVar3 + 0x34);
        fVar24 = *(float *)(lVar2 + 0x30) - *(float *)(lVar3 + 0x30);
        fVar22 = *(float *)(lVar2 + 0x38) - *(float *)(lVar3 + 0x38);
        lVar2 = plVar9[-1];
        lVar3 = *(int64_t *)(lVar1 + (uint64_t)uVar10 * 8);
        lVar4 = *plVar9;
        fVar13 = *(float *)(lVar2 + 0x38) - *(float *)(lVar3 + 0x38);
        fVar23 = *(float *)(lVar2 + 0x34) - *(float *)(lVar3 + 0x34);
        lVar5 = *(int64_t *)(lVar1 + (uint64_t)(uVar10 + 1) * 8);
        fVar21 = *(float *)(lVar2 + 0x30) - *(float *)(lVar3 + 0x30);
        fVar20 = *(float *)(lVar4 + 0x34) - *(float *)(lVar5 + 0x34);
        fVar19 = *(float *)(lVar4 + 0x30) - *(float *)(lVar5 + 0x30);
        fVar17 = *(float *)(lVar4 + 0x38) - *(float *)(lVar5 + 0x38);
        lVar2 = plVar9[1];
        lVar3 = *(int64_t *)(lVar1 + (uint64_t)(uVar10 + 2) * 8);
        plVar9 = plVar9 + 4;
        uVar10 = uVar10 + 4;
        fVar18 = *(float *)(lVar2 + 0x34) - *(float *)(lVar3 + 0x34);
        fVar16 = *(float *)(lVar2 + 0x30) - *(float *)(lVar3 + 0x30);
        fVar15 = *(float *)(lVar2 + 0x38) - *(float *)(lVar3 + 0x38);
        fVar25 = SQRT(fVar24 * fVar24 + fVar14 * fVar14 + fVar22 * fVar22) + fVar25 +
                 SQRT(fVar23 * fVar23 + fVar21 * fVar21 + fVar13 * fVar13) +
                 SQRT(fVar20 * fVar20 + fVar19 * fVar19 + fVar17 * fVar17) +
                 SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar15 * fVar15);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if ((uint)uVar7 < uVar11) {
      plVar9 = (int64_t *)(lVar1 + uVar7 * 8);
      do {
        lVar2 = *plVar9;
        uVar6 = (int)uVar7 + 1;
        uVar7 = (uint64_t)uVar6;
        plVar9 = plVar9 + 1;
        lVar3 = *(int64_t *)(lVar1 + uVar7 * 8);
        fVar15 = *(float *)(lVar2 + 0x34) - *(float *)(lVar3 + 0x34);
        fVar13 = *(float *)(lVar2 + 0x38) - *(float *)(lVar3 + 0x38);
        fVar14 = *(float *)(lVar2 + 0x30) - *(float *)(lVar3 + 0x30);
        fVar25 = fVar25 + SQRT(fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13);
      } while (uVar6 < uVar11);
    }
    return fVar25;
  }
  if (*(int *)(param_1 + 0x1b0) - 1U < 2) {
    if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0xf0)) {
      FUN_180467500();
      *(int32_t *)(param_1 + 0xf0) = *(int32_t *)(param_1 + 0x70);
    }
    uVar11 = 0;
    fVar25 = 0.0;
    uVar7 = *(int64_t *)(param_1 + 0x100) - *(int64_t *)(param_1 + 0xf8) >> 2;
    if (uVar7 != 0) {
      uVar8 = 0;
      do {
        fVar25 = fVar25 + *(float *)(*(int64_t *)(param_1 + 0xf8) + uVar8 * 4);
        uVar11 = uVar11 + 1;
        uVar8 = (uint64_t)uVar11;
      } while (uVar8 < uVar7);
    }
    return fVar25;
  }
  return 0.0;
}



uint64_t * FUN_1804664b0(int64_t param_1,uint64_t *param_2,float *param_3)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  float fVar4;
  float fVar5;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  int32_t uStack_1c;
  
  iVar2 = 0;
  lVar3 = *(int64_t *)(param_1 + 0xd8);
  *param_2 = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0x3f80000000000000;
  param_2[3] = 0;
  *(int32_t *)(param_2 + 4) = 0;
  *(int32_t *)((int64_t)param_2 + 0x24) = 0;
  *(int32_t *)(param_2 + 5) = 0x3f800000;
  *(int32_t *)((int64_t)param_2 + 0x2c) = 0;
  *(int32_t *)(param_2 + 6) = 0;
  *(int32_t *)((int64_t)param_2 + 0x34) = 0;
  *(int32_t *)(param_2 + 7) = 0;
  *(int32_t *)((int64_t)param_2 + 0x3c) = 0x3f800000;
  lVar1 = *(int64_t *)(param_1 + 0xd0);
  fVar5 = 3.4028235e+38;
  if (lVar3 - lVar1 >> 3 != 1) {
    lVar3 = 0;
    do {
      FUN_180463870(&uStack_58,*(uint64_t *)(lVar3 + lVar1),*(uint64_t *)(lVar3 + 8 + lVar1),
                    param_3,*(int32_t *)(param_1 + 0x1b0));
      fVar4 = (*param_3 - fStack_28) * (*param_3 - fStack_28) +
              (param_3[1] - fStack_24) * (param_3[1] - fStack_24) +
              (param_3[2] - fStack_20) * (param_3[2] - fStack_20);
      if (fVar4 < fVar5) {
        *param_2 = uStack_58;
        param_2[1] = uStack_50;
        param_2[2] = uStack_48;
        param_2[3] = uStack_40;
        *(int32_t *)(param_2 + 4) = uStack_38;
        *(int32_t *)((int64_t)param_2 + 0x24) = uStack_34;
        *(int32_t *)(param_2 + 5) = uStack_30;
        *(int32_t *)((int64_t)param_2 + 0x2c) = uStack_2c;
        *(float *)(param_2 + 6) = fStack_28;
        *(float *)((int64_t)param_2 + 0x34) = fStack_24;
        *(float *)(param_2 + 7) = fStack_20;
        *(int32_t *)((int64_t)param_2 + 0x3c) = uStack_1c;
        fVar5 = fVar4;
      }
      lVar1 = *(int64_t *)(param_1 + 0xd0);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while ((uint64_t)(int64_t)iVar2 < (*(int64_t *)(param_1 + 0xd8) - lVar1 >> 3) - 1U);
  }
  return param_2;
}





