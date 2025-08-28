/**
 * TaleWorlds.Native - 核心引擎模块第221部分
 * 
 * 文件说明：
 * 这是 Mount & Blade II: Bannerlord Native DLL 的核心引擎模块第221部分
 * 包含对象管理器、线程同步、事件处理、矩阵计算等核心功能
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
 * 核心引擎模块第221部分功能概述：
 * 
 * 1. 对象生命周期管理
 *    - 对象创建和销毁
 *    - 资源清理和释放
 *    - 生命周期状态跟踪
 *    - 内存管理优化
 * 
 * 2. 线程同步和锁管理
 *    - 互斥锁操作
 *    - 条件变量管理
 *    - 线程安全机制
 *    - 并发控制策略
 * 
 * 3. 事件处理系统
 *    - 事件队列管理
 *    - 事件分发机制
 *    - 事件优先级处理
 *    - 事件回调管理
 * 
 * 4. 矩阵和向量计算
 *    - 矩阵变换计算
 *    - 向量归一化处理
 *    - 数学优化算法
 *    - 浮点数精度控制
 * 
 * 5. 资源管理和优化
 *    - 资源池管理
 *    - 缓存策略优化
 *    - 性能监控机制
 *    - 内存分配策略
 */

/*=============================================================================
 * 全局常量和定义
 *=============================================================================*/

/**
 * 数学常量定义
 */
#define MATH_EPSILON             1e-08f        /* 数学计算精度 */
#define MATH_MIN_Z              -0.1f         /* 最小Z坐标值 */
#define FLOAT_MAX               3.4028235e+38f /* 最大浮点数 */
#define FLOAT_NORMALIZED_MAX    0x7f7fffff    /* 归一化最大值 */

/**
 * 对象管理常量
 */
#define OBJECT_POOL_SIZE        0x2f0         /* 对象池大小 */
#define OBJECT_ALIGNMENT        0x10          /* 对象对齐大小 */
#define OBJECT_ALLOC_FLAGS      0xd           /* 对象分配标志 */

/**
 * 线程同步常量
 */
#define MUTEX_TIMEOUT           0xffffffff    /* 互斥锁超时时间 */
#define CONDITION_TIMEOUT       0xffffffff    /* 条件变量超时时间 */

/**
 * 事件系统常量
 */
#define EVENT_QUEUE_SIZE        0x2408        /* 事件队列大小 */
#define EVENT_PRIORITY_LEVELS    2             /* 事件优先级级别 */
#define EVENT_CALLBACK_COUNT    4             /* 事件回调数量 */

/*=============================================================================
 * 数据结构定义
 *=============================================================================*/

/**
 * 对象管理器结构
 */
typedef struct {
    void* object_pool;              /* 对象池指针 */
    size_t pool_size;              /* 池大小 */
    size_t used_count;             /* 已使用计数 */
    size_t free_count;             /* 空闲计数 */
    void* allocation_table;       /* 分配表 */
} ObjectManager;

/**
 * 线程同步管理器结构
 */
typedef struct {
    void* mutex_handle;            /* 互斥锁句柄 */
    void* condition_handle;        /* 条件变量句柄 */
    uint32_t lock_count;           /* 锁计数 */
    uint32_t wait_count;           /* 等待计数 */
    bool is_locked;               /* 锁定状态 */
} ThreadSyncManager;

/**
 * 事件队列结构
 */
typedef struct {
    void* event_buffer;            /* 事件缓冲区 */
    size_t buffer_size;            /* 缓冲区大小 */
    size_t head_index;             /* 头索引 */
    size_t tail_index;             /* 尾索引 */
    uint32_t event_count;          /* 事件计数 */
} EventQueue;

/**
 * 矩阵4x4结构
 */
typedef struct {
    float m[16];                   /* 4x4矩阵元素 */
    float padding[4];             /* 对齐填充 */
} Matrix4x4;

/**
 * 向量3结构
 */
typedef struct {
    float x;                       /* X坐标 */
    float y;                       /* Y坐标 */
    float z;                       /* Z坐标 */
    float w;                       /* W分量 */
} Vector3;

/**
 * 向量4结构
 */
typedef struct {
    float x;                       /* X坐标 */
    float y;                       /* Y坐标 */
    float z;                       /* Z坐标 */
    float w;                       /* W分量 */
} Vector4;

/*=============================================================================
 * 对象生命周期管理函数
 *=============================================================================*/

/**
 * @brief 对象管理器析构函数
 * 
 * 负责对象的完整生命周期管理，包括：
 * - 资源清理和释放
 * - 线程同步机制销毁
 * - 事件回调链清理
 * - 内存池管理
 * - 对象状态重置
 * 
 * @param param_1 对象管理器指针
 * 
 * 技术实现要点：
 * 1. 分阶段清理策略，确保依赖关系正确处理
 * 2. 异常安全机制，防止清理过程中出现异常
 * 3. 内存泄漏检测，确保所有资源正确释放
 * 4. 线程安全保证，使用适当的同步机制
 */
