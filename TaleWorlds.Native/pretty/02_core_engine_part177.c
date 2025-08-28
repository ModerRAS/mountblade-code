/* 函数别名定义: RenderingShaderProcessor */
#define RenderingShaderProcessor RenderingShaderProcessor
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part177.c - 15 个函数
// 函数: void GenericFunction_18016060f(float param_1,int64_t param_2)
void GenericFunction_18016060f(float param_1,int64_t param_2)
{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  char in_AL;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t unaff_RBX;
  int64_t in_R10;
  int64_t in_R11;
  bool bVar6;
  do {
    uVar2 = *(uint *)(in_R11 + in_R10 * 4);
    uVar4 = (uint64_t)uVar2;
    lVar5 = 0;
    iVar3 = *(int *)(in_R11 + 0x18 + in_R10 * 4);
    do {
      if (uVar2 == *(uint *)(&processed_var_7568_ptr + lVar5 * 4)) goto LAB_18016064a;
      lVar5 = lVar5 + 1;
    } while (lVar5 < 3);
    lVar5 = -1;
LAB_18016064a:
    if (iVar3 == 0) {
      if (lVar5 < 0) {
        if (in_AL != '\0') {
LAB_180160689:
          if ((*(char *)(param_2 + 0x18 + uVar4 * 0x18) == '\0') &&
             ((pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18),
              param_1 < *pfVar1 || param_1 == *pfVar1 ||
              ((*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 1) != 0)))) goto LAB_180160797;
        }
        goto LAB_1801606a6;
      }
      if (in_AL == '\0') goto LAB_1801606a6;
      if ((*(char *)(param_2 + 0x18 + uVar4 * 0x18) != '\0') ||
         ((pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18), *pfVar1 <= param_1 && param_1 != *pfVar1
          && ((*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 1) == 0)))) {
        uVar4 = (uint64_t)*(uint *)(&processed_var_7584_ptr + lVar5 * 4);
        goto LAB_180160689;
      }
LAB_180160797:
      in_AL = '\x01';
    }
    else {
      if (iVar3 == 1) {
        if ((in_AL != '\0') && (*(char *)(param_2 + 0x18 + uVar4 * 0x18) == '\0')) {
          pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18);
          if ((param_1 < *pfVar1 || param_1 == *pfVar1) &&
             (pfVar1 = (float *)(param_2 + 0xc + uVar4 * 0x18),
             *pfVar1 <= param_1 && param_1 != *pfVar1)) goto LAB_180160797;
LAB_1801606f2:
          bVar6 = (*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 3) == 3;
LAB_180160791:
          if (bVar6) goto LAB_180160797;
        }
      }
      else if (iVar3 == 2) {
        if ((in_AL != '\0') && (*(char *)(param_2 + 0x18 + uVar4 * 0x18) == '\0')) {
          pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18);
          if (param_1 < *pfVar1 || param_1 == *pfVar1) goto LAB_1801606f2;
          pfVar1 = (float *)(param_2 + 0xc + uVar4 * 0x18);
          if (param_1 < *pfVar1 || param_1 == *pfVar1) goto LAB_180160797;
          bVar6 = (*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 3) == 3;
          goto LAB_180160791;
        }
      }
      else {
        if (iVar3 != 3) goto LAB_1801606a8;
        if ((in_AL != '\0') &&
           ((*(char *)(param_2 + 0x18 + uVar4 * 0x18) != '\0' ||
            ((pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18),
             *pfVar1 <= param_1 && param_1 != *pfVar1 &&
             ((*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 1) == 0)))))) {
          if ((lVar5 < 0) ||
             (uVar4 = (uint64_t)*(uint *)(&processed_var_7584_ptr + lVar5 * 4),
             *(char *)(param_2 + 0x18 + uVar4 * 0x18) != '\0')) goto LAB_180160797;
          pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18);
          if (*pfVar1 <= param_1 && param_1 != *pfVar1) {
            bVar6 = (*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 1) == 0;
            goto LAB_180160791;
          }
        }
      }
