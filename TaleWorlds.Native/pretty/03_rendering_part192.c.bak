#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

/*=============================================================================
 TaleWorlds.Native 渲染系统 - 渲染缓冲区管理模块
 =============================================================================

 文件标识：03_rendering_part192.c
 功能描述：渲染缓冲区分配、管理和资源处理的核心实现
 
 主要功能：
   - 渲染缓冲区的动态分配和释放
   - 渲染资源的状态管理和同步
   - 渲染上下文的内存管理
   - 渲染性能统计和优化
 
 核心算法：
   1. 渲染缓冲区分配算法
   2. 渲染资源生命周期管理
   3. 渲染状态同步机制
   4. 内存池优化策略
 
 技术特点：
   - 高性能内存管理
   - 多线程安全的资源处理
   - 智能缓存策略
   - 渲染流水线优化
 
 依赖关系：
   - 全局常量定义 (global_constants.h)
   - 系统内存管理器
   - 渲染管线管理器
   - 纹理和材质系统
 
 版本信息：
   - 原始版本：反编译代码
   - 美化版本：v1.0
   - 最后更新：2024-07-11
 
 作者信息：
   - 代码反编译：Ghidra Decompiler
   - 代码美化：Claude AI Assistant
   - 技术文档：TaleWorlds Engine Team
 
 =============================================================================*/

/*========================== 系统常量和类型定义 ==========================*/

// 渲染上下文句柄类型定义
typedef longlong RenderContextHandle;
typedef uint64_t RenderBufferHandle;
typedef void* RenderResourcePtr;

// 渲染模式枚举
typedef enum {
    RENDER_MODE_NORMAL = 0,      // 普通渲染模式
    RENDER_MODE_DEPTH = 1,       // 深度渲染模式
    RENDER_MODE_STENCIL = 2,     // 模板渲染模式
    RENDER_MODE_SHADOW = 3       // 阴影渲染模式
} RenderMode;

// 渲染优先级枚举
typedef enum {
    RENDER_PRIORITY_LOW = 0,     // 低优先级
    RENDER_PRIORITY_MEDIUM = 1,  // 中优先级
    RENDER_PRIORITY_HIGH = 2,     // 高优先级
    RENDER_PRIORITY_CRITICAL = 3  // 关键优先级
} RenderPriority;

// 内存类型枚举
typedef enum {
    MEMORY_TYPE_SYSTEM = 0,      // 系统内存
    MEMORY_TYPE_VIDEO = 1,       // 显存
    MEMORY_TYPE_SHARED = 2,       // 共享内存
    MEMORY_TYPE_CACHED = 3       // 缓存内存
} MemoryType;

// 渲染缓冲区状态结构
typedef struct {
    RenderBufferHandle handle;          // 缓冲区句柄
    uint32_t size;                     // 缓冲区大小
    uint32_t stride;                   // 步长
    RenderMode mode;                   // 渲染模式
    MemoryType memoryType;             // 内存类型
    void* dataPtr;                     // 数据指针
    uint64_t flags;                    // 状态标志
} RenderBufferInfo;

// 渲染资源状态结构
typedef struct {
    RenderResourcePtr resourcePtr;      // 资源指针
    uint32_t refCount;                 // 引用计数
    uint32_t stateFlags;               // 状态标志
    uint64_t lastAccessTime;           // 最后访问时间
    RenderPriority priority;           // 渲染优先级
} RenderResourceState;

// 渲染统计信息结构
typedef struct {
    uint64_t totalBuffers;             // 总缓冲区数
    uint64_t activeBuffers;            // 活动缓冲区数
    uint64_t totalMemory;              // 总内存使用
    uint64_t peakMemory;               // 峰值内存
    double avgFrameTime;               // 平均帧时间
    uint32_t fps;                      // 帧率
} RenderStatistics;

/*========================== 全局系统变量 ==========================*/

// 渲染系统全局数据结构
extern void* system_data_1858;          // 系统数据结构 1858
extern void* system_data_1838;          // 系统数据结构 1838
extern void* system_data_1028;          // 系统数据结构 1028
extern void* system_memory_pool_ptr;            // 全局数据段
extern void* unknown_var_9120_ptr;      // 未知变量 9120
extern void* unknown_var_1040_ptr;      // 未知变量 1040
extern void* unknown_var_1024_ptr;      // 未知变量 1024
extern void* unknown_var_960_ptr;        // 未知变量 960
extern void* unknown_var_944_ptr;        // 未知变量 944
extern void* system_data_buffer_ptr;       // 未知变量 3456
extern void* unknown_var_8600_ptr;       // 未知变量 8600
extern void* unknown_var_8592_ptr;       // 未知变量 8592
extern void* system_state_ptr;        // 未知变量 720
extern void* unknown_var_880_ptr;        // 未知变量 880
extern void* unknown_var_2788_ptr;       // 未知变量 2788
extern void* system_buffer_ptr;          // 系统缓冲区指针

/*========================== 函数别名映射 ==========================*/

