#include "TaleWorlds.Native.Split.h"

// 99_part_13_part069.c - 模块99未匹配函数第13部分第69个文件 - 7个核心函数

/**
 * 系统资源管理器 - 管理系统资源的释放和清理
 * 
 * 功能说明：
 * - 负责管理系统资源的生命周期
 * - 处理资源的释放和清理操作
 * - 管理资源链表和数据结构
 * - 执行系统级别的资源回收
 * 
 * @param param_1 资源管理器上下文指针
 * @return void 无返回值
 */
void SystemResourceManager(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)*param_1;
  if (plVar5 == param_1) {
    if ((longlong *)param_1[1] == param_1) {
      uVar3 = *(uint *)((longlong)param_1 + 0x6c);
      if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
        if (0 < (int)param_1[0xd]) goto LAB_1808d7bbe;
        if ((0 < (int)uVar3) && (param_1[0xc] != 0)) {
                    // WARNING: Subroutine does not return
          SystemResourceCleanup(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1[0xc],&UNK_180957f70,0x100,1)
          ;
        }
        param_1[0xc] = 0;
        *(int32_t *)((longlong)param_1 + 0x6c) = 0;
        uVar3 = 0;
      }
      *(int32_t *)(param_1 + 0xd) = 0;
      if (0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
        SystemMemoryRelease(param_1 + 0xc,0);
      }
LAB_1808d7bbe:
      SystemObjectRelease(param_1 + 10);
      SystemObjectRelease(param_1 + 8);
      SystemObjectRelease(param_1 + 6);
      SystemObjectCleanup(param_1 + 4);
      SystemObjectCleanup(param_1 + 2);
      plVar5 = (longlong *)*param_1;
      if (plVar5 != param_1) {
        do {
          if (plVar5 == param_1) break;
          plVar1 = (longlong *)*plVar5;
          *(longlong **)plVar5[1] = plVar1;
          *(longlong *)(*plVar5 + 8) = plVar5[1];
          plVar5[1] = (longlong)plVar5;
          *plVar5 = (longlong)plVar5;
          plVar5 = plVar1;
        } while (plVar1 != param_1);
        plVar5 = (longlong *)*param_1;
      }
      *(longlong **)param_1[1] = plVar5;
      *(longlong *)(*param_1 + 8) = param_1[1];
      param_1[1] = (longlong)param_1;
      *param_1 = (longlong)param_1;
      *(longlong **)param_1[1] = param_1;
      *(longlong *)(*param_1 + 8) = param_1[1];
      param_1[1] = (longlong)param_1;
      *param_1 = (longlong)param_1;
      return;
    }
    if (plVar5 == param_1) goto LAB_1808d7a63;
  }
  *(longlong *)plVar5[1] = *plVar5;
  *(longlong *)(*plVar5 + 8) = plVar5[1];
  plVar5[1] = (longlong)plVar5;
  *plVar5 = (longlong)plVar5;
LAB_1808d7a63:
  plVar1 = plVar5 + 4;
  plVar4 = plVar5 + 4;
  plVar2 = (longlong *)*plVar1;
  if ((plVar2 == plVar1) && ((longlong *)plVar5[5] == plVar1)) {
    SystemResourceDeallocate(plVar4);
    *(longlong *)plVar5[1] = *plVar5;
    *(longlong *)(*plVar5 + 8) = plVar5[1];
    plVar5[1] = (longlong)plVar5;
    *plVar5 = (longlong)plVar5;
    *(longlong **)plVar5[1] = plVar5;
    *(longlong *)(*plVar5 + 8) = plVar5[1];
    plVar5[1] = (longlong)plVar5;
    *plVar5 = (longlong)plVar5;
                    // WARNING: Subroutine does not return
    SystemResourceCleanup(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar5,&UNK_180988870,0x18d,1);
  }
  if (plVar2 == plVar4) {
    plVar2 = (longlong *)0x0;
  }
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2;
  }
  *(longlong *)plVar4[1] = *plVar4;
  *(longlong *)(*plVar4 + 8) = plVar4[1];
  plVar4[1] = (longlong)plVar4;
  *plVar4 = (longlong)plVar4;
  *(longlong **)plVar4[1] = plVar4;
  *(longlong *)(*plVar4 + 8) = plVar4[1];
  plVar4[1] = (longlong)plVar4;
  *plVar4 = (longlong)plVar4;
                    // WARNING: Subroutine does not return
  SystemResourceCleanup(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar4,&UNK_180988870,0xc0,1);
}

