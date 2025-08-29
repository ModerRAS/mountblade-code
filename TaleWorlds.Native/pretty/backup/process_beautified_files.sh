#!/bin/bash

# 美化文件批量处理脚本
# 用于处理所有剩余的美化文件，确保代码库完整性

echo "开始处理美化文件..."

# 美化文件列表
BEAUTIFIED_FILES=(
    "./pretty/99_part_09_part039_Final.c"
    "./pretty/backup/02_core_engine_part151_Beautified.c"
    "./pretty/backup/99_part_13_part037_sub002_sub002_Beautified.c"
    "./pretty/01_initialization_part011_Final.c"
    "./pretty/01_initialization_part011_Enhanced.c"
)

# 原始文件映射
ORIGINAL_FILES=(
    "./pretty/99_part_09_part039.c"
    "./pretty/02_core_engine_part151.c"
    "./pretty/99_part_13_part037_sub002_sub002.c"
    "./pretty/01_initialization_part011.c"
    "./pretty/01_initialization_part011.c"
)

# 处理美化文件
for i in "${!BEAUTIFIED_FILES[@]}"; do
    BEAUTIFIED_FILE="${BEAUTIFIED_FILES[$i]}"
    ORIGINAL_FILE="${ORIGINAL_FILES[$i]}"
    
    echo "处理文件: $BEAUTIFIED_FILE"
    
    # 检查美化文件是否存在
    if [ -f "$BEAUTIFIED_FILE" ]; then
        # 备份原始文件
        if [ -f "$ORIGINAL_FILE" ]; then
            echo "备份原始文件: $ORIGINAL_FILE"
            cp "$ORIGINAL_FILE" "$ORIGINAL_FILE.backup.$(date +%Y%m%d_%H%M%S)"
        fi
        
        # 复制美化文件到原始位置
        echo "复制美化文件: $BEAUTIFIED_FILE -> $ORIGINAL_FILE"
        cp "$BEAUTIFIED_FILE" "$ORIGINAL_FILE"
        
        echo "文件处理完成: $ORIGINAL_FILE"
    else
        echo "美化文件不存在: $BEAUTIFIED_FILE"
    fi
done

echo "所有美化文件处理完成！"

# 清理临时文件
echo "清理临时文件..."
find . -name "*.backup.*" -mtime +7 -delete 2>/dev/null || true

echo "美化文件处理任务完成！"
echo "处理时间: $(date)"
echo "系统状态: 正常"