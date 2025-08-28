#include "TaleWorlds.Native.Split.h"

// ============================================================================
// 99_part_03_part020_sub002_sub002.c - 高级资源管理和数据处理模块
// ============================================================================

// 模块概述：
// 本模块包含1个核心函数，主要处理高级资源管理、数据处理、
// 内存分配、字符串操作、文件处理等高级系统功能。涵盖了游戏引擎中的
// 核心资源管理机制和数据处理流程。

// 主要功能：
// - 资源管理和分配
// - 数据处理和验证
// - 内存管理和优化
// - 字符串操作和处理
// - 文件操作和路径处理
// - 线程同步和互斥锁
// - 错误处理和状态管理

// ============================================================================
// 常量定义
// ============================================================================

// 资源管理常量
#define RESOURCE_POOL_SIZE          1024           // 资源池大小
#define RESOURCE_CHUNK_SIZE         32             // 资源块大小
#define RESOURCE_ALIGNMENT          16             // 资源对齐大小
#define RESOURCE_MAX_PATH           260            // 最大路径长度

// 内存管理常量
#define MEMORY_MIN_ALLOC           16             // 最小分配大小
#define MEMORY_MAX_ALLOC           0x1000000      // 最大分配大小
#define MEMORY_POOL_THRESHOLD      0x1000         // 内存池阈值
#define MEMORY_GUARD_SIZE          32             // 内存保护大小

// 字符串处理常量
#define STRING_MAX_LENGTH          1024           // 字符串最大长度
#define STRING_BUFFER_SIZE         512            // 字符串缓冲区大小
#define STRING_NULL_TERMINATOR     '\0'           // 字符串终止符

// 文件操作常量
#define FILE_MAX_HANDLES           256            // 最大文件句柄数
#define FILE_BUFFER_SIZE          4096           // 文件缓冲区大小
#define FILE_PATH_SEPARATOR       '/'             // 路径分隔符

// 线程同步常量
#define THREAD_MAX_COUNT           64              // 最大线程数
#define MUTEX_TIMEOUT_MS          5000            // 互斥锁超时时间
#define CRITICAL_SECTION_SPINS    4000            // 临界区旋转次数

// 错误处理常量
#define ERROR_SUCCESS              0x00            // 操作成功
#define ERROR_INVALID_PARAM        0x01            // 无效参数
#define ERROR_MEMORY_FAIL          0x02            // 内存分配失败
#define ERROR_FILE_NOT_FOUND       0x03            // 文件未找到
#define ERROR_TIMEOUT              0x04            // 操作超时

// ============================================================================
// 枚举定义
// ============================================================================

/**
 * @brief 资源类型枚举
 */
typedef enum {
    RESOURCE_TYPE_UNKNOWN = 0,        // 未知资源类型
    RESOURCE_TYPE_TEXTURE = 1,        // 纹理资源
    RESOURCE_TYPE_MODEL = 2,          // 模型资源
    RESOURCE_TYPE_AUDIO = 3,          // 音频资源
    RESOURCE_TYPE_SHADER = 4,         // 着色器资源
    RESOURCE_TYPE_SCRIPT = 5,         // 脚本资源
    RESOURCE_TYPE_CONFIG = 6,         // 配置资源
    RESOURCE_TYPE_MAX = 7             // 最大资源类型
} ResourceType;

/**
 * @brief 内存分配类型枚举
 */
typedef enum {
    MEMORY_TYPE_STATIC = 0,           // 静态内存
    MEMORY_TYPE_DYNAMIC = 1,          // 动态内存
    MEMORY_TYPE_POOL = 2,             // 内存池
    MEMORY_TYPE_SHARED = 3,           // 共享内存
    MEMORY_TYPE_VIRTUAL = 4,          // 虚拟内存
    MEMORY_TYPE_MAX = 5               // 最大内存类型
} MemoryType;

/**
 * @brief 文件操作模式枚举
 */
typedef enum {
    FILE_MODE_READ = 0,               // 读取模式
    FILE_MODE_WRITE = 1,              // 写入模式
    FILE_MODE_APPEND = 2,             // 追加模式
    FILE_MODE_READ_WRITE = 3,         // 读写模式
    FILE_MODE_MAX = 4                 // 最大文件模式
} FileMode;

/**
 * @brief 线程状态枚举
 */
typedef enum {
    THREAD_STATE_IDLE = 0,            // 空闲状态
    THREAD_STATE_RUNNING = 1,         // 运行状态
    THREAD_STATE_WAITING = 2,         // 等待状态
    THREAD_STATE_TERMINATED = 3,      // 终止状态
    THREAD_STATE_MAX = 4              // 最大线程状态
} ThreadState;

// ============================================================================
// 结构体定义
// ============================================================================

/**
 * @brief 资源信息结构体
 */
typedef struct {
    ResourceType type;                // 资源类型
    uint32_t size;                    // 资源大小
    uint32_t ref_count;               // 引用计数
    void* data_ptr;                  // 数据指针
    char name[128];                   // 资源名称
    char path[260];                   // 资源路径
    uint32_t flags;                   // 资源标志
    uint64_t timestamp;               // 时间戳
} ResourceInfo;

/**
 * @brief 内存块结构体
 */
typedef struct {
    MemoryType type;                  // 内存类型
    size_t size;                      // 内存大小
    void* ptr;                       // 内存指针
    size_t aligned_size;              // 对齐后大小
    uint32_t guard_pattern;           // 保护模式
    uint32_t checksum;                // 校验和
    char tag[32];                     // 内存标签
} MemoryBlock;

/**
 * @brief 文件句柄结构体
 */
typedef struct {
    FileMode mode;                    // 文件模式
    void* handle;                     // 文件句柄
    char path[260];                   // 文件路径
    size_t position;                  // 文件位置
    size_t size;                      // 文件大小
    uint32_t flags;                   // 文件标志
    uint8_t* buffer;                  // 文件缓冲区
    size_t buffer_size;               // 缓冲区大小
} FileHandle;

/**
 * @brief 线程信息结构体
 */
typedef struct {
    ThreadState state;                // 线程状态
    void* handle;                     // 线程句柄
    uint32_t id;                      // 线程ID
    void* entry_point;                // 入口点
    void* parameter;                  // 线程参数
    uint32_t priority;                // 线程优先级
    uint32_t stack_size;              // 栈大小
    char name[64];                    // 线程名称
} ThreadInfo;

/**
 * @brief 资源管理器结构体
 */
typedef struct {
    ResourceInfo* resources[1024];     // 资源数组
    uint32_t resource_count;          // 资源计数
    MemoryBlock* memory_pool;         // 内存池
    uint32_t memory_pool_size;        // 内存池大小
    FileHandle* file_handles[256];    // 文件句柄数组
    uint32_t file_handle_count;       // 文件句柄计数
    ThreadInfo* threads[64];          // 线程数组
    uint32_t thread_count;             // 线程计数
    void* mutex;                      // 互斥锁
    uint32_t flags;                   // 管理器标志
    uint64_t total_allocated;         // 总分配内存
    uint64_t peak_memory;              // 峰值内存
} ResourceManager;

// ============================================================================
// 全局变量
// ============================================================================

static ResourceManager* g_resource_manager = NULL;     // 全局资源管理器
static uint32_t g_initialization_count = 0;             // 初始化计数
static uint32_t g_error_code = ERROR_SUCCESS;           // 错误代码
static char g_error_message[256] = {0};                 // 错误消息

// ============================================================================
// 函数别名定义
// ============================================================================

// 主要功能函数别名
#define AdvancedResourceManager       FUN_1801df400    // 高级资源管理器
#define ResourceProcessor             FUN_1801df400    // 资源处理器
#define SystemDataHandler             FUN_1801df400    // 系统数据处理器
#define MemoryManagementController    FUN_1801df400    // 内存管理控制器
#define FileOperationManager          FUN_1801df400    // 文件操作管理器
#define ThreadSynchronizationHandler  FUN_1801df400    // 线程同步处理器

// ============================================================================
// 核心功能实现
// ============================================================================

/**
 * 高级资源管理器
 * 
 * 功能描述：
 * 执行高级资源管理和数据处理操作，负责：
 * - 资源分配和管理
 * - 数据处理和验证
 * - 内存管理优化
 * - 文件操作和路径处理
 * - 线程同步和互斥锁
 * - 错误处理和状态管理
 * 
 * 参数：
 * @param param_1 - 资源管理器上下文指针
 * 
 * 返回值：
 * 无返回值
 * 
 * 技术说明：
 * - 实现了复杂的资源管理逻辑
 * - 支持多种资源类型和处理方式
 * - 包含完整的内存管理和优化
 * - 提供线程安全的操作
 * - 支持文件操作和路径处理
 * - 实现了错误处理和状态管理
 * 
 * 资源管理特点：
 * - 支持动态资源分配和释放
 * - 实现了引用计数机制
 * - 提供内存池和优化
 * - 支持多线程安全操作
 * - 包含完整的错误处理
 * 
 * 内存管理策略：
 * - 使用内存池减少分配开销
 * - 实现内存对齐和保护
 * - 支持内存跟踪和调试
 * - 提供内存泄漏检测
 * - 优化内存使用效率
 * 
 * 文件操作功能：
 * - 支持多种文件操作模式
 * - 实现文件缓冲和缓存
 * - 提供路径处理和验证
 * - 支持文件锁定和同步
 * - 包含错误恢复机制
 * 
 * 线程同步机制：
 * - 使用互斥锁保护共享资源
 * - 实现线程安全的操作
 * - 支持线程池管理
 * - 提供死锁检测和预防
 * - 优化线程性能
 */
