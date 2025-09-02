#!/bin/bash

# 美化DAT_变量的脚本
# 将DAT_180xxxxx格式的变量名替换为语义化的名称

# 定义替换映射
declare -A replacements

# 系统内存配置相关变量
replacements["DAT_180bfab28"]="SystemMemoryConfigBufferPrimary"
replacements["DAT_180bfabc0"]="SystemMemoryConfigBufferSecondary" 
replacements["DAT_180bfac58"]="SystemMemoryConfigBufferTertiary"
replacements["DAT_180bfacf0"]="SystemMemoryConfigBufferQuaternary"
replacements["DAT_180bfad88"]="SystemPathConfigBufferPrimary"
replacements["DAT_180bfae20"]="SystemPathConfigBufferSecondary"
replacements["DAT_180c92068"]="SystemMemoryPoolBufferPrimary"

# 系统数据指针
replacements["DAT_180c86960"]="SystemModuleDataPointer"
replacements["DAT_180c868d0"]="SystemConfigurationDataPointer"
replacements["DAT_180c8a9b0"]="SystemInitializationDataPointer"
replacements["DAT_180c86950"]="SystemStatusDataPointer"
replacements["DAT_180c8aa18"]="SystemPerformanceDataPointer"
replacements["DAT_180c8ed18"]="SystemMemoryAllocationPointer"
replacements["DAT_180c86878"]="SystemNetworkDataPointer"
replacements["DAT_180c86880"]="SystemNetworkConfigPointer"
replacements["DAT_180c8f008"]="SystemGraphicsDataPointer"

# 系统常量和配置
replacements["DAT_180bf3ff8"]="SystemDefaultFloatValue"
replacements["DAT_180c86910"]="SystemPrimaryStatusFlag"
replacements["DAT_180c86938"]="SystemModuleConfigData"
replacements["DAT_180c86920"]="SystemRuntimeConfigData"

# 遍历所有替换并执行
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    echo "替换 $old_name -> $new_name"
    
    # 替换文件内容
    sed -i "s/\b$old_name\b/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
done

echo "DAT_变量美化完成"