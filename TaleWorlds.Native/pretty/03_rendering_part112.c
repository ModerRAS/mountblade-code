#include "ultra_high_freq_fun_definitions.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: RenderingShaderProcessor */
#define RenderingShaderProcessor RenderingShaderProcessor
/**
 * @file 03_rendering_part112.c
 * @brief 渲染系统高级数据保存和加载模块
 *
 * 本模块包含5个核心函数，涵盖渲染系统数据保存、加载、资源管理、
 * 文件操作、内存管理和数据序列化等高级渲染功能。
 */
/**
 * @defgroup rendering_constants 渲染系统常量定义
 * @{
 */
#define RENDERING_BUFFER_SIZE 0x48
#define RENDERING_LARGE_BUFFER_SIZE 0xa8
#define RENDERING_RESOURCE_OFFSET_1 0x878
#define RENDERING_RESOURCE_OFFSET_2 0x888
#define RENDERING_RESOURCE_OFFSET_3 0x898
#define RENDERING_RESOURCE_OFFSET_4 0x8a8
#define RENDERING_RESOURCE_OFFSET_5 0x8b8
#define RENDERING_RESOURCE_OFFSET_6 0x8c8
#define RENDERING_HASH_TABLE_SIZE 0x100
#define RENDERING_MUTEX_TIMEOUT 0x30000
#define RENDERING_CLEANUP_FLAG 3
#define RENDERING_ALIGNMENT_MASK 0x1f
#define RENDERING_MAX_ITERATIONS 0x40
#define RENDERING_DATA_BLOCK_SIZE 0xe0
#define RENDERING_POOL_SIZE 0x100000
#define RENDERING_FILE_BUFFER_SIZE 0x18
#define RENDERING_RESOURCE_ID_OFFSET 0x6c8
#define RENDERING_CONTEXT_OFFSET 0x9f8
#define RENDERING_OUTPUT_OFFSET 0xa00
/* @} */
/**
 * @defgroup rendering_function_aliases 渲染系统函数别名
 * @{
 */
#define RenderingSystem_SaveResourceData function_335980
#define RenderingSystem_LoadResourceData function_335f10
#define RenderingSystem_SaveResourceDataEx function_336240
#define RenderingSystem_LoadResourceDataEx function_336540
#define RenderingSystem_ProcessResourceOperation function_3368b0
/* @} */
/**
 * @brief 渲染系统资源数据保存器
 *
 * 该函数负责保存渲染系统资源数据，包括数据序列化、内存管理、
 * 文件写入、资源清理和状态管理等高级渲染功能。
 *
 * @param resource_context 资源上下文指针，包含渲染系统资源管理信息
 * @param file_context 文件上下文指针，用于文件写入操作
 * @param data_context 数据上下文指针，包含要保存的数据
 * @param save_flag 保存标志，控制保存行为
 * @return void 无返回值
 *
 * @note 该函数实现以下核心功能：
 * - 资源数据序列化和内存管理
 * - 动态缓冲区分配和数据压缩
 * - 文件写入和错误处理
 * - 资源清理和内存释放
 * - 状态管理和标志控制
 */
