#!/bin/bash

# 美化99_unmatched_functions.c文件
echo "开始美化99_unmatched_functions.c文件..."

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 检查文件是否存在
if [ ! -f "$FILE_PATH" ]; then
    echo "错误: 文件 $FILE_PATH 不存在"
    exit 1
fi

# 创建临时文件
TEMP_FILE="${FILE_PATH}.tmp"

# 任务1: 将 "undefined" 类型替换为 "void*"
echo "正在替换 undefined 类型为 void*..."
sed 's/\bundefined\b/void*/g' "$FILE_PATH" > "$TEMP_FILE"

# 任务2: 将 "UNK_" 开头的变量重命名为有意义的名称
echo "正在重命名 UNK_ 变量..."

# 内存管理相关变量 (18010c300-18010c3ff)
sed -i 's/UNK_18010c3\([0-9a-f]\{2\}\)/MemoryManagementVariable_\1/g' "$TEMP_FILE"

# 渲染系统相关变量 (180a05e00-180a05fff)
sed -i 's/UNK_180a05\([e-f][0-9a-f]\)/RenderingSystemVariable_\1/g' "$TEMP_FILE"

# 初始化系统 (1800xxxx)
sed -i 's/UNK_1800\([0-9a-f]\{4\}\)/InitializationSystemVariable_\1/g' "$TEMP_FILE"

# 内存管理 (1801xxxx)
sed -i 's/UNK_1801\([0-9a-f]\{4\}\)/MemoryManagementVariable_\1/g' "$TEMP_FILE"

# 网络处理 (1802xxxx)
sed -i 's/UNK_1802\([0-9a-f]\{4\}\)/NetworkHandlerVariable_\1/g' "$TEMP_FILE"

# 渲染系统 (1803xxxx)
sed -i 's/UNK_1803\([0-9a-f]\{4\}\)/RenderingSystemVariable_\1/g' "$TEMP_FILE"

# 音频系统 (1804xxxx)
sed -i 's/UNK_1804\([0-9a-f]\{4\}\)/AudioSystemVariable_\1/g' "$TEMP_FILE"

# 输入系统 (1805xxxx)
sed -i 's/UNK_1805\([0-9a-f]\{4\}\)/InputSystemVariable_\1/g' "$TEMP_FILE"

# 物理系统 (1806xxxx)
sed -i 's/UNK_1806\([0-9a-f]\{4\}\)/PhysicsSystemVariable_\1/g' "$TEMP_FILE"

# 动画系统 (1807xxxx)
sed -i 's/UNK_1807\([0-9a-f]\{4\}\)/AnimationSystemVariable_\1/g' "$TEMP_FILE"

# 文件系统 (1808xxxx)
sed -i 's/UNK_1808\([0-9a-f]\{4\}\)/FileSystemVariable_\1/g' "$TEMP_FILE"

# 数据库系统 (1809xxxx)
sed -i 's/UNK_1809\([0-9a-f]\{4\}\)/DatabaseSystemVariable_\1/g' "$TEMP_FILE"

# 用户界面 (180axxxx)
sed -i 's/UNK_180a\([0-9a-f]\{4\}\)/UserInterfaceVariable_\1/g' "$TEMP_FILE"

# 脚本系统 (180bxxxx)
sed -i 's/UNK_180b\([0-9a-f]\{4\}\)/ScriptingSystemVariable_\1/g' "$TEMP_FILE"

# 多人游戏 (180cxxxx)
sed -i 's/UNK_180c\([0-9a-f]\{4\}\)/MultiplayerSystemVariable_\1/g' "$TEMP_FILE"

# 工具系统 (180dxxxx)
sed -i 's/UNK_180d\([0-9a-f]\{4\}\)/UtilitySystemVariable_\1/g' "$TEMP_FILE"

# 其他变量
sed -i 's/UNK_\([0-9a-f]\{8\}\)/SystemDataPointer_\1/g' "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$FILE_PATH"

echo "文件美化完成!"
echo "处理完成: $FILE_PATH"