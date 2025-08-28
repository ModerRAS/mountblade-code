#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part029.c - 渲染系统高级处理模块
// 包含6个核心函数，涵盖渲染对象处理、材质管理、资源清理、状态比较和初始化等功能

/**
 * 渲染对象高级处理函数
 * 根据渲染标志位处理渲染对象的材质数据、变换矩阵和子对象
 * 
 * @param render_object 渲染对象指针
 * @param context 渲染上下文
 * @param material_data 材质数据指针
 * @param sub_objects 子对象数据指针
 * @param render_flags 渲染标志位
 */
void process_render_object_advanced(int64_t *render_object, int64_t context, int64_t material_data, 
                                   int64_t sub_objects, uint render_flags) {
  uint64_t temp_ptr;
  int32_t *material_ptr;
  int64_t offset;
  uint index;
  uint64_t item_index;
  uint count;
  int64_t sub_offset;
  int32_t material_values[24];
  int64_t *sub_object_array[2];
  int32_t stack_materials[24];
  int8_t material_buffer[64];
  
  // 检查是否启用材质处理
  if ((render_flags >> 2 & 1) == 0) {
    // 处理材质和变换数据
    if ((render_flags & 10) != 0) {
      // 复制材质变换数据
      temp_ptr = *(uint64_t *)(material_data + 0x60);
      *(uint64_t *)((int64_t)render_object + 0x214) = *(uint64_t *)(material_data + 0x58);
      *(uint64_t *)((int64_t)render_object + 0x21c) = temp_ptr;
      temp_ptr = *(uint64_t *)(material_data + 0x70);
      *(uint64_t *)((int64_t)render_object + 0x224) = *(uint64_t *)(material_data + 0x68);
      *(uint64_t *)((int64_t)render_object + 0x22c) = temp_ptr;
      temp_ptr = *(uint64_t *)(material_data + 0x80);
      *(uint64_t *)((int64_t)render_object + 0x234) = *(uint64_t *)(material_data + 0x78);
      *(uint64_t *)((int64_t)render_object + 0x23c) = temp_ptr;
      *(int32_t *)((int64_t)render_object + 0x244) = *(int32_t *)(material_data + 0x88);
      
      // 复制材质属性值
      material_values[0] = *(int32_t *)(material_data + 0x18);
      material_values[1] = *(int32_t *)(material_data + 0x1c);
      material_values[2] = *(int32_t *)(material_data + 0x20);
      material_values[3] = *(int32_t *)(material_data + 0x24);
      material_values[4] = *(int32_t *)(material_data + 0x28);
      material_values[5] = *(int32_t *)(material_data + 0x2c);
      material_values[6] = *(int32_t *)(material_data + 0x30);
      material_values[7] = *(int32_t *)(material_data + 0x34);
      material_values[8] = *(int32_t *)(material_data + 0x38);
      material_values[9] = *(int32_t *)(material_data + 0x3c);
      material_values[10] = *(int32_t *)(material_data + 0x40);
      material_values[11] = *(int32_t *)(material_data + 0x44);
      material_values[12] = *(int32_t *)(material_data + 0x48);
      material_values[13] = *(int32_t *)(material_data + 0x4c);
      material_values[14] = *(int32_t *)(material_data + 0x50);
      material_values[15] = *(int32_t *)(material_data + 0x54);
      
      // 复制到栈缓冲区
      stack_materials[0] = material_values[0];
      stack_materials[1] = material_values[1];
      stack_materials[2] = material_values[2];
      stack_materials[3] = material_values[3];
      stack_materials[4] = material_values[4];
      stack_materials[5] = material_values[5];
      stack_materials[6] = material_values[6];
      stack_materials[7] = material_values[7];
      stack_materials[8] = material_values[8];
      stack_materials[9] = material_values[9];
      stack_materials[10] = material_values[10];
      stack_materials[11] = material_values[11];
      stack_materials[12] = material_values[12];
      stack_materials[13] = material_values[13];
      stack_materials[14] = material_values[14];
      stack_materials[15] = material_values[15];
      
      // 处理子对象材质
      if (sub_objects != 0) {
        material_ptr = (int32_t *)
                 process_material_batch(render_flags & 10, material_buffer, &stack_materials, sub_objects + 0x18,
                               1.0 - (*(float *)(context + 0x13c) - *(float *)(context + 0x144)) /
                                     *(float *)(context + 0x13c));
        material_values[0] = *material_ptr;
        material_values[1] = material_ptr[1];
        material_values[2] = material_ptr[2];
        material_values[3] = material_ptr[3];
        material_values[4] = material_ptr[4];
        material_values[5] = material_ptr[5];
        material_values[6] = material_ptr[6];
        material_values[7] = material_ptr[7];
        material_values[8] = material_ptr[8];
        material_values[9] = material_ptr[9];
        material_values[10] = material_ptr[10];
        material_values[11] = material_ptr[11];
        material_values[12] = material_ptr[12];
        material_values[13] = material_ptr[13];
        material_values[14] = material_ptr[14];
        material_values[15] = material_ptr[15];
      }
      
      // 写入处理后的材质数据
      *(int32_t *)(render_object + 0x66) = material_values[0];
      *(int32_t *)((int64_t)render_object + 0x334) = material_values[1];
      *(int32_t *)(render_object + 0x67) = material_values[2];
      *(int32_t *)((int64_t)render_object + 0x33c) = material_values[3];
      *(int32_t *)(render_object + 0x68) = material_values[4];
      *(int32_t *)((int64_t)render_object + 0x344) = material_values[5];
      *(int32_t *)(render_object + 0x69) = material_values[6];
      *(int32_t *)((int64_t)render_object + 0x34c) = material_values[7];
      *(int32_t *)(render_object + 0x6a) = material_values[8];
      *(int32_t *)((int64_t)render_object + 0x354) = material_values[9];
      *(int32_t *)(render_object + 0x6b) = material_values[10];
      *(int32_t *)((int64_t)render_object + 0x35c) = material_values[11];
      *(int32_t *)(render_object + 0x6c) = material_values[12];
      *(int32_t *)((int64_t)render_object + 0x364) = material_values[13];
      *(int32_t *)(render_object + 0x6d) = material_values[14];
      *(int32_t *)((int64_t)render_object + 0x36c) = material_values[15];
      
      // 重置渲染状态
      *(int8_t *)(render_object + 100) = 0;
      *(int32_t *)(render_object + 0x42) = *(int32_t *)(material_data + 0x14);
      
      // 处理子对象数组
      count = 0;
      index = (uint)(render_object[8] - render_object[7] >> 4);
      if (index != 0) {
        sub_offset = 0;
        do {
          item_index = (uint64_t)count;
          if ((uint64_t)((*(int64_t *)(material_data + 0x98) - *(int64_t *)(material_data + 0x90)) / 0x1a0)
              <= item_index) break;
          if ((sub_objects == 0) ||
             ((uint64_t)((*(int64_t *)(sub_objects + 0x98) - *(int64_t *)(sub_objects + 0x90)) / 0x1a0)
              <= item_index)) {
            offset = 0;
          }
          else {
            offset = item_index * 0x1a0 + *(int64_t *)(sub_objects + 0x90);
          }
          process_sub_object_data(*(int64_t *)(material_data + 0x90) + item_index * 0x1a0, context,
                        *(uint64_t *)(sub_offset + render_object[7]), render_flags, offset);
          count = count + 1;
          sub_offset = sub_offset + 0x10;
        } while (count < index);
      }
      
      // 执行材质回调
      (**(code **)(*render_object + 0xf8))(render_object, material_data + 0x1b8);
    }
    
    // 处理阴影渲染
    if (((render_flags >> 4 & 1) != 0) && (0 < *(int *)(material_data + 0x170))) {
      sub_object_array[0] = (int64_t *)0x0;
      setup_shadow_rendering(context, sub_object_array, material_data + 0x160);
      if (sub_object_array[0] != (int64_t *)0x0) {
        (**(code **)(*sub_object_array[0] + 0x38))();
      }
    }
  }
  return;
}

