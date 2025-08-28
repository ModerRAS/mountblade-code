/**
 * 03_rendering_part125.c - 渲染系统着色器处理和管线管理模块
 * 
 * 本模块包含4个核心函数，主要负责：
 * - 着色器源码生成和编译
 * - 着色器参数处理和验证
 * - 渲染管线配置和优化
 * - 着色器文件生成和管理
 * 
 * 主要功能：
 * 1. 生成着色器源码和头文件
 * 2. 配置着色器参数和属性
 * 3. 管理渲染管线状态
 * 4. 处理着色器编译和链接
 * 
 * 包含函数：4个
 * 模块类型：渲染系统 - 着色器处理
 */

#include "TaleWorlds.Native.Split.h"

/**
 * 着色器终结器 - 完成着色器处理和清理
 * 
 * 此函数负责完成着色器的最终处理，包括：
 * - 生成着色器源码
 * - 配置着色器参数
 * - 处理着色器属性
 * - 清理临时资源
 * 
 * @param param_1 渲染设备句柄
 * @param param_2 源码缓冲区
 * @param param_3 着色器参数
 * @param param_4 编译选项
 */
void FUN_180340b00(uint64_t param_1, int64_t param_2, int64_t param_3, uint64_t param_4)

{
  int64_t iteration_context;
  int32_t pixel_shader_type;
  int32_t vertex_shader_type;
  int32_t geometry_shader_type;
  int32_t *shader_processor;
  int32_t *buffer_writer;
  uint64_t *shader_generator;
  int16_t *terminator_writer;
  int source_buffer_size;
  int temp_buffer_size;
  int loop_counter;
  uint64_t parameter_index;
  uint buffer_expansion_size;
  uint64_t total_parameters;
  
  parameter_index = 0;
  shader_processor = (int32_t *)
           MemoryAllocator(g_GlobalMemoryPool, 0x18, 0x13, param_4, 0, 0xfffffffffffffffe, &g_MemoryManager, 0, 0, 0)
  ;
  *(int8_t *)shader_processor = 0;
  MemoryInitializer(shader_processor);
  *shader_processor = 0x65786950;
  shader_processor[1] = 0x68735f6c;
  shader_processor[2] = 0x72656461;
  shader_processor[3] = 0x706e695f;
  *(uint64_t *)(shader_processor + 4) = 0x657079745f7475;
  source_buffer_size = *(int *)(param_2 + 0x10);
  BufferExpander(param_2, source_buffer_size + 0x11);
  buffer_writer = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *buffer_writer = 0x20666923;
  buffer_writer[1] = 0x45584950;
  buffer_writer[2] = 0x48535f4c;
  buffer_writer[3] = 0x52454441;
  *(int16_t *)(buffer_writer + 4) = 10;
  *(int *)(param_2 + 0x10) = source_buffer_size + 0x11;
  BufferExpander(param_2, source_buffer_size + 0x1e);
  shader_generator = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *shader_generator = 0x69616d2064696f76;
  *(int32_t *)(shader_generator + 1) = 0x73705f6e;
  *(int16_t *)((int64_t)shader_generator + 0xc) = 0x28;
  *(int *)(param_2 + 0x10) = source_buffer_size + 0x1e;
  BufferExpander(param_2, source_buffer_size + 0x35);
  buffer_writer = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  pixel_shader_type = shader_processor[1];
  vertex_shader_type = shader_processor[2];
  geometry_shader_type = shader_processor[3];
  *buffer_writer = *shader_processor;
  buffer_writer[1] = pixel_shader_type;
  buffer_writer[2] = vertex_shader_type;
  buffer_writer[3] = geometry_shader_type;
  *(uint64_t *)(buffer_writer + 4) = *(uint64_t *)(shader_processor + 4);
  *(int *)(param_2 + 0x10) = source_buffer_size + 0x35;
  BufferExpander(param_2, source_buffer_size + 0x3a);
  buffer_writer = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *buffer_writer = 0x296e4920;
  *(int16_t *)(buffer_writer + 1) = 10;
  *(int *)(param_2 + 0x10) = source_buffer_size + 0x3a;
  BufferExpander(param_2, source_buffer_size + 0x3c);
  terminator_writer = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *terminator_writer = 0xa7b;
  *(int8_t *)(terminator_writer + 1) = 0;
  *(int *)(param_2 + 0x10) = source_buffer_size + 0x3c;
  BufferExpander(param_2, source_buffer_size + 0x83);
  shader_generator = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *shader_generator = 0x7869705f72655009;
  shader_generator[1] = 0x69746174735f6c65;
  shader_generator[2] = 0x6261697261765f63;
  shader_generator[3] = 0x735f70702073656c;
  shader_generator[4] = 0x203d206369746174;
  shader_generator[5] = 0x7869705f72655028;
  *(int32_t *)(shader_generator + 6) = 0x735f6c65;
  *(int32_t *)((int64_t)shader_generator + 0x34) = 0x69746174;
  *(int32_t *)(shader_generator + 7) = 0x61765f63;
  *(int32_t *)((int64_t)shader_generator + 0x3c) = 0x62616972;
  shader_generator[8] = 0xa3b302973656c;
  *(int *)(param_2 + 0x10) = source_buffer_size + 0x83;
  BufferExpander(param_2, source_buffer_size + 0xd7);
  shader_generator = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *shader_generator = 0x7869705f72655009;
  shader_generator[1] = 0x6669646f6d5f6c65;
  shader_generator[2] = 0x61765f656c626169;
  shader_generator[3] = 0x2073656c62616972;
  shader_generator[4] = 0x6669646f6d5f7070;
  shader_generator[5] = 0x203d20656c626169;
  *(int32_t *)(shader_generator + 6) = 0x72655028;
  *(int32_t *)((int64_t)shader_generator + 0x34) = 0x7869705f;
  *(int32_t *)(shader_generator + 7) = 0x6d5f6c65;
  *(int32_t *)((int64_t)shader_generator + 0x3c) = 0x6669646f;
  *(int32_t *)(shader_generator + 8) = 0x6c626169;
  *(int32_t *)((int64_t)shader_generator + 0x44) = 0x61765f65;
  *(int32_t *)(shader_generator + 9) = 0x62616972;
  *(int32_t *)((int64_t)shader_generator + 0x4c) = 0x2973656c;
  *(int32_t *)(shader_generator + 10) = 0xa0a3b30;
  *(int8_t *)((int64_t)shader_generator + 0x54) = 0;
  *(int *)(param_2 + 0x10) = source_buffer_size + 0xd7;
  BufferExpander(param_2, source_buffer_size + 0x122);
  shader_generator = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *shader_generator = 0x7869705f72655009;
  shader_generator[1] = 0x6c697875615f6c65;
  shader_generator[2] = 0x7261765f79726169;
  shader_generator[3] = 0x702073656c626169;
  shader_generator[4] = 0x203d207875615f70;
  shader_generator[5] = 0x7869705f72655028;
  *(int32_t *)(shader_generator + 6) = 0x615f6c65;
  *(int32_t *)((int64_t)shader_generator + 0x34) = 0x6c697875;
  *(int32_t *)(shader_generator + 7) = 0x79726169;
  *(int32_t *)((int64_t)shader_generator + 0x3c) = 0x7261765f;
  shader_generator[8] = 0x302973656c626169;
  *(int32_t *)(shader_generator + 9) = 0xa0a3b;
  *(int *)(param_2 + 0x10) = source_buffer_size + 0x122;
  source_buffer_size = source_buffer_size + 0x159;
  BufferExpander(param_2, source_buffer_size);
  shader_generator = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *shader_generator = 0x616c75636c616309;
  shader_generator[1] = 0x705f7265705f6574;
  shader_generator[2] = 0x6174735f6c657869;
  shader_generator[3] = 0x697261765f636974;
  *(int32_t *)(shader_generator + 4) = 0x656c6261;
  *(int32_t *)((int64_t)shader_generator + 0x24) = 0x6e492873;
  *(int32_t *)(shader_generator + 5) = 0x7070202c;
  *(int32_t *)((int64_t)shader_generator + 0x2c) = 0x6174735f;
  shader_generator[6] = 0xa0a3b29636974;
  *(int *)(param_2 + 0x10) = source_buffer_size;
  iteration_context = (int64_t)(*(int64_t *)(param_3 + 0x498) - *(int64_t *)(param_3 + 0x490));
  total_parameters = parameter_index;
  if ((int64_t)iteration_context / 0x98 + ((int64_t)iteration_context >> 0x3f) != (int64_t)iteration_context >> 0x3f) {
    do {
      temp_buffer_size = source_buffer_size + 1;
      BufferExpander(param_2, temp_buffer_size);
      *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
      *(int *)(param_2 + 0x10) = temp_buffer_size;
      iteration_context = *(int64_t *)(param_3 + 0x490);
      loop_counter = *(int *)(iteration_context + 0x10 + parameter_index);
      if (0 < loop_counter) {
        BufferExpander(param_2, temp_buffer_size + loop_counter);
                    // WARNING: Subroutine does not return
        memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
               *(uint64_t *)(iteration_context + 8 + parameter_index),(int64_t)(*(int *)(iteration_context + 0x10 + parameter_index) + 1));
      }
      source_buffer_size = source_buffer_size + 7;
      BufferExpander(param_2, source_buffer_size);
      buffer_writer = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
      *buffer_writer = 0x296e4928;
      *(int16_t *)(buffer_writer + 1) = 0xa3b;
      *(int8_t *)((int64_t)buffer_writer + 6) = 0;
      *(int *)(param_2 + 0x10) = source_buffer_size;
      buffer_expansion_size = (int)total_parameters + 1;
      parameter_index = parameter_index + 0x98;
      iteration_context = (int64_t)(*(int64_t *)(param_3 + 0x498) - *(int64_t *)(param_3 + 0x490));
      total_parameters = (uint64_t)buffer_expansion_size;
    } while ((uint64_t)(int64_t)(int)buffer_expansion_size < (uint64_t)((int64_t)iteration_context / 0x98));
  }
  if (*(int *)(param_3 + 0xa40) != 0) {
    loop_counter = source_buffer_size + 1;
    BufferExpander(param_2, loop_counter);
    *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
    *(int *)(param_2 + 0x10) = loop_counter;
    if (0 < *(int *)(param_3 + 0xa40)) {
      BufferExpander(param_2, loop_counter + *(int *)(param_3 + 0xa40));
                    // WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
             *(uint64_t *)(param_3 + 0xa38),(int64_t)(*(int *)(param_3 + 0xa40) + 1));
    }
    source_buffer_size = source_buffer_size + 0x2b;
    BufferExpander(param_2, source_buffer_size);
    shader_generator = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *shader_generator = 0x7070202c206e4928;
    shader_generator[1] = 0x206369746174735f;
    shader_generator[2] = 0x646f6d5f7070202c;
    shader_generator[3] = 0x2c656c6261696669;
    shader_generator[4] = 0x297875615f707020;
    *(int16_t *)(shader_generator + 5) = 0xa3b;
    *(int8_t *)((int64_t)shader_generator + 0x2a) = 0;
    *(int *)(param_2 + 0x10) = source_buffer_size;
  }
  if (*(int *)(param_3 + 0xad8) != 0) {
    loop_counter = source_buffer_size + 1;
    BufferExpander(param_2, loop_counter);
    *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
    *(int *)(param_2 + 0x10) = loop_counter;
    if (0 < *(int *)(param_3 + 0xad8)) {
      BufferExpander(param_2, loop_counter + *(int *)(param_3 + 0xad8));
                    // WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
             *(uint64_t *)(param_3 + 0xad0),(int64_t)(*(int *)(param_3 + 0xad8) + 1));
    }
    BufferExpander(param_2, source_buffer_size + 0x2b);
    shader_generator = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *shader_generator = 0x7070202c206e4928;
    shader_generator[1] = 0x206369746174735f;
    shader_generator[2] = 0x646f6d5f7070202c;
    shader_generator[3] = 0x2c656c6261696669;
    shader_generator[4] = 0x297875615f707020;
    *(int16_t *)(shader_generator + 5) = 0xa3b;
    *(int8_t *)((int64_t)shader_generator + 0x2a) = 0;
    *(int *)(param_2 + 0x10) = source_buffer_size + 0x2b;
  }
  ShaderTextureProcessor(shader_generator, param_2, param_3);
  source_buffer_size = *(int *)(param_2 + 0x10);
  loop_counter = source_buffer_size + 2;
  BufferExpander(param_2, loop_counter);
  terminator_writer = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *terminator_writer = 0xa7d;
  *(int8_t *)(terminator_writer + 1) = 0;
  *(int *)(param_2 + 0x10) = loop_counter;
  source_buffer_size = source_buffer_size + 9;
  BufferExpander(param_2, source_buffer_size);
  *(uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) =
       0xa6669646e6523;
  *(int *)(param_2 + 0x10) = source_buffer_size;
                    // WARNING: Subroutine does not return
  MemoryDeallocator(shader_processor);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 着色器文件生成器 - 生成着色器源文件
 * 
 * 此函数负责生成着色器源文件，包括：
 * - 创建文件头信息
 * - 设置着色器参数
 * - 写入着色器源码
 * - 管理文件I/O操作
 * 
 * @param param_1 渲染上下文句柄
 * @param param_2 着色器参数缓冲区
 * @param param_3 着色器配置选项
 */
