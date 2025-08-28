#include "ultra_high_freq_fun_definitions.h"
// $fun 的语义化别名
#define $alias_name $fun
/**
 * @file 03_rendering_part105.c
 * @brief 渲染系统高级数据处理和文件操作模块
 *
 * 本模块包含4个核心函数，涵盖渲染系统高级数据处理、文件写入、
 * 资源管理、路径处理、字符串操作等高级渲染功能。
 */
/**
 * @defgroup rendering_constants 渲染系统常量定义
 * @{
 */
#define RENDERING_MAX_PATH_LENGTH 0x200
#define RENDERING_MAX_BUFFER_SIZE 0x100000
#define RENDERING_STRING_TERMINATOR 0x5c
#define RENDERING_FILE_EXTENSION_SIZE 4
#define RENDERING_ALIGNMENT_SIZE 32
#define RENDERING_POOL_ALLOCATOR_TYPE 3
#define RENDERING_MEMORY_BLOCK_SIZE 0x20000
#define RENDERING_DIRECTORY_SEPARATOR '\\'
#define RENDERING_PATH_SEPARATOR '/'
#define RENDERING_DEFAULT_BUFFER_SIZE 0x20
#define RENDERING_MAX_FILENAME_LENGTH 0x100
/** @} */
/**
 * @defgroup rendering_function_aliases 渲染系统函数别名
 * @{
 */
#define RenderingSystem_ProcessResourceData function_32db60
#define RenderingSystem_ExportResourceData function_32e340
#define RenderingSystem_ProcessTexturePath function_32ea30
#define RenderingSystem_OptimizeRenderData function_32f030
/** @} */
/**
 * @brief 渲染系统资源数据处理器
 *
 * 该函数负责处理渲染系统资源数据，包括数据写入、路径处理、
 * 字符串操作和文件管理等高级渲染功能。
 *
 * @param param_1 渲染上下文指针
 * @param param_2 输出文件句柄
 * @param param_3 资源数据指针
 * @return void
 */
