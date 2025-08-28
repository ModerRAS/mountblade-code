#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part024.c - 核心引擎文件操作和内存管理模块
// 本文件包含文件创建、IO完成端口、内存分配、资源清理等核心功能

// 函数: 创建文件句柄并关联到IO完成端口
void create_file_with_completion_port(int64_t engine_context, int64_t file_params)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uint uVar7;
  int8_t auStack_2e8 [32];
  uint64_t uStack_2c8;
  int32_t uStack_2c0;
  uint64_t uStack_2b8;
  int64_t lStack_2a8;
  uint64_t uStack_2a0;
  int64_t alStack_288 [4];
  void *puStack_268;
  void *puStack_260;
  uint64_t uStack_48;
  uint64_t uVar8;
  
  uStack_2a0 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2e8;
  FUN_180624440(&puStack_268);
  puVar4 = &system_buffer_ptr;
  if (puStack_260 != (void *)0x0) {
    puVar4 = puStack_260;
  }
  uVar6 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0x60000001;
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,3);
  lVar2 = CreateFileA(puVar4,0x80000000,1,0);
  if (lVar2 == -1) {
    puVar4 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar4 = *(void **)(param_2 + 8);
    }
                    // WARNING: Subroutine does not return
    FUN_180062300(system_message_context,&unknown_var_1800_ptr,puVar4);
  }
  lVar3 = CreateIoCompletionPort(lVar2,*(uint64_t *)(param_1 + 0x213430),0,0);
  if (lVar3 != *(int64_t *)(param_1 + 0x213430)) {
    puVar4 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar4 = *(void **)(param_2 + 8);
    }
                    // WARNING: Subroutine does not return
    FUN_180062300(system_message_context,&unknown_var_1856_ptr,puVar4);
  }
  lVar3 = param_1 + 0x2133e0;
  lStack_2a8 = lVar3;
  iVar1 = _Mtx_lock(lVar3);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  puVar5 = *(uint64_t **)(param_1 + 0x2133d8);
  if (puVar5 == (uint64_t *)0x0) {
    uVar8 = *(uint64_t *)(param_1 + 0x2133d0);
    if (0xff < uVar8) {
      iVar1 = _Mtx_unlock(lVar3);
      if (iVar1 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar1);
      }
      core_system_config = *(int32_t *)(param_2 + 0x10);
      puVar4 = &system_buffer_ptr;
      if (*(void **)(param_2 + 8) != (void *)0x0) {
        puVar4 = *(void **)(param_2 + 8);
      }
      strcpy_s(core_system_config,0x100,puVar4);
      uVar8 = uVar6;
      if (0 < *(int *)(param_2 + 0x10)) {
        do {
          uVar6 = uVar6 * 0x1f + (int64_t)*(char *)(uVar8 + *(int64_t *)(param_2 + 8));
          uVar7 = (int)uVar8 + 1;
          uVar8 = (uint64_t)uVar7;
        } while ((int)uVar7 < *(int *)(param_2 + 0x10));
      }
      lRam0000000000000128 = lVar2;
      uStack_2c8 = uVar6;
      FUN_180068860(param_1 + 0x330,alStack_288,uVar8,param_2);
      *(uint64_t *)(alStack_288[0] + 0x118) = 0;
      puStack_268 = &system_state_ptr;
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_2e8);
    }
    puVar5 = (uint64_t *)(uVar8 * 0x130 + param_1 + 0x2003d0);
    *(uint64_t *)(param_1 + 0x2133d0) = uVar8 + 1;
  }
  else {
    *(uint64_t *)(param_1 + 0x2133d8) = *puVar5;
  }
                    // WARNING: Subroutine does not return
  memset(puVar5 + 1,0,0x128);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: process_memory_block - 处理内存块分配和管理
// 参数:
//   param_1 - 内存管理器上下文
//   param_2 - 内存块参数
//   param_3 - 内存块配置
// 功能: 分配和管理内存块，处理内存对齐和边界检查
uint64_t process_memory_block(int64_t memory_context, int64_t block_param, int64_t block_config)

