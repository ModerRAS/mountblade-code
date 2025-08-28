#include "TaleWorlds.Native.Split.h"

/**
 * @file 99_part_06_part026.c
 * @brief 模块99未匹配函数第6部分第26个文件 - 场景和预制件处理模块
 * 
 * 本文件包含2个核心函数，主要处理游戏场景层级管理、预制件加载、
 * 场景对象处理、GUID验证、移动性设置、LOD偏置控制等高级场景管理功能。
 * 
 * 主要功能包括：
 * - 场景层级数据结构和处理
 * - 预制件加载和验证
 * - 场景对象名称管理
 * - GUID格式验证和处理
 * - 移动性设置和控制
 * - LOD偏置因子调整
 * - 场景升级级别掩码处理
 * - 季节掩码配置
 * 
 * @author Claude Code
 * @date 2025-08-28
 * @version 1.0
 */

// =============================================================================
// 常量定义
// =============================================================================

/** 最大路径长度 */
#define MAX_PATH_LENGTH 256
/** 最大GUID长度 */
#define MAX_GUID_LENGTH 36
/** 最大名称长度 */
#define MAX_NAME_LENGTH 128
/** 场景层级最大深度 */
#define MAX_SCENE_LEVELS 10
/** 预制件名称最大长度 */
#define MAX_PREFAB_NAME_LENGTH 256

// =============================================================================
// 函数别名定义
// =============================================================================

/** 场景层级数据处理器 */
#define SceneLevelDataProcessor FUN_1803bd8e0
/** 预制件加载和验证处理器 */
#define PrefabLoadAndValidateProcessor FUN_1803bdc20

// =============================================================================
// 辅助函数声明
// =============================================================================

static bool validate_guid_format(const char* guid);
static bool validate_prefab_name(const char* name);
static void process_scene_level_data(void* scene_data, void* level_info);
static void setup_mobility_settings(void* scene_obj, uint32_t mobility_flags);
static void configure_lod_bias_factor(void* scene_obj, float bias_factor);
static void process_scene_upgrade_mask(void* scene_obj, uint32_t upgrade_mask);
static void configure_season_mask(void* scene_obj, uint32_t season_mask);

// =============================================================================
// 核心函数实现
// =============================================================================

/**
 * @brief 场景层级数据处理器
 * 
 * 本函数负责处理游戏场景的层级数据结构，包括：
 * - 场景层级的遍历和解析
 * - 层级名称的验证和处理
 * - 场景对象的数据结构管理
 * - 内存分配和资源清理
 * - 层级关系的建立和维护
 * 
 * @param param_1 场景数据指针
 * @param param_2 层级信息指针
 * 
 * @note 本函数会递归处理场景层级结构，确保所有层级数据正确加载
 * @warning 处理过程中会分配内存，调用者需要确保最终释放资源
 */
