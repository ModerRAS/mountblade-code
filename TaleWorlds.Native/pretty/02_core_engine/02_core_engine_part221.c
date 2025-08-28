#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part221.c - 6 个函数

// 函数: 引擎资源清理和释放
void cleanup_engine_resources(undefined8 *engine_context)

{
  undefined8 *resource_manager;
  longlong resource_handle;
  
  // 初始化引擎上下文
  *engine_context = &GLOBAL_ENGINE_VTABLE_1;
  initialize_resource_manager();
  resource_manager = (undefined8 *)engine_context[0x66c];
  if (resource_manager != (undefined8 *)0x0) {
    resource_handle = __RTCastToVoid(resource_manager);
    // 清理资源管理器
    (**(code **)*resource_manager)(resource_manager,0);
    if (resource_handle != 0) {
                    // WARNING: Subroutine does not return
      release_resource_handle(resource_handle);
    }
  }
  engine_context[0x66c] = 0;
  cleanup_memory_pools();
  destroy_mutex_in_place();
  cleanup_texture_cache(engine_context + 0xc190);
  if ((longlong *)engine_context[0xc18f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)engine_context[0xc18f] + 0x38))();
  }
  if ((longlong *)engine_context[0xc18e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)engine_context[0xc18e] + 0x38))();
  }
  cleanup_shader_system(engine_context + 0xc182);
  if ((longlong *)engine_context[0xc181] != (longlong *)0x0) {
    (**(code **)(*(longlong *)engine_context[0xc181] + 0x38))();
  }
  release_render_buffers();
  release_render_buffers();
  cleanup_graphics_device();
  engine_context[0xc169] = &GLOBAL_RENDER_TARGET_DEFAULT;
  if (engine_context[0xc16a] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  engine_context[0xc16a] = 0;
  *(undefined4 *)(engine_context + 0xc16c) = 0;
  engine_context[0xc169] = &GLOBAL_RENDER_TARGET_CLEAN;
  cleanup_render_pipeline(engine_context + 0xc11e);
  if ((code *)engine_context[0xc11c] != (code *)0x0) {
    (*(code *)engine_context[0xc11c])(engine_context + 0xc11a,0,0);
  }
  cleanup_vertex_buffers(engine_context + 0xc0fc);
  cleanup_index_buffers(engine_context + 0xc0e7);
  cleanup_direct_input();
  initialize_input_system(engine_context + 0xc061,0x20,0x20,DEFAULT_INPUT_HANDLER);
  cleanup_audio_system(engine_context + 0x1045);
  if ((longlong *)engine_context[0x1043] != (longlong *)0x0) {
    (**(code **)(*(longlong *)engine_context[0x1043] + 0x38))();
  }
  if ((longlong *)engine_context[0x1042] != (longlong *)0x0) {
    (**(code **)(*(longlong *)engine_context[0x1042] + 0x38))();
  }
  if ((longlong *)engine_context[0x1041] != (longlong *)0x0) {
    (**(code **)(*(longlong *)engine_context[0x1041] + 0x38))();
  }
  if ((longlong *)engine_context[0x1040] != (longlong *)0x0) {
    (**(code **)(*(longlong *)engine_context[0x1040] + 0x38))();
  }
  if ((longlong *)engine_context[0x103f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)engine_context[0x103f] + 0x38))();
  }
  engine_context[0x103a] = &GLOBAL_AUDIO_BUFFER_DEFAULT;
  if (engine_context[0x103b] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  engine_context[0x103b] = 0;
  *(undefined4 *)(engine_context + 0x103d) = 0;
  engine_context[0x103a] = &GLOBAL_AUDIO_BUFFER_CLEAN;
  cleanup_memory_pools();
  cleanup_direct_input();
  cleanup_memory_pools();
  cleanup_memory_pools();
  if (engine_context[0x1023] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  destroy_mutex_in_place();
  initialize_network_system(engine_context + 0xb97,0x2408,1,NETWORK_INITIALIZER);
  if (engine_context[0xb93] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  destroy_mutex_in_place();
  if (engine_context[0xb7f] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  if (engine_context[0xb75] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  destroy_mutex_in_place();
  if (engine_context[0xb65] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  cleanup_physics_world(engine_context + 0xb5b);
  cleanup_collision_system(engine_context + 0xa3a);
  initialize_physics_system(engine_context + 0x7f7,0x908,2,PHYSICS_INITIALIZER);
  cleanup_physics_world(engine_context + 0x7ed);
  engine_context[0x7da] = &GLOBAL_PHYSICS_WORLD_DEFAULT;
  if (engine_context[0x7db] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  engine_context[0x7db] = 0;
  *(undefined4 *)(engine_context + 0x7dd) = 0;
  engine_context[0x7da] = &GLOBAL_PHYSICS_WORLD_CLEAN;
  if (engine_context[0x7ce] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  cleanup_animation_system(engine_context + 0x6d6);
  cleanup_skeleton_system(engine_context + 0x66d);
  cleanup_skeleton_system(engine_context + 0x603);
  cleanup_mesh_system(engine_context + 0x54d);
  destroy_mutex_in_place();
  if (engine_context[0x53e] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  if (engine_context[0x53a] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  if (engine_context[0x536] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  cleanup_material_system(engine_context + 0x534);
  cleanup_texture_system(engine_context + 0x52e);
  if (*(char *)((longlong)engine_context + 0x2901) != '\0') {
    *(undefined1 *)((longlong)engine_context + 0x2901) = 0;
    cleanup_shader_program(engine_context + 0x519);
  }
  cleanup_shader_program(engine_context + 0x519);
  engine_context[0x512] = &GLOBAL_SHADER_PROGRAM_DEFAULT;
  if (engine_context[0x513] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  engine_context[0x513] = 0;
  *(undefined4 *)(engine_context + 0x515) = 0;
  engine_context[0x512] = &GLOBAL_SHADER_PROGRAM_CLEAN;
  if (engine_context[0x50e] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  if ((*(int *)((longlong)engine_context + 0x286c) != 0) && (GLOBAL_EVENT_MANAGER != 0)) {
    (**(code **)(GLOBAL_EVENT_MANAGER + 0x18))();
  }
  if ((code *)engine_context[0x50a] != (code *)0x0) {
    (*(code *)engine_context[0x50a])(engine_context + 0x508,0,0);
  }
  if (engine_context[0x502] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  if (engine_context[0x4fe] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  if ((longlong *)engine_context[0x4fd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)engine_context[0x4fd] + 0x38))();
  }
  engine_context[0x4f9] = &GLOBAL_SCRIPT_ENGINE_DEFAULT;
  if (engine_context[0x4fa] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  engine_context[0x4fa] = 0;
  *(undefined4 *)(engine_context + 0x4fc) = 0;
  engine_context[0x4f9] = &GLOBAL_SCRIPT_ENGINE_CLEAN;
  destroy_mutex_in_place();
  _Cnd_destroy_in_situ(engine_context + 0x4e3);
  destroy_mutex_in_place();
  _Cnd_destroy_in_situ(engine_context + 0x4cf);
  if ((longlong *)engine_context[0x4ce] != (longlong *)0x0) {
    (**(code **)(*(longlong *)engine_context[0x4ce] + 0x38))();
  }
  cleanup_ui_system(engine_context + 0xae);
  if (engine_context[0xa8] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  engine_context[0xa4] = &GLOBAL_UI_RENDERER_DEFAULT;
  if (engine_context[0xa5] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  engine_context[0xa5] = 0;
  *(undefined4 *)(engine_context + 0xa7) = 0;
  engine_context[0xa4] = &GLOBAL_UI_RENDERER_CLEAN;
  engine_context[0xa0] = &GLOBAL_FONT_SYSTEM_DEFAULT;
  if (engine_context[0xa1] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  engine_context[0xa1] = 0;
  *(undefined4 *)(engine_context + 0xa3) = 0;
  engine_context[0xa0] = &GLOBAL_FONT_SYSTEM_CLEAN;
  engine_context[0x9b] = &GLOBAL_TEXT_RENDERER_DEFAULT;
  if (engine_context[0x9c] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  engine_context[0x9c] = 0;
  *(undefined4 *)(engine_context + 0x9e) = 0;
  engine_context[0x9b] = &GLOBAL_TEXT_RENDERER_CLEAN;
  engine_context[0x91] = &GLOBAL_WINDOW_SYSTEM_DEFAULT;
  if (engine_context[0x92] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  engine_context[0x92] = 0;
  *(undefined4 *)(engine_context + 0x94) = 0;
  engine_context[0x91] = &GLOBAL_WINDOW_SYSTEM_CLEAN;
  if ((longlong *)engine_context[0x77] != (longlong *)0x0) {
    (**(code **)(*(longlong *)engine_context[0x77] + 0x38))();
  }
  if ((longlong *)engine_context[0x74] != (longlong *)0x0) {
    (**(code **)(*(longlong *)engine_context[0x74] + 0x38))();
  }
  if ((longlong *)engine_context[0x73] != (longlong *)0x0) {
    (**(code **)(*(longlong *)engine_context[0x73] + 0x38))();
  }
  if ((longlong *)engine_context[0x72] != (longlong *)0x0) {
    (**(code **)(*(longlong *)engine_context[0x72] + 0x38))();
  }
  if ((longlong *)engine_context[0x71] != (longlong *)0x0) {
    (**(code **)(*(longlong *)engine_context[0x71] + 0x38))();
  }
  cleanup_memory_pools();
  if ((longlong *)engine_context[100] != (longlong *)0x0) {
    (**(code **)(*(longlong *)engine_context[100] + 0x38))();
  }
  initialize_file_system(engine_context + 0x5e,8,4,FILE_SYSTEM_INITIALIZER);
  if (engine_context[0x5a] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  cleanup_debug_system(engine_context + 0x4d);
  cleanup_profiler_system(engine_context + 0x24);
  if ((code *)engine_context[0x22] != (code *)0x0) {
    (*(code *)engine_context[0x22])(engine_context + 0x20,0,0);
  }
  if (engine_context[0x1c] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  cleanup_thread_system();
  if ((longlong *)engine_context[0x12] != (longlong *)0x0) {
    (**(code **)(*(longlong *)engine_context[0x12] + 0x38))();
  }
  if (engine_context[0xe] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  if (engine_context[0xb] != 0) {
                    // WARNING: Subroutine does not return
    trigger_error_handler();
  }
  engine_context[0xb] = 0;
  if ((longlong *)engine_context[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)engine_context[8] + 0x38))();
  }
  *engine_context = &GLOBAL_ENGINE_VTABLE_2;
  *engine_context = &GLOBAL_ENGINE_VTABLE_3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 注册游戏事件处理器
void register_game_event_handler(longlong event_system,longlong event_data)

{
  longlong event_manager;
  longlong *event_list;
  int event_index;
  ulonglong event_count;
  longlong event_parameter;
  
  event_manager = GLOBAL_EVENT_SYSTEM_HANDLE;
  event_index = 0;
  if (**(char **)(event_data + 0x10) == '\0') {
    event_list = *(longlong **)(event_system + 0x2870);
    event_count = *(longlong *)(event_system + 0x2878) - (longlong)event_list >> 3;
    if (event_count != 0) {
      do {
        if (*event_list == event_data) {
          if (event_index != -1) {
            return;
          }
          break;
        }
        event_index = event_index + 1;
        event_list = event_list + 1;
      } while ((ulonglong)(longlong)event_index < event_count);
    }
    event_parameter = event_data;
    add_event_to_system(event_system + 0x2870,&event_parameter,event_index,event_count,0,0xfffffffffffffffe);
  }
  else {
    event_index = *(int *)(event_data + 0x50);
    event_parameter = CONCAT44(event_parameter._4_4_,event_index);
    if ((event_index != 0) && (GLOBAL_EVENT_MANAGER != 0)) {
      (**(code **)(GLOBAL_EVENT_MANAGER + 0x30))(event_index);
    }
    (**(code **)(event_manager + 0x110))(*(undefined4 *)(event_system + 0x286c),event_index);
    if ((event_index != 0) && (GLOBAL_EVENT_MANAGER != 0)) {
      (**(code **)(GLOBAL_EVENT_MANAGER + 0x18))(event_index);
    }
  }
  return;
}





// 函数: 计算相机变换矩阵
void calculate_camera_transform_matrix(longlong camera_context,float *transform_matrix)

{
  float camera_distance;
  float normalized_distance;
  undefined1 matrix_data [16];
  float forward_x;
  float forward_y;
  float forward_z;
  undefined4 max_float_value;
  
  if (*(char *)(camera_context + 0x3e05) == '\0') {
    forward_x = 0.0;
    forward_y = 0.0;
    forward_z = -1.0;
    max_float_value = 0x7f7fffff;
  }
  else {
    forward_x = *(float *)(camera_context + 0x3e0c);
    forward_y = *(float *)(camera_context + 0x3e10);
    forward_z = *(float *)(camera_context + 0x3e14);
    max_float_value = *(undefined4 *)(camera_context + 0x3e18);
  }
  camera_distance = forward_y * forward_y + forward_x * forward_x + forward_z * forward_z;
  matrix_data = rsqrtss(ZEXT416((uint)camera_distance),ZEXT416((uint)camera_distance));
  normalized_distance = matrix_data._0_4_;
  camera_distance = normalized_distance * 0.5 * (3.0 - camera_distance * normalized_distance * normalized_distance);
  forward_z = forward_z * camera_distance;
  forward_x = forward_x * camera_distance;
  forward_y = forward_y * camera_distance;
  if (-0.1 < forward_z) {
    forward_z = -0.1;
    normalize_camera_vector(&forward_x);
  }
  forward_z = -forward_z;
  camera_distance = -forward_y;
  transform_matrix[4] = 0.0;
  transform_matrix[5] = 0.0;
  transform_matrix[6] = 1.0;
  transform_matrix[7] = 3.4028235e+38;
  transform_matrix[8] = -forward_x;
  transform_matrix[9] = -forward_y;
  transform_matrix[10] = forward_z;
  transform_matrix[0xb] = 3.4028235e+38;
  forward_x = forward_z * 0.0 - camera_distance * 1.0;
  forward_y = transform_matrix[8] * 1.0 - transform_matrix[4] * forward_z;
  forward_z = transform_matrix[4] * camera_distance - transform_matrix[8] * 0.0;
  max_float_value = 0x7f7fffff;
  *transform_matrix = forward_x;
  transform_matrix[1] = forward_y;
  transform_matrix[2] = forward_z;
  transform_matrix[3] = 3.4028235e+38;
  validate_transform_matrix(transform_matrix);
  transform_matrix[4] = transform_matrix[2] * transform_matrix[9] - transform_matrix[1] * transform_matrix[10];
  transform_matrix[5] = *transform_matrix * transform_matrix[10] - transform_matrix[2] * transform_matrix[8];
  transform_matrix[6] = transform_matrix[1] * transform_matrix[8] - *transform_matrix * transform_matrix[9];
  transform_matrix[7] = 3.4028235e+38;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 线程安全的队列操作
void thread_safe_queue_operation(longlong queue_context,undefined8 operation_id,undefined8 data_ptr,undefined8 priority,
                  undefined8 timeout)

{
  int lock_result;
  undefined4 *queue_data;
  undefined4 *queue_start;
  longlong queue_size;
  undefined4 *queue_buffer;
  undefined4 queue_item_data;
  undefined4 queue_priority_hi;
  undefined4 queue_priority_lo;
  undefined4 timeout_hi;
  undefined4 timeout_lo;
  
  lock_result = acquire_queue_lock(queue_context + 0x5b48,operation_id,data_ptr,priority,0xfffffffffffffffe);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  queue_data = *(undefined4 **)(queue_context + 0x5b30);
  queue_priority_hi = (undefined4)priority;
  queue_priority_lo = (undefined4)((ulonglong)priority >> 0x20);
  timeout_hi = (undefined4)timeout;
  timeout_lo = (undefined4)((ulonglong)timeout >> 0x20);
  if (queue_data < *(undefined4 **)(queue_context + 0x5b38)) {
    *(undefined4 **)(queue_context + 0x5b30) = queue_data + 8;
    *queue_data = (int)data_ptr;
    queue_data[1] = queue_item_data;
    queue_data[2] = queue_priority_hi;
    queue_data[3] = queue_priority_lo;
    queue_data[4] = timeout_hi;
    queue_data[5] = timeout_lo;
    queue_data[6] = operation_id;
    queue_data[7] = timeout_lo;
    goto QUEUE_OPERATION_COMPLETE;
  }
  queue_start = *(undefined4 **)(queue_context + 0x5b28);
  queue_size = (longlong)queue_data - (longlong)queue_start >> 5;
  if (queue_size == 0) {
    queue_size = 1;
EXPAND_QUEUE_BUFFER:
    queue_buffer = (undefined4 *)
             allocate_queue_memory(GLOBAL_MEMORY_ALLOCATOR,queue_size << 5,*(undefined1 *)(queue_context + 0x5b40));
    queue_data = *(undefined4 **)(queue_context + 0x5b30);
    queue_start = *(undefined4 **)(queue_context + 0x5b28);
  }
  else {
    queue_size = queue_size * 2;
    if (queue_size != 0) goto EXPAND_QUEUE_BUFFER;
    queue_buffer = (undefined4 *)0x0;
  }
  if (queue_start != queue_data) {
                    // WARNING: Subroutine does not return
    memmove(queue_buffer,queue_start,(longlong)queue_data - (longlong)queue_start);
  }
  *queue_buffer = (int)data_ptr;
  queue_buffer[1] = queue_item_data;
  queue_buffer[2] = queue_priority_hi;
  queue_buffer[3] = queue_priority_lo;
  queue_buffer[4] = timeout_hi;
  queue_buffer[5] = timeout_lo;
  queue_buffer[6] = operation_id;
  queue_buffer[7] = timeout_lo;
  if (*(longlong *)(queue_context + 0x5b28) != 0) {
                    // WARNING: Subroutine does not return
    release_memory_block();
  }
  *(undefined4 **)(queue_context + 0x5b28) = queue_buffer;
  *(undefined4 **)(queue_context + 0x5b30) = queue_buffer + 8;
  *(undefined4 **)(queue_context + 0x5b38) = queue_buffer + queue_size * 8;
QUEUE_OPERATION_COMPLETE:
  lock_result = release_queue_lock(queue_context + 0x5b48);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 初始化游戏场景
void initialize_game_scene(longlong scene_context,longlong initialization_param)

{
  int scene_flags;
  undefined8 *scene_object;
  undefined4 position_x;
  undefined4 position_y;
  undefined4 position_z;
  undefined4 rotation_w;
  undefined4 *scene_data;
  longlong object_id;
  longlong *entity_list;
  float camera_fov;
  float camera_aspect;
  float camera_near;
  undefined8 scene_parameters [2];
  
  if (initialization_param != 0) {
    scene_flags = *(int *)(scene_context + 0x3358);
    initialize_scene_objects(scene_context + 0x3018);
    *(int *)(scene_context + 0x3358) = scene_flags + 1;
    update_scene_lighting(scene_context,*(undefined4 *)(scene_context + 0x3054));
  }
  scene_data = (undefined4 *)
           get_scene_object_data(scene_context + 0x3018,scene_parameters,*(undefined4 *)(scene_context + 0x3f50));
  position_x = *scene_data;
  position_y = scene_data[1];
  position_z = scene_data[2];
  rotation_w = scene_data[3];
  *(undefined1 *)(scene_context + 0x3e05) = 1;
  *(undefined4 *)(scene_context + 0x3e0c) = position_x;
  *(undefined4 *)(scene_context + 0x3e10) = position_y;
  *(undefined4 *)(scene_context + 0x3e14) = position_z;
  *(undefined4 *)(scene_context + 0x3e18) = rotation_w;
  *(bool *)(scene_context + 0x3e04) = 0.0 < *(float *)(scene_context + 0x312c);
  if ((*(uint *)(scene_context + 0x3050) & 0x10000000) == 0) {
    camera_near = *(float *)(scene_context + 0x30c8);
    camera_aspect = camera_near * *(float *)(scene_context + 0x30e0);
    camera_fov = camera_near * *(float *)(scene_context + 0x30dc);
    camera_near = camera_near * *(float *)(scene_context + 0x30e4);
    if (1e-08 <= camera_aspect * camera_aspect + camera_fov * camera_fov + camera_near * camera_near) {
      *(uint *)(scene_context + 0x3e08) = *(uint *)(scene_context + 0x3e08) & 0xfffffffd;
      goto SCENE_INITIALIZED;
    }
  }
  *(uint *)(scene_context + 0x3e08) = *(uint *)(scene_context + 0x3e08) | 2;
SCENE_INITIALIZED:
  calculate_camera_transform_matrix(scene_context,scene_context + 0x3830);
  *(undefined4 *)(scene_context + 0x3860) = 0;
  *(undefined4 *)(scene_context + 0x3864) = 0;
  *(undefined4 *)(scene_context + 0x3868) = 0;
  *(undefined4 *)(scene_context + 0x386c) = 0x7f7fffff;
  initialize_render_pipeline(scene_context);
  calculate_camera_transform_matrix(scene_context,scene_context + 0x3830);
  *(int *)(scene_context + 0x28b4) = *(int *)(scene_context + 0x28b4) + 1;
  *(undefined4 *)(scene_context + 0x3860) = 0;
  *(undefined4 *)(scene_context + 0x3864) = 0;
  *(undefined4 *)(scene_context + 0x3868) = 0;
  *(undefined4 *)(scene_context + 0x386c) = 0x7f7fffff;
  scene_parameters[0] = 0xfffffffffffffffe;
  if (*(longlong **)(scene_context + 0x28c0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(scene_context + 0x28c0) + 0x10))();
    scene_object = *(undefined8 **)(scene_context + 0x28c0);
    if (scene_object != (undefined8 *)0x0) {
      object_id = __RTCastToVoid(scene_object);
      (**(code **)*scene_object)(scene_object,0);
      if (object_id != 0) {
                    // WARNING: Subroutine does not return
        release_resource_handle(object_id);
      }
    }
    *(undefined8 *)(scene_context + 0x28c0) = 0;
  }
  if (*(float *)(scene_context + 0x3140) <= 0.1) {
    entity_list = (longlong *)allocate_entity_memory(GLOBAL_MEMORY_ALLOCATOR,0x10,8,3);
    *entity_list = (longlong)&GLOBAL_ENTITY_VTABLE;
    entity_list[1] = scene_context;
  }
  else if (*(int *)(scene_context + 0x3054) == 2) {
    entity_list = (longlong *)allocate_entity_memory(GLOBAL_MEMORY_ALLOCATOR,0x20,8,3);
    *entity_list = (longlong)&GLOBAL_ENTITY_VTABLE;
    entity_list[1] = scene_context;
    *entity_list = (longlong)&GLOBAL_ENTITY_DATA_VTABLE;
    entity_list[2] = 0;
    entity_list[3] = 0;
  }
  else {
    entity_list = (longlong *)allocate_entity_memory(GLOBAL_MEMORY_ALLOCATOR,0x70,8,3);
    *entity_list = (longlong)&GLOBAL_ENTITY_VTABLE;
    entity_list[1] = scene_context;
    *entity_list = (longlong)&GLOBAL_ENTITY_ADVANCED_VTABLE;
    entity_list[2] = 0;
    entity_list[3] = 0;
    entity_list[4] = 0;
    *(undefined4 *)(entity_list + 5) = 0;
  }
  *(longlong **)(scene_context + 0x28c0) = entity_list;
  (**(code **)(*entity_list + 8))();
  *(uint *)(scene_context + 0x3674) = *(uint *)(scene_context + 0x3674) | 0x10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 创建游戏实体
longlong * create_game_entity(undefined8 entity_type,longlong *entity_output,undefined1 entity_flags)

{
  undefined8 entity_handle;
  longlong *entity_instance;
  longlong *entity_reference;
  
  entity_handle = allocate_entity_memory(GLOBAL_MEMORY_ALLOCATOR,0x2f0,0x10,0xd);
  entity_instance = (longlong *)initialize_entity_components(entity_handle,entity_flags);
  *entity_output = (longlong)entity_instance;
  if (entity_instance != (longlong *)0x0) {
    (**(code **)(*entity_instance + 0x28))(entity_instance);
  }
  if (*entity_output == 0) {
    trigger_entity_creation_error(&GLOBAL_ERROR_HANDLER);
  }
  entity_reference = (longlong *)*entity_output;
  if (entity_reference != (longlong *)0x0) {
    (**(code **)(*entity_reference + 0x28))();
  }
  register_entity_in_world(entity_type,&entity_reference,1,1,0,1,0);
  return entity_output;
}





// 函数: 销毁游戏实体
void destroy_game_entity(longlong entity_system,longlong *entity_ptr,undefined8 destruction_flags,undefined8 cleanup_mode,
                  undefined4 entity_id)

{
  longlong entity_owner;
  int component_count;
  uint entity_index;
  longlong *component_ptr;
  uint current_component;
  longlong *temp_entity;
  longlong *world_entity;
  uint entity_state;
  
  world_entity = entity_ptr;
  if (entity_ptr != (longlong *)0x0) {
    (**(code **)(*entity_ptr + 0x28))(entity_ptr);
  }
  if (entity_ptr[4] == entity_system) {
    if (*(longlong *)(entity_system + 600) != 0) {
      remove_entity_from_world(*(longlong *)(entity_system + 600),entity_ptr);
    }
    entity_owner = entity_ptr[0x2d];
    current_component = 0;
    if (entity_owner == 0) {
      remove_entity_from_scene(entity_system + 0x607e0,entity_ptr);
      if (*(longlong **)(entity_system + 0x81f8) == entity_ptr) {
        temp_entity = *(longlong **)(entity_system + 0x81f8);
        *(undefined8 *)(entity_system + 0x81f8) = 0;
        if (temp_entity != (longlong *)0x0) {
          (**(code **)(*temp_entity + 0x38))();
        }
      }
      if (*(longlong **)(entity_system + 0x8200) == entity_ptr) {
        temp_entity = *(longlong **)(entity_system + 0x8200);
        *(undefined8 *)(entity_system + 0x8200) = 0;
        if (temp_entity != (longlong *)0x0) {
          (**(code **)(*temp_entity + 0x38))();
        }
      }
      if (*(longlong **)(entity_system + 0x8208) == entity_ptr) {
        temp_entity = *(longlong **)(entity_system + 0x8208);
        *(undefined8 *)(entity_system + 0x8208) = 0;
        if (temp_entity != (longlong *)0x0) {
          (**(code **)(*temp_entity + 0x38))();
        }
      }
      if (*(longlong **)(entity_system + 0x8210) == entity_ptr) {
        temp_entity = *(longlong **)(entity_system + 0x8210);
        *(undefined8 *)(entity_system + 0x8210) = 0;
        if (temp_entity != (longlong *)0x0) {
          (**(code **)(*temp_entity + 0x38))();
        }
      }
      component_ptr = *(longlong **)(entity_system + 0x28c0);
      if (component_ptr != (longlong *)0x0) {
        (**(code **)(*component_ptr + 0x20))(component_ptr,entity_ptr);
      }
      cleanup_entity_components(entity_ptr,0,1,1,0,entity_state & 0xffffff00,1,entity_id);
    }
    else {
      cleanup_entity_owner_resources(entity_owner,1);
      remove_entity_from_owner(entity_owner,entity_ptr,0,0,1,entity_id);
    }
    component_count = get_entity_component_count(entity_ptr,7);
    if (component_count != 0) {
      do {
        component_ptr = (longlong *)get_entity_component_by_type(entity_ptr,&temp_entity,7,current_component);
        entity_owner = *component_ptr;
        if (temp_entity != (longlong *)0x0) {
          (**(code **)(*temp_entity + 0x38))();
        }
        *(undefined1 *)(entity_owner + 0x39) = 1;
        current_component = current_component + 1;
        entity_index = get_entity_component_count(entity_ptr,7);
      } while (current_component < entity_index);
    }
  }
  else {
    trigger_entity_destruction_error(&GLOBAL_ERROR_HANDLER);
  }
                    // WARNING: Could not recover jumptable at 0x000180198b86. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*entity_ptr + 0x38))(entity_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 更新实体状态
ulonglong update_entity_status(longlong world_context,longlong *entity_ptr,undefined1 update_flags,
                       undefined8 update_priority,undefined1 entity_mode,char force_update)

{
  undefined8 *entity_manager;
  longlong entity_id;
  longlong *entity_list;
  char entity_property;
  int property_check;
  longlong world_entity;
  longlong *property_list;
  undefined *property_vtable;
  undefined8 *entity_data;
  bool needs_update;
  uint entity_state;
  undefined8 update_result;
  
  update_result = 0xfffffffffffffffe;
  entity_property = get_entity_property(*entity_ptr,&GLOBAL_PROPERTY_TABLE);
  if (entity_property != '\0') {
    *(undefined2 *)(world_context + 0x5c40) = 0x101;
  }
  entity_property = get_entity_property(*entity_ptr,&GLOBAL_PROPERTY_TABLE_2);
  if (entity_property != '\0') {
    *(undefined1 *)(world_context + 0x5bf0) = 1;
    *(undefined1 *)(world_context + 0x5c42) = 1;
  }
  world_entity = *entity_ptr;
  entity_id = *(longlong *)(world_entity + 0x168);
  if (entity_id == 0) {
    entity_list = *(longlong **)(world_context + 0x60860);
    property_list = *(longlong **)(world_context + 0x60858);
    if (property_list != entity_list) {
      do {
        if (*property_list == world_entity) break;
        property_list = property_list + 1;
      } while (property_list != entity_list);
      if (property_list != entity_list) {
        if (force_update != '\0') {
          property_vtable = &GLOBAL_PROPERTY_VTABLE_DEFAULT;
          if (*(undefined **)(world_entity + 0x290) != (undefined *)0x0) {
            property_vtable = *(undefined **)(world_entity + 0x290);
          }
          property_list = (longlong *)trigger_entity_update_error(&GLOBAL_ERROR_HANDLER,property_vtable);
        }
        if ((longlong *)*entity_ptr != (longlong *)0x0) {
          property_list = (longlong *)(**(code **)(*(longlong *)*entity_ptr + 0x38))();
        }
        return (ulonglong)property_list & 0xffffffffffffff00;
      }
    }
  }
  else {
    entity_state = 0;
    update_entity_in_world(entity_id,world_entity,0,*(longlong *)(entity_id + 0x20) == world_context,entity_mode,0x16);
  }
  update_entity_components(*entity_ptr,world_context,update_flags,entity_mode,update_priority,entity_state & 0xffffff00,
                entity_mode,0xffffffff,update_result);
  attach_entity_to_world(*entity_ptr,*(undefined8 *)(world_context + 600));
  entity_ptr = (longlong *)*entity_ptr;
  property_check = acquire_world_lock(world_context + 0x607e0);
  if (property_check != 0) {
    __Throw_C_error_std__YAXH_Z(property_check);
  }
  entity_manager = (undefined8 *)(world_context + 0x60878);
  entity_id = allocate_entity_memory(GLOBAL_MEMORY_ALLOCATOR,0x28,*(undefined1 *)(world_context + 0x608a0));
  *(longlong **)(entity_id + 0x20) = entity_ptr;
  if (entity_ptr != (longlong *)0x0) {
    (**(code **)(*entity_ptr + 0x28))(entity_ptr);
  }
  needs_update = true;
  entity_data = entity_manager;
  if (*(undefined8 **)(world_context + 0x60888) != (undefined8 *)0x0) {
    entity_manager = *(undefined8 **)(world_context + 0x60888);
    do {
      entity_data = entity_manager;
      needs_update = *(ulonglong *)(entity_id + 0x20) < (ulonglong)entity_data[4];
      if (needs_update) {
        entity_manager = (undefined8 *)entity_data[1];
      }
      else {
        entity_manager = (undefined8 *)*entity_data;
      }
    } while (entity_manager != (undefined8 *)0x0);
  }
  entity_manager = entity_data;
  if (needs_update) {
    if (entity_data == *(undefined8 **)(world_context + 0x60880)) goto ENTITY_UPDATE_COMPLETE;
    entity_manager = (undefined8 *)get_next_entity_in_list(entity_data);
  }
  if (*(ulonglong *)(entity_id + 0x20) <= (ulonglong)entity_manager[4]) {
    if (*(longlong **)(entity_id + 0x20) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(entity_id + 0x20) + 0x38))();
    }
                    // WARNING: Subroutine does not return
    release_resource_handle(entity_id);
  }
ENTITY_UPDATE_COMPLETE:
  if ((entity_data == entity_manager) || (*(ulonglong *)(entity_id + 0x20) < (ulonglong)entity_data[4])) {
    update_result = 0;
  }
  else {
    update_result = 1;
  }
                    // WARNING: Subroutine does not return
  insert_entity_into_world(entity_id,entity_data,entity_manager,update_result);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address


