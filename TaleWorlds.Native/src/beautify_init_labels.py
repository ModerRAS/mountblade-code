#!/usr/bin/env python3
"""
美化01_initialization.c文件中的LAB_标签
"""

import re
import os

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def analyze_lab_labels(content):
    """分析LAB_标签的上下文并生成替换映射"""
    lab_pattern = r'LAB_([0-9a-fA-F]{8})'
    labs = re.findall(lab_pattern, content)
    
    # 为每个LAB_标签生成有意义的名称
    replacements = {}
    
    # 常见的跳转标签模式
    common_patterns = {
        '180046c5e': 'SystemResultZeroHandler',
        '180047f2c': 'StringComparisonLoop',
        '180047f93': 'StringComparisonEnd',
        '180048dd7': 'ByteComparisonEnd',
        '180048db7': 'NodeTraversalStart',
        '180048dba': 'NodeTraversalContinue',
        '180048e00': 'ResourceCheckLoop',
        '180048e20': 'ResourceCheckEnd',
        '180048e74': 'ConfigurationCheckEnd',
        '180048f62': 'AdditionalParameterCheck',
        '18004a2b9': 'ResourceOffsetCheck',
        '18004a322': 'ResourceProcessingEnd',
        '18004c7ef': 'BufferAddressCheck',
        '18004d1b9': 'AllocationFlagsCheck',
        '18004d1c1': 'ResourcePointerCheck',
        '18004d1a2': 'MemoryAllocationHandler',
        '18004e721': 'MemoryAllocationEnd',
        '18005122d': 'SystemFlagCheck',
        '180051f8b': 'StringCompareLoop',
        '180051fc9': 'StringCompareEnd',
        '180052ce3': 'SystemValueCheck1',
        '180052de5': 'SystemValueCheck2',
        '1800535b0': 'DataProcessingLoop',
        '18005364c': 'DataLengthCheck',
        '180054302': 'ResourceCountCheck',
        '18005419d': 'ResourceProcessingStart',
        '18005485e': 'SystemIdCheck',
        '180054912': 'SystemIdLoop',
        '180054ec9': 'MemoryPointerCheck',
        '180054d28': 'PathSeparatorCheck',
        '180054d57': 'PathValidationEnd',
        '180056220': 'SystemCounterCheck',
        '180056228': 'SystemFlagHandler',
        '18005726e': 'DataTransferEnd',
        '180057b97': 'ValueComparisonStart',
        '180057ba2': 'ValueComparisonEnd',
        '1800580f9': 'SystemValueHandler',
        '180058138': 'SystemValueCheckEnd',
        '18005856a': 'SystemPointerCheck',
        '1800590e2': 'ValidationLoop',
        '1800591a6': 'ValidationEnd',
        '180059885': 'SystemOperationEnd',
        '18005c9be': 'ResourceNodeCheck',
        '18005ccff': 'DataManagerCheck',
        '18005eb20': 'ResourceAllocationEnd',
        '18005f0e6': 'CounterCheckLoop',
        '18005f30a': 'ResourceProcessingLoop',
        '18005f6a2': 'SystemHandleCheck',
        '18005fa1c': 'ValueRangeCheck',
        '18005f818': 'ValueProcessingStart',
        '18005f848': 'ValueCalculationLoop',
        '18005f84c': 'ValueProcessingContinue',
        '18005f8c7': 'ValueComparisonHandler',
        '18005f92b': 'ValueCheckEnd',
        '18005f8e3': 'ValueHandlerEnd',
        '18005f9e1': 'ValueFinalCheck',
        '18005fa01': 'SystemMemoryHandler',
        '18005fd51': 'SystemValue14Check',
        '18005fd56': 'SystemValue14Handler',
        '18005fc81': 'SystemValue14Start',
        '18005fcf9': 'SystemValue14Loop',
        '18005fd0d': 'SystemValue14End',
        '18005fda6': 'SystemValue14Final',
        '18005ff87': 'UnsignedValueCheck',
        '180060026': 'UnsignedValueHandler',
        '180060007': 'UnsignedValueLoop',
        '1800602a0': 'ResourceProcessingHandler',
        '1800602f0': 'ResourceDataHandler',
        '18006031a': 'ResourceDataEnd',
        '18006039b': 'ResourceFinalCheck',
        '1800604d1': 'LocalResourceCheck',
        '1800607cc': 'CharacterCheckEnd',
        '180060993': 'SystemDataHandler',
        '18006357e': 'SystemValue3Check',
        '180063de9': 'DataPointerCheck',
        '180065009': 'UnsignedValue9Check',
        '180064eed': 'MemoryPointer1Check',
        '180065a3e': 'SystemResultCheck',
        '18006650a': 'SystemIndexCheck',
        '180066971': 'SystemProcessingEnd',
        '180066bf4': 'SystemCounterCheck',
        '180066ec4': 'LocalSystemFlagsCheck',
        '180068c87': 'SystemValueHandler1',
        '180068c92': 'SystemValueHandler2',
        '180068c94': 'SystemValueHandler3',
        '180069842': 'LocalResourceCheck2',
        '180069c2b': 'ValidationCheck',
        '180069dc3': 'SystemValue5Check',
        '180069dda': 'SystemValue5End',
        '18006bf7f': 'SecondaryResourceCheck',
        '18006c61e': 'SystemValue1e8Check',
        '18006c642': 'SystemValue1e8End',
        '18006c852': 'MemoryPointer3Check',
        '18006ca44': 'MemoryPointer4Check',
        '18006c9ac': 'MemoryCheckLoop',
        '18006ca95': 'MemoryCheckEnd',
        '18006ccef': 'ResourceProcessingEnd2',
        '18006cfb1': 'LocalResourceCheck3',
        '18006d3bb': 'ValidationCheck2',
        '18006d67d': 'SystemHandlerEnd',
        '18006d7fb': 'ResourceHandlerLoop',
        '18006d957': 'SystemValue5Check2',
        '18006d9f6': 'SystemValue5End2',
        '18006d9d7': 'SystemValueCheckLoop',
        '18006f48d': 'SystemProcessingLoop',
        '180070230': 'SystemHandlerEnd2',
        '180070a3f': 'ResourceNodeLoop',
        '180070b00': 'SystemValue14Check2',
        '1800718e9': 'SystemProcessingEnd3',
        '180070db8': 'SystemProcessingStart',
        '180070e64': 'SystemValue14Check3',
        '180070ee8': 'SystemProcessingStart2',
        '180070f81': 'SystemValue14Check4',
        '180071000': 'SystemValue5Check3',
        '1800710b8': 'SystemValue6Check',
        '18007113f': 'SystemValue6Check2',
        '1800715eb': 'SystemIndexCheck2',
        '180071af3': 'SystemProcessingLoop2',
        '180071b69': 'SystemProcessingLoop3',
        '180071c1a': 'SystemValue12Check',
        '180071c93': 'SystemValue12End',
        '180071d1f': 'SystemValue12Check2',
        '180071d94': 'SystemValue11Check',
        '180071e34': 'SystemValue2Check',
        '180071eb0': 'SystemValue11Check2',
        '180072d7b': 'SystemFlagCheck2',
        '180072120': 'SystemValue16Check',
        '1800721e1': 'SystemValue6Check3',
        '1800722f5': 'BoolCheckEnd',
        '180072521': 'SystemProcessingLoop4',
        '1800725ac': 'SystemProcessingEnd4',
        '180072662': 'SystemValue16Check2',
        '1800726e7': 'SystemProcessingStart3',
        '180072780': 'SystemValue16Check3',
        '1800727ff': 'SystemValue4Check2',
        '1800728ad': 'SystemValue6Check4',
        '180072934': 'SystemValue8Check',
        '1800729bd': 'SystemValue4Check3',
        '180075f4f': 'FloatValueCheck',
        '180076feb': 'SystemValue11Check3',
        '18007738d': 'SystemValue3Check2',
        '180077847': 'TabCheckLoop',
        '180077879': 'TabCheckEnd',
        '180077fcf': 'TabCheckEnd2',
        '1800782d4': 'SystemValue9Check',
        '1800782e0': 'SystemValue9End',
        '180079c12': 'MemoryPointer7Check',
        '180079cd7': 'MemoryPointer7Check2',
        '180079d9b': 'ResourceOffsetCheck2',
        '18007a5ac': 'PointerValueCheck',
        '18007ac04': 'StackValueCheck',
        '180079e40': 'SystemHandle1Check',
        '180079fb3': 'StackPointerCheck',
        '18007a203': 'SystemHandle1Check2',
        '18007a142': 'SystemHandle1Check3',
        '18007a312': 'SystemProcessingEnd5',
        '18007a58b': 'SystemProcessingEnd6',
        '18007b44a': 'LocalSystemFlagsCheck2',
        '18007b454': 'LocalSystemFlagsCheck3',
        '18007b8dc': 'SystemProcessingLoop5',
        '18007b8fd': 'SystemProcessingEnd7',
        '18007eb55': 'ConfigurationDataCheck',
        '18007f5cb': 'SystemValueCheck3',
        '18007f7cf': 'SystemCounterCheck2',
        '18007f89f': 'ResourceIndexCheck',
        '18007f89f': 'ResourceIndexEnd'
    }
    
    # 为每个LAB_标签分配名称
    for lab in labs:
        if lab in common_patterns:
            replacements[f'LAB_{lab}'] = common_patterns[lab]
        else:
            # 为未识别的标签生成通用名称
            replacements[f'LAB_{lab}'] = f'Label_{lab}'
    
    return replacements

def replace_lab_labels(content, replacements):
    """替换LAB_标签"""
    for old_label, new_label in replacements.items():
        # 替换goto语句
        content = re.sub(rf'\bgoto {old_label}\b', f'goto {new_label}', content)
        # 替换标签定义
        content = re.sub(rf'^{old_label}:', f'{new_label}:', content, flags=re.MULTILINE)
    
    return content

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c'
    
    # 读取文件
    content = read_file(file_path)
    
    # 分析LAB_标签
    replacements = analyze_lab_labels(content)
    
    # 替换LAB_标签
    new_content = replace_lab_labels(content, replacements)
    
    # 写入文件
    write_file(file_path, new_content)
    
    print(f"已处理 {len(replacements)} 个LAB_标签")

if __name__ == '__main__':
    main()