/**
 * 系统对象销毁器 - 销毁系统对象并释放资源
 * 
 * 功能说明：
 * - 销毁指定的系统对象
 * - 释放对象占用的内存资源
 * - 处理对象清理操作
 * - 管理对象链表结构
 * 
 * @param param_1 要销毁的对象指针
 * @param param_2 销毁标志位
 * @return uint64_t* 返回处理后的对象指针
 */
uint64_t * SystemObjectDestroyer(uint64_t *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = &UNK_180988830;
  if (*(int *)(param_1 + 0x10) == 1) {
    SystemObjectShutdown(param_1[10]);
  }
  SystemComponentCleanup(param_1 + 6);
  SystemObjectFinalize(param_1);
  plVar1 = param_1 + 4;
  *(longlong *)param_1[5] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[5];
  param_1[5] = plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong **)param_1[5] = plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[5];
  param_1[5] = plVar1;
  *plVar1 = (longlong)plVar1;
  if ((param_2 & 1) != 0) {
    free(param_1,0x88);
  }
  return param_1;
}

/**
 * 系统数据处理器 - 处理系统数据的转换和管理
 * 
 * 功能说明：
 * - 处理系统数据的转换操作
 * - 管理数据结构和链表
 * - 执行数据验证和比较
 * - 处理错误情况和异常
 * 
 * @param param_1 源数据上下文
 * @param param_2 目标数据上下文
 * @return uint64_t 返回处理结果状态码
 */
uint64_t SystemDataProcessor(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint64_t uVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  uVar2 = SystemObjectShutdown(*(uint64_t *)(param_2 + 0x50));
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  plVar6 = (longlong *)0x0;
  plVar3 = (longlong *)(*plVar1 + -0x20);
  if (*plVar1 == 0) {
    plVar3 = plVar6;
  }
  plVar4 = plVar6;
  if (plVar3 != (longlong *)0x0) {
    plVar4 = plVar3 + 4;
  }
  while (plVar4 != plVar1) {
    plVar3 = plVar4 + 6;
    if (plVar4 == (longlong *)0x0) {
      plVar3 = (longlong *)0x50;
    }
    if (*(int *)(*(longlong *)(*(longlong *)(param_2 + 0x50) + 0x10) + 0x44) <
        *(int *)(*(longlong *)(*plVar3 + 0x10) + 0x44)) {
      if (plVar4 == plVar1) {
        return 0x1f;
      }
      plVar1 = (longlong *)(param_2 + 0x20);
      if (plVar1 == (longlong *)0x0) {
        return 0x1c;
      }
      plVar3 = (longlong *)*plVar1;
      plVar7 = plVar6;
      if (plVar3 != plVar1) goto LAB_1808d7e23;
      goto LAB_1808d7e33;
    }
    if (plVar4 == plVar1) break;
    plVar3 = (longlong *)(*plVar4 + -0x20);
    if (*plVar4 == 0) {
      plVar3 = plVar6;
    }
    plVar4 = plVar6;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3 + 4;
    }
  }
  plVar3 = (longlong *)(param_2 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    return 0x1c;
  }
  plVar4 = (longlong *)*plVar3;
  if (plVar4 != plVar3) {
    do {
      plVar4 = (longlong *)*plVar4;
      uVar5 = (int)plVar6 + 1;
      plVar6 = (longlong *)(ulonglong)uVar5;
    } while (plVar4 != plVar3);
    if (uVar5 != 0) {
      return 0x1c;
    }
  }
  *(uint64_t *)(param_2 + 0x28) = *(uint64_t *)(param_1 + 0x28);
  *plVar3 = (longlong)plVar1;
  *(longlong **)(param_1 + 0x28) = plVar3;
LAB_1808d7de6:
  **(longlong **)(param_2 + 0x28) = param_2 + 0x20;
  return 0;
