#!/usr/bin/env python3
"""
为03_rendering.c文件中的undefined FUN_函数添加有意义的名称
"""

import re

# 定义函数映射
FUNCTION_MAPPINGS = {
    'FUN_18031c260': 'InitializeRenderPipeline',
    'FUN_18031c300': 'ConfigureRenderPipeline',
    'FUN_180317e00': 'CreateRenderPipeline',
    'FUN_18031ccb0': 'DestroyRenderPipeline',
    'FUN_18031d520': 'SetPipelineState',
    'FUN_1803216f0': 'GetPipelineState',
    'FUN_18033d370': 'ValidatePipelineState',
    'FUN_180321570': 'ResetPipelineState',
    'FUN_18033d250': 'OptimizePipelineState',
    'FUN_18033d080': 'FlushPipelineState',
    'FUN_18033d170': 'CachePipelineState',
    'FUN_18033ced0': 'BeginPipelineState',
    'FUN_18033cd80': 'EndPipelineState',
    'FUN_18033cc90': 'SubmitPipelineState',
    'FUN_180360210': 'InitializeRenderCommand',
    'FUN_180380510': 'ExecuteRenderCommand',
    'FUN_1803805e0': 'SubmitRenderCommand',
    'FUN_180380430': 'ResetRenderCommand',
    'FUN_1803802e0': 'ValidateRenderCommand',
    'FUN_1803800d0': 'CreateRenderCommand',
    'FUN_180380200': 'DestroyRenderCommand',
    'FUN_18037ac70': 'BeginRenderCommand',
    'FUN_18037ad00': 'EndRenderCommand',
    'FUN_180388290': 'QueueRenderCommand',
    'FUN_180387ed0': 'ProcessRenderCommand',
    'FUN_180388040': 'FlushRenderCommand',
    'FUN_180388120': 'CancelRenderCommand',
    'FUN_1803896b0': 'InitializeRenderBuffer',
    'FUN_18038a340': 'CreateRenderBuffer',
    'FUN_18038a630': 'DestroyRenderBuffer',
    'FUN_1804069d0': 'MapRenderBuffer',
    'FUN_180407960': 'UnmapRenderBuffer',
    'FUN_18041b4d0': 'UpdateRenderBuffer',
}

def process_file(file_path):
    """处理文件，替换函数名"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        original_content = content
        
        # 替换函数声明
        for old_func, new_func in FUNCTION_MAPPINGS.items():
            # 替换注释中的函数名
            content = re.sub(rf'// 函数: undefined {old_func};', 
                           f'// 函数: undefined {new_func};', content)
            
            # 替换函数声明
            content = re.sub(rf'undefined {old_func};', 
                           f'undefined {new_func};', content)
        
        # 写入文件
        if content != original_content:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(content)
            print(f"成功处理文件: {file_path}")
            return True
        else:
            print(f"文件无需修改: {file_path}")
            return False
            
    except Exception as e:
        print(f"处理文件时出错 {file_path}: {e}")
        return False

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    process_file(file_path)