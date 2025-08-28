#include "TaleWorlds.Native.Split.h"

// 03_rendering_part059.c - 渲染系统高级数据处理和渲染控制模块
// 包含12个核心函数，涵盖哈希表操作、数据结构管理、资源管理、参数设置等功能
// 主要函数包括：render_hash_table_insert_entry、render_data_structure_initialize、render_data_structure_cleanup、
// render_resource_manager_cleanup、render_resource_manager_add_texture、render_resource_manager_add_shader、
// render_system_initialize、render_system_initialize_with_index、render_system_update_parameters、
// render_system_update_with_callback、render_system_execute_task、render_system_process_async_task

// 函数: void render_hash_table_insert_entry(void)
// 渲染哈希表插入条目函数 - 向哈希表中插入新的条目
void render_hash_table_insert_entry(void)

{
  longlong hash_table_entry;
  longlong hash_table_manager;
  longlong hash_table_index;
  longlong *entry_data;
  
  // 向哈希表中插入新条目
  *(undefined8 *)(hash_table_manager + 0x18) = *(undefined8 *)(*(longlong *)(hash_table_manager + 8) + hash_table_index * 8);
  *(longlong *)(*(longlong *)(hash_table_manager + 8) + hash_table_index * 8) = entry_data;
  hash_table_entry = *(longlong *)(hash_table_manager + 8);
  *(longlong *)(hash_table_manager + 0x18) = *(longlong *)(hash_table_manager + 0x18) + 1;
  *entry_data = hash_table_entry;
  entry_data[1] = hash_table_entry + hash_table_index * 8;
  *(undefined1 *)(entry_data + 2) = 1;
  return;
}

undefined8 * render_data_structure_initialize(undefined8 *data_structure)

{
  longlong *structure_ptr;
  longlong memory_block;
  undefined8 *data_ptr;
  
  // 初始化数据结构
  *data_structure = &UNK_180a17010;
  data_structure[0x2ef] = 0;
  data_structure[0x2f2] = 0;
  data_structure[0x2f3] = 0;
  data_structure[0x2f8] = 0;
  data_structure[0x2f9] = 0;
  data_ptr = data_structure + 0x364;
  memory_block = 0x10;
  do {
    func_0x000180074f10(data_ptr);
    data_ptr = data_ptr + 1;
    memory_block = memory_block + -1;
  } while (memory_block != 0);
  data_structure[0x37c] = 0;
  data_structure[0x37d] = 0;
  data_structure[0x381] = 0;
  data_structure[0x3be] = 0;
  data_structure[0x3bf] = 0;
  data_structure[0x3c0] = 0;
  FUN_18029c700(data_structure + 0xfe4);
  data_structure[0x1049] = 0;
  data_structure[0x104c] = 0;
  data_structure[0x1048] = 0;
  data_structure[0x1047] = 0;
  data_structure[0x104f] = 0xffffffffffffffff;
  data_structure[0x1053] = 0xffffffffffffffff;
  data_structure[0x1050] = 0xffffffffffffffff;
  data_structure[0x1051] = 0xffffffffffffffff;
  data_structure[0x1052] = 0xffffffffffffffff;
  data_structure[0x1054] = 0xffffffffffffffff;
  *(undefined1 *)(data_structure + 0x104e) = 9;
  data_structure[0x107e] = 0;
  data_structure[0x1076] = 0xffffffffdeadfeee;
  data_structure[0x1077] = 0;
  data_structure[0x106f] = 0xffffffffdeadfeee;
  data_structure[0x1078] = 0;
  data_structure[0x1070] = 0xffffffffdeadfeee;
  data_structure[0x1079] = 0;
  data_structure[0x1071] = 0xffffffffdeadfeee;
  data_structure[0x107a] = 0;
  data_structure[0x1072] = 0xffffffffdeadfeee;
  data_structure[0x107b] = 0;
  data_structure[0x1073] = 0xffffffffdeadfeee;
  data_structure[0x107c] = 0;
  data_structure[0x1074] = 0xffffffffdeadfeee;
  data_structure[0x107d] = 0;
  data_structure[0x1075] = 0xffffffffdeadfeee;
  *(undefined4 *)(data_structure + 0x1011) = 0;
  data_structure[0x1016] = 0;
  data_structure[0x1017] = 0;
  data_structure[0x1018] = 0;
  data_structure[0x1019] = 0;
  data_structure[0x101a] = 0;
  structure_ptr = (longlong *)data_structure[0x1049];
  data_structure[0x1049] = 0;
  if (structure_ptr != (longlong *)0x0) {
    (**(code **)(*structure_ptr + 0x38))();
  }
  return data_structure;
}

undefined8 *
render_data_structure_cleanup(undefined8 *data_structure,ulonglong cleanup_flags,undefined8 param_3,undefined8 param_4)