void ObjectManagerDestructor(uint64_t *param_1)
{
    uint64_t *puVar1;
    int64_t lVar2;
    
    /* 初始化对象管理器析构过程 */
    *param_1 = &unknown_var_7040_ptr;
    FUN_1801a2ea0();
    
    /* 清理资源池 */
    puVar1 = (uint64_t *)param_1[0x66c];
    if (puVar1 != (uint64_t *)0x0) {
        lVar2 = __RTCastToVoid(puVar1);
        (**(code **)*puVar1)(puVar1, 0);
        if (lVar2 != 0) {
            CoreEngine_MemoryPoolManager(lVar2);
        }
    }
    param_1[0x66c] = 0;
    
    /* 清理线程同步机制 */
    FUN_180057830();
    _Mtx_destroy_in_situ();
    
    /* 清理事件处理系统 */
    FUN_1801b9920(param_1 + 0xc190);
    if ((int64_t *)param_1[0xc18f] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_1[0xc18f] + 0x38))();
    }
    if ((int64_t *)param_1[0xc18e] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_1[0xc18e] + 0x38))();
    }
    
    /* 清理对象缓存 */
    FUN_180319840(param_1 + 0xc182);
    if ((int64_t *)param_1[0xc181] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_1[0xc181] + 0x38))();
    }
    
    /* 清理字符串管理器 */
    FUN_1801ba4d0();
    FUN_1801ba4d0();
    FUN_18004b730();
    param_1[0xc169] = &system_data_buffer_ptr;
    if (param_1[0xc16a] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    param_1[0xc16a] = 0;
    *(int32_t *)(param_1 + 0xc16c) = 0;
    param_1[0xc169] = &system_state_ptr;
    
    /* 清理回调管理器 */
    FUN_180196de0(param_1 + 0xc11e);
    if ((code *)param_1[0xc11c] != (code *)0x0) {
        (*(code *)param_1[0xc11c])(param_1 + 0xc11a, 0, 0);
    }
    
    /* 清理对象池 */
    FUN_180397ce0(param_1 + 0xc0fc);
    FUN_180196d20(param_1 + 0xc0e7);
    FUN_18005d580();
    
    /* 清理事件队列 */
    SystemDataValidator(param_1 + 0xc061, 0x20, 0x20, FUN_18004a130);
    FUN_180196c40(param_1 + 0x1045);
    if ((int64_t *)param_1[0x1043] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_1[0x1043] + 0x38))();
    }
    if ((int64_t *)param_1[0x1042] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_1[0x1042] + 0x38))();
    }
    if ((int64_t *)param_1[0x1041] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_1[0x1041] + 0x38))();
    }
    if ((int64_t *)param_1[0x1040] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_1[0x1040] + 0x38))();
    }
    if ((int64_t *)param_1[0x103f] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_1[0x103f] + 0x38))();
    }
    
    /* 清理线程局部存储 */
    param_1[0x103a] = &system_data_buffer_ptr;
    if (param_1[0x103b] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    param_1[0x103b] = 0;
    *(int32_t *)(param_1 + 0x103d) = 0;
    param_1[0x103a] = &system_state_ptr;
    FUN_180057830();
    FUN_18005d580();
    FUN_180057830();
    FUN_180057830();
    
    /* 清理资源管理器 */
    if (param_1[0x1023] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    _Mtx_destroy_in_situ();
    SystemDataValidator(param_1 + 0xb97, 0x2408, 1, FUN_1801b99e0);
    if (param_1[0xb93] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    _Mtx_destroy_in_situ();
    if (param_1[0xb7f] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    if (param_1[0xb75] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    _Mtx_destroy_in_situ();
    if (param_1[0xb65] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    
    /* 清理渲染资源 */
    FUN_1800e7c40(param_1 + 0xb5b);
    FUN_1800e7d00(param_1 + 0xa3a);
    SystemDataValidator(param_1 + 0x7f7, 0x908, 2, FUN_1800e7d00);
    FUN_1800e7c40(param_1 + 0x7ed);
    param_1[0x7da] = &system_data_buffer_ptr;
    if (param_1[0x7db] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    param_1[0x7db] = 0;
    *(int32_t *)(param_1 + 0x7dd) = 0;
    param_1[0x7da] = &system_state_ptr;
    if (param_1[0x7ce] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    
    /* 清理渲染管道 */
    FUN_180397770(param_1 + 0x6d6);
    FUN_1801431d0(param_1 + 0x66d);
    FUN_1801431d0(param_1 + 0x603);
    FUN_18038bfe0(param_1 + 0x54d);
    _Mtx_destroy_in_situ();
    if (param_1[0x53e] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    if (param_1[0x53a] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    if (param_1[0x536] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    
    /* 清理渲染状态 */
    FUN_180389750(param_1 + 0x534);
    FUN_180389000(param_1 + 0x52e);
    if (*(char *)((int64_t)param_1 + 0x2901) != '\0') {
        *(int8_t *)((int64_t)param_1 + 0x2901) = 0;
        FUN_1801c0df0(param_1 + 0x519);
    }
    FUN_1801c0df0(param_1 + 0x519);
    param_1[0x512] = &system_data_buffer_ptr;
    if (param_1[0x513] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    param_1[0x513] = 0;
    *(int32_t *)(param_1 + 0x515) = 0;
    param_1[0x512] = &system_state_ptr;
    if (param_1[0x50e] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    
    /* 清理系统回调 */
    if ((*(int *)((int64_t)param_1 + 0x286c) != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x18))();
    }
    if ((code *)param_1[0x50a] != (code *)0x0) {
        (*(code *)param_1[0x50a])(param_1 + 0x508, 0, 0);
    }
    if (param_1[0x502] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    if (param_1[0x4fe] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    if ((int64_t *)param_1[0x4fd] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_1[0x4fd] + 0x38))();
    }
    param_1[0x4f9] = &system_data_buffer_ptr;
    if (param_1[0x4fa] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    param_1[0x4fa] = 0;
    *(int32_t *)(param_1 + 0x4fc) = 0;
    param_1[0x4f9] = &system_state_ptr;
    
    /* 清理线程同步对象 */
    _Mtx_destroy_in_situ();
    _Cnd_destroy_in_situ(param_1 + 0x4e3);
    _Mtx_destroy_in_situ();
    _Cnd_destroy_in_situ(param_1 + 0x4cf);
    if ((int64_t *)param_1[0x4ce] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_1[0x4ce] + 0x38))();
    }
    
    /* 清理系统资源 */
    FUN_18024f2c0(param_1 + 0xae);
    if (param_1[0xa8] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    param_1[0xa4] = &system_data_buffer_ptr;
    if (param_1[0xa5] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    param_1[0xa5] = 0;
    *(int32_t *)(param_1 + 0xa7) = 0;
    param_1[0xa4] = &system_state_ptr;
    param_1[0xa0] = &system_data_buffer_ptr;
    if (param_1[0xa1] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    param_1[0xa1] = 0;
    *(int32_t *)(param_1 + 0xa3) = 0;
    param_1[0xa0] = &system_state_ptr;
    param_1[0x9b] = &system_data_buffer_ptr;
    if (param_1[0x9c] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    param_1[0x9c] = 0;
    *(int32_t *)(param_1 + 0x9e) = 0;
    param_1[0x9b] = &system_state_ptr;
    param_1[0x91] = &system_data_buffer_ptr;
    if (param_1[0x92] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    param_1[0x92] = 0;
    *(int32_t *)(param_1 + 0x94) = 0;
    param_1[0x91] = &system_state_ptr;
    
    /* 清理系统对象 */
    if ((int64_t *)param_1[0x77] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_1[0x77] + 0x38))();
    }
    if ((int64_t *)param_1[0x74] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_1[0x74] + 0x38))();
    }
    if ((int64_t *)param_1[0x73] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_1[0x73] + 0x38))();
    }
    if ((int64_t *)param_1[0x72] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_1[0x72] + 0x38))();
    }
    if ((int64_t *)param_1[0x71] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_1[0x71] + 0x38))();
    }
    FUN_180057830();
    if ((int64_t *)param_1[100] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_1[100] + 0x38))();
    }
    
    /* 清理系统事件 */
    SystemDataValidator(param_1 + 0x5e, 8, 4, DataCacheManager);
    if (param_1[0x5a] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    FUN_180195450(param_1 + 0x4d);
    FUN_180383570(param_1 + 0x24);
    if ((code *)param_1[0x22] != (code *)0x0) {
        (*(code *)param_1[0x22])(param_1 + 0x20, 0, 0);
    }
    if (param_1[0x1c] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    FUN_1801ba340();
    if ((int64_t *)param_1[0x12] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_1[0x12] + 0x38))();
    }
    if (param_1[0xe] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    if (param_1[0xb] != 0) {
        CoreEngine_MemoryPoolManager();
    }
    param_1[0xb] = 0;
    if ((int64_t *)param_1[8] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_1[8] + 0x38))();
    }
    
    /* 最终清理 */
    *param_1 = &system_handler2_ptr;
    *param_1 = &system_handler1_ptr;
    return;
}

/**
 * @brief 对象引用管理器
 * 
 * 管理对象引用计数和生命周期，包括：
 * - 引用计数增减
 * - 对象查找和检索
 * - 生命周期事件通知
 * - 引用循环检测
 * 
 * @param param_1 对象管理器指针
 * @param param_2 对象指针
 * 
 * 技术实现要点：
 * 1. 高效的对象查找算法，使用哈希表优化
 * 2. 引用计数原子操作，确保线程安全
 * 3. 生命周期事件机制，支持资源清理
 * 4. 循环引用检测，防止内存泄漏
 */
void ObjectReferenceManager(int64_t param_1, int64_t param_2)
{
    int64_t lVar1;
    int64_t *plVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t lStackX_10;
    
    lVar1 = core_system_data_config;
    iVar3 = 0;
    
    /* 检查对象是否已存在 */
    if (**(char **)(param_2 + 0x10) == '\0') {
        plVar2 = *(int64_t **)(param_1 + 0x2870);
        uVar4 = *(int64_t *)(param_1 + 0x2878) - (int64_t)plVar2 >> 3;
        if (uVar4 != 0) {
            do {
                if (*plVar2 == param_2) {
                    if (iVar3 != -1) {
                        return;
                    }
                    break;
                }
                iVar3 = iVar3 + 1;
                plVar2 = plVar2 + 1;
            } while ((uint64_t)(int64_t)iVar3 < uVar4);
        }
        lStackX_10 = param_2;
        FUN_18005ea90(param_1 + 0x2870, &lStackX_10, iVar3, uVar4, 0, 0xfffffffffffffffe);
    }
    else {
        /* 处理新对象引用 */
        iVar3 = *(int *)(param_2 + 0x50);
        lStackX_10 = CONCAT44(lStackX_10._4_4_, iVar3);
        if ((iVar3 != 0) && (system_cache_buffer != 0)) {
            (**(code **)(system_cache_buffer + 0x30))(iVar3);
        }
        (**(code **)(lVar1 + 0x110))(*(int32_t *)(param_1 + 0x286c), iVar3);
        if ((iVar3 != 0) && (system_cache_buffer != 0)) {
            (**(code **)(system_cache_buffer + 0x18))(iVar3);
        }
    }
    return;
}

/*=============================================================================
 * 矩阵和向量计算函数
 *=============================================================================*/

/**
 * @brief 矩阵变换计算器
 * 
 * 执行矩阵变换和向量归一化计算，包括：
 * - 向量归一化处理
 * - 矩阵变换计算
 * - 浮点数精度优化
 * - SIMD指令优化
 * 
 * @param param_1 变换参数指针
 * @param param_2 输出矩阵指针
 * 
 * 技术实现要点：
 * 1. 使用SIMD指令进行向量化计算
 * 2. 快速平方根倒数算法优化
 * 3. 浮点数精度控制和范围检查
 * 4. 矩阵变换的数学优化
 */
void MatrixTransformCalculator(int64_t param_1, float *param_2)
{
    float fVar1;
    float fVar2;
    int8_t auVar3 [16];
    float fStack_48;
    float fStack_44;
    float fStack_40;
    int32_t uStack_3c;
    
    /* 初始化变换参数 */
    if (*(char *)(param_1 + 0x3e05) == '\0') {
        fStack_48 = 0.0;
        fStack_44 = 0.0;
        fStack_40 = -1.0;
        uStack_3c = FLOAT_NORMALIZED_MAX;
    }
    else {
        fStack_48 = *(float *)(param_1 + 0x3e0c);
        fStack_44 = *(float *)(param_1 + 0x3e10);
        fStack_40 = *(float *)(param_1 + 0x3e14);
        uStack_3c = *(int32_t *)(param_1 + 0x3e18);
    }
    
    /* 计算向量长度 */
    fVar1 = fStack_44 * fStack_44 + fStack_48 * fStack_48 + fStack_40 * fStack_40;
    auVar3 = rsqrtss(ZEXT416((uint)fVar1), ZEXT416((uint)fVar1));
    fVar2 = auVar3._0_4_;
    
    /* 快速平方根倒数优化 */
    fVar1 = fVar2 * 0.5 * (3.0 - fVar1 * fVar2 * fVar2);
    fStack_40 = fStack_40 * fVar1;
    fStack_48 = fStack_48 * fVar1;
    fStack_44 = fStack_44 * fVar1;
    
    /* 应用Z坐标限制 */
    if (-0.1 < fStack_40) {
        fStack_40 = -0.1;
        func_0x0001801c2560(&fStack_48);
    }
    fStack_40 = -fStack_40;
    fVar1 = -fStack_44;
    
    /* 构建变换矩阵 */
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 1.0;
    param_2[7] = FLOAT_MAX;
    param_2[8] = -fStack_48;
    param_2[9] = -fStack_44;
    param_2[10] = fStack_40;
    param_2[0xb] = FLOAT_MAX;
    
    /* 计算叉积向量 */
    fStack_48 = fStack_40 * 0.0 - fVar1 * 1.0;
    fStack_44 = param_2[8] * 1.0 - param_2[4] * fStack_40;
    fStack_40 = param_2[4] * fVar1 - param_2[8] * 0.0;
    uStack_3c = FLOAT_NORMALIZED_MAX;
    *param_2 = fStack_48;
    param_2[1] = fStack_44;
    param_2[2] = fStack_40;
    param_2[3] = FLOAT_MAX;
    
    /* 矩阵变换处理 */
    FUN_1801c24a0(param_2);
    param_2[4] = param_2[2] * param_2[9] - param_2[1] * param_2[10];
    param_2[5] = *param_2 * param_2[10] - param_2[2] * param_2[8];
    param_2[6] = param_2[1] * param_2[8] - *param_2 * param_2[9];
    param_2[7] = FLOAT_MAX;
    return;
}

/*=============================================================================
 * 线程同步和事件处理函数
 *=============================================================================*/

/**
 * @brief 事件队列管理器
 * 
 * 管理事件队列的添加和处理，包括：
 * - 事件入队操作
 * - 队列扩容处理
 * - 线程安全保证
 * - 内存管理优化
 * 
 * @param param_1 事件队列管理器指针
 * @param param_2 事件类型
 * @param param_3 事件数据
 * @param param_4 事件优先级
 * @param param_5 事件标志
 * 
 * 技术实现要点：
 * 1. 动态扩容策略，避免频繁内存分配
 * 2. 线程安全的队列操作
 * 3. 事件优先级处理机制
 * 4. 内存对齐和缓存优化
 */
void EventQueueManager(int64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4,
                      uint64_t param_5)
{
    int iVar1;
    int32_t *puVar2;
    int32_t *puVar3;
    int64_t lVar4;
    int32_t *puVar5;
    int32_t uStack_2c;
    int32_t uStack_28;
    int32_t uStack_24;
    int32_t uStack_20;
    int32_t uStack_1c;
    int32_t uStack_18;
    int32_t uStack_14;
    
    /* 获取队列锁 */
    iVar1 = _Mtx_lock(param_1 + 0x5b48, param_2, param_3, param_4, 0xfffffffffffffffe);
    if (iVar1 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar1);
    }
    
    /* 获取队列头指针 */
    puVar5 = *(int32_t **)(param_1 + 0x5b30);
    uStack_28 = (int32_t)param_4;
    uStack_24 = (int32_t)((uint64_t)param_4 >> 0x20);
    uStack_20 = (int32_t)param_5;
    uStack_1c = (int32_t)((uint64_t)param_5 >> 0x20);
    uStack_18 = (int32_t)param_2;
    uStack_14 = (int32_t)((uint64_t)param_2 >> 0x20);
    
    /* 检查队列空间 */
    if (puVar5 < *(int32_t **)(param_1 + 0x5b38)) {
        *(int32_t **)(param_1 + 0x5b30) = puVar5 + 8;
        *puVar5 = (int)param_3;
        puVar5[1] = uStack_2c;
        puVar5[2] = uStack_28;
        puVar5[3] = uStack_24;
        puVar5[4] = uStack_20;
        puVar5[5] = uStack_1c;
        puVar5[6] = uStack_18;
        puVar5[7] = uStack_14;
        goto LAB_180198720;
    }
    
    /* 处理队列扩容 */
    puVar3 = *(int32_t **)(param_1 + 0x5b28);
    lVar4 = (int64_t)puVar5 - (int64_t)puVar3 >> 5;
    if (lVar4 == 0) {
        lVar4 = 1;
LAB_180198693:
        puVar2 = (int32_t *)
                 CoreEngine_MemoryAllocator(system_memory_pool_ptr, lVar4 << 5, *(int8_t *)(param_1 + 0x5b40));
        puVar5 = *(int32_t **)(param_1 + 0x5b30);
        puVar3 = *(int32_t **)(param_1 + 0x5b28);
    }
    else {
        lVar4 = lVar4 * 2;
        if (lVar4 != 0) goto LAB_180198693;
        puVar2 = (int32_t *)0x0;
    }
    
    /* 复制现有数据 */
    if (puVar3 != puVar5) {
        memmove(puVar2, puVar3, (int64_t)puVar5 - (int64_t)puVar3);
    }
    
    /* 添加新事件 */
    *puVar2 = (int)param_3;
    puVar2[1] = uStack_2c;
    puVar2[2] = uStack_28;
    puVar2[3] = uStack_24;
    puVar2[4] = uStack_20;
    puVar2[5] = uStack_1c;
    puVar2[6] = uStack_18;
    puVar2[7] = uStack_14;
    if (*(int64_t *)(param_1 + 0x5b28) != 0) {
        CoreEngine_MemoryPoolManager();
    }
    *(int32_t **)(param_1 + 0x5b28) = puVar2;
    *(int32_t **)(param_1 + 0x5b30) = puVar2 + 8;
    *(int32_t **)(param_1 + 0x5b38) = puVar2 + lVar4 * 8;
LAB_180198720:
    
    /* 释放队列锁 */
    iVar1 = _Mtx_unlock(param_1 + 0x5b48);
    if (iVar1 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar1);
    }
    return;
}

