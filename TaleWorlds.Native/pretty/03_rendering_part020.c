#include "TaleWorlds.Native.Split.h"

// 03_rendering_part020.c - 渲染系统高级材质和资源处理模块
// 包含2个核心函数，涵盖渲染系统高级材质处理、数据解析、资源管理和文件处理等功能

// 常量定义
#define RENDERING_MAX_PATH_LENGTH 260
#define RENDERING_MAGIC_NUMBER_MMD 0x31444d4d
#define RENDERING_BUFFER_SIZE 0x20
#define RENDERING_SEARCH_PATTERN_LENGTH 6
#define RENDERING_FLOAT_NORMALIZATION 0.003921569f
#define RENDERING_ARRAY_SIZE_3 3
#define RENDERING_ARRAY_SIZE_2 2

// 前向声明
void rendering_process_material_data(longlong* render_context, longlong* material_params);
void rendering_load_material_file(longlong render_context, longlong file_handle);

// 辅助函数
float rendering_normalize_color_component(uint8_t value) {
    return (float)value * RENDERING_FLOAT_NORMALIZATION;
}

void rendering_copy_color_data(uint32_t color_data, float* color_array) {
    color_array[0] = rendering_normalize_color_component((color_data >> 16) & 0xff);
    color_array[1] = rendering_normalize_color_component((color_data >> 8) & 0xff);
    color_array[2] = rendering_normalize_color_component(color_data & 0xff);
    color_array[3] = rendering_normalize_color_component((color_data >> 24) & 0xff);
}

/**
 * 渲染系统材质数据处理函数
 * 处理渲染系统的材质数据，包括材质名称解析、参数设置和资源管理
 * 
 * @param render_context 渲染上下文指针
 * @param material_params 材质参数指针
 */
