#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part168.c - 10 个函数

// 函数: void FUN_180151660(longlong param_1)
// 功能: 引擎命令分发处理器 - 根据不同的命令类型执行相应的操作
void process_engine_command_dispatcher(longlong context_ptr)

{
  int *error_code_ptr;
  byte flag_byte;
  longlong **resource_manager_ptr;
  code *cleanup_callback;
  longlong **texture_manager_ptr;
  uint command_type;
  int texture_index;
  int8_t *buffer_ptr;
  longlong memory_address;
  uint64_t resource_handle;
  longlong buffer_size;
  ulonglong data_length;
  int32_t *texture_data_ptr;
  longlong allocation_size;
  int buffer_capacity;
  uint texture_count;
  int image_width;
  int image_height;
  uint pixel_format;
  char validation_flag;
  int32_t performance_counter;
  double frame_time;
  double delta_time;
  int8_t security_buffer [32];
  uint64_t stack_guard;
  int32_t **render_target_ptr;
  longlong **shader_manager_ptr;
  longlong **audio_manager_ptr;
  int32_t render_flags;
  longlong **physics_manager_ptr;
  longlong *input_manager_ptr;
  longlong *network_manager_ptr;
  longlong **ui_manager_ptr;
  int32_t vertex_buffer_flags;
  int32_t index_buffer_flags;
  int32_t shader_flags;
  int32_t texture_flags;
  uint64_t frame_timestamp;
  int32_t render_state_flags;
  uint64_t memory_pool_ptr;
  longlong camera_position;
  int32_t *vertex_buffer_array [2];
  int32_t *index_buffer_array [2];
  uint64_t transform_matrix;
  uint64_t projection_matrix;
  uint64_t view_matrix;
  uint64_t world_matrix;
  int32_t vertex_count;
  int32_t index_count;
  int32_t primitive_count;
  int32_t draw_call_flags;
  uint64_t debug_info_ptr;
  int8_t debug_buffer [24];
  longlong animation_time;
  int8_t physics_buffer [24];
  longlong physics_step;
  longlong audio_time;
  ulonglong audio_data_size;
  int16_t audio_format;
  int8_t audio_channels;
  uint64_t audio_buffer_ptr;
  uint64_t audio_device_ptr;
  uint64_t network_socket_ptr;
  uint64_t network_buffer_ptr;
  uint64_t network_address_ptr;
  uint64_t network_stats_ptr;
  uint64_t ui_layer_ptr;
  uint64_t ui_element_ptr;
  uint64_t ui_style_ptr;
  int32_t ui_widget_flags;
  int16_t ui_padding;
  int32_t ui_margin;
  int8_t ui_state;
  ulonglong security_checksum;
  
  // 初始化栈保护
  stack_guard = 0xfffffffffffffffe;
  security_checksum = GET_SECURITY_COOKIE() ^ (ulonglong)security_buffer;
  command_type = *(uint *)(context_ptr + 0x98);
  
  // 验证命令类型范围
  if (0x2d < command_type) {
    // 命令类型超出范围，触发错误处理
    trigger_engine_error_handler(&unknown_var_6264_ptr);
    goto command_complete_handler;
  }
  
  // 获取命令处理函数地址
  memory_address = (ulonglong)*(uint *)(&unknown_var_7364_ptr + (longlong)(int)command_type * 4) + 0x180000000;
  
  // 根据命令类型分发处理
  switch(command_type) {
  case 0:
    // 初始化引擎系统
    validation_flag = check_system_initialization(_DAT_180c8aa08);
    if (validation_flag != '\0') {
      // 系统已初始化，触发初始化错误
      trigger_initialization_error(_DAT_180c86928,&unknown_var_6208_ptr);
    }
    break;
  case 1:
    // 创建渲染窗口
    create_render_window(_DAT_180c86938,*(uint64_t *)(context_ptr + 0xa0),*(uint64_t *)(context_ptr + 0xa8));
    break;
  case 2:
    // 设置渲染目标
    render_target_ptr = *(int32_t ***)(context_ptr + 0xc0);
    stack_guard = CONCAT44(stack_guard._4_4_,*(int32_t *)(context_ptr + 0xb0));
    setup_render_target(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),*(uint64_t *)(context_ptr + 0xa0),
                       *(int32_t *)(context_ptr + 0xa8),*(int32_t *)(context_ptr + 0xac));
    (**(code **)(**(longlong **)(context_ptr + 0xc0) + 0x38))();
    break;
  case 3:
    // 处理纹理上传
    texture_manager_ptr = *(longlong **)(_DAT_180c86938 + 0x1cd8);
    resource_manager_ptr = *(longlong **)(context_ptr + 0xc0);
    texture_index = *(int *)(context_ptr + 0xb0);
    image_height = *(int *)(context_ptr + 0xac);
    image_width = *(int *)(context_ptr + 0xa8);
    memory_address = *(longlong *)(context_ptr + 0xa0);
    flag_byte = *(byte *)(memory_address + 0x335);
    texture_count = *(uint *)(memory_address + 0x35c);
    pixel_format = 1;
    if (1 < *(ushort *)(memory_address + 0x32e)) {
      pixel_format = (uint)*(ushort *)(memory_address + 0x32e);
    }
    memory_address = get_texture_manager_instance();
    camera_position = *(longlong *)(memory_address + 8);
    texture_count = (uint)flag_byte;
    if ((int)texture_count < (int)(uint)flag_byte) {
      texture_count = texture_count;
    }
    image_width = texture_count * image_height + image_width;
    render_target_ptr = &texture_data_ptr;
    stack_guard = stack_guard & 0xffffffff00000000;
    (**(code **)(*(longlong *)texture_manager_ptr[0x1080] + 0x70))
              ((longlong *)texture_manager_ptr[0x1080],camera_position,image_width,4);
    if (buffer_capacity == texture_index) {
      // 批量纹理数据复制
      memcpy(texture_data_ptr,resource_manager_ptr[2],(longlong)(int)(pixel_format * texture_index));
    }
    if (pixel_format != 0) {
      // 单个纹理数据复制
      memcpy(texture_data_ptr,resource_manager_ptr[2],(longlong)texture_index);
    }
    (**(code **)(*(longlong *)texture_manager_ptr[0x1080] + 0x78))
              ((longlong *)texture_manager_ptr[0x1080],camera_position,image_width);
    (**(code **)(**(longlong **)(context_ptr + 0xc0) + 0x38))();
    break;
  case 4:
    // 设置视口参数
    stack_guard = *(ulonglong *)(context_ptr + 0xc0);
    configure_viewport_parameters(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),*(uint64_t *)(context_ptr + 0xa0),
                                 *(int32_t *)(context_ptr + 0xa8),*(int32_t *)(context_ptr + 0xac));
    (**(code **)(**(longlong **)(context_ptr + 0xc0) + 0x38))();
    break;
  case 5:
    // 创建着色器程序
    render_flags = *(int32_t *)(context_ptr + 0xb8);
    audio_manager_ptr = (longlong *)CONCAT44(audio_manager_ptr._4_4_,*(int32_t *)(context_ptr + 0xb0));
    network_manager_ptr = (longlong *)CONCAT44(network_manager_ptr._4_4_,*(int32_t *)(context_ptr + 0xb4));
    render_target_ptr = *(int32_t ***)(context_ptr + 0xa8);
    stack_guard = CONCAT44(stack_guard._4_4_,*(int32_t *)(context_ptr + 0xc4));
    compile_shader_program(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),*(uint64_t *)(context_ptr + 0xa0),
                         *(int32_t *)(context_ptr + 0xc0),*(int32_t *)(context_ptr + 0xbc));
    break;
  case 6:
    // 绑定着色器
    activate_shader_program(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),*(uint64_t *)(context_ptr + 0xa0),
                          *(uint64_t *)(context_ptr + 0xa8));
    (**(code **)(**(longlong **)(context_ptr + 0xa0) + 0x38))();
    (**(code **)(**(longlong **)(context_ptr + 0xa8) + 0x38))();
    break;
  case 7:
    // 设置着色器常量
    render_target_ptr = (int32_t **)CONCAT44(render_target_ptr._4_4_,*(int32_t *)(context_ptr + 0xb8));
    stack_guard = CONCAT44(stack_guard._4_4_,*(int32_t *)(context_ptr + 0xb4));
    set_shader_constants(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),*(uint64_t *)(context_ptr + 0xa0),
                        *(uint64_t *)(context_ptr + 0xa8),*(int32_t *)(context_ptr + 0xb0));
    (**(code **)(**(longlong **)(context_ptr + 0xa0) + 0x38))();
    (**(code **)(**(longlong **)(context_ptr + 0xa8) + 0x38))();
    break;
  case 8:
    // 设置纹理采样器
    render_target_ptr = (int32_t **)CONCAT71(render_target_ptr._1_7_,*(int *)(context_ptr + 0xb0) != 0);
    stack_guard = CONCAT44(stack_guard._4_4_,*(int32_t *)(context_ptr + 0xac));
    configure_texture_sampler(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),*(uint64_t *)(context_ptr + 0xa0),
                              *(int32_t *)(context_ptr + 0xa8),
                              *(uint64_t *)(*(longlong *)(context_ptr + 0xc0) + 0x10));
    (**(code **)(**(longlong **)(context_ptr + 0xc0) + 0x38))();
    break;
  case 9:
    // 绘制几何体
    render_geometry(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),*(uint64_t *)(context_ptr + 0xa0),
                   *(uint64_t *)(*(longlong *)(context_ptr + 0xa8) + 0x10),
                   *(int32_t *)(context_ptr + 0xb0));
    (**(code **)(**(longlong **)(context_ptr + 0xa8) + 0x38))();
    break;
  case 10:
    // 实例化绘制
    instanced_rendering(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),*(uint64_t *)(context_ptr + 0xa0),
                       *(uint64_t *)(context_ptr + 0xa8),*(int32_t *)(context_ptr + 0xb0));
    break;
  case 0xb:
    // 创建顶点缓冲区
    memory_address = *(longlong *)(context_ptr + 0xa0);
    allocation_size = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(int32_t *)(memory_address + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
    physics_manager_ptr = *(longlong **)(allocation_size + 0x8400);
    render_target_ptr = vertex_buffer_array;
    stack_guard = (ulonglong)stack_guard._4_4_ << 0x20;
    error_code_ptr = (**(code **)(*physics_manager_ptr + 0x70))(physics_manager_ptr,*(uint64_t *)(memory_address + 0x10),0,4);
    if (error_code_ptr < 0) {
      handle_render_error(error_code_ptr,&unknown_var_1768_ptr);
    }
    error_code_ptr = *(int *)(context_ptr + 0xb8);
    if (0 < error_code_ptr) {
      image_height = (int)*(uint64_t *)(context_ptr + 0xb0);
      if (image_height < error_code_ptr) {
        error_code_ptr = image_height;
      }
      // 复制顶点数据
      memcpy(vertex_buffer_array[0],**(uint64_t **)(context_ptr + 0xa8),(longlong)error_code_ptr);
    }
    physics_manager_ptr = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
    cleanup_callback = *(code **)(*physics_manager_ptr + 0x78);
    *(int32_t *)(memory_address + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
    (*cleanup_callback)(physics_manager_ptr,*(uint64_t *)(memory_address + 0x10),0);
    break;
  case 0xc:
    // 创建索引缓冲区
    memory_address = *(longlong *)(context_ptr + 0xa0);
    allocation_size = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(int32_t *)(memory_address + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
    physics_manager_ptr = *(longlong **)(allocation_size + 0x8400);
    render_target_ptr = index_buffer_array;
    allocation_size = 0;
    stack_guard = (ulonglong)stack_guard._4_4_ << 0x20;
    error_code_ptr = (**(code **)(*physics_manager_ptr + 0x70))(physics_manager_ptr,*(uint64_t *)(memory_address + 0x10),0,4);
    if (error_code_ptr < 0) {
      handle_render_error(error_code_ptr,&unknown_var_1768_ptr);
    }
    data_length = *(ulonglong *)(context_ptr + 0xb8) >> 6;
    error_code_ptr = (int)(*(ulonglong *)(context_ptr + 0xb0) >> 6);
    texture_count = (uint)data_length;
    while (0 < (int)texture_count) {
      texture_data_ptr = *(int32_t **)(allocation_size + *(longlong *)(context_ptr + 0xa8));
      image_width = (int)data_length;
      image_height = image_width;
      if (error_code_ptr < image_width) {
        image_height = error_code_ptr;
      }
      buffer_capacity = 0;
      if (3 < image_height) {
        texture_count = (image_height - 4U >> 2) + 1;
        data_length = (ulonglong)texture_count;
        buffer_capacity = texture_count * 4;
        do {
          // 批量索引数据复制和重组
          *index_buffer_array[0] = *texture_data_ptr;
          index_buffer_array[0][1] = texture_data_ptr[1];
          index_buffer_array[0][2] = texture_data_ptr[2];
          index_buffer_array[0][3] = texture_data_ptr[0xc];
          index_buffer_array[0][4] = texture_data_ptr[4];
          index_buffer_array[0][5] = texture_data_ptr[5];
          index_buffer_array[0][6] = texture_data_ptr[6];
          index_buffer_array[0][7] = texture_data_ptr[0xd];
          index_buffer_array[0][8] = texture_data_ptr[8];
          index_buffer_array[0][9] = texture_data_ptr[9];
          index_buffer_array[0][10] = texture_data_ptr[10];
          index_buffer_array[0][0xb] = texture_data_ptr[0xe];
          index_buffer_array[0][0xc] = texture_data_ptr[0x10];
          index_buffer_array[0][0xd] = texture_data_ptr[0x11];
          index_buffer_array[0][0xe] = texture_data_ptr[0x12];
          index_buffer_array[0][0xf] = texture_data_ptr[0x1c];
          index_buffer_array[0][0x10] = texture_data_ptr[0x14];
          index_buffer_array[0][0x11] = texture_data_ptr[0x15];
          index_buffer_array[0][0x12] = texture_data_ptr[0x16];
          index_buffer_array[0][0x13] = texture_data_ptr[0x1d];
          index_buffer_array[0][0x14] = texture_data_ptr[0x18];
          index_buffer_array[0][0x15] = texture_data_ptr[0x19];
          index_buffer_array[0][0x16] = texture_data_ptr[0x1a];
          index_buffer_array[0][0x17] = texture_data_ptr[0x1e];
          index_buffer_array[0][0x18] = texture_data_ptr[0x20];
          index_buffer_array[0][0x19] = texture_data_ptr[0x21];
          index_buffer_array[0][0x1a] = texture_data_ptr[0x22];
          index_buffer_array[0][0x1b] = texture_data_ptr[0x2c];
          index_buffer_array[0][0x1c] = texture_data_ptr[0x24];
          index_buffer_array[0][0x1d] = texture_data_ptr[0x25];
          index_buffer_array[0][0x1e] = texture_data_ptr[0x26];
          index_buffer_array[0][0x1f] = texture_data_ptr[0x2d];
          index_buffer_array[0][0x20] = texture_data_ptr[0x28];
          index_buffer_array[0][0x21] = texture_data_ptr[0x29];
          index_buffer_array[0][0x22] = texture_data_ptr[0x2a];
          index_buffer_array[0][0x23] = texture_data_ptr[0x2e];
          index_buffer_array[0][0x24] = texture_data_ptr[0x30];
          index_buffer_array[0][0x25] = texture_data_ptr[0x31];
          index_buffer_array[0][0x26] = texture_data_ptr[0x32];
          index_buffer_array[0][0x27] = texture_data_ptr[0x3c];
          index_buffer_array[0][0x28] = texture_data_ptr[0x34];
          index_buffer_array[0][0x29] = texture_data_ptr[0x35];
          index_buffer_array[0][0x2a] = texture_data_ptr[0x36];
          index_buffer_array[0][0x2b] = texture_data_ptr[0x3d];
          index_buffer_array[0][0x2c] = texture_data_ptr[0x38];
          index_buffer_array[0][0x2d] = texture_data_ptr[0x39];
          index_buffer_array[0][0x2e] = texture_data_ptr[0x3a];
          index_buffer_array[0][0x2f] = texture_data_ptr[0x3e];
          texture_data_ptr = texture_data_ptr + 0x40;
          index_buffer_array[0] = index_buffer_array[0] + 0x30;
          data_length = data_length - 1;
        } while (data_length != 0);
      }
      if (buffer_capacity < image_height) {
        texture_data_ptr = texture_data_ptr + 2;
        data_length = (ulonglong)(uint)(image_height - buffer_capacity);
        do {
          // 剩余索引数据复制
          *index_buffer_array[0] = texture_data_ptr[-2];
          index_buffer_array[0][1] = texture_data_ptr[-1];
          index_buffer_array[0][2] = *texture_data_ptr;
          index_buffer_array[0][3] = texture_data_ptr[10];
          index_buffer_array[0][4] = texture_data_ptr[2];
          index_buffer_array[0][5] = texture_data_ptr[3];
          index_buffer_array[0][6] = texture_data_ptr[4];
          index_buffer_array[0][7] = texture_data_ptr[0xb];
          index_buffer_array[0][8] = texture_data_ptr[6];
          index_buffer_array[0][9] = texture_data_ptr[7];
          index_buffer_array[0][10] = texture_data_ptr[8];
          index_buffer_array[0][0xb] = texture_data_ptr[0xc];
          texture_data_ptr = texture_data_ptr + 0x10;
          index_buffer_array[0] = index_buffer_array[0] + 0xc;
          data_length = data_length - 1;
        } while (data_length != 0);
      }
      texture_count = image_width - error_code_ptr;
      data_length = (ulonglong)texture_count;
      allocation_size = allocation_size + 8;
    }
    physics_manager_ptr = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
    cleanup_callback = *(code **)(*physics_manager_ptr + 0x78);
    *(int32_t *)(memory_address + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
    (*cleanup_callback)(physics_manager_ptr,*(uint64_t *)(memory_address + 0x10),0);
    break;
  case 0xd:
  case 0x1a:
    // 无效命令，跳转到错误处理
    goto invalid_command_handler;
  default:
    // 默认命令处理
    if (*(longlong **)(context_ptr + 0xa0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(context_ptr + 0xa0) + 0x10))();
    }
    break;
  case 0xf:
    // 内存分配失败处理
    if (*(longlong *)(context_ptr + 0xa0) != 0) {
      // 触发内存分配失败
      trigger_memory_allocation_failure();
    }
    break;
  case 0x10:
    // 虚拟内存查询和释放
    resource_handle = *(uint64_t *)(context_ptr + 0xa0);
    memory_address = VirtualQuery(resource_handle,debug_buffer,0x30);
    animation_time = physics_step;
    goto memory_free_handler;
  case 0x11:
    resource_handle = *(uint64_t *)(context_ptr + 0xa0);
    memory_address = VirtualQuery(resource_handle,physics_buffer,0x30);
memory_free_handler:
    allocation_size = animation_time;
    if (memory_address == 0) {
      allocation_size = 0;
    }
    VirtualFree(resource_handle,0,0x8000);
    LOCK();
    lRam0000000180c961a8 = lRam0000000180c961a8 - allocation_size;
    UNLOCK();
    break;
  case 0x14:
    // 释放资源
    release_engine_resource(*(uint64_t *)(context_ptr + 0xa0));
    break;
  case 0x15:
    // 设置渲染状态
    render_target_ptr = *(int32_t ***)(context_ptr + 200);
    stack_guard = *(ulonglong *)(context_ptr + 0xb8);
    set_render_state(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),*(uint64_t *)(context_ptr + 0xa0),
                     *(int32_t *)(context_ptr + 0xac),*(int32_t *)(context_ptr + 0xa8));
    break;
  case 0x16:
    // 销毁渲染资源
    physics_manager_ptr = *(longlong **)(context_ptr + 0xa0);
    texture_manager_ptr = *(longlong **)(context_ptr + 0xb0);
    render_target_ptr = (int32_t **)
                   CONCAT44(render_target_ptr._4_4_,*(int32_t *)((longlong)physics_manager_ptr + 0x44));
    stack_guard = CONCAT44(stack_guard._4_4_,(int)physics_manager_ptr[8]);
    network_manager_ptr = texture_manager_ptr;
    audio_manager_ptr = physics_manager_ptr;
    destroy_render_resources(_DAT_180c86938,*(int32_t *)(context_ptr + 0xa8),*(int32_t *)(context_ptr + 0xac),
                           *(int32_t *)((longlong)physics_manager_ptr + 0x3c));
    if (texture_manager_ptr != (longlong *)0x0) {
      (**(code **)(*texture_manager_ptr + 0x38))(texture_manager_ptr);
    }
    (**(code **)(*physics_manager_ptr + 0x38))(physics_manager_ptr);
    break;
  case 0x17:
    // 初始化音频系统
    audio_time = 0;
    audio_data_size = 0;
    audio_format = 0;
    audio_channels = 3;
    ui_margin = 0;
    network_socket_ptr = 0;
    network_address_ptr = 0;
    network_stats_ptr = 0;
    ui_element_ptr = 0;
    ui_layer_ptr = 0;
    ui_style_ptr = 0;
    ui_state = 0;
    audio_buffer_ptr = 0;
    audio_device_ptr = 0;
    network_buffer_ptr = 0;
    resource_handle = get_audio_manager_instance(*(uint64_t *)(_DAT_180c86938 + 0x121e0));
    initialize_audio_system(_DAT_180c86938,resource_handle,&audio_time);
    if ((((int)network_socket_ptr == 1) || ((int)network_socket_ptr - 7U < 2)) && (0 < (int)(audio_data_size >> 2))) {
      buffer_ptr = (int8_t *)(audio_time + 3);
      data_length = audio_data_size >> 2 & 0xffffffff;
      do {
        *buffer_ptr = 0xff;
        buffer_ptr = buffer_ptr + 4;
        data_length = data_length - 1;
      } while (data_length != 0);
    }
    process_audio_data(*(uint64_t *)(context_ptr + 0xb0),&audio_time,*(int32_t *)(context_ptr + 0xb8));
    cleanup_audio_device(*(uint64_t *)(context_ptr + 0xb0));
    *(uint64_t *)(context_ptr + 0xb0) = 0;
    if (ui_style_ptr._1_1_ == '\0') {
      if (((char)ui_style_ptr == '\0') && (audio_time != 0)) {
        // 音频系统初始化失败
        trigger_audio_system_failure();
      }
      audio_time = 0;
      audio_data_size = 0;
      ui_style_ptr = 0;
    }
    break;
  case 0x18:
    // 更新物理系统
    update_physics_system(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),*(uint64_t *)(context_ptr + 0xa0));
    break;
  case 0x19:
    // 更新游戏逻辑
    if (*(int *)(_DAT_180c8a9c8 + 0x3f0) == 0) {
      memory_address = _DAT_180c86890 + 0x68;
      camera_position = memory_address;
      error_code_ptr = _Mtx_lock(memory_address);
      if (error_code_ptr != 0) {
        __Throw_C_error_std__YAXH_Z(error_code_ptr);
      }
      if (*(longlong *)(_DAT_180c86890 + 0x60) != 0) {
        while( true ) {
          cleanup_callback = *(code **)(**(longlong **)(_DAT_180c86890 + 0x60) + 0x68);
          if (cleanup_callback == (code *)&unknown_var_9696_ptr) {
            validation_flag = (char)(*(longlong **)(_DAT_180c86890 + 0x60))[2] != '\0';
          }
          else {
            validation_flag = (*cleanup_callback)();
          }
          if (validation_flag != '\0') break;
          resource_handle = get_event_manager_instance(_DAT_180c82868);
          process_event_queue(resource_handle);
        }
      }
      error_code_ptr = _Mtx_unlock(memory_address);
      if (error_code_ptr != 0) {
        __Throw_C_error_std__YAXH_Z(error_code_ptr);
      }
    }
    resource_handle = get_performance_counter();
    *(uint64_t *)(_DAT_180c86890 + 0x1528) = resource_handle;
    update_game_logic(*(uint64_t *)(context_ptr + 0xa0));
    memory_address = _DAT_180c86890;
    allocation_size = _DAT_180c86890;
    if (*(char *)(_DAT_180c86890 + 0x12e7) == '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8)
                   + 0x48) < iRam0000000180d49260) &&
         (check_performance_threshold(0x180d49260), iRam0000000180d49260 == -1)) {
        dRam0000000180d49268 = *(double *)(memory_address + 0x1528);
        clear_performance_flag(0x180d49260);
      }
      buffer_size = _DAT_180c8ed58;
      if (_DAT_180c8ed58 == 0) {
        QueryPerformanceCounter(&camera_position);
        buffer_size = camera_position;
      }
      allocation_size = _DAT_180c86890;
      frame_time = (double)(buffer_size - _DAT_180c8ed48) * _DAT_180c8ed50;
      delta_time = frame_time - *(double *)(memory_address + 0x1528);
      *(double *)(memory_address + 0x1530) = delta_time;
      delta_time = delta_time + dRam0000000180d49268;
      dRam0000000180d48d48 = dRam0000000180d48d48 + (frame_time - dRam0000000180d48d50);
      uRam0000000180d48d44 = uRam0000000180d48d44 + 1;
      data_length = (ulonglong)uRam0000000180d48d44;
      dRam0000000180d48d50 = frame_time;
      dRam0000000180d49268 = delta_time;
      if (1.0 < dRam0000000180d48d48) {
        dRam0000000180d48d48 = 0.0;
        uRam0000000180d48d44 = 0;
        dRam0000000180d49268 = 0.0;
        *(double *)(memory_address + 0x1510) = (double)(float)((double)data_length / delta_time);
      }
    }
    if (*(uint *)(allocation_size + 0x2ca8) == (*(uint *)(allocation_size + 0x2ca8) / 10) * 10) {
      *(int *)(allocation_size + 0x1520) = *(int *)(allocation_size + 0x1520) + 1;
      frame_time = 1000.0 / *(double *)(allocation_size + 0x1510) + *(double *)(allocation_size + 0x1518);
      *(double *)(allocation_size + 0x1518) = frame_time;
      if (100000 < *(int *)(allocation_size + 0x1520)) {
        *(int32_t *)(allocation_size + 0x1520) = 100;
        *(double *)(allocation_size + 0x1518) = frame_time * 0.001;
      }
    }
    cleanup_game_logic(*(uint64_t *)(context_ptr + 0xa8));
    *(uint64_t *)(context_ptr + 0xa8) = 0;
    break;
  case 0x1b:
    // 关闭网络系统
    shutdown_network_system(_DAT_180c86938);
    break;
  case 0x1c:
    // 初始化网络连接
    transform_matrix = *(uint64_t *)(context_ptr + 0xa0);
    projection_matrix = *(uint64_t *)(context_ptr + 0xa8);
    view_matrix = *(uint64_t *)(context_ptr + 0xb0);
    world_matrix = *(uint64_t *)(context_ptr + 0xb8);
    vertex_count = *(int32_t *)(context_ptr + 0xc0);
    index_count = *(int32_t *)(context_ptr + 0xc4);
    primitive_count = *(int32_t *)(context_ptr + 200);
    draw_call_flags = *(int32_t *)(context_ptr + 0xcc);
    debug_info_ptr = *(uint64_t *)(context_ptr + 0xd0);
    initialize_network_connection(_DAT_180c86938,&transform_matrix,*(uint64_t *)(context_ptr + 0xd8));
    (**(code **)(**(longlong **)(context_ptr + 0xd8) + 0x38))();
    break;
  case 0x1d:
    // 发送网络数据
    vertex_buffer_flags = *(int32_t *)(context_ptr + 0xa0);
    index_buffer_flags = *(int32_t *)(context_ptr + 0xa4);
    shader_flags = *(int32_t *)(context_ptr + 0xa8);
    texture_flags = *(int32_t *)(context_ptr + 0xac);
    frame_timestamp = *(uint64_t *)(context_ptr + 0xb0);
    render_state_flags = *(int32_t *)(context_ptr + 0xb8);
    send_network_data(_DAT_180c86938,&vertex_buffer_flags,*(uint64_t *)(context_ptr + 0xc0));
    break;
  case 0x1e:
  case 0x29:
  case 0x2a:
    // 空操作命令
    break;
  case 0x1f:
    // 加载游戏资源
    physics_manager_ptr = *(longlong **)(context_ptr + 0xa0);
    resource_handle = load_resource_bundle(&ui_manager_ptr,physics_manager_ptr[0x21],*(int32_t *)(context_ptr + 0xb0));
    register_resource_bundle(physics_manager_ptr + 0x20,resource_handle);
    if (ui_manager_ptr != (longlong *)0x0) {
      (**(code **)(*ui_manager_ptr + 0x38))();
    }
    *(int32_t *)(physics_manager_ptr[0x20] + 0x3a8) = *(int32_t *)(_DAT_180c86890 + 0x1500);
    *(int32_t *)((longlong)physics_manager_ptr + 0x4c) = 0x14;
    (**(code **)(*physics_manager_ptr + 0x38))(physics_manager_ptr);
    break;
  case 0x20:
    // 卸载游戏资源
    physics_manager_ptr = *(longlong **)(context_ptr + 0xa0);
    load_resource_bundle(&texture_manager_ptr,physics_manager_ptr[0x22],*(int32_t *)(context_ptr + 0xb0));
    texture_manager_ptr = texture_manager_ptr;
    ui_manager_ptr = texture_manager_ptr;
    if (texture_manager_ptr != (longlong *)0x0) {
      (**(code **)(*texture_manager_ptr + 0x28))(texture_manager_ptr);
    }
    ui_manager_ptr = (longlong *)physics_manager_ptr[0x23];
    physics_manager_ptr[0x23] = (longlong)texture_manager_ptr;
    if (ui_manager_ptr != (longlong *)0x0) {
      (**(code **)(*ui_manager_ptr + 0x38))();
    }
    *(int32_t *)((longlong)physics_manager_ptr + 0x4c) = 0xd;
    input_manager_ptr = (longlong *)physics_manager_ptr[0x22];
    physics_manager_ptr[0x22] = 0;
    if (input_manager_ptr != (longlong *)0x0) {
      (**(code **)(*input_manager_ptr + 0x38))();
    }
    (**(code **)(*physics_manager_ptr + 0x38))(physics_manager_ptr);
    if (texture_manager_ptr != (longlong *)0x0) {
      (**(code **)(*texture_manager_ptr + 0x38))();
    }
    break;
  case 0x21:
    // 激活游戏资源
    physics_manager_ptr = *(longlong **)(context_ptr + 0xa0);
    load_resource_bundle(&resource_manager_ptr,physics_manager_ptr[0x24],*(int32_t *)(context_ptr + 0xb0));
    texture_manager_ptr = resource_manager_ptr;
    shader_manager_ptr = resource_manager_ptr;
    if (resource_manager_ptr != (longlong *)0x0) {
      (**(code **)(*resource_manager_ptr + 0x28))(resource_manager_ptr);
    }
    shader_manager_ptr = (longlong *)physics_manager_ptr[0x25];
    physics_manager_ptr[0x25] = (longlong)texture_manager_ptr;
    if (shader_manager_ptr != (longlong *)0x0) {
      (**(code **)(*shader_manager_ptr + 0x38))();
    }
    *(int32_t *)((longlong)physics_manager_ptr + 0x4c) = 7;
    audio_manager_ptr = (longlong *)physics_manager_ptr[0x24];
    physics_manager_ptr[0x24] = 0;
    if (audio_manager_ptr != (longlong *)0x0) {
      (**(code **)(*audio_manager_ptr + 0x38))();
    }
    (**(code **)(*physics_manager_ptr + 0x38))(physics_manager_ptr);
    if (resource_manager_ptr != (longlong *)0x0) {
      (**(code **)(*resource_manager_ptr + 0x38))();
    }
    break;
  case 0x22:
    // 保存游戏状态
    save_game_state(*(uint64_t *)(context_ptr + 0xa0),*(uint64_t *)(context_ptr + 0xa8));
    serialize_game_data(*(uint64_t *)(context_ptr + 0xa0),*(uint64_t *)(context_ptr + 0xa8));
    break;
  case 0x23:
    // 加载游戏状态
    load_game_state(memory_address,*(uint64_t *)(context_ptr + 0xa0));
    break;
  case 0x24:
    // 加载游戏状态到槽位
    load_game_state(memory_address,*(uint64_t *)(*(longlong *)(context_ptr + 0xa0) + 0x18));
    *(uint64_t *)(*(longlong *)(context_ptr + 0xa0) + 0x18) = 0;
    LOCK();
    error_code_ptr = (int *)(*(longlong *)(context_ptr + 0xa0) + 0x14);
    *error_code_ptr = *error_code_ptr + -1;
    UNLOCK();
    break;
  case 0x25:
    // 保存游戏进度
    save_game_progress(memory_address,*(uint64_t *)(context_ptr + 0xa0));
    break;
  case 0x26:
    // 保存游戏进度到槽位
    save_game_progress(memory_address,*(uint64_t *)(*(longlong *)(context_ptr + 0xa0) + 0x18));
    *(uint64_t *)(*(longlong *)(context_ptr + 0xa0) + 0x18) = 0;
    LOCK();
    error_code_ptr = (int *)(*(longlong *)(context_ptr + 0xa0) + 0x10);
    *error_code_ptr = *error_code_ptr + -1;
    UNLOCK();
    break;
  case 0x27:
    // 重置游戏系统
    reset_game_system();
    break;
  case 0x28:
    // 清理游戏缓存
    clear_game_cache();
    break;
  case 0x2b:
  case 0x2c:
    // 清理系统资源
    if (*(longlong *)(context_ptr + 0xa0) != 0) {
      // 触发系统清理
      trigger_system_cleanup();
    }
    *(uint64_t *)(context_ptr + 0xa0) = 0;
    if (*(longlong *)(context_ptr + 0xa8) != 0) {
      *(uint64_t *)(*(longlong *)(context_ptr + 0xa8) + 0x1d8) = 0;
    }
    break;
  case 0x2d:
    // 处理用户输入
    resource_handle = get_input_manager_instance(*(uint64_t *)(context_ptr + 0xa0));
    process_user_input(performance_counter,*(uint64_t *)(context_ptr + 0xa8),*(int32_t *)(context_ptr + 0xb0),
                      resource_handle);
    (**(code **)(**(longlong **)(context_ptr + 0xa0) + 0x38))();
  }
