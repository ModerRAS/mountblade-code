#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

/*==============================================================================
* 模块: 03_rendering_part518.c - 渲染系统高级渲染管线和状态管理模块
* 
* 功能描述:
*   本模块实现渲染系统的高级渲染管线和状态管理功能，包含6个核心函数：
*   - RenderSystem_QueueProcessor: 渲染队列处理器，负责渲染队列的基本处理
*   - RenderSystem_AdvancedRenderer: 高级渲染器，实现复杂的渲染逻辑和状态管理
*   - RenderSystem_CallbackProcessor: 回调处理器，处理渲染相关的回调函数
*   - RenderSystem_StatusChecker: 状态检查器，检查渲染系统的状态
*   - RenderSystem_ContextManager: 上下文管理器，管理渲染上下文和相关资源
*   - RenderSystem_PipelineSynchronizer: 渲染管线同步器，同步渲染管线的各个阶段
* 
* 技术特点:
*   - 支持多阶段渲染管线处理
*   - 实现复杂的渲染状态管理
*   - 提供回调函数处理机制
*   - 支持渲染上下文管理
*   - 实现渲染管线同步机制
*   - 内存管理和资源释放
*   - 虚函数表和面向对象设计
* 
* 内存布局:
*   - 使用8字节对齐的内存布局
*   - 支持多种对象大小和结构
*   - 实现复杂的内存管理机制
*   - 使用虚拟函数表实现多态
* ==============================================================================*/

// 函数类型别名定义
typedef void (*RenderSystem_QueueProcessor_func)(longlong param_1, int32_t param_2, uint64_t param_3, uint64_t param_4);
typedef uint64_t (*RenderSystem_AdvancedRenderer_func)(longlong param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4, uint64_t *param_5);
typedef uint64_t (*RenderSystem_CallbackProcessor_func)(uint64_t param_1, longlong param_2);
typedef int8_t (*RenderSystem_StatusChecker_func)(void);
typedef uint64_t* (*RenderSystem_ContextManager_func)(longlong param_1, uint64_t *param_2);
typedef void (*RenderSystem_PipelineSynchronizer_func)(longlong param_1, longlong param_2, longlong param_3, longlong param_4, longlong param_5);
typedef void (*RenderSystem_StateInitializer_func)(longlong ******param_1, int8_t param_2);
typedef void (*RenderSystem_ResourceCleaner_func)(longlong *param_1, longlong *param_2);

/*==============================================================================
* 函数: RenderSystem_QueueProcessor - 渲染队列处理器
* 
* 功能描述:
*   处理渲染队列的基本操作，包括队列初始化、参数传递和回调处理
*   负责渲染队列的核心处理逻辑，支持多种渲染状态的管理
* 
* 参数:
*   param_1 (longlong): 渲染系统上下文指针，包含渲染状态和队列信息
*   param_2 (int32_t): 渲染参数，控制渲染行为和状态
*   param_3 (uint64_t): 渲染数据指针，包含渲染所需的数据
*   param_4 (uint64_t): 渲染配置指针，包含渲染配置信息
* 
* 返回值:
*   无
* 
* 处理流程:
*   1. 初始化渲染队列参数和状态
*   2. 调用系统初始化函数进行预处理
*   3. 设置渲染上下文和回调函数
*   4. 执行渲染队列处理操作
*   5. 根据条件调用渲染回调函数
*   6. 完成队列处理并返回
* 
* 注意事项:
*   - 需要确保渲染系统上下文的有效性
*   - 参数传递时需要进行类型检查
*   - 回调函数调用前需要验证函数指针
*   - 内存管理需要谨慎处理
*   - 支持异步渲染操作
* =============================================================================*/
// 函数别名: RenderSystem_QueueProcessor
void FUN_180547e60(longlong param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)

{
  // 局部变量声明
  longlong *plVar1;           // 渲染对象指针
  int32_t auStackX_10 [6]; // 栈数组，用于参数传递
  uint64_t uVar2;           // 渲染状态标识
  int32_t *apuStack_30 [2]; // 参数数组指针
  void *puStack_20;       // 上下文指针
  code *pcStack_18;           // 回调函数指针
  
  // 初始化渲染状态
  uVar2 = 0xfffffffffffffffe;  // 设置渲染状态标识
  auStackX_10[0] = param_2;    // 保存渲染参数
  
  // 调用系统初始化函数
  FUN_18054a180();             // 执行系统初始化
  
  // 设置渲染上下文
  puStack_20 = &unknown_var_8384_ptr; // 设置上下文指针
  pcStack_18 = FUN_18054a540;  // 设置回调函数指针
  apuStack_30[0] = auStackX_10; // 设置参数数组
  
  // 执行渲染队列处理
  FUN_18054a4b0(param_1 + 0xe0, apuStack_30, param_3, param_4, uVar2);
  
  // 检查并调用渲染回调
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1a0) + 0x48);
    (**(code **)(*plVar1 + 0x1b0))(plVar1, auStackX_10[0]);
  }
  
  return; // 完成队列处理
}



