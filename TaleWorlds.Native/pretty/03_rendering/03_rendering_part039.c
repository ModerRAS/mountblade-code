#include "TaleWorlds.Native.Split.h"

// 03_rendering_part039.c - 渲染系统纹理坐标和顶点数据处理模块
// 包含9个核心函数，涵盖纹理坐标计算、顶点数据处理、内存管理、字符串操作等高级渲染功能

// 常量定义
#define RENDER_COORDINATE_MAX 0x40000000  // 渲染坐标最大值
#define RENDER_DATA_CHUNK_SIZE 0x10         // 渲染数据块大小
#define RENDER_POINTER_SIZE 0x4             // 渲染指针大小
#define RENDER_OFFSET_4 0x4                 // 渲染偏移量4
#define RENDER_OFFSET_C 0xc                 // 渲染偏移量12
#define RENDER_OFFSET_20 0x20               // 渲染偏移量32

// 函数别名定义
#define calculate_texture_coordinates FUN_18028aaf0
#define process_vertex_data FUN_18028ad90
#define optimize_vertex_buffer FUN_18028ada4
#define manage_render_resources FUN_18028adf9
#define cleanup_render_cache FUN_18028af71
#define validate_render_data FUN_18028af94
#define allocate_render_buffer FUN_18028b000
#define setup_render_texture FUN_18028b091

// 全局变量声明
extern longlong UNK_18028ad30;  // 渲染系统比较函数指针
extern longlong UNK_18028ad70;  // 渲染系统排序函数指针

