#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part039.c - 3个函数

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
  int8_t *status_ptr;      // 状态指针
  int8_t status_value;    // 状态值
  longlong index_offset;      // 索引偏移
  longlong base_ptr;           // 基础指针
  int counter;                 // 计数器
  longlong array_offset;      // 数组偏移
  
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
  float temp_min_x;           // 临时最小X
  float temp_min_y;           // 临时最小Y
  float temp_min_z;           // 临时最小Z
  int32_t temp_padding_1;  // 临时填充1
  float temp_max_x;           // 临时最大X
  float temp_max_y;           // 临时最大Y
  float temp_max_z;           // 临时最大Z
  int32_t temp_padding_2;  // 临时填充2
  float *mesh_data_ptr;
  int32_t temp_flag;       // 临时标志
  longlong vertex_array_info; // 顶点数组信息
  uint64_t stack_temp_80;      // 栈临时变量80
  uint64_t stack_temp_78;      // 栈临时变量78
  uint64_t stack_temp_70;      // 栈临时变量70
  uint64_t stack_temp_68;      // 栈临时变量68
  uint64_t stack_temp_60;      // 栈临时变量60
  uint64_t stack_temp_58;      // 栈临时变量58
  float stack_temp_50;          // 栈临时变量50
  float stack_temp_4c;          // 栈临时变量4c
  uint64_t stack_temp_48;      // 栈临时变量48
  uint64_t stack_temp_40;      // 栈临时变量40
  uint64_t stack_temp_38;      // 栈临时变量38
  int8_t stack_temp_30[8];   // 栈临时变量30数组
  float *vertex_array_ptr;      // 顶点数组指针
  int32_t stack_temp_20;      // 栈临时变量20
  
  stack_temp_38 = 0xfffffffffffffffe;  // 设置栈临时变量
  if (((uint)object_ptr[0x40] & 0x10000) == 0) {
    stack_temp_30[0] = 0;              // 初始化栈临时变量30
    stack_temp_20 = 0;                  // 初始化栈临时变量20
    stack_temp_80 = 0x1800795fa;         // 设置函数地址
    vertex_array_ptr = object_ptr;
    FUN_18007f4c0(stack_temp_30);
    stack_temp_80 = 0x180079605;         // 更新函数地址
    time_value = (float)FUN_1802349a0(0);
    if ((10 < (int)time_value) ||
       ((int)(*(int *)(*(longlong *)(object_ptr + 0x84) + 0x88) +
             (*(int *)(*(longlong *)(object_ptr + 0x84) + 0x88) >> 0x1f & 3U)) >> 2 < (int)time_value)) {
      stack_temp_48 = &system_buffer_ptr;  // 设置数据指针
      if (*(void **)(object_ptr + 6) != (void *)0x0) {
        stack_temp_48 = *(void **)(object_ptr + 6);  // 更新数据指针
      }
      stack_temp_40 = CONCAT44(stack_temp_40._4_4_,*(int32_t *)(*(longlong *)(object_ptr + 0x84) + 0x60));
      stack_temp_58 = &UNK_1809ffb30;  // 设置未知数据指针
      stack_temp_80 = 0x18007967a;     // 设置函数地址
      stack_temp_50 = time_value;      // 保存时间值
      FUN_1800623b0(_DAT_180c86928,0,0x80000000000,3);
    }
    object_ptr[0x40] = (float)((uint)object_ptr[0x40] | 0x10000);
    stack_temp_80 = 0x18007968e;         // 更新函数地址
    FUN_18007f6a0(stack_temp_30);
  }
  stack_temp_38 = 0xfffffffffffffffe;  // 重置栈临时变量
  current_vertex = object_ptr;
  if ((*(byte *)((longlong)object_ptr + 0xfd) & 0x20) == 0) {
    current_vertex = (float *)func_0x000180085de0(*(uint64_t *)(object_ptr + 0x6c));
  }
  if ((*(longlong *)(current_vertex + 0x84) != 0) && (((uint)object_ptr[0x40] & 0x80) == 0)) {
    min_bounds_ptr = object_ptr + 0x9d;
    min_bounds_ptr[0] = 1e+08;
    min_bounds_ptr[1] = 1e+08;
    object_ptr[0x9f] = 1e+08;
    object_ptr[0xa0] = 3.4028235e+38;
    object_ptr[0xa1] = -1e+08;
    object_ptr[0xa2] = -1e+08;
    object_ptr[0xa3] = -1e+08;
    object_ptr[0xa4] = 3.4028235e+38;
    vertex_count = 0;
    object_ptr[0xa9] = 0.0;
    object_ptr[0xa5] = 0.0;
    object_ptr[0xa6] = 0.0;
    object_ptr[0xa7] = 0.0;
    object_ptr[0xa8] = 3.4028235e+38;
    stack_temp_90 = 0;                  // 初始化栈临时变量90
    mesh_data_ptr = current_vertex;
    FUN_18007f770(&mesh_data_ptr);
    if (*(int *)(vertex_array_info + 0x10) != 0) {
      do {
        current_vertex = (float *)((longlong)(int)vertex_count * 0x10 + *(longlong *)(vertex_array_info + 0x18));
        temp_max_x = *current_vertex;
        if (*min_bounds_ptr < temp_max_x) {
          temp_max_x = *min_bounds_ptr;
        }
        temp_max_y = current_vertex[1];
        if (object_ptr[0x9e] < temp_max_y) {
          temp_max_y = object_ptr[0x9e];
        }
        temp_max_z = current_vertex[2];
        if (object_ptr[0x9f] < temp_max_z) {
          temp_max_z = object_ptr[0x9f];
        }
        *(ulonglong *)min_bounds_ptr = CONCAT44(temp_max_y,temp_max_x);
        *(ulonglong *)(object_ptr + 0x9f) = CONCAT44(temp_padding_2,temp_max_z);
        temp_min_x = *current_vertex;
        if (temp_min_x < object_ptr[0xa1]) {
          temp_min_x = object_ptr[0xa1];
        }
        temp_min_y = current_vertex[1];
        if (temp_min_y < object_ptr[0xa2]) {
          temp_min_y = object_ptr[0xa2];
        }
        temp_min_z = current_vertex[2];
        if (temp_min_z < object_ptr[0xa3]) {
          temp_min_z = object_ptr[0xa3];
        }
        *(ulonglong *)(object_ptr + 0xa1) = CONCAT44(temp_min_y,temp_min_x);
        *(ulonglong *)(object_ptr + 0xa3) = CONCAT44(temp_padding_1,temp_min_z);
        vertex_count = vertex_count + 1;
      } while (vertex_count < *(uint *)(vertex_array_info + 0x10));
    }
    transform_ptr = *(float **)(object_ptr + 0x6e);
    if ((transform_ptr != (float *)0x0) && (((uint)transform_ptr[0x4e] & 0x3000) != 0)) {
      stack_temp_78 = *(uint64_t *)(object_ptr + 0x48);  // 保存对象数据
      stack_temp_70 = *(uint64_t *)(object_ptr + 0x4a);  // 保存对象数据
      stack_temp_68 = *(uint64_t *)(object_ptr + 0x4c);  // 保存对象数据
      stack_temp_60 = *(uint64_t *)(object_ptr + 0x4e);  // 保存对象数据
      stack_temp_58 = *(void **)(object_ptr + 0x50);  // 保存对象指针
      stack_temp_50 = object_ptr[0x52];                   // 保存对象数据
      stack_temp_4c = object_ptr[0x53];                   // 保存对象数据
      stack_temp_48 = *(void **)(object_ptr + 0x54);  // 保存对象指针
      stack_temp_40 = *(uint64_t *)(object_ptr + 0x56);  // 保存对象数据
      FUN_180085c10(&stack_temp_78);    // 调用变换函数
      FUN_18063a240(min_bounds_ptr,min_bounds_ptr,&stack_temp_78);  // 应用变换
      transform_ptr = *(float **)(object_ptr + 0x6e);
      if (((uint)transform_ptr[0x4e] & 0x3000) == 0x2000) {
        stack_temp_78 = *(uint64_t *)(object_ptr + 0x48);  // 重新保存对象数据
        stack_temp_70 = *(uint64_t *)(object_ptr + 0x4a);  // 重新保存对象数据
        stack_temp_68 = *(uint64_t *)(object_ptr + 0x4c);  // 重新保存对象数据
        stack_temp_60 = *(uint64_t *)(object_ptr + 0x4e);  // 重新保存对象数据
        stack_temp_58 = *(void **)(object_ptr + 0x50);  // 重新保存对象指针
        stack_temp_50 = object_ptr[0x52];                   // 重新保存对象数据
        stack_temp_4c = object_ptr[0x53];                   // 重新保存对象数据
        stack_temp_48 = *(void **)(object_ptr + 0x54);  // 重新保存对象指针
        stack_temp_40 = *(uint64_t *)(object_ptr + 0x56);  // 重新保存对象数据
        FUN_180085ac0(&stack_temp_78,0x3fc90fdb);  // 调用旋转变换函数
        FUN_18063a240(min_bounds_ptr,min_bounds_ptr,&stack_temp_78);  // 应用旋转变换
        stack_temp_78 = *(uint64_t *)(object_ptr + 0x48);  // 重新保存对象数据
        stack_temp_70 = *(uint64_t *)(object_ptr + 0x4a);  // 重新保存对象数据
        stack_temp_68 = *(uint64_t *)(object_ptr + 0x4c);  // 重新保存对象数据
        stack_temp_60 = *(uint64_t *)(object_ptr + 0x4e);  // 重新保存对象数据
        stack_temp_58 = *(void **)(object_ptr + 0x50);  // 重新保存对象指针
        stack_temp_50 = object_ptr[0x52];                   // 重新保存对象数据
        stack_temp_4c = object_ptr[0x53];                   // 重新保存对象数据
        stack_temp_48 = *(void **)(object_ptr + 0x54);  // 重新保存对象指针
        stack_temp_40 = *(uint64_t *)(object_ptr + 0x56);  // 重新保存对象数据
        FUN_180085970(&stack_temp_78);    // 调用另一个变换函数
        transform_ptr = (float *)FUN_18063a240(min_bounds_ptr,min_bounds_ptr,&stack_temp_78);  // 应用最终变换
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
      object_ptr[0xa5] = (object_ptr[0xa1] + *min_bounds_ptr) * 0.5;
      object_ptr[0xa6] = (object_ptr[0xa2] + object_ptr[0x9e]) * 0.5;
      object_ptr[0xa7] = (object_ptr[0xa3] + object_ptr[0x9f]) * 0.5;
      object_ptr[0xa8] = 3.4028235e+38;
      time_value = 0.0;
      remaining_vertices = (ulonglong)*(uint *)(vertex_array_info + 0x10);
      if (0 < (int)*(uint *)(vertex_array_info + 0x10)) {
        current_vertex = *(float **)(vertex_array_info + 0x18);
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
      object_ptr[0xa9] = SQRT(time_value);
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


