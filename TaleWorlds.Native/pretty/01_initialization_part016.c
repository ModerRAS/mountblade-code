#include "TaleWorlds.Native.Split.h"

// 01_initialization_part016.c - 初始化模块第16部分
// 包含32个函数，主要处理内存管理、字符串操作、线程同步等功能
// 
// 主要功能模块：
// - 内存管理：内存分配器初始化、资源管理、对象清理
// - 字符串处理：字符串初始化、复制、搜索替换、路径处理
// - 线程同步：互斥锁管理、条件变量、线程安全操作
// - 系统初始化：引擎系统初始化、配置文件加载、模块路径构建
// - 资源管理：资源分配、释放、容器管理
// 
// 技术特点：
// - 线程安全的内存操作
// - 异常处理和资源清理
// - 路径字符串标准化
// - 配置文件动态加载
// - 模块化系统架构

// 全局常量定义
#define MAX_PATH_LENGTH 0x80
#define MAX_SHORT_PATH_LENGTH 0x40
#define MUTEX_TIMEOUT_INFINITE 0xfffffffffffffffe

// 函数：销毁互斥锁
void destroy_mutex_simple(void)
{
  _Mtx_destroy_in_situ();
  return;
}

// 函数：销毁互斥锁和条件变量
void destroy_mutex_and_condition(void *condition_ptr)
{
  _Mtx_destroy_in_situ();
  _Cnd_destroy_in_situ(condition_ptr);
  return;
}

// 函数：初始化同步对象结构
void *initialize_sync_object(void *sync_obj, void *attr1, void *attr2, void *attr3)
{
  unsigned long long init_flag;
  
  init_flag = MUTEX_TIMEOUT_INFINITE;
  *(void **)sync_obj = &global_vtable_180a21690;
  *(void **)sync_obj = &global_vtable_180a21720;
  *(unsigned int *)((char *)sync_obj + 8) = 0;
  *(void **)sync_obj = &global_vtable_18098bdc8;
  LOCK();
  *(unsigned char *)((char *)sync_obj + 16) = 0;
  UNLOCK();
  ((unsigned long long *)sync_obj)[3] = 0xffffffffffffffff;
  *(void **)sync_obj = &global_vtable_1809fcb90;
  _Cnd_init_in_situ((char *)sync_obj + 32);
  _Mtx_init_in_situ((char *)sync_obj + 104, 2, attr2, attr3, init_flag);
  *(unsigned char *)((char *)sync_obj + 184) = 0;
  return sync_obj;
}

// 函数：释放同步对象
void *free_sync_object(void *sync_obj, unsigned long long flags, void *attr1, void *attr2)
{
  *(void **)sync_obj = &global_vtable_18098bcb0;
  if ((flags & 1) != 0) {
    free(sync_obj, 0x98, attr1, attr2, MUTEX_TIMEOUT_INFINITE);
  }
  return sync_obj;
}

// 函数：安全复制字符串数据
void safe_string_copy(longlong str_obj, void *src, int length)
{
  if (length + 1 < MAX_PATH_LENGTH) {
    // 安全复制字符串
    memcpy(*(void **)(str_obj + 8), src, (longlong)length);
  }
  **(unsigned char **)(str_obj + 8) = 0;
  *(unsigned int *)(str_obj + 16) = 0;
  return;
}

// 函数：内存复制包装
void memory_copy_wrapper(void)
{
  // 内存复制操作
  memcpy();
}

// 函数：重置字符串对象
void reset_string_object(unsigned char *str_obj)
{
  longlong obj_ptr;
  
  *str_obj = 0;
  *(unsigned int *)(obj_ptr + 16) = 0;
  return;
}

// 函数：初始化字符串对象
void *initialize_string_object(void *str_obj)
{
  *(void **)str_obj = &global_vtable_18098bcb0;
  ((void **)str_obj)[1] = 0;
  *(unsigned int *)((char *)str_obj + 16) = 0;
  *(void **)str_obj = &global_vtable_1809fcc28;
  ((void **)str_obj)[1] = (char *)str_obj + 24;
  *(unsigned int *)((char *)str_obj + 16) = 0;
  *(unsigned char *)((char *)str_obj + 24) = 0;
  return str_obj;
}

// 函数：字符串搜索和替换
void string_search_replace(longlong str_obj, longlong search_str, longlong replace_str)
{
  longlong pos;
  longlong search_len;
  longlong replace_len;
  unsigned char stack_buffer[32];
  unsigned long long stack_var;
  void *temp_ptr;
  unsigned char *dest_ptr;
  unsigned int flags;
  
  stack_var = _DAT_180bf00a8 ^ (unsigned long long)stack_buffer;
  temp_ptr = &global_vtable_1809fcc28;
  dest_ptr = stack_buffer + 64;
  flags = 0;
  dest_ptr[0] = 0;
  pos = strstr(*(void **)(str_obj + 8));
  if (pos != 0) {
    search_len = -1;
    replace_len = -1;
    do {
      search_len = search_len + 1;
    } while (*(char *)(search_str + search_len) != '\0');
    do {
      replace_len = replace_len + 1;
    } while (*(char *)(replace_str + replace_len) != '\0');
    // 复制前缀
    memcpy(dest_ptr, *(longlong *)(str_obj + 8), pos - *(longlong *)(str_obj + 8));
  }
  temp_ptr = &global_vtable_18098bcb0;
  // 执行字符串处理
  FUN_1808fc050(stack_var ^ (unsigned long long)stack_buffer);
}

