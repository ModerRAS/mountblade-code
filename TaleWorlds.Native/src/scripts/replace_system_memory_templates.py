#!/usr/bin/env python3

# 美化02_core_engine.c中的变量名
import re

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'r', encoding='utf-8') as f:
    content = f.read()

# SystemMemoryDataTemplate 系列变量名美化
replacements = {
    'SystemMemoryDataTemplateI': 'SystemMemoryDataTemplateInputPrimary',
    'SystemMemoryDataTemplateJ': 'SystemMemoryDataTemplateNetworkPrimary',
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

# 执行替换
for old, new in replacements.items():
    content = content.replace(old, new)

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'w', encoding='utf-8') as f:
    f.write(content)

print("SystemMemoryDataTemplate变量名美化完成")