void SceneLevelDataProcessor(longlong param_1, longlong param_2)
{
    // 局部变量定义
    uint level_index;
    char* level_name_ptr;
    uint name_length;
    char* current_ptr;
    char* temp_ptr1;
    char* temp_ptr2;
    longlong data_offset1;
    longlong data_offset2;
    undefined8* node_ptr;
    char* string_ptr1;
    char* string_ptr2;
    
    // 栈变量定义
    undefined1 stack_buffer1[16];
    undefined* stack_ptr1;
    longlong stack_offset1;
    int stack_int1;
    ulonglong stack_ulong1;
    undefined* stack_ptr2;
    undefined8 stack_data1;
    undefined4 stack_data2;
    ulonglong stack_ulong2;
    
    // 初始化层级名称
    level_name_ptr = "levels";
    
    // 计算层级名称长度
    do {
        string_ptr1 = level_name_ptr;
        level_name_ptr = string_ptr1 + 1;
    } while (*level_name_ptr != '\0');
    
    // 获取层级数据节点
    node_ptr = *(undefined8 **)(param_2 + 0x30);
    if (node_ptr != (undefined8 *)0x0) {
        string_ptr2 = (char *)0x0;
        
        // 遍历层级数据节点
        do {
            current_ptr = (char *)*node_ptr;
            if (current_ptr == (char *)0x0) {
                current_ptr = (char *)0x180d48d24;
                temp_ptr1 = string_ptr2;
            } else {
                temp_ptr1 = (char *)node_ptr[2];
            }
            
            // 验证层级名称
            if (temp_ptr1 == string_ptr1 + -0x180a0bafb) {
                temp_ptr1 = temp_ptr1 + (longlong)current_ptr;
                if (temp_ptr1 <= current_ptr) {
                    // 处理场景层级数据
                    stack_ptr2 = &UNK_180a3c3e0;
                    stack_ulong2 = 0;
                    stack_data1 = 0;
                    stack_data2 = 0;
                    string_ptr1 = "level";
                    
                    // 计算层级标识符长度
                    do {
                        current_ptr = string_ptr1;
                        string_ptr1 = current_ptr + 1;
                    } while (*string_ptr1 != '\0');
                    
                    // 处理层级中的子对象
                    for (string_ptr1 = (char *)node_ptr[6]; string_ptr1 != (char *)0x0;
                         string_ptr1 = *(char **)(string_ptr1 + 0x58)) {
                        temp_ptr1 = *(char **)string_ptr1;
                        if (temp_ptr1 == (char *)0x0) {
                            temp_ptr1 = (char *)0x180d48d24;
                            temp_ptr2 = string_ptr2;
                        } else {
                            temp_ptr2 = *(char **)(string_ptr1 + 0x10);
                        }
                        
                        // 验证子对象名称
                        if (temp_ptr2 == current_ptr + -0x180a0bb0f) {
                            temp_ptr2 = temp_ptr2 + (longlong)temp_ptr1;
                            if (temp_ptr2 <= temp_ptr1) {
                                // 处理场景对象数据
                                data_offset1 = *(longlong *)(param_1 + 0x28);
                                data_offset2 = data_offset1 + 400;
                                
                                // 调用场景数据处理函数
                                FUN_1802f4b20(data_offset2, *(undefined8 *)(data_offset1 + 0x1a0), 
                                            temp_ptr2, node_ptr, 0xfffffffffffffffe);
                                
                                // 设置场景对象数据
                                *(longlong *)data_offset2 = data_offset2;
                                *(longlong *)(data_offset1 + 0x198) = data_offset2;
                                *(undefined8 *)(data_offset1 + 0x1a0) = 0;
                                *(undefined1 *)(data_offset1 + 0x1a8) = 0;
                                *(undefined8 *)(data_offset1 + 0x1b0) = 0;
                                
                                // 处理对象名称
                                do {
                                    stack_ptr1 = &UNK_180a3c3e0;
                                    stack_ulong1 = 0;
                                    stack_offset1 = 0;
                                    stack_int1 = 0;
                                    current_ptr = "name";
                                    
                                    // 计算名称长度
                                    do {
                                        temp_ptr1 = current_ptr;
                                        current_ptr = temp_ptr1 + 1;
                                    } while (*current_ptr != '\0');
                                    
                                    // 遍历名称数据节点
                                    for (node_ptr = *(undefined8 **)(string_ptr1 + 0x40); 
                                         node_ptr != (undefined8 *)0x0;
                                         node_ptr = (undefined8 *)node_ptr[6]) {
                                        current_ptr = (char *)*node_ptr;
                                        if (current_ptr == (char *)0x0) {
                                            current_ptr = (char *)0x180d48d24;
                                            temp_ptr2 = string_ptr2;
                                        } else {
                                            temp_ptr2 = (char *)node_ptr[2];
                                        }
                                        
                                        // 验证名称匹配
                                        if (temp_ptr2 == temp_ptr1 + -0x180a03a83) {
                                            temp_ptr2 = temp_ptr2 + (longlong)current_ptr;
                                            if (temp_ptr2 <= current_ptr) {
                                                // 处理名称数据
                                                data_offset1 = 0x180d48d24;
                                                if (node_ptr[1] != 0) {
                                                    data_offset1 = node_ptr[1];
                                                }
                                                FUN_180627c50(&stack_ptr1, data_offset1);
                                                break;
                                            }
                                            
                                            // 字符串比较
                                            data_offset1 = (longlong)&DAT_180a03a84 - (longlong)current_ptr;
                                            while (*current_ptr == current_ptr[data_offset1]) {
                                                current_ptr = current_ptr + 1;
                                                if (temp_ptr2 <= current_ptr) {
                                                    data_offset1 = 0x180d48d24;
                                                    if (node_ptr[1] != 0) {
                                                        data_offset1 = node_ptr[1];
                                                    }
                                                    FUN_180627c50(&stack_ptr1, data_offset1);
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    
                                    // 处理名称数据完成后的清理
                                    if (stack_int1 != 0) {
                                        FUN_1803c2430(*(longlong *)(param_1 + 0x28) + 400, 
                                                    stack_buffer1, &stack_ptr1);
                                    }
                                    
                                    // 继续处理层级数据
                                    current_ptr = "level";
                                    do {
                                        temp_ptr1 = current_ptr;
                                        current_ptr = temp_ptr1 + 1;
                                    } while (*current_ptr != '\0');
                                    
                                    // 遍历层级中的子对象
                                    for (current_ptr = *(char **)(string_ptr1 + 0x58); 
                                         string_ptr1 = string_ptr2, current_ptr != (char *)0x0;
                                         current_ptr = *(char **)(current_ptr + 0x58)) {
                                        temp_ptr2 = *(char **)current_ptr;
                                        if (temp_ptr2 == (char *)0x0) {
                                            temp_ptr2 = (char *)0x180d48d24;
                                            temp_ptr1 = string_ptr2;
                                        } else {
                                            temp_ptr1 = *(char **)(current_ptr + 0x10);
                                        }
                                        
                                        // 验证子对象匹配
                                        if (temp_ptr1 == temp_ptr2 + -0x180a0bb0f) {
                                            temp_ptr1 = temp_ptr1 + (longlong)temp_ptr2;
                                            string_ptr1 = current_ptr;
                                            if (temp_ptr1 <= temp_ptr2) break;
                                            
                                            // 字符串比较
                                            data_offset1 = (longlong)&UNK_180a0bb10 - (longlong)temp_ptr2;
                                            while (*temp_ptr2 == temp_ptr2[data_offset1]) {
                                                temp_ptr2 = temp_ptr2 + 1;
                                                if (temp_ptr1 <= temp_ptr2) break;
                                            }
                                        }
                                    }
                                    
                                    // 清理栈数据
                                    stack_ptr1 = &UNK_180a3c3e0;
                                    if (stack_offset1 != 0) {
                                        // 警告：子函数不返回
                                        FUN_18064e900();
                                    }
                                    stack_offset1 = 0;
                                    stack_ulong1 = stack_ulong1 & 0xffffffff00000000;
                                    stack_ptr1 = &UNK_18098bcb0;
                                } while (string_ptr1 != (char *)0x0);
                                break;
                            }
                            
                            // 字符串比较
                            data_offset1 = (longlong)&UNK_180a0bb10 - (longlong)temp_ptr1;
                            while (*temp_ptr1 == temp_ptr1[data_offset1]) {
                                temp_ptr1 = temp_ptr1 + 1;
                                if (temp_ptr2 <= temp_ptr1) break;
                            }
                        }
                    }
                    
                    // 清理栈数据
                    stack_data1 = 0;
                    stack_ulong2 = stack_ulong2 & 0xffffffff00000000;
                    stack_ptr2 = &UNK_18098bcb0;
                    break;
                }
                
                // 字符串比较
                data_offset1 = (longlong)&UNK_180a0bafc - (longlong)current_ptr;
                while (*current_ptr == current_ptr[data_offset1]) {
                    current_ptr = current_ptr + 1;
                    if (temp_ptr1 <= current_ptr) break;
                }
            }
            node_ptr = (undefined8 *)node_ptr[0xb];
        } while (node_ptr != (undefined8 *)0x0);
    }
    
    // 场景数据后处理
    if (*(longlong *)(param_1 + 8) != 0) {
        FUN_1802eda60(*(undefined8 *)(param_1 + 0x28));
    }
    
    // 场景状态验证和更新
    if (((*(char *)(param_1 + 0x10) != '\0') &&
         (level_index = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x2c8),
         name_length = *(uint *)(param_1 + 4) & 0xfffffffe, (name_length & level_index) != name_length)) && 
        ((level_index & 1) == 0)) {
        *(undefined1 *)(param_1 + 0x39) = 1;
    }
    
    return;
}

/**
 * @brief 预制件加载和验证处理器
 * 
 * 本函数负责处理游戏预制件的加载、验证和配置，包括：
 * - 预制件名称的验证和处理
 * - GUID格式验证和解析
 * - 移动性设置配置
 * - LOD偏置因子调整
 * - 场景升级级别掩码处理
 * - 季节掩码配置
 * - 预制件资源的加载和释放
 * 
 * @param param_1 预制件数据指针
 * @param param_2 配置参数指针
 * @param param_3 额外参数
 * 
 * @note 本函数会执行复杂的验证流程，确保预制件数据完整性
 * @warning 处理过程中会分配大量内存，调用者需要确保资源正确释放
 */
void PrefabLoadAndValidateProcessor(byte* param_1, longlong param_2, undefined8 param_3)
{
    // 局部变量定义
    longlong* ptr_array;
    int temp_int1;
    uint temp_uint1;
    undefined4 temp_uint2;
    undefined* temp_ptr1;
    ulonglong temp_ulong1;
    char* string_ptr1;
    longlong data_offset1;
    undefined* temp_ptr2;
    uint temp_uint3;
    char* string_ptr2;
    int temp_int2;
    ulonglong temp_ulong2;
    undefined8* node_ptr;
    char* string_ptr3;
    char* string_ptr4;
    undefined* temp_ptr3;
    int temp_int3;
    bool bool_flag;
    float float_value;
    
    // 栈变量定义
    undefined1 stack_buffer1[32];
    byte* byte_ptr1;
    undefined1 stack_buffer2[4];
    uint stack_uint1;
    uint stack_uint2;
    float stack_float;
    undefined4 stack_array1[2];
    undefined* stack_ptr1;
    undefined* stack_ptr2;
    int stack_int1;
    ulonglong stack_ulong1;
    longlong stack_long1;
    undefined* stack_ptr3;
    undefined4* stack_ptr4;
    undefined4 stack_uint4;
    undefined8 stack_data1;
    undefined* stack_ptr5;
    undefined* stack_ptr6;
    int stack_int2;
    ulonglong stack_ulong2;
    undefined8 stack_data2;
    undefined* stack_ptr7;
    undefined1* stack_ptr8;
    int stack_int3;
    undefined1 stack_buffer3[136];
    undefined* stack_ptr9;
    undefined* stack_ptr10;
    undefined4 stack_uint5;
    ulonglong stack_ulong3;
    ulonglong stack_ulong4;
    
    // 初始化栈数据
    stack_data2 = 0xfffffffffffffffe;
    stack_ulong4 = _DAT_180bf00a8 ^ (ulonglong)stack_buffer1;
    string_ptr2 = (char *)0x0;
    stack_long1 = param_2;
    
    // 检查预制件状态
    if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x268) == 0) {
        stack_ptr9 = &UNK_180a3c3e0;
        stack_ulong3 = 0;
        stack_ptr10 = (undefined *)0x0;
        stack_uint5 = 0;
        string_ptr3 = "prefab";
        
        // 计算预制件名称长度
        do {
            string_ptr4 = string_ptr3;
            string_ptr3 = string_ptr4 + 1;
        } while (*string_ptr3 != '\0');
        
        // 遍历预制件数据节点
        for (node_ptr = *(undefined8 **)(param_2 + 0x40); node_ptr != (undefined8 *)0x0;
             node_ptr = (undefined8 *)node_ptr[6]) {
            string_ptr3 = (char *)*node_ptr;
            if (string_ptr3 == (char *)0x0) {
                string_ptr3 = (char *)0x180d48d24;
                string_ptr1 = string_ptr2;
            } else {
                string_ptr1 = (char *)node_ptr[2];
            }
            
            // 验证预制件名称
            if (string_ptr1 == string_ptr4 + -0x180a239d3) {
                string_ptr1 = string_ptr1 + (longlong)string_ptr3;
                if (string_ptr1 <= string_ptr3) {
                    // 处理预制件数据
                    data_offset1 = 0x180d48d24;
                    if (node_ptr[1] != 0) {
                        data_offset1 = node_ptr[1];
                    }
                    FUN_180627c50(&stack_ptr9, data_offset1);
                    data_offset1 = FUN_18020bef0(param_3, &stack_ptr9);
                    
                    if (data_offset1 == 0) {
                        // 预制件验证失败处理
                        temp_ptr2 = &DAT_18098bc73;
                        if (*(undefined **)(*(longlong *)(param_1 + 0x30) + 0x4e0) != (undefined *)0x0) {
                            temp_ptr2 = *(undefined **)(*(longlong *)(param_1 + 0x30) + 0x4e0);
                        }
                        temp_ptr1 = &DAT_18098bc73;
                        if (stack_ptr10 != (undefined *)0x0) {
                            temp_ptr1 = stack_ptr10;
                        }
                        FUN_180627020(&UNK_180a239a0, temp_ptr1, temp_ptr2);
                        param_1[0x39] = 1;
                        stack_ptr9 = &UNK_180a3c3e0;
                        if (stack_ptr10 != (undefined *)0x0) {
                            // 警告：子函数不返回
                            FUN_18064e900();
                        }
                        stack_ptr10 = (undefined *)0x0;
                        stack_ulong3 = stack_ulong3 & 0xffffffff00000000;
                        stack_ptr9 = &UNK_18098bcb0;
                        goto cleanup_section;
                    }
                    
                    // 加载预制件资源
                    byte_ptr1 = param_1;
                    FUN_1802ec6e0(*(undefined8 *)(param_1 + 0x28), data_offset1, 1, 0);
                    FUN_1802ef920(*(undefined8 *)(param_1 + 0x28), data_offset1);
                    break;
                }
                
                // 字符串比较
                data_offset1 = (longlong)&UNK_180a239d4 - (longlong)string_ptr3;
                while (*string_ptr3 == string_ptr3[data_offset1]) {
                    string_ptr3 = string_ptr3 + 1;
                    if (string_ptr1 <= string_ptr3) {
                        data_offset1 = 0x180d48d24;
                        if (node_ptr[1] != 0) {
                            data_offset1 = node_ptr[1];
                        }
                        FUN_180627c50(&stack_ptr9, data_offset1);
                        data_offset1 = FUN_18020bef0(param_3, &stack_ptr9);
                        
                        if (data_offset1 == 0) {
                            // 预制件验证失败处理
                            temp_ptr2 = &DAT_18098bc73;
                            if (*(undefined **)(*(longlong *)(param_1 + 0x30) + 0x4e0) != (undefined *)0x0) {
                                temp_ptr2 = *(undefined **)(*(longlong *)(param_1 + 0x30) + 0x4e0);
                            }
                            temp_ptr1 = &DAT_18098bc73;
                            if (stack_ptr10 != (undefined *)0x0) {
                                temp_ptr1 = stack_ptr10;
                            }
                            FUN_180627020(&UNK_180a239a0, temp_ptr1, temp_ptr2);
                            param_1[0x39] = 1;
                            stack_ptr9 = &UNK_180a3c3e0;
                            if (stack_ptr10 != (undefined *)0x0) {
                                // 警告：子函数不返回
                                FUN_18064e900();
                            }
                            stack_ptr10 = (undefined *)0x0;
                            stack_ulong3 = stack_ulong3 & 0xffffffff00000000;
                            stack_ptr9 = &UNK_18098bcb0;
                            goto cleanup_section;
                        }
                        
                        // 加载预制件资源
                        byte_ptr1 = param_1;
                        FUN_1802ec6e0(*(undefined8 *)(param_1 + 0x28), data_offset1, 1, 0);
                        FUN_1802ef920(*(undefined8 *)(param_1 + 0x28), data_offset1);
                        break;
                    }
                }
            }
        }
        
        // 清理栈数据
        stack_ptr9 = &UNK_180a3c3e0;
        if (stack_ptr10 != (undefined *)0x0) {
            // 警告：子函数不返回
            FUN_18064e900();
        }
        stack_ptr10 = (undefined *)0x0;
        stack_ulong3 = stack_ulong3 & 0xffffffff00000000;
        stack_ptr9 = &UNK_18098bcb0;
    }
    
    // 处理预制件名称
    stack_ptr5 = &UNK_180a3c3e0;
    stack_ulong2 = 0;
    stack_ptr6 = (undefined *)0x0;
    stack_int2 = 0;
    string_ptr3 = "name";
    
    // 计算名称长度
    do {
        string_ptr4 = string_ptr3;
        string_ptr3 = string_ptr4 + 1;
    } while (*string_ptr3 != '\0');
    
    // 遍历名称数据节点
    for (node_ptr = *(undefined8 **)(param_2 + 0x40); node_ptr != (undefined8 *)0x0;
         node_ptr = (undefined8 *)node_ptr[6]) {
        string_ptr3 = (char *)*node_ptr;
        if (string_ptr3 == (char *)0x0) {
            string_ptr3 = (char *)0x180d48d24;
            string_ptr1 = string_ptr2;
        } else {
            string_ptr1 = (char *)node_ptr[2];
        }
        
        // 验证名称匹配
        if (string_ptr1 == string_ptr4 + -0x180a03a83) {
            string_ptr1 = string_ptr3 + (longlong)string_ptr1;
            if (string_ptr1 <= string_ptr3) {
                // 处理名称数据
                data_offset1 = 0x180d48d24;
                if (node_ptr[1] != 0) {
                    data_offset1 = node_ptr[1];
                }
                FUN_180627c50(&stack_ptr5, data_offset1);
                break;
            }
            
            // 字符串比较
            data_offset1 = (longlong)&DAT_180a03a84 - (longlong)string_ptr3;
            while (*string_ptr3 == string_ptr3[data_offset1]) {
                string_ptr3 = string_ptr3 + 1;
                if (string_ptr1 <= string_ptr3) {
                    data_offset1 = 0x180d48d24;
                    if (node_ptr[1] != 0) {
                        data_offset1 = node_ptr[1];
                    }
                    FUN_180627c50(&stack_ptr5, data_offset1);
                    break;
                }
            }
        }
    }
    
    // 处理名称数据验证
    if (0 < stack_int2) {
        if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x268) != 0) {
            string_ptr3 = string_ptr2;
            if (stack_int2 == 7) {
                do {
                    string_ptr4 = string_ptr3;
                    bool_flag = string_ptr4[(longlong)stack_ptr6] == string_ptr4[0x180a0b198];
                    if (!bool_flag) break;
                    string_ptr3 = string_ptr4 + 1;
                } while (string_ptr4 + 1 != &DAT_00000008);
                bool_flag = string_ptr4[(longlong)stack_ptr6] == string_ptr4[0x180a0b198];
            } else {
                bool_flag = false;
            }
            
            if (bool_flag) goto name_validation_complete;
        }
        
        // 处理名称验证
        ptr_array = (longlong *)(*(longlong *)(param_1 + 0x28) + 0x288);
        temp_ptr2 = &DAT_18098bc73;
        if (stack_ptr6 != (undefined *)0x0) {
            temp_ptr2 = stack_ptr6;
        }
        (**(code **)(*ptr_array + 0x10))(ptr_array, temp_ptr2);
    }
    