{
  uint64_t alignment;
  char allocation_result;
  int lock_result;
  uint64_t return_value;
  uint64_t block_size;
  uint64_t *block_ptr;
  uint64_t aligned_size;
  uint64_t total_size;
  
  alignment = *(uint64_t *)(block_config + 0x118) & 0xfffffffffffff000;
  block_size = (*(int64_t *)(block_config + 0x120) - alignment) + *(uint64_t *)(block_config + 0x118);
  total_size = (uint64_t)(-(uint)((block_size & 0xfff) != 0) & 0x1000) + (block_size & 0xfffffffffffff000);
  lock_result = _Mtx_lock(memory_context + 0x200380);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  block_ptr = *(uint64_t **)(memory_context + 0x200378);
  if (block_ptr == (uint64_t *)0x0) {
    alignment = *(uint64_t *)(memory_context + 0x200370);
    if (0xfff < alignment) {
      lock_result = _Mtx_unlock(memory_context + 0x200380);
      if (lock_result != 0) {
        __Throw_C_error_std__YAXH_Z(lock_result);
      }
      allocate_memory_block(0x20,block_config);
      uRam00000000000001f0 = 0;
      uRam00000000000001e8 = 0;
      uRam00000000000001e0 = 0;
      allocation_result = allocate_aligned_memory(memory_context,0x20,0x1e0,0x1e8,0x1f0);
      if (allocation_result == '\0') {
        free_memory_block(memory_context + 0x370,0);
        return_value = 0;
      }
      else {
        core_system_config = 0;
        core_system_config = 0;
        core_system_config = 0;
        LOCK();
        core_system_config = alignment;
        uRam00000000000001c8 = block_size;
        uRam00000000000001d0 = total_size;
        uRam00000000000001d8 = alignment;
        lRam00000000000001f8 = block_param;
        *(int *)(block_param + 0x120) = *(int *)(block_param + 0x120) + 1;
        UNLOCK();
        lock_result = ReadFile(*(uint64_t *)(block_param + 0x128),uRam00000000000001f0,total_size & 0xffffffff,0,
                         0);
        if (lock_result != 0) {
                    // WARNING: Subroutine does not return
          throw_file_error(system_message_context,&unknown_var_1960_ptr);
        }
        lock_result = GetLastError();
        if (lock_result != 0x3e5) {
                    // WARNING: Subroutine does not return
          throw_file_error(system_message_context,&unknown_var_1904_ptr,lock_result);
        }
        return_value = 1;
      }
      return return_value;
    }
    block_ptr = (uint64_t *)(alignment * 0x200 + memory_context + 0x370);
    *(uint64_t *)(memory_context + 0x200370) = alignment + 1;
  }
  else {
    *(uint64_t *)(memory_context + 0x200378) = *block_ptr;
    *block_ptr = 0;
  }
                    // WARNING: Subroutine does not return
  memset(block_ptr,0,0x200);
}



// 函数: copy_memory_block_config - 复制内存块配置
// 参数:
//   param_1 - 目标内存块
//   param_2 - 源内存块
// 功能: 完整复制内存块的配置信息，包括回调函数和状态
int64_t copy_memory_block_config(int64_t dest_block, int64_t src_block)