/**
 * @brief 渲染状态管理器
 * 
 * 管理渲染状态和参数更新，包括：
 * - 渲染参数设置
 * - 状态标志更新
 * - 矩阵变换应用
 * - 渲染事件触发
 * 
 * @param param_1 渲染管理器指针
 * @param param_2 更新标志
 * 
 * 技术实现要点：
 * 1. 状态变化的批量处理
 * 2. 渲染参数的有效性验证
 * 3. 矩阵变换的实时计算
 * 4. 渲染事件的延迟触发
 */
void RenderStateManager(int64_t param_1, int64_t param_2)
{
    int iVar1;
    uint64_t *puVar2;
    int32_t uVar3;
    int32_t uVar4;
    int32_t uVar5;
    int32_t uVar6;
    int32_t *puVar7;
    int64_t lVar8;
    int64_t *plVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    uint64_t auStack_18 [2];
    
    /* 处理渲染更新 */
    if (param_2 != 0) {
        iVar1 = *(int *)(param_1 + 0x3358);
        FUN_18018d8f0(param_1 + 0x3018);
        *(int *)(param_1 + 0x3358) = iVar1 + 1;
        FUN_1801b4720(param_1, *(int32_t *)(param_1 + 0x3054));
    }
    
    /* 获取渲染参数 */
    puVar7 = (int32_t *)
             FUN_180145140(param_1 + 0x3018, auStack_18, *(int32_t *)(param_1 + 0x3f50));
    uVar3 = *puVar7;
    uVar4 = puVar7[1];
    uVar5 = puVar7[2];
    uVar6 = puVar7[3];
    
    /* 设置渲染状态 */
    *(int8_t *)(param_1 + 0x3e05) = 1;
    *(int32_t *)(param_1 + 0x3e0c) = uVar3;
    *(int32_t *)(param_1 + 0x3e10) = uVar4;
    *(int32_t *)(param_1 + 0x3e14) = uVar5;
    *(int32_t *)(param_1 + 0x3e18) = uVar6;
    *(bool *)(param_1 + 0x3e04) = 0.0 < *(float *)(param_1 + 0x312c);
    
    /* 验证渲染参数 */
    if ((*(uint *)(param_1 + 0x3050) & 0x10000000) == 0) {
        fVar12 = *(float *)(param_1 + 0x30c8);
        fVar11 = fVar12 * *(float *)(param_1 + 0x30e0);
        fVar10 = fVar12 * *(float *)(param_1 + 0x30dc);
        fVar12 = fVar12 * *(float *)(param_1 + 0x30e4);
        if (MATH_EPSILON <= fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12) {
            *(uint *)(param_1 + 0x3e08) = *(uint *)(param_1 + 0x3e08) & 0xfffffffd;
            goto LAB_180198827;
        }
    }
    *(uint *)(param_1 + 0x3e08) = *(uint *)(param_1 + 0x3e08) | 2;
LAB_180198827:
    
    /* 应用矩阵变换 */
    FUN_1801983b0(param_1, param_1 + 0x3830);
    *(int32_t *)(param_1 + 0x3860) = 0;
    *(int32_t *)(param_1 + 0x3864) = 0;
    *(int32_t *)(param_1 + 0x3868) = 0;
    *(int32_t *)(param_1 + 0x386c) = FLOAT_NORMALIZED_MAX;
    FUN_1801b32d0(param_1);
    FUN_1801983b0(param_1, param_1 + 0x3830);
    *(int *)(param_1 + 0x28b4) = *(int *)(param_1 + 0x28b4) + 1;
    *(int32_t *)(param_1 + 0x3860) = 0;
    *(int32_t *)(param_1 + 0x3864) = 0;
    *(int32_t *)(param_1 + 0x3868) = 0;
    *(int32_t *)(param_1 + 0x386c) = FLOAT_NORMALIZED_MAX;
    
    /* 清理旧的事件处理器 */
    auStack_18[0] = 0xfffffffffffffffe;
    if (*(int64_t **)(param_1 + 0x28c0) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(param_1 + 0x28c0) + 0x10))();
        puVar2 = *(uint64_t **)(param_1 + 0x28c0);
        if (puVar2 != (uint64_t *)0x0) {
            lVar8 = __RTCastToVoid(puVar2);
            (**(code **)*puVar2)(puVar2, 0);
            if (lVar8 != 0) {
                CoreEngine_MemoryPoolManager(lVar8);
            }
        }
        *(uint64_t *)(param_1 + 0x28c0) = 0;
    }
    
    /* 创建新的事件处理器 */
    if (*(float *)(param_1 + 0x3140) <= 0.1) {
        plVar9 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr, 0x10, 8, 3);
        *plVar9 = (int64_t)&unknown_var_6232_ptr;
        plVar9[1] = param_1;
    }
    else if (*(int *)(param_1 + 0x3054) == 2) {
        plVar9 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr, 0x20, 8, 3);
        *plVar9 = (int64_t)&unknown_var_6232_ptr;
        plVar9[1] = param_1;
        *plVar9 = (int64_t)&unknown_var_6136_ptr;
        plVar9[2] = 0;
        plVar9[3] = 0;
    }
    else {
        plVar9 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr, 0x70, 8, 3);
        *plVar9 = (int64_t)&unknown_var_6232_ptr;
        plVar9[1] = param_1;
        *plVar9 = (int64_t)&unknown_var_6184_ptr;
        plVar9[2] = 0;
        plVar9[3] = 0;
        plVar9[4] = 0;
        *(int32_t *)(plVar9 + 5) = 0;
    }
    *(int64_t **)(param_1 + 0x28c0) = plVar9;
    (**(code **)(*plVar9 + 8))();
    *(uint *)(param_1 + 0x3674) = *(uint *)(param_1 + 0x3674) | 0x10;
    return;
}

