#include "TaleWorlds.Native.Split.h"

// 03_rendering_part032.c - 渲染系统辅助函数模块

/**
 * 向渲染容器中添加元素
 * @param container_ptr 容器指针数组
 * @param element_ptr 要添加的元素指针
 */
void add_render_container_element(ulonglong *container_ptr, undefined8 *element_ptr)
{
  undefined4 temp_var1;
  undefined4 temp_var2;
  undefined4 temp_var3;
  undefined8 temp_var4;
  undefined8 *container_data_ptr;
  undefined8 *container_start_ptr;
  undefined8 *new_container_ptr;
  longlong element_count;
  undefined8 *current_ptr;
  
  current_ptr = (undefined8 *)container_ptr[1];
  if (current_ptr < (undefined8 *)container_ptr[2]) {
    // 容器中还有空间，直接添加元素
    container_ptr[1] = (ulonglong)(current_ptr + 2);
    temp_var4 = element_ptr[1];
    *current_ptr = *element_ptr;
    current_ptr[1] = temp_var4;
    return;
  }
  
  // 容器已满，需要扩容
  container_start_ptr = (undefined8 *)*container_ptr;
  element_count = (longlong)current_ptr - (longlong)container_start_ptr >> 4;
  if (element_count == 0) {
    element_count = 1;
  }
  else {
    element_count = element_count * 2;
    if (element_count == 0) {
      new_container_ptr = (undefined8 *)0x0;
      container_data_ptr = new_container_ptr;
      goto container_copy_loop;
    }
  }
  
  // 分配新的容器空间
  new_container_ptr = (undefined8 *)allocate_render_memory(_DAT_180c8ed18, element_count << 4, (char)container_ptr[3]);
  current_ptr = (undefined8 *)container_ptr[1];
  container_start_ptr = (undefined8 *)*container_ptr;
  container_data_ptr = new_container_ptr;
  
container_copy_loop:
  // 复制旧容器数据到新容器
  for (; container_start_ptr != current_ptr; container_start_ptr = container_start_ptr + 2) {
    temp_var4 = container_start_ptr[1];
    *container_data_ptr = *container_start_ptr;
    container_data_ptr[1] = temp_var4;
    container_data_ptr = container_data_ptr + 2;
  }
  
  // 添加新元素
  temp_var1 = *(undefined4 *)((longlong)element_ptr + 4);
  temp_var2 = *(undefined4 *)(element_ptr + 1);
  temp_var3 = *(undefined4 *)((longlong)element_ptr + 0xc);
  *(undefined4 *)container_data_ptr = *(undefined4 *)element_ptr;
  *(undefined4 *)((longlong)container_data_ptr + 4) = temp_var1;
  *(undefined4 *)(container_data_ptr + 1) = temp_var2;
  *(undefined4 *)((longlong)container_data_ptr + 0xc) = temp_var3;
  
  if (*container_ptr == 0) {
    // 更新容器指针
    *container_ptr = (ulonglong)container_data_ptr;
    container_ptr[2] = (ulonglong)(container_data_ptr + element_count * 2);
    container_ptr[1] = (ulonglong)(container_data_ptr + 2);
    return;
  }
  // 内存分配失败，触发错误处理
  render_error_handler();
}

/**
 * 调整渲染容器大小
 * @param container_ptr 容器指针
 * @param new_size 新的大小
 */
