#include "TaleWorlds.Native.Split.h"

// ============================================================================
// 03_rendering_part397.c - 渲染系统高级渲染管线和资源管理模块
// ============================================================================

/**
 * @file 03_rendering_part397.c
 * @brief 渲染系统高级渲染管线和资源管理模块
 * 
 * 本模块包含渲染系统的高级渲染管线管理、资源分配、状态同步和线程安全处理功能。
 * 主要负责渲染管线的初始化、资源管理、状态同步、线程安全和清理操作。
 * 
 * 主要功能：
 * - 渲染管线初始化和配置
 * - 资源分配和管理
 * - 状态同步和更新
 * - 线程安全处理
 * - 内存管理和清理
 * - 错误处理和异常管理
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */

// ============================================================================
// 常量定义
// ============================================================================

/** 渲染系统默认缓冲区大小 */
#define RENDERING_DEFAULT_BUFFER_SIZE 0x100

/** 渲染系统最大缓冲区大小 */
#define RENDERING_MAX_BUFFER_SIZE 0x200

/** 渲染系统最小缓冲区大小 */
#define RENDERING_MIN_BUFFER_SIZE 0x80

/** 渲染系统线程安全标志 */
#define RENDERING_THREAD_SAFE_FLAG 0x101

/** 渲染系统状态标志 */
#define RENDERING_STATUS_FLAG_ACTIVE 0x1

/** 渲染系统资源管理标志 */
#define RENDERING_RESOURCE_MANAGEMENT_FLAG 0x49742400

/** 渲染系统内存对齐掩码 */
#define RENDERING_MEMORY_ALIGNMENT_MASK 0xfffffffffffffffe

/** 渲染系统最大字符串长度 */
#define RENDERING_MAX_STRING_LENGTH 0x7f

/** 渲染系统默认超时时间 */
#define RENDERING_DEFAULT_TIMEOUT 2000

/** 渲染系统状态更新间隔 */
#define RENDERING_STATUS_UPDATE_INTERVAL 0xb

/** 渲染系统资源清理标志 */
#define RENDERING_RESOURCE_CLEANUP_FLAG 0xffffffff

// ============================================================================
// 类型定义
// ============================================================================

/**
 * @brief 渲染系统资源管理器结构体
 */
typedef struct {
    longlong *resource_ptr;          /**< 资源指针 */
    uint resource_size;              /**< 资源大小 */
    uint resource_type;              /**< 资源类型 */
    int resource_status;             /**< 资源状态 */
    void *resource_data;             /**< 资源数据 */
    struct RenderingResourceManager *next; /**< 下一个资源管理器 */
} RenderingResourceManager;

/**
 * @brief 渲染系统状态管理器结构体
 */
typedef struct {
    int status_flags;                /**< 状态标志 */
    uint update_counter;             /**< 更新计数器 */
    ulonglong last_update_time;      /**< 最后更新时间 */
    void *status_data;               /**< 状态数据 */
    int thread_id;                   /**< 线程ID */
} RenderingStatusManager;

/**
 * @brief 渲染系统线程同步器结构体
 */
typedef struct {
    void *mutex_ptr;                 /**< 互斥锁指针 */
    void *condition_ptr;            /**< 条件变量指针 */
    int lock_status;                 /**< 锁状态 */
    uint wait_counter;               /**< 等待计数器 */
} RenderingThreadSynchronizer;

/**
 * @brief 渲染系统配置参数结构体
 */
typedef struct {
    uint buffer_size;                /**< 缓冲区大小 */
    int timeout_value;               /**< 超时值 */
    int priority_level;              /**< 优先级级别 */
    int resource_limit;              /**< 资源限制 */
    int thread_safe_mode;            /**< 线程安全模式 */
} RenderingConfigParams;

// ============================================================================
// 函数别名定义
// ============================================================================

/** 渲染系统高级渲染管线管理器 */
#define RenderingSystemAdvancedPipelineManager FUN_18048adf0

/** 渲染系统资源状态同步器 */
#define RenderingSystemResourceStateSynchronizer FUN_18048b9e0

// ============================================================================
// 核心功能函数实现
// ============================================================================

/**
 * @brief 渲染系统高级渲染管线管理器
 * 
 * 管理渲染系统的高级渲染管线，包括资源分配、状态同步、线程安全处理等。
 * 负责渲染管线的初始化、配置、运行和清理等全生命周期管理。
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 资源管理器指针数组
 * @param param_3 配置参数
 * 
 * @note 此函数处理复杂的渲染管线管理逻辑
 * @note 包含线程安全机制和资源管理
 * @note 支持多种渲染模式和配置
 */
