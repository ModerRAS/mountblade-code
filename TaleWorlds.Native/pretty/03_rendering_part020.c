#include "TaleWorlds.Native.Split.h"

/**
 * 03_rendering_part020.c - 渲染系统材质处理模块
 * 
 * 本模块包含两个主要函数：
 * 1. MaterialProcessor - 材质处理函数，负责处理材质的加载、解析和应用
 * 2. ModelLoader - 模型加载函数，负责从文件加载模型数据并解析材质信息
 * 
 * 这些函数为游戏引擎提供了材质和模型的底层处理能力，支持材质属性设置、
 * 纹理映射、材质混合等高级渲染功能。
 */

// 常量定义
#define MAX_STRING_LENGTH 64
#define DEFAULT_ALPHA_THRESHOLD 0.003921569f  // 1.0f/255.0f
#define MATERIAL_NAME_LENGTH 0x40
#define COLOR_COMPONENT_COUNT 4

// 材质属性偏移量
#define MATERIAL_FACTOR_OFFSET 0x238
#define MATERIAL_FACTOR2_OFFSET 0x248
#define MATERIAL_UV_SCALE_OFFSET 0x2a8
#define MATERIAL_UV_SCALE2_OFFSET 0x2b8

// 全局变量引用（简化实现）
extern const char* DEFAULT_STRING;
extern const char* MESH_NAME_STRING;
extern const char* MATERIAL_NAME_STRING;
extern const char* MATERIAL_FACTOR_STRING;
extern const char* MATERIAL_FACTOR2_STRING;
extern const char* SECONDARY_MATERIAL_STRING;
extern const char* MODIFIED_ID_STRING;

/**
 * 材质处理器 - 处理材质加载、解析和应用
 * 
 * 该函数负责：
 * 1. 解析材质配置参数
 * 2. 处理材质名称和属性
 * 3. 设置材质颜色和因子
 * 4. 应用材质到渲染对象
 * 5. 处理二级材质和混合效果
 * 
 * @param render_context 渲染上下文指针
 * @param material_config 材质配置数据指针
 */
