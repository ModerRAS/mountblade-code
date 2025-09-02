#!/usr/bin/env python3
"""
最终美化03_rendering.c文件中的UNK_变量和LAB标签
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def replace_unk_variables(content):
    """替换UNK_变量为语义化名称"""
    
    # UNK_变量映射表
    unk_mapping = {
        'UNK_180a168b0': 'RenderPropertyLengthBuffer',
        'UNK_180a16850': 'RenderCharValueBuffer', 
        'UNK_180a16930': 'RenderLoopCounterBuffer',
        'UNK_180a0cf4c': 'RenderDataSizeBuffer',
        'UNK_180a16900': 'RenderPropertyLengthArray',
        'UNK_180a168fc': 'RenderDataIndexBuffer',
        'UNK_18027d980': 'RenderStringTemplate',
        'UNK_1809fd0a0': 'RenderValueIndexBuffer',
        'UNK_180bd8a18': 'RenderExceptionTemplate',
        'UNK_180a16bd0': 'RenderConfigurationBuffer',
        'UNK_18098b928': 'RenderObjectStateTemplateA',
        'UNK_18098b940': 'RenderObjectStateTemplateB'
    }
    
    # 执行替换
    for unk_name, semantic_name in unk_mapping.items():
        content = re.sub(r'\b' + re.escape(unk_name) + r'\b', semantic_name, content)
    
    return content

def replace_lab_labels(content):
    """替换LAB_标签为语义化名称"""
    
    # LAB_标签映射表
    lab_mapping = {
        'LAB_180417020': 'LAB_RenderNodeDataValidation',
        'LAB_180417140': 'LAB_RenderNodeDataCheck',
        'LAB_180417341': 'LAB_RenderNodeDataProcess',
        'LAB_1804173c4': 'LAB_RenderNodeDataFinalize',
        'LAB_1804170b5': 'LAB_RenderNodeDataComplete',
        'LAB_180270c93': 'LAB_RenderStringProcessing',
        'LAB_180270c78': 'LAB_RenderStringValidation',
        'LAB_180270d29': 'LAB_RenderStringComplete',
        'LAB_180270d11': 'LAB_RenderStringCheck',
        'LAB_180272cfe': 'LAB_RenderIntegerStackCheck',
        'LAB_1802733d5': 'LAB_RenderStateFinalize'
    }
    
    # 执行替换
    for lab_name, semantic_name in lab_mapping.items():
        content = re.sub(r'\b' + re.escape(lab_name) + r'\b', semantic_name, content)
    
    return content

def improve_variable_names(content):
    """改进代码中的变量名"""
    
    # 变量名映射
    var_mapping = {
        'compressionByte1': 'compressionRatio1',
        'compressionByte2': 'compressionBitIndex',
        'bitStreamValue1': 'highBitValue',
        'bitStreamValue2': 'currentBitStream',
        'compressionFlag': 'compressionCondition',
        'compressedBitOffset': 'totalCompressedBits',
        'compressionStateBuffer': 'compressionContext',
        'compressionTableAddress': 'compressionLookupTable',
        'dataSourcePointer': 'inputDataStream',
        'dataBytePointer': 'currentDataByte',
        'LoopCounter': 'compressionIteration'
    }
    
    # 执行替换
    for var_name, semantic_name in var_mapping.items():
        # 使用正则表达式确保只替换完整的变量名
        pattern = r'\b' + re.escape(var_name) + r'\b'
        content = re.sub(pattern, semantic_name, content)
    
    return content

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c'
    
    print("开始最终美化03_rendering.c文件...")
    
    # 读取文件
    content = read_file(file_path)
    
    # 执行美化
    print("替换UNK_变量...")
    content = replace_unk_variables(content)
    
    print("替换LAB_标签...")
    content = replace_lab_labels(content)
    
    print("改进变量名...")
    content = improve_variable_names(content)
    
    # 写入文件
    write_file(file_path, content)
    
    print("最终美化完成！")
    
    # 删除脚本文件
    import os
    os.remove('/dev/shm/mountblade-code/TaleWorlds.Native/src/scripts/final_beautify_03_rendering.py')

if __name__ == "__main__":
    main()