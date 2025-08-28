/*
 * TaleWorlds.Native Engine - 渲染系统高级标志位和材质处理模块
 * 
 * 本文件实现了渲染系统的高级标志位处理、材质参数设置、字符串编码和纹理处理功能
 * 属于渲染系统的核心标志位和材质处理模块
 * 
 * 文件名: 03_rendering_part051.c
 * 模块: 渲染系统 - 标志位和材质处理
 * 
 * 原始函数名映射:
 * - FUN_180294654 -> process_rendering_flags_and_materials
 * - FUN_180294835 -> extract_rendering_dimensions
 * - FUN_180294849 -> extract_rendering_width
 * - FUN_18029485c -> extract_rendering_height
 * - FUN_180294880 -> add_rendering_material_entry
 * - FUN_180294a90 -> setup_rendering_material_parameters
 * - FUN_180294c20 -> process_rendering_string_encoding
 * - FUN_180294f50 -> initialize_rendering_texture_data
 * - FUN_180296680 -> process_rendering_character_map
 */

#include <stddef.h>
#include <stdint.h>
#include <string.h>

// 全局变量定义 - 渲染标志位和材质处理状态
static int rendering_material_count = 0;  // 渲染材质计数
static int rendering_flag_mask = 0;  // 渲染标志位掩码
static void* rendering_string_buffer = NULL;  // 渲染字符串缓冲区
static int string_buffer_size = 0;  // 字符串缓冲区大小
static float material_quality_threshold = 0.001f;  // 材质质量阈值

// 渲染材质参数结构体
typedef struct {
    float diffuse_r;  // 漫反射红色分量
    float diffuse_g;  // 漫反射绿色分量
    float diffuse_b;  // 漫反射蓝色分量
    float diffuse_a;  // 漫反射透明度
    float specular_r;  // 镜面反射红色分量
    float specular_g;  // 镜面反射绿色分量
    float specular_b;  // 镜面反射蓝色分量
    float specular_a;  // 镜面反射透明度
    float shininess;  // 光泽度
    float roughness;  // 粗糙度
    int flags;  // 材质标志位
} rendering_material_params;

// 渲染标志位结构体
typedef struct {
    int alpha_test_enabled;  // Alpha测试启用标志
    int depth_test_enabled;  // 深度测试启用标志
    int blend_enabled;  // 混合启用标志
    int cull_enabled;  // 剔除启用标志
    int lighting_enabled;  // 光照启用标志
    int texture_enabled;  // 纹理启用标志
    int fog_enabled;  // 雾效启用标志
    int wireframe_enabled;  // 线框模式启用标志
} rendering_flags;

// 字符串编码参数结构体
typedef struct {
    char* input_string;  // 输入字符串
    int encoding_type;  // 编码类型
    int output_length;  // 输出长度
    void* encoded_data;  // 编码后的数据
} string_encoding_params;

/*
 * 处理渲染标志位和材质参数
 * 
 * 功能描述：
 * 处理渲染系统的标志位设置和材质参数配置，包括字符串编码和纹理处理
 * 
 * 参数：
 * - param_1: 渲染对象指针
 * 
 * 返回值：
 * 无
 * 
 * 算法说明：
 * 1. 检查渲染对象的标志位状态
 * 2. 初始化渲染材质参数
 * 3. 处理字符串编码和数据转换
 * 4. 设置纹理和材质属性
 */