void resize_render_container(longlong *container_ptr, ulonglong new_size)
{
  undefined4 *temp_ptr1;
  longlong *temp_ptr2;
  undefined8 *new_data_ptr;
  undefined8 *old_data_ptr;
  undefined8 *copy_ptr;
  longlong old_size;
  undefined8 *current_ptr;
  ulonglong allocated_size;
  longlong *iter_ptr;
  ulonglong copy_count;
  longlong offset;
  
  current_ptr = (undefined8 *)container_ptr[1];
  if ((ulonglong)(container_ptr[2] - (longlong)current_ptr >> 4) < new_size) {
    // 需要扩容
    old_data_ptr = (undefined8 *)*container_ptr;
    old_size = (longlong)current_ptr - (longlong)old_data_ptr >> 4;
    allocated_size = old_size * 2;
    if (old_size == 0) {
      allocated_size = 1;
    }
    if (allocated_size < old_size + new_size) {
      allocated_size = old_size + new_size;
    }
    
    new_data_ptr = (undefined8 *)0x0;
    if (allocated_size != 0) {
      // 分配新内存
      new_data_ptr = (undefined8 *)
               allocate_render_memory(_DAT_180c8ed18, allocated_size << 4, (char)container_ptr[3], current_ptr, 0xfffffffffffffffe);
      current_ptr = (undefined8 *)container_ptr[1];
      old_data_ptr = (undefined8 *)*container_ptr;
    }
    
    copy_ptr = new_data_ptr;
    if (old_data_ptr != current_ptr) {
      // 移动现有数据
      offset = (longlong)old_data_ptr - (longlong)new_data_ptr;
      old_size = 8 - (longlong)old_data_ptr;
      do {
        *copy_ptr = *old_data_ptr;
        *old_data_ptr = 0;
        temp_ptr1 = (undefined4 *)((longlong)new_data_ptr + old_size + (longlong)old_data_ptr);
        *temp_ptr1 = *(undefined4 *)((longlong)temp_ptr1 + offset);
        old_data_ptr = old_data_ptr + 2;
        copy_ptr = copy_ptr + 2;
      } while (old_data_ptr != current_ptr);
    }
    
    current_ptr = copy_ptr;
    copy_count = new_size;
    if (new_size != 0) {
      // 初始化新增空间
      do {
        current_ptr[1] = 0;
        *current_ptr = 0;
        copy_count = copy_count - 1;
        current_ptr = current_ptr + 2;
      } while (copy_count != 0);
    }
    
    // 清理旧数据
    iter_ptr = (longlong *)container_ptr[1];
    temp_ptr2 = (longlong *)*container_ptr;
    if (temp_ptr2 != iter_ptr) {
      do {
        if ((longlong *)*temp_ptr2 != (longlong *)0x0) {
          // 调用对象的析构函数
          (**(code **)(*(longlong *)*temp_ptr2 + 0x38))();
        }
        temp_ptr2 = temp_ptr2 + 2;
      } while (temp_ptr2 != iter_ptr);
      temp_ptr2 = (longlong *)*container_ptr;
    }
    
    if (temp_ptr2 != (longlong *)0x0) {
      // 释放旧内存
      free_render_memory(temp_ptr2);
    }
    
    // 更新容器指针
    *container_ptr = (longlong)new_data_ptr;
    container_ptr[1] = (longlong)(copy_ptr + new_size * 2);
    container_ptr[2] = (longlong)(new_data_ptr + allocated_size * 2);
  }
  else {
    // 只需要增加大小，不需要重新分配
    allocated_size = new_size;
    if (new_size != 0) {
      do {
        current_ptr[1] = 0;
        *current_ptr = 0;
        current_ptr = current_ptr + 2;
        allocated_size = allocated_size - 1;
      } while (allocated_size != 0);
      current_ptr = (undefined8 *)container_ptr[1];
    }
    container_ptr[1] = (longlong)(current_ptr + new_size * 2);
  }
  return;
}

/**
 * 清理渲染容器中的对象
 * @param start_ptr 起始指针
 * @param end_ptr 结束指针
 */
void cleanup_render_objects(longlong *start_ptr, longlong *end_ptr)
{
  if (start_ptr != end_ptr) {
    do {
      if ((longlong *)*start_ptr != (longlong *)0x0) {
        // 调用对象的析构函数
        (**(code **)(*(longlong *)*start_ptr + 0x38))();
      }
      start_ptr = start_ptr + 2;
    } while (start_ptr != end_ptr);
  }
  return;
}

/**
 * 移动渲染数据
 * @param src_ptr 源指针
 * @param src_end 源结束指针
 * @param dest_ptr 目标指针
 * @return 移动后的目标指针
 */
undefined8 * move_render_data(undefined8 *src_ptr, undefined8 *src_end, undefined8 *dest_ptr)
{
  undefined4 *temp_ptr1;
  longlong offset;
  longlong target_offset;
  
  if (src_ptr != src_end) {
    offset = (longlong)src_ptr - (longlong)dest_ptr;
    target_offset = (longlong)dest_ptr + (8 - (longlong)src_ptr);
    do {
      *dest_ptr = *src_ptr;
      *src_ptr = 0;
      temp_ptr1 = (undefined4 *)(target_offset + (longlong)src_ptr);
      *temp_ptr1 = *(undefined4 *)((longlong)temp_ptr1 + offset);
      src_ptr = src_ptr + 2;
      dest_ptr = dest_ptr + 2;
    } while (src_ptr != src_end);
  }
  return dest_ptr;
}

/**
 * 清理渲染资源池（类型1）
 * @param pool_ptr 资源池指针
 */
void cleanup_render_pool_type1(longlong pool_ptr)
{
  longlong array_ptr;
  undefined8 *resource_ptr;
  ulonglong pool_size;
  ulonglong index;
  
  pool_size = *(ulonglong *)(pool_ptr + 0x10);
  array_ptr = *(longlong *)(pool_ptr + 8);
  index = 0;
  if (pool_size != 0) {
    do {
      resource_ptr = *(undefined8 **)(array_ptr + index * 8);
      if (resource_ptr != (undefined8 *)0x0) {
        if (resource_ptr[4] != 0) {
          // 资源正在使用，触发错误
          render_error_handler();
        }
        *resource_ptr = &DEFAULT_RENDER_VTABLE_1;
        if (resource_ptr[1] == 0) {
          resource_ptr[1] = 0;
          *(undefined4 *)(resource_ptr + 3) = 0;
          *resource_ptr = &DEFAULT_RENDER_VTABLE_2;
          // 释放资源
          free_render_resource(resource_ptr);
        }
        // 资源清理失败
        render_error_handler();
      }
      *(undefined8 *)(array_ptr + index * 8) = 0;
      index = index + 1;
    } while (index < pool_size);
    pool_size = *(ulonglong *)(pool_ptr + 0x10);
  }
  *(undefined8 *)(pool_ptr + 0x18) = 0;
  if ((1 < pool_size) && (*(longlong *)(pool_ptr + 8) != 0)) {
    // 资源池状态异常
    render_error_handler();
  }
  return;
}

