#include "TaleWorlds.Native.Split.h"

// 03_rendering_part010.c - 6 个函数

// 函数: void resize_render_object_array(longlong *render_context, ulonglong new_size)
// 功能: 调整渲染对象数组大小，处理内存重新分配和对象复制
void resize_render_object_array(longlong *render_context, ulonglong new_size)

{
  undefined *object_ptr;
  undefined8 *new_array_start;
  ulonglong growth_factor;
  undefined8 *old_array_start;
  undefined8 *old_array_end;
  undefined8 *new_array_ptr;
  undefined8 *temp_ptr;
  undefined *string_data;
  longlong size_diff;
  
  old_array_end = (undefined8 *)render_context[1];
  if ((ulonglong)((render_context[2] - (longlong)old_array_end) / 0x98) < new_size) {
    new_array_ptr = (undefined8 *)*render_context;
    size_diff = ((longlong)old_array_end - (longlong)new_array_ptr) / 0x98;
    growth_factor = size_diff * 2;
    if (size_diff == 0) {
      growth_factor = 1;
    }
    if (growth_factor < size_diff + new_size) {
      growth_factor = size_diff + new_size;
    }
    new_array_start = (undefined8 *)0x0;
    if (growth_factor != 0) {
      new_array_start = (undefined8 *)
               allocate_render_memory(_DAT_180c8ed18,growth_factor * 0x98,(char)render_context[3],0x6bca1af286bca1b,
                             0xfffffffffffffffe);
      old_array_end = (undefined8 *)render_context[1];
      new_array_ptr = (undefined8 *)*render_context;
    }
    temp_ptr = new_array_start;
    if (new_array_ptr != old_array_end) {
      size_diff = (longlong)new_array_ptr - (longlong)temp_ptr;
      do {
        *temp_ptr = &UNK_18098bcb0;
        temp_ptr[1] = 0;
        *(undefined4 *)(temp_ptr + 2) = 0;
        *temp_ptr = &UNK_1809fcc28;
        temp_ptr[1] = temp_ptr + 3;
        *(undefined4 *)(temp_ptr + 2) = 0;
        *(undefined1 *)(temp_ptr + 3) = 0;
        *(undefined4 *)(temp_ptr + 2) = *(undefined4 *)((longlong)temp_ptr + size_diff + 0x10);
        object_ptr = *(undefined **)((longlong)temp_ptr + size_diff + 8);
        string_data = &DAT_18098bc73;
        if (object_ptr != (undefined *)0x0) {
          string_data = object_ptr;
        }
        strcpy_s(temp_ptr[1],0x80,string_data);
        temp_ptr = temp_ptr + 0x13;
      } while ((undefined8 *)((longlong)temp_ptr + size_diff) != old_array_end);
    }
    if (new_size != 0) {
      old_array_end = temp_ptr + 1;
      old_array_start = new_size;
      do {
        old_array_end[-1] = &UNK_18098bcb0;
        *old_array_end = 0;
        *(undefined4 *)(old_array_end + 1) = 0;
        old_array_end[-1] = &UNK_1809fcc28;
        *old_array_end = old_array_end + 2;
        *(undefined4 *)(old_array_end + 1) = 0;
        *(undefined1 *)(old_array_end + 2) = 0;
        old_array_end = old_array_end + 0x13;
        old_array_start = old_array_start - 1;
      } while (old_array_start != 0);
    }
    old_array_end = (undefined8 *)render_context[1];
    new_array_ptr = (undefined8 *)*render_context;
    if (new_array_ptr != old_array_end) {
      do {
        (**(code **)*new_array_ptr)(new_array_ptr,0);
        new_array_ptr = new_array_ptr + 0x13;
      } while (new_array_ptr != old_array_end);
      new_array_ptr = (undefined8 *)*render_context;
    }
    if (new_array_ptr != (undefined8 *)0x0) {
      // 释放旧的渲染对象数组
      free_render_objects(new_array_ptr);
    }
    *render_context = (longlong)new_array_start;
    render_context[1] = (longlong)(temp_ptr + new_size * 0x13);
    render_context[2] = (longlong)(new_array_start + growth_factor * 0x13);
  }
  else {
    growth_factor = new_size;
    if (new_size != 0) {
      do {
        *old_array_end = &UNK_18098bcb0;
        old_array_end[1] = 0;
        *(undefined4 *)(old_array_end + 2) = 0;
        *old_array_end = &UNK_1809fcc28;
        old_array_end[1] = old_array_end + 3;
        *(undefined4 *)(old_array_end + 2) = 0;
        *(undefined1 *)(old_array_end + 3) = 0;
        old_array_end = old_array_end + 0x13;
        growth_factor = growth_factor - 1;
      } while (growth_factor != 0);
      old_array_end = (undefined8 *)render_context[1];
    }
    render_context[1] = (longlong)(old_array_end + new_size * 0x13);
  }
  return;
}



