#include "TaleWorlds.Native.Split.h"

// 03_rendering_part010.c - 6 个函数

// 类型定义
typedef struct {
    void *vtable_ptr;           // 虚函数表指针
    void *object_data;          // 对象数据指针
    uint32_t flags;             // 对象标志
    char name[128];              // 对象名称
    void *texture_ptr;          // 纹理指针
    void *material_ptr;         // 材质指针
    void *shader_ptr;           // 着色器指针
    void *render_state;         // 渲染状态
    // ... 其他渲染对象属性
} render_object_t;

typedef struct {
    render_object_t *object_array;      // 对象数组指针
    render_object_t *array_end;         // 数组结束指针
    render_object_t *capacity_end;      // 容量结束指针
    void *render_manager;                // 渲染管理器
    void *texture_cache;                 // 纹理缓存
    void *material_cache;               // 材质缓存
    uint32_t render_flags;               // 渲染标志
    char context_name[128];              // 上下文名称
    // ... 其他渲染上下文属性
} render_context_t;

typedef struct {
    void *vtable_ptr;                    // 虚函数表指针
    render_object_t *object_list;        // 对象列表
    uint32_t manager_flags;              // 管理器标志
    char manager_name[128];              // 管理器名称
    // ... 其他渲染管理器属性
} render_manager_t;

typedef struct texture_node {
    struct texture_node *left;           // 左子节点
    struct texture_node *right;          // 右子节点
    char texture_key[16];                // 纹理键值
    uint64_t property_value;             // 属性值
    uint64_t texture_id;                 // 纹理ID
    // ... 其他纹理节点属性
} texture_node_t;

// 函数: void resize_render_object_array(render_context_t *render_context, size_t new_size)
// 功能: 调整渲染对象数组大小，处理内存重新分配和对象复制
// 参数:
//   render_context - 渲染上下文指针
//   new_size - 新的数组大小
// 返回值: 无
void resize_render_object_array(render_context_t *render_context, size_t new_size)

