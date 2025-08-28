#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part241.c - 核心引擎材质和纹理处理模块 (2个函数)
// 本文件包含2个函数，主要用于材质加载、纹理处理和资源管理

// 全局变量声明
extern undefined8 _DAT_180c8aa58;    // 材质管理器数据指针
extern undefined8 _DAT_180a04ee4;    // 材质字符串常量
extern undefined8 _DAT_180d48d24;    // 默认材质路径

/**
 * 处理材质加载和纹理资源管理
 * 遍历材质列表，加载纹理资源，处理材质参数配置
 * 
 * @param material_context 材质上下文指针
 * @param material_base 材质基础地址
 * @param material_count 材质数量
 */
void process_material_loading(undefined8 material_context, longlong material_base, int material_count)

{
  uint texture_id;
  int material_index;
  int texture_index;
  char *material_name;
  longlong *material_ptr;
  char *texture_path;
  char *texture_name;
  char *texture_ext;
  char *temp_path;
  longlong material_offset;
  longlong texture_offset;
  ulonglong loop_counter;
  undefined8 *texture_data;
  char *default_path;
  char *temp_name;
  longlong texture_size;
  longlong path_length;
  longlong *resource_ptr;
  bool is_match;
  undefined *stack_resource_1;
  longlong stack_offset_1;
  code *callback_func_1;
  code *callback_func_2;
  undefined *stack_resource_2;
  longlong stack_offset_2;
  uint stack_flags;
  undefined8 stack_config_1;
  undefined *stack_resource_3;
  longlong stack_offset_3;
  int stack_index;
  ulonglong stack_counter;
  undefined *stack_resource_4;
  longlong stack_offset_4;
  undefined4 stack_param_1;
  ulonglong stack_param_2;
  undefined *stack_resource_5;
  longlong stack_offset_5;
  undefined4 stack_param_3;
  ulonglong stack_param_4;
  longlong *stack_ptr_1;
  longlong *stack_ptr_2;
  longlong *stack_ptr_3;
  longlong *stack_ptr_4;
  longlong *stack_ptr_5;
  longlong *stack_ptr_6;
  longlong stack_value_1;
  undefined8 stack_config_2;
  
  stack_config_2 = 0xfffffffffffffffe;
  texture_size = 0;
  stack_ptr_6 = _DAT_180c8aa58;
  stack_value_1 = (longlong)material_count;
  resource_ptr = _DAT_180c8aa58;
  if (0 < material_count) {
    do {
      temp_name = (char *)0x0;
      texture_offset = texture_size * 0x3088 + material_base;
      material_name = "base";
      do {
        texture_path = material_name;
        material_name = texture_path + 1;
      } while (*material_name != '\0');
      texture_data = *(undefined8 **)(texture_offset + 0x30);
      if (texture_data != (undefined8 *)0x0) {
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
        texture_ext = material_name + (longlong)texture_ext;
        if (material_name < texture_ext) {
          path_length = (longlong)&DAT_180a04ee4 - (longlong)material_name;
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