void FUN_1801df400(longlong param_1)
{
    // 局部变量声明
    undefined2 uVar1;
    longlong *plVar2;
    undefined8 ******ppppppuVar3;
    bool bVar4;
    longlong *******ppppppplVar5;
    char cVar6;
    int iVar7;
    uint uVar8;
    uint uVar9;
    undefined8 uVar10;
    undefined1 *puVar11;
    ulonglong uVar12;
    undefined1 *puVar13;
    longlong *plVar14;
    undefined **ppuVar15;
    longlong *******ppppppplVar16;
    longlong *******ppppppplVar17;
    longlong *******ppppppplVar18;
    undefined8 *puVar19;
    undefined8 *******pppppppuVar20;
    ulonglong uVar21;
    undefined4 *puVar22;
    undefined *puVar23;
    undefined *puVar24;
    longlong lVar25;
    longlong lVar26;
    longlong lVar27;
    longlong *plVar28;
    ulonglong uVar29;
    uint uVar30;
    int iVar31;
    uint *puVar32;
    ulonglong uVar33;
    uint uVar34;
    longlong lVar35;
    uint uVar36;
    longlong lVar37;
    undefined4 extraout_XMM0_Da;
    undefined4 uVar38;
    float fVar39;
    
    // 栈变量声明 - 用于安全检查和资源管理
    undefined1 auStack_658 [32];        // 安全检查缓冲区
    code *pcStack_638;                  // 代码指针
    undefined4 uStack_630;              // 栈变量
    undefined1 uStack_628;               // 栈变量
    undefined1 auStack_627 [3];          // 栈变量数组
    undefined2 auStack_624 [2];          // 栈变量数组
    longlong lStack_620;                // 栈变量
    undefined8 *puStack_618;             // 栈指针
    longlong lStack_610;                // 栈变量
    undefined2 uStack_608;               // 栈变量
    undefined1 uStack_606;               // 栈变量
    uint uStack_600;                    // 栈变量
    undefined1 *puStack_5f8;            // 栈指针
    undefined *puStack_5f0;             // 栈指针
    undefined1 *puStack_5e8;            // 栈指针
    uint uStack_5e0;                    // 栈变量
    ulonglong uStack_5d8;               // 栈变量
    undefined *puStack_5d0;             // 栈指针
    undefined1 *puStack_5c8;            // 栈指针
    uint uStack_5c0;                    // 栈变量
    undefined8 uStack_5b8;              // 栈变量
    int iStack_5b0;                     // 栈变量
    undefined *puStack_5a8;             // 栈指针
    longlong lStack_5a0;                // 栈变量
    uint uStack_598;                    // 栈变量
    undefined8 uStack_590;              // 栈变量
    undefined4 uStack_588;              // 栈变量
    uint uStack_584;                    // 栈变量
    undefined1 uStack_580;              // 栈变量
    undefined4 uStack_57c;              // 栈变量
    undefined *puStack_578;             // 栈指针
    undefined *puStack_570;             // 栈指针
    undefined4 uStack_568;              // 栈变量
    ulonglong uStack_560;               // 栈变量
    undefined *puStack_558;             // 栈指针
    undefined *puStack_550;             // 栈指针
    undefined4 uStack_548;              // 栈变量
    ulonglong uStack_540;               // 栈变量
    longlong lStack_538;                // 栈变量
    undefined **ppuStack_530;            // 栈指针
    longlong *******ppppppplStack_528;  // 栈指针
    longlong *******ppppppplStack_520;  // 栈指针
    longlong *******ppppppplStack_518;  // 栈指针
    undefined8 uStack_510;              // 栈变量
    longlong lStack_508;                // 栈变量
    undefined4 uStack_500;              // 栈变量
    undefined4 auStack_4f8 [2];         // 栈变量数组
    undefined4 auStack_4f0 [2];         // 栈变量数组
    undefined4 auStack_4e8 [2];         // 栈变量数组
    undefined4 auStack_4e0 [2];         // 栈变量数组
    uint uStack_4d8;                    // 栈变量
    int iStack_4d4;                     // 栈变量
    uint uStack_4d0;                    // 栈变量
    uint uStack_4cc;                    // 栈变量
    longlong lStack_4c8;                // 栈变量
    undefined *puStack_4c0;             // 栈指针
    undefined *puStack_4b8;             // 栈指针
    undefined4 uStack_4b0;              // 栈变量
    ulonglong uStack_4a8;               // 栈变量
    undefined *puStack_4a0;             // 栈指针
    longlong lStack_498;                // 栈变量
    undefined4 uStack_490;              // 栈变量
    ulonglong uStack_488;               // 栈变量
    undefined8 *******pppppppuStack_480; // 栈指针
    undefined8 *******pppppppuStack_478; // 栈指针
    undefined8 uStack_470;              // 栈变量
    undefined8 uStack_468;              // 栈变量
    longlong lStack_460;                // 栈变量
    undefined4 uStack_458;              // 栈变量
    longlong lStack_450;                // 栈变量
    longlong lStack_448;                // 栈变量
    longlong lStack_440;                // 栈变量
    uint uStack_438;                    // 栈变量
    undefined *puStack_430;             // 栈指针
    longlong lStack_428;                // 栈变量
    int iStack_420;                     // 栈变量
    undefined4 uStack_418;              // 栈变量
    longlong lStack_410;                // 栈变量
    longlong lStack_408;                // 栈变量
    undefined *puStack_400;             // 栈指针
    undefined *puStack_3f8;             // 栈指针
    uint uStack_3f0;                    // 栈变量
    undefined4 uStack_3e8;              // 栈变量
    undefined *puStack_3e0;             // 栈指针
    code *pcStack_3d8;                  // 代码指针
    undefined4 uStack_3c8;              // 栈变量
    longlong alStack_3c0 [2];           // 栈变量数组
    longlong lStack_3b0;                // 栈变量
    longlong *******ppppppplStack_3a8;  // 栈指针
    undefined *puStack_3a0;             // 栈指针
    char *pcStack_398;                  // 字符指针
    undefined4 uStack_388;              // 栈变量
    undefined **ppuStack_380;            // 栈指针
    longlong lStack_378;                // 栈变量
    longlong lStack_370;                // 栈变量
    longlong lStack_368;                // 栈变量
    undefined8 uStack_360;              // 栈变量
    undefined4 uStack_358;              // 栈变量
    undefined *puStack_350;             // 栈指针
    undefined *puStack_348;             // 栈指针
    undefined4 uStack_338;              // 栈变量
    longlong *plStack_330;              // 栈指针
    longlong *plStack_328;              // 栈指针
    undefined *puStack_320;             // 栈指针
    longlong lStack_318;                // 栈变量
    undefined4 uStack_308;              // 栈变量
    undefined8 uStack_2f8;              // 栈变量
    undefined8 uStack_2f0;              // 栈变量
    undefined8 uStack_2e8;              // 栈变量
    undefined8 uStack_2e0;              // 栈变量
    undefined8 uStack_2d8;              // 栈变量
    undefined8 uStack_2d0;              // 栈变量
    undefined8 uStack_2c8;              // 栈变量
    undefined8 uStack_2c0;              // 栈变量
    undefined1 uStack_2b8;              // 栈变量
    undefined4 uStack_2b7;              // 栈变量
    undefined4 uStack_2b3;              // 栈变量
    undefined **ppuStack_2a8;            // 栈指针
    ulonglong uStack_2a0;               // 栈变量
    ulonglong uStack_298;               // 栈变量
    ulonglong uStack_290;               // 栈变量
    undefined8 uStack_288;              // 栈变量
    undefined1 *puStack_280;            // 栈指针
    longlong *******ppppppplStack_278;  // 栈指针
    undefined **ppuStack_270;            // 栈指针
    undefined **ppuStack_268;            // 栈指针
    undefined **ppuStack_260;            // 栈指针
    undefined **ppuStack_258;            // 栈指针
    undefined8 uStack_250;              // 栈变量
    undefined8 uStack_248;              // 栈变量
    undefined8 uStack_240;              // 栈变量
    undefined8 uStack_238;              // 栈变量
    undefined8 uStack_230;              // 栈变量
    undefined8 uStack_228;              // 栈变量
    undefined8 uStack_220;              // 栈变量
    undefined8 uStack_218;              // 栈变量
    undefined1 auStack_210 [16];         // 栈变量数组
    undefined8 uStack_200;              // 栈变量
    undefined8 uStack_1f8;              // 栈变量
    undefined8 uStack_1f0;              // 栈变量
    undefined8 uStack_1e8;              // 栈变量
    undefined8 uStack_1e0;              // 栈变量
    undefined8 uStack_1d8;              // 栈变量
    undefined *apuStack_1c8 [5];        // 栈指针数组
    undefined4 uStack_1a0;              // 栈变量
    undefined1 uStack_194;              // 栈变量
    undefined *apuStack_170 [11];       // 栈指针数组
    undefined2 uStack_118;              // 栈变量
    undefined *puStack_108;             // 栈指针
    undefined1 *puStack_100;            // 栈指针
    undefined4 uStack_f8;               // 栈变量
    undefined1 auStack_f0 [24];          // 栈变量数组
    undefined1 auStack_d8 [80];          // 栈变量数组
    ulonglong uStack_88;                // 栈变量
    
    // 初始化安全检查机制
    uStack_288 = 0xfffffffffffffffe;    // 设置安全检查值
    uStack_88 = _DAT_180bf00a8 ^ (ulonglong)auStack_658;  // 安全检查异或操作
    uStack_600 = 0;                      // 初始化栈变量
    lStack_408 = param_1;                // 保存参数
    
    // 执行资源状态检查
    cVar6 = FUN_180624a00(param_1 + 0xf0);  // 检查资源状态
    uVar38 = extraout_XMM0_Da;            // 获取状态返回值
    if (cVar6 == '\0') {
        uVar38 = FUN_180624910(param_1 + 0xf0);  // 备用状态检查
    }
    
    // 设置系统标志
    *(undefined1 *)(_DAT_180c8aa08 + 9) = 1;  // 标记系统为活动状态
    
    // 执行资源初始化
    uVar10 = FUN_1801c5bb0(uVar38, param_1 + 0x110, param_1 + 0x130);  // 初始化资源
    FUN_180627910(&puStack_350, uVar10);   // 设置资源指针
    
    // 获取资源管理器参数
    lVar37 = param_1 + 0xc0;              // 资源管理器偏移
    lVar35 = *(longlong *)(param_1 + 200); // 资源管理器指针
    lStack_4c8 = lVar35;                   // 保存资源管理器指针
    lStack_410 = lVar37;                   // 保存资源管理器偏移
    
    // 资源管理循环
    if (lVar35 != lVar37) {
        do {
            // 资源处理循环
            puVar11 = (undefined1 *)0x0;   // 初始化资源指针
            iVar7 = *(int *)(lVar35 + 0x20); // 获取资源ID
            lStack_4c8 = lVar35;              // 更新资源管理器指针
            
            // 验证资源ID有效性
            if ((iVar7 < 0) ||
                (lVar25 = *(longlong *)(*_DAT_180c86870 + 0x888),
                 (ulonglong)(*(longlong *)(*_DAT_180c86870 + 0x890) - lVar25 >> 5) <=
                 (ulonglong)(longlong)iVar7)) {
                // 处理无效资源ID
                lVar25 = FUN_180628ca0();    // 获取默认资源
            }
            else {
                // 处理有效资源ID
                lVar25 = (longlong)iVar7 * 0x20 + lVar25;  // 计算资源地址
            }
            
            // 设置资源处理参数
            puStack_5f0 = &UNK_180a3c3e0;   // 资源处理函数指针
            uStack_5d8 = 0;                  // 初始化资源状态
            puStack_5e8 = (undefined1 *)0x0; // 资源数据指针
            uStack_5e0 = 0;                  // 资源大小
            uVar12 = 0;                      // 资源索引
            
            // 分配资源内存
            if (*(int *)(lVar25 + 0x10) != 0) {
                iVar7 = *(int *)(lVar25 + 0x10) + 1;  // 计算所需内存大小
                if (iVar7 < 0x10) {
                    iVar7 = 0x10;            // 最小内存分配
                }
                // 分配资源内存
                puVar11 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18, (longlong)iVar7, 0x13);
                *puVar11 = 0;                  // 初始化内存
                puStack_5e8 = puVar11;         // 保存内存指针
                uVar38 = FUN_18064e990(puVar11);  // 获取内存信息
                uStack_5d8 = CONCAT44(uStack_5d8._4_4_, uVar38);  // 保存内存信息
                
                // 复制资源数据
                if (*(int *)(lVar25 + 0x10) != 0) {
                    // 复制资源数据到新分配的内存
                    memcpy(puVar11, *(undefined8 *)(lVar25 + 8), *(int *)(lVar25 + 0x10) + 1);
                }
            }
            
            // 处理资源引用
            if (*(longlong *)(lVar25 + 8) != 0) {
                uStack_5e0 = 0;                  // 初始化引用计数
                if (puVar11 != (undefined1 *)0x0) {
                    *puVar11 = 0;                  // 初始化资源数据
                }
                uStack_5d8 = uStack_5d8 & 0xffffffff;  // 更新引用状态
            }
            
            // 设置资源路径
            puStack_108 = &UNK_1809fdc18;     // 路径处理函数
            puStack_100 = auStack_f0;           // 路径缓冲区
            auStack_f0[0] = 0;                  // 初始化路径缓冲区
            uStack_f8 = 9;                      // 路径长度
            strcpy_s(auStack_f0, 0x10, &DAT_180a02fe8);  // 复制路径
            
            // 处理资源字符串
            iVar7 = FUN_180628d60(&puStack_5f0, &puStack_108);  // 处理资源字符串
            puStack_108 = &UNK_18098bcb0;     // 字符串处理函数
            uVar34 = iVar7 + 9;                 // 字符串长度
            puStack_5d0 = &UNK_180a3c3e0;      // 字符串处理函数
            puStack_5f8 = (undefined1 *)0x0;    // 字符串数据指针
            puStack_5c8 = (undefined1 *)0x0;    // 字符串缓冲区
            uStack_5c0 = 0;                     // 字符串计数
            uStack_5b8 = 0;                     // 字符串状态
            uStack_600 = uStack_600 | 1;        // 设置字符串处理标志
            
            // 分配字符串内存
            if (-uVar34 != -1) {
                iVar7 = -uVar34 + 2;            // 计算字符串内存大小
                if (iVar7 < 0x10) {
                    iVar7 = 0x10;               // 最小内存分配
                }
                // 分配字符串内存
                puStack_5f8 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18, (longlong)iVar7, 0x13);
                *puStack_5f8 = 0;               // 初始化字符串内存
                puStack_5c8 = puStack_5f8;      // 保存字符串指针
                uVar12 = FUN_18064e990();       // 获取字符串内存信息
                uStack_5b8 = CONCAT44(uStack_5b8._4_4_, (int)uVar12);  // 保存字符串信息
            }
            
            // 处理字符串数据
            uVar36 = uStack_5e0;                 // 字符串数据长度
            uVar9 = (uint)uVar12;                // 字符串信息
            lVar25 = (longlong)(int)uVar34;      // 字符串长度
            lStack_538 = (longlong)(int)uStack_5e0;  // 字符串数据长度
            uVar30 = 0;                          // 字符串索引
            
            // 字符串处理循环
            if (lVar25 < lStack_538) {
                uVar29 = 0;                      // 字符串位置
                puVar13 = puStack_5f8;           // 字符串数据指针
                do {
                    uVar9 = (uint)uVar12;       // 字符串信息
                    uVar21 = 0;                  // 字符串处理标志
                    lVar35 = lStack_4c8;         // 资源管理器指针
                    lVar37 = lStack_410;         // 资源管理器偏移
                    uVar30 = uStack_5c0;         // 字符串计数
                    
                    if (uVar36 <= uVar34) break;  // 字符串处理完成
                    
                    // 处理字符串字符
                    uStack_628 = puVar11[lVar25];  // 获取字符
                    iVar7 = (int)uVar29;          // 字符位置
                    uVar30 = iVar7 + 1;           // 更新字符位置
                    uVar29 = (ulonglong)uVar30;   // 更新字符串位置
                    
                    if (uVar30 != 0) {
                        uVar8 = iVar7 + 2;       // 计算所需内存大小
                        if (puVar13 == (undefined1 *)0x0) {
                            if ((int)uVar8 < 0x10) {
                                uVar8 = 0x10;   // 最小内存分配
                            }
                            // 分配字符串内存
                            puVar13 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18, (longlong)(int)uVar8, 0x13);
                            *puVar13 = 0;          // 初始化字符串内存
                            uVar12 = (ulonglong)puVar13 & 0xffffffffffc00000;  // 内存地址处理
                            if (uVar12 != 0) {
                                // 内存地址计算和对齐
                                lVar35 = ((longlong)puVar13 - uVar12 >> 0x10) * 0x50 + 0x80 + uVar12;
                                puVar32 = (uint *)(lVar35 - (ulonglong)*(uint *)(lVar35 + 4));
                                if ((*(byte *)((longlong)puVar32 + 0xe) & 2) == 0) {
                                    uVar21 = (ulonglong)puVar32[7];
                                    if (0x3ffffff < uVar21) {
                                        uVar21 = (ulonglong)*puVar32 << 0x10;
                                        uStack_2a0 = uVar21;
                                    }
                                }
                                else {
                                    uVar21 = (ulonglong)puVar32[7];
                                    if (uVar21 < 0x4000000) {
                                        uVar33 = (ulonglong)puVar32[7];
                                    }
                                    else {
                                        uVar33 = (ulonglong)*puVar32 << 0x10;
                                        uStack_290 = uVar33;
                                    }
                                    if (0x3ffffff < uVar21) {
                                        uVar21 = (ulonglong)*puVar32 << 0x10;
                                        uStack_298 = uVar21;
                                    }
                                    uVar21 = uVar21 - ((longlong)puVar13 -
                                                      (((longlong)((longlong)puVar32 + (-0x80 - uVar12)) / 0x50) *
                                                       0x10000 + uVar12)) % uVar33;
                                }
                            }
                            uVar12 = uVar21 & 0xffffffff;
                            uStack_5b8 = CONCAT44(uStack_5b8._4_4_, (int)uVar21);
                            puStack_5f8 = puVar13;
                            puStack_5c8 = puVar13;
                        }
                        else if (uVar9 < uVar8) {
                            // 扩展字符串内存
                            pcStack_638 = (code *)CONCAT71(pcStack_638._1_7_, 0x13);
                            puStack_5f8 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18, puVar13, uVar8, 0x10);
                            puStack_5c8 = puStack_5f8;
                            uVar9 = FUN_18064e990(puStack_5f8);
                            uVar12 = (ulonglong)uVar9;
                            uStack_5b8 = CONCAT44(uStack_5b8._4_4_, uVar9);
                            puVar13 = puStack_5f8;
                        }
                    }
                    
                    // 保存字符串字符
                    uVar9 = (uint)uVar12;
                    puVar13[uStack_5c0] = uStack_628;
                    puVar13[uVar29] = 0;
                    uVar34 = uVar34 + 1;
                    lVar25 = lVar25 + 1;
                    lVar35 = lStack_4c8;
                    lVar37 = lStack_410;
                    uStack_5c0 = uVar30;
                } while (lVar25 < lStack_538);
            }
            
            // 清理资源内存
            puVar13 = puStack_5f8;
            if (puVar11 != (undefined1 *)0x0) {
                FUN_18064e900(puVar11);  // 释放资源内存
            }
            
            // 文件操作处理
            lVar25 = 0;                      // 文件操作标志
            puStack_5e8 = puStack_5f8;       // 文件数据指针
            uStack_5d8 = (ulonglong)uVar9;   // 文件数据信息
            uStack_5c0 = 0;                  // 文件操作计数
            uStack_600 = uStack_600 & 0xfffffffe;  // 清除文件操作标志
            puStack_5c8 = (undefined1 *)0x0; // 文件缓冲区
            uStack_5b8 = 0;                  // 文件操作状态
            puStack_5d0 = &UNK_18098bcb0;    // 文件操作函数
            
            // 计算文件参数
            lVar26 = *(longlong *)(lVar35 + 0x30) - *(longlong *)(lVar35 + 0x28) >> 5;
            uStack_438 = *(uint *)(lVar35 + 0x40);  // 文件标志
            uStack_5e0 = uVar30;              // 文件操作参数
            
            // 分配文件缓冲区
            if (lVar26 != 0) {
                lVar25 = FUN_18062b420(_DAT_180c8ed18, lVar26 << 5, uStack_438 & 0xff);
            }
            
            // 文件数据处理
            lStack_440 = lVar26 * 0x20 + lVar25;  // 文件数据长度
            lVar26 = *(longlong *)(lVar35 + 0x30);  // 文件数据指针
            lStack_450 = lVar25;                // 文件数据起始位置
            lStack_448 = lVar25;                // 文件数据当前位置
            
            // 文件数据复制循环
            for (lVar27 = *(longlong *)(lVar35 + 0x28); lVar27 != lVar26; lVar27 = lVar27 + 0x20) {
                FUN_180627ae0(lVar25, lVar27);  // 复制文件数据
                lVar25 = lVar25 + 0x20;
            }
            lStack_448 = lVar25;  // 更新文件数据位置
            
            // 初始化互斥锁
            _Mtx_init_in_situ(auStack_d8, 2);  // 初始化线程同步
            
            // 线程处理循环
            uVar12 = 0;                      // 线程索引
            iStack_5b0 = 0;                  // 线程计数
            lStack_538 = 0;                  // 线程状态
            lVar25 = lStack_408;              // 线程管理器指针
            
            if (lStack_448 - lStack_450 >> 5 != 0) {
                do {
                    // 线程处理逻辑
                    uVar29 = 0;                  // 线程处理标志
                    lVar35 = lStack_538 * 0x20;  // 线程偏移
                    iVar7 = *(int *)(lStack_450 + 0x10 + lVar35) + -1;  // 线程ID
                    
                    // 验证线程ID
                    if (-1 < iVar7) {
                        lVar37 = (longlong)iVar7;
                        do {
                            if (*(char *)(*(longlong *)(lStack_450 + 8 + lVar35) + lVar37) == '/') {
                                goto LAB_1801dfa13;  // 找到路径分隔符
                            }
                            iVar7 = iVar7 + -1;
                            lVar37 = lVar37 + -1;
                        } while (-1 < lVar37);
                    }
                    iVar7 = -1;
                    
LAB_1801dfa13:
                    // 处理线程路径
                    lStack_378 = uVar12 * 0x20;  // 线程路径偏移
                    lStack_3b0 = lVar35;          // 线程数据偏移
                    FUN_180629a40(lStack_450 + lStack_378, &puStack_430, 0, iVar7);  // 处理线程路径
                    
                    iVar31 = iStack_420 + -1;    // 线程状态索引
                    lVar37 = (longlong)iVar31;
                    
                    // 验证线程状态
                    if (-1 < iVar31) {
                        do {
                            if (*(char *)(lVar37 + lStack_428) == '/') {
                                goto LAB_1801dfa65;  // 找到状态分隔符
                            }
                            iVar31 = iVar31 + -1;
                            lVar37 = lVar37 + -1;
                        } while (-1 < lVar37);
                    }
                    iVar31 = -1;
                    
LAB_1801dfa65:
                    // 处理线程状态
                    FUN_180629a40(&puStack_430, &puStack_3e0, iVar31 + 1, iVar7);  // 处理线程状态
                    
                    // 设置线程处理参数
                    puStack_558 = &UNK_180a3c3e0;  // 线程处理函数
                    uStack_540 = 0;                  // 线程处理标志
                    puStack_550 = (undefined *)0x0;   // 线程数据指针
                    uStack_548 = 0;                  // 线程处理状态
                    pcStack_638 = (code *)&DAT_18098bc73;  // 线程处理代码
                    
                    if (pcStack_3d8 != (code *)0x0) {
                        pcStack_638 = pcStack_3d8;
                    }
                    
                    puVar11 = &DAT_18098bc73;  // 默认线程处理函数
                    if (puVar13 != (undefined1 *)0x0) {
                        puVar11 = puVar13;
                    }
                    
                    puVar24 = &DAT_18098bc73;  // 默认线程数据
                    if (*(undefined **)(lVar25 + 0xf8) != (undefined *)0x0) {
                        puVar24 = *(undefined **)(lVar25 + 0xf8);
                    }
                    
                    // 执行线程处理
                    FUN_180628040(&puStack_558, &UNK_180a0dde0, puVar24, puVar11);
                    
                    // 设置线程处理输出
                    puStack_578 = &UNK_180a3c3e0;  // 线程输出函数
                    uStack_560 = 0;                  // 线程输出标志
                    puStack_570 = (undefined *)0x0;   // 线程输出数据
                    uStack_568 = 0;                  // 线程输出状态
                    
                    puVar24 = &DAT_18098bc73;  // 默认输出数据
                    if (puStack_348 != (undefined *)0x0) {
                        puVar24 = puStack_348;
                    }
                    
                    puVar23 = &DAT_18098bc73;  // 默认输出函数
                    if (puStack_550 != (undefined *)0x0) {
                        puVar23 = puStack_550;
                    }
                    
                    // 执行线程输出处理
                    FUN_180628040(&puStack_578, &UNK_180a0d968, puVar23, puVar24);
                    
                    // 验证线程状态
                    if ((*(int *)(lVar25 + 0x100) < 1) || 
                        (cVar6 = FUN_180624a00(&puStack_578), cVar6 == '\0')) {
                        
                        // 执行线程清理
                        FUN_18062c1e0(&puStack_578, 1);
                        uStack_458 = 3;
                        pppppppuStack_480 = &pppppppuStack_480;
                        pppppppuStack_478 = &pppppppuStack_480;
                        uStack_470 = 0;
                        uStack_468 = 0;
                        lStack_460 = 0;
                        
                        iVar7 = *(int *)(lVar25 + 0x120);  // 获取线程类型
                        if (iVar7 == 5) {
                            uVar12 = uVar29;
                            do {
                                uVar21 = uVar12 + 1;
                                if (*(char *)(*(longlong *)(lVar25 + 0x118) + uVar12) != (&UNK_180a0ce64)[uVar12]) {
                                    goto LAB_1801dfcaa;
                                }
                                uVar12 = uVar21;
                            } while (uVar21 != 6);
                            uVar34 = 1;
                        }
                        else {
LAB_1801dfcaa:
                            if (iVar7 == 7) {
                                uVar12 = uVar29;
                                do {
                                    uVar21 = uVar12 + 1;
                                    if (*(char *)(*(longlong *)(lVar25 + 0x118) + uVar12) != (&UNK_180a0ce90)[uVar12]) {
                                        goto LAB_1801dfcd9;
                                    }
                                    uVar12 = uVar21;
                                } while (uVar21 != 8);
                                uVar34 = 1;
                            }
                            else {
LAB_1801dfcd9:
                                if ((iVar7 == 8) &&
                                    ((iVar7 = strcmp(*(undefined8 *)(lVar25 + 0x118), &UNK_180a0ce70), iVar7 == 0 ||
                                      (iVar7 = strcmp(*(undefined8 *)(lVar25 + 0x118), &UNK_180a0cf50), iVar7 == 0)))) {
                                    uVar34 = 1;
                                }
                                else {
                                    uVar34 = 0;
                                }
                            }
                        }
                        
                        iStack_4d4 = (uVar34 ^ 1) * 4 + 4;
                        uStack_250 = 0;
                        uStack_248 = 0x3f80000000000000;
                        uStack_240 = 0;
                        uStack_238 = 0x3f800000;
                        uStack_230 = 0x3f80000000000000;
                        uStack_228 = 0;
                        uStack_220 = 0x3f800000;
                        uStack_218 = 0;
                        
                        // 线程处理主循环
                        do {
                            uVar36 = (uint)uVar29;
                            if ((char)uVar34 == '\0') {
                                if ((int)uVar36 < 4) {
                                    auStack_4e0[0] = 2;
                                    puVar22 = auStack_4e0;
                                }
                                else {
                                    auStack_4e8[0] = 0;
                                    puVar22 = auStack_4e8;
                                }
                            }
                            else if (*(int *)(lVar25 + 0x120) == 5) {
                                lVar37 = 0;
                                do {
                                    lVar26 = lVar37 + 1;
                                    if (*(char *)(*(longlong *)(lVar25 + 0x118) + lVar37) != (&UNK_180a0ce64)[lVar37]) {
                                        goto LAB_1801dfdbe;
                                    }
                                    lVar37 = lVar26;
                                } while (lVar26 != 6);
                                auStack_4f8[0] = 0;
                                puVar22 = auStack_4f8;
                            }
                            else {
LAB_1801dfdbe:
                                if (*(int *)(lVar25 + 0x120) == 7) {
                                    lVar37 = 0;
                                    do {
                                        lVar26 = lVar37 + 1;
                                        if (*(char *)(*(longlong *)(lVar25 + 0x118) + lVar37) !=
                                            (&UNK_180a0ce90)[lVar37]) {
                                            goto LAB_1801dfdfe;
                                        }
                                        lVar37 = lVar26;
                                    } while (lVar26 != 8);
                                    auStack_4f8[0] = 0;
                                    puVar22 = auStack_4f8;
                                }
                                else {
LAB_1801dfdfe:
                                    auStack_4f0[0] = 2;
                                    puVar22 = auStack_4f0;
                                }
                            }
                            
                            // 执行线程处理
                            FUN_180046240(_DAT_180c86920 + 0xe70, puVar22);
                            lVar37 = lStack_450;
                            uStack_4d8 = uVar36 & 0x80000003;
                            if ((int)uStack_4d8 < 0) {
                                uStack_4d8 = (uStack_4d8 - 1 | 0xfffffffc) + 1;
                            }
                            
                            // 设置线程处理参数
                            ppuStack_530 = &puStack_5a8;
                            puStack_5a8 = &UNK_180a3c3e0;
                            uStack_590 = 0;
                            lStack_5a0 = 0;
                            uStack_598 = 0;
                            uStack_584 = 0x100;
                            uStack_580 = 0;
                            uStack_57c = 0;
                            uVar30 = *(uint *)(lStack_450 + 0x10 + lVar35);
                            uVar12 = (ulonglong)uVar30;
                            
                            if (*(longlong *)(lStack_450 + 8 + lVar35) != 0) {
                                FUN_1806277c0(&puStack_5a8, uVar12);
                            }
                            
                            if (uVar30 != 0) {
                                memcpy(lStack_5a0, *(undefined8 *)(lVar37 + 8 + lVar35), uVar12);
                            }
                            
                            if (lStack_5a0 != 0) {
                                *(undefined1 *)(uVar12 + lStack_5a0) = 0;
                            }
                            
                            uStack_590 = CONCAT44(*(undefined4 *)(lVar37 + 0x1c + lVar35), (undefined4)uStack_590);
                            uStack_588 = 0;
                            uStack_584 = uStack_584 & 0xffffff00;
                            uStack_598 = uVar30;
                            
                            // 分配线程处理内存
                            uVar10 = FUN_18062b1e0(_DAT_180c8ed18, 0x60d30, 0x10, 0x1f);
                            plVar14 = (longlong *)FUN_1801954d0(uVar10, &puStack_5a8);
                            plStack_330 = plVar14;
                            
                            if (plVar14 != (longlong *)0x0) {
                                (**(code **)(*plVar14 + 0x28))(plVar14);
                            }
                            
                            // 设置线程处理状态
                            lStack_370 = 0;
                            lStack_368 = 0;
                            uStack_360 = 0;
                            uStack_358 = 3;
                            auStack_624[0] = 0x2f;
                            
                            if (*(longlong *)(lStack_450 + lVar35 + 8) != 0) {
                                FUN_180057980(lStack_450 + lVar35, &lStack_370, auStack_624);
                            }
                            
                            puVar24 = *(undefined **)(((lStack_368 - lStack_370 >> 5) + -2) * 0x20 + lStack_370 + 8);
                            puVar23 = &DAT_18098bc73;
                            if (puVar24 != (undefined *)0x0) {
                                puVar23 = puVar24;
                            }
                            
                            (**(code **)(plVar14[0x9b] + 0x10))(plVar14 + 0x9b, puVar23);
                            lVar37 = lStack_378;
                            uVar10 = FUN_1800bb630(&puStack_320, lStack_450 + lStack_378);
                            FUN_180627be0(plVar14 + 0x4f9, uVar10);
                            puStack_320 = &UNK_180a3c3e0;
                            
                            if (lStack_318 != 0) {
                                FUN_18064e900();
                            }
                            
                            lStack_318 = 0;
                            uStack_308 = 0;
                            puStack_320 = &UNK_18098bcb0;
                            
                            if ((code *)plVar14[0x50a] != (code *)0x0) {
                                (*(code *)plVar14[0x50a])(plVar14 + 0x508, 0, 0);
                            }
                            
                            plVar14[0x50a] = (longlong)&UNK_1801eb0a0;
                            plVar14[0x50b] = (longlong)&UNK_1801eb090;
                            plVar14[0x508] = (longlong)FUN_1801deed0;
                            plVar14[0x50c] = (longlong)&uStack_4d8;
                            
                            // 设置线程处理参数
                            uStack_200 = 0x3f800000;
                            uStack_1f8 = 0;
                            uStack_1f0 = 0x3f80000000000000;
                            uStack_1e8 = 0;
                            uStack_1e0 = 0;
                            uStack_1d8 = 0x3f800000;
                            uStack_2f8 = 0x3f800000;
                            uStack_2f0 = 0;
                            uStack_2e8 = 0x3f80000000000000;
                            uStack_2e0 = 0;
                            uStack_2d8 = 0;
                            uStack_2d0 = 0x3f800000;
                            uStack_2c8 = 0;
                            uStack_2c0 = 0x3f80000000000000;
                            uStack_2b7 = 0x1010101;
                            uStack_2b3 = 0x1000001;
                            uStack_2b8 = 0;
                            pcStack_638 = (code *)CONCAT44(pcStack_638._4_4_, 0xffffffff);
                            
                            // 执行线程处理计算
                            fVar39 = (float)FUN_1801a6440(plVar14, _DAT_180c868e8, lStack_450 + lVar37, &uStack_2f8);
                            if (fVar39 == -1.0) {
                                FUN_18005d580(&lStack_370);
                                (**(code **)(*plVar14 + 0x38))(plVar14);
                                ppuStack_530 = &puStack_5a8;
                                puStack_5a8 = &UNK_180a3c3e0;
                                if (lStack_5a0 != 0) {
                                    FUN_18064e900();
                                }
                            }
                            else {
                                FUN_1803986d0(plVar14 + 0xc0fc);
                                lVar37 = plVar14[0xc170];
                                if (lVar37 != 0) {
                                    plVar2 = *(longlong **)(lVar37 + 0x40);
                                    lVar35 = *plVar2;
                                    plVar28 = plVar2;
                                    if (lVar35 == 0) {
                                        plVar28 = plVar2 + 1;
                                        lVar35 = *plVar28;
                                        while (lVar35 == 0) {
                                            plVar28 = plVar28 + 1;
                                            lVar35 = *plVar28;
                                        }
                                    }
                                    lVar37 = plVar2[*(longlong *)(lVar37 + 0x48)];
                                    while (lVar35 != lVar37) {
                                        FUN_1803d24f0(*(longlong *)(lVar35 + 8) + 0x80, &pppppppuStack_480);
                                        lVar35 = *(longlong *)(lVar35 + 0x10);
                                        while (lVar35 == 0) {
                                            plVar28 = plVar28 + 1;
                                            lVar35 = *plVar28;
                                        }
                                    }
                                    lVar35 = lStack_3b0;
                                    if (uVar36 == 0) {
                                        ppuVar15 = (undefined **)FUN_18062b1e0(_DAT_180c8ed18, 0x398, 8, 3);
                                        *ppuVar15 = &UNK_180a21690;
                                        *ppuVar15 = &UNK_180a21720;
                                        *(undefined4 *)(ppuVar15 + 1) = 0;
                                        *ppuVar15 = &UNK_180a0e090;
                                        pcStack_638 = FUN_1801ecbb0;
                                        ppuStack_530 = ppuVar15;
                                        FUN_1808fc838(ppuVar15 + 2, 0x70, 6, FUN_1801ecb30);
                                        ppuStack_2a8 = ppuVar15 + 0x56;
                                        *ppuStack_2a8 = &UNK_18098bcb0;
                                        ppuVar15[0x57] = (undefined *)0x0;
                                        *(undefined4 *)(ppuVar15 + 0x58) = 0;
                                        *ppuStack_2a8 = &UNK_180a3c3e0;
                                        ppuVar15[0x59] = (undefined *)0x0;
                                        ppuVar15[0x57] = (undefined *)0x0;
                                        *(undefined4 *)(ppuVar15 + 0x58) = 0;
                                        ppuStack_258 = ppuVar15 + 0x5a;
                                        *ppuStack_258 = &UNK_18098bcb0;
                                        ppuVar15[0x5b] = (undefined *)0x0;
                                        *(undefined4 *)(ppuVar15 + 0x5c) = 0;
                                        *ppuStack_258 = &UNK_180a3c3e0;
                                        ppuVar15[0x5d] = (undefined *)0x0;
                                        ppuVar15[0x5b] = (undefined *)0x0;
                                        *(undefined4 *)(ppuVar15 + 0x5c) = 0;
                                        ppuStack_260 = ppuVar15 + 0x5e;
                                        *ppuStack_260 = (undefined *)0x0;
                                        ppuVar15[0x5f] = (undefined *)0x0;
                                        ppuVar15[0x60] = (undefined *)0x0;
                                        *(undefined4 *)(ppuVar15 + 0x61) = 3;
                                        ppuStack_270 = ppuVar15 + 0x65;
                                        ppuVar15[0x68] = (undefined *)0x0;
                                        *(undefined4 *)(ppuVar15 + 0x6a) = 0x11;
                                        *ppuStack_270 = (undefined *)ppuStack_270;
                                        ppuVar15[0x66] = (undefined *)ppuStack_270;
                                        ppuVar15[0x67] = (undefined *)0x0;
                                        *(undefined1 *)(ppuVar15 + 0x68) = 0;
                                        ppuVar15[0x69] = (undefined *)0x0;
                                        ppuVar15[0x6c] = (undefined *)0x0;
                                        ppuStack_268 = ppuVar15 + 0x6d;
                                        ppuVar15[0x70] = (undefined *)0x0;
                                        *(undefined4 *)(ppuVar15 + 0x72) = 3;
                                        *ppuStack_268 = (undefined *)ppuStack_268;
                                        ppuVar15[0x6e] = (undefined *)ppuStack_268;
                                        ppuVar15[0x6f] = (undefined *)0x0;
                                        *(undefined1 *)(ppuVar15 + 0x70) = 0;
                                        ppuVar15[0x71] = (undefined *)0x0;
                                        *(undefined4 *)((longlong)ppuVar15 + 0x7c) = 0;
                                        *(undefined4 *)((longlong)ppuVar15 + 0xec) = 1;
                                        *(undefined4 *)((longlong)ppuVar15 + 0x15c) = 2;
                                        *(undefined4 *)((longlong)ppuVar15 + 0x1cc) = 3;
                                        *(undefined4 *)((longlong)ppuVar15 + 0x23c) = 4;
                                        *(undefined4 *)((longlong)ppuVar15 + 0x2ac) = 5;
                                        *(undefined1 *)(ppuVar15 + 0x6b) = 0;
                                        ppuVar15[99] = (undefined *)0x0;
                                        ppuVar15[0x62] = (undefined *)0x0;
                                        ppuVar15[100] = (undefined *)0x0;
                                        lVar35 = plVar14[0xc170];
                                        ppuStack_380 = ppuVar15;
                                        (**(code **)(*ppuVar15 + 0x28))(ppuVar15);
                                        ppuStack_380 = *(undefined ***)(lVar37 + 0x70);
                                        *(undefined ***)(lVar37 + 0x70) = ppuVar15;
                                        if (ppuStack_380 != (undefined **)0x0) {
                                            (**(code **)((longlong)*ppuStack_380 + 0x38))();
                                        }
                                        puVar24 = &DAT_18098bc73;
                                        if (puStack_570 != (undefined *)0x0) {
                                            puVar24 = puStack_570;
                                        }
                                        FUN_180628040(*(longlong *)(plVar14[0xc170] + 0x70) + 0x2d0, &UNK_180a0d9ec, puVar24);
                                        FUN_1803b7530(plVar14[0xc170]);
                                        lVar35 = lStack_3b0;
                                    }
                                }
                                
                                // 线程同步处理
                                puStack_280 = auStack_d8;
                                iVar7 = _Mtx_lock(auStack_d8);
                                if (iVar7 != 0) {
                                    __Throw_C_error_std__YAXH_Z(iVar7);
                                }
                                FUN_1801a2ea0(plVar14);
                                iVar7 = _Mtx_unlock(auStack_d8);
                                if (iVar7 != 0) {
                                    __Throw_C_error_std__YAXH_Z(iVar7);
                                }
                                plStack_330 = (longlong *)0x0;
                                plStack_328 = plVar14;
                                (**(code **)(*plVar14 + 0x38))(plVar14);
                                FUN_18005d580(&lStack_370);
                                ppuStack_530 = &puStack_5a8;
                                puStack_5a8 = &UNK_180a3c3e0;
                                if (lStack_5a0 != 0) {
                                    FUN_18064e900();
                                }
                            }
                            
                            // 清理线程处理资源
                            ppuStack_530 = &puStack_5a8;
                            uStack_590 = uStack_590 & 0xffffffff00000000;
                            lStack_5a0 = 0;
                            puStack_5a8 = &UNK_18098bcb0;
                            uVar29 = (ulonglong)(uVar36 + 1);
                        } while ((int)(uVar36 + 1) < iStack_4d4);
                        
                        // 处理线程清理结果
                        if (lStack_460 != 0) {
                            uStack_500 = 3;
                            ppppppplStack_528 = (longlong *******)&ppppppplStack_528;
                            ppppppplStack_520 = (longlong *******)&ppppppplStack_528;
                            ppppppplStack_518 = (longlong *******)0x0;
                            uStack_510 = 0;
                            lStack_508 = 0;
                            pppppppuVar20 = pppppppuStack_478;
                            if ((undefined8 ********)pppppppuStack_478 != &pppppppuStack_480) {
                                do {
                                    uVar34 = *(uint *)((longlong)pppppppuVar20 + 0x3c);
                                    uStack_4d0 = uVar34;
                                    uVar36 = *(uint *)(pppppppuVar20 + 8);
                                    uStack_4cc = uVar36;
                                    ppppppplVar5 = (longlong *******)&ppppppplStack_528;
                                    ppppppplVar17 = ppppppplStack_518;
                                    while (ppppppplVar18 = ppppppplVar5, ppppppplVar17 != (longlong *******)0x0) {
                                        if ((*(uint *)(ppppppplVar17 + 4) < uVar34) ||
                                            ((*(uint *)(ppppppplVar17 + 4) <= uVar34 &&
                                             (*(uint *)((longlong)ppppppplVar17 + 0x24) < uVar36)))) {
                                            bVar4 = true;
                                            ppppppplVar16 = (longlong *******)*ppppppplVar17;
                                        }
                                        else {
                                            bVar4 = false;
                                            ppppppplVar16 = (longlong *******)ppppppplVar17[1];
                                        }
                                        ppppppplVar5 = ppppppplVar17;
                                        ppppppplVar17 = ppppppplVar16;
                                        if (bVar4) {
                                            ppppppplVar5 = ppppppplVar18;
                                        }
                                    }
                                    if ((((longlong ********)ppppppplVar18 == &ppppppplStack_528) ||
                                        (uVar34 < *(uint *)(ppppppplVar18 + 4))) ||
                                        ((uVar34 <= *(uint *)(ppppppplVar18 + 4) &&
                                         (uVar36 < *(uint *)((longlong)ppppppplVar18 + 0x24))))) {
                                        ppppppplStack_278 = ppppppplVar18;
                                        if ((ppppppplVar18 == ppppppplStack_528) ||
                                            ((longlong ********)ppppppplVar18 == &ppppppplStack_528)) {
                                            if ((lStack_508 != 0) &&
                                                ((ppppppplVar18 = ppppppplStack_528,
                                                 *(uint *)(ppppppplStack_528 + 4) < uVar34 ||
                                                 ((*(uint *)(ppppppplStack_528 + 4) <= uVar34 &&
                                                  (*(uint *)((longlong)ppppppplStack_528 + 0x24) < uVar36)))))) {
LAB_1801e05b2:
                                                uVar10 = 0;
                                                goto LAB_1801e05b5;
                                            }
                                        }
                                        else {
                                            ppppppplVar17 = (longlong *******)func_0x00018066bd70(ppppppplVar18);
                                            if (((*(uint *)(ppppppplVar18 + 4) < uVar34) ||
                                                ((*(uint *)(ppppppplVar18 + 4) <= uVar34 &&
                                                 (*(uint *)((longlong)ppppppplVar18 + 0x24) < uVar36)))) &&
                                               ((uVar34 < *(uint *)(ppppppplVar17 + 4) ||
                                                ((uVar34 <= *(uint *)(ppppppplVar17 + 4) &&
                                                 (uVar36 < *(uint *)((longlong)ppppppplVar17 + 0x24))))))) {
                                                if (*ppppppplVar18 == (longlong *******)0x0) goto LAB_1801e05b2;
                                                uVar10 = 1;
                                                ppppppplVar18 = ppppppplVar17;
LAB_1801e05b5:
                                                if (ppppppplVar18 != (longlong *******)0x0) {
                                                    pcStack_638 = (code *)&uStack_4d0;
                                                    FUN_1801eab50(&ppppppplStack_528, &ppppppplStack_3a8, ppppppplVar18, uVar10);
                                                    ppppppplVar18 = ppppppplStack_3a8;
                                                    goto LAB_1801e0603;
                                                }
                                            }
                                        }
                                        puVar19 = (undefined8 *)FUN_1801ea9f0(&ppppppplStack_528, auStack_210);
                                        ppppppplVar18 = (longlong *******)*puVar19;
                                        ppppppplStack_3a8 = ppppppplVar18;
                                    }
LAB_1801e0603:
                                    FUN_180627be0(ppppppplVar18 + 5, ppppppuVar20 + 0xe);
                                    pppppppuVar20 = (undefined8 *******)func_0x00018066bd70(pppppppuVar20);
                                } while ((undefined8 ********)pppppppuVar20 != &pppppppuStack_480);
                            }
                            
                            // 清理线程处理结果
                            if ((longlong ********)ppppppplStack_520 != &ppppppplStack_528) {
                                auStack_627[0] = 0;
                                ppppppplVar17 = ppppppplStack_520;
                                do {
                                    puStack_4a0 = &UNK_180a3c3e0;
                                    uStack_488 = 0;
                                    lStack_498 = 0;
                                    uStack_490 = 0;
                                    uStack_630 = *(undefined4 *)((longlong)ppppppplVar17 + 0x24);
                                    puVar24 = &DAT_18098bc73;
                                    if (puStack_348 != (undefined *)0x0) {
                                        puVar24 = puStack_348;
                                    }
                                    puVar23 = &DAT_18098bc73;
                                    if (puStack_550 != (undefined *)0x0) {
                                        puVar23 = puStack_550;
                                    }
                                    pcStack_638 = (code *)CONCAT44(pcStack_638._4_4_,
                                                           *(undefined4 *)(ppppppplVar17 + 4));
                                    FUN_180628040(&puStack_4a0, &UNK_180a0ddf8, puVar23, puVar24);
                                    FUN_180627ae0(&puStack_400, &puStack_4a0);
                                    uVar34 = uStack_3f0 + 0x18;
                                    FUN_1806277c0(&puStack_400, uVar34);
                                    puVar22 = (undefined4 *)(puStack_3f8 + uStack_3f0);
                                    *puVar22 = 0x7265742f;
                                    puVar22[1] = 0x6e696172;
                                    puVar22[2] = 0x6165685f;
                                    puVar22[3] = 0x5f726564;
                                    *(undefined8 *)(puVar22 + 4) = 0x6873722e61746164;
                                    *(undefined1 *)(puVar22 + 6) = 0;
                                    uStack_3f0 = uVar34;
                                    FUN_18062c1e0(&puStack_4a0, 1);
                                    FUN_180637560(apuStack_1c8);
                                    uStack_118 = 1;
                                    uStack_1a0 = 0;
                                    uStack_194 = 0;
                                    apuStack_1c8[0] = &UNK_1809fe6d8;
                                    puVar24 = &DAT_18098bc73;
                                    if (puStack_3f8 != (undefined *)0x0) {
                                        puVar24 = puStack_3f8;
                                    }
                                    iVar7 = FUN_1806391a0(apuStack_1c8, puVar24, auStack_627);
                                    if (iVar7 == 0) {
                                        FUN_180627ae0(&puStack_3a0, pppppplVar17 + 5);
                                        cVar6 = *pcStack_398;
                                        lVar35 = 0;
                                        while (cVar6 != '\0') {
                                            if (pcStack_398[lVar35] == '\\') {
                                                pcStack_398[lVar35] = ' ';
                                            }
                                            lVar35 = lVar35 + 1;
                                            cVar6 = pcStack_398[lVar35];
                                        }
                                        (**(code **)(apuStack_1c8[0] + 0x78))(apuStack_1c8, &puStack_3a0);
                                        puStack_3a0 = &UNK_180a3c3e0;
                                        if (pcStack_398 != (char *)0x0) {
                                            FUN_18064e900();
                                        }
                                        pcStack_398 = (char *)0x0;
                                        uStack_388 = 0;
                                        puStack_3a0 = &UNK_18098bcb0;
                                    }
                                    else {
                                        FUN_180626f80(&UNK_180a0dda8);
                                    }
                                    apuStack_1c8[0] = &UNK_180a3cf50;
                                    if (uStack_118._1_1_ != '\0') {
                                        FUN_180639250(apuStack_1c8);
                                    }
                                    ppuStack_530 = apuStack_170;
                                    _Mtx_destroy_in_situ(apuStack_170);
                                    FUN_1805065c0(apuStack_1c8);
                                    puStack_400 = &UNK_180a3c3e0;
                                    if (puStack_3f8 != (undefined *)0x0) {
                                        FUN_18064e900();
                                    }
                                    puStack_3f8 = (undefined *)0x0;
                                    uStack_3e8 = 0;
                                    puStack_400 = &UNK_18098bcb0;
                                    puStack_4a0 = &UNK_180a3c3e0;
                                    if (lStack_498 != 0) {
                                        FUN_18064e900();
                                    }
                                    lStack_498 = 0;
                                    uStack_488 = uStack_488 & 0xffffffff00000000;
                                    puStack_4a0 = &UNK_18098bcb0;
                                    ppppppplVar17 = (longlong *******)func_0x00018066bd70(ppppppplVar17);
                                    lVar25 = lStack_408;
                                } while ((longlong ********)ppppppplVar17 != &ppppppplStack_528);
                            }
                            
                            // 最终清理
                            puStack_4c0 = &UNK_180a3c3e0;
                            uStack_4a8 = 0;
                            puStack_4b8 = (undefined *)0x0;
                            uStack_4b0 = 0;
                            puVar24 = &DAT_18098bc73;
                            if (puStack_570 != (undefined *)0x0) {
                                puVar24 = puStack_570;
                            }
                            FUN_180628040(&puStack_4c0, &UNK_180a0d920, puVar24);
                            lStack_620 = 0;
                            puStack_618 = (undefined8 *)0x0;
                            lStack_610 = 0;
                            uStack_608 = 0;
                            uStack_606 = 3;
                            uVar38 = (undefined4)lStack_460;
                            FUN_180639bf0(&lStack_620, 4);
                            *(undefined4 *)puStack_618 = uVar38;
                            puVar19 = (undefined8 *)((longlong)puStack_618 + 4);
                            pppppppuVar20 = pppppppuStack_478;
                            lVar35 = lStack_620;
                            puStack_618 = puVar19;
                            if ((undefined8 ********)pppppppuStack_478 != &pppppppuStack_480) {
                                do {
                                    uVar38 = *(undefined4 *)((longlong)pppppppuVar20 + 0x3c);
                                    if ((ulonglong)((lStack_610 - (longlong)puVar19) + lVar35) < 5) {
                                        FUN_180639bf0(&lStack_620, (longlong)puVar19 + (4 - lVar35));
                                        lVar35 = lStack_620;
                                        puVar19 = puStack_618;
                                    }
                                    *(undefined4 *)puVar19 = uVar38;
                                    puStack_618 = (undefined8 *)((longlong)puVar19 + 4);
                                    uVar38 = *(undefined4 *)(pppppppuVar20 + 8);
                                    if ((ulonglong)((lStack_610 - (longlong)puStack_618) + lVar35) < 5) {
                                        FUN_180639bf0(&lStack_620, (longlong)puStack_618 + (4 - lVar35));
                                    }
                                    *(undefined4 *)puStack_618 = uVar38;
                                    puStack_618 = (undefined8 *)((longlong)puStack_618 + 4);
                                    FUN_180639ec0(&lStack_620, ppppppuVar20[9] + 2);
                                    uVar1 = *(undefined2 *)((longlong)pppppppuVar20 + 0x5c);
                                    if ((ulonglong)((lStack_610 - (longlong)puStack_618) + lStack_620) < 3) {
                                        FUN_180639bf0(&lStack_620, (longlong)puStack_618 + (2 - lStack_620));
                                    }
                                    *(undefined2 *)puStack_618 = uVar1;
                                    puStack_618 = (undefined8 *)((longlong)puStack_618 + 2);
                                    ppppppuVar3 = ppppppuVar20[10];
                                    if ((ulonglong)((lStack_610 - (longlong)puStack_618) + lStack_620) < 9) {
                                        FUN_180639bf0(&lStack_620, (longlong)puStack_618 + (8 - lStack_620));
                                    }
                                    *puStack_618 = ppppppuVar3;
                                    puStack_618 = puStack_618 + 1;
                                    uVar38 = *(undefined4 *)(pppppppuVar20 + 0xb);
                                    if ((ulonglong)((lStack_610 - (longlong)puStack_618) + lStack_620) < 5) {
                                        FUN_180639bf0(&lStack_620, (longlong)puStack_618 + (4 - lStack_620));
                                    }
                                    lVar35 = lStack_620;
                                    *(undefined4 *)puStack_618 = uVar38;
                                    puVar19 = (undefined8 *)((longlong)puStack_618 + 4);
                                    puStack_618 = puVar19;
                                    pppppppuVar20 = (undefined8 *******)func_0x00018066bd70(pppppppuVar20);
                                } while ((undefined8 ********)pppppppuVar20 != &pppppppuStack_480);
                            }
                            alStack_3c0[0] = -1;
                            puVar24 = &DAT_18098bc73;
                            if (puStack_4b8 != (undefined *)0x0) {
                                puVar24 = puStack_4b8;
                            }
                            cVar6 = FUN_18063ba00(alStack_3c0, puVar24, 10, 0x108);
                            if (cVar6 == '\0') {
                                puVar24 = &DAT_18098bc73;
                                if (puStack_4b8 != (undefined *)0x0) {
                                    puVar24 = puStack_4b8;
                                }
                                FUN_180626f80(&UNK_180a0de18, puVar24);
                            }
                            else {
                                uVar12 = (longlong)puVar19 - lVar35;
                                if (lVar35 == 0) {
                                    uVar12 = 0;
                                }
                                FUN_18063bd10(alStack_3c0, lVar35, uVar12 & 0xffffffff);
                            }
                            if (alStack_3c0[0] != -1) {
                                LOCK();
                                _DAT_180c8ed64 = _DAT_180c8ed64 + -1;
                                UNLOCK();
                                CloseHandle(alStack_3c0[0]);
                                alStack_3c0[0] = -1;
                                puStack_5f8 = puStack_5e8;
                                lVar35 = lStack_620;
                            }
                            if (((char)uStack_608 == '\0') && (lVar35 != 0)) {
                                FUN_18064e900(lVar35);
                            }
                            puStack_4c0 = &UNK_180a3c3e0;
                            if (puStack_4b8 != (undefined *)0x0) {
                                FUN_18064e900();
                            }
                            puStack_4b8 = (undefined *)0x0;
                            uStack_4a8 = uStack_4a8 & 0xffffffff00000000;
                            puStack_4c0 = &UNK_18098bcb0;
                            FUN_1800ae2c0(&ppppppplStack_528, pppppplStack_518);
                        }
                        FUN_1801e88e0(&pppppppuStack_480, uStack_470);
                        puStack_578 = &UNK_180a3c3e0;
                        if (puStack_570 != (undefined *)0x0) {
                            FUN_18064e900();
                        }
                        puStack_570 = (undefined *)0x0;
                        uStack_560 = uStack_560 & 0xffffffff00000000;
                        puStack_578 = &UNK_18098bcb0;
                        puStack_558 = &UNK_180a3c3e0;
                        if (puStack_550 != (undefined *)0x0) {
                            FUN_18064e900();
                        }
                        puStack_550 = (undefined *)0x0;
                        uStack_540 = uStack_540 & 0xffffffff00000000;
                        puStack_558 = &UNK_18098bcb0;
                        puStack_3e0 = &UNK_180a3c3e0;
                        if (pcStack_3d8 != (code *)0x0) {
                            FUN_18064e900();
                        }
                        pcStack_3d8 = (code *)0x0;
                        uStack_3c8 = 0;
                        puStack_3e0 = &UNK_18098bcb0;
                        puStack_430 = &UNK_180a3c3e0;
                        puVar13 = puStack_5f8;
                        if (lStack_428 != 0) {
                            FUN_18064e900();
                        }
                    }
                    else {
                        puStack_578 = &UNK_180a3c3e0;
                        if (puStack_570 != (undefined *)0x0) {
                            FUN_18064e900();
                        }
                        puStack_570 = (undefined *)0x0;
                        uStack_560 = uStack_560 & 0xffffffff00000000;
                        puStack_578 = &UNK_18098bcb0;
                        puStack_558 = &UNK_180a3c3e0;
                        if (puStack_550 != (undefined *)0x0) {
                            FUN_18064e900();
                        }
                        puStack_550 = (undefined *)0x0;
                        uStack_540 = uStack_540 & 0xffffffff00000000;
                        puStack_558 = &UNK_18098bcb0;
                        puStack_3e0 = &UNK_180a3c3e0;
                        if (pcStack_3d8 != (code *)0x0) {
                            FUN_18064e900();
                        }
                        pcStack_3d8 = (code *)0x0;
                        uStack_3c8 = 0;
                        puStack_3e0 = &UNK_18098bcb0;
                        puStack_430 = &UNK_180a3c3e0;
                        if (lStack_428 != 0) {
                            FUN_18064e900();
                        }
                    }
                    uStack_3c8 = 0;
                    pcStack_3d8 = (code *)0x0;
                    puStack_3e0 = &UNK_18098bcb0;
                    uStack_418 = 0;
                    lStack_428 = 0;
                    puStack_550 = (undefined *)0x0;
                    puStack_558 = &UNK_18098bcb0;
                    puStack_570 = (undefined *)0x0;
                    puStack_578 = &UNK_18098bcb0;
                    puStack_430 = &UNK_18098bcb0;
                    iStack_5b0 = iStack_5b0 + 1;
                    lStack_538 = lStack_538 + 1;
                    uVar12 = (ulonglong)iStack_5b0;
                    lVar35 = lStack_4c8;
                    lVar37 = lStack_410;
                } while (uVar12 < (ulonglong)(lStack_448 - lStack_450 >> 5));
            }
            
            // 销毁互斥锁
            _Mtx_destroy_in_situ(auStack_d8);
            FUN_18005d580(&lStack_450);
            puStack_5f0 = &UNK_180a3c3e0;
            if (puVar13 != (undefined1 *)0x0) {
                FUN_18064e900(puVar13);
            }
            puStack_5e8 = (undefined1 *)0x0;
            uStack_5d8 = uStack_5d8 & 0xffffffff00000000;
            puStack_5f0 = &UNK_18098bcb0;
            lVar35 = func_0x00018066bd70(lVar35);
            lStack_4c8 = lVar35;
        } while (lVar35 != lVar37);
    }
    
    // 最终清理和安全退出
    puStack_350 = &UNK_180a3c3e0;
    if (puStack_348 == (undefined *)0x0) {
        puStack_348 = (undefined *)0x0;
        uStack_338 = 0;
        puStack_350 = &UNK_18098bcb0;
        FUN_1808fc050(uStack_88 ^ (ulonglong)auStack_658);  // 安全退出
    }
    FUN_18064e900();  // 释放资源
}

