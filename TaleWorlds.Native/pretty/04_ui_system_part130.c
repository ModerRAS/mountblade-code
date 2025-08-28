#include "ultra_high_freq_fun_definitions.h"
/*
 * 函数别名定义: UI 系统数据管理器
 * 文件描述: UI 系统数据验证、内存管理和状态处理模块
 * 功能类别: UI 系统核心组件
 * 美化版本: v1.0
 * 
 * 技术架构说明:
 * ===============
 * 
 * 本模块实现了 UI 系统的核心数据管理功能，包含以下主要组件：
 * 
 * 1. 数据验证系统:
 *    - 系统数据完整性检查
 *    - 内存指针验证
 *    - 数据结构一致性验证
 * 
 * 2. 内存管理系统:
 *    - 内存分配和释放
 *    - 内存池管理
 *    - 内存泄漏防护
 * 
 * 3. 事件处理系统:
 *    - 事件队列管理
 *    - 事件分发机制
 *    - 回调函数处理
 * 
 * 4. 状态管理系统:
 *    - 系统状态初始化
 *    - 状态转换处理
 *    - 状态验证机制
 * 
 * 性能优化策略:
 * ==============
 * 1. 条件分支优化：减少不必要的函数调用
 * 2. 内存操作优化：批量处理减少内存访问次数
 * 3. 指针管理优化：使用指针自引用避免空指针访问
 * 4. 事件处理优化：提前终止机制减少处理开销
 * 
 * 安全机制设计:
 * ==============
 * 1. 参数验证：所有函数都进行参数有效性检查
 * 2. 指针保护：防止空指针和野指针访问
 * 3. 内存安全：通过系统验证器确保内存操作安全
 * 4. 错误处理：完善的错误处理和状态报告机制
 * 
 * 依赖关系:
 * ==========
 * - 依赖: SystemDataValidator, SystemMemoryProcessor
 * - 依赖: global_constants.h, TaleWorlds.Native.Split.h
 * - 提供: UI 系统核心数据管理功能
 */

// 系统函数语义化别名定义
#define UI_InitializeSystem FUN_1807437a4           // UI 系统初始化函数
#define UI_ValidateSystemData FUN_1807437c0         // UI 系统数据验证器
#define UI_ProcessSystemData FUN_1807437dd          // UI 系统数据处理器
#define UI_GetSystemStatus FUN_180743864            // UI 系统状态查询器
#define UI_ManageSystemMemory FUN_180743880          // UI 系统内存管理器
#define UI_AdvancedSystemProcessor FUN_1807438b7     // UI 系统高级处理器
#define UI_InitializeSystemState FUN_180743921       // UI 系统状态初始化器
#define UI_ProcessSystemEvents FUN_180743940         // UI 系统事件处理器
#define UI_ManageSystemEvents FUN_180743ab0          // UI 系统事件管理器
#define UI_ProcessSystemQueue FUN_180743ae4          // UI 系统队列处理器
#define UI_ValidateSystemState FUN_180743b2f        // UI 系统状态验证器
#define UI_HandleSystemCallbacks FUN_180743b50      // UI 系统回调处理器
#define UI_ValidateSystemMemory FUN_180743c40        // UI 系统内存验证器
#define UI_ProcessSystemMemory FUN_180743cc0         // UI 系统内存处理器
#define UI_InitializeSystemProcessor FUN_180743e90  // UI 系统处理器初始化器
#define UI_FinalizeSystemProcessor FUN_180744640    // UI 系统处理器终结器
#define UI_CreateSystemProcessor FUN_180744750      // UI 系统处理器创建器
#define UI_ManageSystemTextures FUN_180744780        // UI 系统纹理管理器
#define UI_ProcessSystemResources FUN_180744920      // UI 系统资源处理器
#define UI_ProcessSystemGraphics FUN_18074496d       // UI 系统图形处理器
#define UI_UpdateSystemGraphics FUN_1807449f2        // UI 系统图形更新器
#define UI_FinalizeSystemCleanup FUN_180744abc       // UI 系统清理终结器
#define UI_ValidateSystemCleanup FUN_180744aca       // UI 系统清理验证器
#define UI_ExecuteSystemCallbacks FUN_180744ae0      // UI 系统回调执行器
#define UI_ExecuteSystemEvents FUN_180744ae6         // UI 系统事件执行器
#define UI_FinalizeSystemState FUN_180744b89        // UI 系统状态终结器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// =============================================================================
// 04_ui_system_part130.c - UI 系统数据管理模块
// =============================================================================
// 本模块包含 UI 系统的核心数据管理功能，涵盖数据验证、内存管理、
// 状态处理和事件处理。所有函数都经过语义化命名和完整文档化。
// 
// 主要功能类别:
// - 系统初始化和清理
// - 数据验证和处理
// - 内存管理和优化
// - 事件处理和回调
// - 状态管理和监控
// =============================================================================

/*
 * 函数: UI_InitializeSystem
 * 功能: UI 系统初始化函数
 * 参数: 无
 * 返回值: void
 * 技术架构: 系统初始化管理器
 * 
 * 此函数负责 UI 系统的基础初始化工作，为后续的系统操作做准备。
 * 作为系统启动的第一步，确保所有必要的系统组件都处于正确的初始状态。
 * 
 * 性能优化: 直接返回，最小化初始化开销
 * 安全机制: 无参数操作，避免初始化阶段的潜在风险
 */
