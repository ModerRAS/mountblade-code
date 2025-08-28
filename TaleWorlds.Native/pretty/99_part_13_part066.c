#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part066.c - 8 个函数

// 函数: void FUN_1808d6010(int param_1,int param_2,uint64_t *param_3,int64_t param_4,float param_5,
void FUN_1808d6010(int param_1,int param_2,uint64_t *param_3,int64_t param_4,float param_5,
                  float param_6,char param_7,float *param_8)

{
  int64_t lVar1;
  int8_t *puVar2;
  int8_t *puVar3;
  bool bVar4;
  float fVar5;
  uint64_t uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int8_t auStack_1a8 [32];
  int8_t *puStack_188;
  uint64_t uStack_178;
  float fStack_170;
  float *pfStack_168;
  float fStack_158;
  float fStack_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  uint64_t uStack_120;
  int32_t uStack_118;
  float afStack_110 [2];
  float fStack_108;
  int8_t auStack_100 [48];
  float afStack_d0 [8];
  int8_t auStack_b0 [32];
  uint64_t uStack_90;
  
  uStack_90 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1a8;
  pfStack_168 = param_8;
  bVar4 = (param_1 - 1U & 0xfffffff7) != 0;
  puVar3 = (int8_t *)0x0;
  fVar10 = 0.0;
  puStack_188 = auStack_b0;
  if (bVar4) {
    puStack_188 = puVar3;
  }
  puVar2 = (int8_t *)(param_4 + 0x28);
  if (param_4 == 0) {
    puVar2 = puVar3;
  }
  FUN_1808befb0(puVar2,param_2,param_3,afStack_d0);
  if (bVar4) {
    if (0 < (int64_t)param_2) {
      do {
        fVar5 = afStack_d0[(int64_t)puVar3];
        if (fVar5 <= 0.0) goto LAB_1808d637d;
        if (param_1 == 2) {
          uStack_120 = *param_3;
          uStack_118 = *(int32_t *)(param_3 + 1);
          FUN_1808d2b50(param_4 + 0x28,&fStack_140,&uStack_120,param_7);
          if (((fStack_140 == 0.0) && (fStack_13c == 0.0)) && (fStack_138 == 0.0))
          goto LAB_1808d637d;
          uVar6 = (uint64_t)(uint)SQRT(fStack_13c * fStack_13c + fStack_140 * fStack_140);
          fVar7 = fStack_138;
LAB_1808d61a3:
          if (param_7 != '\0') {
            fVar7 = -fVar7;
          }
          fVar5 = (float)atan2f(uVar6,fVar7);
          fVar5 = fVar5 * 57.295776 * afStack_d0[(int64_t)puVar3];
LAB_1808d6379:
          fVar10 = fVar10 + fVar5;
        }
        else {
          if (param_1 == 3) {
            lVar1 = FUN_1808d2a80(param_3,auStack_100,param_4 + 0x28,param_7);
            uVar6 = *(uint64_t *)(lVar1 + 0x18);
            fStack_158 = *(float *)(lVar1 + 0x20);
            fVar7 = fStack_158;
            fVar5 = (float)uVar6;
LAB_1808d61f0:
            if ((fVar5 != 0.0) || (fVar7 != 0.0)) goto LAB_1808d61a3;
            fVar5 = afStack_d0[(int64_t)puVar3] * 0.0;
            goto LAB_1808d6379;
          }
          if (param_1 == 4) {
            FUN_1808d2b50(param_3,afStack_110,param_4 + 0x28,param_7);
            uVar6 = (uint64_t)(uint)afStack_110[0];
            fVar7 = fStack_108;
            fVar5 = afStack_110[0];
            goto LAB_1808d61f0;
          }
          if (param_1 != 5) {
            if (param_1 == 6) {
              fStack_148 = *(float *)(param_3 + 4);
              if (((float)param_3[3] == 0.0) && (fStack_148 == 0.0)) {
                fVar10 = fVar10 + fVar5 * 0.0;
              }
              else {
                fVar7 = fStack_148;
                if (param_7 != '\0') {
                  fVar7 = -fStack_148;
                }
                fVar7 = (float)atan2f(param_3[3],fVar7);
                fVar10 = fVar10 + fVar5 * fVar7 * 57.295776;
              }
              goto LAB_1808d637d;
            }
            if (param_1 == 7) {
              fVar7 = *(float *)(param_4 + 0x3c) - *(float *)((int64_t)param_3 + 0x14);
              fVar9 = *(float *)(param_4 + 0x38) - *(float *)(param_3 + 2);
              fVar8 = *(float *)(param_4 + 0x34) - *(float *)((int64_t)param_3 + 0xc);
              fVar7 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7;
            }
            else {
              if (param_1 != 8) goto LAB_1808d637d;
              uStack_178 = *(uint64_t *)(param_4 + 0x34);
              fStack_170 = *(float *)(param_4 + 0x3c);
              fVar7 = (float)((uint64_t)uStack_178 >> 0x20);
              fVar7 = fVar7 * fVar7 + (float)uStack_178 * (float)uStack_178 +
                      fStack_170 * fStack_170;
            }
            fVar5 = SQRT(fVar7) * fVar5;
            goto LAB_1808d6379;
          }
          FUN_1808d2b50(param_3,&fStack_130,param_4 + 0x28,param_7);
          if (((fStack_130 != 0.0) || (fStack_12c != 0.0)) || (fStack_128 != 0.0)) {
            fVar5 = (float)atan2f(fStack_12c,SQRT(fStack_128 * fStack_128 + fStack_130 * fStack_130)
                                 );
            fVar5 = fVar5 * 57.295776 * afStack_d0[(int64_t)puVar3];
            goto LAB_1808d6379;
          }
        }
LAB_1808d637d:
        puVar3 = puVar3 + 1;
        param_3 = (uint64_t *)((int64_t)param_3 + 0x44);
      } while ((int64_t)puVar3 < (int64_t)param_2);
    }
  }
  else {
    fVar10 = (float)FUN_1808d2530(param_2,afStack_d0,auStack_b0);
    if (param_1 == 9) {
      param_6 = param_6 - param_5;
      if (param_6 <= 1.1920929e-07) {
        param_6 = 1.1920929e-07;
      }
      fVar10 = (fVar10 - param_5) / param_6;
      if (0.0 <= fVar10) {
        if (1.0 <= fVar10) {
          fVar10 = 1.0;
        }
      }
      else {
        fVar10 = 0.0;
      }
    }
  }
  *pfStack_168 = fVar10;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_90 ^ (uint64_t)auStack_1a8);
}






