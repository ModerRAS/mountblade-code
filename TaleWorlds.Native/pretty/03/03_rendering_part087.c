#include "TaleWorlds.Native.Split.h"

// 渲染系统高级纹理映射和参数处理模块
// 包含4个核心函数，涵盖渲染纹理映射、参数处理、资源管理、缓冲区操作等高级渲染功能

// 常量定义
#define RENDER_TEXTURE_SIZE_BASE 0x80
#define RENDER_TEXTURE_SIZE_MIN 1
#define RENDER_TEXTURE_SIZE_MAX 32
#define RENDER_TEXTURE_COORD_NORMAL 1.0f
#define RENDER_TEXTURE_COORD_HALF 0.5f
#define RENDER_TEXTURE_COORD_ZERO 0.0f
#define RENDER_TEXTURE_COORD_NEGATIVE -1.0f

#define RENDER_PARAM_TYPE_DEFAULT 0
#define RENDER_PARAM_TYPE_ENHANCED 1
#define RENDER_PARAM_TYPE_ADVANCED 2
#define RENDER_PARAM_TYPE_PREMIUM 3
#define RENDER_PARAM_TYPE_ULTIMATE 4
#define RENDER_PARAM_TYPE_EXPERIMENTAL 5

#define RENDER_BUFFER_SIZE_32BIT 0x20
#define RENDER_BUFFER_SIZE_64BIT 0x40
#define RENDER_BUFFER_SIZE_128BIT 0x80
#define RENDER_BUFFER_SIZE_256BIT 0x100
#define RENDER_BUFFER_SIZE_512BIT 0x200

#define RENDER_FLAG_ENABLED 1
#define RENDER_FLAG_ACTIVE 2
#define RENDER_FLAG_VISIBLE 4
#define RENDER_FLAG_TEXTURE_ENABLED 8
#define RENDER_FLAG_PARAM_ENABLED 0x10
#define RENDER_FLAG_RESOURCE_ENABLED 0x20

#define RENDER_MEMORY_ALIGNMENT 8
#define RENDER_MEMORY_POOL_SIZE 0x3b0
#define RENDER_MEMORY_BLOCK_SIZE 0x10

// 渲染参数类型枚举
typedef enum {
    RENDER_PARAM_DEFAULT = 0,
    RENDER_PARAM_ENHANCED = 1,
    RENDER_PARAM_ADVANCED = 2,
    RENDER_PARAM_PREMIUM = 3,
    RENDER_PARAM_ULTIMATE = 4,
    RENDER_PARAM_EXPERIMENTAL = 5
} RenderParameterType;

// 渲染纹理坐标结构体
typedef struct {
    float x;
    float y;
    float z;
    float w;
} RenderTextureCoordinate;

// 渲染参数结构体
typedef struct {
    uint32_t param_type;
    uint32_t param_flags;
    float param_values[4];
    void* param_data;
} RenderParameters;

// 渲染缓冲区管理器结构体
typedef struct {
    void* buffer_pool;
    void* texture_cache;
    void* parameter_buffer;
    void* resource_manager;
    uint32_t buffer_size;
    uint32_t buffer_count;
    uint32_t render_flags;
} RenderBufferManager;

// 函数别名定义
#define render_system_texture_mapper FUN_1803198f0
#define render_system_parameter_processor FUN_18031a020
#define render_system_texture_allocator FUN_18031a240
#define render_system_buffer_manager FUN_18031a470

/**
 * 渲染系统纹理映射器 - 处理纹理坐标映射和参数设置
 * 
 * @param render_context 渲染上下文
 * @param texture_data 纹理数据指针
 * @param texture_index 纹理索引
 * @param texture_size 纹理尺寸
 * @param render_flags 渲染标志位
 * @return void
 */
