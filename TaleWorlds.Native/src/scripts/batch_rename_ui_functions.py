#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
批量重命名UI系统函数脚本
处理剩余的FUN_函数重命名
"""

import re

def batch_rename_functions():
    """批量重命名函数"""
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 剩余的函数重命名映射
    remaining_renames = {
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
    }
    
    # 函数注释模板
    function_comments = {
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
    }
    
    # 处理每个函数
    modified_content = content
    
    for old_name, new_name in remaining_renames.items():
        # 查找函数定义
        pattern = rf'// 函数:.*\b{old_name}\b.*\nvoid {old_name}\('
        match = re.search(pattern, modified_content)
        
        if match:
            print(f"找到函数: {old_name}")
            
            # 替换函数定义和注释
            if old_name in function_comments:
                # 获取函数签名
                func_line = match.group(0)
                # 提取参数部分
                param_match = re.search(r'void [^(]*\(([^)]*)\)', func_line)
                if param_match:
                    params = param_match.group(1)
                    new_definition = f"// 函数: void {new_name}({params})\n{function_comments[old_name]}\nvoid {new_name}("
                    modified_content = re.sub(pattern, new_definition, modified_content)
            
            # 替换所有函数调用
            call_pattern = rf'\b{old_name}\('
            modified_content = re.sub(call_pattern, f'{new_name}(', modified_content)
            
            print(f"  重命名为: {new_name}")
        else:
            print(f"未找到函数: {old_name}")
    
    # 保存修改后的内容
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'w', encoding='utf-8') as f:
        f.write(modified_content)
    
    print("批量重命名完成！")

if __name__ == "__main__":
    batch_rename_functions()