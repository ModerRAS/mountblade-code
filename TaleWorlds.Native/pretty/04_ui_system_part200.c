#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 04_ui_system_part200.c - 14 个函数
// 函数: void SystemCore_851dd(int param_1,uint64_t param_2)
void SystemCore_851dd(int param_1,uint64_t param_2)
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
  int64_t local_var_68;
  uint64_t local_var_70;
  uint64_t local_var_78;
  uint64_t extraout_XMM0_Qb;
  if (param_1 == 0) {
    if (((int)param_2 == 2) || ((int)param_2 == 3)) {
      unaff_R15 = CONCAT44(unaff_000000a4,unaff_R12D);
    }
    else {
      Function_cd24674d(*(uint64_t *)(unaff_RBX + 0xa8),param_2,&local_buffer_00000068);
      if ((float)*(int *)(local_var_68 + 4) <= 1.0) {
        fVar16 = 1.0;
      }
      else {
        Function_cd24674d(*(uint64_t *)(unaff_RBX + 0xa8),*(int32_t *)(unaff_RBX + 0x24c),
                            &local_buffer_00000068);
        fVar16 = SQRT((float)*(int *)(local_var_68 + 4));
      }
      SystemCore_d47c0(*(int32_t *)(unaff_RBX + 0x244),1,0xc,unaff_RBP + -0x70);
      Function_cd24674d(*(uint64_t *)(unaff_RBX + 0xa8),*(int32_t *)(unaff_RBX + 0x24c),
                          &local_buffer_00000068);
      Function_75f7bba3(local_var_68,1.0 / fVar16,0x3f800000);
    }
  }
  else if (param_1 == 1) {
    Function_cd24674d(*(uint64_t *)(unaff_RBX + 0xa8),param_2,&local_buffer_00000068);
    if (-1 < *(int *)(local_var_68 + 0x98)) {
      unaff_XMM7_Da = 0.70710677;
    }
    SystemCore_d47c0(*(int32_t *)(unaff_RBX + 0x244),2,0xc);
    Function_cd24674d(*(uint64_t *)(unaff_RBX + 0xa8),*(int32_t *)(unaff_RBX + 0x24c),
                        &local_buffer_00000068);
    SystemCore_d65f0(local_var_68,*(int32_t *)(unaff_RBX + 0x280),unaff_XMM7_Da,0x3f800000,0xc)
    ;
  }
  else {
    Function_cd24674d(*(uint64_t *)(unaff_RBX + 0xa8),param_2,&local_buffer_00000068);
    auVar14._0_8_ = SystemCore_d47c0(0xc,0xc,0xc);
    auVar14._8_8_ = extraout_XMM0_Qb;
    if (unaff_XMM7_Da < *(float *)(unaff_RBX + 0x2b8)) {
      iVar7 = *(int *)(unaff_RBX + 0x2c8);
      if (iVar7 == 1) {
        uVar13 = SystemCore_82f30(auVar14._0_8_,*(int32_t *)(unaff_RBX + 0x2d8));
        Function_65c5e898(uVar13,*(int32_t *)(unaff_RBX + 0x2dc));
        SystemCore_84b00();
      }
      else {
        fVar16 = 0.0;
        local_var_70 = 0;
        fVar17 = 0.0;
        local_var_78 = 0;
        *(uint64_t *)(unaff_RBP + -0x80) = 0;
        *(uint64_t *)(unaff_RBP + -0x78) = 0;
        if (0 < iVar7) {
          pfVar6 = (float *)&local_buffer_00000070;
          puVar8 = (int32_t *)(unaff_RBX + 0x2d8);
          iVar7 = unaff_R12D;
          do {
            fVar12 = (float)puVar8[-3];
            if (unaff_XMM7_Da < fVar12) {
              auVar14._0_8_ = SystemCore_82f30(auVar14._0_8_,*puVar8);
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
              pfVar6 = (float *)&local_buffer_00000070;
              lVar9 = unaff_RBX + 0x2d4;
              do {
                if (*pfVar6 != unaff_XMM7_Da) {
                  Function_65c5e898(auVar14._0_8_,*(int32_t *)(lVar9 + 8));
                  auVar14._0_8_ = SystemCore_84b00();
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
        SystemCore_84b00();
      }
      if ((fVar12 * fVar17 != unaff_XMM7_Da) && (bVar3)) {
        SystemCore_84b00();
      }
      if ((fVar12 * fVar16 != unaff_XMM7_Da) && (bVar2)) {
        SystemCore_d6d40(*(uint64_t *)(unaff_RBX + 0x270),*(uint64_t *)(unaff_RBX + 600),
                      *(int32_t *)(unaff_RBX + 0x284),*(int32_t *)(unaff_RBX + 0x288),
                      *(int32_t *)(unaff_RBX + 0x28c));
      }
      if ((((1.0 - fVar16) * fVar12 != unaff_XMM7_Da) && (bVar3)) && (bVar2)) {
        SystemCore_d6d40(*(uint64_t *)(unaff_RBX + 0x270),*(uint64_t *)(unaff_RBX + 0x268),
                      *(int32_t *)(unaff_RBX + 0x284),*(int32_t *)(unaff_RBX + 0x288),
                      *(int32_t *)(unaff_RBX + 0x28c));
      }
    }
  }
  SystemCore_65da0(*(uint64_t *)(unaff_RBX + 0x218),unaff_R15,*(int32_t *)(unaff_RBX + 0x248),
                *(int32_t *)(unaff_RBX + 0x244),0xc);
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1d0) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_85943(void)
void SystemCore_85943(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1d0) ^ (uint64_t)&local_buffer_00000000);
}
uint64_t * SystemCore_85980(uint64_t *param_1)
{
  uint64_t *puVar1;
  Function_9ac7c927();
  param_1[2] = &processed_var_9696_ptr;
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
uint64_t * SystemCore_85a20(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_8408_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x180);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_85a50(int64_t param_1)
{
  uint64_t uVar1;
  if (*(char *)(param_1 + 0x198) != '\0') {
    uVar1 = SystemCore_67ad0(param_1 + 0x10);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*(int64_t *)(param_1 + 0x180) != 0) {
      uVar1 = SystemCore_DataHandler(*(int64_t *)(param_1 + 0x180),0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      *(uint64_t *)(param_1 + 0x180) = 0;
    }
    if (*(int64_t *)(param_1 + 0x160) != 0) {
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x160),
                    &processed_var_9712_ptr,0x75,1);
    }
    uVar1 = SystemCore_DataHandler(*(uint64_t *)(param_1 + 400),0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *(uint64_t *)(param_1 + 400) = 0;
    *(char *)(param_1 + 0x198) = (char)uVar1;
  }
  return 0;
}
// 函数: void SystemCore_85b10(int64_t param_1,int64_t param_2,int32_t *param_3)
void SystemCore_85b10(int64_t param_1,int64_t param_2,int32_t *param_3)
{
  int iVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lStackX_20;
  int64_t alStack_18 [2];
  lStackX_20 = 0;
  iVar1 = SystemCore_58ed0(param_2,&lStackX_20,0);
  if (iVar1 == 0) {
    uVar2 = *(uint64_t *)(param_1 + 0x170);
    SystemStateManager(uVar2);
    plVar3 = (int64_t *)
             ((int64_t)*(int *)(lStackX_20 + 0x1d0) * 0x40 + *(int64_t *)(param_1 + 0x150));
  }
  else {
    iVar1 = SystemCore_54f10(param_2,alStack_18,0);
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
// 函数: void SystemCore_85c10(int64_t param_1,uint64_t *param_2,uint64_t *param_3,float *param_4,
void SystemCore_85c10(int64_t param_1,uint64_t *param_2,uint64_t *param_3,float *param_4,
                  float *param_5)
{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int8_t stack_array_b8 [32];
  uint64_t *plocal_var_98;
  uint64_t local_var_88;
  int32_t local_var_80;
  uint64_t local_var_7c;
  int32_t local_var_74;
  float fStack_70;
  float fStack_6c;
  uint64_t local_var_68;
  uint64_t local_var_60;
  local_var_60 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  if (*(int64_t *)(param_1 + 0x1a0) != 0) {
    uVar1 = *(uint64_t *)(param_1 + 400);
    SystemStateManager(uVar1);
    lVar2 = *(int64_t *)(param_1 + 0x1b0);
    *(uint64_t *)(param_1 + 0x1b0) = 0;
    while (lVar2 != 0) {
      lVar3 = *(int64_t *)(lVar2 + 0x130);
      *(uint64_t *)(lVar2 + 0x130) = 0;
      *(int8_t *)(lVar2 + 0x138) = 0;
      SystemCore_66590();
      lVar2 = lVar3;
    }
    local_var_88 = *param_2;
    local_var_80 = *(int32_t *)(param_2 + 1);
    local_var_7c = *param_3;
    local_var_74 = *(int32_t *)(param_3 + 1);
    fStack_70 = 1.0;
    fStack_6c = 1.0;
    local_var_68 = 0;
    plocal_var_98 = param_3;
    SystemCore_e4630(*(uint64_t *)(param_1 + 0x1a0),&processed_var_9216_ptr,&local_var_88,param_2);
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
  SystemSecurityChecker(local_var_60 ^ (uint64_t)stack_array_b8);
}
// 函数: void SystemCore_85c52(int64_t param_1)
void SystemCore_85c52(int64_t param_1)
{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  float *unaff_RSI;
  uint64_t *unaff_R12;
  uint64_t *unaff_R13;
  float *unaff_R14;
  uint64_t local_var_30;
  int32_t local_var_38;
  uint64_t local_buffer_3c;
  int32_t local_buffer_44;
  float local_var_48;
  float fStack000000000000004c;
  uint64_t local_buffer_50;
  uVar1 = *(uint64_t *)(param_1 + 400);
  SystemStateManager(uVar1);
  lVar2 = *(int64_t *)(unaff_RBP + 0x1b0);
  *(uint64_t *)(unaff_RBP + 0x1b0) = 0;
  while (lVar2 != 0) {
    lVar3 = *(int64_t *)(lVar2 + 0x130);
    *(uint64_t *)(lVar2 + 0x130) = 0;
    *(int8_t *)(lVar2 + 0x138) = 0;
    SystemCore_66590();
    lVar2 = lVar3;
  }
  local_var_30 = *unaff_R13;
  local_var_38 = *(int32_t *)(unaff_R13 + 1);
  local_buffer_3c = *unaff_R12;
  local_buffer_44 = *(int32_t *)(unaff_R12 + 1);
  local_var_48 = 1.0;
  fStack000000000000004c = 1.0;
  local_buffer_50 = 0;
  SystemCore_e4630(*(uint64_t *)(unaff_RBP + 0x1a0),&processed_var_9216_ptr,&local_buffer_00000030);
  if (unaff_R14 != (float *)0x0) {
    *unaff_R14 = 1.0 - local_var_48;
  }
  if (unaff_RSI != (float *)0x0) {
    *unaff_RSI = 1.0 - fStack000000000000004c;
  }
// WARNING: Subroutine does not return
  SystemConfigManager(uVar1);
}
// 函数: void SystemCore_85c80(int64_t param_1)
void SystemCore_85c80(int64_t param_1)
{
  int64_t lVar1;
  int64_t unaff_RBP;
  float *unaff_RSI;
  int8_t unaff_DIL;
  uint8_t unaff_00000039;
  uint64_t *unaff_R12;
  uint64_t *unaff_R13;
  float *unaff_R14;
  uint64_t local_var_30;
  int32_t local_var_38;
  uint64_t local_buffer_3c;
  int32_t local_buffer_44;
  float local_var_48;
  float fStack000000000000004c;
  uint64_t local_buffer_50;
  do {
    lVar1 = *(int64_t *)(param_1 + 0x130);
    *(uint64_t *)(param_1 + 0x130) = CONCAT71(unaff_00000039,unaff_DIL);
    *(int8_t *)(param_1 + 0x138) = unaff_DIL;
    SystemCore_66590();
    param_1 = lVar1;
  } while (lVar1 != 0);
  local_var_30 = *unaff_R13;
  local_var_38 = *(int32_t *)(unaff_R13 + 1);
  local_buffer_3c = *unaff_R12;
  local_buffer_44 = *(int32_t *)(unaff_R12 + 1);
  local_var_48 = 1.0;
  fStack000000000000004c = 1.0;
  SystemCore_e4630(*(uint64_t *)(unaff_RBP + 0x1a0),&processed_var_9216_ptr,&local_buffer_00000030);
  if (unaff_R14 != (float *)0x0) {
    *unaff_R14 = 1.0 - local_var_48;
  }
  if (unaff_RSI != (float *)0x0) {
    *unaff_RSI = 1.0 - fStack000000000000004c;
  }
// WARNING: Subroutine does not return
  SystemConfigManager();
}
// 函数: void SystemCore_85cba(void)
void SystemCore_85cba(void)
{
  int64_t unaff_RBP;
  float *unaff_RSI;
  uint64_t *unaff_R12;
  uint64_t *unaff_R13;
  float *unaff_R14;
  uint64_t local_buffer_30;
  int32_t local_buffer_38;
  uint64_t local_buffer_3c;
  int32_t local_buffer_44;
  float fStack0000000000000048;
  float fStack000000000000004c;
  local_buffer_30 = *unaff_R13;
  local_buffer_38 = *(int32_t *)(unaff_R13 + 1);
  local_buffer_3c = *unaff_R12;
  local_buffer_44 = *(int32_t *)(unaff_R12 + 1);
  fStack0000000000000048 = 1.0;
  fStack000000000000004c = 1.0;
  SystemCore_e4630(*(uint64_t *)(unaff_RBP + 0x1a0),&processed_var_9216_ptr,&local_buffer_00000030);
  if (unaff_R14 != (float *)0x0) {
    *unaff_R14 = 1.0 - fStack0000000000000048;
  }
  if (unaff_RSI != (float *)0x0) {
    *unaff_RSI = 1.0 - fStack000000000000004c;
  }
// WARNING: Subroutine does not return
  SystemConfigManager();
}
// 函数: void SystemCore_85d56(void)
void SystemCore_85d56(void)
{
  int32_t *unaff_RSI;
  int32_t *in_R9;
  int64_t unaff_R14;
  uint64_t local_var_58;
  if (unaff_R14 != 0) {
    *in_R9 = 0;
  }
  if (unaff_RSI != (int32_t *)0x0) {
    *unaff_RSI = 0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)&local_buffer_00000000);
}
int64_t SystemCore_85db0(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  int64_t lStackX_8;
  int64_t alStackX_18 [2];
  if (*(int64_t *)(param_1 + 0x150) != 0) {
    iVar1 = SystemCore_58ed0(param_2,&lStackX_8,0);
    if (iVar1 == 0) {
      alStackX_18[0] = (int64_t)*(int *)(lStackX_8 + 0x1d0) * 0x40 + *(int64_t *)(param_1 + 0x150)
      ;
    }
    else {
      iVar1 = SystemCore_54f10(param_2,alStackX_18,0);
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
// 函数: void SystemCore_85e40(int64_t param_1)
void SystemCore_85e40(int64_t param_1)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int8_t stack_array_58 [72];
  uint64_t local_var_10;
  local_var_10 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_58;
  SystemCore_72cd0(**(int64_t **)(param_1 + 0x178) + 0x125f8);
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
int32_t SystemCore_86030(int *param_1,int64_t *param_2,int param_3,char param_4)
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
uint64_t SystemCore_86056(int *param_1,uint64_t param_2,int param_3)
{
  uint *puVar1;
  int64_t *plVar2;
  int iVar3;
  int *unaff_RBP;
  int64_t lVar4;
  int iVar5;
  int64_t *unaff_R14;
  char unaff_R15B;
  char local_var_48;
  if (param_3 == -1) {
    iVar5 = 0;
    if (0 < *param_1) {
      lVar4 = 0;
      do {
        plVar2 = *(int64_t **)(lVar4 + *(int64_t *)(unaff_RBP + 6));
        if ((((*(uint *)((int64_t)plVar2 + 0x3c) & 0x8110) == 0) &&
            ((((*(uint *)((int64_t)plVar2 + 0x3c) >> 0xc & 1) == 0 || (unaff_R15B != '\0')) &&
             (iVar3 = (**(code **)(*plVar2 + 0xb0))(plVar2,&local_buffer_00000048,1), iVar3 == 0)))) &&
           (local_var_48 == '\0')) {
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
uint64_t SystemCore_86104(void)
{
  int64_t unaff_RBX;
  int64_t *unaff_R14;
  *(uint *)(unaff_RBX + 0x3c) = *(uint *)(unaff_RBX + 0x3c) & 0xffffef7f | 0x110;
  *unaff_R14 = unaff_RBX;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_861b0(int *param_1,uint64_t param_2,uint64_t param_3,int param_4)
{
  uint64_t uVar1;
  int64_t lVar2;
  if (param_4 < 0) {
    uVar1 = 0x1f;
  }
  else {
    if (param_4 != 0) {
      lVar2 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_4 * 8,&processed_var_9840_ptr,0x38,
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
// 函数: void SystemCore_86250(int *param_1)
void SystemCore_86250(int *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  lVar1 = *(int64_t *)(param_1 + 6);
  if (lVar1 == 0) {
// WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&processed_var_9840_ptr,99,1);
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
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&processed_var_9840_ptr,0x60,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_86262(int *param_1,int64_t param_2)
void SystemCore_86262(int *param_1,int64_t param_2)
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
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&processed_var_9840_ptr,0x60,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_8626d(uint64_t param_1,int64_t param_2)
void SystemCore_8626d(uint64_t param_1,int64_t param_2)
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
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&processed_var_9840_ptr,0x60,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_8629f(uint64_t param_1,uint64_t param_2)
void SystemCore_8629f(uint64_t param_1,uint64_t param_2)
{
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&processed_var_9840_ptr,0x60,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_862c9(void)
void SystemCore_862c9(void)
{
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}
uint64_t * SystemCore_86350(uint64_t *param_1)
{
  *param_1 = &processed_var_9960_ptr;
  Function_9ac7c927(param_1 + 0xe);
  Function_9ac7c927(param_1 + 0x38);
  *(int8_t *)(param_1 + 0x62) = 0;
  param_1[9] = 0;
  *(int32_t *)((int64_t)param_1 + 0x314) = 0;
  *(int32_t *)((int64_t)param_1 + 0x5c) = 0;
  *(int32_t *)(param_1 + 99) = 1;
  param_1[10] = 2;
  return param_1;
}