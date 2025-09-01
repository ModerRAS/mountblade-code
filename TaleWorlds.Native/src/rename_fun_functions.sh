#!/bin/bash

# 06_utilities.c 文件 FUN_ 函数重命名脚本
# 此脚本将系统性地重命名 FUN_1808 开头的函数为有意义的名称

echo "开始重命名 06_utilities.c 文件中的 FUN_ 函数..."

# 备份原始文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup

# 定义函数重命名映射
declare -A function_mapping=(
    # 数据校验和计算相关函数
    ["FUN_1808ddd30"]="CalculateDataChecksum"
    ["FUN_1808a7c90"]="ProcessResourceData"
    ["FUN_1808a7c40"]="ValidateResourceChunk"
    ["FUN_1808a7b00"]="AccessResourceData"
    ["FUN_1808a4fb0"]="ProcessResourceStream"
    
    # 资源验证相关函数
    ["FUN_1808afd90"]="ValidateResourceFormat"
    ["FUN_1808a1870"]="CheckResourceIntegrity"
    ["FUN_180898e70"]="VerifyResourceSignature"
    ["FUN_180898eb0"]="ValidateResourceMetadata"
    
    # 系统配置和状态检查函数
    ["FUN_1808a87d0"]="CheckSystemStatus"
    ["FUN_1808acf30"]="ValidateSystemConfiguration"
    ["FUN_1808a1090"]="GetSystemState"
    ["FUN_1808a3d50"]="ProcessSystemResource"
    ["FUN_1808a1610"]="AccessSystemData"
    ["FUN_1808a6e50"]="HandleSystemResource"
    
    # 内存管理和清理函数
    ["FUN_1808de000"]="CleanupResourceBuffer"
    ["FUN_180897b16"]="HandleMemoryCleanup"
    ["FUN_180897b0e"]="ProcessMemoryRelease"
    ["FUN_180897afe"]="ExecuteMemoryDeallocation"
    
    # 资源管理函数
    ["FUN_1808fc8a8"]="RegisterResourceHandler"
    ["FUN_1808fc5ac"]="InitializeResourceManager"
    ["FUN_1808fc51c"]="ConfigureResourceSystem"
    ["FUN_1808fc074"]="ProcessResourceCallback"
    ["FUN_1808fc914"]="HandleResourceConnection"
)

# 应用重命名
for old_name in "${!function_mapping[@]}"; do
    new_name="${function_mapping[$old_name]}"
    echo "重命名 $old_name 为 $new_name"
    
    # 使用 sed 进行替换
    sed -i "s/$old_name/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
done

echo "FUN_ 函数重命名完成！"
echo "已备份原始文件为 06_utilities.c.backup"