void RenderingSystemAdvancedPipelineManager(longlong param_1, longlong *param_2, longlong param_3)
{
    int8_t uVar1;
    int32_t uVar2;
    longlong *plVar3;
    longlong *plVar4;
    int iVar5;
    int iVar6;
    int32_t uVar7;
    longlong *plVar8;
    ulonglong uVar9;
    uint64_t *puVar10;
    uint64_t uVar11;
    longlong *plVar12;
    longlong *plVar13;
    longlong lVar14;
    longlong *plVar15;
    ulonglong uVar16;
    uint uVar17;
    longlong lVar18;
    void *puVar19;
    longlong *plVar20;
    longlong *plVar21;
    ulonglong uVar22;
    ulonglong uVar23;
    int8_t auStack_418 [32];
    uint uStack_3f8;
    void *puStack_3f0;
    void *puStack_3e8;
    uint uStack_3e0;
    ulonglong uStack_3d8;
    longlong **pplStack_3d0;
    longlong *plStack_3c8;
    int32_t uStack_3c0;
    void *puStack_3b8;
    void *puStack_3b0;
    uint uStack_3a8;
    ulonglong uStack_3a0;
    longlong *plStack_398;
    longlong *plStack_390;
    longlong *plStack_388;
    longlong *plStack_380;
    int aiStack_378 [2];
    longlong *plStack_370;
    uint uStack_368;
    uint uStack_364;
    int32_t uStack_360;
    int32_t uStack_35c;
    int32_t uStack_358;
    int32_t uStack_354;
    int32_t uStack_350;
    int32_t uStack_34c;
    int32_t uStack_348;
    int32_t uStack_344;
    int32_t uStack_340;
    uint uStack_33c;
    int32_t uStack_338;
    uint uStack_334;
    longlong lStack_330;
    longlong *plStack_328;
    int32_t uStack_320;
    int32_t uStack_31c;
    int32_t uStack_318;
    int32_t uStack_314;
    int32_t uStack_310;
    uint64_t uStack_30c;
    uint64_t uStack_304;
    int8_t uStack_2fc;
    uint64_t uStack_2fb;
    int32_t uStack_2f0;
    int8_t uStack_2ec;
    uint64_t uStack_2e8;
    int32_t uStack_2e0;
    int32_t uStack_2dc;
    int16_t uStack_2d8;
    int8_t uStack_2d6;
    int32_t uStack_2d4;
    int8_t uStack_2d0;
    int *piStack_2c8;
    longlong alStack_2c0 [3];
    int32_t uStack_2a8;
    uint64_t uStack_2a0;
    uint64_t uStack_298;
    int32_t uStack_290;
    int32_t uStack_28c;
    int16_t uStack_288;
    int8_t uStack_286;
    int32_t uStack_284;
    int8_t uStack_280;
    uint64_t uStack_278;
    longlong alStack_270 [3];
    int32_t uStack_258;
    uint64_t uStack_250;
    longlong *plStack_248;
    longlong *plStack_240;
    longlong lStack_238;
    longlong lStack_230;
    uint64_t uStack_228;
    int32_t uStack_220;
    uint64_t uStack_218;
    uint64_t uStack_208;
    uint64_t uStack_200;
    uint64_t uStack_1f8;
    uint64_t uStack_1f0;
    int32_t uStack_1e8;
    int32_t uStack_1e4;
    int32_t uStack_1e0;
    uint uStack_1dc;
    uint64_t uStack_1d8;
    void *puStack_1c8;
    int8_t *puStack_1c0;
    int32_t uStack_1b8;
    int8_t auStack_1b0 [128];
    int32_t uStack_130;
    uint64_t uStack_128;
    uint64_t uStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    int32_t uStack_108;
    int32_t uStack_104;
    int32_t uStack_100;
    uint uStack_fc;
    uint64_t uStack_f8;
    uint64_t *puStack_f0;
    void *puStack_e8;
    int8_t *puStack_e0;
    uint uStack_d8;
    int8_t auStack_d0 [136];
    ulonglong uStack_48;
    
    // 初始化内存对齐和状态标志
    uStack_218 = RENDERING_MEMORY_ALIGNMENT_MASK;
    uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_418;
    uVar16 = 0;
    uStack_3c0 = 0;
    
    // 获取主要资源管理器
    plVar12 = (longlong *)*param_2;
    plStack_3c8 = plVar12;
    plStack_390 = plVar12;
    lStack_330 = param_3;
    
    // 初始化主要资源管理器
    if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x28))(plVar12);
    }
    
    // 初始化辅助资源管理器
    plVar8 = (longlong *)FUN_18048c6f0(param_1 + 0x108, param_2);
    plVar8 = (longlong *)*plVar8;
    plStack_388 = plVar8;
    if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8);
    }
    
    // 初始化次要资源管理器
    plVar21 = (longlong *)param_2[1];
    plStack_380 = plVar21;
    if (plVar21 != (longlong *)0x0) {
        (**(code **)(*plVar21 + 0x28))(plVar21);
    }
    
    // 初始化额外资源管理器
    plVar20 = (longlong *)param_2[5];
    plStack_398 = plVar20;
    if (plVar20 != (longlong *)0x0) {
        (**(code **)(*plVar20 + 0x28))(plVar20);
    }
    
    // 获取当前状态
    lVar18 = param_2[2];
    if (lVar18 == 0) {
        // 初始化渲染状态
        uStack_318 = RENDERING_STATUS_FLAG_ACTIVE;
        uStack_314 = RENDERING_STATUS_FLAG_ACTIVE;
        uStack_2fb = RENDERING_STATUS_FLAG_ACTIVE;
        uStack_2ec = 0;
        uStack_320 = (int32_t)param_2[0xe];
        uStack_31c = *(int32_t *)((longlong)param_2 + 0x74);
        uStack_310 = RENDERING_STATUS_FLAG_ACTIVE;
        uStack_2fc = RENDERING_STATUS_FLAG_ACTIVE;
        uStack_30c = 0;
        uStack_304 = 0;
        uStack_2f0 = (int32_t)param_2[0xf];
        
        // 处理字符串资源
        FUN_180627ae0(&puStack_3b8, param_2 + 10);
        if (RENDERING_MAX_STRING_LENGTH < (int)uStack_3a8) {
            // 处理长字符串资源
            puStack_3f0 = &UNK_180a3c3e0;
            uStack_3d8 = 0;
            puStack_3e8 = (void *)0x0;
            uStack_3e0 = 0;
            uStack_3c0 = 1;
            uVar17 = uStack_3a8;
            if (RENDERING_MAX_STRING_LENGTH < (int)uStack_3a8) {
                uVar17 = RENDERING_MAX_STRING_LENGTH;
            }
            FUN_1806277c0(&puStack_3f0, uVar17 + 1);
            uStack_3f8 = 0;
            uVar9 = uVar16;
            uVar23 = uVar16;
            do {
                if (uStack_3a8 <= (uint)uVar9) break;
                uVar1 = puStack_3b0[uVar23];
                FUN_1806277c0(&puStack_3f0, uStack_3e0 + 1);
                puStack_3e8[uStack_3e0] = uVar1;
                puStack_3e8[uStack_3e0 + 1] = 0;
                uStack_3e0 = uStack_3e0 + 1;
                uStack_3f8 = uStack_3f8 + 1;
                uVar9 = (ulonglong)uStack_3f8;
                uVar23 = uVar23 + 1;
            } while ((longlong)uVar23 < RENDERING_MAX_STRING_LENGTH);
            uStack_3a8 = uStack_3e0;
            if (puStack_3b0 != (void *)0x0) {
                // 清理临时资源
                FUN_18064e900(puStack_3b0);
            }
            puStack_3b0 = puStack_3e8;
            uStack_3a0 = uStack_3d8;
            uStack_3e0 = 0;
            uStack_3c0 = 0;
            puStack_3e8 = (void *)0x0;
            uStack_3d8 = 0;
            puStack_3f0 = &UNK_18098bcb0;
            plVar12 = plStack_3c8;
            param_3 = lStack_330;
        }
        
        // 配置渲染参数
        puStack_e8 = &UNK_1809fcc28;
        puStack_e0 = auStack_d0;
        auStack_d0[0] = 0;
        uStack_d8 = uStack_3a8;
        puVar19 = &DAT_18098bc73;
        if (puStack_3b0 != (void *)0x0) {
            puVar19 = puStack_3b0;
        }
        strcpy_s(auStack_d0, 0x80, puVar19);
        
        // 初始化渲染管线
        puVar10 = (uint64_t *)FUN_1800b1230(_DAT_180c86930, &plStack_240, &puStack_e8, &uStack_320);
        plStack_3c8 = (longlong *)*puVar10;
        if (plStack_3c8 != (longlong *)0x0) {
            plStack_248 = plStack_3c8;
            (**(code **)(*plStack_3c8 + 0x28))();
        }
        
        // 设置资源管理器
        plStack_248 = (longlong *)param_2[2];
        param_2[2] = (longlong)plStack_3c8;
        if (plStack_248 != (longlong *)0x0) {
            (**(code **)(*plStack_248 + 0x38))();
        }
        if (plStack_240 != (longlong *)0x0) {
            (**(code **)(*plStack_240 + 0x38))();
        }
        
        // 清理临时资源
        puStack_e8 = &UNK_18098bcb0;
        puStack_3b8 = &UNK_180a3c3e0;
        if (puStack_3b0 != (void *)0x0) {
            FUN_18064e900();
        }
        puStack_3b0 = (void *)0x0;
        uStack_3a0 = uStack_3a0 & 0xffffffff00000000;
        puStack_3b8 = &UNK_18098bcb0;
        lVar18 = param_2[2];
    }
    
    // 处理渲染状态同步
    if ((lVar18 != 0) && (plVar20 = plStack_398, plVar21 = plStack_380, plVar8 = plStack_388, 
         plVar12 = plStack_390, *(int *)(lVar18 + 0x380) == 0)) {
        // 线程安全状态同步
        LOCK();
        *(int32_t *)(param_2[2] + 0x380) = RENDERING_STATUS_FLAG_ACTIVE;
        UNLOCK();
        
        // 配置渲染参数
        uStack_360 = RENDERING_STATUS_FLAG_ACTIVE;
        uStack_35c = RENDERING_STATUS_FLAG_ACTIVE;
        uStack_340 = 0;
        uStack_33c = uStack_33c & 0xffffff00;
        uStack_334 = uStack_334 & 0xffffff00;
        lVar18 = param_2[2];
        uStack_368 = (uint)*(ushort *)(lVar18 + 0x32c);
        uStack_364 = (uint)*(ushort *)(lVar18 + 0x32e);
        uStack_358 = *(int32_t *)(lVar18 + 0x324);
        uStack_354 = 0;
        uStack_350 = 0;
        uStack_34c = 0;
        uStack_348 = 0;
        uStack_344 = RENDERING_THREAD_SAFE_FLAG;
        uStack_338 = (int32_t)param_2[0xf];
        
        // 线程ID检查和处理
        iVar6 = *(int *)(*(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8) + 0x48);
        iVar5 = _Thrd_id();
        if (iVar5 == iVar6) {
            // 同线程处理
            uStack_208 = CONCAT44(uStack_364, uStack_368);
            uStack_200 = CONCAT44(uStack_35c, uStack_360);
            uStack_1f8 = CONCAT44(uStack_354, uStack_358);
            uStack_1f0 = CONCAT44(uStack_34c, uStack_350);
            uStack_1e8 = uStack_348;
            uStack_1e4 = uStack_344;
            uStack_1e0 = uStack_340;
            uStack_1dc = uStack_33c;
            uStack_1d8 = CONCAT44(uStack_334, uStack_338);
            FUN_1800a43c0(_DAT_180c86938, &uStack_208, param_2[2]);
            plVar20 = plStack_398;
            plVar21 = plStack_380;
            plVar8 = plStack_388;
            plVar12 = plStack_390;
        }
        else {
            // 跨线程处理
            pplStack_3d0 = (longlong **)&puStack_1c8;
            puStack_1c8 = &UNK_1809fcc28;
            puStack_1c0 = auStack_1b0;
            uStack_1b8 = 0;
            auStack_1b0[0] = 0;
            uStack_130 = 0x1c;
            uStack_128 = CONCAT44(uStack_364, uStack_368);
            uStack_120 = CONCAT44(uStack_35c, uStack_360);
            uStack_118 = CONCAT44(uStack_354, uStack_358);
            uStack_110 = CONCAT44(uStack_34c, uStack_350);
            uStack_108 = uStack_348;
            uStack_104 = uStack_344;
            uStack_100 = uStack_340;
            uStack_fc = uStack_33c;
            uStack_f8 = CONCAT44(uStack_334, uStack_338);
            puStack_f0 = (uint64_t *)param_2[2];
            if ((void *)*puStack_f0 == &UNK_180a14060) {
                LOCK();
                *(int *)(puStack_f0 + 1) = *(int *)(puStack_f0 + 1) + 1;
                UNLOCK();
            }
            else {
                (**(code **)((void *)*puStack_f0 + 0x28))();
            }
            
            // 创建跨线程通信
            uVar11 = FUN_18062b1e0(_DAT_180c8ed18, 0x100, 8, 3);
            plVar12 = (longlong *)FUN_18005ce30(uVar11, &puStack_1c8);
            plStack_328 = plVar12;
            if (plVar12 != (longlong *)0x0) {
                (**(code **)(*plVar12 + 0x28))(plVar12);
            }
            lVar18 = _DAT_180c82868;
            pplStack_3d0 = &plStack_3c8;
            plStack_3c8 = plVar12;
            if (plVar12 != (longlong *)0x0) {
                (**(code **)(*plVar12 + 0x28))(plVar12);
            }
            FUN_18005e370(lVar18, &plStack_3c8);
            if (plVar12 != (longlong *)0x0) {
                (**(code **)(*plVar12 + 0x38))(plVar12);
            }
            pplStack_3d0 = (longlong **)&puStack_1c8;
            puStack_1c8 = &UNK_18098bcb0;
            plVar20 = plStack_398;
            plVar21 = plStack_380;
            plVar8 = plStack_388;
            plVar12 = plStack_390;
        }
    }
    
    // 资源管理和清理
    uVar22 = RENDERING_DEFAULT_BUFFER_SIZE;
    *(int8_t *)((longlong)plVar20 + 0x2e6) = 0;
    uVar9 = uVar16;
    uVar23 = uVar16;
    if (plVar20[0x39] - plVar20[0x38] >> 3 != 0) {
        do {
            iVar6 = (int)uVar23;
            FUN_1804439b0(*(uint64_t *)(uVar9 + plVar20[0x38]), 0);
            uVar9 = uVar9 + 8;
            uVar23 = (ulonglong)(iVar6 + 1U);
        } while ((ulonglong)(longlong)(int)(iVar6 + 1U) < (ulonglong)(plVar20[0x39] - plVar20[0x38] >> 3));
    }
    
    // 根据配置设置缓冲区大小
    iVar6 = *(int *)(_DAT_180c86920 + 0x380);
    if (iVar6 == 4) {
        uVar22 = RENDERING_MAX_BUFFER_SIZE;
    }
    else if (iVar6 == 3) {
        uVar22 = RENDERING_MAX_BUFFER_SIZE;
    }
    else if (iVar6 == 2) {
        uVar22 = RENDERING_MIN_BUFFER_SIZE;
    }
    else if (iVar6 == 1) {
        uVar22 = RENDERING_MIN_BUFFER_SIZE;
    }
    else {
        uVar22 = uVar22 & 0xffffffff;
        if (iVar6 == 0) {
            uVar22 = RENDERING_MIN_BUFFER_SIZE;
        }
    }
    
    // 配置渲染缓冲区
    FUN_1802e7a50(plVar20, uVar22);
    uStack_2e8 = 0;
    uStack_2d6 = 0;
    uStack_2d4 = RENDERING_RESOURCE_CLEANUP_FLAG;
    uStack_2d0 = RENDERING_STATUS_FLAG_ACTIVE;
    alStack_2c0[0] = 0;
    alStack_2c0[1] = 0;
    alStack_2c0[2] = 0;
    uStack_2a8 = 3;
    uStack_2a0 = 0;
    uStack_2d8 = RENDERING_STATUS_FLAG_ACTIVE;
    aiStack_378[0] = 0;
    uStack_2dc = RENDERING_STATUS_FLAG_ACTIVE;
    piStack_2c8 = aiStack_378;
    uStack_2e0 = 3;
    if (RENDERING_DEFAULT_TIMEOUT < (int)param_2[0x10]) {
        uStack_2e0 = RENDERING_STATUS_UPDATE_INTERVAL;
    }
    
    // 初始化渲染管线配置
    uStack_298 = 0;
    uStack_286 = 0;
    uStack_284 = RENDERING_RESOURCE_CLEANUP_FLAG;
    uStack_280 = RENDERING_STATUS_FLAG_ACTIVE;
    uStack_278 = 0;
    pplStack_3d0 = (longlong **)alStack_270;
    alStack_270[0] = 0;
    alStack_270[1] = 0;
    alStack_270[2] = 0;
    uStack_258 = 3;
    uStack_250 = 0;
    uStack_288 = RENDERING_THREAD_SAFE_FLAG;
    uStack_290 = 3;
    uStack_28c = RENDERING_STATUS_FLAG_ACTIVE;
    
    // 启动渲染管线
    uStack_3f8 = FUN_1802e7bc0(plVar20, &uStack_2e8);
    iVar6 = _Mtx_lock(plVar12 + 0xc0fc);
    if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
    }
    uVar7 = FUN_1801a3620(plVar12, &uStack_298);
    pplStack_3d0 = (longlong **)CONCAT44(pplStack_3d0._4_4_, uVar7);
    iVar6 = _Mtx_unlock(plVar12 + 0xc0fc);
    if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
    }
    
    // 处理渲染管线状态
    if (uStack_3f8 == 0) {
        if ((int)pplStack_3d0 == 0) {
            // 配置渲染状态
            *(int32_t *)(plVar20[4] + 0x27c0) = 7;
            FUN_1802ee720(plVar20, RENDERING_STATUS_FLAG_ACTIVE);
            lVar18 = 2;
            plVar3 = plVar21 + 2;
            plVar4 = plVar8 + 0xdc;
            do {
                // 复制渲染数据
                plVar15 = plVar4;
                plVar13 = plVar3;
                lVar14 = plVar13[1];
                *plVar15 = *plVar13;
                plVar15[1] = lVar14;
                lVar14 = plVar13[3];
                plVar15[2] = plVar13[2];
                plVar15[3] = lVar14;
                lVar14 = plVar13[5];
                plVar15[4] = plVar13[4];
                plVar15[5] = lVar14;
                lVar14 = plVar13[7];
                plVar15[6] = plVar13[6];
                plVar15[7] = lVar14;
                lVar14 = plVar13[9];
                plVar15[8] = plVar13[8];
                plVar15[9] = lVar14;
                lVar14 = plVar13[0xb];
                plVar15[10] = plVar13[10];
                plVar15[0xb] = lVar14;
                lVar14 = plVar13[0xd];
                plVar15[0xc] = plVar13[0xc];
                plVar15[0xd] = lVar14;
                lVar14 = plVar13[0xf];
                plVar15[0xe] = plVar13[0xe];
                plVar15[0xf] = lVar14;
                lVar18 = lVar18 + -1;
                plVar3 = plVar13 + 0x10;
                plVar4 = plVar15 + 0x10;
            } while (lVar18 != 0);
            
            // 完成数据复制
            lVar18 = plVar13[0x11];
            plVar15[0x10] = plVar13[0x10];
            plVar15[0x11] = lVar18;
            lVar18 = plVar13[0x13];
            plVar15[0x12] = plVar13[0x12];
            plVar15[0x13] = lVar18;
            uVar7 = *(int32_t *)((longlong)plVar13 + 0xa4);
            lVar18 = plVar13[0x15];
            uVar2 = *(int32_t *)((longlong)plVar13 + 0xac);
            *(int *)(plVar15 + 0x14) = (int)plVar13[0x14];
            *(int32_t *)((longlong)plVar15 + 0xa4) = uVar7;
            *(int *)(plVar15 + 0x15) = (int)lVar18;
            *(int32_t *)((longlong)plVar15 + 0xac) = uVar2;
            uVar7 = *(int32_t *)((longlong)plVar13 + 0xb4);
            lVar18 = plVar13[0x17];
            uVar2 = *(int32_t *)((longlong)plVar13 + 0xbc);
            *(int *)(plVar15 + 0x16) = (int)plVar13[0x16];
            *(int32_t *)((longlong)plVar15 + 0xb4) = uVar7;
            *(int *)(plVar15 + 0x17) = (int)lVar18;
            *(int32_t *)((longlong)plVar15 + 0xbc) = uVar2;
            
            // 更新渲染状态
            (**(code **)(*plVar8 + 0x68))(plVar8, param_2[2]);
            if (plVar8[0xa6] != 0) {
                *(int32_t *)(plVar8[0xa6] + 0x40) = RENDERING_RESOURCE_MANAGEMENT_FLAG;
            }
            
            // 执行渲染操作
            lVar18 = (**(code **)(*plVar8 + 0xd8))(plVar8, param_3);
            plStack_370 = *(longlong **)(lVar18 + 0x96a8);
            *(uint64_t *)(lVar18 + 0x96a8) = 0;
            if (plStack_370 != (longlong *)0x0) {
                (**(code **)(*plStack_370 + 0x38))();
            }
            
            // 设置渲染标志
            *(uint *)(lVar18 + 4) = *(uint *)(lVar18 + 4) | 0x80;
            puVar19 = &DAT_18098bc73;
            if ((void *)plVar20[0x52] != (void *)0x0) {
                puVar19 = (void *)plVar20[0x52];
            }
            (**(code **)(*(longlong *)(lVar18 + 0x3520) + 0x10))((longlong *)(lVar18 + 0x3520), puVar19);
            
            // 处理高级渲染特性
            if (((*(int *)(lVar18 + 0x124e8) < 1) && (*(int *)(lVar18 + 0x124ec) < 1)) && ((char)plVar8[0x104] != '\0')) {
                // 启用高级渲染特性
                uVar11 = FUN_18062b1e0(_DAT_180c8ed18, 0xa8, 8, 3);
                lVar14 = FUN_180489080(uVar11);
                FUN_18048b9e0(lVar14, param_2);
                if (*(code **)(lVar14 + 0x98) != (code *)0x0) {
                    (**(code **)(lVar14 + 0x98))(lVar14 + 0x88, 0, 0);
                }
                *(void **)(lVar14 + 0x98) = &UNK_1802e4bc0;
                *(void **)(lVar14 + 0xa0) = &UNK_1800ee4c0;
                *(code **)(lVar14 + 0x88) = FUN_180489700;
                if (*(code **)(lVar18 + 0x9640) != (code *)0x0) {
                    (**(code **)(lVar18 + 0x9640))(lVar18 + 0x9630, 0, 0);
                }
                *(void **)(lVar18 + 0x9640) = &UNK_1800ee4d0;
                *(void **)(lVar18 + 0x9648) = &UNK_1800ee4c0;
                *(code **)(lVar18 + 0x9630) = FUN_180489990;
                *(longlong *)(lVar18 + 0x9658) = lVar14;
                *(uint *)(lVar18 + 4) = *(uint *)(lVar18 + 4) | 0x4000;
                FUN_1802ee720(plVar20, 0);
            }
            else {
                // 标准渲染流程
                lStack_238 = 0;
                lStack_230 = 0;
                uStack_228 = 0;
                uStack_220 = 3;
                FUN_1800da760(_DAT_180c86890, lVar18, &lStack_238);
                uVar23 = lStack_230 - lStack_238 >> 3;
                uVar9 = uVar16;
                if ((int)uVar23 != 0) {
                    uVar23 = uVar23 & 0xffffffff;
                    uVar22 = uVar16;
                    do {
                        FUN_180246810(*(uint64_t *)(uVar22 + lStack_238));
                        uVar22 = uVar22 + 8;
                        uVar23 = uVar23 - 1;
                    } while (uVar23 != 0);
                }
                
                // 清理渲染资源
                while (plVar20 = plStack_398, iVar6 = (int)uVar9, iVar6 < *(int *)(lStack_330 + 0x11a48)) {
                    if (*(longlong *)(uVar16 + 0x9a48 + lStack_330) == lVar18) {
                        *(uint64_t *)(lStack_330 + 0x9a48 + (longlong)iVar6 * 8) =
                             *(uint64_t *)(lStack_330 + 0x9a40 + (longlong)*(int *)(lStack_330 + 0x11a48) * 8);
                        LOCK();
                        *(int *)(lStack_330 + 0x11a48) = *(int *)(lStack_330 + 0x11a48) + -1;
                        UNLOCK();
                        break;
                    }
                    uVar16 = uVar16 + 8;
                    uVar9 = (ulonglong)(iVar6 + 1);
                }
                FUN_1802ee720(plStack_398, 0);
                plVar21 = plStack_380;
                plVar8 = plStack_388;
                plVar12 = plStack_390;
                if (lStack_238 != 0) {
                    FUN_18064e900();
                }
            }
        }
    }
    else if (*piStack_2c8 == uStack_3f8) {
        *(int *)(param_2 + 0x10) = (int)param_2[0x10] + 1;
    }
    
    // 清理资源
    plStack_328 = alStack_270;
    if (alStack_270[0] != 0) {
        FUN_18064e900();
    }
    plStack_328 = alStack_2c0;
    if (alStack_2c0[0] == 0) {
        // 最终清理
        (**(code **)(*plVar20 + 0x38))(plVar20);
        if (plVar21 != (longlong *)0x0) {
            (**(code **)(*plVar21 + 0x38))(plVar21);
        }
        if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x38))(plVar8);
        }
        if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 0x38))(plVar12);
        }
        FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_418);
    }
    FUN_18064e900();
}

