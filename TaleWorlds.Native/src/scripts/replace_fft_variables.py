#!/usr/bin/env python3
"""
脚本用于批量替换02_core_engine.c文件中的变量名
将逆向工程生成的变量名替换为语义化的名称
"""

import re

def replace_variables_in_file(file_path):
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义变量名替换映射
    variable_mappings = {
        # FFT相关变量
        'currentSample': 'currentSampleIndex',
        'loopCounter': 'fftLoopCounter',
        'bitIndex': 'bitReversalIndex',
        'bitValue': 'bitReversalValue',
        'processedValue': 'processedSampleValue',
        'shiftValue': 'bitShiftValue',
        'scaleFactor': 'fftScaleFactor',
        'twiddleReal': 'twiddleFactorReal',
        'twiddleImaginary': 'twiddleFactorImag',
        'startIndex': 'fftStartIndex',
        'endIndex': 'fftEndIndex',
        'groupIndex': 'fftGroupIndex',
        'tempIndex': 'tempSampleIndex',
        'stageCount': 'fftStageCount',
        'blockSize': 'fftBlockSize',
        'dataBuffer': 'audioDataBuffer',
        'realResult': 'realPartResult',
        'imaginaryResult': 'imaginaryPartResult',
        'realPart1': 'firstComplexReal',
        'realPart2': 'secondComplexReal',
        'imaginaryPart2': 'secondComplexImag',
    }
    
    # 执行替换，注意要按照单词边界匹配，避免误替换
    for old_name, new_name in variable_mappings.items():
        # 使用正则表达式确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"已成功替换文件 {file_path} 中的变量名")

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
    replace_variables_in_file(file_path)