LAB_1808d7e23:
  do {
    plVar3 = (longlong *)*plVar3;
    uVar5 = (int)plVar7 + 1;
    plVar7 = (longlong *)(ulonglong)uVar5;
  } while (plVar3 != plVar1);
  if (uVar5 == 0) {
LAB_1808d7e33:
    plVar3 = plVar4 + -4;
    if (plVar4 == (longlong *)0x0) {
      plVar3 = plVar6;
    }
    if ((plVar3 != (longlong *)0x0) && (plVar3 + 4 != (longlong *)0x0)) {
      *(longlong *)(param_2 + 0x28) = plVar3[5];
      *plVar1 = (longlong)(plVar3 + 4);
      plVar3[5] = (longlong)plVar1;
      goto LAB_1808d7de6;
    }
  }
  return 0x1c;
}

/**
 * 系统链接管理器 - 管理系统对象之间的链接关系
 * 
 * 功能说明：
 * - 建立系统对象之间的链接
 * - 管理链接的生命周期
 * - 处理链接的创建和销毁
 * - 维护链接结构的完整性
 * 
 * @param param_1 源对象上下文
 * @param param_2 目标对象上下文
 * @param param_3 输出参数，返回创建的链接
 * @return longlong* 返回操作结果，成功返回NULL，失败返回错误码
 */
longlong * SystemLinkManager(longlong param_1,longlong param_2,uint64_t *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)0x0;
  if (param_3 != (uint64_t *)0x0) {
    *param_3 = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = SystemObjectFinder(param_2,lVar1 + 0x30);
  if (((lVar2 == 0) && (lVar2 = SystemObjectFinder(param_2,lVar1 + 0x40), lVar2 == 0)) &&
     (lVar2 = SystemObjectFinder(param_2,lVar1 + 0x50), lVar2 == 0)) {
    return (longlong *)0x0;
  }
  if ((*(uint *)(lVar2 + 0x5c) >> 3 & 1) != 0) goto LAB_1808d7fa7;
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(uint *)(lVar2 + 0x5c) = *(uint *)(lVar2 + 0x5c) | 0xc;
  plVar7 = (longlong *)(lVar2 + 0x10);
  if (lVar2 == 0) {
    plVar7 = plVar4;
  }
  if (plVar7 == (longlong *)0x0) {
LAB_1808d7f9e:
    plVar4 = (longlong *)0x1c;
  }
  else {
    plVar3 = (longlong *)*plVar7;
    plVar6 = plVar4;
    if (plVar3 != plVar7) {
      do {
        plVar3 = (longlong *)*plVar3;
        uVar5 = (int)plVar6 + 1;
        plVar6 = (longlong *)(ulonglong)uVar5;
      } while (plVar3 != plVar7);
      if (uVar5 != 0) goto LAB_1808d7f9e;
    }
    plVar7[1] = *(longlong *)(lVar1 + 0x38);
    *plVar7 = lVar1 + 0x30;
    *(longlong **)(lVar1 + 0x38) = plVar7;
    *(longlong **)plVar7[1] = plVar7;
  }
  if ((int)plVar4 != 0) {
    return plVar4;
  }
LAB_1808d7fa7:
  plVar4 = (longlong *)
           SystemMemoryAllocate(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x20,&UNK_180988870,300,0,0,1);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)plVar4;
    plVar4[1] = (longlong)plVar4;
    plVar4[2] = param_2;
    plVar4[3] = lVar2;
    plVar4[1] = *(longlong *)(param_1 + 0x28);
    *plVar4 = param_1 + 0x20;
    *(longlong **)(param_1 + 0x28) = plVar4;
    *(longlong **)plVar4[1] = plVar4;
    if (param_3 != (uint64_t *)0x0) {
      *param_3 = plVar4;
    }
    return (longlong *)0x0;
  }
  return (longlong *)0x26;
}

/**
 * 系统对象创建器 - 创建和初始化系统对象
 * 
 * 功能说明：
 * - 创建新的系统对象
 * - 初始化对象的属性和状态
 * - 设置对象的参数和配置
 * - 管理对象的生命周期
 * 
 * @param param_1 对象容器上下文
 * @param param_2 对象类型标识
 * @param param_3 对象参数
 * @param param_4 对象配置
 * @param param_5 输出参数，返回创建的对象
 * @return int 返回操作结果，0表示成功，非0表示失败
 */