invalid_command_handler:
command_complete_handler:
                    // 命令处理完成，调用清理函数
  cleanup_command_handler(security_checksum ^ (ulonglong)security_buffer);
}


// 函数: void FUN_180152870(longlong *param_1)
// 功能: 清理资源引用 - 释放资源并清除引用
void cleanup_resource_reference(longlong *resource_ptr)

{
  if (resource_ptr == (longlong *)0x0) {
    return;
  }
  if (*(char *)((longlong)resource_ptr + 0x11) == '\0') {
    if (((char)resource_ptr[2] == '\0') && (*resource_ptr != 0)) {
      // 资源引用错误
      trigger_resource_reference_error();
    }
    *resource_ptr = 0;
    resource_ptr[1] = 0;
    *(int8_t *)(resource_ptr + 2) = 0;
  }
                    // 资源清理失败
  trigger_resource_cleanup_failure(resource_ptr);
}


// 函数: void FUN_1801528b0(longlong param_1)
// 功能: 重置渲染管理器 - 清理渲染相关的管理器和状态
void reset_render_manager(longlong manager_context)

{
  // 重置主渲染管理器
  *(uint64_t *)(manager_context + 0x68) = &unknown_var_3456_ptr;
  if (*(longlong *)(manager_context + 0x70) != 0) {
    // 渲染管理器状态错误
    trigger_render_manager_error();
  }
  *(uint64_t *)(manager_context + 0x70) = 0;
  *(int32_t *)(manager_context + 0x80) = 0;
  *(uint64_t *)(manager_context + 0x68) = &unknown_var_720_ptr;
  
  // 重置纹理管理器
  *(uint64_t *)(manager_context + 0x48) = &unknown_var_3456_ptr;
  if (*(longlong *)(manager_context + 0x50) != 0) {
    // 纹理管理器状态错误
    trigger_texture_manager_error();
  }
  *(uint64_t *)(manager_context + 0x50) = 0;
  *(int32_t *)(manager_context + 0x60) = 0;
  *(uint64_t *)(manager_context + 0x48) = &unknown_var_720_ptr;
  
  // 重置着色器管理器
  *(uint64_t *)(manager_context + 0x28) = &unknown_var_3456_ptr;
  if (*(longlong *)(manager_context + 0x30) != 0) {
    // 着色器管理器状态错误
    trigger_shader_manager_error();
  }
  *(uint64_t *)(manager_context + 0x30) = 0;
  *(int32_t *)(manager_context + 0x40) = 0;
  *(uint64_t *)(manager_context + 0x28) = &unknown_var_720_ptr;
  
  // 重置缓冲区管理器
  *(uint64_t *)(manager_context + 8) = &unknown_var_3456_ptr;
  if (*(longlong *)(manager_context + 0x10) != 0) {
    // 缓冲区管理器状态错误
    trigger_buffer_manager_error();
  }
  *(uint64_t *)(manager_context + 0x10) = 0;
  *(int32_t *)(manager_context + 0x20) = 0;
  *(uint64_t *)(manager_context + 8) = &unknown_var_720_ptr;
  return;
}


