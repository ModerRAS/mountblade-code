#include "TaleWorlds.Native.Split.h"

// 03_rendering_part426.c - 渲染系统高级批处理和矩阵变换处理器
// 包含1个核心函数：高级批处理和矩阵变换处理器
// 
// 简化实现说明：原文件包含极其复杂的渲染批处理逻辑，包括SIMD指令、
// 矩阵变换、纹理坐标处理和深度缓冲区管理等。本简化实现保留了核心功能结构，
// 但简化了底层优化细节和复杂的SIMD指令操作。

// 常量定义
#define RENDERING_BATCH_SIZE 4
#define RENDERING_MAX_BATCHES 16
#define RENDERING_TEXTURE_COORDS 4
#define RENDERING_VERTEX_SIZE 0x18
#define RENDERING_DEPTH_THRESHOLD 0.0f
#define RENDERING_UV_THRESHOLD 0x167
#define RENDERING_INDEX_THRESHOLD 0x27f
#define RENDERING_VERTEX_STRIDE 0x10
#define RENDERING_BATCH_OFFSET_1 0xc
#define RENDERING_BATCH_OFFSET_2 0x18
#define RENDERING_BATCH_OFFSET_3 0x24
#define RENDERING_COMPONENT_COUNT 3
#define RENDERING_BITMASK_0xf 0xf
#define RENDERING_BITMASK_0x1f 0x1f
#define RENDERING_FLAG_MASK 0x4
#define RENDERING_SCALE_FACTOR 0x20000
#define RENDERING_BATCH_INCREMENT 0x4000
#define RENDERING_BATCH_SPACING 0x10000

// 全局变量引用
extern const void* _DAT_180bf00a8;     // 渲染系统全局数据

/**
 * 渲染系统高级批处理和矩阵变换处理器
 * 处理渲染系统中的高级批处理操作，包括SIMD优化、矩阵变换、纹理坐标处理和深度缓冲区管理
 * 主要用于高效处理大量渲染数据，支持并行计算和硬件加速
 * 
 * @param param_1 参数1 - 渲染上下文指针
 * @param in_stack_00000030 参数2 - 批处理数量
 * @param in_stack_00000038 参数3 - 输出缓冲区指针
 * @param in_stack_00000040 参数4 - 批处理数据指针
 * @param in_stack_00000048 参数5 - 处理模式标志
 * @param in_stack_00000050 参数6 - 数据偏移量
 * @return void
 */
void rendering_system_advanced_texture_coordinate_processor(longlong param_1)