int SystemObjectCreator(uint64_t *param_1,longlong param_2,uint64_t param_3,longlong param_4,
                 uint64_t *param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int iVar6;
  
  puVar3 = (uint64_t *)0x0;
  for (puVar5 = (uint64_t *)*param_1;
      ((puVar1 = puVar3, puVar5 != param_1 && (puVar1 = puVar5, puVar5[2] != param_2)) &&
      (puVar1 = puVar3, puVar5 != param_1)); puVar5 = (uint64_t *)*puVar5) {
  }
  puVar5 = (uint64_t *)0x0;
  if (puVar1 == (uint64_t *)0x0) {
    puVar1 = (uint64_t *)
             SystemMemoryAllocate(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x30,&UNK_180988870,0xfd,0,0,1);
    if (puVar1 == (uint64_t *)0x0) {
      iVar6 = 0x26;
      puVar5 = puVar3;
      goto LAB_1808d824e;
    }
    *puVar1 = puVar1;
    puVar3 = (uint64_t *)(param_2 + 0x30);
    puVar1[1] = puVar1;
    puVar1[2] = param_2;
    puVar1[3] = param_1;
    puVar2 = puVar1 + 4;
    puVar1[5] = 0;
    *puVar2 = puVar2;
    puVar1[5] = puVar2;
    for (puVar2 = (uint64_t *)*puVar3; puVar2 != puVar3; puVar2 = (uint64_t *)*puVar2) {
      iVar6 = SystemLinkManager(puVar1,puVar2,0);
      if (iVar6 != 0) {
        SystemObjectCleanup(puVar1,&UNK_18095b500,0xc6);
        goto LAB_1808d824e;
      }
      if (puVar2 == puVar3) break;
    }
    iVar6 = 0;
    puVar5 = (uint64_t *)*puVar1;
    if (puVar5 != puVar1) {
      do {
        puVar5 = (uint64_t *)*puVar5;
        iVar6 = iVar6 + 1;
      } while (puVar5 != puVar1);
      if (iVar6 != 0) {
        iVar6 = 0x1c;
        puVar5 = puVar1;
        goto LAB_1808d824e;
      }
    }
    puVar1[1] = param_1[1];
    *puVar1 = param_1;
    param_1[1] = puVar1;
    *(uint64_t **)puVar1[1] = puVar1;
    puVar3 = puVar1;
  }
  puVar5 = puVar3;
  puVar3 = (uint64_t *)
           SystemMemoryAllocate(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x88,&UNK_180988870,0x1a4,0,0,1);
  if (puVar3 == (uint64_t *)0x0) {
    iVar6 = 0x26;
  }
  else {
    puVar2 = puVar3 + 4;
    *puVar2 = puVar2;
    puVar3[5] = puVar2;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = &UNK_180988830;
    puVar2 = puVar3 + 6;
    *puVar2 = puVar2;
    puVar3[7] = puVar2;
    puVar3[8] = param_2;
    puVar3[9] = param_1;
    puVar3[10] = puVar1;
    puVar3[0xb] = param_4;
    *(int32_t *)(puVar3 + 0xc) = 0x42c80000;
    *(int32_t *)((longlong)puVar3 + 100) = 0x42c80000;
    *(int32_t *)(puVar3 + 0xd) = 0x42c80000;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    *(int32_t *)(puVar3 + 0x10) = 2;
    uVar4 = (**(code **)(*(longlong *)(param_4 + 8) + 0x30))();
    iVar6 = SystemObjectInitialize(uVar4,puVar3);
    if (iVar6 == 0) {
      *param_5 = puVar3;
      return 0;
    }
  }
LAB_1808d824e:
  if (puVar5 != (uint64_t *)0x0) {
    SystemObjectCleanup(puVar5,&UNK_18095b500,0xc6);
  }
  return iVar6;
}

