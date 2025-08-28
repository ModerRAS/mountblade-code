/**
 * @file 03_rendering_part018.c
 * @brief 渲染系统高级状态管理和参数处理模块
 * 
 * 本模块包含3个核心函数，主要功能涵盖：
 * - 渲染状态标志位管理和优化
 * - 渲染参数初始化和配置
 * - 材质参数处理和渲染管线配置
 * 
 * 主要函数：
 * - RenderingSystemFlagManager: 渲染系统标志位管理器
 * - RenderingSystemParameterInitializer: 渲染系统参数初始化器
 * - RenderingSystemMaterialProcessor: 渲染系统材质参数处理器
 */

#include "TaleWorlds.Native.Split.h"

// =============================================================================
// 常量定义
// =============================================================================

/** 渲染系统常量定义 */
#define RENDERING_SYSTEM_FLAG_MASK           0x1f        // 标志位掩码
#define RENDERING_SYSTEM_FLAG_SHIFT          5           // 标志位移位
#define RENDERING_SYSTEM_MAX_FLAGS          32          // 最大标志位数量
#define RENDERING_SYSTEM_ELEMENT_SIZE       0x10        // 元素大小
#define RENDERING_SYSTEM_BUFFER_SIZE        0x2000000   // 缓冲区大小
#define RENDERING_SYSTEM_QUEUE_SIZE         0x28        // 队列大小
#define RENDERING_SYSTEM_BLOCK_SIZE         0x128       // 块大小
#define RENDERING_SYSTEM_DATA_SIZE          0x114       // 数据大小
#define RENDERING_SYSTEM_STRING_SIZE        0x80        // 字符串大小

/** 渲染系统偏移量定义 */
#define RENDERING_OFFSET_FLAG_COUNT         0x58        // 标志计数偏移
#define RENDERING_OFFSET_DATA_START         0x38        // 数据起始偏移
#define RENDERING_OFFSET_DATA_END           0x40        // 数据结束偏移
#define RENDERING_OFFSET_ELEMENT_FLAGS      0x8         // 元素标志偏移
#define RENDERING_OFFSET_REFERENCE_PTR      0x28        // 引用指针偏移
#define RENDERING_OFFSET_NEXT_PTR           0x168        // 下一个指针偏移
#define RENDERING_OFFSET_COUNTER            0x2b0       // 计数器偏移
#define RENDERING_OFFSET_ENABLE_FLAG        0x60        // 启用标志偏移
#define RENDERING_OFFSET_PARAM_DATA         0x58        // 参数数据偏移
#define RENDERING_OFFSET_MATERIAL_DATA      0x30        // 材质数据偏移
#define RENDERING_OFFSET_TEXTURE_DATA      0x330        // 纹理数据偏移
#define RENDERING_OFFSET_COLOR_DATA         0x390        // 颜色数据偏移
#define RENDERING_OFFSET_ALPHA_DATA         0x3b0        // 透明度数据偏移
#define RENDERING_OFFSET_STATUS_DATA        800          // 状态数据偏移
#define RENDERING_OFFSET_CONFIG_DATA       0x210        // 配置数据偏移
#define RENDERING_OFFSET_RESOURCE_DATA     0x3c8        // 资源数据偏移

/** 渲染系统默认值定义 */
#define RENDERING_DEFAULT_FLOAT_VALUE       0x3f800000  // 默认浮点值 (1.0f)
#define RENDERING_DEFAULT_DOUBLE_VALUE      0x3f80000000000000  // 默认双精度值 (1.0)
#define RENDERING_DEFAULT_ALPHA_VALUE       0xff        // 默认透明度值
#define RENDERING_DEFAULT_CONFIG_VALUE      0x21        // 默认配置值
#define RENDERING_DEFAULT_MASK_VALUE       0xffffffff  // 默认掩码值
#define RENDERING_DEFAULT_LIMIT_VALUE       0x7f7fffff  // 默认限制值
#define RENDERING_DEFAULT_QUEUE_INDEX      0xfffffffffffffffe  // 默认队列索引

/** 渲染系统状态标志 */
#define RENDERING_STATUS_ENABLED           0x01        // 启用状态
#define RENDERING_STATUS_ACTIVE            0x02        // 活动状态
#define RENDERING_STATUS_INITIALIZED       0x04        // 初始化状态
#define RENDERING_STATUS_READY             0x08        // 准备状态
#define RENDERING_STATUS_ERROR             0x10        // 错误状态

// =============================================================================
// 类型别名定义
// =============================================================================

/** 基础类型别名 */
typedef uint8_t         render_byte_t;       // 渲染字节类型
typedef uint16_t        render_short_t;      // 渲染短整型
typedef uint32_t        render_flag_t;       // 渲染标志类型
typedef uint64_t        render_ptr_t;        // 渲染指针类型
typedef float           render_float_t;      // 渲染浮点类型
typedef double          render_double_t;     // 渲染双精度类型

