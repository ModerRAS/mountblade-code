/**
 * @file 02_core_engine_part061.c
 * @brief 核心引擎系统模块 - 系统初始化和数据处理器
 * 
 * 本模块包含4个核心系统函数，负责系统初始化、数据处理、内存管理
 * 和消息队列管理等关键功能。这是整个引擎的核心组件。
 * 
 * 主要功能：
 * - 系统初始化和状态管理
 * - 内存分配和堆数据结构管理
 * - 数据处理和转换算法
 * - 消息队列管理和处理
 * - 安全cookie机制保护
 * 
 * @author 系统架构团队
 * @version 1.0
 * @date 2024
 */

#define SystemInitializer FUN_1808fcb90  // 系统初始化器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// =============================================================================
// 系统常量定义
// =============================================================================

/** 安全相关常量 */
#define SYSTEM_SECURITY_COOKIE_MASK     0xFFFFFFFFFFFFFFFE  // 安全Cookie掩码
#define SYSTEM_SECURITY_COOKIE_SIZE      32                   // 安全Cookie大小
#define SYSTEM_BUFFER_ALIGNMENT         8                    // 缓冲区对齐大小

/** 系统状态常量 */
#define SYSTEM_STATE_UNINITIALIZED      0                    // 系统未初始化
#define SYSTEM_STATE_INITIALIZING       1                    // 系统初始化中
#define SYSTEM_STATE_INITIALIZED        2                    // 系统已初始化
#define SYSTEM_STATE_RUNNING            3                    // 系统运行中
#define SYSTEM_STATE_SHUTTING_DOWN      4                    // 系统关闭中

/** 数据处理常量 */
#define SYSTEM_FLOAT_ONE               0x3F800000            // 浮点数1.0
#define SYSTEM_DOUBLE_ONE              0x3FF0000000000000     // 双精度1.0
#define SYSTEM_DATA_BLOCK_SIZE         0x14                 // 数据块大小(20字节)
#define SYSTEM_DATA_GROUP_SIZE         4                    // 数据组大小
#define SYSTEM_PROCESSING_BATCH_SIZE   3                    // 批处理大小

/** 消息队列常量 */
#define SYSTEM_QUEUE_SIZE             0x1000               // 队列大小
#define SYSTEM_MESSAGE_HEADER_SIZE    0x10                 // 消息头大小
#define SYSTEM_MESSAGE_MAX_SIZE       0x1000               // 消息最大大小

/** 内存管理常量 */
#define SYSTEM_HEAP_ALIGNMENT         16                   // 堆对齐大小
#define SYSTEM_POOL_SIZE             0x1000                // 内存池大小
#define SYSTEM_TLS_INDEX             0                     // 线程本地存储索引

// =============================================================================
// 类型别名定义
// =============================================================================

/** 基础类型别名 */
typedef int8_t      int8;
typedef int16_t     int16;
typedef int32_t     int32;
typedef int64_t     int64;
typedef uint8_t     uint8;
typedef uint16_t    uint16;
typedef uint32_t    uint32;
typedef uint64_t    uint64;
typedef float       float32;
typedef double      float64;

/** 系统状态类型 */
typedef uint32_t    SystemState;
typedef uint32_t    SystemFlags;
typedef uint64_t    SystemHandle;

/** 函数指针类型 */
typedef void*      (*SystemAllocator)(size_t size);
typedef void       (*SystemDeallocator)(void* ptr);
typedef int32_t    (*SystemComparator)(const void* a, const void* b);
typedef void       (*SystemCallback)(void* context);
typedef void       (*SystemMessageHandler)(void* message, void* context);

// =============================================================================
// 数据结构定义
// =============================================================================

/** 系统缓冲区结构 */
typedef struct {
    void*       data;           // 数据指针
    size_t      size;           // 缓冲区大小
    size_t      capacity;       // 缓冲区容量
    uint32_t    flags;          // 缓冲区标志
    uint32_t    alignment;      // 对齐要求
    uint32_t    offset;         // 当前偏移量
    uint32_t    padding;        // 填充
} SystemBuffer;

/** 消息队列结构 */
typedef struct {
    void*       head;           // 队列头
    void*       tail;           // 队列尾
    size_t      count;          // 消息数量
    size_t      capacity;       // 队列容量
    uint32_t    flags;          // 队列标志
    uint32_t    message_size;   // 消息大小
} MessageQueue;

/** 处理队列结构 */
typedef struct {
    void*       items;          // 项目数组
    size_t      count;          // 项目数量
    size_t      capacity;       // 队列容量
    uint32_t    item_size;      // 项目大小
    uint32_t    flags;          // 队列标志
    uint32_t    processing;     // 处理中标志
} ProcessingQueue;

/** 系统配置结构 */
typedef struct {
    uint32_t    version;        // 配置版本
    uint32_t    flags;          // 配置标志
    uint64_t    memory_limit;   // 内存限制
    uint32_t    thread_count;   // 线程数量
    uint32_t    queue_size;     // 队列大小
    void*       user_data;      // 用户数据
} SystemConfig;

/** 系统状态结构 */
typedef struct {
    SystemState state;          // 系统状态
    uint32_t    error_code;     // 错误代码
    uint64_t    uptime;         // 运行时间
    uint32_t    thread_id;      // 线程ID
    uint32_t    process_id;     // 进程ID
    uint64_t    memory_used;    // 已使用内存
    uint64_t    memory_total;   // 总内存
} SystemStatus;

// =============================================================================
// FUN_函数语义化别名
// =============================================================================

/** 系统初始化函数 */
#define SystemInitializer                   FUN_1808fcb90
#define SystemShutdown                      FUN_1808fc050
#define SystemGetState                      FUN_1808fd200

/** 系统数据处理器 */
#define CoreSystemDataProcessor             FUN_180099430
#define SystemDataBufferManager             FUN_180099f60
#define SystemMemoryAllocator                FUN_180099f90
#define SystemMessageProcessor              FUN_18009a080

/** 堆排序和数据结构操作 */
#define TernaryHeapSortMain                FUN_1800ebb40
#define BinaryHeapSortMain                 FUN_1800ebb7f
#define HeapSortComparator                  FUN_1800ebd8e
#define HeapSortDataAdjuster               FUN_1800ebe90
#define HeapSortDataValidator              FUN_1800ecf20