/**
 * 系统数据验证器 - 验证系统数据的完整性和有效性
 * 
 * 功能说明：
 * - 验证系统数据的完整性
 * - 检查数据的有效性
 * - 处理数据验证错误
 * - 执行数据清理操作
 * 
 * @param param_1 验证器上下文
 * @param param_2 要验证的数据
 * @return uint64_t 返回验证结果，0表示成功，非0表示失败
 */
uint64_t SystemDataValidator(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  uint64_t uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  cVar1 = SystemDataCheck(param_2);
  if (cVar1 == '\0') {
    plVar8 = (longlong *)0x0;
    do {
      plVar7 = (longlong *)*param_2;
      plVar2 = plVar8;
      if ((plVar7 != param_2) && (plVar7 != (longlong *)0x0)) {
        plVar2 = plVar7 + -2;
      }
      plVar7 = plVar2 + 2;
      if (plVar2 == (longlong *)0x0) {
        plVar7 = plVar8;
      }
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_2;
      }
      plVar2 = plVar7 + -2;
      if (plVar7 == (longlong *)0x0) {
        plVar2 = plVar8;
      }
      uVar3 = SystemDataValidation(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (plVar7 == param_2) {
        return 0x1c;
      }
      *(longlong *)plVar7[1] = *plVar7;
      *(longlong *)(*plVar7 + 8) = plVar7[1];
      plVar7[1] = (longlong)plVar7;
      *plVar7 = (longlong)plVar7;
      if (plVar2 == (longlong *)0x0) {
        return 0x1c;
      }
      plVar7 = plVar2 + 2;
      if (plVar7 == (longlong *)0x0) {
        return 0x1c;
      }
      plVar4 = (longlong *)*plVar7;
      plVar6 = plVar8;
      if (plVar4 != plVar7) {
        do {
          plVar4 = (longlong *)*plVar4;
          uVar5 = (int)plVar6 + 1;
          plVar6 = (longlong *)(ulonglong)uVar5;
        } while (plVar4 != plVar7);
        if (uVar5 != 0) {
          return 0x1c;
        }
      }
      plVar2[3] = *(longlong *)(param_1 + 0x58);
      *plVar7 = param_1 + 0x50;
      *(longlong **)(param_1 + 0x58) = plVar7;
      *(longlong **)plVar2[3] = plVar7;
      cVar1 = SystemDataCheck(param_2);
    } while (cVar1 == '\0');
  }
  return 0;
}

/**
 * 系统对象查找器 - 在系统中查找指定的对象
 * 
 * 功能说明：
 * - 在系统对象集合中查找指定对象
 * - 支持多种查找条件
 * - 返回找到的对象引用
 * - 处理查找失败的情况
 * 
 * @param param_1 查找条件
 * @param param_2 对象容器
 * @return longlong* 返回找到的对象指针，未找到返回NULL
 */
longlong * SystemObjectFinder(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lStack_48;
  longlong lStack_40;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  
  plVar5 = (longlong *)0x0;
  plVar2 = (longlong *)(*param_2 + -0x10);
  if (*param_2 == 0) {
    plVar2 = plVar5;
  }
  plVar4 = plVar5;
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2 + 2;
  }
  if (plVar4 != param_2) {
    do {
      plVar2 = plVar4 + 2;
      plVar3 = plVar4 + 3;
      if (plVar4 == (longlong *)0x0) {
        plVar2 = (longlong *)0x20;
        plVar3 = (longlong *)0x28;
      }
      lVar1 = *plVar2;
      plVar2 = (longlong *)(*(code *)**(uint64_t **)*plVar3)();
      uStack_38 = *(int32_t *)(param_1 + 0x18);
      uStack_34 = *(int32_t *)(param_1 + 0x1c);
      uStack_30 = *(int32_t *)(param_1 + 0x20);
      uStack_2c = *(int32_t *)(param_1 + 0x24);
      uStack_28 = uStack_38;
      uStack_24 = uStack_34;
      uStack_20 = uStack_30;
      uStack_1c = uStack_2c;
      (**(code **)(*plVar2 + 0x20))(plVar2,&lStack_48);
      if (((lStack_48 == CONCAT44(uStack_34,uStack_38)) &&
          (lStack_40 == CONCAT44(uStack_1c,uStack_20))) &&
         (*(int *)(lVar1 + 0x40) == *(int *)(param_1 + 0x28))) {
        if (plVar4 == (longlong *)0x0) {
          return (longlong *)0x0;
        }
        return plVar4 + -2;
      }
      if (plVar4 == param_2) {
        return (longlong *)0x0;
      }
      plVar2 = (longlong *)(*plVar4 + -0x10);
      if (*plVar4 == 0) {
        plVar2 = plVar5;
      }
      plVar4 = plVar5;
      if (plVar2 != (longlong *)0x0) {
        plVar4 = plVar2 + 2;
      }
    } while (plVar4 != param_2);
  }
  return (longlong *)0x0;
}