void RenderingSystem_ProcessResourceData(int64_t render_context, int64_t output_handle, int64_t resource_data)
{
  int32_t uVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  void *puVar4;
  int8_t *puVar5;
  uint uVar6;
  int iVar7;
  int64_t lVar8;
  int32_t *puVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  int8_t stack_array_138 [32];
  int64_t lStack_118;
  int32_t *plocal_var_110;
  int64_t lStack_108;
  int16_t local_var_100;
  int8_t local_var_fe;
  int aiStack_f8 [2];
  void *plocal_var_f0;
  int8_t *plocal_var_e8;
  uint local_var_e0;
  uint64_t local_var_d8;
  int32_t *plocal_var_d0;
  int32_t *plocal_var_c8;
  int32_t *plocal_var_c0;
  int32_t *plocal_var_b8;
  int32_t local_var_b0;
  int64_t lStack_a0;
  uint64_t stack_array_98 [2];
  int8_t local_var_88;
  uint64_t local_var_80;
  int64_t lStack_78;
  int64_t lStack_70;
  uint64_t local_var_68;
  char acStack_60 [32];
  uint64_t local_var_40;
  local_var_68 = 0xfffffffffffffffe;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_138;
  aiStack_f8[0] = 0;
  plocal_var_c8 = (int32_t *)0x0;
  plocal_var_c0 = (int32_t *)0x0;
  plocal_var_b8 = (int32_t *)0x0;
  local_var_b0 = 3;
  puVar2 = *(uint64_t **)(param_1 + 0xb20);
  puVar9 = (int32_t *)*puVar2;
  if (puVar9 == (int32_t *)0x0) {
    puVar11 = puVar2 + 1;
    puVar9 = (int32_t *)*puVar11;
    while (puVar9 == (int32_t *)0x0) {
      puVar11 = puVar11 + 1;
      puVar9 = (int32_t *)*puVar11;
    }
  }
  lStack_a0 = param_3;
  lStack_78 = param_1;
  lStack_70 = param_2;
  if (puVar9 == (int32_t *)puVar2[*(int64_t *)(param_1 + 0xb28)]) {
    fwrite(aiStack_f8,4,1,*(uint64_t *)(param_2 + 8));
    puVar9 = plocal_var_c8;
    if (0 < aiStack_f8[0]) {
      fwrite(plocal_var_c8,4,(int64_t)aiStack_f8[0],*(uint64_t *)(param_2 + 8));
    }
    _ftelli64(*(uint64_t *)(param_2 + 8));
    if (puVar9 == (int32_t *)0x0) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_138);
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar9);
  }
  aiStack_f8[0] = 1;
  plocal_var_d0 = (int32_t *)0x0;
  plocal_var_c8 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,4,3);
  lVar3 = lStack_a0;
  *plocal_var_c8 = *puVar9;
  plocal_var_d0 = plocal_var_c8 + 1;
  plocal_var_b8 = plocal_var_c8 + 1;
  plocal_var_f0 = &system_data_buffer_ptr;
  local_var_d8 = 0;
  plocal_var_e8 = (int8_t *)0x0;
  local_var_e0 = 0;
  plocal_var_c0 = plocal_var_d0;
  CoreEngineDataBufferProcessor(&plocal_var_f0,*(int32_t *)(lStack_a0 + 0x10));
  if (0 < *(int *)(lVar3 + 0x10)) {
    puVar4 = &system_buffer_ptr;
    if (*(void **)(lVar3 + 8) != (void *)0x0) {
      puVar4 = *(void **)(lVar3 + 8);
    }
// WARNING: Subroutine does not return
    memcpy(plocal_var_e8,puVar4,(int64_t)(*(int *)(lVar3 + 0x10) + 1));
  }
  if ((*(int64_t *)(lVar3 + 8) != 0) && (local_var_e0 = 0, plocal_var_e8 != (int8_t *)0x0)) {
    *plocal_var_e8 = 0;
  }
  uVar6 = local_var_e0 + 1;
  CoreEngineDataBufferProcessor(&plocal_var_f0,uVar6);
  *(int16_t *)(plocal_var_e8 + local_var_e0) = 0x5c;
  local_var_e0 = uVar6;
  SystemCore_CacheManager(acStack_60,0x20,&memory_allocator_3388_ptr,*puVar9);
  lVar3 = -1;
  do {
    lVar8 = lVar3;
    lVar3 = lVar8 + 1;
  } while (acStack_60[lVar8 + 1] != '\0');
  iVar7 = (int)(lVar8 + 1);
  if (iVar7 < 1) {
    iVar7 = local_var_e0 + 4;
    CoreEngineDataBufferProcessor(&plocal_var_f0,iVar7);
    *(int32_t *)(plocal_var_e8 + local_var_e0) = 0x6662672e;
    *(int8_t *)((int64_t)(plocal_var_e8 + local_var_e0) + 4) = 0;
    puVar5 = &system_buffer_ptr;
    if (plocal_var_e8 != (int8_t *)0x0) {
      puVar5 = plocal_var_e8;
    }
    stack_array_98[0] = 0;
    local_var_88 = 0;
    local_var_e0 = iVar7;
    SystemCore_Validator(stack_array_98,puVar5,&processed_var_9772_ptr);
    lStack_118 = 0;
    plocal_var_110 = (int32_t *)0x0;
    lStack_108 = 0;
    local_var_100 = 0;
    local_var_fe = 3;
    System_BufferManager(&lStack_118,0x100000);
    puVar2 = *(uint64_t **)(puVar9 + 2);
    uVar1 = *(int32_t *)(puVar2 + 1);
    if ((uint64_t)((lStack_108 - (int64_t)plocal_var_110) + lStack_118) < 5) {
      System_BufferManager(&lStack_118,(int64_t)plocal_var_110 + (4 - lStack_118));
    }
    *plocal_var_110 = uVar1;
    plocal_var_110 = plocal_var_110 + 1;
    uVar10 = (int64_t)*(int *)(puVar2 + 1) * 4;
    local_var_80 = *puVar2;
    if ((uint64_t)((lStack_108 - (int64_t)plocal_var_110) + lStack_118) <= uVar10) {
      System_BufferManager(&lStack_118,(int64_t)plocal_var_110 + (uVar10 - lStack_118));
    }
// WARNING: Subroutine does not return
    memcpy(plocal_var_110,local_var_80,uVar10);
  }
  CoreEngineDataBufferProcessor(&plocal_var_f0,local_var_e0 + iVar7);
// WARNING: Subroutine does not return
  memcpy(plocal_var_e8 + local_var_e0,acStack_60,(int64_t)((int)lVar8 + 2));
}
/**
 * @brief 渲染系统资源数据导出器
 *
 * 该函数负责导出渲染系统资源数据到文件，包括数据序列化、
 * 文件写入、内存管理和路径处理等高级渲染功能。
 *
 * @param param_1 渲染上下文指针
 * @param param_2 输出文件句柄
 * @param param_3 资源数据指针
 * @return int32_t 操作状态码
 */