void rendering_process_material_data(longlong* render_context, longlong* material_params) {
    char name_char1;
    char name_char2;
    code* function_pointer;
    undefined8 data_value;
    longlong temp_handle;
    char* name_pointer1;
    char* name_pointer2;
    ulonglong name_length;
    longlong* data_pointer;
    longlong loop_handle;
    undefined* temp_pointer;
    undefined8* param_pointer;
    undefined* temp_pointer2;
    undefined8* param_pointer2;
    char* name_pointer3;
    char* name_pointer4;
    ulonglong data_length;
    uint name_uint;
    bool comparison_result;
    undefined1 local_stack_2d8[32];
    uint local_stack_2b8[4];
    longlong* local_stack_2a8;
    undefined* local_stack_2a0;
    longlong local_stack_298;
    uint local_stack_290;
    undefined8 local_stack_288;
    undefined8 local_stack_280;
    undefined8 local_stack_278;
    float local_stack_270;
    float local_stack_26c;
    undefined8 local_stack_268;
    undefined8 local_stack_260;
    undefined8 local_stack_258;
    undefined* local_stack_250;
    longlong local_stack_248;
    int local_stack_240;
    ulonglong local_stack_238;
    undefined* local_stack_230;
    longlong local_stack_228;
    undefined4 local_stack_220;
    ulonglong local_stack_218;
    longlong* local_stack_array_210[3];
    undefined4 local_stack_1f8;
    undefined4 local_stack_1f4;
    undefined4 local_stack_1f0;
    float local_stack_1e8;
    float local_stack_1e4;
    float local_stack_1e0;
    float local_stack_1d8;
    float local_stack_1d4;
    float local_stack_1d0;
    undefined4 local_stack_1cc;
    float local_stack_1c8;
    float local_stack_1c4;
    float local_stack_1c0;
    undefined4 local_stack_1bc;
    float local_stack_1b8;
    float local_stack_1b4;
    float local_stack_1b0;
    undefined4 local_stack_1ac;
    undefined8 local_stack_1a8;
    undefined8 local_stack_1a0;
    longlong* local_stack_198;
    undefined4 local_stack_190;
    undefined4 local_stack_18c;
    undefined4 local_stack_188;
    undefined4 local_stack_184;
    undefined4 local_stack_180;
    undefined4 local_stack_17c;
    undefined4 local_stack_178;
    undefined4 local_stack_174;
    undefined8 local_stack_170;
    undefined4 local_stack_168;
    undefined4 local_stack_164;
    undefined4 local_stack_160;
    undefined4 local_stack_15c;
    undefined* local_stack_158;
    char* local_stack_150;
    int local_stack_148;
    char local_stack_140[72];
    undefined* local_stack_f8;
    undefined1* local_stack_f0;
    undefined4 local_stack_e8;
    undefined1 local_stack_e0[136];
    ulonglong local_stack_58;
    
    // 初始化局部变量
    local_stack_170 = 0xfffffffffffffffe;
    local_stack_58 = _DAT_180bf00a8 ^ (ulonglong)local_stack_2d8;
    local_stack_2b8[1] = 0;
    local_stack_2a0 = &UNK_180a3c3e0;
    local_stack_288 = 0;
    local_stack_298 = 0;
    local_stack_290 = 0;
    
    // 处理材质名称
    name_pointer4 = "name";
    do {
        name_pointer3 = name_pointer4;
        name_pointer4 = name_pointer3 + 1;
    } while (*name_pointer4 != '\0');
    
    // 遍历材质参数链表
    for (param_pointer = (undefined8*)material_params[8]; 
         local_stack_2a8 = material_params, param_pointer != (undefined8*)0x0;
         param_pointer = (undefined8*)param_pointer[6]) {
        
        name_pointer4 = (char*)*param_pointer;
        if (name_pointer4 == (char*)0x0) {
            name_pointer4 = (char*)0x180d48d24;
            name_pointer2 = (char*)0x0;
        } else {
            name_pointer2 = (char*)param_pointer[2];
        }
        
        // 检查材质名称匹配
        if (name_pointer2 == name_pointer3 + -0x180a03a83) {
            name_pointer2 = name_pointer2 + (longlong)name_pointer4;
            if (name_pointer2 <= name_pointer4) {
            LAB_18027a8f4:
                loop_handle = 0x180d48d24;
                if (param_pointer[1] != 0) {
                    loop_handle = param_pointer[1];
                }
                rendering_add_material_name(&local_stack_2a0, loop_handle);
                break;
            }
            
            loop_handle = (longlong)&DAT_180a03a84 - (longlong)name_pointer4;
            while (*name_pointer4 == name_pointer4[loop_handle]) {
                name_pointer4 = name_pointer4 + 1;
                if (name_pointer2 <= name_pointer4) goto LAB_18027a8f4;
            }
        }
    }
    
    // 处理材质数据
    if (0 < (int)local_stack_290) {
        loop_handle = rendering_create_material_data(_DAT_180c86930, &local_stack_2a0, 1);
        name_uint = local_stack_290;
        
        if (loop_handle == 0) {
            data_length = (ulonglong)local_stack_290;
            if (local_stack_298 != 0) {
                rendering_copy_material_data(render_context + 0x3e, data_length);
            }
            
            if (name_uint != 0) {
                // 复制材质数据
                memcpy(render_context[0x3f], local_stack_298, name_uint);
            }
            
            *(undefined4*)(render_context + 0x40) = 0;
            if (render_context[0x3f] != 0) {
                *(undefined1*)(data_length + render_context[0x3f]) = 0;
            }
            
            *(undefined4*)((longlong)render_context + 0x20c) = local_stack_288._4_4_;
        } else {
            rendering_process_material_error(loop_handle, render_context, 1);
        }
    }
    
    // 处理材质参数
    local_stack_250 = &UNK_180a3c3e0;
    local_stack_238 = 0;
    local_stack_248 = 0;
    local_stack_240 = 0;
    
    name_pointer4 = "material";
    do {
        name_pointer3 = name_pointer4;
        name_pointer4 = name_pointer3 + 1;
    } while (*name_pointer4 != '\0');
    
    // 遍历材质参数链表
    for (param_pointer = (undefined8*)material_params[8]; param_pointer != (undefined8*)0x0;
         param_pointer = (undefined8*)param_pointer[6]) {
        
        name_pointer4 = (char*)*param_pointer;
        if (name_pointer4 == (char*)0x0) {
            name_pointer4 = (char*)0x180d48d24;
            name_pointer2 = (char*)0x0;
        } else {
            name_pointer2 = (char*)param_pointer[2];
        }
        
        // 检查材质参数匹配
        if (name_pointer2 == name_pointer3 + -0x180a04ebf) {
            name_pointer2 = name_pointer4 + (longlong)name_pointer2;
            if (name_pointer2 <= name_pointer4) {
            LAB_18027aa35:
                loop_handle = 0x180d48d24;
                if (param_pointer[1] != 0) {
                    loop_handle = param_pointer[1];
                }
                rendering_add_material_name(&local_stack_250, loop_handle);
                break;
            }
            
            loop_handle = (longlong)&UNK_180a04ec0 - (longlong)name_pointer4;
            while (*name_pointer4 == name_pointer4[loop_handle]) {
                name_pointer4 = name_pointer4 + 1;
                if (name_pointer2 <= name_pointer4) goto LAB_18027aa35;
            }
        }
    }
    
    // 处理材质数据
    if (0 < local_stack_240) {
        function_pointer = *(code**)(*render_context + 0x118);
        data_value = rendering_create_material_handle(_DAT_180c86930, &local_stack_198, &local_stack_250, 1);
        (*function_pointer)(render_context, data_value);
        
        if (local_stack_198 != (longlong*)0x0) {
            (**(code**)(*local_stack_198 + 0x38))();
        }
    }
    
    // 处理材质资源
    local_stack_250 = &UNK_180a3c3e0;
    if (local_stack_248 != 0) {
        rendering_cleanup_material_resources();
    }
    
    local_stack_248 = 0;
    local_stack_238 = local_stack_238 & 0xffffffff00000000;
    local_stack_250 = &UNK_18098bcb0;
    param_pointer = (undefined8*)material_params[6];
    
    if (param_pointer != (undefined8*)0x0) {
    LAB_18027aad4:
        do {
            local_stack_280 = &UNK_180a3c3e0;
            local_stack_268 = 0;
            local_stack_278 = 0;
            local_stack_270 = 0.0;
            
            // 处理材质名称
            name_pointer4 = "name";
            do {
                name_pointer3 = name_pointer4;
                name_pointer4 = name_pointer3 + 1;
            } while (*name_pointer4 != '\0');
            
            // 遍历材质参数链表
            for (param_pointer2 = (undefined8*)param_pointer[8]; param_pointer2 != (undefined8*)0x0;
                 param_pointer2 = (undefined8*)param_pointer2[6]) {
                
                name_pointer4 = (char*)*param_pointer2;
                if (name_pointer4 == (char*)0x0) {
                    name_pointer4 = (char*)0x180d48d24;
                    name_pointer2 = (char*)0x0;
                } else {
                    name_pointer2 = (char*)param_pointer2[2];
                }
                
                // 检查材质名称匹配
                if (name_pointer2 == name_pointer3 + -0x180a03a83) {
                    name_pointer2 = name_pointer4 + (longlong)name_pointer2;
                    if (name_pointer2 <= name_pointer4) {
                    LAB_18027ab65:
                        loop_handle = 0x180d48d24;
                        if (param_pointer2[1] != 0) {
                            loop_handle = param_pointer2[1];
                        }
                        rendering_add_material_name(&local_stack_280, loop_handle);
                        break;
                    }
                    
                    loop_handle = (longlong)&DAT_180a03a84 - (longlong)name_pointer4;
                    while (*name_pointer4 == name_pointer4[loop_handle]) {
                        name_pointer4 = name_pointer4 + 1;
                        if (name_pointer2 <= name_pointer4) goto LAB_18027ab65;
                    }
                }
            }
            
            // 处理材质数据
            data_length = 0;
            loop_handle = render_context[7];
            data_value = data_length;
            
            if (render_context[8] - loop_handle >> 4 != 0) {
                do {
                    temp_pointer = &UNK_1809fcc58;
                    loop_handle = *(longlong*)(loop_handle + data_length * 0x10);
                    
                    if (*(longlong*)(loop_handle + 0x1b0) == 0) {
                        temp_handle = loop_handle + 0x10;
                    } else {
                        temp_handle = rendering_allocate_material_buffer();
                    }
                    
                    local_stack_150 = local_stack_140;
                    local_stack_140[0] = '\0';
                    local_stack_148 = *(int*)(temp_handle + 0x10);
                    temp_pointer2 = &DAT_18098bc73;
                    
                    if (*(undefined**)(temp_handle + 8) != (undefined*)0x0) {
                        temp_pointer2 = *(undefined**)(temp_handle + 8);
                    }
                    
                    local_stack_158 = temp_pointer;
                    strcpy_s(local_stack_140, 0x40, temp_pointer2);
                    
                    // 比较材质数据
                    if ((float)local_stack_148 == local_stack_270) {
                        if (local_stack_148 == 0) {
                        LAB_18027ac8e:
                            if (local_stack_270 != 0.0) goto LAB_18027ac96;
                            comparison_result = true;
                        } else {
                            name_pointer4 = local_stack_150;
                            do {
                                name_char1 = *name_pointer4;
                                name_char2 = name_pointer4[local_stack_278 - (longlong)local_stack_150];
                                if (name_char1 != name_char2) break;
                                name_pointer4 = name_pointer4 + 1;
                            } while (name_char2 != '\0');
                            comparison_result = name_char1 == name_char2;
                        }
                    } else {
                        if (local_stack_148 == 0) goto LAB_18027ac8e;
                    LAB_18027ac96:
                        comparison_result = false;
                    }
                    
                    // 处理材质数据
                    if (comparison_result) {
                        local_stack_2b8[0] = 0;
                        local_stack_f8 = &UNK_1809fcc28;
                        local_stack_f0 = local_stack_e0;
                        local_stack_e8 = 0;
                        local_stack_e0[0] = 0;
                        
                        // 处理材质名称
                        name_pointer4 = "material";
                        do {
                            name_pointer3 = name_pointer4;
                            name_pointer4 = name_pointer3 + 1;
                        } while (*name_pointer4 != '\0');
                        
                        // 遍历材质参数链表
                        for (param_pointer2 = (undefined8*)param_pointer[8]; param_pointer2 != (undefined8*)0x0;
                             param_pointer2 = (undefined8*)param_pointer2[6]) {
                            
                            name_pointer4 = (char*)*param_pointer2;
                            if (name_pointer4 == (char*)0x0) {
                                name_pointer4 = (char*)0x180d48d24;
                                name_pointer2 = (char*)0x0;
                            } else {
                                name_pointer2 = (char*)param_pointer2[2];
                            }
                            
                            // 检查材质名称匹配
                            if (name_pointer2 == name_pointer3 + -0x180a04ebf) {
                                name_pointer2 = name_pointer2 + (longlong)name_pointer4;
                                if (name_pointer2 <= name_pointer4) {
                                LAB_18027ad47:
                                    temp_handle = 0x180d48d24;
                                    if (param_pointer2[1] != 0) {
                                        temp_handle = param_pointer2[1];
                                    }
                                    rendering_add_material_handle(&local_stack_f8, temp_handle);
                                    data_value = rendering_create_material_handle(_DAT_180c86930, local_stack_array_210, &local_stack_f8, 1);
                                    rendering_apply_material_data(loop_handle, data_value);
                                    
                                    if (local_stack_array_210[0] != (longlong*)0x0) {
                                        (**(code**)(*local_stack_array_210[0] + 0x38))();
                                    }
                                    break;
                                }
                                
                                temp_handle = (longlong)&UNK_180a04ec0 - (longlong)name_pointer4;
                                while (*name_pointer4 == name_pointer4[temp_handle]) {
                                    name_pointer4 = name_pointer4 + 1;
                                    if (name_pointer2 <= name_pointer4) goto LAB_18027ad47;
                                }
                            }
                        }
                        
                        // 处理材质因子
                        name_pointer4 = "factor";
                        do {
                            name_pointer3 = name_pointer4;
                            name_pointer4 = name_pointer3 + 1;
                        } while (*name_pointer4 != '\0');
                        
                        // 遍历材质参数链表
                        for (param_pointer2 = (undefined8*)param_pointer[8]; param_pointer2 != (undefined8*)0x0;
                             param_pointer2 = (undefined8*)param_pointer2[6]) {
                            
                            name_pointer4 = (char*)*param_pointer2;
                            if (name_pointer4 == (char*)0x0) {
                                name_pointer4 = (char*)0x180d48d24;
                                name_pointer2 = (char*)0x0;
                            } else {
                                name_pointer2 = (char*)param_pointer2[2];
                            }
                            
                            // 检查材质因子匹配
                            if (name_pointer2 == name_pointer3 + -0x180a1674b) {
                                name_pointer2 = name_pointer2 + (longlong)name_pointer4;
                                if (name_pointer2 <= name_pointer4) {
                                LAB_18027ae16:
                                    temp_handle = 0x180d48d24;
                                    if (param_pointer2[1] != 0) {
                                        temp_handle = param_pointer2[1];
                                    }
                                    rendering_extract_color_data(temp_handle, &UNK_180a063a0, local_stack_2b8);
                                    rendering_copy_color_data(local_stack_2b8[0], (float*)(loop_handle + 0x238));
                                    break;
                                }
                                
                                temp_handle = (longlong)&UNK_180a1674c - (longlong)name_pointer4;
                                while (*name_pointer4 == name_pointer4[temp_handle]) {
                                    name_pointer4 = name_pointer4 + 1;
                                    if (name_pointer2 <= name_pointer4) goto LAB_18027ae16;
                                }
                            }
                        }
                        
                        // 处理第二材质因子
                        name_pointer4 = "factor2";
                        do {
                            name_pointer3 = name_pointer4;
                            name_pointer4 = name_pointer3 + 1;
                        } while (*name_pointer4 != '\0');
                        
                        // 遍历材质参数链表
                        for (param_pointer2 = (undefined8*)param_pointer[8]; param_pointer2 != (undefined8*)0x0;
                             param_pointer2 = (undefined8*)param_pointer2[6]) {
                            
                            name_pointer4 = (char*)*param_pointer2;
                            if (name_pointer4 == (char*)0x0) {
                                name_pointer2 = (char*)0x0;
                                name_pointer4 = (char*)0x180d48d24;
                            } else {
                                name_pointer2 = (char*)param_pointer2[2];
                            }
                            
                            // 检查第二材质因子匹配
                            if (name_pointer2 == name_pointer3 + -0x180a167ff) {
                                name_pointer2 = name_pointer2 + (longlong)name_pointer4;
                                if (name_pointer2 <= name_pointer4) {
                                LAB_18027af15:
                                    temp_handle = 0x180d48d24;
                                    if (param_pointer2[1] != 0) {
                                        temp_handle = param_pointer2[1];
                                    }
                                    rendering_extract_color_data(temp_handle, &UNK_180a063a0, local_stack_2b8);
                                    rendering_copy_color_data(local_stack_2b8[0], (float*)(loop_handle + 0x248));
                                    break;
                                }
                                
                                temp_handle = (longlong)&UNK_180a16800 - (longlong)name_pointer4;
                                while (*name_pointer4 == name_pointer4[temp_handle]) {
                                    name_pointer4 = name_pointer4 + 1;
                                    if (name_pointer2 <= name_pointer4) goto LAB_18027af15;
                                }
                            }
                        }
                        
                        // 处理材质参数
                        temp_handle = rendering_extract_material_params(param_pointer, &UNK_180a167e0, &local_stack_190);
                        if (temp_handle != 0) {
                            *(undefined4*)(loop_handle + 0x2a8) = local_stack_190;
                            *(undefined4*)(loop_handle + 0x2ac) = local_stack_18c;
                            *(undefined4*)(loop_handle + 0x2b0) = local_stack_188;
                            *(undefined4*)(loop_handle + 0x2b4) = local_stack_184;
                        }
                        
                        temp_handle = rendering_extract_material_params(param_pointer, &UNK_180a167f0, &local_stack_190);
                        if (temp_handle != 0) {
                            *(undefined4*)(loop_handle + 0x2b8) = local_stack_190;
                            *(undefined4*)(loop_handle + 700) = local_stack_18c;
                            *(undefined4*)(loop_handle + 0x2c0) = local_stack_188;
                            *(undefined4*)(loop_handle + 0x2c4) = local_stack_184;
                        }
                        
                        local_stack_f8 = &UNK_18098bcb0;
                    }
                    
                    local_stack_158 = &UNK_18098bcb0;
                    name_uint = (int)data_value + 1;
                    data_length = data_length + 1;
                    loop_handle = render_context[7];
                    data_value = (ulonglong)name_uint;
                } while ((ulonglong)(longlong)(int)name_uint < (ulonglong)(render_context[8] - loop_handle >> 4));
            }
            
            local_stack_280 = &UNK_180a3c3e0;
            if (local_stack_278 != 0) {
                rendering_cleanup_material_resources();
            }
            
            local_stack_278 = 0;
            local_stack_268 = local_stack_268 & 0xffffffff00000000;
            local_stack_280 = &UNK_18098bcb0;
            
            // 处理网格数据
            name_pointer4 = "mesh";
            do {
                name_pointer3 = name_pointer4;
                name_pointer4 = name_pointer3 + 1;
            } while (*name_pointer4 != '\0');
            
            while (true) {
                do {
                    param_pointer = (undefined8*)param_pointer[0xb];
                    material_params = local_stack_2a8;
                    if (param_pointer == (undefined8*)0x0) goto LAB_18027b0de;
                    
                    name_pointer4 = (char*)*param_pointer;
                    if (name_pointer4 == (char*)0x0) {
                        name_pointer4 = (char*)0x180d48d24;
                        name_pointer2 = (char*)0x0;
                    } else {
                        name_pointer2 = (char*)param_pointer[2];
                    }
                } while (name_pointer2 != name_pointer3 + -0x180a0f3e7);
                
                name_pointer2 = name_pointer4 + (longlong)name_pointer2;
                if (name_pointer2 <= name_pointer4) break;
                
                loop_handle = (longlong)&UNK_180a0f3e8 - (longlong)name_pointer4;
                while (*name_pointer4 == name_pointer4[loop_handle]) {
                    name_pointer4 = name_pointer4 + 1;
                    if (name_pointer2 <= name_pointer4) goto LAB_18027aad4;
                }
            }
        } while (true);
    }
    
LAB_18027b0de:
    local_stack_2b8[2] = 0;
    
    // 处理修改ID
    name_pointer4 = "modified_id";
    do {
        name_pointer3 = name_pointer4;
        name_pointer4 = name_pointer3 + 1;
    } while (*name_pointer4 != '\0');
    
    param_pointer = (undefined8*)material_params[8];
    do {
        if (param_pointer == (undefined8*)0x0) goto LAB_18027b1b5;
        
        name_pointer4 = (char*)*param_pointer;
        if (name_pointer4 == (char*)0x0) {
            name_pointer4 = (char*)0x180d48d24;
            name_pointer2 = (char*)0x0;
        } else {
            name_pointer2 = (char*)param_pointer[2];
        }
        
        // 检查修改ID匹配
        if (name_pointer2 == name_pointer3 + -0x180a16827) {
            name_pointer2 = name_pointer2 + (longlong)name_pointer4;
            if (name_pointer2 <= name_pointer4) {
            LAB_18027b154:
                name_pointer4 = (char*)0x180d48d24;
                if ((char*)param_pointer[1] != (char*)0x0) {
                    name_pointer4 = (char*)param_pointer[1];
                }
                
                data_length = 0xffffffffffffffff;
                do {
                    data_length = data_length + 1;
                } while (name_pointer4[data_length] != '\0');
                
                if (((data_length < 3) || (*name_pointer4 != '0')) ||
                    (temp_pointer = &UNK_180a3cb84, (name_pointer4[1] + 0xa8U & 0xdf) != 0)) {
                    temp_pointer = &UNK_180a063a0;
                }
                
                rendering_extract_color_data(name_pointer4, temp_pointer, local_stack_2b8 + 2);
                *(uint*)((longlong)render_context + 0x324) = local_stack_2b8[2];
            LAB_18027b1b5:
                *(undefined1*)((longlong)render_context + 0x32c) = 0;
                local_stack_230 = &UNK_180a3c3e0;
                local_stack_218 = 0;
                local_stack_228 = 0;
                local_stack_220 = 0;
                
                // 处理第二材质
                name_pointer4 = "second_material";
                do {
                    name_pointer3 = name_pointer4;
                    name_pointer4 = name_pointer3 + 1;
                } while (*name_pointer4 != '\0');
                
                param_pointer = (undefined8*)material_params[8];
                do {
                    if (param_pointer == (undefined8*)0x0) {
                    LAB_18027b312:
                        // 处理渲染参数
                        local_stack_180 = (undefined4)render_context[0x6c];
                        local_stack_17c = *(undefined4*)((longlong)render_context + 0x364);
                        local_stack_178 = (undefined4)render_context[0x6d];
                        local_stack_174 = *(undefined4*)((longlong)render_context + 0x36c);
                        
                        rendering_process_render_params(render_context + 0x66, &local_stack_1f8);
                        rendering_extract_render_values(render_context + 0x66, &local_stack_1e8);
                        
                        rendering_extract_material_params(material_params, &UNK_180a16808, &local_stack_180);
                        rendering_extract_material_params(material_params, &UNK_180a16818, &local_stack_1f8);
                        rendering_extract_material_params(material_params, &UNK_180a0f108, &local_stack_1e8);
                        
                        local_stack_1a8 = CONCAT44(local_stack_17c, local_stack_180);
                        local_stack_1a0 = CONCAT44(local_stack_174, local_stack_178);
                        
                        // 设置渲染参数
                        local_stack_280 = (undefined*)0x3f800000;
                        local_stack_278 = 0;
                        local_stack_270 = 0.0;
                        local_stack_26c = 1.0;
                        local_stack_268 = 0;
                        local_stack_260 = 0;
                        local_stack_258 = 0x3f800000;
                        
                        rendering_process_render_values(&local_stack_280, local_stack_1f0);
                        rendering_process_render_values(&local_stack_280, local_stack_1f8);
                        rendering_process_render_values(&local_stack_280, local_stack_1f4);
                        
                        local_stack_1cc = local_stack_278._4_4_;
                        local_stack_1bc = local_stack_268._4_4_;
                        local_stack_1ac = local_stack_258._4_4_;
                        
                        local_stack_1d8 = (float)local_stack_280 * local_stack_1e8;
                        local_stack_1d4 = local_stack_280._4_4_ * local_stack_1e8;
                        local_stack_1d0 = (float)local_stack_278 * local_stack_1e8;
                        local_stack_1c8 = local_stack_270 * local_stack_1e4;
                        local_stack_1c4 = local_stack_26c * local_stack_1e4;
                        local_stack_1c0 = (float)local_stack_268 * local_stack_1e4;
                        local_stack_1b8 = (float)local_stack_260 * local_stack_1e0;
                        local_stack_1b4 = local_stack_260._4_4_ * local_stack_1e0;
                        local_stack_1b0 = (float)local_stack_258 * local_stack_1e0;
                        
                        // 应用渲染参数
                        (**(code**)(*render_context + 0x148))(render_context, &local_stack_1d8);
                        rendering_update_render_state(render_context, (longlong)render_context + 0x214, 1);
                        
                        loop_handle = rendering_extract_material_params(material_params, &UNK_180a167f0, &local_stack_168);
                        if ((loop_handle != 0) && (data_pointer = (longlong*)render_context[7], data_pointer < (longlong*)render_context[8])) {
                            do {
                                loop_handle = *data_pointer;
                                *(undefined4*)(loop_handle + 0x2b8) = local_stack_168;
                                *(undefined4*)(loop_handle + 700) = local_stack_164;
                                *(undefined4*)(loop_handle + 0x2c0) = local_stack_160;
                                *(undefined4*)(loop_handle + 0x2c4) = local_stack_15c;
                                data_pointer = data_pointer + 2;
                            } while (data_pointer < (longlong*)render_context[8]);
                        }
                        
                        local_stack_230 = &UNK_180a3c3e0;
                        if (local_stack_228 != 0) {
                            rendering_cleanup_material_resources();
                        }
                        
                        local_stack_228 = 0;
                        local_stack_218 = local_stack_218 & 0xffffffff00000000;
                        local_stack_230 = &UNK_18098bcb0;
                        local_stack_2a0 = &UNK_180a3c3e0;
                        
                        if (local_stack_298 != 0) {
                            rendering_cleanup_material_resources();
                        }
                        
                        local_stack_298 = 0;
                        local_stack_288 = local_stack_288 & 0xffffffff00000000;
                        local_stack_2a0 = &UNK_18098bcb0;
                        
                        // 执行最终控制
                        rendering_execute_final_control(local_stack_58 ^ (ulonglong)local_stack_2d8);
                    }
                    
                    name_pointer4 = (char*)*param_pointer;
                    if (name_pointer4 == (char*)0x0) {
                        name_pointer4 = (char*)0x180d48d24;
                        name_pointer2 = (char*)0x0;
                    } else {
                        name_pointer2 = (char*)param_pointer[2];
                    }
                    
                    // 检查第二材质匹配
                    if (name_pointer2 == name_pointer3 + -0x180a1683f) {
                        name_pointer2 = name_pointer2 + (longlong)name_pointer4;
                        if (name_pointer2 <= name_pointer4) {
                        LAB_18027b254:
                            loop_handle = 0x180d48d24;
                            if (param_pointer[1] != 0) {
                                loop_handle = param_pointer[1];
                            }
                            
                            rendering_add_material_handle(&local_stack_230, loop_handle);
                            data_pointer = (longlong*)rendering_create_material_handle(_DAT_180c86930, local_stack_array_210, &local_stack_230, 1);
                            local_stack_2b8[1] = 4;
                            data_pointer = (longlong*)*data_pointer;
                            
                            if (data_pointer != (longlong*)0x0) {
                                local_stack_2a8 = data_pointer;
                                (**(code**)(*data_pointer + 0x28))(data_pointer);
                            }
                            
                            local_stack_2a8 = (longlong*)render_context[0x77];
                            render_context[0x77] = (longlong)data_pointer;
                            
                            if (local_stack_2a8 != (longlong*)0x0) {
                                (**(code**)(*local_stack_2a8 + 0x38))();
                            }
                            
                            local_stack_2b8[1] = 0;
                            if (local_stack_array_210[0] != (longlong*)0x0) {
                                (**(code**)(*local_stack_array_210[0] + 0x38))();
                            }
                            
                            rendering_create_material_handle(_DAT_180c86930, &local_stack_2a8, &local_stack_230, 1);
                            local_stack_2b8[1] = 0;
                            
                            if (local_stack_2a8 != (longlong*)0x0) {
                                (**(code**)(*local_stack_2a8 + 0x38))();
                            }
                            
                            goto LAB_18027b312;
                        }
                        
                        loop_handle = (longlong)&UNK_180a16840 - (longlong)name_pointer4;
                        while (*name_pointer4 == name_pointer4[loop_handle]) {
                            name_pointer4 = name_pointer4 + 1;
                            if (name_pointer2 <= name_pointer4) goto LAB_18027b254;
                        }
                    }
                    
                    param_pointer = (undefined8*)param_pointer[6];
                } while (true);
            }
            
            loop_handle = (longlong)&UNK_180a16828 - (longlong)name_pointer4;
            while (*name_pointer4 == name_pointer4[loop_handle]) {
                name_pointer4 = name_pointer4 + 1;
                if (name_pointer2 <= name_pointer4) goto LAB_18027b154;
            }
        }
        
        param_pointer = (undefined8*)param_pointer[6];
    } while (true);
}

