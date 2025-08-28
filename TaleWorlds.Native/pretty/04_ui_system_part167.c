#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 04_ui_system_part167.c - 2 个函数
// 函数: void function_768440(uint64_t param_1,int param_2,int32_t *param_3,int64_t *param_4)
void function_768440(uint64_t param_1,int param_2,int32_t *param_3,int64_t *param_4)
{
  int iVar1;
  int64_t lVar2;
  int32_t uVar3;
  int8_t stack_array_298 [32];
  int32_t local_var_278;
  int32_t local_var_270;
  uint64_t local_var_268;
  uint64_t stack_array_258 [2];
  int16_t stack_array_248 [256];
  int64_t lStack_48;
  int16_t *plocal_var_40;
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_298;
  plocal_var_40 = stack_array_248;
  lVar2 = 0;
  uVar3 = 0;
  lStack_48 = 0;
  stack_array_248[0] = 0;
  iVar1 = function_768090(stack_array_248,param_1);
  if (iVar1 != 0) goto LAB_18076855d;
  stack_array_258[0] = 0;
  if (param_2 == 0) {
    local_var_268 = 0;
    local_var_270 = 0x80;
    local_var_278 = 3;
    lVar2 = CreateFileW(plocal_var_40,0x80000000,1,0);
    if (lVar2 == -1) {
      GetLastError();
      goto LAB_18076855d;
    }
    iVar1 = GetFileSizeEx(lVar2,stack_array_258);
    if (iVar1 == 0) goto LAB_18076855d;
LAB_180768551:
    uVar3 = (int32_t)stack_array_258[0];
  }
  else if (param_2 == 1) {
    local_var_268 = 0;
    local_var_270 = 0x80;
    local_var_278 = 2;
    lVar2 = CreateFileW(plocal_var_40,0x40000000,1,0);
    if (lVar2 == -1) goto LAB_18076855d;
    goto LAB_180768551;
  }
  *param_4 = lVar2;
  *param_3 = uVar3;
LAB_18076855d:
  if (lStack_48 != 0) {
    local_var_278 = CONCAT31(local_var_278._1_3_,1);
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lStack_48,&ui_system_data_1424_ptr,0xcd);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_298);
}
uint64_t function_7685b0(uint64_t param_1,uint64_t param_2,int param_3,int32_t *param_4)
{
  int iVar1;
  uint64_t uVar2;
  uVar2 = 0;
  *param_4 = 0;
  iVar1 = ReadFile();
  if (iVar1 == 0) {
    return 0xd;
  }
  *param_4 = 0;
  if (param_3 != 0) {
    uVar2 = 0x10;
  }
  return uVar2;
}
int32_t function_768620(uint64_t param_1,uint64_t param_2)
{
  int iVar1;
  int32_t uVar2;
  int32_t astack_special_x_18 [4];
  astack_special_x_18[0] = 0;
  iVar1 = SetFilePointer(param_1,param_2,astack_special_x_18,0);
  uVar2 = 0;
  if (iVar1 == -1) {
    uVar2 = 0xd;
  }
  return uVar2;
}
uint64_t function_768650(uint64_t param_1,uint64_t param_2,int param_3,char param_4)
{
  int iVar1;
  iVar1 = WriteFile();
  if ((iVar1 == 0) || (param_3 != 0)) {
    return 0xd;
  }
  if ((param_4 != '\0') && (iVar1 = FlushFileBuffers(param_1), iVar1 == 0)) {
    return 0xd;
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_7686d0(void)
{
  int iVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t local_var_ffffffffffffffd8;
  uint uVar4;
  uVar4 = (uint)((uint64_t)local_var_ffffffffffffffd8 >> 0x20);
  if (ui_system_config == (int64_t *)0x0) {
    uVar4 = 1;
    iVar1 = CoCreateInstance(&ui_system_data_1392_ptr,0,0x17,&ui_system_data_1408_ptr,&system_buffer_c6e8);
    if (iVar1 == -0x7ffbfe10) {
      iVar1 = CoInitializeEx(0,2);
      if (iVar1 < 0) {
        return 0x33;
      }
      uVar4 = 1;
      iVar1 = CoCreateInstance(&ui_system_data_1392_ptr,0,0x17,&ui_system_data_1408_ptr,&system_buffer_c6e8);
    }
    if (iVar1 < 0) {
      return 0x33;
    }
  }
  puVar3 = (uint64_t *)0x0;
  puVar2 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x10,&ui_system_data_1424_ptr,0x5d,
                         (uint64_t)uVar4 << 0x20,0,1);
  if (puVar2 != (uint64_t *)0x0) {
    *(int32_t *)(puVar2 + 1) = 0;
    *puVar2 = &ui_system_data_1328_ptr;
    puVar3 = puVar2;
  }
  ui_system_config = puVar3;
  if (puVar3 != (uint64_t *)0x0) {
    iVar1 = (**(code **)(*ui_system_config + 0x30))();
    if (iVar1 < 0) {
      return 0x33;
    }
    return 0;
  }
  return 0x26;
}
uint64_t function_7687d0(void)
{
  int iVar1;
  uint64_t uVar2;
  iVar1 = FreeLibrary();
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0x1c;
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_768820(void)
{
  if (ui_system_config != 0) {
    (**(code **)(*ui_system_config + 0x38))();
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),ui_system_config,&ui_system_data_1424_ptr,0x75,1);
  }
  if (ui_system_config != (int64_t *)0x0) {
    (**(code **)(*ui_system_config + 0x10))();
    ui_system_config = (int64_t *)0x0;
  }
  return 0;
}
uint64_t function_7688b0(int64_t *param_1)
{
  int64_t lVar1;
  lVar1 = CreateSemaphoreA(0,0,0xffff,0);
  if (lVar1 == 0) {
    return 0x1c;
  }
  *param_1 = lVar1;
  return 0;
}
uint64_t function_7688f0(void)
{
  int iVar1;
  uint64_t uVar2;
  iVar1 = CloseHandle();
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0x1c;
  }
  return uVar2;
}
uint64_t SystemConfigManager(uint64_t param_1)
{
  int iVar1;
  uint64_t uVar2;
  iVar1 = ReleaseSemaphore(param_1,1);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0x1c;
  }
  return uVar2;
}
uint64_t function_768940(uint64_t param_1)
{
  int iVar1;
  uint64_t uVar2;
  iVar1 = WaitForSingleObject(param_1,0xffffffff);
  uVar2 = 0;
  if (iVar1 == -1) {
    uVar2 = 0x1c;
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_768970(uint *param_1)
void function_768970(uint *param_1)
{
  uint stack_array_228 [4];
  int8_t stack_array_218 [24];
  uint local_var_200;
  uint local_var_1fc;
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_228;
  _fxsave(stack_array_218);
  *param_1 = local_var_200;
  if (local_var_1fc == 0) {
    local_var_1fc = 0;
  }
  if ((local_var_1fc & 0x40) != 0) {
    local_var_200 = local_var_200 | 0x40;
  }
  MXCSR = local_var_200 | 0x8800;
  stack_array_228[0] = MXCSR;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_228);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t
function_7689d0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             uint param_5,int32_t param_6,int64_t *param_7)
{
  int iVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t local_var_ffffffffffffffe0;
  uVar7 = 0;
  puVar2 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x18,&ui_system_data_1424_ptr,0x280,0,
                         local_var_ffffffffffffffe0 & 0xffffffffffffff00,1);
  if (puVar2 == (uint64_t *)0x0) {
    uVar5 = 0x26;
  }
  else {
    puVar2[2] = param_1;
    *puVar2 = param_2;
    puVar2[1] = param_3;
    lVar3 = _beginthreadex(0,param_6,function_768000,puVar2,0,0);
    if (lVar3 != 0) {
      if (param_5 == 0xffff7ffe) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = uVar7;
        if (param_5 != 0xffff7ffd) {
          if (param_5 == 0xffff7ffc) {
            uVar6 = 1;
          }
          else if (param_5 == 0xffff7ffb) {
            uVar6 = 2;
          }
          else {
            uVar6 = 0xf;
            if (param_5 != 0xffff7ffa) {
              if (param_5 == 0xffff7ff9) {
                param_5 = 0xf;
              }
              uVar6 = (uint64_t)param_5;
            }
          }
        }
      }
      uVar8 = uVar7;
      if (((param_4 != 0x4000000000000001) && (param_4 != 0x4000000000000002)) &&
         (uVar8 = param_4, param_4 == 0x4000000000000003)) {
        uVar8 = uVar7;
      }
      iVar1 = SetThreadPriority(lVar3,uVar6);
      if ((iVar1 != 0) && ((uVar8 == 0 || (lVar4 = SetThreadAffinityMask(lVar3,uVar8), lVar4 != 0)))
         ) {
        *param_7 = lVar3;
        return 0;
      }
    }
    uVar5 = 0x1c;
  }
  return uVar5;
}
uint64_t RenderingSystem_TextureManager(uint64_t *param_1)
{
  uint uVar1;
  uVar1 = GetCurrentThreadId();
  *param_1 = (uint64_t)uVar1;
  return 0;
}
uint64_t SystemCore_PerformanceMonitor(int32_t *param_1)
{
  int32_t uVar1;
  uVar1 = timeGetTime();
  *param_1 = uVar1;
  return 0;
}
uint64_t DataStructureSerializer(int *param_1)
{
  int iVar1;
  int64_t lStackX_10;
  int64_t alStackX_18 [2];
  iVar1 = QueryPerformanceCounter(&lStackX_10);
  if (iVar1 != 0) {
    QueryPerformanceFrequency(alStackX_18);
    *param_1 = (int)((lStackX_10 * 1000000) / alStackX_18[0]);
    return 0;
  }
  iVar1 = timeGetTime();
  *param_1 = iVar1 * 1000;
  return 0;
}
uint64_t UIComponent_EventHandler(void)
{
  Sleep();
  return 0;
}
uint64_t * function_768c40(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &ui_system_data_1552_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x1f0);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_768c70(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  lVar1 = *(int64_t *)(param_1 + 0x1e8);
  lVar2 = *(int64_t *)(param_1 + 0x1e0);
  lVar3 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int *)(param_1 + 0x15c) + 1,
                        &ui_system_data_1664_ptr,0x6d0,0);
  *(int64_t *)(param_1 + 0x1e8) = lVar3;
  if (lVar3 == 0) {
    return 0x26;
  }
  *(int64_t *)(param_1 + 0x1e0) = lVar3;
  if (lVar2 != 0) {
// WARNING: Subroutine does not return
    memcpy(lVar3,lVar2,*(int32_t *)(param_1 + 0x15c));
  }
  if (lVar1 != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&ui_system_data_1664_ptr,0x6df,1);
  }
  return 0;
}
uint64_t function_768d60(int64_t param_1)
{
  int iVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  uVar2 = *(uint *)(param_1 + 0x180);
  if ((uVar2 != 0) && (1 < uVar2 - 0xf)) {
    return (uint64_t)uVar2;
  }
  uVar2 = *(uint *)(param_1 + 0x16c);
  if ((*(uint *)(param_1 + 0x170) < uVar2) ||
     (((*(uint *)(param_1 + 0x164) < *(uint *)(param_1 + 0x15c) &&
       ((*(uint *)(param_1 + 0x194) & 0xa0) == 0)) &&
      (uVar2 = *(uint *)(param_1 + 0x16c),
      uVar2 < (uint)(*(int *)(param_1 + 0x170) - *(int *)(param_1 + 0x164)))))) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x16c);
    iVar1 = (int)((((float)*(uint *)(param_1 + 0x174) - (float)uVar2) /
                  (float)*(uint *)(param_1 + 0x15c)) * 100.0);
    *(int *)(param_1 + 0x17c) = iVar1;
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x160) != 0)) {
      *(int32_t *)(param_1 + 0x17c) = 0;
    }
    uVar5 = ((*(int *)(param_1 + 0x170) - uVar2) + -1 + *(uint *)(param_1 + 0x164)) /
            *(uint *)(param_1 + 0x164);
  }
  if (*(int *)(param_1 + 0x160) == 0) {
LAB_180768e5f:
    if (uVar5 == 2) goto LAB_180768eb3;
  }
  else {
    if (2 < (int)uVar5) {
      *(int32_t *)(param_1 + 0x160) = 0;
      goto LAB_180768e5f;
    }
    uVar5 = 0xffffffff;
    *(uint *)(param_1 + 0x170) = uVar2 - *(int *)(param_1 + 0x158);
    *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x160);
  }
  if ((*(uint *)(param_1 + 0x194) & 8) != 0) {
    *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x194) | 0x10;
    iVar1 = *(int *)(param_1 + 400);
    while (iVar1 != 0) {
      UIComponent_EventHandler(10);
      iVar1 = *(int *)(param_1 + 400);
    }
    *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x194) & 0xffffffef;
  }
