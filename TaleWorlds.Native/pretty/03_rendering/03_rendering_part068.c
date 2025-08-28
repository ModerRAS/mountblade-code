#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part068.c - 渲染系统高级状态管理和资源控制模块
// 包含10个核心函数，涵盖渲染系统状态初始化、资源管理、参数处理等高级渲染功能

// 常量定义
#define RENDERING_SYSTEM_MAX_PRIORITY_LEVELS 5
#define RENDERING_SYSTEM_DEFAULT_TIMEOUT 9999.0f
#define RENDERING_SYSTEM_SCALE_FACTOR 256.0f
#define RENDERING_SYSTEM_PI 3.1415927f
#define RENDERING_SYSTEM_QUALITY_THRESHOLD 0.08f
#define RENDERING_SYSTEM_FLOAT_NORMALIZATION 1.0f
#define RENDERING_SYSTEM_MATRIX_MULTIPLIER 0.25f
#define RENDERING_SYSTEM_LOCK_TIMEOUT 3
#define RENDERING_SYSTEM_FLAG_MASK 0xdfffffff
#define RENDERING_SYSTEM_PRIORITY_MASK 0xfffU
#define RENDERING_SYSTEM_INDEX_SHIFT 0x14
#define RENDERING_SYSTEM_BYTE_SHIFT 0x20

// 函数别名定义
#define rendering_system_initialize_render_context FUN_180306190
#define rendering_system_process_render_batch FUN_1803065c0
#define rendering_system_execute_render_pipeline FUN_1803065d4
#define rendering_system_empty_function_placeholder FUN_180306894
#define rendering_system_check_render_visibility FUN_1803068a0
#define rendering_system_validate_render_state FUN_1803068ec
#define rendering_system_verify_render_capability FUN_180306b2c
#define rendering_system_release_render_resources FUN_180306b40
#define rendering_system_find_render_object FUN_180306ba0
#define rendering_system_cleanup_render_queue FUN_180306c30
#define rendering_system_compare_render_priority FUN_180306d20