/**
 * 渲染系统材质文件加载函数
 * 加载材质文件并处理相关数据
 * 
 * @param render_context 渲染上下文指针
 * @param file_handle 文件句柄
 */
void rendering_load_material_file(longlong render_context, longlong file_handle) {
    int file_result;
    undefined8* file_pointer;
    longlong data_handle;
    longlong temp_handle;
    undefined* temp_pointer;
    ulonglong data_length;
    uint name_uint;
    int index1;
    int index2;
    int local_stack_array_10[2];
    int local_stack_array_18[2];
    int local_stack_array_20[2];
    int local_stack_98;
    int local_stack_94;
    uint local_stack_array_90[2];
    undefined* local_stack_88;
    longlong local_stack_80;
    uint local_stack_78;
    undefined4 local_stack_70;
    undefined* local_stack_68;
    longlong local_stack_60;
    uint local_stack_58;
    undefined4 local_stack_50;
    undefined1 local_stack_48[4];
    undefined1 local_stack_44[4];
    undefined8 local_stack_40;
    
    // 初始化局部变量
    local_stack_40 = 0xfffffffffffffffe;
    file_pointer = (undefined8*)rendering_allocate_file_buffer(_DAT_180c8ed18, 0x18, 8, 3);
    temp_pointer = &DAT_18098bc73;
    
    if (*(undefined**)(file_handle + 8) != (undefined*)0x0) {
        temp_pointer = *(undefined**)(file_handle + 8);
    }
    
    file_result = 0;
    *file_pointer = 0;
    *(undefined1*)(file_pointer + 2) = 0;
    
    rendering_initialize_file_buffer(file_pointer, temp_pointer, &UNK_180a01ff0);
    
    if (file_pointer[1] != 0) {
        fread(local_stack_array_90, 4, 1);
        
        // 检查文件魔数
        if (local_stack_array_90[0] == RENDERING_MAGIC_NUMBER_MMD) {
            fread(&local_stack_94, 4, 1, file_pointer[1]);
            
            if (0 < local_stack_94) {
                do {
                    fread(local_stack_array_18, 4, 1, file_pointer[1]);
                    data_handle = rendering_allocate_file_buffer(_DAT_180c8ed18, (longlong)(local_stack_array_18[0] + 1), 0x10, 3);
                    fread(data_handle, 1, (longlong)local_stack_array_18[0], file_pointer[1]);
                    *(undefined1*)(local_stack_array_18[0] + data_handle) = 0;
                    
                    rendering_add_material_handle(&local_stack_68, data_handle);
                    
                    // 处理材质数据
                    while ((0 < (int)local_stack_58 && (temp_handle = strstr(local_stack_60, &DAT_180a0ff10), temp_handle != 0))) {
                        index2 = RENDERING_SEARCH_PATTERN_LENGTH;
                        index1 = (int)temp_handle - (int)local_stack_60;
                        
                        if (local_stack_58 < index1 + RENDERING_SEARCH_PATTERN_LENGTH) {
                            index2 = local_stack_58 - index1;
                        }
                        
                        name_uint = index1 + index2;
                        if (name_uint < local_stack_58) {
                            temp_handle = (longlong)(int)name_uint;
                            do {
                                *(undefined1*)((temp_handle - index2) + local_stack_60) = *(undefined1*)(temp_handle + local_stack_60);
                                name_uint = name_uint + 1;
                                temp_handle = temp_handle + 1;
                            } while (name_uint < local_stack_58);
                        }
                        
                        local_stack_58 = local_stack_58 - index2;
                        *(undefined1*)((ulonglong)local_stack_58 + local_stack_60) = 0;
                    }
                    
                    // 处理材质数据
                    if (*(ulonglong*)(render_context + 8) < *(ulonglong*)(render_context + 0x10)) {
                        *(ulonglong*)(render_context + 8) = *(ulonglong*)(render_context + 8) + RENDERING_BUFFER_SIZE;
                        rendering_expand_material_buffer();
                    } else {
                        rendering_add_material_to_context(render_context, &local_stack_68);
                    }
                    
                    fread(local_stack_44, 4, 1, file_pointer[1]);
                    fread(&local_stack_98, 4, 1, file_pointer[1]);
                    
                    temp_handle = rendering_allocate_file_buffer(_DAT_180c8ed18, (longlong)local_stack_98 << 2, 0x10, 3);
                    fread(temp_handle, 4, (longlong)local_stack_98, file_pointer[1]);
                    
                    if (temp_handle != 0) {
                        rendering_cleanup_file_buffer(temp_handle);
                    }
                    
                    if (data_handle != 0) {
                        rendering_cleanup_file_buffer(data_handle);
                    }
                    
                    local_stack_68 = &UNK_180a3c3e0;
                    if (local_stack_60 != 0) {
                        rendering_cleanup_material_resources();
                    }
                    
                    local_stack_60 = 0;
                    local_stack_50 = 0;
                    local_stack_68 = &UNK_18098bcb0;
                    file_result = file_result + 1;
                } while (file_result < local_stack_94);
            }
        } else if (0 < (int)local_stack_array_90[0]) {
            // 处理其他材质数据
            data_length = (ulonglong)local_stack_array_90[0];
            do {
                fread(local_stack_array_10, 4, 1, file_pointer[1]);
                data_handle = rendering_allocate_file_buffer(_DAT_180c8ed18, (longlong)(local_stack_array_10[0] + 1), 0x10, 3);
                fread(data_handle, 1, (longlong)local_stack_array_10[0], file_pointer[1]);
                *(undefined1*)(local_stack_array_10[0] + data_handle) = 0;
                
                fread(local_stack_48, 4, 1, file_pointer[1]);
                rendering_add_material_handle(&local_stack_88, data_handle);
                
                // 处理材质数据
                while ((0 < (int)local_stack_78 && (temp_handle = strstr(local_stack_80, &DAT_180a0ff10), temp_handle != 0))) {
                    index1 = RENDERING_SEARCH_PATTERN_LENGTH;
                    file_result = (int)temp_handle - (int)local_stack_80;
                    
                    if (local_stack_78 < file_result + RENDERING_SEARCH_PATTERN_LENGTH) {
                        index1 = local_stack_78 - file_result;
                    }
                    
                    name_uint = file_result + index1;
                    if (name_uint < local_stack_78) {
                        temp_handle = (longlong)(int)name_uint;
                        do {
                            *(undefined1*)((temp_handle - index1) + local_stack_80) = *(undefined1*)(temp_handle + local_stack_80);
                            name_uint = name_uint + 1;
                            temp_handle = temp_handle + 1;
                        } while (name_uint < local_stack_78);
                    }
                    
                    local_stack_78 = local_stack_78 - index1;
                    *(undefined1*)((ulonglong)local_stack_78 + local_stack_80) = 0;
                }
                
                // 处理材质数据
                if (*(ulonglong*)(render_context + 8) < *(ulonglong*)(render_context + 0x10)) {
                    *(ulonglong*)(render_context + 8) = *(ulonglong*)(render_context + 8) + RENDERING_BUFFER_SIZE;
                    rendering_expand_material_buffer();
                } else {
                    rendering_add_material_to_context(render_context, &local_stack_88);
                }
                
                fread(local_stack_array_20, 4, 1, file_pointer[1]);
                temp_handle = rendering_allocate_file_buffer(_DAT_180c8ed18, (longlong)local_stack_array_20[0] << 2, 0x10, 3);
                fread(temp_handle, 4, (longlong)local_stack_array_20[0], file_pointer[1]);
                
                if (temp_handle != 0) {
                    rendering_cleanup_file_buffer(temp_handle);
                }
                
                if (data_handle != 0) {
                    rendering_cleanup_file_buffer(data_handle);
                }
                
                local_stack_88 = &UNK_180a3c3e0;
                if (local_stack_80 != 0) {
                    rendering_cleanup_material_resources();
                }
                
                local_stack_80 = 0;
                local_stack_70 = 0;
                local_stack_88 = &UNK_18098bcb0;
                data_length = data_length - 1;
            } while (data_length != 0);
        }
        
        // 关闭文件
        if (file_pointer[1] != 0) {
            fclose();
            file_pointer[1] = 0;
            LOCK();
            _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
            UNLOCK();
        }
    }
    
    // 清理资源
    rendering_cleanup_file_buffer(file_pointer);
}

