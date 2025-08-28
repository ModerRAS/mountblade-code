#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part033.c - 核心引擎模块第33部分 - 3个函数

/**
 * 释放内存资源
 * 处理引擎中的内存资源释放，包括异常处理和引用计数管理
 * 
 * @param resource_context 资源上下文指针
 */
void release_memory_resource(longlong resource_context)
{
  int *reference_count;
  undefined8 *resource_ptr;
  longlong memory_block;
  ulonglong resource_base;
  
  resource_ptr = *(undefined8 **)(resource_context + 0x28);
  if (resource_ptr == (undefined8 *)0x0) {
    return;
  }
  
  // 检查资源基地址是否有效
  resource_base = (ulonglong)resource_ptr & 0xffffffffffc00000;
  if (resource_base != 0) {
    // 计算内存块位置
    memory_block = resource_base + 0x80 + ((longlong)resource_ptr - resource_base >> 0x10) * 0x50;
    memory_block = memory_block - (ulonglong)*(uint *)(memory_block + 4);
    
    // 检查是否为异常列表且资源未被占用
    if ((*(void ***)(resource_base + 0x70) == &ExceptionList) && (*(char *)(memory_block + 0xe) == '\0')) {
      // 从链表中移除资源
      *resource_ptr = *(undefined8 *)(memory_block + 0x20);
      *(undefined8 **)(memory_block + 0x20) = resource_ptr;
      
      // 减少引用计数
      reference_count = (int *)(memory_block + 0x18);
      *reference_count = *reference_count + -1;
      
      // 如果引用计数为0，执行清理
      if (*reference_count == 0) {
        cleanup_resource_manager();
        return;
      }
    }
    else {
      // 处理异常情况
      handle_resource_exception(resource_base, 
                               CONCAT71(0xff000000,*(void ***)(resource_base + 0x70) == &ExceptionList),
                               resource_ptr, resource_base, 0xfffffffffffffffe);
    }
  }
  return;
}

/**
 * 处理渲染状态更新
 * 管理渲染管道的状态更新，包括矩阵变换和材质设置
 * 
 * @param render_context 渲染上下文
 * @param state_flags 状态标志
 * @param matrix_data 矩阵数据
 * @param texture_handle 纹理句柄
 * @param shader_handle 着色器句柄
 * 
 * @return 处理结果状态码
 */
