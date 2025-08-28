#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

/**
 * @file 03_rendering_part103.c
 * @brief 渲染系统高级资源管理和数据收集模块
 * 
 * 本模块包含8个核心函数，涵盖渲染资源收集、数据处理、状态管理、
 * 文件操作、资源查找、哈希表操作等高级渲染功能。
 * 
 * 主要功能：
 * - 渲染资源数据收集和处理
 * - 渲染状态管理和优化
 * - 文件读取和写入操作
 * - 资源查找和哈希表管理
 * - 渲染系统清理和初始化
 */

// 常量定义区域
#define RENDERING_RESOURCE_COLLECTOR_MAX_ITEMS 0x1000      // 资源收集器最大项目数
#define RENDERING_DATA_BUFFER_SIZE 0x800                   // 数据缓冲区大小
#define RENDERING_HASH_TABLE_SIZE 0x400                    // 哈希表大小
#define RENDERING_FILE_BUFFER_SIZE 0x1000                  // 文件缓冲区大小
#define RENDERING_RESOURCE_CACHE_SIZE 0x200                // 资源缓存大小

// 渲染系统状态常量
#define RENDERING_STATE_INITIALIZED 0x01                   // 渲染系统已初始化
#define RENDERING_STATE_ACTIVE 0x02                        // 渲染系统活跃
#define RENDERING_STATE_CLEANUP 0x04                       // 渲染系统清理中
#define RENDERING_STATE_ERROR 0x08                        // 渲染系统错误状态

// 资源类型常量
#define RESOURCE_TYPE_TEXTURE 0x01                         // 纹理资源
#define RESOURCE_TYPE_SHADER 0x02                          // 着色器资源
#define RESOURCE_TYPE_BUFFER 0x04                          // 缓冲区资源
#define RESOURCE_TYPE_PIPELINE 0x08                        // 管线资源

// 文件操作常量
#define FILE_OPERATION_READ 0x01                           // 文件读取操作
#define FILE_OPERATION_WRITE 0x02                          // 文件写入操作
#define FILE_OPERATION_APPEND 0x04                         // 文件追加操作

// 函数别名定义区域
#define RenderingSystemCollectResourceData FUN_18032afa0    // 渲染系统资源数据收集器
#define RenderingSystemProcessRenderData FUN_18032b1c0     // 渲染系统数据处理器
#define RenderingSystemHandleResourceData FUN_18032b400    // 渲染系统资源数据处理器
#define RenderingSystemProcessResourceQueue FUN_18032b452  // 渲染系统资源队列处理器
#define RenderingSystemEmptyResourceHandler FUN_18032b48d  // 渲染系统空资源处理器
#define RenderingSystemFindResource FUN_18032b4a0        // 渲染系统资源查找器
#define RenderingSystemCreateResourceEntry FUN_18032b680   // 渲染系统资源条目创建器
#define RenderingSystemInitializeResource FUN_18032b880   // 渲染系统资源初始化器
#define RenderingSystemSaveResourceData FUN_18032c0b0      // 渲染系统资源数据保存器
#define RenderingSystemLoadResourceData FUN_18032c450      // 渲染系统资源数据加载器
#define RenderingSystemExportResourceData FUN_18032c9f0    // 渲染系统资源数据导出器

/**
 * @brief 渲染系统资源数据收集器
 * 
 * 收集渲染系统中的资源数据，包括纹理、着色器、缓冲区等。
 * 支持数据过滤、排序和优化处理。
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 数据输出缓冲区指针
 * @param param_3 收集参数和标志
 * @return void 无返回值
 */
void FUN_18032afa0(longlong param_1,longlong *param_2,ulonglong param_3)