LAB_180768eb3:
  if ((uVar5 == 1) && (*(uint *)(param_1 + 0x164) < *(uint *)(param_1 + 0x15c))) {
    iVar1 = *(int *)(param_1 + 400);
    while (iVar1 != 0) {
      UIComponent_EventHandler(10);
      iVar1 = *(int *)(param_1 + 400);
    }
    *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x194) | 0x28;
    *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x170);
    *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + *(int *)(param_1 + 0x164);
    *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
  }
  else if (((*(uint *)(param_1 + 0x15c) <= *(uint *)(param_1 + 0x164)) || (uVar5 != 2)) &&
          ((*(uint *)(param_1 + 0x15c) != *(uint *)(param_1 + 0x164) || (uVar5 != 1)))) {
    if ((uVar5 == 0) ||
       (((*(uint *)(param_1 + 0x194) & 1) == 0 || (uVar3 = function_76a5d0(param_1), (int)uVar3 == 0))
       )) {
      uVar4 = function_7693d0(param_1,1);
      uVar3 = uVar4 & 0xffffffff;
      if ((uVar4 & 0xffffffef) == 0) {
        uVar2 = *(uint *)(param_1 + 0x164);
        *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x194) & 0xffffffef;
        if (((*(uint *)(param_1 + 0x15c) == uVar2) && ((int)uVar4 == 0x10)) &&
           (*(int *)(param_1 + 0x20) == -1)) {
          return uVar4 & 0xffffffff;
        }
        *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x170);
        *(uint *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + uVar2;
        if (uVar2 <= *(uint *)(param_1 + 0x158)) {
          uVar2 = function_7693d0(param_1,CONCAT71((int7)(uVar3 >> 8),1));
          uVar3 = (uint64_t)uVar2;
          if ((uVar2 & 0xffffffef) == 0) {
            *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x170);
            *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + *(int *)(param_1 + 0x164);
            *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x194) & 0xffffffef;
          }
          else if (uVar2 == 0xf) {
            *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x194) | 0x10;
            return uVar3;
          }
        }
      }
      else {
        uVar3 = uVar4;
        if ((int)uVar4 == 0xf) {
          *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x194) | 0x10;
          return uVar4;
        }
      }
    }
    return uVar3;
  }
  return 0;
}
uint64_t function_768d89(float param_1,uint64_t param_2,uint param_3,int param_4)
{
  int iVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t in_RCX;
  int64_t unaff_RBX;
  uint uVar4;
  float extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  if ((*(uint *)(in_RCX + 0x170) < param_3) ||
     (((*(uint *)(in_RCX + 0x164) < *(uint *)(in_RCX + 0x15c) &&
       ((*(uint *)(in_RCX + 0x194) & 0xa0) == 0)) &&
      (param_3 = *(uint *)(in_RCX + 0x16c),
      param_3 < (uint)(*(int *)(unaff_RBX + 0x170) - *(int *)(unaff_RBX + 0x164)))))) {
    uVar4 = 0xffffffff;
  }
  else {
    param_3 = *(uint *)(unaff_RBX + 0x16c);
    param_1 = (float)param_3;
    iVar1 = (int)((((float)*(uint *)(unaff_RBX + 0x174) - param_1) /
                  (float)*(uint *)(unaff_RBX + 0x15c)) * 100.0);
    *(int *)(unaff_RBX + 0x17c) = iVar1;
    if ((iVar1 < 0) || (*(int *)(unaff_RBX + 0x160) != param_4)) {
      *(int *)(unaff_RBX + 0x17c) = param_4;
    }
    uVar4 = ((*(int *)(unaff_RBX + 0x170) - param_3) + -1 + *(uint *)(unaff_RBX + 0x164)) /
            *(uint *)(unaff_RBX + 0x164);
  }
  if (*(int *)(unaff_RBX + 0x160) == 0) {
LAB_180768e5f:
    if (uVar4 == 2) goto LAB_180768eb3;
  }
  else {
    if (2 < (int)uVar4) {
      *(int *)(unaff_RBX + 0x160) = param_4;
      goto LAB_180768e5f;
    }
    uVar4 = 0xffffffff;
    *(uint *)(unaff_RBX + 0x170) = param_3 - *(int *)(unaff_RBX + 0x158);
    *(int *)(unaff_RBX + 0x174) = *(int *)(unaff_RBX + 0x160);
  }
  if ((*(uint *)(unaff_RBX + 0x194) & 8) != 0) {
    *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) | 0x10;
    iVar1 = *(int *)(unaff_RBX + 400);
    while (iVar1 != 0) {
      param_1 = (float)UIComponent_EventHandler(10);
      iVar1 = *(int *)(unaff_RBX + 400);
    }
    *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) & 0xffffffef;
  }