/**
 * 清理渲染资源池（类型2）
 * @param pool_ptr 资源池指针
 */
void cleanup_render_pool_type2(longlong pool_ptr)
{
  longlong array_ptr;
  undefined8 *resource_ptr;
  ulonglong pool_size;
  ulonglong index;
  
  pool_size = *(ulonglong *)(pool_ptr + 0x10);
  array_ptr = *(longlong *)(pool_ptr + 8);
  index = 0;
  if (pool_size != 0) {
    do {
      resource_ptr = *(undefined8 **)(array_ptr + index * 8);
      if (resource_ptr != (undefined8 *)0x0) {
        if (resource_ptr[4] != 0) {
          // 资源正在使用，触发错误
          render_error_handler();
        }
        *resource_ptr = &DEFAULT_RENDER_VTABLE_1;
        if (resource_ptr[1] == 0) {
          resource_ptr[1] = 0;
          *(undefined4 *)(resource_ptr + 3) = 0;
          *resource_ptr = &DEFAULT_RENDER_VTABLE_2;
          // 释放资源
          free_render_resource(resource_ptr);
        }
        // 资源清理失败
        render_error_handler();
      }
      *(undefined8 *)(array_ptr + index * 8) = 0;
      index = index + 1;
    } while (index < pool_size);
    pool_size = *(ulonglong *)(pool_ptr + 0x10);
  }
  *(undefined8 *)(pool_ptr + 0x18) = 0;
  if ((1 < pool_size) && (*(longlong *)(pool_ptr + 8) != 0)) {
    // 资源池状态异常
    render_error_handler();
  }
  return;
}

/**
 * 清理渲染资源池（类型3）
 * @param pool_ptr 资源池指针
 */
void cleanup_render_pool_type3(longlong pool_ptr)
{
  longlong array_ptr;
  undefined8 *resource_ptr;
  ulonglong pool_size;
  ulonglong index;
  
  pool_size = *(ulonglong *)(pool_ptr + 0x10);
  array_ptr = *(longlong *)(pool_ptr + 8);
  index = 0;
  if (pool_size != 0) {
    do {
      resource_ptr = *(undefined8 **)(array_ptr + index * 8);
      if (resource_ptr != (undefined8 *)0x0) {
        if (resource_ptr[4] != 0) {
          // 资源正在使用，触发错误
          render_error_handler();
        }
        *resource_ptr = &DEFAULT_RENDER_VTABLE_1;
        if (resource_ptr[1] == 0) {
          resource_ptr[1] = 0;
          *(undefined4 *)(resource_ptr + 3) = 0;
          *resource_ptr = &DEFAULT_RENDER_VTABLE_2;
          // 释放资源
          free_render_resource(resource_ptr);
        }
        // 资源清理失败
        render_error_handler();
      }
      *(undefined8 *)(array_ptr + index * 8) = 0;
      index = index + 1;
    } while (index < pool_size);
    pool_size = *(ulonglong *)(pool_ptr + 0x10);
  }
  *(undefined8 *)(pool_ptr + 0x18) = 0;
  if ((1 < pool_size) && (*(longlong *)(pool_ptr + 8) != 0)) {
    // 资源池状态异常
    render_error_handler();
  }
  return;
}

/**
 * 初始化渲染缓冲区
 * @param buffer_ptr 缓冲区指针
 * @param count 初始化数量
 */
