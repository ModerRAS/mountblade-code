#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part024.c - 核心引擎文件操作和内存管理模块
// 本文件包含文件创建、IO完成端口、内存分配、资源清理等核心功能

// 函数: 创建文件句柄并关联到IO完成端口
void create_file_with_completion_port(longlong engine_context, longlong file_params)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_2e8 [32];
  ulonglong uStack_2c8;
  undefined4 uStack_2c0;
  undefined8 uStack_2b8;
  longlong lStack_2a8;
  undefined8 uStack_2a0;
  longlong alStack_288 [4];
  undefined *puStack_268;
  undefined *puStack_260;
  ulonglong uStack_48;
  ulonglong uVar8;
  
  uStack_2a0 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_2e8;
  FUN_180624440(&puStack_268);
  puVar4 = &DAT_18098bc73;
  if (puStack_260 != (undefined *)0x0) {
    puVar4 = puStack_260;
  }
  uVar6 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0x60000001;
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,3);
  lVar2 = CreateFileA(puVar4,0x80000000,1,0);
  if (lVar2 == -1) {
    puVar4 = &DAT_18098bc73;
    if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
      puVar4 = *(undefined **)(param_2 + 8);
    }
                    // WARNING: Subroutine does not return
    FUN_180062300(_DAT_180c86928,&UNK_1809fecd8,puVar4);
  }
  lVar3 = CreateIoCompletionPort(lVar2,*(undefined8 *)(param_1 + 0x213430),0,0);
  if (lVar3 != *(longlong *)(param_1 + 0x213430)) {
    puVar4 = &DAT_18098bc73;
    if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
      puVar4 = *(undefined **)(param_2 + 8);
    }
                    // WARNING: Subroutine does not return
    FUN_180062300(_DAT_180c86928,&UNK_1809fed10,puVar4);
  }
  lVar3 = param_1 + 0x2133e0;
  lStack_2a8 = lVar3;
  iVar1 = _Mtx_lock(lVar3);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x2133d8);
  if (puVar5 == (undefined8 *)0x0) {
    uVar8 = *(ulonglong *)(param_1 + 0x2133d0);
    if (0xff < uVar8) {
      iVar1 = _Mtx_unlock(lVar3);
      if (iVar1 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar1);
      }
      _DAT_00000018 = *(undefined4 *)(param_2 + 0x10);
      puVar4 = &DAT_18098bc73;
      if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
        puVar4 = *(undefined **)(param_2 + 8);
      }
      strcpy_s(_DAT_00000010,0x100,puVar4);
      uVar8 = uVar6;
      if (0 < *(int *)(param_2 + 0x10)) {
        do {
          uVar6 = uVar6 * 0x1f + (longlong)*(char *)(uVar8 + *(longlong *)(param_2 + 8));
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while ((int)uVar7 < *(int *)(param_2 + 0x10));
      }
      lRam0000000000000128 = lVar2;
      uStack_2c8 = uVar6;
      FUN_180068860(param_1 + 0x330,alStack_288,uVar8,param_2);
      *(undefined8 *)(alStack_288[0] + 0x118) = 0;
      puStack_268 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_2e8);
    }
    puVar5 = (undefined8 *)(uVar8 * 0x130 + param_1 + 0x2003d0);
    *(ulonglong *)(param_1 + 0x2133d0) = uVar8 + 1;
  }
  else {
    *(undefined8 *)(param_1 + 0x2133d8) = *puVar5;
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
undefined8 process_memory_block(longlong memory_context, longlong block_param, longlong block_config)

{
  ulonglong alignment;
  char allocation_result;
  int lock_result;
  undefined8 return_value;
  ulonglong block_size;
  undefined8 *block_ptr;
  ulonglong aligned_size;
  ulonglong total_size;
  
  alignment = *(ulonglong *)(block_config + 0x118) & 0xfffffffffffff000;
  block_size = (*(longlong *)(block_config + 0x120) - alignment) + *(ulonglong *)(block_config + 0x118);
  total_size = (ulonglong)(-(uint)((block_size & 0xfff) != 0) & 0x1000) + (block_size & 0xfffffffffffff000);
  lock_result = _Mtx_lock(memory_context + 0x200380);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  block_ptr = *(undefined8 **)(memory_context + 0x200378);
  if (block_ptr == (undefined8 *)0x0) {
    alignment = *(ulonglong *)(memory_context + 0x200370);
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
        _DAT_00000000 = 0;
        _DAT_00000008 = 0;
        _DAT_00000018 = 0;
        LOCK();
        _DAT_00000010 = alignment;
        uRam00000000000001c8 = block_size;
        uRam00000000000001d0 = total_size;
        uRam00000000000001d8 = alignment;
        lRam00000000000001f8 = block_param;
        *(int *)(block_param + 0x120) = *(int *)(block_param + 0x120) + 1;
        UNLOCK();
        lock_result = ReadFile(*(undefined8 *)(block_param + 0x128),uRam00000000000001f0,total_size & 0xffffffff,0,
                         0);
        if (lock_result != 0) {
                    // WARNING: Subroutine does not return
          throw_file_error(_DAT_180c86928,&UNK_1809fed78);
        }
        lock_result = GetLastError();
        if (lock_result != 0x3e5) {
                    // WARNING: Subroutine does not return
          throw_file_error(_DAT_180c86928,&UNK_1809fed40,lock_result);
        }
        return_value = 1;
      }
      return return_value;
    }
    block_ptr = (undefined8 *)(alignment * 0x200 + memory_context + 0x370);
    *(ulonglong *)(memory_context + 0x200370) = alignment + 1;
  }
  else {
    *(undefined8 *)(memory_context + 0x200378) = *block_ptr;
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
longlong copy_memory_block_config(longlong dest_block, longlong src_block)

{
  longlong offset_diff;
  code *callback_ptr;
  undefined *string_ptr;
  
  *(undefined4 *)(dest_block + 0x10) = *(undefined4 *)(src_block + 0x10);
  string_ptr = &DAT_18098bc73;
  if (*(undefined **)(src_block + 8) != (undefined *)0x0) {
    string_ptr = *(undefined **)(src_block + 8);
  }
  strcpy_s(*(undefined8 *)(dest_block + 8),0x100,string_ptr);
  *(undefined8 *)(dest_block + 0x118) = *(undefined8 *)(src_block + 0x118);
  offset_diff = dest_block + 0x148;
  *(undefined8 *)(dest_block + 0x120) = *(undefined8 *)(src_block + 0x120);
  *(undefined8 *)(dest_block + 0x128) = *(undefined8 *)(src_block + 0x128);
  *(undefined8 *)(dest_block + 0x130) = *(undefined8 *)(src_block + 0x130);
  *(undefined8 *)(dest_block + 0x138) = *(undefined8 *)(src_block + 0x138);
  *(undefined1 *)(dest_block + 0x140) = *(undefined1 *)(src_block + 0x140);
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
    *(undefined8 *)(dest_block + 0x160) = *(undefined8 *)(src_block + 0x160);
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
    *(undefined8 *)(dest_block + 0x180) = *(undefined8 *)(src_block + 0x180);
  }
  *(undefined8 *)(dest_block + 0x188) = *(undefined8 *)(src_block + 0x188);
  *(undefined8 *)(dest_block + 400) = *(undefined8 *)(src_block + 400);
  *(undefined8 *)(dest_block + 0x198) = *(undefined8 *)(src_block + 0x198);
  *(undefined8 *)(dest_block + 0x1a0) = *(undefined8 *)(src_block + 0x1a0);
  return dest_block;
}