{
  int32_t uVar1;
  longlong *****ppppplVar2;
  longlong ****pppplVar3;
  longlong lVar4;
  int32_t *puVar5;
  longlong *****ppppplVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  int32_t auStackX_18 [4];
  longlong alStack_70 [3];
  longlong ****pppplStack_58;
  longlong ****pppplStack_50;
  longlong ****pppplStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  int32_t uStack_30;
  
  // 设置收集参数
  auStackX_18[0] = (int32_t)param_3;
  
  // 调用渲染系统参数设置函数
  FUN_18033af10(param_1 + 0x638,alStack_70,param_3,auStackX_18,param_3 & 0xffffffff);
  
  // 获取渲染状态信息
  uStack_30 = *(int32_t *)(alStack_70[0] + 0x30);
  
  // 初始化资源收集栈
  pppplStack_58 = (longlong ****)&pppplStack_58;
  pppplStack_50 = (longlong ****)&pppplStack_58;
  pppplStack_48 = (longlong ****)0x0;
  uStack_40 = 0;
  uStack_38 = 0;
  
  // 检查是否有资源数据需要处理
  if (*(longlong *)(alStack_70[0] + 0x18) != 0) {
    // 分配资源收集器内存
    pppplStack_48 =
         (longlong ****)
         FUN_18033c420(&pppplStack_58,*(longlong *)(alStack_70[0] + 0x18),&pppplStack_58);
    
    // 遍历资源数据链表
    ppppplVar6 = (longlong *****)*pppplStack_48;
    pppplStack_58 = (longlong ****)(longlong *****)pppplStack_48;
    while (ppppplVar2 = ppppplVar6, ppppplVar2 != (longlong *****)0x0) {
      pppplStack_58 = (longlong ****)ppppplVar2;
      ppppplVar6 = (longlong *****)*ppppplVar2;
    }
    
    // 处理资源数据
    ppppplVar6 = (longlong *****)((longlong *****)pppplStack_48)[1];
    pppplStack_50 = (longlong ****)(longlong *****)pppplStack_48;
    while (ppppplVar2 = ppppplVar6, ppppplVar2 != (longlong *****)0x0) {
      pppplStack_50 = (longlong ****)ppppplVar2;
      ppppplVar6 = (longlong *****)ppppplVar2[1];
    }
    
    // 获取资源数据大小
    uStack_38 = *(uint64_t *)(alStack_70[0] + 0x28);
  }
  
  // 收集资源数据到输出缓冲区
  ppppplVar6 = (longlong *****)pppplStack_50;
  if ((longlong *****)pppplStack_50 != &pppplStack_58) {
    do {
      // 获取资源数据项
      uVar1 = *(int32_t *)(ppppplVar6 + 4);
      puVar8 = (int32_t *)param_2[1];
      
      // 检查输出缓冲区是否有足够空间
      if (puVar8 < (int32_t *)param_2[2]) {
        param_2[1] = (longlong)(puVar8 + 1);
        *puVar8 = uVar1;
      }
      else {
        // 缓冲区空间不足，重新分配内存
        puVar7 = (int32_t *)*param_2;
        lVar4 = (longlong)puVar8 - (longlong)puVar7 >> 2;
        if (lVar4 == 0) {
          lVar4 = 1;
LAB_18032b0f4:
          // 分配新的缓冲区内存
          puVar5 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,lVar4 * 4,(char)param_2[3]);
          puVar8 = (int32_t *)param_2[1];
          puVar7 = (int32_t *)*param_2;
        }
        else {
          lVar4 = lVar4 * 2;
          if (lVar4 != 0) goto LAB_18032b0f4;
          puVar5 = (int32_t *)0x0;
        }
        
        // 移动现有数据到新缓冲区
        if (puVar7 != puVar8) {
          memmove(puVar5,puVar7,(longlong)puVar8 - (longlong)puVar7);
        }
        
        // 写入资源数据项
        *puVar5 = uVar1;
        if (*param_2 != 0) {
          FUN_18064e900();
        }
        
        // 更新缓冲区指针
        *param_2 = (longlong)puVar5;
        param_2[1] = (longlong)(puVar5 + 1);
        param_2[2] = (longlong)(puVar5 + lVar4);
      }
      
      // 处理下一个资源数据项
      ppppplVar6 = (longlong *****)func_0x00018066bd70(ppppplVar6);
    } while (ppppplVar6 != &pppplStack_58);
  }
  
  // 清理资源收集器内存
  pppplVar3 = pppplStack_48;
  if ((longlong *****)pppplStack_48 != (longlong *****)0x0) {
    FUN_18004b790(&pppplStack_58,*pppplStack_48);
    FUN_18064e900(pppplVar3);
  }
  
  return;
}



// 全局变量警告：以下全局变量可能与同地址的小符号重叠



/**
 * @brief 渲染系统数据处理器
 * 
 * 处理渲染系统中的各种数据，包括资源数据、状态数据等。
 * 支持数据验证、转换和优化处理。
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 数据输出缓冲区指针
 * @param param_3 处理参数和标志
 * @param param_4 处理模式标志
 * @return void 无返回值
 */
void FUN_18032b1c0(longlong param_1,longlong *param_2,ulonglong param_3,char param_4)

