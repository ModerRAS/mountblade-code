#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
UI系统代码美化脚本
用于处理04_ui_system.c文件中的变量名和函数名
"""

import re
import os

def beautify_ui_system():
    """美化UI系统文件"""
    input_file = "04_ui_system.c"
    output_file = "04_ui_system_beautified.c"
    
    print(f"开始美化UI系统文件...")
    print(f"输入文件: {input_file}")
    print(f"输出文件: {output_file}")
    
    # 读取原始文件
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    original_content = content
    
    # 1. 删除所有中文注释和文本
    print("正在删除中文注释...")
    content = re.sub(r'//.*[\u4e00-\u9fff].*$', '', content, flags=re.MULTILINE)
    content = re.sub(r'^\s*[\u4e00-\u9fff].*$', '', content, flags=re.MULTILINE)
    content = re.sub(r'^\s*$\n', '', content, flags=re.MULTILINE)  # 删除空行
    
    # 2. 处理FUN_函数名
    print("正在处理FUN_函数名...")
    
    # UI数据管理相关函数 (180705xxx)
    content = re.sub(r'FUN_180705180\b', 'ProcessUIDataWrite', content)
    content = re.sub(r'FUN_180705210\b', 'InitializeUIContext', content)
    content = re.sub(r'FUN_1807054a0\b', 'ProcessUIDataRead', content)
    content = re.sub(r'FUN_180705530\b', 'UpdateUIState', content)
    content = re.sub(r'FUN_180705545\b', 'ProcessUIBufferOperation', content)
    content = re.sub(r'FUN_180705616\b', 'ValidateUISystem', content)
    content = re.sub(r'FUN_1807056b0\b', 'GetUIData', content)
    content = re.sub(r'FUN_1807056f0\b', 'SetUIData', content)
    content = re.sub(r'FUN_180705870\b', 'ProcessUIRenderData', content)
    content = re.sub(r'FUN_1807058d0\b', 'CleanupUIResources', content)
    content = re.sub(r'FUN_180705980\b', 'ProcessUIComponentData', content)
    
    # UI事件处理相关函数 (180706xxx)
    content = re.sub(r'FUN_1807069e0\b', 'ProcessUIEvent', content)
    content = re.sub(r'FUN_180706b30\b', 'ProcessUIEventBuffer', content)
    content = re.sub(r'FUN_180706b61\b', 'UpdateUIEventState', content)
    content = re.sub(r'FUN_180706ba7\b', 'InitializeUIEventSystem', content)
    
    # UI渲染相关函数 (180707xxx)
    content = re.sub(r'FUN_180707200\b', 'ProcessUIRendering', content)
    content = re.sub(r'FUN_1807072c0\b', 'ProcessUIRenderBuffer', content)
    content = re.sub(r'FUN_18070737d\b', 'CalculateUIRenderData', content)
    content = re.sub(r'FUN_180707457\b', 'ProcessUITextureData', content)
    content = re.sub(r'FUN_1807074b0\b', 'UpdateUITexture', content)
    
    # UI动画相关函数 (1807075xx)
    content = re.sub(r'FUN_1807075c0\b', 'ProcessUIAnimation', content)
    content = re.sub(r'FUN_180707950\b', 'UpdateUIAnimationState', content)
    
    # UI布局相关函数 (1807079xx)
    content = re.sub(r'FUN_180707988\b', 'ProcessUILayout', content)
    content = re.sub(r'FUN_1807079df\b', 'GetUILayoutData', content)
    
    # 处理其他FUN_函数 - 按功能分类
    # UI组件相关函数 (18069exxx)
    content = re.sub(r'FUN_18069e620\b', 'ProcessUIComponentBlend', content)
    content = re.sub(r'FUN_18069e7c0\b', 'UpdateUIComponentContext', content)
    content = re.sub(r'FUN_18069ef30\b', 'ProcessUIComponentValidation', content)
    content = re.sub(r'FUN_18069f2f0\b', 'InitializeUIComponent', content)
    content = re.sub(r'FUN_18069f9c0\b', 'ProcessUIComponentDataTransfer', content)
    
    # UI渲染上下文相关函数 (180701xxx-180704xxx)
    content = re.sub(r'FUN_180701330\b', 'ProcessUIRenderContextUpdate', content)
    content = re.sub(r'FUN_180703510\b', 'UpdateUIRenderContextData', content)
    content = re.sub(r'FUN_180703a80\b', 'ValidateUIRenderContext', content)
    content = re.sub(r'FUN_1807042f0\b', 'ProcessUIRenderContextOperation', content)
    content = re.sub(r'FUN_1807048a0\b', 'CalculateUIRenderContextMetrics', content)
    
    # 3. 处理local_变量名
    print("正在处理local_变量名...")
    content = re.sub(r'\blocal_([0-9]+)\b', r'uiLocalVar\1', content)
    
    # 4. 处理UNK_变量名
    print("正在处理UNK_变量名...")
    content = re.sub(r'\bUNK_180([0-9a-f]+)\b', r'uiUnknown\1', content)
    
    # 5. 处理s_静态变量名
    print("正在处理s_静态变量名...")
    content = re.sub(r'\bs_(DirectX11Device|RenderContext|TextureManager|FontRenderer|ShaderManager|AnimationManager|LayoutManager|EventQueue|ComponentPool|ResourcePool)_180([0-9a-f]+)\b', r'uiSystem\1\2', content)
    content = re.sub(r'\bs_([0-9a-f]+)\b', r'uiStatic\1', content)
    
    # 6. 处理DAT_数据变量名
    print("正在处理DAT_数据变量名...")
    content = re.sub(r'\bDAT_180([0-9a-f]+)\b', r'uiData\1', content)
    content = re.sub(r'\b_DAT_180([0-9a-f]+)\b', r'uiData\1', content)
    
    # 7. 处理栈变量名
    print("正在处理栈变量名...")
    content = re.sub(r'\ba(f|i|u|l|p)Stack_([0-9a-f]+)\b', r'stack\1\2', content)
    
    # 8. 统计替换数量
    print("正在统计替换数量...")
    
    fun_replaced = len(re.findall(r'ProcessUI|InitializeUI|UpdateUI|ValidateUI|GetUI|SetUI|CleanupUI', content))
    local_replaced = len(re.findall(r'uiLocalVar', content))
    unk_replaced = len(re.findall(r'uiUnknown', content))
    s_replaced = len(re.findall(r'uiSystem', content))
    dat_replaced = len(re.findall(r'uiData', content))
    
    # 9. 写入输出文件
    with open(output_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"\n美化完成！")
    print(f"输出文件: {output_file}")
    print(f"\n替换统计:")
    print(f"- FUN_函数名: {fun_replaced} 个")
    print(f"- local_变量名: {local_replaced} 个")
    print(f"- UNK_变量名: {unk_replaced} 个")
    print(f"- s_静态变量名: {s_replaced} 个")
    print(f"- DAT_数据变量名: {dat_replaced} 个")
    print(f"- 总计: {fun_replaced + local_replaced + unk_replaced + s_replaced + dat_replaced} 个")

if __name__ == "__main__":
    beautify_ui_system()