#include "TaleWorlds.Native.Split.h"

// 03_rendering_part021.c - 渲染系统：MMD模型加载和处理模块

/**
 * @brief 加载并处理MMD模型文件
 * 
 * 该函数负责从MMD（MikuMikuDance）模型文件中读取和解析模型数据，
 * 包括网格信息、材质数据和纹理贴图等。支持两种MMD格式：
 * - MMD1格式 (0x31444d4d)
 * - MMD2格式 (0x32444d4d)
 * 
 * @param render_context 渲染上下文指针，包含场景和模型管理信息
 * @param file_path 模型文件路径
 * @param load_flags 加载标志位，控制加载行为
 */
void load_mmd_model(render_context_t *render_context, const char *file_path, uint8_t load_flags)
{
  char path_char1;
  char path_char2;
  bool model_found;
  longlong *mesh_ptr;
  longlong *material_ptr;
  undefined4 material_id;
  longlong model_index;
  undefined8 *file_handle;
  longlong mesh_count;
  undefined4 *texture_array;
  longlong *vertex_buffer;
  char *model_name;
  ulonglong name_length;
  undefined *temp_ptr;
  ulonglong texture_count;
  uint texture_index;
  ulonglong mesh_iter;
  undefined4 *material_data;
  int string_compare_result;
  ulonglong file_offset;
  int model_count;
  bool name_match;
  undefined1 *stack_ptr;
  int stack_array[2];
  undefined8 *string_buffer;
  undefined1 path_buffer[8];
  undefined *path_ptr;
  uint path_length;
  undefined8 extension_data;
  int stack_array2[2];
  undefined *texture_ptr;
  char *material_name;
  uint material_name_length;
  ulonglong material_size;
  longlong *vertex_ptr;
  longlong *normal_ptr;
  longlong mesh_offset;
  longlong *index_buffer;
  undefined4 vertex_format;
  longlong *uv_buffer;
  undefined2 bone_weight;
  char bone_index;
  int bone_indices[2];
  longlong *bone_ptr;
  longlong *weight_ptr;
  undefined1 bone_data[8];
  undefined8 bone_info;
  longlong *animation_ptr;
  char anim_flag1;
  char anim_flag2;
  char anim_flag3;
  undefined *debug_ptr1;
  undefined *debug_ptr2;
  uint debug_uint1;
  undefined4 debug_uint2;
  int debug_array[2];
  longlong *mesh_list_ptr;
  longlong *material_list_ptr;
  undefined1 temp_array1[4];
  undefined1 temp_array2[4];
  longlong *scene_object;
  longlong *render_object;
  longlong *transform_object;
  longlong *camera_object;
  longlong *light_object;
  undefined *resource_ptr;
  longlong transform_data;
  undefined4 render_flags;
  undefined8 file_info;
  longlong *resource_handle;
  
  // 初始化路径处理
  stack_array[0] = CONCAT31(stack_array[0]._1_3_, load_flags);
  file_info = 0xfffffffffffffffe;
  
  // 检查渲染上下文中的模型数量
  if (*(int *)(render_context + 0x324) < 1) {
    return;
  }
  
  // 初始化字符串缓冲区用于路径处理
  initialize_string_buffer(path_buffer);
  model_count = path_length + -1;
  mesh_index = (longlong)model_count;
  
  // 查找路径中的最后一个斜杠，确定文件名部分
  if (-1 < model_count) {
    do {
      if (*(char *)(mesh_index + (longlong)path_ptr) == '/') goto LAB_18027baf2;
      model_count = model_count + -1;
      mesh_index = mesh_index + -1;
    } while (-1 < mesh_index);
  }
  model_count = -1;
  
LAB_18027baf2:
  // 提取文件名部分（不含路径）
  mesh_index = extract_filename_from_path(path_buffer, &resource_ptr, 0, model_count);
  
  // 清理临时路径缓冲区
  if (path_ptr != (undefined *)0x0) {
    // WARNING: 此子函数不返回
    cleanup_memory_allocation();
  }
  
  // 获取文件信息：长度、路径指针、扩展名数据
  path_length = *(uint *)(mesh_index + 0x10);
  path_ptr = *(undefined **)(mesh_index + 8);
  extension_data = *(undefined8 *)(mesh_index + 0x18);
  
  // 清理文件信息结构
  *(undefined4 *)(mesh_index + 0x10) = 0;
  *(undefined8 *)(mesh_index + 8) = 0;
  *(undefined8 *)(mesh_index + 0x18) = 0;
  
  // 设置默认材质路径
  resource_ptr = &DEFAULT_MATERIAL_PATH;
  if (transform_data != 0) {
    // WARNING: 此子函数不返回
    cleanup_memory_allocation();
  }
  transform_data = 0;
  render_flags = 0;
  resource_ptr = &DEFAULT_TEXTURE_PATH;
  
  // 构建完整文件路径：添加 ".mmd" 扩展名
  texture_index = path_length + 4;
  resize_string_buffer(path_buffer, texture_index);
  *(undefined4 *)(path_ptr + path_length) = 0x646d6d2f;  // "/mmd"
  *(undefined1 *)((longlong)(path_ptr + path_length) + 4) = 0;
  path_length = texture_index;
  
  // 添加版本标识符
  append_string_to_buffer(path_buffer, *(undefined4 *)(render_context + 0x324));
  model_count = path_length + 4;
  resize_string_buffer(path_buffer, model_count);
  *(undefined4 *)(path_ptr + path_length) = 0x646d6d2e;  // ".mmd"
  *(undefined1 *)((longlong)(path_ptr + path_length) + 4) = 0;
  path_length = model_count;
  
  // 分配文件句柄结构
  file_handle = (undefined8 *)allocate_file_handle(GLOBAL_MEMORY_MANAGER, 0x18, 8, 3);
  temp_ptr = &DEFAULT_EMPTY_STRING;
  if (path_ptr != (undefined *)0x0) {
    temp_ptr = path_ptr;
  }
  
  mesh_index = 0;
  *file_handle = 0;
  *(undefined1 *)(file_handle + 2) = 0;
  string_buffer = file_handle;
  initialize_file_operations(file_handle, temp_ptr, &FILE_OPERATION_TABLE);
  
  // 验证文件句柄有效性
  if (file_handle[1] == 0) {
    // WARNING: 此子函数不返回
    handle_file_error(file_handle);
  }
  
  // 读取文件头标识
  fread(stack_array2, 4, 1);
  mesh_count = (longlong)stack_array2[0];
  
  // 检查MMD1格式标识
  if (stack_array2[0] == 0x31444d4d) {
    fread(stack_array, 4, 1, file_handle[1]);
    stack_array[0] = 0;
    
    // 处理MMD1格式的模型数据
    if (0 < stack_array[0]) {
      do {
        fread(stack_array2, 4, 1, file_handle[1]);
        
        // 分配网格数据缓冲区
        vertex_buffer = (longlong *)allocate_memory(GLOBAL_MEMORY_MANAGER, 
                                                   (longlong)(stack_array2[0] + 1), 0x10, 3);
        mesh_list_ptr = vertex_buffer;
        
        // 读取网格数据
        fread(vertex_buffer, 1, (longlong)stack_array2[0], file_handle[1]);
        *(undefined1 *)((longlong)stack_array2[0] + (longlong)vertex_buffer) = 0;
        
        // 初始化网格名称处理
        initialize_mesh_name_processing(&debug_ptr1, vertex_buffer);
        
        // 清理网格名称中的无效字符
        while ((0 < (int)debug_uint1 && (mesh_index = strstr(debug_ptr2, &INVALID_CHARS), mesh_index != 0))) {
          string_compare_result = 6;
          model_count = (int)mesh_index - (int)debug_ptr2;
          if (debug_uint1 < model_count + 6U) {
            string_compare_result = debug_uint1 - model_count;
          }
          texture_index = model_count + string_compare_result;
          if (texture_index < debug_uint1) {
            mesh_index = (longlong)(int)texture_index;
            mesh_count = mesh_index - string_compare_result;
            do {
              debug_ptr2[mesh_count] = debug_ptr2[mesh_index];
              texture_index = texture_index + 1;
              mesh_index = mesh_index + 1;
              mesh_count = mesh_count + 1;
            } while (texture_index < debug_uint1);
          }
          debug_uint1 = debug_uint1 - string_compare_result;
          debug_ptr2[debug_uint1] = 0;
        }
        
        // 读取材质数据
        fread(temp_array2, 4, 1, file_handle[1]);
        fread(&stack_ptr, 4, 1, file_handle[1]);
        texture_array = (undefined4 *)allocate_memory(GLOBAL_MEMORY_MANAGER, 
                                                     (longlong)(int)stack_ptr << 2, 0x10, 3);
        fread(texture_array, 4, (longlong)(int)stack_ptr);
        
        model_found = false;
        texture_count = 0;
        mesh_index = *(longlong *)(render_context + 0x38);
        mesh_iter = texture_count;
        
        // 检查是否已经存在相同的模型
        if (*(longlong *)(render_context + 0x40) - mesh_index >> 4 == 0) {
LAB_18027c5be:
          temp_ptr = &DEFAULT_EMPTY_STRING;
          if (debug_ptr2 != (undefined *)0x0) {
            temp_ptr = debug_ptr2;
          }
          log_model_loading_info(&MODEL_LOADING_LOGGER, temp_ptr);
        }
        else {
          do {
            mesh_index = *(longlong *)(mesh_iter + mesh_index);
            texture_ptr = &DEFAULT_TEXTURE_PATH;
            material_size = 0;
            material_name = (char *)0x0;
            material_name_length = 0;
            model_count = *(int *)(mesh_index + 0x20);
            
            // 读取模型名称
            if (model_count != 0) {
              string_compare_result = model_count + 1;
              if (string_compare_result < 0x10) {
                string_compare_result = 0x10;
              }
              material_name = (char *)allocate_string_buffer(GLOBAL_MEMORY_MANAGER, 
                                                           (longlong)string_compare_result,
                                                           CONCAT71((uint7)(uint3)((uint)model_count >> 8), 0x13));
              *material_name = '\0';
              material_id = calculate_string_hash(material_name);
              material_size = CONCAT44(material_size._4_4_, material_id);
              
              if (0 < *(int *)(mesh_index + 0x20)) {
                temp_ptr = &DEFAULT_EMPTY_STRING;
                if (*(undefined **)(mesh_index + 0x18) != (undefined *)0x0) {
                  temp_ptr = *(undefined **)(mesh_index + 0x18);
                }
                // WARNING: 此子函数不返回
                memcpy(material_name, temp_ptr, (longlong)(*(int *)(mesh_index + 0x20) + 1));
              }
            }
            
            // 确保字符串正确终止
            if ((*(longlong *)(mesh_index + 0x18) != 0) && (material_name_length = 0, material_name != (char *)0x0)) {
              *material_name = '\0';
            }
            
            // 清理模型名称中的无效字符
            while ((0 < (int)material_name_length && (mesh_index = strstr(material_name, &INVALID_CHARS), mesh_index != 0))) {
              string_compare_result = 6;
              model_count = (int)mesh_index - (int)material_name;
              if (material_name_length < model_count + 6U) {
                string_compare_result = material_name_length - model_count;
              }
              texture_index = model_count + string_compare_result;
              if (texture_index < material_name_length) {
                mesh_index = (longlong)(int)texture_index;
                mesh_count = mesh_index - string_compare_result;
                do {
                  material_name[mesh_count] = material_name[mesh_index];
                  texture_index = texture_index + 1;
                  mesh_index = mesh_index + 1;
                  mesh_count = mesh_count + 1;
                } while (texture_index < material_name_length);
              }
              material_name_length = material_name_length - string_compare_result;
              material_name[material_name_length] = '\0';
            }
            
            // 比较模型名称是否匹配
            if (material_name_length == debug_uint1) {
              if (material_name_length == 0) {
LAB_18027c2fe:
                if (debug_uint1 != 0) goto LAB_18027c306;
                name_match = true;
              }
              else {
                model_name = material_name;
                do {
                  path_char1 = *model_name;
                  path_char2 = model_name[(longlong)debug_ptr2 - (longlong)material_name];
                  if (path_char1 != path_char2) break;
                  model_name = model_name + 1;
                } while (path_char2 != '\0');
                name_match = path_char1 == path_char2;
              }
            }
            else {
              if (material_name_length == 0) goto LAB_18027c2fe;
LAB_18027c306:
              name_match = false;
            }
            
            // 如果找到匹配的模型，进行更新操作
            if (name_match) {
              model_found = true;
              vertex_buffer = *(longlong **)(mesh_iter + *(longlong *)(render_context + 0x38));
              initialize_scene_object(vertex_buffer, 0);
              resource_handle = vertex_buffer;
              
              if (vertex_buffer != (longlong *)0x0) {
                (**(code **)(*vertex_buffer + 0x28))(vertex_buffer);
              }
              
              // 设置变换层级
              scene_object = (longlong *)0x0;
              render_object = (longlong *)0x0;
              transform_object = &transform_data;
              camera_object = (longlong *)0x0;
              light_object = (longlong *)0x0;
              transform_data._0_1_ = 0;
              
              if (vertex_buffer != (longlong *)0x0) {
                render_object = vertex_buffer;
                (**(code **)(*vertex_buffer + 0x28))(vertex_buffer);
              }
              
              render_object = scene_object;
              material_ptr = vertex_buffer;
              if (scene_object != (longlong *)0x0) {
                mesh_index = *scene_object;
                scene_object = vertex_buffer;
                (**(code **)(mesh_index + 0x38))();
                material_ptr = scene_object;
              }
              scene_object = material_ptr;
              vertex_format = 0;
              light_object = vertex_buffer;
              finalize_transform_setup(&transform_data);
              
              material_ptr = camera_object;
              camera_object = camera_object;
              if (camera_object != (longlong *)0x0) {
                (**(code **)(*camera_object + 0x28))(camera_object);
              }
              
              mesh_ptr = render_object;
              camera_object = render_object;
              render_object = material_ptr;
              if (mesh_ptr != (longlong *)0x0) {
                (**(code **)(*mesh_ptr + 0x38))();
              }
              
              bone_weight = 0;
              bone_index = '\0';
              if (vertex_buffer != (longlong *)0x0) {
                (**(code **)(*vertex_buffer + 0x38))(vertex_buffer);
              }
              
              // 应用材质数据
              if ((int)render_object[0xc] == (int)stack_ptr) {
                file_offset = 0;
                material_data = texture_array;
                file_offset = file_offset;
                if (0 < (int)stack_ptr) {
                  do {
                    *(undefined4 *)(render_object[0xd] + 0x54 + file_offset) = *material_data;
                    bone_weight = CONCAT11(bone_weight._1_1_, 1);
                    texture_index = (int)file_offset + 1;
                    file_offset = file_offset + 0x5c;
                    material_data = material_data + 1;
                    file_offset = (ulonglong)texture_index;
                  } while ((int)texture_index < (int)stack_ptr);
                }
              }
              else {
                model_name = "";
                if (material_name != (char *)0x0) {
                  model_name = material_name;
                }
                log_material_mismatch(&MATERIAL_LOGGER, model_name);
              }
              
              // 清理资源
              if (render_object != (longlong *)0x0) {
                if (bone_index != '\0') {
                  release_scene_object(scene_object);
                }
                cleanup_transform_data(&transform_data);
                if ((char)bone_weight != '\0') {
                  update_render_object(scene_object);
                }
                if (bone_weight._1_1_ != '\0') {
                  update_render_object(scene_object);
                }
                vertex_buffer = render_object;
                camera_object = render_object;
                render_object = (longlong *)0x0;
                if (vertex_buffer != (longlong *)0x0) {
                  (**(code **)(*vertex_buffer + 0x38))();
                }
              }
              
              if ((scene_object != (longlong *)0x0) && (render_object != (longlong *)0x0)) {
                if (bone_index != '\0') {
                  release_scene_object();
                }
                cleanup_transform_data(&transform_data);
                if ((char)bone_weight != '\0') {
                  update_render_object(scene_object);
                }
                if (bone_weight._1_1_ != '\0') {
                  update_render_object(scene_object);
                }
                vertex_buffer = render_object;
                light_object = render_object;
                render_object = (longlong *)0x0;
                if (vertex_buffer != (longlong *)0x0) {
                  (**(code **)(*vertex_buffer + 0x38))();
                }
              }
              
              transform_object = &transform_data;
              cleanup_transform_data(&transform_data);
              if (camera_object != (longlong *)0x0) {
                (**(code **)(*camera_object + 0x38))();
              }
              if (render_object != (longlong *)0x0) {
                (**(code **)(*render_object + 0x38))();
              }
              if (scene_object != (longlong *)0x0) {
                (**(code **)(*scene_object + 0x38))();
              }
            }
            
            // 清理临时内存
            texture_ptr = &DEFAULT_TEXTURE_PATH;
            if (material_name != (char *)0x0) {
              // WARNING: 此子函数不返回
              cleanup_memory_allocation();
            }
            material_name = (char *)0x0;
            material_size = material_size & 0xffffffff00000000;
            texture_ptr = &DEFAULT_TEXTURE_PATH;
            texture_index = (int)mesh_iter + 1;
            texture_count = texture_count + 0x10;
            mesh_index = *(longlong *)(render_context + 0x38);
            mesh_iter = (ulonglong)texture_index;
          } while ((ulonglong)(longlong)(int)texture_index <
                   (ulonglong)(*(longlong *)(render_context + 0x40) - mesh_index >> 4));
          
          if (!model_found) goto LAB_18027c5be;
        }
        
        // 清理材质数据
        if (texture_array != (undefined4 *)0x0) {
          // WARNING: 此子函数不返回
          cleanup_memory_allocation(texture_array);
        }
        
        if (mesh_list_ptr != (longlong *)0x0) {
          // WARNING: 此子函数不返回
          cleanup_memory_allocation();
        }
        
        debug_ptr1 = &DEFAULT_TEXTURE_PATH;
        if (debug_ptr2 != (undefined *)0x0) {
          // WARNING: 此子函数不返回
          cleanup_memory_allocation();
        }
        debug_ptr2 = (undefined *)0x0;
        debug_uint2 = 0;
        debug_ptr1 = &DEFAULT_TEXTURE_PATH;
        stack_array[0] = stack_array[0] + 1;
        file_handle = string_buffer;
      } while (stack_array[0] < stack_array[0]);
    }
  }
  // 处理MMD2格式或其他格式
  else if (0 < stack_array2[0]) {
    do {
      fread(&string_buffer, 4, 1, file_handle[1]);
      mesh_offset = allocate_memory(GLOBAL_MEMORY_MANAGER, (longlong)((int)string_buffer + 1), 0x10, 3);
      fread(mesh_offset, 1, (longlong)(int)string_buffer, file_handle[1]);
      *(undefined1 *)((int)string_buffer + mesh_offset) = 0;
      fread(temp_array1, 4, 1, file_handle[1]);
      fread(stack_array, 4, 1, file_handle[1]);
      texture_array = (undefined4 *)allocate_memory(GLOBAL_MEMORY_MANAGER, (longlong)stack_array[0] << 2, 0x10, 3);
      fread(texture_array, 4, (longlong)stack_array[0], file_handle[1]);
      
      vertex_buffer = *(longlong **)(mesh_index + *(longlong *)(render_context + 0x38));
      initialize_scene_object(vertex_buffer, 0);
      transform_object = vertex_buffer;
      
      if (vertex_buffer != (longlong *)0x0) {
        (**(code **)(*vertex_buffer + 0x28))();
      }
      
      scene_object = (longlong *)0x0;
      render_object = (longlong *)0x0;
      stack_ptr = bone_data;
      animation_ptr = (longlong *)0x0;
      bone_info = 0;
      bone_data[0] = 0;
      
      setup_render_pipeline(&scene_object, vertex_buffer, 0);
      
      if (vertex_buffer != (longlong *)0x0) {
        (**(code **)(*vertex_buffer + 0x38))(vertex_buffer);
      }
      
      texture_count = 0;
      material_data = texture_array;
      texture_count = texture_count;
      if (0 < stack_array[0]) {
        do {
          *(undefined4 *)(render_object[0xd] + 0x54 + texture_count) = *material_data;
          anim_flag1 = '\x01';
          texture_index = (int)texture_count + 1;
          texture_count = texture_count + 0x5c;
          material_data = material_data + 1;
          texture_count = (ulonglong)texture_index;
        } while ((int)texture_index < stack_array[0]);
      }
      
      if (render_object != (longlong *)0x0) {
        if (anim_flag2 != '\0') {
          release_scene_object(scene_object);
        }
        cleanup_transform_data(bone_data);
        if (anim_flag1 != '\0') {
          update_render_object(scene_object);
        }
        if (anim_flag3 != '\0') {
          update_render_object(scene_object);
        }
        vertex_buffer = render_object;
        render_object = render_object;
        render_object = (longlong *)0x0;
        if (vertex_buffer != (longlong *)0x0) {
          (**(code **)(*vertex_buffer + 0x38))();
        }
      }
      
      if ((scene_object != (longlong *)0x0) && (render_object != (longlong *)0x0)) {
        if (anim_flag2 != '\0') {
          release_scene_object();
        }
        cleanup_transform_data(bone_data);
        if (anim_flag1 != '\0') {
          update_render_object(scene_object);
        }
        if (anim_flag3 != '\0') {
          update_render_object(scene_object);
        }
        vertex_buffer = render_object;
        mesh_list_ptr = render_object;
        render_object = (longlong *)0x0;
        if (vertex_buffer != (longlong *)0x0) {
          (**(code **)(*vertex_buffer + 0x38))();
        }
      }
      
      stack_ptr = bone_data;
      cleanup_transform_data(bone_data);
      if (animation_ptr != (longlong *)0x0) {
        (**(code **)(*animation_ptr + 0x38))();
      }
      if (render_object != (longlong *)0x0) {
        (**(code **)(*render_object + 0x38))();
      }
      if (scene_object != (longlong *)0x0) {
        (**(code **)(*scene_object + 0x38))();
      }
      
      if (texture_array != (undefined4 *)0x0) {
        // WARNING: 此子函数不返回
        cleanup_memory_allocation(texture_array);
      }
      
      if (mesh_offset != 0) {
        // WARNING: 此子函数不返回
        cleanup_memory_allocation(mesh_offset);
      }
      
      mesh_index = mesh_index + 0x10;
      mesh_count = mesh_count + -1;
    } while (mesh_count != 0);
  }
  
  // 关闭文件句柄
  if (file_handle[1] != 0) {
    fclose();
    file_handle[1] = 0;
    LOCK();
    GLOBAL_FILE_COUNTER = GLOBAL_FILE_COUNTER + -1;
    UNLOCK();
  }
  
  // WARNING: 此子函数不返回
  cleanup_memory_allocation(file_handle);
}


// WARNING: 全局变量以'_'开头的可能与较小符号在相同地址重叠

// 全局常量定义
#define DEFAULT_MATERIAL_PATH (&DAT_18098bc73)    // 默认材质路径
#define DEFAULT_TEXTURE_PATH (&UNK_18098bcb0)      // 默认纹理路径
#define INVALID_CHARS (&DAT_180a0ff10)             // 无效字符序列
#define FILE_OPERATION_TABLE (&UNK_180a01ff0)      // 文件操作表
#define MODEL_LOADING_LOGGER (&UNK_180a168b0)      // 模型加载日志器
#define MATERIAL_LOGGER (&UNK_180a16850)           // 材质日志器
#define GLOBAL_MEMORY_MANAGER (_DAT_180c8ed18)      // 全局内存管理器
#define GLOBAL_FILE_COUNTER (_DAT_180c8ed60)       // 全局文件计数器