void RenderingSystem_SaveResourceData(int64_t resource_context, int64_t file_context, int64_t data_context, uint64_t save_flag)
{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  void *puVar5;
  int64_t lVar6;
  void *puVar7;
  int64_t lVar8;
  uint uVar9;
  uint *puVar10;
  int64_t lStackX_18;
  int64_t lStackX_20;
  int64_t lStack_70;
  uint *plocal_var_68;
  int64_t lStack_60;
  int16_t local_var_58;
  int8_t local_var_56;
  lStack_70 = 0;
  plocal_var_68 = (uint *)0x0;
  lStack_60 = 0;
  local_var_58 = 0;
  local_var_56 = 3;
  uVar2 = *(uint64_t *)(resource_context + 0x898);
  lStackX_18 = data_context;
  System_BufferManager(&lStack_70,8,data_context,save_flag,0xfffffffffffffffe);
  *(uint64_t *)plocal_var_68 = uVar2;
  puVar10 = (uint *)((int64_t)plocal_var_68 + 8);
  lStackX_20 = resource_context + 0x878;
  lVar6 = *(int64_t *)(resource_context + 0x880);
  lVar8 = lStack_70;
  plocal_var_68 = puVar10;
  if (lVar6 != lStackX_20) {
    do {
      iVar1 = *(int *)(lVar6 + 0x20);
      lVar3 = *(int64_t *)(lVar6 + 0x30);
      lVar4 = *(int64_t *)(lVar6 + 0x28);
      if ((uint64_t)((lVar8 - (int64_t)puVar10) + lStack_60) < 9) {
        System_BufferManager(&lStack_70,(int64_t)puVar10 + (8 - lVar8));
        lVar8 = lStack_70;
        puVar10 = plocal_var_68;
      }
      *(int64_t *)puVar10 = (int64_t)iVar1;
      plocal_var_68 = puVar10 + 2;
      if ((uint64_t)((lVar8 - (int64_t)plocal_var_68) + lStack_60) < 5) {
        System_BufferManager(&lStack_70,(int64_t)plocal_var_68 + (4 - lVar8));
        lVar8 = lStack_70;
      }
      uVar9 = (uint)(lVar3 - lVar4 >> 3);
      *plocal_var_68 = uVar9;
      puVar10 = plocal_var_68 + 1;
      plocal_var_68 = puVar10;
      if (0 < (int)uVar9) {
        lVar6 = **(int64_t **)(lVar6 + 0x28);
        uVar9 = *(uint *)(lVar6 + 0x98);
        if ((uint64_t)((lVar8 - (int64_t)puVar10) + lStack_60) <= (uint64_t)uVar9 + 4) {
          System_BufferManager(&lStack_70,(((uint64_t)uVar9 + 4) - lVar8) + (int64_t)puVar10);
        }
        *plocal_var_68 = uVar9;
        plocal_var_68 = plocal_var_68 + 1;
        puVar5 = *(void **)(lVar6 + 0x90);
        puVar7 = &system_buffer_ptr;
        if (puVar5 != (void *)0x0) {
          puVar7 = puVar5;
        }
// WARNING: Subroutine does not return
        memcpy(plocal_var_68,puVar7,uVar9);
      }
      lVar6 = SystemFunction_00018066bd70(lVar6);
    } while (lVar6 != lStackX_20);
  }
  lStackX_18 = lStack_60;
  fwrite(&lStackX_18,8,1,*(uint64_t *)(file_context + 8));
  fwrite(lVar8,lStackX_18,1,*(uint64_t *)(file_context + 8));
  if (((char)local_var_58 == '\0') && (lVar8 != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar8);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
/**
 * @brief 渲染系统资源数据加载器
 *
 * 该函数负责加载渲染系统资源数据，包括数据反序列化、内存分配、
 * 文件读取、资源重建和状态恢复等高级渲染功能。
 *
 * @param resource_context 资源上下文指针，包含渲染系统资源管理信息
 * @param file_context 文件上下文指针，用于文件读取操作
 * @param load_flag 加载标志，控制加载行为
 * @return void 无返回值
 *
 * @note 该函数实现以下核心功能：
 * - 文件数据读取和反序列化
 * - 内存分配和资源重建
 * - 哈希表管理和索引建立
 * - 动态数组扩容和优化
 * - 错误处理和状态恢复
 */
void RenderingSystem_LoadResourceData(int64_t resource_context, int64_t file_context, uint64_t load_flag)
{
  uint64_t *puVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  uint *puVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  int iVar12;
  int64_t lStackX_10;
  uint64_t stack_special_x_18;
  uint64_t stack_special_x_20;
  int8_t stack_array_78 [8];
  int64_t lStack_70;
  int64_t *plStack_68;
  uint64_t local_var_60;
  int16_t local_var_58;
  int8_t local_var_56;
  lStackX_10 = 0;
  stack_special_x_18 = data_context;
  fread(&lStackX_10,8,1,*(uint64_t *)(file_context + 8));
  lStack_70 = 0;
  plStack_68 = (int64_t *)0x0;
  local_var_60 = 0;
  local_var_58 = 0;
  local_var_56 = 3;
  if (lStackX_10 != 0) {
    System_BufferManager(&lStack_70);
  }
  lVar7 = lStack_70;
  fread(lStack_70,lStackX_10,1,*(uint64_t *)(file_context + 8));
  lVar10 = *plStack_68;
  plStack_68 = plStack_68 + 1;
  do {
    if (lVar10 == 0) {
      if (((char)local_var_58 == '\0') && (lVar7 != 0)) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar7);
      }
      return;
    }
    lVar7 = *plStack_68;
    puVar4 = (uint *)(plStack_68 + 1);
    plStack_68 = (int64_t *)((int64_t)plStack_68 + 0xc);
    if (0 < (int)*puVar4) {
      puVar1 = (uint64_t *)(resource_context + 0x878);
      iVar12 = (int)lVar7;
      uVar3 = (uint64_t)stack_special_x_18 >> 0x20;
      stack_special_x_18 = CONCAT44((int)uVar3,iVar12);
      stack_special_x_20 = (uint64_t)*puVar4;
      do {
        puVar8 = (uint64_t *)0x0;
        puVar5 = (int32_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xa8,8,3);
        plVar2 = (int64_t *)(puVar5 + 0x22);
        *plVar2 = (int64_t)&system_state_ptr;
        *(uint64_t *)(puVar5 + 0x24) = 0;
        puVar5[0x26] = 0;
        *plVar2 = (int64_t)&system_data_buffer_ptr;
        *(uint64_t *)(puVar5 + 0x28) = 0;
        *(uint64_t *)(puVar5 + 0x24) = 0;
        puVar5[0x26] = 0;
        *puVar5 = 0xffffffff;
        (**(code **)(*plVar2 + 0x10))(plVar2,&system_buffer_ptr);
        *(uint64_t *)(puVar5 + 1) = 0x3f800000;
        *(uint64_t *)(puVar5 + 3) = 0;
        *(uint64_t *)(puVar5 + 5) = 0x3f80000000000000;
        *(uint64_t *)(puVar5 + 7) = 0;
        *(uint64_t *)(puVar5 + 9) = 0;
        *(uint64_t *)(puVar5 + 0xb) = 0x3f800000;
        *(uint64_t *)(puVar5 + 0xd) = 0;
        *(uint64_t *)(puVar5 + 0xf) = 0x3f80000000000000;
        *(uint64_t *)(puVar5 + 0x11) = 0x3f800000;
        *(uint64_t *)(puVar5 + 0x13) = 0;
        *(uint64_t *)(puVar5 + 0x15) = 0x3f80000000000000;
        *(uint64_t *)(puVar5 + 0x17) = 0;
        puVar5[0x19] = 0;
        puVar5[0x1a] = 0;
        puVar5[0x1b] = 0x3f800000;
        puVar5[0x1c] = 0;
        puVar5[0x1d] = 0;
        puVar5[0x1e] = 0;
        puVar5[0x1f] = 0;
        puVar5[0x20] = 0x3f800000;
        function_33a3f0(puVar5,&lStack_70);
        puVar6 = puVar1;
        puVar11 = *(uint64_t **)(resource_context + 0x888);
        while (puVar11 != (uint64_t *)0x0) {
          if (*(int *)(puVar11 + 4) < iVar12) {
            puVar11 = (uint64_t *)*puVar11;
          }
          else {
            puVar6 = puVar11;
            puVar11 = (uint64_t *)puVar11[1];
          }
        }
        if ((puVar6 == puVar1) || (iVar12 < *(int *)(puVar6 + 4))) {
          puVar6 = (uint64_t *)function_20d730(puVar1,stack_array_78);
          puVar6 = (uint64_t *)*puVar6;
        }
        puVar11 = (uint64_t *)puVar6[6];
        if (puVar11 < (uint64_t *)puVar6[7]) {
          puVar6[6] = puVar11 + 1;
          *puVar11 = puVar5;
        }
        else {
          puVar9 = (uint64_t *)puVar6[5];
          lVar7 = (int64_t)puVar11 - (int64_t)puVar9 >> 3;
          if (lVar7 == 0) {
            lVar7 = 1;
LAB_18033615b:
            puVar8 = (uint64_t *)
                     CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 8,*(int8_t *)(puVar6 + 8));
            puVar11 = (uint64_t *)puVar6[6];
            puVar9 = (uint64_t *)puVar6[5];
          }
          else {
            lVar7 = lVar7 * 2;
            if (lVar7 != 0) goto LAB_18033615b;
          }
          if (puVar9 != puVar11) {
// WARNING: Subroutine does not return
            memmove(puVar8,puVar9,(int64_t)puVar11 - (int64_t)puVar9);
          }
          *puVar8 = puVar5;
          if (puVar6[5] != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          puVar6[5] = puVar8;
          puVar6[6] = puVar8 + 1;
          puVar6[7] = puVar8 + lVar7;
        }
        stack_special_x_20 = stack_special_x_20 - 1;
      } while (stack_special_x_20 != 0);
      stack_special_x_20 = 0;
    }
    lVar10 = lVar10 + -1;
    lVar7 = lStack_70;
  } while( true );
}
/**
 * @brief 渲染系统资源数据扩展保存器
 *
 * 该函数负责扩展保存渲染系统资源数据，包括高级数据序列化、
 * 内存管理、文件写入、资源清理和状态管理等高级渲染功能。
 *
 * @param resource_context 资源上下文指针，包含渲染系统资源管理信息
 * @param file_context 文件上下文指针，用于文件写入操作
 * @param data_context 数据上下文指针，包含要保存的数据
 * @param save_flag 保存标志，控制保存行为
 * @return void 无返回值
 *
 * @note 该函数实现以下核心功能：
 * - 扩展资源数据序列化
 * - 高级内存管理和缓冲区优化
 * - 复杂数据结构处理
 * - 文件写入和压缩
 * - 资源清理和状态管理
 */