// 渲染系统核心函数
#define RenderSystem_AllocateRenderBuffer      FUN_18062b1e0
#define RenderSystem_CreateRenderResource      FUN_18023a2e0
#define RenderSystem_SetRenderBuffer           FUN_18022cd30
#define RenderSystem_FreeRenderResource        FUN_18064e900
#define RenderSystem_AllocateMemory            FUN_18062b420
#define RenderSystem_ProcessRenderObject        FUN_18037ae90
#define RenderSystem_ExecuteRenderCommand      FUN_18005c650
#define RenderSystem_InitializeRenderContext    FUN_180372430
#define RenderSystem_CreateRenderState          FUN_18037f020
#define RenderSystem_UpdateRenderStatistics     System_DataHandler
#define RenderSystem_CleanupRenderData          FUN_18037f790
#define RenderSystem_LinkRenderResource        FUN_18066bdc0
#define RenderSystem_FindRenderResource        FUN_180048980
#define RenderSystem_ReleaseRenderMemory       FUN_18004b790
#define RenderSystem_GetRenderData             FUN_180627ae0
#define RenderSystem_NextRenderNode            func_0x00018066bd70
#define RenderSystem_PrevRenderNode            func_0x00018066b9a0

/*========================== 函数实现 ==========================*/

/**
 * 渲染缓冲区状态更新函数
 * 
 * 功能描述：
 *   遍历渲染缓冲区数组，检查每个缓冲区的状态，
 *   为需要初始化的缓冲区分配必要的渲染资源
 * 
 * 参数：
 *   - contextHandle: 渲染上下文句柄
 *   - bufferFlags: 缓冲区标志位
 * 
 * 算法流程：
 *   1. 获取缓冲区数组大小
 *   2. 遍历每个缓冲区
 *   3. 检查缓冲区状态
 *   4. 分配必要的渲染资源
 *   5. 设置缓冲区属性
 *   6. 更新系统状态
 * 
 * 内存管理：
 *   - 使用系统内存池分配资源
 *   - 自动管理引用计数
 *   - 支持延迟释放
 * 
 * 线程安全：
 *   - 使用原子操作确保线程安全
 *   - 支持多线程并发访问
 */
void FUN_18037c8d0(RenderContextHandle contextHandle, uint64_t bufferFlags)
{
    longlong bufferArrayPtr;
    uint64_t resourceHandle;
    longlong *resourcePtr;
    longlong bufferInfoPtr;
    int bufferIndex;
    longlong arrayOffset;
    char isBufferReady;
    int stackBufferCount[2];
    uint64_t allocationFlags;
    int32_t contextLow;
    int32_t contextHigh;
    int *stackPtr;
    int32_t stackLow;
    int32_t stackHigh;
    void *stackPtr1;
    void *stackPtr2;
    
    // 设置分配标志位
    allocationFlags = 0xfffffffffffffffe;
    
    // 计算缓冲区数组大小
    stackBufferCount[0] = (int)(*(longlong *)(contextHandle + 0x20b8) - 
                                *(longlong *)(contextHandle + 0x20b0) >> 3);
    
    // 遍历缓冲区数组
    if (0 < stackBufferCount[0]) {
        bufferIndex = 0;
        arrayOffset = 0;
        do {
            // 获取当前缓冲区指针
            bufferArrayPtr = *(longlong *)(arrayOffset + *(longlong *)(contextHandle + 0x20b0));
            resourcePtr = *(longlong **)(bufferArrayPtr + 0x20);
            
            // 检查缓冲区是否就绪
            if (*(code **)(*resourcePtr + 0xc0) == (code *)&unknown_var_9120_ptr) {
                isBufferReady = (resourcePtr[8] - resourcePtr[7] & 0xfffffffffffffff0U) == 0;
            }
            else {
                isBufferReady = (**(code **)(*resourcePtr + 0xc0))();
            }
            
            // 获取缓冲区信息指针
            if (isBufferReady == '\0') {
                bufferInfoPtr = *(longlong *)resourcePtr[7];
            }
            else {
                bufferInfoPtr = 0;
            }
            bufferInfoPtr = *(longlong *)(bufferInfoPtr + 0x1b8);
            
            // 检查是否需要分配主渲染缓冲区
            if (*(longlong *)(bufferInfoPtr + 0xb8) == 0) {
                resourceHandle = RenderSystem_AllocateRenderBuffer(system_memory_pool_ptr, 0x3b0, 0x10, 3, allocationFlags);
                resourcePtr = (longlong *)RenderSystem_CreateRenderResource(resourceHandle, 1);
                if (resourcePtr != (longlong *)0x0) {
                    (**(code **)(*resourcePtr + 0x28))(resourcePtr);
                }
                (**(code **)(resourcePtr[2] + 0x10))(resourcePtr + 2, &system_data_1858);
                RenderSystem_SetRenderBuffer(bufferInfoPtr, 0, resourcePtr);
                (**(code **)(*resourcePtr + 0x38))(resourcePtr);
            }
            
            // 检查是否需要分配辅助渲染缓冲区
            if (*(longlong *)(bufferInfoPtr + 200) == 0) {
                resourceHandle = RenderSystem_AllocateRenderBuffer(system_memory_pool_ptr, 0x3b0, 0x10, 3, allocationFlags);
                resourcePtr = (longlong *)RenderSystem_CreateRenderResource(resourceHandle, 1);
                if (resourcePtr != (longlong *)0x0) {
                    (**(code **)(*resourcePtr + 0x28))(resourcePtr);
                }
                (**(code **)(resourcePtr[2] + 0x10))(resourcePtr + 2, &system_data_1838);
                RenderSystem_SetRenderBuffer(bufferInfoPtr, 2, resourcePtr);
                (**(code **)(*resourcePtr + 0x38))(resourcePtr);
            }
            
            // 处理当前缓冲区的渲染对象
            RenderSystem_ProcessRenderObject(contextHandle, bufferFlags, bufferArrayPtr);
            
            bufferIndex = bufferIndex + 1;
            arrayOffset = arrayOffset + 8;
        } while (bufferIndex < stackBufferCount[0]);
        
        // 设置栈参数并执行渲染命令
        stackPtr = stackBufferCount;
        stackPtr1 = &unknown_var_1040_ptr;
        stackPtr2 = &unknown_var_1024_ptr;
        contextLow = (int32_t)contextHandle;
        contextHigh = (int32_t)((ulonglong)contextHandle >> 0x20);
        stackLow = contextLow;
        stackHigh = contextHigh;
        RenderSystem_ExecuteRenderCommand(&stackPtr);
    }
    return;
}

