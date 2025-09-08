#!/bin/bash

# 批量替换02_core_engine.c中的FUN_函数名为语义化名称

# 定义文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 定义函数替换映射
declare -A FUNCTION_MAP=(
    ["FUN_180193adc"]="ProcessUtf8ToUtf16Conversion"
    ["FUN_180193bc0"]="InitializeCharacterStatusBuffer"
    ["FUN_180194e00"]="AllocateSystemDataNodeTemplate"
    ["FUN_1801952e0"]="InitializeQuaternaryDataNode"
    ["FUN_1801953d0"]="ProcessCharacterCodeAllocation"
    ["FUN_180203abc"]="ConvertUtf8ToUtf16Advanced"
    ["FUN_180203ba0"]="ProcessMemoryBlockManagement"
    ["FUN_180204b50"]="HandleSystemCharacterProcessing"
    ["FUN_180204f57"]="SystemInitializationHelper"
    ["FUN_180204f4d"]="SystemConfigurationHandler"
    ["FUN_1802090ff"]="ResourceCleanupHandler"
    ["FUN_18020d730"]="ProcessAdvancedStringEncoding"
    ["FUN_180214ad0"]="HandleUtfConversionWithValidation"
    ["FUN_180215110"]="ProcessPointerBasedEncoding"
    ["FUN_180216030"]="HandleDynamicBufferProcessing"
    ["FUN_180218290"]="ProcessSystemCharacterBuffer"
    ["FUN_180218739"]="SystemResourceFinalizer"
    ["FUN_180218724"]="MemoryManagementHelper"
    ["FUN_18021f4e0"]="ProcessAdvancedCharacterConversion"
    ["FUN_18021f710"]="HandleSystemCharacterEncoding"
    ["FUN_18021f7f0"]="ProcessBufferBasedEncoding"
    ["FUN_1802263b0"]="ProcessSystemMemoryEncoding"
    ["FUN_180226a50"]="HandleDynamicCharacterProcessing"
    ["FUN_18022a810"]="ProcessAdvancedSystemEncoding"
)

# 复制原文件到临时文件
cp "$FILE_PATH" "$TEMP_FILE"

# 执行替换操作
for fun_name in "${!FUNCTION_MAP[@]}"; do
    semantic_name="${FUNCTION_MAP[$fun_name]}"
    
    # 使用sed替换函数定义（只替换行首的函数定义）
    sed -i "s/^$fun_name\([ (]\)/$semantic_name\1/g" "$TEMP_FILE"
    
    echo "替换 $fun_name -> $semantic_name"
done

# 替换标签定义（LAB_开头的）
sed -i 's/^FUN_180179a0a:/ProcessCharacterAllocationWithValidation:/g' "$TEMP_FILE"
sed -i 's/^FUN_180218739:/SystemResourceFinalizer:/g' "$TEMP_FILE"
sed -i 's/^FUN_180218724:/MemoryManagementHelper:/g' "$TEMP_FILE"
sed -i 's/^FUN_180204f57:/SystemInitializationHelper:/g' "$TEMP_FILE"
sed -i 's/^FUN_180204f4d:/SystemConfigurationHandler:/g' "$TEMP_FILE"
sed -i 's/^FUN_1802090ff:/ResourceCleanupHandler:/g' "$TEMP_FILE"

echo "替换标签定义完成"

# 检查替换结果
echo "检查替换结果..."
grep -n "^Process\|^Handle\|^Initialize\|^Convert\|^System\|^Resource\|^Memory" "$TEMP_FILE" | head -20

# 替换原文件
mv "$TEMP_FILE" "$FILE_PATH"

echo "批量替换完成"