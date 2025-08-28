/**
 * TaleWorlds.Native - 系统初始化模块第014部分
 * 
 * 文件说明：
 * 这是 Mount & Blade II: Bannerlord Native DLL 的系统初始化模块第014部分
 * 包含字符串处理、内存管理、系统工具函数等
 * 
 * 模块范围：地址 0x00000-0x0FFFF
 * 
 * 创建时间：2025-08-28
 * 版本：1.0
 */

#include "TaleWorlds.Native.Split.h"

/*=============================================================================
 * 模块说明
 *=============================================================================*/

/**
 * 系统初始化模块第014部分功能概述：
 * 
 * 1. 字符串处理功能
 *    - 安全字符串复制和操作
 *    - 字符串搜索和比较
 *    - 字符串长度计算
 *    - 字符串格式化处理
 * 
 * 2. 内存管理功能
 *    - 内存分配和释放
 *    - 内存池管理
 *    - 内存对齐处理
 *    - 内存垃圾回收
 * 
 * 3. 同步原语管理
 *    - 信号量操作
 *    - 互斥锁管理
 *    - 条件变量处理
 *    - 线程同步机制
 * 
 * 4. 系统工具函数
 *    - 系统资源清理
 *    - 错误处理和日志
 *    - 配置管理
 *    - 系统状态监控
 */

/*=============================================================================
 * 函数别名定义
 *=============================================================================*/

// 字符串处理函数别名
#define SystemStringProcessor_1       FUN_180045fc0
#define SystemStringProcessor_2       FUN_1800464f0
#define SystemStringCopier            FUN_180046380
#define SystemStringAppender          FUN_180046400
#define SystemStringInitializer       FUN_180046444

// 内存管理函数别名
#define SystemMemoryManager_1         FUN_180046340
#define SystemMemoryManager_2         FUN_180046650
#define SystemMemoryManager_3         FUN_180046790
#define SystemMemoryCleaner           FUN_180046820
#define SystemMemoryAllocator         FUN_180046840

// 同步原语管理函数别名
#define SystemSemaphoreManager        FUN_180046130
#define SystemMutexManager_1          FUN_180046160
#define SystemMutexManager_2          FUN_1800466a0
#define SystemConditionVariableManager FUN_180046190
#define SystemConditionVariableNotifier FUN_1800466d0

// 系统工具函数别名
#define SystemResourceCleaner_1       FUN_1800462c0
#define SystemResourceCleaner_2       FUN_180046240
#define SystemResourceCleaner_3       FUN_180046750
#define SystemResourceInitializer     FUN_180046480
#define SystemResourceHandler          FUN_180046ca0
#define SystemResourceProcessor       FUN_180046e20
#define SystemResourceFinder          FUN_180046b80
#define SystemResourceInserter        FUN_180046890
#define SystemResourceDeleter         FUN_180046b10

// 系统工具函数别名（续）
#define SystemConfigManager           FUN_180047d40
#define SystemResourceReleaser_1      FUN_180047e10
#define SystemResourceReleaser_2      FUN_180047e40
#define SystemResourceHandler_2       FUN_180047e70

/*=============================================================================
 * 字符串处理函数
 *=============================================================================*/

/**
 * @brief 系统字符串处理器 1
 * 
 * 这个函数负责处理字符串搜索和复制操作。
 * 它会在输入字符串中搜索特定模式，然后进行相应的处理。
 * 
 * @param param_1 字符串处理上下文指针
 * @param param_2 源字符串指针
 * @param param_3 目标字符串指针
 */
void SystemStringProcessor_1(longlong param_1, longlong param_2, longlong param_3)
{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined1 auStack_498 [32];
    undefined8 uStack_478;
    undefined *puStack_468;
    undefined1 *puStack_460;
    undefined4 uStack_458;
    undefined1 auStack_450 [1032];
    ulonglong uStack_48;
    
    /* 初始化栈变量 */
    uStack_478 = 0xfffffffffffffffe;
    uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_498;
    puStack_468 = &UNK_18098bb30;
    puStack_460 = auStack_450;
    uStack_458 = 0;
    auStack_450[0] = 0;
    
    /* 搜索字符串模式 */
    lVar1 = strstr(*(undefined8 *)(param_1 + 8));
    if (lVar1 != 0) {
        /* 计算源字符串长度 */
        lVar2 = -1;
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(param_2 + lVar3) != '\0');
        
        /* 计算目标字符串长度 */
        do {
            lVar2 = lVar2 + 1;
        } while (*(char *)(lVar2 + param_3) != '\0');
        
        /* 执行字符串复制操作 */
        memcpy(puStack_460, *(longlong *)(param_1 + 8), lVar1 - *(longlong *)(param_1 + 8));
    }
    
    /* 更新处理状态 */
    puStack_468 = &UNK_18098bcb0;
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_498);
}