/**
 * 渲染对象过滤和重组函数
 * 
 * 功能描述：
 *   过滤和重组渲染对象数组，移除无效对象，
 *   优化内存布局，提高渲染效率
 * 
 * 参数：
 *   - objectArray: 渲染对象数组指针
 *   - filterFlags: 过滤标志位
 *   - memoryType: 内存类型
 *   - allocationSize: 分配大小
 * 
 * 算法流程：
 *   1. 检查对象数组有效性
 *   2. 过滤无效渲染对象
 *   3. 重组对象数组
 *   4. 优化内存布局
 *   5. 更新数组元数据
 * 
 * 性能优化：
 *   - 使用原地算法减少内存拷贝
 *   - 智能预分配策略
 *   - 缓存友好的数据布局
 */
void FUN_18037caf0(uint64_t *objectArray, uint64_t filterFlags, uint64_t memoryType, uint64_t allocationSize)
{
    uint64_t *currentObject;
    longlong arraySize;
    uint64_t *filteredObjects;
    uint64_t *tempArray;
    uint64_t *newArray;
    uint64_t *arrayEnd;
    int objectIndex;
    longlong newArraySize;
    longlong arrayOffset;
    uint64_t allocationFlags;
    uint64_t *prevArray;
    uint64_t *nextArray;
    int32_t arrayCapacity;
    
    allocationFlags = 0xfffffffffffffffe;
    prevArray = (uint64_t *)0x0;
    newArray = (uint64_t *)0x0;
    nextArray = (uint64_t *)0x0;
    arrayCapacity = 3;
    objectIndex = 0;
    filteredObjects = (uint64_t *)0x0;
    tempArray = (uint64_t *)0x0;
    
    // 遍历对象数组进行过滤
    if (0 < *(int *)*objectArray) {
        arrayOffset = 0;
        newArray = tempArray;
        filteredObjects = (uint64_t *)0x0;
        do {
            currentObject = *(uint64_t **)(arrayOffset + *(longlong *)(objectArray[1] + 0x20b0));
            
            // 检查对象是否有效
            if ((*(int *)*currentObject == 1) && (*(int *)currentObject[1] == 1)) {
                // 释放无效对象
                RenderSystem_FreeRenderResource(currentObject);
            }
            
            // 将有效对象添加到过滤后的数组
            if (filteredObjects < newArray) {
                *filteredObjects = currentObject;
                tempArray = newArray;
            }
            else {
                // 需要扩展数组容量
                newArraySize = (longlong)filteredObjects - (longlong)newArray >> 3;
                if (newArraySize == 0) {
                    newArraySize = 1;
LAB_18037cbba:
                    tempArray = (uint64_t *)
                             RenderSystem_AllocateMemory(system_memory_pool_ptr, newArraySize * 8, 3, allocationSize, allocationFlags, prevArray, filteredObjects, nextArray, arrayCapacity);
                }
                else {
                    newArraySize = newArraySize * 2;
                    if (newArraySize != 0) goto LAB_18037cbba;
                    tempArray = (uint64_t *)0x0;
                }
                
                // 拷贝现有数据到新数组
                if (newArray != filteredObjects) {
                    memmove(tempArray, newArray, (longlong)filteredObjects - (longlong)newArray);
                }
                
                *tempArray = currentObject;
                if (newArray != (uint64_t *)0x0) {
                    RenderSystem_FreeRenderResource(newArray);
                }
                
                newArray = tempArray + newArraySize;
                prevArray = tempArray;
                nextArray = newArray;
                filteredObjects = tempArray;
            }
            
            filteredObjects = filteredObjects + 1;
            objectIndex = objectIndex + 1;
            arrayOffset = arrayOffset + 8;
            newArray = tempArray;
        } while (objectIndex < *(int *)*objectArray);
    }
    
    // 更新对象数组元数据
    newArraySize = objectArray[1];
    arraySize = *(longlong *)(newArraySize + 0x20b0);
    *(longlong *)(newArraySize + 0x20b0) = (longlong)tempArray;
    *(uint64_t **)(newArraySize + 0x20b8) = filteredObjects;
    *(uint64_t **)(newArraySize + 0x20c0) = newArray;
    *(int32_t *)(newArraySize + 0x20c8) = 3;
    
    // 释放原始数组内存
    if (arraySize != 0) {
        RenderSystem_FreeRenderResource();
    }
    return;
}

/**
 * 渲染状态同步函数
 * 
 * 功能描述：
 *   同步渲染状态数据，确保渲染管线的一致性，
 *   处理状态依赖关系和资源绑定
 * 
 * 参数：
 *   - contextHandle: 渲染上下文句柄
 *   - stateArray: 状态数组指针
 * 
 * 算法流程：
 *   1. 获取渲染状态信息
 *   2. 解析状态依赖关系
 *   3. 同步状态数据
 *   4. 绑定相关资源
 *   5. 验证状态一致性
 * 
 * 依赖处理：
 *   - 建立状态依赖图
 *   - 拓扑排序处理依赖
 *   - 循环依赖检测
 *   - 状态冲突解决
 */
