#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part057.c - 2 个函数

// 函数: void FUN_180299420(uint64_t param_1,uint64_t param_2,uint param_3,int64_t param_4,
void FUN_180299420(uint64_t param_1,uint64_t param_2,uint param_3,int64_t param_4,
                  uint64_t *param_5,code *param_6,uint64_t *param_7,int param_8,float param_9,
                  float param_10,uint64_t param_11)

{
  float *pfVar1;
  int64_t lVar2;
  uint uVar3;
  char cVar4;
  int32_t uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint uVar13;
  uint64_t *puVar14;
  int64_t lVar15;
  uint64_t uVar16;
  int64_t lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint64_t uStackX_10;
  uint uStackX_18;
  int64_t lStackX_20;
  uint64_t in_stack_fffffffffffffe98;
  int32_t uVar29;
  uint64_t uVar28;
  uint64_t uStack_148;
  float fStack_140;
  float fStack_13c;
  int iStack_138;
  float fStack_134;
  float fStack_130;
  uint uStack_12c;
  float fStack_128;
  float fStack_124;
  int64_t lStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  uint uStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  int64_t lStack_f0;
  
  lVar9 = SYSTEM_DATA_MANAGER_A;
  lVar17 = (int64_t)(int)param_3;
  lStack_120 = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lStack_f0 = *(int64_t *)(lVar9 + 0x1af8);
  if (*(char *)(lStack_f0 + 0xb4) != '\0') {
    return;
  }
  pcVar7 = "";
  while (*pcVar7 != '\0') {
    if (((*pcVar7 == '#') && (pcVar7[1] == '#')) ||
       (pcVar7 = pcVar7 + 1, pcVar7 == (char *)0xffffffffffffffff)) break;
  }
  pfVar1 = *(float **)(lVar9 + 0x19f0);
  fVar22 = *(float *)(lVar9 + 0x19f8);
  uStackX_10 = param_2;
  uStackX_18 = param_3;
  lStackX_20 = param_4;
  if (pcVar7 == "") {
    fVar20 = 0.0;
  }
  else {
    in_stack_fffffffffffffe98 =
         CONCAT44((int)((uint64_t)in_stack_fffffffffffffe98 >> 0x20),0xbf800000);
    FUN_180297340(pfVar1,&uStackX_10,fVar22,0x7f7fffff,in_stack_fffffffffffffe98,&system_buffer_ptr,
                  pcVar7,0);
    fVar20 = (float)uStackX_10;
    if (0.0 < (float)uStackX_10) {
      fVar20 = (float)uStackX_10 - fVar22 / *pfVar1;
    }
    fVar20 = (float)(int)(fVar20 + 0.95);
    fVar22 = uStackX_10._4_4_;
  }
  lVar11 = lStack_f0;
  lVar15 = lVar9;
  if ((float)param_11 == 0.0) {
    param_11._0_4_ = (float)func_0x00018012d6a0();
  }
  if (param_11._4_4_ == 0.0) {
    param_11._4_4_ = *(float *)(lVar15 + 0x1660) + *(float *)(lVar15 + 0x1660) + fVar22;
  }
  fVar22 = *(float *)(lVar11 + 0x104);
  fVar18 = *(float *)(lVar11 + 0x100);
  param_11._4_4_ = fVar22 + param_11._4_4_;
  fVar26 = fVar18 + (float)param_11;
  fStack_104 = param_11._4_4_ - *(float *)(lVar15 + 0x1660);
  fVar27 = fVar26 - *(float *)(lVar15 + 0x165c);
  fVar24 = *(float *)(lVar15 + 0x165c) + fVar18;
  fVar19 = fVar22 + *(float *)(lVar15 + 0x1660);
  uStackX_10 = CONCAT44(uStackX_10._4_4_,fVar24);
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  else {
    fVar20 = fVar20 + *(float *)(lVar15 + 0x1674);
  }
  fStack_124 = param_11._4_4_ - fVar22;
  fVar20 = fVar26 + fVar20;
  fStack_128 = fVar20 - fVar18;
  fStack_118 = fVar18;
  fStack_114 = fVar22;
  fStack_110 = fVar26;
  fStack_10c = param_11._4_4_;
  fStack_108 = fVar27;
  fStack_fc = fVar26;
  func_0x000180124080(&fStack_128,*(int32_t *)(lVar15 + 0x1660));
  lVar11 = *(int64_t *)(lVar9 + 0x1af8);
  *(uint64_t *)(lVar11 + 0x144) = 0;
  *(float *)(lVar11 + 0x14c) = fVar18;
  *(float *)(lVar11 + 0x150) = fVar22;
  *(float *)(lVar11 + 0x154) = fVar20;
  *(float *)(lVar11 + 0x158) = param_11._4_4_;
  lVar2 = *(int64_t *)(lVar9 + 0x1af8);
  uStack_148 = CONCAT44(fVar22,fVar18);
  if ((((param_11._4_4_ < *(float *)(lVar2 + 0x22c) || param_11._4_4_ == *(float *)(lVar2 + 0x22c))
       || (*(float *)(lVar2 + 0x234) <= fVar22)) ||
      ((fVar20 < *(float *)(lVar2 + 0x228) || fVar20 == *(float *)(lVar2 + 0x228) ||
       (*(float *)(lVar2 + 0x230) <= fVar18)))) && (*(char *)(lVar9 + 0x2e38) == '\0')) {
    return;
  }
  fStack_140 = fVar20;
  fStack_13c = param_11._4_4_;
  cVar4 = FUN_180128040(&uStack_148,&fStack_140,1);
  uVar29 = (int32_t)((uint64_t)in_stack_fffffffffffffe98 >> 0x20);
  if (cVar4 != '\0') {
    *(uint *)(lVar11 + 0x148) = *(uint *)(lVar11 + 0x148) | 1;
  }
  if ((param_9 == 3.4028235e+38) || (param_10 == 3.4028235e+38)) {
    fVar22 = -3.4028235e+38;
    fVar20 = 3.4028235e+38;
    lVar11 = lVar17;
    puVar14 = param_7;
    if (0 < (int)param_3) {
      do {
        iVar8 = 0;
        if (0 < param_8) {
          do {
            fVar18 = (float)(*param_6)(*puVar14,iVar8);
            if (fVar18 <= fVar20) {
              fVar20 = fVar18;
            }
            if (fVar22 < fVar18) {
              fVar22 = fVar18;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < param_8);
        }
        uVar29 = (int32_t)((uint64_t)in_stack_fffffffffffffe98 >> 0x20);
        lVar11 = lVar11 + -1;
        lVar9 = SYSTEM_DATA_MANAGER_A;
        puVar14 = puVar14 + 1;
        lVar15 = lStack_120;
      } while (lVar11 != 0);
    }
    if (param_9 == 3.4028235e+38) {
      param_9 = fVar20;
    }
    if (param_10 == 3.4028235e+38) {
      param_10 = fVar22;
    }
  }
  uStack_148 = *(uint64_t *)(lVar9 + 0x1738);
  fStack_140 = *(float *)(lVar9 + 0x1740);
  fStack_13c = *(float *)(lVar9 + 0x1744) * *(float *)(lVar9 + 0x1628);
  uVar5 = func_0x000180121e20(&uStack_148);
  uVar28 = CONCAT44(uVar29,*(int32_t *)(lVar15 + 0x1664));
  FUN_180122960(CONCAT44(fStack_114,fStack_118),CONCAT44(fStack_10c,fStack_110),uVar5,1,uVar28);
  iStack_138 = -1;
  lVar9 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  iVar8 = param_8;
  if ((int)(float)param_11 < param_8) {
    iVar8 = (int)(float)param_11;
  }
  uVar13 = iVar8 - 1;
  uStack_12c = uVar13;
  if ((*(char *)(SYSTEM_DATA_MANAGER_A + 0x1d07) == '\0') || (*(char *)(SYSTEM_DATA_MANAGER_A + 0x1d06) != '\0'))
  {
    if ((((((*(byte *)(lVar9 + 0x148) & 1) == 0) ||
          (lVar11 = *(int64_t *)(lVar9 + 0x3a0), *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b08) != lVar11))
         || ((((iVar8 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c), iVar8 != 0 &&
               (iVar8 != *(int *)(lVar9 + 0x144))) && (*(char *)(SYSTEM_DATA_MANAGER_A + 0x1b3d) == '\0'))
             && (iVar8 != *(int *)(lVar9 + 0x84))))) ||
        ((((*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1c98) != 0 &&
           (lVar15 = *(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1c98) + 0x3a0), lVar15 != 0)) &&
          (*(char *)(lVar15 + 0xb0) != '\0')) &&
         ((lVar15 != lVar11 &&
          (((*(uint *)(lVar15 + 0xc) >> 0x1b & 1) != 0 ||
           ((*(uint *)(lVar15 + 0xc) >> 0x1a & 1) != 0)))))))) ||
       (((*(int64_t *)(lVar9 + 0x28) != *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1c80) &&
         ((*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b78) == 0 ||
          (lVar11 != *(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b78) + 0x3a0))))) ||
        ((*(byte *)(lVar9 + 0x1a8) & 4) != 0)))) goto LAB_180299abc;
    if ((*(int *)(lVar9 + 0x144) == *(int *)(lVar9 + 8)) ||
       (*(int *)(lVar9 + 0x144) == *(int *)(lVar9 + 0x84))) {
      cVar4 = *(char *)(lVar9 + 0xb1);
      goto joined_r0x0001802999aa;
    }
  }
  else {
    if ((*(int *)(SYSTEM_DATA_MANAGER_A + 0x1ca0) == 0) ||
       (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1ca0) != *(int *)(lVar9 + 0x144))) goto LAB_180299abc;
    if (*(int *)(lVar9 + 0x144) == *(int *)(lVar9 + 8)) {
      cVar4 = *(char *)(lVar9 + 0xb1);
joined_r0x0001802999aa:
      if (cVar4 != '\0') goto LAB_180299abc;
    }
  }
  fVar22 = (*(float *)(lStack_120 + 0x118) - fVar24) / (fVar27 - fVar24);
  if (0.0 <= fVar22) {
    if (0.9999 <= fVar22) {
      fVar22 = 0.9999;
    }
  }
  else {
    fVar22 = 0.0;
  }
  iVar8 = (int)((float)(param_8 + -1) * fVar22);
  iStack_138 = iVar8;
  FUN_18012e810();
  FUN_18010f010(&unknown_var_728_ptr,iVar8);
  if (0 < lVar17) {
    lVar9 = lStackX_20 - (int64_t)param_7;
    puVar10 = param_7;
    puVar14 = param_5;
    lStackX_20 = lVar9;
    do {
      fVar22 = (float)(*param_6)(*puVar10,(int64_t)iVar8 % (int64_t)param_8 & 0xffffffff);
      fVar20 = (float)(*param_6)(*puVar10,(int64_t)(iVar8 + 1) % (int64_t)param_8 & 0xffffffff);
      uStack_148 = *puVar14;
      fStack_140 = *(float *)(puVar14 + 1);
      fStack_13c = *(float *)((int64_t)puVar14 + 0xc);
      uVar28 = *(uint64_t *)(lVar9 + (int64_t)puVar10);
      FUN_18010f0d0(&uStack_148,&unknown_var_744_ptr,(double)fVar22,(double)fVar20,uVar28);
      puVar14 = puVar14 + 2;
      puVar10 = puVar10 + 1;
      lVar17 = lVar17 + -1;
      uVar13 = uStack_12c;
    } while (lVar17 != 0);
  }
  FUN_18012cfe0();
  param_3 = uStackX_18;
