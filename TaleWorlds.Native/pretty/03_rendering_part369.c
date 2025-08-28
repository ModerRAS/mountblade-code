#include "TaleWorlds.Native.Split.h"

// 03_rendering_part369.c - 7 个函数

// 函数: void FUN_18046bc30(int64_t param_1,uint64_t param_2,int32_t param_3)
void FUN_18046bc30(int64_t param_1,uint64_t param_2,int32_t param_3)

{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  lVar4 = *(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30);
  iVar2 = 0;
  lVar3 = lVar4 >> 0x3f;
  if (lVar4 / 0x50 + lVar3 != lVar3) {
    lVar3 = 0;
    do {
      plVar1 = *(int64_t **)(lVar3 + *(int64_t *)(param_1 + 0x30));
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2,param_3);
      lVar3 = lVar3 + 0x50;
      iVar2 = iVar2 + 1;
    } while ((uint64_t)(int64_t)iVar2 <
             (uint64_t)((*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30)) / 0x50));
  }
  return;
}





// 函数: void FUN_18046bc76(void)
void FUN_18046bc76(void)

{
  int64_t lVar1;
  uint unaff_EBX;
  uint64_t uVar2;
  int64_t unaff_RDI;
  int64_t unaff_R15;
  
  uVar2 = (uint64_t)unaff_EBX;
  do {
    (**(code **)(**(int64_t **)(uVar2 + *(int64_t *)(unaff_RDI + 0x30)) + 0x170))();
    uVar2 = uVar2 + 0x50;
    unaff_EBX = unaff_EBX + 1;
    lVar1 = SUB168(SEXT816(unaff_R15) *
                   SEXT816(*(int64_t *)(unaff_RDI + 0x38) - *(int64_t *)(unaff_RDI + 0x30)),8);
  } while ((uint64_t)(int64_t)(int)unaff_EBX < (uint64_t)((lVar1 >> 5) - (lVar1 >> 0x3f)));
  return;
}





// 函数: void FUN_18046bcc6(void)
void FUN_18046bcc6(void)

{
  return;
}



uint64_t FUN_18046bce0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                       uint64_t *param_5)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int8_t uVar4;
  uint64_t *puVar5;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int64_t *plStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  uStack_c8 = *param_5;
  uStack_c0 = param_5[1];
  uStack_b8 = param_5[2];
  uStack_b0 = param_5[3];
  uStack_a8 = param_5[4];
  uStack_a0 = param_5[5];
  uStack_98 = param_5[6];
  uStack_90 = param_5[7];
  uStack_88 = param_5[8];
  uStack_80 = param_5[9];
  uVar2 = param_5[10];
  uStack_70 = param_5[0xb];
  uStack_68 = param_5[0xc];
  uStack_60 = param_5[0xd];
  uStack_78 = uVar2;
  if (*(char *)(param_1 + 0x84) != '\0') {
    uStack_70 = *(uint64_t *)(param_1 + 0x88);
    uStack_68 = *(uint64_t *)(param_1 + 0x90);
    uStack_78._5_3_ = (uint32_t)((uint64_t)uVar2 >> 0x28);
    uStack_78._0_5_ = CONCAT14(1,(int)uVar2);
  }
  puVar1 = *(uint64_t **)(param_1 + 0x38);
  for (puVar5 = *(uint64_t **)(param_1 + 0x30); puVar5 != puVar1; puVar5 = puVar5 + 10) {
    uStack_38 = puVar5[4];
    uStack_30 = puVar5[5];
    uStack_48 = puVar5[2];
    uStack_40 = puVar5[3];
    plStack_58 = (int64_t *)*puVar5;
    uStack_50 = puVar5[1];
    uStack_18 = puVar5[8];
    uStack_10 = puVar5[9];
    uStack_28 = *(int32_t *)(puVar5 + 6);
    uStack_24 = *(int32_t *)((int64_t)puVar5 + 0x34);
    uStack_20 = *(int32_t *)(puVar5 + 7);
    uStack_1c = *(int32_t *)((int64_t)puVar5 + 0x3c);
    uVar4 = 4;
    if ((char)uStack_10 != '\0') {
      uVar4 = 0;
    }
    uVar3 = (uint64_t)uStack_98 >> 0x30;
    uStack_98._6_2_ = (int16_t)uVar3;
    uStack_98._0_6_ = CONCAT15(uVar4,0x100000000);
    param_5 = (uint64_t *)
              (**(code **)(*plStack_58 + 0x1c8))(plStack_58,param_2,param_3,&uStack_50,&uStack_c8);
  }
  return (uint64_t)param_5 & 0xffffffffffffff00;
}



