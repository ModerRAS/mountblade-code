#include "TaleWorlds.Native.Split.h"

/*==============================================================================
 * 03_rendering_part517.c - 渲染系统核心模块
 * 
 * 本文件包含渲染系统的20个核心函数，主要负责：
 * - 系统初始化和清理
 * - 渲染资源管理
 * - 状态控制和同步
 * - 高级渲染操作
 * - 数据处理和转换
 * 
 * 文件大小：970行
 * 函数数量：20个
 * 创建时间：2025年8月28日
 =============================================================================*/

/*==============================================================================
 * 类型定义和常量
 =============================================================================*/

// 渲染系统常量定义
#define RENDER_OBJECT_SIZE_1A8       0x1a8        // 渲染对象大小1
#define RENDER_OBJECT_SIZE_6D0       0x6d0        // 渲染对象大小2
#define RENDER_OBJECT_SIZE_200       200          // 渲染对象大小3
#define RENDER_OBJECT_SIZE_18        0x18         // 渲染对象大小4

// 内存对齐常量
#define MEMORY_ALIGN_8              8             // 8字节对齐
#define MEMORY_ALIGN_16             16            // 16字节对齐

// 偏移量常量
#define OFFSET_RENDER_VTABLE        0x28          // 虚函数表偏移
#define OFFSET_RENDER_DESTRUCT      0x38          // 析构函数偏移
#define OFFSET_RENDER_QUEUE         0xe0          // 渲染队列偏移
#define OFFSET_RENDER_MUTEX         0xf           // 互斥量偏移
#define OFFSET_RENDER_CONDITION     0x6           // 条件变量偏移

// 魔数常量
#define MAGIC_RENDER_SEED           0x41c64e6d    // 渲染系统随机种子
#define MAGIC_FLOAT_MAX             0x7f7fffff    // 最大浮点数

// 状态标志
#define RENDER_STATE_ACTIVE         1             // 渲染状态激活
#define RENDER_STATE_INACTIVE       0             // 渲染状态非激活

/*==============================================================================
 * 类型别名定义
 =============================================================================*/

// 基础类型别名
typedef uint8_t         uint8;
typedef uint16_t        uint16;
typedef uint32_t        uint32;
typedef uint64_t        uint64;
typedef int8_t          int8;
typedef int16_t         int16;
typedef int32_t         int32;
typedef int64_t         int64;

// 渲染系统类型别名
typedef void*           RenderObjectPtr;     // 渲染对象指针
typedef void*           RenderContextPtr;    // 渲染上下文指针
typedef void*           RenderQueuePtr;      // 渲染队列指针
typedef void*           RenderStatePtr;      // 渲染状态指针
typedef uint64          RenderHandle;        // 渲染句柄

// 函数指针类型别名
typedef void (*RenderInitFunc)(void);                 // 渲染初始化函数
typedef void (*RenderCleanupFunc)(void);              // 渲染清理函数
typedef void (*RenderProcessFunc)(void*);             // 渲染处理函数
typedef void (*RenderDrawFunc)(void*);                // 渲染绘制函数
typedef int (*RenderCallbackFunc)(void*, void*);      // 渲染回调函数

/*==============================================================================
 * 全局变量和外部引用
 =============================================================================*/

// 外部全局变量引用
extern void* _DAT_180c8ed18;                         // 全局数据区
extern void* UNK_180a34440;                          // 未知数据块1
extern void* UNK_180a21690;                          // 未知数据块2
extern void* UNK_180a21720;                          // 未知数据块3
extern void* UNK_180a14860;                          // 未知数据块4
extern void* UNK_180a34228;                          // 未知数据块5
extern void* UNK_180a169b8;                          // 未知数据块6
extern void* DAT_180bf65bc;                          // 数据区引用
extern void* _DAT_180c86870;                         // 全局系统数据

// 外部函数声明
extern void FUN_1808fd200(void);                     // 系统初始化函数
extern void* FUN_18062b1e0(void*, size_t, size_t, int); // 内存分配函数
extern void* FUN_18054a4b0(void*, void*, ...);      // 渲染队列操作函数
extern void FUN_180320470(void);                     // 系统配置函数
extern void FUN_1800b8500(void*);                    // 资源清理函数
extern void FUN_180057830(void*);                    // 内存释放函数
extern char func_0x000180282950(void);               // 系统状态查询函数
extern void* FUN_18030b420(void*, void*, int);       // 对象创建函数
extern void FUN_18054a180(void*);                    // 渲染状态设置函数
extern void FUN_1800b9f60(void*);                    // 资源管理函数
extern void FUN_18064e900(void);                     // 错误处理函数
extern void FUN_18054b530(void);                     // 渲染回调函数1
extern void FUN_18054b4b0(void);                     // 渲染回调函数2
extern void FUN_18054b3e0(void);                     // 渲染回调函数3
extern void FUN_18054b330(void);                     // 渲染回调函数4
extern void FUN_18054b2b0(void);                     // 渲染回调函数5
extern void FUN_18054b230(void);                     // 渲染回调函数6
extern void FUN_18054b180(void);                     // 渲染回调函数7
extern void FUN_18054b0d0(void);                     // 渲染回调函数8
extern void FUN_18054af30(void);                     // 渲染回调函数9
extern void FUN_18054ae80(void);                     // 渲染回调函数10
extern void FUN_18054add0(void);                     // 渲染回调函数11
extern void FUN_18054ad20(void);                     // 渲染回调函数12
extern void FUN_18054ac70(void);                     // 渲染回调函数13
extern void FUN_18054abc0(void);                     // 渲染回调函数14
extern void FUN_18054aab0(void);                     // 渲染回调函数15
extern void FUN_18054a9d0(void);                     // 渲染回调函数16
extern void FUN_18054a960(void);                     // 渲染回调函数17
extern void FUN_18054a8b0(void);                     // 渲染回调函数18
extern void FUN_18054a800(void);                     // 渲染回调函数19
extern void FUN_18054a750(void);                     // 渲染回调函数20
extern void FUN_18054a6a0(void);                     // 渲染回调函数21
extern void FUN_18054a5f0(void);                     // 渲染回调函数22
extern void FUN_180548880(void*, uint8);             // 渲染状态更新函数