{
  int64_t offset_diff;
  code *callback_ptr;
  void *string_ptr;
  
  *(int32_t *)(dest_block + 0x10) = *(int32_t *)(src_block + 0x10);
  string_ptr = &system_buffer_ptr;
  if (*(void **)(src_block + 8) != (void *)0x0) {
    string_ptr = *(void **)(src_block + 8);
  }
  strcpy_s(*(uint64_t *)(dest_block + 8),0x100,string_ptr);
  *(uint64_t *)(dest_block + 0x118) = *(uint64_t *)(src_block + 0x118);
  offset_diff = dest_block + 0x148;
  *(uint64_t *)(dest_block + 0x120) = *(uint64_t *)(src_block + 0x120);
  *(uint64_t *)(dest_block + 0x128) = *(uint64_t *)(src_block + 0x128);
  *(uint64_t *)(dest_block + 0x130) = *(uint64_t *)(src_block + 0x130);
  *(uint64_t *)(dest_block + 0x138) = *(uint64_t *)(src_block + 0x138);
  *(int8_t *)(dest_block + 0x140) = *(int8_t *)(src_block + 0x140);
  if (offset_diff != src_block + 0x148) {
    if (*(code **)(dest_block + 0x158) != (code *)0x0) {
      (**(code **)(dest_block + 0x158))(offset_diff,0,0);
    }
    callback_ptr = *(code **)(src_block + 0x158);
    if (callback_ptr != (code *)0x0) {
      (*callback_ptr)(offset_diff,src_block + 0x148,1);
      callback_ptr = *(code **)(src_block + 0x158);
    }
    *(code **)(dest_block + 0x158) = callback_ptr;
    *(uint64_t *)(dest_block + 0x160) = *(uint64_t *)(src_block + 0x160);
  }
  offset_diff = dest_block + 0x168;
  if (offset_diff != src_block + 0x168) {
    if (*(code **)(dest_block + 0x178) != (code *)0x0) {
      (**(code **)(dest_block + 0x178))(offset_diff,0,0);
    }
    callback_ptr = *(code **)(src_block + 0x178);
    if (callback_ptr != (code *)0x0) {
      (*callback_ptr)(offset_diff,src_block + 0x168,1);
      callback_ptr = *(code **)(src_block + 0x178);
    }
    *(code **)(dest_block + 0x178) = callback_ptr;
    *(uint64_t *)(dest_block + 0x180) = *(uint64_t *)(src_block + 0x180);
  }
  *(uint64_t *)(dest_block + 0x188) = *(uint64_t *)(src_block + 0x188);
  *(uint64_t *)(dest_block + 400) = *(uint64_t *)(src_block + 400);
  *(uint64_t *)(dest_block + 0x198) = *(uint64_t *)(src_block + 0x198);
  *(uint64_t *)(dest_block + 0x1a0) = *(uint64_t *)(src_block + 0x1a0);
  return dest_block;
}





// 函数: close_file_handle - 关闭文件句柄并清理资源
// 参数:
//   param_1 - 引擎上下文
//   param_2 - 文件句柄数组
//   param_3 - 清理参数1
//   param_4 - 清理参数2
// 功能: 安全关闭文件句柄，释放相关资源
void close_file_handle(int64_t engine_context, uint64_t *file_handle_array, uint64_t cleanup_param1, uint64_t cleanup_param2)

{
  int lock_result;
  uint64_t cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  CloseHandle(file_handle_array[0x25]);
  lock_result = _Mtx_lock(engine_context + 0x2133e0);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  (**(code **)*file_handle_array)(file_handle_array,0,cleanup_param1,cleanup_param2,cleanup_flag);
  *file_handle_array = *(uint64_t *)(engine_context + 0x2133d8);
  *(uint64_t **)(engine_context + 0x2133d8) = file_handle_array;
  lock_result = _Mtx_unlock(engine_context + 0x2133e0);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  return;
}





// 函数: 清理资源池和内存管理
// 参数:
//   param_1 - 资源管理器指针
// 功能: 遍历并清理资源池中的所有资源条目
void cleanup_resource_pool(int64_t resource_manager)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plStackX_8;
  
  cVar4 = FUN_180068a90(param_1 + 0x10,&plStackX_8);
  do {
    if (cVar4 == '\0') {
      return;
    }
    plVar2 = *(int64_t **)(param_1 + 0x318);
    if (plStackX_8 != (int64_t *)0x0) {
      *(int8_t *)(plStackX_8 + 4) = 0;
      *plVar2 = *plVar2 - plStackX_8[1];
      plVar2[2] = plVar2[2] + plStackX_8[1];
      plVar7 = (int64_t *)plStackX_8[3];
      plVar6 = (int64_t *)plVar2[3];
      plVar5 = plStackX_8;
      if (plVar7 != plVar6) {
        do {
          if ((plVar7 == (int64_t *)0x0) || ((char)plVar7[4] != '\0')) break;
          lVar3 = plVar5[2];
          plVar7[2] = lVar3;
          if (lVar3 != 0) {
            *(int64_t **)(lVar3 + 0x18) = plVar7;
          }
          plVar7[1] = plVar7[1] + plVar5[1];
          *plVar5 = plVar2[0x28005];
          plVar2[0x28005] = (int64_t)plVar5;
          plVar6 = (int64_t *)plVar2[3];
          plVar1 = plVar7 + 3;
          plVar5 = plVar7;
          plVar7 = (int64_t *)*plVar1;
        } while ((int64_t *)*plVar1 != plVar6);
      }
      plVar7 = (int64_t *)plVar5[2];
      while (((plVar5 != plVar6 && (plVar7 != (int64_t *)0x0)) && ((char)plVar7[4] == '\0'))) {
        lVar3 = plVar7[2];
        plVar5[2] = lVar3;
        if (lVar3 != 0) {
          *(int64_t **)(lVar3 + 0x18) = plVar5;
        }
        plVar5[1] = plVar5[1] + plVar7[1];
        *plVar7 = plVar2[0x28005];
        plVar2[0x28005] = (int64_t)plVar7;
        plVar6 = (int64_t *)plVar2[3];
        plVar7 = (int64_t *)plVar5[2];
      }
    }
    cVar4 = FUN_180068a90(param_1 + 0x10,&plStackX_8);
  } while( true );
}





