#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: MathTrigonometryFunction */
#define MathTrigonometryFunction MathTrigonometryFunction


#include "RenderingSystemController_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_11_part065.c - 6 个函数

// 函数: void FUN_1807c4b10(int64_t param_1)
void FUN_1807c4b10(int64_t param_1)

{
  code *pcVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int iVar11;
  int8_t auStack_688 [32];
  uint64_t uStack_668;
  int32_t uStack_660;
  int8_t uStack_658;
  char cStack_648;
  char acStack_647 [3];
  int32_t auStack_644 [3];
  char acStack_638 [1024];
  char acStack_238 [512];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_688;
  auStack_644[0] = 0x200;
  iVar2 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0,0);
  if (iVar2 == 0) {
    uVar10 = 0;
    uStack_668 = 0;
    iVar2 = FUN_1807c4340(param_1,acStack_638,auStack_644,0);
    if ((iVar2 == 0) && (iVar2 = SystemCore_Optimizer(&processed_var_7800_ptr,acStack_638,0xb), iVar2 == 0)) {
      while( true ) {
        cStack_648 = '\0';
        do {
          iVar2 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),acStack_647);
          if (iVar2 != 0) goto SystemCore_EventHandlerd;
        } while ((((acStack_647[0] == ' ') || (acStack_647[0] == '\t')) || (acStack_647[0] == '\n'))
                || (acStack_647[0] == '\r'));
        iVar2 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0xffffffff,1);
        if (iVar2 != 0) goto SystemCore_EventHandlerd;
        do {
          iVar2 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_648);
          if (iVar2 != 0) goto SystemCore_EventHandlerd;
        } while (cStack_648 != '<');
        pcVar7 = acStack_638;
        uVar3 = uVar10;
        do {
          iVar2 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_648);
          if (iVar2 != 0) goto SystemCore_EventHandlerd;
          if ((int)uVar3 < 0x200) {
            uVar3 = (uint64_t)((int)uVar3 + 1);
            *pcVar7 = cStack_648;
            pcVar7 = pcVar7 + 1;
          }
        } while (cStack_648 != '>');
        iVar2 = UIComponent_AdvancedManager(param_1,0);
        uVar8 = uVar10;
        uVar9 = uVar10;
        if (iVar2 != 0) goto SystemCore_EventHandlerd;
        do {
          iVar2 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_648);
          if (iVar2 != 0) goto SystemCore_EventHandlerd;
          if ((int64_t)uVar8 < 0x200) {
            uVar9 = (uint64_t)((int)uVar9 + 1);
            acStack_238[uVar8] = cStack_648;
            uVar8 = uVar8 + 1;
          }
        } while (cStack_648 != '<');
        iVar11 = (int)uVar9 + -1;
        iVar2 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_648);
        if (iVar2 != 0) goto SystemCore_EventHandlerd;
        if (cStack_648 == '/') {
          do {
            iVar2 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_648);
            if (iVar2 != 0) goto SystemCore_EventHandlerd;
          } while (cStack_648 != '>');
        }
        else {
          iVar2 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0xfffffffe,1);
          if (iVar2 != 0) goto SystemCore_EventHandlerd;
        }
        uVar3 = (uint64_t)((int)uVar3 + -1);
        if (0x1ff < uVar3) break;
        acStack_638[uVar3] = '\0';
        if (0x1ff < (uint64_t)(int64_t)iVar11) break;
        acStack_238[iVar11] = '\0';
        iVar2 = SystemCore_Optimizer(&processed_var_7812_ptr,acStack_638,5);
        if (iVar2 == 0) {
          uStack_658 = 0;
          uStack_660 = 6;
          uStack_668 = uStack_668 & 0xffffffff00000000;
          SystemMemory_Controller(param_1,8,&processed_var_7812_ptr,0);
        }
        else if (iVar11 == 0) {
          cVar5 = '\0';
          uVar3 = uVar10;
          do {
            if ((int64_t)uVar3 < 0x200) {
              cVar5 = acStack_638[uVar3];
              uVar3 = uVar3 + 1;
            }
            uVar8 = uVar10;
            uVar9 = uVar10;
          } while (cVar5 != '\"');
          do {
            uVar6 = (uint)uVar9;
            pcVar7 = acStack_638 + uVar3;
            uVar3 = uVar3 + 1;
            if (*pcVar7 == '\"') break;
            acStack_638[uVar8 + 0x200] = *pcVar7;
            uVar6 = uVar6 + 1;
            uVar8 = uVar8 + 1;
            uVar9 = (uint64_t)uVar6;
          } while ((int64_t)uVar3 < 0x1ff);
          acStack_638[uVar8 + 0x200] = '\0';
          iVar2 = SystemCore_Optimizer(&processed_var_7824_ptr,acStack_638,8);
          if (iVar2 == 0) {
            uStack_658 = 0;
            uStack_660 = 6;
            uStack_668 = CONCAT44(uStack_668._4_4_,uVar6 + 1);
            SystemMemory_Controller(param_1,8,&processed_var_7836_ptr,acStack_638 + 0x200);
          }
          else {
            iVar2 = SystemCore_Optimizer(&processed_var_7848_ptr,acStack_638,0xd);
            if (iVar2 == 0) {
              uStack_658 = 0;
              uStack_660 = 6;
              uStack_668 = CONCAT44(uStack_668._4_4_,uVar6 + 1);
              SystemMemory_Controller(param_1,8,&processed_var_7864_ptr,acStack_638 + 0x200);
            }
            else {
              iVar2 = SystemCore_Optimizer(&processed_var_7880_ptr,acStack_638,0xe);
              if (iVar2 == 0) {
                uStack_658 = 0;
                uStack_660 = 6;
                uStack_668 = CONCAT44(uStack_668._4_4_,uVar6 + 1);
                SystemMemory_Controller(param_1,8,&processed_var_7896_ptr,acStack_638 + 0x200);
              }
              else {
                iVar2 = SystemCore_Optimizer(&processed_var_7912_ptr,acStack_638,9);
                if (iVar2 == 0) {
                  uStack_658 = 0;
                  uStack_660 = 6;
                  uStack_668 = CONCAT44(uStack_668._4_4_,uVar6 + 1);
                  SystemMemory_Controller(param_1,8,&processed_var_7924_ptr,acStack_638 + 0x200);
                }
                else {
                  iVar2 = SystemCore_Optimizer(&processed_var_7936_ptr,acStack_638,0xb);
                  if (iVar2 == 0) {
                    uStack_658 = 0;
                    uStack_660 = 6;
                    uStack_668 = CONCAT44(uStack_668._4_4_,uVar6 + 1);
                    SystemMemory_Controller(param_1,8,&processed_var_7948_ptr,acStack_638 + 0x200);
                  }
                }
              }
            }
          }
        }
        else {
          uVar4 = func_0x00018076b870(acStack_638);
          uStack_658 = 0;
          uStack_660 = 6;
          uStack_668 = CONCAT44(uStack_668._4_4_,(int)uVar9);
          SystemMemory_Controller(param_1,8,uVar4,acStack_238);
        }
      }
      UltraHighFreq_ThreadManager1();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
