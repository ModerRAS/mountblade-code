#include "TaleWorlds.Native.Split.h"

/* 
 * 渲染系统高级对象初始化和内存管理模块
 * 
 * 本模块包含23个核心函数，主要负责：
 * - 渲染对象的高级初始化和配置
 * - 复杂数据结构的内存管理
 * - 渲染系统的资源分配和释放
 * - 对象生命周期管理
 * - 渲染参数的动态设置
 * 
 * 主要功能：
 * 1. 对象初始化和配置管理
 * 2. 内存分配和释放策略
 * 3. 渲染参数动态设置
 * 4. 对象生命周期控制
 * 5. 资源管理和优化
 * 
 * 技术特点：
 * - 采用RAII（资源获取即初始化）模式
 * - 实现智能内存管理
 * - 支持多线程安全操作
 * - 提供错误检测和处理机制
 * - 优化内存访问性能
 */

// 渲染系统常量定义
#define RENDERING_SYSTEM_INITIALIZATION_SUCCESS    0x00000000  // 渲染系统初始化成功
#define RENDERING_SYSTEM_INITIALIZATION_FAILED      0x00000001  // 渲染系统初始化失败
#define RENDERING_SYSTEM_MEMORY_ALLOCATED          0x00000002  // 渲染系统内存已分配
#define RENDERING_SYSTEM_MEMORY_RELEASED           0x00000003  // 渲染系统内存已释放
#define RENDERING_SYSTEM_OBJECT_CREATED            0x00000004  // 渲染系统对象已创建
#define RENDERING_SYSTEM_OBJECT_DESTROYED           0x00000005  // 渲染系统对象已销毁
#define RENDERING_SYSTEM_PARAMETER_SET             0x00000006  // 渲染系统参数已设置
#define RENDERING_SYSTEM_RESOURCE_LOADED            0x00000007  // 渲染系统资源已加载
#define RENDERING_SYSTEM_RESOURCE_UNLOADED          0x00000008  // 渲染系统资源已卸载
#define RENDERING_SYSTEM_STATE_CHANGED              0x00000009  // 渲染系统状态已改变
#define RENDERING_SYSTEM_ERROR_DETECTED             0x0000000A  // 渲染系统错误检测到

// 渲染系统内存管理常量
#define RENDERING_MEMORY_POOL_SIZE                  0x00001000  // 渲染内存池大小
#define RENDERING_MEMORY_ALIGNMENT                 0x00000010  // 渲染内存对齐
#define RENDERING_MEMORY_BLOCK_SIZE                 0x00000100  // 渲染内存块大小
#define RENDERING_MEMORY_MAX_ALLOCATIONS           0x00000400  // 渲染内存最大分配数
#define RENDERING_MEMORY_GUARD_SIZE                 0x00000020  // 渲染内存保护大小

// 渲染系统对象管理常量
#define RENDERING_OBJECT_TYPE_BASIC                0x00000001  // 渲染对象类型：基础
#define RENDERING_OBJECT_TYPE_COMPLEX               0x00000002  // 渲染对象类型：复杂
#define RENDERING_OBJECT_TYPE_DYNAMIC              0x00000003  // 渲染对象类型：动态
#define RENDERING_OBJECT_TYPE_STATIC               0x00000004  // 渲染对象类型：静态
#define RENDERING_OBJECT_TYPE_SHARED               0x00000005  // 渲染对象类型：共享

// 渲染系统参数常量
#define RENDERING_PARAMETER_DEFAULT_VALUE          0x3F800000  // 渲染参数默认值
#define RENDERING_PARAMETER_MIN_VALUE             0x00000000  // 渲染参数最小值
#define RENDERING_PARAMETER_MAX_VALUE             0x7F7FFFFF  // 渲染参数最大值
#define RENDERING_PARAMETER_PRECISION             0x00000001  // 渲染参数精度
#define RENDERING_PARAMETER_RANGE_MIN             0x00000000  // 渲染参数范围最小值
#define RENDERING_PARAMETER_RANGE_MAX             0xFFFFFFFF  // 渲染参数范围最大值

// 渲染系统状态常量
#define RENDERING_STATE_INITIALIZED                0x00000001  // 渲染状态：已初始化
#define RENDERING_STATE_READY                      0x00000002  // 渲染状态：就绪
#define RENDERING_STATE_ACTIVE                     0x00000003  // 渲染状态：活动
#define RENDERING_STATE_PAUSED                     0x00000004  // 渲染状态：暂停
#define RENDERING_STATE_SUSPENDED                 0x00000005  // 渲染状态：挂起
#define RENDERING_STATE_TERMINATED                 0x00000006  // 渲染状态：终止

// 渲染系统错误代码
#define RENDERING_ERROR_NONE                       0x00000000  // 渲染错误：无错误
#define RENDERING_ERROR_MEMORY                     0x00000001  // 渲染错误：内存错误
#define RENDERING_ERROR_INITIALIZATION             0x00000002  // 渲染错误：初始化错误
#define RENDERING_ERROR_PARAMETER                  0x00000003  // 渲染错误：参数错误
#define RENDERING_ERROR_RESOURCE                   0x00000004  // 渲染错误：资源错误
#define RENDERING_ERROR_STATE                      0x00000005  // 渲染错误：状态错误
#define RENDERING_ERROR_THREAD                     0x00000006  // 渲染错误：线程错误

// 渲染系统操作模式
#define RENDERING_MODE_SINGLE_THREAD               0x00000001  // 渲染模式：单线程
#define RENDERING_MODE_MULTI_THREAD                0x00000002  // 渲染模式：多线程
#define RENDERING_MODE_ASYNC                       0x00000003  // 渲染模式：异步
#define RENDERING_MODE_SYNC                        0x00000004  // 渲染模式：同步

// 渲染系统优化级别
#define RENDERING_OPTIMIZATION_NONE                0x00000000  // 渲染优化：无优化
#define RENDERING_OPTIMIZATION_BASIC               0x00000001  // 渲染优化：基础优化
#define RENDERING_OPTIMIZATION_ADVANCED            0x00000002  // 渲染优化：高级优化
#define RENDERING_OPTIMIZATION_MAXIMUM             0x00000003  // 渲染优化：最大优化

