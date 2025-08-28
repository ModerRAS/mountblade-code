#include "TaleWorlds.Native.Split.h"

// 03_rendering_part021.c - 渲染系统材质文件加载处理器
// 本文件包含材质文件解析、加载和处理的复杂函数

/**
 * 材质文件加载和解析处理函数
 * 支持MMD1和MMD2格式的材质文件加载和处理，包括：
 * 1. 解析材质文件路径和文件头
 * 2. 处理MMD格式的材质数据块
 * 3. 加载材质参数和纹理映射
 * 4. 管理材质缓存和场景对象集成
 * 5. 处理材质参数验证和应用
 * 
 * @param render_context 渲染系统上下文指针，包含材质缓存和场景管理器
 * @param material_path 材质文件路径字符串指针
 * @param load_flag 加载标志，控制加载行为和缓存策略
 */
void mmd_material_loader_process(longlong render_context, char *material_path, uint8_t load_flag)
{
  char path_compare_char1;
  char path_compare_char2;
  bool texture_name_match;
  longlong *material_cache_entry;
  longlong *texture_reference_array;
  uint32_t texture_data_size;
  longlong current_file_position;
  FILE *material_file_handle;
  longlong array_processing_index;
  longlong texture_data_offset;
  uint32_t *texture_parameter_data;
  longlong *material_system_ptr;
  char *material_path_buffer;
  uint64_t buffer_allocation_size;
  char *material_name_string;
  uint64_t material_name_length;
  uint32_t material_entry_count;
  uint64_t cache_entry_index;
  uint32_t *material_parameter_array;
  int loop_index;
  uint64_t cache_offset;
  int material_entry_count;
  bool material_found_in_cache;
  char *texture_name_ptr;
  int texture_processing_indices[2];
  FILE *temporary_file_handle;
  char material_path_segment[8];
  char *material_string_buffer;
  uint32_t material_string_length;
  uint64_t material_path_hash;
  int path_hash_indices[2];
  void *temporary_buffer;
  char *texture_file_path;
  uint32_t texture_path_length;
  uint64_t texture_memory_size;
  longlong *texture_object_ptr;
  longlong *texture_object_ptr2;
  longlong material_data_offset;
  longlong *cache_entry_ptr;
  uint32_t buffer_parameter;
  longlong *stack_allocator_ptr;
  uint16_t texture_processing_flag;
  char texture_name_separator;
  int file_entry_data[2];
  longlong *material_entry_list;
  longlong *material_entry_list2;
  char texture_identifier[8];
  uint64_t stack_parameter;
  longlong *temporary_ptr1;
  char stack_char1;
  char stack_char2;
  char stack_char3;
  void *heap_ptr1;
  void *heap_ptr2;
  uint32_t parameter_count;
  uint32_t parameter_value;
  int temp_processing_indices[2];
  longlong *temporary_ptr2;
  longlong *temporary_ptr3;
  uint8_t temp_buffer1[4];
  uint8_t temp_buffer2[4];
  longlong *temporary_ptr4;
  longlong *temporary_ptr5;
  longlong *temporary_ptr6;
  longlong *temporary_ptr7;
  longlong *temporary_ptr8;
  void *temporary_ptr9;
  longlong stack_memory_offset;
  uint32_t stack_parameter2;
  uint64_t stack_parameter3;
  longlong *stack_ptr1;
  
  texture_indices[0] = CONCAT31(texture_indices[0]._1_3_, load_flag);
  stack_param3 = 0xfffffffffffffffe;
  if (*(int *)(render_context + 0x324) < 1) {
    return;
  }
  FUN_1806279c0(path_segment);
  param_index = buffer_length + -1;
  file_position = (longlong)param_index;
  if (-1 < param_index) {
    do {
      if (*(char *)(file_position + (longlong)string_buffer) == '/') goto LAB_18027baf2;
      param_index = param_index + -1;
      file_position = file_position + -1;
    } while (-1 < file_position);
  }
  param_index = -1;
LAB_18027baf2:
  file_position = FUN_180629a40(path_segment, &temp_ptr9, 0, param_index);
  if (string_buffer != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  buffer_length = *(uint *)(file_position + 0x10);
  string_buffer = *(undefined **)(file_position + 8);
  path_hash = *(undefined8 *)(file_position + 0x18);
  *(undefined4 *)(file_position + 0x10) = 0;
  *(undefined8 *)(file_position + 8) = 0;
  *(undefined8 *)(file_position + 0x18) = 0;
  temp_ptr9 = &UNK_180a3c3e0;
  if (stack_offset != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  stack_offset = 0;
  stack_param2 = 0;
  temp_ptr9 = &UNK_18098bcb0;
  material_count = buffer_length + 4;
  FUN_1806277c0(path_segment, material_count);
  *(undefined4 *)(string_buffer + buffer_length) = 0x646d6d2f;
  *(undefined1 *)((longlong)(string_buffer + buffer_length) + 4) = 0;
  buffer_length = material_count;
  FUN_180628380(path_segment, *(undefined4 *)(render_context + 0x324));
  param_index = buffer_length + 4;
  FUN_1806277c0(path_segment, param_index);
  *(undefined4 *)(string_buffer + buffer_length) = 0x646d6d2e;
  *(undefined1 *)((longlong)(string_buffer + buffer_length) + 4) = 0;
  buffer_length = param_index;
  file_handle = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18, 0x18, 8, 3);
  string_ptr = &DAT_18098bc73;
  if (string_buffer != (undefined *)0x0) {
    string_ptr = string_buffer;
  }
  file_position = 0;
  *file_handle = 0;
  *(undefined1 *)(file_handle + 2) = 0;
  temp_handle = file_handle;
  FUN_18062dee0(file_handle, string_ptr, &UNK_180a01ff0);
  if (file_handle[1] == 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(file_handle);
  }
  fread(temp_indices, 4, 1);
  texture_offset = (longlong)temp_indices[0];
  if (temp_indices[0] == 0x31444d4d) {
    fread(entry_data, 4, 1, file_handle[1]);
    texture_indices[0] = 0;
    if (0 < entry_data[0]) {
      do {
        fread(path_indices, 4, 1, file_handle[1]);
        material_entry = (longlong *)FUN_18062b1e0(_DAT_180c8ed18, (longlong)(path_indices[0] + 1), 0x10, 3);
        temp_ptr2 = material_entry;
        fread(material_entry, 1, (longlong)path_indices[0], file_handle[1]);
        *(undefined1 *)((longlong)path_indices[0] + (longlong)material_entry) = 0;
        FUN_180627910(&ptr1, material_entry);
        while ((0 < (int)param_count && (file_position = strstr(ptr2, &DAT_180a0ff10), file_position != 0))) {
          entry_count = 6;
          param_index = (int)file_position - (int)ptr2;
          if (param_count < param_index + 6U) {
            entry_count = param_count - param_index;
          }
          material_count = param_index + entry_count;
          if (material_count < param_count) {
            file_position = (longlong)(int)material_count;
            texture_offset = file_position - entry_count;
            do {
              ptr2[texture_offset] = ptr2[file_position];
              material_count = material_count + 1;
              file_position = file_position + 1;
              texture_offset = texture_offset + 1;
            } while (material_count < param_count);
          }
          param_count = param_count - entry_count;
          ptr2[param_count] = 0;
        }
        fread(temp_array2, 4, 1, file_handle[1]);
        fread(&texture_name, 4, 1, file_handle[1]);
        material_params = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18, (longlong)(int)texture_name << 2, 0x10, 3);
        fread(material_params, 4, (longlong)(int)texture_name);
        material_found = false;
        param_offset = 0;
        file_position = *(longlong *)(render_context + 0x38);
        path_length = param_offset;
        if (*(longlong *)(render_context + 0x40) - file_position >> 4 == 0) {
LAB_18027c5be:
          string_ptr = &DAT_18098bc73;
          if (ptr2 != (undefined *)0x0) {
            string_ptr = ptr2;
          }
          FUN_1806272a0(&UNK_180a168b0, string_ptr);
        }
        else {
          do {
            file_position = *(longlong *)(param_offset + file_position);
            temp_buffer = &UNK_180a3c3e0;
            texture_size = 0;
            texture_path = (char *)0x0;
            texture_path_len = 0;
            param_index = *(int *)(file_position + 0x20);
            if (param_index != 0) {
              entry_count = param_index + 1;
              if (entry_count < 0x10) {
                entry_count = 0x10;
              }
              texture_path = (char *)FUN_18062b420(_DAT_180c8ed18, (longlong)entry_count,
                                                  CONCAT71((uint7)(uint3)((uint)param_index >> 8), 0x13));
              *texture_path = '\0';
              param_value = FUN_18064e990(texture_path);
              texture_size = CONCAT44(texture_size._4_4_, param_value);
              if (0 < *(int *)(file_position + 0x20)) {
                string_ptr = &DAT_18098bc73;
                if (*(undefined **)(file_position + 0x18) != (undefined *)0x0) {
                  string_ptr = *(undefined **)(file_position + 0x18);
                }
                    // WARNING: Subroutine does not return
                memcpy(texture_path, string_ptr, (longlong)(*(int *)(file_position + 0x20) + 1));
              }
            }
            if ((*(longlong *)(file_position + 0x18) != 0) && (texture_path_len = 0, texture_path != (char *)0x0))
            {
              *texture_path = '\0';
            }
            while ((0 < (int)texture_path_len && (file_position = strstr(texture_path, &DAT_180a0ff10), file_position != 0))
                  ) {
              entry_count = 6;
              param_index = (int)file_position - (int)texture_path;
              if (texture_path_len < param_index + 6U) {
                entry_count = texture_path_len - param_index;
              }
              material_count = param_index + entry_count;
              if (material_count < texture_path_len) {
                file_position = (longlong)(int)material_count;
                texture_offset = file_position - entry_count;
                do {
                  texture_path[texture_offset] = texture_path[file_position];
                  material_count = material_count + 1;
                  file_position = file_position + 1;
                  texture_offset = texture_offset + 1;
                } while (material_count < texture_path_len);
              }
              texture_path_len = texture_path_len - entry_count;
              texture_path[texture_path_len] = '\0';
            }
            if (texture_path_len == param_count) {
              if (texture_path_len == 0) {
LAB_18027c2fe:
                if (param_count != 0) goto LAB_18027c306;
                texture_match = true;
              }
              else {
                path_buffer = texture_path;
                do {
                  path_char1 = *path_buffer;
                  path_char2 = path_buffer[(longlong)ptr2 - (longlong)texture_path];
                  if (path_char1 != path_char2) break;
                  path_buffer = path_buffer + 1;
                } while (path_char2 != '\0');
                texture_match = path_char1 == path_char2;
              }
            }
            else {
              if (texture_path_len == 0) goto LAB_18027c2fe;
LAB_18027c306:
              texture_match = false;
            }
            if (texture_match) {
              material_found = true;
              material_entry = *(longlong **)(param_offset + *(longlong *)(render_context + 0x38));
              FUN_18007ea10(material_entry, 0);
              stack_ptr1 = material_entry;
              if (material_entry != (longlong *)0x0) {
                (**(code **)(*material_entry + 0x28))(material_entry);
              }
              texture_ptr = (longlong *)0x0;
              texture_ptr2 = (longlong *)0x0;
              temp_ptr3 = &material_offset;
              stack_ptr = (longlong *)0x0;
              entry_ptr = (longlong *)0x0;
              material_offset._0_1_ = 0;
              if (material_entry != (longlong *)0x0) {
                temp_ptr5 = material_entry;
                (**(code **)(*material_entry + 0x28))(material_entry);
              }
              temp_ptr5 = texture_ptr;
              texture_array = material_entry;
              if (texture_ptr != (longlong *)0x0) {
                file_position = *texture_ptr;
                texture_ptr = material_entry;
                (**(code **)(file_position + 0x38))();
                texture_array = texture_ptr;
              }
              texture_ptr = texture_array;
              buffer_param = 0;
              entry_ptr = material_entry;
              FUN_18007f4c0(&material_offset);
              texture_array = stack_ptr;
              temp_ptr6 = stack_ptr;
              if (stack_ptr != (longlong *)0x0) {
                (**(code **)(*stack_ptr + 0x28))(stack_ptr);
              }
              temp_ptr4 = texture_ptr2;
              temp_ptr6 = texture_ptr2;
              texture_ptr2 = texture_array;
              if (temp_ptr4 != (longlong *)0x0) {
                (**(code **)(*temp_ptr4 + 0x38))();
              }
              texture_flag = 0;
              texture_separator = '\0';
              if (material_entry != (longlong *)0x0) {
                (**(code **)(*material_entry + 0x38))(material_entry);
              }
              if ((int)texture_ptr2[0xc] == (int)texture_name) {
                path_length = 0;
                texture_data = material_params;
                entry_index = path_length;
                if (0 < (int)texture_name) {
                  do {
                    *(undefined4 *)(texture_ptr2[0xd] + 0x54 + path_length) = *texture_data;
                    texture_flag = CONCAT11(texture_flag._1_1_, 1);
                    material_count = (int)entry_index + 1;
                    path_length = path_length + 0x5c;
                    texture_data = texture_data + 1;
                    entry_index = (ulonglong)material_count;
                  } while ((int)material_count < (int)texture_name);
                }
              }
              else {
                path_buffer = "";
                if (texture_path != (char *)0x0) {
                  path_buffer = texture_path;
                }
                FUN_1806272a0(&UNK_180a16850, path_buffer);
              }
              if (texture_ptr2 != (longlong *)0x0) {
                if (texture_separator != '\0') {
                  FUN_180075b70(texture_ptr);
                }
                FUN_18007f6a0(&material_offset);
                if ((char)texture_flag != '\0') {
                  FUN_180079520(texture_ptr);
                }
                if (texture_flag._1_1_ != '\0') {
                  FUN_180079520(texture_ptr);
                }
                material_entry = texture_ptr2;
                temp_ptr7 = texture_ptr2;
                texture_ptr2 = (longlong *)0x0;
                if (material_entry != (longlong *)0x0) {
                  (**(code **)(*material_entry + 0x38))();
                }
              }
              if ((texture_ptr != (longlong *)0x0) && (texture_ptr2 != (longlong *)0x0)) {
                if (texture_separator != '\0') {
                  FUN_180075b70();
                }
                FUN_18007f6a0(&material_offset);
                if ((char)texture_flag != '\0') {
                  FUN_180079520(texture_ptr);
                }
                if (texture_flag._1_1_ != '\0') {
                  FUN_180079520(texture_ptr);
                }
                material_entry = texture_ptr2;
                temp_ptr8 = texture_ptr2;
                texture_ptr2 = (longlong *)0x0;
                if (material_entry != (longlong *)0x0) {
                  (**(code **)(*material_entry + 0x38))();
                }
              }
              temp_ptr3 = &material_offset;
              FUN_18007f6a0(&material_offset);
              if (stack_ptr != (longlong *)0x0) {
                (**(code **)(*stack_ptr + 0x38))();
              }
              if (texture_ptr2 != (longlong *)0x0) {
                (**(code **)(*texture_ptr2 + 0x38))();
              }
              if (texture_ptr != (longlong *)0x0) {
                (**(code **)(*texture_ptr + 0x38))();
              }
            }
            temp_buffer = &UNK_180a3c3e0;
            if (texture_path != (char *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            texture_path = (char *)0x0;
            texture_size = texture_size & 0xffffffff00000000;
            temp_buffer = &UNK_18098bcb0;
            material_count = (int)path_length + 1;
            param_offset = param_offset + 0x10;
            file_position = *(longlong *)(render_context + 0x38);
            path_length = (ulonglong)material_count;
          } while ((ulonglong)(longlong)(int)material_count <
                   (ulonglong)(*(longlong *)(render_context + 0x40) - file_position >> 4));
          if (!material_found) goto LAB_18027c5be;
        }
        if (material_params != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(material_params);
        }
        if (temp_ptr2 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        ptr1 = &UNK_180a3c3e0;
        if (ptr2 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        ptr2 = (undefined *)0x0;
        param_value = 0;
        ptr1 = &UNK_18098bcb0;
        texture_indices[0] = texture_indices[0] + 1;
        file_handle = temp_handle;
      } while (texture_indices[0] < entry_data[0]);
    }
  }
  else if (0 < temp_indices[0]) {
    do {
      fread(&temp_handle, 4, 1, file_handle[1]);
      array_index = FUN_18062b1e0(_DAT_180c8ed18, (longlong)((int)temp_handle + 1), 0x10, 3);
      fread(array_index, 1, (longlong)(int)temp_handle, file_handle[1]);
      *(undefined1 *)((int)temp_handle + array_index) = 0;
      fread(temp_array1, 4, 1, file_handle[1]);
      fread(texture_indices, 4, 1, file_handle[1]);
      material_params = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18, (longlong)texture_indices[0] << 2, 0x10, 3);
      fread(material_params, 4, (longlong)texture_indices[0], file_handle[1]);
      material_entry = *(longlong **)(file_position + *(longlong *)(render_context + 0x38));
      FUN_18007ea10(material_entry, 0);
      temp_ptr3 = material_entry;
      if (material_entry != (longlong *)0x0) {
        (**(code **)(*material_entry + 0x28))();
      }
      entry_list = (longlong *)0x0;
      entry_list2 = (longlong *)0x0;
      texture_name = texture_id;
      temp_ptr1 = (longlong *)0x0;
      stack_param = 0;
      texture_id[0] = 0;
      FUN_18022f2e0(&entry_list, material_entry, 0);
      if (material_entry != (longlong *)0x0) {
        (**(code **)(*material_entry + 0x38))(material_entry);
      }
      path_length = 0;
      texture_data = material_params;
      entry_index = path_length;
      if (0 < texture_indices[0]) {
        do {
          *(undefined4 *)(entry_list2[0xd] + 0x54 + path_length) = *texture_data;
          stack_char1 = '\x01';
          material_count = (int)entry_index + 1;
          path_length = path_length + 0x5c;
          texture_data = texture_data + 1;
          entry_index = (ulonglong)material_count;
        } while ((int)material_count < texture_indices[0]);
      }
      if (entry_list2 != (longlong *)0x0) {
        if (stack_char3 != '\0') {
          FUN_180075b70(entry_list);
        }
        FUN_18007f6a0(texture_id);
        if (stack_char1 != '\0') {
          FUN_180079520(entry_list);
        }
        if (stack_char2 != '\0') {
          FUN_180079520(entry_list);
        }
        material_entry = entry_list2;
        temp_ptr4 = entry_list2;
        entry_list2 = (longlong *)0x0;
        if (material_entry != (longlong *)0x0) {
          (**(code **)(*material_entry + 0x38))();
        }
      }
      if ((entry_list != (longlong *)0x0) && (entry_list2 != (longlong *)0x0)) {
        if (stack_char3 != '\0') {
          FUN_180075b70();
        }
        FUN_18007f6a0(texture_id);
        if (stack_char1 != '\0') {
          FUN_180079520(entry_list);
        }
        if (stack_char2 != '\0') {
          FUN_180079520(entry_list);
        }
        material_entry = entry_list2;
        temp_ptr2 = entry_list2;
        entry_list2 = (longlong *)0x0;
        if (material_entry != (longlong *)0x0) {
          (**(code **)(*material_entry + 0x38))();
        }
      }
      texture_name = texture_id;
      FUN_18007f6a0(texture_id);
      if (temp_ptr1 != (longlong *)0x0) {
        (**(code **)(*temp_ptr1 + 0x38))();
      }
      if (entry_list2 != (longlong *)0x0) {
        (**(code **)(*entry_list2 + 0x38))();
      }
      if (entry_list != (longlong *)0x0) {
        (**(code **)(*entry_list + 0x38))();
      }
      if (material_params != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(material_params);
      }
      if (array_index != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(array_index);
      }
      file_position = file_position + 0x10;
      texture_offset = texture_offset + -1;
    } while (texture_offset != 0);
  }
  if (file_handle[1] != 0) {
    fclose();
    file_handle[1] = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(file_handle);
}