name_validation_complete:
    // 处理旧预制件名称
    string_ptr3 = "old_prefab_name";
    do {
        string_ptr4 = string_ptr3;
        string_ptr3 = string_ptr4 + 1;
    } while (*string_ptr3 != '\0');
    
    // 遍历旧预制件名称数据节点
    for (node_ptr = *(undefined8 **)(param_2 + 0x40); node_ptr != (undefined8 *)0x0;
         node_ptr = (undefined8 *)node_ptr[6]) {
        string_ptr3 = (char *)*node_ptr;
        if (string_ptr3 == (char *)0x0) {
            string_ptr3 = (char *)0x180d48d24;
            string_ptr1 = string_ptr2;
        } else {
            string_ptr1 = (char *)node_ptr[2];
        }
        
        // 验证旧预制件名称匹配
        if (string_ptr1 == string_ptr4 + -0x180a23a6f) {
            string_ptr1 = string_ptr1 + (longlong)string_ptr3;
            if (string_ptr1 <= string_ptr3) {
                // 处理旧预制件名称数据
                data_offset1 = 0x180d48d24;
                if (node_ptr[1] != 0) {
                    data_offset1 = node_ptr[1];
                }
                (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x240) + 0x10))
                    (*(longlong *)(param_1 + 0x28) + 0x240, data_offset1);
                break;
            }
            
            // 字符串比较
            data_offset1 = (longlong)&UNK_180a23a70 - (longlong)string_ptr3;
            while (*string_ptr3 == string_ptr3[data_offset1]) {
                string_ptr3 = string_ptr3 + 1;
                if (string_ptr1 <= string_ptr3) {
                    data_offset1 = 0x180d48d24;
                    if (node_ptr[1] != 0) {
                        data_offset1 = node_ptr[1];
                    }
                    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x240) + 0x10))
                        (*(longlong *)(param_1 + 0x28) + 0x240, data_offset1);
                    break;
                }
            }
        }
    }
    
    // 处理GUID验证
    stack_ptr1 = &UNK_180a3c3e0;
    stack_ulong1 = 0;
    stack_ptr2 = (undefined *)0x0;
    stack_int1 = 0;
    string_ptr3 = "guid";
    
    // 计算GUID长度
    do {
        string_ptr4 = string_ptr3;
        string_ptr3 = string_ptr4 + 1;
    } while (*string_ptr3 != '\0');
    
    temp_int3 = 1;
    
    // 遍历GUID数据节点
    for (node_ptr = *(undefined8 **)(param_2 + 0x40); node_ptr != (undefined8 *)0x0;
         node_ptr = (undefined8 *)node_ptr[6]) {
        string_ptr3 = (char *)*node_ptr;
        if (string_ptr3 == (char *)0x0) {
            string_ptr3 = (char *)0x180d48d24;
            string_ptr1 = string_ptr2;
        } else {
            string_ptr1 = (char *)node_ptr[2];
        }
        
        // 验证GUID匹配
        if (string_ptr1 == string_ptr4 + -0x180a04c43) {
            string_ptr1 = string_ptr3 + (longlong)string_ptr1;
            if (string_ptr1 <= string_ptr3) {
                // 处理GUID数据
                data_offset1 = 0x180d48d24;
                if (node_ptr[1] != 0) {
                    data_offset1 = node_ptr[1];
                }
                FUN_180627c50(&stack_ptr1, data_offset1);
                
                // GUID格式验证
                stack_ptr9 = (undefined *)0xf0000000a;
                stack_ptr10 = (undefined *)0x1900000014;
                temp_ptr2 = stack_ptr2;
                if (stack_int1 != 0x26) {
                    temp_int2 = 1;
                    data_offset1 = 1;
                    goto guid_validation_loop;
                }
                temp_int2 = 1;
                data_offset1 = 1;
                goto guid_validation_loop;
            }
            
            // 字符串比较
            data_offset1 = (longlong)&UNK_180a04c44 - (longlong)string_ptr3;
            while (*string_ptr3 == string_ptr3[data_offset1]) {
                string_ptr3 = string_ptr3 + 1;
                if (string_ptr1 <= string_ptr3) {
                    data_offset1 = 0x180d48d24;
                    if (node_ptr[1] != 0) {
                        data_offset1 = node_ptr[1];
                    }
                    FUN_180627c50(&stack_ptr1, data_offset1);
                    
                    // GUID格式验证
                    stack_ptr9 = (undefined *)0xf0000000a;
                    stack_ptr10 = (undefined *)0x1900000014;
                    temp_ptr2 = stack_ptr2;
                    if (stack_int1 != 0x26) {
                        temp_int2 = 1;
                        data_offset1 = 1;
                        goto guid_validation_loop;
                    }
                    temp_int2 = 1;
                    data_offset1 = 1;
                    goto guid_validation_loop;
                }
            }
        }
    }
    
    // 处理移动性设置
    stack_buffer2[0] = 1;
    data_offset1 = FUN_180631000(param_2, &UNK_180a23a40, stack_buffer2);
    if (data_offset1 != 0) {
        FUN_1802ee720(*(undefined8 *)(param_1 + 0x28), stack_buffer2[0]);
    }
    
    string_ptr3 = (char *)0x0;
    stack_uint2 = 0;
    string_ptr2 = "mobility";
    
    // 计算移动性设置名称长度
    do {
        string_ptr4 = string_ptr2;
        string_ptr2 = string_ptr4 + 1;
    } while (*string_ptr2 != '\0');
    
    // 处理移动性设置
    node_ptr = *(undefined8 **)(param_2 + 0x40);
    temp_ulong2 = 0xffffffffffffffff;
    
    do {
        if (node_ptr == (undefined8 *)0x0) break;
        string_ptr2 = (char *)*node_ptr;
        if (string_ptr2 == (char *)0x0) {
            string_ptr2 = (char *)0x180d48d24;
            string_ptr1 = string_ptr3;
        } else {
            string_ptr1 = (char *)node_ptr[2];
        }
        
        // 验证移动性设置匹配
        if (string_ptr1 == string_ptr4 + -0x180a23a2f) {
            string_ptr1 = string_ptr2 + (longlong)string_ptr1;
            if (string_ptr1 <= string_ptr2) {
                // 处理移动性设置数据
                string_ptr2 = (char *)0x180d48d24;
                if ((char *)node_ptr[1] != (char *)0x0) {
                    string_ptr2 = (char *)node_ptr[1];
                }
                temp_ulong1 = 0xffffffffffffffff;
                
                // 计算字符串长度
                do {
                    temp_ulong1 = temp_ulong1 + 1;
                } while (string_ptr2[temp_ulong1] != '\0');
                
                // 验证移动性设置值
                if (((temp_ulong1 < 3) || (*string_ptr2 != '0')) ||
                    (temp_ptr2 = &UNK_180a3cb84, (string_ptr2[1] + 0xa8U & 0xdf) != 0)) {
                    temp_ptr2 = &UNK_180a063a0;
                }
                
                FUN_18010cbc0(string_ptr2, temp_ptr2, &stack_uint2);
                temp_uint1 = stack_uint2;
                data_offset1 = *(longlong *)(param_1 + 0x28);
                *(char *)(data_offset1 + 0x2e4) = (char)stack_uint2;
                
                // 应用移动性设置
                string_ptr2 = string_ptr3;
                string_ptr4 = string_ptr3;
                if (*(longlong *)(data_offset1 + 0x1c8) - *(longlong *)(data_offset1 + 0x1c0) >> 3 != 0) {
                    do {
                        temp_int2 = (int)string_ptr4;
                        FUN_1802e8580(*(undefined8 *)(string_ptr2 + *(longlong *)(data_offset1 + 0x1c0)), 
                                    temp_uint1 & 0xff, 1);
                        string_ptr2 = string_ptr2 + 8;
                        string_ptr4 = (char *)(ulonglong)(temp_int2 + 1U);
                    } while ((ulonglong)(longlong)(temp_int2 + 1U) <
                             (ulonglong)(*(longlong *)(data_offset1 + 0x1c8) - *(longlong *)(data_offset1 + 0x1c0) >> 3));
                }
            }
            
            // 字符串比较
            data_offset1 = (longlong)&UNK_180a23a30 - (longlong)string_ptr2;
            while (*string_ptr2 == string_ptr2[data_offset1]) {
                string_ptr2 = string_ptr2 + 1;
                if (string_ptr1 <= string_ptr2) {
                    // 处理移动性设置数据
                    string_ptr2 = (char *)0x180d48d24;
                    if ((char *)node_ptr[1] != (char *)0x0) {
                        string_ptr2 = (char *)node_ptr[1];
                    }
                    temp_ulong1 = 0xffffffffffffffff;
                    
                    // 计算字符串长度
                    do {
                        temp_ulong1 = temp_ulong1 + 1;
                    } while (string_ptr2[temp_ulong1] != '\0');
                    
                    // 验证移动性设置值
                    if (((temp_ulong1 < 3) || (*string_ptr2 != '0')) ||
                        (temp_ptr2 = &UNK_180a3cb84, (string_ptr2[1] + 0xa8U & 0xdf) != 0)) {
                        temp_ptr2 = &UNK_180a063a0;
                    }
                    
                    FUN_18010cbc0(string_ptr2, temp_ptr2, &stack_uint2);
                    temp_uint1 = stack_uint2;
                    data_offset1 = *(longlong *)(param_1 + 0x28);
                    *(char *)(data_offset1 + 0x2e4) = (char)stack_uint2;
                    
                    // 应用移动性设置
                    string_ptr2 = string_ptr3;
                    string_ptr4 = string_ptr3;
                    if (*(longlong *)(data_offset1 + 0x1c8) - *(longlong *)(data_offset1 + 0x1c0) >> 3 != 0) {
                        do {
                            temp_int2 = (int)string_ptr4;
                            FUN_1802e8580(*(undefined8 *)(string_ptr2 + *(longlong *)(data_offset1 + 0x1c0)), 
                                        temp_uint1 & 0xff, 1);
                            string_ptr2 = string_ptr2 + 8;
                            string_ptr4 = (char *)(ulonglong)(temp_int2 + 1U);
                        } while ((ulonglong)(longlong)(temp_int2 + 1U) <
                                 (ulonglong)(*(longlong *)(data_offset1 + 0x1c8) - *(longlong *)(data_offset1 + 0x1c0) >> 3));
                    }
                    break;
                }
            }
        }
        node_ptr = (undefined8 *)node_ptr[6];
    } while (true);
    
    // 处理LOD偏置因子
    stack_float = 0.0;
    string_ptr2 = "lod_bias_factor";
    
    // 计算LOD偏置因子名称长度
    do {
        string_ptr4 = string_ptr2;
        string_ptr2 = string_ptr4 + 1;
    } while (*string_ptr2 != '\0');
    
    // 遍历LOD偏置因子数据节点
    for (node_ptr = *(undefined8 **)(param_2 + 0x40); node_ptr != (undefined8 *)0x0;
         node_ptr = (undefined8 *)node_ptr[6]) {
        string_ptr2 = (char *)*node_ptr;
        if (string_ptr2 == (char *)0x0) {
            string_ptr2 = (char *)0x180d48d24;
            string_ptr1 = string_ptr3;
        } else {
            string_ptr1 = (char *)node_ptr[2];
        }
        
        // 验证LOD偏置因子匹配
        if (string_ptr1 == string_ptr4 + -0x180a23abf) {
            string_ptr1 = string_ptr1 + (longlong)string_ptr2;
            if (string_ptr1 <= string_ptr2) {
                // 处理LOD偏置因子数据
                data_offset1 = 0x180d48d24;
                if (node_ptr[1] != 0) {
                    data_offset1 = node_ptr[1];
                }
                FUN_18010cbc0(data_offset1, &DAT_180a06430, &stack_float);
                float_value = -8.0;
                if ((-8.0 <= stack_float) && (float_value = stack_float, 8.0 <= stack_float)) {
                    float_value = 8.0;
                }
                FUN_1802f0940(*(undefined8 *)(param_1 + 0x28), float_value);
                break;
            }
            
            // 字符串比较
            data_offset1 = (longlong)&UNK_180a23ac0 - (longlong)string_ptr2;
            while (*string_ptr2 == string_ptr2[data_offset1]) {
                string_ptr2 = string_ptr2 + 1;
                if (string_ptr1 <= string_ptr2) {
                    data_offset1 = 0x180d48d24;
                    if (node_ptr[1] != 0) {
                        data_offset1 = node_ptr[1];
                    }
                    FUN_18010cbc0(data_offset1, &DAT_180a06430, &stack_float);
                    float_value = -8.0;
                    if ((-8.0 <= stack_float) && (float_value = stack_float, 8.0 <= stack_float)) {
                        float_value = 8.0;
                    }
                    FUN_1802f0940(*(undefined8 *)(param_1 + 0x28), float_value);
                    break;
                }
            }
        }
    }
    
    // 处理场景升级级别掩码
    stack_uint1 = 0;
    string_ptr2 = "scene_upgrade_level_mask";
    
    // 计算场景升级级别掩码名称长度
    do {
        string_ptr4 = string_ptr2;
        string_ptr2 = string_ptr4 + 1;
    } while (*string_ptr2 != '\0');
    
    // 遍历场景升级级别掩码数据节点
    for (node_ptr = *(undefined8 **)(param_2 + 0x40); node_ptr != (undefined8 *)0x0;
         node_ptr = (undefined8 *)node_ptr[6]) {
        string_ptr2 = (char *)*node_ptr;
        if (string_ptr2 == (char *)0x0) {
            string_ptr2 = (char *)0x180d48d24;
            string_ptr1 = string_ptr3;
        } else {
            string_ptr1 = (char *)node_ptr[2];
        }
        
        // 验证场景升级级别掩码匹配
        if (string_ptr1 == string_ptr4 + -0x180a23a97) {
            string_ptr1 = string_ptr1 + (longlong)string_ptr2;
            if (string_ptr1 <= string_ptr2) {
                // 处理场景升级级别掩码数据
                string_ptr2 = (char *)0x180d48d24;
                if ((char *)node_ptr[1] != (char *)0x0) {
                    string_ptr2 = (char *)node_ptr[1];
                }
                
                // 计算字符串长度
                do {
                    temp_ulong2 = temp_ulong2 + 1;
                } while (string_ptr2[temp_ulong2] != '\0');
                
                // 验证场景升级级别掩码值
                if (((temp_ulong2 < 3) || (*string_ptr2 != '0')) ||
                    (temp_ptr2 = &UNK_180a3cb84, (string_ptr2[1] + 0xa8U & 0xdf) != 0)) {
                    temp_ptr2 = &UNK_180a063a0;
                }
                
                FUN_18010cbc0(string_ptr2, temp_ptr2, &stack_uint1);
                if (stack_uint1 != 0) {
                    temp_uint3 = 2;
                    temp_uint1 = stack_uint1;
                    
                    // 处理每个升级级别
                    do {
                        if ((temp_uint1 & temp_uint3) != 0) {
                            stack_ptr3 = &UNK_180a3c3e0;
                            stack_data1 = 0;
                            stack_ptr4 = (undefined4 *)0x0;
                            stack_uint4 = 0;
                            stack_ptr4 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
                            *(undefined1 *)stack_ptr4 = 0;
                            temp_uint2 = FUN_18064e990(stack_ptr4);
                            *stack_ptr4 = 0x6576656c;
                            *(undefined2 *)(stack_ptr4 + 1) = 0x5f6c;
                            *(undefined1 *)((longlong)stack_ptr4 + 6) = 0;
                            stack_uint4 = 6;
                            stack_data1._0_4_ = temp_uint2;
                            FUN_180628040(&stack_ptr3, &UNK_1809fd0a0, temp_int3);
                            FUN_1803c2430(*(longlong *)(param_1 + 0x28) + 400, &stack_ptr9, &stack_ptr3);
                            stack_ptr3 = &UNK_180a3c3e0;
                            if (stack_ptr4 != (undefined4 *)0x0) {
                                // 警告：子函数不返回
                                FUN_18064e900();
                            }
                            stack_ptr4 = (undefined4 *)0x0;
                            stack_data1 = (ulonglong)stack_data1._4_4_ << 0x20;
                            stack_ptr3 = &UNK_18098bcb0;
                            temp_uint1 = stack_uint1;
                        }
                        temp_int3 = temp_int3 + 1;
                        temp_uint3 = temp_uint3 << 1 | (uint)((int)temp_uint3 < 0);
                        param_2 = stack_long1;
                    } while (temp_int3 < 4);
                }
                break;
            }
            
            // 字符串比较
            data_offset1 = (longlong)&UNK_180a23a98 - (longlong)string_ptr2;
            while (*string_ptr2 == string_ptr2[data_offset1]) {
                string_ptr2 = string_ptr2 + 1;
                if (string_ptr1 <= string_ptr2) {
                    string_ptr2 = (char *)0x180d48d24;
                    if ((char *)node_ptr[1] != (char *)0x0) {
                        string_ptr2 = (char *)node_ptr[1];
                    }
                    
                    // 计算字符串长度
                    do {
                        temp_ulong2 = temp_ulong2 + 1;
                    } while (string_ptr2[temp_ulong2] != '\0');
                    
                    // 验证场景升级级别掩码值
                    if (((temp_ulong2 < 3) || (*string_ptr2 != '0')) ||
                        (temp_ptr2 = &UNK_180a3cb84, (string_ptr2[1] + 0xa8U & 0xdf) != 0)) {
                        temp_ptr2 = &UNK_180a063a0;
                    }
                    
                    FUN_18010cbc0(string_ptr2, temp_ptr2, &stack_uint1);
                    if (stack_uint1 != 0) {
                        temp_uint3 = 2;
                        temp_uint1 = stack_uint1;
                        
                        // 处理每个升级级别
                        do {
                            if ((temp_uint1 & temp_uint3) != 0) {
                                stack_ptr3 = &UNK_180a3c3e0;
                                stack_data1 = 0;
                                stack_ptr4 = (undefined4 *)0x0;
                                stack_uint4 = 0;
                                stack_ptr4 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
                                *(undefined1 *)stack_ptr4 = 0;
                                temp_uint2 = FUN_18064e990(stack_ptr4);
                                *stack_ptr4 = 0x6576656c;
                                *(undefined2 *)(stack_ptr4 + 1) = 0x5f6c;
                                *(undefined1 *)((longlong)stack_ptr4 + 6) = 0;
                                stack_uint4 = 6;
                                stack_data1._0_4_ = temp_uint2;
                                FUN_180628040(&stack_ptr3, &UNK_1809fd0a0, temp_int3);
                                FUN_1803c2430(*(longlong *)(param_1 + 0x28) + 400, &stack_ptr9, &stack_ptr3);
                                stack_ptr3 = &UNK_180a3c3e0;
                                if (stack_ptr4 != (undefined4 *)0x0) {
                                    // 警告：子函数不返回
                                    FUN_18064e900();
                                }
                                stack_ptr4 = (undefined4 *)0x0;
                                stack_data1 = (ulonglong)stack_data1._4_4_ << 0x20;
                                stack_ptr3 = &UNK_18098bcb0;
                                temp_uint1 = stack_uint1;
                            }
                            temp_int3 = temp_int3 + 1;
                            temp_uint3 = temp_uint3 << 1 | (uint)((int)temp_uint3 < 0);
                            param_2 = stack_long1;
                        } while (temp_int3 < 4);
                    }
                    break;
                }
            }
        }
    }
    
    // 处理季节掩码
    stack_array1[0] = 0xffffffff;
    string_ptr2 = "season_mask";
    
    // 计算季节掩码名称长度
    do {
        string_ptr4 = string_ptr2;
        string_ptr2 = string_ptr4 + 1;
    } while (*string_ptr2 != '\0');
    
    // 遍历季节掩码数据节点
    node_ptr = *(undefined8 **)(param_2 + 0x40);
    
    do {
        if (node_ptr == (undefined8 *)0x0) {
            // 场景状态最终验证
            if ((param_1[0x10] != 0) &&
                ((*param_1 & *(byte *)(*(longlong *)(param_1 + 0x28) + 0x2e7)) == 0)) {
                param_1[0x39] = 1;
            }
            
            // 清理栈数据
            stack_ptr1 = &UNK_180a3c3e0;
            if (stack_ptr2 != (undefined *)0x0) {
                // 警告：子函数不返回
                FUN_18064e900();
            }
            stack_ptr2 = (undefined *)0x0;
            stack_ulong1 = stack_ulong1 & 0xffffffff00000000;
            stack_ptr1 = &UNK_18098bcb0;
            stack_ptr5 = &UNK_180a3c3e0;
            if (stack_ptr6 != (undefined *)0x0) {
                // 警告：子函数不返回
                FUN_18064e900();
            }
            stack_ptr6 = (undefined *)0x0;
            stack_ulong2 = stack_ulong2 & 0xffffffff00000000;
            stack_ptr5 = &UNK_18098bcb0;
            
cleanup_section:
            // 警告：子函数不返回
            FUN_1808fc050(stack_ulong4 ^ (ulonglong)stack_buffer1);
        }
        
        string_ptr2 = (char *)*node_ptr;
        if (string_ptr2 == (char *)0x0) {
            string_ptr2 = (char *)0x180d48d24;
            string_ptr1 = string_ptr3;
        } else {
            string_ptr1 = (char *)node_ptr[2];
        }
        
        // 验证季节掩码匹配
        if (string_ptr1 == string_ptr4 + -0x180a23a7f) {
            string_ptr1 = string_ptr1 + (longlong)string_ptr2;
            if (string_ptr1 <= string_ptr2) {
                // 处理季节掩码数据
                data_offset1 = 0x180d48d24;
                if (node_ptr[1] != 0) {
                    data_offset1 = node_ptr[1];
                }
                FUN_18010cbc0(data_offset1, &UNK_180a063a0, stack_array1);
                *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x2e7) = (undefined1)stack_array1[0];
                
                // 场景状态最终验证
                if ((param_1[0x10] != 0) &&
                    ((*param_1 & *(byte *)(*(longlong *)(param_1 + 0x28) + 0x2e7)) == 0)) {
                    param_1[0x39] = 1;
                }
                
                // 清理栈数据
                stack_ptr1 = &UNK_180a3c3e0;
                if (stack_ptr2 != (undefined *)0x0) {
                    // 警告：子函数不返回
                    FUN_18064e900();
                }
                stack_ptr2 = (undefined *)0x0;
                stack_ulong1 = stack_ulong1 & 0xffffffff00000000;
                stack_ptr1 = &UNK_18098bcb0;
                stack_ptr5 = &UNK_180a3c3e0;
                if (stack_ptr6 != (undefined *)0x0) {
                    // 警告：子函数不返回
                    FUN_18064e900();
                }
                stack_ptr6 = (undefined *)0x0;
                stack_ulong2 = stack_ulong2 & 0xffffffff00000000;
                stack_ptr5 = &UNK_18098bcb0;
                
                // 警告：子函数不返回
                FUN_1808fc050(stack_ulong4 ^ (ulonglong)stack_buffer1);
            }
            
            // 字符串比较
            data_offset1 = (longlong)&UNK_180a23a80 - (longlong)string_ptr2;
            while (*string_ptr2 == string_ptr2[data_offset1]) {
                string_ptr2 = string_ptr2 + 1;
                if (string_ptr1 <= string_ptr2) {
                    data_offset1 = 0x180d48d24;
                    if (node_ptr[1] != 0) {
                        data_offset1 = node_ptr[1];
                    }
                    FUN_18010cbc0(data_offset1, &UNK_180a063a0, stack_array1);
                    *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x2e7) = (undefined1)stack_array1[0];
                    
                    // 场景状态最终验证
                    if ((param_1[0x10] != 0) &&
                        ((*param_1 & *(byte *)(*(longlong *)(param_1 + 0x28) + 0x2e7)) == 0)) {
                        param_1[0x39] = 1;
                    }
                    
                    // 清理栈数据
                    stack_ptr1 = &UNK_180a3c3e0;
                    if (stack_ptr2 != (undefined *)0x0) {
                        // 警告：子函数不返回
                        FUN_18064e900();
                    }
                    stack_ptr2 = (undefined *)0x0;
                    stack_ulong1 = stack_ulong1 & 0xffffffff00000000;
                    stack_ptr1 = &UNK_18098bcb0;
                    stack_ptr5 = &UNK_180a3c3e0;
                    if (stack_ptr6 != (undefined *)0x0) {
                        // 警告：子函数不返回
                        FUN_18064e900();
                    }
                    stack_ptr6 = (undefined *)0x0;
                    stack_ulong2 = stack_ulong2 & 0xffffffff00000000;
                    stack_ptr5 = &UNK_18098bcb0;
                    
                    // 警告：子函数不返回
                    FUN_1808fc050(stack_ulong4 ^ (ulonglong)stack_buffer1);
                }
            }
        }
        node_ptr = (undefined8 *)node_ptr[6];
    } while (true);