{
  render_object_t *object_ptr;
  render_object_t *new_array_start;
  size_t growth_factor;
  render_object_t *old_array_start;
  render_object_t *old_array_end;
  render_object_t *new_array_ptr;
  render_object_t *temp_ptr;
  char *string_data;
  longlong size_diff;
  
  // 获取当前数组结束指针
  old_array_end = render_context->array_end;
  
  // 检查是否需要重新分配内存
  size_t current_capacity = (render_context->capacity_end - render_context->array_end) / sizeof(render_object_t);
  if (current_capacity < new_size) {
    new_array_ptr = render_context->object_array;
    size_diff = (old_array_end - new_array_ptr) / sizeof(render_object_t);
    
    // 计算新的容量增长因子
    growth_factor = size_diff * 2;
    if (size_diff == 0) {
      growth_factor = 1;
    }
    if (growth_factor < size_diff + new_size) {
      growth_factor = size_diff + new_size;
    }
    
    new_array_start = NULL;
    if (growth_factor != 0) {
      // 分配新的内存空间
      new_array_start = (render_object_t *)
               allocate_render_memory(&_DAT_180c8ed18, growth_factor * sizeof(render_object_t), 
                                    render_context->render_flags, 0x6bca1af286bca1b, 0xfffffffffffffffe);
      old_array_end = render_context->array_end;
      new_array_ptr = render_context->object_array;
    }
    temp_ptr = new_array_start;
    if (new_array_ptr != old_array_end) {
      size_diff = (longlong)new_array_ptr - (longlong)temp_ptr;
      
      // 复制现有对象到新数组
      do {
        // 初始化新对象的虚函数表
        temp_ptr->vtable_ptr = &UNK_18098bcb0;
        temp_ptr->object_data = NULL;
        temp_ptr->flags = 0;
        
        // 设置对象名称相关属性
        temp_ptr->vtable_ptr = &UNK_1809fcc28;
        temp_ptr->object_data = temp_ptr + 3;  // 名称数据指针
        temp_ptr->flags = 0;
        temp_ptr->name[0] = '\0';
        
        // 复制对象的属性数据
        temp_ptr->flags = *(uint32_t *)((longlong)temp_ptr + size_diff + 0x10);
        object_ptr = *(render_object_t **)((longlong)temp_ptr + size_diff + 8);
        string_data = &DAT_18098bc73;  // 默认名称字符串
        if (object_ptr != NULL) {
          string_data = (char *)object_ptr;
        }
        
        // 复制对象名称
        strncpy_s(temp_ptr->name, sizeof(temp_ptr->name), string_data, _TRUNCATE);
        temp_ptr = temp_ptr + 1;  // 移动到下一个对象
      } while ((render_object_t *)((longlong)temp_ptr + size_diff) != old_array_end);
    }
    // 初始化新增的对象
    if (new_size != 0) {
      render_object_t *new_object_ptr = temp_ptr;
      size_t objects_to_create = new_size;
      
      do {
        // 初始化新对象的虚函数表
        new_object_ptr->vtable_ptr = &UNK_18098bcb0;
        new_object_ptr->object_data = NULL;
        new_object_ptr->flags = 0;
        
        // 设置对象名称相关属性
        new_object_ptr->vtable_ptr = &UNK_1809fcc28;
        new_object_ptr->object_data = new_object_ptr + 2;  // 名称数据指针
        new_object_ptr->flags = 0;
        new_object_ptr->name[0] = '\0';
        
        new_object_ptr = new_object_ptr + 1;
        objects_to_create = objects_to_create - 1;
      } while (objects_to_create != 0);
    }
    // 清理旧的渲染对象
    old_array_end = render_context->array_end;
    new_array_ptr = render_context->object_array;
    if (new_array_ptr != old_array_end) {
      do {
        // 调用对象的析构函数
        ((void (*)(render_object_t *, int))new_array_ptr->vtable_ptr)(new_array_ptr, 0);
        new_array_ptr = new_array_ptr + 1;
      } while (new_array_ptr != old_array_end);
      new_array_ptr = render_context->object_array;
    }
    
    // 释放旧的渲染对象数组
    if (new_array_ptr != NULL) {
      free_render_objects(new_array_ptr);
    }
    
    // 更新渲染上下文的指针
    render_context->object_array = new_array_start;
    render_context->array_end = temp_ptr + new_size;
    render_context->capacity_end = new_array_start + growth_factor;
  }
  else {
    // 不需要重新分配内存，直接扩展现有数组
    growth_factor = new_size;
    if (new_size != 0) {
      render_object_t *array_ptr = old_array_end;
      do {
        // 初始化新对象的虚函数表
        array_ptr->vtable_ptr = &UNK_18098bcb0;
        array_ptr->object_data = NULL;
        array_ptr->flags = 0;
        
        // 设置对象名称相关属性
        array_ptr->vtable_ptr = &UNK_1809fcc28;
        array_ptr->object_data = array_ptr + 3;  // 名称数据指针
        array_ptr->flags = 0;
        array_ptr->name[0] = '\0';
        
        array_ptr = array_ptr + 1;
        growth_factor = growth_factor - 1;
      } while (growth_factor != 0);
      old_array_end = render_context->array_end;
    }
    render_context->array_end = old_array_end + new_size;
  }
  return;
}



// 函数: void cleanup_render_object_list(render_context_t *render_context, void *param2, void *param3, void *param4)
// 功能: 清理渲染对象列表，释放相关资源
// 参数:
//   render_context - 渲染上下文指针
//   param2 - 清理参数2
//   param3 - 清理参数3
//   param4 - 清理参数4
// 返回值: 无
void cleanup_render_object_list(render_context_t *render_context, void *param2, void *param3, void *param4)

{
  render_object_t *current_object;
  render_object_t *list_end;
  uint64_t cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;  // 清理标志
  
  // 获取对象列表的起始和结束位置
  current_object = *(render_object_t **)((uint8_t *)render_context + 0x128);
  list_end = *(render_object_t **)((uint8_t *)render_context + 0x120);
  
  // 遍历对象列表并清理每个对象
  for (; list_end != current_object; list_end = (render_object_t *)((uint8_t *)list_end + 0xb)) {
    // 调用对象的清理函数
    ((void (*)(render_object_t *, int, void *, void *, uint64_t))list_end->vtable_ptr)(
        list_end, 0, param3, param4, cleanup_flag);
  }
  
  // 检查是否还有对象需要清理
  if (*(longlong *)((uint8_t *)render_context + 0x120) == 0) {
    return;
  }
  
  // 释放渲染对象列表内存
  free_render_object_list();
}



