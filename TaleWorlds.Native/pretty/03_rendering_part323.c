#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part323.c - 38 个函数
// 函数: void UISystem_38c93(uint64_t param_1,int64_t param_2)
void UISystem_38c93(uint64_t param_1,int64_t param_2)
{
  int64_t in_RAX;
  code *UNRECOVERED_JUMPTABLE;
  UNRECOVERED_JUMPTABLE = (code *)((uint64_t)*(uint *)(param_2 + 0x43a014 + in_RAX * 4) + param_2);
// WARNING: Could not recover jumptable at 0x000180438ca2. Too many branches
// WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}
// 函数: void UISystem_38d14(void)
void UISystem_38d14(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  *(int32_t *)(unaff_RBX + 0x1340) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_38d31(void)
void UISystem_38d31(void)
{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  int64_t unaff_RBP;
  int32_t unaff_XMM6_Da;
  lVar1 = SYSTEM_STATE_MANAGER;
  *(int32_t *)(unaff_RBP + 0x10) = unaff_XMM6_Da;
  if (*(int64_t *)(lVar1 + 0x1410) != 0) {
    cVar2 = (**(code **)(lVar1 + 0x1418))(unaff_RBP + 0x10);
    if (cVar2 == '\0') {
      if (system_debug_flag == '\0') {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(lVar1 + 0x13c0) != (void *)0x0) {
          puVar3 = *(void **)(lVar1 + 0x13c0);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar3);
      }
      *(int32_t *)(lVar1 + 0x13b0) = *(int32_t *)(lVar1 + 0x13f8);
      return;
    }
    unaff_XMM6_Da = *(int32_t *)(unaff_RBP + 0x10);
  }
  *(int32_t *)(lVar1 + 0x13b0) = unaff_XMM6_Da;
  return;
}
// 函数: void UISystem_38da1(void)
void UISystem_38da1(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  *(int32_t *)(unaff_RBX + 0x13b0) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_38dbe(void)
void UISystem_38dbe(void)
{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  int64_t unaff_RBP;
  int32_t unaff_XMM6_Da;
  lVar1 = SYSTEM_STATE_MANAGER;
  *(int32_t *)(unaff_RBP + 0x10) = unaff_XMM6_Da;
  if (*(int64_t *)(lVar1 + 0x1480) != 0) {
    cVar2 = (**(code **)(lVar1 + 0x1488))(unaff_RBP + 0x10);
    if (cVar2 == '\0') {
      if (system_debug_flag == '\0') {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(lVar1 + 0x1430) != (void *)0x0) {
          puVar3 = *(void **)(lVar1 + 0x1430);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar3);
      }
      *(int32_t *)(lVar1 + 0x1420) = *(int32_t *)(lVar1 + 0x1468);
      return;
    }
    unaff_XMM6_Da = *(int32_t *)(unaff_RBP + 0x10);
  }
  *(int32_t *)(lVar1 + 0x1420) = unaff_XMM6_Da;
  return;
}
// 函数: void UISystem_38e2e(void)
void UISystem_38e2e(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  *(int32_t *)(unaff_RBX + 0x1420) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_38e4b(void)
void UISystem_38e4b(void)
{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  int64_t unaff_RBP;
  int32_t unaff_XMM6_Da;
  lVar1 = SYSTEM_STATE_MANAGER;
  *(int32_t *)(unaff_RBP + 0x10) = unaff_XMM6_Da;
  if (*(int64_t *)(lVar1 + 0x14f0) != 0) {
    cVar2 = (**(code **)(lVar1 + 0x14f8))(unaff_RBP + 0x10);
    if (cVar2 == '\0') {
      if (system_debug_flag == '\0') {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(lVar1 + 0x14a0) != (void *)0x0) {
          puVar3 = *(void **)(lVar1 + 0x14a0);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar3);
      }
      *(int32_t *)(lVar1 + 0x1490) = *(int32_t *)(lVar1 + 0x14d8);
      return;
    }
    unaff_XMM6_Da = *(int32_t *)(unaff_RBP + 0x10);
  }
  *(int32_t *)(lVar1 + 0x1490) = unaff_XMM6_Da;
  return;
}
// 函数: void UISystem_38ebb(void)
void UISystem_38ebb(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  *(int32_t *)(unaff_RBX + 0x1490) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_38ed8(void)
void UISystem_38ed8(void)
{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  int64_t unaff_RBP;
  int32_t unaff_XMM6_Da;
  lVar1 = SYSTEM_STATE_MANAGER;
  *(int32_t *)(unaff_RBP + 0x10) = unaff_XMM6_Da;
  if (*(int64_t *)(lVar1 + 0x1560) != 0) {
    cVar2 = (**(code **)(lVar1 + 0x1568))(unaff_RBP + 0x10);
    if (cVar2 == '\0') {
      if (system_debug_flag == '\0') {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(lVar1 + 0x1510) != (void *)0x0) {
          puVar3 = *(void **)(lVar1 + 0x1510);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar3);
      }
      *(int32_t *)(lVar1 + 0x1500) = *(int32_t *)(lVar1 + 0x1548);
      return;
    }
    unaff_XMM6_Da = *(int32_t *)(unaff_RBP + 0x10);
  }
  *(int32_t *)(lVar1 + 0x1500) = unaff_XMM6_Da;
  return;
}
// 函数: void UISystem_38f48(void)
void UISystem_38f48(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  *(int32_t *)(unaff_RBX + 0x1500) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_38f65(void)
void UISystem_38f65(void)
{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  int64_t unaff_RBP;
  int iVar6;
  float unaff_XMM6_Da;
  lVar2 = SYSTEM_STATE_MANAGER;
  iVar6 = (int)unaff_XMM6_Da;
  lVar1 = *(int64_t *)(SYSTEM_STATE_MANAGER + 0x15d0);
  *(int *)(unaff_RBP + 0x10) = iVar6;
  iVar4 = iVar6;
  if (lVar1 != 0) {
    cVar3 = (**(code **)(lVar2 + 0x15d8))(unaff_RBP + 0x10);
    if (cVar3 == '\0') {
      if (system_debug_flag == '\0') {
        puVar5 = &system_buffer_ptr;
        if (*(void **)(lVar2 + 0x1580) != (void *)0x0) {
          puVar5 = *(void **)(lVar2 + 0x1580);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar5);
      }
      iVar4 = *(int *)(lVar2 + 0x15b8);
    }
    else {
      iVar4 = *(int *)(unaff_RBP + 0x10);
    }
  }
  *(int *)(lVar2 + 0x1570) = iVar4;
// WARNING: Could not recover jumptable at 0x000180438ff3. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*render_system_data_pointer + 0xa8))(render_system_data_pointer,iVar6);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_38ffa(void)
void UISystem_38ffa(void)
{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t local_buffer_30;
  int iStack0000000000000048;
  lVar1 = SYSTEM_STATE_MANAGER;
  local_buffer_30 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1330) != 0) &&
     (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1338))(&local_buffer_00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x12e0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x12e0);
      }
      SystemDataInitializer(&processed_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x12d0) = *(int32_t *)(lVar1 + 0x1318);
    return;
  }
  *(int *)(lVar1 + 0x12d0) = iStack0000000000000048;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_39019(void)