LAB_1801606a6:
      in_AL = '\0';
    }
LAB_1801606a8:
    in_R10 = in_R10 + 1;
    if (unaff_RBX <= in_R10) {
      return;
    }
  } while( true );
}
// 函数: void GenericFunction_1801606b9(void)
void GenericFunction_1801606b9(void)
{
  return;
}
// 函数: void GenericFunction_1801606bb(float param_1,int64_t param_2,uint64_t param_3)
void GenericFunction_1801606bb(float param_1,int64_t param_2,uint64_t param_3)
{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  char in_AL;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int64_t in_R10;
  int64_t in_R11;
  bool bVar6;
code_r0x0001801606bb:
  if (in_AL == '\0') goto LAB_1801606a6;
LAB_180160689:
  if (*(char *)(param_2 + 0x18 + param_3 * 0x18) == '\0') {
    pfVar1 = (float *)(param_2 + 4 + param_3 * 0x18);
    if (param_1 < *pfVar1 || param_1 == *pfVar1) goto LAB_180160797;
    if ((*(byte *)(param_2 + 0x14 + param_3 * 0x18) & 1) != 0) goto LAB_180160797;
  }
LAB_1801606a6:
  in_AL = '\0';
LAB_1801606a8:
  in_R10 = in_R10 + 1;
  if (unaff_RBX <= in_R10) {
    return;
  }
  uVar2 = *(uint *)(in_R11 + in_R10 * 4);
  param_3 = (uint64_t)uVar2;
  lVar5 = 0;
  iVar3 = *(int *)(in_R11 + 0x18 + in_R10 * 4);
  do {
    if (uVar2 == *(uint *)(unaff_RDI + 0x98d770 + lVar5 * 4)) goto LAB_18016064a;
    lVar5 = lVar5 + 1;
  } while (lVar5 < 3);
  lVar5 = -1;
LAB_18016064a:
  if (iVar3 == 0) {
    if (lVar5 < 0) goto code_r0x0001801606bb;
    if (in_AL != '\0') {
      if ((*(char *)(param_2 + 0x18 + param_3 * 0x18) == '\0') &&
         ((pfVar1 = (float *)(param_2 + 4 + param_3 * 0x18), param_1 < *pfVar1 || param_1 == *pfVar1
          || ((*(byte *)(param_2 + 0x14 + param_3 * 0x18) & 1) != 0)))) goto LAB_180160797;
      param_3 = (uint64_t)*(uint *)(unaff_RDI + 0x98d780 + lVar5 * 4);
      goto LAB_180160689;
    }
  }
  else if (iVar3 == 1) {
    if ((in_AL != '\0') && (*(char *)(param_2 + 0x18 + param_3 * 0x18) == '\0')) {
      pfVar1 = (float *)(param_2 + 4 + param_3 * 0x18);
      if ((param_1 < *pfVar1 || param_1 == *pfVar1) &&
         (pfVar1 = (float *)(param_2 + 0xc + param_3 * 0x18),
         *pfVar1 <= param_1 && param_1 != *pfVar1)) goto LAB_180160797;
LAB_1801606f2:
      bVar6 = (*(byte *)(param_2 + 0x14 + param_3 * 0x18) & 3) == 3;
      goto LAB_180160791;
    }
  }
  else {
    if (iVar3 != 2) goto LAB_180160731;
    if ((in_AL != '\0') && (*(char *)(param_2 + 0x18 + param_3 * 0x18) == '\0')) {
      pfVar1 = (float *)(param_2 + 4 + param_3 * 0x18);
      if (param_1 < *pfVar1 || param_1 == *pfVar1) goto LAB_1801606f2;
      pfVar1 = (float *)(param_2 + 0xc + param_3 * 0x18);
      if (param_1 < *pfVar1 || param_1 == *pfVar1) goto LAB_180160797;
      bVar6 = (*(byte *)(param_2 + 0x14 + param_3 * 0x18) & 3) == 3;
      goto LAB_180160791;
    }
  }
  goto LAB_1801606a6;
LAB_180160731:
  if (iVar3 == 3) {
    if ((in_AL == '\0') ||
       ((*(char *)(param_2 + 0x18 + param_3 * 0x18) == '\0' &&
        ((pfVar1 = (float *)(param_2 + 4 + param_3 * 0x18), param_1 < *pfVar1 || param_1 == *pfVar1
         || ((*(byte *)(param_2 + 0x14 + param_3 * 0x18) & 1) != 0)))))) goto LAB_1801606a6;
    if ((-1 < lVar5) &&
       (uVar4 = (uint64_t)*(uint *)(unaff_RDI + 0x98d780 + lVar5 * 4),
       *(char *)(param_2 + 0x18 + uVar4 * 0x18) == '\0')) {
      pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18);
      if (param_1 < *pfVar1 || param_1 == *pfVar1) goto LAB_1801606a6;
      bVar6 = (*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 1) == 0;
LAB_180160791:
      if (!bVar6) goto LAB_1801606a6;
    }
LAB_180160797:
    in_AL = '\x01';
  }
  goto LAB_1801606a8;
}
int64_t GenericFunction_1801607a0(int64_t param_1,int32_t *param_2)
{
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x20) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x24) = 0x40000000;
  *(int32_t *)(param_1 + 0x2c) = *param_2;
  *(uint64_t *)(param_1 + 0x10) = 1;
  *(void **)(param_1 + 8) = &system_data_0000;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x28) = 0;
  return param_1;
}
int64_t GenericFunction_180160800(int64_t param_1,int32_t *param_2)
{
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x20) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x24) = 0x40000000;
  *(int32_t *)(param_1 + 0x2c) = *param_2;
  *(uint64_t *)(param_1 + 0x10) = 1;
  *(void **)(param_1 + 8) = &system_data_0000;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x28) = 0;
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
UtilitiesSystem_ConfigManager(int64_t param_1,uint64_t *param_2,uint64_t param_3,int *param_4,uint64_t param_5
             )
{
  int64_t lVar1;
  uint64_t uVar2;
  int *piVar3;
  uint64_t uVar4;
  uVar2 = param_5 % (uint64_t)*(uint *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  piVar3 = *(int **)(lVar1 + uVar2 * 8);
  if (piVar3 != (int *)0x0) {
    do {
      if (*param_4 == *piVar3) {
        *param_2 = piVar3;
        param_2[1] = lVar1 + uVar2 * 8;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
      piVar3 = *(int **)(piVar3 + 2);
    } while (piVar3 != (int *)0x0);
  }
  RenderingShaderProcessor0(param_1 + 0x20,&param_5,(uint64_t)*(uint *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),1);
  piVar3 = (int *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,*(int8_t *)(param_1 + 0x2c));
  *piVar3 = *param_4;
  piVar3[1] = 0;
  piVar3[2] = 0;
  piVar3[3] = 0;
  if ((char)param_5 != '\0') {
    uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)param_5._4_4_ * 8 + 8,8,
                          *(int8_t *)(param_1 + 0x2c));
// WARNING: Subroutine does not return
    memset(uVar4,0,(uint64_t)param_5._4_4_ * 8);
  }
  *(uint64_t *)(piVar3 + 2) = *(uint64_t *)(*(int64_t *)(param_1 + 8) + uVar2 * 8);
  *(int **)(*(int64_t *)(param_1 + 8) + uVar2 * 8) = piVar3;
  lVar1 = *(int64_t *)(param_1 + 8);
  *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
  *param_2 = piVar3;
  param_2[1] = lVar1 + uVar2 * 8;
  *(int8_t *)(param_2 + 2) = 1;
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1801608ba(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void GenericFunction_1801608ba(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  int32_t *unaff_RBX;
  int64_t unaff_RDI;
  int64_t unaff_R13;
  uint64_t *unaff_R15;
  char cStack0000000000000080;
  uint local_buffer_84;
  RenderingShaderProcessor0(param_1,&local_buffer_00000080,param_3,param_4,1);
  puVar2 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,*(int8_t *)(unaff_RDI + 0x2c));
  *puVar2 = *unaff_RBX;
  puVar2[1] = 0;
  *(uint64_t *)(puVar2 + 2) = 0;
  if (cStack0000000000000080 != '\0') {
    uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)local_buffer_84 * 8 + 8,8,
                          *(int8_t *)(unaff_RDI + 0x2c));
// WARNING: Subroutine does not return
    memset(uVar3,0,(uint64_t)local_buffer_84 * 8);
  }
  *(uint64_t *)(puVar2 + 2) = *(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(int32_t **)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8) = puVar2;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = puVar2;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}
