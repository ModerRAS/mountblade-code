#!/bin/bash

# 美化代码变量名和函数名的脚本
# 这个脚本将批量替换Ghidra自动生成的变量名和函数名为语义化名称

# 定义要处理的文件
FILES=(
    "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
    "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    "/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
    "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
    "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
)

# 为每个文件创建备份并进行美化
for file in "${FILES[@]}"; do
    if [ -f "$file" ]; then
        echo "处理文件: $file"
        
        # 备份原始文件
        cp "$file" "$file.backup"
        
        # 美化常见的Ghidra生成变量名
        sed -i 's/_DAT_180d48d28/SystemGlobalStatusFlag/g' "$file"
        sed -i 's/_DAT_180bf5218/NetworkConnectionStatus/g' "$file"
        sed -i 's/_DAT_180c8ed60/ResourceReferenceCounter/g' "$file"
        sed -i 's/_DAT_180c8ed64/ResourceAllocationCounter/g' "$file"
        sed -i 's/_DAT_180c9105c/ThreadIdentifier/g' "$file"
        sed -i 's/UNK_1809fcc28/SystemStackBufferBaseAddress/g' "$file"
        sed -i 's/UNK_180a01ee0/SystemStringSearchPattern/g' "$file"
        
        # 美化局部变量
        sed -i 's/auVar\([0-9]\+\)/EncodedDataBuffer\1/g' "$file"
        sed -i 's/aVar\([0-9]\+\)/DataArray\1/g' "$file"
        sed -i 's/lVar\([0-9]\+\)/LongVariable\1/g' "$file"
        sed -i 's/fVar\([0-9]\+\)/FloatVariable\1/g' "$file"
        sed -i 's/uVar\([0-9]\+\)/UnsignedVariable\1/g' "$file"
        sed -i 's/iVar\([0-9]\+\)/IntegerVariable\1/g' "$file"
        sed -i 's/pVar\([0-9]\+\)/PointerVariable\1/g' "$file"
        
        echo "完成处理: $file"
    fi
done

echo "所有文件美化完成"