void initialize_render_buffer(longlong buffer_ptr, longlong count)
{
  undefined4 *data_ptr;
  
  if (count != 0) {
    data_ptr = (undefined4 *)(buffer_ptr + 0x168);
    do {
      // 初始化缓冲区数据结构
      *(undefined **)(data_ptr + -0x5a) = &DEFAULT_RENDER_VTABLE_2;
      *(undefined8 *)(data_ptr + -0x58) = 0;
      data_ptr[-0x56] = 0;
      *(undefined **)(data_ptr + -0x5a) = &RENDER_BUFFER_VTABLE;
      *(undefined4 **)(data_ptr + -0x58) = data_ptr + -0x54;
      data_ptr[-0x56] = 0;
      *(undefined1 *)(data_ptr + -0x54) = 0;
      
      // 初始化渲染对象
      *(undefined **)(data_ptr + -0x16) = &DEFAULT_RENDER_VTABLE_2;
      *(undefined8 *)(data_ptr + -0x14) = 0;
      data_ptr[-0x12] = 0;
      *(undefined **)(data_ptr + -0x16) = &DEFAULT_RENDER_VTABLE_1;
      *(undefined8 *)(data_ptr + -0x10) = 0;
      *(undefined8 *)(data_ptr + -0x14) = 0;
      data_ptr[-0x12] = 0;
      *(undefined8 *)(data_ptr + -0xe) = 0;
      *(undefined8 *)(data_ptr + -0xc) = 0;
      *(undefined8 *)(data_ptr + -10) = 0;
      data_ptr[-8] = 3;
      *(undefined8 *)(data_ptr + -6) = 0;
      *(undefined8 *)(data_ptr + -4) = 0;
      *(undefined8 *)(data_ptr + -2) = 0;
      *data_ptr = 3;
      *(undefined8 *)(data_ptr + 2) = 0;
      *(undefined8 *)(data_ptr + 4) = 0;
      *(undefined8 *)(data_ptr + 6) = 0;
      data_ptr[8] = 3;
      
      // 初始化变换矩阵
      *(undefined8 *)(data_ptr + -0x43) = 0;
      data_ptr[-0x41] = 0;
      data_ptr[-0x3a] = 0;
      data_ptr[-0x39] = 0;
      data_ptr[-0x38] = 0;
      data_ptr[-0x37] = 0x3f800000; // 1.0f
      data_ptr[-0x36] = 0;
      data_ptr[-0x35] = 0;
      data_ptr[-0x34] = 0;
      data_ptr[-0x33] = 0x3f800000; // 1.0f
      *(undefined8 *)(data_ptr + -0x32) = 0;
      *(undefined8 *)(data_ptr + -0x30) = 0;
      *(undefined8 *)(data_ptr + -0x2e) = 0;
      *(undefined8 *)(data_ptr + -0x2c) = 0;
      *(undefined8 *)(data_ptr + -0x2a) = 0;
      *(undefined8 *)(data_ptr + -0x28) = 0;
      *(undefined8 *)(data_ptr + -0x26) = 0x3f800000; // 1.0f
      *(undefined8 *)(data_ptr + -0x24) = 0;
      *(undefined8 *)(data_ptr + -0x22) = 0x3f80000000000000; // 1.0
      *(undefined8 *)(data_ptr + -0x20) = 0;
      *(undefined8 *)(data_ptr + -0x1e) = 0;
      *(undefined8 *)(data_ptr + -0x1c) = 0x3f800000; // 1.0f
      *(undefined8 *)(data_ptr + -0x1a) = 0;
      *(undefined8 *)(data_ptr + -0x18) = 0x3f80000000000000; // 1.0
      
      // 初始化其他属性
      data_ptr[-0x44] = 0;
      *(undefined8 *)(data_ptr + -0x40) = 0;
      *(undefined8 *)(data_ptr + -0x3e) = 0;
      *(undefined8 *)(data_ptr + -0x3c) = 0;
      data_ptr[0xc] = 0xffffffff;
      *(undefined8 *)(data_ptr + 10) = 0;
      data_ptr = data_ptr + 0x68;
      count = count + -1;
    } while (count != 0);
  }
  return;
}

/**
 * 清理渲染资源池（类型4）
 * @param pool_ptr 资源池指针
 */
void cleanup_render_pool_type4(longlong pool_ptr)
{
  longlong array_ptr;
  undefined8 *resource_ptr;
  ulonglong pool_size;
  ulonglong index;
  
  pool_size = *(ulonglong *)(pool_ptr + 0x18);
  array_ptr = *(longlong *)(pool_ptr + 0x10);
  index = 0;
  if (pool_size != 0) {
    do {
      resource_ptr = *(undefined8 **)(array_ptr + index * 8);
      if (resource_ptr != (undefined8 *)0x0) {
        if (resource_ptr[4] != 0) {
          // 资源正在使用，触发错误
          render_error_handler();
        }
        *resource_ptr = &DEFAULT_RENDER_VTABLE_1;
        if (resource_ptr[1] == 0) {
          resource_ptr[1] = 0;
          *(undefined4 *)(resource_ptr + 3) = 0;
          *resource_ptr = &DEFAULT_RENDER_VTABLE_2;
          // 释放资源
          free_render_resource(resource_ptr);
        }
        // 资源清理失败
        render_error_handler();
      }
      *(undefined8 *)(array_ptr + index * 8) = 0;
      index = index + 1;
    } while (index < pool_size);
    pool_size = *(ulonglong *)(pool_ptr + 0x18);
  }
  *(undefined8 *)(pool_ptr + 0x20) = 0;
  if ((1 < pool_size) && (*(longlong *)(pool_ptr + 0x10) != 0)) {
    // 资源池状态异常
    render_error_handler();
  }
  return;
}

/**
 * 构建渲染对象列表
 * @param list_ptr 列表指针
 * @param src_begin 源数据起始指针
 * @param src_end 源数据结束指针
 * @param dest_ptr 目标数据指针
 * @return 更新后的列表指针
 */