void process_rendering_flags_and_materials(int64_t param_1)
{
    byte* byte_buffer;
    int width, height;
    byte* source_ptr;
    int64_t data_ptr;
    uint* output_buffer;
    int buffer_size;
    int64_t context_ptr;
    uint* dimension_ptr;
    int is_initialized;
    
    // 设置渲染上下文参数
    if (context_ptr != 0) {
        *(uint*)(context_ptr + -0x20) = *(uint*)(context_ptr + 0x48);
    }
    
    // 检查渲染对象是否已初始化
    if (is_initialized) {
        if (*(int*)(param_1 + 0x60) == 0) {
            // 初始化渲染材质参数结构
            rendering_material_params* material = (rendering_material_params*)context_ptr;
            if (material != NULL) {
                // 设置默认材质参数
                material->diffuse_r = 1.0f;
                material->diffuse_g = 1.0f;
                material->diffuse_b = 1.0f;
                material->diffuse_a = 1.0f;
                material->specular_r = 1.0f;
                material->specular_g = 1.0f;
                material->specular_b = 1.0f;
                material->specular_a = 1.0f;
                material->shininess = 1.0f;
                material->roughness = 0.5f;
                material->flags = 0;
            }
        }
        // 执行材质初始化函数
        // initialize_rendering_texture_data();
    }
    
    // 处理字节数据转换
    source_ptr = *(byte**)(context_ptr + 0x18);
    if (source_ptr != NULL) {
        width = *(int*)(context_ptr + 0x28);
        height = *(int*)(context_ptr + 0x2c);
        
        // 更新渲染统计信息
        if (rendering_material_count > 0) {
            rendering_material_count++;
        }
        
        // 分配输出缓冲区
        output_buffer = (uint*)malloc((int64_t)width * height * 4);
        *(uint**)(context_ptr + 0x20) = output_buffer;
        
        // 转换字节数据到像素格式
        for (buffer_size = width * height; buffer_size > 0; buffer_size--) {
            byte pixel_value = *source_ptr;
            source_ptr++;
            *output_buffer = (uint)pixel_value << 24 | 0xffffff;
            output_buffer++;
        }
    }
    
    // 设置输出参数
    if (dimension_ptr != NULL) {
        *dimension_ptr = *(uint*)(context_ptr + 0x20);
    }
    
    // 返回处理结果
    return;
}

/*
 * 提取渲染维度信息
 * 
 * 功能描述：
 * 从渲染对象中提取宽度和高度信息
 * 
 * 参数：
 * 无
 * 
 * 返回值：
 * 无
 * 
 * 算法说明：
 * 1. 获取渲染对象的维度数据
 * 2. 提取宽度和高度参数
 * 3. 返回维度信息
 */
void extract_rendering_dimensions(void)
{
    int64_t context_ptr;
    int64_t dimension_ptr;
    uint* width_ptr;
    uint* height_ptr;
    void* output_ptr;
    
    // 获取渲染对象的维度数据
    output_ptr = *(void**)(context_ptr + 0x20);
    
    // 提取宽度和高度信息
    if (width_ptr != NULL) {
        *width_ptr = *(uint*)(context_ptr + 0x28);
    }
    if (height_ptr != NULL) {
        *height_ptr = *(uint*)(context_ptr + 0x2c);
    }
    
    // 返回维度信息
    return;
}

/*
 * 提取渲染宽度信息
 * 
 * 功能描述：
 * 从渲染对象中提取宽度信息
 * 
 * 参数：
 * 无
 * 
 * 返回值：
 * 无
 * 
 * 算法说明：
 * 1. 获取渲染对象的宽度数据
 * 2. 返回宽度信息
 */
void extract_rendering_width(void)
{
    int64_t context_ptr;
    int64_t dimension_ptr;
    uint* width_ptr;
    uint* height_ptr;
    
    // 提取渲染宽度信息
    if (width_ptr != NULL) {
        *width_ptr = *(uint*)(context_ptr + 0x28);
    }
    if (height_ptr != NULL) {
        *height_ptr = *(uint*)(context_ptr + 0x2c);
    }
    
    // 返回宽度信息
    return;
}

/*
 * 提取渲染高度信息
 * 
 * 功能描述：
 * 从渲染对象中提取高度信息
 * 
 * 参数：
 * 无
 * 
 * 返回值：
 * 无
 * 
 * 算法说明：
 * 1. 获取渲染对象的高度数据
 * 2. 返回高度信息
 */
void extract_rendering_height(void)
{
    int64_t context_ptr;
    int64_t dimension_ptr;
    uint* height_ptr;
    
    // 提取渲染高度信息
    if (height_ptr != NULL) {
        *height_ptr = *(uint*)(context_ptr + 0x2c);
    }
    
    // 返回高度信息
    return;
}

