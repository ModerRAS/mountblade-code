#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 01_initialization_part047.c - 5 个函数

// 内存偏移量常量定义
#define OBJECT_REFERENCE_OFFSET   0x1b0
#define STATUS_FLAG_1_OFFSET      0x208
#define STATUS_FLAG_2_OFFSET      0x204
#define MEMORY_FIELD_1_OFFSET     0x10
#define MEMORY_FIELD_2_OFFSET     0x38
#define MEMORY_FIELD_3_OFFSET     0x60
#define MEMORY_FIELD_4_OFFSET     0x88
#define MEMORY_FIELD_5_OFFSET     200
#define INITIALIZER_OFFSET        0x28
#define DESTRUCTOR_OFFSET         0x38
#define OBJECT_FLAG_OFFSET        0xfd
#define ANIMATION_FLAG_MASK       0x20
#define REFERENCE_COUNT_OFFSET    0x200
#define BASE_SIZE_MULTIPLIER      3
#define SIZE_FACTOR_NORMAL        2
#define SIZE_FACTOR_LARGE         4
#define SIZE_THRESHOLD            0xffff
#define BASE_SIZE_OFFSET          0x1fc

// 函数: void update_object_reference(int64_t object_ptr, int64_t *reference_ptr)
// 功能: 更新对象的引用关系，处理引用计数和内存管理
void update_object_reference(int64_t object_ptr, int64_t *reference_ptr)

{
  int64_t *old_reference;
  uint64_t cleanup_context_1;
  int32_t cleanup_context_2;
  int64_t stack_temp_1;
  int8_t cleanup_context_3 [8];
  int64_t stack_temp_2;
  int32_t cleanup_context_4;
  int64_t *reference_manager;
  
  // 检查是否需要更新引用
  if (*(int64_t *)(object_ptr + OBJECT_REFERENCE_OFFSET) != *reference_ptr) {
    // 处理空引用情况
    if (*reference_ptr == 0) {
      reference_manager = (int64_t *)0x0;
      cleanup_context_3[0] = 0;
      cleanup_context_4 = 0;
      stack_temp_2 = object_ptr;
      FUN_18007f4c0(cleanup_context_3);
      
      // 检查是否有活动状态标志
      if ((*(int *)(object_ptr + STATUS_FLAG_1_OFFSET) != 0) || 
          (*(int *)(object_ptr + STATUS_FLAG_2_OFFSET) != 0)) {
        cleanup_context_1 = *(uint64_t *)(object_ptr + OBJECT_REFERENCE_OFFSET);
        cleanup_context_2 = 0;
        FUN_18007f770(&cleanup_context_1);
        old_reference = reference_manager;
        FUN_1800860f0(reference_manager + 2, stack_temp_1 + MEMORY_FIELD_1_OFFSET);
        FUN_1800860f0(old_reference + 7, stack_temp_1 + MEMORY_FIELD_2_OFFSET);
        FUN_180086090(old_reference + 0xc, stack_temp_1 + MEMORY_FIELD_3_OFFSET);
        FUN_180085fb0(old_reference + 0x11, stack_temp_1 + MEMORY_FIELD_4_OFFSET);
        FUN_180085ec0(old_reference + 0x19, stack_temp_1 + MEMORY_FIELD_5_OFFSET);
        FUN_18007f840(&cleanup_context_1);
      }
      FUN_18007f6a0(cleanup_context_3);
      if (reference_manager != (int64_t *)0x0) {
        // 调用引用管理器的析构函数
        (**(code **)(*reference_manager + DESTRUCTOR_OFFSET))();
      }
    }
    
    // 获取新引用并调用其初始化函数
    reference_ptr = (int64_t *)*reference_ptr;
    if (reference_ptr != (int64_t *)0x0) {
      (**(code **)(*reference_ptr + INITIALIZER_OFFSET))(reference_ptr);
    }
    
    // 更新对象引用并释放旧引用
    old_reference = *(int64_t **)(object_ptr + OBJECT_REFERENCE_OFFSET);
    *(int64_t **)(object_ptr + OBJECT_REFERENCE_OFFSET) = reference_ptr;
    if (old_reference != (int64_t *)0x0) {
      // 调用旧引用的析构函数
      (**(code **)(*old_reference + DESTRUCTOR_OFFSET))();
    }
  }
  return;
}

// 函数: int64_t calculate_memory_requirement(int64_t object_ptr)
// 功能: 计算对象所需的内存大小，根据对象类型和引用数量进行动态调整
int64_t calculate_memory_requirement(int64_t object_ptr)

{
  int64_t target_object;
  int64_t size_factor;
  byte has_animation_flag;
  
  // 检查对象是否有动画标志
  has_animation_flag = *(byte *)(object_ptr + OBJECT_FLAG_OFFSET) & ANIMATION_FLAG_MASK;
  target_object = object_ptr;
  
  // 如果没有动画标志，通过引用获取实际对象
  if (has_animation_flag == 0) {
    target_object = func_0x000180085de0(*(uint64_t *)(object_ptr + OBJECT_REFERENCE_OFFSET));
  }
  
  // 根据引用数量确定大小因子
  size_factor = SIZE_FACTOR_NORMAL;
  if (SIZE_THRESHOLD < *(int *)(target_object + REFERENCE_COUNT_OFFSET)) {
    size_factor = SIZE_FACTOR_LARGE;
  }
  
  // 再次获取实际对象（如果需要）
  if (has_animation_flag == 0) {
    object_ptr = func_0x000180085de0(*(uint64_t *)(object_ptr + OBJECT_REFERENCE_OFFSET));
  }
  
  // 计算总内存需求：基础大小 * 3 * 大小因子
  return (*(int *)(object_ptr + BASE_SIZE_OFFSET) * BASE_SIZE_MULTIPLIER) * size_factor;
}

