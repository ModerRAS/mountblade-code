#!/bin/bash

# 网络系统代码美化脚本
# 用于清理和美化05_networking.c文件的末尾部分

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 处理文件：删除末尾的无用内容并添加新的常量定义
awk '
# 查找标记行的行号
/NETWORK_SIZE_GIGANTIC_BUFFER 0x1000/ {
    # 打印当前行
    print
    
    # 添加新的常量定义
    print "// 网络系统魔法值常量定义（2025年8月31日最新批次完成）"
    print "#define NETWORK_MAGIC_TNVE 0x544e5645             // TNVE魔法值"
    print "#define NETWORK_MAGIC_TSIL 0x5453494c             // TSIL魔法值"
    print "#define NETWORK_MAGIC_BTVE 0x42545645             // BTVE魔法值"
    print "#define NETWORK_TIMEOUT_STANDARD_THRESHOLD 0x3e8  // 标准超时阈值"
    print ""
    print "// 网络系统扩展偏移量常量定义"
    print "#define NETWORK_OFFSET_EXTENDED_DATA 0x80          // 扩展数据偏移量"
    print "#define NETWORK_OFFSET_ENCRYPTION_DATA 0x90        // 加密数据偏移量"
    print "#define NETWORK_OFFSET_VALIDATION_DATA 0xa0        // 验证数据偏移量"
    print ""
    print "// 网络系统错误代码常量定义"
    print "#define NETWORK_ERROR_INVALID_SOCKET 0x1f         // 无效套接字错误"
    print "#define NETWORK_STATUS_CONNECTION_FAILED 0x1c     // 连接失败错误"
    print ""
    print "// 网络系统连接标志常量定义"
    print "#define NETWORK_CONNECTION_ACTIVE_FLAG_VALUE NETWORK_CONNECTION_ACTIVE_FLAG_MAGIC  // 连接激活标志值"
    
    # 跳过剩余的行
    next
}

# 如果遇到美化工作说明的开始，跳过直到文件末尾
/\/\*.*网络系统美化工作说明/ {
    exit
}

# 打印其他行
{
    print
}
' "$FILE_PATH" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$FILE_PATH"

echo "网络系统代码美化完成"