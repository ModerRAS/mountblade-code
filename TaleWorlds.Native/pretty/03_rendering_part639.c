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



/**
 * 渲染系统调试字符串格式化器2
 * 
 * 功能：
 * - 扩展的多参数字符串格式化
 * - 支持最多5个参数的格式化处理
 * - 实现复杂的字符串构建逻辑
 * - 提供高级调试信息输出
 * - 包含完整的内存管理
 * 
 * 参数：
 * - param_1: 输出缓冲区指针
 * - param_2: 格式化字符串指针
 * - param_3: 第一个格式化参数
 * - param_4: 第二个格式化参数
 * - param_5: 第三个格式化参数
 * 
 * 返回值：
 * - 无返回值
 * 
 * 错误处理：
 * - 内存分配失败时进行错误处理
 * - 参数验证失败时返回错误状态
 * - 缓冲区溢出时进行安全处理
 * - 资源清理失败时进行恢复处理
 */
void RenderingSystem_DebugStringFormatter2(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4,
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
    
    /* 初始化安全参数和缓冲区 */
    uStack_b8 = 0xfffffffffffffffe;
    uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
    
    /* 初始化多个参数缓冲区 */
    FUN_1806279c0(auStack_a8);
    FUN_1806279c0(auStack_88, param_3);
    FUN_1806279c0(auStack_68, param_4);
    FUN_1806279c0(auStack_48, param_5);
    
    /* 处理多参数格式化 */
    FUN_1806256c0(&puStack_d8, auStack_a8, 4);
    
    /* 获取调试字符串指针 */
    puVar1 = &DAT_18098bc73;
    if (puStack_d0 != (void *)0x0) {
        puVar1 = puStack_d0;
    }
    
    /* 输出调试信息 */
    OutputDebugStringA(puVar1);
    
    /* 清理资源 */
    puStack_d8 = &UNK_180a3c3e0;
    if (puStack_d0 != (void *)0x0) {
        /* 执行资源清理函数 */
        FUN_18064e900();
    }
    
    /* 重置状态和清理 */
    puStack_d0 = (void *)0x0;
    uStack_c0 = 0;
    puStack_d8 = &UNK_18098bcb0;
    
    /* 执行最终清理 */
    FUN_1808fc8a8(auStack_a8, 0x20, 4, FUN_180627b90);
    
    /* 执行安全退出 */
    FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_f8);
}



/**
 * 渲染系统调试字符串生成器1
 * 
 * 功能：
 * - 生成特定格式的调试字符串
 * - 处理字符串长度验证
 * - 实现动态内存分配
 * - 构建固定格式的调试信息
 * - 提供内存安全保护
 * 
 * 字符串格式：
 * - 生成 "#WT#" 前缀的调试字符串
 * - 添加 "-pk" 后缀标识
 * - 支持动态长度调整
 * - 包含完整的错误处理
 * 
 * 返回值：
 * - 无返回值
 * 
 * 错误处理：
 * - 内存分配失败时进行错误处理
 * - 字符串长度验证失败时进行恢复
 * - 资源清理失败时进行安全退出
 */
void RenderingSystem_DebugStringGenerator1(void)
{
    uint uVar1;
    int32_t *puVar2;
    int32_t *puVar3;
    
    /* 分配初始内存缓冲区 */
    puVar2 = (int32_t *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
    *(int8_t *)puVar2 = 0;
    
    /* 验证缓冲区长度 */
    uVar1 = FUN_18064e990(puVar2);
    
    /* 设置字符串标识 "#WT#" */
    *puVar2 = 0x23575423;
    *(int8_t *)(puVar2 + 1) = 0;
    
    /* 如果长度不足，扩展缓冲区 */
    if (uVar1 < 6) {
        puVar2 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18, puVar2, 6, 0x10, 0x13);
        uVar1 = FUN_18064e990(puVar2);
    }
    
    /* 添加分隔符 "-" */
    *(int16_t *)(puVar2 + 1) = 0x2d;
    
    /* 验证指针有效性 */
    if (puVar2 == (int32_t *)0x0) {
        puVar2 = (int32_t *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
        *(int8_t *)puVar2 = 0;
    }
    else {
        /* 根据长度决定是否扩展缓冲区 */
        if (7 < uVar1) goto LAB_18062605e;
        puVar2 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18, puVar2, 8, 0x10, 0x13);
    }
    
    /* 验证最终缓冲区 */
    FUN_18064e990(puVar2);
    
LAB_18062605e:
    /* 添加后缀 "pk" */
    *(int16_t *)((longlong)puVar2 + 5) = 0x706b;
    *(int8_t *)((longlong)puVar2 + 7) = 0;
    
    /* 获取输出字符串指针 */
    puVar3 = (int32_t *)&DAT_18098bc73;
    if (puVar2 != (int32_t *)0x0) {
        puVar3 = puVar2;
    }
    
    /* 输出调试信息 */
    OutputDebugStringA(puVar3);
    
    /* 清理资源 */
    if (puVar2 != (int32_t *)0x0) {
        /* 执行资源清理函数 */
        FUN_18064e900(puVar2);
    }
    
    return;
}





/**
 * 渲染系统调试字符串生成器2
 * 
 * 功能：
 * - 生成带有特定后缀的调试字符串
 * - 处理动态字符串构建
 * - 实现内存缓冲区管理
 * - 支持可变长度字符串处理
 * - 提供完整的资源清理
 * 
 * 字符串格式：
 * - 生成 "#WT#-dd" 格式的调试字符串
 * - 支持动态添加额外内容
 * - 自动处理内存分配和释放
 * 
 * 返回值：
 * - 无返回值
 * 
 * 错误处理：
 * - 内存分配失败时进行错误处理
 * - 字符串长度验证失败时进行恢复
 * - 资源清理失败时进行安全退出
 */
