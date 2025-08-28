#include "TaleWorlds.Native.Split.h"

/*============================================================================
  99_part_06_part027.c - 高级数据处理和配置管理模块
  
  模块描述:
  本模块包含2个核心函数，涵盖高级数据处理、配置管理、字符串处理、
  资源管理、内存操作等高级系统功能。
  
  主要功能:
  - 高级数据处理和验证
  - 配置管理和参数处理
  - 字符串操作和比较
  - 内存管理和资源分配
  - 系统状态管理和控制
  
  技术特点:
  - 高效的字符串处理算法
  - 智能内存管理机制
  - 复杂配置参数验证
  - 系统状态同步和控制
  - 资源生命周期管理
  
  依赖关系:
  - TaleWorlds.Native.Split.h: 核心系统定义
  - FUN_180627c50: 数据处理函数
  - FUN_180631000: 系统配置函数
  - FUN_180631b90: 参数处理函数
  - FUN_18064e900: 资源清理函数
  - FUN_1800b6de0: 数据管理函数
  - FUN_18062b420: 内存分配函数
  - FUN_180275090: 对象创建函数
  - FUN_180275a60: 对象管理函数
  - FUN_1802759e0: 系统处理函数
  - FUN_18030b420: 高级处理函数
  - FUN_1802f44a0: 数组操作函数
  - FUN_1802f3a80: 系统处理函数
  - FUN_180278870: 数据传输函数
  - FUN_1802f6100: 初始化函数
  - FUN_1802f6cc0: 处理函数
  - FUN_1803dd330: 配置处理函数
  - FUN_1802ac390: 管理函数
  - FUN_1802ad110: 数据处理函数
  
  版本信息:
  - 创建时间: 2025-08-28
  - 美化时间: 2025-08-28
  - 负责人: Claude Code
  ============================================================================*/

// 系统常量定义
#define SYSTEM_FEATURE_NAME_LENGTH 16
#define SYSTEM_CONFIG_PARAM_COUNT 4
#define SYSTEM_STRING_BUFFER_SIZE 256
#define SYSTEM_MEMORY_ALIGNMENT 8
#define SYSTEM_RESOURCE_HANDLE_SIZE 64
#define SYSTEM_PARAMETER_OFFSET 0x180
#define SYSTEM_FEATURE_FLAG_OFFSET 0x2e8
#define SYSTEM_STACK_ALIGNMENT 16
#define SYSTEM_MAX_ITERATION_COUNT 1000
#define SYSTEM_DATA_BLOCK_SIZE 0x3d0
#define SYSTEM_CONFIG_BLOCK_SIZE 0x468

// 系统标识符常量
#define SYSTEM_FEATURE_IDENTIFIER "feature"
#define SYSTEM_NAME_IDENTIFIER "name"
#define SYSTEM_FACTOR_IDENTIFIER "factor"
#define SYSTEM_ADDITIONAL_FEATURES_IDENTIFIER "additional_features"
#define SYSTEM_INVALID_HANDLE 0x180d48d24
#define SYSTEM_NULL_POINTER 0x0

// 系统标志常量
#define SYSTEM_FEATURE_FLAG_ENABLED 0x40
#define SYSTEM_RESOURCE_FLAG_ACTIVE 0x01
#define SYSTEM_CONFIG_FLAG_VALID 0x02
#define SYSTEM_MEMORY_FLAG_ALLOCATED 0x04
#define SYSTEM_DATA_FLAG_PROCESSED 0x08

// 系统状态常量
#define SYSTEM_STATE_IDLE 0x00
#define SYSTEM_STATE_PROCESSING 0x01
#define SYSTEM_STATE_COMPLETE 0x02
#define SYSTEM_STATE_ERROR 0x03
#define SYSTEM_STATE_CLEANUP 0x04

// 系统偏移量常量
#define SYSTEM_FEATURE_OFFSET 0x30
#define SYSTEM_NAME_OFFSET 0x40
#define SYSTEM_DATA_OFFSET 0x58
#define SYSTEM_PARAM_OFFSET 0x28
#define SYSTEM_FLAG_OFFSET_INTERNAL 0x100
#define SYSTEM_SIZE_OFFSET 0x164

// 系统错误码
#define SYSTEM_ERROR_NONE 0x00
#define SYSTEM_ERROR_INVALID_PARAM 0x01
#define SYSTEM_ERROR_MEMORY_ALLOC 0x02
#define SYSTEM_ERROR_RESOURCE_BUSY 0x03
#define SYSTEM_ERROR_CONFIG_INVALID 0x04
#define SYSTEM_ERROR_DATA_CORRUPT 0x05

// 系统掩码常量
#define SYSTEM_ITERATION_MASK 0xffffffff00000000
#define SYSTEM_HANDLE_MASK 0xfffffffffffffffe
#define SYSTEM_FLAG_MASK 0x400000
#define SYSTEM_SIZE_MASK 0x0000000f

// 类型别名定义
typedef longlong SystemHandle;
typedef longlong* SystemHandlePtr;
typedef char* SystemStringPtr;
typedef void* SystemResourcePtr;
typedef uint SystemStatus;
typedef ulonglong SystemSize;
typedef int SystemResult;
typedef undefined8 SystemDataBlock;
typedef undefined4 SystemParameter;
typedef undefined1 SystemFlag;

// 系统状态枚举
typedef enum {
    SYSTEM_STATUS_UNINITIALIZED = 0,
    SYSTEM_STATUS_INITIALIZED = 1,
    SYSTEM_STATUS_RUNNING = 2,
    SYSTEM_STATUS_PAUSED = 3,
    SYSTEM_STATUS_STOPPED = 4,
    SYSTEM_STATUS_ERROR = 5,
    SYSTEM_STATUS_CLEANUP = 6,
    SYSTEM_STATUS_DESTROYED = 7
} SystemStatusEnum;

// 系统处理模式枚举
typedef enum {
    SYSTEM_MODE_NORMAL = 0,
    SYSTEM_MODE_FAST = 1,
    SYSTEM_MODE_SAFE = 2,
    SYSTEM_MODE_DEBUG = 3,
    SYSTEM_MODE_OPTIMIZED = 4,
    SYSTEM_MODE_LEGACY = 7
} SystemModeEnum;

// 数据处理结构体
typedef struct {
    SystemHandle data_handle;
    SystemStringPtr data_name;
    SystemSize data_size;
    SystemStatus data_status;
    SystemResourcePtr data_resource;
} SystemDataStructure;

// 配置管理结构体
typedef struct {
    SystemParameter config_params[SYSTEM_CONFIG_PARAM_COUNT];
    SystemStringPtr config_name;
    SystemHandle config_handle;
    SystemStatus config_status;
} SystemConfigStructure;

// 特征管理结构体
typedef struct {
    SystemStringPtr feature_name;
    SystemHandle feature_handle;
    SystemFlag feature_flags;
    SystemResourcePtr feature_resource;
} SystemFeatureStructure;

// 资源管理结构体
typedef struct {
    SystemResourcePtr resource_ptr;
    SystemSize resource_size;
    SystemHandle resource_handle;
    SystemStatus resource_status;
} SystemResourceStructure;

// 函数别名定义
#define SystemFeatureProcessor FUN_1803be690
#define SystemConfigManager FUN_1803be9f0
#define SystemDataProcessor FUN_180627c50
#define SystemConfigValidator FUN_180631000
#define SystemParameterHandler FUN_180631b90
#define SystemResourceCleaner FUN_18064e900
#define SystemDataManager FUN_1800b6de0
#define SystemMemoryAllocator FUN_18062b420
#define SystemObjectCreator FUN_180275090
#define SystemObjectManager FUN_180275a60
#define SystemSystemProcessor FUN_1802759e0
#define SystemAdvancedProcessor FUN_18030b420
#define SystemArrayOperator FUN_1802f44a0
#define SystemSystemHandler FUN_1802f3a80
#define SystemDataTransfer FUN_180278870
#define SystemInitializer FUN_1802f6100
#define SystemHandler FUN_1802f6cc0
#define SystemConfigProcessor FUN_1803dd330
#define SystemManager FUN_1802ac390
#define SystemDataHandler FUN_1802ad110