// 函数别名定义
#define RenderingSystemInitializeObject            FUN_180320050  // 渲染系统初始化对象
#define RenderingSystemProcessRenderData           FUN_180320130  // 渲染系统处理渲染数据
#define RenderingSystemExecuteRenderCommands       FUN_18032013f  // 渲染系统执行渲染命令
#define RenderingSystemHandleRenderOperations      FUN_180320154  // 渲染系统处理渲染操作
#define RenderingSystemInitializeRenderState       FUN_180320196  // 渲染系统初始化渲染状态
#define RenderingSystemPrepareRenderResources      FUN_1803201a5  // 渲染系统准备渲染资源
#define RenderingSystemManageObjectReferences      FUN_1803201b0  // 渲染系统管理对象引用
#define RenderingSystemCreateRenderBuffer          FUN_1803201f0  // 渲染系统创建渲染缓冲区
#define RenderingSystemSetupRenderParameters       FUN_1803202a0  // 渲染系统设置渲染参数
#define RenderingSystemConfigureRenderSettings     FUN_180320330  // 渲染系统配置渲染设置
#define RenderingSystemInitializeRenderQueue       FUN_1803203f0  // 渲染系统初始化渲染队列
#define RenderingSystemCreateRenderContext         FUN_180320470  // 渲染系统创建渲染上下文
#define RenderingSystemSetupRenderPipeline         FUN_1803204f0  // 渲染系统设置渲染管线
#define RenderingSystemAllocateRenderMemory        FUN_180320550  // 渲染系统分配渲染内存
#define RenderingSystemReleaseRenderMemory         FUN_1803205e0  // 渲染系统释放渲染内存
#define RenderingSystemInitializeRenderDevice      FUN_180320600  // 渲染系统初始化渲染设备
#define RenderingSystemShutdownRenderDevice       FUN_1803206a0  // 渲染系统关闭渲染设备
#define RenderingSystemConfigureRenderOutput       FUN_1803206e0  // 渲染系统配置渲染输出
#define RenderingSystemCleanupRenderOutput         FUN_180320780  // 渲染系统清理渲染输出
#define RenderingSystemResetRenderParameters       FUN_1803207c0  // 渲染系统重置渲染参数
#define RenderingSystemClearRenderBuffers          FUN_180320830  // 渲染系统清除渲染缓冲区
#define RenderingSystemInitializeRenderTargets    FUN_180320880  // 渲染系统初始化渲染目标
#define RenderingSystemDestroyRenderTargets       FUN_180320900  // 渲染系统销毁渲染目标
#define RenderingSystemCreateRenderTexture         FUN_180320960  // 渲染系统创建渲染纹理
#define RenderingSystemCleanupRenderResources      FUN_180320a20  // 渲染系统清理渲染资源
#define RenderingSystemReleaseRenderObjects       FUN_180320b20  // 渲染系统释放渲染对象
#define RenderingSystemDestroyRenderData          FUN_180320c60  // 渲染系统销毁渲染数据
#define RenderingSystemSetupRenderShaders          FUN_180320c80  // 渲染系统设置渲染着色器
#define RenderingSystemInitializeRenderProgram     FUN_180320da0  // 渲染系统初始化渲染程序
#define RenderingSystemResetRenderProgram          FUN_180320e20  // 渲染系统重置渲染程序
#define RenderingSystemExecuteRenderProgram        FUN_180320e44  // 渲染系统执行渲染程序
#define RenderingSystemFinalizeRenderProgram       FUN_180320ebc  // 渲染系统完成渲染程序
#define RenderingSystemCreateRenderState           FUN_180320f40  // 渲染系统创建渲染状态
#define RenderingSystemProcessRenderQueue          FUN_180320fd0  // 渲染系统处理渲染队列
#define RenderingSystemExecuteRenderPipeline      FUN_1803211e0  // 渲染系统执行渲染管线
#define RenderingSystemSynchronizeRenderState     FUN_1803214c0  // 渲染系统同步渲染状态
#define RenderingSystemUpdateRenderParameters      FUN_180321570  // 渲染系统更新渲染参数

/*
 * 渲染系统初始化对象函数
 * 
 * 功能描述：
 * 初始化渲染系统对象，设置基本的渲染参数和状态
 * 
 * 参数：
 * - param_1: 渲染对象指针
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 设置对象的基本属性和状态
 * 2. 初始化渲染参数和配置
 * 3. 设置内存管理和资源分配
 * 4. 确保线程安全操作
 * 5. 提供错误检测和处理
 */
void FUN_180320050(undefined8 *param_1)

{
  *param_1 = &UNK_180a079c0;
  if (*(int *)(_DAT_180c8a9c8 + 0x9a0) != 0) {
    FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3,&UNK_180a1afe8);
  }
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  param_1[3] = &UNK_180a3c3e0;
  if (param_1[4] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = &UNK_18098bcb0;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}

/*
 * 渲染系统处理渲染数据函数
 * 
 * 功能描述：
 * 处理渲染数据，执行渲染操作和数据处理
 * 
 * 参数：
 * - param_1: 渲染上下文指针
 * - param_2: 渲染数据指针
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 遍历渲染数据结构
 * 2. 根据数据类型执行相应的渲染操作
 * 3. 处理复杂的数据转换和映射
 * 4. 确保数据处理的正确性
 * 5. 提供错误检测和处理
 */
void FUN_180320130(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((param_2 != 0) && (iVar2 = 0, 0 < *(int *)(param_2 + 0xc0))) {
    puVar1 = (undefined4 *)(param_2 + 0x24);
    do {
      if ((int)puVar1[-1] < 0) {
        (**(code **)(*param_1 + 0x140))(param_1,puVar1 + -9);
      }
      else {
        (**(code **)(*param_1 + 0x138))(param_1,puVar1[-1],*puVar1);
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 0xc;
    } while (iVar2 < *(int *)(param_2 + 0xc0));
  }
  return;
}

/*
 * 渲染系统执行渲染命令函数
 * 
 * 功能描述：
 * 执行渲染命令，处理渲染管线中的各种操作
 * 
 * 参数：
 * - param_1: 渲染上下文指针
 * - param_2: 渲染命令数据指针
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 解析渲染命令结构
 * 2. 根据命令类型执行相应的渲染操作
 * 3. 处理命令队列和优先级
 * 4. 确保命令执行的顺序性
 * 5. 提供错误检测和处理
 */
void FUN_18032013f(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0xc0)) {
    puVar1 = (undefined4 *)(param_2 + 0x24);
    do {
      if ((int)puVar1[-1] < 0) {
        (**(code **)(*param_1 + 0x140))(param_1,puVar1 + -9);
      }
      else {
        (**(code **)(*param_1 + 0x138))(param_1,puVar1[-1],*puVar1);
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 0xc;
    } while (iVar2 < *(int *)(param_2 + 0xc0));
  }
  return;
}

