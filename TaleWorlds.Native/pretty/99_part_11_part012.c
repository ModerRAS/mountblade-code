#include "TaleWorlds.Native.Split.h"

// 99_part_11_part012.c - 13 个函数

// 函数: void FUN_1806e41b0(int64_t param_1,int32_t param_2,char param_3)
void FUN_1806e41b0(int64_t param_1,int32_t param_2,char param_3)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  byte *pbVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t *plVar8;
  float fVar9;
  float fVar10;
  int8_t auStackX_18 [8];
  int64_t lStack_38;
  int8_t auStack_30 [40];
  
  *(int32_t *)(*(int64_t *)(param_1 + 0x68) + 0x50) = param_2;
  if (param_3 != '\0') {
    (**(code **)(**(int64_t **)(param_1 + 0x60) + 0x30))
              (*(int64_t **)(param_1 + 0x60),&lStack_38,auStack_30);
    plVar8 = &lStack_38;
    lVar7 = 2;
    do {
      if ((((int64_t *)*plVar8 != (int64_t *)0x0) &&
          (lVar4 = (**(code **)(*(int64_t *)*plVar8 + 0x30))(), lVar4 != 0)) &&
         (iVar3 = (**(code **)(*(int64_t *)*plVar8 + 0x28))(), iVar3 == 1)) {
        plVar1 = (int64_t *)*plVar8;
        pbVar5 = (byte *)(**(code **)(*plVar1 + 0x1a8))(plVar1,auStackX_18);
        if ((*pbVar5 & 1) == 0) {
          plVar6 = (int64_t *)(**(code **)(*plVar1 + 0x30))(plVar1);
          fVar9 = (float)(**(code **)(*plVar6 + 0x368))(plVar6);
          fVar10 = (float)(**(code **)(*plVar1 + 0x240))(plVar1);
          cVar2 = (**(code **)(*plVar1 + 0x1f8))(plVar1);
          if ((fVar10 < fVar9) || (fVar9 = fVar10, cVar2 != '\0')) {
            (**(code **)(*plVar1 + 0x248))(plVar1);
            (**(code **)(*plVar1 + 0x238))(plVar1,fVar9);
          }
        }
      }
      plVar8 = plVar8 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
                    // WARNING: Could not recover jumptable at 0x0001806e42d3. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(int64_t **)(param_1 + 0x60) + 0x40))();
  return;
}






// 函数: void FUN_1806e41d4(int64_t *param_1)
void FUN_1806e41d4(int64_t *param_1)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  byte *pbVar5;
  int64_t *plVar6;
  int64_t unaff_RBP;
  int64_t lVar7;
  int64_t *plVar8;
  float fVar9;
  float fVar10;
  int64_t lStackX_20;
  
  (**(code **)(*param_1 + 0x30))(param_1,&lStackX_20);
  plVar8 = &lStackX_20;
  lVar7 = 2;
  do {
    if ((((int64_t *)*plVar8 != (int64_t *)0x0) &&
        (lVar4 = (**(code **)(*(int64_t *)*plVar8 + 0x30))(), lVar4 != 0)) &&
       (iVar3 = (**(code **)(*(int64_t *)*plVar8 + 0x28))(), iVar3 == 1)) {
      plVar1 = (int64_t *)*plVar8;
      pbVar5 = (byte *)(**(code **)(*plVar1 + 0x1a8))(plVar1,&stack0x00000070);
      if ((*pbVar5 & 1) == 0) {
        plVar6 = (int64_t *)(**(code **)(*plVar1 + 0x30))(plVar1);
        fVar9 = (float)(**(code **)(*plVar6 + 0x368))(plVar6);
        fVar10 = (float)(**(code **)(*plVar1 + 0x240))(plVar1);
        cVar2 = (**(code **)(*plVar1 + 0x1f8))(plVar1);
        if ((fVar10 < fVar9) || (fVar9 = fVar10, cVar2 != '\0')) {
          (**(code **)(*plVar1 + 0x248))(plVar1);
          (**(code **)(*plVar1 + 0x238))(plVar1,fVar9);
        }
      }
    }
    plVar8 = plVar8 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
                    // WARNING: Could not recover jumptable at 0x0001806e42d3. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(int64_t **)(unaff_RBP + 0x60) + 0x40))();
  return;
}






// 函数: void FUN_1806e42c7(void)
void FUN_1806e42c7(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Could not recover jumptable at 0x0001806e42d3. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(int64_t **)(unaff_RBP + 0x60) + 0x40))();
  return;
}



