#!/bin/bash

# UI系统函数美化脚本
# 用于批量美化04_ui_system.c中的函数名

# 定义函数映射
cat << 'EOF' > /tmp/ui_functions_mapping.txt
FUN_18089a685 InitializeUIComponentData
FUN_18089a690 ProcessUIDataSourceLookup
FUN_18089a6e8 ProcessUIComponentSearch
FUN_18089a73c FinalizeUIComponentData
FUN_18089a750 ValidateUIContextData
EOF

# 读取映射文件并替换
while IFS=' ' read -r old_name new_name; do
    if [ -n "$old_name" ] && [ -n "$new_name" ]; then
        echo "替换函数: $old_name -> $new_name"
        sed -i "s/$old_name/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
    fi
done < /tmp/ui_functions_mapping.txt

# 清理临时文件
rm -f /tmp/ui_functions_mapping.txt

echo "UI系统函数美化完成"