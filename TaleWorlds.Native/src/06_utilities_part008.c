#include "TaleWorlds.Native.Split.h"

// ============================================================================
// 工具系统高级内存管理和数据处理模块 - 06_utilities_part008.c
// ============================================================================

// 模块功能说明：
// 本模块包含11个核心工具函数，主要用于：
// 1. 内存数据结构的动态管理
// 2. 哈希表和链表操作
// 3. 缓冲区处理和内存分配
// 4. 系统状态管理和控制
// 5. 高级数据处理算法
//
// 技术特点：
// - 支持动态内存分配和释放
// - 实现高效的数据结构操作
// - 提供内存池管理功能
// - 包含错误处理和边界检查
// - 支持多线程安全操作

// ============================================================================
// 常量定义
// ============================================================================

#define UTILITIES_MAX_ITERATIONS 10          // 最大迭代次数
#define UTILITIES_DEFAULT_CAPACITY 4          // 默认容量
#define UTILITIES_GROWTH_FACTOR 1.5f         // 增长因子
#define UTILITIES_HASH_TABLE_SIZE 0x10       // 哈希表大小
#define UTILITIES_SUCCESS 0                   // 成功返回值
#define UTILITIES_ERROR_INVALID_PARAM 0x1e   // 无效参数错误
#define UTILITIES_ERROR_NO_MEMORY 0x1c       // 内存不足错误
#define UTILITIES_FLAG_ACTIVE 0x01           // 活动标志
#define UTILITIES_FLAG_PROCESSED 0x02        // 已处理标志
#define UTILITIES_FLAG_VALID 0x04            // 有效标志
#define UTILITIES_FLAG_ALLOCATED 0x08        // 已分配标志
#define UTILITIES_FLAG_LOCKED 0x10           // 锁定标志
#define UTILITIES_FLAG_DIRTY 0x20            // 脏数据标志
#define UTILITIES_FLAG_INITIALIZED 0x40       // 已初始化标志
#define UTILITIES_FLAG_FINALIZED 0x80        // 已完成标志
#define UTILITIES_FLOAT_THRESHOLD 9.223372e+18f  // 浮点数阈值
#define UTILITIES_NEGATIVE_INFINITY -0x8000000000000000  // 负无穷大
#define UTILITIES_STACK_OFFSET 0x5f0         // 栈偏移量
#define UTILITIES_DATA_OFFSET 0x18           // 数据偏移量
#define UTILITIES_CONTROL_OFFSET 0x50        // 控制偏移量
#define UTILITIES_STATE_OFFSET 0x6c          // 状态偏移量
#define UTILITIES_SIZE_OFFSET 0x20           // 大小偏移量
#define UTILITIES_POINTER_OFFSET 0x8         // 指针偏移量
#define UTILITIES_INDEX_OFFSET 0x30          // 索引偏移量
#define UTILITIES_VALUE_OFFSET 0x68          // 值偏移量
#define UTILITIES_REFERENCE_OFFSET 0x98      // 引用偏移量
#define UTILITIES_HANDLE_OFFSET 0xa0         // 句柄偏移量
#define UTILITIES_LIMIT_OFFSET 0xac          // 限制偏移量
#define UTILITIES_CALLBACK_OFFSET 0xc0       // 回调偏移量
#define UTILITIES_TEMP_OFFSET 0xa8           // 临时偏移量
#define UTILITIES_PARAM_OFFSET 0xb0          // 参数偏移量
#define UTILITIES_FLOAT_OFFSET 0xb4          // 浮点偏移量
#define UTILITIES_EXTRA_OFFSET 0xb8          // 额外偏移量
#define UTILITIES_EXTENDED_OFFSET 0xc0       // 扩展偏移量
#define UTILITIES_MASK_DEFAULT 0xfdffffff    // 默认掩码
#define UTILITIES_MASK_PROCESSED 0x4000000   // 已处理掩码
#define UTILITIES_MASK_VALID 0x02000000      // 有效掩码
#define UTILITIES_MASK_ACTIVE 0x01000000     // 活动掩码
#define UTILITIES_MASK_LOCKED 0x00800000     // 锁定掩码
#define UTILITIES_MASK_DIRTY 0x00400000      // 脏数据掩码
#define UTILITIES_MASK_INITIALIZED 0x00200000 // 已初始化掩码
#define UTILITIES_MASK_FINALIZED 0x00100000  // 已完成掩码

// ============================================================================
// 类型别名定义
// ============================================================================