// 函数别名映射（保持向后兼容性）
void FUN_18027a810(longlong *param_1, longlong *param_2) __attribute__((alias("rendering_process_material_data")));
void FUN_18027b5d0(longlong param_1, longlong param_2) __attribute__((alias("rendering_load_material_file")));

// 辅助函数声明
void rendering_add_material_name(undefined8* stack_ptr, longlong name_handle);
longlong rendering_create_material_data(undefined8 data_ptr, undefined8* stack_ptr, int param);
void rendering_process_material_error(longlong error_handle, longlong* render_context, int param);
void rendering_copy_material_data(longlong* dest, ulonglong size);
void rendering_add_material_handle(undefined8* stack_ptr, longlong handle);
longlong rendering_create_material_handle(undefined8 data_ptr, longlong** array_ptr, undefined8* stack_ptr, int param);
void rendering_cleanup_material_resources(void);
longlong rendering_allocate_material_buffer(void);
void rendering_extract_color_data(longlong handle, undefined8* pattern_ptr, uint* output_array);
void rendering_apply_material_data(longlong material_handle, undefined8 data_value);
longlong rendering_extract_material_params(undefined8* param_ptr, undefined8* pattern_ptr, undefined4* output_ptr);
void rendering_process_render_params(longlong* render_context, undefined4* output_ptr);
void rendering_extract_render_values(longlong* render_context, float* output_ptr);
void rendering_process_render_values(undefined8* stack_ptr, undefined4* input_ptr);
void rendering_update_render_state(longlong* render_context, longlong state_ptr, int param);
void rendering_execute_final_control(ulonglong control_param);
void rendering_initialize_file_buffer(undefined8* file_ptr, undefined* name_ptr, undefined8* pattern_ptr);
undefined8* rendering_allocate_file_buffer(undefined8 data_ptr, longlong size, longlong param1, longlong param2);
void rendering_expand_material_buffer(void);
void rendering_add_material_to_context(longlong* render_context, undefined8* material_ptr);
void rendering_cleanup_file_buffer(undefined8* buffer_ptr);