// 函数: close_file_handle - 关闭文件句柄并清理资源
// 参数:
//   param_1 - 引擎上下文
//   param_2 - 文件句柄数组
//   param_3 - 清理参数1
//   param_4 - 清理参数2
// 功能: 安全关闭文件句柄，释放相关资源
void close_file_handle(longlong engine_context, undefined8 *file_handle_array, undefined8 cleanup_param1, undefined8 cleanup_param2)

{
  int lock_result;
  undefined8 cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  CloseHandle(file_handle_array[0x25]);
  lock_result = _Mtx_lock(engine_context + 0x2133e0);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  (**(code **)*file_handle_array)(file_handle_array,0,cleanup_param1,cleanup_param2,cleanup_flag);
  *file_handle_array = *(undefined8 *)(engine_context + 0x2133d8);
  *(undefined8 **)(engine_context + 0x2133d8) = file_handle_array;
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
void cleanup_resource_pool(longlong resource_manager)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plStackX_8;
  
  cVar4 = FUN_180068a90(param_1 + 0x10,&plStackX_8);
  do {
    if (cVar4 == '\0') {
      return;
    }
    plVar2 = *(longlong **)(param_1 + 0x318);
    if (plStackX_8 != (longlong *)0x0) {
      *(undefined1 *)(plStackX_8 + 4) = 0;
      *plVar2 = *plVar2 - plStackX_8[1];
      plVar2[2] = plVar2[2] + plStackX_8[1];
      plVar7 = (longlong *)plStackX_8[3];
      plVar6 = (longlong *)plVar2[3];
      plVar5 = plStackX_8;
      if (plVar7 != plVar6) {
        do {
          if ((plVar7 == (longlong *)0x0) || ((char)plVar7[4] != '\0')) break;
          lVar3 = plVar5[2];
          plVar7[2] = lVar3;
          if (lVar3 != 0) {
            *(longlong **)(lVar3 + 0x18) = plVar7;
          }
          plVar7[1] = plVar7[1] + plVar5[1];
          *plVar5 = plVar2[0x28005];
          plVar2[0x28005] = (longlong)plVar5;
          plVar6 = (longlong *)plVar2[3];
          plVar1 = plVar7 + 3;
          plVar5 = plVar7;
          plVar7 = (longlong *)*plVar1;
        } while ((longlong *)*plVar1 != plVar6);
      }
      plVar7 = (longlong *)plVar5[2];
      while (((plVar5 != plVar6 && (plVar7 != (longlong *)0x0)) && ((char)plVar7[4] == '\0'))) {
        lVar3 = plVar7[2];
        plVar5[2] = lVar3;
        if (lVar3 != 0) {
          *(longlong **)(lVar3 + 0x18) = plVar5;
        }
        plVar5[1] = plVar5[1] + plVar7[1];
        *plVar7 = plVar2[0x28005];
        plVar2[0x28005] = (longlong)plVar7;
        plVar6 = (longlong *)plVar2[3];
        plVar7 = (longlong *)plVar5[2];
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
void release_io_buffer(longlong buffer_manager, undefined8 *buffer)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(param_1 + 0x200010);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  FUN_180069530(param_2 + 4);
  *param_2 = *(undefined8 *)(param_1 + 0x200008);
  *(undefined8 **)(param_1 + 0x200008) = param_2;
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
longlong *create_hash_table_entry(longlong hash_table, longlong *entry_data, undefined8 param_3, undefined8 param_4, ulonglong hash_key)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar2 = param_5 % (ulonglong)*(uint *)(param_1 + 0x10);
  lVar3 = func_0x0001800694c0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 8) + uVar2 * 8),
                              param_4);
  if (lVar3 == 0) {
    FUN_18066c220(param_1 + 0x20,&param_5,*(undefined4 *)(param_1 + 0x10),
                  *(undefined4 *)(param_1 + 0x18),1);
    lVar3 = FUN_18062b420(_DAT_180c8ed18,0x128,*(undefined1 *)(param_1 + 0x2c));
    FUN_180068ff0(lVar3,param_4);
    *(undefined8 *)(lVar3 + 0x118) = 0;
    *(undefined8 *)(lVar3 + 0x120) = 0;
    if ((char)param_5 != '\0') {
      uVar4 = FUN_18062b1e0(_DAT_180c8ed18,(ulonglong)param_5._4_4_ * 8 + 8,8,
                            *(undefined1 *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
      memset(uVar4,0,(ulonglong)param_5._4_4_ * 8);
    }
    *(undefined8 *)(lVar3 + 0x120) = *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar2 * 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + uVar2 * 8) = lVar3;
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
    lVar1 = *(longlong *)(param_1 + 8);
    *param_2 = lVar3;
    param_2[1] = lVar1 + uVar2 * 8;
    *(undefined1 *)(param_2 + 2) = 1;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    *param_2 = lVar3;
    param_2[1] = lVar1 + uVar2 * 8;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return param_2;
}



// 函数: 查找可用资源条目
// 参数:
//   param_1 - 资源池指针
//   param_2 - 返回的条目指针
// 功能: 在资源池中查找可用的资源条目
undefined8 find_available_resource_entry(ulonglong *resource_pool, undefined8 *entry_pointer)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar11 = *param_1;
  uVar10 = 0;
  uVar8 = uVar10;
  uVar12 = uVar10;
  uVar14 = uVar10;
  do {
    uVar9 = uVar8;
    if (uVar11 == 0) break;
    uVar7 = *(longlong *)(uVar11 + 0x20) - *(longlong *)(uVar11 + 0x28);
    if ((ulonglong)(*(longlong *)(uVar11 + 0x28) - *(longlong *)(uVar11 + 0x20)) <
        0x8000000000000001) {
      uVar7 = uVar10;
    }
    uVar13 = uVar12;
    if ((uVar7 != 0) && (uVar14 = uVar14 + 1, uVar9 = uVar11, uVar13 = uVar7, uVar7 <= uVar12)) {
      uVar9 = uVar8;
      uVar13 = uVar12;
    }
    plVar1 = (longlong *)(uVar11 + 8);
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
        lVar4 = *(longlong *)(uVar11 + 0x38);
        if (*(char *)(uVar11 + 0x48) == '\0') {
          if ((ulonglong)((*(longlong *)(uVar11 + 0x30) - lVar4) - *(longlong *)(uVar11 + 0x20)) <
              0x8000000000000001) goto LAB_180068c92;
          LOCK();
          plVar1 = (longlong *)(uVar11 + 0x30);
          lVar3 = *plVar1;
          *plVar1 = *plVar1 + 1;
          UNLOCK();
          if ((ulonglong)((lVar3 - *(longlong *)(uVar11 + 0x20)) - lVar4) < 0x8000000000000001)
          goto LAB_180068c87;
          LOCK();
          puVar2 = (ulonglong *)(uVar11 + 0x28);
          uVar8 = *puVar2;
          *puVar2 = *puVar2 + 1;
          UNLOCK();
          plVar1 = *(longlong **)(uVar11 + 0x60);
          lVar3 = *(longlong *)
                   (plVar1[3] +
                   (((uVar8 & 0xffffffffffffffe0) - **(longlong **)(plVar1[3] + plVar1[1] * 8) >> 5)
                    + plVar1[1] & *plVar1 - 1U) * 8);
          lVar4 = *(longlong *)(lVar3 + 8);
          *param_2 = *(undefined8 *)(lVar4 + (ulonglong)((uint)uVar8 & 0x1f) * 8);
          LOCK();
          plVar1 = (longlong *)(lVar4 + 0x108);
          lVar4 = *plVar1;
          *plVar1 = *plVar1 + 1;
          UNLOCK();
          if (lVar4 == 0x1f) {
            *(undefined8 *)(lVar3 + 8) = 0;
            func_0x000180060c10(*(undefined8 *)(uVar11 + 0x50));
          }
          bVar6 = true;
        }
        else {
          if (0x8000000000000000 <
              (ulonglong)((*(longlong *)(uVar11 + 0x30) - lVar4) - *(longlong *)(uVar11 + 0x20))) {
            LOCK();
            plVar1 = (longlong *)(uVar11 + 0x30);
            lVar3 = *plVar1;
            *plVar1 = *plVar1 + 1;
            UNLOCK();
            if (0x8000000000000000 < (ulonglong)((lVar3 - *(longlong *)(uVar11 + 0x20)) - lVar4)) {
              LOCK();
              puVar2 = (ulonglong *)(uVar11 + 0x28);
              uVar8 = *puVar2;
              *puVar2 = *puVar2 + 1;
              UNLOCK();
              plVar1 = *(longlong **)(uVar11 + 0x58);
              uVar12 = (ulonglong)((uint)uVar8 & 0x1f);
              lVar4 = *(longlong *)
                       (plVar1[2] + 8 +
                       (((uVar8 & 0xffffffffffffffe0) - *(longlong *)(plVar1[2] + plVar1[1] * 0x10)
                        >> 5) + plVar1[1] & *plVar1 - 1U) * 0x10);
              *param_2 = *(undefined8 *)(lVar4 + uVar12 * 8);
              *(undefined1 *)((lVar4 - uVar12) + 0x12f) = 1;
              bVar6 = true;
              goto LAB_180068c94;
            }
LAB_180068c87:
            LOCK();
            *(longlong *)(uVar11 + 0x38) = *(longlong *)(uVar11 + 0x38) + 1;
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
      plVar1 = (longlong *)(uVar11 + 8);
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
undefined8 get_resource_entry_data(longlong resource_entry, undefined8 *data_pointer)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    if ((ulonglong)
        ((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x38)) -
        *(longlong *)(param_1 + 0x20)) < 0x8000000000000001) {
      return 0;
    }
    LOCK();
    plVar1 = (longlong *)(param_1 + 0x30);
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (0x8000000000000000 <
        (ulonglong)((lVar3 - *(longlong *)(param_1 + 0x20)) - *(longlong *)(param_1 + 0x38))) {
      LOCK();
      puVar2 = (ulonglong *)(param_1 + 0x28);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      plVar1 = *(longlong **)(param_1 + 0x60);
      lVar5 = *(longlong *)
               (plVar1[3] +
               (((uVar4 & 0xffffffffffffffe0) - **(longlong **)(plVar1[3] + plVar1[1] * 8) >> 5) +
                plVar1[1] & *plVar1 - 1U) * 8);
      lVar3 = *(longlong *)(lVar5 + 8);
      *param_2 = *(undefined8 *)(lVar3 + (ulonglong)((uint)uVar4 & 0x1f) * 8);
      LOCK();
      plVar1 = (longlong *)(lVar3 + 0x108);
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (lVar3 == 0x1f) {
        *(undefined8 *)(lVar5 + 8) = 0;
        func_0x000180060c10(*(undefined8 *)(param_1 + 0x50));
      }
      return 1;
    }
  }
  else {
    if ((ulonglong)
        ((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x38)) -
        *(longlong *)(param_1 + 0x20)) < 0x8000000000000001) {
      return 0;
    }
    LOCK();
    plVar1 = (longlong *)(param_1 + 0x30);
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (0x8000000000000000 <
        (ulonglong)((lVar3 - *(longlong *)(param_1 + 0x20)) - *(longlong *)(param_1 + 0x38))) {
      LOCK();
      puVar2 = (ulonglong *)(param_1 + 0x28);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      plVar1 = *(longlong **)(param_1 + 0x58);
      uVar6 = (ulonglong)((uint)uVar4 & 0x1f);
      lVar3 = *(longlong *)
               (plVar1[2] + 8 +
               (((uVar4 & 0xffffffffffffffe0) - *(longlong *)(plVar1[2] + plVar1[1] * 0x10) >> 5) +
                plVar1[1] & *plVar1 - 1U) * 0x10);
      *param_2 = *(undefined8 *)(lVar3 + uVar6 * 8);
      *(undefined1 *)((lVar3 - uVar6) + 0x12f) = 1;
      return 1;
    }
  }
  LOCK();
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
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
longlong handle_resource_lifecycle(longlong *resource_ptr, longlong *event_data, int event_type, undefined8 event_param)

{
  longlong lVar1;
  longlong lVar2;
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
        FUN_18064e900(lVar2);
      }
    }
    else {
      if (param_3 == 1) {
        lVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x20,8,DAT_180bf65bc);
        lVar2 = *param_2;
        *(undefined8 *)(lVar1 + 0x10) = 0;
        *(code **)(lVar1 + 0x18) = _guard_check_icall;
        if (lVar1 != lVar2) {
          pcVar3 = *(code **)(lVar2 + 0x10);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(lVar1,lVar2,1);
            pcVar3 = *(code **)(lVar2 + 0x10);
          }
          *(code **)(lVar1 + 0x10) = pcVar3;
          *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
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
undefined8 *initialize_resource_entry(undefined8 *resource_entry, longlong config_param, undefined8 param_3, undefined8 param_4)

{
  undefined *puVar1;
  
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_1809feda8;
  param_1[1] = param_1 + 3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  puVar1 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 8);
  }
  strcpy_s(param_1[1],0x100,puVar1,param_4,0xfffffffffffffffe);
  return param_1;
}