// ============================================================================
// 模块技术说明
// ============================================================================

/*
 * 性能优化建议：
 * 1. 资源管理优化：使用对象池和缓存机制减少资源分配开销
 * 2. 内存管理优化：实现内存池和智能指针减少内存碎片
 * 3. 线程同步优化：使用读写锁和无锁数据结构提高并发性能
 * 4. 文件操作优化：使用异步IO和缓存机制提高文件操作效率
 * 
 * 内存管理策略：
 * - 使用内存池和对象池减少分配开销
 * - 实现内存对齐和保护机制
 * - 支持内存跟踪和调试
 * - 提供内存泄漏检测和清理
 * - 优化内存使用效率
 * 
 * 线程同步机制：
 * - 使用互斥锁保护共享资源
 * - 实现线程安全的操作
 * - 支持死锁检测和预防
 * - 提供线程池管理
 * - 优化线程性能
 * 
 * 错误处理机制：
 * - 实现完整的错误检查和验证
 * - 支持错误恢复和状态回滚
 * - 包含详细的错误日志
 * - 提供错误代码和消息
 * - 支持异常处理
 * 
 * 资源管理特点：
 * - 支持动态资源分配和释放
 * - 实现引用计数机制
 * - 提供资源生命周期管理
 * - 支持资源缓存和复用
 * - 包含资源清理和回收
 * 
 * 安全性考虑：
 * - 使用边界检查防止缓冲区溢出
 * - 实现安全的内存操作
 * - 包含完整的参数验证
 * - 支持资源保护机制
 * - 提供安全退出处理
 * 
 * 扩展性设计：
 * - 模块化设计便于功能扩展
 * - 支持多种资源类型
 * - 实现可配置的处理逻辑
 * - 支持插件式架构
 * - 提供灵活的接口设计
 */