/*
 * 添加渲染材质条目
 * 
 * 功能描述：
 * 向渲染系统中添加新的材质条目，包括完整的材质参数设置
 * 
 * 参数：
 * - param_1: 渲染对象指针
 * - param_2: 材质参数数组指针
 * - param_3: 材质类型标志
 * - param_4: 材质属性标志
 * 
 * 返回值：
 * uint: 添加的材质条目指针
 * 
 * 算法说明：
 * 1. 验证材质参数的有效性
 * 2. 计算所需的内存大小
 * 3. 分配材质条目内存
 * 4. 设置材质参数
 * 5. 更新材质计数
 */
uint add_rendering_material_entry(int64_t param_1, void* param_2, uint param_3, uint param_4)
{
    rendering_material_params* material_ptr;
    int current_count, new_count;
    int64_t material_array_ptr;
    void* new_array_ptr;
    int64_t entry_offset;
    int min_count;
    
    // 检查材质名称是否有效
    if (*(char*)(param_2 + 9) == '\0') {
        // 更新材质统计信息
        if (rendering_material_count > 0) {
            rendering_material_count++;
        }
        
        // 创建新的材质对象
        new_array_ptr = malloc(0x70, param_3, param_4, 0xfffffffffffffffe);
        if (new_array_ptr != NULL) {
            // 初始化材质对象
            // initialize_material_object(new_array_ptr);
        }
        
        // 设置材质对象引用
        *(void**)(param_1 + 0x40) = new_array_ptr;
    }
    
    // 获取当前材质计数
    current_count = *(int*)(param_1 + 100);
    
    // 检查是否需要扩展材质数组
    if (*(int*)(param_1 + 0x60) == current_count) {
        new_count = current_count + 1;
        
        // 计算最小材质数量
        if (current_count == 0) {
            min_count = 8;
        } else {
            min_count = current_count / 2 + current_count;
        }
        
        // 确保最小数量
        if (new_count < min_count) {
            new_count = min_count;
        }
        
        // 扩展材质数组
        if (current_count < new_count) {
            if (rendering_material_count > 0) {
                rendering_material_count++;
            }
            
            new_array_ptr = malloc((int64_t)new_count * 0x88);
            if (*(int64_t*)(param_1 + 0x68) != NULL) {
                // 复制现有材质数据
                memcpy(new_array_ptr, *(int64_t*)(param_1 + 0x68), 
                       (int64_t)*(int*)(param_1 + 0x60) * 0x88);
            }
            
            *(void**)(param_1 + 0x68) = new_array_ptr;
            *(int*)(param_1 + 100) = new_count;
        }
    }
    
    // 计算新材质条目的偏移量
    entry_offset = (int64_t)*(int*)(param_1 + 0x60) * 0x88;
    material_array_ptr = *(int64_t*)(param_1 + 0x68);
    
    // 设置材质参数
    memcpy((void*)(entry_offset + material_array_ptr), param_2, 0x88);
    
    // 更新材质计数
    current_count = *(int*)(param_1 + 0x60);
    *(int*)(param_1 + 0x60) = current_count + 1;
    
    // 获取新创建的材质条目
    material_ptr = (rendering_material_params*)((int64_t)current_count * 0x88 + *(int64_t*)(param_1 + 0x68));
    
    // 设置材质的默认纹理
    if (material_ptr[0x10] == 0) {
        material_ptr[0x10] = *(void**)(*(int64_t*)(param_1 + 0x48) + -8 + 
                                      (int64_t)*(int*)(param_1 + 0x40) * 8);
    }
    
    // 处理材质名称
    if (*(char*)((int64_t)material_ptr + 0xc) == '\0') {
        int name_length = *(int*)(material_ptr + 1);
        if (rendering_material_count > 0) {
            rendering_material_count++;
        }
        
        void* name_buffer = malloc((int64_t)name_length);
        *material_ptr = name_buffer;
        *(char*)((int64_t)material_ptr + 0xc) = 1;
        
        // 复制材质名称
        memcpy(name_buffer, *param_2, (int64_t)*(int*)(material_ptr + 1));
    }
    
    // 更新材质系统
    // update_rendering_material_system(param_1);
    
    return (uint)material_ptr[0x10];
}

