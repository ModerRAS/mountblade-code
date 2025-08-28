#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part200.c - 14 个函数

// 函数: void FUN_1807851dd(int param_1,uint64_t param_2)
void FUN_1807851dd(int param_1,uint64_t param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float *pfVar4;
  uint64_t uVar5;
  float *pfVar6;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int iVar7;
  int32_t *puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int unaff_R12D;
  int32_t unaff_000000a4;
  uint64_t unaff_R15;
  float fVar12;
  uint64_t uVar13;
  int8_t auVar14 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  float fVar15;
  float fVar16;
  float unaff_XMM7_Da;
  float fVar17;
  int64_t in_stack_00000068;
  uint64_t in_stack_00000070;
  uint64_t in_stack_00000078;
  uint64_t extraout_XMM0_Qb;
  
  if (param_1 == 0) {
    if (((int)param_2 == 2) || ((int)param_2 == 3)) {
      unaff_R15 = CONCAT44(unaff_000000a4,unaff_R12D);
    }
    else {
      func_0x00018074a3d0(*(uint64_t *)(unaff_RBX + 0xa8),param_2,&stack0x00000068);
      if ((float)*(int *)(in_stack_00000068 + 4) <= 1.0) {
        fVar16 = 1.0;
      }
      else {
        func_0x00018074a3d0(*(uint64_t *)(unaff_RBX + 0xa8),*(int32_t *)(unaff_RBX + 0x24c),
                            &stack0x00000068);
        fVar16 = SQRT((float)*(int *)(in_stack_00000068 + 4));
      }
      FUN_1807d47c0(*(int32_t *)(unaff_RBX + 0x244),1,0xc,unaff_RBP + -0x70);
      func_0x00018074a3d0(*(uint64_t *)(unaff_RBX + 0xa8),*(int32_t *)(unaff_RBX + 0x24c),
                          &stack0x00000068);
      func_0x0001807d64c0(in_stack_00000068,1.0 / fVar16,0x3f800000);
    }
  }
  else if (param_1 == 1) {
    func_0x00018074a3d0(*(uint64_t *)(unaff_RBX + 0xa8),param_2,&stack0x00000068);
    if (-1 < *(int *)(in_stack_00000068 + 0x98)) {
      unaff_XMM7_Da = 0.70710677;
    }
    FUN_1807d47c0(*(int32_t *)(unaff_RBX + 0x244),2,0xc);
    func_0x00018074a3d0(*(uint64_t *)(unaff_RBX + 0xa8),*(int32_t *)(unaff_RBX + 0x24c),
                        &stack0x00000068);
    FUN_1807d65f0(in_stack_00000068,*(int32_t *)(unaff_RBX + 0x280),unaff_XMM7_Da,0x3f800000,0xc)
    ;
  }
  else {
    func_0x00018074a3d0(*(uint64_t *)(unaff_RBX + 0xa8),param_2,&stack0x00000068);
    auVar14._0_8_ = FUN_1807d47c0(0xc,0xc,0xc);
    auVar14._8_8_ = extraout_XMM0_Qb;
    if (unaff_XMM7_Da < *(float *)(unaff_RBX + 0x2b8)) {
      iVar7 = *(int *)(unaff_RBX + 0x2c8);
      if (iVar7 == 1) {
        uVar13 = FUN_180782f30(auVar14._0_8_,*(int32_t *)(unaff_RBX + 0x2d8));
        func_0x000180782f80(uVar13,*(int32_t *)(unaff_RBX + 0x2dc));
        FUN_180784b00();
      }
      else {
        fVar16 = 0.0;
        in_stack_00000070 = 0;
        fVar17 = 0.0;
        in_stack_00000078 = 0;
        *(uint64_t *)(unaff_RBP + -0x80) = 0;
        *(uint64_t *)(unaff_RBP + -0x78) = 0;
        if (0 < iVar7) {
          pfVar6 = (float *)&stack0x00000070;
          puVar8 = (int32_t *)(unaff_RBX + 0x2d8);
          iVar7 = unaff_R12D;
          do {
            fVar12 = (float)puVar8[-3];
            if (unaff_XMM7_Da < fVar12) {
              auVar14._0_8_ = FUN_180782f30(auVar14._0_8_,*puVar8);
              auVar14._8_8_ = extraout_XMM0_Qb_00;
              *pfVar6 = (float)auVar14._0_8_ * fVar12;
              fVar15 = 1.0 - fVar17;
              if (fVar12 <= 1.0 - fVar17) {
                fVar15 = fVar12;
              }
              fVar17 = fVar17 + fVar15;
              fVar16 = fVar16 + fVar15 * (float)auVar14._0_8_;
            }
            iVar7 = iVar7 + 1;
            puVar8 = puVar8 + 5;
            pfVar6 = pfVar6 + 1;
          } while (iVar7 < *(int *)(unaff_RBX + 0x2c8));
          if (fVar16 != unaff_XMM7_Da) {
            if (0 < *(int *)(unaff_RBX + 0x2c8)) {
              pfVar6 = (float *)&stack0x00000070;
              lVar9 = unaff_RBX + 0x2d4;
              do {
                if (*pfVar6 != unaff_XMM7_Da) {
                  func_0x000180782f80(auVar14._0_8_,*(int32_t *)(lVar9 + 8));
                  auVar14._0_8_ = FUN_180784b00();
                  auVar14._8_8_ = extraout_XMM0_Qb_01;
                }
                unaff_R12D = unaff_R12D + 1;
                pfVar6 = pfVar6 + 1;
                lVar9 = lVar9 + 0x14;
              } while (unaff_R12D < *(int *)(unaff_RBX + 0x2c8));
            }
            uVar1 = *(uint *)(unaff_RBX + 0x248);
            uVar10 = (uint64_t)uVar1;
            fVar17 = unaff_XMM7_Da;
            if (0 < (int)uVar1) {
              pfVar6 = (float *)(unaff_RBP + -0x70);
              uVar11 = (uint64_t)uVar1;
              do {
                pfVar4 = pfVar6;
                uVar5 = (uint64_t)*(uint *)(unaff_RBX + 0x244);
                if (0 < (int)*(uint *)(unaff_RBX + 0x244)) {
                  do {
                    fVar17 = fVar17 + *pfVar4 * *pfVar4;
                    uVar5 = uVar5 - 1;
                    pfVar4 = pfVar4 + 1;
                  } while (uVar5 != 0);
                }
                pfVar6 = pfVar6 + 0xc;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            fVar12 = *(float *)(unaff_RBX + 0x2b8);
            if (0 < (int)uVar1) {
              uVar1 = *(uint *)(unaff_RBX + 0x244);
              pfVar6 = (float *)(unaff_RBP + -0x70);
              do {
                pfVar4 = pfVar6;
                uVar11 = (uint64_t)uVar1;
                if (0 < (int)uVar1) {
                  do {
                    *pfVar4 = (fVar16 / SQRT(fVar17)) * fVar12 * *pfVar4;
                    uVar11 = uVar11 - 1;
                    pfVar4 = pfVar4 + 1;
                  } while (uVar11 != 0);
                }
                pfVar6 = pfVar6 + 0xc;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
          }
        }
      }
    }
    if (*(float *)(unaff_RBX + 0x2b8) < 1.0) {
      if ((*(int **)(unaff_RBX + 0x270) == (int *)0x0) || (**(int **)(unaff_RBX + 0x270) == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((*(int **)(unaff_RBX + 0x268) == (int *)0x0) || (**(int **)(unaff_RBX + 0x268) == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      fVar16 = unaff_XMM7_Da;
      if ((bVar2) && (*(float *)(unaff_RBX + 0x2a0) < unaff_XMM7_Da)) {
        fVar16 = -*(float *)(unaff_RBX + 0x2a0);
      }
      if ((!bVar3) ||
         (fVar17 = *(float *)(unaff_RBX + 0x2a0), *(float *)(unaff_RBX + 0x2a0) <= unaff_XMM7_Da)) {
        fVar17 = unaff_XMM7_Da;
      }
      fVar12 = 1.0 - *(float *)(unaff_RBX + 0x2b8);
      if ((1.0 - fVar17) * fVar12 != unaff_XMM7_Da) {
        FUN_180784b00();
      }
      if ((fVar12 * fVar17 != unaff_XMM7_Da) && (bVar3)) {
        FUN_180784b00();
      }
      if ((fVar12 * fVar16 != unaff_XMM7_Da) && (bVar2)) {
        FUN_1807d6d40(*(uint64_t *)(unaff_RBX + 0x270),*(uint64_t *)(unaff_RBX + 600),
                      *(int32_t *)(unaff_RBX + 0x284),*(int32_t *)(unaff_RBX + 0x288),
                      *(int32_t *)(unaff_RBX + 0x28c));
      }
      if ((((1.0 - fVar16) * fVar12 != unaff_XMM7_Da) && (bVar3)) && (bVar2)) {
        FUN_1807d6d40(*(uint64_t *)(unaff_RBX + 0x270),*(uint64_t *)(unaff_RBX + 0x268),
                      *(int32_t *)(unaff_RBX + 0x284),*(int32_t *)(unaff_RBX + 0x288),
                      *(int32_t *)(unaff_RBX + 0x28c));
      }
    }
  }
  FUN_180765da0(*(uint64_t *)(unaff_RBX + 0x218),unaff_R15,*(int32_t *)(unaff_RBX + 0x248),
                *(int32_t *)(unaff_RBX + 0x244),0xc);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1d0) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180785943(void)
void FUN_180785943(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1d0) ^ (uint64_t)&stack0x00000000);
}



uint64_t * FUN_180785980(uint64_t *param_1)

{
  uint64_t *puVar1;
  
  func_0x000180767970();
  param_1[2] = &unknown_var_9696_ptr;
  puVar1 = param_1 + 0x2d;
  param_1[0x2e] = puVar1;
  *puVar1 = puVar1;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2c] = 0;
  param_1[0x31] = 0;
  *(int8_t *)(param_1 + 0x33) = 0;
  *param_1 = 0;
  param_1[0x34] = 0;
  *(int32_t *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  *(int32_t *)(param_1 + 0x37) = 0x447a0000;
  *(int8_t *)(param_1 + 1) = 1;
  return param_1;
}



uint64_t * FUN_180785a20(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_8408_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x180);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180785a50(int64_t param_1)

{
  uint64_t uVar1;
  
  if (*(char *)(param_1 + 0x198) != '\0') {
    uVar1 = FUN_180767ad0(param_1 + 0x10);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*(int64_t *)(param_1 + 0x180) != 0) {
      uVar1 = FUN_180768380(*(int64_t *)(param_1 + 0x180),0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      *(uint64_t *)(param_1 + 0x180) = 0;
    }
    if (*(int64_t *)(param_1 + 0x160) != 0) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x160),
                    &unknown_var_9712_ptr,0x75,1);
    }
    uVar1 = FUN_180768380(*(uint64_t *)(param_1 + 400),0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *(uint64_t *)(param_1 + 400) = 0;
    *(char *)(param_1 + 0x198) = (char)uVar1;
  }
  return 0;
}





// 函数: void FUN_180785b10(int64_t param_1,int64_t param_2,int32_t *param_3)
void FUN_180785b10(int64_t param_1,int64_t param_2,int32_t *param_3)

{
  int iVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lStackX_20;
  int64_t alStack_18 [2];
  
  lStackX_20 = 0;
  iVar1 = FUN_180758ed0(param_2,&lStackX_20,0);
  if (iVar1 == 0) {
    uVar2 = *(uint64_t *)(param_1 + 0x170);
    SystemStateManager(uVar2);
    plVar3 = (int64_t *)
             ((int64_t)*(int *)(lStackX_20 + 0x1d0) * 0x40 + *(int64_t *)(param_1 + 0x150));
  }
  else {
    iVar1 = FUN_180754f10(param_2,alStack_18,0);
    if (iVar1 != 0) {
      return;
    }
    uVar2 = *(uint64_t *)(param_1 + 0x170);
    SystemStateManager(uVar2);
    plVar3 = (int64_t *)(alStack_18[0] + 0x208);
  }
  if ((int)plVar3[3] != 1) {
    *(int32_t *)(plVar3 + 3) = 0;
    plVar3[4] = param_2;
    *(int32_t *)(plVar3 + 5) = *param_3;
    *(int32_t *)((int64_t)plVar3 + 0x2c) = param_3[1];
    *(int32_t *)(plVar3 + 6) = param_3[2];
    if (((int64_t *)*plVar3 == plVar3) && ((int64_t *)plVar3[1] == plVar3)) {
      plVar3[1] = *(int64_t *)(param_1 + 0x160);
      *plVar3 = param_1 + 0x158;
      *(int64_t **)(param_1 + 0x160) = plVar3;
      *(int64_t **)plVar3[1] = plVar3;
    }
  }
                    // WARNING: Subroutine does not return
  SystemConfigManager(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180785c10(int64_t param_1,uint64_t *param_2,uint64_t *param_3,float *param_4,
void FUN_180785c10(int64_t param_1,uint64_t *param_2,uint64_t *param_3,float *param_4,
                  float *param_5)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int8_t auStack_b8 [32];
  uint64_t *puStack_98;
  uint64_t uStack_88;
  int32_t uStack_80;
  uint64_t uStack_7c;
  int32_t uStack_74;
  float fStack_70;
  float fStack_6c;
  uint64_t uStack_68;
  uint64_t uStack_60;
  
  uStack_60 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  if (*(int64_t *)(param_1 + 0x1a0) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 400);
    SystemStateManager(uVar1);
    lVar2 = *(int64_t *)(param_1 + 0x1b0);
    *(uint64_t *)(param_1 + 0x1b0) = 0;
    while (lVar2 != 0) {
      lVar3 = *(int64_t *)(lVar2 + 0x130);
      *(uint64_t *)(lVar2 + 0x130) = 0;
      *(int8_t *)(lVar2 + 0x138) = 0;
      FUN_180766590();
      lVar2 = lVar3;
    }
    uStack_88 = *param_2;
    uStack_80 = *(int32_t *)(param_2 + 1);
    uStack_7c = *param_3;
    uStack_74 = *(int32_t *)(param_3 + 1);
    fStack_70 = 1.0;
    fStack_6c = 1.0;
    uStack_68 = 0;
    puStack_98 = param_3;
    FUN_1807e4630(*(uint64_t *)(param_1 + 0x1a0),&unknown_var_9216_ptr,&uStack_88,param_2);
    if (param_4 != (float *)0x0) {
      *param_4 = 1.0 - fStack_70;
    }
    if (param_5 != (float *)0x0) {
      *param_5 = 1.0 - fStack_6c;
    }
                    // WARNING: Subroutine does not return
    SystemConfigManager(uVar1);
  }
  if (param_4 != (float *)0x0) {
    *param_4 = 0.0;
  }
  if (param_5 != (float *)0x0) {
    *param_5 = 0.0;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_60 ^ (uint64_t)auStack_b8);
}





// 函数: void FUN_180785c52(int64_t param_1)
void FUN_180785c52(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  float *unaff_RSI;
  uint64_t *unaff_R12;
  uint64_t *unaff_R13;
  float *unaff_R14;
  uint64_t in_stack_00000030;
  int32_t in_stack_00000038;
  uint64_t uStack000000000000003c;
  int32_t uStack0000000000000044;
  float in_stack_00000048;
  float fStack000000000000004c;
  uint64_t in_stack_00000050;
  
  uVar1 = *(uint64_t *)(param_1 + 400);
  SystemStateManager(uVar1);
  lVar2 = *(int64_t *)(unaff_RBP + 0x1b0);
  *(uint64_t *)(unaff_RBP + 0x1b0) = 0;
  while (lVar2 != 0) {
    lVar3 = *(int64_t *)(lVar2 + 0x130);
    *(uint64_t *)(lVar2 + 0x130) = 0;
    *(int8_t *)(lVar2 + 0x138) = 0;
    FUN_180766590();
    lVar2 = lVar3;
  }
  in_stack_00000030 = *unaff_R13;
  in_stack_00000038 = *(int32_t *)(unaff_R13 + 1);
  uStack000000000000003c = *unaff_R12;
  uStack0000000000000044 = *(int32_t *)(unaff_R12 + 1);
  in_stack_00000048 = 1.0;
  fStack000000000000004c = 1.0;
  in_stack_00000050 = 0;
  FUN_1807e4630(*(uint64_t *)(unaff_RBP + 0x1a0),&unknown_var_9216_ptr,&stack0x00000030);
  if (unaff_R14 != (float *)0x0) {
    *unaff_R14 = 1.0 - in_stack_00000048;
  }
  if (unaff_RSI != (float *)0x0) {
    *unaff_RSI = 1.0 - fStack000000000000004c;
  }
                    // WARNING: Subroutine does not return
  SystemConfigManager(uVar1);
}





// 函数: void FUN_180785c80(int64_t param_1)
void FUN_180785c80(int64_t param_1)

{
  int64_t lVar1;
  int64_t unaff_RBP;
  float *unaff_RSI;
  int8_t unaff_DIL;
  uint8_t unaff_00000039;
  uint64_t *unaff_R12;
  uint64_t *unaff_R13;
  float *unaff_R14;
  uint64_t in_stack_00000030;
  int32_t in_stack_00000038;
  uint64_t uStack000000000000003c;
  int32_t uStack0000000000000044;
  float in_stack_00000048;
  float fStack000000000000004c;
  uint64_t in_stack_00000050;
  
  do {
    lVar1 = *(int64_t *)(param_1 + 0x130);
    *(uint64_t *)(param_1 + 0x130) = CONCAT71(unaff_00000039,unaff_DIL);
    *(int8_t *)(param_1 + 0x138) = unaff_DIL;
    FUN_180766590();
    param_1 = lVar1;
  } while (lVar1 != 0);
  in_stack_00000030 = *unaff_R13;
  in_stack_00000038 = *(int32_t *)(unaff_R13 + 1);
  uStack000000000000003c = *unaff_R12;
  uStack0000000000000044 = *(int32_t *)(unaff_R12 + 1);
  in_stack_00000048 = 1.0;
  fStack000000000000004c = 1.0;
  FUN_1807e4630(*(uint64_t *)(unaff_RBP + 0x1a0),&unknown_var_9216_ptr,&stack0x00000030);
  if (unaff_R14 != (float *)0x0) {
    *unaff_R14 = 1.0 - in_stack_00000048;
  }
  if (unaff_RSI != (float *)0x0) {
    *unaff_RSI = 1.0 - fStack000000000000004c;
  }
                    // WARNING: Subroutine does not return
  SystemConfigManager();
}





// 函数: void FUN_180785cba(void)
void FUN_180785cba(void)

{
  int64_t unaff_RBP;
  float *unaff_RSI;
  uint64_t *unaff_R12;
  uint64_t *unaff_R13;
  float *unaff_R14;
  uint64_t uStack0000000000000030;
  int32_t uStack0000000000000038;
  uint64_t uStack000000000000003c;
  int32_t uStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  uStack0000000000000030 = *unaff_R13;
  uStack0000000000000038 = *(int32_t *)(unaff_R13 + 1);
  uStack000000000000003c = *unaff_R12;
  uStack0000000000000044 = *(int32_t *)(unaff_R12 + 1);
  fStack0000000000000048 = 1.0;
  fStack000000000000004c = 1.0;
  FUN_1807e4630(*(uint64_t *)(unaff_RBP + 0x1a0),&unknown_var_9216_ptr,&stack0x00000030);
  if (unaff_R14 != (float *)0x0) {
    *unaff_R14 = 1.0 - fStack0000000000000048;
  }
  if (unaff_RSI != (float *)0x0) {
    *unaff_RSI = 1.0 - fStack000000000000004c;
  }
                    // WARNING: Subroutine does not return
  SystemConfigManager();
}





// 函数: void FUN_180785d56(void)
void FUN_180785d56(void)

{
  int32_t *unaff_RSI;
  int32_t *in_R9;
  int64_t unaff_R14;
  uint64_t in_stack_00000058;
  
  if (unaff_R14 != 0) {
    *in_R9 = 0;
  }
  if (unaff_RSI != (int32_t *)0x0) {
    *unaff_RSI = 0;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000058 ^ (uint64_t)&stack0x00000000);
}



int64_t FUN_180785db0(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t lStackX_8;
  int64_t alStackX_18 [2];
  
  if (*(int64_t *)(param_1 + 0x150) != 0) {
    iVar1 = FUN_180758ed0(param_2,&lStackX_8,0);
    if (iVar1 == 0) {
      alStackX_18[0] = (int64_t)*(int *)(lStackX_8 + 0x1d0) * 0x40 + *(int64_t *)(param_1 + 0x150)
      ;
    }
    else {
      iVar1 = FUN_180754f10(param_2,alStackX_18,0);
      if (iVar1 != 0) {
        return 0;
      }
      alStackX_18[0] = alStackX_18[0] + 0x208;
    }
    if (*(int *)(alStackX_18[0] + 0x18) == 1) {
      *(int32_t *)(alStackX_18[0] + 0x18) = 2;
      return alStackX_18[0];
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180785e40(int64_t param_1)
void FUN_180785e40(int64_t param_1)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int8_t auStack_58 [72];
  uint64_t uStack_10;
  
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_58;
  FUN_180772cd0(**(int64_t **)(param_1 + 0x178) + 0x125f8);
  uVar2 = *(uint64_t *)(param_1 + 0x170);
  SystemStateManager(uVar2);
  plVar1 = (int64_t *)(param_1 + 0x158);
  plVar3 = (int64_t *)*plVar1;
  if ((plVar3 != plVar1) || (*(int64_t **)(param_1 + 0x160) != plVar1)) {
    *(int64_t *)plVar3[1] = *plVar3;
    *(int64_t *)(*plVar3 + 8) = plVar3[1];
    plVar3[1] = (int64_t)plVar3;
    *plVar3 = (int64_t)plVar3;
  }
                    // WARNING: Subroutine does not return
  SystemConfigManager(uVar2);
}



int32_t FUN_180786030(int *param_1,int64_t *param_2,int param_3,char param_4)

{
  uint *puVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t lVar4;
  int iVar5;
  char acStackX_10 [8];
  
  if (param_2 == (int64_t *)0x0) {
    return 0x1f;
  }
  if (param_3 == -1) {
    iVar5 = 0;
    if (0 < *param_1) {
      lVar4 = 0;
      do {
        plVar2 = *(int64_t **)(lVar4 + *(int64_t *)(param_1 + 6));
        if ((((*(uint *)((int64_t)plVar2 + 0x3c) & 0x8110) == 0) &&
            ((((*(uint *)((int64_t)plVar2 + 0x3c) >> 0xc & 1) == 0 || (param_4 != '\0')) &&
             (iVar3 = (**(code **)(*plVar2 + 0xb0))(plVar2,acStackX_10,1), iVar3 == 0)))) &&
           (acStackX_10[0] == '\0')) {
          *(uint *)((int64_t)plVar2 + 0x3c) =
               *(uint *)((int64_t)plVar2 + 0x3c) & 0xffffef7f | 0x110;
          *param_2 = (int64_t)plVar2;
          return 0;
        }
        iVar5 = iVar5 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar5 < *param_1);
    }
  }
  else if ((-1 < param_3) && (param_3 < *param_1)) {
    lVar4 = (int64_t)param_3 * 8;
    puVar1 = (uint *)(*(int64_t *)(*(int64_t *)(param_1 + 6) + lVar4) + 0x3c);
    *puVar1 = *puVar1 | 0x10;
    puVar1 = (uint *)(*(int64_t *)(*(int64_t *)(param_1 + 6) + lVar4) + 0x3c);
    *puVar1 = *puVar1 | 0x100;
    puVar1 = (uint *)(*(int64_t *)(*(int64_t *)(param_1 + 6) + lVar4) + 0x3c);
    *puVar1 = *puVar1 & 0xffffff7f;
    *param_2 = *(int64_t *)(lVar4 + *(int64_t *)(param_1 + 6));
    return 0;
  }
  if (*param_2 != 0) {
    puVar1 = (uint *)(*param_2 + 0x3c);
    *puVar1 = *puVar1 & 0xffffffef;
    *(uint *)(*param_2 + 0x3c) = *(uint *)(*param_2 + 0x3c) & 0xfffffeff;
    *(uint *)(*param_2 + 0x3c) = *(uint *)(*param_2 + 0x3c) | 0x80;
  }
  return 2;
}



uint64_t FUN_180786056(int *param_1,uint64_t param_2,int param_3)

{
  uint *puVar1;
  int64_t *plVar2;
  int iVar3;
  int *unaff_RBP;
  int64_t lVar4;
  int iVar5;
  int64_t *unaff_R14;
  char unaff_R15B;
  char in_stack_00000048;
  
  if (param_3 == -1) {
    iVar5 = 0;
    if (0 < *param_1) {
      lVar4 = 0;
      do {
        plVar2 = *(int64_t **)(lVar4 + *(int64_t *)(unaff_RBP + 6));
        if ((((*(uint *)((int64_t)plVar2 + 0x3c) & 0x8110) == 0) &&
            ((((*(uint *)((int64_t)plVar2 + 0x3c) >> 0xc & 1) == 0 || (unaff_R15B != '\0')) &&
             (iVar3 = (**(code **)(*plVar2 + 0xb0))(plVar2,&stack0x00000048,1), iVar3 == 0)))) &&
           (in_stack_00000048 == '\0')) {
          *(uint *)((int64_t)plVar2 + 0x3c) =
               *(uint *)((int64_t)plVar2 + 0x3c) & 0xffffef7f | 0x110;
          *unaff_R14 = (int64_t)plVar2;
          return 0;
        }
        iVar5 = iVar5 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar5 < *unaff_RBP);
    }
  }
  else if ((-1 < param_3) && (param_3 < *param_1)) {
    lVar4 = (int64_t)param_3 * 8;
    puVar1 = (uint *)(*(int64_t *)(*(int64_t *)(param_1 + 6) + lVar4) + 0x3c);
    *puVar1 = *puVar1 | 0x10;
    puVar1 = (uint *)(*(int64_t *)(*(int64_t *)(unaff_RBP + 6) + lVar4) + 0x3c);
    *puVar1 = *puVar1 | 0x100;
    puVar1 = (uint *)(*(int64_t *)(*(int64_t *)(unaff_RBP + 6) + lVar4) + 0x3c);
    *puVar1 = *puVar1 & 0xffffff7f;
    *unaff_R14 = *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 6));
    return 0;
  }
  if (*unaff_R14 != 0) {
    puVar1 = (uint *)(*unaff_R14 + 0x3c);
    *puVar1 = *puVar1 & 0xffffffef;
    *(uint *)(*unaff_R14 + 0x3c) = *(uint *)(*unaff_R14 + 0x3c) & 0xfffffeff;
    *(uint *)(*unaff_R14 + 0x3c) = *(uint *)(*unaff_R14 + 0x3c) | 0x80;
  }
  return 2;
}



uint64_t FUN_180786104(void)

{
  int64_t unaff_RBX;
  int64_t *unaff_R14;
  
  *(uint *)(unaff_RBX + 0x3c) = *(uint *)(unaff_RBX + 0x3c) & 0xffffef7f | 0x110;
  *unaff_R14 = unaff_RBX;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807861b0(int *param_1,uint64_t param_2,uint64_t param_3,int param_4)

{
  uint64_t uVar1;
  int64_t lVar2;
  
  if (param_4 < 0) {
    uVar1 = 0x1f;
  }
  else {
    if (param_4 != 0) {
      lVar2 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_4 * 8,&unknown_var_9840_ptr,0x38,
                            0);
      *(int64_t *)(param_1 + 6) = lVar2;
      if (lVar2 == 0) {
        return 0x26;
      }
    }
    *param_1 = param_4;
    uVar1 = 0;
    *(uint64_t *)(param_1 + 2) = param_2;
    *(uint64_t *)(param_1 + 4) = param_3;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180786250(int *param_1)
void FUN_180786250(int *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  
  lVar1 = *(int64_t *)(param_1 + 6);
  if (lVar1 == 0) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&unknown_var_9840_ptr,99,1);
  }
  iVar3 = 0;
  if (0 < *param_1) {
    lVar4 = 0;
    lVar2 = lVar1;
    do {
      if (*(int64_t **)(lVar4 + lVar2) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(lVar4 + lVar2) + 0x18))();
        lVar1 = *(int64_t *)(param_1 + 6);
        lVar2 = lVar1;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *param_1);
  }
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_9840_ptr,0x60,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180786262(int *param_1,int64_t param_2)
void FUN_180786262(int *param_1,int64_t param_2)

{
  int64_t lVar1;
  int iVar2;
  int *unaff_RSI;
  int64_t lVar3;
  
  iVar2 = 0;
  if (0 < *param_1) {
    lVar3 = 0;
    lVar1 = param_2;
    do {
      if (*(int64_t **)(lVar3 + lVar1) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(lVar3 + lVar1) + 0x18))();
        param_2 = *(int64_t *)(unaff_RSI + 6);
        lVar1 = param_2;
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *unaff_RSI);
  }
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&unknown_var_9840_ptr,0x60,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18078626d(uint64_t param_1,int64_t param_2)
void FUN_18078626d(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  uint unaff_EBX;
  int *unaff_RSI;
  uint64_t uVar2;
  
  uVar2 = (uint64_t)unaff_EBX;
  lVar1 = param_2;
  do {
    if (*(int64_t **)(uVar2 + lVar1) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(uVar2 + lVar1) + 0x18))();
      param_2 = *(int64_t *)(unaff_RSI + 6);
      lVar1 = param_2;
    }
    unaff_EBX = unaff_EBX + 1;
    uVar2 = uVar2 + 8;
  } while ((int)unaff_EBX < *unaff_RSI);
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&unknown_var_9840_ptr,0x60,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18078629f(uint64_t param_1,uint64_t param_2)
void FUN_18078629f(uint64_t param_1,uint64_t param_2)

{
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&unknown_var_9840_ptr,0x60,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807862c9(void)
void FUN_1807862c9(void)

{
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



uint64_t * FUN_180786350(uint64_t *param_1)

{
  *param_1 = &unknown_var_9960_ptr;
  func_0x000180767970(param_1 + 0xe);
  func_0x000180767970(param_1 + 0x38);
  *(int8_t *)(param_1 + 0x62) = 0;
  param_1[9] = 0;
  *(int32_t *)((int64_t)param_1 + 0x314) = 0;
  *(int32_t *)((int64_t)param_1 + 0x5c) = 0;
  *(int32_t *)(param_1 + 99) = 1;
  param_1[10] = 2;
  return param_1;
}