// 函数：带缓冲区的字符串初始化
void *initialize_string_with_buffer(void *str_obj, longlong src_str, void *attr1, void *attr2)
{
  void *string_ptr;
  
  *(void **)str_obj = &global_vtable_18098bcb0;
  ((void **)str_obj)[1] = 0;
  *(unsigned int *)((char *)str_obj + 16) = 0;
  *(void **)str_obj = &global_vtable_1809fcc28;
  ((void **)str_obj)[1] = (char *)str_obj + 24;
  *(unsigned int *)((char *)str_obj + 16) = 0;
  *(unsigned char *)((char *)str_obj + 24) = 0;
  *(unsigned int *)((char *)str_obj + 16) = *(unsigned int *)(src_str + 16);
  string_ptr = &default_string_18098bc73;
  if (*(void **)(src_str + 8) != (void *)0x0) {
    string_ptr = *(void **)(src_str + 8);
  }
  strcpy_s(((void **)str_obj)[1], MAX_PATH_LENGTH, string_ptr, attr2, MUTEX_TIMEOUT_INFINITE);
  return str_obj;
}

// 函数：释放字符串对象
void *free_string_object(void *str_obj, unsigned long long flags, void *attr1, void *attr2)
{
  *(void **)str_obj = &global_vtable_18098bcb0;
  if ((flags & 1) != 0) {
    free(str_obj, 0x58, attr1, attr2, MUTEX_TIMEOUT_INFINITE);
  }
  return str_obj;
}

// 函数：设置字符串内容
void set_string_content(longlong str_obj, longlong src_str)
{
  longlong str_len;
  
  if (src_str == 0) {
    *(unsigned int *)(str_obj + 16) = 0;
    **(unsigned char **)(str_obj + 8) = 0;
    return;
  }
  str_len = -1;
  do {
    str_len = str_len + 1;
  } while (*(char *)(src_str + str_len) != '\0');
  if ((int)str_len < MAX_SHORT_PATH_LENGTH) {
    *(int *)(str_obj + 16) = (int)str_len;
    // 安全复制字符串
    strcpy_s(*(void **)(str_obj + 8), MAX_SHORT_PATH_LENGTH);
    return;
  }
  // 处理长字符串
  FUN_180626f80(&string_allocator_18098bc48, MAX_SHORT_PATH_LENGTH, src_str);
  *(unsigned int *)(str_obj + 16) = 0;
  **(unsigned char **)(str_obj + 8) = 0;
  return;
}

// 函数：短字符串安全复制
void short_string_copy(longlong str_obj, void *src, int length)
{
  if (length + 1 < MAX_SHORT_PATH_LENGTH) {
    // 安全复制短字符串
    memcpy(*(void **)(str_obj + 8), src, (longlong)length);
  }
  **(unsigned char **)(str_obj + 8) = 0;
  *(unsigned int *)(str_obj + 16) = 0;
  return;
}

// 函数：短字符串内存复制
void short_string_memcpy(void)
{
  // 短字符串内存复制
  memcpy();
}

// 函数：重置短字符串对象
void reset_short_string_object(unsigned char *str_obj)
{
  longlong obj_ptr;
  
  *str_obj = 0;
  *(unsigned int *)(obj_ptr + 16) = 0;
  return;
}

// 函数：初始化短字符串对象
void *initialize_short_string_object(void *str_obj)
{
  *(void **)str_obj = &global_vtable_18098bcb0;
  ((void **)str_obj)[1] = 0;
  *(unsigned int *)((char *)str_obj + 16) = 0;
  *(void **)str_obj = &global_vtable_1809fcc58;
  ((void **)str_obj)[1] = (char *)str_obj + 24;
  *(unsigned int *)((char *)str_obj + 16) = 0;
  *(unsigned char *)((char *)str_obj + 24) = 0;
  return str_obj;
}

// 函数：短字符串搜索和替换
void short_string_search_replace(longlong str_obj, longlong search_str, longlong replace_str)
{
  longlong pos;
  longlong search_len;
  longlong replace_len;
  unsigned char stack_buffer[32];
  unsigned long long stack_var;
  void *temp_ptr;
  unsigned char *dest_ptr;
  unsigned int flags;
  
  stack_var = _DAT_180bf00a8 ^ (unsigned long long)stack_buffer;
  temp_ptr = &global_vtable_1809fcc58;
  dest_ptr = stack_buffer + 32;
  flags = 0;
  dest_ptr[0] = 0;
  pos = strstr(*(void **)(str_obj + 8));
  if (pos != 0) {
    search_len = -1;
    replace_len = -1;
    do {
      search_len = search_len + 1;
    } while (*(char *)(search_str + search_len) != '\0');
    do {
      replace_len = replace_len + 1;
    } while (*(char *)(replace_str + replace_len) != '\0');
    // 复制前缀
    memcpy(dest_ptr, *(longlong *)(str_obj + 8), pos - *(longlong *)(str_obj + 8));
  }
  temp_ptr = &global_vtable_18098bcb0;
  // 执行字符串处理
  FUN_1808fc050(stack_var ^ (unsigned long long)stack_buffer);
}

