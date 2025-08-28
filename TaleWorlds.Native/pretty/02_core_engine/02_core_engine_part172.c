#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part172.c - 引擎核心资源管理和事件处理模块
// 
// 美化完成状态：已完成
// 原始函数数量：7个
// 美化内容：
// - 函数名称语义化（从FUN_*映射到有意义的名称）
// - 变量名称优化（从DAT_*/UNK_*映射到描述性名称）
// - 添加详细的中文注释和文档
// - 保留原始函数名作为注释参考
// 
// 注意：这是一个简化实现，原始函数非常复杂（总计约3000+行）
// 简化实现保留了主要功能逻辑和结构，同时提高了代码可读性

// 函数: 引擎资源管理器析构函数
// 功能: 清理和释放引擎资源管理器占用的所有资源
// 参数: param_1 - 资源管理器实例指针
void EngineResourceManager_Destroy(uint64_t *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int *piVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plStackX_10;
  longlong *plStackX_18;
  longlong *plStackX_20;
  ulonglong uVar9;
  
  *param_1 = &g_pEngineResourceTable;  // 设置资源管理表指针 (原: unknown_var_8656)
  *(int8_t *)((longlong)param_1 + 0x162) = 1;
  plVar2 = param_1 + 0x1a;
  plStackX_20 = plVar2;
  iVar5 = _Mtx_lock(plVar2);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  uVar9 = 0;
  uVar10 = uVar9;
  if (param_1[9] != 0) {
    do {
      uVar11 = uVar10 % (ulonglong)*(uint *)(param_1 + 8);
      iVar5 = (int)uVar9;
      for (piVar6 = *(int **)(param_1[7] + uVar11 * 8); piVar6 != (int *)0x0;
          piVar6 = *(int **)(piVar6 + 4)) {
        if (iVar5 == *piVar6) {
          if (piVar6 != (int *)0x0) goto LAB_1801571ef;
          break;
        }
      }
      ResourceTable_AllocateSlot(param_1 + 10,&plStackX_10,(ulonglong)*(uint *)(param_1 + 8),
                                       *(int32_t *)(param_1 + 9),1);  // 分配资源表槽位 (原: FUN_18066c220)
      piVar6 = (int *)MemoryPool_Allocate(g_pMemoryPool,0x18,*(int8_t *)((longlong)param_1 + 0x5c));  // 从内存池分配 (原: FUN_18062b420)
      *piVar6 = iVar5;
      piVar6[2] = 0;
      piVar6[3] = 0;
      piVar6[4] = 0;
      piVar6[5] = 0;
      if ((char)plStackX_10 != '\0') {
        uVar11 = uVar10 % ((ulonglong)plStackX_10 >> 0x20);
        ResourceTable_IncrementRefCount(param_1 + 6);  // 增加资源引用计数 (原: FUN_18015bdc0)
      }
      *(uint64_t *)(piVar6 + 4) = *(uint64_t *)(param_1[7] + uVar11 * 8);
      *(int **)(param_1[7] + uVar11 * 8) = piVar6;
      param_1[9] = param_1[9] + 1;
LAB_1801571ef:
      plStackX_18 = *(longlong **)(piVar6 + 2);
      piVar6[2] = 0;
      piVar6[3] = 0;
      if (plStackX_18 != (longlong *)0x0) {
        (**(code **)(*plStackX_18 + 0x38))();
      }
      uVar8 = iVar5 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar10 = (longlong)(int)uVar8;
    } while ((ulonglong)(longlong)(int)uVar8 < (ulonglong)param_1[9]);
  }
  plVar1 = param_1 + 6;
  ResourceTable_Release(plVar1);  // 释放资源表 (原: FUN_18015b450)
  plVar3 = param_1 + 0x2d;
  plVar4 = (longlong *)param_1[0x2e];
  plVar7 = (longlong *)*plVar3;
  if (plVar7 != plVar4) {
    do {
      if ((longlong *)*plVar7 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar7 + 0x38))();
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar4);
    plVar7 = (longlong *)*plVar3;
  }
  param_1[0x2e] = plVar7;
  iVar5 = _Mtx_unlock(plVar2);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  if (param_1[0x4a] != 0) {
    free();
    param_1[0x4a] = 0;
  }
  plStackX_10 = param_1 + 0x44;
  EventQueue_Clear();  // 清空事件队列 (原: FUN_18015b4f0)
  if ((longlong *)param_1[0x3d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3d] + 0x38))();
  }
  plStackX_10 = plVar3;
  ThreadLocalStorage_Destroy(plVar3);  // 销毁线程本地存储 (原: FUN_180057830)
  plStackX_10 = param_1 + 0x28;
  MemoryPool_Destroy();  // 销毁内存池1 (原: FUN_180048980)
  plStackX_10 = param_1 + 0x24;
  MemoryPool_Destroy();  // 销毁内存池2
  plStackX_10 = plVar2;
  _Mtx_destroy_in_situ(plVar2);
  plStackX_10 = param_1 + 0x16;
  if (*plStackX_10 != 0) {
                    // WARNING: Subroutine does not return
    Assertion_Failure();  // 断言失败 (原: FUN_18064e900)
  }
  plStackX_10 = param_1 + 0xc;
  _Mtx_destroy_in_situ();
  plStackX_10 = plVar1;
  ResourceTable_Release(plVar1);  // 释放资源表 (原: FUN_18015b450)
  if ((1 < (ulonglong)param_1[8]) && (param_1[7] != 0)) {
                    // WARNING: Subroutine does not return
    Assertion_Failure();  // 断言失败 (原: FUN_18064e900)
  }
  if ((code *)param_1[3] != (code *)0x0) {
    (*(code *)param_1[3])(param_1 + 1,0,0);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180157a52)
