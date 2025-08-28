#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

/**
 * 渲染系统材质处理和MDM模型加载模块
 * 
 * 本模块包含2个核心函数：
 * 1. process_rendering_materials - 处理渲染材质数据和参数
 * 2. load_mdm_model_data - 加载MDM格式模型数据
 * 
 * 主要功能：
 * - 材质数据处理和参数设置
 * - MDM模型文件解析和加载
 * - 渲染对象属性管理
 * - 纹理映射和颜色处理
 * - 模型数据验证和优化
 */

// 材质处理常量定义
#define MAX_MATERIAL_NAME_LENGTH 64
#define MAX_TEXTURE_PATH_LENGTH 256
#define COLOR_SCALE_FACTOR 0.003921569f  // 1.0/255.0
#define DEFAULT_ALPHA_VALUE 1.0f
#define MDM_FILE_HEADER_MAGIC 0x31444d4d  // "MDM1"
#define DEFAULT_STACK_CANARY 0xfffffffffffffffeULL

// 材质属性偏移量
#define MATERIAL_NAME_OFFSET 0x10
#define MATERIAL_TEXTURE_OFFSET 0x8
#define MATERIAL_FACTOR_OFFSET 0x238
#define MATERIAL_FACTOR2_OFFSET 0x248
#define MATERIAL_UV_OFFSET 0x2a8
#define MATERIAL_SECOND_UV_OFFSET 0x2b8

// 渲染状态标志
#define RENDER_STATE_MODIFIED 0x1
#define RENDER_STATE_SECOND_MATERIAL 0x2

// 函数别名定义
#define process_rendering_materials FUN_18027a810
#define load_mdm_model_data FUN_18027b5d0

/**
 * 处理渲染材质数据和参数
 * 
 * 该函数负责处理和设置渲染材质的各种参数，包括：
 * - 材质名称解析和处理
 * - 材质属性设置和验证
 * - 纹理映射和颜色处理
 * - 渲染状态管理和更新
 * - 材质数据批量处理
 * 
 * @param render_context 渲染上下文指针
 * @param material_data 材质数据指针
 */
