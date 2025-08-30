#!/bin/bash

# 美化99_unmatched_functions.c文件中的十六进制地址变量名
# 这是一个简化实现，主要处理变量名的语义化替换

# 创建scripts目录（如果不存在）
mkdir -p scripts

# 生成替换脚本
cat > scripts/beautify_99_unmatched.sh << 'EOF'
#!/bin/bash

# 美化99_unmatched_functions.c文件中的十六进制地址变量名
# 简化实现：仅进行变量名替换，保持代码结构不变

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 备份文件
cp "$FILE" "$FILE.backup"

# 美化system_data_开头的十六进制地址变量名
# 将system_data_xxxxxx替换为语义化名称

# 系统配置相关变量
sed -i 's/system_data_a0bef74/g_system_config_buffer_primary/g' "$FILE"
sed -i 's/system_data_3aebf0/g_system_key_exchange_data/g' "$FILE"
sed -i 's/system_data_3ba000/g_system_secure_random_seed/g' "$FILE"
sed -i 's/system_data_a032a8/g_system_memory_block_a032a8/g' "$FILE"
sed -i 's/system_data_a0c1a8/g_system_config_buffer_secondary/g' "$FILE"
sed -i 's/system_data_a0b780/g_system_data_buffer_primary/g' "$FILE"
sed -i 's/system_data_a0ba68/g_system_data_buffer_secondary/g' "$FILE"
sed -i 's/system_data_a0ba88/g_system_data_buffer_tertiary/g' "$FILE"
sed -i 's/system_data_a0ba98/g_system_data_buffer_quaternary/g' "$FILE"
sed -i 's/system_data_a1a2f0/g_system_data_buffer_extended/g' "$FILE"
sed -i 's/system_data_a24700/g_system_data_buffer_large/g' "$FILE"
sed -i 's/system_data_a015b0/g_system_save_data_buffer/g' "$FILE"
sed -i 's/system_data_a063a0/g_system_achievement_data/g' "$FILE"
sed -i 's/system_data_a0696c/g_system_statistics_data/g' "$FILE"

# 美化更多的system_data_变量
sed -i 's/system_data_[0-9a-f][0-9a-f][0-9a-f][0-9a-f][0-9a-f][0-9a-f]/g_system_data_unmatched_/g' "$FILE"

# 美化十六进制常量
sed -i 's/0x0/CONSTANT_ZERO/g' "$FILE"
sed -i 's/0x1/CONSTANT_ONE/g' "$FILE"
sed -i 's/0x2/CONSTANT_TWO/g' "$FILE"
sed -i 's/0x3/CONSTANT_THREE/g' "$FILE"
sed -i 's/0x4/CONSTANT_FOUR/g' "$FILE"
sed -i 's/0x5/CONSTANT_FIVE/g' "$FILE"
sed -i 's/0x6/CONSTANT_SIX/g' "$FILE"
sed -i 's/0x7/CONSTANT_SEVEN/g' "$FILE"
sed -i 's/0x8/CONSTANT_EIGHT/g' "$FILE"
sed -i 's/0x9/CONSTANT_NINE/g' "$FILE"
sed -i 's/0xa/CONSTANT_TEN/g' "$FILE"
sed -i 's/0xb/CONSTANT_ELEVEN/g' "$FILE"
sed -i 's/0xc/CONSTANT_TWELVE/g' "$FILE"
sed -i 's/0xd/CONSTANT_THIRTEEN/g' "$FILE"
sed -i 's/0xe/CONSTANT_FOURTEEN/g' "$FILE"
sed -i 's/0xf/CONSTANT_FIFTEEN/g' "$FILE"

echo "美化完成"
EOF

# 执行脚本
chmod +x scripts/beautify_99_unmatched.sh
scripts/beautify_99_unmatched.sh

# 清理脚本
rm -rf scripts

echo "99_unmatched_functions.c文件美化完成"