typedef longlong UtilitiesHandle;                    // 工具系统句柄
typedef undefined1 *UtilitiesDataPtr;                 // 工具数据指针
typedef int *UtilitiesIntPtr;                        // 整数指针
typedef undefined8 UtilitiesUInt64;                  // 64位无符号整数
typedef uint *UtilitiesUIntPtr;                      // 无符号整数指针
typedef float *UtilitiesFloatPtr;                     // 浮点数指针
typedef undefined8 *UtilitiesVoidPtr;                // 空指针
typedef longlong *UtilitiesLongPtr;                  // 长整数指针
typedef byte *UtilitiesBytePtr;                      // 字节指针
typedef undefined4 *UtilitiesUInt32Ptr;             // 32位无符号整数指针
typedef char *UtilitiesCharPtr;                      // 字符指针
typedef bool *UtilitiesBoolPtr;                      // 布尔指针
typedef double *UtilitiesDoublePtr;                  // 双精度指针
typedef void *UtilitiesGenericPtr;                   // 通用指针
typedef longlong UtilitiesSize;                      // 大小类型
typedef int UtilitiesIndex;                          // 索引类型
typedef uint UtilitiesFlag;                          // 标志类型

// ============================================================================
// 结构体定义
// ============================================================================

/**
 * @brief 工具系统内存块结构
 */
typedef struct {
    UtilitiesHandle baseAddress;      // 基地址
    UtilitiesSize totalSize;         // 总大小
    UtilitiesSize usedSize;          // 已使用大小
    UtilitiesSize freeSize;          // 空闲大小
    UtilitiesFlag statusFlags;       // 状态标志
    UtilitiesIntPtr referenceCount;  // 引用计数
    UtilitiesVoidPtr nextBlock;      // 下一块
    UtilitiesVoidPtr previousBlock;  // 上一块
    UtilitiesBytePtr dataBuffer;     // 数据缓冲区
} UtilitiesMemoryBlock;

/**
 * @brief 工具系统哈希表结构
 */
typedef struct {
    UtilitiesHandle tableAddress;    // 表地址
    UtilitiesSize tableSize;         // 表大小
    UtilitiesSize entryCount;        // 条目数量
    UtilitiesSize bucketCount;       // 桶数量
    UtilitiesFlag hashFlags;         // 哈希标志
    UtilitiesIntPtr collisionCount;  // 冲突计数
    UtilitiesVoidPtr buckets;        // 桶数组
    UtilitiesVoidPtr entries;        // 条目数组
    UtilitiesVoidPtr freeList;       // 空闲列表
} UtilitiesHashTable;

/**
 * @brief 工具系统链表节点结构
 */
typedef struct {
    UtilitiesHandle nodeAddress;     // 节点地址
    UtilitiesVoidPtr nextNode;       // 下一个节点
    UtilitiesVoidPtr previousNode;  // 上一个节点
    UtilitiesUInt64 nodeData;       // 节点数据
    UtilitiesIndex nodeIndex;       // 节点索引
    UtilitiesFlag nodeFlags;        // 节点标志
    UtilitiesIntPtr dataSize;       // 数据大小
    UtilitiesBytePtr dataBuffer;     // 数据缓冲区
} UtilitiesListNode;

/**
 * @brief 工具系统控制结构
 */
typedef struct {
    UtilitiesHandle controlAddress; // 控制地址
    UtilitiesSize capacity;          // 容量
    UtilitiesSize count;             // 计数
    UtilitiesFlag controlFlags;     // 控制标志
    UtilitiesIntPtr state;           // 状态
    UtilitiesVoidPtr dataArea;       // 数据区域
    UtilitiesVoidPtr freeArea;       // 空闲区域
    UtilitiesVoidPtr allocatedArea;  // 已分配区域
    UtilitiesIntPtr operationCount;  // 操作计数
    UtilitiesIntPtr errorCount;      // 错误计数
} UtilitiesControl;

// ============================================================================
// 枚举定义
// ============================================================================

/**
 * @brief 工具系统状态枚举
 */
typedef enum {
    UTILITIES_STATE_IDLE = 0,        // 空闲状态
    UTILITIES_STATE_INITIALIZING = 1, // 初始化中
    UTILITIES_STATE_PROCESSING = 2,  // 处理中
    UTILITIES_STATE_FINALIZING = 3,  // 完成中
    UTILITIES_STATE_ERROR = 4,       // 错误状态
    UTILITIES_STATE_LOCKED = 5,      // 锁定状态
    UTILITIES_STATE_BUSY = 6,        // 忙碌状态
    UTILITIES_STATE_PENDING = 7,    // 等待状态
    UTILITIES_STATE_COMPLETED = 8,   // 已完成
    UTILITIES_STATE_ABORTED = 9      // 已中止
} UtilitiesStateEnum;

/**
 * @brief 工具系统操作类型枚举
 */
typedef enum {
    UTILITIES_OP_NONE = 0,          // 无操作
    UTILITIES_OP_ALLOCATE = 1,      // 分配操作
    UTILITIES_OP_FREE = 2,          // 释放操作
    UTILITIES_OP_RESIZE = 3,        // 调整大小
    UTILITIES_OP_COPY = 4,          // 复制操作
    UTILITIES_OP_MOVE = 5,          // 移动操作
    UTILITIES_OP_SEARCH = 6,        // 搜索操作
    UTILITIES_OP_INSERT = 7,        // 插入操作
    UTILITIES_OP_DELETE = 8,        // 删除操作
    UTILITIES_OP_UPDATE = 9,        // 更新操作
    UTILITIES_OP_VALIDATE = 10       // 验证操作
} UtilitiesOperationEnum;