// 函数: 释放IO缓冲区资源
// 参数:
//   param_1 - 缓冲区管理器
//   param_2 - 要释放的缓冲区指针
// 功能: 将缓冲区返回到空闲池中
void release_io_buffer(int64_t buffer_manager, uint64_t *buffer)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(param_1 + 0x200010);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  FUN_180069530(param_2 + 4);
  *param_2 = *(uint64_t *)(param_1 + 0x200008);
  *(uint64_t **)(param_1 + 0x200008) = param_2;
  iVar1 = _Mtx_unlock(param_1 + 0x200010);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 创建哈希表条目
// 参数:
//   param_1 - 哈希表指针
//   param_2 - 条目数据指针
//   param_3, param_4 - 附加参数
//   param_5 - 哈希键值
// 功能: 在哈希表中创建或查找条目
int64_t *create_hash_table_entry(int64_t hash_table, int64_t *entry_data, uint64_t param_3, uint64_t param_4, uint64_t hash_key)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  uVar2 = param_5 % (uint64_t)*(uint *)(param_1 + 0x10);
  lVar3 = func_0x0001800694c0(param_1,*(uint64_t *)(*(int64_t *)(param_1 + 8) + uVar2 * 8),
                              param_4);
  if (lVar3 == 0) {
    FUN_18066c220(param_1 + 0x20,&param_5,*(int32_t *)(param_1 + 0x10),
                  *(int32_t *)(param_1 + 0x18),1);
    lVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x128,*(int8_t *)(param_1 + 0x2c));
    FUN_180068ff0(lVar3,param_4);
    *(uint64_t *)(lVar3 + 0x118) = 0;
    *(uint64_t *)(lVar3 + 0x120) = 0;
    if ((char)param_5 != '\0') {
      uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)param_5._4_4_ * 8 + 8,8,
                            *(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
      memset(uVar4,0,(uint64_t)param_5._4_4_ * 8);
    }
    *(uint64_t *)(lVar3 + 0x120) = *(uint64_t *)(*(int64_t *)(param_1 + 8) + uVar2 * 8);
    *(int64_t *)(*(int64_t *)(param_1 + 8) + uVar2 * 8) = lVar3;
    *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
    lVar1 = *(int64_t *)(param_1 + 8);
    *param_2 = lVar3;
    param_2[1] = lVar1 + uVar2 * 8;
    *(int8_t *)(param_2 + 2) = 1;
  }
  else {
    lVar1 = *(int64_t *)(param_1 + 8);
    *param_2 = lVar3;
    param_2[1] = lVar1 + uVar2 * 8;
    *(int8_t *)(param_2 + 2) = 0;
  }
  return param_2;
}