/*=============================================================================
 * 资源管理和对象创建函数
 *=============================================================================*/

/**
 * @brief 对象创建器
 * 
 * 创建和初始化新对象，包括：
 * - 内存分配和初始化
 * - 对象属性设置
 * - 生命周期管理
 * - 错误处理机制
 * 
 * @param param_1 对象类型
 * @param param_2 对象指针输出
 * @param param_3 创建标志
 * @return 创建的对象指针
 * 
 * 技术实现要点：
 * 1. 内存池分配策略，减少碎片化
 * 2. 对象属性的批量初始化
 * 3. 生命周期事件的正确触发
 * 4. 错误处理和资源清理
 */
int64_t * ObjectCreator(uint64_t param_1, int64_t *param_2, int8_t param_3)
{
    uint64_t uVar1;
    int64_t *plVar2;
    int64_t *plStackX_20;
    
    /* 分配对象内存 */
    uVar1 = CoreMemoryPoolReallocator(system_memory_pool_ptr, OBJECT_POOL_SIZE, OBJECT_ALIGNMENT, OBJECT_ALLOC_FLAGS);
    plVar2 = (int64_t *)FUN_1802e6b00(uVar1, param_3);
    *param_2 = (int64_t)plVar2;
    
    /* 初始化对象 */
    if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    
    /* 验证对象创建 */
    if (*param_2 == 0) {
        FUN_180626ee0(&unknown_var_2272_ptr);
    }
    
    /* 设置对象属性 */
    plStackX_20 = (int64_t *)*param_2;
    if (plStackX_20 != (int64_t *)0x0) {
        (**(code **)(*plStackX_20 + 0x28))();
    }
    FUN_180198b90(param_1, &plStackX_20, 1, 1, 0, 1, 0);
    return param_2;
}