// 函数: 创建默认资源条目
// 参数:
//   param_1 - 资源条目指针
// 功能: 创建具有默认配置的资源条目
undefined8 * create_default_resource_entry(undefined8 *resource_entry)

{
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_1809feda8;
  param_1[1] = param_1 + 3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = _guard_check_icall;
  param_1[0x2f] = 0;
  param_1[0x30] = _guard_check_icall;
  param_1[0x27] = 0xffffffffffffffff;
  param_1[0x24] = 0xffffffffffffffff;
  param_1[0x23] = 0xffffffffffffffff;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return param_1;
}





// 函数: 移动资源回调函数
// 参数:
//   param_1 - 目标资源
//   param_2 - 源资源
// 功能: 将资源的回调函数从源移动到目标
void move_resource_callbacks(longlong dest_resource, longlong src_resource)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_2 + 0x10);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,param_2,2);
    pcVar1 = *(code **)(param_2 + 0x10);
  }
  *(code **)(param_1 + 0x10) = pcVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(code **)(param_2 + 0x18) = _guard_check_icall;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}



// 函数: 释放内存块资源
// 参数:
//   param_1 - 内存块指针
//   param_2 - 释放标志
//   param_3, param_4 - 释放参数
// 功能: 根据标志释放内存块资源
longlong free_memory_block_resource(longlong memory_block, ulonglong free_flag, undefined8 param_3, undefined8 param_4)

