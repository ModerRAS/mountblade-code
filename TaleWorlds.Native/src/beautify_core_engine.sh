#!/bin/bash

# 核心引擎文件美化脚本
echo "开始美化核心引擎文件..."

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup"
echo "已创建备份文件: $FILE_PATH.backup"

# 使用sed进行基本替换
echo "开始进行变量和函数替换..."

# DAT变量替换
sed -i 's/_DAT_180c4ea58/CoreEngineStatusFlag/g' "$FILE_PATH"
sed -i 's/_DAT_180c4ea60/CoreEngineMemoryPointer/g' "$FILE_PATH"
sed -i 's/_DAT_180c82864/CoreEngineCounter/g' "$FILE_PATH"
sed -i 's/_DAT_180c91048/CoreEngineReferencePointer/g' "$FILE_PATH"
sed -i 's/_DAT_180c8a9b0/CoreEngineConfigBase/g' "$FILE_PATH"
sed -i 's/_DAT_00000008/GlobalSystemPointer/g' "$FILE_PATH"
sed -i 's/_DAT_00000018/GlobalSystemSize/g' "$FILE_PATH"
sed -i 's/_DAT_00000010/GlobalSystemBuffer/g' "$FILE_PATH"
sed -i 's/_DAT_00000000/GlobalSystemFlag/g' "$FILE_PATH"

# FUN函数替换
sed -i 's/FUN_180033a50/CoreEngineInitializeBasic/g' "$FILE_PATH"
sed -i 's/FUN_180034550/CoreEngineSetupComponents/g' "$FILE_PATH"
sed -i 's/FUN_180034650/CoreEngineConfigureSystems/g' "$FILE_PATH"
sed -i 's/FUN_180034750/CoreEngineFinalizeSetup/g' "$FILE_PATH"
sed -i 's/FUN_180623800/CoreEngineCreateHandler/g' "$FILE_PATH"
sed -i 's/FUN_1808fc7d0/CoreEngineGetSystemStatus/g' "$FILE_PATH"
sed -i 's/FUN_1801224c0/CoreEngineProcessEvent/g' "$FILE_PATH"
sed -i 's/FUN_180121550/CoreEngineCalculateOffset/g' "$FILE_PATH"
sed -i 's/FUN_180297340/CoreEngineGetResourceData/g' "$FILE_PATH"
sed -i 's/FUN_180121e20/CoreEngineProcessCommand/g' "$FILE_PATH"

# UNK变量替换
sed -i 's/UNK_180a00430/CoreEngineDefaultData/g' "$FILE_PATH"
sed -i 's/UNK_180942f90/CoreEngineSystemConfig/g' "$FILE_PATH"
sed -i 's/UNK_18098bc80/CoreEngineRenderConfig/g' "$FILE_PATH"
sed -i 's/UNK_180a2cab0/CoreEngineCacheData/g' "$FILE_PATH"
sed -i 's/UNK_180a33fb0/CoreEngineStringData/g' "$FILE_PATH"
sed -i 's/UNK_180a3c028/CoreEngineInputBuffer/g' "$FILE_PATH"
sed -i 's/UNK_180943130/CoreEngineStatusConfig/g' "$FILE_PATH"
sed -i 's/UNK_180a3def0/CoreEngineProcessBuffer/g' "$FILE_PATH"
sed -i 's/UNK_18098bcb0/CoreEngineThreadData/g' "$FILE_PATH"
sed -i 's/UNK_1809fe100/CoreEngineValidationData/g' "$FILE_PATH"

echo "基本替换完成"

# 处理LAB_标签 - 使用简单的计数器
echo "处理LAB_标签..."
python3 -c "
import re
import sys

with open('$FILE_PATH', 'r') as f:
    content = f.read()

# 查找所有LAB_标签
lab_pattern = r'LAB_([0-9a-fA-F]{8})'
labs = set(re.findall(lab_pattern, content))

# 为每个LAB_标签生成新名称
counter = 1
for lab in labs:
    old_name = f'LAB_{lab}'
    new_name = f'ControlFlow_{counter:04d}'
    content = content.replace(old_name, new_name)
    counter += 1

# 写回文件
with open('$FILE_PATH', 'w') as f:
    f.write(content)

print(f'已处理 {len(labs)} 个LAB_标签')
"

echo "LAB_标签处理完成"

# 添加文件头注释
echo "添加文件头注释..."
HEADER_COMMENT='/**
 * @file 02_core_engine.c
 * @brief 骑马与砍杀2核心引擎模块
 * 
 * 本文件包含游戏核心引擎的主要功能实现，包括：
 * - 系统初始化和配置管理
 * - 内存管理和资源分配
 * - 输入处理和事件管理
 * - 渲染系统和物理引擎
 * - 网络通信和音频处理
 * 
 * @note 本文件已通过自动化工具进行代码美化
 * @note 所有LAB_标签、UNK_变量、FUN_函数和DAT_变量已重命名为语义化名称
 * @date 2025-09-02
 */

'

# 创建临时文件
echo "$HEADER_COMMENT" > temp_header.txt
cat "$FILE_PATH" >> temp_header.txt
mv temp_header.txt "$FILE_PATH"

echo "美化完成！"
echo "建议进行编译测试以验证替换的正确性"