#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: MathTrigonometryFunction */
#define MathTrigonometryFunction MathTrigonometryFunction
#include "SystemCore_ConfigManager_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_12_part001.c - 14 个函数
#include "TaleWorlds.Native.Split.h"
// 99_part_12.c - 500 个函数
// 函数: void SystemCore_c5030(int64_t param_1)
void SystemCore_c5030(int64_t param_1)
{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int64_t lVar6;
  char *pcVar7;
  int64_t lVar8;
  void *puVar9;
  int8_t stack_array_678 [32];
  uint64_t local_var_658;
  int32_t local_var_650;
  int8_t local_var_648;
  char cStack_638;
  char acStack_637 [3];
  int32_t stack_array_634 [3];
  char acStack_628 [517];
  char acStack_423 [507];
  char acStack_228 [512];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_678;
  stack_array_634[0] = 0x200;
  iVar3 = 0x200;
  iVar2 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0,0);
  if (iVar2 == 0) {
    local_var_658 = 0;
    iVar2 = SystemCore_c4340(param_1,acStack_628,stack_array_634,0);
    if ((iVar2 == 0) && (iVar2 = SystemCore_Optimizer(&processed_var_8000_ptr,acStack_628,0xc), iVar2 == 0)) {
      iVar2 = SystemCore_Optimizer(&processed_var_8016_ptr,acStack_628,0x10);
      while (iVar2 != 0) {
        iVar2 = 0;
        cStack_638 = '\0';
        do {
          iVar3 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),acStack_637);
          if (iVar3 != 0) goto UISystem_StateManager;
        } while ((((acStack_637[0] == ' ') || (acStack_637[0] == '\t')) || (acStack_637[0] == '\n'))
                || (acStack_637[0] == '\r'));
        iVar3 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0xffffffff,1);
        if (iVar3 != 0) goto UISystem_StateManager;
        do {
          iVar3 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_638);
          if (iVar3 != 0) goto UISystem_StateManager;
        } while (cStack_638 != '<');
        pcVar7 = acStack_628;
        do {
          iVar3 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_638);
          if (iVar3 != 0) goto UISystem_StateManager;
          if (iVar2 < 0x200) {
            iVar2 = iVar2 + 1;
            *pcVar7 = cStack_638;
            pcVar7 = pcVar7 + 1;
          }
        } while (cStack_638 != '>');
        iVar3 = 0;
        lVar8 = 0;
        iVar4 = UIComponent_AdvancedManager(param_1,0);
        if (iVar4 != 0) goto UISystem_StateManager;
        do {
          iVar4 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_638);
          if (iVar4 != 0) goto UISystem_StateManager;
          if (lVar8 < 0x200) {
            iVar3 = iVar3 + 1;
            acStack_228[lVar8] = cStack_638;
            lVar8 = lVar8 + 1;
          }
        } while (cStack_638 != '<');
        iVar3 = iVar3 + -1;
        iVar4 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_638);
        if (iVar4 != 0) goto UISystem_StateManager;
        if (cStack_638 == '/') {
          do {
            iVar4 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_638);
            if (iVar4 != 0) goto UISystem_StateManager;
          } while (cStack_638 != '>');
        }
        else {
          iVar4 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0xfffffffe,1);
          if (iVar4 != 0) goto UISystem_StateManager;
        }
        if (0x1ff < (uint64_t)(int64_t)(iVar2 + -1)) goto SystemCore_c55fe;
        acStack_628[iVar2 + -1] = '\0';
        if (0x1ff < (uint64_t)(int64_t)iVar3) goto SystemCore_c55fe;
        acStack_228[iVar3] = '\0';
        iVar2 = SystemCore_Optimizer(&processed_var_8016_ptr,acStack_628,0x10);
      }
      do {
        if (iVar3 == 0) {
          cVar5 = '\0';
          lVar8 = 0;
          iVar3 = 0;
          lVar6 = 0;
          do {
            if (lVar8 < 0x200) {
              cVar5 = acStack_628[lVar8];
              lVar8 = lVar8 + 1;
            }
          } while (cVar5 != '\"');
          do {
            pcVar7 = acStack_628 + lVar8;
            lVar8 = lVar8 + 1;
            if (*pcVar7 == '\"') break;
            acStack_628[lVar6 + 0x200] = *pcVar7;
            iVar3 = iVar3 + 1;
            lVar6 = lVar6 + 1;
          } while (lVar8 < 0x1ff);
          acStack_628[lVar6 + 0x200] = '\0';
          iVar2 = SystemCore_Optimizer(&processed_var_8016_ptr,acStack_628,0x11);
          if (iVar2 == 0) {
            iVar2 = SystemCore_Optimizer(&processed_var_8036_ptr,acStack_628 + 0x200,5);
            pcVar7 = acStack_423;
            if (iVar2 != 0) {
              pcVar7 = acStack_628 + 0x200;
            }
            puVar9 = &processed_var_7836_ptr;
            goto LAB_1807c5413;
          }
          iVar2 = SystemCore_Optimizer(&processed_var_8044_ptr,acStack_628,0xd);
          if (iVar2 == 0) {
            pcVar7 = acStack_628 + 0x200;
            local_var_658 = CONCAT44(local_var_658._4_4_,iVar3 + 1);
            puVar9 = &processed_var_8044_ptr;
            goto LAB_1807c5424;
          }
          iVar2 = SystemCore_Optimizer(&processed_var_8052_ptr,acStack_628,0xe);
          if (iVar2 == 0) {
            pcVar7 = acStack_628 + 0x200;
            local_var_658 = CONCAT44(local_var_658._4_4_,iVar3 + 1);
            puVar9 = &processed_var_8052_ptr;
            goto LAB_1807c5424;
          }
        }
        else {
          puVar9 = (void *)SystemFunction_00018076b870(acStack_628);
          pcVar7 = acStack_228;
LAB_1807c5413:
          local_var_658 = CONCAT44(local_var_658._4_4_,iVar3 + 1);
LAB_1807c5424:
          local_var_648 = 0;
          local_var_650 = 3;
          SystemMemory_Controller(param_1,8,puVar9,pcVar7);
        }
        iVar2 = 0;
        cStack_638 = '\0';
        do {
          iVar3 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),acStack_637);
          if (iVar3 != 0) goto UISystem_StateManager;
        } while (((acStack_637[0] == ' ') || (acStack_637[0] == '\t')) ||
                ((acStack_637[0] == '\n' || (acStack_637[0] == '\r'))));
        iVar3 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0xffffffff,1);
        if (iVar3 != 0) break;
        do {
          iVar3 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_638);
          if (iVar3 != 0) goto UISystem_StateManager;
        } while (cStack_638 != '<');
        pcVar7 = acStack_628;
        do {
          iVar3 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_638);
          if (iVar3 != 0) goto UISystem_StateManager;
          if (iVar2 < 0x200) {
            iVar2 = iVar2 + 1;
            *pcVar7 = cStack_638;
            pcVar7 = pcVar7 + 1;
          }
        } while (cStack_638 != '>');
        iVar3 = 0;
        lVar8 = 0;
        iVar4 = UIComponent_AdvancedManager(param_1,0);
        if (iVar4 != 0) break;
        do {
          iVar4 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_638);
          if (iVar4 != 0) goto UISystem_StateManager;
          if (lVar8 < 0x200) {
            iVar3 = iVar3 + 1;
            acStack_228[lVar8] = cStack_638;
            lVar8 = lVar8 + 1;
          }
        } while (cStack_638 != '<');
        iVar3 = iVar3 + -1;
        iVar4 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_638);
        if (iVar4 != 0) break;
        if (cStack_638 == '/') {
          do {
            iVar4 = SystemMonitor();
            if (iVar4 != 0) goto UISystem_StateManager;
          } while (cStack_638 != '>');
        }
        else {
          iVar4 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0xfffffffe,1);
          if (iVar4 != 0) break;
        }
        if (0x1ff < (uint64_t)(int64_t)(iVar2 + -1)) {
SystemCore_c55fe:
          UltraHighFreq_ThreadManager1();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        acStack_628[iVar2 + -1] = '\0';
        if (0x1ff < (uint64_t)(int64_t)iVar3) goto SystemCore_c55fe;
        acStack_228[iVar3] = '\0';
      } while( true );
    }
  }