{
  *(undefined **)(param_1 + 8) = &UNK_18098bcb0;
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
undefined8 *free_file_handle_resource(undefined8 *file_handle, ulonglong free_flag, undefined8 param_3, undefined8 param_4)

{
  *param_1 = &UNK_18098bcb0;
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
void copy_string_data(longlong dest_buffer, undefined8 src_string, int string_length)

{
  if (param_3 + 1 < 0x100) {
                    // WARNING: Subroutine does not return
    memcpy(*(undefined1 **)(param_1 + 8),param_2,(longlong)param_3);
  }
  **(undefined1 **)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
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
void reset_buffer_state(undefined1 *buffer)

{
  longlong unaff_RDI;
  
  *param_1 = 0;
  *(undefined4 *)(unaff_RDI + 0x10) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 字符串替换操作
// 参数:
//   param_1 - 字符串管理器
//   param_2 - 搜索字符串
//   param_3 - 替换字符串
// 功能: 在字符串中执行搜索和替换操作
void perform_string_replace(longlong string_manager, longlong search_string, longlong replace_string)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_198 [32];
  undefined8 uStack_178;
  undefined *puStack_168;
  undefined1 *puStack_160;
  undefined4 uStack_158;
  undefined1 auStack_150 [264];
  ulonglong uStack_48;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  puStack_168 = &UNK_1809feda8;
  puStack_160 = auStack_150;
  uStack_158 = 0;
  auStack_150[0] = 0;
  lVar1 = strstr(*(undefined8 *)(param_1 + 8));
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
    memcpy(puStack_160,*(longlong *)(param_1 + 8),lVar1 - *(longlong *)(param_1 + 8));
  }
  puStack_168 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_198);
}





// 函数: 设置字符串缓冲区
// 参数:
//   param_1 - 缓冲区结构体
//   param_2 - 源字符串
// 功能: 设置字符串缓冲区的内容和长度
void set_string_buffer(longlong buffer_struct, longlong src_string)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    **(undefined1 **)(param_1 + 8) = 0;
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
    strcpy_s(*(undefined8 *)(param_1 + 8),0x100);
    return;
  }
  FUN_180626f80(&UNK_18098bc48,0x100,param_2);
  *(undefined4 *)(param_1 + 0x10) = 0;
  **(undefined1 **)(param_1 + 8) = 0;
  return;
}