// 函数: void FUN_1808d6105(void)
void FUN_1808d6105(void)

{
  int32_t uVar1;
  int64_t lVar2;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t *unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int unaff_R14D;
  char unaff_R15B;
  float fVar3;
  uint64_t uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float fStack0000000000000030;
  float *in_stack_00000040;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float in_stack_00000070;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  do {
    fVar3 = *(float *)(unaff_RBP + -0x28 + unaff_RSI * 4);
    if (fVar3 <= unaff_XMM6_Da) goto LAB_1808d637d;
    if (unaff_R14D == 2) {
      uVar1 = *(int32_t *)(unaff_RDI + 1);
      *(uint64_t *)(unaff_RBP + -0x78) = *unaff_RDI;
      *(int32_t *)(unaff_RBP + -0x70) = uVar1;
      FUN_1808d2b50(unaff_R13 + 0x28,&stack0x00000068,unaff_RBP + -0x78,unaff_R15B);
      if (((fStack0000000000000068 == unaff_XMM6_Da) && (fStack000000000000006c == unaff_XMM6_Da))
         && (in_stack_00000070 == unaff_XMM6_Da)) goto LAB_1808d637d;
      uVar4 = (uint64_t)
              (uint)SQRT(fStack000000000000006c * fStack000000000000006c +
                         fStack0000000000000068 * fStack0000000000000068);
      fVar5 = in_stack_00000070;
LAB_1808d61a3:
      if (unaff_R15B != '\0') {
        fVar5 = -fVar5;
      }
      fVar3 = (float)atan2f(uVar4,fVar5);
      fVar3 = fVar3 * 57.295776 * *(float *)(unaff_RBP + -0x28 + unaff_RSI * 4);
LAB_1808d6379:
      unaff_XMM7_Da = unaff_XMM7_Da + fVar3;
    }
    else {
      if (unaff_R14D == 3) {
        lVar2 = FUN_1808d2a80(unaff_RDI,unaff_RBP + -0x58,unaff_R13 + 0x28,unaff_R15B);
        uVar4 = *(uint64_t *)(lVar2 + 0x18);
        fVar5 = *(float *)(lVar2 + 0x20);
        fVar3 = (float)uVar4;
LAB_1808d61f0:
        if ((fVar3 != unaff_XMM6_Da) || (fVar5 != unaff_XMM6_Da)) goto LAB_1808d61a3;
        fVar3 = unaff_XMM6_Da * *(float *)(unaff_RBP + -0x28 + unaff_RSI * 4);
        goto LAB_1808d6379;
      }
      if (unaff_R14D == 4) {
        FUN_1808d2b50(unaff_RDI,unaff_RBP + -0x68,unaff_R13 + 0x28,unaff_R15B);
        fVar3 = *(float *)(unaff_RBP + -0x68);
        uVar4 = (uint64_t)(uint)fVar3;
        fVar5 = *(float *)(unaff_RBP + -0x60);
        goto LAB_1808d61f0;
      }
      if (unaff_R14D == 5) {
        FUN_1808d2b50(unaff_RDI,&stack0x00000078,unaff_R13 + 0x28,unaff_R15B);
        fVar3 = *(float *)(unaff_RBP + -0x80);
        if (((fStack0000000000000078 == unaff_XMM6_Da) && (fStack000000000000007c == unaff_XMM6_Da))
           && (fVar3 == unaff_XMM6_Da)) goto LAB_1808d637d;
        fVar3 = (float)atan2f(fStack000000000000007c,
                              SQRT(fVar3 * fVar3 + fStack0000000000000078 * fStack0000000000000078))
        ;
        fVar3 = fVar3 * 57.295776 * *(float *)(unaff_RBP + -0x28 + unaff_RSI * 4);
        goto LAB_1808d6379;
      }
      if (unaff_R14D != 6) {
        if (unaff_R14D == 7) {
          fVar5 = *(float *)(unaff_R13 + 0x3c) - *(float *)((int64_t)unaff_RDI + 0x14);
          fVar7 = *(float *)(unaff_R13 + 0x38) - *(float *)(unaff_RDI + 2);
          fVar6 = *(float *)(unaff_R13 + 0x34) - *(float *)((int64_t)unaff_RDI + 0xc);
          fVar5 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5;
        }
        else {
          if (unaff_R14D != 8) goto LAB_1808d637d;
          fVar5 = (float)((uint64_t)*(uint64_t *)(unaff_R13 + 0x34) >> 0x20);
          fStack0000000000000030 = (float)*(uint64_t *)(unaff_R13 + 0x34);
          fVar5 = fVar5 * fVar5 + fStack0000000000000030 * fStack0000000000000030 +
                  *(float *)(unaff_R13 + 0x3c) * *(float *)(unaff_R13 + 0x3c);
        }
        fVar3 = SQRT(fVar5) * fVar3;
        goto LAB_1808d6379;
      }
      fVar5 = *(float *)(unaff_RDI + 4);
      if (((float)unaff_RDI[3] == unaff_XMM6_Da) && (fVar5 == unaff_XMM6_Da)) {
        unaff_XMM7_Da = unaff_XMM7_Da + fVar3 * unaff_XMM6_Da;
      }
      else {
        if (unaff_R15B != '\0') {
          fVar5 = -fVar5;
        }
        fVar5 = (float)atan2f(unaff_RDI[3],fVar5);
        unaff_XMM7_Da = unaff_XMM7_Da + fVar3 * fVar5 * 57.295776;
      }
    }
LAB_1808d637d:
    unaff_RSI = unaff_RSI + 1;
    unaff_RDI = (uint64_t *)((int64_t)unaff_RDI + 0x44);
    if (unaff_R12 <= unaff_RSI) {
      *in_stack_00000040 = unaff_XMM7_Da;
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x18) ^ (uint64_t)&stack0x00000000);
    }
  } while( true );
}