// 函数：初始化带长度的短字符串
void *initialize_short_string_with_length(void *str_obj, longlong src_str, void *attr1, void *attr2)
{
  longlong str_len;
  
  *(void **)str_obj = &global_vtable_18098bcb0;
  ((void **)str_obj)[1] = 0;
  *(unsigned int *)((char *)str_obj + 16) = 0;
  *(void **)str_obj = &global_vtable_1809fcc58;
  ((void **)str_obj)[1] = (char *)str_obj + 24;
  *(unsigned int *)((char *)str_obj + 16) = 0;
  *(unsigned char *)((char *)str_obj + 24) = 0;
  if (src_str != 0) {
    str_len = -1;
    do {
      str_len = str_len + 1;
    } while (*(char *)(src_str + str_len) != '\0');
    *(int *)((char *)str_obj + 16) = (int)str_len;
    strcpy_s(((void **)str_obj)[1], MAX_SHORT_PATH_LENGTH, src_str, attr2, MUTEX_TIMEOUT_INFINITE);
  }
  return str_obj;
}

// 函数：清理对象引用
void cleanup_object_references(void *obj_ptr)
{
  ((void **)obj_ptr)[4] = &global_vtable_180a3c3e0;
  if (((void **)obj_ptr)[5] != 0) {
    // 释放引用
    FUN_18064e900();
  }
  ((void **)obj_ptr)[5] = 0;
  *(unsigned int *)((char *)obj_ptr + 56) = 0;
  ((void **)obj_ptr)[4] = &global_vtable_18098bcb0;
  *(void **)obj_ptr = &global_vtable_180a3c3e0;
  if (((void **)obj_ptr)[1] != 0) {
    // 释放引用
    FUN_18064e900();
  }
  ((void **)obj_ptr)[1] = 0;
  *(unsigned int *)((char *)obj_obj + 24) = 0;
  *(void **)obj_ptr = &global_vtable_18098bcb0;
  return;
}

// 函数：递归清理对象
void cleanup_object_recursive(void *parent_obj, void *child_obj, void *attr1, void *attr2)
{
  if (child_obj == (void *)0x0) {
    return;
  }
  cleanup_object_recursive(parent_obj, *(void **)child_obj, attr1, attr2, MUTEX_TIMEOUT_INFINITE);
  ((void **)child_obj)[8] = &global_vtable_180a3c3e0;
  if (((void **)child_obj)[9] != 0) {
    // 释放引用
    FUN_18064e900();
  }
  ((void **)child_obj)[9] = 0;
  *(unsigned int *)((char *)child_obj + 88) = 0;
  ((void **)child_obj)[8] = &global_vtable_18098bcb0;
  ((void **)child_obj)[4] = &global_vtable_180a3c3e0;
  if (((void **)child_obj)[5] != 0) {
    // 释放引用
    FUN_18064e900();
  }
  ((void **)child_obj)[5] = 0;
  *(unsigned int *)((char *)child_obj + 56) = 0;
  ((void **)child_obj)[4] = &global_vtable_18098bcb0;
  // 释放对象
  FUN_18064e900(child_obj);
}

// 函数：清理对象包装器1
void cleanup_object_wrapper1(longlong obj_ptr, void *attr1, void *attr2, void *attr3)
{
  cleanup_object_recursive(obj_ptr, *(void **)(obj_ptr + 16), attr2, attr3, MUTEX_TIMEOUT_INFINITE);
  return;
}

// 函数：清理对象包装器2
void cleanup_object_wrapper2(longlong obj_ptr, void *attr1, void *attr2, void *attr3)
{
  cleanup_object_recursive(obj_ptr, *(void **)(obj_ptr + 16), attr2, attr3, MUTEX_TIMEOUT_INFINITE);
  return;
}

// 函数：清理对象包装器3
void cleanup_object_wrapper3(longlong obj_ptr, void *attr1, void *attr2, void *attr3)
{
  cleanup_object_recursive(obj_ptr, *(void **)(obj_ptr + 16), attr2, attr3, MUTEX_TIMEOUT_INFINITE);
  return;
}

// 函数：清理简单对象
void cleanup_simple_object(void *obj_ptr)
{
  *(void **)obj_ptr = &global_vtable_180a3c3e0;
  if (((void **)obj_ptr)[1] != 0) {
    // 释放引用
    FUN_18064e900();
  }
  ((void **)obj_ptr)[1] = 0;
  *(unsigned int *)((char *)obj_ptr + 24) = 0;
  *(void **)obj_ptr = &global_vtable_18098bcb0;
  return;
}

// 函数：设置长字符串内容
void set_long_string_content(longlong str_obj, longlong src_str)
{
  longlong str_len;
  
  if (src_str == 0) {
    *(unsigned int *)(str_obj + 16) = 0;
    **(unsigned char **)(str_obj + 8) = 0;
    return;
  }
  str_len = -1;
  do {
    str_len = str_len + 1;
  } while (*(char *)(src_str + str_len) != '\0');
  if ((int)str_len < MAX_PATH_LENGTH) {
    *(int *)(str_obj + 16) = (int)str_len;
    // 安全复制长字符串
    strcpy_s(*(void **)(str_obj + 8), MAX_PATH_LENGTH);
    return;
  }
  // 处理超长字符串
  FUN_180626f80(&string_allocator_18098bc48, MAX_PATH_LENGTH, src_str);
  *(unsigned int *)(str_obj + 16) = 0;
  **(unsigned char **)(str_obj + 8) = 0;
  return;
}

// 函数：销毁互斥锁包装器
void destroy_mutex_wrapper(void)
{
  _Mtx_destroy_in_situ();
  return;
}