uint64_t FUN_18046bd6e(void)

{
  uint64_t uVar1;
  uint64_t *unaff_RBX;
  uint64_t *unaff_RDI;
  int32_t uStack0000000000000060;
  int8_t uStack0000000000000064;
  int8_t uStack0000000000000065;
  int64_t *plStack00000000000000a0;
  uint64_t uStack00000000000000a8;
  uint64_t uStack00000000000000b0;
  uint64_t uStack00000000000000b8;
  uint64_t uStack00000000000000c0;
  uint64_t uStack00000000000000c8;
  int32_t uStack00000000000000d0;
  int32_t uStack00000000000000d4;
  int32_t uStack00000000000000d8;
  int32_t uStack00000000000000dc;
  uint64_t uStack00000000000000e0;
  uint64_t uStack00000000000000e8;
  
  do {
    uStack00000000000000c0 = unaff_RBX[4];
    uStack00000000000000c8 = unaff_RBX[5];
    uStack00000000000000b0 = unaff_RBX[2];
    uStack00000000000000b8 = unaff_RBX[3];
    plStack00000000000000a0 = (int64_t *)*unaff_RBX;
    uStack00000000000000a8 = unaff_RBX[1];
    uStack00000000000000e0 = unaff_RBX[8];
    uStack00000000000000e8 = unaff_RBX[9];
    uStack00000000000000d0 = *(int32_t *)(unaff_RBX + 6);
    uStack00000000000000d4 = *(int32_t *)((int64_t)unaff_RBX + 0x34);
    uStack00000000000000d8 = *(int32_t *)(unaff_RBX + 7);
    uStack00000000000000dc = *(int32_t *)((int64_t)unaff_RBX + 0x3c);
    uStack0000000000000060 = 0;
    uStack0000000000000064 = 1;
    uStack0000000000000065 = 4;
    if ((char)uStack00000000000000e8 != '\0') {
      uStack0000000000000065 = 0;
    }
    uVar1 = (**(code **)(*plStack00000000000000a0 + 0x1c8))
                      (plStack00000000000000a0,uStack00000000000000e8,(int)plStack00000000000000a0,
                       &stack0x000000a8,&stack0x00000030);
    unaff_RBX = unaff_RBX + 10;
  } while (unaff_RBX != unaff_RDI);
  return uVar1 & 0xffffffffffffff00;
}



int8_t FUN_18046be18(void)

{
  return 0;
}





// 函数: void FUN_18046be40(int64_t param_1)
void FUN_18046be40(int64_t param_1)