// 函数: void cleanup_render_object_list(longlong render_context, undefined8 param2, undefined8 param3, undefined8 param4)
// 功能: 清理渲染对象列表，释放相关资源
void cleanup_render_object_list(longlong render_context, undefined8 param2, undefined8 param3, undefined8 param4)

{
  undefined8 *current_object;
  undefined8 *list_end;
  undefined8 cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  current_object = *(undefined8 **)(render_context + 0x128);
  for (list_end = *(undefined8 **)(render_context + 0x120); list_end != current_object; list_end = list_end + 0xb) {
    (**(code **)*list_end)(list_end,0,param3,param4,cleanup_flag);
  }
  if (*(longlong *)(render_context + 0x120) == 0) {
    return;
  }
  // 释放渲染对象列表内存
  free_render_object_list();
}



undefined8 *
initialize_render_context(undefined8 *render_context, ulonglong init_flags, undefined8 param3, undefined8 param4)

{
  undefined8 cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  initialize_render_system();
  *render_context = &UNK_1809ffa18;
  if ((init_flags & 1) != 0) {
    free(render_context,0x1c8,param3,param4,cleanup_flag);
  }
  return render_context;
}



// 警告: 以'_'开头的全局变量与同一地址的较小符号重叠

longlong * create_render_object_instance(longlong render_context, longlong *instance_ptr)

{
  undefined8 memory_handle;
  longlong *new_instance;
  undefined *name_string;
  
  memory_handle = allocate_render_object_memory(_DAT_180c8ed18,0x470,0x10,0x15,0,0xfffffffffffffffe);
  new_instance = (longlong *)initialize_render_object_instance(memory_handle);
  *instance_ptr = (longlong)new_instance;
  if (new_instance != (longlong *)0x0) {
    (**(code **)(*new_instance + 0x28))(new_instance);
  }
  *(longlong *)(*instance_ptr + 0xa8) = render_context;
  name_string = &DAT_18098bc73;
  if (*(undefined **)(render_context + 0x70) != (undefined *)0x0) {
    name_string = *(undefined **)(render_context + 0x70);
  }
  (**(code **)(*(longlong *)(*instance_ptr + 0x10) + 0x10))((longlong *)(*instance_ptr + 0x10),name_string);
  return instance_ptr;
}



// 警告: 以'_'开头的全局变量与同一地址的较小符号重叠



// 函数: void setup_render_object_properties(longlong render_context, undefined8 param2, undefined8 param3, undefined8 param4)
// 功能: 设置渲染对象属性，包括纹理、材质等
void setup_render_object_properties(longlong render_context, undefined8 param2, undefined8 param3, undefined8 param4)