/**
 * 渲染场景构建函数
 * 构建渲染场景，处理材质、纹理和渲染对象的关系
 * 
 * @param scene_data 场景数据指针
 * @param render_params 渲染参数
 */
void build_render_scene(uint64_t *scene_data, uint64_t render_params) {
  int32_t material_val1;
  int32_t material_val2;
  int32_t material_val3;
  char compare_result;
  int str_len;
  uint64_t temp_data;
  int64_t scene_obj;
  int64_t offset1;
  int64_t offset2;
  int64_t material_offset;
  void *texture_ptr;
  int64_t *object_ptr;
  uint64_t item_count;
  uint tex_index;
  int obj_count;
  int64_t data_offset;
  uint64_t iter_count;
  void *temp_texture;
  bool has_valid_data;
  int8_t temp_buffer[32];
  uint texture_count;
  void **texture_array;
  uint64_t texture_data;
  void *texture_ptr1;
  void *texture_ptr2;
  uint texture_flags;
  int64_t stack_offset1;
  uint8_t texture_buffer1[136];
  void *texture_array1[34];
  void *texture_ptr3;
  int64_t stack_offset2;
  int32_t texture_val;
  int64_t stack_array1[4];
  int64_t stack_array2[4];
  int64_t stack_array3[6];
  void *texture_array2[34];
  void *texture_ptr4;
  int64_t stack_offset3;
  int32_t stack_texture_val;
  int64_t stack_array4[4];
  int64_t stack_array5[4];
  int64_t stack_array6[6];
  uint64_t security_cookie;
  
  // 初始化栈数据
  texture_data = 0xfffffffffffffffe;
  security_cookie = GLOBAL_SECURITY_COOKIE ^ (uint64_t)temp_buffer;
  offset1 = 0;
  texture_count = 0;
  texture_data = render_params;
  temp_data = allocate_render_data(GLOBAL_RENDER_CONTEXT, 0x1c8, 8, 3);
  scene_obj = create_render_object(temp_data);
  stack_offset1 = scene_obj;
  
  // 处理材质路径
  process_material_path(&texture_ptr1, scene_data + 0x3e);
  while ((0 < (int)texture_flags && (offset2 = strstr(texture_ptr2, &MATERIAL_PATH_DELIMITER), offset2 != 0))) {
    str_len = 6;
    obj_count = (int)offset2 - (int)texture_ptr2;
    if (texture_flags < obj_count + 6U) {
      str_len = texture_flags - obj_count;
    }
    tex_index = obj_count + str_len;
    if (tex_index < texture_flags) {
      offset2 = (int64_t)(int)tex_index;
      do {
        texture_ptr2[offset2 - str_len] = texture_ptr2[offset2];
        tex_index = tex_index + 1;
        offset2 = offset2 + 1;
      } while (tex_index < texture_flags);
    }
    texture_flags = texture_flags - str_len;
    texture_ptr2[texture_flags] = 0;
  }
  
  *(int32_t *)(scene_obj + 0x10) = 0;
  texture_ptr = &DEFAULT_MATERIAL_NAME;
  if (texture_ptr2 != (void *)0x0) {
    texture_ptr = texture_ptr2;
  }
  
  // 设置材质名称
  (**(code **)(*(int64_t *)(scene_obj + 0xb0) + 0x10))((int64_t *)(scene_obj + 0xb0), texture_ptr);
  
  // 复制材质变换数据
  temp_data = *(uint64_t *)((int64_t)scene_data + 0x21c);
  *(uint64_t *)(scene_obj + 0x58) = *(uint64_t *)((int64_t)scene_data + 0x214);
  *(uint64_t *)(scene_obj + 0x60) = temp_data;
  temp_data = *(uint64_t *)((int64_t)scene_data + 0x22c);
  *(uint64_t *)(scene_obj + 0x68) = *(uint64_t *)((int64_t)scene_data + 0x224);
  *(uint64_t *)(scene_obj + 0x70) = temp_data;
  temp_data = *(uint64_t *)((int64_t)scene_data + 0x23c);
  *(uint64_t *)(scene_obj + 0x78) = *(uint64_t *)((int64_t)scene_data + 0x234);
  *(uint64_t *)(scene_obj + 0x80) = temp_data;
  *(int32_t *)(scene_obj + 0x88) = *(int32_t *)((int64_t)scene_data + 0x244);
  
  // 复制材质属性
  temp_data = scene_data[0x67];
  *(uint64_t *)(scene_obj + 0x18) = scene_data[0x66];
  *(uint64_t *)(scene_obj + 0x20) = temp_data;
  temp_data = scene_data[0x69];
  *(uint64_t *)(scene_obj + 0x28) = scene_data[0x68];
  *(uint64_t *)(scene_obj + 0x30) = temp_data;
  material_val1 = *(int32_t *)((int64_t)scene_data + 0x354);
  material_val2 = *(int32_t *)(scene_data + 0x6b);
  material_val3 = *(int32_t *)((int64_t)scene_data + 0x35c);
  *(int32_t *)(scene_obj + 0x38) = *(int32_t *)(scene_data + 0x6a);
  *(int32_t *)(scene_obj + 0x3c) = material_val1;
  *(int32_t *)(scene_obj + 0x40) = material_val2;
  *(int32_t *)(scene_obj + 0x44) = material_val3;
  material_val1 = *(int32_t *)((int64_t)scene_data + 0x364);
  material_val2 = *(int32_t *)(scene_data + 0x6d);
  material_val3 = *(int32_t *)((int64_t)scene_data + 0x36c);
  *(int32_t *)(scene_obj + 0x48) = *(int32_t *)(scene_data + 0x6c);
  *(int32_t *)(scene_obj + 0x4c) = material_val1;
  *(int32_t *)(scene_obj + 0x50) = material_val2;
  *(int32_t *)(scene_obj + 0x54) = material_val3;
  *(int32_t *)(scene_obj + 0x14) = *(int32_t *)(scene_data + 0x42);
  
  // 处理纹理数据
  if (scene_data[0x77] == 0) {
    texture_ptr1 = &DEFAULT_TEXTURE_HANDLE;
    texture_ptr2 = texture_buffer1;
    texture_buffer1[0] = 0;
    texture_val = 0;
    initialize_texture_buffer(texture_buffer1, 0x80);
    tex_index = 1;
    texture_count = 1;
    texture_ptr = texture_ptr2;
  }
  else {
    texture_ptr3 = &DEFAULT_TEXTURE_HANDLE;
    texture_ptr4 = texture_buffer1;
    texture_buffer1[0] = 0;
    texture_val = *(int32_t *)(scene_data[0x77] + 0x20);
    initialize_texture_buffer(texture_buffer1, 0x80);
    tex_index = 2;
    texture_count = 2;
    texture_ptr = texture_ptr4;
  }
  
  // 设置纹理名称
  temp_texture = &DEFAULT_TEXTURE_NAME;
  if (texture_ptr != (void *)0x0) {
    temp_texture = texture_ptr;
  }
  (**(code **)(*(int64_t *)(scene_obj + 0x160) + 0x10))((int64_t *)(scene_obj + 0x160), temp_texture);
  
  // 处理纹理标志
  if ((tex_index & 2) != 0) {
    texture_count = tex_index & 0xfffffffd;
    texture_ptr3 = &CLEANUP_TEXTURE_HANDLE;
    tex_index = texture_count;
  }
  if ((tex_index & 1) != 0) {
    texture_count = tex_index & 0xfffffffe;
    texture_ptr1 = &CLEANUP_TEXTURE_HANDLE;
  }
  
  *(int32_t *)(scene_obj + 0x8c) = 0;
  
  // 获取渲染对象数据
  if ((void *)*scene_data == &DEFAULT_RENDER_OBJECT) {
    if ((scene_data[8] - (int64_t)scene_data[7] & 0xfffffffffffffff0U) != 0) {
      offset1 = *(int64_t *)scene_data[7];
    }
  }
  else {
    offset1 = (**(code **)((void *)*scene_data + 0x178))(scene_data);
  }
  
  offset2 = *(int64_t *)(offset1 + 0x1b0);
  if (*(int64_t *)(offset1 + 0x1b0) == 0) {
    offset2 = offset1;
  }
  *(int32_t *)(scene_obj + 0x1b8) = *(int32_t *)(offset2 + 0x2d8);
  has_valid_data = 0 < (int)texture_flags;
  
  // 处理有效的纹理数据
  if (0 < (int)texture_flags) {
    offset1 = get_texture_data(GLOBAL_TEXTURE_MANAGER, &texture_ptr1);
    if ((has_valid_data) && (offset1 != 0)) {
      has_valid_data = true;
      obj_count = (int)(*(int64_t *)(offset1 + 0x40) - *(int64_t *)(offset1 + 0x38) >> 4);
      if (0 < obj_count) {
        offset2 = 0;
        object_ptr = (int64_t *)scene_data[7];
        offset1 = *(int64_t *)(offset1 + 0x38) - (int64_t)object_ptr;
        do {
          data_offset = *(int64_t *)(offset1 + (int64_t)object_ptr);
          material_offset = *(int64_t *)(data_offset + 0x1b0);
          if (material_offset == 0) {
            material_offset = data_offset;
          }
          if (((*(int64_t *)(*object_ptr + 0x1b0) != 0) || (material_offset != 0)) ||
             (*(float *)(*object_ptr + 0x2dc) != 0.0)) goto LAB_HAS_INVALID_DATA;
          offset2 = offset2 + 1;
          object_ptr = object_ptr + 2;
        } while (offset2 < obj_count);
      }
      
      render_params = texture_data;
      if (0 < obj_count + -1) {
        offset1 = 0;
        offset2 = 0;
        do {
          cleanup_texture_array(texture_array2);
          cleanup_texture_array(texture_array1);
          setup_texture_array(texture_array2, texture_data, *(uint64_t *)(offset2 + scene_data[7]));
          setup_texture_array(texture_array1, texture_data, *(uint64_t *)(offset2 + 0x10 + scene_data[7]));
          compare_result = compare_texture_data(texture_array2, texture_array1);
          if (compare_result != '\0') {
            has_valid_data = false;
            cleanup_texture_data(texture_array1);
            cleanup_texture_data(texture_array2);
            render_params = texture_data;
            break;
          }
          
          // 检查纹理数组有效性
          texture_array = (void **)stack_array3;
          if (stack_array3[0] != 0) {
            handle_texture_error();
          }
          texture_array = (void **)stack_array2;
          if (stack_array2[0] != 0) {
            handle_texture_error();
          }
          texture_array = (void **)stack_array1;
          if (stack_array1[0] != 0) {
            handle_texture_error();
          }
          texture_array = &texture_ptr3;
          texture_ptr3 = &DEFAULT_TEXTURE_HANDLE;
          if (stack_offset2 != 0) {
            handle_texture_error();
          }
          stack_offset2 = 0;
          texture_val = 0;
          texture_ptr3 = &CLEANUP_TEXTURE_HANDLE;
          texture_array1[0] = &CLEANUP_TEXTURE_HANDLE;
          texture_array = (void **)stack_array6;
          if (stack_array6[0] != 0) {
            handle_texture_error();
          }
          texture_array = (void **)stack_array5;
          if (stack_array5[0] != 0) {
            handle_texture_error();
          }
          texture_array = (void **)stack_array4;
          if (stack_array4[0] != 0) {
            handle_texture_error();
          }
          texture_array = &texture_ptr4;
          texture_ptr4 = &DEFAULT_TEXTURE_HANDLE;
          if (stack_offset3 != 0) {
            handle_texture_error();
          }
          stack_offset3 = 0;
          stack_texture_val = 0;
          texture_ptr4 = &CLEANUP_TEXTURE_HANDLE;
          texture_array = texture_array2;
          texture_array2[0] = &CLEANUP_TEXTURE_HANDLE;
          offset1 = offset1 + 1;
          offset2 = offset2 + 0x10;
          render_params = texture_data;
        } while (offset1 < obj_count + -1);
      }
    }
    else {
LAB_HAS_INVALID_DATA:
      has_valid_data = false;
    }
  }
  
  // 处理场景对象
  object_ptr = (int64_t *)(scene_obj + 0x90);
  initialize_scene_object(object_ptr);
  *(bool *)(scene_obj + 0x1c4) = has_valid_data;
  
  if (has_valid_data == false) {
    // 处理无效数据情况
    item_count = (int64_t)(scene_data[8] - scene_data[7]) >> 4;
    iter_count = item_count & 0xffffffff;
    setup_scene_objects(object_ptr, item_count & 0xffffffff);
    temp_data = texture_data;
    scene_obj = stack_offset1;
    if ((int)item_count != 0) {
      offset2 = 0;
      offset1 = 0;
      data_offset = 0;
      do {
        setup_object_data(*object_ptr + data_offset, temp_data, *(uint64_t *)(offset1 + scene_data[7]));
        *(int32_t *)(offset2 + 0x58 + *object_ptr) = *(int32_t *)(offset1 + 8 + scene_data[7]);
        data_offset = data_offset + 0x1a0;
        offset1 = offset1 + 0x10;
        offset2 = offset2 + 0x1a0;
        iter_count = iter_count - 1;
        scene_obj = stack_offset1;
      } while (iter_count != 0);
    }
  }
  else if ((int64_t)(scene_data[8] - scene_data[7]) >> 4 != 0) {
    setup_scene_objects(object_ptr, 1);
    setup_object_data(*object_ptr, render_params, *(uint64_t *)scene_data[7]);
  }
  
  *(int32_t *)(scene_obj + 0x1bc) = *(int32_t *)(scene_data + 99);
  *(int32_t *)(scene_obj + 0x1c0) = *(int32_t *)(scene_data + 0x62);
  texture_ptr1 = &DEFAULT_TEXTURE_HANDLE;
  if (texture_ptr2 != (void *)0x0) {
    handle_texture_error();
  }
  texture_ptr2 = (void *)0x0;
  texture_flags = 0;
  texture_ptr1 = &CLEANUP_TEXTURE_HANDLE;
  handle_security_cleanup(security_cookie ^ (uint64_t)temp_buffer);
}