// 纹理坐标计算函数
// 参数1: 纹理坐标输出数组
// 参数2: 纹理配置参数数组
// 参数3: 纹理宽度
// 参数4: 纹理高度
void calculate_texture_coordinates(uint *texture_coords, int *texture_config, int texture_width, int texture_height)
{
  ushort tex_width;
  int config_total;
  int tex_height;
  ushort *tex_ptr1;
  ushort *tex_ptr2;
  uint coord_value1;
  uint coord_value2;
  uint coord_value3;
  ushort *tex_ptr3;
  ushort *tex_ptr4;
  uint coord_value4;
  ushort *tex_ptr5;
  int pixel_count;
  ushort *tex_ptr6;
  uint coord_value5;
  ushort *tex_ptr7;
  uint coord_stack[2];
  int height_param;
  ushort *tex_stack1;
  ushort *tex_stack2;
  ulonglong tex_stack3;
  
  // 计算纹理总高度
  tex_height = texture_height + -1 + texture_config[2];
  tex_ptr6 = (ushort *)(texture_config + 6);
  tex_ptr5 = *(ushort **)tex_ptr6;
  config_total = *texture_config;
  tex_height = tex_height - tex_height % texture_config[2];
  coord_value3 = RENDER_COORDINATE_MAX;
  coord_stack[0] = RENDER_COORDINATE_MAX;
  tex_stack3 = 0;
  tex_width = *tex_ptr5;
  tex_stack2 = (ushort *)0x0;
  height_param = texture_height;
  tex_stack1 = tex_ptr5;
  
  // 检查纹理尺寸是否在有效范围内
  if ((int)(tex_height + (uint)tex_width) <= config_total) {
    tex_height = texture_config[4];
    tex_ptr3 = tex_ptr6;
    coord_value5 = coord_value3;
    do {
      // 计算纹理坐标值
      coord_value1 = FUN_18028aa10(tex_width, tex_ptr5, tex_width, tex_height, coord_stack);
      if (tex_height == 0) {
        coord_value4 = coord_value5;
        if ((int)coord_value3 <= (int)coord_value1) {
LAB_18028abe5:
          coord_value1 = coord_value3;
          coord_value4 = coord_value5;
          tex_ptr3 = tex_stack2;
        }
      }
      else if ((texture_config[1] < (int)(height_param + coord_value1)) ||
              ((coord_value4 = coord_stack[0], (int)coord_value3 <= (int)coord_value1 &&
               ((coord_value1 != coord_value3 || ((int)coord_value5 <= (int)coord_stack[0])))))) goto LAB_18028abe5;
      tex_stack2 = tex_ptr3;
      coord_value5 = coord_value4;
      coord_value3 = coord_value1;
      tex_ptr3 = tex_ptr5 + 4;
      tex_ptr5 = *(ushort **)(tex_ptr5 + 4);
      tex_width = *tex_ptr5;
    } while ((int)((uint)tex_width + tex_height) <= config_total);
    coord_stack[0] = coord_value5;
    if (tex_stack2 != (ushort *)0x0) {
      tex_stack3 = (ulonglong)**(ushort **)tex_stack2;
      coord_value5 = (uint)**(ushort **)tex_stack2;
      goto LAB_18028ac26;
    }
  }
  coord_value5 = 0;
LAB_18028ac26:
  if (texture_config[4] == 1) {
    tex_width = *tex_stack1;
    tex_ptr5 = tex_stack1;
    while ((int)(uint)tex_width < tex_height) {
      tex_ptr5 = *(ushort **)(tex_ptr5 + 4);
      tex_width = *tex_ptr5;
    }
    tex_ptr4 = *(ushort **)(tex_stack1 + 4);
    tex_ptr3 = tex_stack1 + 4;
    config_total = texture_config[1];
    coord_value1 = (uint)*tex_ptr4;
    tex_ptr7 = tex_stack1;
    do {
      coord_value4 = (uint)*tex_ptr5 - tex_height;
      tex_ptr1 = tex_ptr4;
      tex_ptr2 = tex_ptr3;
      while (tex_ptr3 = tex_ptr2, tex_ptr4 = tex_ptr1, (int)coord_value1 <= (int)coord_value4) {
        tex_ptr1 = *(ushort **)(tex_ptr4 + 4);
        tex_ptr2 = tex_ptr4 + 4;
        tex_ptr6 = tex_ptr3;
        tex_ptr7 = tex_ptr4;
        coord_value1 = (uint)**(ushort **)(tex_ptr4 + 4);
      }
      coord_value2 = FUN_18028aa10(tex_height, tex_ptr7, coord_value4, tex_height, &tex_stack1);
      coord_value5 = (uint)tex_stack3;
      if ((((int)(height_param + coord_value2) < config_total) && ((int)coord_value2 <= (int)coord_value3)) &&
         ((((int)coord_value2 < (int)coord_value3 || ((int)(uint)tex_stack1 < (int)coord_stack[0])) ||
          (((uint)tex_stack1 == coord_stack[0] && ((int)coord_value4 < (int)coord_value5)))))) {
        tex_stack3 = (ulonglong)coord_value4;
        coord_stack[0] = (uint)tex_stack1;
        coord_value3 = coord_value2;
        coord_value5 = coord_value4;
        tex_stack2 = tex_ptr6;
      }
      tex_ptr5 = *(ushort **)(tex_ptr5 + 4);
    } while (tex_ptr5 != (ushort *)0x0);
  }
  *(ushort **)(texture_coords + 2) = tex_stack2;
  *texture_coords = coord_value5;
  texture_coords[1] = coord_value3;
  return;
}