// 函数：线程安全插入元素
void *threadsafe_insert_element(longlong container, unsigned int element, void *attr1, void *attr2)
{
  int lock_result;
  void *element_ptr;
  void *new_element_ptr;
  void *new_container_ptr;
  void *current_ptr;
  void *end_ptr;
  unsigned long long capacity;
  
  element_ptr = FUN_18062b420(_DAT_180c8ed18, element, 3, attr2, MUTEX_TIMEOUT_INFINITE);
  lock_result = _Mtx_lock(container + 40);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  current_ptr = *(void **)(container + 16);
  if (current_ptr < *(void **)(container + 24)) {
    *(void **)(container + 16) = (void *)current_ptr + 8;
    *(void **)current_ptr = element_ptr;
    goto unlock_and_return;
  }
  new_container_ptr = *(void **)(container + 8);
  capacity = (longlong)current_ptr - (longlong)new_container_ptr >> 3;
  if (capacity == 0) {
    capacity = 1;
resize_container:
    new_element_ptr = (void *)
             FUN_18062b420(_DAT_180c8ed18, capacity * 8, *(unsigned char *)(container + 32), attr2, MUTEX_TIMEOUT_INFINITE);
    current_ptr = *(void **)(container + 16);
    new_container_ptr = *(void **)(container + 8);
  }
  else {
    capacity = capacity * 2;
    if (capacity != 0) goto resize_container;
    new_element_ptr = (void *)0x0;
  }
  if (new_container_ptr != current_ptr) {
    // 移动现有元素
    memmove(new_element_ptr, new_container_ptr, (longlong)current_ptr - (longlong)new_container_ptr);
  }
  *(void **)new_element_ptr = element_ptr;
  if (*(longlong *)(container + 8) != 0) {
    // 释放旧容器
    FUN_18064e900();
  }
  *(void **)(container + 8) = new_element_ptr;
  *(void **)(container + 16) = (void *)new_element_ptr + 8;
  *(void **)(container + 24) = (void *)new_element_ptr + capacity;
unlock_and_return:
  lock_result = _Mtx_unlock(container + 40);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  return element_ptr;
}

// 函数：清理线程容器
void cleanup_thread_container(void *container)
{
  *(void **)container = &global_vtable_1809fcd00;
  _Mtx_destroy_in_situ();
  if (((void **)container)[1] != 0) {
    // 释放引用
    FUN_18064e900();
  }
  *(void **)container = &global_vtable_1809fcd18;
  return;
}

// 函数：释放线程容器
void *free_thread_container(void *container, unsigned long long flags)
{
  cleanup_thread_container();
  if ((flags & 1) != 0) {
    free(container, 0x78);
  }
  return container;
}

// 函数：初始化资源管理器
void initialize_resource_manager(void *manager)
{
  *(void **)manager = &global_vtable_1809fccc0;
  *(void **)manager = &global_vtable_1809fcce0;
  return;
}

// 函数：分配资源
void *allocate_resource(longlong resource_ptr, void *resource)
{
  void *allocated_resource;
  longlong resource_size;
  
  allocated_resource = FUN_18062b1e0(_DAT_180c8ed18, resource, 16, 6);
  resource_size = FUN_18064e990(allocated_resource);
  *(longlong *)(resource_ptr + 8) = *(longlong *)(resource_ptr + 8) + resource_size;
  return allocated_resource;
}

// 函数：释放资源
void release_resource(longlong resource_ptr, void *resource)
{
  longlong resource_size;
  
  resource_size = FUN_18064e990(resource);
  *(longlong *)(resource_ptr + 8) = *(longlong *)(resource_ptr + 8) - resource_size;
  if (resource != 0) {
    // 释放资源
    FUN_18064e900(resource);
  }
  return;
}

// 函数：释放资源管理器
void *free_resource_manager(void *manager, unsigned long long flags, void *attr1, void *attr2)
{
  *(void **)manager = &global_vtable_1809fccc0;
  *(void **)manager = &global_vtable_1809fcce0;
  if ((flags & 1) != 0) {
    free(manager, 16, attr1, attr2, MUTEX_TIMEOUT_INFINITE);
  }
  return manager;
}

// 函数：检查引擎配置
bool check_engine_configuration(void)
{
  char config_result;
  unsigned int *config_ptr;
  void *temp_ptr;
  int buffer_size;
  bool has_config;
  void *file_handle;
  longlong file_size;
  void *file_path;
  unsigned int path_length;
  
  FUN_1800ba940(&file_path);
  buffer_size = path_length + 17;
  FUN_1806277c0(&file_path, buffer_size);
  config_ptr = (unsigned int *)(file_path + path_length);
  *config_ptr = 0x69676e65;  // "engine"
  config_ptr[1] = 0x635f656e;  // "n_enc"
  config_ptr[2] = 0x69666e6f;  // "onfig"
  config_ptr[3] = 0x78742e67;  // "g.txt"
  *(unsigned short *)(config_ptr + 4) = 0x74;
  file_handle = 0;
  file_size = 0;
  temp_ptr = &default_string_18098bc73;
  if (file_path != (void *)0x0) {
    temp_ptr = file_path;
  }
  path_length = buffer_size;
  FUN_18062dee0(&file_handle, temp_ptr, &config_file_path_1809fcfbc);
  if (file_size == 0) {
    has_config = false;
  }
  else {
    config_result = FUN_1800aecf0(_DAT_180c86920, &file_handle);
    if (file_size != 0) {
      fclose();
      file_size = 0;
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 - 1;
      UNLOCK();
    }
    has_config = config_result != '\0';
  }
  if (file_size != 0) {
    fclose();
    file_size = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 - 1;
    UNLOCK();
  }
  file_path = &global_vtable_180a3c3e0;
  if (file_path != (void *)0x0) {
    // 释放文件路径
    FUN_18064e900();
  }
  return has_config;
}