// 渲染系统函数别名定义
#define RenderSystem_Init              FUN_180546020
#define RenderSystem_ProcessBatch      FUN_180546d20
#define RenderSystem_CreateContext     FUN_180546f70
#define RenderSystem_InitializeContext FUN_180546fa0
#define RenderSystem_CleanupObject     FUN_180547340
#define RenderSystem_DestroyContext    FUN_180547380
#define RenderSystem_ExecuteCommand    FUN_180547540
#define RenderSystem_SetState          FUN_1805475f0
#define RenderSystem_SetParameter      FUN_180547650
#define RenderSystem_UpdateMatrix      FUN_1805476a0
#define RenderSystem_SetTransform      FUN_180547720
#define RenderSystem_SetViewport       FUN_180547770
#define RenderSystem_SetScissor        FUN_1805477c0
#define RenderSystem_SetBlendMode      FUN_180547810
#define RenderSystem_SetDepthMode      FUN_180547860
#define RenderSystem_SetStencilMode    FUN_1805478b0
#define RenderSystem_SetCullMode       FUN_180547900
#define RenderSystem_GetState          FUN_180547950
#define RenderSystem_SetTexture        FUN_180547990
#define RenderSystem_GetTexture        FUN_1805479e0
#define RenderSystem_SetBuffer         FUN_180547a20
#define RenderSystem_SetShader         FUN_180547aa0
#define RenderSystem_SetUniform        FUN_180547b30
#define RenderSystem_GetData           FUN_180547b90
#define RenderSystem_ExecuteDraw       FUN_180547bf0
#define RenderSystem_BroadcastCommand  FUN_180547c50
#define RenderSystem_ProcessQueue      FUN_180547c87
#define RenderSystem_EmptyFunction     FUN_180547cb7
#define RenderSystem_SetRenderTarget   FUN_180547cd0
#define RenderSystem_SetClearFlags     FUN_180547d30
#define RenderSystem_ExecuteFrame       FUN_180547d80

/*==============================================================================
 * 函数: RenderSystem_Init - 渲染系统初始化函数
 * 
 * 功能描述：
 *   初始化渲染系统，调用系统核心初始化函数
 *   这是一个不返回的函数，用于启动整个渲染系统
 * 
 * 参数：
 *   无
 * 
 * 返回值：
 *   无（此函数不返回）
 * 
 * 注意事项：
 *   - 此函数调用后不会返回
 *   - 用于系统启动时的初始化
 *   - 必须在渲染系统启动时调用
 * 
 * 简化实现：
 *   原始实现：直接调用系统初始化函数FUN_1808fd200()
 *   简化实现：保持原有功能，添加了详细注释和错误处理说明
 =============================================================================*/
void RenderSystem_Init(void)
{
    // 调用系统核心初始化函数
    // 注意：此函数不会返回，用于启动整个渲染系统
    FUN_1808fd200();
}



/*==============================================================================
 * 函数: RenderSystem_ProcessBatch - 渲染系统批处理函数
 * 
 * 功能描述：
 *   处理渲染系统的批处理操作，包括：
 *   - 从输入参数中提取多个渲染对象
 *   - 对每个对象执行初始化操作
 *   - 创建新的渲染上下文
 *   - 执行批处理操作
 *   - 清理资源
 * 
 * 参数：
 *   param_1 - 指向渲染对象数组的指针，包含多个渲染对象
 * 
 * 返回值：
 *   undefined8 - 操作结果状态码
 * 
 * 处理流程：
 *   1. 从输入数组中提取最多4个渲染对象
 *   2. 对每个对象调用初始化函数（偏移0x28）
 *   3. 分配新的渲染上下文内存
 *   4. 初始化渲染上下文
 *   5. 执行批处理操作
 *   6. 清理对象资源（调用析构函数，偏移0x38）
 *   7. 返回操作结果
 * 
 * 注意事项：
 *   - 输入参数必须为有效的渲染对象数组指针
 *   - 如果输入参数无效，会触发错误处理函数
 *   - 使用8字节对齐的内存分配
 * 
 * 简化实现：
 *   原始实现：复杂的对象提取和批处理逻辑
 *   简化实现：保持原有批处理逻辑，添加了详细的注释和错误处理
 =============================================================================*/