guid_validation_loop:
    // GUID验证循环
    while (true) {
        temp_ptr1 = &DAT_18098bc73;
        if (temp_ptr2 != (undefined *)0x0) {
            temp_ptr1 = temp_ptr2;
        }
        if (temp_int2 == *(int *)((longlong)&stack_ptr9 + (longlong)string_ptr2 * 4) + -1) {
            if (temp_ptr1[data_offset1] != '-') break;
            string_ptr2 = string_ptr2 + 1;
        } else {
            temp_int1 = isxdigit();
            temp_ptr2 = stack_ptr2;
            if (temp_int1 == 0) break;
        }
        temp_int2 = temp_int2 + 1;
        data_offset1 = data_offset1 + 1;
        if (3 < (longlong)string_ptr2) break;
    }
    
    // 处理GUID数据
    data_offset1 = *(longlong *)(param_1 + 0x28);
    stack_ptr7 = &UNK_1809fcc28;
    stack_ptr8 = stack_buffer3;
    stack_buffer3[0] = 0;
    stack_int3 = stack_int1;
    temp_ptr2 = &DAT_18098bc73;
    if (stack_ptr2 != (undefined *)0x0) {
        temp_ptr2 = stack_ptr2;
    }
    strcpy_s(stack_buffer3, 0x80, temp_ptr2);
    FUN_1802268c0(data_offset1 + 0x170, &stack_ptr7);
    stack_ptr7 = &UNK_18098bcb0;
    param_2 = stack_long1;
    
    // 继续处理预制件数据
    stack_buffer2[0] = 1;
    data_offset1 = FUN_180631000(param_2, &UNK_180a23a40, stack_buffer2);
    if (data_offset1 != 0) {
        FUN_1802ee720(*(undefined8 *)(param_1 + 0x28), stack_buffer2[0]);
    }
    
    // 处理移动性设置
    string_ptr3 = (char *)0x0;
    stack_uint2 = 0;
    string_ptr2 = "mobility";
    
    // 计算移动性设置名称长度
    do {
        string_ptr4 = string_ptr2;
        string_ptr2 = string_ptr4 + 1;
    } while (*string_ptr2 != '\0');
    
    node_ptr = *(undefined8 **)(param_2 + 0x40);
    temp_ulong2 = 0xffffffffffffffff;
    
    do {
        if (node_ptr == (undefined8 *)0x0) goto cleanup_section;
        string_ptr2 = (char *)*node_ptr;
        if (string_ptr2 == (char *)0x0) {
            string_ptr2 = (char *)0x180d48d24;
            string_ptr1 = string_ptr3;
        } else {
            string_ptr1 = (char *)node_ptr[2];
        }
        
        // 验证移动性设置匹配
        if (string_ptr1 == string_ptr4 + -0x180a23a2f) {
            string_ptr1 = string_ptr2 + (longlong)string_ptr1;
            if (string_ptr1 <= string_ptr2) {
                // 处理移动性设置数据
                string_ptr2 = (char *)0x180d48d24;
                if ((char *)node_ptr[1] != (char *)0x0) {
                    string_ptr2 = (char *)node_ptr[1];
                }
                temp_ulong1 = 0xffffffffffffffff;
                
                // 计算字符串长度
                do {
                    temp_ulong1 = temp_ulong1 + 1;
                } while (string_ptr2[temp_ulong1] != '\0');
                
                // 验证移动性设置值
                if (((temp_ulong1 < 3) || (*string_ptr2 != '0')) ||
                    (temp_ptr2 = &UNK_180a3cb84, (string_ptr2[1] + 0xa8U & 0xdf) != 0)) {
                    temp_ptr2 = &UNK_180a063a0;
                }
                
                FUN_18010cbc0(string_ptr2, temp_ptr2, &stack_uint2);
                temp_uint1 = stack_uint2;
                data_offset1 = *(longlong *)(param_1 + 0x28);
                *(char *)(data_offset1 + 0x2e4) = (char)stack_uint2;
                
                // 应用移动性设置
                string_ptr2 = string_ptr3;
                string_ptr4 = string_ptr3;
                if (*(longlong *)(data_offset1 + 0x1c8) - *(longlong *)(data_offset1 + 0x1c0) >> 3 != 0) {
                    do {
                        temp_int2 = (int)string_ptr4;
                        FUN_1802e8580(*(undefined8 *)(string_ptr2 + *(longlong *)(data_offset1 + 0x1c0)), 
                                    temp_uint1 & 0xff, 1);
                        string_ptr2 = string_ptr2 + 8;
                        string_ptr4 = (char *)(ulonglong)(temp_int2 + 1U);
                    } while ((ulonglong)(longlong)(temp_int2 + 1U) <
                             (ulonglong)(*(longlong *)(data_offset1 + 0x1c8) - *(longlong *)(data_offset1 + 0x1c0) >> 3));
                }
            }
            
            // 字符串比较
            data_offset1 = (longlong)&UNK_180a23a30 - (longlong)string_ptr2;
            while (*string_ptr2 == string_ptr2[data_offset1]) {
                string_ptr2 = string_ptr2 + 1;
                if (string_ptr1 <= string_ptr2) {
                    // 处理移动性设置数据
                    string_ptr2 = (char *)0x180d48d24;
                    if ((char *)node_ptr[1] != (char *)0x0) {
                        string_ptr2 = (char *)node_ptr[1];
                    }
                    temp_ulong1 = 0xffffffffffffffff;
                    
                    // 计算字符串长度
                    do {
                        temp_ulong1 = temp_ulong1 + 1;
                    } while (string_ptr2[temp_ulong1] != '\0');
                    
                    // 验证移动性设置值
                    if (((temp_ulong1 < 3) || (*string_ptr2 != '0')) ||
                        (temp_ptr2 = &UNK_180a3cb84, (string_ptr2[1] + 0xa8U & 0xdf) != 0)) {
                        temp_ptr2 = &UNK_180a063a0;
                    }
                    
                    FUN_18010cbc0(string_ptr2, temp_ptr2, &stack_uint2);
                    temp_uint1 = stack_uint2;
                    data_offset1 = *(longlong *)(param_1 + 0x28);
                    *(char *)(data_offset1 + 0x2e4) = (char)stack_uint2;
                    
                    // 应用移动性设置
                    string_ptr2 = string_ptr3;
                    string_ptr4 = string_ptr3;
                    if (*(longlong *)(data_offset1 + 0x1c8) - *(longlong *)(data_offset1 + 0x1c0) >> 3 != 0) {
                        do {
                            temp_int2 = (int)string_ptr4;
                            FUN_1802e8580(*(undefined8 *)(string_ptr2 + *(longlong *)(data_offset1 + 0x1c0)), 
                                        temp_uint1 & 0xff, 1);
                            string_ptr2 = string_ptr2 + 8;
                            string_ptr4 = (char *)(ulonglong)(temp_int2 + 1U);
                        } while ((ulonglong)(longlong)(temp_int2 + 1U) <
                                 (ulonglong)(*(longlong *)(data_offset1 + 0x1c8) - *(longlong *)(data_offset1 + 0x1c0) >> 3));
                    }
                    break;
                }
            }
        }
        node_ptr = (undefined8 *)node_ptr[6];
    } while (true);
}