{
  // 纹理坐标和顶点属性指针
  float *texture_coord_ptr1;
  float *texture_coord_ptr2;
  float *texture_coord_ptr3;
  longlong rendering_context;
  undefined4 texture_data1;
  undefined4 texture_data2;
  float texture_value1;
  undefined1 simd_register1 [16];
  ulonglong security_cookie;
  longlong texture_offset1;
  longlong texture_offset2;
  longlong texture_offset3;
  ulonglong texture_index;
  int *batch_counter_ptr;
  uint texture_coord_count;
  longlong vertex_data_offset;
  longlong batch_start_offset;
  longlong batch_end_offset;
  float vertex_attribute1;
  uint vertex_index1;
  float vertex_attribute2;
  uint vertex_index2;
  float vertex_attribute3;
  uint vertex_index3;
  float vertex_attribute4;
  undefined1 simd_register2 [16];
  undefined1 simd_register3 [16];
  undefined1 simd_register4 [16];
  undefined1 simd_register5 [16];
  undefined1 simd_register6 [16];
  undefined1 simd_register7 [16];
  uint vertex_index4;
  float vertex_attribute5;
  float vertex_attribute6;
  float vertex_attribute7;
  undefined1 simd_register8 [16];
  undefined1 simd_register9 [16];
  undefined1 simd_register10 [16];
  float vertex_attribute8;
  float vertex_attribute9;
  float vertex_attribute10;
  float vertex_attribute11;
  undefined1 simd_register11 [16];
  undefined1 simd_register12 [16];
  undefined1 simd_register13 [16];
  undefined1 simd_register14 [16];
  undefined1 simd_register15 [16];
  float vertex_attribute12;
  int vertex_coord_int1;
  uint vertex_coord_uint1;
  float vertex_attribute13;
  int vertex_coord_int2;
  uint vertex_coord_uint2;
  float vertex_attribute14;
  int vertex_coord_int3;
  uint vertex_coord_uint3;
  float vertex_attribute15;
  int vertex_coord_int4;
  uint vertex_coord_uint4;
  undefined1 simd_register16 [16];
  undefined1 simd_register17 [16];
  int vertex_coord_int5;
  uint vertex_coord_uint5;
  int vertex_coord_int6;
  uint vertex_coord_uint6;
  int vertex_coord_int7;
  uint vertex_coord_uint7;
  int vertex_coord_int8;
  uint vertex_coord_uint8;
  undefined1 simd_register18 [16];
  undefined1 simd_register19 [16];
  float vertex_attribute16;
  int vertex_coord_int9;
  float vertex_attribute17;
  int vertex_coord_int10;
  float vertex_attribute18;
  float vertex_attribute19;
  float vertex_attribute20;
  float vertex_attribute21;
  float vertex_attribute22;
  float vertex_attribute23;
  undefined1 simd_register20 [16];
  undefined1 simd_register21 [16];
  float vertex_attribute24;
  float vertex_attribute25;
  float vertex_attribute26;
  float vertex_attribute27;
  undefined1 simd_register22 [16];
  int vertex_coord_int11;
  int vertex_coord_int12;
  undefined1 simd_register23 [16];
  undefined1 simd_register24 [16];
  undefined1 simd_register25 [16];
  uint input_texture_count;
  longlong input_render_context;
  longlong input_data_offset;
  char input_render_mode;
  uint input_texture_index;
  uint batch_size_remaining;
  uint batch_size_processed;
  uint batch_size_initial;
  undefined4 batch_control_flag;
  uint batch_size_current;
  uint batch_size_next;
  undefined8 batch_data_offset;
  float interpolation_factor1;
  float interpolation_factor2;
  undefined8 texture_coord_pair1;
  float vertex_attribute_base1;
  float vertex_attribute_base2;
  undefined8 vertex_attribute_pair1;
  float vertex_attribute_interpolated1;
  float vertex_attribute_interpolated2;
  undefined8 vertex_attribute_pair2;
  longlong batch_control_offset;
  undefined8 batch_data_buffer;
  float interpolation_factor3;
  float interpolation_factor4;
  undefined8 interpolation_pair1;
  float interpolation_factor5;
  float interpolation_factor6;
  undefined8 interpolation_pair2;
  longlong batch_start_address;
  undefined8 batch_data_extended;
  float texture_coord_x1;
  float texture_coord_y1;
  undefined1 batch_simd_data1 [16];
  longlong batch_output_offset;
  int batch_counters [4];
  uint batch_sizes [4];
  int batch_indices [4];
  uint batch_limits [4];
  undefined1 batch_simd_data2 [16];
  undefined1 batch_simd_data3 [16];
  undefined1 batch_simd_data4 [16];
  float texture_coords [4];
  float vertex_attributes [4];
  float interpolated_values [4];
  ulonglong stack_cookie;
  float temp_float1;
  float temp_float2;
  undefined1 temp_simd1 [16];
  undefined1 temp_simd2 [16];
  undefined1 temp_simd3 [16];
  undefined1 temp_simd4 [16];
  undefined1 temp_simd5 [16];
  
  // 初始化安全cookie
  stack_cookie = _DAT_180bf00a8 ^ (ulonglong)&batch_size_remaining;
  batch_size_current = 4;
  texture_coord_count = 0xf;
  batch_size_next = input_texture_count + 1;
  batch_start_offset = input_data_offset;
  batch_size_processed = 0xf;
  temp_float1 = 0.0;
  do {
    batch_size_initial = temp_float1 + 4;
    if (input_texture_count < batch_size_initial) {
      texture_coord_count = (1 << ((byte)batch_size_next & 0x1f)) - 1;
      batch_size_processed = texture_coord_count;
    }
    // 获取纹理数据偏移量
    rendering_context = *(longlong *)(param_1 + 0x28 + (ulonglong)input_texture_index * 8);
    vertex_index1 = batch_size_next;
    if (batch_size_initial <= input_texture_count) {
      vertex_index1 = batch_size_current;
    }
    batch_size_current = vertex_index1;
    
    // 获取渲染资源指针
    vertex_data_offset = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48);
    texture_index = (ulonglong)*(uint *)(vertex_data_offset + (ulonglong)(temp_float1 * 3) * 4);
    vertex_data_offset = vertex_data_offset + (ulonglong)(temp_float1 * 3) * 4;
    
    // 根据渲染模式处理纹理坐标
    if (input_render_mode == '\0') {
      // 标准渲染模式
      texture_offset1 = 0;
      if (1 < batch_size_current) {
        texture_offset1 = 0xc;
      }
      texture_offset2 = 0;
      if (2 < batch_size_current) {
        texture_offset2 = 0x18;
      }
      texture_offset3 = 0;
      if (3 < batch_size_current) {
        texture_offset3 = 0x24;
      }
      
      // 读取主要纹理坐标
      texture_coord_ptr1 = (float *)(rendering_context + texture_index * RENDERING_TEXTURE_COORDINATE_SIZE);
      vertex_attribute16 = *texture_coord_ptr1;
      texture_value1 = texture_coord_ptr1[1];
      texture_coords[0] = texture_coord_ptr1[2];
      
      // 读取次要纹理坐标
      texture_coord_ptr2 = (float *)(rendering_context + (ulonglong)*(uint *)(texture_offset1 + vertex_data_offset) * RENDERING_TEXTURE_COORDINATE_SIZE);
      vertex_attribute17 = *texture_coord_ptr2;
      vertex_attribute1 = texture_coord_ptr2[1];
      texture_coords[1] = texture_coord_ptr2[2];
      
      // 读取第三组纹理坐标
      texture_coord_ptr3 = (float *)(rendering_context + (ulonglong)*(uint *)(texture_offset2 + vertex_data_offset) * RENDERING_TEXTURE_COORDINATE_SIZE);
      vertex_attribute18 = *texture_coord_ptr3;
      temp_float2 = texture_coord_ptr3[1];
      texture_coord_x1 = texture_coord_ptr3[2];
      vertex_attribute_base1 = texture_coord_ptr3[3];
      
      // 读取第四组纹理坐标
      texture_coord_ptr3 = (float *)(rendering_context + (ulonglong)*(uint *)(texture_offset3 + vertex_data_offset) * RENDERING_TEXTURE_COORDINATE_SIZE);
      vertex_attribute19 = *texture_coord_ptr3;
      vertex_attribute4 = texture_coord_ptr3[1];
      batch_start_address = rendering_context + (ulonglong)*(uint *)(texture_offset3 + vertex_data_offset) * RENDERING_TEXTURE_COORDINATE_SIZE;
      interpolation_factor2 = *(float *)(batch_start_address + 4);
      texture_coord_y1 = *(float *)(batch_start_address + 8);
      
      // 合并纹理坐标对
      texture_coord_pair1 = CONCAT44(texture_coord_ptr2[3], texture_coord_ptr1[3]);
      
      // 读取第二行纹理坐标
      texture_coord_ptr1 = (float *)(rendering_context + (ulonglong)*(uint *)(vertex_data_offset + 4) * RENDERING_TEXTURE_COORDINATE_SIZE);
      vertex_attribute24 = *texture_coord_ptr1;
      vertex_attribute20 = texture_coord_ptr1[1];
      vertex_attribute5 = texture_coord_ptr1[2];
      vertex_attribute_pair1 = CONCAT44(texture_coords[1], texture_coords[0]);
      
      // 读取第二行次要纹理坐标
      texture_coord_ptr2 = (float *)(rendering_context + (ulonglong)*(uint *)(texture_offset1 + 4 + vertex_data_offset) * RENDERING_TEXTURE_COORDINATE_SIZE);
      vertex_attribute25 = *texture_coord_ptr2;
      vertex_attribute21 = texture_coord_ptr2[1];
      vertex_attribute6 = texture_coord_ptr2[2];
      
      // 读取第二行第三组纹理坐标
      texture_coord_ptr3 = (float *)(rendering_context + (ulonglong)*(uint *)(texture_offset2 + 4 + vertex_data_offset) * RENDERING_TEXTURE_COORDINATE_SIZE);
      vertex_attribute26 = *texture_coord_ptr3;
      vertex_attribute22 = texture_coord_ptr3[1];
      vertex_attribute7 = texture_coord_ptr3[2];
      vertex_attribute_interpolated1 = texture_coord_ptr3[3];
      
      // 读取第二行第四组纹理坐标
      texture_index = (ulonglong)*(uint *)(texture_offset3 + 4 + vertex_data_offset);
      texture_coord_ptr3 = (float *)(rendering_context + texture_index * RENDERING_TEXTURE_COORDINATE_SIZE);
      vertex_attribute27 = *texture_coord_ptr3;
      vertex_attribute23 = texture_coord_ptr3[1];
      batch_start_address = rendering_context + texture_index * RENDERING_TEXTURE_COORDINATE_SIZE;
      interpolation_factor4 = *(float *)(batch_start_address + 4);
      vertex_attribute8 = *(float *)(batch_start_address + 8);
      vertex_attribute_pair2 = CONCAT44(texture_coord_ptr2[3], texture_coord_ptr1[3]);
      
      // 读取第三行纹理坐标
      texture_coord_ptr1 = (float *)(rendering_context + (ulonglong)*(uint *)(vertex_data_offset + 8) * RENDERING_TEXTURE_COORDINATE_SIZE);
      vertex_attribute12 = *texture_coord_ptr1;
      vertex_attribute13 = texture_coord_ptr1[1];
      vertex_attribute14 = texture_coord_ptr1[2];
      vertex_attribute15 = texture_coord_ptr1[3];
      
      // 读取第三行次要纹理坐标
      texture_coord_ptr1 = (float *)(rendering_context + (ulonglong)*(uint *)(texture_offset1 + 8 + vertex_data_offset) * RENDERING_TEXTURE_COORDINATE_SIZE);
      texture_value1 = *texture_coord_ptr1;
      vertex_attribute2 = texture_coord_ptr1[1];
      vertex_attribute3 = texture_coord_ptr1[2];
      temp_float2 = texture_coord_ptr1[3];
      
      // 读取第三行第三组纹理坐标
      texture_coord_ptr1 = (float *)(rendering_context + (ulonglong)*(uint *)(texture_offset2 + 8 + vertex_data_offset) * RENDERING_TEXTURE_COORDINATE_SIZE);
      vertex_attribute9 = *texture_coord_ptr1;
      vertex_attribute10 = texture_coord_ptr1[1];
      vertex_attribute11 = texture_coord_ptr1[2];
      vertex_attribute_interpolated2 = texture_coord_ptr1[3];
      
      // 获取第四行纹理坐标索引
      temp_float1 = *(uint *)(texture_offset3 + 8 + vertex_data_offset);
    }
    else {
      // 扩展渲染模式
      texture_offset1 = 0;
      if (1 < batch_size_current) {
        texture_offset1 = 0xc;
      }
      texture_offset2 = 0;
      if (2 < batch_size_current) {
        texture_offset2 = 0x18;
      }
      texture_offset3 = 0;
      if (3 < batch_size_current) {
        texture_offset3 = 0x24;
      }
      
      // 读取主要纹理坐标
      texture_coord_ptr1 = (float *)(rendering_context + texture_index * RENDERING_TEXTURE_COORDINATE_SIZE);
      vertex_attribute16 = *texture_coord_ptr1;
      texture_value1 = texture_coord_ptr1[1];
      texture_coords[0] = texture_coord_ptr1[2];
      
      // 读取次要纹理坐标
      texture_coord_ptr2 = (float *)(rendering_context + (ulonglong)*(uint *)(texture_offset1 + vertex_data_offset) * RENDERING_TEXTURE_COORDINATE_SIZE);
      vertex_attribute17 = *texture_coord_ptr2;
      vertex_attribute1 = texture_coord_ptr2[1];
      texture_coords[1] = texture_coord_ptr2[2];
      
      // 读取第三组纹理坐标
      texture_coord_ptr3 = (float *)(rendering_context + (ulonglong)*(uint *)(texture_offset2 + vertex_data_offset) * RENDERING_TEXTURE_COORDINATE_SIZE);
      vertex_attribute18 = *texture_coord_ptr3;
      temp_float2 = texture_coord_ptr3[1];
      texture_coord_x1 = texture_coord_ptr3[2];
      vertex_attribute_base1 = texture_coord_ptr3[3];
      
      // 读取第四组纹理坐标
      texture_coord_ptr3 = (float *)(rendering_context + (ulonglong)*(uint *)(texture_offset3 + vertex_data_offset) * RENDERING_TEXTURE_COORDINATE_SIZE);
      vertex_attribute19 = *texture_coord_ptr3;
      vertex_attribute4 = texture_coord_ptr3[1];
      batch_start_address = rendering_context + (ulonglong)*(uint *)(texture_offset3 + vertex_data_offset) * RENDERING_TEXTURE_COORDINATE_SIZE;
      interpolation_factor2 = *(float *)(batch_start_address + 4);
      texture_coord_y1 = *(float *)(batch_start_address + 8);
      
      // 合并纹理坐标对
      texture_coord_pair1 = CONCAT44(texture_coord_ptr2[3], texture_coord_ptr1[3]);
      
      // 读取第二行纹理坐标
      texture_coord_ptr1 = (float *)(rendering_context + (ulonglong)*(uint *)(vertex_data_offset + 8) * RENDERING_TEXTURE_COORDINATE_SIZE);
      vertex_attribute24 = *texture_coord_ptr1;
      vertex_attribute20 = texture_coord_ptr1[1];
      vertex_attribute5 = texture_coord_ptr1[2];
      vertex_attribute_pair1 = CONCAT44(texture_coords[1], texture_coords[0]);
      
      // 读取第二行次要纹理坐标
      texture_coord_ptr2 = (float *)(rendering_context + (ulonglong)*(uint *)(texture_offset1 + 8 + vertex_data_offset) * RENDERING_TEXTURE_COORDINATE_SIZE);
      vertex_attribute25 = *texture_coord_ptr2;
      vertex_attribute21 = texture_coord_ptr2[1];
      vertex_attribute6 = texture_coord_ptr2[2];
      
      // 读取第二行第三组纹理坐标
      texture_coord_ptr3 = (float *)(rendering_context + (ulonglong)*(uint *)(texture_offset2 + 8 + vertex_data_offset) * RENDERING_TEXTURE_COORDINATE_SIZE);
      vertex_attribute26 = *texture_coord_ptr3;
      vertex_attribute22 = texture_coord_ptr3[1];
      vertex_attribute7 = texture_coord_ptr3[2];
      vertex_attribute_interpolated1 = texture_coord_ptr3[3];
      
      // 读取第二行第四组纹理坐标
      texture_index = (ulonglong)*(uint *)(texture_offset3 + 8 + vertex_data_offset);
      texture_coord_ptr3 = (float *)(rendering_context + texture_index * RENDERING_TEXTURE_COORDINATE_SIZE);
      vertex_attribute27 = *texture_coord_ptr3;
      vertex_attribute23 = texture_coord_ptr3[1];
      batch_start_address = rendering_context + texture_index * RENDERING_TEXTURE_COORDINATE_SIZE;
      interpolation_factor4 = *(float *)(batch_start_address + 4);
      vertex_attribute8 = *(float *)(batch_start_address + 8);
      vertex_attribute_pair2 = CONCAT44(texture_coord_ptr2[3], texture_coord_ptr1[3]);
      
      // 读取第三行纹理坐标
      texture_coord_ptr1 = (float *)(rendering_context + (ulonglong)*(uint *)(vertex_data_offset + 4) * RENDERING_TEXTURE_COORDINATE_SIZE);
      vertex_attribute12 = *texture_coord_ptr1;
      vertex_attribute13 = texture_coord_ptr1[1];
      vertex_attribute14 = texture_coord_ptr1[2];
      vertex_attribute15 = texture_coord_ptr1[3];
      
      // 读取第三行次要纹理坐标
      texture_coord_ptr1 = (float *)(rendering_context + (ulonglong)*(uint *)(texture_offset1 + 4 + vertex_data_offset) * RENDERING_TEXTURE_COORDINATE_SIZE);
      texture_value1 = *texture_coord_ptr1;
      vertex_attribute2 = texture_coord_ptr1[1];
      vertex_attribute3 = texture_coord_ptr1[2];
      temp_float2 = texture_coord_ptr1[3];
      
      // 读取第三行第三组纹理坐标
      texture_coord_ptr1 = (float *)(rendering_context + (ulonglong)*(uint *)(texture_offset2 + 4 + vertex_data_offset) * RENDERING_TEXTURE_COORDINATE_SIZE);
      vertex_attribute9 = *texture_coord_ptr1;
      vertex_attribute10 = texture_coord_ptr1[1];
      vertex_attribute11 = texture_coord_ptr1[2];
      vertex_attribute_interpolated2 = texture_coord_ptr1[3];
      
      // 获取第四行纹理坐标索引
      temp_float1 = *(uint *)(texture_offset3 + 4 + vertex_data_offset);
    }
    
    // 完成纹理坐标数组
    texture_coords[2] = texture_coord_x1;
    texture_coords[3] = texture_coord_y1;
    
    // 转换顶点属性为整数
    vertex_coord_int1 = (int)texture_value1;
    vertex_coord_int2 = (int)vertex_attribute1;
    vertex_coord_int3 = (int)temp_float2;
    vertex_coord_int4 = (int)vertex_attribute4;
    
    // 读取最后一组纹理坐标
    texture_coord_ptr1 = (float *)(rendering_context + (ulonglong)temp_float1 * RENDERING_TEXTURE_COORDINATE_SIZE);
    rendering_context = rendering_context + (ulonglong)temp_float1 * RENDERING_TEXTURE_COORDINATE_SIZE;
    interpolation_factor1 = *(float *)(rendering_context + 4);
    texture_data1 = *(undefined4 *)(rendering_context + 8);
    
    // 构建纹理数据包
    batch_data_extended._0_8_ = CONCAT44(vertex_attribute3, vertex_attribute14);
    batch_data_extended._8_4_ = vertex_attribute11;
    batch_data_extended._12_4_ = texture_data1;
    
    // 构建顶点属性数据
    simd_register24._0_4_ = (int)vertex_attribute13;
    simd_register24._4_4_ = (int)texture_value1;
    simd_register24._8_4_ = (int)vertex_attribute10;
    simd_register24._12_4_ = (int)texture_coord_ptr1[1];
    
    vertex_coord_int11 = (int)vertex_attribute12;
    vertex_coord_int12 = (int)texture_value1;
    simd_register25._0_8_ = CONCAT44(vertex_coord_int12, vertex_coord_int11);
    simd_register25._8_4_ = (int)vertex_attribute9;
    simd_register25._12_4_ = (int)*texture_coord_ptr1;
    
    // 构建UV坐标数据
    simd_register26._0_4_ = (int)vertex_attribute20;
    simd_register26._4_4_ = (int)vertex_attribute21;
    simd_register26._8_4_ = (int)vertex_attribute22;
    simd_register26._12_4_ = (int)vertex_attribute23;
    
    // 设置批处理数据指针
    batch_data_buffer = (int *)CONCAT44(temp_float2, vertex_attribute15);
    simd_register21._8_4_ = vertex_attribute11;
    simd_register21._0_8_ = batch_data_extended._0_8_;
    simd_register21._12_4_ = texture_data1;
    
    // 构建主要纹理坐标数据
    vertex_coord_int9 = (int)vertex_attribute16;
    vertex_coord_int10 = (int)vertex_attribute17;
    simd_register16._4_4_ = vertex_coord_int10;
    simd_register16._0_4_ = vertex_coord_int9;
    
    vertex_coord_int9 = (int)vertex_attribute18;
    vertex_coord_int10 = (int)vertex_attribute19;
    vertex_coord_int11 = (int)vertex_attribute24;
    vertex_coord_int12 = (int)vertex_attribute25;
    
    // 构建第二组纹理坐标数据
    simd_register23._0_8_ = CONCAT44(vertex_coord_int12, vertex_coord_int11);
    simd_register23._8_4_ = (int)vertex_attribute26;
    simd_register23._12_4_ = (int)vertex_attribute27;
    
    simd_register16._8_4_ = vertex_coord_int10;
    simd_register16._12_4_ = vertex_coord_int2;
    simd_register15._8_8_ = simd_register16._8_8_;
    simd_register15._4_4_ = vertex_coord_int1;
    simd_register15._0_4_ = vertex_coord_int9;
    
    // 构建第三组纹理坐标数据
    simd_register18._4_4_ = vertex_coord_int3;
    simd_register18._0_4_ = vertex_coord_int9;
    simd_register18._8_4_ = vertex_coord_int10;
    simd_register18._12_4_ = vertex_coord_int4;
    
    // 执行SIMD打包操作
    batch_simd_data2 = packssdw(simd_register15, simd_register18);
    
    // 构建第四组纹理坐标数据
    simd_register20._4_4_ = simd_register26._8_4_;
    simd_register20._0_4_ = simd_register23._8_4_;
    simd_register20._8_4_ = simd_register23._12_4_;
    simd_register20._12_4_ = simd_register26._12_4_;
    
    // 计算纹理坐标差值
    simd_register17._0_4_ = vertex_coord_int11 - vertex_coord_int9;
    simd_register17._4_4_ = vertex_coord_int12 - vertex_coord_int10;
    simd_register17._8_4_ = simd_register23._8_4_ - vertex_coord_int9;
    simd_register17._12_4_ = simd_register23._12_4_ - vertex_coord_int10;
    
    // 构建插值数据
    simd_register19._8_4_ = vertex_coord_int12;
    simd_register19._0_8_ = simd_register23._0_8_;
    simd_register19._12_4_ = simd_register26._4_4_;
    
    // 执行SIMD打包操作
    simd_register18._8_8_ = simd_register19._8_8_;
    simd_register18._4_4_ = simd_register26._0_4_;
    simd_register18._0_4_ = vertex_coord_int11;
    batch_simd_data1 = packssdw(simd_register18, simd_register20);
    
    // 构建顶点属性数据
    simd_register22._8_4_ = vertex_coord_int12;
    simd_register22._0_8_ = simd_register25._0_8_;
    simd_register22._12_4_ = simd_register24._4_4_;
    
    simd_register19._8_8_ = simd_register22._8_8_;
    simd_register19._4_4_ = simd_register24._0_4_;
    simd_register19._0_4_ = vertex_coord_int11;
    
    // 构建顶点属性扩展数据
    simd_register10._4_4_ = simd_register24._8_4_;
    simd_register10._0_4_ = simd_register25._8_4_;
    simd_register10._8_4_ = simd_register25._12_4_;
    simd_register10._12_4_ = simd_register24._12_4_;
    
    // 计算顶点属性差值
    simd_register9._0_4_ = vertex_coord_int1 - simd_register26._0_4_;
    simd_register9._4_4_ = vertex_coord_int2 - simd_register26._4_4_;
    simd_register9._8_4_ = vertex_coord_int3 - simd_register26._8_4_;
    simd_register9._12_4_ = vertex_coord_int4 - simd_register26._12_4_;
    
    // 执行SIMD乘法操作
    simd_register8 = pmulld(simd_register17, simd_register9);
    
    // 计算纹理坐标差值
    simd_register2._0_4_ = vertex_coord_int9 - vertex_coord_int11;
    simd_register2._4_4_ = vertex_coord_int10 - vertex_coord_int12;
    simd_register2._8_4_ = vertex_coord_int9 - simd_register25._8_4_;
    simd_register2._12_4_ = vertex_coord_int10 - simd_register25._12_4_;
    
    // 执行SIMD乘法操作
    simd_register18 = pmulld(simd_register2, simd_register10);
    
    // 计算结果差值
    vertex_coord_int11 = simd_register8._0_4_ - simd_register18._0_4_;
    vertex_coord_int12 = simd_register8._4_4_ - simd_register18._4_4_;
    vertex_coord_int11 = simd_register8._8_4_ - simd_register18._8_4_;
    vertex_coord_int12 = simd_register8._12_4_ - simd_register18._12_4_;
    
    // 构建掩码数据
    simd_register3._0_4_ = -(uint)(0 < vertex_coord_int11);
    simd_register3._4_4_ = -(uint)(0 < vertex_coord_int12);
    simd_register3._8_4_ = -(uint)(0 < vertex_coord_int11);
    simd_register3._12_4_ = -(uint)(0 < vertex_coord_int12);
    
    simd_register18 = simd_register25;
    simd_register8 = simd_register24;
    
    // 检查渲染标志位
    if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
      // 执行SIMD混合操作
      simd_register18 = pblendvb(simd_register23, simd_register25, simd_register3);
      simd_register23 = pblendvb(simd_register25, simd_register23, simd_register3);
      
      // 构建混合数据
      simd_register7._4_4_ = vertex_attribute6;
      simd_register7._0_4_ = vertex_attribute5;
      simd_register7._8_4_ = vertex_attribute7;
      simd_register7._12_4_ = vertex_attribute8;
      
      simd_register8 = pblendvb(simd_register26, simd_register24, simd_register3);
      simd_register26 = pblendvb(simd_register24, simd_register26, simd_register3);
      
      simd_register10 = pblendvb(batch_simd_data1, batch_simd_data2, simd_register3);
      batch_simd_data1 = pblendvb(batch_simd_data2, batch_simd_data1, simd_register3);
      
      // 构建浮点掩码
      simd_register4._0_4_ = (float)simd_register3._0_4_;
      simd_register4._4_4_ = (float)simd_register3._4_4_;
      simd_register4._8_4_ = (float)simd_register3._8_4_;
      simd_register4._12_4_ = (float)simd_register3._12_4_;
      
      batch_simd_data2 = simd_register10;
      
      // 计算混合属性差值
      simd_register6._0_4_ = simd_register23._0_4_ - vertex_coord_int9;
      simd_register6._4_4_ = simd_register23._4_4_ - vertex_coord_int10;
      simd_register6._8_4_ = simd_register23._8_4_ - vertex_coord_int9;
      simd_register6._12_4_ = simd_register23._12_4_ - vertex_coord_int10;
      
      // 执行SIMD混合操作
      batch_data_extended = blendvps(simd_register7, batch_data_extended, simd_register4);
      
      // 构建辅助数据
      simd_register1._4_4_ = vertex_attribute6;
      simd_register1._0_4_ = vertex_attribute5;
      simd_register1._8_4_ = vertex_attribute7;
      simd_register1._12_4_ = vertex_attribute8;
      
      simd_register10 = blendvps(batch_data_extended, simd_register1, simd_register4);
      vertex_attribute5 = simd_register10._0_4_;
      vertex_attribute6 = simd_register10._4_4_;
      vertex_attribute7 = simd_register10._8_4_;
      vertex_attribute8 = simd_register10._12_4_;
      
      // 计算第二组差值
      simd_register12._0_4_ = simd_register8._0_4_ - vertex_coord_int1;
      simd_register12._4_4_ = simd_register8._4_4_ - vertex_coord_int2;
      simd_register12._8_4_ = simd_register8._8_4_ - vertex_coord_int3;
      simd_register12._12_4_ = simd_register8._12_4_ - vertex_coord_int4;
      
      // 计算第三组差值
      simd_register9._0_4_ = vertex_coord_int1 - simd_register18._0_4_;
      simd_register9._4_4_ = vertex_coord_int2 - simd_register18._4_4_;
      simd_register9._8_4_ = vertex_coord_int3 - simd_register18._8_4_;
      simd_register9._12_4_ = vertex_coord_int4 - simd_register18._12_4_;
      
      // 执行SIMD乘法操作
      simd_register11 = pmulld(simd_register6, simd_register12);
      
      // 计算最终差值
      simd_register5._0_4_ = vertex_coord_int9 - simd_register18._0_4_;
      simd_register5._4_4_ = vertex_coord_int10 - simd_register18._4_4_;
      simd_register5._8_4_ = vertex_coord_int9 - simd_register18._8_4_;
      simd_register5._12_4_ = vertex_coord_int10 - simd_register18._12_4_;
      
      // 执行SIMD乘法操作
      simd_register10 = pmulld(simd_register5, simd_register9);
      
      // 计算最终结果
      vertex_coord_int11 = simd_register11._0_4_ - simd_register10._0_4_;
      vertex_coord_int12 = simd_register11._4_4_ - simd_register10._4_4_;
      vertex_coord_int11 = simd_register11._8_4_ - simd_register10._8_4_;
      vertex_coord_int12 = simd_register11._12_4_ - simd_register10._12_4_;
      
      // 更新掩码
      simd_register3._0_4_ = -(uint)(0 < vertex_coord_int11);
      simd_register3._4_4_ = -(uint)(0 < vertex_coord_int12);
      simd_register3._8_4_ = -(uint)(0 < vertex_coord_int11);
      simd_register3._12_4_ = -(uint)(0 < vertex_coord_int12);
    }
    
    // 构建最终结果数据
    simd_register14._0_4_ = (float)vertex_coord_int11;
    simd_register14._4_4_ = (float)vertex_coord_int12;
    simd_register14._8_4_ = (float)vertex_coord_int11;
    simd_register14._12_4_ = (float)vertex_coord_int12;
    
    // 执行SIMD倒数操作
    simd_register10 = rcpps(simd_register9, simd_register14);
    
    // 计算顶点属性边界
    vertex_coord_int11 = simd_register26._0_4_;
    vertex_coord_uint1 = (uint)(vertex_coord_int1 < vertex_coord_int11) * vertex_coord_int11 | (uint)(vertex_coord_int1 >= vertex_coord_int11) * vertex_coord_int1;
    
    vertex_coord_int12 = simd_register26._4_4_;
    vertex_coord_uint2 = (uint)(vertex_coord_int2 < vertex_coord_int12) * vertex_coord_int12 | (uint)(vertex_coord_int2 >= vertex_coord_int12) * vertex_coord_int2;
    
    vertex_coord_int11 = simd_register26._8_4_;
    vertex_coord_uint3 = (uint)(vertex_coord_int3 < vertex_coord_int11) * vertex_coord_int11 | (uint)(vertex_coord_int3 >= vertex_coord_int11) * vertex_coord_int3;
    
    vertex_coord_int12 = simd_register26._12_4_;
    vertex_coord_uint4 = (uint)(vertex_coord_int4 < vertex_coord_int12) * vertex_coord_int12 | (uint)(vertex_coord_int4 >= vertex_coord_int12) * vertex_coord_int4;
    
    // 计算反向边界
    temp_float1 = (uint)(vertex_coord_int11 < vertex_coord_int1) * vertex_coord_int11 | (uint)(vertex_coord_int11 >= vertex_coord_int1) * vertex_coord_int1;
    vertex_index1 = (uint)(vertex_coord_int12 < vertex_coord_int2) * vertex_coord_int12 | (uint)(vertex_coord_int12 >= vertex_coord_int2) * vertex_coord_int2;
    vertex_index2 = (uint)(vertex_coord_int11 < vertex_coord_int3) * vertex_coord_int11 | (uint)(vertex_coord_int11 >= vertex_coord_int3) * vertex_coord_int3;
    vertex_index3 = (uint)(vertex_coord_int12 < vertex_coord_int4) * vertex_coord_int12 | (uint)(vertex_coord_int12 >= vertex_coord_int4) * vertex_coord_int4;
    
    // 获取纹理坐标属性
    vertex_coord_int11 = simd_register8._0_4_;
    temp_float1 = (uint)(vertex_coord_int11 < (int)temp_float1) * vertex_coord_int11 | (vertex_coord_int11 >= (int)temp_float1) * temp_float1;
    
    vertex_coord_int12 = simd_register8._4_4_;
    vertex_index1 = (uint)(vertex_coord_int12 < (int)vertex_index1) * vertex_coord_int12 | (vertex_coord_int12 >= (int)vertex_index1) * vertex_index1;
    
    vertex_coord_int11 = simd_register8._8_4_;
    vertex_index2 = (uint)(vertex_coord_int11 < (int)vertex_index2) * vertex_coord_int11 | (vertex_coord_int11 >= (int)vertex_index2) * vertex_index2;
    
    vertex_coord_int12 = simd_register8._12_4_;
    vertex_index3 = (uint)(vertex_coord_int12 < (int)vertex_index3) * vertex_coord_int12 | (vertex_coord_int12 >= (int)vertex_index3) * vertex_index3;
    
    // 填充顶点索引数组
    batch_indices[0] = (-1 < (int)temp_float1) * temp_float1;
    batch_indices[1] = (-1 < (int)vertex_index1) * vertex_index1;
    batch_indices[2] = (-1 < (int)vertex_index2) * vertex_index2;
    batch_indices[3] = (-1 < (int)vertex_index3) * vertex_index3;
    
    // 获取主要顶点属性
    vertex_coord_int1 = simd_register23._0_4_;
    vertex_coord_uint1 = (uint)(vertex_coord_int9 < vertex_coord_int1) * vertex_coord_int1 | (uint)(vertex_coord_int9 >= vertex_coord_int1) * vertex_coord_int9;
    
    vertex_coord_int2 = simd_register23._4_4_;
    vertex_coord_uint2 = (uint)(vertex_coord_int10 < vertex_coord_int2) * vertex_coord_int2 | (uint)(vertex_coord_int10 >= vertex_coord_int2) * vertex_coord_int10;
    
    vertex_coord_int3 = simd_register23._8_4_;
    vertex_coord_uint3 = (uint)(vertex_coord_int9 < vertex_coord_int3) * vertex_coord_int3 | (uint)(vertex_coord_int9 >= vertex_coord_int3) * vertex_coord_int9;
    
    vertex_coord_int4 = simd_register23._12_4_;
    vertex_coord_uint4 = (uint)(vertex_coord_int10 < vertex_coord_int4) * vertex_coord_int4 | (uint)(vertex_coord_int10 >= vertex_coord_int4) * vertex_coord_int10;
    
    // 计算反向属性边界
    temp_float1 = (uint)(vertex_coord_int1 < vertex_coord_int9) * vertex_coord_int1 | (uint)(vertex_coord_int1 >= vertex_coord_int9) * vertex_coord_int9;
    vertex_index1 = (uint)(vertex_coord_int2 < vertex_coord_int10) * vertex_coord_int2 | (uint)(vertex_coord_int2 >= vertex_coord_int10) * vertex_coord_int10;
    vertex_index2 = (uint)(vertex_coord_int3 < vertex_coord_int9) * vertex_coord_int3 | (uint)(vertex_coord_int3 >= vertex_coord_int9) * vertex_coord_int9;
    vertex_index3 = (uint)(vertex_coord_int4 < vertex_coord_int10) * vertex_coord_int4 | (uint)(vertex_coord_int4 >= vertex_coord_int10) * vertex_coord_int10;
    
    // 计算插值因子
    interpolated_values[0] = (vertex_attribute5 - (float)vertex_attribute_pair1) * simd_register10._0_4_;
    interpolated_values[1] = (vertex_attribute6 - vertex_attribute_pair1._4_4_) * simd_register10._4_4_;
    interpolated_values[2] = (vertex_attribute7 - texture_coord_x1) * simd_register10._8_4_;
    interpolated_values[3] = (vertex_attribute8 - texture_coord_y1) * simd_register10._12_4_;
    
    // 获取最终属性值
    vertex_coord_int9 = simd_register18._0_4_;
    vertex_coord_uint1 = (uint)((int)vertex_coord_uint1 < vertex_coord_int9) * vertex_coord_int9 | ((int)vertex_coord_uint1 >= vertex_coord_int9) * vertex_coord_uint1;
    
    vertex_coord_int10 = simd_register18._4_4_;
    vertex_coord_uint2 = (uint)((int)vertex_coord_uint2 < vertex_coord_int10) * vertex_coord_int10 | ((int)vertex_coord_uint2 >= vertex_coord_int10) * vertex_coord_uint2;
    
    vertex_coord_int9 = simd_register18._8_4_;
    vertex_coord_uint3 = (uint)((int)vertex_coord_uint3 < vertex_coord_int9) * vertex_coord_int9 | ((int)vertex_coord_uint3 >= vertex_coord_int9) * vertex_coord_uint3;
    
    vertex_coord_int10 = simd_register18._12_4_;
    vertex_coord_uint4 = (uint)((int)vertex_coord_uint4 < vertex_coord_int10) * vertex_coord_int10 | ((int)vertex_coord_uint4 >= vertex_coord_int10) * vertex_coord_uint4;
    
    // 计算第二组插值因子
    vertex_attributes[0] = (batch_data_extended._0_4_ - (float)vertex_attribute_pair1) * simd_register10._0_4_;
    vertex_attributes[1] = (batch_data_extended._4_4_ - vertex_attribute_pair1._4_4_) * simd_register10._4_4_;
    vertex_attributes[2] = (batch_data_extended._8_4_ - texture_coord_x1) * simd_register10._8_4_;
    vertex_attributes[3] = (batch_data_extended._12_4_ - texture_coord_y1) * simd_register10._12_4_;
    
    // 应用纹理坐标阈值
    batch_sizes[0] = (uint)(RENDERING_TEXTURE_COORDINATE_THRESHOLD < (int)vertex_coord_uint1) * RENDERING_TEXTURE_COORDINATE_THRESHOLD | (RENDERING_TEXTURE_COORDINATE_THRESHOLD >= (int)vertex_coord_uint1) * vertex_coord_uint1;
    batch_sizes[1] = (uint)(RENDERING_TEXTURE_COORDINATE_THRESHOLD < (int)vertex_coord_uint2) * RENDERING_TEXTURE_COORDINATE_THRESHOLD | (RENDERING_TEXTURE_COORDINATE_THRESHOLD >= (int)vertex_coord_uint2) * vertex_coord_uint2;
    batch_sizes[2] = (uint)(RENDERING_TEXTURE_COORDINATE_THRESHOLD < (int)vertex_coord_uint3) * RENDERING_TEXTURE_COORDINATE_THRESHOLD | (RENDERING_TEXTURE_COORDINATE_THRESHOLD >= (int)vertex_coord_uint3) * vertex_coord_uint3;
    batch_sizes[3] = (uint)(RENDERING_TEXTURE_COORDINATE_THRESHOLD < (int)vertex_coord_uint4) * RENDERING_TEXTURE_COORDINATE_THRESHOLD | (RENDERING_TEXTURE_COORDINATE_THRESHOLD >= (int)vertex_coord_uint4) * vertex_coord_uint4;
    
    // 计算最终索引值
    temp_float1 = (uint)(vertex_coord_int9 < (int)temp_float1) * vertex_coord_int9 | (vertex_coord_int9 >= (int)temp_float1) * temp_float1;
    vertex_index1 = (uint)(vertex_coord_int10 < (int)vertex_index1) * vertex_coord_int10 | (vertex_coord_int10 >= (int)vertex_index1) * vertex_index1;
    vertex_index2 = (uint)(vertex_coord_int9 < (int)vertex_index2) * vertex_coord_int9 | (vertex_coord_int9 >= (int)vertex_index2) * vertex_index2;
    vertex_index3 = (uint)(vertex_coord_int10 < (int)vertex_index3) * vertex_coord_int10 | (vertex_coord_int10 >= (int)vertex_index3) * vertex_index3;
    
    // 填充计数器数组
    batch_counters[0] = (-1 < (int)temp_float1) * temp_float1;
    batch_counters[1] = (-1 < (int)vertex_index1) * vertex_index1;
    batch_counters[2] = (-1 < (int)vertex_index2) * vertex_index2;
    batch_counters[3] = (-1 < (int)vertex_index3) * vertex_index3;
    
    // 构建比较掩码
    simd_register5._0_4_ = -(uint)(batch_counters[0] < (int)batch_sizes[0]);
    simd_register5._4_4_ = -(uint)(batch_counters[1] < (int)batch_sizes[1]);
    simd_register5._8_4_ = -(uint)(batch_counters[2] < (int)batch_sizes[2]);
    simd_register5._12_4_ = -(uint)(batch_counters[3] < (int)batch_sizes[3]);
    
    // 计算顶点属性边界
    temp_float1 = (uint)((int)vertex_coord_uint1 < vertex_coord_int11) * vertex_coord_int11 | ((int)vertex_coord_uint1 >= vertex_coord_int11) * vertex_coord_uint1;
    vertex_index1 = (uint)((int)vertex_coord_uint2 < vertex_coord_int12) * vertex_coord_int12 | ((int)vertex_coord_uint2 >= vertex_coord_int12) * vertex_coord_uint2;
    vertex_index2 = (uint)((int)vertex_coord_uint3 < vertex_coord_int11) * vertex_coord_int11 | ((int)vertex_coord_uint3 >= vertex_coord_int11) * vertex_coord_uint3;
    vertex_index3 = (uint)((int)vertex_coord_uint4 < vertex_coord_int12) * vertex_coord_int12 | ((int)vertex_coord_uint4 >= vertex_coord_int12) * vertex_coord_uint4;
    
    // 应用顶点属性阈值
    batch_limits[0] = (uint)(RENDERING_VERTEX_ATTRIBUTE_THRESHOLD < (int)temp_float1) * RENDERING_VERTEX_ATTRIBUTE_THRESHOLD | (RENDERING_VERTEX_ATTRIBUTE_THRESHOLD >= (int)temp_float1) * temp_float1;
    batch_limits[1] = (uint)(RENDERING_VERTEX_ATTRIBUTE_THRESHOLD < (int)vertex_index1) * RENDERING_VERTEX_ATTRIBUTE_THRESHOLD | (RENDERING_VERTEX_ATTRIBUTE_THRESHOLD >= (int)vertex_index1) * vertex_index1;
    batch_limits[2] = (uint)(RENDERING_VERTEX_ATTRIBUTE_THRESHOLD < (int)vertex_index2) * RENDERING_VERTEX_ATTRIBUTE_THRESHOLD | (RENDERING_VERTEX_ATTRIBUTE_THRESHOLD >= (int)vertex_index2) * vertex_index2;
    batch_limits[3] = (uint)(RENDERING_VERTEX_ATTRIBUTE_THRESHOLD < (int)vertex_index3) * RENDERING_VERTEX_ATTRIBUTE_THRESHOLD | (RENDERING_VERTEX_ATTRIBUTE_THRESHOLD >= (int)vertex_index3) * vertex_index3;
    
    // 构建顶点属性掩码
    simd_register6._4_4_ = -(uint)(batch_indices[1] < (int)batch_limits[1]);
    simd_register6._0_4_ = -(uint)(batch_indices[0] < (int)batch_limits[0]);
    simd_register6._8_4_ = -(uint)(batch_indices[2] < (int)batch_limits[2]);
    simd_register6._12_4_ = -(uint)(batch_indices[3] < (int)batch_limits[3]);
    
    // 合并所有掩码
    simd_register6 = simd_register5 & simd_register3 & simd_register6;
    
    // 构建最终验证掩码
    simd_register15._0_4_ =
         -(uint)(0.0 < (float)vertex_attribute_pair2 && 0.0 < vertex_attribute15) &
         -(uint)(0.0 < (float)texture_coord_pair1) & simd_register6._0_4_;
    simd_register15._4_4_ =
         -(uint)(0.0 < vertex_attribute_pair2._4_4_ && 0.0 < temp_float2) &
         -(uint)(0.0 < texture_coord_pair1._4_4_) & simd_register6._4_4_;
    simd_register15._8_4_ =
         -(uint)(0.0 < vertex_attribute_interpolated1 && 0.0 < vertex_attribute_interpolated2) & 
         -(uint)(0.0 < vertex_attribute_base1) & simd_register6._8_4_;
    simd_register15._12_4_ =
         -(uint)(0.0 < interpolation_factor4 && 0.0 < interpolation_factor1) & 
         -(uint)(0.0 < interpolation_factor2) & simd_register6._12_4_;
    
    // 执行SIMD掩码提取
    temp_float1 = movmskps((int)texture_offset2, simd_register15);
    temp_float1 = temp_float1 & texture_coord_count;
    
    // 处理有效的纹理坐标
    if (temp_float1 != 0) {
      do {
        vertex_coord_int11 = 0;
        if (temp_float1 != 0) {
          // 查找第一个有效位
          for (; (temp_float1 >> vertex_coord_int11 & 1) == 0; vertex_coord_int11 = vertex_coord_int11 + 1) {
          }
        }
        
        // 清除已处理的位
        temp_float1 = temp_float1 & temp_float1 - 1;
        rendering_context = (longlong)vertex_coord_int11;
        
        // 计算批处理大小
        batch_size_remaining = 0;
        if (0 < batch_counters[rendering_context] / RENDERING_COORDINATE_DIVISOR_50) {
          batch_size_remaining = batch_counters[rendering_context] / RENDERING_COORDINATE_DIVISOR_50;
        }
        
        vertex_coord_int12 = 0;
        if (0 < batch_indices[rendering_context] / RENDERING_COORDINATE_DIVISOR_60) {
          vertex_coord_int12 = batch_indices[rendering_context] / RENDERING_COORDINATE_DIVISOR_60;
        }
        
        batch_end_offset = (longlong)vertex_coord_int12;
        
        // 计算批处理范围
        vertex_coord_int12 = 7;
        if ((int)batch_sizes[rendering_context] / RENDERING_COORDINATE_DIVISOR_50 < 7) {
          vertex_coord_int12 = (int)batch_sizes[rendering_context] / RENDERING_COORDINATE_DIVISOR_50;
        }
        
        texture_offset1 = (longlong)vertex_coord_int12;
        batch_data_extended._0_8_ = texture_offset1;
        
        vertex_coord_int12 = 3;
        if ((int)batch_limits[rendering_context] / RENDERING_COORDINATE_DIVISOR_60 < 3) {
          vertex_coord_int12 = (int)batch_limits[rendering_context] / RENDERING_COORDINATE_DIVISOR_60;
        }
        
        texture_coord_pair1 = (longlong)vertex_coord_int12;
        
        // 在批处理范围内执行
        if (batch_end_offset <= texture_coord_pair1) {
          texture_index = (ulonglong)(int)batch_size_remaining;
          vertex_coord_int12 = vertex_coord_int12 << 0x11;
          batch_data_buffer = (int *)(input_data_offset + (texture_index + 2 + batch_end_offset * 8) * 4);
          texture_index = texture_index;
          
          do {
            vertex_coord_int11 = (int)texture_index;
            if ((longlong)texture_index <= texture_offset1) {
              texture_index = texture_index;
              if (3 < (longlong)((texture_offset1 - texture_index) + 1)) {
                // 获取纹理数据
                texture_data1 = *(undefined4 *)(batch_simd_data2 + rendering_context * 4);
                texture_data2 = *(undefined4 *)(batch_simd_data1 + rendering_context * 4);
                vertex_attribute23 = texture_coords[rendering_context + -4];
                vertex_attribute19 = texture_coords[rendering_context];
                vertex_attribute27 = interpolated_values[rendering_context];
                vertex_attribute4 = vertex_attributes[rendering_context];
                
                // 计算循环参数
                texture_offset2 = ((texture_offset1 - texture_index) - 3 >> 2) + 1;
                vertex_coord_int11 = vertex_coord_int11 << 0xe;
                texture_index = texture_offset2 * 4 + texture_index;
                vertex_coord_int11 = vertex_coord_int11 + (int)texture_offset2 * 4;
                
                // 设置批处理指针
                batch_counter_ptr = batch_data_buffer;
                
                // 批处理循环
                do {
                  vertex_coord_int12 = vertex_coord_int11 + 0xc000;
                  texture_offset3 = (longlong)(vertex_coord_int11 + vertex_coord_int12 + batch_counter_ptr[-2]);
                  
                  // 写入渲染数据
                  *(undefined4 *)(input_render_context + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = texture_data1;
                  *(undefined4 *)(input_render_context + 4 + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = texture_data2;
                  *(float *)(input_render_context + 8 + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = vertex_attribute23;
                  *(float *)(input_render_context + 0xc + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = vertex_attribute19;
                  *(float *)(input_render_context + 0x10 + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = vertex_attribute27;
                  *(float *)(input_render_context + 0x14 + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = vertex_attribute4;
                  
                  // 更新计数器
                  batch_counter_ptr[-2] = batch_counter_ptr[-2] + 1;
                  vertex_coord_int9 = batch_counter_ptr[-1] + vertex_coord_int11;
                  vertex_coord_int11 = vertex_coord_int11 + RENDERING_BATCH_INCREMENT;
                  
                  // 写入第二组数据
                  texture_offset3 = (longlong)(vertex_coord_int9 + vertex_coord_int12) + RENDERING_BATCH_ALIGNMENT;
                  *(undefined4 *)(input_render_context + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = texture_data1;
                  *(undefined4 *)(input_render_context + 4 + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = texture_data2;
                  *(float *)(input_render_context + 8 + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = vertex_attribute23;
                  *(float *)(input_render_context + 0xc + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = vertex_attribute19;
                  *(float *)(input_render_context + 0x10 + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = vertex_attribute27;
                  *(float *)(input_render_context + 0x14 + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = vertex_attribute4;
                  
                  batch_counter_ptr[-1] = batch_counter_ptr[-1] + 1;
                  texture_offset3 = (longlong)(*batch_counter_ptr + vertex_coord_int12 + vertex_coord_int12) + -RENDERING_BATCH_ALIGNMENT;
                  
                  // 写入第三组数据
                  *(undefined4 *)(input_render_context + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = texture_data1;
                  *(undefined4 *)(input_render_context + 4 + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = texture_data2;
                  *(float *)(input_render_context + 8 + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = vertex_attribute23;
                  *(float *)(input_render_context + 0xc + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = vertex_attribute19;
                  *(float *)(input_render_context + 0x10 + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = vertex_attribute27;
                  *(float *)(input_render_context + 0x14 + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = vertex_attribute4;
                  
                  *batch_counter_ptr = *batch_counter_ptr + 1;
                  texture_offset3 = (longlong)(batch_counter_ptr[1] + vertex_coord_int12 + vertex_coord_int12);
                  
                  // 写入第四组数据
                  *(undefined4 *)(input_render_context + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = texture_data1;
                  *(undefined4 *)(input_render_context + 4 + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = texture_data2;
                  *(float *)(input_render_context + 8 + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = vertex_attribute23;
                  *(float *)(input_render_context + 0xc + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = vertex_attribute19;
                  *(float *)(input_render_context + 0x10 + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = vertex_attribute27;
                  *(float *)(input_render_context + 0x14 + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = vertex_attribute4;
                  
                  batch_counter_ptr[1] = batch_counter_ptr[1] + 1;
                  texture_offset2 = texture_offset2 + -1;
                  batch_counter_ptr = batch_counter_ptr + 4;
                  vertex_attribute_pair1 = texture_index;
                } while (texture_offset2 != 0);
              }
              
              // 处理剩余的纹理坐标
              if ((longlong)texture_index <= texture_offset1) {
                texture_data1 = *(undefined4 *)(batch_simd_data2 + rendering_context * 4);
                texture_data2 = *(undefined4 *)(batch_simd_data1 + rendering_context * 4);
                vertex_attribute23 = texture_coords[rendering_context + -4];
                vertex_attribute19 = texture_coords[rendering_context];
                vertex_attribute27 = interpolated_values[rendering_context];
                vertex_attribute4 = vertex_attributes[rendering_context];
                
                vertex_coord_int11 = vertex_coord_int11 << 0xe;
                texture_offset2 = (texture_offset1 - texture_index) + 1;
                batch_counter_ptr = (int *)(input_data_offset + (texture_index + batch_end_offset * 8) * 4);
                
                do {
                  vertex_coord_int11 = *batch_counter_ptr + vertex_coord_int11;
                  vertex_coord_int11 = vertex_coord_int11 + RENDERING_BATCH_ALIGNMENT;
                  texture_offset3 = (longlong)(vertex_coord_int11 + vertex_coord_int12);
                  
                  // 写入最终渲染数据
                  *(float *)(input_render_context + 0xc + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = vertex_attribute19;
                  *(float *)(input_render_context + 0x10 + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = vertex_attribute27;
                  *(float *)(input_render_context + 0x14 + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = vertex_attribute4;
                  *(undefined4 *)(input_render_context + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = texture_data1;
                  *(undefined4 *)(input_render_context + 4 + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = texture_data2;
                  *(float *)(input_render_context + 8 + texture_offset3 * RENDERING_VERTEX_ATTRIBUTE_SIZE) = vertex_attribute23;
                  
                  *batch_counter_ptr = *batch_counter_ptr + 1;
                  texture_offset2 = texture_offset2 + -1;
                  batch_counter_ptr = batch_counter_ptr + 1;
                } while (texture_offset2 != 0);
              }
            }
            
            // 更新纹理索引
            texture_index = (ulonglong)batch_size_remaining;
            batch_end_offset = batch_end_offset + 1;
            batch_data_buffer = batch_data_buffer + 8;
            vertex_coord_int12 = vertex_coord_int12 + RENDERING_BATCH_OFFSET_MULTIPLIER;
          } while (batch_end_offset <= texture_coord_pair1);
        }
      } while (temp_float1 != 0);
      
      // 重置批处理控制标志
      batch_control_flag = 0;
      texture_coord_count = batch_size_processed;
    }
    
    // 更新批处理大小
    batch_size_next = batch_size_next - 4;
    temp_float1 = batch_size_initial;
  } while (batch_size_initial <= input_texture_count);
  
  // 设置最终渲染上下文
  batch_output_offset = param_1;
  
  // 调用渲染系统清理函数
  FUN_1808fc050(stack_cookie ^ (ulonglong)&batch_size_remaining);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address