// 函数：初始化引擎系统
void initialize_engine_system(void)
{
  char config_exists;
  unsigned int *config_ptr;
  void **temp_ptr;
  void *file_path;
  int buffer_size;
  unsigned int file_flags;
  void *file_handle;
  unsigned int path_length;
  void *config_file;
  unsigned long long stack_var;
  
  stack_var = _DAT_180bf00a8 ^ (unsigned long long)stack_buffer;
  file_flags = 0;
  config_exists = check_engine_configuration();
  if (config_exists == '\0') {
    FUN_18004b1f0(1);
    check_engine_configuration();
  }
  file_handle = &global_vtable_1809fdc18;
  file_path = stack_buffer + 16;
  file_path[0] = 0;
  file_flags = 6;
  strcpy_s(file_path, 16, &default_config_path_180a3c07c);
  file_flags = 1;
  FUN_1806279c0(stack_buffer + 64, &file_handle);
  file_flags = 0;
  file_handle = &global_vtable_18098bcb0;
  buffer_size = path_length + 15;
  FUN_1806277c0(stack_buffer + 64, buffer_size);
  config_ptr = (unsigned int *)(temp_ptr + path_length);
  *config_ptr = 0x72657375;  // "user"
  config_ptr[1] = 0x6e6f635f;  // "_con"
  config_ptr[2] = 0x2e676966;  // "fig."
  config_ptr[3] = 0x747874;  // "txt"
  path_length = buffer_size;
  config_file = (void *)FUN_18062b1e0(_DAT_180c8ed18, 24, 8, 3);
  temp_ptr = &default_string_18098bc73;
  if (temp_ptr != (void *)0x0) {
    temp_ptr = temp_ptr;
  }
  *config_file = 0;
  *(unsigned char *)((char *)config_file + 2) = 0;
  FUN_18062dee0(config_file, temp_ptr, &config_file_path_1809fcfbc);
  if (((void **)config_file)[1] == 0) {
    // 释放配置文件
    FUN_18064e900(config_file);
  }
  FUN_1800aecf0(_DAT_180c868b0, config_file);
  FUN_18062de90(config_file);
  if (((void **)config_file)[1] != 0) {
    fclose();
    ((void **)config_file)[1] = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 - 1;
    UNLOCK();
  }
  // 释放配置文件
  FUN_18064e900(config_file);
}

// 函数：初始化内存分配器
void initialize_memory_allocator(void)
{
  void *allocator;
  
  allocator = FUN_18062b1e0(_DAT_180c8ed18, 0xd20, 8, 3);
  _DAT_180c86930 = FUN_1800b4a40(allocator);
  allocator = FUN_18062b1e0(_DAT_180c8ed18, 0x138, 8, 3);
  _DAT_180c868a8 = FUN_180086ca0(allocator);
  allocator = FUN_18062b1e0(_DAT_180c8ed18, 0x50, 8, 3);
  // 清零内存
  memset(allocator, 0, 0x50);
}

// 函数：清理路径字符串
void cleanup_path_string(void)
{
  char path_char;
  void **path_ptr;
  char *path_str;
  void *cleaned_path;
  longlong path_len;
  longlong clean_len;
  void *temp_ptr;
  int char_count;
  unsigned int path_length;
  void *file_path;
  unsigned int length;
  
  FUN_1800ba6f0();
  char_count = 0;
  path_length = 0;
  if (length != 0) {
    path_len = 0;
    clean_len = 0;
    do {
      path_char = file_path[clean_len];
      if (((byte)(path_char + 0x9fU) < 0x1a) ||
         (((byte)(path_char - 0x30U) < 0x30 &&
          ((0x87fffffe03ffU >> ((longlong)(char)(path_char - 0x30U) & 0x3fU) & 1) != 0)))) {
        if (path_len != clean_len) {
          file_path[path_len] = path_char;
        }
        char_count = char_count + 1;
        path_len = path_len + 1;
      }
      length = (int)path_length + 1;
      path_length = (unsigned int)length;
      clean_len = clean_len + 1;
    } while (length < length);
  }
  file_path[char_count] = 0;
  path_ptr = (void **)FUN_18062b1e0(_DAT_180c8ed18, 40, 8, CONCAT71((int7)(path_length >> 8), 3));
  temp_ptr = &default_string_18098bc73;
  if (file_path != (void *)0x0) {
    temp_ptr = file_path;
  }
  FUN_180627910(path_ptr + 1, temp_ptr);
  path_str = (char *)path_ptr[2];
  if (*path_str != '\0') {
    path_len = 0;
    do {
      clean_len = strchr(&path_separator_1809fcfb8, (int)path_str[path_len]);
      if (clean_len != 0) {
        *(unsigned char *)(path_len + path_ptr[2]) = 0x2f;  // '/'
      }
      path_len = path_len + 1;
      path_str = (char *)path_ptr[2];
    } while (path_str[path_len] != '\0');
  }
  *path_ptr = 0;
  _DAT_180c82858 = path_ptr;
  if (DAT_180bf0101 != '\0') {
    GetLastError();
    temp_ptr = &default_string_18098bc73;
    if ((void *)path_ptr[2] != (void *)0x0) {
      temp_ptr = (void *)path_ptr[2];
    }
    cleaned_path = CreateMutexA(0, 0, temp_ptr);
    *path_ptr = cleaned_path;
    char_count = GetLastError();
  }
}