longlong * build_render_object_list(longlong *list_ptr, undefined4 *src_begin, undefined4 *src_end, undefined8 *dest_ptr)
{
  undefined8 *obj_ptr;
  undefined4 *src_ptr;
  undefined4 temp_var3;
  undefined8 temp_var4;
  undefined4 temp_var5;
  undefined4 temp_var6;
  undefined4 *data_ptr;
  undefined *vtable_ptr;
  
  *list_ptr = (longlong)dest_ptr;
  if (src_begin != src_end) {
    data_ptr = src_begin + 0x5a;
    do {
      // 初始化渲染对象
      *dest_ptr = &DEFAULT_RENDER_VTABLE_2;
      dest_ptr[1] = 0;
      *(undefined4 *)(dest_ptr + 2) = 0;
      *dest_ptr = &RENDER_BUFFER_VTABLE;
      dest_ptr[1] = dest_ptr + 3;
      *(undefined4 *)(dest_ptr + 2) = 0;
      *(undefined1 *)(dest_ptr + 3) = 0;
      
      // 复制渲染数据
      *(undefined4 *)(dest_ptr + 2) = data_ptr[-0x56];
      vtable_ptr = &DEFAULT_RENDER_STRING_PTR;
      if (*(undefined **)(data_ptr + -0x58) != (undefined *)0x0) {
        vtable_ptr = *(undefined **)(data_ptr + -0x58);
      }
      strcpy_s(dest_ptr[1], 0x40, vtable_ptr);
      
      // 复制渲染属性
      *(undefined4 *)(dest_ptr + 0xb) = data_ptr[-0x44];
      *(undefined4 *)((longlong)dest_ptr + 0x5c) = data_ptr[-0x43];
      *(undefined4 *)(dest_ptr + 0xc) = data_ptr[-0x42];
      *(undefined4 *)((longlong)dest_ptr + 100) = data_ptr[-0x41];
      *(undefined4 *)(dest_ptr + 0xd) = data_ptr[-0x40];
      *(undefined4 *)((longlong)dest_ptr + 0x6c) = data_ptr[-0x3f];
      *(undefined4 *)(dest_ptr + 0xe) = data_ptr[-0x3e];
      *(undefined4 *)((longlong)dest_ptr + 0x74) = data_ptr[-0x3d];
      *(undefined4 *)(dest_ptr + 0xf) = data_ptr[-0x3c];
      *(undefined4 *)((longlong)dest_ptr + 0x7c) = data_ptr[-0x3b];
      
      // 复制变换矩阵数据
      temp_var4 = *(undefined8 *)(data_ptr + -0x38);
      dest_ptr[0x10] = *(undefined8 *)(data_ptr + -0x3a);
      dest_ptr[0x11] = temp_var4;
      temp_var4 = *(undefined8 *)(data_ptr + -0x34);
      dest_ptr[0x12] = *(undefined8 *)(data_ptr + -0x36);
      dest_ptr[0x13] = temp_var4;
      temp_var4 = *(undefined8 *)(data_ptr + -0x30);
      dest_ptr[0x14] = *(undefined8 *)(data_ptr + -0x32);
      dest_ptr[0x15] = temp_var4;
      temp_var4 = *(undefined8 *)(data_ptr + -0x2c);
      dest_ptr[0x16] = *(undefined8 *)(data_ptr + -0x2e);
      dest_ptr[0x17] = temp_var4;
      temp_var4 = *(undefined8 *)(data_ptr + -0x28);
      dest_ptr[0x18] = *(undefined8 *)(data_ptr + -0x2a);
      dest_ptr[0x19] = temp_var4;
      temp_var4 = *(undefined8 *)(data_ptr + -0x24);
      dest_ptr[0x1a] = *(undefined8 *)(data_ptr + -0x26);
      dest_ptr[0x1b] = temp_var4;
      temp_var4 = *(undefined8 *)(data_ptr + -0x20);
      dest_ptr[0x1c] = *(undefined8 *)(data_ptr + -0x22);
      dest_ptr[0x1d] = temp_var4;
      
      // 复制颜色数据
      temp_var3 = data_ptr[-0x1d];
      temp_var5 = data_ptr[-0x1c];
      temp_var6 = data_ptr[-0x1b];
      *(undefined4 *)(dest_ptr + 0x1e) = data_ptr[-0x1e];
      *(undefined4 *)((longlong)dest_ptr + 0xf4) = temp_var3;
      *(undefined4 *)(dest_ptr + 0x1f) = temp_var5;
      *(undefined4 *)((longlong)dest_ptr + 0xfc) = temp_var6;
      temp_var3 = data_ptr[-0x19];
      temp_var5 = data_ptr[-0x18];
      temp_var6 = data_ptr[-0x17];
      *(undefined4 *)(dest_ptr + 0x20) = data_ptr[-0x1a];
      *(undefined4 *)((longlong)dest_ptr + 0x104) = temp_var3;
      *(undefined4 *)(dest_ptr + 0x21) = temp_var5;
      *(undefined4 *)((longlong)dest_ptr + 0x10c) = temp_var6;
      
      // 设置渲染状态
      dest_ptr[0x22] = &DEFAULT_RENDER_VTABLE_2;
      dest_ptr[0x23] = 0;
      *(undefined4 *)(dest_ptr + 0x24) = 0;
      dest_ptr[0x22] = &DEFAULT_RENDER_VTABLE_1;
      dest_ptr[0x25] = 0;
      dest_ptr[0x23] = 0;
      *(undefined4 *)(dest_ptr + 0x24) = 0;
      *(undefined4 *)(dest_ptr + 0x24) = data_ptr[-0x12];
      dest_ptr[0x23] = *(undefined8 *)(data_ptr + -0x14);
      *(undefined4 *)((longlong)dest_ptr + 300) = data_ptr[-0xf];
      *(undefined4 *)(dest_ptr + 0x25) = data_ptr[-0x10];
      
      // 清理源数据
      data_ptr[-0x12] = 0;
      *(undefined8 *)(data_ptr + -0x14) = 0;
      *(undefined8 *)(data_ptr + -0x10) = 0;
      
      // 复制剩余数据
      obj_ptr = dest_ptr + 0x26;
      *obj_ptr = 0;
      dest_ptr[0x27] = 0;
      dest_ptr[0x28] = 0;
      *(undefined4 *)(dest_ptr + 0x29) = data_ptr[-8];
      temp_var4 = *obj_ptr;
      *obj_ptr = *(undefined8 *)(data_ptr + -0xe);
      *(undefined8 *)(data_ptr + -0xe) = temp_var4;
      temp_var4 = dest_ptr[0x27];
      dest_ptr[0x27] = *(undefined8 *)(data_ptr + -0xc);
      *(undefined8 *)(data_ptr + -0xc) = temp_var4;
      temp_var4 = dest_ptr[0x28];
      dest_ptr[0x28] = *(undefined8 *)(data_ptr + -10);
      *(undefined8 *)(data_ptr + -10) = temp_var4;
      temp_var3 = *(undefined4 *)(dest_ptr + 0x29);
      *(undefined4 *)(dest_ptr + 0x29) = data_ptr[-8];
      data_ptr[-8] = temp_var3;
      
      // 复制最后一组数据
      obj_ptr = dest_ptr + 0x2a;
      *obj_ptr = 0;
      dest_ptr[0x2b] = 0;
      dest_ptr[0x2c] = 0;
      *(undefined4 *)(dest_ptr + 0x2d) = *data_ptr;
      temp_var4 = *obj_ptr;
      *obj_ptr = *(undefined8 *)(data_ptr + -6);
      *(undefined8 *)(data_ptr + -6) = temp_var4;
      temp_var4 = dest_ptr[0x2b];
      dest_ptr[0x2b] = *(undefined8 *)(data_ptr + -4);
      *(undefined8 *)(data_ptr + -4) = temp_var4;
      temp_var4 = dest_ptr[0x2c];
      dest_ptr[0x2c] = *(undefined8 *)(data_ptr + -2);
      *(undefined8 *)(data_ptr + -2) = temp_var4;
      temp_var3 = *(undefined4 *)(dest_ptr + 0x2d);
      *(undefined4 *)(dest_ptr + 0x2d) = *data_ptr;
      *data_ptr = temp_var3;
      
      // 复制最终数据
      obj_ptr = dest_ptr + 0x2e;
      *obj_ptr = 0;
      dest_ptr[0x2f] = 0;
      dest_ptr[0x30] = 0;
      *(undefined4 *)(dest_ptr + 0x31) = data_ptr[8];
      temp_var4 = *obj_ptr;
      *obj_ptr = *(undefined8 *)(data_ptr + 2);
      *(undefined8 *)(data_ptr + 2) = temp_var4;
      temp_var4 = dest_ptr[0x2f];
      dest_ptr[0x2f] = *(undefined8 *)(data_ptr + 4);
      *(undefined8 *)(data_ptr + 4) = temp_var4;
      temp_var4 = dest_ptr[0x30];
      dest_ptr[0x30] = *(undefined8 *)(data_ptr + 6);
      *(undefined8 *)(data_ptr + 6) = temp_var4;
      temp_var3 = *(undefined4 *)(dest_ptr + 0x31);
      *(undefined4 *)(dest_ptr + 0x31) = data_ptr[8];
      data_ptr[8] = temp_var3;
      
      // 设置最终属性
      dest_ptr[0x32] = *(undefined8 *)(data_ptr + 10);
      *(undefined4 *)(dest_ptr + 0x33) = data_ptr[0xc];
      *list_ptr = *list_ptr + 0x1a0;
      dest_ptr = (undefined8 *)*list_ptr;
      src_ptr = data_ptr + 0xe;
      data_ptr = data_ptr + 0x68;
    } while (src_ptr != src_end);
  }
  return list_ptr;
}

