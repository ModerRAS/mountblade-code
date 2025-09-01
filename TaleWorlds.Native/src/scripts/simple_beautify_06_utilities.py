#!/usr/bin/env python3
"""
简化的美化脚本，专门处理06_utilities.c文件中的变量名
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

def beautify_utilities():
    """美化06_utilities.c文件"""
    
    # 读取文件
    content = read_file('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c')
    
    # 关键变量名替换映射
    replacements = {
        # 系统内存池缓冲区
        'SystemMemoryPoolBufferA': 'SystemMemoryPoolBufferPrimary',
        'SystemMemoryPoolBufferB': 'SystemMemoryPoolBufferSecondary',
        'SystemMemoryPoolBufferC': 'SystemMemoryPoolBufferTertiary',
        
        # 系统内存数据池
        'SystemMemoryDataPoolA': 'SystemMemoryDataPoolPrimary',
        'SystemMemoryDataPoolB': 'SystemMemoryDataPoolSecondary',
        'SystemMemoryDataPoolC': 'SystemMemoryDataPoolTertiary',
        'SystemMemoryDataPoolD': 'SystemMemoryDataPoolQuaternary',
        
        # 系统内存恢复池
        'SystemMemoryRecoveryPoolA': 'SystemMemoryRecoveryPoolPrimary',
        'SystemMemoryRecoveryPoolB': 'SystemMemoryRecoveryPoolSecondary',
        'SystemMemoryRecoveryPoolC': 'SystemMemoryRecoveryPoolTertiary',
        'SystemMemoryRecoveryPoolD': 'SystemMemoryRecoveryPoolQuaternary',
        
        # 系统性能计数器
        'SystemPerformanceCounterA': 'SystemPerformanceCounterPrimary',
        
        # 系统数据缓冲区
        'SystemDataBufferA': 'SystemDataBufferPrimary',
        'SystemDataBufferB': 'SystemDataBufferSecondary',
        'SystemDataBufferC': 'SystemDataBufferTertiary',
        'SystemDataBufferD': 'SystemDataBufferQuaternary',
        
        # 加密相关
        'EncryptionIV': 'EncryptionInitializationVector',
        
        # 矩阵元素
        'matrixElementX': 'matrixElementXCoordinate',
        'matrixElementW': 'matrixElementWComponent',
        
        # 系统事件处理器
        'SystemEventHandlerUI': 'SystemEventHandlerUserInterface',
        
        # 系统配置标志
        'SystemConfigurationFlagA': 'SystemConfigurationFlagActive',
        
        # 系统状态字符
        'SystemStatusCharB': 'SystemStatusCharBuffer',
        'SystemStatusCharJ': 'SystemStatusCharJournal',
        
        # 系统控制字节
        'SystemControlByteC': 'SystemControlByteControl',
        
        # 系统内存标志
        'SystemMemoryFlagE': 'SystemMemoryFlagEnabled',
        'SystemMemoryFlagK': 'SystemMemoryFlagKernel',
        
        # 系统同步标志
        'SystemSyncFlagF': 'SystemSyncFlagFast',
        
        # 系统线程标志
        'SystemThreadFlagG': 'SystemThreadFlagGlobal',
        
        # 系统资源标志
        'SystemResourceFlagH': 'SystemResourceFlagHighPriority',
        
        # 系统进程标志
        'SystemProcessFlagI': 'SystemProcessFlagInteractive',
        
        # 系统数据模板
        'SystemDataTemplateA': 'SystemDataTemplateActive',
        
        # 系统数据类型模板
        'SystemDataTypeTemplateA': 'SystemDataTypeTemplateActive',
        'SystemDataTypeTemplateB': 'SystemDataTypeTemplateBuffer',
        'SystemDataTypeTemplateC': 'SystemDataTypeTemplateCache',
        'SystemDataTypeTemplateD': 'SystemDataTypeTemplateDatabase',
        
        # 系统资源模板
        'SystemResourceTemplateA': 'SystemResourceTemplateActive',
        'SystemResourceTemplateB': 'SystemResourceTemplateBackground',
        'SystemResourceTemplateC': 'SystemResourceTemplateCache',
        'SystemResourceTemplateD': 'SystemResourceTemplateDatabase',
        'SystemResourceTemplateE': 'SystemResourceTemplateEvent',
        'SystemResourceTemplateF': 'SystemResourceTemplateFile',
        'SystemResourceTemplateG': 'SystemResourceTemplateGraphics',
        'SystemResourceTemplateH': 'SystemResourceTemplateHardware',
        'SystemResourceTemplateI': 'SystemResourceTemplateInput',
        'SystemResourceTemplateJ': 'SystemResourceTemplateJob',
        'SystemResourceTemplateK': 'SystemResourceTemplateKernel',
        'SystemResourceTemplateL': 'SystemResourceTemplateLibrary',
        'SystemResourceTemplateM': 'SystemResourceTemplateMemory',
        'SystemResourceTemplateN': 'SystemResourceTemplateNetwork',
        
        # 系统浮点模板
        'SystemFloatTemplateA': 'SystemFloatTemplateActive',
    }
    
    # 应用替换
    for old_name, new_name in replacements.items():
        # 使用单词边界确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
        print(f"替换: {old_name} -> {new_name}")
    
    # 写回文件
    write_file('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', content)
    
    print("06_utilities.c 文件美化完成")

if __name__ == "__main__":
    beautify_utilities()