{
  undefined8 property_value;
  longlong *render_manager;
  undefined8 texture_id;
  longlong base_address;
  int compare_result;
  undefined8 *current_node;
  undefined8 *parent_node;
  undefined8 *texture_list;
  undefined8 *property_node;
  longlong **instance_ptr;
  
  if (*(longlong *)(render_context + 0xb0) == 0) {
    texture_list = (undefined8 *)create_render_object_instance(render_context,&instance_ptr,param3,param4,0xfffffffffffffffe);
    property_value = *texture_list;
    *texture_list = 0;
    render_manager = *(longlong **)(render_context + 0xb0);
    *(undefined8 *)(render_context + 0xb0) = property_value;
    if (render_manager != (longlong *)0x0) {
      (**(code **)(*render_manager + 0x38))();
    }
    if (instance_ptr != (longlong *)0x0) {
      (**(code **)(*instance_ptr + 0x38))();
    }
    *(undefined1 *)(*(longlong *)(render_context + 0xb0) + 0xb1) = 1;
    base_address = _DAT_180c86930;
    render_manager = *(longlong **)(render_context + 0xb0);
    compare_result = (**(code **)(*render_manager + 0x60))(render_manager);
    *(undefined1 *)((longlong)render_manager + 0xb2) = 1;
    register_render_object((longlong)compare_result * 0x98 + base_address + 8,render_manager);
  }
  texture_list = (undefined8 *)(_DAT_180c8a9d0 + 0x180);
  current_node = *(undefined8 **)(_DAT_180c8a9d0 + 400);
  parent_node = texture_list;
  if (current_node != (undefined8 *)0x0) {
    do {
      compare_result = memcmp(current_node + 4,render_context + 0xc,0x10);
      if (compare_result < 0) {
        property_node = (undefined8 *)*current_node;
      }
      else {
        property_node = (undefined8 *)current_node[1];
        parent_node = current_node;
      }
      current_node = property_node;
    } while (property_node != (undefined8 *)0x0);
    if ((parent_node != texture_list) && (compare_result = memcmp(render_context + 0xc,parent_node + 4,0x10), -1 < compare_result))
    goto LAB_1802733d5;
  }
  parent_node = texture_list;
LAB_1802733d5:
  if (parent_node != texture_list) {
    property_value = parent_node[6];
    texture_id = parent_node[7];
    render_manager = *(longlong **)(render_context + 0xb0);
    *(undefined4 *)(render_manager + 0x170) = 0;
    **(undefined1 **)(render_manager + 0x168) = 0;
    set_render_texture(render_manager + 0x160,&UNK_180a02954,property_value);
    *(undefined8 *)(render_manager + 0x148) = property_value;
    render_manager = *(longlong **)(render_context + 0xb0);
    *(undefined4 *)(render_manager + 0x1a8) = 0;
    **(undefined1 **)(render_manager + 0x1a0) = 0;
    set_render_texture(render_manager + 0x198,&UNK_180a02954,texture_id);
    *(undefined8 *)(render_manager + 0x150) = texture_id;
  }
  return;
}



// 函数: void destroy_render_object_instance(longlong render_context)
// 功能: 销毁渲染对象实例，释放相关资源
void destroy_render_object_instance(longlong render_context)

{
  longlong *instance_ref;
  longlong *instance_ptr;
  longlong **object_manager;
  
  instance_ref = *(longlong **)(render_context + 0xb0);
  if (instance_ref != (longlong *)0x0) {
    object_manager = &instance_ref;
    (**(code **)(*instance_ref + 0x28))();
    cleanup_render_resources();
    instance_ptr = *(longlong **)(render_context + 0xb0);
    *(undefined8 *)(render_context + 0xb0) = 0;
    if (instance_ptr != (longlong *)0x0) {
      // 调用对象销毁函数
      (**(code **)(*instance_ptr + 0x38))();
      return;
    }
  }
  return;
}



// 警告: 以'_'开头的全局变量与同一地址的较小符号重叠



// 函数: void process_render_object_creation(longlong render_context, undefined8 param2, undefined8 param3, undefined8 param4)
// 功能: 处理渲染对象创建过程，包括线程安全的对象管理
void process_render_object_creation(longlong render_context, undefined8 param2, undefined8 param3, undefined8 param4)