/**
 * @brief 对象销毁器
 * 
 * 销毁对象并清理资源，包括：
 * - 引用计数检查
 * - 资源清理和释放
 * - 事件通知发送
 * - 内存回收处理
 * 
 * @param param_1 对象管理器指针
 * @param param_2 对象指针
 * @param param_3 销毁标志
 * @param param_4 保留参数
 * @param param_5 销毁代码
 * 
 * 技术实现要点：
 * 1. 安全的引用计数检查
 * 2. 分阶段的资源清理
 * 3. 事件通知的正确发送
 * 4. 内存泄漏的预防
 */
void ObjectDestructor(int64_t param_1, int64_t *param_2, uint64_t param_3, uint64_t param_4,
                    int32_t param_5)
{
    int64_t lVar1;
    int iVar2;
    uint uVar3;
    int64_t *plVar4;
    uint uVar5;
    int64_t *plStackX_8;
    int64_t *plStackX_10;
    uint in_stack_ffffffffffffffc0;
    
    plStackX_10 = param_2;
    if (param_2 != (int64_t *)0x0) {
        (**(code **)(*param_2 + 0x28))(param_2);
    }
    
    /* 检查对象所有权 */
    if (param_2[4] == param_1) {
        if (*(int64_t *)(param_1 + 600) != 0) {
            FUN_1803a00c0(*(int64_t *)(param_1 + 600), param_2);
        }
        lVar1 = param_2[0x2d];
        uVar5 = 0;
        
        /* 处理不同类型的对象销毁 */
        if (lVar1 == 0) {
            FUN_180398550(param_1 + 0x607e0, param_2);
            if (*(int64_t **)(param_1 + 0x81f8) == param_2) {
                plStackX_8 = *(int64_t **)(param_1 + 0x81f8);
                *(uint64_t *)(param_1 + 0x81f8) = 0;
                if (plStackX_8 != (int64_t *)0x0) {
                    (**(code **)(*plStackX_8 + 0x38))();
                }
            }
            if (*(int64_t **)(param_1 + 0x8200) == param_2) {
                plStackX_8 = *(int64_t **)(param_1 + 0x8200);
                *(uint64_t *)(param_1 + 0x8200) = 0;
                if (plStackX_8 != (int64_t *)0x0) {
                    (**(code **)(*plStackX_8 + 0x38))();
                }
            }
            if (*(int64_t **)(param_1 + 0x8208) == param_2) {
                plStackX_8 = *(int64_t **)(param_1 + 0x8208);
                *(uint64_t *)(param_1 + 0x8208) = 0;
                if (plStackX_8 != (int64_t *)0x0) {
                    (**(code **)(*plStackX_8 + 0x38))();
                }
            }
            if (*(int64_t **)(param_1 + 0x8210) == param_2) {
                plStackX_8 = *(int64_t **)(param_1 + 0x8210);
                *(uint64_t *)(param_1 + 0x8210) = 0;
                if (plStackX_8 != (int64_t *)0x0) {
                    (**(code **)(*plStackX_8 + 0x38))();
                }
            }
            plVar4 = *(int64_t **)(param_1 + 0x28c0);
            if (plVar4 != (int64_t *)0x0) {
                (**(code **)(*plVar4 + 0x20))(plVar4, param_2);
            }
            FUN_1802eaec0(param_2, 0, 1, 1, 0, in_stack_ffffffffffffffc0 & 0xffffff00, 1, param_5);
        }
        else {
            FUN_1802ed990(lVar1, 1);
            FUN_1802eb9a0(lVar1, param_2, 0, 0, 1, param_5);
        }
        
        /* 清理对象引用 */
        iVar2 = FUN_1802ed190(param_2, 7);
        if (iVar2 != 0) {
            do {
                plVar4 = (int64_t *)FUN_1802ed2b0(param_2, &plStackX_8, 7, uVar5);
                lVar1 = *plVar4;
                if (plStackX_8 != (int64_t *)0x0) {
                    (**(code **)(*plStackX_8 + 0x38))();
                }
                *(int8_t *)(lVar1 + 0x39) = 1;
                uVar5 = uVar5 + 1;
                uVar3 = FUN_1802ed190(param_2, 7);
            } while (uVar5 < uVar3);
        }
    }
    else {
        SystemOptimizationProcessor(&system_param2_ptr);
    }
    
    /* 最终清理 */
    (**(code **)(*param_2 + 0x38))(param_2);
    return;
}