/**
 * 渲染数据清理函数
 * 清理渲染数据结构和相关资源
 * 
 * @param render_data 渲染数据指针
 */
void cleanup_render_data(uint64_t *render_data) {
  if (render_data[0x2e] != 0) {
    handle_memory_error();
  }
  if (render_data[0x2a] != 0) {
    handle_memory_error();
  }
  if (render_data[0x26] != 0) {
    handle_memory_error();
  }
  render_data[0x22] = &DEFAULT_TEXTURE_HANDLE;
  if (render_data[0x23] != 0) {
    handle_memory_error();
  }
  render_data[0x23] = 0;
  *(int32_t *)(render_data + 0x25) = 0;
  render_data[0x22] = &CLEANUP_TEXTURE_HANDLE;
  *render_data = &CLEANUP_TEXTURE_HANDLE;
  return;
}

/**
 * 渲染对象比较函数
 * 比较两个渲染对象的属性和状态
 * 
 * @param obj1 第一个渲染对象
 * @param obj2 第二个渲染对象
 * @param compare_flags 比较标志
 * @return 比较结果，true表示有差异
 */
bool compare_render_objects(uint64_t obj1, int64_t obj2, int64_t compare_flags) {
  byte *data_ptr1;
  int64_t offset1;
  char result1;
  char result2;
  byte *data_ptr2;
  int64_t data_offset;
  int val1;
  int val2;
  int64_t material_offset;
  uint64_t iter_count;
  bool has_differences;
  float float_val1;
  float float_val2;
  
  material_offset = compare_flags;
  result1 = compare_material_data(obj2 + 0x58, material_offset + 0x58);
  if (result1 == '\0') {
    *(uint *)(obj2 + 0x10) = *(uint *)(obj2 + 0x10) | 8;
  }
  float_val2 = 0.0001;
  result2 = compare_texture_data(obj2 + 0x18, material_offset + 0x18);
  if (result2 == '\0') {
    *(uint *)(obj2 + 0x10) = *(uint *)(obj2 + 0x10) | 8;
  }
  has_differences = *(int *)(obj2 + 0x14) != *(int *)(material_offset + 0x14);
  if (has_differences) {
    *(uint *)(obj2 + 0x10) = *(uint *)(obj2 + 0x10) | 8;
  }
  has_differences = has_differences || (result2 == '\0' || result1 == '\0');
  val1 = *(int *)(obj2 + 0x170);
  val2 = *(int *)(material_offset + 0x170);
  if (val1 == val2) {
    if (val1 != 0) {
      data_ptr2 = *(byte **)(obj2 + 0x168);
      material_offset = *(int64_t *)(material_offset + 0x168) - (int64_t)data_ptr2;
      do {
        data_ptr1 = data_ptr2 + material_offset;
        val2 = (uint)*data_ptr2 - (uint)*data_ptr1;
        if (val2 != 0) break;
        data_ptr2 = data_ptr2 + 1;
      } while (*data_ptr1 != 0);
    }
LAB_CHECK_DIFFERENCES:
    if (val2 == 0) goto LAB_NO_DIFFERENCES;
  }
  else if (val1 == 0) goto LAB_CHECK_DIFFERENCES;
  *(uint *)(obj2 + 0x10) = *(uint *)(obj2 + 0x10) | 0x10;
  has_differences = true;
LAB_NO_DIFFERENCES:
  float_val1 = *(float *)(obj2 + 0x1b8) - *(float *)(compare_flags + 0x1b8);
  if ((float_val1 <= -0.0001) || (float_val2 <= float_val1)) {
    *(uint *)(obj2 + 0x10) = *(uint *)(obj2 + 0x10) | 8;
    has_differences = true;
  }
  
  // 比较子对象数据
  material_offset = *(int64_t *)(obj2 + 0x90);
  data_offset = *(int64_t *)(obj2 + 0x98) - material_offset;
  offset1 = data_offset >> 0x3f;
  data_offset = data_offset / 0x1a0 + offset1;
  if ((data_offset - offset1 == (*(int64_t *)(compare_flags + 0x98) - *(int64_t *)(compare_flags + 0x90)) / 0x1a0) &&
     (val1 = 0, data_offset != offset1)) {
    iter_count = 0;
    do {
      result1 = compare_sub_object_data(iter_count * 0x1a0 + material_offset, *(int64_t *)(compare_flags + 0x90) + iter_count * 0x1a0);
      if (result1 != '\0') {
        *(uint *)(obj2 + 0x10) = *(uint *)(obj2 + 0x10) | 8;
        has_differences = true;
      }
      material_offset = *(int64_t *)(obj2 + 0x90);
      val1 = val1 + 1;
      iter_count = (uint64_t)val1;
    } while (iter_count < (uint64_t)((*(int64_t *)(obj2 + 0x98) - material_offset) / 0x1a0));
  }
  return has_differences;
}