{
  float *pfVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int32_t uStack_168;
  int32_t uStack_164;
  int32_t uStack_160;
  int32_t uStack_15c;
  int32_t uStack_158;
  int32_t uStack_154;
  int32_t uStack_150;
  int32_t uStack_14c;
  int32_t uStack_148;
  int32_t uStack_144;
  int32_t uStack_140;
  int32_t uStack_13c;
  int32_t uStack_138;
  int32_t uStack_134;
  int32_t uStack_130;
  int32_t uStack_12c;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  int32_t uStack_108;
  int32_t uStack_104;
  int32_t uStack_100;
  int32_t uStack_fc;
  int32_t uStack_f8;
  int32_t uStack_f4;
  int32_t uStack_f0;
  int32_t uStack_ec;
  uint64_t *puStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  int32_t uStack_b8;
  int32_t uStack_b4;
  int32_t uStack_b0;
  int32_t uStack_ac;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int8_t auStack_58 [64];
  
  lVar6 = *(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30);
  *(int32_t *)(param_1 + 0x80) = 0;
  lVar5 = lVar6 >> 0x3f;
  if (lVar6 / 0x50 + lVar5 == lVar5) {
    *(uint64_t *)(param_1 + 0x50) = 0;
    *(uint64_t *)(param_1 + 0x58) = 0;
    *(uint64_t *)(param_1 + 0x60) = 0;
    *(uint64_t *)(param_1 + 0x68) = 0;
    *(uint64_t *)(param_1 + 0x70) = 0;
    *(uint64_t *)(param_1 + 0x78) = 0;
    return;
  }
  *(uint64_t *)(param_1 + 0x50) = 0x4cbebc204cbebc20;
  *(uint64_t *)(param_1 + 0x58) = 0x7f7fffff4cbebc20;
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(uint64_t *)(param_1 + 0x78) = 0x7f7fffff00000000;
  *(uint64_t *)(param_1 + 0x60) = 0xccbebc20ccbebc20;
  *(uint64_t *)(param_1 + 0x68) = 0x7f7fffffccbebc20;
  puVar2 = *(uint64_t **)(param_1 + 0x38);
  for (puVar7 = *(uint64_t **)(param_1 + 0x30); puVar7 != puVar2; puVar7 = puVar7 + 10) {
    puVar3 = (uint64_t *)*puVar7;
    uStack_e0 = puVar7[1];
    uStack_d8 = puVar7[2];
    uStack_d0 = puVar7[3];
    uStack_c8 = puVar7[4];
    uStack_c0 = puVar7[5];
    uStack_b8 = *(int32_t *)(puVar7 + 6);
    uStack_b4 = *(int32_t *)((int64_t)puVar7 + 0x34);
    uStack_b0 = *(int32_t *)(puVar7 + 7);
    uStack_ac = *(int32_t *)((int64_t)puVar7 + 0x3c);
    uStack_a8 = *(int32_t *)(puVar7 + 8);
    uStack_a4 = *(int32_t *)((int64_t)puVar7 + 0x44);
    uStack_a0 = *(int32_t *)(puVar7 + 9);
    uStack_9c = *(int32_t *)((int64_t)puVar7 + 0x4c);
    puStack_e8 = puVar3;
    if ((void *)*puVar3 == &processed_var_9304_ptr) {
      FUN_180276f30(puVar3,(int64_t)puVar3 + 0x214,0);
    }
    else {
      (**(code **)((void *)*puVar3 + 0x160))(puVar3);
    }
    lVar5 = *(int64_t *)(param_1 + 0x28);
    uStack_15c = 0;
    uStack_14c = 0;
    uStack_13c = 0;
    uStack_168 = *(int32_t *)(lVar5 + 0x70);
    uStack_164 = *(int32_t *)(lVar5 + 0x74);
    uStack_160 = *(int32_t *)(lVar5 + 0x78);
    uStack_158 = *(int32_t *)(lVar5 + 0x80);
    uStack_154 = *(int32_t *)(lVar5 + 0x84);
    uStack_150 = *(int32_t *)(lVar5 + 0x88);
    uStack_148 = *(int32_t *)(lVar5 + 0x90);
    uStack_144 = *(int32_t *)(lVar5 + 0x94);
    uStack_140 = *(int32_t *)(lVar5 + 0x98);
    uStack_138 = *(int32_t *)(lVar5 + 0xa0);
    uStack_134 = *(int32_t *)(lVar5 + 0xa4);
    uStack_130 = *(int32_t *)(lVar5 + 0xa8);
    uStack_12c = 0x3f800000;
    FUN_180084760(&uStack_168,auStack_58);
    uStack_128 = uStack_e0;
    uStack_120 = uStack_d8 & 0xffffffff;
    uStack_118 = uStack_d0;
    uStack_110 = uStack_c8 & 0xffffffff;
    uStack_108 = (int32_t)uStack_c0;
    uStack_104 = uStack_c0._4_4_;
    uStack_100 = uStack_b8;
    uStack_f8 = uStack_b0;
    uStack_f4 = uStack_ac;
    uStack_f0 = uStack_a8;
    uStack_fc = 0;
    uStack_ec = 0x3f800000;
    puVar4 = (uint64_t *)FUN_1800946d0(&uStack_128,&uStack_168,auStack_58);
    uStack_98 = *puVar4;
    uStack_90 = puVar4[1];
    uStack_88 = puVar4[2];
    uStack_80 = puVar4[3];
    uStack_78 = *(int32_t *)(puVar4 + 4);
    uStack_74 = *(int32_t *)((int64_t)puVar4 + 0x24);
    uStack_70 = *(int32_t *)(puVar4 + 5);
    uStack_6c = *(int32_t *)((int64_t)puVar4 + 0x2c);
    uStack_68 = *(int32_t *)(puVar4 + 6);
    uStack_64 = *(int32_t *)((int64_t)puVar4 + 0x34);
    uStack_60 = *(int32_t *)(puVar4 + 7);
    uStack_5c = *(int32_t *)((int64_t)puVar4 + 0x3c);
    if ((void *)*puVar3 == &processed_var_9304_ptr) {
      lVar5 = (int64_t)puVar3 + 0x214;
    }
    else {
      lVar5 = (**(code **)((void *)*puVar3 + 0x198))(puVar3);
    }
    FUN_18063a240(param_1 + 0x50,lVar5);
  }
  pfVar1 = (float *)(param_1 + 0x50);
  fVar10 = *(float *)(param_1 + 0x60);
  if (*pfVar1 <= fVar10) {
    fVar9 = (fVar10 + *pfVar1) * 0.5;
    *(float *)(param_1 + 0x70) = fVar9;
    *(float *)(param_1 + 0x74) = (*(float *)(param_1 + 100) + *(float *)(param_1 + 0x54)) * 0.5;
    *(float *)(param_1 + 0x78) = (*(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x58)) * 0.5;
    *(int32_t *)(param_1 + 0x7c) = 0x7f7fffff;
    fVar10 = fVar10 - fVar9;
    fVar9 = *(float *)(param_1 + 0x68) - *(float *)(param_1 + 0x78);
    fVar8 = *(float *)(param_1 + 100) - *(float *)(param_1 + 0x74);
    *(float *)(param_1 + 0x80) = SQRT(fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9);
    return;
  }
  *(int32_t *)(param_1 + 0x80) = 0;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  *(uint64_t *)(param_1 + 0x58) = 0;
  *(uint64_t *)(param_1 + 0x60) = 0;
  *(uint64_t *)(param_1 + 0x68) = 0;
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(uint64_t *)(param_1 + 0x78) = 0;
  return;
}