// 函数: void GenericFunction_1801609be(uint64_t param_1,uint64_t param_2)
void GenericFunction_1801609be(uint64_t param_1,uint64_t param_2)
{
  uint64_t in_RAX;
  uint64_t *unaff_R15;
  *unaff_R15 = in_RAX;
  unaff_R15[1] = param_2;
  *(int8_t *)(unaff_R15 + 2) = 0;
  return;
}
// 函数: void GenericFunction_1801609da(uint64_t param_1)
void GenericFunction_1801609da(uint64_t param_1)
{
  int64_t lVar1;
  uint64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int64_t *unaff_R15;
  if ((1 < param_1) && (*(int64_t *)(unaff_RDI + 8) != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(*(int64_t *)(unaff_RDI + 8));
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(int64_t *)(unaff_RDI + 8) = unaff_R14;
  *(uint64_t *)(unaff_R12 + 8) = *(uint64_t *)(unaff_R14 + unaff_R13 * 8);
  *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}
// 函数: void GenericFunction_180160a00(void)
void GenericFunction_180160a00(void)
{
  int64_t lVar1;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t *unaff_R15;
  *(uint64_t *)(unaff_R12 + 8) = *(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}
// 函数: void GenericFunction_180160a50(int64_t param_1)
void GenericFunction_180160a50(int64_t param_1)
{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uVar6 = *(uint64_t *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        SystemFunction_00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
// 函数: void GenericFunction_180160a56(int64_t param_1)
void GenericFunction_180160a56(int64_t param_1)
{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uVar6 = *(uint64_t *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        SystemFunction_00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
// 函数: void GenericFunction_180160a80(void)
void GenericFunction_180160a80(void)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar4;
  int64_t unaff_R14;
  uint64_t unaff_R15;
  do {
    lVar3 = *(int64_t *)(unaff_R14 + unaff_RDI * 8);
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar3);
    }
    *(uint64_t *)(unaff_R14 + unaff_RDI * 8) = unaff_R15;
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_RSI);
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < *(uint64_t *)(unaff_RBP + 0x10)) &&
     (puVar2 = *(uint64_t **)(unaff_RBP + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
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
        SystemFunction_00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
// 函数: void GenericFunction_180160ab6(void)
void GenericFunction_180160ab6(void)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t uVar4;
  uint64_t unaff_R15;
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < unaff_RSI) && (puVar2 = *(uint64_t **)(unaff_RBP + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
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
        SystemFunction_00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
// 函数: void GenericFunction_180160ad4(void)
void GenericFunction_180160ad4(void)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  uint64_t uVar4;
  puVar2 = *(uint64_t **)(unaff_RBP + 8);
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
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
      SystemFunction_00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
GenericFunction_180160af0(int64_t param_1,uint64_t *param_2,uint64_t param_3,int *param_4,uint64_t param_5
             )
{
  int64_t lVar1;
  uint64_t uVar2;
  int *piVar3;
  uint64_t uVar4;
  uVar2 = param_5 % (uint64_t)*(uint *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  piVar3 = *(int **)(lVar1 + uVar2 * 8);
  if (piVar3 != (int *)0x0) {
    do {
      if (*param_4 == *piVar3) {
        *param_2 = piVar3;
        param_2[1] = lVar1 + uVar2 * 8;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
      piVar3 = *(int **)(piVar3 + 0x10);
    } while (piVar3 != (int *)0x0);
  }
  RenderingShaderProcessor0(param_1 + 0x20,&param_5,(uint64_t)*(uint *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),1);
  piVar3 = (int *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x48,*(int8_t *)(param_1 + 0x2c));
  *piVar3 = *param_4;
  piVar3[1] = 0;
  piVar3[2] = 0;
  piVar3[3] = 0;
  piVar3[4] = 0;
  piVar3[5] = 0;
  piVar3[6] = 0;
  piVar3[7] = 0;
  piVar3[8] = 0;
  piVar3[9] = 0;
  piVar3[10] = 0;
  piVar3[0xb] = 0;
  piVar3[0xc] = 0;
  piVar3[0xd] = 0;
  *(int8_t *)(piVar3 + 0xe) = 0;
  piVar3[0x10] = 0;
  piVar3[0x11] = 0;
  if ((char)param_5 != '\0') {
    uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)param_5._4_4_ * 8 + 8,8,
                          *(int8_t *)(param_1 + 0x2c));
// WARNING: Subroutine does not return
    memset(uVar4,0,(uint64_t)param_5._4_4_ * 8);
  }
  *(uint64_t *)(piVar3 + 0x10) = *(uint64_t *)(*(int64_t *)(param_1 + 8) + uVar2 * 8);
  *(int **)(*(int64_t *)(param_1 + 8) + uVar2 * 8) = piVar3;
  lVar1 = *(int64_t *)(param_1 + 8);
  *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
  *param_2 = piVar3;
  param_2[1] = lVar1 + uVar2 * 8;
  *(int8_t *)(param_2 + 2) = 1;
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180160b4a(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void GenericFunction_180160b4a(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  int32_t *unaff_RBX;
  int64_t unaff_RDI;
  int64_t unaff_R13;
  uint64_t *unaff_R15;
  char cStack0000000000000080;
  uint local_buffer_84;
  RenderingShaderProcessor0(param_1,&local_buffer_00000080,param_3,param_4,1);
  puVar2 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x48,*(int8_t *)(unaff_RDI + 0x2c));
  *puVar2 = *unaff_RBX;
  *(uint64_t *)(puVar2 + 1) = 0;
  *(uint64_t *)(puVar2 + 3) = 0;
  *(uint64_t *)(puVar2 + 5) = 0;
  *(uint64_t *)(puVar2 + 7) = 0;
  *(uint64_t *)(puVar2 + 9) = 0;
  *(uint64_t *)(puVar2 + 0xb) = 0;
  puVar2[0xd] = 0;
  *(int8_t *)(puVar2 + 0xe) = 0;
  *(uint64_t *)(puVar2 + 0x10) = 0;
  if (cStack0000000000000080 != '\0') {
    uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)local_buffer_84 * 8 + 8,8,
                          *(int8_t *)(unaff_RDI + 0x2c));
// WARNING: Subroutine does not return
    memset(uVar3,0,(uint64_t)local_buffer_84 * 8);
  }
  *(uint64_t *)(puVar2 + 0x10) = *(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(int32_t **)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8) = puVar2;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = puVar2;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}
// 函数: void GenericFunction_180160c6e(uint64_t param_1,uint64_t param_2)
void GenericFunction_180160c6e(uint64_t param_1,uint64_t param_2)
{
  uint64_t in_RAX;
  uint64_t *unaff_R15;
  *unaff_R15 = in_RAX;
  unaff_R15[1] = param_2;
  *(int8_t *)(unaff_R15 + 2) = 0;
  return;
}
// 函数: void GenericFunction_180160c8a(uint64_t param_1)
void GenericFunction_180160c8a(uint64_t param_1)
{
  int64_t lVar1;
  uint64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int64_t *unaff_R15;
  if ((1 < param_1) && (*(int64_t *)(unaff_RDI + 8) != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(*(int64_t *)(unaff_RDI + 8));
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(int64_t *)(unaff_RDI + 8) = unaff_R14;
  *(uint64_t *)(unaff_R12 + 0x40) = *(uint64_t *)(unaff_R14 + unaff_R13 * 8);
  *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}