// 函数: float * calculate_bounding_box(float *mesh_ptr)
// 功能: 计算3D对象的边界框，包括最小/最大坐标、中心点和半径
// 
// 原始实现：FUN_180075b70
// 简化实现：边界框计算函数（完整版）
float * calculate_bounding_box(float *mesh_ptr)

{
  float *bounding_box_ptr;
  byte has_animation_flag;
  int64_t *geometry_ptr;
  float *texture_ptr;
  char cVar5;
  float *current_vertex;
  uint vertex_index;
  uint64_t vertex_count;
  bool has_lock;
  float min_x;
  float min_y;
  float min_z;
  float max_x;
  float max_y;
  float max_z;
  float center_x;
  float center_y;
  float center_z;
  float radius;
  float stack_b8;
  float stack_b4;
  float stack_b0;
  int32_t stack_ac;
  float stack_a8;
  float stack_a4;
  float stack_a0;
  int32_t stack_9c;
  float *mesh_reference;
  int32_t stack_90;
  int64_t stack_88;
  uint64_t stack_78;
  uint64_t stack_70;
  uint64_t stack_68;
  uint64_t stack_60;
  float stack_58;
  float stack_54;
  float stack_50;
  float stack_4c;
  uint64_t stack_48;
  uint64_t stack_40;
  uint64_t stack_38;
  
  stack_38 = 0xfffffffffffffffe;
  current_vertex = mesh_ptr;
  
  // 检查是否有动画标志，决定使用哪个几何数据引用
  if ((*(byte *)((int64_t)mesh_ptr + OBJECT_FLAG_OFFSET) & ANIMATION_FLAG_MASK) == 0) {
    current_vertex = (float *)func_0x000180085de0(*(uint64_t *)(mesh_ptr + 0x6c));
  }
  
  // 检查几何数据是否有效且可见
  if ((*(int64_t *)(current_vertex + 0x84) != 0) && (((uint)mesh_ptr[0x40] & 0x80) == 0)) {
    // 初始化边界框为极大值
    bounding_box_ptr = mesh_ptr + 0x9d;
    bounding_box_ptr[0] = 1e+08;  // min_x
    bounding_box_ptr[1] = 1e+08;  // min_y
    mesh_ptr[0x9f] = 1e+08;      // min_z
    mesh_ptr[0xa0] = 3.4028235e+38;  // max_x
    mesh_ptr[0xa1] = -1e+08;     // max_y
    mesh_ptr[0xa2] = -1e+08;     // max_z
    mesh_ptr[0xa3] = -1e+08;     // max_z
    mesh_ptr[0xa4] = 3.4028235e+38;  // max_z
    
    vertex_index = 0;
    mesh_ptr[0xa9] = 0.0;        // radius
    mesh_ptr[0xa5] = 0.0;        // center_x
    mesh_ptr[0xa6] = 0.0;        // center_y
    mesh_ptr[0xa7] = 0.0;        // center_z
    mesh_ptr[0xa8] = 3.4028235e+38;  // radius_max
    
    stack_90 = 0;
    mesh_reference = current_vertex;
    FUN_18007f770(&mesh_reference);
    
    // 遍历所有顶点更新边界框
    if (*(int *)(stack_88 + 0x10) != 0) {
      do {
        current_vertex = (float *)((int64_t)(int)vertex_index * 0x10 + *(int64_t *)(stack_88 + 0x18));
        stack_a8 = *current_vertex;  // vertex_x
        
        // 更新最小X坐标
        if (*bounding_box_ptr < stack_a8) {
          stack_a8 = *bounding_box_ptr;
        }
        
        stack_a4 = current_vertex[1];  // vertex_y
        // 更新最小Y坐标
        if (mesh_ptr[0x9e] < stack_a4) {
          stack_a4 = mesh_ptr[0x9e];
        }
        
        stack_a0 = current_vertex[2];  // vertex_z
        // 更新最小Z坐标
        if (mesh_ptr[0x9f] < stack_a0) {
          stack_a0 = mesh_ptr[0x9f];
        }
        
        // 保存最小坐标
        *(uint64_t *)bounding_box_ptr = CONCAT44(stack_a4, stack_a8);
        *(uint64_t *)(mesh_ptr + 0x9f) = CONCAT44(stack_9c, stack_a0);
        
        // 更新最大坐标
        stack_b8 = *current_vertex;
        if (stack_b8 < mesh_ptr[0xa1]) {
          stack_b8 = mesh_ptr[0xa1];
        }
        
        stack_b4 = current_vertex[1];
        if (stack_b4 < mesh_ptr[0xa2]) {
          stack_b4 = mesh_ptr[0xa2];
        }
        
        stack_b0 = current_vertex[2];
        if (stack_b0 < mesh_ptr[0xa3]) {
          stack_b0 = mesh_ptr[0xa3];
        }
        
        // 保存最大坐标
        *(uint64_t *)(mesh_ptr + 0xa1) = CONCAT44(stack_b4, stack_b8);
        *(uint64_t *)(mesh_ptr + 0xa3) = CONCAT44(stack_ac, stack_b0);
        
        vertex_index = vertex_index + 1;
      } while (vertex_index < *(uint *)(stack_88 + 0x10));
    }
    
    // 处理纹理和变换矩阵
    current_vertex = *(float **)(mesh_ptr + 0x6e);
    if ((current_vertex != (float *)0x0) && (((uint)current_vertex[0x4e] & 0x3000) != 0)) {
      // 应用变换矩阵
      stack_78 = *(uint64_t *)(mesh_ptr + 0x48);
      stack_70 = *(uint64_t *)(mesh_ptr + 0x4a);
      stack_68 = *(uint64_t *)(mesh_ptr + 0x4c);
      stack_60 = *(uint64_t *)(mesh_ptr + 0x4e);
      stack_58 = mesh_ptr[0x50];
      stack_54 = mesh_ptr[0x51];
      stack_50 = mesh_ptr[0x52];
      stack_4c = mesh_ptr[0x53];
      stack_48 = *(uint64_t *)(mesh_ptr + 0x54);
      stack_40 = *(uint64_t *)(mesh_ptr + 0x56);
      
      FUN_180085c10(&stack_78);
      FUN_18063a240(bounding_box_ptr, bounding_box_ptr, &stack_78);
      
      current_vertex = *(float **)(mesh_ptr + 0x6e);
      if (((uint)current_vertex[0x4e] & 0x3000) == 0x2000) {
        // 应用缩放变换
        stack_78 = *(uint64_t *)(mesh_ptr + 0x48);
        stack_70 = *(uint64_t *)(mesh_ptr + 0x4a);
        stack_68 = *(uint64_t *)(mesh_ptr + 0x4c);
        stack_60 = *(uint64_t *)(mesh_ptr + 0x4e);
        stack_58 = mesh_ptr[0x50];
        stack_54 = mesh_ptr[0x51];
        stack_50 = mesh_ptr[0x52];
        stack_4c = mesh_ptr[0x53];
        stack_48 = *(uint64_t *)(mesh_ptr + 0x54);
        stack_40 = *(uint64_t *)(mesh_ptr + 0x56);
        
        FUN_180085ac0(&stack_78, 0x3fc90fdb);  // 缩放因子
        FUN_18063a240(bounding_box_ptr, bounding_box_ptr, &stack_78);
        
        stack_78 = *(uint64_t *)(mesh_ptr + 0x48);
        stack_70 = *(uint64_t *)(mesh_ptr + 0x4a);
        stack_68 = *(uint64_t *)(mesh_ptr + 0x4c);
        stack_60 = *(uint64_t *)(mesh_ptr + 0x4e);
        stack_58 = mesh_ptr[0x50];
        stack_54 = mesh_ptr[0x51];
        stack_50 = mesh_ptr[0x52];
        stack_4c = mesh_ptr[0x53];
        stack_48 = *(uint64_t *)(mesh_ptr + 0x54);
        stack_40 = *(uint64_t *)(mesh_ptr + 0x56);
        
        FUN_180085970(&stack_78);
        current_vertex = (float *)FUN_18063a240(bounding_box_ptr, bounding_box_ptr, &stack_78);
      }
    }
    
    // 计算中心点和半径
    texture_ptr = mesh_reference;
    if (mesh_ptr[0xa1] < *bounding_box_ptr) {
      // 边界框无效，重置为零
      mesh_ptr[0xa9] = 0.0;
      bounding_box_ptr[0] = 0.0;
      bounding_box_ptr[1] = 0.0;
      mesh_ptr[0x9f] = 0.0;
      mesh_ptr[0xa0] = 0.0;
      mesh_ptr[0xa1] = 0.0;
      mesh_ptr[0xa2] = 0.0;
      mesh_ptr[0xa3] = 0.0;
      mesh_ptr[0xa4] = 0.0;
      mesh_ptr[0xa5] = 0.0;
      mesh_ptr[0xa6] = 0.0;
      mesh_ptr[0xa7] = 0.0;
      mesh_ptr[0xa8] = 0.0;
    }
    else {
      // 计算中心点（最小和最大坐标的平均值）
      mesh_ptr[0xa5] = (mesh_ptr[0xa1] + *bounding_box_ptr) * 0.5;
      mesh_ptr[0xa6] = (mesh_ptr[0xa2] + mesh_ptr[0x9e]) * 0.5;
      mesh_ptr[0xa7] = (mesh_ptr[0xa3] + mesh_ptr[0x9f]) * 0.5;
      mesh_ptr[0xa8] = 3.4028235e+38;
      
      // 计算半径（到中心点的最大距离）
      radius = 0.0;
      vertex_count = (uint64_t)*(uint *)(stack_88 + 0x10);
      if (0 < (int)*(uint *)(stack_88 + 0x10)) {
        current_vertex = *(float **)(stack_88 + 0x18);
        max_x = radius;
        do {
          radius = (*current_vertex - mesh_ptr[0xa5]) * (*current_vertex - mesh_ptr[0xa5]) +
                   (current_vertex[1] - mesh_ptr[0xa6]) * (current_vertex[1] - mesh_ptr[0xa6]) +
                   (current_vertex[2] - mesh_ptr[0xa7]) * (current_vertex[2] - mesh_ptr[0xa7]);
          if (radius <= max_x) {
            radius = max_x;
          }
          current_vertex = current_vertex + 4;
          vertex_count = vertex_count - 1;
          max_x = radius;
        } while (vertex_count != 0);
      }
      mesh_ptr[0xa9] = SQRT(radius);
    }
    
    // 线程安全的引用计数管理
    if (mesh_reference != (float *)0x0) {
      while( true ) {
        LOCK();
        cVar5 = *(char *)(texture_ptr + 0x3b);
        has_lock = cVar5 == '\0';
        if (has_lock) {
          *(char *)(texture_ptr + 0x3b) = '\x01';
          cVar5 = '\0';
        }
        UNLOCK();
        if (has_lock) break;
        
        radius = (float)_Thrd_id();
        if ((texture_ptr[0x3c] == radius) || (texture_ptr[0x3c] != 0.0)) goto LAB_180075f4f;
        Sleep();
      }
      cVar5 = '\0';
    LAB_180075f4f:
      LOCK();
      bounding_box_ptr = texture_ptr + 0x3a;
      radius = *bounding_box_ptr;
      current_vertex = (float *)(uint64_t)(uint)radius;
      *bounding_box_ptr = (float)((int)*bounding_box_ptr + -1);
      UNLOCK();
      
      if (cVar5 == '\0') {
        if ((((radius == 1.4013e-45) && (*(int64_t *)(mesh_reference + 0x84) != 0)) &&
            (current_vertex = mesh_reference, FUN_1800791a0(mesh_reference), *(char *)(current_vertex + 0x3f) == '\0')) &&
           ((*(char *)(current_vertex + 0x3d) == '\0' &&
            (((*(byte *)((int64_t)current_vertex + OBJECT_FLAG_OFFSET) & ANIMATION_FLAG_MASK) == 0 ||
             ((*(byte *)((int64_t)current_vertex + 0xfe) & 1) == 0)))))) {
          geometry_ptr = *(int64_t **)(current_vertex + 0x84);
          current_vertex[0x84] = 0.0;
          current_vertex[0x85] = 0.0;
          if (geometry_ptr != (int64_t *)0x0) {
            (**(code **)(*geometry_ptr + DESTRUCTOR_OFFSET))();
          }
        }
        LOCK();
        has_animation_flag = *(byte *)(texture_ptr + 0x3b);
        *(byte *)(texture_ptr + 0x3b) = 0;
        current_vertex = (float *)(uint64_t)has_animation_flag;
        UNLOCK();
      }
    }
  }
  return current_vertex;
}

