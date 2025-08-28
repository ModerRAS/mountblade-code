/**
 * @file 99_part_06_part026.c
 * @brief 模块99未匹配函数第6部分第26个文件
 * @author Claude Code
 * @date 2025-08-28
 * 
 * 该文件包含2个核心函数，涵盖场景数据处理、参数配置、状态管理、
 * 资源初始化、数据验证、字符串处理、内存管理等高级系统功能。
 * 
 * 主要功能：
 * - 场景级别数据加载和处理
 * - 预制体参数配置和管理
 * - 对象属性设置和验证
 * - 内存管理和资源清理
 * - 字符串处理和路径构建
 */

#include "TaleWorlds.Native.Split.h"

/**
 * @brief 常量定义
 */
#define SCENE_LEVEL_STRING "levels"
#define LEVEL_STRING "level"
#define NAME_STRING "name"
#define PREFAB_STRING "prefab"
#define OLD_PREFAB_NAME_STRING "old_prefab_name"
#define GUID_STRING "guid"
#define MOBILITY_STRING "mobility"
#define LOD_BIAS_FACTOR_STRING "lod_bias_factor"
#define SCENE_UPGRADE_LEVEL_MASK_STRING "scene_upgrade_level_mask"
#define SEASON_MASK_STRING "season_mask"
#define LEVEL_STRING_LENGTH 5
#define NAME_STRING_LENGTH 4
#define GUID_STRING_LENGTH 4
#define MOBILITY_STRING_LENGTH 8
#define SEASON_MASK_STRING_LENGTH 10

/**
 * @brief 内存偏移量常量
 */
#define SCENE_DATA_OFFSET 0x28
#define SCENE_DATA_SIZE_OFFSET 0x198
#define SCENE_DATA_CAPACITY_OFFSET 0x1a0
#define SCENE_DATA_FLAG_OFFSET 0x1a8
#define SCENE_DATA_RESOURCE_OFFSET 0x1b0
#define SCENE_LEVEL_DATA_OFFSET 0x2c8
#define SCENE_MOBILITY_OFFSET 0x2e4
#define SCENE_SEASON_MASK_OFFSET 0x2e7
#define SCENE_PREFAB_OFFSET 0x268
#define SCENE_NAME_OFFSET 0x288
#define SCENE_GUID_OFFSET 0x170
#define SCENE_LEVEL_LIST_OFFSET 0x1c0
#define SCENE_LEVEL_LIST_END_OFFSET 0x1c8

/**
 * @brief 数值常量
 */
#define LEVEL_DATA_BLOCK_SIZE 400
#define LEVEL_DATA_CAPACITY 0xfffffffffffffffe
#define GUID_MAX_LENGTH 24
#define MOBILITY_FLAG_MASK 0xfffffffe
#define SCENE_UPGRADE_LEVEL_MASK_MAX 4
#define LOD_BIAS_FACTOR_MIN -8.0f
#define LOD_BIAS_FACTOR_MAX 8.0f

/**
 * @brief 函数别名定义
 */
typedef void (*SceneLevelDataProcessor)(void* scene_data, void* level_data, uint64_t flags);
typedef void (*PrefabConfigManager)(void* prefab_data, void* config_data, uint64_t config_flags);
typedef void (*ObjectPropertySetter)(void* object_data, void* property_data, uint64_t property_flags);
typedef void (*MemoryResourceCleaner)(void* memory_data, uint64_t cleanup_flags);
typedef void (*StringPathBuilder)(void* path_data, const char* path_string, uint64_t path_flags);

/**
 * @brief 场景级别数据处理器
 * 
 * 该函数负责处理场景中的级别数据，包括级别信息的加载、验证和管理。
 * 它遍历场景中的所有级别，处理每个级别的属性和关联数据。
 * 
 * @param scene_data 场景数据指针
 * @param level_config 级别配置数据指针
 */
