#!/usr/bin/env python3
"""
UI系统代码美化脚本
专门用于重命名04_ui_system.c文件中的FUN_函数和变量
"""

import re
import sys

def read_file(filepath):
    """读取文件内容"""
    try:
        with open(filepath, 'r', encoding='utf-8') as f:
            return f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return None

def write_file(filepath, content):
    """写入文件内容"""
    try:
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write(content)
        return True
    except Exception as e:
        print(f"写入文件失败: {e}")
        return False

def extract_function_signatures(content):
    """提取函数签名"""
    # 匹配函数定义模式
    func_pattern = r'FUN_[0-9a-f]{8}\([^)]*\)'
    functions = re.findall(func_pattern, content)
    return list(set(functions))  # 去重

def create_ui_function_mapping():
    """创建UI系统函数映射"""
    return {
        # UI系统初始化相关
        'FUN_180194a50': 'InitializeUIComponent',
        'FUN_18062b1e0': 'AllocateUIMemory',
        'FUN_180194a80': 'ProcessUIEvent',
        'FUN_180194ab0': 'UpdateUILayout',
        'FUN_180194ae0': 'RenderUIElement',
        'FUN_180194b10': 'HandleUIInput',
        'FUN_180194b40': 'DestroyUIComponent',
        'FUN_180194b70': 'ValidateUIState',
        'FUN_180194ba0': 'SynchronizeUIData',
        'FUN_180194bd0': 'OptimizeUIPerformance',
        
        # 窗口管理相关
        'FUN_180194c00': 'CreateWindow',
        'FUN_180194c30': 'ShowWindow',
        'FUN_180194c60': 'HideWindow',
        'FUN_180194c90': 'ResizeWindow',
        'FUN_180194cc0': 'MoveWindow',
        'FUN_180194cf0': 'FocusWindow',
        'FUN_180194d20': 'CloseWindow',
        'FUN_180194d50': 'MinimizeWindow',
        'FUN_180194d80': 'MaximizeWindow',
        'FUN_180194db0': 'RestoreWindow',
        
        # 渲染相关
        'FUN_180194de0': 'DrawUIText',
        'FUN_180194e10': 'DrawUIImage',
        'FUN_180194e40': 'DrawUIRectangle',
        'FUN_180194e70': 'DrawUICircle',
        'FUN_180194ea0': 'DrawUILine',
        'FUN_180194ed0': 'UpdateUIVertexBuffer',
        'FUN_180194f00': 'UpdateUIIndexBuffer',
        'FUN_180194f30': 'ApplyUIShader',
        'FUN_180194f60': 'BindUITexture',
        'FUN_180194f90': 'FlushUIRenderQueue',
        
        # 事件处理相关
        'FUN_180194fc0': 'RegisterUIEventHandler',
        'FUN_180194ff0': 'UnregisterUIEventHandler',
        'FUN_180195020': 'DispatchUIEvent',
        'FUN_180195050': 'ProcessUIMessage',
        'FUN_180195080': 'HandleUIClick',
        'FUN_1801950b0': 'HandleUIHover',
        'FUN_1801950e0': 'HandleUIScroll',
        'FUN_180195110': 'HandleUIDrag',
        'FUN_180195140': 'HandleUIKeyPress',
        'FUN_180195170': 'HandleUITouch',
        
        # 布局相关
        'FUN_1801951a0': 'CalculateUILayout',
        'FUN_1801951d0': 'MeasureUIElement',
        'FUN_180195200': 'ArrangeUIElement',
        'FUN_180195230': 'UpdateUILayoutConstraints',
        'FUN_180195260': 'ValidateUILayout',
        'FUN_180195290': 'OptimizeUILayout',
        'FUN_1801952c0': 'ResizeUILayout',
        'FUN_1801952f0': 'ReflowUILayout',
        'FUN_180195320': 'InvalidateUILayout',
        'FUN_180195350': 'ValidateUILayoutCache',
        
        # 动画相关
        'FUN_180195380': 'StartUIAnimation',
        'FUN_1801953b0': 'StopUIAnimation',
        'FUN_1801953e0': 'PauseUIAnimation',
        'FUN_180195410': 'ResumeUIAnimation',
        'FUN_180195440': 'UpdateUIAnimation',
        'FUN_180195470': 'CreateUITransition',
        'FUN_1801954a0': 'DestroyUITransition',
        'FUN_1801954d0': 'UpdateUITransition',
        'FUN_180195500': 'CompleteUITransition',
        'FUN_180195530': 'CancelUITransition',
        
        # 样式相关
        'FUN_180195560': 'ApplyUIStyle',
        'FUN_180195590': 'UpdateUITheme',
        'FUN_1801955c0': 'ParseUIStyle',
        'FUN_1801955f0': 'ValidateUIStyle',
        'FUN_180195620': 'InheritUIStyle',
        'FUN_180195650': 'OverrideUIStyle',
        'FUN_180195680': 'ResetUIStyle',
        'FUN_1801956b0': 'CacheUIStyle',
        'FUN_1801956e0': 'FlushUIStyleCache',
        'FUN_180195710': 'OptimizeUIStyle',
        
        # 数据管理相关
        'FUN_180195740': 'CreateUIDataContext',
        'FUN_180195770': 'UpdateUIDataContext',
        'FUN_1801957a0': 'BindUIData',
        'FUN_1801957d0': 'UnbindUIData',
        'FUN_180195800': 'ValidateUIData',
        'FUN_180195830': 'SynchronizeUIData',
        'FUN_180195860': 'CacheUIData',
        'FUN_180195890': 'FlushUIDataCache',
        'FUN_1801958c0': 'OptimizeUIData',
        'FUN_1801958f0': 'CleanupUIData',
        
        # 输入处理相关
        'FUN_180195920': 'ProcessUIMouseInput',
        'FUN_180195950': 'ProcessUIKeyboardInput',
        'FUN_180195980': 'ProcessUITouchInput',
        'FUN_1801959b0': 'ProcessUIGesture',
        'FUN_1801959e0': 'MapUIInputEvent',
        'FUN_180195a10': 'TranslateUIInput',
        'FUN_180195a40': 'ValidateUIInput',
        'FUN_180195a70': 'FilterUIInput',
        'FUN_180195aa0': 'RouteUIInput',
        'FUN_180195ad0': 'HandleUIInputFocus',
        
        # 资源管理相关
        'FUN_180195b00': 'LoadUIResource',
        'FUN_180195b30': 'UnloadUIResource',
        'FUN_180195b60': 'CacheUIResource',
        'FUN_180195b90': 'FindUIResource',
        'FUN_180195bc0': 'ValidateUIResource',
        'FUN_180195bf0': 'OptimizeUIResource',
        'FUN_180195c20': 'ManageUIResourcePool',
        'FUN_180195c50': 'UpdateUIResourceReferences',
        'FUN_180195c80': 'CleanupUIResources',
        'FUN_180195cb0': 'PreloadUIResources',
        
        # 通用工具函数
        'FUN_180195ce0': 'ConvertUIToScreenCoordinates',
        'FUN_180195d10': 'ConvertScreenToUICoordinates',
        'FUN_180195d40': 'CalculateUIDistance',
        'FUN_180195d70': 'ValidateUIBounds',
        'FUN_180195da0': 'ClipUIRect',
        'FUN_180195dd0': 'IntersectUIRect',
        'FUN_180195e00': 'UnionUIRect',
        'FUN_180195e30': 'InflateUIRect',
        'FUN_180195e60': 'DeflateUIRect',
        'FUN_180195e90': 'OffsetUIRect',
        
        # 状态管理相关
        'FUN_180195ec0': 'GetUIState',
        'FUN_180195ef0': 'SetUIState',
        'FUN_180195f20': 'UpdateUIState',
        'FUN_180195f50': 'ResetUIState',
        'FUN_180195f80': 'SaveUIState',
        'FUN_180195fb0': 'RestoreUIState',
        'FUN_180195fe0': 'ValidateUIState',
        'FUN_180196010': 'SynchronizeUIState',
        'FUN_180196040': 'CacheUIState',
        'FUN_180196070': 'FlushUIStateCache',
        
        # 性能优化相关
        'FUN_1801960a0': 'OptimizeUIRendering',
        'FUN_1801960d0': 'OptimizeUILayout',
        'FUN_180196100': 'OptimizeUIEvents',
        'FUN_180196130': 'OptimizeUIAnimations',
        'FUN_180196160': 'OptimizeUIResources',
        'FUN_180196190': 'ProfileUIPerformance',
        'FUN_1801961c0': 'MeasureUIFrameTime',
        'FUN_1801961f0': 'CalculateUIFPS',
        'FUN_180196220': 'OptimizeUIMemory',
        'FUN_180196250': 'GarbageCollectUI',
        
        # 调试相关
        'FUN_180196280': 'DebugUIElement',
        'FUN_1801962b0': 'DebugUILayout',
        'FUN_1801962e0': 'DebugUIEvent',
        'FUN_180196310': 'DebugUIRender',
        'FUN_180196340': 'DebugUIAnimation',
        'FUN_180196370': 'DebugUIInput',
        'FUN_1801963a0': 'DebugUIData',
        'FUN_1801963d0': 'DebugUIResource',
        'FUN_180196400': 'DebugUIPerformance',
        'FUN_180196430': 'DumpUIState',
    }