// 函数: void FUN_18046beb3(int64_t param_1,uint64_t param_2)
void FUN_18046beb3(int64_t param_1,uint64_t param_2)

{
  float *pfVar1;
  uint64_t *puVar2;
  void *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  uint64_t *puVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t *puVar17;
  int64_t lVar18;
  uint64_t *puVar19;
  uint64_t *unaff_RBP;
  int64_t unaff_R14;
  float fVar20;
  int32_t in_XMM1_Dc;
  int32_t in_XMM1_Dd;
  float fVar21;
  float fVar22;
  int32_t uStackX_20;
  int32_t uStackX_24;
  uint64_t in_stack_00000060;
  uint64_t in_stack_00000068;
  uint64_t in_stack_00000070;
  uint64_t in_stack_00000078;
  
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(uint64_t *)(param_1 + 0x78) = 0x7f7fffff00000000;
  *(int *)(param_1 + 0x60) = (int)param_2;
  *(int *)(param_1 + 100) = (int)((uint64_t)param_2 >> 0x20);
  *(int32_t *)(param_1 + 0x68) = in_XMM1_Dc;
  *(int32_t *)(param_1 + 0x6c) = in_XMM1_Dd;
  puVar2 = *(uint64_t **)(param_1 + 0x38);
  for (puVar19 = *(uint64_t **)(param_1 + 0x30); puVar19 != puVar2; puVar19 = puVar19 + 10) {
    puVar12 = (uint64_t *)*puVar19;
    uVar13 = puVar19[1];
    uVar14 = puVar19[3];
    uVar15 = puVar19[4];
    uVar16 = puVar19[5];
    unaff_RBP[-10] = puVar19[2];
    unaff_RBP[-9] = uVar14;
    uVar4 = *(int32_t *)(puVar19 + 6);
    uVar5 = *(int32_t *)((int64_t)puVar19 + 0x34);
    uVar6 = *(int32_t *)(puVar19 + 7);
    uVar7 = *(int32_t *)((int64_t)puVar19 + 0x3c);
    unaff_RBP[-8] = uVar15;
    unaff_RBP[-7] = uVar16;
    uVar8 = *(int32_t *)(puVar19 + 8);
    uVar9 = *(int32_t *)((int64_t)puVar19 + 0x44);
    uVar10 = *(int32_t *)(puVar19 + 9);
    uVar11 = *(int32_t *)((int64_t)puVar19 + 0x4c);
    puVar3 = (void *)*puVar12;
    unaff_RBP[-0xc] = puVar12;
    unaff_RBP[-0xb] = uVar13;
    *(int32_t *)(unaff_RBP + -6) = uVar4;
    *(int32_t *)((int64_t)unaff_RBP + -0x2c) = uVar5;
    *(int32_t *)(unaff_RBP + -5) = uVar6;
    *(int32_t *)((int64_t)unaff_RBP + -0x24) = uVar7;
    *(int32_t *)(unaff_RBP + -4) = uVar8;
    *(int32_t *)((int64_t)unaff_RBP + -0x1c) = uVar9;
    *(int32_t *)(unaff_RBP + -3) = uVar10;
    *(int32_t *)((int64_t)unaff_RBP + -0x14) = uVar11;
    if (puVar3 == &processed_var_9304_ptr) {
      FUN_180276f30(puVar12,(int64_t)puVar12 + 0x214,0);
    }
    else {
      (**(code **)(puVar3 + 0x160))(puVar12);
    }
    uStackX_20 = *(int32_t *)(*(int64_t *)(unaff_R14 + 0x28) + 0x70);
    uStackX_24 = *(int32_t *)(*(int64_t *)(unaff_R14 + 0x28) + 0x74);
    FUN_180084760(&uStackX_20,unaff_RBP + 6);
    in_stack_00000060 = unaff_RBP[-0xb];
    in_stack_00000070 = unaff_RBP[-9];
    in_stack_00000068 = unaff_RBP[-10] & 0xffffffff;
    in_stack_00000078 = unaff_RBP[-8] & 0xffffffff;
    *(int32_t *)(unaff_RBP + -0x10) = *(int32_t *)(unaff_RBP + -7);
    *(int32_t *)((int64_t)unaff_RBP + -0x7c) = *(int32_t *)((int64_t)unaff_RBP + -0x34);
    *(int32_t *)(unaff_RBP + -0xf) = *(int32_t *)(unaff_RBP + -6);
    *(int32_t *)((int64_t)unaff_RBP + -0x74) = *(int32_t *)((int64_t)unaff_RBP + -0x2c);
    *(int32_t *)(unaff_RBP + -0xe) = *(int32_t *)(unaff_RBP + -5);
    *(int32_t *)((int64_t)unaff_RBP + -0x6c) = *(int32_t *)((int64_t)unaff_RBP + -0x24);
    *(int32_t *)(unaff_RBP + -0xd) = *(int32_t *)(unaff_RBP + -4);
    *(int32_t *)((int64_t)unaff_RBP + -100) = *(int32_t *)((int64_t)unaff_RBP + -0x1c);
    *(int32_t *)((int64_t)unaff_RBP + -0x74) = 0;
    *(int32_t *)((int64_t)unaff_RBP + -100) = 0x3f800000;
    puVar17 = (uint64_t *)FUN_1800946d0(&stack0x00000060,&uStackX_20,unaff_RBP + 6);
    uVar13 = puVar17[1];
    uVar14 = puVar17[2];
    uVar15 = puVar17[3];
    unaff_RBP[-2] = *puVar17;
    unaff_RBP[-1] = uVar13;
    uVar4 = *(int32_t *)(puVar17 + 4);
    uVar5 = *(int32_t *)((int64_t)puVar17 + 0x24);
    uVar6 = *(int32_t *)(puVar17 + 5);
    uVar7 = *(int32_t *)((int64_t)puVar17 + 0x2c);
    *unaff_RBP = uVar14;
    unaff_RBP[1] = uVar15;
    uVar8 = *(int32_t *)(puVar17 + 6);
    uVar9 = *(int32_t *)((int64_t)puVar17 + 0x34);
    uVar10 = *(int32_t *)(puVar17 + 7);
    uVar11 = *(int32_t *)((int64_t)puVar17 + 0x3c);
    puVar3 = (void *)*puVar12;
    *(int32_t *)(unaff_RBP + 2) = uVar4;
    *(int32_t *)((int64_t)unaff_RBP + 0x14) = uVar5;
    *(int32_t *)(unaff_RBP + 3) = uVar6;
    *(int32_t *)((int64_t)unaff_RBP + 0x1c) = uVar7;
    *(int32_t *)(unaff_RBP + 4) = uVar8;
    *(int32_t *)((int64_t)unaff_RBP + 0x24) = uVar9;
    *(int32_t *)(unaff_RBP + 5) = uVar10;
    *(int32_t *)((int64_t)unaff_RBP + 0x2c) = uVar11;
    if (puVar3 == &processed_var_9304_ptr) {
      lVar18 = (int64_t)puVar12 + 0x214;
    }
    else {
      lVar18 = (**(code **)(puVar3 + 0x198))(puVar12);
    }
    FUN_18063a240(unaff_R14 + 0x50,lVar18);
  }
  pfVar1 = (float *)(unaff_R14 + 0x50);
  fVar22 = *(float *)(unaff_R14 + 0x60);
  if (*pfVar1 <= fVar22) {
    fVar21 = (fVar22 + *pfVar1) * 0.5;
    *(float *)(unaff_R14 + 0x70) = fVar21;
    *(float *)(unaff_R14 + 0x74) =
         (*(float *)(unaff_R14 + 100) + *(float *)(unaff_R14 + 0x54)) * 0.5;
    *(float *)(unaff_R14 + 0x78) =
         (*(float *)(unaff_R14 + 0x68) + *(float *)(unaff_R14 + 0x58)) * 0.5;
    *(int32_t *)(unaff_R14 + 0x7c) = 0x7f7fffff;
    fVar22 = fVar22 - fVar21;
    fVar21 = *(float *)(unaff_R14 + 0x68) - *(float *)(unaff_R14 + 0x78);
    fVar20 = *(float *)(unaff_R14 + 100) - *(float *)(unaff_R14 + 0x74);
    *(float *)(unaff_R14 + 0x80) = SQRT(fVar20 * fVar20 + fVar22 * fVar22 + fVar21 * fVar21);
    return;
  }
  *(int32_t *)(unaff_R14 + 0x80) = 0;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  *(uint64_t *)(unaff_R14 + 0x58) = 0;
  *(uint64_t *)(unaff_R14 + 0x60) = 0;
  *(uint64_t *)(unaff_R14 + 0x68) = 0;
  *(uint64_t *)(unaff_R14 + 0x70) = 0;
  *(uint64_t *)(unaff_R14 + 0x78) = 0;
  return;
}