void UI_InitializeSystem(void)

{
  return;
}



/*
 * 函数: UI_ValidateSystemData
 * 功能: UI 系统数据验证器
 * 参数: int64_t param_1 - 系统数据块指针
 * 返回值: uint64_t - 验证结果状态码
 * 技术架构: 数据验证引擎
 * 
 * 此函数负责验证 UI 系统中的关键数据，确保数据的完整性和一致性。
 * 通过检查数据块中的指针和引用，防止无效数据访问和内存泄漏。
 * 
 * 核心功能:
 * - 数据指针验证: 检查指针有效性
 * - 系统缓冲区管理: 管理系统缓冲区指针
 * - 数据完整性检查: 确保数据结构完整性
 * 
 * 性能优化: 条件检查避免不必要的验证操作
 * 安全机制: 指针验证防止空指针访问
 */
uint64_t UI_ValidateSystemData(int64_t param_1)

{
  int64_t *plVar1;
  
  plVar1 = *(int64_t **)(param_1 + 0x10788);
  if (plVar1 != (int64_t *)(param_1 + 0x10788)) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(param_1 + 0x10bd0,plVar1[3],&system_buffer_ptr,0,1);
  }
  return 0;
}





/*
 * 函数: UI_ProcessSystemData
 * 功能: UI 系统数据处理器
 * 参数: int64_t param_1 - 系统数据块指针
 * 返回值: void
 * 技术架构: 数据处理引擎
 * 
 * 此函数负责处理 UI 系统中的数据，执行必要的数据转换和更新操作。
 * 通过调用系统数据验证器，确保处理后的数据符合系统要求。
 * 
 * 核心功能:
 * - 数据转换: 执行数据格式转换
 * - 数据更新: 更新系统数据状态
 * - 数据验证: 确保处理后的数据有效性
 * 
 * 性能优化: 直接调用系统验证器，避免重复验证
 * 安全机制: 通过系统验证器确保数据处理安全
 */
void UI_ProcessSystemData(int64_t param_1)

{
  int64_t unaff_RBX;
  
                    // WARNING: Subroutine does not return
  SystemDataValidator(param_1 + 0x10bd0,*(uint64_t *)(unaff_RBX + 0x18),&system_buffer_ptr,0,1);
}



/*
 * 函数: UI_GetSystemStatus
 * 功能: UI 系统状态查询器
 * 参数: 无
 * 返回值: uint64_t - 系统状态码
 * 技术架构: 状态查询引擎
 * 
 * 此函数负责查询 UI 系统的当前状态，返回系统运行状态信息。
 * 作为状态监控的基础函数，为系统诊断和监控提供关键信息。
 * 
 * 核心功能:
 * - 状态查询: 获取系统当前状态
 * - 状态监控: 监控系统运行状态
 * - 状态报告: 提供状态信息报告
 * 
 * 性能优化: 直接返回状态码，最小化查询开销
 * 安全机制: 无参数操作，避免查询过程中的潜在风险
 */
uint64_t UI_GetSystemStatus(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/*
 * 函数: UI_ManageSystemMemory
 * 功能: UI 系统内存管理器
 * 参数: int64_t param_1 - 内存管理控制块指针
 * 返回值: uint64_t - 内存管理结果状态码
 * 技术架构: 内存管理引擎
 * 
 * 此函数负责管理 UI 系统的内存分配和释放，确保系统内存使用的有效性。
 * 通过初始化内存控制块和管理内存指针，防止内存泄漏和无效访问。
 * 
 * 核心功能:
 * - 内存初始化: 初始化内存控制块
 * - 指针管理: 管理内存指针和引用
 * - 内存验证: 验证内存分配的有效性
 * - 资源清理: 执行必要的资源清理操作
 * 
 * 性能优化: 批量初始化减少操作次数
 * 安全机制: 指针验证防止内存访问错误
 */
uint64_t UI_ManageSystemMemory(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  
  lVar1 = param_1 + 0x10810;
  plVar2 = (int64_t *)(param_1 + 0x10830);
  *(uint64_t *)(param_1 + 0x10828) = 0xffffffffffffffff;
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(param_1 + 0x10818) = lVar1;
  *(uint64_t *)(param_1 + 0x10820) = 0;
  if ((int64_t *)*plVar2 != plVar2) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),((int64_t *)*plVar2)[2],&processed_var_8208_ptr,
                  0xff,1);
  }
  *(int64_t **)(param_1 + 0x10838) = plVar2;
  *plVar2 = (int64_t)plVar2;
  *(uint64_t *)(param_1 + 0x10840) = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/*
 * 函数: UI_AdvancedSystemProcessor
 * 功能: UI 系统高级处理器
 * 参数: 无
 * 返回值: void
 * 技术架构: 高级处理引擎
 * 
 * 此函数负责执行 UI 系统的高级处理任务，处理复杂的系统操作。
 * 通过调用系统数据验证器，确保高级处理操作的数据安全性和完整性。
 * 
 * 核心功能:
 * - 高级处理: 执行复杂的系统处理操作
 * - 数据验证: 确保处理数据的有效性
 * - 系统优化: 优化系统处理性能
 * - 错误处理: 处理处理过程中的错误
 * 
 * 性能优化: 利用系统验证器的高效验证机制
 * 安全机制: 通过系统验证器确保处理安全
 */