/**
 * 扩展渲染内存池
 * @param pool_ptr 内存池指针
 * @param additional_size 需要增加的大小
 */
void expand_render_memory_pool(longlong pool_ptr, longlong additional_size)
{
  longlong *memory_ptr;
  ulonglong aligned_size;
  
  memory_ptr = *(longlong **)(pool_ptr + 0x30);
  aligned_size = (longlong)(int)memory_ptr[2] + 7U & 0xfffffffffffffff8;
  *(int *)(memory_ptr + 2) = (int)aligned_size + ((int)additional_size + 1) * 8;
  // 清理新增内存
  memset(*memory_ptr + aligned_size, 0, additional_size * 8);
}

/**
 * 处理渲染状态变化
 * @param context_ptr 渲染上下文指针
 * @param state_flag 状态标志
 * @return 处理结果
 */
undefined1 process_render_state_change(longlong context_ptr, undefined1 state_flag)
{
  uint material_flags;
  longlong object_ptr;
  char render_type;
  undefined1 result;
  uint blend_mode;
  undefined1 continue_flag;
  longlong array_ptr;
  longlong current_pos;
  int index;
  
  current_pos = *(longlong *)(context_ptr + 0x38);
  index = 0;
  result = 1;
  if (*(longlong *)(context_ptr + 0x40) - current_pos >> 4 != 0) {
    array_ptr = 0;
    continue_flag = result;
    do {
      current_pos = *(longlong *)(array_ptr + current_pos);
      object_ptr = *(longlong *)(current_pos + 0x1b8);
      render_type = *(char *)(object_ptr + 0x38c);
      if (render_type == '\t') {
        material_flags = *(uint *)(object_ptr + 0x388);
        if ((material_flags >> 0x1e & 1) == 0) {
          if ((material_flags >> 0x1c & 1) == 0) {
            blend_mode = material_flags & 0x1000000;
            if ((int)material_flags < 0) {
              if ((material_flags >> 0x1b & 1) == 0) {
                render_type = (blend_mode != 0) + '\f';
              }
              else {
                render_type = (blend_mode != 0) + '\x0e';
              }
            }
            else if ((material_flags >> 0x19 & 1) == 0) {
              render_type = blend_mode != 0;
            }
            else if ((material_flags >> 0x1b & 1) == 0) {
              render_type = (blend_mode != 0) + '\x02';
            }
            else {
              render_type = (blend_mode != 0) + '\a';
            }
          }
          else {
            render_type = '\x04';
          }
        }
        *(char *)(object_ptr + 0x38c) = render_type;
      }
      render_type = update_render_object_type(current_pos, current_pos + 0x1e8, render_type, state_flag);
      if (render_type == '\0') {
        *(byte *)(current_pos + 0xfe) = *(byte *)(current_pos + 0xfe) & 0xfb;
      }
      current_pos = *(longlong *)(context_ptr + 0x38);
      result = 0;
      if (render_type != '\0') {
        result = continue_flag;
      }
      index = index + 1;
      array_ptr = array_ptr + 0x10;
      continue_flag = result;
    } while ((ulonglong)(longlong)index < (ulonglong)(*(longlong *)(context_ptr + 0x40) - current_pos >> 4));
  }
  return result;
}

