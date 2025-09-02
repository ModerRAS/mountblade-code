#!/bin/bash

# 批量替换硬编码偏移量为语义化常量
# 注意：这个脚本会修改源文件，使用前请确保已备份

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 定义常见的偏移量替换映射
declare -A offset_mapping=(
    # 对象上下文相关偏移量
    ["ObjectContext + 0x10"]="ObjectContext + ObjectContextValidationOffset"
    ["ObjectContext + 0x18"]="ObjectContext + ObjectContextHandleDataOffset"
    ["ObjectContext + 0x20"]="ObjectContext + ObjectContextProcessingDataOffset"
    ["ObjectContext + 0x28"]="ObjectContext + ObjectContextRangeDataOffset"
    ["ObjectContext + 0x38"]="ObjectContext + ObjectContextMatrixWComponentOffset"
    ["ObjectContext + 0x40"]="ObjectContext + ObjectContextSecurityContextOffset"
    ["ObjectContext + 0x44"]="ObjectContext + ObjectContextMatrixXCoordinateOffset"
    
    # 系统上下文相关偏移量
    ["SystemContext + 0x20"]="SystemContext + SystemContextResourceOffset"
    ["SystemContext + 0x1a0"]="SystemContext + SystemContextResourceManagerOffset"
    ["SystemContext + 0x17c"]="SystemContext + SystemContextOffset"
    ["SystemContext + 0x180"]="SystemContext + SystemContextStatusFlag1Offset"
    ["SystemContext + 0x184"]="SystemContext + SystemContextStatusFlag2Offset"
    
    # 资源相关偏移量
    ["ResourceContext + 0x20"]="ResourceContext + ResourceDataContextOffset"
    ["ResourceContext + 0x28"]="ResourceContext + ValidationContextDataOffset"
    ["ResourceContext + 0x3c"]="ResourceContext + RangeDataMaxValueOffset"
    ["ResourceContext + 0x48"]="ResourceContext + ResourceContextOffsetStandard"
    ["ResourceContext + 0x50"]="ResourceContext + ResourceDataSizeOffset"
    
    # 验证相关偏移量
    ["ValidationContext + 0x60"]="ValidationContext + ValidationContextExtendedOffset"
    ["ValidationContext + 0x98"]="ValidationContext + ValidationContextCleanupOffset"
    
    # 属性缓冲区相关偏移量
    ["PropertyBuffer + 0x28"]="PropertyBuffer + PropertyDataCounterOffset"
    ["PropertyBuffer + 0x34"]="PropertyBuffer + PropertyValidationFlagsOffset"
)

# 执行替换操作
for pattern in "${!offset_mapping[@]}"; do
    replacement="${offset_mapping[$pattern]}"
    echo "替换: $pattern -> $replacement"
    
    # 使用sed进行精确替换
    sed -i "s/$pattern/$replacement/g" 06_utilities.c
done

echo "硬编码偏移量替换完成"