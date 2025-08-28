#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 05_networking_part085.c - 12 个函数
// 函数: void function_88e970(int64_t param_1,int64_t *param_2,int32_t param_3)
void function_88e970(int64_t param_1,int64_t *param_2,int32_t param_3)
{
  int iVar1;
  uint64_t uVar2;
  int *piVar3;
  int32_t *puVar4;
  int32_t uVar5;
  int32_t uVar6;
  int iVar7;
  int8_t stack_array_178 [32];
  int8_t *plocal_var_158;
  int32_t stack_array_148 [4];
  int8_t stack_array_138 [256];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  (**(code **)(*param_2 + 8))(param_2,stack_array_138,0x100);
  uVar2 = (**(code **)*param_2)(param_2);
  iVar1 = (**(code **)(*param_2 + 0x38))(param_2);
  uVar5 = 0;
  iVar7 = iVar1 + 10;
  if (iVar1 < 1) {
    iVar7 = 0;
  }
  uVar6 = uVar5;
  if (iVar7 == 0xb) {
    iVar1 = SystemFunction_00018088c570(*(uint64_t *)(param_1 + 0x158),stack_array_148);
    if (iVar1 == 0) {
      uVar6 = stack_array_148[0];
    }
  }
  else {
    piVar3 = (int *)(**(code **)(*param_2 + 0x40))(param_2);
    if (((piVar3 != (int *)0x0) && (uVar6 = 0, *piVar3 != 0)) &&
       (puVar4 = (int32_t *)(**(code **)(*param_2 + 0x40))(param_2), uVar6 = uVar5,
       puVar4 != (int32_t *)0x0)) {
      uVar6 = *puVar4;
    }
  }
  plocal_var_158 = stack_array_138;
// WARNING: Subroutine does not return
  DataTransformer(param_3,iVar7,uVar6,uVar2);
}
uint64_t
function_88ea60(uint64_t param_1,int param_2,uint64_t param_3,int64_t param_4,int64_t param_5)
{
  uint64_t uVar1;
  if (param_5 == 0) {
    return 0x1c;
  }
  if (param_2 == 0x100001) {
    if (*(char *)(param_5 + 0x188) != '\0') {
      SystemCore_PerformanceMonitor(param_5 + 0x178);
      *(int *)(param_5 + 0x18c) = *(int *)(param_5 + 0x18c) + 1;
      if (*(int *)(param_5 + 400) <= *(int *)(param_5 + 0x18c)) {
        if (*(char *)(param_5 + 0x18a) == '\0') {
          if ((*(code **)(param_5 + 0x230) != (code *)0x0) &&
             (uVar1 = (**(code **)(param_5 + 0x230))(), (int)uVar1 != 0)) {
            return uVar1;
          }
        }
        else {
          *(int32_t *)(param_5 + 0x18c) = 0;
          *(int8_t *)(param_5 + 0x18a) = 0;
          uVar1 = SystemConfigManager(*(uint64_t *)(param_5 + 0x170));
          if ((int)uVar1 != 0) {
            return uVar1;
          }
        }
      }
    }
  }
  else if (param_2 == 0x100002) {
    if (*(int *)(param_5 + 0x184) != 0) {
      return 0x1c;
    }
    *(int32_t *)(param_5 + 0x184) = 1;
    if (param_4 != 0) {
      *(uint64_t *)(param_5 + 0x150) = param_3;
      return 0;
    }
  }
  else if (param_2 == 0x100004) {
    if (*(int *)(param_5 + 0x184) != 1) {
      return 0x1c;
    }
    *(int32_t *)(param_5 + 0x184) = 0;
    *(uint64_t *)(param_5 + 0x150) = 0;
  }
  return 0;
}
uint64_t function_88eb60(int64_t param_1)
{
  uint64_t uVar1;
  int aiStackX_8 [8];
  if ((*(char *)(param_1 + 0x188) != '\0') &&
     (SystemCore_PerformanceMonitor(aiStackX_8), 0x32 < aiStackX_8[0] - *(int *)(param_1 + 0x178))) {
    *(int *)(param_1 + 0x178) = aiStackX_8[0];
    uVar1 = SystemConfigManager(*(uint64_t *)(param_1 + 0x170));
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}
// WARNING: Removing unreachable block (ram,0x00018074b8e9)
// WARNING: Removing unreachable block (ram,0x00018074b8ee)
// WARNING: Removing unreachable block (ram,0x00018074b908)
int function_88ebb0(int64_t param_1,int param_2,int64_t param_3)
{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t unaff_RDI;
  uVar3 = SystemFunction_00018085fa80();
  iVar1 = memcmp(param_3,uVar3,0x30);
  if (iVar1 != 0) {
    iVar1 = SystemFunction_00018074b7b0(param_1,param_2,0x7b);
    iVar2 = function_74b6f0(param_1 + iVar1,param_2 - iVar1,param_3);
    iVar1 = iVar1 + iVar2;
    iVar2 = SystemFunction_00018074b7b0(iVar1 + param_1,param_2 - iVar1,0x2c);
    iVar1 = iVar1 + iVar2;
    iVar2 = function_74b6f0(iVar1 + param_1,param_2 - iVar1,param_3 + 0xc);
    iVar1 = iVar1 + iVar2;
    iVar2 = SystemFunction_00018074b7b0(iVar1 + param_1,param_2 - iVar1,0x2c);
    iVar1 = iVar1 + iVar2;
    iVar2 = function_74b6f0(iVar1 + param_1,param_2 - iVar1,param_3 + 0x18);
    iVar1 = iVar1 + iVar2;
    iVar2 = SystemFunction_00018074b7b0(iVar1 + param_1,param_2 - iVar1,0x2c);
    iVar1 = iVar1 + iVar2;
    iVar2 = function_74b6f0(iVar1 + param_1,param_2 - iVar1,param_3 + 0x24);
    iVar1 = iVar1 + iVar2;
    iVar2 = SystemFunction_00018074b7b0(iVar1 + param_1,param_2 - iVar1,0x7d);
    return iVar2 + iVar1;
  }
  iVar1 = SystemFunction_00018076b690(&processed_var_7528_ptr);
  if (param_2 < iVar1 + 1) {
// WARNING: Subroutine does not return
    SystemDataValidator(param_1,param_2,&processed_var_552_ptr,&processed_var_7528_ptr,unaff_RDI);
  }
// WARNING: Subroutine does not return
  memcpy(param_1,&processed_var_7528_ptr,(int64_t)(iVar1 + 1));
}
int function_88ece0(int64_t param_1,uint64_t param_2,int32_t *param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  iVar1 = SystemFunction_00018074b7b0(param_1,param_2,0x7b);
  iVar3 = (int)param_2;
  iVar2 = SystemFunction_00018074b800(param_1 + iVar1,iVar3 - iVar1,*param_3);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemFunction_00018074b7b0(iVar1 + param_1,iVar3 - iVar1,0x2c);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemFunction_00018074b800(iVar1 + param_1,iVar3 - iVar1,param_3[1]);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemFunction_00018074b7b0(iVar1 + param_1,iVar3 - iVar1,0x7d);
  return iVar2 + iVar1;
}
uint function_88ed70(int8_t *param_1,int param_2,int64_t param_3,int param_4)
{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  iVar4 = 1;
  if (0 < param_2) {
    *param_1 = 0x7b;
  }
  uVar2 = (uint)(0 < param_2);
  if (param_4 != 0) {
    if (param_2 <= (int)uVar2) {
      return uVar2;
    }
    iVar1 = function_88ece0(param_1 + uVar2,param_2 - uVar2);
    uVar2 = uVar2 + iVar1;
    if (1 < param_4) {
      do {
        if (param_2 <= (int)uVar2) {
          return uVar2;
        }
        iVar3 = uVar2 + 1;
        param_1[(int)uVar2] = 0x2c;
        iVar1 = function_88ece0(param_1 + iVar3,param_2 - iVar3,param_3 + (int64_t)iVar4 * 8);
        uVar2 = iVar3 + iVar1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_4);
    }
  }
  if ((int)uVar2 < param_2) {
    param_1[(int)uVar2] = 0x7d;
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}
uint64_t UISystem_LayoutEngine(uint64_t param_1,uint64_t param_2)
{
  int iVar1;
  uint64_t uVar2;
  uint64_t astack_special_x_18 [2];
  uVar2 = SystemSynchronizer(param_1,astack_special_x_18);
  if ((int)uVar2 == 0) {
    iVar1 = AdvancedSystemOptimizer(astack_special_x_18[0],&processed_var_4576_ptr,param_2);
    uVar2 = 0;
    if (iVar1 != 1) {
      uVar2 = 0x13;
    }
  }
  return uVar2;
}
uint64_t SystemCore_DataProcessor(uint64_t param_1,uint64_t param_2)
{
  int iVar1;
  uint64_t uVar2;
  uint64_t astack_special_x_18 [2];
  uVar2 = SystemSynchronizer(param_1,astack_special_x_18);
  if ((int)uVar2 == 0) {
    iVar1 = AdvancedSystemOptimizer(astack_special_x_18[0],&rendering_buffer_2208_ptr,param_2);
    uVar2 = 0;
    if (iVar1 != 1) {
      uVar2 = 0x13;
    }
  }
  return uVar2;
}
uint64_t SystemCore_ErrorHandler(uint64_t param_1,float *param_2)
{
  char cVar1;
  double dVar2;
  char *pcVar3;
  float fVar4;
  uint64_t uVar5;
  int64_t lVar6;
  float fVar7;
  int32_t stack_special_x_18;
  int32_t stack_special_x_1c;
  char *pcStackX_20;
  uVar5 = SystemSynchronizer(param_1,&stack_special_x_18);
  if ((int)uVar5 == 0) {
    pcVar3 = (char *)CONCAT44(stack_special_x_1c,stack_special_x_18);
    dVar2 = (double)strtod(pcVar3,&pcStackX_20);
    *param_2 = (float)dVar2;
    if (*pcStackX_20 == ' ') {
      if (pcStackX_20 == pcVar3) {
        return 0x13;
      }
    }
    else if (*pcStackX_20 != '\0') {
      cVar1 = *pcVar3;
      lVar6 = UtilitiesSystem_DataValidator(pcVar3,&processed_var_7568_ptr);
      if (lVar6 == 0) {
        lVar6 = UtilitiesSystem_DataValidator(pcVar3,&processed_var_7572_ptr);
        if (lVar6 == 0) {
          lVar6 = UtilitiesSystem_DataValidator(pcVar3,&processed_var_7576_ptr);
          if (lVar6 == 0) {
            lVar6 = UtilitiesSystem_DataValidator(pcVar3,&processed_var_7580_ptr);
            if (lVar6 == 0) {
              lVar6 = UtilitiesSystem_DataValidator(pcVar3,&processed_var_7584_ptr);
              if (lVar6 == 0) {
                return 0x13;
              }
            }
          }
          fVar4 = NAN;
          fVar7 = -NAN;
        }
        else {
          fVar4 = NAN;
          fVar7 = -NAN;
        }
      }
      else {
        fVar4 = INFINITY;
        fVar7 = -INFINITY;
      }
      if (cVar1 == '-') {
        fVar4 = fVar7;
      }
      *param_2 = fVar4;
    }
    uVar5 = 0;
  }
  return uVar5;
}
uint64_t function_88eebb(void)
{
  char cVar1;
  double dVar2;
  float fVar3;
  int64_t lVar4;
  float fVar5;
  float *unaff_RSI;
  char *local_var_40;
  char *local_var_48;
  dVar2 = (double)strtod(local_var_40,&local_buffer_00000048);
  *unaff_RSI = (float)dVar2;
  if (*local_var_48 == ' ') {
    if (local_var_48 == local_var_40) {
      return 0x13;
    }
  }
  else if (*local_var_48 != '\0') {
    cVar1 = *local_var_40;
    lVar4 = UtilitiesSystem_DataValidator(local_var_40,&processed_var_7568_ptr);
    if (lVar4 == 0) {
      lVar4 = UtilitiesSystem_DataValidator(local_var_40,&processed_var_7572_ptr);
      if (lVar4 == 0) {
        lVar4 = UtilitiesSystem_DataValidator(local_var_40,&processed_var_7576_ptr);
        if (lVar4 == 0) {
          lVar4 = UtilitiesSystem_DataValidator(local_var_40,&processed_var_7580_ptr);
          if (lVar4 == 0) {
            lVar4 = UtilitiesSystem_DataValidator(local_var_40,&processed_var_7584_ptr);
            if (lVar4 == 0) {
              return 0x13;
            }
          }
        }
        fVar3 = NAN;
        fVar5 = -NAN;
      }
      else {
        fVar3 = NAN;
        fVar5 = -NAN;
      }
    }
    else {
      fVar3 = INFINITY;
      fVar5 = -INFINITY;
    }
    if (cVar1 == '-') {
      fVar3 = fVar5;
    }
    *unaff_RSI = fVar3;
  }
  return 0;
}
uint64_t function_88ef0e(int32_t param_1)
{
  char cVar1;
  int32_t uVar2;
  int64_t lVar3;
  char in_CL;
  int32_t uVar4;
  char *unaff_RBX;
  int32_t *unaff_RSI;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  if (in_CL != '\0') {
    cVar1 = *unaff_RBX;
    lVar3 = UtilitiesSystem_DataValidator(param_1,&processed_var_7568_ptr);
    if (lVar3 == 0) {
      lVar3 = UtilitiesSystem_DataValidator(extraout_XMM0_Da,&processed_var_7572_ptr);
      if (lVar3 == 0) {
        lVar3 = UtilitiesSystem_DataValidator(extraout_XMM0_Da_00,&processed_var_7576_ptr);
        if (lVar3 == 0) {
          lVar3 = UtilitiesSystem_DataValidator(extraout_XMM0_Da_01,&processed_var_7580_ptr);
          if (lVar3 == 0) {
            lVar3 = UtilitiesSystem_DataValidator(extraout_XMM0_Da_02,&processed_var_7584_ptr);
            if (lVar3 == 0) {
              return 0x13;
            }
          }
        }
        uVar2 = 0x7fffffff;
        uVar4 = 0xffffffff;
      }
      else {
        uVar2 = 0x7fc00000;
        uVar4 = 0xffc00000;
      }
    }
    else {
      uVar2 = 0x7f800000;
      uVar4 = 0xff800000;
    }
    if (cVar1 == '-') {
      uVar2 = uVar4;
    }
    *unaff_RSI = uVar2;
  }
  return 0;
}
uint64_t function_88efaa(void)
{
  int32_t uVar1;
  int32_t *unaff_RSI;
  char unaff_DIL;
  uVar1 = 0x7fffffff;
  if (unaff_DIL == '-') {
    uVar1 = 0xffffffff;
  }
  *unaff_RSI = uVar1;
  return 0;
}
// 函数: void function_88efd5(void)
void function_88efd5(void)
{
  return;
}
uint64_t function_88efe0(uint64_t param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  uint64_t astack_special_x_18 [2];
  uVar1 = SystemSynchronizer(param_1,astack_special_x_18);
  if ((int)uVar1 == 0) {
    *param_2 = astack_special_x_18[0];
    uVar1 = 0;
  }
  return uVar1;
}
uint64_t function_88f010(uint64_t param_1,uint64_t param_2)
{
  int iVar1;
  uint64_t uVar2;
  uint64_t astack_special_x_18 [2];
  uVar2 = SystemSynchronizer(param_1,astack_special_x_18);
  if ((int)uVar2 == 0) {
    iVar1 = AdvancedSystemOptimizer(astack_special_x_18[0],&processed_var_9020_ptr,param_2);
    uVar2 = 0;
    if (iVar1 != 1) {
      uVar2 = 0x13;
    }
  }
  return uVar2;
}
// 函数: void function_88f050(uint64_t param_1,int64_t param_2)
void function_88f050(uint64_t param_1,int64_t param_2)
{
  int iVar1;
  uint64_t stack_special_x_18;
  int8_t astack_special_x_20 [8];
  iVar1 = SystemSynchronizer(param_1,astack_special_x_20);
  if ((iVar1 == 0) && (iVar1 = SystemSynchronizer(astack_special_x_20,&stack_special_x_18), iVar1 == 0)) {
    iVar1 = AdvancedSystemOptimizer(stack_special_x_18,&processed_var_7592_ptr,param_2,param_2 + 4,param_2 + 8);
    if (((iVar1 == 3) ||
        (((iVar1 = SystemCore_ErrorHandler(&stack_special_x_18,param_2), iVar1 == 0 &&
          (iVar1 = SystemCore_ErrorHandler(&stack_special_x_18,param_2 + 4), iVar1 == 0)) &&
         (iVar1 = SystemCore_ErrorHandler(&stack_special_x_18,param_2 + 8), iVar1 == 0)))) &&
       (iVar1 = SystemSynchronizer(astack_special_x_20,&stack_special_x_18), iVar1 == 0)) {
      iVar1 = AdvancedSystemOptimizer(stack_special_x_18,&processed_var_7592_ptr,param_2 + 0xc,param_2 + 0x10,param_2 + 0x14);
      if (((iVar1 == 3) ||
          (((iVar1 = SystemCore_ErrorHandler(&stack_special_x_18,param_2 + 0xc), iVar1 == 0 &&
            (iVar1 = SystemCore_ErrorHandler(&stack_special_x_18,param_2 + 0x10), iVar1 == 0)) &&
           (iVar1 = SystemCore_ErrorHandler(&stack_special_x_18,param_2 + 0x14), iVar1 == 0)))) &&
         (iVar1 = function_88f3a0(astack_special_x_20,param_2 + 0x18), iVar1 == 0)) {
        function_88f3a0(astack_special_x_20,param_2 + 0x24);
      }
    }
  }
  return;
}
// 函数: void function_88f06b(void)
void function_88f06b(void)
{
  int iVar1;
  int64_t unaff_RBX;
  uint64_t local_buffer_60;
  iVar1 = SystemSynchronizer(&local_buffer_00000068,&local_buffer_00000060);
  if (iVar1 == 0) {
    iVar1 = AdvancedSystemOptimizer(local_buffer_60,&processed_var_7592_ptr);
    if (((iVar1 == 3) ||
        (((iVar1 = SystemCore_ErrorHandler(&local_buffer_00000060), iVar1 == 0 &&
          (iVar1 = SystemCore_ErrorHandler(&local_buffer_00000060,unaff_RBX + 4), iVar1 == 0)) &&
         (iVar1 = SystemCore_ErrorHandler(&local_buffer_00000060,unaff_RBX + 8), iVar1 == 0)))) &&
       (iVar1 = SystemSynchronizer(&local_buffer_00000068,&local_buffer_00000060), iVar1 == 0)) {
      iVar1 = AdvancedSystemOptimizer(local_buffer_60,&processed_var_7592_ptr,unaff_RBX + 0xc,unaff_RBX + 0x10,
                            unaff_RBX + 0x14);
      if (((iVar1 == 3) ||
          (((iVar1 = SystemCore_ErrorHandler(&local_buffer_00000060,unaff_RBX + 0xc), iVar1 == 0 &&
            (iVar1 = SystemCore_ErrorHandler(&local_buffer_00000060,unaff_RBX + 0x10), iVar1 == 0)) &&
           (iVar1 = SystemCore_ErrorHandler(&local_buffer_00000060,unaff_RBX + 0x14), iVar1 == 0)))) &&
         (iVar1 = function_88f3a0(&local_buffer_00000068,unaff_RBX + 0x18), iVar1 == 0)) {
        function_88f3a0(&local_buffer_00000068,unaff_RBX + 0x24);
      }
    }
  }
  return;
}
// 函数: void function_88f0f7(void)
void function_88f0f7(void)
{
  int iVar1;
  int64_t unaff_RBX;
  uint64_t local_buffer_60;
  iVar1 = SystemSynchronizer(&local_buffer_00000068);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = AdvancedSystemOptimizer(local_buffer_60,&processed_var_7592_ptr,unaff_RBX + 0xc,unaff_RBX + 0x10,
                        unaff_RBX + 0x14);
  if (iVar1 != 3) {
    iVar1 = SystemCore_ErrorHandler(&local_buffer_00000060,unaff_RBX + 0xc);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = SystemCore_ErrorHandler(&local_buffer_00000060,unaff_RBX + 0x10);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = SystemCore_ErrorHandler(&local_buffer_00000060,unaff_RBX + 0x14);
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = function_88f3a0(&local_buffer_00000068,unaff_RBX + 0x18);
  if (iVar1 == 0) {
    function_88f3a0(&local_buffer_00000068,unaff_RBX + 0x24);
  }
  return;
}
// 函数: void function_88f18b(void)
void function_88f18b(void)
{
  return;
}
// 函数: void function_88f195(void)
void function_88f195(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_88f1a0(uint64_t param_1,int64_t param_2)
void function_88f1a0(uint64_t param_1,int64_t param_2)
{
  int iVar1;
  int8_t stack_array_98 [32];
  int64_t lStack_78;
  int8_t *plocal_var_70;
  int8_t *plocal_var_68;
  int8_t *plocal_var_60;
  int8_t *plocal_var_58;
  int8_t *plocal_var_50;
  int8_t *plocal_var_48;
  int8_t *plocal_var_40;
  int8_t *plocal_var_38;
  uint64_t local_var_28;
  int8_t stack_array_20 [2];
  int8_t stack_array_1e [2];
  int8_t stack_array_1c [2];
  int8_t stack_array_1a [2];
  int8_t stack_array_18 [2];
  int8_t stack_array_16 [2];
  int8_t stack_array_14 [2];
  int8_t stack_array_12 [2];
  uint64_t local_var_10;
  local_var_10 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  iVar1 = SystemSynchronizer(param_1,&local_var_28);
  if (iVar1 == 0) {
    plocal_var_38 = stack_array_12;
    lStack_78 = param_2 + 6;
    plocal_var_40 = stack_array_14;
    plocal_var_48 = stack_array_16;
    plocal_var_50 = stack_array_18;
    plocal_var_58 = stack_array_1a;
    plocal_var_60 = stack_array_1c;
    plocal_var_68 = stack_array_1e;
    plocal_var_70 = stack_array_20;
    AdvancedSystemOptimizer(local_var_28,&processed_var_7608_ptr,param_2,param_2 + 4);
    *(int8_t *)(param_2 + 8) = stack_array_20[0];
    *(int8_t *)(param_2 + 9) = stack_array_1e[0];
    *(int8_t *)(param_2 + 10) = stack_array_1c[0];
    *(int8_t *)(param_2 + 0xb) = stack_array_1a[0];
    *(int8_t *)(param_2 + 0xc) = stack_array_18[0];
    *(int8_t *)(param_2 + 0xd) = stack_array_16[0];
    *(int8_t *)(param_2 + 0xe) = stack_array_14[0];
    *(int8_t *)(param_2 + 0xf) = stack_array_12[0];
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_10 ^ (uint64_t)stack_array_98);
}
// 函数: void function_88f2d0(uint64_t param_1,uint64_t *param_2)
void function_88f2d0(uint64_t param_1,uint64_t *param_2)
{
  int iVar1;
  int8_t astack_special_x_18 [16];
  iVar1 = SystemSynchronizer(param_1,astack_special_x_18);
  if (iVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
  }
  return;
}
uint64_t function_88f310(uint64_t param_1,uint64_t *param_2)
{
  int iVar1;
  uint64_t uVar2;
  int8_t astack_special_x_18 [8];
  uint64_t stack_special_x_20;
  uVar2 = SystemSynchronizer(param_1,astack_special_x_18);
  if ((int)uVar2 == 0) {
    *param_2 = 0;
    uVar2 = SystemSynchronizer(astack_special_x_18,&stack_special_x_20);
    if ((int)uVar2 == 0) {
      iVar1 = AdvancedSystemOptimizer(stack_special_x_20,&rendering_buffer_2208_ptr,param_2);
      if (iVar1 != 1) {
        return 0x13;
      }
      uVar2 = SystemSynchronizer(astack_special_x_18,&stack_special_x_20);
      if ((int)uVar2 == 0) {
        iVar1 = AdvancedSystemOptimizer(stack_special_x_20,&rendering_buffer_2208_ptr,(int64_t)param_2 + 4);
        if (iVar1 != 1) {
          return 0x13;
        }
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
uint64_t function_88f3a0(uint64_t param_1,int64_t param_2)
{
  int iVar1;
  uint64_t uVar2;
  uint64_t astack_special_x_18 [2];
  uVar2 = SystemSynchronizer(param_1,astack_special_x_18);
  if ((int)uVar2 == 0) {
    iVar1 = AdvancedSystemOptimizer(astack_special_x_18[0],&processed_var_7592_ptr,param_2,param_2 + 4,param_2 + 8);
    if ((iVar1 == 3) ||
       (((uVar2 = SystemCore_ErrorHandler(astack_special_x_18,param_2), (int)uVar2 == 0 &&
         (uVar2 = SystemCore_ErrorHandler(astack_special_x_18,param_2 + 4), (int)uVar2 == 0)) &&
        (uVar2 = SystemCore_ErrorHandler(astack_special_x_18,param_2 + 8), (int)uVar2 == 0)))) {
      uVar2 = 0;
    }
  }
  return uVar2;
}
uint64_t function_88f3c0(uint64_t param_1)
{
  int iVar1;
  uint64_t uVar2;
  int64_t unaff_RBX;
  iVar1 = AdvancedSystemOptimizer(param_1,&processed_var_7592_ptr);
  if (iVar1 != 3) {
    uVar2 = SystemCore_ErrorHandler(&local_buffer_00000050);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = SystemCore_ErrorHandler(&local_buffer_00000050,unaff_RBX + 4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = SystemCore_ErrorHandler(&local_buffer_00000050,unaff_RBX + 8);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}
// 函数: void function_88f427(void)
void function_88f427(void)
{
  return;
}
uint64_t function_88f430(uint64_t param_1,uint64_t param_2)
{
  int iVar1;
  uint64_t uVar2;
  uint64_t astack_special_x_18 [2];
  uVar2 = SystemSynchronizer(param_1,astack_special_x_18);
  if ((int)uVar2 == 0) {
    iVar1 = AdvancedSystemOptimizer(astack_special_x_18[0],&processed_var_7284_ptr,param_2);
    uVar2 = 0;
    if (iVar1 != 1) {
      uVar2 = 0x13;
    }
  }
  return uVar2;
}
uint64_t function_88f470(uint64_t param_1,int8_t *param_2)
{
  uint64_t uVar1;
  uint64_t astack_special_x_18 [2];
  uVar1 = SystemSynchronizer(param_1,astack_special_x_18);
  if ((int)uVar1 == 0) {
    uVar1 = SystemFunction_00018076b420(astack_special_x_18[0],&rendering_buffer_2328_ptr);
    if ((int)uVar1 == 0) {
      *param_2 = 1;
      return uVar1;
    }
    uVar1 = SystemFunction_00018076b420(astack_special_x_18[0],&rendering_buffer_2336_ptr);
    if ((int)uVar1 == 0) {
      *param_2 = (char)uVar1;
      return uVar1;
    }
    uVar1 = 0x13;
  }
  return uVar1;
}
uint64_t function_88f4d0(uint64_t param_1,uint64_t param_2,int param_3)
{
  int iVar1;
  uint64_t uVar2;
  uint64_t stack_special_x_20;
  uVar2 = SystemSynchronizer(param_1,&stack_special_x_20);
  if ((int)uVar2 == 0) {
    iVar1 = SystemFunction_00018076b690(stack_special_x_20);
    if (param_3 <= iVar1) {
      return 0x13;
    }
    SystemFunction_00018076b450(param_2,stack_special_x_20,param_3);
    uVar2 = 0;
  }
  return uVar2;
}
uint64_t function_88f530(uint64_t param_1,int64_t param_2,int param_3)
{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  int8_t astack_special_x_20 [8];
  uint64_t stack_array_18 [2];
  uVar2 = SystemSynchronizer(param_1,astack_special_x_20);
  if ((int)uVar2 == 0) {
    iVar3 = 0;
    if (0 < param_3) {
      do {
        uVar2 = SystemSynchronizer(astack_special_x_20,stack_array_18);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        iVar1 = AdvancedSystemOptimizer(stack_array_18[0],&processed_var_4576_ptr,param_2 + (int64_t)iVar3 * 4);
        if (iVar1 != 1) {
          return 0x13;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_3);
    }
    uVar2 = 0;
  }
  return uVar2;
}
uint64_t function_88f54e(void)
{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t unaff_RSI;
  int unaff_EDI;
  uint64_t stack_special_x_20;
  iVar3 = 0;
  if (0 < unaff_EDI) {
    do {
      uVar2 = SystemSynchronizer(&local_buffer_00000058,&stack_special_x_20);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      iVar1 = AdvancedSystemOptimizer(stack_special_x_20,&processed_var_4576_ptr,unaff_RSI + (int64_t)iVar3 * 4);
      if (iVar1 != 1) {
        return 0x13;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < unaff_EDI);
  }
  return 0;
}
// 函数: void function_88f59d(void)
void function_88f59d(void)
{
  return;
}
uint64_t function_88f5a8(void)
{
  return 0x13;
}
uint64_t function_88f5c0(uint64_t param_1,int64_t param_2,int param_3)
{
  uint64_t uVar1;
  int iVar2;
  int8_t astack_special_x_20 [8];
  uVar1 = SystemSynchronizer(param_1,astack_special_x_20);
  if ((int)uVar1 == 0) {
    iVar2 = 0;
    if (0 < param_3) {
      do {
        uVar1 = SystemCore_ErrorHandler(astack_special_x_20,param_2 + (int64_t)iVar2 * 4);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_3);
    }
    uVar1 = 0;
  }
  return uVar1;
}
uint64_t function_88f5de(void)
{
  uint64_t uVar1;
  int iVar2;
  int64_t unaff_RSI;
  int unaff_EDI;
  iVar2 = 0;
  if (0 < unaff_EDI) {
    do {
      uVar1 = SystemCore_ErrorHandler(&local_buffer_00000048,unaff_RSI + (int64_t)iVar2 * 4);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_EDI);
  }
  return 0;
}
// 函数: void function_88f612(void)
void function_88f612(void)
{
  return;
}
uint64_t function_88f620(uint64_t param_1,int64_t param_2,int param_3)
{
  uint64_t *puVar1;
  int iVar2;
  uint64_t uVar3;
  int iVar4;
  int8_t astack_special_x_20 [8];
  int8_t stack_array_28 [8];
  uint64_t local_var_20;
  uint64_t stack_array_18 [2];
  uVar3 = SystemSynchronizer(param_1,stack_array_28);
  if ((int)uVar3 == 0) {
    iVar4 = 0;
    if (0 < param_3) {
      do {
        puVar1 = (uint64_t *)(param_2 + (int64_t)iVar4 * 8);
        uVar3 = SystemSynchronizer(stack_array_28,astack_special_x_20);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        *puVar1 = 0;
        uVar3 = SystemSynchronizer(astack_special_x_20,&local_var_20);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        iVar2 = AdvancedSystemOptimizer(local_var_20,&rendering_buffer_2208_ptr,puVar1);
        if (iVar2 != 1) {
          return 0x13;
        }
        uVar3 = SystemSynchronizer(astack_special_x_20,stack_array_18);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        iVar2 = AdvancedSystemOptimizer(stack_array_18[0],&rendering_buffer_2208_ptr,(int64_t)puVar1 + 4);
        if (iVar2 != 1) {
          return 0x13;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_3);
    }
    uVar3 = 0;
  }
  return uVar3;
}
uint64_t function_88f643(void)
{
  uint64_t *puVar1;
  int iVar2;
  uint64_t uVar3;
  int iVar4;
  int unaff_ESI;
  int64_t unaff_R14;
  int8_t astack_special_x_20 [8];
  uint64_t local_var_28;
  uint64_t local_var_30;
  iVar4 = 0;
  if (0 < unaff_ESI) {
    do {
      puVar1 = (uint64_t *)(unaff_R14 + (int64_t)iVar4 * 8);
      uVar3 = SystemSynchronizer(astack_special_x_20,&local_buffer_00000068);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      *puVar1 = 0;
      uVar3 = SystemSynchronizer(&local_buffer_00000068,&local_buffer_00000028);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar2 = AdvancedSystemOptimizer(local_var_28,&rendering_buffer_2208_ptr,puVar1);
      if (iVar2 != 1) {
        return 0x13;
      }
      uVar3 = SystemSynchronizer(&local_buffer_00000068,&local_buffer_00000030);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar2 = AdvancedSystemOptimizer(local_var_30,&rendering_buffer_2208_ptr,(int64_t)puVar1 + 4);
      if (iVar2 != 1) {
        return 0x13;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < unaff_ESI);
  }
  return 0;
}