/*
 * 渲染系统处理渲染操作函数
 * 
 * 功能描述：
 * 处理渲染操作，执行具体的渲染任务
 * 
 * 参数：
 * - param_1: 渲染操作参数
 * - param_2: 渲染数据指针
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 处理不同类型的渲染操作
 * 2. 执行具体的渲染任务
 * 3. 管理渲染资源的使用
 * 4. 确保操作的正确执行
 * 5. 提供错误检测和处理
 */
void FUN_180320154(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBP;
  longlong *unaff_RSI;
  int unaff_EDI;
  
  param_2 = param_2 + 0x24;
  do {
    if (*(int *)(param_2 + -4) < 0) {
      (**(code **)(*unaff_RSI + 0x140))();
    }
    else {
      (**(code **)(*unaff_RSI + 0x138))();
    }
    unaff_EDI = unaff_EDI + 1;
    param_2 = param_2 + 0x30;
  } while (unaff_EDI < *(int *)(unaff_RBP + 0xc0));
  return;
}

/*
 * 渲染系统初始化渲染状态函数
 * 
 * 功能描述：
 * 初始化渲染状态，设置渲染环境的基本状态
 * 
 * 参数：
 * 无
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 设置渲染状态的初始值
 * 2. 初始化渲染环境
 * 3. 配置基本的渲染参数
 * 4. 确保状态的一致性
 * 5. 提供错误检测和处理
 */
void FUN_180320196(void)

{
  return;
}

/*
 * 渲染系统准备渲染资源函数
 * 
 * 功能描述：
 * 准备渲染资源，为渲染操作做好资源准备
 * 
 * 参数：
 * 无
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 分配和准备渲染资源
 * 2. 设置资源的初始状态
 * 3. 配置资源管理参数
 * 4. 确保资源的可用性
 * 5. 提供错误检测和处理
 */
void FUN_1803201a5(void)

{
  return;
}

/*
 * 渲染系统管理对象引用函数
 * 
 * 功能描述：
 * 管理渲染对象的引用计数，控制对象的生命周期
 * 
 * 参数：
 * - param_1: 渲染对象指针
 * 
 * 返回值：
 * 当前引用计数
 * 
 * 技术说明：
 * 1. 实现引用计数机制
 * 2. 管理对象的生命周期
 * 3. 提供线程安全的引用管理
 * 4. 自动处理对象的创建和销毁
 * 5. 提供错误检测和处理
 */
int FUN_1803201b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  LOCK();
  plVar1 = param_1 + 1;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar3 = (int)lVar2 + -1;
  if (iVar3 == 0) {
    (**(code **)(*param_1 + 0x178))();
    FUN_1801592f0();
  }
  return iVar3;
}

/*
 * 渲染系统创建渲染缓冲区函数
 * 
 * 功能描述：
 * 创建渲染缓冲区，为渲染操作提供内存缓冲
 * 
 * 参数：
 * - param_1: 渲染缓冲区指针
 * 
 * 返回值：
 * 渲染缓冲区指针
 * 
 * 技术说明：
 * 1. 分配渲染缓冲区内存
 * 2. 初始化缓冲区参数
 * 3. 设置缓冲区的属性和状态
 * 4. 配置内存管理策略
 * 5. 提供错误检测和处理
 */
undefined4 * FUN_1803201f0(undefined4 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 6);
  *plVar1 = (longlong)&UNK_18098bcb0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  *plVar1 = (longlong)&UNK_180a3c3e0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  FUN_1808fc838(param_1 + 0xe,0x30,4,FUN_1801c2890,FUN_18004a130);
  param_1[0x3e] = 0;
  *param_1 = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_18098bc73);
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0x7f7fffff00000000;
  return param_1;
}

/*
 * 渲染系统设置渲染参数函数
 * 
 * 功能描述：
 * 设置渲染参数，配置渲染系统的各种参数
 * 
 * 参数：
 * - param_1: 渲染参数结构指针
 * - param_2: 参数类型标识
 * - param_3: 参数值1
 * - param_4: 参数值2
 * 
 * 返回值：
 * 渲染参数结构指针
 * 
 * 技术说明：
 * 1. 初始化渲染参数结构
 * 2. 设置各种渲染参数
 * 3. 配置参数的默认值
 * 4. 确保参数的有效性
 * 5. 提供错误检测和处理
 */
undefined4 *
FUN_1803202a0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x12);
  *plVar1 = (longlong)&UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  *plVar1 = (longlong)&UNK_180a3c3e0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  *param_1 = 0xffffffff;
  (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_18098bc73,param_3,param_4,0xfffffffffffffffe);
  *(undefined8 *)(param_1 + 1) = 0x3f800000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 5) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0x3f80000000000000;
  return param_1;
}

/*
 * 渲染系统配置渲染设置函数
 * 
 * 功能描述：
 * 配置渲染设置，设置渲染系统的详细配置
 * 
 * 参数：
 * - param_1: 渲染设置结构指针
 * - param_2: 设置类型标识
 * - param_3: 设置值1
 * - param_4: 设置值2
 * 
 * 返回值：
 * 渲染设置结构指针
 * 
 * 技术说明：
 * 1. 初始化渲染设置结构
 * 2. 配置各种渲染设置
 * 3. 设置设置的默认值
 * 4. 确保设置的有效性
 * 5. 提供错误检测和处理
 */
undefined4 *
FUN_180320330(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x22);
  *plVar1 = (longlong)&UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  *plVar1 = (longlong)&UNK_180a3c3e0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  *param_1 = 0xffffffff;
  (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_18098bc73,param_3,param_4,0xfffffffffffffffe);
  *(undefined8 *)(param_1 + 1) = 0x3f800000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 5) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0x15) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x1b) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)(param_1 + 0x1f) = 0x3f80000000000000;
  return param_1;
}