ulonglong update_render_state(longlong render_context, uint *state_flags, float *matrix_data,
                            longlong texture_handle, longlong shader_handle)
{
  float transform_matrix[16];
  float result_matrix[16];
  float temp_matrix[16];
  float view_matrix[16];
  float projection_matrix[16];
  float model_matrix[16];
  float mvp_matrix[16];
  uint render_state;
  undefined4 blend_state;
  undefined4 depth_state;
  undefined4 stencil_state;
  float viewport_data[12];
  undefined8 shader_program;
  undefined8 texture_resource;
  undefined8 render_target;
  byte state_dirty;
  byte texture_bound;
  undefined4 clear_color[4];
  undefined8 uniform_buffer;
  ulonglong result_status;
  undefined8 *vertex_buffer;
  longlong device_context;
  longlong shader_context;
  undefined4 *index_buffer;
  uint *constant_buffer;
  byte blend_enabled;
  char *texture_name;
  int frame_index;
  ulonglong texture_index;
  uint *render_queue;
  bool queue_modified;
  undefined4 temp_state[2];
  uint *input_layout;
  float *vertex_data;
  longlong command_list;
  
  input_layout = state_flags;
  vertex_data = matrix_data;
  command_list = texture_handle;
  
  // 初始化渲染状态
  if (*(char *)(render_context + 0xf9) == '\0') {
    shader_program = create_shader_program(_DAT_180c8ed18, 0xc0, 8, 9);
    shader_program = compile_shader(shader_program);
    *(undefined8 *)(render_context + 0x1d8) = shader_program;
    LOCK();
    *(undefined1 *)(render_context + 0xf9) = 1;
    UNLOCK();
  }
  
  // 更新纹理状态
  if ((char)*(byte *)(render_context + 0xfd) < '\0') {
    device_context = *(longlong *)(render_context + 0x1b8);
    texture_resource = *(undefined8 *)(device_context + 0x290);
    *(undefined8 *)(render_context + 0x2a8) = *(undefined8 *)(device_context + 0x288);
    *(undefined8 *)(render_context + 0x2b0) = texture_resource;
    blend_state = *(undefined4 *)(device_context + 0x29c);
    depth_state = *(undefined4 *)(device_context + 0x2a0);
    stencil_state = *(undefined4 *)(device_context + 0x2a4);
    *(undefined4 *)(render_context + 0x2b8) = *(undefined4 *)(device_context + 0x298);
    *(undefined4 *)(render_context + 700) = blend_state;
    *(undefined4 *)(render_context + 0x2c0) = depth_state;
    *(undefined4 *)(render_context + 0x2c4) = stencil_state;
  }
  
  result_status = (ulonglong)*(uint *)(render_context + 0x270);
  if ((*state_flags & *(uint *)(render_context + 0x270)) == 0) goto update_complete;
  
  texture_bound = *(byte *)(render_context + 0xfd) & 0x20;
  device_context = render_context;
  if (texture_bound == 0) {
    device_context = get_device_context(*(undefined8 *)(render_context + 0x1b0));
  }
  
  if (*(int *)(device_context + 0x200) == 0) {
  check_render_state:
    if ((*(byte *)(render_context + 0x100) & 4) != 0) goto prepare_render;
    
    device_context = *(longlong *)(render_context + 0x1b8);
    result_status = 0;
    if (*(char *)(device_context + 0x38c) == '\t') {
      result_status = get_render_target_status();
      *(char *)(device_context + 0x38c) = (char)result_status;
      if ((char)result_status == '\t') goto prepare_render;
    }
  update_complete:
    result_status = result_status & 0xffffffffffffff00;
  }
  else {
    device_context = render_context;
    if (texture_bound == 0) {
      device_context = get_device_context(*(undefined8 *)(render_context + 0x1b0));
    }
    if (*(int *)(device_context + 0x1fc) * 3 == 0) goto check_render_state;
    
  prepare_render:
    state_dirty = check_render_state_dirty(render_context);
    if ((state_dirty == '\0') || (texture_handle == 0)) {
      reset_render_pipeline(render_context, 0);
      if ((*(byte *)(render_context + 0xfe) & 4) == 0) {
        texture_resource = update_texture_state(render_context, state_flags);
        blend_enabled = (char)texture_resource << 2;
        texture_bound = blend_enabled | *(byte *)(render_context + 0xfe) & 0xfb;
        result_status = CONCAT71((int7)((ulonglong)texture_resource >> 8), texture_bound);
        *(byte *)(render_context + 0xfe) = texture_bound;
        if ((blend_enabled & 4) == 0) goto update_complete;
      }
      
      render_state = *(uint *)(*(longlong *)(render_context + 0x1b8) + 0x388);
      if (((render_state >> 0x19 & 1) != 0) ||
         ((*(longlong *)(render_context + 600) != 0 && (0 < *(int *)(*(longlong *)(render_context + 600) + 0x1c)))
         )) {
        frame_index = *(int *)(_DAT_180c86870 + 0x224);
        vertex_buffer = *(undefined8 **)(render_context + 600);
        
        if (vertex_buffer == (undefined8 *)0x0) {
          vertex_buffer = (undefined8 *)create_vertex_buffer(_DAT_180c8ed18, 0x58, 8, 3);
          *(undefined8 *)((longlong)vertex_buffer + 0x2c) = 0xffffffffffffffff;
          *(undefined4 *)(vertex_buffer + 9) = 0xffffffff;
          *vertex_buffer = 0;
          vertex_buffer[2] = 0;
          vertex_buffer[7] = 0;
          *(undefined4 *)(vertex_buffer + 5) = 0xffffffff;
          *(undefined4 *)(vertex_buffer + 4) = 0xffffffff;
          vertex_buffer[3] = 0;
          *(undefined4 *)(vertex_buffer + 8) = 0;
          *(undefined4 *)(vertex_buffer + 1) = 0;
          *(undefined1 *)((longlong)vertex_buffer + 0x44) = 0;
          *(undefined1 *)((longlong)vertex_buffer + 0x24) = 0;
          *(undefined8 **)(render_context + 600) = vertex_buffer;
        }
        
        matrix_data = vertex_data;
        if (*(int *)(vertex_buffer + 4) != frame_index) {
          *(int *)(vertex_buffer + 4) = frame_index;
          update_shader_constants(render_context, shader_handle);
          matrix_data = vertex_data;
          if (((byte)(render_state >> 0x19) & 1) != 0) {
            if ((*(uint *)(render_context + 0x100) & 0x800) != 0) {
              flush_render_cache(render_context);
            }
            
            // 处理渲染队列
            command_list = _DAT_180c86890 + 0x5868;
            render_queue = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0x6a78) * 0x908 + command_list);
            LOCK();
            render_state = *render_queue;
            *render_queue = *render_queue + 1;
            UNLOCK();
            
            result_status = (ulonglong)(render_state >> 9);
            texture_index = (ulonglong)(render_state >> 9);
            texture_name = (char *)((longlong)render_queue + texture_index + 0x808);
            constant_buffer = render_queue + (result_status + 1) * 2;
            
            // 处理渲染命令
            do {
              frame_index = (int)texture_index;
              if (*(longlong *)constant_buffer == 0) {
                device_context = create_render_target(_DAT_180c8ed18, 0xc000, 0x25);
                LOCK();
                queue_modified = *(longlong *)(render_queue + (longlong)frame_index * 2 + 2) == 0;
                if (queue_modified) {
                  *(longlong *)(render_queue + (longlong)frame_index * 2 + 2) = device_context;
                }
                UNLOCK();
                if (queue_modified) {
                  process_render_queue(render_queue, frame_index << 9);
                  LOCK();
                  *(undefined1 *)((longlong)render_queue + (longlong)frame_index + 0x808) = 0;
                  UNLOCK();
                  result_status = texture_index;
                }
                else {
                  if (device_context != 0) {
                    // 错误处理
                    handle_render_error();
                  }
                  do {
                    result_status = texture_index;
                  } while (*texture_name != '\0');
                }
              }
              else {
                do {
                } while (*texture_name != '\0');
              }
              texture_name = texture_name + 1;
              texture_index = (ulonglong)(frame_index + 1);
              constant_buffer = constant_buffer + 2;
            } while ((longlong)(texture_name + (-0x808 - (longlong)render_queue)) <= (longlong)result_status);
            
            vertex_buffer = (undefined8 *)
                      (*(longlong *)
                        ((longlong)*(int *)(command_list + 0x1210) * 0x908 + command_list + 8 +
                        result_status * 8) + (ulonglong)(render_state - (render_state & 0xfffffe00)) * 0x60);
            
            device_context = render_context;
            command_list = vertex_buffer;
            if ((*(byte *)(render_context + 0xfd) & 0x20) == 0) {
              device_context = get_device_context(*(undefined8 *)(render_context + 0x1b0));
            }
            
            shader_context = *(longlong *)(render_context + 0x1b8);
            texture_bound = *(byte *)(shader_context + 0x38c);
            if (texture_bound == 9) {
              texture_bound = get_render_target_status();
              *(byte *)(shader_context + 0x38c) = texture_bound;
            }
            
            state_flags = input_layout;
            device_context = *(longlong *)(device_context + 0x1e0);
            *vertex_buffer = *(undefined8 *)(device_context + (ulonglong)texture_bound * 0x18);
            vertex_buffer[1] = *(undefined8 *)(device_context + 8 + (ulonglong)texture_bound * 0x18);
            
            // 设置渲染状态
            *(undefined4 *)(command_list + 2) = *(undefined4 *)(*(longlong *)(render_context + 600) + 0x2c);
            *(undefined4 *)((longlong)command_list + 0x14) = *(undefined4 *)(*(longlong *)(render_context + 600) + 0x4c);
            *(int *)(command_list + 9) = (int)*(char *)(*(longlong *)(render_context + 600) + 0x44);
            
            // 设置混合状态
            if ((*(longlong *)(render_context + 0x2d0) == 0) ||
               (*(int *)(*(longlong *)(render_context + 0x2d0) + 0x14) == 0)) {
              blend_state = 0xffffffff;
            }
            else {
              blend_state = *(undefined4 *)(render_context + 0x108);
            }
            *(undefined4 *)(command_list + 3) = blend_state;
            
            // 设置深度状态
            if ((*(longlong *)(render_context + 0x2d0) == 0) ||
               (*(int *)(*(longlong *)(render_context + 0x2d0) + 0x14) == 0)) {
              depth_state = 0xffffffff;
            }
            else {
              depth_state = *(undefined4 *)(render_context + 0x10c);
            }
            *(undefined4 *)((longlong)command_list + 0x1c) = depth_state;
            
            // 设置模板状态
            if ((*(longlong *)(render_context + 0x2d0) == 0) ||
               (*(int *)(*(longlong *)(render_context + 0x2d0) + 0x14) == 0)) {
              stencil_state = 0xffffffff;
            }
            else {
              stencil_state = *(undefined4 *)(render_context + 0x110);
            }
            *(undefined4 *)(command_list + 4) = stencil_state;
            
            *(byte *)((longlong)command_list + 0x4e) = *(byte *)(render_context + 0xfe) >> 3 & 1;
            
            // 设置纹理状态
            if (*(int *)(render_context + 0x108) != -1) {
              index_buffer = *(undefined4 **)(render_context + 0x2d0);
              blend_state = index_buffer[1];
              depth_state = index_buffer[2];
              stencil_state = index_buffer[3];
              *(undefined4 *)(command_list + 5) = *index_buffer;
              *(undefined4 *)((longlong)command_list + 0x2c) = blend_state;
              *(undefined4 *)(command_list + 6) = depth_state;
              *(undefined4 *)((longlong)command_list + 0x34) = stencil_state;
              texture_resource = *(undefined8 *)(index_buffer + 6);
              command_list[7] = *(undefined8 *)(index_buffer + 4);
              command_list[8] = texture_resource;
            }
            
            *(undefined1 *)((longlong)command_list + 0x4f) = *(undefined1 *)(*(longlong *)(render_context + 600) + 0x24);
            device_context = *(longlong *)(render_context + 600);
            
            if (*(char *)(device_context + 0x24) != '\0') {
              blend_state = *(undefined4 *)(render_context + 0x2ac);
              depth_state = *(undefined4 *)(render_context + 0x2b0);
              stencil_state = *(undefined4 *)(render_context + 0x2b4);
              *(undefined4 *)(command_list + 10) = *(undefined4 *)(render_context + 0x2a8);
              *(undefined4 *)((longlong)command_list + 0x54) = blend_state;
              *(undefined4 *)(command_list + 0xb) = depth_state;
              *(undefined4 *)((longlong)command_list + 0x5c) = stencil_state;
              device_context = *(longlong *)(render_context + 600);
            }
            
            *(bool *)((longlong)command_list + 0x4c) = *(longlong *)(device_context + 0x10) != 0;
            *(undefined1 *)((longlong)command_list + 0x4d) = 1;
            
            if ((*(char *)(shader_handle + 0xc) != '\0') ||
               (0 < *(int *)(*(longlong *)(render_context + 600) + 0x1c))) {
              *(undefined1 *)((longlong)command_list + 0x4d) = 0;
            }
            
            if (*(uint **)(input_layout + 10) == (uint *)0x0) {
              temp_state[0] = 0xffffffff;
              index_buffer = temp_state;
              constant_buffer = input_layout;
            }
            else {
              temp_state[0] = 0xffffffff;
              index_buffer = temp_state;
              constant_buffer = *(uint **)(input_layout + 10);
            }
            
            execute_render_command(constant_buffer + 0xce2, index_buffer, command_list);
            matrix_data = vertex_data;
            texture_handle = command_list;
          }
        }
      }
    }
    
    // 处理矩阵变换
    if ((*(uint *)(render_context + 0x100) & 0x4000000) != 0) {
      // 提取矩阵数据
      result_matrix[0] = *matrix_data;
      result_matrix[1] = matrix_data[1];
      result_matrix[2] = matrix_data[2];
      result_matrix[3] = matrix_data[3];
      result_matrix[4] = matrix_data[4];
      result_matrix[5] = matrix_data[5];
      result_matrix[6] = matrix_data[6];
      result_matrix[7] = matrix_data[7];
      result_matrix[8] = matrix_data[8];
      result_matrix[9] = matrix_data[9];
      result_matrix[10] = matrix_data[10];
      result_matrix[11] = matrix_data[0xb];
      
      // 获取变换矩阵
      model_matrix[0] = *(float *)(render_context + 0x124);
      model_matrix[1] = *(float *)(render_context + 0x120);
      model_matrix[2] = *(float *)(render_context + 0x128);
      view_matrix[0] = *(float *)(render_context + 0x134);
      view_matrix[1] = *(float *)(render_context + 0x130);
      
      // 计算变换
      transform_matrix[0] = model_matrix[0] * result_matrix[4] + model_matrix[1] * result_matrix[0] + model_matrix[2] * result_matrix[8];
      transform_matrix[1] = model_matrix[0] * result_matrix[5] + model_matrix[1] * result_matrix[1] + model_matrix[2] * result_matrix[9];
      transform_matrix[2] = model_matrix[0] * result_matrix[6] + model_matrix[1] * result_matrix[2] + model_matrix[2] * result_matrix[10];
      transform_matrix[3] = model_matrix[0] * result_matrix[7] + model_matrix[1] * result_matrix[3] + model_matrix[2] * result_matrix[11];
      
      model_matrix[0] = *(float *)(render_context + 0x138);
      model_matrix[1] = *(float *)(render_context + 0x140);
      model_matrix[2] = *(float *)(render_context + 0x144);
      
      transform_matrix[4] = view_matrix[0] * result_matrix[4] + view_matrix[1] * result_matrix[0] + model_matrix[0] * result_matrix[8];
      transform_matrix[5] = view_matrix[0] * result_matrix[5] + view_matrix[1] * result_matrix[1] + model_matrix[0] * result_matrix[9];
      transform_matrix[6] = view_matrix[0] * result_matrix[6] + view_matrix[1] * result_matrix[2] + model_matrix[0] * result_matrix[10];
      transform_matrix[7] = view_matrix[0] * result_matrix[7] + view_matrix[1] * result_matrix[3] + model_matrix[0] * result_matrix[11];
      
      model_matrix[0] = *(float *)(render_context + 0x148);
      view_matrix[0] = *(float *)(render_context + 0x154);
      view_matrix[1] = *(float *)(render_context + 0x150);
      
      transform_matrix[8] = model_matrix[2] * result_matrix[4] + model_matrix[1] * result_matrix[0] + model_matrix[0] * result_matrix[8];
      transform_matrix[9] = model_matrix[2] * result_matrix[5] + model_matrix[1] * result_matrix[1] + model_matrix[0] * result_matrix[9];
      transform_matrix[10] = model_matrix[2] * result_matrix[6] + model_matrix[1] * result_matrix[2] + model_matrix[0] * result_matrix[10];
      transform_matrix[11] = model_matrix[2] * result_matrix[7] + model_matrix[1] * result_matrix[3] + model_matrix[0] * result_matrix[11];
      
      model_matrix[0] = *(float *)(render_context + 0x158);
      transform_matrix[12] = view_matrix[0] * result_matrix[4] + view_matrix[1] * result_matrix[0] + model_matrix[0] * result_matrix[8] + matrix_data[0xc];
      transform_matrix[13] = view_matrix[0] * result_matrix[5] + view_matrix[1] * result_matrix[1] + model_matrix[0] * result_matrix[9] + matrix_data[0xd];
      transform_matrix[14] = view_matrix[0] * result_matrix[6] + view_matrix[1] * result_matrix[2] + model_matrix[0] * result_matrix[10] + matrix_data[0xe];
      transform_matrix[15] = view_matrix[0] * result_matrix[7] + view_matrix[1] * result_matrix[3] + model_matrix[0] * result_matrix[11] + matrix_data[0xf];
      
      matrix_data = transform_matrix;
    }
    
    // 应用渲染状态
    apply_render_state(&render_target, state_flags + 0xc, *(undefined1 *)(render_context + 0xf7), matrix_data);
    render_state = state_flags[0x6f6];
    frame_index = *(int *)(_DAT_180c86870 + 0x224);
    
    if (((*(byte *)(render_context + 0xfd) & 1) == 0) &&
       ((*(int *)(render_context + 0x1d0) == frame_index || (*(int *)(render_context + 0x1d0) == frame_index + -1)))) {
      texture_bound = 0;
    }
    else {
      texture_bound = 1;
    }
    
    *(byte *)(render_context + 0xfd) = *(byte *)(render_context + 0xfd) & 0xfe | texture_bound;
    blend_enabled = (byte)render_state & 0x20;
    
    if ((blend_enabled != 0) && (texture_bound != 0)) {
      // 保存渲染状态
      *(undefined8 *)(render_context + 0x160) = render_target;
      *(undefined8 *)(render_context + 0x168) = render_target[1];
      *(undefined8 *)(render_context + 0x170) = render_target[2];
      *(undefined8 *)(render_context + 0x178) = render_target[3];
      *(undefined8 *)(render_context + 0x180) = render_target[4];
      *(undefined8 *)(render_context + 0x188) = render_target[5];
      *(undefined8 *)(render_context + 400) = render_target[6];
      *(undefined8 *)(render_context + 0x198) = render_target[7];
    }
    
    result_status = execute_render_pipeline(state_flags, render_context, &render_target, texture_handle, shader_handle);
    *(byte *)(render_context + 0xfd) = *(byte *)(render_context + 0xfd) & 0xfe;
    *(int *)(render_context + 0x1d0) = frame_index;
    
    if (blend_enabled != 0) {
      // 恢复渲染状态
      *(undefined8 *)(render_context + 0x160) = render_target;
      *(undefined8 *)(render_context + 0x168) = render_target[1];
      *(undefined8 *)(render_context + 0x170) = render_target[2];
      *(undefined8 *)(render_context + 0x178) = render_target[3];
      *(undefined8 *)(render_context + 0x180) = render_target[4];
      *(undefined8 *)(render_context + 0x188) = render_target[5];
      *(undefined8 *)(render_context + 400) = render_target[6];
      *(undefined8 *)(render_context + 0x198) = render_target[7];
    }
  }
  return result_status;
}

