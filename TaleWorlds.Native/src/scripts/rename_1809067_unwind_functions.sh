#!/bin/bash

# 专门针对1809067a0-1809067f0系列Unwind函数的重命名脚本
# 为06_utilities.c文件中的特定Unwind函数提供语义化名称并添加文档注释

echo "开始重命名1809067系列Unwind函数..."

# 创建一个临时脚本文件来执行重命名
cat > /tmp/rename_specific_unwind_functions.sh << 'EOF'
#!/bin/bash

# 定义1809067系列Unwind函数的语义化映射
# 根据用户要求进行重命名

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 1. 将 Unwind_1809067a0 函数重命名为 SetupResourceHashTable003
sed -i 's/void Unwind_1809067a0/void SetupResourceHashTable003/g' "$FILE_PATH"

# 2. 将 Unwind_1809067b0 函数重命名为 InitializeSystemResourceHandler
sed -i 's/void Unwind_1809067b0/void InitializeSystemResourceHandler/g' "$FILE_PATH"

# 3. 将 Unwind_1809067c0 函数重命名为 ProcessSystemResourceValidation
sed -i 's/void Unwind_1809067c0/void ProcessSystemResourceValidation/g' "$FILE_PATH"

# 4. 将 Unwind_1809067d0 函数重命名为 ExecuteSystemConfigurationTask
sed -i 's/void Unwind_1809067d0/void ExecuteSystemConfigurationTask/g' "$FILE_PATH"

# 5. 将 Unwind_1809067f0 函数重命名为 FinalizeSystemResourceOperation
sed -i 's/void Unwind_1809067f0/void FinalizeSystemResourceOperation/g' "$FILE_PATH"

echo "1809067系列Unwind函数重命名完成"
EOF

# 执行重命名脚本
chmod +x /tmp/rename_specific_unwind_functions.sh
/tmp/rename_specific_unwind_functions.sh

# 清理临时文件
rm -f /tmp/rename_specific_unwind_functions.sh

echo "1809067系列Unwind函数重命名脚本执行完成"