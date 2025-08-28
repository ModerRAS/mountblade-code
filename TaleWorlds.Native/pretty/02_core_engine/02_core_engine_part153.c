#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part153.c - 14 个函数

// 函数: void process_entity_collision(longlong entity_data)
// 处理实体碰撞检测和响应
void process_entity_collision(longlong entity_data)

{
  char *temp_ptr1;
  undefined8 *data_ptr1;
  undefined4 *data_ptr2;
  undefined8 collision_data;
  bool collision_valid;
  longlong entity_offset;
  longlong next_entity;
  bool has_sub_entities;
  char collision_result;
  int entity_id;
  int capacity;
  longlong collision_system;
  longlong collision_entity;
  int new_capacity;
  longlong engine_context;
  char *temp_ptr2;
  undefined1 is_active;
  undefined1 stack_buffer1 [32];
  undefined1 flag1;
  undefined1 flag2;
  undefined8 position_x;
  undefined8 position_y;
  undefined4 collision_flags;
  undefined4 reserved1;
  longlong entity_handle;
  undefined8 velocity_x;
  undefined8 velocity_y;
  undefined4 collision_normal_x;
  undefined4 collision_normal_y;
  undefined4 collision_depth;
  undefined4 collision_time;
  undefined8 stack_var1;
  char collision_buffer1 [168];
  char collision_buffer2 [376];
  ulonglong stack_guard;
  
  engine_context = g_engine_context;
  stack_var1 = 0xfffffffffffffffe;
  stack_guard = g_security_cookie ^ (ulonglong)stack_buffer1;
  if (*(char *)(g_engine_context + 0x1dd0) == '\0') goto cleanup_exit;
  entity_id = *(int *)(entity_data + 8);
  position_x = *(undefined8 *)(entity_data + 0x40);
  position_y = CONCAT44(*(float *)(entity_data + 0x44) + *(float *)(entity_data + 0x4c),
                        *(float *)(entity_data + 0x40) + *(float *)(entity_data + 0x48));
  collision_system = *(longlong *)(g_engine_context + 0x1af8);
  if ((*(longlong *)(g_engine_context + 0x1b10) == 0) ||
     (*(longlong *)(collision_system + 0x3a0) != *(longlong *)(*(longlong *)(g_engine_context + 0x1b10) + 0x3a0)
     )) goto cleanup_exit;
  is_active = 1;
  collision_result = check_collision_bounds(&position_x,&position_y);
  if ((collision_result == '\0') ||
     ((entity_id == *(int *)(engine_context + 0x1dec) || (*(char *)(collision_system + 0xb4) != '\0'))))
  goto cleanup_exit;
  *(undefined4 *)(engine_context + 0x1e20) = (undefined4)position_x;
  *(undefined4 *)(engine_context + 0x1e24) = position_x._4_4_;
  *(undefined4 *)(engine_context + 0x1e28) = (undefined4)position_y;
  *(undefined4 *)(engine_context + 0x1e2c) = position_y._4_4_;
  *(int *)(engine_context + 0x1e30) = entity_id;
  *(undefined1 *)(engine_context + 0x1dd1) = is_active;
  if ((*(int *)(engine_context + 0x1df4) != -1) &&
     (entity_id = strcmp(&DEFAULT_ENTITY_TYPE,engine_context + 0x1df8), entity_id == 0)) {
    collision_data = **(undefined8 **)(engine_context + 0x1de0);
    collision_result = process_collision_data(entity_data,collision_data);
    if ((collision_result != '\0') && (collision_system = get_collision_system(), collision_system != 0)) {
      collision_valid = false;
      collision_system = 0;
      if (*(longlong *)(entity_data + 0x410) == 0) {
        collision_entity = *(longlong *)(entity_data + 0x408);
        if (collision_entity != 0) goto process_entity_collision;
        has_sub_entities = true;
process_complete:
        collision_valid = has_sub_entities;
        position_x = *(undefined8 *)(entity_data + 0x40);
        position_y = CONCAT44(*(float *)(entity_data + 0x44) +
                              *(float *)(engine_context + 0x1660) + *(float *)(engine_context + 0x1660) +
                              *(float *)(engine_context + 0x19f8),
                              *(float *)(entity_data + 0x40) + *(float *)(entity_data + 0x48));
      }
      else {
        collision_entity = find_collision_entity(*(longlong *)(entity_data + 0x410),*(undefined8 *)(engine_context + 0x118));
process_entity_collision:
        collision_system = collision_entity;
        has_sub_entities = false;
        if ((collision_entity == 0) || (collision_entity = *(longlong *)(collision_entity + 0x30), collision_entity == 0))
        goto process_complete;
        position_x = *(undefined8 *)(collision_entity + 0x28);
        position_y = *(undefined8 *)(collision_entity + 0x30);
      }
      if ((*(char *)(engine_context + 0xc1) == '\0') &&
         (collision_result = check_collision_bounds(&position_x,&position_y,1), collision_result == '\0')) {
        is_active = 0;
      }
      else {
        is_active = 1;
      }
      if (((*(char *)(engine_context + 0x1e19) != '\0') || (*(char *)(engine_context + 0x1e1a) != '\0')) &&
         ((collision_system != 0 || (collision_valid)))) {
        initialize_collision_buffer(collision_buffer2 + 0x68);
        initialize_collision_buffer(collision_buffer1);
        temp_ptr1 = collision_buffer2 + 0x68;
        temp_ptr2 = temp_ptr1;
        if ((collision_system != 0) &&
           ((collision_entity = *(longlong *)(collision_system + 8), next_entity = collision_system, collision_entity != 0 ||
            ((*(byte *)(collision_system + 0xa0) & 0x20) != 0)))) {
          while (entity_offset = collision_entity, entity_offset != 0) {
            next_entity = entity_offset;
            collision_entity = *(longlong *)(entity_offset + 8);
          }
          if (next_entity != 0) {
            flag1 = 1;
            flag2 = is_active;
            collision_result = calculate_collision_response(entity_data,next_entity,collision_data,collision_buffer1);
            temp_ptr2 = collision_buffer1;
            if (collision_result == '\0') {
              temp_ptr2 = temp_ptr1;
            }
          }
        }
        flag1 = 0;
        flag2 = is_active;
        calculate_collision_response(entity_data,collision_system,collision_data,collision_buffer2 + 0x68);
        if (temp_ptr2 == collision_buffer1) {
          collision_buffer2[0x110] = 0;
        }
        apply_collision_response(entity_data,collision_system,collision_data,collision_buffer2 + 0x68);
        apply_collision_response(entity_data,collision_system,collision_data,collision_buffer1);
        if ((temp_ptr2[0xa8] != '\0') && (*(char *)(engine_context + 0x1e1a) != '\0')) {
          collision_normal_y = *(undefined4 *)(temp_ptr2 + 0xbc);
          collision_depth = *(undefined4 *)(temp_ptr2 + 0xb8);
          velocity_x = *(undefined8 *)(temp_ptr2 + 0xb0);
          collision_flags = 1;
          collision_time = CONCAT31(collision_time._1_3_,temp_ptr2 == collision_buffer1);
          engine_context = *(longlong *)(engine_context + 0x2df8);
          entity_id = *(int *)(engine_context + 0x10);
          capacity = *(int *)(engine_context + 0x14);
          entity_handle = entity_data;
          velocity_y = collision_data;
          if (entity_id == capacity) {
            if (capacity == 0) {
              capacity = 8;
            }
            else {
              capacity = capacity / 2 + capacity;
            }
            new_capacity = entity_id + 1;
            if (entity_id + 1 < capacity) {
              new_capacity = capacity;
            }
            resize_collision_array(engine_context + 0x10,new_capacity);
            entity_id = *(int *)(engine_context + 0x10);
          }
          collision_entity = (longlong)entity_id * 0x40;
          collision_system = *(longlong *)(engine_context + 0x18);
          *(undefined8 *)(collision_entity + collision_system) = CONCAT44(reserved1,collision_flags);
          ((undefined8 *)(collision_entity + collision_system))[1] = entity_handle;
          data_ptr1 = (undefined8 *)(collision_entity + 0x10 + collision_system);
          *data_ptr1 = velocity_x;
          data_ptr1[1] = velocity_y;
          data_ptr2 = (undefined4 *)(collision_entity + 0x20 + collision_system);
          *data_ptr2 = collision_depth;
          data_ptr2[1] = collision_normal_y;
          data_ptr2[2] = collision_time;
          data_ptr2[3] = collision_normal_x;
          data_ptr1 = (undefined8 *)(collision_entity + 0x30 + collision_system);
          *data_ptr1 = 0;
          data_ptr1[1] = 0;
          *(int *)(engine_context + 0x10) = *(int *)(engine_context + 0x10) + 1;
        }
        cleanup_collision_buffer(collision_buffer1);
        cleanup_collision_buffer(collision_buffer2 + 0x68);
        engine_context = g_engine_context;
      }
    }
  }
  *(undefined1 *)(engine_context + 0x1dd1) = 0;
cleanup_exit:
                    // WARNING: Subroutine does not return
  exit_function(stack_guard ^ (ulonglong)stack_buffer1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void cleanup_collision_resources(longlong resource_ptr, undefined8 param2, undefined8 param3, undefined8 param4)
// 清理碰撞相关的资源
declspec(noinline) void cleanup_collision_resources(longlong resource_ptr, undefined8 param2, undefined8 param3, undefined8 param4)

{
  longlong resource_handle;
  undefined8 cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  release_collision_data(*(undefined8 *)(resource_ptr + 0x30));
  *(undefined8 *)(resource_ptr + 0x30) = 0;
  *(undefined8 *)(resource_ptr + 0x18) = 0;
  *(undefined8 *)(resource_ptr + 0x10) = 0;
  resource_handle = *(longlong *)(resource_ptr + 0x28);
  if (resource_handle != 0) {
    if (g_engine_context != 0) {
      *(int *)(g_engine_context + 0x3a8) = *(int *)(g_engine_context + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    deallocate_memory(resource_handle,g_engine_base,param3,param4,cleanup_flag);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void update_entity_collision_flags(int entity_type, undefined4 collision_flag)
// 更新实体的碰撞标志
void update_entity_collision_flags(int entity_type, undefined4 collision_flag)

{
  longlong entity_list;
  longlong entity_data;
  ulonglong entity_index;
  ulonglong list_index;
  uint entity_count;
  ulonglong array_index;
  
  entity_list = g_engine_context;
  entity_index = 0;
  list_index = entity_index;
  array_index = entity_index;
  if (0 < *(int *)(g_engine_context + 0x1aa0)) {
    do {
      entity_data = *(longlong *)(array_index + *(longlong *)(entity_list + 0x1aa8));
      if ((*(int *)(entity_data + 0x418) == entity_type) && (*(longlong *)(entity_data + 0x408) == 0)) {
        *(undefined4 *)(entity_data + 0x418) = collision_flag;
      }
      entity_count = (int)list_index + 1;
      list_index = (ulonglong)entity_count;
      array_index = array_index + 8;
    } while ((int)entity_count < *(int *)(entity_list + 0x1aa0));
  }
  list_index = entity_index;
  if (0 < *(int *)(entity_list + 0x2e28)) {
    do {
      if (*(int *)(entity_index + 0x28 + *(longlong *)(entity_list + 0x2e30)) == entity_type) {
        *(undefined4 *)(entity_index + 0x28 + *(longlong *)(entity_list + 0x2e30)) = collision_flag;
      }
      entity_count = (int)list_index + 1;
      entity_index = entity_index + 0x38;
      list_index = (ulonglong)entity_count;
    } while ((int)entity_count < *(int *)(entity_list + 0x2e28));
  }
  return;
}





// 函数: void parse_collision_command(longlong command_context, undefined8 param2, undefined8 param3, char *command_string)
// 解析碰撞相关的命令字符串
void parse_collision_command(longlong command_context, undefined8 param2, undefined8 param3, char *command_string)

{
  undefined8 *data_ptr;
  longlong entity_table;
  int parse_result;
  longlong table_data;
  int *entity_id_ptr;
  ulonglong entity_index;
  int entity_count;
  ulonglong table_index;
  int table_capacity;
  char axis_buffer [8];
  int command_id;
  int entity_id;
  undefined4 position_x;
  undefined4 position_y;
  undefined4 position_z;
  int collision_type;
  undefined4 collision_data;
  undefined1 axis_index;
  char collision_flag;
  undefined1 is_relative;
  undefined1 has_rotation;
  undefined1 has_scale;
  undefined1 is_dynamic;
  undefined4 velocity_x;
  undefined2 velocity_y;
  undefined2 velocity_z;
  undefined4 rotation;
  undefined2 rotation_y;
  
  entity_index = 0;
  axis_buffer[0] = '\0';
  entity_id = 0;
  position_x = 0;
  command_id = 0;
  velocity_x = 0;
  velocity_y = 0;
  velocity_z = 0;
  rotation = 0;
  collision_type = 0;
  collision_data = 0;
  has_rotation = 0;
  has_scale = 0;
  is_relative = 0;
  axis_index = 0xff;
  collision_flag = '\0';
  for (; (*command_string == ' ' || (*command_string == '\t')); command_string = command_string + 1) {
  }
  entity_count = 8;
  parse_result = strncmp(command_string,&COLLISION_CREATE_CMD,8);
  if (parse_result == 0) {
    for (command_string = command_string + 8; (*command_string == ' ' || (*command_string == '\t')); command_string = command_string + 1) {
    }
  }
  else {
    parse_result = strncmp(command_string,&COLLISION_UPDATE_CMD,9);
    if (parse_result != 0) {
      return;
    }
    for (command_string = command_string + 9; (*command_string == ' ' || (*command_string == '\t')); command_string = command_string + 1) {
    }
    is_relative = 1;
  }
  parse_result = parse_command_token(command_string,&ENTITY_TYPE_TOKEN,&collision_data,&command_id);
  if (parse_result != 1) {
    return;
  }
  command_string = command_string + command_id;
  parse_result = parse_command_token(command_string,&ENTITY_ID_TOKEN,&collision_type,&command_id);
  if (parse_result == 1) {
    command_string = command_string + command_id;
    if (collision_type == 0) {
      return;
    }
  }
  else if (collision_type == 0) {
    parse_result = parse_command_token(command_string,&POSITION_TOKEN,&entity_id,&position_x,&command_id);
    if (parse_result != 2) {
      return;
    }
    table_data = (longlong)command_id;
    position_y = CONCAT22((undefined2)position_x,(short)entity_id);
    entity_id_ptr = &command_id;
    velocity_x = position_y;
    parse_result = parse_command_token(command_string + table_data,&POSITION_Z_TOKEN,&entity_id,&position_x,entity_id_ptr);
    if (parse_result != 2) {
      return;
    }
    command_string = command_string + table_data + command_id;
    velocity_y = (undefined2)entity_id;
    position_y = CONCAT22((undefined2)position_x,velocity_y);
    velocity_z = (undefined2)position_x;
    goto store_collision_data;
  }
  entity_id_ptr = &command_id;
  parse_result = parse_command_token(command_string,&ROTATION_TOKEN,&entity_id,&position_x,entity_id_ptr);
  if (parse_result == 2) {
    command_string = command_string + command_id;
    position_y = CONCAT22((undefined2)position_x,(short)entity_id);
    rotation = position_y;
  }
store_collision_data:
  parse_result = parse_command_token(command_string,&AXIS_TOKEN,axis_buffer,&command_id,entity_id_ptr);
  if (parse_result == 1) {
    command_string = command_string + command_id;
    if (axis_buffer[0] == 'X') {
      axis_index = 0;
    }
    else if (axis_buffer[0] == 'Y') {
      axis_index = 1;
    }
  }
  parse_result = parse_command_token(command_string,&DYNAMIC_FLAG,&entity_id,&command_id,entity_id_ptr);
  if (parse_result == 1) {
    command_string = command_string + command_id;
    has_rotation = entity_id != 0;
  }
  parse_result = parse_command_token(command_string,&SCALE_FLAG,&entity_id,&command_id,entity_id_ptr);
  if (parse_result == 1) {
    command_string = command_string + command_id;
    has_scale = entity_id != 0;
  }
  parse_command_token(command_string,&VELOCITY_TOKEN,&collision_data,&command_id);
  table_data = *(longlong *)(command_context + 0x2df8);
  if ((collision_type != 0) && (0 < *(int *)(table_data + 0x20))) {
    entity_id_ptr = *(int **)(table_data + 0x28);
    table_index = entity_index;
    do {
      if (*entity_id_ptr == collision_type) {
        entity_id_ptr = *(int **)(table_data + 0x28) + (longlong)(int)table_index * 8;
        if (entity_id_ptr != (int *)0x0) {
          collision_flag = *(char *)((longlong)entity_id_ptr + 0xd) + '\x01';
        }
        break;
      }
      table_index = (ulonglong)((int)table_index + 1);
      entity_index = entity_index + 1;
      entity_id_ptr = entity_id_ptr + 8;
    } while ((longlong)entity_index < (longlong)*(int *)(table_data + 0x20));
  }
  parse_result = *(int *)(table_data + 0x20);
  table_capacity = *(int *)(table_data + 0x24);
  if (parse_result == table_capacity) {
    if (table_capacity != 0) {
      entity_count = table_capacity + table_capacity / 2;
    }
    table_capacity = parse_result + 1;
    if (parse_result + 1 < entity_count) {
      table_capacity = entity_count;
    }
    resize_entity_table(table_data + 0x20,table_capacity);
    parse_result = *(int *)(table_data + 0x20);
  }
  entity_table = *(longlong *)(table_data + 0x28);
  data_ptr = (undefined8 *)((longlong)parse_result * 0x20 + entity_table);
  *data_ptr = CONCAT44(collision_type,collision_data);
  data_ptr[1] = CONCAT17(has_rotation,
                       CONCAT16(is_relative,CONCAT15(collision_flag,CONCAT14(axis_index,collision_data))));
  data_ptr = (undefined8 *)((longlong)parse_result * 0x20 + 0x10 + entity_table);
  *data_ptr = CONCAT26(velocity_y,CONCAT42(velocity_x,CONCAT11(is_dynamic,has_scale)));
  data_ptr[1] = CONCAT26(rotation_y,CONCAT42(rotation,velocity_z));
  *(int *)(table_data + 0x20) = *(int *)(table_data + 0x20) + 1;
  return;
}





// 函数: void process_collision_entities(longlong collision_system, undefined4 *entity_data, int entity_index)
// 处理碰撞实体数据
void process_collision_entities(longlong collision_system, undefined4 *entity_data, int entity_index)

{
  undefined4 *data_ptr1;
  uint *data_ptr2;
  float position_x;
  float position_y;
  float position_z;
  float velocity_x;
  float velocity_y;
  float velocity_z;
  undefined1 collision_type;
  byte entity_flags;
  undefined4 entity_id;
  undefined4 entity_type;
  longlong array_offset;
  int current_count;
  int max_count;
  int new_capacity;
  undefined4 collision_flags;
  undefined4 entity_properties;
  undefined1 reserved_byte;
  undefined2 velocity_flags;
  
  while( true ) {
    uVar11 = *param_2;
    if (*(undefined4 **)(param_2 + 2) == (undefined4 *)0x0) {
      uStack_44 = 0;
    }
    else {
      uStack_44 = **(undefined4 **)(param_2 + 2);
    }
    uVar12 = param_2[0x26];
    if (*(longlong *)(param_2 + 4) == 0) {
      uVar9 = 0xff;
    }
    else {
      uVar9 = *(undefined1 *)(param_2 + 0x14);
    }
    bVar10 = *(byte *)(param_2 + 0x28);
    iVar14 = *(int *)(param_1 + 0x24);
    uStack_3c._0_2_ = CONCAT11((char)param_3,uVar9);
    uStack_3c = CONCAT13(bVar10 >> 5,CONCAT12(bVar10 >> 4,(undefined2)uStack_3c)) & 0x101ffff;
    fVar3 = (float)param_2[0xe];
    fVar4 = (float)param_2[0xf];
    fVar5 = (float)param_2[0x10];
    fVar6 = (float)param_2[0x11];
    fVar7 = (float)param_2[0x12];
    fVar8 = (float)param_2[0x13];
    iVar15 = *(int *)(param_1 + 0x20);
    if (iVar15 == iVar14) {
      if (iVar14 == 0) {
        iVar14 = 8;
      }
      else {
        iVar14 = iVar14 / 2 + iVar14;
      }
      iVar16 = iVar15 + 1;
      if (iVar15 + 1 < iVar14) {
        iVar16 = iVar14;
      }
      FUN_18013da40(param_1 + 0x20,iVar16);
      iVar15 = *(int *)(param_1 + 0x20);
    }
    lVar13 = *(longlong *)(param_1 + 0x28);
    puVar1 = (undefined4 *)((longlong)iVar15 * 0x20 + lVar13);
    *puVar1 = uVar11;
    puVar1[1] = uStack_44;
    puVar1[2] = uVar12;
    puVar1[3] = uStack_3c;
    puVar2 = (uint *)((longlong)iVar15 * 0x20 + 0x10 + lVar13);
    *puVar2 = CONCAT22((short)(int)fVar3,CONCAT11(uStack_37,bVar10 >> 6)) & 0xffffff01;
    puVar2[1] = CONCAT22((short)(int)fVar5,(short)(int)fVar4);
    puVar2[2] = CONCAT22((short)(int)fVar7,(short)(int)fVar6);
    puVar2[3] = CONCAT22(uStack_2a,(short)(int)fVar8);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    if (*(longlong *)(param_2 + 4) != 0) {
      FUN_18013c380(param_1,*(longlong *)(param_2 + 4),param_3 + 1);
    }
    param_2 = *(undefined4 **)(param_2 + 6);
    if (param_2 == (undefined4 *)0x0) break;
    param_3 = param_3 + 1;
  }
  return;
}





// 函数: void FUN_18013c4e0(longlong param_1,undefined8 *param_2,undefined8 param_3)
void FUN_18013c4e0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  char *pcVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined *puVar12;
  
  piVar2 = *(int **)(param_1 + 0x2df8);
  if ((*(byte *)(param_1 + 8) & 0x40) != 0) {
    iVar4 = piVar2[9];
    if (iVar4 < 0) {
      iVar4 = iVar4 / 2 + iVar4;
      iVar7 = 0;
      if (0 < iVar4) {
        iVar7 = iVar4;
      }
      FUN_18013da40(piVar2 + 8,iVar7);
    }
    piVar2[8] = 0;
    FUN_18013da40(piVar2 + 8,*piVar2);
    iVar4 = 0;
    if (0 < *piVar2) {
      lVar8 = 0;
      do {
        lVar3 = *(longlong *)(lVar8 + 8 + *(longlong *)(piVar2 + 2));
        if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) == 0)) {
          FUN_18013c380(piVar2,lVar3,0);
        }
        iVar4 = iVar4 + 1;
        lVar8 = lVar8 + 0x10;
      } while (iVar4 < *piVar2);
    }
    lVar8 = (longlong)piVar2[8];
    iVar4 = 0;
    if (0 < lVar8) {
      pcVar6 = (char *)(*(longlong *)(piVar2 + 10) + 0xd);
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 0x20;
        if (iVar4 <= cVar1) {
          iVar4 = (int)cVar1;
        }
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    FUN_180122210(param_3,&UNK_180a066b8,*param_2);
    iVar7 = 0;
    if (0 < piVar2[8]) {
      lVar8 = 0;
      do {
        lVar3 = *(longlong *)(piVar2 + 10);
        puVar5 = &UNK_180a066a8;
        puVar12 = &DAT_18098bc73;
        iVar9 = (int)*(char *)(lVar8 + 0xd + lVar3);
        iVar11 = (iVar4 - iVar9) * 2;
        if (*(char *)(lVar8 + 0xe + lVar3) != '\0') {
          puVar5 = &UNK_180a065f0;
        }
        FUN_180122210(param_3,&UNK_180a066d8,iVar9 * 2,&DAT_18098bc73,puVar5,iVar11,&DAT_18098bc73);
        uVar10 = (undefined4)((ulonglong)puVar5 >> 0x20);
        FUN_180122210(param_3,&UNK_180a066c8,*(undefined4 *)(lVar8 + lVar3));
        iVar9 = *(int *)(lVar8 + 4 + lVar3);
        if (iVar9 == 0) {
          FUN_180122210(param_3,&UNK_180a066e8,(int)*(short *)(lVar8 + 0x12 + lVar3),
                        (int)*(short *)(lVar8 + 0x14 + lVar3),
                        CONCAT44(uVar10,(int)*(short *)(lVar8 + 0x16 + lVar3)),
                        (int)*(short *)(lVar8 + 0x18 + lVar3),puVar12);
        }
        else {
          FUN_180122210(param_3,&UNK_180a06700,iVar9,(int)*(short *)(lVar8 + 0x1a + lVar3),
                        CONCAT44(uVar10,(int)*(short *)(lVar8 + 0x1c + lVar3)),iVar11,puVar12);
        }
        cVar1 = *(char *)(lVar8 + 0xc + lVar3);
        if (cVar1 != -1) {
          FUN_180122210(param_3,&UNK_180a06730,(cVar1 != '\0') + 'X');
        }
        if (*(char *)(lVar8 + 0xf + lVar3) != '\0') {
          FUN_180122210(param_3,&UNK_180a06720);
        }
        if (*(char *)(lVar8 + 0x10 + lVar3) != '\0') {
          FUN_180122210(param_3,&UNK_180a06758);
        }
        if (*(int *)(lVar8 + 8 + lVar3) != 0) {
          FUN_180122210(param_3,&UNK_180a06740);
        }
        FUN_180122210(param_3,&DAT_1809fcc18);
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 0x20;
      } while (iVar7 < piVar2[8]);
    }
    FUN_180122210(param_3,&DAT_1809fcc18);
  }
  return;
}





// 函数: void FUN_18013c504(int param_1)
void FUN_18013c504(int param_1)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  int *unaff_R14;
  
  if (param_1 < 0) {
    param_1 = param_1 / 2 + param_1;
    iVar4 = 0;
    if (0 < param_1) {
      iVar4 = param_1;
    }
    FUN_18013da40(unaff_R14 + 8,iVar4);
  }
  unaff_R14[8] = 0;
  FUN_18013da40(unaff_R14 + 8,*unaff_R14);
  iVar4 = 0;
  if (0 < *unaff_R14) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar6 + 8 + *(longlong *)(unaff_R14 + 2));
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == 0)) {
        FUN_18013c380();
      }
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 0x10;
    } while (iVar4 < *unaff_R14);
  }
  lVar6 = (longlong)unaff_R14[8];
  cVar5 = '\0';
  if (0 < lVar6) {
    pcVar3 = (char *)(*(longlong *)(unaff_R14 + 10) + 0xd);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 0x20;
      if (cVar5 <= cVar1) {
        cVar5 = cVar1;
      }
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  FUN_180122210();
  iVar4 = 0;
  if (0 < unaff_R14[8]) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(unaff_R14 + 10);
      FUN_180122210();
      FUN_180122210();
      if (*(int *)(lVar6 + 4 + lVar2) == 0) {
        FUN_180122210();
      }
      else {
        FUN_180122210();
      }
      if (*(char *)(lVar6 + 0xc + lVar2) != -1) {
        FUN_180122210();
      }
      if (*(char *)(lVar6 + 0xf + lVar2) != '\0') {
        FUN_180122210();
      }
      if (*(char *)(lVar6 + 0x10 + lVar2) != '\0') {
        FUN_180122210();
      }
      if (*(int *)(lVar6 + 8 + lVar2) != 0) {
        FUN_180122210();
      }
      FUN_180122210();
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 0x20;
    } while (iVar4 < unaff_R14[8]);
  }
  FUN_180122210();
  return;
}