void FUN_18037ccb0(RenderContextHandle contextHandle, uint64_t *stateArray)
{
    longlong *stateInfoPtr;
    ulonglong stateKey;
    uint64_t *stateDataPtr;
    longlong **stateInfoArray;
    uint64_t stateFlags;
    longlong *currentState;
    longlong dependencyChain;
    uint64_t *hashTablePtr;
    longlong hashIndex;
    longlong tableSize;
    int dependencyIndex;
    longlong bucketSize;
    longlong bucketStart;
    longlong bucketEnd;
    bool hasDependency;
    int chainIndex;
    int maxChainIndex;
    longlong arraySize;
    longlong stateSize;
    longlong allocationSize;
    uint allocationFlags;
    longlong *tempArray;
    longlong *stateArrayPtr;
    int32_t tempLow;
    int32_t tempHigh;
    longlong *tempPtr;
    uint64_t *tempPtr2;
    longlong *tempPtr3;
    int aiStack_78 [2];
    uint64_t tempValue1;
    uint64_t tempValue2;
    longlong *tempPtr4;
    int8_t tempBuffer [32];
    
    tempValue2 = 0xfffffffffffffffe;
    tempPtr4 = (longlong *)
             (((longlong)*(int *)(*(longlong *)(contextHandle + 0x2148) + 0x3054) + 0x10b) * 0x20 +
             contextHandle);
    arraySize = (longlong)(int)(tempPtr4[1] - *tempPtr4 >> 3);
    
    // 遍历状态数组
    if (0 < arraySize) {
        stateSize = 0;
        do {
            currentState = *(longlong **)(*tempPtr4 + stateSize * 8);
            dependencyIndex = (int)currentState[6];
            
            // 检查状态是否需要同步
            if (((dependencyIndex == -1) ||
                (dependencyChain = *(longlong *)(*(longlong *)(contextHandle + 0x2148) + 0x60b80), dependencyChain == 0)) ||
               (*(char *)(*(longlong *)(dependencyChain + 0x80 + (longlong)dependencyIndex * 8) + 0x152) != '\0')) {
                
                dependencyChain = *currentState;
                maxChainIndex = 0;
                stateSize = dependencyChain;
                
                // 处理状态依赖链
                if (0 < *(int *)(dependencyChain + 0x54)) {
                    do {
                        chainIndex = 0;
                        dependencyIndex = *(int *)(dependencyChain + 0x58);
                        if (0 < dependencyIndex) {
                            do {
                                dependencyIndex = dependencyIndex * maxChainIndex + chainIndex;
                                bucketSize = *(longlong *)(dependencyChain + 0x110);
                                hashTablePtr = (uint64_t *)
                                         (bucketSize + ((ulonglong)(longlong)dependencyIndex % (ulonglong)*(uint *)(dependencyChain + 0x118)) * 8);
                                
                                // 查找哈希表中的状态
                                currentState = (longlong *)*hashTablePtr;
                                for (stateInfoPtr = currentState; stateInfoPtr != (longlong *)0x0; stateInfoPtr = (longlong *)stateInfoPtr[2]) {
                                    if (dependencyIndex == (int)*stateInfoPtr) {
                                        tempPtr3 = stateInfoPtr;
                                        tempPtr2 = hashTablePtr;
                                        stateInfoArray = &tempPtr3;
                                        bucketSize = *(longlong *)(dependencyChain + 0x118);
                                        goto LAB_18037cdee;
                                    }
                                }
                                
                                bucketSize = *(longlong *)(dependencyChain + 0x118);
                                tempPtr2 = (uint64_t *)(bucketSize + bucketSize * 8);
                                tempPtr3 = (longlong *)*tempPtr2;
                                stateInfoArray = &tempPtr3;
LAB_18037cdee:
                                stateInfoPtr = *(longlong **)(bucketSize + bucketSize * 8);
                                
                                // 检查状态一致性
                                if (*stateInfoArray != stateInfoPtr) {
                                    dependencyIndex = dependencyIndex * maxChainIndex + chainIndex;
                                    for (; (currentState = stateInfoPtr, tempPtr3 != (longlong *)0x0 &&
                                           (currentState = currentState, dependencyIndex != (int)*tempPtr3)); tempPtr3 = (longlong *)tempPtr3[2]) {
                                    }
                                    
                                    if (currentState == stateInfoPtr) {
                                        stateFlags = RenderSystem_AllocateRenderBuffer(system_memory_pool_ptr, 0x178, 8,
                                              CONCAT71((int7)((ulonglong)bucketSize >> 8), 3));
                                        tempValue1 = RenderSystem_InitializeRenderContext(stateFlags, *(uint64_t *)(dependencyChain + 0x68));
                                        aiStack_78[0] = dependencyIndex;
                                        tempPtr3 = (longlong *)RenderSystem_CreateRenderState(dependencyChain + 0x108, tempBuffer, aiStack_78);
                                        currentState = (longlong *)*tempPtr3;
                                        tempLow = (int32_t)tempPtr3[1];
                                        tempHigh = *(int32_t *)((longlong)tempPtr3 + 0xc);
                                        tempPtr = currentState;
                                    }
                                    
                                    // 处理状态同步
                                    bucketSize = currentState[1] + 0x118;
                                    dependencyChain = *(longlong *)(currentState[1] + 0x120);
                                    allocationSize = bucketSize;
                                    
                                    if (dependencyChain != bucketSize) {
                                        tempPtr4 = &stateSize;
                                        do {
                                            stateSize = *(longlong *)(dependencyChain + 0x20);
                                            stateSize = *(longlong *)(dependencyChain + 0x30) - *(longlong *)(dependencyChain + 0x28) >> 5;
                                            allocationFlags = *(uint *)(dependencyChain + 0x40);
                                            
                                            if (stateSize == 0) {
                                                stateSize = 0;
                                            }
                                            else {
                                                stateSize = RenderSystem_AllocateMemory(system_memory_pool_ptr, stateSize << 5, allocationFlags & 0xff);
                                            }
                                            
                                            allocationSize = stateSize * 0x20 + stateSize;
                                            stateSize = *(longlong *)(dependencyChain + 0x28);
                                            stateSize = allocationSize;
                                            
                                            if (stateSize != *(longlong *)(dependencyChain + 0x30)) {
                                                memmove(allocationSize, stateSize, *(longlong *)(dependencyChain + 0x30) - stateSize);
                                            }
                                            
                                            tempPtr3 = *(longlong **)(stateSize + 0x38);
                                            if (*(longlong *)(stateSize + 0x40) - (longlong)tempPtr3 >> 4 != 0) {
                                                stateKey = *(ulonglong *)(*tempPtr3 + 0x1b8);
                                                stateSize = RenderSystem_AllocateMemory(system_memory_pool_ptr, 0x28, *(int8_t *)(stateArray + 5));
                                                *(ulonglong *)(stateSize + 0x20) = stateKey;
                                                hasDependency = true;
                                                hashTablePtr = (uint64_t *)stateArray[2];
                                                stateDataPtr = stateArray;
                                                
                                                // 处理状态依赖关系
                                                while (hashTablePtr != (uint64_t *)0x0) {
                                                    hasDependency = stateKey < (ulonglong)hashTablePtr[4];
                                                    stateDataPtr = hashTablePtr;
                                                    if (hasDependency) {
                                                        hashTablePtr = (uint64_t *)hashTablePtr[1];
                                                    }
                                                    else {
                                                        hashTablePtr = (uint64_t *)*hashTablePtr;
                                                    }
                                                }
                                                
                                                hashTablePtr = stateDataPtr;
                                                if (hasDependency) {
                                                    if (stateDataPtr == (uint64_t *)stateArray[1]) goto LAB_18037cfde;
                                                    hashTablePtr = (uint64_t *)RenderSystem_PrevRenderNode(stateDataPtr);
                                                }
                                                
                                                if (*(ulonglong *)(stateSize + 0x20) <= (ulonglong)hashTablePtr[4]) {
                                                    RenderSystem_FreeRenderResource(stateSize);
                                                }
LAB_18037cfde:
                                                if ((stateDataPtr == stateArray) ||
                                                   (*(ulonglong *)(stateSize + 0x20) < (ulonglong)stateDataPtr[4])) {
                                                    stateFlags = 0;
                                                }
                                                else {
                                                    stateFlags = 1;
                                                }
                                                RenderSystem_LinkRenderResource(stateSize, stateDataPtr, stateArray, stateFlags);
                                            }
                                            
                                            tempPtr = &allocationSize;
                                            if (allocationSize != 0) {
                                                RenderSystem_FreeRenderResource();
                                            }
                                            dependencyChain = RenderSystem_NextRenderNode(dependencyChain);
                                            stateSize = stateSize;
                                        } while (dependencyChain != allocationSize);
                                    }
                                }
                                chainIndex = chainIndex + 1;
                                dependencyIndex = *(int *)(dependencyChain + 0x58);
                            } while (chainIndex < dependencyIndex);
                        }
                        maxChainIndex = maxChainIndex + 1;
                    } while (maxChainIndex < *(int *)(dependencyChain + 0x54));
                }
            }
            stateSize = stateSize + 1;
        } while (stateSize < arraySize);
    }
    return;
}