// 函数: 查找可用资源条目
// 参数:
//   param_1 - 资源池指针
//   param_2 - 返回的条目指针
// 功能: 在资源池中查找可用的资源条目
uint64_t find_available_resource_entry(uint64_t *resource_pool, uint64_t *entry_pointer)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  bool bVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  
  uVar11 = *param_1;
  uVar10 = 0;
  uVar8 = uVar10;
  uVar12 = uVar10;
  uVar14 = uVar10;
  do {
    uVar9 = uVar8;
    if (uVar11 == 0) break;
    uVar7 = *(int64_t *)(uVar11 + 0x20) - *(int64_t *)(uVar11 + 0x28);
    if ((uint64_t)(*(int64_t *)(uVar11 + 0x28) - *(int64_t *)(uVar11 + 0x20)) <
        0x8000000000000001) {
      uVar7 = uVar10;
    }
    uVar13 = uVar12;
    if ((uVar7 != 0) && (uVar14 = uVar14 + 1, uVar9 = uVar11, uVar13 = uVar7, uVar7 <= uVar12)) {
      uVar9 = uVar8;
      uVar13 = uVar12;
    }
    plVar1 = (int64_t *)(uVar11 + 8);
    uVar11 = *plVar1 - 8;
    if (*plVar1 == 0) {
      uVar11 = uVar10;
    }
    uVar8 = uVar9;
    uVar12 = uVar13;
  } while (uVar14 < 3);
  if (uVar14 != 0) {
    cVar5 = FUN_180068ce0(uVar9,param_2);
    if (cVar5 != '\0') {
      return 1;
    }
    uVar11 = *param_1;
    while (uVar11 != 0) {
      if (uVar11 != uVar9) {
        lVar4 = *(int64_t *)(uVar11 + 0x38);
        if (*(char *)(uVar11 + 0x48) == '\0') {
          if ((uint64_t)((*(int64_t *)(uVar11 + 0x30) - lVar4) - *(int64_t *)(uVar11 + 0x20)) <
              0x8000000000000001) goto LAB_180068c92;
          LOCK();
          plVar1 = (int64_t *)(uVar11 + 0x30);
          lVar3 = *plVar1;
          *plVar1 = *plVar1 + 1;
          UNLOCK();
          if ((uint64_t)((lVar3 - *(int64_t *)(uVar11 + 0x20)) - lVar4) < 0x8000000000000001)
          goto LAB_180068c87;
          LOCK();
          puVar2 = (uint64_t *)(uVar11 + 0x28);
          uVar8 = *puVar2;
          *puVar2 = *puVar2 + 1;
          UNLOCK();
          plVar1 = *(int64_t **)(uVar11 + 0x60);
          lVar3 = *(int64_t *)
                   (plVar1[3] +
                   (((uVar8 & 0xffffffffffffffe0) - **(int64_t **)(plVar1[3] + plVar1[1] * 8) >> 5)
                    + plVar1[1] & *plVar1 - 1U) * 8);
          lVar4 = *(int64_t *)(lVar3 + 8);
          *param_2 = *(uint64_t *)(lVar4 + (uint64_t)((uint)uVar8 & 0x1f) * 8);
          LOCK();
          plVar1 = (int64_t *)(lVar4 + 0x108);
          lVar4 = *plVar1;
          *plVar1 = *plVar1 + 1;
          UNLOCK();
          if (lVar4 == 0x1f) {
            *(uint64_t *)(lVar3 + 8) = 0;
            func_0x000180060c10(*(uint64_t *)(uVar11 + 0x50));
          }
          bVar6 = true;
        }
        else {
          if (0x8000000000000000 <
              (uint64_t)((*(int64_t *)(uVar11 + 0x30) - lVar4) - *(int64_t *)(uVar11 + 0x20))) {
            LOCK();
            plVar1 = (int64_t *)(uVar11 + 0x30);
            lVar3 = *plVar1;
            *plVar1 = *plVar1 + 1;
            UNLOCK();
            if (0x8000000000000000 < (uint64_t)((lVar3 - *(int64_t *)(uVar11 + 0x20)) - lVar4)) {
              LOCK();
              puVar2 = (uint64_t *)(uVar11 + 0x28);
              uVar8 = *puVar2;
              *puVar2 = *puVar2 + 1;
              UNLOCK();
              plVar1 = *(int64_t **)(uVar11 + 0x58);
              uVar12 = (uint64_t)((uint)uVar8 & 0x1f);
              lVar4 = *(int64_t *)
                       (plVar1[2] + 8 +
                       (((uVar8 & 0xffffffffffffffe0) - *(int64_t *)(plVar1[2] + plVar1[1] * 0x10)
                        >> 5) + plVar1[1] & *plVar1 - 1U) * 0x10);
              *param_2 = *(uint64_t *)(lVar4 + uVar12 * 8);
              *(int8_t *)((lVar4 - uVar12) + 0x12f) = 1;
              bVar6 = true;
              goto LAB_180068c94;
            }
LAB_180068c87:
            LOCK();
            *(int64_t *)(uVar11 + 0x38) = *(int64_t *)(uVar11 + 0x38) + 1;
            UNLOCK();
          }
LAB_180068c92:
          bVar6 = false;
        }
LAB_180068c94:
        if (bVar6) {
          return 1;
        }
      }
      plVar1 = (int64_t *)(uVar11 + 8);
      uVar11 = *plVar1 - 8;
      if (*plVar1 == 0) {
        uVar11 = uVar10;
      }
    }
  }
  return 0;
}