{
  longlong **thread_manager;
  char creation_result;
  int mutex_result;
  undefined8 *new_object;
  longlong *object_instance;
  longlong *array_data;
  longlong *buffer_ptr;
  longlong buffer_size;
  undefined *object_name;
  longlong *queue_head;
  longlong **queue_lock;
  undefined8 cleanup_flag;
  
  object_instance = *(longlong **)(render_context + 0xb0);
  if (object_instance == (longlong *)0x0) {
    creation_result = check_render_object_creation(0,*(undefined8 *)(*(longlong *)(render_context + 0x88) + 8),param3,param4
                                ,0xfffffffffffffffe);
    if (creation_result != '\0') {
      new_object = (undefined8 *)create_render_object_instance(render_context,&queue_lock);
      cleanup_flag = *new_object;
      *new_object = 0;
      object_instance = *(longlong **)(render_context + 0xb0);
      *(undefined8 *)(render_context + 0xb0) = cleanup_flag;
      if (object_instance != (longlong *)0x0) {
        (**(code **)(*object_instance + 0x38))();
      }
      if (queue_lock != (longlong **)0x0) {
        (*(code *)(*queue_lock)[7])();
      }
      *(undefined1 *)(*(longlong *)(render_context + 0xb0) + 0xb1) = 1;
      finalize_render_object_creation();
    }
    return;
  }
  queue_lock = &object_instance;
  (**(code **)(*object_instance + 0x28))();
  cleanup_render_resources();
  object_name = &DAT_18098bc73;
  if (*(undefined **)(render_context + 0x70) != (undefined *)0x0) {
    object_name = *(undefined **)(render_context + 0x70);
  }
  array_data = (longlong *)(*(longlong *)(render_context + 0xb0) + 0x10);
  (**(code **)(*array_data + 0x10))(array_data,object_name);
  buffer_size = _DAT_180c86930;
  array_data = *(longlong **)(render_context + 0xb0);
  mutex_result = (**(code **)(*array_data + 0x60))(array_data);
  *(undefined1 *)((longlong)array_data + 0xb2) = 1;
  buffer_ptr = (longlong *)((longlong)mutex_result * 0x98 + buffer_size + 8);
  cleanup_flag = 0xfffffffffffffffe;
  thread_manager = (longlong **)(buffer_ptr + 8);
  queue_lock = thread_manager;
  mutex_result = _Mtx_lock(thread_manager);
  if (mutex_result != 0) {
    __Throw_C_error_std__YAXH_Z(mutex_result);
  }
  object_instance = array_data;
  if (array_data != (longlong *)0x0) {
    (**(code **)(*array_data + 0x28))(array_data);
  }
  queue_head = (longlong *)buffer_ptr[1];
  object_instance = (longlong *)0x0;
  if (queue_head < (longlong *)buffer_ptr[2]) {
    buffer_ptr[1] = (longlong)(queue_head + 1);
    *queue_head = (longlong)array_data;
    object_instance = (longlong *)0x0;
    goto LAB_1802abf36;
  }
  array_data = (longlong *)*buffer_ptr;
  buffer_size = (longlong)queue_head - (longlong)array_data >> 3;
  if (buffer_size == 0) {
    buffer_size = 1;
LAB_1802abea0:
    object_instance = (longlong *)allocate_render_object_memory(_DAT_180c8ed18,buffer_size * 8,(char)buffer_ptr[3],param4,cleanup_flag);
    queue_head = (longlong *)buffer_ptr[1];
    array_data = (longlong *)*buffer_ptr;
    buffer_ptr = object_instance;
  }
  else {
    buffer_size = buffer_size * 2;
    buffer_ptr = object_instance;
    if (buffer_size != 0) goto LAB_1802abea0;
  }
  for (; array_data != queue_head; array_data = array_data + 1) {
    *object_instance = *array_data;
    *array_data = 0;
    object_instance = object_instance + 1;
  }
  *object_instance = (longlong)array_data;
  object_instance = (longlong *)0x0;
  array_data = (longlong *)buffer_ptr[1];
  queue_head = (longlong *)*buffer_ptr;
  if (queue_head != array_data) {
    do {
      if ((longlong *)*queue_head != (longlong *)0x0) {
        (**(code **)(*(longlong *)*queue_head + 0x38))();
      }
      queue_head = queue_head + 1;
    } while (queue_head != array_data);
    queue_head = (longlong *)*buffer_ptr;
  }
  if (queue_head != (longlong *)0x0) {
    // 释放对象队列内存
    free_render_object_queue(queue_head);
  }
  *buffer_ptr = (longlong)buffer_ptr;
  buffer_ptr[1] = (longlong)(object_instance + 1);
  buffer_ptr[2] = (longlong)(buffer_ptr + buffer_size);
LAB_1802abf36:
  *(undefined1 *)(buffer_ptr + 0x12) = 1;
  mutex_result = _Mtx_unlock(thread_manager);
  if (mutex_result != 0) {
    __Throw_C_error_std__YAXH_Z(mutex_result);
  }
  return;
}



// 警告: 以'_'开头的全局变量与同一地址的较小符号重叠

undefined8 * clone_render_object_data(undefined8 source_object, longlong clone_flags)