/**
 * @brief 系统信号量管理器
 * 
 * 负责管理信号量的释放操作，确保线程间的同步。
 * 
 * @param param_1 信号量句柄指针
 * @param param_2 释放的信号量数量
 */
void SystemSemaphoreManager(undefined8 *param_1, undefined4 param_2)
{
    int iVar1;
    
    /* 循环释放信号量直到成功 */
    do {
        iVar1 = ReleaseSemaphore(*param_1, param_2, 0);
    } while (iVar1 == 0);
}

/**
 * @brief 系统互斥锁管理器 1
 * 
 * 负责安全地释放互斥锁，确保线程同步。
 * 
 * @param param_1 互斥锁句柄指针
 */
void SystemMutexManager_1(undefined8 *param_1)
{
    int iVar1;
    
    /* 检查互斥锁状态 */
    if (*(char *)(param_1 + 1) != '\0') {
        iVar1 = _Mtx_unlock(*param_1);
        if (iVar1 != 0) {
            __Throw_C_error_std__YAXH_Z(iVar1);
        }
    }
}
/**
 * @brief 系统条件变量管理器
 * 
 * 负责管理条件变量的等待和通知机制。
 * 
 * @param param_1 条件变量上下文指针
 * @param param_2 等待参数
 * @param param_3 超时参数
 * @param param_4 同步参数
 * @return 操作结果：1表示成功
 */
undefined8 SystemConditionVariableManager(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    char cVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined1 uVar5;
    
    /* 初始化变量 */
    uVar4 = 0xfffffffffffffffe;
    lVar3 = param_1 + 0x48;
    
    /* 获取互斥锁 */
    iVar2 = _Mtx_lock();
    if (iVar2 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar2);
    }
    
    uVar5 = 1;
    
    /* 检查条件变量状态 */
    if (*(char *)(param_1 + 0x98) != '\x01') {
        cVar1 = *(char *)(param_1 + 0x98);
        while (cVar1 == '\0') {
            /* 等待条件变量 */
            iVar2 = _Cnd_wait(param_1, lVar3, param_3, param_4, uVar4, lVar3, uVar5);
            if (iVar2 != 0) {
                __Throw_C_error_std__YAXH_Z(iVar2);
            }
            cVar1 = *(char *)(param_1 + 0x98);
        }
    }
    
    /* 重置条件变量状态 */
    *(undefined1 *)(param_1 + 0x98) = 0;
    
    /* 释放互斥锁 */
    iVar2 = _Mtx_unlock(lVar3);
    if (iVar2 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar2);
    }
    
    return 1;
}
/**
 * @brief 系统资源清理器 2
 * 
 * 负责清理和释放系统资源，包括内存和其他系统对象。
 * 
 * @param param_1 资源管理器指针
 * @param param_2 资源数据指针
 * @return 清理结果状态码
 */
longlong SystemResourceCleaner_2(undefined4 *param_1, undefined4 *param_2)
{
    undefined4 uVar1;
    char cVar2;
    undefined *puVar3;
    
    /* 检查资源管理器状态 */
    if (*(longlong *)(param_1 + 0x18) != 0) {
        /* 执行资源清理回调 */
        cVar2 = (**(code **)(param_1 + 0x1a))(param_2, param_1 + 0x14);
        if (cVar2 == '\0') {
            /* 处理清理成功的情况 */
            if (DAT_180c82860 == '\0') {
                puVar3 = &DAT_18098bc73;
                if (*(undefined **)(param_1 + 4) != (undefined *)0x0) {
                    puVar3 = *(undefined **)(param_1 + 4);
                }
                FUN_180626f80(&UNK_18098bc00, puVar3);
            }
            *param_1 = param_1[0x12];
            return (ulonglong)(uint3)((uint)param_1[0x12] >> 8) << 8;
        }
    }
    
    /* 更新资源状态 */
    uVar1 = *param_2;
    *param_1 = uVar1;
    return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8), 1);
}
/**
 * @brief 系统资源清理器 1
 * 
 * 负责清理系统资源并更新相关状态。
 * 
 * @param param_1 资源标识符
 * @param param_2 清理参数
 */