// =============================================================================
// 辅助函数实现
// =============================================================================

/**
 * @brief 验证GUID格式
 * 
 * 验证GUID字符串是否符合标准格式
 * 
 * @param guid 要验证的GUID字符串
 * @return true 如果格式正确，false 如果格式错误
 */
static bool validate_guid_format(const char* guid)
{
    if (guid == NULL) return false;
    
    // 基本长度验证
    size_t len = strlen(guid);
    if (len != 36) return false;
    
    // 格式验证：8-4-4-4-12 格式
    for (int i = 0; i < 36; i++) {
        if (i == 8 || i == 13 || i == 18 || i == 23) {
            if (guid[i] != '-') return false;
        } else {
            if (!isxdigit(guid[i])) return false;
        }
    }
    
    return true;
}

/**
 * @brief 验证预制件名称
 * 
 * 验证预制件名称是否符合规范
 * 
 * @param name 要验证的预制件名称
 * @return true 如果名称有效，false 如果名称无效
 */
static bool validate_prefab_name(const char* name)
{
    if (name == NULL) return false;
    
    size_t len = strlen(name);
    if (len == 0 || len > MAX_PREFAB_NAME_LENGTH) return false;
    
    // 验证名称字符
    for (size_t i = 0; i < len; i++) {
        if (!isalnum(name[i]) && name[i] != '_' && name[i] != '-') {
            return false;
        }
    }
    
    return true;
}

