#!/usr/bin/env python3
import re

# 读取文件
file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
with open(file_path, 'r', encoding='utf-8') as f:
    content = f.read()

# 替换映射
replacements = {
    'DAT_18098d698': 'SystemInitializationStatusTable',
    '_DAT_180c86878': '_SystemMemoryBaseAddress',
    'DAT_180be0000': 'SystemDataBaseAddress',
    '_DAT_180c868f8': '_SystemPrimaryDataPointer',
    '_DAT_180c8aa50': '_SystemFloatTableAddress',
    '_DAT_180c868c8': '_SystemSecondaryDataPointer',
    'DAT_180c82862': 'SystemCharacterTableAddress',
    'DAT_180c8ed80': 'SystemEventTemplateData',
    '_DAT_180c8aa08': '_SystemMemoryAddressMask',
    '_DAT_180c8a988': '_SystemBufferAllocationStatus',
    '_DAT_180c86908': '_SystemMemoryManagementTable',
    'DAT_180c8ecee': 'SystemInitializationStatusFlag',
    'DAT_180d49420': 'SystemInputDataBuffer',
    '_DAT_180d4943c': '_SystemInputDataProcessor',
}

# 执行替换
for old, new in replacements.items():
    content = content.replace(old, new)

# 写回文件
with open(file_path, 'w', encoding='utf-8') as f:
    f.write(content)

print("替换完成！")