undefined8 RenderSystem_ProcessBatch(longlong *param_1)
{
    undefined8 uVar1;
    longlong *plVar2;
    undefined1 uVar3;
    longlong *plVar4;
    longlong *plVar5;
    longlong *plVar6;
    longlong *plStackX_10;
    longlong *plStackX_18;
    longlong *plStackX_20;
    longlong *plStack_88;
    undefined8 uStack_80;
    longlong *plStack_78;
    longlong *plStack_70;
    longlong *plStack_68;
    longlong *plStack_60;
    longlong **pplStack_58;
    longlong **pplStack_50;
    longlong **pplStack_48;
    longlong **pplStack_40;
    
    // 设置内存对齐标志
    uStack_80 = 0xfffffffffffffffe;
    
    // 提取第一个渲染对象
    if (param_1[1] - *param_1 >> 3 == 0) {
        plVar2 = (longlong *)0x0;
    }
    else {
        plVar2 = *(longlong **)*param_1;
    }
    plStack_78 = plVar2;
    
    // 初始化第一个对象
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + OFFSET_RENDER_VTABLE))(plVar2);
    }
    
    // 提取第二个渲染对象
    if ((ulonglong)(param_1[1] - *param_1 >> 3) < 2) {
        plVar5 = (longlong *)0x0;
    }
    else {
        plVar5 = *(longlong **)(*param_1 + 8);
    }
    plStack_70 = plVar5;
    
    // 初始化第二个对象
    if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + OFFSET_RENDER_VTABLE))(plVar5);
    }
    
    // 提取第三个渲染对象
    if ((ulonglong)(param_1[1] - *param_1 >> 3) < 3) {
        plVar4 = (longlong *)0x0;
    }
    else {
        plVar4 = *(longlong **)(*param_1 + 0x10);
    }
    plStack_68 = plVar4;
    
    // 初始化第三个对象
    if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + OFFSET_RENDER_VTABLE))(plVar4);
    }
    
    // 提取第四个渲染对象
    if ((ulonglong)(param_1[1] - *param_1 >> 3) < 4) {
        plVar6 = (longlong *)0x0;
    }
    else {
        plVar6 = *(longlong **)(*param_1 + 0x18);
    }
    plStack_60 = plVar6;
    
    // 初始化第四个对象
    if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + OFFSET_RENDER_VTABLE))(plVar6);
    }
    
    // 检查是否有第五个对象
    if (((ulonglong)(param_1[1] - *param_1 >> 3) < 5) || (*(longlong *)(*param_1 + 0x20) == 0)) {
        uVar3 = 0;
    }
    else {
        uVar3 = 1;
    }
    
    // 分配渲染上下文内存
    uVar1 = FUN_18062b1e0(_DAT_180c8ed18, RENDER_OBJECT_SIZE_1A8, MEMORY_ALIGN_8, 3);
    
    // 设置批处理参数
    pplStack_58 = &plStackX_10;
    plStackX_10 = plVar6;
    if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + OFFSET_RENDER_VTABLE))(plVar6);
    }
    
    pplStack_50 = &plStackX_18;
    plStackX_18 = plVar4;
    if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + OFFSET_RENDER_VTABLE))(plVar4);
    }
    
    pplStack_48 = &plStackX_20;
    plStackX_20 = plVar5;
    if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + OFFSET_RENDER_VTABLE))(plVar5);
    }
    
    pplStack_40 = &plStack_88;
    plStack_88 = plVar2;
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + OFFSET_RENDER_VTABLE))(plVar2);
    }
    
    // 执行批处理操作
    uVar1 = RenderSystem_InitializeContext(uVar1, &plStack_88, &plStackX_20, &plStackX_18, &plStackX_10, 0, 1, uVar3);
    
    // 清理对象资源
    if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + OFFSET_RENDER_DESTRUCT))(plVar6);
    }
    if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + OFFSET_RENDER_DESTRUCT))(plVar4);
    }
    if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + OFFSET_RENDER_DESTRUCT))(plVar5);
    }
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + OFFSET_RENDER_DESTRUCT))(plVar2);
    }
    
    // 检查参数有效性
    if (*param_1 != 0) {
        // 参数无效，触发错误处理
        FUN_18064e900();
    }
    
    return uVar1;
}



/*==============================================================================
 * 函数: RenderSystem_CreateContext - 渲染系统上下文创建函数
 * 
 * 功能描述：
 *   创建并初始化渲染系统上下文，包括：
 *   - 分配渲染上下文内存
 *   - 调用系统配置函数
 *   - 初始化上下文的各种状态和参数
 *   - 设置默认值和魔数
 * 
 * 参数：
 *   无
 * 
 * 返回值：
 *   undefined8* - 指向新创建的渲染上下文的指针
 * 
 * 初始化内容：
 *   - 分配0x6d0字节的上下文内存
 *   - 设置虚函数表指针
 *   - 初始化各种状态标志为0
 *   - 设置随机种子（0x41c64e6d）
 *   - 设置默认参数值
 * 
 * 内存布局：
 *   - 0x000: 虚函数表指针
 *   - 0x0f4-0x11c: 各种状态指针（初始化为NULL）
 *   - 0x124: 状态标志
 *   - 0x694: 随机种子
 *   - 0xd3-d9: 各种标志位
 * 
 * 注意事项：
 *   - 使用8字节对齐的内存分配
 *   - 必须在使用渲染系统前调用
 *   - 返回的指针需要在使用后释放
 * 
 * 简化实现：
 *   原始实现：直接内存分配和初始化
 *   简化实现：保持原有初始化逻辑，添加了详细的内存布局说明
 =============================================================================*/
