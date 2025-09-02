#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import re
import sys

def generate_variable_name(prefix, address):
    """根据地址生成有意义的变量名"""
    # 根据地址范围判断变量类型
    if address.startswith("180a"):
        if "180a2" in address:
            return f"SystemDataBuffer{address[-4:]}"
        elif "180a1" in address:
            return f"SystemConfiguration{address[-4:]}"
        elif "180a0" in address:
            return f"SystemMemoryRegion{address[-4:]}"
        else:
            return f"SystemDataArea{address[-4:]}"
    elif address.startswith("180c"):
        if "180c8" in address:
            return f"NetworkConfigData{address[-4:]}"
        elif "180c9" in address:
            return f"NetworkSecurityData{address[-4:]}"
        else:
            return f"NetworkSystemData{address[-4:]}"
    elif address.startswith("180d"):
        return f"SecurityContextData{address[-4:]}"
    elif address.startswith("1809"):
        return f"SystemConstantData{address[-4:]}"
    elif address.startswith("1804"):
        return f"EngineRuntimeData{address[-4:]}"
    elif address.startswith("1802"):
        return f"GameEngineData{address[-4:]}"
    elif address.startswith("1801"):
        return f"GameSystemData{address[-4:]}"
    else:
        return f"GlobalData{address[-4:]}"

def beautify_99_unmatched_functions():
    """美化99_unmatched_functions.c文件中的变量名"""
    
    # 读取文件内容
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 匹配 DAT_ 和 UNK_ 变量
    pattern = r'(undefined|uint|ulonglong|int|char)\s+(DAT_|UNK_)([a-f0-9_]+);'
    
    def replace_match(match):
        var_type = match.group(1)
        prefix = match.group(2)
        address = match.group(3)
        
        # 生成新的变量名
        new_name = generate_variable_name(prefix, address)
        
        # 根据类型调整前缀
        if prefix == "DAT_":
            type_prefix = "Data"
        else:
            type_prefix = "System"
            
        return f"{var_type} {type_prefix}{new_name};"
    
    # 替换所有匹配的变量
    content = re.sub(pattern, replace_match, content)
    
    # 定义变量替换规则
    replacements = [
        # 替换SUB_开头的变量
        (r'undefined SUB_18013d940', 'undefined* SystemSubroutineHandler'),
        
        # 替换带后缀的变量名，移除数字后缀
        (r'void\* SystemEdgeComputingProcessor_063b0', 'void* SystemEdgeComputingProcessor'),
        (r'void\* SystemFogComputingEngine_063cc', 'void* SystemFogComputingEngine'),
        (r'void\* SystemServerlessComputingUnit_063d0', 'void* SystemServerlessComputingUnit'),
        (r'uint32_t SystemGlobalConfigurationConstant_8a9a8', 'uint32_t SystemGlobalConfigurationConstant'),
        (r'void\* SystemMicroservicesArchitecture_11ae70', 'void* SystemMicroservicesArchitecture'),
        (r'void\* SystemContainerOrchestrationEngine_11ae80', 'void* SystemContainerOrchestrationEngine'),
        (r'void\* SystemDevOpsAutomationTool_063f8', 'void* SystemDevOpsAutomationTool'),
        (r'void\* SystemContinuousIntegrationPipeline_0640c', 'void* SystemContinuousIntegrationPipeline'),
        (r'void\* SystemContinuousDeploymentService_06410', 'void* SystemContinuousDeploymentService'),
        (r'void\* SystemDataStorageManager_14f510', 'void* SystemDataStorageManager'),
        (r'void\* SystemXmlProcessingEngine_08850', 'void* SystemXmlProcessingEngine'),
    ]
    
    # 应用替换规则
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("变量美化完成")

if __name__ == "__main__":
    beautify_99_unmatched_functions()