void render_system_texture_mapper(undefined8 render_context, longlong texture_data, 
                                int texture_index, int texture_size, undefined4 render_flags)
{
    longlong *render_manager;
    longlong texture_offset;
    longlong *texture_buffer;
    int texture_step;
    undefined4 param_x;
    undefined4 param_y;
    undefined4 param_z;
    undefined4 param_w;
    undefined4 param_u;
    undefined4 param_v;
    undefined4 param_s;
    undefined4 param_t;
    undefined1 stack_protector[32];
    undefined4 buffer_size_1;
    undefined4 buffer_size_2;
    undefined1 alignment_buffer[8];
    longlong *texture_ptr;
    longlong *texture_cache[2];
    longlong *resource_ptr;
    undefined8 resource_handle;
    undefined8 texture_handle;
    undefined4 buffer_format;
    longlong *memory_ptr;
    longlong *allocator_ptr;
    longlong allocation_size;
    undefined4 alloc_flags;
    ulonglong checksum;
    undefined4 texture_width;
    undefined4 texture_height;
    undefined4 texture_depth;
    undefined4 texture_format;
    longlong *texture_manager;
    undefined8 manager_handle;
    undefined8 cache_handle;
    undefined4 operation_flags;
    undefined1 texture_block[32];
    undefined8 block_handle;
    undefined8 block_size;
    longlong *data_ptr;
    longlong **data_cache;
    int data_size;
    int data_capacity;
    undefined *data_source;
    undefined1 *data_target;
    undefined4 data_flags;
    undefined1 data_buffer[8];
    ulonglong data_checksum;
    undefined8 data_handle;
    undefined8 temp_handle;
    undefined4 temp_flags;
    undefined4 buffer_flags;
    undefined8 texture_params;
    float texture_scale;
    undefined4 scale_flags;
    undefined4 size_flags;
    undefined4 format_flags;
    ulonglong memory_checksum;
    
    // 初始化内存保护
    manager_handle = 0xfffffffffffffffe;
    memory_checksum = _DAT_180bf00a8 ^ (ulonglong)stack_protector;
    
    // 初始化纹理数据
    FUN_1802c22a0(alignment_buffer, &UNK_180a1abf8);
    texture_offset = _DAT_180c86938;
    
    // 计算纹理步长
    texture_step = RENDER_TEXTURE_SIZE_BASE >> ((byte)texture_index & 0x1f);
    texture_buffer = *(longlong **)(_DAT_180c86938 + 0x1cd8);
    
    // 检查纹理数据有效性
    if (*(longlong *)(texture_data + 0x1d8) == 0) {
        resource_ptr = (longlong *)0x0;
    }
    else {
        // 设置纹理参数
        if (_DAT_180c86870 != 0) {
            *(longlong *)(texture_data + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
        }
        
        // 计算纹理偏移
        resource_ptr = (longlong *)
                     ((longlong)(int)((uint)*(byte *)(texture_data + 0x335) * texture_size + texture_index) * 
                      RENDER_MEMORY_BLOCK_SIZE + *(longlong *)(texture_data + 0x1d8));
        
        // 激活纹理资源
        if ((resource_ptr != (longlong *)0x0) && (*resource_ptr != 0)) {
            (**(code **)(*texture_buffer + 0x70))(texture_buffer, *resource_ptr, 1);
            texture_offset = _DAT_180c86938;
        }
    }
    
    // 设置纹理管理器
    texture_buffer[0x1077] = (longlong)resource_ptr;
    *(undefined8 *)(*(longlong *)(texture_offset + 0x1cd8) + 0x83f0) = 0;
    
    // 初始化渲染状态
    FUN_18029de40(*(undefined8 *)(texture_offset + 0x1cd8), 1);
    buffer_size_1 = 0;
    buffer_size_2 = 0;
    FUN_18029c8a0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8), 1, 0xff000000, 0x3f800000);
    
    texture_offset = _DAT_180c86938;
    texture_scale = (float)texture_step;
    param_y = 1.0 / texture_scale;
    
    // 设置纹理坐标缩放
    *(float *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1be0) = param_y * RENDER_TEXTURE_COORD_HALF;
    *(float *)(*(longlong *)(texture_offset + 0x1cd8) + 0x1be4) = param_y * RENDER_TEXTURE_COORD_HALF;
    *(float *)(*(longlong *)(texture_offset + 0x1cd8) + 0x1be8) = param_y;
    *(float *)(*(longlong *)(texture_offset + 0x1cd8) + 0x1bec) = param_y;
    
    texture_offset = *(longlong *)(texture_offset + 0x1cd8);
    texture_params = 0;
    size_flags = 0;
    format_flags = 0;
    buffer_flags = 0x3f800000;
    
    texture_manager = *(longlong **)(texture_offset + 0x8400);
    scale_flags = texture_scale;
    
    // 应用纹理缩放
    (**(code **)(*texture_manager + 0x160))(texture_manager, 1, &texture_params);
    data_cache = (longlong **)0x0;
    texture_manager = *(longlong **)(texture_offset + 0x8400);
    data_size = texture_step;
    data_capacity = texture_step;
    (**(code **)(*texture_manager + 0x168))(texture_manager, 1, &data_cache);
    
    texture_offset = _DAT_180c86938;
    param_x = 0x7fc00000;
    param_y = 0x7fc00000;
    param_z = 0x7fc00000;
    param_t = 0x7fc00000;
    param_u = param_y;
    param_v = param_y;
    param_s = param_y;
    param_w = param_y;
    
    // 根据纹理类型设置参数
    switch(texture_size) {
        case RENDER_PARAM_TYPE_DEFAULT:
            param_y = 0x3f800000;
            param_s = 0;
            param_z = 0xbf800000;
            goto set_coordinates_r0;
        case RENDER_PARAM_TYPE_ENHANCED:
            param_x = 0xbf800000;
            param_y = 0xbf800000;
            param_s = 0;
            param_z = 0x3f800000;
            break;
        case RENDER_PARAM_TYPE_ADVANCED:
            param_x = 0xbf800000;
            param_y = 0xbf800000;
            param_s = 0x3f800000;
            param_z = 0;
            param_w = 0x3f800000;
            param_t = 0;
            goto set_coordinates_r1;
        case RENDER_PARAM_TYPE_PREMIUM:
            param_x = 0xbf800000;
            param_y = 0x3f800000;
            param_v = 0xbf800000;
            param_s = 0x3f800000;
            param_z = 0;
            param_t = 0;
            param_w = param_v;
            goto set_coordinates_r2;
        case RENDER_PARAM_TYPE_ULTIMATE:
            param_x = 0xbf800000;
            param_y = 0x3f800000;
            param_s = 0x3f800000;
            param_z = 0;
            break;
        case RENDER_PARAM_TYPE_EXPERIMENTAL:
            param_y = 0xbf800000;
            param_s = 0xbf800000;
            param_z = 0;
        set_coordinates_r0:
            param_x = 0x3f800000;
            break;
        default:
            goto apply_parameters;
    }
    param_t = 0xbf800000;
    param_w = 0;