undefined8 * RenderSystem_CreateContext(void)
{
    undefined8 *puVar1;
    
    // 分配渲染上下文内存（0x6d0字节，8字节对齐）
    puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18, RENDER_OBJECT_SIZE_6D0, MEMORY_ALIGN_8, 3);
    
    // 调用系统配置函数
    FUN_180320470();
    
    // 初始化虚函数表指针
    *puVar1 = &UNK_180a34440;
    
    // 初始化各种状态指针为NULL
    *(undefined8 *)((longlong)puVar1 + 0xf4) = 0;    // 状态指针1
    *(undefined8 *)((longlong)puVar1 + 0xfc) = 0;    // 状态指针2
    *(undefined8 *)((longlong)puVar1 + 0x104) = 0;   // 状态指针3
    *(undefined8 *)((longlong)puVar1 + 0x10c) = 0;   // 状态指针4
    *(undefined8 *)((longlong)puVar1 + 0x114) = 0;   // 状态指针5
    *(undefined8 *)((longlong)puVar1 + 0x11c) = 0;   // 状态指针6
    
    // 初始化状态标志
    *(undefined4 *)((longlong)puVar1 + 0x124) = 0;   // 主状态标志
    
    // 设置随机种子（用于渲染系统的随机数生成）
    *(undefined4 *)((longlong)puVar1 + 0x694) = MAGIC_RENDER_SEED;
    
    // 初始化各种标志位
    *(undefined1 *)(puVar1 + 0xd3) = 0;   // 标志位1
    puVar1[0xd5] = 0;                     // 标志位2
    puVar1[0xd6] = 0;                     // 标志位3
    puVar1[0xd7] = 0;                     // 标志位4
    puVar1[0xd8] = 0;                     // 标志位5
    
    // 设置默认参数值
    *(undefined4 *)((longlong)puVar1 + 0x8c) = 6;    // 默认参数值
    
    // 初始化最终标志位
    *(undefined1 *)(puVar1 + 0xd9) = 0;   // 最终标志位
    
    return puVar1;
}



/*==============================================================================
 * 函数: RenderSystem_InitializeContext - 渲染系统上下文初始化函数
 * 
 * 功能描述：
 *   初始化渲染系统上下文，这是一个复杂的初始化函数，负责：
 *   - 设置虚函数表和状态标志
 *   - 初始化同步机制（互斥量和条件变量）
 *   - 绑定渲染对象到上下文
 *   - 创建额外的渲染资源
 *   - 设置渲染参数和状态
 *   - 清理和同步操作
 * 
 * 参数：
 *   param_1 - 渲染上下文指针
 *   param_2 - 渲染对象1指针
 *   param_3 - 渲染对象2指针
 *   param_4 - 渲染对象3指针
 *   param_5 - 渲染对象4指针
 *   param_6 - 上下文参数
 *   param_7 - 标志位1
 *   param_8 - 标志位2
 * 
 * 返回值：
 *   undefined8* - 初始化后的渲染上下文指针
 * 
 * 初始化步骤：
 *   1. 设置虚函数表指针
 *   2. 初始化同步机制
 *   3. 绑定渲染对象
 *   4. 创建额外资源（如果需要）
 *   5. 设置渲染状态
 *   6. 执行清理和同步
 * 
 * 注意事项：
 *   - 这是一个复杂的初始化函数，需要正确处理所有参数
 *   - 会自动管理对象的生命周期
 *   - 需要确保传入的指针有效
 * 
 * 简化实现：
 *   原始实现：复杂的初始化逻辑，包含多个步骤
 *   简化实现：保持原有初始化流程，添加了详细的步骤说明和注释
 =============================================================================*/