void SystemResourceCleaner_1(undefined8 param_1, undefined4 param_2)
{
    longlong lVar1;
    char cVar2;
    undefined *puVar3;
    undefined4 auStackX_10 [6];
    
    /* 获取资源管理器指针 */
    lVar1 = _DAT_180c86920;
    
    /* 检查资源状态并执行清理 */
    if ((*(longlong *)(_DAT_180c86920 + 0x22f0) != 0) &&
        (auStackX_10[0] = param_2, cVar2 = (**(code **)(_DAT_180c86920 + 0x22f8))(auStackX_10),
         param_2 = auStackX_10[0], cVar2 == '\0')) {
        
        /* 处理清理成功的情况 */
        if (DAT_180c82860 == '\0') {
            puVar3 = &DAT_18098bc73;
            if (*(undefined **)(lVar1 + 0x22a0) != (undefined *)0x0) {
                puVar3 = *(undefined **)(lVar1 + 0x22a0);
            }
            FUN_180626f80(&UNK_18098bc00, puVar3);
        }
        *(undefined4 *)(lVar1 + 0x2290) = *(undefined4 *)(lVar1 + 0x22d8);
        return;
    }
    
    /* 更新资源状态 */
    *(undefined4 *)(lVar1 + 0x2290) = param_2;
}
/**
 * @brief 系统内存管理器 1
 * 
 * 负责管理内存的分配和释放操作。
 * 
 * @param param_1 内存管理器指针
 * @param param_2 内存操作标志
 * @param param_3 内存参数1
 * @param param_4 内存参数2
 * @return 内存管理器指针
 */
undefined8 *SystemMemoryManager_1(undefined8 *param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4)
{
    /* 重置内存管理器状态 */
    *param_1 = &UNK_18098bcb0;
    
    /* 根据标志决定是否释放内存 */
    if ((param_2 & 1) != 0) {
        free(param_1, 0x38, param_3, param_4, 0xfffffffffffffffe);
    }
    
    return param_1;
}





// 函数: void FUN_180046380(longlong param_1,longlong param_2)
void FUN_180046380(longlong param_1,longlong param_2)

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
  if ((int)lVar1 < 0x20) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x0001800463b7. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(undefined8 *)(param_1 + 8),0x20);
    return;
  }
  FUN_180626f80(&UNK_18098bc48,0x20,param_2);
  *(undefined4 *)(param_1 + 0x10) = 0;
  **(undefined1 **)(param_1 + 8) = 0;
  return;
}





// 函数: void FUN_180046400(longlong param_1,undefined8 param_2,int param_3)
void FUN_180046400(longlong param_1,undefined8 param_2,int param_3)

{
  if (param_3 + 1 < 0x20) {
                    // WARNING: Subroutine does not return
    memcpy(*(undefined1 **)(param_1 + 8),param_2,(longlong)param_3);
  }
  **(undefined1 **)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}





// 函数: void FUN_18004641f(void)
void FUN_18004641f(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}





// 函数: void FUN_180046444(undefined1 *param_1)
void FUN_180046444(undefined1 *param_1)

{
  longlong unaff_RDI;
  
  *param_1 = 0;
  *(undefined4 *)(unaff_RDI + 0x10) = 0;
  return;
}



undefined8 * FUN_180046480(undefined8 *param_1)

{
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_18098bc80;
  param_1[1] = param_1 + 3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800464f0(longlong param_1,longlong param_2,longlong param_3)
void FUN_1800464f0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 *puStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [32];
  ulonglong uStack_48;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  puStack_80 = &UNK_18098bc80;
  puStack_78 = auStack_68;
  uStack_70 = 0;
  auStack_68[0] = 0;
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
    memcpy(puStack_78,*(longlong *)(param_1 + 8),lVar1 - *(longlong *)(param_1 + 8));
  }
  puStack_80 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_a8);
}



undefined8 * FUN_180046650(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18098bcb0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18);
  }
  return param_1;
}





// 函数: void FUN_1800466a0(undefined8 *param_1)
void FUN_1800466a0(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = _Mtx_unlock(*param_1);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}