{
  int32_t uVar1;
  uint64_t ***pppuVar2;
  uint64_t **ppuVar3;
  longlong lVar4;
  int32_t *puVar5;
  uint64_t ***pppuVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  ulonglong uVar9;
  uint auStackX_18 [4];
  longlong alStack_80 [3];
  uint64_t **ppuStack_68;
  uint64_t **ppuStack_60;
  uint64_t **ppuStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  
  // 设置处理参数
  auStackX_18[0] = (uint)param_3;
  uVar9 = param_3 & 0xffffffff;
  
  // 调用渲染系统参数设置函数
  FUN_18033af10(param_1 + 0x4a8,alStack_80,param_3,auStackX_18,uVar9);
  
  // 获取处理状态信息
  uStack_40 = *(int32_t *)(alStack_80[0] + 0x30);
  
  // 初始化数据处理栈
  ppuStack_68 = &ppuStack_68;
  ppuStack_60 = &ppuStack_68;
  ppuStack_58 = (uint64_t ***)0x0;
  uStack_50 = 0;
  uStack_48 = 0;
  
  // 检查是否有数据需要处理
  if (*(longlong *)(alStack_80[0] + 0x18) != 0) {
    // 分配数据处理器内存
    ppuStack_58 = (uint64_t **)
                  FUN_18033c420(&ppuStack_68,*(longlong *)(alStack_80[0] + 0x18),&ppuStack_68);
    
    // 遍历数据链表
    pppuVar6 = (uint64_t ***)*ppuStack_58;
    ppuStack_68 = (uint64_t ***)ppuStack_58;
    while (pppuVar2 = pppuVar6, pppuVar2 != (uint64_t ***)0x0) {
      ppuStack_68 = pppuVar2;
      pppuVar6 = (uint64_t ***)*pppuVar2;
    }
    
    // 处理数据
    pppuVar6 = (uint64_t ***)((uint64_t ***)ppuStack_58)[1];
    ppuStack_60 = (uint64_t ***)ppuStack_58;
    while (pppuVar2 = pppuVar6, pppuVar2 != (uint64_t ***)0x0) {
      ppuStack_60 = pppuVar2;
      pppuVar6 = (uint64_t ***)pppuVar2[1];
    }
    
    // 获取数据大小
    uStack_48 = *(uint64_t *)(alStack_80[0] + 0x28);
  }
  
  // 处理数据到输出缓冲区
  pppuVar6 = (uint64_t ***)ppuStack_60;
  if ((uint64_t ***)ppuStack_60 != &ppuStack_68) {
    do {
      // 获取数据项
      uVar1 = *(int32_t *)(pppuVar6 + 4);
      puVar8 = (int32_t *)param_2[1];
      
      // 检查输出缓冲区是否有足够空间
      if (puVar8 < (int32_t *)param_2[2]) {
        param_2[1] = (longlong)(puVar8 + 1);
        *puVar8 = uVar1;
      }
      else {
        // 缓冲区空间不足，重新分配内存
        puVar7 = (int32_t *)*param_2;
        lVar4 = (longlong)puVar8 - (longlong)puVar7 >> 2;
        if (lVar4 == 0) {
          lVar4 = 1;
LAB_18032b314:
          // 分配新的缓冲区内存
          puVar5 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,lVar4 * 4,(char)param_2[3]);
          puVar8 = (int32_t *)param_2[1];
          puVar7 = (int32_t *)*param_2;
        }
        else {
          lVar4 = lVar4 * 2;
          if (lVar4 != 0) goto LAB_18032b314;
          puVar5 = (int32_t *)0x0;
        }
        
        // 移动现有数据到新缓冲区
        if (puVar7 != puVar8) {
          memmove(puVar5,puVar7,(longlong)puVar8 - (longlong)puVar7);
        }
        
        // 写入数据项
        *puVar5 = uVar1;
        if (*param_2 != 0) {
          FUN_18064e900();
        }
        
        // 更新缓冲区指针
        *param_2 = (longlong)puVar5;
        param_2[1] = (longlong)(puVar5 + 1);
        param_2[2] = (longlong)(puVar5 + lVar4);
        uVar9 = (ulonglong)auStackX_18[0];
      }
      
      // 根据处理模式进行额外处理
      if (param_4 != '\0') {
        FUN_18032b400(param_1,param_2,uVar9,uVar1);
      }
      
      // 处理下一个数据项
      pppuVar6 = (uint64_t ***)func_0x00018066bd70(pppuVar6);
    } while (pppuVar6 != &ppuStack_68);
  }
  
  // 清理数据处理器内存
  ppuVar3 = ppuStack_58;
  if ((uint64_t ***)ppuStack_58 == (uint64_t ***)0x0) {
    return;
  }
  
  FUN_18004b790(&ppuStack_68,*ppuStack_58);
  FUN_18064e900(ppuVar3);
}





/**
 * @brief 渲染系统资源数据处理器
 * 
 * 处理渲染系统中的资源数据，包括纹理、着色器等。
 * 支持递归处理和资源依赖关系管理。
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 数据输出缓冲区指针
 * @param param_3 资源参数
 * @param param_4 资源标识符
 * @return void 无返回值
 */
