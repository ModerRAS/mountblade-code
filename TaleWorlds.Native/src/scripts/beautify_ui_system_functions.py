#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
UI系统函数美化脚本
为04_ui_system.c文件中的FUN_函数重命名并添加详细注释
"""

import re
import sys

def beautify_ui_system_functions():
    """美化UI系统中的FUN_函数"""
    
    # 读取文件
    try:
        with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'r', encoding='utf-8') as f:
            content = f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return False
    
    # 函数重命名映射表
    function_renames = {
        # UI系统核心函数
        'FUN_18066f810': 'UISystemInitializeRenderer',
        'FUN_18066f834': 'UISystemProcessRenderBatch', 
        'FUN_18066f94e': 'UISystemUpdateRenderState',
        'FUN_180670510': 'UISystemSubmitDrawCommand',
        'FUN_180670526': 'UISystemExecuteDrawCommand',
        'FUN_1806708fb': 'UISystemBeginFrame',
        'FUN_180670a01': 'UISystemEndFrame',
        'FUN_180670ac1': 'UISystemFlushRenderQueue',
        'FUN_180670aec': 'UISystemClearRenderTargets',
        'FUN_180670b00': 'UISystemUpdateViewport',
        'FUN_180670b17': 'UISystemUpdateProjection',
        'FUN_180670b1e': 'UISystemUpdateCamera',
        'FUN_180670bda': 'UISystemResetRenderState',
        'FUN_180670c31': 'UISystemValidateRenderState',
        'FUN_180670c62': 'UISystemSetBlendMode',
        'FUN_180670c6a': 'UISystemRestoreBlendMode',
        'FUN_180670c6f': 'UISystemApplyBlendMode',
        'FUN_180670ede': 'UISystemInitializeShaders',
        'FUN_180670f6b': 'UISystemCompileShaders',
        'FUN_180670ffb': 'UISystemLinkShaders',
        'FUN_18067106d': 'UISystemValidateShaders',
        'FUN_180671080': 'UISystemSetActiveShader',
        'FUN_1806710a5': 'UISystemCleanupShaders',
        'FUN_1806712a0': 'UISystemInitializeTextures',
        'FUN_1806712b0': 'UISystemLoadTexture',
        
        # 图像处理函数 (基于已分析的代码)
        'FUN_1806972a0': 'CalculateImageDifferenceWithAverage_8x8',
        'FUN_180697340': 'CalculateImageDifference_8x8',
        'FUN_1806973c0': 'CalculateImageDifferenceWithAverage_16x16',
        'FUN_180697460': 'CalculateImageDifference_16x16',
        'FUN_1806974e0': 'CalculateImageDifferenceWithAverage_32x32',
        'FUN_180697580': 'CalculateImageDifference_32x32',
        'FUN_180697600': 'CalculateImageDifferenceWithAverage_Strided_32x32',
        'FUN_180697680': 'CalculateImageDifference_Strided_32x32',
        'FUN_1806976f0': 'CalculateImageDifferenceWithAverage_Padded_32x32',
        'FUN_180697770': 'CalculateImageDifference_Padded_32x32',
        'FUN_1806977e0': 'CalculateImageDifferenceWithAverage_Custom_32x32',
    }
    
    # 函数注释模板
    function_comments = {
        'FUN_18066f810': """/**
 * 初始化UI系统渲染器
 * 设置渲染管线、着色器、纹理等基本渲染状态
 * 
 * @param param_1 UI系统实例指针
 * @param param_2 渲染上下文指针
 * @param param_3 初始化标志
 */""",
        
        'FUN_18066f834': """/**
 * 处理UI系统渲染批次
 * 批量处理UI元素的渲染命令，提高渲染效率
 * 
 * @param param_1 UI系统实例指针
 * @param param_2 渲染上下文指针
 * @param param_3 批次大小
 */""",
        
        'FUN_18066f94e': """/**
 * 更新UI系统渲染状态
 * 更新渲染管线状态，包括混合模式、深度测试等
 * 
 * @param param_1 UI系统实例指针
 * @param param_2 渲染上下文指针
 * @param param_3 状态更新标志
 */""",
        
        'FUN_180670510': """/**
 * 提交UI绘制命令
 * 将UI元素绘制命令提交到渲染队列
 * 
 * @param param_1 UI系统实例指针
 * @param param_2 渲染上下文指针
 * @param param_3 绘制命令数据
 * @param param_4 命令类型
 */""",
        
        'FUN_180670526': """/**
 * 执行UI绘制命令
 * 执行渲染队列中的UI绘制命令
 * 
 * @param param_1 UI系统实例指针
 * @param param_2 渲染上下文指针
 * @param param_3 绘制命令数据
 * @param param_4 命令参数
 */""",
        
        'FUN_1806708fb': """/**
 * 开始UI渲染帧
 * 初始化新的一帧UI渲染，清除之前的渲染状态
 */""",
        
        'FUN_180670a01': """/**
 * 结束UI渲染帧
 * 完成当前帧的UI渲染，提交所有待处理的绘制命令
 */""",
        
        'FUN_180670ac1': """/**
 * 刷新UI渲染队列
 * 清空渲染队列中的所有待处理命令
 */""",
        
        'FUN_180670aec': """/**
 * 清除UI渲染目标
 * 清除渲染目标表面，准备新的渲染
 */""",
        
        'FUN_180670b00': """/**
 * 更新UI视口
 * 更新渲染视口的大小和位置
 * 
 * @param param_1 UI系统实例指针
 */""",
        
        'FUN_180670b17': """/**
 * 更新UI投影矩阵
 * 更新投影矩阵以适应屏幕尺寸变化
 * 
 * @param param_1 UI系统实例指针
 */""",
        
        'FUN_180670b1e': """/**
 * 更新UI相机
 * 更新UI相机的位置和参数
 * 
 * @param param_1 UI系统实例指针
 */""",
        
        'FUN_180670bda': """/**
 * 重置UI渲染状态
 * 重置所有渲染状态到默认值
 */""",
        
        'FUN_180670c31': """/**
 * 验证UI渲染状态
 * 检查渲染状态是否有效和一致
 */""",
        
        'FUN_180670c62': """/**
 * 设置UI混合模式
 * 设置UI元素的混合模式
 * 
 * @param param_1 UI系统实例指针
 * @param param_2 渲染上下文指针
 * @param param_3 混合模式参数
 */""",
        
        'FUN_180670c6a': """/**
 * 恢复UI混合模式
 * 恢复到之前的混合模式
 */""",
        
        'FUN_180670c6f': """/**
 * 应用UI混合模式
 * 应用当前设置的混合模式到渲染管线
 */""",
        
        'FUN_180670ede': """/**
 * 初始化UI着色器
 * 编译和链接UI渲染所需的着色器程序
 */""",
        
        'FUN_180670f6b': """/**
 * 编译UI着色器
 * 编译着色器源代码
 */""",
        
        'FUN_180670ffb': """/**
 * 链接着色器程序
 * 将编译好的着色器链接成完整的程序
 */""",
        
        'FUN_18067106d': """/**
 * 验证着色器程序
 * 验证着色器程序的有效性
 */""",
        
        'FUN_180671080': """/**
 * 设置活动着色器
 * 设置当前活动的着色器程序
 * 
 * @param param_1 UI系统实例指针
 * @param param_2 着色器程序ID
 */""",
        
        'FUN_1806710a5': """/**
 * 清理着色器资源
 * 释放着色器相关的资源
 */""",
        
        'FUN_1806712a0': """/**
 * 初始化UI纹理系统
 * 初始化纹理管理和加载系统
 */""",
        
        'FUN_1806712b0': """/**
 * 加载UI纹理
 * 从文件或内存加载UI纹理
 * 
 * @param param_1 纹理系统指针
 * @param param_2 纹理数据指针
 */""",
        
        # 图像处理函数注释
        'FUN_1806972a0': """/**
 * 计算8x8图像块差异值（带平均处理）
 * 使用AVX2指令集计算两个图像块之间的差异，采用平均像素值方法
 * 
 * @param param_1 第一个图像块数据指针（32字节）
 * @param param_2 第一个图像块的步长
 * @param param_3 第二个图像块数据指针（32字节）
 * @param param_4 第二个图像块的步长
 * @param param_5 辅助图像块数据指针（32字节）
 * @return 图像差异值（绝对差和）
 */""",
        
        'FUN_180697340': """/**
 * 计算8x8图像块差异值
 * 使用AVX2指令集计算两个图像块之间的绝对差异和
 * 
 * @param param_1 第一个图像块数据指针（32字节）
 * @param param_2 第一个图像块的步长
 * @param param_3 第二个图像块数据指针（32字节）
 * @param param_4 第二个图像块的步长
 * @return 图像差异值（绝对差和）
 */""",
        
        'FUN_1806973c0': """/**
 * 计算16x16图像块差异值（带平均处理）
 * 使用AVX2指令集计算两个图像块之间的差异，采用平均像素值方法
 * 
 * @param param_1 第一个图像块数据指针（32字节）
 * @param param_2 第一个图像块的步长
 * @param param_3 第二个图像块数据指针（32字节）
 * @param param_4 第二个图像块的步长
 * @param param_5 辅助图像块数据指针（32字节）
 * @return 图像差异值（绝对差和）
 */""",
        
        'FUN_180697460': """/**
 * 计算16x16图像块差异值
 * 使用AVX2指令集计算两个图像块之间的绝对差异和
 * 
 * @param param_1 第一个图像块数据指针（32字节）
 * @param param_2 第一个图像块的步长
 * @param param_3 第二个图像块数据指针（32字节）
 * @param param_4 第二个图像块的步长
 * @return 图像差异值（绝对差和）
 */""",
    }
    
    # 应用函数重命名
    modified_content = content
    functions_found = 0
    functions_renamed = 0
    
    for old_name, new_name in function_renames.items():
        # 查找函数定义
        pattern = rf'\b{old_name}\b'
        matches = re.findall(pattern, modified_content)
        
        if matches:
            functions_found += len(matches)
            print(f"找到函数 {old_name}: {len(matches)} 次出现")
            
            # 替换函数名
            modified_content = re.sub(pattern, new_name, modified_content)
            functions_renamed += 1
            
            # 添加函数注释
            if old_name in function_comments:
                # 查找函数定义位置并添加注释
                function_def_pattern = rf'^(void|undefined4|undefined8|int|longlong|float|char|bool)\s+{new_name}\('
                lines = modified_content.split('\n')
                
                for i, line in enumerate(lines):
                    if re.search(function_def_pattern, line):
                        # 在函数定义前插入注释
                        lines.insert(i, function_comments[old_name])
                        modified_content = '\n'.join(lines)
                        break
    
    # 保存修改后的内容
    try:
        with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'w', encoding='utf-8') as f:
            f.write(modified_content)
        print(f"文件保存成功")
    except Exception as e:
        print(f"保存文件失败: {e}")
        return False
    
    # 输出统计信息
    print(f"\n=== UI系统函数美化统计 ===")
    print(f"找到FUN_函数: {functions_found} 次")
    print(f"重命名函数: {functions_renamed} 个")
    print(f"处理的函数类型:")
    
    categories = {
        '渲染系统': ['FUN_18066f810', 'FUN_18066f834', 'FUN_18066f94e'],
        '绘制命令': ['FUN_180670510', 'FUN_180670526'],
        '帧管理': ['FUN_1806708fb', 'FUN_180670a01', 'FUN_180670ac1', 'FUN_180670aec'],
        '视口相机': ['FUN_180670b00', 'FUN_180670b17', 'FUN_180670b1e'],
        '状态管理': ['FUN_180670bda', 'FUN_180670c31'],
        '混合模式': ['FUN_180670c62', 'FUN_180670c6a', 'FUN_180670c6f'],
        '着色器': ['FUN_180670ede', 'FUN_180670f6b', 'FUN_180670ffb', 'FUN_18067106d', 
                  'FUN_180671080', 'FUN_1806710a5'],
        '纹理系统': ['FUN_1806712a0', 'FUN_1806712b0'],
        '图像处理': ['FUN_1806972a0', 'FUN_180697340', 'FUN_1806973c0', 'FUN_180697460',
                     'FUN_1806974e0', 'FUN_180697580', 'FUN_180697600', 'FUN_180697680',
                     'FUN_1806976f0', 'FUN_180697770', 'FUN_1806977e0']
    }
    
    for category, functions in categories.items():
        found_in_category = sum(1 for func in functions if func in function_renames)
        if found_in_category > 0:
            print(f"  - {category}: {found_in_category} 个函数")
    
    print(f"\n=== 重命名映射表 ===")
    for old_name, new_name in function_renames.items():
        print(f"{old_name} -> {new_name}")
    
    return True

if __name__ == "__main__":
    print("开始美化UI系统函数...")
    success = beautify_ui_system_functions()
    if success:
        print("UI系统函数美化完成！")
    else:
        print("UI系统函数美化失败！")
        sys.exit(1)