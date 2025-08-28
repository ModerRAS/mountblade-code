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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180546d20(longlong *param_1)

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
  
  uStack_80 = 0xfffffffffffffffe;
  if (param_1[1] - *param_1 >> 3 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)*param_1;
  }
  plStack_78 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  if ((ulonglong)(param_1[1] - *param_1 >> 3) < 2) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = *(longlong **)(*param_1 + 8);
  }
  plStack_70 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  if ((ulonglong)(param_1[1] - *param_1 >> 3) < 3) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)(*param_1 + 0x10);
  }
  plStack_68 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  if ((ulonglong)(param_1[1] - *param_1 >> 3) < 4) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = *(longlong **)(*param_1 + 0x18);
  }
  plStack_60 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  if (((ulonglong)(param_1[1] - *param_1 >> 3) < 5) || (*(longlong *)(*param_1 + 0x20) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x1a8,8,3);
  pplStack_58 = &plStackX_10;
  plStackX_10 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  pplStack_50 = &plStackX_18;
  plStackX_18 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  pplStack_48 = &plStackX_20;
  plStackX_20 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  pplStack_40 = &plStack_88;
  plStack_88 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  uVar1 = FUN_180546fa0(uVar1,&plStack_88,&plStackX_20,&plStackX_18,&plStackX_10,0,1,uVar3);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x38))(plVar6);
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))(plVar4);
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180546f70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x6d0,8,3);
  FUN_180320470();
  *puVar1 = &UNK_180a34440;
  *(undefined4 *)((longlong)puVar1 + 0x124) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xfc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x104) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x10c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x114) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x11c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x694) = 0x41c64e6d;
  *(undefined1 *)(puVar1 + 0xd3) = 0;
  puVar1[0xd5] = 0;
  puVar1[0xd6] = 0;
  puVar1[0xd7] = 0;
  puVar1[0xd8] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x8c) = 6;
  *(undefined1 *)(puVar1 + 0xd9) = 0;
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_180546fa0(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

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
  
  uStack_60 = 0xfffffffffffffffe;
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
  puStack_58 = param_1 + 6;
  _Cnd_init_in_situ(puStack_58,param_2,param_3,(char)param_4,puStack_58);
  _Mtx_init_in_situ(param_1 + 0xf,2);
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 3;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  puVar1 = param_1 + 0x24;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *puVar1 = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  plVar6 = (longlong *)*param_2;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  plVar2 = (longlong *)param_1[0x20];
  param_1[0x20] = plVar6;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar6 = (longlong *)*param_3;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  plVar2 = (longlong *)param_1[0x21];
  param_1[0x21] = plVar6;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar6 = (longlong *)*param_4;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  plVar2 = (longlong *)param_1[0x22];
  param_1[0x22] = plVar6;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar6 = (longlong *)*param_5;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  plVar2 = (longlong *)param_1[0x23];
  param_1[0x23] = plVar6;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  if (*param_4 != 0) {
    cVar4 = func_0x000180282950();
    if (cVar4 != '\0') {
      uVar5 = FUN_18062b1e0(_DAT_180c8ed18,200,8,3);
      plVar6 = (longlong *)FUN_18030b420(uVar5,param_1[0x22],1);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6);
      }
      plVar2 = (longlong *)param_1[0x34];
      param_1[0x34] = plVar6;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      lVar3 = param_1[0x34];
      *(undefined8 *)(lVar3 + 0x28) = param_1[5];
      plVar6 = *(longlong **)(lVar3 + 0x48);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x1e0))();
      }
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  FUN_18054a180(param_1);
  param_1[0x1b] = param_6;
  *(undefined1 *)((longlong)param_1 + 0x191) = param_8;
  *(undefined1 *)((longlong)param_1 + 0x192) = param_7;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *puVar1 = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  puStack_70 = &UNK_18054ab80;
  pcStack_68 = FUN_18054aab0;
  apuStack_80[0] = param_1;
  FUN_18054a4b0(param_1 + 0x1c,apuStack_80);
  FUN_1800b9f60(puVar1);
  *(undefined1 *)(param_1 + 0x1a) = 0;
  plVar6 = (longlong *)param_1[0x33];
  param_1[0x33] = 0;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x38))();
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x38))();
  }
  if ((longlong *)*param_4 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_4 + 0x38))();
  }
  if ((longlong *)*param_5 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_5 + 0x38))();
  }
  return param_1;
}



undefined8 FUN_180547340(undefined8 param_1,ulonglong param_2)

{
  FUN_180547380();
  if ((param_2 & 1) != 0) {
    free(param_1,0x1a8);
  }
  return param_1;
}





// 函数: void FUN_180547380(undefined8 *param_1)
void FUN_180547380(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &UNK_180a34228;
  plVar1 = (longlong *)param_1[0x20];
  param_1[0x20] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (longlong *)param_1[0x21];
  param_1[0x21] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (longlong *)param_1[0x22];
  param_1[0x22] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (longlong *)param_1[0x23];
  param_1[0x23] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  FUN_1800b8500(param_1 + 0x1c);
  if (param_1[0x31] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x31] = 0;
  if ((longlong *)param_1[0x34] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x34] + 0x38))();
  }
  if ((longlong *)param_1[0x33] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x33] + 0x38))();
  }
  if ((longlong *)param_1[0x23] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x23] + 0x38))();
  }
  if ((longlong *)param_1[0x22] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x22] + 0x38))();
  }
  if ((longlong *)param_1[0x21] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x21] + 0x38))();
  }
  if ((longlong *)param_1[0x20] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x20] + 0x38))();
  }
  FUN_180057830(param_1 + 0x1c);
  _Mtx_destroy_in_situ();
  _Cnd_destroy_in_situ(param_1 + 6);
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