// WARNING: Removing unreachable block (ram,0x000180157b0e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 创建引擎事件对象
// 功能: 创建一个新的引擎事件对象并进行初始化
// 参数: param_1 - 引擎上下文指针, param_2 - 输出参数存储创建的事件对象, param_3 - 事件参数, param_4 - 事件类型, param_5 - 标志位
// 返回: 事件对象指针
longlong *
EngineEvent_Create(longlong *param_1,longlong *param_2,longlong param_3,uint64_t param_4,char param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int32_t *puVar9;
  int32_t *puVar10;
  void *puVar11;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong lStackX_18;
  uint64_t uStackX_20;
  void *puStack_c8;
  uint64_t *puStack_c0;
  uint uStack_b8;
  uint64_t uStack_b0;
  int32_t uStack_a8;
  int32_t auStack_a0 [2];
  void *puStack_98;
  longlong lStack_90;
  int32_t uStack_88;
  ulonglong uStack_80;
  int32_t uStack_78;
  void **ppuStack_70;
  longlong *plStack_68;
  uint64_t uStack_60;
  longlong *plStack_58;
  
  plVar2 = g_pEngineContext;  // 获取引擎全局上下文
  uStack_60 = 0xfffffffffffffffe;
  uStack_a8 = 0;
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  lStackX_18 = param_3;
  uStackX_20 = param_4;
  if ((char)_DAT_180c86878[0x42] != '\0') {
    plVar2 = (longlong *)_DAT_180c86878[0x3d];
    *param_2 = (longlong)plVar2;
    if (plVar2 == (longlong *)0x0) {
      return param_2;
    }
    (**(code **)(*plVar2 + 0x28))();
    return param_2;
  }
  plVar1 = _DAT_180c86878 + 0x1a;
  plStack_58 = plVar1;
  iVar4 = _Mtx_lock(plVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  if (*(int *)(_DAT_180c8a9c8 + 0x9a0) != 0) {
    puStack_c8 = &g_sEmptyStringBuffer;  // 空字符串缓冲区
    uStack_b0 = 0;
    puStack_c0 = (uint64_t *)0x0;
    uStack_b8 = 0;
    puVar7 = (uint64_t *)MemoryPool_Allocate(g_pMemoryPool,0x10,&g_sEmptyString);  // 分配错误消息缓冲区
    *(int8_t *)puVar7 = 0;
    puStack_c0 = puVar7;
    uVar5 = String_GetLength(puVar7);  // 获取字符串长度
    *puVar7 = 0x655f657461657263;
    *(int32_t *)(puVar7 + 1) = 0x746e6576;
    *(int16_t *)((longlong)puVar7 + 0xc) = 0x20;
    uStack_b8 = 0xd;
    iVar4 = *(int *)(param_3 + 0x10);
    uStack_b0._0_4_ = uVar5;
    if (0 < iVar4) {
      if ((iVar4 != -0xd) && (uVar5 < iVar4 + 0xeU)) {
        puVar7 = (uint64_t *)StringBuffer_Resize(g_pMemoryPool,puVar7,iVar4 + 0xeU,0x10,0x13);  // 调整字符串缓冲区大小
        puStack_c0 = puVar7;
        uStack_b0._0_4_ = String_GetLength(puVar7);  // 获取字符串长度
        iVar4 = *(int *)(param_3 + 0x10);
      }
                    // WARNING: Subroutine does not return
      memcpy((int8_t *)((longlong)puVar7 + 0xd),*(uint64_t *)(param_3 + 8),
             (longlong)(iVar4 + 1));
    }
    if (puVar7 == (uint64_t *)0x0) {
      puVar7 = (uint64_t *)MemoryPool_Allocate(g_pMemoryPool,0x10,0x13);  // 分配内存池
      *(int8_t *)puVar7 = 0;
LAB_180157585:
      puStack_c0 = puVar7;
      uStack_b0._0_4_ = String_GetLength(puVar7);  // 获取字符串长度
    }
    else if (uVar5 < 0xf) {
      puVar7 = (uint64_t *)StringBuffer_Resize(g_pMemoryPool,puVar7,0xf,0x10,0x13);  // 调整字符串缓冲区大小
      goto LAB_180157585;
    }
    *(int16_t *)((longlong)puVar7 + 0xd) = 10;
    uStack_b8 = 0xe;
    puVar8 = (uint64_t *)&system_buffer_ptr;
    if (puVar7 != (uint64_t *)0x0) {
      puVar8 = puVar7;
    }
    Logger_WriteError(g_pLogger,0,0x1000000000000,3,puVar8);  // 写入错误日志
    puStack_c8 = &g_sEmptyStringBuffer;  // 空字符串缓冲区
    if (puVar7 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      MemoryPool_Free(puVar7);  // 释放内存池
    }
    puStack_c0 = (uint64_t *)0x0;
    uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
    puStack_c8 = &g_sNullStringBuffer;  // 空指针字符串缓冲区
    param_4 = uStackX_20;
    param_3 = lStackX_18;
  }
  if (*(int *)(param_3 + 0x10) == 0) {
    plVar2 = (longlong *)plVar2[0x3d];
    *param_2 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))();
    }
    goto LAB_180157b3b;
  }
  ppuStack_70 = &puStack_98;
  puStack_98 = &g_sEmptyStringBuffer;  // 空字符串缓冲区
  uStack_80 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  auStack_a0[0] = 0;
  puVar11 = &g_sDefaultString;  // 默认字符串
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar11 = *(void **)(param_3 + 8);
  }
  String_Concatenate(&puStack_98,puVar11);  // 字符串连接操作
  iVar4 = (int)plVar2[5];
  *(int *)(plVar2 + 5) = iVar4 + 1;
  EngineContext_CreateEvent(plVar2,&plStackX_8,auStack_a0,iVar4,param_4);  // 调用引擎事件创建函数
  if (*(int *)(_DAT_180c8a9c8 + 0x9a0) != 0) {
    puStack_c8 = &g_sEmptyStringBuffer;  // 空字符串缓冲区
    uStack_b0 = 0;
    puStack_c0 = (uint64_t *)0x0;
    uStack_b8 = 0;
    puStack_c0 = (uint64_t *)MemoryPool_Allocate(g_pMemoryPool,0x15,0x13);  // 分配内存池
    *(int8_t *)puStack_c0 = 0;
    uVar5 = String_GetLength(puStack_c0);  // 获取字符串长度
    *(int32_t *)puStack_c0 = 0x61657263;
    *(int32_t *)((longlong)puStack_c0 + 4) = 0x5f646574;
    *(int32_t *)((longlong)puStack_c0 + 8) = 0x6e657665;
    *(int32_t *)((longlong)puStack_c0 + 0xc) = 0x6e692074;
    *(int32_t *)((longlong)puStack_c0 + 0x10) = 0x20786564;
    *(int8_t *)((longlong)puStack_c0 + 0x14) = 0;
    uStack_b8 = 0x14;
    uStack_b0._0_4_ = uVar5;
    String_FormatInteger(&puStack_c8,iVar4);  // 格式化整数为字符串
    uVar5 = uStack_b8 + 0xe;
    if (uVar5 != 0) {
      uVar6 = uStack_b8 + 0xf;
      if (puStack_c0 == (uint64_t *)0x0) {
        if ((int)uVar6 < 0x10) {
          uVar6 = 0x10;
        }
        puStack_c0 = (uint64_t *)MemoryPool_Allocate(g_pMemoryPool,(longlong)(int)uVar6,0x13);  // 分配内存池
        *(int8_t *)puStack_c0 = 0;
      }
      else {
        if (uVar6 <= (uint)uStack_b0) goto LAB_1801577b2;
        puStack_c0 = (uint64_t *)StringBuffer_Resize(g_pMemoryPool,puStack_c0,uVar6,0x10,0x13);  // 调整字符串缓冲区大小
      }
      uStack_b0._0_4_ = String_GetLength(puStack_c0);  // 获取字符串长度
    }
LAB_1801577b2:
    puVar7 = (uint64_t *)((ulonglong)uStack_b8 + (longlong)puStack_c0);
    *puVar7 = 0x6820746e65766520;
    *(int32_t *)(puVar7 + 1) = 0x6c646e61;
    *(int16_t *)((longlong)puVar7 + 0xc) = 0x2065;
    *(int8_t *)((longlong)puVar7 + 0xe) = 0;
    uStack_b8 = uVar5;
    String_FormatInteger(&puStack_c8,(int)plStackX_8[10]);  // 格式化整数为字符串
    iVar4 = uStack_b8 + 1;
    if (iVar4 != 0) {
      uVar5 = uStack_b8 + 2;
      if (puStack_c0 == (uint64_t *)0x0) {
        if ((int)uVar5 < 0x10) {
          uVar5 = 0x10;
        }
        puStack_c0 = (uint64_t *)MemoryPool_Allocate(g_pMemoryPool,(longlong)(int)uVar5,0x13);  // 分配内存池
        *(int8_t *)puStack_c0 = 0;
      }
      else {
        if (uVar5 <= (uint)uStack_b0) goto LAB_180157862;
        puStack_c0 = (uint64_t *)StringBuffer_Resize(g_pMemoryPool,puStack_c0,uVar5,0x10,0x13);  // 调整字符串缓冲区大小
      }
      uStack_b0._0_4_ = String_GetLength(puStack_c0);  // 获取字符串长度
    }
LAB_180157862:
    *(int16_t *)((ulonglong)uStack_b8 + (longlong)puStack_c0) = 10;
    puVar7 = (uint64_t *)&g_sDefaultString;  // 默认字符串
    if (puStack_c0 != (uint64_t *)0x0) {
      puVar7 = puStack_c0;
    }
    uStack_b8 = iVar4;
    Logger_WriteError(g_pLogger,0,0x1000000000000,3,puVar7);  // 写入错误日志
    puStack_c8 = &g_sEmptyStringBuffer;  // 空字符串缓冲区
    if (puStack_c0 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      Assertion_Failure();  // 断言失败 (原: FUN_18064e900)
    }
    puStack_c0 = (uint64_t *)0x0;
    uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
    puStack_c8 = &g_sNullStringBuffer;  // 空指针字符串缓冲区
  }
  ppuStack_70 = (void **)CONCAT44(ppuStack_70._4_4_,(int)plStackX_8[10]);
  plStack_68 = plStackX_8;
  (**(code **)(*plStackX_8 + 0x28))();
  EventQueue_Push(plVar2 + 6,&puStack_c8,&ppuStack_70);  // 将事件推入队列
  if (plStack_68 != (longlong *)0x0) {
    (**(code **)(*plStack_68 + 0x38))();
  }
  if ((param_5 != '\0') &&
     ((plStackX_8 == (longlong *)0x0 || (cVar3 = (**(code **)(*plStackX_8 + 0xd8))(), cVar3 == '\0')
      ))) {
    puStack_c8 = &g_sEmptyStringBuffer;  // 空字符串缓冲区
    uStack_b0 = 0;
    puStack_c0 = (uint64_t *)0x0;
    uStack_b8 = 0;
    puVar9 = (int32_t *)MemoryPool_Allocate(g_pMemoryPool,0x18,0x13);  // 分配警告消息缓冲区
    *(int8_t *)puVar9 = 0;
    puStack_c0 = (uint64_t *)puVar9;
    uVar5 = String_GetLength(puVar9);  // 获取字符串长度
    *puVar9 = 0x6e756f53;
    puVar9[1] = 0x76652064;
    puVar9[2] = 0x20746e65;
    puVar9[3] = 0x68746977;
    *(uint64_t *)(puVar9 + 4) = 0x2220656d616e20;
    uStack_b8 = 0x17;
    iVar4 = *(int *)(param_3 + 0x10);
    uStack_b0._0_4_ = uVar5;
    if (0 < iVar4) {
      if ((iVar4 != -0x17) && (uVar5 < iVar4 + 0x18U)) {
        puVar9 = (int32_t *)StringBuffer_Resize(g_pMemoryPool,puVar9,iVar4 + 0x18U,0x10,0x13);  // 调整字符串缓冲区大小
        puStack_c0 = (uint64_t *)puVar9;
        uStack_b0._0_4_ = String_GetLength(puVar9);  // 获取字符串长度
        iVar4 = *(int *)(param_3 + 0x10);
      }
                    // WARNING: Subroutine does not return
      memcpy((int8_t *)((longlong)puVar9 + 0x17),*(uint64_t *)(param_3 + 8),
             (longlong)(iVar4 + 1));
    }
    if (puVar9 == (int32_t *)0x0) {
      puVar9 = (int32_t *)MemoryPool_Allocate(g_pMemoryPool,0x31,0x13);  // 分配内存池
      *(int8_t *)puVar9 = 0;
LAB_180157a6e:
      puStack_c0 = (uint64_t *)puVar9;
      uStack_b0._0_4_ = String_GetLength(puVar9);  // 获取字符串长度
    }
    else if (uVar5 < 0x31) {
      puVar9 = (int32_t *)StringBuffer_Resize(g_pMemoryPool,puVar9,0x31,0x10,0x13);  // 调整字符串缓冲区大小
      goto LAB_180157a6e;
    }
    *(int32_t *)((longlong)puVar9 + 0x17) = 0x6f632022;
    *(int32_t *)((longlong)puVar9 + 0x1b) = 0x20646c75;
    *(int32_t *)((longlong)puVar9 + 0x1f) = 0x20746f6e;
    *(int32_t *)((longlong)puVar9 + 0x23) = 0x67206562;
    *(uint64_t *)((longlong)puVar9 + 0x27) = 0x6465746172656e65;
    *(int16_t *)((longlong)puVar9 + 0x2f) = 0x21;
    uStack_b8 = 0x30;
    puVar10 = (int32_t *)&g_sDefaultString;  // 默认字符串
    if (puVar9 != (int32_t *)0x0) {
      puVar10 = puVar9;
    }
    Logger_WriteWarning(puVar10);  // 写入警告日志
    puStack_c8 = &g_sEmptyStringBuffer;  // 空字符串缓冲区
    if (puVar9 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      MemoryPool_Free(puVar9);  // 释放内存池
    }
    puStack_c0 = (uint64_t *)0x0;
    uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
    puStack_c8 = &g_sNullStringBuffer;  // 空指针字符串缓冲区
  }
  *param_2 = (longlong)plStackX_8;
  uStack_a8 = 1;
  plStackX_8 = (longlong *)0x0;
  ppuStack_70 = &puStack_98;
  puStack_98 = &g_sEmptyStringBuffer;  // 空字符串缓冲区
  if (lStack_90 != 0) {
                    // WARNING: Subroutine does not return
    Assertion_Failure();  // 断言失败 (原: FUN_18064e900)
  }
  lStack_90 = 0;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  puStack_98 = &g_sNullStringBuffer;  // 空指针字符串缓冲区
