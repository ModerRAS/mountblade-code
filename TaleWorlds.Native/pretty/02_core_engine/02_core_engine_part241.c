#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part241.c - 核心引擎材质和纹理处理模块 (2个函数)
// 本文件包含2个函数，主要用于材质加载、纹理处理和资源管理

// 全局变量声明
extern uint64_t core_system_data_material;    // 材质管理器数据指针
extern uint64_t core_system_temp_material;    // 材质字符串常量
extern uint64_t core_system_config_material;    // 默认材质路径

/**
 * 处理材质加载和纹理资源管理
 * 遍历材质列表，加载纹理资源，处理材质参数配置
 * 
 * @param material_context 材质上下文指针
 * @param material_base 材质基础地址
 * @param material_count 材质数量
 */
void process_material_loading(uint64_t material_context, int64_t material_base, int material_count)

{
  uint texture_id;
  int material_index;
  int texture_index;
  char *material_name;
  int64_t *material_ptr;
  char *texture_path;
  char *texture_name;
  char *texture_ext;
  char *temp_path;
  int64_t material_offset;
  int64_t texture_offset;
  uint64_t loop_counter;
  uint64_t *texture_data;
  char *default_path;
  char *temp_name;
  int64_t texture_size;
  int64_t path_length;
  int64_t *resource_ptr;
  bool is_match;
  void *stack_resource_1;
  int64_t stack_offset_1;
  code *callback_func_1;
  code *callback_func_2;
  void *stack_resource_2;
  int64_t stack_offset_2;
  uint stack_flags;
  uint64_t stack_config_1;
  void *stack_resource_3;
  int64_t stack_offset_3;
  int stack_index;
  uint64_t stack_counter;
  void *stack_resource_4;
  int64_t stack_offset_4;
  int32_t stack_param_1;
  uint64_t stack_param_2;
  void *stack_resource_5;
  int64_t stack_offset_5;
  int32_t stack_param_3;
  uint64_t stack_param_4;
  int64_t *stack_ptr_1;
  int64_t *stack_ptr_2;
  int64_t *stack_ptr_3;
  int64_t *stack_ptr_4;
  int64_t *stack_ptr_5;
  int64_t *stack_ptr_6;
  int64_t stack_value_1;
  uint64_t stack_config_2;
  
  stack_config_2 = 0xfffffffffffffffe;
  texture_size = 0;
  stack_ptr_6 = core_system_data_material;
  stack_value_1 = (int64_t)material_count;
  resource_ptr = core_system_data_material;
  if (0 < material_count) {
    do {
      temp_name = (char *)0x0;
      texture_offset = texture_size * 0x3088 + material_base;
      material_name = "base";
      do {
        texture_path = material_name;
        material_name = texture_path + 1;
      } while (*material_name != '\0');
      texture_data = *(uint64_t **)(texture_offset + 0x30);
      if (texture_data != (uint64_t *)0x0) {
LAB_180209ba0:
        material_name = (char *)*texture_data;
        if (material_name == (char *)0x0) {
          material_name = (char *)0x180d48d24;
          texture_ext = temp_name;
        }
        else {
          texture_ext = (char *)texture_data[2];
        }
        if (texture_ext != texture_path + -0x180a04ee3) goto LAB_180209c13;
        texture_ext = material_name + (int64_t)texture_ext;
        if (material_name < texture_ext) {
          path_length = (int64_t)&system_flag_4ee4 - (int64_t)material_name;
          while (*material_name == material_name[path_length]) {
            material_name = material_name + 1;
            if (texture_ext <= material_name) goto LAB_180209bd8;
          }
          goto LAB_180209c13;
        }
LAB_180209bd8:
        material_name = "skinned_decals";
        do {
          texture_path = material_name;
          material_name = texture_path + 1;
        } while (*material_name != '\0');
        for (material_name = (char *)texture_data[6]; texture_ext = temp_name, material_name != (char *)0x0;
            material_name = *(char **)(material_name + 0x58)) {
          texture_name = *(char **)material_name;
          if (texture_name == (char *)0x0) {
            texture_name = (char *)0x180d48d24;
            temp_path = temp_name;
          }
          else {
            temp_path = *(char **)(material_name + 0x10);
          }
          if (temp_path == texture_path + -0x18098c5e7) {
            temp_path = temp_path + (int64_t)texture_name;
            texture_ext = material_name;
            if (temp_path <= texture_name) break;
            path_length = (int64_t)&system_flag_c5e8 - (int64_t)texture_name;
            while (*texture_name == texture_name[path_length]) {
              texture_name = texture_name + 1;
              if (temp_path <= texture_name) goto LAB_180209c65;
            }
          }
        }
LAB_180209c65:
        material_name = "skinned_decal";
        do {
          texture_path = material_name;
          material_name = texture_path + 1;
        } while (*material_name != '\0');
        for (material_name = *(char **)(texture_ext + 0x30); texture_ext = temp_name, material_name != (char *)0x0;
            material_name = *(char **)(material_name + 0x58)) {
          texture_name = *(char **)material_name;
          if (texture_name == (char *)0x0) {
            texture_name = (char *)0x180d48d24;
            temp_path = temp_name;
          }
          else {
            temp_path = *(char **)(material_name + 0x10);
          }
          if (temp_path == texture_path + -0x180a0ff37) {
            temp_path = texture_name + (int64_t)temp_path;
            texture_ext = material_name;
            if (temp_path <= texture_name) break;
            path_length = (int64_t)&global_config_2040_ptr - (int64_t)texture_name;
            while (*texture_name == texture_name[path_length]) {
              texture_name = texture_name + 1;
              if (temp_path <= texture_name) goto LAB_180209cd5;
            }
          }
        }
LAB_180209cd5:
        material_name = "textures";
        do {
          texture_path = material_name;
          material_name = texture_path + 1;
        } while (*material_name != '\0');
        for (texture_data = *(uint64_t **)(texture_ext + 0x30); texture_data != (uint64_t *)0x0;
            texture_data = (uint64_t *)texture_data[0xb]) {
          material_name = (char *)*texture_data;
          if (material_name == (char *)0x0) {
            material_name = (char *)0x180d48d24;
            texture_name = temp_name;
          }
          else {
            texture_name = (char *)texture_data[2];
          }
          if (texture_name == texture_path + -0x180a0f117) {
            texture_name = texture_name + (int64_t)material_name;
            if (texture_name <= material_name) {
LAB_180209d30:
              material_name = "texture";
              do {
                texture_path = material_name;
                material_name = texture_path + 1;
              } while (*material_name != '\0');
              for (material_name = (char *)texture_data[6]; texture_name = temp_name, material_name != (char *)0x0;
                  material_name = *(char **)(material_name + 0x58)) {
                temp_path = *(char **)material_name;
                if (temp_path == (char *)0x0) {
                  temp_path = (char *)0x180d48d24;
                  default_path = temp_name;
                }
                else {
                  default_path = *(char **)(material_name + 0x10);
                }
                if (default_path == texture_path + -0x180a0e89f) {
                  default_path = temp_path + (int64_t)default_path;
                  texture_name = material_name;
                  if (default_path <= temp_path) break;
                  path_length = (int64_t)&system_flag_e8a0 - (int64_t)temp_path;
                  while (*temp_path == temp_path[path_length]) {
                    temp_path = temp_path + 1;
                    if (default_path <= temp_path) goto joined_r0x000180209daf;
                  }
                }
              }
joined_r0x000180209daf:
              do {
                if (texture_name == (char *)0x0) goto LAB_18020a368;
                stack_resource_3 = &global_config_3456_ptr;
                stack_counter = 0;
                stack_offset_3 = 0;
                stack_index = 0;
                material_name = "type";
                do {
                  temp_name = material_name;
                  material_name = temp_name + 1;
                } while (*material_name != '\0');
                for (texture_data = *(uint64_t **)(texture_name + 0x40); texture_data != (uint64_t *)0x0;
                    texture_data = (uint64_t *)texture_data[6]) {
                  material_name = (char *)*texture_data;
                  if (material_name == (char *)0x0) {
                    material_name = (char *)0x180d48d24;
                    texture_path = (char *)0x0;
                  }
                  else {
                    texture_path = (char *)texture_data[2];
                  }
                  if (texture_path == temp_name + -0x180a0ee2f) {
                    texture_path = texture_path + (int64_t)material_name;
                    if (texture_path <= material_name) {
LAB_180209e40:
                      path_length = 0x180d48d24;
                      if (texture_data[1] != 0) {
                        path_length = texture_data[1];
                      }
                      FUN_180627c50(&stack_resource_3,path_length);
                      break;
                    }
                    path_length = (int64_t)&global_config_7680_ptr - (int64_t)material_name;
                    while (*material_name == material_name[path_length]) {
                      material_name = material_name + 1;
                      if (texture_path <= material_name) goto LAB_180209e40;
                    }
                  }
                }
                texture_index = stack_index;
                path_length = stack_offset_3;
                if (stack_index == 10) {
                  material_index = strcmp(stack_offset_3,&global_config_2056_ptr);
                  is_match = material_index == 0;
                }
                else {
                  is_match = false;
                }
                if (is_match) {
                  stack_resource_4 = &global_config_3456_ptr;
                  stack_param_4 = 0;
                  stack_offset_4 = 0;
                  stack_param_3 = 0;
                  material_name = "name";
                  do {
                    temp_name = material_name;
                    material_name = temp_name + 1;
                  } while (*material_name != '\0');
                  for (texture_data = *(uint64_t **)(texture_name + 0x40); texture_data != (uint64_t *)0x0;
                      texture_data = (uint64_t *)texture_data[6]) {
                    material_name = (char *)*texture_data;
                    if (material_name == (char *)0x0) {
                      material_name = (char *)0x180d48d24;
                      texture_path = (char *)0x0;
                    }
                    else {
                      texture_path = (char *)texture_data[2];
                    }
                    if (texture_path == temp_name + -0x180a03a83) {
                      texture_path = texture_path + (int64_t)material_name;
                      if (texture_path <= material_name) {
LAB_180209f34:
                        path_length = 0x180d48d24;
                        if (texture_data[1] != 0) {
                          path_length = texture_data[1];
                        }
                        FUN_180627c50(&stack_resource_4,path_length);
                        break;
                      }
                      path_length = (int64_t)&system_flag_3a84 - (int64_t)material_name;
                      while (*material_name == material_name[path_length]) {
                        material_name = material_name + 1;
                        if (texture_path <= material_name) goto LAB_180209f34;
                      }
                    }
                  }
                  material_ptr = (int64_t *)FUN_1800b08e0(system_resource_state,&stack_ptr_5,&stack_resource_4,1);
                  path_length = *material_ptr;
                  *material_ptr = 0;
                  material_ptr = (int64_t *)*resource_ptr;
                  *resource_ptr = path_length;
                  if (material_ptr != (int64_t *)0x0) {
                    (**(code **)(*material_ptr + 0x38))();
                  }
                  if (stack_ptr_5 != (int64_t *)0x0) {
                    (**(code **)(*stack_ptr_5 + 0x38))();
                  }
                  stack_resource_4 = &global_config_3456_ptr;
                  if (stack_offset_4 != 0) {
                    // WARNING: Subroutine does not return
                    CoreEngineMemoryPoolCleaner();
                  }
                  stack_offset_4 = 0;
                  stack_param_4 = stack_param_4 & 0xffffffff00000000;
                  stack_resource_4 = &global_config_720_ptr;
                }
                else {
                  if (texture_index == 9) {
                    material_index = strcmp(path_length,&system_flag_ff18);
                    is_match = material_index == 0;
                  }
                  else {
                    is_match = false;
                  }
                  if (is_match) {
                    stack_resource_5 = &global_config_3456_ptr;
                    stack_param_2 = 0;
                    stack_offset_5 = 0;
                    stack_param_1 = 0;
                    material_name = "name";
                    do {
                      temp_name = material_name;
                      material_name = temp_name + 1;
                    } while (*material_name != '\0');
                    for (texture_data = *(uint64_t **)(texture_name + 0x40); texture_data != (uint64_t *)0x0;
                        texture_data = (uint64_t *)texture_data[6]) {
                      material_name = (char *)*texture_data;
                      if (material_name == (char *)0x0) {
                        material_name = (char *)0x180d48d24;
                        texture_path = (char *)0x0;
                      }
                      else {
                        texture_path = (char *)texture_data[2];
                      }
                      if (texture_path == temp_name + -0x180a03a83) {
                        texture_path = material_name + (int64_t)texture_path;
                        if (texture_path <= material_name) {
LAB_18020a094:
                          path_length = 0x180d48d24;
                          if (texture_data[1] != 0) {
                            path_length = texture_data[1];
                          }
                          FUN_180627c50(&stack_resource_5,path_length);
                          break;
                        }
                        path_length = (int64_t)&system_flag_3a84 - (int64_t)material_name;
                        while (*material_name == material_name[path_length]) {
                          material_name = material_name + 1;
                          if (texture_path <= material_name) goto LAB_18020a094;
                        }
                      }
                    }
                    material_ptr = (int64_t *)FUN_1800b08e0(system_resource_state,&stack_ptr_4,&stack_resource_5,1);
                    path_length = *material_ptr;
                    *material_ptr = 0;
                    stack_ptr_2 = (int64_t *)resource_ptr[1];
                    resource_ptr[1] = path_length;
                    if (stack_ptr_2 != (int64_t *)0x0) {
                      (**(code **)(*stack_ptr_2 + 0x38))();
                    }
                    if (stack_ptr_4 != (int64_t *)0x0) {
                      (**(code **)(*stack_ptr_4 + 0x38))();
                    }
                    stack_resource_5 = &global_config_3456_ptr;
                    if (stack_offset_5 != 0) {
                    // WARNING: Subroutine does not return
                      CoreEngineMemoryPoolCleaner();
                    }
                    stack_offset_5 = 0;
                    stack_param_2 = stack_param_2 & 0xffffffff00000000;
                    stack_resource_5 = &global_config_720_ptr;
                  }
                  else {
                    if (texture_index == 0xb) {
                      texture_index = strcmp(path_length,&global_config_2024_ptr);
                      is_match = texture_index == 0;
                    }
                    else {
                      is_match = false;
                    }
                    if (is_match) {
                      stack_resource_1 = &global_config_3456_ptr;
                      callback_func_2 = (code *)0x0;
                      stack_offset_1 = 0;
                      callback_func_1 = (code *)((uint64_t)callback_func_1 & 0xffffffff00000000);
                      material_name = "name";
                      do {
                        temp_name = material_name;
                        material_name = temp_name + 1;
                      } while (*material_name != '\0');
                      for (texture_data = *(uint64_t **)(texture_name + 0x40); texture_data != (uint64_t *)0x0;
                          texture_data = (uint64_t *)texture_data[6]) {
                        material_name = (char *)*texture_data;
                        if (material_name == (char *)0x0) {
                          material_name = (char *)0x180d48d24;
                          texture_path = (char *)0x0;
                        }
                        else {
                          texture_path = (char *)texture_data[2];
                        }
                        if (texture_path == temp_name + -0x180a03a83) {
                          texture_path = texture_path + (int64_t)material_name;
                          if (texture_path <= material_name) {
LAB_18020a1f4:
                            path_length = 0x180d48d24;
                            if (texture_data[1] != 0) {
                              path_length = texture_data[1];
                            }
                            FUN_180627c50(&stack_resource_1,path_length);
                            break;
                          }
                          path_length = (int64_t)&system_flag_3a84 - (int64_t)material_name;
                          while (*material_name == material_name[path_length]) {
                            material_name = material_name + 1;
                            if (texture_path <= material_name) goto LAB_18020a1f4;
                          }
                        }
                      }
                      material_ptr = (int64_t *)FUN_1800b08e0(system_resource_state,&stack_ptr_3,&stack_resource_1,1);
                      path_length = *material_ptr;
                      *material_ptr = 0;
                      stack_ptr_1 = (int64_t *)resource_ptr[2];
                      resource_ptr[2] = path_length;
                      if (stack_ptr_1 != (int64_t *)0x0) {
                        (**(code **)(*stack_ptr_1 + 0x38))();
                      }
                      if (stack_ptr_3 != (int64_t *)0x0) {
                        (**(code **)(*stack_ptr_3 + 0x38))();
                      }
                      stack_resource_1 = &global_config_3456_ptr;
                      if (stack_offset_1 != 0) {
                    // WARNING: Subroutine does not return
                        CoreEngineMemoryPoolCleaner();
                      }
                      stack_offset_1 = 0;
                      callback_func_2 = (code *)((uint64_t)callback_func_2 & 0xffffffff00000000);
                      stack_resource_1 = &global_config_720_ptr;
                    }
                  }
                }
                material_name = "texture";
                do {
                  temp_name = material_name;
                  material_name = temp_name + 1;
                } while (*material_name != '\0');
                for (material_name = *(char **)(texture_name + 0x58); texture_name = (char *)0x0,
                    material_name != (char *)0x0; material_name = *(char **)(material_name + 0x58)) {
                  texture_path = *(char **)material_name;
                  if (texture_path == (char *)0x0) {
                    texture_path = (char *)0x180d48d24;
                    temp_path = (char *)0x0;
                  }
                  else {
                    temp_path = *(char **)(material_name + 0x10);
                  }
                  if (temp_path == temp_name + -0x180a0e89f) {
                    temp_path = temp_path + (int64_t)texture_path;
                    texture_name = material_name;
                    if (temp_path <= texture_path) break;
                    path_length = (int64_t)&system_flag_e8a0 - (int64_t)texture_path;
                    while (*texture_path == texture_path[path_length]) {
                      texture_path = texture_path + 1;
                      if (temp_path <= texture_path) goto LAB_18020a31a;
                    }
                  }
                }
LAB_18020a31a:
                stack_resource_3 = &global_config_3456_ptr;
                if (stack_offset_3 != 0) {
                    // WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner();
                }
                stack_offset_3 = 0;
                stack_counter = stack_counter & 0xffffffff00000000;
                stack_resource_3 = &global_config_720_ptr;
              } while( true );
            }
            path_length = (int64_t)&global_config_8424_ptr - (int64_t)material_name;
            while (*material_name == material_name[path_length]) {
              material_name = material_name + 1;
              if (texture_name <= material_name) goto LAB_180209d30;
            }
          }
        }
LAB_18020a368:
        material_name = (char *)0x0;
        temp_name = "materials";
        do {
          texture_path = temp_name;
          temp_name = texture_path + 1;
        } while (*temp_name != '\0');
        for (texture_data = *(uint64_t **)(texture_ext + 0x30); texture_data != (uint64_t *)0x0;
            texture_data = (uint64_t *)texture_data[0xb]) {
          temp_name = (char *)*texture_data;
          if (temp_name == (char *)0x0) {
            temp_name = (char *)0x180d48d24;
            texture_ext = material_name;
          }
          else {
            texture_ext = (char *)texture_data[2];
          }
          if (texture_ext == texture_path + -0x180a04ab7) {
            texture_ext = texture_ext + (int64_t)temp_name;
            if (texture_ext <= temp_name) {
LAB_18020a3c0:
              temp_name = "material";
              do {
                texture_path = temp_name;
                temp_name = texture_path + 1;
              } while (*temp_name != '\0');
              for (temp_name = (char *)texture_data[6]; texture_ext = material_name, material_ptr = resource_ptr,
                  temp_name != (char *)0x0; temp_name = *(char **)(temp_name + 0x58)) {
                texture_name = *(char **)temp_name;
                if (texture_name == (char *)0x0) {
                  texture_name = (char *)0x180d48d24;
                  temp_path = material_name;
                }
                else {
                  temp_path = *(char **)(temp_name + 0x10);
                }
                if (temp_path == texture_path + -0x180a04ebf) {
                  temp_path = texture_name + (int64_t)temp_path;
                  texture_ext = temp_name;
                  if (temp_path <= texture_name) break;
                  path_length = (int64_t)&global_config_6864_ptr - (int64_t)texture_name;
                  while (*texture_name == texture_name[path_length]) {
                    texture_name = texture_name + 1;
                    if (temp_path <= texture_name) goto joined_r0x00018020a436;
                  }
                }
              }
joined_r0x00018020a436:
              do {
                if (texture_ext == (char *)0x0) goto LAB_18020a626;
                resource_ptr = material_ptr + 5;
                stack_resource_2 = &global_config_3456_ptr;
                stack_config_2 = 0;
                stack_offset_2 = 0;
                stack_flags = 0;
                temp_name = "name";
                do {
                  texture_path = temp_name;
                  temp_name = texture_path + 1;
                } while (*temp_name != '\0');
                for (texture_data = *(uint64_t **)(texture_ext + 0x40); texture_data != (uint64_t *)0x0;
                    texture_data = (uint64_t *)texture_data[6]) {
                  temp_name = (char *)*texture_data;
                  if (temp_name == (char *)0x0) {
                    temp_name = (char *)0x180d48d24;
                    texture_name = (char *)0x0;
                  }
                  else {
                    texture_name = (char *)texture_data[2];
                  }
                  if (texture_name == texture_path + -0x180a03a83) {
                    texture_name = texture_name + (int64_t)temp_name;
                    if (texture_name <= temp_name) {
LAB_18020a4d0:
                      path_length = 0x180d48d24;
                      if (texture_data[1] != 0) {
                        path_length = texture_data[1];
                      }
                      FUN_180627c50(&stack_resource_2,path_length);
                      break;
                    }
                    path_length = (int64_t)&system_flag_3a84 - (int64_t)temp_name;
                    while (*temp_name == temp_name[path_length]) {
                      temp_name = temp_name + 1;
                      if (texture_name <= temp_name) goto LAB_18020a4d0;
                    }
                  }
                }
                texture_id = stack_flags;
                loop_counter = (uint64_t)stack_flags;
                if (stack_flags == 4) {
                  path_length = 0;
                  do {
                    material_offset = path_length + 1;
                    if (*(char *)(stack_offset_2 + path_length) != (&system_flag_b57c)[path_length])
                    goto LAB_18020a528;
                    path_length = material_offset;
                  } while (material_offset != 5);
                }
                else {
LAB_18020a528:
                  *(int *)(material_ptr + 3) = (int)material_name;
                  if (stack_offset_2 != 0) {
                    CoreEngineDataBufferProcessor(material_ptr + 4,stack_flags);
                  }
                  if (texture_id != 0) {
                    // WARNING: Subroutine does not return
                    memcpy(*resource_ptr,stack_offset_2,loop_counter);
                  }
                  *(int32_t *)(material_ptr + 6) = 0;
                  if (*resource_ptr != 0) {
                    *(int8_t *)(loop_counter + *resource_ptr) = 0;
                  }
                  *(int32_t *)((int64_t)material_ptr + 0x3c) = stack_config_2._4_4_;
                }
                material_name = (char *)((uint64_t)((int)material_name + 1));
                temp_name = "material";
                do {
                  texture_path = temp_name;
                  temp_name = texture_path + 1;
                } while (*temp_name != '\0');
                for (texture_ext = *(char **)(texture_ext + 0x58); texture_ext != (char *)0x0;
                    texture_ext = *(char **)(texture_ext + 0x58)) {
                  texture_name = *(char **)texture_ext;
                  temp_name = (char *)0x0;
                  if (texture_name == (char *)0x0) {
                    texture_name = (char *)0x180d48d24;
                  }
                  else {
                    temp_name = *(char **)(texture_ext + 0x10);
                  }
                  if (temp_name == texture_path + -0x180a04ebf) {
                    temp_name = texture_name + (int64_t)temp_name;
                    if (temp_name <= texture_name) goto LAB_18020a5e9;
                    path_length = (int64_t)&global_config_6864_ptr - (int64_t)texture_name;
                    while (*texture_name == texture_name[path_length]) {
                      texture_name = texture_name + 1;
                      if (temp_name <= texture_name) goto LAB_18020a5e9;
                    }
                  }
                }
                texture_ext = (char *)0x0;
LAB_18020a5e9:
                stack_resource_2 = &global_config_3456_ptr;
                if (stack_offset_2 != 0) {
                    // WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner();
                }
                stack_offset_2 = 0;
                stack_config_2 = stack_config_2 & 0xffffffff00000000;
                stack_resource_2 = &global_config_720_ptr;
                material_ptr = resource_ptr;
                resource_ptr = stack_ptr_6;
              } while( true );
            }
            path_length = (int64_t)&global_config_5832_ptr - (int64_t)temp_name;
            while (*temp_name == temp_name[path_length]) {
              temp_name = temp_name + 1;
              if (texture_ext <= temp_name) goto LAB_18020a3c0;
            }
          }
        }
LAB_18020a626:
        for (path_length = *(int64_t *)(texture_offset + 0x30); path_length != 0;
            path_length = *(int64_t *)(path_length + 0x58)) {
          *(uint64_t *)(path_length + 0x20) = 0;
        }
        *(uint64_t *)(texture_offset + 0x30) = 0;
        for (path_length = *(int64_t *)(texture_offset + 0x40); path_length != 0;
            path_length = *(int64_t *)(path_length + 0x30)) {
          *(uint64_t *)(path_length + 0x20) = 0;
        }
        *(uint64_t *)(texture_offset + 0x40) = 0;
        FUN_180057010(texture_offset + 0x60);
      }
LAB_18020a68a:
      texture_size = texture_size + 1;
    } while (texture_size < stack_value_1);
  }
  if (*resource_ptr != 0) {
    stack_resource_1 = (void *)0x0;
    stack_offset_1 = 0;
    callback_func_1 = (code *)0x0;
    callback_func_2 = _guard_check_icall;
    FUN_18023c450(*resource_ptr,1,0xffffffff,&stack_resource_1);
    if (callback_func_1 != (code *)0x0) {
      (*callback_func_1)(&stack_resource_1,0,0);
    }
  }
  if (resource_ptr[1] != 0) {
    stack_resource_1 = (void *)0x0;
    stack_offset_1 = 0;
    callback_func_1 = (code *)0x0;
    callback_func_2 = _guard_check_icall;
    FUN_18023c450(resource_ptr[1],1,0xffffffff,&stack_resource_1);
    if (callback_func_1 != (code *)0x0) {
      (*callback_func_1)(&stack_resource_1,0,0);
    }
  }
  if (resource_ptr[2] != 0) {
    stack_resource_1 = (void *)0x0;
    stack_offset_1 = 0;
    callback_func_1 = (code *)0x0;
    callback_func_2 = _guard_check_icall;
    FUN_18023c450(resource_ptr[2],1,0xffffffff,&stack_resource_1);
    if (callback_func_1 != (code *)0x0) {
      (*callback_func_1)(&stack_resource_1,0,0);
    }
  }
  return;
LAB_180209c13:
  texture_data = (uint64_t *)texture_data[0xb];
  if (texture_data == (uint64_t *)0x0) goto LAB_18020a68a;
  goto LAB_180209ba0;
}