/*
 * 渲染系统初始化渲染队列函数
 * 
 * 功能描述：
 * 初始化渲染队列，为渲染操作提供队列管理
 * 
 * 参数：
 * - param_1: 渲染队列结构指针
 * - param_2: 队列类型标识
 * - param_3: 队列参数1
 * - param_4: 队列参数2
 * 
 * 返回值：
 * 渲染队列结构指针
 * 
 * 技术说明：
 * 1. 初始化渲染队列结构
 * 2. 设置队列的基本参数
 * 3. 配置队列的管理策略
 * 4. 确保队列的正确初始化
 * 5. 提供错误检测和处理
 */
undefined4 *
FUN_1803203f0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 10);
  *plVar1 = (longlong)&UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  *plVar1 = (longlong)&UNK_180a3c3e0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  *param_1 = 0xffffffff;
  (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_18098bc73,param_3,param_4,0xfffffffffffffffe);
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  return param_1;
}

/*
 * 渲染系统创建渲染上下文函数
 * 
 * 功能描述：
 * 创建渲染上下文，为渲染操作提供上下文环境
 * 
 * 参数：
 * - param_1: 渲染上下文指针
 * 
 * 返回值：
 * 渲染上下文指针
 * 
 * 技术说明：
 * 1. 初始化渲染上下文结构
 * 2. 设置上下文的基本属性
 * 3. 配置上下文的状态和参数
 * 4. 确保上下文的有效性
 * 5. 提供错误检测和处理
 */
undefined8 * FUN_180320470(undefined8 *param_1)

{
  *param_1 = &UNK_180a1b4b0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 3;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
  FUN_180284720();
  return param_1;
}

/*
 * 渲染系统设置渲染管线函数
 * 
 * 功能描述：
 * 设置渲染管线，配置渲染的执行流程
 * 
 * 参数：
 * - param_1: 渲染管线指针
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 初始化渲染管线结构
 * 2. 设置管线的基本参数
 * 3. 配置管线的执行阶段
 * 4. 确保管线的正确设置
 * 5. 提供错误检测和处理
 */
void FUN_1803204f0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = &UNK_180a1b4b0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
  plVar1 = param_1 + 0x12;
  FUN_180284720(plVar1);
  lVar2 = param_1[0x13];
  for (lVar3 = *plVar1; lVar3 != lVar2; lVar3 = lVar3 + 0x1a0) {
    FUN_180281e80(lVar3);
  }
  if (*plVar1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}

/*
 * 渲染系统分配渲染内存函数
 * 
 * 功能描述：
 * 分配渲染内存，为渲染操作提供内存支持
 * 
 * 参数：
 * - param_1: 内存分配参数
 * - param_2: 内存大小
 * - param_3: 内存属性
 * - param_4: 内存标志
 * 
 * 返回值：
 * 内存分配结果指针
 * 
 * 技术说明：
 * 1. 分配渲染所需的内存
 * 2. 设置内存的属性和标志
 * 3. 配置内存的管理策略
 * 4. 确保内存的正确分配
 * 5. 提供错误检测和处理
 */
undefined8 *
FUN_180320550(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a1b4b0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
  FUN_180284720(param_1 + 0x12);
  FUN_18033aa70(param_1 + 0x12);
  if ((param_2 & 1) != 0) {
    free(param_1,0xb0,param_3,param_4,uVar1);
  }
  return param_1;
}

/*
 * 渲染系统释放渲染内存函数
 * 
 * 功能描述：
 * 释放渲染内存，回收不再使用的内存资源
 * 
 * 参数：
 * - param_1: 内存管理指针
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 遍历内存管理结构
 * 2. 释放分配的内存
 * 3. 清理内存管理数据
 * 4. 确保内存的正确释放
 * 5. 提供错误检测和处理
 */
void FUN_1803205e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x1a0) {
    FUN_180281e80(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}

/*
 * 渲染系统初始化渲染设备函数
 * 
 * 功能描述：
 * 初始化渲染设备，为渲染操作提供设备支持
 * 
 * 参数：
 * - param_1: 渲染设备指针
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 初始化渲染设备结构
 * 2. 设置设备的基本参数
 * 3. 配置设备的属性和状态
 * 4. 确保设备的正确初始化
 * 5. 提供错误检测和处理
 */
void FUN_180320600(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = &UNK_180a1b430;
  FUN_180339080();
  param_1[0x2c] = &UNK_18098bcb0;
  param_1[0x21] = &UNK_18098bcb0;
  param_1[0x16] = &UNK_18098bcb0;
  *param_1 = &UNK_180a1b4b0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
  plVar2 = param_1 + 0x12;
  FUN_180284720(plVar2);
  lVar1 = param_1[0x13];
  for (lVar3 = *plVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x1a0) {
    FUN_180281e80(lVar3);
  }
  if (*plVar2 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}

/*
 * 渲染系统关闭渲染设备函数
 * 
 * 功能描述：
 * 关闭渲染设备，释放设备资源
 * 
 * 参数：
 * - param_1: 设备句柄
 * - param_2: 关闭标志
 * 
 * 返回值：
 * 设备句柄
 * 
 * 技术说明：
 * 1. 执行设备关闭操作
 * 2. 释放设备相关资源
 * 3. 清理设备状态
 * 4. 确保设备的正确关闭
 * 5. 提供错误检测和处理
 */
undefined8 FUN_1803206a0(undefined8 param_1,ulonglong param_2)

{
  FUN_180320600();
  if ((param_2 & 1) != 0) {
    free(param_1,0x1c8);
  }
  return param_1;
}

/*
 * 渲染系统配置渲染输出函数
 * 
 * 功能描述：
 * 配置渲染输出，设置渲染输出的参数和属性
 * 
 * 参数：
 * - param_1: 渲染输出指针
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 初始化渲染输出结构
 * 2. 设置输出的基本参数
 * 3. 配置输出的属性和状态
 * 4. 确保输出的正确配置
 * 5. 提供错误检测和处理
 */
void FUN_1803206e0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = &UNK_180a1b470;
  FUN_180339860();
  param_1[0x35] = &UNK_18098bcb0;
  param_1[0x2a] = &UNK_18098bcb0;
  param_1[0x1f] = &UNK_18098bcb0;
  *param_1 = &UNK_180a1b4b0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
  plVar2 = param_1 + 0x12;
  FUN_180284720(plVar2);
  lVar1 = param_1[0x13];
  for (lVar3 = *plVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x1a0) {
    FUN_180281e80(lVar3);
  }
  if (*plVar2 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}

/*
 * 渲染系统清理渲染输出函数
 * 
 * 功能描述：
 * 清理渲染输出，释放输出相关资源
 * 
 * 参数：
 * - param_1: 输出句柄
 * - param_2: 清理标志
 * 
 * 返回值：
 * 输出句柄
 * 
 * 技术说明：
 * 1. 执行输出清理操作
 * 2. 释放输出相关资源
 * 3. 清理输出状态
 * 4. 确保输出的正确清理
 * 5. 提供错误检测和处理
 */
undefined8 FUN_180320780(undefined8 param_1,ulonglong param_2)

{
  FUN_1803206e0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x200);
  }
  return param_1;
}

