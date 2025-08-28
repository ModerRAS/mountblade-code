#include "TaleWorlds.Native.Split.h"

// 03_rendering_part022.c - 渲染系统元网格组件处理器
// 本文件包含元网格组件处理和材质导出的复杂函数

/**
 * 元网格组件处理和材质应用函数
 * 这是一个复杂的元网格组件处理函数，负责：
 * 1. 处理元网格组件的创建和初始化
 * 2. 比较和验证网格组件属性
 * 3. 处理材质参数和颜色数据
 * 4. 管理网格组件的层次结构
 * 5. 应用变换和材质属性
 * 
 * @param component_data 元网格组件数据指针
 * @param scene_manager 场景管理器指针
 * @param render_context 渲染上下文指针
 * @param target_component 目标组件指针
 * @param processing_flags 处理标志，控制处理行为
 */
void meta_mesh_component_processor(void *component_data, longlong scene_manager, longlong render_context, void *target_component, int processing_flags)
{
  byte *mesh_data_ptr1;
  char name_compare_char1;
  char name_compare_char2;
  bool component_names_match;
  char component_char;
  int comparison_index;
  uint32_t material_param;
  uint texture_value;
  void *component_ptr;
  char *component_name1;
  char *component_name2;
  longlong mesh_data_offset1;
  longlong mesh_data_offset2;
  void *material_system_ptr;
  char *texture_name_ptr;
  byte *mesh_data_ptr2;
  longlong component_reference;
  uint mesh_property_count1;
  uint mesh_property_count2;
  void *heap_allocation1;
  longlong data_offset;
  int mesh_entry_count;
  bool mesh_properties_equal;
  char *material_identifier;
  int processing_indices[2];
  void *temp_component_ptr;
  char component_path_segment[8];
  char *component_string_buffer;
  uint32_t component_string_length;
  uint64_t component_path_hash;
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
  
  stack_parameter3 = 0xfffffffffffffffe;
  component_ptr = (void *)mesh_component_allocator(scene_manager + 0x60, 0x60);
  *component_ptr = 0;
  *(void **)((longlong)component_ptr + 8) = 0;
  *(void **)((longlong)component_ptr + 32) = 0;
  *(uint32_t *)((longlong)component_ptr + 20) = 1;
  *(void **)((longlong)component_ptr + 48) = 0;
  *(void **)((longlong)component_ptr + 64) = 0;
  component_name1 = "meta_mesh_component";
  do {
    component_name2 = component_name1;
    component_name1 = component_name2 + 1;
  } while (*component_name1 != '\0');
  *(void **)component_ptr = &META_MESH_COMPONENT_TYPE;
  *(longlong *)((longlong)component_ptr + 16) = component_name2 + -0x180a09d7f;
  if (target_component == (void *)0x0) {
    mesh_data_offset1 = get_current_scene_context();
    comparison_index = *(int *)((longlong)component_data + 0x40);
    if (comparison_index == *(int *)(mesh_data_offset1 + 0x10)) {
      if (comparison_index == 0) {
LAB_MESH_NAMES_EMPTY:
        if (*(int *)(mesh_data_offset1 + 0x10) != 0) goto LAB_MESH_NAMES_DIFFERENT;
      }
      else {
        component_name1 = (char *)component_data[0x3f];
        component_name2 = component_name1;
        do {
          component_char = *component_name2;
          name_compare_char2 = component_name2[*(longlong *)(mesh_data_offset1 + 8) - (longlong)component_name1];
          if (component_char != name_compare_char2) break;
          component_name2 = component_name2 + 1;
        } while (name_compare_char2 != '\0');
        if (component_char != name_compare_char2) goto LAB_MESH_NAMES_DIFFERENT;
      }
    }
    else {
      if (comparison_index == 0) goto LAB_MESH_NAMES_EMPTY;
LAB_MESH_NAMES_DIFFERENT:
      component_name1 = (char *)component_data[0x3f];
    }
    component_name2 = "";
    if (component_name1 != (char *)0x0) {
      component_name2 = component_name1;
    }
    add_material_to_scene(scene_manager, component_ptr, &MATERIAL_PROPERTY_TABLE, component_name2);
    temp_component_ptr = (void *)component_reference_allocator(COMPONENT_REGISTRY_HANDLE, component_data + 0x3e, 1);
    if (temp_component_ptr == (void *)0x0) {
      return;
    }
    goto LAB_COMPONENT_PROCESSING;
  }
  comparison_index = *(int *)((longlong)component_data + 0x40);
  temp_component_ptr = target_component;
  if (comparison_index == *(int *)((longlong)target_component + 0x40)) {
    if (comparison_index == 0) {
LAB_COMPONENT_NAMES_EQUAL:
      if (*(int *)((longlong)target_component + 0x40) == 0) goto LAB_COMPONENT_PROCESSING;
      goto LAB_COMPONENT_NAMES_DIFFERENT;
    }
    component_name1 = (char *)component_data[0x3f];
    component_name2 = component_name1;
    do {
      component_char = *component_name2;
      name_compare_char2 = component_name2[target_component[0x3f] - (longlong)component_name1];
      if (component_char != name_compare_char2) break;
      component_name2 = component_name2 + 1;
    } while (name_compare_char2 != '\0');
    if (component_char == name_compare_char2) goto LAB_COMPONENT_PROCESSING;
  }
  else {
    if (comparison_index == 0) goto LAB_COMPONENT_NAMES_EQUAL;
LAB_COMPONENT_NAMES_DIFFERENT:
    component_name1 = (char *)component_data[0x3f];
  }
  component_name2 = "";
  if (component_name1 != (char *)0x0) {
    component_name2 = component_name1;
  }
  add_material_to_scene(scene_manager, component_ptr, &MATERIAL_PROPERTY_TABLE, component_name2);
LAB_COMPONENT_PROCESSING:
  if (*(int *)((longlong)component_data + 0x324) != *(int *)((longlong)temp_component_ptr + 0x324)) {
    add_rendering_parameter(scene_manager, component_ptr, &RENDERING_QUALITY_SETTING);
  }
  if ((void *)*temp_component_ptr == &DEFAULT_MESH_COMPONENT) {
    material_system_ptr = temp_component_ptr + 0x66;
  }
  else {
    material_system_ptr = (void *)(**(code **)((void *)*temp_component_ptr + 0x158))(temp_component_ptr);
  }
  if ((void *)*component_data == &DEFAULT_MESH_COMPONENT) {
    texture_object_ptr2 = component_data + 0x66;
  }
  else {
    texture_object_ptr2 = (void *)(**(code **)((void *)*component_data + 0x158))(component_data);
  }
  component_char = compare_mesh_properties(material_system_ptr, texture_object_ptr2, 0x3c23d70a);
  if (component_char == '\0') {
    float source_scale_x = *(float *)((longlong)component_data + 0x6c);
    float source_scale_y = *(float *)((longlong)component_data + 0x364);
    float source_scale_z = *(float *)((longlong)component_data + 0x6d);
    uint32_t source_scale_w = *(uint32_t *)((longlong)component_data + 0x36c);
    extract_mesh_transform(component_data + 0x66, &mesh_transform_scale);
    extract_mesh_rotation(component_data + 0x66, mesh_rotation_data);
    add_material_to_scene(scene_manager, component_ptr, &MESH_SCALE_PROPERTY, &source_scale_x);
    add_material_to_scene(scene_manager, component_ptr, &MESH_TRANSFORM_PROPERTY, &mesh_transform_scale);
    add_material_to_scene(scene_manager, component_ptr, &MESH_ROTATION_PROPERTY, mesh_rotation_data);
  }
  if (component_data[0x77] != 0) {
    heap_allocation1 = *(void **)(component_data[0x77] + 0x18);
    heap_ptr2 = &DEFAULT_STRING_VALUE;
    if (heap_allocation1 != (void *)0x0) {
      heap_ptr2 = heap_allocation1;
    }
    add_material_to_scene(scene_manager, component_ptr, &MESH_CUSTOM_PROPERTY, heap_ptr2);
  }
  processing_indices[0] = 0;
  mesh_data_offset1 = component_data[7];
  if (component_data[8] - mesh_data_offset1 >> 4 != 0) {
    mesh_rotation_data[0] = 0;
    do {
      mesh_data_offset2 = mesh_rotation_data[0];
      heap_allocation1 = &DEFAULT_MEMORY_VALUE;
      mesh_data_offset1 = *(longlong *)(mesh_data_offset1 + mesh_rotation_data[0] * 0x10);
      if (*(longlong *)(mesh_data_offset1 + 0x1b0) == 0) {
        mesh_data_offset2 = mesh_data_offset1 + 0x10;
      }
      else {
        mesh_data_offset2 = get_mesh_data_reference();
      }
      texture_memory_size = 0;
      mesh_data_ptr2 = (byte *)0x0;
      texture_path_length = 0;
      heap_allocation1 = &DEFAULT_MEMORY_VALUE;
      allocate_string_buffer(&heap_allocation1, *(uint32_t *)(mesh_data_offset2 + 0x10));
      if (0 < *(int *)(mesh_data_offset2 + 0x10)) {
        heap_allocation1 = &DEFAULT_STRING_VALUE;
        if (*(void **)(mesh_data_offset2 + 8) != (void *)0x0) {
          heap_allocation1 = *(void **)(mesh_data_offset2 + 8);
        }
        memcpy(mesh_data_ptr2, heap_allocation1, (longlong)(*(int *)(mesh_data_offset2 + 0x10) + 1));
      }
      if ((*(longlong *)(mesh_data_offset2 + 8) != 0) && (texture_path_length = 0, mesh_data_ptr2 != (byte *)0x0)) {
        *mesh_data_ptr2 = 0;
      }
      while ((0 < (int)texture_path_length && (mesh_data_offset2 = strstr(mesh_data_ptr2, &INVALID_CHARACTER_SEQUENCE), mesh_data_offset2 != 0))) {
        comparison_index = 6;
        parameter_count = (int)mesh_data_offset2 - (int)mesh_data_ptr2;
        if (texture_path_length < parameter_count + 6U) {
          comparison_index = texture_path_length - parameter_count;
        }
        texture_value = parameter_count + comparison_index;
        if (texture_value < texture_path_length) {
          mesh_data_offset2 = (longlong)(int)texture_value;
          do {
            mesh_data_ptr2[mesh_data_offset2 - comparison_index] = mesh_data_ptr2[mesh_data_offset2];
            texture_value = texture_value + 1;
            mesh_data_offset2 = mesh_data_offset2 + 1;
          } while (texture_value < texture_path_length);
        }
        texture_path_length = texture_path_length - comparison_index;
        mesh_data_ptr2[texture_path_length] = 0;
      }
      material_system_ptr = (void *)mesh_component_allocator(scene_manager + 0x60, 0x60);
      *material_system_ptr = 0;
      *(void **)((longlong)material_system_ptr + 8) = 0;
      *(void **)((longlong)material_system_ptr + 32) = 0;
      *(uint32_t *)((longlong)material_system_ptr + 20) = 1;
      *(void **)((longlong)material_system_ptr + 48) = 0;
      *(void **)((longlong)material_system_ptr + 64) = 0;
      component_name1 = "mesh";
      do {
        component_name2 = component_name1;
        component_name1 = component_name2 + 1;
      } while (*component_name1 != '\0');
      *(void **)material_system_ptr = &MESH_COMPONENT_TYPE;
      *(longlong *)((longlong)material_system_ptr + 16) = component_name2 + -0x180a0f3e7;
      stack_char1 = 0;
      stack_memory_offset = 0;
      if ((longlong)(component_data[8] - component_data[7]) >> 4 != 0) {
        do {
          texture_identifier = (byte *)0x0;
          mesh_data_offset2 = *(longlong *)(temp_component_ptr[7] + stack_memory_offset * 0x10);
          if (*(longlong *)(mesh_data_offset2 + 0x1b0) == 0) {
            mesh_data_offset2 = mesh_data_offset2 + 0x10;
          }
          else {
            mesh_data_offset2 = get_mesh_data_reference();
          }
          texture_processing_flag = (uint32_t)texture_identifier;
          heap_ptr1 = &DEFAULT_MEMORY_VALUE;
          texture_memory_size = 0;
          heap_ptr2 = texture_identifier;
          if (*(int *)(mesh_data_offset2 + 0x10) != 0) {
            parameter_count = *(int *)(mesh_data_offset2 + 0x10) + 1;
            if (parameter_count < 0x10) {
              parameter_count = 0x10;
            }
            heap_ptr1 = texture_identifier;
            texture_identifier = (byte *)string_buffer_allocator(MEMORY_ALLOCATOR_HANDLE, (longlong)parameter_count, 0x13);
            *texture_identifier = 0;
            texture_memory_size = calculate_string_hash(texture_identifier);
            if (0 < *(int *)(mesh_data_offset2 + 0x10)) {
              heap_allocation1 = &DEFAULT_STRING_VALUE;
              if (*(void **)(mesh_data_offset2 + 8) != (void *)0x0) {
                heap_allocation1 = *(void **)(mesh_data_offset2 + 8);
              }
              memcpy(texture_identifier, heap_allocation1, (longlong)(*(int *)(mesh_data_offset2 + 0x10) + 1));
            }
          }
          heap_ptr1 = texture_identifier;
          if ((*(longlong *)(mesh_data_offset2 + 8) != 0) && (texture_processing_flag = 0, texture_identifier != (byte *)0x0)) {
            *texture_identifier = 0;
          }
          while ((0 < (int)texture_processing_flag && (mesh_data_offset2 = strstr(heap_ptr1, &INVALID_CHARACTER_SEQUENCE), mesh_data_offset2 != 0))) {
            comparison_index = 6;
            parameter_count = (int)mesh_data_offset2 - (int)heap_ptr1;
            if (texture_processing_flag < parameter_count + 6U) {
              comparison_index = texture_processing_flag - parameter_count;
            }
            texture_value = parameter_count + comparison_index;
            if (texture_value < texture_processing_flag) {
              mesh_data_offset2 = (longlong)(int)texture_value;
              do {
                heap_ptr1[mesh_data_offset2 - comparison_index] = heap_ptr1[mesh_data_offset2];
                texture_value = texture_value + 1;
                mesh_data_offset2 = mesh_data_offset2 + 1;
              } while (texture_value < texture_processing_flag);
            }
            texture_processing_flag = texture_processing_flag - comparison_index;
            heap_ptr1[texture_processing_flag] = 0;
          }
          mesh_properties_equal = true;
          texture_value = texture_processing_flag;
          if (texture_path_length == texture_processing_flag) {
            if (texture_path_length != 0) {
              mesh_data_ptr2 = mesh_data_ptr2;
              do {
                mesh_data_ptr1 = mesh_data_ptr2 + ((longlong)heap_ptr1 - (longlong)mesh_data_ptr2);
                texture_value = (uint32_t)*mesh_data_ptr2 - (uint32_t)*mesh_data_ptr1;
                if (texture_value != 0) break;
                mesh_data_ptr2 = mesh_data_ptr2 + 1;
              } while (*mesh_data_ptr1 != 0);
            }
LAB_MESH_PROPERTIES_MATCH:
            if (texture_value == 0) {
              if ((*(longlong *)(mesh_data_offset1 + 0x1b8) != 0) && (*(longlong *)(*(longlong *)(mesh_data_offset1 + 0x1b8) + 0xa8) != 0)) {
                mesh_data_offset2 = get_mesh_property_data(mesh_data_offset1);
                mesh_data_offset1 = get_mesh_property_data(mesh_data_offset2);
                parameter_count = *(int *)(mesh_data_offset2 + 0x10);
                if (parameter_count == *(int *)(mesh_data_offset1 + 0x10)) {
                  if (parameter_count == 0) {
LAB_MESH_PROPERTIES_IDENTICAL:
                    if (*(int *)(mesh_data_offset1 + 0x10) != 0) goto LAB_MESH_PROPERTIES_DIFFERENT;
                    component_names_match = true;
                  }
                  else {
                    component_name1 = *(char **)(mesh_data_offset2 + 8);
                    mesh_data_offset2 = *(longlong *)(mesh_data_offset1 + 8) - (longlong)component_name1;
                    do {
                      component_char = *component_name1;
                      name_compare_char2 = component_name1[mesh_data_offset2];
                      if (component_char != name_compare_char2) break;
                      component_name1 = component_name1 + 1;
                    } while (name_compare_char2 != '\0');
                    component_names_match = component_char == name_compare_char2;
                  }
                }
                else {
                  if (parameter_count == 0) goto LAB_MESH_PROPERTIES_IDENTICAL;
LAB_MESH_PROPERTIES_DIFFERENT:
                  component_names_match = false;
                }
                if (!component_names_match) {
                  mesh_data_ptr2 = &DEFAULT_STRING_VALUE;
                  if (mesh_data_ptr2 != (byte *)0x0) {
                    mesh_data_ptr2 = mesh_data_ptr2;
                  }
                  add_material_to_scene(scene_manager, material_system_ptr, &MATERIAL_PROPERTY_TABLE, mesh_data_ptr2);
                  mesh_properties_equal = false;
                  mesh_data_offset2 = get_mesh_property_data(mesh_data_offset1);
                  heap_ptr1 = &DEFAULT_MEMORY_VALUE;
                  texture_memory_size = 0;
                  heap_ptr2 = (byte *)0x0;
                  texture_path_length = 0;
                  parameter_count = *(int *)(mesh_data_offset2 + 0x10);
                  if (parameter_count != 0) {
                    comparison_index = parameter_count + 1;
                    if (comparison_index < 0x10) {
                      comparison_index = 0x10;
                    }
                    heap_ptr2 = (byte *)string_buffer_allocator(MEMORY_ALLOCATOR_HANDLE, (longlong)comparison_index, 0x13);
                    *heap_ptr2 = 0;
                    material_param = calculate_string_hash(heap_ptr2);
                    texture_memory_size = CONCAT44(texture_memory_size._4_4_, material_param);
                    if (0 < *(int *)(mesh_data_offset2 + 0x10)) {
                      heap_allocation1 = &DEFAULT_STRING_VALUE;
                      if (*(void **)(mesh_data_offset2 + 8) != (void *)0x0) {
                        heap_allocation1 = *(void **)(mesh_data_offset2 + 8);
                      }
                      memcpy(heap_ptr2, heap_allocation1, (longlong)(*(int *)(mesh_data_offset2 + 0x10) + 1));
                    }
                  }
                  if ((*(longlong *)(mesh_data_offset2 + 8) != 0) && (texture_path_length = 0, heap_ptr2 != (byte *)0x0)) {
                    *heap_ptr2 = 0;
                  }
                  while ((0 < (int)texture_path_length && (mesh_data_offset2 = strstr(heap_ptr2, &INVALID_CHARACTER_SEQUENCE), mesh_data_offset2 != 0))) {
                    comparison_index = 6;
                    parameter_count = (int)mesh_data_offset2 - (int)heap_ptr2;
                    if (texture_path_length < parameter_count + 6U) {
                      comparison_index = texture_path_length - parameter_count;
                    }
                    texture_value = parameter_count + comparison_index;
                    if (texture_value < texture_path_length) {
                      mesh_data_offset2 = (longlong)(int)texture_value;
                      do {
                        heap_ptr2[mesh_data_offset2 - comparison_index] = heap_ptr2[mesh_data_offset2];
                        texture_value = texture_value + 1;
                        mesh_data_offset2 = mesh_data_offset2 + 1;
                      } while (texture_value < texture_path_length);
                    }
                    texture_path_length = texture_path_length - comparison_index;
                    heap_ptr2[texture_path_length] = 0;
                  }
                  heap_allocation1 = &DEFAULT_STRING_VALUE;
                  if (heap_ptr2 != (byte *)0x0) {
                    heap_allocation1 = heap_ptr2;
                  }
                  add_material_to_scene(scene_manager, material_system_ptr, &MESH_DIFFUSE_PROPERTY, heap_allocation1);
                  heap_ptr1 = &DEFAULT_MEMORY_VALUE;
                  if (heap_ptr2 != (byte *)0x0) {
                    memory_deallocator(heap_ptr2);
                  }
                  heap_ptr2 = (byte *)0x0;
                  texture_memory_size = texture_memory_size & 0xffffffff00000000;
                  heap_ptr1 = &MEMORY_DEALLOCATOR_HANDLE;
                }
              }
              mesh_transform_scale = *(float *)(mesh_data_offset1 + 0x238);
              mesh_rotation_data[1] = *(float *)(mesh_data_offset1 + 0x23c);
              mesh_rotation_data[2] = *(float *)(mesh_data_offset1 + 0x240);
              buffer_parameter = *(uint32_t *)(mesh_data_offset1 + 0x244);
              source_scale_x = *(float *)(mesh_data_offset2 + 0x238);
              source_scale_y = *(float *)(mesh_data_offset2 + 0x23c);
              source_scale_z = *(float *)(mesh_data_offset2 + 0x240);
              source_scale_w = *(uint32_t *)(mesh_data_offset2 + 0x244);
              if (((mesh_transform_scale != source_scale_x) || (mesh_rotation_data[1] != source_scale_y)) || (mesh_rotation_data[2] != source_scale_z)) {
                if (mesh_properties_equal) {
                  mesh_data_ptr2 = &DEFAULT_STRING_VALUE;
                  if (mesh_data_ptr2 != (byte *)0x0) {
                    mesh_data_ptr2 = mesh_data_ptr2;
                  }
                  add_material_to_scene(scene_manager, material_system_ptr, &MATERIAL_PROPERTY_TABLE, mesh_data_ptr2);
                  mesh_properties_equal = false;
                }
                texture_value = (uint32_t)(longlong)(*(float *)(mesh_data_offset1 + 0x244) * 256.0);
                parameter_count = 0xff;
                if (texture_value < 0xff) {
                  parameter_count = texture_value;
                }
                mesh_property_count1 = (uint32_t)(longlong)(*(float *)(mesh_data_offset1 + 0x238) * 256.0);
                texture_value = 0xff;
                if (mesh_property_count1 < 0xff) {
                  texture_value = mesh_property_count1;
                }
                mesh_property_count2 = (uint32_t)(longlong)(*(float *)(mesh_data_offset1 + 0x23c) * 256.0);
                mesh_property_count1 = 0xff;
                if (mesh_property_count2 < 0xff) {
                  mesh_property_count1 = mesh_property_count2;
                }
                texture_path_length = (uint32_t)(longlong)(*(float *)(mesh_data_offset1 + 0x240) * 256.0);
                mesh_property_count2 = 0xff;
                if (texture_path_length < 0xff) {
                  mesh_property_count2 = texture_path_length;
                }
                add_material_color_property(scene_manager, material_system_ptr, &MESH_AMBIENT_COLOR, ((parameter_count << 8 | texture_value) << 8 | mesh_property_count1) << 8 | mesh_property_count2);
              }
              source_scale_x = *(float *)(mesh_data_offset1 + 0x248);
              source_scale_y = *(float *)(mesh_data_offset1 + 0x24c);
              source_scale_z = *(float *)(mesh_data_offset1 + 0x250);
              source_scale_w = *(uint32_t *)(mesh_data_offset1 + 0x254);
              mesh_transform_scale = *(float *)(mesh_data_offset2 + 0x248);
              mesh_rotation_data[1] = *(float *)(mesh_data_offset2 + 0x24c);
              mesh_rotation_data[2] = *(float *)(mesh_data_offset2 + 0x250);
              buffer_parameter = *(uint32_t *)(mesh_data_offset2 + 0x254);
              if (((source_scale_x != mesh_transform_scale) || (source_scale_y != mesh_rotation_data[1])) || (source_scale_z != mesh_rotation_data[2])) {
                if (mesh_properties_equal) {
                  mesh_data_ptr2 = &DEFAULT_STRING_VALUE;
                  if (mesh_data_ptr2 != (byte *)0x0) {
                    mesh_data_ptr2 = mesh_data_ptr2;
                  }
                  add_material_to_scene(scene_manager, material_system_ptr, &MATERIAL_PROPERTY_TABLE, mesh_data_ptr2);
                  mesh_properties_equal = false;
                }
                texture_value = (uint32_t)(longlong)(*(float *)(mesh_data_offset1 + 0x254) * 256.0);
                parameter_count = 0xff;
                if (texture_value < 0xff) {
                  parameter_count = texture_value;
                }
                mesh_property_count1 = (uint32_t)(longlong)(*(float *)(mesh_data_offset1 + 0x248) * 256.0);
                texture_value = 0xff;
                if (mesh_property_count1 < 0xff) {
                  texture_value = mesh_property_count1;
                }
                mesh_property_count2 = (uint32_t)(longlong)(*(float *)(mesh_data_offset1 + 0x24c) * 256.0);
                mesh_property_count1 = 0xff;
                if (mesh_property_count2 < 0xff) {
                  mesh_property_count1 = mesh_property_count2;
                }
                texture_path_length = (uint32_t)(longlong)(*(float *)(mesh_data_offset1 + 0x250) * 256.0);
                mesh_property_count2 = 0xff;
                if (texture_path_length < 0xff) {
                  mesh_property_count2 = texture_path_length;
                }
                add_material_color_property(scene_manager, material_system_ptr, &MESH_DIFFUSE_COLOR, ((parameter_count << 8 | texture_value) << 8 | mesh_property_count1) << 8 | mesh_property_count2);
              }
              if (((*(float *)(mesh_data_offset2 + 0x2a8) != *(float *)(mesh_data_offset1 + 0x2a8)) || (*(float *)(mesh_data_offset2 + 0x2ac) != *(float *)(mesh_data_offset1 + 0x2ac))) || (*(float *)(mesh_data_offset2 + 0x2b0) != *(float *)(mesh_data_offset1 + 0x2b0))) {
                if (mesh_properties_equal) {
                  mesh_data_ptr2 = &DEFAULT_STRING_VALUE;
                  if (mesh_data_ptr2 != (byte *)0x0) {
                    mesh_data_ptr2 = mesh_data_ptr2;
                  }
                  add_material_to_scene(scene_manager, material_system_ptr, &MATERIAL_PROPERTY_TABLE, mesh_data_ptr2);
                  mesh_properties_equal = false;
                }
                add_material_vector_property(scene_manager, material_system_ptr, &MESH_SPECULAR_PROPERTY, mesh_data_offset1 + 0x2a8);
              }
              if (((*(float *)(mesh_data_offset2 + 0x2b8) != *(float *)(mesh_data_offset1 + 0x2b8)) || (*(float *)(mesh_data_offset2 + 700) != *(float *)(mesh_data_offset1 + 700))) || (*(float *)(mesh_data_offset2 + 0x2c0) != *(float *)(mesh_data_offset1 + 0x2c0))) {
                if (mesh_properties_equal) {
                  mesh_data_ptr2 = &DEFAULT_STRING_VALUE;
                  if (mesh_data_ptr2 != (byte *)0x0) {
                    mesh_data_ptr2 = mesh_data_ptr2;
                  }
                  add_material_to_scene(scene_manager, material_system_ptr, &MATERIAL_PROPERTY_TABLE, mesh_data_ptr2);
                  mesh_properties_equal = false;
                }
                add_material_vector_property(scene_manager, material_system_ptr, &MESH_EMISSIVE_PROPERTY, mesh_data_offset1 + 0x2b8);
              }
              if (!mesh_properties_equal) {
                if (component_ptr[6] == 0) {
                  material_system_ptr[10] = 0;
                  component_ptr[6] = material_system_ptr;
                }
                else {
                  material_system_ptr[10] = component_ptr[7];
                  *(void **)(component_ptr[7] + 0x58) = material_system_ptr;
                }
                component_ptr[7] = material_system_ptr;
                material_system_ptr[4] = component_ptr;
                material_system_ptr[0xb] = 0;
              }
            }
          }
          else if (texture_path_length == 0) goto LAB_MESH_PROPERTIES_MATCH;
          heap_ptr1 = &DEFAULT_MEMORY_VALUE;
          if (heap_ptr1 != (void *)0x0) {
            memory_deallocator(heap_ptr1);
          }
          heap_ptr1 = (void *)0x0;
          texture_memory_size = texture_memory_size & 0xffffffff00000000;
          heap_ptr1 = &MEMORY_DEALLOCATOR_HANDLE;
          stack_char1 = stack_char1 + 1;
          stack_memory_offset = stack_memory_offset + 1;
          mesh_data_offset2 = mesh_rotation_data[0];
        } while ((ulonglong)(longlong)stack_char1 < (ulonglong)((longlong)(component_data[8] - component_data[7]) >> 4));
      }
      heap_allocation1 = &DEFAULT_MEMORY_VALUE;
      if (mesh_data_ptr2 != (byte *)0x0) {
        memory_deallocator(mesh_data_ptr2);
      }
      mesh_data_ptr2 = (byte *)0x0;
      texture_memory_size = texture_memory_size & 0xffffffff00000000;
      heap_allocation1 = &MEMORY_DEALLOCATOR_HANDLE;
      processing_indices[0] = processing_indices[0] + 1;
      mesh_rotation_data[0] = mesh_data_offset2 + 1;
      mesh_data_offset1 = component_data[7];
    } while ((ulonglong)(longlong)processing_indices[0] < (ulonglong)(component_data[8] - mesh_data_offset1 >> 4));
  }
  if ((component_ptr[6] != 0) || (component_ptr[8] != 0)) {
    if (processing_flags != 0) {
      add_rendering_parameter(scene_manager, component_ptr, &MESH_EXPORT_FLAG);
    }
    if (*(longlong *)(render_context + 0x30) == 0) {
      component_ptr[10] = 0;
      *(void **)(render_context + 0x30) = component_ptr;
    }
    else {
      component_ptr[10] = *(void *)(render_context + 0x38);
      *(void **)(*(longlong *)(render_context + 0x38) + 0x58) = component_ptr;
    }
    *(void **)(render_context + 0x38) = component_ptr;
    component_ptr[4] = render_context;
    component_ptr[0xb] = 0;
  }
  return;
}