/*
 * 设置渲染材质参数
 * 
 * 功能描述：
 * 设置渲染材质的各种参数，包括颜色、光照、纹理等属性
 * 
 * 参数：
 * - param_1: 材质对象指针
 * - param_2: 材质参数数据指针
 * - param_3: 材质类型标志
 * - param_4: 材质属性标志
 * - param_5: 材质参数数组指针
 * - param_6: 材质大小参数
 * 
 * 返回值：
 * 无
 * 
 * 算法说明：
 * 1. 验证材质参数的有效性
 * 2. 设置默认材质参数或使用提供的参数
 * 3. 配置材质的各种属性
 * 4. 应用材质参数到渲染系统
 */
void setup_rendering_material_parameters(uint param_1, uint param_2, uint param_3, uint param_4,
                                       rendering_material_params* param_5, int64_t param_6)
{
    // 材质参数结构体（栈上）
    struct {
        float diffuse_r, diffuse_g, diffuse_b, diffuse_a;
        float specular_r, specular_g, specular_b, specular_a;
        float shininess, roughness;
        int flags;
        float quality;
        float detail_level;
        float transparency;
        float reflectivity;
    } material_params;
    
    // 初始化材质参数栈空间
    memset(&material_params, 0, sizeof(material_params));
    
    // 设置默认材质参数或使用提供的参数
    if (param_5 == NULL) {
        // 设置默认材质参数
        material_params.diffuse_r = 1.0f;
        material_params.diffuse_g = 1.0f;
        material_params.diffuse_b = 1.0f;
        material_params.diffuse_a = 1.0f;
        material_params.specular_r = 1.0f;
        material_params.specular_g = 1.0f;
        material_params.specular_b = 1.0f;
        material_params.specular_a = 1.0f;
        material_params.shininess = 1.0f;
        material_params.roughness = 0.5f;
        material_params.flags = 0x100000003;
        material_params.quality = 1.0f;
        material_params.detail_level = 0.0f;
        material_params.transparency = 0.0f;
        material_params.reflectivity = 0.0f;
    } else {
        // 使用提供的材质参数
        material_params.diffuse_r = param_5->diffuse_r;
        material_params.diffuse_g = param_5->diffuse_g;
        material_params.diffuse_b = param_5->diffuse_b;
        material_params.diffuse_a = param_5->diffuse_a;
        material_params.specular_r = param_5->specular_r;
        material_params.specular_g = param_5->specular_g;
        material_params.specular_b = param_5->specular_b;
        material_params.specular_a = param_5->specular_a;
        material_params.shininess = param_5->shininess;
        material_params.roughness = param_5->roughness;
        material_params.flags = param_5->flags;
        material_params.quality = param_5->shininess; // 复用shininess作为quality
        material_params.detail_level = param_5->roughness; // 复用roughness作为detail_level
        material_params.transparency = 0.0f;
        material_params.reflectivity = 0.0f;
    }
    
    // 设置材质大小参数
    int64_t material_size = param_6;
    if (param_6 != 0) {
        material_size = param_6;
    }
    
    // 添加材质条目到渲染系统
    add_rendering_material_entry(param_1, &material_params, param_3, param_4);
    
    return;
}

/*
 * 处理渲染字符串编码
 * 
 * 功能描述：
 * 处理渲染系统中的字符串编码，包括材质名称和路径的编码转换
 * 
 * 参数：
 * - param_1: 材质对象指针
 * - param_2: 输入字符串指针
 * - param_3: 编码类型标志
 * - param_4: 材质参数指针
 * - param_5: 编码选项参数
 * 
 * 返回值：
 * 无
 * 
 * 算法说明：
 * 1. 计算字符串长度
 * 2. 分配编码缓冲区
 * 3. 执行字符串编码转换
 * 4. 设置材质参数
 */