// 函数: void FUN_18013c5c1(void)
void FUN_18013c5c1(void)

{
  longlong lVar1;
  int unaff_EBP;
  int unaff_ESI;
  longlong lVar2;
  longlong unaff_R14;
  int iStack0000000000000028;
  undefined *puStack0000000000000030;
  
  lVar2 = 0;
  do {
    lVar1 = *(longlong *)(unaff_R14 + 0x28);
    puStack0000000000000030 = &DAT_18098bc73;
    iStack0000000000000028 = (unaff_ESI - *(char *)(lVar2 + 0xd + lVar1)) * 2;
    FUN_180122210();
    FUN_180122210();
    if (*(int *)(lVar2 + 4 + lVar1) == 0) {
      iStack0000000000000028 = (int)*(short *)(lVar2 + 0x18 + lVar1);
      FUN_180122210();
    }
    else {
      FUN_180122210();
    }
    if (*(char *)(lVar2 + 0xc + lVar1) != -1) {
      FUN_180122210();
    }
    if (*(char *)(lVar2 + 0xf + lVar1) != '\0') {
      FUN_180122210();
    }
    if (*(char *)(lVar2 + 0x10 + lVar1) != '\0') {
      FUN_180122210();
    }
    if (*(int *)(lVar2 + 8 + lVar1) != 0) {
      FUN_180122210();
    }
    FUN_180122210();
    unaff_EBP = unaff_EBP + 1;
    lVar2 = lVar2 + 0x20;
  } while (unaff_EBP < *(int *)(unaff_R14 + 0x20));
  FUN_180122210();
  return;
}