def create_ui_variable_mapping():
    """创建UI系统变量映射"""
    return {
        # 堆栈变量
        'alStack_30': 'uiComponentStack',
        'uStackX_8': 'uiLocalDataArray',
        'localData': 'uiLocalData',
        'targetAddress': 'uiTargetAddress',
        'pcleanupCounter': 'cleanupCounter',
        
        # UI组件变量
        'DAT_1809fe070': 'UIConfigurationData',
        'UNK_1809fe070': 'UIConfigurationPointer',
        
        # 系统状态变量
        'uVar1': 'uiSystemState',
        'uVar2': 'uiRenderState',
        'uVar3': 'uiInputState',
        'uVar4': 'uiAnimationState',
        'uVar5': 'uiLayoutState',
        'uVar6': 'uiResourceState',
        'uVar7': 'uiEventState',
        'uVar8': 'uiThemeState',
        'uVar9': 'uiFocusState',
        'uVar10': 'uiActiveState',
        
        # 缓冲区变量
        'buffer1': 'uiVertexBuffer',
        'buffer2': 'uiIndexBuffer',
        'buffer3': 'uiUniformBuffer',
        'buffer4': 'uiStagingBuffer',
        
        # 计数器变量
        'counter1': 'uiElementCount',
        'counter2': 'uiWindowCount',
        'counter3': 'uiEventCount',
        'counter4': 'uiResourceCount',
        
        # 标志变量
        'flag1': 'uiRenderFlag',
        'flag2': 'uiUpdateFlag',
        'flag3': 'uiInputFlag',
        'flag4': 'uiAnimationFlag',
        'flag5': 'uiLayoutFlag',
        'flag6': 'uiResourceFlag',
        'flag7': 'uiEventFlag',
        'flag8': 'uiFocusFlag',
        
        # 指针变量
        'ptr1': 'uiComponentPointer',
        'ptr2': 'uiWindowPointer',
        'ptr3': 'uiEventPointer',
        'ptr4': 'uiResourcePointer',
        'ptr5': 'uiAnimationPointer',
        'ptr6': 'uiLayoutPointer',
        'ptr7': 'uiThemePointer',
        'ptr8': 'uiInputPointer',
        
        # 临时变量
        'temp1': 'uiTempVar1',
        'temp2': 'uiTempVar2',
        'temp3': 'uiTempVar3',
        'temp4': 'uiTempVar4',
        'temp5': 'uiTempVar5',
        
        # 上下文变量
        'ctx1': 'uiRenderContext',
        'ctx2': 'uiInputContext',
        'ctx3': 'uiAnimationContext',
        'ctx4': 'uiLayoutContext',
        'ctx5': 'uiResourceContext',
        
        # 配置变量
        'config1': 'uiRenderConfig',
        'config2': 'uiInputConfig',
        'config3': 'uiAnimationConfig',
        'config4': 'uiLayoutConfig',
        'config5': 'uiResourceConfig',
        
        # 索引变量
        'index1': 'uiElementIndex',
        'index2': 'uiWindowIndex',
        'index3': 'uiEventIndex',
        'index4': 'uiResourceIndex',
        'index5': 'uiAnimationIndex',
        
        # 大小变量
        'size1': 'uiElementSize',
        'size2': 'uiWindowSize',
        'size3': 'uiBufferSize',
        'size4': 'uiResourceSize',
        'size5': 'uiAnimationSize',
        
        # 偏移变量
        'offset1': 'uiElementOffset',
        'offset2': 'uiWindowOffset',
        'offset3': 'uiBufferOffset',
        'offset4': 'uiResourceOffset',
        'offset5': 'uiAnimationOffset',
        
        # 时间变量
        'time1': 'uiCurrentTime',
        'time2': 'uiAnimationTime',
        'time3': 'uiEventTime',
        'time4': 'uiRenderTime',
        'time5': 'uiUpdateTime',
        
        # 坐标变量
        'x1': 'uiCoordinateX',
        'y1': 'uiCoordinateY',
        'z1': 'uiCoordinateZ',
        'w1': 'uiCoordinateW',
        
        # 颜色变量
        'r1': 'uiColorRed',
        'g1': 'uiColorGreen',
        'b1': 'uiColorBlue',
        'a1': 'uiColorAlpha',
        
        # 矩阵变量
        'matrix1': 'uiTransformMatrix',
        'matrix2': 'uiProjectionMatrix',
        'matrix3': 'uiViewMatrix',
        'matrix4': 'uiModelMatrix',
        
        # 向量变量
        'vec1': 'uiPositionVector',
        'vec2': 'uiSizeVector',
        'vec3': 'uiScaleVector',
        'vec4': 'uiRotationVector',
        
        # 其他常用变量
        'param_1': 'uiParameter1',
        'param_2': 'uiParameter2',
        'param_3': 'uiParameter3',
        'param_4': 'uiParameter4',
        'param_5': 'uiParameter5',
        'param_6': 'uiParameter6',
        'param_7': 'uiParameter7',
        'param_8': 'uiParameter8',
    }

