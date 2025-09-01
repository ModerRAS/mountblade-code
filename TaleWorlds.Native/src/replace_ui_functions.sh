#!/bin/bash

# 创建临时替换脚本
cat > /tmp/replace_functions.sh << 'EOF'
#!/bin/bash

# 定义文件路径
FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

# 替换函数声明
sed -i 's/FUN_18068f330/CheckUIMemoryPoolIntegrity/g' "$FILE"
sed -i 's/FUN_18068f3a0/UpdateUIMemoryPoolStatistics/g' "$FILE"
sed -i 's/FUN_18068f410/ResetUIMemoryPoolCounters/g' "$FILE"
sed -i 's/FUN_18068f480/FlushUIMemoryPoolCache/g' "$FILE"
sed -i 's/FUN_18068f4f0/RebuildUIMemoryPoolIndex/g' "$FILE"
sed -i 's/FUN_18068f680/CompactUIMemoryPool/g' "$FILE"
sed -i 's/FUN_18068f810/AnalyzeUIMemoryPoolUsage/g' "$FILE"
sed -i 's/FUN_18068f9a0/ValidateUIMemoryPoolAlignment/g' "$FILE"
sed -i 's/FUN_18068fb30/UpdateUIMemoryPoolMetrics/g' "$FILE"
sed -i 's/FUN_18068fba0/ProcessUIMemoryPoolDefragment/g' "$FILE"
sed -i 's/FUN_18068fc10/InitializeUIMemoryPoolAllocator/g' "$FILE"
sed -i 's/FUN_18068fc80/ConfigureUIMemoryPoolSettings/g' "$FILE"
sed -i 's/FUN_18068fcf0/SetupUIMemoryPoolParameters/g' "$FILE"
sed -i 's/FUN_18068fd60/StartUIMemoryPoolService/g' "$FILE"
sed -i 's/FUN_18068fdd0/StopUIMemoryPoolService/g' "$FILE"
sed -i 's/FUN_18068fe10/RestartUIMemoryPoolService/g' "$FILE"
sed -i 's/FUN_18068ff60/ResetUIMemoryPoolService/g' "$FILE"

echo "函数替换完成"
EOF

# 执行脚本
chmod +x /tmp/replace_functions.sh
/tmp/replace_functions.sh

# 清理
rm /tmp/replace_functions.sh