// 函数: void FUN_18013c732(void)
void FUN_18013c732(void)

{
  FUN_180122210();
  return;
}





// 函数: void FUN_18013c750(void)
void FUN_18013c750(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013c760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18013c760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  
  if (*(char *)(_DAT_180c8a9b0 + 0x2e38) != '\0') {
    lVar1 = *(longlong *)(_DAT_180c8a9b0 + 0x2e40);
    uStackX_10 = param_2;
    uStackX_18 = param_3;
    uStackX_20 = param_4;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)func_0x00018004b9a0();
      __stdio_common_vfprintf(*puVar2,lVar1,param_1,0,&uStackX_10);
      return;
    }
    FUN_180122240(_DAT_180c8a9b0 + 0x2e48,param_1,&uStackX_10);
  }
  return;
}





// 函数: void FUN_18013c78b(longlong param_1)
void FUN_18013c78b(longlong param_1)

{
  longlong lVar1;
  longlong in_RAX;
  undefined8 *puVar2;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  
  *(undefined8 *)(in_RAX + -0x10) = unaff_RSI;
  *(undefined8 *)(in_RAX + -0x18) = unaff_RDI;
  lVar1 = *(longlong *)(param_1 + 0x2e40);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)func_0x00018004b9a0();
    __stdio_common_vfprintf(*puVar2,lVar1);
    return;
  }
  FUN_180122240(param_1 + 0x2e48);
  return;
}





// 函数: void FUN_18013c7cf(longlong param_1)
void FUN_18013c7cf(longlong param_1)

{
  FUN_180122240(param_1 + 0x2e48);
  return;
}





// 函数: void FUN_18013c7eb(void)
void FUN_18013c7eb(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