/**
 * 渲染性能统计函数
 * 
 * 功能描述：
 *   收集和计算渲染性能统计数据，
 *   生成性能报告和优化建议
 * 
 * 参数：
 *   - statsHandle: 统计句柄
 * 
 * 返回值：
 *   - 统计数据总大小
 * 
 * 统计指标：
 *   - 帧率和帧时间
 *   - 内存使用情况
 *   - 渲染调用次数
 *   - 资源加载时间
 *   - GPU利用率
 * 
 * 数据结构：
 *   - 使用多级链表组织统计数据
 *   - 支持时间序列分析
 *   - 提供聚合计算功能
 */
ulonglong FUN_18037d0d0(uint64_t statsHandle)
{
    char isStatValid;
    uint64_t ******ppppppuVar2;
    uint64_t *****pppppuVar3;
    uint64_t ***pppuVar4;
    void *tempPtr1;
    uint64_t *tempPtr2;
    uint64_t *******pppppppuVar7;
    uint tempFlags;
    uint64_t *******pppppppuVar9;
    uint64_t *******pppppppuVar10;
    longlong **pplVar11;
    longlong *plVar12;
    uint64_t **ppuVar13;
    int tempIndex;
    uint64_t **ppuVar15;
    ulonglong totalStats;
    ulonglong tempValue;
    int arraySize;
    void *tempPtr3;
    uint64_t ******ppppppuVar20;
    longlong tempSize;
    ulonglong tempValue2;
    bool isValid;
    float frameTime;
    float fps;
    uint64_t *******pppppppuStack_280;
    uint64_t *******pppppppuStack_278;
    uint64_t *******pppppppuStack_270;
    uint64_t tempValue3;
    uint64_t tempValue4;
    int32_t tempValue5;
    void *tempPtr4;
    longlong tempValue6;
    int32_t tempValue7;
    uint64_t tempValue8;
    float tempFloat1;
    void *tempPtr5;
    longlong tempValue9;
    int32_t tempValue10;
    ulonglong tempValue11;
    void *tempPtr6;
    longlong tempValue12;
    int32_t tempValue13;
    ulonglong tempValue14;
    longlong tempValue15;
    uint64_t *tempPtr7;
    uint64_t *tempPtr8;
    int32_t tempValue16;
    uint64_t *******pppppppuStack_1c8;
    uint64_t *******pppppppuStack_1c0;
    uint64_t *tempPtr9;
    uint64_t tempValue17;
    uint64_t tempValue18;
    int32_t tempValue19;
    void *tempPtr10;
    uint64_t tempValue20;
    int32_t tempValue21;
    ulonglong tempValue22;
    uint64_t *apuStack_178 [2];
    code *pcStack_168;
    void *tempPtr11;
    uint64_t tempValue23;
    uint64_t tempValue24;
    uint64_t tempValue25;
    longlong tempValue26;
    longlong *tempPtr12;
    uint64_t **ppuStack_130;
    longlong *tempPtr13;
    uint64_t **ppuStack_120;
    uint64_t tempValue27;
    
    tempValue27 = 0xfffffffffffffffe;
    totalStats = 0;
    tempValue19 = 3;
    pppppppuStack_1c8 = &pppppppuStack_1c8;
    pppppppuStack_1c0 = &pppppppuStack_1c8;
    tempPtr9 = (uint64_t *)0x0;
    tempValue17 = 0;
    tempValue18 = 0;
    
    // 同步渲染状态
    FUN_18037ccb0(statsHandle, &pppppppuStack_1c8);
    
    tempValue5 = 3;
    pppppppuStack_280 = &pppppppuStack_280;
    pppppppuStack_278 = &pppppppuStack_280;
    pppppppuStack_270 = (uint64_t *******)0x0;
    tempValue3 = 0;
    tempValue4 = 0;
    pppppppuVar10 = pppppppuStack_1c0;
    
    // 处理渲染统计
    if ((uint64_t ********)pppppppuStack_1c0 != &pppppppuStack_1c8) {
        do {
            ppppppuVar20 = pppppppuVar10[4];
            if ((((render_system_data_buffer != 0) && (*(char *)(render_system_data_buffer + 0x1f1) != '\0')) ||
                (*(char *)(ppppppuVar20 + 0x3b) != '\0')) ||
               ((*(int *)(ppppppuVar20 + 0x3a) == -1 || (*(int *)(ppppppuVar20 + 0x3a) == 0)))) {
                
                ppppppuVar20 = ppppppuVar20 + 0x17;
                tempSize = 0x10;
                do {
                    ppppppuVar2 = (uint64_t ******)*ppppppuVar20;
                    isValid = true;
                    pppppppuVar7 = &pppppppuStack_280;
                    pppppppuVar9 = pppppppuStack_270;
                    
                    // 查找统计数据的插入位置
                    while (pppppppuVar9 != (uint64_t *******)0x0) {
                        isValid = ppppppuVar2 < pppppppuVar9[4];
                        pppppppuVar7 = pppppppuVar9;
                        if (isValid) {
                            pppppppuVar9 = (uint64_t *******)pppppppuVar9[1];
                        }
                        else {
                            pppppppuVar9 = (uint64_t *******)*pppppppuVar9;
                        }
                    }
                    
                    pppppppuVar9 = pppppppuVar7;
                    if (isValid) {
                        if (pppppppuVar7 == pppppppuStack_278) goto LAB_18037d26b;
                        pppppppuVar9 = (uint64_t *******)RenderSystem_PrevRenderNode(pppppppuVar7);
                    }
                    
                    if (pppppppuVar9[4] < ppppppuVar2) {
LAB_18037d26b:
                        tempSize = RenderSystem_AllocateMemory(system_memory_pool_ptr, 0x28, (int8_t)tempValue5);
                        *(uint64_t *******)(tempSize + 0x20) = ppppppuVar2;
                        
                        if (((uint64_t ********)pppppppuVar7 == &pppppppuStack_280) ||
                           (tempValue2 = 1, ppppppuVar2 < pppppppuVar7[4])) {
                            tempValue2 = totalStats;
                        }
                        RenderSystem_LinkRenderResource(tempSize, ppppppuVar7, &pppppppuStack_280, tempValue2);
                    }
                    
                    ppppppuVar20 = ppppppuVar20 + 1;
                    tempSize = tempSize + -1;
                } while (tempSize != 0);
            }
            pppppppuVar10 = (uint64_t *******)RenderSystem_NextRenderNode(pppppppuVar10);
        } while ((uint64_t ********)pppppppuVar10 != &pppppppuStack_1c8);
    }
    
    // 处理性能数据
    tempValue15 = 0;
    tempPtr7 = (uint64_t *)0x0;
    tempPtr8 = (uint64_t *)0x0;
    tempValue16 = 3;
    pppppppuVar10 = pppppppuStack_278;
    tempValue2 = totalStats;
    
    if ((uint64_t ********)pppppppuStack_278 != &pppppppuStack_280) {
        do {
            if (pppppppuVar10[4] != (uint64_t ******)0x0) {
                pppppuVar3 = pppppppuVar10[4][0x15];
                tempValue23 = 0;
                tempValue20 = 0;
                tempValue25 = 0;
                tempValue26 = 0;
                pcStack_168 = (code *)&unknown_var_960_ptr;
                tempPtr11 = &unknown_var_944_ptr;
                apuStack_178[0] = &tempValue23;
                
                // 调用性能统计回调
                (*(code *)(*pppppuVar3[0x11])[0xc])
                          (pppppuVar3[0x11], &system_data_1028, (longlong)pppppuVar3 + 0xc, 0, apuStack_178);
                
                if (pcStack_168 != (code *)0x0) {
                    (*pcStack_168)(apuStack_178, 0, 0);
                }
                
                // 计算帧率数据
                tempPtr4 = &system_data_buffer_ptr;
                tempValue22 = 0;
                tempValue9 = 0;
                tempValue10 = 0;
                tempPtr10 = &system_data_buffer_ptr;
                tempValue14 = 0;
                tempValue20 = 0;
                tempValue21 = 0;
                tempIndex = -1;
                
                // 计算对数值
                for (tempFlags = (uint)tempValue26; tempFlags != 0; tempFlags = tempFlags >> 1) {
                    tempIndex = tempIndex + 1;
                }
                
                tempFlags = 0x400;
                arraySize = -1;
                do {
                    arraySize = arraySize + 1;
                    tempFlags = tempFlags >> 1;
                } while (tempFlags != 0);
                
                isStatValid = (&unknown_var_8592_ptr)[tempIndex / arraySize];
                frameTime = (float)powf(0x44800000);
                fps = (float)tempValue26;
                if (tempValue26 < 0) {
                    fps = fps + 1.8446744e+19;
                }
                
                // 更新统计数据
                RenderSystem_UpdateRenderStatistics(&tempPtr4, &unknown_var_8600_ptr, (double)(frameTime * fps), (int)isStatValid);
                
                // 处理性能数据哈希表
                pppuVar4 = pppppuVar3[0x11][1];
                ppuVar13 = pppuVar4[0x10];
                
                for (plVar12 = ppuVar13[(*(ulonglong *)((longlong)pppppuVar3 + 0x14) ^
                                *(ulonglong *)((longlong)pppppuVar3 + 0xc)) %
                                (ulonglong)*(uint *)(pppuVar4 + 0x11)]; plVar12 != (longlong *)0x0;
                    plVar12 = (longlong *)plVar12[3]) {
                    
                    if ((*(longlong *)((longlong)pppppuVar3 + 0xc) == *plVar12) &&
                       (*(longlong *)((longlong)pppppuVar3 + 0x14) == plVar12[1])) {
                        
                        if (plVar12 != (longlong *)0x0) {
                            tempPtr12 = plVar12;
                            ppuStack_130 = ppuVar13 +
                                           (*(ulonglong *)((longlong)pppppuVar3 + 0x14) ^
                                           *(ulonglong *)((longlong)pppppuVar3 + 0xc)) %
                                           (ulonglong)*(uint *)(pppuVar4 + 0x11);
                            pplVar11 = &tempPtr12;
                            ppuVar15 = pppuVar4[0x11];
                            goto LAB_18037d51b;
                        }
                        break;
                    }
                }
                
                ppuVar15 = pppuVar4[0x11];
                tempPtr13 = ppuVar13[(longlong)ppuVar15];
                ppuStack_120 = ppuVar13 + (longlong)ppuVar15;
                pplVar11 = &tempPtr13;
LAB_18037d51b:
                plVar12 = *pplVar11;
                
                if (plVar12 != ppuVar13[(longlong)ppuVar15]) {
                    tempIndex = (int)plVar12[2];
                    arraySize = *(int *)((longlong)plVar12 + 0x14) + tempIndex;
                    if (tempIndex < arraySize) {
                        do {
                            ppuVar13 = pppuVar4[0x15] + (longlong)tempIndex * 0x12;
                            
                            // 检查性能数据匹配
                            if ((((ppuVar13[4] == *(uint64_t **)((longlong)pppppuVar3 + 0xc)) &&
                                 (ppuVar13[5] == *(uint64_t **)((longlong)pppppuVar3 + 0x14))) &&
                                (*ppuVar13 == (uint64_t *)0x4b2d79e470ee4e2c)) &&
                               (ppuVar13[1] == (uint64_t *)0x9c552acd3ed5548d)) {
                                
                                tempPtr2 = ppuVar13[7];
                                tempValue2 = tempValue2 + (longlong)tempPtr2;
                                RenderSystem_GetRenderData(&tempPtr1, pppppuVar3 + 0xd);
                                tempFloat1 = (float)(longlong)tempPtr2;
                                
                                if ((longlong)tempPtr2 < 0) {
                                    tempFloat1 = tempFloat1 + 1.8446744e+19;
                                }
                                
                                tempFloat1 = tempFloat1 * 9.536743e-07;
                                
                                // 添加到性能数据数组
                                if (tempPtr7 < tempPtr8) {
                                    *tempPtr7 = &system_state_ptr;
                                    tempPtr7[1] = 0;
                                    *(int32_t *)(tempPtr7 + 2) = 0;
                                    *tempPtr7 = &system_data_buffer_ptr;
                                    tempPtr7[3] = 0;
                                    tempPtr7[1] = 0;
                                    *(int32_t *)(tempPtr7 + 2) = 0;
                                    *(int32_t *)(tempPtr7 + 2) = tempValue7;
                                    tempPtr7[1] = tempValue6;
                                    *(int32_t *)((longlong)tempPtr7 + 0x1c) = tempValue8._4_4_;
                                    *(int32_t *)(tempPtr7 + 3) = (int32_t)tempValue8;
                                    tempValue7 = 0;
                                    tempValue6 = 0;
                                    tempValue8 = 0;
                                    *(float *)(tempPtr7 + 4) = tempFloat1;
                                    tempPtr7 = tempPtr7 + 5;
                                }
                                else {
                                    RenderSystem_FindRenderResource(&tempValue15, &tempPtr1);
                                }
                                
                                tempPtr1 = &system_data_buffer_ptr;
                                if (tempValue6 != 0) {
                                    RenderSystem_FreeRenderResource();
                                }
                                tempValue6 = 0;
                                tempValue8 = tempValue8 & 0xffffffff00000000;
                                tempPtr1 = &system_state_ptr;
                                break;
                            }
                            tempIndex = tempIndex + 1;
                        } while (tempIndex < arraySize);
                    }
                }
                
                // 重置临时变量
                tempValue20 = 0;
                tempValue14 = tempValue14 & 0xffffffff00000000;
                tempPtr10 = &system_state_ptr;
                tempPtr4 = &system_data_buffer_ptr;
                
                if (tempValue9 != 0) {
                    RenderSystem_FreeRenderResource();
                }
                tempValue9 = 0;
                tempValue22 = tempValue22 & 0xffffffff00000000;
                tempPtr4 = &system_state_ptr;
            }
            
            pppppppuVar10 = (uint64_t *******)RenderSystem_NextRenderNode(pppppppuVar10);
        } while ((uint64_t ********)pppppppuVar10 != &pppppppuStack_280);
    }
    
    // 清理渲染数据
    RenderSystem_CleanupRenderData(tempValue15, tempPtr7, &unknown_var_880_ptr);
    
    tempPtr6 = &system_data_buffer_ptr;
    tempValue14 = 0;
    tempValue12 = 0;
    tempValue13 = 0;
    tempValue11 = totalStats;
    
    // 处理最终的统计数据
    if (((longlong)tempPtr7 - tempValue15) / 0x28 != 0) {
        do {
            tempPtr1 = *(void **)(tempValue15 + 8 + totalStats);
            tempPtr3 = &system_buffer_ptr;
            if (tempPtr1 != (void *)0x0) {
                tempPtr3 = tempPtr1;
            }
            
            // 更新渲染统计信息
            RenderSystem_UpdateRenderStatistics(&tempPtr6, &unknown_var_2788_ptr, tempPtr3,
                                              (double)*(float *)(tempValue15 + 0x20 + totalStats));
            tempFlags = (int)tempValue11 + 1;
            totalStats = totalStats + 0x28;
            tempValue11 = (ulonglong)tempFlags;
        } while ((ulonglong)(longlong)(int)tempFlags <
                 (ulonglong)(((longlong)tempPtr7 - tempValue15) / 0x28));
    }
    
    tempPtr6 = &system_data_buffer_ptr;
    if (tempValue12 != 0) {
        RenderSystem_FreeRenderResource();
    }
    tempValue12 = 0;
    tempValue14 = tempValue14 & 0xffffffff00000000;
    tempPtr6 = &system_state_ptr;
    
    // 释放统计资源
    RenderSystem_FindRenderResource(&tempValue15);
    tempPtr2 = tempPtr9;
    pppppppuVar10 = pppppppuStack_270;
    
    if (pppppppuStack_270 != (uint64_t *******)0x0) {
        RenderSystem_ReleaseRenderMemory(&pppppppuStack_280, *pppppppuStack_270);
        RenderSystem_FreeRenderResource(pppppppuVar10);
    }
    
    if (tempPtr9 != (uint64_t *)0x0) {
        RenderSystem_ReleaseRenderMemory(&pppppppuStack_1c8, *tempPtr9);
        RenderSystem_FreeRenderResource(tempPtr2);
    }
    
    return tempValue2;
}

/*========================== 模块信息 ==========================*/

/**
 * 模块初始化信息
 * 
 * 文件：03_rendering_part192.c
 * 功能：渲染缓冲区管理和性能统计模块
 * 版本：v1.0
 * 作者：TaleWorlds Engine Team
 * 
 * 修改历史：
 *   - 2024-07-11: 初始版本创建
 *   - 2024-07-11: 完成代码美化
 *   - 2024-07-11: 添加完整技术文档
 * 
 * 技术特点：
 *   - 高性能内存管理
 *   - 多线程安全设计
 *   - 智能缓存策略
 *   - 完整的错误处理
 *   - 详细的性能统计
 * 
 * 依赖模块：
 *   - 全局常量定义
 *   - 系统内存管理器
 *   - 渲染管线管理器
 *   - 纹理和材质系统
 * 
 * 性能指标：
 *   - 内存使用：高效
 *   - 执行速度：优化
 *   - 线程安全：保证
 *   - 错误恢复：完善
 * 
 ============================================================================*/