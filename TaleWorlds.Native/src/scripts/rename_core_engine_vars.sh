#!/bin/bash

# 批量重命名核心引擎文件中的通用变量名
# 将通用变量名替换为语义化的名称

# 备份原文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.backup

# 定义替换规则
declare -A replacements=(
    # 双精度浮点数变量
    ["DoubleVariable1"]="ConfigurationParamA"
    ["DoubleVariable3"]="ConfigurationParamB"
    
    # 长整型变量
    ["LongVariable10"]="StringCompareLength"
    ["LongVariable11"]="StringCharIndex"
    ["LongVariable13"]="ConfigDataStructurePtr"
    
    # 无符号整型变量
    ["UnsignedVariable10"]="ConfigDataOffset"
    ["UnsignedVariable12"]="ConfigItemCounter"
    ["UnsignedVariable16"]="ConfigItemIndex"
    ["UnsignedVariable4"]="ValidationResult"
    
    # 整型变量
    ["iVar17"]="StringLength"
    
    # 字符变量
    ["cVar2"]="CurrentChar"
    
    # 布尔变量
    ["bVar1"]="ComparisonResult"
    ["bVar2"]="ValidationFlag"
    
    # 指针变量
    ["puVar5"]="ConfigBufferPtr"
    ["puVar8"]="StringBufferPtr"
    ["pbVar5"]="ByteArrayPtr"
    ["pbVar6"]="StringComparePtr"
    
    # 其他变量
    ["lVar6"]="SearchResultPtr"
    ["lVar7"]="MemoryAddress"
    ["uVar5"]="AllocationFlag"
    ["uVar6"]="CompareFlag"
    ["uVar7"]="MemorySize"
    ["uVar8"]="SuccessFlag"
)

# 执行替换
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    echo "替换 $old_name -> $new_name"
    sed -i "s/\b$old_name\b/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
done

echo "变量重命名完成"