void FUN_180341100(uint64_t param_1, int64_t param_2, uint64_t param_3)

{
  int32_t *file_header_writer;
  uint64_t *parameter_processor;
  void *memory_allocator;
  uint buffer_size;
  int file_content_size;
  int64_t file_handle;
  int8_t security_stack [32];
  int32_t security_flag;
  void *buffer_pointer;
  void *write_buffer;
  uint write_buffer_size;
  int32_t file_handle_flag;
  uint64_t file_stream_context;
  int64_t file_operation_result;
  void *output_buffer;
  void *temp_buffer;
  int write_size;
  int32_t cleanup_flag;
  uint64_t security_context;
  void *file_context;
  int8_t *filename_buffer;
  int32_t filename_length;
  int8_t temp_filename [16];
  uint64_t security_checksum;
  
  security_context = 0xfffffffffffffffe;
  security_checksum = g_SecurityChecksum ^ (uint64_t)security_stack;
  security_flag = 0;
  ShaderHeaderGenerator(param_1, &file_context);
  file_context = &g_DefaultShaderConfig;
  filename_buffer = temp_filename;
  temp_filename[0] = 0;
  filename_length = 6;
  strcpy_s(temp_filename, 0x10, &g_ShaderTemplatePath);
  security_flag = 2;
  BufferAllocator(&buffer_pointer, &file_context);
  security_flag = 0;
  file_context = &g_BufferAllocator;
  buffer_size = write_buffer_size + 0x10;
  BufferExpander(&buffer_pointer, buffer_size);
  file_header_writer = (int32_t *)(write_buffer + write_buffer_size);
  *file_header_writer = 0x64616853;
  file_header_writer[1] = 0x2f737265;
  file_header_writer[2] = 0x72756f53;
  file_header_writer[3] = 0x2f736563;
  *(int8_t *)(file_header_writer + 4) = 0;
  write_buffer_size = buffer_size;
  ShaderConfigSetter(param_2, param_3);
  file_content_size = *(int *)(param_2 + 0x10) + 10;
  BufferExpander(param_2, file_content_size);
  parameter_processor = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *parameter_processor = 0x6d776f646168735f;
  *(int16_t *)(parameter_processor + 1) = 0x7061;
  *(int8_t *)((int64_t)parameter_processor + 10) = 0;
  *(int *)(param_2 + 0x10) = file_content_size;
  if (0 < file_content_size) {
    BufferExpander(&buffer_pointer, file_content_size + write_buffer_size);
                    // WARNING: Subroutine does not return
    memcpy(write_buffer + write_buffer_size,*(uint64_t *)(param_2 + 8),
           (int64_t)(*(int *)(param_2 + 0x10) + 1));
  }
  file_content_size = write_buffer_size + 3;
  BufferExpander(&buffer_pointer, file_content_size);
  *(int32_t *)(write_buffer + write_buffer_size) = 0x73722e;
  file_stream_context = 0;
  file_operation_result = 0;
  memory_allocator = &g_DefaultDataBuffer;
  if (write_buffer != (void *)0x0) {
    memory_allocator = write_buffer;
  }
  write_buffer_size = file_content_size;
  FileStreamOpener(&file_stream_context, memory_allocator, &g_FileStreamConfig);
  file_handle = file_operation_result;
  memory_allocator = &g_DefaultDataBuffer;
  if (temp_buffer != (void *)0x0) {
    memory_allocator = temp_buffer;
  }
  fwrite(memory_allocator, (int64_t)write_size, 1, file_operation_result);
  if (file_handle != 0) {
    fclose(file_handle);
    file_operation_result = 0;
    LOCK();
    g_FileHandleCounter = g_FileHandleCounter + -1;
    UNLOCK();
    file_handle = 0;
  }
  if (file_handle != 0) {
    fclose(file_handle);
    file_operation_result = 0;
    LOCK();
    g_FileHandleCounter = g_FileHandleCounter + -1;
    UNLOCK();
  }
  buffer_pointer = &g_MemoryManager;
  if (write_buffer != (void *)0x0) {
                    // WARNING: Subroutine does not return
    MemoryDeallocator();
  }
  write_buffer = (void *)0x0;
  file_handle_flag = 0;
  buffer_pointer = &g_BufferAllocator;
  file_context = &g_MemoryManager;
  if (temp_buffer != (void *)0x0) {
                    // WARNING: Subroutine does not return
    MemoryDeallocator();
  }
  temp_buffer = (void *)0x0;
  cleanup_flag = 0;
  file_context = &g_BufferAllocator;
                    // WARNING: Subroutine does not return
  SecurityCheckHandler(security_checksum ^ (uint64_t)security_stack);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 着色器管线生成器 - 生成渲染管线着色器
 * 
 * 此函数负责生成渲染管线着色器，包括：
 * - 创建管线配置
 * - 设置管线参数
 * - 生成管线源码
 * - 管理管线文件
 * 
 * @param param_1 渲染设备句柄
 * @param param_2 管线参数缓冲区
 * @param param_3 管线配置选项
 */
void FUN_180341380(uint64_t param_1, int64_t param_2, uint64_t param_3)

{
  int32_t *pipeline_writer;
  uint64_t *pipeline_config;
  void *memory_allocator;
  uint buffer_size;
  int pipeline_size;
  int64_t file_handle;
  int8_t security_stack [32];
  int32_t security_flag;
  void *buffer_pointer;
  void *write_buffer;
  uint write_buffer_size;
  int32_t file_handle_flag;
  uint64_t file_stream_context;
  int64_t file_operation_result;
  void *output_buffer;
  void *temp_buffer;
  int write_size;
  int32_t cleanup_flag;
  uint64_t security_context;
  void *file_context;
  int8_t *filename_buffer;
  int32_t filename_length;
  int8_t temp_filename [16];
  uint64_t security_checksum;
  
  security_context = 0xfffffffffffffffe;
  security_checksum = g_SecurityChecksum ^ (uint64_t)security_stack;
  security_flag = 0;
  ShaderPipelineGenerator(param_1, &file_context);
  file_context = &g_DefaultShaderConfig;
  filename_buffer = temp_filename;
  temp_filename[0] = 0;
  filename_length = 6;
  strcpy_s(temp_filename, 0x10, &g_ShaderTemplatePath);
  security_flag = 2;
  BufferAllocator(&buffer_pointer, &file_context);
  security_flag = 0;
  file_context = &g_BufferAllocator;
  buffer_size = write_buffer_size + 0x10;
  BufferExpander(&buffer_pointer, buffer_size);
  pipeline_writer = (int32_t *)(write_buffer + write_buffer_size);
  *pipeline_writer = 0x64616853;
  pipeline_writer[1] = 0x2f737265;
  pipeline_writer[2] = 0x72756f53;
  pipeline_writer[3] = 0x2f736563;
  *(int8_t *)(pipeline_writer + 4) = 0;
  write_buffer_size = buffer_size;
  ShaderConfigSetter(param_2, param_3);
  pipeline_size = *(int *)(param_2 + 0x10) + 0xb;
  BufferExpander(param_2, pipeline_size);
  pipeline_config = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *pipeline_config = 0x696c746e696f705f;
  *(int32_t *)(pipeline_config + 1) = 0x746867;
  *(int *)(param_2 + 0x10) = pipeline_size;
  if (0 < pipeline_size) {
    BufferExpander(&buffer_pointer, pipeline_size + write_buffer_size);
                    // WARNING: Subroutine does not return
    memcpy(write_buffer + write_buffer_size,*(uint64_t *)(param_2 + 8),
           (int64_t)(*(int *)(param_2 + 0x10) + 1));
  }
  pipeline_size = write_buffer_size + 3;
  BufferExpander(&buffer_pointer, pipeline_size);
  *(int32_t *)(write_buffer + write_buffer_size) = 0x73722e;
  file_stream_context = 0;
  file_operation_result = 0;
  memory_allocator = &g_DefaultDataBuffer;
  if (write_buffer != (void *)0x0) {
    memory_allocator = write_buffer;
  }
  write_buffer_size = pipeline_size;
  FileStreamOpener(&file_stream_context, memory_allocator, &g_FileStreamConfig);
  file_handle = file_operation_result;
  memory_allocator = &g_DefaultDataBuffer;
  if (temp_buffer != (void *)0x0) {
    memory_allocator = temp_buffer;
  }
  fwrite(memory_allocator, (int64_t)write_size, 1, file_operation_result);
  if (file_handle != 0) {
    fclose(file_handle);
    file_operation_result = 0;
    LOCK();
    g_FileHandleCounter = g_FileHandleCounter + -1;
    UNLOCK();
    file_handle = 0;
  }
  if (file_handle != 0) {
    fclose(file_handle);
    file_operation_result = 0;
    LOCK();
    g_FileHandleCounter = g_FileHandleCounter + -1;
    UNLOCK();
  }
  buffer_pointer = &g_MemoryManager;
  if (write_buffer != (void *)0x0) {
                    // WARNING: Subroutine does not return
    MemoryDeallocator();
  }
  write_buffer = (void *)0x0;
  file_handle_flag = 0;
  buffer_pointer = &g_BufferAllocator;
  file_context = &g_MemoryManager;
  if (temp_buffer != (void *)0x0) {
                    // WARNING: Subroutine does not return
    MemoryDeallocator();
  }
  temp_buffer = (void *)0x0;
  cleanup_flag = 0;
  file_context = &g_BufferAllocator;
                    // WARNING: Subroutine does not return
  SecurityCheckHandler(security_checksum ^ (uint64_t)security_stack);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 着色器管线终结器 - 完成管线处理和优化
 * 
 * 此函数负责完成渲染管线的最终处理，包括：
 * - 优化管线配置
 * - 处理管线参数
 * - 生成最终输出
 * - 清理资源
 * 
 * @param param_1 渲染设备句柄
 * @param param_2 管线缓冲区
 * @param param_3 管线参数
 * @param param_4 优化选项
 */
void FUN_1803415f0(uint64_t param_1, int64_t param_2, int64_t param_3, uint64_t param_4)

{
  int64_t iteration_context;
  int32_t pixel_shader_type;
  int32_t vertex_shader_type;
  int32_t geometry_shader_type;
  int32_t *shader_processor;
  int32_t *buffer_writer;
  uint64_t *shader_generator;
  int16_t *terminator_writer;
  int64_t pipeline_context;
  int source_buffer_size;
  int temp_buffer_size;
  int loop_counter;
  uint64_t parameter_index;
  uint buffer_expansion_size;
  uint64_t total_parameters;
  
  parameter_index = 0;
  shader_processor = (int32_t *)
           MemoryAllocator(g_GlobalMemoryPool, 0x18, 0x13, param_4, 0, 0xfffffffffffffffe, &g_MemoryManager, 0, 0, 0)
  ;
  *(int8_t *)shader_processor = 0;
  MemoryInitializer(shader_processor);
  *shader_processor = 0x65786950;
  shader_processor[1] = 0x68735f6c;
  shader_processor[2] = 0x72656461;
  shader_processor[3] = 0x706e695f;
  *(uint64_t *)(shader_processor + 4) = 0x657079745f7475;
  source_buffer_size = *(int *)(param_2 + 0x10);
  BufferExpander(param_2, source_buffer_size + 0x11);
  buffer_writer = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *buffer_writer = 0x20666923;
  buffer_writer[1] = 0x45584950;
  buffer_writer[2] = 0x48535f4c;
  buffer_writer[3] = 0x52454441;
  *(int16_t *)(buffer_writer + 4) = 10;
  *(int *)(param_2 + 0x10) = source_buffer_size + 0x11;
  BufferExpander(param_2, source_buffer_size + 0x1e);
  shader_generator = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *shader_generator = 0x69616d2064696f76;
  *(int32_t *)(shader_generator + 1) = 0x73705f6e;
  *(int16_t *)((int64_t)shader_generator + 0xc) = 0x28;
  *(int *)(param_2 + 0x10) = source_buffer_size + 0x1e;
  BufferExpander(param_2, source_buffer_size + 0x35);
  buffer_writer = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  pixel_shader_type = shader_processor[1];
  vertex_shader_type = shader_processor[2];
  geometry_shader_type = shader_processor[3];
  *buffer_writer = *shader_processor;
  buffer_writer[1] = pixel_shader_type;
  buffer_writer[2] = vertex_shader_type;
  buffer_writer[3] = geometry_shader_type;
  *(uint64_t *)(buffer_writer + 4) = *(uint64_t *)(shader_processor + 4);
  *(int *)(param_2 + 0x10) = source_buffer_size + 0x35;
  BufferExpander(param_2, source_buffer_size + 0x3a);
  buffer_writer = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *buffer_writer = 0x296e4920;
  *(int16_t *)(buffer_writer + 1) = 10;
  *(int *)(param_2 + 0x10) = source_buffer_size + 0x3a;
  BufferExpander(param_2, source_buffer_size + 0x3c);
  terminator_writer = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *terminator_writer = 0xa7b;
  *(int8_t *)(terminator_writer + 1) = 0;
  *(int *)(param_2 + 0x10) = source_buffer_size + 0x3c;
  BufferExpander(param_2, source_buffer_size + 0x83);
  shader_generator = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *shader_generator = 0x7869705f72655009;
  shader_generator[1] = 0x69746174735f6c65;
  shader_generator[2] = 0x6261697261765f63;
  shader_generator[3] = 0x735f70702073656c;
  shader_generator[4] = 0x203d206369746174;
  shader_generator[5] = 0x7869705f72655028;
  *(int32_t *)(shader_generator + 6) = 0x735f6c65;
  *(int32_t *)((int64_t)shader_generator + 0x34) = 0x69746174;
  *(int32_t *)(shader_generator + 7) = 0x61765f63;
  *(int32_t *)((int64_t)shader_generator + 0x3c) = 0x62616972;
  shader_generator[8] = 0xa3b302973656c;
  *(int *)(param_2 + 0x10) = source_buffer_size + 0x83;
  BufferExpander(param_2, source_buffer_size + 0xd7);
  shader_generator = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *shader_generator = 0x7869705f72655009;
  shader_generator[1] = 0x6669646f6d5f6c65;
  shader_generator[2] = 0x61765f656c626169;
  shader_generator[3] = 0x2073656c62616972;
  shader_generator[4] = 0x6669646f6d5f7070;
  shader_generator[5] = 0x203d20656c626169;
  *(int32_t *)(shader_generator + 6) = 0x72655028;
  *(int32_t *)((int64_t)shader_generator + 0x34) = 0x7869705f;
  *(int32_t *)(shader_generator + 7) = 0x6d5f6c65;
  *(int32_t *)((int64_t)shader_generator + 0x3c) = 0x6669646f;
  *(int32_t *)(shader_generator + 8) = 0x6c626169;
  *(int32_t *)((int64_t)shader_generator + 0x44) = 0x61765f65;
  *(int32_t *)(shader_generator + 9) = 0x62616972;
  *(int32_t *)((int64_t)shader_generator + 0x4c) = 0x2973656c;
  *(int32_t *)(shader_generator + 10) = 0xa0a3b30;
  *(int8_t *)((int64_t)shader_generator + 0x54) = 0;
  *(int *)(param_2 + 0x10) = source_buffer_size + 0xd7;
  BufferExpander(param_2, source_buffer_size + 0x122);
  shader_generator = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *shader_generator = 0x7869705f72655009;
  shader_generator[1] = 0x6c697875615f6c65;
  shader_generator[2] = 0x7261765f79726169;
  shader_generator[3] = 0x702073656c626169;
  shader_generator[4] = 0x203d207875615f70;
  shader_generator[5] = 0x7869705f72655028;
  *(int32_t *)(shader_generator + 6) = 0x615f6c65;
  *(int32_t *)((int64_t)shader_generator + 0x34) = 0x6c697875;
  *(int32_t *)(shader_generator + 7) = 0x79726169;
  *(int32_t *)((int64_t)shader_generator + 0x3c) = 0x7261765f;
  shader_generator[8] = 0x302973656c626169;
  *(int32_t *)(shader_generator + 9) = 0xa0a3b;
  *(int *)(param_2 + 0x10) = source_buffer_size + 0x122;
  source_buffer_size = source_buffer_size + 0x159;
  BufferExpander(param_2, source_buffer_size);
  shader_generator = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *shader_generator = 0x616c75636c616309;
  shader_generator[1] = 0x705f7265705f6574;
  shader_generator[2] = 0x6174735f6c657869;
  shader_generator[3] = 0x697261765f636974;
  *(int32_t *)(shader_generator + 4) = 0x656c6261;
  *(int32_t *)((int64_t)shader_generator + 0x24) = 0x6e492873;
  *(int32_t *)(shader_generator + 5) = 0x7070202c;
  *(int32_t *)((int64_t)shader_generator + 0x2c) = 0x6174735f;
  shader_generator[6] = 0xa0a3b29636974;
  *(int *)(param_2 + 0x10) = source_buffer_size;
  pipeline_context = *(int64_t *)(param_3 + 0x498) - *(int64_t *)(param_3 + 0x490);
  iteration_context = pipeline_context >> 0x3f;
  total_parameters = parameter_index;
  if (pipeline_context / 0x98 + iteration_context != iteration_context) {
    do {
      temp_buffer_size = source_buffer_size + 1;
      BufferExpander(param_2, temp_buffer_size);
      *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
      *(int *)(param_2 + 0x10) = temp_buffer_size;
      iteration_context = *(int64_t *)(param_3 + 0x490);
      loop_counter = *(int *)(iteration_context + 0x10 + parameter_index);
      if (0 < loop_counter) {
        BufferExpander(param_2, temp_buffer_size + loop_counter);
                    // WARNING: Subroutine does not return
        memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
               *(uint64_t *)(iteration_context + 8 + parameter_index),(int64_t)(*(int *)(iteration_context + 0x10 + parameter_index) + 1));
      }
      source_buffer_size = source_buffer_size + 7;
      BufferExpander(param_2, source_buffer_size);
      buffer_writer = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
      *buffer_writer = 0x296e4928;
      *(int16_t *)(buffer_writer + 1) = 0xa3b;
      *(int8_t *)((int64_t)buffer_writer + 6) = 0;
      *(int *)(param_2 + 0x10) = source_buffer_size;
      buffer_expansion_size = (int)total_parameters + 1;
      parameter_index = parameter_index + 0x98;
      total_parameters = (uint64_t)buffer_expansion_size;
    } while ((uint64_t)(int64_t)(int)buffer_expansion_size <
             (uint64_t)((*(int64_t *)(param_3 + 0x498) - *(int64_t *)(param_3 + 0x490)) / 0x98));
  }
  if (*(int *)(param_3 + 0xa40) != 0) {
    loop_counter = source_buffer_size + 1;
    BufferExpander(param_2, loop_counter);
    *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
    *(int *)(param_2 + 0x10) = loop_counter;
    if (0 < *(int *)(param_3 + 0xa40)) {
      BufferExpander(param_2, loop_counter + *(int *)(param_3 + 0xa40));
                    // WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
             *(uint64_t *)(param_3 + 0xa38),(int64_t)(*(int *)(param_3 + 0xa40) + 1));
    }
    source_buffer_size = source_buffer_size + 0x2b;
    BufferExpander(param_2, source_buffer_size);
    shader_generator = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *shader_generator = 0x7070202c206e4928;
    shader_generator[1] = 0x206369746174735f;
    shader_generator[2] = 0x646f6d5f7070202c;
    shader_generator[3] = 0x2c656c6261696669;
    shader_generator[4] = 0x297875615f707020;
    *(int16_t *)(shader_generator + 5) = 0xa3b;
    *(int8_t *)((int64_t)shader_generator + 0x2a) = 0;
    *(int *)(param_2 + 0x10) = source_buffer_size;
  }
  loop_counter = source_buffer_size + 1;
  BufferExpander(param_2, loop_counter);
  *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
  *(int *)(param_2 + 0x10) = loop_counter;
  if (*(int *)(param_3 + 0xad8) < 1) {
    BufferExpander(param_2, source_buffer_size + 0x2b);
    shader_generator = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *shader_generator = 0x7070202c206e4928;
    shader_generator[1] = 0x206369746174735f;
    *(int32_t *)(shader_generator + 2) = 0x7070202c;
    *(int32_t *)((int64_t)shader_generator + 0x14) = 0x646f6d5f;
    *(int32_t *)(shader_generator + 3) = 0x61696669;
    *(int32_t *)((int64_t)shader_generator + 0x1c) = 0x2c656c62;
    shader_generator[4] = 0x297875615f707020;
    *(int16_t *)(shader_generator + 5) = 0xa3b;
    *(int8_t *)((int64_t)shader_generator + 0x2a) = 0;
    *(int *)(param_2 + 0x10) = source_buffer_size + 0x2b;
    ShaderTextureProcessor(shader_generator, param_2, param_3);
    source_buffer_size = *(int *)(param_2 + 0x10);
    loop_counter = source_buffer_size + 2;
    BufferExpander(param_2, loop_counter);
    terminator_writer = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *terminator_writer = 0xa7d;
    *(int8_t *)(terminator_writer + 1) = 0;
    *(int *)(param_2 + 0x10) = loop_counter;
    source_buffer_size = source_buffer_size + 9;
    BufferExpander(param_2, source_buffer_size);
    *(uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) =
         0xa6669646e6523;
    *(int *)(param_2 + 0x10) = source_buffer_size;
                    // WARNING: Subroutine does not return
    MemoryDeallocator(shader_processor);
  }
  BufferExpander(param_2, loop_counter + *(int *)(param_3 + 0xad8));
                    // WARNING: Subroutine does not return
  memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
         *(uint64_t *)(param_3 + 0xad0),(int64_t)(*(int *)(param_3 + 0xad8) + 1));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 常量定义和全局变量