// 函数: void FUN_1808d63a8(void)
void FUN_1808d63a8(void)

{
  int64_t unaff_RBP;
  int32_t unaff_XMM7_Da;
  int32_t *in_stack_00000040;
  
  *in_stack_00000040 = unaff_XMM7_Da;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x18) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808d6410(int64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t param_4)
void FUN_1808d6410(int64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int8_t auStack_b8 [32];
  int64_t lStack_98;
  int8_t auStack_88 [40];
  uint64_t uStack_60;
  
  uStack_60 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  lVar6 = *(int64_t *)(param_1 + 0x18);
  if (lVar6 != 0) {
    lVar1 = lVar6 + 0x10;
    lVar6 = (**(code **)(*(int64_t *)*param_2 + 0x278))((int64_t *)*param_2,lVar1,1);
    if (lVar6 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(lVar1,auStack_88);
    }
    *(int64_t *)(param_1 + 0x18) = lVar6;
  }
  lVar2 = *(int64_t *)(lVar6 + 0x20);
  lVar1 = lVar6 + 0x20;
  if ((lVar2 == lVar1) && (*(int64_t *)(lVar6 + 0x28) == lVar1)) {
    lVar6 = *(int64_t *)(param_1 + 0x38);
    if (lVar6 != 0) {
      FUN_1808b1880(lVar6);
      lStack_98 = CONCAT71(lStack_98._1_7_,1);
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar6,&unknown_var_7152_ptr,0x1c2);
    }
  }
  else {
    lStack_98 = param_1 + 0x38;
    if (*(int64_t *)(param_1 + 0x38) == 0) {
      lVar6 = 0;
      if (lVar2 != lVar1) {
        lVar6 = lVar2;
      }
      iVar5 = FUN_1808b7c00(param_3,lVar6,param_1,param_4);
    }
    else {
      lStack_98 = param_4;
      iVar5 = FUN_1808b2530(*(int64_t *)(param_1 + 0x38),param_1,param_2,param_3);
    }
    if (iVar5 != 0) goto FUN_1808d6628;
  }
  uVar3 = *(uint64_t *)(param_1 + 0x18);
  cVar4 = func_0x0001808d57d0(param_2,uVar3);
  if (cVar4 != '\0') {
    cVar4 = func_0x00018084e080(uVar3);
    lVar6 = *(int64_t *)(param_1 + 0x18);
    if (cVar4 == '\0') {
      fVar8 = *(float *)(lVar6 + 0x38);
      fVar9 = *(float *)(lVar6 + 0x3c);
    }
    else {
      fVar8 = *(float *)(lVar6 + 0x4c);
      fVar9 = fVar8;
    }
    fVar7 = *(float *)(param_1 + 0x20);
    if ((fVar7 < fVar8) &&
       ((*(char *)(param_1 + 0x34) == '\0' || ((*(uint *)(lVar6 + 0x34) >> 1 & 1) == 0)))) {
      *(float *)(param_1 + 0x20) = fVar8;
      FUN_1808d7020(param_1);
      fVar7 = *(float *)(param_1 + 0x20);
      *(int8_t *)(param_1 + 0x35) = 0;
    }
    if ((fVar9 < fVar7) &&
       ((*(char *)(param_1 + 0x34) == '\0' ||
        ((*(uint *)(*(int64_t *)(param_1 + 0x18) + 0x34) >> 1 & 1) == 0)))) {
      *(float *)(param_1 + 0x20) = fVar9;
      FUN_1808d7020(param_1);
      *(int8_t *)(param_1 + 0x35) = 0;
    }
    if ((((fVar8 < *(float *)(param_1 + 0x28) || fVar8 == *(float *)(param_1 + 0x28)) ||
         (iVar5 = FUN_1808d72a0(param_1), iVar5 == 0)) &&
        ((*(float *)(param_1 + 0x28) <= fVar9 || (iVar5 = FUN_1808d72a0(param_1), iVar5 == 0)))) &&
       ((iVar5 = FUN_1808d7020(param_1), iVar5 == 0 &&
        (fVar8 = (float)func_0x0001808d5fd0(param_1), fVar8 == 0.0)))) {
      FUN_1808d72a0(param_1,*(int32_t *)(param_1 + 0x24));
    }
  }