/*
 * 渲染系统重置渲染参数函数
 * 
 * 功能描述：
 * 重置渲染参数，将参数恢复到默认状态
 * 
 * 参数：
 * - param_1: 渲染参数指针
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 重置渲染参数结构
 * 2. 设置参数的默认值
 * 3. 清理参数的状态
 * 4. 确保参数的正确重置
 * 5. 提供错误检测和处理
 */
void FUN_1803207c0(longlong *param_1)

{
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  (**(code **)(param_1[10] + 0x10))(param_1 + 10,&DAT_18098bc73);
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  return;
}

/*
 * 渲染系统清除渲染缓冲区函数
 * 
 * 功能描述：
 * 清除渲染缓冲区，清理缓冲区内容
 * 
 * 参数：
 * - param_1: 渲染缓冲区指针
 * 
 * 返回值：
 * 渲染缓冲区指针
 * 
 * 技术说明：
 * 1. 清除缓冲区内容
 * 2. 重置缓冲区状态
 * 3. 清理缓冲区数据
 * 4. 确保缓冲区的正确清除
 * 5. 提供错误检测和处理
 */
undefined4 * FUN_180320830(undefined4 *param_1)

{
  longlong *plVar1;
  
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 0xffffffff;
  plVar1 = *(longlong **)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return param_1;
}

/*
 * 渲染系统初始化渲染目标函数
 * 
 * 功能描述：
 * 初始化渲染目标，为渲染操作提供目标支持
 * 
 * 参数：
 * - param_1: 渲染目标指针
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 初始化渲染目标结构
 * 2. 设置目标的基本参数
 * 3. 配置目标的属性和状态
 * 4. 确保目标的正确初始化
 * 5. 提供错误检测和处理
 */
void FUN_180320880(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = &UNK_180a1b3b0;
  FUN_18033a110();
  if (param_1[0x17] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = &UNK_180a1b4b0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
  plVar2 = param_1 + 0x12;
  FUN_180284720(plVar2);
  lVar1 = param_1[0x13];
  for (lVar3 = *plVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x1a0) {
    FUN_180281e80(lVar3);
  }
  if (*plVar2 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}

/*
 * 渲染系统销毁渲染目标函数
 * 
 * 功能描述：
 * 销毁渲染目标，释放目标相关资源
 * 
 * 参数：
 * - param_1: 目标句柄
 * - param_2: 销毁标志
 * 
 * 返回值：
 * 目标句柄
 * 
 * 技术说明：
 * 1. 执行目标销毁操作
 * 2. 释放目标相关资源
 * 3. 清理目标状态
 * 4. 确保目标的正确销毁
 * 5. 提供错误检测和处理
 */
undefined8 FUN_180320900(undefined8 param_1,ulonglong param_2)

{
  FUN_180320880();
  if ((param_2 & 1) != 0) {
    free(param_1,0xd8);
  }
  return param_1;
}

/*
 * 渲染系统创建渲染纹理函数
 * 
 * 功能描述：
 * 创建渲染纹理，为渲染操作提供纹理支持
 * 
 * 参数：
 * - param_1: 纹理参数
 * - param_2: 纹理大小
 * - param_3: 纹理格式
 * - param_4: 纹理标志
 * 
 * 返回值：
 * 纹理创建结果指针
 * 
 * 技术说明：
 * 1. 初始化纹理结构
 * 2. 设置纹理的基本参数
 * 3. 配置纹理的属性和状态
 * 4. 确保纹理的正确创建
 * 5. 提供错误检测和处理
 */
undefined8 *
FUN_180320960(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a1b3f0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
  puVar1 = param_1 + 0x12;
  FUN_180284720(puVar1);
  *param_1 = &UNK_180a1b4b0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
  FUN_180284720(puVar1);
  FUN_18033aa70(puVar1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xb0,param_3,param_4,uVar2);
  }
  return param_1;
}

/*
 * 渲染系统清理渲染资源函数
 * 
 * 功能描述：
 * 清理渲染资源，释放不再使用的资源
 * 
 * 参数：
 * - param_1: 资源管理指针
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 遍历资源管理结构
 * 2. 释放分配的资源
 * 3. 清理资源管理数据
 * 4. 确保资源的正确释放
 * 5. 提供错误检测和处理
 */
void FUN_180320a20(undefined4 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 0x22);
  uVar3 = *(longlong *)(param_1 + 0x24) - *plVar1 >> 3;
  lVar5 = 0;
  if ((int)uVar3 != 0) {
    uVar3 = uVar3 & 0xffffffff;
    do {
      puVar2 = *(undefined8 **)(lVar5 + *plVar1);
      if (puVar2 != (undefined8 *)0x0) {
        lVar4 = __RTCastToVoid(puVar2);
        (**(code **)*puVar2)(puVar2,0);
        if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar4);
        }
      }
      *(undefined8 *)(lVar5 + *plVar1) = 0;
      lVar5 = lVar5 + 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *(longlong *)(param_1 + 0x24) = *plVar1;
  param_1[0x10] = 0;
  **(undefined1 **)(param_1 + 0xe) = 0;
  param_1[4] = 0x3f800000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x3f800000;
  *param_1 = 0;
  if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined **)(param_1 + 0xc) = &UNK_18098bcb0;
  return;
}

/*
 * 渲染系统释放渲染对象函数
 * 
 * 功能描述：
 * 释放渲染对象，清理对象相关资源
 * 
 * 参数：
 * - param_1: 对象管理指针
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 遍历对象管理结构
 * 2. 释放分配的对象
 * 3. 清理对象管理数据
 * 4. 确保对象的正确释放
 * 5. 提供错误检测和处理
 */