SystemCore_EventHandlerd:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_688);
}






// 函数: void FUN_1807c4b57(void)
void FUN_1807c4b57(void)

{
  code *pcVar1;
  int iVar2;
  uint64_t uVar3;
  char cVar4;
  char *pcVar5;
  uint64_t uVar6;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t uVar7;
  uint64_t uVar8;
  int iVar9;
  char cStack0000000000000040;
  char cStack0000000000000041;
  
  uVar8 = 0;
  iVar2 = FUN_1807c4340();
  if ((iVar2 != 0) || (iVar2 = SystemCore_Optimizer(&processed_var_7800_ptr,&stack0x00000050,0xb), iVar2 != 0)) {
SystemCore_EventHandler5:
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x550) ^ (uint64_t)&stack0x00000000);
  }
  while( true ) {
    cStack0000000000000040 = '\0';
    do {
      iVar2 = SystemMonitor(*(uint64_t *)(unaff_RSI + 0x170),(int64_t)&stack0x00000040 + 1);
      if (iVar2 != 0) goto SystemCore_EventHandler5;
    } while ((((cStack0000000000000041 == ' ') || (cStack0000000000000041 == '\t')) ||
             (cStack0000000000000041 == '\n')) || (cStack0000000000000041 == '\r'));
    iVar2 = MathTrigonometryFunction0(*(uint64_t *)(unaff_RSI + 0x170),0xffffffff,1);
    if (iVar2 != 0) goto SystemCore_EventHandler5;
    do {
      iVar2 = SystemMonitor(*(uint64_t *)(unaff_RSI + 0x170),&stack0x00000040);
      if (iVar2 != 0) goto SystemCore_EventHandler5;
    } while (cStack0000000000000040 != '<');
    pcVar5 = &stack0x00000050;
    uVar3 = uVar8;
    do {
      iVar2 = SystemMonitor(*(uint64_t *)(unaff_RSI + 0x170),&stack0x00000040);
      if (iVar2 != 0) goto SystemCore_EventHandler5;
      if ((int)uVar3 < 0x200) {
        uVar3 = (uint64_t)((int)uVar3 + 1);
        *pcVar5 = cStack0000000000000040;
        pcVar5 = pcVar5 + 1;
      }
    } while (cStack0000000000000040 != '>');
    iVar2 = UIComponent_AdvancedManager();
    uVar6 = uVar8;
    uVar7 = uVar8;
    if (iVar2 != 0) goto SystemCore_EventHandler5;
    do {
      iVar2 = SystemMonitor(*(uint64_t *)(unaff_RSI + 0x170),&stack0x00000040);
      if (iVar2 != 0) goto SystemCore_EventHandler5;
      if ((int64_t)uVar6 < 0x200) {
        uVar7 = (uint64_t)((int)uVar7 + 1);
        *(char *)(unaff_RBP + 0x350 + uVar6) = cStack0000000000000040;
        uVar6 = uVar6 + 1;
      }
    } while (cStack0000000000000040 != '<');
    iVar9 = (int)uVar7 + -1;
    iVar2 = SystemMonitor(*(uint64_t *)(unaff_RSI + 0x170),&stack0x00000040);
    if (iVar2 != 0) goto SystemCore_EventHandler5;
    if (cStack0000000000000040 == '/') {
      do {
        iVar2 = SystemMonitor(*(uint64_t *)(unaff_RSI + 0x170),&stack0x00000040);
        if (iVar2 != 0) goto SystemCore_EventHandler5;
      } while (cStack0000000000000040 != '>');
    }
    else {
      iVar2 = MathTrigonometryFunction0(*(uint64_t *)(unaff_RSI + 0x170),0xfffffffe,1);
      if (iVar2 != 0) goto SystemCore_EventHandler5;
    }
    uVar3 = (uint64_t)((int)uVar3 + -1);
    if (0x1ff < uVar3) break;
    (&stack0x00000050)[uVar3] = 0;
    if (0x1ff < (uint64_t)(int64_t)iVar9) break;
    *(int8_t *)(unaff_RBP + 0x350 + (int64_t)iVar9) = 0;
    iVar2 = SystemCore_Optimizer(&processed_var_7812_ptr,&stack0x00000050,5);
    if (iVar2 == 0) {
      SystemMemory_Controller();
    }
    else if (iVar9 == 0) {
      cVar4 = '\0';
      uVar3 = uVar8;
      do {
        if ((int64_t)uVar3 < 0x200) {
          cVar4 = (&stack0x00000050)[uVar3];
          uVar3 = uVar3 + 1;
        }
        uVar6 = uVar8;
      } while (cVar4 != '\"');
      do {
        pcVar5 = &stack0x00000050 + uVar3;
        uVar3 = uVar3 + 1;
        if (*pcVar5 == '\"') break;
        *(char *)(unaff_RBP + 0x150 + uVar6) = *pcVar5;
        uVar6 = uVar6 + 1;
      } while ((int64_t)uVar3 < 0x1ff);
      *(int8_t *)(unaff_RBP + 0x150 + uVar6) = 0;
      iVar2 = SystemCore_Optimizer(&processed_var_7824_ptr,&stack0x00000050,8);
      if (iVar2 == 0) {
        SystemMemory_Controller();
      }
      else {
        iVar2 = SystemCore_Optimizer(&processed_var_7848_ptr,&stack0x00000050,0xd);
        if (iVar2 == 0) {
          SystemMemory_Controller();
        }
        else {
          iVar2 = SystemCore_Optimizer(&processed_var_7880_ptr,&stack0x00000050,0xe);
          if (iVar2 == 0) {
            SystemMemory_Controller();
          }
          else {
            iVar2 = SystemCore_Optimizer(&processed_var_7912_ptr,&stack0x00000050,9);
            if (iVar2 == 0) {
              SystemMemory_Controller();
            }
            else {
              iVar2 = SystemCore_Optimizer(&processed_var_7936_ptr,&stack0x00000050,0xb);
              if (iVar2 == 0) {
                SystemMemory_Controller();
              }
            }
          }
        }
      }
    }
    else {
      func_0x00018076b870(&stack0x00000050);
      SystemMemory_Controller();
    }
  }
  UltraHighFreq_ThreadManager1();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}






