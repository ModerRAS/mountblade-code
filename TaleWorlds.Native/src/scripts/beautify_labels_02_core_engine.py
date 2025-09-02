#!/usr/bin/env python3
"""
美化02_core_engine.c文件中的标签名
将LAB_18005364c等标签重命名为语义化名称
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

def beautify_labels(content):
    """美化标签名称"""
    # 标签映射表
    label_mappings = {
        'LAB_18005364c': 'MemoryCopyOperation',
        'LAB_18005485e': 'QueueProcessingLoop',
        'LAB_180054912': 'IndexValidationLoop',
        'LAB_180054ec9': 'StringPointerValidation',
        'LAB_180054d28': 'CharacterProcessing',
        'LAB_180054d57': 'PathSeparatorCheck',
        'LAB_180056220': 'ValidationOutcomeCheck',
        'LAB_180056228': 'IntegerVariableCheck',
        'LAB_18005726e': 'SystemResourceCleanup',
        'LAB_180057b97': 'ByteComparisonLoop',
        'LAB_180057ba2': 'UnsignedComparisonComplete',
        'LAB_1800580f9': 'DataProcessingComplete',
        'LAB_180058138': 'ByteValueValidation',
        'LAB_1800590e2': 'MatchFoundLoop',
        'LAB_1800591a6': 'FirstByteComparison',
        'LAB_180059885': 'SystemConfigurationCheck',
        'LAB_1800602a0': 'SystemInitialization',
        'LAB_1800602f0': 'InitializationStep1',
        'LAB_18006031a': 'InitializationStep2',
        'LAB_18006039b': 'InitializationComplete',
        'LAB_1800604d1': 'VariableValidation',
        'LAB_1800607cc': 'CharacterCheckComplete',
        'LAB_180060993': 'SystemStatusUpdate',
        'LAB_18006357e': 'KeyValidationLoop',
        'LAB_180063de9': 'MemoryBlockSizeCheck',
        'LAB_180064eed': 'MemoryOffsetValidation',
        'LAB_180065009': 'SystemConfigurationValidation',
        'LAB_180065a3e': 'InitializationStatusCheck',
        'LAB_18006650a': 'IntegerVariableCheck',
        'LAB_180066971': 'SystemOperationComplete',
        'LAB_180066bf4': 'ValidationOutcomeLoop',
        'LAB_180066ec4': 'MemoryEndAddressCheck',
        'LAB_180068c87': 'MemoryOperationStart',
        'LAB_180068c92': 'MemoryOperationContinue',
        'LAB_180068c94': 'MemoryOperationComplete',
        'LAB_180069842': 'SystemVariableValidation',
        'LAB_180069c2b': 'ByteComparisonCheck',
        'LAB_180069dc3': 'CharacterComparisonComplete',
        'LAB_180069dda': 'StringProcessingComplete',
        'LAB_180070a3f': 'DataProcessingLoop',
        'LAB_180070b00': 'DataSizeValidation',
        'LAB_180070db8': 'MemoryAllocationLoop',
        'LAB_180070e64': 'ReturnValueValidation',
        'LAB_180070ee8': 'MemoryCheckLoop',
        'LAB_180070f81': 'DataSizeCheck',
        'LAB_180071000': 'UnsignedValueCheck',
        'LAB_1800710b8': 'BufferSizeValidation',
        'LAB_18007113f': 'DataSizeCheckComplete',
        'LAB_1800715eb': 'IntegerVariableCheck',
        'LAB_1800718e9': 'MemoryProcessingComplete',
        'LAB_180071af3': 'SystemResourceLoop',
        'LAB_180071b69': 'ResourceProcessingLoop',
        'LAB_180071c1a': 'ReturnValueCheck',
        'LAB_180071c93': 'DataProcessingLoop',
        'LAB_180071d1f': 'ReturnValueValidation',
        'LAB_180071d94': 'UnsignedValueCheck',
        'LAB_180071e34': 'UnsignedVariableCheck',
        'LAB_180071eb0': 'ReturnValueCheckComplete',
        'LAB_180072120': 'ThreadStatusCheck',
        'LAB_1800721e1': 'ReturnValueValidation',
        'LAB_1800722f5': 'BufferStatusCheck',
        'LAB_180072521': 'DataProcessingLoop',
        'LAB_1800725ac': 'MemoryAllocationLoop',
        'LAB_180072662': 'ReturnValue6Check',
        'LAB_1800726e7': 'MemoryCheckLoop',
        'LAB_180072780': 'ReturnValueValidation',
        'LAB_1800727ff': 'MemoryAddressCheck',
        'LAB_1800728ad': 'DataSizeValidation',
        'LAB_180072934': 'DataPointerCheck',
        'LAB_1800729bd': 'MemoryAddressValidation',
        'LAB_180075f4f': 'FloatVariableCheck',
        'LAB_180076feb': 'DataBufferValidation',
        'LAB_18007738d': 'MemoryAllocationCheck',
        'LAB_180077847': 'SystemVariableCheck',
        'LAB_180077879': 'CharacterValidation',
        'LAB_180077fcf': 'BufferAllocationCheck',
        'LAB_1800782d4': 'SystemFlagCheck',
        'LAB_1800782e0': 'SystemFlagValidation',
        'LAB_180079c12': 'LongVariableValidation',
        'LAB_180079cd7': 'LongVariableCheck',
        'LAB_180079d9b': 'MemoryBlockValidation',
        'LAB_18007a5ac': 'BufferProcessingLoop',
        'LAB_18007ac04': 'StackVariableCheck',
        'LAB_180079e40': 'IntegerValueCheck',
        'LAB_180079fb3': 'PointerValidation',
        'LAB_18007a203': 'BufferStatusCheck',
        'LAB_18007a142': 'BufferAllocationValidation',
        'LAB_18007a312': 'DataProcessingComplete',
        'LAB_18007a58b': 'SystemProcessingComplete',
        'LAB_18007a5ac': 'IntegerValueValidation',
        'LAB_1800802aa': 'SystemBitCheck',
        'LAB_180082720': 'SystemOffsetCheck',
        'LAB_180086316': 'SystemProcessingLoop',
        'LAB_18008642b': 'SystemOperationStep',
        'LAB_180087337': 'DataValidationLoop',
        'LAB_1800872f7': 'DataValidationStep',
        'LAB_18008733a': 'BooleanValidation',
        'LAB_180087418': 'TargetDataValidation',
        'LAB_18008755d': 'StatusFlagCheck',
        'LAB_18008758f': 'StatusFlagValidation',
        'LAB_1800878e0': 'CharacterValidation',
        'LAB_18008807f': 'IntegerValueCheck',
        'LAB_180088131': 'SystemProcessingComplete',
        'LAB_180087f81': 'DataValidationLoop',
        'LAB_180087f16': 'LongVariableValidation',
        'LAB_180088ac9': 'StackVariableCheck',
        'LAB_18008913b': 'SystemEventProcessing',
        'LAB_18008917c': 'SystemDataValidation',
        'LAB_1800892ba': 'MemorySizeCheck',
        'LAB_18008927d': 'DataPointerValidation',
        'LAB_1800892bd': 'ByteComparisonCheck',
        'LAB_1800892fd': 'MemoryProcessingStep',
        'LAB_18008984e': 'IntegerValueValidation',
        'LAB_1800897d5': 'StringProcessingStep',
        'LAB_180089891': 'CharacterComparison',
        'LAB_180089861': 'IntegerValueCheck',
        'LAB_18008a310': 'DataStructureCheck',
        'LAB_18008a327': 'BufferAllocationCheck',
        'LAB_18008a32f': 'StringIndexValidation',
        'LAB_18008a753': 'PathSeparatorValidation',
        'LAB_18008a841': 'StringComparison',
        'LAB_18008acc1': 'DataProcessingLoop',
        'LAB_18008ae5a': 'LongVariableValidation',
        'LAB_18008b3e2': 'DataBufferValidation',
        'LAB_18008b7ea': 'SystemTemplateCheck',
        'LAB_18008c01e': 'CharacterValidation',
        'LAB_18008c531': 'DataPointerComparison',
        'LAB_18008cc42': 'ParentNodeValidation',
        'LAB_18008cd70': 'BooleanFlagCheck',
        'LAB_18008ce20': 'SystemContextCheck',
        'LAB_18008ce85': 'BufferAllocationStatus',
        'LAB_18008caf0': 'DataProcessingLoop',
        'LAB_18008cb7e': 'DataBufferComparison',
        'LAB_18008cdfe': 'SystemContextValidation',
        'LAB_18008d51d': 'ByteComparisonLoop',
        'LAB_18008d56b': 'UnsignedComparisonCheck',
        'LAB_18008d7a0': 'PrimaryDataCheck',
        'LAB_18008d951': 'ReservedParameterCheck',
        'LAB_18008d954': 'ParameterValidation',
        'LAB_18008d9c4': 'SystemOperationStep',
        'LAB_18008d9f7': 'InitializationStatus',
        'LAB_18008daa1': 'ParameterCheckLoop',
        'LAB_18008daa4': 'ParameterValidationComplete',
        'LAB_18008dde0': 'StackVariableValidation',
        'LAB_18008e13f': 'SystemProcessingComplete',
        'LAB_18008ebc0': 'SystemEventLoop',
        'LAB_18008eecc': 'ByteComparisonValidation',
        'LAB_18008ef40': 'SystemValidationComplete',
        'LAB_18008efb7': 'MemoryBlockCheck',
        'LAB_18008ee00': 'SystemProcessingStart',
        'LAB_18008efcb': 'SystemContextCheck',
        'LAB_18008eff7': 'MemoryProcessingComplete',
        'LAB_18008f4f4': 'ReservedParameterValidation',
        'LAB_18008f669': 'MemoryProcessingLoop',
        'LAB_18008fb99': 'SystemValidationLoop',
        'LAB_180091164': 'StatusFlagCheck',
        'LAB_180091192': 'StatusValidationStep',
        'LAB_1800911c4': 'SystemCheckComplete',
        'LAB_180092bbb': 'BufferAllocationCheck',
        'LAB_180092c16': 'StackVariableValidation',
        'LAB_180092e59': 'SystemLongVariableCheck',
        'LAB_180093089': 'LongVariableValidation',
        'LAB_1800932b6': 'SystemVariableCheck',
        'LAB_1800934cd': 'VariableValidationLoop',
        'LAB_180093cb6': 'SystemOperationComplete',
        'LAB_180093e1b': 'SystemOffsetValidation',
        'LAB_180095527': 'DataProcessingStep',
        'LAB_18009556a': 'DataBufferValidation',
        'LAB_180095648': 'SystemIntegerCheck',
        'LAB_1800957c7': 'DataProcessingComplete',
        'LAB_18009580a': 'DataBufferCheck',
        'LAB_1800958e8': 'IntegerValueLoop',
        'LAB_1800960d8': 'DataProcessingComplete',
        'LAB_18009611a': 'TertiaryDataValidation',
        'LAB_180096990': 'SystemProcessingLoop',
        'LAB_18009662b': 'DataProcessingStep',
        'LAB_18009667a': 'ByteComparisonLoop',
        'LAB_180096691': 'ComparisonComplete',
        'LAB_1800967cd': 'TertiaryDataCheck',
        'LAB_180096a34': 'BooleanValidation',
        'LAB_180096e94': 'CharacterProcessing',
        'LAB_180097ca1': 'CharacterValidationComplete',
        'LAB_180098929': 'SystemEventValidation'
    }
    
    # 替换标签
    for old_label, new_label in label_mappings.items():
        # 替换 goto 语句
        content = re.sub(rf'\bgoto {old_label}\b', f'goto {new_label}', content)
        # 替换标签定义
        content = re.sub(rf'{old_label}:', f'{new_label}: // 原始标签：{old_label}', content)
        # 替换注释中的引用
        content = re.sub(rf'// 原始标签：{old_label}', f'// 原始标签：{old_label}，现已重命名为{new_label}', content)
    
    return content

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("Usage: python beautify_labels.py <file_path>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    
    # 读取文件
    content = read_file(file_path)
    
    # 美化标签
    beautified_content = beautify_labels(content)
    
    # 写入文件
    write_file(file_path, beautified_content)
    
    print(f"标签美化完成: {file_path}")

if __name__ == "__main__":
    main()