{
  undefined8 cleanup_mask;
  
  cleanup_mask = 0xfffffffffffffffe;
  *data_structure = &UNK_180a17010;
  if ((longlong *)data_structure[0x1049] != (longlong *)0x0) {
    (**(code **)(*(longlong *)data_structure[0x1049] + 0x38))();
  }
  FUN_18029c460(data_structure + 0xfe4);
  if ((cleanup_flags & 1) != 0) {
    free(data_structure,0x8400,param_3,param_4,cleanup_mask);
  }
  return data_structure;
}

// 函数: void render_resource_manager_cleanup(undefined8 *resource_manager)
// 渲染资源管理器清理函数 - 清理渲染资源管理器的资源
void render_resource_manager_cleanup(undefined8 *resource_manager)

{
  longlong *resource_ptr;
  undefined8 *resource_data;
  longlong resource_count;
  longlong resource_index;
  ulonglong cleanup_flag;
  
  // 清理资源管理器
  *resource_manager = &UNK_180a17010;
  if ((longlong *)resource_manager[0x1049] != (longlong *)0x0) {
    (**(code **)(*(longlong *)resource_manager[0x1049] + 0x38))();
  }
  cleanup_flag = 0;
  resource_ptr = resource_manager + 0x1012;
  resource_count = *resource_ptr;
  if (resource_manager[0x1013] - resource_count >> 3 != 0) {
    do {
      resource_data = *(undefined8 **)(cleanup_flag * 8 + resource_count);
      if (resource_data != (undefined8 *)0x0) {
        if ((longlong *)resource_data[0xd] != (longlong *)0x0) {
          (**(code **)(*(longlong *)resource_data[0xd] + 0x10))();
          resource_data[0xd] = 0;
        }
        if ((longlong *)resource_data[0xe] != (longlong *)0x0) {
          (**(code **)(*(longlong *)resource_data[0xe] + 0x10))();
          resource_data[0xe] = 0;
        }
        if ((longlong *)resource_data[0xf] != (longlong *)0x0) {
          (**(code **)(*(longlong *)resource_data[0xf] + 0x10))();
          resource_data[0xf] = 0;
        }
        if ((longlong *)resource_data[0x10] != (longlong *)0x0) {
          (**(code **)(*(longlong *)resource_data[0x10] + 0x10))();
          resource_data[0x10] = 0;
        }
        if ((longlong *)resource_data[0x11] != (longlong *)0x0) {
          (**(code **)(*(longlong *)resource_data[0x11] + 0x10))();
          resource_data[0x11] = 0;
        }
        *resource_data = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
        FUN_18064e900(resource_data);
      }
      *(undefined8 *)(cleanup_flag * 8 + *resource_ptr) = 0;
      cleanup_flag = (ulonglong)((int)cleanup_flag + 1);
      resource_count = *resource_ptr;
    } while (cleanup_flag < (ulonglong)(resource_manager[0x1013] - resource_count >> 3));
  }
  resource_manager[0x1013] = resource_count;
  resource_data = (undefined8 *)resource_manager[0x1043];
  if (resource_data != (undefined8 *)0x0) {
    FUN_1800f74f0(resource_manager + 0x1041,*resource_data);
    resource_data[4] = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(resource_data);
  }
  FUN_180058370(resource_manager + 0x103b,resource_manager[0x103d]);
  FUN_180058370(resource_manager + 0x1035,resource_manager[0x1037]);
  FUN_180058370(resource_manager + 0x102f,resource_manager[0x1031]);
  FUN_1808fc8a8(resource_manager + 0x101b,0x20,5,FUN_180046860);
  if (*resource_ptr != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_1808fc8a8(resource_manager + 0xffd,0x20,5,FUN_180046860);
  resource_count = resource_manager[0xffa];
  for (resource_index = resource_manager[0xff9]; resource_index != resource_count; resource_index = resource_index + 0x40) {
    FUN_180152b00(resource_index);
  }
  if (resource_manager[0xff9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}

// 函数: void render_resource_manager_add_texture(longlong *resource_manager,int texture_slot,longlong *texture_data)
// 渲染资源管理器添加纹理函数 - 向资源管理器添加纹理资源
void render_resource_manager_add_texture(longlong *resource_manager,int texture_slot,longlong *texture_data)

{
  if ((texture_data != (longlong *)0x0) && (*texture_data != 0)) {
    (**(code **)(*resource_manager + 0x70))(resource_manager,*texture_data,1);
    resource_manager[(longlong)texture_slot + 0x1077] = (longlong)texture_data;
    return;
  }
  resource_manager[(longlong)texture_slot + 0x1077] = (longlong)texture_data;
  return;
}

// 函数: void render_resource_manager_add_shader(longlong *resource_manager,longlong *shader_data,int shader_type)
// 渲染资源管理器添加着色器函数 - 向资源管理器添加着色器资源
void render_resource_manager_add_shader(longlong *resource_manager,longlong *shader_data,int shader_type)

{
  longlong shader_handle;
  
  if ((shader_data != (longlong *)0x0) && (shader_handle = *shader_data, shader_handle != 0)) {
    if (shader_type == 0) {
      (**(code **)(*resource_manager + 0x70))(resource_manager,shader_handle,2);
      resource_manager[0x107e] = (longlong)shader_data;
      return;
    }
    if (shader_type == 1) {
      (**(code **)(*resource_manager + 0x70))(resource_manager,shader_handle,4);
      resource_manager[0x107e] = (longlong)shader_data;
      return;
    }
  }
  resource_manager[0x107e] = (longlong)shader_data;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void render_system_initialize(longlong *render_system)
// 渲染系统初始化函数 - 初始化渲染系统的各种参数和状态
void render_system_initialize(longlong *render_system)

{
  longlong system_config;
  longlong *resource_ptr;
  int texture_index;
  int shader_index;
  longlong *texture_ptr;
  float viewport_scale;
  undefined4 texture_format;
  float projection_scale;
  undefined8 stack_data;
  
  // 初始化渲染系统参数
  texture_index = 0;
  render_system[0x1048] = 0;
  render_system[0x1047] = 0;
  shader_index = texture_index;
  do {
    (**(code **)(*render_system + 0xb0))(render_system,shader_index,shader_index,0x33);
    shader_index = shader_index + 1;
  } while (shader_index < 9);
  if ((undefined *)*render_system == &UNK_180a17458) {
    resource_ptr = render_system + 0x1147;
    texture_ptr = render_system + 0x1087;
    do {
      stack_data = 0;
      (**(code **)(*(longlong *)render_system[0x1080] + 200))
                ((longlong *)render_system[0x1080],texture_index,1,&stack_data);
      (**(code **)(*(longlong *)render_system[0x1080] + 0x1f8))
                ((longlong *)render_system[0x1080],texture_index,1,&stack_data);
      (**(code **)(*(longlong *)render_system[0x1080] + 0x1d8))
                ((longlong *)render_system[0x1080],texture_index,1,&stack_data);
      (**(code **)(*(longlong *)render_system[0x1080] + 0xf8))
                ((longlong *)render_system[0x1080],texture_index,1,&stack_data);
      (**(code **)(*(longlong *)render_system[0x1080] + 0x40))
                ((longlong *)render_system[0x1080],texture_index,1,&stack_data);
      (**(code **)(*(longlong *)render_system[0x1080] + 0x218))
                ((longlong *)render_system[0x1080],texture_index,1,&stack_data);
      *texture_ptr = 0;
      texture_ptr = texture_ptr + 1;
      texture_index = texture_index + 1;
      *(undefined4 *)(resource_ptr + -0x40) = 0xffffffff;
      *(undefined4 *)resource_ptr = 0xffffffff;
      resource_ptr = (longlong *)((longlong)resource_ptr + 4);
    } while (texture_index < 0x80);
  }
  else {
    (**(code **)((undefined *)*render_system + 0x58))(render_system);
  }
  (**(code **)(*render_system + 0x110))(render_system,0,0x37,*(undefined8 *)(_DAT_180c86938 + 0x1c70));
  (**(code **)(*render_system + 0x110))(render_system,9,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1cb8));
  (**(code **)(*render_system + 0x110))(render_system,1,0x13,*(undefined8 *)(_DAT_180c86938 + 0x1c80));
  (**(code **)(*render_system + 0x110))(render_system,2,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1c88));
  (**(code **)(*render_system + 0x110))(render_system,3,1,*(undefined8 *)(_DAT_180c86938 + 0x1c78));
  (**(code **)(*render_system + 0x110))(render_system,4,0x17,*(undefined8 *)(_DAT_180c86938 + 0x1c90));
  (**(code **)(*render_system + 0x110))(render_system,5,1,*(undefined8 *)(_DAT_180c86938 + 0x1c98));
  (**(code **)(*render_system + 0x110))(render_system,6,0x17,*(undefined8 *)(_DAT_180c86938 + 0x1ca0));
  (**(code **)(*render_system + 0x110))(render_system,7,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1ca8));
  system_config = _DAT_180c86920;
  projection_scale = *(float *)(_DAT_180c86920 + 0x1880);
  *(float *)(render_system + 0x2a4) = projection_scale;
  *(float *)((longlong)render_system + 0x1524) = 1.0 / projection_scale;
  *(float *)((longlong)render_system + 0x1d54) = *(float *)(system_config + 0x2060) * 0.01;
  *(float *)(render_system + 0x2a5) = *(float *)(system_config + 0x1110) * 0.005 - 0.25;
  projection_scale = *(float *)(system_config + 0x1180);
  if (0.0 <= projection_scale) {
    if (1.0 <= projection_scale) {
      projection_scale = 1.0;
    }
  }
  else {
    projection_scale = 0.0;
  }
  *(float *)(render_system + 0x2f4) = projection_scale;
  projection_scale = *(float *)(system_config + 0x11f0);
  viewport_scale = 0.0;
  if ((0.0 <= projection_scale) && (viewport_scale = projection_scale, 1.0 <= projection_scale)) {
    viewport_scale = 1.0;
  }
  *(float *)((longlong)render_system + 0x17a4) = viewport_scale;
  texture_format = powf(0x40000000,*(undefined4 *)(system_config + 0x1260));
  *(undefined4 *)(render_system + 0x2f7) = texture_format;
  render_system[0x1077] = 0;
  render_system[0x1078] = 0;
  render_system[0x1079] = 0;
  render_system[0x107a] = 0;
  render_system[0x107b] = 0;
  render_system[0x107c] = 0;
  render_system[0x107d] = 0;
  render_system[0x107e] = 0;
                    // WARNING: Could not recover jumptable at 0x00018029b1b9. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*render_system + 0x128))(render_system,7);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void render_system_initialize_with_index(longlong *render_system)
// 渲染系统带索引初始化函数 - 使用索引初始化渲染系统
void render_system_initialize_with_index(longlong *render_system)

{
  longlong system_config;
  ulonglong init_index;
  undefined8 init_param;
  longlong *resource_ptr;
  uint texture_index;
  ulonglong resource_index;
  ulonglong *texture_ptr;
  float viewport_scale;
  undefined4 texture_format;
  float projection_scale;
  ulonglong stack_param;
  undefined8 stack_data;
  
  render_system[0x1048] = init_index;
  resource_index = init_index & 0xffffffff;
  render_system[0x1047] = init_index;
  do {
    (**(code **)(*render_system + 0xb0))(render_system,resource_index,resource_index,0x33);
    texture_index = (int)resource_index + 1;
    resource_index = (ulonglong)texture_index;
  } while ((int)texture_index < 9);
  if ((undefined *)*render_system == &UNK_180a17458) {
    resource_index = init_index & 0xffffffff;
    resource_ptr = render_system + 0x1147;
    texture_ptr = (ulonglong *)(render_system + 0x1087);
    stack_data = init_param;
    do {
      stack_param = init_index;
      (**(code **)(*(longlong *)render_system[0x1080] + 200))
                ((longlong *)render_system[0x1080],resource_index,1,&stack_param);
      (**(code **)(*(longlong *)render_system[0x1080] + 0x1f8))
                ((longlong *)render_system[0x1080],resource_index,1,&stack_param);
      (**(code **)(*(longlong *)render_system[0x1080] + 0x1d8))
                ((longlong *)render_system[0x1080],resource_index,1,&stack_param);
      (**(code **)(*(longlong *)render_system[0x1080] + 0xf8))
                ((longlong *)render_system[0x1080],resource_index,1,&stack_param);
      (**(code **)(*(longlong *)render_system[0x1080] + 0x40))
                ((longlong *)render_system[0x1080],resource_index,1,&stack_param);
      (**(code **)(*(longlong *)render_system[0x1080] + 0x218))
                ((longlong *)render_system[0x1080],resource_index,1,&stack_param);
      *texture_ptr = init_index;
      texture_ptr = texture_ptr + 1;
      texture_index = (int)resource_index + 1;
      resource_index = (ulonglong)texture_index;
      *(undefined4 *)(resource_ptr + -0x40) = 0xffffffff;
      *(undefined4 *)resource_ptr = 0xffffffff;
      resource_ptr = (longlong *)((longlong)resource_ptr + 4);
    } while ((int)texture_index < 0x80);
  }
  else {
    (**(code **)((undefined *)*render_system + 0x58))(render_system);
  }
  (**(code **)(*render_system + 0x110))(render_system,0,0x37,*(undefined8 *)(_DAT_180c86938 + 0x1c70));
  (**(code **)(*render_system + 0x110))(render_system,9,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1cb8));
  (**(code **)(*render_system + 0x110))(render_system,1,0x13,*(undefined8 *)(_DAT_180c86938 + 0x1c80));
  (**(code **)(*render_system + 0x110))(render_system,2,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1c88));
  (**(code **)(*render_system + 0x110))(render_system,3,1,*(undefined8 *)(_DAT_180c86938 + 0x1c78));
  (**(code **)(*render_system + 0x110))(render_system,4,0x17,*(undefined8 *)(_DAT_180c86938 + 0x1c90));
  (**(code **)(*render_system + 0x110))(render_system,5,1,*(undefined8 *)(_DAT_180c86938 + 0x1c98));
  (**(code **)(*render_system + 0x110))(render_system,6,0x17,*(undefined8 *)(_DAT_180c86938 + 0x1ca0));
  (**(code **)(*render_system + 0x110))(render_system,7,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1ca8));
  system_config = _DAT_180c86920;
  projection_scale = *(float *)(_DAT_180c86920 + 0x1880);
  *(float *)(render_system + 0x2a4) = projection_scale;
  *(float *)((longlong)render_system + 0x1524) = 1.0 / projection_scale;
  *(float *)((longlong)render_system + 0x1d54) = *(float *)(system_config + 0x2060) * 0.01;
  *(float *)(render_system + 0x2a5) = *(float *)(system_config + 0x1110) * 0.005 - 0.25;
  projection_scale = *(float *)(system_config + 0x1180);
  if (0.0 <= projection_scale) {
    if (1.0 <= projection_scale) {
      projection_scale = 1.0;
    }
  }
  else {
    projection_scale = 0.0;
  }
  *(float *)(render_system + 0x2f4) = projection_scale;
  projection_scale = *(float *)(system_config + 0x11f0);
  viewport_scale = 0.0;
  if ((0.0 <= projection_scale) && (viewport_scale = projection_scale, 1.0 <= projection_scale)) {
    viewport_scale = 1.0;
  }
  *(float *)((longlong)render_system + 0x17a4) = viewport_scale;
  texture_format = powf(0x40000000,*(undefined4 *)(system_config + 0x1260));
  *(undefined4 *)(render_system + 0x2f7) = texture_format;
  render_system[0x1077] = init_index;
  render_system[0x1078] = init_index;
  render_system[0x1079] = init_index;
  render_system[0x107a] = init_index;
  render_system[0x107b] = init_index;
  render_system[0x107c] = init_index;
  render_system[0x107d] = init_index;
  render_system[0x107e] = init_index;
                    // WARNING: Could not recover jumptable at 0x00018029b1b9. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*render_system + 0x128))(render_system,7);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void render_system_update_parameters(void)