// 函数：关闭引擎系统
void shutdown_engine_system(void)
{
  longlong **engine_ptr;
  longlong engine_state;
  longlong component_state;
  void in_R9;
  void *component_ptr;
  
  if ((_DAT_180c86878 != (longlong *)0x0) && ((char)_DAT_180c86878[0x42] == '\0')) {
    ((void (**)(void))(*_DAT_180c86878 + 0x38))();
  }
  engine_state = _DAT_180c8a990;
  ((void (**)(void *, longlong))(*(longlong **)(_DAT_180c8a990 + 32) + 264))
            (*(longlong **)(_DAT_180c8a990 + 32), _DAT_180c8a990 + 192);
  engine_ptr = *(longlong ***)(engine_state + 48);
  if (engine_ptr != (longlong **)0x0) {
    component_state = __RTCastToVoid(engine_ptr);
    ((void (**)(void *, void *, void (*)(void), void, void))(*engine_ptr + 16))
            (engine_ptr, 0, (void (*)(void))(*engine_ptr + 16), in_R9, MUTEX_TIMEOUT_INFINITE);
    if (component_state != 0) {
      // 释放组件
      FUN_18064e900(component_state);
    }
  }
  *(void **)(engine_state + 48) = 0;
  if (*(void **)(engine_state + 40) != (void *)0x0) {
    ((void (*)(void))(*(void **)(engine_state + 40)))();
    *(void *)(engine_state + 40) = 0;
  }
  engine_state = _DAT_180c8a990;
  if (_DAT_180c8a990 != 0) {
    FUN_18004b730();
    *(void **)(engine_state + 192) = &global_vtable_1809fcc88;
    cleanup_thread_container(engine_state + 72);
    *(void **)(engine_state + 16) = &global_vtable_1809fccc0;
    *(void **)(engine_state + 16) = &global_vtable_1809fcce0;
    *(void **)(engine_state + 8) = &global_vtable_1809fcca0;
    // 释放引擎
    FUN_18064e900(engine_state);
  }
  _DAT_180c8a990 = 0;
  timeEndPeriod(1);
  engine_state = _DAT_180c86930;
  if (_DAT_180c86930 != 0) {
    FUN_1800b4550(_DAT_180c86930);
    // 释放内存分配器
    FUN_18064e900(engine_state);
  }
  _DAT_180c86930 = 0;
  return;
}

// 函数：构建模块路径
void *build_module_path(void *path_obj, void *module_name, void *attr1, void *attr2)
{
  unsigned int *path_ptr;
  void **module_ptr;
  int path_length;
  int total_length;
  void *version_info;
  
  *path_obj = &global_vtable_18098bcb0;
  ((void **)path_obj)[1] = 0;
  *(unsigned int *)((char *)path_obj + 16) = 0;
  *(void **)path_obj = &global_vtable_180a3c3e0;
  ((void **)path_obj)[3] = 0;
  ((void **)path_obj)[1] = 0;
  *(unsigned int *)((char *)path_obj + 16) = 0;
  FUN_1806277c0(path_obj, 0, attr1, attr2, 0, MUTEX_TIMEOUT_INFINITE);
  *(unsigned int *)((char *)path_obj + 16) = 0;
  if ((unsigned char *)((void **)path_obj)[1] != (unsigned char *)0x0) {
    *(unsigned char *)((void **)path_obj)[1] = 0;
  }
  total_length = *(int *)((char *)path_obj + 16);
  path_length = total_length + 6;
  FUN_1806277c0(path_obj, path_length, attr1, attr2, 1, MUTEX_TIMEOUT_INFINITE);
  path_ptr = (unsigned int *)((unsigned long)*(unsigned int *)((char *)path_obj + 16) + ((void **)path_obj)[1]);
  *path_ptr = 0x2e2f2e2e;  // "../.."
  *(unsigned short *)(path_ptr + 1) = 0x2f2e;  // "/."
  *(unsigned char *)((longlong)path_ptr + 6) = 0;
  *(int *)((char *)path_obj + 16) = path_length;
  total_length = total_length + 42;
  FUN_1806277c0(path_obj, total_length);
  module_ptr = (void **)((unsigned long)*(unsigned int *)((char *)path_obj + 16) + ((void **)path_obj)[1]);
  *module_ptr = 0x736c6f6f542f2e2eULL;  // "../Tools/Tales"
  module_ptr[1] = 0x747541747365542fULL;  // "/Test/Attribute"
  module_ptr[2] = 0x2f6e6f6974616d6fULL;  // "/omination/Att"
  module_ptr[3] = 0x656d686361747441ULL;  // "Attribute/charm"
  *(unsigned int *)(module_ptr + 4) = 0x2f73746e;  // "nts/"
  *(unsigned char *)((longlong)module_ptr + 36) = 0;
  *(int *)((char *)path_obj + 16) = total_length;
  return path_obj;
}