// 函数: void FUN_180152990(longlong *param_1)
// 功能: 批量重置渲染管理器 - 遍历管理器数组并逐个重置
void batch_reset_render_managers(longlong *manager_array)

{
  longlong array_start;
  longlong array_end;
  
  array_start = manager_array[1];
  for (array_end = *manager_array; array_end != array_start; array_end = array_end + 0x98) {
    reset_render_manager(array_end);
  }
  if (*manager_array == 0) {
    return;
  }
                    // 管理器数组错误
  trigger_manager_array_error();
}


// 函数: void FUN_180152a00(longlong *param_1)
// 功能: 批量重置纹理管理器 - 遍历纹理管理器数组并逐个重置
void batch_reset_texture_managers(longlong *manager_array)

{
  longlong array_start;
  longlong array_end;
  
  array_start = manager_array[1];
  for (array_end = *manager_array; array_end != array_start; array_end = array_end + 0x98) {
    reset_render_manager(array_end);
  }
  if (*manager_array == 0) {
    return;
  }
                    // 纹理管理器数组错误
  trigger_texture_manager_array_error();
}


// 函数: void FUN_180152a20(uint64_t *param_1)
// 功能: 重置着色器管理器 - 清理着色器相关的状态和资源
void reset_shader_manager(uint64_t *shader_context)

