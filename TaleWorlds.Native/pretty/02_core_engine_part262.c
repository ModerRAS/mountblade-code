#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part262.c - 7 个函数
// 函数: void function_229a10(int64_t *param_1,uint64_t param_2)
void function_229a10(int64_t *param_1,uint64_t param_2)
{
  void *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int32_t *puVar12;
  int32_t *puVar13;
  void *puVar14;
  uint64_t uVar15;
  int32_t *puVar16;
  int64_t lVar17;
  lVar17 = param_1[1];
  lVar11 = *param_1;
  uVar10 = (lVar17 - lVar11) / 0xe0;
  if (param_2 <= uVar10) {
    lVar9 = param_2 * 0xe0 + lVar11;
    if (lVar9 != lVar17) {
      do {
        *(void **)(lVar9 + 8) = &system_state_ptr;
        lVar9 = lVar9 + 0xe0;
      } while (lVar9 != lVar17);
      lVar11 = *param_1;
    }
    param_1[1] = param_2 * 0xe0 + lVar11;
    return;
  }
  param_2 = param_2 - uVar10;
  puVar13 = (int32_t *)param_1[1];
  if ((uint64_t)((param_1[2] - (int64_t)puVar13) / 0xe0) < param_2) {
    puVar16 = (int32_t *)*param_1;
    lVar17 = ((int64_t)puVar13 - (int64_t)puVar16) / 0xe0;
    uVar10 = lVar17 * 2;
    if (lVar17 == 0) {
      uVar10 = 1;
    }
    if (uVar10 < lVar17 + param_2) {
      uVar10 = lVar17 + param_2;
    }
    puVar6 = (int32_t *)0x0;
    if (uVar10 != 0) {
      puVar6 = (int32_t *)
               CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar10 * 0xe0,(char)param_1[3],0x4924924924924925,
                             0xfffffffffffffffe);
      puVar13 = (int32_t *)param_1[1];
      puVar16 = (int32_t *)*param_1;
    }
    puVar12 = puVar6;
    if (puVar16 != puVar13) {
      lVar17 = (int64_t)puVar16 - (int64_t)puVar6;
      puVar16 = puVar6 + 6;
      do {
        *puVar12 = *(int32_t *)(lVar17 + -0x18 + (int64_t)puVar16);
        *(void **)(puVar16 + -4) = &system_state_ptr;
        *(uint64_t *)(puVar16 + -2) = 0;
        *puVar16 = 0;
        *(void **)(puVar16 + -4) = &memory_allocator_3432_ptr;
        *(int32_t **)(puVar16 + -2) = puVar16 + 2;
        *puVar16 = 0;
        *(int8_t *)(puVar16 + 2) = 0;
        *puVar16 = *(int32_t *)(lVar17 + (int64_t)puVar16);
        puVar1 = *(void **)(lVar17 + -8 + (int64_t)puVar16);
        puVar14 = &system_buffer_ptr;
        if (puVar1 != (void *)0x0) {
          puVar14 = puVar1;
        }
        strcpy_s(*(uint64_t *)(puVar16 + -2),0x80,puVar14);
        puVar8 = (uint64_t *)(lVar17 + 0x88 + (int64_t)puVar16);
        uVar5 = puVar8[1];
        *(uint64_t *)(puVar16 + 0x22) = *puVar8;
        *(uint64_t *)(puVar16 + 0x24) = uVar5;
        puVar8 = (uint64_t *)(lVar17 + 0x98 + (int64_t)puVar16);
        uVar5 = puVar8[1];
        *(uint64_t *)(puVar16 + 0x26) = *puVar8;
        *(uint64_t *)(puVar16 + 0x28) = uVar5;
        puVar7 = (int32_t *)(lVar17 + 0xa8 + (int64_t)puVar16);
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        uVar4 = puVar7[3];
        puVar16[0x2a] = *puVar7;
        puVar16[0x2b] = uVar2;
        puVar16[0x2c] = uVar3;
        puVar16[0x2d] = uVar4;
        puVar8 = (uint64_t *)(lVar17 + 0xb8 + (int64_t)puVar16);
        uVar5 = puVar8[1];
        *(uint64_t *)(puVar16 + 0x2e) = *puVar8;
        *(uint64_t *)(puVar16 + 0x30) = uVar5;
        puVar12 = puVar12 + 0x38;
        puVar7 = (int32_t *)((int64_t)puVar16 + lVar17 + 200);
        puVar16 = puVar16 + 0x38;
      } while (puVar7 != puVar13);
    }
    if (param_2 != 0) {
      puVar8 = (uint64_t *)(puVar12 + 4);
      uVar15 = param_2;
      do {
        puVar8[-1] = &system_state_ptr;
        *puVar8 = 0;
        *(int32_t *)(puVar8 + 1) = 0;
        puVar8[-1] = &memory_allocator_3432_ptr;
        *puVar8 = puVar8 + 2;
        *(int32_t *)(puVar8 + 1) = 0;
        *(int8_t *)(puVar8 + 2) = 0;
        *(int32_t *)(puVar8 + -2) = 0xffffffff;
        puVar8[0x12] = 0x3f800000;
        puVar8[0x13] = 0;
        puVar8[0x14] = 0x3f80000000000000;
        puVar8[0x15] = 0;
        *(int32_t *)(puVar8 + 0x16) = 0;
        *(int32_t *)((int64_t)puVar8 + 0xb4) = 0;
        *(int32_t *)(puVar8 + 0x17) = 0x3f800000;
        *(int32_t *)((int64_t)puVar8 + 0xbc) = 0;
        puVar8[0x18] = 0;
        puVar8[0x19] = 0x3f80000000000000;
        puVar8 = puVar8 + 0x1c;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    lVar17 = param_1[1];
    lVar11 = *param_1;
    if (lVar11 != lVar17) {
      do {
        *(void **)(lVar11 + 8) = &system_state_ptr;
        lVar11 = lVar11 + 0xe0;
      } while (lVar11 != lVar17);
      lVar11 = *param_1;
    }
    if (lVar11 != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    *param_1 = (int64_t)puVar6;
    param_1[1] = (int64_t)(puVar12 + param_2 * 0x38);
    param_1[2] = (int64_t)(puVar6 + uVar10 * 0x38);
  }
  else {
    if (param_2 != 0) {
      puVar8 = (uint64_t *)(puVar13 + 4);
      uVar10 = param_2;
      do {
        puVar8[-1] = &system_state_ptr;
        *puVar8 = 0;
        *(int32_t *)(puVar8 + 1) = 0;
        puVar8[-1] = &memory_allocator_3432_ptr;
        *puVar8 = puVar8 + 2;
        *(int32_t *)(puVar8 + 1) = 0;
        *(int8_t *)(puVar8 + 2) = 0;
        *puVar13 = 0xffffffff;
        puVar8[0x12] = 0x3f800000;
        puVar8[0x13] = 0;
        puVar8[0x14] = 0x3f80000000000000;
        puVar8[0x15] = 0;
        puVar8[0x16] = 0;
        puVar8[0x17] = 0x3f800000;
        puVar8[0x18] = 0;
        puVar8[0x19] = 0x3f80000000000000;
        puVar13 = puVar13 + 0x38;
        puVar8 = puVar8 + 0x1c;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      puVar13 = (int32_t *)param_1[1];
    }
    param_1[1] = (int64_t)(puVar13 + param_2 * 0x38);
  }
  return;
}
// 函数: void function_229ab0(uint64_t *param_1)
void function_229ab0(uint64_t *param_1)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uVar5 = param_1[1];
  for (uVar4 = *param_1; uVar4 != uVar5; uVar4 = uVar4 + 0x150) {
    *(void **)(uVar4 + 0xa0) = &system_state_ptr;
    *(void **)(uVar4 + 8) = &system_state_ptr;
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
          SystemCore_DebugHandler();
          return;
        }
      }
      else {
        Function_2152bae1(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_229b30(int64_t *param_1,uint64_t param_2)
void function_229b30(int64_t *param_1,uint64_t param_2)
{
  uint64_t *puVar1;
  int32_t *puVar2;
  void *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  int8_t *puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int8_t *puVar12;
  int8_t *puVar13;
  int64_t lVar14;
  void *puVar15;
  uint64_t uVar16;
  int32_t *puVar17;
  lVar14 = param_1[1];
  lVar11 = *param_1;
  lVar9 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar14 - lVar11),8) + (lVar14 - lVar11);
  uVar10 = (lVar9 >> 8) - (lVar9 >> 0x3f);
  if (param_2 <= uVar10) {
    lVar9 = param_2 * 0x150 + lVar11;
    if (lVar9 != lVar14) {
      do {
        *(void **)(lVar9 + 0xa0) = &system_state_ptr;
        *(void **)(lVar9 + 8) = &system_state_ptr;
        lVar9 = lVar9 + 0x150;
      } while (lVar9 != lVar14);
      lVar11 = *param_1;
    }
    param_1[1] = param_2 * 0x150 + lVar11;
    return;
  }
  param_2 = param_2 - uVar10;
  lVar14 = param_1[1];
  lVar11 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(param_1[2] - lVar14),8) +
           (param_1[2] - lVar14);
  if ((uint64_t)((lVar11 >> 8) - (lVar11 >> 0x3f)) < param_2) {
    lVar11 = *param_1;
    lVar9 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar14 - lVar11),8) + (lVar14 - lVar11);
    lVar9 = (lVar9 >> 8) - (lVar9 >> 0x3f);
    uVar10 = lVar9 * 2;
    if (lVar9 == 0) {
      uVar10 = 1;
    }
    if (uVar10 < lVar9 + param_2) {
      uVar10 = lVar9 + param_2;
    }
    puVar8 = (int8_t *)0x0;
    if (uVar10 != 0) {
      puVar8 = (int8_t *)
               CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar10 * 0x150,(char)param_1[3],0xc30c30c30c30c30d,
                             0xfffffffffffffffe);
      lVar14 = param_1[1];
      lVar11 = *param_1;
    }
    uVar16 = param_2;
    puVar12 = puVar8;
    puVar13 = puVar8;
    if (lVar11 != lVar14) {
      lVar11 = lVar11 - (int64_t)puVar8;
      puVar17 = (int32_t *)(puVar8 + 0x18);
      do {
        *puVar12 = *(int8_t *)(lVar11 + -0x18 + (int64_t)puVar17);
        *(void **)(puVar17 + -4) = &system_state_ptr;
        *(uint64_t *)(puVar17 + -2) = 0;
        *puVar17 = 0;
        *(void **)(puVar17 + -4) = &memory_allocator_3432_ptr;
        *(int32_t **)(puVar17 + -2) = puVar17 + 2;
        *puVar17 = 0;
        *(int8_t *)(puVar17 + 2) = 0;
        *puVar17 = *(int32_t *)(lVar11 + (int64_t)puVar17);
        puVar3 = *(void **)(lVar11 + -8 + (int64_t)puVar17);
        puVar15 = &system_buffer_ptr;
        if (puVar3 != (void *)0x0) {
          puVar15 = puVar3;
        }
        strcpy_s(*(uint64_t *)(puVar17 + -2),0x80,puVar15);
        *(void **)(puVar17 + 0x22) = &system_state_ptr;
        *(uint64_t *)(puVar17 + 0x24) = 0;
        puVar17[0x26] = 0;
        *(void **)(puVar17 + 0x22) = &memory_allocator_3480_ptr;
        *(int32_t **)(puVar17 + 0x24) = puVar17 + 0x28;
        puVar17[0x26] = 0;
        *(int8_t *)(puVar17 + 0x28) = 0;
        puVar17[0x26] = *(int32_t *)(lVar11 + 0x98 + (int64_t)puVar17);
        puVar3 = *(void **)(lVar11 + 0x90 + (int64_t)puVar17);
        puVar15 = &system_buffer_ptr;
        if (puVar3 != (void *)0x0) {
          puVar15 = puVar3;
        }
        strcpy_s(*(uint64_t *)(puVar17 + 0x24),0x40,puVar15);
        *(int8_t *)(puVar17 + 0x38) = *(int8_t *)(lVar11 + 0xe0 + (int64_t)puVar17);
        puVar17[0x39] = *(int32_t *)(lVar11 + 0xe4 + (int64_t)puVar17);
        puVar17[0x3a] = *(int32_t *)(lVar11 + 0xe8 + (int64_t)puVar17);
        puVar1 = (uint64_t *)(lVar11 + 0xec + (int64_t)puVar17);
        uVar7 = puVar1[1];
        *(uint64_t *)(puVar17 + 0x3b) = *puVar1;
        *(uint64_t *)(puVar17 + 0x3d) = uVar7;
        puVar1 = (uint64_t *)(lVar11 + 0xfc + (int64_t)puVar17);
        uVar7 = puVar1[1];
        *(uint64_t *)(puVar17 + 0x3f) = *puVar1;
        *(uint64_t *)(puVar17 + 0x41) = uVar7;
        puVar17[0x43] = *(int32_t *)(lVar11 + 0x10c + (int64_t)puVar17);
        puVar2 = (int32_t *)(lVar11 + 0x110 + (int64_t)puVar17);
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        puVar17[0x44] = *puVar2;
        puVar17[0x45] = uVar4;
        puVar17[0x46] = uVar5;
        puVar17[0x47] = uVar6;
        puVar1 = (uint64_t *)(lVar11 + 0x120 + (int64_t)puVar17);
        uVar7 = puVar1[1];
        *(uint64_t *)(puVar17 + 0x48) = *puVar1;
        *(uint64_t *)(puVar17 + 0x4a) = uVar7;
        puVar17[0x4c] = *(int32_t *)(lVar11 + 0x130 + (int64_t)puVar17);
        puVar12 = puVar12 + 0x150;
        lVar9 = (int64_t)puVar17 + lVar11 + 0x138;
        puVar17 = puVar17 + 0x54;
        puVar13 = puVar12;
      } while (lVar9 != lVar14);
    }
    for (; uVar16 != 0; uVar16 = uVar16 - 1) {
      function_2295e0(puVar12);
      puVar12 = puVar12 + 0x150;
    }
    lVar14 = param_1[1];
    lVar11 = *param_1;
    if (lVar11 != lVar14) {
      do {
        *(void **)(lVar11 + 0xa0) = &system_state_ptr;
        *(void **)(lVar11 + 8) = &system_state_ptr;
        lVar11 = lVar11 + 0x150;
      } while (lVar11 != lVar14);
      lVar11 = *param_1;
    }
    if (lVar11 != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    *param_1 = (int64_t)puVar8;
    param_1[1] = (int64_t)(puVar13 + param_2 * 0x150);
    param_1[2] = (int64_t)(puVar8 + uVar10 * 0x150);
  }
  else {
    uVar10 = param_2;
    if (param_2 != 0) {
      do {
        function_2295e0(lVar14);
        lVar14 = lVar14 + 0x150;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      lVar14 = param_1[1];
    }
    param_1[1] = param_2 * 0x150 + lVar14;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_229be0(int64_t *param_1,uint64_t param_2)
void function_229be0(int64_t *param_1,uint64_t param_2)
{
  void *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int32_t *puVar11;
  int32_t *puVar12;
  void *puVar13;
  uint64_t uVar14;
  int32_t *puVar15;
  int64_t lVar16;
  puVar12 = (int32_t *)param_1[1];
  if ((uint64_t)((param_1[2] - (int64_t)puVar12) / 0xe0) < param_2) {
    puVar15 = (int32_t *)*param_1;
    lVar16 = ((int64_t)puVar12 - (int64_t)puVar15) / 0xe0;
    uVar9 = lVar16 * 2;
    if (lVar16 == 0) {
      uVar9 = 1;
    }
    if (uVar9 < lVar16 + param_2) {
      uVar9 = lVar16 + param_2;
    }
    puVar6 = (int32_t *)0x0;
    if (uVar9 != 0) {
      puVar6 = (int32_t *)
               CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar9 * 0xe0,(char)param_1[3],0x4924924924924925,
                             0xfffffffffffffffe);
      puVar12 = (int32_t *)param_1[1];
      puVar15 = (int32_t *)*param_1;
    }
    puVar11 = puVar6;
    if (puVar15 != puVar12) {
      lVar16 = (int64_t)puVar15 - (int64_t)puVar6;
      puVar15 = puVar6 + 6;
      do {
        *puVar11 = *(int32_t *)(lVar16 + -0x18 + (int64_t)puVar15);
        *(void **)(puVar15 + -4) = &system_state_ptr;
        *(uint64_t *)(puVar15 + -2) = 0;
        *puVar15 = 0;
        *(void **)(puVar15 + -4) = &memory_allocator_3432_ptr;
        *(int32_t **)(puVar15 + -2) = puVar15 + 2;
        *puVar15 = 0;
        *(int8_t *)(puVar15 + 2) = 0;
        *puVar15 = *(int32_t *)(lVar16 + (int64_t)puVar15);
        puVar1 = *(void **)(lVar16 + -8 + (int64_t)puVar15);
        puVar13 = &system_buffer_ptr;
        if (puVar1 != (void *)0x0) {
          puVar13 = puVar1;
        }
        strcpy_s(*(uint64_t *)(puVar15 + -2),0x80,puVar13);
        puVar8 = (uint64_t *)(lVar16 + 0x88 + (int64_t)puVar15);
        uVar5 = puVar8[1];
        *(uint64_t *)(puVar15 + 0x22) = *puVar8;
        *(uint64_t *)(puVar15 + 0x24) = uVar5;
        puVar8 = (uint64_t *)(lVar16 + 0x98 + (int64_t)puVar15);
        uVar5 = puVar8[1];
        *(uint64_t *)(puVar15 + 0x26) = *puVar8;
        *(uint64_t *)(puVar15 + 0x28) = uVar5;
        puVar7 = (int32_t *)(lVar16 + 0xa8 + (int64_t)puVar15);
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        uVar4 = puVar7[3];
        puVar15[0x2a] = *puVar7;
        puVar15[0x2b] = uVar2;
        puVar15[0x2c] = uVar3;
        puVar15[0x2d] = uVar4;
        puVar8 = (uint64_t *)(lVar16 + 0xb8 + (int64_t)puVar15);
        uVar5 = puVar8[1];
        *(uint64_t *)(puVar15 + 0x2e) = *puVar8;
        *(uint64_t *)(puVar15 + 0x30) = uVar5;
        puVar11 = puVar11 + 0x38;
        puVar7 = (int32_t *)((int64_t)puVar15 + lVar16 + 200);
        puVar15 = puVar15 + 0x38;
      } while (puVar7 != puVar12);
    }
    if (param_2 != 0) {
      puVar8 = (uint64_t *)(puVar11 + 4);
      uVar14 = param_2;
      do {
        puVar8[-1] = &system_state_ptr;
        *puVar8 = 0;
        *(int32_t *)(puVar8 + 1) = 0;
        puVar8[-1] = &memory_allocator_3432_ptr;
        *puVar8 = puVar8 + 2;
        *(int32_t *)(puVar8 + 1) = 0;
        *(int8_t *)(puVar8 + 2) = 0;
        *(int32_t *)(puVar8 + -2) = 0xffffffff;
        puVar8[0x12] = 0x3f800000;
        puVar8[0x13] = 0;
        puVar8[0x14] = 0x3f80000000000000;
        puVar8[0x15] = 0;
        *(int32_t *)(puVar8 + 0x16) = 0;
        *(int32_t *)((int64_t)puVar8 + 0xb4) = 0;
        *(int32_t *)(puVar8 + 0x17) = 0x3f800000;
        *(int32_t *)((int64_t)puVar8 + 0xbc) = 0;
        puVar8[0x18] = 0;
        puVar8[0x19] = 0x3f80000000000000;
        puVar8 = puVar8 + 0x1c;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    lVar16 = param_1[1];
    lVar10 = *param_1;
    if (lVar10 != lVar16) {
      do {
        *(void **)(lVar10 + 8) = &system_state_ptr;
        lVar10 = lVar10 + 0xe0;
      } while (lVar10 != lVar16);
      lVar10 = *param_1;
    }
    if (lVar10 != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    *param_1 = (int64_t)puVar6;
    param_1[1] = (int64_t)(puVar11 + param_2 * 0x38);
    param_1[2] = (int64_t)(puVar6 + uVar9 * 0x38);
  }
  else {
    if (param_2 != 0) {
      puVar8 = (uint64_t *)(puVar12 + 4);
      uVar9 = param_2;
      do {
        puVar8[-1] = &system_state_ptr;
        *puVar8 = 0;
        *(int32_t *)(puVar8 + 1) = 0;
        puVar8[-1] = &memory_allocator_3432_ptr;
        *puVar8 = puVar8 + 2;
        *(int32_t *)(puVar8 + 1) = 0;
        *(int8_t *)(puVar8 + 2) = 0;
        *puVar12 = 0xffffffff;
        puVar8[0x12] = 0x3f800000;
        puVar8[0x13] = 0;
        puVar8[0x14] = 0x3f80000000000000;
        puVar8[0x15] = 0;
        puVar8[0x16] = 0;
        puVar8[0x17] = 0x3f800000;
        puVar8[0x18] = 0;
        puVar8[0x19] = 0x3f80000000000000;
        puVar12 = puVar12 + 0x38;
        puVar8 = puVar8 + 0x1c;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      puVar12 = (int32_t *)param_1[1];
    }
    param_1[1] = (int64_t)(puVar12 + param_2 * 0x38);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_229f80(int64_t *param_1,uint64_t param_2)
void function_229f80(int64_t *param_1,uint64_t param_2)
{
  uint64_t *puVar1;
  int32_t *puVar2;
  void *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  int8_t *puVar8;
  int64_t lVar9;
  int64_t lVar10;
  int8_t *puVar11;
  int8_t *puVar12;
  int64_t lVar13;
  void *puVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int32_t *puVar17;
  lVar13 = param_1[1];
  lVar9 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(param_1[2] - lVar13),8) +
          (param_1[2] - lVar13);
  if ((uint64_t)((lVar9 >> 8) - (lVar9 >> 0x3f)) < param_2) {
    lVar9 = *param_1;
    lVar10 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar13 - lVar9),8) + (lVar13 - lVar9);
    lVar10 = (lVar10 >> 8) - (lVar10 >> 0x3f);
    uVar16 = lVar10 * 2;
    if (lVar10 == 0) {
      uVar16 = 1;
    }
    if (uVar16 < lVar10 + param_2) {
      uVar16 = lVar10 + param_2;
    }
    puVar8 = (int8_t *)0x0;
    if (uVar16 != 0) {
      puVar8 = (int8_t *)
               CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar16 * 0x150,(char)param_1[3],0xc30c30c30c30c30d,
                             0xfffffffffffffffe);
      lVar13 = param_1[1];
      lVar9 = *param_1;
    }
    puVar11 = puVar8;
    if (lVar9 != lVar13) {
      lVar9 = lVar9 - (int64_t)puVar8;
      puVar17 = (int32_t *)(puVar8 + 0x18);
      do {
        *puVar11 = *(int8_t *)(lVar9 + -0x18 + (int64_t)puVar17);
        *(void **)(puVar17 + -4) = &system_state_ptr;
        *(uint64_t *)(puVar17 + -2) = 0;
        *puVar17 = 0;
        *(void **)(puVar17 + -4) = &memory_allocator_3432_ptr;
        *(int32_t **)(puVar17 + -2) = puVar17 + 2;
        *puVar17 = 0;
        *(int8_t *)(puVar17 + 2) = 0;
        *puVar17 = *(int32_t *)(lVar9 + (int64_t)puVar17);
        puVar3 = *(void **)(lVar9 + -8 + (int64_t)puVar17);
        puVar14 = &system_buffer_ptr;
        if (puVar3 != (void *)0x0) {
          puVar14 = puVar3;
        }
        strcpy_s(*(uint64_t *)(puVar17 + -2),0x80,puVar14);
        *(void **)(puVar17 + 0x22) = &system_state_ptr;
        *(uint64_t *)(puVar17 + 0x24) = 0;
        puVar17[0x26] = 0;
        *(void **)(puVar17 + 0x22) = &memory_allocator_3480_ptr;
        *(int32_t **)(puVar17 + 0x24) = puVar17 + 0x28;
        puVar17[0x26] = 0;
        *(int8_t *)(puVar17 + 0x28) = 0;
        puVar17[0x26] = *(int32_t *)(lVar9 + 0x98 + (int64_t)puVar17);
        puVar3 = *(void **)(lVar9 + 0x90 + (int64_t)puVar17);
        puVar14 = &system_buffer_ptr;
        if (puVar3 != (void *)0x0) {
          puVar14 = puVar3;
        }
        strcpy_s(*(uint64_t *)(puVar17 + 0x24),0x40,puVar14);
        *(int8_t *)(puVar17 + 0x38) = *(int8_t *)(lVar9 + 0xe0 + (int64_t)puVar17);
        puVar17[0x39] = *(int32_t *)(lVar9 + 0xe4 + (int64_t)puVar17);
        puVar17[0x3a] = *(int32_t *)(lVar9 + 0xe8 + (int64_t)puVar17);
        puVar1 = (uint64_t *)(lVar9 + 0xec + (int64_t)puVar17);
        uVar7 = puVar1[1];
        *(uint64_t *)(puVar17 + 0x3b) = *puVar1;
        *(uint64_t *)(puVar17 + 0x3d) = uVar7;
        puVar1 = (uint64_t *)(lVar9 + 0xfc + (int64_t)puVar17);
        uVar7 = puVar1[1];
        *(uint64_t *)(puVar17 + 0x3f) = *puVar1;
        *(uint64_t *)(puVar17 + 0x41) = uVar7;
        puVar17[0x43] = *(int32_t *)(lVar9 + 0x10c + (int64_t)puVar17);
        puVar2 = (int32_t *)(lVar9 + 0x110 + (int64_t)puVar17);
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        puVar17[0x44] = *puVar2;
        puVar17[0x45] = uVar4;
        puVar17[0x46] = uVar5;
        puVar17[0x47] = uVar6;
        puVar1 = (uint64_t *)(lVar9 + 0x120 + (int64_t)puVar17);
        uVar7 = puVar1[1];
        *(uint64_t *)(puVar17 + 0x48) = *puVar1;
        *(uint64_t *)(puVar17 + 0x4a) = uVar7;
        puVar17[0x4c] = *(int32_t *)(lVar9 + 0x130 + (int64_t)puVar17);
        puVar11 = puVar11 + 0x150;
        lVar10 = (int64_t)puVar17 + lVar9 + 0x138;
        puVar17 = puVar17 + 0x54;
      } while (lVar10 != lVar13);
    }
    puVar12 = puVar11;
    uVar15 = param_2;
    if (param_2 != 0) {
      do {
        function_2295e0(puVar12);
        uVar15 = uVar15 - 1;
        puVar12 = puVar12 + 0x150;
      } while (uVar15 != 0);
    }
    lVar13 = param_1[1];
    lVar9 = *param_1;
    if (lVar9 != lVar13) {
      do {
        *(void **)(lVar9 + 0xa0) = &system_state_ptr;
        *(void **)(lVar9 + 8) = &system_state_ptr;
        lVar9 = lVar9 + 0x150;
      } while (lVar9 != lVar13);
      lVar9 = *param_1;
    }
    if (lVar9 != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    *param_1 = (int64_t)puVar8;
    param_1[1] = (int64_t)(puVar11 + param_2 * 0x150);
    param_1[2] = (int64_t)(puVar8 + uVar16 * 0x150);
  }
  else {
    uVar16 = param_2;
    if (param_2 != 0) {
      do {
        function_2295e0(lVar13);
        lVar13 = lVar13 + 0x150;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
      lVar13 = param_1[1];
    }
    param_1[1] = param_2 * 0x150 + lVar13;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_22a310(int64_t *param_1,int64_t param_2,int64_t param_3)
void function_22a310(int64_t *param_1,int64_t param_2,int64_t param_3)
{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  lVar2 = (param_3 - param_2) / 6 + (param_3 - param_2 >> 0x3f);
  uVar5 = (lVar2 >> 4) - (lVar2 >> 0x3f);
  if ((uint64_t)((param_1[2] - *param_1) / 0x60) < uVar5) {
    if (uVar5 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar5 * 0x60,(char)param_1[3]);
    }
    if (param_2 != param_3) {
      lVar4 = lVar2 - param_2;
      do {
        function_40d890(lVar4 + param_2,param_2);
        param_2 = param_2 + 0x60;
      } while (param_2 != param_3);
    }
    lVar4 = param_1[1];
    lVar3 = *param_1;
    if (lVar3 != lVar4) {
      do {
        function_40d990(lVar3);
        lVar3 = lVar3 + 0x60;
      } while (lVar3 != lVar4);
      lVar3 = *param_1;
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lVar3);
    }
    *param_1 = lVar2;
    lVar2 = uVar5 * 0x60 + lVar2;
    param_1[2] = lVar2;
    param_1[1] = lVar2;
  }
  else {
    uVar1 = (param_1[1] - *param_1) / 0x60;
    if (uVar1 < uVar5) {
      lVar2 = uVar1 * 0x60 + param_2;
      function_22a590(param_2,lVar2);
      lVar2 = function_22a540(lVar2,param_3,param_1[1]);
      param_1[1] = lVar2;
    }
    else {
      lVar3 = function_22a590(param_2,param_3);
      lVar2 = param_1[1];
      for (lVar4 = lVar3; lVar4 != lVar2; lVar4 = lVar4 + 0x60) {
        function_40d990(lVar4);
      }
      param_1[1] = lVar3;
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_22a379(void)
void function_22a379(void)
{
  int64_t lVar1;
  int64_t unaff_RBX;
  int64_t lVar2;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int64_t lVar3;
  int64_t unaff_R14;
  if (unaff_R14 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = CoreMemoryPoolAllocator(system_memory_pool_ptr,unaff_R14 * 0x60,(char)unaff_RSI[3]);
  }
  if (unaff_RBX != unaff_RBP) {
    lVar3 = lVar1 - unaff_RBX;
    do {
      function_40d890(lVar3 + unaff_RBX,unaff_RBX);
      unaff_RBX = unaff_RBX + 0x60;
    } while (unaff_RBX != unaff_RBP);
  }
  lVar3 = unaff_RSI[1];
  lVar2 = *unaff_RSI;
  if (lVar2 != lVar3) {
    do {
      function_40d990(lVar2);
      lVar2 = lVar2 + 0x60;
    } while (lVar2 != lVar3);
    lVar2 = *unaff_RSI;
  }
  if (lVar2 != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(lVar2);
  }
  *unaff_RSI = lVar1;
  lVar1 = unaff_R14 * 0x60 + lVar1;
  unaff_RSI[2] = lVar1;
  unaff_RSI[1] = lVar1;
  return;
}