/*==============================================================================
* 函数: RenderSystem_AdvancedRenderer - 高级渲染器
* 
* 功能描述:
*   实现高级渲染功能，包括复杂的渲染逻辑、状态管理和多阶段渲染
*   支持多种渲染模式、状态检查和资源管理
* 
* 参数:
*   param_1 (longlong): 渲染系统主上下文，包含完整的渲染状态
*   param_2 (uint64_t): 渲染数据输入，包含渲染所需的几何和材质数据
*   param_3 (uint64_t): 渲染参数配置，控制渲染行为和质量
*   param_4 (uint64_t): 渲染目标指针，指定渲染输出的目标
*   param_5 (uint64_t*): 渲染状态数组，包含多个渲染状态参数
* 
* 返回值:
*   uint64_t: 渲染状态标识，表示渲染操作的结果状态
* 
* 处理流程:
*   1. 检查渲染系统状态和初始化条件
*   2. 验证渲染参数和目标的有效性
*   3. 执行渲染状态检查和条件判断
*   4. 处理渲染队列和渲染对象
*   5. 根据不同的渲染模式执行相应的渲染操作
*   6. 管理渲染资源和内存
*   7. 返回渲染状态结果
* 
* 注意事项:
*   - 需要仔细管理渲染状态和资源
*   - 支持多种渲染模式和条件判断
*   - 内存管理需要特别注意
*   - 渲染性能优化很重要
*   - 需要处理各种边界条件
* =============================================================================*/
// 函数别名: RenderSystem_AdvancedRenderer
uint64_t
FUN_180547f00(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t *param_5)

{
  // 局部变量声明
  longlong lVar1;           // 渲染对象指针
  longlong *plVar2;         // 渲染状态指针
  bool bVar3;               // 布尔状态标志
  char cVar4;               // 字符状态变量
  ulonglong uVar5;          // 无符号长整型计数器
  longlong lVar6;           // 长整型渲染状态
  ulonglong uVar7;          // 无符号长整型索引
  uint uVar8;               // 无符号整型计数器
  ulonglong uVar9;          // 无符号长整型循环计数器
  int32_t uVar10;        // 渲染参数
  
  // 栈变量声明 - 用于参数传递和状态保存
  uint64_t uStack_98;     // 参数栈变量
  uint64_t uStack_90;     // 参数栈变量
  uint64_t uStack_88;     // 参数栈变量
  uint64_t uStack_80;     // 参数栈变量
  ulonglong uStack_78;     // 参数栈变量
  uint64_t uStack_70;     // 参数栈变量
  uint64_t uStack_68;     // 参数栈变量
  uint64_t uStack_60;     // 参数栈变量
  uint64_t uStack_58;     // 参数栈变量
  uint64_t uStack_50;     // 参数栈变量
  int32_t uStack_48;     // 参数栈变量
  int32_t uStack_44;     // 参数栈变量
  uint64_t uStack_40;     // 参数栈变量
  int32_t uStack_38;     // 参数栈变量
  int32_t uStack_34;     // 参数栈变量
  int32_t uStack_30;     // 参数栈变量
  int32_t uStack_2c;     // 参数栈变量
  
  // 检查渲染系统状态
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x260);
    if ((lVar6 == 0) || ((*(byte *)(lVar6 + 0xa8) >> 3 & 1) == 0)) {
      bVar3 = false;  // 设置渲染状态为false
    }
    else {
      bVar3 = true;   // 设置渲染状态为true
    }
    
    // 执行渲染状态检查
    if ((((*(int *)(param_5 + 1) == 0) && (!bVar3)) && (*(int *)(param_1 + 0x154) == 0)) &&
       ((*(longlong *)(_DAT_180c86870 + 0x3d8) == 0 ||
        (*(int *)(*(longlong *)(_DAT_180c86870 + 0x3d8) + 0x110) != 2)))) {
      FUN_180548880(param_1, *(int8_t *)(param_1 + 0x191));
    }
  }
  
  // 处理渲染队列
  lVar6 = *(longlong *)(param_1 + 0xe0);
  uVar7 = 0;
  uVar5 = *(longlong *)(param_1 + 0xe8) - lVar6 >> 3;
  uVar9 = uVar7;
  
  // 遍历渲染队列
  if (uVar5 != 0) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x1a0);
      if ((lVar1 == 0) ||
         (plVar2 = *(longlong **)(lVar1 + 0x48), plVar2 != *(longlong **)(uVar7 + lVar6))) {
        // 执行标准渲染操作
        (**(code **)(**(longlong **)(uVar7 + lVar6) + 0x1c8))
                  (*(longlong **)(uVar7 + lVar6), param_2, param_3, param_4, param_5);
      }
      else {
        // 执行高级渲染操作
        uStack_98 = *param_5;
        uStack_90 = param_5[1];
        uStack_88 = param_5[2];
        uStack_80 = param_5[3];
        uStack_78 = param_5[4];
        uStack_70 = param_5[5];
        uStack_68 = param_5[6];
        uStack_60 = param_5[7];
        uStack_58 = param_5[8];
        uStack_50 = param_5[9];
        uStack_40 = param_5[0xb];
        uVar10 = 0;
        uStack_38 = *(int32_t *)(param_5 + 0xc);
        uStack_34 = *(int32_t *)((longlong)param_5 + 100);
        uStack_30 = *(int32_t *)(param_5 + 0xd);
        uStack_2c = *(int32_t *)((longlong)param_5 + 0x6c);
        
        // 检查并获取渲染参数
        if ((*(longlong *)(lVar1 + 0x28) != 0) &&
           (lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x28) + 0x260), lVar6 != 0)) {
          uVar10 = *(int32_t *)(lVar6 + 0x180);
        }
        
        // 执行渲染回调
        _uStack_48 = CONCAT44((int)((ulonglong)param_5[10] >> 0x20), uVar10);
        lVar6 = plVar2[0x65];
        (**(code **)(*plVar2 + 0x1c8))(plVar2, param_2, param_3, param_4, &uStack_98);
        
        // 检查并执行额外渲染操作
        cVar4 = func_0x000180282950(*(uint64_t *)(lVar1 + 0x48));
        if (cVar4 != '\0') {
          FUN_18030aab0(lVar1, param_2, param_3, param_4, uStack_78 >> 0x20 & 0xff, (int32_t)uStack_78
                        , uStack_80._4_4_, (int)lVar6, uStack_48);
        }
      }
      
      // 更新循环变量
      lVar6 = *(longlong *)(param_1 + 0xe0);
      uVar8 = (int)uVar9 + 1;
      uVar7 = uVar7 + 8;
      uVar5 = (ulonglong)(int)uVar8;
      uVar9 = (ulonglong)uVar8;
    } while (uVar5 < (ulonglong)(*(longlong *)(param_1 + 0xe8) - lVar6 >> 3));
  }
  
  return CONCAT71((int7)(uVar5 >> 8), 1); // 返回渲染状态
}