// 渲染系统更新参数函数 - 更新渲染系统的各种参数
void render_system_update_parameters(void)

{
  longlong system_config;
  longlong *render_system;
  ulonglong param_index;
  longlong *resource_ptr;
  uint texture_index;
  ulonglong resource_index;
  ulonglong *texture_ptr;
  undefined4 texture_format;
  float viewport_scale;
  float projection_scale;
  
  resource_index = param_index & 0xffffffff;
  resource_ptr = render_system + 0x1147;
  texture_ptr = (ulonglong *)(render_system + 0x1087);
  do {
    (**(code **)(*(longlong *)render_system[0x1080] + 200))
              ((longlong *)render_system[0x1080],resource_index,1,&stack_param);
    (**(code **)(*(longlong *)render_system[0x1080] + 0x1f8))
              ((longlong *)render_system[0x1080],resource_index,1,&stack_param);
    (**(code **)(*(longlong *)render_system[0x1080] + 0x1d8))
              ((longlong *)render_system[0x1080],resource_index,1,&stack_param);
    (**(code **)(*(longlong *)render_system[0x1080] + 0xf8))
              ((longlong *)render_system[0x1080],resource_index,1,&stack_param);
    (**(code **)(*(longlong *)render_system[0x1080] + 0x40))
              ((longlong *)render_system[0x1080],resource_index,1,&stack_param);
    texture_format = (**(code **)(*(longlong *)render_system[0x1080] + 0x218))
                      ((longlong *)render_system[0x1080],resource_index,1,&stack_param);
    *texture_ptr = param_index;
    texture_ptr = texture_ptr + 1;
    texture_index = (int)resource_index + 1;
    resource_index = (ulonglong)texture_index;
    *(undefined4 *)(resource_ptr + -0x40) = 0xffffffff;
    *(undefined4 *)resource_ptr = 0xffffffff;
    resource_ptr = (longlong *)((longlong)resource_ptr + 4);
  } while ((int)texture_index < 0x80);
  texture_format = (**(code **)(*render_system + 0x110))(texture_format,0,0x37,*(undefined8 *)(_DAT_180c86938 + 0x1c70));
  texture_format = (**(code **)(*render_system + 0x110))(texture_format,9,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1cb8));
  texture_format = (**(code **)(*render_system + 0x110))(texture_format,1,0x13,*(undefined8 *)(_DAT_180c86938 + 0x1c80));
  texture_format = (**(code **)(*render_system + 0x110))(texture_format,2,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1c88));
  texture_format = (**(code **)(*render_system + 0x110))(texture_format,3,1,*(undefined8 *)(_DAT_180c86938 + 0x1c78));
  texture_format = (**(code **)(*render_system + 0x110))(texture_format,4,0x17,*(undefined8 *)(_DAT_180c86938 + 0x1c90));
  texture_format = (**(code **)(*render_system + 0x110))(texture_format,5,1,*(undefined8 *)(_DAT_180c86938 + 0x1c98));
  (**(code **)(*render_system + 0x110))(texture_format,6,0x17,*(undefined8 *)(_DAT_180c86938 + 0x1ca0));
  (**(code **)(*render_system + 0x110))(texture_format,7,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1ca8));
  system_config = _DAT_180c86920;
  projection_scale = *(float *)(_DAT_180c86920 + 0x1880);
  *(float *)(render_system + 0x2a4) = projection_scale;
  *(float *)((longlong)render_system + 0x1524) = 1.0 / projection_scale;
  *(float *)((longlong)render_system + 0x1d54) = *(float *)(system_config + 0x2060) * 0.01;
  *(float *)(render_system + 0x2a5) = *(float *)(system_config + 0x1110) * 0.005 - 0.25;
  projection_scale = *(float *)(system_config + 0x1180);
  if (0.0 <= projection_scale) {
    if (1.0 <= projection_scale) {
      projection_scale = 1.0;
    }
  }
  else {
    projection_scale = 0.0;
  }
  *(float *)(render_system + 0x2f4) = projection_scale;
  projection_scale = *(float *)(system_config + 0x11f0);
  viewport_scale = 0.0;
  if ((0.0 <= projection_scale) && (viewport_scale = projection_scale, 1.0 <= projection_scale)) {
    viewport_scale = 1.0;
  }
  *(float *)((longlong)render_system + 0x17a4) = viewport_scale;
  texture_format = powf(0x40000000,*(undefined4 *)(system_config + 0x1260));
  *(undefined4 *)(render_system + 0x2f7) = texture_format;
  render_system[0x1077] = param_index;
  render_system[0x1078] = param_index;
  render_system[0x1079] = param_index;
  render_system[0x107a] = param_index;
  render_system[0x107b] = param_index;
  render_system[0x107c] = param_index;
  render_system[0x107d] = param_index;
  render_system[0x107e] = param_index;
                    // WARNING: Could not recover jumptable at 0x00018029b1b9. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*render_system + 0x128))(texture_format,7);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void render_system_update_with_callback(undefined4 update_flags)
