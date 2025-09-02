#!/usr/bin/env python3

import re

# 读取文件内容
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c', 'r', encoding='utf-8') as f:
    content = f.read()

# 查找所有LAB_标签
lab_pattern = r'LAB_([0-9a-fA-F]+)'
lab_matches = re.findall(lab_pattern, content)

# 为每个标签创建语义化名称的映射
label_mapping = {}

# 基于常见模式创建语义化名称
for i, lab_id in enumerate(lab_matches):
    # 避免重复处理
    if lab_id in label_mapping:
        continue
        
    # 根据标签ID的最后几位数字来推断可能的用途
    last_digits = lab_id[-4:]
    
    # 根据常见用途模式创建语义化名称
    if last_digits in ['9fd', 'c03', 'c5e', 'c90']:
        label_mapping[lab_id] = 'LAB_SearchResultCheck'
    elif last_digits in ['f2c', 'f93']:
        label_mapping[lab_id] = 'LAB_StringComparison'
    elif last_digits in ['db7', 'dba', 'dd7']:
        label_mapping[lab_id] = 'LAB_NodeSearchHandler'
    elif last_digits in ['e00', 'e20', 'e74']:
        label_mapping[lab_id] = 'LAB_MemoryAllocation'
    elif last_digits in ['f62']:
        label_mapping[lab_id] = 'LAB_ConfigurationCheck'
    elif last_digits in ['2b9', '322']:
        label_mapping[lab_id] = 'LAB_ResourceInitialization'
    elif last_digits in ['7ef']:
        label_mapping[lab_id] = 'LAB_BufferProcessing'
    elif last_digits in ['1b9', '1c1', '1a2']:
        label_mapping[lab_id] = 'LAB_AllocationCheck'
    elif last_digits in ['721']:
        label_mapping[lab_id] = 'LAB_ErrorHandler'
    elif last_digits in ['22d']:
        label_mapping[lab_id] = 'LAB_FlagCheck'
    elif last_digits in ['f8b', 'fc9']:
        label_mapping[lab_id] = 'LAB_SystemValidation'
    elif last_digits in ['ce3', 'de5']:
        label_mapping[lab_id] = 'LAB_SystemFlagCheck'
    elif last_digits in ['5b0', '64c']:
        label_mapping[lab_id] = 'LAB_DataProcessing'
    elif last_digits in ['302', '19d']:
        label_mapping[lab_id] = 'LAB_ResourceCounting'
    elif last_digits in ['85e', '912']:
        label_mapping[lab_id] = 'LAB_SystemIndexCheck'
    elif last_digits in ['ec9', 'd28', 'd57']:
        label_mapping[lab_id] = 'LAB_PathProcessing'
    elif last_digits in ['220', '228']:
        label_mapping[lab_id] = 'LAB_SystemCounter'
    elif last_digits in ['26e']:
        label_mapping[lab_id] = 'LAB_SystemOperation'
    elif last_digits in ['b97', 'ba2']:
        label_mapping[lab_id] = 'LAB_ValueComparison'
    elif last_digits in ['0f9', '138']:
        label_mapping[lab_id] = 'LAB_SystemDataCheck'
    elif last_digits in ['56a']:
        label_mapping[lab_id] = 'LAB_SystemPointerCheck'
    elif last_digits in ['0e2', '1a6']:
        label_mapping[lab_id] = 'LAB_SystemFlagHandler'
    elif last_digits in ['885']:
        label_mapping[lab_id] = 'LAB_ResourceProcessing'
    elif last_digits in ['9be']:
        label_mapping[lab_id] = 'LAB_ResourceNodeCheck'
    elif last_digits in ['cff']:
        label_mapping[lab_id] = 'LAB_DataManagerCheck'
    elif last_digits in ['b20']:
        label_mapping[lab_id] = 'LAB_SystemDataManager'
    elif last_digits in ['0e6']:
        label_mapping[lab_id] = 'LAB_LoopControl'
    elif last_digits in ['30a']:
        label_mapping[lab_id] = 'LAB_IterationHandler'
    elif last_digits in ['6a2']:
        label_mapping[lab_id] = 'LAB_SystemHandleCheck'
    elif last_digits in ['a1c', '801', '818']:
        label_mapping[lab_id] = 'LAB_ValueValidation'
    elif last_digits in ['848', '84c', '8c7']:
        label_mapping[lab_id] = 'LAB_SystemValueCheck'
    elif last_digits in ['8e3', '92b', '9e1']:
        label_mapping[lab_id] = 'LAB_MemoryValueHandler'
    elif last_digits in ['d51', 'd56', 'da6']:
        label_mapping[lab_id] = 'LAB_MemoryValueCheck'
    elif last_digits in ['c81', 'cf9', 'd0d']:
        label_mapping[lab_id] = 'LAB_ValueProcessing'
    elif last_digits in ['f87', '026', '007']:
        label_mapping[lab_id] = 'LAB_SystemValueProcessing'
    elif last_digits in ['2a0', '2f0', '31a']:
        label_mapping[lab_id] = 'LAB_SystemOperationHandler'
    elif last_digits in ['39b']:
        label_mapping[lab_id] = 'LAB_OperationCompletion'
    elif last_digits in ['4d1']:
        label_mapping[lab_id] = 'LAB_ResourcePointerCheck'
    elif last_digits in ['7cc']:
        label_mapping[lab_id] = 'LAB_StringHandler'
    elif last_digits in ['993']:
        label_mapping[lab_id] = 'LAB_DataProcessingComplete'
    elif last_digits in ['57e']:
        label_mapping[lab_id] = 'LAB_SystemValueValidation'
    elif last_digits in ['de9']:
        label_mapping[lab_id] = 'LAB_DataPointerCheck'
    elif last_digits in ['009', 'eed']:
        label_mapping[lab_id] = 'LAB_MemoryPointerCheck'
    elif last_digits in ['a3e']:
        label_mapping[lab_id] = 'LAB_SystemResultCheck'
    elif last_digits in ['50a']:
        label_mapping[lab_id] = 'LAB_SystemIndexHandler'
    elif last_digits in ['971']:
        label_mapping[lab_id] = 'LAB_SystemOperationComplete'
    elif last_digits in ['bf4']:
        label_mapping[lab_id] = 'LAB_CounterCheck'
    elif last_digits in ['ec4']:
        label_mapping[lab_id] = 'LAB_SystemFlagsCheck'
    elif last_digits in ['c87', 'c92', 'c94']:
        label_mapping[lab_id] = 'LAB_SystemErrorHandler'
    elif last_digits in ['842']:
        label_mapping[lab_id] = 'LAB_ResourceDataCheck'
    elif last_digits in ['c2b', 'dc3', 'dda']:
        label_mapping[lab_id] = 'LAB_SystemDataHandler'
    elif last_digits in ['f7f']:
        label_mapping[lab_id] = 'LAB_SecondaryResourceCheck'
    elif last_digits in ['61e', '642', '852']:
        label_mapping[lab_id] = 'LAB_MemoryAllocationCheck'
    elif last_digits in ['a44', '9ac', 'a95']:
        label_mapping[lab_id] = 'LAB_MemoryProcessing'
    elif last_digits in ['cef']:
        label_mapping[lab_id] = 'LAB_SystemProcessingComplete'
    elif last_digits in ['fb1']:
        label_mapping[lab_id] = 'LAB_LocalResourceCheck'
    elif last_digits in ['3bb']:
        label_mapping[lab_id] = 'LAB_SystemDataValidation'
    elif last_digits in ['67d', '7fb']:
        label_mapping[lab_id] = 'LAB_DataHandler'
    elif last_digits in ['957', '9f6', '9d7']:
        label_mapping[lab_id] = 'LAB_SystemValueProcessing'
    elif last_digits in ['48d']:
        label_mapping[lab_id] = 'LAB_SystemLoopHandler'
    elif last_digits in ['230']:
        label_mapping[lab_id] = 'LAB_SystemDataHandler'
    elif last_digits in ['a3f']:
        label_mapping[lab_id] = 'LAB_SystemCounterHandler'
    elif last_digits in ['b00', 'db8', 'e64']:
        label_mapping[lab_id] = 'LAB_SystemValueHandler'
    elif last_digits in ['ee8', 'f81', '000']:
        label_mapping[lab_id] = 'LAB_ValueRangeCheck'
    elif last_digits in ['0b8', '13f', 'eb0']:
        label_mapping[lab_id] = 'LAB_SystemIndexProcessing'
    elif last_digits in ['5eb', '8e9']:
        label_mapping[lab_id] = 'LAB_SystemProcessing'
    elif last_digits in ['af3', 'b69']:
        label_mapping[lab_id] = 'LAB_SystemDataProcessing'
    elif last_digits in ['c1a', 'c93', 'd1f']:
        label_mapping[lab_id] = 'LAB_ValueCheckHandler'
    elif last_digits in ['d94', 'e34', 'eb0']:
        label_mapping[lab_id] = 'LAB_SystemValueRangeCheck'
    elif last_digits in ['2d7b']:
        label_mapping[lab_id] = 'LAB_SystemInitializationCheck'
    elif last_digits in ['120', '1e1', '2f5']:
        label_mapping[lab_id] = 'LAB_SystemConfiguration'
    elif last_digits in ['521', '5ac', '662']:
        label_mapping[lab_id] = 'LAB_SystemDataRangeCheck'
    elif last_digits in ['6e7', '780', '7ff']:
        label_mapping[lab_id] = 'LAB_SystemValueRangeHandler'
    elif last_digits in ['8ad', '934', '9bd']:
        label_mapping[lab_id] = 'LAB_SystemAllocationCheck'
    elif last_digits in ['f4f']:
        label_mapping[lab_id] = 'LAB_FloatValueCheck'
    elif last_digits in ['feb']:
        label_mapping[lab_id] = 'LAB_SystemPointerValidation'
    elif last_digits in ['38d']:
        label_mapping[lab_id] = 'LAB_SystemMemoryCheck'
    elif last_digits in ['847', '879']:
        label_mapping[lab_id] = 'LAB_SystemResourceCheck'
    elif last_digits in ['fcf']:
        label_mapping[lab_id] = 'LAB_SystemHandleValidation'
    elif last_digits in ['2d4', '2e0']:
        label_mapping[lab_id] = 'LAB_SystemFlagValidation'
    elif last_digits in ['c12', 'cd7', 'd9b']:
        label_mapping[lab_id] = 'LAB_MemoryPointerCheck'
    elif last_digits in ['5ac', 'c04']:
        label_mapping[lab_id] = 'LAB_ResourceOffsetCheck'
    elif last_digits in ['e40', 'fb3', '203']:
        label_mapping[lab_id] = 'LAB_SystemHandleCheck'
    elif last_digits in ['142', '312', '58b']:
        label_mapping[lab_id] = 'LAB_SystemProcessingHandler'
    elif last_digits in ['44a', '454', '8dc']:
        label_mapping[lab_id] = 'LAB_SystemFlagHandler'
    elif last_digits in ['8fd']:
        label_mapping[lab_id] = 'LAB_SystemValidationComplete'
    elif last_digits in ['b55']:
        label_mapping[lab_id] = 'LAB_ConfigurationDataCheck'
    elif last_digits in ['5cb', '7cf', '89f']:
        label_mapping[lab_id] = 'LAB_ResourceIndexCheck'
    else:
        # 为其他标签创建通用名称
        label_mapping[lab_id] = f'LAB_Handler_{i:03d}'

# 应用替换
for lab_id, semantic_name in label_mapping.items():
    # 替换goto语句中的标签引用
    content = re.sub(rf'goto LAB_{lab_id};', f'goto {semantic_name};', content)
    # 替换标签定义
    content = re.sub(rf'LAB_{lab_id}:', f'{semantic_name}:', content)

# 写入输出文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_beautified.c', 'w', encoding='utf-8') as f:
    f.write(content)

# 打印替换统计
print(f"成功替换了 {len(label_mapping)} 个LAB_标签")
print("\n部分替换映射:")
for lab_id, semantic_name in sorted(list(label_mapping.items())[:20]):
    print(f"  LAB_{lab_id} -> {semantic_name}")
if len(label_mapping) > 20:
    print(f"  ... 还有 {len(label_mapping) - 20} 个标签")

print(f"\n美化完成！输出文件: /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization_beautified.c")