void UISystem_39019(void)
{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  int64_t unaff_RBP;
  float unaff_XMM6_Da;
  lVar2 = SYSTEM_STATE_MANAGER;
  iVar4 = (int)unaff_XMM6_Da;
  lVar1 = *(int64_t *)(SYSTEM_STATE_MANAGER + 0x1640);
  *(int *)(unaff_RBP + 0x10) = iVar4;
  if (lVar1 != 0) {
    cVar3 = (**(code **)(lVar2 + 0x1648))(unaff_RBP + 0x10);
    if (cVar3 == '\0') {
      if (system_debug_flag == '\0') {
        puVar5 = &system_buffer_ptr;
        if (*(void **)(lVar2 + 0x15f0) != (void *)0x0) {
          puVar5 = *(void **)(lVar2 + 0x15f0);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar5);
      }
      *(int32_t *)(lVar2 + 0x15e0) = *(int32_t *)(lVar2 + 0x1628);
      return;
    }
    iVar4 = *(int *)(unaff_RBP + 0x10);
  }
  *(int *)(lVar2 + 0x15e0) = iVar4;
  return;
}
// 函数: void UISystem_3908b(void)
void UISystem_3908b(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  *(int32_t *)(unaff_RBX + 0x15e0) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_390a4(void)
void UISystem_390a4(void)
{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  int64_t unaff_RBP;
  float unaff_XMM6_Da;
  lVar2 = SYSTEM_STATE_MANAGER;
  iVar4 = (int)unaff_XMM6_Da;
  lVar1 = *(int64_t *)(SYSTEM_STATE_MANAGER + 0x16b0);
  *(int *)(unaff_RBP + 0x10) = iVar4;
  if (lVar1 != 0) {
    cVar3 = (**(code **)(lVar2 + 0x16b8))(unaff_RBP + 0x10);
    if (cVar3 == '\0') {
      if (system_debug_flag == '\0') {
        puVar5 = &system_buffer_ptr;
        if (*(void **)(lVar2 + 0x1660) != (void *)0x0) {
          puVar5 = *(void **)(lVar2 + 0x1660);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar5);
      }
      *(int32_t *)(lVar2 + 0x1650) = *(int32_t *)(lVar2 + 0x1698);
      return;
    }
    iVar4 = *(int *)(unaff_RBP + 0x10);
  }
  *(int *)(lVar2 + 0x1650) = iVar4;
  return;
}
// 函数: void UISystem_39116(void)
void UISystem_39116(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  *(int32_t *)(unaff_RBX + 0x1650) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_3912f(void)
void UISystem_3912f(void)
{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  int64_t unaff_RBP;
  float unaff_XMM6_Da;
  lVar2 = SYSTEM_STATE_MANAGER;
  iVar4 = (int)unaff_XMM6_Da;
  lVar1 = *(int64_t *)(SYSTEM_STATE_MANAGER + 0x23d0);
  *(int *)(unaff_RBP + 0x10) = iVar4;
  if (lVar1 != 0) {
    cVar3 = (**(code **)(lVar2 + 0x23d8))(unaff_RBP + 0x10);
    if (cVar3 == '\0') {
      if (system_debug_flag == '\0') {
        puVar5 = &system_buffer_ptr;
        if (*(void **)(lVar2 + 0x2380) != (void *)0x0) {
          puVar5 = *(void **)(lVar2 + 0x2380);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar5);
      }
      *(int32_t *)(lVar2 + 0x2370) = *(int32_t *)(lVar2 + 0x23b8);
      return;
    }
    iVar4 = *(int *)(unaff_RBP + 0x10);
  }
  *(int *)(lVar2 + 0x2370) = iVar4;
  return;
}
// 函数: void UISystem_391a1(void)
void UISystem_391a1(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  *(int32_t *)(unaff_RBX + 0x2370) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_391ba(void)
void UISystem_391ba(void)
{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  int64_t unaff_RBP;
  float unaff_XMM6_Da;
  lVar2 = SYSTEM_STATE_MANAGER;
  iVar4 = (int)unaff_XMM6_Da;
  lVar1 = *(int64_t *)(SYSTEM_STATE_MANAGER + 0x2440);
  *(int *)(unaff_RBP + 0x10) = iVar4;
  if (lVar1 != 0) {
    cVar3 = (**(code **)(lVar2 + 0x2448))(unaff_RBP + 0x10);
    if (cVar3 == '\0') {
      if (system_debug_flag == '\0') {
        puVar5 = &system_buffer_ptr;
        if (*(void **)(lVar2 + 0x23f0) != (void *)0x0) {
          puVar5 = *(void **)(lVar2 + 0x23f0);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar5);
      }
      *(int32_t *)(lVar2 + 0x23e0) = *(int32_t *)(lVar2 + 0x2428);
      return;
    }
    iVar4 = *(int *)(unaff_RBP + 0x10);
  }
  *(int *)(lVar2 + 0x23e0) = iVar4;
  return;
}
// 函数: void UISystem_3922c(void)
void UISystem_3922c(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  *(int32_t *)(unaff_RBX + 0x23e0) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_39245(void)
void UISystem_39245(void)
{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  int64_t unaff_RBP;
  int32_t unaff_XMM6_Da;
  lVar1 = SYSTEM_STATE_MANAGER;
  *(int32_t *)(unaff_RBP + 0x10) = unaff_XMM6_Da;
  if (*(int64_t *)(lVar1 + 0x1720) != 0) {
    cVar2 = (**(code **)(lVar1 + 0x1728))(unaff_RBP + 0x10);
    if (cVar2 == '\0') {
      if (system_debug_flag == '\0') {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(lVar1 + 0x16d0) != (void *)0x0) {
          puVar3 = *(void **)(lVar1 + 0x16d0);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar3);
      }
      *(int32_t *)(lVar1 + 0x16c0) = *(int32_t *)(lVar1 + 0x1708);
      return;
    }
    unaff_XMM6_Da = *(int32_t *)(unaff_RBP + 0x10);
  }
  *(int32_t *)(lVar1 + 0x16c0) = unaff_XMM6_Da;
  return;
}
// 函数: void UISystem_392b5(void)
void UISystem_392b5(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  *(int32_t *)(unaff_RBX + 0x16c0) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_392d2(void)
void UISystem_392d2(void)
{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  int64_t unaff_RBP;
  float unaff_XMM6_Da;
  lVar2 = SYSTEM_STATE_MANAGER;
  iVar4 = (int)unaff_XMM6_Da;
  lVar1 = *(int64_t *)(SYSTEM_STATE_MANAGER + 0x1790);
  *(int *)(unaff_RBP + 0x10) = iVar4;
  if (lVar1 != 0) {
    cVar3 = (**(code **)(lVar2 + 0x1798))(unaff_RBP + 0x10);
    if (cVar3 == '\0') {
      if (system_debug_flag == '\0') {
        puVar5 = &system_buffer_ptr;
        if (*(void **)(lVar2 + 0x1740) != (void *)0x0) {
          puVar5 = *(void **)(lVar2 + 0x1740);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar5);
      }
      *(int32_t *)(lVar2 + 0x1730) = *(int32_t *)(lVar2 + 0x1778);
      return;
    }
    iVar4 = *(int *)(unaff_RBP + 0x10);
  }
  *(int *)(lVar2 + 0x1730) = iVar4;
  return;
}
// 函数: void UISystem_39344(void)
void UISystem_39344(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  *(int32_t *)(unaff_RBX + 0x1730) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_3935d(void)
void UISystem_3935d(void)
{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  int64_t unaff_RBP;
  int32_t unaff_XMM6_Da;
  lVar1 = SYSTEM_STATE_MANAGER;
  *(int32_t *)(unaff_RBP + 0x10) = unaff_XMM6_Da;
  if (*(int64_t *)(lVar1 + 0x1950) != 0) {
    cVar2 = (**(code **)(lVar1 + 0x1958))(unaff_RBP + 0x10);
    if (cVar2 == '\0') {
      if (system_debug_flag == '\0') {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(lVar1 + 0x1900) != (void *)0x0) {
          puVar3 = *(void **)(lVar1 + 0x1900);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar3);
      }
      *(int32_t *)(lVar1 + 0x18f0) = *(int32_t *)(lVar1 + 0x1938);
      return;
    }
    unaff_XMM6_Da = *(int32_t *)(unaff_RBP + 0x10);
  }
  *(int32_t *)(lVar1 + 0x18f0) = unaff_XMM6_Da;
  return;
}
// 函数: void UISystem_393cd(void)
void UISystem_393cd(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  *(int32_t *)(unaff_RBX + 0x18f0) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_393ea(void)
void UISystem_393ea(void)
{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  int64_t unaff_RBP;
  float unaff_XMM6_Da;
  lVar2 = SYSTEM_STATE_MANAGER;
  iVar4 = (int)unaff_XMM6_Da;
  lVar1 = *(int64_t *)(SYSTEM_STATE_MANAGER + 0x2360);
  *(int *)(unaff_RBP + 0x10) = iVar4;
  if (lVar1 != 0) {
    cVar3 = (**(code **)(lVar2 + 0x2368))(unaff_RBP + 0x10);
    if (cVar3 == '\0') {
      if (system_debug_flag == '\0') {
        puVar5 = &system_buffer_ptr;
        if (*(void **)(lVar2 + 0x2310) != (void *)0x0) {
          puVar5 = *(void **)(lVar2 + 0x2310);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar5);
      }
      *(int32_t *)(lVar2 + 0x2300) = *(int32_t *)(lVar2 + 0x2348);
      return;
    }
    iVar4 = *(int *)(unaff_RBP + 0x10);
  }
  *(int *)(lVar2 + 0x2300) = iVar4;
  return;
}
// 函数: void UISystem_3945c(void)
void UISystem_3945c(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  *(int32_t *)(unaff_RBX + 0x2300) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_39475(void)
void UISystem_39475(void)
{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  int64_t unaff_RBP;
  float unaff_XMM6_Da;
  lVar2 = SYSTEM_STATE_MANAGER;
  iVar4 = (int)unaff_XMM6_Da;
  lVar1 = *(int64_t *)(SYSTEM_STATE_MANAGER + 0x24b0);
  *(int *)(unaff_RBP + 0x10) = iVar4;
  if (lVar1 != 0) {
    cVar3 = (**(code **)(lVar2 + 0x24b8))(unaff_RBP + 0x10);
    if (cVar3 == '\0') {
      if (system_debug_flag == '\0') {
        puVar5 = &system_buffer_ptr;
        if (*(void **)(lVar2 + 0x2460) != (void *)0x0) {
          puVar5 = *(void **)(lVar2 + 0x2460);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar5);
      }
      *(int32_t *)(lVar2 + 0x2450) = *(int32_t *)(lVar2 + 0x2498);
      return;
    }
    iVar4 = *(int *)(unaff_RBP + 0x10);
  }
  *(int *)(lVar2 + 0x2450) = iVar4;
  return;
}
// 函数: void UISystem_394e7(void)
void UISystem_394e7(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  *(int32_t *)(unaff_RBX + 0x2450) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_39500(void)
void UISystem_39500(void)
{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  int64_t unaff_RBP;
  int32_t unaff_XMM6_Da;
  lVar1 = SYSTEM_STATE_MANAGER;
  *(int32_t *)(unaff_RBP + 0x10) = unaff_XMM6_Da;
  if (*(int64_t *)(lVar1 + 0x2520) != 0) {
    cVar2 = (**(code **)(lVar1 + 0x2528))(unaff_RBP + 0x10);
    if (cVar2 == '\0') {
      if (system_debug_flag == '\0') {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(lVar1 + 0x24d0) != (void *)0x0) {
          puVar3 = *(void **)(lVar1 + 0x24d0);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar3);
      }
      *(int32_t *)(lVar1 + 0x24c0) = *(int32_t *)(lVar1 + 0x2508);
      return;
    }
    unaff_XMM6_Da = *(int32_t *)(unaff_RBP + 0x10);
  }
  *(int32_t *)(lVar1 + 0x24c0) = unaff_XMM6_Da;
  return;
}
// 函数: void UISystem_39570(void)
void UISystem_39570(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  *(int32_t *)(unaff_RBX + 0x24c0) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_3958d(void)
void UISystem_3958d(void)
{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  int64_t unaff_RBP;
  float unaff_XMM6_Da;
  lVar2 = SYSTEM_STATE_MANAGER;
  iVar4 = (int)unaff_XMM6_Da;
  lVar1 = *(int64_t *)(SYSTEM_STATE_MANAGER + 0x2590);
  *(int *)(unaff_RBP + 0x10) = iVar4;
  if (lVar1 != 0) {
    cVar3 = (**(code **)(lVar2 + 0x2598))(unaff_RBP + 0x10);
    if (cVar3 == '\0') {
      if (system_debug_flag == '\0') {
        puVar5 = &system_buffer_ptr;
        if (*(void **)(lVar2 + 0x2540) != (void *)0x0) {
          puVar5 = *(void **)(lVar2 + 0x2540);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar5);
      }
      *(int32_t *)(lVar2 + 0x2530) = *(int32_t *)(lVar2 + 0x2578);
      return;
    }
    iVar4 = *(int *)(unaff_RBP + 0x10);
  }
  *(int *)(lVar2 + 0x2530) = iVar4;
  return;
}
// 函数: void UISystem_395ff(void)
void UISystem_395ff(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  *(int32_t *)(unaff_RBX + 0x2530) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_39618(void)
void UISystem_39618(void)
{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  int64_t unaff_RBP;
  float unaff_XMM6_Da;
  lVar2 = SYSTEM_STATE_MANAGER;
  iVar4 = (int)unaff_XMM6_Da;
  lVar1 = *(int64_t *)(SYSTEM_STATE_MANAGER + 0x2600);
  *(int *)(unaff_RBP + 0x10) = iVar4;
  if (lVar1 != 0) {
    cVar3 = (**(code **)(lVar2 + 0x2608))(unaff_RBP + 0x10);
    if (cVar3 == '\0') {
      if (system_debug_flag == '\0') {
        puVar5 = &system_buffer_ptr;
        if (*(void **)(lVar2 + 0x25b0) != (void *)0x0) {
          puVar5 = *(void **)(lVar2 + 0x25b0);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar5);
      }
      *(int32_t *)(lVar2 + 0x25a0) = *(int32_t *)(lVar2 + 0x25e8);
      return;
    }
    iVar4 = *(int *)(unaff_RBP + 0x10);
  }
  *(int *)(lVar2 + 0x25a0) = iVar4;
  return;
}
// 函数: void UISystem_3968a(void)
void UISystem_3968a(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  *(int32_t *)(unaff_RBX + 0x25a0) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_396a3(void)
void UISystem_396a3(void)
{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t local_buffer_30;
  int iStack0000000000000048;
  lVar1 = SYSTEM_STATE_MANAGER;
  local_buffer_30 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x680) != 0) &&
     (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x688))(&local_buffer_00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x630) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x630);
      }
      SystemDataInitializer(&processed_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x620) = *(int32_t *)(lVar1 + 0x668);
    return;
  }
  *(int *)(lVar1 + 0x620) = iStack0000000000000048;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_396c2(void)
void UISystem_396c2(void)
{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t local_buffer_30;
  int iStack0000000000000048;
  lVar1 = SYSTEM_STATE_MANAGER;
  local_buffer_30 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x6f0) != 0) &&
     (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x6f8))(&local_buffer_00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x6a0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x6a0);
      }
      SystemDataInitializer(&processed_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x690) = *(int32_t *)(lVar1 + 0x6d8);
    return;
  }
  *(int *)(lVar1 + 0x690) = iStack0000000000000048;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address