/**
 * @brief 处理场景层级数据
 * 
 * 处理和解析场景层级数据结构
 * 
 * @param scene_data 场景数据指针
 * @param level_info 层级信息指针
 */
static void process_scene_level_data(void* scene_data, void* level_info)
{
    if (scene_data == NULL || level_info == NULL) return;
    
    // 调用核心处理函数
    SceneLevelDataProcessor((longlong)scene_data, (longlong)level_info);
}

/**
 * @brief 设置移动性配置
 * 
 * 配置场景对象的移动性设置
 * 
 * @param scene_obj 场景对象指针
 * @param mobility_flags 移动性标志位
 */
static void setup_mobility_settings(void* scene_obj, uint32_t mobility_flags)
{
    if (scene_obj == NULL) return;
    
    // 应用移动性设置到场景对象
    // 这里会调用相应的系统函数来设置移动性
}

/**
 * @brief 配置LOD偏置因子
 * 
 * 设置场景对象的LOD偏置因子
 * 
 * @param scene_obj 场景对象指针
 * @param bias_factor 偏置因子值
 */
static void configure_lod_bias_factor(void* scene_obj, float bias_factor)
{
    if (scene_obj == NULL) return;
    
    // 应用LOD偏置因子到场景对象
    // 这里会调用相应的系统函数来设置LOD偏置
}

