#!/bin/bash

# 美化99_unmatched_functions.c中的SUB_函数
# 为SUB_开头的函数提供语义化名称

# 创建映射文件
cat > /tmp/sub_function_mapping.txt << 'EOF'
SUB_18013d940=SystemMemoryInitializer
SUB_180233670=SystemConfigurationValidator
SUB_18005d5f0=SystemDataProcessor
SUB_1805afbb0=SystemMemoryAllocator
SUB_1800d4090=SystemDataValidator
SUB_1800d40c0=SystemDataTransformer
EOF

# 读取映射文件并执行替换
while IFS='=' read -r old_name new_name; do
    if [ ! -z "$old_name" ] && [ ! -z "$new_name" ]; then
        echo "Replacing $old_name with $new_name"
        sed -i "s/\b$old_name\b/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
    fi
done < /tmp/sub_function_mapping.txt

echo "SUB_函数美化完成"