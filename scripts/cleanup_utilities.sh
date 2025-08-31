#!/bin/bash

# 脚本：删除06_utilities.c文件中的重复函数定义
# 这是简化实现，原本实现需要完全重构整个函数定义体系

input_file="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

echo "开始清理重复函数定义..."

# 使用更简单的方法来处理重复函数
# 首先备份原文件
cp "$input_file" "$input_file.bak"

# 创建一个临时文件来存储处理后的内容
temp_file=$(mktemp)

# 使用awk来处理重复函数
awk '
/^uint64_t utility_process_resource_pointer\(int64_t context_handle\)$/ {
    if (!seen_process_resource_pointer) {
        seen_process_resource_pointer = 1
        print
        in_function = 1
        next
    } else {
        skip_function = 1
        next
    }
}

/^void CreateThread\(void\)$/ {
    if (!seen_CreateThread) {
        seen_CreateThread = 1
        print
        in_function = 1
        next
    } else {
        skip_function = 1
        next
    }
}

/^void InitializeEvent\(void\)$/ {
    if (!seen_InitializeEvent) {
        seen_InitializeEvent = 1
        print
        in_function = 1
        next
    } else {
        skip_function = 1
        next
    }
}

/^void InitializeFileMap\(void\)$/ {
    if (!seen_InitializeFileMap) {
        seen_InitializeFileMap = 1
        print
        in_function = 1
        next
    } else {
        skip_function = 1
        next
    }
}

/^void InitializeSharedMemory\(void\)$/ {
    if (!seen_InitializeSharedMemory) {
        seen_InitializeSharedMemory = 1
        print
        in_function = 1
        next
    } else {
        skip_function = 1
        next
    }
}

/^void InitializeSocket\(void\)$/ {
    if (!seen_InitializeSocket) {
        seen_InitializeSocket = 1
        print
        in_function = 1
        next
    } else {
        skip_function = 1
        next
    }
}

/^void InitializeEncryption\(void\)$/ {
    if (!seen_InitializeEncryption) {
        seen_InitializeEncryption = 1
        print
        in_function = 1
        next
    } else {
        skip_function = 1
        next
    }
}

/^void ExitThread\(void\)$/ {
    if (!seen_ExitThread) {
        seen_ExitThread = 1
        print
        in_function = 1
        next
    } else {
        skip_function = 1
        next
    }
}

/^void DebugBreak\(.*$/ {
    if (!seen_DebugBreak) {
        seen_DebugBreak = 1
        print
        in_function = 1
        next
    } else {
        skip_function = 1
        next
    }
}

{
    if (in_function) {
        if (/^}$/) {
            print
            in_function = 0
            skip_function = 0
        } else if (!skip_function) {
            print
        }
    } else if (!skip_function) {
        print
    }
}
' "$input_file" > "$temp_file"

# 替换原文件
mv "$temp_file" "$input_file"

echo "重复函数定义清理完成"