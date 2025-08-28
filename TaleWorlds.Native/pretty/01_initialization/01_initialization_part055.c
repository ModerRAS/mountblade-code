#include "TaleWorlds.Native.Split.h"

// 01_initialization_part055.c - 初始化模块第55部分
// 包含3个函数：空函数、状态检查函数和边界框计算函数

// 函数：空初始化函数
// 功能：空函数，无实际操作
void initialize_empty(void)

{
  return;
}



// 函数：状态检查函数
// 功能：循环检查特定状态，最多检查16次，返回状态值
int8_t check_system_status(void)

{
  int8_t *status_ptr;
  int8_t status_value;
  longlong index_offset;
  longlong base_ptr;
  int counter;
  longlong array_offset;
  
  do {
    Sleep(0);
    while ((*(char *)(*(longlong *)(base_ptr + 0x1e0) + 0x15 + array_offset) != '\x02' &&
           (*(char *)(*(longlong *)(base_ptr + 0x1e0) + 0x15 + array_offset) != '\x01'))) {
      index_offset = (longlong)counter;
      array_offset = array_offset + 0x18;
      counter = counter + 1;
      LOCK();
      status_ptr = (int8_t *)(*(longlong *)(base_ptr + 0x1e0) + index_offset * 0x18 + 0x15);
      status_value = *status_ptr;
      *status_ptr = 0;
      UNLOCK();
      if (0xf < counter) {
        return status_value;
      }
    }
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x000180079699)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数：边界框计算函数
// 功能：计算并更新3D对象的边界框，包括最小最大坐标和中心点计算
float * calculate_bounding_box(float *object_ptr)

{
  float *min_bounds_ptr;
  byte byte_flag;
  longlong *mesh_ptr;
  float *transform_ptr;
  char lock_status;
  float time_value;
  float *current_vertex;
  uint vertex_count;
  ulonglong remaining_vertices;
  bool bool_flag;
  float max_distance;
  float stack_temp_b8;
  float stack_temp_b4;
  float stack_temp_b0;
  int32_t stack_temp_ac;
  float stack_temp_a8;
  float stack_temp_a4;
  float stack_temp_a0;
  int32_t stack_temp_9c;
  float *mesh_data_ptr;
  int32_t stack_temp_90;
  longlong stack_temp_88;
  uint64_t stack_temp_80;
  uint64_t stack_temp_78;
  uint64_t stack_temp_70;
  uint64_t stack_temp_68;
  uint64_t stack_temp_60;
  void *stack_temp_58;
  float stack_temp_50;
  float stack_temp_4c;
  void *stack_temp_48;
  uint64_t stack_temp_40;
  uint64_t stack_temp_38;
  int8_t stack_temp_30 [8];
  float *vertex_array_ptr;
  int32_t stack_temp_20;
  
  stack_temp_38 = 0xfffffffffffffffe;
  if (((uint)object_ptr[0x40] & 0x10000) == 0) {
    stack_temp_30[0] = 0;
    stack_temp_20 = 0;
    stack_temp_80 = 0x1800795fa;
    vertex_array_ptr = object_ptr;
    FUN_18007f4c0(stack_temp_30);
    stack_temp_80 = 0x180079605;
    time_value = (float)FUN_1802349a0(0);
    if ((10 < (int)time_value) ||
       ((int)(*(int *)(*(longlong *)(object_ptr + 0x84) + 0x88) +
             (*(int *)(*(longlong *)(object_ptr + 0x84) + 0x88) >> 0x1f & 3U)) >> 2 < (int)time_value)) {
      stack_temp_48 = &DAT_18098bc73;
      if (*(void **)(object_ptr + 6) != (void *)0x0) {
        stack_temp_48 = *(void **)(object_ptr + 6);
      }
      stack_temp_40 = CONCAT44(stack_temp_40._4_4_,*(int32_t *)(*(longlong *)(object_ptr + 0x84) + 0x60));
      stack_temp_58 = &UNK_1809ffb30;
      stack_temp_80 = 0x18007967a;
      stack_temp_50 = time_value;
      FUN_1800623b0(DAT_180c86928,0,0x80000000000,3);
    }
    object_ptr[0x40] = (float)((uint)object_ptr[0x40] | 0x10000);
    stack_temp_80 = 0x18007968e;
    FUN_18007f6a0(stack_temp_30);
  }
  stack_temp_38 = 0xfffffffffffffffe;
  transform_ptr = object_ptr;
  if ((*(byte *)((longlong)object_ptr + 0xfd) & 0x20) == 0) {
    transform_ptr = (float *)func_0x000180085de0(*(uint64_t *)(object_ptr + 0x6c));
  }
  if ((*(longlong *)(transform_ptr + 0x84) != 0) && (((uint)object_ptr[0x40] & 0x80) == 0)) {
    min_bounds_ptr = object_ptr + 0x9d;
    min_bounds_ptr[0] = 1e+08;  // 初始化最小X坐标
    min_bounds_ptr[1] = 1e+08;  // 初始化最小Y坐标
    object_ptr[0x9f] = 1e+08;   // 初始化最小Z坐标
    object_ptr[0xa0] = 3.4028235e+38;  // 最大X坐标初始值
    object_ptr[0xa1] = -1e+08;  // 最大Y坐标初始值
    object_ptr[0xa2] = -1e+08;  // 最大Z坐标初始值
    object_ptr[0xa3] = -1e+08;
    object_ptr[0xa4] = 3.4028235e+38;
    vertex_count = 0;
    object_ptr[0xa9] = 0.0;     // 中心点X坐标
    object_ptr[0xa5] = 0.0;     // 中心点Y坐标
    object_ptr[0xa6] = 0.0;     // 中心点Z坐标
    object_ptr[0xa7] = 0.0;
    object_ptr[0xa8] = 3.4028235e+38;
    stack_temp_90 = 0;
    mesh_data_ptr = transform_ptr;
    FUN_18007f770(&mesh_data_ptr);
    if (*(int *)(stack_temp_88 + 0x10) != 0) {
      do {
        current_vertex = (float *)((longlong)(int)vertex_count * 0x10 + *(longlong *)(stack_temp_88 + 0x18));
        stack_temp_a8 = *current_vertex;
        if (*min_bounds_ptr < stack_temp_a8) {
          stack_temp_a8 = *min_bounds_ptr;
        }
        stack_temp_a4 = current_vertex[1];
        if (object_ptr[0x9e] < stack_temp_a4) {
          stack_temp_a4 = object_ptr[0x9e];
        }
        stack_temp_a0 = current_vertex[2];
        if (object_ptr[0x9f] < stack_temp_a0) {
          stack_temp_a0 = object_ptr[0x9f];
        }
        *(ulonglong *)min_bounds_ptr = CONCAT44(stack_temp_a4,stack_temp_a8);
        *(ulonglong *)(object_ptr + 0x9f) = CONCAT44(stack_temp_9c,stack_temp_a0);
        stack_temp_b8 = *current_vertex;
        if (stack_temp_b8 < object_ptr[0xa1]) {
          stack_temp_b8 = object_ptr[0xa1];
        }
        stack_temp_b4 = current_vertex[1];
        if (stack_temp_b4 < object_ptr[0xa2]) {
          stack_temp_b4 = object_ptr[0xa2];
        }
        stack_temp_b0 = current_vertex[2];
        if (stack_temp_b0 < object_ptr[0xa3]) {
          stack_temp_b0 = object_ptr[0xa3];
        }
        *(ulonglong *)(object_ptr + 0xa1) = CONCAT44(stack_temp_b4,stack_temp_b8);
        *(ulonglong *)(object_ptr + 0xa3) = CONCAT44(stack_temp_ac,stack_temp_b0);
        vertex_count = vertex_count + 1;
      } while (vertex_count < *(uint *)(stack_temp_88 + 0x10));
    }
    transform_ptr = *(float **)(object_ptr + 0x6e);
    if ((transform_ptr != (float *)0x0) && (((uint)transform_ptr[0x4e] & 0x3000) != 0)) {
      stack_temp_78 = *(uint64_t *)(object_ptr + 0x48);
      stack_temp_70 = *(uint64_t *)(object_ptr + 0x4a);
      stack_temp_68 = *(uint64_t *)(object_ptr + 0x4c);
      stack_temp_60 = *(uint64_t *)(object_ptr + 0x4e);
      stack_temp_58 = *(void **)(object_ptr + 0x50);
      stack_temp_50 = object_ptr[0x52];
      stack_temp_4c = object_ptr[0x53];
      stack_temp_48 = *(void **)(object_ptr + 0x54);
      stack_temp_40 = *(uint64_t *)(object_ptr + 0x56);
      FUN_180085c10(&stack_temp_78);
      FUN_18063a240(min_bounds_ptr,min_bounds_ptr,&stack_temp_78);
      transform_ptr = *(float **)(object_ptr + 0x6e);
      if (((uint)transform_ptr[0x4e] & 0x3000) == 0x2000) {
        stack_temp_78 = *(uint64_t *)(object_ptr + 0x48);
        stack_temp_70 = *(uint64_t *)(object_ptr + 0x4a);
        stack_temp_68 = *(uint64_t *)(object_ptr + 0x4c);
        stack_temp_60 = *(uint64_t *)(object_ptr + 0x4e);
        stack_temp_58 = *(void **)(object_ptr + 0x50);
        stack_temp_50 = object_ptr[0x52];
        stack_temp_4c = object_ptr[0x53];
        stack_temp_48 = *(void **)(object_ptr + 0x54);
        stack_temp_40 = *(uint64_t *)(object_ptr + 0x56);
        FUN_180085ac0(&stack_temp_78,0x3fc90fdb);
        FUN_18063a240(min_bounds_ptr,min_bounds_ptr,&stack_temp_78);
        stack_temp_78 = *(uint64_t *)(object_ptr + 0x48);
        stack_temp_70 = *(uint64_t *)(object_ptr + 0x4a);
        stack_temp_68 = *(uint64_t *)(object_ptr + 0x4c);
        stack_temp_60 = *(uint64_t *)(object_ptr + 0x4e);
        stack_temp_58 = *(void **)(object_ptr + 0x50);
        stack_temp_50 = object_ptr[0x52];
        stack_temp_4c = object_ptr[0x53];
        stack_temp_48 = *(void **)(object_ptr + 0x54);
        stack_temp_40 = *(uint64_t *)(object_ptr + 0x56);
        FUN_180085970(&stack_temp_78);
        transform_ptr = (float *)FUN_18063a240(min_bounds_ptr,min_bounds_ptr,&stack_temp_78);
      }
    }
    transform_ptr = mesh_data_ptr;
    if (object_ptr[0xa1] < *min_bounds_ptr) {
      object_ptr[0xa9] = 0.0;
      min_bounds_ptr[0] = 0.0;
      min_bounds_ptr[1] = 0.0;
      object_ptr[0x9f] = 0.0;
      object_ptr[0xa0] = 0.0;
      object_ptr[0xa1] = 0.0;
      object_ptr[0xa2] = 0.0;
      object_ptr[0xa3] = 0.0;
      object_ptr[0xa4] = 0.0;
      object_ptr[0xa5] = 0.0;
      object_ptr[0xa6] = 0.0;
      object_ptr[0xa7] = 0.0;
      object_ptr[0xa8] = 0.0;
    }
    else {
      object_ptr[0xa5] = (object_ptr[0xa1] + *min_bounds_ptr) * 0.5;  // 中心点X
      object_ptr[0xa6] = (object_ptr[0xa2] + object_ptr[0x9e]) * 0.5;  // 中心点Y
      object_ptr[0xa7] = (object_ptr[0xa3] + object_ptr[0x9f]) * 0.5;  // 中心点Z
      object_ptr[0xa8] = 3.4028235e+38;
      time_value = 0.0;
      remaining_vertices = (ulonglong)*(uint *)(stack_temp_88 + 0x10);
      if (0 < (int)*(uint *)(stack_temp_88 + 0x10)) {
        current_vertex = *(float **)(stack_temp_88 + 0x18);
        max_distance = time_value;
        do {
          time_value = (*current_vertex - object_ptr[0xa5]) * (*current_vertex - object_ptr[0xa5]) +
                  (current_vertex[1] - object_ptr[0xa6]) * (current_vertex[1] - object_ptr[0xa6]) +
                  (current_vertex[2] - object_ptr[0xa7]) * (current_vertex[2] - object_ptr[0xa7]);
          if (time_value <= max_distance) {
            time_value = max_distance;
          }
          current_vertex = current_vertex + 4;
          remaining_vertices = remaining_vertices - 1;
          max_distance = time_value;
        } while (remaining_vertices != 0);
      }
      object_ptr[0xa9] = SQRT(time_value);  // 计算最大距离
    }
    if (mesh_data_ptr != (float *)0x0) {
      while( true ) {
        LOCK();
        lock_status = *(char *)(transform_ptr + 0x3b);
        bool_flag = lock_status == '\0';
        if (bool_flag) {
          *(char *)(transform_ptr + 0x3b) = '\x01';
          lock_status = '\0';
        }
        UNLOCK();
        if (bool_flag) break;
        time_value = (float)_Thrd_id();
        if ((transform_ptr[0x3c] == time_value) || (transform_ptr[0x3c] != 0.0)) goto LAB_RELEASE_MESH;
        Sleep();
      }
      lock_status = '\0';
LAB_RELEASE_MESH:
      LOCK();
      min_bounds_ptr = transform_ptr + 0x3a;
      time_value = *min_bounds_ptr;
      transform_ptr = (float *)(ulonglong)(uint)time_value;
      *min_bounds_ptr = (float)((int)*min_bounds_ptr + -1);
      UNLOCK();
      if (lock_status == '\0') {
        if ((((time_value == 1.4013e-45) && (*(longlong *)(mesh_data_ptr + 0x84) != 0)) &&
            (transform_ptr = mesh_data_ptr, FUN_1800791a0(mesh_data_ptr), *(char *)(transform_ptr + 0x3f) == '\0')) &&
           ((*(char *)(transform_ptr + 0x3d) == '\0' &&
            (((*(byte *)((longlong)transform_ptr + 0xfd) & 0x20) == 0 ||
             ((*(byte *)((longlong)transform_ptr + 0xfe) & 1) == 0)))))) {
          mesh_ptr = *(longlong **)(transform_ptr + 0x84);
          transform_ptr[0x84] = 0.0;
          transform_ptr[0x85] = 0.0;
          if (mesh_ptr != (longlong *)0x0) {
            (**(code **)(*mesh_ptr + 0x38))();
          }
        }
        LOCK();
        byte_flag = *(byte *)(transform_ptr + 0x3b);
        *(byte *)(transform_ptr + 0x3b) = 0;
        transform_ptr = (float *)(ulonglong)byte_flag;
        UNLOCK();
      }
    }
  }
  return transform_ptr;
}



// WARNING: Removing unreachable block (ram,0x0001800797c0)
// WARNING: Removing unreachable block (ram,0x0001800797c8)
// WARNING: Removing unreachable block (ram,0x0001800797cd)
// WARNING: Removing unreachable block (ram,0x0001800797dd)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