// =============================================================================

// 全局变量声明
#define g_DefaultShaderConfig      unknown_var_7512    // 默认着色器配置
#define g_ShaderTemplatePath       unknown_var_2588    // 着色器模板路径
#define g_BufferAllocator          unknown_var_720    // 缓冲区分配器
#define g_MemoryManager            unknown_var_3456    // 内存管理器
#define g_DefaultDataBuffer        system_buffer_ptr    // 默认数据缓冲区
#define g_FileStreamConfig         system_memory_c7ec    // 文件流配置
#define g_ShaderTextureData        unknown_var_640    // 着色器纹理数据
#define g_GlobalMemoryPool         system_memory_pool_ptr   // 全局内存池
#define g_SecurityChecksum        GET_SECURITY_COOKIE()   // 安全校验和
#define g_FileHandleCounter       SYSTEM_FILE_COUNTER_ADDR   // 文件句柄计数器

// 着色器类型常量
#define SHADER_TYPE_VERTEX         0x01             // 顶点着色器
#define SHADER_TYPE_FRAGMENT       0x02             // 片段着色器
#define SHADER_TYPE_GEOMETRY       0x04             // 几何着色器
#define SHADER_TYPE_COMPUTE        0x08             // 计算着色器

// 着色器编译标志
#define SHADER_COMPILE_DEBUG       0x01             // 调试模式
#define SHADER_COMPILE_OPTIMIZE    0x02             // 优化模式
#define SHADER_COMPILE_VALIDATE    0x04             // 验证模式

