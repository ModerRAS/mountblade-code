#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
批量翻译01_initialization_part011.c文件中的函数
"""

import re

def translate_function(content, old_name, new_name, callback=False):
    """
    翻译单个函数
    """
    # 提取函数体
    pattern = rf'// 函数: {old_name}\(void\)\n{old_name}\(void\)\n\n\{{(.*?)\n\}}'
    match = re.search(pattern, content, re.DOTALL)
    
    if not match:
        return content
    
    function_body = match.group(1)
    
    # 确定变量类型
    callback_var = "void *component_callback" if callback else "longlong component_flags"
    callback_init = "component_callback = get_component_callback_typeXX();" if callback else "component_flags = 0"
    
    # 替换函数体
    translated_body = f'''  char is_initialized;
  void **system_root;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  {callback_var};
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((longlong)system_root[1] + 0x19);
  {callback_init.replace("XX", new_name.split("type")[-1])}
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\\0') {{
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_{new_name.split("type")[-1].upper()}, 0x10);
    if (compare_result < 0) {{
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }}
    else {{
      next_node = (void **)*current_node;
    }}
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((longlong)next_node + 0x19);
  }}
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_{new_name.split("type")[-1].upper()}, parent_node + 4, 0x10), compare_result < 0)) {{
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }}
  
  // 设置组件属性
  parent_node[6] = 0xXXXXXXXXXXXXXXXX;  // 组件唯一标识符高64位
  parent_node[7] = 0xXXXXXXXXXXXXXXXX;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_{new_name.split("type")[-1].upper()};  // 组件虚函数表
  parent_node[9] = 0;                     // 组件优先级
  parent_node[10] = {"component_callback" if callback else "component_flags"};      // {"组件回调函数" if callback else "组件标志"}
  return;'''
    
    # 替换整个函数
    new_function = f'// 函数: {new_name}\n{new_name}(void)\n\n{{\n{translated_body}\n}}'
    return re.sub(pattern, new_function, content, flags=re.DOTALL)

def main():
    # 读取文件
    with open('/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/pretty/01_initialization/01_initialization_part011.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义需要翻译的函数列表
    functions_to_translate = [
        ('void FUN_180040be0(void)', 'register_game_system_type11', True),
        ('void FUN_180040ce0(void)', 'register_game_system_type12', True),
        ('void FUN_180040de0(void)', 'register_game_system_type13', True),
        ('void FUN_180040ee0(void)', 'register_game_system_type14', True),
        ('void FUN_180040fe0(void)', 'register_game_system_type15', True),
        ('void FUN_1800410e0(void)', 'register_game_system_type16', False),
        ('void FUN_1800411e0(void)', 'register_game_system_type17', True),
        ('void FUN_1800412e0(void)', 'register_game_system_type18', False),
        ('void FUN_1800413e0(void)', 'register_game_system_type19', True),
        ('void FUN_1800414e0(void)', 'register_game_system_type20', False),
        ('void FUN_1800415e0(void)', 'register_game_system_type21', False),
        ('void FUN_1800416e0(void)', 'register_game_system_type22', False),
        ('void FUN_1800417e0(void)', 'register_game_system_type23', False),
        ('void FUN_180041af0(void)', 'register_game_system_type24', False),
        ('void FUN_180041bf0(void)', 'register_game_system_type25', False),
    ]
    
    # 逐个翻译函数
    for old_name, new_name, callback in functions_to_translate:
        content = translate_function(content, old_name, new_name, callback)
    
    # 写回文件
    with open('/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/pretty/01_initialization/01_initialization_part011.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("批量翻译完成！")

if __name__ == '__main__':
    main()