/**
 * 执行渲染后处理
 * 处理渲染完成后的清理工作，包括状态恢复和资源释放
 * 
 * @param render_context 渲染上下文
 * @param state_data 状态数据
 * @param matrix_buffer 矩阵缓冲区
 * @param texture_data 纹理数据
 * @param shader_data 着色器数据
 */
void execute_render_postprocess(longlong render_context, longlong state_data, float *matrix_buffer,
                               longlong texture_data, longlong shader_data)
{
  uint render_flags;
  float transform_matrix[16];
  float result_matrix[16];
  float temp_matrix[16];
  float view_matrix[16];
  float projection_matrix[16];
  float model_matrix[16];
  float mvp_matrix[16];
  undefined4 blend_state;
  undefined4 depth_state;
  undefined4 stencil_state;
  undefined8 shader_program;
  undefined8 texture_resource;
  undefined8 render_target;
  byte state_dirty;
  byte texture_bound;
  undefined4 clear_color[4];
  undefined8 uniform_buffer;
  ulonglong result_status;
  undefined8 *vertex_buffer;
  longlong device_context;
  longlong shader_context;
  undefined4 *index_buffer;
  uint *constant_buffer;
  char *texture_name;
  int frame_index;
  ulonglong texture_index;
  uint *render_queue;
  bool queue_modified;
  undefined4 temp_state[2];
  bool in_ZF;
  bool bVar43;
  undefined4 in_stack_00000030;
  ulonglong in_stack_00000038;
  undefined8 *in_stack_00000040;
  longlong in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  float fStack00000000000000a0[16];
  undefined4 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000108;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000118;
  undefined4 in_stack_00000170;
  longlong in_stack_00000178;
  float *in_stack_00000180;
  undefined8 in_stack_00000188;
  longlong in_stack_00000190;
  
  if (!in_ZF) {
    flush_render_cache();
  }
  
  in_stack_00000050 = _DAT_180c86890 + 0x5868;
  render_queue = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0x6a78) * 0x908 + in_stack_00000050);
  
  LOCK();
  render_flags = *render_queue;
  *render_queue = *render_queue + frame_index;
  UNLOCK();
  
  result_status = (ulonglong)(render_flags >> 9);
  texture_index = (ulonglong)(render_flags >> 9);
  texture_name = (char *)((longlong)render_queue + texture_index + 0x808);
  constant_buffer = render_queue + (result_status + 1) * 2;
  in_stack_00000038 = result_status;
  
  // 处理渲染队列
  do {
    frame_index = (int)texture_index;
    if (*(longlong *)constant_buffer == 0) {
      device_context = create_render_target(_DAT_180c8ed18, 0xc000, 0x25);
      LOCK();
      queue_modified = *(longlong *)(render_queue + (longlong)frame_index * 2 + 2) == 0;
      if (queue_modified) {
        *(longlong *)(render_queue + (longlong)frame_index * 2 + 2) = device_context;
      }
      UNLOCK();
      if (queue_modified) {
        process_render_queue(render_queue, frame_index << 9);
        LOCK();
        *(undefined1 *)((longlong)render_queue + (longlong)frame_index + 0x808) = 0;
        UNLOCK();
        result_status = in_stack_00000038;
      }
      else {
        if (device_context != 0) {
          // 错误处理
          handle_render_error();
        }
        do {
          result_status = in_stack_00000038;
        } while (*texture_name != '\0');
      }
    }
    else {
      do {
      } while (*texture_name != '\0');
    }
    texture_name = texture_name + 1;
    texture_index = (ulonglong)(frame_index + 1);
    constant_buffer = constant_buffer + 2;
  } while ((longlong)(texture_name + (-0x808 - (longlong)render_queue)) <= (longlong)result_status);
  
  vertex_buffer = (undefined8 *)
            (*(longlong *)
              ((longlong)*(int *)(in_stack_00000050 + 0x1210) * 0x908 + in_stack_00000050 + 8 +
              result_status * 8) + (ulonglong)(render_flags - (render_flags & 0xfffffe00)) * 0x60);
  
  device_context = render_context;
  in_stack_00000040 = vertex_buffer;
  
  if ((*(byte *)(render_context + 0xfd) & 0x20) == 0) {
    device_context = get_device_context(*(undefined8 *)(render_context + 0x1b0));
  }
  
  shader_context = *(longlong *)(render_context + 0x1b8);
  texture_bound = *(byte *)(shader_context + 0x38c);
  if (texture_bound == 9) {
    texture_bound = get_render_target_status();
    *(byte *)(shader_context + 0x38c) = texture_bound;
  }
  
  shader_context = in_stack_00000178;
  device_context = *(longlong *)(device_context + 0x1e0);
  *vertex_buffer = *(undefined8 *)(device_context + (ulonglong)texture_bound * 0x18);
  vertex_buffer[1] = *(undefined8 *)(device_context + 8 + (ulonglong)texture_bound * 0x18);
  
  // 设置渲染状态
  *(undefined4 *)(in_stack_00000040 + 2) = *(undefined4 *)(*(longlong *)(render_context + 600) + 0x2c);
  *(undefined4 *)((longlong)in_stack_00000040 + 0x14) = *(undefined4 *)(*(longlong *)(render_context + 600) + 0x4c);
  *(int *)(in_stack_00000040 + 9) = (int)*(char *)(*(longlong *)(render_context + 600) + 0x44);
  
  // 设置混合状态
  if ((*(longlong *)(render_context + 0x2d0) == 0) ||
     (*(int *)(*(longlong *)(render_context + 0x2d0) + 0x14) == 0)) {
    blend_state = 0xffffffff;
  }
  else {
    blend_state = *(undefined4 *)(render_context + 0x108);
  }
  *(undefined4 *)(in_stack_00000040 + 3) = blend_state;
  
  // 设置深度状态
  if ((*(longlong *)(render_context + 0x2d0) == 0) ||
     (*(int *)(*(longlong *)(render_context + 0x2d0) + 0x14) == 0)) {
    depth_state = 0xffffffff;
  }
  else {
    depth_state = *(undefined4 *)(render_context + 0x10c);
  }
  *(undefined4 *)((longlong)in_stack_00000040 + 0x1c) = depth_state;
  
  // 设置模板状态
  if ((*(longlong *)(render_context + 0x2d0) == 0) ||
     (*(int *)(*(longlong *)(render_context + 0x2d0) + 0x14) == 0)) {
    stencil_state = 0xffffffff;
  }
  else {
    stencil_state = *(undefined4 *)(render_context + 0x110);
  }
  *(undefined4 *)(in_stack_00000040 + 4) = stencil_state;
  
  *(byte *)((longlong)in_stack_00000040 + 0x4e) = *(byte *)(render_context + 0xfe) >> 3 & 1;
  
  // 设置纹理状态
  if (*(int *)(render_context + 0x108) != -1) {
    index_buffer = *(undefined4 **)(render_context + 0x2d0);
    blend_state = index_buffer[1];
    depth_state = index_buffer[2];
    stencil_state = index_buffer[3];
    *(undefined4 *)(in_stack_00000040 + 5) = *index_buffer;
    *(undefined4 *)((longlong)in_stack_00000040 + 0x2c) = blend_state;
    *(undefined4 *)(in_stack_00000040 + 6) = depth_state;
    *(undefined4 *)((longlong)in_stack_00000040 + 0x34) = stencil_state;
    texture_resource = *(undefined8 *)(index_buffer + 6);
    in_stack_00000040[7] = *(undefined8 *)(index_buffer + 4);
    in_stack_00000040[8] = texture_resource;
  }
  
  *(undefined1 *)((longlong)in_stack_00000040 + 0x4f) = *(undefined1 *)(*(longlong *)(render_context + 600) + 0x24);
  device_context = *(longlong *)(render_context + 600);
  
  if (*(char *)(device_context + 0x24) != '\0') {
    blend_state = *(undefined4 *)(render_context + 0x2ac);
    depth_state = *(undefined4 *)(render_context + 0x2b0);
    stencil_state = *(undefined4 *)(render_context + 0x2b4);
    *(undefined4 *)(in_stack_00000040 + 10) = *(undefined4 *)(render_context + 0x2a8);
    *(undefined4 *)((longlong)in_stack_00000040 + 0x54) = blend_state;
    *(undefined4 *)(in_stack_00000040 + 0xb) = depth_state;
    *(undefined4 *)((longlong)in_stack_00000040 + 0x5c) = stencil_state;
    device_context = *(longlong *)(render_context + 600);
  }
  
  *(bool *)((longlong)in_stack_00000040 + 0x4c) = *(longlong *)(device_context + 0x10) != 0;
  *(undefined1 *)((longlong)in_stack_00000040 + 0x4d) = 1;
  
  if ((*(char *)(shader_data + 0xc) != '\0') ||
     (0 < *(int *)(*(longlong *)(render_context + 600) + 0x1c))) {
    *(undefined1 *)((longlong)in_stack_00000040 + 0x4d) = 0;
  }
  
  if (*(longlong *)(state_data + 0x28) == 0) {
    in_stack_00000030 = 0xffffffff;
    index_buffer = &in_stack_00000030;
    device_context = state_data;
  }
  else {
    in_stack_00000170 = 0xffffffff;
    index_buffer = &in_stack_00000170;
    device_context = *(longlong *)(state_data + 0x28);
  }
  
  execute_render_command(device_context + 0x3388, index_buffer, &in_stack_00000040);
  
  matrix_buffer = in_stack_00000180;
  
  // 处理矩阵变换
  if ((*(uint *)(render_context + 0x100) & 0x4000000) != 0) {
    // 提取矩阵数据
    result_matrix[0] = *in_stack_00000180;
    result_matrix[1] = in_stack_00000180[1];
    result_matrix[2] = in_stack_00000180[2];
    result_matrix[3] = in_stack_00000180[3];
    result_matrix[4] = in_stack_00000180[4];
    result_matrix[5] = in_stack_00000180[5];
    result_matrix[6] = in_stack_00000180[6];
    result_matrix[7] = in_stack_00000180[7];
    result_matrix[8] = in_stack_00000180[8];
    result_matrix[9] = in_stack_00000180[9];
    result_matrix[10] = in_stack_00000180[10];
    result_matrix[11] = in_stack_00000180[0xb];
    
    // 获取变换矩阵
    model_matrix[0] = *(float *)(render_context + 0x124);
    model_matrix[1] = *(float *)(render_context + 0x120);
    model_matrix[2] = *(float *)(render_context + 0x128);
    view_matrix[0] = *(float *)(render_context + 0x134);
    view_matrix[1] = *(float *)(render_context + 0x130);
    
    // 计算变换
    transform_matrix[0] = model_matrix[0] * result_matrix[4] + model_matrix[1] * result_matrix[0] + model_matrix[2] * result_matrix[8];
    transform_matrix[1] = model_matrix[0] * result_matrix[5] + model_matrix[1] * result_matrix[1] + model_matrix[2] * result_matrix[9];
    transform_matrix[2] = model_matrix[0] * result_matrix[6] + model_matrix[1] * result_matrix[2] + model_matrix[2] * result_matrix[10];
    transform_matrix[3] = model_matrix[0] * result_matrix[7] + model_matrix[1] * result_matrix[3] + model_matrix[2] * result_matrix[11];
    
    model_matrix[0] = *(float *)(render_context + 0x138);
    model_matrix[1] = *(float *)(render_context + 0x140);
    model_matrix[2] = *(float *)(render_context + 0x144);
    
    transform_matrix[4] = view_matrix[0] * result_matrix[4] + view_matrix[1] * result_matrix[0] + model_matrix[0] * result_matrix[8];
    transform_matrix[5] = view_matrix[0] * result_matrix[5] + view_matrix[1] * result_matrix[1] + model_matrix[0] * result_matrix[9];
    transform_matrix[6] = view_matrix[0] * result_matrix[6] + view_matrix[1] * result_matrix[2] + model_matrix[0] * result_matrix[10];
    transform_matrix[7] = view_matrix[0] * result_matrix[7] + view_matrix[1] * result_matrix[3] + model_matrix[0] * result_matrix[11];
    
    model_matrix[0] = *(float *)(render_context + 0x148);
    view_matrix[0] = *(float *)(render_context + 0x154);
    view_matrix[1] = *(float *)(render_context + 0x150);
    
    transform_matrix[8] = model_matrix[2] * result_matrix[4] + model_matrix[1] * result_matrix[0] + model_matrix[0] * result_matrix[8];
    transform_matrix[9] = model_matrix[2] * result_matrix[5] + model_matrix[1] * result_matrix[1] + model_matrix[0] * result_matrix[9];
    transform_matrix[10] = model_matrix[2] * result_matrix[6] + model_matrix[1] * result_matrix[2] + model_matrix[0] * result_matrix[10];
    transform_matrix[11] = model_matrix[2] * result_matrix[7] + model_matrix[1] * result_matrix[3] + model_matrix[0] * result_matrix[11];
    
    model_matrix[0] = *(float *)(render_context + 0x158);
    transform_matrix[12] = view_matrix[0] * result_matrix[4] + view_matrix[1] * result_matrix[0] + model_matrix[0] * result_matrix[8] + in_stack_00000180[0xc];
    transform_matrix[13] = view_matrix[0] * result_matrix[5] + view_matrix[1] * result_matrix[1] + model_matrix[0] * result_matrix[9] + in_stack_00000180[0xd];
    transform_matrix[14] = view_matrix[0] * result_matrix[6] + view_matrix[1] * result_matrix[2] + model_matrix[0] * result_matrix[10] + in_stack_00000180[0xe];
    transform_matrix[15] = view_matrix[0] * result_matrix[7] + view_matrix[1] * result_matrix[3] + model_matrix[0] * result_matrix[11] + in_stack_00000180[0xf];
    
    matrix_buffer = transform_matrix;
  }
  
  // 应用渲染状态
  apply_render_state(&in_stack_00000060, state_data + 0x30, *(undefined1 *)(render_context + 0xf7), matrix_buffer);
  
  // 保存渲染状态
  in_stack_00000098 = in_stack_00000098;
  in_stack_00000090 = in_stack_00000090;
  in_stack_00000088 = in_stack_00000088;
  in_stack_00000080 = in_stack_00000080;
  in_stack_00000078 = in_stack_00000078;
  in_stack_00000070 = in_stack_00000070;
  in_stack_00000068 = in_stack_00000068;
  in_stack_00000060 = in_stack_00000060;
  
  texture_bound = *(byte *)(state_data + 0x1bd8);
  frame_index = *(int *)(_DAT_180c86870 + 0x224);
  
  if (((*(byte *)(render_context + 0xfd) & 1) == 0) &&
     ((*(int *)(render_context + 0x1d0) == frame_index || (*(int *)(render_context + 0x1d0) == frame_index + -1)))) {
    state_dirty = 0;
  }
  else {
    state_dirty = 1;
  }
  
  *(byte *)(render_context + 0xfd) = *(byte *)(render_context + 0xfd) & 0xfe | state_dirty;
  texture_bound = texture_bound & 0x20;
  
  if ((texture_bound != 0) && (state_dirty != 0)) {
    // 保存渲染状态
    *(undefined8 *)(render_context + 0x160) = in_stack_00000060;
    *(undefined8 *)(render_context + 0x168) = in_stack_00000068;
    *(undefined8 *)(render_context + 0x170) = in_stack_00000070;
    *(undefined8 *)(render_context + 0x178) = in_stack_00000078;
    *(undefined8 *)(render_context + 0x180) = in_stack_00000080;
    *(undefined8 *)(render_context + 0x188) = in_stack_00000088;
    *(undefined8 *)(render_context + 400) = in_stack_00000090;
    *(undefined8 *)(render_context + 0x198) = in_stack_00000098;
  }
  
  // 执行渲染管道
  execute_render_pipeline(state_data);
  
  *(byte *)(render_context + 0xfd) = *(byte *)(render_context + 0xfd) & 0xfe;
  *(int *)(render_context + 0x1d0) = frame_index;
  
  if (texture_bound != 0) {
    // 恢复渲染状态
    *(undefined8 *)(render_context + 0x160) = in_stack_00000060;
    *(undefined8 *)(render_context + 0x168) = in_stack_00000068;
    *(undefined8 *)(render_context + 0x170) = in_stack_00000070;
    *(undefined8 *)(render_context + 0x178) = in_stack_00000078;
    *(undefined8 *)(render_context + 0x180) = in_stack_00000080;
    *(undefined8 *)(render_context + 0x188) = in_stack_00000088;
    *(undefined8 *)(render_context + 400) = in_stack_00000090;
    *(undefined8 *)(render_context + 0x198) = in_stack_00000098;
  }
  
  return;
}