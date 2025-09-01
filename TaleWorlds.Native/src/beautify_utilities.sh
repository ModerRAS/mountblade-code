#!/bin/bash

# 美化06_utilities.c文件中的FUN_函数名
# 这个脚本将帮助批量重命名FUN_开头的函数

# 函数名映射表
declare -A FUNCTION_MAP=(
    # 资源哈希处理函数
    ["FUN_1808a2740"]="ResourceHashGetter"
    ["FUN_1808a2890"]="ResourceHashCalculator" 
    ["FUN_1808a2e00"]="ResourceHashProcessor"
    
    # 数据处理函数
    ["FUN_1808a4a20"]="ResourceDataFetcher"
    ["FUN_1808a54c0"]="ResourceDataReader"
    ["FUN_1808a5630"]="ResourceDataBuilder"
    ["FUN_1808a5a90"]="ResourceDataScanner"
    ["FUN_1808a5d60"]="ResourceDataExtractor"
    
    # 验证和认证函数
    ["FUN_1808afc70"]="ResourceDataAuthenticator"
    ["FUN_180899220"]="ResourceValidator"
    ["FUN_18089d490"]="DataAuthenticator"
    
    # 清理和管理函数
    ["FUN_1808ddf80"]="CleanupHandler"
    ["FUN_18084c150"]="MemoryManager"
    ["FUN_18084c470"]="DataBufferManager"
    
    # 错误处理函数
    ["FUN_1808974f4"]="ErrorHandler"
    ["FUN_1808975e0"]="StatusChecker"
    ["FUN_180897afe"]="ErrorHandlerAlt1"
    ["FUN_180897b0e"]="ErrorHandlerAlt2"
    ["FUN_180897b16"]="ErrorHandlerAlt3"
    
    # 资源处理函数
    ["FUN_18089b31f"]="ResourceDataValidator"
    ["FUN_18089b380"]="ResourceDataProcessor"
    ["FUN_18089b7d0"]="ResourceChecksumValidator"
    ["FUN_18089c030"]="ResourceArrayLoader"
    ["FUN_18089c630"]="ResourceDataManager"
    
    # 其他函数
    ["FUN_18089c2d8"]="ResourceProcessingHandler"
    ["FUN_18089c69d"]="ResourceProcessingHandlerAlt1"
    ["FUN_18089c86d"]="ResourceProcessingHandlerAlt2"
    ["FUN_18089c872"]="ResourceProcessingHandlerAlt3"
    ["FUN_18089c94a"]="ResourceProcessingHandlerAlt4"
    ["FUN_18089ccb9"]="ResourceProcessingHandlerAlt5"
    ["FUN_18089ce30"]="ResourceDataLoader"
    ["FUN_18089ce60"]="ResourceDataLoaderAlt1"
    ["FUN_18089cfd6"]="ResourceDataLoaderAlt2"
)

# 处理文件
FILE="TaleWorlds.Native/src/06_utilities.c"

echo "开始美化 $FILE 文件..."

# 备份原文件
cp "$FILE" "$FILE.backup.$(date +%Y%m%d_%H%M%S)"

# 对每个函数进行重命名
for old_name in "${!FUNCTION_MAP[@]}"; do
    new_name="${FUNCTION_MAP[$old_name]}"
    
    echo "重命名函数: $old_name -> $new_name"
    
    # 使用sed进行替换
    sed -i "s/\b$old_name\b/$new_name/g" "$FILE"
done

echo "函数重命名完成！"

# 为每个重命名的函数添加注释
echo "添加函数注释..."

# 为ResourceHashGetter添加注释
sed -i '/^ulonglong ResourceHashGetter(/i\
/**\
 * @brief 获取资源哈希值\
 * \
 * 该函数负责获取指定资源的哈希值\
 * 用于资源标识和数据完整性验证\
 *\
 * @param resourceHandle 资源句柄\
 * @param offset 偏移量\
 * @return 返回资源哈希值\
 */' "$FILE"

# 为ResourceHashCalculator添加注释
sed -i '/^ulonglong ResourceHashCalculator(/i\
/**\
 * @brief 计算资源哈希值\
 * \
 * 该函数负责计算指定资源的哈希值\
 * 用于资源标识和数据完整性验证\
 *\
 * @param resourceHandle 资源句柄\
 * @param dataPtr 数据指针\
 * @param flags 标志位\
 * @return 返回计算的资源哈希值\
 */' "$FILE"

echo "注释添加完成！"

echo "美化完成！"