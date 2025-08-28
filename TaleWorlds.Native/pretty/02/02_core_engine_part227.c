#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 核心引擎模块第227部分
// 该文件包含核心引擎的复杂函数实现

/**
 * 处理游戏对象渲染和更新逻辑
 * 
 * 该函数负责处理游戏对象的渲染队列、更新状态、管理内存分配等核心功能
 * 
 * @param game_context 游戏上下文指针
 */
void process_game_object_rendering(int64_t game_context)
{
  float render_scale_x;
  float render_scale_y;
  float render_offset_x;
  float render_offset_y;
  int64_t object_manager;
  uint64_t *render_queue;
  uint64_t render_flags;
  int32_t render_params_1;
  int32_t render_params_2;
  int32_t render_params_3;
  int64_t *object_list;
  uint object_count;
  int64_t render_target;
  uint64_t **texture_cache;
  int64_t shader_program;
  uint64_t *material_data;
  uint64_t vertex_buffer;
  uint64_t index_buffer;
  uint64_t uniform_buffer;
  uint texture_id;
  uint64_t render_state;
  void *texture_sampler;
  uint64_t *vertex_data;
  int64_t matrix_transform;
  uint64_t *normal_data;
  uint64_t *tangent_data;
  uint64_t *bitangent_data;
  uint64_t stack_data_1;
  float stack_float_1;
  float stack_float_2;
  uint64_t stack_data_2;
  int8_t stack_buffer_1 [8];
  void *stack_ptr_1;
  uint64_t stack_ulong_1;
  uint64_t stack_ulong_2;
  int32_t stack_uint_1;
  int32_t stack_uint_2;
  int32_t stack_uint_3;
  int64_t *stack_ptr_2;
  int64_t stack_array_1 [2];
  int stack_int_1;
  int64_t stack_long_1;
  float stack_float_3;
  float stack_float_4;
  float stack_float_5;
  int32_t stack_uint_4;
  int64_t stack_long_2;
  int64_t *stack_ptr_3;
  uint64_t *stack_ptr_4;
  uint64_t *stack_ptr_5;
  uint64_t *stack_ptr_6;
  int64_t *stack_ptr_7;
  uint64_t *stack_ptr_8;
  uint64_t *stack_ptr_9;
  uint64_t *stack_ptr_10;
  int64_t *stack_ptr_11;
  uint64_t stack_data_3;
  int64_t *stack_ptr_12;
  uint64_t stack_ulong_3;
  int64_t stack_long_3;
  int64_t *stack_ptr_13;
  uint64_t stack_ulong_4;
  uint64_t stack_ulong_5;
  int64_t *stack_ptr_14;
  uint64_t stack_ulong_6;
  uint64_t stack_ulong_7;
  int8_t stack_buffer_2 [56];
  
  // 初始化渲染状态
  stack_data_3 = 0xfffffffffffffffe;
  stack_long_2 = game_context;
  initialize_render_system(game_context + 0x607e0);
  render_queue = (uint64_t *)0x0;
  stack_array_1[0] = 0;
  stack_array_1[0] = allocate_render_memory(system_memory_pool_ptr, 0x100000, 0xd);
  LOCK();
  stack_array_1[1] = 0;
  UNLOCK();
  stack_int_1 = 0;
  get_object_list(game_context + 0x60830, &stack_ptr_12);
  object_manager = game_context + 0x60830;
  bitangent_data = render_queue;
  
  // 主渲染循环
  do {
    texture_id = (uint)bitangent_data;
    if (stack_ulong_3 == *(uint64_t *)(game_context + 0x60838)) {
      // 设置渲染参数
      stack_uint_1 = 0x3f800000;  // 1.0f
      stack_uint_2 = 0x40000000;  // 2.0f
      stack_ptr_2 = stack_array_1;
      stack_ulong_1 = 1;
      stack_ptr_1 = &system_memory_0000;
      stack_ulong_2 = 0;
      stack_uint_3 = 0;
      bitangent_data = render_queue;
      stack_data_1 = render_queue;
      stack_long_1 = object_manager;
      
      // 分配渲染内存
      if (texture_id * 2 != 0) {
        vertex_buffer = (int64_t)(stack_int_1 + 0xf) & 0xfffffffffffffff0;
        stack_int_1 = (int)vertex_buffer + texture_id * 0x10;
        stack_data_1 = (uint64_t *)(stack_array_1[0] + vertex_buffer);
        render_queue = stack_data_1 + (int)(texture_id * 2);
        bitangent_data = stack_data_1;
      }
      
      // 处理渲染队列
      do {
        get_object_list(object_manager);
        object_list = stack_ptr_13;
        render_state = stack_ulong_4;
        vertex_buffer = stack_ulong_5;
        texture_sampler = stack_ptr_1;
        tangent_data = bitangent_data;
        
        // 处理纹理缓存
        index_buffer = 0;
        if (render_state != *(uint64_t *)(object_manager + 8)) {
          if (*(int64_t *)(vertex_buffer + 0x208) - *(int64_t *)(vertex_buffer + 0x200) >> 3 != 0) {
            normal_data = *(uint64_t **)(texture_sampler + stack_ulong_1 * 8);
            for (material_data = *(uint64_t **)(texture_sampler + (vertex_buffer % (stack_ulong_1 & 0xffffffff)) * 8);
                material_data != (uint64_t *)0x0; material_data = (uint64_t *)material_data[1]) {
              if (vertex_buffer == *material_data) {
                stack_ptr_4 = material_data;
                stack_ptr_5 = (uint64_t *)(texture_sampler + (vertex_buffer % (stack_ulong_1 & 0xffffffff)) * 8);
                texture_cache = &stack_ptr_4;
                goto texture_found;
              }
            }
            stack_ptr_6 = normal_data;
            stack_ptr_7 = (int64_t *)(texture_sampler + stack_ulong_1 * 8);
            texture_cache = &stack_ptr_6;
texture_found:
            if (*texture_cache == normal_data) {
              normal_data = bitangent_data;
              if (render_queue <= bitangent_data) {
                object_manager = (int64_t)bitangent_data - (int64_t)tangent_data >> 3;
                if (object_manager == 0) {
                  object_manager = 1;
alloc_memory:
                  index_buffer = (int64_t)(stack_int_1 + 0xf) & 0xfffffffffffffff0;
                  stack_int_1 = (int)index_buffer + (int)object_manager * 8;
                  normal_data = (uint64_t *)(stack_array_1[0] + index_buffer);
                }
                else {
                  object_manager = object_manager * 2;
                  if (object_manager != 0) goto alloc_memory;
                  normal_data = (uint64_t *)0x0;
                }
                if (stack_data_1 != bitangent_data) {
                  // 移动内存数据
                  memmove(normal_data);
                }
                render_queue = normal_data + object_manager;
                stack_data_1 = normal_data;
              }
              *normal_data = vertex_buffer;
              bitangent_data = normal_data + 1;
              index_buffer = vertex_buffer % (stack_ulong_1 & 0xffffffff);
              for (normal_data = *(uint64_t **)(stack_ptr_1 + index_buffer * 8); tangent_data = stack_data_1,
                  normal_data != (uint64_t *)0x0; normal_data = (uint64_t *)normal_data[1]) {
                texture_sampler = stack_ptr_1;
                if (vertex_buffer == *normal_data) goto texture_processed;
              }
              uniform_buffer = (int64_t)(int)stack_ptr_2[2] + 0xfU & 0xfffffffffffffff0;
              *(int *)(stack_ptr_2 + 2) = (int)uniform_buffer + 0x10;
              normal_data = (uint64_t *)(*stack_ptr_2 + uniform_buffer);
              *normal_data = vertex_buffer;
              normal_data[1] = 0;
              setup_render_state(&stack_uint_1);
              if (stack_float_1._0_1_ != '\0') {
                index_buffer = vertex_buffer % (uint64_t)(uint)stack_float_2;
                hash_texture_data(stack_buffer_1, stack_float_2);
              }
              normal_data[1] = *(uint64_t *)(stack_ptr_1 + index_buffer * 8);
              *(uint64_t **)(stack_ptr_1 + index_buffer * 8) = normal_data;
              stack_ulong_2 = stack_ulong_2 + 1;
              texture_sampler = stack_ptr_1;
            }
          }
texture_processed:
          shader_program = *object_list;
          do {
            render_state = render_state + 1;
            object_manager = (render_state & 0xffffffff) * 0x10;
            render_target = object_manager + 8 + shader_program;
            if ((*(uint64_t *)(object_manager + shader_program) & 0xffffffff00000000) == 0) {
              render_target = 0;
            }
            object_manager = stack_long_1;
            if (render_target != 0) {
              vertex_buffer = *(uint64_t *)(shader_program + 8 + (render_state & 0xffffffff) * 0x10);
              break;
            }
          } while (render_state != object_list[1]);
          goto process_next_object;
        }
        
        // 清理渲染状态
        vertex_buffer = (int64_t)bitangent_data - (int64_t)tangent_data >> 3;
        normal_data = tangent_data;
        if (vertex_buffer == 0) {
          if (stack_ulong_1 != 0) {
            do {
              *(uint64_t *)(texture_sampler + index_buffer * 8) = 0;
              index_buffer = index_buffer + 1;
            } while (index_buffer < stack_ulong_1);
          }
          stack_ulong_2 = 0;
          
          // 处理阴影和光照
          do {
            get_object_list(object_manager);
            object_list = stack_ptr_14;
            render_state = stack_ulong_6;
            vertex_buffer = stack_ulong_7;
            normal_data = bitangent_data;
            texture_sampler = stack_ptr_1;
            bitangent_data = tangent_data;
            
            // 处理光照计算
            matrix_transform = stack_long_2;
            index_buffer = 0;
            if (render_state != *(uint64_t *)(object_manager + 8)) {
              if (*(int64_t *)(vertex_buffer + 0x208) - *(int64_t *)(vertex_buffer + 0x200) >> 3 != 0) {
                tangent_data = *(uint64_t **)(texture_sampler + stack_ulong_1 * 8);
                for (material_data = *(uint64_t **)(texture_sampler + (vertex_buffer % (stack_ulong_1 & 0xffffffff)) * 8);
                    material_data != (uint64_t *)0x0; material_data = (uint64_t *)material_data[1]) {
                  if (vertex_buffer == *material_data) {
                    stack_ptr_8 = material_data;
                    stack_ptr_9 = (uint64_t *)(texture_sampler + (vertex_buffer % (stack_ulong_1 & 0xffffffff)) * 8);
                    texture_cache = &stack_ptr_8;
                    goto light_texture_found;
                  }
                }
                stack_ptr_10 = tangent_data;
                stack_ptr_11 = (int64_t *)(texture_sampler + stack_ulong_1 * 8);
                texture_cache = &stack_ptr_10;
light_texture_found:
                if (*texture_cache == tangent_data) {
                  tangent_data = normal_data;
                  if (render_queue <= normal_data) {
                    object_manager = (int64_t)normal_data - (int64_t)bitangent_data >> 3;
                    if (object_manager == 0) {
                      object_manager = 1;
light_alloc_memory:
                      index_buffer = (int64_t)(stack_int_1 + 0xf) & 0xfffffffffffffff0;
                      stack_int_1 = (int)index_buffer + (int)object_manager * 8;
                      tangent_data = (uint64_t *)(stack_array_1[0] + index_buffer);
                    }
                    else {
                      object_manager = object_manager * 2;
                      if (object_manager != 0) goto light_alloc_memory;
                      tangent_data = (uint64_t *)0x0;
                    }
                    if (stack_data_1 != normal_data) {
                      // 移动光照数据
                      memmove(tangent_data);
                    }
                    render_queue = tangent_data + object_manager;
                    stack_data_1 = tangent_data;
                  }
                  *tangent_data = vertex_buffer;
                  normal_data = tangent_data + 1;
                  index_buffer = vertex_buffer % (stack_ulong_1 & 0xffffffff);
                  for (bitangent_data = *(uint64_t **)(stack_ptr_1 + index_buffer * 8);
                      bitangent_data != (uint64_t *)0x0; bitangent_data = (uint64_t *)bitangent_data[1]) {
                    texture_sampler = stack_ptr_1;
                    object_manager = stack_long_1;
                    if (vertex_buffer == *bitangent_data) goto light_texture_processed;
                  }
                  uniform_buffer = (int64_t)(int)stack_ptr_2[2] + 0xfU & 0xfffffffffffffff0;
                  *(int *)(stack_ptr_2 + 2) = (int)uniform_buffer + 0x10;
                  bitangent_data = (uint64_t *)(*stack_ptr_2 + uniform_buffer);
                  *bitangent_data = vertex_buffer;
                  bitangent_data[1] = 0;
                  setup_lighting_params(&stack_uint_1, &stack_data_2, stack_ulong_1 & 0xffffffff,
                                       stack_ulong_2 & 0xffffffff, 1);
                  if ((char)stack_data_2 != '\0') {
                    index_buffer = vertex_buffer % (uint64_t)(uint)stack_data_2._4_4_;
                    hash_light_data(stack_buffer_1, stack_data_2._4_4_);
                  }
                  bitangent_data[1] = *(uint64_t *)(stack_ptr_1 + index_buffer * 8);
                  *(uint64_t **)(stack_ptr_1 + index_buffer * 8) = bitangent_data;
                  stack_ulong_2 = stack_ulong_2 + 1;
                  texture_sampler = stack_ptr_1;
                  object_manager = stack_long_1;
                }
              }
light_texture_processed:
              shader_program = *object_list;
              do {
                render_state = render_state + 1;
                matrix_transform = (render_state & 0xffffffff) * 0x10;
                render_target = matrix_transform + 8 + shader_program;
                if ((*(uint64_t *)(matrix_transform + shader_program) & 0xffffffff00000000) == 0) {
                  render_target = 0;
                }
                bitangent_data = stack_data_1;
                if (render_target != 0) {
                  vertex_buffer = *(uint64_t *)(shader_program + 8 + (render_state & 0xffffffff) * 0x10);
                  break;
                }
              } while (render_state != object_list[1]);
              goto process_light_object;
            }
            
            // 清理光照状态
            vertex_buffer = (int64_t)normal_data - (int64_t)bitangent_data >> 3;
            normal_data = bitangent_data;
            if (vertex_buffer == 0) {
              if (stack_ulong_1 != 0) {
                do {
                  *(uint64_t *)(stack_ptr_1 + index_buffer * 8) = 0;
                  index_buffer = index_buffer + 1;
                } while (index_buffer < stack_ulong_1);
              }
              stack_ulong_2 = 0;
              
              // 释放内存资源
              if (stack_array_1[0] != 0) {
                free_render_memory();
              }
              stack_array_1[0] = 0;
              
              // 处理相机和视口
              if ((*(char *)(stack_long_2 + 0x60c1c) != '\0') &&
                 (*(int *)(stack_long_2 + 0x60c40) == -1)) {
                object_manager = *(int64_t *)(stack_long_2 + 0x60c48);
                stack_uint_4 = 0;
                render_target = *(int64_t *)(object_manager + 0x60b80);
                if (render_target == 0) {
                  render_flags = *(uint64_t *)(object_manager + 0x464);
                  stack_data_2._0_4_ = (float)render_flags;
                  stack_float_1 = (float)*(uint64_t *)(object_manager + 0x454);
                  stack_float_1 = (float)stack_data_2 + stack_float_1;
                  stack_data_2._4_4_ = (float)((uint64_t)render_flags >> 0x20);
                  stack_float_2 = (float)((uint64_t)*(uint64_t *)(object_manager + 0x454) >> 0x20);
                  stack_float_4 = stack_data_2._4_4_ + stack_float_2;
                  stack_data_2 = render_flags;
                }
                else {
                  stack_float_1 = *(float *)(render_target + 0x20);
                  stack_float_4 = *(float *)(render_target + 0x24);
                }
                stack_float_3 = stack_float_1 * 0.5;
                stack_float_4 = stack_float_4 * 0.5;
                stack_float_5 = *(float *)(object_manager + 0x46c) + 5.0;
                update_camera_viewport(stack_long_2 + 0x60c10, &stack_ptr_3, &stack_float_3);
                if (stack_ptr_3 != (int64_t *)0x0) {
                  (**(code **)(*stack_ptr_3 + 0x38))();
                }
              }
              
              // 更新对象属性
              material_data = (uint64_t *)get_object_properties(shader_program, stack_buffer_2);
              render_flags = material_data[1];
              *(uint64_t *)(shader_program + 0x454) = *material_data;
              *(uint64_t *)(shader_program + 0x45c) = render_flags;
              render_params_1 = *(int32_t *)((int64_t)material_data + 0x14);
              render_params_2 = *(int32_t *)(material_data + 3);
              render_params_3 = *(int32_t *)((int64_t)material_data + 0x1c);
              *(int32_t *)(shader_program + 0x464) = *(int32_t *)(material_data + 2);
              *(int32_t *)(shader_program + 0x468) = render_params_1;
              *(int32_t *)(shader_program + 0x46c) = render_params_2;
              *(int32_t *)(shader_program + 0x470) = render_params_3;
              render_params_1 = *(int32_t *)((int64_t)material_data + 0x24);
              render_params_2 = *(int32_t *)(material_data + 5);
              render_params_3 = *(int32_t *)((int64_t)material_data + 0x2c);
              *(int32_t *)(shader_program + 0x474) = *(int32_t *)(material_data + 4);
              *(int32_t *)(shader_program + 0x478) = render_params_1;
              *(int32_t *)(shader_program + 0x47c) = render_params_2;
              *(int32_t *)(shader_program + 0x480) = render_params_3;
              *(int32_t *)(shader_program + 0x484) = *(int32_t *)(material_data + 6);
              stack_data_1 = *(uint64_t **)(shader_program + 0x464);
              object_manager = *(int64_t *)(shader_program + 0x60b80);
              if (object_manager != 0) {
                render_scale_x = *(float *)(object_manager + 0x20);
                if (*(float *)(shader_program + 0x464) < render_scale_x) {
                  render_scale_x = *(float *)(shader_program + 0x464);
                }
                if (*(float *)(object_manager + 0x24) <= *(float *)(shader_program + 0x468)) {
                  stack_data_1 = (uint64_t *)CONCAT44(*(float *)(object_manager + 0x24), render_scale_x);
                }
                else {
                  stack_data_1 = (uint64_t *)CONCAT44(*(float *)(shader_program + 0x468), render_scale_x);
                }
              }
              *(uint64_t *)(shader_program + 0x60b68) = *(uint64_t *)(shader_program + 0x454);
              *(uint64_t **)(shader_program + 0x60b70) = stack_data_1;
              update_object_transform(shader_program);
              
              // 清理对象资源
              if ((*(char *)(shader_program + 0x560) == '\0') &&
                 (object_manager = *(int64_t *)(shader_program + 0x448), object_manager != 0)) {
                *(int32_t *)(object_manager + 0x2150) =
                     *(int32_t *)(*(int64_t *)(object_manager + 0x2148) + 0x3054);
                release_object_resources(object_manager);
                cleanup_object_data(object_manager);
                free_object_memory(*(int64_t *)(shader_program + 0x448) + 0x21e0);
                free_object_memory(shader_program + 0x81b0);
              }
              
              // 检查调试模式
              if (system_memory_2847 == '\0') {
                debug_object_info(shader_program);
              }
              return;
            }
            
            // 释放渲染资源
            do {
              release_render_resource(*normal_data);
              texture_id = (int)index_buffer + 1;
              index_buffer = (uint64_t)texture_id;
              normal_data = normal_data + 1;
              tangent_data = bitangent_data;
            } while ((uint64_t)(int64_t)(int)texture_id < vertex_buffer);
          } while( true );
        }
        
        // 释放纹理资源
        do {
          release_texture_resource(*normal_data);
          texture_id = (int)index_buffer + 1;
          index_buffer = (uint64_t)texture_id;
          normal_data = normal_data + 1;
          bitangent_data = tangent_data;
        } while ((uint64_t)(int64_t)(int)texture_id < vertex_buffer);
      } while( true );
    }
    object_count = texture_id + 1;
    if (*(int64_t *)(stack_long_3 + 0x208) - *(int64_t *)(stack_long_3 + 0x200) >> 3 == 0) {
      object_count = texture_id;
    }
    bitangent_data = (uint64_t *)(uint64_t)object_count;
    shader_program = *stack_ptr_12;
    do {
      stack_ulong_3 = stack_ulong_3 + 1;
      render_target = (stack_ulong_3 & 0xffffffff) * 0x10;
      tangent_data = (uint64_t *)(render_target + 8 + shader_program);
      if ((*(uint64_t *)(render_target + shader_program) & 0xffffffff00000000) == 0) {
        tangent_data = render_queue;
      }
      if (tangent_data != (uint64_t *)0x0) {
        stack_long_3 = *(int64_t *)(shader_program + 8 + (stack_ulong_3 & 0xffffffff) * 0x10);
        break;
      }
    } while (stack_ulong_3 != stack_ptr_12[1]);
  } while( true );
}

/**
 * 初始化游戏对象数组
 * 
 * 该函数负责初始化游戏对象数组，将所有元素设置为0
 * 
 * @param object_array 对象数组指针
 */
void initialize_game_object_array(int64_t object_array)
{
  uint64_t array_size;
  int64_t array_data;
  uint64_t index;
  
  array_size = *(uint64_t *)(object_array + 0x10);
  array_data = *(int64_t *)(object_array + 8);
  index = 0;
  
  // 清零数组元素
  if (array_size != 0) {
    do {
      *(uint64_t *)(array_data + index * 8) = 0;
      index = index + 1;
    } while (index < array_size);
  }
  
  // 重置数组状态
  *(uint64_t *)(object_array + 0x18) = 0;
  return;
}