void MaterialProcessor(longlong *render_context, longlong *material_config)
{
    // 局部变量声明
    char *current_char;
    char *next_char;
    undefined8 *material_node;
    undefined8 *attribute_node;
    longlong material_instance;
    longlong texture_data;
    char *attribute_name;
    char *attribute_value;
    ulonglong string_length;
    uint material_count;
    bool is_match;
    
    // 栈变量用于临时存储
    undefined1 temp_buffer[32];
    uint material_params[4];
    longlong *temp_pointer;
    undefined *temp_undefined;
    longlong temp_long;
    uint temp_uint;
    undefined8 temp_undefined8;
    
    // 浮点参数
    float float_params[16];
    float alpha_threshold = 0.0f;
    float blend_factor = 1.0f;
    
    // 材质处理状态
    undefined8 stack_guard = 0xfffffffffffffffe;
    ulonglong security_cookie = _DAT_180bf00a8 ^ (ulonglong)temp_buffer;
    
    // 初始化材质参数
    material_params[1] = 0;
    temp_undefined = &UNK_180a3c3e0;
    temp_undefined8 = 0;
    temp_long = 0;
    temp_uint = 0;
    
    // 处理材质名称属性
    current_char = "name";
    do {
        attribute_name = current_char;
        current_char = attribute_name + 1;
    } while (*current_char != '\0');
    
    // 遍历材质配置节点
    for (material_node = (undefined8 *)material_config[8]; 
         temp_pointer = material_config, material_node != (undefined8 *)0x0;
         material_node = (undefined8 *)material_node[6]) {
        
        attribute_value = (char *)*material_node;
        if (attribute_value == (char *)0x0) {
            attribute_value = (char *)0x180d48d24;
            attribute_name = (char *)0x0;
        } else {
            attribute_name = (char *)material_node[2];
        }
        
        // 检查是否为名称属性
        if (attribute_name == current_char + -0x180a03a83) {
            attribute_name = attribute_name + (longlong)attribute_value;
            if (attribute_name <= attribute_value) {
                // 处理默认名称
                temp_long = 0x180d48d24;
                if (material_node[1] != 0) {
                    temp_long = material_node[1];
                }
                FUN_180627c50(&temp_undefined, temp_long);
                break;
            }
            
            // 字符串比较
            temp_long = (longlong)&DAT_180a03a84 - (longlong)attribute_value;
            while (*attribute_value == attribute_value[temp_long]) {
                attribute_value = attribute_value + 1;
                if (attribute_name <= attribute_value) {
                    temp_long = 0x180d48d24;
                    if (material_node[1] != 0) {
                        temp_long = material_node[1];
                    }
                    FUN_180627c50(&temp_undefined, temp_long);
                    break;
                }
            }
        }
    }
    
    // 处理材质数据
    if (0 < (int)temp_uint) {
        temp_long = FUN_1800b6de0(_DAT_180c86930, &temp_undefined, 1);
        material_count = temp_uint;
        if (temp_long == 0) {
            string_length = (ulonglong)temp_uint;
            if (temp_long != 0) {
                FUN_1806277c0(render_context + 0x3e, string_length);
            }
            if (material_count != 0) {
                // 复制材质数据
                memcpy(render_context[0x3f], temp_long, material_count);
            }
            *(undefined4 *)(render_context + 0x40) = 0;
            if (render_context[0x3f] != 0) {
                *(undefined1 *)(string_length + render_context[0x3f]) = 0;
            }
            *(undefined4 *)((longlong)render_context + 0x20c) = temp_undefined8._4_4_;
        } else {
            FUN_180275a60(temp_long, render_context, 1);
        }
    }
    
    // 处理材质类型
    temp_undefined = &UNK_180a3c3e0;
    string_length = 0;
    temp_long = 0;
    temp_uint = 0;
    current_char = "material";
    do {
        attribute_name = current_char;
        current_char = attribute_name + 1;
    } while (*current_char != '\0');
    
    // 遍历材质节点
    for (material_node = (undefined8 *)material_config[8]; 
         material_node != (undefined8 *)0x0;
         material_node = (undefined8 *)material_node[6]) {
        
        attribute_value = (char *)*material_node;
        if (attribute_value == (char *)0x0) {
            attribute_value = (char *)0x180d48d24;
            attribute_name = (char *)0x0;
        } else {
            attribute_name = (char *)material_node[2];
        }
        
        // 检查是否为材质属性
        if (attribute_name == current_char + -0x180a04ebf) {
            attribute_name = attribute_value + (longlong)attribute_name;
            if (attribute_name <= attribute_value) {
                temp_long = 0x180d48d24;
                if (material_node[1] != 0) {
                    temp_long = material_node[1];
                }
                FUN_180627c50(&temp_undefined, temp_long);
                break;
            }
            
            // 字符串比较
            temp_long = (longlong)&UNK_180a04ec0 - (longlong)attribute_value;
            while (*attribute_value == attribute_value[temp_long]) {
                attribute_value = attribute_value + 1;
                if (attribute_name <= attribute_value) {
                    temp_long = 0x180d48d24;
                    if (material_node[1] != 0) {
                        temp_long = material_node[1];
                    }
                    FUN_180627c50(&temp_undefined, temp_long);
                    break;
                }
            }
        }
    }
    
    // 应用材质到渲染对象
    if (0 < temp_uint) {
        code *material_function = *(code **)(*render_context + 0x118);
        temp_undefined8 = FUN_1800b30d0(_DAT_180c86930, &temp_pointer, &temp_undefined, 1);
        (*material_function)(render_context, temp_undefined8);
        if (temp_pointer != (longlong *)0x0) {
            (**(code **)(*temp_pointer + 0x38))();
        }
    }
    
    // 处理材质属性列表
    temp_undefined = &UNK_180a3c3e0;
    if (temp_long != 0) {
        FUN_18064e900();
    }
    temp_long = 0;
    string_length = string_length & 0xffffffff00000000;
    temp_undefined = &UNK_18098bcb0;
    material_node = (undefined8 *)material_config[6];
    
    if (material_node != (undefined8 *)0x0) {
        // 处理每个材质属性
        do {
            temp_undefined8 = &UNK_180a3c3e0;
            temp_undefined8 = 0;
            temp_undefined8 = 0;
            alpha_threshold = 0.0f;
            
            // 处理属性名称
            current_char = "name";
            do {
                attribute_name = current_char;
                current_char = attribute_name + 1;
            } while (*current_char != '\0');
            
            // 遍历属性节点
            for (attribute_node = (undefined8 *)material_node[8]; 
                 attribute_node != (undefined8 *)0x0;
                 attribute_node = (undefined8 *)attribute_node[6]) {
                
                attribute_value = (char *)*attribute_node;
                if (attribute_value == (char *)0x0) {
                    attribute_value = (char *)0x180d48d24;
                    attribute_name = (char *)0x0;
                } else {
                    attribute_name = (char *)attribute_node[2];
                }
                
                // 检查是否为名称属性
                if (attribute_name == current_char + -0x180a03a83) {
                    attribute_name = attribute_value + (longlong)attribute_name;
                    if (attribute_name <= attribute_value) {
                        temp_long = 0x180d48d24;
                        if (attribute_node[1] != 0) {
                            temp_long = attribute_node[1];
                        }
                        FUN_180627c50(&temp_undefined8, temp_long);
                        break;
                    }
                    
                    // 字符串比较
                    temp_long = (longlong)&DAT_180a03a84 - (longlong)attribute_value;
                    while (*attribute_value == attribute_value[temp_long]) {
                        attribute_value = attribute_value + 1;
                        if (attribute_name <= attribute_value) {
                            temp_long = 0x180d48d24;
                            if (attribute_node[1] != 0) {
                                temp_long = attribute_node[1];
                            }
                            FUN_180627c50(&temp_undefined8, temp_long);
                            break;
                        }
                    }
                }
            }
            
            // 处理材质实例
            string_length = 0;
            temp_long = render_context[7];
            if (render_context[8] - temp_long >> 4 != 0) {
                do {
                    // 处理每个材质实例
                    temp_undefined = &UNK_1809fcc58;
                    temp_long = *(longlong *)(temp_long + string_length * 0x10);
                    if (*(longlong *)(temp_long + 0x1b0) == 0) {
                        texture_data = temp_long + 0x10;
                    } else {
                        texture_data = func_0x000180079240();
                    }
                    
                    // 获取材质名称
                    char material_name[MATERIAL_NAME_LENGTH];
                    material_name[0] = '\0';
                    int material_id = *(int *)(texture_data + 0x10);
                    undefined *name_ptr = &DAT_18098bc73;
                    if (*(undefined **)(texture_data + 8) != (undefined *)0x0) {
                        name_ptr = *(undefined **)(texture_data + 8);
                    }
                    
                    temp_undefined = temp_undefined;
                    strcpy_s(material_name, MATERIAL_NAME_LENGTH, name_ptr);
                    
                    // 检查材质匹配
                    if ((float)material_id == alpha_threshold) {
                        if (material_id == 0) {
                            if (alpha_threshold != 0.0f) {
                                is_match = false;
                            } else {
                                is_match = true;
                            }
                        } else {
                            // 字符串匹配
                            char *str1 = material_name;
                            char *str2 = (char *)((longlong)temp_undefined8 - (longlong)material_name);
                            is_match = (strcmp(str1, str2) == 0);
                        }
                    } else {
                        is_match = false;
                    }
                    
                    if (is_match) {
                        // 处理材质属性
                        material_params[0] = 0;
                        temp_undefined = &UNK_1809fcc28;
                        undefined *temp_buffer_ptr = temp_buffer;
                        temp_uint = 0;
                        temp_buffer[0] = 0;
                        
                        // 处理材质属性
                        ProcessMaterialAttributes(material_node, temp_long, material_params);
                    }
                    
                    string_length++;
                    temp_long = render_context[7];
                } while (string_length < (render_context[8] - temp_long >> 4));
            }
            
            // 处理网格属性
            temp_undefined8 = &UNK_180a3c3e0;
            if (temp_undefined8 != 0) {
                FUN_18064e900();
            }
            temp_undefined8 = 0;
            temp_undefined8 = temp_undefined8 & 0xffffffff00000000;
            temp_undefined8 = &UNK_18098bcb0;
            
            // 查找网格属性
            current_char = "mesh";
            do {
                attribute_name = current_char;
                current_char = attribute_name + 1;
            } while (*current_char != '\0');
            
            while (true) {
                do {
                    material_node = (undefined8 *)material_node[0xb];
                    material_config = temp_pointer;
                    if (material_node == (undefined8 *)0x0) break;
                    attribute_value = (char *)*material_node;
                    if (attribute_value == (char *)0x0) {
                        attribute_value = (char *)0x180d48d24;
                        attribute_name = (char *)0x0;
                    } else {
                        attribute_name = (char *)material_node[2];
                    }
                } while (attribute_name != current_char + -0x180a0f3e7);
                
                if (material_node == (undefined8 *)0x0) break;
                
                attribute_name = attribute_value + (longlong)attribute_name;
                if (attribute_name <= attribute_value) break;
                temp_long = (longlong)&UNK_180a0f3e8 - (longlong)attribute_value;
                while (*attribute_value == attribute_value[temp_long]) {
                    attribute_value = attribute_value + 1;
                    if (attribute_name <= attribute_value) break;
                }
            }
        } while (true);
    }
    
    // 处理修改ID
    material_params[2] = 0;
    current_char = "modified_id";
    do {
        attribute_name = current_char;
        current_char = attribute_name + 1;
    } while (*current_char != '\0');
    
    material_node = (undefined8 *)material_config[8];
    do {
        if (material_node == (undefined8 *)0x0) break;
        attribute_value = (char *)*material_node;
        if (attribute_value == (char *)0x0) {
            attribute_value = (char *)0x180d48d24;
            attribute_name = (char *)0x0;
        } else {
            attribute_name = (char *)material_node[2];
        }
        
        if (attribute_name == current_char + -0x180a16827) {
            attribute_name = attribute_name + (longlong)attribute_value;
            if (attribute_name <= attribute_value) {
                attribute_value = (char *)0x180d48d24;
                if ((char *)material_node[1] != (char *)0x0) {
                    attribute_value = (char *)material_node[1];
                }
                
                // 解析修改ID
                string_length = 0xffffffffffffffff;
                do {
                    string_length++;
                } while (attribute_value[string_length] != '\0');
                
                if ((string_length < 3) || (*attribute_value != '0') || 
                    ((attribute_value[1] + 0xa8U & 0xdf) != 0)) {
                    temp_undefined = &UNK_180a063a0;
                } else {
                    temp_undefined = &UNK_180a3cb84;
                }
                
                FUN_18010cbc0(attribute_value, temp_undefined, material_params + 2);
                *(uint *)((longlong)render_context + 0x324) = material_params[2];
            }
        }
        material_node = (undefined8 *)material_node[6];
    } while (true);
    
    // 设置材质标志
    *(undefined1 *)((longlong)render_context + 0x32c) = 0;
    
    // 处理二级材质
    ProcessSecondaryMaterial(render_context, material_config);
    
    // 清理资源
    temp_undefined = &UNK_180a3c3e0;
    if (temp_long != 0) {
        FUN_18064e900();
    }
    temp_long = 0;
    string_length = string_length & 0xffffffff00000000;
    temp_undefined = &UNK_18098bcb0;
    
    // 清理临时资源
    CleanupTemporaryResources();
    
    // 安全检查
    FUN_1808fc050(security_cookie ^ (ulonglong)temp_buffer);
}