// 函数: 获取资源条目数据
// 参数:
//   param_1 - 资源条目指针
//   param_2 - 返回的数据指针
// 功能: 从资源条目中提取数据
uint64_t get_resource_entry_data(int64_t resource_entry, uint64_t *data_pointer)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    if ((uint64_t)
        ((*(int64_t *)(param_1 + 0x30) - *(int64_t *)(param_1 + 0x38)) -
        *(int64_t *)(param_1 + 0x20)) < 0x8000000000000001) {
      return 0;
    }
    LOCK();
    plVar1 = (int64_t *)(param_1 + 0x30);
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (0x8000000000000000 <
        (uint64_t)((lVar3 - *(int64_t *)(param_1 + 0x20)) - *(int64_t *)(param_1 + 0x38))) {
      LOCK();
      puVar2 = (uint64_t *)(param_1 + 0x28);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      plVar1 = *(int64_t **)(param_1 + 0x60);
      lVar5 = *(int64_t *)
               (plVar1[3] +
               (((uVar4 & 0xffffffffffffffe0) - **(int64_t **)(plVar1[3] + plVar1[1] * 8) >> 5) +
                plVar1[1] & *plVar1 - 1U) * 8);
      lVar3 = *(int64_t *)(lVar5 + 8);
      *param_2 = *(uint64_t *)(lVar3 + (uint64_t)((uint)uVar4 & 0x1f) * 8);
      LOCK();
      plVar1 = (int64_t *)(lVar3 + 0x108);
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (lVar3 == 0x1f) {
        *(uint64_t *)(lVar5 + 8) = 0;
        func_0x000180060c10(*(uint64_t *)(param_1 + 0x50));
      }
      return 1;
    }
  }
  else {
    if ((uint64_t)
        ((*(int64_t *)(param_1 + 0x30) - *(int64_t *)(param_1 + 0x38)) -
        *(int64_t *)(param_1 + 0x20)) < 0x8000000000000001) {
      return 0;
    }
    LOCK();
    plVar1 = (int64_t *)(param_1 + 0x30);
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (0x8000000000000000 <
        (uint64_t)((lVar3 - *(int64_t *)(param_1 + 0x20)) - *(int64_t *)(param_1 + 0x38))) {
      LOCK();
      puVar2 = (uint64_t *)(param_1 + 0x28);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      plVar1 = *(int64_t **)(param_1 + 0x58);
      uVar6 = (uint64_t)((uint)uVar4 & 0x1f);
      lVar3 = *(int64_t *)
               (plVar1[2] + 8 +
               (((uVar4 & 0xffffffffffffffe0) - *(int64_t *)(plVar1[2] + plVar1[1] * 0x10) >> 5) +
                plVar1[1] & *plVar1 - 1U) * 0x10);
      *param_2 = *(uint64_t *)(lVar3 + uVar6 * 8);
      *(int8_t *)((lVar3 - uVar6) + 0x12f) = 1;
      return 1;
    }
  }
  LOCK();
  *(int64_t *)(param_1 + 0x38) = *(int64_t *)(param_1 + 0x38) + 1;
  UNLOCK();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 处理资源生命周期事件
// 参数:
//   param_1 - 资源指针
//   param_2 - 事件数据指针
//   param_3 - 事件类型
//   param_4 - 事件参数
// 功能: 根据事件类型处理资源的创建、复制、移动或销毁
int64_t handle_resource_lifecycle(int64_t *resource_ptr, int64_t *event_data, int event_type, uint64_t event_param)

{
  int64_t lVar1;
  int64_t lVar2;
  code *pcVar3;
  
  if (param_3 == 3) {
    lVar2 = 0x180bfd400;
  }
  else if (param_3 == 4) {
    lVar2 = *param_1;
  }
  else {
    if (param_3 == 0) {
      lVar2 = *param_1;
      if (lVar2 != 0) {
        if (*(code **)(lVar2 + 0x10) != (code *)0x0) {
          (**(code **)(lVar2 + 0x10))(lVar2,0,0,param_4,0xfffffffffffffffe);
        }
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar2);
      }
    }
    else {
      if (param_3 == 1) {
        lVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,system_allocation_flags);
        lVar2 = *param_2;
        *(uint64_t *)(lVar1 + 0x10) = 0;
        *(code **)(lVar1 + 0x18) = _guard_check_icall;
        if (lVar1 != lVar2) {
          pcVar3 = *(code **)(lVar2 + 0x10);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(lVar1,lVar2,1);
            pcVar3 = *(code **)(lVar2 + 0x10);
          }
          *(code **)(lVar1 + 0x10) = pcVar3;
          *(uint64_t *)(lVar1 + 0x18) = *(uint64_t *)(lVar2 + 0x18);
        }
        *param_1 = lVar1;
        return 0;
      }
      if (param_3 == 2) {
        *param_1 = *param_2;
        *param_2 = 0;
        return 0;
      }
    }
    lVar2 = 0;
  }
  return lVar2;
}