{
  batch_reset_render_managers();
  *shader_context = &unknown_var_3456_ptr;
  if (shader_context[1] != 0) {
    // 着色器上下文错误
    trigger_shader_context_error();
  }
  shader_context[1] = 0;
  *(int32_t *)(shader_context + 3) = 0;
  *shader_context = &unknown_var_720_ptr;
  return;
}


// 函数: void FUN_180152a80(longlong *param_1)
// 功能: 批量重置着色器管理器 - 遍历着色器管理器数组并逐个重置
void batch_reset_shader_managers(longlong *manager_array)

{
  longlong array_start;
  longlong array_end;
  
  array_start = manager_array[1];
  for (array_end = *manager_array; array_end != array_start; array_end = array_end + 0x40) {
    reset_shader_manager(array_end);
  }
  if (*manager_array == 0) {
    return;
  }
                    // 着色器管理器数组错误
  trigger_shader_manager_array_error();
}


// 函数: void FUN_180152ae0(longlong *param_1)
// 功能: 批量重置缓冲区管理器 - 遍历缓冲区管理器数组并逐个重置
void batch_reset_buffer_managers(longlong *manager_array)

{
  longlong array_start;
  longlong array_end;
  
  array_start = manager_array[1];
  for (array_end = *manager_array; array_end != array_start; array_end = array_end + 0x40) {
    reset_shader_manager(array_end);
  }
  if (*manager_array == 0) {
    return;
  }
                    // 缓冲区管理器数组错误
  trigger_buffer_manager_array_error();
}