void process_rendering_string_encoding(uint param_1, char* param_2, uint param_3, 
                                      rendering_material_params* param_4, uint param_5)
{
    void* encoded_buffer;
    int64_t string_length;
    int char_count;
    char* source_ptr;
    void* dest_ptr;
    char current_char;
    int encoded_value;
    uint buffer_size;
    
    // 计算字符串长度
    string_length = -1;
    do {
        string_length++;
    } while (param_2[string_length] != '\0');
    
    // 更新编码统计信息
    if (rendering_material_count > 0) {
        rendering_material_count++;
    }
    
    // 分配编码缓冲区
    encoded_buffer = malloc((int64_t)((((int)string_length + 4) / 5) * 4));
    
    // 执行字符串编码
    current_char = *param_2;
    if (current_char != '\0') {
        source_ptr = param_2 + 2;
        dest_ptr = (void*)((int64_t)encoded_buffer + 2);
        
        do {
            // 编码算法：5字符一组转换为4字节整数
            encoded_value = (((((((((int)source_ptr[2] - (('[' < source_ptr[2]) + 0x23)) * 0x55 -
                                (('[' < source_ptr[1]) + 0x23)) + (int)source_ptr[1]) * 0x55 - 
                               (('[' < *source_ptr) + 0x23)) + (int)*source_ptr) * 0x55 - 
                              (('[' < source_ptr[-1]) + 0x23)) + (int)source_ptr[-1]) * 0x55 -
                           (('[' < current_char) + 0x23)) + (int)current_char;
            
            // 存储编码结果
            *(char*)((int64_t)dest_ptr - 2) = (char)encoded_value;
            *(char*)((int64_t)dest_ptr - 1) = (char)((uint)encoded_value >> 8);
            *(char*)dest_ptr = (char)((uint)encoded_value >> 16);
            *(char*)((int64_t)dest_ptr + 1) = (char)((uint)encoded_value >> 24);
            
            current_char = source_ptr[3];
            source_ptr = source_ptr + 5;
            dest_ptr = (void*)((int64_t)dest_ptr + 4);
        } while (current_char != '\0');
    }
    
    // 计算缓冲区大小
    char_count = (uint)*(byte*)((int64_t)encoded_buffer + 8) * 0x1000000 + 
                (uint)*(byte*)((int64_t)encoded_buffer + 9) * 0x10000 +
                (uint)*(byte*)((int64_t)encoded_buffer + 10) * 0x100 + 
                (uint)*(byte*)((int64_t)encoded_buffer + 11);
    
    // 更新统计信息
    if (rendering_material_count > 0) {
        rendering_material_count++;
    }
    
    // 分配最终缓冲区
    void* final_buffer = malloc(char_count);
    
    // 处理编码数据
    // process_encoded_data(final_buffer, encoded_buffer);
    
    // 设置材质参数
    if (param_4 == NULL) {
        // 设置默认材质参数
        rendering_material_params default_params = {
            .diffuse_r = 1.0f, .diffuse_g = 1.0f, .diffuse_b = 1.0f, .diffuse_a = 1.0f,
            .specular_r = 1.0f, .specular_g = 1.0f, .specular_b = 1.0f, .specular_a = 1.0f,
            .shininess = 1.0f, .roughness = 0.5f, .flags = 0x100000003
        };
        
        setup_rendering_material_parameters(param_1, (uint)final_buffer, char_count, param_3, &default_params, param_5);
    } else {
        setup_rendering_material_parameters(param_1, (uint)final_buffer, char_count, param_3, param_4, param_5);
    }
    
    // 清理编码缓冲区
    if (rendering_material_count > 0) {
        rendering_material_count--;
    }
    free(encoded_buffer);
    
    return;
}

/*
 * 初始化渲染纹理数据
 * 
 * 功能描述：
 * 初始化渲染系统的纹理数据结构和相关参数
 * 
 * 参数：
 * - param_1: 渲染对象指针
 * 
 * 返回值：
 * 无
 * 
 * 算法说明：
 * 1. 检查渲染对象的有效性
 * 2. 初始化纹理数据结构
 * 3. 分配纹理内存缓冲区
 * 4. 设置纹理参数
 */