// 函数: render_context_t *initialize_render_context(render_context_t *render_context, uint64_t init_flags, void *param3, void *param4)
// 功能: 初始化渲染上下文，设置基本属性和虚函数表
// 参数:
//   render_context - 渲染上下文指针
//   init_flags - 初始化标志
//   param3 - 初始化参数3
//   param4 - 初始化参数4
// 返回值: 初始化后的渲染上下文指针
render_context_t *
initialize_render_context(render_context_t *render_context, uint64_t init_flags, void *param3, void *param4)

{
  uint64_t cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;  // 清理标志
  
  // 初始化渲染系统
  initialize_render_system();
  
  // 设置渲染上下文的虚函数表
  render_context->vtable_ptr = &UNK_1809ffa18;
  
  // 如果需要重新初始化，先释放现有资源
  if ((init_flags & 1) != 0) {
    free(render_context, 0x1c8, param3, param4, cleanup_flag);
  }
  
  return render_context;
}



// 函数: render_object_t **create_render_object_instance(render_context_t *render_context, render_object_t **instance_ptr)
// 功能: 创建渲染对象实例，分配内存并初始化对象属性
// 参数:
//   render_context - 渲染上下文指针
//   instance_ptr - 实例指针的指针
// 返回值: 实例指针的指针
render_object_t **create_render_object_instance(render_context_t *render_context, render_object_t **instance_ptr)

{
  void *memory_handle;
  render_object_t *new_instance;
  char *name_string;
  
  // 分配渲染对象内存
  memory_handle = allocate_render_object_memory(&_DAT_180c8ed18, 0x470, 0x10, 0x15, 0, 0xfffffffffffffffe);
  
  // 初始化渲染对象实例
  new_instance = (render_object_t *)initialize_render_object_instance(memory_handle);
  *instance_ptr = new_instance;
  
  if (new_instance != NULL) {
    // 调用对象的初始化函数
    ((void (*)(render_object_t *))new_instance->vtable_ptr)(new_instance);
  }
  
  // 设置对象所属的渲染上下文
  *(longlong *)((uint8_t *)*instance_ptr + 0xa8) = (longlong)render_context;
  
  // 设置对象名称
  name_string = &DAT_18098bc73;  // 默认名称
  if (*(void **)((uint8_t *)render_context + 0x70) != NULL) {
    name_string = *(char **)((uint8_t *)render_context + 0x70);
  }
  
  // 调用对象的名称设置函数
  ((void (*)(render_object_t *, char *))(*(uint64_t *)((uint8_t *)*instance_ptr + 0x10) + 0x10))(
      (render_object_t *)((uint8_t *)*instance_ptr + 0x10), name_string);
  
  return instance_ptr;
}



// 函数: void setup_render_object_properties(render_context_t *render_context, void *param2, void *param3, void *param4)
// 功能: 设置渲染对象属性，包括纹理、材质等
// 参数:
//   render_context - 渲染上下文指针
//   param2 - 设置参数2
//   param3 - 设置参数3
//   param4 - 设置参数4
// 返回值: 无
void setup_render_object_properties(render_context_t *render_context, void *param2, void *param3, void *param4)