// 函数: void FUN_18046bee3(void)
void FUN_18046bee3(void)

{
  float *pfVar1;
  void *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  uint64_t *puVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t *puVar16;
  int64_t lVar17;
  uint64_t *unaff_RBX;
  uint64_t *unaff_RBP;
  int64_t unaff_R14;
  uint64_t *unaff_R15;
  float fVar18;
  float fVar19;
  float fVar20;
  int32_t uStackX_20;
  int32_t uStackX_24;
  uint64_t in_stack_00000060;
  uint64_t in_stack_00000068;
  uint64_t in_stack_00000070;
  uint64_t in_stack_00000078;
  
  do {
    puVar11 = (uint64_t *)*unaff_RBX;
    uVar12 = unaff_RBX[1];
    uVar13 = unaff_RBX[3];
    uVar14 = unaff_RBX[4];
    uVar15 = unaff_RBX[5];
    unaff_RBP[-10] = unaff_RBX[2];
    unaff_RBP[-9] = uVar13;
    uVar3 = *(int32_t *)(unaff_RBX + 6);
    uVar4 = *(int32_t *)((int64_t)unaff_RBX + 0x34);
    uVar5 = *(int32_t *)(unaff_RBX + 7);
    uVar6 = *(int32_t *)((int64_t)unaff_RBX + 0x3c);
    unaff_RBP[-8] = uVar14;
    unaff_RBP[-7] = uVar15;
    uVar7 = *(int32_t *)(unaff_RBX + 8);
    uVar8 = *(int32_t *)((int64_t)unaff_RBX + 0x44);
    uVar9 = *(int32_t *)(unaff_RBX + 9);
    uVar10 = *(int32_t *)((int64_t)unaff_RBX + 0x4c);
    puVar2 = (void *)*puVar11;
    unaff_RBP[-0xc] = puVar11;
    unaff_RBP[-0xb] = uVar12;
    *(int32_t *)(unaff_RBP + -6) = uVar3;
    *(int32_t *)((int64_t)unaff_RBP + -0x2c) = uVar4;
    *(int32_t *)(unaff_RBP + -5) = uVar5;
    *(int32_t *)((int64_t)unaff_RBP + -0x24) = uVar6;
    *(int32_t *)(unaff_RBP + -4) = uVar7;
    *(int32_t *)((int64_t)unaff_RBP + -0x1c) = uVar8;
    *(int32_t *)(unaff_RBP + -3) = uVar9;
    *(int32_t *)((int64_t)unaff_RBP + -0x14) = uVar10;
    if (puVar2 == &processed_var_9304_ptr) {
      FUN_180276f30(puVar11,(int64_t)puVar11 + 0x214,0);
    }
    else {
      (**(code **)(puVar2 + 0x160))(puVar11);
    }
    uStackX_20 = *(int32_t *)(*(int64_t *)(unaff_R14 + 0x28) + 0x70);
    uStackX_24 = *(int32_t *)(*(int64_t *)(unaff_R14 + 0x28) + 0x74);
    FUN_180084760(&uStackX_20,unaff_RBP + 6);
    in_stack_00000060 = unaff_RBP[-0xb];
    in_stack_00000070 = unaff_RBP[-9];
    in_stack_00000068 = unaff_RBP[-10] & 0xffffffff;
    in_stack_00000078 = unaff_RBP[-8] & 0xffffffff;
    *(int32_t *)(unaff_RBP + -0x10) = *(int32_t *)(unaff_RBP + -7);
    *(int32_t *)((int64_t)unaff_RBP + -0x7c) = *(int32_t *)((int64_t)unaff_RBP + -0x34);
    *(int32_t *)(unaff_RBP + -0xf) = *(int32_t *)(unaff_RBP + -6);
    *(int32_t *)((int64_t)unaff_RBP + -0x74) = *(int32_t *)((int64_t)unaff_RBP + -0x2c);
    *(int32_t *)(unaff_RBP + -0xe) = *(int32_t *)(unaff_RBP + -5);
    *(int32_t *)((int64_t)unaff_RBP + -0x6c) = *(int32_t *)((int64_t)unaff_RBP + -0x24);
    *(int32_t *)(unaff_RBP + -0xd) = *(int32_t *)(unaff_RBP + -4);
    *(int32_t *)((int64_t)unaff_RBP + -100) = *(int32_t *)((int64_t)unaff_RBP + -0x1c);
    *(int32_t *)((int64_t)unaff_RBP + -0x74) = 0;
    *(int32_t *)((int64_t)unaff_RBP + -100) = 0x3f800000;
    puVar16 = (uint64_t *)FUN_1800946d0(&stack0x00000060,&uStackX_20,unaff_RBP + 6);
    uVar12 = puVar16[1];
    uVar13 = puVar16[2];
    uVar14 = puVar16[3];
    unaff_RBP[-2] = *puVar16;
    unaff_RBP[-1] = uVar12;
    uVar3 = *(int32_t *)(puVar16 + 4);
    uVar4 = *(int32_t *)((int64_t)puVar16 + 0x24);
    uVar5 = *(int32_t *)(puVar16 + 5);
    uVar6 = *(int32_t *)((int64_t)puVar16 + 0x2c);
    *unaff_RBP = uVar13;
    unaff_RBP[1] = uVar14;
    uVar7 = *(int32_t *)(puVar16 + 6);
    uVar8 = *(int32_t *)((int64_t)puVar16 + 0x34);
    uVar9 = *(int32_t *)(puVar16 + 7);
    uVar10 = *(int32_t *)((int64_t)puVar16 + 0x3c);
    puVar2 = (void *)*puVar11;
    *(int32_t *)(unaff_RBP + 2) = uVar3;
    *(int32_t *)((int64_t)unaff_RBP + 0x14) = uVar4;
    *(int32_t *)(unaff_RBP + 3) = uVar5;
    *(int32_t *)((int64_t)unaff_RBP + 0x1c) = uVar6;
    *(int32_t *)(unaff_RBP + 4) = uVar7;
    *(int32_t *)((int64_t)unaff_RBP + 0x24) = uVar8;
    *(int32_t *)(unaff_RBP + 5) = uVar9;
    *(int32_t *)((int64_t)unaff_RBP + 0x2c) = uVar10;
    if (puVar2 == &processed_var_9304_ptr) {
      lVar17 = (int64_t)puVar11 + 0x214;
    }
    else {
      lVar17 = (**(code **)(puVar2 + 0x198))(puVar11);
    }
    FUN_18063a240(unaff_R14 + 0x50,lVar17);
    unaff_RBX = unaff_RBX + 10;
  } while (unaff_RBX != unaff_R15);
  pfVar1 = (float *)(unaff_R14 + 0x50);
  fVar20 = *(float *)(unaff_R14 + 0x60);
  if (*pfVar1 <= fVar20) {
    fVar19 = (fVar20 + *pfVar1) * 0.5;
    *(float *)(unaff_R14 + 0x70) = fVar19;
    *(float *)(unaff_R14 + 0x74) =
         (*(float *)(unaff_R14 + 100) + *(float *)(unaff_R14 + 0x54)) * 0.5;
    *(float *)(unaff_R14 + 0x78) =
         (*(float *)(unaff_R14 + 0x68) + *(float *)(unaff_R14 + 0x58)) * 0.5;
    *(int32_t *)(unaff_R14 + 0x7c) = 0x7f7fffff;
    fVar20 = fVar20 - fVar19;
    fVar19 = *(float *)(unaff_R14 + 0x68) - *(float *)(unaff_R14 + 0x78);
    fVar18 = *(float *)(unaff_R14 + 100) - *(float *)(unaff_R14 + 0x74);
    *(float *)(unaff_R14 + 0x80) = SQRT(fVar18 * fVar18 + fVar20 * fVar20 + fVar19 * fVar19);
    return;
  }
  *(int32_t *)(unaff_R14 + 0x80) = 0;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  *(uint64_t *)(unaff_R14 + 0x58) = 0;
  *(uint64_t *)(unaff_R14 + 0x60) = 0;
  *(uint64_t *)(unaff_R14 + 0x68) = 0;
  *(uint64_t *)(unaff_R14 + 0x70) = 0;
  *(uint64_t *)(unaff_R14 + 0x78) = 0;
  return;
}