// 函数: void update_animation_state(int64_t *animation_object)
// 功能: 更新动画状态，处理关键帧插值和时间同步
// 
// 原始实现：FUN_180075ff0
// 简化实现：动画状态更新函数（完整版）
void update_animation_state(int64_t *animation_object)

{
  ushort frame_index;
  int64_t *animation_controller;
  uint total_frames;
  int frame_lower;
  int frame_upper;
  int current_frame;
  int64_t keyframe_data;
  float current_time;
  float target_time;
  float interpolation_factor;
  int8_t context_138 [8];
  int64_t *frame_data;
  int32_t context_128;
  int64_t *animation_ptr;
  int64_t *blend_data;
  int32_t context_110;
  int64_t context_108;
  uint64_t context_100;
  uint64_t context_f8;
  int8_t context_f0;
  uint64_t context_e8;
  uint64_t context_d8;
  uint64_t context_c8;
  uint64_t context_c0;
  int8_t context_b8;
  uint64_t context_b0;
  uint64_t context_a0;
  uint64_t context_90;
  
  context_90 = 0xfffffffffffffffe;
  
  while( true ) {
    // 检查是否需要更新动画
    if (((int)animation_object[0x41] != 0) &&
       ((current_time = *(float *)(animation_object + 0x5b) - *(float *)((int64_t)animation_object + 0x2dc), 
         current_time <= -0.01 || (0.01 <= current_time)))) {
      
      animation_controller = animation_object;
      
      // 检查动画控制器是否需要特殊处理
      if ((((*(byte *)((int64_t)animation_object + OBJECT_FLAG_OFFSET) & 0x40) == 0) || 
           (animation_object[0x42] == 0)) && (animation_object[0x36] != 0)) {
        animation_controller = (int64_t *)FUN_180085900();
      }
      
      current_frame = 0;
      
      if (animation_controller == animation_object) {
        // 直接处理动画帧
        frame_data = (int64_t *)0x0;
        context_138[0] = 0;
        context_128 = 0;
        frame_data = animation_controller;
        FUN_18007f4c0(context_138);
        
        animation_controller = frame_data + 0x16;
        frame_index = *(ushort *)(frame_data + 0x18);
        current_time = *(float *)(frame_data[0x17] + -4 + (uint64_t)frame_index * 4);
        target_time = *(float *)((int64_t)animation_object + 0x2dc);
        
        // 更新目标时间
        if (current_time < *(float *)((int64_t)animation_object + 0x2dc)) {
          *(float *)((int64_t)animation_object + 0x2dc) = current_time;
          frame_index = *(ushort *)(frame_data + 0x18);
          target_time = current_time;
        }
        
        total_frames = (uint)frame_index;
        if (frame_index < 2) {
          current_frame = total_frames - 1;
          current_time = 0.0;
          frame_upper = current_frame;
        }
        else {
          frame_upper = total_frames - 1;
          if (0 < (int)(total_frames - 2)) {
            // 二分查找关键帧
            do {
              current_frame = frame_upper + current_frame >> 1;
              if (*(float *)(frame_data[0x17] + (int64_t)current_frame * 4) <= target_time) {
                current_frame = current_frame;
                current_frame = frame_upper;
              }
              frame_upper = current_frame;
            } while (current_frame < frame_upper + -1);
          }
          current_time = *(float *)(frame_data[0x17] + (int64_t)current_frame * 4);
          current_time = (target_time - current_time) / 
                  (*(float *)(frame_data[0x17] + (int64_t)frame_upper * 4) - current_time);
          
          // 限制插值因子在[0,1]范围内
          if (0.0 <= current_time) {
            if (1.0 <= current_time) {
              current_time = 1.0;
            }
          }
          else {
            current_time = 0.0;
          }
        }
        
        // 应用动画插值
        if (-1 < current_frame) {
          (**(code **)(*animation_object + INITIALIZER_OFFSET))(animation_object);
          
          context_100 = 0;
          context_f8 = 0;
          context_d8 = 0;
          context_e8 = 0;
          context_f0 = 0;
          
          FUN_18022f2e0(&context_100, animation_object, 0);
          (**(code **)(*animation_object + DESTRUCTOR_OFFSET))(animation_object);
          FUN_18022f9b0(&context_100, animation_controller, frame_upper, current_frame, current_time);
          FUN_18022f410(&context_100);
        }
        
        FUN_18007f6a0(context_138);
        if (frame_data != (int64_t *)0x0) {
          (**(code **)(*frame_data + DESTRUCTOR_OFFSET))();
        }
      }
      else {
        // 使用动画控制器处理
        context_110 = 0;
        blend_data = animation_controller;
        FUN_18007f770(&blend_data);
        
        keyframe_data = context_108 + 0xb0;
        frame_index = *(ushort *)(context_108 + 0xc0);
        current_time = *(float *)(*(int64_t *)(context_108 + 0xb8) + -4 + (uint64_t)frame_index * 4);
        target_time = *(float *)((int64_t)animation_object + 0x2dc);
        
        // 更新目标时间
        if (current_time < *(float *)((int64_t)animation_object + 0x2dc)) {
          *(float *)((int64_t)animation_object + 0x2dc) = current_time;
          frame_index = *(ushort *)(context_108 + 0xc0);
          target_time = current_time;
        }
        
        total_frames = (uint)frame_index;
        if (frame_index < 2) {
          current_frame = total_frames - 1;
          current_time = 0.0;
          frame_upper = current_frame;
        }
        else {
          frame_upper = total_frames - 1;
          if (0 < (int)(total_frames - 2)) {
            // 二分查找关键帧
            do {
              current_frame = frame_upper + current_frame >> 1;
              if (*(float *)(*(int64_t *)(context_108 + 0xb8) + (int64_t)current_frame * 4) <= target_time) {
                current_frame = current_frame;
                current_frame = frame_upper;
              }
              frame_upper = current_frame;
            } while (current_frame < frame_upper + -1);
          }
          current_time = *(float *)(*(int64_t *)(context_108 + 0xb8) + (int64_t)current_frame * 4);
          current_time = (target_time - current_time) /
                  (*(float *)(*(int64_t *)(context_108 + 0xb8) + (int64_t)frame_upper * 4) - current_time);
          
          // 限制插值因子在[0,1]范围内
          if (0.0 <= current_time) {
            if (1.0 <= current_time) {
              current_time = 1.0;
            }
          }
          else {
            current_time = 0.0;
          }
        }
        
        // 应用动画插值
        if (-1 < current_frame) {
          (**(code **)(*animation_object + INITIALIZER_OFFSET))(animation_object);
          
          context_c8 = 0;
          context_c0 = 0;
          context_a0 = 0;
          context_b0 = 0;
          context_b8 = 0;
          
          FUN_18022f2e0(&context_c8, animation_object, 0);
          (**(code **)(*animation_object + DESTRUCTOR_OFFSET))(animation_object);
          FUN_18022f9b0(&context_c8, keyframe_data, frame_upper, current_frame, current_time);
          FUN_18022f410(&context_c8);
        }
        
        FUN_18007f840(&blend_data);
      }
      
      // 更新动画时间
      *(int32_t *)(animation_object + 0x5b) = *(int32_t *)((int64_t)animation_object + 0x2dc);
    }
    
    // 检查是否完成动画处理
    if ((*(byte *)((int64_t)animation_object + OBJECT_FLAG_OFFSET) & ANIMATION_FLAG_MASK) != 0) break;
    animation_object = (int64_t *)animation_object[0x36];
  }
  return;
}

