#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
核心引擎变量美化脚本
用于美化02_core_engine.c文件中的变量名
"""

import re
import sys

def beautify_core_engine_variables():
    """美化核心引擎文件中的变量名"""
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义变量名替换映射
    variable_replacements = {
        # 堆栈变量
        r'puStack_[a-f0-9]+': 'stackPointer',
        r'uStack_[a-f0-9]+': 'stackUnsignedVar',
        r'iStack_[a-f0-9]+': 'stackIntVar',
        r'auStack_[a-f0-9]+': 'stackArray',
        
        # 通用变量
        r'uVar[0-9]+': 'unsignedVar',
        r'iVar[0-9]+': 'intVar',
        r'local_[0-9]+': 'localVar',
        
        # FFT相关变量（从文件末尾看到的）
        r'bitValue': 'bitIndex',
        r'imaginaryResult': 'imaginaryPart',
        r'realPart1': 'realComponent1',
        r'realPart2': 'realComponent2',
        r'imaginaryPart2': 'imaginaryComponent2',
        r'realResult': 'realOutput',
        r'startIndex': 'startPosition',
        r'dataBuffer': 'bufferData',
        r'bitIndex': 'bitPosition',
        r'tempIndex': 'tempPosition',
        r'loopCounter': 'iterationCount',
        r'sampleCount': 'sampleBlockSize',
        r'blockSize': 'processingBlockSize',
        r'stageCount': 'fftStageCount',
        r'currentSample': 'currentSamplePosition',
        r'twiddleReal': 'twiddleFactorReal',
        r'twiddleImaginary': 'twiddleFactorImaginary',
        
        # 音频处理相关
        r'processedValue': 'processedSample',
        
        # 数据流相关
        r'dataStreamFlags': 'streamFlags',
        r'processingStatus': 'status',
        r'bufferFlags': 'bufferStatus',
        r'contextFlags': 'contextStatus',
        r'systemEventStatus': 'eventStatus',
        r'arrayIndex': 'index',
        
        # 内存比较相关
        r'memoryCompareResult': 'memoryComparisonResult',
        r'memoryComparisonResult': 'memoryComparisonOutput',
        r'validationComparisonResult': 'validationResult',
        r'statusComparisonResult': 'statusComparisonOutput',
    }
    
    # 应用替换
    original_content = content
    for pattern, replacement in variable_replacements.items():
        content = re.sub(pattern, replacement, content)
    
    # 检查是否有变化
    if content != original_content:
        # 写回文件
        with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'w', encoding='utf-8') as f:
            f.write(content)
        print("变量美化完成")
        return True
    else:
        print("没有发现需要美化的变量")
        return False

if __name__ == "__main__":
    beautify_core_engine_variables()