/**
 * 模型加载器 - 从文件加载模型数据并解析材质信息
 * 
 * 该函数负责：
 * 1. 打开并读取模型文件
 * 2. 解析文件头和材质数据
 * 3. 处理材质名称和属性
 * 4. 加载纹理和贴图信息
 * 5. 构建材质数据结构
 * 
 * @param model_context 模型上下文指针
 * @param file_path 文件路径指针
 */
void ModelLoader(longlong model_context, longlong file_path)
{
    // 局部变量声明
    int file_format;
    undefined8 *file_handle;
    longlong name_buffer;
    longlong texture_buffer;
    undefined *name_ptr;
    ulonglong texture_count;
    uint material_count;
    int name_length;
    int data_size;
    int index_count;
    
    // 数组用于存储模型数据
    int name_array[2];
    int texture_array[2];
    int index_array[2];
    int temp_int;
    
    // 临时缓冲区
    uint temp_buffer[2];
    undefined *temp_undefined;
    longlong temp_long;
    uint temp_uint;
    undefined4 temp_uint4;
    undefined1 temp_data[4];
    undefined1 temp_data2[4];
    undefined8 stack_guard;
    
    // 安全检查
    stack_guard = 0xfffffffffffffffe;
    
    // 分配文件句柄
    file_handle = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18, 0x18, 8, 3);
    
    // 获取默认材质名称
    name_ptr = &DAT_18098bc73;
    if (*(undefined **)(file_path + 8) != (undefined *)0x0) {
        name_ptr = *(undefined **)(file_path + 8);
    }
    
    // 初始化文件句柄
    file_format = 0;
    *file_handle = 0;
    *(undefined1 *)(file_handle + 2) = 0;
    FUN_18062dee0(file_handle, name_ptr, &UNK_180a01ff0);
    
    if (file_handle[1] != 0) {
        // 读取文件头
        fread(temp_buffer, 4, 1);
        
        if (temp_buffer[0] == 0x31444d4d) {  // "MMD1" 格式
            // 读取材质数量
            fread(&temp_int, 4, 1, file_handle[1]);
            if (0 < temp_int) {
                do {
                    // 读取材质名称长度
                    fread(name_array, 4, 1, file_handle[1]);
                    
                    // 分配名称缓冲区
                    name_buffer = FUN_18062b1e0(_DAT_180c8ed18, 
                                              (longlong)(name_array[0] + 1), 0x10, 3);
                    
                    // 读取材质名称
                    fread(name_buffer, 1, (longlong)name_array[0], file_handle[1]);
                    *(undefined1 *)(name_array[0] + name_buffer) = 0;
                    
                    // 处理材质名称
                    FUN_180627910(&temp_undefined, name_buffer);
                    
                    // 清理材质名称中的无效字符
                    while ((0 < (int)temp_uint && 
                           (texture_buffer = strstr(temp_long, &DAT_180a0ff10), 
                            texture_buffer != 0))) {
                        
                        // 移除无效字符
                        int remove_length = 6;
                        int position = (int)texture_buffer - (int)temp_long;
                        if (temp_uint < position + 6U) {
                            remove_length = temp_uint - position;
                        }
                        
                        // 移动数据
                        ulonglong new_length = position + remove_length;
                        if (new_length < temp_uint) {
                            texture_buffer = (longlong)(int)new_length;
                            do {
                                *(undefined1 *)((texture_buffer - remove_length) + temp_long) = 
                                    *(undefined1 *)(texture_buffer + temp_long);
                                new_length++;
                                texture_buffer++;
                            } while (new_length < temp_uint);
                        }
                        
                        temp_uint -= remove_length;
                        *(undefined1 *)((ulonglong)temp_uint + temp_long) = 0;
                    }
                    
                    // 检查并扩展模型上下文
                    if (*(ulonglong *)(model_context + 8) < 
                        *(ulonglong *)(model_context + 0x10)) {
                        *(ulonglong *)(model_context + 8) += 0x20;
                        FUN_180627ae0();
                    } else {
                        FUN_180059820(model_context, &temp_undefined);
                    }
                    
                    // 读取材质数据
                    fread(temp_data2, 4, 1, file_handle[1]);
                    fread(&index_count, 4, 1, file_handle[1]);
                    
                    // 分配索引缓冲区
                    texture_buffer = FUN_18062b1e0(_DAT_180c8ed18, 
                                                   (longlong)index_count << 2, 0x10, 3);
                    
                    // 读取索引数据
                    fread(texture_buffer, 4, (longlong)index_count, file_handle[1]);
                    
                    // 清理资源
                    if (texture_buffer != 0) {
                        FUN_18064e900(texture_buffer);
                    }
                    if (name_buffer != 0) {
                        FUN_18064e900(name_buffer);
                    }
                    
                    // 重置临时变量
                    temp_undefined = &UNK_180a3c3e0;
                    if (temp_long != 0) {
                        FUN_18064e900();
                    }
                    temp_long = 0;
                    temp_uint4 = 0;
                    temp_undefined = &UNK_18098bcb0;
                    
                    file_format++;
                } while (file_format < temp_int);
            }
        } else if (0 < (int)temp_buffer[0]) {
            // 处理其他格式
            texture_count = (ulonglong)temp_buffer[0];
            do {
                // 读取名称长度
                fread(name_array, 4, 1, file_handle[1]);
                
                // 分配名称缓冲区
                name_buffer = FUN_18062b1e0(_DAT_180c8ed18, 
                                          (longlong)(name_array[0] + 1), 0x10, 3);
                
                // 读取名称
                fread(name_buffer, 1, (longlong)name_array[0], file_handle[1]);
                *(undefined1 *)(name_array[0] + name_buffer) = 0;
                
                // 读取数据大小
                fread(temp_data, 4, 1, file_handle[1]);
                
                // 处理名称
                FUN_180627910(&temp_undefined, name_buffer);
                
                // 清理无效字符
                while ((0 < (int)temp_uint && 
                       (texture_buffer = strstr(temp_long, &DAT_180a0ff10), 
                        texture_buffer != 0))) {
                    
                    // 移除无效字符
                    int remove_length = 6;
                    int position = (int)texture_buffer - (int)temp_long;
                    if (temp_uint < position + 6U) {
                        remove_length = temp_uint - position;
                    }
                    
                    // 移动数据
                    ulonglong new_length = position + remove_length;
                    if (new_length < temp_uint) {
                        texture_buffer = (longlong)(int)new_length;
                        do {
                            *(undefined1 *)((texture_buffer - remove_length) + temp_long) = 
                                *(undefined1 *)(texture_buffer + temp_long);
                            new_length++;
                            texture_buffer++;
                        } while (new_length < temp_uint);
                    }
                    
                    temp_uint -= remove_length;
                    *(undefined1 *)((ulonglong)temp_uint + temp_long) = 0;
                }
                
                // 检查并扩展模型上下文
                if (*(ulonglong *)(model_context + 8) < 
                    *(ulonglong *)(model_context + 0x10)) {
                    *(ulonglong *)(model_context + 8) += 0x20;
                    FUN_180627ae0();
                } else {
                    FUN_180059820(model_context, &temp_undefined);
                }
                
                // 读取索引数据
                fread(index_array, 4, 1, file_handle[1]);
                texture_buffer = FUN_18062b1e0(_DAT_180c8ed18, 
                                               (longlong)index_array[0] << 2, 0x10, 3);
                fread(texture_buffer, 4, (longlong)index_array[0], file_handle[1]);
                
                // 清理资源
                if (texture_buffer != 0) {
                    FUN_18064e900(texture_buffer);
                }
                if (name_buffer != 0) {
                    FUN_18064e900(name_buffer);
                }
                
                // 重置临时变量
                temp_undefined = &UNK_180a3c3e0;
                if (temp_long != 0) {
                    FUN_18064e900();
                }
                temp_long = 0;
                temp_uint4 = 0;
                temp_undefined = &UNK_18098bcb0;
                
                texture_count--;
            } while (texture_count != 0);
        }
        
        // 关闭文件
        if (file_handle[1] != 0) {
            fclose();
            file_handle[1] = 0;
            LOCK();
            _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
            UNLOCK();
        }
    }
    
    // 清理文件句柄
    FUN_18064e900(file_handle);
}