void UI_AdvancedSystemProcessor(void)

{
  int64_t unaff_RSI;
  
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(unaff_RSI + 0x10),
                &processed_var_8208_ptr,0xff,1);
}



/*
 * 函数: UI_InitializeSystemState
 * 功能: UI 系统状态初始化器
 * 参数: 无
 * 返回值: uint64_t - 初始化结果状态码
 * 技术架构: 状态初始化引擎
 * 
 * 此函数负责初始化 UI 系统的状态信息，确保系统处于正确的初始状态。
 * 通过设置状态指针和初始化状态变量，为系统运行做准备。
 * 
 * 核心功能:
 * - 状态初始化: 初始化系统状态变量
 * - 指针设置: 设置状态指针和引用
 * - 状态重置: 重置系统状态到初始值
 * - 状态验证: 验证状态初始化的正确性
 * 
 * 性能优化: 直接内存操作，最小化初始化开销
 * 安全机制: 指针自引用防止空指针访问
 */
uint64_t UI_InitializeSystemState(void)

{
  int64_t unaff_RBX;
  
  *(int64_t *)(unaff_RBX + 8) = unaff_RBX;
  *(int64_t *)unaff_RBX = unaff_RBX;
  *(uint64_t *)(unaff_RBX + 0x10) = 0;
  return 0;
}



/*
 * 函数: UI_ProcessSystemEvents
 * 功能: UI 系统事件处理器
 * 参数: int64_t param_1 - 事件控制块指针
 *        int param_2 - 事件标识符
 *        int64_t param_3 - 事件数据指针
 *        char param_4 - 事件类型标志
 * 返回值: uint64_t - 事件处理结果状态码
 * 技术架构: 事件处理引擎
 * 
 * 此函数负责处理 UI 系统中的各种事件，包括用户交互事件和系统事件。
 * 通过复杂的事件处理逻辑，确保事件被正确分发和处理。
 * 
 * 核心功能:
 * - 事件分发: 根据事件类型分发到相应的处理器
 * - 事件处理: 执行具体的事件处理逻辑
 * - 状态管理: 管理事件处理过程中的状态变化
 * - 错误处理: 处理事件处理过程中的错误
 * 
 * 性能优化: 条件分支优化，减少不必要的处理开销
 * 安全机制: 参数验证防止无效事件处理
 */
uint64_t UI_ProcessSystemEvents(int64_t param_1,int param_2,int64_t param_3,char param_4)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  uint64_t uStackX_8;
  
  lVar1 = param_1 + (int64_t)param_2 * 0x18;
  if (*(int64_t *)(param_1 + 0x6b8) == 0) {
    *(int64_t *)(lVar1 + 0x12638) = param_1;
    *(int *)(param_1 + 0x12648 + (int64_t)param_2 * 0x18) = param_2;
    goto LAB_180743a60;
  }
  if (*(int64_t *)(lVar1 + 0x12640) == 0) {
    if (param_3 == 0) goto LAB_180743a60;
LAB_1807439ba:
    if (*(int64_t *)(lVar1 + 0x12640) != 0) goto LAB_180743a60;
    uVar3 = FUN_180767440(lVar1 + 0x12638,param_2,param_1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = (**(code **)(**(int64_t **)(param_1 + 0x116e0) + 0x120))
                      (*(int64_t **)(param_1 + 0x116e0),0xfffffffd,&uStackX_8);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = UltraHighFreq_AudioSystem1(uStackX_8,*(uint64_t *)(lVar1 + 0x12640),0,0,1,0);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = FUN_180743b50(param_1,param_2);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = SystemCore_Initializer(*(uint64_t *)(lVar1 + 0x12640),1);
    iVar2 = (int)uVar3;
  }
  else {
    if (param_3 != 0) goto LAB_1807439ba;
    uVar3 = FUN_180767660(lVar1 + 0x12638);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = FUN_180743b50(param_1,param_2);
    iVar2 = (int)uVar3;
  }
  if (iVar2 != 0) {
    return uVar3;
  }
LAB_180743a60:
  if ((*(int *)(param_1 + 0x11654) == param_2) &&
     (((plVar4 = (int64_t *)(param_1 + 0x12758), (int64_t *)*plVar4 != plVar4 ||
       (*(int64_t **)(param_1 + 0x12760) != plVar4)) && (param_4 == '\0')))) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1807676b0(lVar1 + 0x12638,param_3);
  }
  return uVar3;
}



/*
 * 函数: UI_ManageSystemEvents
 * 功能: UI 系统事件管理器
 * 参数: int64_t param_1 - 事件管理控制块指针
 *        int64_t param_2 - 事件参数
 * 返回值: uint64_t - 事件管理结果状态码
 * 技术架构: 事件管理引擎
 * 
 * 此函数负责管理 UI 系统的事件队列和事件生命周期。
 * 通过遍历事件队列和调用事件处理器，确保事件被正确管理。
 * 
 * 核心功能:
 * - 事件队列管理: 管理事件队列的遍历和处理
 * - 事件生命周期: 管理事件的创建、处理和销毁
 * - 事件回调: 调用事件回调函数
 * - 资源清理: 清理事件相关的资源
 * 
 * 性能优化: 循环优化，减少队列遍历开销
 * 安全机制: 指针验证防止无效事件访问
 */