FUN_1808d6628:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_60 ^ (uint64_t)auStack_b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808d6449(int64_t *param_1)
void FUN_1808d6449(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t uVar7;
  float fVar8;
  float fVar9;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM7_Da;
  float fVar10;
  int32_t unaff_XMM7_Dc;
  uint64_t in_stack_00000058;
  int32_t in_stack_00000060;
  int32_t in_stack_00000068;
  int32_t in_stack_00000070;
  int32_t in_stack_00000078;
  
  lVar6 = (**(code **)(*param_1 + 0x278))(param_1,unaff_RDI + 0x10);
  if (lVar6 == 0) {
                    // WARNING: Subroutine does not return
    FUN_18084b240(unaff_RDI + 0x10,&stack0x00000030);
  }
  *(int64_t *)(unaff_RBX + 0x18) = lVar6;
  lVar2 = *(int64_t *)(lVar6 + 0x20);
  lVar1 = lVar6 + 0x20;
  if ((lVar2 == lVar1) && (*(int64_t *)(lVar6 + 0x28) == lVar1)) {
    lVar6 = *(int64_t *)(unaff_RBX + 0x38);
    uVar7 = extraout_XMM0_Da;
    if (lVar6 != 0) {
      FUN_1808b1880(lVar6);
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar6,&unknown_var_7152_ptr,0x1c2,1);
    }
  }
  else {
    if (*(int64_t *)(unaff_RBX + 0x38) == 0) {
      lVar6 = 0;
      if (lVar2 != lVar1) {
        lVar6 = lVar2;
      }
      iVar5 = FUN_1808b7c00(extraout_XMM0_Da,lVar6);
      uVar7 = extraout_XMM0_Da_01;
    }
    else {
      iVar5 = FUN_1808b2530();
      uVar7 = extraout_XMM0_Da_00;
    }
    if (iVar5 != 0) goto FUN_1808d6628;
  }
  uVar3 = *(uint64_t *)(unaff_RBX + 0x18);
  in_stack_00000060 = unaff_XMM7_Da;
  in_stack_00000068 = unaff_XMM7_Dc;
  in_stack_00000070 = unaff_XMM6_Da;
  in_stack_00000078 = unaff_XMM6_Dc;
  cVar4 = func_0x0001808d57d0(uVar7,uVar3);
  if (cVar4 != '\0') {
    cVar4 = func_0x00018084e080(uVar3);
    lVar6 = *(int64_t *)(unaff_RBX + 0x18);
    if (cVar4 == '\0') {
      fVar9 = *(float *)(lVar6 + 0x38);
      fVar10 = *(float *)(lVar6 + 0x3c);
    }
    else {
      fVar9 = *(float *)(lVar6 + 0x4c);
      fVar10 = fVar9;
    }
    fVar8 = *(float *)(unaff_RBX + 0x20);
    if ((fVar8 < fVar9) &&
       ((*(char *)(unaff_RBX + 0x34) == '\0' || ((*(uint *)(lVar6 + 0x34) >> 1 & 1) == 0)))) {
      *(float *)(unaff_RBX + 0x20) = fVar9;
      FUN_1808d7020();
      fVar8 = *(float *)(unaff_RBX + 0x20);
      *(int8_t *)(unaff_RBX + 0x35) = 0;
    }
    if ((fVar10 < fVar8) &&
       ((*(char *)(unaff_RBX + 0x34) == '\0' ||
        ((*(uint *)(*(int64_t *)(unaff_RBX + 0x18) + 0x34) >> 1 & 1) == 0)))) {
      *(float *)(unaff_RBX + 0x20) = fVar10;
      FUN_1808d7020();
      *(int8_t *)(unaff_RBX + 0x35) = 0;
    }
    if ((((fVar9 < *(float *)(unaff_RBX + 0x28) || fVar9 == *(float *)(unaff_RBX + 0x28)) ||
         (iVar5 = FUN_1808d72a0(), iVar5 == 0)) &&
        ((*(float *)(unaff_RBX + 0x28) <= fVar10 || (iVar5 = FUN_1808d72a0(), iVar5 == 0)))) &&
       ((iVar5 = FUN_1808d7020(), iVar5 == 0 && (fVar9 = (float)func_0x0001808d5fd0(), fVar9 == 0.0)
        ))) {
      FUN_1808d72a0(fVar9,*(int32_t *)(unaff_RBX + 0x24));
    }
  }
