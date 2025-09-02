#!/usr/bin/env python3
"""
批量替换00_data_definitions.h文件中剩余的未命名变量
"""

import re
import os

# 读取文件
file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h"
with open(file_path, 'r', encoding='utf-8') as f:
    content = f.read()

# 定义替换规则
replacements = [
    # 系统配置验证缓冲区 (17-50)
    ("UNK_180a3ac00", "SystemConfigurationValidationBuffer19"),
    ("UNK_180a3acf8", "SystemConfigurationValidationBuffer20"),
    ("UNK_180a3acd8", "SystemConfigurationValidationBuffer21"),
    ("UNK_180a3ad30", "SystemConfigurationValidationBuffer22"),
    ("UNK_180a3ad18", "SystemConfigurationValidationBuffer23"),
    ("UNK_180a3ac90", "SystemConfigurationValidationBuffer24"),
    ("UNK_180a3ac80", "SystemConfigurationValidationBuffer25"),
    ("UNK_180a3acc8", "SystemConfigurationValidationBuffer26"),
    ("UNK_180a3aca8", "SystemConfigurationValidationBuffer27"),
    ("UNK_180a3ade8", "SystemConfigurationValidationBuffer28"),
    ("UNK_180a3add0", "SystemConfigurationValidationBuffer29"),
    ("UNK_180a3ae18", "SystemConfigurationValidationBuffer30"),
    ("UNK_180a3ae00", "SystemConfigurationValidationBuffer31"),
    ("UNK_180a3ad88", "SystemConfigurationValidationBuffer32"),
    ("UNK_180a29da8", "SystemConfigurationValidationBuffer33"),
    ("UNK_180a3ad60", "SystemConfigurationValidationBuffer34"),
    ("UNK_180a3adb8", "SystemConfigurationValidationBuffer35"),
    ("UNK_180a3ada0", "SystemConfigurationValidationBuffer36"),
    ("UNK_180a3abe0", "SystemConfigurationValidationBuffer37"),
    ("UNK_180a1029c", "SystemConfigurationValidationBuffer38"),
    ("UNK_180a3ac10", "SystemConfigurationValidationBuffer39"),
    ("UNK_180a3ac48", "SystemConfigurationValidationBuffer40"),
    ("UNK_180a3abe8", "SystemConfigurationValidationBuffer41"),
    ("UNK_180a3a960", "SystemConfigurationValidationBuffer42"),
    ("UNK_180a3ab28", "SystemConfigurationValidationBuffer43"),
    ("UNK_180a39f78", "SystemConfigurationValidationBuffer44"),
    ("UNK_180a3ab18", "SystemConfigurationValidationBuffer45"),
    ("UNK_180a39fb0", "SystemConfigurationValidationBuffer46"),
    ("UNK_180a3ab50", "SystemConfigurationValidationBuffer47"),
    ("UNK_180a3ab38", "SystemConfigurationValidationBuffer48"),
    ("UNK_180a3aae8", "SystemConfigurationValidationBuffer49"),
    ("UNK_180a3aad8", "SystemConfigurationValidationBuffer50"),
    
    # 系统数据变量
    ("DAT_180c91d08", "SystemMemoryPoolPointer"),
    ("DAT_180d496d0", "SystemConfigDataStructure"),
    ("DAT_180d48de0", "SystemModuleDataTable"),
    ("DAT_180d499e8", "SystemMessageBuffer"),
    ("DAT_180a3c074", "SystemConfigStringConstant"),
    ("DAT_180d499d0", "SystemMessageDataStructure"),
    ("DAT_180d49c08", "SystemStringBuffer"),
    ("DAT_180d49d08", "SystemConfigValidationData"),
    ("DAT_180c95bf0", "SystemMemoryInitFlag"),
    ("DAT_180c924d0", "SystemMemoryConfigData"),
    ("DAT_180c95fe8", "SystemThreadFlag1"),
    ("DAT_180c96210", "SystemThreadFlag2"),
    ("DAT_180c961d8", "SystemThreadFlag3"),
    ("DAT_180c95ef0", "SystemProcessFlag1"),
    ("DAT_180c96098", "SystemProcessFlag2"),
    ("DAT_180c960b8", "SystemProcessFlag3"),
    ("DAT_180c82845", "SystemModuleInitFlag"),
    ("DAT_180c8ece0", "SystemModuleDataTable2"),
    ("DAT_180c95fc8", "SystemStringTable"),
    ("DAT_180c86920", "SystemResourceTable"),
    ("DAT_180c91d18", "SystemCallbackPointer"),
    ("DAT_180d49f6c", "SystemStringTerminator"),
    ("DAT_180d49f98", "SystemConfigPathBuffer"),
    ("DAT_180d49f70", "SystemConfigProcessData"),
    ("DAT_180d49f80", "SystemConfigCallbackData"),
    ("DAT_180d49fd8", "SystemConfigTemplateData"),
    ("DAT_180d49ff8", "SystemConstantStringBuffer"),
    ("DAT_180d49fe0", "SystemMemoryPoolPointer2"),
    ("DAT_180a06a48", "SystemDataConstant1"),
    ("DAT_180a0ba58", "SystemDataConstant2"),
    ("DAT_180a1a470", "SystemDataConstant3"),
    ("DAT_180a04be8", "SystemDataConstant4"),
    ("DAT_180a2a000", "SystemDataConstant5"),
    ("DAT_180a21a30", "SystemDataConstant6"),
    ("DAT_180a2e2bc", "SystemDataConstant7"),
    ("DAT_180a2e9e0", "SystemDataConstant8"),
    
    # 其他数据变量
    ("DAT_180329eb7", "SystemCodeLabel1"),
    ("DAT_180d49c08", "SystemStringBuffer2"),
    ("DAT_180d49fd8", "SystemConfigTemplateData2"),
    ("DAT_180d49fe0", "SystemMemoryPoolPointer3"),
    ("DAT_180d49ff8", "SystemConstantStringBuffer2"),
]

# 执行替换
for old_name, new_name in replacements:
    if old_name in content:
        content = content.replace(old_name, new_name)
        print(f"替换: {old_name} -> {new_name}")
    else:
        print(f"未找到: {old_name}")

# 写回文件
with open(file_path, 'w', encoding='utf-8') as f:
    f.write(content)

print("替换完成!")