/**
 * @brief 工具系统错误类型枚举
 */
typedef enum {
    UTILITIES_ERROR_NONE = 0,        // 无错误
    UTILITIES_ERROR_INVALID_HANDLE = 1, // 无效句柄
    UTILITIES_ERROR_INVALID_SIZE = 2,   // 无效大小
    UTILITIES_ERROR_INVALID_FLAG = 3,   // 无效标志
    UTILITIES_ERROR_OUT_OF_MEMORY = 4,  // 内存不足
    UTILITIES_ERROR_ACCESS_DENIED = 5,  // 访问被拒绝
    UTILITIES_ERROR_TIMEOUT = 6,       // 超时
    UTILITIES_ERROR_BUSY = 7,          // 忙碌
    UTILITIES_ERROR_LOCKED = 8,        // 已锁定
    UTILITIES_ERROR_CORRUPTED = 9,     // 数据损坏
    UTILITIES_ERROR_UNKNOWN = 10       // 未知错误
} UtilitiesErrorEnum;

// ============================================================================
// 函数别名定义
// ============================================================================

#define UtilitiesProcessData FUN_180895360
#define UtilitiesProcessIndexedData FUN_1808953bf
#define UtilitiesCleanupStack FUN_180895b89
#define UtilitiesFindNextData FUN_180895bb0
#define UtilitiesValidateAndProcess FUN_180895c60
#define UtilitiesProcessIndexedEntry FUN_180895c8b
#define UtilitiesProcessDirectEntry FUN_180895cf1
#define UtilitiesGetDefaultError FUN_180895d16
#define UtilitiesInsertHashEntry FUN_180895d30
#define UtilitiesUpdateHashEntry FUN_180895d62
#define UtilitiesAddListEntry FUN_180895d9c
#define UtilitiesUpdateDirectData FUN_180895e00
#define UtilitiesAllocateAndInsert FUN_180895e19

// ============================================================================
// 核心函数实现
// ============================================================================

/**
 * @brief 工具系统数据处理器
 * @param systemHandle 系统句柄
 * @param dataPtr 数据指针
 * @param resultPtr 结果指针
 * @return 无返回值
 * 
 * 功能说明：
 * 1. 处理系统数据块
 * 2. 执行状态检查和验证
 * 3. 处理浮点数计算
 * 4. 管理内存分配和释放
 * 5. 执行回调函数
 * 6. 处理错误情况
 */