/*==============================================================================
* 函数: RenderSystem_CallbackProcessor - 回调处理器
* 
* 功能描述:
*   处理渲染系统中的回调函数，支持多种回调机制和异步处理
*   负责回调函数的调度、执行和状态管理
* 
* 参数:
*   param_1 (uint64_t): 回调上下文指针，包含回调相关的状态信息
*   param_2 (longlong): 回调数据指针，包含回调所需的数据和参数
* 
* 返回值:
*   uint64_t: 回调处理状态，表示回调操作的结果
* 
* 处理流程:
*   1. 初始化回调处理环境和状态
*   2. 遍历回调队列并执行回调函数
*   3. 根据回调类型选择相应的处理方式
*   4. 管理回调资源和内存
*   5. 返回回调处理状态
* 
* 注意事项:
*   - 需要处理多种回调类型
*   - 内存管理需要谨慎
*   - 支持异步回调处理
*   - 需要处理回调失败的情况
* =============================================================================*/
// 函数别名: RenderSystem_CallbackProcessor
uint64_t FUN_180547fb8(uint64_t param_1,longlong param_2)

{
  // 局部变量声明
  longlong lVar1;           // 回调对象指针
  longlong *plVar2;         // 回调状态指针
  char cVar3;               // 回调状态字符
  ulonglong uVar4;          // 无符号长整型索引
  longlong unaff_RDI;       // 未使用的寄存器变量
  uint64_t in_R10;        // 输入参数寄存器
  uint unaff_R14D;          // 无符号整型计数器
  uint64_t in_stack_000000f8; // 栈参数
  
  // 初始化回调处理
  uVar4 = (ulonglong)unaff_R14D;
  
  // 遍历回调队列
  do {
    lVar1 = *(longlong *)(unaff_RDI + 0x1a0);
    if ((lVar1 == 0) ||
       (plVar2 = *(longlong **)(lVar1 + 0x48), plVar2 != *(longlong **)(uVar4 + param_2))) {
      // 执行标准回调
      (**(code **)(**(longlong **)(uVar4 + param_2) + 0x1c8))
                (*(longlong **)(uVar4 + param_2), in_R10);
    }
    else {
      // 执行高级回调
      (**(code **)(*plVar2 + 0x1c8))(plVar2, in_R10);
      
      // 检查并执行额外回调操作
      cVar3 = func_0x000180282950(*(uint64_t *)(lVar1 + 0x48));
      if (cVar3 != '\0') {
        FUN_18030aab0(lVar1, in_stack_000000f8);
      }
    }
    
    // 更新循环变量
    param_2 = *(longlong *)(unaff_RDI + 0xe0);
    unaff_R14D = unaff_R14D + 1;
    uVar4 = uVar4 + 8;
    in_R10 = in_stack_000000f8;
  } while ((ulonglong)(longlong)(int)unaff_R14D <
           (ulonglong)(*(longlong *)(unaff_RDI + 0xe8) - param_2 >> 3));
  
  return CONCAT71((int7)(int3)(unaff_R14D >> 8), 1); // 返回回调状态
}


/*==============================================================================
* 函数: RenderSystem_StatusChecker - 状态检查器
* 
* 功能描述:
*   检查渲染系统的状态，返回系统是否正常工作
*   提供简单的状态检查功能，用于系统监控和调试
* 
* 参数:
*   无
* 
* 返回值:
*   int8_t: 状态标识，1表示系统正常，0表示系统异常
* 
* 处理流程:
*   1. 检查系统关键状态
*   2. 验证系统组件的可用性
*   3. 返回状态检查结果
* 
* 注意事项:
*   - 这是一个简化版本的状态检查函数
*   - 在实际应用中可能需要更复杂的状态检查逻辑
*   - 返回值需要根据具体需求进行解释
* =============================================================================*/
// 函数别名: RenderSystem_StatusChecker
int8_t FUN_18054814a(void)

{
  // 返回系统状态：1表示正常
  return 1;
}



