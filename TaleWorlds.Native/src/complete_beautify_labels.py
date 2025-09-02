#!/usr/bin/env python3

import re

# 读取文件内容
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c', 'r', encoding='utf-8') as f:
    content = f.read()

# 创建完整的替换映射
replacements = {
    # 分配检查相关
    'LAB_18004d1b9': 'LAB_AllocationFlagCheck',
    'LAB_18004d1c1': 'LAB_ResourceAllocationCheck',
    'LAB_18004d1a2': 'LAB_AllocationHandler',
    
    # 错误处理相关
    'LAB_18004e721': 'LAB_ErrorHandler',
    
    # 系统标志检查
    'LAB_18005122d': 'LAB_SystemFlagCheck',
    
    # 系统验证相关
    'LAB_180051f8b': 'LAB_SystemValidation',
    'LAB_180051fc9': 'LAB_SystemValueValidation',
    
    # 系统标志处理
    'LAB_180052ce3': 'LAB_SystemFlagHandler',
    'LAB_180052de5': 'LAB_SystemFlagCheckComplete',
    
    # 数据处理相关
    'LAB_1800535b0': 'LAB_DataProcessingLoop',
    'LAB_18005364c': 'LAB_DataLengthCheck',
    
    # 资源计数相关
    'LAB_180054302': 'LAB_ResourceCountCheck',
    'LAB_18005419d': 'LAB_ResourceCountComplete',
    
    # 系统索引检查
    'LAB_18005485e': 'LAB_SystemIndexCheck',
    'LAB_180054912': 'LAB_SystemIdCheck',
    
    # 路径处理相关
    'LAB_180054ec9': 'LAB_PathProcessingComplete',
    'LAB_180054d28': 'LAB_PathSegmentCheck',
    'LAB_180054d57': 'LAB_PathSeparatorCheck',
    
    # 系统计数器
    'LAB_180056220': 'LAB_SystemCounterLoop',
    'LAB_180056228': 'LAB_SystemCounterCheck',
    
    # 系统操作完成
    'LAB_18005726e': 'LAB_SystemOperationComplete',
    
    # 值比较相关
    'LAB_180057b97': 'LAB_ValueComparisonCheck',
    'LAB_180057ba2': 'LAB_ValueComparisonComplete',
    
    # 系统数据检查
    'LAB_1800580f9': 'LAB_SystemDataCheck',
    'LAB_180058138': 'LAB_SystemDataValidation',
    'LAB_18005856a': 'LAB_SystemPointerCheck',
    
    # 系统标志处理
    'LAB_1800590e2': 'LAB_SystemFlagLoop',
    'LAB_1800591a6': 'LAB_SystemFlagValueCheck',
    
    # 资源处理完成
    'LAB_180059885': 'LAB_ResourceProcessingComplete',
    
    # 资源节点检查
    'LAB_18005c9be': 'LAB_ResourceNodeCheck',
    
    # 数据管理器检查
    'LAB_18005ccff': 'LAB_DataManagerCheck',
    
    # 系统数据管理器
    'LAB_18005eb20': 'LAB_SystemDataManager',
    
    # 循环控制
    'LAB_18005f0e6': 'LAB_LoopControl',
    'LAB_18005f30a': 'LAB_IterationHandler',
    
    # 系统句柄检查
    'LAB_18005f6a2': 'LAB_SystemHandleCheck',
    
    # 值验证相关
    'LAB_18005fa1c': 'LAB_ValueValidationCheck',
    'LAB_18005fa01': 'LAB_ValueValidationStart',
    'LAB_18005f818': 'LAB_ValueValidationHandler',
    'LAB_18005f848': 'LAB_ValueProcessingStart',
    'LAB_18005f84c': 'LAB_ValueProcessingCheck',
    'LAB_18005f8c7': 'LAB_ValueComparisonHandler',
    'LAB_18005f8e3': 'LAB_MemoryValueHandler',
    'LAB_18005f92b': 'LAB_MemoryValueCheck',
    'LAB_18005f9e1': 'LAB_MemoryValueComplete',
    
    # 内存值检查
    'LAB_18005fd51': 'LAB_MemoryValueValidation',
    'LAB_18005fd56': 'LAB_MemoryValueCheckStart',
    'LAB_18005fc81': 'LAB_ValueProcessingLoop',
    'LAB_18005fcf9': 'LAB_ValueRangeCheck',
    'LAB_18005fd0d': 'LAB_ValueProcessingComplete',
    'LAB_18005fda6': 'LAB_MemoryValueComplete',
    
    # 系统值处理
    'LAB_18005ff87': 'LAB_SystemValueHandler',
    'LAB_180060026': 'LAB_SystemValueCheck',
    'LAB_180060007': 'LAB_SystemValueProcessing',
    
    # 系统操作处理
    'LAB_1800602a0': 'LAB_SystemOperationHandler',
    'LAB_1800602f0': 'LAB_SystemSubOperation',
    'LAB_18006031a': 'LAB_SystemOperationCheck',
    'LAB_18006039b': 'LAB_OperationCompletion',
    
    # 资源指针检查
    'LAB_1800604d1': 'LAB_ResourcePointerCheck',
    
    # 字符串处理
    'LAB_1800607cc': 'LAB_StringHandler',
    
    # 数据处理完成
    'LAB_180060993': 'LAB_DataProcessingComplete',
    
    # 系统值验证
    'LAB_18006357e': 'LAB_SystemValueValidation',
    
    # 数据指针检查
    'LAB_180063de9': 'LAB_DataPointerCheck',
    
    # 内存指针检查
    'LAB_180065009': 'LAB_MemoryPointerCheck',
    'LAB_180064eed': 'LAB_MemoryPointerLoop',
    
    # 系统结果检查
    'LAB_180065a3e': 'LAB_SystemResultCheck',
    
    # 系统索引处理
    'LAB_18006650a': 'LAB_SystemIndexHandler',
    
    # 系统操作完成
    'LAB_180066971': 'LAB_SystemOperationComplete',
    
    # 计数器检查
    'LAB_180066bf4': 'LAB_CounterCheck',
    
    # 系统标志检查
    'LAB_180066ec4': 'LAB_SystemFlagsCheck',
    
    # 系统错误处理
    'LAB_180068c87': 'LAB_SystemErrorHandler',
    'LAB_180068c92': 'LAB_SystemErrorCheck',
    'LAB_180068c94': 'LAB_SystemErrorComplete',
    
    # 资源数据检查
    'LAB_180069842': 'LAB_ResourceDataCheck',
    
    # 系统数据处理
    'LAB_180069c2b': 'LAB_SystemDataHandler',
    'LAB_180069dc3': 'LAB_SystemDataComplete',
    'LAB_180069dda': 'LAB_SystemDataFinal',
    
    # 次要资源检查
    'LAB_18006bf7f': 'LAB_SecondaryResourceCheck',
    
    # 内存分配检查
    'LAB_18006c61e': 'LAB_MemoryAllocationCheck',
    'LAB_18006c642': 'LAB_MemoryAllocationHandler',
    'LAB_18006c852': 'LAB_MemoryProcessingStart',
    
    # 内存处理
    'LAB_18006ca44': 'LAB_MemoryProcessingLoop',
    'LAB_18006c9ac': 'LAB_MemoryPointerCheck',
    'LAB_18006ca95': 'LAB_MemoryProcessingComplete',
    
    # 系统处理完成
    'LAB_18006ccef': 'LAB_SystemProcessingComplete',
    
    # 本地资源检查
    'LAB_18006cfb1': 'LAB_LocalResourceCheck',
    
    # 系统数据验证
    'LAB_18006d3bb': 'LAB_SystemDataValidation',
    
    # 数据处理
    'LAB_18006d67d': 'LAB_DataHandler',
    'LAB_18006d7fb': 'LAB_DataProcessingComplete',
    
    # 系统值处理
    'LAB_18006d957': 'LAB_SystemValueProcessing',
    'LAB_18006d9f6': 'LAB_SystemValueComplete',
    'LAB_18006d9d7': 'LAB_SystemValueCheck',
    
    # 系统循环处理
    'LAB_18006f48d': 'LAB_SystemLoopHandler',
    
    # 系统数据处理
    'LAB_180070230': 'LAB_SystemDataHandler',
    
    # 系统计数器处理
    'LAB_180070a3f': 'LAB_SystemCounterHandler',
    
    # 系统值处理
    'LAB_180070b00': 'LAB_SystemValueHandler',
    'LAB_180070db8': 'LAB_SystemValueStart',
    'LAB_180070e64': 'LAB_SystemValueRangeCheck',
    'LAB_180070ee8': 'LAB_SystemValueProcessing',
    'LAB_180070f81': 'LAB_SystemValueCheck',
    'LAB_180071000': 'LAB_ValueRangeHandler',
    'LAB_1800710b8': 'LAB_ValueRangeComplete',
    'LAB_18007113f': 'LAB_ValueRangeFinal',
    
    # 系统处理
    'LAB_1800718e9': 'LAB_SystemProcessing',
    'LAB_1800715eb': 'LAB_SystemIndexCheck',
    
    # 系统数据处理
    'LAB_180071af3': 'LAB_SystemDataStart',
    'LAB_180071b69': 'LAB_SystemDataComplete',
    
    # 值检查处理
    'LAB_180071c1a': 'LAB_ValueCheckHandler',
    'LAB_180071c93': 'LAB_ValueCheckStart',
    'LAB_180071d1f': 'LAB_ValueRangeCheck',
    'LAB_180071d94': 'LAB_ValueValidation',
    'LAB_180071e34': 'LAB_ValueSystemCheck',
    'LAB_180071eb0': 'LAB_ValueSystemComplete',
    
    # 系统初始化检查
    'LAB_180072d7b': 'LAB_SystemInitializationCheck',
    
    # 系统配置
    'LAB_180072120': 'LAB_SystemConfiguration',
    'LAB_1800721e1': 'LAB_ConfigurationCheck',
    'LAB_1800722f5': 'LAB_ConfigurationComplete',
    
    # 系统数据范围检查
    'LAB_180072521': 'LAB_SystemDataRangeStart',
    'LAB_1800725ac': 'LAB_SystemDataRangeCheck',
    'LAB_180072662': 'LAB_DataRangeHandler',
    'LAB_1800726e7': 'LAB_DataRangeStart',
    'LAB_180072780': 'LAB_DataRangeCheck',
    'LAB_1800727ff': 'LAB_DataValueHandler',
    'LAB_1800728ad': 'LAB_DataAllocationCheck',
    'LAB_180072934': 'LAB_AllocationHandler',
    'LAB_1800729bd': 'LAB_AllocationComplete',
    
    # 浮点值检查
    'LAB_180075f4f': 'LAB_FloatValueCheck',
    
    # 系统指针验证
    'LAB_180076feb': 'LAB_SystemPointerValidation',
    
    # 系统内存检查
    'LAB_18007738d': 'LAB_SystemMemoryCheck',
    
    # 系统资源检查
    'LAB_180077847': 'LAB_SystemResourceCheck',
    'LAB_180077879': 'LAB_SystemResourceComplete',
    
    # 系统句柄验证
    'LAB_180077fcf': 'LAB_SystemHandleValidation',
    
    # 系统标志验证
    'LAB_1800782d4': 'LAB_SystemFlagValidation',
    'LAB_1800782e0': 'LAB_SystemFlagComplete',
    
    # 内存指针检查
    'LAB_180079c12': 'LAB_MemoryPointerCheck',
    'LAB_180079cd7': 'LAB_MemoryPointerHandler',
    'LAB_180079d9b': 'LAB_MemoryOffsetCheck',
    
    # 资源偏移检查
    'LAB_18007ac04': 'LAB_ResourceOffsetCheck',
    
    # 系统句柄检查
    'LAB_180079e40': 'LAB_SystemHandleStart',
    'LAB_180079fb3': 'LAB_SystemHandleCheck',
    'LAB_18007a203': 'LAB_SystemHandleHandler',
    'LAB_18007a142': 'LAB_SystemHandleValidation',
    
    # 系统处理处理
    'LAB_18007a312': 'LAB_SystemProcessingHandler',
    'LAB_18007a58b': 'LAB_SystemProcessingComplete',
    
    # 资源检查
    'LAB_18007a5ac': 'LAB_ResourceCheckComplete',
    
    # 系统标志处理
    'LAB_18007b44a': 'LAB_SystemFlagStart',
    'LAB_18007b454': 'LAB_SystemFlagHandler',
    'LAB_18007b8dc': 'LAB_SystemFlagComplete',
    'LAB_18007b8fd': 'LAB_SystemValidationComplete',
    
    # 配置数据检查
    'LAB_18007eb55': 'LAB_ConfigurationDataCheck',
    
    # 资源索引检查
    'LAB_18007f5cb': 'LAB_ResourceIndexCheck',
    'LAB_18007f7cf': 'LAB_ResourceIndexHandler',
    'LAB_18007f89f': 'LAB_ResourceIndexComplete'
}

# 应用替换
for old_label, new_label in replacements.items():
    # 替换goto语句中的标签引用
    content = re.sub(rf'goto {old_label};', f'goto {new_label};', content)
    # 替换标签定义
    content = re.sub(rf'{old_label}:', f'{new_label}:', content)

# 写入输出文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_beautified.c', 'w', encoding='utf-8') as f:
    f.write(content)

print(f"成功替换了 {len(replacements)} 个LAB_标签")
print("\n替换完成！输出文件: /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_beautified.c")

# 验证替换结果
remaining_labs = re.findall(r'LAB_[0-9a-fA-F]+', content)
if remaining_labs:
    print(f"\n注意: 还有 {len(set(remaining_labs))} 个LAB_标签未处理")
    print("未处理的标签:", set(remaining_labs))
else:
    print("\n所有LAB_标签已成功处理！")