/**
 * 批量处理渲染状态
 * @param param1 参数1
 * @param param2 参数2
 * @param context_ptr 渲染上下文指针
 * @return 处理结果
 */
undefined1 batch_process_render_states(undefined8 param1, undefined8 param2, longlong context_ptr)
{
  uint material_flags;
  longlong object_ptr;
  longlong render_data;
  char render_type;
  undefined1 result;
  uint blend_mode;
  longlong array_ptr;
  longlong current_pos;
  int index;
  
  array_ptr = 0;
  do {
    render_data = *(longlong *)(array_ptr + context_ptr);
    object_ptr = *(longlong *)(render_data + 0x1b8);
    render_type = *(char *)(object_ptr + 0x38c);
    if (render_type == '\t') {
      material_flags = *(uint *)(object_ptr + 0x388);
      if ((material_flags >> 0x1e & 1) == 0) {
        if ((material_flags >> 0x1c & 1) == 0) {
          blend_mode = material_flags & 0x1000000;
          if ((int)material_flags < 0) {
            if ((material_flags >> 0x1b & 1) == 0) {
              render_type = (blend_mode != 0) + '\f';
            }
            else {
              render_type = (blend_mode != 0) + '\x0e';
            }
          }
          else if ((material_flags >> 0x19 & 1) == 0) {
            render_type = blend_mode != 0;
          }
          else if ((material_flags >> 0x1b & 1) == 0) {
            render_type = (blend_mode != 0) + '\x02';
          }
          else {
            render_type = (blend_mode != 0) + '\a';
          }
        }
        else {
          render_type = '\x04';
        }
      }
      *(char *)(object_ptr + 0x38c) = render_type;
    }
    render_type = update_render_object_type(render_data, render_data + 0x1e8, render_type, param2);
    if (render_type == '\0') {
      *(byte *)(render_data + 0xfe) = *(byte *)(render_data + 0xfe) & 0xfb;
    }
    context_ptr = *(longlong *)(param1 + 0x38);
    result = 0;
    if (render_type != '\0') {
      result = param1;
    }
    index = index + 1;
    array_ptr = array_ptr + 0x10;
    param1 = result;
  } while ((ulonglong)(longlong)index <
         (ulonglong)(*(longlong *)(param1 + 0x40) - context_ptr >> 4));
  return result;
}

