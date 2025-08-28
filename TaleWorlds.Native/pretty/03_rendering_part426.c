#include "TaleWorlds.Native.Split.h"

// 03_rendering_part426.c - 渲染系统高级矩阵变换和数据处理模块
// 包含1个核心函数，涵盖渲染系统高级矩阵变换、数据处理、SIMD优化、内存管理等高级渲染功能

/* 常量定义 */
#define RENDER_MAX_BATCH_SIZE 0x27f      // 最大批处理大小
#define RENDER_MIN_BATCH_SIZE 0x167      // 最小批处理大小
#define RENDER_STRIDE_16BYTES 0x10       // 16字节步长
#define RENDER_STRIDE_12BYTES 0xc        // 12字节步长
#define RENDER_STRIDE_8BYTES 0x8         // 8字节步长
#define RENDER_STRIDE_4BYTES 0x4         // 4字节步长
#define RENDER_VERTEX_SIZE 0x18           // 顶点大小（24字节）
#define RENDER_OFFSET_X 0                 // X坐标偏移
#define RENDER_OFFSET_Y 4                 // Y坐标偏移
#define RENDER_OFFSET_Z 8                 // Z坐标偏移
#define RENDER_OFFSET_U 0xc               // U纹理坐标偏移
#define RENDER_OFFSET_V 0x10              // V纹理坐标偏移

/* 函数别名定义 */
#define rendering_system_advanced_matrix_transform_processor FUN_18049c310

/**
 * 渲染系统高级矩阵变换和数据处理函数
 * 
 * 该函数实现了一个复杂的渲染管线，包含以下主要功能：
 * 1. 顶点数据的批量处理和变换
 * 2. SIMD优化的矩阵运算
 * 3. 边界检测和裁剪
 * 4. 批处理优化和内存管理
 * 5. 条件渲染和混合操作
 * 
 * @param param_1 渲染系统上下文指针
 * @param in_stack_00000030 批处理大小
 * @param in_stack_00000040 输出缓冲区指针
 * @param in_stack_00000048 渲染模式标志
 * @param in_stack_00000050 数据偏移量
 */