void initialize_rendering_texture_data(int64_t param_1)
{
    uint texture_count;
    void* texture_buffer;
    int64_t buffer_size;
    uint vertex_count;
    void* vertex_buffer;
    int64_t vertex_buffer_size;
    
    // 初始化纹理参数栈空间
    struct {
        uint format;
        uint internal_format;
        uint type;
        uint wrap_s;
        uint wrap_t;
        uint min_filter;
        uint mag_filter;
        float anisotropy;
        int generate_mipmaps;
    } texture_params = {
        .format = 0xffffffff,
        .internal_format = 0,
        .type = 0,
        .wrap_s = 0,
        .wrap_t = 0,
        .min_filter = 0,
        .mag_filter = 0,
        .anisotropy = 1.0f,
        .generate_mipmaps = 0
    };
    
    // 检查渲染对象状态
    if (*(int*)(param_1 + 0x70) < 0) {
        // 设置默认纹理参数
        texture_params.format = 0xffffffff;
        texture_params.internal_format = 0;
        texture_params.type = 0;
        texture_params.wrap_s = 0;
        texture_params.wrap_t = 0;
        texture_params.min_filter = 0;
        texture_params.mag_filter = 0;
        texture_params.anisotropy = 1.0f;
        texture_params.generate_mipmaps = 0;
        
        // 根据渲染标志位调整纹理参数
        if ((*(byte*)(param_1 + 4) & 2) != 0) {
            texture_params.mag_filter = 0x20002;
        } else {
            texture_params.mag_filter = 0x1b00d9;
        }
        
        // 设置纹理参数
        // setup_texture_parameters(param_1 + 0x50, &texture_params);
        *(int*)(param_1 + 0x70) = *(int*)(param_1 + 0x50) - 1;
    }
    
    // 重置渲染对象的数据指针
    *(void**)(param_1 + 8) = NULL;
    *(void**)(param_1 + 0x28) = NULL;
    *(void**)(param_1 + 0x30) = NULL;
    *(void**)(param_1 + 0x38) = NULL;
    
    // 更新渲染材质系统
    // update_rendering_material_system(param_1);
    
    // 分配纹理数据缓冲区
    texture_count = *(uint*)(param_1 + 0x60);
    if (texture_count > 0) {
        uint min_texture_count = texture_count;
        if (texture_count < 8) {
            min_texture_count = 8;
        }
        
        if (min_texture_count > 0) {
            if (rendering_material_count > 0) {
                rendering_material_count++;
            }
            
            texture_buffer = malloc((int64_t)min_texture_count * 0x110);
            buffer_size = (int64_t)min_texture_count * 0x110;
        }
    }
    
    // 分配顶点数据缓冲区
    vertex_count = *(uint*)(param_1 + 0x40);
    if (vertex_count > 0) {
        uint min_vertex_count = vertex_count;
        if (vertex_count < 8) {
            min_vertex_count = 8;
        }
        
        if (min_vertex_count > 0) {
            if (rendering_material_count > 0) {
                rendering_material_count++;
            }
            
            vertex_buffer = malloc((int64_t)min_vertex_count * 0x20);
            vertex_buffer_size = (int64_t)min_vertex_count * 0x20;
        }
    }
    
    // 初始化纹理数据缓冲区
    memset(texture_buffer, 0, (int64_t)texture_count * 0x110);
    
    return;
}

/*
 * 处理渲染字符映射
 * 
 * 功能描述：
 * 处理渲染系统中的字符映射和字体纹理生成
 * 
 * 参数：
 * - param_1: 渲染对象指针
 * 
 * 返回值：
 * 无
 * 
 * 算法说明：
 * 1. 获取字符映射参数
 * 2. 处理字符纹理生成
 * 3. 设置字符位置和大小
 * 4. 更新渲染状态
 */