LAB_180299abc:
  if (0 < (int)param_3) {
    uVar16 = (uint64_t)param_3;
    fVar22 = 1.0 / (param_10 - param_9);
    fStack_128 = 1.0 / (float)(int)uVar13;
    fStack_130 = fVar22;
    do {
      fVar18 = 0.0;
      uStack_148 = uVar16;
      fVar20 = (float)(*param_6)(*param_7,0);
      fVar20 = (fVar20 - param_9) * fVar22;
      if (0.0 <= fVar20) {
        if (1.0 <= fVar20) {
          fVar20 = 1.0;
        }
      }
      else {
        fVar20 = 0.0;
      }
      fStack_134 = 0.0;
      fVar20 = 1.0 - fVar20;
      puVar14 = param_5;
      uStack_100 = func_0x000180121e20(param_5);
      uVar6 = func_0x000180121e20();
      uVar3 = uStack_100;
      fVar27 = 1.0 - (float)(uVar6 >> 8 & 0xff) * 0.003921569;
      fVar26 = (float)(uVar6 >> 0x18) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628) * 0.003921569;
      fVar24 = 1.0 - (float)(uVar6 >> 0x10 & 0xff) * 0.003921569;
      fVar21 = 1.0 - (float)(uVar6 & 0xff) * 0.003921569;
      if (0.0 <= fVar21) {
        if (1.0 <= fVar21) {
          fVar21 = 1.0;
        }
      }
      else {
        fVar21 = 0.0;
      }
      if (0.0 <= fVar27) {
        if (1.0 <= fVar27) {
          fVar27 = 1.0;
        }
      }
      else {
        fVar27 = 0.0;
      }
      if (0.0 <= fVar24) {
        if (1.0 <= fVar24) {
          fVar24 = 1.0;
        }
      }
      else {
        fVar24 = 0.0;
      }
      if (0.0 <= fVar26) {
        if (1.0 <= fVar26) {
          fVar26 = 1.0;
        }
      }
      else {
        fVar26 = 0.0;
      }
      if (0 < (int)uVar13) {
        fVar23 = fStack_108 - (float)uStackX_10;
        fVar25 = fStack_104 - fVar19;
        uVar12 = (uint64_t)uVar13;
        do {
          uVar29 = (int32_t)((uint64_t)uVar28 >> 0x20);
          fVar22 = (float)(param_8 + -1) * fVar18;
          fVar18 = fVar18 + fStack_128;
          iVar8 = (int)(fVar22 + 0.5);
          fVar22 = (float)(*param_6)(*param_7,(int64_t)(iVar8 + 1) % (int64_t)param_8 & 0xffffffff
                                    );
          fVar22 = (fVar22 - param_9) * fStack_130;
          if (0.0 <= fVar22) {
            if (1.0 <= fVar22) {
              fVar22 = 1.0;
            }
          }
          else {
            fVar22 = 0.0;
          }
          fStack_114 = fVar20 * fVar25;
          fVar20 = 1.0 - fVar22;
          uVar28 = CONCAT44(uVar29,0x3f800000);
          uVar13 = uVar3;
          if (iStack_138 == iVar8) {
            uVar13 = (int)(fVar26 * 255.0 + 0.5) << 0x18 |
                     (int)(fVar21 * 255.0 + 0.5) | (int)(fVar27 * 255.0 + 0.5) << 8 |
                     (int)(fVar24 * 255.0 + 0.5) << 0x10;
          }
          fStack_114 = fStack_114 + fVar19;
          fStack_118 = fStack_134 * fVar23 + (float)uStackX_10;
          fStack_f4 = fVar20 * fVar25 + fVar19;
          fStack_f8 = fVar18 * fVar23 + (float)uStackX_10;
          FUN_180293d20(*(uint64_t *)(lStack_f0 + 0x2e8),&fStack_118,&fStack_f8,uVar13,uVar28);
          uVar12 = uVar12 - 1;
          puVar14 = param_5;
          uVar16 = uStack_148;
          fVar22 = fStack_130;
          uVar13 = uStack_12c;
          fStack_134 = fVar18;
        } while (uVar12 != 0);
      }
      param_5 = puVar14 + 2;
      param_7 = param_7 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
    uStack_148 = 0;
    fVar26 = fStack_fc;
  }
  FUN_180122320(CONCAT44(fVar19,fVar26 + *(float *)(lStack_120 + 0x1674)),&system_buffer_ptr,0,1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029947c(void)
void FUN_18029947c(void)

{
  float *pfVar1;
  int64_t lVar2;
  code *pcVar3;
  int64_t lVar4;
  uint64_t uVar5;
  char cVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  int64_t unaff_RBX;
  uint64_t *puVar12;
  int64_t unaff_RBP;
  uint64_t uVar13;
  uint uVar14;
  int iVar15;
  uint64_t *puVar16;
  int64_t in_R9;
  int64_t lVar17;
  int64_t in_R11;
  uint64_t unaff_R14;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint64_t in_stack_00000020;
  uint64_t uVar28;
  uint64_t in_stack_00000040;
  float in_stack_00000048;
  float fStack000000000000004c;
  int iStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  uint uStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  int64_t in_stack_00000068;
  float in_stack_00000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  float fStack000000000000007c;
  uint64_t in_stack_000000b0;
  uint64_t in_stack_000000b8;
  
  pcVar10 = "";
  while (*pcVar10 != '\0') {
    if (((*pcVar10 == '#') && (pcVar10[1] == '#')) ||
       (pcVar10 = pcVar10 + 1, pcVar10 == (char *)0xffffffffffffffff)) break;
  }
  pfVar1 = *(float **)(unaff_RBX + 0x19f0);
  fVar24 = *(float *)(unaff_RBX + 0x19f8);
  if (pcVar10 == "") {
    fVar22 = 0.0;
  }
  else {
    in_stack_00000020 = CONCAT44((int)((uint64_t)in_stack_00000020 >> 0x20),0xbf800000);
    FUN_180297340(pfVar1,unaff_RBP + 0x98,fVar24,0x7f7fffff,in_stack_00000020);
    fVar22 = *(float *)(unaff_RBP + 0x98);
    if (0.0 < fVar22) {
      fVar22 = fVar22 - fVar24 / *pfVar1;
    }
    fVar24 = *(float *)(unaff_RBP + 0x9c);
    in_R9 = *(int64_t *)(unaff_RBP + -0x68);
    fVar22 = (float)(int)(fVar22 + 0.95);
    in_R11 = unaff_RBX;
  }
  fVar19 = *(float *)(unaff_RBP + 0xe0);
  if (fVar19 == 0.0) {
    fVar19 = (float)func_0x00018012d6a0();
  }
  fVar21 = *(float *)(unaff_RBP + 0xe4);
  if (fVar21 == 0.0) {
    fVar21 = *(float *)(in_R11 + 0x1660) + *(float *)(in_R11 + 0x1660) + fVar24;
  }
  fVar24 = *(float *)(in_R9 + 0x104);
  fVar23 = *(float *)(in_R9 + 0x100);
  fVar20 = *(float *)(in_R11 + 0x1660);
  fVar21 = fVar24 + fVar21;
  fVar25 = *(float *)(in_R11 + 0x165c);
  fVar26 = fVar23 + fVar19;
  *(float *)(unaff_RBP + -0x74) = fVar26;
  fVar27 = fVar26 - fVar25;
  fVar25 = fVar25 + fVar23;
  *(float *)(unaff_RBP + -0x7c) = fVar21 - fVar20;
  *(float *)(unaff_RBP + -0x80) = fVar27;
  *(float *)(unaff_RBP + 0x98) = fVar25;
  *(float *)(unaff_RBP + 0x90) = fVar24 + fVar20;
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  else {
    fVar22 = fVar22 + *(float *)(in_R11 + 0x1674);
  }
  fStack0000000000000064 = fVar21 - fVar24;
  fVar22 = fVar26 + fVar22;
  in_stack_00000060 = fVar22 - fVar23;
  in_stack_00000070 = fVar23;
  fStack0000000000000074 = fVar24;
  in_stack_00000078 = fVar26;
  fStack000000000000007c = fVar21;
  func_0x000180124080(&stack0x00000060,*(int32_t *)(in_R11 + 0x1660));
  lVar17 = *(int64_t *)(unaff_RBX + 0x1af8);
  *(uint64_t *)(lVar17 + 0x144) = 0;
  *(float *)(lVar17 + 0x14c) = fVar23;
  *(float *)(lVar17 + 0x150) = fVar24;
  *(float *)(lVar17 + 0x154) = fVar22;
  *(float *)(lVar17 + 0x158) = fVar21;
  lVar2 = *(int64_t *)(unaff_RBX + 0x1af8);
  in_stack_00000040 = CONCAT44(fVar24,fVar23);
  if ((((fVar21 < *(float *)(lVar2 + 0x22c) || fVar21 == *(float *)(lVar2 + 0x22c)) ||
       (*(float *)(lVar2 + 0x234) <= fVar24)) ||
      ((fVar22 < *(float *)(lVar2 + 0x228) || fVar22 == *(float *)(lVar2 + 0x228) ||
       (*(float *)(lVar2 + 0x230) <= fVar23)))) && (*(char *)(unaff_RBX + 0x2e38) == '\0')) {
    return;
  }
  in_stack_00000048 = fVar22;
  fStack000000000000004c = fVar21;
  cVar6 = FUN_180128040(&stack0x00000040,&stack0x00000048,1);
  uVar8 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
  if (cVar6 != '\0') {
    *(uint *)(lVar17 + 0x148) = *(uint *)(lVar17 + 0x148) | 1;
  }
  fVar24 = *(float *)(unaff_RBP + 0xd0);
  iVar18 = *(int *)(unaff_RBP + 200);
  pcVar3 = *(code **)(unaff_RBP + 0xb8);
  fVar22 = *(float *)(unaff_RBP + 0xd8);
  if ((fVar24 == 3.4028235e+38) || (fVar22 == 3.4028235e+38)) {
    fVar21 = -3.4028235e+38;
    fVar23 = 3.4028235e+38;
    if (0 < (int)unaff_R14) {
      puVar16 = *(uint64_t **)(unaff_RBP + 0xc0);
      uVar13 = unaff_R14;
      do {
        iVar11 = 0;
        if (0 < iVar18) {
          do {
            fVar20 = (float)(*pcVar3)(*puVar16,iVar11);
            if (fVar20 <= fVar23) {
              fVar23 = fVar20;
            }
            if (fVar21 < fVar20) {
              fVar21 = fVar20;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar18);
        }
        uVar8 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
        puVar16 = puVar16 + 1;
        uVar13 = uVar13 - 1;
        unaff_RBX = SYSTEM_DATA_MANAGER_A;
        in_R11 = in_stack_00000068;
      } while (uVar13 != 0);
    }
    if (fVar24 == 3.4028235e+38) {
      *(float *)(unaff_RBP + 0xd0) = fVar23;
      fVar24 = fVar23;
    }
    if (fVar22 == 3.4028235e+38) {
      fVar22 = fVar21;
    }
  }
  in_stack_00000040 = *(uint64_t *)(unaff_RBX + 0x1738);
  in_stack_00000048 = *(float *)(unaff_RBX + 0x1740);
  fStack000000000000004c = *(float *)(unaff_RBX + 0x1744) * *(float *)(unaff_RBX + 0x1628);
  uVar7 = func_0x000180121e20(&stack0x00000040);
  uVar28 = CONCAT44(uVar8,*(int32_t *)(in_R11 + 0x1664));
  FUN_180122960(CONCAT44(fStack0000000000000074,in_stack_00000070),
                CONCAT44(fStack000000000000007c,in_stack_00000078),uVar7,1,uVar28);
  iVar11 = iVar18 + -1;
  iStack0000000000000050 = -1;
  lVar17 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  iVar15 = iVar18;
  if ((int)fVar19 < iVar18) {
    iVar15 = (int)fVar19;
  }
  uVar14 = iVar15 - 1;
  uStack000000000000005c = uVar14;
  if ((*(char *)(SYSTEM_DATA_MANAGER_A + 0x1d07) == '\0') || (*(char *)(SYSTEM_DATA_MANAGER_A + 0x1d06) != '\0'))
  {
    if ((((((*(byte *)(lVar17 + 0x148) & 1) == 0) ||
          (lVar2 = *(int64_t *)(lVar17 + 0x3a0), *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b08) != lVar2))
         || ((((iVar15 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c), iVar15 != 0 &&
               (iVar15 != *(int *)(lVar17 + 0x144))) && (*(char *)(SYSTEM_DATA_MANAGER_A + 0x1b3d) == '\0')
              ) && (iVar15 != *(int *)(lVar17 + 0x84))))) ||
        ((((*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1c98) != 0 &&
           (lVar4 = *(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1c98) + 0x3a0), lVar4 != 0)) &&
          (*(char *)(lVar4 + 0xb0) != '\0')) &&
         ((lVar4 != lVar2 &&
          (((*(uint *)(lVar4 + 0xc) >> 0x1b & 1) != 0 || ((*(uint *)(lVar4 + 0xc) >> 0x1a & 1) != 0)
           ))))))) ||
       (((*(int64_t *)(lVar17 + 0x28) != *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1c80) &&
         ((*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b78) == 0 ||
          (lVar2 != *(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b78) + 0x3a0))))) ||
        ((*(byte *)(lVar17 + 0x1a8) & 4) != 0)))) goto LAB_180299abc;
    if ((*(int *)(lVar17 + 0x144) == *(int *)(lVar17 + 8)) ||
       (*(int *)(lVar17 + 0x144) == *(int *)(lVar17 + 0x84))) {
      cVar6 = *(char *)(lVar17 + 0xb1);
      goto joined_r0x0001802999aa;
    }
  }
  else {
    if ((*(int *)(SYSTEM_DATA_MANAGER_A + 0x1ca0) == 0) ||
       (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1ca0) != *(int *)(lVar17 + 0x144))) goto LAB_180299abc;
    if (*(int *)(lVar17 + 0x144) == *(int *)(lVar17 + 8)) {
      cVar6 = *(char *)(lVar17 + 0xb1);
joined_r0x0001802999aa:
      if (cVar6 != '\0') goto LAB_180299abc;
    }
  }
  fVar19 = (*(float *)(in_stack_00000068 + 0x118) - fVar25) / (fVar27 - fVar25);
  if (0.0 <= fVar19) {
    if (0.9999 <= fVar19) {
      fVar19 = 0.9999;
    }
  }
  else {
    fVar19 = 0.0;
  }
  iVar11 = (int)((float)iVar11 * fVar19);
  iStack0000000000000050 = iVar11;
  FUN_18012e810();
  FUN_18010f010(&unknown_var_728_ptr,iVar11);
  if (0 < (int64_t)unaff_R14) {
    puVar12 = *(uint64_t **)(unaff_RBP + 0xc0);
    *(int64_t *)(unaff_RBP + 0xa8) = *(int64_t *)(unaff_RBP + 0xa8) - (int64_t)puVar12;
    lVar17 = *(int64_t *)(unaff_RBP + 0xa8);
    puVar16 = *(uint64_t **)(unaff_RBP + 0xb0);
    do {
      fVar19 = (float)(*pcVar3)(*puVar12,(int64_t)iVar11 % (int64_t)iVar18 & 0xffffffff);
      fVar21 = (float)(*pcVar3)(*puVar12,(int64_t)(iVar11 + 1) % (int64_t)iVar18 & 0xffffffff);
      in_stack_00000040 = *puVar16;
      in_stack_00000048 = *(float *)(puVar16 + 1);
      fStack000000000000004c = *(float *)((int64_t)puVar16 + 0xc);
      uVar28 = *(uint64_t *)(lVar17 + (int64_t)puVar12);
      FUN_18010f0d0(&stack0x00000040,&unknown_var_744_ptr,(double)fVar19,(double)fVar21,uVar28);
      puVar16 = puVar16 + 2;
      puVar12 = puVar12 + 1;
      unaff_R14 = unaff_R14 - 1;
    } while (unaff_R14 != 0);
    iVar18 = *(int *)(unaff_RBP + 200);
    uVar14 = uStack000000000000005c;
  }
  FUN_18012cfe0();
  unaff_R14 = (uint64_t)*(uint *)(unaff_RBP + 0xa0);
  iVar11 = iVar18 + -1;