/**
 * 系统状态管理器 - 管理系统状态的变化和控制
 * 
 * 功能说明：
 * - 管理系统状态的转换
 * - 处理状态变化事件
 * - 执行状态相关操作
 * - 维护状态一致性
 * 
 * @param param_1 系统上下文
 * @param param_2 状态参数
 * @return uint64_t 返回操作结果
 */
uint64_t SystemStateManager(longlong param_1,uint64_t param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint64_t uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  SystemStateUpdate(param_2,param_1 + 0x40);
  uVar4 = SystemStateValidate(param_1,param_2);
  if ((int)uVar4 == 0) {
    cVar3 = SystemStateCheck(param_2,param_1 + 0x40);
    if (cVar3 == '\0') {
LAB_1808d85fc:
      uVar4 = 0;
    }
    else {
      plVar2 = *(longlong **)(param_1 + 0x30);
      plVar1 = (longlong *)(param_1 + 0x30);
joined_r0x0001808d8529:
      do {
        if (plVar2 == plVar1) {
LAB_1808d85eb:
          uVar4 = SystemStateTransition(param_1,3);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          goto LAB_1808d85fc;
        }
        plVar6 = (longlong *)(*(longlong *)(param_1 + 0x40) + 0x20);
        plVar5 = (longlong *)*plVar6;
        if (plVar5 != plVar6) {
          while ((int)plVar5[8] != (int)plVar2[2]) {
            if ((plVar5 == plVar6) || (plVar5 = (longlong *)*plVar5, plVar5 == plVar6))
            goto LAB_1808d856d;
          }
          if ((plVar5 != (longlong *)0x0) && (((int)plVar5[5] != 0 || ((int)plVar5[3] != 0)))) {
            if (plVar2 == plVar1) goto LAB_1808d85eb;
            plVar2 = (longlong *)*plVar2;
            goto joined_r0x0001808d8529;
          }
        }
LAB_1808d856d:
        if (plVar2 != plVar1) {
          *(longlong *)plVar2[1] = *plVar2;
          *(longlong *)(*plVar2 + 8) = plVar2[1];
          plVar2[1] = (longlong)plVar2;
          *plVar2 = (longlong)plVar2;
          *(longlong **)plVar2[1] = plVar2;
          *(longlong *)(*plVar2 + 8) = plVar2[1];
          plVar2[1] = (longlong)plVar2;
          *plVar2 = (longlong)plVar2;
                    // WARNING: Subroutine does not return
          SystemResourceCleanup(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar2,&UNK_180984b50,0xe1,1);
        }
        uVar4 = SystemObjectShutdown(*(uint64_t *)(param_1 + 0x50));
      } while ((int)uVar4 == 0);
    }
  }
  return uVar4;
}

/**
 * 系统清理处理器 - 处理系统清理操作
 * 
 * 功能说明：
 * - 执行系统级别的清理操作
 * - 释放系统资源
 * - 处理清理过程中的错误
 * - 确保系统安全关闭
 * 
 * @return uint64_t 返回清理结果
 */
