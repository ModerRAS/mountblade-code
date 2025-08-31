#!/bin/bash

# 网络系统代码清理和美化脚本 - 精细版本
# 功能：清理重复函数定义，修复格式问题，添加函数注释

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
BACKUP_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c.backup"

# 创建备份
cp "$INPUT_FILE" "$BACKUP_FILE"

echo "开始精细清理网络系统代码..."

# 清理重复的函数定义
# 删除重复的 network_process_connection 函数定义
sed -i '/^uint64_t network_process_connection.*{$/,/^}$/{
    /^uint64_t network_process_connection.*{$/{
        N
        /return 0;$/!{
            s/^uint64_t network_process_connection.*{$/\/\/ 重复函数定义已删除/
            s/.*$//
        }
    }
}' "$INPUT_FILE"

# 清理重复的 execute_network_operation 函数定义
sed -i '/^void execute_network_operation.*{$/,/^}$/{
    /^void execute_network_operation.*{$/{
        N
        /^void execute_network_operation.*{$/{
            s/^void execute_network_operation.*{$/\/\/ 重复函数定义已删除/
            s/.*$//
        }
    }
}' "$INPUT_FILE"

# 修复函数定义格式问题
sed -i 's/^}[^{]*$/}\n\n/g' "$INPUT_FILE"

# 清理多余的空行
sed -i '/^$/N;/^\n$/D' "$INPUT_FILE"

# 为主要函数添加注释
sed -i '/^uint64_t network_process_connection(int64_t network_context_pointer){$/i\
/**\
 * @brief 网络连接处理函数\
 * 处理网络连接的建立、维护和断开\
 * @param network_context_pointer 网络上下文指针\
 * @return 处理结果，0表示成功，非0表示错误码\
 */' "$INPUT_FILE"

# 为网络操作函数添加注释
sed -i '/^void execute_network_operation(int64_t network_context_pointer\[NETWORK_CONFIG_INDEX_PRIMARY\]){$/i\
/**\
 * @brief 网络操作执行函数\
 * 执行网络系统的核心操作\
 * @param network_context_pointer 网络上下文指针数组\
 */' "$INPUT_FILE"

echo "网络系统代码精细清理完成！"
echo "原始文件已备份到: $BACKUP_FILE"