LAB_180299abc:
  if (0 < (int)unaff_R14) {
    uVar13 = unaff_R14 & 0xffffffff;
    puVar16 = *(uint64_t **)(unaff_RBP + 0xc0);
    fVar22 = 1.0 / (fVar22 - fVar24);
    in_stack_00000060 = 1.0 / (float)(int)uVar14;
    in_stack_00000058 = fVar22;
    do {
      fVar21 = 0.0;
      in_stack_00000040 = uVar13;
      fVar19 = (float)(*pcVar3)(*puVar16,0);
      fVar19 = (fVar19 - fVar24) * fVar22;
      if (0.0 <= fVar19) {
        if (1.0 <= fVar19) {
          fVar19 = 1.0;
        }
      }
      else {
        fVar19 = 0.0;
      }
      lVar17 = *(int64_t *)(unaff_RBP + 0xb0);
      fStack0000000000000054 = 0.0;
      fVar19 = 1.0 - fVar19;
      uVar8 = func_0x000180121e20(lVar17);
      *(int32_t *)(unaff_RBP + -0x78) = uVar8;
      uVar9 = func_0x000180121e20();
      fVar25 = 1.0 - (float)(uVar9 >> 8 & 0xff) * 0.003921569;
      fVar23 = (float)(uVar9 >> 0x18) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628) * 0.003921569;
      fVar20 = 1.0 - (float)(uVar9 >> 0x10 & 0xff) * 0.003921569;
      fVar26 = 1.0 - (float)(uVar9 & 0xff) * 0.003921569;
      if (0.0 <= fVar26) {
        if (1.0 <= fVar26) {
          fVar26 = 1.0;
        }
      }
      else {
        fVar26 = 0.0;
      }
      if (0.0 <= fVar25) {
        if (1.0 <= fVar25) {
          fVar25 = 1.0;
        }
      }
      else {
        fVar25 = 0.0;
      }
      if (0.0 <= fVar20) {
        if (1.0 <= fVar20) {
          fVar20 = 1.0;
        }
      }
      else {
        fVar20 = 0.0;
      }
      if (0.0 <= fVar23) {
        if (1.0 <= fVar23) {
          fVar23 = 1.0;
        }
      }
      else {
        fVar23 = 0.0;
      }
      if (0 < (int)uVar14) {
        fVar24 = *(float *)(unaff_RBP + -0x80) - *(float *)(unaff_RBP + 0x98);
        fVar22 = *(float *)(unaff_RBP + -0x7c) - *(float *)(unaff_RBP + 0x90);
        uVar9 = *(uint *)(unaff_RBP + -0x78);
        uVar13 = (uint64_t)uVar14;
        do {
          uVar8 = (int32_t)((uint64_t)uVar28 >> 0x20);
          fVar27 = (float)iVar11 * fVar21;
          fVar21 = fVar21 + in_stack_00000060;
          iVar15 = (int)(fVar27 + 0.5);
          fVar27 = (float)(*pcVar3)(*puVar16,(int64_t)(iVar15 + 1) % (int64_t)iVar18 & 0xffffffff)
          ;
          fVar27 = (fVar27 - *(float *)(unaff_RBP + 0xd0)) * in_stack_00000058;
          if (0.0 <= fVar27) {
            if (1.0 <= fVar27) {
              fVar27 = 1.0;
            }
          }
          else {
            fVar27 = 0.0;
          }
          fStack0000000000000074 = fVar19 * fVar22;
          fVar19 = 1.0 - fVar27;
          uVar28 = CONCAT44(uVar8,0x3f800000);
          uVar14 = uVar9;
          if (iStack0000000000000050 == iVar15) {
            uVar14 = (int)(fVar23 * 255.0 + 0.5) << 0x18 |
                     (int)(fVar26 * 255.0 + 0.5) | (int)(fVar25 * 255.0 + 0.5) << 8 |
                     (int)(fVar20 * 255.0 + 0.5) << 0x10;
          }
          fStack0000000000000074 = fStack0000000000000074 + *(float *)(unaff_RBP + 0x90);
          uVar5 = *(uint64_t *)(*(int64_t *)(unaff_RBP + -0x68) + 0x2e8);
          in_stack_00000070 = fStack0000000000000054 * fVar24 + *(float *)(unaff_RBP + 0x98);
          *(float *)(unaff_RBP + -0x6c) = fVar19 * fVar22 + *(float *)(unaff_RBP + 0x90);
          *(float *)(unaff_RBP + -0x70) = fVar21 * fVar24 + *(float *)(unaff_RBP + 0x98);
          FUN_180293d20(uVar5,&stack0x00000070,unaff_RBP + -0x70,uVar14,uVar28);
          uVar13 = uVar13 - 1;
          fStack0000000000000054 = fVar21;
        } while (uVar13 != 0);
        fVar24 = *(float *)(unaff_RBP + 0xd0);
        lVar17 = *(int64_t *)(unaff_RBP + 0xb0);
        uVar13 = in_stack_00000040;
        fVar22 = in_stack_00000058;
        uVar14 = uStack000000000000005c;
      }
      iVar11 = iVar18 + -1;
      puVar16 = puVar16 + 1;
      *(int64_t *)(unaff_RBP + 0xb0) = lVar17 + 0x10;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    fVar26 = *(float *)(unaff_RBP + -0x74);
    in_stack_00000040 = 0;
  }
  FUN_180122320(CONCAT44(*(int32_t *)(unaff_RBP + 0x90),
                         fVar26 + *(float *)(in_stack_00000068 + 0x1674)),&system_buffer_ptr,0,1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



