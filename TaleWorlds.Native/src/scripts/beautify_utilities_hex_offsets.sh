#!/bin/bash

# 美化06_utilities.c文件中的十六进制偏移量
# 将常见的十六进制偏移量替换为语义化的常量名称

# 定义替换规则
declare -A replacements=(
    # 对象上下文相关偏移量
    ["+ 0x10"]="+ ObjectContextOffset"
    ["+ 0x18"]="+ ObjectContextValidationDataOffset" 
    ["+ 0x20"]="+ ObjectContextProcessingDataOffset"
    ["+ 0x24"]="+ ObjectContextStatusDataOffset"
    ["+ 0x1c"]="+ ObjectContextHandleDataOffset"
    ["+ 0x2c"]="+ ObjectContextMatrixFlagsOffset"
    ["+ 0x30"]="+ ObjectContextMatrixScaleOffset"
    ["+ 0x34"]="+ ObjectContextMatrixTranslationOffset"
    ["+ 0x3c"]="+ ObjectContextMatrixWComponentOffset"
    ["+ 0x44"]="+ ObjectContextMatrixXCoordinateOffset"
    ["+ 0x40"]="+ ObjectContextSecurityContextOffset"
    ["+ 0x48"]="+ ObjectContextDataArrayOffset"
    ["+ 0x4c"]="+ ResourceCounterOffset"
    ["+ 0x50"]="+ ResourceArraySizeOffset"
    ["+ 0x54"]="+ ResourceSecondaryCounterOffset"
    ["+ 0x58"]="+ ResourceTertiaryCounterOffset"
    
    # 注册相关偏移量
    ["+ 0x38"]="+ RegistrationDataOffset"
    ["+ 0xe4"]="+ RegistrationStatusOffset"
    ["+ 0x4d8"]="+ RegistrationArrayOffset"
    ["+ 0x4e4"]="+ RegistrationSizeOffset"
    ["+ 0x4e8"]="+ RegistrationCapacityOffset"
    ["+ 0x4e0"]="+ RegistrationCountOffset"
    ["+ 0x368"]="+ RegistrationValidationDataOffset"
    
    # 系统上下文相关偏移量
    ["+ 0x90"]="+ SystemContextSecondaryOffset"
    ["+ 0x98"]="+ SystemContextSchedulerOffset"
    ["+ 0x1a0"]="+ SystemContextResourceManagerOffset"
    ["+ 0x2d8"]="+ SystemContextFlagsOffset"
    ["+ 0x240"]="+ SystemContextResourceTableOffset"
    
    # 资源相关偏移量
    ["+ 0x20"]="+ ResourceDataBaseOffset"
    ["+ 0x30"]="+ ResourceStatusOffset"
    ["+ 0x34"]="+ ResourceConfigurationOffset"
    ["+ 0xf8"]="+ ResourceHandleTableOffset"
    
    # 验证相关偏移量
    ["+ 0x28"]="+ ValidationCounterOffset"
    ["+ 0x29"]="+ ValidationStatusOffset"
    ["+ 0x2c"]="+ ValidationCapacityOffset"
    ["+ 0x78"]="+ ValidationContextOffset"
    
    # 其他常见偏移量
    ["+ 0x14"]="+ SecondaryDataOffset"
    ["+ 0x554"]="+ ExtendedDataOffset"
    ["+ 0x60"]="+ ProcessingDataOffset"
    ["+ 0x70"]="+ BufferPrimaryOffset"
    ["+ 0x80"]="+ BufferSecondaryOffset"
    ["+ 0x88"]="+ BufferTertiaryOffset"
    ["+ 0xb8"]="+ BufferHandleOffset"
    ["+ 0xd0"]="+ DataProcessingBufferOffset"
)

# 临时文件路径
temp_file="/dev/shm/mountblade-code/TaleWorlds.Native/src/temp_beautify_utilities.sh"
input_file="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 创建临时脚本文件
cat > "$temp_file" << 'EOF'
#!/bin/bash

# 读取输入文件
input_file="$1"
output_file="${input_file}.tmp"

# 复制原文件到临时文件
cp "$input_file" "$output_file"

# 应用替换规则
EOF

# 添加替换规则到脚本
for pattern in "${!replacements[@]}"; do
    echo "sed -i 's/\\$pattern/${replacements[$pattern]}/g' \"$output_file\"" >> "$temp_file"
done

# 添加执行权限
chmod +x "$temp_file"

echo "美化脚本已创建: $temp_file"
echo "请手动运行此脚本来美化文件: $temp_file \"$input_file\""