void UtilitiesProcessData(UtilitiesHandle systemHandle, UtilitiesDataPtr dataPtr, UtilitiesIntPtr resultPtr)
{
    // 局部变量声明
    byte statusFlag;                    // 状态标志
    longlong calculatedValue;           // 计算值
    char operationType;                 // 操作类型
    int currentIndex;                   // 当前索引
    undefined8 callbackResult;          // 回调结果
    longlong referenceValue;            // 引用值
    longlong adjustedValue;             // 调整值
    int limitIndex;                     // 限制索引
    longlong dataPointer;               // 数据指针
    float primaryFloat;                 // 主要浮点数
    float secondaryFloat;               // 次要浮点数
    
    // 栈变量声明
    undefined1 stackBuffer_738 [68];    // 栈缓冲区738
    undefined4 stackValue_6f4;          // 栈值6f4
    int *resultCounter;                 // 结果计数器
    longlong dataTableAddress;          // 数据表地址
    longlong indexOffset;               // 索引偏移
    longlong arrayData_6b0 [13];        // 数组数据6b0
    undefined1 dataBuffer_648 [1536];    // 数据缓冲区648
    ulonglong stackGuard;               // 栈保护值
    
    // 初始化栈保护
    stackGuard = _DAT_180bf00a8 ^ (ulonglong)stackBuffer_738;
    
    // 获取当前索引和设置结果指针
    currentIndex = *(int *)(systemHandle + UTILITIES_LIMIT_OFFSET);
    adjustedValue = (longlong)currentIndex;
    resultCounter = resultPtr;
    
    // 检查索引是否在有效范围内
    if (currentIndex < *(int *)(systemHandle + UTILITIES_SIZE_OFFSET)) {
        // 获取数据表地址和计算索引偏移
        dataTableAddress = *(longlong *)(systemHandle + UTILITIES_DATA_OFFSET);
        indexOffset = adjustedValue * 3;
        dataPointer = (longlong)*(int *)(dataTableAddress + adjustedValue * 0xc) + *(longlong *)(systemHandle + UTILITIES_POINTER_OFFSET);
        operationType = *(char *)(dataTableAddress + 8 + adjustedValue * 0xc);
        
        // 根据操作类型处理
        if (operationType == '\x01') {
            // 处理类型1操作
            limitIndex = *(int *)(systemHandle + UTILITIES_PARAM_OFFSET);
            if (currentIndex < limitIndex) {
                // 增加索引并跳转到清理
                *(int *)(systemHandle + UTILITIES_LIMIT_OFFSET) = currentIndex + 1;
                goto cleanup_stack;
            }
            
            // 获取并处理浮点数
            primaryFloat = *(float *)(dataPointer + 0x18);
            secondaryFloat = primaryFloat;
            if (limitIndex != -1) {
                secondaryFloat = *(float *)(systemHandle + UTILITIES_FLOAT_OFFSET);
                limitIndex = -1;
                *(undefined4 *)(systemHandle + UTILITIES_PARAM_OFFSET) = 0xffffffff;
                *(undefined4 *)(systemHandle + UTILITIES_FLOAT_OFFSET) = 0xbf800000;
            }
            
            // 保存浮点数值
            *(float *)(systemHandle + UTILITIES_TEMP_OFFSET) = primaryFloat;
            adjustedValue = 0;
            primaryFloat = (float)*(uint *)(systemHandle + UTILITIES_VALUE_OFFSET) * primaryFloat;
            
            // 处理浮点数阈值检查
            if ((UTILITIES_FLOAT_THRESHOLD <= primaryFloat) && 
                (primaryFloat = primaryFloat - UTILITIES_FLOAT_THRESHOLD, primaryFloat < UTILITIES_FLOAT_THRESHOLD)) {
                adjustedValue = UTILITIES_NEGATIVE_INFINITY;
            }
            
            // 获取引用值和调整值
            calculatedValue = *(longlong *)(systemHandle + UTILITIES_HANDLE_OFFSET);
            referenceValue = *(longlong *)(systemHandle + UTILITIES_REFERENCE_OFFSET);
            if (referenceValue == 0) {
                secondaryFloat = (float)*(uint *)(systemHandle + UTILITIES_VALUE_OFFSET) * secondaryFloat;
                referenceValue = 0;
                if ((UTILITIES_FLOAT_THRESHOLD <= secondaryFloat) && 
                    (secondaryFloat = secondaryFloat - UTILITIES_FLOAT_THRESHOLD, secondaryFloat < UTILITIES_FLOAT_THRESHOLD)) {
                    referenceValue = UTILITIES_NEGATIVE_INFINITY;
                }
                referenceValue = calculatedValue - ((longlong)secondaryFloat + referenceValue);
                *(longlong *)(systemHandle + UTILITIES_REFERENCE_OFFSET) = referenceValue;
            }
            
            // 获取状态标志
            statusFlag = *(byte *)(systemHandle + UTILITIES_STATE_OFFSET);
            
            // 执行回调函数（如果存在）
            if (*(longlong *)(systemHandle + UTILITIES_CALLBACK_OFFSET) != 0) {
                callbackResult = FUN_180895ef0(systemHandle);
                currentIndex = (**(code **)(systemHandle + UTILITIES_CALLBACK_OFFSET))
                                (callbackResult, currentIndex, *(undefined4 *)(dataPointer + 0x18), 
                                 *(undefined8 *)(systemHandle + UTILITIES_EXTRA_OFFSET));
                if (currentIndex != 0) goto cleanup_stack;
            }
            
            // 检查处理条件
            if (((((statusFlag & UTILITIES_FLAG_PROCESSED) != 0 || 
                  (longlong)primaryFloat + adjustedValue < calculatedValue - referenceValue) &&
                 (currentIndex = *resultCounter, *resultCounter = currentIndex + 1, currentIndex < UTILITIES_MAX_ITERATIONS)) &&
                ((*(uint *)(systemHandle + UTILITIES_STATE_OFFSET) >> 0x18 & 1) == 0)) &&
               (((*(uint *)(systemHandle + UTILITIES_STATE_OFFSET) >> 0x19 & 1) != 0 && 
                 (limitIndex == *(int *)(systemHandle + UTILITIES_PARAM_OFFSET))))) {
                
                // 执行内存复制操作
                memcpy(dataBuffer_648, dataPointer, (longlong)*(int *)(dataPointer + 8));
            }
        }
        else {
            // 处理其他操作类型
            if (operationType == '\x06') {
                // 处理类型6操作
                operationType = func_0x000180881f80(*(undefined8 *)(systemHandle + 0x58));
                if (operationType == '\0') {
                    memcpy(dataBuffer_648, dataPointer, (longlong)*(int *)(dataPointer + 8));
                }
                *dataPtr = 0;
                goto cleanup_stack;
            }
            
            if (operationType == '\a') {
                // 处理类型7操作
                operationType = func_0x000180881f80(*(undefined8 *)(systemHandle + 0x58));
                if (operationType == '\0') {
                    if (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(systemHandle + 0x58) + 0x90) + 0x790) + 0x1c8) != 0) {
                        *dataPtr = 0;
                        goto cleanup_stack;
                    }
                    memcpy(dataBuffer_648, dataPointer, (longlong)*(int *)(dataPointer + 8));
                }
            }
            else {
                // 处理类型2操作
                if ((operationType != '\x02') || ((*(byte *)(systemHandle + UTILITIES_STATE_OFFSET) & UTILITIES_FLAG_VALID) != 0)) {
                    memcpy(dataBuffer_648, dataPointer, (longlong)*(int *)(dataPointer + 8));
                }
                stackValue_6f4 = *(undefined4 *)(dataPointer + 0x20);
                currentIndex = FUN_180895c60(systemHandle, currentIndex, &stackValue_6f4);
                if (currentIndex != 0) goto cleanup_stack;
                currentIndex = func_0x00018088c530(stackValue_6f4, arrayData_6b0);
                if ((currentIndex != 0) || (*(int *)(arrayData_6b0[0] + UTILITIES_INDEX_OFFSET) != 2)) {
                    memcpy(dataBuffer_648, dataPointer, (longlong)*(int *)(dataPointer + 8));
                }
            }
        }
        *dataPtr = 0;
    }
    else {
        // 处理索引超出范围的情况
        *(uint *)(systemHandle + UTILITIES_STATE_OFFSET) = *(uint *)(systemHandle + UTILITIES_STATE_OFFSET) & UTILITIES_MASK_DEFAULT;
        *(uint *)(systemHandle + UTILITIES_STATE_OFFSET) = *(uint *)(systemHandle + UTILITIES_STATE_OFFSET) | UTILITIES_MASK_PROCESSED;
        *dataPtr = 0;
    }
    