void SceneLevelDataProcessor(void* scene_data, void* level_config)
{
    char* level_string = SCENE_LEVEL_STRING;
    char* level_string_end = level_string;
    
    // 计算字符串长度
    while (*level_string_end != '\0') {
        level_string_end++;
    }
    
    void** level_data_array = *(void**)((char*)level_config + 0x30);
    
    if (level_data_array != NULL) {
        void* current_level_data = NULL;
        
        do {
            char* level_name = (char*)*level_data_array;
            char* level_attribute;
            
            if (level_name == NULL) {
                level_name = (char*)0x180d48d24; // 默认字符串地址
                level_attribute = current_level_data;
            } else {
                level_attribute = (char*)level_data_array[2];
            }
            
            // 验证级别属性
            if (level_attribute == level_string_end - 0x180a0bafb) {
                level_attribute = level_attribute + (long long)level_name;
                
                if (level_attribute <= level_name) {
                    // 处理级别数据块
                    void* scene_base = *(void**)((char*)scene_data + SCENE_DATA_OFFSET);
                    void* level_data_block = (char*)scene_base + LEVEL_DATA_BLOCK_SIZE;
                    
                    // 调用级别数据处理函数
                    SceneLevelDataProcessor processor = (SceneLevelDataProcessor)FUN_1802f4b20;
                    processor(level_data_block, *(void**)((char*)scene_base + SCENE_DATA_CAPACITY_OFFSET), 
                             level_attribute, level_data_array, LEVEL_DATA_CAPACITY);
                    
                    // 设置数据块指针
                    *(void**)level_data_block = level_data_block;
                    *(void**)((char*)scene_base + SCENE_DATA_SIZE_OFFSET) = level_data_block;
                    *(void**)((char*)scene_base + SCENE_DATA_CAPACITY_OFFSET) = NULL;
                    *(char*)((char*)scene_base + SCENE_DATA_FLAG_OFFSET) = 0;
                    *(void**)((char*)scene_base + SCENE_DATA_RESOURCE_OFFSET) = NULL;
                    
                    // 处理级别中的名称属性
                    char* name_string = NAME_STRING;
                    char* name_string_end = name_string;
                    
                    while (*name_string_end != '\0') {
                        name_string_end++;
                    }
                    
                    for (void* name_data = *(void**)((char*)level_data_array + 0x40); 
                         name_data != NULL; 
                         name_data = *(void**)((char*)name_data + 0x58)) {
                        
                        char* current_name = *(char**)name_data;
                        char* name_attr;
                        
                        if (current_name == NULL) {
                            current_name = (char*)0x180d48d24;
                            name_attr = current_level_data;
                        } else {
                            name_attr = *(char**)((char*)name_data + 0x10);
                        }
                        
                        if (name_attr == name_string_end - 0x180a03a83) {
                            name_attr = name_attr + (long long)current_name;
                            
                            if (name_attr <= current_name) {
                                // 处理名称数据
                                void* name_value = 0x180d48d24;
                                if (level_data_array[1] != 0) {
                                    name_value = (void*)level_data_array[1];
                                }
                                
                                // 调用名称处理函数
                                void* name_processor = &system_data_buffer_ptr;
                                FUN_180627c50(&name_processor, (long long)name_value);
                                break;
                            }
                        }
                    }
                    
                    // 处理子级别数据
                    char* sublevel_string = LEVEL_STRING;
                    char* sublevel_string_end = sublevel_string;
                    
                    while (*sublevel_string_end != '\0') {
                        sublevel_string_end++;
                    }
                    
                    for (void* sublevel_data = *(void**)((char*)name_data + 0x58); 
                         sublevel_data != NULL; 
                         sublevel_data = *(void**)((char*)sublevel_data + 0x58)) {
                        
                        char* sublevel_name = *(char**)sublevel_data;
                        char* sublevel_attr;
                        
                        if (sublevel_name == NULL) {
                            sublevel_name = (char*)0x180d48d24;
                            sublevel_attr = current_level_data;
                        } else {
                            sublevel_attr = *(char**)((char*)sublevel_data + 0x10);
                        }
                        
                        if (sublevel_attr == sublevel_string_end - 0x180a0bb0f) {
                            sublevel_attr = sublevel_attr + (long long)sublevel_name;
                            
                            if (sublevel_attr <= sublevel_name) {
                                // 处理子级别数据
                                void* sublevel_base = *(void**)((char*)scene_data + SCENE_DATA_OFFSET);
                                void* sublevel_data_block = (char*)sublevel_base + LEVEL_DATA_BLOCK_SIZE;
                                
                                // 调用子级别数据处理函数
                                SceneLevelDataProcessor sublevel_processor = (SceneLevelDataProcessor)FUN_1802f4b20;
                                sublevel_processor(sublevel_data_block, *(void**)((char*)sublevel_base + SCENE_DATA_CAPACITY_OFFSET), 
                                                  sublevel_attr, level_data_array, LEVEL_DATA_CAPACITY);
                                
                                // 设置子级别数据块指针
                                *(void**)sublevel_data_block = sublevel_data_block;
                                *(void**)((char*)sublevel_base + SCENE_DATA_SIZE_OFFSET) = sublevel_data_block;
                                *(void**)((char*)sublevel_base + SCENE_DATA_CAPACITY_OFFSET) = NULL;
                                *(char*)((char*)sublevel_base + SCENE_DATA_FLAG_OFFSET) = 0;
                                *(void**)((char*)sublevel_base + SCENE_DATA_RESOURCE_OFFSET) = NULL;
                                break;
                            }
                        }
                    }
                    
                    break;
                }
            }
            
            // 移动到下一个级别数据
            level_data_array = (void**)level_data_array[0xb];
        } while (level_data_array != NULL);
    }
    
    // 清理场景数据
    if (*(long long*)((char*)scene_data + 8) != 0) {
        FUN_1802eda60(*(void**)((char*)scene_data + SCENE_DATA_OFFSET));
    }
    
    // 验证场景状态
    if ((*(char*)((char*)scene_data + 0x10) != '\0') &&
        ((*(uint*)((char*)(*(long long*)((char*)scene_data + SCENE_DATA_OFFSET)) + SCENE_LEVEL_DATA_OFFSET) & 
          (*(uint*)((char*)scene_data + 4) & MOBILITY_FLAG_MASK)) != 
         (*(uint*)((char*)scene_data + 4) & MOBILITY_FLAG_MASK)) &&
        ((*(uint*)((char*)(*(long long*)((char*)scene_data + SCENE_DATA_OFFSET)) + SCENE_LEVEL_DATA_OFFSET) & 1) == 0)) {
        
        *(char*)((char*)scene_data + 0x39) = 1;
    }
}