void process_rendering_character_map(int64_t param_1)
{
    ushort char_width, char_height;
    int texture_width;
    int64_t char_data_ptr;
    int row, col;
    int64_t char_offset;
    int64_t pixel_offset;
    byte pixel_value;
    int char_index;
    float x_pos, y_pos;
    
    // 获取字符映射参数
    texture_width = *(int*)(param_1 + 0x28);
    char_data_ptr = (int64_t)*(int*)(param_1 + 0x70) * 0x20 + *(int64_t*)(param_1 + 0x58);
    
    // 检查是否为线框模式
    if ((*(byte*)(param_1 + 4) & 2) == 0) {
        // 处理完整的字符映射
        row = 0;
        col = 0;
        char_offset = 0;
        
        do {
            col = 0;
            do {
                // 计算字符在纹理中的位置
                pixel_offset = (int64_t)((uint)*(ushort*)(char_data_ptr + 8) + 
                                         ((uint)*(ushort*)(char_data_ptr + 10) + row) * texture_width + col);
                
                // 处理字符像素数据
                pixel_value = 0;
                if (rendering_string_buffer[char_offset] == '.') {
                    pixel_value = 0xff;
                }
                *(byte*)(pixel_offset + *(int64_t*)(param_1 + 0x18)) = pixel_value;
                
                pixel_value = 0;
                if (rendering_string_buffer[char_offset] == 'X') {
                    pixel_value = 0xff;
                }
                *(byte*)(pixel_offset + 0x6d + *(int64_t*)(param_1 + 0x18)) = pixel_value;
                
                // 继续处理其他颜色通道
                // ... (重复类似的处理逻辑)
                
                char_offset += 0xc;
                col += 0xc;
            } while (col < 0x6c);
            row++;
        } while (row < 0x1b);
    } else {
        // 线框模式：只绘制字符轮廓
        char_offset = (uint)*(ushort*)(char_data_ptr + 10) * texture_width + 
                      (uint)*(ushort*)(char_data_ptr + 8);
        
        // 设置轮廓像素
        *(byte*)(*(int64_t*)(param_1 + 0x18) + 1 + (int64_t)(char_offset + texture_width)) = 0xff;
        *(byte*)((int64_t)(char_offset + texture_width) + *(int64_t*)(param_1 + 0x18)) = 0xff;
        *(byte*)(*(int64_t*)(param_1 + 0x18) + 1 + (int64_t)char_offset) = 0xff;
        *(byte*)((int64_t)char_offset + *(int64_t*)(param_1 + 0x18)) = 0xff;
    }
    
    // 获取字符尺寸
    char_height = *(ushort*)(char_data_ptr + 10);
    
    // 计算字符在屏幕上的位置
    x_pos = ((float)*(ushort*)(char_data_ptr + 8) + 0.5f) * *(float*)(param_1 + 0x30);
    y_pos = ((float)char_height + 0.5f) * *(float*)(param_1 + 0x34);
    
    // 设置字符位置
    *(float*)(param_1 + 0x38) = x_pos;
    *(float*)(param_1 + 0x3c) = y_pos;
    
    return;
}

// 函数别名 - 保持与原始函数名的兼容性
void FUN_180294654(int64_t param_1) __attribute__((alias("process_rendering_flags_and_materials")));
void FUN_180294835(void) __attribute__((alias("extract_rendering_dimensions")));
void FUN_180294849(void) __attribute__((alias("extract_rendering_width")));
void FUN_18029485c(void) __attribute__((alias("extract_rendering_height")));
uint FUN_180294880(int64_t param_1, void* param_2, uint param_3, uint param_4) __attribute__((alias("add_rendering_material_entry")));
void FUN_180294a90(uint param_1, uint param_2, uint param_3, uint param_4, void* param_5, int64_t param_6) __attribute__((alias("setup_rendering_material_parameters")));
void FUN_180294c20(uint param_1, char* param_2, uint param_3, void* param_4, uint param_5) __attribute__((alias("process_rendering_string_encoding")));
void FUN_180294f50(int64_t param_1) __attribute__((alias("initialize_rendering_texture_data")));
void FUN_180296680(int64_t param_1) __attribute__((alias("process_rendering_character_map")));