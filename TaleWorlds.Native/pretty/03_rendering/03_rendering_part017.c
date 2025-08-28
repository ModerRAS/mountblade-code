#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part017.c - 渲染系统组件 - 11个函数

// 函数: void FUN_1802776ad(void)
// 渲染对象清理和资源释放
void Cleanup_Render_Objects_And_Resources(void)
{
  int *render_count_ptr;          // 渲染计数器指针
  byte *flag_byte_ptr;            // 标志字节指针
  int64_t render_obj;             // 渲染对象指针
  int64_t slot_data;              // 插槽数据指针
  int64_t global_context;         // 全局上下文
  int64_t slot_offset;            // 插槽偏移量
  int64_t frame_context;          // 帧上下文
  int64_t *obj_array_ptr;         // 对象数组指针
  uint render_flags;               // 渲染标志位
  
  // 遍历渲染对象数组，清理不再使用的对象
  do {
    // 检查渲染标志是否匹配
    if ((*(uint *)(obj_array_ptr + 1) & render_flags) != 0) {
      render_obj = *obj_array_ptr;
      // 检查对象是否有插槽数据
      if (*(int64_t *)(render_obj + 0x1b8) != 0) {
        slot_offset = 0xb8;
        global_context = system_main_module_state;
        // 遍历所有插槽（0xb8 到 0x138，步长 8）
        do {
          slot_data = *(int64_t *)(slot_offset + *(int64_t *)(render_obj + 0x1b8));
          // 检查插槽数据是否有效且需要清理
          if ((((slot_data != 0) && (*(int64_t *)(slot_offset + 0x328 + *(int64_t *)(render_obj + 0x1b8)) == 0))
              && ((*(uint *)(slot_data + 0x328) & 0x20000000) == 0)) &&
             (*(int64_t *)(slot_data + 0x370) == 0)) {
            // 如果插槽没有引用计数，则进行清理
            if (*(int64_t *)(slot_data + 0x1d8) == 0) {
              FUN_18023b050(slot_data,0);  // 清理插槽数据
              global_context = system_main_module_state;
              render_count_ptr = (int *)(*(int64_t *)(slot_offset + *(int64_t *)(render_obj + 0x1b8)) + 0x3a8);
              *render_count_ptr = *render_count_ptr + 1;  // 增加渲染计数
            }
            else if (global_context != 0) {
              // 设置插槽的全局上下文引用
              *(int64_t *)(slot_data + 0x340) = (int64_t)*(int *)(global_context + 0x224);
            }
          }
          slot_offset = slot_offset + 8;
        } while (slot_offset < 0x138);
      }
      // 检查对象是否有活动标志
      if (*(char *)(render_obj + 0xf9) != '\0') {
        if (*(int64_t *)(render_obj + 0x1d8) != 0) {
          // 如果对象仍有引用，这是一个错误情况
          CoreEngine_MemoryPoolManager();
        }
        // 清理对象的引用
        *(uint64_t *)(render_obj + 0x1d8) = 0;
        LOCK();  // 获取线程锁
        *(int8_t *)(render_obj + 0xf9) = 0;  // 清除活动标志
        UNLOCK();  // 释放线程锁
      }
      // 检查对象是否有额外的渲染数据
      if (*(int64_t *)(render_obj + 0x1e8) != 0) {
        FUN_180080060();  // 清理渲染数据
        *(uint64_t *)(render_obj + 0x1e8) = 0;
        // 清理相关标志位
        if (*(int64_t *)(render_obj + 0x1f0) != 0) {
          flag_byte_ptr = (byte *)(*(int64_t *)(render_obj + 0x1f0) + 0xfe);
          *flag_byte_ptr = *flag_byte_ptr & 0xfb;  // 清除第 2 位标志
        }
      }
    }
    obj_array_ptr = obj_array_ptr + 2;
  } while (obj_array_ptr < *(int64_t **)(frame_context + 0x40));
  return;
}



// 函数: void FUN_1802777dd(void)
// 渲染系统空操作函数 - 用于同步或占位
void Render_System_NoOperation(void)
{
  return;
}



// WARNING: Removing unreachable block (ram,0x00018027787a)
// WARNING: Removing unreachable block (ram,0x0001802778b9)