// 渲染系统带回调更新函数 - 使用回调函数更新渲染系统
void render_system_update_with_callback(undefined4 update_flags)

{
  longlong system_config;
  longlong *render_system;
  longlong param_base;
  undefined4 texture_format;
  float viewport_scale;
  float projection_scale;
  
  texture_format = (**(code **)(*render_system + 0x110))(update_flags,0,0x37,*(undefined8 *)(_DAT_180c86938 + 0x1c70))
  ;
  texture_format = (**(code **)(*render_system + 0x110))(texture_format,9,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1cb8));
  texture_format = (**(code **)(*render_system + 0x110))(texture_format,1,0x13,*(undefined8 *)(_DAT_180c86938 + 0x1c80));
  texture_format = (**(code **)(*render_system + 0x110))(texture_format,2,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1c88));
  texture_format = (**(code **)(*render_system + 0x110))(texture_format,3,1,*(undefined8 *)(_DAT_180c86938 + 0x1c78));
  texture_format = (**(code **)(*render_system + 0x110))(texture_format,4,0x17,*(undefined8 *)(_DAT_180c86938 + 0x1c90));
  texture_format = (**(code **)(*render_system + 0x110))(texture_format,5,1,*(undefined8 *)(_DAT_180c86938 + 0x1c98));
  texture_format = (**(code **)(*render_system + 0x110))(texture_format,6,0x17,*(undefined8 *)(_DAT_180c86938 + 0x1ca0));
  (**(code **)(*render_system + 0x110))(texture_format,7,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1ca8));
  system_config = _DAT_180c86920;
  projection_scale = *(float *)(_DAT_180c86920 + 0x1880);
  *(float *)(render_system + 0x2a4) = projection_scale;
  *(float *)((longlong)render_system + 0x1524) = 1.0 / projection_scale;
  *(float *)((longlong)render_system + 0x1d54) = *(float *)(system_config + 0x2060) * 0.01;
  *(float *)(render_system + 0x2a5) = *(float *)(system_config + 0x1110) * 0.005 - 0.25;
  projection_scale = *(float *)(system_config + 0x1180);
  if (0.0 <= projection_scale) {
    if (1.0 <= projection_scale) {
      projection_scale = 1.0;
    }
  }
  else {
    projection_scale = 0.0;
  }
  *(float *)(render_system + 0x2f4) = projection_scale;
  projection_scale = *(float *)(system_config + 0x11f0);
  viewport_scale = 0.0;
  if ((0.0 <= projection_scale) && (viewport_scale = projection_scale, 1.0 <= projection_scale)) {
    viewport_scale = 1.0;
  }
  *(float *)((longlong)render_system + 0x17a4) = viewport_scale;
  texture_format = powf(0x40000000,*(undefined4 *)(system_config + 0x1260));
  *(undefined4 *)(render_system + 0x2f7) = texture_format;
  render_system[0x1077] = param_base;
  render_system[0x1078] = param_base;
  render_system[0x1079] = param_base;
  render_system[0x107a] = param_base;
  render_system[0x107b] = param_base;
  render_system[0x107c] = param_base;
  render_system[0x107d] = param_base;
  render_system[0x107e] = param_base;
                    // WARNING: Could not recover jumptable at 0x00018029b1b9. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*render_system + 0x128))(texture_format,7);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void render_system_execute_task(undefined8 task_id,undefined8 task_data,float param_3,float param_4)