{
  uint64_t property_value;
  render_manager_t *render_manager;
  uint64_t texture_id;
  uint64_t base_address;
  int compare_result;
  texture_node_t *current_node;
  texture_node_t *parent_node;
  texture_node_t *texture_list;
  texture_node_t *property_node;
  render_object_t **instance_ptr;
  
  if (*(longlong *)(render_context + 0xb0) == 0) {
    texture_list = (uint64_t *)create_render_object_instance(render_context,&instance_ptr,param3,param4,0xfffffffffffffffe);
    property_value = *texture_list;
    *texture_list = 0;
    render_manager = *(longlong **)(render_context + 0xb0);
    *(uint64_t *)(render_context + 0xb0) = property_value;
    if (render_manager != (longlong *)0x0) {
      (**(code **)(*render_manager + 0x38))();
    }
    if (instance_ptr != (longlong *)0x0) {
      (**(code **)(*instance_ptr + 0x38))();
    }
    *(int8_t *)(*(longlong *)(render_context + 0xb0) + 0xb1) = 1;
    base_address = _DAT_180c86930;
    render_manager = *(longlong **)(render_context + 0xb0);
    compare_result = (**(code **)(*render_manager + 0x60))(render_manager);
    *(int8_t *)((longlong)render_manager + 0xb2) = 1;
    register_render_object((longlong)compare_result * 0x98 + base_address + 8,render_manager);
  }
  texture_list = (uint64_t *)(_DAT_180c8a9d0 + 0x180);
  current_node = *(uint64_t **)(_DAT_180c8a9d0 + 400);
  parent_node = texture_list;
  if (current_node != (uint64_t *)0x0) {
    do {
      compare_result = memcmp(current_node + 4,render_context + 0xc,0x10);
      if (compare_result < 0) {
        property_node = (uint64_t *)*current_node;
      }
      else {
        property_node = (uint64_t *)current_node[1];
        parent_node = current_node;
      }
      current_node = property_node;
    } while (property_node != (uint64_t *)0x0);
    if ((parent_node != texture_list) && (compare_result = memcmp(render_context + 0xc,parent_node + 4,0x10), -1 < compare_result))
    goto LAB_1802733d5;
  }
  parent_node = texture_list;
LAB_1802733d5:
  if (parent_node != texture_list) {
    property_value = parent_node[6];
    texture_id = parent_node[7];
    render_manager = *(longlong **)(render_context + 0xb0);
    *(int32_t *)(render_manager + 0x170) = 0;
    **(int8_t **)(render_manager + 0x168) = 0;
    set_render_texture(render_manager + 0x160,&UNK_180a02954,property_value);
    *(uint64_t *)(render_manager + 0x148) = property_value;
    render_manager = *(longlong **)(render_context + 0xb0);
    *(int32_t *)(render_manager + 0x1a8) = 0;
    **(int8_t **)(render_manager + 0x1a0) = 0;
    set_render_texture(render_manager + 0x198,&UNK_180a02954,texture_id);
    *(uint64_t *)(render_manager + 0x150) = texture_id;
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
    *(uint64_t *)(render_context + 0xb0) = 0;
    if (instance_ptr != (longlong *)0x0) {
      // 调用对象销毁函数
      (**(code **)(*instance_ptr + 0x38))();
      return;
    }
  }
  return;
}



// 警告: 以'_'开头的全局变量与同一地址的较小符号重叠



// 函数: void process_render_object_creation(longlong render_context, uint64_t param2, uint64_t param3, uint64_t param4)
// 功能: 处理渲染对象创建过程，包括线程安全的对象管理
void process_render_object_creation(longlong render_context, uint64_t param2, uint64_t param3, uint64_t param4)

{
  longlong **thread_manager;
  char creation_result;
  int mutex_result;
  uint64_t *new_object;
  longlong *object_instance;
  longlong *array_data;
  longlong *buffer_ptr;
  longlong buffer_size;
  void *object_name;
  longlong *queue_head;
  longlong **queue_lock;
  uint64_t cleanup_flag;
  
  object_instance = *(longlong **)(render_context + 0xb0);
  if (object_instance == (longlong *)0x0) {
    creation_result = check_render_object_creation(0,*(uint64_t *)(*(longlong *)(render_context + 0x88) + 8),param3,param4
                                ,0xfffffffffffffffe);
    if (creation_result != '\0') {
      new_object = (uint64_t *)create_render_object_instance(render_context,&queue_lock);
      cleanup_flag = *new_object;
      *new_object = 0;
      object_instance = *(longlong **)(render_context + 0xb0);
      *(uint64_t *)(render_context + 0xb0) = cleanup_flag;
      if (object_instance != (longlong *)0x0) {
        (**(code **)(*object_instance + 0x38))();
      }
      if (queue_lock != (longlong **)0x0) {
        (*(code *)(*queue_lock)[7])();
      }
      *(int8_t *)(*(longlong *)(render_context + 0xb0) + 0xb1) = 1;
      finalize_render_object_creation();
    }
    return;
  }
  queue_lock = &object_instance;
  (**(code **)(*object_instance + 0x28))();
  cleanup_render_resources();
  object_name = &DAT_18098bc73;
  if (*(void **)(render_context + 0x70) != (void *)0x0) {
    object_name = *(void **)(render_context + 0x70);
  }
  array_data = (longlong *)(*(longlong *)(render_context + 0xb0) + 0x10);
  (**(code **)(*array_data + 0x10))(array_data,object_name);
  buffer_size = _DAT_180c86930;
  array_data = *(longlong **)(render_context + 0xb0);
  mutex_result = (**(code **)(*array_data + 0x60))(array_data);
  *(int8_t *)((longlong)array_data + 0xb2) = 1;
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
  *(int8_t *)(buffer_ptr + 0x12) = 1;
  mutex_result = _Mtx_unlock(thread_manager);
  if (mutex_result != 0) {
    __Throw_C_error_std__YAXH_Z(mutex_result);
  }
  return;
}