/**
 * 渲染状态验证函数
 * 验证渲染对象的完整性和一致性
 * 
 * @param render_context 渲染上下文
 * @param obj_data 对象数据
 * @param material_data 材质数据
 * @param sub_object_data 子对象数据
 * @return 验证结果
 */
int8_t validate_render_state(uint64_t render_context, uint64_t obj_data, int64_t material_data, int64_t sub_object_data) {
  char validation_result;
  int64_t data_offset;
  int64_t context_data;
  int obj_count;
  int64_t material_offset;
  uint64_t iter_count;
  
  obj_count = 0;
  if (material_data != 0) {
    iter_count = 0;
    do {
      validation_result = compare_sub_object_data(iter_count * 0x1a0 + sub_object_data, *(int64_t *)(context_data + 0x90) + iter_count * 0x1a0);
      if (validation_result != '\0') {
        *(uint *)(obj_data + 0x10) = *(uint *)(obj_data + 0x10) | 8;
        validation_result = 1;
      }
      sub_object_data = *(int64_t *)(obj_data + 0x90);
      obj_count = obj_count + 1;
      iter_count = (uint64_t)obj_count;
      data_offset = CALCULATE_OFFSET(SEXT816(validation_result) * SEXT816(*(int64_t *)(obj_data + 0x98) - sub_object_data), 8);
    } while (iter_count < (uint64_t)((data_offset >> 7) - (data_offset >> 0x3f)));
  }
  return validation_result;
}

