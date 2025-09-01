#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
UI系统文件美化脚本
用于批量重命名函数和变量，并添加文档注释
"""

import re
import sys

def process_ui_system_file():
    """处理UI系统文件"""
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
    output_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system_processed.c"
    
    print(f"开始处理文件: {input_file}")
    
    # 函数重命名映射
    function_renames = {
        'FUN_180653220': 'UISystemInitializeCore',
        'FUN_180653420': 'UISystemProcessConfiguration',
        'FUN_180655260': 'UISystemCreateWindow',
        'FUN_180655f50': 'UISystemDestroyWindow',
        'FUN_1806562b0': 'UISystemUpdateWindow',
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
        'FUN_18069ed90': 'UISystemProcessLayout',
        'FUN_180718480': 'UISystemCalculateMetrics',
        'FUN_1807193b0': 'UISystemUpdateMetrics',
        'FUN_1807234d0': 'UISystemRenderText',
        'FUN_180738730': 'UISystemProcessTexture',
        'FUN_180742460': 'UISystemUpdateTexture',
        'FUN_180742cd0': 'UISystemRenderTexture',
        'FUN_180742e00': 'UISystemHandleTexture',
        'FUN_180744920': 'UISystemValidateTexture',
        'FUN_180746460': 'UISystemProcessShader',
        'FUN_18074c570': 'UISystemUpdateShader',
        'FUN_18074fc70': 'UISystemRenderShader',
        'FUN_180750bf2': 'UISystemHandleShader',
        'FUN_180750fa0': 'UISystemValidateShader',
        'FUN_1807533c2': 'UISystemProcessBuffer',
        'FUN_180754080': 'UISystemUpdateBuffer',
        'FUN_180757a30': 'UISystemRenderBuffer',
        'FUN_180757cec': 'UISystemHandleBuffer',
        'FUN_180759220': 'UISystemValidateBuffer',
        'FUN_1807593d0': 'UISystemProcessMemory',
        'FUN_18075a100': 'UISystemUpdateMemory',
        'FUN_18075a760': 'UISystemRenderMemory',
        'FUN_18075e660': 'UISystemHandleMemory',
        'FUN_18075ece0': 'UISystemValidateMemory',
        'FUN_180760650': 'UISystemProcessThread',
        'FUN_180762e40': 'UISystemUpdateThread',
    }
    
    # 变量重命名映射
    variable_renames = {
        'DAT_180c8f008': 'UISystemInstancePointer',
        'DAT_180c8f010': 'UISystemInitializationMethod',
        'DAT_180c8f018': 'UISystemControllerMethods',
        'DAT_180c8ecfc': 'UISystemConfigData',
        'DAT_180bf3ff4': 'UISystemRenderFlags',
        'DAT_180c91020': 'UISystemDomainHandle',
        'DAT_180c91028': 'UISystemAssemblyName',
        'DAT_180c91030': 'UISystemThreadHandle',
        'DAT_180c967f0': 'UISystemConfigBuffer',
        'DAT_180c967e8': 'UISystemConfigSize',
        'DAT_180c8ed30': 'UISystemScaleFactor',
        'DAT_180c0c1cc': 'UISystemCriticalSectionCount',
        'DAT_180c0c1c8': 'UISystemCriticalSectionIndex',
        'DAT_180c0c1c0': 'UISystemCriticalSectionPointer',
        'DAT_180c91038': 'UISystemInputHandler',
        'DAT_180c8ed00': 'UISystemRendererInstance',
        'DAT_180a0fd38': 'UISystemRenderParameters',
        'DAT_180a401f0': 'UISystemAnimationSpeed',
        'DAT_180a3dda8': 'UISystemDataSize',
        'DAT_180a3ddc0': 'UISystemDataPointer',
        'UNK_180a3dd38': 'UISystemStringBuffer',
        'UNK_180a3c3e0': 'UISystemMemoryBuffer',
        'UNK_1809fe62c': 'UISystemValidationData',
        'UNK_18098bcb0': 'UISystemDefaultData',
        'UNK_180a3e4a0': 'UISystemWindowData',
        'UNK_180a3e4b8': 'UISystemWidgetData',
        'UNK_180a3e500': 'UISystemLayoutData',
        'UNK_180a3e510': 'UISystemEventData',
        'UNK_180a3e4d8': 'UISystemFocusData',
        'UNK_180a3e4e8': 'UISystemInputData',
    }
    
    # 函数文档模板
    function_docs = {
        'UISystemInitializeCore': '''/**
 * @brief 用户界面系统核心初始化函数
 * 
 * 该函数负责初始化用户界面系统的核心组件，包括：
 * - 系统实例创建
 * - 内存分配初始化
 * - 配置数据加载
 * - 回调函数设置
 *
 * @param systemInstance 系统实例指针
 * @param configData 配置数据指针
 * @param configSize 配置数据大小
 * @param configFlags 配置标志
 * @return 成功返回初始化后的系统实例指针，失败返回NULL
 */''',
        
        'UISystemProcessConfiguration': '''/**
 * @brief 用户界面系统配置处理函数
 * 
 * 该函数负责处理用户界面系统的配置数据，包括：
 * - 配置参数解析
 * - 系统参数设置
 * - 状态初始化
 *
 * @param configHandle 配置句柄
 * @param configBuffer 配置缓冲区
 * @param configSize 配置大小
 * @param configFlags 配置标志
 * @return 处理结果状态码
 */''',
        
        'UISystemCreateWindow': '''/**
 * @brief 用户界面系统窗口创建函数
 * 
 * 该函数负责创建用户界面窗口，包括：
 * - 窗口对象分配
 * - 窗口属性设置
 * - 窗口句柄生成
 *
 * @param windowManager 窗口管理器指针
 * @param windowId 窗口ID
 * @param windowStyle 窗口样式
 * @param windowFlags 窗口标志
 * @return 创建的窗口句柄
 */''',
        
        'UISystemDestroyWindow': '''/**
 * @brief 用户界面系统窗口销毁函数
 * 
 * 该函数负责销毁用户界面窗口，包括：
 * - 窗口资源释放
 * - 子窗口处理
 * - 事件清理
 *
 * @param windowHandle 窗口句柄
 * @param destroyFlags 销毁标志
 * @param reserved1 保留参数1
 * @param reserved2 保留参数2
 * @return 销毁结果状态码
 */''',
        
        'UISystemUpdateWindow': '''/**
 * @brief 用户界面系统窗口更新函数
 * 
 * 该函数负责更新用户界面窗口，包括：
 * - 窗口状态更新
 * - 子窗口更新
 * - 重绘标记设置
 *
 * @param windowHandle 窗口句柄
 * @param updateData 更新数据
 * @param updateFlags 更新标志
 * @param reserved 保留参数
 * @return 更新结果状态码
 */''',
        
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
    
    print("文件读取成功，开始处理...")
    
    # 备份原始文件
    backup_file = input_file + '.backup'
    try:
        with open(backup_file, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"原始文件已备份到: {backup_file}")
    except Exception as e:
        print(f"备份文件时出错: {e}")
        return
    
    # 处理函数重命名和添加文档注释
    processed_content = content
    
    # 首先处理函数定义，添加文档注释
    for old_name, new_name in function_renames.items():
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
    
    # 处理变量重命名
    for old_name, new_name in variable_renames.items():
        processed_content = processed_content.replace(old_name, new_name)
    
    # 处理其他变量（简单的十六进制地址变量）
    # 处理 DAT_ 变量
    dat_vars = re.findall(r'DAT_[a-f0-9]+', processed_content)
    for var in set(dat_vars):
        if var not in variable_renames:
            new_var = f"UISystemData{var[4:]}"
            processed_content = processed_content.replace(var, new_var)
    
    # 处理 UNK_ 变量
    unk_vars = re.findall(r'UNK_[a-f0-9]+', processed_content)
    for var in set(unk_vars):
        if var not in variable_renames:
            new_var = f"UISystemUnknown{var[4:]}"
            processed_content = processed_content.replace(var, new_var)
    
    # 写入处理后的文件
    try:
        with open(output_file, 'w', encoding='utf-8') as f:
            f.write(processed_content)
        print(f"处理完成，结果已保存到: {output_file}")
    except Exception as e:
        print(f"写入文件时出错: {e}")
        return
    
    # 统计处理结果
    print(f"\n处理统计:")
    print(f"- 重命名函数: {len(function_renames)} 个")
    print(f"- 重命名变量: {len(variable_renames)} 个")
    print(f"- 处理其他 DAT_ 变量: {len(set(dat_vars) - set(variable_renames.keys()))} 个")
    print(f"- 处理其他 UNK_ 变量: {len(set(unk_vars) - set(variable_renames.keys()))} 个")
    
    # 替换原始文件
    try:
        with open(input_file, 'w', encoding='utf-8') as f:
            f.write(processed_content)
        print(f"原始文件已更新: {input_file}")
    except Exception as e:
        print(f"替换原始文件时出错: {e}")
        return

if __name__ == "__main__":
    process_ui_system_file()