// 警告: 以'_'开头的全局变量与同一地址的较小符号重叠

uint64_t * clone_render_object_data(uint64_t source_object, longlong clone_flags)

{
  int32_t property_a;
  int32_t property_b;
  int32_t property_c;
  uint64_t data_ptr;
  uint64_t *new_object;
  
  new_object = (uint64_t *)allocate_render_object_memory(_DAT_180c8ed18,0x1c8,8,3,0xfffffffffffffffe);
  *new_object = &UNK_1809ffa18;
  *new_object = &UNK_180a167b8;
  *(int32_t *)(new_object + 1) = 0;
  *(int32_t *)((longlong)new_object + 0xc) = 0;
  *(int32_t *)(new_object + 2) = 0;
  *(int32_t *)((longlong)new_object + 0x14) = 0;
  initialize_render_object_properties(new_object + 3);
  if (clone_flags != 0) {
    data_ptr = *(uint64_t *)(clone_flags + 0x10);
    new_object[1] = *(uint64_t *)(clone_flags + 8);
    new_object[2] = data_ptr;
    *(int32_t *)(new_object + 3) = *(int32_t *)(clone_flags + 0x18);
    *(int32_t *)((longlong)new_object + 0x1c) = *(int32_t *)(clone_flags + 0x1c);
    data_ptr = *(uint64_t *)(clone_flags + 0x28);
    new_object[4] = *(uint64_t *)(clone_flags + 0x20);
    new_object[5] = data_ptr;
    data_ptr = *(uint64_t *)(clone_flags + 0x38);
    new_object[6] = *(uint64_t *)(clone_flags + 0x30);
    new_object[7] = data_ptr;
    data_ptr = *(uint64_t *)(clone_flags + 0x48);
    new_object[8] = *(uint64_t *)(clone_flags + 0x40);
    new_object[9] = data_ptr;
    data_ptr = *(uint64_t *)(clone_flags + 0x58);
    new_object[10] = *(uint64_t *)(clone_flags + 0x50);
    new_object[0xb] = data_ptr;
    data_ptr = *(uint64_t *)(clone_flags + 0x68);
    new_object[0xc] = *(uint64_t *)(clone_flags + 0x60);
    new_object[0xd] = data_ptr;
    data_ptr = *(uint64_t *)(clone_flags + 0x78);
    new_object[0xe] = *(uint64_t *)(clone_flags + 0x70);
    new_object[0xf] = data_ptr;
    data_ptr = *(uint64_t *)(clone_flags + 0x88);
    new_object[0x10] = *(uint64_t *)(clone_flags + 0x80);
    new_object[0x11] = data_ptr;
    data_ptr = *(uint64_t *)(clone_flags + 0x98);
    new_object[0x12] = *(uint64_t *)(clone_flags + 0x90);
    new_object[0x13] = data_ptr;
    data_ptr = *(uint64_t *)(clone_flags + 0xa8);
    new_object[0x14] = *(uint64_t *)(clone_flags + 0xa0);
    new_object[0x15] = data_ptr;
    data_ptr = *(uint64_t *)(clone_flags + 0xb8);
    new_object[0x16] = *(uint64_t *)(clone_flags + 0xb0);
    new_object[0x17] = data_ptr;
    data_ptr = *(uint64_t *)(clone_flags + 200);
    new_object[0x18] = *(uint64_t *)(clone_flags + 0xc0);
    new_object[0x19] = data_ptr;
    data_ptr = *(uint64_t *)(clone_flags + 0xd8);
    new_object[0x1a] = *(uint64_t *)(clone_flags + 0xd0);
    new_object[0x1b] = data_ptr;
    data_ptr = *(uint64_t *)(clone_flags + 0xe8);
    new_object[0x1c] = *(uint64_t *)(clone_flags + 0xe0);
    new_object[0x1d] = data_ptr;
    data_ptr = *(uint64_t *)(clone_flags + 0xf8);
    new_object[0x1e] = *(uint64_t *)(clone_flags + 0xf0);
    new_object[0x1f] = data_ptr;
    data_ptr = *(uint64_t *)(clone_flags + 0x108);
    new_object[0x20] = *(uint64_t *)(clone_flags + 0x100);
    new_object[0x21] = data_ptr;
    data_ptr = *(uint64_t *)(clone_flags + 0x118);
    new_object[0x22] = *(uint64_t *)(clone_flags + 0x110);
    new_object[0x23] = data_ptr;
    property_a = *(int32_t *)(clone_flags + 0x124);
    property_b = *(int32_t *)(clone_flags + 0x128);
    property_c = *(int32_t *)(clone_flags + 300);
    *(int32_t *)(new_object + 0x24) = *(int32_t *)(clone_flags + 0x120);
    *(int32_t *)((longlong)new_object + 0x124) = property_a;
    *(int32_t *)(new_object + 0x25) = property_b;
    *(int32_t *)((longlong)new_object + 300) = property_c;
    *(int32_t *)(new_object + 0x26) = *(int32_t *)(clone_flags + 0x130);
    *(int8_t *)((longlong)new_object + 0x134) = *(int8_t *)(clone_flags + 0x134);
    if (new_object + 0x27 != (uint64_t *)(clone_flags + 0x138)) {
      copy_render_object_data(new_object + 0x27,*(uint64_t *)(clone_flags + 0x138),*(uint64_t *)(clone_flags + 0x140))
      ;
    }
    *(int32_t *)(new_object + 0x2b) = *(int32_t *)(clone_flags + 0x158);
    *(int32_t *)((longlong)new_object + 0x15c) = *(int32_t *)(clone_flags + 0x15c);
    *(int32_t *)(new_object + 0x2c) = *(int32_t *)(clone_flags + 0x160);
    *(int32_t *)((longlong)new_object + 0x164) = *(int32_t *)(clone_flags + 0x164);
    data_ptr = *(uint64_t *)(clone_flags + 0x170);
    new_object[0x2d] = *(uint64_t *)(clone_flags + 0x168);
    new_object[0x2e] = data_ptr;
    data_ptr = *(uint64_t *)(clone_flags + 0x180);
    new_object[0x2f] = *(uint64_t *)(clone_flags + 0x178);
    new_object[0x30] = data_ptr;
    data_ptr = *(uint64_t *)(clone_flags + 400);
    new_object[0x31] = *(uint64_t *)(clone_flags + 0x188);
    new_object[0x32] = data_ptr;
    data_ptr = *(uint64_t *)(clone_flags + 0x1a0);
    new_object[0x33] = *(uint64_t *)(clone_flags + 0x198);
    new_object[0x34] = data_ptr;
    *(int32_t *)(new_object + 0x35) = *(int32_t *)(clone_flags + 0x1a8);
    *(int32_t *)((longlong)new_object + 0x1ac) = *(int32_t *)(clone_flags + 0x1ac);
    *(int32_t *)(new_object + 0x36) = *(int32_t *)(clone_flags + 0x1b0);
    *(int32_t *)((longlong)new_object + 0x1b4) = *(int32_t *)(clone_flags + 0x1b4);
    *(int32_t *)(new_object + 0x37) = *(int32_t *)(clone_flags + 0x1b8);
    *(int32_t *)((longlong)new_object + 0x1bc) = *(int32_t *)(clone_flags + 0x1bc);
    *(int32_t *)(new_object + 0x38) = *(int32_t *)(clone_flags + 0x1c0);
    *(int32_t *)((longlong)new_object + 0x1c4) = *(int32_t *)(clone_flags + 0x1c4);
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
  *(uint64_t *)(source_context + 0xb0) = 0;
  if (target_manager != (longlong *)0x0) {
    (**(code **)(*target_manager + 0x38))();
  }
  return;
}



// 警告: 以'_'开头的全局变量与同一地址的较小符号重叠


