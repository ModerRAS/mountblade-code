#!/usr/bin/env python3
"""
美化03_rendering.c文件中的FUN_函数
将逆向工程生成的FUN_函数名替换为有意义的名称
"""

import re
import sys

# 函数映射表：将原始函数名映射到有意义的名称
FUNCTION_MAPPINGS = {
    # 渲染对象状态相关
    'FUN_1802b6e50': 'UpdateObjectStateProperty',
    'FUN_180627be0': 'CopyObjectStateData',
    'FUN_18023fa30': 'ProcessObjectStateData',
    'FUN_18062b1e0': 'CreateRenderResource',
    'FUN_18023fe10': 'GetResourceManager',
    'FUN_1802416d0': 'InitializeObjectState',
    'FUN_18025a7b0': 'ProcessRenderNode',
    'FUN_180271cf0': 'UpdateRenderContext',
    'FUN_1808fc050': 'CalculateRenderHash',
    'FUN_180639bf0': 'WriteContextData',
    'FUN_180272d60': 'InitializeRenderContext',
    'FUN_180639ec0': 'ReadContextData',
    'FUN_18025a940': 'FinalizeRenderNode',
    'FUN_180049910': 'ProcessRenderQueue',
    'FUN_180272e40': 'SetContextOffset',
    'FUN_1808fc838': 'RegisterRenderCallback',
    'FUN_180241f10': 'CleanupRenderResources',
    'FUN_180049cd0': 'RenderQueueProcessor',
    'FUN_180044a30': 'RenderQueueValidator',
}

def beautify_rendering_file(input_file):
    """美化渲染文件中的函数名"""
    try:
        # 读取文件内容
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        original_content = content
        
        # 替换函数调用
        for original_func, new_func in FUNCTION_MAPPINGS.items():
            # 替换函数调用
            content = re.sub(r'\b' + original_func + r'\b', new_func, content)
            
            # 替换函数声明
            content = re.sub(r'undefined\s+' + original_func + r';', 
                           f'undefined {new_func};', content)
            
            # 替换函数定义注释
            content = re.sub(r'// 函数:.*?' + original_func + r';', 
                           f'// 函数: undefined {new_func};', content)
        
        # 只有在内容有变化时才写入文件
        if content != original_content:
            with open(input_file, 'w', encoding='utf-8') as f:
                f.write(content)
            print(f"成功美化文件: {input_file}")
            return True
        else:
            print(f"文件无需修改: {input_file}")
            return False
            
    except Exception as e:
        print(f"处理文件时出错 {input_file}: {e}")
        return False

if __name__ == "__main__":
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    beautify_rendering_file(input_file)