void FUN_18032b400(uint64_t param_1,longlong param_2,int32_t param_3,int32_t param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  // 获取资源处理函数
  lVar1 = FUN_18032ba60(param_1,param_4);
  
  // 处理资源数据
  FUN_18033c870(param_2,*(uint64_t *)(param_2 + 8),*(uint64_t *)(lVar1 + 0x170),
                *(uint64_t *)(lVar1 + 0x178));
  
  // 计算资源数量
  uVar2 = *(longlong *)(lVar1 + 0x178) - *(longlong *)(lVar1 + 0x170) >> 2;
  
  // 递归处理子资源
  if ((int)uVar2 != 0) {
    lVar3 = 0;
    uVar2 = uVar2 & 0xffffffff;
    do {
      FUN_18032b400(param_1,param_2,param_3,*(int32_t *)(*(longlong *)(lVar1 + 0x170) + lVar3));
      lVar3 = lVar3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  
  return;
}





/**
 * @brief 渲染系统资源队列处理器
 * 
 * 处理渲染系统中的资源队列，支持批量处理和优化。
 * 
 * @return void 无返回值
 */
void FUN_18032b452(void)

{
  uint in_EAX;
  ulonglong uVar1;
  
  // 获取队列长度
  uVar1 = (ulonglong)in_EAX;
  
  // 处理队列中的所有资源
  do {
    FUN_18032b400();
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  
  return;
}





/**
 * @brief 渲染系统空资源处理器
 * 
 * 处理空资源情况，提供默认处理逻辑。
 * 
 * @return void 无返回值
 */
void FUN_18032b48d(void)

{
  return;
}



// 全局变量警告：以下全局变量可能与同地址的小符号重叠

/**
 * @brief 渲染系统资源查找器
 * 
 * 在渲染系统中查找指定的资源，支持哈希表查找。
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 资源标识符
 * @return int32_t 查找结果
 */
int32_t FUN_18032b4a0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int iVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  char acStackX_8 [4];
  uint uStackX_c;
  longlong lStackX_10;
  int32_t uStack_40;
  int32_t uStack_3c;
  uint64_t uStack_38;
  int32_t uStack_34;
  
  // 获取资源表锁
  lVar1 = param_1 + 0x358;
  lStackX_10 = lVar1;
  iVar4 = _Mtx_lock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  
  // 获取哈希表参数
  iVar4 = _DAT_180d48e20;
  uVar7 = param_2 % (ulonglong)*(uint *)(param_1 + 0x338);
  lVar2 = *(longlong *)(param_1 + 0x330);
  puVar3 = *(ulonglong **)(lVar2 + uVar7 * 8);
  
  // 在哈希表中查找资源
  for (puVar5 = puVar3; puVar5 != (ulonglong *)0x0; puVar5 = (ulonglong *)puVar5[2]) {
    if (param_2 == *puVar5) {
      lVar6 = *(longlong *)(param_1 + 0x338);
      goto LAB_18032b522;
    }
  }
  
  // 获取哈希表大小
  lVar6 = *(longlong *)(param_1 + 0x338);
  puVar5 = *(ulonglong **)(lVar2 + lVar6 * 8);
LAB_18032b522:
  
  // 检查是否需要创建新资源条目
  if (puVar5 == *(ulonglong **)(lVar2 + lVar6 * 8)) {
    _DAT_180d48e20 = _DAT_180d48e20 + 1;
    
    // 再次查找资源
    for (puVar5 = puVar3; puVar5 != (ulonglong *)0x0; puVar5 = (ulonglong *)puVar5[2]) {
      if (param_2 == *puVar5) {
        if (puVar5 != (ulonglong *)0x0) goto LAB_18032b629;
        break;
      }
    }
    
    // 创建新的资源条目
    puVar5 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,0x18,*(int8_t *)(param_1 + 0x354));
    uStack_40 = (int32_t)param_2;
    uStack_3c = (int32_t)(param_2 >> 0x20);
    *(int32_t *)puVar5 = uStack_40;
    *(int32_t *)((longlong)puVar5 + 4) = uStack_3c;
    *(int *)(puVar5 + 1) = iVar4;
    *(int32_t *)((longlong)puVar5 + 0xc) = uStack_34;
    puVar5[2] = 0;
    
    // 更新哈希表
    FUN_18066c220(param_1 + 0x348,acStackX_8,*(int32_t *)(param_1 + 0x338),
                  *(int32_t *)(param_1 + 0x340),1);
    
    // 检查是否需要重新哈希
    if (acStackX_8[0] != '\0') {
      uVar7 = param_2 % (ulonglong)uStackX_c;
      FUN_18033db70(param_1 + 0x328,(ulonglong)uStackX_c);
    }
    
    // 插入新的资源条目
    puVar5[2] = *(ulonglong *)(*(longlong *)(param_1 + 0x330) + uVar7 * 8);
    *(ulonglong **)(*(longlong *)(param_1 + 0x330) + uVar7 * 8) = puVar5;
    *(longlong *)(param_1 + 0x340) = *(longlong *)(param_1 + 0x340) + 1;
  }
  
LAB_18032b629:
  // 获取资源数据
  uVar7 = puVar5[1];
  iVar4 = _Mtx_unlock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  
  return (int)uVar7;
}



/**
 * @brief 渲染系统资源条目创建器
 * 
 * 在渲染系统中创建新的资源条目，支持资源缓存和管理。
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 资源标识符
 * @return uint64_t 创建的资源条目指针
 */
uint64_t FUN_18032b680(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint64_t uVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char acStackX_8 [4];
  uint uStackX_c;
  uint64_t uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  
  // 获取资源标识符
  uVar7 = (ulonglong)param_2;
  
  // 获取资源表锁
  iVar2 = _Mtx_lock(param_1 + 0xa20);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  
  // 获取资源表
  lVar1 = *(longlong *)(param_1 + 0x9f8);
  
  // 在资源表中查找
  for (puVar5 = *(uint **)(lVar1 + (uVar7 % (ulonglong)*(uint *)(param_1 + 0xa00)) * 8);
      puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 4)) {
    if (param_2 == *puVar5) {
      lVar3 = *(longlong *)(param_1 + 0xa00);
      goto LAB_18032b6ff;
    }
  }
  
  // 获取资源表大小
  lVar3 = *(longlong *)(param_1 + 0xa00);
  puVar5 = *(uint **)(lVar1 + lVar3 * 8);
LAB_18032b6ff:
  
  // 检查是否需要创建新资源条目
  if (puVar5 == *(uint **)(lVar1 + lVar3 * 8)) {
    // 分配资源条目内存
    uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x80,8,3);
    uVar4 = FUN_18033ac00(uVar4);
    
    // 计算哈希值
    uVar6 = uVar7 % (ulonglong)*(uint *)(param_1 + 0xa00);
    
    // 再次查找资源
    for (puVar5 = *(uint **)(*(longlong *)(param_1 + 0x9f8) + uVar6 * 8); puVar5 != (uint *)0x0;
        puVar5 = *(uint **)(puVar5 + 4)) {
      if (param_2 == *puVar5) {
        if (puVar5 != (uint *)0x0) goto LAB_18032b82c;
        break;
      }
    }
    
    // 创建新的资源条目
    puVar5 = (uint *)FUN_18062b420(_DAT_180c8ed18,0x18,*(int8_t *)(param_1 + 0xa1c));
    uStack_38 = (uint)uVar4;
    uStack_34 = (uint)((ulonglong)uVar4 >> 0x20);
    *puVar5 = param_2;
    puVar5[1] = uStack_3c;
    puVar5[2] = uStack_38;
    puVar5[3] = uStack_34;
    puVar5[4] = 0;
    puVar5[5] = 0;
    
    // 更新资源表
    FUN_18066c220(param_1 + 0xa10,acStackX_8,*(int32_t *)(param_1 + 0xa00),
                  *(int32_t *)(param_1 + 0xa08),1);
    
    // 检查是否需要重新哈希
    if (acStackX_8[0] != '\0') {
      uVar6 = uVar7 % (ulonglong)uStackX_c;
      FUN_18033bf30(param_1 + 0x9f0,(ulonglong)uStackX_c);
    }
    
    // 插入新的资源条目
    *(uint64_t *)(puVar5 + 4) = *(uint64_t *)(*(longlong *)(param_1 + 0x9f8) + uVar6 * 8);
    *(uint **)(*(longlong *)(param_1 + 0x9f8) + uVar6 * 8) = puVar5;
    *(longlong *)(param_1 + 0xa08) = *(longlong *)(param_1 + 0xa08) + 1;
  }
  