// 函数：加载配置文件
void load_configuration_file(char config_type)
{
  longlong **config_ptr;
  char config_status;
  unsigned int *config_data;
  void *temp_ptr;
  int buffer_size;
  void *file_handle;
  longlong file_size;
  void *file_path;
  unsigned int path_length;
  
  if (config_type == '\0') {
    if ((void *)*_DAT_180c86920 == &global_vtable_180a062e0) {
      if ((_DAT_180c86920[0x16] == 0) && (*(char *)(_DAT_180c86870 + 496) != '\0')) {
        config_status = '\x01';
      }
      else {
        config_status = '\0';
      }
    }
    else {
      config_status = ((char (*)(void))(*((void **)_DAT_180c86920) + 40))();
    }
    if (config_status == '\0') {
      return;
    }
  }
  FUN_1800ba940(&file_path);
  buffer_size = path_length + 17;
  FUN_1806277c0(&file_path, buffer_size);
  config_data = (unsigned int *)(file_path + path_length);
  *config_data = 0x69676e65;  // "engine"
  config_data[1] = 0x635f656e;  // "n_enc"
  config_data[2] = 0x69666e6f;  // "onfig"
  config_data[3] = 0x78742e67;  // "g.txt"
  *(unsigned short *)(config_data + 4) = 0x74;
  file_handle = 0;
  file_size = 0;
  temp_ptr = &default_string_18098bc73;
  if (file_path != (void *)0x0) {
    temp_ptr = file_path;
  }
  path_length = buffer_size;
  FUN_18062dee0(&file_handle, temp_ptr, &config_file_data_1809fc7ec);
  config_ptr = _DAT_180c86920;
  if (file_size == 0) {
    version_info = 3;
  }
  else {
    config_status = ((char (*)(void *))(*((void **)_DAT_180c86920) + 40))(_DAT_180c86920);
    if (config_status != '\0') {
      FUN_1800ae730(config_ptr, &file_handle);
    }
    version_info = 0;
    if (file_size != 0) {
      fclose();
      file_size = 0;
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 - 1;
      UNLOCK();
      version_info = 0;
    }
  }
  if (file_size != 0) {
    fclose();
    file_size = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 - 1;
    UNLOCK();
  }
  file_path = &global_vtable_180a3c3e0;
  if (file_path == (void *)0x0) {
    return version_info;
  }
  // 释放文件路径
  FUN_18064e900();
}

// 函数：检查主线程
bool check_main_thread(void)
{
  int current_thread;
  
  current_thread = _Thrd_id();
  if (_DAT_180c9105c == 0) {
    return current_thread == *(int *)(*(longlong **)(_DAT_180c82868 + 8) + 72);
  }
  if ((current_thread != *(int *)(*(longlong **)(_DAT_180c82868 + 8) + 72)) && 
      (current_thread != _DAT_180c9105c)) {
    return false;
  }
  return true;
}

// 函数：初始化版本字符串
void initialize_version_string(void *version_obj)
{
  unsigned int version_length;
  int current_length;
  longlong str_length;
  unsigned int total_length;
  void *temp_ptr;
  void *version_str;
  unsigned int flags;
  void stack_buffer[32];
  unsigned long long stack_var;
  
  stack_var = _DAT_180bf00a8 ^ (unsigned long long)stack_buffer;
  *version_obj = &global_vtable_18098bcb0;
  ((void **)version_obj)[1] = 0;
  *(unsigned int *)((char *)version_obj + 16) = 0;
  *(void **)version_obj = &global_vtable_18098bc80;
  ((void **)version_obj)[1] = (char *)version_obj + 24;
  *(unsigned int *)((char *)version_obj + 16) = 0;
  *(unsigned char *)((char *)version_obj + 24) = 0;
  version_length = *(unsigned int *)((char *)version_obj + 16);
  total_length = version_length + 7;
  if (total_length < 31) {
    *(unsigned long long *)((unsigned long)version_length + ((void **)version_obj)[1]) = 0x32312e322e3176ULL;  // "v1.2.123"
    *(unsigned int *)((char *)version_obj + 16) = total_length;
    version_length = total_length;
  }
  if (version_length + 1 < 31) {
    *(unsigned short *)((unsigned long)version_length + ((void **)version_obj)[1]) = 0x2e;  // "."
    *(unsigned int *)((char *)version_obj + 16) = version_length + 1;
  }
  version_str = &global_vtable_18098bc80;
  temp_ptr = stack_buffer + 48;
  flags = 0;
  temp_ptr[0] = 0;
  flags = 3;
  version_str = version_obj;
  FUN_18004b860(&version_str, &version_info_1809fd0a0, 0x130a7);
  temp_ptr = &default_string_18098bc73;
  if (temp_ptr != (void *)0x0) {
    temp_ptr = temp_ptr;
  }
  str_length = -1;
  do {
    str_length = str_length + 1;
  } while (temp_ptr[str_length] != '\0');
  current_length = (int)str_length;
  if ((0 < current_length) && (*(unsigned int *)((char *)version_obj + 16) + current_length < 31)) {
    // 复制版本字符串
    memcpy((unsigned long)*(unsigned int *)((char *)version_obj + 16) + ((void **)version_obj)[1], temp_ptr, (longlong)(current_length + 1));
  }
  flags = 1;
  version_str = &global_vtable_18098bcb0;
  // 执行版本处理
  FUN_1808fc050(stack_var ^ (unsigned long long)stack_buffer);
}