// 渲染系统执行任务函数 - 执行指定的渲染任务
void render_system_execute_task(undefined8 task_id,undefined8 task_data,float param_3,float param_4)

{
  float depth_value;
  longlong system_config;
  longlong *render_system;
  longlong param_base;
  undefined4 texture_format;
  
  *(undefined4 *)(render_system + 0x2f4) = 0;
  depth_value = *(float *)(system_config + 0x11f0);
  if ((param_3 <= depth_value) && (param_3 = depth_value, param_4 <= depth_value)) {
    param_3 = param_4;
  }
  *(float *)((longlong)render_system + 0x17a4) = param_3;
  texture_format = powf(0x40000000,*(undefined4 *)(system_config + 0x1260));
  *(undefined4 *)(render_system + 0x2f7) = texture_format;
  render_system[0x1077] = param_base;
  render_system[0x1078] = param_base;
  render_system[0x1079] = param_base;
  render_system[0x107a] = param_base;
  render_system[0x107b] = param_base;
  render_system[0x107c] = param_base;
  render_system[0x107d] = param_base;
  render_system[0x107e] = param_base;
                    // WARNING: Could not recover jumptable at 0x00018029b1b9. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*render_system + 0x128))(texture_format,7);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void render_system_execute_with_callback(undefined8 callback_data,code *callback_function)
// 渲染系统带回调执行函数 - 使用回调函数执行渲染任务
void render_system_execute_with_callback(undefined8 callback_data,code *callback_function)

{
  longlong system_config;
  longlong *render_system;
  longlong param_base;
  float viewport_scale;
  undefined4 texture_format;
  float projection_scale;
  
  texture_format = (*callback_function)();
  texture_format = (**(code **)(*render_system + 0x110))(texture_format,0,0x37,*(undefined8 *)(_DAT_180c86938 + 0x1c70));
  texture_format = (**(code **)(*render_system + 0x110))(texture_format,9,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1cb8));
  texture_format = (**(code **)(*render_system + 0x110))(texture_format,1,0x13,*(undefined8 *)(_DAT_180c86938 + 0x1c80));
  texture_format = (**(code **)(*render_system + 0x110))(texture_format,2,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1c88));
  texture_format = (**(code **)(*render_system + 0x110))(texture_format,3,1,*(undefined8 *)(_DAT_180c86938 + 0x1c78));
  texture_format = (**(code **)(*render_system + 0x110))(texture_format,4,0x17,*(undefined8 *)(_DAT_180c86938 + 0x1c90));
  texture_format = (**(code **)(*render_system + 0x110))(texture_format,5,1,*(undefined8 *)(_DAT_180c86938 + 0x1c98));
  texture_format = (**(code **)(*render_system + 0x110))(texture_format,6,0x17,*(undefined8 *)(_DAT_180c86938 + 0x1ca0));
  (**(code **)(*render_system + 0x110))(texture_format,7,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1ca8));
  system_config = _DAT_180c86920;
  projection_scale = *(float *)(_DAT_180c86920 + 0x1880);
  *(float *)(render_system + 0x2a4) = projection_scale;
  *(float *)((longlong)render_system + 0x1524) = 1.0 / projection_scale;
  *(float *)((longlong)render_system + 0x1d54) = *(float *)(system_config + 0x2060) * 0.01;
  *(float *)(render_system + 0x2a5) = *(float *)(system_config + 0x1110) * 0.005 - 0.25;
  projection_scale = *(float *)(system_config + 0x1180);
  if (0.0 <= projection_scale) {
    if (1.0 <= projection_scale) {
      projection_scale = 1.0;
    }
  }
  else {
    projection_scale = 0.0;
  }
  *(float *)(render_system + 0x2f4) = projection_scale;
  projection_scale = *(float *)(system_config + 0x11f0);
  viewport_scale = 0.0;
  if ((0.0 <= projection_scale) && (viewport_scale = projection_scale, 1.0 <= projection_scale)) {
    viewport_scale = 1.0;
  }
  *(float *)((longlong)render_system + 0x17a4) = viewport_scale;
  texture_format = powf(0x40000000,*(undefined4 *)(system_config + 0x1260));
  *(undefined4 *)(render_system + 0x2f7) = texture_format;
  render_system[0x1077] = param_base;
  render_system[0x1078] = param_base;
  render_system[0x1079] = param_base;
  render_system[0x107a] = param_base;
  render_system[0x107b] = param_base;
  render_system[0x107c] = param_base;
  render_system[0x107d] = param_base;
  render_system[0x107e] = param_base;
                    // WARNING: Could not recover jumptable at 0x00018029b1b9. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*render_system + 0x128))(texture_format,7);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void render_system_process_async_task(longlong *render_system,undefined8 task_data,undefined4 task_param,longlong *task_resources,