UISystem_StateManager:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_678);
}
// 函数: void SystemCore_c50a5(void)
void SystemCore_c50a5(void)
{
  code *pcVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  char cVar4;
  int64_t lVar5;
  char *pcVar6;
  int64_t lVar7;
  int64_t unaff_RBP;
  int iVar8;
  int64_t unaff_RDI;
  int unaff_R15D;
  char cStack0000000000000040;
  char cStack0000000000000041;
  iVar2 = SystemCore_Optimizer(&processed_var_8000_ptr,&local_buffer_00000050,in_EAX + 0xc);
  if (iVar2 != 0) {
LAB_1807c55cb:
// WARNING: Subroutine does not return
    SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x550) ^ (uint64_t)&local_buffer_00000000);
  }
  iVar2 = SystemCore_Optimizer(&processed_var_8016_ptr,&local_buffer_00000050,0x10);
  while (iVar2 != 0) {
    iVar2 = 0;
    cStack0000000000000040 = '\0';
    do {
      iVar3 = SystemMonitor(*(uint64_t *)(unaff_RDI + 0x170),(int64_t)&local_buffer_00000040 + 1);
      if (iVar3 != 0) goto LAB_1807c55cb;
    } while ((((cStack0000000000000041 == ' ') || (cStack0000000000000041 == '\t')) ||
             (cStack0000000000000041 == '\n')) || (cStack0000000000000041 == '\r'));
    iVar3 = MathTrigonometryFunction0(*(uint64_t *)(unaff_RDI + 0x170),0xffffffff,1);
    if (iVar3 != 0) goto LAB_1807c55cb;
    do {
      iVar3 = SystemMonitor(*(uint64_t *)(unaff_RDI + 0x170),&local_buffer_00000040);
      if (iVar3 != 0) goto LAB_1807c55cb;
    } while (cStack0000000000000040 != '<');
    pcVar6 = &local_buffer_00000050;
    do {
      iVar3 = SystemMonitor(*(uint64_t *)(unaff_RDI + 0x170),&local_buffer_00000040);
      if (iVar3 != 0) goto LAB_1807c55cb;
      if (iVar2 < 0x200) {
        iVar2 = iVar2 + 1;
        *pcVar6 = cStack0000000000000040;
        pcVar6 = pcVar6 + 1;
      }
    } while (cStack0000000000000040 != '>');
    iVar8 = 0;
    lVar7 = 0;
    iVar3 = UIComponent_AdvancedManager();
    if (iVar3 != 0) goto LAB_1807c55cb;
    do {
      iVar3 = SystemMonitor(*(uint64_t *)(unaff_RDI + 0x170),&local_buffer_00000040);
      if (iVar3 != 0) goto LAB_1807c55cb;
      if (lVar7 < 0x200) {
        iVar8 = iVar8 + 1;
        *(char *)(unaff_RBP + 0x350 + lVar7) = cStack0000000000000040;
        lVar7 = lVar7 + 1;
      }
    } while (cStack0000000000000040 != '<');
    unaff_R15D = iVar8 + -1;
    iVar3 = SystemMonitor(*(uint64_t *)(unaff_RDI + 0x170),&local_buffer_00000040);
    if (iVar3 != 0) goto LAB_1807c55cb;
    if (cStack0000000000000040 == '/') {
      do {
        iVar3 = SystemMonitor(*(uint64_t *)(unaff_RDI + 0x170),&local_buffer_00000040);
        if (iVar3 != 0) goto LAB_1807c55cb;
      } while (cStack0000000000000040 != '>');
    }
    else {
      iVar3 = MathTrigonometryFunction0(*(uint64_t *)(unaff_RDI + 0x170),0xfffffffe,1);
      if (iVar3 != 0) goto LAB_1807c55cb;
    }
    if (0x1ff < (uint64_t)(int64_t)(iVar2 + -1)) goto SystemCore_c55fe;
    (&local_buffer_00000050)[iVar2 + -1] = 0;
    if (0x1ff < (uint64_t)(int64_t)unaff_R15D) goto SystemCore_c55fe;
    *(int8_t *)(unaff_RBP + 0x350 + (int64_t)unaff_R15D) = 0;
    iVar2 = SystemCore_Optimizer(&processed_var_8016_ptr,&local_buffer_00000050,0x10);
  }
  do {
    if (unaff_R15D == 0) {
      cVar4 = '\0';
      lVar7 = 0;
      lVar5 = 0;
      do {
        if (lVar7 < 0x200) {
          cVar4 = (&local_buffer_00000050)[lVar7];
          lVar7 = lVar7 + 1;
        }
      } while (cVar4 != '\"');
      do {
        pcVar6 = &local_buffer_00000050 + lVar7;
        lVar7 = lVar7 + 1;
        if (*pcVar6 == '\"') break;
        *(char *)(unaff_RBP + 0x150 + lVar5) = *pcVar6;
        lVar5 = lVar5 + 1;
      } while (lVar7 < 0x1ff);
      *(int8_t *)(unaff_RBP + 0x150 + lVar5) = 0;
      iVar2 = SystemCore_Optimizer(&processed_var_8016_ptr,&local_buffer_00000050,0x11);
      if (iVar2 == 0) {
        SystemCore_Optimizer(&processed_var_8036_ptr,unaff_RBP + 0x150,5);
        goto LAB_1807c5424;
      }
      iVar2 = SystemCore_Optimizer(&processed_var_8044_ptr,&local_buffer_00000050,0xd);
      if ((iVar2 == 0) || (iVar2 = SystemCore_Optimizer(&processed_var_8052_ptr,&local_buffer_00000050,0xe), iVar2 == 0))
      goto LAB_1807c5424;
    }
    else {
      SystemFunction_00018076b870(&local_buffer_00000050);
LAB_1807c5424:
      SystemMemory_Controller();
    }
    iVar2 = 0;
    cStack0000000000000040 = '\0';
    do {
      iVar3 = SystemMonitor(*(uint64_t *)(unaff_RDI + 0x170),(int64_t)&local_buffer_00000040 + 1);
      if (iVar3 != 0) goto LAB_1807c55cb;
    } while (((cStack0000000000000041 == ' ') || (cStack0000000000000041 == '\t')) ||
            ((cStack0000000000000041 == '\n' || (cStack0000000000000041 == '\r'))));
    iVar3 = MathTrigonometryFunction0(*(uint64_t *)(unaff_RDI + 0x170),0xffffffff,1);
    if (iVar3 != 0) goto LAB_1807c55cb;
    do {
      iVar3 = SystemMonitor(*(uint64_t *)(unaff_RDI + 0x170),&local_buffer_00000040);
      if (iVar3 != 0) goto LAB_1807c55cb;
    } while (cStack0000000000000040 != '<');
    pcVar6 = &local_buffer_00000050;
    do {
      iVar3 = SystemMonitor(*(uint64_t *)(unaff_RDI + 0x170),&local_buffer_00000040);
      if (iVar3 != 0) goto LAB_1807c55cb;
      if (iVar2 < 0x200) {
        iVar2 = iVar2 + 1;
        *pcVar6 = cStack0000000000000040;
        pcVar6 = pcVar6 + 1;
      }
    } while (cStack0000000000000040 != '>');
    iVar8 = 0;
    lVar7 = 0;
    iVar3 = UIComponent_AdvancedManager();
    if (iVar3 != 0) goto LAB_1807c55cb;
    do {
      iVar3 = SystemMonitor(*(uint64_t *)(unaff_RDI + 0x170),&local_buffer_00000040);
      if (iVar3 != 0) goto LAB_1807c55cb;
      if (lVar7 < 0x200) {
        iVar8 = iVar8 + 1;
        *(char *)(unaff_RBP + 0x350 + lVar7) = cStack0000000000000040;
        lVar7 = lVar7 + 1;
      }
    } while (cStack0000000000000040 != '<');
    unaff_R15D = iVar8 + -1;
    iVar3 = SystemMonitor(*(uint64_t *)(unaff_RDI + 0x170),&local_buffer_00000040);
    if (iVar3 != 0) goto LAB_1807c55cb;
    if (cStack0000000000000040 == '/') {
      do {
        iVar3 = SystemMonitor();
        if (iVar3 != 0) goto LAB_1807c55cb;
      } while (cStack0000000000000040 != '>');
    }
    else {
      iVar3 = MathTrigonometryFunction0(*(uint64_t *)(unaff_RDI + 0x170),0xfffffffe,1);
      if (iVar3 != 0) goto LAB_1807c55cb;
    }
    if (0x1ff < (uint64_t)(int64_t)(iVar2 + -1)) {
SystemCore_c55fe:
      UltraHighFreq_ThreadManager1();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (&local_buffer_00000050)[iVar2 + -1] = 0;
    if (0x1ff < (uint64_t)(int64_t)unaff_R15D) goto SystemCore_c55fe;
    *(int8_t *)(unaff_RBP + 0x350 + (int64_t)unaff_R15D) = 0;
  } while( true );
}
// 函数: void UISystem_StateManager(void)
void UISystem_StateManager(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x550) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_c55fe(void)
void SystemCore_c55fe(void)
{
  code *pcVar1;
  UltraHighFreq_ThreadManager1();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_c5610(int64_t param_1)
void SystemCore_c5610(int64_t param_1)
{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int8_t stack_array_268 [32];
  int iStack_248;
  int32_t local_var_240;
  int8_t local_var_238;
  char cStack_228;
  char acStack_227 [3];
  int32_t stack_array_224 [2];
  char acStack_219 [513];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_268;
  stack_array_224[0] = 0;
  iVar3 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0,0);
  if (iVar3 == 0) {
    lVar5 = 0;
    do {
      do {
        iVar3 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_228);
        if ((iVar3 != 0) || (0x1ff < lVar5)) goto SystemCore_c5975;
        acStack_219[lVar5 + 1] = cStack_228;
        lVar5 = lVar5 + 1;
        if (cStack_228 == '\n') goto LAB_1807c56d7;
      } while (cStack_228 != '\r');
      SystemMonitor(*(uint64_t *)(param_1 + 0x170),acStack_227);
      MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0xffffffff,1);
    } while (acStack_227[0] == '\n');