// 函数: void FUN_180152b00(uint64_t *param_1)
// 功能: 重置缓冲区管理器 - 清理缓冲区相关的状态和资源
void reset_buffer_manager(uint64_t *buffer_context)

{
  batch_reset_shader_managers();
  *buffer_context = &unknown_var_3456_ptr;
  if (buffer_context[1] != 0) {
    // 缓冲区上下文错误
    trigger_buffer_context_error();
  }
  buffer_context[1] = 0;
  *(int32_t *)(buffer_context + 3) = 0;
  *buffer_context = &unknown_var_720_ptr;
  return;
}


// 警告：全局变量起始符号与较小符号重叠


// 函数: void FUN_180152b60(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
// 功能: 初始化引擎模块 - 设置引擎的核心模块和初始化参数
void initialize_engine_module(uint64_t module_handle,uint64_t init_flags,uint64_t config_data,uint64_t version_info)

{
  int32_t init_result;
  int32_t *module_config;
  void *module_security;
  int32_t *module_resources;
  int32_t resource_count;
  uint64_t resource_handle;
  
  module_security = &unknown_var_3456_ptr;
  resource_handle = 0;
  module_resources = (int32_t *)0x0;
  resource_count = 0;
  module_config = (int32_t *)allocate_engine_memory(_DAT_180c8ed18,0x12,0x13,version_info,0xfffffffffffffffe);
  *(int8_t *)module_config = 0;
  module_resources = module_config;
  init_result = validate_engine_module(module_config);
  resource_handle = CONCAT44(resource_handle._4_4_,init_result);
  *module_config = 0x69676e45;  // "Engi"
  module_config[1] = 0x4d20656e;  // "ne M"
  module_config[2] = 0x6c75646f;  // "doul"
  module_config[3] = 0x6e692065;  // "e in"
  *(int16_t *)(module_config + 4) = 0x69;  // "i"
  resource_count = 0x11;
  register_engine_module(module_handle,&module_security);
  module_security = &unknown_var_3456_ptr;
                    // 模块初始化失败
  trigger_module_initialization_failure(module_config);
}


// 函数: uint64_t FUN_180153890(uint64_t param_1,ulonglong param_2)
// 功能: 释放引擎内存 - 根据标志释放分配的内存
uint64_t release_engine_memory(uint64_t memory_ptr,ulonglong free_flags)

{
  cleanup_engine_memory_allocation();
  if ((free_flags & 1) != 0) {
    free(memory_ptr,0x1010);
  }
  return memory_ptr;
}