// 渲染系统初始化渲染上下文
// 参数: render_context - 渲染上下文指针
//       render_queue - 渲染队列指针  
//       render_parameters - 渲染参数指针
void rendering_system_initialize_render_context(int64_t render_context, int64_t render_queue, int64_t render_parameters)
{
  int64_t system_state;
  int lock_result;
  uint64_t security_hash;
  uint64_t temp_hash;
  int64_t *resource_manager;
  float quality_factor;
  int64_t queue_parameters[3];
  int8_t security_buffer[32];
  uint64_t stack_guard;
  int64_t **callback_table;
  int8_t padding_buffer[8];
  int64_t resource_handle;
  int64_t queue_size;
  float priority_scale;
  float quality_scale;
  int64_t *render_target;
  int8_t *visibility_flag;
  float *quality_parameter;
  float *performance_metric;
  int64_t *batch_processor;
  int64_t queue_capacity;
  int64_t *resource_allocator;
  int64_t resource_table[2];
  code *entry_point;
  void *exit_handler;
  uint64_t frame_counter;
  int64_t **system_manager;
  int priority_levels[6];
  uint64_t system_checksum;
  
  stack_guard = 0xfffffffffffffffe;
  system_checksum = GET_SECURITY_COOKIE() ^ (uint64_t)security_buffer;
  LOCK();
  *(int32_t *)(render_context + 0x78) = 0;
  UNLOCK();
  LOCK();
  *(int32_t *)(render_context + 0x980) = 0;
  UNLOCK();
  LOCK();
  *(int32_t *)(render_context + 0x1288) = 0;
  UNLOCK();
  queue_parameters[0] = render_queue;
  queue_size = render_parameters;
  if (((*(byte *)(render_parameters + 0x1bd8) & 0x20) != 0) && (4 < *(int *)(render_queue + 0x27c0))) {
    lock_result = _Mtx_trylock(render_context + 0x1bb0);
    if (lock_result == 0) {
      if (*(int64_t *)(queue_parameters[0] + 0x60b80) != 0) {
        *(uint64_t *)(queue_size + 0x124c8) =
             *(uint64_t *)(*(int64_t *)(queue_parameters[0] + 0x60b80) + 0x20);
      }
      resource_manager = *(int64_t **)(render_context + 0x1b90);
      if (resource_manager != *(int64_t **)(render_context + 0x1b98)) {
        do {
          system_state = *resource_manager;
          if (*(int64_t *)(system_state + 0x90) - *(int64_t *)(system_state + 0x88) >> 3 != 0) {
            system_state = *(int64_t *)(system_main_module_state + 0x3d8);
            if ((system_state == 0) ||
               ((*(int *)(system_state + 0x110) != 2 && ((system_state == 0 || (*(int *)(system_state + 0x110) != 3))))))
            {
              security_buffer[0] = 0;
            }
            else {
              security_buffer[0] = 1;
            }
            LOCK();
            *(int32_t *)(system_state + 0xa8) = 0;
            UNLOCK();
            system_state = *(int64_t *)(system_main_module_state + 0x3d8);
            if ((system_state == 0) || (*(int *)(system_state + 0x110) != 1)) {
              priority_levels[0] = 1;
              priority_levels[1] = 10;
              priority_levels[2] = 0x28;
              priority_levels[3] = 0x78;
              priority_levels[4] = 0xf0;
              lock_result = *(int *)(SYSTEM_STATE_MANAGER + 0x2a0);
              if (lock_result < 0) {
                lock_result = 0;
              }
              else if (RENDERING_SYSTEM_MAX_PRIORITY_LEVELS < lock_result) {
                lock_result = RENDERING_SYSTEM_MAX_PRIORITY_LEVELS;
              }
              quality_scale = (float)priority_levels[lock_result] * 0.004166667;
            }
            else {
              quality_scale = RENDERING_SYSTEM_DEFAULT_TIMEOUT;
            }
            if ((*(char *)(system_state + 0x7c) != '\0') &&
               ((system_state == 0 || (*(int *)(system_state + 0x110) != 1)))) {
              temp_hash = *(int64_t *)(system_state + 0x90) - *(int64_t *)(system_state + 0x88) >> 3;
              security_hash = 1;
              if (1 < temp_hash) {
                security_hash = temp_hash;
              }
              quality_factor = (float)(int64_t)security_hash;
              if ((int64_t)security_hash < 0) {
                quality_factor = quality_factor + 1.8446744e+19;
              }
              quality_factor = RENDERING_SYSTEM_SCALE_FACTOR / quality_factor;
              if (0.0 <= quality_factor) {
                if (RENDERING_SYSTEM_FLOAT_NORMALIZATION <= quality_factor) {
                  quality_factor = RENDERING_SYSTEM_FLOAT_NORMALIZATION;
                }
              }
              else {
                quality_factor = 0.0;
              }
              quality_scale = quality_factor * quality_scale;
              if (RENDERING_SYSTEM_FLOAT_NORMALIZATION <= quality_scale) {
                quality_scale = RENDERING_SYSTEM_FLOAT_NORMALIZATION;
              }
            }
            priority_scale = quality_scale * *(float *)(system_state + 0x70);
            quality_scale = quality_scale * *(float *)(system_state + 0x74);
            system_manager = resource_table;
            render_target = &system_state;
            visibility_flag = security_buffer;
            quality_parameter = &priority_scale;
            performance_metric = &quality_scale;
            batch_processor = queue_parameters;
            resource_allocator = &queue_size;
            entry_point = FUN_1803089a0;
            exit_handler = &unknown_var_1888_ptr;
            queue_capacity = render_context;
            resource_table[0] = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr, 0x38, 8, system_allocation_flags);
            *resource_table[0] = (int64_t)render_target;
            resource_table[0][1] = (int64_t)visibility_flag;
            resource_table[0][2] = (int64_t)quality_parameter;
            resource_table[0][3] = (int64_t)performance_metric;
            resource_table[0][4] = (int64_t)batch_processor;
            resource_table[0][5] = queue_capacity;
            resource_table[0][6] = (int64_t)resource_allocator;
            callback_table = resource_table;
            stack_guard = 0xfffffffffffffffe;
            FUN_18015b810();
            FUN_1803a64f0(system_state);
          }
          resource_manager = resource_manager + 1;
        } while (resource_manager != *(int64_t **)(render_context + 0x1b98));
      }
      lock_result = _Mtx_unlock(render_context + 0x1bb0);
      if (lock_result != 0) {
        __Throw_C_error_std__YAXH_Z(lock_result);
      }
      if (*(char *)(system_main_module_state + 0xf9) == '\0') {
        *(int32_t *)(queue_size + 0x124b8) = 0;
      }
      else {
        FUN_180307ca0(render_context, queue_size);
        FUN_180080810(queue_size + 0x9740, render_context + 0x68);
        FUN_180080810(queue_size + 0x9748, render_context + 0x70);
      }
    }
    else if (lock_result != RENDERING_SYSTEM_LOCK_TIMEOUT) {
      __Throw_C_error_std__YAXH_Z(lock_result);
    }
  }
                    // WARNING: Subroutine does not return
  CoreSystemConfigManager(system_checksum ^ (uint64_t)security_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 渲染系统处理渲染批次
// 参数: render_batch_data - 渲染批次数据指针
//       start_index - 起始索引
//       end_index - 结束索引
void rendering_system_process_render_batch(int64_t *render_batch_data, int start_index, int end_index)
{
  uint *frame_counter;
  int64_t *render_buffer;
  float quality_threshold;
  float quality_factor;
  uint render_flags;
  int64_t render_context;
  int64_t *render_object;
  char visibility_flag;
  uint priority_bits;
  uint64_t resource_handle;
  int64_t allocated_memory;
  bool allocation_success;
  int current_index;
  
  current_index = start_index;
  if (start_index < end_index) {
    do {
      render_context = *(int64_t *)*render_batch_data;
      render_object = *(int64_t **)(*(int64_t *)(render_context + 0x88) + (int64_t)current_index * 8);
      if ((((char)render_object[7] == '\0') && (*(char *)render_batch_data[1] == '\0')) &&
         ((*(char *)((int64_t)render_object + 0x39) != '\0' ||
          ((*(float *)render_batch_data[2] < *(float *)(render_object + 6) ||
           (*(float *)render_batch_data[3] < *(float *)((int64_t)render_object + 0x34))))))) {
        if (*(char *)(render_context + 0x7d) != '\0') {
          quality_factor = *(float *)(render_object + 0x52);
          quality_threshold = *(float *)(&system_memory_3ff8 +
                            (int64_t)*(int *)(*(int64_t *)render_batch_data[4] + 0x5b98) * 4);
          (**(code **)(*render_object + 0x108))(render_object);
          if (RENDERING_SYSTEM_QUALITY_THRESHOLD <= quality_factor + quality_threshold * -0.1) goto LAB_1803066f9;
          render_context = *(int64_t *)*render_batch_data;
        }
        FUN_180308500(render_context + 0xa8);
        *(int8_t *)((int64_t)render_object + 0x39) = 1;
      }
LAB_1803066f9:
      if ((*(char *)((int64_t)render_object + 0x39) == '\0') && (visibility_flag = rendering_system_check_render_visibility(), visibility_flag != '\0'))
      {
        visibility_flag = '\x01';
      }
      else {
        visibility_flag = '\0';
      }
      *(char *)(render_object + 9) = visibility_flag;
      quality_threshold = *(float *)(&system_memory_3ff8 + (int64_t)*(int *)(*(int64_t *)render_batch_data[4] + 0x5b98) * 4);
      quality_factor = *(float *)(render_object + 6);
      *(float *)(render_object + 6) = quality_threshold + quality_factor;
      if (visibility_flag == '\0') {
        *(float *)((int64_t)render_object + 0x34) =
             *(float *)(&system_memory_3ff8 + (int64_t)*(int *)(*(int64_t *)render_batch_data[4] + 0x5b98) * 4) +
             *(float *)((int64_t)render_object + 0x34);
      }
      else {
        resource_handle = render_object[0x2b];
        *(int32_t *)((int64_t)render_object + 0x34) = 0;
        if (resource_handle != 0) {
          resource_handle = (uint64_t)(byte)(*(char *)(resource_handle + 0x2c8) + 8);
        }
        *(uint *)((int64_t)render_object + 0x4c) =
             ((int)(quality_threshold + quality_factor) & 0xfff0U | ((uint)resource_handle & 0xff) << RENDERING_SYSTEM_INDEX_SHIFT) << 8 |
             (int)render_object >> 4 & RENDERING_SYSTEM_PRIORITY_MASK;
        render_context = render_batch_data[5];
        LOCK();
        frame_counter = (uint *)(render_context + 0x78);
        render_flags = *frame_counter;
        *frame_counter = *frame_counter + 1;
        UNLOCK();
        priority_bits = render_flags >> 0xb;
        if (*(int64_t *)(render_context + 0x80 + (uint64_t)priority_bits * 8) == 0) {
          allocated_memory = CoreEngine_MemoryAllocator(system_memory_pool_ptr,0x4000,0x25);
          render_buffer = (int64_t *)(render_context + 0x80 + (uint64_t)priority_bits * 8);
          LOCK();
          allocation_success = *render_buffer == 0;
          if (allocation_success) {
            *render_buffer = allocated_memory;
          }
          UNLOCK();
          if ((!allocation_success) && (allocated_memory != 0)) {
                    // WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager();
          }
        }
        *(int64_t **)
         (*(int64_t *)(render_context + 0x80 + (uint64_t)priority_bits * 8) +
         (uint64_t)(render_flags + priority_bits * -0x800) * 8) = render_object;
      }
      current_index = current_index + 1;
    } while (current_index < end_index);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 渲染系统执行渲染管线
// 参数: render_pipeline_data - 渲染管线数据指针
//       start_index - 起始索引
//       end_index - 结束索引
void rendering_system_execute_render_pipeline(int64_t *render_pipeline_data, int start_index, int end_index)
{
  uint *frame_counter;
  int64_t *render_buffer;
  float quality_threshold;
  float quality_factor;
  uint render_flags;
  int64_t render_context;
  int64_t *render_object;
  char visibility_flag;
  uint priority_bits;
  int64_t pipeline_context;
  uint64_t resource_handle;
  int64_t allocated_memory;
  uint64_t register_rbx;
  uint64_t register_rbp;
  uint64_t register_r12;
  uint64_t register_r13;
  uint64_t register_r14;
  bool allocation_success;
  int32_t register_xmm6_a;
  int32_t register_xmm6_b;
  int32_t register_xmm6_c;
  int32_t register_xmm6_d;
  int32_t register_xmm7_a;
  int32_t register_xmm7_b;
  int32_t register_xmm7_c;
  int32_t register_xmm7_d;
  int stack_param;
  
  *(uint64_t *)(pipeline_context + 8) = register_rbx;
  *(uint64_t *)(pipeline_context + 0x20) = register_r12;
  *(uint64_t *)(pipeline_context + -0x20) = register_r13;
  *(int32_t *)(pipeline_context + -0x38) = register_xmm6_a;
  *(int32_t *)(pipeline_context + -0x34) = register_xmm6_b;
  *(int32_t *)(pipeline_context + -0x30) = register_xmm6_c;
  *(int32_t *)(pipeline_context + -0x2c) = register_xmm6_d;
  *(int32_t *)(pipeline_context + -0x48) = register_xmm7_a;
  *(int32_t *)(pipeline_context + -0x44) = register_xmm7_b;
  *(int32_t *)(pipeline_context + -0x40) = register_xmm7_c;
  *(int32_t *)(pipeline_context + -0x3c) = register_xmm7_d;
  *(uint64_t *)(pipeline_context + 0x18) = register_rbp;
  *(uint64_t *)(pipeline_context + -0x28) = register_r14;
  *(int *)(pipeline_context + 0x10) = start_index;
  do {
    render_context = *(int64_t *)*render_pipeline_data;
    render_object = *(int64_t **)(*(int64_t *)(render_context + 0x88) + (int64_t)start_index * 8);
    if ((((char)render_object[7] == '\0') && (*(char *)render_pipeline_data[1] == '\0')) &&
       ((*(char *)((int64_t)render_object + 0x39) != '\0' ||
        ((*(float *)render_pipeline_data[2] < *(float *)(render_object + 6) ||
         (*(float *)render_pipeline_data[3] < *(float *)((int64_t)render_object + 0x34))))))) {
      if (*(char *)(render_context + 0x7d) != '\0') {
        quality_factor = *(float *)(render_object + 0x52);
        quality_threshold = *(float *)(&system_memory_3ff8 + (int64_t)*(int *)(*(int64_t *)render_pipeline_data[4] + 0x5b98) * 4
                          );
        (**(code **)(*render_object + 0x108))(render_object);
        if (RENDERING_SYSTEM_QUALITY_THRESHOLD <= quality_factor + quality_threshold * -0.1) goto LAB_1803066f9;
        render_context = *(int64_t *)*render_pipeline_data;
      }
      FUN_180308500(render_context + 0xa8);
      *(int8_t *)((int64_t)render_object + 0x39) = 1;
      start_index = stack_param;
    }
LAB_1803066f9:
    if ((*(char *)((int64_t)render_object + 0x39) == '\0') && (visibility_flag = rendering_system_check_render_visibility(), visibility_flag != '\0')) {
      visibility_flag = '\x01';
    }
    else {
      visibility_flag = '\0';
    }
    *(char *)(render_object + 9) = visibility_flag;
    quality_threshold = *(float *)(&system_memory_3ff8 + (int64_t)*(int *)(*(int64_t *)render_pipeline_data[4] + 0x5b98) * 4);
    quality_factor = *(float *)(render_object + 6);
    *(float *)(render_object + 6) = quality_threshold + quality_factor;
    if (visibility_flag == '\0') {
      *(float *)((int64_t)render_object + 0x34) =
           *(float *)(&system_memory_3ff8 + (int64_t)*(int *)(*(int64_t *)render_pipeline_data[4] + 0x5b98) * 4) +
           *(float *)((int64_t)render_object + 0x34);
    }
    else {
      resource_handle = render_object[0x2b];
      *(int32_t *)((int64_t)render_object + 0x34) = 0;
      if (resource_handle != 0) {
        resource_handle = (uint64_t)(byte)(*(char *)(resource_handle + 0x2c8) + 8);
      }
      *(uint *)((int64_t)render_object + 0x4c) =
           ((int)(quality_threshold + quality_factor) & 0xfff0U | ((uint)resource_handle & 0xff) << RENDERING_SYSTEM_INDEX_SHIFT) << 8 |
           (int)render_object >> 4 & RENDERING_SYSTEM_PRIORITY_MASK;
      render_context = render_pipeline_data[5];
      LOCK();
      frame_counter = (uint *)(render_context + 0x78);
      render_flags = *frame_counter;
      *frame_counter = *frame_counter + 1;
      UNLOCK();
      priority_bits = render_flags >> 0xb;
      if (*(int64_t *)(render_context + 0x80 + (uint64_t)priority_bits * 8) == 0) {
        allocated_memory = CoreEngine_MemoryAllocator(system_memory_pool_ptr,0x4000,0x25);
        render_buffer = (int64_t *)(render_context + 0x80 + (uint64_t)priority_bits * 8);
        LOCK();
        allocation_success = *render_buffer == 0;
        if (allocation_success) {
          *render_buffer = allocated_memory;
        }
        UNLOCK();
        if ((!allocation_success) && (allocated_memory != 0)) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
      }
      *(int64_t **)
       (*(int64_t *)(render_context + 0x80 + (uint64_t)priority_bits * 8) + (uint64_t)(render_flags + priority_bits * -0x800) * 8
       ) = render_object;
      start_index = stack_param;
    }
    stack_param = start_index + 1;
    start_index = stack_param;
    if (end_index <= stack_param) {
      return;
    }
  } while( true );
}





// 渲染系统空函数占位符
// 用作渲染系统中的占位符函数，保持结构完整性
void rendering_system_empty_function_placeholder(void)
{
  return;
}



// 渲染系统检查渲染可见性
// 参数: render_context - 渲染上下文
//       camera_matrix - 相机矩阵指针
//       render_target - 渲染目标
//       viewport_size - 视口大小
//       render_flags - 渲染标志
//       visibility_threshold - 可见性阈值
// 返回: bool - 是否可见
bool rendering_system_check_render_visibility(int64_t render_context, int64_t *camera_matrix, int64_t render_target, int64_t viewport_size,
                                             int64_t render_flags, float visibility_threshold)
{
  float distance_factor;
  float quality_factor;
  char visibility_state;
  int64_t render_object;
  uint render_priority;
  float fVar6;
  float matrix_a;
  float matrix_b;
  float matrix_c;
  int32_t padding_a;
  float matrix_d;
  float matrix_e;
  float matrix_f;
  int32_t padding_b;
  float matrix_g;
  float matrix_h;
  float matrix_i;
  int32_t padding_c;
  float matrix_j;
  float matrix_k;
  float matrix_l;
  int32_t padding_d;
  
  (**(code **)(*camera_matrix + 0x218))(camera_matrix);
  (**(code **)(*camera_matrix + 0x218))(camera_matrix);
  if ((void *)*camera_matrix == &unknown_var_1008_ptr) {
    render_priority = *(uint *)((int64_t)camera_matrix + 0x174);
  }
  else {
    render_priority = (**(code **)((void *)*camera_matrix + 0x130))(camera_matrix);
  }
  if (((render_priority & 1) != 0) &&
     ((render_priority = *(uint *)(render_target + 0x60300) & 0xfffffffe,
      (render_priority & *(uint *)(camera_matrix + 0x2e)) == render_priority || ((*(uint *)(camera_matrix + 0x2e) & 1) != 0)))) {
    render_object = (**(code **)(*camera_matrix + 0x218))(camera_matrix);
    fVar6 = *(float *)(render_object + 0x14);
    distance_factor = *(float *)(render_object + 0x10);
    quality_factor = *(float *)(render_object + 0x18);
    render_object = (**(code **)(*camera_matrix + 0x218))(camera_matrix);
    visibility_state = func_0x0001801be000(viewport_size + 0x30,render_object + 0x30,
                                SQRT(distance_factor * distance_factor + fVar6 * fVar6 + quality_factor * quality_factor));
    if (visibility_state != '\0') {
      if ((char)camera_matrix[0x2f] == '\0') {
        FUN_180287b30(viewport_size + 0xf0,&matrix_a);
        padding_a = 0;
        padding_b = 0;
        padding_c = 0;
        padding_d = 0x3f800000;
        render_object = (**(code **)(*camera_matrix + 0x218))(camera_matrix);
        fVar6 = *(float *)(render_object + 0x34);
        distance_factor = *(float *)(render_object + 0x38);
        quality_factor = *(float *)(render_object + 0x30);
        matrix_j = fVar6 * matrix_d + matrix_a * quality_factor + distance_factor * matrix_g + matrix_j;
        matrix_k = fVar6 * matrix_e + matrix_b * quality_factor + distance_factor * matrix_h + matrix_k;
        matrix_l = fVar6 * matrix_f + matrix_c * quality_factor + distance_factor * matrix_i + matrix_l;
        if ((0.0 < visibility_threshold) && (visibility_threshold < -matrix_l)) {
          return false;
        }
        if ((0.0 < (float)render_flags) && (0.0 < render_flags._4_4_)) {
          fVar6 = RENDERING_SYSTEM_FLOAT_NORMALIZATION / (RENDERING_SYSTEM_FLOAT_NORMALIZATION - matrix_l * matrix_l);
          fVar6 = SQRT(ABS(((matrix_k * matrix_k + matrix_j * matrix_j + matrix_l * matrix_l)
                           - RENDERING_SYSTEM_FLOAT_NORMALIZATION) * fVar6)) *
                  *(float *)(viewport_size + 0x14c) * -RENDERING_SYSTEM_PI * *(float *)(viewport_size + 0x14c) * fVar6 *
                  *(float *)(viewport_size + 0x11c20) * *(float *)(viewport_size + 0x11c24) * RENDERING_SYSTEM_MATRIX_MULTIPLIER;
          if (fVar6 < 0.0) {
            fVar6 = *(float *)(viewport_size + 0x11c24) * *(float *)(viewport_size + 0x11c20);
          }
          return render_flags._4_4_ * (float)render_flags < fVar6;
        }
      }
      return true;
    }
  }
  return false;
}



// 渲染系统验证渲染状态
// 返回: bool - 渲染状态是否有效
bool rendering_system_validate_render_state(void)
{
  float distance_factor;
  float quality_factor;
  char visibility_state;
  uint64_t render_flags;
  int64_t render_object;
  uint render_priority;
  int64_t *camera_matrix;
  int64_t render_target;
  int64_t viewport_size;
  float coordinate_x;
  float coordinate_y;
  float coordinate_z;
  int32_t padding_a;
  float matrix_a;
  float matrix_b;
  float matrix_c;
  int32_t padding_b;
  float matrix_d;
  float matrix_e;
  float matrix_f;
  int32_t padding_c;
  float matrix_g;
  float matrix_h;
  float matrix_i;
  int32_t padding_d;
  float visibility_threshold;
  float quality_metric;
  
  if (((in_RAX & 1) != 0) &&
     ((uVar5 = *(uint *)(unaff_RSI + 0x60300) & 0xfffffffe,
      (uVar5 & *(uint *)(unaff_RBX + 0x2e)) == uVar5 || ((*(uint *)(unaff_RBX + 0x2e) & 1) != 0))))
  {
    lVar4 = (**(code **)(*unaff_RBX + 0x218))();
    fVar6 = *(float *)(lVar4 + 0x14);
    fVar1 = *(float *)(lVar4 + 0x10);
    fVar2 = *(float *)(lVar4 + 0x18);
    lVar4 = (**(code **)(*unaff_RBX + 0x218))();
    cVar3 = func_0x0001801be000(unaff_RDI + 0x30,lVar4 + 0x30,
                                SQRT(fVar1 * fVar1 + fVar6 * fVar6 + fVar2 * fVar2));
    if (cVar3 != '\0') {
      if ((char)unaff_RBX[0x2f] == '\0') {
        FUN_180287b30(unaff_RDI + 0xf0,&stack0x00000030);
        uStack000000000000003c = 0;
        uStack000000000000004c = 0;
        uStack000000000000005c = 0;
        uStack000000000000006c = 0x3f800000;
        lVar4 = (**(code **)(*unaff_RBX + 0x218))();
        fVar6 = *(float *)(lVar4 + 0x34);
        fVar1 = *(float *)(lVar4 + 0x38);
        fVar2 = *(float *)(lVar4 + 0x30);
        fStack0000000000000060 =
             fVar6 * fStack0000000000000040 + fStack0000000000000030 * fVar2 +
             fVar1 * fStack0000000000000050 + fStack0000000000000060;
        fStack0000000000000064 =
             fVar6 * fStack0000000000000044 + fStack0000000000000034 * fVar2 +
             fVar1 * fStack0000000000000054 + fStack0000000000000064;
        in_stack_00000068 =
             fVar6 * in_stack_00000048 + in_stack_00000038 * fVar2 + fVar1 * in_stack_00000058 +
             in_stack_00000068;
        if ((0.0 < in_stack_000000c8) && (in_stack_000000c8 < -in_stack_00000068)) {
          return false;
        }
        if ((0.0 < fStack00000000000000c0) && (0.0 < fStack00000000000000c4)) {
          fVar6 = 1.0 / (1.0 - in_stack_00000068 * in_stack_00000068);
          fVar6 = SQRT(ABS(((fStack0000000000000064 * fStack0000000000000064 +
                             fStack0000000000000060 * fStack0000000000000060 +
                            in_stack_00000068 * in_stack_00000068) - 1.0) * fVar6)) *
                  *(float *)(unaff_RDI + 0x14c) * -3.1415927 * *(float *)(unaff_RDI + 0x14c) * fVar6
                  * *(float *)(unaff_RDI + 0x11c20) * *(float *)(unaff_RDI + 0x11c24) * 0.25;
          if (fVar6 < 0.0) {
            fVar6 = *(float *)(unaff_RDI + 0x11c24) * *(float *)(unaff_RDI + 0x11c20);
          }
          return fStack00000000000000c4 * fStack00000000000000c0 < fVar6;
        }
      }
      return true;
    }
  }
  return false;
}



// 渲染系统验证渲染能力
// 返回: bool - 渲染能力是否可用
bool rendering_system_verify_render_capability(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int64_t lVar4;
  int64_t in_RAX;
  uint64_t uVar5;
  uint uVar6;
  int64_t *unaff_RBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  float fVar7;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  int32_t uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  int32_t uStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  int32_t uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  int32_t uStack000000000000006c;
  int32_t in_stack_00000070;
  int32_t in_stack_00000078;
  int32_t in_stack_00000080;
  int32_t in_stack_00000088;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float in_stack_000000c8;
  
  uVar5 = (**(code **)(in_RAX + 0x130))();
  if (((uVar5 & 1) != 0) &&
     ((uVar6 = *(uint *)(unaff_RSI + 0x60300) & 0xfffffffe,
      (uVar6 & *(uint *)(unaff_RBX + 0x2e)) == uVar6 || ((*(uint *)(unaff_RBX + 0x2e) & 1) != 0))))
  {
    lVar4 = (**(code **)(*unaff_RBX + 0x218))();
    fVar7 = *(float *)(lVar4 + 0x14);
    fVar1 = *(float *)(lVar4 + 0x10);
    fVar2 = *(float *)(lVar4 + 0x18);
    lVar4 = (**(code **)(*unaff_RBX + 0x218))();
    cVar3 = func_0x0001801be000(unaff_RDI + 0x30,lVar4 + 0x30,
                                SQRT(fVar1 * fVar1 + fVar7 * fVar7 + fVar2 * fVar2));
    if (cVar3 != '\0') {
      if ((char)unaff_RBX[0x2f] == '\0') {
        FUN_180287b30(unaff_RDI + 0xf0,&stack0x00000030);
        uStack000000000000003c = 0;
        uStack000000000000004c = 0;
        uStack000000000000005c = 0;
        uStack000000000000006c = 0x3f800000;
        lVar4 = (**(code **)(*unaff_RBX + 0x218))();
        fVar7 = *(float *)(lVar4 + 0x34);
        fVar1 = *(float *)(lVar4 + 0x38);
        fVar2 = *(float *)(lVar4 + 0x30);
        fStack0000000000000060 =
             fVar7 * fStack0000000000000040 + fStack0000000000000030 * fVar2 +
             fVar1 * fStack0000000000000050 + fStack0000000000000060;
        fStack0000000000000064 =
             fVar7 * fStack0000000000000044 + fStack0000000000000034 * fVar2 +
             fVar1 * fStack0000000000000054 + fStack0000000000000064;
        in_stack_00000068 =
             fVar7 * in_stack_00000048 + in_stack_00000038 * fVar2 + fVar1 * in_stack_00000058 +
             in_stack_00000068;
        if ((0.0 < in_stack_000000c8) && (in_stack_000000c8 < -in_stack_00000068)) {
          return false;
        }
        if ((0.0 < fStack00000000000000c0) && (0.0 < fStack00000000000000c4)) {
          fVar7 = 1.0 / (1.0 - in_stack_00000068 * in_stack_00000068);
          fVar7 = SQRT(ABS(((fStack0000000000000064 * fStack0000000000000064 +
                             fStack0000000000000060 * fStack0000000000000060 +
                            in_stack_00000068 * in_stack_00000068) - 1.0) * fVar7)) *
                  *(float *)(unaff_RDI + 0x14c) * -3.1415927 * *(float *)(unaff_RDI + 0x14c) * fVar7
                  * *(float *)(unaff_RDI + 0x11c20) * *(float *)(unaff_RDI + 0x11c24) * 0.25;
          if (fVar7 < 0.0) {
            fVar7 = *(float *)(unaff_RDI + 0x11c24) * *(float *)(unaff_RDI + 0x11c20);
          }
          return fStack00000000000000c4 * fStack00000000000000c0 < fVar7;
        }
      }
      return true;
    }
  }
  return false;
}





// 渲染系统释放渲染资源
// 参数: render_context - 渲染上下文指针
void rendering_system_release_render_resources(int64_t render_context)

{
  uint *puVar1;
  int64_t *plVar2;
  
  if (*(int64_t *)(param_1 + 0x1c48) != 0) {
    puVar1 = (uint *)(*(int64_t *)(param_1 + 0x1c48) + 0x328);
    *puVar1 = *puVar1 & 0xdfffffff;
    plVar2 = *(int64_t **)(param_1 + 0x1c48);
    *(uint64_t *)(param_1 + 0x1c48) = 0;
    if (plVar2 != (int64_t *)0x0) {
                    // WARNING: Could not recover jumptable at 0x000180306b8c. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*plVar2 + 0x38))();
      return;
    }
  }
  return;
}



int64_t FUN_180306ba0(int64_t param_1,int64_t param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  byte *pbVar5;
  int iVar6;
  int64_t lVar7;
  int64_t *plVar8;
  
  plVar8 = *(int64_t **)(param_1 + 0x1b90);
  if (plVar8 != *(int64_t **)(param_1 + 0x1b98)) {
    iVar2 = *(int *)(param_2 + 0x10);
    do {
      lVar4 = *plVar8;
      iVar3 = *(int *)(lVar4 + 0x60);
      iVar6 = iVar2;
      if (iVar3 == iVar2) {
        if (iVar3 != 0) {
          pbVar5 = *(byte **)(lVar4 + 0x58);
          lVar7 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar5;
          do {
            pbVar1 = pbVar5 + lVar7;
            iVar6 = (uint)*pbVar5 - (uint)*pbVar1;
            if (iVar6 != 0) break;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar1 != 0);
        }
LAB_180306bfe:
        if (iVar6 == 0) {
          return lVar4;
        }
      }
      else if (iVar3 == 0) goto LAB_180306bfe;
      plVar8 = plVar8 + 1;
    } while (plVar8 != *(int64_t **)(param_1 + 0x1b98));
  }
  return 0;
}





// 渲染系统清理渲染队列
// 参数: render_context - 渲染上下文指针
void rendering_system_cleanup_render_queue(int64_t render_context)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  
  iVar3 = _Mtx_lock(param_1 + 0x1bb0);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  plVar5 = *(int64_t **)(param_1 + 0x1b90);
  if (plVar5 != *(int64_t **)(param_1 + 0x1b98)) {
    do {
      lVar1 = *plVar5;
      iVar3 = _Mtx_lock(lVar1);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      plVar2 = *(int64_t **)(lVar1 + 0x90);
      plVar4 = *(int64_t **)(lVar1 + 0x88);
      if (plVar4 != plVar2) {
        do {
          if ((int64_t *)*plVar4 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar4 + 0x38))();
          }
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar2);
        plVar4 = *(int64_t **)(lVar1 + 0x88);
      }
      *(int64_t **)(lVar1 + 0x90) = plVar4;
      iVar3 = _Mtx_unlock(lVar1);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != *(int64_t **)(param_1 + 0x1b98));
  }
  iVar3 = _Mtx_unlock(param_1 + 0x1bb0);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}



// 渲染系统比较渲染优先级
// 参数: object_a - 渲染对象A指针
//       object_b - 渲染对象B指针
// 返回: bool - 优先级比较结果
bool rendering_system_compare_render_priority(int64_t *object_a, int64_t *object_b)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(*param_2 + 0x4c);
  uVar2 = *(uint *)(*param_1 + 0x4c);
  if ((int64_t *)*param_1 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_1 + 0x38))();
  }
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  return uVar1 < uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