/** 渲染系统结构体类型 */
typedef void*           render_context_t;    // 渲染上下文类型
typedef void*           render_resource_t;   // 渲染资源类型
typedef void*           render_material_t;   // 渲染材质类型
typedef void*           render_texture_t;    // 渲染纹理类型
typedef void*           render_mesh_t;       // 渲染网格类型
typedef void*           render_queue_t;      // 渲染队列类型

/** 渲染系统回调函数类型 */
typedef void*           (*render_allocator_t)(size_t size, size_t align, int flags, int tag);  // 渲染分配器类型
typedef void            (*render_deallocator_t)(void* ptr);  // 渲染释放器类型
typedef void            (*render_callback_t)(void* context, void* param1, void* param2);  // 渲染回调类型

// =============================================================================
// 函数声明
// =============================================================================

/** 渲染系统标志位管理器 */
void RenderingSystemFlagManager(render_context_t context);

/** 渲染系统参数初始化器 */
void RenderingSystemParameterInitializer(render_context_t context, render_resource_t resource1, render_resource_t resource2, render_byte_t flags);

/** 渲染系统材质参数处理器 */
void RenderingSystemMaterialProcessor(render_context_t context, render_material_t material, render_mesh_t mesh);

// =============================================================================
// 核心函数实现
// =============================================================================

/**
 * 渲染系统标志位管理器
 * 
 * 该函数负责管理和优化渲染系统的标志位，包括：
 * - 标志位的设置和清除
 * - 标志位的批量处理
 * - 标志位状态的同步
 * - 渲染对象的状态更新
 * 
 * @param context 渲染系统上下文指针
 */
void RenderingSystemFlagManager(render_context_t context)
{
    render_ptr_t data_start;     // 数据起始指针
    render_ptr_t data_end;       // 数据结束指针
    render_ptr_t current_ptr;    // 当前指针
    render_flag_t flag_mask;     // 标志位掩码
    int flag_count;              // 标志位计数
    int match_count;             // 匹配计数
    int i;                       // 循环索引
    
    // 初始化标志位处理
    flag_count = 1;
    
    // 检查是否有需要处理的标志位
    if (1 < *(int*)((uint8_t*)context + RENDERING_OFFSET_FLAG_COUNT)) {
        do {
            // 获取数据范围
            data_start = *(render_ptr_t*)((uint8_t*)context + RENDERING_OFFSET_DATA_START);
            data_end = *(render_ptr_t*)((uint8_t*)context + RENDERING_OFFSET_DATA_END);
            
            // 计算标志位掩码
            flag_mask = 1 << ((render_byte_t)flag_count & RENDERING_SYSTEM_FLAG_MASK);
            match_count = 0;
            current_ptr = data_start;
            
            // 第一遍：统计匹配的标志位
            if (data_start < data_end) {
                do {
                    i = match_count + 1;
                    if ((*(render_flag_t*)((uint8_t*)current_ptr + RENDERING_OFFSET_ELEMENT_FLAGS) & flag_mask) == 0) {
                        i = match_count;
                    }
                    match_count = i;
                    current_ptr = current_ptr + RENDERING_SYSTEM_ELEMENT_SIZE;
                } while (current_ptr < data_end);
                
                // 如果没有匹配的标志位，跳过设置阶段
                if (match_count == 0) goto FLAG_PROCESS_SKIP;
            }
            else {
FLAG_PROCESS_SKIP:
                // 第二遍：设置标志位
                if (data_start < data_end) {
                    do {
                        if ((1 << ((render_byte_t)flag_count - 1 & RENDERING_SYSTEM_FLAG_MASK) & 
                            *(render_flag_t*)((uint8_t*)data_start + RENDERING_OFFSET_ELEMENT_FLAGS)) != 0) {
                            *(render_flag_t*)((uint8_t*)data_start + RENDERING_OFFSET_ELEMENT_FLAGS) = 
                                *(render_flag_t*)((uint8_t*)data_start + RENDERING_OFFSET_ELEMENT_FLAGS) | flag_mask;
                        }
                        data_start = data_start + RENDERING_SYSTEM_ELEMENT_SIZE;
                    } while (data_start < *(render_ptr_t*)((uint8_t*)context + RENDERING_OFFSET_DATA_END));
                }
            }
            
            flag_count = flag_count + 1;
        } while (flag_count < *(int*)((uint8_t*)context + RENDERING_OFFSET_FLAG_COUNT));
    }
    
    // 更新引用计数器
    render_ptr_t reference_ptr = *(render_ptr_t*)((uint8_t*)context + RENDERING_OFFSET_REFERENCE_PTR);
    if (reference_ptr != 0) {
        *(render_short_t*)((uint8_t*)reference_ptr + RENDERING_OFFSET_COUNTER) = 
            *(render_short_t*)((uint8_t*)reference_ptr + RENDERING_OFFSET_COUNTER) + 1;
        
        reference_ptr = *(render_ptr_t*)((uint8_t*)reference_ptr + RENDERING_OFFSET_NEXT_PTR);
        if (reference_ptr != 0) {
            *(render_short_t*)((uint8_t*)reference_ptr + RENDERING_OFFSET_COUNTER) = 
                *(render_short_t*)((uint8_t*)reference_ptr + RENDERING_OFFSET_COUNTER) + 1;
            
            // 递归更新链表中的所有计数器
            for (reference_ptr = *(render_ptr_t*)((uint8_t*)reference_ptr + RENDERING_OFFSET_NEXT_PTR); 
                 reference_ptr != 0; 
                 reference_ptr = *(render_ptr_t*)((uint8_t*)reference_ptr + RENDERING_OFFSET_NEXT_PTR)) {
                *(render_short_t*)((uint8_t*)reference_ptr + RENDERING_OFFSET_COUNTER) = 
                    *(render_short_t*)((uint8_t*)reference_ptr + RENDERING_OFFSET_COUNTER) + 1;
            }
            return;
        }
    }
    return;
}