def add_function_comments(content):
    """为函数添加注释"""
    # 为常见UI函数添加注释模板
    function_comments = {
        'InitializeUIComponent': '/**\n     * @brief 初始化UI组件\n     * \n     * 初始化用户界面组件，设置默认状态和属性\n     * \n     * @param component UI组件指针\n     * @param config 配置参数\n     * @return 初始化结果状态码\n     */',
        'CreateWindow': '/**\n     * @brief 创建窗口\n     * \n     * 创建新的用户界面窗口，设置窗口属性和初始状态\n     * \n     * @param title 窗口标题\n     * @param width 窗口宽度\n     * @param height 窗口高度\n     * @param parent 父窗口指针\n     * @return 创建的窗口指针\n     */',
        'RenderUIElement': '/**\n     * @brief 渲染UI元素\n     * \n     * 渲染指定的用户界面元素，包括文本、图像和控件\n     * \n     * @param element UI元素指针\n     * @param context 渲染上下文\n     * @param deltaTime 时间增量\n     * @return 渲染结果状态码\n     */',
        'HandleUIInput': '/**\n     * @brief 处理UI输入\n     * \n     * 处理用户输入事件，包括鼠标、键盘和触摸输入\n     * \n     * @param inputEvent 输入事件结构体\n     * @param context 输入上下文\n     * @return 输入处理结果\n     */',
        'UpdateUILayout': '/**\n     * @brief 更新UI布局\n     * \n     * 更新用户界面元素的布局，重新计算位置和大小\n     * \n     * @param container 容器元素指针\n     * @param forceUpdate 是否强制更新\n     * @return 布局更新结果\n     */',
        'ProcessUIEvent': '/**\n     * @brief 处理UI事件\n     * \n     * 处理用户界面事件，分发到相应的处理程序\n     * \n     * @param event UI事件结构体\n     * @param context 事件上下文\n     * @return 事件处理结果\n     */',
        'StartUIAnimation': '/**\n     * @brief 启动UI动画\n     * \n     * 启动用户界面动画效果，设置动画参数和目标状态\n     * \n     * @param element UI元素指针\n     * @param animationType 动画类型\n     * @param duration 动画持续时间\n     * @param callback 动画完成回调\n     * @return 动画启动结果\n     */',
        'ApplyUIStyle': '/**\n     * @brief 应用UI样式\n     * \n     * 应用指定的样式到用户界面元素\n     * \n     * @param element UI元素指针\n     * @param style 样式指针\n     * @param override 是否覆盖现有样式\n     * @return 样式应用结果\n     */',
        'RegisterUIEventHandler': '/**\n     * @brief 注册UI事件处理器\n     * \n     * 为用户界面元素注册事件处理函数\n     * \n     * @param element UI元素指针\n     * @param eventType 事件类型\n     * @param handler 事件处理函数\n     * @param userData 用户数据指针\n     * @return 注册结果状态码\n     */',
        'DrawUIText': '/**\n     * @brief 绘制UI文本\n     * \n     * 在指定位置绘制用户界面文本\n     * \n     * @param text 文本内容\n     * @param x X坐标\n     * @param y Y坐标\n     * @param font 字体指针\n     * @param color 文本颜色\n     * @return 绘制结果状态码\n     */',
    }
    
    return function_comments

def beautify_ui_system(content):
    """美化UI系统代码"""
    print("开始美化UI系统代码...")
    
    # 创建映射字典
    function_mapping = create_ui_function_mapping()
    variable_mapping = create_ui_variable_mapping()
    function_comments = add_function_comments("")
    
    # 替换函数名
    for old_name, new_name in function_mapping.items():
        if old_name in content:
            content = content.replace(old_name, new_name)
            print(f"替换函数: {old_name} -> {new_name}")
    
    # 替换变量名
    for old_name, new_name in variable_mapping.items():
        if old_name in content:
            content = content.replace(old_name, new_name)
            print(f"替换变量: {old_name} -> {new_name}")
    
    return content

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("用法: python beautify_ui_system.py <文件路径>")
        return 1
    
    filepath = sys.argv[1]
    
    # 读取文件
    content = read_file(filepath)
    if content is None:
        return 1
    
    # 美化代码
    beautified_content = beautify_ui_system(content)
    
    # 写入文件
    if write_file(filepath, beautified_content):
        print(f"文件美化完成: {filepath}")
        return 0
    else:
        return 1

if __name__ == "__main__":
    sys.exit(main())