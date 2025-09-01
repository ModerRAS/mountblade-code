#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
批量替换UI系统中的FUN_函数
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def replace_fun_functions(content):
    """替换FUN_函数"""
    
    # 虚拟函数表中的函数映射
    vtable_functions = {
        'FUN_180655f50': 'UIRegisterEventCallback',
        'FUN_1806563a0': 'UIProcessInputEvent',
        'FUN_1806561d0': 'UIHandleSystemEvent',
        'FUN_180656340': 'UIUpdateEventState',
        'FUN_180656410': 'UIDispatchMouseEvent',
        'FUN_1806565a0': 'UIProcessKeyboardEvent',
        'FUN_180656610': 'UIHandleFocusEvent',
        'FUN_1806566c0': 'UIManageAnimationEvent'
    }
    
    # 其他FUN_函数映射
    other_functions = {
        'FUN_180651d46': 'ExecuteUICleanupFunctionQueue',
        'FUN_1806526f0': 'InitializeUIEventSystem',
        'FUN_18065340f': 'SetupUIInputHandlers',
        'FUN_180655e60': 'ConfigureUIRenderTargets',
        'FUN_180656110': 'ProcessUIMessages',
        'FUN_180656160': 'HandleUIWindowEvents',
        'FUN_180657510': 'InitializeUIResources',
        'FUN_180657b00': 'SetupUIAnimationSystem',
        'FUN_180657dd0': 'ConfigureUITextureManager',
        'FUN_180657fa0': 'InitializeUIState',
        'FUN_18065bd4f': 'SetupUIVertexBuffers',
        'FUN_18065c8f0': 'InitializeUIIndexBuffers',
        'FUN_18065cb98': 'ConfigureUIShaderPrograms',
        'FUN_18065cbfa': 'PrepareUIRenderPipeline',
        'FUN_18065cc10': 'ExecuteUIDrawCall',
        'FUN_18065cf70': 'CalculateUIElementBounds',
        'FUN_18065dec1': 'ProcessUIClickEvents',
        'FUN_18065f057': 'HandleUIHoverEvents',
        'FUN_18065f1c2': 'ManageUIFocusStates',
        'FUN_18065f210': 'UpdateUICursorPosition',
        'FUN_180660051': 'InitializeUIFontSystem',
        'FUN_1806673f0': 'SetupUIThemeManager',
        'FUN_1806677e7': 'ConfigureUIStyleSystem',
        'FUN_1806687d4': 'ProcessUILayoutCalculations',
        'FUN_1806699e0': 'HandleUIResizeEvents',
        'FUN_18066c220': 'CreateUIWindowInstance',
        'FUN_18066c3b0': 'DestroyUIWindowInstance',
        'FUN_18066c4b8': 'ShowUIWindow',
        'FUN_18066d3e9': 'HideUIWindow',
        'FUN_18066d3f4': 'MoveUIWindow',
        'FUN_18066e300': 'InitializeUISystemCore',
        'FUN_18066e960': 'AllocateUIMemoryPool',
        'FUN_18066ea6a': 'GetUserInterfaceSystemStatus',
        'FUN_18066ea80': 'InitializeUserInterfaceMemoryPool',
        'FUN_18066eea0': 'ProcessUIInputEvents',
        'FUN_18066ef00': 'UpdateUIComponents',
        'FUN_18066ef60': 'CalculateUIDimensions',
        'FUN_18066efd0': 'GetUIElementSize',
        'FUN_18066f080': 'FindUIElementById',
        'FUN_18066f2e0': 'MeasureUIElement',
        'FUN_18066f3f4': 'ArrangeUIElements',
        'FUN_18066f715': 'RenderUIFrame',
        'FUN_18066f810': 'DrawUIControl',
        'FUN_18066f834': 'PaintUIElement',
        'FUN_18066f94e': 'UpdateUIAnimation',
        'FUN_1806704b6': 'ProcessUIMessage',
        'FUN_1806704db': 'HandleUICommand',
        'FUN_180670510': 'ExecuteUIAction',
        'FUN_180670526': 'TriggerUIEvent',
        'FUN_1806707c6': 'ValidateUILayout',
        'FUN_1806708fb': 'OptimizeUIRendering',
        'FUN_180670a01': 'CacheUIResources',
        'FUN_180670ac1': 'ManageUITextures',
        'FUN_180670aec': 'UpdateUIFontCache',
        'FUN_180670b00': 'ConfigureUIShaders',
        'FUN_180670b17': 'SetupUIVertexBuffers',
        'FUN_180670b1e': 'PrepareUIUniforms',
        'FUN_180670bda': 'InitializeUIInput',
        'FUN_180670c31': 'ProcessUIGestures'
    }
    
    # 内存管理相关函数
    memory_functions = {
        'FUN_18066e8f0': 'AllocateUIMemory',
        'FUN_180697e60': 'InitializeUIBuffer',
        'FUN_18066e7a0': 'ReleaseUIResources',
        'FUN_180698140': 'CleanupUIMemory',
        'FUN_180697ed0': 'FreeUIMemory',
        'FUN_18069c540': 'CopyUIMemory'
    }
    
    # 事件处理相关函数
    event_functions = {
        'FUN_18066d310': 'ProcessEventQueue',
        'FUN_18066d210': 'DispatchUIEvent',
        'FUN_18066d130': 'HandleUIEvent',
        'FUN_18066eea0': 'ProcessUIEventData',
        'FUN_18066d370': 'SendEventNotification',
        'FUN_18066e500': 'ProcessEventResult',
        'FUN_18066f080': 'FindEventTarget'
    }
    
    # 系统配置函数
    config_functions = {
        'FUN_1806725c0': 'InitializeUIConfig',
        'FUN_180672a50': 'SetupUIRenderingConfig',
        'FUN_180672da0': 'ConfigureUIInput',
        'FUN_180673360': 'SetupUIEventSystem',
        'FUN_180673970': 'InitializeUILayout',
        'FUN_180673e10': 'ConfigureUIThemes',
        'FUN_180673f50': 'SetupUIFonts',
        'FUN_180674040': 'InitializeUITextures',
        'FUN_180674120': 'ConfigureUIShaders',
        'FUN_1806742a0': 'SetupUIAnimation',
        'FUN_1806743e0': 'InitializeUIResources',
        'FUN_1806744d0': 'ConfigureUIMemory',
        'FUN_180674610': 'SetupUIThreading'
    }
    
    # 渲染相关函数
    render_functions = {
        'FUN_180676930': 'InitializeUIRenderer',
        'FUN_180677190': 'SetupUIRenderPipeline',
        'FUN_180676320': 'ConfigureUIVertexData',
        'FUN_1806760f0': 'SetupUIMatrixOperations',
        'FUN_180676490': 'InitializeUIRenderPipeline',
        'FUN_180676700': 'SetupUIInputHandling',
        'FUN_180677300': 'ConfigureUIInputSystem',
        'FUN_180676aa0': 'InitializeUILayoutConstraints',
        'FUN_180677530': 'SetupUILayoutSystem'
    }
    
    # 系统管理函数
    system_functions = {
        'FUN_1806780c0': 'InitializeUIResourceManager',
        'FUN_1806782c0': 'SetupUIStateUpdater',
        'FUN_180678430': 'InitializeUIEventDispatcher',
        'FUN_180678540': 'SetupUIRenderState',
        'FUN_180678810': 'InitializeUIMemoryManager',
        'FUN_1806789c0': 'SetupUIThreadManager',
        'FUN_180678b10': 'InitializeUISynchronization',
        'FUN_180678bc0': 'SetupUITaskScheduler',
        'FUN_180678e20': 'InitializeUIFontManager',
        'FUN_180678ef0': 'SetupUITextureManager',
        'FUN_180678fc0': 'InitializeUIShaderManager'
    }
    
    # 合并所有函数映射
    all_functions = {}
    all_functions.update(vtable_functions)
    all_functions.update(other_functions)
    all_functions.update(memory_functions)
    all_functions.update(event_functions)
    all_functions.update(config_functions)
    all_functions.update(render_functions)
    all_functions.update(system_functions)
    
    # 应用函数替换
    for old_name, new_name in all_functions.items():
        # 替换函数调用
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    
    return content

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("Usage: python replace_fun_functions.py <file_path>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    
    # 读取文件
    content = read_file(file_path)
    
    # 替换函数
    replaced_content = replace_fun_functions(content)
    
    # 写入文件
    write_file(file_path, replaced_content)
    
    print(f"Successfully replaced FUN_ functions in {file_path}")

if __name__ == "__main__":
    main()