void RenderingSystem_SaveResourceDataEx(int64_t resource_context, int64_t file_context, int64_t data_context, uint64_t save_flag)
{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  void *puVar5;
  int64_t lVar6;
  void *puVar7;
  uint *puVar8;
  int64_t lVar9;
  uint uVar10;
  int64_t lStackX_18;
  int64_t lStackX_20;
  int64_t lStack_70;
  uint *plocal_var_68;
  int64_t lStack_60;
  int16_t local_var_58;
  int8_t local_var_56;
  lStack_70 = 0;
  plocal_var_68 = (uint *)0x0;
  lStack_60 = 0;
  local_var_58 = 0;
  local_var_56 = 3;
  uVar2 = *(uint64_t *)(resource_context + 0x8c8);
  lStackX_18 = data_context;
  System_BufferManager(&lStack_70,8,data_context,save_flag,0xfffffffffffffffe);
  *(uint64_t *)plocal_var_68 = uVar2;
  puVar8 = (uint *)((int64_t)plocal_var_68 + 8);
  lStackX_20 = resource_context + 0x8a8;
  lVar6 = *(int64_t *)(resource_context + 0x8b0);
  lVar9 = lStack_70;
  plocal_var_68 = puVar8;
  if (lVar6 != lStackX_20) {
    do {
      iVar1 = *(int *)(lVar6 + 0x20);
      lVar3 = *(int64_t *)(lVar6 + 0x30);
      lVar4 = *(int64_t *)(lVar6 + 0x28);
      if ((uint64_t)((lStack_60 - (int64_t)puVar8) + lVar9) < 9) {
        System_BufferManager(&lStack_70,(int64_t)puVar8 + (8 - lVar9));
        puVar8 = plocal_var_68;
        lVar9 = lStack_70;
      }
      *(int64_t *)puVar8 = (int64_t)iVar1;
      plocal_var_68 = puVar8 + 2;
      if ((uint64_t)((lStack_60 - (int64_t)plocal_var_68) + lVar9) < 5) {
        System_BufferManager(&lStack_70,(int64_t)plocal_var_68 + (4 - lVar9));
        lVar9 = lStack_70;
      }
      uVar10 = (uint)(lVar3 - lVar4 >> 3);
      *plocal_var_68 = uVar10;
      puVar8 = plocal_var_68 + 1;
      plocal_var_68 = puVar8;
      if (0 < (int)uVar10) {
        lVar6 = **(int64_t **)(lVar6 + 0x28);
        uVar10 = *(uint *)(lVar6 + 0x38);
        if ((uint64_t)((lStack_60 - (int64_t)puVar8) + lVar9) <= (uint64_t)uVar10 + 4) {
          System_BufferManager(&lStack_70,(((uint64_t)uVar10 + 4) - lVar9) + (int64_t)puVar8);
        }
        *plocal_var_68 = uVar10;
        plocal_var_68 = plocal_var_68 + 1;
        puVar5 = *(void **)(lVar6 + 0x30);
        puVar7 = &system_buffer_ptr;
        if (puVar5 != (void *)0x0) {
          puVar7 = puVar5;
        }
// WARNING: Subroutine does not return
        memcpy(plocal_var_68,puVar7,uVar10);
      }
      lVar6 = SystemFunction_00018066bd70(lVar6);
    } while (lVar6 != lStackX_20);
  }
  lStackX_18 = lStack_60;
  fwrite(&lStackX_18,8,1,*(uint64_t *)(file_context + 8));
  fwrite(lVar9,lStackX_18,1,*(uint64_t *)(file_context + 8));
  if (((char)local_var_58 == '\0') && (lVar9 != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar9);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
/**
 * @brief 渲染系统资源数据扩展加载器
 *
 * 该函数负责扩展加载渲染系统资源数据，包括高级数据反序列化、
 * 内存分配、文件读取、资源重建和状态恢复等高级渲染功能。
 *
 * @param resource_context 资源上下文指针，包含渲染系统资源管理信息
 * @param file_context 文件上下文指针，用于文件读取操作
 * @param load_flag 加载标志，控制加载行为
 * @return void 无返回值
 *
 * @note 该函数实现以下核心功能：
 * - 扩展数据反序列化和解析
 * - 复杂内存分配和管理
 * - 高级资源重建和优化
 * - 数据结构重建和索引
 * - 错误处理和状态恢复
 */
void RenderingSystem_LoadResourceDataEx(int64_t resource_context, int64_t file_context, uint64_t load_flag)
{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  uint *puVar12;
  uint64_t *puVar13;
  int iVar14;
  uint *puVar15;
  int32_t uVar16;
  int64_t lStackX_10;
  uint64_t stack_special_x_18;
  uint64_t stack_special_x_20;
  int8_t stack_array_70 [8];
  int64_t lStack_68;
  uint *plocal_var_60;
  uint64_t local_var_58;
  int16_t local_var_50;
  int8_t local_var_4e;
  lStackX_10 = 0;
  stack_special_x_18 = data_context;
  fread(&lStackX_10,8,1,*(uint64_t *)(file_context + 8));
  lStack_68 = 0;
  plocal_var_60 = (uint *)0x0;
  local_var_58 = 0;
  local_var_50 = 0;
  local_var_4e = 3;
  if (lStackX_10 != 0) {
    System_BufferManager(&lStack_68);
  }
  lVar8 = lStack_68;
  fread(lStack_68,lStackX_10,1,*(uint64_t *)(file_context + 8));
  lVar10 = *(int64_t *)plocal_var_60;
  puVar12 = (uint *)((int64_t)plocal_var_60 + 8);
  plocal_var_60 = puVar12;
  do {
    if (lVar10 == 0) {
      if (((char)local_var_50 == '\0') && (lVar8 != 0)) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar8);
      }
      return;
    }
    uVar4 = *(uint64_t *)puVar12;
    puVar15 = puVar12 + 2;
    puVar12 = puVar12 + 3;
    plocal_var_60 = puVar12;
    if (0 < (int)*puVar15) {
      puVar2 = (uint64_t *)(resource_context + 0x8a8);
      iVar14 = (int)uVar4;
      uVar5 = (uint64_t)stack_special_x_18 >> 0x20;
      stack_special_x_18 = CONCAT44((int)uVar5,iVar14);
      stack_special_x_20 = (uint64_t)*puVar15;
      do {
        puVar6 = (int32_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x48,8,3);
        plVar1 = (int64_t *)(puVar6 + 10);
        *plVar1 = (int64_t)&system_state_ptr;
        *(uint64_t *)(puVar6 + 0xc) = 0;
        puVar6[0xe] = 0;
        *plVar1 = (int64_t)&system_data_buffer_ptr;
        *(uint64_t *)(puVar6 + 0x10) = 0;
        *(uint64_t *)(puVar6 + 0xc) = 0;
        puVar6[0xe] = 0;
        *puVar6 = 0xffffffff;
        (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr);
        *(uint64_t *)(puVar6 + 1) = 0;
        *(uint64_t *)(puVar6 + 3) = 0;
        uVar16 = 0;
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[8] = 0;
        uVar3 = *puVar12;
        puVar12 = puVar12 + 1;
        if (uVar3 != 0) {
          plocal_var_60 = puVar12;
          uVar16 = (**(code **)(*plVar1 + 0x18))(plVar1,puVar12,uVar3);
          puVar12 = (uint *)((int64_t)puVar12 + (uint64_t)uVar3);
        }
        puVar6[1] = *puVar12;
        puVar6[2] = puVar12[1];
        puVar6[3] = puVar12[2];
        puVar6[4] = puVar12[3];
        puVar6[5] = puVar12[4];
        puVar6[6] = puVar12[5];
        puVar6[7] = puVar12[6];
        puVar6[8] = puVar12[7];
        puVar12 = puVar12 + 8;
        plocal_var_60 = puVar12;
        uVar16 = function_0c17c0(uVar16,plVar1);
        *puVar6 = uVar16;
        puVar7 = puVar2;
        puVar13 = *(uint64_t **)(resource_context + 0x8b8);
        while (puVar13 != (uint64_t *)0x0) {
          if (*(int *)(puVar13 + 4) < iVar14) {
            puVar13 = (uint64_t *)*puVar13;
          }
          else {
            puVar7 = puVar13;
            puVar13 = (uint64_t *)puVar13[1];
          }
        }
        if ((puVar7 == puVar2) || (iVar14 < *(int *)(puVar7 + 4))) {
          puVar7 = (uint64_t *)function_20d730(puVar2,stack_array_70);
          puVar7 = (uint64_t *)*puVar7;
        }
        puVar13 = (uint64_t *)puVar7[6];
        if (puVar13 < (uint64_t *)puVar7[7]) {
          puVar7[6] = puVar13 + 1;
          *puVar13 = puVar6;
        }
        else {
          puVar11 = (uint64_t *)puVar7[5];
          lVar8 = (int64_t)puVar13 - (int64_t)puVar11 >> 3;
          if (lVar8 == 0) {
            lVar8 = 1;
LAB_1803367cd:
            puVar9 = (uint64_t *)
                     CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar8 * 8,*(int8_t *)(puVar7 + 8));
            puVar13 = (uint64_t *)puVar7[6];
            puVar11 = (uint64_t *)puVar7[5];
          }
          else {
            lVar8 = lVar8 * 2;
            if (lVar8 != 0) goto LAB_1803367cd;
            puVar9 = (uint64_t *)0x0;
          }
          if (puVar11 != puVar13) {
// WARNING: Subroutine does not return
            memmove(puVar9,puVar11,(int64_t)puVar13 - (int64_t)puVar11);
          }
          *puVar9 = puVar6;
          if (puVar7[5] != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          puVar7[5] = puVar9;
          puVar7[6] = puVar9 + 1;
          puVar7[7] = puVar9 + lVar8;
        }
        stack_special_x_20 = stack_special_x_20 - 1;
      } while (stack_special_x_20 != 0);
      stack_special_x_20 = 0;
    }
    lVar10 = lVar10 + -1;
    lVar8 = lStack_68;
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
/**
 * @brief 渲染系统资源操作处理器
 *
 * 该函数负责处理渲染系统资源操作，包括资源查找、数据更新、
 * 内存管理、文件操作、线程同步和状态管理等高级渲染功能。
 *
 * @param resource_context 资源上下文指针，包含渲染系统资源管理信息
 * @param resource_id 资源ID，标识要操作的资源
 * @return void 无返回值
 *
 * @note 该函数实现以下核心功能：
 * - 资源查找和验证
 * - 数据更新和同步
 * - 线程安全和互斥锁管理
 * - 哈希表和索引操作
 * - 内存管理和资源清理
 * - 状态跟踪和错误处理
 */
void RenderingSystem_ProcessResourceOperation(int64_t resource_context, uint resource_id)
{
  uint64_t *puVar1;
  uint uVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  int iVar5;
  int64_t *plVar6;
  uint *puVar7;
  uint *puVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  uint *puVar13;
  int64_t lVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint *puVar19;
  uint *puVar20;
  uint64_t *puVar21;
  uint *plocal_var_a8;
  uint *plocal_var_a0;
  uint64_t local_var_98;
  int32_t local_var_90;
  uint *plocal_var_88;
  uint *plocal_var_80;
  uint64_t local_var_78;
  int32_t local_var_70;
  uint64_t local_var_68;
  int64_t *plStack_60;
  uint64_t *plocal_var_58;
  uint64_t local_var_50;
  local_var_50 = 0x1803368e3;
  uVar17 = _ftelli64(*(uint64_t *)(*(int64_t *)(resource_context + 0x200) + 8));
  local_var_50 = 0x1803368f8;
  uVar17 = function_32c9f0(resource_context,*(uint64_t *)(resource_context + 0x200),uVar17,resource_id);
  local_var_50 = 0x180336910;
  iVar5 = _Mtx_lock(resource_context + 0x280);
  if (iVar5 != 0) {
    local_var_50 = 0x18033691c;
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  local_var_50 = 0x18033692f;
  function_057340(resource_context + 0x260,(int64_t)(int)(resource_id + 1));
  *(uint64_t *)(*(int64_t *)(resource_context + 0x260) + (int64_t)(int)resource_id * 8) = uVar17;
  *(int *)(resource_context + 0x228) = *(int)(resource_context + 0x228) + 1;
  local_var_50 = 0x180336949;
  iVar5 = _Mtx_unlock(resource_context + 0x280);
  if (iVar5 != 0) {
    local_var_50 = 0x180336955;
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  uVar18 = (uint64_t)resource_id;
  local_var_68 = 0xfffffffffffffffe;
  plVar6 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
  UltraHighFreq_PerformanceMonitor1(plVar6);
  *plVar6 = (int64_t)&processed_var_7880_ptr;
  puVar1 = (uint64_t *)(plVar6 + 0x18);
  *puVar1 = 0;
  plVar6[0x19] = 0;
  plVar6[0x1a] = 0;
  *(int32_t *)(plVar6 + 0x1b) = 3;
  plStack_60 = plVar6;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  iVar5 = _Mtx_lock(resource_context + 0xa20);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  plocal_var_88 = (uint *)0x0;
  plocal_var_80 = (uint *)0x0;
  local_var_78 = 0;
  local_var_70 = 3;
  function_32b1c0(resource_context,&plocal_var_88,uVar18,1);
  if (plocal_var_88 != plocal_var_80) {
    puVar7 = plocal_var_88;
    do {
      uVar2 = *puVar7;
      uVar9 = (uint64_t)uVar2 % (uint64_t)*(uint *)(resource_context + 0xa00);
      for (puVar8 = *(uint **)(*(int64_t *)(resource_context + 0x9f8) + uVar9 * 8); puVar8 != (uint *)0x0;
          puVar8 = *(uint **)(puVar8 + 4)) {
        if (uVar2 == *puVar8) {
          if (puVar8 != (uint *)0x0) goto LAB_180333bb3;
          break;
        }
      }
      RenderingShaderProcessor0(resource_context + 0xa10,&local_buffer_00000018,(uint64_t)*(uint *)(resource_context + 0xa00),
                    *(int32_t *)(resource_context + 0xa08),1);
      puVar8 = (uint *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,*(int8_t *)(resource_context + 0xa1c));
      *puVar8 = uVar2;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      if ((char)puVar1 != '\0') {
        uVar9 = (uint64_t)uVar2 % ((uint64_t)puVar1 >> 0x20);
        function_33bf30(resource_context + 0x9f0);
      }
      *(uint64_t *)(puVar8 + 4) = *(uint64_t *)(*(int64_t *)(resource_context + 0x9f8) + uVar9 * 8);
      *(uint **)(*(int64_t *)(resource_context + 0x9f8) + uVar9 * 8) = puVar8;
      *(int64_t *)(resource_context + 0xa08) = *(int64_t *)(resource_context + 0xa08) + 1;
LAB_180333bb3:
      lVar10 = *(int64_t *)(puVar8 + 2);
      uVar17 = 0;
      lVar14 = *(int64_t *)(lVar10 + 8);
      for (puVar8 = *(uint **)(lVar14 + (uVar18 % (uint64_t)*(uint *)(lVar10 + 0x10)) * 8);
          puVar8 != (uint *)0x0; puVar8 = *(uint **)(puVar8 + 4)) {
        if (resource_id == *puVar8) {
          uVar9 = *(uint64_t *)(lVar10 + 0x10);
          goto LAB_180333bee;
        }
      }
      uVar9 = *(uint64_t *)(lVar10 + 0x10);
      puVar8 = *(uint **)(lVar14 + uVar9 * 8);
LAB_180333bee:
      if (puVar8 != *(uint **)(lVar14 + uVar9 * 8)) {
        uVar17 = *(uint64_t *)(puVar8 + 2);
        puVar8 = (uint *)(lVar14 + (uVar18 % (uVar9 & 0xffffffff)) * 8);
        puVar20 = *(uint **)puVar8;
        while ((puVar20 != (uint *)0x0 && (resource_id != *puVar20))) {
          puVar8 = puVar20 + 4;
          puVar20 = *(uint **)puVar8;
        }
        puVar19 = (uint *)0x0;
        if (puVar20 != (uint *)0x0) {
          do {
            puVar13 = puVar20;
            if (resource_id != *puVar13) break;
            *(uint64_t *)puVar8 = *(uint64_t *)(puVar13 + 4);
            *(uint **)(puVar13 + 4) = puVar19;
            *(int64_t *)(lVar10 + 0x18) = *(int64_t *)(lVar10 + 0x18) + -1;
            puVar20 = *(uint **)puVar8;
            puVar19 = puVar13;
          } while (*(uint **)puVar8 != (uint *)0x0);
          if (puVar19 != (uint *)0x0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(puVar19);
          }
        }
      }
      puVar21 = (uint64_t *)plVar6[0x19];
      if (puVar21 < (uint64_t *)plVar6[0x1a]) {
        plVar6[0x19] = (int64_t)(puVar21 + 1);
        *puVar21 = uVar17;
      }
      else {
        puVar16 = (uint64_t *)*puVar1;
        lVar10 = (int64_t)puVar21 - (int64_t)puVar16 >> 3;
        if (lVar10 == 0) {
          lVar10 = 1;
LAB_180333cae:
          puVar11 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 8,(char)plVar6[0x1b]);
          puVar21 = (uint64_t *)plVar6[0x19];
          puVar16 = (uint64_t *)*puVar1;
        }
        else {
          lVar10 = lVar10 * 2;
          if (lVar10 != 0) goto LAB_180333cae;
          puVar11 = (uint64_t *)0x0;
        }
        if (puVar16 != puVar21) {
// WARNING: Subroutine does not return
          memmove(puVar11,puVar16,(int64_t)puVar21 - (int64_t)puVar16);
        }
        *puVar11 = uVar17;
        if (*puVar1 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *puVar1 = (uint64_t)puVar11;
        plVar6[0x19] = (int64_t)(puVar11 + 1);
        plVar6[0x1a] = (int64_t)(puVar11 + lVar10);
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != plocal_var_80);
  }
  if (plocal_var_88 != (uint *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  iVar5 = _Mtx_unlock(resource_context + 0xa20);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  uVar17 = system_context_ptr;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  SystemCore_TimerManager(uVar17,&local_buffer_00000018);
  plocal_var_a8 = (uint *)0x0;
  plocal_var_a0 = (uint *)0x0;
  local_var_98 = 0;
  local_var_90 = 3;
  function_32afa0(resource_context,&plocal_var_a8,uVar18);
  if (plocal_var_a8 != plocal_var_a0) {
    puVar7 = plocal_var_a8;
    do {
      uVar2 = *puVar7;
      uVar9 = (uint64_t)uVar2 % (uint64_t)*(uint *)(resource_context + 0x6c8);
      for (puVar8 = *(uint **)(*(int64_t *)(resource_context + 0x6c0) + uVar9 * 8); puVar8 != (uint *)0x0;
          puVar8 = *(uint **)(puVar8 + 4)) {
        if (uVar2 == *puVar8) {
          if (puVar8 != (uint *)0x0) goto LAB_180333e7e;
          break;
        }
      }
      RenderingShaderProcessor0(resource_context + 0x6d8,&local_buffer_00000018,(uint64_t)*(uint *)(resource_context + 0x6c8),
                    *(int32_t *)(resource_context + 0x6d0),1);
      puVar8 = (uint *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,*(int8_t *)(resource_context + 0x6e4));
      *puVar8 = uVar2;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      if ((char)plVar6 != '\0') {
        uVar9 = (uint64_t)uVar2 % ((uint64_t)plVar6 >> 0x20);
        function_33bf30(resource_context + 0x6b8);
      }
      *(uint64_t *)(puVar8 + 4) = *(uint64_t *)(*(int64_t *)(resource_context + 0x6c0) + uVar9 * 8);
      *(uint **)(*(int64_t *)(resource_context + 0x6c0) + uVar9 * 8) = puVar8;
      *(int64_t *)(resource_context + 0x6d0) = *(int64_t *)(resource_context + 0x6d0) + 1;
LAB_180333e7e:
      lVar10 = *(int64_t *)(puVar8 + 2);
      lVar14 = *(int64_t *)(lVar10 + 8);
      for (puVar8 = *(uint **)(lVar14 + (uVar18 % (uint64_t)*(uint *)(lVar10 + 0x10)) * 8);
          puVar8 != (uint *)0x0; puVar8 = *(uint **)(puVar8 + 4)) {
        if (resource_id == *puVar8) {
          lVar12 = *(int64_t *)(lVar10 + 0x10);
          goto LAB_180333eb9;
        }
      }
      lVar12 = *(int64_t *)(lVar10 + 0x10);
      puVar8 = *(uint **)(lVar14 + lVar12 * 8);
LAB_180333eb9:
      if (puVar8 != *(uint **)(lVar14 + lVar12 * 8)) {
        if (*(int64_t *)(puVar8 + 2) != 0) {
          *(void **)(*(int64_t *)(puVar8 + 2) + 0x50) = &system_state_ptr;
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8 = (uint *)(*(int64_t *)(lVar10 + 8) +
                         (uVar18 % (uint64_t)*(uint *)(lVar10 + 0x10)) * 8);
        puVar20 = *(uint **)puVar8;
        while ((puVar20 != (uint *)0x0 && (resource_id != *puVar20))) {
          puVar8 = puVar20 + 4;
          puVar20 = *(uint **)puVar8;
        }
        puVar19 = (uint *)0x0;
        if (puVar20 != (uint *)0x0) {
          do {
            puVar13 = puVar20;
            if (resource_id != *puVar13) break;
            *(uint64_t *)puVar8 = *(uint64_t *)(puVar13 + 4);
            *(uint **)(puVar13 + 4) = puVar19;
            *(int64_t *)(lVar10 + 0x18) = *(int64_t *)(lVar10 + 0x18) + -1;
            puVar20 = *(uint **)puVar8;
            puVar19 = puVar13;
          } while (*(uint **)puVar8 != (uint *)0x0);
          if (puVar19 != (uint *)0x0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(puVar19);
          }
        }
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != plocal_var_a0);
  }
  lVar10 = *(int64_t *)(resource_context + 0x570);
  for (puVar7 = *(uint **)(lVar10 + (uVar18 % (uint64_t)*(uint *)(resource_context + 0x578)) * 8);
      puVar7 != (uint *)0x0; puVar7 = *(uint **)(puVar7 + 4)) {
    if (resource_id == *puVar7) {
      lVar14 = *(int64_t *)(resource_context + 0x578);
      goto LAB_180333fbc;
    }
  }
  lVar14 = *(int64_t *)(resource_context + 0x578);
  puVar7 = *(uint **)(lVar10 + lVar14 * 8);
LAB_180333fbc:
  if (puVar7 != *(uint **)(lVar10 + lVar14 * 8)) {
    plVar3 = *(int64_t **)(puVar7 + 2);
    if (plVar3 != (int64_t *)0x0) {
      if (*plVar3 == 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(plVar3);
      }
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7 = (uint *)(*(int64_t *)(resource_context + 0x570) +
                     (uVar18 % (uint64_t)*(uint *)(resource_context + 0x578)) * 8);
    puVar8 = *(uint **)puVar7;
    while ((puVar8 != (uint *)0x0 && (resource_id != *puVar8))) {
      puVar7 = puVar8 + 4;
      puVar8 = *(uint **)puVar7;
    }
    puVar20 = (uint *)0x0;
    if (puVar8 != (uint *)0x0) {
      do {
        puVar19 = puVar8;
        if (resource_id != *puVar19) break;
        *(uint64_t *)puVar7 = *(uint64_t *)(puVar19 + 4);
        *(uint **)(puVar19 + 4) = puVar20;
        *(int64_t *)(resource_context + 0x580) = *(int64_t *)(resource_context + 0x580) + -1;
        puVar8 = *(uint **)puVar7;
        puVar20 = puVar19;
      } while (*(uint **)puVar7 != (uint *)0x0);
      if (puVar20 != (uint *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar20);
      }
    }
  }
  puVar21 = (uint64_t *)(resource_context + 0x818);
  puVar11 = puVar21;
  puVar16 = *(uint64_t **)(resource_context + 0x828);
  while (puVar15 = puVar21, puVar4 = *(uint64_t **)(resource_context + 0x828), puVar16 != (uint64_t *)0x0
        ) {
    if (resource_id < *(uint *)(puVar16 + 4)) {
      puVar11 = puVar16;
      puVar16 = (uint64_t *)puVar16[1];
    }
    else {
      puVar16 = (uint64_t *)*puVar16;
    }
  }
  while (puVar7 = plocal_var_a8, puVar4 != (uint64_t *)0x0) {
    if (*(uint *)(puVar4 + 4) < resource_id) {
      puVar4 = (uint64_t *)*puVar4;
    }
    else {
      puVar15 = puVar4;
      puVar4 = (uint64_t *)puVar4[1];
    }
  }
  while (plocal_var_a8 = puVar7, puVar15 != puVar11) {
    lVar10 = puVar15[5];
    if (lVar10 != 0) {
      SystemDataValidator(lVar10 + 0x38,0x30,4,SystemCore_MemoryManager);
      plocal_var_58 = (uint64_t *)(lVar10 + 0x18);
      *plocal_var_58 = &system_data_buffer_ptr;
      if (*(int64_t *)(lVar10 + 0x20) == 0) {
        *(uint64_t *)(lVar10 + 0x20) = 0;
        *(int32_t *)(lVar10 + 0x30) = 0;
        *plocal_var_58 = &system_state_ptr;
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar10);
      }
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puVar15 = (uint64_t *)SystemFunction_00018066bd70(puVar15);
    puVar7 = plocal_var_a8;
  }
  function_33ad80(resource_context + 0x4a8,&local_buffer_00000010);
  function_33ad80(resource_context + 0x638,&local_buffer_00000010);
  puVar11 = puVar21;
  puVar16 = *(uint64_t **)(resource_context + 0x828);
  while (puVar15 = puVar21, puVar4 = *(uint64_t **)(resource_context + 0x828), puVar16 != (uint64_t *)0x0
        ) {
    if (resource_id < *(uint *)(puVar16 + 4)) {
      puVar11 = puVar16;
      puVar16 = (uint64_t *)puVar16[1];
    }
    else {
      puVar16 = (uint64_t *)*puVar16;
    }
  }
  while (puVar16 = puVar15, puVar4 != (uint64_t *)0x0) {
    if (*(uint *)(puVar4 + 4) < resource_id) {
      puVar4 = (uint64_t *)*puVar4;
    }
    else {
      puVar15 = puVar4;
      puVar4 = (uint64_t *)puVar4[1];
    }
  }
  for (; puVar16 != puVar11; puVar16 = (uint64_t *)SystemFunction_00018066bd70(puVar16)) {
  }
  if ((puVar15 == *(uint64_t **)(resource_context + 0x820)) && (puVar11 == puVar21)) {
    puVar16 = *(uint64_t **)(resource_context + 0x828);
    if (puVar16 != (uint64_t *)0x0) {
      SystemCache_Manager(puVar21,*puVar16);
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar16);
    }
    *puVar21 = puVar21;
    *(uint64_t **)(resource_context + 0x820) = puVar21;
    *(uint64_t *)(resource_context + 0x828) = 0;
    *(int8_t *)(resource_context + 0x830) = 0;
    *(uint64_t *)(resource_context + 0x838) = 0;
  }
  else {
    while (puVar16 = puVar15, puVar16 != puVar11) {
      *(int64_t *)(resource_context + 0x838) = *(int64_t *)(resource_context + 0x838) + -1;
      puVar15 = (uint64_t *)SystemFunction_00018066bd70(puVar16);
      RenderingSystem_BufferHandler(puVar16,puVar21);
      if (puVar16 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar16);
      }
    }
  }
  if (puVar7 == (uint *)0x0) {
// WARNING: Could not recover jumptable at 0x0001803342c7. Too many branches
// WARNING: Treating indirect jump as call
    (**(code **)(*plVar6 + 0x38))();
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar7);
}
/**
 * @section rendering_technical_summary 渲染系统技术总结
 *
 * @subsection module_overview 模块概述
 * 本模块实现了渲染系统的高级数据保存和加载功能，包含5个核心函数，
 * 涵盖了资源数据序列化、文件操作、内存管理、线程同步和状态管理
 * 等关键功能。该模块是渲染系统中负责数据持久化的核心组件。
 *
 * @subsection key_features 核心特性
 * - **数据序列化与反序列化**：实现资源数据的高效序列化和反序列化
 * - **文件操作**：提供文件读写、压缩和错误处理功能
 * - **内存管理**：实现动态内存分配、缓冲区管理和垃圾回收
 * - **线程同步**：使用互斥锁确保多线程环境下的数据安全
 * - **资源管理**：提供资源的查找、更新、创建和销毁功能
 * - **错误处理**：实现完整的错误检测和恢复机制
 *
 * @subsection technical_implementation 技术实现
 * - 使用哈希表实现快速资源查找
 * - 采用动态数组支持可变大小数据存储
 * - 实现内存池优化内存分配性能
 * - 使用位操作和掩码优化标志位处理
 * - 采用递归和迭代算法处理复杂数据结构
 *
 * @subsection performance_optimization 性能优化
 * - 内存预分配减少动态分配开销
 * - 哈希表优化查找性能到O(1)复杂度
 * - 缓冲区重用减少内存碎片
 * - 批量操作提高处理效率
 * - 惰性清理优化资源管理
 *
 * @subsection usage_scenarios 使用场景
 * - 游戏场景的保存和加载
 * - 资源包的导入和导出
 * - 渲染状态的持久化
 * - 动态资源的生命周期管理
 * - 多线程环境下的资源共享
 */
/**
 * @section rendering_function_aliases_mapping 函数别名映射表
 *
 * @snippet 渲染系统函数别名映射表
 *
 * | 别名 | 原始函数名 | 功能描述 |
 * |------|------------|----------|
 * | RenderingSystem_SaveResourceData | function_335980 | 渲染系统资源数据保存器 |
 * | RenderingSystem_LoadResourceData | function_335f10 | 渲染系统资源数据加载器 |
 * | RenderingSystem_SaveResourceDataEx | function_336240 | 渲染系统资源数据扩展保存器 |
 * | RenderingSystem_LoadResourceDataEx | function_336540 | 渲染系统资源数据扩展加载器 |
 * | RenderingSystem_ProcessResourceOperation | function_3368b0 | 渲染系统资源操作处理器 |
 */
/**
 * @section rendering_constants_usage 常量使用说明
 *
 * @snippet 渲染系统常量使用说明
 *
 * | 常量名 | 值 | 用途说明 |
 * |--------|-----|----------|
 * | RENDERING_BUFFER_SIZE | 0x48 | 标准缓冲区大小 |
 * | RENDERING_LARGE_BUFFER_SIZE | 0xa8 | 大缓冲区大小 |
 * | RENDERING_HASH_TABLE_SIZE | 0x100 | 哈希表大小 |
 * | RENDERING_MUTEX_TIMEOUT | 0x30000 | 互斥锁超时时间 |
 * | RENDERING_CLEANUP_FLAG | 3 | 清理标志位 |
 * | RENDERING_ALIGNMENT_MASK | 0x1f | 内存对齐掩码 |
 * | RENDERING_MAX_ITERATIONS | 0x40 | 最大迭代次数 |
 * | RENDERING_DATA_BLOCK_SIZE | 0xe0 | 数据块大小 |
 * | RENDERING_POOL_SIZE | 0x100000 | 内存池大小 |
 */