int32_t RenderingSystem_ExportResourceData(int64_t render_context, int64_t output_handle, uint64_t resource_data)
{
  uint64_t uVar1;
  int *piVar2;
  int64_t *plVar3;
  uint uVar4;
  int32_t uVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int32_t *puVar8;
  int *piVar9;
  int64_t lVar10;
  int32_t *puVar11;
  void *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int64_t lVar16;
  int32_t *puVar17;
  int64_t lVar18;
  int *piVar19;
  int64_t *plVar20;
  int aiStackX_8 [2];
  int64_t lStackX_10;
  int64_t lStack_128;
  int64_t lStack_120;
  uint64_t local_var_118;
  int16_t local_var_110;
  int8_t local_var_10e;
  void *plocal_var_108;
  void *plocal_var_100;
  uint local_var_f8;
  int32_t local_var_f0;
  uint64_t local_var_e8;
  int32_t *plocal_var_e0;
  int32_t *plocal_var_d8;
  int32_t *plocal_var_d0;
  int32_t local_var_c8;
  int32_t *plocal_var_c0;
  int32_t *plocal_var_b8;
  int32_t *plocal_var_b0;
  int32_t local_var_a8;
  int *piStack_a0;
  int *piStack_98;
  int *piStack_90;
  int32_t local_var_88;
  int64_t *plStack_80;
  int64_t *plStack_78;
  int64_t *plStack_70;
  int32_t local_var_68;
  uint64_t local_var_60;
  int64_t lStack_58;
  int8_t local_var_50;
  int64_t lStack_48;
  uint64_t local_var_40;
  local_var_40 = 0xfffffffffffffffe;
  aiStackX_8[0] = 0;
  plocal_var_e0 = (int32_t *)0x0;
  plocal_var_d8 = (int32_t *)0x0;
  plocal_var_d0 = (int32_t *)0x0;
  local_var_c8 = 3;
  plocal_var_c0 = (int32_t *)0x0;
  plocal_var_b8 = (int32_t *)0x0;
  plocal_var_b0 = (int32_t *)0x0;
  local_var_a8 = 3;
  piStack_a0 = (int *)0x0;
  piStack_98 = (int *)0x0;
  piStack_90 = (int *)0x0;
  local_var_88 = 3;
  plStack_80 = (int64_t *)0x0;
  plStack_78 = (int64_t *)0x0;
  plStack_70 = (int64_t *)0x0;
  local_var_68 = 3;
  lStackX_10 = param_2;
  SystemCore_EncryptionEngine0(&plocal_var_108,param_3);
  uVar4 = local_var_f8;
  uVar13 = local_var_f8 + 1;
  CoreEngineDataBufferProcessor(&plocal_var_108,uVar13);
  *(int16_t *)(plocal_var_100 + local_var_f8) = 0x5c;
  uVar14 = uVar4 + 0x16;
  local_var_f8 = uVar13;
  CoreEngineDataBufferProcessor(&plocal_var_108,uVar14);
  puVar11 = (int32_t *)(plocal_var_100 + local_var_f8);
  *puVar11 = 0x6e696b73;
  puVar11[1] = 0x5f64656e;
  puVar11[2] = 0x61636564;
  puVar11[3] = 0x75625f6c;
  puVar11[4] = 0x72656666;
  *(int16_t *)(puVar11 + 5) = 0x73;
  iVar15 = uVar4 + 0x1a;
  local_var_f8 = uVar14;
  CoreEngineDataBufferProcessor(&plocal_var_108,iVar15);
  *(int32_t *)(plocal_var_100 + local_var_f8) = 0x6264732e;
  *(int8_t *)((int64_t)(plocal_var_100 + local_var_f8) + 4) = 0;
  puVar12 = &system_buffer_ptr;
  if (plocal_var_100 != (void *)0x0) {
    puVar12 = plocal_var_100;
  }
  local_var_60 = 0;
  local_var_50 = 0;
  local_var_f8 = iVar15;
  SystemCore_Validator(&local_var_60,puVar12,&processed_var_9772_ptr);
  lStack_128 = 0;
  lStack_120 = 0;
  local_var_118 = 0;
  local_var_110 = 0;
  local_var_10e = 3;
  local_var_e8 = 0;
  lStack_48 = param_1 + 0x958;
  lVar10 = *(int64_t *)(param_1 + 0x960);
  puVar11 = (int32_t *)0x0;
  if (lVar10 != lStack_48) {
    do {
      puVar8 = plocal_var_d8;
      puVar17 = plocal_var_e0;
      aiStackX_8[0] = aiStackX_8[0] + 1;
      uVar5 = *(int32_t *)(lVar10 + 0x20);
      if (plocal_var_d8 < puVar11) {
        *plocal_var_d8 = uVar5;
        puVar11 = plocal_var_d8;
      }
      else {
        lVar18 = (int64_t)plocal_var_d8 - (int64_t)plocal_var_e0;
        lVar16 = lVar18 >> 2;
        if (lVar16 == 0) {
          lVar16 = 1;
LAB_18032e50f:
          puVar11 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar16 * 4,3);
        }
        else {
          lVar16 = lVar16 * 2;
          if (lVar16 != 0) goto LAB_18032e50f;
          puVar11 = (int32_t *)0x0;
        }
        if (puVar17 != puVar8) {
// WARNING: Subroutine does not return
          memmove(puVar11,puVar17,lVar18);
        }
        *puVar11 = uVar5;
        if (puVar17 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(puVar17);
        }
        plocal_var_d0 = puVar11 + lVar16;
        plocal_var_e0 = puVar11;
      }
      plocal_var_d8 = puVar11 + 1;
      uVar4 = **(uint **)(lVar10 + 0x28);
      if (uVar4 != 0) {
        uVar4 = (**(uint **)(lVar10 + 0x28) - 1 >> 0xc) + 1;
      }
      lVar16 = (uint64_t)uVar4 * 0x20000;
      local_var_e8 = local_var_e8 + lVar16;
      if (local_var_118 < local_var_e8) {
        System_BufferManager(&lStack_128);
      }
      plVar3 = plStack_78;
      plVar20 = plStack_80;
      if (plStack_78 < plStack_70) {
        *plStack_78 = lVar16;
        plVar7 = plStack_78;
      }
      else {
        lVar6 = (int64_t)plStack_78 - (int64_t)plStack_80;
        lVar18 = lVar6 >> 3;
        if (lVar18 == 0) {
          lVar18 = 1;
LAB_18032e5ed:
          plVar7 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar18 * 8,3);
        }
        else {
          lVar18 = lVar18 * 2;
          if (lVar18 != 0) goto LAB_18032e5ed;
          plVar7 = (int64_t *)0x0;
        }
        if (plVar20 != plVar3) {
// WARNING: Subroutine does not return
          memmove(plVar7,plVar20,lVar6);
        }
        *plVar7 = lVar16;
        if (plVar20 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(plVar20);
        }
        plStack_70 = plVar7 + lVar18;
        plStack_80 = plVar7;
      }
      puVar17 = plocal_var_b8;
      puVar11 = plocal_var_c0;
      plStack_78 = plVar7 + 1;
      uVar5 = **(int32_t **)(lVar10 + 0x28);
      if (plocal_var_b8 < plocal_var_b0) {
        *plocal_var_b8 = uVar5;
        puVar8 = plocal_var_b8;
      }
      else {
        lVar18 = (int64_t)plocal_var_b8 - (int64_t)plocal_var_c0;
        lVar16 = lVar18 >> 2;
        if (lVar16 == 0) {
          lVar16 = 1;
LAB_18032e696:
          puVar8 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar16 * 4,3);
        }
        else {
          lVar16 = lVar16 * 2;
          if (lVar16 != 0) goto LAB_18032e696;
          puVar8 = (int32_t *)0x0;
        }
        if (puVar11 != puVar17) {
// WARNING: Subroutine does not return
          memmove(puVar8,puVar11,lVar18);
        }
        *puVar8 = uVar5;
        if (puVar11 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(puVar11);
        }
        plocal_var_b0 = puVar8 + lVar16;
        plocal_var_c0 = puVar8;
      }
      piVar2 = piStack_98;
      piVar19 = piStack_a0;
      plocal_var_b8 = puVar8 + 1;
      if (**(int **)(lVar10 + 0x28) == 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = (**(int **)(lVar10 + 0x28) - 1U >> 0xc) + 1;
      }
      if (piStack_98 < piStack_90) {
        *piStack_98 = iVar15;
        piVar9 = piStack_98;
      }
      else {
        lVar18 = (int64_t)piStack_98 - (int64_t)piStack_a0;
        lVar16 = lVar18 >> 2;
        if (lVar16 == 0) {
          lVar16 = 1;
LAB_18032e74e:
          piVar9 = (int *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar16 * 4,3);
        }
        else {
          lVar16 = lVar16 * 2;
          if (lVar16 != 0) goto LAB_18032e74e;
          piVar9 = (int *)0x0;
        }
        if (piVar19 != piVar2) {
// WARNING: Subroutine does not return
          memmove(piVar9,piVar19,lVar18);
        }
        *piVar9 = iVar15;
        if (piVar19 != (int *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(piVar19);
        }
        piStack_90 = piVar9 + lVar16;
        piStack_a0 = piVar9;
      }
      piStack_98 = piVar9 + 1;
      piVar19 = *(int **)(lVar10 + 0x28);
      function_1b9a40(piVar19,*piVar19);
      iVar15 = *piVar19;
      if (iVar15 != 0) {
        iVar15 = (*piVar19 - 1U >> 0xc) + 1;
      }
      if (iVar15 != 0) {
        uVar1 = *(uint64_t *)(piVar19 + 2);
        if ((local_var_118 - lStack_120) + lStack_128 < 0x20001) {
          System_BufferManager(&lStack_128,(lStack_120 - lStack_128) + 0x20000);
        }
// WARNING: Subroutine does not return
        memcpy(lStack_120,uVar1,0x20000);
      }
      lVar10 = SystemFunction_00018066bd70(lVar10);
      puVar11 = plocal_var_d0;
      param_2 = lStackX_10;
    } while (lVar10 != lStack_48);
  }
  lVar10 = lStack_58;
  fwrite(lStack_128,local_var_118,1,lStack_58);
  if (lVar10 != 0) {
    fclose(lVar10);
    lStack_58 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
    lVar10 = 0;
  }
  fwrite(aiStackX_8,4,1,*(uint64_t *)(param_2 + 8));
  plVar20 = plStack_80;
  piVar19 = piStack_a0;
  puVar17 = plocal_var_c0;
  puVar11 = plocal_var_e0;
  if (0 < aiStackX_8[0]) {
    fwrite(plocal_var_e0,4,(int64_t)aiStackX_8[0],*(uint64_t *)(param_2 + 8));
    fwrite(puVar17,4,(int64_t)aiStackX_8[0],*(uint64_t *)(param_2 + 8));
    fwrite(piVar19,4,(int64_t)aiStackX_8[0],*(uint64_t *)(param_2 + 8));
    fwrite(plVar20,8,(int64_t)aiStackX_8[0],*(uint64_t *)(param_2 + 8));
  }
  uVar5 = _ftelli64(*(uint64_t *)(param_2 + 8));
  if (((char)local_var_110 == '\0') && (lStack_128 != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (lVar10 != 0) {
    fclose(lVar10);
    lStack_58 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
    puVar17 = plocal_var_c0;
    puVar11 = plocal_var_e0;
    piVar19 = piStack_a0;
    plVar20 = plStack_80;
  }
  plocal_var_108 = &system_data_buffer_ptr;
  if (plocal_var_100 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_100 = (void *)0x0;
  local_var_f0 = 0;
  plocal_var_108 = &system_state_ptr;
  if (plVar20 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plVar20);
  }
  if (piVar19 == (int *)0x0) {
    if (puVar17 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar17);
    }
    if (puVar11 == (int32_t *)0x0) {
      return uVar5;
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar11);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(piVar19);
}
// WARNING: Removing unreachable block (ram,0x00018032ec90)
// WARNING: Removing unreachable block (ram,0x00018032ec9e)
// WARNING: Removing unreachable block (ram,0x00018032eca2)
// WARNING: Removing unreachable block (ram,0x00018032ecd0)
// WARNING: Removing unreachable block (ram,0x00018032ecd9)
// WARNING: Removing unreachable block (ram,0x00018032ecdd)
// WARNING: Removing unreachable block (ram,0x00018032ed0b)
// WARNING: Removing unreachable block (ram,0x00018032ed50)
// WARNING: Removing unreachable block (ram,0x00018032ed61)
// WARNING: Removing unreachable block (ram,0x00018032ed65)
// WARNING: Removing unreachable block (ram,0x00018032ed71)
// WARNING: Removing unreachable block (ram,0x00018032ed7d)
// WARNING: Removing unreachable block (ram,0x00018032ed84)
// WARNING: Removing unreachable block (ram,0x00018032edcc)
// WARNING: Removing unreachable block (ram,0x00018032edd1)
// WARNING: Removing unreachable block (ram,0x00018032edfd)
// WARNING: Removing unreachable block (ram,0x00018032ee02)
// WARNING: Removing unreachable block (ram,0x00018032ee60)
// WARNING: Removing unreachable block (ram,0x00018032ee7c)
// WARNING: Removing unreachable block (ram,0x00018032ee6f)
// WARNING: Removing unreachable block (ram,0x00018032ee82)
// WARNING: Removing unreachable block (ram,0x00018032ee78)
// WARNING: Removing unreachable block (ram,0x00018032ee9c)
// WARNING: Removing unreachable block (ram,0x00018032eea5)
// WARNING: Removing unreachable block (ram,0x00018032eeb4)
// WARNING: Removing unreachable block (ram,0x00018032eec7)
// WARNING: Removing unreachable block (ram,0x00018032eecf)
// WARNING: Removing unreachable block (ram,0x00018032ee46)
// WARNING: Removing unreachable block (ram,0x00018032eef0)
// WARNING: Removing unreachable block (ram,0x00018032ef09)
// WARNING: Removing unreachable block (ram,0x00018032ef0e)
// WARNING: Removing unreachable block (ram,0x00018032ef31)
// WARNING: Removing unreachable block (ram,0x00018032ef40)
// WARNING: Removing unreachable block (ram,0x00018032ef56)
// WARNING: Removing unreachable block (ram,0x00018032ef79)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
/**
 * @brief 渲染系统纹理路径处理器
 *
 * 该函数负责处理渲染系统纹理路径，包括路径解析、字符串操作、
 * 数据验证和文件管理等高级渲染功能。
 *
 * @param param_1 渲染上下文指针
 * @param param_2 输出文件句柄
 * @param param_3 纹理路径数据
 * @return void
 */
void RenderingSystem_ProcessTexturePath(int64_t render_context, int64_t output_handle, uint64_t texture_path_data)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int32_t *puVar5;
  uint uVar6;
  uint64_t uVar7;
  int8_t stack_array_188 [32];
  int32_t local_var_168;
  int iStack_164;
  void *plocal_var_160;
  uint64_t local_var_158;
  int32_t local_var_150;
  uint64_t local_var_148;
  void *plocal_var_140;
  int64_t lStack_138;
  uint local_var_130;
  uint64_t local_var_128;
  int64_t lStack_120;
  int64_t *plStack_118;
  int8_t stack_array_110 [32];
  void *plocal_var_f0;
  int64_t lStack_e8;
  uint local_var_e0;
  int32_t local_var_d8;
  int32_t local_var_d4;
  uint64_t local_var_d0;
  int64_t lStack_c8;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  int32_t local_var_b0;
  int64_t lStack_a8;
  int64_t lStack_a0;
  int8_t *plocal_var_98;
  int64_t *plStack_90;
  uint64_t local_var_68;
  uint64_t local_var_50;
  local_var_68 = 0xfffffffffffffffe;
  local_var_50 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  local_var_168 = 0;
  iStack_164 = 0;
  lStack_c8 = 0;
  local_var_c0 = 0;
  local_var_b8 = 0;
  local_var_b0 = 3;
  lStack_a8 = param_1;
  lStack_a0 = param_2;
  SystemCore_EncryptionEngine0(&plocal_var_f0,param_3);
  uVar6 = local_var_e0 + 0x11;
  CoreEngineDataBufferProcessor(&plocal_var_f0,uVar6);
  puVar5 = (int32_t *)((uint64_t)local_var_e0 + lStack_e8);
  *puVar5 = 0x6261742f;
  puVar5[1] = 0x7561656c;
  puVar5[2] = 0x7865745f;
  puVar5[3] = 0x65727574;
  *(int16_t *)(puVar5 + 4) = 0x73;
  local_var_e0 = uVar6;
  cVar4 = UltraHighFreq_LogManager1(&plocal_var_f0);
  if (cVar4 == '\0') {
    SystemManager_Processor(&plocal_var_f0);
  }
  lVar3 = lStack_c8;
  uVar6 = local_var_e0;
  plVar1 = *(int64_t **)(param_1 + 0xaf0);
  lStack_120 = *plVar1;
  plStack_118 = plVar1;
  if (lStack_120 == 0) {
    plStack_118 = plVar1 + 1;
    lVar2 = *plStack_118;
    while (lVar2 == 0) {
      plStack_118 = plStack_118 + 1;
      lVar2 = *plStack_118;
    }
    lStack_120 = *plStack_118;
  }
  if (lStack_120 == plVar1[*(int64_t *)(param_1 + 0xaf8)]) {
    fwrite(&iStack_164,4,1,*(uint64_t *)(param_2 + 8));
    if (0 < iStack_164) {
      fwrite(lVar3,4,(int64_t)iStack_164,*(uint64_t *)(param_2 + 8));
    }
    _ftelli64(*(uint64_t *)(param_2 + 8));
    plocal_var_f0 = &system_data_buffer_ptr;
    if (lStack_e8 == 0) {
      lStack_e8 = 0;
      local_var_d8 = 0;
      plocal_var_f0 = &system_state_ptr;
      if (lVar3 == 0) {
// WARNING: Subroutine does not return
        SystemSecurityChecker(local_var_50 ^ (uint64_t)stack_array_188);
      }
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar3);
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_98 = stack_array_110;
  plStack_90 = &lStack_120;
  plocal_var_140 = &system_data_buffer_ptr;
  local_var_128 = 0;
  lStack_138 = 0;
  local_var_130 = 0;
  local_var_168 = 1;
  uVar7 = (uint64_t)local_var_e0;
  local_var_d0 = local_var_c0;
  if (lStack_e8 != 0) {
    CoreEngineDataBufferProcessor(&plocal_var_140,uVar7);
  }
  if (uVar6 == 0) {
    local_var_130 = uVar6;
    if (lStack_138 != 0) {
      *(int8_t *)(uVar7 + lStack_138) = 0;
    }
    local_var_128 = CONCAT44(local_var_d4,(int32_t)local_var_128);
    CoreEngineDataBufferProcessor(&plocal_var_140,1);
    *(int16_t *)((uint64_t)local_var_130 + lStack_138) = 0x2f;
    plocal_var_160 = &system_data_buffer_ptr;
    local_var_148 = 0;
    local_var_158 = 0;
    local_var_150 = 0;
    local_var_168 = 3;
    local_var_130 = 1;
    if (lStack_138 != 0) {
      CoreEngineDataBufferProcessor(&plocal_var_160,1);
    }
// WARNING: Subroutine does not return
    memcpy(local_var_158,lStack_138,1);
  }
// WARNING: Subroutine does not return
  memcpy(lStack_138,lStack_e8,uVar7);
}
/**
 * @brief 渲染系统数据优化器
 *
 * 该函数负责优化渲染系统数据，包括数据压缩、内存管理、
 * 文件操作和线程同步等高级渲染功能。
 *
 * @param param_1 渲染上下文指针
 * @param param_2 输出文件句柄
 * @param param_3 待优化的数据
 * @return int32_t 操作状态码
 */
int32_t RenderingSystem_OptimizeRenderData(int64_t render_context, int64_t output_handle, uint64_t data_to_optimize)
{
  uint uVar1;
  int iVar2;
  int32_t uVar3;
  int64_t lVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  int64_t lVar7;
  int32_t *puVar8;
  void *puVar9;
  uint uVar10;
  uint uVar11;
  int64_t lVar12;
  int32_t *puVar13;
  int32_t *puVar14;
  int32_t *puVar15;
  int aiStackX_20 [2];
  int64_t lStack_108;
  int64_t lStack_100;
  void *plocal_var_f8;
  void *plocal_var_f0;
  uint local_var_e8;
  int32_t local_var_e0;
  int32_t local_var_d8;
  int64_t lStack_d0;
  int64_t lStack_c8;
  int64_t lStack_c0;
  int32_t *plocal_var_b8;
  int32_t *plocal_var_b0;
  int32_t *plocal_var_a8;
  int32_t local_var_a0;
  int32_t *plocal_var_98;
  int32_t *plocal_var_90;
  int32_t *plocal_var_88;
  int32_t local_var_80;
  uint64_t local_var_78;
  int64_t lStack_70;
  int8_t local_var_68;
  int64_t lStack_60;
  int64_t lStack_58;
  int64_t lStack_50;
  uint local_var_48;
  uint64_t local_var_40;
  local_var_40 = 0xfffffffffffffffe;
  lVar12 = param_1 + 0x908;
  lStack_d0 = lVar12;
  iVar2 = _Mtx_lock(lVar12);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  plocal_var_b8 = (int32_t *)0x0;
  plocal_var_b0 = (int32_t *)0x0;
  plocal_var_a8 = (int32_t *)0x0;
  local_var_a0 = 3;
  plocal_var_98 = (int32_t *)0x0;
  plocal_var_90 = (int32_t *)0x0;
  plocal_var_88 = (int32_t *)0x0;
  local_var_80 = 3;
  SystemCore_EncryptionEngine0(&plocal_var_f8,param_3);
  uVar1 = local_var_e8;
  uVar10 = local_var_e8 + 1;
  CoreEngineDataBufferProcessor(&plocal_var_f8,uVar10);
  *(int16_t *)(plocal_var_f0 + local_var_e8) = 0x5c;
  uVar11 = uVar1 + 0x15;
  local_var_e8 = uVar10;
  CoreEngineDataBufferProcessor(&plocal_var_f8,uVar11);
  puVar8 = (int32_t *)(plocal_var_f0 + local_var_e8);
  *puVar8 = 0x6e656761;
  puVar8[1] = 0x6f705f74;
  puVar8[2] = 0x69746973;
  puVar8[3] = 0x5f736e6f;
  puVar8[4] = 0x61746164;
  *(int8_t *)(puVar8 + 5) = 0;
  iVar2 = uVar1 + 0x19;
  local_var_e8 = uVar11;
  CoreEngineDataBufferProcessor(&plocal_var_f8,iVar2);
  *(int32_t *)(plocal_var_f0 + local_var_e8) = 0x6470612e;
  *(int8_t *)((int64_t)(plocal_var_f0 + local_var_e8) + 4) = 0;
  puVar9 = &system_buffer_ptr;
  if (plocal_var_f0 != (void *)0x0) {
    puVar9 = plocal_var_f0;
  }
  local_var_78 = 0;
  local_var_68 = 0;
  local_var_e8 = iVar2;
  SystemCore_Validator(&local_var_78,puVar9,&processed_var_9772_ptr);
  lVar7 = *(int64_t *)(param_1 + 0x8e0);
  puVar8 = plocal_var_b0;
  puVar5 = plocal_var_b8;
  puVar13 = plocal_var_b8;
  puVar14 = plocal_var_90;
  puVar6 = plocal_var_98;
  puVar15 = plocal_var_98;
  if (lVar7 != param_1 + 0x8d8) {
    do {
      lVar12 = *(int64_t *)(lVar7 + 0x30) - *(int64_t *)(lVar7 + 0x28) >> 4;
      local_var_48 = *(uint *)(lVar7 + 0x40);
      if (lVar12 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar12 << 4,local_var_48 & 0xff);
      }
      lStack_50 = lVar12 * 0x10 + lVar4;
      lVar12 = *(int64_t *)(lVar7 + 0x28);
      lStack_60 = lVar4;
      lStack_58 = lVar4;
      if (lVar12 != *(int64_t *)(lVar7 + 0x30)) {
// WARNING: Subroutine does not return
        memmove(lVar4,lVar12,*(int64_t *)(lVar7 + 0x30) - lVar12);
      }
      local_var_d8 = *(int32_t *)(lVar7 + 0x20);
      if (puVar8 < plocal_var_a8) {
        *puVar8 = local_var_d8;
        puVar5 = puVar13;
      }
      else {
        lStack_c8 = (int64_t)puVar8 - (int64_t)puVar13;
        lStack_c0 = lStack_c8 >> 2;
        if (lStack_c0 == 0) {
          lStack_100 = 1;
LAB_18032f27b:
          puVar5 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lStack_100 * 4,3);
        }
        else {
          lStack_100 = lStack_c0 * 2;
          if (lStack_100 != 0) goto LAB_18032f27b;
          puVar5 = (int32_t *)0x0;
        }
        if (puVar13 != puVar8) {
// WARNING: Subroutine does not return
          memmove(puVar5,puVar13,lStack_c8);
        }
        *puVar5 = local_var_d8;
        if (puVar13 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(puVar13);
        }
        plocal_var_a8 = puVar5 + lStack_100;
        plocal_var_b8 = puVar5;
        puVar8 = puVar5;
      }
      puVar8 = puVar8 + 1;
      plocal_var_b0 = puVar8;
      if (puVar14 < plocal_var_88) {
        *puVar14 = 0;
        puVar6 = puVar15;
      }
      else {
        lStack_c0 = (int64_t)puVar14 - (int64_t)puVar15;
        lStack_c8 = lStack_c0 >> 2;
        if (lStack_c8 == 0) {
          lStack_108 = 1;
LAB_18032f333:
          puVar6 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lStack_108 * 4,3);
        }
        else {
          lStack_108 = lStack_c8 * 2;
          if (lStack_108 != 0) goto LAB_18032f333;
          puVar6 = (int32_t *)0x0;
        }
        if (puVar15 != puVar14) {
// WARNING: Subroutine does not return
          memmove(puVar6,puVar15,lStack_c0);
        }
        *puVar6 = 0;
        if (puVar15 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(puVar15);
        }
        plocal_var_88 = puVar6 + lStack_108;
        plocal_var_98 = puVar6;
        puVar14 = puVar6;
      }
      plocal_var_90 = puVar14 + 1;
      fwrite(lVar4,0,1,lStack_70);
      if (lVar4 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar4);
      }
      lVar7 = SystemFunction_00018066bd70(lVar7);
      lVar12 = lStack_d0;
      puVar13 = puVar5;
      puVar14 = puVar14 + 1;
      puVar15 = puVar6;
    } while (lVar7 != param_1 + 0x8d8);
  }
  if (lStack_70 != 0) {
    fclose(lStack_70);
    lStack_70 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
    lVar12 = lStack_d0;
    puVar5 = plocal_var_b8;
    puVar6 = plocal_var_98;
  }
  lVar7 = lStack_70;
  aiStackX_20[0] = (int)*(uint64_t *)(param_1 + 0x8f8);
  fwrite(aiStackX_20,4,1,*(uint64_t *)(param_2 + 8));
  if (aiStackX_20[0] != 0) {
    fwrite(puVar5,4,aiStackX_20[0],*(uint64_t *)(param_2 + 8));
    fwrite(puVar6,4,aiStackX_20[0],*(uint64_t *)(param_2 + 8));
  }
  uVar3 = _ftelli64(*(uint64_t *)(param_2 + 8));
  if (lVar7 != 0) {
    fclose(lVar7);
    lVar7 = 0;
    lStack_70 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
    lVar12 = lStack_d0;
    puVar5 = plocal_var_b8;
    puVar6 = plocal_var_98;
  }
  plocal_var_f8 = &system_data_buffer_ptr;
  if (plocal_var_f0 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  local_var_e0 = (int32_t)lVar7;
  plocal_var_f8 = &system_state_ptr;
  plocal_var_f0 = (void *)lVar7;
  if (puVar6 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar6);
  }
  if (puVar5 == (int32_t *)0x0) {
    iVar2 = _Mtx_unlock(lVar12);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    return uVar3;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar5);
}
// WARNING: Removing unreachable block (ram,0x00018032f8e9)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address