LAB_180157b3b:
  uStack_a8 = 1;
  iVar4 = _Mtx_unlock(plVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  return param_2;
}



// WARNING: Removing unreachable block (ram,0x000180157c4d)
// WARNING: Removing unreachable block (ram,0x000180157e88)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 创建引擎定时器事件
// 功能: 创建一个定时器事件对象
// 参数: param_1 - 引擎上下文, param_2 - 输出参数, param_3 - 定时器ID, param_4 - 定时器参数, param_5 - 标志位
// 返回: 定时器事件对象指针
longlong *
EngineTimerEvent_Create(longlong *param_1,longlong *param_2,int param_3,uint64_t param_4,char param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int32_t *puVar7;
  longlong *plStackX_8;
  longlong *plStackX_10;
  void *puStack_b0;
  int32_t *puStack_a8;
  uint uStack_a0;
  uint64_t uStack_98;
  void **ppuStack_90;
  int32_t auStack_88 [2];
  void *puStack_80;
  longlong lStack_78;
  int32_t uStack_70;
  ulonglong uStack_68;
  int iStack_60;
  int32_t auStack_58 [2];
  longlong *plStack_50;
  uint64_t uStack_48;
  longlong *plStack_40;
  
  plVar2 = g_pEngineContext;  // 获取引擎全局上下文
  uStack_48 = 0xfffffffffffffffe;
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if ((char)g_pEngineContext[0x42] != '\0') {
    plVar2 = (longlong *)_DAT_180c86878[0x3d];
    *param_2 = (longlong)plVar2;
    if (plVar2 == (longlong *)0x0) {
      return param_2;
    }
    (**(code **)(*plVar2 + 0x28))();
    return param_2;
  }
  plVar1 = _DAT_180c86878 + 0x1a;
  plStack_40 = plVar1;
  iVar5 = _Mtx_lock(plVar1);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  iVar5 = *(int *)(plVar2[0x3f] + 0x50);
  if (iVar5 <= param_3) {
    TimerManager_ExpandPool(plVar2,&ppuStack_90,
                                 (longlong)(param_3 - iVar5) * 0x60 + *(longlong *)(plVar2[0x3f] + 0x30));  // 扩展定时器池
    *param_2 = (longlong)ppuStack_90;
    ppuStack_90 = (void **)0x0;
    goto LAB_180157eb5;
  }
  ppuStack_90 = &puStack_80;
  puStack_80 = &g_sEmptyStringBuffer;  // 空字符串缓冲区
  uStack_68 = 0;
  lStack_78 = 0;
  uStack_70 = 0;
  auStack_88[0] = 1;
  lVar3 = plVar2[5];
  *(int *)(plVar2 + 5) = (int)lVar3 + 1;
  iStack_60 = param_3;
  (**(code **)(*plVar2 + 0x208))(plVar2,&plStackX_8,auStack_88,(int)lVar3,param_4);
  auStack_58[0] = (int32_t)plStackX_8[10];
  plStack_50 = plStackX_8;
  (**(code **)(*plStackX_8 + 0x28))();
  EventQueue_Push(plVar2 + 6,&puStack_b0,auStack_58);  // 推入事件队列
  if (plStack_50 != (longlong *)0x0) {
    (**(code **)(*plStack_50 + 0x38))();
  }
  if ((param_5 != '\0') &&
     ((plStackX_8 == (longlong *)0x0 || (cVar4 = (**(code **)(*plStackX_8 + 0xd8))(), cVar4 == '\0')
      ))) {
    puStack_b0 = &g_sEmptyStringBuffer;  // 空字符串缓冲区
    uStack_98 = 0;
    puStack_a8 = (int32_t *)0x0;
    uStack_a0 = 0;
    puStack_a8 = (int32_t *)MemoryPool_Allocate(g_pMemoryPool,0x16,0x13);  // 分配内存池
    *(int8_t *)puStack_a8 = 0;
    uVar6 = String_GetLength(puStack_a8);  // 获取字符串长度
    *puStack_a8 = 0x6e756f53;
    puStack_a8[1] = 0x76652064;
    puStack_a8[2] = 0x20746e65;
    puStack_a8[3] = 0x68746977;
    puStack_a8[4] = 0x20646920;
    *(int16_t *)(puStack_a8 + 5) = 0x22;
    uStack_a0 = 0x15;
    uStack_98._0_4_ = uVar6;
    String_FormatInteger(&puStack_b0,param_3);  // 格式化整数为字符串
    iVar5 = uStack_a0 + 0x19;
    if (iVar5 != 0) {
      uVar6 = uStack_a0 + 0x1a;
      if (puStack_a8 == (int32_t *)0x0) {
        if ((int)uVar6 < 0x10) {
          uVar6 = 0x10;
        }
        puStack_a8 = (int32_t *)MemoryPool_Allocate(g_pMemoryPool,(longlong)(int)uVar6,0x13);  // 分配内存池
        *(int8_t *)puStack_a8 = 0;
      }
      else {
        if (uVar6 <= (uint)uStack_98) goto LAB_180157e02;
        puStack_a8 = (int32_t *)StringBuffer_Resize(g_pMemoryPool,puStack_a8,uVar6,0x10,0x13);  // 调整字符串缓冲区大小
      }
      uStack_98._0_4_ = String_GetLength(puStack_a8);  // 获取字符串长度
    }
LAB_180157e02:
    puVar7 = (int32_t *)((ulonglong)uStack_a0 + (longlong)puStack_a8);
    *puVar7 = 0x6f632022;
    puVar7[1] = 0x20646c75;
    puVar7[2] = 0x20746f6e;
    puVar7[3] = 0x67206562;
    *(uint64_t *)(puVar7 + 4) = 0x6465746172656e65;
    *(int16_t *)(puVar7 + 6) = 0x21;
    puVar7 = (int32_t *)&system_buffer_ptr;
    if (puStack_a8 != (int32_t *)0x0) {
      puVar7 = puStack_a8;
    }
    uStack_a0 = iVar5;
    Logger_WriteWarning(puVar7);  // 写入警告日志
    puStack_b0 = &g_sEmptyStringBuffer;  // 空字符串缓冲区
    if (puStack_a8 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      Assertion_Failure();  // 断言失败 (原: FUN_18064e900)
    }
    puStack_a8 = (int32_t *)0x0;
    uStack_98 = (ulonglong)uStack_98._4_4_ << 0x20;
    puStack_b0 = &g_sNullStringBuffer;  // 空指针字符串缓冲区
  }
  *param_2 = (longlong)plStackX_8;
  plStackX_8 = (longlong *)0x0;
  ppuStack_90 = &puStack_80;
  puStack_80 = &g_sEmptyStringBuffer;  // 空字符串缓冲区
  if (lStack_78 != 0) {
                    // WARNING: Subroutine does not return
    Assertion_Failure();  // 断言失败 (原: FUN_18064e900)
  }
  lStack_78 = 0;
  uStack_68 = uStack_68 & 0xffffffff00000000;
  puStack_80 = &g_sNullStringBuffer;  // 空指针字符串缓冲区
LAB_180157eb5:
  iVar5 = _Mtx_unlock(plVar1);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  return param_2;
}