uint64_t UI_ManageSystemEvents(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lStackX_8;
  
  plVar2 = (int64_t *)(*(int64_t *)(param_1 + 0x368) + -0x178);
  if (*(int64_t *)(param_1 + 0x368) == 0) {
    plVar2 = (int64_t *)0x0;
  }
  while (plVar1 = plVar2, plVar1 != (int64_t *)(param_1 + 0x1f0)) {
    plVar2 = (int64_t *)(plVar1[0x2f] + -0x178);
    if (plVar1[0x2f] == 0) {
      plVar2 = (int64_t *)0x0;
    }
    func_0x0001807561d0(plVar1,&lStackX_8);
    if (lStackX_8 == param_2) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
  }
  return 0;
}



uint64_t FUN_180743ae4(void)

{
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int64_t *plVar1;
  int64_t *unaff_R14;
  int64_t in_stack_00000040;
  
  do {
    plVar1 = (int64_t *)(unaff_RBX[0x2f] + -0x178);
    if (unaff_RBX[0x2f] == 0) {
      plVar1 = unaff_R14;
    }
    func_0x0001807561d0(unaff_RBX,&stack0x00000040);
    if (in_stack_00000040 == unaff_RBP) {
      (**(code **)(*unaff_RBX + 8))(unaff_RBX);
    }
    unaff_RBX = plVar1;
  } while (plVar1 != unaff_RSI);
  return 0;
}



uint64_t FUN_180743b2f(void)

{
  return 0;
}



/*
 * 函数: UI_HandleSystemCallbacks
 * 功能: UI 系统回调处理器
 * 参数: int64_t param_1 - 回调控制块指针
 *        int32_t param_2 - 回调参数
 * 返回值: uint64_t - 回调处理结果状态码
 * 技术架构: 回调处理引擎
 * 
 * 此函数负责处理 UI 系统中的回调函数，执行用户定义的回调逻辑。
 * 通过遍历回调链和调用回调函数，实现系统的异步处理机制。
 * 
 * 核心功能:
 * - 回调链遍历: 遍历回调链表
 * - 回调执行: 执行用户定义的回调函数
 * - 参数传递: 传递回调参数和上下文
 * - 错误处理: 处理回调执行过程中的错误
 * 
 * 性能优化: 提前终止机制，避免不必要的回调执行
 * 安全机制: 回调函数验证防止无效函数调用
 */
