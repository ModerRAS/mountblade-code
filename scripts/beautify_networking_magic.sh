#!/bin/bash
# 网络系统魔法数常量美化脚本
# 用于添加05_networking.c文件中缺失的魔法数常量定义

# 设置文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 首先备份原文件
cp "$FILE_PATH" "$FILE_PATH.backup"

# 在文件头部的常量定义区域添加新的魔法数常量
# 使用awk来在特定位置插入新的常量定义
awk '
# 在包含网络系统魔法数常量定义的行之后插入新的常量
/网络系统魔法数常量定义/ {
    print
    print "// 网络系统扩展魔法数常量定义（2025年8月31日补充）"
    print "#define NETWORK_MAGIC_TSIL 0x6c697473    // LIST字符串的逆序，用于列表操作"
    print "#define NETWORK_MAGIC_TNVE 0x65766e74    // EVENT字符串的逆序，用于事件处理"
    print "#define NETWORK_MAGIC_BTVE 0x65767462    // BTEV字符串的逆序，用于字节事件"
    print "#define NETWORK_MAGIC_DISCONNECT_EXTENDED 0x65787464    // DISCONNECT扩展魔法数"
    print "#define NETWORK_MAGIC_DISCONNECT_TIMEOUT 0x6d6f7464    // TIMEOUT魔法数"
    print "#define NETWORK_FLAG_NONBLOCKING_EXTENDED_1 0x6464542    // 非阻塞标志扩展1"
    print "#define NETWORK_FLAG_NONBLOCKING_EXTENDED_2 0x9444d43    // 非阻塞标志扩展2"
    print "#define NETWORK_CONNECTION_QUATERNARY_MAGIC 0x49564549    // 连接四元数魔法数"
    next
}
{ print }
' "$FILE_PATH" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$FILE_PATH"

echo "网络系统魔法数常量美化完成"