// 函数: 初始化资源条目
// 参数:
//   param_1 - 资源条目指针
//   param_2 - 配置参数
//   param_3, param_4 - 初始化参数
// 功能: 初始化资源条目的基本结构和数据
uint64_t *initialize_resource_entry(uint64_t *resource_entry, int64_t config_param, uint64_t param_3, uint64_t param_4)

{
  void *puVar1;
  
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &unknown_var_2008_ptr;
  param_1[1] = param_1 + 3;
  *(int32_t *)(param_1 + 2) = 0;
  *(int8_t *)(param_1 + 3) = 0;
  *(int32_t *)(param_1 + 2) = *(int32_t *)(param_2 + 0x10);
  puVar1 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar1 = *(void **)(param_2 + 8);
  }
  strcpy_s(param_1[1],0x100,puVar1,param_4,0xfffffffffffffffe);
  return param_1;
}



// 函数: 创建默认资源条目
// 参数:
//   param_1 - 资源条目指针
// 功能: 创建具有默认配置的资源条目
uint64_t * create_default_resource_entry(uint64_t *resource_entry)

{
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &unknown_var_2008_ptr;
  param_1[1] = param_1 + 3;
  *(int32_t *)(param_1 + 2) = 0;
  *(int8_t *)(param_1 + 3) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = _guard_check_icall;
  param_1[0x2f] = 0;
  param_1[0x30] = _guard_check_icall;
  param_1[0x27] = 0xffffffffffffffff;
  param_1[0x24] = 0xffffffffffffffff;
  param_1[0x23] = 0xffffffffffffffff;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(int8_t *)(param_1 + 0x28) = 0;
  return param_1;
}





// 函数: 移动资源回调函数
// 参数:
//   param_1 - 目标资源
//   param_2 - 源资源
// 功能: 将资源的回调函数从源移动到目标
void move_resource_callbacks(int64_t dest_resource, int64_t src_resource)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_2 + 0x10);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,param_2,2);
    pcVar1 = *(code **)(param_2 + 0x10);
  }
  *(code **)(param_1 + 0x10) = pcVar1;
  *(uint64_t *)(param_1 + 0x18) = *(uint64_t *)(param_2 + 0x18);
  *(code **)(param_2 + 0x18) = _guard_check_icall;
  *(uint64_t *)(param_2 + 0x10) = 0;
  return;
}



// 函数: 释放内存块资源
// 参数:
//   param_1 - 内存块指针
//   param_2 - 释放标志
//   param_3, param_4 - 释放参数
// 功能: 根据标志释放内存块资源
int64_t free_memory_block_resource(int64_t memory_block, uint64_t free_flag, uint64_t param_3, uint64_t param_4)

