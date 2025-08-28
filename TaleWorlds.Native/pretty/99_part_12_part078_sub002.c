#include "ultra_high_freq_fun_definitions.h"
/* UISystem_Controller - UISystem_Controller */
#define UISystem_Controller UISystem_Controller
/* 函数别名定义: SystemInputManager */
#define SystemInputManager SystemInputManager
#include "SystemInputManager0_definition.h"
#include "TaleWorlds.Native.Split.h"
// 99_part_12_part078_sub002.c - 1 个函数
// 函数: void function_8a0552(int32_t param_1)
void function_8a0552(int32_t param_1)
{
  int64_t lVar1;
  uint64_t *puVar2;
  int in_EAX;
  int iVar3;
  int32_t *puVar4;
  int64_t unaff_RBP;
  int32_t unaff_ESI;
  int64_t *unaff_RDI;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  uint64_t local_var_30;
  int32_t local_var_38;
  int32_t local_buffer_98;
  if (in_EAX == 0) {
    puVar4 = *(int32_t **)(unaff_RBP + 0x20);
    local_buffer_98 = unaff_ESI;
    while( true ) {
      if ((puVar4 < *(int32_t **)(unaff_RBP + 0x20)) ||
         (*(int32_t **)(unaff_RBP + 0x20) + (int64_t)*(int *)(unaff_RBP + 0x28) * 2 <= puVar4))
      {
// WARNING: Subroutine does not return
        SystemThreadManager(param_1,&local_buffer_00000040);
      }
      iVar3 = UltraHighFreq_ResourceLoader1(param_1,local_buffer_98);
      if ((iVar3 != 0) || (*(int *)(unaff_RDI[1] + 0x18) != 0)) break;
      lVar1 = *unaff_RDI;
      local_var_30._4_4_ = *puVar4;
      puVar2 = *(uint64_t **)(lVar1 + 8);
      iVar3 = (**(code **)*puVar2)(puVar2,(int64_t)&local_buffer_00000030 + 4,4);
      if (iVar3 != 0) {
        return;
      }
      puVar2 = *(uint64_t **)(lVar1 + 8);
      local_var_38 = puVar4[1];
      iVar3 = (**(code **)*puVar2)(puVar2,&local_buffer_00000038,4);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = UISystem_Controller(extraout_XMM0_Da,&local_buffer_00000098);
      if (iVar3 != 0) {
        return;
      }
      puVar4 = puVar4 + 2;
      param_1 = extraout_XMM0_Da_00;
    }
  }
  return;
}