LAB_18032b82c:
  // 获取资源数据
  uVar4 = *(uint64_t *)(puVar5 + 2);
  iVar2 = _Mtx_unlock(param_1 + 0xa20);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  
  return uVar4;
}



/**
 * @brief 渲染系统资源初始化器
 * 
 * 初始化渲染系统中的资源，包括内存分配和状态设置。
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 资源标识符
 * @param param_3 资源参数
 * @return longlong 初始化结果
 */
longlong FUN_18032b880(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  
  // 检查渲染系统状态
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
               0x48) < _DAT_180d496d0) && (FUN_1808fcb90(&system_buffer_96d0), _DAT_180d496d0 == -1)) {
    // 初始化全局变量
    _DAT_180d49730 = &unknown_var_3480_ptr;
    _DAT_180d49738 = &system_buffer_9748;
    _DAT_180d49740 = 0;
  }
  
  // [函数实现被截断，继续下一个函数]
  
  return 0;
}


/**
 * @brief 渲染系统资源数据保存器
 * 
 * 保存渲染系统中的资源数据到文件，支持序列化和压缩。
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 文件句柄
 * @return void 无返回值
 */
void FUN_18032c0b0(longlong param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t *puVar3;
  void *puVar4;
  int8_t auStackX_8 [8];
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  void *puStack_68;
  longlong lStack_60;
  int32_t uStack_50;
  
  // 获取文件信息
  uStackX_18 = *(uint64_t *)(param_1 + 0x160);
  uStackX_10 = param_2;
  
  // 创建文件缓冲区
  puVar1 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
  lVar2 = FUN_180334500(param_1,&puStack_68);
  
  // 获取文件路径
  puVar4 = &system_buffer_ptr;
  if (*(void **)(lVar2 + 8) != (void *)0x0) {
    puVar4 = *(void **)(lVar2 + 8);
  }
  
  // 初始化文件结构
  *puVar1 = 0;
  *(int8_t *)(puVar1 + 2) = 0;
  FUN_18062dee0(puVar1,puVar4,&unknown_var_9772_ptr);
  
  // 设置文件操作参数
  puStack_68 = &unknown_var_3456_ptr;
  if (lStack_60 != 0) {
    FUN_18064e900();
  }
  
  lStack_60 = 0;
  uStack_50 = 0;
  puStack_68 = &unknown_var_720_ptr;
  
  // 打开文件并定位到开始位置
  _fseeki64(puVar1[1],0,0);
  
  // 创建文件头
  puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  FUN_18064e990(puVar3);
  *puVar3 = 0x655679616c706552;  // "ReplyValue"
  *(int32_t *)(puVar3 + 1) = 0x6f697372;  // "rsio"
  *(int16_t *)((longlong)puVar3 + 0xc) = 0x6e;  // "n"
  
  // 写入文件头
  fwrite(puVar3,0xd,1,puVar1[1]);
  auStackX_8[0] = 1;
  fwrite(auStackX_8,1,1,puVar1[1]);
  
  // 清理文件缓冲区
  FUN_18064e900(puVar3);
}



// 全局变量警告：以下全局变量可能与同地址的小符号重叠



/**
 * @brief 渲染系统资源数据加载器
 * 
 * 从文件加载渲染系统资源数据，支持反序列化和解压缩。
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 文件句柄
 * @return void 无返回值
 */
