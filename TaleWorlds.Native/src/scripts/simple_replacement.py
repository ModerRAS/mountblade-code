#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
简化的变量名替换脚本
"""

import re

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c', 'r', encoding='utf-8') as f:
    content = f.read()

# UNK_ 变量替换映射
unk_replacements = {
    'UNK_180a3cf50': 'SystemUnknownPointerA',
    'UNK_1809fe6d8': 'SystemUnknownPointerB',
    'UNK_1809fd9a0': 'SystemConfigDataMain',
    'UNK_1809fd9b0': 'SystemConfigDataFieldA',
    'UNK_1809fd9d0': 'SystemConfigDataFieldB',
    'UNK_1809fd9f0': 'SystemConfigDataFieldC',
    'UNK_1809fda10': 'SystemConfigDataFieldD',
    'UNK_1809fda30': 'SystemConfigDataFieldE',
    'UNK_1809fda58': 'SystemConfigDataFieldF',
    'UNK_1809fda80': 'SystemConfigDataFieldG',
    'UNK_1809fdaa8': 'SystemConfigDataFieldH',
    'UNK_1809fdad0': 'SystemConfigDataFieldI',
    'UNK_1809fdaf8': 'SystemConfigDataFieldJ',
    'UNK_1809fdb20': 'SystemConfigDataFieldK',
    'UNK_1809fdcd8': 'SystemStringConstantA',
    'UNK_1809fdb40': 'SystemStringConstantB',
    'UNK_1809fdbd0': 'SystemMemoryConstantA',
    'UNK_180058ee0': 'SystemFunctionPointerA',
    'UNK_180058ec0': 'SystemFunctionPointerB',
    'UNK_180059b80': 'SystemFunctionPointerC',
    'UNK_180a08db0': 'SystemResourceMain',
    'UNK_180a092c4': 'SystemStringConstantC',
    'UNK_1809fdd78': 'SystemConfigPointerA',
    'UNK_1809fddc8': 'SystemConfigPointerB',
    'UNK_180a02968': 'SystemDataPointerA',
    'UNK_1809fde10': 'SystemResourcePointerA',
    'UNK_1809fea08': 'SystemMemoryPointerA',
    'UNK_18098bc00': 'SystemMemoryBufferA',
    'UNK_1809fdfd0': 'SystemConfigPointerC',
    'UNK_1809fe050': 'SystemStatusTableA',
    'UNK_1809fe058': 'SystemFormatStringA',
    'UNK_1809fe188': 'SystemStringConstantD',
    'UNK_1809fe190': 'SystemStringConstantE',
    'UNK_1809fe290': 'SystemStringPointerA',
    'UNK_1809fe198': 'SystemStringConstantF',
    'UNK_1809fe1a0': 'SystemStringConstantG',
    'UNK_1809fe258': 'SystemStringPointerB',
    'UNK_1800467f0': 'SystemFunctionAddressA',
    'UNK_180049760': 'SystemFunctionAddressB',
    'UNK_1809fe210': 'SystemDataPointerB',
    'UNK_1809fe200': 'SystemDataPointerC',
    'UNK_1809fe1f0': 'SystemDataPointerD',
    'UNK_180a10098': 'SystemResourcePointerB',
    'UNK_180a30778': 'SystemMemoryPointerB',
    'UNK_1809fe2c0': 'SystemStringConstantH',
    'UNK_1809fc8c8': 'SystemConfigDataA',
    'UNK_1809fe5a0': 'SystemDataBufferA',
    'UNK_1809fe5c0': 'SystemDataBufferB',
    'UNK_1809fe5f0': 'SystemDataBufferC',
    'UNK_1809fe62c': 'SystemDataBufferD',
    'UNK_1809fe608': 'SystemDataBufferE',
    'UNK_1809fe650': 'SystemConfigPointerD',
    'UNK_1809fe800': 'SystemDataBufferF',
    'UNK_1809fe810': 'SystemDataConstantA',
    'UNK_1809fe85c': 'SystemDataTableA',
    'UNK_1809fe868': 'SystemDataBufferG',
    'UNK_1809fe880': 'SystemDataBufferH',
    'UNK_1809fe8b0': 'SystemDataBufferI',
    'UNK_1809fe898': 'SystemDataBufferJ',
    'UNK_1809fe900': 'SystemDataBufferK',
    'UNK_1809fe910': 'SystemConfigPointerE',
    'UNK_1809fe928': 'SystemConfigPointerF',
    'UNK_1809fe940': 'SystemDataBufferL',
    'UNK_18098ba10': 'SystemDataSourceA',
    'UNK_18098ba80': 'SystemDataSourceB',
    'UNK_18098ba98': 'SystemDataSourceC',
    'UNK_18098ba28': 'SystemDataSourceD',
    'UNK_18098ba40': 'SystemDataSourceE',
    'UNK_18098ba70': 'SystemDataSourceF',
    'UNK_18098ba60': 'SystemDataSourceG',
    'UNK_1809fe8f8': 'SystemDataBufferM',
    'UNK_1809fe950': 'SystemDataSourceH',
    'UNK_1809fe968': 'SystemDataSourceI',
    'UNK_1809fe978': 'SystemDataSourceJ',
    'UNK_1809fe998': 'SystemDataBufferN',
    'UNK_1809fe988': 'SystemDataSourceK',
    'UNK_18098ba50': 'SystemDataSourceL',
    'UNK_1809fe9a8': 'SystemStringConstantI',
    'UNK_1809fe9b8': 'SystemConfigPointerG',
    'UNK_1809fe9c8': 'SystemDataSourceM',
    'UNK_1809fe7f8': 'SystemDataBufferO',
    'UNK_1809fc7d8': 'SystemConfigDataB',
    'UNK_1809fcfc0': 'SystemConfigDataC',
    'UNK_1809fea68': 'SystemStringConstantJ',
    'UNK_1809feaa0': 'SystemMessageStringA',
    'UNK_1809feb24': 'SystemMessageStringB',
    'UNK_180a04f08': 'SystemMessageStringC',
    'UNK_1809feb28': 'SystemStringConstantK',
    'UNK_1809feb50': 'SystemDataBufferP',
    'UNK_1809feb58': 'SystemDataBufferQ',
    'UNK_1809feb70': 'SystemDataBufferR',
    'UNK_1809feb88': 'SystemDataBufferS',
    'UNK_1809feba8': 'SystemDataBufferT',
    'UNK_1809febc8': 'SystemDataBufferU',
    'UNK_1809febc0': 'SystemDataBufferV',
    'UNK_1809febd8': 'SystemDataBufferW',
    'UNK_1809febf0': 'SystemDataBufferX',
    'UNK_1809fe848': 'SystemDataBufferY',
    'UNK_1809fec28': 'SystemExceptionStringA',
    'UNK_1809fec40': 'SystemExceptionStringB',
    'UNK_180068e70': 'SystemMemoryAddressA',
    'UNK_180068e60': 'SystemMemoryAddressB',
    'UNK_1809fec50': 'SystemContextDataA',
    'UNK_1809fec70': 'SystemContextDataB',
    'UNK_1809ff4e0': 'SystemMemoryAddressC',
    'UNK_1809fee70': 'SystemResourcePointerC',
    'UNK_1809fecd8': 'SystemContextDataC',
    'UNK_1809fed10': 'SystemContextDataD',
    'UNK_1809fed78': 'SystemContextDataE',
    'UNK_1809fed40': 'SystemContextDataF',
    'UNK_1809feda8': 'SystemConfigPointerH',
    'UNK_1809feeb8': 'SystemDataPointerE',
    'UNK_1809feec8': 'SystemDataPointerF',
    'UNK_1809feed8': 'SystemDataPointerG',
    'UNK_1809ff040': 'SystemConfigPointerI',
    'UNK_18006a030': 'SystemExceptionHandler',
    'UNK_180a0e170': 'SystemMemoryDataA',
    'UNK_180a0e368': 'SystemMemoryDataB',
    'UNK_1809fefb0': 'SystemConfigPointerJ',
    'UNK_1809ff498': 'SystemDataPointerH',
    'UNK_1809ff390': 'SystemContextDataG',
    'UNK_1809ff3e8': 'SystemDataPointerI',
    'UNK_1809ff488': 'SystemDataPointerJ',
    'UNK_1809ff3f8': 'SystemDataPointerK',
    'UNK_1809ff538': 'SystemDataBufferZ',
    'UNK_1809ff550': 'SystemConfigDataD',
    'UNK_1809ff5b0': 'SystemConfigDataE',
    'UNK_1809ff5b8': 'SystemMessageStringD',
    'UNK_1809ff5c0': 'SystemDataBufferAA',
    'UNK_1809ff5d0': 'SystemConfigPointerK',
    'UNK_1809ff5f8': 'SystemDataBufferAB',
    'UNK_1809ff630': 'SystemMessageStringE',
    'UNK_1809ff610': 'SystemConfigPointerL',
    'UNK_1809ff660': 'SystemDataPointerL',
    'UNK_1809ff648': 'SystemDataPointerM',
    'UNK_1809ff688': 'SystemConfigDataF',
    'UNK_1809ff6bc': 'SystemDataPointerN',
    'UNK_1809ff6b0': 'SystemDataPointerO',
    'UNK_1809ff6c8': 'SystemMessageStringF',
    'UNK_1809ff6e0': 'SystemContextDataH',
    'UNK_1809ff7c0': 'SystemDataSourceN',
    'UNK_1809ff840': 'SystemDataBufferAC',
    'UNK_1809ff800': 'SystemDataSourceO',
    'UNK_1809ff848': 'SystemDataSourceP',
    'UNK_1809ff888': 'SystemDataSourceQ',
    'UNK_1809ff8a8': 'SystemDataSourceR',
    'UNK_1809ff8d8': 'SystemDataSourceS',
    'UNK_1809ff918': 'SystemConfigDataG',
    'UNK_1809ff938': 'SystemConfigDataH',
    'UNK_1809ff958': 'SystemConfigDataI',
    'UNK_1809ffa18': 'SystemDataPointerP',
    'UNK_1809ff9a8': 'SystemDataPointerQ',
    'UNK_180a02e68': 'SystemMemoryAddressD',
    'UNK_180a13a28': 'SystemMemoryAddressE',
    'UNK_1809ffa30': 'SystemStringConstantL',
    'UNK_180a00270': 'SystemMemoryAddressF',
    'UNK_180a00208': 'SystemMemoryAddressG',
    'UNK_180277350': 'SystemFunctionAddressC',
    'UNK_1809ffa98': 'SystemStringConstantM',
    'UNK_1802426a0': 'SystemFunctionAddressD',
    'UNK_180c91900': 'SystemInitializationData',
}

# DAT_ 变量替换映射
dat_replacements = {
    'DAT_180c82853': 'SystemStatusFlagA',
    'DAT_180be0000': 'SystemMemoryRegionA',
    'DAT_00000008': 'SystemConstantA',
    'DAT_1809fc8c8': 'SystemConfigDataA',
    'DAT_180c82843': 'SystemDebugFlagA',
    'DAT_180c82850': 'SystemDebugFlagB',
    'DAT_180c82842': 'SystemDebugFlagC',
    'DAT_180063480': 'SystemDataTableAddressA',
    'DAT_180d48d28': 'SystemGlobalVariableA',
    'DAT_1809fe810': 'SystemDataConstantA',
    'DAT_1809fc7d8': 'SystemConfigDataB',
    'DAT_1809fcfc0': 'SystemConfigDataC',
    'DAT_180bf65bc': 'SystemMemoryAlignment',
    'DAT_00000018': 'SystemGlobalVariableB',
    'DAT_00000010': 'SystemGlobalVariableC',
    'DAT_00000000': 'SystemGlobalVariableD',
    'DAT_180c82840': 'SystemDebugFlagD',
    'DAT_180c8aa69': 'SystemStatusFlagB',
    'DAT_180bf0100': 'SystemDebugFlagE',
    'DAT_180c91900': 'SystemInitializationData',
}

# param_ 变量替换映射
param_replacements = {
    'param_5': 'SystemParameterA',
}

# 执行替换
for old, new in unk_replacements.items():
    content = content.replace(old, new)

for old, new in dat_replacements.items():
    content = content.replace(old, new)

for old, new in param_replacements.items():
    content = content.replace(old, new)

# 使用正则表达式处理数字变量
def replace_numeric_vars(content, pattern, prefix):
    """替换数字变量"""
    def replacer(match):
        num = match.group(1)
        return f'{prefix}{num}'
    return re.sub(pattern, replacer, content)

# 替换各种数字变量
content = replace_numeric_vars(content, r'temp(\d+)', 'SystemTemporaryVariable')
content = replace_numeric_vars(content, r'var(\d+)', 'SystemLocalVariable')
content = replace_numeric_vars(content, r'buf(\d+)', 'SystemBuffer')
content = replace_numeric_vars(content, r'ptr(\d+)', 'SystemPointer')
content = replace_numeric_vars(content, r'ctx(\d+)', 'SystemContext')
content = replace_numeric_vars(content, r'cfg(\d+)', 'SystemConfig')

# 写入文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c', 'w', encoding='utf-8') as f:
    f.write(content)

print("变量名替换完成！")