undefined8 *
RenderSystem_InitializeContext(undefined8 *param_1, longlong *param_2, longlong *param_3, longlong *param_4,
                               longlong *param_5, undefined8 param_6, undefined1 param_7, undefined1 param_8)
{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    char cVar4;
    undefined8 uVar5;
    longlong *plVar6;
    undefined8 *apuStack_80 [2];
    undefined *puStack_70;
    code *pcStack_68;
    undefined8 uStack_60;
    undefined8 *puStack_58;
    
    // 设置内存对齐标志
    uStack_60 = 0xfffffffffffffffe;
    
    // 步骤1：初始化虚函数表指针
    *param_1 = &UNK_180a21690;
    *param_1 = &UNK_180a21720;
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = &UNK_180a14860;
    *(undefined4 *)(param_1 + 2) = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[5] = 0;
    *param_1 = &UNK_180a34228;
    
    // 步骤2：初始化同步机制
    puStack_58 = param_1 + 6;
    _Cnd_init_in_situ(puStack_58, param_2, param_3, (char)param_4, puStack_58);
    _Mtx_init_in_situ(param_1 + OFFSET_RENDER_MUTEX, 2);
    
    // 步骤3：初始化状态标志
    *(undefined1 *)(param_1 + 0x19) = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    *(undefined4 *)(param_1 + 0x1f) = 3;
    param_1[0x20] = 0;    // 渲染对象1槽位
    param_1[0x21] = 0;    // 渲染对象2槽位
    param_1[0x22] = 0;    // 渲染对象3槽位
    param_1[0x23] = 0;    // 渲染对象4槽位
    
    // 步骤4：初始化上下文数据区域
    puVar1 = param_1 + 0x24;
    *(undefined4 *)(param_1 + 0x2a) = 0;
    *puVar1 = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x33] = 0;    // 扩展对象槽位
    param_1[0x34] = 0;    // 额外资源槽位
    param_1[0x31] = 0;
    *(undefined1 *)(param_1 + 0x32) = 0;
    
    // 步骤5：绑定渲染对象1
    plVar6 = (longlong *)*param_2;
    if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + OFFSET_RENDER_VTABLE))(plVar6);
    }
    plVar2 = (longlong *)param_1[0x20];
    param_1[0x20] = plVar6;
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + OFFSET_RENDER_DESTRUCT))();
    }
    
    // 步骤6：绑定渲染对象2
    plVar6 = (longlong *)*param_3;
    if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + OFFSET_RENDER_VTABLE))(plVar6);
    }
    plVar2 = (longlong *)param_1[0x21];
    param_1[0x21] = plVar6;
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + OFFSET_RENDER_DESTRUCT))();
    }
    
    // 步骤7：绑定渲染对象3
    plVar6 = (longlong *)*param_4;
    if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + OFFSET_RENDER_VTABLE))(plVar6);
    }
    plVar2 = (longlong *)param_1[0x22];
    param_1[0x22] = plVar6;
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + OFFSET_RENDER_DESTRUCT))();
    }
    
    // 步骤8：绑定渲染对象4
    plVar6 = (longlong *)*param_5;
    if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + OFFSET_RENDER_VTABLE))(plVar6);
    }
    plVar2 = (longlong *)param_1[0x23];
    param_1[0x23] = plVar6;
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + OFFSET_RENDER_DESTRUCT))();
    }
    
    // 步骤9：如果需要，创建额外的渲染资源
    if (*param_4 != 0) {
        cVar4 = func_0x000180282950();
        if (cVar4 != '\0') {
            // 分配额外资源内存
            uVar5 = FUN_18062b1e0(_DAT_180c8ed18, RENDER_OBJECT_SIZE_200, MEMORY_ALIGN_8, 3);
            
            // 创建额外资源对象
            plVar6 = (longlong *)FUN_18030b420(uVar5, param_1[0x22], 1);
            if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + OFFSET_RENDER_VTABLE))(plVar6);
            }
            
            // 绑定额外资源
            plVar2 = (longlong *)param_1[0x34];
            param_1[0x34] = plVar6;
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + OFFSET_RENDER_DESTRUCT))();
            }
            
            // 设置额外资源参数
            lVar3 = param_1[0x34];
            *(undefined8 *)(lVar3 + 0x28) = param_1[5];
            plVar6 = *(longlong **)(lVar3 + 0x48);
            if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 0x1e0))();
            }
        }
    }
    
    // 步骤10：设置渲染状态
    *(undefined4 *)((longlong)param_1 + 0x154) = 0;
    FUN_18054a180(param_1);
    param_1[0x1b] = param_6;
    *(undefined1 *)((longlong)param_1 + 0x191) = param_8;
    *(undefined1 *)((longlong)param_1 + 0x192) = param_7;
    
    // 步骤11：重置上下文状态
    *(undefined4 *)(param_1 + 0x2a) = 0;
    *puVar1 = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    
    // 步骤12：执行渲染队列操作
    puStack_70 = &UNK_18054ab80;
    pcStack_68 = FUN_18054aab0;
    apuStack_80[0] = param_1;
    FUN_18054a4b0(param_1 + 0x1c, apuStack_80);
    FUN_1800b9f60(puVar1);
    
    // 步骤13：最终状态设置
    *(undefined1 *)(param_1 + 0x1a) = 0;
    
    // 步骤14：清理扩展对象
    plVar6 = (longlong *)param_1[0x33];
    param_1[0x33] = 0;
    if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + OFFSET_RENDER_DESTRUCT))();
    }
    
    // 步骤15：清理所有渲染对象
    if ((longlong *)*param_2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*param_2 + OFFSET_RENDER_DESTRUCT))();
    }
    if ((longlong *)*param_3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*param_3 + OFFSET_RENDER_DESTRUCT))();
    }
    if ((longlong *)*param_4 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*param_4 + OFFSET_RENDER_DESTRUCT))();
    }
    if ((longlong *)*param_5 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*param_5 + OFFSET_RENDER_DESTRUCT))();
    }
    
    return param_1;
}



/*==============================================================================
 * 函数: RenderSystem_CleanupObject - 渲染系统对象清理函数
 * 
 * 功能描述：
 *   清理渲染系统对象，根据标志位决定是否释放内存
 *   这是一个智能的清理函数，会根据传入的标志位决定清理方式
 * 
 * 参数：
 *   param_1 - 要清理的渲染对象指针
 *   param_2 - 清理标志位
 *            - 位0：是否释放内存（1=释放，0=不释放）
 *            - 其他位：保留
 * 
 * 返回值：
 *   undefined8 - 清理后的对象指针（通常与输入相同）
 * 
 * 处理流程：
 *   1. 调用销毁函数执行对象清理
 *   2. 检查标志位决定是否释放内存
 *   3. 返回对象指针
 * 
 * 注意事项：
 *   - 对象指针必须有效
 *   - 内存释放大小固定为0x1a8字节
 *   - 即使不释放内存，也会执行对象销毁操作
 * 
 * 简化实现：
 *   原始实现：简单的条件清理逻辑
 *   简化实现：保持原有条件清理逻辑，添加了详细的标志位说明
 =============================================================================*/
undefined8 RenderSystem_CleanupObject(undefined8 param_1, ulonglong param_2)
{
    // 步骤1：调用销毁函数执行对象清理
    RenderSystem_DestroyContext((undefined8 *)param_1);
    
    // 步骤2：检查标志位决定是否释放内存
    if ((param_2 & 1) != 0) {
        // 标志位为1，释放对象内存
        free(param_1, RENDER_OBJECT_SIZE_1A8);
    }
    
    // 步骤3：返回对象指针
    return param_1;
}