bool FUN_1806e4430(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0xd0))(param_2,param_3,param_4,param_1 + 0x18,0x180be0780,0x90);
  *(int64_t *)(param_1 + 0x60) = lVar1;
  return lVar1 != 0;
}






// 函数: void FUN_1806e44a0(int64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1806e44a0(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  float fVar1;
  int8_t auStack_128 [48];
  float fStack_f8;
  float fStack_f4;
  float fStack_ec;
  int8_t auStack_d8 [192];
  
  FUN_1806dee40(param_1,param_2,param_3,auStack_d8,auStack_128,&fStack_f8,0);
  if (fStack_f8 == 0.0) {
    fStack_f8 = 0.0;
  }
  else {
    fStack_f8 = fStack_f8 * (1.0 / SQRT(fStack_ec * fStack_ec + fStack_f8 * fStack_f8));
  }
  fVar1 = *(float *)(param_1 + 0x7c) * 0.5;
                    // WARNING: Subroutine does not return
  FUN_1808fd400(fVar1,fVar1,fStack_f4 * -fStack_f8);
}






// 函数: void FUN_1806e4f80(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1806e4f80(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                  byte param_5)

{
  float fVar1;
  float fVar2;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  int32_t uStack_8c;
  float afStack_88 [3];
  float fStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  int32_t uStack_6c;
  int8_t auStack_58 [80];
  
  FUN_1806df310(&uStack_78,auStack_58,param_2,param_3,param_4);
  if ((param_5 & 1) != 0) {
    (**(code **)(*param_1 + 8))(param_1,&uStack_78,auStack_58);
  }
  if (((*(byte *)(param_2 + 0x80) & 1) != 0) && ((param_5 & 2) != 0)) {
    uStack_98 = uStack_78 ^ 0x80000000;
    uStack_90 = uStack_70 ^ 0x80000000;
    uStack_94 = uStack_74 ^ 0x80000000;
    uStack_8c = uStack_6c;
    FUN_1800fcb90(&uStack_98,afStack_88,auStack_58);
    fVar2 = SQRT(afStack_88[0] * afStack_88[0] + fStack_7c * fStack_7c);
    if (fVar2 != 0.0) {
      fVar2 = 1.0 / fVar2;
      afStack_88[0] = afStack_88[0] * fVar2;
      fStack_7c = fStack_7c * fVar2;
    }
    if (fStack_7c <= -1.0) {
      fStack_7c = -1.0;
    }
    if (1.0 <= fStack_7c) {
      fStack_7c = 1.0;
    }
    fVar2 = (float)acosf(fStack_7c);
    fVar2 = fVar2 + fVar2;
    if (afStack_88[0] < 0.0) {
      fVar2 = -fVar2;
    }
    fVar1 = *(float *)(param_2 + 0x6c);
    if ((0.0 < *(float *)(param_2 + 0x68)) || (0.0 < *(float *)(param_2 + 100))) {
      fVar1 = 0.0;
    }
    (**(code **)(*param_1 + 0x18))
              (param_1,&uStack_78,*(float *)(param_2 + 0x74),*(float *)(param_2 + 0x70),
               *(float *)(param_2 + 0x70) - fVar1 < fVar2 ||
               fVar2 < fVar1 + *(float *)(param_2 + 0x74));
  }
  return;
}






// 函数: void FUN_1806e4ffb(uint param_1,uint param_2)
void FUN_1806e4ffb(uint param_1,uint param_2)

{
  int64_t unaff_RBX;
  int64_t *unaff_RDI;
  float fVar1;
  float fVar2;
  float fVar3;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  uint uStack0000000000000038;
  float in_stack_00000040;
  uint64_t in_stack_00000048;
  uint64_t in_stack_00000050;
  
  uStack0000000000000030 = param_1 ^ 0x80000000;
  uStack0000000000000038 = param_2 ^ 0x80000000;
  uStack0000000000000034 = in_stack_00000050._4_4_ ^ 0x80000000;
  FUN_1800fcb90(&stack0x00000030);
  fVar2 = SQRT(in_stack_00000040 * in_stack_00000040 +
               in_stack_00000048._4_4_ * in_stack_00000048._4_4_);
  fVar3 = in_stack_00000040;
  if (fVar2 != 0.0) {
    fVar2 = 1.0 / fVar2;
    fVar3 = in_stack_00000040 * fVar2;
    in_stack_00000048._4_4_ = in_stack_00000048._4_4_ * fVar2;
  }
  if (in_stack_00000048._4_4_ <= -1.0) {
    in_stack_00000048._4_4_ = -1.0;
  }
  if (1.0 <= in_stack_00000048._4_4_) {
    in_stack_00000048._4_4_ = 1.0;
  }
  fVar2 = (float)acosf(in_stack_00000048._4_4_);
  fVar2 = fVar2 + fVar2;
  if (fVar3 < 0.0) {
    fVar2 = -fVar2;
  }
  fVar3 = *(float *)(unaff_RBX + 0x6c);
  if ((0.0 < *(float *)(unaff_RBX + 0x68)) || (0.0 < *(float *)(unaff_RBX + 100))) {
    fVar3 = 0.0;
  }
  fVar1 = *(float *)(unaff_RBX + 0x70) - fVar3;
  (**(code **)(*unaff_RDI + 0x18))
            (fVar1,&stack0x00000050,*(float *)(unaff_RBX + 0x74),*(float *)(unaff_RBX + 0x70),
             fVar1 < fVar2 || fVar2 < fVar3 + *(float *)(unaff_RBX + 0x74));
  return;
}