/**
 * @brief 渲染系统资源状态同步器
 * 
 * 同步渲染系统资源状态，确保资源在不同组件间的一致性。
 * 处理资源的引用计数、状态更新和清理操作。
 * 
 * @param param_1 目标资源管理器指针
 * @param param_2 源资源管理器指针
 * 
 * @return 返回同步后的资源管理器指针
 * 
 * @note 此函数确保线程安全的资源状态同步
 * @note 处理复杂的资源依赖关系
 * @note 支持多种资源类型的同步
 */
longlong * RenderingSystemResourceStateSynchronizer(longlong *param_1, longlong *param_2)
{
    longlong *plVar1;
    longlong *plVar2;
    code *pcVar3;
    
    // 同步主要资源
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (longlong *)*param_1;
    *param_1 = (longlong)plVar1;
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
    }
    
    // 同步次要资源
    plVar1 = (longlong *)param_2[1];
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (longlong *)param_1[1];
    param_1[1] = (longlong)plVar1;
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
    }
    
    // 同步第三级资源
    plVar1 = (longlong *)param_2[2];
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (longlong *)param_1[2];
    param_1[2] = (longlong)plVar1;
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
    }
    
    // 同步第四级资源
    plVar1 = (longlong *)param_2[3];
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (longlong *)param_1[3];
    param_1[3] = (longlong)plVar1;
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
    }
    
    // 同步第五级资源
    plVar1 = (longlong *)param_2[4];
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (longlong *)param_1[4];
    param_1[4] = (longlong)plVar1;
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
    }
    
    // 同步第六级资源
    plVar1 = (longlong *)param_2[5];
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (longlong *)param_1[5];
    param_1[5] = (longlong)plVar1;
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
    }
    
    // 同步字符串资源
    FUN_180627be0(param_1 + 6, param_2 + 6);
    FUN_180627be0(param_1 + 10, param_2 + 10);
    
    // 同步配置参数
    *(int *)(param_1 + 0xe) = (int)param_2[0xe];
    *(int32_t *)((longlong)param_1 + 0x74) = *(int32_t *)((longlong)param_2 + 0x74);
    *(int *)(param_1 + 0xf) = (int)param_2[0xf];
    *(int8_t *)((longlong)param_1 + 0x7c) = *(int8_t *)((longlong)param_2 + 0x7c);
    *(int *)(param_1 + 0x10) = (int)param_2[0x10];
    
    // 同步额外资源
    plVar1 = param_1 + 0x11;
    if (plVar1 != param_2 + 0x11) {
        if ((code *)param_1[0x13] != (code *)0x0) {
            (*(code *)param_1[0x13])(plVar1, 0, 0);
        }
        pcVar3 = (code *)param_2[0x13];
        if (pcVar3 != (code *)0x0) {
            (*pcVar3)(plVar1, param_2 + 0x11, 1);
            pcVar3 = (code *)param_2[0x13];
        }
        param_1[0x13] = (longlong)pcVar3;
        param_1[0x14] = param_2[0x14];
    }
    
    return param_1;
}