cleanup_stack:
    // 清理栈并返回
    FUN_1808fc050(stackGuard ^ (ulonglong)stackBuffer_738);
}





// 函数: void FUN_1808953bf(longlong param_1,undefined8 param_2,int *param_3)
void FUN_1808953bf(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong in_RAX;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char in_R11B;
  undefined1 *unaff_R13;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined8 in_stack_00000040;
  int *in_stack_00000048;
  
  lVar5 = CONCAT44(unaff_0000001c,unaff_EBX) + CONCAT44(unaff_0000001c,unaff_EBX) * 2;
  lVar8 = (longlong)*(int *)(in_RAX + lVar5 * 4) + *(longlong *)(param_1 + 8);
  cVar2 = *(char *)(in_RAX + 8 + lVar5 * 4);
  *(longlong *)(unaff_RBP + -0x80) = lVar5;
  if (cVar2 == in_R11B) {
    iVar4 = *(int *)(param_1 + 0xb0);
    if (unaff_EBX < iVar4) {
      *(int *)(param_1 + 0xac) = unaff_EBX + 1;
      goto LAB_180895b69;
    }
    fVar9 = *(float *)(lVar8 + 0x18);
    fVar10 = fVar9;
    if (iVar4 != -1) {
      fVar10 = *(float *)(param_1 + 0xb4);
      iVar4 = -1;
      *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xb4) = 0xbf800000;
    }
    *(float *)(param_1 + 0xa8) = fVar9;
    lVar5 = 0;
    fVar9 = (float)*(uint *)(param_1 + 0x68) * fVar9;
    if ((9.223372e+18 <= fVar9) && (fVar9 = fVar9 - 9.223372e+18, fVar9 < 9.223372e+18)) {
      lVar5 = -0x8000000000000000;
    }
    lVar1 = *(longlong *)(param_1 + 0xa0);
    lVar7 = *(longlong *)(param_1 + 0x98);
    if (lVar7 == 0) {
      fVar10 = (float)*(uint *)(param_1 + 0x68) * fVar10;
      lVar7 = 0;
      if ((9.223372e+18 <= fVar10) && (fVar10 = fVar10 - 9.223372e+18, fVar10 < 9.223372e+18)) {
        lVar7 = -0x8000000000000000;
      }
      lVar7 = lVar1 - ((longlong)fVar10 + lVar7);
      *(longlong *)(unaff_RDI + 0x98) = lVar7;
    }
    cVar2 = (longlong)fVar9 + lVar5 < lVar1 - lVar7;
    if ((*(byte *)(unaff_RDI + 0x6c) & 2) != 0) {
      cVar2 = in_R11B;
    }
    if (*(longlong *)(unaff_RDI + 0xc0) != 0) {
      uVar6 = FUN_180895ef0();
      iVar3 = (**(code **)(unaff_RDI + 0xc0))
                        (uVar6,unaff_EBX,*(undefined4 *)(lVar8 + 0x18),
                         *(undefined8 *)(unaff_RDI + 0xb8));
      param_3 = in_stack_00000048;
      if (iVar3 != 0) goto LAB_180895b69;
    }
    if ((((cVar2 != '\0') && (iVar3 = *param_3, *param_3 = iVar3 + 1, iVar3 < 10)) &&
        ((*(uint *)(unaff_RDI + 0x6c) >> 0x18 & 1) == 0)) &&
       (((*(uint *)(unaff_RDI + 0x6c) >> 0x19 & 1) != 0 && (iVar4 == *(int *)(unaff_RDI + 0xb0)))))
    {
LAB_18089555d:
                    // WARNING: Subroutine does not return
      memcpy(unaff_RBP + -0x10,lVar8,(longlong)*(int *)(lVar8 + 8));
    }
  }
  else {
    if (cVar2 == '\x06') {
      cVar2 = func_0x000180881f80(*(undefined8 *)(param_1 + 0x58));
      if (cVar2 == '\0') goto LAB_18089555d;
      *unaff_R13 = 0;
      goto LAB_180895b69;
    }
    if (cVar2 == '\a') {
      cVar2 = func_0x000180881f80(*(undefined8 *)(param_1 + 0x58));
      if (cVar2 == '\0') {
        if (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x90) + 0x790) +
                    0x1c8) != 0) {
          *unaff_R13 = 0;
          goto LAB_180895b69;
        }
        goto LAB_18089555d;
      }
    }
    else {
      if ((cVar2 != '\x02') || ((*(byte *)(param_1 + 0x6c) & 4) != 0)) goto LAB_18089555d;
      in_stack_00000040._4_4_ = *(undefined4 *)(lVar8 + 0x20);
      iVar4 = FUN_180895c60(param_1,unaff_EBX,(longlong)&stack0x00000040 + 4);
      if (iVar4 != 0) goto LAB_180895b69;
      iVar4 = func_0x00018088c530(in_stack_00000040._4_4_,unaff_RBP + -0x78);
      if ((iVar4 != 0) || (*(int *)(*(longlong *)(unaff_RBP + -0x78) + 0x30) != 2))
      goto LAB_18089555d;
    }
  }
  *unaff_R13 = 0;