// 顶点数据处理函数
// 参数1: 顶点数据缓冲区
// 参数2: 处理参数
// 参数3: 顶点数量
undefined4 process_vertex_data(longlong vertex_buffer, longlong process_params, int vertex_count)
{
  ushort *vert_ptr1;
  ushort vert_width;
  ushort vert_height;
  short *vert_ptr2;
  undefined8 process_result;
  longlong *data_ptr;
  int vert_index;
  undefined8 *result_ptr;
  ushort *vert_ptr3;
  undefined4 success_flag;
  ushort *vert_ptr4;
  short *vert_ptr5;
  longlong buffer_size;
  short vert_offset;
  int *index_ptr;
  short vert_size;
  undefined4 temp_flag;
  longlong temp_size;
  undefined1 temp_stack[16];
  
  success_flag = 1;
  vert_index = 0;
  if (0 < vertex_count) {
    index_ptr = (int *)(process_params + 0xc);
    do {
      *index_ptr = vert_index;
      index_ptr = index_ptr + 4;
      vert_index = vert_index + 1;
    } while (vert_index < vertex_count);
  }
  temp_size = (longlong)vertex_count;
  qsort(process_params, temp_size, RENDER_DATA_CHUNK_SIZE, &UNK_18028ad30);
  if (0 < temp_size) {
    vert_ptr5 = (short *)(process_params + 10);
    buffer_size = temp_size;
    do {
      vert_width = vert_ptr5[-3];
      if ((vert_width == 0) || (vert_height = vert_ptr5[-2], vert_height == 0)) {
        vert_ptr5[-1] = 0;
        vert_ptr5[0] = 0;
      }
      else {
        // 计算纹理坐标
        result_ptr = (undefined8 *)calculate_texture_coordinates(temp_stack, vertex_buffer, vert_width, vert_height);
        process_result = *result_ptr;
        data_ptr = (longlong *)result_ptr[1];
        if (((data_ptr == (longlong *)0x0) ||
            (*(int *)(vertex_buffer + 4) < (int)((int)((ulonglong)process_result >> 0x20) + (uint)vert_height))) ||
           (vert_ptr2 = *(short **)(vertex_buffer + 0x20), vert_ptr2 == (short *)0x0)) {
          vert_ptr5[-1] = -1;
          vert_ptr5[0] = -1;
        }
        else {
          vert_size = (short)((ulonglong)process_result >> 0x20);
          vert_ptr2[1] = vert_height + vert_size;
          vert_offset = (short)process_result;
          *vert_ptr2 = vert_offset;
          *(undefined8 *)(vertex_buffer + 0x20) = *(undefined8 *)(vert_ptr2 + 4);
          vert_ptr3 = (ushort *)*data_ptr;
          vert_index = (int)process_result;
          if ((int)(uint)*vert_ptr3 < vert_index) {
            vert_ptr4 = vert_ptr3 + 4;
            vert_ptr3 = *(ushort **)(vert_ptr3 + 4);
            *(short **)vert_ptr4 = vert_ptr2;
          }
          else {
            *data_ptr = (longlong)vert_ptr2;
          }
          if (*(ushort **)(vert_ptr3 + 4) != (ushort *)0x0) {
            vert_ptr4 = *(ushort **)(vert_ptr3 + 4);
            do {
              if ((int)(vert_index + (uint)vert_width) < (int)(uint)*vert_ptr4) break;
              *(undefined8 *)(vert_ptr3 + 4) = *(undefined8 *)(vertex_buffer + 0x20);
              *(ushort **)(vertex_buffer + 0x20) = vert_ptr3;
              vert_ptr1 = vert_ptr4 + 4;
              vert_ptr3 = vert_ptr4;
              vert_ptr4 = *(ushort **)vert_ptr1;
            } while (*(ushort **)vert_ptr1 != (ushort *)0x0);
          }
          *(ushort **)(vert_ptr2 + 4) = vert_ptr3;
          if ((int)(uint)*vert_ptr3 < (int)(vert_index + (uint)vert_width)) {
            *vert_ptr3 = vert_width + vert_offset;
          }
          vert_ptr5[-1] = vert_offset;
          *vert_ptr5 = vert_size;
        }
      }
      vert_ptr5 = vert_ptr5 + 8;
      buffer_size = buffer_size + -1;
    } while (buffer_size != 0);
  }
  qsort(process_params, temp_size, RENDER_DATA_CHUNK_SIZE, &UNK_18028ad70);
  if (0 < temp_size) {
    vert_ptr5 = (short *)(process_params + 10);
    temp_flag = success_flag;
    do {
      if ((vert_ptr5[-1] != -1) || (vert_index = 0, *vert_ptr5 != -1)) {
        vert_index = 1;
      }
      *(int *)(vert_ptr5 + 1) = vert_index;
      success_flag = 0;
      if (vert_index != 0) {
        success_flag = temp_flag;
      }
      vert_ptr5 = vert_ptr5 + 8;
      temp_size = temp_size + -1;
      temp_flag = success_flag;
    } while (temp_size != 0);
  }
  return success_flag;
}

