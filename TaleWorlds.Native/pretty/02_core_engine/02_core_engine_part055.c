#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part055.c - 核心引擎初始化和渲染管线设置

/**
 * 初始化渲染管线和核心引擎组件
 * 
 * 该函数负责：
 * 1. 初始化渲染管线状态
 * 2. 设置渲染参数和默认值
 * 3. 配置相机和投影矩阵
 * 4. 初始化渲染目标
 * 5. 处理性能计数器和调试信息
 */
void initialize_render_pipeline(void)
{
  int loop_counter;
  longlong *render_context_ptr;
  bool is_dirty;
  int32_t temp_param_1;
  longlong engine_instance;
  uint64_t stack_guard;
  longlong *material_ptr;
  int32_t material_flags;
  longlong texture_handle;
  longlong *shader_ptr;
  longlong *uniform_ptr;
  longlong *buffer_ptr;
  void *string_ptr;
  longlong performance_counter;
  uint material_index;
  ulonglong texture_offset;
  ulonglong material_offset;
  int8_t local_buffer[32];
  uint64_t stack_checksum;
  longlong *context_stack;
  longlong **context_ptr_ptr;
  void *debug_string;
  int32_t *message_buffer;
  int32_t message_size;
  uint64_t message_handle;
  int32_t debug_flags[4];
  longlong transform_matrix[2];
  void *vertex_buffer;
  void *index_buffer;
  int32_t render_state;
  undefined material_data[136];
  ulonglong frame_time;
  
  render_context_ptr = global_render_context;
  transform_matrix[1] = 0xfffffffffffffffe;
  frame_time = performance_counter_value ^ (ulonglong)local_buffer;
  
  // 检查是否已经初始化
  if ((char)global_render_context[1] != '\x01') {
    *(int8_t *)(global_render_context + 1) = 1;
    
    // 获取引擎实例
    engine_instance = create_engine_instance();
    *render_context_ptr = engine_instance;
    
    texture_offset = 0;
    
    // 初始化渲染设备
    debug_string = &debug_device_name;
    vertex_buffer = material_data;
    material_data[0] = 0;
    render_state = 0x1d;
    strcpy_s(material_data, 0x80, &device_init_string);
    
    string_ptr = &device_config_path;
    if (vertex_buffer != (void *)0x0) {
      string_ptr = vertex_buffer;
    }
    
    // 调用设备初始化函数
    (**(code **)(*(longlong *)(engine_instance + 0x3520) + 0x10))(
        (longlong *)(engine_instance + 0x3520), string_ptr);
    
    debug_string = &render_target_name;
    initialize_render_target(*render_context_ptr, &target_config_string);
    
    // 设置渲染标志
    *(uint *)(*render_context_ptr + 4) = *(uint *)(*render_context_ptr + 4) | 0x8000000;
    *(uint *)(*render_context_ptr + 4) = *(uint *)(*render_context_ptr + 4) | 4;
    
    // 初始化材质参数
    material_ptr = render_context_ptr + 0x2d4;
    *(int8_t *)(render_context_ptr + 0x2f4) = 0;
    *(int32_t *)((longlong)render_context_ptr + 0x17b4) = 0;
    *(int32_t *)(render_context_ptr + 0x2f7) = 0x43fa8000;  // 漫反射颜色
    *(int32_t *)((longlong)render_context_ptr + 0x17a4) = 0xbf000000;  // 环境光
    *(int32_t *)(render_context_ptr + 0x2f5) = 0x3f000000;  // 镜面反射
    *(int32_t *)(render_context_ptr + 0x2f6) = 0xbf000000;  // 自发光
    *(int32_t *)((longlong)render_context_ptr + 0x17ac) = 0x3f000000;  // 透明度
    
    // 初始化相机参数
    initialize_camera_matrices();
    
    // 设置默认相机变换矩阵
    debug_flags[0] = 0;
    debug_flags[1] = 0;
    debug_flags[2] = 0;
    debug_flags[3] = 0x3f800000;  // 1.0f
    
    *(int32_t *)(material_ptr + 0x18) = 0x3f800000;
    *(int32_t *)((longlong)material_ptr + 0xc4) = 0;
    *(int32_t *)(material_ptr + 0x19) = 0;
    *(int32_t *)((longlong)material_ptr + 0xcc) = 0;
    *(int32_t *)(material_ptr + 0x1a) = 0;
    *(int32_t *)((longlong)material_ptr + 0xd4) = 0x3f800000;
    *(int32_t *)(material_ptr + 0x1b) = 0;
    *(int32_t *)((longlong)material_ptr + 0xdc) = 0;
    material_ptr[0x1c] = 0;
    material_ptr[0x1d] = 0x3f800000;
    *(int32_t *)(material_ptr + 0x1e) = 0x3f000000;
    *(int32_t *)((longlong)material_ptr + 0xf4) = 0x3f000000;
    *(int32_t *)(material_ptr + 0x1f) = 0x43c80000;
    *(int32_t *)((longlong)material_ptr + 0xfc) = 0x7f7fffff;
    
    // 初始化投影矩阵
    initialize_camera_matrices();
    
    engine_instance = *render_context_ptr;
    performance_counter = 2;
    uniform_ptr = (longlong *)(engine_instance + 0x30);
    
    // 复制材质数据到渲染管线
    do {
      buffer_ptr = material_ptr;
      shader_ptr = uniform_ptr;
      texture_handle = buffer_ptr[1];
      *shader_ptr = *buffer_ptr;
      shader_ptr[1] = texture_handle;
      texture_handle = buffer_ptr[3];
      shader_ptr[2] = buffer_ptr[2];
      shader_ptr[3] = texture_handle;
      texture_handle = buffer_ptr[5];
      shader_ptr[4] = buffer_ptr[4];
      shader_ptr[5] = texture_handle;
      texture_handle = buffer_ptr[7];
      shader_ptr[6] = buffer_ptr[6];
      shader_ptr[7] = texture_handle;
      texture_handle = buffer_ptr[9];
      shader_ptr[8] = buffer_ptr[8];
      shader_ptr[9] = texture_handle;
      texture_handle = buffer_ptr[0xb];
      shader_ptr[10] = buffer_ptr[10];
      shader_ptr[0xb] = texture_handle;
      texture_handle = buffer_ptr[0xd];
      shader_ptr[0xc] = buffer_ptr[0xc];
      shader_ptr[0xd] = texture_handle;
      texture_handle = buffer_ptr[0xf];
      shader_ptr[0xe] = buffer_ptr[0xe];
      shader_ptr[0xf] = texture_handle;
      performance_counter = performance_counter + -1;
      uniform_ptr = shader_ptr + 0x10;
      material_ptr = buffer_ptr + 0x10;
    } while (performance_counter != 0);
    
    // 复制剩余的材质数据
    performance_counter = buffer_ptr[0x11];
    shader_ptr[0x10] = buffer_ptr[0x10];
    shader_ptr[0x11] = performance_counter;
    performance_counter = buffer_ptr[0x13];
    shader_ptr[0x12] = buffer_ptr[0x12];
    shader_ptr[0x13] = performance_counter;
    material_flags = *(int32_t *)((longlong)buffer_ptr + 0xa4);
    performance_counter = buffer_ptr[0x15];
    temp_param_1 = *(int32_t *)((longlong)buffer_ptr + 0xac);
    *(int *)(shader_ptr + 0x14) = (int)buffer_ptr[0x14];
    *(int32_t *)((longlong)shader_ptr + 0xa4) = material_flags;
    *(int *)(shader_ptr + 0x15) = (int)performance_counter;
    *(int32_t *)((longlong)shader_ptr + 0xac) = temp_param_1;
    material_flags = *(int32_t *)((longlong)buffer_ptr + 0xb4);
    performance_counter = buffer_ptr[0x17];
    temp_param_1 = *(int32_t *)((longlong)buffer_ptr + 0xbc);
    *(int *)(shader_ptr + 0x16) = (int)buffer_ptr[0x16];
    *(int32_t *)((longlong)shader_ptr + 0xb4) = material_flags;
    *(int *)(shader_ptr + 0x17) = (int)performance_counter;
    *(int32_t *)((longlong)shader_ptr + 0xbc) = temp_param_1;
    
    // 初始化渲染后端
    initialize_render_backend(engine_instance);
    
    engine_instance = *render_context_ptr;
    material_ptr = *(longlong **)(global_render_manager + 0x121e0);
    if (material_ptr != (longlong *)0x0) {
      stack_checksum = material_ptr;
      (**(code **)(*material_ptr + 0x28))(material_ptr);
    }
    
    // 设置渲染管线状态
    stack_checksum = *(longlong **)(engine_instance + 0x9690);
    *(longlong **)(engine_instance + 0x9690) = material_ptr;
    if (stack_checksum != (longlong *)0x0) {
      (**(code **)(*stack_checksum + 0x38))();
    }
    
    // 清理旧的渲染上下文
    context_ptr_ptr = *(longlong ***)(*render_context_ptr + 0x96a8);
    *(uint64_t *)(*render_context_ptr + 0x96a8) = 0;
    if (context_ptr_ptr != (longlong **)0x0) {
      (*(code *)(*context_ptr_ptr)[7])();
    }
    
    // 输出调试信息
    loop_counter = *(int *)(debug_output_buffer + 0x30c);
    if (loop_counter != 0) {
      debug_string = &debug_output_prefix;
      message_handle = 0;
      message_buffer = (int32_t *)0x0;
      message_size = 0;
      message_buffer = (int32_t *)create_debug_message(debug_log_source, 0x1f, 0x13);
      *(int8_t *)message_buffer = 0;
      temp_param_1 = allocate_message_buffer(message_buffer);
      *message_buffer = 0x44414853;  // "HASH"
      message_buffer[1] = 0x43205245;  // "C RE"
      message_buffer[2] = 0x49504d4f;  // "IPMO"
      message_buffer[3] = 0x4954414c;  // "ITAL"
      *(uint64_t *)(message_buffer + 4) = 0x5250204e49204e4f;  // "RP NI NO"
      message_buffer[6] = 0x4552474f;  // "ERGO"
      *(int16_t *)(message_buffer + 7) = 0x5353;  // "SS"
      *(int8_t *)((longlong)message_buffer + 0x1e) = 0;
      message_size = 0x1e;
      message_handle._0_4_ = temp_param_1;
      send_debug_message(&debug_string, &debug_message_target, loop_counter);
      debug_string = &debug_output_prefix;
      if (message_buffer != (int32_t *)0x0) {
        // WARNING: Subroutine does not return
        free_message_buffer();
      }
      message_buffer = (int32_t *)0x0;
      message_handle = (ulonglong)message_handle._4_4_ << 0x20;
      debug_string = &render_target_name;
    }
    
    // 更新性能计数器
    engine_instance = performance_timer_address;
    if (performance_timer_enabled != '\0') {
      performance_counter = performance_counter_value;
      if (performance_counter_value == 0) {
        QueryPerformanceCounter(transform_matrix);
        performance_counter = transform_matrix[0];
      }
      *(double *)(*(longlong *)(engine_instance + 0x48) + 0xc0) =
           (double)(performance_counter - performance_counter_base) * performance_frequency;
    }
    
    // 处理渲染队列
    stack_guard = render_queue_head;
    if ((*(int *)(render_queue_config + 0x3f0) == 0) &&
       (material_ptr = *(longlong **)(render_context_pool + 0x60), material_ptr != (longlong *)0x0)) {
      context_ptr_ptr = &context_stack;
      context_stack = material_ptr;
      (**(code **)(*material_ptr + 0x28))();
      process_render_queue(stack_guard, &context_stack, 0);
    }
    
    // 处理材质更新
    if (((char)render_context_ptr[0x2fd] != '\0') &&
       (engine_instance = render_context_ptr[0x30d], material_offset = texture_offset, 
        render_context_ptr[0x30e] - engine_instance >> 3 != 0)) {
      do {
        material_ptr = *(longlong **)(material_offset + engine_instance);
        if ((material_ptr != (longlong *)0x0) &&
           ((*(char *)((longlong)material_ptr + 0xde) == '\0' &&
            (*(char *)((longlong)material_ptr + 0xdd) != '\0')))) {
          engine_instance = *render_context_ptr;
          if (*(char *)((longlong)material_ptr + 0x81) != '\0') {
            performance_counter = *(longlong *)(performance_timer_address + 0x254);
            material_ptr[0xc] = material_ptr[0xb];
            stack_checksum._0_4_ = (float)performance_counter;
            if (((float)stack_checksum != *(float *)(material_ptr + 0xb)) ||
               (stack_checksum._4_4_ = (float)((ulonglong)performance_counter >> 0x20),
               stack_checksum._4_4_ != *(float *)((longlong)material_ptr + 0x5c))) {
              material_ptr[0xb] = performance_counter;
              stack_checksum = (longlong *)performance_counter;
              (**(code **)(*material_ptr + 0x70))(material_ptr);
            }
            uniform_ptr = *(longlong **)(performance_timer_address + 0x25c);
            material_ptr[0xe] = material_ptr[0xd];
            stack_checksum._0_4_ = calculate_shader_parameter(uniform_ptr, 0);
            stack_checksum = uniform_ptr;
            if (((float)stack_checksum != *(float *)(material_ptr + 0xd)) ||
               (stack_checksum._4_4_ = (float)((ulonglong)uniform_ptr >> 0x20),
               is_dirty = stack_checksum._4_4_ != *(float *)((longlong)material_ptr + 0x6c), is_dirty)) {
              material_ptr[0xd] = (longlong)uniform_ptr;
              (**(code **)(*material_ptr + 0x70))(material_ptr);
            }
          }
          (**(code **)(*material_ptr + 0xf0))(material_ptr, engine_instance);
        }
        material_index = (int)material_offset + 1;
        material_offset = (ulonglong)material_index;
        engine_instance = render_context_ptr[0x30d];
        texture_offset = texture_offset + 8;
      } while ((ulonglong)(longlong)(int)material_index < (ulonglong)(render_context_ptr[0x30e] - engine_instance >> 3));
    }
  }
  
  // WARNING: Subroutine does not return
  exit_render_pipeline(frame_time ^ (ulonglong)local_buffer);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 全局变量定义
longlong *global_render_context = _DAT_180c86950;
ulonglong performance_counter_value = _DAT_180bf00a8;
char performance_timer_enabled = DAT_180c82853;
longlong performance_timer_address = _DAT_180c86870;
longlong performance_counter_base = _DAT_180c8ed48;
double performance_frequency = _DAT_180c8ed50;
longlong performance_counter_value = _DAT_180c8ed58;
void *debug_device_name = UNK_1809fcc28;
void *device_init_string = UNK_180a01340;
void *device_config_path = DAT_18098bc73;
void *render_target_name = UNK_18098bcb0;
void *target_config_string = UNK_180a013a8;
void *debug_output_prefix = UNK_180a3c3e0;
void *debug_message_target = UNK_180a013b8;
longlong *global_render_manager = _DAT_180c86938;
longlong *render_context_pool = _DAT_180c86890;
longlong *render_queue_head = _DAT_180c82868;
longlong *render_queue_config = _DAT_180c8a9c8;
longlong *debug_log_source = _DAT_180c8ed18;
longlong *debug_output_buffer = _DAT_180c8aa08;

// 函数映射（简化实现）
// 注意：以下函数是简化实现，用于保持代码结构清晰
// 原始实现：FUN_1800daa50() -> create_engine_instance()
// 原始实现：FUN_180094b30() -> initialize_render_target()
// 原始实现：FUN_1802864f0() -> initialize_camera_matrices()
// 原始实现：FUN_18024b8d0() -> initialize_render_backend()
// 原始实现：FUN_18062b420() -> create_debug_message()
// 原始实现：FUN_18064e990() -> allocate_message_buffer()
// 原始实现：FUN_180628040() -> send_debug_message()
// 原始实现：FUN_18064e900() -> free_message_buffer()
// 原始实现：FUN_18005e6a0() -> process_render_queue()
// 原始实现：SUB84() -> calculate_shader_parameter()
// 原始实现：FUN_1808fc050() -> exit_render_pipeline()