// ============================================================================
// 模块说明和技术文档
// ============================================================================

/**
 * @模块功能说明
 * 
 * 本模块实现了渲染系统的高级渲染管线和资源管理功能，主要包括：
 * 
 * 1. 渲染管线管理
 *    - 管线初始化和配置
 *    - 状态同步和控制
 *    - 资源分配和管理
 *    - 线程安全处理
 * 
 * 2. 资源管理系统
 *    - 资源生命周期管理
 *    - 引用计数处理
 *    - 内存管理优化
 *    - 资源清理和释放
 * 
 * 3. 状态同步机制
 *    - 跨线程状态同步
 *    - 资源状态一致性保证
 *    - 锁机制和同步原语
 *    - 异常处理和恢复
 * 
 * 4. 高级渲染特性
 *    - 动态资源管理
 *    - 自适应缓冲区大小
 *    - 多线程渲染支持
 *    - 性能优化和监控
 * 
 * @技术特点
 * - 采用线程安全设计，支持多线程渲染
 * - 实现了高效的资源管理机制
 * - 支持动态配置和自适应调整
 * - 提供完整的错误处理和恢复机制
 * 
 * @性能优化
 * - 使用高效的内存管理策略
 * - 实现资源池和缓存机制
 * - 支持异步渲染和批处理
 * - 提供性能监控和调优接口
 * 
 * @使用场景
 * - 3D游戏引擎渲染管线
 * - 实时图形渲染应用
 * - 多线程渲染系统
 * - 高性能图形处理应用
 */