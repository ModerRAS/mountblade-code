#!/usr/bin/env python3

# 美化02_core_engine.c中的变量名
import re

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'r', encoding='utf-8') as f:
    content = f.read()

# SystemMemoryDataTemplate 系列变量名美化
replacements = {
    'SystemMemoryDataTemplateK': 'SystemMemoryDataTemplatePhysicsPrimary',
    'SystemMemoryDataTemplateL': 'SystemMemoryDataTemplateRenderingPrimary',
    'SystemMemoryDataTemplateM': 'SystemMemoryDataTemplateAudioSecondary',
    'SystemMemoryDataTemplateN': 'SystemMemoryDataTemplateVideoSecondary',
    'SystemMemoryDataTemplateO': 'SystemMemoryDataTemplateInputSecondary',
    'SystemMemoryDataTemplateP': 'SystemMemoryDataTemplateNetworkSecondary',
    'SystemMemoryDataTemplateQ': 'SystemMemoryDataTemplatePhysicsSecondary',
    'SystemMemoryDataTemplateR': 'SystemMemoryDataTemplateRenderingSecondary',
    'SystemMemoryDataTemplateS': 'SystemMemoryDataTemplateAudioTertiary',
    'SystemMemoryDataTemplateT': 'SystemMemoryDataTemplateVideoTertiary',
    'SystemMemoryDataTemplateU': 'SystemMemoryDataTemplateInputTertiary',
    'SystemMemoryDataTemplateV': 'SystemMemoryDataTemplateNetworkTertiary',
    'SystemMemoryDataTemplateW': 'SystemMemoryDataTemplatePhysicsTertiary',
    'SystemMemoryDataTemplateX': 'SystemMemoryDataTemplateRenderingTertiary',
}

# SystemComparisonData 系列变量名美化
comparison_replacements = {
    'SystemComparisonDataPrimary': 'SystemComparisonDataMemoryPrimary',
    'SystemComparisonDataSecondary': 'SystemComparisonDataMemorySecondary',
    'SystemComparisonDataTertiary': 'SystemComparisonDataMemoryTertiary',
    'SystemComparisonDataQuaternary': 'SystemComparisonDataConnectionPrimary',
    'SystemComparisonDataQuinary': 'SystemComparisonDataConnectionSecondary',
    'SystemComparisonDataSextenary': 'SystemComparisonDataQueuePrimary',
    'SystemComparisonDataSeptenary': 'SystemComparisonDataEventPrimary',
    'SystemComparisonDataOctonary': 'SystemComparisonDataSyncPrimary',
    'SystemComparisonDataNonary': 'SystemComparisonDataAudioPrimary',
    'SystemComparisonDataDenary': 'SystemComparisonDataInputPrimary',
    'SystemComparisonDataUndenary': 'SystemComparisonDataResourcePrimary',
}

# SystemConnectionTemplate 系列变量名美化
connection_replacements = {
    'SystemConnectionTemplateA': 'SystemConnectionTemplateAudio',
    'SystemConnectionTemplateB': 'SystemConnectionTemplateVideo',
    'SystemConnectionTemplateC': 'SystemConnectionTemplateInput',
    'SystemConnectionTemplateD': 'SystemConnectionTemplateNetwork',
    'SystemConnectionTemplateE': 'SystemConnectionTemplatePhysics',
    'SystemConnectionTemplateF': 'SystemConnectionTemplateRendering',
    'SystemConnectionTemplateG': 'SystemConnectionTemplateAudioPrimary',
}

# 合并所有替换
all_replacements = {**replacements, **comparison_replacements, **connection_replacements}

# 执行替换
for old, new in all_replacements.items():
    content = content.replace(old, new)

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'w', encoding='utf-8') as f:
    f.write(content)

print("变量名美化完成")