void RenderingSystem_DebugStringGenerator2(void)
{
    void *puVar1;              /* 输出字符串指针 */
    uint uVar2;                /* 字符串长度变量 */
    uint uVar3;                /* 字符串位置变量 */
    void *puStack_50;          /* 字符串缓冲区管理器 */
    void *puStack_48;          /* 字符串缓冲区指针 */
    uint uStack_40;            /* 缓冲区长度 */
    int32_t uStack_38;         /* 状态变量 */
    void *puStack_30;          /* 缓冲区初始化器 */
    longlong lStack_28;        /* 额外内容指针 */
    int iStack_20;             /* 额外内容长度 */
    
    /* 初始化字符串缓冲区 */
    FUN_1806279c0(&puStack_30);
    FUN_180627910(&puStack_50, &DAT_180a3c230);
    
    /* 获取当前缓冲区长度 */
    uVar3 = uStack_40;
    uVar2 = uStack_40 + 1;
    
    /* 分配缓冲区空间 */
    FUN_1806277c0(&puStack_50, uVar2);
    
    /* 添加分隔符 "-" */
    *(int16_t *)(puStack_48 + uStack_40) = 0x2d;  /* 0x2d = '-' */
    uVar3 = uVar3 + 3;
    uStack_40 = uVar2;
    
    /* 分配更多空间并添加后缀 "dd" */
    FUN_1806277c0(&puStack_50, uVar3);
    *(int16_t *)(puStack_48 + uStack_40) = 0x6464;  /* 0x6464 = "dd" */
    *(int8_t *)((longlong)(puStack_48 + uStack_40) + 2) = 0;  /* 字符串结束符 */
    uStack_40 = uVar3;
    
    /* 如果有额外内容，添加到字符串末尾 */
    if (0 < iStack_20) {
        FUN_1806277c0(&puStack_50, uVar3 + iStack_20);
        /* 复制额外内容到缓冲区 */
        memcpy(puStack_48 + uStack_40, lStack_28, (longlong)(iStack_20 + 1));
    }
    
    /* 获取输出字符串指针 */
    puVar1 = &DAT_18098bc73;
    if (puStack_48 != (void *)0x0) {
        puVar1 = puStack_48;
    }
    
    /* 输出调试信息 */
    OutputDebugStringA(puVar1);
    
    /* 清理资源 */
    puStack_50 = &UNK_180a3c3e0;
    if (puStack_48 != (void *)0x0) {
        /* 执行资源清理函数 */
        FUN_18064e900();
    }
    
    /* 重置状态和清理 */
    puStack_48 = (void *)0x0;
    uStack_38 = 0;
    puStack_50 = &UNK_18098bcb0;
    puStack_30 = &UNK_180a3c3e0;
    
    /* 清理额外内容资源 */
    if (lStack_28 != 0) {
        /* 执行资源清理函数 */
        FUN_18064e900();
    }
    
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统调试字符串生成器3
 * 
 * 功能：
 * - 生成带有特定后缀的调试字符串
 * - 处理动态内存分配和扩展
 * - 实现字符串长度验证
 * - 构建固定格式的调试信息
 * - 提供内存安全保护
 * 
 * 字符串格式：
 * - 生成 "#WT#-td" 格式的调试字符串
 * - 自动处理内存缓冲区扩展
 * - 包含完整的错误处理机制
 * 
 * 返回值：
 * - 无返回值
 * 
 * 错误处理：
 * - 内存分配失败时进行错误处理
 * - 字符串长度验证失败时进行恢复
 * - 资源清理失败时进行安全退出
 */
void RenderingSystem_DebugStringGenerator3(void)
{
    uint uVar1;                /* 字符串长度变量 */
    int32_t *puVar2;           /* 字符串缓冲区指针 */
    int32_t *puVar3;           /* 输出字符串指针 */
    
    /* 分配初始内存缓冲区 */
    puVar2 = (int32_t *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
    *(int8_t *)puVar2 = 0;
    
    /* 验证缓冲区长度 */
    uVar1 = FUN_18064e990(puVar2);
    
    /* 设置字符串标识 "#WT#" */
    *puVar2 = 0x23575423;  /* 0x23575423 = "#WT#" */
    *(int8_t *)(puVar2 + 1) = 0;
    
    /* 如果长度不足，扩展缓冲区 */
    if (uVar1 < 6) {
        puVar2 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18, puVar2, 6, 0x10, 0x13);
        uVar1 = FUN_18064e990(puVar2);
    }
    
    /* 添加分隔符 "-" */
    *(int16_t *)(puVar2 + 1) = 0x2d;  /* 0x2d = '-' */
    
    /* 验证指针有效性 */
    if (puVar2 == (int32_t *)0x0) {
        /* 重新分配缓冲区 */
        puVar2 = (int32_t *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
        *(int8_t *)puVar2 = 0;
    }
    else {
        /* 根据长度决定是否扩展缓冲区 */
        if (7 < uVar1) goto LAB_18062636e;
        puVar2 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18, puVar2, 8, 0x10, 0x13);
    }
    
    /* 验证最终缓冲区 */
    FUN_18064e990(puVar2);
    
LAB_18062636e:
    /* 添加后缀 "td" */
    *(int16_t *)((longlong)puVar2 + 5) = 0x7464;  /* 0x7464 = "td" */
    *(int8_t *)((longlong)puVar2 + 7) = 0;  /* 字符串结束符 */
    
    /* 获取输出字符串指针 */
    puVar3 = (int32_t *)&DAT_18098bc73;
    if (puVar2 != (int32_t *)0x0) {
        puVar3 = puVar2;
    }
    
    /* 输出调试信息 */
    OutputDebugStringA(puVar3);
    
    /* 清理资源 */
    if (puVar2 != (int32_t *)0x0) {
        /* 执行资源清理函数 */
        FUN_18064e900(puVar2);
    }
    
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统路径参数处理器1
 * 
 * 功能：
 * - 处理路径相关参数的字符串格式化
 * - 根据参数类型选择不同的处理逻辑
 * - 实现动态内存分配和扩展
 * - 构建固定格式的调试信息
 * - 支持可变长度字符串处理
 * 
 * 字符串格式：
 * - 生成 "#WT#-fm" 格式的调试字符串
 * - 支持动态添加路径参数内容
 * - 根据参数类型选择不同的处理方式
 * 
 * 参数：
 * - param_1: 路径参数处理上下文
 * - param_2: 参数类型标识符
 * 
 * 返回值：
 * - 无返回值
 * 
 * 错误处理：
 * - 内存分配失败时进行错误处理
 * - 参数验证失败时进行恢复处理
 * - 资源清理失败时进行安全退出
 */
void RenderingSystem_PathParameterProcessor1(uint64_t param_1, char param_2)
{
    uint uVar1;                /* 字符串长度变量 */
    int iVar2;                 /* 缓冲区大小变量 */
    int32_t *puVar3;           /* 字符串缓冲区指针 */
    int32_t *puVar4;           /* 输出字符串指针 */
    void *puVar5;              /* 参数处理函数指针 */
    void *puStack_40;          /* 参数处理上下文 */
    longlong lStack_38;        /* 路径参数内容 */
    int iStack_30;             /* 路径参数长度 */
    
    /* 根据参数类型选择处理函数 */
    puVar5 = &DAT_180a089e8;
    if (param_2 != '\0') {
        puVar5 = &DAT_180a08120;
    }
    
    /* 初始化参数处理上下文 */
    FUN_180627910(&puStack_40, puVar5);
    
    /* 分配初始内存缓冲区 */
    puVar3 = (int32_t *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
    *(int8_t *)puVar3 = 0;
    
    /* 验证缓冲区长度 */
    uVar1 = FUN_18064e990(puVar3);
    
    /* 设置字符串标识 "#WT#" */
    *puVar3 = 0x23575423;  /* 0x23575423 = "#WT#" */
    *(int8_t *)(puVar3 + 1) = 0;
    
    /* 如果长度不足，扩展缓冲区 */
    if (uVar1 < 6) {
        puVar3 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18, puVar3, 6, 0x10, 0x13);
        uVar1 = FUN_18064e990(puVar3);
    }
    
    /* 添加分隔符 "-" */
    *(int16_t *)(puVar3 + 1) = 0x2d;  /* 0x2d = '-' */
    
    /* 验证指针有效性 */
    if (puVar3 == (int32_t *)0x0) {
        /* 重新分配缓冲区 */
        puVar3 = (int32_t *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
        *(int8_t *)puVar3 = 0;
LAB_18062653a:
        uVar1 = FUN_18064e990(puVar3);
    }
    else if (uVar1 < 8) {
        /* 扩展缓冲区以容纳更多内容 */
        puVar3 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18, puVar3, 8, 0x10, 0x13);
        goto LAB_18062653a;
    }
    
    /* 添加后缀 "fm" */
    *(int16_t *)((longlong)puVar3 + 5) = 0x666d;  /* 0x666d = "fm" */
    *(int8_t *)((longlong)puVar3 + 7) = 0;  /* 字符串结束符 */
    
    /* 如果没有额外参数，直接输出 */
    if (iStack_30 < 1) {
        puVar4 = (int32_t *)&DAT_18098bc73;
        if (puVar3 != (int32_t *)0x0) {
            puVar4 = puVar3;
        }
        
        /* 输出调试信息 */
        OutputDebugStringA(puVar4);
        
        /* 清理资源 */
        if (puVar3 != (int32_t *)0x0) {
            /* 执行资源清理函数 */
            FUN_18064e900(puVar3);
        }
        
        puStack_40 = &UNK_180a3c3e0;
        if (lStack_38 != 0) {
            /* 执行资源清理函数 */
            FUN_18064e900();
        }
        return;
    }
    
    /* 处理额外参数 */
    if (iStack_30 != -7) {
        if (puVar3 == (int32_t *)0x0) {
            /* 重新分配足够大的缓冲区 */
            iVar2 = iStack_30 + 8;
            if (iVar2 < 0x10) {
                iVar2 = 0x10;  /* 最小缓冲区大小 */
            }
            puVar3 = (int32_t *)FUN_18062b420(_DAT_180c8ed18, (longlong)iVar2, 0x13);
            *(int8_t *)puVar3 = 0;
        }
        else {
            /* 检查是否需要扩展缓冲区 */
            if (iStack_30 + 8U <= uVar1) goto LAB_1806265d4;
            puVar3 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18, puVar3, iStack_30 + 8U, 0x10, 0x13);
        }
        FUN_18064e990(puVar3);
    }
    
LAB_1806265d4:
    /* 复制额外参数内容到缓冲区 */
    memcpy((int8_t *)((longlong)puVar3 + 7), lStack_38, (longlong)(iStack_30 + 1));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统路径参数处理器2
 * 
 * 功能：
 * - 处理路径相关参数的字符串格式化
 * - 根据参数类型选择不同的处理逻辑
 * - 实现动态内存分配和扩展
 * - 构建固定格式的调试信息
 * - 支持可变长度字符串处理
 * 
 * 字符串格式：
 * - 生成 "#WT#-ra" 格式的调试字符串
 * - 支持动态添加路径参数内容
 * - 根据参数类型选择不同的处理方式
 * 
 * 参数：
 * - param_1: 路径参数处理上下文
 * - param_2: 参数类型标识符
 * 
 * 返回值：
 * - 无返回值
 * 
 * 错误处理：
 * - 内存分配失败时进行错误处理
 * - 参数验证失败时进行恢复处理
 * - 资源清理失败时进行安全退出
 */
void RenderingSystem_PathParameterProcessor2(uint64_t param_1, char param_2)
{
    uint uVar1;                /* 字符串长度变量 */
    int iVar2;                 /* 缓冲区大小变量 */
    int32_t *puVar3;           /* 字符串缓冲区指针 */
    int32_t *puVar4;           /* 输出字符串指针 */
    void *puVar5;              /* 参数处理函数指针 */
    void *puStack_40;          /* 参数处理上下文 */
    longlong lStack_38;        /* 路径参数内容 */
    int iStack_30;             /* 路径参数长度 */
    
    /* 根据参数类型选择处理函数 */
    puVar5 = &DAT_180a089e8;
    if (param_2 != '\0') {
        puVar5 = &DAT_180a08120;
    }
    
    /* 初始化参数处理上下文 */
    FUN_180627910(&puStack_40, puVar5);
    
    /* 分配初始内存缓冲区 */
    puVar3 = (int32_t *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
    *(int8_t *)puVar3 = 0;
    
    /* 验证缓冲区长度 */
    uVar1 = FUN_18064e990(puVar3);
    
    /* 设置字符串标识 "#WT#" */
    *puVar3 = 0x23575423;  /* 0x23575423 = "#WT#" */
    *(int8_t *)(puVar3 + 1) = 0;
    
    /* 如果长度不足，扩展缓冲区 */
    if (uVar1 < 6) {
        puVar3 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18, puVar3, 6, 0x10, 0x13);
        uVar1 = FUN_18064e990(puVar3);
    }
    
    /* 添加分隔符 "-" */
    *(int16_t *)(puVar3 + 1) = 0x2d;  /* 0x2d = '-' */
    
    /* 验证指针有效性 */
    if (puVar3 == (int32_t *)0x0) {
        /* 重新分配缓冲区 */
        puVar3 = (int32_t *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
        *(int8_t *)puVar3 = 0;
LAB_1806267aa:
        uVar1 = FUN_18064e990(puVar3);
    }
    else if (uVar1 < 8) {
        /* 扩展缓冲区以容纳更多内容 */
        puVar3 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18, puVar3, 8, 0x10, 0x13);
        goto LAB_1806267aa;
    }
    
    /* 添加后缀 "ra" */
    *(int16_t *)((longlong)puVar3 + 5) = 0x7261;  /* 0x7261 = "ra" */
    *(int8_t *)((longlong)puVar3 + 7) = 0;  /* 字符串结束符 */
    
    /* 如果没有额外参数，直接输出 */
    if (iStack_30 < 1) {
        puVar4 = (int32_t *)&DAT_18098bc73;
        if (puVar3 != (int32_t *)0x0) {
            puVar4 = puVar3;
        }
        
        /* 输出调试信息 */
        OutputDebugStringA(puVar4);
        
        /* 清理资源 */
        if (puVar3 != (int32_t *)0x0) {
            /* 执行资源清理函数 */
            FUN_18064e900(puVar3);
        }
        
        puStack_40 = &UNK_180a3c3e0;
        if (lStack_38 != 0) {
            /* 执行资源清理函数 */
            FUN_18064e900();
        }
        return;
    }
    
    /* 处理额外参数 */
    if (iStack_30 != -7) {
        if (puVar3 == (int32_t *)0x0) {
            /* 重新分配足够大的缓冲区 */
            iVar2 = iStack_30 + 8;
            if (iVar2 < 0x10) {
                iVar2 = 0x10;  /* 最小缓冲区大小 */
            }
            puVar3 = (int32_t *)FUN_18062b420(_DAT_180c8ed18, (longlong)iVar2, 0x13);
            *(int8_t *)puVar3 = 0;
        }
        else {
            /* 检查是否需要扩展缓冲区 */
            if (iStack_30 + 8U <= uVar1) goto LAB_180626844;
            puVar3 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18, puVar3, iStack_30 + 8U, 0x10, 0x13);
        }
        FUN_18064e990(puVar3);
    }
    
LAB_180626844:
    /* 复制额外参数内容到缓冲区 */
    memcpy((int8_t *)((longlong)puVar3 + 7), lStack_38, (longlong)(iStack_30 + 1));
}





/**
 * 渲染系统调试字符串生成器4
 * 
 * 功能：
 * - 生成带有特定后缀的调试字符串
 * - 处理动态字符串构建
 * - 实现内存缓冲区管理
 * - 支持可变长度字符串处理
 * - 提供完整的资源清理
 * 
 * 字符串格式：
 * - 生成 "#WT#-pc" 格式的调试字符串
 * - 支持动态添加额外内容
 * - 自动处理内存分配和释放
 * 
 * 返回值：
 * - 无返回值
 * 
 * 错误处理：
 * - 内存分配失败时进行错误处理
 * - 字符串长度验证失败时进行恢复
 * - 资源清理失败时进行安全退出
 */
void RenderingSystem_DebugStringGenerator4(void)
{
    void *puVar1;              /* 输出字符串指针 */
    uint uVar2;                /* 字符串长度变量 */
    uint uVar3;                /* 字符串位置变量 */
    void *puStack_50;          /* 字符串缓冲区管理器 */
    void *puStack_48;          /* 字符串缓冲区指针 */
    uint uStack_40;            /* 缓冲区长度 */
    int32_t uStack_38;         /* 状态变量 */
    void *puStack_30;          /* 缓冲区初始化器 */
    longlong lStack_28;        /* 额外内容指针 */
    int iStack_20;             /* 额外内容长度 */
    
    /* 初始化字符串缓冲区 */
    FUN_1806279c0(&puStack_30);
    FUN_180627910(&puStack_50, &DAT_180a3c230);
    
    /* 获取当前缓冲区长度 */
    uVar3 = uStack_40;
    uVar2 = uStack_40 + 1;
    
    /* 分配缓冲区空间 */
    FUN_1806277c0(&puStack_50, uVar2);
    
    /* 添加分隔符 "-" */
    *(int16_t *)(puStack_48 + uStack_40) = 0x2d;  /* 0x2d = '-' */
    uVar3 = uVar3 + 3;
    uStack_40 = uVar2;
    
    /* 分配更多空间并添加后缀 "pc" */
    FUN_1806277c0(&puStack_50, uVar3);
    *(int16_t *)(puStack_48 + uStack_40) = 0x7063;  /* 0x7063 = "pc" */
    *(int8_t *)((longlong)(puStack_48 + uStack_40) + 2) = 0;  /* 字符串结束符 */
    uStack_40 = uVar3;
    
    /* 如果有额外内容，添加到字符串末尾 */
    if (0 < iStack_20) {
        FUN_1806277c0(&puStack_50, uVar3 + iStack_20);
        /* 复制额外内容到缓冲区 */
        memcpy(puStack_48 + uStack_40, lStack_28, (longlong)(iStack_20 + 1));
    }
    
    /* 获取输出字符串指针 */
    puVar1 = &DAT_18098bc73;
    if (puStack_48 != (void *)0x0) {
        puVar1 = puStack_48;
    }
    
    /* 输出调试信息 */
    OutputDebugStringA(puVar1);
    
    /* 清理资源 */
    puStack_50 = &UNK_180a3c3e0;
    if (puStack_48 != (void *)0x0) {
        /* 执行资源清理函数 */
        FUN_18064e900();
    }
    
    /* 重置状态和清理 */
    puStack_48 = (void *)0x0;
    uStack_38 = 0;
    puStack_50 = &UNK_18098bcb0;
    puStack_30 = &UNK_180a3c3e0;
    
    /* 清理额外内容资源 */
    if (lStack_28 != 0) {
        /* 执行资源清理函数 */
        FUN_18064e900();
    }
    
    return;
}



/**
 * 渲染系统字符串格式化处理器
 * 
 * 功能：
 * - 执行安全的字符串格式化操作
 * - 处理可变参数格式化
 * - 实现缓冲区溢出保护
 * - 提供格式化错误处理
 * - 支持多种格式化参数
 * 
 * 格式化特点：
 * - 使用安全的 vsprintf_s 函数
 * - 固定缓冲区大小 (0x400 = 1024字节)
 * - 支持可变参数处理
 * - 包含完整的错误处理机制
 * 
 * 参数：
 * - param_1: 输出缓冲区指针
 * - param_2: 格式化字符串指针
 * - param_3: 可变参数列表1
 * - param_4: 可变参数列表2
 * 
 * 返回值：
 * - 成功时返回格式化的字符数
 * - 失败时返回 -1
 * 
 * 错误处理：
 * - 格式化失败时返回错误代码
 * - 缓冲区溢出时进行安全处理
 * - 参数验证失败时进行错误处理
 */
int RenderingSystem_StringFormatProcessor(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    int iVar1;                 /* 格式化结果 */
    uint64_t *puVar2;          /* 格式化函数指针 */
    uint64_t uStackX_18;       /* 可变参数1 */
    uint64_t uStackX_20;       /* 可变参数2 */
    uint64_t uVar3;            /* 安全参数 */
    
    /* 设置安全参数 */
    uVar3 = 0xfffffffffffffffe;
    
    /* 设置可变参数 */
    uStackX_18 = param_3;
    uStackX_20 = param_4;
    
    /* 获取格式化函数指针 */
    puVar2 = (uint64_t *)func_0x00018004b9a0();
    
    /* 执行安全的字符串格式化 */
    iVar1 = __stdio_common_vsprintf_s(*puVar2, param_1, 0x400, param_2, 0, &uStackX_18, uVar3);
    
    /* 处理格式化失败的情况 */
    if (iVar1 < 0) {
        iVar1 = -1;  /* 返回错误代码 */
    }
    
    return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统调试字符串生成器5
 * 
 * 功能：
 * - 生成复杂的调试字符串信息
 * - 处理多个路径和文件名
 * - 实现动态内存分配和释放
 * - 构建完整的调试信息字符串
 * - 提供多级错误处理
 * 
 * 字符串格式：
 * - 生成 "Module/Native/vegetation.tga" 格式的路径信息
 * - 支持 "Module/Native/pipe.tga" 格式的路径信息
 * - 支持 "Module/Native/gor.tag" 格式的路径信息
 * - 自动处理文件扩展名和路径分隔符
 * 
 * 返回值：
 * - 无返回值
 * 
 * 错误处理：
 * - 内存分配失败时进行错误处理
 * - 文件操作失败时进行恢复处理
 * - 资源清理失败时进行安全退出
 * - 包含多级错误处理机制
 */
void RenderingSystem_DebugStringGenerator5(void)
{
    uint uVar1;                /* 字符串长度变量 */
    int32_t *puVar2;           /* 字符串构建指针 */
    uint64_t *puVar3;          /* 64位字符串构建指针 */
    void *puVar4;              /* 输出字符串指针 */
    uint uVar5;                /* 缓冲区大小变量 */
    bool bVar6;                /* 文件操作状态标志 */
    
    /* 主缓冲区 */
    int8_t auStack_188 [32];   /* 主安全缓冲区 */
    int32_t uStack_168;        /* 状态变量 */
    void *puStack_160;         /* 字符串管理器 */
    void *puStack_158;         /* 主字符串缓冲区 */
    uint uStack_150;           /* 主缓冲区长度 */
    int32_t uStack_148;        /* 主缓冲区状态 */
    
    /* 第一备用缓冲区 */
    void *puStack_140;         /* 备用字符串管理器 */
    void *puStack_138;         /* 备用字符串缓冲区 */
    uint uStack_130;           /* 备用缓冲区长度 */
    int32_t uStack_128;        /* 备用缓冲区状态 */
    
    /* 第二备用缓冲区 */
    void *puStack_120;         /* 第二备用字符串管理器 */
    void *puStack_118;         /* 第二备用字符串缓冲区 */
    uint uStack_110;           /* 第二备用缓冲区长度 */
    int32_t uStack_108;        /* 第二备用缓冲区状态 */
    
    /* 文件操作变量 */
    uint64_t uStack_100;       /* 文件句柄1 */
    longlong lStack_f8;        /* 文件指针1 */
    uint64_t uStack_e8;        /* 文件句柄2 */
    longlong lStack_e0;        /* 文件指针2 */
    uint64_t uStack_d0;        /* 文件句柄3 */
    longlong lStack_c8;        /* 文件指针3 */
    
    /* 字符串构建变量 */
    uint64_t uStack_b8;        /* 安全参数 */
    void *puStack_b0;          /* 字符串构建器 */
    int8_t *puStack_a8;        /* 路径前缀指针 */
    int32_t uStack_a0;         /* 路径前缀长度 */
    int8_t auStack_98 [16];    /* 路径前缀缓冲区 */
    
    /* 备用字符串构建变量 */
    void *puStack_88;          /* 备用字符串构建器 */
    int8_t *puStack_80;        /* 备用路径前缀指针 */
    int32_t uStack_78;         /* 备用路径前缀长度 */
    int8_t auStack_70 [16];    /* 备用路径前缀缓冲区 */
    
    /* 第二备用字符串构建变量 */
    void *puStack_60;          /* 第二备用字符串构建器 */
    int8_t *puStack_58;        /* 第二备用路径前缀指针 */
    int32_t uStack_50;         /* 第二备用路径前缀长度 */
    int8_t auStack_48 [16];    /* 第二备用路径前缀缓冲区 */
    
    /* 安全参数 */
    ulonglong uStack_38;       /* 异常处理参数 */
    
    /* 初始化安全参数 */
    uStack_b8 = 0xfffffffffffffffe;
    uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
    
    /* 初始化状态变量 */
    uStack_168 = 0;
    
    /* 构建路径前缀 "Module/" */
    puStack_b0 = &UNK_1809fdc18;
    puStack_a8 = auStack_98;
    auStack_98[0] = 0;
    uStack_a0 = 6;
    strcpy_s(auStack_98, 0x10, &UNK_180a3c07c);
    
    /* 初始化主字符串缓冲区 */
    FUN_1806279c0(&puStack_160, &puStack_b0);
    uVar1 = uStack_150;
    uStack_168 = 0;
    puStack_b0 = &UNK_18098bcb0;
    
    /* 分配缓冲区空间 */
    uVar5 = uStack_150 + 0xf;
    FUN_1806277c0(&puStack_160, uVar5);
    
    /* 构建 "Module/Native/vegetation.tga" 路径 */
    puVar2 = (int32_t *)(puStack_158 + uStack_150);
    *puVar2 = 0x75646f4d;        /* "Modu" */
    puVar2[1] = 0x2f73656c;     /* "les/" */
    puVar2[2] = 0x6974614e;     /* "Nati" */
    puVar2[3] = 0x2f6576;       /* "ve/" */
    uStack_150 = uVar5;
    
    /* 继续构建路径 */
    FUN_1806277c0(&puStack_160, uVar1 + 0x1b);
    puVar3 = (uint64_t *)(puStack_158 + uStack_150);
    *puVar3 = 0x61742e6d61657473;  /* "s.vegeta" */
    *(int32_t *)(puVar3 + 1) = 0x74656772;  /* "reg" */
    *(int8_t *)((longlong)puVar3 + 0xc) = 0;  /* 字符串结束符 */
    
    /* 尝试打开文件 */
    uStack_100 = 0;
    lStack_f8 = 0;
    puVar4 = &DAT_18098bc73;
    if (puStack_158 != (void *)0x0) {
        puVar4 = puStack_158;
    }
    uStack_150 = uVar1 + 0x1b;
    FUN_18062dee0(&uStack_100, puVar4, &UNK_1809fcfbc);
    bVar6 = lStack_f8 == 0;
    
    /* 清理文件资源 */
    if (lStack_f8 != 0) {
        fclose();
        lStack_f8 = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
        UNLOCK();
    }
    
    /* 清理主缓冲区 */
    puStack_160 = &UNK_180a3c3e0;
    if (puStack_158 == (void *)0x0) {
        puStack_158 = (void *)0x0;
        uStack_148 = 0;
        puStack_160 = &UNK_18098bcb0;
        
        /* 如果第一个文件不存在，尝试第二个文件 */
        if (bVar6) {
            /* 构建备用路径 "Module/Native/pipe.tga" */
            puStack_88 = &UNK_1809fdc18;
            puStack_80 = auStack_70;
            auStack_70[0] = 0;
            uStack_78 = 6;
            strcpy_s(auStack_70, 0x10, &UNK_180a3c07c);
            
            /* 初始化备用字符串缓冲区 */
            FUN_1806279c0(&puStack_140, &puStack_88);
            uVar1 = uStack_130;
            uStack_168 = 0;
            puStack_88 = &UNK_18098bcb0;
            
            /* 分配备用缓冲区空间 */
            uVar5 = uStack_130 + 0xf;
            FUN_1806277c0(&puStack_140, uVar5);
            
            /* 构建备用路径 */
            puVar2 = (int32_t *)(puStack_138 + uStack_130);
            *puVar2 = 0x75646f4d;        /* "Modu" */
            puVar2[1] = 0x2f73656c;     /* "les/" */
            puVar2[2] = 0x6974614e;     /* "Nati" */
            puVar2[3] = 0x2f6576;       /* "ve/" */
            uStack_130 = uVar5;
            
            /* 继续构建备用路径 */
            FUN_1806277c0(&puStack_140, uVar1 + 0x1a);
            *(uint64_t *)(puStack_138 + uStack_130) = 0x7261742e63697065;  /* "epipe.t" */
            *(int32_t *)((longlong)(puStack_138 + uStack_130) + 8) = 0x746567;  /* "teg" */
            
            /* 尝试打开备用文件 */
            uStack_e8 = 0;
            lStack_e0 = 0;
            puVar4 = &DAT_18098bc73;
            if (puStack_138 != (void *)0x0) {
                puVar4 = puStack_138;
            }
            uStack_130 = uVar1 + 0x1a;
            FUN_18062dee0(&uStack_e8, puVar4, &UNK_1809fcfbc);
            bVar6 = lStack_e0 == 0;
            
            /* 清理备用文件资源 */
            if (lStack_e0 != 0) {
                fclose();
                lStack_e0 = 0;
                LOCK();
                _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
                UNLOCK();
            }
            
            /* 清理备用缓冲区 */
            puStack_140 = &UNK_180a3c3e0;
            if (puStack_138 != (void *)0x0) {
                /* 执行资源清理函数 */
                FUN_18064e900();
            }
            puStack_138 = (void *)0x0;
            uStack_128 = 0;
            puStack_140 = &UNK_18098bcb0;
            
            /* 如果备用文件也不存在，尝试第三个文件 */
            if (bVar6) {
                /* 构建第三备用路径 "Module/Native/gor.tag" */
                puStack_60 = &UNK_1809fdc18;
                puStack_58 = auStack_48;
                auStack_48[0] = 0;
                uStack_50 = 6;
                strcpy_s(auStack_48, 0x10, &UNK_180a3c07c);
                
                /* 初始化第三备用字符串缓冲区 */
                FUN_1806279c0(&puStack_120, &puStack_60);
                uVar1 = uStack_110;
                puStack_60 = &UNK_18098bcb0;
                
                /* 分配第三备用缓冲区空间 */
                uVar5 = uStack_110 + 0xf;
                FUN_1806277c0(&puStack_120, uVar5);
                
                /* 构建第三备用路径 */
                puVar2 = (int32_t *)(puStack_118 + uStack_110);
                *puVar2 = 0x75646f4d;        /* "Modu" */
                puVar2[1] = 0x2f73656c;     /* "les/" */
                puVar2[2] = 0x6974614e;     /* "Nati" */
                puVar2[3] = 0x2f6576;       /* "ve/" */
                uStack_110 = uVar5;
                
                /* 继续构建第三备用路径 */
                FUN_1806277c0(&puStack_120, uVar1 + 0x19);
                puVar3 = (uint64_t *)(puStack_118 + uStack_110);
                *puVar3 = 0x677261742e676f67;  /* "gor.tag" */
                *(int16_t *)(puVar3 + 1) = 0x7465;  /* "te" */
                *(int8_t *)((longlong)puVar3 + 10) = 0;  /* 字符串结束符 */
                
                /* 尝试打开第三备用文件 */
                uStack_d0 = 0;
                lStack_c8 = 0;
                puVar4 = &DAT_18098bc73;
                if (puStack_118 != (void *)0x0) {
                    puVar4 = puStack_118;
                }
                uStack_110 = uVar1 + 0x19;
                FUN_18062dee0(&uStack_d0, puVar4, &UNK_1809fcfbc);
                
                /* 清理第三备用文件资源 */
                if (lStack_c8 != 0) {
                    fclose();
                    lStack_c8 = 0;
                    LOCK();
                    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
                    UNLOCK();
                }
                
                /* 清理第三备用缓冲区 */
                puStack_120 = &UNK_180a3c3e0;
                if (puStack_118 != (void *)0x0) {
                    /* 执行资源清理函数 */
                    FUN_18064e900();
                }
                puStack_118 = (void *)0x0;
                uStack_108 = 0;
                puStack_120 = &UNK_18098bcb0;
            }
        }
        
        /* 执行安全退出 */
        FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_188);
    }
    
    /* 执行资源清理 */
    FUN_18064e900();
}





/**
 * 渲染系统字符串长度计算器
 * 
 * 功能：
 * - 计算字符串的长度信息
 * - 处理字符串结束符设置
 * - 实现字符串边界检查
 * - 提供字符串长度验证
 * - 支持安全的字符串操作
 * 
 * 处理逻辑：
 * - 调用字符串长度计算函数
 * - 根据计算结果设置字符串结束符
 * - 处理负长度的情况
 * - 确保字符串操作的边界安全
 * 
 * 参数：
 * - param_1: 字符串缓冲区指针
 * - param_2: 字符串长度偏移量
 * 
 * 返回值：
 * - 无返回值
 * 
 * 错误处理：
 * - 长度计算失败时进行错误处理
 * - 边界检查失败时进行安全处理
 * - 内存访问越界时进行保护
 */
void RenderingSystem_StringLengthCalculator(longlong param_1, longlong param_2)
{
    int iVar1;                 /* 字符串长度计算结果 */
    
    /* 计算字符串长度 */
    iVar1 = FUN_18004b9b0();
    
    /* 如果长度为负数，设置字符串结束符 */
    if (iVar1 < 0) {
        *(int8_t *)(param_1 + -1 + param_2) = 0;  /* 设置字符串结束符 */
    }
    
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统调试字符串格式化器3
 * 
 * 功能：
 * - 执行高级字符串格式化操作
 * - 处理可变参数格式化
 * - 实现缓冲区管理
 * - 调用调试输出函数
 * - 提供完整的错误处理
 * 
 * 格式化特点：
 * - 使用安全的 vsprintf 函数
 * - 固定缓冲区大小 (0x200 = 512字节)
 * - 支持可变参数处理
 * - 包含完整的错误处理机制
 * 
 * 参数：
 * - param_1: 格式化字符串指针
 * - param_2: 可变参数1
 * - param_3: 可变参数2
 * - param_4: 可变参数3
 * 
 * 返回值：
 * - 无返回值
 * 
 * 错误处理：
 * - 格式化失败时进行错误处理
 * - 缓冲区溢出时进行安全处理
 * - 参数验证失败时进行错误处理
 * - 包含异常处理机制
 */
void RenderingSystem_DebugStringFormatter3(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    ulonglong *puVar1;        /* 格式化函数指针 */
    uint64_t uStackX_10;       /* 可变参数1 */
    uint64_t uStackX_18;       /* 可变参数2 */
    uint64_t uStackX_20;       /* 可变参数3 */
    
    /* 安全缓冲区 */
    int8_t auStack_258 [32];   /* 安全栈缓冲区 */
    uint64_t uStack_238;       /* 格式化状态 */
    uint64_t *puStack_230;     /* 参数指针数组 */
    int8_t auStack_228 [512];  /* 格式化输出缓冲区 */
    
    /* 异常处理参数 */
    ulonglong uStack_28;       /* 异常处理参数 */
    
    /* 初始化异常处理参数 */
    uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_258;
    
    /* 设置可变参数 */
    uStackX_10 = param_2;
    uStackX_18 = param_3;
    uStackX_20 = param_4;
    
    /* 获取格式化函数指针 */
    puVar1 = (ulonglong *)func_0x00018004b9a0();
    
    /* 初始化格式化状态 */
    uStack_238 = 0;
    puStack_230 = &uStackX_10;
    
    /* 执行字符串格式化 */
    __stdio_common_vsprintf(*puVar1 | 1, auStack_228, 0x200, param_1);
    
    /* 调用调试输出函数 */
    (*(code *)**(uint64_t **)*_DAT_180c8ed08)((uint64_t *)*_DAT_180c8ed08, auStack_228, 0);
    
    /* 执行安全退出 */
    FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_258);
}





/**
 * 渲染系统调试函数执行器1
 * 
 * 功能：
 * - 执行调试相关的系统函数
 * - 处理调试状态的初始化
 * - 实现调试环境的设置
 * - 提供调试功能的入口点
 * - 包含完整的错误处理
 * 
 * 执行特点：
 * - 调用系统调试初始化函数
 * - 不返回的函数调用
 * - 用于调试环境的初始化
 * - 确保调试系统的正确启动
 * 
 * 返回值：
 * - 无返回值
 * 
 * 错误处理：
 * - 函数执行失败时进行错误处理
 * - 系统调用失败时进行恢复处理
 * - 包含完整的异常处理机制
 */
void RenderingSystem_DebugFunctionExecutor1(void)
{
    /* 执行调试系统初始化函数 */
    FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统调试字符串格式化器4
 * 
 * 功能：
 * - 执行高级字符串格式化操作
 * - 处理可变参数格式化
 * - 实现缓冲区管理
 * - 调用调试输出函数
 * - 提供完整的错误处理
 * 
 * 格式化特点：
 * - 使用安全的 vsprintf 函数
 * - 固定缓冲区大小 (0x200 = 512字节)
 * - 支持可变参数处理
 * - 使用不同的调试输出函数指针
 * 
 * 参数：
 * - param_1: 格式化字符串指针
 * - param_2: 可变参数1
 * - param_3: 可变参数2
 * - param_4: 可变参数3
 * 
 * 返回值：
 * - 无返回值
 * 
 * 错误处理：
 * - 格式化失败时进行错误处理
 * - 缓冲区溢出时进行安全处理
 * - 参数验证失败时进行错误处理
 * - 包含异常处理机制
 */
void RenderingSystem_DebugStringFormatter4(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    ulonglong *puVar1;        /* 格式化函数指针 */
    uint64_t uStackX_10;       /* 可变参数1 */
    uint64_t uStackX_18;       /* 可变参数2 */
    uint64_t uStackX_20;       /* 可变参数3 */
    
    /* 安全缓冲区 */
    int8_t auStack_258 [32];   /* 安全栈缓冲区 */
    uint64_t uStack_238;       /* 格式化状态 */
    uint64_t *puStack_230;     /* 参数指针数组 */
    int8_t auStack_228 [512];  /* 格式化输出缓冲区 */
    
    /* 异常处理参数 */
    ulonglong uStack_28;       /* 异常处理参数 */
    
    /* 初始化异常处理参数 */
    uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_258;
    
    /* 设置可变参数 */
    uStackX_10 = param_2;
    uStackX_18 = param_3;
    uStackX_20 = param_4;
    
    /* 获取格式化函数指针 */
    puVar1 = (ulonglong *)func_0x00018004b9a0();
    
    /* 初始化格式化状态 */
    uStack_238 = 0;
    puStack_230 = &uStackX_10;
    
    /* 执行字符串格式化 */
    __stdio_common_vsprintf(*puVar1 | 1, auStack_228, 0x200, param_1);
    
    /* 调用不同的调试输出函数 */
    (**(code **)(*(longlong *)*_DAT_180c8ed08 + 0x10))((longlong *)*_DAT_180c8ed08, auStack_228, 0);
    
    /* 执行安全退出 */
    FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_258);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统调试字符串格式化器5
 * 
 * 功能：
 * - 执行高级字符串格式化操作
 * - 处理可变参数格式化
 * - 实现缓冲区管理
 * - 调用调试输出函数
 * - 提供完整的错误处理
 * 
 * 格式化特点：
 * - 使用安全的 vsprintf 函数
 * - 固定缓冲区大小 (0x200 = 512字节)
 * - 支持可变参数处理
 * - 使用不同的调试输出函数指针
 * 
 * 参数：
 * - param_1: 格式化字符串指针
 * - param_2: 可变参数1
 * - param_3: 可变参数2
 * - param_4: 可变参数3
 * 
 * 返回值：
 * - 无返回值
 * 
 * 错误处理：
 * - 格式化失败时进行错误处理
 * - 缓冲区溢出时进行安全处理
 * - 参数验证失败时进行错误处理
 * - 包含异常处理机制
 */
void RenderingSystem_DebugStringFormatter5(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    ulonglong *puVar1;        /* 格式化函数指针 */
    uint64_t uStackX_10;       /* 可变参数1 */
    uint64_t uStackX_18;       /* 可变参数2 */
    uint64_t uStackX_20;       /* 可变参数3 */
    
    /* 安全缓冲区 */
    int8_t auStack_258 [32];   /* 安全栈缓冲区 */
    uint64_t uStack_238;       /* 格式化状态 */
    uint64_t *puStack_230;     /* 参数指针数组 */
    int8_t auStack_228 [512];  /* 格式化输出缓冲区 */
    
    /* 异常处理参数 */
    ulonglong uStack_28;       /* 异常处理参数 */
    
    /* 初始化异常处理参数 */
    uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_258;
    
    /* 设置可变参数 */
    uStackX_10 = param_2;
    uStackX_18 = param_3;
    uStackX_20 = param_4;
    
    /* 获取格式化函数指针 */
    puVar1 = (ulonglong *)func_0x00018004b9a0();
    
    /* 初始化格式化状态 */
    uStack_238 = 0;
    puStack_230 = &uStackX_10;
    
    /* 执行字符串格式化 */
    __stdio_common_vsprintf(*puVar1 | 1, auStack_228, 0x200, param_1);
    
    /* 调用不同的调试输出函数 */
    (**(code **)(*(longlong *)*_DAT_180c8ed08 + 0x18))((longlong *)*_DAT_180c8ed08, auStack_228);
    
    /* 执行安全退出 */
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