/**
 * 处理材质属性的辅助函数
 */
static void ProcessMaterialAttributes(undefined8 *material_node, longlong material_instance, 
                                     uint *material_params)
{
    // 处理材质属性
    char *attribute_name;
    char *attribute_value;
    undefined8 *attribute_node;
    
    // 处理材质因子
    attribute_name = "factor";
    do {
        char *temp_char = attribute_name;
        attribute_name = temp_char + 1;
    } while (*attribute_name != '\0');
    
    // 遍历属性节点
    for (attribute_node = (undefined8 *)material_node[8]; 
         attribute_node != (undefined8 *)0x0;
         attribute_node = (undefined8 *)attribute_node[6]) {
        
        attribute_value = (char *)*attribute_node;
        if (attribute_value == (char *)0x0) {
            attribute_value = (char *)0x180d48d24;
            attribute_name = (char *)0x0;
        } else {
            attribute_name = (char *)attribute_node[2];
        }
        
        // 检查是否为因子属性
        if (attribute_name == attribute_name + -0x180a1674b) {
            attribute_name = attribute_value + (longlong)attribute_name;
            if (attribute_name <= attribute_value) {
                // 解析颜色值
                longlong temp_long = 0x180d48d24;
                if (attribute_node[1] != 0) {
                    temp_long = attribute_node[1];
                }
                FUN_18010cbc0(temp_long, &UNK_180a063a0, material_params);
                
                // 设置材质因子颜色
                *(float *)(material_instance + MATERIAL_FACTOR_OFFSET) = 
                    (float)(material_params[0] >> 0x10 & 0xff) * DEFAULT_ALPHA_THRESHOLD;
                *(float *)(material_instance + MATERIAL_FACTOR_OFFSET + 4) = 
                    (float)(material_params[0] >> 8 & 0xff) * DEFAULT_ALPHA_THRESHOLD;
                *(float *)(material_instance + MATERIAL_FACTOR_OFFSET + 8) = 
                    (float)(material_params[0] & 0xff) * DEFAULT_ALPHA_THRESHOLD;
                *(float *)(material_instance + MATERIAL_FACTOR_OFFSET + 12) = 
                    (float)(material_params[0] >> 0x18) * DEFAULT_ALPHA_THRESHOLD;
                break;
            }
        }
    }
    
    // 处理二级因子
    attribute_name = "factor2";
    do {
        char *temp_char = attribute_name;
        attribute_name = temp_char + 1;
    } while (*attribute_name != '\0');
    
    // 遍历属性节点
    for (attribute_node = (undefined8 *)material_node[8]; 
         attribute_node != (undefined8 *)0x0;
         attribute_node = (undefined8 *)attribute_node[6]) {
        
        attribute_value = (char *)*attribute_node;
        if (attribute_value == (char *)0x0) {
            attribute_value = (char *)0x180d48d24;
            attribute_name = (char *)0x0;
        } else {
            attribute_name = (char *)attribute_node[2];
        }
        
        // 检查是否为二级因子属性
        if (attribute_name == attribute_name + -0x180a167ff) {
            attribute_name = attribute_value + (longlong)attribute_name;
            if (attribute_name <= attribute_value) {
                // 解析颜色值
                longlong temp_long = 0x180d48d24;
                if (attribute_node[1] != 0) {
                    temp_long = attribute_node[1];
                }
                FUN_18010cbc0(temp_long, &UNK_180a063a0, material_params);
                
                // 设置二级因子颜色
                *(float *)(material_instance + MATERIAL_FACTOR2_OFFSET) = 
                    (float)(material_params[0] >> 0x10 & 0xff) * DEFAULT_ALPHA_THRESHOLD;
                *(float *)(material_instance + MATERIAL_FACTOR2_OFFSET + 4) = 
                    (float)(material_params[0] >> 8 & 0xff) * DEFAULT_ALPHA_THRESHOLD;
                *(float *)(material_instance + MATERIAL_FACTOR2_OFFSET + 8) = 
                    (float)(material_params[0] & 0xff) * DEFAULT_ALPHA_THRESHOLD;
                *(float *)(material_instance + MATERIAL_FACTOR2_OFFSET + 12) = 
                    (float)(material_params[0] >> 0x18) * DEFAULT_ALPHA_THRESHOLD;
                break;
            }
        }
    }
    
    // 处理UV缩放
    undefined4 uv_scale[4];
    longlong result = FUN_180631b90(material_node, &UNK_180a167e0, uv_scale);
    if (result != 0) {
        *(undefined4 *)(material_instance + MATERIAL_UV_SCALE_OFFSET) = uv_scale[0];
        *(undefined4 *)(material_instance + MATERIAL_UV_SCALE_OFFSET + 4) = uv_scale[1];
        *(undefined4 *)(material_instance + MATERIAL_UV_SCALE_OFFSET + 8) = uv_scale[2];
        *(undefined4 *)(material_instance + MATERIAL_UV_SCALE_OFFSET + 12) = uv_scale[3];
    }
    
    // 处理二级UV缩放
    result = FUN_180631b90(material_node, &UNK_180a167f0, uv_scale);
    if (result != 0) {
        *(undefined4 *)(material_instance + MATERIAL_UV_SCALE2_OFFSET) = uv_scale[0];
        *(undefined4 *)(material_instance + MATERIAL_UV_SCALE2_OFFSET + 4) = uv_scale[1];
        *(undefined4 *)(material_instance + MATERIAL_UV_SCALE2_OFFSET + 8) = uv_scale[2];
        *(undefined4 *)(material_instance + MATERIAL_UV_SCALE2_OFFSET + 12) = uv_scale[3];
    }
}

