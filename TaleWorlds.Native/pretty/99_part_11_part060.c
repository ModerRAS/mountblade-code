#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: MathTrigonometryFunction */
#define MathTrigonometryFunction MathTrigonometryFunction


#include "SystemCore_ConfigManager_definition.h"
#include "RenderingAdvancedManager_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_11_part060.c - 2 个函数

// 函数: void FUN_1807bf330(int64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_1807bf330(int64_t param_1,int32_t param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint uVar7;
  uint64_t uVar8;
  int8_t auStack_308 [32];
  uint64_t uStack_2e8;
  int32_t uStack_2e0;
  int8_t uStack_2d8;
  char cStack_2c8;
  int8_t uStack_2c7;
  int8_t uStack_2c6;
  int8_t uStack_2c5;
  int8_t auStack_2a4 [4];
  int32_t uStack_2a0;
  uint64_t uStack_288;
  char acStack_158 [32];
  int8_t auStack_138 [256];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_308;
  uStack_2a0 = param_2;
  uStack_288 = param_3;
  if ((*(uint *)(*(int64_t *)(param_1 + 0x170) + 0x194) & 1) != 0) {
    *(int32_t *)(param_1 + 0x28) = 8;
    uVar6 = 0;
    *(uint64_t *)(param_1 + 0x120) = 0;
    *(uint64_t *)(param_1 + 0x128) = 0;
    *(uint64_t *)(param_1 + 0x130) = 0;
    *(uint64_t *)(param_1 + 0x148) = 0;
    *(uint64_t *)(param_1 + 0x138) = 0;
    *(uint64_t *)(param_1 + 0x168) = 0;
    *(int32_t *)(param_1 + 0x18) = 0;
    *(uint64_t *)(param_1 + 8) = 0;
    iVar3 = (**(code **)(**(int64_t **)(param_1 + 0x170) + 0x10))
                      (*(int64_t **)(param_1 + 0x170),auStack_2a4);
    if (iVar3 == 0) {
      *(uint *)(*(int64_t *)(param_1 + 0x170) + 0x194) =
           *(uint *)(*(int64_t *)(param_1 + 0x170) + 0x194) | 4;
      iVar3 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0x438,0);
      lVar5 = *(int64_t *)(param_1 + 0x170);
      if (iVar3 == 0) {
        uStack_2e8 = 0;
        iVar3 = SystemPerformanceOptimizer(lVar5,&cStack_2c8,1,4);
        if ((iVar3 == 0) &&
           (((((iVar3 = func_0x00018076b6b0(&cStack_2c8,&processed_var_6992_ptr,4), iVar3 == 0 ||
               (iVar3 = func_0x00018076b6b0(&cStack_2c8,&processed_var_7000_ptr,4), iVar3 == 0)) ||
              (iVar3 = func_0x00018076b6b0(&cStack_2c8,&processed_var_7008_ptr,4), iVar3 == 0)) ||
             ((iVar3 = func_0x00018076b6b0(&cStack_2c8,&processed_var_7016_ptr,4), iVar3 == 0 ||
              (iVar3 = func_0x00018076b6b0(&uStack_2c6,&processed_var_7024_ptr,2), iVar3 == 0)))) ||
            (iVar3 = func_0x00018076b6b0(&uStack_2c7,&processed_var_7028_ptr,3), iVar3 == 0)))) {
          iVar3 = func_0x00018076b6b0(&cStack_2c8,&processed_var_6992_ptr,4);
          iVar4 = 0;
          if (iVar3 == 0) {
            iVar4 = 4;
          }
          else {
            iVar3 = func_0x00018076b6b0(&cStack_2c8,&processed_var_7000_ptr,4);
            if (iVar3 == 0) {
              iVar4 = 4;
            }
            else {
              iVar3 = func_0x00018076b6b0(&cStack_2c8,&processed_var_7032_ptr,4);
              if (iVar3 == 0) {
                iVar4 = 4;
              }
              else {
                iVar3 = func_0x00018076b6b0(&cStack_2c8,&processed_var_7008_ptr,4);
                if (iVar3 == 0) {
                  iVar4 = 6;
                }
                else {
                  iVar3 = func_0x00018076b6b0(&cStack_2c8,&processed_var_7016_ptr,4);
                  if (iVar3 == 0) {
                    iVar4 = 8;
                  }
                  else {
                    iVar3 = func_0x00018076b6b0(&uStack_2c6,&processed_var_7024_ptr,2);
                    if (iVar3 == 0) {
                      uStack_2c5 = 0;
                      iVar4 = atoi(&cStack_2c8);
                    }
                    else {
                      iVar3 = func_0x00018076b6b0(&uStack_2c7,&processed_var_7028_ptr,3);
                      if (iVar3 == 0) {
                        iVar4 = cStack_2c8 + -0x30;
                      }
                    }
                  }
                }
              }
            }
          }
          *(int *)(param_1 + 0x3c8) = iVar4;
          if ((iVar4 < 1) || (0x20 < *(int *)(param_1 + 0x3c8))) {
            *(uint *)(*(int64_t *)(param_1 + 0x170) + 0x194) =
                 *(uint *)(*(int64_t *)(param_1 + 0x170) + 0x194) & 0xfffffffb;
          }
          else {
            uStack_2d8 = 0;
            uStack_2e0 = 1;
            uStack_2e8 = CONCAT44(uStack_2e8._4_4_,4);
            iVar3 = SystemMemory_Controller(param_1,9,&processed_var_5832_ptr,(int *)(param_1 + 0x3c8));
            if (iVar3 == 0) {
              iVar3 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0,0);
              if (iVar3 == 0) {
                uStack_2e8 = 0;
                *(uint64_t *)(param_1 + 0x3d0) = 0;
                *(uint64_t *)(param_1 + 0x3d8) = 0;
                *(uint64_t *)(param_1 + 0x3e0) = 0;
                *(uint64_t *)(param_1 + 1000) = 0;
                *(uint64_t *)(param_1 + 0x3f0) = 0;
                *(uint64_t *)(param_1 + 0x3f8) = 0;
                *(uint64_t *)(param_1 + 0x400) = 0;
                *(uint64_t *)(param_1 + 0x408) = 0;
                *(uint64_t *)(param_1 + 0x410) = 0;
                *(uint64_t *)(param_1 + 0x418) = 0;
                *(uint64_t *)(param_1 + 0x420) = 0;
                *(uint64_t *)(param_1 + 0x428) = 0;
                *(uint64_t *)(param_1 + 0x430) = 0;
                *(uint64_t *)(param_1 + 0x438) = 0;
                *(uint64_t *)(param_1 + 0x440) = 0;
                *(uint64_t *)(param_1 + 0x448) = 0;
                *(uint64_t *)(param_1 + 0x450) = 0;
                *(uint64_t *)(param_1 + 0x458) = 0;
                *(uint64_t *)(param_1 + 0x460) = 0;
                *(uint64_t *)(param_1 + 0x468) = 0;
                *(uint64_t *)(param_1 + 0x470) = 0;
                *(uint64_t *)(param_1 + 0x478) = 0;
                *(uint64_t *)(param_1 + 0x480) = 0;
                *(uint64_t *)(param_1 + 0x488) = 0;
                *(uint64_t *)(param_1 + 0x490) = 0;
                *(uint64_t *)(param_1 + 0x498) = 0;
                *(uint64_t *)(param_1 + 0x4a0) = 0;
                *(uint64_t *)(param_1 + 0x4a8) = 0;
                *(uint64_t *)(param_1 + 0x4b0) = 0;
                *(uint64_t *)(param_1 + 0x4b8) = 0;
                *(uint64_t *)(param_1 + 0x4c0) = 0;
                *(uint64_t *)(param_1 + 0x4c8) = 0;
                *(uint64_t *)(param_1 + 0x4d0) = 0;
                *(uint64_t *)(param_1 + 0x4d8) = 0;
                *(uint64_t *)(param_1 + 0x4e0) = 0;
                *(uint64_t *)(param_1 + 0x4e8) = 0;
                *(uint64_t *)(param_1 + 0x4f0) = 0;
                *(uint64_t *)(param_1 + 0x4f8) = 0;
                *(uint64_t *)(param_1 + 0x500) = 0;
                *(uint64_t *)(param_1 + 0x508) = 0;
                *(uint64_t *)(param_1 + 0x510) = 0;
                *(uint64_t *)(param_1 + 0x518) = 0;
                *(uint64_t *)(param_1 + 0x520) = 0;
                *(uint64_t *)(param_1 + 0x528) = 0;
                *(uint64_t *)(param_1 + 0x530) = 0;
                *(uint64_t *)(param_1 + 0x538) = 0;
                *(uint64_t *)(param_1 + 0x540) = 0;
                *(uint64_t *)(param_1 + 0x548) = 0;
                *(uint64_t *)(param_1 + 0x550) = 0;
                *(uint64_t *)(param_1 + 0x558) = 0;
                *(uint64_t *)(param_1 + 0x560) = 0;
                *(uint64_t *)(param_1 + 0x568) = 0;
                *(uint64_t *)(param_1 + 0x570) = 0;
                *(uint64_t *)(param_1 + 0x578) = 0;
                *(uint64_t *)(param_1 + 0x580) = 0;
                *(uint64_t *)(param_1 + 0x588) = 0;
                *(uint64_t *)(param_1 + 0x590) = 0;
                *(uint64_t *)(param_1 + 0x598) = 0;
                *(uint64_t *)(param_1 + 0x5a0) = 0;
                *(uint64_t *)(param_1 + 0x5a8) = 0;
                *(uint64_t *)(param_1 + 0x5b0) = 0;
                *(uint64_t *)(param_1 + 0x5b8) = 0;
                *(uint64_t *)(param_1 + 0x5c0) = 0;
                *(uint64_t *)(param_1 + 0x5c8) = 0;
                *(uint64_t *)(param_1 + 0x278) = 0;
                *(int32_t *)(param_1 + 0xbd8) = 0x3f4ccccd;
                *(int32_t *)(param_1 + 0xbd4) = 0x3f800000;
                *(int8_t *)(param_1 + 0xbea) = 1;
                *(int32_t *)(param_1 + 0x8fc) = 0x1f;
                *(int32_t *)(param_1 + 0x860) = 6;
                *(int32_t *)(param_1 + 0x864) = 0x7d;
                *(int32_t *)(param_1 + 0x8f0) = 0;
                *(int32_t *)(param_1 + 0xbd0) = 0;
                iVar3 = SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 0x170),param_1 + 0x178,1);
                if (iVar3 == 0) {
                  uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
                  lVar5 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                        *(int *)(param_1 + 0x8fc) << 3,&processed_var_7040_ptr,0x542);
                  *(int64_t *)(param_1 + 0x848) = lVar5;
                  if (lVar5 != 0) {
                    if (*(int *)(param_1 + 0x8fc) < 1) {
                      iVar3 = FUN_1807697a0(*(uint64_t *)(param_1 + 0x170),param_1 + 0x8ec);
                      lVar5 = *(int64_t *)(param_1 + 0x170);
                      if (iVar3 == 0) {
                        iVar3 = SystemMonitor(lVar5,0);
                        if (iVar3 == 0) {
                    // WARNING: Subroutine does not return
                          memset(param_1 + 0x290,0,0x100);
                        }
                        *(uint *)(*(int64_t *)(param_1 + 0x170) + 0x194) =
                             *(uint *)(*(int64_t *)(param_1 + 0x170) + 0x194) & 0xfffffffb;
                      }
                      else {
                        *(uint *)(lVar5 + 0x194) = *(uint *)(lVar5 + 0x194) & 0xfffffffb;
                      }
                    }
                    else {
                      uStack_2e8 = 0;
                      **(int64_t **)(param_1 + 0x848) = param_1 + 0xc20;
                      puVar1 = (uint64_t *)**(uint64_t **)(param_1 + 0x848);
                      *puVar1 = 0;
                      puVar1[1] = 0;
                      puVar1[2] = 0;
                      puVar1[3] = 0;
                      puVar1[4] = 0;
                      puVar1[5] = 0;
                      puVar1[6] = 0;
                      iVar3 = SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 0x170),acStack_158,1,0x16);
                      uVar8 = uVar6;
                      if (iVar3 == 0) {
                        do {
                          if (acStack_158[uVar6] < ' ') {
                            if (0x15 < uVar6) {
                              UltraHighFreq_ThreadManager1(uVar8,0);
                              pcVar2 = (code *)swi(3);
                              (*pcVar2)();
                              return;
                            }
                            acStack_158[uVar6] = '\0';
                          }
                          uVar7 = (int)uVar8 + 1;
                          uVar6 = uVar6 + 1;
                          uVar8 = (uint64_t)uVar7;
                        } while (uVar7 < 0x16);
                    // WARNING: Subroutine does not return
                        SystemDataValidator(auStack_138,0x100,&processed_var_5872_ptr,0);
                      }
                      *(uint *)(*(int64_t *)(param_1 + 0x170) + 0x194) =
                           *(uint *)(*(int64_t *)(param_1 + 0x170) + 0x194) & 0xfffffffb;
                    }
                  }
                }
                else {
                  *(uint *)(*(int64_t *)(param_1 + 0x170) + 0x194) =
                       *(uint *)(*(int64_t *)(param_1 + 0x170) + 0x194) & 0xfffffffb;
                }
              }
              else {
                *(uint *)(*(int64_t *)(param_1 + 0x170) + 0x194) =
                     *(uint *)(*(int64_t *)(param_1 + 0x170) + 0x194) & 0xfffffffb;
              }
            }
          }
          goto FUN_1807c01ad;
        }
        lVar5 = *(int64_t *)(param_1 + 0x170);
      }
      *(uint *)(lVar5 + 0x194) = *(uint *)(lVar5 + 0x194) & 0xfffffffb;
    }
  }