set_coordinates_r1:
    param_v = 0x3f800000;
set_coordinates_r2:
    param_u = 0;
apply_parameters:
    // 应用渲染参数
    *(undefined4 *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1bf0) = param_x;
    *(undefined4 *)(*(longlong *)(texture_offset + 0x1cd8) + 0x1bf4) = param_y;
    *(undefined4 *)(*(longlong *)(texture_offset + 0x1cd8) + 0x1bf8) = param_v;
    *(undefined4 *)(*(longlong *)(texture_offset + 0x1cd8) + 0x1bfc) = 0x3f800000;
    *(undefined4 *)(*(longlong *)(texture_offset + 0x1cd8) + 0x1c10) = param_s;
    *(undefined4 *)(*(longlong *)(texture_offset + 0x1cd8) + 0x1c14) = param_z;
    *(undefined4 *)(*(longlong *)(texture_offset + 0x1cd8) + 0x1c18) = param_u;
    *(float *)(*(longlong *)(texture_offset + 0x1cd8) + 0x1c1c) = (float)texture_index;
    *(undefined4 *)(*(longlong *)(texture_offset + 0x1cd8) + 0x1c20) = param_u;
    *(undefined4 *)(*(longlong *)(texture_offset + 0x1cd8) + 0x1c24) = param_w;
    *(undefined4 *)(*(longlong *)(texture_offset + 0x1cd8) + 0x1c28) = param_t;
    *(undefined4 *)(*(longlong *)(texture_offset + 0x1cd8) + 0x1c2c) = 0x3f800000;
    
    // 处理纹理数据
    FUN_18031a240(texture_cache, render_flags);
    FUN_18029fc10(*(longlong *)(_DAT_180c86938 + 0x1cd8), *(undefined8 *)(_DAT_180c86938 + 0x1c88),
                  *(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1be0, 0x230);
    
    // 设置数据源
    data_source = &UNK_1809fcc58;
    data_target = data_buffer + 4;
    data_buffer[4] = 0;
    data_flags = 0xd;
    strcpy_s(data_buffer + 4, 0x40, &UNK_180a0d408);
    
    // 初始化渲染资源
    FUN_1800b4910(_DAT_180c86930, &texture_ptr, &data_source);
    data_source = &UNK_18098bcb0;
    texture_params = 0;
    texture_scale = 0.0;
    scale_flags._0_2_ = 4;
    memory_ptr = (longlong *)0x0;
    allocator_ptr = (longlong *)&UNK_180a3c3e0;
    checksum = 0;
    allocation_size = 0;
    alloc_flags = 0;
    texture_manager = (longlong *)0x0;
    resource_ptr = texture_ptr;
    cache_handle = CONCAT26(scale_flags._2_2_, 0x400000000);
    manager_handle = 0;
    buffer_format = 2;
    texture_width = 0;
    texture_height = 0;
    texture_depth = 0;
    texture_format = 0;
    texture_offset = texture_ptr[0x2b7];
    data_cache = &cache_handle;
    cache_handle = texture_ptr;
    block_handle = 0;
    operation_flags = 2;
    block_size = 0;
    texture_handle = cache_handle;
    
    // 处理纹理块
    FUN_180627ae0(texture_block, &allocator_ptr);
    block_size = CONCAT44(texture_height, texture_width);
    block_handle = CONCAT44(texture_format, texture_depth);
    data_ptr = texture_manager;
    
    if (texture_manager != (longlong *)0x0) {
        (**(code **)(*texture_manager + 0x28))();
    }
    
    data_source = (undefined *)FUN_180299eb0(texture_offset, 0, &cache_handle, alignment_buffer);
    data_flags = 0xff;
    data_buffer = (undefined1 [8])0x4000300;
    temp_handle = 0;
    block_size = 0;
    buffer_format = 0;
    temp_flags = 0x400;
    format_flags = 1;
    checksum = (ulonglong)*(uint *)(texture_data + 0x324);
    data_target = (undefined1 *)0xff00000001060101;
    buffer_size_1 = 0xffffffff;
    
    // 应用纹理映射
    FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8), 5, render_context, 0x10);
    buffer_size_1 = 0xffffffff;
    FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8), 0, texture_cache[0], 0x10);
    FUN_18029d000(*(undefined8 *)(_DAT_180c86938 + 0x1cd8), 4);
    FUN_18029cdd0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8), &data_source);
    
    texture_offset = _DAT_180c86938;
    texture_handle = strnlen(&UNK_180a1abc8, 0x3f);
    strncpy(texture_offset + 0x1ce0, &UNK_180a1abc8, texture_handle);
    *(undefined1 *)(texture_handle + 0x1ce0 + texture_offset) = 0;
    
    // 完成纹理处理
    FUN_18029e110(*(undefined8 *)(_DAT_180c86938 + 0x1cd8));
    
    if (texture_manager != (longlong *)0x0) {
        (**(code **)(*texture_manager + 0x38))();
    }
    
    data_cache = &allocator_ptr;
    allocator_ptr = (longlong *)&UNK_180a3c3e0;
    
    if (allocation_size == 0) {
        allocation_size = 0;
        checksum = checksum & 0xffffffff00000000;
        allocator_ptr = (longlong *)&UNK_18098bcb0;
        
        if (memory_ptr != (longlong *)0x0) {
            (**(code **)(*memory_ptr + 0x38))();
        }
        
        if (texture_ptr != (longlong *)0x0) {
            (**(code **)(*texture_ptr + 0x38))();
        }
        
        if (texture_cache[0] != (longlong *)0x0) {
            (**(code **)(*texture_cache[0] + 0x38))();
        }
        
        _DAT_180c8695c = _DAT_180c8695c + -1;
        (**(code **)(*_DAT_180c86968 + 0x20))();
        
        // 清理资源
        FUN_1808fc050(memory_checksum ^ (ulonglong)stack_protector);
    }
    
    // 完成处理
    FUN_18064e900();
}