LAB_180895b69:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x5f0) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180895b89(void)
void FUN_180895b89(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x5f0) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180895bb0(longlong param_1,int param_2,undefined8 *param_3)
void FUN_180895bb0(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_3 = 0;
  param_3[1] = 0;
  piVar2 = (int *)(**(code **)(*(longlong *)
                                ((longlong)
                                 *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 0xc) +
                                *(longlong *)(param_1 + 8)) + 0x50))();
  if (piVar2 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar2;
  }
  if (param_2 + 1 < *(int *)(param_1 + 0x20)) {
    lVar4 = (longlong)(param_2 + 1);
    piVar2 = (int *)(*(longlong *)(param_1 + 0x18) + lVar4 * 0xc);
    while (((char)piVar2[2] != '\x02' ||
           (lVar3 = (longlong)*piVar2 + *(longlong *)(param_1 + 8), *(int *)(lVar3 + 0x20) != iVar5)
           )) {
      lVar4 = lVar4 + 1;
      piVar2 = piVar2 + 3;
      if (*(int *)(param_1 + 0x20) <= lVar4) {
        return;
      }
    }
    uVar1 = *(undefined8 *)(lVar3 + 0x18);
    *param_3 = *(undefined8 *)(lVar3 + 0x10);
    param_3[1] = uVar1;
  }
  return;
}



undefined8 FUN_180895c60(longlong param_1,int param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uStackX_1c;
  
  if (param_3 != (uint *)0x0) {
    uVar1 = *param_3;
    if (uVar1 != 0) {
      if (((*(int *)(param_1 + 0x94) != 0) && (*(int *)(param_1 + 0x78) != 0)) &&
         (iVar5 = *(int *)(*(longlong *)(param_1 + 0x70) +
                          (longlong)(int)(*(int *)(param_1 + 0x78) - 1U & uVar1) * 4), iVar5 != -1))
      {
        lVar2 = *(longlong *)(param_1 + 0x80);
        do {
          lVar3 = (longlong)iVar5;
          if (*(uint *)(lVar2 + lVar3 * 0x10) == uVar1) {
            uStackX_1c = (uint)((ulonglong)*(undefined8 *)(lVar2 + 8 + lVar3 * 0x10) >> 0x20);
            if (uStackX_1c != 0) {
              *param_3 = uStackX_1c;
              return 0;
            }
            goto LAB_180895ccb;
          }
          iVar5 = *(int *)(lVar2 + 4 + lVar3 * 0x10);
        } while (iVar5 != -1);
      }
      uStackX_1c = 0;
LAB_180895ccb:
      puVar4 = (undefined8 *)
               ((longlong)*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 0xc) +
               *(longlong *)(param_1 + 8));
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)();
      }
      *param_3 = uStackX_1c;
      return 0;
    }
  }
  return 0x1e;
}



undefined8 FUN_180895c8b(longlong param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  int *unaff_RDI;
  longlong in_R10;
  bool in_ZF;
  int iStack0000000000000044;
  
  if (((!in_ZF) && (*(int *)(param_1 + 0x78) != 0)) &&
     (iVar4 = *(int *)(*(longlong *)(in_R10 + 0x70) +
                      (longlong)(int)(*(int *)(param_1 + 0x78) - 1U & param_4) * 4), iVar4 != -1)) {
    lVar1 = *(longlong *)(in_R10 + 0x80);
    do {
      lVar2 = (longlong)iVar4;
      if (*(uint *)(lVar1 + lVar2 * 0x10) == param_4) {
        iStack0000000000000044 = (int)((ulonglong)*(undefined8 *)(lVar1 + 8 + lVar2 * 0x10) >> 0x20)
        ;
        if (iStack0000000000000044 != 0) {
          *unaff_RDI = iStack0000000000000044;
          return 0;
        }
        goto LAB_180895ccb;
      }
      iVar4 = *(int *)(lVar1 + 4 + lVar2 * 0x10);
    } while (iVar4 != -1);
  }
  iStack0000000000000044 = 0;
LAB_180895ccb:
  puVar3 = (undefined8 *)
           ((longlong)*(int *)(*(longlong *)(in_R10 + 0x18) + param_3 * 0xc) +
           *(longlong *)(in_R10 + 8));
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)();
  }
  *unaff_RDI = iStack0000000000000044;
  return 0;
}