FUN_1808d6628:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000058 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808d6482(int32_t param_1)
void FUN_1808d6482(int32_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  float fVar7;
  float fVar8;
  float fVar9;
  uint64_t in_stack_00000058;
  
  lVar2 = *(int64_t *)(unaff_RDI + 0x20);
  lVar1 = unaff_RDI + 0x20;
  if ((lVar2 == lVar1) && (*(int64_t *)(unaff_RDI + 0x28) == lVar1)) {
    lVar1 = *(int64_t *)(unaff_RBX + 0x38);
    if (lVar1 != 0) {
      FUN_1808b1880(lVar1);
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_7152_ptr,0x1c2,1);
    }
  }
  else {
    if (*(int64_t *)(unaff_RBX + 0x38) == 0) {
      lVar6 = 0;
      if (lVar2 != lVar1) {
        lVar6 = lVar2;
      }
      iVar5 = FUN_1808b7c00(param_1,lVar6);
      param_1 = extraout_XMM0_Da_00;
    }
    else {
      iVar5 = FUN_1808b2530();
      param_1 = extraout_XMM0_Da;
    }
    if (iVar5 != 0) goto FUN_1808d6628;
  }
  uVar3 = *(uint64_t *)(unaff_RBX + 0x18);
  cVar4 = func_0x0001808d57d0(param_1,uVar3);
  if (cVar4 != '\0') {
    cVar4 = func_0x00018084e080(uVar3);
    lVar1 = *(int64_t *)(unaff_RBX + 0x18);
    if (cVar4 == '\0') {
      fVar8 = *(float *)(lVar1 + 0x38);
      fVar9 = *(float *)(lVar1 + 0x3c);
    }
    else {
      fVar8 = *(float *)(lVar1 + 0x4c);
      fVar9 = fVar8;
    }
    fVar7 = *(float *)(unaff_RBX + 0x20);
    if ((fVar7 < fVar8) &&
       ((*(char *)(unaff_RBX + 0x34) == '\0' || ((*(uint *)(lVar1 + 0x34) >> 1 & 1) == 0)))) {
      *(float *)(unaff_RBX + 0x20) = fVar8;
      FUN_1808d7020();
      fVar7 = *(float *)(unaff_RBX + 0x20);
      *(int8_t *)(unaff_RBX + 0x35) = 0;
    }
    if ((fVar9 < fVar7) &&
       ((*(char *)(unaff_RBX + 0x34) == '\0' ||
        ((*(uint *)(*(int64_t *)(unaff_RBX + 0x18) + 0x34) >> 1 & 1) == 0)))) {
      *(float *)(unaff_RBX + 0x20) = fVar9;
      FUN_1808d7020();
      *(int8_t *)(unaff_RBX + 0x35) = 0;
    }
    if ((((fVar8 < *(float *)(unaff_RBX + 0x28) || fVar8 == *(float *)(unaff_RBX + 0x28)) ||
         (iVar5 = FUN_1808d72a0(), iVar5 == 0)) &&
        ((*(float *)(unaff_RBX + 0x28) <= fVar9 || (iVar5 = FUN_1808d72a0(), iVar5 == 0)))) &&
       ((iVar5 = FUN_1808d7020(), iVar5 == 0 && (fVar8 = (float)func_0x0001808d5fd0(), fVar8 == 0.0)
        ))) {
      FUN_1808d72a0(fVar8,*(int32_t *)(unaff_RBX + 0x24));
    }
  }