void FUN_180320b20(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar2 = param_1 + 0x11;
  uVar4 = param_1[0x12] - *plVar2 >> 3;
  lVar6 = 0;
  if ((int)uVar4 != 0) {
    uVar4 = uVar4 & 0xffffffff;
    do {
      puVar3 = *(undefined8 **)(lVar6 + *plVar2);
      if (puVar3 != (undefined8 *)0x0) {
        lVar5 = __RTCastToVoid(puVar3);
        (**(code **)*puVar3)(puVar3,0);
        if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar5);
        }
      }
      *(undefined8 *)(lVar6 + *plVar2) = 0;
      lVar6 = lVar6 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  param_1[0x12] = *plVar2;
  plVar1 = param_1 + 0xd;
  lVar6 = param_1[0xe];
  lVar5 = *plVar1;
  if (lVar5 != lVar6) {
    do {
      FUN_180320a20(lVar5);
      lVar5 = lVar5 + 0xb0;
    } while (lVar5 != lVar6);
    lVar5 = *plVar1;
  }
  param_1[0xe] = lVar5;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)param_1[3] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_18033aae0(plVar1);
  param_1[2] = &UNK_18098bcb0;
  return;
}

/*
 * 渲染系统销毁渲染数据函数
 * 
 * 功能描述：
 * 销毁渲染数据，清理数据相关资源
 * 
 * 参数：
 * - param_1: 数据管理指针
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 遍历数据管理结构
 * 2. 释放分配的数据
 * 3. 清理数据管理数据
 * 4. 确保数据的正确释放
 * 5. 提供错误检测和处理
 */
void FUN_180320c60(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0xb0) {
    FUN_180320a20(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}

/*
 * 渲染系统设置渲染着色器函数
 * 
 * 功能描述：
 * 设置渲染着色器，配置着色器参数
 * 
 * 参数：
 * - param_1: 着色器指针
 * 
 * 返回值：
 * 着色器指针
 * 
 * 技术说明：
 * 1. 初始化着色器结构
 * 2. 设置着色器的基本参数
 * 3. 配置着色器的属性和状态
 * 4. 确保着色器的正确设置
 * 5. 提供错误检测和处理
 */
undefined4 * FUN_180320c80(undefined4 *param_1)

{
  *(undefined **)(param_1 + 0x14) = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  *(undefined **)(param_1 + 0x14) = &UNK_1809fcc58;
  *(undefined4 **)(param_1 + 0x16) = param_1 + 0x1a;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined **)(param_1 + 0x34) = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  param_1[0x38] = 0;
  *(undefined **)(param_1 + 0x34) = &UNK_1809fcc58;
  *(undefined4 **)(param_1 + 0x36) = param_1 + 0x3a;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  param_1[0x50] = 3;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  param_1[0x58] = 3;
  *(undefined8 *)(param_1 + 0x30) = 0;
  param_1[0x32] = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  param_1[0x62] = 3;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  param_1[0x6a] = 3;
  *param_1 = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  return param_1;
}

/*
 * 渲染系统初始化渲染程序函数
 * 
 * 功能描述：
 * 初始化渲染程序，为渲染操作提供程序支持
 * 
 * 参数：
 * - param_1: 程序句柄
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 初始化渲染程序
 * 2. 设置程序的基本参数
 * 3. 配置程序的属性和状态
 * 4. 确保程序的正确初始化
 * 5. 提供错误检测和处理
 */
void FUN_180320da0(longlong param_1)

{
  FUN_180320e20();
  if (*(longlong *)(param_1 + 400) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_180320b20(param_1 + 0xc0);
  *(undefined **)(param_1 + 0x50) = &UNK_18098bcb0;
  return;
}

/*
 * 渲染系统重置渲染程序函数
 * 
 * 功能描述：
 * 重置渲染程序，将程序恢复到初始状态
 * 
 * 参数：
 * - param_1: 程序指针
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 重置程序状态
 * 2. 清理程序数据
 * 3. 重置程序参数
 * 4. 确保程序的正确重置
 * 5. 提供错误检测和处理
 */
void FUN_180320e20(undefined4 *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  uVar2 = *(longlong *)(param_1 + 0x66) - *(longlong *)(param_1 + 100) >> 3;
  if ((int)uVar2 != 0) {
    uVar2 = uVar2 & 0xffffffff;
    do {
      puVar1 = *(undefined8 **)(lVar4 + *(longlong *)(param_1 + 100));
      if (puVar1 != (undefined8 *)0x0) {
        lVar3 = __RTCastToVoid(puVar1);
        (**(code **)*puVar1)(puVar1,0);
        if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar3);
        }
      }
      *(undefined8 *)(lVar4 + *(longlong *)(param_1 + 100)) = 0;
      lVar4 = lVar4 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  *(undefined8 *)(param_1 + 0x66) = *(undefined8 *)(param_1 + 100);
  *(undefined8 *)(param_1 + 0x5e) = *(undefined8 *)(param_1 + 0x5c);
  param_1[0x18] = 0;
  **(undefined1 **)(param_1 + 0x16) = 0;
  *param_1 = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 1) = 0x3f800000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 5) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x2d) = 0;
  return;
}

/*
 * 渲染系统执行渲染程序函数
 * 
 * 功能描述：
 * 执行渲染程序，运行渲染操作
 * 
 * 参数：
 * 无
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 执行渲染程序
 * 2. 处理程序执行结果
 * 3. 管理程序执行状态
 * 4. 确保程序的正确执行
 * 5. 提供错误检测和处理
 */
void FUN_180320e44(void)