// 顶点缓冲区优化函数
// 参数1: 顶点缓冲区
// 参数2: 优化参数
// 参数3: 顶点数量
int optimize_vertex_buffer(longlong vertex_buffer, longlong optimize_params, int vertex_count)
{
  ushort *vert_ptr1;
  ushort vert_width;
  ushort vert_height;
  short *vert_ptr2;
  undefined8 optimize_result;
  longlong *data_ptr;
  int vert_index;
  undefined8 *result_ptr;
  ushort *vert_ptr3;
  int opt_result1;
  int opt_result2;
  ushort *vert_ptr4;
  short *vert_ptr5;
  longlong buffer_size;
  short vert_offset;
  int *index_ptr;
  short vert_size;
  int unused_reg;
  longlong temp_size;
  longlong stack_param;
  
  opt_result1 = 1;
  if (0 < vertex_count) {
    index_ptr = (int *)(optimize_params + 0xc);
    vert_index = unused_reg;
    do {
      *index_ptr = vert_index;
      index_ptr = index_ptr + 4;
      vert_index = vert_index + 1;
    } while (vert_index < vertex_count);
  }
  temp_size = (longlong)vertex_count;
  qsort(optimize_params, temp_size, RENDER_DATA_CHUNK_SIZE, &UNK_18028ad30);
  if (0 < temp_size) {
    vert_ptr5 = (short *)(optimize_params + 10);
    buffer_size = temp_size;
    do {
      vert_width = vert_ptr5[-3];
      if ((vert_width == 0) || (vert_height = vert_ptr5[-2], vert_height == 0)) {
        vert_ptr5[-1] = 0;
        vert_ptr5[0] = 0;
      }
      else {
        // 优化顶点数据
        result_ptr = (undefined8 *)calculate_texture_coordinates(&stack0x00000030, vertex_buffer, vert_width, vert_height);
        optimize_result = *result_ptr;
        data_ptr = (longlong *)result_ptr[1];
        if (((data_ptr == (longlong *)0x0) ||
            (*(int *)(vertex_buffer + 4) < (int)((int)((ulonglong)optimize_result >> 0x20) + (uint)vert_height))) ||
           (vert_ptr2 = *(short **)(vertex_buffer + 0x20), vert_ptr2 == (short *)0x0)) {
          unused_reg = 0;
          vert_ptr5[-1] = -1;
          vert_ptr5[0] = -1;
        }
        else {
          vert_size = (short)((ulonglong)optimize_result >> 0x20);
          vert_ptr2[1] = vert_height + vert_size;
          vert_offset = (short)optimize_result;
          *vert_ptr2 = vert_offset;
          *(undefined8 *)(vertex_buffer + 0x20) = *(undefined8 *)(vert_ptr2 + 4);
          vert_ptr3 = (ushort *)*data_ptr;
          vert_index = (int)optimize_result;
          if ((int)(uint)*vert_ptr3 < vert_index) {
            vert_ptr4 = vert_ptr3 + 4;
            vert_ptr3 = *(ushort **)(vert_ptr3 + 4);
            *(short **)vert_ptr4 = vert_ptr2;
          }
          else {
            *data_ptr = (longlong)vert_ptr2;
          }
          if (*(ushort **)(vert_ptr3 + 4) != (ushort *)0x0) {
            vert_ptr4 = *(ushort **)(vert_ptr3 + 4);
            do {
              if ((int)(vert_index + (uint)vert_width) < (int)(uint)*vert_ptr4) break;
              *(undefined8 *)(vert_ptr3 + 4) = *(undefined8 *)(vertex_buffer + 0x20);
              *(ushort **)(vertex_buffer + 0x20) = vert_ptr3;
              vert_ptr1 = vert_ptr4 + 4;
              vert_ptr3 = vert_ptr4;
              vert_ptr4 = *(ushort **)vert_ptr1;
            } while (*(ushort **)vert_ptr1 != (ushort *)0x0);
          }
          *(ushort **)(vert_ptr2 + 4) = vert_ptr3;
          if ((int)(uint)*vert_ptr3 < (int)(vert_index + (uint)vert_width)) {
            *vert_ptr3 = vert_width + vert_offset;
          }
          unused_reg = 0;
          vert_ptr5[-1] = vert_offset;
          *vert_ptr5 = vert_size;
        }
      }
      vert_ptr5 = vert_ptr5 + 8;
      buffer_size = buffer_size + -1;
      optimize_params = stack_param;
    } while (buffer_size != 0);
  }
  qsort(optimize_params, temp_size, RENDER_DATA_CHUNK_SIZE, &UNK_18028ad70);
  if (0 < temp_size) {
    vert_ptr5 = (short *)(optimize_params + 10);
    vert_index = opt_result1;
    do {
      if ((vert_ptr5[-1] != -1) || (opt_result2 = unused_reg, *vert_ptr5 != -1)) {
        opt_result2 = 1;
      }
      *(int *)(vert_ptr5 + 1) = opt_result2;
      opt_result1 = unused_reg;
      if (opt_result2 != 0) {
        opt_result1 = vert_index;
      }
      vert_ptr5 = vert_ptr5 + 8;
      temp_size = temp_size + -1;
      vert_index = opt_result1;
    } while (temp_size != 0);
  }
  return vert_index;
}