/**
 * 获取渲染状态标志
 * @return 当前渲染状态标志
 */
undefined1 get_render_state_flag(void)
{
  undefined1 state_flag;
  
  return state_flag;
}

/**
 * 释放渲染资源
 * @param resource_ptr 资源指针
 * @param size 资源大小
 * @param param3 参数3
 * @param param4 参数4
 * @return 释放后的资源指针
 */
undefined8 * free_render_resource(undefined8 *resource_ptr, ulonglong size, undefined8 param3, undefined8 param4)
{
  undefined8 free_flag;
  
  free_flag = 0xfffffffffffffffe;
  if ((longlong *)resource_ptr[4] != (longlong *)0x0) {
    // 调用资源清理函数
    (**(code **)(*(longlong *)resource_ptr[4] + 0x38))();
  }
  if ((longlong *)resource_ptr[3] != (longlong *)0x0) {
    // 调用资源清理函数
    (**(code **)(*(longlong *)resource_ptr[3] + 0x38))();
  }
  *resource_ptr = &DEFAULT_RESOURCE_VTABLE_1;
  *resource_ptr = &DEFAULT_RESOURCE_VTABLE_2;
  if ((size & 1) != 0) {
    // 释放内存
    free(resource_ptr, 0x30, param3, param4, free_flag);
  }
  return resource_ptr;
}

/**
 * 计算向量叉积
 * @param vec1 向量1
 * @param result_ptr 结果指针
 * @param vec2 向量2
 * @return 结果指针
 */
float * compute_vector_cross_product(float *vec1, float *result_ptr, float *vec2)
{
  float x1, y1, z1, w1;
  float x2, y2, z2;
  float result_x, result_y, result_z;
  float temp1, temp2, temp3;
  
  x2 = *vec2;
  x1 = *vec1;
  w1 = -vec1[3];
  y1 = vec2[1];
  z2 = vec2[2];
  z1 = -vec1[2];
  result_ptr[3] = 3.4028235e+38; // FLT_MAX
  y1 = -vec1[1];
  temp3 = z2 * z1 - vec2[1] * w1;
  temp2 = x2 * w1 - vec2[2] * y1;
  temp3 = temp3 + temp3;
  z2 = y1 * y1 - x2 * z1;
  temp2 = temp2 + temp2;
  z2 = z2 + z2;
  y1 = vec2[2];
  *result_ptr = (z2 * z1 - temp2 * w1) + temp3 * x1 + x2;
  x2 = vec2[1];
  result_ptr[2] = (temp2 * y1 - temp3 * z1) + z2 * x1 + y1;
  result_ptr[1] = (temp3 * w1 - z2 * y1) + temp2 * x1 + x2;
  return result_ptr;
}

/**
 * 计算渲染距离
 * @param object_ptr 对象指针
 * @param param2 参数2
 * @param position_ptr 位置指针
 * @return 计算结果
 */
undefined8 compute_render_distance(longlong object_ptr, undefined8 param2, float *position_ptr)
{
  float distance_x;
  float distance_y;
  float distance_z;
  undefined4 max_distance;
  
  distance_x = *position_ptr - *(float *)(object_ptr + 0x10);
  distance_y = position_ptr[1] - *(float *)(object_ptr + 0x14);
  distance_z = position_ptr[2] - *(float *)(object_ptr + 0x18);
  max_distance = 0x7f7fffff; // FLT_MAX
  compute_vector_cross_product(0x7f7fffff, distance_y, &distance_x);
  return param2;
}


// 全局变量声明
undefined8 _DAT_180c8ed18 = 0; // 渲染内存分配器
undefined8 UNK_180a3c3e0 = 0; // 默认渲染虚表1
undefined8 UNK_18098bcb0 = 0; // 默认渲染虚表2
undefined8 UNK_1809fcc58 = 0; // 渲染缓冲区虚表
undefined8 UNK_180a21720 = 0; // 默认资源虚表1
undefined8 UNK_180a21690 = 0; // 默认资源虚表2
undefined8 DAT_18098bc73 = 0; // 默认字符串指针

// 函数声明（简化实现）
void render_error_handler(void);
void allocate_render_memory(undefined8 allocator, ulonglong size, char flags);
void free_render_memory(longlong *memory_ptr);
void free_render_resource(undefined8 *resource_ptr);
undefined1 update_render_object_type(longlong obj_ptr, longlong offset, char type, undefined1 flag);
void memset(void *ptr, int value, size_t size);
void strcpy_s(char *dest, size_t size, const char *src);
void free(void *ptr, size_t size, undefined8 param3, undefined8 param4, undefined8 flags);