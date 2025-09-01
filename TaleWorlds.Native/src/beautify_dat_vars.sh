#!/bin/bash

# 批量美化00_data_definitions.h文件中的变量名
# 将DAT_和UNK_开头的变量替换为语义化的名称

# 创建临时脚本文件
cat > /tmp/beautify_dat_vars.py << 'EOF'
import re
import sys

def beautify_dat_variables(content):
    """美化DAT_变量名为语义化名称"""
    
    # DAT_变量替换映射
    dat_replacements = {
        'DAT_180bfa360': 'SystemInitializationFlag',
        'DAT_180bfa498': 'SystemPathBufferA',
        'DAT_180bfa530': 'SystemPathBufferB',
        'DAT_180bfa5c8': 'SystemPathBufferC',
        'DAT_180bfa660': 'SystemNetworkBufferA',
        'DAT_180bfa6f8': 'SystemNetworkBufferB',
        'DAT_180bfa798': 'SystemConfigBufferA',
        'DAT_180bfa830': 'SystemConfigBufferB',
        'DAT_180bfa8c8': 'SystemConfigBufferC',
        'DAT_180bfa960': 'SystemConfigBufferD',
        'DAT_180bfa9f8': 'SystemConfigBufferE',
        'DAT_180bfaa90': 'SystemConfigBufferF',
        'DAT_180bfab28': 'SystemConfigBufferG',
        'DAT_180bfabc0': 'SystemConfigBufferH',
        'DAT_180bfac58': 'SystemConfigBufferI',
        'DAT_180bfacf0': 'SystemConfigBufferJ',
        'DAT_180bfad88': 'SystemConfigBufferK',
        'DAT_180bfae20': 'SystemConfigBufferL',
        'DAT_180bfc140': 'SystemStatusBufferA',
        'DAT_180c92068': 'SystemMemoryPoolBuffer',
        'DAT_180c82852': 'SystemStringProcessingBufferA',
        'DAT_180c82870': 'SystemStringProcessingBufferB',
        'DAT_180c84870': 'SystemStringProcessingBufferC',
        'DAT_180c8ecec': 'SystemNetworkDataBuffer',
        'DAT_180bf5770': 'SystemDataProcessingBuffer',
        'DAT_180bf0101': 'SystemProcessingFlag',
        'DAT_180c82862': 'SystemOutputFlagA',
        'DAT_180c82853': 'SystemOutputFlagB',
        'DAT_180c82860': 'SystemOutputFlagC',
        'DAT_1809fcc18': 'SystemFileDataBuffer',
        'DAT_180d49178': 'SystemStringConstantA',
        'DAT_180d49160': 'SystemStringConstantB',
        'DAT_180d48d40': 'SystemConnectionFlag',
        'DAT_180fc7b8': 'SystemNetworkPathBuffer',
        'DAT_180bfc049': 'SystemThreadFlag',
        'DAT_180d492a8': 'SystemMemoryConfigBufferA',
        'DAT_180d49300': 'SystemMemoryConfigBufferB',
        'DAT_180d49358': 'SystemMemoryConfigBufferC',
        'DAT_180d493b0': 'SystemMemoryConfigBufferD',
        'DAT_180d49288': 'SystemMemoryConfigBufferE',
        'DAT_180d48d64': 'SystemProcessingStatusFlag',
        'DAT_180c91d14': 'SystemStateTrackingVariable',
        'DAT_180329eb7': 'SystemLoopControlLabel',
        'DAT_180d48da8': 'SystemNetworkStatusFlag',
        'DAT_180d48dac': 'SystemNetworkConfigFlag',
        'DAT_180d48daa': 'SystemNetworkConnectionFlag',
        'DAT_180d48dab': 'SystemNetworkTransferFlag',
        'DAT_180d48e78': 'SystemBufferAllocationSize',
        'DAT_180d48e24': 'SystemBufferSizeCheck',
        'DAT_180d49748': 'SystemNetworkRequestBuffer',
        'DAT_180d496d0': 'SystemNetworkResponseBuffer',
        'DAT_180d497d0': 'SystemNetworkDataSize',
        'DAT_180d49990': 'SystemNetworkPacketSize',
        'DAT_180d48de0': 'SystemNetworkPacketBuffer',
        'DAT_180c95fea': 'SystemInitializationCompleteFlag',
        'DAT_180a06998': 'SystemConfigTemplateStringA',
        'DAT_180a06990': 'SystemConfigTemplateStringB',
        'DAT_180a069a8': 'SystemConfigTemplateStringC',
        'DAT_180a069a0': 'SystemConfigTemplateStringD',
        'DAT_180bf5bc0': 'SystemStringProcessor',
        'DAT_180bf5c38': 'SystemStringBuffer',
        'DAT_180bf5c40': 'SystemStringLength',
        'DAT_1809fd380': 'SystemComparisonStringA',
        'DAT_1809fd398': 'SystemComparisonStringB',
        'DAT_1809fd3f0': 'SystemNetworkDataPointer',
        'DAT_1809fd4b8': 'SystemTempStringBuffer',
        'DAT_1809fd3c8': 'SystemInitDataBuffer',
        'DAT_1809fe1b0': 'SystemSecondaryInitBuffer',
        'DAT_1809fe1c8': 'SystemDataRatioBufferA',
        'DAT_1809fe1d8': 'SystemDataRatioBufferB',
        'DAT_1809fd8c0': 'SystemComponentInitBufferA',
        'DAT_1809fdfc0': 'SystemComponentInitBufferB',
        'DAT_1809fd950': 'SystemComponentInitBufferC',
        'DAT_1809fd970': 'SystemConfigParameterBuffer',
        'DAT_1809fd980': 'SystemComponentInitBufferD',
        'DAT_180a0ad28': 'SystemModulePointer',
        'DAT_180a04910': 'SystemAllocationPointer',
        'DAT_1801bc840': 'SystemStackPointerA',
        'DAT_1801bc820': 'SystemStackPointerB',
        'DAT_180049530': 'SystemFunctionPointer',
        'DAT_180a0c2b8': 'SystemContextPointer',
        'DAT_1809ff2f8': 'SystemMemoryPointer',
        'DAT_180941ab0': 'SystemRenderDataPointer',
        'DAT_180a17960': 'SystemNetworkConfigPointer',
        'DAT_180000008': 'SystemMemoryMask',
        'DAT_180000010': 'SystemCleanupPointer',
        'DAT_180000000': 'SystemBasePointer',
        'DAT_180000018': 'SystemInitPointer'
    }
    
    # UNK_变量替换映射
    unk_replacements = {
        'UNK_1809fd8c0': 'SystemInitializationBufferA',
        'UNK_1809fdfc0': 'SystemInitializationBufferB',
        'UNK_1809fd950': 'SystemInitializationBufferC',
        'UNK_1809fd970': 'SystemConfigurationParameter',
        'UNK_1809fd980': 'SystemInitializationBufferD',
        'UNK_180a0ad28': 'SystemModuleReference',
        'UNK_180a04910': 'SystemMemoryAllocation',
        'UNK_1809fe1b0': 'SystemSecondaryInitialization',
        'UNK_1809fe1c8': 'SystemDataRatioCalculatorA',
        'UNK_1809fe1d8': 'SystemDataRatioCalculatorB',
        'UNK_1809fd3c8': 'SystemGameDataProcessor',
        'UNK_1809fc7b8': 'SystemFilePathProcessor',
        'UNK_1809fd3f0': 'SystemNetworkDataHandler',
        'UNK_1809fd4b8': 'SystemStringProcessor',
        'UNK_1809ff2f8': 'SystemMemoryManager',
        'UNK_180941ab0': 'SystemRenderDataManager',
        'UNK_180a17960': 'SystemNetworkConfiguration',
        'UNK_1801bc840': 'SystemStackFrameA',
        'UNK_1801bc820': 'SystemStackFrameB',
        'UNK_180049530': 'SystemFunctionHandler',
        'UNK_180a0c2b8': 'SystemContextManager'
    }
    
    # _DAT_变量替换映射
    _dat_replacements = {
        '_DAT_180bfa360': 'SystemInitializationStatus',
        '_DAT_180bfa3e8': 'SystemMemoryConfigReference',
        '_DAT_180bfa3f0': 'SystemStringBufferReference',
        '_DAT_180bfa3f8': 'SystemBufferSizeParameter',
        '_DAT_180bfa480': 'SystemMemoryConfigTemplate',
        '_DAT_180bfa488': 'SystemPathBufferReference',
        '_DAT_180bfa490': 'SystemPathBufferSize',
        '_DAT_180bfa518': 'SystemMemoryConfigInstanceA',
        '_DAT_180bfa520': 'SystemPathBufferInstanceA',
        '_DAT_180bfa528': 'SystemPathBufferLengthA',
        '_DAT_180bfa5b0': 'SystemMemoryConfigInstanceB',
        '_DAT_180bfa5b8': 'SystemPathBufferInstanceB',
        '_DAT_180bfa5c0': 'SystemPathBufferLengthB',
        '_DAT_180bfa648': 'SystemMemoryConfigInstanceC',
        '_DAT_180bfa650': 'SystemPathBufferInstanceC',
        '_DAT_180bfa658': 'SystemPathBufferLengthC',
        '_DAT_180bfa6e0': 'SystemMemoryConfigInstanceD',
        '_DAT_180bfa6e8': 'SystemPathBufferInstanceD',
        '_DAT_180bfa6f0': 'SystemPathBufferLengthD',
        '_DAT_180bfa780': 'SystemMemoryConfigInstanceE',
        '_DAT_180bfa788': 'SystemPathBufferInstanceE',
        '_DAT_180bfa790': 'SystemPathBufferLengthE',
        '_DAT_180bfa818': 'SystemMemoryConfigInstanceF',
        '_DAT_180bfa820': 'SystemPathBufferInstanceF',
        '_DAT_180bfa828': 'SystemPathBufferLengthF',
        '_DAT_180bfa8b0': 'SystemMemoryConfigInstanceG',
        '_DAT_180bfa8b8': 'SystemPathBufferInstanceG',
        '_DAT_180bfa8c0': 'SystemPathBufferLengthG',
        '_DAT_180bfa948': 'SystemMemoryConfigInstanceH',
        '_DAT_180bfa950': 'SystemPathBufferInstanceH',
        '_DAT_180bfa958': 'SystemPathBufferLengthH',
        '_DAT_180bfa9e0': 'SystemMemoryConfigInstanceI',
        '_DAT_180bfa9e8': 'SystemPathBufferInstanceI',
        '_DAT_180bfa9f0': 'SystemPathBufferLengthI',
        '_DAT_180bfaa78': 'SystemMemoryConfigInstanceJ',
        '_DAT_180bfaa80': 'SystemPathBufferInstanceJ',
        '_DAT_180bfaa88': 'SystemPathBufferLengthJ',
        '_DAT_180bfab10': 'SystemMemoryConfigInstanceK',
        '_DAT_180bfab18': 'SystemPathBufferInstanceK',
        '_DAT_180bfab20': 'SystemPathBufferLengthK',
        '_DAT_180bfaba8': 'SystemMemoryConfigInstanceL',
        '_DAT_180bfabb0': 'SystemPathBufferInstanceL',
        '_DAT_180bfabb8': 'SystemPathBufferLengthL',
        '_DAT_180bfac40': 'SystemMemoryConfigInstanceM',
        '_DAT_180bfac48': 'SystemPathBufferInstanceM',
        '_DAT_180bfac50': 'SystemPathBufferLengthM',
        '_DAT_180bfacd8': 'SystemMemoryConfigInstanceN',
        '_DAT_180bface0': 'SystemPathBufferInstanceN',
        '_DAT_180bface8': 'SystemPathBufferLengthN',
        '_DAT_180bfad70': 'SystemMemoryConfigInstanceO',
        '_DAT_180bfad78': 'SystemPathBufferInstanceO',
        '_DAT_180bfad80': 'SystemPathBufferLengthO',
        '_DAT_180bfae08': 'SystemMemoryConfigInstanceP',
        '_DAT_180bfae10': 'SystemPathBufferInstanceP',
        '_DAT_180bfae18': 'SystemPathBufferLengthP',
        '_DAT_180bfc150': 'SystemStatusFlagA',
        '_DAT_180bfc140': 'SystemStatusBufferA',
        '_DAT_180bfc160': 'SystemStatusFlagB',
        '_DAT_180bfc168': 'SystemStatusFlagC',
        '_DAT_180bfaee8': 'SystemInitializationParameter',
        '_DAT_180bfaec0': 'SystemStatusReference',
        '_DAT_180bfaec8': 'SystemStatusPointer',
        '_DAT_180bfaed0': 'SystemControlFlagA',
        '_DAT_180bfaed8': 'SystemControlFlagB',
        '_DAT_180bfaee0': 'SystemControlFlagC',
        '_DAT_180c92050': 'SystemMemoryPoolReference',
        '_DAT_180c92058': 'SystemMemoryPoolBufferReference',
        '_DAT_180c92060': 'SystemMemoryPoolControl',
        '_DAT_180bfaef0': 'SystemMemoryPoolTemplate',
        '_DAT_180bfaef8': 'SystemConfigBufferReference',
        '_DAT_180bfaf00': 'SystemConfigBufferSize',
        '_DAT_180bfb310': 'SystemMemoryPoolInstanceA',
        '_DAT_180bfb318': 'SystemMemoryConfigReferenceA',
        '_DAT_180bfb320': 'SystemMemoryConfigSizeA',
        '_DAT_180bfb730': 'SystemMemoryPoolInstanceB',
        '_DAT_180bfb738': 'SystemThreadConfigReference',
        '_DAT_180bfb740': 'SystemThreadConfigSize',
        '_DAT_180bf6058': 'SystemStringParameter',
        '_DAT_180bf6498': 'SystemStringMemoryTemplate',
        '_DAT_180bf64a0': 'SystemSecondaryBufferReferenceA',
        '_DAT_180bf64a8': 'SystemSecondaryBufferSizeA',
        '_DAT_180bf6508': 'SystemStringParameterB',
        '_DAT_180bf6558': 'SystemStringMemoryTemplateB',
        '_DAT_180bf6560': 'SystemSecondaryBufferReferenceB',
        '_DAT_180bf6568': 'SystemSecondaryBufferSizeB'
    }
    
    # 应用替换
    for old_name, new_name in dat_replacements.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    
    for old_name, new_name in unk_replacements.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    
    for old_name, new_name in _dat_replacements.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    
    return content

# 读取文件内容
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h', 'r', encoding='utf-8', errors='ignore') as f:
    content = f.read()

# 应用美化
beautified_content = beautify_dat_variables(content)

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h', 'w', encoding='utf-8') as f:
    f.write(beautified_content)

print("文件美化完成")
EOF

# 执行Python脚本
python3 /tmp/beautify_dat_vars.py

# 清理临时文件
rm -f /tmp/beautify_dat_vars.py