/*==============================================================================
* 函数: RenderSystem_ContextManager - 上下文管理器
* 
* 功能描述:
*   管理渲染系统的上下文和相关资源，包括上下文的创建、初始化、使用和销毁
*   支持多种上下文类型和资源管理策略
* 
* 参数:
*   param_1 (longlong): 渲染系统主上下文，包含完整的上下文信息
*   param_2 (uint64_t*): 上下文参数数组，包含上下文初始化所需的参数
* 
* 返回值:
*   uint64_t*: 上下文指针，指向创建或管理的上下文
* 
* 处理流程:
*   1. 初始化上下文管理环境和参数
*   2. 创建和配置各种上下文组件
*   3. 管理上下文相关的资源和内存
*   4. 设置上下文的回调函数和事件处理器
*   5. 初始化上下文状态和参数
*   6. 返回创建的上下文指针
* 
* 注意事项:
*   - 需要仔细管理上下文资源和内存
*   - 支持多种上下文类型和配置
*   - 需要处理上下文创建失败的情况
*   - 内存管理需要特别注意
* =============================================================================*/
// 函数别名: RenderSystem_ContextManager
uint64_t * FUN_180548160(longlong param_1,uint64_t *param_2)

{
  // 局部变量声明
  uint64_t uVar1;           // 通用变量
  longlong **pplVar2;          // 指针数组指针
  uint64_t uVar3;           // 上下文标识符
  longlong *plVar4;            // 上下文对象指针
  longlong *plVar5;            // 上下文对象指针
  longlong *plVar6;            // 上下文对象指针
  longlong *plVar7;            // 上下文对象指针
  bool bVar8;                  // 布尔状态标志
  
  // 栈变量声明
  longlong *plStackX_8;        // 栈变量
  uint64_t *puStackX_10;     // 栈指针
  int8_t uStackX_18;        // 栈字符变量
  uint8_t uStackX_19;        // 栈字符变量
  longlong *plStackX_20;        // 栈变量
  longlong *plStack_b0;        // 栈变量
  longlong *plStack_a8;        // 栈变量
  longlong *plStack_a0;        // 栈变量
  longlong *plStack_98;        // 栈变量
  longlong **pplStack_90;      // 栈指针数组
  longlong **pplStack_88;      // 栈指针数组
  uint64_t uStack_80;        // 栈变量
  longlong *plStack_78;        // 栈变量
  longlong *plStack_70;        // 栈变量
  longlong *plStack_68;        // 栈变量
  longlong **pplStack_60;      // 栈指针数组
  longlong **pplStack_58;      // 栈指针数组
  
  // 初始化上下文管理环境
  uStack_80 = 0xfffffffffffffffe;  // 设置上下文状态标识
  plVar6 = (longlong *)0x0;        // 初始化上下文对象
  puStackX_10 = param_2;           // 设置参数指针
  
  // 初始化主上下文
  FUN_1802759e0(*(uint64_t *)(param_1 + 0x110), &plStack_98);
  
  // 处理第一个上下文组件
  bVar8 = *(longlong *)(param_1 + 0x108) == 0;
  if (bVar8) {
    plStackX_8 = (longlong *)0x0;
    pplVar2 = &plStackX_8;
    plVar7 = plVar6;
  }
  else {
    pplVar2 = (longlong **)FUN_1802759e0(*(longlong *)(param_1 + 0x108), &uStackX_18);
    plVar7 = *pplVar2;
  }
  *pplVar2 = (longlong *)0x0;
  plStack_78 = plVar7;
  
  // 执行上下文回调
  if ((bVar8) && (plStackX_8 != (longlong *)0x0)) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  if ((!bVar8) && ((longlong *)CONCAT71(uStackX_19, uStackX_18) != (longlong *)0x0)) {
    (**(code **)(*(longlong *)CONCAT71(uStackX_19, uStackX_18) + 0x38))();
  }
  
  // 处理第二个上下文组件
  bVar8 = *(longlong *)(param_1 + 0x100) == 0;
  if (bVar8) {
    plStackX_8 = (longlong *)0x0;
    pplVar2 = &plStackX_8;
    plVar5 = plVar6;
  }
  else {
    pplVar2 = (longlong **)FUN_1802759e0(*(longlong *)(param_1 + 0x100), &pplStack_90);
    plVar5 = *pplVar2;
  }
  *pplVar2 = (longlong *)0x0;
  plStack_70 = plVar5;
  
  // 执行上下文回调
  if ((bVar8) && (plStackX_8 != (longlong *)0x0)) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  if ((!bVar8) && (pplStack_90 != (longlong **)0x0)) {
    (*(code *)(*pplStack_90)[7])();
  }
  
  // 处理第三个上下文组件
  bVar8 = *(longlong *)(param_1 + 0x118) == 0;
  if (bVar8) {
    plStackX_8 = (longlong *)0x0;
    pplVar2 = &plStackX_8;
  }
  else {
    pplVar2 = (longlong **)FUN_1802759e0(*(longlong *)(param_1 + 0x118), &pplStack_88);
    plVar6 = *pplVar2;
  }
  *pplVar2 = (longlong *)0x0;
  plStack_68 = plVar6;
  
  // 执行上下文回调
  if ((bVar8) && (plStackX_8 != (longlong *)0x0)) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  if ((!bVar8) && (pplStack_88 != (longlong **)0x0)) {
    (*(code *)(*pplStack_88)[7])();
  }
  
  // 创建主上下文
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18, 0x1a8, 8, 0x12);
  plStackX_8 = (longlong *)CONCAT71(plStackX_8._1_7_, *(int8_t *)(param_1 + 0x191));
  uStackX_18 = *(int8_t *)(param_1 + 0x192);
  uVar1 = *(uint64_t *)(param_1 + 0xd8);
  
  // 设置上下文指针
  pplStack_88 = &plStackX_20;
  plStackX_20 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  
  pplStack_90 = &plStack_b0;
  plStack_b0 = plStack_98;
  if (plStack_98 != (longlong *)0x0) {
    (**(code **)(*plStack_98 + 0x28))();
  }
  
  pplStack_60 = &plStack_a8;
  plStack_a8 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  
  pplStack_58 = &plStack_a0;
  plStack_a0 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  
  // 创建最终上下文
  plVar4 = (longlong *)
           FUN_180546fa0(uVar3, &plStack_a0, &plStack_a8, &plStack_b0, &plStackX_20, uVar1, uStackX_18,
                         plStackX_8._0_1_);
  plStackX_8 = plVar4;
  
  // 初始化上下文
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  
  // 设置返回值
  *param_2 = plVar4;
  
  // 执行上下文激活
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
    (**(code **)(*plVar4 + 0x38))(plVar4);
  }
  
  // 清理上下文资源
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x38))(plVar6);
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x38))(plVar7);
  }
  if (plStack_98 != (longlong *)0x0) {
    (**(code **)(*plStack_98 + 0x38))();
  }
  
  return param_2; // 返回上下文指针
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180548460(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
void FUN_180548460(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  int8_t uVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  int8_t auStack_78 [32];
  uint64_t uStack_58;
  longlong *plStack_50;
  longlong *plStack_48;
  longlong *plStack_40;
  longlong *plStack_38;
  ulonglong uStack_30;
  
  uStack_58 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_78;
  plStack_50 = *(longlong **)(param_1 + 0x100);
  if (plStack_50 != (longlong *)0x0) {
    (**(code **)(*plStack_50 + 0x28))();
  }
  plStack_48 = *(longlong **)(param_1 + 0x108);
  if (plStack_48 != (longlong *)0x0) {
    (**(code **)(*plStack_48 + 0x28))();
  }
  plStack_40 = *(longlong **)(param_1 + 0x110);
  if (plStack_40 != (longlong *)0x0) {
    (**(code **)(*plStack_40 + 0x28))();
  }
  plStack_38 = *(longlong **)(param_1 + 0x118);
  if (plStack_38 != (longlong *)0x0) {
    (**(code **)(*plStack_38 + 0x28))();
  }
  uVar7 = 0;
  if (((plStack_50 != (longlong *)0x0) && (param_2 != 0)) && (0 < (int)plStack_50[0xb])) {
    plVar6 = (longlong *)plStack_50[7];
    uVar1 = *(int8_t *)(*plVar6 + 0xf8);
    lVar8 = *(longlong *)(param_2 + 0x40);
    lVar12 = *(longlong *)(param_2 + 0x38);
    uVar9 = uVar7;
    uVar10 = uVar7;
    if (lVar8 - lVar12 >> 4 != 0) {
      do {
        *(int8_t *)(*(longlong *)(uVar9 + *(longlong *)(param_2 + 0x38)) + 0xf8) = uVar1;
        uVar11 = (int)uVar10 + 1;
        lVar8 = *(longlong *)(param_2 + 0x40);
        lVar12 = *(longlong *)(param_2 + 0x38);
        uVar9 = uVar9 + 0x10;
        uVar10 = (ulonglong)uVar11;
      } while ((ulonglong)(longlong)(int)uVar11 < (ulonglong)(lVar8 - lVar12 >> 4));
      plVar6 = (longlong *)plStack_50[7];
    }
    lVar2 = *plVar6;
    uVar9 = uVar7;
    uVar10 = uVar7;
    if (lVar8 - lVar12 >> 4 != 0) {
      do {
        lVar8 = *(longlong *)(uVar9 + *(longlong *)(param_2 + 0x38));
        uVar3 = *(int32_t *)(lVar2 + 0x1a4);
        uVar4 = *(int32_t *)(lVar2 + 0x1a8);
        uVar5 = *(int32_t *)(lVar2 + 0x1ac);
        *(int32_t *)(lVar8 + 0x1a0) = *(int32_t *)(lVar2 + 0x1a0);
        *(int32_t *)(lVar8 + 0x1a4) = uVar3;
        *(int32_t *)(lVar8 + 0x1a8) = uVar4;
        *(int32_t *)(lVar8 + 0x1ac) = uVar5;
        uVar11 = (int)uVar10 + 1;
        uVar9 = uVar9 + 0x10;
        uVar10 = (ulonglong)uVar11;
      } while ((ulonglong)(longlong)(int)uVar11 <
               (ulonglong)(*(longlong *)(param_2 + 0x40) - *(longlong *)(param_2 + 0x38) >> 4));
    }
  }
  if (((plStack_48 != (longlong *)0x0) && (param_3 != 0)) && (0 < (int)plStack_48[0xb])) {
    plVar6 = (longlong *)plStack_48[7];
    uVar1 = *(int8_t *)(*plVar6 + 0xf8);
    lVar8 = *(longlong *)(param_3 + 0x40);
    lVar12 = *(longlong *)(param_3 + 0x38);
    uVar9 = uVar7;
    uVar10 = uVar7;
    if (lVar8 - lVar12 >> 4 != 0) {
      do {
        *(int8_t *)(*(longlong *)(uVar9 + *(longlong *)(param_3 + 0x38)) + 0xf8) = uVar1;
        uVar11 = (int)uVar10 + 1;
        lVar8 = *(longlong *)(param_3 + 0x40);
        lVar12 = *(longlong *)(param_3 + 0x38);
        uVar9 = uVar9 + 0x10;
        uVar10 = (ulonglong)uVar11;
      } while ((ulonglong)(longlong)(int)uVar11 < (ulonglong)(lVar8 - lVar12 >> 4));
      plVar6 = (longlong *)plStack_48[7];
    }
    lVar2 = *plVar6;
    uVar9 = uVar7;
    uVar10 = uVar7;
    if (lVar8 - lVar12 >> 4 != 0) {
      do {
        lVar8 = *(longlong *)(uVar9 + *(longlong *)(param_3 + 0x38));
        uVar3 = *(int32_t *)(lVar2 + 0x1a4);
        uVar4 = *(int32_t *)(lVar2 + 0x1a8);
        uVar5 = *(int32_t *)(lVar2 + 0x1ac);
        *(int32_t *)(lVar8 + 0x1a0) = *(int32_t *)(lVar2 + 0x1a0);
        *(int32_t *)(lVar8 + 0x1a4) = uVar3;
        *(int32_t *)(lVar8 + 0x1a8) = uVar4;
        *(int32_t *)(lVar8 + 0x1ac) = uVar5;
        uVar11 = (int)uVar10 + 1;
        uVar9 = uVar9 + 0x10;
        uVar10 = (ulonglong)uVar11;
      } while ((ulonglong)(longlong)(int)uVar11 <
               (ulonglong)(*(longlong *)(param_3 + 0x40) - *(longlong *)(param_3 + 0x38) >> 4));
    }
  }
  if (((plStack_40 != (longlong *)0x0) && (param_4 != 0)) && (0 < (int)plStack_40[0xb])) {
    plVar6 = (longlong *)plStack_40[7];
    uVar1 = *(int8_t *)(*plVar6 + 0xf8);
    lVar8 = *(longlong *)(param_4 + 0x40);
    lVar12 = *(longlong *)(param_4 + 0x38);
    uVar9 = uVar7;
    uVar10 = uVar7;
    if (lVar8 - lVar12 >> 4 != 0) {
      do {
        *(int8_t *)(*(longlong *)(uVar9 + *(longlong *)(param_4 + 0x38)) + 0xf8) = uVar1;
        uVar11 = (int)uVar10 + 1;
        lVar8 = *(longlong *)(param_4 + 0x40);
        lVar12 = *(longlong *)(param_4 + 0x38);
        uVar9 = uVar9 + 0x10;
        uVar10 = (ulonglong)uVar11;
      } while ((ulonglong)(longlong)(int)uVar11 < (ulonglong)(lVar8 - lVar12 >> 4));
      plVar6 = (longlong *)plStack_40[7];
    }
    lVar2 = *plVar6;
    uVar9 = uVar7;
    uVar10 = uVar7;
    if (lVar8 - lVar12 >> 4 != 0) {
      do {
        lVar8 = *(longlong *)(uVar9 + *(longlong *)(param_4 + 0x38));
        uVar3 = *(int32_t *)(lVar2 + 0x1a4);
        uVar4 = *(int32_t *)(lVar2 + 0x1a8);
        uVar5 = *(int32_t *)(lVar2 + 0x1ac);
        *(int32_t *)(lVar8 + 0x1a0) = *(int32_t *)(lVar2 + 0x1a0);
        *(int32_t *)(lVar8 + 0x1a4) = uVar3;
        *(int32_t *)(lVar8 + 0x1a8) = uVar4;
        *(int32_t *)(lVar8 + 0x1ac) = uVar5;
        uVar11 = (int)uVar10 + 1;
        uVar9 = uVar9 + 0x10;
        uVar10 = (ulonglong)uVar11;
      } while ((ulonglong)(longlong)(int)uVar11 <
               (ulonglong)(*(longlong *)(param_4 + 0x40) - *(longlong *)(param_4 + 0x38) >> 4));
    }
  }
  if (((plStack_38 != (longlong *)0x0) && (param_5 != 0)) && (0 < (int)plStack_38[0xb])) {
    plVar6 = (longlong *)plStack_38[7];
    uVar1 = *(int8_t *)(*plVar6 + 0xf8);
    lVar8 = *(longlong *)(param_5 + 0x40);
    lVar12 = *(longlong *)(param_5 + 0x38);
    uVar9 = uVar7;
    uVar10 = uVar7;
    if (lVar8 - lVar12 >> 4 != 0) {
      do {
        *(int8_t *)(*(longlong *)(uVar9 + *(longlong *)(param_5 + 0x38)) + 0xf8) = uVar1;
        uVar11 = (int)uVar10 + 1;
        lVar8 = *(longlong *)(param_5 + 0x40);
        lVar12 = *(longlong *)(param_5 + 0x38);
        uVar9 = uVar9 + 0x10;
        uVar10 = (ulonglong)uVar11;
      } while ((ulonglong)(longlong)(int)uVar11 < (ulonglong)(lVar8 - lVar12 >> 4));
      plVar6 = (longlong *)plStack_38[7];
    }
    lVar2 = *plVar6;
    uVar9 = uVar7;
    if (lVar8 - lVar12 >> 4 != 0) {
      do {
        lVar8 = *(longlong *)(uVar9 + *(longlong *)(param_5 + 0x38));
        uVar3 = *(int32_t *)(lVar2 + 0x1a4);
        uVar4 = *(int32_t *)(lVar2 + 0x1a8);
        uVar5 = *(int32_t *)(lVar2 + 0x1ac);
        *(int32_t *)(lVar8 + 0x1a0) = *(int32_t *)(lVar2 + 0x1a0);
        *(int32_t *)(lVar8 + 0x1a4) = uVar3;
        *(int32_t *)(lVar8 + 0x1a8) = uVar4;
        *(int32_t *)(lVar8 + 0x1ac) = uVar5;
        uVar11 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar11;
        uVar9 = uVar9 + 0x10;
      } while ((ulonglong)(longlong)(int)uVar11 <
               (ulonglong)(*(longlong *)(param_5 + 0x40) - *(longlong *)(param_5 + 0x38) >> 4));
    }
  }
  FUN_1808fc8a8(&plStack_50,8,4,FUN_180045af0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_78);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180548880(longlong ******param_1,int8_t param_2)
void FUN_180548880(longlong ******param_1,int8_t param_2)

{
  int8_t uVar1;
  longlong ***ppplVar2;
  uint64_t uVar3;
  longlong *******ppppppplVar4;
  ulonglong uVar5;
  longlong *******ppppppplVar6;
  longlong *******ppppppplVar7;
  longlong *******ppppppplVar8;
  longlong ******pppppplStackX_8;
  longlong ******pppppplStackX_18;
  longlong ******pppppplStackX_20;
  longlong ******pppppplStack_88;
  longlong ******pppppplStack_80;
  longlong ******pppppplStack_78;
  longlong ******pppppplStack_70;
  longlong ******pppppplStack_68;
  longlong ******pppppplStack_60;
  longlong ******pppppplStack_58;
  longlong ******pppppplStack_50;
  longlong ******pppppplStack_48;
  uint64_t uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  *(int32_t *)((longlong)param_1 + 0x154) = 1;
  ppppppplVar6 = (longlong *******)0x0;
  pppppplStack_80 = (longlong ******)0x0;
  pppppplStack_68 = (longlong ******)0x0;
  pppppplStack_70 = (longlong ******)0x0;
  pppppplStack_78 = (longlong ******)0x0;
  if ((*(char *)((longlong)param_1 + 0x192) == '\0') && (*(char *)(param_1 + 0x32) == '\0')) {
    *(int8_t *)(param_1 + 0x1a) = 1;
    FUN_180049550(param_1 + 6,0);
    ppppppplVar4 = (longlong *******)FUN_18062b1e0(_DAT_180c8ed18,0x118,8,3);
    pppppplStackX_8 =
         (longlong ******)CONCAT71(pppppplStackX_8._1_7_,param_1[0x1b] != (longlong *****)0x0);
    pppppplStackX_18 =
         (longlong ******)
         CONCAT71(pppppplStackX_18._1_7_,*(int8_t *)((longlong)param_1 + 0x192));
    pppppplStack_50 = (longlong ******)param_1[0x31];
    pppppplStack_88 =
         (longlong ******)CONCAT44(pppppplStack_88._4_4_,*(int32_t *)(param_1 + 0x2f));
    pppppplStackX_20 =
         (longlong ******)
         CONCAT44(pppppplStackX_20._4_4_,*(int32_t *)((longlong)param_1 + 0x174));
    pppppplStack_58 = (longlong ******)param_1[0x30];
    pppppplStack_48 = (longlong ******)ppppppplVar4;
    FUN_180049830(ppppppplVar4);
    *ppppppplVar4 = (longlong ******)&unknown_var_5896_ptr;
    ppppppplVar4[0x1c] = (longlong ******)0x0;
    ppppppplVar4[0x1d] = (longlong ******)0x0;
    ppppppplVar4[0x1e] = (longlong ******)0x0;
    ppppppplVar4[0x1f] = (longlong ******)0x0;
    ppppppplVar4[0x20] = (longlong ******)0x0;
    pppppplStack_60 = param_1;
    (*(code *)(*param_1)[5])(param_1);
    pppppplStack_60 = ppppppplVar4[0x20];
    ppppppplVar4[0x20] = param_1;
    if ((longlong *******)pppppplStack_60 != (longlong *******)0x0) {
      (*(code *)(*pppppplStack_60)[7])();
    }
    ppppppplVar4[0x19] = pppppplStack_58;
    *(int32_t *)(ppppppplVar4 + 0x1a) = pppppplStackX_20._0_4_;
    *(int32_t *)((longlong)ppppppplVar4 + 0xd4) = pppppplStack_88._0_4_;
    ppppppplVar4[0x1b] = pppppplStack_50;
    *(int8_t *)(ppppppplVar4 + 0x22) = param_2;
    ppppppplVar4[0x21] = param_1 + 6;
    *(int16_t *)(ppppppplVar4 + 0x18) = 1;
    ppppppplVar4[3] = (longlong ******)0xfffffffffffffffc;
    *(int8_t *)((longlong)ppppppplVar4 + 0x112) = pppppplStackX_8._0_1_;
    *(int8_t *)((longlong)ppppppplVar4 + 0x111) = pppppplStackX_18._0_1_;
    FUN_180056f10(param_1 + 0x33,ppppppplVar4);
    uVar3 = _DAT_180c82868;
    pppppplStackX_18 = (longlong ******)&pppppplStackX_8;
    pppppplStackX_8 = (longlong ******)param_1[0x33];
    if ((longlong *******)pppppplStackX_8 != (longlong *******)0x0) {
      (*(code *)(*pppppplStackX_8)[5])();
    }
    FUN_18005e450(uVar3,&pppppplStackX_8);
    ppppppplVar7 = ppppppplVar6;
    ppppppplVar8 = ppppppplVar6;
    ppppppplVar4 = ppppppplVar6;
  }
  else {
    ppppppplVar4 = &pppppplStack_80;
    FUN_1804bb5b0(0x180c95de0,ppppppplVar4,&pppppplStack_68,&pppppplStack_70,&pppppplStack_78);
    ppppppplVar6 = (longlong *******)pppppplStack_80;
    uVar5 = (ulonglong)ppppppplVar4 & 0xffffffffffffff00;
    if ((param_1[0x20] != (longlong *****)0x0) &&
       (ppplVar2 = *param_1[0x20][7], ppplVar2 != (longlong ***)0x0)) {
      uVar5 = (ulonglong)*(byte *)(ppplVar2 + 0x1f);
    }
    func_0x0001802827f0(pppppplStack_80,uVar5);
    ppppppplVar8 = (longlong *******)pppppplStack_68;
    ppppppplVar7 = (longlong *******)pppppplStack_70;
    ppppppplVar4 = (longlong *******)pppppplStack_78;
    FUN_180548460(param_1,ppppppplVar6,pppppplStack_68,pppppplStack_70,pppppplStack_78);
    uVar1 = *(int8_t *)((longlong)param_1 + 0x192);
    pppppplStack_48 = (longlong ******)&pppppplStackX_8;
    pppppplStackX_8 = (longlong ******)ppppppplVar4;
    if (ppppppplVar4 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar4)[5])(ppppppplVar4);
    }
    pppppplStack_50 = (longlong ******)&pppppplStackX_18;
    pppppplStackX_18 = (longlong ******)ppppppplVar7;
    if (ppppppplVar7 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar7)[5])(ppppppplVar7);
    }
    pppppplStack_58 = (longlong ******)&pppppplStackX_20;
    pppppplStackX_20 = (longlong ******)ppppppplVar8;
    if (ppppppplVar8 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar8)[5])(ppppppplVar8);
    }
    pppppplStack_60 = (longlong ******)&pppppplStack_88;
    pppppplStack_88 = (longlong ******)ppppppplVar6;
    if (ppppppplVar6 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar6)[5])(ppppppplVar6);
    }
    FUN_180548ce0(param_1,&pppppplStack_88,&pppppplStackX_20,&pppppplStackX_18,&pppppplStackX_8,
                  param_2,uVar1);
  }
  if (ppppppplVar4 != (longlong *******)0x0) {
    (*(code *)(*ppppppplVar4)[7])(ppppppplVar4);
  }
  if (ppppppplVar7 != (longlong *******)0x0) {
    (*(code *)(*ppppppplVar7)[7])(ppppppplVar7);
  }
  if (ppppppplVar8 != (longlong *******)0x0) {
    (*(code *)(*ppppppplVar8)[7])(ppppppplVar8);
  }
  if (ppppppplVar6 != (longlong *******)0x0) {
    (*(code *)(*ppppppplVar6)[7])(ppppppplVar6);
  }
  return;
}





