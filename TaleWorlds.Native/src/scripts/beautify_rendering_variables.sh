#!/bin/bash

# 渲染系统变量美化脚本
# 用于批量替换03_rendering.c中的UNK_变量为语义化名称

# 设置文件路径
FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 创建备份
cp "$FILE" "$FILE.backup.$(date +%s)"

# 美化UNK_180a1cbf0到UNK_180a21fe8的变量
sed -i 's/UNK_180a1cbf0/RenderSystemMemoryBufferA/g' "$FILE"
sed -i 's/UNK_180a21fa0/RenderSystemMemoryBufferB/g' "$FILE"
sed -i 's/UNK_180a21fc0/RenderSystemMemoryBufferC/g' "$FILE"
sed -i 's/UNK_180a21fd0/RenderSystemMemoryBufferD/g' "$FILE"
sed -i 's/UNK_180a21fe8/RenderSystemMemoryBufferE/g' "$FILE"

# 美化UNK_180a22000到UNK_180a220a8的变量
sed -i 's/UNK_180a22000/RenderSystemConfigBufferA/g' "$FILE"
sed -i 's/UNK_180a22008/RenderSystemConfigBufferB/g' "$FILE"
sed -i 's/UNK_180a22018/RenderSystemConfigBufferC/g' "$FILE"
sed -i 's/UNK_180a22028/RenderSystemConfigBufferD/g' "$FILE"
sed -i 's/UNK_180a22040/RenderSystemConfigBufferE/g' "$FILE"
sed -i 's/UNK_180a22050/RenderSystemConfigBufferF/g' "$FILE"
sed -i 's/UNK_180a22070/RenderSystemConfigBufferG/g' "$FILE"
sed -i 's/UNK_180a22088/RenderSystemConfigBufferH/g' "$FILE"
sed -i 's/UNK_180a22098/RenderSystemConfigBufferI/g' "$FILE"
sed -i 's/UNK_180a220a8/RenderSystemConfigBufferJ/g' "$FILE"

# 美化UNK_180a220c8到UNK_180a222b8的变量
sed -i 's/UNK_180a220c8/RenderSystemStatusBufferA/g' "$FILE"
sed -i 's/UNK_180a220e0/RenderSystemStatusBufferB/g' "$FILE"
sed -i 's/UNK_180a22100/RenderSystemStatusBufferC/g' "$FILE"
sed -i 's/UNK_180a22120/RenderSystemStatusBufferD/g' "$FILE"
sed -i 's/UNK_180a22138/RenderSystemStatusBufferE/g' "$FILE"
sed -i 's/UNK_180a22148/RenderSystemStatusBufferF/g' "$FILE"
sed -i 's/UNK_180a22160/RenderSystemStatusBufferG/g' "$FILE"
sed -i 's/UNK_180a221c0/RenderSystemStatusBufferH/g' "$FILE"
sed -i 's/UNK_180a22180/RenderSystemStatusBufferI/g' "$FILE"
sed -i 's/UNK_180a22198/RenderSystemStatusBufferJ/g' "$FILE"
sed -i 's/UNK_180a221b0/RenderSystemStatusBufferK/g' "$FILE"
sed -i 's/UNK_180a221e0/RenderSystemStatusBufferL/g' "$FILE"
sed -i 's/UNK_180a221f8/RenderSystemStatusBufferM/g' "$FILE"
sed -i 's/UNK_180a22210/RenderSystemStatusBufferN/g' "$FILE"
sed -i 's/UNK_180a22228/RenderSystemStatusBufferO/g' "$FILE"
sed -i 's/UNK_180a22240/RenderSystemStatusBufferP/g' "$FILE"
sed -i 's/UNK_180a22268/RenderSystemStatusBufferQ/g' "$FILE"
sed -i 's/UNK_180a22290/RenderSystemStatusBufferR/g' "$FILE"
sed -i 's/UNK_180a222b8/RenderSystemStatusBufferS/g' "$FILE"

# 美化其他剩余的UNK_变量
sed -i 's/UNK_180a22348/RenderSystemProcessingBufferA/g' "$FILE"
sed -i 's/UNK_180a22368/RenderSystemProcessingBufferB/g' "$FILE"
sed -i 's/UNK_180a222e0/RenderSystemProcessingBufferC/g' "$FILE"
sed -i 's/UNK_180a2233c/RenderSystemProcessingBufferD/g' "$FILE"

echo "渲染系统变量美化完成"