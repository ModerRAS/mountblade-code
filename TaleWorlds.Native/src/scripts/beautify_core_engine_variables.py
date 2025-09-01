#!/usr/bin/env python3
"""
Core Engine 变量名美化脚本
将不够语义化的变量名替换为更有意义的名称
"""

import re
import os

def beautify_core_engine_variables():
    """美化核心引擎文件中的变量名"""
    
    # 定义变量名映射
    variable_mappings = {
        # 通用变量映射
        r'charVar1': 'statusFlag',
        r'intVar3': 'comparisonResult',
        r'tempVar5': 'allocatedMemory',
        r'pointerVar2': 'contextPointer',
        r'pointerLongVar4': 'engineContext',
        r'pointerVar6': 'currentNode',
        r'pointerVar7': 'previousNode',
        r'nextNode': 'nextNode',
        r'stackPointerX10': 'tempStackPointer',
        r'pcStackX_18': 'functionCallback',
        r'stackTempPtrX10': 'temporaryBuffer',
        r'dataPtr2': 'primaryDataPointer',
        r'dataPtr6': 'secondaryDataPointer',
        r'dataPtr7': 'tertiaryDataPointer',
        r'currentNode': 'currentNode',
        r'NextNode': 'nextNode',
        r'longVar5': 'memorySize',
        r'charVar1': 'comparisonFlag',
        r'intVar3': 'memoryCompareResult',
        r'longlong tempVar5': 'allocatedMemorySize',
        r'undefined8 \*NewMemoryNode': 'newMemoryNode',
        r'code \*NetworkStatusCallback': 'networkCallback',
        r'ComparisonResult': 'comparisonResult',
        r'systemContextPointer': 'systemContext',
        r'MemoryCompareResult': 'memoryComparisonResult',
        r'EngineContext': 'engineContext',
        r'AllocatedMemory': 'allocatedMemory',
        r'previousNode': 'previousNode',
        r'NewMemoryNode': 'newMemoryNode',
        r'NetworkStatusCallback': 'networkStatusCallback',
    }
    
    # 读取文件
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c'
    
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 应用变量名替换
    original_content = content
    for pattern, replacement in variable_mappings.items():
        content = re.sub(r'\b' + pattern + r'\b', replacement, content)
    
    # 如果有变化，写回文件
    if content != original_content:
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"成功美化 {file_path} 中的变量名")
        return True
    else:
        print("没有发现需要美化的变量名")
        return False

if __name__ == "__main__":
    beautify_core_engine_variables()