void rendering_system_advanced_matrix_transform_processor(longlong param_1)
{
  /* 变量声明 */
  float *source_vertex_ptr1;           // 源顶点指针1
  float *source_vertex_ptr2;           // 源顶点指针2
  float *source_vertex_ptr3;           // 源顶点指针3
  longlong vertex_buffer_base;          // 顶点缓冲区基地址
  undefined4 tex_coord_x;              // 纹理坐标X
  undefined4 tex_coord_y;              // 纹理坐标Y
  float vertex_x;                       // 顶点X坐标
  undefined1 vertex_data_16b[16];     // 16字节顶点数据块
  ulonglong stack_cookie;               // 栈cookie用于安全检查
  longlong index_buffer_ptr;           // 索引缓冲区指针
  longlong vertex_buffer_offset;        // 顶点缓冲区偏移
  ulonglong vertex_index;               // 顶点索引
  int *output_buffer_ptr;              // 输出缓冲区指针
  uint batch_mask;                      // 批处理掩码
  longlong loop_counter;                // 循环计数器
  longlong temp_offset;                 // 临时偏移量
  float temp_float1;                    // 临时浮点数1
  float temp_float2;                    // 临时浮点数2
  float temp_float3;                    // 临时浮点数3
  float temp_float4;                    // 临时浮点数4
  float temp_float5;                    // 临时浮点数5
  float temp_float6;                    // 临时浮点数6
  float temp_float7;                    // 临时浮点数7
  float temp_float8;                    // 临时浮点数8
  float temp_float9;                    // 临时浮点数9
  float temp_float10;                   // 临时浮点数10
  float temp_float11;                   // 临时浮点数11
  float temp_float12;                   // 临时浮点数12
  float temp_float13;                   // 临时浮点数13
  float temp_float14;                   // 临时浮点数14
  float temp_float15;                   // 临时浮点数15
  float temp_float16;                   // 临时浮点数16
  undefined1 temp_data_16b_1[16];      // 16字节数据块1
  undefined1 temp_data_16b_2[16];      // 16字节数据块2
  undefined1 temp_data_16b_3[16];      // 16字节数据块3
  undefined1 temp_data_16b_4[16];      // 16字节数据块4
  undefined1 temp_data_16b_5[16];      // 16字节数据块5
  undefined1 temp_data_16b_6[16];      // 16字节数据块6
  uint temp_uint1;                      // 临时无符号整数1
  float temp_float17;                   // 临时浮点数17
  float temp_float18;                   // 临时浮点数18
  float temp_float19;                   // 临时浮点数19
  float temp_float20;                   // 临时浮点数20
  undefined1 temp_data_16b_7[16];      // 16字节数据块7
  undefined1 temp_data_16b_8[16];      // 16字节数据块8
  undefined1 temp_data_16b_9[16];      // 16字节数据块9
  float temp_float21;                   // 临时浮点数21
  float temp_float22;                   // 临时浮点数22
  float temp_float23;                   // 临时浮点数23
  float temp_float24;                   // 临时浮点数24
  undefined1 temp_data_16b_10[16];     // 16字节数据块10
  undefined1 temp_data_16b_11[16];     // 16字节数据块11
  undefined1 temp_data_16b_12[16];     // 16字节数据块12
  undefined1 temp_data_16b_13[16];     // 16字节数据块13
  undefined1 temp_data_16b_14[16];     // 16字节数据块14
  undefined1 temp_data_16b_15[16];     // 16字节数据块15
  float temp_float25;                   // 临时浮点数25
  int temp_int1;                       // 临时整数1
  uint temp_uint2;                      // 临时无符号整数2
  float temp_float26;                   // 临时浮点数26
  int temp_int2;                       // 临时整数2
  uint temp_uint3;                      // 临时无符号整数3
  float temp_float27;                   // 临时浮点数27
  int temp_int3;                       // 临时整数3
  uint temp_uint4;                      // 临时无符号整数4
  float temp_float28;                   // 临时浮点数28
  int temp_int4;                       // 临时整数4
  uint temp_uint5;                      // 临时无符号整数5
  undefined1 temp_data_16b_16[16];     // 16字节数据块16
  undefined1 temp_data_16b_17[16];     // 16字节数据块17
  int temp_int5;                       // 临时整数5
  uint temp_uint6;                      // 临时无符号整数6
  int temp_int6;                       // 临时整数6
  uint temp_uint7;                      // 临时无符号整数7
  int temp_int7;                       // 临时整数7
  uint temp_uint8;                      // 临时无符号整数8
  float temp_float29;                   // 临时浮点数29
  int temp_int8;                       // 临时整数8
  uint temp_uint9;                      // 临时无符号整数9
  undefined1 temp_data_16b_18[16];     // 16字节数据块18
  undefined1 temp_data_16b_19[16];     // 16字节数据块19
  float temp_float30;                   // 临时浮点数30
  int temp_int9;                       // 临时整数9
  float temp_float31;                   // 临时浮点数31
  int temp_int10;                      // 临时整数10
  float temp_float32;                   // 临时浮点数32
  float temp_float33;                   // 临时浮点数33
  float temp_float34;                   // 临时浮点数34
  float temp_float35;                   // 临时浮点数35
  float temp_float36;                   // 临时浮点数36
  float temp_float37;                   // 临时浮点数37
  float temp_float38;                   // 临时浮点数38
  float temp_float39;                   // 临时浮点数39
  undefined1 temp_data_16b_20[16];     // 16字节数据块20
  undefined1 temp_data_16b_21[16];     // 16字节数据块21
  float temp_float40;                   // 临时浮点数40
  float temp_float41;                   // 临时浮点数41
  float temp_float42;                   // 临时浮点数42
  float temp_float43;                   // 临时浮点数43
  undefined1 temp_data_16b_22[16];     // 16字节数据块22
  int temp_int11;                      // 临时整数11
  int temp_int12;                      // 临时整数12
  undefined1 temp_data_16b_23[16];     // 16字节数据块23
  undefined1 temp_data_16b_24[16];     // 16字节数据块24
  undefined1 temp_data_16b_25[16];     // 16字节数据块25
  
  /* 栈变量 */
  uint batch_size;                      // 批处理大小
  uint vertex_count;                    // 顶点计数
  uint index_count;                     // 索引计数
  undefined4 padding_1fc;               // 填充变量
  uint max_vertices;                     // 最大顶点数
  uint max_indices;                     // 最大索引数
  undefined8 padding_1e8;               // 填充变量
  float transform_w;                     // 变换W分量
  float transform_z;                     // 变换Z分量
  undefined8 padding_1d8;               // 填充变量
  float transform_u;                     // 变换U分量
  float transform_v;                     // 变换V分量
  undefined8 padding_1c8;               // 填充变量
  float transform_x;                     // 变换X分量
  float transform_y;                     // 变换Y分量
  longlong output_buffer_base;          // 输出缓冲区基地址
  undefined8 padding_1a8;               // 填充变量
  float tex_coord_w1;                   // 纹理坐标W1
  float tex_coord_z1;                   // 纹理坐标Z1
  undefined1 vertex_tex_data_16b[16];   // 顶点纹理数据16字节
  longlong transform_matrix_ptr;        // 变换矩阵指针
  int vertex_indices_4[4];              // 顶点索引数组4
  uint vertex_indices_uint_4[4];        // 顶点索引数组4（无符号）
  int vertex_indices_8[4];              // 顶点索引数组8
  uint vertex_indices_uint_8[4];        // 顶点索引数组8（无符号）
  undefined1 vertex_transform_data_16b[16]; // 顶点变换数据16字节
  undefined1 vertex_normal_data_16b[16];    // 顶点法线数据16字节
  undefined1 vertex_color_data_16b[16];     // 顶点颜色数据16字节
  float vertex_tex_coords_4[4];         // 顶点纹理坐标数组4
  float vertex_tex_coords_8[4];         // 顶点纹理坐标数组8
  float vertex_tex_coords_12[4];        // 顶点纹理坐标数组12
  ulonglong security_cookie;            // 安全cookie
  float temp_float_array_4[4];          // 临时浮点数组4
  float temp_float_array_8[4];          // 临时浮点数组8
  float temp_float_array_12[4];         // 临时浮点数组12
  
  /* 安全检查初始化 */
  stack_cookie = _DAT_180bf00a8 ^ (ulonglong)&batch_size;
  
  /* 初始化批处理参数 */
  max_vertices = 4;
  batch_mask = 0xf;
  vertex_count = in_stack_00000030 + 1;
  output_buffer_base = in_stack_00000040;
  max_indices = 0xf;
  temp_uint1 = 0;
  
  /* 主处理循环 */
  do {
    batch_size = temp_uint1 + 4;
    if (in_stack_00000030 < batch_size) {
      batch_mask = (1 << ((byte)vertex_count & 0x1f)) - 1;
      max_indices = batch_mask;
    }
    
    /* 获取顶点缓冲区指针 */
    vertex_buffer_base = *(longlong *)(param_1 + 0x28 + (ulonglong)in_stack_00000050 * 8);
    temp_uint2 = vertex_count;
    if (batch_size <= in_stack_00000030) {
      temp_uint2 = max_vertices;
    }
    max_vertices = temp_uint2;
    
    /* 获取索引缓冲区指针 */
    index_buffer_ptr = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48);
    vertex_index = (ulonglong)*(uint *)(index_buffer_ptr + (ulonglong)(temp_uint1 * 3) * 4);
    index_buffer_ptr = index_buffer_ptr + (ulonglong)(temp_uint1 * 3) * 4;
    
    /* 条件渲染路径选择 */
    if (in_stack_00000048 == '\0') {
      /* 路径1：标准渲染模式 */
      temp_offset = 0;
      if (1 < max_vertices) {
        temp_offset = 0xc;
      }
      temp_offset = 0;
      if (2 < max_vertices) {
        temp_offset = 0x18;
      }
      temp_offset = 0;
      if (3 < max_vertices) {
        temp_offset = 0x24;
      }
      
      /* 加载顶点数据 */
      source_vertex_ptr1 = (float *)(vertex_buffer_base + vertex_index * RENDER_STRIDE_16BYTES);
      temp_float30 = *source_vertex_ptr1;
      vertex_x = source_vertex_ptr1[1];
      vertex_tex_coords_4[0] = source_vertex_ptr1[2];
      
      source_vertex_ptr2 = (float *)(vertex_buffer_base + (ulonglong)*(uint *)(temp_offset + index_buffer_ptr) * RENDER_STRIDE_16BYTES);
      temp_float31 = *source_vertex_ptr2;
      temp_float29 = source_vertex_ptr2[1];
      vertex_tex_coords_4[1] = source_vertex_ptr2[2];
      
      source_vertex_ptr3 = (float *)(vertex_buffer_base + (ulonglong)*(uint *)(temp_offset + index_buffer_ptr) * RENDER_STRIDE_16BYTES);
      temp_float32 = *source_vertex_ptr3;
      temp_float_array_8[0] = source_vertex_ptr3[1];
      tex_coord_w1 = source_vertex_ptr3[2];
      transform_w = source_vertex_ptr3[3];
      
      source_vertex_ptr3 = (float *)(vertex_buffer_base + (ulonglong)*(uint *)(temp_offset + index_buffer_ptr) * RENDER_STRIDE_16BYTES);
      temp_float33 = *source_vertex_ptr3;
      temp_float12 = source_vertex_ptr3[1];
      loop_counter = vertex_buffer_base + (ulonglong)*(uint *)(temp_offset + index_buffer_ptr) * RENDER_STRIDE_16BYTES;
      transform_z = *(float *)(loop_counter + 4);
      tex_coord_z1 = *(float *)(loop_counter + 8);
      
      /* 处理纹理坐标 */
      tex_coord_x = CONCAT44(source_vertex_ptr2[3], source_vertex_ptr1[3]);
      
      /* 继续加载顶点数据 */
      source_vertex_ptr1 = (float *)(vertex_buffer_base + (ulonglong)*(uint *)(index_buffer_ptr + 4) * RENDER_STRIDE_16BYTES);
      temp_float40 = *source_vertex_ptr1;
      temp_float34 = source_vertex_ptr1[1];
      temp_float17 = source_vertex_ptr1[2];
      
      /* 合并纹理坐标 */
      temp_uint2 = CONCAT44(vertex_tex_coords_4[1], vertex_tex_coords_4[0]);
      
      source_vertex_ptr2 = (float *)(vertex_buffer_base + (ulonglong)*(uint *)(temp_offset + 4 + index_buffer_ptr) * RENDER_STRIDE_16BYTES);
      temp_float41 = *source_vertex_ptr2;
      temp_float35 = source_vertex_ptr2[1];
      temp_float18 = source_vertex_ptr2[2];
      
      source_vertex_ptr3 = (float *)(vertex_buffer_base + (ulonglong)*(uint *)(temp_offset + 4 + index_buffer_ptr) * RENDER_STRIDE_16BYTES);
      temp_float42 = *source_vertex_ptr3;
      temp_float36 = source_vertex_ptr3[1];
      temp_float19 = source_vertex_ptr3[2];
      transform_u = source_vertex_ptr3[3];
      
      vertex_index = (ulonglong)*(uint *)(temp_offset + 4 + index_buffer_ptr);
      source_vertex_ptr3 = (float *)(vertex_buffer_base + vertex_index * RENDER_STRIDE_16BYTES);
      temp_float43 = *source_vertex_ptr3;
      temp_float37 = source_vertex_ptr3[1];
      loop_counter = vertex_buffer_base + vertex_index * RENDER_STRIDE_16BYTES;
      transform_v = *(float *)(loop_counter + 4);
      temp_float21 = *(float *)(loop_counter + 8);
      
      /* 处理顶点属性 */
      tex_coord_y = CONCAT44(source_vertex_ptr2[3], source_vertex_ptr1[3]);
      
      /* 继续处理顶点数据 */
      source_vertex_ptr1 = (float *)(vertex_buffer_base + (ulonglong)*(uint *)(index_buffer_ptr + 8) * RENDER_STRIDE_16BYTES);
      temp_float25 = *source_vertex_ptr1;
      temp_float26 = source_vertex_ptr1[1];
      temp_float27 = source_vertex_ptr1[2];
      temp_float28 = source_vertex_ptr1[3];
      
      source_vertex_ptr1 = (float *)(vertex_buffer_base + (ulonglong)*(uint *)(temp_offset + 8 + index_buffer_ptr) * RENDER_STRIDE_16BYTES);
      temp_float1 = *source_vertex_ptr1;
      temp_float2 = source_vertex_ptr1[1];
      temp_float3 = source_vertex_ptr1[2];
      temp_float_array_12[0] = source_vertex_ptr1[3];
      
      source_vertex_ptr1 = (float *)(vertex_buffer_base + (ulonglong)*(uint *)(temp_offset + 8 + index_buffer_ptr) * RENDER_STRIDE_16BYTES);
      temp_float4 = *source_vertex_ptr1;
      temp_float5 = source_vertex_ptr1[1];
      temp_float6 = source_vertex_ptr1[2];
      transform_x = source_vertex_ptr1[3];
      
      temp_uint1 = *(uint *)(temp_offset + 8 + index_buffer_ptr);
    }
    else {
      /* 路径2：优化渲染模式 */
      temp_offset = 0;
      if (1 < max_vertices) {
        temp_offset = 0xc;
      }
      temp_offset = 0;
      if (2 < max_vertices) {
        temp_offset = 0x18;
      }
      temp_offset = 0;
      if (3 < max_vertices) {
        temp_offset = 0x24;
      }
      
      /* 加载顶点数据（优化路径） */
      source_vertex_ptr1 = (float *)(vertex_buffer_base + vertex_index * RENDER_STRIDE_16BYTES);
      temp_float30 = *source_vertex_ptr1;
      vertex_x = source_vertex_ptr1[1];
      vertex_tex_coords_4[0] = source_vertex_ptr1[2];
      
      source_vertex_ptr2 = (float *)(vertex_buffer_base + (ulonglong)*(uint *)(temp_offset + index_buffer_ptr) * RENDER_STRIDE_16BYTES);
      temp_float31 = *source_vertex_ptr2;
      temp_float29 = source_vertex_ptr2[1];
      vertex_tex_coords_4[1] = source_vertex_ptr2[2];
      
      source_vertex_ptr3 = (float *)(vertex_buffer_base + (ulonglong)*(uint *)(temp_offset + index_buffer_ptr) * RENDER_STRIDE_16BYTES);
      temp_float32 = *source_vertex_ptr3;
      temp_float_array_8[0] = source_vertex_ptr3[1];
      tex_coord_w1 = source_vertex_ptr3[2];
      transform_w = source_vertex_ptr3[3];
      
      source_vertex_ptr3 = (float *)(vertex_buffer_base + (ulonglong)*(uint *)(temp_offset + index_buffer_ptr) * RENDER_STRIDE_16BYTES);
      temp_float33 = *source_vertex_ptr3;
      temp_float12 = source_vertex_ptr3[1];
      loop_counter = vertex_buffer_base + (ulonglong)*(uint *)(temp_offset + index_buffer_ptr) * RENDER_STRIDE_16BYTES;
      transform_z = *(float *)(loop_counter + 4);
      tex_coord_z1 = *(float *)(loop_counter + 8);
      
      /* 处理纹理坐标 */
      tex_coord_x = CONCAT44(source_vertex_ptr2[3], source_vertex_ptr1[3]);
      
      /* 继续处理顶点数据（优化路径） */
      source_vertex_ptr1 = (float *)(vertex_buffer_base + (ulonglong)*(uint *)(index_buffer_ptr + 8) * RENDER_STRIDE_16BYTES);
      temp_float40 = *source_vertex_ptr1;
      temp_float34 = source_vertex_ptr1[1];
      temp_float17 = source_vertex_ptr1[2];
      
      /* 合并纹理坐标 */
      temp_uint2 = CONCAT44(vertex_tex_coords_4[1], vertex_tex_coords_4[0]);
      
      source_vertex_ptr2 = (float *)(vertex_buffer_base + (ulonglong)*(uint *)(temp_offset + 8 + index_buffer_ptr) * RENDER_STRIDE_16BYTES);
      temp_float41 = *source_vertex_ptr2;
      temp_float35 = source_vertex_ptr2[1];
      temp_float18 = source_vertex_ptr2[2];
      
      source_vertex_ptr3 = (float *)(vertex_buffer_base + (ulonglong)*(uint *)(temp_offset + 8 + index_buffer_ptr) * RENDER_STRIDE_16BYTES);
      temp_float42 = *source_vertex_ptr3;
      temp_float36 = source_vertex_ptr3[1];
      temp_float19 = source_vertex_ptr3[2];
      transform_u = source_vertex_ptr3[3];
      
      vertex_index = (ulonglong)*(uint *)(temp_offset + 8 + index_buffer_ptr);
      source_vertex_ptr3 = (float *)(vertex_buffer_base + vertex_index * RENDER_STRIDE_16BYTES);
      temp_float43 = *source_vertex_ptr3;
      temp_float37 = source_vertex_ptr3[1];
      loop_counter = vertex_buffer_base + vertex_index * RENDER_STRIDE_16BYTES;
      transform_v = *(float *)(loop_counter + 4);
      temp_float21 = *(float *)(loop_counter + 8);
      
      /* 处理顶点属性 */
      tex_coord_y = CONCAT44(source_vertex_ptr2[3], source_vertex_ptr1[3]);
      
      /* 继续处理顶点数据 */
      source_vertex_ptr1 = (float *)(vertex_buffer_base + (ulonglong)*(uint *)(index_buffer_ptr + 4) * RENDER_STRIDE_16BYTES);
      temp_float1 = *source_vertex_ptr1;
      temp_float2 = source_vertex_ptr1[1];
      temp_float3 = source_vertex_ptr1[2];
      temp_float_array_12[0] = source_vertex_ptr1[3];
      
      source_vertex_ptr1 = (float *)(vertex_buffer_base + (ulonglong)*(uint *)(temp_offset + 4 + index_buffer_ptr) * RENDER_STRIDE_16BYTES);
      temp_float4 = *source_vertex_ptr1;
      temp_float5 = source_vertex_ptr1[1];
      temp_float6 = source_vertex_ptr1[2];
      transform_x = source_vertex_ptr1[3];
      
      source_vertex_ptr1 = (float *)(vertex_buffer_base + (ulonglong)*(uint *)(temp_offset + 4 + index_buffer_ptr) * RENDER_STRIDE_16BYTES);
      temp_float7 = *source_vertex_ptr1;
      temp_float8 = source_vertex_ptr1[1];
      temp_float9 = source_vertex_ptr1[2];
      transform_y = source_vertex_ptr1[3];
      
      temp_uint1 = *(uint *)(temp_offset + 4 + index_buffer_ptr);
    }
    
    /* 完成顶点数据组装 */
    vertex_tex_coords_4[2] = tex_coord_w1;
    vertex_tex_coords_4[3] = tex_coord_z1;
    
    /* 转换为整数进行SIMD操作 */
    temp_int5 = (int)vertex_x;
    temp_int6 = (int)temp_float29;
    temp_int7 = (int)temp_float_array_8[0];
    temp_int8 = (int)temp_float12;
    
    /* 处理最后一个顶点 */
    source_vertex_ptr1 = (float *)(vertex_buffer_base + (ulonglong)temp_uint1 * RENDER_STRIDE_16BYTES);
    vertex_buffer_base = vertex_buffer_base + (ulonglong)temp_uint1 * RENDER_STRIDE_16BYTES;
    transform_y = *(float *)(vertex_buffer_base + 4);
    tex_coord_y = *(undefined4 *)(vertex_buffer_base + 8);
    
    /* 组装顶点属性数据 */
    vertex_tex_data_16b._0_8_ = CONCAT44(temp_float3, temp_float27);
    vertex_tex_data_16b._8_4_ = temp_float6;
    vertex_tex_data_16b._12_4_ = tex_coord_y;
    
    /* 处理法线数据 */
    temp_data_16b_24._0_4_ = (int)temp_float26;
    temp_data_16b_24._4_4_ = (int)temp_float2;
    temp_data_16b_24._8_4_ = (int)temp_float5;
    temp_data_16b_24._12_4_ = (int)source_vertex_ptr1[1];
    
    temp_int11 = (int)temp_float25;
    temp_int12 = (int)temp_float1;
    temp_data_16b_25._0_8_ = CONCAT44(temp_int12, temp_int11);
    temp_data_16b_25._8_4_ = (int)temp_float4;
    temp_data_16b_25._12_4_ = (int)*source_vertex_ptr1;
    
    /* 处理顶点颜色数据 */
    temp_data_16b_26._0_4_ = (int)temp_float34;
    temp_data_16b_26._4_4_ = (int)temp_float35;
    temp_data_16b_26._8_4_ = (int)temp_float36;
    temp_data_16b_26._12_4_ = (int)temp_float37;
    
    /* 设置变换矩阵指针 */
    output_buffer_ptr = (int *)CONCAT44(temp_float_array_12[0], temp_float28);
    
    /* 处理顶点变换数据 */
    temp_data_16b_27._8_4_ = temp_float6;
    temp_data_16b_27._0_8_ = vertex_tex_data_16b._0_8_;
    temp_data_16b_27._12_4_ = tex_coord_y;
    
    temp_int9 = (int)temp_float30;
    temp_int10 = (int)temp_float31;
    
    /* 处理顶点位置数据 */
    temp_data_16b_16._4_4_ = temp_int10;
    temp_data_16b_16._0_4_ = temp_int9;
    temp_int2 = (int)temp_float32;
    temp_int3 = (int)temp_float33;
    temp_int4 = (int)temp_float40;
    temp_int9 = (int)temp_float41;
    
    temp_data_16b_23._0_8_ = CONCAT44(temp_int9, temp_int4);
    temp_data_16b_23._8_4_ = (int)temp_float42;
    temp_data_16b_23._12_4_ = (int)temp_float43;
    
    temp_data_16b_16._8_4_ = temp_int10;
    temp_data_16b_16._12_4_ = temp_int6;
    
    /* 组装顶点数据包 */
    temp_data_16b_15._8_8_ = temp_data_16b_16._8_8_;
    temp_data_16b_15._4_4_ = temp_int5;
    temp_data_16b_15._0_4_ = temp_int9;
    
    temp_data_16b_17._4_4_ = temp_int7;
    temp_data_16b_17._0_4_ = temp_int2;
    temp_data_16b_17._8_4_ = temp_int3;
    temp_data_16b_17._12_4_ = temp_int8;
    
    /* SIMD数据打包 */
    vertex_transform_data_16b = packssdw(temp_data_16b_15, temp_data_16b_17);
    
    /* 处理颜色数据 */
    temp_data_16b_11._4_4_ = temp_data_16b_26._8_4_;
    temp_data_16b_11._0_4_ = temp_data_16b_23._8_4_;
    temp_data_16b_11._8_4_ = temp_data_16b_23._12_4_;
    temp_data_16b_11._12_4_ = temp_data_16b_26._12_4_;
    
    /* 计算顶点差值 */
    temp_data_16b_10._0_4_ = temp_int4 - temp_int9;
    temp_data_16b_10._4_4_ = temp_int9 - temp_int10;
    temp_data_16b_10._8_4_ = temp_data_16b_23._8_4_ - temp_int2;
    temp_data_16b_10._12_4_ = temp_data_16b_23._12_4_ - temp_int3;
    
    /* 处理纹理坐标差值 */
    temp_data_16b_20._8_4_ = temp_int9;
    temp_data_16b_20._0_8_ = temp_data_16b_23._0_8_;
    temp_data_16b_20._12_4_ = temp_data_16b_26._4_4_;
    
    temp_data_16b_22._8_8_ = temp_data_16b_20._8_8_;
    temp_data_16b_22._4_4_ = temp_data_16b_26._0_4_;
    temp_data_16b_22._0_4_ = temp_int4;
    
    /* SIMD纹理坐标打包 */
    vertex_normal_data_16b = packssdw(temp_data_16b_22, temp_data_16b_11);
    
    /* 处理法线数据 */
    temp_data_16b_19._8_4_ = temp_int12;
    temp_data_16b_19._0_8_ = temp_data_16b_25._0_8_;
    temp_data_16b_19._12_4_ = temp_data_16b_24._4_4_;
    
    temp_data_16b_18._8_8_ = temp_data_16b_19._8_8_;
    temp_data_16b_18._4_4_ = temp_data_16b_24._0_4_;
    temp_data_16b_18._0_4_ = temp_int11;
    
    /* 处理法线属性 */
    temp_data_16b_7._4_4_ = temp_data_16b_24._8_4_;
    temp_data_16b_7._0_4_ = temp_data_16b_25._8_4_;
    temp_data_16b_7._8_4_ = temp_data_16b_25._12_4_;
    temp_data_16b_7._12_4_ = temp_data_16b_24._12_4_;
    
    /* 计算法线差值 */
    temp_data_16b_6._0_4_ = temp_int5 - temp_data_16b_26._0_4_;
    temp_data_16b_6._4_4_ = temp_int6 - temp_data_16b_26._4_4_;
    temp_data_16b_6._8_4_ = temp_int7 - temp_data_16b_26._8_4_;
    temp_data_16b_6._12_4_ = temp_int8 - temp_data_16b_26._12_4_;
    
    /* 顶点颜色数据打包 */
    vertex_color_data_16b = packssdw(temp_data_16b_18, temp_data_16b_7);
    
    /* 计算颜色差值 */
    temp_data_16b_14._0_4_ = temp_data_16b_24._0_4_ - temp_int5;
    temp_data_16b_14._4_4_ = temp_data_16b_24._4_4_ - temp_int6;
    temp_data_16b_14._8_4_ = temp_data_16b_24._8_4_ - temp_int7;
    temp_data_16b_14._12_4_ = temp_data_16b_24._12_4_ - temp_int8;
    
    /* SIMD乘法运算 */
    temp_data_16b_11 = pmulld(temp_data_16b_10, temp_data_16b_14);
    
    /* 计算位置差值 */
    temp_data_16b_1._0_4_ = temp_int9 - temp_int11;
    temp_data_16b_1._4_4_ = temp_int10 - temp_int12;
    temp_data_16b_1._8_4_ = temp_int2 - temp_data_16b_25._8_4_;
    temp_data_16b_1._12_4_ = temp_int3 - temp_data_16b_25._12_4_;
    
    /* SIMD乘法运算 */
    temp_data_16b_17 = pmulld(temp_data_16b_1, temp_data_16b_6);
    
    /* 计算叉积 */
    temp_int4 = temp_data_16b_11._0_4_ - temp_data_16b_17._0_4_;
    temp_int9 = temp_data_16b_11._4_4_ - temp_data_16b_17._4_4_;
    temp_int2 = temp_data_16b_11._8_4_ - temp_data_16b_17._8_4_;
    temp_int3 = temp_data_16b_11._12_4_ - temp_data_16b_17._12_4_;
    
    /* 计算掩码 */
    temp_data_16b_18._0_4_ = -(uint)(0 < temp_int4);
    temp_data_16b_18._4_4_ = -(uint)(0 < temp_int9);
    temp_data_16b_18._8_4_ = -(uint)(0 < temp_int2);
    temp_data_16b_18._12_4_ = -(uint)(0 < temp_int3);
    
    /* 设置顶点数据指针 */
    temp_data_16b_17 = temp_data_16b_25;
    temp_data_16b_11 = temp_data_16b_24;
    
    /* 条件渲染分支 */
    if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
      /* 高级渲染模式 */
      temp_data_16b_17 = pblendvb(temp_data_16b_23, temp_data_16b_25, temp_data_16b_18);
      temp_data_16b_23 = pblendvb(temp_data_16b_25, temp_data_16b_23, temp_data_16b_18);
      
      temp_data_16b_21._4_4_ = temp_float18;
      temp_data_16b_21._0_4_ = temp_float17;
      temp_data_16b_21._8_4_ = temp_float19;
      temp_data_16b_21._12_4_ = temp_float21;
      
      temp_data_16b_11 = pblendvb(temp_data_16b_26, temp_data_16b_24, temp_data_16b_18);
      temp_data_16b_26 = pblendvb(temp_data_16b_24, temp_data_16b_26, temp_data_16b_18);
      
      temp_data_16b_7 = pblendvb(vertex_normal_data_16b, vertex_color_data_16b, temp_data_16b_18);
      vertex_normal_data_16b = pblendvb(vertex_color_data_16b, vertex_normal_data_16b, temp_data_16b_18);
      
      temp_data_16b_2._0_4_ = (float)temp_data_16b_18._0_4_;
      temp_data_16b_2._4_4_ = (float)temp_data_16b_18._4_4_;
      temp_data_16b_2._8_4_ = (float)temp_data_16b_18._8_4_;
      temp_data_16b_2._12_4_ = (float)temp_data_16b_18._12_4_;
      
      vertex_color_data_16b = temp_data_16b_7;
      
      /* 计算变换参数 */
      temp_data_16b_3._0_4_ = temp_data_16b_23._0_4_ - temp_int9;
      temp_data_16b_3._4_4_ = temp_data_16b_23._4_4_ - temp_int10;
      temp_data_16b_3._8_4_ = temp_data_16b_23._8_4_ - temp_int2;
      temp_data_16b_3._12_4_ = temp_data_16b_23._12_4_ - temp_int3;
      
      temp_data_16b_27 = blendvps(temp_data_16b_21, vertex_tex_data_16b, temp_data_16b_2);
      
      temp_data_16b_9._4_4_ = temp_float18;
      temp_data_16b_9._0_4_ = temp_float17;
      temp_data_16b_9._8_4_ = temp_float19;
      temp_data_16b_9._12_4_ = temp_float21;
      
      temp_data_16b_7 = blendvps(vertex_tex_data_16b, temp_data_16b_9, temp_data_16b_2);
      temp_float17 = temp_data_16b_7._0_4_;
      temp_float18 = temp_data_16b_7._4_4_;
      temp_float19 = temp_data_16b_7._8_4_;
      temp_float21 = temp_data_16b_7._12_4_;
      
      /* 计算法线变换 */
      temp_data_16b_4._0_4_ = temp_data_16b_11._0_4_ - temp_int5;
      temp_data_16b_4._4_4_ = temp_data_16b_11._4_4_ - temp_int6;
      temp_data_16b_4._8_4_ = temp_data_16b_11._8_4_ - temp_int7;
      temp_data_16b_4._12_4_ = temp_data_16b_11._12_4_ - temp_int8;
      
      temp_data_16b_6._0_4_ = temp_int5 - temp_data_16b_26._0_4_;
      temp_data_16b_6._4_4_ = temp_int6 - temp_data_16b_26._4_4_;
      temp_data_16b_6._8_4_ = temp_int7 - temp_data_16b_26._8_4_;
      temp_data_16b_6._12_4_ = temp_int8 - temp_data_16b_26._12_4_;
      
      /* SIMD乘法运算 */
      temp_data_16b_14 = pmulld(temp_data_16b_3, temp_data_16b_4);
      
      temp_data_16b_5._0_4_ = temp_int9 - temp_data_16b_17._0_4_;
      temp_data_16b_5._4_4_ = temp_int10 - temp_data_16b_17._4_4_;
      temp_data_16b_5._8_4_ = temp_int2 - temp_data_16b_17._8_4_;
      temp_data_16b_5._12_4_ = temp_int3 - temp_data_16b_17._12_4_;
      
      temp_data_16b_7 = pmulld(temp_data_16b_5, temp_data_16b_6);
      
      /* 计算最终变换参数 */
      temp_int4 = temp_data_16b_14._0_4_ - temp_data_16b_7._0_4_;
      temp_int9 = temp_data_16b_14._4_4_ - temp_data_16b_7._4_4_;
      temp_int2 = temp_data_16b_14._8_4_ - temp_data_16b_7._8_4_;
      temp_int3 = temp_data_16b_14._12_4_ - temp_data_16b_7._12_4_;
      
      temp_data_16b_18._0_4_ = -(uint)(0 < temp_int4);
      temp_data_16b_18._4_4_ = -(uint)(0 < temp_int9);
      temp_data_16b_18._8_4_ = -(uint)(0 < temp_int2);
      temp_data_16b_18._12_4_ = -(uint)(0 < temp_int3);
    }
    
    /* 转换为浮点数进行计算 */
    temp_data_16b_6._0_4_ = (float)temp_int4;
    temp_data_16b_6._4_4_ = (float)temp_int9;
    temp_data_16b_6._8_4_ = (float)temp_int2;
    temp_data_16b_6._12_4_ = (float)temp_int3;
    
    /* SIMD倒数计算 */
    temp_data_16b_7 = rcpps(temp_data_16b_6, temp_data_16b_6);
    
    /* 计算顶点边界 */
    temp_int4 = temp_data_16b_26._0_4_;
    temp_uint6 = (uint)(temp_int5 < temp_int4) * temp_int4 | (uint)(temp_int5 >= temp_int4) * temp_int5;
    temp_int9 = temp_data_16b_26._4_4_;
    temp_uint7 = (uint)(temp_int6 < temp_int9) * temp_int9 | (uint)(temp_int6 >= temp_int9) * temp_int6;
    temp_int2 = temp_data_16b_26._8_4_;
    temp_uint8 = (uint)(temp_int7 < temp_int2) * temp_int2 | (uint)(temp_int7 >= temp_int2) * temp_int7;
    temp_int3 = temp_data_16b_26._12_4_;
    temp_uint9 = (uint)(temp_int8 < temp_int3) * temp_int3 | (uint)(temp_int8 >= temp_int3) * temp_int8;
    
    /* 计算纹理边界 */
    temp_uint1 = (uint)(temp_int4 < temp_int5) * temp_int4 | (uint)(temp_int4 >= temp_int5) * temp_int5;
    temp_uint2 = (uint)(temp_int9 < temp_int6) * temp_int9 | (uint)(temp_int9 >= temp_int6) * temp_int6;
    temp_uint3 = (uint)(temp_int2 < temp_int7) * temp_int2 | (uint)(temp_int2 >= temp_int7) * temp_int7;
    temp_uint5 = (uint)(temp_int3 < temp_int8) * temp_int3 | (uint)(temp_int3 >= temp_int8) * temp_int8;
    
    /* 计算最终边界 */
    temp_int4 = temp_data_16b_11._0_4_;
    temp_uint1 = (uint)(temp_int4 < (int)temp_uint1) * temp_int4 | (temp_int4 >= (int)temp_uint1) * temp_uint1;
    temp_int9 = temp_data_16b_11._4_4_;
    temp_uint2 = (uint)(temp_int9 < (int)temp_uint2) * temp_int9 | (temp_int9 >= (int)temp_uint2) * temp_uint2;
    temp_int2 = temp_data_16b_11._8_4_;
    temp_uint3 = (uint)(temp_int2 < (int)temp_uint3) * temp_int2 | (temp_int2 >= (int)temp_uint3) * temp_uint3;
    temp_int3 = temp_data_16b_11._12_4_;
    temp_uint5 = (uint)(temp_int3 < (int)temp_uint5) * temp_int3 | (temp_int3 >= (int)temp_uint5) * temp_uint5;
    
    /* 处理顶点索引 */
    vertex_indices_8[0] = (-1 < (int)temp_uint1) * temp_uint1;
    vertex_indices_8[1] = (-1 < (int)temp_uint2) * temp_uint2;
    vertex_indices_8[2] = (-1 < (int)temp_uint3) * temp_uint3;
    vertex_indices_8[3] = (-1 < (int)temp_uint5) * temp_uint5;
    
    /* 计算顶点位置边界 */
    temp_int5 = temp_data_16b_23._0_4_;
    temp_uint2 = (uint)(temp_int9 < temp_int5) * temp_int5 | (uint)(temp_int9 >= temp_int5) * temp_int9;
    temp_int6 = temp_data_16b_23._4_4_;
    temp_uint3 = (uint)(temp_int10 < temp_int6) * temp_int6 | (uint)(temp_int10 >= temp_int6) * temp_int10;
    temp_int7 = temp_data_16b_23._8_4_;
    temp_uint4 = (uint)(temp_int2 < temp_int7) * temp_int7 | (uint)(temp_int2 >= temp_int7) * temp_int2;
    temp_int8 = temp_data_16b_23._12_4_;
    temp_uint5 = (uint)(temp_int3 < temp_int8) * temp_int8 | (uint)(temp_int3 >= temp_int8) * temp_int3;
    
    /* 计算纹理坐标变换 */
    temp_float_array_8[0] = (temp_float17 - (float)temp_uint2) * temp_data_16b_7._0_4_;
    temp_float_array_8[1] = (temp_float18 - temp_uint2._4_4_) * temp_data_16b_7._4_4_;
    temp_float_array_8[2] = (temp_float19 - temp_float_array_8[0]) * temp_data_16b_7._8_4_;
    temp_float_array_8[3] = (temp_float21 - tex_coord_z1) * temp_data_16b_7._12_4_;
    
    /* 计算位置边界 */
    temp_int9 = temp_data_16b_17._0_4_;
    temp_uint2 = (uint)((int)temp_uint2 < temp_int9) * temp_int9 | ((int)temp_uint2 >= temp_int9) * temp_uint2;
    temp_int10 = temp_data_16b_17._4_4_;
    temp_uint3 = (uint)((int)temp_uint3 < temp_int10) * temp_int10 | ((int)temp_uint3 >= temp_int10) * temp_uint3;
    temp_int2 = temp_data_16b_17._8_4_;
    temp_uint4 = (uint)((int)temp_uint4 < temp_int2) * temp_int2 | ((int)temp_uint4 >= temp_int2) * temp_uint4;
    temp_int3 = temp_data_16b_17._12_4_;
    temp_uint5 = (uint)((int)temp_uint5 < temp_int3) * temp_int3 | ((int)temp_uint5 >= temp_int3) * temp_uint5;
    
    /* 计算纹理坐标变换 */
    temp_float_array_12[0] = (temp_data_16b_27._0_4_ - (float)temp_uint2) * temp_data_16b_7._0_4_;
    temp_float_array_12[1] = (temp_data_16b_27._4_4_ - temp_uint2._4_4_) * temp_data_16b_7._4_4_;
    temp_float_array_12[2] = (temp_data_16b_27._8_4_ - temp_float_array_8[0]) * temp_data_16b_7._8_4_;
    temp_float_array_12[3] = (temp_data_16b_27._12_4_ - tex_coord_z1) * temp_data_16b_7._12_4_;
    
    /* 限制顶点数量 */
    vertex_indices_uint_4[0] = (uint)(RENDER_MAX_BATCH_SIZE < (int)temp_uint2) * RENDER_MAX_BATCH_SIZE | (RENDER_MAX_BATCH_SIZE >= (int)temp_uint2) * temp_uint2;
    vertex_indices_uint_4[1] = (uint)(RENDER_MAX_BATCH_SIZE < (int)temp_uint3) * RENDER_MAX_BATCH_SIZE | (RENDER_MAX_BATCH_SIZE >= (int)temp_uint3) * temp_uint3;
    vertex_indices_uint_4[2] = (uint)(RENDER_MAX_BATCH_SIZE < (int)temp_uint4) * RENDER_MAX_BATCH_SIZE | (RENDER_MAX_BATCH_SIZE >= (int)temp_uint4) * temp_uint4;
    vertex_indices_uint_4[3] = (uint)(RENDER_MAX_BATCH_SIZE < (int)temp_uint5) * RENDER_MAX_BATCH_SIZE | (RENDER_MAX_BATCH_SIZE >= (int)temp_uint5) * temp_uint5;
    
    /* 计算最终顶点索引 */
    temp_uint1 = (uint)(temp_int9 < (int)temp_uint1) * temp_int9 | (temp_int9 >= (int)temp_uint1) * temp_uint1;
    temp_uint2 = (uint)(temp_int10 < (int)temp_uint2) * temp_int10 | (temp_int10 >= (int)temp_uint2) * temp_uint2;
    temp_uint3 = (uint)(temp_int2 < (int)temp_uint3) * temp_int2 | (temp_int2 >= (int)temp_uint3) * temp_uint3;
    temp_uint5 = (uint)(temp_int3 < (int)temp_uint5) * temp_int3 | (temp_int3 >= (int)temp_uint5) * temp_uint5;
    
    /* 处理顶点索引数组 */
    vertex_indices_4[0] = (-1 < (int)temp_uint1) * temp_uint1;
    vertex_indices_4[1] = (-1 < (int)temp_uint2) * temp_uint2;
    vertex_indices_4[2] = (-1 < (int)temp_uint3) * temp_uint3;
    vertex_indices_4[3] = (-1 < (int)temp_uint5) * temp_uint5;
    
    /* 计算可见性掩码 */
    temp_data_16b_16._0_4_ = -(uint)(vertex_indices_4[0] < (int)vertex_indices_uint_4[0]);
    temp_data_16b_16._4_4_ = -(uint)(vertex_indices_4[1] < (int)vertex_indices_uint_4[1]);
    temp_data_16b_16._8_4_ = -(uint)(vertex_indices_4[2] < (int)vertex_indices_uint_4[2]);
    temp_data_16b_16._12_4_ = -(uint)(vertex_indices_4[3] < (int)vertex_indices_uint_4[3]);
    
    /* 计算纹理边界 */
    temp_uint1 = (uint)((int)temp_uint6 < temp_int4) * temp_int4 | ((int)temp_uint6 >= temp_int4) * temp_uint6;
    temp_uint2 = (uint)((int)temp_uint7 < temp_int9) * temp_int9 | ((int)temp_uint7 >= temp_int9) * temp_uint7;
    temp_uint3 = (uint)((int)temp_uint8 < temp_int2) * temp_int2 | ((int)temp_uint8 >= temp_int2) * temp_uint8;
    temp_uint5 = (uint)((int)temp_uint9 < temp_int3) * temp_int3 | ((int)temp_uint9 >= temp_int3) * temp_uint9;
    
    /* 限制纹理坐标范围 */
    vertex_indices_uint_8[0] = (uint)(RENDER_MIN_BATCH_SIZE < (int)temp_uint1) * RENDER_MIN_BATCH_SIZE | (RENDER_MIN_BATCH_SIZE >= (int)temp_uint1) * temp_uint1;
    vertex_indices_uint_8[1] = (uint)(RENDER_MIN_BATCH_SIZE < (int)temp_uint2) * RENDER_MIN_BATCH_SIZE | (RENDER_MIN_BATCH_SIZE >= (int)temp_uint2) * temp_uint2;
    vertex_indices_uint_8[2] = (uint)(RENDER_MIN_BATCH_SIZE < (int)temp_uint3) * RENDER_MIN_BATCH_SIZE | (RENDER_MIN_BATCH_SIZE >= (int)temp_uint3) * temp_uint3;
    vertex_indices_uint_8[3] = (uint)(RENDER_MIN_BATCH_SIZE < (int)temp_uint5) * RENDER_MIN_BATCH_SIZE | (RENDER_MIN_BATCH_SIZE >= (int)temp_uint5) * temp_uint5;
    
    /* 计算纹理可见性 */
    temp_data_16b_17._4_4_ = -(uint)(vertex_indices_8[1] < (int)vertex_indices_uint_8[1]);
    temp_data_16b_17._0_4_ = -(uint)(vertex_indices_8[0] < (int)vertex_indices_uint_8[0]);
    temp_data_16b_17._8_4_ = -(uint)(vertex_indices_8[2] < (int)vertex_indices_uint_8[2]);
    temp_data_16b_17._12_4_ = -(uint)(vertex_indices_8[3] < (int)vertex_indices_uint_8[3]);
    
    /* 合并可见性掩码 */
    temp_data_16b_17 = temp_data_16b_16 & temp_data_16b_18 & temp_data_16b_17;
    
    /* 计算最终渲染掩码 */
    temp_data_16b_15._0_4_ =
         -(uint)(0.0 < (float)tex_coord_y && 0.0 < temp_float28) &
         -(uint)(0.0 < (float)tex_coord_x) & temp_data_16b_17._0_4_;
    temp_data_16b_15._4_4_ =
         -(uint)(0.0 < tex_coord_y._4_4_ && 0.0 < temp_float_array_12[0]) &
         -(uint)(0.0 < tex_coord_x._4_4_) & temp_data_16b_17._4_4_;
    temp_data_16b_15._8_4_ =
         -(uint)(0.0 < transform_u && 0.0 < transform_x) & -(uint)(0.0 < transform_w) & temp_data_16b_17._8_4_;
    temp_data_16b_15._12_4_ =
         -(uint)(0.0 < transform_v && 0.0 < transform_y) & -(uint)(0.0 < transform_z) & temp_data_16b_17._12_4_;
    
    /* 提取渲染掩码 */
    temp_uint1 = movmskps((int)temp_offset, temp_data_16b_15);
    temp_uint1 = temp_uint1 & batch_mask;
    
    /* 批处理渲染循环 */
    if (temp_uint1 != 0) {
      do {
        temp_int4 = 0;
        if (temp_uint1 != 0) {
          for (; (temp_uint1 >> temp_int4 & 1) == 0; temp_int4 = temp_int4 + 1) {
          }
        }
        temp_uint1 = temp_uint1 & temp_uint1 - 1;
        temp_offset = (longlong)temp_int4;
        batch_size = 0;
        if (0 < vertex_indices_4[temp_offset] / 0x50) {
          batch_size = vertex_indices_4[temp_offset] / 0x50;
        }
        temp_int4 = 0;
        if (0 < vertex_indices_8[temp_offset] / 0x60) {
          temp_int4 = vertex_indices_8[temp_offset] / 0x60;
        }
        tex_coord_y = (longlong)temp_int4;
        
        /* 计算渲染参数 */
        temp_int9 = 7;
        if ((int)vertex_indices_uint_4[temp_offset] / 0x50 < 7) {
          temp_int9 = (int)vertex_indices_uint_4[temp_offset] / 0x50;
        }
        index_buffer_ptr = (longlong)temp_int9;
        temp_data_16b_25._0_8_ = index_buffer_ptr;
        
        temp_int9 = 3;
        if ((int)vertex_indices_uint_8[temp_offset] / 0x60 < 3) {
          temp_int9 = (int)vertex_indices_uint_8[temp_offset] / 0x60;
        }
        tex_coord_x = (longlong)temp_int9;
        
        /* 批处理渲染 */
        if (tex_coord_y <= tex_coord_x) {
          vertex_index = (ulonglong)(int)batch_size;
          temp_int4 = temp_int4 << 0x11;
          output_buffer_ptr = (int *)(output_buffer_base + (vertex_index + 2 + tex_coord_y * 8) * 4);
          vertex_index = vertex_index;
          
          do {
            temp_int9 = (int)vertex_index;
            if ((longlong)vertex_index <= index_buffer_ptr) {
              vertex_index = vertex_index;
              if (3 < (longlong)((index_buffer_ptr - vertex_index) + 1)) {
                /* SIMD优化的顶点处理 */
                tex_coord_y = *(undefined4 *)(vertex_transform_data_16b + temp_offset * 4);
                tex_coord_x = *(undefined4 *)(vertex_normal_data_16b + temp_offset * 4);
                temp_float38 = vertex_tex_coords_4[temp_offset + -4];
                temp_float32 = vertex_tex_coords_4[temp_offset];
                temp_float43 = temp_float_array_8[temp_offset];
                temp_float12 = temp_float_array_12[temp_offset];
                
                temp_offset = ((index_buffer_ptr - vertex_index) - 3 >> 2) + 1;
                temp_int2 = temp_int9 << 0xe;
                vertex_index = temp_offset * 4 + vertex_index;
                temp_int9 = temp_int9 + (int)temp_offset * 4;
                
                output_buffer_base = output_buffer_ptr;
                
                do {
                  temp_int3 = temp_int2 + 0xc000;
                  temp_offset = (longlong)(temp_int2 + temp_int4 + output_buffer_base[-2]);
                  
                  /* 写入顶点数据 */
                  *(undefined4 *)(in_stack_00000038 + temp_offset * RENDER_VERTEX_SIZE) = tex_coord_y;
                  *(undefined4 *)(in_stack_00000038 + RENDER_OFFSET_Y + temp_offset * RENDER_VERTEX_SIZE) = tex_coord_x;
                  *(float *)(in_stack_00000038 + RENDER_OFFSET_Z + temp_offset * RENDER_VERTEX_SIZE) = temp_float38;
                  *(float *)(in_stack_00000038 + 0xc + temp_offset * RENDER_VERTEX_SIZE) = temp_float32;
                  *(float *)(in_stack_00000038 + 0x10 + temp_offset * RENDER_VERTEX_SIZE) = temp_float43;
                  *(float *)(in_stack_00000038 + 0x14 + temp_offset * RENDER_VERTEX_SIZE) = temp_float12;
                  output_buffer_base[-2] = output_buffer_base[-2] + 1;
                  
                  temp_int5 = output_buffer_base[-1] + temp_int2;
                  temp_int2 = temp_int2 + 0x10000;
                  temp_offset = (longlong)(temp_int5 + temp_int4) + 0x4000;
                  
                  /* 写入第二组顶点数据 */
                  *(undefined4 *)(in_stack_00000038 + temp_offset * RENDER_VERTEX_SIZE) = tex_coord_y;
                  *(undefined4 *)(in_stack_00000038 + RENDER_OFFSET_Y + temp_offset * RENDER_VERTEX_SIZE) = tex_coord_x;
                  *(float *)(in_stack_00000038 + RENDER_OFFSET_Z + temp_offset * RENDER_VERTEX_SIZE) = temp_float38;
                  *(float *)(in_stack_00000038 + 0xc + temp_offset * RENDER_VERTEX_SIZE) = temp_float32;
                  *(float *)(in_stack_00000038 + 0x10 + temp_offset * RENDER_VERTEX_SIZE) = temp_float43;
                  *(float *)(in_stack_00000038 + 0x14 + temp_offset * RENDER_VERTEX_SIZE) = temp_float12;
                  output_buffer_base[-1] = output_buffer_base[-1] + 1;
                  
                  temp_offset = (longlong)(*output_buffer_base + temp_int3 + temp_int4) + -0x4000;
                  
                  /* 写入第三组顶点数据 */
                  *(undefined4 *)(in_stack_00000038 + temp_offset * RENDER_VERTEX_SIZE) = tex_coord_y;
                  *(undefined4 *)(in_stack_00000038 + RENDER_OFFSET_Y + temp_offset * RENDER_VERTEX_SIZE) = tex_coord_x;
                  *(float *)(in_stack_00000038 + RENDER_OFFSET_Z + temp_offset * RENDER_VERTEX_SIZE) = temp_float38;
                  *(float *)(in_stack_00000038 + 0xc + temp_offset * RENDER_VERTEX_SIZE) = temp_float32;
                  *(float *)(in_stack_00000038 + 0x10 + temp_offset * RENDER_VERTEX_SIZE) = temp_float43;
                  *(float *)(in_stack_00000038 + 0x14 + temp_offset * RENDER_VERTEX_SIZE) = temp_float12;
                  *output_buffer_base = *output_buffer_base + 1;
                  
                  temp_offset = (longlong)(output_buffer_base[1] + temp_int3 + temp_int4);
                  
                  /* 写入第四组顶点数据 */
                  *(undefined4 *)(in_stack_00000038 + temp_offset * RENDER_VERTEX_SIZE) = tex_coord_y;
                  *(undefined4 *)(in_stack_00000038 + RENDER_OFFSET_Y + temp_offset * RENDER_VERTEX_SIZE) = tex_coord_x;
                  *(float *)(in_stack_00000038 + RENDER_OFFSET_Z + temp_offset * RENDER_VERTEX_SIZE) = temp_float38;
                  *(float *)(in_stack_00000038 + 0xc + temp_offset * RENDER_VERTEX_SIZE) = temp_float32;
                  *(float *)(in_stack_00000038 + 0x10 + temp_offset * RENDER_VERTEX_SIZE) = temp_float43;
                  *(float *)(in_stack_00000038 + 0x14 + temp_offset * RENDER_VERTEX_SIZE) = temp_float12;
                  output_buffer_base[1] = output_buffer_base[1] + 1;
                  
                  temp_offset = temp_offset + -1;
                  output_buffer_base = output_buffer_base + 4;
                  temp_uint2 = vertex_index;
                } while (temp_offset != 0);
              }
              
              /* 处理剩余顶点 */
              if ((longlong)vertex_index <= index_buffer_ptr) {
                tex_coord_y = *(undefined4 *)(vertex_transform_data_16b + temp_offset * 4);
                tex_coord_x = *(undefined4 *)(vertex_normal_data_16b + temp_offset * 4);
                temp_float38 = vertex_tex_coords_4[temp_offset + -4];
                temp_float32 = vertex_tex_coords_4[temp_offset];
                temp_float43 = temp_float_array_8[temp_offset];
                temp_float12 = temp_float_array_12[temp_offset];
                
                temp_int9 = temp_int9 << 0xe;
                temp_offset = (index_buffer_ptr - vertex_index) + 1;
                output_buffer_base = (int *)(output_buffer_base + (vertex_index + tex_coord_y * 8) * 4);
                
                do {
                  temp_int2 = *output_buffer_base + temp_int9;
                  temp_int9 = temp_int9 + 0x4000;
                  temp_offset = (longlong)(temp_int2 + temp_int4);
                  
                  /* 写入顶点数据 */
                  *(float *)(in_stack_00000038 + 0xc + temp_offset * RENDER_VERTEX_SIZE) = temp_float32;
                  *(float *)(in_stack_00000038 + 0x10 + temp_offset * RENDER_VERTEX_SIZE) = temp_float43;
                  *(float *)(in_stack_00000038 + 0x14 + temp_offset * RENDER_VERTEX_SIZE) = temp_float12;
                  *(undefined4 *)(in_stack_00000038 + temp_offset * RENDER_VERTEX_SIZE) = tex_coord_y;
                  *(undefined4 *)(in_stack_00000038 + RENDER_OFFSET_Y + temp_offset * RENDER_VERTEX_SIZE) = tex_coord_x;
                  *(float *)(in_stack_00000038 + RENDER_OFFSET_Z + temp_offset * RENDER_VERTEX_SIZE) = temp_float38;
                  *output_buffer_base = *output_buffer_base + 1;
                  
                  temp_offset = temp_offset + -1;
                  output_buffer_base = output_buffer_base + 1;
                } while (temp_offset != 0);
              }
            }
            vertex_index = (ulonglong)batch_size;
            tex_coord_y = tex_coord_y + 1;
            output_buffer_ptr = output_buffer_ptr + 8;
            temp_int4 = temp_int4 + 0x20000;
          } while (tex_coord_y <= tex_coord_x);
        }
      } while (temp_uint1 != 0);
      
      /* 重置批处理参数 */
      padding_1fc = 0;
      batch_mask = max_indices;
    }
    
    /* 更新循环计数器 */
    vertex_count = vertex_count - 4;
    batch_size = temp_uint1;
  } while (batch_size <= in_stack_00000030);
  
  /* 设置返回参数 */
  transform_matrix_ptr = param_1;
  
  /* 安全检查和返回 */
  // WARNING: Subroutine does not return
  FUN_1808fc050(security_cookie ^ (ulonglong)&batch_size);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address