{
  undefined4 property_a;
  undefined4 property_b;
  undefined4 property_c;
  undefined8 data_ptr;
  undefined8 *new_object;
  
  new_object = (undefined8 *)allocate_render_object_memory(_DAT_180c8ed18,0x1c8,8,3,0xfffffffffffffffe);
  *new_object = &UNK_1809ffa18;
  *new_object = &UNK_180a167b8;
  *(undefined4 *)(new_object + 1) = 0;
  *(undefined4 *)((longlong)new_object + 0xc) = 0;
  *(undefined4 *)(new_object + 2) = 0;
  *(undefined4 *)((longlong)new_object + 0x14) = 0;
  initialize_render_object_properties(new_object + 3);
  if (clone_flags != 0) {
    data_ptr = *(undefined8 *)(clone_flags + 0x10);
    new_object[1] = *(undefined8 *)(clone_flags + 8);
    new_object[2] = data_ptr;
    *(undefined4 *)(new_object + 3) = *(undefined4 *)(clone_flags + 0x18);
    *(undefined4 *)((longlong)new_object + 0x1c) = *(undefined4 *)(clone_flags + 0x1c);
    data_ptr = *(undefined8 *)(clone_flags + 0x28);
    new_object[4] = *(undefined8 *)(clone_flags + 0x20);
    new_object[5] = data_ptr;
    data_ptr = *(undefined8 *)(clone_flags + 0x38);
    new_object[6] = *(undefined8 *)(clone_flags + 0x30);
    new_object[7] = data_ptr;
    data_ptr = *(undefined8 *)(clone_flags + 0x48);
    new_object[8] = *(undefined8 *)(clone_flags + 0x40);
    new_object[9] = data_ptr;
    data_ptr = *(undefined8 *)(clone_flags + 0x58);
    new_object[10] = *(undefined8 *)(clone_flags + 0x50);
    new_object[0xb] = data_ptr;
    data_ptr = *(undefined8 *)(clone_flags + 0x68);
    new_object[0xc] = *(undefined8 *)(clone_flags + 0x60);
    new_object[0xd] = data_ptr;
    data_ptr = *(undefined8 *)(clone_flags + 0x78);
    new_object[0xe] = *(undefined8 *)(clone_flags + 0x70);
    new_object[0xf] = data_ptr;
    data_ptr = *(undefined8 *)(clone_flags + 0x88);
    new_object[0x10] = *(undefined8 *)(clone_flags + 0x80);
    new_object[0x11] = data_ptr;
    data_ptr = *(undefined8 *)(clone_flags + 0x98);
    new_object[0x12] = *(undefined8 *)(clone_flags + 0x90);
    new_object[0x13] = data_ptr;
    data_ptr = *(undefined8 *)(clone_flags + 0xa8);
    new_object[0x14] = *(undefined8 *)(clone_flags + 0xa0);
    new_object[0x15] = data_ptr;
    data_ptr = *(undefined8 *)(clone_flags + 0xb8);
    new_object[0x16] = *(undefined8 *)(clone_flags + 0xb0);
    new_object[0x17] = data_ptr;
    data_ptr = *(undefined8 *)(clone_flags + 200);
    new_object[0x18] = *(undefined8 *)(clone_flags + 0xc0);
    new_object[0x19] = data_ptr;
    data_ptr = *(undefined8 *)(clone_flags + 0xd8);
    new_object[0x1a] = *(undefined8 *)(clone_flags + 0xd0);
    new_object[0x1b] = data_ptr;
    data_ptr = *(undefined8 *)(clone_flags + 0xe8);
    new_object[0x1c] = *(undefined8 *)(clone_flags + 0xe0);
    new_object[0x1d] = data_ptr;
    data_ptr = *(undefined8 *)(clone_flags + 0xf8);
    new_object[0x1e] = *(undefined8 *)(clone_flags + 0xf0);
    new_object[0x1f] = data_ptr;
    data_ptr = *(undefined8 *)(clone_flags + 0x108);
    new_object[0x20] = *(undefined8 *)(clone_flags + 0x100);
    new_object[0x21] = data_ptr;
    data_ptr = *(undefined8 *)(clone_flags + 0x118);
    new_object[0x22] = *(undefined8 *)(clone_flags + 0x110);
    new_object[0x23] = data_ptr;
    property_a = *(undefined4 *)(clone_flags + 0x124);
    property_b = *(undefined4 *)(clone_flags + 0x128);
    property_c = *(undefined4 *)(clone_flags + 300);
    *(undefined4 *)(new_object + 0x24) = *(undefined4 *)(clone_flags + 0x120);
    *(undefined4 *)((longlong)new_object + 0x124) = property_a;
    *(undefined4 *)(new_object + 0x25) = property_b;
    *(undefined4 *)((longlong)new_object + 300) = property_c;
    *(undefined4 *)(new_object + 0x26) = *(undefined4 *)(clone_flags + 0x130);
    *(undefined1 *)((longlong)new_object + 0x134) = *(undefined1 *)(clone_flags + 0x134);
    if (new_object + 0x27 != (undefined8 *)(clone_flags + 0x138)) {
      copy_render_object_data(new_object + 0x27,*(undefined8 *)(clone_flags + 0x138),*(undefined8 *)(clone_flags + 0x140))
      ;
    }
    *(undefined4 *)(new_object + 0x2b) = *(undefined4 *)(clone_flags + 0x158);
    *(undefined4 *)((longlong)new_object + 0x15c) = *(undefined4 *)(clone_flags + 0x15c);
    *(undefined4 *)(new_object + 0x2c) = *(undefined4 *)(clone_flags + 0x160);
    *(undefined4 *)((longlong)new_object + 0x164) = *(undefined4 *)(clone_flags + 0x164);
    data_ptr = *(undefined8 *)(clone_flags + 0x170);
    new_object[0x2d] = *(undefined8 *)(clone_flags + 0x168);
    new_object[0x2e] = data_ptr;
    data_ptr = *(undefined8 *)(clone_flags + 0x180);
    new_object[0x2f] = *(undefined8 *)(clone_flags + 0x178);
    new_object[0x30] = data_ptr;
    data_ptr = *(undefined8 *)(clone_flags + 400);
    new_object[0x31] = *(undefined8 *)(clone_flags + 0x188);
    new_object[0x32] = data_ptr;
    data_ptr = *(undefined8 *)(clone_flags + 0x1a0);
    new_object[0x33] = *(undefined8 *)(clone_flags + 0x198);
    new_object[0x34] = data_ptr;
    *(undefined4 *)(new_object + 0x35) = *(undefined4 *)(clone_flags + 0x1a8);
    *(undefined4 *)((longlong)new_object + 0x1ac) = *(undefined4 *)(clone_flags + 0x1ac);
    *(undefined4 *)(new_object + 0x36) = *(undefined4 *)(clone_flags + 0x1b0);
    *(undefined4 *)((longlong)new_object + 0x1b4) = *(undefined4 *)(clone_flags + 0x1b4);
    *(undefined4 *)(new_object + 0x37) = *(undefined4 *)(clone_flags + 0x1b8);
    *(undefined4 *)((longlong)new_object + 0x1bc) = *(undefined4 *)(clone_flags + 0x1bc);
    *(undefined4 *)(new_object + 0x38) = *(undefined4 *)(clone_flags + 0x1c0);
    *(undefined4 *)((longlong)new_object + 0x1c4) = *(undefined4 *)(clone_flags + 0x1c4);
  }
  return new_object;
}



