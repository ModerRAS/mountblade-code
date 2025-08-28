/* 函数别名定义: MathTrigonometryFunction */
#define MathTrigonometryFunction MathTrigonometryFunction
#include "RenderingAdvancedManager_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part260.c - 9 个函数
// 函数: void function_8168c0(int64_t param_1,uint param_2,char param_3)
void function_8168c0(int64_t param_1,uint param_2,char param_3)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  char cVar7;
  uint uVar8;
  uint64_t uVar9;
  int8_t stack_array_e8 [32];
  int *piStack_c8;
  char cStack_b8;
  char cStack_b7;
  int iStack_b4;
  uint local_var_b0;
  uint local_var_ac;
  int32_t local_var_a8;
  uint local_var_a4;
  int iStack_a0;
  uint local_var_9c;
  int8_t stack_array_98 [8];
  int8_t stack_array_90 [4];
  uint local_var_8c;
  int16_t stack_array_88 [10];
  int iStack_74;
  int8_t stack_array_70 [28];
  int iStack_54;
  int32_t local_var_44;
  int32_t local_var_40;
  uint64_t local_var_30;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_e8;
  cVar7 = '\0';
  cStack_b7 = '\0';
  cStack_b8 = param_3;
  local_var_b0 = param_2;
  iVar2 = Function_49365015(*(uint64_t *)(param_1 + 0x170),&iStack_b4);
  iVar3 = iStack_b4;
  if (iVar2 == 0) {
    iStack_b4 = iStack_b4 + -8;
    local_var_ac = 4;
    iVar3 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),iVar3,0);
    uVar6 = 0;
    if (iVar3 == 0) {
      while( true ) {
        piStack_c8 = (int *)0x0;
        iVar3 = SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 0x170),stack_array_90,1);
        if (iVar3 != 0) break;
        iVar3 = Function_3be2b034(stack_array_90,&processed_var_9588_ptr,4);
        if (iVar3 == 0) {
          if (param_3 == '\0') {
            uVar8 = local_var_8c;
            if (local_var_8c < 0x28) {
              uVar8 = 0x28;
            }
            piStack_c8 = (int *)((uint64_t)piStack_c8 & 0xffffffff00000000);
            lVar4 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar8,&system_state_ptr,0x48)
            ;
            *(int64_t *)(param_1 + 0x230) = lVar4;
            if (lVar4 == 0) break;
            piStack_c8 = (int *)0x0;
            iVar3 = SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 0x170),lVar4,1,local_var_8c);