// 函数: void FUN_1806e50c3(uint64_t param_1,uint param_2)
void FUN_1806e50c3(uint64_t param_1,uint param_2)

{
  int64_t unaff_RBX;
  int64_t *unaff_RDI;
  float fVar1;
  float fVar2;
  float unaff_XMM7_Da;
  uint unaff_XMM8_Da;
  
  fVar2 = *(float *)(unaff_RBX + 0x6c);
  if ((unaff_XMM7_Da < *(float *)(unaff_RBX + 0x68)) ||
     (unaff_XMM7_Da < *(float *)(unaff_RBX + 100))) {
    fVar2 = 0.0;
  }
  fVar1 = *(float *)(unaff_RBX + 0x70) - fVar2;
  (**(code **)(*unaff_RDI + 0x18))
            (fVar1,&stack0x00000050,*(float *)(unaff_RBX + 0x74),*(float *)(unaff_RBX + 0x70),
             fVar1 < (float)(param_2 ^ unaff_XMM8_Da) ||
             (float)(param_2 ^ unaff_XMM8_Da) < fVar2 + *(float *)(unaff_RBX + 0x74));
  return;
}






// 函数: void FUN_1806e50e5(uint64_t param_1,float param_2,float param_3,float param_4)
void FUN_1806e50e5(uint64_t param_1,float param_2,float param_3,float param_4)

{
  int64_t unaff_RBX;
  int64_t *unaff_RDI;
  float in_XMM4_Da;
  float unaff_XMM7_Da;
  
  if (unaff_XMM7_Da < *(float *)(unaff_RBX + 100)) {
    param_3 = 0.0;
  }
  (**(code **)(*unaff_RDI + 0x18))
            (param_4 - param_3,&stack0x00000050,*unaff_RDI,param_4,
             param_4 - param_3 < param_2 || param_2 < param_3 + in_XMM4_Da);
  return;
}






// 函数: void FUN_1806e5130(void)
void FUN_1806e5130(void)

{
  return;
}



int64_t FUN_1806e5150(uint64_t *param_1,float *param_2,uint64_t param_3,int32_t *param_4,
                      int32_t *param_5,int64_t param_6,int64_t param_7,char param_8,
                      float *param_9,float *param_10)