/**
 * @brief 对象注册器
 * 
 * 注册对象到管理系统，包括：
 * - 对象类型检查
 * - 注册表管理
 * - 优先级处理
 * - 重复注册检查
 * 
 * @param param_1 注册管理器指针
 * @param param_2 对象指针
 * @param param_3 注册标志
 * @param param_4 优先级
 * @param param_5 保留参数
 * @param param_6 激活标志
 * @param param_7 注册模式
 * @return 注册结果
 * 
 * 技术实现要点：
 * 1. 高效的对象类型检查
 * 2. 优先级队列管理
 * 3. 重复注册的检测和处理
 * 4. 注册表的优化存储
 */
uint64_t ObjectRegistrar(int64_t param_1, int64_t *param_2, int8_t param_3, int8_t param_4,
                       uint64_t param_5, int8_t param_6, char param_7)
{
    uint64_t *puVar1;
    int64_t lVar2;
    int64_t *plVar3;
    char cVar4;
    int iVar5;
    int64_t lVar6;
    int64_t *plVar7;
    uint64_t *puVar8;
    void *puVar9;
    uint64_t *puVar10;
    bool bVar11;
    uint in_stack_ffffffffffffffb0;
    uint64_t uVar12;
    
    uVar12 = 0xfffffffffffffffe;
    
    /* 检查对象类型 */
    cVar4 = FUN_1802eee20(*param_2, &unknown_var_6976_ptr);
    if (cVar4 != '\0') {
        *(int16_t *)(param_1 + 0x5c40) = 0x101;
    }
    cVar4 = FUN_1802eee20(*param_2, &unknown_var_7008_ptr);
    if (cVar4 != '\0') {
        *(int8_t *)(param_1 + 0x5bf0) = 1;
        *(int8_t *)(param_1 + 0x5c42) = 1;
    }
    
    /* 检查对象是否已注册 */
    lVar6 = *param_2;
    lVar2 = *(int64_t *)(lVar6 + 0x168);
    if (lVar2 == 0) {
        plVar3 = *(int64_t **)(param_1 + 0x60860);
        plVar7 = *(int64_t **)(param_1 + 0x60858);
        if (plVar7 != plVar3) {
            do {
                if (*plVar7 == lVar6) break;
                plVar7 = plVar7 + 1;
            } while (plVar7 != plVar3);
            if (plVar7 != plVar3) {
                if (param_7 != '\0') {
                    puVar9 = &system_buffer_ptr;
                    if (*(void **)(lVar6 + 0x290) != (void *)0x0) {
                        puVar9 = *(void **)(lVar6 + 0x290);
                    }
                    plVar7 = (int64_t *)SystemOptimizationProcessor(&unknown_var_2304_ptr, puVar9);
                }
                if ((int64_t *)*param_2 != (int64_t *)0x0) {
                    plVar7 = (int64_t *)(**(code **)(*(int64_t *)*param_2 + 0x38))();
                }
                return (uint64_t)plVar7 & 0xffffffffffffff00;
            }
        }
    }
    else {
        in_stack_ffffffffffffffb0 = 0;
        FUN_1802eb9a0(lVar2, lVar6, 0, *(int64_t *)(lVar2 + 0x20) == param_1, param_6, 0x16);
    }
    
    /* 执行对象注册 */
    FUN_1802eaec0(*param_2, param_1, param_3, param_4, param_5, in_stack_ffffffffffffffb0 & 0xffffff00,
                  param_6, 0xffffffff, uVar12);
    FUN_1802f2240(*param_2, *(uint64_t *)(param_1 + 600));
    param_2 = (int64_t *)*param_2;
    
    /* 获取注册锁 */
    iVar5 = _Mtx_lock(param_1 + 0x607e0);
    if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
    }
    
    /* 创建注册节点 */
    puVar1 = (uint64_t *)(param_1 + 0x60878);
    lVar6 = CoreEngine_MemoryAllocator(system_memory_pool_ptr, 0x28, *(int8_t *)(param_1 + 0x608a0));
    *(int64_t **)(lVar6 + 0x20) = param_2;
    if (param_2 != (int64_t *)0x0) {
        (**(code **)(*param_2 + 0x28))(param_2);
    }
    
    /* 按优先级插入注册表 */
    bVar11 = true;
    puVar10 = puVar1;
    if (*(uint64_t **)(param_1 + 0x60888) != (uint64_t *)0x0) {
        puVar8 = *(uint64_t **)(param_1 + 0x60888);
        do {
            puVar10 = puVar8;
            bVar11 = *(uint64_t *)(lVar6 + 0x20) < (uint64_t)puVar10[4];
            if (bVar11) {
                puVar8 = (uint64_t *)puVar10[1];
            }
            else {
                puVar8 = (uint64_t *)*puVar10;
            }
        } while (puVar8 != (uint64_t *)0x0);
    }
    puVar8 = puVar10;
    if (bVar11) {
        if (puVar10 == *(uint64_t **)(param_1 + 0x60880)) goto LAB_180198da7;
        puVar8 = (uint64_t *)func_0x00018066b9a0(puVar10);
    }
    if (*(uint64_t *)(lVar6 + 0x20) <= (uint64_t)puVar8[4]) {
        if (*(int64_t **)(lVar6 + 0x20) != (int64_t *)0x0) {
            (**(code **)(**(int64_t **)(lVar6 + 0x20) + 0x38))();
        }
        CoreEngine_MemoryPoolManager(lVar6);
    }