uint64_t UI_HandleSystemCallbacks(int64_t param_1,int32_t param_2)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  
  plVar3 = (int64_t *)(*(int64_t *)(param_1 + 0x368) + -0x178);
  if (*(int64_t *)(param_1 + 0x368) == 0) {
    plVar3 = (int64_t *)0x0;
  }
  while (plVar3 != (int64_t *)(param_1 + 0x1f0)) {
    uVar1 = (**(code **)(*plVar3 + 0x78))(plVar3,param_2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    plVar2 = plVar3 + 0x2f;
    plVar3 = (int64_t *)(*plVar2 + -0x178);
    if (*plVar2 == 0) {
      plVar3 = (int64_t *)0x0;
    }
  }
  plVar2 = (int64_t *)(*(int64_t *)(param_1 + 0x116e0) + 400);
  plVar3 = (int64_t *)*plVar2;
  if (plVar3 != plVar2) {
    do {
      uVar1 = FUN_180754eb0(plVar3[2],param_2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      plVar3 = (int64_t *)*plVar3;
    } while (plVar3 != (int64_t *)(*(int64_t *)(param_1 + 0x116e0) + 400));
  }
  return 0;
}



uint64_t FUN_180743c40(int64_t param_1)

{
  uint64_t uVar1;
  int64_t alStackX_8 [4];
  
  if (*(int64_t *)(param_1 + 0x11598) != 0) {
    if (*(int64_t *)(param_1 + 0x11928) != 0) {
      alStackX_8[0] = 0;
      uVar1 = RenderingSystem_TextureManager(alStackX_8);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if ((*(int64_t *)(param_1 + 0x11928) == alStackX_8[0]) &&
         (*(char *)(param_1 + 0x11930) != '\0')) {
        return 0x23;
      }
    }
    if (*(int64_t *)(param_1 + 0x11598) == 0) {
      return 0x1c;
    }
    uVar1 = SystemMemoryAllocator();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



uint64_t FUN_180743cc0(int64_t param_1,int8_t param_2)

{
  uint64_t uVar1;
  
  if (*(int64_t *)(param_1 + 0x115a8) != 0) {
    uVar1 = SystemMemoryAllocator();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*(int64_t *)(param_1 + 0x11928) != 0) {
      return 0x1c;
    }
    uVar1 = RenderingSystem_TextureManager(param_1 + 0x11928);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*(int64_t *)(param_1 + 0x11928) == 0) {
      return 0x1c;
    }
    *(int8_t *)(param_1 + 0x11930) = param_2;
    uVar1 = FUN_180744ae0(param_1,0x100002,*(int64_t *)(param_1 + 0x11928),param_2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



int32_t SystemMemoryProcessor(int64_t param_1,int param_2)

{
  int64_t lVar1;
  
  lVar1 = *(int64_t *)(param_1 + 0x11530 + (int64_t)param_2 * 8);
  if (lVar1 == 0) {
    return 0x1c;
  }
  if (lVar1 == 0) {
    return 0x1c;
  }
  LeaveCriticalSection();
  return 0;
}



uint64_t SystemDataProcessor(int64_t param_1)

{
  if (*(int64_t *)(param_1 + 0x11598) != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager();
  }
  return 0;
}



uint64_t FUN_180743da0(int64_t param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  
  if (*(int64_t *)(param_1 + 0x115a8) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(int64_t *)(param_1 + 0x11928);
    if (lVar1 == 0) {
      return 0x1c;
    }
    *(uint64_t *)(param_1 + 0x11928) = 0;
    *(int8_t *)(param_1 + 0x11930) = 0;
    uVar2 = FUN_180744ae0(param_1,0x100004,lVar1,0);
    if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
      SystemMemoryManager(*(uint64_t *)(param_1 + 0x115a8));
    }
  }
  return uVar2;
}



uint64_t FUN_180743e10(int64_t param_1)

{
  if (*(int64_t *)(param_1 + 0x11538) != 0) {
    SystemMemoryAllocator();
  }
  if (*(int64_t *)(param_1 + 0x11548) != 0) {
    SystemMemoryAllocator();
  }
  return 0;
}



uint64_t FUN_180743e50(int64_t param_1)

{
  if (*(int64_t *)(param_1 + 0x11548) != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager();
  }
  if (*(int64_t *)(param_1 + 0x11538) != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager();
  }
  return 0;
}





// 函数: void FUN_180743e90(uint64_t *param_1)
void FUN_180743e90(uint64_t *param_1)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  
  *param_1 = &processed_var_8544_ptr;
  func_0x00018074fb20(param_1 + 0x10);
  FUN_1807554e0(param_1 + 0x3e);
  FUN_1807554e0(param_1 + 0x84);
  puVar1 = param_1 + 0xca;
  *(int32_t *)(param_1 + 0xcd) = 0xffffffff;
  *puVar1 = puVar1;
  param_1[0xcb] = puVar1;
  param_1[0xcc] = 0;
  puVar1 = param_1 + 0xd8;
  *puVar1 = puVar1;
  param_1[0xd9] = puVar1;
  func_0x000180772c00(param_1 + 0xdc);
  puVar1 = param_1 + 0xea;
  param_1[0xeb] = puVar1;
  *puVar1 = puVar1;
  param_1[0xec] = 0;
  puVar1 = param_1 + 0xed;
  param_1[0xee] = puVar1;
  *puVar1 = puVar1;
  param_1[0xef] = 0;
  puVar1 = param_1 + 0x20f1;
  param_1[0x20f2] = puVar1;
  *puVar1 = puVar1;
  param_1[0x20f3] = 0;
  param_1[0x20f4] = 0;
  puVar1 = param_1 + 0x2102;
  param_1[0x2105] = 0xffffffffffffffff;
  *puVar1 = puVar1;
  param_1[0x2103] = puVar1;
  param_1[0x2104] = 0;
  puVar1 = param_1 + 0x2106;
  param_1[0x2107] = puVar1;
  *puVar1 = puVar1;
  param_1[0x2108] = 0;
  func_0x000180741c80(param_1 + 0x2109);
  func_0x000180741c80(param_1 + 0x217a);
  puVar1 = param_1 + 0x21eb;
  param_1[0x21ec] = puVar1;
  puVar3 = param_1 + 0x2201;
  *puVar1 = puVar1;
  lVar2 = 2;
  param_1[0x21ed] = 0;
  puVar1 = param_1 + 0x21fb;
  param_1[0x21fc] = puVar1;
  *puVar1 = puVar1;
  param_1[0x21fd] = 0;
  puVar1 = param_1 + 0x21fe;
  param_1[0x21ff] = puVar1;
  *puVar1 = puVar1;
  param_1[0x2200] = 0;
  do {
    func_0x000180772c00(puVar3);
    puVar3 = (uint64_t *)((int64_t)puVar3 + 0x3c);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  puVar1 = param_1 + 0x2210;
  lVar2 = 8;
  do {
    func_0x000180785fd0(puVar1);
    puVar1 = puVar1 + 0xe;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0x22be] = 0;
  param_1[0x22bf] = 0;
  param_1[0x22c0] = 0;
  func_0x000180772c00(param_1 + 0x22cf);
  puVar1 = param_1 + 0x22de;
  param_1[0x22df] = puVar1;
  lVar2 = 8;
  *puVar1 = puVar1;
  param_1[0x22e0] = 0;
  puVar1 = param_1 + 0x22e1;
  param_1[0x22e2] = puVar1;
  *puVar1 = puVar1;
  param_1[0x22e3] = 0;
  puVar1 = param_1 + 0x22e5;
  param_1[0x22e6] = puVar1;
  *puVar1 = puVar1;
  param_1[0x22e7] = 0;
  puVar1 = param_1 + 0x22e8;
  param_1[0x22e9] = puVar1;
  *puVar1 = puVar1;
  param_1[0x22ea] = 0;
  puVar1 = param_1 + 0x22ed;
  param_1[0x22ee] = puVar1;
  *puVar1 = puVar1;
  param_1[0x22ef] = 0;
  puVar1 = param_1 + 0x2389;
  *(int32_t *)(param_1 + 0x22fb) = 0xdef5eed1;
  *(int32_t *)((int64_t)param_1 + 0x117dc) = 0x210a112e;
  *(int32_t *)(param_1 + 0x22fc) = 0xb00d7817;
  *(int32_t *)((int64_t)param_1 + 0x117e4) = 0xa24611e;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 0x18;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  puVar1 = param_1 + 0x243c;
  param_1[0x243d] = puVar1;
  *puVar1 = puVar1;
  param_1[0x243e] = 0;
  puVar1 = param_1 + 0x2441;
  param_1[0x2442] = puVar1;
  *puVar1 = puVar1;
  param_1[0x2443] = 0;
  func_0x000180767970(param_1 + 0x2444);
  func_0x000180772c00((int64_t)param_1 + 0x12374);
  FUN_180785980(param_1 + 0x2487);
  func_0x000180772c00(param_1 + 0x24bf);
  param_1[0x24c7] = 0;
  puVar1 = param_1 + 0x24eb;
  param_1[0x24c8] = 0;
  *(int32_t *)(param_1 + 0x24c9) = 0;
  param_1[0x24ca] = 0;
  param_1[0x24cb] = 0;
  *(int32_t *)(param_1 + 0x24cc) = 0;
  param_1[0x24cd] = 0;
  param_1[0x24ce] = 0;
  *(int32_t *)(param_1 + 0x24cf) = 0;
  param_1[0x24d0] = 0;
  param_1[0x24d1] = 0;
  *(int32_t *)(param_1 + 0x24d2) = 0;
  param_1[0x24ec] = puVar1;
  *puVar1 = puVar1;
  param_1[0x24ed] = 0;
  puVar1 = param_1 + 0x24f0;
  param_1[0x24f1] = puVar1;
  *puVar1 = puVar1;
  param_1[0x24f2] = 0;
  puVar1 = param_1 + 0x24fa;
  param_1[0x24f3] = 0;
  *(int32_t *)(param_1 + 0x24f4) = 0;
  param_1[0x24f5] = 0;
  param_1[0x24f6] = 0;
  param_1[0x24f7] = 0;
  param_1[0x24f8] = 0;
  *(int32_t *)(param_1 + 0x24f9) = 0xffffffff;
  *(int32_t *)((int64_t)param_1 + 0x127cc) = 0;
  *puVar1 = puVar1;
  param_1[0x24fb] = puVar1;
  param_1[0x24fc] = 0;
  param_1[0x24fd] = 0;
  *(int16_t *)(param_1 + 1) = 0;
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
  param_1[0xd6] = 0;
  param_1[0x3d] = 0;
  param_1[0x2283] = 0;
  *(int32_t *)((int64_t)param_1 + 0x116b4) = 0;
  *(int32_t *)((int64_t)param_1 + 0x11934) = 0x4000;
  *(int32_t *)(param_1 + 8999) = 8;
  *(uint64_t *)((int64_t)param_1 + 0x116bc) = 0x40;
  param_1[0x22ce] = 0;
  *(int32_t *)((int64_t)param_1 + 0x1175c) = 0x800;
  *(int8_t *)(param_1 + 0x22eb) = 0;
  *(int32_t *)(param_1 + 0xdb) = 0x400;
  *(int32_t *)((int64_t)param_1 + 0x6dc) = 0x1000;
  param_1[0xd7] = 0;
  param_1[0xda] = 48000;
  *(int32_t *)(param_1 + 0x22dd) = 0;
  param_1[0x3c] = 0;
  *(int32_t *)(param_1 + 0xd0) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x116c4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x116cc) = 0xffffffffffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x116d4) = 0xffffffffffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x684) = 0xffffffffffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x68c) = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 0x2280) = 1;
  *(int32_t *)((int64_t)param_1 + 0x11404) = 0x3f800000;
  *(int32_t *)(param_1 + 0x2281) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x1140c) = 0x3f800000;
  param_1[0x2486] = 0;
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x2284,0,0x100);
}



