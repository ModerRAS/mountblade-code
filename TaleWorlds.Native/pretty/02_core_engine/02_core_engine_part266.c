#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part266.c - 核心引擎模块第266部分
// 本文件包含场景管理、材质处理和哈希计算相关功能

// 函数: 处理场景材质初始化
// 功能: 初始化场景中的材质系统，设置各种材质参数和属性
void initialize_scene_materials(longlong scene_context)

{
  void *material_name_ptr;
  uint64_t material_handle;
  int material_count;
  uint material_flags;
  ulonglong material_id;
  ulonglong texture_offset;
  uint64_t base_texture;
  ulonglong material_index;
  void *texture_name1;
  void *texture_name2;
  void *texture_name3;
  longlong iteration_count;
  int8_t stack_buffer1 [32];
  uint64_t guard_value1;
  void *stack_ptr1;
  int8_t *stack_ptr2;
  int32_t stack_size1;
  int8_t stack_buffer2 [72];
  void *stack_ptr3;
  int8_t *stack_ptr4;
  int32_t stack_size2;
  int8_t stack_buffer3 [72];
  void *stack_ptr5;
  int8_t *stack_ptr6;
  int32_t stack_size3;
  int8_t stack_buffer4 [72];
  void *stack_ptr7;
  int8_t *stack_ptr8;
  int32_t stack_size4;
  int8_t stack_buffer5 [72];
  void *stack_ptr9;
  int8_t *stack_ptr10;
  int32_t stack_size5;
  int8_t stack_buffer6 [72];
  ulonglong stack_guard_value;
  
  guard_value1 = 0xfffffffffffffffe;
  stack_guard_value = _DAT_180bf00a8 ^ (ulonglong)stack_buffer1;
  material_index = 0;
  *(uint64_t *)(scene_context + 0x140) = 0;
  material_count = (int)((*(longlong *)(scene_context + 0x370) - *(longlong *)(scene_context + 0x368)) / 0x58);
  iteration_count = (longlong)material_count;
  texture_offset = material_index;
  if (0 < material_count) {
    do {
      material_id = get_material_handle(*(uint64_t *)(scene_context + 0x1e0),
                            (longlong)(int)material_index * 0x58 + *(longlong *)(scene_context + 0x368),0);
      if (material_id == 0) {
        texture_name3 = &DAT_18098bc73; // 默认材质名称
        if (*(void **)(scene_context + 0x18) != (void *)0x0) {
          texture_name3 = *(void **)(scene_context + 0x18);
        }
        material_name_ptr = *(void **)(*(longlong *)(scene_context + 0x1e0) + 0x18);
        texture_name2 = &DAT_18098bc73; // 默认纹理名称
        if (material_name_ptr != (void *)0x0) {
          texture_name2 = material_name_ptr;
        }
        material_name_ptr = *(void **)(texture_offset + 8 + *(longlong *)(scene_context + 0x368));
        texture_name1 = &DAT_18098bc73; // 默认材质名称
        if (material_name_ptr != (void *)0x0) {
          texture_name1 = material_name_ptr;
        }
        log_material_error(&UNK_180a13b70,texture_name1,texture_name2,texture_name3);
      }
      *(ulonglong *)(scene_context + 0x140) = *(ulonglong *)(scene_context + 0x140) | material_id;
      material_index = (ulonglong)((int)material_index + 1);
      iteration_count = iteration_count + -1;
      texture_offset = texture_offset + 0x58;
    } while (iteration_count != 0);
  }
  if ((*(longlong *)(scene_context + 0xb8) != 0) &&
     ((*(uint *)(*(longlong *)(scene_context + 0xb8) + 0x328) >> 0xf & 1) == 0)) {
    base_texture = *(uint64_t *)(scene_context + 0x1e0);
    stack_ptr1 = &UNK_18098bc80;
    stack_ptr2 = stack_buffer2;
    stack_buffer2[0] = 0;
    stack_size1 = 0x10;
    strcpy_s(stack_buffer2,0x20,&DAT_180a13c30); // 基础纹理名称
    texture_offset = get_material_handle(base_texture,&stack_ptr1,0);
    *(ulonglong *)(scene_context + 0x140) = *(ulonglong *)(scene_context + 0x140) | texture_offset;
  }
  base_texture = *(uint64_t *)(scene_context + 0x1e0);
  stack_ptr1 = &UNK_18098bc80;
  stack_ptr2 = stack_buffer2;
  stack_buffer2[0] = 0;
  stack_size1 = 10;
  strcpy_s(stack_buffer2,0x20,&DAT_180a0d648); // 漫反射纹理
  texture_offset = get_material_handle(base_texture,&stack_ptr1,0);
  if ((((texture_offset & *(ulonglong *)(scene_context + 0x140)) != 0) && (-0.001 < *(float *)(scene_context + 600))) &&
     (*(float *)(scene_context + 600) < 0.001)) {
    *(ulonglong *)(scene_context + 0x140) = ~texture_offset & *(ulonglong *)(scene_context + 0x140);
  }
  base_texture = *(uint64_t *)(scene_context + 0x1e0);
  stack_ptr1 = &UNK_1809fcc58;
  stack_ptr2 = stack_buffer2;
  stack_buffer2[0] = 0;
  stack_size1 = 0xf;
  strcpy_s(stack_buffer2,0x40,&DAT_180a0ba58); // 法线纹理
  base_texture = get_material_handle(base_texture,&stack_ptr1,0);
  *(uint64_t *)(scene_context + 0x390) = base_texture;
  stack_ptr1 = &UNK_18098bcb0;
  base_texture = *(uint64_t *)(scene_context + 0x1e0);
  stack_ptr3 = &UNK_1809fcc58;
  stack_ptr4 = stack_buffer3;
  stack_buffer3[0] = 0;
  stack_size2 = 9;
  strcpy_s(stack_buffer3,0x40,&UNK_180a13aa8); // 高光纹理
  material_handle = *(uint64_t *)(scene_context + 0x1e0);
  stack_ptr1 = &UNK_1809fcc58;
  stack_ptr2 = stack_buffer2;
  stack_buffer2[0] = 0;
  stack_size1 = 0x17;
  strcpy_s(stack_buffer2,0x40,&UNK_180a13ab8); // 环境光遮蔽纹理
  texture_offset = get_material_handle(material_handle,&stack_ptr1,0);
  material_index = get_material_handle(base_texture,&stack_ptr3,0);
  *(ulonglong *)(scene_context + 0x3a8) = texture_offset | material_index;
  stack_ptr1 = &UNK_18098bcb0;
  stack_ptr3 = &UNK_18098bcb0;
  base_texture = *(uint64_t *)(scene_context + 0x1e0);
  stack_ptr5 = &UNK_1809fcc58;
  stack_ptr6 = stack_buffer4;
  stack_buffer4[0] = 0;
  stack_size3 = 0x10;
  strcpy_s(stack_buffer4,0x40,&DAT_180a0d580); // 金属度纹理
  base_texture = get_material_handle(base_texture,&stack_ptr5,0);
  *(uint64_t *)(scene_context + 0x3b0) = base_texture;
  stack_ptr5 = &UNK_18098bcb0;
  base_texture = *(uint64_t *)(scene_context + 0x1e0);
  stack_ptr7 = &UNK_1809fcc58;
  stack_ptr8 = stack_buffer5;
  stack_buffer5[0] = 0;
  stack_size4 = 0x14;
  strcpy_s(stack_buffer5,0x40,&DAT_180a0d5b8); // 粗糙度纹理
  base_texture = get_material_handle(base_texture,&stack_ptr7,0);
  *(uint64_t *)(scene_context + 0x3b8) = base_texture;
  stack_ptr7 = &UNK_18098bcb0;
  base_texture = *(uint64_t *)(scene_context + 0x1e0);
  stack_ptr9 = &UNK_1809fcc58;
  stack_ptr10 = stack_buffer6;
  stack_buffer6[0] = 0;
  stack_size5 = 0x1d;
  strcpy_s(stack_buffer6,0x40,&UNK_180a13bb8); // 发光纹理
  base_texture = get_material_handle(base_texture,&stack_ptr9,0);
  *(uint64_t *)(scene_context + 0x398) = base_texture;
  stack_ptr9 = &UNK_18098bcb0;
  material_flags = get_scene_material_flags(scene_context);
  *(ulonglong *)(scene_context + 0x3a0) = (ulonglong)material_flags;
                    // WARNING: Subroutine does not return
  security_check(stack_guard_value ^ (ulonglong)stack_buffer1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 处理材质缓存系统
// 功能: 管理材质的缓存和加载，确保材质正确加载到内存中
longlong manage_material_cache(longlong material_system)

{
  ulonglong *cache_ptr;
  void *material_data;
  uint64_t *cache_entry;
  longlong *cache_count;
  longlong cache_size;
  uint64_t *cache_start;
  longlong cache_capacity;
  uint64_t *cache_end;
  uint64_t *cache_current;
  void *cache_item;
  ulonglong cache_index;
  uint material_bit;
  ulonglong material_offset;
  ulonglong cache_position;
  longlong material_slot;
  uint64_t material_info;
  
  material_info = 0xfffffffffffffffe;
  cache_ptr = (ulonglong *)(material_system + 0x368);
  initialize_cache_system(cache_ptr);
  cache_count = (longlong *)get_cache_manager(*(uint64_t *)(material_system + 0x1e0));
  cache_index = 0;
  cache_position = *cache_count;
  cache_size = cache_count[1] - cache_position;
  cache_capacity = cache_size * 0x2aaaaaaaaaaaaaab;
  material_offset = cache_index;
  if (cache_size / 0x60 + (cache_size >> 0x3f) != cache_size >> 0x3f) {
    do {
      cache_start = (uint64_t *)0x0;
      if ((*(ulonglong *)(material_system + 0x140) >> (material_offset & 0x3f) & 1) != 0) {
        cache_capacity = cache_index * 0x60 + cache_position;
        cache_index = *(ulonglong *)(material_system + 0x370);
        if (cache_index < *(ulonglong *)(material_system + 0x378)) {
          *(ulonglong *)(material_system + 0x370) = cache_index + 0x58;
          load_material_data(cache_index,cache_capacity);
        }
        else {
          material_offset = *cache_ptr;
          cache_size = (longlong)(cache_index - material_offset) / 0x58;
          if (cache_size == 0) {
            cache_size = 1;
LAB_cache_allocate:
            cache_start = (uint64_t *)
                     allocate_cache_memory(_DAT_180c8ed18,cache_size * 0x58,*(int8_t *)(material_system + 0x380),
                                   cache_position,material_info);
            cache_index = *(ulonglong *)(material_system + 0x370);
            material_offset = *cache_ptr;
          }
          else {
            cache_size = cache_size * 2;
            if (cache_size != 0) goto LAB_cache_allocate;
          }
          cache_current = cache_start;
          if (material_offset != cache_index) {
            cache_position = material_offset - (longlong)cache_start;
            do {
              *cache_current = &UNK_18098bcb0;
              cache_current[1] = 0;
              *(int32_t *)(cache_current + 2) = 0;
              *cache_current = &UNK_1809fcc58;
              cache_current[1] = cache_current + 3;
              *(int32_t *)(cache_current + 2) = 0;
              *(int8_t *)(cache_current + 3) = 0;
              *(int32_t *)(cache_current + 2) = *(int32_t *)(cache_position + 0x10 + (longlong)cache_current);
              material_data = *(void **)(cache_position + 8 + (longlong)cache_current);
              material_item = &DAT_18098bc73;
              if (material_data != (void *)0x0) {
                material_item = material_data;
              }
              strcpy_s(cache_current[1],0x40,material_item);
              cache_current = cache_current + 0xb;
            } while (cache_position + (longlong)cache_current != cache_index);
          }
          load_material_data(cache_current,cache_capacity);
          cache_entry = *(uint64_t **)(material_system + 0x370);
          cache_end = (uint64_t *)*cache_ptr;
          if (cache_end != cache_entry) {
            do {
              (**(code **)*cache_end)(cache_end,0);
              cache_end = cache_end + 0xb;
            } while (cache_end != cache_entry);
            cache_end = (uint64_t *)*cache_ptr;
          }
          if (cache_end != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
            free_cache_memory(cache_end);
          }
          *cache_ptr = (ulonglong)cache_start;
          *(uint64_t **)(material_system + 0x370) = cache_current + 0xb;
          *(uint64_t **)(material_system + 0x378) = cache_start + cache_size * 0xb;
        }
      }
      material_bit = (int)material_offset + 1;
      cache_position = *cache_count;
      cache_index = (ulonglong)(int)material_bit;
      cache_capacity = -(cache_count[1] - cache_position >> 0x3f);
      material_offset = (ulonglong)material_bit;
    } while (cache_index < (ulonglong)((cache_count[1] - cache_position) / 0x60));
  }
  return cache_capacity;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 切换场景材质系统
// 功能: 在不同场景间切换时，更新和管理材质系统的状态
void switch_scene_materials(longlong scene_context,uint64_t new_scene,longlong scene_data)

{
  uint texture_format;
  uint64_t old_material;
  uint64_t new_material;
  int32_t material_param1;
  int32_t material_param2;
  int32_t material_param3;
  longlong material_handle;
  byte material_type;
  int material_index;
  longlong texture_offset;
  longlong material_slot;
  uint64_t *material_manager;
  void *material_name;
  void *texture_ptr;
  longlong *material_list;
  uint64_t *material_cache;
  uint64_t *texture_cache;
  longlong *texture_count;
  longlong scene_offset;
  longlong render_offset;
  uint64_t *texture_system;
  int32_t texture_flags;
  int8_t material_buffer [72];
  ulonglong stack_guard;
  
  texture_system = 0xfffffffffffffffe;
  stack_guard = _DAT_180bf00a8 ^ (ulonglong)material_buffer;
  texture_offset = find_scene_material(*(uint64_t *)(scene_context + 0xa8),&DAT_180a01228,scene_data + 0x20);
  if (texture_offset == 0) {
    material_list = *(longlong **)(scene_context + 0x1e0);
    *(uint64_t *)(scene_context + 0x1e0) = 0;
    if (material_list != (longlong *)0x0) {
      (**(code **)(*material_list + 0x38))();
    }
    (**(code **)(*(longlong *)(scene_context + 0x2d0) + 0x10))
              ((longlong *)(scene_context + 0x2d0),&DAT_18098bc73);
    material_name = &DAT_18098bc73;
    if (*(void **)(scene_context + 0x18) != (void *)0x0) {
      material_name = *(void **)(scene_context + 0x18);
    }
    log_scene_switch_error(&UNK_180a13c48,material_name);
  }
  else {
    material_list = *(longlong **)(texture_offset + 0xb0);
    if (material_list != (longlong *)0x0) {
      material_cache = material_list;
      (**(code **)(*material_list + 0x28))(material_list);
    }
    material_cache = *(longlong **)(scene_context + 0x1e0);
    *(longlong **)(scene_context + 0x1e0) = material_list;
    if (material_cache != (longlong *)0x0) {
      (**(code **)(*material_cache + 0x38))();
    }
    *(int32_t *)(scene_context + 0x2e0) = *(int32_t *)(*(longlong *)(scene_context + 0x1e0) + 0x20);
    material_name = *(void **)(*(longlong *)(scene_context + 0x1e0) + 0x18);
    texture_ptr = &DAT_18098bc73;
    if (material_name != (void *)0x0) {
      texture_ptr = material_name;
    }
    strcpy_s(*(uint64_t *)(scene_context + 0x2d8),0x80,texture_ptr);
  }
  scene_offset = 0;
  material_list = (longlong *)(scene_context + 0xb8);
  material_cache = (longlong *)0x10;
  texture_offset = scene_offset;
  render_offset = scene_offset;
  do {
    texture_count = (longlong *)*material_list;
    *material_list = 0;
    if (texture_count != (longlong *)0x0) {
      (**(code **)(*texture_count + 0x38))();
    }
    material_list = (longlong *)(scene_data + 0x30 + scene_offset);
    if (((*material_list != 0) || (material_list[1] != 0)) &&
       (*(int *)(*(longlong *)(scene_context + 0x1e0) + 0x1c40 + texture_offset) != 0)) {
      material_slot = find_scene_material(*(uint64_t *)(scene_context + 0xa8),&UNK_180a01170);
      material_handle = _DAT_180c86898;
      if (material_slot == 0) {
        if (*(longlong *)(_DAT_180c86898 + 0x98) == 0) {
          texture_system = (uint64_t *)create_texture_manager(texture_flags,&texture_count,&UNK_180a03108,1);
          old_material = *texture_system;
          *texture_system = 0;
          texture_cache = *(longlong **)(material_handle + 0x98);
          *(uint64_t *)(material_handle + 0x98) = old_material;
          if (texture_cache != (longlong *)0x0) {
            (**(code **)(*texture_cache + 0x38))();
          }
          if (texture_count != (longlong *)0x0) {
            (**(code **)(*texture_count + 0x38))();
          }
        }
        texture_system = 0;
        old_material = 0;
        new_material = 0;
        texture_system = (uint64_t *)0x0;
        texture_cache = _guard_check_icall;
        initialize_texture_system(*(uint64_t *)(material_handle + 0x98),0,*(int32_t *)(material_handle + 0x468),&texture_system);
        if (new_material != (uint64_t *)0x0) {
          (*new_material)(&texture_system,0,0);
        }
        apply_texture_to_scene(scene_context + 0xb8 + render_offset,*(uint64_t *)(material_handle + 0x98));
        material_name = &UNK_1809fcc58;
        texture_ptr = material_buffer;
        material_buffer[0] = 0;
        material_index = *(int *)(texture_offset + 0x1c40 + *(longlong *)(scene_context + 0x1e0));
        material_name = *(void **)(texture_offset + 0x1c38 + *(longlong *)(scene_context + 0x1e0));
        texture_ptr = &DAT_18098bc73;
        if (material_name != (void *)0x0) {
          texture_ptr = material_name;
        }
        strcpy_s(material_buffer,0x40,texture_ptr);
        material_name = &DAT_18098bc73;
        if (*(void **)(scene_context + 0x18) != (void *)0x0) {
          material_name = *(void **)(scene_context + 0x18);
        }
        if (material_index == 0) {
          texture_ptr = &DAT_180a0e8a0;
        }
        else {
          texture_ptr = &DAT_18098bc73;
          if (texture_ptr != (void *)0x0) {
            texture_ptr = texture_ptr;
          }
        }
        log_material_assignment(&UNK_180a13c08,texture_ptr,material_name);
        material_name = &UNK_18098bcb0;
      }
      else {
        apply_material_to_scene(scene_context + 0xb8 + render_offset,material_slot + 0xb0);
      }
    }
    scene_offset = scene_offset + 0x10;
    render_offset = render_offset + 8;
    material_list = material_list + 1;
    texture_offset = texture_offset + 0x58;
    material_cache = (longlong *)((longlong)material_cache + -1);
  } while (material_cache != (longlong *)0x0);
  if ((uint64_t *)(scene_context + 0x368) != (uint64_t *)(scene_data + 0x138)) {
    update_scene_materials((uint64_t *)(scene_context + 0x368),*(uint64_t *)(scene_data + 0x138),
                  *(uint64_t *)(scene_data + 0x140));
  }
  *(int32_t *)(scene_context + 0x138) = *(int32_t *)(scene_data + 0x18);
  *(int32_t *)(scene_context + 0x388) = *(int32_t *)(scene_data + 0x1c);
  *(int32_t *)(scene_context + 600) = *(int32_t *)(scene_data + 0x130);
  *(int8_t *)(scene_context + 0x13c) = *(int8_t *)(scene_data + 0x134);
  *(int32_t *)(scene_context + 0x25c) = *(int32_t *)(scene_data + 0x158);
  *(int32_t *)(scene_context + 0x260) = *(int32_t *)(scene_data + 0x15c);
  *(int32_t *)(scene_context + 0x264) = *(int32_t *)(scene_data + 0x160);
  *(int32_t *)(scene_context + 0x268) = *(int32_t *)(scene_data + 0x164);
  old_material = *(uint64_t *)(scene_data + 0x170);
  *(uint64_t *)(scene_context + 0x288) = *(uint64_t *)(scene_data + 0x168);
  *(uint64_t *)(scene_context + 0x290) = old_material;
  old_material = *(uint64_t *)(scene_data + 0x180);
  *(uint64_t *)(scene_context + 0x298) = *(uint64_t *)(scene_data + 0x178);
  *(uint64_t *)(scene_context + 0x2a0) = old_material;
  old_material = *(uint64_t *)(scene_data + 400);
  *(uint64_t *)(scene_context + 0x2a8) = *(uint64_t *)(scene_data + 0x188);
  *(uint64_t *)(scene_context + 0x2b0) = old_material;
  material_param1 = *(int32_t *)(scene_data + 0x19c);
  material_param2 = *(int32_t *)(scene_data + 0x1a0);
  material_param3 = *(int32_t *)(scene_data + 0x1a4);
  *(int32_t *)(scene_context + 0x2b8) = *(int32_t *)(scene_data + 0x198);
  *(int32_t *)(scene_context + 700) = material_param1;
  *(int32_t *)(scene_context + 0x2c0) = material_param2;
  *(int32_t *)(scene_context + 0x2c4) = material_param3;
  *(int32_t *)(scene_context + 0x2c8) = *(int32_t *)(scene_data + 0x1a8);
  *(int32_t *)(scene_context + 0x26c) = *(int32_t *)(scene_data + 0x1ac);
  *(int32_t *)(scene_context + 0x270) = *(int32_t *)(scene_data + 0x1b0);
  *(int32_t *)(scene_context + 0x274) = *(int32_t *)(scene_data + 0x1b4);
  *(int32_t *)(scene_context + 0x278) = *(int32_t *)(scene_data + 0x1b8);
  *(int32_t *)(scene_context + 0x27c) = *(int32_t *)(scene_data + 0x1bc);
  *(int32_t *)(scene_context + 0x280) = *(int32_t *)(scene_data + 0x1c0);
  *(int32_t *)(scene_context + 0x284) = *(int32_t *)(scene_data + 0x1c4);
  texture_offset = *(longlong *)(scene_context + 0xa8);
  texture_system = (uint64_t *)(_DAT_180c8a9d0 + 0x180);
  texture_cache = texture_system;
  texture_system = *(uint64_t **)(_DAT_180c8a9d0 + 400);
  if (*(uint64_t **)(_DAT_180c8a9d0 + 400) != (uint64_t *)0x0) {
    do {
      material_index = memcmp(texture_system + 4,texture_offset + 0xc,0x10);
      if (material_index < 0) {
        texture_system = (uint64_t *)*texture_system;
      }
      else {
        texture_system = (uint64_t *)texture_system[1];
        texture_cache = texture_system;
      }
      texture_system = texture_system;
    } while (texture_system != (uint64_t *)0x0);
    if (texture_cache != texture_system) {
      material_index = memcmp(texture_offset + 0xc,texture_cache + 4,0x10);
      if (-1 < material_index) goto LAB_texture_found;
    }
  }
  texture_cache = texture_system;
LAB_texture_found:
  if (texture_cache != texture_system) {
    old_material = texture_cache[6];
    new_material = texture_cache[7];
    *(int32_t *)(scene_context + 0x170) = 0;
    **(int8_t **)(scene_context + 0x168) = 0;
    setup_material_properties(scene_context + 0x160,&UNK_180a02954,old_material);
    *(uint64_t *)(scene_context + 0x148) = old_material;
    *(int32_t *)(scene_context + 0x1a8) = 0;
    **(int8_t **)(scene_context + 0x1a0) = 0;
    setup_material_properties(scene_context + 0x198,&UNK_180a02954,new_material);
    *(uint64_t *)(scene_context + 0x150) = new_material;
  }
  texture_format = *(uint *)(scene_context + 0x388);
  if ((texture_format >> 0x1e & 1) == 0) {
    if ((texture_format >> 0x1c & 1) == 0) {
      material_type = (byte)(texture_format >> 0x18);
      if ((int)texture_format < 0) {
        if ((texture_format >> 0x1b & 1) == 0) {
          material_type = material_type & 1 | 0xc;
        }
        else {
          material_type = material_type & 1 | 0xe;
        }
      }
      else if ((texture_format >> 0x19 & 1) == 0) {
        material_type = material_type & 1;
      }
      else if ((texture_format >> 0x1b & 1) == 0) {
        material_type = material_type & 1 | 2;
      }
      else {
        material_type = ((texture_format >> 0x18 & 1) != 0) + 7;
      }
    }
    else {
      material_type = 4;
    }
  }
  else {
    material_type = 9;
  }
  *(byte *)(scene_context + 0x38c) = material_type;
  initialize_scene_materials(scene_context);
  update_scene_render_state(scene_context);
                    // WARNING: Subroutine does not return
  security_check(stack_guard ^ (ulonglong)material_buffer);
}



ulonglong check_material_compatibility(longlong scene_context)

{
  bool is_compatible;
  ulonglong compatibility_flags;
  longlong string_search_result;
  void *scene_name;
  
  if ((*(uint *)(scene_context + 0x138) & 0x200) == 0) {
    scene_name = &DAT_18098bc73;
    if (*(void **)(scene_context + 0x2d8) != (void *)0x0) {
      scene_name = *(void **)(scene_context + 0x2d8);
    }
    string_search_result = strstr(scene_name,&UNK_180a13c2c);
    if (string_search_result == 0) {
      scene_name = &DAT_18098bc73;
      if (*(void **)(scene_context + 0x2d8) != (void *)0x0) {
        scene_name = *(void **)(scene_context + 0x2d8);
      }
      string_search_result = strstr(scene_name,&UNK_180a13c94);
      if (string_search_result == 0) {
        scene_name = &DAT_18098bc73;
        if (*(void **)(scene_context + 0x2d8) != (void *)0x0) {
          scene_name = *(void **)(scene_context + 0x2d8);
        }
        string_search_result = strstr(scene_name,&UNK_180a13ca0);
        if (string_search_result == 0) {
          scene_name = &DAT_18098bc73;
          if (*(void **)(scene_context + 0x2d8) != (void *)0x0) {
            scene_name = *(void **)(scene_context + 0x2d8);
          }
          string_search_result = strstr(scene_name,&UNK_180a12ea0);
          if (string_search_result == 0) {
            scene_name = &DAT_18098bc73;
            if (*(void **)(scene_context + 0x2d8) != (void *)0x0) {
              scene_name = *(void **)(scene_context + 0x2d8);
            }
            string_search_result = strstr(scene_name,&UNK_180a13c70);
            if (string_search_result == 0) {
              scene_name = &DAT_18098bc73;
              if (*(void **)(scene_context + 0x2d8) != (void *)0x0) {
                scene_name = *(void **)(scene_context + 0x2d8);
              }
              string_search_result = strstr(scene_name,&UNK_180a13c88);
              if (string_search_result == 0) {
                scene_name = &DAT_18098bc73;
                if (*(void **)(scene_context + 0x2d8) != (void *)0x0) {
                  scene_name = *(void **)(scene_context + 0x2d8);
                }
                string_search_result = strstr(scene_name,&UNK_180a13cac);
                if (string_search_result == 0) {
                  scene_name = &DAT_18098bc73;
                  if (*(void **)(scene_context + 0x2d8) != (void *)0x0) {
                    scene_name = *(void **)(scene_context + 0x2d8);
                  }
                  string_search_result = strstr(scene_name,&UNK_180a04998);
                  if (string_search_result == 0) {
                    scene_name = &DAT_18098bc73;
                    if (*(void **)(scene_context + 0x2d8) != (void *)0x0) {
                      scene_name = *(void **)(scene_context + 0x2d8);
                    }
                    string_search_result = strstr(scene_name,&DAT_180a1388c);
                    is_compatible = false;
                    if (string_search_result != 0) {
                      is_compatible = true;
                    }
                  }
                  else {
                    is_compatible = true;
                  }
                }
                else {
                  is_compatible = true;
                }
              }
              else {
                is_compatible = true;
              }
            }
            else {
              is_compatible = true;
            }
          }
          else {
            is_compatible = true;
          }
        }
        else {
          is_compatible = true;
        }
      }
      else {
        is_compatible = true;
      }
    }
    else {
      is_compatible = true;
    }
    compatibility_flags = (ulonglong)(*(uint *)(scene_context + 0x138) >> 0x13) & 0xffffffffffffff01;
    if ((is_compatible) &&
       ((((char)compatibility_flags != '\0' || ((*(uint *)(scene_context + 0x138) >> 0x12 & 1) != 0)) ||
        (*(char *)(scene_context + 0x13c) == '\x06' || *(char *)(scene_context + 0x13c) == '\0')))) {
      return CONCAT71((int7)(compatibility_flags >> 8),1);
    }
  }
  return compatibility_flags & 0xffffffffffffff00;
}



longlong verify_material_loading(void)

{
  bool is_loaded;
  longlong search_result;
  ulonglong load_flags;
  uint7 load_status;
  void *material_name;
  longlong scene_context;
  
  search_result = strstr();
  if (search_result == 0) {
    material_name = &DAT_18098bc73;
    if (*(void **)(scene_context + 0x2d8) != (void *)0x0) {
      material_name = *(void **)(scene_context + 0x2d8);
    }
    search_result = strstr(material_name,&UNK_180a13c94);
    if (search_result == 0) {
      material_name = &DAT_18098bc73;
      if (*(void **)(scene_context + 0x2d8) != (void *)0x0) {
        material_name = *(void **)(scene_context + 0x2d8);
      }
      search_result = strstr(material_name,&UNK_180a13ca0);
      if (search_result == 0) {
        material_name = &DAT_18098bc73;
        if (*(void **)(scene_context + 0x2d8) != (void *)0x0) {
          material_name = *(void **)(scene_context + 0x2d8);
        }
        search_result = strstr(material_name,&UNK_180a12ea0);
        if (search_result == 0) {
          material_name = &DAT_18098bc73;
          if (*(void **)(scene_context + 0x2d8) != (void *)0x0) {
            material_name = *(void **)(scene_context + 0x2d8);
          }
          search_result = strstr(material_name,&UNK_180a13c70);
          if (search_result == 0) {
            material_name = &DAT_18098bc73;
            if (*(void **)(scene_context + 0x2d8) != (void *)0x0) {
              material_name = *(void **)(scene_context + 0x2d8);
            }
            search_result = strstr(material_name,&UNK_180a13c88);
            if (search_result == 0) {
              material_name = &DAT_18098bc73;
              if (*(void **)(scene_context + 0x2d8) != (void *)0x0) {
                material_name = *(void **)(scene_context + 0x2d8);
              }
              search_result = strstr(material_name,&UNK_180a13cac);
              if (search_result == 0) {
                material_name = &DAT_18098bc73;
                if (*(void **)(scene_context + 0x2d8) != (void *)0x0) {
                  material_name = *(void **)(scene_context + 0x2d8);
                }
                search_result = strstr(material_name,&UNK_180a04998);
                if (search_result == 0) {
                  material_name = &DAT_18098bc73;
                  if (*(void **)(scene_context + 0x2d8) != (void *)0x0) {
                    material_name = *(void **)(scene_context + 0x2d8);
                  }
                  search_result = strstr(material_name,&DAT_180a1388c);
                  is_loaded = false;
                  if (search_result != 0) {
                    is_loaded = true;
                  }
                }
                else {
                  is_loaded = true;
                }
              }
              else {
                is_loaded = true;
              }
            }
            else {
              is_loaded = true;
            }
          }
          else {
            is_loaded = true;
          }
        }
        else {
          is_loaded = true;
        }
      }
      else {
        is_loaded = true;
      }
    }
    else {
      is_loaded = true;
    }
  }
  else {
    is_loaded = true;
  }
  load_flags = (ulonglong)(*(uint *)(scene_context + 0x138) >> 0x13) & 0xffffffffffffff01;
  load_status = (uint7)(load_flags >> 8);
  if ((is_loaded) &&
     ((((char)load_flags != '\0' || ((*(uint *)(scene_context + 0x138) >> 0x12 & 1) != 0)) ||
      (*(char *)(scene_context + 0x13c) == '\x06' || *(char *)(scene_context + 0x13c) == '\0')))) {
    return CONCAT71(load_status,1);
  }
  return (ulonglong)load_status << 8;
}



int8_t is_valid_material_character(char material_char)

{
  if (material_char != '\0') {
    return 1;
  }
  return 0;
}





// 函数: 计算材质哈希值
// 功能: 为材质系统计算哈希值，用于快速查找和缓存管理
void calculate_material_hash(ulonglong *hash_result,longlong scene_context)

{
  ulonglong hash_value1;
  ulonglong hash_value2;
  
  hash_value2 = 0;
  *hash_result = 0;
  hash_result[1] = 0;
  if (*(longlong *)(scene_context + 0xb8) != 0) {
    hash_value2 = *(ulonglong *)(*(longlong *)(scene_context + 0xb8) + 0x278);
    hash_value2 = (((((((hash_value2 >> 8 & 0xff ^ (hash_value2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                  0x100000001b3 ^ hash_value2 >> 0x10 & 0xff) * 0x100000001b3 ^ hash_value2 >> 0x18 & 0xff) *
                0x100000001b3 ^ hash_value2 >> 0x20 & 0xff) * 0x100000001b3 ^ hash_value2 >> 0x28 & 0xff) *
              0x100000001b3 ^ hash_value2 >> 0x30 & 0xff) * 0x100000001b3 ^ hash_value2 >> 0x38) *
            0x7ba81627b075296b;
    hash_value2 = (hash_value2 >> 0x2f ^ hash_value2) * -0x622015f714c7d297;
    hash_value2 = (hash_value2 >> 0x2f ^ hash_value2) * -0x622015f714c7d297;
    *hash_result = hash_value2;
  }
  if (*(longlong *)(scene_context + 200) != 0) {
    hash_value1 = *(ulonglong *)(*(longlong *)(scene_context + 200) + 0x278);
    hash_value1 = (hash_value2 ^ (((((((hash_value1 >> 8 & 0xff ^ (hash_value1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3)
                           * 0x100000001b3 ^ hash_value1 >> 0x10 & 0xff) * 0x100000001b3 ^
                         hash_value1 >> 0x18 & 0xff) * 0x100000001b3 ^ hash_value1 >> 0x20 & 0xff) *
                        0x100000001b3 ^ hash_value1 >> 0x28 & 0xff) * 0x100000001b3 ^ hash_value1 >> 0x30 & 0xff
                      ) * 0x100000001b3 ^ hash_value1 >> 0x38) * 0x100000001b3) * -0x622015f714c7d297;
    hash_value2 = (hash_value1 >> 0x2f ^ hash_value2 ^ hash_value1) * -0x622015f714c7d297;
    hash_value2 = (hash_value2 >> 0x2f ^ hash_value2) * -0x622015f714c7d297;
    *hash_result = hash_value2;
  }
  if (*(longlong *)(scene_context + 0xd8) != 0) {
    hash_value1 = *(ulonglong *)(*(longlong *)(scene_context + 0xd8) + 0x278);
    hash_value1 = (hash_value2 ^ (((((((hash_value1 >> 8 & 0xff ^ (hash_value1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3)
                           * 0x100000001b3 ^ hash_value1 >> 0x10 & 0xff) * 0x100000001b3 ^
                         hash_value1 >> 0x18 & 0xff) * 0x100000001b3 ^ hash_value1 >> 0x20 & 0xff) *
                        0x100000001b3 ^ hash_value1 >> 0x28 & 0xff) * 0x100000001b3 ^ hash_value1 >> 0x30 & 0xff
                      ) * 0x100000001b3 ^ hash_value1 >> 0x38) * 0x100000001b3) * -0x622015f714c7d297;
    hash_value2 = (hash_value1 >> 0x2f ^ hash_value2 ^ hash_value1) * -0x622015f714c7d297;
    *hash_result = (hash_value2 >> 0x2f ^ hash_value2) * -0x622015f714c7d297;
  }
  if (*(longlong *)(scene_context + 0xc0) != 0) {
    hash_value2 = *(ulonglong *)(*(longlong *)(scene_context + 0xc0) + 0x278);
    hash_value2 = (hash_result[1] ^
            (((((((hash_value2 >> 8 & 0xff ^ (hash_value2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                  0x100000001b3 ^ hash_value2 >> 0x10 & 0xff) * 0x100000001b3 ^ hash_value2 >> 0x18 & 0xff) *
                0x100000001b3 ^ hash_value2 >> 0x20 & 0xff) * 0x100000001b3 ^ hash_value2 >> 0x28 & 0xff) *
              0x100000001b3 ^ hash_value2 >> 0x30 & 0xff) * 0x100000001b3 ^ hash_value2 >> 0x38) * 0x100000001b3
            ) * -0x622015f714c7d297;
    hash_value2 = (hash_value2 >> 0x2f ^ hash_result[1] ^ hash_value2) * -0x622015f714c7d297;
    hash_result[1] = (hash_value2 >> 0x2f ^ hash_value2) * -0x622015f714c7d297;
  }
  if (*(longlong *)(scene_context + 0xd0) != 0) {
    hash_value2 = *(ulonglong *)(*(longlong *)(scene_context + 0xd0) + 0x278);
    hash_value2 = (hash_result[1] ^
            (((((((hash_value2 >> 8 & 0xff ^ (hash_value2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                  0x100000001b3 ^ hash_value2 >> 0x10 & 0xff) * 0x100000001b3 ^ hash_value2 >> 0x18 & 0xff) *
                0x100000001b3 ^ hash_value2 >> 0x20 & 0xff) * 0x100000001b3 ^ hash_value2 >> 0x28 & 0xff) *
              0x100000001b3 ^ hash_value2 >> 0x30 & 0xff) * 0x100000001b3 ^ hash_value2 >> 0x38) * 0x100000001b3
            ) * -0x622015f714c7d297;
    hash_value2 = (hash_value2 >> 0x2f ^ hash_result[1] ^ hash_value2) * -0x622015f714c7d297;
    hash_result[1] = (hash_value2 >> 0x2f ^ hash_value2) * -0x622015f714c7d297;
  }
  return;
}





// 函数: 清理材质缓存
// 功能: 释放材质缓存中的资源，确保内存正确释放
void cleanup_material_cache(longlong *cache_ptr)

{
  uint64_t *cache_start;
  uint64_t *cache_end;
  
  cache_start = (uint64_t *)cache_ptr[1];
  cache_end = (uint64_t *)*cache_ptr;
  if (cache_end != cache_start) {
    do {
      (**(code **)*cache_end)(cache_end,0);
      cache_end = cache_end + 0xb;
    } while (cache_end != cache_start);
    cache_ptr[1] = *cache_ptr;
    return;
  }
  cache_ptr[1] = (longlong)cache_end;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address