{
  *(void **)(param_1 + 8) = &system_state_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x128,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// 函数: 释放文件句柄资源
// 参数:
//   param_1 - 文件句柄指针
//   param_2 - 释放标志
//   param_3, param_4 - 释放参数
// 功能: 根据标志释放文件句柄资源
uint64_t *free_file_handle_resource(uint64_t *file_handle, uint64_t free_flag, uint64_t param_3, uint64_t param_4)

{
  *param_1 = &system_state_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x118,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: 复制字符串数据
// 参数:
//   param_1 - 目标缓冲区
//   param_2 - 源字符串
//   param_3 - 字符串长度
// 功能: 安全复制字符串数据到目标缓冲区
void copy_string_data(int64_t dest_buffer, uint64_t src_string, int string_length)

{
  if (param_3 + 1 < 0x100) {
                    // WARNING: Subroutine does not return
    memcpy(*(int8_t **)(param_1 + 8),param_2,(int64_t)param_3);
  }
  **(int8_t **)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  return;
}





// 函数: 内存复制操作
// 功能: 执行内存复制操作（简化实现）
void perform_memory_copy(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}





// 函数: 重置缓冲区状态
// 参数:
//   param_1 - 缓冲区指针
// 功能: 重置缓冲区的状态和数据
void reset_buffer_state(int8_t *buffer)

{
  int64_t unaff_RDI;
  
  *param_1 = 0;
  *(int32_t *)(unaff_RDI + 0x10) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 字符串替换操作
// 参数:
//   param_1 - 字符串管理器
//   param_2 - 搜索字符串
//   param_3 - 替换字符串
// 功能: 在字符串中执行搜索和替换操作
void perform_string_replace(int64_t string_manager, int64_t search_string, int64_t replace_string)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int8_t auStack_198 [32];
  uint64_t uStack_178;
  void *puStack_168;
  int8_t *puStack_160;
  int32_t uStack_158;
  int8_t auStack_150 [264];
  uint64_t uStack_48;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_198;
  puStack_168 = &unknown_var_2008_ptr;
  puStack_160 = auStack_150;
  uStack_158 = 0;
  auStack_150[0] = 0;
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
    memcpy(puStack_160,*(int64_t *)(param_1 + 8),lVar1 - *(int64_t *)(param_1 + 8));
  }
  puStack_168 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_198);
}





// 函数: 设置字符串缓冲区
// 参数:
//   param_1 - 缓冲区结构体
//   param_2 - 源字符串
// 功能: 设置字符串缓冲区的内容和长度
void set_string_buffer(int64_t buffer_struct, int64_t src_string)

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
  if ((int)lVar1 < 0x100) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x000180069429. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(uint64_t *)(param_1 + 8),0x100);
    return;
  }
  SystemDataInitializer(&unknown_var_616_ptr,0x100,param_2);
  *(int32_t *)(param_1 + 0x10) = 0;
  **(int8_t **)(param_1 + 8) = 0;
  return;
}



// 函数: 释放哈希表资源
// 参数:
//   param_1 - 哈希表指针
//   param_2 - 释放标志
//   param_3, param_4 - 释放参数
// 功能: 根据标志释放哈希表资源
int64_t free_hash_table_resource(int64_t hash_table, uint64_t free_flag, uint64_t param_3, uint64_t param_4)

{
  *(void **)(param_1 + 8) = &system_state_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x130,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: 清理资源条目
// 参数:
//   param_1 - 资源条目指针
//   param_2, param_3, param_4 - 清理参数
// 功能: 清理资源条目并调用相关的析构函数
void cleanup_resource_entry(uint64_t *resource_entry, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  if ((code *)param_1[0x2f] != (code *)0x0) {
    (*(code *)param_1[0x2f])(param_1 + 0x2d,0,0,param_4,0xfffffffffffffffe);
  }
  if ((code *)param_1[0x2b] != (code *)0x0) {
    (*(code *)param_1[0x2b])(param_1 + 0x29,0,0);
  }
  *param_1 = &system_state_ptr;
  return;
}





// 函数: 重置字符串指针
// 参数:
//   param_1 - 字符串结构体
// 功能: 重置字符串指针为默认状态
void reset_string_pointer(int64_t string_struct)

{
  *(void **)(param_1 + 8) = &system_state_ptr;
  return;
}



// 函数: 初始化同步对象
// 参数:
//   param_1 - 同步对象指针
//   param_2 - 初始化标志
//   param_3, param_4 - 初始化参数
// 功能: 初始化同步对象的基本结构
uint64_t *initialize_sync_object(uint64_t *sync_object, uint64_t init_flag, uint64_t param_3, uint64_t param_4)

{
  *param_1 = &unknown_var_1000_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// 函数: 释放同步对象
// 参数:
//   param_1 - 同步对象指针
//   param_2 - 释放标志
// 功能: 根据标志释放同步对象资源
uint64_t * free_sync_object(uint64_t *sync_object, uint64_t free_flag)

{
  *param_1 = &unknown_var_2280_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}



// 函数: 释放事件对象
// 参数:
//   param_1 - 事件对象
//   param_2 - 释放标志
// 功能: 根据标志释放事件对象资源
uint64_t free_event_object(uint64_t event_object, uint64_t free_flag)

{
  FUN_1800697a0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}