/**
 * 渲染系统初始化函数
 * 初始化渲染系统的全局状态和默认值
 */
void initialize_rendering_system(void) {
  return;
}

// 常量定义
#define GLOBAL_RENDER_CONTEXT system_memory_pool_ptr
#define GLOBAL_SECURITY_COOKIE GET_SECURITY_COOKIE()
#define GLOBAL_TEXTURE_MANAGER system_resource_state
#define DEFAULT_MATERIAL_NAME &system_buffer_ptr
#define DEFAULT_TEXTURE_NAME &system_buffer_ptr
#define MATERIAL_PATH_DELIMITER &system_memory_ff10
#define DEFAULT_TEXTURE_HANDLE &memory_allocator_3432_ptr
#define CLEANUP_TEXTURE_HANDLE &system_state_ptr
#define DEFAULT_RENDER_OBJECT &processed_var_9304_ptr

// 函数别名定义
#define process_material_batch FUN_1803310f0
#define process_sub_object_data FUN_1803269f0
#define setup_shadow_rendering FUN_1803276a0
#define allocate_render_data CoreMemoryPoolReallocator
#define create_render_object FUN_180339110
#define process_material_path SystemCore_NetworkHandler0
#define initialize_scene_object FUN_180284720
#define setup_scene_objects FUN_180284580
#define setup_object_data FUN_1803263e0
#define get_texture_data RenderingSystem_VertexProcessor
#define cleanup_texture_array FUN_180274db0
#define setup_texture_array FUN_1803263e0
#define compare_texture_data FUN_180327250
#define handle_texture_error CoreMemoryPoolInitializer
#define handle_memory_error CoreMemoryPoolInitializer
#define handle_security_cleanup SystemSecurityChecker
#define compare_material_data func_0x000180274d30
#define compare_sub_object_data FUN_180327250
#define initialize_texture_buffer strcpy_s
#define CALCULATE_OFFSET SUB168