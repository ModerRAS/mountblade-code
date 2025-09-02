#!/usr/bin/env python3
import re

# 读取文件
file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
    content = f.read()

# 定义前10个标签的映射
sample_mapping = {
    "LAB_180655d38": "LAB_UIConfigStringComparison",
    "LAB_180655911": "LAB_UIViewportConfigCheck", 
    "LAB_1806559dc": "LAB_UIWindowZConfigCheck",
    "LAB_180655e30": "LAB_UIFirstCharacterCheck",
    "LAB_1806557d3": "LAB_UIRenderModePatternCheck",
    "LAB_180655761": "LAB_UIThreadConfigValidation",
    "LAB_180655afa": "LAB_UIFullscreenConfigCheck",
    "LAB_180656abd": "LAB_ResourceAllocationLoop",
    "LAB_180656d5b": "LAB_SystemContextCheck",
    "LAB_180656dbb": "LAB_SemaphoreCountCheck"
}

print("开始重命名前10个UI系统标签...")

for old_label, new_label in sample_mapping.items():
    # 替换标签定义
    content = re.sub(rf'^{old_label}:', f'{new_label}:', content, flags=re.MULTILINE)
    # 替换goto引用
    content = re.sub(rf'goto {old_label};', f'goto {new_label};', content)
    print(f"重命名: {old_label} -> {new_label}")

# 写回文件
with open(file_path, 'w', encoding='utf-8') as f:
    f.write(content)

print("前10个标签重命名完成！")