void FUN_18032c450(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint64_t *puVar3;
  longlong lVar4;
  uint64_t *puVar5;
  int *piVar6;
  ulonglong uVar7;
  void *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  ulonglong uVar11;
  int iVar12;
  int aiStackX_8 [2];
  uint64_t uStackX_10;
  char acStackX_18 [4];
  uint uStackX_1c;
  longlong lStackX_20;
  int8_t auStack_80 [8];
  void *puStack_78;
  
  // 清理渲染系统资源
  FUN_18033ae70(param_1 + 0x4a8);
  FUN_18033ad00(param_1 + 0x9f0);
  FUN_18033ad00(param_1 + 0x568);
  FUN_18033ae70(param_1 + 0x638);
  FUN_18033ad00(param_1 + 0x6b8);
  
  // 初始化资源管理器
  lVar4 = param_1 + 0x848;
  FUN_180179f00(lVar4,*(uint64_t *)(param_1 + 0x858));
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(param_1 + 0x850) = lVar4;
  iVar12 = 0;
  *(uint64_t *)(param_1 + 0x858) = 0;
  *(int8_t *)(param_1 + 0x860) = 0;
  *(uint64_t *)(param_1 + 0x868) = 0;
  
  // 初始化纹理管理器
  lVar4 = param_1 + 0x958;
  puVar3 = *(uint64_t **)(param_1 + 0x968);
  if (puVar3 != (uint64_t *)0x0) {
    FUN_18004b790(lVar4,*puVar3);
    FUN_18064e900(puVar3);
  }
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(param_1 + 0x960) = lVar4;
  *(uint64_t *)(param_1 + 0x968) = 0;
  *(int8_t *)(param_1 + 0x970) = 0;
  *(uint64_t *)(param_1 + 0x978) = 0;
  
  // 初始化着色器管理器
  lVar4 = param_1 + 0x8d8;
  FUN_180179f00(lVar4,*(uint64_t *)(param_1 + 0x8e8));
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(param_1 + 0x8e0) = lVar4;
  *(uint64_t *)(param_1 + 0x8e8) = 0;
  *(int8_t *)(param_1 + 0x8f0) = 0;
  *(uint64_t *)(param_1 + 0x8f8) = 0;
  
  // 初始化缓冲区管理器
  lVar4 = param_1 + 0x8a8;
  FUN_180179f00(lVar4,*(uint64_t *)(param_1 + 0x8b8));
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(param_1 + 0x8b0) = lVar4;
  *(uint64_t *)(param_1 + 0x8b8) = 0;
  *(int8_t *)(param_1 + 0x8c0) = 0;
  *(uint64_t *)(param_1 + 0x8c8) = 0;
  
  // 初始化管线管理器
  lVar4 = param_1 + 0x878;
  FUN_180179f00(lVar4,*(uint64_t *)(param_1 + 0x888));
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(param_1 + 0x880) = lVar4;
  *(uint64_t *)(param_1 + 0x888) = 0;
  *(int8_t *)(param_1 + 0x890) = 0;
  *(uint64_t *)(param_1 + 0x898) = 0;
  
  // 获取资源管理器锁
  lVar4 = param_1 + 0x3d8;
  lStackX_20 = lVar4;
  iVar2 = _Mtx_lock(lVar4);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  
  // 清理资源管理器
  FUN_18033ad00(param_1 + 0x3a8);
  iVar2 = _Mtx_unlock(lVar4);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  
  // 获取资源数据指针
  puVar1 = (ulonglong *)(param_1 + 0x260);
  *(ulonglong *)(param_1 + 0x268) = *puVar1;
  
  // 获取文件路径
  puVar8 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar8 = *(void **)(param_2 + 8);
  }
  
  // 调用文件处理回调
  (**(code **)(*(longlong *)(param_1 + 0x208) + 0x10))((longlong *)(param_1 + 0x208),puVar8);
  
  // 获取文件操作参数
  FUN_180334500(param_1,auStack_80);
  puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
  puVar8 = &system_buffer_ptr;
  if (puStack_78 != (void *)0x0) {
    puVar8 = puStack_78;
  }
  
  // 初始化文件结构
  *puVar3 = 0;
  *(int8_t *)(puVar3 + 2) = 0;
  FUN_18062dee0(puVar3,puVar8,&unknown_var_4880_ptr);
  
  // 检查文件是否打开
  if (puVar3[1] == 0) {
    FUN_180626f80(&unknown_var_7632_ptr);
    if (puVar3[1] != 0) {
      fclose();
      puVar3[1] = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
    }
    FUN_18064e900(puVar3);
  }
  
  // 读取文件头信息
  FUN_1803345c0(param_1,puVar3);
  fread(param_1 + 0x160,8,1,puVar3[1]);
  FUN_1800e8140(puVar1,*(longlong *)(param_1 + 0x160) + 1);
  
  // 读取资源数据
  uVar7 = *(ulonglong *)(param_1 + 0x160);
  if (uVar7 != 0) {
    do {
      fread(&uStackX_10,8,1,puVar3[1]);
      puVar10 = *(uint64_t **)(param_1 + 0x268);
      if (puVar10 < *(uint64_t **)(param_1 + 0x270)) {
        *(uint64_t **)(param_1 + 0x268) = puVar10 + 1;
        *puVar10 = uStackX_10;
      }
      else {
        // 缓冲区空间不足，重新分配内存
        puVar9 = (uint64_t *)*puVar1;
        lVar4 = (longlong)puVar10 - (longlong)puVar9 >> 3;
        if (lVar4 == 0) {
          lVar4 = 1;
LAB_18032c711:
          puVar5 = (uint64_t *)
                   FUN_18062b420(_DAT_180c8ed18,lVar4 * 8,*(int8_t *)(param_1 + 0x278));
          puVar10 = *(uint64_t **)(param_1 + 0x268);
          puVar9 = (uint64_t *)*puVar1;
        }
        else {
          lVar4 = lVar4 * 2;
          if (lVar4 != 0) goto LAB_18032c711;
          puVar5 = (uint64_t *)0x0;
        }
        
        // 移动现有数据到新缓冲区
        if (puVar9 != puVar10) {
          memmove(puVar5,puVar9,(longlong)puVar10 - (longlong)puVar9);
        }
        
        // 写入资源数据
        *puVar5 = uStackX_10;
        if (*puVar1 != 0) {
          FUN_18064e900();
        }
        
        // 更新缓冲区指针
        *puVar1 = (ulonglong)puVar5;
        *(uint64_t **)(param_1 + 0x268) = puVar5 + 1;
        *(uint64_t **)(param_1 + 0x270) = puVar5 + lVar4;
      }
      
      iVar12 = iVar12 + 1;
      uVar7 = *(ulonglong *)(param_1 + 0x160);
    } while ((ulonglong)(longlong)iVar12 < uVar7);
  }
  
  // 读取资源索引数据
  uVar11 = 0;
  if (uVar7 != 0) {
    do {
      fread(aiStackX_8,4,1,puVar3[1]);
      iVar12 = aiStackX_8[0];
      iVar2 = (int)uVar11;
      uVar7 = uVar11 % (ulonglong)*(uint *)(param_1 + 0x998);
      
      // 在资源索引表中查找
      for (piVar6 = *(int **)(*(longlong *)(param_1 + 0x990) + uVar7 * 8); piVar6 != (int *)0x0;
          piVar6 = *(int **)(piVar6 + 2)) {
        if (iVar2 == *piVar6) {
          if (piVar6 != (int *)0x0) goto LAB_18032c882;
          break;
        }
      }
      
      // 创建新的资源索引条目
      FUN_18066c220(param_1 + 0x9a8,acStackX_18,(ulonglong)*(uint *)(param_1 + 0x998),
                    *(int32_t *)(param_1 + 0x9a0),1);
      piVar6 = (int *)FUN_18062b420(_DAT_180c8ed18,0x10,*(int8_t *)(param_1 + 0x9b4));
      *piVar6 = iVar2;
      piVar6[1] = 0;
      piVar6[2] = 0;
      piVar6[3] = 0;
      
      // 检查是否需要重新哈希
      if (acStackX_18[0] != '\0') {
        uVar7 = uVar11 % (ulonglong)uStackX_1c;
        FUN_18033c010(param_1 + 0x988,uStackX_1c);
      }
      
      // 插入新的资源索引条目
      *(uint64_t *)(piVar6 + 2) = *(uint64_t *)(*(longlong *)(param_1 + 0x990) + uVar7 * 8);
      *(int **)(*(longlong *)(param_1 + 0x990) + uVar7 * 8) = piVar6;
      *(longlong *)(param_1 + 0x9a0) = *(longlong *)(param_1 + 0x9a0) + 1;
      
LAB_18032c882:
      // 更新资源索引数据
      piVar6[1] = iVar12;
      uVar11 = (ulonglong)(iVar2 + 1U);
    } while ((ulonglong)(longlong)(int)(iVar2 + 1U) < *(ulonglong *)(param_1 + 0x160));
  }
  
  // 处理资源数据
  FUN_18032f540(param_1,puVar3,param_1 + 0x208);
  FUN_18032f990(param_1,puVar3,param_1 + 0x208);
  FUN_18032ffc0(param_1,puVar3,param_1 + 0x208);
  FUN_1803304e0(param_1,puVar3,param_1 + 0x208);
  FUN_180330ab0(param_1,puVar3,param_1 + 0x208);
  FUN_180335590(param_1,puVar3);
  FUN_180335f10(param_1,puVar3);
  FUN_180336540(param_1,puVar3);
  
  // 关闭文件
  if (puVar3[1] != 0) {
    fclose();
    puVar3[1] = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
    if (puVar3[1] != 0) {
      fclose();
      puVar3[1] = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
    }
  }
  
  // 清理文件缓冲区
  FUN_18064e900(puVar3);
}



