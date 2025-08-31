#!/bin/bash

# 清理06_utilities.c文件中的重复代码片段
# 识别并删除重复的if语句块

# 文件路径
FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 备份原文件
cp "$FILE" "$FILE.backup"

# 使用sed来删除重复的代码块
# 先删除函数外的重复代码片段
sed -i '/^  if ((int)utility_result != UTILITY_ZERO) {$/,/^  return UTILITY_ZERO;}$/{
    /^  if ((int)utility_result != UTILITY_ZERO) {$/{
        # 标记第一个出现的块
        x
        s/^/1/
        x
    }
    /^}$/{
        x
        /^1$/{
            # 第一个块，保留
            x
            b
        }
        # 重复块，删除
        x
        d
    }
    x
    /^1$/!{
        # 不是第一个块，删除
        d
    }
    x
}' "$FILE"

echo "清理完成"