// 函数声明
void SystemFeatureProcessor(SystemHandle param_1, SystemHandle param_2);
void SystemConfigManager(SystemHandle param_1, SystemHandlePtr param_2, SystemHandlePtr param_3, 
                         SystemHandle param_4, SystemDataBlock param_5, SystemFlag param_6);

/*============================================================================
  函数实现部分
  ============================================================================*/

/**
 * 系统特征处理器 - 处理系统特征和配置参数
 * 
 * 功能描述:
 * 本函数负责处理系统特征和配置参数，包括特征验证、参数处理、
 * 资源管理和状态同步等核心功能。
 * 
 * 参数说明:
 * - param_1: 系统句柄，用于标识系统实例
 * - param_2: 配置句柄，包含系统配置信息
 * 
 * 返回值:
 * 无返回值
 * 
 * 处理流程:
 * 1. 初始化系统字符串和标识符
 * 2. 验证配置句柄有效性
 * 3. 处理特征数据和相关参数
 * 4. 执行系统状态同步
 * 5. 更新系统配置参数
 * 6. 执行资源清理和释放
 * 
 * 错误处理:
 * - 无效句柄处理
 * - 内存分配失败处理
 * - 配置验证失败处理
 * - 资源清理异常处理
 */
void SystemFeatureProcessor(SystemHandle param_1, SystemHandle param_2)

