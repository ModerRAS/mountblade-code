#!/usr/bin/env python3
"""
美化06_utilities.c文件中的标签
将所有LAB_标签替换为有意义的名称
"""

import re

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def create_label_mapping():
    """创建标签映射表"""
    mapping = {
        # 资源分配相关
        'LAB_1808962af': 'ResourceAllocationSuccess',
        'LAB_18089638e': 'ErrorHandler',
        
        # 验证错误处理
        'LAB_1808974ec': 'ValidationErrorHandler',
        
        # 操作结果处理
        'LAB_180897af6': 'OperationResultHandler',
        
        # 循环退出
        'LAB_180897ce8': 'LoopExit',
        
        # 资源处理
        'LAB_18089866f': 'ResourceProcessingComplete',
        'LAB_1808985be': 'ResourceSearchSuccess',
        'LAB_180898629': 'ResourceValidationComplete',
        
        # 字符串处理
        'LAB_1808989f7': 'StringProcessingComplete',
        
        # 其他处理
        'LAB_180898e0b': 'SecondaryProcessingComplete',
        'LAB_1808992a5': 'TertiaryProcessingComplete',
        'LAB_180899456': 'FourthProcessingComplete',
        'LAB_180899546': 'FifthProcessingComplete',
        'LAB_18089962f': 'SixthProcessingComplete',
        'LAB_1808996c5': 'SeventhProcessingComplete',
        
        # 高级处理
        'LAB_18089ae18': 'AdvancedProcessingComplete',
        'LAB_18089af81': 'AdvancedErrorHandler',
        'LAB_18089b1ab': 'AdvancedResourceHandler',
        'LAB_18089b22a': 'AdvancedOperationHandler',
        'LAB_18089b226': 'AdvancedCleanupHandler',
        
        # 其他功能
        'LAB_1808a2e6d': 'UtilityProcessingComplete',
        
        # 资源管理
        'LAB_18089b91c': 'ResourceManagerHandler',
        'LAB_18089bbcc': 'ResourceValidationHandler',
        
        # 操作状态
        'LAB_18089bfc7': 'OperationStatusHandler',
        'LAB_18089c131': 'OperationComplete',
        
        # 上下文处理
        'LAB_18089c300': 'ContextProcessingComplete',
        'LAB_18089c40a': 'ContextValidationHandler',
        'LAB_18089c586': 'ContextOperationComplete',
        
        # 其他处理
        'LAB_18089c78f': 'AdditionalProcessingComplete',
        'LAB_18089c743': 'AdditionalResourceHandler',
        'LAB_18089c808': 'AdditionalValidationComplete',
        'LAB_18089c878': 'SecondaryContextComplete',
        'LAB_18089c9ee': 'TertiaryContextComplete',
        'LAB_18089c9a8': 'ContextErrorHandler',
        'LAB_18089ca9c': 'SecondaryContextErrorHandler',
        'LAB_18089cbf6': 'FinalContextComplete',
        'LAB_18089cad8': 'ContextProcessingExit',
        
        # 验证处理
        'LAB_18089cd46': 'ValidationProcessingComplete',
        'LAB_18089cd76': 'ValidationOperationComplete',
        
        # 数据处理
        'LAB_18089d07f': 'DataProcessingComplete',
        'LAB_18089d455': 'DataValidationComplete',
        'LAB_18089d378': 'DataOperationComplete',
        'LAB_18089d435': 'DataHandlerComplete',
        
        # 资源处理
        'LAB_18089e447': 'ResourceHandlerComplete',
        'LAB_18089e70b': 'ResourceValidationComplete',
        
        # 安全处理
        'LAB_18089ed1b': 'SecurityProcessingComplete',
        'LAB_18089ea0f': 'SecurityValidationComplete',
        'LAB_18089eaae': 'SecurityOperationComplete',
        'LAB_18089ea93': 'SecurityErrorHandler',
        'LAB_18089eb22': 'SecurityResourceHandler',
        'LAB_18089ebaa': 'SecurityDataHandler',
        'LAB_18089ec32': 'SecurityContextHandler',
        'LAB_18089ecba': 'SecurityCleanupHandler',
        'LAB_18089ea2c': 'SecondarySecurityHandler',
        'LAB_18089eb3c': 'SecurityValidationHandler',
        'LAB_18089ebc4': 'SecurityOperationHandler',
        'LAB_18089ec4c': 'SecurityContextValidator',
        'LAB_18089ecd4': 'SecurityFinalHandler',
        
        # 最终处理
        'LAB_18089f45f': 'FinalProcessingComplete',
        
        # 资源计数
        'LAB_1801571ef': 'ResourceCountHandler'
    }
    return mapping

def replace_labels(content, mapping):
    """替换标签"""
    for old_label, new_label in mapping.items():
        # 替换 goto 语句
        content = re.sub(rf'\bgoto {old_label}\b', f'goto {new_label}', content)
        # 替换标签定义
        content = re.sub(rf'\b{old_label}:', f'{new_label}:', content)
    return content

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    
    # 读取文件
    content = read_file(file_path)
    
    # 创建映射
    mapping = create_label_mapping()
    
    # 替换标签
    new_content = replace_labels(content, mapping)
    
    # 写入文件
    write_file(file_path, new_content)
    
    print(f"标签替换完成！共替换了 {len(mapping)} 个标签")

if __name__ == "__main__":
    main()