{
  byte bVar1;
  ushort uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  ushort uVar6;
  int64_t lVar7;
  char cVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  uint64_t *puStack_f8;
  uint64_t *puStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  *param_4 = *param_5;
  param_4[1] = uVar3;
  param_4[2] = uVar4;
  param_4[3] = uVar5;
  puStack_f8 = param_1;
  puStack_f0 = param_1;
  FUN_1806df310(&fStack_128,&fStack_158,param_5,param_6,param_7);
  fVar13 = *(float *)(param_6 + 0x10);
  fVar15 = *(float *)(param_6 + 0x14);
  param_2[2] = fStack_140 - *(float *)(param_6 + 0x18);
  fStack_d0 = fStack_118;
  *param_2 = fStack_148 - fVar13;
  fStack_c4 = fStack_148;
  param_2[1] = fStack_144 - fVar15;
  fStack_e8 = fStack_148 - *(float *)(param_6 + 0x10);
  fStack_e4 = fStack_144 - *(float *)(param_6 + 0x14);
  bVar1 = *(byte *)(param_5 + 0x20);
  fStack_c0 = fStack_144;
  fStack_bc = fStack_140;
  fStack_e0 = fStack_140 - *(float *)(param_6 + 0x18);
  fStack_d8 = fStack_144 - *(float *)(param_7 + 0x14);
  fStack_c8 = fStack_110;
  fStack_dc = fStack_148 - *(float *)(param_7 + 0x10);
  fStack_d4 = fStack_140 - *(float *)(param_7 + 0x18);
  fStack_cc = fStack_114;
  if (((bVar1 & 1) == 0) ||
     ((float)param_5[0x1d] <= (float)param_5[0x1c] && (float)param_5[0x1c] != (float)param_5[0x1d]))
  {
    cVar8 = '\0';
  }
  else {
    cVar8 = '\x01';
  }
  if ((param_8 == '\0') &&
     (fStack_158 * fStack_128 + fStack_154 * fStack_124 + fStack_150 * fStack_120 +
      fStack_14c * fStack_11c < 0.0)) {
    fStack_158 = -fStack_158;
    fStack_154 = -fStack_154;
    fStack_150 = -fStack_150;
    fStack_14c = -fStack_14c;
  }
  fVar16 = (fStack_144 - fStack_114) + (fStack_144 - fStack_114);
  fVar15 = (fStack_148 - fStack_118) + (fStack_148 - fStack_118);
  fVar17 = fStack_11c * fStack_11c - 0.5;
  fVar18 = (fStack_140 - fStack_110) + (fStack_140 - fStack_110);
  fVar13 = fStack_128 * fVar15 + fStack_124 * fVar16 + fStack_120 * fVar18;
  fStack_108 = (fVar17 * fVar15 - (fStack_124 * fVar18 - fStack_120 * fVar16) * fStack_11c) +
               fStack_128 * fVar13;
  fStack_104 = (fVar17 * fVar16 - (fStack_120 * fVar15 - fStack_128 * fVar18) * fStack_11c) +
               fStack_124 * fVar13;
  fStack_100 = (fVar17 * fVar18 - (fStack_128 * fVar16 - fStack_124 * fVar15) * fStack_11c) +
               fStack_120 * fVar13;
  FUN_1806e1790(&puStack_f8,&fStack_128,&fStack_158,&fStack_108,7,cVar8 + '\x06',&fStack_138,
                &fStack_168);
  fVar13 = *(float *)(param_6 + 0x14);
  fVar15 = *(float *)(param_6 + 0x18);
  *param_9 = fStack_138 + *(float *)(param_6 + 0x10);
  param_9[1] = fStack_134 + fVar13;
  param_9[2] = fStack_130 + fVar15;
  fVar13 = *(float *)(param_7 + 0x14);
  fVar15 = *(float *)(param_7 + 0x18);
  *param_10 = fStack_168 + *(float *)(param_7 + 0x10);
  param_10[1] = fStack_164 + fVar13;
  param_10[2] = fStack_160 + fVar15;
  if (cVar8 == '\0') {
    fVar13 = fStack_128 + fStack_128;
    fVar16 = fVar17 + fVar17 + fStack_128 * fVar13;
    fVar17 = fStack_120 * fVar13;
    fVar15 = (fStack_124 + fStack_124) * fStack_11c;
    fVar13 = (fStack_120 + fStack_120) * fStack_11c + fStack_124 * fVar13;
    puVar10 = puStack_f0;
    if ((*(byte *)(param_5 + 0x20) & 2) != 0) {
      *(int16_t *)((int64_t)puStack_f0 + 0x4e) = 0;
      *puStack_f0 = 0;
      *(int32_t *)(puStack_f0 + 1) = 0;
      *(float *)((int64_t)puStack_f0 + 0x14) = -fVar13;
      *(float *)(puStack_f0 + 2) = -fVar16;
      *(float *)(puStack_f0 + 3) = fVar15 - fVar17;
      puStack_f0[4] = 0;
      *(int32_t *)(puStack_f0 + 5) = 0;
      fVar18 = (float)param_5[0x16];
      *(float *)((int64_t)puStack_f0 + 0x34) = -(fVar18 * fVar13);
      *(float *)(puStack_f0 + 6) = -(fVar18 * fVar16);
      *(float *)(puStack_f0 + 7) = fVar18 * (fVar15 - fVar17);
      *(int32_t *)((int64_t)puStack_f0 + 0x1c) = param_5[0x14];
      *(uint *)((int64_t)puStack_f0 + 0x2c) = param_5[0x15] ^ 0x80000000;
      *(int32_t *)((int64_t)puStack_f0 + 0x3c) = param_5[0x15];
      uVar2 = *(ushort *)((int64_t)puStack_f0 + 0x4c);
      *(ushort *)((int64_t)puStack_f0 + 0x4c) = uVar2 | 0x40;
      if ((*(byte *)(param_5 + 0x20) & 4) != 0) {
        fVar18 = (float)param_5[0x14];
        if (0.0 < fVar18) {
          *(int32_t *)((int64_t)puStack_f0 + 0x2c) = 0;
          fVar18 = (float)param_5[0x14];
        }
        if (fVar18 < 0.0) {
          *(int32_t *)((int64_t)puStack_f0 + 0x3c) = 0;
        }
      }
      *(ushort *)((int64_t)puStack_f0 + 0x4c) = uVar2 | 0x60;
      puVar10 = puStack_f0 + 10;
    }
    if ((bVar1 & 1) != 0) {
      fStack_168 = -fStack_128;
      fStack_15c = fStack_11c;
      fStack_164 = -fStack_124;
      fStack_160 = -fStack_120;
      FUN_1800fcb90(&fStack_168,&fStack_138,&fStack_158);
      fVar18 = SQRT(fStack_138 * fStack_138 + fStack_12c * fStack_12c);
      if (fVar18 != 0.0) {
        fVar18 = 1.0 / fVar18;
        fStack_138 = fStack_138 * fVar18;
        fStack_12c = fVar18 * fStack_12c;
      }
      if (fStack_12c <= -1.0) {
        fStack_12c = -1.0;
      }
      if (1.0 <= fStack_12c) {
        fStack_12c = 1.0;
      }
      fVar18 = (float)acosf(fStack_12c);
      fVar18 = fVar18 + fVar18;
      if (fStack_138 < 0.0) {
        fVar18 = -fVar18;
      }
      fVar14 = (float)param_5[0x1b];
      fVar12 = (float)param_5[0x1c];
      fVar11 = (float)param_5[0x1d];
      if ((0.0 < (float)param_5[0x1a]) || (0.0 < (float)param_5[0x19])) {
        fVar14 = 0.0;
      }
      puVar9 = puVar10;
      if (fVar18 < fVar11 + fVar14) {
        puVar9 = puVar10 + 10;
        *(int16_t *)((int64_t)puVar10 + 0x4e) = 0;
        *puVar10 = 0;
        *(int32_t *)(puVar10 + 1) = 0;
        *(float *)(puVar10 + 2) = -fVar16;
        *(float *)((int64_t)puVar10 + 0x14) = -fVar13;
        *(float *)(puVar10 + 3) = fVar15 - fVar17;
        puVar10[4] = 0;
        *(int32_t *)(puVar10 + 5) = 0;
        *(float *)(puVar10 + 6) = -fVar16;
        *(float *)((int64_t)puVar10 + 0x34) = -fVar13;
        fVar11 = fVar18 - fVar11;
        *(float *)(puVar10 + 7) = fVar15 - fVar17;
        uVar2 = *(ushort *)((int64_t)puVar10 + 0x4c);
        *(ushort *)((int64_t)puVar10 + 0x4c) = uVar2 | 0x40;
        *(float *)((int64_t)puVar10 + 0xc) = fVar11;
        if ((0.0 < (float)param_5[0x1a]) || (0.0 < (float)param_5[0x19])) {
          uVar6 = uVar2 | 0x51;
          *(int32_t *)(puVar10 + 8) = param_5[0x19];
          *(int32_t *)((int64_t)puVar10 + 0x44) = param_5[0x1a];
        }
        else {
          *(int16_t *)((int64_t)puVar10 + 0x4e) = 0x801;
          *(int32_t *)(puVar10 + 8) = param_5[0x17];
          *(int32_t *)((int64_t)puVar10 + 0x44) = param_5[0x18];
          uVar6 = uVar2 | 0x58;
          if (fVar11 <= 0.0) {
            uVar6 = uVar2 | 0x50;
          }
          if (0.0 < (float)param_5[0x17]) {
            uVar6 = uVar6 | 4;
          }
        }
        *(ushort *)((int64_t)puVar10 + 0x4c) = uVar6;
        *(int32_t *)((int64_t)puVar10 + 0x2c) = 0;
      }
      puVar10 = puVar9;
      if (fVar12 - fVar14 < fVar18) {
        fVar12 = fVar12 - fVar18;
        puVar10 = puVar9 + 10;
        *(int16_t *)((int64_t)puVar9 + 0x4e) = 0;
        *puVar9 = 0;
        *(int32_t *)(puVar9 + 1) = 0;
        *(float *)(puVar9 + 2) = fVar16;
        *(float *)((int64_t)puVar9 + 0x14) = fVar13;
        *(float *)(puVar9 + 3) = fVar17 - fVar15;
        puVar9[4] = 0;
        *(int32_t *)(puVar9 + 5) = 0;
        *(float *)(puVar9 + 6) = fVar16;
        *(float *)((int64_t)puVar9 + 0x34) = fVar13;
        *(float *)(puVar9 + 7) = fVar17 - fVar15;
        uVar2 = *(ushort *)((int64_t)puVar9 + 0x4c);
        *(float *)((int64_t)puVar9 + 0xc) = fVar12;
        *(ushort *)((int64_t)puVar9 + 0x4c) = uVar2 | 0x40;
        if ((0.0 < (float)param_5[0x1a]) || (0.0 < (float)param_5[0x19])) {
          uVar6 = uVar2 | 0x51;
          *(int32_t *)(puVar9 + 8) = param_5[0x19];
          *(int32_t *)((int64_t)puVar9 + 0x44) = param_5[0x1a];
        }
        else {
          *(int16_t *)((int64_t)puVar9 + 0x4e) = 0x801;
          *(int32_t *)(puVar9 + 8) = param_5[0x17];
          *(int32_t *)((int64_t)puVar9 + 0x44) = param_5[0x18];
          uVar6 = uVar2 | 0x58;
          if (fVar12 <= 0.0) {
            uVar6 = uVar2 | 0x50;
          }
          if (0.0 < (float)param_5[0x17]) {
            uVar6 = uVar6 | 4;
          }
        }
        *(ushort *)((int64_t)puVar9 + 0x4c) = uVar6;
        *(int32_t *)((int64_t)puVar9 + 0x2c) = 0;
      }
    }
    lVar7 = SUB168(SEXT816(0x6666666666666667) * SEXT816((int64_t)puVar10 - (int64_t)puStack_f8),8
                  );
  }
  else {
    lVar7 = SUB168(SEXT816(0x6666666666666667) *
                   SEXT816((int64_t)puStack_f0 - (int64_t)puStack_f8),8);
  }
  return (lVar7 >> 5) - (lVar7 >> 0x3f);
}