LAB_180768eb3:
  if ((uVar4 == 1) && (*(uint *)(unaff_RBX + 0x164) < *(uint *)(unaff_RBX + 0x15c))) {
    iVar1 = *(int *)(unaff_RBX + 400);
    while (iVar1 != 0) {
      UIComponent_EventHandler(10);
      iVar1 = *(int *)(unaff_RBX + 400);
    }
    *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) | 0x28;
    *(int *)(unaff_RBX + 0x174) = *(int *)(unaff_RBX + 0x170);
    *(int *)(unaff_RBX + 0x170) = *(int *)(unaff_RBX + 0x170) + *(int *)(unaff_RBX + 0x164);
    *(int *)(unaff_RBX + 400) = *(int *)(unaff_RBX + 400) + 1;
  }
  else if (((*(uint *)(unaff_RBX + 0x15c) <= *(uint *)(unaff_RBX + 0x164)) || (uVar4 != 2)) &&
          ((*(uint *)(unaff_RBX + 0x15c) != *(uint *)(unaff_RBX + 0x164) || (uVar4 != 1)))) {
    if ((uVar4 == 0) ||
       (((*(uint *)(unaff_RBX + 0x194) & 1) == 0 ||
        (uVar2 = function_76a5d0(), param_1 = extraout_XMM0_Da, (int)uVar2 == 0)))) {
      uVar3 = function_7693d0(param_1,1);
      uVar2 = uVar3 & 0xffffffff;
      if ((uVar3 & 0xffffffef) == 0) {
        uVar4 = *(uint *)(unaff_RBX + 0x164);
        *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) & 0xffffffef;
        if (((*(uint *)(unaff_RBX + 0x15c) == uVar4) && ((int)uVar3 == 0x10)) &&
           (*(int *)(unaff_RBX + 0x20) == -1)) {
          return uVar3 & 0xffffffff;
        }
        *(int *)(unaff_RBX + 0x174) = *(int *)(unaff_RBX + 0x170);
        *(uint *)(unaff_RBX + 0x170) = *(int *)(unaff_RBX + 0x170) + uVar4;
        if (uVar4 <= *(uint *)(unaff_RBX + 0x158)) {
          uVar4 = function_7693d0(extraout_XMM0_Da_00,CONCAT71((int7)(uVar2 >> 8),1));
          uVar2 = (uint64_t)uVar4;
          if ((uVar4 & 0xffffffef) == 0) {
            *(int *)(unaff_RBX + 0x174) = *(int *)(unaff_RBX + 0x170);
            *(int *)(unaff_RBX + 0x170) = *(int *)(unaff_RBX + 0x170) + *(int *)(unaff_RBX + 0x164);
            *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) & 0xffffffef;
          }
          else if (uVar4 == 0xf) {
            *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) | 0x10;
            return uVar2;
          }
        }
      }
      else {
        uVar2 = uVar3;
        if ((int)uVar3 == 0xf) {
          *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) | 0x10;
          return uVar3;
        }
      }
    }
    return uVar2;
  }
  return 0;
}
// WARNING: Removing unreachable block (ram,0x000180768ebc)
// WARNING: Removing unreachable block (ram,0x000180768eca)
// WARNING: Removing unreachable block (ram,0x000180768ed4)
// WARNING: Removing unreachable block (ram,0x000180768ee8)
// WARNING: Removing unreachable block (ram,0x000180768f1d)
uint64_t function_768f2a(uint64_t param_1,uint64_t param_2,int param_3)
{
  int iVar1;
  int32_t in_EAX;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t unaff_RBX;
  *(int *)(unaff_RBX + 0x170) = param_3 - *(int *)(unaff_RBX + 0x158);
  *(int32_t *)(unaff_RBX + 0x174) = in_EAX;
  if ((*(uint *)(unaff_RBX + 0x194) & 8) != 0) {
    *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) | 0x10;
    iVar1 = *(int *)(unaff_RBX + 400);
    while (iVar1 != 0) {
      UIComponent_EventHandler(10);
      iVar1 = *(int *)(unaff_RBX + 400);
    }
    *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) & 0xffffffef;
  }
  if (((*(uint *)(unaff_RBX + 0x194) & 1) == 0) || (uVar3 = function_76a5d0(), (int)uVar3 == 0)) {
    uVar4 = function_7693d0();
    uVar3 = uVar4 & 0xffffffff;
    if ((uVar4 & 0xffffffef) == 0) {
      uVar2 = *(uint *)(unaff_RBX + 0x164);
      *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) & 0xffffffef;
      if (((*(uint *)(unaff_RBX + 0x15c) == uVar2) && ((int)uVar4 == 0x10)) &&
         (*(int *)(unaff_RBX + 0x20) == -1)) {
        return uVar4 & 0xffffffff;
      }
      *(int *)(unaff_RBX + 0x174) = *(int *)(unaff_RBX + 0x170);
      *(uint *)(unaff_RBX + 0x170) = *(int *)(unaff_RBX + 0x170) + uVar2;
      if (uVar2 <= *(uint *)(unaff_RBX + 0x158)) {
        uVar2 = function_7693d0();
        uVar3 = (uint64_t)uVar2;
        if ((uVar2 & 0xffffffef) == 0) {
          *(int *)(unaff_RBX + 0x174) = *(int *)(unaff_RBX + 0x170);
          *(int *)(unaff_RBX + 0x170) = *(int *)(unaff_RBX + 0x170) + *(int *)(unaff_RBX + 0x164);
          *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) & 0xffffffef;
        }
        else if (uVar2 == 0xf) {
          *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) | 0x10;
          return uVar3;
        }
      }
    }
    else {
      uVar3 = uVar4;
      if ((int)uVar4 == 0xf) {
        *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) | 0x10;
        return uVar4;
      }
    }
  }
  return uVar3;
}
uint function_768fba(uint64_t param_1,uint param_2)
{
  uint uVar1;
  int64_t unaff_RBX;
  uVar1 = *(uint *)(unaff_RBX + 0x164);
  *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) & 0xffffffef;
  if (((*(uint *)(unaff_RBX + 0x15c) == uVar1) && (param_2 == 0x10)) &&
     (*(int *)(unaff_RBX + 0x20) == -1)) {
    return 0x10;
  }
  *(int *)(unaff_RBX + 0x174) = *(int *)(unaff_RBX + 0x170);
  *(uint *)(unaff_RBX + 0x170) = *(int *)(unaff_RBX + 0x170) + uVar1;
  if (uVar1 <= *(uint *)(unaff_RBX + 0x158)) {
    param_2 = function_7693d0();
    if ((param_2 & 0xffffffef) == 0) {
      *(int *)(unaff_RBX + 0x174) = *(int *)(unaff_RBX + 0x170);
      *(int *)(unaff_RBX + 0x170) = *(int *)(unaff_RBX + 0x170) + *(int *)(unaff_RBX + 0x164);
      *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) & 0xffffffef;
    }
    else if (param_2 == 0xf) {
      *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) | 0x10;
      return 0xf;
    }
  }
  return param_2;
}
uint function_768fef(uint param_1,uint param_2)
{
  int64_t unaff_RBX;
  *(int *)(unaff_RBX + 0x174) = *(int *)(unaff_RBX + 0x170);
  *(uint *)(unaff_RBX + 0x170) = *(int *)(unaff_RBX + 0x170) + param_1;
  if (param_1 <= *(uint *)(unaff_RBX + 0x158)) {
    param_2 = function_7693d0();
    if ((param_2 & 0xffffffef) == 0) {
      *(int *)(unaff_RBX + 0x174) = *(int *)(unaff_RBX + 0x170);
      *(int *)(unaff_RBX + 0x170) = *(int *)(unaff_RBX + 0x170) + *(int *)(unaff_RBX + 0x164);
      *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) & 0xffffffef;
    }
    else if (param_2 == 0xf) {
      *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) | 0x10;
      return 0xf;
    }
  }
  return param_2;
}
int32_t function_76903f(uint64_t param_1,int32_t param_2)
{
  int64_t unaff_RBX;
  *(int *)(unaff_RBX + 0x174) = *(int *)(unaff_RBX + 0x170);
  *(int *)(unaff_RBX + 0x170) = *(int *)(unaff_RBX + 0x170) + *(int *)(unaff_RBX + 0x164);
  *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) & 0xffffffef;
  return param_2;
}