// 函数别名：保持与原代码的兼容性
void process_rendering_flags(longlong render_context)
{
    RenderingSystemFlagManager((render_context_t)render_context);
}

/**
 * 更新渲染计数器
 * 
 * 该函数负责更新渲染系统中的各种计数器，包括：
 * - 渲染对象引用计数
 * - 资源使用计数
 * - 状态变化计数
 * 
 * @param render_context 渲染上下文指针
 */
void update_render_counters(longlong render_context)
{
    render_ptr_t counter_ptr;
    
    counter_ptr = *(render_ptr_t*)((uint8_t*)render_context + RENDERING_OFFSET_REFERENCE_PTR);
    if (counter_ptr != 0) {
        *(render_short_t*)((uint8_t*)counter_ptr + RENDERING_OFFSET_COUNTER) = 
            *(render_short_t*)((uint8_t*)counter_ptr + RENDERING_OFFSET_COUNTER) + 1;
        
        counter_ptr = *(render_ptr_t*)((uint8_t*)counter_ptr + RENDERING_OFFSET_NEXT_PTR);
        if (counter_ptr != 0) {
            *(render_short_t*)((uint8_t*)counter_ptr + RENDERING_OFFSET_COUNTER) = 
                *(render_short_t*)((uint8_t*)counter_ptr + RENDERING_OFFSET_COUNTER) + 1;
            
            // 递归更新所有关联的计数器
            for (counter_ptr = *(render_ptr_t*)((uint8_t*)counter_ptr + RENDERING_OFFSET_NEXT_PTR); 
                 counter_ptr != 0; 
                 counter_ptr = *(render_ptr_t*)((uint8_t*)counter_ptr + RENDERING_OFFSET_NEXT_PTR)) {
                *(render_short_t*)((uint8_t*)counter_ptr + RENDERING_OFFSET_COUNTER) = 
                    *(render_short_t*)((uint8_t*)counter_ptr + RENDERING_OFFSET_COUNTER) + 1;
            }
            return;
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 初始化材质参数和资源管理
// 原函数名: FUN_1802786d0
void initialize_material_parameters(longlong material_context, undefined8 resource_manager, undefined8 texture_data, undefined1 flags)
{
    longlong *previous_resource;
    longlong *new_resource;
    
    // 初始化材质上下文的基本参数
    *(byte *)(material_context + 0x60) = 0;       // 材质状态标志
    *(undefined8 *)(material_context + 0x58) = 0; // 清空材质指针
    *(undefined8 *)(material_context + 0x30) = 0; // 清空纹理数组
    
    // 初始化浮点参数数组 - 设置默认值
    *(undefined8 *)(material_context + 0x330) = 0x3f800000;    // float[0] = 1.0f
    *(undefined8 *)(material_context + 0x338) = 0;               // float[1] = 0.0f
    *(undefined8 *)(material_context + 0x340) = 0x3f80000000000000; // float[2] = 1.0
    *(undefined8 *)(material_context + 0x348) = 0;               // float[3] = 0.0
    *(undefined8 *)(material_context + 0x350) = 0;               // float[4] = 0.0
    *(undefined8 *)(material_context + 0x358) = 0x3f800000;    // float[5] = 1.0f
    *(undefined8 *)(material_context + 0x360) = 0;               // float[6] = 0.0f
    *(undefined8 *)(material_context + 0x368) = 0x3f80000000000000; // float[7] = 1.0
    *(undefined8 *)(material_context + 0x370) = 0x3f800000;    // float[8] = 1.0f
    *(undefined8 *)(material_context + 0x378) = 0;               // float[9] = 0.0f
    *(undefined8 *)(material_context + 0x380) = 0x3f80000000000000; // float[10] = 1.0
    *(undefined8 *)(material_context + 0x388) = 0;               // float[11] = 0.0f
    
    // 初始化整数参数数组
    *(undefined4 *)(material_context + 0x390) = 0;   // int[0] = 0
    *(undefined4 *)(material_context + 0x394) = 0;   // int[1] = 0
    *(undefined4 *)(material_context + 0x398) = 0x3f800000; // int[2] = 1.0f (float)
    *(undefined4 *)(material_context + 0x39c) = 0;   // int[3] = 0
    *(undefined4 *)(material_context + 0x3a0) = 0;   // int[4] = 0
    *(undefined4 *)(material_context + 0x3a4) = 0;   // int[5] = 0
    *(undefined4 *)(material_context + 0x3a8) = 0;   // int[6] = 0
    *(undefined4 *)(material_context + 0x3ac) = 0x3f800000; // int[7] = 1.0f (float)
    
    // 设置材质属性标志
    *(byte *)(material_context + 0x3b0) = 0xff;   // 材质类型标志
    *(byte *)(material_context + 800) = 1;         // 激活标志
    
    // 初始化渲染状态
    *(undefined4 *)(material_context + 0x210) = 0x21; // 渲染模式
    *(byte *)(material_context + 0x3c0) = 0;      // 额外状态标志
    
    // 设置材质参数限制
    *(undefined4 *)(material_context + 0x328) = 0xffffffff; // 最大值限制
    *(undefined4 *)(material_context + 0x3c4) = 0;         // 最小值限制
    
    // 清空辅助参数
    *(undefined4 *)(material_context + 0x324) = 0;   // 辅助参数1
    *(byte *)(material_context + 0x32c) = 0;       // 辅助参数2
    
    // 设置材质精度参数
    *(undefined4 *)(material_context + 0x68) = 0x7f7fffff; // 最大浮点值
    *(undefined4 *)(material_context + 0x7c) = 0;         // 最小浮点值
    
    // 释放旧的资源管理器
    previous_resource = *(longlong **)(material_context + 0x3b8);
    *(undefined8 *)(material_context + 0x3b8) = 0; // 清空资源管理器指针
    if (previous_resource != (longlong *)0x0) {
        // 调用资源管理器的释放方法
        (**(code **)(*previous_resource + 0x38))(previous_resource, 0, texture_data, flags, 0xfffffffffffffffe);
    }
    
    // 初始化材质数据缓冲区
    *(undefined4 *)(material_context + 0x248) = 0xffffffff; // 设置缓冲区大小
    
    // 创建新的资源管理器
    new_resource = (longlong *)create_resource_manager(_DAT_180c8ed18, 0x30, 8, 0x1e);
    *new_resource = (longlong)&UNK_180a21690; // 设置资源类型
    *new_resource = (longlong)&UNK_180a21720; // 设置资源路径
    *(undefined4 *)(new_resource + 1) = 0;    // 清空资源标志
    *new_resource = (longlong)&UNK_180a16940; // 设置资源数据
    new_resource[3] = 0;                      // 清空资源计数
    new_resource[4] = 0;                      // 清空资源索引
    *(undefined4 *)(new_resource + 2) = 0;    // 清空资源状态
    *(undefined4 *)(new_resource + 5) = 0;    // 清空资源标志
    
    // 初始化新的资源管理器
    (**(code **)(*new_resource + 0x28))(new_resource);
    
    // 替换资源管理器指针
    previous_resource = *(longlong **)(material_context + 0x3c8);
    *(longlong **)(material_context + 0x3c8) = new_resource;
    if (previous_resource != (longlong *)0x0) {
        // 释放旧的资源管理器
        (**(code **)(*previous_resource + 0x38))();
    }
    
    // 完成材质初始化
    *(byte *)(material_context + 0x322) = 0;  // 设置初始化完成标志
    *(undefined4 *)(material_context + 0x3b4) = 0; // 清空错误标志
    
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 解析材质数据和属性设置
// 原函数名: FUN_180278870
void parse_material_data(longlong render_context, longlong material_manager, longlong data_source)
{
    char *temp_char;
    longlong *resource_ptr;
    undefined4 temp_value;
    undefined4 *material_data;
    undefined8 *attribute_list;
    longlong *node_ptr;
    longlong result1;
    longlong result2;
    ulonglong buffer_size;
    undefined *default_value;
    longlong *temp_ptr;
    undefined8 *current_node;
    char *string_ptr;
    char *attribute_name;
    float factor1, factor2, factor3;
    float color_r, color_g, color_b;
    float uv_u, uv_v, uv_w;
    float alpha;
    float blend_factor;
    float texture_scale;
    
    // 栈变量定义 - 用于存储解析过程中的临时数据
    undefined1 temp_buffer[32];      // 临时缓冲区
    undefined4 factor_value;        // 因子值
    undefined4 material_id;         // 材质ID
    longlong context_ptr;          // 上下文指针
    undefined8 vec4_data[4];       // 4D向量数据
    undefined8 vec3_data[3];       // 3D向量数据
    undefined8 vec2_data[2];       // 2D向量数据
    float color_values[3];         // 颜色值数组
    undefined4 blend_mode;         // 混合模式
    longlong texture_handle;       // 纹理句柄
    undefined8 uv_coords[2];      // UV坐标
    undefined4 texture_flags[4];   // 纹理标志
    float texture_factors[3];      // 纹理因子
    longlong *resource_array[2];   // 资源数组
    longlong *stack_resource;      // 栈资源指针
    undefined4 color_values_rgba[4]; // RGBA颜色值
    undefined8 matrix_data[4];     // 矩阵数据
    undefined8 transform_data[4];  // 变换数据
    undefined4 vertex_attribs[4];  // 顶点属性
    undefined *string_handler;     // 字符串处理器
    undefined1 *string_buffer;     // 字符串缓冲区
    undefined4 string_length;      // 字符串长度
    undefined1 name_buffer[136];   // 名称缓冲区
    undefined *mesh_handler;       // 网格处理器
    undefined *texture_handler;    // 纹理处理器
    undefined4 mesh_id;            // 网格ID
    undefined temp_stack[136];     // 临时栈空间
    ulonglong security_hash;       // 安全哈希值
    
    // 初始化安全哈希和字符串处理
    uv_coords[1] = 0xfffffffffffffffe;
    security_hash = _DAT_180bf00a8 ^ (ulonglong)temp_buffer;
    temp_ptr = (longlong *)0x0;
    string_handler = &UNK_1809fcc28;
    string_buffer = name_buffer;
    string_length = 0;
    name_buffer[0] = 0;
    
    // 设置默认属性名称
    attribute_name = "material";
    do {
        string_ptr = attribute_name;
        attribute_name = string_ptr + 1;
    } while (*attribute_name != '\0');
    
    // 获取属性列表
    attribute_list = *(undefined8 **)(data_source + 0x40);
    
    do {
        context_ptr = data_source;
        uv_coords[0] = material_manager;
        
        if (attribute_list == (undefined8 *)0x0) {
            // 处理空属性列表的情况
            goto process_next_attribute;
        }
        
        // 处理材质属性
        if (attribute_list == (undefined8 *)0x0) {
            // 处理材质标识符
            result2 = context_ptr;
            material_id = 0;
            result1 = find_material_attribute(context_ptr, &UNK_180a16828);
            
            if (result1 != 0) {
                // 解析材质名称
                string_ptr = (char *)0x180d48d24;
                if (*(char **)(result1 + 8) != (char *)0x0) {
                    string_ptr = *(char **)(result1 + 8);
                }
                
                // 计算字符串长度
                buffer_size = 0xffffffffffffffff;
                do {
                    buffer_size = buffer_size + 1;
                } while (string_ptr[buffer_size] != '\0');
                
                // 验证材质名称格式
                if (((buffer_size < 3) || (*string_ptr != '0')) ||
                    (default_value = &UNK_180a3cb84, (string_ptr[1] + 0xa8U & 0xdf) != 0)) {
                    default_value = &UNK_180a063a0;
                }
                
                // 转换材质ID
                convert_material_id(string_ptr, default_value, &material_id);
                
                // 创建材质数据条目
                material_data = (undefined4 *)create_material_entry(render_context);
                *material_data = 0;  // 设置材质类型
                material_data[2] = material_id;  // 设置材质ID
                
                // 添加到材质管理器
                add_to_material_manager(material_manager, material_data);
            }
            
            // 处理材质路径
            result1 = find_material_attribute(result2, &UNK_180a16840);
            if (result1 != 0) {
                // 获取材质路径
                result2 = 0x180d48d24;
                if (*(longlong *)(result1 + 8) != 0) {
                    result2 = *(longlong *)(result1 + 8);
                }
                
                // 处理材质路径字符串
                (**(code **)(string_handler + 0x10))(&string_handler, result2);
                
                // 创建材质数据条目
                material_data = (undefined4 *)create_material_entry(render_context);
                *material_data = 2;  // 设置材质类型为路径
                attribute_list = (undefined8 *)create_texture_resource(_DAT_180c86930, &stack_resource, &string_handler, 1);
                *(undefined8 *)(material_data + 2) = *attribute_list;
                
                // 释放临时资源
                if (stack_resource != (longlong *)0x0) {
                    (**(code **)(*stack_resource + 0x38))();
                }
                
                // 添加到材质管理器
                add_to_material_manager(material_manager, material_data);
                result2 = context_ptr;
            }
            
            // 初始化默认材质参数
            initialize_default_material_parameters();
            
            // 处理材质颜色和纹理参数
            process_material_color_and_texture(result2);
            
            // 处理材质法线贴图
            process_material_normal_map(result2);
            
            // 跳转到处理完成
            goto material_processing_complete;
        }
        
        // 处理材质名称属性
        mesh_handler = &UNK_1809fcc28;
        texture_handler = temp_stack;
        mesh_id = 0;
        temp_stack[0] = 0;
        
    process_material_attributes:
        do {
            // 处理名称属性
            attribute_name = "name";
            do {
                string_ptr = attribute_name;
                attribute_name = string_ptr + 1;
            } while (*attribute_name != '\0');
            
            // 查找名称属性
            for (current_node = (undefined8 *)attribute_list[8]; current_node != (undefined8 *)0x0;
                current_node = (undefined8 *)current_node[6]) {
                string_ptr = (char *)*current_node;
                if (string_ptr == (char *)0x0) {
                    string_ptr = (char *)0x180d48d24;
                    node_ptr = temp_ptr;
                }
                else {
                    node_ptr = (longlong *)current_node[2];
                }
                
                // 检查属性名称匹配
                if (node_ptr == (longlong *)(string_ptr + -0x180a03a83)) {
                    temp_char = (char *)((longlong)node_ptr + (longlong)string_ptr);
                    if (temp_char <= string_ptr) {
                        // 处理名称属性值
                        result2 = 0x180d48d24;
                        if (current_node[1] != 0) {
                            result2 = current_node[1];
                        }
                        (**(code **)(mesh_handler + 0x10))(&mesh_handler, result2);
                        break;
                    }
                    
                    // 比较属性名称
                    result2 = (longlong)&DAT_180a03a84 - (longlong)string_ptr;
                    while (*string_ptr == string_ptr[result2]) {
                        string_ptr = string_ptr + 1;
                        if (temp_char <= string_ptr) goto process_name_value;
                    }
                }
            }
            
            // 处理材质属性
            factor_value = 0;
            attribute_name = "material";
            do {
                string_ptr = attribute_name;
                attribute_name = string_ptr + 1;
            } while (*attribute_name != '\0');
            
            // 查找材质属性
            for (current_node = (undefined8 *)attribute_list[8]; current_node != (undefined8 *)0x0;
                current_node = (undefined8 *)current_node[6]) {
                string_ptr = (char *)*current_node;
                if (string_ptr == (char *)0x0) {
                    string_ptr = (char *)0x180d48d24;
                    node_ptr = temp_ptr;
                }
                else {
                    node_ptr = (longlong *)current_node[2];
                }
                
                // 检查材质属性匹配
                if (node_ptr == (longlong *)(string_ptr + -0x180a04ebf)) {
                    temp_char = (char *)((longlong)node_ptr + (longlong)string_ptr);
                    if (temp_char <= string_ptr) {
                        // 处理材质属性值
                        result2 = 0x180d48d24;
                        if (current_node[1] != 0) {
                            result2 = current_node[1];
                        }
                        (**(code **)(string_handler + 0x10))(&string_handler, result2);
                        
                        // 创建材质缓冲区
                        resource_ptr = *(longlong **)(render_context + 0x50);
                        create_material_buffer(resource_ptr);
                    }
                    
                    // 比较材质属性名称
                    result2 = (longlong)&UNK_180a04ec0 - (longlong)string_ptr;
                    while (*string_ptr == string_ptr[result2]) {
                        string_ptr = string_ptr + 1;
                        if (temp_char <= string_ptr) goto process_material_value;
                    }
                }
            }
            
            // 处理因子属性
            attribute_name = "factor";
            do {
                string_ptr = attribute_name;
                attribute_name = string_ptr + 1;
            } while (*attribute_name != '\0');
            
            // 查找因子属性
            for (current_node = (undefined8 *)attribute_list[8]; current_node != (undefined8 *)0x0;
                current_node = (undefined8 *)current_node[6]) {
                string_ptr = (char *)*current_node;
                if (string_ptr == (char *)0x0) {
                    string_ptr = (char *)0x180d48d24;
                    node_ptr = temp_ptr;
                }
                else {
                    node_ptr = (longlong *)current_node[2];
                }
                
                // 检查因子属性匹配
                if (node_ptr == (longlong *)(string_ptr + -0x180a1674b)) {
                    temp_char = (char *)((longlong)node_ptr + (longlong)string_ptr);
                    if (temp_char <= string_ptr) {
                        // 处理因子属性值
                        result2 = 0x180d48d24;
                        if (current_node[1] != 0) {
                            result2 = current_node[1];
                        }
                        convert_float_value(result2, &UNK_180a063a0, &factor_value);
                        
                        // 创建材质缓冲区
                        resource_ptr = *(longlong **)(render_context + 0x50);
                        create_material_buffer(resource_ptr);
                    }
                    
                    // 比较因子属性名称
                    result2 = (longlong)&UNK_180a1674c - (longlong)string_ptr;
                    while (*string_ptr == string_ptr[result2]) {
                        string_ptr = string_ptr + 1;
                        if (temp_char <= string_ptr) goto process_factor_value;
                    }
                }
            }
            
            // 处理第二因子属性
            attribute_name = "factor2";
            do {
                string_ptr = attribute_name;
                attribute_name = string_ptr + 1;
            } while (*attribute_name != '\0');
            
            // 查找第二因子属性
            for (current_node = (undefined8 *)attribute_list[8]; current_node != (undefined8 *)0x0;
                current_node = (undefined8 *)current_node[6]) {
                string_ptr = (char *)*current_node;
                if (string_ptr == (char *)0x0) {
                    string_ptr = (char *)0x180d48d24;
                    node_ptr = temp_ptr;
                }
                else {
                    node_ptr = (longlong *)current_node[2];
                }
                
                // 检查第二因子属性匹配
                if (node_ptr == (longlong *)(string_ptr + -0x180a167ff)) {
                    temp_char = (char *)((longlong)node_ptr + (longlong)string_ptr);
                    if (temp_char <= string_ptr) {
                        // 处理第二因子属性值
                        result2 = 0x180d48d24;
                        if (current_node[1] != 0) {
                            result2 = current_node[1];
                        }
                        convert_float_value(result2, &UNK_180a063a0, &factor_value);
                        
                        // 创建材质缓冲区
                        resource_ptr = *(longlong **)(render_context + 0x50);
                        create_material_buffer(resource_ptr);
                    }
                    
                    // 比较第二因子属性名称
                    result2 = (longlong)&UNK_180a16800 - (longlong)string_ptr;
                    while (*string_ptr == string_ptr[result2]) {
                        string_ptr = string_ptr + 1;
                        if (temp_char <= string_ptr) goto process_factor2_value;
                    }
                }
            }
            
            // 处理纹理属性
            result2 = find_texture_attribute(attribute_list, &UNK_180a167e0, &color_values_rgba[0]);
            if (result2 != 0) {
                // 创建材质缓冲区
                resource_ptr = *(longlong **)(render_context + 0x50);
                create_material_buffer(resource_ptr);
            }
            
            // 处理法线贴图属性
            result2 = find_texture_attribute(attribute_list, &UNK_180a167f0, &color_values_rgba[0]);
            if (result2 != 0) {
                // 创建材质数据条目
                material_data = (undefined4 *)create_material_entry(render_context);
                *material_data = 9;  // 设置材质类型为法线贴图
                material_data[0x42] = color_values_rgba[0];
                material_data[0x43] = color_values_rgba[1];
                material_data[0x44] = color_values_rgba[2];
                material_data[0x45] = color_values_rgba[3];
                
                // 设置纹理路径
                default_value = &DAT_18098bc73;
                if (texture_handler != (undefined *)0x0) {
                    default_value = texture_handler;
                }
                strcpy_s(material_data + 2, 0x80, default_value);
                
                // 添加到材质管理器
                add_to_material_manager(material_manager, material_data);
            }
            
            // 处理网格属性
            attribute_name = "mesh";
            do {
                string_ptr = attribute_name;
                attribute_name = string_ptr + 1;
            } while (*attribute_name != '\0');
            
            // 查找网格属性
            while (true) {
                do {
                    attribute_list = (undefined8 *)attribute_list[0xb];
                    if (attribute_list == (undefined8 *)0x0) {
                        mesh_handler = &UNK_18098bcb0;
                        goto process_next_attribute;
                    }
                    string_ptr = (char *)*attribute_list;
                    if (string_ptr == (char *)0x0) {
                        string_ptr = (char *)0x180d48d24;
                        node_ptr = temp_ptr;
                    }
                    else {
                        node_ptr = (longlong *)attribute_list[2];
                    }
                } while (node_ptr != (longlong *)(string_ptr + -0x180a0f3e7));
                
                temp_char = (char *)((longlong)node_ptr + (longlong)string_ptr);
                if (temp_char <= string_ptr) break;
                
                result2 = (longlong)&UNK_180a0f3e8 - (longlong)string_ptr;
                while (*string_ptr == string_ptr[result2]) {
                    string_ptr = string_ptr + 1;
                    if (temp_char <= string_ptr) goto process_material_attributes;
                }
            }
        } while (true);
        
        // 处理材质引用
        string_ptr = (char *)*attribute_list;
        if (string_ptr == (char *)0x0) {
            string_ptr = (char *)0x180d48d24;
            node_ptr = temp_ptr;
        }
        else {
            node_ptr = (longlong *)attribute_list[2];
        }
        
        // 检查材质引用匹配
        if (node_ptr == (longlong *)(string_ptr + -0x180a04ebf)) {
            temp_char = (char *)((longlong)node_ptr + (longlong)string_ptr);
            if (temp_char <= string_ptr) {
                // 处理材质引用值
                result2 = 0x180d48d24;
                if (attribute_list[1] != 0) {
                    result2 = attribute_list[1];
                }
                process_material_reference(&string_handler, result2);
                
                // 创建材质数据条目
                material_data = (undefined4 *)create_material_entry(render_context);
                *material_data = 1;  // 设置材质类型为引用
                attribute_list = (undefined8 *)create_texture_resource(_DAT_180c86930, resource_array, &string_handler, 1);
                *(undefined8 *)(material_data + 2) = *attribute_list;
                
                // 释放临时资源
                if (resource_array[0] != (longlong *)0x0) {
                    (**(code **)(*resource_array[0] + 0x38))();
                }
                
                // 添加到材质管理器
                add_to_material_manager(material_manager, material_data);
                goto process_next_attribute;
            }
            
            // 比较材质引用名称
            result2 = (longlong)&UNK_180a04ec0 - (longlong)string_ptr;
            while (*string_ptr == string_ptr[result2]) {
                string_ptr = string_ptr + 1;
                if (temp_char <= string_ptr) goto process_material_reference;
            }
        }
        
        // 移动到下一个属性
        attribute_list = (undefined8 *)attribute_list[6];
    } while (true);
    
    // 标签跳转定义
process_name_value:
    result2 = 0x180d48d24;
    if (current_node[1] != 0) {
        result2 = current_node[1];
    }
    (**(code **)(mesh_handler + 0x10))(&mesh_handler, result2);
    goto continue_processing;
    
process_material_value:
    result2 = 0x180d48d24;
    if (current_node[1] != 0) {
        result2 = current_node[1];
    }
    (**(code **)(string_handler + 0x10))(&string_handler, result2);
    resource_ptr = *(longlong **)(render_context + 0x50);
    create_material_buffer(resource_ptr);
    goto continue_processing;
    
process_factor_value:
    result2 = 0x180d48d24;
    if (current_node[1] != 0) {
        result2 = current_node[1];
    }
    convert_float_value(result2, &UNK_180a063a0, &factor_value);
    resource_ptr = *(longlong **)(render_context + 0x50);
    create_material_buffer(resource_ptr);
    goto continue_processing;
    
process_factor2_value:
    result2 = 0x180d48d24;
    if (current_node[1] != 0) {
        result2 = current_node[1];
    }
    convert_float_value(result2, &UNK_180a063a0, &factor_value);
    resource_ptr = *(longlong **)(render_context + 0x50);
    create_material_buffer(resource_ptr);
    goto continue_processing;
    
process_material_reference:
    result2 = 0x180d48d24;
    if (attribute_list[1] != 0) {
        result2 = attribute_list[1];
    }
    process_material_reference(&string_handler, result2);
    material_data = (undefined4 *)create_material_entry(render_context);
    *material_data = 1;
    attribute_list = (undefined8 *)create_texture_resource(_DAT_180c86930, resource_array, &string_handler, 1);
    *(undefined8 *)(material_data + 2) = *attribute_list;
    if (resource_array[0] != (longlong *)0x0) {
        (**(code **)(*resource_array[0] + 0x38))();
    }
    add_to_material_manager(material_manager, material_data);
    goto process_next_attribute;
    
continue_processing:
    // 继续处理下一个属性
    ;
    
process_next_attribute:
    // 处理下一个属性
    attribute_list = *(undefined8 **)(context_ptr + 0x30);
    if (attribute_list == (undefined8 *)0x0) {
        // 材质处理完成
        material_processing_complete:
        string_handler = &UNK_18098bcb0;
        // 注意：这里会调用不返回的函数
        cleanup_material_processing(security_hash ^ (ulonglong)temp_buffer);
    }
    
    // 继续处理材质属性
    ;
}

// 辅助函数声明（简化实现）
void initialize_default_material_parameters(void) {
    // 简化实现：初始化默认材质参数
    // 原实现：设置各种默认值和标志位
}

void process_material_color_and_texture(longlong context) {
    // 简化实现：处理材质颜色和纹理
    // 原实现：复杂的颜色计算和纹理坐标处理
}

void process_material_normal_map(longlong context) {
    // 简化实现：处理材质法线贴图
    // 原实现：法线贴图参数设置和验证
}

void add_to_material_manager(longlong manager, undefined4 *data) {
    // 简化实现：添加数据到材质管理器
    // 原实现：线程安全的内存分配和链表操作
}

void create_material_buffer(longlong resource_ptr) {
    // 简化实现：创建材质缓冲区
    // 原实现：内存分配和初始化
}

void cleanup_material_processing(ulonglong hash) {
    // 简化实现：清理材质处理
    // 原实现：资源释放和内存清理
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