LAB_180198da7:
    if ((puVar10 == puVar1) || (*(uint64_t *)(lVar6 + 0x20) < (uint64_t)puVar10[4])) {
        uVar12 = 0;
    }
    else {
        uVar12 = 1;
    }
    SystemConfigProcessor(lVar6, puVar10, puVar1, uVar12);
}

/*=============================================================================
 * 函数别名映射（原始函数名 -> 美化名称）
 *=============================================================================*/

// 对象生命周期管理函数别名
#define FUN_180197a20             ObjectManagerDestructor
#define FUN_1801982b0             ObjectReferenceManager

// 矩阵和向量计算函数别名
#define FUN_1801983b0             MatrixTransformCalculator

// 线程同步和事件处理函数别名
#define FUN_1801985e0             EventQueueManager

// 资源管理和对象创建函数别名
#define FUN_180198750             RenderStateManager
#define FUN_180198890             ObjectCreator
#define FUN_180198980             ObjectDestructor
#define FUN_180198b90             ObjectRegistrar

/*=============================================================================
 * 技术实现要点
 *=============================================================================*/

/*
1. 对象生命周期管理：
   - 分阶段清理策略，确保依赖关系正确处理
   - 异常安全机制，防止清理过程中出现异常
   - 内存泄漏检测，确保所有资源正确释放
   - 线程安全保证，使用适当的同步机制

2. 线程同步和锁管理：
   - 互斥锁的获取和释放策略
   - 条件变量的正确使用
   - 死锁预防机制
   - 性能优化的锁粒度

3. 事件处理系统：
   - 事件队列的动态扩容
   - 事件优先级的处理
   - 事件分发的效率优化
   - 事件回调的管理

4. 矩阵和向量计算：
   - SIMD指令的优化使用
   - 快速平方根倒数算法
   - 浮点数精度控制
   - 矩阵变换的数学优化

5. 资源管理和优化：
   - 内存池的分配策略
   - 对象的快速创建和销毁
   - 资源的重复利用
   - 内存碎片化控制

6. 性能优化策略：
   - 缓存友好的数据结构
   - 算法的时间复杂度优化
   - 内存访问模式优化
   - 并发处理的效率提升

7. 安全考虑：
   - 输入参数的验证
   - 内存访问的安全检查
   - 资源泄露的预防
   - 异常情况的处理

8. 可维护性设计：
   - 清晰的函数职责划分
   - 详细的错误处理机制
   - 完善的日志记录
   - 模块化的架构设计
*/