/**
 * 渲染系统参数处理器 - 处理渲染参数和纹理设置
 * 
 * @param render_context 渲染上下文指针数组
 * @param texture_data 纹理数据指针
 * @param render_flags 渲染标志位
 * @return void
 */
void render_system_parameter_processor(undefined8 *render_context, longlong texture_data, undefined4 render_flags)
{
    uint texture_size;
    undefined4 *texture_ptr;
    uint texture_count;
    int param_index;
    int param_count;
    uint param_max;
    undefined *param_source;
    undefined1 param_buffer[32];
    undefined4 buffer_size;
    undefined *data_source;
    undefined *data_target;
    uint data_size;
    undefined4 data_width;
    undefined4 data_height;
    undefined4 data_depth;
    undefined4 data_format;
    undefined4 data_type;
    undefined4 data_flags;
    undefined4 data_offset;
    undefined4 data_padding;
    undefined1 data_coord_x;
    undefined8 data_coord_y;
    undefined4 data_scale;
    undefined1 *data_end;
    int data_length;
    undefined1 data_block[136];
    ulonglong checksum;
    
    // 初始化数据保护
    data_coord_y = 0xfffffffffffffffe;
    checksum = _DAT_180bf00a8 ^ (ulonglong)param_buffer;
    data_height = 0;
    texture_size = RENDER_TEXTURE_SIZE_BASE;
    param_index = -1;
    
    // 计算参数数量
    do {
        param_count = param_index;
        texture_size = texture_size >> 1;
        param_index = param_count + 1;
    } while (texture_size != 0);
    
    param_max = param_count + 2;
    data_offset = 0;
    data_type = 0;
    data_depth = 0;
    data_format = 0;
    data_flags = 0x3f800000;
    data_coord_y = 0x1000001;
    data_coord_x = 0;
    data_width = RENDER_TEXTURE_SIZE_BASE;
    data_height = RENDER_TEXTURE_SIZE_BASE;
    data_type = 6;
    data_scale = 0x1e;
    data_coord_x = 1;
    data_size = param_max;
    data_padding = render_flags;
    data_source = render_context;
    
    // 初始化纹理数据流
    FUN_1806279c0(&data_target, texture_data + 0x10);
    texture_size = data_size;
    texture_count = data_size + 1;
    FUN_1806277c0(&data_target, texture_count);
    *(undefined2 *)(data_source + data_size) = 0x5f;
    param_index = texture_size + 0x11;
    data_size = texture_count;
    FUN_1806277c0(&data_target, param_index);
    texture_ptr = (undefined4 *)(data_source + data_size);
    *texture_ptr = 0x746c6966;
    texture_ptr[1] = 0x64657265;
    texture_ptr[2] = 0x6275635f;
    texture_ptr[3] = 0x70616d65;
    *(undefined1 *)(texture_ptr + 4) = 0;
    
    param_source = &UNK_1809fcc28;
    data_end = data_block;
    data_block[0] = 0;
    param_source = &DAT_18098bc73;
    
    if (data_source != (undefined *)0x0) {
        param_source = data_source;
    }
    
    data_size = param_index;
    data_length = param_index;
    strcpy_s(data_block, 0x80, param_source);
    
    // 初始化渲染参数
    FUN_1800b1230(_DAT_180c86930, render_context, &param_source, &data_width);
    data_height = 1;
    param_source = &UNK_18098bcb0;
    texture_size = 0;
    
    // 处理所有纹理参数
    do {
        texture_count = 0;
        if (param_max != 0) {
            do {
                buffer_size = render_flags;
                render_system_texture_mapper(texture_data, *render_context, texture_count, texture_size);
                texture_count = texture_count + 1;
            } while (texture_count < param_max);
        }
        texture_size = texture_size + 1;
    } while ((int)texture_size < 6);
    
    data_target = &UNK_180a3c3e0;
    
    if (data_source == (undefined *)0x0) {
        data_source = (undefined *)0x0;
        data_depth = 0;
        data_target = &UNK_18098bcb0;
        
        // 清理资源
        FUN_1808fc050(checksum ^ (ulonglong)param_buffer);
    }
    
    // 完成处理
    FUN_18064e900();
}