// 函数: int64_t * clone_object(int64_t *source_object, int64_t *target_object)
// 功能: 克隆对象，深度复制所有属性和引用关系
// 
// 原始实现：FUN_1800763c0
// 简化实现：对象克隆函数（完整版）
int64_t * clone_object(int64_t *source_object, int64_t *target_object)

{
  byte *property_flags;
  int32_t property_1;
  int64_t offset_1;
  int32_t property_2;
  int32_t property_3;
  int32_t property_4;
  uint64_t property_5;
  uint64_t property_6;
  uint64_t property_7;
  uint64_t property_8;
  uint64_t property_9;
  uint64_t property_10;
  int64_t field_1;
  int64_t field_2;
  int64_t field_3;
  int64_t field_4;
  int64_t field_5;
  int64_t field_6;
  int64_t field_7;
  uint64_t memory_block;
  int64_t *cloned_object;
  void *resource_ptr;
  int64_t *temp_ptr_1;
  int64_t *temp_ptr_2;
  int32_t clone_flag;
  
  temp_ptr_2 = target_object;
  
  // 分配内存用于克隆对象
  memory_block = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr, 0x300, 0x10, 9, 0, 0xfffffffffffffffe);
  cloned_object = (int64_t *)FUN_180075030(memory_block, 0, 0);
  *target_object = (int64_t)cloned_object;
  
  // 初始化克隆对象
  if (cloned_object != (int64_t *)0x0) {
    (**(code **)(*cloned_object + INITIALIZER_OFFSET))(cloned_object);
  }
  
  clone_flag = 1;
  
  // 复制基本属性和标志
  *(byte *)(*target_object + OBJECT_FLAG_OFFSET) = 
    *(byte *)(*target_object + OBJECT_FLAG_OFFSET) & 0xdf;
  
  // 复制对象引用相关属性
  field_1 = source_object[0x18];
  offset_1 = *target_object;
  *(int64_t *)(offset_1 + 0xb8) = source_object[0x17];
  *(int64_t *)(offset_1 + 0xc0) = field_1;
  *(byte *)(*target_object + OBJECT_FLAG_OFFSET) = 
    *(byte *)(*target_object + OBJECT_FLAG_OFFSET) & 0xbf;
  
  // 复制尺寸和位置属性
  property_1 = *(int32_t *)((int64_t)source_object + 0xcc);
  field_1 = source_object[0x1a];
  property_2 = *(int32_t *)((int64_t)source_object + 0xd4);
  field_2 = source_object[0x1b];
  property_3 = *(int32_t *)((int64_t)source_object + 0xdc);
  field_3 = source_object[0x1c];
  property_4 = *(int32_t *)((int64_t)source_object + 0xe4);
  offset_1 = *target_object;
  
  *(int *)(offset_1 + 200) = (int)source_object[0x19];
  *(int32_t *)(offset_1 + 0xcc) = property_1;
  *(int *)(offset_1 + 0xd0) = (int)field_1;
  *(int32_t *)(offset_1 + 0xd4) = property_2;
  *(int *)(offset_1 + 0xd8) = (int)field_2;
  *(int32_t *)(offset_1 + 0xdc) = property_3;
  *(int *)(offset_1 + 0xe0) = (int)field_3;
  *(int32_t *)(offset_1 + 0xe4) = property_4;
  
  // 复制对象引用关系
  if ((*(byte *)((int64_t)source_object + OBJECT_FLAG_OFFSET) & ANIMATION_FLAG_MASK) == 0) {
    update_object_reference(*target_object, source_object + 0x36);
  }
  else {
    offset_1 = *target_object;
    temp_ptr_1 = source_object;
    (**(code **)(*source_object + INITIALIZER_OFFSET))(source_object);
    update_object_reference(offset_1, &temp_ptr_1);
    (**(code **)(*source_object + DESTRUCTOR_OFFSET))(source_object);
  }
  
  // 复制变换矩阵属性
  *(int64_t *)(*target_object + 0xa8) = source_object[0x15];
  property_flags = (byte *)(*target_object + OBJECT_FLAG_OFFSET);
  *property_flags = *property_flags ^ 
    (*(byte *)(*target_object + OBJECT_FLAG_OFFSET) ^ *(byte *)((int64_t)source_object + OBJECT_FLAG_OFFSET)) & 2;
  
  // 复制渲染相关属性
  *(int *)(*target_object + 0x100) = (int)source_object[0x20];
  field_1 = source_object[0x48];
  offset_1 = *target_object;
  *(int64_t *)(offset_1 + 0x238) = source_object[0x47];
  *(int64_t *)(offset_1 + 0x240) = field_1;
  
  field_1 = source_object[0x4a];
  offset_1 = *target_object;
  *(int64_t *)(offset_1 + 0x248) = source_object[0x49];
  *(int64_t *)(offset_1 + 0x250) = field_1;
  
  // 复制纹理和材质属性
  property_1 = *(int32_t *)((int64_t)source_object + 0x2ac);
  field_1 = source_object[0x56];
  property_2 = *(int32_t *)((int64_t)source_object + 0x2b4);
  offset_1 = *target_object;
  *(int *)(offset_1 + 0x2a8) = (int)source_object[0x55];
  *(int32_t *)(offset_1 + 0x2ac) = property_1;
  *(int *)(offset_1 + 0x2b0) = (int)field_1;
  *(int32_t *)(offset_1 + 0x2b4) = property_2;
  
  property_1 = *(int32_t *)((int64_t)source_object + 700);
  field_1 = source_object[0x58];
  property_2 = *(int32_t *)((int64_t)source_object + 0x2c4);
  offset_1 = *target_object;
  *(int *)(offset_1 + 0x2b8) = (int)source_object[0x57];
  *(int32_t *)(offset_1 + 700) = property_1;
  *(int *)(offset_1 + 0x2c0) = (int)field_1;
  *(int32_t *)(offset_1 + 0x2c4) = property_2;
  
  // 复制状态属性
  *(int *)(*target_object + 0x108) = (int)source_object[0x21];
  
  // 复制事件处理器
  if ((int64_t *)(*target_object + 0x218) != source_object + 0x43) {
    FUN_1800588c0((int64_t *)(*target_object + 0x218), source_object[0x43], source_object[0x44]);
  }
  
  // 复制资源引用
  resource_ptr = &system_buffer_ptr;
  if ((void *)source_object[3] != (void *)0x0) {
    resource_ptr = (void *)source_object[3];
  }
  (**(code **)(*(int64_t *)(*target_object + 0x10) + 0x10))
    ((int64_t *)(*target_object + 0x10), resource_ptr);
  
  // 复制可见性标志
  *(int8_t *)(*target_object + 0xf6) = *(int8_t *)((int64_t)source_object + 0xf6);
  
  // 复制变换矩阵数据
  property_5 = *(uint64_t *)((int64_t)source_object + 0x27c);
  property_6 = *(uint64_t *)((int64_t)source_object + 0x284);
  property_7 = *(uint64_t *)((int64_t)source_object + 0x28c);
  property_8 = *(uint64_t *)((int64_t)source_object + 0x294);
  property_9 = *(uint64_t *)((int64_t)source_object + 0x29c);
  property_10 = *(uint64_t *)((int64_t)source_object + 0x2a4);
  offset_1 = *target_object;
  
  *(uint64_t *)(offset_1 + 0x274) = *(uint64_t *)((int64_t)source_object + 0x274);
  *(uint64_t *)(offset_1 + 0x27c) = property_5;
  *(uint64_t *)(offset_1 + 0x284) = property_6;
  *(uint64_t *)(offset_1 + 0x28c) = property_7;
  *(uint64_t *)(offset_1 + 0x294) = property_8;
  *(uint64_t *)(offset_1 + 0x29c) = property_9;
  *(int32_t *)(offset_1 + 0x2a4) = property_10;
  
  // 复制更多标志位
  *(int8_t *)(*target_object + 0xff) = *(int8_t *)((int64_t)source_object + 0xff);
  *(int *)(*target_object + 0x270) = (int)source_object[0x4e];
  
  // 复制动画相关属性
  field_1 = source_object[0x25];
  field_2 = source_object[0x26];
  field_3 = source_object[0x27];
  field_4 = source_object[0x28];
  field_5 = source_object[0x29];
  field_6 = source_object[0x2a];
  field_7 = source_object[0x2b];
  offset_1 = *target_object;
  
  *(int64_t *)(offset_1 + 0x120) = source_object[0x24];
  *(int64_t *)(offset_1 + 0x128) = field_1;
  *(int64_t *)(offset_1 + 0x130) = field_2;
  *(int64_t *)(offset_1 + 0x138) = field_3;
  *(int64_t *)(offset_1 + 0x140) = field_4;
  *(int64_t *)(offset_1 + 0x148) = field_5;
  *(int64_t *)(offset_1 + 0x150) = field_6;
  *(int64_t *)(offset_1 + 0x158) = field_7;
  
  // 复制附加属性
  field_1 = source_object[0x2d];
  field_2 = source_object[0x2e];
  field_3 = source_object[0x2f];
  field_4 = source_object[0x30];
  property_1 = *(int32_t *)((int64_t)source_object + 0x184);
  field_5 = source_object[0x31];
  property_2 = *(int32_t *)((int64_t)source_object + 0x18c);
  field_6 = source_object[0x32];
  property_3 = *(int32_t *)((int64_t)source_object + 0x194);
  field_7 = source_object[0x33];
  property_4 = *(int32_t *)((int64_t)source_object + 0x19c);
  offset_1 = *target_object;
  
  *(int64_t *)(offset_1 + 0x160) = source_object[0x2c];
  *(int64_t *)(offset_1 + 0x168) = field_1;
  *(int64_t *)(offset_1 + 0x170) = field_2;
  *(int64_t *)(offset_1 + 0x178) = field_3;
  *(int *)(offset_1 + 0x180) = (int)field_4;
  *(int32_t *)(offset_1 + 0x184) = property_1;
  *(int *)(offset_1 + 0x188) = (int)field_5;
  *(int32_t *)(offset_1 + 0x18c) = property_2;
  *(int *)(offset_1 + 400) = (int)field_6;
  *(int32_t *)(offset_1 + 0x194) = property_3;
  *(int *)(offset_1 + 0x198) = (int)field_7;
  *(int32_t *)(offset_1 + 0x19c) = property_4;
  
  // 更新标志位
  property_flags = (byte *)(*target_object + OBJECT_FLAG_OFFSET);
  *property_flags = *property_flags ^ 
    (*(byte *)(*target_object + OBJECT_FLAG_OFFSET) ^ *(byte *)((int64_t)source_object + OBJECT_FLAG_OFFSET)) & 1;
  
  // 复制其他属性
  *(int8_t *)(*target_object + 0xf7) = *(int8_t *)((int64_t)source_object + 0xf7);
  *(int *)(*target_object + 0x208) = (int)source_object[0x41];
  *(int *)(*target_object + 0x1f8) = (int)source_object[0x3f];
  *(int32_t *)(*target_object + 0x1fc) = *(int32_t *)((int64_t)source_object + 0x1fc);
  *(int *)(*target_object + 0x200) = (int)source_object[0x40];
  *(int32_t *)(*target_object + 0x204) = *(int32_t *)((int64_t)source_object + 0x204);
  *(int *)(*target_object + 0x2d8) = (int)source_object[0x5b];
  property_1 = *(int32_t *)((int64_t)source_object + 0x2dc);
  *(int32_t *)(*target_object + 0x2dc) = property_1;
  
  offset_1 = *target_object;
  cloned_object = (int64_t *)source_object[0x4d];
  
  // 复制事件处理器
  if (cloned_object != (int64_t *)0x0) {
    temp_ptr_1 = cloned_object;
    (**(code **)(*cloned_object + INITIALIZER_OFFSET))
      (cloned_object, property_1, (int)field_4, (int)field_6, clone_flag);
  }
  
  temp_ptr_1 = *(int64_t **)(offset_1 + 0x268);
  *(int64_t **)(offset_1 + 0x268) = cloned_object;
  
  if (temp_ptr_1 != (int64_t *)0x0) {
    (**(code **)(*temp_ptr_1 + DESTRUCTOR_OFFSET))();
  }
  
  // 更新依赖关系
  update_object_dependencies(*target_object, source_object + 0x37);
  return target_object;
}