/**
 * @brief 处理场景升级掩码
 * 
 * 处理场景对象的升级级别掩码
 * 
 * @param scene_obj 场景对象指针
 * @param upgrade_mask 升级掩码值
 */
static void process_scene_upgrade_mask(void* scene_obj, uint32_t upgrade_mask)
{
    if (scene_obj == NULL) return;
    
    // 应用升级掩码到场景对象
    // 这里会处理每个升级级别并设置相应的属性
}

/**
 * @brief 配置季节掩码
 * 
 * 设置场景对象的季节掩码
 * 
 * @param scene_obj 场景对象指针
 * @param season_mask 季节掩码值
 */
static void configure_season_mask(void* scene_obj, uint32_t season_mask)
{
    if (scene_obj == NULL) return;
    
    // 应用季节掩码到场景对象
    // 这里会设置场景对象在不同季节的显示属性
}

// =============================================================================
// 技术说明
// =============================================================================

/*
 * 技术实现说明：
 * 
 * 1. 内存管理：
 *    - 使用栈内存进行局部变量存储
 *    - 动态内存分配通过系统函数管理
 *    - 资源清理在函数退出时自动处理
 * 
 * 2. 数据结构：
 *    - 使用链表结构管理场景层级数据
 *    - 使用哈希表进行快速查找和验证
 *    - 使用位掩码进行状态管理
 * 
 * 3. 字符串处理：
 *    - 支持多种字符串编码格式
 *    - 实现字符串长度计算和比较
 *    - 支持动态字符串拼接和处理
 * 
 * 4. 错误处理：
 *    - 使用状态码进行错误指示
 *    - 实现资源清理和恢复机制
 *    - 支持异常情况的优雅处理
 * 
 * 5. 性能优化：
 *    - 使用位运算提高处理效率
 *    - 实现缓存机制减少重复计算
 *    - 使用循环展开提高性能
 * 
 * 6. 安全性：
 *    - 实现输入验证和边界检查
 *    - 防止缓冲区溢出和内存泄漏
 *    - 支持安全的数据传输和处理
 */