/**
 * 渲染系统纹理分配器 - 分配和管理纹理资源
 * 
 * @param texture_handle 纹理句柄指针数组
 * @param texture_flags 纹理标志位
 * @return void
 */
void render_system_texture_allocator(undefined8 *texture_handle, undefined4 texture_flags)
{
    uint texture_index;
    undefined8 texture_data;
    longlong *texture_manager;
    uint texture_count;
    float *texture_buffer;
    int buffer_x;
    int buffer_y;
    float buffer_scale;
    double coord_x;
    double coord_y;
    float texture_coord;
    undefined1 stack_buffer[32];
    undefined8 buffer_handle;
    undefined4 buffer_size;
    undefined4 buffer_format;
    undefined8 *buffer_ptr;
    float *float_ptr;
    undefined8 texture_offset;
    undefined2 texture_type;
    undefined1 texture_mode;
    undefined8 texture_info;
    undefined8 texture_params;
    undefined8 texture_config;
    undefined8 texture_state;
    undefined8 texture_resource;
    undefined8 texture_cache;
    undefined8 texture_memory;
    undefined4 texture_width;
    undefined2 texture_height;
    undefined2 texture_depth;
    undefined2 texture_format;
    undefined1 texture_flags;
    ulonglong checksum;
    
    // 初始化缓冲区
    texture_config = 0xfffffffffffffffe;
    checksum = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
    buffer_format = 0;
    float_ptr = (float *)0x0;
    texture_offset = 0;
    texture_type = 0;
    texture_mode = 3;
    texture_flags = 0;
    texture_info = 0;
    texture_params = 0;
    texture_state = 0;
    texture_resource = 0;
    texture_cache = 0;
    texture_memory = 0;
    texture_height = 1;
    texture_depth = 1;
    texture_width = 0x200020;
    texture_cache = 0x21;
    texture_format = 0x102;
    buffer_ptr = texture_handle;
    
    // 分配纹理缓冲区
    FUN_1802a1bc0(&float_ptr);
    texture_coord = 0.0;
    texture_buffer = float_ptr;
    buffer_y = 0;
    
    // 生成纹理坐标
    do {
        buffer_scale = 0.0;
        buffer_x = 0;
        do {
            texture_count = (uint)(texture_coord * 32.0 + buffer_scale);
            *texture_buffer = (float)(int)texture_count * 0.0009765625;
            coord_y = 0.0;
            coord_x = 0.5;
            
            // 计算纹理坐标精度
            for (; texture_count != 0; texture_count = (int)texture_count / 2) {
                texture_index = texture_count & 0x80000001;
                if ((int)texture_index < 0) {
                    texture_index = (texture_index - 1 | 0xfffffffe) + 1;
                }
                coord_y = coord_y + (double)(int)texture_index * coord_x;
                coord_x = coord_x * 0.5;
            }
            
            texture_buffer[1] = (float)coord_y;
            texture_buffer[2] = 0.0;
            texture_buffer[3] = 1.0;
            texture_buffer = texture_buffer + 4;
            buffer_x = buffer_x + 1;
            buffer_scale = (float)buffer_x;
        } while (buffer_scale < 32.0);
        buffer_y = buffer_y + 1;
        texture_coord = (float)buffer_y;
    } while (texture_coord < 32.0);
    
    // 分配纹理内存
    texture_data = FUN_18062b1e0(_DAT_180c8ed18, RENDER_MEMORY_POOL_SIZE, RENDER_MEMORY_BLOCK_SIZE, 
                                  CONCAT71((uint7)(uint3)((uint)buffer_x >> 8), 3));
    texture_manager = (longlong *)FUN_18023a2e0(texture_data, 0);
    *texture_handle = texture_manager;
    
    if (texture_manager != (longlong *)0x0) {
        (**(code **)(*texture_manager + 0x28))(texture_manager);
    }
    
    buffer_format = 1;
    buffer_handle = *texture_handle;
    buffer_size = texture_flags;
    
    // 应用纹理设置
    FUN_1800a5810(_DAT_180c86938, &float_ptr, 1, 0);
    
    if (texture_type._1_1_ == '\0') {
        if (((char)texture_type == '\0') && (float_ptr != (float *)0x0)) {
            // 清理资源
            FUN_18064e900();
        }
        float_ptr = (float *)0x0;
        texture_offset = 0;
        texture_type = 0;
    }
    
    // 完成分配
    FUN_1808fc050(checksum ^ (ulonglong)stack_buffer);
}