// 函数: void cleanup_object_resources(int64_t *object_ptr, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 功能: 清理对象资源，释放内存和解除引用关系
// 
// 原始实现：FUN_180076760
// 简化实现：资源清理函数（完整版）
void cleanup_object_resources(int64_t *object_ptr, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  int64_t *resource_manager;
  uint64_t cleanup_context;
  int64_t *temp_ptr_1;
  int64_t *temp_ptr_2;
  int8_t cleanup_buffer_1 [8];
  uint64_t cleanup_buffer_2;
  int64_t *cleanup_manager;
  int16_t cleanup_flag;
  char cleanup_status;
  
  cleanup_context = 0xfffffffffffffffe;
  
  if (object_ptr[0x42] == 0) {
    // 重置对象状态
    object_ptr[0x3f] = 0;
    object_ptr[0x40] = 0;
    *(int32_t *)(object_ptr + 0x41) = 0;
    FUN_180079520();
  }
  else {
    // 执行资源清理流程
    (**(code **)(*object_ptr + INITIALIZER_OFFSET))();
    
    temp_ptr_1 = (int64_t *)0x0;
    temp_ptr_2 = (int64_t *)0x0;
    cleanup_manager = (int64_t *)0x0;
    cleanup_buffer_2 = 0;
    cleanup_buffer_1[0] = 0;
    
    // 初始化清理上下文
    FUN_18022f2e0(&temp_ptr_1, object_ptr, 0, param_4, cleanup_context);
    (**(code **)(*object_ptr + DESTRUCTOR_OFFSET))(object_ptr);
    
    resource_manager = temp_ptr_2;
    
    // 清理资源管理器状态
    *(int32_t *)(temp_ptr_2 + 2) = 0;
    *(int32_t *)(temp_ptr_2 + 7) = 0;
    *(int32_t *)(temp_ptr_2 + 0x11) = 0;
    *(int32_t *)(temp_ptr_2 + 0xc) = 0;
    *(int16_t *)(temp_ptr_2 + 0x18) = 0;
    
    if (temp_ptr_2[0x17] != 0) {
      // 错误：资源管理器状态异常
      CoreEngineMemoryPoolCleaner();
    }
    
    temp_ptr_2[0x17] = 0;
    FUN_180085530(temp_ptr_2[0x16]);
    resource_manager[0x16] = 0;
    *(int32_t *)(resource_manager + 0x19) = 0;
    
    cleanup_flag = 0x101;
    
    // 执行实际的资源清理
    if ((temp_ptr_1 != (int64_t *)0x0) && (temp_ptr_2 != (int64_t *)0x0)) {
      if (cleanup_status != '\0') {
        calculate_bounding_box();
      }
      FUN_18007f6a0(cleanup_buffer_1);
      
      if ((char)cleanup_flag != '\0') {
        FUN_180079520(temp_ptr_1);
      }
      
      if (cleanup_flag._1_1_ != '\0') {
        FUN_180079520(temp_ptr_1);
      }
      
      resource_manager = temp_ptr_2;
      temp_ptr_2 = (int64_t *)0x0;
      
      if (resource_manager != (int64_t *)0x0) {
        (**(code **)(*resource_manager + DESTRUCTOR_OFFSET))();
      }
    }
    
    FUN_18007f6a0(cleanup_buffer_1);
    
    // 清理临时资源
    if (cleanup_manager != (int64_t *)0x0) {
      (**(code **)(*cleanup_manager + DESTRUCTOR_OFFSET))();
    }
    
    if (temp_ptr_2 != (int64_t *)0x0) {
      (**(code **)(*temp_ptr_2 + DESTRUCTOR_OFFSET))();
    }
    
    if (temp_ptr_1 != (int64_t *)0x0) {
      (**(code **)(*temp_ptr_1 + DESTRUCTOR_OFFSET))();
      return;
    }
  }
  return;
}