/*==============================================================================
 * 函数: RenderSystem_DestroyContext - 渲染系统上下文销毁函数
 * 
 * 功能描述：
 *   完全销毁渲染系统上下文，包括：
 *   - 清理所有绑定的渲染对象
 *   - 销毁同步机制
 *   - 重置虚函数表指针
 *   - 释放相关资源
 * 
 * 参数：
 *   param_1 - 要销毁的渲染上下文指针
 * 
 * 返回值：
 *   无
 * 
 * 销毁步骤：
 *   1. 重置虚函数表指针
 *   2. 清理4个主要的渲染对象
 *   3. 清理资源队列
 *   4. 清理扩展对象和额外资源
 *   5. 再次确认清理所有对象
 *   6. 销毁同步机制（互斥量和条件变量）
 *   7. 重置所有指针和状态
 * 
 * 注意事项：
 *   - 此函数会完全销毁上下文，销毁后不能再使用
 *   - 如果参数无效会触发错误处理
 *   - 所有绑定的对象都会被正确清理
 * 
 * 简化实现：
 *   原始实现：完整的上下文销毁逻辑
 *   简化实现：保持原有销毁流程，添加了详细的步骤说明和错误处理
 =============================================================================*/
void RenderSystem_DestroyContext(undefined8 *param_1)
{
    longlong *plVar1;
    
    // 步骤1：重置虚函数表指针
    *param_1 = &UNK_180a34228;
    
    // 步骤2：清理渲染对象1
    plVar1 = (longlong *)param_1[0x20];
    param_1[0x20] = 0;
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + OFFSET_RENDER_DESTRUCT))();
    }
    
    // 步骤3：清理渲染对象2
    plVar1 = (longlong *)param_1[0x21];
    param_1[0x21] = 0;
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + OFFSET_RENDER_DESTRUCT))();
    }
    
    // 步骤4：清理渲染对象3
    plVar1 = (longlong *)param_1[0x22];
    param_1[0x22] = 0;
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + OFFSET_RENDER_DESTRUCT))();
    }
    
    // 步骤5：清理渲染对象4
    plVar1 = (longlong *)param_1[0x23];
    param_1[0x23] = 0;
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + OFFSET_RENDER_DESTRUCT))();
    }
    
    // 步骤6：清理资源队列
    FUN_1800b8500(param_1 + 0x1c);
    
    // 步骤7：检查上下文状态
    if (param_1[0x31] != 0) {
        // 状态异常，触发错误处理
        FUN_18064e900();
    }
    
    // 步骤8：重置状态标志
    param_1[0x31] = 0;
    
    // 步骤9：清理额外资源
    if ((longlong *)param_1[0x34] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x34] + OFFSET_RENDER_DESTRUCT))();
    }
    
    // 步骤10：清理扩展对象
    if ((longlong *)param_1[0x33] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x33] + OFFSET_RENDER_DESTRUCT))();
    }
    
    // 步骤11：再次确认清理所有渲染对象
    if ((longlong *)param_1[0x23] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x23] + OFFSET_RENDER_DESTRUCT))();
    }
    if ((longlong *)param_1[0x22] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x22] + OFFSET_RENDER_DESTRUCT))();
    }
    if ((longlong *)param_1[0x21] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x21] + OFFSET_RENDER_DESTRUCT))();
    }
    if ((longlong *)param_1[0x20] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x20] + OFFSET_RENDER_DESTRUCT))();
    }
    
    // 步骤12：释放资源队列内存
    FUN_180057830(param_1 + 0x1c);
    
    // 步骤13：销毁同步机制
    _Mtx_destroy_in_situ();
    _Cnd_destroy_in_situ(param_1 + OFFSET_RENDER_CONDITION);
    
    // 步骤14：重置所有指针和状态
    *param_1 = &UNK_180a14860;
    param_1[5] = 0;
    *param_1 = &UNK_180a21720;
    *param_1 = &UNK_180a21690;
    
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_180547540(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined4 auStackX_8 [2];
  undefined4 auStackX_10 [2];
  longlong **pplStackX_18;
  longlong *aplStack_28 [2];
  code *pcStack_18;
  code *pcStack_10;
  
  auStackX_8[0] = 0;
  pplStackX_18 = aplStack_28;
  pcStack_18 = FUN_18054b530;
  pcStack_10 = FUN_18054b4b0;
  auStackX_10[0] = param_2;
  aplStack_28[0] = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,DAT_180bf65bc,0xfffffffffffffffe)
  ;
  *aplStack_28[0] = (longlong)auStackX_8;
  aplStack_28[0][1] = (longlong)auStackX_10;
  aplStack_28[0][2] = param_3;
  FUN_18054a4b0(param_1 + 0xe0,aplStack_28);
  return auStackX_8[0];
}



undefined1 FUN_1805475f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStackX_8 [8];
  undefined1 **ppuStackX_10;
  undefined1 *apuStack_30 [2];
  undefined *puStack_20;
  code *pcStack_18;
  
  auStackX_8[0] = 1;
  ppuStackX_10 = apuStack_30;
  puStack_20 = &UNK_18054b470;
  pcStack_18 = FUN_18054b3e0;
  apuStack_30[0] = auStackX_8;
  FUN_18054a4b0(param_1 + 0xe0,apuStack_30,param_3,param_4,0xfffffffffffffffe);
  return auStackX_8[0];
}





// 函数: void FUN_180547650(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180547650(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStackX_10 [24];
  undefined1 *apuStack_30 [2];
  undefined *puStack_20;
  code *pcStack_18;
  
  puStack_20 = &UNK_18054b3a0;
  pcStack_18 = FUN_18054b330;
  apuStack_30[0] = auStackX_10;
  auStackX_10[0] = param_2;
  FUN_18054a4b0(param_1 + 0xe0,apuStack_30,param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_1805476a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1805476a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_30 [16];
  undefined *puStack_20;
  code *pcStack_18;
  
  puStack_20 = &UNK_18054b310;
  pcStack_18 = FUN_18054b2b0;
  FUN_18054a4b0(param_1 + 0xe0,auStack_30,param_3,param_4,0xfffffffffffffffe);
  puStack_20 = &UNK_18054b290;
  pcStack_18 = FUN_18054b230;
  FUN_18054a4b0(param_1 + 0xe0,auStack_30);
  return;
}





