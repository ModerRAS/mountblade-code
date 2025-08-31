#!/bin/bash

# 安全美化06_utilities.c中的函数名
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建临时脚本文件
cat > safe_utility_rename.py << 'EOF'
import re

def safe_rename_functions():
    # 读取文件
    with open('06_utilities.c', 'r', encoding='utf-8') as f:
        lines = f.readlines()
    
    # 定义要替换的函数名映射
    function_replacements = {
        'utility_legacy_function_handler_resource_primary': 'utility_resource_handler_primary',
        'utility_legacy_function_handler_resource_secondary': 'utility_resource_handler_secondary',
        'utility_legacy_function_handler_resource_tertiary': 'utility_resource_handler_tertiary',
        'utility_legacy_function_handler_resource_quaternary': 'utility_resource_handler_quaternary',
        'utility_legacy_function_handler_resource_quinary': 'utility_resource_handler_quinary',
        'utility_legacy_function_handler_resource_extended': 'utility_resource_handler_extended',
        'utility_legacy_function_handler_cleanup_primary': 'utility_cleanup_handler_primary',
        'utility_legacy_function_handler_cleanup_secondary': 'utility_cleanup_handler_secondary',
        'utility_legacy_function_handler_cleanup_tertiary': 'utility_cleanup_handler_tertiary',
        'utility_legacy_function_handler_cleanup_quaternary': 'utility_cleanup_handler_quaternary',
        'utility_legacy_function_handler_cleanup_quinary': 'utility_cleanup_handler_quinary',
        'utility_legacy_function_handler_validation_primary': 'utility_validation_handler_primary',
        'utility_legacy_function_handler_validation_secondary': 'utility_validation_handler_secondary',
        'utility_legacy_function_handler_validation_tertiary': 'utility_validation_handler_tertiary',
        'utility_legacy_function_handler_validation_quaternary': 'utility_validation_handler_quaternary',
        'utility_legacy_function_handler_validation_quinary': 'utility_validation_handler_quinary',
        'utility_legacy_function_handler_operation_primary': 'utility_operation_handler_primary',
        'utility_legacy_function_handler_operation_secondary': 'utility_operation_handler_secondary',
        'utility_legacy_function_handler_operation_tertiary': 'utility_operation_handler_tertiary',
        'utility_legacy_function_handler_operation_quaternary': 'utility_operation_handler_quaternary',
        'utility_legacy_function_handler_system_validator7': 'utility_system_validator_septenary',
        'utility_legacy_function_handler_system_validator8': 'utility_system_validator_octal',
        'utility_legacy_function_handler_system_validator9': 'utility_system_validator_nonary',
        'utility_legacy_function_handler_system_cleaner0': 'utility_system_cleaner_primary',
        'utility_legacy_function_handler_system_cleaner1': 'utility_system_cleaner_secondary',
        'utility_legacy_function_handler_system_cleaner2': 'utility_system_cleaner_tertiary',
        'utility_legacy_function_handler_system_cleaner3': 'utility_system_cleaner_quaternary',
        'utility_legacy_function_handler_system_cleaner4': 'utility_system_cleaner_quinary',
        'utility_legacy_function_handler_system_cleaner5': 'utility_system_cleaner_senary',
        'utility_legacy_function_handler_system_cleaner6': 'utility_system_cleaner_septenary',
        'utility_legacy_function_handler_system_cleaner7': 'utility_system_cleaner_octal',
        'utility_legacy_function_handler_system_cleaner8': 'utility_system_cleaner_nonary',
        'utility_legacy_function_handler_system_cleaner9': 'utility_system_cleaner_denary',
        'utility_legacy_function_handler_system_manager0': 'utility_system_manager_primary',
        'utility_legacy_function_handler_system_manager1': 'utility_system_manager_secondary',
        'utility_legacy_function_handler_system_manager2': 'utility_system_manager_tertiary',
        'utility_legacy_function_handler_system_manager3': 'utility_system_manager_quaternary',
        'utility_legacy_function_handler_system_manager4': 'utility_system_manager_quinary',
        'utility_legacy_function_handler_system_manager5': 'utility_system_manager_senary',
        'utility_legacy_function_handler_system_manager6': 'utility_system_manager_septenary',
        'utility_legacy_function_handler_system_manager7': 'utility_system_manager_octal',
        'utility_legacy_function_handler_system_manager8': 'utility_system_manager_nonary',
        'utility_legacy_function_handler_system_manager9': 'utility_system_manager_denary',
        'utility_legacy_function_handler_system_monitor0': 'utility_system_monitor_primary',
        'utility_legacy_function_handler_system_monitor1': 'utility_system_monitor_secondary',
        'utility_legacy_function_handler_system_monitor2': 'utility_system_monitor_tertiary',
        'utility_legacy_function_handler_system_monitor3': 'utility_system_monitor_quaternary',
    }
    
    # 处理每一行
    for i, line in enumerate(lines):
        # 检查是否是函数定义行
        for old_name, new_name in function_replacements.items():
            if old_name in line:
                # 只替换函数名，保持其他部分不变
                lines[i] = line.replace(old_name, new_name)
                break
    
    # 写回文件
    with open('06_utilities.c', 'w', encoding='utf-8') as f:
        f.writelines(lines)
    
    print("函数名美化完成")

if __name__ == "__main__":
    safe_rename_functions()
EOF

# 执行脚本
python3 safe_utility_rename.py

# 清理临时脚本
rm -f safe_utility_rename.py

echo "06_utilities.c 函数名安全美化完成"