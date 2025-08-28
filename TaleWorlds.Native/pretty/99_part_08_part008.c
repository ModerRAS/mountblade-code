/* 函数别名定义: DataDeserializer */
#define DataDeserializer DataDeserializer
/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_08_part008.c - 29 个函数
// 函数: void function_4e19a0(int64_t param_1,int64_t param_2)
void function_4e19a0(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  if (param_2 == 0) {
    *(int32_t *)(param_1 + 0x10) = 0;
    **(int8_t **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((int)lVar1 < 0xc) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
// WARNING: Could not recover jumptable at 0x0001804e19d7. Too many branches
// WARNING: Treating indirect jump as call
    strcpy_s(*(uint64_t *)(param_1 + 8),0xc);
    return;
  }
  SystemDataInitializer(&processed_var_616_ptr,0xc,param_2);
  *(int32_t *)(param_1 + 0x10) = 0;
  **(int8_t **)(param_1 + 8) = 0;
  return;
}
// 函数: void function_4e1a20(int64_t param_1,uint64_t param_2,int param_3)
void function_4e1a20(int64_t param_1,uint64_t param_2,int param_3)
{
  if (param_3 + 1 < 0xc) {
// WARNING: Subroutine does not return
    memcpy(*(int8_t **)(param_1 + 8),param_2,(int64_t)param_3);
  }
  **(int8_t **)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  return;
}
// 函数: void function_4e1a3f(void)
void function_4e1a3f(void)
{
// WARNING: Subroutine does not return
  memcpy();
}
// 函数: void function_4e1a64(int8_t *param_1)
void function_4e1a64(int8_t *param_1)
{
  int64_t unaff_RDI;
  *param_1 = 0;
  *(int32_t *)(unaff_RDI + 0x10) = 0;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4e1a80(int64_t param_1,int64_t param_2,int64_t param_3)
void function_4e1a80(int64_t param_1,int64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int8_t stack_array_98 [32];
  uint64_t local_var_78;
  void *plocal_var_70;
  int8_t *plocal_var_68;
  int32_t local_var_60;
  int8_t stack_array_58 [16];
  uint64_t local_var_48;
  local_var_78 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  plocal_var_70 = &rendering_buffer_2560_ptr;
  plocal_var_68 = stack_array_58;
  local_var_60 = 0;
  stack_array_58[0] = 0;
  lVar1 = strstr(*(uint64_t *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar2 + param_3) != '\0');
// WARNING: Subroutine does not return
    memcpy(plocal_var_68,*(int64_t *)(param_1 + 8),lVar1 - *(int64_t *)(param_1 + 8));
  }
  plocal_var_70 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_98);
}
// 函数: void function_4e1be0(int64_t param_1,int64_t param_2)
void function_4e1be0(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  if (param_2 == 0) {
    *(int32_t *)(param_1 + 0x10) = 0;
    **(int8_t **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((int)lVar1 < 8) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
// WARNING: Could not recover jumptable at 0x0001804e1c17. Too many branches
// WARNING: Treating indirect jump as call
    strcpy_s(*(uint64_t *)(param_1 + 8),8);
    return;
  }
  SystemDataInitializer(&processed_var_616_ptr,8,param_2);
  *(int32_t *)(param_1 + 0x10) = 0;
  **(int8_t **)(param_1 + 8) = 0;
  return;
}
// 函数: void function_4e1c60(int64_t param_1,uint64_t param_2,int param_3)
void function_4e1c60(int64_t param_1,uint64_t param_2,int param_3)
{
  if (param_3 + 1 < 8) {
// WARNING: Subroutine does not return
    memcpy(*(int8_t **)(param_1 + 8),param_2,(int64_t)param_3);
  }
  **(int8_t **)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  return;
}
// 函数: void function_4e1c7f(void)
void function_4e1c7f(void)
{
// WARNING: Subroutine does not return
  memcpy();
}
// 函数: void function_4e1ca4(int8_t *param_1)
void function_4e1ca4(int8_t *param_1)
{
  int64_t unaff_RDI;
  *param_1 = 0;
  *(int32_t *)(unaff_RDI + 0x10) = 0;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4e1cc0(int64_t param_1,int64_t param_2,int64_t param_3)
void function_4e1cc0(int64_t param_1,int64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int8_t stack_array_88 [32];
  uint64_t local_var_68;
  void *plocal_var_60;
  int8_t *plocal_var_58;
  int32_t local_var_50;
  int8_t stack_array_48 [8];
  uint64_t local_var_40;
  local_var_68 = 0xfffffffffffffffe;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_88;
  plocal_var_60 = &rendering_buffer_2608_ptr;
  plocal_var_58 = stack_array_48;
  local_var_50 = 0;
  stack_array_48[0] = 0;
  lVar1 = strstr(*(uint64_t *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar2 + param_3) != '\0');
// WARNING: Subroutine does not return
    memcpy(plocal_var_58,*(int64_t *)(param_1 + 8),lVar1 - *(int64_t *)(param_1 + 8));
  }
  plocal_var_60 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_88);
}
// 函数: void function_4e1e20(void)
void function_4e1e20(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// 函数: void function_4e2190(void)
void function_4e2190(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// 函数: void function_4e2550(void)
void function_4e2550(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// 函数: void function_4e2890(void)
void function_4e2890(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// 函数: void function_4e2be0(void)
void function_4e2be0(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
uint64_t *
function_4e2ec0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  *param_1 = &system_state_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_4e2f00(int64_t param_1,int64_t *param_2,uint64_t param_3)
{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x28,*(int8_t *)(param_1 + 0x28));
  puVar3[4] = param_2[4];
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = param_3;
  *(char *)(puVar3 + 3) = (char)param_2[3];
  if (*param_2 != 0) {
    uVar4 = function_4e2f00(param_1,*param_2,puVar3);
    *puVar3 = uVar4;
  }
  puVar2 = puVar3;
  for (plVar1 = (int64_t *)param_2[1]; plVar1 != (int64_t *)0x0; plVar1 = (int64_t *)plVar1[1]) {
    puVar5 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x28,*(int8_t *)(param_1 + 0x28));
    puVar5[4] = plVar1[4];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = puVar2;
    *(char *)(puVar5 + 3) = (char)plVar1[3];
    puVar2[1] = puVar5;
    if (*plVar1 != 0) {
      uVar4 = function_4e2f00(param_1,*plVar1,puVar5);
      *puVar5 = uVar4;
    }
    puVar2 = puVar5;
  }
  return puVar3;
}
// 函数: void function_4e3060(int64_t param_1)
void function_4e3060(int64_t param_1)
{
  if ((*(char *)(param_1 + 0x20) == '\0') && (*(int64_t *)(param_1 + 8) != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// 函数: void function_4e30b0(int64_t *param_1)
void function_4e30b0(int64_t *param_1)
{
  if (((char)param_1[3] == '\0') && (*param_1 != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// 函数: void function_4e4a10(void)
void function_4e4a10(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// 函数: void function_4e5780(int64_t param_1)
void function_4e5780(int64_t param_1)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uVar3 = *(uint64_t *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(uint64_t **)(lVar1 + uVar4 * 8);
      if (puVar2 != (uint64_t *)0x0) {
        *puVar2 = &system_state_ptr;
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(int64_t *)(param_1 + 8) != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// 函数: void function_4e57a0(uint64_t *param_1)
void function_4e57a0(uint64_t *param_1)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  puVar2 = (uint64_t *)param_1[1];
  for (puVar4 = (uint64_t *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0x16) {
    puVar4[0xb] = &system_state_ptr;
    *puVar4 = &system_state_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((int64_t)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        SystemFunction_00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
// 函数: void function_4e57c0(uint64_t *param_1)
void function_4e57c0(uint64_t *param_1)
{
  param_1[0xb] = &system_state_ptr;
  *param_1 = &system_state_ptr;
  return;
}
// 函数: void function_4e5800(int64_t param_1)
void function_4e5800(int64_t param_1)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uVar3 = *(uint64_t *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(uint64_t **)(lVar1 + uVar4 * 8);
      if (puVar2 != (uint64_t *)0x0) {
        *puVar2 = &system_state_ptr;
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(int64_t *)(param_1 + 8) != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
uint64_t function_4e5820(int64_t *param_1,int64_t param_2)
{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  byte *pbVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int iVar8;
  int64_t lVar9;
  uint uVar10;
  uint64_t uVar11;
  lVar7 = param_1[1] - *param_1;
  uVar6 = 0;
  lVar4 = lVar7 >> 0x3f;
  lVar7 = lVar7 / 0x68 + lVar4;
  if (lVar7 != lVar4) {
    iVar2 = *(int *)(param_2 + 0x10);
    uVar11 = uVar6;
    do {
      lVar9 = *(int64_t *)(uVar6 * 0x68 + 0x18 + *param_1);
      iVar3 = *(int *)(lVar9 + 0x10);
      iVar8 = iVar2;
      if (iVar3 == iVar2) {
        if (iVar3 != 0) {
          pbVar5 = *(byte **)(lVar9 + 8);
          lVar9 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar5;
          do {
            pbVar1 = pbVar5 + lVar9;
            iVar8 = (uint)*pbVar5 - (uint)*pbVar1;
            if (iVar8 != 0) break;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar1 != 0);
        }
LAB_1804e589f:
        if (iVar8 == 0) {
          return uVar11 & 0xffff;
        }
      }
      else if (iVar3 == 0) goto LAB_1804e589f;
      uVar10 = (int)uVar11 + 1;
      uVar11 = (uint64_t)uVar10;
      uVar6 = (uint64_t)(int)uVar10;
    } while (uVar6 < (uint64_t)(lVar7 - lVar4));
  }
  return 0xffffffff;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_4e58d0(int64_t *param_1,short param_2,short param_3,float param_4)
{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  float *pfVar6;
  float *pfVar7;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  int32_t local_var_bc;
  int64_t lStack_b8;
  int64_t *plStack_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  int32_t local_var_4c;
  uint64_t local_var_48;
  local_var_48 = 0xfffffffffffffffe;
  pfVar6 = (float *)((int64_t)param_2 * 0x68 + *param_1);
  pfVar7 = (float *)((int64_t)param_3 * 0x68 + *param_1);
  plStack_b0 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x58,8,3);
  *plStack_b0 = (int64_t)&system_state_ptr;
  plStack_b0[1] = 0;
  *(int32_t *)(plStack_b0 + 2) = 0;
  *plStack_b0 = (int64_t)&memory_allocator_3480_ptr;
  plStack_b0[1] = (int64_t)(plStack_b0 + 3);
  *(int32_t *)(plStack_b0 + 2) = 0;
  *(int8_t *)(plStack_b0 + 3) = 0;
  lStack_b8 = 0;
  function_4e6c90(&fStack_c8,pfVar6);
  plVar4 = plStack_b0;
  (**(code **)(*plStack_b0 + 0x10))(plStack_b0,&memory_allocator_3408_ptr);
  function_43be00(plVar4,(int64_t)param_2 & 0xffffffff);
  uVar1 = *(uint *)(plVar4 + 2) + 1;
  if (uVar1 < 0x3f) {
    *(int16_t *)((uint64_t)*(uint *)(plVar4 + 2) + plVar4[1]) = 0x5f;
    *(uint *)(plVar4 + 2) = uVar1;
  }
  function_43be00(plVar4,(int)param_3);
  uVar1 = *(uint *)(plVar4 + 2) + 1;
  if (uVar1 < 0x3f) {
    *(int16_t *)((uint64_t)*(uint *)(plVar4 + 2) + plVar4[1]) = 0x5f;
    *(uint *)(plVar4 + 2) = uVar1;
  }
  function_4e5ec0(plVar4,&processed_var_8448_ptr,(double)param_4);
  fStack_c8 = (*pfVar7 - *pfVar6) * param_4 + *pfVar6;
  fStack_c4 = (pfVar7[1] - pfVar6[1]) * param_4 + pfVar6[1];
  fStack_c0 = (pfVar7[2] - pfVar6[2]) * param_4 + pfVar6[2];
  local_var_bc = local_var_4c;
  fStack_a8 = (pfVar7[8] - pfVar6[8]) * param_4 + pfVar6[8];
  fStack_a4 = (pfVar7[9] - pfVar6[9]) * param_4 + pfVar6[9];
  fStack_a0 = (pfVar7[10] - pfVar6[10]) * param_4 + pfVar6[10];
  fStack_9c = (pfVar7[0xb] - pfVar6[0xb]) * param_4 + pfVar6[0xb];
  fStack_98 = (pfVar7[0xc] - pfVar6[0xc]) * param_4 + pfVar6[0xc];
  fStack_94 = (pfVar7[0xd] - pfVar6[0xd]) * param_4 + pfVar6[0xd];
  fStack_90 = (pfVar7[0xe] - pfVar6[0xe]) * param_4 + pfVar6[0xe];
  fStack_8c = (pfVar7[0xf] - pfVar6[0xf]) * param_4 + pfVar6[0xf];
  fStack_88 = (pfVar7[0x10] - pfVar6[0x10]) * param_4 + pfVar6[0x10];
  fStack_84 = (pfVar7[0x11] - pfVar6[0x11]) * param_4 + pfVar6[0x11];
  fStack_80 = (pfVar7[0x12] - pfVar6[0x12]) * param_4 + pfVar6[0x12];
  fStack_7c = (pfVar7[0x13] - pfVar6[0x13]) * param_4 + pfVar6[0x13];
  fStack_78 = (pfVar7[0x14] - pfVar6[0x14]) * param_4 + pfVar6[0x14];
  fStack_74 = (pfVar7[0x15] - pfVar6[0x15]) * param_4 + pfVar6[0x15];
  fStack_70 = (pfVar7[0x16] - pfVar6[0x16]) * param_4 + pfVar6[0x16];
  fStack_6c = (pfVar7[0x17] - pfVar6[0x17]) * param_4 + pfVar6[0x17];
  fStack_68 = (pfVar7[0x18] - pfVar6[0x18]) * param_4 + pfVar6[0x18];
  lVar2 = param_1[1];
  lVar3 = *param_1;
  function_4e6120(param_1,&fStack_c8);
  plVar4 = plStack_b0;
  if (plStack_b0 != (int64_t *)0x0) {
    lVar5 = __RTCastToVoid(plStack_b0);
    (**(code **)*plVar4)(plVar4,0);
    if (lVar5 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar5);
    }
  }
  plStack_b0 = (int64_t *)0x0;
  if (lStack_b8 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return (lVar2 - lVar3) / 0x68 & 0xffff;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4e5ca0(uint64_t param_1,int64_t param_2)
void function_4e5ca0(uint64_t param_1,int64_t param_2)
{
  void **ppuVar1;
  int64_t lVar2;
  void *puVar3;
  int8_t stack_array_148 [32];
  void **pplocal_var_128;
  void **pplocal_var_120;
  void *aplocal_var_118 [6];
  void *plocal_var_e8;
  void *plocal_var_e0;
  int32_t local_var_d8;
  uint8_t stack_array_d0 [64];
  void *plocal_var_90;
  void *plocal_var_88;
  int32_t local_var_80;
  uint8_t stack_array_78 [64];
  uint64_t local_var_38;
  aplocal_var_118[4] = (void *)0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_148;
  aplocal_var_118[0] = &rendering_buffer_2328_ptr;
  aplocal_var_118[1] = &rendering_buffer_2336_ptr;
  aplocal_var_118[2] = &system_data_8120;
  aplocal_var_118[3] = &system_data_89e8;
  lVar2 = 0;
  do {
    plocal_var_e8 = &memory_allocator_3480_ptr;
    plocal_var_e0 = stack_array_d0;
    local_var_d8 = 0;
    stack_array_d0[0] = 0;
    pplocal_var_120 = &plocal_var_90;
    plocal_var_90 = &memory_allocator_3480_ptr;
    plocal_var_88 = stack_array_78;
    local_var_80 = 0;
    stack_array_78[0] = 0;
    DataStructureManager0(&plocal_var_e8,*(uint64_t *)((int64_t)aplocal_var_118 + lVar2));
    (**(code **)(plocal_var_90 + 0x10))
              (&plocal_var_90,*(uint64_t *)((int64_t)aplocal_var_118 + lVar2 + 0x10));
    ppuVar1 = *(void ***)(param_2 + 8);
    if (ppuVar1 < *(void ***)(param_2 + 0x10)) {
      *(void ***)(param_2 + 8) = ppuVar1 + 0x16;
      *ppuVar1 = &system_state_ptr;
      ppuVar1[1] = (void *)0x0;
      *(int32_t *)(ppuVar1 + 2) = 0;
      *ppuVar1 = &memory_allocator_3480_ptr;
      ppuVar1[1] = (void *)(ppuVar1 + 3);
      *(int32_t *)(ppuVar1 + 2) = 0;
      *(int8_t *)(ppuVar1 + 3) = 0;
      *(int32_t *)(ppuVar1 + 2) = local_var_d8;
      puVar3 = &system_buffer_ptr;
      if (plocal_var_e0 != (void *)0x0) {
        puVar3 = plocal_var_e0;
      }
      pplocal_var_128 = ppuVar1;
      pplocal_var_120 = ppuVar1;
      strcpy_s(ppuVar1[1],0x40,puVar3);
      pplocal_var_128 = ppuVar1 + 0xb;
      *pplocal_var_128 = &system_state_ptr;
      ppuVar1[0xc] = (void *)0x0;
      *(int32_t *)(ppuVar1 + 0xd) = 0;
      *pplocal_var_128 = &memory_allocator_3480_ptr;
      ppuVar1[0xc] = (void *)(ppuVar1 + 0xe);
      *(int32_t *)(ppuVar1 + 0xd) = 0;
      *(int8_t *)(ppuVar1 + 0xe) = 0;
      *(int32_t *)(ppuVar1 + 0xd) = local_var_80;
      puVar3 = &system_buffer_ptr;
      if (plocal_var_88 != (void *)0x0) {
        puVar3 = plocal_var_88;
      }
      strcpy_s(ppuVar1[0xc],0x40,puVar3);
    }
    else {
      function_4e6610(param_2,&plocal_var_e8);
    }
    plocal_var_90 = &system_state_ptr;
    pplocal_var_128 = &plocal_var_e8;
    plocal_var_e8 = &system_state_ptr;
    lVar2 = lVar2 + 8;
  } while (lVar2 < 0x10);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_148);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4e5ec0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_4e5ec0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int iVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t stack_special_x_18;
  uint64_t stack_special_x_20;
  int8_t stack_array_98 [32];
  uint64_t local_var_78;
  uint64_t *plocal_var_70;
  char acStack_68 [64];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  stack_special_x_18 = param_3;
  stack_special_x_20 = param_4;
  puVar3 = (uint64_t *)SystemFunction_00018004b9a0();
  local_var_78 = 0;
  plocal_var_70 = &stack_special_x_18;
  __stdio_common_vsprintf(*puVar3 | 1,acStack_68,0x40,param_2);
  lVar1 = -1;
  do {
    lVar4 = lVar1;
    lVar1 = lVar4 + 1;
  } while (acStack_68[lVar4 + 1] != '\0');
  iVar2 = (int)(lVar4 + 1);
  if ((0 < iVar2) && (*(uint *)(param_1 + 0x10) + iVar2 < 0x3f)) {
// WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_1 + 0x10) + *(int64_t *)(param_1 + 8),acStack_68,
           (int64_t)((int)lVar4 + 2));
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_98);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4e5f80(int64_t *param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
void function_4e5f80(int64_t *param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  uVar8 = 0xfffffffffffffffe;
  lVar2 = param_1[1];
  lVar5 = *param_1;
  lVar3 = 0;
  uVar1 = *(uint *)(param_1 + 3);
  lVar7 = (lVar2 - lVar5) / 0x68;
  if (lVar7 != 0) {
    lVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 0x68,uVar1 & 0xff,param_4,0xfffffffffffffffe,0,0,0,
                          uVar1);
  }
  lVar7 = lVar7 * 0x68 + lVar3;
  if (lVar5 != lVar2) {
    puVar6 = (uint64_t *)(lVar3 + 0x10);
    lVar9 = lVar3;
    lVar10 = lVar7;
    lVar11 = lVar7;
    do {
      puVar4 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x58,8,3,uVar8,lVar9,lVar10,lVar11);
      *puVar4 = &system_state_ptr;
      puVar4[1] = 0;
      *(int32_t *)(puVar4 + 2) = 0;
      *puVar4 = &memory_allocator_3480_ptr;
      puVar4[1] = puVar4 + 3;
      *(int32_t *)(puVar4 + 2) = 0;
      *(int8_t *)(puVar4 + 3) = 0;
      puVar6[1] = puVar4;
      *puVar6 = 0;
      function_4e6c90(puVar6 + -2,lVar5);
      lVar5 = lVar5 + 0x68;
      puVar6 = puVar6 + 0xd;
    } while (lVar5 != lVar2);
  }
  lVar2 = *param_1;
  *param_1 = lVar3;
  lVar5 = param_1[1];
  param_1[1] = lVar7;
  param_1[2] = lVar7;
  *(uint *)(param_1 + 3) = uVar1;
  for (lVar7 = lVar2; lVar7 != lVar5; lVar7 = lVar7 + 0x68) {
    function_4a6e40(lVar7);
  }
  if (lVar2 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar2);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4e6120(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
void function_4e6120(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lStackX_18;
  uVar4 = param_1[1];
  if (uVar4 < param_1[2]) {
    param_1[1] = uVar4 + 0x68;
    puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x58,8,3);
    *puVar1 = &system_state_ptr;
    puVar1[1] = 0;
    *(int32_t *)(puVar1 + 2) = 0;
    *puVar1 = &memory_allocator_3480_ptr;
    puVar1[1] = puVar1 + 3;
    *(int32_t *)(puVar1 + 2) = 0;
    *(int8_t *)(puVar1 + 3) = 0;
    *(uint64_t **)(uVar4 + 0x18) = puVar1;
    *(uint64_t *)(uVar4 + 0x10) = 0;
    function_4e6c90(uVar4,param_2);
    return;
  }
  uVar5 = *param_1;
  lStackX_18 = (int64_t)(uVar4 - uVar5) / 0x68;
  uVar2 = 0;
  if (lStackX_18 == 0) {
    lStackX_18 = 1;
  }
  else {
    lStackX_18 = lStackX_18 * 2;
    if (lStackX_18 == 0) goto LAB_1804e6230;
  }
  uVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lStackX_18 * 0x68,(char)param_1[3],param_4,0xfffffffffffffffe
                       );
  uVar4 = param_1[1];
  uVar5 = *param_1;
LAB_1804e6230:
  uVar3 = uVar2;
  if (uVar5 != uVar4) {
    lVar6 = uVar2 - uVar5;
    do {
      puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x58,8,3);
      *puVar1 = &system_state_ptr;
      puVar1[1] = 0;
      *(int32_t *)(puVar1 + 2) = 0;
      *puVar1 = &memory_allocator_3480_ptr;
      puVar1[1] = puVar1 + 3;
      *(int32_t *)(puVar1 + 2) = 0;
      *(int8_t *)(puVar1 + 3) = 0;
      *(uint64_t **)(lVar6 + 0x18 + uVar5) = puVar1;
      *(uint64_t *)(lVar6 + 0x10 + uVar5) = 0;
      function_4e6c90(uVar3,uVar5);
      uVar3 = uVar3 + 0x68;
      uVar5 = uVar5 + 0x68;
    } while (uVar5 != uVar4);
  }
  function_4e6c00(uVar3,param_2);
  uVar4 = param_1[1];
  uVar5 = *param_1;
  if (uVar5 != uVar4) {
    do {
      function_4a6e40(uVar5);
      uVar5 = uVar5 + 0x68;
    } while (uVar5 != uVar4);
    uVar5 = *param_1;
  }
  if (uVar5 == 0) {
    *param_1 = uVar2;
    param_1[1] = uVar3 + 0x68;
    param_1[2] = lStackX_18 * 0x68 + uVar2;
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(uVar5);
}
// 函数: void function_4e6330(uint64_t *param_1)
void function_4e6330(uint64_t *param_1)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  puVar2 = (uint64_t *)param_1[1];
  for (puVar4 = (uint64_t *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0x16) {
    puVar4[0xb] = &system_state_ptr;
    *puVar4 = &system_state_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((int64_t)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        SystemFunction_00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
// 函数: void function_4e63a0(int64_t param_1)
void function_4e63a0(int64_t param_1)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uVar3 = *(uint64_t *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(uint64_t **)(lVar1 + uVar4 * 8);
      if (puVar2 != (uint64_t *)0x0) {
        *puVar2 = &system_state_ptr;
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(int64_t *)(param_1 + 8) != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4e6610(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void function_4e6610(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int8_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  void *puVar5;
  void *puVar6;
  int8_t *puVar7;
  uint64_t *pstack_special_x_18;
  int64_t lStackX_20;
  int8_t *puVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  uVar10 = 0xfffffffffffffffe;
  puVar7 = (int8_t *)param_1[1];
  puVar1 = (int8_t *)*param_1;
  lStackX_20 = ((int64_t)puVar7 - (int64_t)puVar1) / 0xb0;
  if (lStackX_20 == 0) {
    lStackX_20 = 1;
  }
  else {
    lStackX_20 = lStackX_20 * 2;
    if (lStackX_20 == 0) {
      pstack_special_x_18 = (uint64_t *)0x0;
      goto LAB_1804e66bf;
    }
  }
  pstack_special_x_18 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lStackX_20 * 0xb0);
  puVar7 = (int8_t *)param_1[1];
  puVar1 = (int8_t *)*param_1;
LAB_1804e66bf:
  puVar3 = pstack_special_x_18;
  if (puVar1 != puVar7) {
    puVar4 = pstack_special_x_18 + 0xe;
    puVar8 = puVar1 + (-8 - (int64_t)pstack_special_x_18);
    do {
      *puVar3 = &system_state_ptr;
      puVar4[-0xd] = 0;
      *(int32_t *)(puVar4 + -0xc) = 0;
      *puVar3 = &memory_allocator_3480_ptr;
      puVar4[-0xd] = puVar4 + -0xb;
      *(int32_t *)(puVar4 + -0xc) = 0;
      *(int8_t *)(puVar4 + -0xb) = 0;
      *(int32_t *)(puVar4 + -0xc) =
           *(int32_t *)
            ((int64_t)puVar4 + (int64_t)(puVar1 + (-0x68 - (int64_t)pstack_special_x_18) + 8));
      puVar6 = *(void **)
                ((int64_t)puVar4 + (int64_t)(puVar1 + (-0x68 - (int64_t)pstack_special_x_18)));
      puVar5 = &system_buffer_ptr;
      if (puVar6 != (void *)0x0) {
        puVar5 = puVar6;
      }
      puVar9 = puVar3;
      strcpy_s(puVar4[-0xd],0x40,puVar5,param_4,puVar8,puVar3,puVar3,uVar10);
      puVar2 = puVar4 + -3;
      *puVar2 = &system_state_ptr;
      puVar4[-2] = 0;
      *(int32_t *)(puVar4 + -1) = 0;
      *puVar2 = &memory_allocator_3480_ptr;
      puVar4[-2] = puVar4;
      *(int32_t *)(puVar4 + -1) = 0;
      *(int8_t *)puVar4 = 0;
      *(int32_t *)(puVar4 + -1) =
           *(int32_t *)((int64_t)puVar4 + (int64_t)(puVar1 + (-8 - (int64_t)pstack_special_x_18)));
      puVar6 = &system_buffer_ptr;
      if (*(void **)((int64_t)puVar4 + (int64_t)(puVar1 + (-0x10 - (int64_t)pstack_special_x_18)))
          != (void *)0x0) {
        puVar6 = *(void **)
                  ((int64_t)puVar4 + (int64_t)(puVar1 + (-0x10 - (int64_t)pstack_special_x_18)));
      }
      strcpy_s(puVar4,0x40,puVar6,param_4,puVar8,puVar2,puVar9);
      puVar3 = puVar3 + 0x16;
      puVar4 = puVar4 + 0x16;
    } while ((int8_t *)((int64_t)puVar4 + (int64_t)(puVar1 + (-0x70 - (int64_t)pstack_special_x_18)))
             != puVar7);
  }
  DataDeserializer0(puVar3,param_2);
  DataDeserializer0(puVar3 + 0xb,param_2 + 0x58);
  puVar4 = (uint64_t *)param_1[1];
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != puVar4) {
    do {
      puVar2[0xb] = &system_state_ptr;
      *puVar2 = &system_state_ptr;
      puVar2 = puVar2 + 0x16;
    } while (puVar2 != puVar4);
    puVar2 = (uint64_t *)*param_1;
  }
  if (puVar2 == (uint64_t *)0x0) {
    *param_1 = pstack_special_x_18;
    param_1[1] = puVar3 + 0x16;
    param_1[2] = pstack_special_x_18 + lStackX_20 * 0x16;
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}