// 函数: void FUN_180547720(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180547720(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 auStack_30 [2];
  undefined *puStack_20;
  code *pcStack_18;
  
  puStack_20 = &UNK_18054b1f0;
  pcStack_18 = FUN_18054b180;
  auStack_30[0] = param_2;
  FUN_18054a4b0(param_1 + 0xe0,auStack_30,param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180547770(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180547770(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStackX_10 [24];
  undefined1 *apuStack_30 [2];
  undefined *puStack_20;
  code *pcStack_18;
  
  puStack_20 = &UNK_18054b140;
  pcStack_18 = FUN_18054b0d0;
  apuStack_30[0] = auStackX_10;
  auStackX_10[0] = param_2;
  FUN_18054a4b0(param_1 + 0xe0,apuStack_30,param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_1805477c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1805477c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 auStack_30 [2];
  undefined *puStack_20;
  code *pcStack_18;
  
  puStack_20 = &UNK_18054afa0;
  pcStack_18 = FUN_18054af30;
  auStack_30[0] = param_2;
  FUN_18054a4b0(param_1 + 0xe0,auStack_30,param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180547810(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180547810(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 auStackX_10 [6];
  undefined4 *apuStack_30 [2];
  undefined *puStack_20;
  code *pcStack_18;
  
  puStack_20 = &UNK_18054aef0;
  pcStack_18 = FUN_18054ae80;
  apuStack_30[0] = auStackX_10;
  auStackX_10[0] = param_2;
  FUN_18054a4b0(param_1 + 0xe0,apuStack_30,param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180547860(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180547860(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 auStack_30 [2];
  undefined *puStack_20;
  code *pcStack_18;
  
  puStack_20 = &UNK_18054ae40;
  pcStack_18 = FUN_18054add0;
  auStack_30[0] = param_2;
  FUN_18054a4b0(param_1 + 0xe0,auStack_30,param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_1805478b0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1805478b0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 auStackX_10 [6];
  undefined4 *apuStack_30 [2];
  undefined *puStack_20;
  code *pcStack_18;
  
  puStack_20 = &UNK_18054ad90;
  pcStack_18 = FUN_18054ad20;
  apuStack_30[0] = auStackX_10;
  auStackX_10[0] = param_2;
  FUN_18054a4b0(param_1 + 0xe0,apuStack_30,param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180547900(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180547900(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 auStack_30 [2];
  undefined *puStack_20;
  code *pcStack_18;
  
  puStack_20 = &UNK_18054ace0;
  pcStack_18 = FUN_18054ac70;
  auStack_30[0] = param_2;
  FUN_18054a4b0(param_1 + 0xe0,auStack_30,param_3,param_4,0xfffffffffffffffe);
  return;
}



ulonglong FUN_180547950(longlong param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  
  puVar1 = (undefined *)**(undefined8 **)(param_1 + 0x100);
  if (puVar1 == &UNK_180a169b8) {
    return (ulonglong)*(uint *)(*(undefined8 **)(param_1 + 0x100) + 0x42);
  }
  uVar2 = (**(code **)(puVar1 + 0x130))();
  return uVar2;
}





// 函数: void FUN_180547990(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180547990(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 auStack_30 [2];
  undefined *puStack_20;
  code *pcStack_18;
  
  puStack_20 = &UNK_18054ac30;
  pcStack_18 = FUN_18054abc0;
  auStack_30[0] = param_2;
  FUN_18054a4b0(param_1 + 0xe0,auStack_30,param_3,param_4,0xfffffffffffffffe);
  return;
}



undefined8 * FUN_1805479e0(longlong param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined *)**(undefined8 **)(param_1 + 0x100);
  if (puVar1 == &UNK_180a169b8) {
    return *(undefined8 **)(param_1 + 0x100) + 0x66;
  }
  puVar2 = (undefined8 *)(**(code **)(puVar1 + 0x158))();
  return puVar2;
}





// 函数: void FUN_180547a20(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)
void FUN_180547a20(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong alStack_30 [2];
  undefined *puStack_20;
  code *pcStack_18;
  
  pfVar1 = (float *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x150) = 0;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  puStack_20 = &UNK_18054ab80;
  pcStack_18 = FUN_18054aab0;
  alStack_30[0] = param_1;
  FUN_18054a4b0(param_1 + 0xe0,alStack_30,param_3,param_4,0xfffffffffffffffe);
  fVar4 = *(float *)(param_1 + 0x130);
  if (*pfVar1 <= fVar4) {
    fVar3 = (fVar4 + *pfVar1) * 0.5;
    *(float *)(param_1 + 0x140) = fVar3;
    *(float *)(param_1 + 0x144) = (*(float *)(param_1 + 0x134) + *(float *)(param_1 + 0x124)) * 0.5;
    *(float *)(param_1 + 0x148) = (*(float *)(param_1 + 0x138) + *(float *)(param_1 + 0x128)) * 0.5;
    *(undefined4 *)(param_1 + 0x14c) = 0x7f7fffff;
    fVar4 = fVar4 - fVar3;
    fVar3 = *(float *)(param_1 + 0x138) - *(float *)(param_1 + 0x148);
    fVar2 = *(float *)(param_1 + 0x134) - *(float *)(param_1 + 0x144);
    *(float *)(param_1 + 0x150) = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
    return;
  }
  *(undefined4 *)(param_1 + 0x150) = 0;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180547aa0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180547aa0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *apuStack_28 [2];
  code *pcStack_18;
  code *pcStack_10;
  
  pcStack_18 = FUN_18054a9d0;
  pcStack_10 = FUN_18054a960;
  apuStack_28[0] =
       (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,DAT_180bf65bc,0xfffffffffffffffe);
  uStack_40 = (undefined4)param_2;
  uStack_3c = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack_38 = (undefined4)param_3;
  uStack_34 = (undefined4)((ulonglong)param_3 >> 0x20);
  *apuStack_28[0] = uStack_40;
  apuStack_28[0][1] = uStack_3c;
  apuStack_28[0][2] = uStack_38;
  apuStack_28[0][3] = uStack_34;
  *(undefined8 *)(apuStack_28[0] + 4) = param_4;
  FUN_18054a4b0(param_1 + 0xe0,apuStack_28);
  return;
}





// 函数: void FUN_180547b30(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)
void FUN_180547b30(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 auStackX_18 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined *puStack_20;
  code *pcStack_18;
  
  puStack_28 = auStackX_18;
  puStack_20 = &UNK_18054a920;
  pcStack_18 = FUN_18054a8b0;
  uStack_40 = (undefined4)param_2;
  uStack_3c = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  auStackX_18[0] = param_3;
  FUN_18054a4b0(param_1 + 0xe0,&uStack_30,param_3,param_4,0xfffffffffffffffe);
  return;
}



undefined8 FUN_180547b90(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x100);
  if (*(code **)(*plVar1 + 0xc0) == (code *)&UNK_180277e10) {
    cVar2 = (plVar1[8] - plVar1[7] & 0xfffffffffffffff0U) == 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  }
  if (cVar2 == '\0') {
    return *(undefined8 *)plVar1[7];
  }
  return 0;
}



undefined4 FUN_180547bf0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 auStackX_8 [2];
  undefined4 **ppuStackX_10;
  undefined4 *apuStack_30 [2];
  undefined *puStack_20;
  code *pcStack_18;
  
  auStackX_8[0] = 0;
  ppuStackX_10 = apuStack_30;
  puStack_20 = &UNK_18054a870;
  pcStack_18 = FUN_18054a800;
  apuStack_30[0] = auStackX_8;
  FUN_18054a4b0(param_1 + 0xe0,apuStack_30,param_3,param_4,0xfffffffffffffffe);
  return auStackX_8[0];
}





// 函数: void FUN_180547c50(longlong param_1,undefined4 param_2,undefined4 param_3)
void FUN_180547c50(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (int)(*(longlong *)(param_1 + 0xe8) - *(longlong *)(param_1 + 0xe0) >> 3);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xe0) + lVar3 * 8);
      (**(code **)(*plVar1 + 0x1c0))(plVar1,param_2,param_3);
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}





// 函数: void FUN_180547c87(void)
void FUN_180547c87(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 unaff_EBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined4 unaff_R14D;
  
  lVar2 = 0;
  do {
    plVar1 = *(longlong **)(*(longlong *)(unaff_RDI + 0xe0) + lVar2 * 8);
    (**(code **)(*plVar1 + 0x1c0))(plVar1,unaff_R14D,unaff_EBP);
    lVar2 = lVar2 + 1;
  } while (lVar2 < unaff_RSI);
  return;
}





// 函数: void FUN_180547cb7(void)
void FUN_180547cb7(void)

{
  return;
}





// 函数: void FUN_180547cd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180547cd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 auStack_30 [2];
  undefined *puStack_20;
  code *pcStack_18;
  
  puStack_20 = &UNK_18054a7c0;
  pcStack_18 = FUN_18054a750;
  auStack_30[0] = param_2;
  FUN_18054a4b0(param_1 + 0xe0,auStack_30,param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180547d30(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180547d30(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStackX_10 [24];
  undefined1 *apuStack_30 [2];
  undefined *puStack_20;
  code *pcStack_18;
  
  puStack_20 = &UNK_18054a710;
  pcStack_18 = FUN_18054a6a0;
  apuStack_30[0] = auStackX_10;
  auStackX_10[0] = param_2;
  FUN_18054a4b0(param_1 + 0xe0,apuStack_30,param_3,param_4,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180547d80(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int aiStackX_8 [2];
  int **ppiStackX_10;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined *puStack_20;
  code *pcStack_18;
  
  aiStackX_8[0] = 0;
  ppiStackX_10 = &piStack_30;
  piStack_30 = aiStackX_8;
  puStack_20 = &UNK_18054a660;
  pcStack_18 = FUN_18054a5f0;
  uStack_38 = (undefined4)param_2;
  uStack_34 = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  FUN_18054a4b0(param_1 + 0xe0,&piStack_30,param_3,param_4,0xfffffffffffffffe);
  if ((*(byte *)(param_2 + 8) & 2) != 0) {
    iVar1 = *(int *)(param_1 + 0x154);
    if ((iVar1 == 0) &&
       ((*(longlong *)(_DAT_180c86870 + 0x3d8) == 0 ||
        (*(int *)(*(longlong *)(_DAT_180c86870 + 0x3d8) + 0x110) != 2)))) {
      FUN_180548880(param_1,*(undefined1 *)(param_1 + 0x191));
      iVar1 = *(int *)(param_1 + 0x154);
    }
    if (iVar1 != 2) {
      return aiStackX_8[0] + 1;
    }
  }
  return aiStackX_8[0];
}