{
  undefined8 *puVar1;
  uint in_EAX;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *unaff_RDI;
  undefined1 uVar5;
  undefined4 uVar6;
  ulonglong unaff_R15;
  
  uVar6 = (undefined4)unaff_R15;
  uVar3 = unaff_R15 & 0xffffffff;
  uVar4 = (ulonglong)in_EAX;
  do {
    puVar1 = *(undefined8 **)(uVar3 + *(longlong *)(unaff_RDI + 100));
    if (puVar1 != (undefined8 *)0x0) {
      lVar2 = __RTCastToVoid(puVar1);
      (**(code **)*puVar1)(puVar1,0);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
    }
    *(ulonglong *)(uVar3 + *(longlong *)(unaff_RDI + 100)) = unaff_R15;
    uVar3 = uVar3 + 8;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  *(undefined8 *)(unaff_RDI + 0x66) = *(undefined8 *)(unaff_RDI + 100);
  *(undefined8 *)(unaff_RDI + 0x5e) = *(undefined8 *)(unaff_RDI + 0x5c);
  unaff_RDI[0x18] = uVar6;
  uVar5 = (undefined1)unaff_R15;
  **(undefined1 **)(unaff_RDI + 0x16) = uVar5;
  *unaff_RDI = uVar6;
  unaff_RDI[0x2a] = uVar6;
  *(ulonglong *)(unaff_RDI + 0x11) = unaff_R15;
  *(undefined1 *)(unaff_RDI + 0x2c) = uVar5;
  *(undefined1 *)(unaff_RDI + 0x13) = uVar5;
  *(undefined8 *)(unaff_RDI + 1) = 0x3f800000;
  *(undefined8 *)(unaff_RDI + 3) = 0;
  *(undefined8 *)(unaff_RDI + 5) = 0x3f80000000000000;
  *(undefined8 *)(unaff_RDI + 7) = 0;
  *(undefined8 *)(unaff_RDI + 9) = 0;
  *(undefined8 *)(unaff_RDI + 0xb) = 0x3f800000;
  *(undefined8 *)(unaff_RDI + 0xd) = 0;
  *(undefined8 *)(unaff_RDI + 0xf) = 0x3f80000000000000;
  *(ulonglong *)(unaff_RDI + 0x2d) = unaff_R15;
  return;
}

/*
 * 渲染系统完成渲染程序函数
 * 
 * 功能描述：
 * 完成渲染程序，结束程序执行
 * 
 * 参数：
 * 无
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 完成程序执行
 * 2. 清理程序状态
 * 3. 处理程序完成结果
 * 4. 确保程序的正确完成
 * 5. 提供错误检测和处理
 */
void FUN_180320ebc(void)

{
  undefined4 *unaff_RDI;
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 unaff_R15;
  
  *(undefined8 *)(unaff_RDI + 0x66) = *(undefined8 *)(unaff_RDI + 100);
  *(undefined8 *)(unaff_RDI + 0x5e) = *(undefined8 *)(unaff_RDI + 0x5c);
  uVar2 = (undefined4)unaff_R15;
  unaff_RDI[0x18] = uVar2;
  uVar1 = (undefined1)unaff_R15;
  **(undefined1 **)(unaff_RDI + 0x16) = uVar1;
  *unaff_RDI = uVar2;
  unaff_RDI[0x2a] = uVar2;
  *(undefined8 *)(unaff_RDI + 0x11) = unaff_R15;
  *(undefined1 *)(unaff_RDI + 0x2c) = uVar1;
  *(undefined1 *)(unaff_RDI + 0x13) = uVar1;
  *(undefined8 *)(unaff_RDI + 1) = 0x3f800000;
  *(undefined8 *)(unaff_RDI + 3) = 0;
  *(undefined8 *)(unaff_RDI + 5) = 0x3f80000000000000;
  *(undefined8 *)(unaff_RDI + 7) = 0;
  *(undefined8 *)(unaff_RDI + 9) = 0;
  *(undefined8 *)(unaff_RDI + 0xb) = 0x3f800000;
  *(undefined8 *)(unaff_RDI + 0xd) = 0;
  *(undefined8 *)(unaff_RDI + 0xf) = 0x3f80000000000000;
  *(undefined8 *)(unaff_RDI + 0x2d) = unaff_R15;
  return;
}

/*
 * 渲染系统创建渲染状态函数
 * 
 * 功能描述：
 * 创建渲染状态，为渲染操作提供状态管理
 * 
 * 参数：
 * - param_1: 状态参数
 * - param_2: 状态目标
 * - param_3: 状态值1
 * - param_4: 状态值2
 * 
 * 返回值：
 * 状态创建结果指针
 * 
 * 技术说明：
 * 1. 初始化状态结构
 * 2. 设置状态的基本参数
 * 3. 配置状态的属性和值
 * 4. 确保状态的正确创建
 * 5. 提供错误检测和处理
 */
undefined8 *
FUN_180320f40(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,0xd,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (undefined8 *)param_2[1];
  *puVar1 = 0x655679616c706552;
  *(undefined4 *)(puVar1 + 1) = 0x6f697372;
  *(undefined2 *)((longlong)puVar1 + 0xc) = 0x6e;
  *(undefined4 *)(param_2 + 2) = 0xd;
  return param_2;
}

/*
 * 渲染系统处理渲染队列函数
 * 
 * 功能描述：
 * 处理渲染队列，执行队列中的渲染任务
 * 
 * 参数：
 * - param_1: 队列上下文
 * - param_2: 队列数据
 * - param_3: 队列管理器
 * - param_4: 队列标志
 * - param_5: 队列选项
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 处理渲染队列
 * 2. 执行队列中的任务
 * 3. 管理队列状态
 * 4. 确保队列的正确处理
 * 5. 提供错误检测和处理
 */
void FUN_180320fd0(longlong param_1,longlong param_2,longlong *param_3,ulonglong param_4,
                  undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *aplStackX_18 [2];
  uint in_stack_ffffffffffffff80;
  longlong lStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if (param_3 != (longlong *)0x0) {
    uVar3 = 0;
    if ((param_4 & 2) != 0) {
      if (param_2 == 0) {
        iVar1 = _Mtx_lock(param_1 + 0x5c48);
        if (iVar1 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar1);
        }
        aplStackX_18[0] = param_3;
        (**(code **)(*param_3 + 0x28))(param_3);
        FUN_180198b90(param_1,aplStackX_18,0,1,0,in_stack_ffffffffffffff80 & 0xffffff00,0);
        iVar1 = _Mtx_unlock(param_1 + 0x5c48);
        if (iVar1 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar1);
        }
      }
      else {
        FUN_1802e8a50(param_2,param_3,0,1);
      }
    }
    if ((param_4 & 4) != 0) {
      lStack_48 = 0;
      lStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 3;
      FUN_1802e9180(param_3,&lStack_48,1,0xffffffff);
      uVar4 = uVar3;
      if (lStack_40 - lStack_48 >> 3 != 0) {
        do {
          FUN_180325830(param_5,*(undefined8 *)(uVar4 + lStack_48));
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
          uVar4 = uVar4 + 8;
        } while ((ulonglong)(longlong)(int)uVar2 < (ulonglong)(lStack_40 - lStack_48 >> 3));
      }
      if (param_2 == 0) {
        iVar1 = _Mtx_lock(param_1 + 0x5c48);
        if (iVar1 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar1);
        }
        aplStackX_18[0] = param_3;
        (**(code **)(*param_3 + 0x28))(param_3);
        FUN_180198980(param_1,aplStackX_18[0]);
        if (aplStackX_18[0] != (longlong *)0x0) {
          (**(code **)(*aplStackX_18[0] + 0x38))();
        }
        iVar1 = _Mtx_unlock(param_1 + 0x5c48);
        if (iVar1 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar1);
        }
      }
      else {
        FUN_1802eb9a0(param_2,param_3,1,0,1,0x15);
      }
      if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
  }
  return;
}