// 函数: void FUN_18046c0c9(void)
void FUN_18046c0c9(void)

{
  float *pfVar1;
  int64_t unaff_R14;
  float fVar2;
  float fVar3;
  float fVar4;
  
  pfVar1 = (float *)(unaff_R14 + 0x50);
  fVar4 = *(float *)(unaff_R14 + 0x60);
  if (*pfVar1 <= fVar4) {
    fVar3 = (fVar4 + *pfVar1) * 0.5;
    *(float *)(unaff_R14 + 0x70) = fVar3;
    *(float *)(unaff_R14 + 0x74) =
         (*(float *)(unaff_R14 + 100) + *(float *)(unaff_R14 + 0x54)) * 0.5;
    *(float *)(unaff_R14 + 0x78) =
         (*(float *)(unaff_R14 + 0x68) + *(float *)(unaff_R14 + 0x58)) * 0.5;
    *(int32_t *)(unaff_R14 + 0x7c) = 0x7f7fffff;
    fVar4 = fVar4 - fVar3;
    fVar3 = *(float *)(unaff_R14 + 0x68) - *(float *)(unaff_R14 + 0x78);
    fVar2 = *(float *)(unaff_R14 + 100) - *(float *)(unaff_R14 + 0x74);
    *(float *)(unaff_R14 + 0x80) = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
    return;
  }
  *(int32_t *)(unaff_R14 + 0x80) = 0;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  *(uint64_t *)(unaff_R14 + 0x58) = 0;
  *(uint64_t *)(unaff_R14 + 0x60) = 0;
  *(uint64_t *)(unaff_R14 + 0x68) = 0;
  *(uint64_t *)(unaff_R14 + 0x70) = 0;
  *(uint64_t *)(unaff_R14 + 0x78) = 0;
  return;
}





