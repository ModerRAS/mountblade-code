#!/bin/bash

# 清理06_utilities.c文件中的重复常量定义
# 识别并合并重复的常量定义

echo "开始清理06_utilities.c文件中的重复常量定义..."

# 备份原始文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup

# 创建临时文件来处理重复常量
TEMP_FILE=$(mktemp)

# 提取所有常量定义并排序，找出重复的常量
grep "^#define.*0x8[^0-9a-fA-F]" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c | sort > /tmp/constants_0x8.txt

echo "发现的0x8相关常量定义："
cat /tmp/constants_0x8.txt

# 统计重复情况
echo "重复统计："
grep "^#define.*0x8[^0-9a-fA-F]" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c | cut -d' ' -f2 | sort | uniq -c | sort -nr

# 清理临时文件
rm -f /tmp/constants_0x8.txt $TEMP_FILE

echo "常量分析完成，请手动清理重复定义"