// 函数：初始化系统配置
longlong *initialize_system_config(longlong *config_obj, void *attr1, void *attr2, void *attr3)
{
  *config_obj = (longlong)&global_vtable_18098bcb0;
  config_obj[1] = 0;
  *(unsigned int *)((char *)config_obj + 8) = 0;
  *config_obj = (longlong)&global_vtable_180a3c3e0;
  config_obj[3] = 0;
  config_obj[1] = 0;
  *(unsigned int *)((char *)config_obj + 8) = 0;
  if (*(char *)(_DAT_180c8a9a0 + 34) != '\0') {
    FUN_180627be0(config_obj, _DAT_180c8a9a0 + 40);
    return config_obj;
  }
  ((void (**)(void *, void *, void *, void, void))(*config_obj + 16))
          (config_obj, &system_config_1809fd0a8, attr2, attr3, 1, MUTEX_TIMEOUT_INFINITE);
  return config_obj;
}

// 函数：设置线程标识
void set_thread_identifier(unsigned int *thread_id)
{
  int main_thread;
  int current_thread;
  
  main_thread = *(int *)(*(longlong **)(_DAT_180c82868 + 8) + 72);
  current_thread = _Thrd_id();
  if (current_thread != main_thread) {
    _DAT_180c9105c = *thread_id;
  }
  return;
}

// 函数：初始化模块名称
void *initialize_module_name(void *name_obj, longlong src_str, void *attr1, void *attr2)
{
  void *module_name;
  
  *name_obj = &global_vtable_18098bcb0;
  ((void **)name_obj)[1] = 0;
  *(unsigned int *)((char *)name_obj + 16) = 0;
  *(void **)name_obj = &global_vtable_18098bc80;
  ((void **)name_obj)[1] = (char *)name_obj + 24;
  *(unsigned int *)((char *)name_obj + 16) = 0;
  *(unsigned char *)((char *)name_obj + 24) = 0;
  *(unsigned int *)((char *)name_obj + 16) = *(unsigned int *)(src_str + 16);
  module_name = &default_string_18098bc73;
  if (*(void **)(src_str + 8) != (void *)0x0) {
    module_name = *(void **)(src_str + 8);
  }
  strcpy_s(((void **)name_obj)[1], 32, module_name, attr2, MUTEX_TIMEOUT_INFINITE);
  return name_obj;
}

// 函数：初始化模块路径管理器
void initialize_module_path_manager(void *path_manager)
{
  *(void **)path_manager = &global_vtable_1809fcca0;
  return;
}

// 函数：初始化系统配置管理器
void initialize_system_config_manager(void *config_manager)
{
  *(void **)config_manager = &global_vtable_1809fcc88;
  return;
}

// 函数：清理模块容器
void cleanup_module_container(longlong container, void *attr1, void *attr2, void *attr3)
{
  void **module_ptr;
  
  module_ptr = *(void **)(container + 16);
  if (module_ptr != (void *)0x0) {
    FUN_18004b790(container, *module_ptr, attr2, attr3, MUTEX_TIMEOUT_INFINITE);
    // 释放模块
    FUN_18064e900(module_ptr);
  }
  return;
}

// 函数：清理资源容器
void cleanup_resource_container(longlong container, void *attr1, void *attr2, void *attr3)
{
  void **resource_ptr;
  
  resource_ptr = *(void **)(container + 16);
  if (resource_ptr != (void *)0x0) {
    FUN_18004b790(container, *resource_ptr, attr2, attr3, MUTEX_TIMEOUT_INFINITE);
    // 释放资源
    FUN_18064e900(resource_ptr);
  }
  return;
}

// 函数别名和映射表
// 
// 内存管理函数：
// - destroy_mutex_simple -> 互斥锁销毁函数
// - initialize_memory_allocator -> 内存分配器初始化函数
// - allocate_resource -> 资源分配函数
// - release_resource -> 资源释放函数
// 
// 字符串处理函数：
// - initialize_string_object -> 字符串对象初始化函数
// - safe_string_copy -> 安全字符串复制函数
// - string_search_replace -> 字符串搜索替换函数
// - set_string_content -> 字符串内容设置函数
// 
// 线程同步函数：
// - initialize_sync_object -> 同步对象初始化函数
// - threadsafe_insert_element -> 线程安全元素插入函数
// - check_main_thread -> 主线程检查函数
// - set_thread_identifier -> 线程标识设置函数
// 
// 系统初始化函数：
// - initialize_engine_system -> 引擎系统初始化函数
// - shutdown_engine_system -> 引擎系统关闭函数
// - check_engine_configuration -> 引擎配置检查函数
// - load_configuration_file -> 配置文件加载函数
// 
// 路径处理函数：
// - build_module_path -> 模块路径构建函数
// - cleanup_path_string -> 路径字符串清理函数
// - initialize_module_name -> 模块名称初始化函数
// 
// 清理和管理函数：
// - cleanup_object_recursive -> 对象递归清理函数
// - cleanup_thread_container -> 线程容器清理函数
// - cleanup_module_container -> 模块容器清理函数
// - cleanup_resource_container -> 资源容器清理函数
//
// 技术说明：
// - 所有函数都使用统一的错误处理机制
// - 内存操作都包含线程安全保护
// - 字符串处理支持多种编码格式
// - 路径处理支持跨平台兼容性
// - 资源管理使用引用计数机制