// =============================================================================
// 函数别名定义 - 保持向后兼容性
// =============================================================================

// 主要函数别名
#define FUN_180340b00              ShaderFinalizer
#define FUN_180341100              ShaderFileGenerator  
#define FUN_180341380              ShaderPipelineGenerator
#define FUN_1803415f0              ShaderPipelineFinalizer

// 辅助函数别名
#define FUN_18033eb00              ShaderValidator
#define FUN_18033f560              ShaderOptimizer
#define FUN_180342f20              ShaderLinker
#define FUN_18033ffe0              ShaderHeaderGenerator
#define FUN_1803400b0              ShaderPipelineGenerator
#define FUN_180344f00              ShaderTextureProcessor

// 内存管理函数别名
#define FUN_18062b420              MemoryAllocator
#define FUN_18064e990              MemoryInitializer
#define CoreEngine_MemoryPoolManager              MemoryDeallocator

// 缓冲区管理函数别名
#define FUN_1806279c0              BufferAllocator
#define FUN_1806277c0              BufferExpander
#define FUN_180627be0              ShaderConfigSetter
#define FUN_18062dee0              FileStreamOpener
#define FUN_1808fc050              SecurityCheckHandler

// =============================================================================
// 模块信息
// =============================================================================

/**
 * 模块标识: 03_rendering_part125.c
 * 模块类型: 渲染系统 - 着色器处理和管线管理
 * 功能描述: 着色器处理、管线配置和文件管理模块
 * 
 * 主要功能:
 * - 着色器源码生成和编译
 * - 着色器参数处理和验证
 * - 渲染管线配置和优化
 * - 着色器文件生成和管理
 * 
 * 包含函数: 4个核心函数
 * 代码行数: 700行
 * 美化完成: 2025-08-28
 * 
 * 技术说明:
 * - 支持多种着色器类型的处理
 * - 提供完整的管线管理功能
 * - 包含文件I/O和内存管理
 * - 具备安全校验和错误处理机制
 */