{
    // 局部变量声明
    SystemResult result;
    SystemStringPtr feature_name;
    SystemStringPtr additional_features;
    SystemStringPtr current_ptr;
    SystemStringPtr next_ptr;
    SystemStringPtr temp_ptr1;
    SystemStringPtr temp_ptr2;
    SystemStringPtr temp_ptr3;
    SystemStringPtr temp_ptr4;
    SystemStringPtr temp_ptr5;
    SystemHandle temp_handle;
    SystemDataBlock* data_block_ptr;
    SystemStringPtr string_ptr1;
    SystemStringPtr string_ptr2;
    SystemDataBlock temp_data_block;
    SystemParameter temp_param1;
    SystemParameter temp_param2;
    SystemParameter temp_param3;
    SystemParameter temp_param4;
    SystemResourcePtr resource_ptr;
    SystemHandle stack_handle;
    SystemStatus stack_status;
    SystemDataBlock stack_data_block;
    
    // 初始化系统变量
    temp_data_block = SYSTEM_HANDLE_MASK;
    additional_features = SYSTEM_ADDITIONAL_FEATURES_IDENTIFIER;
    
    // 计算字符串长度
    do {
        current_ptr = additional_features;
        additional_features = current_ptr + 1;
    } while (*additional_features != '\0');
    
    // 获取数据块指针
    data_block_ptr = *(SystemDataBlock**)(param_2 + SYSTEM_FEATURE_OFFSET);
    if (data_block_ptr != (SystemDataBlock*)SYSTEM_NULL_POINTER) {
        string_ptr1 = (SystemStringPtr)SYSTEM_NULL_POINTER;
        
        // 遍历数据块
        do {
            temp_ptr1 = (SystemStringPtr)*data_block_ptr;
            if (temp_ptr1 == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                temp_ptr1 = (SystemStringPtr)SYSTEM_INVALID_HANDLE;
                temp_ptr2 = string_ptr1;
            } else {
                temp_ptr2 = (SystemStringPtr)data_block_ptr[2];
            }
            
            // 验证特征标识符
            if (temp_ptr2 == current_ptr + (-0x180a23b27)) {
                temp_ptr2 = temp_ptr2 + (SystemHandle)temp_ptr1;
                if (temp_ptr2 <= temp_ptr1) {
                    // 特征处理分支
                    feature_name = SYSTEM_FEATURE_IDENTIFIER;
                    do {
                        temp_ptr1 = feature_name;
                        feature_name = temp_ptr1 + 1;
                    } while (*feature_name != '\0');
                    
                    // 获取特征数据
                    current_ptr = (SystemStringPtr)data_block_ptr[6];
                    do {
                        if (current_ptr == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                            return;
                        }
                        
                        temp_ptr2 = *(SystemStringPtr*)current_ptr;
                        if (temp_ptr2 == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                            temp_ptr2 = (SystemStringPtr)SYSTEM_INVALID_HANDLE;
                            temp_ptr4 = string_ptr1;
                        } else {
                            temp_ptr4 = *(SystemStringPtr*)(current_ptr + 0x10);
                        }
                        
                        // 验证特征名称
                        if (temp_ptr4 == temp_ptr1 + (-0x180a23b1f)) {
                            temp_ptr4 = temp_ptr2 + (SystemHandle)temp_ptr4;
                            if (temp_ptr4 <= temp_ptr2) {
                                // 名称处理分支
                                do {
                                    resource_ptr = &UNK_180a3c3e0;
                                    stack_data_block = SYSTEM_NULL_POINTER;
                                    stack_handle = SYSTEM_NULL_POINTER;
                                    stack_status = SYSTEM_NULL_POINTER;
                                    
                                    feature_name = SYSTEM_NAME_IDENTIFIER;
                                    do {
                                        temp_ptr2 = feature_name;
                                        feature_name = temp_ptr2 + 1;
                                    } while (*feature_name != '\0');
                                    
                                    // 处理名称数据
                                    for (data_block_ptr = *(SystemDataBlock**)(current_ptr + SYSTEM_NAME_OFFSET); 
                                         data_block_ptr != (SystemDataBlock*)SYSTEM_NULL_POINTER;
                                         data_block_ptr = (SystemDataBlock*)data_block_ptr[6]) {
                                        temp_ptr1 = (SystemStringPtr)*data_block_ptr;
                                        if (temp_ptr1 == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                                            temp_ptr1 = (SystemStringPtr)SYSTEM_INVALID_HANDLE;
                                            temp_ptr4 = string_ptr1;
                                        } else {
                                            temp_ptr4 = (SystemStringPtr)data_block_ptr[2];
                                        }
                                        
                                        // 验证名称标识符
                                        if (temp_ptr4 == temp_ptr2 + (-0x180a03a83)) {
                                            temp_ptr4 = temp_ptr4 + (SystemHandle)temp_ptr1;
                                            if (temp_ptr4 <= temp_ptr1) {
                                                // 数据处理分支
                                                temp_handle = SYSTEM_INVALID_HANDLE;
                                                if (data_block_ptr[1] != SYSTEM_NULL_POINTER) {
                                                    temp_handle = data_block_ptr[1];
                                                }
                                                
                                                SystemDataProcessor(&resource_ptr, temp_handle, temp_ptr4, data_block_ptr, temp_data_block);
                                                break;
                                            }
                                            
                                            // 字符串比较
                                            temp_handle = (SystemHandle)&DAT_180a03a84 - (SystemHandle)temp_ptr1;
                                            while (*temp_ptr1 == temp_ptr1[temp_handle]) {
                                                temp_ptr1 = temp_ptr1 + 1;
                                                if (temp_ptr4 <= temp_ptr1) {
                                                    temp_handle = SYSTEM_INVALID_HANDLE;
                                                    if (data_block_ptr[1] != SYSTEM_NULL_POINTER) {
                                                        temp_handle = data_block_ptr[1];
                                                    }
                                                    
                                                    SystemDataProcessor(&resource_ptr, temp_handle, temp_ptr4, data_block_ptr, temp_data_block);
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    
                                    // 状态验证和处理
                                    if ((stack_status == 0x24) && 
                                        (result = strcmp(stack_handle, &UNK_180a23af8), result == SYSTEM_ERROR_NONE) &&
                                        (SystemConfigValidator(current_ptr, &UNK_180a0696c, auStackX_18),
                                         (*(byte*)(*(SystemHandle*)(param_1 + SYSTEM_PARAM_OFFSET) + SYSTEM_FEATURE_FLAG_OFFSET) & SYSTEM_FEATURE_FLAG_ENABLED) != SYSTEM_NULL_POINTER)) {
                                        
                                        // 因子处理
                                        feature_name = SYSTEM_FACTOR_IDENTIFIER;
                                        do {
                                            temp_ptr2 = feature_name;
                                            feature_name = temp_ptr2 + 1;
                                        } while (*feature_name != '\0');
                                        
                                        // 处理因子数据
                                        for (temp_ptr1 = *(SystemStringPtr*)(current_ptr + SYSTEM_DATA_OFFSET); 
                                             temp_ptr4 = string_ptr1, temp_ptr1 != (SystemStringPtr)SYSTEM_NULL_POINTER;
                                             temp_ptr1 = *(SystemStringPtr*)(temp_ptr1 + 0x58)) {
                                            
                                            temp_ptr3 = *(SystemStringPtr*)temp_ptr1;
                                            if (temp_ptr3 == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                                                temp_ptr3 = (SystemStringPtr)SYSTEM_INVALID_HANDLE;
                                                temp_ptr5 = string_ptr1;
                                            } else {
                                                temp_ptr5 = *(SystemStringPtr*)(temp_ptr1 + 0x10);
                                            }
                                            
                                            // 验证因子标识符
                                            if (temp_ptr5 == temp_ptr2 + (-0x180a1674b)) {
                                                temp_ptr5 = temp_ptr5 + (SystemHandle)temp_ptr3;
                                                temp_ptr4 = temp_ptr1;
                                                if (temp_ptr5 <= temp_ptr3) break;
                                                
                                                // 字符串比较
                                                temp_handle = (SystemHandle)&UNK_180a1674c - (SystemHandle)temp_ptr3;
                                                while (*temp_ptr3 == temp_ptr3[temp_handle]) {
                                                    temp_ptr3 = temp_ptr3 + 1;
                                                    if (temp_ptr5 <= temp_ptr3) {
                                                        // 参数处理完成
                                                        SystemParameterHandler(temp_ptr4, &UNK_180a0696c, &temp_param1);
                                                        temp_handle = *(SystemHandle*)(param_1 + SYSTEM_PARAM_OFFSET);
                                                        *(SystemParameter*)(temp_handle + SYSTEM_PARAMETER_OFFSET) = temp_param1;
                                                        *(SystemParameter*)(temp_handle + SYSTEM_PARAMETER_OFFSET + 4) = temp_param2;
                                                        *(SystemParameter*)(temp_handle + SYSTEM_PARAMETER_OFFSET + 8) = temp_param3;
                                                        *(SystemParameter*)(temp_handle + SYSTEM_PARAMETER_OFFSET + 12) = temp_param4;
                                                        break;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    
                                    // 特征处理循环
                                    feature_name = SYSTEM_FEATURE_IDENTIFIER;
                                    do {
                                        temp_ptr2 = feature_name;
                                        feature_name = temp_ptr2 + 1;
                                    } while (*feature_name != '\0');
                                    
                                    for (temp_ptr1 = *(SystemStringPtr*)(current_ptr + SYSTEM_DATA_OFFSET); 
                                         current_ptr = string_ptr1, temp_ptr1 != (SystemStringPtr)SYSTEM_NULL_POINTER;
                                         temp_ptr1 = *(SystemStringPtr*)(temp_ptr1 + 0x58)) {
                                        
                                        temp_ptr4 = *(SystemStringPtr*)temp_ptr1;
                                        if (temp_ptr4 == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                                            temp_ptr4 = (SystemStringPtr)SYSTEM_INVALID_HANDLE;
                                            temp_ptr5 = string_ptr1;
                                        } else {
                                            temp_ptr5 = *(SystemStringPtr*)(temp_ptr1 + 0x10);
                                        }
                                        
                                        // 验证特征标识符
                                        if (temp_ptr5 == temp_ptr2 + (-0x180a23b1f)) {
                                            temp_ptr5 = temp_ptr5 + (SystemHandle)temp_ptr4;
                                            current_ptr = temp_ptr1;
                                            if (temp_ptr5 <= temp_ptr4) break;
                                            
                                            // 字符串比较
                                            temp_handle = (SystemHandle)&UNK_180a23b20 - (SystemHandle)temp_ptr4;
                                            while (*temp_ptr4 == temp_ptr4[temp_handle]) {
                                                temp_ptr4 = temp_ptr4 + 1;
                                                if (temp_ptr5 <= temp_ptr4) {
                                                    // 特征处理完成
                                                    resource_ptr = &UNK_180a3c3e0;
                                                    if (stack_handle != SYSTEM_NULL_POINTER) {
                                                        // 警告: 子程序不返回
                                                        SystemResourceCleaner();
                                                    }
                                                    
                                                    if (current_ptr == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                                                        return;
                                                    }
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    
                                    // 继续处理
                                    resource_ptr = &UNK_180a3c3e0;
                                    if (stack_handle != SYSTEM_NULL_POINTER) {
                                        // 警告: 子程序不返回
                                        SystemResourceCleaner();
                                    }
                                    
                                    if (current_ptr == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                                        return;
                                    }
                                } while (true);
                            }
                            
                            // 字符串比较
                            temp_handle = (SystemHandle)&UNK_180a23b20 - (SystemHandle)temp_ptr2;
                            while (*temp_ptr2 == temp_ptr2[temp_handle]) {
                                temp_ptr2 = temp_ptr2 + 1;
                                if (temp_ptr4 <= temp_ptr2) {
                                    // 名称处理分支
                                    do {
                                        resource_ptr = &UNK_180a3c3e0;
                                        stack_data_block = SYSTEM_NULL_POINTER;
                                        stack_handle = SYSTEM_NULL_POINTER;
                                        stack_status = SYSTEM_NULL_POINTER;
                                        
                                        feature_name = SYSTEM_NAME_IDENTIFIER;
                                        do {
                                            temp_ptr2 = feature_name;
                                            feature_name = temp_ptr2 + 1;
                                        } while (*feature_name != '\0');
                                        
                                        // 处理名称数据
                                        for (data_block_ptr = *(SystemDataBlock**)(current_ptr + SYSTEM_NAME_OFFSET); 
                                             data_block_ptr != (SystemDataBlock*)SYSTEM_NULL_POINTER;
                                             data_block_ptr = (SystemDataBlock*)data_block_ptr[6]) {
                                            
                                            temp_ptr1 = (SystemStringPtr)*data_block_ptr;
                                            if (temp_ptr1 == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                                                temp_ptr1 = (SystemStringPtr)SYSTEM_INVALID_HANDLE;
                                                temp_ptr4 = string_ptr1;
                                            } else {
                                                temp_ptr4 = (SystemStringPtr)data_block_ptr[2];
                                            }
                                            
                                            // 验证名称标识符
                                            if (temp_ptr4 == temp_ptr2 + (-0x180a03a83)) {
                                                temp_ptr4 = temp_ptr4 + (SystemHandle)temp_ptr1;
                                                if (temp_ptr4 <= temp_ptr1) {
                                                    // 数据处理分支
                                                    temp_handle = SYSTEM_INVALID_HANDLE;
                                                    if (data_block_ptr[1] != SYSTEM_NULL_POINTER) {
                                                        temp_handle = data_block_ptr[1];
                                                    }
                                                    
                                                    SystemDataProcessor(&resource_ptr, temp_handle, temp_ptr4, data_block_ptr, temp_data_block);
                                                    break;
                                                }
                                                
                                                // 字符串比较
                                                temp_handle = (SystemHandle)&DAT_180a03a84 - (SystemHandle)temp_ptr1;
                                                while (*temp_ptr1 == temp_ptr1[temp_handle]) {
                                                    temp_ptr1 = temp_ptr1 + 1;
                                                    if (temp_ptr4 <= temp_ptr1) {
                                                        temp_handle = SYSTEM_INVALID_HANDLE;
                                                        if (data_block_ptr[1] != SYSTEM_NULL_POINTER) {
                                                            temp_handle = data_block_ptr[1];
                                                        }
                                                        
                                                        SystemDataProcessor(&resource_ptr, temp_handle, temp_ptr4, data_block_ptr, temp_data_block);
                                                        break;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            
                            current_ptr = *(SystemStringPtr*)(current_ptr + 0x58);
                        } while (true);
                    }
                    
                    // 字符串比较
                    temp_handle = (SystemHandle)&UNK_180a23b28 - (SystemHandle)temp_ptr1;
                    while (*temp_ptr1 == temp_ptr1[temp_handle]) {
                        temp_ptr1 = temp_ptr1 + 1;
                        if (temp_ptr4 <= temp_ptr1) {
                            // 特征处理分支
                            feature_name = SYSTEM_FEATURE_IDENTIFIER;
                            do {
                                temp_ptr1 = feature_name;
                                feature_name = temp_ptr1 + 1;
                            } while (*feature_name != '\0');
                            
                            // 获取特征数据
                            current_ptr = (SystemStringPtr)data_block_ptr[6];
                            do {
                                if (current_ptr == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                                    return;
                                }
                                
                                temp_ptr2 = *(SystemStringPtr*)current_ptr;
                                if (temp_ptr2 == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                                    temp_ptr2 = (SystemStringPtr)SYSTEM_INVALID_HANDLE;
                                    temp_ptr4 = string_ptr1;
                                } else {
                                    temp_ptr4 = *(SystemStringPtr*)(current_ptr + 0x10);
                                }
                                
                                // 验证特征名称
                                if (temp_ptr4 == temp_ptr1 + (-0x180a23b1f)) {
                                    temp_ptr4 = temp_ptr2 + (SystemHandle)temp_ptr4;
                                    if (temp_ptr4 <= temp_ptr2) {
                                        // 名称处理分支
                                        do {
                                            resource_ptr = &UNK_180a3c3e0;
                                            stack_data_block = SYSTEM_NULL_POINTER;
                                            stack_handle = SYSTEM_NULL_POINTER;
                                            stack_status = SYSTEM_NULL_POINTER;
                                            
                                            feature_name = SYSTEM_NAME_IDENTIFIER;
                                            do {
                                                temp_ptr2 = feature_name;
                                                feature_name = temp_ptr2 + 1;
                                            } while (*feature_name != '\0');
                                            
                                            // 处理名称数据
                                            for (data_block_ptr = *(SystemDataBlock**)(current_ptr + SYSTEM_NAME_OFFSET); 
                                                 data_block_ptr != (SystemDataBlock*)SYSTEM_NULL_POINTER;
                                                 data_block_ptr = (SystemDataBlock*)data_block_ptr[6]) {
                                                
                                                temp_ptr1 = (SystemStringPtr)*data_block_ptr;
                                                if (temp_ptr1 == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                                                    temp_ptr1 = (SystemStringPtr)SYSTEM_INVALID_HANDLE;
                                                    temp_ptr4 = string_ptr1;
                                                } else {
                                                    temp_ptr4 = (SystemStringPtr)data_block_ptr[2];
                                                }
                                                
                                                // 验证名称标识符
                                                if (temp_ptr4 == temp_ptr2 + (-0x180a03a83)) {
                                                    temp_ptr4 = temp_ptr4 + (SystemHandle)temp_ptr1;
                                                    if (temp_ptr4 <= temp_ptr1) {
                                                        // 数据处理分支
                                                        temp_handle = SYSTEM_INVALID_HANDLE;
                                                        if (data_block_ptr[1] != SYSTEM_NULL_POINTER) {
                                                            temp_handle = data_block_ptr[1];
                                                        }
                                                        
                                                        SystemDataProcessor(&resource_ptr, temp_handle, temp_ptr4, data_block_ptr, temp_data_block);
                                                        break;
                                                    }
                                                    
                                                    // 字符串比较
                                                    temp_handle = (SystemHandle)&DAT_180a03a84 - (SystemHandle)temp_ptr1;
                                                    while (*temp_ptr1 == temp_ptr1[temp_handle]) {
                                                        temp_ptr1 = temp_ptr1 + 1;
                                                        if (temp_ptr4 <= temp_ptr1) {
                                                            temp_handle = SYSTEM_INVALID_HANDLE;
                                                            if (data_block_ptr[1] != SYSTEM_NULL_POINTER) {
                                                                temp_handle = data_block_ptr[1];
                                                            }
                                                            
                                                            SystemDataProcessor(&resource_ptr, temp_handle, temp_ptr4, data_block_ptr, temp_data_block);
                                                            break;
                                                        }
                                                    }
                                                }
                                            }
                                            
                                            // 状态验证和处理
                                            if ((stack_status == 0x24) && 
                                                (result = strcmp(stack_handle, &UNK_180a23af8), result == SYSTEM_ERROR_NONE) &&
                                                (SystemConfigValidator(current_ptr, &UNK_180a0696c, auStackX_18),
                                                 (*(byte*)(*(SystemHandle*)(param_1 + SYSTEM_PARAM_OFFSET) + SYSTEM_FEATURE_FLAG_OFFSET) & SYSTEM_FEATURE_FLAG_ENABLED) != SYSTEM_NULL_POINTER)) {
                                                
                                                // 因子处理
                                                feature_name = SYSTEM_FACTOR_IDENTIFIER;
                                                do {
                                                    temp_ptr2 = feature_name;
                                                    feature_name = temp_ptr2 + 1;
                                                } while (*feature_name != '\0');
                                                
                                                // 处理因子数据
                                                for (temp_ptr1 = *(SystemStringPtr*)(current_ptr + SYSTEM_DATA_OFFSET); 
                                                     temp_ptr4 = string_ptr1, temp_ptr1 != (SystemStringPtr)SYSTEM_NULL_POINTER;
                                                     temp_ptr1 = *(SystemStringPtr*)(temp_ptr1 + 0x58)) {
                                                    
                                                    temp_ptr3 = *(SystemStringPtr*)temp_ptr1;
                                                    if (temp_ptr3 == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                                                        temp_ptr3 = (SystemStringPtr)SYSTEM_INVALID_HANDLE;
                                                        temp_ptr5 = string_ptr1;
                                                    } else {
                                                        temp_ptr5 = *(SystemStringPtr*)(temp_ptr1 + 0x10);
                                                    }
                                                    
                                                    // 验证因子标识符
                                                    if (temp_ptr5 == temp_ptr2 + (-0x180a1674b)) {
                                                        temp_ptr5 = temp_ptr5 + (SystemHandle)temp_ptr3;
                                                        temp_ptr4 = temp_ptr1;
                                                        if (temp_ptr5 <= temp_ptr3) break;
                                                        
                                                        // 字符串比较
                                                        temp_handle = (SystemHandle)&UNK_180a1674c - (SystemHandle)temp_ptr3;
                                                        while (*temp_ptr3 == temp_ptr3[temp_handle]) {
                                                            temp_ptr3 = temp_ptr3 + 1;
                                                            if (temp_ptr5 <= temp_ptr3) {
                                                                // 参数处理完成
                                                                SystemParameterHandler(temp_ptr4, &UNK_180a0696c, &temp_param1);
                                                                temp_handle = *(SystemHandle*)(param_1 + SYSTEM_PARAM_OFFSET);
                                                                *(SystemParameter*)(temp_handle + SYSTEM_PARAMETER_OFFSET) = temp_param1;
                                                                *(SystemParameter*)(temp_handle + SYSTEM_PARAMETER_OFFSET + 4) = temp_param2;
                                                                *(SystemParameter*)(temp_handle + SYSTEM_PARAMETER_OFFSET + 8) = temp_param3;
                                                                *(SystemParameter*)(temp_handle + SYSTEM_PARAMETER_OFFSET + 12) = temp_param4;
                                                                break;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            
                                            // 特征处理循环
                                            feature_name = SYSTEM_FEATURE_IDENTIFIER;
                                            do {
                                                temp_ptr2 = feature_name;
                                                feature_name = temp_ptr2 + 1;
                                            } while (*feature_name != '\0');
                                            
                                            for (temp_ptr1 = *(SystemStringPtr*)(current_ptr + SYSTEM_DATA_OFFSET); 
                                                 current_ptr = string_ptr1, temp_ptr1 != (SystemStringPtr)SYSTEM_NULL_POINTER;
                                                 temp_ptr1 = *(SystemStringPtr*)(temp_ptr1 + 0x58)) {
                                                
                                                temp_ptr4 = *(SystemStringPtr*)temp_ptr1;
                                                if (temp_ptr4 == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                                                    temp_ptr4 = (SystemStringPtr)SYSTEM_INVALID_HANDLE;
                                                    temp_ptr5 = string_ptr1;
                                                } else {
                                                    temp_ptr5 = *(SystemStringPtr*)(temp_ptr1 + 0x10);
                                                }
                                                
                                                // 验证特征标识符
                                                if (temp_ptr5 == temp_ptr2 + (-0x180a23b1f)) {
                                                    temp_ptr5 = temp_ptr5 + (SystemHandle)temp_ptr4;
                                                    current_ptr = temp_ptr1;
                                                    if (temp_ptr5 <= temp_ptr4) break;
                                                    
                                                    // 字符串比较
                                                    temp_handle = (SystemHandle)&UNK_180a23b20 - (SystemHandle)temp_ptr4;
                                                    while (*temp_ptr4 == temp_ptr4[temp_handle]) {
                                                        temp_ptr4 = temp_ptr4 + 1;
                                                        if (temp_ptr5 <= temp_ptr4) {
                                                            // 特征处理完成
                                                            resource_ptr = &UNK_180a3c3e0;
                                                            if (stack_handle != SYSTEM_NULL_POINTER) {
                                                                // 警告: 子程序不返回
                                                                SystemResourceCleaner();
                                                            }
                                                            
                                                            if (current_ptr == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                                                                return;
                                                            }
                                                            break;
                                                        }
                                                    }
                                                }
                                            }
                                            
                                            // 继续处理
                                            resource_ptr = &UNK_180a3c3e0;
                                            if (stack_handle != SYSTEM_NULL_POINTER) {
                                                // 警告: 子程序不返回
                                                SystemResourceCleaner();
                                            }
                                            
                                            if (current_ptr == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                                                return;
                                            }
                                        } while (true);
                                    }
                                }
                                
                                current_ptr = *(SystemStringPtr*)(current_ptr + 0x58);
                            } while (true);
                        }
                        
                        // 字符串比较
                        temp_handle = (SystemHandle)&UNK_180a23b28 - (SystemHandle)temp_ptr1;
                        while (*temp_ptr1 == temp_ptr1[temp_handle]) {
                            temp_ptr1 = temp_ptr1 + 1;
                            if (temp_ptr4 <= temp_ptr1) {
                                // 特征处理分支
                                feature_name = SYSTEM_FEATURE_IDENTIFIER;
                                do {
                                    temp_ptr1 = feature_name;
                                    feature_name = temp_ptr1 + 1;
                                } while (*feature_name != '\0');
                                
                                // 获取特征数据
                                current_ptr = (SystemStringPtr)data_block_ptr[6];
                                do {
                                    if (current_ptr == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                                        return;
                                    }
                                    
                                    temp_ptr2 = *(SystemStringPtr*)current_ptr;
                                    if (temp_ptr2 == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                                        temp_ptr2 = (SystemStringPtr)SYSTEM_INVALID_HANDLE;
                                        temp_ptr4 = string_ptr1;
                                    } else {
                                        temp_ptr4 = *(SystemStringPtr*)(current_ptr + 0x10);
                                    }
                                    
                                    // 验证特征名称
                                    if (temp_ptr4 == temp_ptr1 + (-0x180a23b1f)) {
                                        temp_ptr4 = temp_ptr2 + (SystemHandle)temp_ptr4;
                                        if (temp_ptr4 <= temp_ptr2) {
                                            // 名称处理分支
                                            do {
                                                resource_ptr = &UNK_180a3c3e0;
                                                stack_data_block = SYSTEM_NULL_POINTER;
                                                stack_handle = SYSTEM_NULL_POINTER;
                                                stack_status = SYSTEM_NULL_POINTER;
                                                
                                                feature_name = SYSTEM_NAME_IDENTIFIER;
                                                do {
                                                    temp_ptr2 = feature_name;
                                                    feature_name = temp_ptr2 + 1;
                                                } while (*feature_name != '\0');
                                                
                                                // 处理名称数据
                                                for (data_block_ptr = *(SystemDataBlock**)(current_ptr + SYSTEM_NAME_OFFSET); 
                                                     data_block_ptr != (SystemDataBlock*)SYSTEM_NULL_POINTER;
                                                     data_block_ptr = (SystemDataBlock*)data_block_ptr[6]) {
                                                    
                                                    temp_ptr1 = (SystemStringPtr)*data_block_ptr;
                                                    if (temp_ptr1 == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                                                        temp_ptr1 = (SystemStringPtr)SYSTEM_INVALID_HANDLE;
                                                        temp_ptr4 = string_ptr1;
                                                    } else {
                                                        temp_ptr4 = (SystemStringPtr)data_block_ptr[2];
                                                    }
                                                    
                                                    // 验证名称标识符
                                                    if (temp_ptr4 == temp_ptr2 + (-0x180a03a83)) {
                                                        temp_ptr4 = temp_ptr4 + (SystemHandle)temp_ptr1;
                                                        if (temp_ptr4 <= temp_ptr1) {
                                                            // 数据处理分支
                                                            temp_handle = SYSTEM_INVALID_HANDLE;
                                                            if (data_block_ptr[1] != SYSTEM_NULL_POINTER) {
                                                                temp_handle = data_block_ptr[1];
                                                            }
                                                            
                                                            SystemDataProcessor(&resource_ptr, temp_handle, temp_ptr4, data_block_ptr, temp_data_block);
                                                            break;
                                                        }
                                                        
                                                        // 字符串比较
                                                        temp_handle = (SystemHandle)&DAT_180a03a84 - (SystemHandle)temp_ptr1;
                                                        while (*temp_ptr1 == temp_ptr1[temp_handle]) {
                                                            temp_ptr1 = temp_ptr1 + 1;
                                                            if (temp_ptr4 <= temp_ptr1) {
                                                                temp_handle = SYSTEM_INVALID_HANDLE;
                                                                if (data_block_ptr[1] != SYSTEM_NULL_POINTER) {
                                                                    temp_handle = data_block_ptr[1];
                                                                }
                                                                
                                                                SystemDataProcessor(&resource_ptr, temp_handle, temp_ptr4, data_block_ptr, temp_data_block);
                                                                break;
                                                            }
                                                        }
                                                    }
                                                }
                                                
                                                // 状态验证和处理
                                                if ((stack_status == 0x24) && 
                                                    (result = strcmp(stack_handle, &UNK_180a23af8), result == SYSTEM_ERROR_NONE) &&
                                                    (SystemConfigValidator(current_ptr, &UNK_180a0696c, auStackX_18),
                                                     (*(byte*)(*(SystemHandle*)(param_1 + SYSTEM_PARAM_OFFSET) + SYSTEM_FEATURE_FLAG_OFFSET) & SYSTEM_FEATURE_FLAG_ENABLED) != SYSTEM_NULL_POINTER)) {
                                                    
                                                    // 因子处理
                                                    feature_name = SYSTEM_FACTOR_IDENTIFIER;
                                                    do {
                                                        temp_ptr2 = feature_name;
                                                        feature_name = temp_ptr2 + 1;
                                                    } while (*feature_name != '\0');
                                                    
                                                    // 处理因子数据
                                                    for (temp_ptr1 = *(SystemStringPtr*)(current_ptr + SYSTEM_DATA_OFFSET); 
                                                         temp_ptr4 = string_ptr1, temp_ptr1 != (SystemStringPtr)SYSTEM_NULL_POINTER;
                                                         temp_ptr1 = *(SystemStringPtr*)(temp_ptr1 + 0x58)) {
                                                        
                                                        temp_ptr3 = *(SystemStringPtr*)temp_ptr1;
                                                        if (temp_ptr3 == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                                                            temp_ptr3 = (SystemStringPtr)SYSTEM_INVALID_HANDLE;
                                                            temp_ptr5 = string_ptr1;
                                                        } else {
                                                            temp_ptr5 = *(SystemStringPtr*)(temp_ptr1 + 0x10);
                                                        }
                                                        
                                                        // 验证因子标识符
                                                        if (temp_ptr5 == temp_ptr2 + (-0x180a1674b)) {
                                                            temp_ptr5 = temp_ptr5 + (SystemHandle)temp_ptr3;
                                                            temp_ptr4 = temp_ptr1;
                                                            if (temp_ptr5 <= temp_ptr3) break;
                                                            
                                                            // 字符串比较
                                                            temp_handle = (SystemHandle)&UNK_180a1674c - (SystemHandle)temp_ptr3;
                                                            while (*temp_ptr3 == temp_ptr3[temp_handle]) {
                                                                temp_ptr3 = temp_ptr3 + 1;
                                                                if (temp_ptr5 <= temp_ptr3) {
                                                                    // 参数处理完成
                                                                    SystemParameterHandler(temp_ptr4, &UNK_180a0696c, &temp_param1);
                                                                    temp_handle = *(SystemHandle*)(param_1 + SYSTEM_PARAM_OFFSET);
                                                                    *(SystemParameter*)(temp_handle + SYSTEM_PARAMETER_OFFSET) = temp_param1;
                                                                    *(SystemParameter*)(temp_handle + SYSTEM_PARAMETER_OFFSET + 4) = temp_param2;
                                                                    *(SystemParameter*)(temp_handle + SYSTEM_PARAMETER_OFFSET + 8) = temp_param3;
                                                                    *(SystemParameter*)(temp_handle + SYSTEM_PARAMETER_OFFSET + 12) = temp_param4;
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                
                                                // 特征处理循环
                                                feature_name = SYSTEM_FEATURE_IDENTIFIER;
                                                do {
                                                    temp_ptr2 = feature_name;
                                                    feature_name = temp_ptr2 + 1;
                                                } while (*feature_name != '\0');
                                                
                                                for (temp_ptr1 = *(SystemStringPtr*)(current_ptr + SYSTEM_DATA_OFFSET); 
                                                     current_ptr = string_ptr1, temp_ptr1 != (SystemStringPtr)SYSTEM_NULL_POINTER;
                                                     temp_ptr1 = *(SystemStringPtr*)(temp_ptr1 + 0x58)) {
                                                    
                                                    temp_ptr4 = *(SystemStringPtr*)temp_ptr1;
                                                    if (temp_ptr4 == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                                                        temp_ptr4 = (SystemStringPtr)SYSTEM_INVALID_HANDLE;
                                                        temp_ptr5 = string_ptr1;
                                                    } else {
                                                        temp_ptr5 = *(SystemStringPtr*)(temp_ptr1 + 0x10);
                                                    }
                                                    
                                                    // 验证特征标识符
                                                    if (temp_ptr5 == temp_ptr2 + (-0x180a23b1f)) {
                                                        temp_ptr5 = temp_ptr5 + (SystemHandle)temp_ptr4;
                                                        current_ptr = temp_ptr1;
                                                        if (temp_ptr5 <= temp_ptr4) break;
                                                        
                                                        // 字符串比较
                                                        temp_handle = (SystemHandle)&UNK_180a23b20 - (SystemHandle)temp_ptr4;
                                                        while (*temp_ptr4 == temp_ptr4[temp_handle]) {
                                                            temp_ptr4 = temp_ptr4 + 1;
                                                            if (temp_ptr5 <= temp_ptr4) {
                                                                // 特征处理完成
                                                                resource_ptr = &UNK_180a3c3e0;
                                                                if (stack_handle != SYSTEM_NULL_POINTER) {
                                                                    // 警告: 子程序不返回
                                                                    SystemResourceCleaner();
                                                                }
                                                                
                                                                if (current_ptr == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                                                                    return;
                                                                }
                                                                break;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            
                                            // 继续处理
                                            resource_ptr = &UNK_180a3c3e0;
                                            if (stack_handle != SYSTEM_NULL_POINTER) {
                                                // 警告: 子程序不返回
                                                SystemResourceCleaner();
                                            }
                                            
                                            if (current_ptr == (SystemStringPtr)SYSTEM_NULL_POINTER) {
                                                return;
                                            }
                                        } while (true);
                                    }
                                }
                                
                                current_ptr = *(SystemStringPtr*)(current_ptr + 0x58);
                            } while (true);
                        }
                    }
                    
                    data_block_ptr = (SystemDataBlock*)data_block_ptr[0xb];
                } while (data_block_ptr != (SystemDataBlock*)SYSTEM_NULL_POINTER);
            }
        }
    }
    
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803be9f0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
void FUN_1803be9f0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  undefined8 param_5,char param_6)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  char *pcVar14;
  longlong lVar15;
  undefined *puVar16;
  longlong *plVar17;
  longlong lVar18;
  char *pcVar19;
  ulonglong uVar20;
  char *pcVar21;
  char *pcVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  uint uVar26;
  int iVar27;
  undefined4 uVar28;
  longlong lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined4 uStack_110;
  ulonglong uStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  longlong *plStack_e0;
  longlong *plStack_d8;
  longlong *plStack_d0;
  longlong *plStack_c8;
  longlong *plStack_c0;
  longlong *plStack_b8;
  undefined8 uStack_b0;
  longlong *plStack_a8;
  longlong *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong *plStack_88;
  longlong *plStack_80;
  longlong *plStack_78;
  longlong *plStack_70;
  longlong *plStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  
  uStack_90 = 0xfffffffffffffffe;
  uVar28 = 0;
  iVar27 = 0;
  uVar26 = 0;
  lStack_128 = 0;
  do {
    pcVar21 = *(char **)(&UNK_180994200 + lStack_128 * 8);
    if (pcVar21 == (char *)0x0) {
      pcVar22 = *(char **)(param_4 + 0x30);
joined_r0x0001803beb6b:
      if (pcVar22 != (char *)0x0) {
        plVar12 = (longlong *)0x0;
        plVar17 = (longlong *)0x0;
        if (uVar26 == 0) {
          puStack_120 = &UNK_180a3c3e0;
          uStack_108 = 0;
          puStack_118 = (undefined *)0x0;
          uStack_110 = 0;
          pcVar21 = "name";
          do {
            pcVar19 = pcVar21;
            pcVar21 = pcVar19 + 1;
          } while (*pcVar21 != '\0');
          for (puVar4 = *(undefined8 **)(pcVar22 + 0x40); puVar4 != (undefined8 *)0x0;
              puVar4 = (undefined8 *)puVar4[6]) {
            pcVar21 = (char *)*puVar4;
            if (pcVar21 == (char *)0x0) {
              pcVar21 = (char *)0x180d48d24;
              plVar3 = plVar12;
            }
            else {
              plVar3 = (longlong *)puVar4[2];
            }
            if (plVar3 == (longlong *)(pcVar19 + -0x180a03a83)) {
              pcVar9 = pcVar21 + (longlong)plVar3;
              if (pcVar9 <= pcVar21) {
LAB_1803bee65:
                lVar15 = 0x180d48d24;
                if (puVar4[1] != 0) {
                  lVar15 = puVar4[1];
                }
                FUN_180627c50(&puStack_120,lVar15);
                break;
              }
              lVar15 = (longlong)&DAT_180a03a84 - (longlong)pcVar21;
              while (*pcVar21 == pcVar21[lVar15]) {
                pcVar21 = pcVar21 + 1;
                if (pcVar9 <= pcVar21) goto LAB_1803bee65;
              }
            }
          }
          lVar15 = FUN_1800b6de0(_DAT_180c86930,&puStack_120,1);
          uVar2 = _DAT_180c86930;
          if (lVar15 == 0) {
            lVar15 = *(longlong *)(_DAT_180c86898 + 0x2d8);
            if (lVar15 == 0) {
              puStack_100 = &UNK_180a3c3e0;
              uStack_e8 = 0;
              puStack_f8 = (undefined8 *)0x0;
              uStack_f0 = 0;
              puVar4 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
              *(undefined1 *)puVar4 = 0;
              puStack_f8 = puVar4;
              uVar28 = FUN_18064e990(puVar4);
              uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar28);
              *puVar4 = 0x5f64696c61766e69;
              *(undefined4 *)(puVar4 + 1) = 0x6873656d;
              *(undefined1 *)((longlong)puVar4 + 0xc) = 0;
              uStack_f0 = 0xc;
              FUN_1800b6de0(uVar2,&puStack_100,1);
              puStack_100 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
              FUN_18064e900(puVar4);
            }
            puVar16 = &DAT_18098bc73;
            if (puStack_118 != (undefined *)0x0) {
              puVar16 = puStack_118;
            }
            FUN_180627020(&UNK_180a23ad0,puVar16);
            if (param_3 == (longlong *)0x0) {
              uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16);
              plVar17 = (longlong *)FUN_180275090(uVar2);
              plStack_58 = plVar17;
              if (plVar17 != (longlong *)0x0) {
                (**(code **)(*plVar17 + 0x28))(plVar17);
              }
              FUN_180275a60(lVar15,plVar17);
              if (plVar17 != (longlong *)0x0) {
                plStack_a0 = plVar17;
                (**(code **)(*plVar17 + 0x28))(plVar17);
              }
              plStack_a0 = (longlong *)0x0;
              uVar28 = 0;
              if (plVar17 != (longlong *)0x0) {
                (**(code **)(*plVar17 + 0x38))(plVar17);
              }
            }
            else {
              uVar20 = (param_2[1] - *param_2 >> 3) + 1;
              puVar4 = (undefined8 *)param_3[1];
              puVar5 = (undefined8 *)*param_3;
              uVar13 = (longlong)puVar4 - (longlong)puVar5 >> 3;
              if (uVar13 < uVar20) {
                uVar23 = uVar20 - uVar13;
                if (uVar23 <= (ulonglong)(param_3[2] - (longlong)puVar4 >> 3)) {
                  uVar13 = uVar23;
                  if (uVar23 != 0) {
                    for (; uVar13 != 0; uVar13 = uVar13 - 1) {
                      *puVar4 = 0;
                      puVar4 = puVar4 + 1;
                    }
                    puVar4 = (undefined8 *)param_3[1];
                    puVar5 = (undefined8 *)*param_3;
                  }
                  puVar4 = puVar4 + uVar23;
                  puVar6 = puVar5;
                  goto LAB_1803bf352;
                }
                uVar25 = uVar13 * 2;
                if (uVar13 == 0) {
                  uVar25 = 1;
                }
                if (uVar25 < uVar20) {
                  uVar25 = uVar20;
                }
                if (uVar25 == 0) {
                  puVar6 = (undefined8 *)0x0;
                }
                else {
                  puVar6 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,uVar25 * 8);
                  puVar4 = (undefined8 *)param_3[1];
                  puVar5 = (undefined8 *)*param_3;
                }
                if (puVar5 != puVar4) {
                    // WARNING: Subroutine does not return
                  memmove(puVar6,puVar5,(longlong)puVar4 - (longlong)puVar5);
                }
                uVar13 = uVar23;
                puVar4 = puVar6;
                if (uVar23 != 0) {
                  for (; uVar13 != 0; uVar13 = uVar13 - 1) {
                    *puVar4 = 0;
                    puVar4 = puVar4 + 1;
                  }
                }
                if (*param_3 != 0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                *param_3 = (longlong)puVar6;
                param_3[1] = (longlong)(puVar6 + uVar23);
                param_3[2] = (longlong)(puVar6 + uVar25);
              }
              else {
                puVar4 = puVar5 + uVar20;
                puVar6 = puVar5;
LAB_1803bf352:
                param_3[1] = (longlong)puVar4;
              }
              puVar6[param_2[1] - *param_2 >> 3] = 0;
            }
          }
          else {
            plVar17 = *(longlong **)(lVar15 + 0x38);
            lVar18 = 0;
            iVar8 = (int)(*(longlong *)(lVar15 + 0x40) - (longlong)plVar17 >> 4);
            if (0 < iVar8) {
              do {
                if ((*(uint *)(*plVar17 + 0x100) & 0x400000) != 0) {
                  FUN_1802759e0(lVar15,&plStack_e0);
                  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,200,8,3);
                  plVar17 = (longlong *)FUN_18030b420(uVar2,plStack_e0);
                  plStack_68 = plVar17;
                  if (plVar17 != (longlong *)0x0) {
                    (**(code **)(*plVar17 + 0x28))(plVar17);
                    plStack_b8 = plVar17;
                    (**(code **)(*plVar17 + 0x28))(plVar17);
                  }
                  plStack_b8 = (longlong *)0x0;
                  if (plVar17 != (longlong *)0x0) {
                    (**(code **)(*plVar17 + 0x38))(plVar17);
                  }
                  if (plStack_e0 == (longlong *)0x0) goto LAB_1803bf025;
                  lVar15 = *plStack_e0;
                  plVar12 = plStack_e0;
                  goto LAB_1803bf01b;
                }
                lVar18 = lVar18 + 1;
                plVar17 = plVar17 + 2;
              } while (lVar18 < iVar8);
            }
            if ((param_3 == (longlong *)0x0) || (*(longlong *)(pcVar22 + 0x30) != 0)) {
LAB_1803bf07e:
              if ((*(longlong *)(param_1 + 0x18) == 0) || (param_6 == '\0')) {
                uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16);
                plVar17 = (longlong *)FUN_180275370(uVar2,pcVar22);
                plStack_60 = plVar17;
                if (plVar17 != (longlong *)0x0) {
                  (**(code **)(*plVar17 + 0x28))(plVar17);
                }
                FUN_18027ba80(plVar17,param_5);
                if (plVar17 != (longlong *)0x0) {
                  plStack_a8 = plVar17;
                  (**(code **)(*plVar17 + 0x28))(plVar17);
                }
                plStack_a8 = (longlong *)0x0;
                if (plVar17 != (longlong *)0x0) {
                  lVar15 = *plVar17;
                  plVar12 = plVar17;
LAB_1803bf01b:
                  (**(code **)(lVar15 + 0x38))(plVar12);
                }
              }
              else {
                uVar2 = FUN_1802f3a80(param_1,(int)(param_2[1] - *param_2 >> 3) + iVar27,lVar15,
                                      *(undefined8 *)(param_1 + 0x28));
                FUN_180278870(*(undefined8 *)(param_1 + 0x20),uVar2);
                iVar27 = iVar27 + 1;
                plVar17 = plVar12;
              }
            }
            else {
              for (plVar17 = *(longlong **)(pcVar22 + 0x40); plVar17 != (longlong *)0x0;
                  plVar17 = (longlong *)plVar17[6]) {
                lVar18 = 0x180d48d24;
                if (*plVar17 != 0) {
                  lVar18 = *plVar17;
                }
                lVar10 = 0;
                do {
                  lVar11 = lVar10 + 1;
                  if (*(char *)(lVar18 + lVar10) != (&DAT_180a03a84)[lVar10]) goto LAB_1803bf07e;
                  lVar10 = lVar11;
                } while (lVar11 != 5);
                if (plVar17[4] == 0) break;
              }
              uStack_b0 = 0;
              FUN_1802f44a0(param_3,(param_2[1] - *param_2 >> 3) + 1);
              *(longlong *)(*param_3 + (param_2[1] - *param_2 >> 3) * 8) = lVar15;
              plVar17 = plVar12;
            }
          }
LAB_1803bf025:
          puStack_120 = &UNK_180a3c3e0;
          if (puStack_118 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puStack_118 = (undefined *)0x0;
          uStack_108 = uStack_108 & 0xffffffff00000000;
          puStack_120 = &UNK_18098bcb0;
        }
        else if (uVar26 == 1) {
          uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x468,8,3,1,0,iVar27,uVar28);
          plVar17 = (longlong *)FUN_1803dd330(uVar2,pcVar22);
          if (plVar17 != (longlong *)0x0) {
            plStack_c0 = plVar17;
            (**(code **)(*plVar17 + 0x28))(plVar17);
          }
          plStack_c0 = (longlong *)0x0;
        }
        else if (uVar26 == 3) {
          uVar2 = FUN_18062b1e0(_DAT_180c8ed18,200,8,3,3,0,iVar27,uVar28);
          plVar17 = (longlong *)FUN_18030b420(uVar2,0);
          if (plVar17 != (longlong *)0x0) {
            plStack_c8 = plVar17;
            (**(code **)(*plVar17 + 0x28))(plVar17);
          }
          plStack_c8 = (longlong *)0x0;
          (**(code **)(*plVar17 + 0x60))(plVar17,pcVar22);
        }
        else if (uVar26 == 4) {
          uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x168,8,3,4,0,iVar27,uVar28);
          plVar17 = (longlong *)FUN_1802ac390(uVar2);
          plStack_70 = plVar17;
          if (plVar17 != (longlong *)0x0) {
            (**(code **)(*plVar17 + 0x28))(plVar17);
          }
          *(char *)((longlong)plVar17 + 0x164) = '\x01';
          FUN_1802ad110(plVar17,pcVar22);
          plStack_d0 = plVar17;
          (**(code **)(*plVar17 + 0x28))(plVar17);
          plStack_d0 = (longlong *)0x0;
          (**(code **)(*plVar17 + 0x38))(plVar17);
        }
        else {
          plVar17 = plVar12;
          if (uVar26 == 7) {
            plVar17 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x298,8,0xd,7,0,iVar27,uVar28);
            *plVar17 = (longlong)&UNK_180a21690;
            *plVar17 = (longlong)&UNK_180a21720;
            *(undefined4 *)(plVar17 + 1) = 0;
            *plVar17 = (longlong)&UNK_180a14860;
            *(undefined4 *)(plVar17 + 2) = 4;
            plVar17[3] = 0;
            plVar17[4] = 0;
            *(undefined4 *)(plVar17 + 1) = 0;
            plVar17[5] = 0;
            *plVar17 = (longlong)&UNK_180a19770;
            plVar17[0x11] = 0;
            plVar17[0x12] = 0;
            plVar17[0x13] = 0;
            plVar17[0x14] = 0;
            plStack_80 = plVar17 + 0x27;
            *plStack_80 = (longlong)&UNK_18098bcb0;
            plVar17[0x28] = 0;
            *(undefined4 *)(plVar17 + 0x29) = 0;
            *plStack_80 = (longlong)&UNK_180a3c3e0;
            plVar17[0x2a] = 0;
            plVar17[0x28] = 0;
            *(undefined4 *)(plVar17 + 0x29) = 0;
            plVar17[0x2b] = 0;
            plStack_88 = plVar17;
            FUN_1802f6100(plVar17);
            *(undefined4 *)(plVar17 + 1) = 0;
            FUN_1802f6cc0(plVar17,pcVar22);
            plStack_78 = plVar17;
            (**(code **)(*plVar17 + 0x28))(plVar17);
            if ((undefined *)*plVar17 != &UNK_180a19770) {
              (**(code **)((undefined *)*plVar17 + 0x160))(plVar17);
            }
            *(char *)(plVar17 + 0x38) = '\x01';
            plStack_d8 = plVar17;
            (**(code **)(*plVar17 + 0x28))(plVar17);
            plStack_d8 = (longlong *)0x0;
            (**(code **)(*plVar17 + 0x38))(plVar17);
          }
        }
        puVar5 = (undefined8 *)0x0;
        puVar4 = (undefined8 *)param_2[1];
        if (puVar4 < (undefined8 *)param_2[2]) {
          param_2[1] = (longlong)(puVar4 + 1);
          *puVar4 = plVar17;
          if (plVar17 != (longlong *)0x0) {
            (**(code **)(*plVar17 + 0x28))(plVar17);
          }
        }
        else {
          puVar6 = (undefined8 *)*param_2;
          lVar15 = (longlong)puVar4 - (longlong)puVar6 >> 3;
          if (lVar15 == 0) {
            lVar15 = 1;
LAB_1803bf430:
            puVar5 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar15 * 8);
            puVar4 = (undefined8 *)param_2[1];
            puVar6 = (undefined8 *)*param_2;
            puVar24 = puVar5;
          }
          else {
            lVar15 = lVar15 * 2;
            puVar24 = puVar5;
            if (lVar15 != 0) goto LAB_1803bf430;
          }
          for (; puVar6 != puVar4; puVar6 = puVar6 + 1) {
            *puVar5 = *puVar6;
            *puVar6 = 0;
            puVar5 = puVar5 + 1;
          }
          *puVar5 = plVar17;
          if (plVar17 != (longlong *)0x0) {
            (**(code **)(*plVar17 + 0x28))(plVar17);
          }
          plVar12 = (longlong *)param_2[1];
          plVar3 = (longlong *)*param_2;
          if (plVar3 != plVar12) {
            do {
              if ((longlong *)*plVar3 != (longlong *)0x0) {
                (**(code **)(*(longlong *)*plVar3 + 0x38))();
              }
              plVar3 = plVar3 + 1;
            } while (plVar3 != plVar12);
            plVar3 = (longlong *)*param_2;
          }
          if (plVar3 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(plVar3);
          }
          *param_2 = (longlong)puVar24;
          param_2[1] = (longlong)(puVar5 + 1);
          param_2[2] = (longlong)(puVar24 + lVar15);
        }
        if ((param_3 != (longlong *)0x0) && (plVar17 != (longlong *)0x0)) {
          puVar4 = (undefined8 *)param_3[1];
          if (puVar4 < (undefined8 *)param_3[2]) {
            param_3[1] = (longlong)(puVar4 + 1);
            *puVar4 = 0;
          }
          else {
            puVar5 = (undefined8 *)*param_3;
            lVar15 = (longlong)puVar4 - (longlong)puVar5 >> 3;
            if (lVar15 == 0) {
              lVar15 = 1;
LAB_1803bf542:
              puVar6 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar15 * 8,(char)param_3[3]);
              puVar4 = (undefined8 *)param_3[1];
              puVar5 = (undefined8 *)*param_3;
            }
            else {
              lVar15 = lVar15 * 2;
              if (lVar15 != 0) goto LAB_1803bf542;
              puVar6 = (undefined8 *)0x0;
            }
            if (puVar5 != puVar4) {
                    // WARNING: Subroutine does not return
              memmove(puVar6,puVar5,(longlong)puVar4 - (longlong)puVar5);
            }
            *puVar6 = 0;
            if (*param_3 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *param_3 = (longlong)puVar6;
            param_3[1] = (longlong)(puVar6 + 1);
            param_3[2] = (longlong)(puVar6 + lVar15);
          }
        }
        pcVar21 = *(char **)(&UNK_180994200 + lStack_128 * 8);
        if (pcVar21 == (char *)0x0) {
          pcVar22 = *(char **)(pcVar22 + 0x58);
        }
        else {
          cVar1 = *pcVar21;
          pcVar19 = pcVar21;
          while (cVar1 != '\0') {
            pcVar19 = pcVar19 + 1;
            cVar1 = *pcVar19;
          }
          for (pcVar9 = *(char **)(pcVar22 + 0x58); pcVar22 = (char *)0x0, pcVar9 != (char *)0x0;
              pcVar9 = *(char **)(pcVar9 + 0x58)) {
            pcVar14 = *(char **)pcVar9;
            if (pcVar14 == (char *)0x0) {
              pcVar14 = (char *)0x180d48d24;
              pcVar7 = (char *)0x0;
            }
            else {
              pcVar7 = *(char **)(pcVar9 + 0x10);
            }
            if (pcVar7 == pcVar19 + -(longlong)pcVar21) {
              pcVar7 = pcVar7 + (longlong)pcVar14;
              pcVar22 = pcVar9;
              if (pcVar7 <= pcVar14) break;
              lVar15 = (longlong)pcVar21 - (longlong)pcVar14;
              while (*pcVar14 == pcVar14[lVar15]) {
                pcVar14 = pcVar14 + 1;
                if (pcVar7 <= pcVar14) goto LAB_1803bf644;
              }
            }
          }
        }
LAB_1803bf644:
        if (plVar17 != (longlong *)0x0) {
          (**(code **)(*plVar17 + 0x38))(plVar17);
        }
        goto joined_r0x0001803beb6b;
      }
    }
    else {
      cVar1 = *pcVar21;
      pcVar19 = pcVar21;
      while (cVar1 != '\0') {
        pcVar19 = pcVar19 + 1;
        cVar1 = *pcVar19;
      }
      for (pcVar22 = *(char **)(param_4 + 0x30); pcVar22 != (char *)0x0;
          pcVar22 = *(char **)(pcVar22 + 0x58)) {
        pcVar9 = *(char **)pcVar22;
        if (pcVar9 == (char *)0x0) {
          pcVar9 = (char *)0x180d48d24;
          lVar15 = 0;
        }
        else {
          lVar15 = *(longlong *)(pcVar22 + 0x10);
        }
        if (lVar15 == (longlong)pcVar19 - (longlong)pcVar21) {
          pcVar14 = pcVar9 + lVar15;
          if (pcVar14 <= pcVar9) goto joined_r0x0001803beb6b;
          lVar15 = (longlong)pcVar21 - (longlong)pcVar9;
          while (*pcVar9 == pcVar9[lVar15]) {
            pcVar9 = pcVar9 + 1;
            if (pcVar14 <= pcVar9) goto joined_r0x0001803beb6b;
          }
        }
      }
    }
    uVar26 = uVar26 + 1;
    lStack_128 = lStack_128 + 1;
    if (7 < uVar26) {
      if (param_3 != (longlong *)0x0) {
        uStack_98 = 0;
        FUN_1802f44a0(param_3,param_2[1] - *param_2 >> 3,&uStack_98);
      }
      return;
    }
  } while( true );
}