// 渲染资源管理函数
ulonglong manage_render_resources(void)
{
  ushort *vert_ptr1;
  ushort vert_width;
  ushort vert_height;
  short *vert_ptr2;
  undefined8 manage_result;
  longlong *data_ptr;
  undefined8 *result_ptr;
  ushort *vert_ptr3;
  uint coord_value1;
  uint coord_value2;
  ushort *vert_ptr4;
  longlong unused_rbx;
  short *vert_ptr5;
  longlong unused_rsi;
  longlong buffer_size;
  short vert_offset;
  int vert_index;
  short vert_size;
  ulonglong unused_r12;
  uint unused_r14d;
  longlong unused_r15;
  longlong stack_param;
  
  vert_ptr5 = (short *)(unused_rbx + 10);
  buffer_size = unused_r15;
  do {
    vert_width = vert_ptr5[-3];
    if ((vert_width == 0) || (vert_height = vert_ptr5[-2], vert_height == 0)) {
      vert_ptr5[-1] = 0;
      vert_ptr5[0] = 0;
    }
    else {
      // 管理渲染资源
      result_ptr = (undefined8 *)calculate_texture_coordinates(&stack0x00000030);
      manage_result = *result_ptr;
      data_ptr = (longlong *)result_ptr[1];
      if (((data_ptr == (longlong *)0x0) ||
          (*(int *)(unused_rsi + 4) < (int)((int)((ulonglong)manage_result >> 0x20) + (uint)vert_height))) ||
         (vert_ptr2 = *(short **)(unused_rsi + 0x20), vert_ptr2 == (short *)0x0)) {
        unused_r14d = 0;
        vert_ptr5[-1] = -1;
        vert_ptr5[0] = -1;
      }
      else {
        vert_size = (short)((ulonglong)manage_result >> 0x20);
        vert_ptr2[1] = vert_height + vert_size;
        vert_offset = (short)manage_result;
        *vert_ptr2 = vert_offset;
        *(undefined8 *)(unused_rsi + 0x20) = *(undefined8 *)(vert_ptr2 + 4);
        vert_ptr3 = (ushort *)*data_ptr;
        vert_index = (int)manage_result;
        if ((int)(uint)*vert_ptr3 < vert_index) {
          vert_ptr4 = vert_ptr3 + 4;
          vert_ptr3 = *(ushort **)(vert_ptr3 + 4);
          *(short **)vert_ptr4 = vert_ptr2;
        }
        else {
          *data_ptr = (longlong)vert_ptr2;
        }
        if (*(ushort **)(vert_ptr3 + 4) != (ushort *)0x0) {
          vert_ptr4 = *(ushort **)(vert_ptr3 + 4);
          do {
            if ((int)(vert_index + (uint)vert_width) < (int)(uint)*vert_ptr4) break;
            *(undefined8 *)(vert_ptr3 + 4) = *(undefined8 *)(unused_rsi + 0x20);
            *(ushort **)(unused_rsi + 0x20) = vert_ptr3;
            vert_ptr1 = vert_ptr4 + 4;
            vert_ptr3 = vert_ptr4;
            vert_ptr4 = *(ushort **)vert_ptr1;
          } while (*(ushort **)vert_ptr1 != (ushort *)0x0);
        }
        *(ushort **)(vert_ptr2 + 4) = vert_ptr3;
        if ((int)(uint)*vert_ptr3 < (int)(vert_index + (uint)vert_width)) {
          *vert_ptr3 = vert_width + vert_offset;
        }
        unused_r14d = 0;
        vert_ptr5[-1] = vert_offset;
        *vert_ptr5 = vert_size;
      }
    }
    vert_ptr5 = vert_ptr5 + 8;
    buffer_size = buffer_size - unused_r12;
    if (buffer_size == 0) {
      qsort(stack_param);
      if (0 < unused_r15) {
        vert_ptr5 = (short *)(stack_param + 10);
        do {
          if ((vert_ptr5[-1] != -1) || (coord_value2 = unused_r14d, *vert_ptr5 != -1)) {
            coord_value2 = 1;
          }
          *(uint *)(vert_ptr5 + 1) = coord_value2;
          coord_value1 = unused_r14d;
          if (coord_value2 != 0) {
            coord_value1 = (uint)unused_r12;
          }
          vert_ptr5 = vert_ptr5 + 8;
          unused_r12 = (ulonglong)coord_value1;
          unused_r15 = unused_r15 + -1;
        } while (unused_r15 != 0);
      }
      return unused_r12 & 0xffffffff;
    }
  } while( true );
}