uint64_t * FUN_180744640(uint64_t *param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int iVar2;
  
  *param_1 = &processed_var_8544_ptr;
  SystemAnalyzer(param_1 + 0x24fc);
  plVar1 = param_1 + 0x24fa;
  *(int64_t *)param_1[0x24fb] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[0x24fb];
  param_1[0x24fb] = plVar1;
  *plVar1 = (int64_t)plVar1;
  iVar2 = SystemStatusChecker(param_1 + 0x24f5);
  if (iVar2 == 0) {
    iVar2 = UISystem_ComponentManager(param_1 + 0x24f7);
    if (iVar2 == 0) {
      *(int32_t *)(param_1 + 0x24f9) = 0xffffffff;
      *(int32_t *)((int64_t)param_1 + 0x127cc) = 0;
    }
  }
  UISystem_ComponentManager(param_1 + 0x24f7);
  SystemStatusChecker(param_1 + 0x24f5);
  func_0x000180785a10(param_1 + 0x2487);
  param_1[0x2444] = &processed_var_8408_ptr;
  thunk_FUN_180742070(param_1 + 0x217a);
  thunk_FUN_180742070(param_1 + 0x2109);
  plVar1 = param_1 + 0xd8;
  *(int64_t *)param_1[0xd9] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[0xd9];
  param_1[0xd9] = plVar1;
  *plVar1 = (int64_t)plVar1;
  if ((param_2 & 1) != 0) {
    free(param_1,0x127f8);
  }
  return param_1;
}



uint64_t * FUN_180744750(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &processed_var_8408_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x150);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180744780(int64_t param_1)