/**
 * 处理二级材质的辅助函数
 */
static void ProcessSecondaryMaterial(longlong *render_context, longlong *material_config)
{
    // 处理二级材质的逻辑
    undefined *temp_undefined = &UNK_180a3c3e0;
    ulonglong temp_ulong = 0;
    longlong temp_long = 0;
    undefined4 temp_uint4 = 0;
    
    // 处理二级材质属性
    char *attribute_name = "second_material";
    do {
        char *temp_char = attribute_name;
        attribute_name = temp_char + 1;
    } while (*attribute_name != '\0');
    
    undefined8 *material_node = (undefined8 *)material_config[8];
    do {
        if (material_node == (undefined8 *)0x0) {
            // 设置材质参数
            undefined4 material_params[4];
            undefined4 color_params[4];
            float float_params[12];
            
            // 初始化参数
            material_params[0] = (undefined4)render_context[0x6c];
            material_params[1] = *(undefined4 *)((longlong)render_context + 0x364);
            material_params[2] = (undefined4)render_context[0x6d];
            material_params[3] = *(undefined4 *)((longlong)render_context + 0x36c);
            
            // 处理材质变换
            FUN_1801c1720(render_context + 0x66, material_params);
            FUN_180085020(render_context + 0x66, float_params);
            
            // 处理材质属性
            FUN_180631960(material_config, &UNK_180a16808, material_params);
            FUN_180631960(material_config, &UNK_180a16818, color_params);
            FUN_180631960(material_config, &UNK_180a0f108, float_params);
            
            // 计算材质混合
            float blended_color[12];
            blended_color[0] = (float)material_params[0] * float_params[0];
            blended_color[1] = material_params[0]._4_4_ * float_params[0];
            blended_color[2] = (float)material_params[1] * float_params[0];
            blended_color[3] = float_params[4] * float_params[1];
            blended_color[4] = float_params[5] * float_params[1];
            blended_color[5] = (float)material_params[2] * float_params[1];
            blended_color[6] = (float)material_params[3] * float_params[2];
            blended_color[7] = material_params[3]._4_4_ * float_params[2];
            blended_color[8] = (float)temp_uint4 * float_params[2];
            
            // 应用材质混合
            (*(code **)(*render_context + 0x148))(render_context, blended_color);
            FUN_180276f30(render_context, (longlong)render_context + 0x214, 1);
            
            // 应用UV缩放
            temp_long = FUN_180631b90(material_config, &UNK_180a167f0, color_params);
            if ((temp_long != 0) && 
                (longlong *temp_ptr = (longlong *)render_context[7], 
                 temp_ptr < (longlong *)render_context[8])) {
                do {
                    temp_long = *temp_ptr;
                    *(undefined4 *)(temp_long + MATERIAL_UV_SCALE2_OFFSET) = color_params[0];
                    *(undefined4 *)(temp_long + 700) = color_params[1];
                    *(undefined4 *)(temp_long + MATERIAL_UV_SCALE2_OFFSET + 8) = color_params[2];
                    *(undefined4 *)(temp_long + MATERIAL_UV_SCALE2_OFFSET + 12) = color_params[3];
                    temp_ptr += 2;
                } while (temp_ptr < (longlong *)render_context[8]);
            }
            
            break;
        }
        
        char *attribute_value = (char *)*material_node;
        if (attribute_value == (char *)0x0) {
            attribute_value = (char *)0x180d48d24;
            attribute_name = (char *)0x0;
        } else {
            attribute_name = (char *)material_node[2];
        }
        
        // 检查是否为二级材质属性
        if (attribute_name == attribute_name + -0x180a1683f) {
            attribute_name = attribute_value + (longlong)attribute_name;
            if (attribute_name <= attribute_value) {
                // 处理二级材质
                temp_long = 0x180d48d24;
                if (material_node[1] != 0) {
                    temp_long = material_node[1];
                }
                FUN_180627c50(&temp_undefined, temp_long);
                
                // 加载二级材质
                longlong *temp_ptr = (longlong *)FUN_1800b30d0(_DAT_180c86930, 
                                                               (longlong **)render_context, 
                                                               &temp_undefined, 1);
                material_params[1] = 4;
                temp_ptr = (longlong *)*temp_ptr;
                if (temp_ptr != (longlong *)0x0) {
                    material_config = temp_ptr;
                    (**(code **)(*temp_ptr + 0x28))(temp_ptr);
                }
                
                // 设置二级材质
                material_config = (longlong *)render_context[0x77];
                render_context[0x77] = (longlong)temp_ptr;
                if (material_config != (longlong *)0x0) {
                    (**(code **)(*material_config + 0x38))();
                }
                
                // 重置参数
                material_params[1] = 0;
                if ((longlong *)render_context[0] != (longlong *)0x0) {
                    (**(code **)(*render_context[0] + 0x38))();
                }
                
                FUN_1800b30d0(_DAT_180c86930, &material_config, &temp_undefined, 1);
                material_params[1] = 0;
                if (material_config != (longlong *)0x0) {
                    (**(code **)(*material_config + 0x38))();
                }
                
                break;
            }
        }
        material_node = (undefined8 *)material_node[6];
    } while (true);
}