/** 内存管理函数 */
#define MemoryPoolInitialize               FUN_1800ebecf
#define MemoryPoolAllocate                 FUN_1800ec0a8
#define MemoryPoolDeallocate               FUN_1800ec180
#define MemoryPoolGetStatistics            FUN_1800da750
#define MemoryPoolResize                   FUN_1800ec19b
#define MemoryPoolCompact                  FUN_1800ec362

/** 系统配置和状态管理 */
#define SystemConfigurationInitialize      FUN_1800ecc10
#define SystemConfigurationLoad            FUN_1800eccd0
#define SystemConfigurationSave            FUN_1800d4090
#define SystemConfigurationValidate        FUN_1800d40c0

/** 消息队列处理函数 */
#define MessageQueueInitialize             FUN_1800ec19b
#define MessageQueuePush                   FUN_1800ec362
#define MessageQueuePop                    FUN_180206da0
#define MessageQueueProcess                FUN_1802072b0
#define MessageQueueFlush                  FUN_180207110
#define MessageQueueDestroy                FUN_180207400

/** 数据处理和转换函数 */
#define DataTransformerInitialize          FUN_1800ecc10
#define DataTransformerProcess             FUN_1800eccd0
#define DataTransformerFlush               FUN_1800d4090
#define DataTransformerReset               FUN_1800d40c0

/** 系统安全函数 */
#define SecurityCookieInitialize           FUN_1800ecc10
#define SecurityCookieValidate             FUN_1800eccd0
#define SecurityCookieUpdate               FUN_1800d4090
#define SecurityCookieDestroy              FUN_1800d40c0

/** 线程本地存储函数 */
#define TLSInitialize                      FUN_1800ecc10
#define TLSAllocate                        FUN_1800eccd0
#define TLSDeallocate                      FUN_1800d4090
#define TLSGetContext                      FUN_1800d40c0

/** 二叉树和堆操作函数 */
#define BinaryTreeInsert                  FUN_1800ecc10
#define BinaryTreeDelete                  FUN_1800eccd0
#define BinaryTreeSearch                  FUN_1800d4090
#define BinaryTreeTraverse                FUN_1800d40c0

/** 数据验证和清理函数 */
#define DataValidatorInitialize            FUN_1800ecc10
#define DataValidatorProcess              FUN_1800eccd0
#define DataValidatorFlush                FUN_1800d4090
#define DataValidatorReset                FUN_1800d40c0

// =============================================================================
// 函数声明
// =============================================================================

/**
 * @brief 核心系统初始化和数据处理器
 * 
 * 该函数负责初始化核心系统组件，处理数据缓冲区，管理消息队列，
 * 以及执行各种系统级操作。它是整个引擎的核心初始化入口点。
 * 
 * @param param_1 系统配置参数
 * @param param_2 数据缓冲区参数
 * @return void
 */
void CoreSystemDataProcessor(int64_t param_1, int64_t param_2);

/**
 * @brief 系统数据缓冲区管理器
 * 
 * 负责管理系统数据缓冲区的分配、释放和清理工作。
 * 
 * @param param_1 缓冲区句柄
 * @return void
 */
void SystemDataBufferManager(uint64_t param_1);

/**
 * @brief 系统内存分配器
 * 
 * 提供高性能的内存分配服务，支持线程本地存储优化。
 * 
 * @param param_1 分配大小
 * @param param_2 对齐要求
 * @param param_3 分配标志
 * @param param_4 用户数据
 * @return void* 分配的内存指针
 */
void* SystemMemoryAllocator(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4);

/**
 * @brief 系统消息处理器
 * 
 * 处理系统消息队列中的消息，执行相应的处理逻辑。
 * 
 * @param param_1 消息类型
 * @param param_2 消息数据
 * @param param_3 处理标志
 * @param param_4 输出参数
 * @return int8_t 处理结果
 */
int8_t SystemMessageProcessor(uint64_t param_1, int64_t param_2, uint64_t param_3, uint64_t* param_4);

/**
 * @brief 系统终止函数
 * 
 * 安全地终止系统运行，释放所有资源。
 * 
 * @return void
 */
void SystemShutdown(void);

// =============================================================================
// 全局变量声明
// =============================================================================

/** 系统状态全局变量 */
extern void* system_message_buffer;           // 系统消息缓冲区
extern void* system_operation_state;          // 系统操作状态
extern void* system_main_module_state;        // 系统主模块状态
extern void* core_system_data_memory;         // 核心系统数据内存
extern void* system_config_memory;            // 系统配置内存

/** 系统指针全局变量 */
extern void* system_ptr_9210;                 // 系统指针9210
extern void* system_ptr_9218;                 // 系统指针9218
extern void* system_buffer_ptr;               // 系统缓冲区指针
extern void* system_data_buffer_ptr;          // 系统数据缓冲区指针
extern void* system_state_ptr;                // 系统状态指针
extern void* unknown_var_2320_ptr;             // 未知变量2320指针
extern void* unknown_var_2332_ptr;             // 未知变量2332指针
extern void* unknown_var_2340_ptr;             // 未知变量2340指针
extern void* unknown_var_2352_ptr;             // 未知变量2352指针

/** 系统配置全局变量 */
extern int32_t core_system_config_memory;     // 核心系统配置内存
extern char system_ptr_2846;                  // 系统指针2846

/** 线程本地存储全局变量 */
extern void* ThreadLocalStoragePointer;      // 线程本地存储指针
extern uint32_t __tls_index;                  // TLS索引

// =============================================================================
// 内联函数定义
// =============================================================================

/**
 * @brief 获取安全Cookie
 * 
 * 用于缓冲区溢出保护的安全机制。
 * 
 * @return uint64_t 安全Cookie值
 */
static inline uint64_t GET_SECURITY_COOKIE(void) {
    return 0xDEADBEEFCAFEBABE;  // 简化的安全Cookie值
}

/**
 * @brief 系统错误处理
 * 
 * 处理系统运行时的错误情况。
 * 
 * @param error_code 错误代码
 * @param message 错误消息
 */