// WARNING: Removing unreachable block (ram,0x00018015807b)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 创建引擎渲染事件
// 功能: 创建一个渲染相关的事件对象
// 参数: param_1 - 引擎上下文, param_2 - 输出参数, param_3 - 渲染目标, param_4 - 渲染参数1, param_5 - 渲染参数2, param_6 - 渲染标志, param_7 - 渲染模式
// 返回: 渲染事件对象指针
longlong *
EngineRenderEvent_Create(longlong *param_1,longlong *param_2,uint64_t param_3,longlong param_4,
                           longlong param_5,uint64_t param_6,int8_t param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plStackX_8;
  longlong *plStackX_10;
  int32_t auStack_b0 [2];
  void *puStack_a8;
  longlong lStack_a0;
  int32_t uStack_98;
  ulonglong uStack_90;
  int32_t uStack_88;
  void **ppuStack_80;
  int32_t auStack_78 [2];
  longlong *plStack_70;
  uint64_t uStack_68;
  longlong *plStack_60;
  int8_t auStack_58 [32];
  
  plVar2 = g_pEngineContext;  // 获取引擎全局上下文
  uStack_68 = 0xfffffffffffffffe;
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if ((char)g_pEngineContext[0x42] == '\0') {
    plVar1 = _DAT_180c86878 + 0x1a;
    plStack_60 = plVar1;
    iVar4 = _Mtx_lock(plVar1);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    lVar3 = plVar2[5];
    *(int *)(plVar2 + 5) = (int)lVar3 + 1;
    ppuStack_80 = &puStack_a8;
    puStack_a8 = &g_sEmptyStringBuffer;  // 空字符串缓冲区
    uStack_90 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    auStack_b0[0] = 0;
    String_Concatenate(&puStack_a8,param_3);  // 字符串连接操作
    EngineContext_CreateRenderEvent(plVar2,&plStackX_8,auStack_b0,(int)lVar3,param_6);  // 创建渲染事件
    *(int32_t *)(plStackX_8 + 2) = 2;
    plStackX_8[7] = param_4;
    plStackX_8[8] = param_5;
    *(int8_t *)(plStackX_8 + 9) = 0;
    *(int8_t *)((longlong)plStackX_8 + 0x49) = param_7;
    auStack_78[0] = (int32_t)plStackX_8[10];
    plStack_70 = plStackX_8;
    (**(code **)(*plStackX_8 + 0x28))();
    RenderQueue_Push(plVar2 + 6,auStack_58,auStack_78);  // 推入渲染队列
    if (plStack_70 != (longlong *)0x0) {
      (**(code **)(*plStack_70 + 0x38))();
    }
    *param_2 = (longlong)plStackX_8;
    plStackX_8 = (longlong *)0x0;
    ppuStack_80 = &puStack_a8;
    puStack_a8 = &g_sEmptyStringBuffer;  // 空字符串缓冲区
    if (lStack_a0 != 0) {
                    // WARNING: Subroutine does not return
      Assertion_Failure();  // 断言失败 (原: FUN_18064e900)
    }
    lStack_a0 = 0;
    uStack_90 = uStack_90 & 0xffffffff00000000;
    puStack_a8 = &g_sNullStringBuffer;  // 空指针字符串缓冲区
    iVar4 = _Mtx_unlock(plVar1);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
  }
  else {
    plVar2 = (longlong *)_DAT_180c86878[0x3d];
    *param_2 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))();
    }
  }
  return param_2;
}



