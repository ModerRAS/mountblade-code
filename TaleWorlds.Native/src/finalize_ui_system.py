#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
UI系统文件最终处理脚本
完成剩余的函数重命名和变量重命名工作
"""

import re

def finalize_ui_system_file():
    """完成UI系统文件的美化工作"""
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
    
    print(f"开始最终处理文件: {input_file}")
    
    # 读取文件
    try:
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
    except FileNotFoundError:
        print(f"错误: 找不到文件 {input_file}")
        return
    except Exception as e:
        print(f"读取文件时出错: {e}")
        return
    
    # 剩余的函数重命名
    remaining_functions = {
        'FUN_180656500': 'UISystemRenderWindow',
        'FUN_180656730': 'UISystemHandleInput',
        'FUN_1806567c0': 'UISystemProcessEvent',
        'FUN_180657450': 'UISystemUpdateFocus',
        'FUN_1806576d0': 'UISystemValidateEvent',
        'FUN_180657b00': 'UISystemDispatchEvent',
        'FUN_180658a60': 'UISystemTransformMatrix',
        'FUN_1806699e0': 'UISystemLoadResource',
        'FUN_18066ef60': 'UISystemProcessAnimation',
        'FUN_1806972a0': 'UISystemCreateWidget',
        'FUN_180697340': 'UISystemDestroyWidget',
        'FUN_1806973c0': 'UISystemUpdateWidget',
        'FUN_180697460': 'UISystemRenderWidget',
        'FUN_1806974e0': 'UISystemHandleWidgetEvent',
        'FUN_180697580': 'UISystemValidateWidget',
        'FUN_180697600': 'UISystemFocusWidget',
        'FUN_180697680': 'UISystemBlurWidget',
        'FUN_1806976f0': 'UISystemEnableWidget',
        'FUN_180697770': 'UISystemDisableWidget',
    }
    
    # 剩余的变量重命名
    remaining_variables = {
        '_DAT_180c91030': '_UISystemThreadHandle',
        '_DAT_180c967f0': '_UISystemConfigBuffer',
        '_DAT_180c967e8': '_UISystemConfigSize',
        '_DAT_180c91038': '_UISystemInputHandler',
        '_DAT_180c8ed30': '_UISystemScaleFactor',
        '_DAT_180c0c1cc': '_UISystemCriticalSectionCount',
        '_DAT_180c0c1c8': '_UISystemCriticalSectionIndex',
        '_DAT_180c0c1c0': '_UISystemCriticalSectionPointer',
        '_DAT_180c8ed00': '_UISystemRendererInstance',
        '_DAT_180a0fd38': '_UISystemRenderParameters',
        '_DAT_180a401f0': '_UISystemAnimationSpeed',
        '_DAT_180a3dda8': '_UISystemDataSize',
        '_DAT_180a3ddc0': '_UISystemDataPointer',
    }
    
    # UNK_变量重命名
    unk_variables = {
        'UNK_180a3e4a0': 'UISystemWindowData',
        'UNK_180a3e4b8': 'UISystemWidgetData',
        'UNK_180a3e500': 'UISystemLayoutData',
        'UNK_180a3e510': 'UISystemEventData',
        'UNK_180a3e4d8': 'UISystemFocusData',
        'UNK_180a3e4e8': 'UISystemInputData',
        'UNK_1809fe62c': 'UISystemValidationData',
        'UNK_18098bcb0': 'UISystemDefaultData',
    }
    
    # 函数文档模板
    function_docs = {
        'UISystemRenderWindow': '''/**
 * @brief 用户界面系统窗口渲染函数
 * 
 * 该函数负责渲染用户界面窗口，包括：
 * - 窗口内容绘制
 * - 子窗口渲染
 * - 效果处理
 *
 * @param windowHandle 窗口句柄
 * @param renderData 渲染数据
 * @param renderFlags 渲染标志
 * @param reserved 保留参数
 * @return 渲染结果状态码
 */''',
        
        'UISystemHandleInput': '''/**
 * @brief 用户界面系统输入处理函数
 * 
 * 该函数负责处理用户界面输入事件，包括：
 * - 输入事件分发
 * - 焦点管理
 * - 事件冒泡处理
 *
 * @param inputHandle 输入句柄
 * @param inputData 输入数据
 * @param inputFlags 输入标志
 * @param reserved 保留参数
 * @return 处理结果状态码
 */''',
        
        'UISystemProcessEvent': '''/**
 * @brief 用户界面系统事件处理函数
 * 
 * 该函数负责处理用户界面事件，包括：
 * - 事件验证
 * - 事件分发
 * - 回调函数调用
 *
 * @param eventHandle 事件句柄
 * @param eventData 事件数据
 * @param eventFlags 事件标志
 * @param reserved 保留参数
 * @return 处理结果状态码
 */''',
        
        'UISystemUpdateFocus': '''/**
 * @brief 用户界面系统焦点更新函数
 * 
 * 该函数负责更新用户界面焦点，包括：
 * - 焦点丢失处理
 * - 焦点获取处理
 * - 焦点路径更新
 *
 * @param focusHandle 焦点句柄
 * @param focusData 焦点数据
 * @param focusFlags 焦点标志
 * @param reserved 保留参数
 * @return 更新结果状态码
 */''',
        
        'UISystemValidateEvent': '''/**
 * @brief 用户界面系统事件验证函数
 * 
 * 该函数负责验证用户界面事件，包括：
 * - 事件格式验证
 * - 事件权限检查
 * - 事件完整性检查
 *
 * @param eventId 事件ID
 * @param eventData 事件数据指针
 * @param eventSize 事件数据大小
 * @param validationFlags 验证标志
 * @param resultPointer 结果指针
 * @return 验证结果状态码
 */''',
        
        'UISystemDispatchEvent': '''/**
 * @brief 用户界面系统事件分发函数
 * 
 * 该函数负责分发用户界面事件，包括：
 * - 事件目标查找
 * - 事件分发处理
 * - 传播控制
 *
 * @param dispatcherHandle 分发器句柄
 * @param eventId 事件ID
 * @param dispatchFlags 分发标志
 * @param reserved 保留参数
 * @return 分发结果状态码
 */''',
        
        'UISystemTransformMatrix': '''/**
 * @brief 用户界面系统矩阵变换函数
 * 
 * 该函数负责处理用户界面矩阵变换，包括：
 * - 变换矩阵计算
 * - 坐标系统转换
 * - 投影变换
 *
 * @param matrixPointer 矩阵指针
 * @param positionX X坐标位置
 * @param positionY Y坐标位置
 * @param positionZ Z坐标位置
 * @param transformFlags 变换标志
 * @return 变换结果状态码
 */''',
    }
    
    processed_content = content
    
    # 处理剩余的函数重命名
    for old_name, new_name in remaining_functions.items():
        # 构建正则表达式匹配函数定义
        pattern = r'^(\s*)' + re.escape(old_name) + r'\(([^)]*)\)'
        
        def replace_function(match):
            indent = match.group(1)
            params = match.group(2)
            doc_comment = function_docs.get(new_name, '')
            if doc_comment:
                return f"{indent}{doc_comment}\n{indent}{new_name}({params})"
            else:
                return f"{indent}{new_name}({params})"
        
        processed_content = re.sub(pattern, replace_function, processed_content, flags=re.MULTILINE)
        print(f"重命名函数: {old_name} -> {new_name}")
    
    # 处理剩余的变量重命名
    for old_name, new_name in remaining_variables.items():
        processed_content = processed_content.replace(old_name, new_name)
        print(f"重命名变量: {old_name} -> {new_name}")
    
    # 处理UNK_变量重命名
    for old_name, new_name in unk_variables.items():
        processed_content = processed_content.replace(old_name, new_name)
        print(f"重命名UNK变量: {old_name} -> {new_name}")
    
    # 处理其他剩余的变量
    # 处理其他DAT_变量
    dat_pattern = r'DAT_180c[0-9a-f]+'
    dat_vars = re.findall(dat_pattern, processed_content)
    for var in set(dat_vars):
        if var not in remaining_variables:
            new_var = f"UISystemData{var[7:]}"
            processed_content = processed_content.replace(var, new_var)
            print(f"重命名DAT变量: {var} -> {new_var}")
    
    # 处理其他UNK_变量
    unk_pattern = r'UNK_180[0-9a-f]+'
    unk_vars = re.findall(unk_pattern, processed_content)
    for var in set(unk_vars):
        if var not in unk_variables:
            new_var = f"UISystemUnknown{var[4:]}"
            processed_content = processed_content.replace(var, new_var)
            print(f"重命名UNK变量: {var} -> {new_var}")
    
    # 写回文件
    try:
        with open(input_file, 'w', encoding='utf-8') as f:
            f.write(processed_content)
        print(f"文件处理完成: {input_file}")
    except Exception as e:
        print(f"写入文件时出错: {e}")
        return
    
    print("所有处理已完成！")

if __name__ == "__main__":
    finalize_ui_system_file()