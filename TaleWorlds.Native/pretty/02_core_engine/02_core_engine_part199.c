#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part199.c - 核心引擎模块第199部分 - 包含2个函数

// 函数: void create_platform_object(uint64_t param_1, uint64_t param_2)
// 功能: 创建平台对象，分配内存并初始化相关结构
// 参数: 
//   param_1 - 平台对象类型标识符
//   param_2 - 平台对象配置参数
void create_platform_object(uint64_t param_1, uint64_t param_2)

{
  int64_t *object_ptr;
  int32_t temp_var;
  uint64_t *memory_block;
  int32_t *string_buffer;
  uint64_t *object_data;
  uint64_t flag_value;
  void *stack_ptr_80;
  int32_t *stack_ptr_78;
  int32_t stack_value_70;
  uint64_t stack_value_68;
  
  // 分配内存块，大小为0x98字节，对齐为8字节
  memory_block = (uint64_t *)allocate_memory(_memory_pool_address, 0x98, 8, 3);
  flag_value = 0xfffffffffffffffe;
  object_data = memory_block;
  
  // 初始化对象数据
  initialize_object_data(memory_block, param_2, param_1);
  
  // 设置对象虚函数表指针
  *object_data = &platform_object_vtable;
  object_ptr = object_data + 0xf;
  *object_ptr = (int64_t)&platform_object_methods;
  
  // 初始化对象属性
  object_data[0x10] = 0;
  *(int32_t *)(object_data + 0x11) = 0;
  *object_ptr = (int64_t)&platform_object_interface;
  object_data[0x12] = 0;
  object_data[0x10] = 0;
  *(int32_t *)(object_data + 0x11) = 0;
  *(int8_t *)(object_data + 0xe) = 0;
  
  // 调用对象初始化方法
  (**(code **)(*object_ptr + 0x10))(object_ptr, &platform_object_config);
  
  // 准备错误消息字符串
  stack_ptr_80 = &platform_object_interface;
  stack_value_68 = 0;
  stack_ptr_78 = (int32_t *)0x0;
  stack_value_70 = 0;
  
  // 分配字符串缓冲区
  string_buffer = (int32_t *)allocate_string_buffer(_memory_pool_address, 0x1f, 0x13);
  *(int8_t *)string_buffer = 0;
  stack_ptr_78 = string_buffer;
  
  // 获取字符串句柄
  temp_var = get_string_handle(string_buffer);
  stack_value_68 = CONCAT44(stack_value_68._4_4_, temp_var);
  
  // 设置错误消息内容: "Part Bake Frame Level Current"
  *string_buffer = 0x74726150;  // "Ptra"
  string_buffer[1] = 0x206c6169;  // "ial "
  string_buffer[2] = 0x656b6142;  // "Bake"
  string_buffer[3] = 0x726f4620;  // " Fro"
  *(uint64_t *)(string_buffer + 4) = 0x746e657272754320;  // "e Current "
  string_buffer[6] = 0x76654c20;  // " Leve"
  *(int16_t *)(string_buffer + 7) = 0x6c65;  // "el"
  *(int8_t *)((int64_t)string_buffer + 0x1e) = 0;
  stack_value_70 = 0x1e;
  
  // 调用对象方法设置错误消息
  set_object_error_message(memory_block, &stack_ptr_80, memory_block + 0xe, 0xb, flag_value);
  
  stack_ptr_80 = &platform_object_interface;
                    // WARNING: Subroutine does not return
  // 释放字符串缓冲区并退出
  release_string_buffer(string_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void initialize_engine_object(int64_t *param_1)
// 功能: 初始化引擎对象，设置必要的配置和回调函数
// 参数: 
//   param_1 - 引擎对象指针的指针
void initialize_engine_object(int64_t *param_1)

{
  uint64_t config_value;
  int64_t base_address;
  int64_t *engine_object;
  int64_t *stack_ptr_8;
  
  // 获取引擎配置基址
  base_address = _engine_config_address;
  stack_ptr_8 = param_1;
  
  // 分配引擎对象内存，大小为200字节，对齐为8字节
  engine_object = (int64_t *)allocate_memory(_memory_pool_address, 200, 8, 3, 0xfffffffffffffffe);
  stack_ptr_8 = engine_object;
  
  // 初始化引擎对象基础结构
  initialize_engine_base(engine_object);
  
  // 设置引擎对象虚函数表
  *engine_object = (int64_t)&engine_object_vtable;
  engine_object[0x18] = base_address + 0x38;
  engine_object[3] = -3;
  
  // 调用引擎对象初始化方法
  (**(code **)(*engine_object + 0x28))(engine_object);
  
  // 获取引擎配置值
  config_value = _engine_config_value;
  stack_ptr_8 = engine_object;
  
  // 再次调用初始化方法（可能是不同的初始化阶段）
  (**(code **)(*engine_object + 0x28))(engine_object);
  
  // 注册引擎对象回调
  register_engine_callback(config_value, &stack_ptr_8);
                    // WARNING: Could not recover jumptable at 0x00018017ef34. Too many branches
                    // WARNING: Treating indirect jump as call
  // 调用引擎对象启动方法
  (**(code **)(*engine_object + 0x38))(engine_object);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address


// 本文件中使用的全局变量和函数引用：
// _memory_pool_address - 内存池地址
// allocate_memory - 内存分配函数
// initialize_object_data - 对象数据初始化函数
// platform_object_vtable - 平台对象虚函数表
// platform_object_methods - 平台对象方法表
// platform_object_interface - 平台对象接口
// platform_object_config - 平台对象配置
// allocate_string_buffer - 字符串缓冲区分配函数
// get_string_handle - 获取字符串句柄函数
// set_object_error_message - 设置对象错误消息函数
// release_string_buffer - 释放字符串缓冲区函数
// _engine_config_address - 引擎配置地址
// initialize_engine_base - 引擎基础初始化函数
// engine_object_vtable - 引擎对象虚函数表
// _engine_config_value - 引擎配置值
// register_engine_callback - 注册引擎回调函数