FUN_1807c01ad:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_308);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807bf388(int64_t param_1)
void FUN_1807bf388(int64_t param_1)

{
  uint64_t *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint uVar7;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  uint64_t uVar8;
  char cStack0000000000000040;
  int8_t uStack0000000000000043;
  
  uVar6 = 0;
  *(uint64_t *)(param_1 + 0x120) = 0;
  *(uint64_t *)(param_1 + 0x128) = 0;
  *(uint64_t *)(param_1 + 0x130) = 0;
  *(uint64_t *)(param_1 + 0x148) = 0;
  *(uint64_t *)(param_1 + 0x138) = 0;
  *(uint64_t *)(param_1 + 0x168) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  iVar3 = (**(code **)(**(int64_t **)(param_1 + 0x170) + 0x10))();
  if (iVar3 == 0) {
    *(uint *)(*(int64_t *)(unaff_RDI + 0x170) + 0x194) =
         *(uint *)(*(int64_t *)(unaff_RDI + 0x170) + 0x194) | 4;
    iVar3 = MathTrigonometryFunction0(*(uint64_t *)(unaff_RDI + 0x170),0x438,0);
    lVar5 = *(int64_t *)(unaff_RDI + 0x170);
    if (iVar3 == 0) {
      iVar3 = SystemPerformanceOptimizer(lVar5,&stack0x00000040,1,4,0);
      if ((iVar3 == 0) &&
         (((((iVar3 = func_0x00018076b6b0(&stack0x00000040,&processed_var_6992_ptr,4), iVar3 == 0 ||
             (iVar3 = func_0x00018076b6b0(&stack0x00000040,&processed_var_7000_ptr,4), iVar3 == 0)) ||
            (iVar3 = func_0x00018076b6b0(&stack0x00000040,&processed_var_7008_ptr,4), iVar3 == 0)) ||
           ((iVar3 = func_0x00018076b6b0(&stack0x00000040,&processed_var_7016_ptr,4), iVar3 == 0 ||
            (iVar3 = func_0x00018076b6b0((int64_t)&stack0x00000040 + 2,&processed_var_7024_ptr,2),
            iVar3 == 0)))) ||
          (iVar3 = func_0x00018076b6b0((int64_t)&stack0x00000040 + 1,&processed_var_7028_ptr,3), iVar3 == 0)
          ))) {
        iVar3 = func_0x00018076b6b0(&stack0x00000040,&processed_var_6992_ptr,4);
        iVar4 = 0;
        if (iVar3 == 0) {
          iVar4 = 4;
        }
        else {
          iVar3 = func_0x00018076b6b0(&stack0x00000040,&processed_var_7000_ptr,4);
          if (iVar3 == 0) {
            iVar4 = 4;
          }
          else {
            iVar3 = func_0x00018076b6b0(&stack0x00000040,&processed_var_7032_ptr,4);
            if (iVar3 == 0) {
              iVar4 = 4;
            }
            else {
              iVar3 = func_0x00018076b6b0(&stack0x00000040,&processed_var_7008_ptr,4);
              if (iVar3 == 0) {
                iVar4 = 6;
              }
              else {
                iVar3 = func_0x00018076b6b0(&stack0x00000040,&processed_var_7016_ptr,4);
                if (iVar3 == 0) {
                  iVar4 = 8;
                }
                else {
                  iVar3 = func_0x00018076b6b0((int64_t)&stack0x00000040 + 2,&processed_var_7024_ptr,2);
                  if (iVar3 == 0) {
                    uStack0000000000000043 = 0;
                    iVar4 = atoi(&stack0x00000040);
                  }
                  else {
                    iVar3 = func_0x00018076b6b0((int64_t)&stack0x00000040 + 1,&processed_var_7028_ptr,3);
                    if (iVar3 == 0) {
                      iVar4 = cStack0000000000000040 + -0x30;
                    }
                  }
                }
              }
            }
          }
        }
        *(int *)(unaff_RDI + 0x3c8) = iVar4;
        if ((iVar4 < 1) || (0x20 < *(int *)(unaff_RDI + 0x3c8))) {
          *(uint *)(*(int64_t *)(unaff_RDI + 0x170) + 0x194) =
               *(uint *)(*(int64_t *)(unaff_RDI + 0x170) + 0x194) & 0xfffffffb;
        }
        else {
          iVar3 = SystemMemory_Controller();
          if (iVar3 == 0) {
            iVar3 = MathTrigonometryFunction0(*(uint64_t *)(unaff_RDI + 0x170),0,0);
            if (iVar3 == 0) {
              uVar8 = 0;
              *(uint64_t *)(unaff_RDI + 0x3d0) = 0;
              *(uint64_t *)(unaff_RDI + 0x3d8) = 0;
              *(uint64_t *)(unaff_RDI + 0x3e0) = 0;
              *(uint64_t *)(unaff_RDI + 1000) = 0;
              *(uint64_t *)(unaff_RDI + 0x3f0) = 0;
              *(uint64_t *)(unaff_RDI + 0x3f8) = 0;
              *(uint64_t *)(unaff_RDI + 0x400) = 0;
              *(uint64_t *)(unaff_RDI + 0x408) = 0;
              *(uint64_t *)(unaff_RDI + 0x410) = 0;
              *(uint64_t *)(unaff_RDI + 0x418) = 0;
              *(uint64_t *)(unaff_RDI + 0x420) = 0;
              *(uint64_t *)(unaff_RDI + 0x428) = 0;
              *(uint64_t *)(unaff_RDI + 0x430) = 0;
              *(uint64_t *)(unaff_RDI + 0x438) = 0;
              *(uint64_t *)(unaff_RDI + 0x440) = 0;
              *(uint64_t *)(unaff_RDI + 0x448) = 0;
              *(uint64_t *)(unaff_RDI + 0x450) = 0;
              *(uint64_t *)(unaff_RDI + 0x458) = 0;
              *(uint64_t *)(unaff_RDI + 0x460) = 0;
              *(uint64_t *)(unaff_RDI + 0x468) = 0;
              *(uint64_t *)(unaff_RDI + 0x470) = 0;
              *(uint64_t *)(unaff_RDI + 0x478) = 0;
              *(uint64_t *)(unaff_RDI + 0x480) = 0;
              *(uint64_t *)(unaff_RDI + 0x488) = 0;
              *(uint64_t *)(unaff_RDI + 0x490) = 0;
              *(uint64_t *)(unaff_RDI + 0x498) = 0;
              *(uint64_t *)(unaff_RDI + 0x4a0) = 0;
              *(uint64_t *)(unaff_RDI + 0x4a8) = 0;
              *(uint64_t *)(unaff_RDI + 0x4b0) = 0;
              *(uint64_t *)(unaff_RDI + 0x4b8) = 0;
              *(uint64_t *)(unaff_RDI + 0x4c0) = 0;
              *(uint64_t *)(unaff_RDI + 0x4c8) = 0;
              *(uint64_t *)(unaff_RDI + 0x4d0) = 0;
              *(uint64_t *)(unaff_RDI + 0x4d8) = 0;
              *(uint64_t *)(unaff_RDI + 0x4e0) = 0;
              *(uint64_t *)(unaff_RDI + 0x4e8) = 0;
              *(uint64_t *)(unaff_RDI + 0x4f0) = 0;
              *(uint64_t *)(unaff_RDI + 0x4f8) = 0;
              *(uint64_t *)(unaff_RDI + 0x500) = 0;
              *(uint64_t *)(unaff_RDI + 0x508) = 0;
              *(uint64_t *)(unaff_RDI + 0x510) = 0;
              *(uint64_t *)(unaff_RDI + 0x518) = 0;
              *(uint64_t *)(unaff_RDI + 0x520) = 0;
              *(uint64_t *)(unaff_RDI + 0x528) = 0;
              *(uint64_t *)(unaff_RDI + 0x530) = 0;
              *(uint64_t *)(unaff_RDI + 0x538) = 0;
              *(uint64_t *)(unaff_RDI + 0x540) = 0;
              *(uint64_t *)(unaff_RDI + 0x548) = 0;
              *(uint64_t *)(unaff_RDI + 0x550) = 0;
              *(uint64_t *)(unaff_RDI + 0x558) = 0;
              *(uint64_t *)(unaff_RDI + 0x560) = 0;
              *(uint64_t *)(unaff_RDI + 0x568) = 0;
              *(uint64_t *)(unaff_RDI + 0x570) = 0;
              *(uint64_t *)(unaff_RDI + 0x578) = 0;
              *(uint64_t *)(unaff_RDI + 0x580) = 0;
              *(uint64_t *)(unaff_RDI + 0x588) = 0;
              *(uint64_t *)(unaff_RDI + 0x590) = 0;
              *(uint64_t *)(unaff_RDI + 0x598) = 0;
              *(uint64_t *)(unaff_RDI + 0x5a0) = 0;
              *(uint64_t *)(unaff_RDI + 0x5a8) = 0;
              *(uint64_t *)(unaff_RDI + 0x5b0) = 0;
              *(uint64_t *)(unaff_RDI + 0x5b8) = 0;
              *(uint64_t *)(unaff_RDI + 0x5c0) = 0;
              *(uint64_t *)(unaff_RDI + 0x5c8) = 0;
              *(uint64_t *)(unaff_RDI + 0x278) = 0;
              *(int32_t *)(unaff_RDI + 0xbd8) = 0x3f4ccccd;
              *(int32_t *)(unaff_RDI + 0xbd4) = 0x3f800000;
              *(int8_t *)(unaff_RDI + 0xbea) = 1;
              *(int32_t *)(unaff_RDI + 0x8fc) = 0x1f;
              *(int32_t *)(unaff_RDI + 0x860) = 6;
              *(int32_t *)(unaff_RDI + 0x864) = 0x7d;
              *(int32_t *)(unaff_RDI + 0x8f0) = 0;
              *(int32_t *)(unaff_RDI + 0xbd0) = 0;
              iVar3 = SystemPerformanceOptimizer(*(uint64_t *)(unaff_RDI + 0x170),unaff_RDI + 0x178,1,0x14,0);
              if (iVar3 == 0) {
                lVar5 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                      *(int *)(unaff_RDI + 0x8fc) << 3,&processed_var_7040_ptr,0x542,
                                      uVar8 & 0xffffffff00000000);
                *(int64_t *)(unaff_RDI + 0x848) = lVar5;
                if (lVar5 != 0) {
                  if (*(int *)(unaff_RDI + 0x8fc) < 1) {
                    iVar3 = FUN_1807697a0(*(uint64_t *)(unaff_RDI + 0x170),unaff_RDI + 0x8ec);
                    lVar5 = *(int64_t *)(unaff_RDI + 0x170);
                    if (iVar3 == 0) {
                      iVar3 = SystemMonitor(lVar5,0);
                      if (iVar3 == 0) {
                    // WARNING: Subroutine does not return
                        memset(unaff_RDI + 0x290,0,0x100);
                      }
                      *(uint *)(*(int64_t *)(unaff_RDI + 0x170) + 0x194) =
                           *(uint *)(*(int64_t *)(unaff_RDI + 0x170) + 0x194) & 0xfffffffb;
                    }
                    else {
                      *(uint *)(lVar5 + 0x194) = *(uint *)(lVar5 + 0x194) & 0xfffffffb;
                    }
                  }
                  else {
                    **(int64_t **)(unaff_RDI + 0x848) = unaff_RDI + 0xc20;
                    puVar1 = (uint64_t *)**(uint64_t **)(unaff_RDI + 0x848);
                    *puVar1 = 0;
                    puVar1[1] = 0;
                    puVar1[2] = 0;
                    puVar1[3] = 0;
                    puVar1[4] = 0;
                    puVar1[5] = 0;
                    puVar1[6] = 0;
                    iVar3 = SystemPerformanceOptimizer(*(uint64_t *)(unaff_RDI + 0x170),unaff_RBP + 0xb0,1,0x16
                                          ,0);
                    uVar8 = uVar6;
                    if (iVar3 == 0) {
                      do {
                        if (*(char *)(unaff_RBP + 0xb0 + uVar6) < ' ') {
                          if (0x15 < uVar6) {
                            UltraHighFreq_ThreadManager1(uVar8,0);
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          *(int8_t *)(unaff_RBP + 0xb0 + uVar6) = 0;
                        }
                        uVar7 = (int)uVar8 + 1;
                        uVar6 = uVar6 + 1;
                        uVar8 = (uint64_t)uVar7;
                      } while (uVar7 < 0x16);
                    // WARNING: Subroutine does not return
                      SystemDataValidator(unaff_RBP + 0xd0,0x100,&processed_var_5872_ptr,0);
                    }
                    *(uint *)(*(int64_t *)(unaff_RDI + 0x170) + 0x194) =
                         *(uint *)(*(int64_t *)(unaff_RDI + 0x170) + 0x194) & 0xfffffffb;
                  }
                }
              }
              else {
                *(uint *)(*(int64_t *)(unaff_RDI + 0x170) + 0x194) =
                     *(uint *)(*(int64_t *)(unaff_RDI + 0x170) + 0x194) & 0xfffffffb;
              }
            }
            else {
              *(uint *)(*(int64_t *)(unaff_RDI + 0x170) + 0x194) =
                   *(uint *)(*(int64_t *)(unaff_RDI + 0x170) + 0x194) & 0xfffffffb;
            }
          }
        }
        goto FUN_1807c01a5;
      }
      lVar5 = *(int64_t *)(unaff_RDI + 0x170);
    }
    *(uint *)(lVar5 + 0x194) = *(uint *)(lVar5 + 0x194) & 0xfffffffb;
  }
FUN_1807c01a5:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1d0) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