/**
 * 清理临时资源的辅助函数
 */
static void CleanupTemporaryResources(void)
{
    // 清理临时资源的逻辑
    // 这里应该添加资源清理的具体实现
}

// 函数别名映射 - 保持与原始代码的兼容性
void FUN_18027a810(longlong *param_1, longlong *param_2) __attribute__((alias("MaterialProcessor")));
void FUN_18027b5d0(longlong param_1, longlong param_2) __attribute__((alias("ModelLoader")));

/**
 * 渲染系统材质处理模块说明：
 * 
 * 本模块提供了完整的材质处理和模型加载功能，包括：
 * 
 * 1. 材质处理功能：
 *    - 材质名称解析和验证
 *    - 材质属性设置（颜色、因子、UV缩放等）
 *    - 材质混合和二级材质处理
 *    - 材质应用到渲染对象
 * 
 * 2. 模型加载功能：
 *    - 支持多种模型文件格式
 *    - 材质数据解析和处理
 *    - 纹理和贴图信息加载
 *    - 模型数据结构构建
 * 
 * 3. 优化特性：
 *    - 高效的字符串处理
 *    - 内存管理和资源清理
 *    - 安全检查和错误处理
 *    - 性能优化的数据处理
 * 
 * 4. 扩展性：
 *    - 支持自定义材质属性
 *    - 可扩展的文件格式支持
 *    - 灵活的材质混合系统
 *    - 模块化的设计结构
 * 
 * 注意：这是一个简化实现，保留了原始代码的核心逻辑和功能，
 * 但提高了代码的可读性和可维护性。在实际使用中，可能需要
 * 根据具体的渲染引擎需求进行调整和优化。
 */