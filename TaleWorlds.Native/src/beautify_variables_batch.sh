#!/bin/bash

# 批量美化99_unmatched_functions.c文件中的变量名
# 这个脚本将替换常见的栈变量名为语义化名称

echo "开始美化99_unmatched_functions.c文件中的变量名..."

# 定义变量替换映射
declare -A variable_mapping=(
    # 栈指针变量
    ["lStack_378"]="SystemMemoryPoolPointer"
    ["lStack_3b0"]="SystemConfigTablePointer"
    ["puStack_430"]="SystemMemoryAllocationPointer"
    ["iStack_420"]="SystemEntryStatus"
    ["puStack_558"]="SystemBackupPointer"
    ["uStack_540"]="SystemConnectionStatus"
    ["puStack_550"]="SystemConnectionPointer"
    ["uStack_548"]="SystemConnectionHandle"
    ["pcStack_638"]="SystemStackBuffer"
    ["pcStack_3d8"]="SystemStackPointer"
    ["uStack_578"]="SystemSecondaryContext"
    ["uStack_560"]="SystemSecondaryStatus"
    ["puStack_570"]="SystemSecondaryDataPointer"
    ["uStack_568"]="SystemSecondaryHandle"
    ["uStack_458"]="SystemProcessingFlagsSecondary"
    ["lStack_460"]="SystemTertiaryEncodingOffset"
    ["iStack_4d4"]="SystemProcessingFlagsTertiary"
    ["uStack_250"]="SystemTimeoutValue"
    ["uStack_248"]="SystemTimeoutData"
    ["uStack_240"]="SystemTimeoutBuffer"
    
    # 临时变量
    ["cVar5"]="SystemValidationResult"
    ["iVar9"]="ProcessingResult"
    ["lStackX_18"]="StackContextPointer18"
    ["QueueItemCount"]="QueueItemCounter"
    ["cVar2"]="ValidationFlag2"
    ["MemoryAllocationResult2"]="MemoryAllocationResult"
    ["SystemConfigTablePointer7"]="SystemConfigTableIndex"
    ["QueueItemCount9"]="SystemQueueItemCount"
    ["QueueItemCount1"]="SystemQueueCounter"
    ["Counter4"]="SystemValidationCounter"
    ["pppppppTertiaryEncodingType0"]="SystemTertiaryEncodingPointer"
    ["pppppppuStack_478"]="SystemTertiaryEncodingDataPointer"
    ["uStack_470"]="SystemTertiaryEncodingFlags"
    ["uStack_468"]="SystemTertiaryEncodingHandle"
)

# 创建临时文件
temp_file="/tmp/99_unmatched_functions_temp.c"
input_file="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 复制原文件到临时文件
cp "$input_file" "$temp_file"

# 执行变量替换
for old_var in "${!variable_mapping[@]}"; do
    new_var="${variable_mapping[$old_var]}"
    echo "替换: $old_var -> $new_var"
    
    # 使用sed进行替换，只替换完整的变量名（避免部分匹配）
    sed -i "s/\b$old_var\b/$new_var/g" "$temp_file"
done

# 替换完成后，将临时文件复制回原文件
cp "$temp_file" "$input_file"

# 清理临时文件
rm -f "$temp_file"

echo "变量名美化完成！"