// 函数: void FUN_1802777f0(int64_t param_1)
// 处理渲染对象数组并进行状态管理
void Process_Render_Object_Array_With_State(int64_t render_context)
{
  int64_t *render_obj;             // 渲染对象指针
  int64_t *temp_obj;               // 临时对象指针
  int64_t *obj_iterator;           // 对象迭代器
  int64_t *stack_obj_70;            // 栈对象70（用于状态管理）
  int8_t context_buffer[8];     // 上下文缓冲区
  int64_t *stack_obj_60;            // 栈对象60（用于上下文管理）
  int32_t process_flag;         // 处理标志
  int64_t *stack_obj_50;            // 栈对象50（用于临时存储）
  int16_t status_flag;           // 状态标志
  char cleanup_flag;                 // 清理标志
  
  // 获取渲染对象数组迭代器
  obj_iterator = *(int64_t **)(render_context + 0x38);
  if (obj_iterator < *(int64_t **)(render_context + 0x40)) {
    do {
      render_obj = (int64_t *)*obj_iterator;
      // 检查对象是否处于空闲状态
      if (render_obj[0x42] == 0) {
        // 重置对象状态
        render_obj[0x3f] = 0;
        render_obj[0x40] = 0;
        *(int32_t *)(render_obj + 0x41) = 0;
        FUN_180079520(render_obj);  // 执行对象清理
      }
      else {
        // 处理活动对象
        (**(code **)(*render_obj + 0x28))();  // 调用对象的初始化函数
        stack_obj_50 = (int64_t *)0x0;
        stack_obj_60 = (int64_t *)0x0;
        context_buffer[0] = 0;
        (**(code **)(*render_obj + 0x28))(render_obj);  // 再次调用初始化
        process_flag = 0;
        stack_obj_60 = render_obj;
        FUN_18007f4c0(context_buffer);  // 初始化上下文缓冲区
        temp_obj = stack_obj_50;
        if (stack_obj_50 != (int64_t *)0x0) {
          (**(code **)(*stack_obj_50 + 0x28))(stack_obj_50);  // 处理临时对象
        }
        stack_obj_70 = temp_obj;
        status_flag = 0;
        cleanup_flag = '\0';
        (**(code **)(*render_obj + 0x38))(render_obj);  // 调用对象的处理函数
        // 重置临时对象的状态
        *(int32_t *)(temp_obj + 2) = 0;
        *(int32_t *)(temp_obj + 7) = 0;
        *(int32_t *)(temp_obj + 0x11) = 0;
        *(int32_t *)(temp_obj + 0xc) = 0;
        *(int16_t *)(temp_obj + 0x18) = 0;
        // 检查临时对象是否有错误
        if (temp_obj[0x17] != 0) {
          CoreEngine_MemoryPoolManager();  // 错误处理
        }
        temp_obj[0x17] = 0;
        FUN_180085530(temp_obj[0x16]);  // 清理资源
        temp_obj[0x16] = 0;
        *(int32_t *)(temp_obj + 0x19) = 0;
        status_flag = 0x101;
        // 执行对象的状态更新和清理
        if ((render_obj != (int64_t *)0x0) && (temp_obj != (int64_t *)0x0)) {
          if (cleanup_flag != '\0') {
            FUN_180075b70();  // 执行额外的清理
          }
          FUN_18007f6a0(context_buffer);  // 清理上下文缓冲区
          if ((char)status_flag != '\0') {
            FUN_180079520(render_obj);  // 更新对象状态
          }
          if (status_flag._1_1_ != '\0') {
            FUN_180079520(render_obj);  // 再次更新状态
          }
          stack_obj_70 = (int64_t *)0x0;
          if (temp_obj != (int64_t *)0x0) {
            (**(code **)(*temp_obj + 0x38))();  // 调用临时对象的清理函数
          }
        }
        FUN_18007f6a0(context_buffer);  // 再次清理上下文
        if (stack_obj_50 != (int64_t *)0x0) {
          (**(code **)(*stack_obj_50 + 0x38))();  // 清理栈对象
        }
        if (stack_obj_70 != (int64_t *)0x0) {
          (**(code **)(*stack_obj_70 + 0x38))();  // 清理另一个栈对象
        }
        if (render_obj != (int64_t *)0x0) {
          (**(code **)(*render_obj + 0x38))();  // 最后清理主对象
        }
      }
      obj_iterator = obj_iterator + 2;
    } while (obj_iterator < *(int64_t **)(render_context + 0x40));
  }
  return;
}



// 函数: void FUN_180277a20(int64_t param_1,byte param_2)
// 渲染对象位图处理和清理
void Process_Render_Object_Bitmap(int64_t render_context,byte flag_mask)

