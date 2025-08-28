#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part017.c - 渲染系统对象管理和矩阵变换
// 本文件包含11个函数，主要用于渲染对象的批量处理、状态管理和变换操作

/**
 * 清理渲染对象状态和资源
 * 遍历渲染对象列表，清理无效对象的状态和资源引用
 */
void cleanup_render_object_states(void)

{
  int *object_count_ptr;
  byte *status_flag_ptr;
  longlong render_obj_ptr;
  longlong resource_ptr;
  longlong transform_ptr;
  longlong context_ptr;
  longlong *object_list_ptr;
  uint visibility_mask;
  
  do {
    // 检查对象是否在可见范围内
    if ((*(uint *)(object_list_ptr + 1) & visibility_mask) != 0) {
      render_obj_ptr = *object_list_ptr;
      if (*(longlong *)(render_obj_ptr + 0x1b8) != 0) {
        // 遍历对象的变换矩阵
        transform_ptr = 0xb8;
        resource_ptr = _DAT_180c86870;
        do {
          resource_ptr = *(longlong *)(transform_ptr + *(longlong *)(render_obj_ptr + 0x1b8));
          if ((((resource_ptr != 0) && (*(longlong *)(transform_ptr + 0x328 + *(longlong *)(render_obj_ptr + 0x1b8)) == 0))
              && ((*(uint *)(resource_ptr + 0x328) & 0x20000000) == 0)) &&
             (*(longlong *)(resource_ptr + 0x370) == 0)) {
            // 处理对象的渲染资源
            if (*(longlong *)(resource_ptr + 0x1d8) == 0) {
              FUN_18023b050(resource_ptr, 0);
              resource_ptr = _DAT_180c86870;
              object_count_ptr = (int *)(*(longlong *)(transform_ptr + *(longlong *)(render_obj_ptr + 0x1b8)) + 0x3a8);
              *object_count_ptr = *object_count_ptr + 1;
            }
            else if (resource_ptr != 0) {
              *(longlong *)(resource_ptr + 0x340) = (longlong)*(int *)(resource_ptr + 0x224);
            }
          }
          transform_ptr = transform_ptr + 8;
        } while (transform_ptr < 0x138);
      }
      
      // 清理对象的状态标志
      if (*(char *)(render_obj_ptr + 0xf9) != '\0') {
        if (*(longlong *)(render_obj_ptr + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)(render_obj_ptr + 0x1d8) = 0;
        LOCK();
        *(int8_t *)(render_obj_ptr + 0xf9) = 0;
        UNLOCK();
      }
      
      // 清理对象的附加资源
      if (*(longlong *)(render_obj_ptr + 0x1e8) != 0) {
        FUN_180080060();
        *(uint64_t *)(render_obj_ptr + 0x1e8) = 0;
        if (*(longlong *)(render_obj_ptr + 0x1f0) != 0) {
          status_flag_ptr = (byte *)(*(longlong *)(render_obj_ptr + 0x1f0) + 0xfe);
          *status_flag_ptr = *status_flag_ptr & 0xfb;
        }
      }
    }
    object_list_ptr = object_list_ptr + 2;
  } while (object_list_ptr < *(longlong **)(context_ptr + 0x40));
  return;
}



/**
 * 空函数 - 可能是占位符或未来扩展
 */
void empty_render_function_1(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00018027787a)
// WARNING: Removing unreachable block (ram,0x0001802778b9)



/**
 * 处理渲染对象的销毁和清理
 * 遍历对象列表，安全地销毁和清理渲染对象
 */
void process_render_object_destruction(longlong render_context_ptr)

{
  longlong *object_ptr;
  longlong *destructor_ptr;
  longlong *cleanup_ptr;
  longlong *temp_stack_ptr;
  int8_t temp_buffer[8];
  longlong *resource_ptr;
  int32_t cleanup_flag;
  longlong *object_data_ptr;
  int16_t status_word;
  char cleanup_status;
  
  object_data_ptr = *(longlong **)(render_context_ptr + 0x38);
  if (object_data_ptr < *(longlong **)(render_context_ptr + 0x40)) {
    do {
      object_ptr = (longlong *)*object_data_ptr;
      if (object_ptr[0x42] == 0) {
        // 重置对象状态
        object_ptr[0x3f] = 0;
        object_ptr[0x40] = 0;
        *(int32_t *)(object_ptr + 0x41) = 0;
        FUN_180079520(object_ptr);
      }
      else {
        // 调用对象的析构函数
        (**(code **)(*object_ptr + 0x28))();
        resource_ptr = (longlong *)0x0;
        temp_stack_ptr = (longlong *)0x0;
        temp_buffer[0] = 0;
        (**(code **)(*object_ptr + 0x28))(object_ptr);
        cleanup_flag = 0;
        temp_stack_ptr = object_ptr;
        FUN_18007f4c0(temp_buffer);
        destructor_ptr = resource_ptr;
        if (resource_ptr != (longlong *)0x0) {
          (**(code **)(*resource_ptr + 0x28))(resource_ptr);
        }
        temp_stack_ptr = destructor_ptr;
        status_word = 0;
        cleanup_status = '\0';
        (**(code **)(*object_ptr + 0x38))(object_ptr);
        *(int32_t *)(destructor_ptr + 2) = 0;
        *(int32_t *)(destructor_ptr + 7) = 0;
        *(int32_t *)(destructor_ptr + 0x11) = 0;
        *(int32_t *)(destructor_ptr + 0xc) = 0;
        *(int16_t *)(destructor_ptr + 0x18) = 0;
        if (destructor_ptr[0x17] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        destructor_ptr[0x17] = 0;
        FUN_180085530(destructor_ptr[0x16]);
        destructor_ptr[0x16] = 0;
        *(int32_t *)(destructor_ptr + 0x19) = 0;
        status_word = 0x101;
        if ((object_ptr != (longlong *)0x0) && (destructor_ptr != (longlong *)0x0)) {
          if (cleanup_status != '\0') {
            FUN_180075b70();
          }
          FUN_18007f6a0(temp_buffer);
          if ((char)status_word != '\0') {
            FUN_180079520(object_ptr);
          }
          if (status_word._1_1_ != '\0') {
            FUN_180079520(object_ptr);
          }
          temp_stack_ptr = (longlong *)0x0;
          if (destructor_ptr != (longlong *)0x0) {
            (**(code **)(*destructor_ptr + 0x38))();
          }
        }
        FUN_18007f6a0(temp_buffer);
        if (resource_ptr != (longlong *)0x0) {
          (**(code **)(*resource_ptr + 0x38))();
        }
        if (temp_stack_ptr != (longlong *)0x0) {
          (**(code **)(*temp_stack_ptr + 0x38))();
        }
        if (object_ptr != (longlong *)0x0) {
          (**(code **)(*object_ptr + 0x38))();
        }
      }
      object_data_ptr = object_data_ptr + 2;
    } while (object_data_ptr < *(longlong **)(render_context_ptr + 0x40));
  }
  return;
}



/**
 * 根据位掩码移除渲染对象
 * 根据指定的位掩码条件，从渲染上下文中移除匹配的对象
 */
void remove_render_objects_by_mask(longlong render_context_ptr, byte mask_bit)

{
  uint object_mask;
  uint64_t object_data;
  longlong *object_ptr;
  uint64_t *list_start;
  uint64_t *list_end;
  uint64_t *current_pos;
  uint64_t *next_pos;
  longlong remaining_count;
  uint current_mask;
  
  object_mask = 1 << (mask_bit & 0x1f);
  list_start = *(uint64_t **)(render_context_ptr + 0x38);
  list_end = *(uint64_t **)(render_context_ptr + 0x40);
  if (list_start != list_end) {
    next_pos = list_start + 2;
    do {
      current_mask = *(uint *)(list_start + 1);
      if (current_mask == object_mask) {
        // 找到匹配的对象，进行移除操作
        if ((next_pos < list_end) &&
           (remaining_count = (longlong)list_end - (longlong)next_pos >> 4, current_pos = next_pos, 0 < remaining_count)) {
          do {
            object_data = *current_pos;
            *current_pos = 0;
            object_ptr = (longlong *)current_pos[-2];
            current_pos[-2] = object_data;
            if (object_ptr != (longlong *)0x0) {
              (**(code **)(*object_ptr + 0x38))();
            }
            *(int32_t *)(current_pos + -1) = *(int32_t *)(current_pos + 1);
            remaining_count = remaining_count + -1;
            current_pos = current_pos + 2;
          } while (0 < remaining_count);
          list_end = *(uint64_t **)(render_context_ptr + 0x40);
        }
        *(uint64_t **)(render_context_ptr + 0x40) = list_end + -2;
        object_ptr = (longlong *)list_end[-2];
        if (object_ptr != (longlong *)0x0) {
          (**(code **)(*object_ptr + 0x38))();
        }
      }
      else {
        // 更新对象的掩码
        if ((object_mask & current_mask) != 0) {
          *(uint *)(list_start + 1) = ~object_mask & current_mask;
        }
        list_start = list_start + 2;
        next_pos = next_pos + 2;
      }
      list_end = *(uint64_t **)(render_context_ptr + 0x40);
    } while (list_start != list_end);
  }
  FUN_180278270(render_context_ptr);
  remaining_count = *(longlong *)(render_context_ptr + 0x28);
  if ((remaining_count != 0) &&
     (*(short *)(remaining_count + 0x2b0) = *(short *)(remaining_count + 0x2b0) + 1, *(longlong *)(remaining_count + 0x168) != 0))
  {
    func_0x0001802eeba0();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 根据位掩码筛选和重组渲染对象
 * 根据指定的位掩码条件，重新组织渲染对象的存储结构
 */
void filter_and_reorganize_render_objects(longlong render_context_ptr, uint bit_position)

{
  int32_t *mask_ptr;
  longlong list_size;
  longlong *object_ptr;
  longlong *filtered_ptr;
  uint current_mask;
  longlong *source_start;
  longlong *target_start;
  longlong *source_end;
  longlong *target_end;
  longlong *temp_ptr;
  uint filtered_count;
  longlong *current_ptr;
  
  temp_ptr = (longlong *)0x0;
  current_mask = 0;
  source_start = *(longlong **)(render_context_ptr + 0x38);
  target_start = (longlong *)0x0;
  object_ptr = (longlong *)0x0;
  target_end = object_ptr;
  source_end = target_start;
  target_ptr = temp_ptr;
  filtered_ptr = target_start;
  if (*(longlong *)(render_context_ptr + 0x40) - (longlong)source_start >> 4 != 0) {
    do {
      object_ptr = target_end;
      source_end = source_ptr;
      filtered_count = (uint)temp_ptr;
      if ((*(uint *)((longlong)(source_start + 1) + (longlong)target_ptr) >> (bit_position & 0x1f) & 1) != 0) {
        if (source_end < filtered_ptr) {
          source_end = source_end + 2;
          target_end = *(longlong **)((longlong)source_start + (longlong)target_ptr);
          *source_end = (longlong)target_end;
          if (target_end != (longlong *)0x0) {
            (**(code **)(*target_end + 0x28))();
            filtered_count = current_mask;
          }
          *(int32_t *)(source_end + 1) =
               *(int32_t *)((longlong)(source_start + 1) + (longlong)target_ptr);
        }
        else {
          list_size = (longlong)source_end - (longlong)target_end >> 4;
          if (list_size == 0) {
            list_size = 1;
LAB_180277c31:
            object_ptr = (longlong *)
                     FUN_18062b420(_DAT_180c8ed18, list_size << 4,
                                   CONCAT71((uint7)(uint3)(bit_position >> 8), 0x16));
          }
          else {
            list_size = list_size * 2;
            object_ptr = (longlong *)0x0;
            if (list_size != 0) goto LAB_180277c31;
          }
          source_end = object_ptr;
          if (target_end != source_end) {
            filtered_ptr = target_end;
            do {
              *source_end = *filtered_ptr;
              *filtered_ptr = 0;
              mask_ptr = (int32_t *)((longlong)object_ptr + (8 - (longlong)target_end) + (longlong)filtered_ptr);
              *mask_ptr = *(int32_t *)((longlong)mask_ptr + ((longlong)target_end - (longlong)object_ptr));
              filtered_ptr = filtered_ptr + 2;
              source_end = source_end + 2;
            } while (filtered_ptr != source_end);
          }
          filtered_ptr = *(longlong **)((longlong)source_start + (longlong)target_ptr);
          *source_end = (longlong)filtered_ptr;
          if (filtered_ptr != (longlong *)0x0) {
            (**(code **)(*filtered_ptr + 0x28))();
          }
          *(int32_t *)(source_end + 1) = *(int32_t *)((longlong)(source_start + 1) + (longlong)target_ptr)
          ;
          source_end = source_end + 2;
          for (source_start = target_end; source_start != source_end; source_start = source_start + 2) {
            if ((longlong *)*source_start != (longlong *)0x0) {
              (**(code **)(*(longlong *)*source_start + 0x38))();
            }
          }
          if (target_end != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(target_end);
          }
          filtered_ptr = object_ptr + list_size * 2;
          filtered_count = current_mask;
        }
      }
      current_mask = filtered_count + 1;
      temp_ptr = (longlong *)(ulonglong)current_mask;
      source_start = *(longlong **)(render_context_ptr + 0x38);
      target_end = object_ptr;
      source_end = source_end;
      target_ptr = target_ptr + 2;
    } while ((ulonglong)(longlong)(int)current_mask <
             (ulonglong)(*(longlong *)(render_context_ptr + 0x40) - (longlong)source_start >> 4));
  }
  *(longlong **)(render_context_ptr + 0x38) = object_ptr;
  object_ptr = *(longlong **)(render_context_ptr + 0x40);
  *(longlong **)(render_context_ptr + 0x40) = source_end;
  *(longlong **)(render_context_ptr + 0x48) = filtered_ptr;
  *(int32_t *)(render_context_ptr + 0x50) = 0x16;
  FUN_180278270(render_context_ptr);
  list_size = *(longlong *)(render_context_ptr + 0x28);
  source_end = source_start;
  if ((list_size != 0) &&
     (*(short *)(list_size + 0x2b0) = *(short *)(list_size + 0x2b0) + 1, *(longlong *)(list_size + 0x168) != 0))
  {
    func_0x0001802eeba0();
  }
  for (; source_end != object_ptr; source_end = source_end + 2) {
    if ((longlong *)*source_end != (longlong *)0x0) {
      (**(code **)(*(longlong *)*source_end + 0x38))();
    }
  }
  if (source_start != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(source_start);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 收集匹配指定掩码的渲染对象
 * 遍历渲染对象列表，收集符合指定掩码条件的对象到输出数组
 */
void collect_render_objects_by_mask(longlong render_context_ptr, ulonglong *output_array, uint filter_mask)

{
  uint64_t object_data;
  longlong array_size;
  uint64_t *array_ptr;
  uint64_t *array_end;
  uint64_t *new_array_ptr;
  uint64_t *temp_ptr;
  
  array_end = *(uint64_t **)(render_context_ptr + 0x38);
  if (array_end < *(uint64_t **)(render_context_ptr + 0x40)) {
    do {
      if ((*(uint *)(array_end + 1) & filter_mask) != 0) {
        temp_ptr = (uint64_t *)output_array[1];
        object_data = *array_end;
        if (temp_ptr < (uint64_t *)output_array[2]) {
          output_array[1] = (ulonglong)(temp_ptr + 1);
          *temp_ptr = object_data;
        }
        else {
          array_ptr = (uint64_t *)*output_array;
          array_size = (longlong)temp_ptr - (longlong)array_ptr >> 3;
          if (array_size == 0) {
            array_size = 1;
LAB_180277eb2:
            new_array_ptr = (uint64_t *)FUN_18062b420(_DAT_180c8ed18, array_size * 8, (char)output_array[3]);
            array_ptr = (uint64_t *)*output_array;
            temp_ptr = (uint64_t *)output_array[1];
          }
          else {
            array_size = array_size * 2;
            if (array_size != 0) goto LAB_180277eb2;
            new_array_ptr = (uint64_t *)0x0;
          }
          if (array_ptr != temp_ptr) {
                    // WARNING: Subroutine does not return
            memmove(new_array_ptr, array_ptr, (longlong)temp_ptr - (longlong)array_ptr);
          }
          *new_array_ptr = object_data;
          if (*output_array != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *output_array = (ulonglong)new_array_ptr;
          output_array[2] = (ulonglong)(new_array_ptr + array_size);
          output_array[1] = (ulonglong)(new_array_ptr + 1);
        }
      }
      array_end = array_end + 2;
    } while (array_end < *(uint64_t **)(render_context_ptr + 0x40));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 收集渲染对象到数组（内联版本）
 * 优化版本的收集函数，直接操作寄存器变量
 */
void collect_render_objects_inline(void)

{
  uint64_t object_data;
  longlong array_size;
  uint64_t *array_ptr;
  uint64_t *array_end;
  uint64_t *new_array_ptr;
  ulonglong *output_array;
  uint64_t *current_ptr;
  uint filter_mask;
  longlong context_ptr;
  
  do {
    if ((*(uint *)(current_ptr + 1) & filter_mask) != 0) {
      array_end = (uint64_t *)output_array[1];
      object_data = *current_ptr;
      if (array_end < (uint64_t *)output_array[2]) {
        output_array[1] = (ulonglong)(array_end + 1);
        *array_end = object_data;
      }
      else {
        array_ptr = (uint64_t *)*output_array;
        array_size = (longlong)array_end - (longlong)array_ptr >> 3;
        if (array_size == 0) {
          array_size = 1;
LAB_180277eb2:
          new_array_ptr = (uint64_t *)FUN_18062b420(_DAT_180c8ed18, array_size * 8, (char)output_array[3]);
          array_ptr = (uint64_t *)*output_array;
          array_end = (uint64_t *)output_array[1];
        }
        else {
          array_size = array_size * 2;
          if (array_size != 0) goto LAB_180277eb2;
          new_array_ptr = (uint64_t *)0x0;
        }
        if (array_ptr != array_end) {
                    // WARNING: Subroutine does not return
          memmove(new_array_ptr, array_ptr, (longlong)array_end - (longlong)array_ptr);
        }
        *new_array_ptr = object_data;
        if (*output_array != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *output_array = (ulonglong)new_array_ptr;
        output_array[2] = (ulonglong)(new_array_ptr + array_size);
        output_array[1] = (ulonglong)(new_array_ptr + 1);
      }
    }
    current_ptr = current_ptr + 2;
    if (*(uint64_t **)(context_ptr + 0x40) <= current_ptr) {
      return;
    }
  } while( true );
}



/**
 * 空函数 - 可能是占位符或未来扩展
 */
void empty_render_function_2(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 收集并变换渲染对象矩阵
 * 收集渲染对象并应用矩阵变换，计算变换后的顶点数据
 */
void collect_and_transform_render_matrices(longlong render_context_ptr, ulonglong *object_array, ulonglong *matrix_array, float *transform_params)

{
  float m11, m12, m13, m14;
  float m21, m22, m23, m24;
  float m31, m32, m33, m34;
  float m41, m42, m43, m44;
  longlong object_ptr;
  longlong *array_ptr;
  float *matrix_ptr;
  longlong *temp_ptr;
  float *result_ptr;
  longlong *result_end;
  longlong list_size;
  longlong *obj_list_ptr;
  float x, y, z, w;
  float tx, ty, tz, tw;
  float nx, ny, nz, nw;
  float ux, uy, uz, uw;
  float vx, vy, vz, vw;
  float px, py, pz, pw;
  float rx, ry, rz, rw;
  
  obj_list_ptr = *(longlong **)(render_context_ptr + 0x38);
  if (obj_list_ptr < *(longlong **)(render_context_ptr + 0x40)) {
    do {
      if (((uint)transform_params[0x10] & *(uint *)(obj_list_ptr + 1)) != 0) {
        array_ptr = (longlong *)object_array[1];
        object_ptr = *obj_list_ptr;
        if (array_ptr < (longlong *)object_array[2]) {
          object_array[1] = (ulonglong)(array_ptr + 1);
          *array_ptr = object_ptr;
        }
        else {
          temp_ptr = (longlong *)*object_array;
          list_size = (longlong)array_ptr - (longlong)temp_ptr >> 3;
          if (list_size == 0) {
            list_size = 1;
LAB_180277fef:
            array_ptr = (longlong *)FUN_18062b420(_DAT_180c8ed18, list_size * 8, (char)object_array[3]);
            temp_ptr = (longlong *)*object_array;
            array_ptr = (longlong *)object_array[1];
          }
          else {
            list_size = list_size * 2;
            if (list_size != 0) goto LAB_180277fef;
            array_ptr = (longlong *)0x0;
          }
          if (temp_ptr != array_ptr) {
                    // WARNING: Subroutine does not return
            memmove(array_ptr, temp_ptr, (longlong)array_ptr - (longlong)temp_ptr);
          }
          *array_ptr = object_ptr;
          if (*object_array != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          object_array[2] = (ulonglong)(array_ptr + list_size);
          *object_array = (ulonglong)array_ptr;
          object_array[1] = (ulonglong)(array_ptr + 1);
        }
        
        // 获取变换矩阵参数
        m11 = *transform_params;
        m12 = transform_params[1];
        m13 = transform_params[2];
        m14 = transform_params[3];
        result_ptr = (float *)matrix_array[1];
        m21 = transform_params[4];
        m22 = transform_params[5];
        m23 = transform_params[6];
        m24 = transform_params[7];
        m31 = transform_params[8];
        m32 = transform_params[9];
        m33 = transform_params[10];
        m34 = transform_params[11];
        
        // 获取对象的顶点数据
        nz = *(float *)(object_ptr + 0x124);
        nx = *(float *)(object_ptr + 0x120);
        x = *(float *)(object_ptr + 0x128);
        ny = *(float *)(object_ptr + 0x130);
        nw = *(float *)(object_ptr + 0x140);
        y = *(float *)(object_ptr + 0x150);
        uz = *(float *)(object_ptr + 0x134);
        
        // 计算第一组变换
        rx = nz * m21 + nx * m11 + x * m31;
        ry = nz * m22 + nx * m12 + x * m32;
        rz = nz * m23 + nx * m13 + x * m33;
        rw = nz * m24 + nx * m14 + x * m34;
        
        nz = *(float *)(object_ptr + 0x138);
        nx = *(float *)(object_ptr + 0x144);
        ux = ny * m11 + uz * m21 + nz * m31;
        uy = ny * m12 + uz * m22 + nz * m32;
        uz = ny * m13 + uz * m23 + nz * m33;
        uw = ny * m14 + uz * m24 + nz * m34;
        
        nz = *(float *)(object_ptr + 0x148);
        x = *(float *)(object_ptr + 0x154);
        vx = nw * m11 + nx * m21 + nz * m31;
        vy = nw * m12 + nx * m22 + nz * m32;
        vz = nw * m13 + nx * m23 + nz * m33;
        vw = nw * m14 + nx * m24 + nz * m34;
        
        nz = *(float *)(object_ptr + 0x158);
        nx = y * m11 + x * m21 + nz * m31 + transform_params[12];
        ny = y * m12 + x * m22 + nz * m32 + transform_params[13];
        nw = y * m13 + x * m23 + nz * m33 + transform_params[14];
        nz = y * m14 + x * m24 + nz * m34 + transform_params[15];
        
        if (result_ptr < (float *)matrix_array[2]) {
          matrix_array[1] = (ulonglong)(result_ptr + 0x10);
          *result_ptr = rx;
          result_ptr[1] = ry;
          result_ptr[2] = rz;
          result_ptr[3] = rw;
          result_ptr[4] = ux;
          result_ptr[5] = uy;
          result_ptr[6] = uz;
          result_ptr[7] = uw;
          result_ptr[8] = vx;
          result_ptr[9] = vy;
          result_ptr[10] = vz;
          result_ptr[11] = vw;
          result_ptr[12] = nx;
          result_ptr[13] = ny;
          result_ptr[14] = nw;
          result_ptr[15] = nz;
        }
        else {
          matrix_ptr = (float *)*matrix_array;
          object_ptr = (longlong)result_ptr - (longlong)matrix_ptr >> 6;
          if (object_ptr == 0) {
            object_ptr = 1;
LAB_1802781a7:
            result_ptr = (float *)FUN_18062b420(_DAT_180c8ed18, object_ptr << 6, (char)matrix_array[3]);
            matrix_ptr = (float *)*matrix_array;
            result_ptr = (float *)matrix_array[1];
          }
          else {
            object_ptr = object_ptr * 2;
            if (object_ptr != 0) goto LAB_1802781a7;
            result_ptr = (float *)0x0;
          }
          if (matrix_ptr != result_ptr) {
                    // WARNING: Subroutine does not return
            memmove(result_ptr, matrix_ptr, (longlong)result_ptr - (longlong)matrix_ptr);
          }
          *result_ptr = rx;
          result_ptr[1] = ry;
          result_ptr[2] = rz;
          result_ptr[3] = rw;
          result_ptr[4] = ux;
          result_ptr[5] = uy;
          result_ptr[6] = uz;
          result_ptr[7] = uw;
          result_ptr[8] = vx;
          result_ptr[9] = vy;
          result_ptr[10] = vz;
          result_ptr[11] = vw;
          result_ptr[12] = nx;
          result_ptr[13] = ny;
          result_ptr[14] = nw;
          result_ptr[15] = nz;
          if (*matrix_array != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *matrix_array = (ulonglong)result_ptr;
          matrix_array[2] = (ulonglong)(result_ptr + object_ptr * 0x10);
          matrix_array[1] = (ulonglong)(result_ptr + 0x10);
        }
      }
      obj_list_ptr = obj_list_ptr + 2;
    } while (obj_list_ptr < *(longlong **)(render_context_ptr + 0x40));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 高级矩阵变换处理（寄存器优化版本）
 * 优化版本的矩阵变换函数，使用寄存器变量提高性能
 */
void process_advanced_matrix_transform(void)

{
  float m11, m12, m13, m14;
  float m21, m22, m23, m24;
  float m31, m32, m33, m34;
  float m41, m42, m43, m44;
  longlong context_ptr;
  longlong list_size;
  longlong *array_ptr;
  float *matrix_ptr;
  longlong *temp_ptr;
  float *result_ptr;
  longlong *result_end;
  uint64_t context_data;
  longlong *obj_list_ptr;
  float x, y, z, w;
  float tx, ty, tz, tw;
  float nx, ny, nz, nw;
  float ux, uy, uz, uw;
  float vx, vy, vz, vw;
  float px, py, pz, pw;
  float rx, ry, rz, rw;
  uint64_t param1, param2, param3;
  longlong obj_ptr;
  uint filter_mask;
  longlong render_context;
  ulonglong *object_array;
  ulonglong *matrix_array;
  float *transform_params;
  int32_t xmm6_data[4];
  float xmm6_f[4];
  int32_t xmm7_data[4];
  float xmm7_f[4];
  int32_t xmm8_data[4];
  float xmm8_f[4];
  int32_t xmm9_data[4];
  float xmm9_f[4];
  float *stack_params;
  
  // 保存上下文寄存器
  *(uint64_t *)(context_ptr + 8) = context_data;
  *(uint64_t *)(context_ptr + 0x10) = param1;
  *(uint64_t *)(context_ptr + 0x18) = param2;
  *(uint64_t *)(context_ptr + -0x28) = param3;
  *(int32_t *)(context_ptr + -0x38) = xmm6_data[0];
  *(int32_t *)(context_ptr + -0x34) = xmm6_data[1];
  *(int32_t *)(context_ptr + -0x30) = xmm6_data[2];
  *(int32_t *)(context_ptr + -0x2c) = xmm6_data[3];
  *(int32_t *)(context_ptr + -0x48) = xmm7_data[0];
  *(int32_t *)(context_ptr + -0x44) = xmm7_data[1];
  *(int32_t *)(context_ptr + -0x40) = xmm7_data[2];
  *(int32_t *)(context_ptr + -0x3c) = xmm7_data[3];
  *(int32_t *)(context_ptr + -0x58) = xmm8_data[0];
  *(int32_t *)(context_ptr + -0x54) = xmm8_data[1];
  *(int32_t *)(context_ptr + -0x50) = xmm8_data[2];
  *(int32_t *)(context_ptr + -0x4c) = xmm8_data[3];
  *(int32_t *)(context_ptr + -0x68) = xmm9_data[0];
  *(int32_t *)(context_ptr + -100) = xmm9_data[1];
  *(int32_t *)(context_ptr + -0x60) = xmm9_data[2];
  *(int32_t *)(context_ptr + -0x5c) = xmm9_data[3];
  
  do {
    if (((uint)transform_params[0x10] & *(uint *)(obj_list_ptr + 1)) != 0) {
      array_ptr = (longlong *)object_array[1];
      obj_ptr = *obj_list_ptr;
      if (array_ptr < (longlong *)object_array[2]) {
        object_array[1] = (ulonglong)(array_ptr + 1);
        *array_ptr = obj_ptr;
      }
      else {
        temp_ptr = (longlong *)*object_array;
        list_size = (longlong)array_ptr - (longlong)temp_ptr >> 3;
        if (list_size == 0) {
          list_size = 1;
LAB_180277fef:
          array_ptr = (longlong *)FUN_18062b420(_DAT_180c8ed18, list_size * 8, (char)object_array[3]);
          temp_ptr = (longlong *)*object_array;
          array_ptr = (longlong *)object_array[1];
        }
        else {
          list_size = list_size * 2;
          if (list_size != 0) goto LAB_180277fef;
          array_ptr = (longlong *)0x0;
        }
        if (temp_ptr != array_ptr) {
                    // WARNING: Subroutine does not return
          memmove(array_ptr, temp_ptr, (longlong)array_ptr - (longlong)temp_ptr);
        }
        *array_ptr = obj_ptr;
        if (*object_array != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        object_array[2] = (ulonglong)(array_ptr + list_size);
        *object_array = (ulonglong)array_ptr;
        object_array[1] = (ulonglong)(array_ptr + 1);
        transform_params = stack_params;
      }
      
      // 获取变换矩阵参数
      m11 = *transform_params;
      m12 = transform_params[1];
      m13 = transform_params[2];
      m14 = transform_params[3];
      result_ptr = (float *)matrix_array[1];
      m21 = transform_params[4];
      m22 = transform_params[5];
      m23 = transform_params[6];
      m24 = transform_params[7];
      m31 = transform_params[8];
      m32 = transform_params[9];
      m33 = transform_params[10];
      m34 = transform_params[11];
      
      // 获取对象的顶点数据
      nw = *(float *)(obj_ptr + 0x124);
      nx = *(float *)(obj_ptr + 0x120);
      x = *(float *)(obj_ptr + 0x128);
      ny = *(float *)(obj_ptr + 0x130);
      nz = *(float *)(obj_ptr + 0x140);
      y = *(float *)(obj_ptr + 0x150);
      uw = *(float *)(obj_ptr + 0x134);
      
      // 计算第一组变换
      rx = nw * m21 + nx * m11 + x * m31;
      ry = nw * m22 + nx * m12 + x * m32;
      rz = nw * m23 + nx * m13 + x * m33;
      rw = nw * m24 + nx * m14 + x * m34;
      
      nw = *(float *)(obj_ptr + 0x138);
      nx = *(float *)(obj_ptr + 0x144);
      ux = ny * m11 + uw * m21 + nw * m31;
      uy = ny * m12 + uw * m22 + nw * m32;
      uz = ny * m13 + uw * m23 + nw * m33;
      uw = ny * m14 + uw * m24 + nw * m34;
      
      nw = *(float *)(obj_ptr + 0x148);
      x = *(float *)(obj_ptr + 0x154);
      vx = nz * m11 + nx * m21 + nw * m31;
      vy = nz * m12 + nx * m22 + nw * m32;
      vz = nz * m13 + nx * m23 + nw * m33;
      vw = nz * m14 + nx * m24 + nw * m34;
      
      nw = *(float *)(obj_ptr + 0x158);
      nx = y * m11 + x * m21 + nw * m31 + transform_params[12];
      ny = y * m12 + x * m22 + nw * m32 + transform_params[13];
      nz = y * m13 + x * m23 + nw * m33 + transform_params[14];
      nw = y * m14 + x * m24 + nw * m34 + transform_params[15];
      
      if (result_ptr < (float *)matrix_array[2]) {
        matrix_array[1] = (ulonglong)(result_ptr + 0x10);
        *result_ptr = rx;
        result_ptr[1] = ry;
        result_ptr[2] = rz;
        result_ptr[3] = rw;
        result_ptr[4] = ux;
        result_ptr[5] = uy;
        result_ptr[6] = uz;
        result_ptr[7] = uw;
        result_ptr[8] = vx;
        result_ptr[9] = vy;
        result_ptr[10] = vz;
        result_ptr[11] = vw;
        result_ptr[12] = nx;
        result_ptr[13] = ny;
        result_ptr[14] = nz;
        result_ptr[15] = nw;
      }
      else {
        matrix_ptr = (float *)*matrix_array;
        obj_ptr = (longlong)result_ptr - (longlong)matrix_ptr >> 6;
        if (obj_ptr == 0) {
          obj_ptr = 1;
LAB_1802781a7:
          result_ptr = (float *)FUN_18062b420(_DAT_180c8ed18, obj_ptr << 6, (char)matrix_array[3]);
          matrix_ptr = (float *)*matrix_array;
          result_ptr = (float *)matrix_array[1];
        }
        else {
          obj_ptr = obj_ptr * 2;
          if (obj_ptr != 0) goto LAB_1802781a7;
          result_ptr = (float *)0x0;
        }
        if (matrix_ptr != result_ptr) {
                    // WARNING: Subroutine does not return
          memmove(result_ptr, matrix_ptr, (longlong)result_ptr - (longlong)matrix_ptr);
        }
        *result_ptr = rx;
        result_ptr[1] = ry;
        result_ptr[2] = rz;
        result_ptr[3] = rw;
        result_ptr[4] = ux;
        result_ptr[5] = uy;
        result_ptr[6] = uz;
        result_ptr[7] = uw;
        result_ptr[8] = vx;
        result_ptr[9] = vy;
        result_ptr[10] = vz;
        result_ptr[11] = vw;
        result_ptr[12] = nx;
        result_ptr[13] = ny;
        result_ptr[14] = nz;
        result_ptr[15] = nw;
        if (*matrix_array != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *matrix_array = (ulonglong)result_ptr;
        matrix_array[2] = (ulonglong)(result_ptr + obj_ptr * 0x10);
        matrix_array[1] = (ulonglong)(result_ptr + 0x10);
        transform_params = stack_params;
      }
    }
    obj_list_ptr = obj_list_ptr + 2;
    if (*(longlong **)(render_context + 0x40) <= obj_list_ptr) {
      return;
    }
  } while( true );
}



/**
 * 空函数 - 可能是占位符或未来扩展
 */
void empty_render_function_3(void)

{
  return;
}