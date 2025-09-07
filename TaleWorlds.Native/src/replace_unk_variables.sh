#!/bin/bash

# 批量替换UNK_变量为语义化名称
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换UNK_180a02060为SystemDataStringPointer2
sed -i 's/&UNK_180a02060/&SystemDataStringPointer2/g' 99_unmatched_functions.c

# 替换UNK_180a02158为SystemDataStringPointer3
sed -i 's/&UNK_180a02158/&SystemDataStringPointer3/g' 99_unmatched_functions.c

# 替换UNK_180a02628为SystemStringProcessingTemplate
sed -i 's/&UNK_180a02628/&SystemStringProcessingTemplate/g' 99_unmatched_functions.c

# 替换UNK_180a02940为SystemStringFlagTemplate
sed -i 's/&UNK_180a02940/&SystemStringFlagTemplate/g' 99_unmatched_functions.c

# 替换UNK_180a02928为SystemStringStatusTemplate
sed -i 's/&UNK_180a02928/&SystemStringStatusTemplate/g' 99_unmatched_functions.c

# 替换UNK_180a028e0为SystemStringConfigurationTemplate
sed -i 's/&UNK_180a028e0/&SystemStringConfigurationTemplate/g' 99_unmatched_functions.c

# 替换UNK_180a029f0为SystemStringParameterTemplate
sed -i 's/&UNK_180a029f0/&SystemStringParameterTemplate/g' 99_unmatched_functions.c

# 替换UNK_1809fd140为SystemNetworkTemplate
sed -i 's/&UNK_1809fd140/&SystemNetworkTemplate/g' 99_unmatched_functions.c

# 替换UNK_180a0bcb8为SystemHtmlEntityTemplate
sed -i 's/&UNK_180a0bcb8/&SystemHtmlEntityTemplate/g' 99_unmatched_functions.c

echo "批量替换完成"