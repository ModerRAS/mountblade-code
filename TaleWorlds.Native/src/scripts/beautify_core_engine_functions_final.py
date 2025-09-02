#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
批量美化核心引擎函数
用于重命名FUN_函数为语义化名称并添加文档注释
"""

import re

def beautify_core_engine_functions():
    """美化核心引擎文件中的FUN_函数"""
    
    # 需要美化的函数映射
    function_mappings = {
        'FUN_180199500': 'CoreEngineUpdateSystemConfiguration',
        'FUN_1801a2ea0': 'CoreEngineCleanupSystemResources',
        'FUN_180057830': 'CoreEngineReleaseMemoryPool',
        'FUN_1801b9920': 'CoreEngineShutdownSubsystem',
        'FUN_180319840': 'CoreEngineFinalizeComponents',
        'FUN_180196de0': 'CoreEngineResetSystemState',
        'FUN_1801ba4d0': 'CoreEngineFlushCommandBuffer',
        'FUN_18004b730': 'CoreEngineCleanupEventQueue'
    }
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 替换函数定义
    for old_name, new_name in function_mappings.items():
        # 查找函数定义
        pattern = rf'// 函数:.*{old_name}.*\n(.*\s)*{old_name}\([^)]*\)'
        
        def replace_func(match):
            func_def = match.group(0)
            lines = func_def.split('\n')
            
            # 生成新的函数定义
            new_lines = []
            for line in lines:
                if old_name in line:
                    # 添加注释
                    comment = f"/**\n"
                    comment += f" * @brief {new_name}\n"
                    comment += f" * \n"
                    comment += f" * 该函数执行核心引擎的关键功能操作\n"
                    comment += f" * \n"
                    comment += f" * @note 原始函数名为{old_name}\n"
                    comment += f" * @warning 此函数为系统关键组件，修改时需谨慎\n"
                    comment += f" */\n"
                    
                    # 替换函数名
                    new_line = line.replace(old_name, new_name)
                    new_lines.append(comment + new_line)
                else:
                    new_lines.append(line)
            
            return '\n'.join(new_lines)
        
        content = re.sub(pattern, replace_func, content)
        
        # 替换函数调用
        content = content.replace(old_name + '(', new_name + '(')
    
    # 写入文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("核心引擎函数美化完成")

if __name__ == "__main__":
    beautify_core_engine_functions()