void process_rendering_materials(int64_t *render_context, int64_t *material_data)
{
    // 局部变量声明
    char name_char1, name_char2;
    code *render_function;
    uint64_t material_handle;
    int64_t material_offset;
    char *name_ptr1, *name_ptr2;
    uint64_t data_size;
    int64_t *material_list;
    int64_t current_material;
    void *texture_ptr;
    uint64_t *material_entry;
    uint64_t *sub_material_entry;
    uint64_t *material_node;
    char *search_name, *current_name;
    uint64_t material_index;
    uint material_count;
    bool name_match;
    
    // 栈变量定义
    int8_t stack_buffer_2d8[32];          // 安全缓冲区
    uint material_params[4];                 // 材质参数数组
    int64_t *material_chain;                // 材质链表指针
    void *texture_manager;              // 纹理管理器
    int64_t name_buffer_ptr;                // 名称缓冲区指针
    uint name_length;                         // 名称长度
    uint64_t render_state;                 // 渲染状态
    uint64_t texture_data[3];              // 纹理数据
    float factor_value;                       // 因子值
    float alpha_value;                        // 透明度值
    uint64_t color_data[3];                // 颜色数据
    void *material_resource;             // 材质资源
    int64_t second_material_handle;          // 第二材质句柄
    int material_index_int;                   // 材质索引整数
    uint64_t material_data_size;             // 材质数据大小
    void *data_processor;               // 数据处理器
    int64_t data_buffer;                     // 数据缓冲区
    int32_t process_flags;                 // 处理标志
    uint64_t file_offset;                    // 文件偏移量
    int64_t *material_array[3];             // 材质数组
    int32_t uv_coords[4];                 // UV坐标
    float transform_values[6];               // 变换值
    float color_values[9];                    // 颜色值
    int32_t blend_params[4];               // 混合参数
    float factor_values[3];                  // 因子值数组
    int32_t color_params[4];              // 颜色参数
    uint64_t transform_data[2];            // 变换数据
    int64_t *material_manager;               // 材质管理器
    int32_t render_params[8];              // 渲染参数
    int32_t uv_params[4];                  // UV参数
    void *mesh_processor;                // 网格处理器
    char material_name[MAX_MATERIAL_NAME_LENGTH]; // 材质名称缓冲区
    void *resource_manager;              // 资源管理器
    int8_t *shader_data;                  // 着色器数据
    int32_t shader_flags;                  // 着色器标志
    int8_t render_buffer[136];            // 渲染缓冲区
    uint64_t security_cookie;               // 安全cookie
    
    // 初始化安全cookie
    security_cookie = DEFAULT_STACK_CANARY ^ (uint64_t)stack_buffer_2d8;
    
    // 初始化材质参数
    material_params[1] = 0;
    texture_manager = &system_data_buffer_ptr;  // 默认纹理管理器
    render_state = 0;
    name_buffer_ptr = 0;
    name_length = 0;
    
    // 处理材质名称
    search_name = "name";
    current_name = search_name;
    while (*current_name != '\0') {
        current_name++;
    }
    
    // 遍历材质数据链表
    for (material_entry = (uint64_t *)material_data[8]; 
         material_chain = material_data, material_entry != (uint64_t *)0x0;
         material_entry = (uint64_t *)material_entry[6]) {
        
        current_name = (char *)*material_entry;
        if (current_name == (char *)0x0) {
            current_name = (char *)0x180d48d24;  // 默认名称
            name_ptr2 = (char *)0x0;
        } else {
            name_ptr2 = (char *)material_entry[2];
        }
        
        // 检查名称匹配
        if (name_ptr2 == current_name - 0x180a03a83) {
            name_ptr2 = name_ptr2 + (int64_t)current_name;
            if (name_ptr2 <= current_name) {
                // 获取材质值
                current_material = 0x180d48d24;
                if (material_entry[1] != 0) {
                    current_material = material_entry[1];
                }
                CoreSystem_ConfigValidator0(&texture_manager, current_material);
                break;
            }
            
            // 比较名称字符串
            material_offset = (int64_t)&system_buffer_3a84 - (int64_t)current_name;
            while (*current_name == current_name[material_offset]) {
                current_name++;
                if (name_ptr2 <= current_name) {
                    // 获取材质值
                    current_material = 0x180d48d24;
                    if (material_entry[1] != 0) {
                        current_material = material_entry[1];
                    }
                    CoreSystem_ConfigValidator0(&texture_manager, current_material);
                    break;
                }
            }
        }
    }
    
    // 处理材质数据
    if (0 < (int)name_length) {
        current_material = FUN_1800b6de0(system_resource_state, &texture_manager, 1);
        material_count = name_length;
        
        if (current_material == 0) {
            data_size = (uint64_t)name_length;
            if (name_buffer_ptr != 0) {
                FUN_1806277c0(render_context + 0x3e, data_size);
            }
            
            if (material_count != 0) {
                memcpy(render_context[0x3f], name_buffer_ptr, material_count);
            }
            
            *(int32_t *)(render_context + 0x40) = 0;
            if (render_context[0x3f] != 0) {
                *(int8_t *)(data_size + render_context[0x3f]) = 0;
            }
            *(int32_t *)((int64_t)render_context + 0x20c) = render_state._4_4_;
        } else {
            FUN_180275a60(current_material, render_context, 1);
        }
    }
    
    // 处理材质属性
    material_resource = &system_data_buffer_ptr;
    second_material_handle = 0;
    material_index_int = 0;
    material_data_size = 0;
    
    search_name = "material";
    current_name = search_name;
    while (*current_name != '\0') {
        current_name++;
    }
    
    // 遍历材质数据
    for (material_entry = (uint64_t *)material_data[8]; 
         material_entry != (uint64_t *)0x0;
         material_entry = (uint64_t *)material_entry[6]) {
        
        current_name = (char *)*material_entry;
        if (current_name == (char *)0x0) {
            current_name = (char *)0x180d48d24;
            name_ptr2 = (char *)0x0;
        } else {
            name_ptr2 = (char *)material_entry[2];
        }
        
        if (name_ptr2 == current_name - 0x180a04ebf) {
            name_ptr2 = current_name + (int64_t)name_ptr2;
            if (name_ptr2 <= current_name) {
                // 获取材质值
                current_material = 0x180d48d24;
                if (material_entry[1] != 0) {
                    current_material = material_entry[1];
                }
                CoreSystem_ConfigValidator0(&material_resource, current_material);
                break;
            }
            
            // 比较材质名称
            material_offset = (int64_t)&processed_var_6864_ptr - (int64_t)current_name;
            while (*current_name == current_name[material_offset]) {
                current_name++;
                if (name_ptr2 <= current_name) {
                    // 获取材质值
                    current_material = 0x180d48d24;
                    if (material_entry[1] != 0) {
                        current_material = material_entry[1];
                    }
                    CoreSystem_ConfigValidator0(&material_resource, current_material);
                    break;
                }
            }
        }
    }
    
    // 应用材质属性
    if (0 < material_index_int) {
        render_function = *(code **)(*render_context + 0x118);
        material_handle = FUN_1800b30d0(system_resource_state, &material_manager, &material_resource, 1);
        (*render_function)(render_context, material_handle);
        
        if (material_manager != (int64_t *)0x0) {
            (**(code **)(*material_manager + 0x38))();
        }
    }
    
    // 重置材质资源
    material_resource = &system_data_buffer_ptr;
    if (second_material_handle != 0) {
        CoreEngine_MemoryPoolManager();
    }
    second_material_handle = 0;
    material_data_size = material_data_size & 0xffffffff00000000;
    material_resource = &system_state_ptr;
    
    // 处理网格材质数据
    material_node = (uint64_t *)material_data[6];
    if (material_node != (uint64_t *)0x0) {
        do {
            // 初始化处理参数
            texture_data[0] = &system_data_buffer_ptr;
            color_data[0] = 0;
            texture_data[2] = 0;
            factor_value = 0.0f;
            
            // 处理网格名称
            search_name = "name";
            current_name = search_name;
            while (*current_name != '\0') {
                current_name++;
            }
            
            // 遍历网格节点
            for (sub_material_entry = (uint64_t *)material_node[8]; 
                 sub_material_entry != (uint64_t *)0x0;
                 sub_material_entry = (uint64_t *)sub_material_entry[6]) {
                
                current_name = (char *)*sub_material_entry;
                if (current_name == (char *)0x0) {
                    current_name = (char *)0x180d48d24;
                    name_ptr2 = (char *)0x0;
                } else {
                    name_ptr2 = (char *)sub_material_entry[2];
                }
                
                if (name_ptr2 == current_name - 0x180a03a83) {
                    name_ptr2 = current_name + (int64_t)name_ptr2;
                    if (name_ptr2 <= current_name) {
                        // 获取网格名称
                        current_material = 0x180d48d24;
                        if (sub_material_entry[1] != 0) {
                            current_material = sub_material_entry[1];
                        }
                        CoreSystem_ConfigValidator0(&texture_data[0], current_material);
                        break;
                    }
                    
                    // 比较网格名称
                    material_offset = (int64_t)&system_buffer_3a84 - (int64_t)current_name;
                    while (*current_name == current_name[material_offset]) {
                        current_name++;
                        if (name_ptr2 <= current_name) {
                            // 获取网格名称
                            current_material = 0x180d48d24;
                            if (sub_material_entry[1] != 0) {
                                current_material = sub_material_entry[1];
                            }
                            CoreSystem_ConfigValidator0(&texture_data[0], current_material);
                            break;
                        }
                    }
                }
            }
            
            // 处理材质数据
            material_index = 0;
            current_material = render_context[7];
            data_size = material_index;
            
            if (render_context[8] - current_material >> 4 != 0) {
                do {
                    texture_ptr = &memory_allocator_3480_ptr;
                    current_material = *(int64_t *)(current_material + material_index * 0x10);
                    
                    // 获取材质数据
                    if (*(int64_t *)(current_material + 0x1b0) == 0) {
                        material_offset = current_material + MATERIAL_NAME_OFFSET;
                    } else {
                        material_offset = func_0x000180079240();
                    }
                    
                    // 处理材质名称
                    search_name = material_name;
                    material_name[0] = '\0';
                    material_index_int = *(int *)(material_offset + 0x10);
                    sub_material_entry = &system_buffer_ptr;
                    
                    if (*(void **)(material_offset + MATERIAL_TEXTURE_OFFSET) != (void *)0x0) {
                        sub_material_entry = *(void **)(material_offset + MATERIAL_TEXTURE_OFFSET);
                    }
                    
                    mesh_processor = texture_ptr;
                    strcpy_s(material_name, MAX_MATERIAL_NAME_LENGTH, sub_material_entry);
                    
                    // 检查材质匹配
                    if ((float)material_index_int == factor_value) {
                        if (material_index_int == 0) {
                            if (factor_value != 0.0f) {
                                name_match = false;
                            } else {
                                name_match = true;
                            }
                        } else {
                            // 比较材质名称
                            search_name = material_name;
                            do {
                                name_char1 = *search_name;
                                name_char2 = search_name[texture_data[2] - (int64_t)material_name];
                                if (name_char1 != name_char2) break;
                                search_name++;
                            } while (name_char2 != '\0');
                            name_match = name_char1 == name_char2;
                        }
                    } else {
                        if (material_index_int == 0) {
                            if (factor_value != 0.0f) {
                                name_match = false;
                            } else {
                                name_match = true;
                            }
                        } else {
                            name_match = false;
                        }
                    }
                    
                    // 应用材质属性
                    if (name_match) {
                        material_params[0] = 0;
                        resource_manager = &memory_allocator_3432_ptr;
                        shader_data = render_buffer;
                        shader_flags = 0;
                        render_buffer[0] = 0;
                        
                        // 处理材质
                        search_name = "material";
                        current_name = search_name;
                        while (*current_name != '\0') {
                            current_name++;
                        }
                        
                        for (sub_material_entry = (uint64_t *)material_node[8]; 
                             sub_material_entry != (uint64_t *)0x0;
                             sub_material_entry = (uint64_t *)sub_material_entry[6]) {
                            
                            current_name = (char *)*sub_material_entry;
                            if (current_name == (char *)0x0) {
                                current_name = (char *)0x180d48d24;
                                name_ptr2 = (char *)0x0;
                            } else {
                                name_ptr2 = (char *)sub_material_entry[2];
                            }
                            
                            if (name_ptr2 == current_name - 0x180a04ebf) {
                                name_ptr2 = name_ptr2 + (int64_t)current_name;
                                if (name_ptr2 <= current_name) {
                                    // 获取材质数据
                                    material_offset = 0x180d48d24;
                                    if (sub_material_entry[1] != 0) {
                                        material_offset = sub_material_entry[1];
                                    }
                                    FUN_18004a180(&resource_manager, material_offset);
                                    material_handle = FUN_1800b30d0(system_resource_state, material_array, &resource_manager, 1);
                                    FUN_180076910(current_material, material_handle);
                                    
                                    if (material_array[0] != (int64_t *)0x0) {
                                        (**(code **)(*material_array[0] + 0x38))();
                                    }
                                    break;
                                }
                                
                                // 比较材质名称
                                material_offset = (int64_t)&processed_var_6864_ptr - (int64_t)current_name;
                                while (*current_name == current_name[material_offset]) {
                                    current_name++;
                                    if (name_ptr2 <= current_name) {
                                        // 获取材质数据
                                        material_offset = 0x180d48d24;
                                        if (sub_material_entry[1] != 0) {
                                            material_offset = sub_material_entry[1];
                                        }
                                        FUN_18004a180(&resource_manager, material_offset);
                                        material_handle = FUN_1800b30d0(system_resource_state, material_array, &resource_manager, 1);
                                        FUN_180076910(current_material, material_handle);
                                        
                                        if (material_array[0] != (int64_t *)0x0) {
                                            (**(code **)(*material_array[0] + 0x38))();
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                        
                        // 处理颜色因子
                        search_name = "factor";
                        current_name = search_name;
                        while (*current_name != '\0') {
                            current_name++;
                        }
                        
                        for (sub_material_entry = (uint64_t *)material_node[8]; 
                             sub_material_entry != (uint64_t *)0x0;
                             sub_material_entry = (uint64_t *)sub_material_entry[6]) {
                            
                            current_name = (char *)*sub_material_entry;
                            if (current_name == (char *)0x0) {
                                current_name = (char *)0x180d48d24;
                                name_ptr2 = (char *)0x0;
                            } else {
                                name_ptr2 = (char *)sub_material_entry[2];
                            }
                            
                            if (name_ptr2 == current_name - 0x180a1674b) {
                                name_ptr2 = name_ptr2 + (int64_t)current_name;
                                if (name_ptr2 <= current_name) {
                                    // 获取颜色数据
                                    material_offset = 0x180d48d24;
                                    if (sub_material_entry[1] != 0) {
                                        material_offset = sub_material_entry[1];
                                    }
                                    FUN_18010cbc0(material_offset, &rendering_buffer_2208_ptr, material_params);
                                    
                                    // 设置颜色值
                                    *(float *)(current_material + MATERIAL_FACTOR_OFFSET) = 
                                        (float)(material_params[0] >> 0x10 & 0xff) * COLOR_SCALE_FACTOR;
                                    *(float *)(current_material + MATERIAL_FACTOR_OFFSET + 4) = 
                                        (float)(material_params[0] >> 8 & 0xff) * COLOR_SCALE_FACTOR;
                                    *(float *)(current_material + MATERIAL_FACTOR_OFFSET + 8) = 
                                        (float)(material_params[0] & 0xff) * COLOR_SCALE_FACTOR;
                                    *(float *)(current_material + MATERIAL_FACTOR_OFFSET + 12) = 
                                        (float)(material_params[0] >> 0x18) * COLOR_SCALE_FACTOR;
                                    break;
                                }
                                
                                // 比较因子名称
                                material_offset = (int64_t)&processed_var_8684_ptr - (int64_t)current_name;
                                while (*current_name == current_name[material_offset]) {
                                    current_name++;
                                    if (name_ptr2 <= current_name) {
                                        // 获取颜色数据
                                        material_offset = 0x180d48d24;
                                        if (sub_material_entry[1] != 0) {
                                            material_offset = sub_material_entry[1];
                                        }
                                        FUN_18010cbc0(material_offset, &rendering_buffer_2208_ptr, material_params);
                                        
                                        // 设置颜色值
                                        *(float *)(current_material + MATERIAL_FACTOR_OFFSET) = 
                                            (float)(material_params[0] >> 0x10 & 0xff) * COLOR_SCALE_FACTOR;
                                        *(float *)(current_material + MATERIAL_FACTOR_OFFSET + 4) = 
                                            (float)(material_params[0] >> 8 & 0xff) * COLOR_SCALE_FACTOR;
                                        *(float *)(current_material + MATERIAL_FACTOR_OFFSET + 8) = 
                                            (float)(material_params[0] & 0xff) * COLOR_SCALE_FACTOR;
                                        *(float *)(current_material + MATERIAL_FACTOR_OFFSET + 12) = 
                                            (float)(material_params[0] >> 0x18) * COLOR_SCALE_FACTOR;
                                        break;
                                    }
                                }
                            }
                        }
                        
                        // 处理第二颜色因子
                        search_name = "factor2";
                        current_name = search_name;
                        while (*current_name != '\0') {
                            current_name++;
                        }
                        
                        for (sub_material_entry = (uint64_t *)material_node[8]; 
                             sub_material_entry != (uint64_t *)0x0;
                             sub_material_entry = (uint64_t *)sub_material_entry[6]) {
                            
                            current_name = (char *)*sub_material_entry;
                            if (current_name == (char *)0x0) {
                                name_ptr2 = (char *)0x0;
                                current_name = (char *)0x180d48d24;
                            } else {
                                name_ptr2 = (char *)sub_material_entry[2];
                            }
                            
                            if (name_ptr2 == current_name - 0x180a167ff) {
                                name_ptr2 = name_ptr2 + (int64_t)current_name;
                                if (name_ptr2 <= current_name) {
                                    // 获取第二颜色数据
                                    material_offset = 0x180d48d24;
                                    if (sub_material_entry[1] != 0) {
                                        material_offset = sub_material_entry[1];
                                    }
                                    FUN_18010cbc0(material_offset, &rendering_buffer_2208_ptr, material_params);
                                    
                                    // 设置第二颜色值
                                    *(float *)(current_material + MATERIAL_FACTOR2_OFFSET) = 
                                        (float)(material_params[0] >> 0x10 & 0xff) * COLOR_SCALE_FACTOR;
                                    *(float *)(current_material + MATERIAL_FACTOR2_OFFSET + 4) = 
                                        (float)(material_params[0] >> 8 & 0xff) * COLOR_SCALE_FACTOR;
                                    *(float *)(current_material + MATERIAL_FACTOR2_OFFSET + 8) = 
                                        (float)(material_params[0] & 0xff) * COLOR_SCALE_FACTOR;
                                    *(float *)(current_material + MATERIAL_FACTOR2_OFFSET + 12) = 
                                        (float)(material_params[0] >> 0x18) * COLOR_SCALE_FACTOR;
                                    break;
                                }
                                
                                // 比较第二因子名称
                                material_offset = (int64_t)&processed_var_8864_ptr - (int64_t)current_name;
                                while (*current_name == current_name[material_offset]) {
                                    current_name++;
                                    if (name_ptr2 <= current_name) {
                                        // 获取第二颜色数据
                                        material_offset = 0x180d48d24;
                                        if (sub_material_entry[1] != 0) {
                                            material_offset = sub_material_entry[1];
                                        }
                                        FUN_18010cbc0(material_offset, &rendering_buffer_2208_ptr, material_params);
                                        
                                        // 设置第二颜色值
                                        *(float *)(current_material + MATERIAL_FACTOR2_OFFSET) = 
                                            (float)(material_params[0] >> 0x10 & 0xff) * COLOR_SCALE_FACTOR;
                                        *(float *)(current_material + MATERIAL_FACTOR2_OFFSET + 4) = 
                                            (float)(material_params[0] >> 8 & 0xff) * COLOR_SCALE_FACTOR;
                                        *(float *)(current_material + MATERIAL_FACTOR2_OFFSET + 8) = 
                                            (float)(material_params[0] & 0xff) * COLOR_SCALE_FACTOR;
                                        *(float *)(current_material + MATERIAL_FACTOR2_OFFSET + 12) = 
                                            (float)(material_params[0] >> 0x18) * COLOR_SCALE_FACTOR;
                                        break;
                                    }
                                }
                            }
                        }
                        
                        // 处理UV坐标
                        material_offset = FUN_180631b90(material_node, &processed_var_8832_ptr, &render_params[0]);
                        if (material_offset != 0) {
                            *(int32_t *)(current_material + MATERIAL_UV_OFFSET) = render_params[0];
                            *(int32_t *)(current_material + MATERIAL_UV_OFFSET + 4) = render_params[1];
                            *(int32_t *)(current_material + MATERIAL_UV_OFFSET + 8) = render_params[2];
                            *(int32_t *)(current_material + MATERIAL_UV_OFFSET + 12) = render_params[3];
                        }
                        
                        material_offset = FUN_180631b90(material_node, &processed_var_8848_ptr, &render_params[0]);
                        if (material_offset != 0) {
                            *(int32_t *)(current_material + MATERIAL_SECOND_UV_OFFSET) = render_params[0];
                            *(int32_t *)(current_material + MATERIAL_SECOND_UV_OFFSET + 4) = render_params[1];
                            *(int32_t *)(current_material + MATERIAL_SECOND_UV_OFFSET + 8) = render_params[2];
                            *(int32_t *)(current_material + MATERIAL_SECOND_UV_OFFSET + 12) = render_params[3];
                        }
                        
                        resource_manager = &system_state_ptr;
                    }
                    
                    mesh_processor = &system_state_ptr;
                    material_count = (int)data_size + 1;
                    material_index++;
                    current_material = render_context[7];
                    data_size = (uint64_t)material_count;
                } while ((uint64_t)(int64_t)(int)material_count < (uint64_t)(render_context[8] - current_material >> 4));
            }
            
            // 清理处理数据
            texture_data[0] = &system_data_buffer_ptr;
            if (texture_data[2] != 0) {
                CoreEngine_MemoryPoolManager();
            }
            texture_data[2] = 0;
            color_data[0] = color_data[0] & 0xffffffff00000000;
            texture_data[0] = &system_state_ptr;
            
            // 处理网格数据
            search_name = "mesh";
            current_name = search_name;
            while (*current_name != '\0') {
                current_name++;
            }
            
            while (true) {
                do {
                    material_node = (uint64_t *)material_node[0xb];
                    material_data = material_chain;
                    if (material_node == (uint64_t *)0x0) {
                        goto cleanup_section;
                    }
                    
                    current_name = (char *)*material_node;
                    if (current_name == (char *)0x0) {
                        current_name = (char *)0x180d48d24;
                        name_ptr2 = (char *)0x0;
                    } else {
                        name_ptr2 = (char *)material_node[2];
                    }
                } while (name_ptr2 != current_name - 0x180a0f3e7);
                
                name_ptr2 = current_name + (int64_t)name_ptr2;
                if (name_ptr2 <= current_name) break;
                
                material_offset = (int64_t)&processed_var_9144_ptr - (int64_t)current_name;
                while (*current_name == current_name[material_offset]) {
                    current_name++;
                    if (name_ptr2 <= current_name) {
                        // 继续处理材质节点
                        continue;
                    }
                }
            }
        } while (true);
    }
    
cleanup_section:
    // 清理和最终处理
    material_params[2] = 0;
    search_name = "modified_id";
    current_name = search_name;
    while (*current_name != '\0') {
        current_name++;
    }
    
    material_entry = (uint64_t *)material_data[8];
    do {
        if (material_entry == (uint64_t *)0x0) {
            goto final_processing;
        }
        
        current_name = (char *)*material_entry;
        if (current_name == (char *)0x0) {
            current_name = (char *)0x180d48d24;
            name_ptr2 = (char *)0x0;
        } else {
            name_ptr2 = (char *)material_entry[2];
        }
        
        if (name_ptr2 == current_name - 0x180a16827) {
            name_ptr2 = name_ptr2 + (int64_t)current_name;
            if (name_ptr2 <= current_name) {
                // 处理修改ID
                current_name = (char *)0x180d48d24;
                if ((char *)material_entry[1] != (char *)0x0) {
                    current_name = (char *)material_entry[1];
                }
                
                data_size = 0xffffffffffffffff;
                do {
                    data_size++;
                } while (current_name[data_size] != '\0');
                
                if (((data_size < 3) || (*current_name != '0')) ||
                    (texture_ptr = &processed_var_5412_ptr, (current_name[1] + 0xa8U & 0xdf) != 0)) {
                    texture_ptr = &rendering_buffer_2208_ptr;
                }
                
                FUN_18010cbc0(current_name, texture_ptr, material_params + 2);
                *(uint *)((int64_t)render_context + 0x324) = material_params[2];
                
final_processing:
                // 设置渲染状态
                *(int8_t *)((int64_t)render_context + 0x32c) = 0;
                data_processor = &system_data_buffer_ptr;
                material_data_size = 0;
                data_buffer = 0;
                process_flags = 0;
                
                // 处理第二材质
                search_name = "second_material";
                current_name = search_name;
                while (*current_name != '\0') {
                    current_name++;
                }
                
                material_entry = (uint64_t *)material_data[8];
                do {
                    if (material_entry == (uint64_t *)0x0) {
                        // 设置渲染参数
                        render_params[0] = (int32_t)render_context[0x6c];
                        render_params[1] = *(int32_t *)((int64_t)render_context + 0x364);
                        render_params[2] = (int32_t)render_context[0x6d];
                        render_params[3] = *(int32_t *)((int64_t)render_context + 0x36c);
                        
                        FUN_1801c1720(render_context + 0x66, &uv_coords[0]);
                        FUN_180085020(render_context + 0x66, &factor_value);
                        FUN_180631960(material_data, &processed_var_8872_ptr, &render_params[0]);
                        FUN_180631960(material_data, &processed_var_8888_ptr, &uv_coords[0]);
                        FUN_180631960(material_data, &processed_var_8408_ptr, &factor_value);
                        
                        transform_data[0] = CONCAT44(render_params[1], render_params[0]);
                        transform_data[1] = CONCAT44(render_params[3], render_params[2]);
                        
                        // 设置变换参数
                        texture_data[0] = (void *)0x3f800000;  // 1.0f
                        texture_data[2] = 0;
                        factor_value = 0.0f;
                        alpha_value = 1.0f;
                        color_data[0] = 0;
                        color_data[1] = 0;
                        color_data[2] = 0x3f800000;  // 1.0f
                        
                        // 应用变换
                        FUN_180085c10(&texture_data[0], shader_data);
                        FUN_180085970(&texture_data[0], uv_coords[0]);
                        FUN_180085ac0(&texture_data[0], uv_coords[1]);
                        
                        blend_params[0] = texture_data[2]._4_4_;
                        color_params[0] = color_data[0]._4_4_;
                        color_params[3] = color_data[2]._4_4_;
                        
                        // 计算最终颜色值
                        color_values[0] = (float)texture_data[0] * factor_value;
                        color_values[1] = texture_data[0]._4_4_ * factor_value;
                        color_values[2] = (float)texture_data[2] * factor_value;
                        color_values[3] = factor_value * alpha_value;
                        color_values[4] = alpha_value * color_values[1];
                        color_values[5] = (float)color_data[0] * alpha_value;
                        color_values[6] = (float)color_data[1] * color_values[5];
                        color_values[7] = color_data[1]._4_4_ * color_values[5];
                        color_values[8] = (float)color_data[2] * color_values[5];
                        
                        // 应用渲染
                        (**(code **)(*render_context + 0x148))(render_context, &color_values[0]);
                        FUN_180276f30(render_context, (int64_t)render_context + 0x214, 1);
                        
                        // 更新材质参数
                        current_material = FUN_180631b90(material_data, &processed_var_8848_ptr, &uv_params[0]);
                        if ((current_material != 0) && 
                            (material_list = (int64_t *)render_context[7], material_list < (int64_t *)render_context[8])) {
                            do {
                                current_material = *material_list;
                                *(int32_t *)(current_material + MATERIAL_SECOND_UV_OFFSET) = uv_params[0];
                                *(int32_t *)(current_material + MATERIAL_SECOND_UV_OFFSET + 4) = uv_params[1];
                                *(int32_t *)(current_material + MATERIAL_SECOND_UV_OFFSET + 8) = uv_params[2];
                                *(int32_t *)(current_material + MATERIAL_SECOND_UV_OFFSET + 12) = uv_params[3];
                                material_list += 2;
                            } while (material_list < (int64_t *)render_context[8]);
                        }
                        
                        data_processor = &system_data_buffer_ptr;
                        if (data_buffer != 0) {
                            CoreEngine_MemoryPoolManager();
                        }
                        data_buffer = 0;
                        material_data_size = material_data_size & 0xffffffff00000000;
                        data_processor = &system_state_ptr;
                        texture_manager = &system_data_buffer_ptr;
                        
                        if (name_buffer_ptr != 0) {
                            CoreEngine_MemoryPoolManager();
                        }
                        name_buffer_ptr = 0;
                        render_state = render_state & 0xffffffff00000000;
                        texture_manager = &system_state_ptr;
                        
                        // 最终处理
                        CoreSystemConfigManager(security_cookie ^ (uint64_t)stack_buffer_2d8);
                    }
                    
                    current_name = (char *)*material_entry;
                    if (current_name == (char *)0x0) {
                        current_name = (char *)0x180d48d24;
                        name_ptr2 = (char *)0x0;
                    } else {
                        name_ptr2 = (char *)material_entry[2];
                    }
                    
                    if (name_ptr2 == current_name - 0x180a1683f) {
                        name_ptr2 = current_name + (int64_t)name_ptr2;
                        if (name_ptr2 <= current_name) {
                            // 处理第二材质数据
                            current_material = 0x180d48d24;
                            if (material_entry[1] != 0) {
                                current_material = material_entry[1];
                            }
                            CoreSystem_ConfigValidator0(&data_processor, current_material);
                            material_list = (int64_t *)FUN_1800b30d0(system_resource_state, material_array, &data_processor, 1);
                            material_params[1] = 4;
                            material_list = (int64_t *)*material_list;
                            
                            if (material_list != (int64_t *)0x0) {
                                material_chain = material_list;
                                (**(code **)(*material_list + 0x28))(material_list);
                            }
                            
                            material_chain = (int64_t *)render_context[0x77];
                            render_context[0x77] = (int64_t)material_list;
                            if (material_chain != (int64_t *)0x0) {
                                (**(code **)(*material_chain + 0x38))();
                            }
                            
                            material_params[1] = 0;
                            if (material_array[0] != (int64_t *)0x0) {
                                (**(code **)(*material_array[0] + 0x38))();
                            }
                            
                            FUN_1800b30d0(system_resource_state, &material_chain, &data_processor, 1);
                            material_params[1] = 0;
                            if (material_chain != (int64_t *)0x0) {
                                (**(code **)(*material_chain + 0x38))();
                            }
                            
                            goto final_processing;
                        }
                        
                        // 比较第二材质名称
                        material_offset = (int64_t)&processed_var_8928_ptr - (int64_t)current_name;
                        while (*current_name == current_name[material_offset]) {
                            current_name++;
                            if (name_ptr2 <= current_name) {
                                // 处理第二材质数据
                                current_material = 0x180d48d24;
                                if (material_entry[1] != 0) {
                                    current_material = material_entry[1];
                                }
                                CoreSystem_ConfigValidator0(&data_processor, current_material);
                                material_list = (int64_t *)FUN_1800b30d0(system_resource_state, material_array, &data_processor, 1);
                                material_params[1] = 4;
                                material_list = (int64_t *)*material_list;
                                
                                if (material_list != (int64_t *)0x0) {
                                    material_chain = material_list;
                                    (**(code **)(*material_list + 0x28))(material_list);
                                }
                                
                                material_chain = (int64_t *)render_context[0x77];
                                render_context[0x77] = (int64_t)material_list;
                                if (material_chain != (int64_t *)0x0) {
                                    (**(code **)(*material_chain + 0x38))();
                                }
                                
                                material_params[1] = 0;
                                if (material_array[0] != (int64_t *)0x0) {
                                    (**(code **)(*material_array[0] + 0x38))();
                                }
                                
                                FUN_1800b30d0(system_resource_state, &material_chain, &data_processor, 1);
                                material_params[1] = 0;
                                if (material_chain != (int64_t *)0x0) {
                                    (**(code **)(*material_chain + 0x38))();
                                }
                                
                                goto final_processing;
                            }
                        }
                    }
                    material_entry = (uint64_t *)material_entry[6];
                } while (true);
            }
            
            // 比较修改ID名称
            material_offset = (int64_t)&processed_var_8904_ptr - (int64_t)current_name;
            while (*current_name == current_name[material_offset]) {
                current_name++;
                if (name_ptr2 <= current_name) {
                    // 处理修改ID
                    current_name = (char *)0x180d48d24;
                    if ((char *)material_entry[1] != (char *)0x0) {
                        current_name = (char *)material_entry[1];
                    }
                    
                    data_size = 0xffffffffffffffff;
                    do {
                        data_size++;
                    } while (current_name[data_size] != '\0');
                    
                    if (((data_size < 3) || (*current_name != '0')) ||
                        (texture_ptr = &processed_var_5412_ptr, (current_name[1] + 0xa8U & 0xdf) != 0)) {
                        texture_ptr = &rendering_buffer_2208_ptr;
                    }
                    
                    FUN_18010cbc0(current_name, texture_ptr, material_params + 2);
                    *(uint *)((int64_t)render_context + 0x324) = material_params[2];
                    goto final_processing;
                }
            }
        }
        material_entry = (uint64_t *)material_entry[6];
    } while (true);
}

/**
 * 加载MDM模型数据
 * 
 * 该函数负责加载和解析MDM格式的模型数据文件，支持：
 * - MDM1格式文件解析
 * - 材质数据处理
 * - 网格数据加载
 * - 纹理信息提取
 * - 模型数据验证和优化
 * 
 * @param model_context 模型上下文指针
 * @param file_data 文件数据指针
 */
void load_mdm_model_data(int64_t model_context, int64_t file_data)
{
    // 局部变量声明
    int read_status;
    uint64_t *file_handle;
    int64_t material_buffer;
    int64_t mesh_buffer;
    void *default_path;
    uint64_t material_count;
    uint mesh_count;
    int string_length;
    int mesh_index;
    int material_index;
    int mesh_data[2][2];  // 网格数据数组
    int material_data[2][2];  // 材质数据数组
    int total_meshes;
    int total_materials;
    uint texture_data[2];
    void *texture_manager;
    int64_t string_buffer;
    uint string_size;
    int32_t buffer_flags;
    int8_t material_name[4];
    int8_t mesh_name[4];
    uint64_t security_cookie;
    
    // 初始化安全cookie
    security_cookie = DEFAULT_STACK_CANARY;
    
    // 打开文件句柄
    file_handle = (uint64_t *)CoreSystem_LoggingManager0(system_memory_pool_ptr, 0x18, 8, 3);
    default_path = &system_buffer_ptr;
    
    // 获取文件路径
    if (*(void **)(file_data + 8) != (void *)0x0) {
        default_path = *(void **)(file_data + 8);
    }
    
    read_status = 0;
    *file_handle = 0;
    *(int8_t *)(file_handle + 2) = 0;
    FUN_18062dee0(file_handle, default_path, &processed_var_4880_ptr);
    
    // 检查文件是否成功打开
    if (file_handle[1] != 0) {
        // 读取文件头
        fread(texture_data, 4, 1);
        
        // 检查MDM文件格式
        if (texture_data[0] == MDM_FILE_HEADER_MAGIC) {
            // 读取材质数量
            fread(&total_materials, 4, 1, file_handle[1]);
            
            if (0 < total_materials) {
                do {
                    // 读取材质数据
                    fread(material_data[0], 4, 1, file_handle[1]);
                    material_buffer = CoreSystem_LoggingManager0(system_memory_pool_ptr, (int64_t)(material_data[0][0] + 1), 0x10, 3);
                    fread(material_buffer, 1, (int64_t)material_data[0][0], file_handle[1]);
                    *(int8_t *)(material_data[0][0] + material_buffer) = 0;
                    FUN_180627910(&texture_manager, material_buffer);
                    
                    // 清理材质名称中的特殊字符
                    while ((0 < (int)string_size && 
                           (mesh_buffer = strstr(string_buffer, &system_buffer_ff10), mesh_buffer != 0))) {
                        
                        material_index = 6;
                        string_length = (int)mesh_buffer - (int)string_buffer;
                        if (string_size < string_length + 6U) {
                            material_index = string_size - string_length;
                        }
                        
                        material_count = string_length + material_index;
                        if (material_count < string_size) {
                            mesh_buffer = (int64_t)(int)material_count;
                            do {
                                *(int8_t *)((mesh_buffer - material_index) + string_buffer) = 
                                    *(int8_t *)(mesh_buffer + string_buffer);
                                material_count++;
                                mesh_buffer++;
                            } while (material_count < string_size);
                        }
                        
                        string_size = string_size - material_index;
                        *(int8_t *)((uint64_t)string_size + string_buffer) = 0;
                    }
                    
                    // 处理材质数据
                    if (*(uint64_t *)(model_context + 8) < *(uint64_t *)(model_context + 0x10)) {
                        *(uint64_t *)(model_context + 8) = *(uint64_t *)(model_context + 8) + 0x20;
                        SystemCore_NetworkHandler0();
                    } else {
                        FUN_180059820(model_context, &texture_manager);
                    }
                    
                    // 读取材质属性
                    fread(mesh_name, 4, 1, file_handle[1]);
                    fread(&total_meshes, 4, 1, file_handle[1]);
                    mesh_buffer = CoreSystem_LoggingManager0(system_memory_pool_ptr, (int64_t)total_meshes << 2, 0x10, 3);
                    fread(mesh_buffer, 4, (int64_t)total_meshes, file_handle[1]);
                    
                    // 清理缓冲区
                    if (mesh_buffer != 0) {
                        CoreEngine_MemoryPoolManager(mesh_buffer);
                    }
                    
                    if (material_buffer != 0) {
                        CoreEngine_MemoryPoolManager(material_buffer);
                    }
                    
                    texture_manager = &system_data_buffer_ptr;
                    if (string_buffer != 0) {
                        CoreEngine_MemoryPoolManager();
                    }
                    string_buffer = 0;
                    buffer_flags = 0;
                    texture_manager = &system_state_ptr;
                    read_status++;
                } while (read_status < total_materials);
            }
        } else if (0 < (int)texture_data[0]) {
            // 处理其他格式的模型数据
            material_count = (uint64_t)texture_data[0];
            do {
                // 读取网格数据
                fread(mesh_data[0], 4, 1, file_handle[1]);
                mesh_buffer = CoreSystem_LoggingManager0(system_memory_pool_ptr, (int64_t)(mesh_data[0][0] + 1), 0x10, 3);
                fread(mesh_buffer, 1, (int64_t)mesh_data[0][0], file_handle[1]);
                *(int8_t *)(mesh_data[0][0] + mesh_buffer) = 0;
                
                // 读取纹理数据
                fread(material_name, 4, 1, file_handle[1]);
                FUN_180627910(&texture_manager, mesh_buffer);
                
                // 清理网格名称中的特殊字符
                while ((0 < (int)string_size && 
                       (material_buffer = strstr(string_buffer, &system_buffer_ff10), material_buffer != 0))) {
                    
                    string_length = 6;
                    read_status = (int)material_buffer - (int)string_buffer;
                    if (string_size < read_status + 6U) {
                        string_length = string_size - read_status;
                    }
                    
                    material_count = read_status + string_length;
                    if (material_count < string_size) {
                        material_buffer = (int64_t)(int)material_count;
                        do {
                            *(int8_t *)((material_buffer - string_length) + string_buffer) = 
                                *(int8_t *)(material_buffer + string_buffer);
                            material_count++;
                            material_buffer++;
                        } while (material_count < string_size);
                    }
                    
                    string_size = string_size - string_length;
                    *(int8_t *)((uint64_t)string_size + string_buffer) = 0;
                }
                
                // 处理网格数据
                if (*(uint64_t *)(model_context + 8) < *(uint64_t *)(model_context + 0x10)) {
                    *(uint64_t *)(model_context + 8) = *(uint64_t *)(model_context + 8) + 0x20;
                    SystemCore_NetworkHandler0();
                } else {
                    FUN_180059820(model_context, &texture_manager);
                }
                
                // 读取网格属性
                fread(mesh_data[1], 4, 1, file_handle[1]);
                material_buffer = CoreSystem_LoggingManager0(system_memory_pool_ptr, (int64_t)mesh_data[1][0] << 2, 0x10, 3);
                fread(material_buffer, 4, (int64_t)mesh_data[1][0], file_handle[1]);
                
                // 清理缓冲区
                if (material_buffer != 0) {
                    CoreEngine_MemoryPoolManager(material_buffer);
                }
                
                if (mesh_buffer != 0) {
                    CoreEngine_MemoryPoolManager(mesh_buffer);
                }
                
                texture_manager = &system_data_buffer_ptr;
                if (string_buffer != 0) {
                    CoreEngine_MemoryPoolManager();
                }
                string_buffer = 0;
                buffer_flags = 0;
                texture_manager = &system_state_ptr;
                material_count--;
            } while (material_count != 0);
        }
        
        // 关闭文件句柄
        if (file_handle[1] != 0) {
            fclose();
            file_handle[1] = 0;
            LOCK();
            SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
            UNLOCK();
        }
    }
    
    // 最终清理
    CoreEngine_MemoryPoolManager(file_handle);
}

// 全局变量和符号警告
// 注意：以下全局变量可能与较小符号在相同地址重叠