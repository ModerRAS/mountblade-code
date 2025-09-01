# Python脚本用于批量重命名06_utilities.c中的参数

import re

def rename_parameters():
    # 读取文件
    with open('06_utilities.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 单参数函数重命名
    single_param_functions = [
        'InitializeObjectHandleA',
        'InitializeObjectHandleB', 
        'InitializeObjectHandleC',
        'InitializeObjectHandleE'
    ]
    
    for func in single_param_functions:
        pattern = rf'({func}\(longlong )param_1(\))'
        replacement = r'\1objectContext\2'
        content = re.sub(pattern, replacement, content)
    
    # 四参数函数重命名
    pattern = r'(ValidateAndProcessObjectContextWithParameters\()longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4(\))'
    replacement = r'\1longlong objectContext,longlong systemContext,undefined8 additionalParam1,undefined8 additionalParam2\2'
    content = re.sub(pattern, replacement, content)
    
    # 双参数函数重命名
    double_param_functions = [
        'ValidateObjectContextAndProcessFloatRange',
        'ValidateObjectContextAndProcessFloatComparison',
        'ValidateObjectContextAndProcessComplexFloatOperation',
        'ProcessObjectContextValidationAndIncrement',
        'ProcessObjectContextValidationAndReset',
        'ProcessParameterizedFloatComparison',
        'ProcessSimplifiedParameterizedFloatComparison',
        'ValidateAndProcessBufferContext',
        'ProcessBufferContextValidationAndCleanup',
        'ProcessBufferContextValidationAndSystemExit',
        'ProcessObjectContextValidationAndStatusUpdate',
        'ProcessFloatDataValidationAndConversion',
        'ProcessDataValidationAndSystemOperation',
        'ProcessFloatRangeValidationAndDataHandling',
        'ProcessSystemContextAndDataOperation',
        'ValidateObjectContextAndProcessFloatValidation'
    ]
    
    for func in double_param_functions:
        pattern = rf'({func}\(longlong )param_1(, longlong )param_2(\))'
        replacement = r'\1objectContext\2systemContext\3'
        content = re.sub(pattern, replacement, content)
    
    # 写回文件
    with open('06_utilities.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("参数重命名完成")

if __name__ == "__main__":
    rename_parameters()