/**
 * 处理顶点数据的空间位置验证和存储
 * 检查顶点位置是否与目标位置重合，如果不重合则添加到顶点缓冲区中
 * 
 * @param vertex_context 顶点上下文指针，包含顶点缓冲区信息
 * @param spatial_context 空间上下文指针，包含空间索引数据
 * @param target_position 目标位置坐标数组 [x, y, z]
 */
void process_vertex_position_validation(int64_t vertex_context, int64_t spatial_context, float *target_position)

{
  int *vertex_count;
  uint64_t *vertex_data;
  int64_t spatial_index;
  uint64_t position_x;
  uint64_t position_y;
  uint64_t position_z;
  int64_t vertex_offset;
  uint vertex_id;
  uint block_index;
  int current_count;
  float distance_x;
  float distance_y;
  float distance_z;
  
  // 检查顶点缓冲区是否已满
  if (*(int *)(vertex_context + 8) < *(int *)(vertex_context + 0xc)) {
    current_count = 0;
    if (0 < *(int *)(vertex_context + 8)) {
      do {
        // 计算顶点的空间索引
        vertex_id = *(int *)(vertex_context + 0x10) + current_count;
        block_index = vertex_id >> 0xc;
        spatial_index = *(int64_t *)(spatial_context + 0x1220 + (uint64_t)block_index * 8);
        vertex_offset = (uint64_t)(vertex_id + block_index * -0x1000) * 0x20;
        
        // 计算当前顶点与目标位置的距离
        distance_z = *(float *)(spatial_index + 4 + vertex_offset) - target_position[1];
        distance_y = *(float *)(spatial_index + vertex_offset) - *target_position;
        distance_x = *(float *)(spatial_index + 8 + vertex_offset) - target_position[2];
        
        // 如果距离小于阈值（0.2单位），则认为顶点重合，直接返回
        if (distance_z * distance_z + distance_y * distance_y + distance_x * distance_x < 0.040000003) {
          return;
        }
        current_count = current_count + 1;
      } while (current_count < *(int *)(vertex_context + 8));
    }
    
    // 加锁保护顶点计数器
    LOCK();
    vertex_count = (int *)(vertex_context + 8);
    current_count = *vertex_count;
    *vertex_count = *vertex_count + 1;
    UNLOCK();
    
    // 检查是否还有空间
    if (current_count < *(int *)(vertex_context + 0xc)) {
      // 准备位置数据
      position_x = *(uint64_t *)(target_position + 2);
      vertex_id = *(int *)(vertex_context + 0x10) + current_count;
      position_y = *(uint64_t *)(target_position + 4);
      position_z = *(uint64_t *)(target_position + 6);
      block_index = vertex_id >> 0xc;
      spatial_index = *(int64_t *)(spatial_context + 0x1220 + (uint64_t)block_index * 8);
      vertex_offset = (uint64_t)(vertex_id + block_index * -0x1000) * 0x20;
      
      // 存储顶点位置数据（前16字节：x,y坐标）
      vertex_data = (uint64_t *)(spatial_index + vertex_offset);
      *vertex_data = *(uint64_t *)target_position;
      vertex_data[1] = position_x;
      
      // 存储顶点位置数据（后16字节：z坐标和其他数据）
      vertex_data = (uint64_t *)(spatial_index + 0x10 + vertex_offset);
      *vertex_data = position_y;
      vertex_data[1] = position_z;
    }
  }
  return;
}