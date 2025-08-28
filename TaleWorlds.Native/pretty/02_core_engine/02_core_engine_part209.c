#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part209.c - 4 个函数

// 函数: void FUN_18018c360(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
void process_face_animation_data(undefined8 animation_system, undefined8 param_2, undefined8 *base_node_ptr, longlong animation_database,
                                 longlong *animation_records_ptr)

{
  undefined8 *animation_node;
  byte *name_ptr;
  byte name_char;
  longlong name_offset;
  bool is_found;
  longlong node_index;
  char *current_name;
  byte *compare_ptr;
  undefined8 *current_record;
  undefined8 *next_record;
  undefined8 *temp_record;
  char *record_name;
  char *record_offset;
  longlong record_length;
  undefined8 *new_record;
  uint name_hash;
  int compare_result;
  char *temp_name;
  ulonglong temp_length;
  undefined8 *insert_record;
  char *search_name;
  char *name_end;
  undefined8 system_param;
  undefined1 temp_stack[8];
  undefined *stack_pointer;
  byte *name_buffer;
  int buffer_size;
  undefined8 buffer_capacity;
  
  node_index = face_animation_database_root;
  search_name = "base";
  do {
    name_end = search_name;
    search_name = name_end + 1;
  } while (*search_name != '\0');
  current_name = (char *)0x0;
  for (search_name = *(char **)(animation_database + 0x30); record_offset = current_name, search_name != (char *)0x0;
      search_name = *(char **)(search_name + 0x58)) {
    record_name = *(char **)search_name;
    if (record_name == (char *)0x0) {
      record_name = (char *)0x180d48d24;
      current_name = (char *)0x0;
    }
    else {
      current_name = *(char **)(search_name + 0x10);
    }
    if (current_name == name_end + -0x180a04ee3) {
      current_name = current_name + (longlong)record_name;
      record_offset = search_name;
      if (current_name <= record_name) break;
      name_offset = (longlong)&DAT_180a04ee4 - (longlong)record_name;
      while (*record_name == record_name[name_offset]) {
        record_name = record_name + 1;
        if (current_name <= record_name) goto LAB_base_found;
      }
    }
  }
LAB_base_found:
  *base_node_ptr = record_offset;
  search_name = "face_animation_records";
  do {
    name_end = search_name;
    search_name = name_end + 1;
  } while (*search_name != '\0');
  for (search_name = *(char **)(record_offset + 0x30); record_offset = current_name, search_name != (char *)0x0;
      search_name = *(char **)(search_name + 0x58)) {
    record_name = *(char **)search_name;
    if (record_name == (char *)0x0) {
      record_name = (char *)0x180d48d24;
      current_name = (char *)0x0;
    }
    else {
      current_name = *(char **)(search_name + 0x10);
    }
    if (current_name == name_end + -0x180a0ae0f) {
      current_name = current_name + (longlong)record_name;
      record_offset = search_name;
      if (current_name <= record_name) break;
      name_offset = (longlong)&UNK_180a0ae10 - (longlong)record_name;
      while (*record_name == record_name[name_offset]) {
        record_name = record_name + 1;
        if (current_name <= record_name) goto LAB_records_found;
      }
    }
  }
LAB_records_found:
  *animation_records_ptr = (longlong)record_offset;
  search_name = "face_animation_record";
  do {
    name_end = search_name;
    search_name = name_end + 1;
  } while (*search_name != '\0');
  for (search_name = *(char **)(record_offset + 0x30); record_offset = current_name, search_name != (char *)0x0;
      search_name = *(char **)(search_name + 0x58)) {
    record_name = *(char **)search_name;
    if (record_name == (char *)0x0) {
      record_name = (char *)0x180d48d24;
      current_name = (char *)0x0;
    }
    else {
      current_name = *(char **)(search_name + 0x10);
    }
    if (current_name == name_end + -0x180a0ae2f) {
      current_name = record_name + (longlong)current_name;
      record_offset = search_name;
      if (current_name <= record_name) break;
      name_offset = (longlong)&UNK_180a0ae30 - (longlong)record_name;
      while (*record_name == record_name[name_offset]) {
        record_name = record_name + 1;
        if (current_name <= record_name) goto LAB_record_found;
      }
    }
  }
LAB_record_found:
  *animation_records_ptr = (longlong)record_offset;
  if (record_offset != (char *)0x0) {
    animation_node = (undefined8 *)(node_index + 0x50);
    system_param = animation_system;
    do {
      stack_pointer = &UNK_180a3c3e0;
      buffer_capacity = 0;
      name_buffer = (byte *)0x0;
      buffer_size = 0;
      search_name = "id";
      do {
        name_end = search_name;
        search_name = name_end + 1;
      } while (*search_name != '\0');
      for (current_record = *(undefined8 **)(*animation_records_ptr + 0x40); current_record != (undefined8 *)0x0;
          current_record = (undefined8 *)current_record[6]) {
        search_name = (char *)*current_record;
        if (search_name == (char *)0x0) {
          search_name = (char *)0x180d48d24;
          current_name = (char *)0x0;
        }
        else {
          current_name = (char *)current_record[2];
        }
        if (current_name == name_end + -0x180a0ae27) {
          current_name = current_name + (longlong)search_name;
          if (current_name <= search_name) {
LAB_id_found:
            name_offset = 0x180d48d24;
            if (current_record[1] != 0) {
              name_offset = current_record[1];
            }
            FUN_180627c50(&stack_pointer,name_offset);
            break;
          }
          name_offset = (longlong)&UNK_180a0ae28 - (longlong)search_name;
          while (*search_name == search_name[name_offset]) {
            search_name = search_name + 1;
            if (current_name <= search_name) goto LAB_id_found;
          }
        }
      }
      current_record = *(undefined8 **)(node_index + 0x60);
      insert_record = animation_node;
      new_record = current_record;
      if (current_record == (undefined8 *)0x0) {
LAB_create_new_record:
        new_record = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3);
        *new_record = &UNK_18098bcb0;
        new_record[1] = 0;
        *(undefined4 *)(new_record + 2) = 0;
        *new_record = &UNK_180a3c3e0;
        new_record[3] = 0;
        new_record[1] = 0;
        *(undefined4 *)(new_record + 2) = 0;
        new_record[4] = &UNK_18098bcb0;
        new_record[5] = 0;
        *(undefined4 *)(new_record + 6) = 0;
        new_record[4] = &UNK_180a3c3e0;
        new_record[7] = 0;
        new_record[5] = 0;
        *(undefined4 *)(new_record + 6) = 0;
        *(undefined1 *)(new_record + 8) = 0;
        name_offset = *(longlong *)(node_index + 0x38);
        record_length = *(longlong *)(node_index + 0x30);
        new_record = animation_node;
        current_record = *(undefined8 **)(node_index + 0x60);
        while (temp_record = new_record, current_record != (undefined8 *)0x0) {
          if (buffer_size == 0) {
            is_found = false;
            insert_record = (undefined8 *)current_record[1];
          }
          else {
            if (*(int *)(current_record + 6) == 0) {
              is_found = true;
            }
            else {
              compare_ptr = name_buffer;
              do {
                name_hash = (uint)name_buffer[current_record[5] - (longlong)name_buffer];
                compare_result = *name_buffer - name_hash;
                if (*name_buffer != name_hash) break;
                name_buffer = name_buffer + 1;
              } while (name_hash != 0);
              is_found = 0 < compare_result;
              if (compare_result < 1) {
                insert_record = (undefined8 *)current_record[1];
                goto LAB_search_complete;
              }
            }
            insert_record = (undefined8 *)*current_record;
          }
LAB_search_complete:
          new_record = current_record;
          current_record = insert_record;
          if (is_found) {
            new_record = temp_record;
          }
        }
        if (temp_record == animation_node) {
LAB_insert_position:
          temp_record = (undefined8 *)FUN_1800c2ab0(animation_node,temp_stack);
          temp_record = (undefined8 *)*temp_record;
        }
        else if (*(int *)(temp_record + 6) != 0) {
          if (buffer_size != 0) {
            name_buffer = (byte *)temp_record[5];
            record_length = (longlong)name_buffer - (longlong)name_buffer;
            do {
              name_char = *name_buffer;
              name_hash = (uint)name_buffer[record_length];
              if (name_char != name_hash) break;
              name_buffer = name_buffer + 1;
            } while (name_hash != 0);
            if ((int)(name_char - name_hash) < 1) goto LAB_insert_position;
          }
          goto LAB_insert_position;
        }
        *(int *)(temp_record + 8) = (int)(name_offset - record_length >> 3);
        current_record = *(undefined8 **)(node_index + 0x38);
        if (current_record < *(undefined8 **)(node_index + 0x40)) {
          *(undefined8 **)(node_index + 0x38) = current_record + 1;
          *current_record = new_record;
        }
        else {
          new_record = *(undefined8 **)(node_index + 0x30);
          name_offset = (longlong)current_record - (longlong)new_record >> 3;
          if (name_offset == 0) {
            name_offset = 1;
LAB_resize_array:
            temp_record = (undefined8 *)
                      FUN_18062b420(_DAT_180c8ed18,name_offset * 8,*(undefined1 *)(node_index + 0x48));
            current_record = *(undefined8 **)(node_index + 0x38);
            new_record = *(undefined8 **)(node_index + 0x30);
          }
          else {
            name_offset = name_offset * 2;
            if (name_offset != 0) goto LAB_resize_array;
            temp_record = (undefined8 *)0x0;
          }
          if (new_record != current_record) {
                    // WARNING: Subroutine does not return
            memmove(temp_record,new_record,(longlong)current_record - (longlong)new_record);
          }
          *temp_record = new_record;
          if (*(longlong *)(node_index + 0x30) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(undefined8 **)(node_index + 0x30) = temp_record;
          *(undefined8 **)(node_index + 0x38) = temp_record + 1;
          *(undefined8 **)(node_index + 0x40) = temp_record + name_offset;
        }
      }
      else {
        do {
          if (buffer_size == 0) {
            is_found = false;
            temp_record = (undefined8 *)new_record[1];
          }
          else {
            if (*(int *)(new_record + 6) == 0) {
              is_found = true;
            }
            else {
              name_buffer = name_buffer;
              do {
                name_hash = (uint)name_buffer[new_record[5] - (longlong)name_buffer];
                compare_result = *name_buffer - name_hash;
                if (*name_buffer != name_hash) break;
                name_buffer = name_buffer + 1;
              } while (name_hash != 0);
              is_found = 0 < compare_result;
              if (compare_result < 1) {
                temp_record = (undefined8 *)new_record[1];
                goto LAB_search_next;
              }
            }
            temp_record = (undefined8 *)*new_record;
          }
LAB_search_next:
          insert_record = new_record;
          if (is_found) {
            insert_record = current_record;
          }
          current_record = insert_record;
          new_record = temp_record;
        } while (temp_record != (undefined8 *)0x0);
        if (insert_record == animation_node) goto LAB_create_new_record;
        temp_length = 0;
        current_record = animation_node;
        if (*(int *)(insert_record + 6) != 0) {
          if (buffer_size != 0) {
            name_buffer = (byte *)insert_record[5];
            temp_length = (longlong)name_buffer - (longlong)name_buffer;
            do {
              name_char = *name_buffer;
              name_hash = (uint)name_buffer[temp_length];
              if (name_char != name_hash) break;
              name_buffer = name_buffer + 1;
            } while (name_hash != 0);
            if ((int)(name_char - name_hash) < 1) goto LAB_found_match;
          }
          goto LAB_create_new_record;
        }
LAB_found_match:
        while (new_record = current_record, new_record != (undefined8 *)0x0) {
          if (buffer_size == 0) {
            is_found = false;
            temp_record = (undefined8 *)new_record[1];
          }
          else {
            if (*(int *)(new_record + 6) == 0) {
              is_found = true;
            }
            else {
              name_buffer = name_buffer;
              do {
                compare_ptr = name_buffer + (new_record[5] - (longlong)name_buffer);
                name_hash = (uint)*name_buffer - (uint)*compare_ptr;
                temp_length = (ulonglong)name_hash;
                if (name_hash != 0) break;
                name_buffer = name_buffer + 1;
              } while (*compare_ptr != 0);
              is_found = 0 < (int)name_hash;
              if ((int)name_hash < 1) {
                temp_record = (undefined8 *)new_record[1];
                goto LAB_compare_complete;
              }
            }
            temp_record = (undefined8 *)*new_record;
          }
LAB_compare_complete:
          current_record = new_record;
          new_record = temp_record;
          if (is_found) {
            current_record = new_record;
          }
        }
        if (new_record == animation_node) {
LAB_process_record:
          new_record = (undefined8 *)FUN_1800c2ab0(animation_node,&system_param,temp_length,new_record,&stack_pointer);
          new_record = (undefined8 *)*new_record;
        }
        else if (*(int *)(new_record + 6) != 0) {
          if (buffer_size != 0) {
            name_buffer = (byte *)new_record[5];
            name_offset = (longlong)name_buffer - (longlong)name_buffer;
            do {
              compare_ptr = name_buffer + name_offset;
              name_hash = (uint)*name_buffer - (uint)*compare_ptr;
              temp_length = (ulonglong)name_hash;
              if (name_hash != 0) break;
              name_buffer = name_buffer + 1;
            } while (*compare_ptr != 0);
            if ((int)name_hash < 1) goto LAB_skip_record;
          }
          goto LAB_process_record;
        }
LAB_skip_record:
        new_record = *(undefined8 **)(*(longlong *)(node_index + 0x30) + (longlong)*(int *)(new_record + 8) * 8)
        ;
      }
      (**(code **)(**(longlong **)(_DAT_180c86870 + 0x2b0) + 0x58))
                (*(longlong **)(_DAT_180c86870 + 0x2b0),new_record,*animation_records_ptr);
      search_name = "face_animation_record";
      do {
        name_end = search_name;
        search_name = name_end + 1;
      } while (*search_name != '\0');
      for (new_record = *(undefined8 **)(*animation_records_ptr + 0x58); new_record != (undefined8 *)0x0;
          new_record = (undefined8 *)new_record[0xb]) {
        current_name = (char *)*new_record;
        search_name = (char *)0x0;
        if (current_name == (char *)0x0) {
          current_name = (char *)0x180d48d24;
        }
        else {
          search_name = (char *)new_record[2];
        }
        if (search_name == name_end + -0x180a0ae2f) {
          search_name = search_name + (longlong)current_name;
          if (search_name <= current_name) goto LAB_next_record;
          name_offset = (longlong)&UNK_180a0ae30 - (longlong)current_name;
          while (*current_name == current_name[name_offset]) {
            current_name = current_name + 1;
            if (search_name <= current_name) goto LAB_next_record;
          }
        }
      }
      new_record = (undefined8 *)0x0;
LAB_next_record:
      *animation_records_ptr = (longlong)new_record;
      stack_pointer = &UNK_180a3c3e0;
      if (name_buffer != (byte *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    } while (*animation_records_ptr != 0);
  }
  return;
}



longlong * find_animation_record_by_id(longlong *record_table, longlong search_id, undefined8 param_3, ulonglong param_4)

{
  byte compare_char;
  bool is_match;
  byte *search_ptr;
  longlong *current_record;
  longlong *next_record;
  uint char_diff;
  int string_compare;
  longlong *temp_record;
  longlong id_offset;
  longlong stack_param;
  undefined1 temp_stack[16];
  
  next_record = record_table;
  if ((longlong *)record_table[2] != (longlong *)0x0) {
    current_record = (longlong *)record_table[2];
    do {
      if (*(int *)(search_id + 0x10) == 0) {
        temp_record = (longlong *)current_record[1];
        is_match = false;
      }
      else {
        if ((int)current_record[6] == 0) {
          is_match = true;
        }
        else {
          search_ptr = *(byte **)(search_id + 8);
          param_4 = current_record[5] - (longlong)search_ptr;
          do {
            char_diff = (uint)search_ptr[param_4];
            string_compare = *search_ptr - char_diff;
            if (*search_ptr != char_diff) break;
            search_ptr = search_ptr + 1;
          } while (char_diff != 0);
          is_match = 0 < string_compare;
          if (string_compare < 1) {
            temp_record = (longlong *)current_record[1];
            goto LAB_search_complete;
          }
        }
        temp_record = (longlong *)*current_record;
      }
LAB_search_complete:
      if (is_match) {
        current_record = next_record;
      }
      next_record = current_record;
      current_record = temp_record;
    } while (temp_record != (longlong *)0x0);
  }
  if (next_record != record_table) {
    if ((int)next_record[6] == 0) {
LAB_found_record:
      return next_record + 8;
    }
    if (*(int *)(search_id + 0x10) != 0) {
      search_ptr = (byte *)next_record[5];
      id_offset = *(longlong *)(search_id + 8) - (longlong)search_ptr;
      do {
        compare_char = *search_ptr;
        char_diff = (uint)search_ptr[id_offset];
        if (compare_char != char_diff) break;
        search_ptr = search_ptr + 1;
      } while (char_diff != 0);
      if ((int)(compare_char - char_diff) < 1) goto LAB_found_record;
    }
  }
  current_record = (longlong *)*record_table;
  if ((next_record == current_record) || (next_record == record_table)) {
    if ((record_table[4] != 0) && (*(int *)(search_id + 0x10) != 0)) {
      next_record = current_record;
      if ((int)current_record[6] != 0) {
        search_ptr = *(byte **)(search_id + 8);
        param_4 = current_record[5] - (longlong)search_ptr;
        do {
          compare_char = *search_ptr;
          char_diff = (uint)search_ptr[param_4];
          if (compare_char != char_diff) break;
          search_ptr = search_ptr + 1;
        } while (char_diff != 0);
        if ((int)(compare_char - char_diff) < 1) goto LAB_use_existing;
      }
LAB_search_alternative:
      param_4 = param_4 & 0xffffffffffffff00;
      current_record = next_record;
LAB_process_record:
      if (current_record != (longlong *)0x0) {
        FUN_18018cde0(record_table,&stack_param,current_record,param_4,search_id);
        goto LAB_processing_complete;
      }
    }
  }
  else {
    current_record = (longlong *)func_0x00018066bd70(next_record);
    if (*(int *)(search_id + 0x10) != 0) {
      if ((int)next_record[6] != 0) {
        search_ptr = *(byte **)(search_id + 8);
        id_offset = next_record[5] - (longlong)search_ptr;
        do {
          compare_char = *search_ptr;
          char_diff = (uint)search_ptr[id_offset];
          if (compare_char != char_diff) break;
          search_ptr = search_ptr + 1;
        } while (char_diff != 0);
        if ((int)(compare_char - char_diff) < 1) goto LAB_use_existing;
      }
      if ((int)current_record[6] != 0) {
        search_ptr = (byte *)current_record[5];
        param_4 = *(longlong *)(search_id + 8) - (longlong)search_ptr;
        do {
          compare_char = *search_ptr;
          char_diff = (uint)search_ptr[param_4];
          if (compare_char != char_diff) break;
          search_ptr = search_ptr + 1;
        } while (char_diff != 0);
        if (0 < (int)(compare_char - char_diff)) {
          if (*next_record == 0) goto LAB_search_alternative;
          param_4 = CONCAT71((int7)(param_4 >> 8),1);
          goto LAB_process_record;
        }
      }
    }
  }
LAB_use_existing:
  next_record = (longlong *)FUN_18018cc00(record_table,temp_stack,current_record,search_id);
  stack_param = *next_record;
LAB_processing_complete:
  return (longlong *)(stack_param + 0x40);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
create_animation_record(undefined8 *record_manager, undefined8 *param_2, undefined8 param_3, longlong search_criteria)

{
  byte compare_char;
  bool should_create;
  undefined8 *current_node;
  undefined8 *parent_node;
  byte *search_string;
  uint string_hash;
  longlong string_length;
  undefined8 search_param;
  undefined8 create_param;
  
  create_param = 0xfffffffffffffffe;
  should_create = true;
  parent_node = (undefined8 *)record_manager[2];
  current_node = record_manager;
  while (parent_node != (undefined8 *)0x0) {
    current_node = parent_node;
    if (*(int *)(parent_node + 6) == 0) {
      should_create = false;
LAB_traverse_list:
      parent_node = (undefined8 *)*parent_node;
    }
    else {
      if (*(int *)(search_criteria + 0x10) == 0) {
        should_create = true;
      }
      else {
        search_string = (byte *)parent_node[5];
        string_length = *(longlong *)(search_criteria + 8) - (longlong)search_string;
        do {
          compare_char = *search_string;
          string_hash = (uint)search_string[string_length];
          if (compare_char != string_hash) break;
          search_string = search_string + 1;
        } while (string_hash != 0);
        should_create = 0 < (int)(compare_char - string_hash);
      }
      if (!should_create) goto LAB_traverse_list;
      parent_node = (undefined8 *)parent_node[1];
    }
  }
  parent_node = current_node;
  if (should_create) {
    if (current_node != (undefined8 *)record_manager[1]) {
      parent_node = (undefined8 *)func_0x00018066b9a0(current_node);
      goto LAB_creation_point;
    }
  }
  else {
LAB_creation_point:
    if (*(int *)(search_criteria + 0x10) == 0) {
LAB_creation_complete:
      *param_2 = parent_node;
      *(undefined1 *)(search_criteria + 1) = 0;
      return param_2;
    }
    if (*(int *)(parent_node + 6) != 0) {
      search_string = *(byte **)(search_criteria + 8);
      string_length = parent_node[5] - (longlong)search_string;
      do {
        compare_char = *search_string;
        string_hash = (uint)search_string[string_length];
        if (compare_char != string_hash) break;
        search_string = search_string + 1;
      } while (string_hash != 0);
      if ((int)(compare_char - string_hash) < 1) goto LAB_creation_complete;
    }
  }
  search_param = 0;
  if (current_node == record_manager) goto LAB_skip_validation;
  if (*(int *)(current_node + 6) != 0) {
    if (*(int *)(search_criteria + 0x10) == 0) goto LAB_skip_validation;
    search_string = (byte *)current_node[5];
    string_length = *(longlong *)(search_criteria + 8) - (longlong)search_string;
    do {
      compare_char = *search_string;
      string_hash = (uint)search_string[string_length];
      if (compare_char != string_hash) break;
      search_string = search_string + 1;
    } while (string_hash != 0);
    if (0 < (int)(compare_char - string_hash)) goto LAB_skip_validation;
  }
  search_param = 1;
LAB_skip_validation:
  string_length = FUN_18062b420(_DAT_180c8ed18,0x68,*(undefined1 *)(record_manager + 5));
  FUN_180627ae0(string_length + 0x20,search_criteria);
  parent_node = (undefined8 *)(string_length + 0x40);
  *parent_node = 0;
  *(undefined8 *)(string_length + 0x48) = 0;
  *(undefined8 *)(string_length + 0x50) = 0;
  *(undefined4 *)(string_length + 0x58) = 3;
  *(undefined8 *)(string_length + 0x48) = *parent_node;
  *(undefined4 *)(string_length + 0x60) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(string_length,current_node,record_manager,search_param,create_param,parent_node,parent_node);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18018cde0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
void insert_animation_record(longlong record_manager, undefined8 param_2, longlong record_data, undefined8 param_4,
                             longlong search_criteria)

{
  byte compare_char;
  byte *string_ptr;
  uint char_diff;
  undefined8 *record_node;
  longlong string_length;
  undefined8 insert_param;
  undefined8 create_param;
  
  create_param = 0xfffffffffffffffe;
  insert_param = 0;
  if (((char)param_4 != '\0') || (record_data == record_manager)) goto LAB_skip_duplicate_check;
  if (*(int *)(record_data + 0x30) != 0) {
    if (*(int *)(search_criteria + 0x10) == 0) goto LAB_skip_duplicate_check;
    string_ptr = *(byte **)(record_data + 0x28);
    string_length = *(longlong *)(search_criteria + 8) - (longlong)string_ptr;
    do {
      compare_char = *string_ptr;
      char_diff = (uint)string_ptr[string_length];
      if (compare_char != char_diff) break;
      string_ptr = string_ptr + 1;
    } while (char_diff != 0);
    if (0 < (int)(compare_char - char_diff)) goto LAB_skip_duplicate_check;
  }
  insert_param = 1;
LAB_skip_duplicate_check:
  string_length = FUN_18062b420(_DAT_180c8ed18,0x68,*(undefined1 *)(record_manager + 0x28),param_4,
                        0xfffffffffffffffe);
  FUN_180627ae0(string_length + 0x20,search_criteria);
  record_node = (undefined8 *)(string_length + 0x40);
  *record_node = 0;
  *(undefined8 *)(string_length + 0x48) = 0;
  *(undefined8 *)(string_length + 0x50) = 0;
  *(undefined4 *)(string_length + 0x58) = 3;
  *(undefined8 *)(string_length + 0x48) = *record_node;
  *(undefined4 *)(string_length + 0x60) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(string_length,record_data,record_manager,insert_param,create_param,record_node);
}



// WARNING: Removing unreachable block (ram,0x00018018d6f3)
// WARNING: Removing unreachable block (ram,0x00018018d6fc)
// WARNING: Removing unreachable block (ram,0x00018018d702)
// WARNING: Removing unreachable block (ram,0x00018018d713)
// WARNING: Removing unreachable block (ram,0x00018018d748)
// WARNING: Removing unreachable block (ram,0x00018018d71c)
// WARNING: Removing unreachable block (ram,0x00018018d724)
// WARNING: Removing unreachable block (ram,0x00018018d6ae)
// WARNING: Removing unreachable block (ram,0x00018018d444)
// WARNING: Removing unreachable block (ram,0x00018018d3a1)
// WARNING: Removing unreachable block (ram,0x00018018d4ee)
// WARNING: Removing unreachable block (ram,0x00018018d530)
// WARNING: Removing unreachable block (ram,0x00018018d539)
// WARNING: Removing unreachable block (ram,0x00018018d53d)
// WARNING: Removing unreachable block (ram,0x00018018d5dd)
// WARNING: Removing unreachable block (ram,0x00018018d69e)
// WARNING: Removing unreachable block (ram,0x00018018d6a3)
// WARNING: Removing unreachable block (ram,0x00018018d6b1)
// WARNING: Removing unreachable block (ram,0x00018018d6e1)
// WARNING: Removing unreachable block (ram,0x00018018d6e5)
// WARNING: Removing unreachable block (ram,0x00018018d551)
// WARNING: Removing unreachable block (ram,0x00018018d55a)
// WARNING: Removing unreachable block (ram,0x00018018d58b)
// WARNING: Removing unreachable block (ram,0x00018018d593)
// WARNING: Removing unreachable block (ram,0x00018018d596)
// WARNING: Removing unreachable block (ram,0x00018018d563)
// WARNING: Removing unreachable block (ram,0x00018018d567)
// WARNING: Removing unreachable block (ram,0x00018018d5b0)
// WARNING: Removing unreachable block (ram,0x00018018d5bf)
// WARNING: Removing unreachable block (ram,0x00018018d750)
// WARNING: Removing unreachable block (ram,0x00018018d753)
// WARNING: Removing unreachable block (ram,0x00018018d76d)
// WARNING: Removing unreachable block (ram,0x00018018d77c)
// WARNING: Removing unreachable block (ram,0x00018018d7af)
// WARNING: Removing unreachable block (ram,0x00018018d7aa)
// WARNING: Removing unreachable block (ram,0x00018018d7b9)
// WARNING: Removing unreachable block (ram,0x00018018d7db)
// WARNING: Removing unreachable block (ram,0x00018018d7e3)
// WARNING: Removing unreachable block (ram,0x00018018d3f1)
// WARNING: Removing unreachable block (ram,0x00018018d3f9)
// WARNING: Removing unreachable block (ram,0x00018018d400)
// WARNING: Removing unreachable block (ram,0x00018018d441)
// WARNING: Removing unreachable block (ram,0x00018018d41c)
// WARNING: Removing unreachable block (ram,0x00018018d421)
// WARNING: Removing unreachable block (ram,0x00018018d461)
// WARNING: Removing unreachable block (ram,0x00018018d46f)
// WARNING: Removing unreachable block (ram,0x00018018d4e4)
// WARNING: Removing unreachable block (ram,0x00018018d51e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address