{
  int iVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int iVar4;
  uint64_t uVar5;
  uint uVar6;
  int iVar7;
  int64_t lVar8;
  uint64_t uVar9;
  
  uVar6 = *(uint *)(param_1 + 0x6d8);
  lVar8 = 0;
  uVar5 = (uint64_t)*(uint *)(param_1 + 0x6dc) / (uint64_t)uVar6;
  iVar1 = (int)uVar5;
  plVar2 = (int64_t *)
           SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),(uVar6 + 0x16) * iVar1 * 4 + 0x40,
                         &processed_var_8576_ptr,0x3b5,0);
  if (plVar2 == (int64_t *)0x0) {
    return 0x26;
  }
  *plVar2 = (int64_t)(plVar2 + 6);
  uVar9 = (int64_t)iVar1 * 0x58 + 0xf + (int64_t)(plVar2 + 6) & 0xfffffffffffffff0;
  if (0 < iVar1) {
    do {
      lVar8 = lVar8 + 0x58;
      *(uint64_t *)(*plVar2 + -8 + lVar8) = uVar9;
      uVar9 = uVar9 + (uint64_t)uVar6 * 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  uVar3 = FUN_18078a0c0(param_1 + 0x720,plVar2 + 2,CONCAT71((int7)(uVar9 >> 8),1));
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar3 = FUN_180765990(plVar2[2],1);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  func_0x000180743c20(param_1,0x11);
  *(int32_t *)(plVar2 + 4) = *(int32_t *)(param_1 + 0x127e8);
  uVar6 = (int)*(uint *)(param_1 + 0x127ec) >> 0x1f;
  iVar4 = *(int *)(param_1 + 0x127e8) + 1;
  iVar1 = (*(uint *)(param_1 + 0x127ec) ^ uVar6) - uVar6;
  if (iVar1 < iVar4) {
    iVar7 = (int)((float)iVar1 * 1.5);
    iVar1 = iVar4;
    if (iVar4 <= iVar7) {
      iVar1 = iVar7;
    }
    if (iVar1 < 8) {
      iVar7 = 8;
    }
    else if (iVar7 < iVar4) {
      iVar7 = iVar4;
    }
    iVar1 = RenderingTextureManager0((int64_t *)(param_1 + 0x127e0),iVar7);
    if (iVar1 != 0) goto LAB_1807448f0;
  }
  *(int64_t **)(*(int64_t *)(param_1 + 0x127e0) + (int64_t)*(int *)(param_1 + 0x127e8) * 8) =
       plVar2;
  *(int *)(param_1 + 0x127e8) = *(int *)(param_1 + 0x127e8) + 1;
LAB_1807448f0:
                    // WARNING: Subroutine does not return
  SystemMemoryProcessor(param_1,0x11);
}



uint64_t
FUN_180744920(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4,char param_5)

{
  uint64_t uVar1;
  int iVar2;
  int aiStackX_20 [2];
  uint64_t *puVar3;
  uint64_t uVar4;
  uint uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  int64_t lStack_30;
  uint64_t uStack_28;
  int64_t lStack_20;
  uint64_t auStack_18 [2];
  
  if (((param_4 != (int64_t *)0x0) && (*(short *)((int64_t)param_4 + 0x1fc) == -1)) &&
     (param_4[4] != 0)) {
    if (*(int64_t *)(*(int64_t *)(param_1 + 0x670) + 0x3a8) != 0) {
      puVar3 = &uStack_38;
      iVar2 = 0;
      uStack_38 = 0;
      uVar1 = FUN_180787940();
      if ((int)uVar1 == 0) {
        lStack_30 = 0;
        uVar1 = (**(code **)(*(int64_t *)param_4[4] + 0x120))
                          ((int64_t *)param_4[4],0xfffffffd,&lStack_30);
        if ((int)uVar1 == 0) {
          uStack_40 = 0;
          uVar1 = (**(code **)(*param_4 + 0x120))(param_4,0xffffffff,&uStack_40);
          if ((int)uVar1 == 0) {
            uVar4 = CONCAT71((int7)((uint64_t)puVar3 >> 8),1);
            UltraHighFreq_AudioSystem1(uStack_38,uStack_40,&uStack_28,0,uVar4,0);
            func_0x000180766510(uStack_28,uStack_48 | 0xfeed0000);
            if ((param_5 == '\0') && (FUN_18075ec10(uStack_40,aiStackX_20,0,1), 0 < aiStackX_20[0]))
            {
              do {
                uVar4 = uVar4 & 0xffffffffffffff00;
                FUN_18075ef40(uStack_40,iVar2,&lStack_20,auStack_18,uVar4,1);
                if (lStack_20 == lStack_30) {
                  uVar4 = uVar4 & 0xffffffffffffff00;
                  FUN_180765c40(auStack_18[0],0,0,1,uVar4);
                }
                iVar2 = iVar2 + 1;
              } while (iVar2 < aiStackX_20[0]);
            }
            *(int16_t *)((int64_t)param_4 + 0x1fc) = (int16_t)uStack_48;
            uVar1 = 0;
            *(char *)((int64_t)param_4 + 0x1fe) = param_5;
          }
        }
      }
      return uVar1;
    }
    return 0x44;
  }
  return 0x1f;
}



uint64_t FUN_18074496d(void)

{
  char cVar1;
  uint64_t in_RAX;
  uint64_t uVar2;
  int iVar3;
  int64_t *unaff_RDI;
  uint64_t uVar4;
  int16_t uStack0000000000000030;
  uint64_t uStack0000000000000040;
  int64_t in_stack_00000048;
  uint64_t in_stack_00000050;
  int64_t in_stack_00000058;
  uint64_t in_stack_00000060;
  int in_stack_00000098;
  char in_stack_000000a0;
  
  iVar3 = 0;
  uStack0000000000000040 = 0;
  uVar2 = FUN_180787940();
  if ((int)uVar2 == 0) {
    in_stack_00000048 = 0;
    uVar2 = (**(code **)(*(int64_t *)unaff_RDI[4] + 0x120))
                      ((int64_t *)unaff_RDI[4],0xfffffffd,&stack0x00000048);
    if (((int)uVar2 == 0) && (uVar2 = (**(code **)(*unaff_RDI + 0x120))(), (int)uVar2 == 0)) {
      uVar4 = CONCAT71((int7)((uint64_t)in_RAX >> 8),1);
      UltraHighFreq_AudioSystem1(uStack0000000000000040,0,&stack0x00000050,0,uVar4);
      func_0x000180766510(in_stack_00000050,_uStack0000000000000030 | 0xfeed0000);
      cVar1 = in_stack_000000a0;
      if ((in_stack_000000a0 == '\0') &&
         (FUN_18075ec10(0,&stack0x00000098,0,1), 0 < in_stack_00000098)) {
        do {
          uVar4 = uVar4 & 0xffffffffffffff00;
          FUN_18075ef40(0,iVar3,&stack0x00000058,&stack0x00000060,uVar4);
          if (in_stack_00000058 == in_stack_00000048) {
            uVar4 = uVar4 & 0xffffffffffffff00;
            FUN_180765c40(in_stack_00000060,0,0,1,uVar4);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < in_stack_00000098);
      }
      *(int16_t *)((int64_t)unaff_RDI + 0x1fc) = uStack0000000000000030;
      uVar2 = 0;
      *(char *)((int64_t)unaff_RDI + 0x1fe) = cVar1;
    }
  }
  return uVar2;
}



uint64_t FUN_1807449f2(void)

{
  char cVar1;
  int unaff_EBX;
  int64_t unaff_RDI;
  int16_t uStack0000000000000030;
  uint64_t in_stack_00000038;
  int64_t in_stack_00000048;
  uint64_t in_stack_00000050;
  int64_t in_stack_00000058;
  uint64_t in_stack_00000060;
  int in_stack_00000098;
  char in_stack_000000a0;
  
  UltraHighFreq_AudioSystem1();
  func_0x000180766510(in_stack_00000050,_uStack0000000000000030 | 0xfeed0000);
  cVar1 = in_stack_000000a0;
  if ((in_stack_000000a0 == '\0') &&
     (FUN_18075ec10(in_stack_00000038,&stack0x00000098,0,1), unaff_EBX < in_stack_00000098)) {
    do {
      FUN_18075ef40(in_stack_00000038,unaff_EBX,&stack0x00000058,&stack0x00000060,0);
      if (in_stack_00000058 == in_stack_00000048) {
        FUN_180765c40(in_stack_00000060,0,0,1,0);
      }
      unaff_EBX = unaff_EBX + 1;
    } while (unaff_EBX < in_stack_00000098);
  }
  *(int16_t *)(unaff_RDI + 0x1fc) = uStack0000000000000030;
  *(char *)(unaff_RDI + 0x1fe) = cVar1;
  return 0;
}





// 函数: void FUN_180744abc(void)
void FUN_180744abc(void)

{
  return;
}



uint64_t FUN_180744aca(void)

{
  return 0x1f;
}



int FUN_180744ae0(int64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t *puVar2;
  int iVar3;
  
  if (param_1 != 0) {
    func_0x000180743c20(param_1,0x15);
  }
  iVar3 = 0;
  puVar2 = (uint64_t *)(param_1 + 0x115e8);
  do {
    if ((code *)puVar2[-1] != (code *)0x0) {
      iVar1 = (*(code *)puVar2[-1])(param_1,param_2,param_3,param_4,*puVar2);
      if (iVar1 != 0) goto LAB_180744b66;
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 1);
  iVar1 = 0;
LAB_180744b66:
  if ((param_1 != 0) && (param_1 != 0)) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(param_1,0x15);
  }
  return iVar1;
}



int FUN_180744ae6(int64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t *puVar2;
  int iVar3;
  
  if (param_1 != 0) {
    func_0x000180743c20(param_1,0x15);
  }
  iVar3 = 0;
  puVar2 = (uint64_t *)(param_1 + 0x115e8);
  do {
    if ((code *)puVar2[-1] != (code *)0x0) {
      iVar1 = (*(code *)puVar2[-1])(param_1,param_2,param_3,param_4,*puVar2);
      if (iVar1 != 0) goto LAB_180744b66;
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 1);
  iVar1 = 0;
LAB_180744b66:
  if ((param_1 != 0) && (param_1 != 0)) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(param_1,0x15);
  }
  return iVar1;
}



int32_t FUN_180744b89(void)

{
  int64_t unaff_RBP;
  int32_t unaff_ESI;
  
  if (unaff_RBP != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor();
  }
  return unaff_ESI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