// 函数: 释放哈希表资源
// 参数:
//   param_1 - 哈希表指针
//   param_2 - 释放标志
//   param_3, param_4 - 释放参数
// 功能: 根据标志释放哈希表资源
longlong free_hash_table_resource(longlong hash_table, ulonglong free_flag, undefined8 param_3, undefined8 param_4)

{
  *(undefined **)(param_1 + 8) = &UNK_18098bcb0;
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
void cleanup_resource_entry(undefined8 *resource_entry, undefined8 param_2, undefined8 param_3, undefined8 param_4)

{
  if ((code *)param_1[0x2f] != (code *)0x0) {
    (*(code *)param_1[0x2f])(param_1 + 0x2d,0,0,param_4,0xfffffffffffffffe);
  }
  if ((code *)param_1[0x2b] != (code *)0x0) {
    (*(code *)param_1[0x2b])(param_1 + 0x29,0,0);
  }
  *param_1 = &UNK_18098bcb0;
  return;
}





// 函数: 重置字符串指针
// 参数:
//   param_1 - 字符串结构体
// 功能: 重置字符串指针为默认状态
void reset_string_pointer(longlong string_struct)

{
  *(undefined **)(param_1 + 8) = &UNK_18098bcb0;
  return;
}



// 函数: 初始化同步对象
// 参数:
//   param_1 - 同步对象指针
//   param_2 - 初始化标志
//   param_3, param_4 - 初始化参数
// 功能: 初始化同步对象的基本结构
undefined8 *initialize_sync_object(undefined8 *sync_object, ulonglong init_flag, undefined8 param_3, undefined8 param_4)

{
  *param_1 = &UNK_18098bdc8;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
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
undefined8 * free_sync_object(undefined8 *sync_object, ulonglong free_flag)

{
  *param_1 = &UNK_1809feeb8;
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
undefined8 free_event_object(undefined8 event_object, ulonglong free_flag)

{
  FUN_1800697a0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}