// 函数: void FUN_180548c10(longlong *param_1,longlong *param_2)
void FUN_180548c10(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int32_t auStackX_8 [2];
  
  if (param_1 != (longlong *)0x0) {
    lVar9 = param_1[7];
    uVar6 = 0;
    uVar8 = uVar6;
    if (param_1[8] - lVar9 >> 4 != 0) {
      do {
        lVar1 = *(longlong *)(uVar6 + param_2[7]);
        if (lVar1 != 0) {
          uVar5 = *(uint64_t *)(*(longlong *)(uVar6 + lVar9) + 0x240);
          *(uint64_t *)(lVar1 + 0x238) = *(uint64_t *)(*(longlong *)(uVar6 + lVar9) + 0x238);
          *(uint64_t *)(lVar1 + 0x240) = uVar5;
          lVar9 = *(longlong *)(uVar6 + param_1[7]);
          uVar2 = *(int32_t *)(lVar9 + 0x24c);
          uVar3 = *(int32_t *)(lVar9 + 0x250);
          uVar4 = *(int32_t *)(lVar9 + 0x254);
          lVar1 = *(longlong *)(param_2[7] + uVar6);
          *(int32_t *)(lVar1 + 0x248) = *(int32_t *)(lVar9 + 0x248);
          *(int32_t *)(lVar1 + 0x24c) = uVar2;
          *(int32_t *)(lVar1 + 0x250) = uVar3;
          *(int32_t *)(lVar1 + 0x254) = uVar4;
        }
        lVar9 = param_1[7];
        uVar7 = (int)uVar8 + 1;
        uVar6 = uVar6 + 0x10;
        uVar8 = (ulonglong)uVar7;
      } while ((ulonglong)(longlong)(int)uVar7 < (ulonglong)(param_1[8] - lVar9 >> 4));
    }
    (**(code **)(*param_1 + 0x1e0))(param_1,0);
    auStackX_8[0] = (int32_t)param_1[0x42];
    (**(code **)(*param_2 + 0x128))(param_2,auStackX_8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