uint64_t SystemCleanupProcessor(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint64_t uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong unaff_RSI;
  
  cVar3 = SystemStateCheck();
  if (cVar3 == '\0') {
LAB_1808d85fc:
    uVar4 = 0;
  }
  else {
    plVar2 = *(longlong **)(unaff_RSI + 0x30);
    plVar1 = (longlong *)(unaff_RSI + 0x30);
joined_r0x0001808d8529:
    do {
      if (plVar2 == plVar1) {
LAB_1808d85eb:
        uVar4 = SystemStateTransition();
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        goto LAB_1808d85fc;
      }
      plVar6 = (longlong *)(*(longlong *)(unaff_RSI + 0x40) + 0x20);
      plVar5 = (longlong *)*plVar6;
      if (plVar5 != plVar6) {
        while ((int)plVar5[8] != (int)plVar2[2]) {
          if ((plVar5 == plVar6) || (plVar5 = (longlong *)*plVar5, plVar5 == plVar6))
          goto LAB_1808d856d;
        }
        if ((plVar5 != (longlong *)0x0) && (((int)plVar5[5] != 0 || ((int)plVar5[3] != 0)))) {
          if (plVar2 == plVar1) goto LAB_1808d85eb;
          plVar2 = (longlong *)*plVar2;
          goto joined_r0x0001808d8529;
        }
      }
LAB_1808d856d:
      if (plVar2 != plVar1) {
        *(longlong *)plVar2[1] = *plVar2;
        *(longlong *)(*plVar2 + 8) = plVar2[1];
        plVar2[1] = (longlong)plVar2;
        *plVar2 = (longlong)plVar2;
        *(longlong **)plVar2[1] = plVar2;
        *(longlong *)(*plVar2 + 8) = plVar2[1];
        plVar2[1] = (longlong)plVar2;
        *plVar2 = (longlong)plVar2;
                    // WARNING: Subroutine does not return
        SystemResourceCleanup(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar2,&UNK_180984b50,0xe1,1);
      }
      uVar4 = SystemObjectShutdown(*(uint64_t *)(unaff_RSI + 0x50));
    } while ((int)uVar4 == 0);
  }
  return uVar4;
}

// 函数别名定义
#define SystemResourceCleanup FUN_180742250
#define SystemMemoryRelease FUN_1808532e0
#define SystemObjectRelease func_0x0001808d7970
#define SystemObjectCleanup func_0x00018084e310
#define SystemResourceDeallocate func_0x00018085dda0
#define SystemObjectShutdown FUN_1808d8b60
#define SystemComponentCleanup FUN_18084c680
#define SystemObjectFinalize FUN_1808b1a30
#define SystemMemoryAllocate FUN_180741e10
#define SystemObjectInitialize FUN_1808b89f0
#define SystemDataCheck func_0x0001808d8b40
#define SystemDataValidation FUN_1808b1c90
#define SystemStateUpdate FUN_1808d77c0
#define SystemStateValidate FUN_1808b2950
#define SystemStateCheck func_0x0001808d7720
#define SystemStateTransition FUN_1808b2f30
#define SystemObjectFinder FUN_1808d83b0

// 常量定义
#define SYSTEM_SUCCESS 0
#define SYSTEM_ERROR_INVALID_PARAMETER 0x1c
#define SYSTEM_ERROR_MEMORY_ALLOCATION 0x26
#define SYSTEM_ERROR_DATA_VALIDATION 0x1f

// 技术说明：
// 1. 本文件包含7个核心函数，涵盖了系统资源管理、对象生命周期管理、数据处理、状态管理等高级系统功能
// 2. 主要函数包括：
//    - SystemResourceManager：系统资源管理器，负责资源的释放和清理
//    - SystemObjectDestroyer：系统对象销毁器，处理对象的销毁和内存释放
//    - SystemDataProcessor：系统数据处理器，处理数据的转换和管理
//    - SystemLinkManager：系统链接管理器，管理对象之间的链接关系
//    - SystemObjectCreator：系统对象创建器，创建和初始化系统对象
//    - SystemDataValidator：系统数据验证器，验证数据的完整性和有效性
//    - SystemObjectFinder：系统对象查找器，在系统中查找指定对象
//    - SystemStateManager：系统状态管理器，管理系统状态的变化
//    - SystemCleanupProcessor：系统清理处理器，处理系统清理操作
// 3. 所有函数都包含详细的中文文档注释，说明功能、参数和返回值
// 4. 函数别名定义提供了更好的代码可读性
// 5. 常量定义定义了系统错误码和状态码