joined_r0x000180816c9e:
            if (iVar3 != 0) break;
          }
        }
        else {
          iVar3 = Function_3be2b034(stack_array_90,&processed_var_840_ptr,4);
          if (iVar3 == 0) {
            piStack_c8 = (int *)0x0;
            SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 0x170),param_1 + 0x1e0,4,1);
            if (*(int *)(param_1 + 0x1e0) != 0) {
              if (*(int64_t *)(param_1 + 0x1e8) != 0) {
                piStack_c8 = (int *)CONCAT71(piStack_c8._1_7_,1);
// WARNING: Subroutine does not return
                SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x1e8)
                              ,&system_state_ptr,0x77);
              }
              piStack_c8 = (int *)((uint64_t)piStack_c8 & 0xffffffff00000000);
              lVar4 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                    *(int *)(param_1 + 0x1e0) * 0x13c,&system_state_ptr,0x7a);
              *(int64_t *)(param_1 + 0x1e8) = lVar4;
              if (lVar4 == 0) break;
              uVar5 = uVar6;
              uVar9 = uVar6;
              param_2 = local_var_b0;
              if (0 < *(int *)(param_1 + 0x1e0)) {
                do {
                  lVar4 = *(int64_t *)(param_1 + 0x1e8) + uVar5;
                  piStack_c8 = (int *)0x0;
                  iVar3 = SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 0x170),stack_array_88,1);
                  param_3 = cStack_b8;
                  cVar7 = cStack_b7;
                  param_2 = local_var_b0;
                  if (iVar3 != 0) break;
                  *(int64_t *)(lVar4 + 0x20) = lVar4 + 0x3c;
                  iVar3 = iStack_74;
                  if (iStack_74 < 0) {
                    iVar3 = 0;
                  }
                  uVar8 = (int)uVar9 + 1;
                  *(int *)(lVar4 + 0x30) = iVar3;
                  *(int16_t *)(lVar4 + 0x36) = stack_array_88[0];
                  uVar5 = uVar5 + 0x13c;
                  uVar9 = (uint64_t)uVar8;
                } while ((int)uVar8 < *(int *)(param_1 + 0x1e0));
              }
            }
          }
          else {
            iVar3 = Function_3be2b034(stack_array_90,&processed_var_848_ptr);
            if (iVar3 == 0) {
              piStack_c8 = (int *)0x0;
              iVar3 = SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 0x170),&local_var_a8,4,1);
              if (iVar3 != 0) break;
              *(int32_t *)(*(int64_t *)(param_1 + 8) + 0x18) = local_var_a8;
            }
            else {
              iVar3 = Function_3be2b034(stack_array_90,&processed_var_9516_ptr);
              if (iVar3 == 0) {
                piStack_c8 = (int *)0x0;
                iVar3 = SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 0x170),stack_array_98,1,4);
                if (iVar3 == 0) {
                  iVar3 = function_8168c0(param_1,local_var_8c,1);
                  goto joined_r0x000180816c9e;
                }
                break;
              }
              iVar3 = Function_3be2b034(stack_array_90,&processed_var_856_ptr,4);
              if (iVar3 == 0) {
                if (*(int64_t *)(param_1 + 0x1e8) != 0) {
                  piStack_c8 = (int *)0x0;
                  iVar3 = SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 0x170),&local_var_a4,4,1);
                  if (iVar3 != 0) break;
                  if (0 < *(int *)(param_1 + 0x1e0)) {
                    lVar4 = *(int64_t *)(param_1 + 0x1e8);
                    uVar5 = uVar6;
                    do {
                      if (*(ushort *)(lVar4 + 0x36) == local_var_a4) {
                        piStack_c8 = (int *)0x0;
                        SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 0x170),*(uint64_t *)(lVar4 + 0x20)
                                      ,1,local_var_8c - 4);
                        break;
                      }
                      uVar8 = (int)uVar5 + 1;
                      uVar5 = (uint64_t)uVar8;
                      lVar4 = lVar4 + 0x13c;
                    } while ((int)uVar8 < *(int *)(param_1 + 0x1e0));
                  }
                }
              }
              else {
                iVar3 = Function_3be2b034(stack_array_90,&processed_var_864_ptr,4);
                if (iVar3 == 0) {
                  piStack_c8 = &iStack_a0;
                  iVar3 = SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 0x170),stack_array_70,1);
                  if (iVar3 != 0) break;
                  if ((iStack_a0 == 0x3c) && (iStack_54 != 0)) {
                    *(int32_t *)(param_1 + 0x114) = local_var_44;
                    *(int32_t *)(param_1 + 0x118) = local_var_40;
                  }
                }
                else {
                  iVar3 = Function_3be2b034(stack_array_90,&ui_system_data_1144_ptr,4);
                  if (iVar3 == 0) {
                    if (param_3 == '\0') {
                      piVar1 = (int *)(param_1 + 0x110);
                      if (*piVar1 == -1) {
                        *(uint *)(*(int64_t *)(param_1 + 8) + 0x14) = local_var_8c;
                        iVar3 = Function_49365015(*(uint64_t *)(param_1 + 0x170),piVar1);
                        if ((iVar3 != 0) ||
                           (iVar3 = (**(code **)(**(int64_t **)(param_1 + 0x170) + 0x10))
                                              (*(int64_t **)(param_1 + 0x170),&local_var_9c),
                           iVar3 != 0)) break;
                        if (local_var_9c != 0xffffffff) {
                          if (local_var_9c <
                              (uint)(*(int *)(*(int64_t *)(param_1 + 8) + 0x14) + *piVar1)) {
                            *(uint *)(*(int64_t *)(param_1 + 8) + 0x14) = local_var_9c - *piVar1;
                          }
                        }
                      }
                      if ((*(uint *)(*(int64_t *)(param_1 + 0x170) + 0x194) & 1) != 0) {
                        iVar3 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),local_var_8c,1);
                        param_3 = cStack_b8;
                        goto joined_r0x000180816c9e;
                      }
                      cStack_b7 = '\x01';
                      param_3 = cStack_b8;
                      cVar7 = '\x01';
                    }
                  }
                  else {
                    MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),local_var_8c,1);
                  }
                }
              }
            }
          }
        }
        local_var_ac = local_var_ac + 8 + local_var_8c;
        iStack_b4 = iStack_b4 + 8 + local_var_8c;
        if ((local_var_8c & 1) != 0) {
          local_var_ac = local_var_ac + 1;
          iStack_b4 = iStack_b4 + 1;
        }
        if ((((param_2 <= local_var_ac) || (local_var_ac == 0)) || (cVar7 != '\0')) ||
           (iVar3 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),iStack_b4 + 8,0), iVar3 != 0))
        break;
      }
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_30 ^ (uint64_t)stack_array_e8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_816928(void)
void function_816928(void)
{
  int *piVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  char unaff_DIL;
  uint uVar4;
  uint64_t uVar5;
  char unaff_R14B;
  uint unaff_R15D;
  uint uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  *(int32_t *)(unaff_RBP + -0x4d) = 4;
  iVar2 = MathTrigonometryFunction0();
  uVar5 = 0;
  if (iVar2 == 0) {
    while( true ) {
      uVar8 = 0;
      iVar2 = SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x31,1,8,0);
      if (iVar2 != 0) break;
      iVar2 = Function_3be2b034(unaff_RBP + -0x31,&processed_var_9588_ptr,4);
      if (iVar2 == 0) {
        if (unaff_DIL == '\0') {
          uVar6 = *(uint *)(unaff_RBP + -0x2d);
          if (uVar6 < 0x28) {
            uVar6 = 0x28;
          }
          lVar3 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar6,&system_state_ptr,0x48,
                                uVar8 & 0xffffffff00000000);
          *(int64_t *)(unaff_RBX + 0x230) = lVar3;
          if (lVar3 == 0) break;
          iVar2 = SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),lVar3,1,
                                *(int32_t *)(unaff_RBP + -0x2d),0);
joined_r0x000180816c9e:
          if (iVar2 != 0) break;
        }
      }
      else {
        iVar2 = Function_3be2b034(unaff_RBP + -0x31,&processed_var_840_ptr,4);
        if (iVar2 == 0) {
          uVar8 = 0;
          SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBX + 0x1e0,4,1,0);
          if (*(int *)(unaff_RBX + 0x1e0) != 0) {
            if (*(int64_t *)(unaff_RBX + 0x1e8) != 0) {
// WARNING: Subroutine does not return
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RBX + 0x1e8)
                            ,&system_state_ptr,0x77,1);
            }
            lVar3 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                  *(int *)(unaff_RBX + 0x1e0) * 0x13c,&system_state_ptr,0x7a,
                                  uVar8 & 0xffffffff00000000);
            *(int64_t *)(unaff_RBX + 0x1e8) = lVar3;
            if (lVar3 == 0) break;
            uVar8 = uVar5;
            uVar7 = uVar5;
            if (0 < *(int *)(unaff_RBX + 0x1e0)) {
              do {
                lVar3 = *(int64_t *)(unaff_RBX + 0x1e8) + uVar8;
                iVar2 = SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x29,1,0x18,0)
                ;
                if (iVar2 != 0) break;
                *(int64_t *)(lVar3 + 0x20) = lVar3 + 0x3c;
                iVar2 = *(int *)(unaff_RBP + -0x15);
                if (*(int *)(unaff_RBP + -0x15) < 0) {
                  iVar2 = 0;
                }
                uVar6 = (int)uVar7 + 1;
                *(int *)(lVar3 + 0x30) = iVar2;
                *(int16_t *)(lVar3 + 0x36) = *(int16_t *)(unaff_RBP + -0x29);
                uVar8 = uVar8 + 0x13c;
                uVar7 = (uint64_t)uVar6;
              } while ((int)uVar6 < *(int *)(unaff_RBX + 0x1e0));
              unaff_R14B = *(char *)(unaff_RBP + -0x58);
              unaff_DIL = *(char *)(unaff_RBP + -0x59);
            }
            unaff_R15D = *(uint *)(unaff_RBP + -0x51);
          }
        }
        else {
          iVar2 = Function_3be2b034(unaff_RBP + -0x31,&processed_var_848_ptr);
          if (iVar2 == 0) {
            iVar2 = SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x49,4,1,0);
            if (iVar2 != 0) break;
            *(int32_t *)(*(int64_t *)(unaff_RBX + 8) + 0x18) =
                 *(int32_t *)(unaff_RBP + -0x49);
          }
          else {
            iVar2 = Function_3be2b034(unaff_RBP + -0x31,&processed_var_9516_ptr);
            if (iVar2 == 0) {
              iVar2 = SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x39,1,4,0);
              if (iVar2 == 0) {
                iVar2 = function_8168c0();
                goto joined_r0x000180816c9e;
              }
              break;
            }
            iVar2 = Function_3be2b034(unaff_RBP + -0x31,&processed_var_856_ptr,4);
            if (iVar2 == 0) {
              if (*(int64_t *)(unaff_RBX + 0x1e8) != 0) {
                iVar2 = SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x45,4,1,0);
                if (iVar2 != 0) break;
                if (0 < *(int *)(unaff_RBX + 0x1e0)) {
                  lVar3 = *(int64_t *)(unaff_RBX + 0x1e8);
                  uVar8 = uVar5;
                  do {
                    if ((uint)*(ushort *)(lVar3 + 0x36) == *(uint *)(unaff_RBP + -0x45)) {
                      SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),*(uint64_t *)(lVar3 + 0x20)
                                    ,1,*(int *)(unaff_RBP + -0x2d) + -4,0);
                      break;
                    }
                    uVar6 = (int)uVar8 + 1;
                    uVar8 = (uint64_t)uVar6;
                    lVar3 = lVar3 + 0x13c;
                  } while ((int)uVar6 < *(int *)(unaff_RBX + 0x1e0));
                }
              }
            }
            else {
              iVar2 = Function_3be2b034(unaff_RBP + -0x31,&processed_var_864_ptr,4);
              if (iVar2 == 0) {
                iVar2 = SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x11,1,0x3c,
                                      unaff_RBP + -0x41);
                if (iVar2 != 0) break;
                if ((*(int *)(unaff_RBP + -0x41) == 0x3c) && (*(int *)(unaff_RBP + 0xb) != 0)) {
                  *(int32_t *)(unaff_RBX + 0x114) = *(int32_t *)(unaff_RBP + 0x1b);
                  *(int32_t *)(unaff_RBX + 0x118) = *(int32_t *)(unaff_RBP + 0x1f);
                }
              }
              else {
                iVar2 = Function_3be2b034(unaff_RBP + -0x31,&ui_system_data_1144_ptr,4);
                if (iVar2 == 0) {
                  if (unaff_DIL == '\0') {
                    piVar1 = (int *)(unaff_RBX + 0x110);
                    if (*piVar1 == -1) {
                      *(int32_t *)(*(int64_t *)(unaff_RBX + 8) + 0x14) =
                           *(int32_t *)(unaff_RBP + -0x2d);
                      iVar2 = Function_49365015(*(uint64_t *)(unaff_RBX + 0x170),piVar1);
                      if ((iVar2 != 0) ||
                         (iVar2 = (**(code **)(**(int64_t **)(unaff_RBX + 0x170) + 0x10))
                                            (*(int64_t **)(unaff_RBX + 0x170),unaff_RBP + -0x3d),
                         iVar2 != 0)) break;
                      uVar6 = *(uint *)(unaff_RBP + -0x3d);
                      if (uVar6 != 0xffffffff) {
                        if (uVar6 < (uint)(*(int *)(*(int64_t *)(unaff_RBX + 8) + 0x14) + *piVar1))
                        {
                          *(uint *)(*(int64_t *)(unaff_RBX + 8) + 0x14) = uVar6 - *piVar1;
                        }
                      }
                    }
                    if ((*(uint *)(*(int64_t *)(unaff_RBX + 0x170) + 0x194) & 1) == 0) {
                      unaff_DIL = *(char *)(unaff_RBP + -0x59);
                      unaff_R14B = '\x01';
                      *(int8_t *)(unaff_RBP + -0x58) = 1;
                    }
                    else {
                      iVar2 = MathTrigonometryFunction0(*(uint64_t *)(unaff_RBX + 0x170),
                                            *(int32_t *)(unaff_RBP + -0x2d),1);
                      if (iVar2 != 0) break;
                      unaff_DIL = *(char *)(unaff_RBP + -0x59);
                    }
                  }
                }
                else {
                  MathTrigonometryFunction0(*(uint64_t *)(unaff_RBX + 0x170),
                                *(int32_t *)(unaff_RBP + -0x2d),1);
                }
              }
            }
          }
        }
      }
      uVar6 = *(uint *)(unaff_RBP + -0x2d);
      uVar4 = *(int *)(unaff_RBP + -0x4d) + 8 + uVar6;
      iVar2 = *(int *)(unaff_RBP + -0x55) + 8 + uVar6;
      *(uint *)(unaff_RBP + -0x4d) = uVar4;
      *(int *)(unaff_RBP + -0x55) = iVar2;
      if ((uVar6 & 1) != 0) {
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 1;
        *(uint *)(unaff_RBP + -0x4d) = uVar4;
        *(int *)(unaff_RBP + -0x55) = iVar2;
      }
      if ((((unaff_R15D <= uVar4) || (uVar4 == 0)) || (unaff_R14B != '\0')) ||
         (iVar2 = MathTrigonometryFunction0(*(uint64_t *)(unaff_RBX + 0x170),iVar2 + 8,0), iVar2 != 0)) break;
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x2f) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_816a3c(void)
void function_816a3c(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x2f) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_816a57(void)
void function_816a57(void)
{
  int *piVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  char unaff_DIL;
  uint uVar5;
  int iVar6;
  uint64_t unaff_R13;
  char unaff_R14B;
  uint unaff_R15D;
  uint uVar7;
  uint64_t uVar8;
  int32_t uVar9;
  do {
    iVar2 = Function_3be2b034(unaff_RBP + -0x31,&processed_var_840_ptr,4);
    iVar6 = (int)unaff_R13;
    if (iVar2 == 0) {
      SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBX + 0x1e0,4,1);
      if (*(int *)(unaff_RBX + 0x1e0) != 0) {
        if (*(int64_t *)(unaff_RBX + 0x1e8) != 0) {
// WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RBX + 0x1e8),
                        &system_state_ptr,0x77,1);
        }
        lVar3 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                              *(int *)(unaff_RBX + 0x1e0) * 0x13c,&system_state_ptr,0x7a,
                              unaff_R13 & 0xffffffff);
        *(int64_t *)(unaff_RBX + 0x1e8) = lVar3;
        if (lVar3 == 0) goto LAB_180816a24;
        uVar8 = unaff_R13 & 0xffffffff;
        uVar4 = unaff_R13;
        if (iVar6 < *(int *)(unaff_RBX + 0x1e0)) {
          do {
            lVar3 = *(int64_t *)(unaff_RBX + 0x1e8) + uVar4;
            iVar2 = SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x29,1);
            if (iVar2 != 0) break;
            *(int64_t *)(lVar3 + 0x20) = lVar3 + 0x3c;
            iVar2 = *(int *)(unaff_RBP + -0x15);
            if (*(int *)(unaff_RBP + -0x15) < 0) {
              iVar2 = iVar6;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (uint64_t)uVar7;
            *(int *)(lVar3 + 0x30) = iVar2;
            *(int16_t *)(lVar3 + 0x36) = *(int16_t *)(unaff_RBP + -0x29);
            uVar4 = uVar4 + 0x13c;
          } while ((int)uVar7 < *(int *)(unaff_RBX + 0x1e0));
          unaff_R14B = *(char *)(unaff_RBP + -0x58);
          unaff_DIL = *(char *)(unaff_RBP + -0x59);
        }
        unaff_R15D = *(uint *)(unaff_RBP + -0x51);
      }
    }
    else {
      iVar2 = Function_3be2b034(unaff_RBP + -0x31,&processed_var_848_ptr);
      if (iVar2 == 0) {
        iVar2 = SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x49,4,1);
        if (iVar2 != 0) goto LAB_180816a24;
        *(int32_t *)(*(int64_t *)(unaff_RBX + 8) + 0x18) = *(int32_t *)(unaff_RBP + -0x49);
      }
      else {
        iVar2 = Function_3be2b034(unaff_RBP + -0x31,&processed_var_9516_ptr);
        if (iVar2 == 0) {
          iVar2 = SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x39,1,4);
          if (iVar2 == 0) {
            iVar2 = function_8168c0();
            goto joined_r0x000180816c9e;
          }
LAB_180816a24:
// WARNING: Subroutine does not return
          SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x2f) ^ (uint64_t)&local_buffer_00000000);
        }
        iVar2 = Function_3be2b034(unaff_RBP + -0x31,&processed_var_856_ptr,4);
        if (iVar2 == 0) {
          if (*(uint64_t *)(unaff_RBX + 0x1e8) != unaff_R13) {
            iVar2 = SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x45,4,1);
            if (iVar2 != 0) goto LAB_180816a24;
            uVar4 = unaff_R13 & 0xffffffff;
            if (0 < *(int *)(unaff_RBX + 0x1e0)) {
              lVar3 = *(int64_t *)(unaff_RBX + 0x1e8);
              do {
                if ((uint)*(ushort *)(lVar3 + 0x36) == *(uint *)(unaff_RBP + -0x45)) {
                  SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),*(uint64_t *)(lVar3 + 0x20),1,
                                *(int *)(unaff_RBP + -0x2d) + -4);
                  break;
                }
                uVar7 = (int)uVar4 + 1;
                uVar4 = (uint64_t)uVar7;
                lVar3 = lVar3 + 0x13c;
              } while ((int)uVar7 < *(int *)(unaff_RBX + 0x1e0));
            }
          }
        }
        else {
          iVar2 = Function_3be2b034(unaff_RBP + -0x31,&processed_var_864_ptr,4);
          if (iVar2 == 0) {
            iVar2 = SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x11,1,0x3c,
                                  unaff_RBP + -0x41);
            if (iVar2 != 0) goto LAB_180816a24;
            if ((*(int *)(unaff_RBP + -0x41) == 0x3c) && (*(int *)(unaff_RBP + 0xb) != iVar6)) {
              *(int32_t *)(unaff_RBX + 0x114) = *(int32_t *)(unaff_RBP + 0x1b);
              *(int32_t *)(unaff_RBX + 0x118) = *(int32_t *)(unaff_RBP + 0x1f);
            }
          }
          else {
            iVar2 = Function_3be2b034(unaff_RBP + -0x31,&ui_system_data_1144_ptr,4);
            if (iVar2 == 0) {
              if (unaff_DIL == '\0') {
                piVar1 = (int *)(unaff_RBX + 0x110);
                if (*piVar1 == -1) {
                  *(int32_t *)(*(int64_t *)(unaff_RBX + 8) + 0x14) =
                       *(int32_t *)(unaff_RBP + -0x2d);
                  iVar2 = Function_49365015(*(uint64_t *)(unaff_RBX + 0x170),piVar1);
                  if ((iVar2 != 0) ||
                     (iVar2 = (**(code **)(**(int64_t **)(unaff_RBX + 0x170) + 0x10))
                                        (*(int64_t **)(unaff_RBX + 0x170),unaff_RBP + -0x3d),
                     iVar2 != 0)) goto LAB_180816a24;
                  uVar7 = *(uint *)(unaff_RBP + -0x3d);
                  if (uVar7 != 0xffffffff) {
                    if (uVar7 < (uint)(*(int *)(*(int64_t *)(unaff_RBX + 8) + 0x14) + *piVar1)) {
                      *(uint *)(*(int64_t *)(unaff_RBX + 8) + 0x14) = uVar7 - *piVar1;
                    }
                  }
                }
                if ((*(uint *)(*(int64_t *)(unaff_RBX + 0x170) + 0x194) & 1) == 0) {
                  unaff_DIL = *(char *)(unaff_RBP + -0x59);
                  unaff_R14B = '\x01';
                  *(int8_t *)(unaff_RBP + -0x58) = 1;
                }
                else {
                  iVar2 = MathTrigonometryFunction0(*(uint64_t *)(unaff_RBX + 0x170),
                                        *(int32_t *)(unaff_RBP + -0x2d),1);
                  if (iVar2 != 0) goto LAB_180816a24;
                  unaff_DIL = *(char *)(unaff_RBP + -0x59);
                }
              }
            }
            else {
              MathTrigonometryFunction0(*(uint64_t *)(unaff_RBX + 0x170),*(int32_t *)(unaff_RBP + -0x2d),1)
              ;
            }
          }
        }
      }
    }
