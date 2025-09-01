#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import re

# 定义重命名规则
rename_rules = {
    'FUN_180443b80': 'SetRenderViewportParameters',
    'FUN_180443d10': 'UpdateRenderBuffers',
    'FUN_180443d70': 'CleanupRenderResources',
    'FUN_180443df0': 'CreateRenderTexture',
    'FUN_180443f80': 'BindRenderTexture',
    'FUN_180443ff0': 'ReleaseRenderTexture',
    'FUN_180444030': 'SetRenderScissorRect',
    'FUN_180444070': 'EnableRenderBlending',
    'FUN_180444100': 'SetRenderBlendMode',
    'FUN_180444200': 'CreateRenderShader',
    'FUN_180444280': 'CompileRenderShader',
    'FUN_1804442c0': 'LinkRenderShaderProgram',
    'FUN_1804442e0': 'ValidateRenderShader',
    'FUN_180444370': 'SetRenderShaderUniform',
    'FUN_1804443c0': 'BindRenderShaderAttribute'
}

def rename_functions_in_file(file_path):
    """重命名文件中的函数"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        original_content = content
        
        # 处理函数声明注释
        for old_name, new_name in rename_rules.items():
            # 更新注释行
            content = re.sub(
                f'// 函数: undefined {old_name};',
                f'// 函数: {new_name};',
                content
            )
            
            # 更新函数声明
            content = re.sub(
                f'undefined {old_name}',
                f'{new_name}',
                content
            )
            
            # 更新函数定义注释
            content = re.sub(
                f'// 函数: void {old_name}',
                f'// 函数: void {new_name}',
                content
            )
            
            # 更新函数定义
            content = re.sub(
                f'void {old_name}',
                f'void {new_name}',
                content
            )
            
            # 更新函数调用
            content = re.sub(
                f'{old_name}',
                f'{new_name}',
                content
            )
        
        # 如果内容有变化，则写入文件
        if content != original_content:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(content)
            print(f"成功重命名文件: {file_path}")
            return True
        else:
            print(f"文件无需修改: {file_path}")
            return False
            
    except Exception as e:
        print(f"处理文件时出错 {file_path}: {e}")
        return False

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    rename_functions_in_file(file_path)