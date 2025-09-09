#!/bin/bash

# 美化02_core_engine.c文件中的标签名
# 将LAB_180开头的标签替换为有意义的名称

echo "开始美化02_core_engine.c文件中的标签名..."

# 备份原始文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.backup

# 定义标签替换规则
# 根据上下文分析，这些标签主要用于流程控制
declare -A label_replacements=(
    ["LAB_18008caf0:"]="CharacterStatusBufferCheckLabel:"
    ["LAB_18008cb7e:"]="MemoryComparisonCompleteLabel:"
    ["LAB_18008cdfe:"]="CharacterStatusBufferValidationLabel:"
    ["LAB_18008d51d:"]="SystemDataTableProcessingLabel:"
    ["LAB_18008d56b:"]="MemoryAddressMaskProcessingLabel:"
    ["LAB_18008d7a0:"]="CharacterStatusBufferCheckLabel:"
    ["LAB_18008dde0:"]="SystemStackProcessingLabel:"
    ["LAB_18008ebc0:"]="ContextHandleProcessingLabel:"
    ["LAB_18008eecc:"]="MemoryPoolManagerProcessingLabel:"
    ["LAB_18010f2a4:"]="CharacterDataValidationLabel:"
    ["LAB_18010f4c5:"]="MemoryBlockEqualCheckLabel:"
    ["LAB_18010f4d1:"]="SystemContextProcessingLabel:"
)

# 执行标签替换
for label in "${!label_replacements[@]}"; do
    replacement="${label_replacements[$label]}"
    echo "替换标签: $label -> $replacement"
    sed -i "s/$label/$replacement/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
done

echo "标签美化完成！"

# 统计替换结果
echo "统计替换结果:"
grep -c "CharacterStatusBufferCheckLabel\|MemoryComparisonCompleteLabel\|CharacterStatusBufferValidationLabel\|SystemDataTableProcessingLabel\|MemoryAddressMaskProcessingLabel\|SystemStackProcessingLabel\|ContextHandleProcessingLabel\|MemoryPoolManagerProcessingLabel\|CharacterDataValidationLabel\|MemoryBlockEqualCheckLabel\|SystemContextProcessingLabel" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c