#include "SystemAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_11_part021_sub001.c - 18 个函数
#include "TaleWorlds.Native.Split.h"
// 99_part_11_part021.c - 18 个函数
// 函数: void UtilitiesSystem_f0151(int64_t *param_1)
void UtilitiesSystem_f0151(int64_t *param_1)
{
  char cVar1;
  int iVar2;
  int32_t uVar3;
  char *pcVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint uVar7;
  char *pcVar9;
  uint64_t *unaff_R13;
  uint unaff_R14D;
  uint64_t uVar10;
  int64_t *plStack0000000000000060;
  char *local_var_70;
  char *local_var_78;
  int32_t local_var_80;
  int32_t local_buffer_84;
  uint uVar8;
  pcVar9 = local_var_78;
  plStack0000000000000060 = param_1;
  if (local_var_78 != (char *)0x0) {
    system_system_config = system_system_config + 1;
    pcVar4 = local_var_78;
    uVar7 = unaff_R14D;
    if (*local_var_78 != (char)unaff_R14D) {
      do {
        uVar8 = uVar7;
        uVar7 = uVar8 + 1;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar4 != (char)unaff_R14D);
      uVar5 = (**(code **)(*param_1 + 8))(param_1,uVar8 + 2);
// WARNING: Subroutine does not return
      memcpy(uVar5,pcVar9,uVar7);
    }
    local_var_70 = "";
    uVar10 = (uint64_t)unaff_R14D;
    uVar3 = local_var_80;
    while (cVar1 = *local_var_70, pcVar9 = local_var_70, cVar1 != '\0') {
      while (iVar2 = isspace((int)cVar1), iVar2 != 0) {
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 1;
        if (cVar1 == '\0') goto LAB_1806f01f8;
      }
      if ((local_var_70 != (char *)0x0) && (*local_var_70 != '\0')) {
        uVar3 = strtoul(local_var_70,&local_buffer_00000070,10);
      }
      uVar8 = uVar7 + 4;
      uVar6 = uVar10;
      if (unaff_R14D < uVar8) {
        unaff_R14D = 0x20;
        if (0x20 < uVar8) {
          do {
            unaff_R14D = unaff_R14D * 2;
          } while (unaff_R14D < uVar8);
        }
        uVar6 = (**(code **)(*plStack0000000000000060 + 8))(plStack0000000000000060,unaff_R14D);
        if (uVar7 != 0) {
// WARNING: Subroutine does not return
          memcpy(uVar6,uVar10,uVar7);
        }
        (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060,uVar10);
      }
      *(int32_t *)(uVar7 + uVar6) = uVar3;
      uVar10 = uVar6;
      uVar7 = uVar8;
    }
LAB_1806f01f8:
    *unaff_R13 = uVar10;
    *(uint *)CONCAT44(local_buffer_84,local_var_80) = uVar7 >> 2;
    (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060,&system_buffer_ptr);
  }
  (**(code **)(*plStack0000000000000060 + 0x10))(plStack0000000000000060,0);
  return;
}
// 函数: void UtilitiesSystem_f017f(int64_t *param_1)
void UtilitiesSystem_f017f(int64_t *param_1)
{
  char cVar1;
  int iVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint uVar6;
  uint unaff_ESI;
  char *unaff_RDI;
  char *pcVar7;
  int64_t *unaff_R13;
  uint unaff_R14D;
  int64_t unaff_R15;
  int64_t *local_var_60;
  char *local_var_70;
  int32_t local_var_80;
  int32_t local_buffer_84;
  if (*unaff_RDI != (char)unaff_ESI) {
    do {
      uVar6 = unaff_R14D;
      unaff_RDI = unaff_RDI + 1;
      unaff_R14D = uVar6 + 1;
    } while (*unaff_RDI != (char)unaff_ESI);
    uVar4 = (**(code **)(*param_1 + 8))(param_1,uVar6 + 2);
// WARNING: Subroutine does not return
    memcpy(uVar4);
  }
  local_var_70 = "";
  uVar3 = local_var_80;
  while (cVar1 = *local_var_70, pcVar7 = local_var_70, cVar1 != '\0') {
    while (iVar2 = isspace((int)cVar1), iVar2 != 0) {
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 1;
      if (cVar1 == '\0') goto LAB_1806f01f8;
    }
    if ((local_var_70 != (char *)0x0) && (*local_var_70 != '\0')) {
      uVar3 = strtoul(local_var_70,&local_buffer_00000070,10);
    }
    uVar6 = unaff_R14D + 4;
    lVar5 = unaff_R15;
    if (unaff_ESI < uVar6) {
      unaff_ESI = 0x20;
      if (0x20 < uVar6) {
        do {
          unaff_ESI = unaff_ESI * 2;
        } while (unaff_ESI < uVar6);
      }
      lVar5 = (**(code **)(*local_var_60 + 8))(local_var_60,unaff_ESI);
      if (unaff_R14D != 0) {
// WARNING: Subroutine does not return
        memcpy(lVar5,unaff_R15,unaff_R14D);
      }
      (**(code **)(*local_var_60 + 0x10))(local_var_60,unaff_R15);
    }
    *(int32_t *)((uint64_t)unaff_R14D + lVar5) = uVar3;
    unaff_R15 = lVar5;
    unaff_R14D = uVar6;
  }
LAB_1806f01f8:
  *unaff_R13 = unaff_R15;
  *(uint *)CONCAT44(local_buffer_84,local_var_80) = unaff_R14D >> 2;
  (**(code **)(*local_var_60 + 0x10))(local_var_60,&system_buffer_ptr);
  (**(code **)(*local_var_60 + 0x10))(local_var_60,0);
  return;
}
// 函数: void UtilitiesSystem_f0223(void)
void UtilitiesSystem_f0223(void)
{
  int64_t *local_var_60;
  (**(code **)(*local_var_60 + 0x10))(local_var_60,0);
  return;
}
// 函数: void UtilitiesSystem_f023f(void)
void UtilitiesSystem_f023f(void)
{
  return;
}
// 函数: void UtilitiesSystem_f0249(void)
void UtilitiesSystem_f0249(void)
{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  int32_t unaff_EBX;
  uint unaff_ESI;
  uint uVar4;
  char *pcVar5;
  int64_t *unaff_R13;
  uint unaff_R14D;
  int64_t unaff_R15;
  int64_t *local_var_60;
  char *local_var_70;
  uint *local_var_80;
  do {
    if ((local_var_70 != (char *)0x0) && (*local_var_70 != '\0')) {
      unaff_EBX = strtoul(local_var_70,&local_buffer_00000070,10);
    }
    uVar4 = unaff_R14D + 4;
    lVar3 = unaff_R15;
    if (unaff_ESI < uVar4) {
      unaff_ESI = 0x20;
      if (0x20 < uVar4) {
        do {
          unaff_ESI = unaff_ESI * 2;
        } while (unaff_ESI < uVar4);
      }
      lVar3 = (**(code **)(*local_var_60 + 8))(local_var_60,unaff_ESI);
      if (unaff_R14D != 0) {
// WARNING: Subroutine does not return
        memcpy(lVar3,unaff_R15,unaff_R14D);
      }
      (**(code **)(*local_var_60 + 0x10))(local_var_60,unaff_R15);
    }
    *(int32_t *)((uint64_t)unaff_R14D + lVar3) = unaff_EBX;
    cVar1 = *local_var_70;
    pcVar5 = local_var_70;
    while( true ) {
      if (cVar1 == '\0') {
        *unaff_R13 = lVar3;
        *local_var_80 = uVar4 >> 2;
        (**(code **)(*local_var_60 + 0x10))();
        (**(code **)(*local_var_60 + 0x10))(local_var_60,0);
        return;
      }
      iVar2 = isspace((int)cVar1);
      unaff_R15 = lVar3;
      unaff_R14D = uVar4;
      if (iVar2 == 0) break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 1;
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_f02d0(int64_t *param_1,uint64_t param_2,uint64_t *param_3,int32_t *param_4,
void UtilitiesSystem_f02d0(int64_t *param_1,uint64_t param_2,uint64_t *param_3,int32_t *param_4,
                  int32_t *param_5,int64_t *param_6)
{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  char *pcVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  char *pcVar10;
  uint64_t uVar11;
  char *pcStackX_8;
  char *pcStackX_20;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  uVar9 = 0;
  *param_4 = 0xc;
  *param_3 = 0;
  *param_5 = 0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&pcStackX_20);
  if (cVar2 != '\0') {
    if (pcStackX_20 != (char *)0x0) {
      system_system_config = system_system_config + 1;
      pcVar10 = pcStackX_20;
      if (*pcStackX_20 != '\0') {
        do {
          iVar3 = (int)uVar9;
          uVar6 = iVar3 + 1;
          uVar9 = (uint64_t)uVar6;
          pcVar10 = pcVar10 + 1;
        } while (*pcVar10 != '\0');
        uVar4 = (**(code **)(*param_6 + 8))(param_6,iVar3 + 2);
// WARNING: Subroutine does not return
        memcpy(uVar4,pcStackX_20,uVar6);
      }
      pcVar10 = "";
      pcStackX_8 = "";
      uVar8 = uVar9;
      uVar11 = uVar9;
      do {
        cVar2 = *pcVar10;
        pcVar7 = pcVar10;
        while( true ) {
          if (cVar2 == '\0') {
            *param_3 = uVar11;
            *param_5 = (int)(uVar8 / 0xc);
            (**(code **)(*param_6 + 0x10))(param_6,&system_buffer_ptr);
            goto UtilitiesSystem_f0409;
          }
          iVar3 = isspace((int)cVar2);
          if (iVar3 == 0) break;
          cVar2 = pcVar7[1];
          pcVar7 = pcVar7 + 1;
        }
        if (*pcVar10 != '\0') {
          local_var_48 = SystemMonitoringProcessor(pcVar10,&pcStackX_8);
          local_var_44 = SystemMonitoringProcessor(pcStackX_8,&pcStackX_8);
          local_var_40 = SystemMonitoringProcessor(pcStackX_8,&pcStackX_8);
          pcVar10 = pcStackX_8;
        }
        uVar6 = (int)uVar8 + 0xc;
        uVar5 = uVar11;
        if ((uint)uVar9 < uVar6) {
          uVar9 = 0x20;
          if (0x20 < uVar6) {
            do {
              uVar1 = (int)uVar9 * 2;
              uVar9 = (uint64_t)uVar1;
            } while (uVar1 < uVar6);
          }
          uVar5 = (**(code **)(*param_6 + 8))(param_6,uVar9);
          if ((int)uVar8 != 0) {
// WARNING: Subroutine does not return
            memcpy(uVar5,uVar11,uVar8);
          }
          (**(code **)(*param_6 + 0x10))(param_6,uVar11);
        }
        *(uint64_t *)(uVar8 + uVar5) = CONCAT44(local_var_44,local_var_48);
        *(int32_t *)(uVar8 + 8 + uVar5) = local_var_40;
        uVar8 = (uint64_t)uVar6;
        uVar11 = uVar5;
      } while( true );
    }
UtilitiesSystem_f0409:
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_f030f(int64_t *param_1)
void UtilitiesSystem_f030f(int64_t *param_1)
{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  char *pcVar7;
  uint unaff_EBP;
  uint64_t *unaff_R13;
  char *pcVar8;
  uint64_t uVar9;
  int32_t stack_special_x_20;
  int32_t stack_special_x_24;
  int32_t local_var_28;
  char *local_var_70;
  int64_t *plStack0000000000000080;
  char *local_var_88;
  uint *local_var_90;
  uint uVar6;
  plStack0000000000000080 = param_1;
  if (local_var_88 != (char *)0x0) {
    system_system_config = system_system_config + 1;
    pcVar8 = local_var_88;
    uVar5 = unaff_EBP;
    if (*local_var_88 != (char)unaff_EBP) {
      do {
        uVar6 = uVar5;
        uVar5 = uVar6 + 1;
        pcVar8 = pcVar8 + 1;
      } while (*pcVar8 != (char)unaff_EBP);
      uVar3 = (**(code **)(*param_1 + 8))(param_1,uVar6 + 2);
// WARNING: Subroutine does not return
      memcpy(uVar3,local_var_88,uVar5);
    }
    pcVar8 = "";
    local_var_70 = "";
    uVar9 = (uint64_t)unaff_EBP;
    while (cVar1 = *pcVar8, pcVar7 = pcVar8, cVar1 != '\0') {
      while (iVar2 = isspace((int)cVar1), iVar2 != 0) {
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 1;
        if (cVar1 == '\0') goto LAB_1806f03c8;
      }
      if (*pcVar8 != '\0') {
        stack_special_x_20 = SystemMonitoringProcessor(pcVar8,&local_buffer_00000070);
        stack_special_x_24 = SystemMonitoringProcessor(local_var_70,&local_buffer_00000070);
        local_var_28 = SystemMonitoringProcessor(local_var_70,&local_buffer_00000070);
        pcVar8 = local_var_70;
      }
      uVar6 = uVar5 + 0xc;
      uVar4 = uVar9;
      if (unaff_EBP < uVar6) {
        unaff_EBP = 0x20;
        if (0x20 < uVar6) {
          do {
            unaff_EBP = unaff_EBP * 2;
          } while (unaff_EBP < uVar6);
        }
        uVar4 = (**(code **)(*plStack0000000000000080 + 8))(plStack0000000000000080,unaff_EBP);
        if (uVar5 != 0) {
// WARNING: Subroutine does not return
          memcpy(uVar4,uVar9,uVar5);
        }
        (**(code **)(*plStack0000000000000080 + 0x10))(plStack0000000000000080,uVar9);
      }
      *(uint64_t *)(uVar5 + uVar4) = CONCAT44(stack_special_x_24,stack_special_x_20);
      *(int32_t *)((uint64_t)uVar5 + 8 + uVar4) = local_var_28;
      uVar9 = uVar4;
      uVar5 = uVar6;
    }
LAB_1806f03c8:
    *unaff_R13 = uVar9;
    *local_var_90 = uVar5 / 0xc;
    (**(code **)(*plStack0000000000000080 + 0x10))(plStack0000000000000080,&system_buffer_ptr);
  }
  (**(code **)(*plStack0000000000000080 + 0x10))(plStack0000000000000080,0);
  return;
}
// 函数: void UtilitiesSystem_f0342(int64_t *param_1)
void UtilitiesSystem_f0342(int64_t *param_1)
{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint uVar5;
  char *pcVar6;
  uint unaff_EBP;
  char *unaff_RSI;
  uint unaff_EDI;
  int64_t *unaff_R13;
  char *pcVar7;
  int64_t unaff_R15;
  int32_t stack_special_x_20;
  int32_t stack_special_x_24;
  int32_t local_var_28;
  char *local_var_70;
  int64_t *local_var_80;
  uint *local_var_90;
  if (*unaff_RSI != (char)unaff_EDI) {
    do {
      uVar5 = unaff_EBP;
      unaff_RSI = unaff_RSI + 1;
      unaff_EBP = uVar5 + 1;
    } while (*unaff_RSI != (char)unaff_EDI);
    uVar3 = (**(code **)(*param_1 + 8))(param_1,uVar5 + 2);
// WARNING: Subroutine does not return
    memcpy(uVar3);
  }
  pcVar7 = "";
  local_var_70 = "";
  while (cVar1 = *pcVar7, pcVar6 = pcVar7, cVar1 != '\0') {
    while (iVar2 = isspace((int)cVar1), iVar2 != 0) {
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 1;
      if (cVar1 == '\0') goto LAB_1806f03c8;
    }
    if (*pcVar7 != '\0') {
      stack_special_x_20 = SystemMonitoringProcessor(pcVar7,&local_buffer_00000070);
      stack_special_x_24 = SystemMonitoringProcessor(local_var_70,&local_buffer_00000070);
      local_var_28 = SystemMonitoringProcessor(local_var_70,&local_buffer_00000070);
      pcVar7 = local_var_70;
    }
    uVar5 = unaff_EBP + 0xc;
    lVar4 = unaff_R15;
    if (unaff_EDI < uVar5) {
      unaff_EDI = 0x20;
      if (0x20 < uVar5) {
        do {
          unaff_EDI = unaff_EDI * 2;
        } while (unaff_EDI < uVar5);
      }
      lVar4 = (**(code **)(*local_var_80 + 8))(local_var_80,unaff_EDI);
      if (unaff_EBP != 0) {
// WARNING: Subroutine does not return
        memcpy(lVar4,unaff_R15,unaff_EBP);
      }
      (**(code **)(*local_var_80 + 0x10))(local_var_80,unaff_R15);
    }
    *(uint64_t *)((uint64_t)unaff_EBP + lVar4) = CONCAT44(stack_special_x_24,stack_special_x_20);
    *(int32_t *)((uint64_t)unaff_EBP + 8 + lVar4) = local_var_28;
    unaff_R15 = lVar4;
    unaff_EBP = uVar5;
  }
LAB_1806f03c8:
  *unaff_R13 = unaff_R15;
  *local_var_90 = unaff_EBP / 0xc;
  (**(code **)(*local_var_80 + 0x10))(local_var_80,&system_buffer_ptr);
  (**(code **)(*local_var_80 + 0x10))(local_var_80,0);
  return;
}
// 函数: void UtilitiesSystem_f0409(void)
void UtilitiesSystem_f0409(void)
{
  int64_t *local_var_80;
  (**(code **)(*local_var_80 + 0x10))(local_var_80,0);
  return;
}
// 函数: void UtilitiesSystem_f0428(void)
void UtilitiesSystem_f0428(void)
{
  return;
}
// 函数: void UtilitiesSystem_f0430(void)
void UtilitiesSystem_f0430(void)
{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  uint uVar4;
  char *pcVar5;
  uint unaff_EBP;
  uint unaff_EDI;
  int64_t *unaff_R13;
  char *unaff_R14;
  int64_t unaff_R15;
  int32_t stack_special_x_20;
  int32_t stack_special_x_24;
  int32_t local_var_28;
  char *local_var_70;
  int64_t *local_var_80;
  uint *local_var_90;
  do {
    if (*unaff_R14 != '\0') {
      stack_special_x_20 = SystemMonitoringProcessor(unaff_R14,&local_buffer_00000070);
      stack_special_x_24 = SystemMonitoringProcessor(local_var_70,&local_buffer_00000070);
      local_var_28 = SystemMonitoringProcessor(local_var_70,&local_buffer_00000070);
      unaff_R14 = local_var_70;
    }
    uVar4 = unaff_EBP + 0xc;
    lVar3 = unaff_R15;
    if (unaff_EDI < uVar4) {
      unaff_EDI = 0x20;
      if (0x20 < uVar4) {
        do {
          unaff_EDI = unaff_EDI * 2;
        } while (unaff_EDI < uVar4);
      }
      lVar3 = (**(code **)(*local_var_80 + 8))(local_var_80,unaff_EDI);
      if (unaff_EBP != 0) {
// WARNING: Subroutine does not return
        memcpy(lVar3,unaff_R15,unaff_EBP);
      }
      (**(code **)(*local_var_80 + 0x10))(local_var_80,unaff_R15);
    }
    *(uint64_t *)((uint64_t)unaff_EBP + lVar3) = CONCAT44(stack_special_x_24,stack_special_x_20);
    *(int32_t *)((uint64_t)unaff_EBP + 8 + lVar3) = local_var_28;
    cVar1 = *unaff_R14;
    pcVar5 = unaff_R14;
    while( true ) {
      if (cVar1 == '\0') {
        *unaff_R13 = lVar3;
        *local_var_90 = uVar4 / 0xc;
        (**(code **)(*local_var_80 + 0x10))();
        (**(code **)(*local_var_80 + 0x10))(local_var_80,0);
        return;
      }
      iVar2 = isspace((int)cVar1);
      unaff_R15 = lVar3;
      unaff_EBP = uVar4;
      if (iVar2 == 0) break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 1;
    }
  } while( true );
}
int UtilitiesSystem_f04f0(uint64_t *param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int32_t uVar5;
  void *puVar6;
  void *puVar7;
  char *pcStackX_8;
  char *pcStackX_10;
  int32_t astack_special_x_18 [2];
  pcVar3 = (code *)param_1[3];
  SystemCore_MemoryManager(param_2,*param_1);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar7 = &ui_system_data_1920_ptr;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &ui_system_data_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      pcStackX_10 = pcStackX_8;
      uVar5 = strtoul(pcStackX_8,&pcStackX_10,10);
      (*pcVar3)(param_2[6],uVar5);
    }
  }
  SystemResourceProcessor(param_2);
  pcVar3 = (code *)param_1[7];
  SystemCore_MemoryManager(param_2,param_1[4]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &ui_system_data_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      pcStackX_10 = pcStackX_8;
      uVar5 = strtoul(pcStackX_8,&pcStackX_10,10);
      (*pcVar3)(param_2[6],uVar5);
    }
  }
  SystemResourceProcessor(param_2);
  pcVar3 = (code *)param_1[0xb];
  SystemCore_MemoryManager(param_2,param_1[8]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &ui_system_data_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar5 = UtilitiesSystem_d5410(pcStackX_8,&system_data_0f00);
      (*pcVar3)(param_2[6],uVar5);
    }
  }
  SystemResourceProcessor(param_2);
  pcVar3 = (code *)param_1[0x13];
  SystemCore_MemoryManager(param_2,param_1[0x10]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &ui_system_data_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar5 = SystemMonitoringProcessor(pcStackX_8,&pcStackX_10);
      (*pcVar3)(param_2[6],uVar5);
    }
  }
  SystemResourceProcessor(param_2);
  pcVar3 = (code *)param_1[0x17];
  SystemCore_MemoryManager(param_2,param_1[0x14]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar7 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar7,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      astack_special_x_18[0] = 0;
      UtilitiesSystem_d81c0(pcStackX_8,param_2[7],astack_special_x_18,0x180be0f20);
      (*pcVar3)(param_2[6],astack_special_x_18);
    }
  }
  SystemResourceProcessor(param_2);
  return param_3 + 6;
}
int UtilitiesSystem_f07f0(int64_t param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int8_t *puVar4;
  int64_t lVar5;
  void *puVar6;
  int8_t astack_special_x_18 [16];
  pcVar3 = *(code **)(param_1 + 0x148);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x138));
  piVar2 = (int *)param_2[6];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar4 = (int8_t *)(*pcVar3)(astack_special_x_18,param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar6 = &ui_system_data_1920_ptr;
  }
  else {
    puVar6 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  UtilitiesSystem_d82a0(param_2[1],param_2[3],puVar6,*puVar4,0x180be0e90);
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  return param_3 + 4;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int UtilitiesSystem_f08b0(uint64_t *param_1,int64_t *param_2,int param_3)
{
  int *piVar1;
  uint64_t *puVar2;
  code *pcVar3;
  int32_t uVar4;
  int iVar5;
  int16_t *puVar6;
  int64_t lVar7;
  int64_t *plVar8;
  void *puVar9;
  int64_t *plVar10;
  void *puVar11;
  int8_t astack_special_x_18 [8];
  pcVar3 = (code *)param_1[2];
  SystemValidator(param_2,*param_1);
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar4 = (*pcVar3)(param_2[2]);
  puVar11 = &ui_system_data_1920_ptr;
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar10 = (int64_t *)param_2[1];
  UtilitiesSystem_c4e00(puVar2,&rendering_buffer_2208_ptr,uVar4);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar2)(puVar2,astack_special_x_18,1);
  (**(code **)(*plVar10 + 0x10))(plVar10,puVar9,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar3 = (code *)param_1[6];
  SystemValidator(param_2,param_1[4]);
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar4 = (*pcVar3)(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar10 = (int64_t *)param_2[1];
  UtilitiesSystem_c4e00(puVar2,&rendering_buffer_2208_ptr,uVar4);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar2)(puVar2,astack_special_x_18,1);
  (**(code **)(*plVar10 + 0x10))(plVar10,puVar9,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar3 = (code *)param_1[10];
  SystemValidator(param_2,param_1[8]);
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  iVar5 = (*pcVar3)(param_2[2]);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)
              (*(int64_t *)(lVar7 + 8) + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10);
  }
  plVar8 = (int64_t *)&system_data_0f00;
  plVar10 = (int64_t *)param_2[1];
  if (system_system_buffer_config != 0) {
    do {
      if ((int)plVar8[1] == iVar5) {
        (**(code **)(*plVar10 + 0x10))(plVar10,puVar9,*plVar8);
      }
      plVar8 = plVar8 + 2;
    } while (*plVar8 != 0);
    plVar10 = (int64_t *)param_2[1];
    lVar7 = *param_2;
  }
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*plVar10 + 0x20))(plVar10);
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar3 = (code *)param_1[0x12];
  SystemValidator(param_2,param_1[0x10]);
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar4 = (*pcVar3)(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar10 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar2,uVar4);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar2)(puVar2,astack_special_x_18,1);
  (**(code **)(*plVar10 + 0x10))(plVar10,puVar9,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar3 = (code *)param_1[0x16];
  SystemValidator(param_2,param_1[0x14]);
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar6 = (int16_t *)(*pcVar3)(astack_special_x_18,param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 != 0) {
    puVar11 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  UtilitiesSystem_d82a0(param_2[1],param_2[3],puVar11,*puVar6,0x180be0f20);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  return param_3 + 6;
}
// 函数: void UtilitiesSystem_f0c90(int64_t *param_1,uint64_t *param_2,uint param_3,int64_t param_4,uint param_5,
void UtilitiesSystem_f0c90(int64_t *param_1,uint64_t *param_2,uint param_3,int64_t param_4,uint param_5,
                  uint64_t param_6,code *param_7)
{
  uint uVar1;
  code *pcVar2;
  void *puVar3;
  uint uVar4;
  int32_t uVar5;
  pcVar2 = param_7;
  uVar1 = param_5;
  if ((param_5 != 0) && (param_4 != 0)) {
    uVar4 = 0;
    if (param_5 != 0) {
      do {
        if ((uVar4 == 0) || (uVar4 % param_3 != 0)) {
          uVar5 = 1;
          puVar3 = &system_data_c8e4;
        }
        else {
          uVar5 = 4;
          puVar3 = &processed_var_8768_ptr;
        }
        (**(code **)*param_2)(param_2,puVar3,uVar5);
        (*pcVar2)(param_2);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    param_5 = param_5 & 0xffffff00;
    (**(code **)*param_2)(param_2,&param_5,1);
    (**(code **)(*param_1 + 0x10))(param_1,param_6,param_2[4]);
    param_2[3] = 0;
  }
  return;
}
// 函数: void UtilitiesSystem_f0cc4(void)
void UtilitiesSystem_f0cc4(void)
{
  uint64_t *unaff_RBX;
  uint unaff_EBP;
  uint uVar1;
  int64_t *unaff_R12;
  code *local_var_70;
  uVar1 = 0;
  if (unaff_EBP != 0) {
    do {
      (**(code **)*unaff_RBX)();
      (*local_var_70)();
      uVar1 = uVar1 + 1;
    } while (uVar1 < unaff_EBP);
  }
  (**(code **)*unaff_RBX)();
  (**(code **)(*unaff_R12 + 0x10))();
  unaff_RBX[3] = 0;
  return;
}
// 函数: void UtilitiesSystem_f0ccf(void)
void UtilitiesSystem_f0ccf(void)
{
  uint64_t *unaff_RBX;
  uint unaff_EBP;
  uint unaff_EDI;
  int64_t *unaff_R12;
  code *local_var_70;
  do {
    (**(code **)*unaff_RBX)();
    (*local_var_70)();
    unaff_EDI = unaff_EDI + 1;
  } while (unaff_EDI < unaff_EBP);
  (**(code **)*unaff_RBX)();
  (**(code **)(*unaff_R12 + 0x10))();
  unaff_RBX[3] = 0;
  return;
}
// 函数: void UtilitiesSystem_f0d28(void)
void UtilitiesSystem_f0d28(void)
{
  uint64_t *unaff_RBX;
  int64_t *unaff_R12;
  int8_t local_var_60;
  local_var_60 = 0;
  (**(code **)*unaff_RBX)();
  (**(code **)(*unaff_R12 + 0x10))();
  unaff_RBX[3] = 0;
  return;
}
// 函数: void UtilitiesSystem_f0d60(void)
void UtilitiesSystem_f0d60(void)
{
  return;
}
// 函数: void UtilitiesSystem_f0d80(int64_t *param_1,uint64_t *param_2,uint param_3,int64_t param_4,uint param_5,
void UtilitiesSystem_f0d80(int64_t *param_1,uint64_t *param_2,uint param_3,int64_t param_4,uint param_5,
                  uint64_t param_6,code *param_7)
{
  uint uVar1;
  code *pcVar2;
  void *puVar3;
  uint uVar4;
  int32_t uVar5;
  pcVar2 = param_7;
  uVar1 = param_5;
  if ((param_5 != 0) && (param_4 != 0)) {
    uVar4 = 0;
    if (param_5 != 0) {
      do {
        if ((uVar4 == 0) || (uVar4 % param_3 != 0)) {
          uVar5 = 1;
          puVar3 = &system_data_c8e4;
        }
        else {
          uVar5 = 4;
          puVar3 = &processed_var_8768_ptr;
        }
        (**(code **)*param_2)(param_2,puVar3,uVar5);
        (*pcVar2)(param_2);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    param_5 = param_5 & 0xffffff00;
    (**(code **)*param_2)(param_2,&param_5,1);
    (**(code **)(*param_1 + 0x10))(param_1,param_6,param_2[4]);
    param_2[3] = 0;
  }
  return;
}