uint64_t *
FUN_1806e5940(uint64_t *param_1,int16_t param_2,int16_t *param_3,uint64_t param_4,
             float *param_5,uint64_t param_6,float *param_7,int param_8)

{
  int16_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int32_t *puVar7;
  float *pfVar8;
  int32_t *puVar9;
  uint64_t *puVar10;
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
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  int8_t auStack_b8 [16];
  int8_t auStack_a8 [160];
  
  puVar7 = (int32_t *)0x0;
  uVar1 = *param_3;
  *(int16_t *)(param_1 + 1) = param_2;
  *(int16_t *)((int64_t)param_1 + 10) = uVar1;
  *param_1 = &unknown_var_3664_ptr;
  param_1[3] = &unknown_var_4048_ptr;
  param_1[4] = 0;
  param_1[0xc] = 0;
  param_1[2] = 0;
  if (param_8 != 0) {
    plVar6 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    puVar7 = (int32_t *)
             (**(code **)(*plVar6 + 8))(plVar6,param_8,&unknown_var_1832_ptr,&unknown_var_3536_ptr,0x1c6);
  }
  fVar11 = param_5[1];
  fVar13 = *param_5;
  fVar16 = param_5[2];
  fVar12 = param_5[3];
  fVar15 = param_5[4];
  fVar17 = param_5[6];
  fVar14 = 1.0 / SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar16 * fVar16 + fVar12 * fVar12);
  fVar18 = param_5[5];
  *(float *)(param_1 + 5) = fVar13 * fVar14;
  *(float *)((int64_t)param_1 + 0x2c) = fVar11 * fVar14;
  *(float *)(param_1 + 6) = fVar16 * fVar14;
  *(float *)((int64_t)param_1 + 0x34) = fVar12 * fVar14;
  *(float *)(param_1 + 7) = fVar15;
  *(float *)(param_1 + 8) = fVar17;
  *(float *)((int64_t)param_1 + 0x3c) = fVar18;
  fVar11 = param_7[1];
  fVar13 = *param_7;
  fVar16 = param_7[2];
  fVar12 = param_7[3];
  fVar15 = param_7[5];
  fVar17 = param_7[6];
  fVar14 = 1.0 / SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar16 * fVar16 + fVar12 * fVar12);
  fVar18 = param_7[4];
  *(float *)((int64_t)param_1 + 0x44) = fVar13 * fVar14;
  *(float *)(param_1 + 9) = fVar11 * fVar14;
  *(float *)((int64_t)param_1 + 0x4c) = fVar16 * fVar14;
  *(float *)(param_1 + 10) = fVar12 * fVar14;
  *(float *)((int64_t)param_1 + 0x54) = fVar18;
  *(float *)(param_1 + 0xb) = fVar15;
  *(float *)((int64_t)param_1 + 0x5c) = fVar17;
  pfVar8 = (float *)FUN_1806dfd60(param_1,auStack_a8,param_4);
  fVar11 = *pfVar8;
  fVar13 = pfVar8[1];
  fStack_c8 = -fVar11;
  fStack_c4 = -fVar13;
  fStack_bc = pfVar8[3];
  fVar16 = pfVar8[2];
  fStack_c0 = -fVar16;
  fVar18 = (param_5[4] - pfVar8[4]) + (param_5[4] - pfVar8[4]);
  fVar17 = (param_5[5] - pfVar8[5]) + (param_5[5] - pfVar8[5]);
  fVar20 = (param_5[6] - pfVar8[6]) + (param_5[6] - pfVar8[6]);
  fVar15 = fStack_bc * fStack_bc - 0.5;
  fVar12 = fVar13 * fVar17 + fVar18 * fVar11 + fVar16 * fVar20;
  fVar19 = (fVar16 * fVar17 - fVar13 * fVar20) * fStack_bc;
  fVar14 = (fVar11 * fVar20 - fVar16 * fVar18) * fStack_bc;
  fVar21 = (fVar13 * fVar18 - fVar11 * fVar17) * fStack_bc;
  puVar9 = (int32_t *)FUN_1800fcb90(&fStack_c8,auStack_b8,param_5);
  uVar2 = puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  puVar7[4] = *puVar9;
  puVar7[5] = uVar2;
  puVar7[6] = uVar3;
  puVar7[7] = uVar4;
  puVar7[8] = fVar19 + fVar15 * fVar18 + fVar11 * fVar12;
  puVar7[9] = fVar14 + fVar15 * fVar17 + fVar13 * fVar12;
  puVar7[10] = fVar21 + fVar15 * fVar20 + fVar16 * fVar12;
  pfVar8 = (float *)FUN_1806dfd60(param_1,auStack_a8,param_6);
  fStack_c8 = -*pfVar8;
  fStack_c4 = -pfVar8[1];
  fStack_bc = pfVar8[3];
  fStack_c0 = -pfVar8[2];
  fVar15 = (param_7[4] - pfVar8[4]) + (param_7[4] - pfVar8[4]);
  fVar12 = (param_7[5] - pfVar8[5]) + (param_7[5] - pfVar8[5]);
  fVar14 = (param_7[6] - pfVar8[6]) + (param_7[6] - pfVar8[6]);
  fVar16 = fStack_bc * fStack_bc - 0.5;
  fVar13 = fStack_c4 * fVar12 + fStack_c8 * fVar15 + fStack_c0 * fVar14;
  fVar11 = fStack_c8 * fVar13;
  fVar18 = (fStack_c4 * fVar14 - fStack_c0 * fVar12) * fStack_bc;
  fVar19 = fStack_c0 * fVar13;
  fVar13 = fStack_c4 * fVar13;
  fVar17 = (fStack_c0 * fVar15 - fStack_c8 * fVar14) * fStack_bc;
  fVar20 = (fStack_c8 * fVar12 - fStack_c4 * fVar15) * fStack_bc;
  puVar10 = (uint64_t *)FUN_1800fcb90(&fStack_c8,auStack_b8,param_7);
  uVar5 = puVar10[1];
  *(uint64_t *)(puVar7 + 0xb) = *puVar10;
  *(uint64_t *)(puVar7 + 0xd) = uVar5;
  puVar7[0xf] = fVar18 + fVar16 * fVar15 + fVar11;
  puVar7[0x10] = fVar17 + fVar16 * fVar12 + fVar13;
  puVar7[0x11] = fVar20 + fVar16 * fVar14 + fVar19;
  *puVar7 = 0x3f800000;
  puVar7[1] = 0x3f800000;
  puVar7[2] = 0x3f800000;
  puVar7[3] = 0x3f800000;
  param_1[0xd] = puVar7;
  return param_1;
}