// 函数: void update_object_dependencies(int64_t object_ptr, int64_t *dependency_ptr)
// 功能: 更新对象的依赖关系，处理链式引用和循环依赖
// 
// 原始实现：FUN_180076910
// 简化实现：依赖关系更新函数（完整版）
void update_object_dependencies(int64_t object_ptr, int64_t *dependency_ptr)

{
  byte dependency_flag;
  int64_t resource_handle;
  int8_t resource_type;
  byte dependency_state;
  uint dependency_flags;
  int64_t resource_data;
  int64_t *resource_manager;
  
  // 检查是否需要更新依赖关系
  if (*dependency_ptr != *(int64_t *)(object_ptr + 0x1b8)) {
    // 检查依赖状态是否有效
    if (*(char *)(object_ptr + 0xb1) != '\0') {
      // 错误：依赖状态异常
      SystemCore_MemoryManager0();
    }
    
    // 释放现有依赖资源
    RenderingSystem_ResourceAllocator(object_ptr + 0x1b8);
    resource_handle = *(int64_t *)(object_ptr + 0x1b8);
    
    if (resource_handle != 0) {
      resource_data = 0;
      dependency_flag = *(byte *)(object_ptr + OBJECT_FLAG_OFFSET);
      
      // 更新依赖状态标志
      dependency_state = (byte)((uint)*(int32_t *)
        (*(int64_t *)(resource_handle + 0x1e0) + 0x1588) >> 0x1b) << 7;
      *(byte *)(object_ptr + OBJECT_FLAG_OFFSET) = dependency_state | dependency_flag & 0x7f;
      
      // 处理依赖类型标志
      dependency_flags = *(uint *)(resource_handle + 0x138) & 0x3000;
      if (dependency_flags == 0x1000) {
        *(int8_t *)(object_ptr + 0xf7) = 1;
      }
      else {
        resource_type = 0;
        if (dependency_flags == 0x2000) {
          resource_type = 2;
        }
        *(int8_t *)(object_ptr + 0xf7) = resource_type;
      }
      
      // 更新依赖状态
      dependency_state = dependency_state | dependency_flag & 0x77;
      *(byte *)(object_ptr + OBJECT_FLAG_OFFSET) = dependency_state;
      
      // 遍历资源管理器
      resource_manager = (int64_t *)(resource_handle + 0xb8);
      do {
        if (0xf < resource_data) break;
        
        // 检查资源是否有效并需要处理
        if ((*resource_manager != 0) && (*(int *)(*resource_manager + 0x36c) != 0)) {
          dependency_state = dependency_state | 8;
          *(byte *)(object_ptr + OBJECT_FLAG_OFFSET) = dependency_state;
        }
        
        resource_data = resource_data + 1;
        resource_manager = resource_manager + 1;
      } while ((dependency_state & 8) == 0);
      
      // 执行依赖更新
      FUN_1800781e0(object_ptr);
    }
  }
  return;
}

// 函数: void increment_reference_count(int64_t object_ptr)
// 功能: 原子操作增加对象引用计数，确保线程安全
void increment_reference_count(int64_t object_ptr)

{
  int lock_result;
  
  // 使用互斥锁确保线程安全
  lock_result = _Mtx_lock(0x180c91910);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  
  // 原子操作增加引用计数
  *(char *)(object_ptr + REFERENCE_COUNT_OFFSET) = 
    *(char *)(object_ptr + REFERENCE_COUNT_OFFSET) + '\x01';
  
  // 释放互斥锁
  lock_result = _Mtx_unlock(0x180c91910);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  
  return;
}