/**
 * @brief 预制体配置管理器
 * 
 * 该函数负责管理预制体的配置数据，包括预制体的加载、验证和属性设置。
 * 它处理预制体的各种属性，如名称、GUID、移动性等。
 * 
 * @param prefab_data 预制体数据指针
 * @param config_data 配置数据指针
 * @param config_flags 配置标志
 */
void PrefabConfigManager(void* prefab_data, void* config_data, uint64_t config_flags)
{
    uint64_t config_stack[4];
    config_stack[0] = 0xfffffffffffffffe;
    config_stack[1] = GET_SECURITY_COOKIE() ^ (uint64_t)config_data;
    
    char* config_string = NULL;
    long long config_offset = (long long)config_data;
    
    // 检查预制体数据状态
    if (*(long long*)((char*)(*(long long*)((char*)prefab_data + SCENE_DATA_OFFSET)) + SCENE_PREFAB_OFFSET) == 0) {
        // 处理预制体属性
        void* prefab_attr_data = &system_data_buffer_ptr;
        uint64_t attr_flags = 0;
        void* attr_value = NULL;
        
        char* prefab_string = PREFAB_STRING;
        char* prefab_string_end = prefab_string;
        
        while (*prefab_string_end != '\0') {
            prefab_string_end++;
        }
        
        // 遍历预制体属性
        for (void** attr_array = *(void***)((char*)config_data + 0x40); 
             attr_array != NULL; 
             attr_array = (void**)attr_array[6]) {
            
            char* attr_name = (char*)*attr_array;
            char* attr_type;
            
            if (attr_name == NULL) {
                attr_name = (char*)0x180d48d24;
                attr_type = config_string;
            } else {
                attr_type = (char*)attr_array[2];
            }
            
            if (attr_type == prefab_string_end - 0x180a239d3) {
                attr_type = attr_type + (long long)attr_name;
                
                if (attr_type <= attr_name) {
                    // 处理预制体属性值
                    void* attr_value_data = 0x180d48d24;
                    if (attr_array[1] != 0) {
                        attr_value_data = (void*)attr_array[1];
                    }
                    
                    // 调用属性处理函数
                    FUN_180627c50(&prefab_attr_data, (long long)attr_value_data);
                    
                    // 验证属性值
                    long long validation_result = FUN_18020bef0(config_flags, &prefab_attr_data);
                    
                    if (validation_result == 0) {
                        // 处理验证失败的情况
                        void* error_handler = &system_buffer_ptr;
                        if (*(void**)((char*)(*(long long*)((char*)prefab_data + 0x30)) + 0x4e0) != NULL) {
                            error_handler = *(void**)((char*)(*(long long*)((char*)prefab_data + 0x30)) + 0x4e0);
                        }
                        
                        void* current_attr_value = &system_buffer_ptr;
                        if (attr_value != NULL) {
                            current_attr_value = attr_value;
                        }
                        
                        FUN_180627020(&unknown_var_2528_ptr, current_attr_value, error_handler);
                        ((char*)prefab_data)[0x39] = 1;
                        
                        // 清理属性数据
                        prefab_attr_data = &system_data_buffer_ptr;
                        if (attr_value != NULL) {
                            FUN_18064e900();
                        }
                        
                        attr_value = NULL;
                        attr_flags = attr_flags & 0xffffffff00000000;
                        prefab_attr_data = &system_state_ptr;
                        goto config_complete;
                    }
                    
                    // 处理验证成功的情况
                    void* prefab_base = (char*)prefab_data;
                    FUN_1802ec6e0(*(void**)((char*)prefab_data + SCENE_DATA_OFFSET), validation_result, 1, 0);
                    FUN_1802ef920(*(void**)((char*)prefab_data + SCENE_DATA_OFFSET), validation_result);
                    break;
                }
            }
        }
        
        // 清理属性数据
        prefab_attr_data = &system_data_buffer_ptr;
        if (attr_value != NULL) {
            FUN_18064e900();
        }
        
        attr_value = NULL;
        attr_flags = attr_flags & 0xffffffff00000000;
        prefab_attr_data = &system_state_ptr;
    }
    
    // 处理名称属性
    void* name_attr_data = &system_data_buffer_ptr;
    uint64_t name_attr_flags = 0;
    void* name_attr_value = NULL;
    int name_attr_count = 0;
    
    char* name_string = NAME_STRING;
    char* name_string_end = name_string;
    
    while (*name_string_end != '\0') {
        name_string_end++;
    }
    
    // 遍历名称属性
    for (void** name_attr_array = *(void***)((char*)config_data + 0x40); 
         name_attr_array != NULL; 
         name_attr_array = (void**)name_attr_array[6]) {
        
        char* name_attr_name = (char*)*name_attr_array;
        char* name_attr_type;
        
        if (name_attr_name == NULL) {
            name_attr_name = (char*)0x180d48d24;
            name_attr_type = config_string;
        } else {
            name_attr_type = (char*)name_attr_array[2];
        }
        
        if (name_attr_type == name_string_end - 0x180a03a83) {
            name_attr_type = name_attr_name + (long long)name_attr_type;
            
            if (name_attr_type <= name_attr_name) {
                // 处理名称属性值
                void* name_attr_value_data = 0x180d48d24;
                if (name_attr_array[1] != 0) {
                    name_attr_value_data = (void*)name_attr_array[1];
                }
                
                FUN_180627c50(&name_attr_data, (long long)name_attr_value_data);
                break;
            }
        }
    }
    
    // 处理名称属性数据
    if (name_attr_count > 0) {
        if (*(long long*)((char*)(*(long long*)((char*)prefab_data + SCENE_DATA_OFFSET)) + SCENE_PREFAB_OFFSET) != 0) {
            // 验证名称属性
            bool name_valid = false;
            if (name_attr_count == 7) {
                char* name_compare = config_string;
                do {
                    bool char_match = name_compare[(long long)name_attr_value] == name_compare[0x180a0b198];
                    if (!char_match) break;
                    name_compare++;
                } while (name_compare != &system_memory_0008);
                
                name_valid = name_compare[(long long)name_attr_value] == name_compare[0x180a0b198];
            }
            
            if (!name_valid) {
                // 调用名称处理函数
                void** name_handler = (void**)((char*)(*(long long*)((char*)prefab_data + SCENE_DATA_OFFSET)) + SCENE_NAME_OFFSET);
                void* name_processor = &system_buffer_ptr;
                
                if (name_attr_value != NULL) {
                    name_processor = name_attr_value;
                }
                
                ((void(**)(void**, void*))(*name_handler + 0x10))(name_handler, name_processor);
            }
        }
    }
    
    // 处理旧预制体名称属性
    char* old_prefab_name_string = OLD_PREFAB_NAME_STRING;
    char* old_prefab_name_end = old_prefab_name_string;
    
    while (*old_prefab_name_end != '\0') {
        old_prefab_name_end++;
    }
    
    // 遍历旧预制体名称属性
    for (void** old_name_attr_array = *(void***)((char*)config_data + 0x40); 
         old_name_attr_array != NULL; 
         old_name_attr_array = (void**)old_name_attr_array[6]) {
        
        char* old_name_attr_name = (char*)*old_name_attr_array;
        char* old_name_attr_type;
        
        if (old_name_attr_name == NULL) {
            old_name_attr_name = (char*)0x180d48d24;
            old_name_attr_type = config_string;
        } else {
            old_name_attr_type = (char*)old_name_attr_array[2];
        }
        
        if (old_name_attr_type == old_prefab_name_end - 0x180a23a6f) {
            old_name_attr_type = old_name_attr_type + (long long)old_name_attr_name;
            
            if (old_name_attr_type <= old_name_attr_name) {
                // 处理旧预制体名称属性值
                void* old_name_attr_value_data = 0x180d48d24;
                if (old_name_attr_array[1] != 0) {
                    old_name_attr_value_data = (void*)old_name_attr_array[1];
                }
                
                // 调用旧名称处理函数
                void** old_name_handler = (void**)((char*)(*(long long*)((char*)prefab_data + SCENE_DATA_OFFSET)) + 0x240);
                ((void(**)(void**, void*))(*old_name_handler + 0x10))(old_name_handler, old_name_attr_value_data);
                break;
            }
        }
    }
    
    // 处理GUID属性
    void* guid_attr_data = &system_data_buffer_ptr;
    uint64_t guid_attr_flags = 0;
    void* guid_attr_value = NULL;
    int guid_attr_count = 0;
    
    char* guid_string = GUID_STRING;
    char* guid_string_end = guid_string;
    
    while (*guid_string_end != '\0') {
        guid_string_end++;
    }
    
    int guid_index = 1;
    
    // 遍历GUID属性
    for (void** guid_attr_array = *(void***)((char*)config_data + 0x40); 
         guid_attr_array != NULL; 
         guid_attr_array = (void**)guid_attr_array[6]) {
        
        char* guid_attr_name = (char*)*guid_attr_array;
        char* guid_attr_type;
        
        if (guid_attr_name == NULL) {
            guid_attr_name = (char*)0x180d48d24;
            guid_attr_type = config_string;
        } else {
            guid_attr_type = (char*)guid_attr_array[2];
        }
        
        if (guid_attr_type == guid_string_end - 0x180a04c43) {
            guid_attr_type = guid_attr_name + (long long)guid_attr_type;
            
            if (guid_attr_type <= guid_attr_name) {
                // 处理GUID属性值
                void* guid_attr_value_data = 0x180d48d24;
                if (guid_attr_array[1] != 0) {
                    guid_attr_value_data = (void*)guid_attr_array[1];
                }
                
                FUN_180627c50(&guid_attr_data, (long long)guid_attr_value_data);
                
                // 验证GUID格式
                if (guid_attr_count == 0x26) {
                    int guid_validator = 1;
                    long long guid_length = 1;
                    
                    // 验证GUID字符
                    while (true) {
                        void* guid_processor = &system_buffer_ptr;
                        if (guid_attr_value != NULL) {
                            guid_processor = guid_attr_value;
                        }
                        
                        if (guid_validator == *(int*)((long long)&config_stack[0] + (long long)config_string * 4) - 1) {
                            if (guid_processor[guid_length] != '-') break;
                            config_string++;
                        } else {
                            int hex_check = isxdigit();
                            if (hex_check == 0) break;
                        }
                        
                        guid_validator++;
                        guid_length++;
                        if (guid_length > GUID_MAX_LENGTH) break;
                    }
                    
                    // 处理验证后的GUID
                    void* guid_base = *(void**)((char*)prefab_data + SCENE_DATA_OFFSET);
                    void* guid_processor_data = &unknown_var_3432_ptr;
                    char guid_buffer[128];
                    guid_buffer[0] = 0;
                    
                    int guid_buffer_size = guid_attr_count;
                    void* guid_final_value = &system_buffer_ptr;
                    
                    if (guid_attr_value != NULL) {
                        guid_final_value = guid_attr_value;
                    }
                    
                    strcpy_s(guid_buffer, 0x80, guid_final_value);
                    FUN_1802268c0((char*)guid_base + SCENE_GUID_OFFSET, &guid_processor_data);
                }
                
                break;
            }
        }
    }
    
config_complete:
    
    // 处理移动性属性
    uint32_t mobility_value = 0;
    char* mobility_string = MOBILITY_STRING;
    char* mobility_string_end = mobility_string;
    
    while (*mobility_string_end != '\0') {
        mobility_string_end++;
    }
    
    // 遍历移动性属性
    for (void** mobility_attr_array = *(void***)((char*)config_data + 0x40); 
         mobility_attr_array != NULL; 
         mobility_attr_array = (void**)mobility_attr_array[6]) {
        
        char* mobility_attr_name = (char*)*mobility_attr_array;
        char* mobility_attr_type;
        
        if (mobility_attr_name == NULL) {
            mobility_attr_name = (char*)0x180d48d24;
            mobility_attr_type = config_string;
        } else {
            mobility_attr_type = (char*)mobility_attr_array[2];
        }
        
        if (mobility_attr_type == mobility_string_end - 0x180a23a2f) {
            mobility_attr_type = mobility_attr_name + (long long)mobility_attr_type;
            
            if (mobility_attr_type <= mobility_attr_name) {
                // 处理移动性属性值
                char* mobility_value_data = (char*)0x180d48d24;
                if ((char*)mobility_attr_array[1] != (char*)0x0) {
                    mobility_value_data = (char*)mobility_attr_array[1];
                }
                
                // 验证移动性值
                uint64_t mobility_length = 0xffffffffffffffff;
                do {
                    mobility_length++;
                } while (mobility_value_data[mobility_length] != '\0');
                
                void* mobility_processor;
                if ((mobility_length < 3) || (*mobility_value_data != '0') ||
                    ((mobility_value_data[1] + 0xa8U & 0xdf) != 0)) {
                    mobility_processor = &unknown_var_2208_ptr;
                } else {
                    mobility_processor = &unknown_var_5412_ptr;
                }
                
                FUN_18010cbc0(mobility_value_data, mobility_processor, &mobility_value);
                
                // 设置移动性值
                void* mobility_base = *(void**)((char*)prefab_data + SCENE_DATA_OFFSET);
                *(char*)((char*)mobility_base + SCENE_MOBILITY_OFFSET) = (char)mobility_value;
                
                // 处理级别列表中的移动性值
                if (*(long long*)((char*)mobility_base + SCENE_LEVEL_LIST_END_OFFSET) - 
                    *(long long*)((char*)mobility_base + SCENE_LEVEL_LIST_OFFSET) >> 3 != 0) {
                    
                    char* level_list_ptr = config_string;
                    char* level_list_end = config_string;
                    
                    do {
                        int level_index = (int)level_list_ptr;
                        FUN_1802e8580(*(void**)((char*)config_string + *(long long*)((char*)mobility_base + SCENE_LEVEL_LIST_OFFSET)), 
                                     mobility_value & 0xff, 1);
                        config_string += 8;
                        level_list_end = (char*)(uint64_t)(level_index + 1U);
                    } while ((uint64_t)(long long)(level_index + 1U) <
                             (uint64_t)(*(long long*)((char*)mobility_base + SCENE_LEVEL_LIST_END_OFFSET) - 
                              *(long long*)((char*)mobility_base + SCENE_LEVEL_LIST_OFFSET) >> 3));
                }
            }
        }
    }
    
    // 处理LOD偏置因子属性
    float lod_bias_factor = 0.0f;
    char* lod_bias_string = LOD_BIAS_FACTOR_STRING;
    char* lod_bias_string_end = lod_bias_string;
    
    while (*lod_bias_string_end != '\0') {
        lod_bias_string_end++;
    }
    
    // 遍历LOD偏置因子属性
    for (void** lod_bias_attr_array = *(void***)((char*)config_data + 0x40); 
         lod_bias_attr_array != NULL; 
         lod_bias_attr_array = (void**)lod_bias_attr_array[6]) {
        
        char* lod_bias_attr_name = (char*)*lod_bias_attr_array;
        char* lod_bias_attr_type;
        
        if (lod_bias_attr_name == NULL) {
            lod_bias_attr_name = (char*)0x180d48d24;
            lod_bias_attr_type = config_string;
        } else {
            lod_bias_attr_type = (char*)lod_bias_attr_array[2];
        }
        
        if (lod_bias_attr_type == lod_bias_string_end - 0x180a23abf) {
            lod_bias_attr_type = lod_bias_attr_type + (long long)lod_bias_attr_name;
            
            if (lod_bias_attr_type <= lod_bias_attr_name) {
                // 处理LOD偏置因子值
                void* lod_bias_value_data = 0x180d48d24;
                if (lod_bias_attr_array[1] != 0) {
                    lod_bias_value_data = (void*)lod_bias_attr_array[1];
                }
                
                FUN_18010cbc0(lod_bias_value_data, &system_memory_6430, &lod_bias_factor);
                
                // 限制LOD偏置因子范围
                if (lod_bias_factor < LOD_BIAS_FACTOR_MIN) {
                    lod_bias_factor = LOD_BIAS_FACTOR_MIN;
                } else if (lod_bias_factor > LOD_BIAS_FACTOR_MAX) {
                    lod_bias_factor = LOD_BIAS_FACTOR_MAX;
                }
                
                FUN_1802f0940(*(void**)((char*)prefab_data + SCENE_DATA_OFFSET), lod_bias_factor);
                break;
            }
        }
    }
    
    // 处理场景升级级别掩码属性
    uint32_t scene_upgrade_mask = 0;
    char* scene_upgrade_string = SCENE_UPGRADE_LEVEL_MASK_STRING;
    char* scene_upgrade_string_end = scene_upgrade_string;
    
    while (*scene_upgrade_string_end != '\0') {
        scene_upgrade_string_end++;
    }
    
    // 遍历场景升级级别掩码属性
    for (void** scene_upgrade_attr_array = *(void***)((char*)config_data + 0x40); 
         scene_upgrade_attr_array != NULL; 
         scene_upgrade_attr_array = (void**)scene_upgrade_attr_array[6]) {
        
        char* scene_upgrade_attr_name = (char*)*scene_upgrade_attr_array;
        char* scene_upgrade_attr_type;
        
        if (scene_upgrade_attr_name == NULL) {
            scene_upgrade_attr_name = (char*)0x180d48d24;
            scene_upgrade_attr_type = config_string;
        } else {
            scene_upgrade_attr_type = (char*)scene_upgrade_attr_array[2];
        }
        
        if (scene_upgrade_attr_type == scene_upgrade_string_end - 0x180a23a97) {
            scene_upgrade_attr_type = scene_upgrade_attr_type + (long long)scene_upgrade_attr_name;
            
            if (scene_upgrade_attr_type <= scene_upgrade_attr_name) {
                // 处理场景升级级别掩码值
                char* scene_upgrade_value_data = (char*)0x180d48d24;
                if ((char*)scene_upgrade_attr_array[1] != (char*)0x0) {
                    scene_upgrade_value_data = (char*)scene_upgrade_attr_array[1];
                }
                
                // 验证场景升级掩码值
                uint64_t upgrade_length = 0xffffffffffffffff;
                do {
                    upgrade_length++;
                } while (scene_upgrade_value_data[upgrade_length] != '\0');
                
                void* upgrade_processor;
                if ((upgrade_length < 3) || (*scene_upgrade_value_data != '0') ||
                    ((scene_upgrade_value_data[1] + 0xa8U & 0xdf) != 0)) {
                    upgrade_processor = &unknown_var_2208_ptr;
                } else {
                    upgrade_processor = &unknown_var_5412_ptr;
                }
                
                FUN_18010cbc0(scene_upgrade_value_data, upgrade_processor, &scene_upgrade_mask);
                
                // 处理场景升级掩码位
                if (scene_upgrade_mask != 0) {
                    uint32_t mask_bit = 2;
                    uint32_t temp_mask = scene_upgrade_mask;
                    
                    do {
                        if ((temp_mask & mask_bit) != 0) {
                            // 处理每个掩码位
                            void* mask_processor = &system_data_buffer_ptr;
                            void* mask_data = FUN_18062b420(system_memory_pool_ptr, 0x10, 0x13);
                            
                            *(char*)mask_data = 0;
                            uint32_t mask_hash = FUN_18064e990(mask_data);
                            *mask_data = 0x6576656c;
                            *(uint16_t*)((char*)mask_data + 1) = 0x5f6c;
                            *(char*)((long long)mask_data + 6) = 0;
                            
                            System_DataHandler(&mask_processor, &unknown_var_4576_ptr, guid_index);
                            FUN_1803c2430(*(long long*)((char*)prefab_data + SCENE_DATA_OFFSET) + LEVEL_DATA_BLOCK_SIZE, 
                                         &config_stack[0], &mask_processor);
                            
                            // 清理掩码数据
                            if (mask_data != NULL) {
                                FUN_18064e900();
                            }
                            
                            temp_mask = scene_upgrade_mask;
                        }
                        
                        guid_index++;
                        mask_bit = mask_bit << 1 | (uint32_t)((int)mask_bit < 0);
                    } while (guid_index < SCENE_UPGRADE_LEVEL_MASK_MAX);
                }
                
                break;
            }
        }
    }
    
    // 处理季节掩码属性
    uint32_t season_mask = 0xffffffff;
    char* season_mask_string = SEASON_MASK_STRING;
    char* season_mask_string_end = season_mask_string;
    
    while (*season_mask_string_end != '\0') {
        season_mask_string_end++;
    }
    
    // 遍历季节掩码属性
    for (void** season_mask_attr_array = *(void***)((char*)config_data + 0x40); 
         season_mask_attr_array != NULL; 
         season_mask_attr_array = (void**)season_mask_attr_array[6]) {
        
        char* season_mask_attr_name = (char*)*season_mask_attr_array;
        char* season_mask_attr_type;
        
        if (season_mask_attr_name == NULL) {
            season_mask_attr_name = (char*)0x180d48d24;
            season_mask_attr_type = config_string;
        } else {
            season_mask_attr_type = (char*)season_mask_attr_array[2];
        }
        
        if (season_mask_attr_type == season_mask_string_end - 0x180a23a7f) {
            season_mask_attr_type = season_mask_attr_type + (long long)season_mask_attr_name;
            
            if (season_mask_attr_type <= season_mask_attr_name) {
                // 处理季节掩码值
                void* season_mask_value_data = 0x180d48d24;
                if (season_mask_attr_array[1] != 0) {
                    season_mask_value_data = (void*)season_mask_attr_array[1];
                }
                
                FUN_18010cbc0(season_mask_value_data, &unknown_var_2208_ptr, &season_mask);
                *(char*)((char*)(*(long long*)((char*)prefab_data + SCENE_DATA_OFFSET)) + SCENE_SEASON_MASK_OFFSET) = (char)season_mask;
                
                // 验证场景状态
                if (((char*)prefab_data)[0x10] != 0 &&
                    ((*prefab_data & *(char*)((char*)(*(long long*)((char*)prefab_data + SCENE_DATA_OFFSET)) + SCENE_SEASON_MASK_OFFSET)) == 0)) {
                    ((char*)prefab_data)[0x39] = 1;
                }
                
                // 清理属性数据
                guid_attr_data = &system_data_buffer_ptr;
                if (guid_attr_value != NULL) {
                    FUN_18064e900();
                }
                
                guid_attr_value = NULL;
                guid_attr_flags = guid_attr_flags & 0xffffffff00000000;
                guid_attr_data = &system_state_ptr;
                
                name_attr_data = &system_data_buffer_ptr;
                if (name_attr_value != NULL) {
                    FUN_18064e900();
                }
                
                name_attr_value = NULL;
                name_attr_flags = name_attr_flags & 0xffffffff00000000;
                name_attr_data = &system_state_ptr;
                
                // 返回配置处理结果
                FUN_1808fc050(config_stack[1] ^ (uint64_t)config_data);
            }
        }
    }
    
    // 最终配置处理
    if (system_debug_flag == '\0') {
        void* final_processor = &system_buffer_ptr;
        if (*(void**)((char*)(*(long long*)((char*)prefab_data + SCENE_DATA_OFFSET)) + 0x290) != NULL) {
            final_processor = *(void**)((char*)(*(long long*)((char*)prefab_data + SCENE_DATA_OFFSET)) + 0x290);
        }
        
        void* final_value = &system_buffer_ptr;
        if (guid_attr_value != NULL) {
            final_value = guid_attr_value;
        }
        
        FUN_180627020(&unknown_var_2696_ptr, final_value, final_processor);
        config_data = (void*)config_offset;
    }
    
    // 处理最终配置数据
    uint32_t final_config[1];
    final_config[0] = 1;
    long long final_result = FUN_180631000(config_data, &unknown_var_2688_ptr, final_config);
    
    if (final_result != 0) {
        FUN_1802ee720(*(void**)((char*)prefab_data + SCENE_DATA_OFFSET), final_config[0]);
    }
}

/**
 * @brief 原始函数包装器 - FUN_1803bd8e0
 * 
 * 该函数是SceneLevelDataProcessor的原始包装器，保持与原始代码的兼容性。
 * 
 * @param param_1 场景数据指针
 * @param param_2 级别配置数据指针
 */
void FUN_1803bd8e0(long long param_1, long long param_2)
{
    SceneLevelDataProcessor((void*)param_1, (void*)param_2);
}

/**
 * @brief 原始函数包装器 - FUN_1803bdc20
 * 
 * 该函数是PrefabConfigManager的原始包装器，保持与原始代码的兼容性。
 * 
 * @param param_1 预制体数据指针
 * @param param_2 配置数据指针
 * @param param_3 配置标志
 */
void FUN_1803bdc20(void* param_1, long long param_2, uint64_t param_3)
{
    PrefabConfigManager(param_1, (void*)param_2, param_3);
}