// 函数: void FUN_1806e5e70(uint64_t *param_1)
void FUN_1806e5e70(uint64_t *param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  
  *param_1 = &unknown_var_3664_ptr;
  param_1[3] = &unknown_var_4048_ptr;
  if ((*(byte *)((int64_t)param_1 + 10) & 1) != 0) {
    lVar1 = param_1[0xd];
    if (lVar1 != 0) {
      plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
    }
    param_1[0xd] = 0;
  }
  param_1[3] = &unknown_var_1416_ptr;
  *param_1 = &unknown_var_2408_ptr;
  return;
}






// 函数: void FUN_1806e5e94(int64_t param_1)
void FUN_1806e5e94(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t *unaff_RBX;
  
  lVar1 = *(int64_t *)(param_1 + 0x68);
  if (lVar1 != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  unaff_RBX[0xd] = 0;
  unaff_RBX[3] = &unknown_var_1416_ptr;
  *unaff_RBX = &unknown_var_2408_ptr;
  return;
}






// 函数: void FUN_1806e5ec2(void)
void FUN_1806e5ec2(void)

{
  uint64_t *unaff_RBX;
  
  unaff_RBX[3] = &unknown_var_1416_ptr;
  *unaff_RBX = &unknown_var_2408_ptr;
  return;
}



int64_t FUN_1806e5ef0(int64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  
  FUN_1806e5e70();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        plVar1 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
        return param_1;
      }
    }
    else {
      _guard_check_icall(param_1,0x70);
    }
  }
  return param_1;
}