// 渲染缓存清理函数
int cleanup_render_cache(void)
{
  short *cache_ptr;
  int cache_result;
  longlong unused_rbx;
  short unused_di;
  int unused_r12d;
  int temp_result;
  int unused_r14d;
  longlong unused_r15;
  
  qsort();
  if (0 < unused_r15) {
    cache_ptr = (short *)(unused_rbx + 10);
    temp_result = unused_r12d;
    do {
      if ((cache_ptr[-1] != unused_di) || (cache_result = unused_r14d, *cache_ptr != unused_di)) {
        cache_result = 1;
      }
      *(int *)(cache_ptr + 1) = cache_result;
      unused_r12d = unused_r14d;
      if (cache_result != 0) {
        unused_r12d = temp_result;
      }
      cache_ptr = cache_ptr + 8;
      unused_r15 = unused_r15 + -1;
      temp_result = unused_r12d;
    } while (unused_r15 != 0);
  }
  return unused_r12d;
}

// 渲染数据验证函数
int validate_render_data(void)
{
  short *data_ptr;
  int data_result;
  int temp_result;
  longlong unused_rbx;
  short unused_di;
  int unused_r12d;
  int unused_r14d;
  longlong unused_r15;
  
  data_ptr = (short *)(unused_rbx + 10);
  do {
    if ((data_ptr[-1] != unused_di) || (temp_result = unused_r14d, *data_ptr != unused_di)) {
      temp_result = 1;
    }
    *(int *)(data_ptr + 1) = temp_result;
    data_result = unused_r14d;
    if (temp_result != 0) {
      data_result = unused_r12d;
    }
    data_ptr = data_ptr + 8;
    unused_r15 = unused_r15 + -1;
    unused_r12d = data_result;
  } while (unused_r15 != 0);
  return data_result;
}

