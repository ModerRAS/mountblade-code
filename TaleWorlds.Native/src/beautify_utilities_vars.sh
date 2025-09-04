#!/bin/bash

# 简化实现：美化06_utilities.c文件中的变量名
# 原本实现：直接在源文件上修改变量名
# 简化实现：创建一个脚本来批量替换变量名

# 定义变量名映射
declare -A variable_map=(
    ["ValidationStatus"]="ValidationStatusCode"
    ["ProcessedCount"]="ProcessedItemCount"
    ["TotalCount"]="TotalItemCount"
    ["MaxLimit"]="MaximumLimit"
    ["SecurityKey"]="SecurityValidationKey"
    ["CollectionIterator"]="CollectionItemIterator"
    ["ListBuffer"]="ObjectListBuffer"
    ["HandleArray"]="ContextHandleArray"
    ["MetadataBuffer"]="SecurityMetadataBuffer"
    ["ProcessingBuffer"]="DataProcessingBuffer"
    ["ValidationResult"]="ValidationStatusCode"
    ["ValidatedCount"]="ValidatedItemCount"
    ["RetrievedCount"]="RetrievedItemCount"
    ["SystemInitializationResult"]="SystemInitializationStatusCode"
    ["SystemResourceTablePointerAddress"]="SystemResourceTablePointerLocation"
    ["ResourceValidationBuffer"]="ResourceValidationDataBuffer"
    ["ObjectContextDataBuffer"]="ObjectContextDataStorage"
)

# 执行变量名替换
for old_var in "${!variable_map[@]}"; do
    new_var="${variable_map[$old_var]}"
    
    # 使用sed进行替换，只替换变量声明，不替换函数名或其他内容
    sed -i "s/\bint $old_var\b/int $new_var/g" "TaleWorlds.Native/src/06_utilities.c"
    sed -i "s/\bint64_t $old_var\b/int64_t $new_var/g" "TaleWorlds.Native/src/06_utilities.c"
    sed -i "s/\buint32_t $old_var\b/uint32_t $new_var/g" "TaleWorlds.Native/src/06_utilities.c"
    sed -i "s/\buint64_t $old_var\b/uint64_t $new_var/g" "TaleWorlds.Native/src/06_utilities.c"
    sed -i "s/\buint8_t $old_var\b/uint8_t $new_var/g" "TaleWorlds.Native/src/06_utilities.c"
    sed -i "s/\bfloat $old_var\b/float $new_var/g" "TaleWorlds.Native/src/06_utilities.c"
    sed -i "s/\bvoid \*$old_var\b/void *$new_var/g" "TaleWorlds.Native/src/06_utilities.c"
    sed -i "s/\bchar \*$old_var\b/char *$new_var/g" "TaleWorlds.Native/src/06_utilities.c"
done

echo "变量名美化完成"