// 函数: void FUN_1807c4ba8(void)
void FUN_1807c4ba8(void)

{
  code *pcVar1;
  int iVar2;
  uint64_t uVar3;
  char cVar4;
  char *pcVar5;
  uint64_t uVar6;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t uVar7;
  int8_t uVar8;
  uint64_t unaff_R12;
  int iVar9;
  char cStack0000000000000040;
  char cStack0000000000000041;
  
  do {
    uVar3 = unaff_R12 & 0xffffffff;
    cStack0000000000000040 = (char)uVar3;
    do {
      iVar2 = SystemMonitor(*(uint64_t *)(unaff_RSI + 0x170),(int64_t)&stack0x00000040 + 1);
      if (iVar2 != 0) goto LAB_1807c4fe3;
    } while ((((cStack0000000000000041 == ' ') || (cStack0000000000000041 == '\t')) ||
             (cStack0000000000000041 == '\n')) || (cStack0000000000000041 == '\r'));
    iVar2 = MathTrigonometryFunction0(*(uint64_t *)(unaff_RSI + 0x170),0xffffffff,1);
    if (iVar2 != 0) {
LAB_1807c4fe3:
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x550) ^ (uint64_t)&stack0x00000000);
    }
    do {
      iVar2 = SystemMonitor(*(uint64_t *)(unaff_RSI + 0x170),&stack0x00000040);
      if (iVar2 != 0) goto LAB_1807c4fe3;
    } while (cStack0000000000000040 != '<');
    pcVar5 = &stack0x00000050;
    do {
      iVar2 = SystemMonitor(*(uint64_t *)(unaff_RSI + 0x170),&stack0x00000040);
      if (iVar2 != 0) goto LAB_1807c4fe3;
      if ((int)uVar3 < 0x200) {
        uVar3 = (uint64_t)((int)uVar3 + 1);
        *pcVar5 = cStack0000000000000040;
        pcVar5 = pcVar5 + 1;
      }
    } while (cStack0000000000000040 != '>');
    uVar7 = unaff_R12 & 0xffffffff;
    iVar2 = UIComponent_AdvancedManager();
    uVar6 = unaff_R12;
    if (iVar2 != 0) goto LAB_1807c4fe3;
    do {
      iVar2 = SystemMonitor(*(uint64_t *)(unaff_RSI + 0x170),&stack0x00000040);
      if (iVar2 != 0) goto LAB_1807c4fe3;
      if ((int64_t)uVar6 < 0x200) {
        uVar7 = (uint64_t)((int)uVar7 + 1);
        *(char *)(unaff_RBP + 0x350 + uVar6) = cStack0000000000000040;
        uVar6 = uVar6 + 1;
      }
    } while (cStack0000000000000040 != '<');
    iVar9 = (int)uVar7 + -1;
    iVar2 = SystemMonitor(*(uint64_t *)(unaff_RSI + 0x170),&stack0x00000040);
    if (iVar2 != 0) goto LAB_1807c4fe3;
    if (cStack0000000000000040 == '/') {
      do {
        iVar2 = SystemMonitor(*(uint64_t *)(unaff_RSI + 0x170),&stack0x00000040);
        if (iVar2 != 0) goto LAB_1807c4fe3;
      } while (cStack0000000000000040 != '>');
    }
    else {
      iVar2 = MathTrigonometryFunction0(*(uint64_t *)(unaff_RSI + 0x170),0xfffffffe,1);
      if (iVar2 != 0) goto LAB_1807c4fe3;
    }
    uVar3 = (uint64_t)((int)uVar3 + -1);
    if (0x1ff < uVar3) {
FUN_1807c5026:
      UltraHighFreq_ThreadManager1();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar8 = (int8_t)unaff_R12;
    (&stack0x00000050)[uVar3] = uVar8;
    if (0x1ff < (uint64_t)(int64_t)iVar9) goto FUN_1807c5026;
    *(int8_t *)(unaff_RBP + 0x350 + (int64_t)iVar9) = uVar8;
    iVar2 = SystemCore_Optimizer(&processed_var_7812_ptr,&stack0x00000050,5);
    if (iVar2 == 0) {
      SystemMemory_Controller();
    }
    else if (iVar9 == 0) {
      cVar4 = '\0';
      uVar3 = unaff_R12;
      do {
        if ((int64_t)uVar3 < 0x200) {
          cVar4 = (&stack0x00000050)[uVar3];
          uVar3 = uVar3 + 1;
        }
        uVar6 = unaff_R12;
      } while (cVar4 != '\"');
      do {
        pcVar5 = &stack0x00000050 + uVar3;
        uVar3 = uVar3 + 1;
        if (*pcVar5 == '\"') break;
        *(char *)(unaff_RBP + 0x150 + uVar6) = *pcVar5;
        uVar6 = uVar6 + 1;
      } while ((int64_t)uVar3 < 0x1ff);
      *(int8_t *)(unaff_RBP + 0x150 + uVar6) = uVar8;
      iVar2 = SystemCore_Optimizer(&processed_var_7824_ptr,&stack0x00000050,8);
      if (iVar2 == 0) {
        SystemMemory_Controller();
      }
      else {
        iVar2 = SystemCore_Optimizer(&processed_var_7848_ptr,&stack0x00000050,0xd);
        if (iVar2 == 0) {
          SystemMemory_Controller();
        }
        else {
          iVar2 = SystemCore_Optimizer(&processed_var_7880_ptr,&stack0x00000050,0xe);
          if (iVar2 == 0) {
            SystemMemory_Controller();
          }
          else {
            iVar2 = SystemCore_Optimizer(&processed_var_7912_ptr,&stack0x00000050,9);
            if (iVar2 == 0) {
              SystemMemory_Controller();
            }
            else {
              iVar2 = SystemCore_Optimizer(&processed_var_7936_ptr,&stack0x00000050,0xb);
              if (iVar2 == 0) {
                SystemMemory_Controller();
              }
            }
          }
        }
      }
    }
    else {
      func_0x00018076b870(&stack0x00000050);
      SystemMemory_Controller();
    }
  } while( true );
}






// 函数: void SystemCore_EventHandler5(void)
void SystemCore_EventHandler5(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x550) ^ (uint64_t)&stack0x00000000);
}






// 函数: void SystemCore_EventHandlerd(void)
void SystemCore_EventHandlerd(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x550) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1807c5026(void)
void FUN_1807c5026(void)

{
  code *pcVar1;
  
  UltraHighFreq_ThreadManager1();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