// 渲染缓冲区分配函数
longlong * allocate_render_buffer(longlong *buffer_param1, longlong *buffer_param2)
{
  int buffer_size1;
  int buffer_size2;
  undefined1 byte1;
  undefined1 byte2;
  byte byte3;
  longlong temp_ptr;
  int buffer_index;
  ulonglong byte_count;
  uint coord_value;
  int stack_offset;
  
  buffer_size1 = (int)buffer_param2[1];
  buffer_size2 = *(int *)((longlong)buffer_param2 + RENDER_OFFSET_C);
  if (buffer_size1 < buffer_size2) {
    buffer_index = buffer_size1 + 1;
    byte1 = *(undefined1 *)((longlong)buffer_size1 + *buffer_param1);
    *(int *)(buffer_param2 + 1) = buffer_index;
  }
  else {
    byte1 = 0;
    buffer_index = buffer_size1;
  }
  if (buffer_index < buffer_size2) {
    temp_ptr = (longlong)buffer_index;
    buffer_index = buffer_index + 1;
    byte2 = *(undefined1 *)(temp_ptr + *buffer_param1);
    *(int *)(buffer_param2 + 1) = buffer_index;
  }
  else {
    byte2 = 0;
  }
  if (CONCAT11(byte1, byte2) != 0) {
    if (buffer_index < buffer_size2) {
      temp_ptr = (longlong)buffer_index;
      buffer_index = buffer_index + 1;
      byte3 = *(byte *)(temp_ptr + *buffer_param1);
      *(int *)(buffer_param2 + 1) = buffer_index;
    }
    else {
      byte3 = 0;
    }
    byte_count = (ulonglong)byte3;
    buffer_index = (uint)CONCAT11(byte1, byte2) * (uint)byte3 + buffer_index;
    if ((buffer_size2 < buffer_index) || (buffer_index < 0)) {
      buffer_index = buffer_size2;
    }
    coord_value = 0;
    *(int *)(buffer_param2 + 1) = buffer_index;
    if (byte3 != 0) {
      do {
        if (buffer_index < buffer_size2) {
          temp_ptr = (longlong)buffer_index;
          buffer_index = buffer_index + 1;
          byte3 = *(byte *)(temp_ptr + *buffer_param1);
          *(int *)(buffer_param2 + 1) = buffer_index;
        }
        else {
          buffer_index = (int)buffer_param2[1];
          byte3 = 0;
        }
        coord_value = coord_value << 8 | (uint)byte3;
        byte_count = byte_count - 1;
      } while (byte_count != 0);
    }
    buffer_index = (coord_value - 1) + buffer_index;
    if ((buffer_size2 < buffer_index) || (buffer_index < 0)) {
      buffer_index = buffer_size2;
    }
    *(int *)(buffer_param2 + 1) = buffer_index;
  }
  buffer_index = buffer_index - buffer_size1;
  stack_offset = 0;
  temp_ptr = 0;
  if ((((-1 < buffer_size1) && (temp_ptr = 0, -1 < buffer_index)) && (stack_offset = 0, temp_ptr = 0, buffer_size1 <= buffer_size2)) &&
     (temp_ptr = 0, buffer_index <= buffer_size2 - buffer_size1)) {
    temp_ptr = (longlong)buffer_size1 + *buffer_param1;
    stack_offset = buffer_index;
  }
  *buffer_param1 = temp_ptr;
  *(undefined4 *)(buffer_param1 + 1) = 0;
  *(int *)((longlong)buffer_param1 + RENDER_OFFSET_C) = stack_offset;
  return buffer_param1;
}

// 渲染纹理设置函数
void setup_render_texture(undefined8 texture_param1, int texture_param2, uint texture_param3, longlong *texture_param4)
{
  byte texture_byte;
  longlong in_rax;
  longlong temp_ptr;
  longlong *unused_rdi;
  int in_r10d;
  int in_r11d;
  undefined4 in_register_0000009c;
  int stack_offset;
  
  do {
    if (texture_param2 < in_r10d) {
      temp_ptr = (longlong)texture_param2;
      texture_param2 = texture_param2 + 1;
      texture_byte = *(byte *)(temp_ptr + *texture_param4);
      *(int *)(texture_param4 + 1) = texture_param2;
    }
    else {
      texture_param2 = (int)texture_param4[1];
      texture_byte = 0;
    }
    texture_param3 = texture_param3 << 8 | (uint)texture_byte;
    in_rax = in_rax + -1;
  } while (in_rax != 0);
  texture_param2 = (texture_param3 - 1) + texture_param2;
  if ((in_r10d < texture_param2) || (texture_param2 < 0)) {
    texture_param2 = in_r10d;
  }
  *(int *)(texture_param4 + 1) = texture_param2;
  texture_param2 = texture_param2 - in_r11d;
  stack_offset = 0;
  temp_ptr = 0;
  if ((((-1 < in_r11d) && (temp_ptr = 0, -1 < texture_param2)) &&
      (stack_offset = 0, temp_ptr = 0, in_r11d <= in_r10d)) && (temp_ptr = 0, texture_param2 <= in_r10d - in_r11d))
  {
    temp_ptr = CONCAT44(in_register_0000009c, in_r11d) + *texture_param4;
    stack_offset = texture_param2;
  }
  *unused_rdi = temp_ptr;
  *(undefined4 *)(unused_rdi + 1) = 0;
  *(int *)((longlong)unused_rdi + RENDER_OFFSET_C) = stack_offset;
  return;
}