LAB_180816b9b:
    uVar7 = *(uint *)(unaff_RBP + -0x2d);
    uVar5 = *(int *)(unaff_RBP + -0x4d) + 8 + uVar7;
    iVar2 = *(int *)(unaff_RBP + -0x55) + 8 + uVar7;
    *(uint *)(unaff_RBP + -0x4d) = uVar5;
    *(int *)(unaff_RBP + -0x55) = iVar2;
    if ((uVar7 & 1) != 0) {
      uVar5 = uVar5 + 1;
      iVar2 = iVar2 + 1;
      *(uint *)(unaff_RBP + -0x4d) = uVar5;
      *(int *)(unaff_RBP + -0x55) = iVar2;
    }
    if ((((unaff_R15D <= uVar5) || (uVar5 == 0)) || (unaff_R14B != '\0')) ||
       (iVar2 = MathTrigonometryFunction0(*(uint64_t *)(unaff_RBX + 0x170),iVar2 + 8,0), iVar2 != 0))
    goto LAB_180816a24;
    uVar4 = unaff_R13;
    iVar2 = SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x31,1);
    uVar9 = (int32_t)(uVar4 >> 0x20);
    if (iVar2 != 0) goto LAB_180816a24;
    iVar2 = Function_3be2b034(unaff_RBP + -0x31,&processed_var_9588_ptr,4);
    if (iVar2 == 0) {
      if (unaff_DIL == '\0') {
        uVar7 = *(uint *)(unaff_RBP + -0x2d);
        if (uVar7 < 0x28) {
          uVar7 = 0x28;
        }
        lVar3 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar7,&system_state_ptr,0x48,
                              CONCAT44(uVar9,iVar6));
        *(int64_t *)(unaff_RBX + 0x230) = lVar3;
        if (lVar3 == 0) goto LAB_180816a24;
        iVar2 = SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),lVar3,1,
                              *(int32_t *)(unaff_RBP + -0x2d));