FUN_1808d6628:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000058 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808d6531(void)
void FUN_1808d6531(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t unaff_RBX;
  float fVar4;
  float fVar5;
  float fVar6;
  uint64_t in_stack_00000058;
  
  cVar2 = func_0x0001808d57d0();
  if (cVar2 != '\0') {
    cVar2 = func_0x00018084e080();
    lVar1 = *(int64_t *)(unaff_RBX + 0x18);
    if (cVar2 == '\0') {
      fVar5 = *(float *)(lVar1 + 0x38);
      fVar6 = *(float *)(lVar1 + 0x3c);
    }
    else {
      fVar5 = *(float *)(lVar1 + 0x4c);
      fVar6 = fVar5;
    }
    fVar4 = *(float *)(unaff_RBX + 0x20);
    if ((fVar4 < fVar5) &&
       ((*(char *)(unaff_RBX + 0x34) == '\0' || ((*(uint *)(lVar1 + 0x34) >> 1 & 1) == 0)))) {
      *(float *)(unaff_RBX + 0x20) = fVar5;
      FUN_1808d7020();
      fVar4 = *(float *)(unaff_RBX + 0x20);
      *(int8_t *)(unaff_RBX + 0x35) = 0;
    }
    if ((fVar6 < fVar4) &&
       ((*(char *)(unaff_RBX + 0x34) == '\0' ||
        ((*(uint *)(*(int64_t *)(unaff_RBX + 0x18) + 0x34) >> 1 & 1) == 0)))) {
      *(float *)(unaff_RBX + 0x20) = fVar6;
      FUN_1808d7020();
      *(int8_t *)(unaff_RBX + 0x35) = 0;
    }
    if ((((fVar5 < *(float *)(unaff_RBX + 0x28) || fVar5 == *(float *)(unaff_RBX + 0x28)) ||
         (iVar3 = FUN_1808d72a0(), iVar3 == 0)) &&
        ((*(float *)(unaff_RBX + 0x28) <= fVar6 || (iVar3 = FUN_1808d72a0(), iVar3 == 0)))) &&
       ((iVar3 = FUN_1808d7020(), iVar3 == 0 && (fVar5 = (float)func_0x0001808d5fd0(), fVar5 == 0.0)
        ))) {
      FUN_1808d72a0(fVar5,*(int32_t *)(unaff_RBX + 0x24));
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000058 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808d6628(void)
void FUN_1808d6628(void)

{
  uint64_t in_stack_00000058;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000058 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