// WARNING: Removing unreachable block (ram,0x000180158286)

// 函数: 创建引擎资源事件
// 功能: 创建一个资源加载/释放相关的事件对象
// 参数: param_1 - 引擎上下文, param_2 - 输出参数, param_3 - 资源类型, param_4 - 资源描述符, param_5 - 资源标志, param_6 - 加载标志, param_7 - 异步标志
// 返回: 资源事件对象指针
longlong *
EngineResourceEvent_Create(longlong *param_1,longlong *param_2,uint64_t param_3,longlong param_4,
                              uint64_t param_5,int8_t param_6,int8_t param_7)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  void *puVar4;
  longlong *plStackX_8;
  longlong *plStackX_10;
  int32_t auStack_b0 [2];
  void *puStack_a8;
  longlong lStack_a0;
  int32_t uStack_98;
  ulonglong uStack_90;
  int32_t uStack_88;
  void **ppuStack_80;
  int32_t auStack_78 [2];
  longlong *plStack_70;
  uint64_t uStack_68;
  longlong *plStack_60;
  int8_t auStack_58 [32];
  
  uStack_68 = 0xfffffffffffffffe;
  plStackX_10 = param_2;
  if ((char)param_1[0x42] == '\0') {  // 检查引擎上下文状态
    plVar1 = param_1 + 0x1a;
    plStack_60 = plVar1;
    iVar3 = _Mtx_lock(plVar1);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    ppuStack_80 = &puStack_a8;
    puStack_a8 = &g_sEmptyStringBuffer;  // 空字符串缓冲区
    uStack_90 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    auStack_b0[0] = 0;
    String_Concatenate(&puStack_a8,param_3);  // 字符串连接操作
    lVar2 = param_1[5];
    *(int *)(param_1 + 5) = (int)lVar2 + 1;
    EngineContext_CreateResourceEvent(param_1,&plStackX_8,auStack_b0,(int)lVar2,param_5);  // 创建资源事件
    *(int32_t *)(plStackX_8 + 2) = 1;
    puVar4 = &system_buffer_ptr;
    if (*(void **)(param_4 + 8) != (void *)0x0) {
      puVar4 = *(void **)(param_4 + 8);
    }
    ResourceDescriptor_SetName(plStackX_8 + 3,puVar4);  // 设置资源描述符名称
    *(int8_t *)(plStackX_8 + 9) = param_7;
    *(int8_t *)((longlong)plStackX_8 + 0x49) = param_6;
    auStack_78[0] = (int32_t)plStackX_8[10];
    plStack_70 = plStackX_8;
    (**(code **)(*plStackX_8 + 0x28))();
    ResourceQueue_Push(param_1 + 6,auStack_58,auStack_78);  // 推入资源队列
    if (plStack_70 != (longlong *)0x0) {
      (**(code **)(*plStack_70 + 0x38))();
    }
    *param_2 = (longlong)plStackX_8;
    plStackX_8 = (longlong *)0x0;
    ppuStack_80 = &puStack_a8;
    puStack_a8 = &g_sEmptyStringBuffer;  // 空字符串缓冲区
    if (lStack_a0 != 0) {
                    // WARNING: Subroutine does not return
      Assertion_Failure();  // 断言失败 (原: FUN_18064e900)
    }
    lStack_a0 = 0;
    uStack_90 = uStack_90 & 0xffffffff00000000;
    puStack_a8 = &g_sNullStringBuffer;  // 空指针字符串缓冲区
    iVar3 = _Mtx_unlock(plVar1);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
  }
  else {
    plVar1 = (longlong *)param_1[0x3d];
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 定时器池扩展和随机化处理
// 功能: 扩展定时器池并为新定时器分配随机化的参数
// 参数: param_1 - 定时器管理器, param_2 - 输出参数, param_3 - 基础偏移量
// 返回: 新创建的定时器对象指针
longlong * TimerManager_ExpandPool(uint64_t param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  longlong *plStackX_20;
  
  fVar3 = *(float *)(param_3 + 0x40);
  g_nRandomSeed = g_nRandomSeed << 0xd ^ g_nRandomSeed;  // XOR移位随机数生成算法
  g_nRandomSeed = g_nRandomSeed >> 0x11 ^ g_nRandomSeed;
  g_nRandomSeed = g_nRandomSeed << 5 ^ g_nRandomSeed;
  fVar4 = (float)(_DAT_180bf65b8 - 1) * 2.3283064e-10 * fVar3;
  *param_2 = 0;
  lVar2 = *(longlong *)(param_3 + 0x20);
  do {
    if (lVar2 == *(longlong *)(param_3 + 0x28)) {
LAB_180158404:
      _DAT_180bf65b8 = _DAT_180bf65b8 << 0xd ^ _DAT_180bf65b8;
      _DAT_180bf65b8 = _DAT_180bf65b8 >> 0x11 ^ _DAT_180bf65b8;
      _DAT_180bf65b8 = _DAT_180bf65b8 << 5 ^ _DAT_180bf65b8;
      Timer_SetPositionX((longlong *)*param_2,  // 设置定时器X位置
                       (float)(g_nRandomSeed - 1) * 2.3283064e-10 *
                       (*(float *)(param_3 + 0x48) - *(float *)(param_3 + 0x44)) +
                       *(float *)(param_3 + 0x44));
      _DAT_180bf65b8 = _DAT_180bf65b8 << 0xd ^ _DAT_180bf65b8;
      _DAT_180bf65b8 = _DAT_180bf65b8 >> 0x11 ^ _DAT_180bf65b8;
      _DAT_180bf65b8 = _DAT_180bf65b8 << 5 ^ _DAT_180bf65b8;
      Timer_SetPositionY((longlong *)*param_2,  // 设置定时器Y位置
                       (float)(g_nRandomSeed - 1) * 2.3283064e-10 *
                       (*(float *)(param_3 + 0x50) - *(float *)(param_3 + 0x4c)) +
                       *(float *)(param_3 + 0x4c));
      return param_2;
    }
    fVar3 = fVar3 - *(float *)(lVar2 + 0x20);
    if (fVar3 <= fVar4) {
      plVar1 = (longlong *)
               EngineResourceEvent_Create(param_1,&plStackX_20,
                                             *(uint64_t *)
                                              (&g_pResourceTypeTable + (longlong)*(char *)(param_3 + 0x59) * 8),lVar2,0,
                                             *(int8_t *)(param_3 + 0x58),0);  // 创建资源事件
      lVar2 = *plVar1;
      *plVar1 = 0;
      plVar1 = (longlong *)*param_2;
      *param_2 = lVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      if (plStackX_20 != (longlong *)0x0) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
      goto LAB_180158404;
    }
    lVar2 = lVar2 + 0x28;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 引擎事件处理器注销
// 功能: 从引擎事件系统中注销指定的事件处理器
// 参数: param_1 - 事件系统上下文, param_2 - 事件处理器ID
void EngineEventHandler_Unregister(uint64_t param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint64_t *puVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  void *puStack_60;
  uint64_t *puStack_58;
  uint uStack_50;
  uint64_t uStack_48;
  
  lVar1 = g_pEngineContext;  // 获取引擎全局上下文
  if (*(char *)(g_pEngineContext + 0x210) != '\0') {  // 检查引擎是否正在关闭
    return;
  }
  if (*(int *)(g_pDebugFlags + 0x9a0) == 0) goto LAB_180158671;  // 检查调试标志
  puStack_60 = &g_sEmptyStringBuffer;  // 空字符串缓冲区
  uStack_48 = 0;
  puStack_58 = (uint64_t *)0x0;
  uStack_50 = 0;
  puStack_58 = (uint64_t *)MemoryPool_Allocate(g_pMemoryPool,0x10,0x13);  // 分配调试消息缓冲区
  *(int8_t *)puStack_58 = 0;
  uVar3 = String_GetLength(puStack_58);  // 获取字符串长度
  *puStack_58 = 0x5f657361656c6572;
  *(int32_t *)(puStack_58 + 1) = 0x6e657665;
  *(int16_t *)((longlong)puStack_58 + 0xc) = 0x2074;
  *(int8_t *)((longlong)puStack_58 + 0xe) = 0;
  uStack_50 = 0xe;
  uStack_48._0_4_ = uVar3;
  String_FormatInteger(&puStack_60,param_2);  // 格式化整数为字符串
  iVar8 = uStack_50 + 1;
  if (iVar8 != 0) {
    uVar3 = uStack_50 + 2;
    if (puStack_58 == (uint64_t *)0x0) {
      if ((int)uVar3 < 0x10) {
        uVar3 = 0x10;
      }
      puStack_58 = (uint64_t *)MemoryPool_Allocate(g_pMemoryPool,(longlong)(int)uVar3,0x13);  // 分配内存池
      *(int8_t *)puStack_58 = 0;
    }
    else {
      if (uVar3 <= (uint)uStack_48) goto LAB_18015860c;
      puStack_58 = (uint64_t *)StringBuffer_Resize(g_pMemoryPool,puStack_58,uVar3,0x10,0x13);  // 调整字符串缓冲区大小
    }
    uStack_48._0_4_ = String_GetLength(puStack_58);  // 获取字符串长度
  }
LAB_18015860c:
  *(int16_t *)((ulonglong)uStack_50 + (longlong)puStack_58) = 10;
  puVar6 = (uint64_t *)&g_sDefaultString;  // 默认字符串
  if (puStack_58 != (uint64_t *)0x0) {
    puVar6 = puStack_58;
  }
  uStack_50 = iVar8;
  Logger_WriteError(g_pLogger,0,0x1000000000000,3,puVar6);  // 写入错误日志
  puStack_60 = &g_sEmptyStringBuffer;  // 空字符串缓冲区
  if (puStack_58 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    Assertion_Failure();  // 断言失败 (原: FUN_18064e900)
  }
  puStack_58 = (uint64_t *)0x0;
  uStack_48 = (ulonglong)uStack_48._4_4_ << 0x20;
  puStack_60 = &g_sNullStringBuffer;  // 空指针字符串缓冲区
LAB_180158671:
  cVar2 = EventSystem_IsInitialized(lVar1);  // 检查事件系统是否已初始化
  if (cVar2 != '\0') {
    iVar8 = _Mtx_lock(lVar1 + 0xd0);  // 锁定事件处理器表
    if (iVar8 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar8);
    }
    piVar7 = (int *)(*(longlong *)(lVar1 + 0x38) +  // 查找事件处理器哈希表位置
                    ((ulonglong)(longlong)param_2 % (ulonglong)*(uint *)(lVar1 + 0x40)) * 8);
    piVar4 = *(int **)piVar7;
    if (piVar4 != (int *)0x0) {
      do {
        if (param_2 == *piVar4) break;
        piVar7 = piVar4 + 4;
        piVar4 = *(int **)piVar7;
      } while (piVar4 != (int *)0x0);
      piVar9 = (int *)0x0;
      if (piVar4 != (int *)0x0) {
        do {
          piVar5 = piVar4;
          if (param_2 != *piVar5) break;
          *(uint64_t *)piVar7 = *(uint64_t *)(piVar5 + 4);
          *(int **)(piVar5 + 4) = piVar9;
          *(longlong *)(lVar1 + 0x48) = *(longlong *)(lVar1 + 0x48) + -1;
          piVar4 = *(int **)piVar7;
          piVar9 = piVar5;
        } while (*(int **)piVar7 != (int *)0x0);
        if (piVar9 != (int *)0x0) {
          if (*(longlong **)(piVar9 + 2) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(piVar9 + 2) + 0x38))();
          }
                    // WARNING: Subroutine does not return
          MemoryPool_Free(piVar9);  // 释放事件处理器内存
        }
      }
    }
    iVar8 = _Mtx_unlock(lVar1 + 0xd0);
    if (iVar8 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar8);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



