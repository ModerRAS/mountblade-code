#!/bin/bash

# 美化脚本 - 清理和统一99_unmatched_functions.c中的函数定义

# 定义文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 创建清理脚本
cat > /tmp/cleanup_functions.sh << 'EOF'
#!/bin/bash

# 统一的函数映射表
declare -A FUNCTION_MAP=(
    ["FUN_18029ad30"]="ProcessSystemDataWithNodeIndex"
    ["FUN_180245280"]="ProcessSystemStringEncodingWithValidation"
    ["FUN_18029e110"]="ProcessSystemGraphicsInitialization"
    ["FUN_1802c2ac0"]="FinalizeSystemDataProcessing"
    ["FUN_180049bf0"]="InitializeSystemMemoryManagement"
    ["FUN_1802c2560"]="ProcessSystemDataWithMemoryConfiguration"
    ["FUN_18029ae20"]="ProcessSystemDataWithGraphicsContext"
    ["FUN_1800c9eb0"]="ProcessSystemDataWithCharacterValidation"
    ["FUN_1800e5650"]="ProcessSystemMemoryDataConversion"
    ["FUN_1802c3ab0"]="ProcessSystemDataEncodingOperation"
    ["FUN_1802c64d0"]="ProcessSystemDataValidationOperation"
    ["FUN_1800f3de0"]="InitializeSystemGraphicsAndResources"
)

# 备份原文件
cp "$FILE_PATH" "$FILE_PATH.backup"

# 清理重复定义，只保留第一个定义
echo "清理重复的函数定义..."
sed -i '/^#define FUN_180[0-9a-f]*.*\/\/ 处理/d' "$FILE_PATH"
sed -i '/^#define ProcessSystem.*FUN_180/d' "$FILE_PATH"

# 在文件开头添加统一的函数定义
echo "添加统一的函数定义..."
sed -i '1i\
\
// === 统一的函数定义区域 ===\
// 系统数据处理函数定义\
#define FUN_18029ad30 ProcessSystemDataWithNodeIndex\
#define FUN_180245280 ProcessSystemStringEncodingWithValidation\
#define FUN_18029e110 ProcessSystemGraphicsInitialization\
#define FUN_1802c2ac0 FinalizeSystemDataProcessing\
#define FUN_180049bf0 InitializeSystemMemoryManagement\
#define FUN_1802c2560 ProcessSystemDataWithMemoryConfiguration\
#define FUN_18029ae20 ProcessSystemDataWithGraphicsContext\
#define FUN_1800c9eb0 ProcessSystemDataWithCharacterValidation\
#define FUN_1800e5650 ProcessSystemMemoryDataConversion\
#define FUN_1802c3ab0 ProcessSystemDataEncodingOperation\
#define FUN_1802c64d0 ProcessSystemDataValidationOperation\
#define FUN_1800f3de0 InitializeSystemGraphicsAndResources\
\
' "$FILE_PATH"

echo "函数定义清理完成"
EOF

# 使脚本可执行并执行
chmod +x /tmp/cleanup_functions.sh
/tmp/cleanup_functions.sh

# 删除临时脚本
rm -f /tmp/cleanup_functions.sh

echo "清理完成"