LAB_1807c56d7:
    iVar3 = SystemCore_Optimizer(acStack_219 + 1,&processed_var_7568_ptr,7);
    if (iVar3 == 0) {
      iVar3 = UIComponent_AdvancedManager(param_1,0);
      while (iVar3 == 0) {
        lVar5 = 0;
        do {
          iVar3 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_228);
          if (iVar3 != 0) break;
          if (lVar5 < 0x200) {
            acStack_219[lVar5 + 1] = cStack_228;
            lVar5 = lVar5 + 1;
          }
        } while (cStack_228 != ':');
        iVar3 = SystemCore_Optimizer(&processed_var_8064_ptr,acStack_219 + 1,7);
        if ((iVar3 != 0) || (iVar3 = UIComponent_AdvancedManager(param_1,0), iVar3 != 0)) break;
        lVar5 = 0;
        do {
          iVar3 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_228);
          if (iVar3 != 0) break;
          if (lVar5 < 0x1ff) {
            acStack_219[lVar5 + 1] = cStack_228;
            lVar5 = lVar5 + 1;
          }
        } while (cStack_228 != ',');
        if (0x1ff < lVar5 - 1U) {
SystemCore_c5995:
          UltraHighFreq_ThreadManager1();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        acStack_219[lVar5] = '\0';
        stack_array_224[0] = atoi(acStack_219 + 1);
        local_var_238 = 0;
        local_var_240 = 1;
        iStack_248 = 4;
        SystemMemory_Controller(param_1,8,&processed_var_8052_ptr,stack_array_224);
        iVar3 = UIComponent_AdvancedManager(param_1,0);
        if (iVar3 != 0) break;
        iVar3 = 0;
        uVar6 = 0;
LAB_1807c5810:
        do {
          iVar4 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_228);
          if ((iVar4 != 0) || (cStack_228 == '\n')) break;
          if (cStack_228 != '\r') {
            if ((int64_t)uVar6 < 0x1ff) {
              iVar3 = iVar3 + 1;
              acStack_219[uVar6 + 1] = cStack_228;
              uVar6 = uVar6 + 1;
            }
            if (cStack_228 != '\r') goto LAB_1807c5810;
          }
          SystemMonitor(*(uint64_t *)(param_1 + 0x170),acStack_227);
          MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0xffffffff,1);
        } while (acStack_227[0] == '\n');
        if (0x1ff < uVar6) goto SystemCore_c5995;
        iStack_248 = iVar3 + 1;
        local_var_238 = 0;
        local_var_240 = 3;
        acStack_219[uVar6 + 1] = '\0';
        SystemMemory_Controller(param_1,8,&rendering_buffer_2136_ptr,acStack_219 + 1);
        iVar3 = UIComponent_AdvancedManager(param_1,0);
        if (iVar3 != 0) break;
        iVar3 = 0;
        uVar6 = 0;
        do {
          iVar4 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_228);
          if (iVar4 != 0) break;
          if (((cStack_228 != '\n') && (cStack_228 != '\r')) && ((int64_t)uVar6 < 0x1ff)) {
            iVar3 = iVar3 + 1;
            acStack_219[uVar6 + 1] = cStack_228;
            uVar6 = uVar6 + 1;
          }
          cVar2 = SystemCore_c4780(param_1);
        } while (cVar2 == '\0');
        if (0x1ff < uVar6) goto SystemCore_c5995;
        local_var_238 = 0;
        local_var_240 = 3;
        acStack_219[uVar6 + 1] = '\0';
        iStack_248 = iVar3;
        SystemMemory_Controller(param_1,8,&processed_var_7836_ptr,acStack_219 + 1);
        iVar3 = UIComponent_AdvancedManager(param_1,0);
      }
    }
  }