/**
 * 材质数据导出函数
 * 将场景中的材质数据导出为MMD格式文件
 * 
 * @param scene_context 场景上下文指针，包含材质和网格数据
 */
void material_data_exporter(longlong scene_context)
{
  int *material_reference_count;
  char path_separator_char;
  longlong mesh_data_offset;
  void *material_system_ptr;
  uint32_t *material_parameter_array;
  void *heap_allocation1;
  uint32_t material_string_length;
  ulonglong material_export_count;
  int material_index;
  longlong material_data_offset;
  ulonglong material_total_count;
  bool export_complete;
  int export_indices[2];
  int material_count_indices[2];
  int mesh_entry_indices[2];
  char material_path_buffer[8];
  void *material_string_buffer;
  uint32_t buffer_length;
  uint64_t path_hash_value;
  int hash_indices[2];
  bool material_export_flag;
  int processing_indices[2];
  int file_header_data[2];
  char export_data_buffer[8];
  void *heap_ptr1;
  uint32_t material_data_size;
  uint64_t export_file_handle;
  int material_entry_count;
  longlong material_file_offset;
  uint32_t export_header_value;
  longlong *material_entry_ptr;
  void *heap_ptr2;
  longlong material_entry_offset;
  uint32_t material_property_count;
  longlong material_property_offset;
  longlong *stack_ptr;
  void *heap_ptr3;
  longlong buffer_offset;
  uint32_t temp_parameter;
  longlong temp_offset;
  uint64_t stack_parameter;
  
  stack_parameter = 0xfffffffffffffffe;
  if (*(int *)(scene_context + 0x324) < 1) {
    return;
  }
  initialize_path_buffer(material_path_buffer);
  material_index = buffer_length + -1;
  mesh_data_offset = (longlong)material_index;
  if (-1 < material_index) {
    do {
      if (*(char *)(mesh_data_offset + (longlong)material_string_buffer) == '/') goto LAB_PATH_SEPARATOR_FOUND;
      material_index = material_index + -1;
      mesh_data_offset = mesh_data_offset + -1;
    } while (-1 < mesh_data_offset);
  }
  material_index = -1;
LAB_PATH_SEPARATOR_FOUND:
  mesh_data_offset = process_path_segment(material_path_buffer, &heap_ptr3, 0, material_index);
  if (material_string_buffer != (void *)0x0) {
    memory_deallocator(material_string_buffer);
  }
  material_export_count = 0;
  buffer_length = *(uint32_t *)(mesh_data_offset + 0x10);
  material_string_buffer = *(void **)(mesh_data_offset + 8);
  path_hash_value = *(uint64_t *)(mesh_data_offset + 0x18);
  *(uint32_t *)(mesh_data_offset + 0x10) = 0;
  *(void **)(mesh_data_offset + 8) = 0;
  *(uint64_t *)(mesh_data_offset + 0x18) = 0;
  heap_ptr3 = &DEFAULT_MEMORY_VALUE;
  if (buffer_offset != 0) {
    memory_deallocator(heap_ptr3);
  }
  buffer_offset = 0;
  temp_parameter = 0;
  heap_ptr3 = &MEMORY_DEALLOCATOR_HANDLE;
  material_data_size = buffer_length + 4;
  extend_path_buffer(material_path_buffer, material_data_size);
  *(uint32_t *)(material_string_buffer + buffer_length) = 0x646d6d2f;
  *(char *)((longlong)(material_string_buffer + buffer_length) + 4) = 0;
  buffer_length = material_data_size;
  append_scene_id_to_path(material_path_buffer, *(uint32_t *)(scene_context + 0x324));
  material_index = buffer_length + 4;
  extend_path_buffer(material_path_buffer, material_index);
  *(uint32_t *)(material_string_buffer + buffer_length) = 0x646d6d2e;
  *(char *)((longlong)(material_string_buffer + buffer_length) + 4) = 0;
  buffer_length = material_index;
  material_system_ptr = (void *)file_handle_allocator(FILE_HANDLE_REGISTRY, 0x18, 8, 3);
  heap_allocation1 = &DEFAULT_STRING_VALUE;
  if (material_string_buffer != (void *)0x0) {
    heap_allocation1 = material_string_buffer;
  }
  *material_system_ptr = 0;
  *(char *)((longlong)material_system_ptr + 2) = 0;
  temp_offset = material_system_ptr;
  open_file_handle(material_system_ptr, heap_allocation1, &MMD_FILE_SIGNATURE);
  if (material_system_ptr[1] == 0) {
    file_handle_cleanup(material_system_ptr);
  }
  export_header_value = 0x31444d4d;
  write_file_data(&export_header_value, 4, 1, material_system_ptr[1]);
  mesh_entry_indices[0] = (int)(*(longlong *)(scene_context + 0x40) - *(longlong *)(scene_context + 0x38) >> 4);
  write_file_data(mesh_entry_indices, 4, 1, material_system_ptr[1]);
  material_total_count = material_export_count;
  if (0 < mesh_entry_indices[0]) {
    do {
      mesh_data_offset = *(longlong *)(material_total_count + *(longlong *)(scene_context + 0x38));
      material_count_indices[0] = *(int *)(mesh_data_offset + 0x20);
      write_file_data(material_count_indices, 4, 1, material_system_ptr[1]);
      heap_allocation1 = &DEFAULT_STRING_VALUE;
      if (*(void **)(mesh_data_offset + 0x18) != (void *)0x0) {
        heap_allocation1 = *(void **)(mesh_data_offset + 0x18);
      }
      write_file_data(heap_allocation1, 1, (longlong)material_count_indices[0], material_system_ptr[1]);
      material_entry_count = (int)material_total_count;
      write_file_data(&material_entry_count, 4, 1, material_system_ptr[1]);
      temp_parameter = 0;
      material_file_offset = mesh_data_offset;
      extract_material_properties(&material_file_offset);
      mesh_data_offset = material_entry_offset;
      export_indices[0] = *(int *)(material_entry_offset + 0x60);
      write_file_data(export_indices, 4, 1, material_system_ptr[1]);
      material_parameter_array = (uint32_t *)memory_block_allocator(MEMORY_ALLOCATOR_HANDLE, (longlong)export_indices[0] << 2, 0x10);
      material_index = 0;
      if (0 < export_indices[0]) {
        material_data_offset = 0;
        heap_ptr2 = material_parameter_array;
        do {
          *heap_ptr2 = *(uint32_t *)(material_data_offset + 0x54 + *(longlong *)(mesh_data_offset + 0x68));
          material_index = material_index + 1;
          material_data_offset = material_data_offset + 0x5c;
          heap_ptr2 = heap_ptr2 + 1;
        } while (material_index < export_indices[0]);
      }
      write_file_data(material_parameter_array, 4, (longlong)export_indices[0], material_system_ptr[1]);
      mesh_data_offset = material_file_offset;
      if (material_parameter_array != (uint32_t *)0x0) {
        memory_deallocator(material_parameter_array);
      }
      if (material_file_offset != 0) {
        while( true ) {
          acquire_thread_lock();
          path_separator_char = *(char *)(mesh_data_offset + 0xec);
          export_complete = path_separator_char == '\0';
          if (export_complete) {
            *(char *)(mesh_data_offset + 0xec) = '\x01';
            path_separator_char = '\0';
          }
          release_thread_lock();
          if (export_complete) break;
          material_index = get_current_thread_id();
          if ((*(int *)(mesh_data_offset + 0xf0) == material_index) || (*(int *)(mesh_data_offset + 0xf0) != 0))
          goto LAB_MATERIAL_ENTRY_CLEANUP;
          thread_sleep();
        }
        path_separator_char = '\0';
LAB_MATERIAL_ENTRY_CLEANUP:
        acquire_thread_lock();
        material_reference_count = (int *)(mesh_data_offset + 0xe8);
        material_index = *material_reference_count;
        *material_reference_count = *material_reference_count + -1;
        release_thread_lock();
        if (path_separator_char == '\0') {
          if ((((material_index == 1) && (*(longlong *)(material_file_offset + 0x210) != 0)) &&
              (material_data_offset = material_file_offset, validate_material_entry(material_file_offset), *(char *)(material_data_offset + 0xfc) == '\0')) &&
             ((*(char *)(material_data_offset + 0xf4) == '\0' &&
              (((*(byte *)(material_data_offset + 0xfd) & 0x20) == 0 || ((*(byte *)(material_data_offset + 0xfe) & 1) == 0))))))
          {
            material_entry_ptr = *(longlong **)(material_data_offset + 0x210);
            *(void *)(material_data_offset + 0x210) = 0;
            if (material_entry_ptr != (longlong *)0x0) {
              (**(code **)(*material_entry_ptr + 0x38))();
            }
          }
          acquire_thread_lock();
          *(char *)(mesh_data_offset + 0xec) = 0;
          release_thread_lock();
        }
        material_file_offset = 0;
      }
      material_data_size = (int)material_total_count + 1;
      material_total_count = (ulonglong)material_data_size;
      material_total_count = material_total_count + 0x10;
    } while ((int)material_data_size < mesh_entry_indices[0]);
  }
  if (material_system_ptr[1] != 0) {
    close_file_handle();
    material_system_ptr[1] = 0;
    acquire_thread_lock();
    FILE_HANDLE_COUNT = FILE_HANDLE_COUNT + -1;
    release_thread_lock();
  }
  file_handle_cleanup(material_system_ptr);
}