{
  uint bitmap_flag;                 // 位图标志
  uint64_t temp_data;            // 临时数据
  int64_t *object_ptr;             // 对象指针
  uint64_t *array_start;         // 数组起始指针
  uint64_t *array_current;       // 数组当前指针
  uint64_t *array_end;           // 数组结束指针
  uint64_t *array_next;          // 数组下一个指针
  int64_t array_size;             // 数组大小
  uint bit_mask;                   // 位掩码
  
  bit_mask = 1 << (flag_mask & 0x1f);  // 计算位掩码
  array_current = *(uint64_t **)(render_context + 0x38);
  array_end = *(uint64_t **)(render_context + 0x40);
  if (array_current != array_end) {
    array_next = array_current + 2;
    do {
      bitmap_flag = *(uint *)(array_current + 1);
      if (bitmap_flag == bit_mask) {
        // 处理完全匹配的位图标志
        if ((array_next < array_end) &&
           (array_size = (int64_t)array_end - (int64_t)array_next >> 4, array_start = array_next, 0 < array_size)) {
          do {
            temp_data = *array_start;
            *array_start = 0;
            object_ptr = (int64_t *)array_start[-2];
            array_start[-2] = temp_data;
            if (object_ptr != (int64_t *)0x0) {
              (**(code **)(*object_ptr + 0x38))();
            }
            *(int32_t *)(array_start + -1) = *(int32_t *)(array_start + 1);
            array_size = array_size + -1;
            array_start = array_start + 2;
          } while (0 < array_size);
          array_end = *(uint64_t **)(render_context + 0x40);
        }
        *(uint64_t **)(render_context + 0x40) = array_end + -2;
        object_ptr = (int64_t *)array_end[-2];
        if (object_ptr != (int64_t *)0x0) {
          (**(code **)(*object_ptr + 0x38))();
        }
      }
      else {
        // 处理部分匹配的位图标志
        if ((bit_mask & bitmap_flag) != 0) {
          *(uint *)(array_current + 1) = ~bit_mask & bitmap_flag;
        }
        array_current = array_current + 2;
        array_next = array_next + 2;
      }
      array_end = *(uint64_t **)(render_context + 0x40);
    } while (array_current != array_end);
  }
  FUN_180278270(render_context);
  array_size = *(int64_t *)(render_context + 0x28);
  if ((array_size != 0) &&
     (*(short *)(array_size + 0x2b0) = *(short *)(array_size + 0x2b0) + 1, *(int64_t *)(array_size + 0x168) != 0))
  {
    func_0x0001802eeba0();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180277b50(int64_t param_1,uint param_2)
// 渲染对象位图处理和内存管理
void Process_Render_Object_Bitmap_Memory(int64_t render_context,uint bit_mask)

{
  int32_t *flag_ptr;            // 标志指针
  int64_t array_offset;           // 数组偏移量
  int64_t *object_ptr;            // 对象指针
  int64_t *new_array_ptr;         // 新数组指针
  uint current_flag;               // 当前标志
  int64_t *src_array_ptr;         // 源数组指针
  int64_t *dest_array_ptr;        // 目标数组指针
  int64_t *temp_array_ptr;        // 临时数组指针
  int64_t *array_ptr1;            // 数组指针1
  int64_t *array_ptr2;            // 数组指针2
  int64_t *array_ptr3;            // 数组指针3
  int64_t *array_ptr4;            // 数组指针4
  uint loop_counter;               // 循环计数器
  int64_t *array_ptr5;            // 数组指针5
  
  array_ptr5 = (int64_t *)0x0;
  current_flag = 0;
  temp_array_ptr = *(int64_t **)(render_context + 0x38);
  dest_array_ptr = (int64_t *)0x0;
  object_ptr = (int64_t *)0x0;
  new_array_ptr = object_ptr;
  array_ptr2 = dest_array_ptr;
  array_ptr3 = array_ptr5;
  new_array_ptr = array_ptr5;
  if (*(int64_t *)(render_context + 0x40) - (int64_t)temp_array_ptr >> 4 != 0) {
    do {
      object_ptr = new_array_ptr;
      dest_array_ptr = array_ptr2;
      current_flag = (uint)array_ptr5;
      if ((*(uint *)((int64_t)(temp_array_ptr + 1) + (int64_t)array_ptr3) >> (bit_mask & 0x1f) & 1) != 0) {
        if (array_ptr2 < new_array_ptr) {
          dest_array_ptr = array_ptr2 + 2;
          new_array_ptr = *(int64_t **)((int64_t)temp_array_ptr + (int64_t)array_ptr3);
          *array_ptr2 = (int64_t)new_array_ptr;
          if (new_array_ptr != (int64_t *)0x0) {
            (**(code **)(*new_array_ptr + 0x28))();
            current_flag = current_flag;
          }
          *(int32_t *)(array_ptr2 + 1) =
               *(int32_t *)((int64_t)(temp_array_ptr + 1) + (int64_t)array_ptr3);
        }
        else {
          array_offset = (int64_t)array_ptr2 - (int64_t)new_array_ptr >> 4;
          if (array_offset == 0) {
            array_offset = 1;
LAB_180277c31:
            object_ptr = (int64_t *)
                     FUN_18062b420(system_memory_pool_ptr,array_offset << 4,
                                   CONCAT71((uint7)(uint3)(bit_mask >> 8),0x16));
          }
          else {
            array_offset = array_offset * 2;
            object_ptr = (int64_t *)0x0;
            if (array_offset != 0) goto LAB_180277c31;
          }
          dest_array_ptr = object_ptr;
          if (new_array_ptr != array_ptr2) {
            new_array_ptr = new_array_ptr;
            do {
              *dest_array_ptr = *new_array_ptr;
              *new_array_ptr = 0;
              flag_ptr = (int32_t *)((int64_t)object_ptr + (8 - (int64_t)new_array_ptr) + (int64_t)new_array_ptr);
              *flag_ptr = *(int32_t *)((int64_t)flag_ptr + ((int64_t)new_array_ptr - (int64_t)object_ptr));
              new_array_ptr = new_array_ptr + 2;
              dest_array_ptr = dest_array_ptr + 2;
            } while (new_array_ptr != array_ptr2);
          }
          new_array_ptr = *(int64_t **)((int64_t)temp_array_ptr + (int64_t)array_ptr3);
          *dest_array_ptr = (int64_t)new_array_ptr;
          if (new_array_ptr != (int64_t *)0x0) {
            (**(code **)(*new_array_ptr + 0x28))();
          }
          *(int32_t *)(dest_array_ptr + 1) = *(int32_t *)((int64_t)(temp_array_ptr + 1) + (int64_t)array_ptr3)
          ;
          dest_array_ptr = dest_array_ptr + 2;
          for (temp_array_ptr = new_array_ptr; temp_array_ptr != array_ptr2; temp_array_ptr = temp_array_ptr + 2) {
            if ((int64_t *)*temp_array_ptr != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)*temp_array_ptr + 0x38))();
            }
          }
          if (new_array_ptr != (int64_t *)0x0) {
            CoreEngine_MemoryPoolManager(new_array_ptr);
          }
          new_array_ptr = object_ptr + array_offset * 2;
          current_flag = current_flag;
        }
      }
      current_flag = current_flag + 1;
      array_ptr5 = (int64_t *)(uint64_t)current_flag;
      temp_array_ptr = *(int64_t **)(render_context + 0x38);
      new_array_ptr = object_ptr;
      array_ptr2 = dest_array_ptr;
      array_ptr3 = array_ptr3 + 2;
    } while ((uint64_t)(int64_t)(int)current_flag <
             (uint64_t)(*(int64_t *)(render_context + 0x40) - (int64_t)temp_array_ptr >> 4));
  }
  *(int64_t **)(render_context + 0x38) = object_ptr;
  object_ptr = *(int64_t **)(render_context + 0x40);
  *(int64_t **)(render_context + 0x40) = dest_array_ptr;
  *(int64_t **)(render_context + 0x48) = new_array_ptr;
  *(int32_t *)(render_context + 0x50) = 0x16;
  FUN_180278270(render_context);
  array_offset = *(int64_t *)(render_context + 0x28);
  dest_array_ptr = temp_array_ptr;
  if ((array_offset != 0) &&
     (*(short *)(array_offset + 0x2b0) = *(short *)(array_offset + 0x2b0) + 1, *(int64_t *)(array_offset + 0x168) != 0))
  {
    func_0x0001802eeba0();
  }
  for (; dest_array_ptr != object_ptr; dest_array_ptr = dest_array_ptr + 2) {
    if ((int64_t *)*dest_array_ptr != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*dest_array_ptr + 0x38))();
    }
  }
  if (temp_array_ptr != (int64_t *)0x0) {
    CoreEngine_MemoryPoolManager(temp_array_ptr);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180277e30(int64_t param_1,uint64_t *param_2,uint param_3)
// 渲染对象数组收集和存储
void Collect_Render_Object_Array(int64_t render_context,uint64_t *result_array,uint render_flag)

{
  uint64_t object_data;           // 对象数据
  int64_t array_size;              // 数组大小
  uint64_t *new_array_ptr;        // 新数组指针
  uint64_t *old_array_ptr;        // 旧数组指针
  uint64_t *temp_array_ptr;       // 临时数组指针
  uint64_t *array_current;        // 数组当前指针
  
  temp_array_ptr = *(uint64_t **)(render_context + 0x38);
  if (temp_array_ptr < *(uint64_t **)(render_context + 0x40)) {
    do {
      if ((*(uint *)(temp_array_ptr + 1) & render_flag) != 0) {
        array_current = (uint64_t *)result_array[1];
        object_data = *temp_array_ptr;
        if (array_current < (uint64_t *)result_array[2]) {
          result_array[1] = (uint64_t)(array_current + 1);
          *array_current = object_data;
        }
        else {
          old_array_ptr = (uint64_t *)*result_array;
          array_size = (int64_t)array_current - (int64_t)old_array_ptr >> 3;
          if (array_size == 0) {
            array_size = 1;
LAB_180277eb2:
            new_array_ptr = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,array_size * 8,(char)result_array[3]);
            old_array_ptr = (uint64_t *)*result_array;
            array_current = (uint64_t *)result_array[1];
          }
          else {
            array_size = array_size * 2;
            if (array_size != 0) goto LAB_180277eb2;
            new_array_ptr = (uint64_t *)0x0;
          }
          if (old_array_ptr != array_current) {
            memmove(new_array_ptr,old_array_ptr,(int64_t)array_current - (int64_t)old_array_ptr);
          }
          *new_array_ptr = object_data;
          if (*result_array != 0) {
            CoreEngine_MemoryPoolManager();
          }
          *result_array = (uint64_t)new_array_ptr;
          result_array[2] = (uint64_t)(new_array_ptr + array_size);
          result_array[1] = (uint64_t)(new_array_ptr + 1);
        }
      }
      temp_array_ptr = temp_array_ptr + 2;
    } while (temp_array_ptr < *(uint64_t **)(render_context + 0x40));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180277e52(void)
// 渲染对象数组收集处理（无参数版本）
void Collect_Render_Object_Array_Empty(void)

{
  uint64_t object_data;           // 对象数据
  int64_t array_size;              // 数组大小
  uint64_t *new_array_ptr;        // 新数组指针
  uint64_t *old_array_ptr;        // 旧数组指针
  uint64_t *temp_array_ptr;       // 临时数组指针
  uint64_t *result_array;          // 结果数组指针
  uint64_t *array_current;        // 数组当前指针
  uint render_flag;                 // 渲染标志
  int64_t render_context;          // 渲染上下文
  
  do {
    if ((*(uint *)(array_current + 1) & render_flag) != 0) {
      temp_array_ptr = (uint64_t *)result_array[1];
      object_data = *array_current;
      if (temp_array_ptr < (uint64_t *)result_array[2]) {
        result_array[1] = (uint64_t)(temp_array_ptr + 1);
        *temp_array_ptr = object_data;
      }
      else {
        old_array_ptr = (uint64_t *)*result_array;
        array_size = (int64_t)temp_array_ptr - (int64_t)old_array_ptr >> 3;
        if (array_size == 0) {
          array_size = 1;
LAB_180277eb2:
          new_array_ptr = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,array_size * 8,(char)result_array[3]);
          old_array_ptr = (uint64_t *)*result_array;
          temp_array_ptr = (uint64_t *)result_array[1];
        }
        else {
          array_size = array_size * 2;
          if (array_size != 0) goto LAB_180277eb2;
          new_array_ptr = (uint64_t *)0x0;
        }
        if (old_array_ptr != temp_array_ptr) {
          memmove(new_array_ptr,old_array_ptr,(int64_t)temp_array_ptr - (int64_t)old_array_ptr);
        }
        *new_array_ptr = object_data;
        if (*result_array != 0) {
          CoreEngine_MemoryPoolManager();
        }
        *result_array = (uint64_t)new_array_ptr;
        result_array[2] = (uint64_t)(new_array_ptr + array_size);
        result_array[1] = (uint64_t)(new_array_ptr + 1);
      }
    }
    array_current = array_current + 2;
    if (*(uint64_t **)(render_context + 0x40) <= array_current) {
      return;
    }
  } while( true );
}



// 函数: void FUN_180277f3a(void)
// 渲染对象收集完成处理
void Complete_Render_Object_Collection(void)

{
  // 此函数为占位符，用于标记渲染对象收集操作的完成
  // 在渲染流水线中作为同步点使用
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180277f50(int64_t param_1,uint64_t *param_2,uint64_t *param_3,float *param_4)
// 渲染对象矩阵变换和浮点计算
void Transform_Render_Object_Matrix(int64_t render_context,uint64_t *result_array,uint64_t *transform_array,float *matrix_data)

{
  float matrix_row1[4];            // 矩阵第1行
  float matrix_row2[4];            // 矩阵第2行
  float matrix_row3[4];            // 矩阵第3行
  float matrix_row4[4];            // 矩阵第4行
  float obj_x, obj_y, obj_z;        // 对象坐标
  float transform_x, transform_y;   // 变换坐标
  int64_t render_obj;              // 渲染对象
  int64_t *array_ptr;              // 数组指针
  float *transform_ptr;             // 变换指针
  int64_t *old_array_ptr;          // 旧数组指针
  float *old_transform_ptr;         // 旧变换指针
  int64_t *new_array_ptr;          // 新数组指针
  float *new_transform_ptr;         // 新变换指针
  int64_t array_size;              // 数组大小
  int64_t *obj_iterator;           // 对象迭代器
  float temp_matrix[16];            // 临时矩阵
  float *matrix_elements;           // 矩阵元素
  
  obj_iterator = *(int64_t **)(render_context + 0x38);
  if (obj_iterator < *(int64_t **)(render_context + 0x40)) {
    do {
      if (((uint)matrix_data[0x10] & *(uint *)(obj_iterator + 1)) != 0) {
        array_ptr = (int64_t *)result_array[1];
        render_obj = *obj_iterator;
        if (array_ptr < (int64_t *)result_array[2]) {
          result_array[1] = (uint64_t)(array_ptr + 1);
          *array_ptr = render_obj;
        }
        else {
          old_array_ptr = (int64_t *)*result_array;
          array_size = (int64_t)array_ptr - (int64_t)old_array_ptr >> 3;
          if (array_size == 0) {
            array_size = 1;
LAB_180277fef:
            new_array_ptr = (int64_t *)FUN_18062b420(system_memory_pool_ptr,array_size * 8,(char)result_array[3]);
            old_array_ptr = (int64_t *)*result_array;
            array_ptr = (int64_t *)result_array[1];
          }
          else {
            array_size = array_size * 2;
            if (array_size != 0) goto LAB_180277fef;
            new_array_ptr = (int64_t *)0x0;
          }
          if (old_array_ptr != array_ptr) {
            memmove(new_array_ptr,old_array_ptr,(int64_t)array_ptr - (int64_t)old_array_ptr);
          }
          *new_array_ptr = render_obj;
          if (*result_array != 0) {
            CoreEngine_MemoryPoolManager();
          }
          result_array[2] = (uint64_t)(new_array_ptr + array_size);
          *result_array = (uint64_t)new_array_ptr;
          result_array[1] = (uint64_t)(new_array_ptr + 1);
        }
        // 读取变换矩阵
        matrix_row1[0] = *matrix_data;
        matrix_row1[1] = matrix_data[1];
        matrix_row1[2] = matrix_data[2];
        matrix_row1[3] = matrix_data[3];
        transform_ptr = (float *)transform_array[1];
        matrix_row2[0] = matrix_data[4];
        matrix_row2[1] = matrix_data[5];
        matrix_row2[2] = matrix_data[6];
        matrix_row2[3] = matrix_data[7];
        matrix_row3[0] = matrix_data[8];
        matrix_row3[1] = matrix_data[9];
        matrix_row3[2] = matrix_data[10];
        matrix_row3[3] = matrix_data[11];
        // 读取对象坐标
        obj_z = *(float *)(render_obj + 0x124);
        obj_x = *(float *)(render_obj + 0x120);
        transform_y = *(float *)(render_obj + 0x128);
        transform_x = *(float *)(render_obj + 0x130);
        obj_y = *(float *)(render_obj + 0x140);
        matrix_row4[0] = *(float *)(render_obj + 0x150);
        matrix_row4[1] = *(float *)(render_obj + 0x134);
        // 计算变换后的坐标（第1行）
        temp_matrix[0] = obj_z * matrix_row2[0] + obj_x * matrix_row1[0] + transform_y * matrix_row3[0];
        temp_matrix[1] = obj_z * matrix_row2[1] + obj_x * matrix_row1[1] + transform_y * matrix_row3[1];
        temp_matrix[2] = obj_z * matrix_row2[2] + obj_x * matrix_row1[2] + transform_y * matrix_row3[2];
        temp_matrix[3] = obj_z * matrix_row2[3] + obj_x * matrix_row1[3] + transform_y * matrix_row3[3];
        obj_z = *(float *)(render_obj + 0x138);
        obj_x = *(float *)(render_obj + 0x144);
        // 计算变换后的坐标（第2行）
        temp_matrix[4] = transform_x * matrix_row1[0] + matrix_row4[1] * matrix_row2[0] + obj_z * matrix_row3[0];
        temp_matrix[5] = transform_x * matrix_row1[1] + matrix_row4[1] * matrix_row2[1] + obj_z * matrix_row3[1];
        temp_matrix[6] = transform_x * matrix_row1[2] + matrix_row4[1] * matrix_row2[2] + obj_z * matrix_row3[2];
        temp_matrix[7] = transform_x * matrix_row1[3] + matrix_row4[1] * matrix_row2[3] + obj_z * matrix_row3[3];
        obj_z = *(float *)(render_obj + 0x148);
        transform_y = *(float *)(render_obj + 0x154);
        // 计算变换后的坐标（第3行）
        temp_matrix[8] = obj_y * matrix_row1[0] + obj_x * matrix_row2[0] + obj_z * matrix_row3[0];
        temp_matrix[9] = obj_y * matrix_row1[1] + obj_x * matrix_row2[1] + obj_z * matrix_row3[1];
        temp_matrix[10] = obj_y * matrix_row1[2] + obj_x * matrix_row2[2] + obj_z * matrix_row3[2];
        temp_matrix[11] = obj_y * matrix_row1[3] + obj_x * matrix_row2[3] + obj_z * matrix_row3[3];
        obj_z = *(float *)(render_obj + 0x158);
        obj_x = matrix_row4[0] * matrix_row1[0] + transform_y * matrix_row2[0] + obj_z * matrix_row3[0] + matrix_data[12];
        obj_y = matrix_row4[0] * matrix_row1[1] + transform_y * matrix_row2[1] + obj_z * matrix_row3[1] + matrix_data[13];
        obj_y = matrix_row4[0] * matrix_row1[2] + transform_y * matrix_row2[2] + obj_z * matrix_row3[2] + matrix_data[14];
        obj_z = matrix_row4[0] * matrix_row1[3] + transform_y * matrix_row2[3] + obj_z * matrix_row3[3] + matrix_data[15];
        if (transform_ptr < (float *)transform_array[2]) {
          transform_array[1] = (uint64_t)(transform_ptr + 0x10);
          *transform_ptr = temp_matrix[0];
          transform_ptr[1] = temp_matrix[1];
          transform_ptr[2] = temp_matrix[2];
          transform_ptr[3] = temp_matrix[3];
          transform_ptr[4] = temp_matrix[4];
          transform_ptr[5] = temp_matrix[5];
          transform_ptr[6] = temp_matrix[6];
          transform_ptr[7] = temp_matrix[7];
          transform_ptr[8] = temp_matrix[8];
          transform_ptr[9] = temp_matrix[9];
          transform_ptr[10] = temp_matrix[10];
          transform_ptr[11] = temp_matrix[11];
          transform_ptr[12] = obj_x;
          transform_ptr[13] = obj_y;
          transform_ptr[14] = obj_y;
          transform_ptr[15] = obj_z;
        }
        else {
          old_transform_ptr = (float *)*transform_array;
          array_size = (int64_t)transform_ptr - (int64_t)old_transform_ptr >> 6;
          if (array_size == 0) {
            array_size = 1;
LAB_1802781a7:
            matrix_elements = (float *)FUN_18062b420(system_memory_pool_ptr,array_size << 6,(char)transform_array[3]);
            old_transform_ptr = (float *)*transform_array;
            transform_ptr = (float *)transform_array[1];
          }
          else {
            array_size = array_size * 2;
            if (array_size != 0) goto LAB_1802781a7;
            matrix_elements = (float *)0x0;
          }
          if (old_transform_ptr != transform_ptr) {
            memmove(matrix_elements,old_transform_ptr,(int64_t)transform_ptr - (int64_t)old_transform_ptr);
          }
          *matrix_elements = temp_matrix[0];
          matrix_elements[1] = temp_matrix[1];
          matrix_elements[2] = temp_matrix[2];
          matrix_elements[3] = temp_matrix[3];
          matrix_elements[4] = temp_matrix[4];
          matrix_elements[5] = temp_matrix[5];
          matrix_elements[6] = temp_matrix[6];
          matrix_elements[7] = temp_matrix[7];
          matrix_elements[8] = temp_matrix[8];
          matrix_elements[9] = temp_matrix[9];
          matrix_elements[10] = temp_matrix[10];
          matrix_elements[11] = temp_matrix[11];
          matrix_elements[12] = obj_x;
          matrix_elements[13] = obj_y;
          matrix_elements[14] = obj_y;
          matrix_elements[15] = obj_z;
          if (*transform_array != 0) {
            CoreEngine_MemoryPoolManager();
          }
          *transform_array = (uint64_t)matrix_elements;
          transform_array[2] = (uint64_t)(matrix_elements + array_size * 0x10);
          transform_array[1] = (uint64_t)(matrix_elements + 0x10);
        }
      }
      obj_iterator = obj_iterator + 2;
    } while (obj_iterator < *(int64_t **)(render_context + 0x40));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180277f79(void)
// 渲染对象矩阵变换处理（无参数版本）
void Transform_Render_Object_Matrix_Empty(void)

{
  float matrix_row1[4];            // 矩阵第1行
  float matrix_row2[4];            // 矩阵第2行
  float matrix_row3[4];            // 矩阵第3行
  float matrix_row4[4];            // 矩阵第4行
  float obj_x, obj_y, obj_z;        // 对象坐标
  float transform_x, transform_y;   // 变换坐标
  int64_t stack_ptr;               // 栈指针
  int64_t array_size;              // 数组大小
  int64_t *array_ptr;              // 数组指针
  float *transform_ptr;             // 变换指针
  int64_t *old_array_ptr;          // 旧数组指针
  float *old_transform_ptr;         // 旧变换指针
  int64_t *new_array_ptr;          // 新数组指针
  float *new_transform_ptr;         // 新变换指针
  int64_t render_obj;              // 渲染对象
  uint64_t *result_array;          // 结果数组
  float *matrix_data;               // 矩阵数据
  uint64_t *transform_array;       // 变换数组
  int64_t *obj_iterator;           // 对象迭代器
  float temp_matrix[16];            // 临时矩阵
  float *matrix_elements;           // 矩阵元素
  float *stack_matrix_ptr;          // 栈矩阵指针
  
  // 保存寄存器状态到栈
  *(uint64_t *)(stack_ptr + 8) = stack_ptr;
  *(uint64_t *)(stack_ptr + 0x10) = stack_ptr;
  *(uint64_t *)(stack_ptr + 0x18) = stack_ptr;
  *(uint64_t *)(stack_ptr + -0x28) = stack_ptr;
  *(int32_t *)(stack_ptr + -0x38) = stack_ptr;
  *(int32_t *)(stack_ptr + -0x34) = stack_ptr;
  *(int32_t *)(stack_ptr + -0x30) = stack_ptr;
  *(int32_t *)(stack_ptr + -0x2c) = stack_ptr;
  *(int32_t *)(stack_ptr + -0x48) = stack_ptr;
  *(int32_t *)(stack_ptr + -0x44) = stack_ptr;
  *(int32_t *)(stack_ptr + -0x40) = stack_ptr;
  *(int32_t *)(stack_ptr + -0x3c) = stack_ptr;
  *(int32_t *)(stack_ptr + -0x58) = stack_ptr;
  *(int32_t *)(stack_ptr + -0x54) = stack_ptr;
  *(int32_t *)(stack_ptr + -0x50) = stack_ptr;
  *(int32_t *)(stack_ptr + -0x4c) = stack_ptr;
  *(int32_t *)(stack_ptr + -0x68) = stack_ptr;
  *(int32_t *)(stack_ptr + -100) = stack_ptr;
  *(int32_t *)(stack_ptr + -0x60) = stack_ptr;
  *(int32_t *)(stack_ptr + -0x5c) = stack_ptr;
  do {
    if (((uint)matrix_data[0x10] & *(uint *)(obj_iterator + 1)) != 0) {
      array_ptr = (int64_t *)result_array[1];
      render_obj = *obj_iterator;
      if (array_ptr < (int64_t *)result_array[2]) {
        result_array[1] = (uint64_t)(array_ptr + 1);
        *array_ptr = render_obj;
      }
      else {
        old_array_ptr = (int64_t *)*result_array;
        array_size = (int64_t)array_ptr - (int64_t)old_array_ptr >> 3;
        if (array_size == 0) {
          array_size = 1;
LAB_180277fef:
          new_array_ptr = (int64_t *)FUN_18062b420(system_memory_pool_ptr,array_size * 8,(char)result_array[3]);
          old_array_ptr = (int64_t *)*result_array;
          array_ptr = (int64_t *)result_array[1];
        }
        else {
          array_size = array_size * 2;
          if (array_size != 0) goto LAB_180277fef;
          new_array_ptr = (int64_t *)0x0;
        }
        if (old_array_ptr != array_ptr) {
          memmove(new_array_ptr,old_array_ptr,(int64_t)array_ptr - (int64_t)old_array_ptr);
        }
        *new_array_ptr = render_obj;
        if (*result_array != 0) {
          CoreEngine_MemoryPoolManager();
        }
        result_array[2] = (uint64_t)(new_array_ptr + array_size);
        *result_array = (uint64_t)new_array_ptr;
        result_array[1] = (uint64_t)(new_array_ptr + 1);
        matrix_data = stack_matrix_ptr;
      }
      // 读取变换矩阵
      matrix_row1[0] = *matrix_data;
      matrix_row1[1] = matrix_data[1];
      matrix_row1[2] = matrix_data[2];
      matrix_row1[3] = matrix_data[3];
      transform_ptr = (float *)transform_array[1];
      matrix_row2[0] = matrix_data[4];
      matrix_row2[1] = matrix_data[5];
      matrix_row2[2] = matrix_data[6];
      matrix_row2[3] = matrix_data[7];
      matrix_row3[0] = matrix_data[8];
      matrix_row3[1] = matrix_data[9];
      matrix_row3[2] = matrix_data[10];
      matrix_row3[3] = matrix_data[11];
      // 读取对象坐标
      obj_z = *(float *)(render_obj + 0x124);
      obj_x = *(float *)(render_obj + 0x120);
      transform_y = *(float *)(render_obj + 0x128);
      transform_x = *(float *)(render_obj + 0x130);
      obj_y = *(float *)(render_obj + 0x140);
      matrix_row4[0] = *(float *)(render_obj + 0x150);
      matrix_row4[1] = *(float *)(render_obj + 0x134);
      // 计算变换后的坐标（第1行）
      temp_matrix[0] = obj_z * matrix_row2[0] + obj_x * matrix_row1[0] + transform_y * matrix_row3[0];
      temp_matrix[1] = obj_z * matrix_row2[1] + obj_x * matrix_row1[1] + transform_y * matrix_row3[1];
      temp_matrix[2] = obj_z * matrix_row2[2] + obj_x * matrix_row1[2] + transform_y * matrix_row3[2];
      temp_matrix[3] = obj_z * matrix_row2[3] + obj_x * matrix_row1[3] + transform_y * matrix_row3[3];
      obj_z = *(float *)(render_obj + 0x138);
      obj_x = *(float *)(render_obj + 0x144);
      // 计算变换后的坐标（第2行）
      temp_matrix[4] = transform_x * matrix_row1[0] + matrix_row4[1] * matrix_row2[0] + obj_z * matrix_row3[0];
      temp_matrix[5] = transform_x * matrix_row1[1] + matrix_row4[1] * matrix_row2[1] + obj_z * matrix_row3[1];
      temp_matrix[6] = transform_x * matrix_row1[2] + matrix_row4[1] * matrix_row2[2] + obj_z * matrix_row3[2];
      temp_matrix[7] = transform_x * matrix_row1[3] + matrix_row4[1] * matrix_row2[3] + obj_z * matrix_row3[3];
      obj_z = *(float *)(render_obj + 0x148);
      transform_y = *(float *)(render_obj + 0x154);
      // 计算变换后的坐标（第3行）
      temp_matrix[8] = obj_y * matrix_row1[0] + obj_x * matrix_row2[0] + obj_z * matrix_row3[0];
      temp_matrix[9] = obj_y * matrix_row1[1] + obj_x * matrix_row2[1] + obj_z * matrix_row3[1];
      temp_matrix[10] = obj_y * matrix_row1[2] + obj_x * matrix_row2[2] + obj_z * matrix_row3[2];
      temp_matrix[11] = obj_y * matrix_row1[3] + obj_x * matrix_row2[3] + obj_z * matrix_row3[3];
      obj_z = *(float *)(render_obj + 0x158);
      obj_x = matrix_row4[0] * matrix_row1[0] + transform_y * matrix_row2[0] + obj_z * matrix_row3[0] + matrix_data[12];
      obj_y = matrix_row4[0] * matrix_row1[1] + transform_y * matrix_row2[1] + obj_z * matrix_row3[1] + matrix_data[13];
      obj_y = matrix_row4[0] * matrix_row1[2] + transform_y * matrix_row2[2] + obj_z * matrix_row3[2] + matrix_data[14];
      obj_z = matrix_row4[0] * matrix_row1[3] + transform_y * matrix_row2[3] + obj_z * matrix_row3[3] + matrix_data[15];
      if (transform_ptr < (float *)transform_array[2]) {
        transform_array[1] = (uint64_t)(transform_ptr + 0x10);
        *transform_ptr = temp_matrix[0];
        transform_ptr[1] = temp_matrix[1];
        transform_ptr[2] = temp_matrix[2];
        transform_ptr[3] = temp_matrix[3];
        transform_ptr[4] = temp_matrix[4];
        transform_ptr[5] = temp_matrix[5];
        transform_ptr[6] = temp_matrix[6];
        transform_ptr[7] = temp_matrix[7];
        transform_ptr[8] = temp_matrix[8];
        transform_ptr[9] = temp_matrix[9];
        transform_ptr[10] = temp_matrix[10];
        transform_ptr[11] = temp_matrix[11];
        transform_ptr[12] = obj_x;
        transform_ptr[13] = obj_y;
        transform_ptr[14] = obj_y;
        transform_ptr[15] = obj_z;
      }
      else {
        old_transform_ptr = (float *)*transform_array;
        array_size = (int64_t)transform_ptr - (int64_t)old_transform_ptr >> 6;
        if (array_size == 0) {
          array_size = 1;
LAB_1802781a7:
          matrix_elements = (float *)FUN_18062b420(system_memory_pool_ptr,array_size << 6,(char)transform_array[3]);
          old_transform_ptr = (float *)*transform_array;
          transform_ptr = (float *)transform_array[1];
        }
        else {
          array_size = array_size * 2;
          if (array_size != 0) goto LAB_1802781a7;
          matrix_elements = (float *)0x0;
        }
        if (old_transform_ptr != transform_ptr) {
          memmove(matrix_elements,old_transform_ptr,(int64_t)transform_ptr - (int64_t)old_transform_ptr);
        }
        *matrix_elements = temp_matrix[0];
        matrix_elements[1] = temp_matrix[1];
        matrix_elements[2] = temp_matrix[2];
        matrix_elements[3] = temp_matrix[3];
        matrix_elements[4] = temp_matrix[4];
        matrix_elements[5] = temp_matrix[5];
        matrix_elements[6] = temp_matrix[6];
        matrix_elements[7] = temp_matrix[7];
        matrix_elements[8] = temp_matrix[8];
        matrix_elements[9] = temp_matrix[9];
        matrix_elements[10] = temp_matrix[10];
        matrix_elements[11] = temp_matrix[11];
        matrix_elements[12] = obj_x;
        matrix_elements[13] = obj_y;
        matrix_elements[14] = obj_y;
        matrix_elements[15] = obj_z;
        if (*transform_array != 0) {
          CoreEngine_MemoryPoolManager();
        }
        *transform_array = (uint64_t)matrix_elements;
        transform_array[2] = (uint64_t)(matrix_elements + array_size * 0x10);
        transform_array[1] = (uint64_t)(matrix_elements + 0x10);
        matrix_data = stack_matrix_ptr;
      }
    }
    obj_iterator = obj_iterator + 2;
    if (*(int64_t **)(render_context + 0x40) <= obj_iterator) {
      return;
    }
  } while( true );
}



// 函数: void FUN_180278261(void)
// 渲染系统占位符函数
void Render_System_Placeholder_End(void)

{
  return;
}


