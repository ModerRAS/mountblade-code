#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 01_initialization_part028.c - 24 个函数
// 函数: void function_05d260(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_05d260(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  function_05d260(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  param_2[4] = &system_data_buffer_ptr;
  if (param_2[5] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_2[5] = 0;
  *(int32_t *)(param_2 + 7) = 0;
  param_2[4] = &system_state_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(param_2);
}
// 函数: void function_05d310(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_05d310(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_05d260(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// 函数: void function_05d330(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_05d330(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_05d260(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// 函数: void function_05d360(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_05d360(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_05d260(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// 函数: void function_05d3a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_05d3a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  uint64_t stack_special_x_10;
  uint64_t stack_special_x_18;
  uint64_t stack_special_x_20;
  stack_special_x_10 = param_2;
  stack_special_x_18 = param_3;
  stack_special_x_20 = param_4;
  uVar1 = __acrt_iob_func(1);
  puVar2 = (uint64_t *)Function_6d5908f9();
  __stdio_common_vfprintf(*puVar2,uVar1,param_1,0,&stack_special_x_10);
  return;
}
uint64_t * function_05d400(int64_t param_1,char *param_2)
{
  char *pcVar1;
  char cVar2;
  uint64_t *puVar3;
  char *pcVar4;
  int64_t lVar5;
  char *pcVar6;
  if (param_2 == (char *)0x0) {
    return *(uint64_t **)(param_1 + 0x58);
  }
  cVar2 = *param_2;
  pcVar6 = param_2;
  while (cVar2 != '\0') {
    pcVar6 = pcVar6 + 1;
    cVar2 = *pcVar6;
  }
  puVar3 = *(uint64_t **)(param_1 + 0x58);
  do {
    if (puVar3 == (uint64_t *)0x0) {
      return (uint64_t *)0x0;
    }
    pcVar4 = (char *)*puVar3;
    if (pcVar4 == (char *)0x0) {
      lVar5 = 0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      lVar5 = puVar3[2];
    }
    if (lVar5 == (int64_t)pcVar6 - (int64_t)param_2) {
      pcVar1 = pcVar4 + lVar5;
      if (pcVar1 <= pcVar4) {
        return puVar3;
      }
      lVar5 = (int64_t)param_2 - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar5]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar1 <= pcVar4) {
          return puVar3;
        }
      }
    }
    puVar3 = (uint64_t *)puVar3[0xb];
  } while( true );
}
uint64_t * function_05d430(uint64_t param_1,uint64_t *param_2)
{
  char *pcVar1;
  char *pcVar2;
  int64_t lVar3;
  int64_t in_R10;
  int64_t in_R11;
  if (param_2 != (uint64_t *)0x0) {
    do {
      pcVar2 = (char *)*param_2;
      if (pcVar2 == (char *)0x0) {
        lVar3 = 0;
        pcVar2 = (char *)0x180d48d24;
      }
      else {
        lVar3 = param_2[2];
      }
      if (lVar3 == in_R10) {
        pcVar1 = pcVar2 + lVar3;
        if (pcVar1 <= pcVar2) {
          return param_2;
        }
        lVar3 = in_R11 - (int64_t)pcVar2;
        while (*pcVar2 == pcVar2[lVar3]) {
          pcVar2 = pcVar2 + 1;
          if (pcVar1 <= pcVar2) {
            return param_2;
          }
        }
      }
      param_2 = (uint64_t *)param_2[0xb];
    } while (param_2 != (uint64_t *)0x0);
  }
  return (uint64_t *)0x0;
}
uint64_t * function_05d484(uint64_t param_1,uint64_t *param_2)
{
  char *pcVar1;
  char *pcVar2;
  char *unaff_RBX;
  int64_t lVar3;
  int64_t in_R10;
  int64_t in_R11;
  while( true ) {
    do {
      param_2 = (uint64_t *)param_2[0xb];
      if (param_2 == (uint64_t *)0x0) {
        return (uint64_t *)0x0;
      }
      if ((char *)*param_2 == (char *)0x0) {
        lVar3 = 0;
        pcVar2 = unaff_RBX;
      }
      else {
        lVar3 = param_2[2];
        pcVar2 = (char *)*param_2;
      }
    } while (lVar3 != in_R10);
    pcVar1 = pcVar2 + lVar3;
    if (pcVar1 <= pcVar2) break;
    lVar3 = in_R11 - (int64_t)pcVar2;
    while (*pcVar2 == pcVar2[lVar3]) {
      pcVar2 = pcVar2 + 1;
      if (pcVar1 <= pcVar2) {
        return param_2;
      }
    }
  }
  return param_2;
}
uint64_t function_05d498(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x58);
}
uint64_t * function_05d4b0(int64_t param_1,char *param_2,int64_t param_3)
{
  char *pcVar1;
  char cVar2;
  uint64_t *puVar3;
  char *pcVar4;
  int64_t lVar5;
  if (param_2 == (char *)0x0) {
    return *(uint64_t **)(param_1 + 0x30);
  }
  if (param_3 == 0) {
    cVar2 = *param_2;
    pcVar4 = param_2;
    while (cVar2 != '\0') {
      pcVar4 = pcVar4 + 1;
      cVar2 = *pcVar4;
    }
    param_3 = (int64_t)pcVar4 - (int64_t)param_2;
  }
  puVar3 = *(uint64_t **)(param_1 + 0x30);
  do {
    if (puVar3 == (uint64_t *)0x0) {
      return (uint64_t *)0x0;
    }
    pcVar4 = (char *)*puVar3;
    if (pcVar4 == (char *)0x0) {
      lVar5 = 0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      lVar5 = puVar3[2];
    }
    if (lVar5 == param_3) {
      pcVar1 = pcVar4 + lVar5;
      if (pcVar1 <= pcVar4) {
        return puVar3;
      }
      lVar5 = (int64_t)param_2 - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar5]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar1 <= pcVar4) {
          return puVar3;
        }
      }
    }
    puVar3 = (uint64_t *)puVar3[0xb];
  } while( true );
}
uint64_t * function_05d4e0(uint64_t param_1,uint64_t *param_2,int64_t param_3)
{
  char *pcVar1;
  char *pcVar2;
  int64_t lVar3;
  int64_t in_R11;
  if (param_2 != (uint64_t *)0x0) {
    do {
      pcVar2 = (char *)*param_2;
      if (pcVar2 == (char *)0x0) {
        lVar3 = 0;
        pcVar2 = (char *)0x180d48d24;
      }
      else {
        lVar3 = param_2[2];
      }
      if (lVar3 == param_3) {
        pcVar1 = pcVar2 + lVar3;
        if (pcVar1 <= pcVar2) {
          return param_2;
        }
        lVar3 = in_R11 - (int64_t)pcVar2;
        while (*pcVar2 == pcVar2[lVar3]) {
          pcVar2 = pcVar2 + 1;
          if (pcVar1 <= pcVar2) {
            return param_2;
          }
        }
      }
      param_2 = (uint64_t *)param_2[0xb];
    } while (param_2 != (uint64_t *)0x0);
  }
  return (uint64_t *)0x0;
}
uint64_t * function_05d534(uint64_t param_1,uint64_t *param_2,int64_t param_3)
{
  char *pcVar1;
  char *pcVar2;
  char *unaff_RBX;
  int64_t lVar3;
  int64_t in_R11;
  while( true ) {
    do {
      param_2 = (uint64_t *)param_2[0xb];
      if (param_2 == (uint64_t *)0x0) {
        return (uint64_t *)0x0;
      }
      if ((char *)*param_2 == (char *)0x0) {
        lVar3 = 0;
        pcVar2 = unaff_RBX;
      }
      else {
        lVar3 = param_2[2];
        pcVar2 = (char *)*param_2;
      }
    } while (lVar3 != param_3);
    pcVar1 = pcVar2 + lVar3;
    if (pcVar1 <= pcVar2) break;
    lVar3 = in_R11 - (int64_t)pcVar2;
    while (*pcVar2 == pcVar2[lVar3]) {
      pcVar2 = pcVar2 + 1;
      if (pcVar1 <= pcVar2) {
        return param_2;
      }
    }
  }
  return param_2;
}
uint64_t function_05d548(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x30);
}
// 函数: void function_05d560(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_05d560(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 4) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void DataSerializationEngine(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void DataSerializationEngine(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 4) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
uint64_t *
function_05d600(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_8768_ptr;
  SystemCore_SecurityManager();
  if ((param_2 & 1) != 0) {
    free(param_1,0xc0,param_3,param_4,uVar1);
  }
  return param_1;
}
int8_t * function_05d660(int8_t *param_1)
{
  uint64_t uVar1;
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x20) = 3;
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x38) = 0;
  *(int32_t *)(param_1 + 0x40) = 3;
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(uint64_t *)(param_1 + 0x50) = 0;
  *(uint64_t *)(param_1 + 0x58) = 0;
  *(int32_t *)(param_1 + 0x60) = 3;
  uVar1 = CreateSemaphoreW(0,0,0x7fffffff,0,0xfffffffffffffffe);
  *(uint64_t *)(param_1 + 0x68) = uVar1;
  uVar1 = CreateSemaphoreW(0,0,0x7fffffff,0);
  *(uint64_t *)(param_1 + 0x70) = uVar1;
  function_05e950(param_1 + 0x78);
  function_05e950(param_1 + 0x2e0);
  function_05e950(param_1 + 0x548);
  *(int32_t *)(param_1 + 0x7b0) = 0;
  *(int32_t *)(param_1 + 0x7b4) = 0x1000;
  *param_1 = 0;
  return param_1;
}
// 函数: void function_05d760(uint64_t *param_1)
void function_05d760(uint64_t *param_1)
{
  CloseHandle(*param_1);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_05d790(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_05d790(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int iVar6;
  int64_t lVar7;
  lVar5 = system_memory_pool_ptr;
  if (*(code **)(system_memory_pool_ptr + 0x20) != (code *)0x0) {
    (**(code **)(system_memory_pool_ptr + 0x20))(system_memory_pool_ptr + 0x10,0,0,param_4,0xfffffffffffffffe);
  }
  *(uint64_t *)(lVar5 + 0x20) = 0;
  *(code **)(lVar5 + 0x28) = _guard_check_icall;
  iVar6 = 0;
  plVar1 = (int64_t *)(param_1 + 8);
  if (*(int64_t *)(param_1 + 0x10) - *plVar1 >> 3 != 0) {
    lVar5 = 0;
    do {
      function_20e7b0(*(uint64_t *)(*plVar1 + lVar5));
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
    } while ((uint64_t)(int64_t)iVar6 < (uint64_t)(*(int64_t *)(param_1 + 0x10) - *plVar1 >> 3))
    ;
  }
  iVar6 = 0;
  plVar2 = (int64_t *)(param_1 + 0x28);
  if (*(int64_t *)(param_1 + 0x30) - *plVar2 >> 3 != 0) {
    lVar5 = 0;
    do {
      function_20e7b0(*(uint64_t *)(*plVar2 + lVar5));
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
    } while ((uint64_t)(int64_t)iVar6 < (uint64_t)(*(int64_t *)(param_1 + 0x30) - *plVar2 >> 3))
    ;
  }
  iVar6 = 0;
  plVar3 = (int64_t *)(param_1 + 0x48);
  if (*(int64_t *)(param_1 + 0x50) - *plVar3 >> 3 != 0) {
    lVar5 = 0;
    do {
      function_20e7b0(*(uint64_t *)(*plVar3 + lVar5));
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
    } while ((uint64_t)(int64_t)iVar6 < (uint64_t)(*(int64_t *)(param_1 + 0x50) - *plVar3 >> 3))
    ;
  }
  iVar6 = 0;
  lVar5 = *plVar1;
  if (*(int64_t *)(param_1 + 0x10) - lVar5 >> 3 != 0) {
    lVar7 = 0;
    do {
      plVar4 = *(int64_t **)(lVar7 + lVar5);
      if (plVar4 != (int64_t *)0x0) {
        lVar5 = __RTCastToVoid(plVar4);
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        if (lVar5 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(lVar5);
        }
      }
      *(uint64_t *)(lVar7 + *plVar1) = 0;
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
      lVar5 = *plVar1;
    } while ((uint64_t)(int64_t)iVar6 < (uint64_t)(*(int64_t *)(param_1 + 0x10) - lVar5 >> 3));
  }
  iVar6 = 0;
  lVar5 = *plVar2;
  if (*(int64_t *)(param_1 + 0x30) - lVar5 >> 3 != 0) {
    lVar7 = 0;
    do {
      plVar4 = *(int64_t **)(lVar5 + lVar7);
      if (plVar4 != (int64_t *)0x0) {
        lVar5 = __RTCastToVoid(plVar4);
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        if (lVar5 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(lVar5);
        }
      }
      *(uint64_t *)(lVar7 + *plVar2) = 0;
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
      lVar5 = *plVar2;
    } while ((uint64_t)(int64_t)iVar6 < (uint64_t)(*(int64_t *)(param_1 + 0x30) - lVar5 >> 3));
  }
  iVar6 = 0;
  lVar5 = *plVar3;
  if (*(int64_t *)(param_1 + 0x50) - lVar5 >> 3 != 0) {
    lVar7 = 0;
    do {
      plVar4 = *(int64_t **)(lVar5 + lVar7);
      if (plVar4 != (int64_t *)0x0) {
        lVar5 = __RTCastToVoid(plVar4);
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        if (lVar5 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(lVar5);
        }
      }
      *(uint64_t *)(lVar7 + *plVar3) = 0;
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
      lVar5 = *plVar3;
    } while ((uint64_t)(int64_t)iVar6 < (uint64_t)(*(int64_t *)(param_1 + 0x50) - lVar5 >> 3));
  }
  function_059ee0(param_1 + 0x548);
  function_059ee0(param_1 + 0x2e0);
  function_059ee0(param_1 + 0x78);
  CloseHandle(*(uint64_t *)(param_1 + 0x70));
  CloseHandle(*(uint64_t *)(param_1 + 0x68));
  if (*plVar3 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (*plVar2 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (*plVar1 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// 函数: void function_05dab0(int64_t param_1)
void function_05dab0(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  lVar2 = GetCurrentThread();
  iVar3 = (int)(*(int64_t *)(param_1 + 0x10) - *(int64_t *)(param_1 + 8) >> 3);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      lVar1 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 8) + lVar4 * 8) + 0x40);
      if ((lVar1 != 0) && (lVar1 != lVar2)) {
        SuspendThread();
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  return;
}
// 函数: void function_05dade(void)
void function_05dade(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  lVar2 = 0;
  do {
    lVar1 = *(int64_t *)(*(int64_t *)(*(int64_t *)(unaff_RSI + 8) + lVar2 * 8) + 0x40);
    if ((lVar1 != 0) && (lVar1 != unaff_RBP)) {
      SuspendThread();
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 < unaff_RDI);
  return;
}
// 函数: void function_05db19(void)
void function_05db19(void)
{
  return;
}
// 函数: void function_05db30(int64_t param_1)
void function_05db30(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  lVar2 = GetCurrentThread();
  iVar3 = (int)(*(int64_t *)(param_1 + 0x10) - *(int64_t *)(param_1 + 8) >> 3);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      lVar1 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 8) + lVar4 * 8) + 0x40);
      if ((lVar1 != 0) && (lVar1 != lVar2)) {
        ResumeThread();
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  return;
}
// 函数: void function_05db5e(void)
void function_05db5e(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  lVar2 = 0;
  do {
    lVar1 = *(int64_t *)(*(int64_t *)(*(int64_t *)(unaff_RSI + 8) + lVar2 * 8) + 0x40);
    if ((lVar1 != 0) && (lVar1 != unaff_RBP)) {
      ResumeThread();
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 < unaff_RDI);
  return;
}
// 函数: void function_05db99(void)
void function_05db99(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_05dbb0(void)
void function_05dbb0(void)
{
  int64_t *plVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int iVar12;
  uint uVar13;
  uint64_t uVar14;
  void **ppuVar15;
  int8_t stack_array_1b8 [32];
  int64_t lStack_198;
  int64_t lStack_190;
  int64_t lStack_188;
  int64_t lStack_178;
  void **pplocal_var_170;
  uint64_t local_var_168;
  void *plocal_var_160;
  int8_t *plocal_var_158;
  uint local_var_150;
  int8_t stack_array_148 [16];
  void *plocal_var_138;
  int8_t *plocal_var_130;
  int32_t local_var_128;
  int8_t stack_array_120 [24];
  void *aplocal_var_108 [19];
  int iStack_70;
  uint64_t local_var_58;
  char acStack_48 [16];
  uint64_t local_var_38;
  int64_t lVar6;
  lVar10 = system_context_ptr;
  local_var_168 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1b8;
  lStack_178 = system_context_ptr;
  function_623de0(aplocal_var_108);
  iVar12 = iStack_70 + -1;
  if (*(int *)(lVar10 + 0x7b4) < iStack_70 + -1) {
    iVar12 = *(int *)(lVar10 + 0x7b4);
  }
  iVar2 = 3;
  if (3 < iVar12) {
    iVar2 = iVar12;
  }
  ppuVar15 = (void **)(lVar10 + 8);
  lVar11 = (int64_t)iVar2;
  pplocal_var_170 = ppuVar15;
  function_057340(ppuVar15,lVar11);
  uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x208,8,3);
  uVar9 = 0;
  plocal_var_160 = &system_config_ptr;
  plocal_var_158 = stack_array_148;
  stack_array_148[0] = 0;
  local_var_150 = 4;
  strcpy_s(stack_array_148,0x10,&processed_var_8904_ptr);
  lStack_198 = lVar10 + 0x78;
  lStack_190 = lVar10 + 0x548;
  lStack_188 = lVar10 + 0x68;
  uVar3 = function_20e410(uVar3,&plocal_var_160,0,0);
  *(uint64_t *)*ppuVar15 = uVar3;
  plocal_var_160 = &system_state_ptr;
  puVar4 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x208,8,3);
  plocal_var_138 = &system_config_ptr;
  plocal_var_130 = stack_array_120;
  stack_array_120[0] = 0;
  local_var_128 = 6;
  local_var_58 = puVar4;
  strcpy_s(stack_array_120,0x10,&processed_var_8912_ptr);
  lStack_198 = lVar10 + 0x78;
  lStack_190 = lVar10 + 0x548;
  lStack_188 = lVar10 + 0x68;
  function_20e410(puVar4,&plocal_var_138,1);
  *puVar4 = &processed_var_9168_ptr;
  *(uint64_t **)((int64_t)*ppuVar15 + 8) = puVar4;
  plocal_var_138 = &system_state_ptr;
  iVar12 = 2;
  *(int32_t *)(lStack_178 + 0x7b0) = 2;
  if (2 < lVar11) {
    lVar10 = 2;
    do {
      plocal_var_160 = &system_config_ptr;
      plocal_var_158 = stack_array_148;
      stack_array_148[0] = 0;
      local_var_150 = 7;
      strcpy_s(stack_array_148,0x10,&processed_var_8920_ptr);
      > MedHighFreq_StateMachine1(&local_var_58,&processed_var_4576_ptr,iVar12 + -1);
      lVar6 = -1;
      do {
        lVar5 = lVar6 + 1;
        lVar7 = lVar6 + 1;
        lVar6 = lVar5;
      } while (*(char *)((int64_t)&local_var_58 + lVar7) != '\0');
      iVar2 = (int)lVar5;
      if ((0 < iVar2) && (local_var_150 + iVar2 < 0xf)) {
// WARNING: Subroutine does not return
        memcpy(plocal_var_158 + local_var_150,&local_var_58,(int64_t)(iVar2 + 1));
      }
      uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x208,8,3);
      lStack_188 = lStack_178 + 0x68;
      lStack_190 = lStack_178 + 0x548;
      lStack_198 = lStack_178 + 0x78;
      uVar3 = function_20e410(uVar3,&plocal_var_160,2,iVar12);
      *(uint64_t *)((int64_t)*ppuVar15 + lVar10 * 8) = uVar3;
      plocal_var_160 = &system_state_ptr;
      iVar12 = iVar12 + 1;
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar11);
  }
  lVar10 = lStack_178;
  iVar2 = (int)(iStack_70 + (iStack_70 >> 0x1f & 3U)) >> 2;
  iVar12 = 2;
  if ((1 < iVar2) && (iVar12 = iVar2, 4 < iVar2)) {
    iVar12 = 4;
  }
  plVar1 = (int64_t *)(lStack_178 + 0x28);
  lVar11 = (int64_t)iVar12;
  function_057340(plVar1,lVar11);
  if (0 < lVar11) {
    uVar8 = uVar9;
    uVar14 = uVar9;
    do {
      plocal_var_160 = &system_config_ptr;
      plocal_var_158 = stack_array_148;
      stack_array_148[0] = 0;
      local_var_150 = 10;
      strcpy_s(stack_array_148,0x10,&processed_var_8928_ptr);
      > MedHighFreq_StateMachine1(acStack_48,&processed_var_4576_ptr,uVar8);
      lVar6 = -1;
      do {
        lVar7 = lVar6;
        lVar6 = lVar7 + 1;
      } while (acStack_48[lVar7 + 1] != '\0');
      iVar12 = (int)(lVar7 + 1);
      if ((0 < iVar12) && (local_var_150 + iVar12 < 0xf)) {
// WARNING: Subroutine does not return
        memcpy(plocal_var_158 + local_var_150,acStack_48,(int64_t)((int)lVar7 + 2));
      }
      puVar4 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x208,8,3);
      lStack_198 = lVar10 + 0x70;
      local_var_58 = puVar4;
      function_20e0e0(puVar4,&plocal_var_160,4,lStack_178 + 0x2e0);
      *puVar4 = &processed_var_9112_ptr;
      *(uint64_t **)(*plVar1 + uVar14 * 8) = puVar4;
      plocal_var_160 = &system_state_ptr;
      uVar8 = (uint64_t)((int)uVar8 + 1);
      uVar14 = uVar14 + 1;
      ppuVar15 = pplocal_var_170;
    } while ((int64_t)uVar14 < lVar11);
  }
  uVar8 = uVar9;
  uVar14 = uVar9;
  if (((int64_t *)ppuVar15)[1] - (int64_t)*ppuVar15 >> 3 != 0) {
    do {
      function_20e840(*(uint64_t *)((int64_t)*ppuVar15 + uVar8));
      uVar13 = (int)uVar14 + 1;
      uVar8 = uVar8 + 8;
      uVar14 = (uint64_t)uVar13;
    } while ((uint64_t)(int64_t)(int)uVar13 <
             (uint64_t)(((int64_t *)ppuVar15)[1] - (int64_t)*ppuVar15 >> 3));
  }
  uVar8 = uVar9;
  if (*(int64_t *)(lVar10 + 0x30) - *plVar1 >> 3 != 0) {
    do {
      function_20e840(*(uint64_t *)(*plVar1 + uVar9));
      uVar13 = (int)uVar8 + 1;
      uVar9 = uVar9 + 8;
      uVar8 = (uint64_t)uVar13;
    } while ((uint64_t)(int64_t)(int)uVar13 <
             (uint64_t)(*(int64_t *)(lVar10 + 0x30) - *plVar1 >> 3));
  }
  pplocal_var_170 = aplocal_var_108;
  aplocal_var_108[0] = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_1b8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_TimerManager(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void SystemCore_TimerManager(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uVar5 = 0xfffffffffffffffe;
  (**(code **)(*(int64_t *)*param_2 + 0x78))();
  uVar1 = *(uint *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8)
                   + 0xc);
  if (uVar1 == 0xffffffff) {
    lVar3 = function_05eb80(param_1 + 0x78);
    if (lVar3 != 0) {
      function_05f220(lVar3,param_2);
    }
  }
  else {
    lVar3 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 8) + (uint64_t)uVar1 * 8) + 0x70);
    lVar4 = lVar3 + -8;
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    function_05f040(lVar4,param_2,(uint64_t)__tls_index,param_4,uVar5);
  }
  do {
    iVar2 = ReleaseSemaphore(*(uint64_t *)(param_1 + 0x68),1);
  } while (iVar2 == 0);
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  return;
}
// 函数: void function_05e1d0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_05e1d0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  (**(code **)(*(int64_t *)*param_2 + 0x78))();
  lVar2 = function_05eb80(param_1 + 0x548);
  if (lVar2 != 0) {
    function_05f220(lVar2,param_2);
  }
  do {
    iVar1 = ReleaseSemaphore(*(uint64_t *)(param_1 + 0x68),1,0,param_4,uVar3);
  } while (iVar1 == 0);
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_05e250(int64_t param_1,uint64_t param_2,int param_3)
void function_05e250(int64_t param_1,uint64_t param_2,int param_3)
{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  uVar1 = *(uint *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8)
                   + 0xc);
  if (uVar1 == 0xffffffff) {
    lVar3 = function_05eb80(param_1 + 0x78);
    if (lVar3 != 0) {
      function_05fb30(lVar3,param_2,(int64_t)param_3);
    }
  }
  else {
    lVar3 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 8) + (uint64_t)uVar1 * 8) + 0x70);
    lVar4 = lVar3 + -8;
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    function_05f570(lVar4,param_2,(int64_t)param_3);
  }
  do {
    iVar2 = ReleaseSemaphore(*(uint64_t *)(param_1 + 0x68),param_3,0);
  } while (iVar2 == 0);
  return;
}
// 函数: void function_05e300(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_05e300(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  code *pcVar2;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)**(uint64_t **)(param_1 + 8);
  pcVar2 = *(code **)*puVar1;
  pplStackX_18 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_2;
  plStackX_10 = param_2;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  (*pcVar2)(puVar1,&plStackX_8,param_3,param_4,uVar3);
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  return;
}
// 函数: void SystemPerformance_Monitor(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void SystemPerformance_Monitor(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  code *pcVar2;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  puVar1 = *(uint64_t **)(*(int64_t *)(param_1 + 8) + 8);
  pcVar2 = *(code **)*puVar1;
  pplStackX_18 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_2;
  plStackX_10 = param_2;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  (*pcVar2)(puVar1,&plStackX_8,param_3,param_4,uVar3);
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  return;
}
// 函数: void function_05e3e0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_05e3e0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  code *pcVar2;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  puVar1 = *(uint64_t **)(*(int64_t *)(param_1 + 8) + 0x10);
  pcVar2 = *(code **)*puVar1;
  pplStackX_18 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_2;
  plStackX_10 = param_2;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  (*pcVar2)(puVar1,&plStackX_8,param_3,param_4,uVar3);
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  return;
}
// 函数: void function_05e450(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_05e450(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  (**(code **)(*(int64_t *)*param_2 + 0x78))();
  lVar2 = function_05eb80(param_1 + 0x2e0);
  if (lVar2 != 0) {
    function_05f220(lVar2,param_2);
  }
  do {
    iVar1 = ReleaseSemaphore(*(uint64_t *)(param_1 + 0x70),1,0,param_4,uVar3);
  } while (iVar1 == 0);
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_05e4d0(int64_t param_1,uint64_t param_2)
{
  uint64_t *puVar1;
  uint64_t *pstack_special_x_8;
  puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x208,8,3);
  pstack_special_x_8 = puVar1;
  function_20e0e0(puVar1,param_2,3,param_1 + 0x2e0,param_1 + 0x70);
  *puVar1 = &processed_var_9056_ptr;
  pstack_special_x_8 = puVar1;
  function_20e840(puVar1);
  SystemInitializer(param_1 + 0x48,&pstack_special_x_8);
  return puVar1;
}
// 函数: void function_05e570(int64_t param_1,int64_t *param_2)
void function_05e570(int64_t param_1,int64_t *param_2)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int iVar5;
  uint64_t uVar6;
  iVar5 = 0;
  plVar1 = *(int64_t **)(param_1 + 0x48);
  uVar6 = *(int64_t *)(param_1 + 0x50) - (int64_t)plVar1 >> 3;
  plVar4 = plVar1;
  if (uVar6 != 0) {
    do {
      if ((int64_t *)*plVar4 == param_2) {
        function_20e7b0(plVar1[iVar5]);
        uVar2 = *(uint64_t *)(param_1 + 0x50);
        lVar3 = *(int64_t *)(param_1 + 0x48) + (int64_t)iVar5 * 8;
        uVar6 = lVar3 + 8;
        if (uVar6 < uVar2) {
// WARNING: Subroutine does not return
          memmove(lVar3,uVar6,uVar2 - uVar6);
        }
        *(uint64_t *)(param_1 + 0x50) = uVar2 - 8;
        break;
      }
      iVar5 = iVar5 + 1;
      plVar4 = plVar4 + 1;
    } while ((uint64_t)(int64_t)iVar5 < uVar6);
  }
  if (param_2 != (int64_t *)0x0) {
    lVar3 = __RTCastToVoid(param_2);
    (**(code **)(*param_2 + 0x28))(param_2,0);
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar3);
    }
  }
  return;
}