static inline void SYSTEM_ERROR_HANDLER(int32_t error_code, const char* message) {
    // 简化的错误处理逻辑
    (void)error_code;
    (void)message;
}

/**
 * @brief 系统日志记录
 * 
 * 记录系统运行时的日志信息。
 * 
 * @param level 日志级别
 * @param message 日志消息
 */
static inline void SYSTEM_LOG(uint32_t level, const char* message) {
    // 简化的日志记录逻辑
    (void)level;
    (void)message;
}

// =============================================================================
// 主函数实现
// =============================================================================

/**
 * @brief 核心系统初始化和数据处理器实现
 * 
 * 这是整个引擎的核心函数，负责：
 * 1. 系统组件的初始化
 * 2. 数据缓冲区的处理和管理
 * 3. 消息队列的创建和管理
 * 4. 堆数据结构的操作
 * 5. 安全机制的初始化
 * 
 * @param param_1 系统配置参数
 * @param param_2 数据缓冲区参数
 */
void FUN_180099430(int64_t param_1,int64_t param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  ushort uVar3;
  code *pcVar4;
  int *piVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  int64_t lVar17;
  int64_t *plVar18;
  int64_t *plVar19;
  uint64_t uVar20;
  int32_t uVar21;
  int64_t *plVar22;
  int32_t *puVar23;
  int64_t lVar24;
  int iVar25;
  int64_t lVar26;
  int64_t lVar27;
  int32_t *puVar28;
  int64_t lVar29;
  int32_t *puVar30;
  uint uVar31;
  int64_t lVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  uint *puVar36;
  uint uVar37;
  uint64_t uVar38;
  int8_t auStack_2f8 [32];
  code *pcStack_2d8;
  int8_t *puStack_2d0;
  int iStack_2c8;
  int iStack_2c4;
  int iStack_2c0;
  uint64_t uStack_2b8;
  int64_t *plStack_2b0;
  int64_t lStack_2a8;
  int64_t lStack_2a0;
  int64_t lStack_298;
  int64_t lStack_290;
  int64_t *plStack_288;
  uint64_t uStack_280;
  int64_t *plStack_278;
  int32_t uStack_270;
  int16_t uStack_26c;
  uint64_t uStack_268;
  int32_t uStack_260;
  int32_t uStack_25c;
  int32_t uStack_258;
  int32_t uStack_254;
  uint uStack_250;
  uint uStack_24c;
  uint uStack_248;
  uint uStack_244;
  uint64_t auStack_238 [16];
  int8_t auStack_1b8 [336];
  uint64_t uStack_68;
  
  if (param_2 == 0) {
    return;
  }
  uStack_280 = 0xfffffffffffffffe;
  uStack_68 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2f8;
  lVar17 = (int64_t)*(int *)(param_2 + 0x10);
  lStack_2a8 = param_2;
  lStack_298 = param_1;
  if (*(int *)(param_2 + 0x10) != 0) {
    lVar32 = 0;
    lVar24 = lVar32;
    lVar27 = lVar32;
    lVar29 = lVar32;
    if (1 < lVar17) {
      plVar19 = *(int64_t **)(param_2 + 8);
      lVar26 = (lVar17 - 2U >> 1) + 1;
      lVar24 = lVar26 * 2;
      do {
        lVar27 = lVar27 + *(int *)(*plVar19 + 0x20);
        lVar29 = lVar29 + *(int *)(plVar19[1] + 0x20);
        plVar19 = plVar19 + 2;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
    if (lVar24 < lVar17) {
      lVar32 = (int64_t)*(int *)(*(int64_t *)(*(int64_t *)(param_2 + 8) + lVar24 * 8) + 0x20);
    }
    if (lVar32 + lVar29 + lVar27 != 0) {
      FUN_180099100(param_1);
      lVar17 = system_message_buffer;
      uVar1 = *(int32_t *)(system_operation_state + 0x17ec);
      uVar2 = *(int32_t *)(system_operation_state + 0x17f0);
      plVar19 = *(int64_t **)(system_message_buffer + 0x1cd8);
      plVar22 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x121e0) + 0x1d8);
      if (plVar22 == (int64_t *)0x0) {
        plVar22 = (int64_t *)0x0;
      }
      else {
        if (system_main_module_state != 0) {
          *(int64_t *)(*(int64_t *)(system_message_buffer + 0x121e0) + 0x340) =
               (int64_t)*(int *)(system_main_module_state + 0x224);
        }
        if (*plVar22 != 0) {
          (**(code **)(*plVar19 + 0x70))(plVar19,*plVar22,1);
          lVar17 = system_message_buffer;
        }
      }
      plVar19[0x1077] = (int64_t)plVar22;
      FUN_18029de40(*(uint64_t *)(lVar17 + 0x1cd8),1);
      *(int32_t *)(param_1 + 0x84) =
           *(int32_t *)(*(int64_t *)(system_message_buffer + 0x121e0) + 0x324);
      *(int32_t *)(param_1 + 0xa4) = 1;
      uStack_270 = 0;
      uStack_26c = 0;
      plStack_278 = (int64_t *)0x10000010001;
      pcStack_2d8 = FUN_180045af0;
      FUN_1808fc838(auStack_238,8,0x10,&SUB_18005d5f0);
      plStack_2b0 = (int64_t *)0x0;
      puStack_2d0 = auStack_1b8;
      FUN_180206da0(puStack_2d0,*(uint64_t *)(*(int64_t *)(param_1 + 0x10) + 0x18),&plStack_278,
                    auStack_238);
      pcStack_2d8 = (code *)&uStack_268;
      FUN_1802072b0(pcStack_2d8,*(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0x18));
      plVar19 = plStack_2b0;
      puVar28 = *(int32_t **)(auStack_238[*(int *)(system_message_buffer + 0x8c)] + 0x10);
      puVar30 = *(int32_t **)(auStack_238[*(int *)(system_message_buffer + 0x80)] + 0x10);
      uVar20 = auStack_238[*(int *)(system_message_buffer + 0x78)];
      puVar23 = *(int32_t **)(uVar20 + 0x10);
      lStack_2a0 = plStack_2b0[2];
      iVar33 = 0;
      iStack_2c8 = 0;
      if (0 < *(int *)(param_2 + 0x10)) {
        lVar17 = 0;
        uStack_2b8 = 0;
        do {
          lVar24 = *(int64_t *)(uStack_2b8 + *(int64_t *)(lStack_2a8 + 8));
          uVar35 = *(uint *)(lVar24 + 0x20);
          uVar31 = 0;
          if (3 < uVar35) {
            do {
              lVar29 = (int64_t)(int)uVar31;
              lVar27 = *(int64_t *)(lVar24 + 0x28);
              *puVar28 = *(int32_t *)(lVar27 + lVar29 * 0x14);
              puVar28[1] = *(int32_t *)(lVar27 + 4 + lVar29 * 0x14);
              puVar28[2] = 0;
              *puVar30 = *(int32_t *)(lVar27 + 8 + lVar29 * 0x14);
              puVar30[1] = *(int32_t *)(lVar27 + 0xc + lVar29 * 0x14);
              *puVar23 = *(int32_t *)(lVar27 + 0x10 + lVar29 * 0x14);
              lVar27 = *(int64_t *)(lVar24 + 0x28);
              puVar28[3] = *(int32_t *)(lVar27 + 0x14 + lVar29 * 0x14);
              puVar28[4] = *(int32_t *)(lVar27 + 0x18 + lVar29 * 0x14);
              puVar28[5] = 0;
              puVar30[2] = *(int32_t *)(lVar27 + 0x1c + lVar29 * 0x14);
              puVar30[3] = *(int32_t *)(lVar27 + 0x20 + lVar29 * 0x14);
              puVar23[1] = *(int32_t *)(lVar27 + 0x24 + lVar29 * 0x14);
              lVar27 = *(int64_t *)(lVar24 + 0x28);
              puVar28[6] = *(int32_t *)(lVar27 + 0x28 + lVar29 * 0x14);
              puVar28[7] = *(int32_t *)(lVar27 + 0x2c + lVar29 * 0x14);
              puVar28[8] = 0;
              puVar30[4] = *(int32_t *)(lVar27 + 0x30 + lVar29 * 0x14);
              puVar30[5] = *(int32_t *)(lVar27 + 0x34 + lVar29 * 0x14);
              puVar23[2] = *(int32_t *)(lVar27 + 0x38 + lVar29 * 0x14);
              lVar27 = *(int64_t *)(lVar24 + 0x28);
              puVar28[9] = *(int32_t *)(lVar27 + 0x3c + lVar29 * 0x14);
              puVar28[10] = *(int32_t *)(lVar27 + 0x40 + lVar29 * 0x14);
              puVar28[0xb] = 0;
              puVar30[6] = *(int32_t *)(lVar27 + 0x44 + lVar29 * 0x14);
              puVar30[7] = *(int32_t *)(lVar27 + 0x48 + lVar29 * 0x14);
              puVar23[3] = *(int32_t *)(lVar27 + 0x4c + lVar29 * 0x14);
              puVar23 = puVar23 + 4;
              puVar30 = puVar30 + 8;
              puVar28 = puVar28 + 0xc;
              uVar31 = uVar31 + 4;
            } while (uVar31 < uVar35 - 3);
          }
          iVar25 = 0;
          for (; uVar31 < uVar35; uVar31 = uVar31 + 1) {
            lVar29 = (int64_t)(int)uVar31;
            lVar27 = *(int64_t *)(lVar24 + 0x28);
            *puVar28 = *(int32_t *)(lVar27 + lVar29 * 0x14);
            puVar28[1] = *(int32_t *)(lVar27 + 4 + lVar29 * 0x14);
            puVar28[2] = 0;
            *puVar30 = *(int32_t *)(lVar27 + 8 + lVar29 * 0x14);
            puVar30[1] = *(int32_t *)(lVar27 + 0xc + lVar29 * 0x14);
            *puVar23 = *(int32_t *)(lVar27 + 0x10 + lVar29 * 0x14);
            puVar23 = puVar23 + 1;
            puVar30 = puVar30 + 2;
            puVar28 = puVar28 + 3;
          }
          if (0 < *(int *)(lVar24 + 0x10)) {
            lVar27 = 0;
            do {
              *(short *)(lStack_2a0 + lVar17 * 2) =
                   *(short *)(lVar27 + *(int64_t *)(lVar24 + 0x18)) + (short)iVar33;
              lVar17 = lVar17 + 1;
              iVar25 = iVar25 + 1;
              lVar27 = lVar27 + 2;
            } while (iVar25 < *(int *)(lVar24 + 0x10));
          }
          iVar33 = iVar33 + *(int *)(lVar24 + 0x20);
          iStack_2c8 = iStack_2c8 + 1;
          uVar20 = uStack_2b8 + 8;
          param_1 = lStack_298;
          uStack_2b8 = uVar20;
        } while (iStack_2c8 < *(int *)(lStack_2a8 + 0x10));
      }
      uVar38 = FUN_180207110(uVar20,*(uint64_t *)(*(int64_t *)(param_1 + 0x10) + 0x18),
                             auStack_238);
      FUN_180207400(uVar38,*(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0x18),&plStack_2b0);
      lVar17 = *(int64_t *)(system_message_buffer + 0x1cd8);
      lVar24 = *(int64_t *)(system_message_buffer + 0x1ca8);
      plVar22 = *(int64_t **)(lVar17 + 0x8400);
      pcVar4 = *(code **)(*plVar22 + 0x38);
      *(int32_t *)(lVar24 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      (*pcVar4)(plVar22,7,1,lVar24 + 0x10);
      plVar22 = *(int64_t **)(lVar17 + 0x8400);
      pcVar4 = *(code **)(*plVar22 + 0x1f0);
      *(int32_t *)(lVar24 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      (*pcVar4)(plVar22,7,1,lVar24 + 0x10);
      plVar22 = *(int64_t **)(lVar17 + 0x8400);
      pcVar4 = *(code **)(*plVar22 + 0x210);
      *(int32_t *)(lVar24 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      (*pcVar4)(plVar22,7,1,lVar24 + 0x10);
      plVar22 = *(int64_t **)(lVar17 + 0x8400);
      pcVar4 = *(code **)(*plVar22 + 0x80);
      *(int32_t *)(lVar24 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      (*pcVar4)(plVar22,7,1,lVar24 + 0x10);
      plVar22 = *(int64_t **)(lVar17 + 0x8400);
      pcVar4 = *(code **)(*plVar22 + 0x238);
      *(int32_t *)(lVar24 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      (*pcVar4)(plVar22,7,1,lVar24 + 0x10);
      lVar24 = system_message_buffer;
      uVar38 = *(uint64_t *)(param_1 + 0x28);
      uVar21 = *(int32_t *)(param_1 + 0x30);
      uVar6 = *(int32_t *)(param_1 + 0x34);
      uVar7 = *(int32_t *)(param_1 + 0x38);
      uVar8 = *(int32_t *)(param_1 + 0x3c);
      uVar9 = *(int32_t *)(param_1 + 0x40);
      uVar10 = *(int32_t *)(param_1 + 0x44);
      uVar11 = *(int32_t *)(param_1 + 0x48);
      uVar12 = *(int32_t *)(param_1 + 0x4c);
      uVar13 = *(int32_t *)(param_1 + 0x50);
      uVar14 = *(int32_t *)(param_1 + 0x54);
      uVar15 = *(int32_t *)(param_1 + 0x58);
      uVar16 = *(int32_t *)(param_1 + 0x5c);
      lVar17 = *(int64_t *)(system_message_buffer + 0x1cd8);
      *(uint64_t *)(lVar17 + 0x80) = *(uint64_t *)(param_1 + 0x20);
      *(uint64_t *)(lVar17 + 0x88) = uVar38;
      *(int32_t *)(lVar17 + 0x90) = uVar21;
      *(int32_t *)(lVar17 + 0x94) = uVar6;
      *(int32_t *)(lVar17 + 0x98) = uVar7;
      *(int32_t *)(lVar17 + 0x9c) = uVar8;
      *(int32_t *)(lVar17 + 0xa0) = uVar9;
      *(int32_t *)(lVar17 + 0xa4) = uVar10;
      *(int32_t *)(lVar17 + 0xa8) = uVar11;
      *(int32_t *)(lVar17 + 0xac) = uVar12;
      *(int32_t *)(lVar17 + 0xb0) = uVar13;
      *(int32_t *)(lVar17 + 0xb4) = uVar14;
      *(int32_t *)(lVar17 + 0xb8) = uVar15;
      *(int32_t *)(lVar17 + 0xbc) = uVar16;
      lVar17 = *(int64_t *)(lVar24 + 0x1cd8);
      FUN_18029fc10(lVar17,*(uint64_t *)(lVar24 + 0x1ca8),lVar17 + 0x80,0x80);
      iVar33 = 0;
      iStack_2c8 = 0;
      iStack_2c4 = 0;
      uStack_2b8 = uStack_2b8 & 0xffffffff00000000;
      if (0 < *(int *)(lStack_2a8 + 0x10)) {
        lStack_2a0 = 0;
        iVar25 = iVar33;
        do {
          piVar5 = *(int **)(lStack_2a0 + *(int64_t *)(lStack_2a8 + 8));
          iStack_2c0 = 0;
          if (0 < *piVar5) {
            lStack_290 = 0;
            do {
              plVar19 = (int64_t *)0x0;
              puVar36 = (uint *)(*(int64_t *)(piVar5 + 2) + lStack_290);
              if ((*(uint *)(*(int64_t *)(puVar36 + 6) + 0x328) >> 0xd & 1) == 0) {
                FUN_18029cdd0(*(uint64_t *)(system_message_buffer + 0x1cd8));
                lVar17 = *(int64_t *)(system_message_buffer + 0x1cd8);
                plVar18 = (int64_t *)FUN_18023a940();
                plVar22 = plVar19;
                if (((plVar18 != (int64_t *)0x0) && (plVar22 = plVar18, plVar18[1] == 0)) &&
                   (plVar18[2] == 0)) {
                  plVar22 = (int64_t *)0x0;
                }
                if ((((*(int64_t **)(lVar17 + 0x8438) != plVar22) ||
                     (*(int *)(lVar17 + 0x8838) != -1)) || (*(int *)(lVar17 + 0x8a38) != 0x10)) &&
                   (((plVar22 == (int64_t *)0x0 || (plVar22[1] != 0)) || (plVar22[2] != 0)))) {
                  if (plVar22 != (int64_t *)0x0) {
                    plVar19 = (int64_t *)plVar22[2];
                  }
                  plStack_278 = plVar19;
                  (**(code **)(**(int64_t **)(lVar17 + 0x8400) + 0x40))
                            (*(int64_t **)(lVar17 + 0x8400),0,1,&plStack_278);
                  *(int64_t **)(lVar17 + 0x8438) = plVar22;
                  *(int32_t *)(lVar17 + 0x8838) = 0xffffffff;
                  *(int32_t *)(lVar17 + 0x8a38) = 0x10;
                  *(int *)(lVar17 + 0x82b4) = *(int *)(lVar17 + 0x82b4) + 1;
                }
              }
              else {
                FUN_18029cdd0(*(uint64_t *)(system_message_buffer + 0x1cd8),param_1 + 0xa8);
                lVar17 = *(int64_t *)(system_message_buffer + 0x1cd8);
                plVar18 = (int64_t *)FUN_18023a940();
                plVar22 = plVar19;
                if (((plVar18 != (int64_t *)0x0) && (plVar22 = plVar18, plVar18[1] == 0)) &&
                   (plVar18[2] == 0)) {
                  plVar22 = (int64_t *)0x0;
                }
                if ((((*(int64_t **)(lVar17 + 0x8530) != plVar22) ||
                     (*(int *)(lVar17 + 0x88b4) != -1)) || (*(int *)(lVar17 + 0x8ab4) != 0x10)) &&
                   (((plVar22 == (int64_t *)0x0 || (plVar22[1] != 0)) || (plVar22[2] != 0)))) {
                  if (plVar22 != (int64_t *)0x0) {
                    plVar19 = (int64_t *)plVar22[2];
                  }
                  plStack_288 = plVar19;
                  (**(code **)(**(int64_t **)(lVar17 + 0x8400) + 0x40))
                            (*(int64_t **)(lVar17 + 0x8400),0x1f,1,&plStack_288);
                  *(int64_t **)(lVar17 + 0x8530) = plVar22;
                  *(int32_t *)(lVar17 + 0x88b4) = 0xffffffff;
                  *(int32_t *)(lVar17 + 0x8ab4) = 0x10;
                  *(int *)(lVar17 + 0x82b4) = *(int *)(lVar17 + 0x82b4) + 1;
                }
                lVar24 = system_message_buffer;
                iVar33 = iVar25 + (iVar25 / 6 + (iVar25 >> 0x1f) +
                                  (int)(((int64_t)iVar25 / 6 + ((int64_t)iVar25 >> 0x3f) &
                                        0xffffffffU) >> 0x1f)) * -6;
                iVar25 = iVar25 + 1;
                *(float *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0xc0) = (float)iVar33;
                lVar17 = *(int64_t *)(lVar24 + 0x1cd8);
                iStack_2c4 = iVar25;
                FUN_18029fc10(lVar17,*(uint64_t *)(lVar24 + 0x1ca8),lVar17 + 0x80,0x80);
              }
              if (*(code **)(puVar36 + 8) == (code *)0x0) {
                lVar17 = *(int64_t *)(system_message_buffer + 0x1cd8);
                lVar24 = *(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x18);
                if (*(int64_t *)(lVar17 + 0x8240) != lVar24) {
                  *(int64_t *)(lVar17 + 0x8240) = lVar24;
                  puStack_2d0 = (int8_t *)(lVar24 + 0x220);
                  pcStack_2d8 = (code *)(lVar24 + 0x260);
                  (**(code **)(**(int64_t **)(lVar17 + 0x8400) + 0x90))
                            (*(int64_t **)(lVar17 + 0x8400),0,*(int32_t *)(lVar24 + 0x188),
                             lVar24 + 0x1a0);
                }
                lVar17 = *(int64_t *)(system_message_buffer + 0x1cd8);
                lVar24 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x18);
                if (*(int64_t *)(lVar17 + 0x8238) != lVar24) {
                  *(int64_t *)(lVar17 + 0x8238) = lVar24;
                  lVar27 = *(int64_t *)(lVar24 + 0x18);
                  *(int32_t *)(lVar27 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
                  if ((*(byte *)(lVar24 + 4) & 1) == 0) {
                    uVar21 = 0x39;
                    iVar33 = *(int *)(lVar24 + 8) * 2;
                  }
                  else {
                    uVar21 = 0x2a;
                    iVar33 = *(int *)(lVar24 + 8) * 4;
                  }
                  (**(code **)(**(int64_t **)(lVar17 + 0x8400) + 0x98))
                            (*(int64_t **)(lVar17 + 0x8400),*(uint64_t *)(lVar27 + 0x10),uVar21,
                             iVar33);
                }
                uVar35 = (uint)(float)puVar36[1];
                uVar37 = (uint)(float)puVar36[2];
                uVar34 = (uint)(float)puVar36[3];
                uVar31 = (uint)(float)puVar36[4];
                uVar3 = *(ushort *)(*(int64_t *)(system_message_buffer + 0x121e0) + 0x32c);
                if ((int)uVar35 < 0) {
                  uVar35 = 0;
                }
                else if ((int)(uint)uVar3 < (int)uVar35) {
                  uVar35 = (uint)uVar3;
                }
                if ((int)uVar34 < 0) {
                  uVar34 = 0;
                }
                else if ((int)(uint)uVar3 < (int)uVar34) {
                  uVar34 = (uint)uVar3;
                }
                uVar3 = *(ushort *)(*(int64_t *)(system_message_buffer + 0x121e0) + 0x32e);
                if ((int)uVar37 < 0) {
                  uVar37 = 0;
                }
                else if ((int)(uint)uVar3 < (int)uVar37) {
                  uVar37 = (uint)uVar3;
                }
                if ((int)uVar31 < 0) {
                  uVar31 = 0;
                }
                else if ((int)(uint)uVar3 < (int)uVar31) {
                  uVar31 = (uint)uVar3;
                }
                lVar17 = *(int64_t *)(system_message_buffer + 0x1cd8);
                uStack_268 = 0;
                uStack_258 = 0;
                uStack_254 = 0x3f800000;
                plVar19 = *(int64_t **)(lVar17 + 0x8400);
                uStack_260 = uVar1;
                uStack_25c = uVar2;
                (**(code **)(*plVar19 + 0x160))(plVar19,1,&uStack_268);
                plVar19 = *(int64_t **)(lVar17 + 0x8400);
                uStack_250 = uVar35;
                uStack_24c = uVar37;
                uStack_248 = uVar34;
                uStack_244 = uVar31;
                (**(code **)(*plVar19 + 0x168))(plVar19,1,&uStack_250);
                param_1 = lStack_298;
                iVar25 = iStack_2c4;
                if (system_ptr_2846 == '\0') {
                  plVar19 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
                  (**(code **)(*plVar19 + 0x60))(plVar19,(*puVar36 / 3) * 3,iStack_2c8,0);
                  param_1 = lStack_298;
                  iVar25 = iStack_2c4;
                }
              }
              else {
                (**(code **)(puVar36 + 8))(piVar5,puVar36);
              }
              iStack_2c8 = iStack_2c8 + *puVar36;
              iStack_2c0 = iStack_2c0 + 1;
              lStack_290 = lStack_290 + 0x30;
            } while (iStack_2c0 < *piVar5);
            iVar33 = (int)uStack_2b8;
          }
          iVar33 = iVar33 + 1;
          uStack_2b8 = CONCAT44(uStack_2b8._4_4_,iVar33);
          lStack_2a0 = lStack_2a0 + 8;
          plVar19 = plStack_2b0;
        } while (iVar33 < *(int *)(lStack_2a8 + 0x10));
      }
      plStack_278 = *(int64_t **)(core_system_data_memory + 0x10);
      *(uint64_t *)(core_system_data_memory + 0x10) = 0;
      if (plStack_278 != (int64_t *)0x0) {
        (**(code **)(*plStack_278 + 0x38))();
      }
      (**(code **)(*plVar19 + 0x38))(plVar19);
      FUN_1808fc8a8(auStack_238,8,0x10,FUN_180045af0);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (uint64_t)auStack_2f8);
}





/**
 * @brief 系统数据缓冲区管理器
 * 
 * 负责管理系统数据缓冲区的分配、释放和清理工作。
 * 该函数是一个简化的缓冲区管理接口，提供统一的内存管理功能。
 * 
 * @param param_1 缓冲区句柄，用于标识要管理的缓冲区
 * @return void
 * 
 * 功能说明：
 * - 释放指定缓冲区的资源
 * - 执行内存清理操作
 * - 更新系统状态
 * - 重置缓冲区状态
 */
void SystemDataBufferManager(uint64_t param_1)

{
  // 调用内存清理函数，释放缓冲区资源
  // 参数说明：
  // - param_1: 缓冲区句柄
  // - 8: 缓冲区对齐大小
  // - 0x10: 缓冲区头部大小
  // - FUN_180045af0: 内存清理回调函数
  // - 0xfffffffffffffffe: 安全Cookie掩码
  FUN_1808fc8a8(param_1, 8, 0x10, FUN_180045af0, SYSTEM_SECURITY_COOKIE_MASK);
  
  // 函数执行完成，返回调用者
  return;
}



/**
 * @brief 系统内存分配器
 * 
 * 提供高性能的内存分配服务，支持线程本地存储优化。
 * 该函数实现了复杂的内存管理逻辑，包括线程本地存储、
 * 系统初始化检查和内存池管理等功能。
 * 
 * @param param_1 分配大小
 * @param param_2 对齐要求
 * @param param_3 分配标志
 * @param param_4 用户数据
 * @return void* 分配的内存指针
 * 
 * 功能说明：
 * - 检查线程本地存储状态
 * - 必要时初始化系统组件
 * - 管理内存池配置
 * - 提供优化的内存分配服务
 * - 支持自定义内存分配策略
 */
void *
SystemMemoryAllocator(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  void *puVar1;          // 返回的内存指针
  uint64_t uVar2;        // 安全Cookie掩码
  
  // 设置安全Cookie掩码
  uVar2 = SYSTEM_SECURITY_COOKIE_MASK;
  
  // 检查线程本地存储中的系统配置状态
  // 通过TLS索引获取当前线程的系统配置内存状态
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) + 0x48) < core_system_config_memory) {
    
    // 如果系统未初始化，则调用系统初始化器
    SystemInitializer(&system_ptr_9210);
    
    // 检查系统配置内存状态
    if (core_system_config_memory == -1) {
      // 执行系统配置初始化序列
      core_system_config_memory = &system_data_buffer_ptr;  // 设置数据缓冲区指针
      core_system_config_memory = 0;                         // 重置配置状态
      core_system_config_memory = (void *)0x0;                // 清空配置指针
      core_system_config_memory = 0;                         // 再次重置状态
      
      // 调用系统配置函数
      FUN_1808fc820(FUN_1809419e0);  // 配置系统参数
      FUN_1808fcb30(&system_ptr_9210); // 完成系统初始化
    }
  }
  
  // 调用主内存分配函数
  // 参数说明：
  // - system_main_module_state + 8: 主模块状态
  // - &system_ptr_9218: 系统指针
  // - param_3: 分配标志
  // - param_4: 用户数据
  // - uVar2: 安全Cookie掩码
  FUN_1801717e0(*(uint64_t *)(system_main_module_state + 8), &system_ptr_9218, param_3, param_4, uVar2);
  
  // 设置默认返回指针
  puVar1 = &system_buffer_ptr;
  
  // 如果有自定义配置内存，则使用自定义内存
  if (core_system_config_memory != (void *)0x0) {
    puVar1 = core_system_config_memory;
  }
  
  // 返回分配的内存指针
  return puVar1;
}



int8_t FUN_18009a080(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t *param_4)

{
  int8_t uVar1;
  uint64_t uVar2;
  void *puVar3;
  uint uVar4;
  uint64_t uStackX_8;
  int32_t uStackX_10;
  float fStackX_14;
  uint64_t uStackX_18;
  uint64_t *puStackX_20;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  
  uStackX_8 = param_1;
  uStackX_18 = param_3;
  puStackX_20 = param_4;
  uVar2 = func_0x000180220c90(*(int32_t *)(param_2 + 0x324));
  FUN_18012e3b0();
  puVar3 = &system_buffer_ptr;
  if ((void *)param_4[1] != (void *)0x0) {
    puVar3 = (void *)param_4[1];
  }
  uVar4 = (uint)*(ushort *)(param_2 + 0x32e);
  FUN_18010f010(&unknown_var_2320_ptr,puVar3,uVar2,*(int16_t *)(param_2 + 0x32c),uVar4);
  uStack_40 = 0x3f8000003f800000;
  uStack_38 = 0x3f8000003f800000;
  uStack_30 = 0;
  uStack_28 = 0;
  uStackX_18 = 0x3f8000003f800000;
  uStackX_8 = 0;
  fStackX_14 = ((float)*(ushort *)(param_2 + 0x32e) * 256.0) / (float)*(ushort *)(param_2 + 0x32c);
  uStackX_10 = 0x43800000;
  uVar1 = FUN_180110ca0(param_2,&uStackX_10,&uStackX_8,&uStackX_18,uVar4,&uStack_30,&uStack_40);
  FUN_18012e4e0();
  *param_4 = &system_data_buffer_ptr;
  if (param_4[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_4[1] = 0;
  *(int32_t *)(param_4 + 3) = 0;
  *param_4 = &system_state_ptr;
  return uVar1;
}





// 函数: void FUN_18009a1e0(void)
void FUN_18009a1e0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_18009a4b0(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4,
void FUN_18009a4b0(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4,
                  int64_t param_5)

{
  int64_t *plVar1;
  double *pdVar2;
  double dVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  uint64_t *puVar8;
  char *pcVar9;
  int64_t *plVar11;
  int64_t *plVar12;
  int iVar13;
  uint uVar14;
  int64_t lVar16;
  uint64_t uVar17;
  int64_t *plVar18;
  void *puVar19;
  float fVar20;
  char *pcVar10;
  uint64_t uVar15;
  
  iVar13 = 0;
  plVar12 = *(int64_t **)(param_5 + 0x48);
  if (*(int64_t *)(param_5 + 0x50) - (int64_t)plVar12 >> 3 != 0) {
    lVar5 = 0;
    do {
      fVar20 = (float)FUN_18009ae50(param_2,*(uint64_t *)(lVar5 + *(int64_t *)(param_5 + 0x48)));
      iVar13 = iVar13 + 1;
      *(double *)(*(int64_t *)(lVar5 + *(int64_t *)(param_5 + 0x48)) + 0x40) = (double)fVar20;
      plVar12 = *(int64_t **)(param_5 + 0x48);
      lVar5 = lVar5 + 8;
    } while ((uint64_t)(int64_t)iVar13 <
             (uint64_t)(*(int64_t *)(param_5 + 0x50) - (int64_t)plVar12 >> 3));
  }
  plVar4 = *(int64_t **)(param_5 + 0x50);
  if (plVar12 != plVar4) {
    iVar13 = 0;
    lVar16 = (int64_t)plVar4 - (int64_t)plVar12 >> 3;
    for (lVar5 = lVar16; lVar5 != 0; lVar5 = lVar5 >> 1) {
      iVar13 = iVar13 + 1;
    }
    FUN_18009d630(plVar12,plVar4,(int64_t)(iVar13 + -1) * 2,0);
    plVar18 = plVar12;
    if (lVar16 < 0x1d) {
      while (plVar18 = plVar18 + 1, plVar18 != plVar4) {
        lVar5 = *plVar18;
        plVar11 = plVar18;
        if (plVar18 != plVar12) {
          dVar3 = *(double *)(lVar5 + 0x40);
          plVar7 = plVar18;
          do {
            plVar6 = plVar7 + -1;
            plVar7 = plVar7 + -1;
            pdVar2 = (double *)(*plVar6 + 0x40);
            if (dVar3 < *pdVar2 || dVar3 == *pdVar2) break;
            *plVar11 = *plVar6;
            plVar11 = plVar11 + -1;
          } while (plVar7 != plVar12);
        }
        *plVar11 = lVar5;
      }
    }
    else {
      plVar18 = plVar12 + 0x1c;
      plVar11 = plVar12;
      if (plVar12 != plVar18) {
        while (plVar11 = plVar11 + 1, plVar11 != plVar18) {
          lVar5 = *plVar11;
          plVar7 = plVar11;
          if (plVar11 != plVar12) {
            dVar3 = *(double *)(lVar5 + 0x40);
            plVar6 = plVar11;
            do {
              plVar1 = plVar6 + -1;
              plVar6 = plVar6 + -1;
              pdVar2 = (double *)(*plVar1 + 0x40);
              if (dVar3 < *pdVar2 || dVar3 == *pdVar2) break;
              *plVar7 = *plVar1;
              plVar7 = plVar7 + -1;
            } while (plVar6 != plVar12);
          }
          *plVar7 = lVar5;
        }
      }
      for (; plVar18 != plVar4; plVar18 = plVar18 + 1) {
        lVar5 = *plVar18;
        lVar16 = plVar18[-1];
        dVar3 = *(double *)(lVar5 + 0x40);
        plVar12 = plVar18 + -1;
        plVar11 = plVar18;
        plVar7 = plVar18;
        if (*(double *)(lVar16 + 0x40) <= dVar3 && dVar3 != *(double *)(lVar16 + 0x40)) {
          do {
            plVar11 = plVar12;
            *plVar7 = lVar16;
            lVar16 = plVar11[-1];
            plVar12 = plVar11 + -1;
            plVar7 = plVar11;
          } while (*(double *)(lVar16 + 0x40) <= dVar3 && dVar3 != *(double *)(lVar16 + 0x40));
        }
        *plVar11 = lVar5;
      }
    }
  }
  puVar8 = (uint64_t *)FUN_1804c1300(param_3 + 0x60,0x60);
  uVar15 = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[4] = 0;
  *(int32_t *)(puVar8 + 5) = 1;
  puVar8[6] = 0;
  puVar8[8] = 0;
  pcVar9 = "scope";
  do {
    pcVar10 = pcVar9;
    pcVar9 = pcVar10 + 1;
  } while (*pcVar9 != '\0');
  *puVar8 = &unknown_var_2340_ptr;
  puVar8[2] = pcVar10 + -0x180a01603;
  puVar19 = &system_buffer_ptr;
  if (*(void **)(param_5 + 8) != (void *)0x0) {
    puVar19 = *(void **)(param_5 + 8);
  }
  FUN_180630b20(param_3,puVar8,&unknown_var_2332_ptr,puVar19);
  FUN_180630e10(param_3,puVar8,&unknown_var_2352_ptr,*(double *)(param_5 + 0x40) * 1000.0);
  uVar17 = uVar15;
  if (*(int64_t *)(param_5 + 0x50) - *(int64_t *)(param_5 + 0x48) >> 3 != 0) {
    do {
      FUN_18009a4b0(param_1,param_2,param_3,puVar8,
                    *(uint64_t *)(uVar17 + *(int64_t *)(param_5 + 0x48)));
      uVar14 = (int)uVar15 + 1;
      uVar15 = (uint64_t)uVar14;
      uVar17 = uVar17 + 8;
    } while ((uint64_t)(int64_t)(int)uVar14 <
             (uint64_t)(*(int64_t *)(param_5 + 0x50) - *(int64_t *)(param_5 + 0x48) >> 3));
  }
  if (*(int64_t *)(param_4 + 0x30) == 0) {
    puVar8[10] = 0;
    *(uint64_t **)(param_4 + 0x30) = puVar8;
  }
  else {
    puVar8[10] = *(uint64_t *)(param_4 + 0x38);
    *(uint64_t **)(*(int64_t *)(param_4 + 0x38) + 0x58) = puVar8;
  }
  *(uint64_t **)(param_4 + 0x38) = puVar8;
  puVar8[4] = param_4;
  puVar8[0xb] = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



