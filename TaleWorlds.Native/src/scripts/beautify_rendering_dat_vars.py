#!/usr/bin/env python3
"""
美化03_rendering.c文件中的DAT_变量名
将逆向工程生成的DAT_变量名替换为有意义的名称
"""

import re

# 定义替换规则
REPLACEMENTS = {
    # 全局渲染系统状态管理器
    '_DAT_180c86938': 'GlobalRenderStateManager',
    '_DAT_180c86950': 'GlobalRenderConfigurationData',
    '_DAT_180c86920': 'GlobalRenderDisplaySettings',
    '_DAT_180c86890': 'GlobalRenderMemoryAllocator',
    '_DAT_180c86870': 'GlobalRenderBufferManager',
    
    # 渲染上下文相关
    '_DAT_180c8a9a8': 'RenderObjectContextPool',
    '_DAT_180c8a9b0': 'RenderObjectContextTracker',
    '_DAT_180c8ed08': 'RenderContextValidator',
    
    # 渲染系统配置
    '_DAT_180bf90b8': 'RenderSystemNameBuffer',
    '_DAT_180bf90c0': 'RenderSystemNameLength',
    '_DAT_180bf5b90': 'RenderSystemPathBuffer',
    '_DAT_180bf5b98': 'RenderSystemPathLength',
    
    # 渲染常量数据
    '_DAT_180be0000': 'RenderConstantDataTable',
    '_DAT_180a16c50': 'RenderDefaultConfigurationA',
    '_DAT_180a16c38': 'RenderDefaultConfigurationB',
    '_DAT_180a16c40': 'RenderDefaultConfigurationC',
    
    # 渲染标志和状态
    'DAT_180c82846': 'RenderSystemInitializedFlag',
    'DAT_180c82860': 'RenderSystemDebugEnabled',
    
    # 渲染资源数据
    '_DAT_180c86938': 'GlobalRenderStateManager',
}

def beautify_rendering_file():
    """美化03_rendering.c文件中的变量名"""
    
    input_file = '/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c'
    
    try:
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        original_content = content
        
        # 执行替换
        for old_name, new_name in REPLACEMENTS.items():
            # 使用正则表达式进行精确匹配，避免误替换
            pattern = r'\b' + re.escape(old_name) + r'\b'
            content = re.sub(pattern, new_name, content)
            
            # 同时处理注释中的引用
            pattern = r'//.*?' + re.escape(old_name) + r'.*?$'
            content = re.sub(pattern, f'// 原始变量名: {old_name} -> {new_name}', content, flags=re.MULTILINE)
        
        # 检查是否有变化
        if content != original_content:
            with open(input_file, 'w', encoding='utf-8') as f:
                f.write(content)
            
            print("成功美化03_rendering.c文件中的变量名")
            
            # 输出替换统计
            print("\n替换统计:")
            for old_name, new_name in REPLACEMENTS.items():
                old_count = original_content.count(old_name)
                new_count = content.count(new_name)
                if old_count > 0:
                    print(f"  {old_name} -> {new_name}: {old_count} 处")
        else:
            print("未找到需要替换的变量名")
            
    except FileNotFoundError:
        print(f"错误: 找不到文件 {input_file}")
    except Exception as e:
        print(f"处理文件时发生错误: {e}")

if __name__ == "__main__":
    beautify_rendering_file()