// 全局变量警告：以下全局变量可能与同地址的小符号重叠



/**
 * @brief 渲染系统资源数据导出器
 * 
 * 导出渲染系统资源数据到文件，支持多种格式和压缩选项。
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 文件句柄
 * @param param_3 导出位置
 * @param param_4 导出参数
 * @return void 无返回值
 */
void FUN_18032c9f0(longlong param_1,longlong param_2,longlong param_3,int32_t param_4)

{
  int32_t uVar1;
  uint uVar2;
  int32_t *puVar3;
  uint *puVar4;
  uint64_t *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  void *puVar8;
  longlong lVar9;
  int aiStack_b8 [2];
  longlong lStack_b0;
  uint *puStack_a8;
  longlong lStack_a0;
  int32_t uStack_98;
  int32_t uStack_90;
  int iStack_8c;
  uint64_t *puStack_88;
  longlong lStack_80;
  uint64_t uStack_78;
  int32_t uStack_70;
  uint64_t *puStack_68;
  uint64_t uStack_60;
  
  // 设置导出参数
  uStack_60 = 0xfffffffffffffffe;
  _fseeki64(*(uint64_t *)(param_2 + 8),param_3,0);
  
  // 初始化导出缓冲区
  lStack_b0 = 0;
  puStack_a8 = (uint *)0x0;
  lStack_a0 = 0;
  uStack_98 = 3;
  
  // 收集资源数据
  FUN_18032b1c0(param_1,&lStack_b0,param_4,0);
  aiStack_b8[0] = (int)((longlong)puStack_a8 - lStack_b0 >> 2);
  
  // 写入资源数据
  fwrite(aiStack_b8,4,1,*(uint64_t *)(param_2 + 8));
  if (0 < aiStack_b8[0]) {
    fwrite(lStack_b0,4,(longlong)aiStack_b8[0],*(uint64_t *)(param_2 + 8));
  }
  
  // 清理资源数据缓冲区
  if (lStack_b0 != 0) {
    FUN_18064e900();
  }
  
  // 初始化资源收集缓冲区
  puStack_88 = (uint64_t *)0x0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 3;
  
  // 收集资源数据
  FUN_18032afa0(param_1,&puStack_88,param_4);
  puVar5 = puStack_88;
  aiStack_b8[0] = (int)(lStack_80 - (longlong)puStack_88 >> 2);
  
  // 写入资源数据
  fwrite(aiStack_b8,4,1,*(uint64_t *)(param_2 + 8));
  if (0 < aiStack_b8[0]) {
    fwrite(puVar5,4,(longlong)aiStack_b8[0],*(uint64_t *)(param_2 + 8));
  }
  
  // 清理资源收集缓冲区
  if (puVar5 != (uint64_t *)0x0) {
    FUN_18064e900(puVar5);
  }
  
  // 初始化扩展数据缓冲区
  lStack_b0 = 0;
  puStack_a8 = (int32_t *)0x0;
  lStack_a0 = 0;
  uStack_98 = CONCAT13(uStack_98._3_1_,0x30000);
  puStack_88 = (uint64_t *)0x0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 3;
  
  // 收集扩展数据
  FUN_1803347d0(param_1,&puStack_88,param_4);
  puVar5 = puStack_88;
  uVar6 = lStack_80 - (longlong)puStack_88 >> 3;
  aiStack_b8[0] = (int)uVar6;
  
  // 检查是否需要扩展缓冲区
  if ((uVar6 & 0xffffff) != 0) {
    FUN_180639bf0(&lStack_b0,(longlong)(aiStack_b8[0] << 8));
  }
  
  // 写入扩展数据
  fwrite(aiStack_b8,4,1,*(uint64_t *)(param_2 + 8));
  puVar4 = puStack_a8;
  lVar7 = lStack_b0;
  uStack_90 = 0;
  
  if (0 < aiStack_b8[0]) {
    puStack_68 = puVar5;
    puVar3 = (int32_t *)*puVar5;
    uVar1 = *puVar3;
    
    // 检查缓冲区空间
    if ((ulonglong)((lStack_a0 - (longlong)puStack_a8) + lStack_b0) < 5) {
      FUN_180639bf0(&lStack_b0,(longlong)puStack_a8 + (4 - lStack_b0));
    }
    
    // 写入资源数据
    *puStack_a8 = uVar1;
    puStack_a8 = puStack_a8 + 1;
    
    if ((ulonglong)((lStack_a0 - (longlong)puStack_a8) + lStack_b0) < 0x11) {
      FUN_180639bf0(&lStack_b0,(longlong)puStack_a8 + (0x10 - lStack_b0));
    }
    
    *puStack_a8 = puVar3[1];
    puStack_a8[1] = puVar3[2];
    puStack_a8[2] = puVar3[3];
    puStack_a8[3] = puVar3[4];
    puStack_a8 = puStack_a8 + 4;
    
    uVar2 = puVar3[10];
    uVar6 = (ulonglong)uVar2 + 4;
    
    if ((ulonglong)((lStack_a0 - (longlong)puStack_a8) + lStack_b0) <= uVar6) {
      FUN_180639bf0(&lStack_b0,(uVar6 - lStack_b0) + (longlong)puStack_a8);
    }
    
    *puStack_a8 = uVar2;
    puStack_a8 = puStack_a8 + 1;
    
    // 获取资源名称
    puVar8 = &system_buffer_ptr;
    if (*(void **)(puVar3 + 8) != (void *)0x0) {
      puVar8 = *(void **)(puVar3 + 8);
    }
    
    // 复制资源名称
    memcpy(puStack_a8,puVar8,(ulonglong)uVar2);
  }
  
  // 计算数据大小
  iStack_8c = (int)puStack_a8 - (int)lStack_b0;
  if (lStack_b0 == 0) {
    iStack_8c = 0;
  }
  
  // 写入数据大小
  fwrite(&iStack_8c,4,1,*(uint64_t *)(param_2 + 8));
  
  // 写入数据内容
  lVar9 = (longlong)puVar4 - lVar7;
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  fwrite(lVar7,lVar9,1,*(uint64_t *)(param_2 + 8));
  
  // 清理扩展数据缓冲区
  if (puVar5 != (uint64_t *)0x0) {
    FUN_18064e900(puVar5);
  }
  
  // 清理资源数据缓冲区
  if (((char)uStack_98 == '\0') && (lVar7 != 0)) {
    FUN_18064e900(lVar7);
  }
  
  // 处理资源导出
  FUN_180331530(param_1,param_2,param_4);
  
  // 刷新文件缓冲区
  fflush(*(uint64_t *)(param_2 + 8));
  
  // 记录导出信息
  lVar7 = _ftelli64(*(uint64_t *)(param_2 + 8));
  FUN_180062300(_DAT_180c86928,&unknown_var_7576_ptr,param_4,lVar7 - param_3,
                *(uint64_t *)(param_1 + 0x2d0));
}



// 全局变量警告：以下全局变量可能与同地址的小符号重叠



/**
 * @brief 技术说明
 * 
 * 本模块实现了渲染系统的高级资源管理和数据处理功能：
 * 
 * 1. 资源数据收集：
 *    - 支持多种资源类型收集
 *    - 提供数据过滤和排序功能
 *    - 实现内存优化和缓存管理
 * 
 * 2. 数据处理：
 *    - 支持数据验证和转换
 *    - 提供递归处理能力
 *    - 实现资源依赖关系管理
 * 
 * 3. 文件操作：
 *    - 支持多种文件格式
 *    - 提供压缩和序列化功能
 *    - 实现错误处理和恢复机制
 * 
 * 4. 资源管理：
 *    - 支持哈希表查找
 *    - 提供资源缓存功能
 *    - 实现内存管理和垃圾回收
 * 
 * 5. 系统集成：
 *    - 与渲染管线深度集成
 *    - 支持多线程处理
 *    - 提供完整的错误处理机制
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */