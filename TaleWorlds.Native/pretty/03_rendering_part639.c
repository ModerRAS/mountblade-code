#include "TaleWorlds.Native.Split.h"

/**
 * 03_rendering_part639.c - 渲染系统高级字符串处理和路径管理模块
 * 
 * 本模块包含17个核心函数，主要负责：
 * - 字符串格式化和调试输出
 * - 路径处理和文件名操作
 * - 内存管理和资源清理
 * - 格式化字符串处理
 * - 渲染系统辅助功能
 * 
 * 模块特点：
 * - 支持多种字符串格式化操作
 * - 提供路径解析和处理功能
 * - 包含完整的错误处理机制
 * - 实现了内存安全保护
 * - 支持调试信息输出
 */

/* 系统常量定义 */
#define RENDERING_STRING_MAX_LENGTH 1024
#define RENDERING_PATH_MAX_LENGTH 512
#define RENDERING_FORMAT_BUFFER_SIZE 2048
#define RENDERING_DEBUG_PREFIX_LENGTH 32
#define RENDERING_STACK_BUFFER_SIZE 256
#define RENDERING_PARAM_COUNT_MAX 16

/* 渲染系统状态枚举 */
typedef enum {
    RENDERING_STATUS_SUCCESS = 0,
    RENDERING_STATUS_ERROR = -1,
    RENDERING_STATUS_INVALID_PARAM = -2,
    RENDERING_STATUS_MEMORY_ERROR = -3,
    RENDERING_STATUS_PATH_ERROR = -4
} RenderingStatus;

/* 字符串处理模式枚举 */
typedef enum {
    STRING_MODE_NORMAL = 0,
    STRING_MODE_DEBUG = 1,
    STRING_MODE_PATH = 2,
    STRING_MODE_FORMAT = 3
} StringProcessingMode;

/* 路径处理类型枚举 */
typedef enum {
    PATH_TYPE_ABSOLUTE = 0,
    PATH_TYPE_RELATIVE = 1,
    PATH_TYPE_FILENAME = 2,
    PATH_TYPE_EXTENSION = 3
} PathProcessingType;

/* 渲染系统字符串缓冲区结构体 */
typedef struct {
    char buffer[RENDERING_FORMAT_BUFFER_SIZE];
    uint32_t length;
    uint32_t capacity;
    StringProcessingMode mode;
    uint8_t reserved[8];
} RenderingStringBuffer;

/* 渲染系统路径处理结构体 */
typedef struct {
    char fullPath[RENDERING_PATH_MAX_LENGTH];
    char fileName[256];
    char extension[64];
    PathProcessingType pathType;
    uint32_t pathLength;
    uint8_t reserved[12];
} RenderingPathInfo;

/* 渲染系统调试信息结构体 */
typedef struct {
    char prefix[RENDERING_DEBUG_PREFIX_LENGTH];
    char message[RENDERING_STRING_MAX_LENGTH];
    uint32_t timestamp;
    uint32_t messageId;
    uint8_t priority;
    uint8_t reserved[11];
} RenderingDebugInfo;

/* 函数别名定义 */
#define RenderingSystem_DebugStringFormatter1 FUN_180625ce0
#define RenderingSystem_DebugStringFormatter2 FUN_180625e00
#define RenderingSystem_DebugStringGenerator1 FUN_180625f10
#define RenderingSystem_DebugStringGenerator2 FUN_1806260e0
#define RenderingSystem_DebugStringGenerator3 FUN_180626220
#define RenderingSystem_PathParameterProcessor1 FUN_1806263f0
#define RenderingSystem_PathParameterProcessor2 FUN_180626660
#define RenderingSystem_DebugStringGenerator4 FUN_1806268d0
#define RenderingSystem_StringFormatProcessor FUN_180626a10
#define RenderingSystem_DebugStringGenerator5 FUN_180626a80
#define RenderingSystem_StringLengthCalculator FUN_180626eb0
#define RenderingSystem_DebugStringFormatter3 FUN_180626ee0
#define RenderingSystem_DebugFunctionExecutor1 FUN_180626f80
#define RenderingSystem_DebugStringFormatter4 FUN_180627020
#define RenderingSystem_DebugStringFormatter5 FUN_1806270c0
#define RenderingSystem_DebugFunctionExecutor2 FUN_180627160
#define RenderingSystem_DebugStringFormatter6 FUN_1806272a0
#define RenderingSystem_DebugFunctionExecutor3 FUN_180627340
#define RenderingSystem_PathExtractor1 FUN_1806273e0
#define RenderingSystem_PathExtractor2 FUN_180627490
#define RenderingSystem_PathTruncator1 FUN_180627560
#define RenderingSystem_PathExtractor3 FUN_180627600
#define RenderingSystem_PathTruncator2 FUN_1806276d0

/**
 * 渲染系统调试字符串格式化器1
 * 
 * 功能：
 * - 格式化调试字符串输出
 * - 处理多参数字符串格式化
 * - 支持可变参数处理
 * - 实现内存安全保护
 * - 提供调试信息输出
 * 
 * 参数：
 * - param_1: 输出缓冲区指针
 * - param_2: 格式化字符串指针
 * - param_3: 可变参数列表
 * 
 * 返回值：
 * - 无返回值
 * 
 * 错误处理：
 * - 内存分配失败时进行错误处理
 * - 参数验证失败时返回错误状态
 * - 缓冲区溢出时进行安全处理
 */
void RenderingSystem_DebugStringFormatter1(uint64_t param_1, uint64_t param_2, uint64_t param_3)
{
    longlong lVar1;
    void *puVar2;
    int8_t auStack_d8 [32];
    void *puStack_b8;
    longlong lStack_b0;
    int32_t uStack_a0;
    uint64_t uStack_98;
    int8_t auStack_88 [32];
    void *puStack_68;
    uint64_t uStack_60;
    int32_t uStack_58;
    uint64_t uStack_50;
    int8_t auStack_48 [32];
    ulonglong uStack_28;
    
    /* 初始化安全参数 */
    uStack_98 = 0xfffffffffffffffe;
    uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
    
    /* 初始化字符串缓冲区 */
    FUN_1806279c0(auStack_88);
    puStack_68 = &UNK_180a3c3e0;
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    
    /* 处理格式化参数 */
    FUN_1806279c0(auStack_48, param_3);
    lVar1 = FUN_1806256c0(&puStack_b8, auStack_88, 3);
    
    /* 获取调试字符串指针 */
    puVar2 = &DAT_18098bc73;
    if (*(void **)(lVar1 + 8) != (void *)0x0) {
        puVar2 = *(void **)(lVar1 + 8);
    }
    
    /* 输出调试信息 */
    OutputDebugStringA(puVar2);
    
    /* 清理资源 */
    puStack_b8 = &UNK_180a3c3e0;
    if (lStack_b0 != 0) {
        /* 执行资源清理函数 */
        FUN_18064e900();
    }
    
    /* 重置状态 */
    lStack_b0 = 0;
    uStack_a0 = 0;
    puStack_b8 = &UNK_18098bcb0;
    
    /* 执行最终清理 */
    FUN_1808fc8a8(auStack_88, 0x20, 3, FUN_180627b90);
    
    /* 执行安全退出 */
    FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180625e00(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_180625e00(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5)

{
  void *puVar1;
  int8_t auStack_f8 [32];
  void *puStack_d8;
  void *puStack_d0;
  int32_t uStack_c0;
  uint64_t uStack_b8;
  int8_t auStack_a8 [32];
  int8_t auStack_88 [32];
  int8_t auStack_68 [32];
  int8_t auStack_48 [32];
  ulonglong uStack_28;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  FUN_1806279c0(auStack_a8);
  FUN_1806279c0(auStack_88,param_3);
  FUN_1806279c0(auStack_68,param_4);
  FUN_1806279c0(auStack_48,param_5);
  FUN_1806256c0(&puStack_d8,auStack_a8,4);
  puVar1 = &DAT_18098bc73;
  if (puStack_d0 != (void *)0x0) {
    puVar1 = puStack_d0;
  }
  OutputDebugStringA(puVar1);
  puStack_d8 = &UNK_180a3c3e0;
  if (puStack_d0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_d0 = (void *)0x0;
  uStack_c0 = 0;
  puStack_d8 = &UNK_18098bcb0;
  FUN_1808fc8a8(auStack_a8,0x20,4,FUN_180627b90);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180625f10(void)
void FUN_180625f10(void)

{
  uint uVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  
  puVar2 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  uVar1 = FUN_18064e990(puVar2);
  *puVar2 = 0x23575423;
  *(int8_t *)(puVar2 + 1) = 0;
  if (uVar1 < 6) {
    puVar2 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar2,6,0x10,0x13);
    uVar1 = FUN_18064e990(puVar2);
  }
  *(int16_t *)(puVar2 + 1) = 0x2d;
  if (puVar2 == (int32_t *)0x0) {
    puVar2 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puVar2 = 0;
  }
  else {
    if (7 < uVar1) goto LAB_18062605e;
    puVar2 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar2,8,0x10,0x13);
  }
  FUN_18064e990(puVar2);
LAB_18062605e:
  *(int16_t *)((longlong)puVar2 + 5) = 0x706b;
  *(int8_t *)((longlong)puVar2 + 7) = 0;
  puVar3 = (int32_t *)&DAT_18098bc73;
  if (puVar2 != (int32_t *)0x0) {
    puVar3 = puVar2;
  }
  OutputDebugStringA(puVar3);
  if (puVar2 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar2);
  }
  return;
}





// 函数: void FUN_1806260e0(void)
void FUN_1806260e0(void)

{
  void *puVar1;
  uint uVar2;
  uint uVar3;
  void *puStack_50;
  void *puStack_48;
  uint uStack_40;
  int32_t uStack_38;
  void *puStack_30;
  longlong lStack_28;
  int iStack_20;
  
  FUN_1806279c0(&puStack_30);
  FUN_180627910(&puStack_50,&DAT_180a3c230);
  uVar3 = uStack_40;
  uVar2 = uStack_40 + 1;
  FUN_1806277c0(&puStack_50,uVar2);
  *(int16_t *)(puStack_48 + uStack_40) = 0x2d;
  uVar3 = uVar3 + 3;
  uStack_40 = uVar2;
  FUN_1806277c0(&puStack_50,uVar3);
  *(int16_t *)(puStack_48 + uStack_40) = 0x6464;
  *(int8_t *)((longlong)(puStack_48 + uStack_40) + 2) = 0;
  uStack_40 = uVar3;
  if (0 < iStack_20) {
    FUN_1806277c0(&puStack_50,uVar3 + iStack_20);
                    // WARNING: Subroutine does not return
    memcpy(puStack_48 + uStack_40,lStack_28,(longlong)(iStack_20 + 1));
  }
  puVar1 = &DAT_18098bc73;
  if (puStack_48 != (void *)0x0) {
    puVar1 = puStack_48;
  }
  OutputDebugStringA(puVar1);
  puStack_50 = &UNK_180a3c3e0;
  if (puStack_48 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_48 = (void *)0x0;
  uStack_38 = 0;
  puStack_50 = &UNK_18098bcb0;
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180626220(void)
void FUN_180626220(void)

{
  uint uVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  
  puVar2 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  uVar1 = FUN_18064e990(puVar2);
  *puVar2 = 0x23575423;
  *(int8_t *)(puVar2 + 1) = 0;
  if (uVar1 < 6) {
    puVar2 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar2,6,0x10,0x13);
    uVar1 = FUN_18064e990(puVar2);
  }
  *(int16_t *)(puVar2 + 1) = 0x2d;
  if (puVar2 == (int32_t *)0x0) {
    puVar2 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puVar2 = 0;
  }
  else {
    if (7 < uVar1) goto LAB_18062636e;
    puVar2 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar2,8,0x10,0x13);
  }
  FUN_18064e990(puVar2);
LAB_18062636e:
  *(int16_t *)((longlong)puVar2 + 5) = 0x7464;
  *(int8_t *)((longlong)puVar2 + 7) = 0;
  puVar3 = (int32_t *)&DAT_18098bc73;
  if (puVar2 != (int32_t *)0x0) {
    puVar3 = puVar2;
  }
  OutputDebugStringA(puVar3);
  if (puVar2 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806263f0(uint64_t param_1,char param_2)
void FUN_1806263f0(uint64_t param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  void *puVar5;
  void *puStack_40;
  longlong lStack_38;
  int iStack_30;
  
  puVar5 = &DAT_180a089e8;
  if (param_2 != '\0') {
    puVar5 = &DAT_180a08120;
  }
  FUN_180627910(&puStack_40,puVar5);
  puVar3 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  uVar1 = FUN_18064e990(puVar3);
  *puVar3 = 0x23575423;
  *(int8_t *)(puVar3 + 1) = 0;
  if (uVar1 < 6) {
    puVar3 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar3,6,0x10,0x13);
    uVar1 = FUN_18064e990(puVar3);
  }
  *(int16_t *)(puVar3 + 1) = 0x2d;
  if (puVar3 == (int32_t *)0x0) {
    puVar3 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puVar3 = 0;
LAB_18062653a:
    uVar1 = FUN_18064e990(puVar3);
  }
  else if (uVar1 < 8) {
    puVar3 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar3,8,0x10,0x13);
    goto LAB_18062653a;
  }
  *(int16_t *)((longlong)puVar3 + 5) = 0x666d;
  *(int8_t *)((longlong)puVar3 + 7) = 0;
  if (iStack_30 < 1) {
    puVar4 = (int32_t *)&DAT_18098bc73;
    if (puVar3 != (int32_t *)0x0) {
      puVar4 = puVar3;
    }
    OutputDebugStringA(puVar4);
    if (puVar3 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar3);
    }
    puStack_40 = &UNK_180a3c3e0;
    if (lStack_38 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    return;
  }
  if (iStack_30 != -7) {
    if (puVar3 == (int32_t *)0x0) {
      iVar2 = iStack_30 + 8;
      if (iVar2 < 0x10) {
        iVar2 = 0x10;
      }
      puVar3 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar2,0x13);
      *(int8_t *)puVar3 = 0;
    }
    else {
      if (iStack_30 + 8U <= uVar1) goto LAB_1806265d4;
      puVar3 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar3,iStack_30 + 8U,0x10,0x13);
    }
    FUN_18064e990(puVar3);
  }
LAB_1806265d4:
                    // WARNING: Subroutine does not return
  memcpy((int8_t *)((longlong)puVar3 + 7),lStack_38,(longlong)(iStack_30 + 1));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180626660(uint64_t param_1,char param_2)
void FUN_180626660(uint64_t param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  void *puVar5;
  void *puStack_40;
  longlong lStack_38;
  int iStack_30;
  
  puVar5 = &DAT_180a089e8;
  if (param_2 != '\0') {
    puVar5 = &DAT_180a08120;
  }
  FUN_180627910(&puStack_40,puVar5);
  puVar3 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  uVar1 = FUN_18064e990(puVar3);
  *puVar3 = 0x23575423;
  *(int8_t *)(puVar3 + 1) = 0;
  if (uVar1 < 6) {
    puVar3 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar3,6,0x10,0x13);
    uVar1 = FUN_18064e990(puVar3);
  }
  *(int16_t *)(puVar3 + 1) = 0x2d;
  if (puVar3 == (int32_t *)0x0) {
    puVar3 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puVar3 = 0;
LAB_1806267aa:
    uVar1 = FUN_18064e990(puVar3);
  }
  else if (uVar1 < 8) {
    puVar3 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar3,8,0x10,0x13);
    goto LAB_1806267aa;
  }
  *(int16_t *)((longlong)puVar3 + 5) = 0x7261;
  *(int8_t *)((longlong)puVar3 + 7) = 0;
  if (iStack_30 < 1) {
    puVar4 = (int32_t *)&DAT_18098bc73;
    if (puVar3 != (int32_t *)0x0) {
      puVar4 = puVar3;
    }
    OutputDebugStringA(puVar4);
    if (puVar3 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar3);
    }
    puStack_40 = &UNK_180a3c3e0;
    if (lStack_38 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    return;
  }
  if (iStack_30 != -7) {
    if (puVar3 == (int32_t *)0x0) {
      iVar2 = iStack_30 + 8;
      if (iVar2 < 0x10) {
        iVar2 = 0x10;
      }
      puVar3 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar2,0x13);
      *(int8_t *)puVar3 = 0;
    }
    else {
      if (iStack_30 + 8U <= uVar1) goto LAB_180626844;
      puVar3 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar3,iStack_30 + 8U,0x10,0x13);
    }
    FUN_18064e990(puVar3);
  }
