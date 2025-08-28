/* 此文件包含部分未处理的原始函数，这些函数将在后续处理中完成语义化替换 */
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_11_part044.c - 8 个函数
// 函数: void SystemCore_aa611(void)
void SystemCore_aa611(void)
{
  return;
}
uint64_t SystemCore_aa624(void)
{
  return 0;
}
uint64_t SystemCore_aa628(void)
{
  return 0;
}
uint64_t SystemCore_aa630(byte *param_1,int64_t param_2,int param_3)
{
  byte bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  iVar7 = 0;
  lVar3 = (int64_t)param_3;
  iVar8 = 0;
  iVar5 = 0;
  if (param_1 == (byte *)0x0) {
    return 0x1f;
  }
  if (param_2 == 0) {
    return 0x1f;
  }
  bVar1 = *param_1;
  if (bVar1 != 0) {
    lVar2 = 0;
    do {
      uVar6 = iVar7 + (uint)bVar1;
      param_1 = param_1 + 1;
      iVar8 = iVar8 + 1;
      if (iVar8 == 3) {
        if (lVar2 == lVar3) {
          return 0x1f;
        }
        lVar4 = (int64_t)(int)uVar6;
        *(void *)(lVar2 + param_2) = (&processed_var_7968_ptr)[lVar4 >> 0x12];
        if (lVar2 + 1 == lVar3) {
          return 0x1f;
        }
        *(void *)(lVar2 + 1 + param_2) = (&processed_var_7968_ptr)[(uint)(lVar4 >> 0xc) & 0x3f];
        if (lVar2 + 2 == lVar3) {
          return 0x1f;
        }
        *(void *)(lVar2 + 2 + param_2) = (&processed_var_7968_ptr)[(uint)(lVar4 >> 6) & 0x3f];
        if (lVar2 + 3 == lVar3) {
          return 0x1f;
        }
        iVar5 = iVar5 + 4;
        iVar7 = 0;
        *(void *)(lVar2 + 3 + param_2) = (&processed_var_7968_ptr)[uVar6 & 0x3f];
        lVar2 = lVar2 + 4;
        iVar8 = 0;
      }
      else {
        iVar7 = uVar6 * 0x100;
      }
      bVar1 = *param_1;
    } while (bVar1 != 0);
    if (iVar8 != 0) {
      if (iVar5 == param_3) {
        return 0x1f;
      }
      lVar3 = (int64_t)(iVar7 << (('\x02' - (char)iVar8) * '\b' & 0x1fU));
      *(void *)(iVar5 + param_2) = (&processed_var_7968_ptr)[lVar3 >> 0x12];
      if (iVar5 + 1 == param_3) {
        return 0x1f;
      }
      iVar7 = iVar5 + 2;
      *(void *)((iVar5 + 1) + param_2) = (&processed_var_7968_ptr)[(uint)(lVar3 >> 0xc) & 0x3f];
      if (iVar8 == 1) {
        if (iVar7 == param_3) {
          return 0x1f;
        }
        *(int8_t *)(iVar7 + param_2) = 0x3d;
      }
      else {
        if (iVar7 == param_3) {
          return 0x1f;
        }
        *(void *)(iVar7 + param_2) = (&processed_var_7968_ptr)[(uint)(lVar3 >> 6) & 0x3f];
      }
      iVar7 = iVar5 + 3;
      if (iVar7 == param_3) {
        return 0x1f;
      }
      iVar5 = iVar5 + 4;
      *(int8_t *)(iVar7 + param_2) = 0x3d;
    }
  }
  if (iVar5 == param_3) {
    return 0x1f;
  }
  *(int8_t *)(iVar5 + param_2) = 0;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_aa7e0(void)
{
  uint64_t uVar1;
  if ((system_system_config != 0) || (uVar1 = SystemCore_ff500(), (int)uVar1 == 0)) {
    system_system_config = system_system_config + 1;
    uVar1 = 0;
  }
  return uVar1;
}
uint64_t SystemCore_aa810(int64_t param_1,int param_2,int *param_3,int32_t *param_4)
{
  int iVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  uint64_t *puVar7;
  iVar6 = 0;
  iVar5 = 0;
  if (0 < param_2) {
    lVar3 = 0;
    do {
      if ((*(byte *)(lVar3 + param_1) & 0xdf) == 0) break;
      iVar5 = iVar5 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < param_2);
  }
  if (iVar5 < param_2) {
    puVar7 = (uint64_t *)0x180be4cb0;
    *(int8_t *)(iVar5 + param_1) = 0;
    do {
      iVar1 = SystemFunction_00018076b420(param_1,*puVar7);
      if (iVar1 == 0) {
        *param_3 = iVar6;
        break;
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 1;
    } while ((int64_t)puVar7 < 0x180be4cc8);
    if (iVar6 < 3) {
      iVar5 = iVar5 + 1;
      lVar4 = (int64_t)iVar5;
      for (lVar3 = lVar4; (lVar3 < param_2 && ((*(byte *)(lVar3 + param_1) & 0xdf) != 0));
          lVar3 = lVar3 + 1) {
        iVar5 = iVar5 + 1;
      }
      if (iVar5 < param_2) {
        *(int8_t *)(iVar5 + param_1) = 0;
        uVar2 = atoi(lVar4 + param_1);
        *param_4 = uVar2;
        return 0;
      }
    }
  }
  return 0x1f;
}
uint64_t SystemCore_aa85c(int64_t param_1)
{
  int iVar1;
  int32_t uVar2;
  int64_t in_RAX;
  int64_t lVar3;
  int unaff_EBX;
  int unaff_EBP;
  int64_t unaff_RSI;
  int64_t lVar4;
  int *unaff_R12;
  int32_t *unaff_R13;
  int64_t unaff_R15;
  lVar4 = 0x180be4cb0;
  *(char *)(in_RAX + param_1) = (char)unaff_EBP;
  do {
    iVar1 = SystemFunction_00018076b420();
    if (iVar1 == 0) {
      *unaff_R12 = unaff_EBP;
      break;
    }
    unaff_EBP = unaff_EBP + 1;
    lVar4 = lVar4 + 8;
  } while (lVar4 < 0x180be4cc8);
  if (unaff_EBP < 3) {
    iVar1 = unaff_EBX + 1;
    lVar3 = (int64_t)iVar1;
    for (lVar4 = lVar3; (lVar4 < unaff_R15 && ((*(byte *)(lVar4 + unaff_RSI) & 0xdf) != 0));
        lVar4 = lVar4 + 1) {
      iVar1 = iVar1 + 1;
    }
    if (iVar1 < (int)unaff_R15) {
      *(int8_t *)(iVar1 + unaff_RSI) = 0;
      uVar2 = atoi(lVar3 + unaff_RSI);
      *unaff_R13 = uVar2;
      return 0;
    }
  }
  return 0x1f;
}
uint64_t SystemCore_aa8a1(void)
{
  int32_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int unaff_EBX;
  int iVar5;
  int64_t unaff_RSI;
  int32_t *unaff_R13;
  int64_t unaff_R15;
  iVar5 = unaff_EBX + 1;
  lVar2 = (int64_t)iVar5;
  for (lVar3 = lVar2; (lVar3 < unaff_R15 && ((*(byte *)(lVar3 + unaff_RSI) & 0xdf) != 0));
      lVar3 = lVar3 + 1) {
    iVar5 = iVar5 + 1;
  }
  if (iVar5 < (int)unaff_R15) {
    *(int8_t *)(iVar5 + unaff_RSI) = 0;
    uVar1 = atoi(lVar2 + unaff_RSI);
    *unaff_R13 = uVar1;
    uVar4 = 0;
  }
  else {
    uVar4 = 0x1f;
  }
  return uVar4;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_aa900(uint64_t param_1,int64_t param_2,int param_3)
{
  int iVar1;
  uint64_t uVar2;
  uint astack_special_x_20 [2];
  int iStack_18;
  int aiStack_14 [3];
  iStack_18 = 0;
  SystemCore_PerformanceMonitor(&iStack_18);
  astack_special_x_20[0] = 0;
  uVar2 = SystemCore_ff640(param_1,param_2,param_3,astack_special_x_20);
  iVar1 = (int)uVar2;
  while( true ) {
    if (iVar1 != 0x2d) {
      return uVar2;
    }
    param_2 = param_2 + (uint64_t)astack_special_x_20[0];
    param_3 = param_3 - astack_special_x_20[0];
    UIComponent_EventHandler(1);
    SystemCore_PerformanceMonitor(aiStack_14);
    if (system_system_buffer_config <= aiStack_14[0] - iStack_18) break;
    astack_special_x_20[0] = 0;
    uVar2 = SystemCore_ff640(param_1,param_2,param_3,astack_special_x_20);
    iVar1 = (int)uVar2;
  }
  return 0x2b;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_aa9c0(uint64_t param_1,int8_t *param_2,int param_3)
{
  int iVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  char acStackX_10 [8];
  uint astack_special_x_20 [2];
  int iStack_38;
  int aiStack_34 [3];
  uVar5 = 0;
  if ((param_2 == (int8_t *)0x0) || (param_3 == 0)) {
    return 0x1f;
  }
  *param_2 = 0;
  if (param_3 != 1) {
    do {
      acStackX_10[0] = '\0';
      iVar6 = 1;
      iStack_38 = 0;
      pcVar4 = acStackX_10;
      SystemCore_PerformanceMonitor(&iStack_38);
      astack_special_x_20[0] = 0;
      uVar2 = SystemCore_ff640(param_1,acStackX_10,1,astack_special_x_20);
      iVar1 = (int)uVar2;
      while (iVar1 == 0x2d) {
        pcVar4 = pcVar4 + astack_special_x_20[0];
        iVar6 = iVar6 - astack_special_x_20[0];
        UIComponent_EventHandler(1);
        SystemCore_PerformanceMonitor(aiStack_34);
        if (system_system_buffer_config <= aiStack_34[0] - iStack_38) {
          return 0x2b;
        }
        astack_special_x_20[0] = 0;
        uVar2 = SystemCore_ff640(param_1,pcVar4,iVar6,astack_special_x_20);
        iVar1 = (int)uVar2;
      }
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (acStackX_10[0] == '\n') break;
      if (acStackX_10[0] != '\r') {
        uVar3 = (uint64_t)uVar5;
        uVar5 = uVar5 + 1;
        param_2[uVar3] = acStackX_10[0];
      }
    } while (uVar5 < param_3 - 1U);
  }
  param_2[uVar5] = 0;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_aa9e9(uint64_t param_1,int8_t *param_2,int param_3)
{
  int iVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint unaff_ESI;
  int unaff_R12D;
  int64_t unaff_R14;
  int iStackX_20;
  int iStackX_24;
  char cStack0000000000000068;
  *param_2 = (char)unaff_ESI;
  if (param_3 != 1) {
    do {
      iStackX_20 = unaff_R12D;
      cStack0000000000000068 = (char)unaff_R12D;
      SystemCore_PerformanceMonitor(&iStackX_20);
      uVar2 = SystemCore_ff640();
      iVar1 = (int)uVar2;
      while (iVar1 == 0x2d) {
        UIComponent_EventHandler(1);
        SystemCore_PerformanceMonitor(&iStackX_24);
        if (system_system_buffer_config <= iStackX_24 - iStackX_20) {
          return 0x2b;
        }
        uVar2 = SystemCore_ff640();
        iVar1 = (int)uVar2;
      }
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (cStack0000000000000068 == '\n') break;
      if (cStack0000000000000068 != '\r') {
        uVar3 = (uint64_t)unaff_ESI;
        unaff_ESI = unaff_ESI + 1;
        *(char *)(uVar3 + unaff_R14) = cStack0000000000000068;
      }
    } while (unaff_ESI < param_3 - 1U);
  }
  *(char *)((uint64_t)unaff_ESI + unaff_R14) = (char)unaff_R12D;
  return 0;
}
uint64_t SystemCore_aaae0(void)
{
  return 0x2b;
}
uint64_t SystemCore_aaae7(void)
{
  return 0x1f;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_aab10(void)
{
  uint64_t uVar1;
  system_system_config = system_system_config + -1;
  if ((system_system_config == 0) && (uVar1 = SystemCore_ff7f0(), (int)uVar1 != 0)) {
    return uVar1;
  }
  return 0;
}
// 函数: void SystemCore_aab30(uint64_t *param_1)
void SystemCore_aab30(uint64_t *param_1)
{
  SystemCore_86350();
  *param_1 = &processed_var_8040_ptr;
// WARNING: Subroutine does not return
  memset(param_1 + 0x65,0,0xf0);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t * SystemCore_aaba0(uint64_t param_1,uint param_2,int64_t param_3,int64_t *param_4)
{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int32_t uVar5;
  int iVar6;
  uint uVar7;
  int64_t *plVar8;
  if (param_4 == (int64_t *)0x0) {
    return (int64_t *)0x1f;
  }
  plVar4 = (int64_t *)0x0;
  uVar7 = 0;
  plVar3 = plVar4;
  plVar8 = (int64_t *)*param_4;
  if (((int64_t *)*param_4 == (int64_t *)0x0) &&
     ((lVar2 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x188,&processed_var_8080_ptr,0x9a,0),
      lVar2 == 0 ||
      (plVar3 = (int64_t *)NetworkProtocol_01350(lVar2), plVar8 = plVar3, plVar3 == (int64_t *)0x0)))) {
    plVar8 = (int64_t *)0x26;
    goto LAB_1807aada3;
  }
  if (param_3 == 0) {
    *param_4 = (int64_t)plVar8;
    plVar8 = plVar4;
    goto LAB_1807aada3;
  }
  *(int32_t *)(plVar8 + 5) = *(int32_t *)(param_3 + 8);
  *(int32_t *)(plVar8 + 9) = *(int32_t *)(param_3 + 0x14);
  plVar8[0x2e] = 0;
  if ((param_2 >> 9 & 1) == 0) {
    iVar1 = *(int *)(param_3 + 8);
    uVar7 = *(uint *)(param_3 + 0x18);
    iVar6 = 8;
    lVar2 = 8;
    if (iVar1 == 1) {
LAB_1807aacb0:
      uVar7 = (uint)((uint64_t)uVar7 * lVar2 >> 3);
    }
    else {
      if (iVar1 == 2) {
        lVar2 = 0x10;
        goto LAB_1807aacb0;
      }
      if (iVar1 == 3) {
        lVar2 = 0x18;
        goto LAB_1807aacb0;
      }
      if ((iVar1 == 4) || (iVar1 == 5)) {
        lVar2 = 0x20;
        goto LAB_1807aacb0;
      }
    }
    *(uint *)(plVar8 + 9) = uVar7 * *(int *)(param_3 + 0xc);
    iVar1 = *(int *)(param_3 + 8);
    lVar2 = 8;
    if (iVar1 == 1) {
LAB_1807aacf0:
      iVar6 = (int)lVar2;
    }
    else {
      if (iVar1 == 2) {
        lVar2 = 0x10;
        goto LAB_1807aacf0;
      }
      if (iVar1 == 3) {
        lVar2 = 0x18;
        goto LAB_1807aacf0;
      }
      lVar2 = 0x20;
      if ((iVar1 == 4) || (iVar1 == 5)) goto LAB_1807aacf0;
    }
    uVar7 = iVar6 * *(int *)(param_3 + 0xc);
    if (uVar7 < 9) {
      plVar8[0x2e] = (int64_t)(plVar8 + 0x2f);
      goto LAB_1807aad3e;
    }
    lVar2 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar7,&processed_var_8080_ptr,0xcc,0);
    plVar8[0x2e] = lVar2;
    if (lVar2 != 0) goto LAB_1807aad3e;
  }
  else {
    *(int32_t *)(plVar8 + 9) = *(int32_t *)(param_3 + 0x14);
LAB_1807aad3e:
    if ((param_2 >> 0x1c & 1) != 0) {
      plVar8[0x2d] = 0;
LAB_1807aadc2:
      plVar8[0x2c] = (int64_t)plVar4;
      *(int32_t *)(plVar8 + 5) = *(int32_t *)(param_3 + 8);
      *(int32_t *)((int64_t)plVar8 + 0x44) = *(int32_t *)(param_3 + 0x18);
      *param_4 = (int64_t)plVar8;
      return (int64_t *)0x0;
    }
    uVar5 = 4;
    if ((param_2 & 0x80) != 0) {
      uVar5 = 2;
    }
    lVar2 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),(int)plVar8[9] + 0x10 + uVar7 * 2,
                          &processed_var_8080_ptr,0xdb,uVar5);
    plVar8[0x2d] = lVar2;
    if (lVar2 != 0) {
      plVar4 = (int64_t *)((uint64_t)uVar7 + 0xf + lVar2 & 0xfffffffffffffff0);
      goto LAB_1807aadc2;
    }
  }
  plVar8 = (int64_t *)0x26;
  plVar4 = plVar3;
LAB_1807aada3:
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4,1);
  }
  return plVar8;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_aae00(int64_t param_1,int param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  if (*(int64_t *)(param_1 + 0x48) == 0) {
    return 0x43;
  }
  if (param_2 == 0) {
LAB_1807aaf0e:
    uVar3 = 0;
  }
  else {
    uVar5 = 0;
    lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x20,&processed_var_8080_ptr,0x48,0,0,1);
    uVar2 = uVar5;
    if (lVar1 != 0) {
      uVar2 = SystemFunction_000180786010(lVar1);
    }
    *(uint64_t *)(param_1 + 0x40) = uVar2;
    if (uVar2 != 0) {
      uVar3 = SystemCore_861b0(uVar2,*(uint64_t *)(param_1 + 0x48),param_1,param_2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar1 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x308,&processed_var_8080_ptr,
                            0x51,0);
      *(int64_t *)(param_1 + 0x418) = lVar1;
      if (lVar1 != 0) {
        if (0 < param_2) {
          do {
            lVar1 = (int64_t)(int)uVar5 * 0x308;
            SystemCore_ff8a0(*(int64_t *)(param_1 + 0x418) + lVar1);
            uVar3 = SystemFunction_000180786300(*(uint64_t *)(param_1 + 0x40),uVar5,
                                        *(int64_t *)(param_1 + 0x418) + lVar1);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (uint64_t)uVar4;
          } while ((int)uVar4 < param_2);
        }
        goto LAB_1807aaf0e;
      }
    }
    uVar3 = 0x26;
  }
  return uVar3;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_aae26(void)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t unaff_RBP;
  int unaff_ESI;
  uint uVar4;
  uint64_t uVar5;
  int8_t local_var_28;
  int8_t local_var_30;
  if (unaff_ESI == 0) {
LAB_1807aaf0e:
    uVar3 = 0;
  }
  else {
    uVar5 = 0;
    local_var_30 = 1;
    local_var_28 = 0;
    lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x20,&processed_var_8080_ptr,0x48,0);
    uVar2 = uVar5;
    if (lVar1 != 0) {
      uVar2 = SystemFunction_000180786010(lVar1);
    }
    *(uint64_t *)(unaff_RBP + 0x40) = uVar2;
    if (uVar2 != 0) {
      uVar3 = SystemCore_861b0(uVar2,*(uint64_t *)(unaff_RBP + 0x48));
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar1 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_ESI * 0x308,&processed_var_8080_ptr
                            ,0x51,0);
      *(int64_t *)(unaff_RBP + 0x418) = lVar1;
      if (lVar1 != 0) {
        if (0 < unaff_ESI) {
          do {
            lVar1 = (int64_t)(int)uVar5 * 0x308;
            SystemCore_ff8a0(*(int64_t *)(unaff_RBP + 0x418) + lVar1);
            uVar3 = SystemFunction_000180786300(*(uint64_t *)(unaff_RBP + 0x40),uVar5,
                                        *(int64_t *)(unaff_RBP + 0x418) + lVar1);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (uint64_t)uVar4;
          } while ((int)uVar4 < unaff_ESI);
        }
        goto LAB_1807aaf0e;
      }
    }
    uVar3 = 0x26;
  }
  return uVar3;
}
uint64_t SystemCore_aaf25(void)
{
  return 0x26;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_aaf30(int64_t param_1)
void SystemCore_aaf30(int64_t param_1)
{
  if (*(int64_t *)(param_1 + 0x40) != 0) {
    SystemCore_86250();
    *(uint64_t *)(param_1 + 0x40) = 0;
  }
  if (*(int64_t *)(param_1 + 0x418) != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x418),
                  &processed_var_8080_ptr,0x78,1);
  }
  if (*(code **)(param_1 + 0x368) != (code *)0x0) {
    (**(code **)(param_1 + 0x368))(param_1 + 8);
  }
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&processed_var_9968_ptr,0x56,1);
}
// WARNING: Removing unreachable block (ram,0x00018077269f)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_aafb0(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uVar4 = NetworkProtocol_03a90();
  uVar4 = SystemCore_72560(param_1,uVar4);
  if ((int)uVar4 == 0) {
    uVar4 = NetworkProtocol_02390();
    uVar4 = SystemCore_72560(param_1,uVar4);
    if ((int)uVar4 == 0) {
      plVar5 = (int64_t *)SystemFunction_000180806810();
      if (plVar5 == (int64_t *)0x0) {
        uVar4 = 0x1f;
      }
      else if ((int)*plVar5 == 5) {
        plVar3 = (int64_t *)
                 SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x110,&rendering_buffer_2864_ptr,0x3fd,0)
        ;
        if (plVar3 == (int64_t *)0x0) {
          uVar4 = 0x26;
        }
        else {
          plVar3[1] = (int64_t)plVar3;
          *plVar3 = (int64_t)plVar3;
          plVar3[2] = 0;
          lVar1 = plVar5[1];
          plVar3[3] = *plVar5;
          plVar3[4] = lVar1;
          lVar1 = plVar5[3];
          plVar3[5] = plVar5[2];
          plVar3[6] = lVar1;
          lVar1 = plVar5[5];
          plVar3[7] = plVar5[4];
          plVar3[8] = lVar1;
          lVar1 = plVar5[7];
          plVar3[9] = plVar5[6];
          plVar3[10] = lVar1;
          lVar1 = plVar5[9];
          plVar3[0xb] = plVar5[8];
          plVar3[0xc] = lVar1;
          lVar1 = plVar5[0xb];
          plVar3[0xd] = plVar5[10];
          plVar3[0xe] = lVar1;
          lVar1 = plVar5[0xd];
          plVar3[0xf] = plVar5[0xc];
          plVar3[0x10] = lVar1;
          lVar1 = plVar5[0xf];
          plVar3[0x11] = plVar5[0xe];
          plVar3[0x12] = lVar1;
          lVar1 = plVar5[0x11];
          plVar3[0x13] = plVar5[0x10];
          plVar3[0x14] = lVar1;
          lVar1 = plVar5[0x13];
          plVar3[0x15] = plVar5[0x12];
          plVar3[0x16] = lVar1;
          lVar1 = plVar5[0x15];
          plVar3[0x17] = plVar5[0x14];
          plVar3[0x18] = lVar1;
          lVar1 = plVar5[0x17];
          plVar3[0x19] = plVar5[0x16];
          plVar3[0x1a] = lVar1;
          lVar1 = plVar5[0x19];
          plVar3[0x1b] = plVar5[0x18];
          plVar3[0x1c] = lVar1;
          lVar1 = plVar5[0x1b];
          plVar3[0x1d] = plVar5[0x1a];
          plVar3[0x1e] = lVar1;
          lVar1 = plVar5[0x1c];
          lVar2 = plVar5[0x1d];
          plVar3[0x21] = 0;
          plVar3[0x1f] = lVar1;
          plVar3[0x20] = lVar2;
          *(int32_t *)(plVar3 + 0x18) = *(int32_t *)(param_1 + 0x3a0);
          *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x3a0) + 1;
          plVar3[1] = *(int64_t *)(param_1 + 0x290);
          *plVar3 = param_1 + 0x288;
          *(int64_t **)(param_1 + 0x290) = plVar3;
          *(int64_t **)plVar3[1] = plVar3;
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0x38;
      }
      return uVar4;
    }
  }
  return uVar4;
}
// 函数: void SystemCore_ab010(uint64_t *param_1)
void SystemCore_ab010(uint64_t *param_1)
{
  SystemCore_86350();
  *param_1 = &processed_var_8648_ptr;
// WARNING: Subroutine does not return
  memset(param_1 + 0x65,0,0xf0);
}
uint64_t * SystemCore_ab050(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_8200_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x70);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_ab080(int64_t param_1,int param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  if (*(int64_t *)(param_1 + 0x48) == 0) {
    return 0x43;
  }
  if (param_2 == 0) {
LAB_1807ab1ac:
    uVar3 = 0;
  }
  else {
    uVar5 = 0;
    lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x20,&processed_var_8656_ptr,0x41,0,0,1);
    uVar2 = uVar5;
    if (lVar1 != 0) {
      uVar2 = SystemFunction_000180786010(lVar1);
    }
    *(uint64_t *)(param_1 + 0x40) = uVar2;
    if (uVar2 != 0) {
      uVar3 = SystemCore_861b0(uVar2,*(uint64_t *)(param_1 + 0x48),param_1,param_2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar1 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x70,&processed_var_8656_ptr,
                            0x4d,0);
      *(int64_t *)(param_1 + 0x418) = lVar1;
      if (lVar1 != 0) {
        uVar2 = uVar5;
        if (0 < param_2) {
          do {
            puVar6 = (uint64_t *)(*(int64_t *)(param_1 + 0x418) + uVar2);
            SystemFunction_0001808069a0(puVar6);
            *puVar6 = &processed_var_8424_ptr;
            uVar3 = SystemFunction_000180786300(*(uint64_t *)(param_1 + 0x40),uVar5,
                                        (int64_t)(int)uVar5 * 0x70 + *(int64_t *)(param_1 + 0x418)
                                       );
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (uint64_t)uVar4;
            uVar2 = uVar2 + 0x70;
          } while ((int)uVar4 < param_2);
        }
        goto LAB_1807ab1ac;
      }
    }
    uVar3 = 0x26;
  }
  return uVar3;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_ab0a1(void)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  int unaff_EBP;
  uint64_t *puVar6;
  int64_t unaff_R14;
  int8_t local_var_28;
  int8_t local_var_30;
  if (unaff_EBP == 0) {
LAB_1807ab1ac:
    uVar3 = 0;
  }
  else {
    uVar5 = 0;
    local_var_30 = 1;
    local_var_28 = 0;
    lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x20,&processed_var_8656_ptr,0x41,0);
    uVar2 = uVar5;
    if (lVar1 != 0) {
      uVar2 = SystemFunction_000180786010(lVar1);
    }
    *(uint64_t *)(unaff_R14 + 0x40) = uVar2;
    if (uVar2 != 0) {
      uVar3 = SystemCore_861b0(uVar2,*(uint64_t *)(unaff_R14 + 0x48));
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar1 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_EBP * 0x70,&processed_var_8656_ptr,
                            0x4d,0);
      *(int64_t *)(unaff_R14 + 0x418) = lVar1;
      if (lVar1 != 0) {
        uVar2 = uVar5;
        if (0 < unaff_EBP) {
          do {
            puVar6 = (uint64_t *)(*(int64_t *)(unaff_R14 + 0x418) + uVar2);
            SystemFunction_0001808069a0(puVar6);
            *puVar6 = &processed_var_8424_ptr;
            uVar3 = SystemFunction_000180786300(*(uint64_t *)(unaff_R14 + 0x40),uVar5,
                                        (int64_t)(int)uVar5 * 0x70 +
                                        *(int64_t *)(unaff_R14 + 0x418));
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (uint64_t)uVar4;
            uVar2 = uVar2 + 0x70;
          } while ((int)uVar4 < unaff_EBP);
        }
        goto LAB_1807ab1ac;
      }
    }
    uVar3 = 0x26;
  }
  return uVar3;
}
uint64_t SystemCore_ab1ca(void)
{
  return 0x26;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_ab200(int64_t param_1)
void SystemCore_ab200(int64_t param_1)
{
  if (*(int64_t *)(param_1 + 0x40) != 0) {
    SystemCore_86250();
    *(uint64_t *)(param_1 + 0x40) = 0;
  }
  if (*(int64_t *)(param_1 + 0x418) != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x418),
                  &processed_var_8656_ptr,0x75,1);
  }
  if (*(code **)(param_1 + 0x368) != (code *)0x0) {
    (**(code **)(param_1 + 0x368))(param_1 + 8);
  }
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&processed_var_9968_ptr,0x56,1);
}
// 函数: void SystemCore_ab270(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
void SystemCore_ab270(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
{
  SystemCore_636f0(param_1 + 0x18,param_3,param_2,*(int8_t *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0xc),*(int32_t *)(param_1 + 8),param_4,1);
  return;
}
// 函数: void SystemCore_ab2b0(void)
void SystemCore_ab2b0(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_ab3d0(int64_t param_1)
void SystemCore_ab3d0(int64_t param_1)
{
  SystemCore_63220(param_1 + 0x18);
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&processed_var_8784_ptr,0x3d,1);
}
uint64_t SystemCore_ab420(byte *param_1)
{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  int32_t uVar8;
  bVar1 = *param_1;
  uVar2 = (bVar1 & 0x7f) << 8 | (uint)param_1[1];
  iVar4 = CONCAT31(CONCAT21(CONCAT11(param_1[2],param_1[3]),param_1[4]),param_1[5]);
  iVar3 = CONCAT31(CONCAT21(CONCAT11(param_1[6],param_1[7]),param_1[8]),param_1[9]);
  if (uVar2 == 0) {
    if ((iVar4 == 0) && (iVar3 == 0)) {
      fVar7 = 0.0;
      goto LAB_1807ab50e;
    }
  }
  else if (uVar2 == 0x7fff) {
    fVar7 = 0.0;
    goto LAB_1807ab50e;
  }
  dVar5 = (double)ldexp((double)((float)(iVar4 + -0x80000000) + 2.1474836e+09),uVar2 - 0x401e);
  dVar6 = (double)ldexp((double)((float)(iVar3 + -0x80000000) + 2.1474836e+09),uVar2 - 0x403e);
  bVar1 = *param_1;
  fVar7 = (float)dVar5 + (float)dVar6;
LAB_1807ab50e:
  uVar8 = 0;
  if ((char)bVar1 < '\0') {
    uVar8 = 0x80000000;
    fVar7 = -fVar7;
  }
  return CONCAT44(uVar8,fVar7);
}
uint64_t SystemCore_ab439(char *param_1,uint param_2,uint param_3)
{
  uint in_EAX;
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  int32_t uVar8;
  cVar1 = (char)param_2;
  uVar2 = (param_2 & 0x7f) << 8 | in_EAX;
  uVar4 = ((param_3 | (byte)param_1[3]) << 8 | (uint)(byte)param_1[4]) << 8 | (uint)(byte)param_1[5]
  ;
  iVar3 = CONCAT31(CONCAT21(CONCAT11(param_1[6],param_1[7]),param_1[8]),param_1[9]);
  if (uVar2 == 0) {
    if ((uVar4 == 0) && (iVar3 == 0)) {
      fVar7 = 0.0;
      goto LAB_1807ab50e;
    }
  }
  else if (uVar2 == 0x7fff) {
    fVar7 = 0.0;
    goto LAB_1807ab50e;
  }
  dVar5 = (double)ldexp((double)((float)(int)(uVar4 + 0x80000000) + 2.1474836e+09),uVar2 - 0x401e);
  dVar6 = (double)ldexp((double)((float)(iVar3 + -0x80000000) + 2.1474836e+09),uVar2 - 0x403e);
  cVar1 = *param_1;
  fVar7 = (float)dVar5 + (float)dVar6;
LAB_1807ab50e:
  uVar8 = 0;
  if (cVar1 < '\0') {
    uVar8 = 0x80000000;
    fVar7 = -fVar7;
  }
  return CONCAT44(uVar8,fVar7);
}
uint64_t SystemCore_ab521(void)
{
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  return CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) ^ 0x8000000080000000;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address