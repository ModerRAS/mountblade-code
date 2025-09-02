#!/usr/bin/env python3
import re
import sys

def beautify_initialization_variables():
    """美化01_initialization.c文件中的变量名"""
    
    # 读取文件内容
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义变量名替换映射
    variable_mappings = {
        # 布尔变量
        'bVar1': 'isInitialized',
        'bVar2': 'isValid', 
        'bVar3': 'isComplete',
        'bVar4': 'isActive',
        'bVar5': 'isEnabled',
        'bVar6': 'isAvailable',
        'bVar7': 'isReady',
        'bVar8': 'isSuccess',
        'bVar9': 'isError',
        'bVar10': 'isFound',
        'bVar11': 'isMatch',
        'bVar12': 'isEqual',
        'bVar13': 'isDebugMode',
        'bVar14': 'isSilentMode',
        'bVar15': 'isSystemReady',
        'bVar16': 'isResourceReady',
        'bVar17': 'isMemoryReady',
        'bVar18': 'isThreadReady',
        'bVar19': 'isDataReady',
        'bVar20': 'isConfigurationReady',
        'bVar21': 'isAllocationReady',
        'bVar22': 'isCleanupReady',
        'bVar23': 'isValidationReady',
        'bVar24': 'isOperationReady',
        'bVar25': 'isProcessingReady',
        'bVar26': 'isSystemInitialized',
        'bVar27': 'isMemoryInitialized',
        'bVar28': 'isResourceInitialized',
        'bVar29': 'isThreadInitialized',
        'bVar30': 'isDataInitialized',
        
        # 字符变量
        'cVar1': 'charResult',
        'cVar2': 'charStatus',
        'cVar3': 'charFlag',
        'cVar4': 'charCode',
        'cVar5': 'charValue',
        'cVar6': 'charData',
        'cVar7': 'charBuffer',
        'cVar8': 'charInput',
        'cVar9': 'charOutput',
        'cVar10': 'charSignal',
        
        # 浮点变量
        'fVar13': 'scaleFactor1',
        'fVar14': 'scaleFactor2', 
        'fVar15': 'scaleFactor3',
        'fVar16': 'scaleFactor4',
        'fVar17': 'interpolationFactor1',
        'fVar18': 'interpolationFactor2',
        'fVar19': 'interpolationFactor3',
        'fVar20': 'interpolationFactor4',
        'fVar21': 'floatResult1',
        'fVar22': 'floatResult2',
        'fVar23': 'floatResult3',
        'fVar24': 'floatResult4',
        'fVar25': 'calculationResult1',
        'fVar26': 'calculationResult2',
        'fVar27': 'calculationResult3',
        'fVar28': 'calculationResult4',
        'fVar29': 'tempFloat1',
        'fVar30': 'tempFloat2',
        
        # 字节指针变量
        'pbVar1': 'bytePointer1',
        'pbVar2': 'bytePointer2',
        'pbVar3': 'bytePointer3',
        'pbVar4': 'bytePointer4',
        'pbVar5': 'bytePointer5',
        'pbVar6': 'bytePointer6',
        'pbVar7': 'bytePointer7',
        'pbVar8': 'bytePointer8',
        'pbVar9': 'bytePointer9',
        'pbVar10': 'bytePointer10',
        'pbVar11': 'bytePointer11',
        'pbVar12': 'bytePointer12',
        'pbVar13': 'bytePointer13',
        
        # 字符指针变量
        'pcVar1': 'charPointer1',
        'pcVar2': 'charPointer2',
        'pcVar3': 'charPointer3',
        'pcVar4': 'charPointer4',
        'pcVar5': 'charPointer5',
        'pcVar6': 'charPointer6',
        'pcVar7': 'charPointer7',
        'pcVar8': 'charPointer8',
        'pcVar9': 'charPointer9',
        'pcVar10': 'charPointer10',
        'pcVar11': 'charPointer11',
        'pcVar12': 'charPointer12',
        'pcVar13': 'charPointer13',
        'pcVar14': 'charPointer14',
        'pcVar15': 'charPointer15',
        'pcVar16': 'charPointer16',
        'pcVar17': 'charPointer17',
        'pcVar18': 'charPointer18',
        'pcVar19': 'charPointer19',
        'pcVar20': 'charPointer20',
        'pcVar21': 'charPointer21',
        'pcVar22': 'charPointer22',
        'pcVar23': 'charPointer23',
        'pcVar24': 'charPointer24',
        'pcVar25': 'charPointer25',
        'pcVar26': 'charPointer26',
        'pcVar27': 'charPointer27',
        'pcVar28': 'charPointer28',
        'pcVar29': 'charPointer29',
        'pcVar30': 'charPointer30',
    }
    
    # 创建正则表达式模式，确保只匹配完整的变量名
    original_content = content
    
    # 对每个变量名进行替换
    for old_name, new_name in variable_mappings.items():
        # 使用单词边界确保只匹配完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    # 如果内容有变化，则写入文件
    if content != original_content:
        with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c', 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"成功美化变量名，共替换了{len(variable_mappings)}个变量")
    else:
        print("没有找到需要替换的变量名")

if __name__ == "__main__":
    beautify_initialization_variables()