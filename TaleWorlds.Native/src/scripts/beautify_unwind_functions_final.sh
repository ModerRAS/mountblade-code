#!/bin/bash

# 美化06_utilities.c中的Unwind函数
# 这个脚本会重命名剩余的Unwind函数为语义化名称

cat > /tmp/beautify_unwind_functions.sh << 'EOF'
#!/bin/bash

# 定义文件路径
FILE="TaleWorlds.Native/src/06_utilities.c"

# 创建备份
cp "$FILE" "$FILE.bak"

# 美化Unwind_18090a270函数
sed -i 's/void Unwind_18090a270(/void ProcessValidationContextResourceTable(/g' "$FILE"

# 美化Unwind_18090a290函数
sed -i 's/void Unwind_18090a290(/void ProcessContextSyncResourceTable(/g' "$FILE"

# 美化Unwind_18090a2b0函数
sed -i 's/void Unwind_18090a2b0(/void ProcessDataResourceTable(/g' "$FILE"

# 美化Unwind_18090a2d0函数
sed -i 's/void Unwind_18090a2d0(/void HandleResourceTableAccessExtended(/g' "$FILE"

# 美化Unwind_18090a330函数
sed -i 's/void Unwind_18090a330(/void CleanupSystemMutexExtended(/g' "$FILE"

echo "Unwind函数美化完成"
EOF

chmod +x /tmp/beautify_unwind_functions.sh
/tmp/beautify_unwind_functions.sh

# 清理临时文件
rm -f /tmp/beautify_unwind_functions.sh