/**
 * 渲染系统缓冲区管理器 - 管理渲染缓冲区和资源
 * 
 * @param buffer_manager 缓冲区管理器指针
 * @param resource_manager 资源管理器指针
 * @return void
 */
void render_system_buffer_manager(longlong buffer_manager, longlong resource_manager)
{
    longlong *buffer_ptr;
    longlong buffer_size;
    longlong *resource_ptr;
    int buffer_count;
    longlong *temp_ptr;
    
    temp_ptr = (longlong *)0x0;
    resource_ptr = *(longlong **)(buffer_manager + 0x58);
    buffer_count = (int)(*(longlong *)(buffer_manager + 0x18) - *(longlong *)(buffer_manager + 0x10) >> 3);
    
    if (buffer_count < 1) {
        // 释放缓冲区资源
        if (resource_ptr != (longlong *)0x0) {
            (**(code **)(*resource_ptr + 0x28))(resource_ptr);
        }
        buffer_ptr = *(longlong **)(resource_manager + 0x9970);
        *(longlong **)(resource_manager + 0x9970) = resource_ptr;
        
        if (buffer_ptr != (longlong *)0x0) {
            (**(code **)(*buffer_ptr + 0x38))();
        }
        
        resource_ptr = *(longlong **)(buffer_manager + 0x40);
        if (resource_ptr != (longlong *)0x0) {
            (**(code **)(*resource_ptr + 0x28))(resource_ptr);
        }
        buffer_ptr = *(longlong **)(resource_manager + 0x9720);
        *(longlong **)(resource_manager + 0x9720) = resource_ptr;
        
        if (buffer_ptr != (longlong *)0x0) {
            (**(code **)(*buffer_ptr + 0x38))();
        }
        
        resource_ptr = *(longlong **)(buffer_manager + 0x48);
        if (resource_ptr != (longlong *)0x0) {
            (**(code **)(*resource_ptr + 0x28))(resource_ptr);
        }
        buffer_ptr = *(longlong **)(resource_manager + 0x9728);
        *(longlong **)(resource_manager + 0x9728) = resource_ptr;
        
        if (buffer_ptr != (longlong *)0x0) {
            (**(code **)(*buffer_ptr + 0x38))();
        }
        
        *(undefined4 *)(resource_manager + 0x124c0) = 0;
    }
    else {
        // 处理缓冲区数据
        if (resource_ptr != (longlong *)0x0) {
            (**(code **)(*resource_ptr + 0x28))(resource_ptr);
        }
        buffer_ptr = *(longlong **)(resource_manager + 0x9970);
        *(longlong **)(resource_manager + 0x9970) = resource_ptr;
        
        if (buffer_ptr != (longlong *)0x0) {
            (**(code **)(*buffer_ptr + 0x38))();
        }
        
        resource_ptr = *(longlong **)(buffer_manager + 0x40);
        if (resource_ptr != (longlong *)0x0) {
            (**(code **)(*resource_ptr + 0x28))(resource_ptr);
        }
        buffer_ptr = *(longlong **)(resource_manager + 0x9720);
        *(longlong **)(resource_manager + 0x9720) = resource_ptr;
        
        if (buffer_ptr != (longlong *)0x0) {
            (**(code **)(*buffer_ptr + 0x38))();
        }
        
        resource_ptr = *(longlong **)(buffer_manager + 0x48);
        if (resource_ptr != (longlong *)0x0) {
            (**(code **)(*resource_ptr + 0x28))(resource_ptr);
        }
        buffer_ptr = *(longlong **)(resource_manager + 0x9728);
        *(longlong **)(resource_manager + 0x9728) = resource_ptr;
        
        if (buffer_ptr != (longlong *)0x0) {
            (**(code **)(*buffer_ptr + 0x38))();
        }
        
        *(int *)(resource_manager + 0x124c0) = buffer_count;
    }
    
    // 检查资源状态
    if (*(longlong *)(resource_manager + 0x9970) == 0) {
        resource_ptr = (longlong *)FUN_1800bde30();
        if (resource_ptr != (longlong *)0x0) {
            (**(code **)(*resource_ptr + 0x28))(resource_ptr);
        }
        buffer_ptr = *(longlong **)(resource_manager + 0x9970);
        *(longlong **)(resource_manager + 0x9970) = resource_ptr;
        
        if (buffer_ptr != (longlong *)0x0) {
            (**(code **)(*buffer_ptr + 0x38))();
        }
        
        *(undefined4 *)(resource_manager + 0x124c0) = 0;
    }
    
    // 处理特殊资源
    if ((*(char *)(*(longlong *)(buffer_manager + 0x38) + 0x331d) == '\0') &&
        (*(int *)(buffer_manager + 0x30) != -1)) {
        buffer_size = *(longlong *)(*(longlong *)(buffer_manager + 0x10) + 
                                  (longlong)*(int *)(buffer_manager + 0x30) * 8);
        if (*(longlong *)(buffer_size + 0x40) == 0) {
            temp_ptr = *(longlong **)(buffer_size + 0x128);
        }
        else {
            temp_ptr = *(longlong **)(buffer_size + 0x28);
        }
    }
    
    if (temp_ptr != (longlong *)0x0) {
        (**(code **)(*temp_ptr + 0x28))(temp_ptr);
    }
    
    resource_ptr = *(longlong **)(resource_manager + 0x9988);
    *(longlong **)(resource_manager + 0x9988) = temp_ptr;
    
    if (resource_ptr != (longlong *)0x0) {
        (**(code **)(*resource_ptr + 0x38))();
    }
    
    return;
}