undefined8 FUN_180895cf1(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong in_RAX;
  undefined8 *puVar2;
  int *unaff_RDI;
  longlong in_R10;
  undefined8 uStack0000000000000040;
  
  uVar1 = *(undefined8 *)(param_1 + 8 + in_RAX * 8);
  uStack0000000000000040._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  if (uStack0000000000000040._4_4_ != 0) {
    *unaff_RDI = uStack0000000000000040._4_4_;
    return 0;
  }
  puVar2 = (undefined8 *)
           ((longlong)*(int *)(*(longlong *)(in_R10 + 0x18) + param_3 * 0xc) +
           *(longlong *)(in_R10 + 8));
  if (puVar2 != (undefined8 *)0x0) {
    uStack0000000000000040 = uVar1;
    (**(code **)*puVar2)();
  }
  *unaff_RDI = 0;
  return 0;
}



undefined8 FUN_180895d16(void)

{
  return 0x1e;
}



undefined8 FUN_180895d30(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  
  uVar4 = FUN_180895210();
  if ((int)uVar4 == 0) {
    if ((int)param_1[1] == 0) {
      return 0x1c;
    }
    uVar1 = *param_2;
    lVar8 = (longlong)(int)((int)param_1[1] - 1U & uVar1);
    piVar13 = (int *)(*param_1 + lVar8 * 4);
    iVar2 = *(int *)(*param_1 + lVar8 * 4);
    if (iVar2 != -1) {
      lVar8 = param_1[2];
      do {
        lVar9 = (longlong)iVar2;
        if (*(uint *)(lVar8 + lVar9 * 0x10) == uVar1) {
          *(undefined8 *)(lVar8 + 8 + lVar9 * 0x10) = *param_3;
          return 0;
        }
        iVar2 = *(int *)(lVar8 + 4 + lVar9 * 0x10);
        piVar13 = (int *)(lVar8 + 4 + lVar9 * 0x10);
      } while (iVar2 != -1);
    }
    iVar2 = (int)param_1[4];
    if (iVar2 == -1) {
      uVar4 = *param_3;
      iVar2 = (int)param_1[3];
      iVar7 = iVar2 + 1;
      uVar11 = (int)*(uint *)((longlong)param_1 + 0x1c) >> 0x1f;
      iVar3 = (*(uint *)((longlong)param_1 + 0x1c) ^ uVar11) - uVar11;
      if (iVar3 < iVar7) {
        iVar12 = (int)((float)iVar3 * 1.5);
        iVar3 = iVar7;
        if (iVar7 <= iVar12) {
          iVar3 = iVar12;
        }
        if (iVar3 < 4) {
          iVar12 = 4;
        }
        else if (iVar12 < iVar7) {
          iVar12 = iVar7;
        }
        uVar5 = FUN_1807d3f50(param_1 + 2,iVar12);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      puVar6 = (undefined8 *)((longlong)(int)param_1[3] * 0x10 + param_1[2]);
      *puVar6 = CONCAT44(0xffffffff,uVar1);
      puVar6[1] = uVar4;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    }
    else {
      puVar10 = (uint *)((longlong)iVar2 * 0x10 + param_1[2]);
      *(uint *)(param_1 + 4) = puVar10[1];
      puVar10[1] = 0xffffffff;
      *puVar10 = *param_2;
      *(undefined8 *)(puVar10 + 2) = *param_3;
    }
    *piVar13 = iVar2;
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
    uVar4 = 0;
  }
  return uVar4;
}



undefined8 FUN_180895d62(undefined8 param_1,int param_2)

{
  longlong lVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  longlong *unaff_RDI;
  undefined8 *unaff_R14;
  undefined4 *unaff_R15;
  undefined8 uStack0000000000000028;
  
  piVar11 = (int *)(*unaff_RDI + (longlong)in_EAX * 4);
  iVar2 = *(int *)(*unaff_RDI + (longlong)in_EAX * 4);
  if (iVar2 != -1) {
    lVar1 = unaff_RDI[2];
    do {
      lVar7 = (longlong)iVar2;
      if (*(int *)(lVar1 + lVar7 * 0x10) == param_2) {
        *(undefined8 *)(lVar1 + 8 + lVar7 * 0x10) = *unaff_R14;
        return 0;
      }
      iVar2 = *(int *)(lVar1 + 4 + lVar7 * 0x10);
      piVar11 = (int *)(lVar1 + 4 + lVar7 * 0x10);
    } while (iVar2 != -1);
  }
  iVar2 = (int)unaff_RDI[4];
  if (iVar2 == -1) {
    uStack0000000000000028 = *unaff_R14;
    iVar2 = (int)unaff_RDI[3];
    iVar6 = iVar2 + 1;
    uVar9 = (int)*(uint *)((longlong)unaff_RDI + 0x1c) >> 0x1f;
    iVar3 = (*(uint *)((longlong)unaff_RDI + 0x1c) ^ uVar9) - uVar9;
    if (iVar3 < iVar6) {
      iVar10 = (int)((float)iVar3 * 1.5);
      iVar3 = iVar6;
      if (iVar6 <= iVar10) {
        iVar3 = iVar10;
      }
      if (iVar3 < 4) {
        iVar10 = 4;
      }
      else if (iVar10 < iVar6) {
        iVar10 = iVar6;
      }
      uVar4 = FUN_1807d3f50(unaff_RDI + 2,iVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    puVar5 = (undefined8 *)((longlong)(int)unaff_RDI[3] * 0x10 + unaff_RDI[2]);
    *puVar5 = CONCAT44(0xffffffff,param_2);
    puVar5[1] = uStack0000000000000028;
    *(int *)(unaff_RDI + 3) = (int)unaff_RDI[3] + 1;
  }
  else {
    puVar8 = (undefined4 *)((longlong)iVar2 * 0x10 + unaff_RDI[2]);
    *(undefined4 *)(unaff_RDI + 4) = puVar8[1];
    puVar8[1] = 0xffffffff;
    *puVar8 = *unaff_R15;
    *(undefined8 *)(puVar8 + 2) = *unaff_R14;
  }
  *piVar11 = iVar2;
  *(int *)((longlong)unaff_RDI + 0x24) = *(int *)((longlong)unaff_RDI + 0x24) + 1;
  return 0;
}



undefined8 FUN_180895d9c(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int *unaff_RBX;
  int iVar8;
  longlong unaff_RDI;
  undefined8 *unaff_R14;
  undefined4 *unaff_R15;
  undefined8 uStack0000000000000028;
  
  iVar8 = *(int *)(unaff_RDI + 0x20);
  if (iVar8 == -1) {
    uStack0000000000000028 = *unaff_R14;
    iVar8 = *(int *)(unaff_RDI + 0x18);
    iVar4 = iVar8 + 1;
    uVar6 = (int)*(uint *)(unaff_RDI + 0x1c) >> 0x1f;
    iVar1 = (*(uint *)(unaff_RDI + 0x1c) ^ uVar6) - uVar6;
    if (iVar1 < iVar4) {
      iVar7 = (int)((float)iVar1 * 1.5);
      iVar1 = iVar4;
      if (iVar4 <= iVar7) {
        iVar1 = iVar7;
      }
      if (iVar1 < 4) {
        iVar7 = 4;
      }
      else if (iVar7 < iVar4) {
        iVar7 = iVar4;
      }
      uVar2 = FUN_1807d3f50(unaff_RDI + 0x10,iVar7);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    puVar3 = (undefined8 *)
             ((longlong)*(int *)(unaff_RDI + 0x18) * 0x10 + *(longlong *)(unaff_RDI + 0x10));
    *puVar3 = CONCAT44(0xffffffff,param_2);
    puVar3[1] = uStack0000000000000028;
    *(int *)(unaff_RDI + 0x18) = *(int *)(unaff_RDI + 0x18) + 1;
  }
  else {
    puVar5 = (undefined4 *)((longlong)iVar8 * 0x10 + *(longlong *)(unaff_RDI + 0x10));
    *(undefined4 *)(unaff_RDI + 0x20) = puVar5[1];
    puVar5[1] = 0xffffffff;
    *puVar5 = *unaff_R15;
    *(undefined8 *)(puVar5 + 2) = *unaff_R14;
  }
  *unaff_RBX = iVar8;
  *(int *)(unaff_RDI + 0x24) = *(int *)(unaff_RDI + 0x24) + 1;
  return 0;
}



undefined8 FUN_180895e00(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *unaff_R14;
  
  *(undefined8 *)(param_3 + 8 + param_1 * 8) = *unaff_R14;
  return 0;
}



undefined8
FUN_180895e19(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 *unaff_RBX;
  undefined4 unaff_EBP;
  longlong unaff_RDI;
  undefined8 uStackX_20;
  
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  uVar1 = FUN_1807d3f50(unaff_RDI + 0x10,param_2);
  if ((int)uVar1 == 0) {
    puVar2 = (undefined8 *)
             ((longlong)*(int *)(unaff_RDI + 0x18) * 0x10 + *(longlong *)(unaff_RDI + 0x10));
    *puVar2 = uStackX_20;
    puVar2[1] = param_5;
    *(int *)(unaff_RDI + 0x18) = *(int *)(unaff_RDI + 0x18) + 1;
    *unaff_RBX = unaff_EBP;
    *(int *)(unaff_RDI + 0x24) = *(int *)(unaff_RDI + 0x24) + 1;
    uVar1 = 0;
  }
  return uVar1;
}





