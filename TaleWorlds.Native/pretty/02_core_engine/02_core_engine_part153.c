#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part153.c - 14 个函数

// 全局常量定义
#define DEFAULT_ENTITY_TYPE "default_entity"
#define COLLISION_CREATE_CMD "collision_"
#define COLLISION_UPDATE_CMD "update_coll"
#define ENTITY_TYPE_TOKEN "entity_type"
#define ENTITY_ID_TOKEN "entity_id"
#define POSITION_TOKEN "position"
#define POSITION_Z_TOKEN "position_z"
#define ROTATION_TOKEN "rotation"
#define AXIS_TOKEN "axis"
#define DYNAMIC_FLAG "dynamic"
#define SCALE_FLAG "scale"
#define VELOCITY_TOKEN "velocity"

// 全局变量
extern int64_t g_engine_context;      // 引擎上下文
extern int64_t g_engine_base;         // 引擎基地址
extern int64_t g_security_cookie;     // 安全Cookie

// 函数: void process_entity_collision(int64_t entity_data)
// 处理实体碰撞检测和响应
void process_entity_collision(int64_t entity_data)

{
  char *temp_ptr1;
  uint64_t *data_ptr1;
  int32_t *data_ptr2;
  uint64_t collision_data;
  bool collision_valid;
  int64_t entity_offset;
  int64_t next_entity;
  bool has_sub_entities;
  char collision_result;
  int entity_id;
  int capacity;
  int64_t collision_system;
  int64_t collision_entity;
  int new_capacity;
  int64_t engine_context;
  char *temp_ptr2;
  int8_t is_active;
  int8_t stack_buffer1 [32];
  int8_t flag1;
  int8_t flag2;
  uint64_t position_x;
  uint64_t position_y;
  int32_t collision_flags;
  int32_t reserved1;
  int64_t entity_handle;
  uint64_t velocity_x;
  uint64_t velocity_y;
  int32_t collision_normal_x;
  int32_t collision_normal_y;
  int32_t collision_depth;
  int32_t collision_time;
  uint64_t stack_var1;
  char collision_buffer1 [168];
  char collision_buffer2 [376];
  uint64_t stack_guard;
  
  engine_context = g_engine_context;
  stack_var1 = 0xfffffffffffffffe;
  stack_guard = g_security_cookie ^ (uint64_t)stack_buffer1;
  if (*(char *)(g_engine_context + 0x1dd0) == '\0') goto cleanup_exit;
  entity_id = *(int *)(entity_data + 8);
  position_x = *(uint64_t *)(entity_data + 0x40);
  position_y = CONCAT44(*(float *)(entity_data + 0x44) + *(float *)(entity_data + 0x4c),
                        *(float *)(entity_data + 0x40) + *(float *)(entity_data + 0x48));
  collision_system = *(int64_t *)(g_engine_context + 0x1af8);
  if ((*(int64_t *)(g_engine_context + 0x1b10) == 0) ||
     (*(int64_t *)(collision_system + 0x3a0) != *(int64_t *)(*(int64_t *)(g_engine_context + 0x1b10) + 0x3a0)
     )) goto cleanup_exit;
  is_active = 1;
  collision_result = check_collision_bounds(&position_x,&position_y);
  if ((collision_result == '\0') ||
     ((entity_id == *(int *)(engine_context + 0x1dec) || (*(char *)(collision_system + 0xb4) != '\0'))))
  goto cleanup_exit;
  *(int32_t *)(engine_context + 0x1e20) = (int32_t)position_x;
  *(int32_t *)(engine_context + 0x1e24) = position_x._4_4_;
  *(int32_t *)(engine_context + 0x1e28) = (int32_t)position_y;
  *(int32_t *)(engine_context + 0x1e2c) = position_y._4_4_;
  *(int *)(engine_context + 0x1e30) = entity_id;
  *(int8_t *)(engine_context + 0x1dd1) = is_active;
  if ((*(int *)(engine_context + 0x1df4) != -1) &&
     (entity_id = strcmp(&DEFAULT_ENTITY_TYPE,engine_context + 0x1df8), entity_id == 0)) {
    collision_data = **(uint64_t **)(engine_context + 0x1de0);
    collision_result = process_collision_data(entity_data,collision_data);
    if ((collision_result != '\0') && (collision_system = get_collision_system(), collision_system != 0)) {
      collision_valid = false;
      collision_system = 0;
      if (*(int64_t *)(entity_data + 0x410) == 0) {
        collision_entity = *(int64_t *)(entity_data + 0x408);
        if (collision_entity != 0) goto process_entity_collision;
        has_sub_entities = true;
process_complete:
        collision_valid = has_sub_entities;
        position_x = *(uint64_t *)(entity_data + 0x40);
        position_y = CONCAT44(*(float *)(entity_data + 0x44) +
                              *(float *)(engine_context + 0x1660) + *(float *)(engine_context + 0x1660) +
                              *(float *)(engine_context + 0x19f8),
                              *(float *)(entity_data + 0x40) + *(float *)(entity_data + 0x48));
      }
      else {
        collision_entity = find_collision_entity(*(int64_t *)(entity_data + 0x410),*(uint64_t *)(engine_context + 0x118));
process_entity_collision:
        collision_system = collision_entity;
        has_sub_entities = false;
        if ((collision_entity == 0) || (collision_entity = *(int64_t *)(collision_entity + 0x30), collision_entity == 0))
        goto process_complete;
        position_x = *(uint64_t *)(collision_entity + 0x28);
        position_y = *(uint64_t *)(collision_entity + 0x30);
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
           ((collision_entity = *(int64_t *)(collision_system + 8), next_entity = collision_system, collision_entity != 0 ||
            ((*(byte *)(collision_system + 0xa0) & 0x20) != 0)))) {
          while (entity_offset = collision_entity, entity_offset != 0) {
            next_entity = entity_offset;
            collision_entity = *(int64_t *)(entity_offset + 8);
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
          collision_normal_y = *(int32_t *)(temp_ptr2 + 0xbc);
          collision_depth = *(int32_t *)(temp_ptr2 + 0xb8);
          velocity_x = *(uint64_t *)(temp_ptr2 + 0xb0);
          collision_flags = 1;
          collision_time = CONCAT31(collision_time._1_3_,temp_ptr2 == collision_buffer1);
          engine_context = *(int64_t *)(engine_context + 0x2df8);
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
          collision_entity = (int64_t)entity_id * 0x40;
          collision_system = *(int64_t *)(engine_context + 0x18);
          *(uint64_t *)(collision_entity + collision_system) = CONCAT44(reserved1,collision_flags);
          ((uint64_t *)(collision_entity + collision_system))[1] = entity_handle;
          data_ptr1 = (uint64_t *)(collision_entity + 0x10 + collision_system);
          *data_ptr1 = velocity_x;
          data_ptr1[1] = velocity_y;
          data_ptr2 = (int32_t *)(collision_entity + 0x20 + collision_system);
          *data_ptr2 = collision_depth;
          data_ptr2[1] = collision_normal_y;
          data_ptr2[2] = collision_time;
          data_ptr2[3] = collision_normal_x;
          data_ptr1 = (uint64_t *)(collision_entity + 0x30 + collision_system);
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
  *(int8_t *)(engine_context + 0x1dd1) = 0;
cleanup_exit:
                    // WARNING: Subroutine does not return
  exit_function(stack_guard ^ (uint64_t)stack_buffer1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void cleanup_collision_resources(int64_t resource_ptr, uint64_t param2, uint64_t param3, uint64_t param4)
// 清理碰撞相关的资源
declspec(noinline) void cleanup_collision_resources(int64_t resource_ptr, uint64_t param2, uint64_t param3, uint64_t param4)

{
  int64_t resource_handle;
  uint64_t cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  release_collision_data(*(uint64_t *)(resource_ptr + 0x30));
  *(uint64_t *)(resource_ptr + 0x30) = 0;
  *(uint64_t *)(resource_ptr + 0x18) = 0;
  *(uint64_t *)(resource_ptr + 0x10) = 0;
  resource_handle = *(int64_t *)(resource_ptr + 0x28);
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



// 函数: void update_entity_collision_flags(int entity_type, int32_t collision_flag)
// 更新实体的碰撞标志
void update_entity_collision_flags(int entity_type, int32_t collision_flag)

{
  int64_t entity_list;
  int64_t entity_data;
  uint64_t entity_index;
  uint64_t list_index;
  uint entity_count;
  uint64_t array_index;
  
  entity_list = g_engine_context;
  entity_index = 0;
  list_index = entity_index;
  array_index = entity_index;
  if (0 < *(int *)(g_engine_context + 0x1aa0)) {
    do {
      entity_data = *(int64_t *)(array_index + *(int64_t *)(entity_list + 0x1aa8));
      if ((*(int *)(entity_data + 0x418) == entity_type) && (*(int64_t *)(entity_data + 0x408) == 0)) {
        *(int32_t *)(entity_data + 0x418) = collision_flag;
      }
      entity_count = (int)list_index + 1;
      list_index = (uint64_t)entity_count;
      array_index = array_index + 8;
    } while ((int)entity_count < *(int *)(entity_list + 0x1aa0));
  }
  list_index = entity_index;
  if (0 < *(int *)(entity_list + 0x2e28)) {
    do {
      if (*(int *)(entity_index + 0x28 + *(int64_t *)(entity_list + 0x2e30)) == entity_type) {
        *(int32_t *)(entity_index + 0x28 + *(int64_t *)(entity_list + 0x2e30)) = collision_flag;
      }
      entity_count = (int)list_index + 1;
      entity_index = entity_index + 0x38;
      list_index = (uint64_t)entity_count;
    } while ((int)entity_count < *(int *)(entity_list + 0x2e28));
  }
  return;
}





// 函数: void parse_collision_command(int64_t command_context, uint64_t param2, uint64_t param3, char *command_string)
// 解析碰撞相关的命令字符串
void parse_collision_command(int64_t command_context, uint64_t param2, uint64_t param3, char *command_string)

{
  uint64_t *data_ptr;
  int64_t entity_table;
  int parse_result;
  int64_t table_data;
  int *entity_id_ptr;
  uint64_t entity_index;
  int entity_count;
  uint64_t table_index;
  int table_capacity;
  char axis_buffer [8];
  int command_id;
  int entity_id;
  int32_t position_x;
  int32_t position_y;
  int32_t position_z;
  int collision_type;
  int32_t collision_data;
  int8_t axis_index;
  char collision_flag;
  int8_t is_relative;
  int8_t has_rotation;
  int8_t has_scale;
  int8_t is_dynamic;
  int32_t velocity_x;
  int16_t velocity_y;
  int16_t velocity_z;
  int32_t rotation;
  int16_t rotation_y;
  
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
    table_data = (int64_t)command_id;
    position_y = CONCAT22((int16_t)position_x,(short)entity_id);
    entity_id_ptr = &command_id;
    velocity_x = position_y;
    parse_result = parse_command_token(command_string + table_data,&POSITION_Z_TOKEN,&entity_id,&position_x,entity_id_ptr);
    if (parse_result != 2) {
      return;
    }
    command_string = command_string + table_data + command_id;
    velocity_y = (int16_t)entity_id;
    position_y = CONCAT22((int16_t)position_x,velocity_y);
    velocity_z = (int16_t)position_x;
    goto store_collision_data;
  }
  entity_id_ptr = &command_id;
  parse_result = parse_command_token(command_string,&ROTATION_TOKEN,&entity_id,&position_x,entity_id_ptr);
  if (parse_result == 2) {
    command_string = command_string + command_id;
    position_y = CONCAT22((int16_t)position_x,(short)entity_id);
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
  table_data = *(int64_t *)(command_context + 0x2df8);
  if ((collision_type != 0) && (0 < *(int *)(table_data + 0x20))) {
    entity_id_ptr = *(int **)(table_data + 0x28);
    table_index = entity_index;
    do {
      if (*entity_id_ptr == collision_type) {
        entity_id_ptr = *(int **)(table_data + 0x28) + (int64_t)(int)table_index * 8;
        if (entity_id_ptr != (int *)0x0) {
          collision_flag = *(char *)((int64_t)entity_id_ptr + 0xd) + '\x01';
        }
        break;
      }
      table_index = (uint64_t)((int)table_index + 1);
      entity_index = entity_index + 1;
      entity_id_ptr = entity_id_ptr + 8;
    } while ((int64_t)entity_index < (int64_t)*(int *)(table_data + 0x20));
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
  entity_table = *(int64_t *)(table_data + 0x28);
  data_ptr = (uint64_t *)((int64_t)parse_result * 0x20 + entity_table);
  *data_ptr = CONCAT44(collision_type,collision_data);
  data_ptr[1] = CONCAT17(has_rotation,
                       CONCAT16(is_relative,CONCAT15(collision_flag,CONCAT14(axis_index,collision_data))));
  data_ptr = (uint64_t *)((int64_t)parse_result * 0x20 + 0x10 + entity_table);
  *data_ptr = CONCAT26(velocity_y,CONCAT42(velocity_x,CONCAT11(is_dynamic,has_scale)));
  data_ptr[1] = CONCAT26(rotation_y,CONCAT42(rotation,velocity_z));
  *(int *)(table_data + 0x20) = *(int *)(table_data + 0x20) + 1;
  return;
}





// 函数: void process_collision_entities(int64_t collision_system, int32_t *entity_data, int entity_index)
// 处理碰撞实体数据
void process_collision_entities(int64_t collision_system, int32_t *entity_data, int entity_index)

{
  int32_t *data_ptr1;
  uint *data_ptr2;
  float position_x;
  float position_y;
  float position_z;
  float velocity_x;
  float velocity_y;
  float velocity_z;
  int8_t collision_type;
  byte entity_flags;
  int32_t entity_id;
  int32_t entity_type;
  int64_t array_offset;
  int current_count;
  int max_count;
  int new_capacity;
  int32_t collision_flags;
  int32_t entity_properties;
  int8_t reserved_byte;
  int16_t velocity_flags;
  
  while( true ) {
    entity_id = *entity_data;
    if (*(int32_t **)(entity_data + 2) == (int32_t *)0x0) {
      collision_flags = 0;
    }
    else {
      collision_flags = **(int32_t **)(entity_data + 2);
    }
    entity_type = entity_data[0x26];
    if (*(int64_t *)(entity_data + 4) == 0) {
      collision_type = 0xff;
    }
    else {
      collision_type = *(int8_t *)(entity_data + 0x14);
    }
    entity_flags = *(byte *)(entity_data + 0x28);
    current_count = *(int *)(collision_system + 0x24);
    entity_properties._0_2_ = CONCAT11((char)entity_index,collision_type);
    entity_properties = CONCAT13(entity_flags >> 5,CONCAT12(entity_flags >> 4,(int16_t)entity_properties)) & 0x101ffff;
    position_x = (float)entity_data[0xe];
    position_y = (float)entity_data[0xf];
    position_z = (float)entity_data[0x10];
    velocity_x = (float)entity_data[0x11];
    velocity_y = (float)entity_data[0x12];
    velocity_z = (float)entity_data[0x13];
    max_count = *(int *)(collision_system + 0x20);
    if (max_count == current_count) {
      if (current_count == 0) {
        current_count = 8;
      }
      else {
        current_count = current_count / 2 + current_count;
      }
      new_capacity = max_count + 1;
      if (max_count + 1 < current_count) {
        new_capacity = current_count;
      }
      resize_collision_array(collision_system + 0x20,new_capacity);
      max_count = *(int *)(collision_system + 0x20);
    }
    array_offset = *(int64_t *)(collision_system + 0x28);
    data_ptr1 = (int32_t *)((int64_t)max_count * 0x20 + array_offset);
    *data_ptr1 = entity_id;
    data_ptr1[1] = collision_flags;
    data_ptr1[2] = entity_type;
    data_ptr1[3] = entity_properties;
    data_ptr2 = (uint *)((int64_t)max_count * 0x20 + 0x10 + array_offset);
    *data_ptr2 = CONCAT22((short)(int)position_x,CONCAT11(reserved_byte,entity_flags >> 6)) & 0xffffff01;
    data_ptr2[1] = CONCAT22((short)(int)position_z,(short)(int)position_y);
    data_ptr2[2] = CONCAT22((short)(int)velocity_y,(short)(int)velocity_x);
    data_ptr2[3] = CONCAT22(velocity_flags,(short)(int)velocity_z);
    *(int *)(collision_system + 0x20) = *(int *)(collision_system + 0x20) + 1;
    if (*(int64_t *)(entity_data + 4) != 0) {
      process_collision_entities(collision_system,*(int64_t *)(entity_data + 4),entity_index + 1);
    }
    entity_data = *(int32_t **)(entity_data + 6);
    if (entity_data == (int32_t *)0x0) break;
    entity_index = entity_index + 1;
  }
  return;
}





// 函数: void generate_collision_report(int64_t report_context, uint64_t *collision_data, uint64_t output_buffer)
// 生成碰撞报告
void generate_collision_report(int64_t report_context, uint64_t *collision_data, uint64_t output_buffer)

{
  char report_flag;
  int *entity_table;
  int64_t collision_entry;
  int entity_count;
  void *format_ptr;
  char *data_ptr;
  int collision_index;
  int64_t table_offset;
  int max_collisions;
  int32_t collision_id;
  int entity_id;
  void *format_ptr2;
  
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
        lVar3 = *(int64_t *)(lVar8 + 8 + *(int64_t *)(piVar2 + 2));
        if ((lVar3 != 0) && (*(int64_t *)(lVar3 + 8) == 0)) {
          FUN_18013c380(piVar2,lVar3,0);
        }
        iVar4 = iVar4 + 1;
        lVar8 = lVar8 + 0x10;
      } while (iVar4 < *piVar2);
    }
    lVar8 = (int64_t)piVar2[8];
    iVar4 = 0;
    if (0 < lVar8) {
      pcVar6 = (char *)(*(int64_t *)(piVar2 + 10) + 0xd);
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 0x20;
        if (iVar4 <= cVar1) {
          iVar4 = (int)cVar1;
        }
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    CoreSystem_EncryptionManager0(param_3,&global_var_3000_ptr,*param_2);
    iVar7 = 0;
    if (0 < piVar2[8]) {
      lVar8 = 0;
      do {
        lVar3 = *(int64_t *)(piVar2 + 10);
        puVar5 = &global_var_2984_ptr;
        puVar12 = &system_buffer_ptr;
        iVar9 = (int)*(char *)(lVar8 + 0xd + lVar3);
        iVar11 = (iVar4 - iVar9) * 2;
        if (*(char *)(lVar8 + 0xe + lVar3) != '\0') {
          puVar5 = &global_var_2800_ptr;
        }
        CoreSystem_EncryptionManager0(param_3,&global_var_3032_ptr,iVar9 * 2,&system_buffer_ptr,puVar5,iVar11,&system_buffer_ptr);
        uVar10 = (int32_t)((uint64_t)puVar5 >> 0x20);
        CoreSystem_EncryptionManager0(param_3,&global_var_3016_ptr,*(int32_t *)(lVar8 + lVar3));
        iVar9 = *(int *)(lVar8 + 4 + lVar3);
        if (iVar9 == 0) {
          CoreSystem_EncryptionManager0(param_3,&global_var_3048_ptr,(int)*(short *)(lVar8 + 0x12 + lVar3),
                        (int)*(short *)(lVar8 + 0x14 + lVar3),
                        CONCAT44(uVar10,(int)*(short *)(lVar8 + 0x16 + lVar3)),
                        (int)*(short *)(lVar8 + 0x18 + lVar3),puVar12);
        }
        else {
          CoreSystem_EncryptionManager0(param_3,&global_var_3072_ptr,iVar9,(int)*(short *)(lVar8 + 0x1a + lVar3),
                        CONCAT44(uVar10,(int)*(short *)(lVar8 + 0x1c + lVar3)),iVar11,puVar12);
        }
        cVar1 = *(char *)(lVar8 + 0xc + lVar3);
        if (cVar1 != -1) {
          CoreSystem_EncryptionManager0(param_3,&global_var_3120_ptr,(cVar1 != '\0') + 'X');
        }
        if (*(char *)(lVar8 + 0xf + lVar3) != '\0') {
          CoreSystem_EncryptionManager0(param_3,&global_var_3104_ptr);
        }
        if (*(char *)(lVar8 + 0x10 + lVar3) != '\0') {
          CoreSystem_EncryptionManager0(param_3,&global_var_3160_ptr);
        }
        if (*(int *)(lVar8 + 8 + lVar3) != 0) {
          CoreSystem_EncryptionManager0(param_3,&global_var_3136_ptr);
        }
        CoreSystem_EncryptionManager0(param_3,&system_memory_cc18);
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 0x20;
      } while (iVar7 < piVar2[8]);
    }
    CoreSystem_EncryptionManager0(param_3,&system_memory_cc18);
  }
  return;
}





// 函数: void reset_collision_system(int reset_flag)
// 重置碰撞系统
void reset_collision_system(int reset_flag)

{
  char system_flag;
  int64_t collision_data;
  char *data_ptr;
  int entity_count;
  char max_priority;
  int64_t table_offset;
  int *system_table;
  
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
      lVar2 = *(int64_t *)(lVar6 + 8 + *(int64_t *)(unaff_R14 + 2));
      if ((lVar2 != 0) && (*(int64_t *)(lVar2 + 8) == 0)) {
        FUN_18013c380();
      }
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 0x10;
    } while (iVar4 < *unaff_R14);
  }
  lVar6 = (int64_t)unaff_R14[8];
  cVar5 = '\0';
  if (0 < lVar6) {
    pcVar3 = (char *)(*(int64_t *)(unaff_R14 + 10) + 0xd);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 0x20;
      if (cVar5 <= cVar1) {
        cVar5 = cVar1;
      }
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  CoreSystem_EncryptionManager0();
  iVar4 = 0;
  if (0 < unaff_R14[8]) {
    lVar6 = 0;
    do {
      lVar2 = *(int64_t *)(unaff_R14 + 10);
      CoreSystem_EncryptionManager0();
      CoreSystem_EncryptionManager0();
      if (*(int *)(lVar6 + 4 + lVar2) == 0) {
        CoreSystem_EncryptionManager0();
      }
      else {
        CoreSystem_EncryptionManager0();
      }
      if (*(char *)(lVar6 + 0xc + lVar2) != -1) {
        CoreSystem_EncryptionManager0();
      }
      if (*(char *)(lVar6 + 0xf + lVar2) != '\0') {
        CoreSystem_EncryptionManager0();
      }
      if (*(char *)(lVar6 + 0x10 + lVar2) != '\0') {
        CoreSystem_EncryptionManager0();
      }
      if (*(int *)(lVar6 + 8 + lVar2) != 0) {
        CoreSystem_EncryptionManager0();
      }
      CoreSystem_EncryptionManager0();
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 0x20;
    } while (iVar4 < unaff_R14[8]);
  }
  CoreSystem_EncryptionManager0();
  return;
}





// 函数: void update_collision_statistics(void)
// 更新碰撞统计信息
void update_collision_statistics(void)

{
  int64_t collision_data;
  int stat_index;
  int entity_type;
  int64_t table_offset;
  int64_t system_context;
  int collision_count;
  void *format_data;
  
  lVar2 = 0;
  do {
    lVar1 = *(int64_t *)(unaff_R14 + 0x28);
    puStack0000000000000030 = &system_buffer_ptr;
    iStack0000000000000028 = (unaff_ESI - *(char *)(lVar2 + 0xd + lVar1)) * 2;
    CoreSystem_EncryptionManager0();
    CoreSystem_EncryptionManager0();
    if (*(int *)(lVar2 + 4 + lVar1) == 0) {
      iStack0000000000000028 = (int)*(short *)(lVar2 + 0x18 + lVar1);
      CoreSystem_EncryptionManager0();
    }
    else {
      CoreSystem_EncryptionManager0();
    }
    if (*(char *)(lVar2 + 0xc + lVar1) != -1) {
      CoreSystem_EncryptionManager0();
    }
    if (*(char *)(lVar2 + 0xf + lVar1) != '\0') {
      CoreSystem_EncryptionManager0();
    }
    if (*(char *)(lVar2 + 0x10 + lVar1) != '\0') {
      CoreSystem_EncryptionManager0();
    }
    if (*(int *)(lVar2 + 8 + lVar1) != 0) {
      CoreSystem_EncryptionManager0();
    }
    CoreSystem_EncryptionManager0();
    unaff_EBP = unaff_EBP + 1;
    lVar2 = lVar2 + 0x20;
  } while (unaff_EBP < *(int *)(unaff_R14 + 0x20));
  CoreSystem_EncryptionManager0();
  return;
}





// 函数: void cleanup_collision_debug(void)
// 清理碰撞调试信息
void cleanup_collision_debug(void)

{
  cleanup_debug_data();
  return;
}





// 函数: void initialize_collision_debug(void)
// 初始化碰撞调试
void initialize_collision_debug(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void log_collision_event(uint64_t log_format, uint64_t param2, uint64_t param3, uint64_t param4)
// 记录碰撞事件日志
void log_collision_event(uint64_t log_format, uint64_t param2, uint64_t param3, uint64_t param4)

{
  int64_t log_handle;
  uint64_t *format_ptr;
  uint64_t log_param1;
  uint64_t log_param2;
  uint64_t log_param3;
  
  if (*(char *)(SYSTEM_DATA_MANAGER_A + 0x2e38) != '\0') {
    lVar1 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x2e40);
    uStackX_10 = param_2;
    uStackX_18 = param_3;
    uStackX_20 = param_4;
    if (lVar1 != 0) {
      puVar2 = (uint64_t *)func_0x00018004b9a0();
      __stdio_common_vfprintf(*puVar2,lVar1,param_1,0,&uStackX_10);
      return;
    }
    FUN_180122240(SYSTEM_DATA_MANAGER_A + 0x2e48,param_1,&uStackX_10);
  }
  return;
}





// 函数: void flush_collision_log(int64_t log_context)
// 刷新碰撞日志
void flush_collision_log(int64_t log_context)

{
  int64_t log_file;
  int64_t stack_ptr;
  uint64_t *format_ptr;
  uint64_t log_param1;
  uint64_t log_param2;
  
  *(uint64_t *)(in_RAX + -0x10) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RDI;
  lVar1 = *(int64_t *)(param_1 + 0x2e40);
  if (lVar1 != 0) {
    puVar2 = (uint64_t *)func_0x00018004b9a0();
    __stdio_common_vfprintf(*puVar2,lVar1);
    return;
  }
  FUN_180122240(param_1 + 0x2e48);
  return;
}





// 函数: void close_collision_log(int64_t log_context)
// 关闭碰撞日志
void close_collision_log(int64_t log_context)

{
  close_log_file(log_context + 0x2e48);
  return;
}





// 函数: void initialize_collision_log(void)
// 初始化碰撞日志
void initialize_collision_log(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