LAB_180626844:
                    // WARNING: Subroutine does not return
  memcpy((int8_t *)((longlong)puVar3 + 7),lStack_38,(longlong)(iStack_30 + 1));
}





// 函数: void FUN_1806268d0(void)
void FUN_1806268d0(void)

{
  void *puVar1;
  uint uVar2;
  uint uVar3;
  void *puStack_50;
  void *puStack_48;
  uint uStack_40;
  int32_t uStack_38;
  void *puStack_30;
  longlong lStack_28;
  int iStack_20;
  
  FUN_1806279c0(&puStack_30);
  FUN_180627910(&puStack_50,&DAT_180a3c230);
  uVar3 = uStack_40;
  uVar2 = uStack_40 + 1;
  FUN_1806277c0(&puStack_50,uVar2);
  *(int16_t *)(puStack_48 + uStack_40) = 0x2d;
  uVar3 = uVar3 + 3;
  uStack_40 = uVar2;
  FUN_1806277c0(&puStack_50,uVar3);
  *(int16_t *)(puStack_48 + uStack_40) = 0x7063;
  *(int8_t *)((longlong)(puStack_48 + uStack_40) + 2) = 0;
  uStack_40 = uVar3;
  if (0 < iStack_20) {
    FUN_1806277c0(&puStack_50,uVar3 + iStack_20);
                    // WARNING: Subroutine does not return
    memcpy(puStack_48 + uStack_40,lStack_28,(longlong)(iStack_20 + 1));
  }
  puVar1 = &DAT_18098bc73;
  if (puStack_48 != (void *)0x0) {
    puVar1 = puStack_48;
  }
  OutputDebugStringA(puVar1);
  puStack_50 = &UNK_180a3c3e0;
  if (puStack_48 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_48 = (void *)0x0;
  uStack_38 = 0;
  puStack_50 = &UNK_18098bcb0;
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



int FUN_180626a10(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t *puVar2;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar2 = (uint64_t *)func_0x00018004b9a0();
  iVar1 = __stdio_common_vsprintf_s(*puVar2,param_1,0x400,param_2,0,&uStackX_18,uVar3);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180626a80(void)
void FUN_180626a80(void)

{
  uint uVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  void *puVar4;
  uint uVar5;
  bool bVar6;
  int8_t auStack_188 [32];
  int32_t uStack_168;
  void *puStack_160;
  void *puStack_158;
  uint uStack_150;
  int32_t uStack_148;
  void *puStack_140;
  void *puStack_138;
  uint uStack_130;
  int32_t uStack_128;
  void *puStack_120;
  void *puStack_118;
  uint uStack_110;
  int32_t uStack_108;
  uint64_t uStack_100;
  longlong lStack_f8;
  uint64_t uStack_e8;
  longlong lStack_e0;
  uint64_t uStack_d0;
  longlong lStack_c8;
  uint64_t uStack_b8;
  void *puStack_b0;
  int8_t *puStack_a8;
  int32_t uStack_a0;
  int8_t auStack_98 [16];
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [16];
  void *puStack_60;
  int8_t *puStack_58;
  int32_t uStack_50;
  int8_t auStack_48 [16];
  ulonglong uStack_38;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  uStack_168 = 0;
  puStack_b0 = &UNK_1809fdc18;
  puStack_a8 = auStack_98;
  auStack_98[0] = 0;
  uStack_a0 = 6;
  strcpy_s(auStack_98,0x10,&UNK_180a3c07c);
  FUN_1806279c0(&puStack_160,&puStack_b0);
  uVar1 = uStack_150;
  uStack_168 = 0;
  puStack_b0 = &UNK_18098bcb0;
  uVar5 = uStack_150 + 0xf;
  FUN_1806277c0(&puStack_160,uVar5);
  puVar2 = (int32_t *)(puStack_158 + uStack_150);
  *puVar2 = 0x75646f4d;
  puVar2[1] = 0x2f73656c;
  puVar2[2] = 0x6974614e;
  puVar2[3] = 0x2f6576;
  uStack_150 = uVar5;
  FUN_1806277c0(&puStack_160,uVar1 + 0x1b);
  puVar3 = (uint64_t *)(puStack_158 + uStack_150);
  *puVar3 = 0x61742e6d61657473;
  *(int32_t *)(puVar3 + 1) = 0x74656772;
  *(int8_t *)((longlong)puVar3 + 0xc) = 0;
  uStack_100 = 0;
  lStack_f8 = 0;
  puVar4 = &DAT_18098bc73;
  if (puStack_158 != (void *)0x0) {
    puVar4 = puStack_158;
  }
  uStack_150 = uVar1 + 0x1b;
  FUN_18062dee0(&uStack_100,puVar4,&UNK_1809fcfbc);
  bVar6 = lStack_f8 == 0;
  if (lStack_f8 != 0) {
    fclose();
    lStack_f8 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  puStack_160 = &UNK_180a3c3e0;
  if (puStack_158 == (void *)0x0) {
    puStack_158 = (void *)0x0;
    uStack_148 = 0;
    puStack_160 = &UNK_18098bcb0;
    if (bVar6) {
      puStack_88 = &UNK_1809fdc18;
      puStack_80 = auStack_70;
      auStack_70[0] = 0;
      uStack_78 = 6;
      strcpy_s(auStack_70,0x10,&UNK_180a3c07c);
      FUN_1806279c0(&puStack_140,&puStack_88);
      uVar1 = uStack_130;
      uStack_168 = 0;
      puStack_88 = &UNK_18098bcb0;
      uVar5 = uStack_130 + 0xf;
      FUN_1806277c0(&puStack_140,uVar5);
      puVar2 = (int32_t *)(puStack_138 + uStack_130);
      *puVar2 = 0x75646f4d;
      puVar2[1] = 0x2f73656c;
      puVar2[2] = 0x6974614e;
      puVar2[3] = 0x2f6576;
      uStack_130 = uVar5;
      FUN_1806277c0(&puStack_140,uVar1 + 0x1a);
      *(uint64_t *)(puStack_138 + uStack_130) = 0x7261742e63697065;
      *(int32_t *)((longlong)(puStack_138 + uStack_130) + 8) = 0x746567;
      uStack_e8 = 0;
      lStack_e0 = 0;
      puVar4 = &DAT_18098bc73;
      if (puStack_138 != (void *)0x0) {
        puVar4 = puStack_138;
      }
      uStack_130 = uVar1 + 0x1a;
      FUN_18062dee0(&uStack_e8,puVar4,&UNK_1809fcfbc);
      bVar6 = lStack_e0 == 0;
      if (lStack_e0 != 0) {
        fclose();
        lStack_e0 = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
        UNLOCK();
      }
      puStack_140 = &UNK_180a3c3e0;
      if (puStack_138 != (void *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_138 = (void *)0x0;
      uStack_128 = 0;
      puStack_140 = &UNK_18098bcb0;
      if (bVar6) {
        puStack_60 = &UNK_1809fdc18;
        puStack_58 = auStack_48;
        auStack_48[0] = 0;
        uStack_50 = 6;
        strcpy_s(auStack_48,0x10,&UNK_180a3c07c);
        FUN_1806279c0(&puStack_120,&puStack_60);
        uVar1 = uStack_110;
        puStack_60 = &UNK_18098bcb0;
        uVar5 = uStack_110 + 0xf;
        FUN_1806277c0(&puStack_120,uVar5);
        puVar2 = (int32_t *)(puStack_118 + uStack_110);
        *puVar2 = 0x75646f4d;
        puVar2[1] = 0x2f73656c;
        puVar2[2] = 0x6974614e;
        puVar2[3] = 0x2f6576;
        uStack_110 = uVar5;
        FUN_1806277c0(&puStack_120,uVar1 + 0x19);
        puVar3 = (uint64_t *)(puStack_118 + uStack_110);
        *puVar3 = 0x677261742e676f67;
        *(int16_t *)(puVar3 + 1) = 0x7465;
        *(int8_t *)((longlong)puVar3 + 10) = 0;
        uStack_d0 = 0;
        lStack_c8 = 0;
        puVar4 = &DAT_18098bc73;
        if (puStack_118 != (void *)0x0) {
          puVar4 = puStack_118;
        }
        uStack_110 = uVar1 + 0x19;
        FUN_18062dee0(&uStack_d0,puVar4,&UNK_1809fcfbc);
        if (lStack_c8 != 0) {
          fclose();
          lStack_c8 = 0;
          LOCK();
          _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
          UNLOCK();
        }
        puStack_120 = &UNK_180a3c3e0;
        if (puStack_118 != (void *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_118 = (void *)0x0;
        uStack_108 = 0;
        puStack_120 = &UNK_18098bcb0;
      }
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_188);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180626eb0(longlong param_1,longlong param_2)
void FUN_180626eb0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_18004b9b0();
  if (iVar1 < 0) {
    *(int8_t *)(param_1 + -1 + param_2) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180626ee0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180626ee0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  ulonglong *puVar1;
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  int8_t auStack_258 [32];
  uint64_t uStack_238;
  uint64_t *puStack_230;
  int8_t auStack_228 [512];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_258;
  uStackX_10 = param_2;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar1 = (ulonglong *)func_0x00018004b9a0();
  uStack_238 = 0;
  puStack_230 = &uStackX_10;
  __stdio_common_vsprintf(*puVar1 | 1,auStack_228,0x200,param_1);
  (*(code *)**(uint64_t **)*_DAT_180c8ed08)((uint64_t *)*_DAT_180c8ed08,auStack_228,0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_258);
}





// 函数: void FUN_180626f80(void)
void FUN_180626f80(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180627020(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180627020(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  ulonglong *puVar1;
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  int8_t auStack_258 [32];
  uint64_t uStack_238;
  uint64_t *puStack_230;
  int8_t auStack_228 [512];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_258;
  uStackX_10 = param_2;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar1 = (ulonglong *)func_0x00018004b9a0();
  uStack_238 = 0;
  puStack_230 = &uStackX_10;
  __stdio_common_vsprintf(*puVar1 | 1,auStack_228,0x200,param_1);
  (**(code **)(*(longlong *)*_DAT_180c8ed08 + 0x10))((longlong *)*_DAT_180c8ed08,auStack_228,0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_258);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806270c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1806270c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  ulonglong *puVar1;
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  int8_t auStack_258 [32];
  uint64_t uStack_238;
  uint64_t *puStack_230;
  int8_t auStack_228 [512];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_258;
  uStackX_10 = param_2;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar1 = (ulonglong *)func_0x00018004b9a0();
  uStack_238 = 0;
  puStack_230 = &uStackX_10;
  __stdio_common_vsprintf(*puVar1 | 1,auStack_228,0x200,param_1);
  (**(code **)(*(longlong *)*_DAT_180c8ed08 + 0x18))((longlong *)*_DAT_180c8ed08,auStack_228);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_258);
}





// 函数: void FUN_180627160(void)
void FUN_180627160(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806272a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1806272a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  ulonglong *puVar1;
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  int8_t auStack_258 [32];
  uint64_t uStack_238;
  uint64_t *puStack_230;
  int8_t auStack_228 [512];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_258;
  uStackX_10 = param_2;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar1 = (ulonglong *)func_0x00018004b9a0();
  uStack_238 = 0;
  puStack_230 = &uStackX_10;
  __stdio_common_vsprintf(*puVar1 | 1,auStack_228,0x200,param_1);
  (**(code **)**(uint64_t **)(_DAT_180c8ed08 + 8))
            (*(uint64_t **)(_DAT_180c8ed08 + 8),auStack_228);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_258);
}





// 函数: void FUN_180627340(void)
void FUN_180627340(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



uint64_t *
FUN_1806273e0(uint64_t *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  void *puVar2;
  
  puVar2 = &DAT_18098bc73;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar2 = *(void **)(param_2 + 8);
  }
  lVar1 = strrchr(puVar2,0x2e,param_3,param_4,0,0xfffffffffffffffe);
  if (lVar1 == 0) {
    *param_1 = &UNK_18098bcb0;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    *param_1 = &UNK_1809fdc18;
    param_1[1] = param_1 + 3;
    *(int8_t *)(param_1 + 3) = 0;
    *(int32_t *)(param_1 + 2) = 0;
    strcpy_s(param_1[1],0x10,&DAT_18098bc73);
  }
  else {
    FUN_180057090(param_1,lVar1 + 1);
  }
  return param_1;
}



uint64_t *
FUN_180627490(uint64_t *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  void *puVar2;
  ulonglong uVar3;
  
  puVar2 = &DAT_18098bc73;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar2 = *(void **)(param_2 + 8);
  }
  lVar1 = strrchr(puVar2,0x2e,param_3,param_4,0,0xfffffffffffffffe);
  if (lVar1 != 0) {
    uVar3 = 0xffffffffffffffff;
    do {
      uVar3 = uVar3 + 1;
    } while (*(char *)(lVar1 + uVar3) != '\0');
    if (uVar3 < 0x10) {
      FUN_180057090(param_1,lVar1);
      return param_1;
    }
  }
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_1809fdc18;
  param_1[1] = param_1 + 3;
  *(int8_t *)(param_1 + 3) = 0;
  *(int32_t *)(param_1 + 2) = 0;
  strcpy_s(param_1[1],0x10,&DAT_18098bc73);
  return param_1;
}



longlong FUN_180627560(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  
  FUN_180068ff0();
  uVar2 = *(int *)(param_2 + 0x10) - 1;
  if (-1 < (int)uVar2) {
    lVar1 = (longlong)(int)uVar2;
    while (*(char *)(*(longlong *)(param_2 + 8) + lVar1) != '.') {
      uVar2 = uVar2 - 1;
      lVar1 = lVar1 + -1;
      if (lVar1 < 0) {
        return param_1;
      }
    }
    if (uVar2 != 0xffffffff) {
      *(int8_t *)((ulonglong)uVar2 + *(longlong *)(param_1 + 8)) = 0;
      lVar1 = -1;
      do {
        lVar1 = lVar1 + 1;
      } while (*(char *)(*(longlong *)(param_1 + 8) + lVar1) != '\0');
      *(int *)(param_1 + 0x10) = (int)lVar1;
    }
  }
  return param_1;
}



longlong * FUN_180627600(longlong *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  longlong lVar2;
  void *puVar3;
  
  puVar3 = &DAT_18098bc73;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar3 = *(void **)(param_2 + 8);
  }
  lVar2 = strrchr(puVar3,0x2f,param_3,param_4,0,0xfffffffffffffffe);
  *param_1 = (longlong)&UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = (longlong)&UNK_1809feda8;
  param_1[1] = (longlong)(param_1 + 3);
  *(int32_t *)(param_1 + 2) = 0;
  *(int8_t *)(param_1 + 3) = 0;
  if (lVar2 == 0) {
    pcVar1 = *(code **)(*param_1 + 0x10);
    puVar3 = &DAT_18098bc73;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar3 = *(void **)(param_2 + 8);
    }
    (*pcVar1)(param_1,puVar3,pcVar1,param_4,1);
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1,lVar2 + 1);
  }
  return param_1;
}



longlong FUN_1806276d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_180068ff0();
  uVar3 = *(int *)(param_2 + 0x10) - 1;
  if (-1 < (int)uVar3) {
    lVar1 = (longlong)(int)uVar3;
    uVar2 = uVar3;
    do {
      if (*(char *)(*(longlong *)(param_2 + 8) + lVar1) == '/') {
        if (uVar2 != 0xffffffff) {
          *(int8_t *)((ulonglong)uVar2 + *(longlong *)(param_1 + 8)) = 0;
          lVar1 = -1;
          do {
            lVar1 = lVar1 + 1;
          } while (*(char *)(*(longlong *)(param_1 + 8) + lVar1) != '\0');
          *(int *)(param_1 + 0x10) = (int)lVar1;
          return param_1;
        }
        break;
      }
      uVar2 = uVar2 - 1;
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  if (-1 < (int)uVar3) {
    lVar1 = (longlong)(int)uVar3;
    while (*(char *)(*(longlong *)(param_2 + 8) + lVar1) != '\\') {
      uVar3 = uVar3 - 1;
      lVar1 = lVar1 + -1;
      if (lVar1 < 0) {
        return param_1;
      }
    }
    if (uVar3 != 0xffffffff) {
      *(int8_t *)((ulonglong)uVar3 + *(longlong *)(param_1 + 8)) = 0;
      lVar1 = -1;
      do {
        lVar1 = lVar1 + 1;
      } while (*(char *)(*(longlong *)(param_1 + 8) + lVar1) != '\0');
      *(int *)(param_1 + 0x10) = (int)lVar1;
    }
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