SystemCore_c5975:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_268);
}
// 函数: void SystemCore_c565a(void)
void SystemCore_c565a(void)
{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  char cStack0000000000000040;
  char cStack0000000000000041;
  int32_t local_buffer_44;
  lVar4 = 0;
  do {
    do {
      iVar3 = SystemMonitor(*(uint64_t *)(unaff_RDI + 0x170),&local_buffer_00000040);
      if ((iVar3 != 0) || (0x1ff < lVar4)) goto LAB_1807c5965;
      (&local_buffer_00000050)[lVar4] = cStack0000000000000040;
      lVar4 = lVar4 + 1;
      if (cStack0000000000000040 == '\n') goto LAB_1807c56d7;
    } while (cStack0000000000000040 != '\r');
    SystemMonitor(*(uint64_t *)(unaff_RDI + 0x170),(int64_t)&local_buffer_00000040 + 1);
    MathTrigonometryFunction0(*(uint64_t *)(unaff_RDI + 0x170),0xffffffff,1);
  } while (cStack0000000000000041 == '\n');
LAB_1807c56d7:
  iVar3 = SystemCore_Optimizer(&local_buffer_00000050,&processed_var_7568_ptr,7);
  if (iVar3 == 0) {
    iVar3 = UIComponent_AdvancedManager();
    while (iVar3 == 0) {
      lVar4 = 0;
      do {
        iVar3 = SystemMonitor(*(uint64_t *)(unaff_RDI + 0x170),&local_buffer_00000040);
        if (iVar3 != 0) break;
        if (lVar4 < 0x200) {
          (&local_buffer_00000050)[lVar4] = cStack0000000000000040;
          lVar4 = lVar4 + 1;
        }
      } while (cStack0000000000000040 != ':');
      iVar3 = SystemCore_Optimizer(&processed_var_8064_ptr,&local_buffer_00000050,7);
      if ((iVar3 != 0) || (iVar3 = UIComponent_AdvancedManager(), iVar3 != 0)) break;
      lVar4 = 0;
      do {
        iVar3 = SystemMonitor(*(uint64_t *)(unaff_RDI + 0x170),&local_buffer_00000040);
        if (iVar3 != 0) break;
        if (lVar4 < 0x1ff) {
          (&local_buffer_00000050)[lVar4] = cStack0000000000000040;
          lVar4 = lVar4 + 1;
        }
      } while (cStack0000000000000040 != ',');
      if (0x1ff < lVar4 - 1U) {
SystemCore_c5995:
        UltraHighFreq_ThreadManager1();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (&local_buffer_0000004f)[lVar4] = 0;
      local_buffer_44 = atoi(&local_buffer_00000050);
      SystemMemory_Controller();
      iVar3 = UIComponent_AdvancedManager();
      if (iVar3 != 0) break;
      uVar5 = 0;
LAB_1807c5810:
      do {
        iVar3 = SystemMonitor(*(uint64_t *)(unaff_RDI + 0x170),&local_buffer_00000040);
        if ((iVar3 != 0) || (cStack0000000000000040 == '\n')) break;
        if (cStack0000000000000040 != '\r') {
          if ((int64_t)uVar5 < 0x1ff) {
            (&local_buffer_00000050)[uVar5] = cStack0000000000000040;
            uVar5 = uVar5 + 1;
          }
          if (cStack0000000000000040 != '\r') goto LAB_1807c5810;
        }
        SystemMonitor(*(uint64_t *)(unaff_RDI + 0x170),(int64_t)&local_buffer_00000040 + 1);
        MathTrigonometryFunction0(*(uint64_t *)(unaff_RDI + 0x170),0xffffffff,1);
      } while (cStack0000000000000041 == '\n');
      if (0x1ff < uVar5) goto SystemCore_c5995;
      (&local_buffer_00000050)[uVar5] = 0;
      SystemMemory_Controller();
      iVar3 = UIComponent_AdvancedManager();
      if (iVar3 != 0) break;
      uVar5 = 0;
      do {
        iVar3 = SystemMonitor(*(uint64_t *)(unaff_RDI + 0x170),&local_buffer_00000040);
        if (iVar3 != 0) break;
        if (((cStack0000000000000040 != '\n') && (cStack0000000000000040 != '\r')) &&
           ((int64_t)uVar5 < 0x1ff)) {
          (&local_buffer_00000050)[uVar5] = cStack0000000000000040;
          uVar5 = uVar5 + 1;
        }
        cVar2 = SystemCore_c4780();
      } while (cVar2 == '\0');
      if (0x1ff < uVar5) goto SystemCore_c5995;
      (&local_buffer_00000050)[uVar5] = 0;
      SystemMemory_Controller();
      iVar3 = UIComponent_AdvancedManager();
    }
  }
LAB_1807c5965:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x150) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_c5975(void)
void SystemCore_c5975(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x150) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_c5995(void)
void SystemCore_c5995(void)
{
  code *pcVar1;
  UltraHighFreq_ThreadManager1();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_c59a0(int64_t param_1)
void SystemCore_c59a0(int64_t param_1)
{
  code *pcVar1;
  int iVar2;
  int8_t stack_array_268 [32];
  int iStack_248;
  int32_t local_var_240;
  int8_t local_var_238;
  int iStack_228;
  int32_t local_var_224;
  int8_t stack_array_218 [512];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_268;
  iVar2 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0,0);
  if (((iVar2 == 0) && (iVar2 = SystemCore_MemoryManager0(param_1,stack_array_218,0x200,0), iVar2 == 0)) &&
     (iVar2 = SystemCore_Optimizer(stack_array_218,&processed_var_8072_ptr,10), iVar2 == 0)) {
    iVar2 = SystemCore_MemoryManager0(param_1,stack_array_218,0x200,0);
    while (iVar2 == 0) {
      iVar2 = SystemCore_Optimizer(&processed_var_6616_ptr,stack_array_218,4);
      if (iVar2 == 0) {
        iVar2 = SystemCore_MemoryManager0(param_1,stack_array_218,0x200,&iStack_228);
        if (iVar2 != 0) break;
        iStack_248 = iStack_228 + 1;
        local_var_238 = 0;
        local_var_240 = 3;
        SystemMemory_Controller(param_1,8,&processed_var_7836_ptr);
      }
      else {
        iVar2 = SystemCore_Optimizer(&processed_var_8084_ptr,stack_array_218,5);
        if (iVar2 == 0) {
          iVar2 = SystemCore_MemoryManager0(param_1,stack_array_218,0x200,&iStack_228);
          if (iVar2 != 0) break;
          iStack_248 = iStack_228 + 1;
          local_var_238 = 0;
          local_var_240 = 3;
          SystemMemory_Controller(param_1,8,&rendering_buffer_2136_ptr);
        }
        else {
          iVar2 = SystemCore_Optimizer(&processed_var_8092_ptr,stack_array_218,6);
          if (iVar2 == 0) {
            local_var_224 = 0;
            iVar2 = SystemCore_MemoryManager0(param_1,stack_array_218,0x200,&iStack_228);
            if (iVar2 != 0) break;
            if (0x1ff < (uint64_t)(int64_t)iStack_228) {
              UltraHighFreq_ThreadManager1();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            stack_array_218[iStack_228] = 0;
            local_var_224 = atoi(stack_array_218);
            local_var_238 = 0;
            local_var_240 = 1;
            iStack_248 = 4;
            SystemMemory_Controller(param_1,8,&processed_var_8052_ptr);
          }
          else {
            iVar2 = SystemCore_Optimizer(&processed_var_8104_ptr,stack_array_218,0xf);
            if (((iVar2 == 0) || (iVar2 = SystemCore_Optimizer(&processed_var_6376_ptr,stack_array_218,7), iVar2 == 0))
               && (iVar2 = SystemCore_MemoryManager0(param_1,stack_array_218,0x200,0), iVar2 != 0)) break;
          }
        }
      }
      iVar2 = SystemCore_MemoryManager0(param_1,stack_array_218,0x200,0);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_268);
}
// 函数: void SystemCore_c5a20(void)
void SystemCore_c5a20(void)
{
  code *pcVar1;
  int iVar2;
  int64_t unaff_RBP;
  int local_var_40;
  iVar2 = SystemCore_MemoryManager0();
  while (iVar2 == 0) {
    iVar2 = SystemCore_Optimizer(&processed_var_6616_ptr,&local_buffer_00000050,4);
    if (iVar2 == 0) {
      iVar2 = SystemCore_MemoryManager0();
      if (iVar2 != 0) break;
      SystemMemory_Controller();
    }
    else {
      iVar2 = SystemCore_Optimizer(&processed_var_8084_ptr,&local_buffer_00000050,5);
      if (iVar2 == 0) {
        iVar2 = SystemCore_MemoryManager0();
        if (iVar2 != 0) break;
        SystemMemory_Controller();
      }
      else {
        iVar2 = SystemCore_Optimizer(&processed_var_8092_ptr,&local_buffer_00000050,6);
        if (iVar2 == 0) {
          iVar2 = SystemCore_MemoryManager0();
          if (iVar2 != 0) break;
          if (0x1ff < (uint64_t)(int64_t)local_var_40) {
            UltraHighFreq_ThreadManager1();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (&local_buffer_00000050)[local_var_40] = 0;
          atoi(&local_buffer_00000050);
          SystemMemory_Controller();
        }
        else {
          iVar2 = SystemCore_Optimizer(&processed_var_8104_ptr,&local_buffer_00000050,0xf);
          if (((iVar2 == 0) ||
              (iVar2 = SystemCore_Optimizer(&processed_var_6376_ptr,&local_buffer_00000050,7), iVar2 == 0)) &&
             (iVar2 = SystemCore_MemoryManager0(), iVar2 != 0)) break;
        }
      }
    }
    iVar2 = SystemCore_MemoryManager0();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x150) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_c5c22(void)
void SystemCore_c5c22(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x150) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_c5c49(void)
void SystemCore_c5c49(void)
{
  code *pcVar1;
  UltraHighFreq_ThreadManager1();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_c5c50(int64_t param_1)
void SystemCore_c5c50(int64_t param_1)
{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int8_t stack_array_268 [32];
  int iStack_248;
  int32_t local_var_240;
  int8_t local_var_238;
  char cStack_228;
  char cStack_227;
  char cStack_226;
  char cStack_225;
  char cStack_224;
  char acStack_223 [11];
  char acStack_218 [512];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_268;
  iVar1 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0,0);
  if (iVar1 == 0) {
LAB_1807c5ca0:
    iVar1 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_227);
    if (iVar1 == 0) {
      if ((((cStack_227 != ' ') && (cStack_227 != '\t')) && (cStack_227 != '\n')) &&
         (cStack_227 != '\r')) {
        iVar1 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0xffffffff,1);
        if ((iVar1 != 0) ||
           (iVar1 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_228), iVar1 != 0))
        goto SystemCore_c5ea9;
        if ((cStack_228 == '#') || (cStack_228 == '[')) {
          do {
            do {
              iVar1 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_228);
              if (iVar1 != 0) goto SystemCore_c5ea9;
              if (cStack_228 == '\n') goto LAB_1807c5ca0;
            } while (cStack_228 != '\r');
            SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_226);
            MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0xffffffff,1);
          } while (cStack_226 == '\n');
        }
        else {
          iVar1 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0xffffffff,1);
          if (iVar1 != 0) goto SystemCore_c5ea9;
          iVar1 = 0;
          lVar3 = 0;
          do {
            iVar2 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_225);
            if (iVar2 != 0) goto SystemCore_c5ea9;
          } while (((cStack_225 == ' ') || (cStack_225 == '\t')) ||
                  ((cStack_225 == '\n' || (cStack_225 == '\r'))));
          iVar2 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0xffffffff,1);
          if (iVar2 != 0) goto SystemCore_c5ea9;
LAB_1807c5de0:
          do {
            iVar2 = SystemMonitor(*(uint64_t *)(param_1 + 0x170),&cStack_224);
            if (iVar2 != 0) goto SystemCore_c5ea9;
            if (cStack_224 == '\n') break;
            if (cStack_224 != '\r') {
              if (lVar3 < 0x1ff) {
                iVar1 = iVar1 + 1;
                acStack_218[lVar3] = cStack_224;
                lVar3 = lVar3 + 1;
              }
              if (cStack_224 != '\r') goto LAB_1807c5de0;
            }
            SystemMonitor(*(uint64_t *)(param_1 + 0x170),acStack_223);
            MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0xffffffff,1);
          } while (acStack_223[0] == '\n');
          acStack_218[lVar3] = '\0';
          iVar2 = SystemFunction_00018076b8c0(acStack_218);
          if (iVar2 == 0) goto SystemCore_c5ea9;
          iStack_248 = iVar1 + 1;
          local_var_238 = 0;
          local_var_240 = 3;
          SystemMemory_Controller(param_1,8,&processed_var_7836_ptr,acStack_218);
        }
      }
      goto LAB_1807c5ca0;
    }
  }
SystemCore_c5ea9:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_268);
}