// 函数: void FUN_1800466d0(longlong param_1)
void FUN_1800466d0(longlong param_1)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(param_1 + 0x48);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  *(undefined1 *)(param_1 + 0x98) = 1;
  iVar1 = _Cnd_broadcast(param_1);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  iVar1 = _Mtx_unlock(param_1 + 0x48);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}





// 函数: void FUN_180046750(undefined8 *param_1)
void FUN_180046750(undefined8 *param_1)

{
  *param_1 = &UNK_18098bdc8;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}



undefined8 *
FUN_180046790(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_18098bdc8;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180046820(longlong *param_1)
void FUN_180046820(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x100) {
    FUN_180046b10(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180046840(longlong *param_1)
void FUN_180046840(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  for (puVar2 = (undefined8 *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 5) {
    *puVar2 = &UNK_180a3c3e0;
    if (puVar2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    *puVar2 = &UNK_18098bcb0;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_180046860(ulonglong *param_1)
void FUN_180046860(ulonglong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(undefined8 *)(lVar3 + 0x20);
      *(undefined8 **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180046890(longlong param_1,longlong param_2)

{
  undefined8 ***pppuVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 ****ppppuVar9;
  undefined8 ***pppuStackX_8;
  undefined8 *puStack_138;
  longlong lStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 ***pppuStack_68;
  undefined8 ***pppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lVar2 = 0;
  puStack_138 = (undefined8 *)&UNK_180a3c3e0;
  uStack_120 = 0;
  lStack_130 = 0;
  uStack_128 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_40 = 3;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar3 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar3 = *(undefined **)(param_2 + 8);
  }
  pppuStackX_8 = &pppuStack_68;
  pppuStack_68 = &pppuStack_68;
  pppuStack_60 = &pppuStack_68;
  FUN_180627c50(&puStack_138,puVar3);
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uVar8 = *(ulonglong *)(param_1 + 0x10);
  if (uVar8 < *(ulonglong *)(param_1 + 0x18)) {
    *(ulonglong *)(param_1 + 0x10) = uVar8 + 0x100;
    FUN_180048a90(uVar8,&puStack_138);
    ppppuVar9 = *(undefined8 *****)(param_1 + 0x10);
    goto LAB_180046a90;
  }
  lVar4 = *(longlong *)(param_1 + 8);
  lVar7 = (longlong)(uVar8 - lVar4) >> 8;
  if (lVar7 == 0) {
    lVar7 = 1;
LAB_1800469fd:
    lVar2 = FUN_18062b420(_DAT_180c8ed18,lVar7 << 8,*(undefined1 *)(param_1 + 0x20));
    uVar8 = *(ulonglong *)(param_1 + 0x10);
    lVar4 = *(longlong *)(param_1 + 8);
  }
  else {
    lVar7 = lVar7 * 2;
    if (lVar7 != 0) goto LAB_1800469fd;
  }
  FUN_1800491b0(&pppuStackX_8,lVar4,uVar8,lVar2);
  pppuVar1 = pppuStackX_8;
  FUN_180048a90(pppuStackX_8,&puStack_138);
  ppppuVar9 = (undefined8 ****)(pppuVar1 + 0x20);
  lVar4 = *(longlong *)(param_1 + 0x10);
  lVar6 = *(longlong *)(param_1 + 8);
  if (lVar6 != lVar4) {
    do {
      FUN_180046b10(lVar6);
      lVar6 = lVar6 + 0x100;
    } while (lVar6 != lVar4);
    lVar6 = *(longlong *)(param_1 + 8);
  }
  if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar6);
  }
  *(longlong *)(param_1 + 8) = lVar2;
  *(undefined8 *****)(param_1 + 0x10) = ppppuVar9;
  *(longlong *)(param_1 + 0x18) = lVar7 * 0x100 + lVar2;
LAB_180046a90:
  iVar5 = (int)((ulonglong)((longlong)ppppuVar9 - *(longlong *)(param_1 + 8)) >> 8) + -1;
  *(int *)(param_1 + 0x68) = iVar5;
  pppuStackX_8 = &pppuStack_68;
  FUN_180049fd0(&pppuStack_68,uStack_58);
  pppuStackX_8 = (undefined8 ***)&puStack_138;
  puStack_138 = (undefined8 *)&UNK_180a3c3e0;
  if (lStack_130 == 0) {
    return iVar5;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180046b10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180046b10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180049fd0(param_1 + 0x1a,param_1[0x1c],param_3,param_4,0xfffffffffffffffe);
  *param_1 = &UNK_180a3c3e0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &UNK_18098bcb0;
  return;
}



ulonglong FUN_180046b80(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar10 = (ulonglong)*(int *)(param_1 + 0x68);
  lVar3 = *(longlong *)(param_1 + 8);
  if (uVar10 < (ulonglong)(*(longlong *)(param_1 + 0x10) - lVar3 >> 8)) {
    iVar5 = *(int *)(param_2 + 0x10);
    iVar2 = *(int *)(uVar10 * 0x100 + 0x10 + lVar3);
    if (iVar2 == iVar5) {
      if (iVar2 != 0) {
        pbVar4 = *(byte **)(uVar10 * 0x100 + 8 + lVar3);
        lVar8 = *(longlong *)(param_2 + 8) - (longlong)pbVar4;
        do {
          pbVar1 = pbVar4 + lVar8;
          iVar5 = (uint)*pbVar4 - (uint)*pbVar1;
          if (iVar5 != 0) break;
          pbVar4 = pbVar4 + 1;
        } while (*pbVar1 != 0);
      }
    }
    else if (iVar2 != 0) goto LAB_180046c03;
    if (iVar5 == 0) {
LAB_180046c90:
      return uVar10 & 0xffffffff;
    }
  }
LAB_180046c03:
  uVar10 = 0;
  uVar7 = *(longlong *)(param_1 + 0x10) - lVar3 >> 8;
  if (uVar7 != 0) {
    iVar5 = *(int *)(param_2 + 0x10);
    uVar11 = uVar10;
    do {
      iVar2 = *(int *)(uVar11 + 0x10 + lVar3);
      iVar6 = iVar5;
      if (iVar2 == iVar5) {
        if (iVar2 != 0) {
          pbVar4 = *(byte **)(uVar11 + 8 + lVar3);
          lVar8 = *(longlong *)(param_2 + 8) - (longlong)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar8;
            iVar6 = (uint)*pbVar4 - (uint)*pbVar1;
            if (iVar6 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
        }
LAB_180046c5e:
        if (iVar6 == 0) {
          *(int *)(param_1 + 0x68) = (int)uVar10;
          goto LAB_180046c90;
        }
      }
      else if (iVar2 == 0) goto LAB_180046c5e;
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar11 = uVar11 + 0x100;
    } while ((ulonglong)(longlong)(int)uVar9 < uVar7);
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180046ca0(longlong *param_1,undefined8 *param_2)
void FUN_180046ca0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plStackX_8;
  undefined8 *puStackX_10;
  longlong *plStackX_18;
  longlong **pplStackX_20;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  plStackX_8 = param_1;
  puStackX_10 = param_2;
  FUN_180047fc0();
  plVar1 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,200,8,3,uVar2,uVar3);
  plStackX_8 = plVar1;
  FUN_180049830(plVar1);
  *plVar1 = (longlong)&UNK_1809fcb00;
  plVar1[0x18] = (longlong)&UNK_180046dd0;
  plStackX_18 = plVar1;
  (**(code **)(*plVar1 + 0x28))(plVar1);
  uVar3 = _DAT_180c82868;
  pplStackX_20 = &plStackX_8;
  plStackX_8 = plVar1;
  (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_18005e300(uVar3,&plStackX_8);
  (**(code **)(*plVar1 + 0x38))(plVar1);
  _DAT_180bf52b0 = (longlong)*(int *)(_DAT_180c86870 + 0x224);
  FUN_180627be0(&DAT_180bf52c0,param_2);
  *param_2 = &UNK_180a3c3e0;
  if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *param_2 = &UNK_18098bcb0;
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800472a0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180046e20(void)
void FUN_180046e20(void)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong ***ppplVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_698 [32];
  longlong lStack_678;
  longlong lStack_670;
  int iStack_668;
  undefined *puStack_618;
  undefined1 *puStack_610;
  uint uStack_608;
  ulonglong uStack_600;
  undefined4 uStack_5b8;
  longlong ***ppplStack_590;
  longlong **pplStack_588;
  longlong ****pppplStack_580;
  undefined *puStack_578;
  undefined8 uStack_570;
  undefined4 uStack_568;
  undefined8 uStack_560;
  undefined *puStack_558;
  longlong lStack_550;
  int iStack_548;
  undefined4 uStack_540;
  undefined *puStack_538;
  longlong lStack_530;
  undefined4 uStack_520;
  longlong ***appplStack_518 [2];
  undefined *puStack_508;
  code *pcStack_500;
  undefined8 uStack_4f8;
  longlong **pplStack_4f0;
  undefined *puStack_4e8;
  undefined1 *puStack_4e0;
  undefined4 uStack_4d8;
  undefined1 auStack_4d0 [72];
  undefined *puStack_488;
  undefined1 *puStack_480;
  undefined4 uStack_478;
  undefined1 auStack_470 [72];
  undefined *puStack_428;
  undefined1 *puStack_420;
  undefined4 uStack_418;
  undefined1 auStack_410 [72];
  undefined *puStack_3c8;
  undefined1 *puStack_3c0;
  undefined4 uStack_3b8;
  undefined1 auStack_3b0 [72];
  undefined *puStack_368;
  undefined1 *puStack_360;
  undefined4 uStack_358;
  undefined1 auStack_350 [72];
  undefined *puStack_308;
  undefined1 *puStack_300;
  undefined4 uStack_2f8;
  undefined1 auStack_2f0 [648];
  ulonglong uStack_68;
  
  uStack_4f8 = 0xfffffffffffffffe;
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_698;
  uStack_5b8 = 0;
  if (*(int *)(_DAT_180c86870 + 0x224) - _DAT_180bf52b0 < 0xfb) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_698);
  }
  *(undefined1 *)(_DAT_180c86960 + 0x39) = 1;
  ppplVar4 = (longlong ***)FUN_18062b1e0(_DAT_180c8ed18,200,8,3);
  ppplStack_590 = ppplVar4;
  FUN_180049830(ppplVar4);
  *ppplVar4 = (longlong **)&UNK_1809fcb00;
  ppplVar4[0x18] = (longlong **)&UNK_180047d20;
  pplStack_4f0 = (longlong **)ppplVar4;
  (*(code *)(*ppplVar4)[5])(ppplVar4);
  uVar1 = _DAT_180c82868;
  uStack_5b8 = 1;
  ppplStack_590 = &pplStack_588;
  pplStack_588 = (longlong **)ppplVar4;
  (*(code *)(*ppplVar4)[5])(ppplVar4);
  FUN_18005e300(uVar1,&pplStack_588);
  uStack_5b8 = 0;
  (*(code *)(*ppplVar4)[7])(ppplVar4);
  FUN_180627ae0(&lStack_678,&DAT_180bf52c0);
  if (iStack_668 == 0) {
    (**(code **)(lStack_678 + 0x10))(&lStack_678,&UNK_1809fc7a0);
    cVar2 = FUN_180624a00(&lStack_678);
    if (cVar2 == '\0') {
      FUN_180624910(&lStack_678);
    }
  }
  cVar2 = FUN_180624a00(&lStack_678);
  if (cVar2 == '\0') {
    FUN_180624910(&lStack_678);
  }
  puStack_4e8 = &UNK_1809fcc58;
  puStack_4e0 = auStack_4d0;
  auStack_4d0[0] = 0;
  uStack_4d8 = 0x18;
  strcpy_s(auStack_4d0,0x40,&UNK_1809fc7b8);
  FUN_180097d40(_DAT_180c86960,&puStack_4e8,&lStack_678);
  puStack_4e8 = &UNK_18098bcb0;
  puStack_488 = &UNK_1809fcc58;
  puStack_480 = auStack_470;
  auStack_470[0] = 0;
  uStack_478 = 0xb;
  strcpy_s(auStack_470,0x40,&UNK_1809fc790);
  FUN_180097d40(_DAT_180c86960,&puStack_488,&lStack_678);
  puStack_488 = &UNK_18098bcb0;
  puStack_428 = &UNK_1809fcc58;
  puStack_420 = auStack_410;
  auStack_410[0] = 0;
  uStack_418 = 0x18;
  uVar10 = strcpy_s(auStack_410,0x40,&UNK_1809fc7b8);
  _DAT_180bf52b8 = (float)FUN_180095480(uVar10,&puStack_428);
  _DAT_180bf52b8 = 1.0 / _DAT_180bf52b8;
  puStack_428 = &UNK_18098bcb0;
  puStack_3c8 = &UNK_1809fcc58;
  puStack_3c0 = auStack_3b0;
  auStack_3b0[0] = 0;
  uStack_3b8 = 0xb;
  uVar10 = strcpy_s(auStack_3b0,0x40,&UNK_1809fc790);
  _DAT_180bf52bc = (float)FUN_180095480(uVar10,&puStack_3c8);
  _DAT_180bf52bc = 1.0 / _DAT_180bf52bc;
  puStack_3c8 = &UNK_18098bcb0;
  puStack_368 = &UNK_1809fcc58;
  puStack_360 = auStack_350;
  auStack_350[0] = 0;
  uStack_358 = 0xb;
  uVar10 = strcpy_s(auStack_350,0x40,&UNK_1809fc790);
  fVar11 = (float)FUN_180095720(uVar10,&puStack_368);
  puStack_368 = &UNK_18098bcb0;
  puStack_308 = &UNK_1809fcc58;
  puStack_300 = auStack_2f0;
  auStack_2f0[0] = 0;
  uStack_2f8 = 0x18;
  uVar10 = strcpy_s(auStack_2f0,0x40,&UNK_1809fc7b8);
  fVar12 = (float)FUN_180095720(uVar10,&puStack_308);
  puStack_308 = &UNK_18098bcb0;
  uVar5 = FUN_180623ce0();
  if (0 < _DAT_180bf52d0) {
    FUN_180629a40(&DAT_180bf52c0,&puStack_558,0,_DAT_180bf52d0 + -1);
    iStack_548 = iStack_548 + -1;
    lVar6 = (longlong)iStack_548;
    iVar3 = -1;
    if (-1 < iStack_548) {
      do {
        iVar3 = iStack_548;
        if (*(char *)(lStack_550 + lVar6) == '/') break;
        iStack_548 = iStack_548 + -1;
        lVar6 = lVar6 + -1;
        iVar3 = -1;
      } while (-1 < lVar6);
    }
    FUN_180629a40(&puStack_558,&puStack_538,iVar3 + 1,0xffffffff);
    iVar3 = FUN_180046b80(&DAT_180bf5240,&puStack_538);
    if (iVar3 == -1) {
      iVar3 = FUN_180046890(&DAT_180bf5240,&puStack_538);
    }
    lVar6 = (longlong)iVar3 * 0x100;
    ppplStack_590 = (longlong ***)(_DAT_180bf5248 + 0x30 + lVar6);
    pppplStack_580 = appplStack_518;
    puStack_508 = &UNK_1800adc10;
    pcStack_500 = FUN_1800adba0;
    appplStack_518[0] = (longlong ***)&ppplStack_590;
    FUN_18005c650(appplStack_518);
    *(double *)(lVar6 + 0xa0 + _DAT_180bf5248) = (double)(1.0 / fVar12);
    *(double *)(lVar6 + 0xb8 + _DAT_180bf5248) = (double)(1.0 / fVar11);
    *(int *)(lVar6 + 0xb0 + _DAT_180bf5248) = (int)(longlong)_DAT_180bf52b8;
    *(int *)(lVar6 + 200 + _DAT_180bf5248) = (int)(longlong)_DAT_180bf52bc;
    *(double *)(lVar6 + 0x20 + _DAT_180bf5248) = (double)(uVar5 >> 0x14);
    puStack_538 = &UNK_180a3c3e0;
    if (lStack_530 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_530 = 0;
    uStack_520 = 0;
    puStack_538 = &UNK_18098bcb0;
    puStack_558 = &UNK_180a3c3e0;
    if (lStack_550 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_550 = 0;
    uStack_540 = 0;
    puStack_558 = &UNK_18098bcb0;
  }
  puStack_578 = &UNK_180a3c3e0;
  uStack_560 = 0;
  uStack_570 = 0;
  uStack_568 = 0;
  puStack_618 = &UNK_180a3c3e0;
  uStack_600 = 0;
  puStack_610 = (undefined1 *)0x0;
  uStack_608 = 0;
  FUN_1806277c0(&puStack_618,iStack_668);
  if (iStack_668 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_610,lStack_670,iStack_668 + 1);
  }
  if (lStack_670 != 0) {
    uStack_608 = 0;
    if (puStack_610 != (undefined1 *)0x0) {
      *puStack_610 = 0;
    }
    uStack_600 = uStack_600 & 0xffffffff;
  }
  FUN_18062c1e0(&lStack_678,1);
  iVar3 = uStack_608 + 0x11;
  FUN_1806277c0(&puStack_618,iVar3);
  puVar8 = (undefined4 *)(puStack_610 + uStack_608);
  *puVar8 = 0x69676e65;
  puVar8[1] = 0x635f656e;
  puVar8[2] = 0x69666e6f;
  puVar8[3] = 0x78742e67;
  *(undefined2 *)(puVar8 + 4) = 0x74;
  uStack_608 = iVar3;
  puVar7 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
  puVar9 = &DAT_18098bc73;
  if (puStack_610 != (undefined1 *)0x0) {
    puVar9 = puStack_610;
  }
  *puVar7 = 0;
  *(undefined1 *)(puVar7 + 2) = 0;
  FUN_18062dee0(puVar7,puVar9,&DAT_1809fc7ec);
  FUN_1800ae730(_DAT_180c86920,puVar7);
  if (puVar7[1] != 0) {
    fclose();
    puVar7[1] = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
    if (puVar7[1] != 0) {
      fclose();
      puVar7[1] = 0;
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
      UNLOCK();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar7);
}



undefined8 *
FUN_180047d40(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  FUN_180049b30(param_1 + 2,param_2 + 2,param_3,param_4,0xfffffffffffffffe);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  *(undefined1 *)((longlong)param_1 + 0xc9) = *(undefined1 *)((longlong)param_2 + 0xc9);
  *(undefined1 *)((longlong)param_1 + 0xca) = *(undefined1 *)((longlong)param_2 + 0xca);
  *(undefined1 *)((longlong)param_1 + 0xcb) = *(undefined1 *)((longlong)param_2 + 0xcb);
  *(undefined1 *)((longlong)param_1 + 0xcc) = *(undefined1 *)((longlong)param_2 + 0xcc);
  return param_1;
}





// 函数: void FUN_180047e10(longlong param_1)
void FUN_180047e10(longlong param_1)

{
  *(undefined **)(param_1 + 0x10) = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_180047e40(undefined8 *param_1)
void FUN_180047e40(undefined8 *param_1)

{
  *param_1 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180047e70(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)
void FUN_180047e70(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uStackX_8;
  
  uStackX_8 = param_1;
  iVar3 = FUN_180046b80(&DAT_180bf5240);
  if (iVar3 == -1) {
    iVar3 = FUN_180046890(&DAT_180bf5240,param_2);
  }
  puVar7 = (undefined8 *)(_DAT_180bf5248 + 0xd0 + (longlong)iVar3 * 0x100);
  puVar4 = puVar7;
  if ((undefined8 *)puVar7[2] != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)puVar7[2];
    do {
      if (*(int *)(param_3 + 0x10) == 0) {
        puVar9 = (undefined8 *)puVar8[1];
        bVar2 = false;
      }
      else {
        if (*(int *)(puVar8 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar6 = *(byte **)(param_3 + 8);
          lVar10 = puVar8[5] - (longlong)pbVar6;
          do {
            uVar5 = (uint)pbVar6[lVar10];
            iVar3 = *pbVar6 - uVar5;
            if (*pbVar6 != uVar5) break;
            pbVar6 = pbVar6 + 1;
          } while (uVar5 != 0);
          bVar2 = 0 < iVar3;
          if (iVar3 < 1) {
            puVar9 = (undefined8 *)puVar8[1];
            goto LAB_180047f2c;
          }
        }
        puVar9 = (undefined8 *)*puVar8;
      }
LAB_180047f2c:
      if (bVar2) {
        puVar8 = puVar4;
      }
      puVar4 = puVar8;
      puVar8 = puVar9;
    } while (puVar9 != (undefined8 *)0x0);
  }
  if (puVar4 != puVar7) {
    if (*(int *)(puVar4 + 6) == 0) goto LAB_180047f93;
    if (*(int *)(param_3 + 0x10) != 0) {
      pbVar6 = (byte *)puVar4[5];
      lVar10 = *(longlong *)(param_3 + 8) - (longlong)pbVar6;
      do {
        bVar1 = *pbVar6;
        uVar5 = (uint)pbVar6[lVar10];
        if (bVar1 != uVar5) break;
        pbVar6 = pbVar6 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_180047f93;
    }
  }
  puVar4 = (undefined8 *)FUN_180048cc0(puVar7,&uStackX_8);
  puVar4 = (undefined8 *)*puVar4;
LAB_180047f93:
  FUN_180627be0(puVar4 + 8,param_3);
  puVar4[0xc] = param_4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