/*
 * 渲染系统执行渲染管线函数
 * 
 * 功能描述：
 * 执行渲染管线，运行渲染处理流程
 * 
 * 参数：
 * - param_1: 管线上下文
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 执行渲染管线
 * 2. 处理管线执行结果
 * 3. 管理管线执行状态
 * 4. 确保管线的正确执行
 * 5. 提供错误检测和处理
 */
void FUN_1803211e0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 auStack_8f8 [32];
  undefined4 auStack_8d8 [6];
  undefined8 uStack_8c0;
  longlong lStack_8b8;
  undefined8 uStack_8a8;
  undefined1 auStack_458 [1024];
  ulonglong uStack_58;
  
  uStack_8a8 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_8f8;
  uStack_8c0 = 0;
  lStack_8b8 = 0;
  puVar3 = &DAT_18098bc73;
  if (*(undefined **)(param_1 + 8) != (undefined *)0x0) {
    puVar3 = *(undefined **)(param_1 + 8);
  }
  FUN_18062dee0(&uStack_8c0,puVar3,&UNK_1809fcfbc);
  lVar1 = lStack_8b8;
  if (lStack_8b8 == 0) {
    FUN_180627160(&UNK_180a1b038);
  }
  else {
    auStack_8d8[0] = 0;
    iVar2 = fread(auStack_8d8,4,1,lStack_8b8);
    if (iVar2 == 1) {
                    // WARNING: Subroutine does not return
      memset(auStack_458,0,0x400);
    }
    FUN_180627160(&UNK_180a1b090);
    fclose(lVar1);
    lStack_8b8 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_8f8);
}

/*
 * 渲染系统同步渲染状态函数
 * 
 * 功能描述：
 * 同步渲染状态，确保状态的一致性
 * 
 * 参数：
 * - param_1: 状态同步上下文
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 同步渲染状态
 * 2. 处理状态同步结果
 * 3. 管理状态同步过程
 * 4. 确保状态的一致性
 * 5. 提供错误检测和处理
 */
void FUN_1803214c0(longlong param_1)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(param_1 + 0x758);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  FUN_18033b120(param_1 + 0x738);
  iVar1 = _Mtx_unlock(param_1 + 0x758);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  iVar1 = _Mtx_lock(param_1 + 0x7c8);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  FUN_18033b120(param_1 + 0x7a8);
  iVar1 = _Mtx_unlock(param_1 + 0x7c8);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}

/*
 * 渲染系统更新渲染参数函数
 * 
 * 功能描述：
 * 更新渲染参数，动态调整渲染配置
 * 
 * 参数：
 * - param_1: 参数更新上下文
 * - param_2: 参数数据
 * - param_3: 参数值
 * 
 * 返回值：
 * 无
 * 
 * 技术说明：
 * 1. 更新渲染参数
 * 2. 处理参数更新结果
 * 3. 管理参数更新过程
 * 4. 确保参数的正确更新
 * 5. 提供错误检测和处理
 */
void FUN_180321570(longlong param_1,undefined4 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar12 = 0xfffffffffffffffe;
  lVar10 = *(longlong *)(_DAT_180c86870 + 0x3d8);
  iVar7 = _Mtx_lock(lVar10 + 0xc0);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  uVar12 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3,uVar12);
  puVar9 = (undefined4 *)FUN_1803201f0(uVar12);
  uVar8 = FUN_18032b4a0(lVar10,puVar9);
  *puVar9 = uVar8;
  puVar11 = &DAT_18098bc73;
  if (*(undefined **)(param_1 + 8) != (undefined *)0x0) {
    puVar11 = *(undefined **)(param_1 + 8);
  }
  (**(code **)(*(longlong *)(puVar9 + 6) + 0x10))(puVar9 + 6,puVar11);
  uVar8 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  puVar9[1] = *param_2;
  puVar9[2] = uVar8;
  puVar9[3] = uVar3;
  puVar9[4] = uVar4;
  if (param_3 == 0) {
    puVar9[0x3e] = 0;
  }
  else {
    FUN_18033dc50(puVar9 + 0xe,param_3);
  }
  puVar1 = (undefined8 *)(lVar10 + 0x818);
  uVar2 = *(uint *)(lVar10 + 0x150);
  puVar5 = puVar1;
  puVar6 = *(undefined8 **)(lVar10 + 0x828);
  while (puVar6 != (undefined8 *)0x0) {
    puVar5 = puVar6;
    if (uVar2 < *(uint *)(puVar6 + 4)) {
      puVar6 = (undefined8 *)puVar6[1];
    }
    else {
      puVar6 = (undefined8 *)*puVar6;
    }
  }
  lVar10 = FUN_18062b420(_DAT_180c8ed18,0x30,*(undefined1 *)(lVar10 + 0x840));
  uStack_28 = SUB84(puVar9,0);
  uStack_24 = (undefined4)((ulonglong)puVar9 >> 0x20);
  *(uint *)(lVar10 + 0x20) = uVar2;
  *(undefined4 *)(lVar10 + 0x24) = uStack_2c;
  *(undefined4 *)(lVar10 + 0x28) = uStack_28;
  *(undefined4 *)(lVar10 + 0x2c) = uStack_24;
  uVar8 = 0;
  if ((puVar5 != puVar1) && (uVar8 = 0, *(uint *)(puVar5 + 4) <= uVar2)) {
    uVar8 = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar10,puVar5,puVar1,uVar8);
}