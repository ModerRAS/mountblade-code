#!/usr/bin/env python3
"""
批量替换UI系统中的变量名
将带有数字的变量名替换为有意义的名称
"""

import re
import os

# 读取文件
file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
with open(file_path, 'r', encoding='utf-8') as f:
    content = f.read()

# 定义变量名映射
variable_mapping = {
    "UISystemDataTable720": "UISystemEventDataTable",
    "UISystemDataTable6e8": "UISystemThemeDataTable",
    "UISystemDataTable6c8": "UISystemAnimationDataTable",
    "UISystemDataTable6c0": "UISystemFontDataTable",
    "UISystemDataTable6a0": "UISystemTextureDataTable",
    "UISystemDataTable960": "UISystemShaderDataTable",
    "UISystemDataTable940": "UISystemWidgetDataTable",
    "UISystemDataTable908": "UISystemWindowDataTable",
    "UISystemDataTable8e8": "UISystemStateDataTable",
    "UISystemDataTable8a0": "UISystemInputDataTable",
    "UISystemDataTable878": "UISystemResourceDataTable",
    "UISystemDataTable840": "UISystemCacheDataTable",
    "UISystemDataTable818": "UISystemThreadDataTable",
    "UISystemDataTable7d8": "UISystemTaskDataTable",
    "UISystemDataTable7a0": "UISystemNetworkDataTable",
    "UISystemDataTable770": "UISystemSecurityDataTable",
    "UISystemDataTable6f0": "UISystemPerformanceDataTable",
    "UISystemDataTable6d8": "UISystemDebugDataTable",
    "UISystemDataTable6b0": "UISystemLogDataTable",
    "UISystemDataTable930": "UISystemConfigDataTable",
    "UISystemDataTable900": "UISystemSettingDataTable",
    "UISystemDataTable8d8": "UISystemPreferenceDataTable",
    "UISystemDataTable8b0": "UISystemProfileDataTable",
    "UISystemDataTable870": "UISystemUserDataTable",
    "UISystemDataTable830": "UISystemSessionDataTable",
    "UISystemDataTable7e8": "UISystemPermissionDataTable",
    "UISystemDataTable7c0": "UISystemRoleDataTable",
    "UISystemDataTable788": "UISystemGroupDataTable",
    "UISystemDataTable740": "UISystemPolicyDataTable",
    "UISystemDataTable700": "UISystemRuleDataTable",
    "UISystemDataTable6e0": "UISystemConstraintDataTable",
    "UISystemDataTable6b8": "UISystemValidationDataTable",
    "UISystemDataTable968": "UISystemBackupDataTable",
    "UISystemDataTable948": "UISystemRestoreDataTable",
    "UISystemDataTable920": "UISystemArchiveDataTable",
    "UISystemDataTable8f0": "UISystemCompressDataTable",
    "UISystemDataTable8d0": "UISystemEncryptDataTable",
    "UISystemDataTable898": "UISystemDecryptDataTable",
    "UISystemDataTable858": "UISystemHashDataTable",
    "UISystemDataTable820": "UISystemChecksumDataTable",
    "UISystemDataTable7e0": "UISystemSignatureDataTable",
    "UISystemDataTable7b0": "UISystemCertificateDataTable",
    "UISystemDataTable778": "UISystemKeyDataTable",
    "UISystemDataTable750": "UISystemTokenDataTable",
    "UISystemDataTable708": "UISystemAuthDataTable",
    "UISystemDataTable958": "UISystemOAuthDataTable",
    "UISystemDataTable928": "UISystemJwtDataTable",
    "UISystemDataTable910": "UISystemSamlDataTable"
}

# 执行替换
for old_name, new_name in variable_mapping.items():
    # 只替换变量声明，不替换函数调用或其他地方的引用
    pattern = r'\bvoid\*\s*' + re.escape(old_name) + r'\b'
    replacement = f'void* {new_name}'
    content = re.sub(pattern, replacement, content)

# 写回文件
with open(file_path, 'w', encoding='utf-8') as f:
    f.write(content)

print("变量名替换完成")