// 渲染系统异步任务处理函数 - 处理异步渲染任务
void render_system_process_async_task(longlong *render_system,undefined8 task_data,undefined4 task_param,longlong *task_resources,
                  undefined4 resource_flags,byte task_type)

{
  int current_thread;
  longlong resource_handle;
  int task_thread;
  undefined8 async_mask;
  undefined **resource_ptr;
  undefined1 task_buffer[32];
  undefined4 task_flags;
  byte task_priority;
  undefined **task_resources_ptr;
  undefined ***task_manager_ptr;
  undefined8 task_manager_data;
  undefined **async_resources_ptr;
  undefined *async_resource_ptr;
  undefined1 *async_task_data;
  undefined4 async_task_id;
  undefined1 async_task_buffer[128];
  undefined4 async_task_param;
  undefined8 async_task_data_2;
  undefined4 async_task_index;
  longlong *async_task_resources;
  ulonglong async_task_id_2;
  
  async_mask = 0xfffffffffffffffe;
  async_task_id_2 = _DAT_180bf00a8 ^ (ulonglong)task_buffer;
  current_thread = *(int *)(*(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8) + 0x48);
  task_thread = _Thrd_id();
  if (task_thread == current_thread) {
    task_priority = task_type;
    task_flags = resource_flags;
    (**(code **)(*render_system + 0x1e0))(render_system,task_data,task_param,task_resources[2]);
  }
  else {
    task_resources_ptr = &async_resource_ptr;
    async_resource_ptr = &UNK_1809fcc28;
    async_task_data = async_task_buffer;
    async_task_id = 0;
    async_task_buffer[0] = 0;
    async_task_param = 8;
    task_flags = resource_flags;
    async_task_index = (uint)task_type;
    async_task_data_2 = task_data;
    async_task_param = task_param;
    async_task_resources = task_resources;
    if (*(code **)(*task_resources + 0x28) == (code *)&UNK_180084660) {
      LOCK();
      *(int *)(task_resources + 1) = (int)task_resources[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*task_resources + 0x28))(task_resources);
    }
    async_mask = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
    resource_ptr = (undefined **)FUN_18005ce30(async_mask,&async_resource_ptr);
    async_resources_ptr = resource_ptr;
    if (resource_ptr != (undefined **)0x0) {
      (**(code **)(*resource_ptr + 0x28))(resource_ptr);
    }
    resource_handle = _DAT_180c82868;
    task_manager_ptr = &task_resources_ptr;
    task_resources_ptr = resource_ptr;
    if (resource_ptr != (undefined **)0x0) {
      (**(code **)(*resource_ptr + 0x28))(resource_ptr);
    }
    FUN_18005e370(resource_handle,&task_resources_ptr);
    if (resource_ptr != (undefined **)0x0) {
      (**(code **)(*resource_ptr + 0x38))(resource_ptr);
    }
    task_manager_ptr = (undefined ***)&async_resource_ptr;
    async_resource_ptr = &UNK_18098bcb0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(async_task_id_2 ^ (ulonglong)task_buffer);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void render_system_process_sync_task(longlong *render_system,undefined8 task_data,longlong *task_resources)
// 渲染系统同步任务处理函数 - 处理同步渲染任务
void render_system_process_sync_task(longlong *render_system,undefined8 task_data,longlong *task_resources)

{
  int current_thread;
  longlong resource_handle;
  int task_thread;
  undefined8 sync_mask;
  undefined **resource_ptr;
  undefined1 task_buffer[32];
  undefined **task_resources_ptr;
  undefined ***task_manager_ptr;
  undefined8 task_manager_data;
  undefined **sync_resources_ptr;
  undefined *sync_resource_ptr;
  undefined1 *sync_task_data;
  undefined4 sync_task_param;
  undefined1 sync_task_buffer[128];
  undefined4 sync_task_flags;
  undefined8 sync_task_data_2;
  longlong *sync_task_resources;
  undefined4 sync_resource_format;
  ulonglong sync_task_id;
  
  sync_mask = 0xfffffffffffffffe;
  sync_task_id = _DAT_180bf00a8 ^ (ulonglong)task_buffer;
  current_thread = *(int *)(*(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8) + 0x48);
  task_thread = _Thrd_id();
  if (task_thread == current_thread) {
    (**(code **)(*render_system + 0x1e8))
              (render_system,task_data,task_resources[2],*(undefined4 *)((longlong)task_resources + 0x1c));
  }
  else {
    task_resources_ptr = &sync_resource_ptr;
    sync_resource_ptr = &UNK_1809fcc28;
    sync_task_data = sync_task_buffer;
    sync_task_param = 0;
    sync_task_buffer[0] = 0;
    sync_task_flags = 9;
    sync_resource_format = *(undefined4 *)((longlong)task_resources + 0x1c);
    sync_task_data_2 = task_data;
    sync_task_resources = task_resources;
    if (*(code **)(*task_resources + 0x28) == (code *)&UNK_180084660) {
      LOCK();
      *(int *)(task_resources + 1) = (int)task_resources[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*task_resources + 0x28))(task_resources);
    }
    sync_mask = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
    resource_ptr = (undefined **)FUN_18005ce30(sync_mask,&sync_resource_ptr);
    sync_resources_ptr = resource_ptr;
    if (resource_ptr != (undefined **)0x0) {
      (**(code **)(*resource_ptr + 0x28))(resource_ptr);
    }
    resource_handle = _DAT_180c82868;
    task_manager_ptr = &task_resources_ptr;
    task_resources_ptr = resource_ptr;
    if (resource_ptr != (undefined **)0x0) {
      (**(code **)(*resource_ptr + 0x28))(resource_ptr);
    }
    FUN_18005e370(resource_handle,&task_resources_ptr);
    if (resource_ptr != (undefined **)0x0) {
      (**(code **)(*resource_ptr + 0x38))(resource_ptr);
    }
    task_manager_ptr = (undefined ***)&sync_resource_ptr;
    sync_resource_ptr = &UNK_18098bcb0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(sync_task_id ^ (ulonglong)task_buffer);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address