joined_r0x000180816c9e:
        if (iVar2 != 0) goto LAB_180816a24;
      }
      goto LAB_180816b9b;
    }
  } while( true );
}
// 函数: void function_816ee0(uint64_t param_1,int64_t *param_2)
void function_816ee0(uint64_t param_1,int64_t *param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  if (param_2 != (int64_t *)0x0) {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      iVar3 = 0;
      if (0 < (int)param_2[2]) {
        lVar2 = 0;
        do {
          if (*(int64_t *)(lVar2 + lVar1) != 0) {
// WARNING: Subroutine does not return
            RenderingSystem_CoreProcessor0(param_1,*(int64_t *)(lVar2 + lVar1));
          }
          iVar3 = iVar3 + 1;
          lVar2 = lVar2 + 8;
        } while (iVar3 < (int)param_2[2]);
      }
// WARNING: Subroutine does not return
      RenderingSystem_CoreProcessor0(param_1,lVar1);
    }
    if (param_2[1] != 0) {
// WARNING: Subroutine does not return
      RenderingSystem_CoreProcessor0(param_1);
    }
    if (param_2[3] != 0) {
// WARNING: Subroutine does not return
      RenderingSystem_CoreProcessor0(param_1);
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}
// 函数: void function_816f01(uint64_t param_1,int64_t param_2)
void function_816f01(uint64_t param_1,int64_t param_2)
{
  int64_t unaff_RBX;
  int64_t lVar1;
  int iVar2;
  iVar2 = 0;
  if (0 < *(int *)(unaff_RBX + 0x10)) {
    lVar1 = 0;
    do {
      if (*(int64_t *)(lVar1 + param_2) != 0) {
// WARNING: Subroutine does not return
        RenderingSystem_CoreProcessor0();
      }
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 8;
    } while (iVar2 < *(int *)(unaff_RBX + 0x10));
  }
// WARNING: Subroutine does not return
  RenderingSystem_CoreProcessor0();
}
// 函数: void function_816f0d(uint64_t param_1,int64_t param_2)
void function_816f0d(uint64_t param_1,int64_t param_2)
{
  int64_t unaff_RBX;
  uint64_t uVar1;
  uint unaff_EDI;
  uVar1 = (uint64_t)unaff_EDI;
  do {
    if (*(int64_t *)(uVar1 + param_2) != 0) {
// WARNING: Subroutine does not return
      RenderingSystem_CoreProcessor0();
    }
    unaff_EDI = unaff_EDI + 1;
    uVar1 = uVar1 + 8;
  } while ((int)unaff_EDI < *(int *)(unaff_RBX + 0x10));
// WARNING: Subroutine does not return
  RenderingSystem_CoreProcessor0();
}
// 函数: void function_816f44(void)
void function_816f44(void)
{
// WARNING: Subroutine does not return
  RenderingSystem_CoreProcessor0();
}
// 函数: void function_816f51(void)
void function_816f51(void)
{
  uint64_t *unaff_RBX;
  if (unaff_RBX[1] != 0) {
// WARNING: Subroutine does not return
    RenderingSystem_CoreProcessor0();
  }
  if (unaff_RBX[3] != 0) {
// WARNING: Subroutine does not return
    RenderingSystem_CoreProcessor0();
  }
  *unaff_RBX = 0;
  unaff_RBX[1] = 0;
  unaff_RBX[2] = 0;
  unaff_RBX[3] = 0;
  return;
}