// 函数: void transfer_render_object_ownership(longlong source_context, longlong target_context)
// 功能: 转移渲染对象所有权，处理对象引用和资源管理
void transfer_render_object_ownership(longlong source_context, longlong target_context)

{
  longlong *source_manager;
  longlong *target_manager;
  longlong **ownership_lock;
  
  if (*(longlong *)(target_context + 0xb0) == 0) {
    source_manager = *(longlong **)(source_context + 0xb0);
    if (source_manager != (longlong *)0x0) {
      target_manager = source_manager;
      (**(code **)(*source_manager + 0x28))(source_manager);
    }
    target_manager = *(longlong **)(target_context + 0xb0);
    *(longlong **)(target_context + 0xb0) = source_manager;
    if (target_manager != (longlong *)0x0) {
      (**(code **)(*target_manager + 0x38))();
    }
  }
  else {
    ownership_lock = &target_manager;
    target_manager = *(longlong **)(source_context + 0xb0);
    if (target_manager != (longlong *)0x0) {
      (**(code **)(*target_manager + 0x28))(target_manager);
    }
    cleanup_render_resources();
  }
  if (*(longlong *)(source_context + 0xb0) != 0) {
    *(longlong *)(*(longlong *)(source_context + 0xb0) + 0xa8) = target_context;
    update_render_object_references();
  }
  target_manager = *(longlong **)(source_context + 0xb0);
  *(undefined8 *)(source_context + 0xb0) = 0;
  if (target_manager != (longlong *)0x0) {
    (**(code **)(*target_manager + 0x38))();
  }
  return;
}



// 警告: 以'_'开头的全局变量与同一地址的较小符号重叠