uint64_t FUN_1806e5f70(uint64_t param_1,int64_t param_2)

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
      pcVar1 = &unknown_var_2448_ptr + lVar4;
      lVar4 = lVar4 + 1;
      if (*pcVar1 != *(char *)(param_2 + -1 + lVar4)) {
        do {
          lVar4 = lVar3 + 1;
          if (*(char *)(param_2 + lVar3) != (&unknown_var_2396_ptr)[lVar3]) {
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



int64_t *
FUN_1806e6000(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5)

{
  char cVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  void *puVar4;
  float *pfVar5;
  int64_t lVar6;
  int16_t auStackX_8 [4];
  uint64_t in_stack_ffffffffffffffb8;
  int32_t uVar7;
  uint64_t in_stack_ffffffffffffffc0;
  uint64_t uVar8;
  int32_t uVar9;
  
  uVar9 = (int32_t)((uint64_t)in_stack_ffffffffffffffc0 >> 0x20);
  uVar7 = (int32_t)((uint64_t)in_stack_ffffffffffffffb8 >> 0x20);
  plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  plVar3 = (int64_t *)PxGetFoundation();
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 == '\0') {
    puVar4 = &unknown_var_1728_ptr;
  }
  else {
    puVar4 = (void *)__std_type_info_name(0x180bfc640,0x180c827e0);
  }
  plVar2 = (int64_t *)
           (**(code **)(*plVar2 + 8))(plVar2,0x70,puVar4,&unknown_var_5616_ptr,CONCAT44(uVar7,0x2d));
  if (plVar2 == (int64_t *)0x0) {
    plVar2 = (int64_t *)0x0;
  }
  else {
    pfVar5 = (float *)(**(code **)(*param_1 + 0x20))(param_1);
    auStackX_8[0] = 3;
    uVar8 = param_4;
    FUN_1806e6b00(plVar2,0x104,auStackX_8,param_2,param_3,param_4,param_5,0x70,&unknown_var_5592_ptr);
    uVar9 = (int32_t)((uint64_t)uVar8 >> 0x20);
    *plVar2 = (int64_t)&unknown_var_5144_ptr;
    plVar2[3] = (int64_t)&unknown_var_5512_ptr;
    lVar6 = plVar2[0xd];
    *(uint64_t *)(lVar6 + 0x5c) = 0;
    *(uint64_t *)(lVar6 + 0x50) = 0;
    *(float *)(lVar6 + 0x58) = *pfVar5 * 0.025;
    *(int16_t *)(lVar6 + 100) = 2;
  }
  lVar6 = (**(code **)(*param_1 + 0xd0))
                    (param_1,param_2,param_4,plVar2 + 3,0x180be07a0,CONCAT44(uVar9,0x70));
  plVar2[0xc] = lVar6;
  if (lVar6 == 0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,1);
    plVar2 = (int64_t *)0x0;
  }
  return plVar2;
}






// 函数: void FUN_1806e6190(int64_t param_1,int64_t *param_2)
void FUN_1806e6190(int64_t param_1,int64_t *param_2)

{
  if (*(int64_t *)(param_1 + 0x68) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))(param_2,*(uint64_t *)(param_1 + 0x68),0x70);
  }
                    // WARNING: Could not recover jumptable at 0x0001806e61dc. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x20))(param_2,*(uint64_t *)(param_1 + 0x20));
  return;
}






