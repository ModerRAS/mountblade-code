#!/bin/bash

# 06_utilities.c 变量名美化脚本
# 专门用于美化 Unwind_ 函数名和其他未美化的变量名

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 备份原始文件
cp "$FILE_PATH" "${FILE_PATH}.backup"

echo "开始美化 06_utilities.c 文件..."

# 美化 Unwind_ 函数名（按字母顺序分组）
# A组函数名美化
sed -i 's/Unwind_180900000/ProcessSystemInitializationA0/g' "$FILE_PATH"
sed -i 's/Unwind_180900010/ProcessSystemInitializationA1/g' "$FILE_PATH"
sed -i 's/Unwind_180900020/ProcessSystemInitializationA2/g' "$FILE_PATH"
sed -i 's/Unwind_180900030/ProcessSystemInitializationA3/g' "$FILE_PATH"
sed -i 's/Unwind_180900040/ProcessSystemInitializationA4/g' "$FILE_PATH"
sed -i 's/Unwind_180900050/ProcessSystemInitializationA5/g' "$FILE_PATH"
sed -i 's/Unwind_180900060/ProcessSystemInitializationA6/g' "$FILE_PATH"
sed -i 's/Unwind_180900070/ProcessSystemInitializationA7/g' "$FILE_PATH"
sed -i 's/Unwind_180900080/ProcessSystemInitializationA8/g' "$FILE_PATH"
sed -i 's/Unwind_180900090/ProcessSystemInitializationA9/g' "$FILE_PATH"

# B组函数名美化
sed -i 's/Unwind_180900100/ProcessSystemDataValidationB0/g' "$FILE_PATH"
sed -i 's/Unwind_180900110/ProcessSystemDataValidationB1/g' "$FILE_PATH"
sed -i 's/Unwind_180900120/ProcessSystemDataValidationB2/g' "$FILE_PATH"
sed -i 's/Unwind_180900130/ProcessSystemDataValidationB3/g' "$FILE_PATH"
sed -i 's/Unwind_180900140/ProcessSystemDataValidationB4/g' "$FILE_PATH"
sed -i 's/Unwind_180900150/ProcessSystemDataValidationB5/g' "$FILE_PATH"
sed -i 's/Unwind_180900160/ProcessSystemDataValidationB6/g' "$FILE_PATH"
sed -i 's/Unwind_180900170/ProcessSystemDataValidationB7/g' "$FILE_PATH"
sed -i 's/Unwind_180900180/ProcessSystemDataValidationB8/g' "$FILE_PATH"
sed -i 's/Unwind_180900190/ProcessSystemDataValidationB9/g' "$FILE_PATH"

# C组函数名美化
sed -i 's/Unwind_180900200/ProcessMemoryOperationC0/g' "$FILE_PATH"
sed -i 's/Unwind_180900210/ProcessMemoryOperationC1/g' "$FILE_PATH"
sed -i 's/Unwind_180900220/ProcessMemoryOperationC2/g' "$FILE_PATH"
sed -i 's/Unwind_180900230/ProcessMemoryOperationC3/g' "$FILE_PATH"
sed -i 's/Unwind_180900240/ProcessMemoryOperationC4/g' "$FILE_PATH"
sed -i 's/Unwind_180900250/ProcessMemoryOperationC5/g' "$FILE_PATH"
sed -i 's/Unwind_180900260/ProcessMemoryOperationC6/g' "$FILE_PATH"
sed -i 's/Unwind_180900270/ProcessMemoryOperationC7/g' "$FILE_PATH"
sed -i 's/Unwind_180900280/ProcessMemoryOperationC8/g' "$FILE_PATH"
sed -i 's/Unwind_180900290/ProcessMemoryOperationC9/g' "$FILE_PATH"

# D组函数名美化
sed -i 's/Unwind_180900300/HandleSystemExceptionD0/g' "$FILE_PATH"
sed -i 's/Unwind_180900310/HandleSystemExceptionD1/g' "$FILE_PATH"
sed -i 's/Unwind_180900320/HandleSystemExceptionD2/g' "$FILE_PATH"
sed -i 's/Unwind_180900330/HandleSystemExceptionD3/g' "$FILE_PATH"
sed -i 's/Unwind_180900340/HandleSystemExceptionD4/g' "$FILE_PATH"
sed -i 's/Unwind_180900350/HandleSystemExceptionD5/g' "$FILE_PATH"
sed -i 's/Unwind_180900360/HandleSystemExceptionD6/g' "$FILE_PATH"
sed -i 's/Unwind_180900370/HandleSystemExceptionD7/g' "$FILE_PATH"
sed -i 's/Unwind_180900380/HandleSystemExceptionD8/g' "$FILE_PATH"
sed -i 's/Unwind_180900390/HandleSystemExceptionD9/g' "$FILE_PATH"

# E组函数名美化
sed -i 's/Unwind_180900400/ValidateSystemParametersE0/g' "$FILE_PATH"
sed -i 's/Unwind_180900410/ValidateSystemParametersE1/g' "$FILE_PATH"
sed -i 's/Unwind_180900420/ValidateSystemParametersE2/g' "$FILE_PATH"
sed -i 's/Unwind_180900430/ValidateSystemParametersE3/g' "$FILE_PATH"
sed -i 's/Unwind_180900440/ValidateSystemParametersE4/g' "$FILE_PATH"
sed -i 's/Unwind_180900450/ValidateSystemParametersE5/g' "$FILE_PATH"
sed -i 's/Unwind_180900460/ValidateSystemParametersE6/g' "$FILE_PATH"
sed -i 's/Unwind_180900470/ValidateSystemParametersE7/g' "$FILE_PATH"
sed -i 's/Unwind_180900480/ValidateSystemParametersE8/g' "$FILE_PATH"
sed -i 's/Unwind_180900490/ValidateSystemParametersE9/g' "$FILE_PATH"

# F组函数名美化
sed -i 's/Unwind_180900500/ManageSystemResourcesF0/g' "$FILE_PATH"
sed -i 's/Unwind_180900510/ManageSystemResourcesF1/g' "$FILE_PATH"
sed -i 's/Unwind_180900520/ManageSystemResourcesF2/g' "$FILE_PATH"
sed -i 's/Unwind_180900530/ManageSystemResourcesF3/g' "$FILE_PATH"
sed -i 's/Unwind_180900540/ManageSystemResourcesF4/g' "$FILE_PATH"
sed -i 's/Unwind_180900550/ManageSystemResourcesF5/g' "$FILE_PATH"
sed -i 's/Unwind_180900560/ManageSystemResourcesF6/g' "$FILE_PATH"
sed -i 's/Unwind_180900570/ManageSystemResourcesF7/g' "$FILE_PATH"
sed -i 's/Unwind_180900580/ManageSystemResourcesF8/g' "$FILE_PATH"
sed -i 's/Unwind_180900590/ManageSystemResourcesF9/g' "$FILE_PATH"

# G组函数名美化
sed -i 's/Unwind_180900600/ProcessDataValidationG0/g' "$FILE_PATH"
sed -i 's/Unwind_180900610/ProcessDataValidationG1/g' "$FILE_PATH"
sed -i 's/Unwind_180900620/ProcessDataValidationG2/g' "$FILE_PATH"
sed -i 's/Unwind_180900630/ProcessDataValidationG3/g' "$FILE_PATH"
sed -i 's/Unwind_180900640/ProcessDataValidationG4/g' "$FILE_PATH"
sed -i 's/Unwind_180900650/ProcessDataValidationG5/g' "$FILE_PATH"
sed -i 's/Unwind_180900660/ProcessDataValidationG6/g' "$FILE_PATH"
sed -i 's/Unwind_180900670/ProcessDataValidationG7/g' "$FILE_PATH"
sed -i 's/Unwind_180900680/ProcessDataValidationG8/g' "$FILE_PATH"
sed -i 's/Unwind_180900690/ProcessDataValidationG9/g' "$FILE_PATH"

# H组函数名美化
sed -i 's/Unwind_180900700/ExecuteSystemOperationH0/g' "$FILE_PATH"
sed -i 's/Unwind_180900710/ExecuteSystemOperationH1/g' "$FILE_PATH"
sed -i 's/Unwind_180900720/ExecuteSystemOperationH2/g' "$FILE_PATH"
sed -i 's/Unwind_180900730/ExecuteSystemOperationH3/g' "$FILE_PATH"
sed -i 's/Unwind_180900740/ExecuteSystemOperationH4/g' "$FILE_PATH"
sed -i 's/Unwind_180900750/ExecuteSystemOperationH5/g' "$FILE_PATH"
sed -i 's/Unwind_180900760/ExecuteSystemOperationH6/g' "$FILE_PATH"
sed -i 's/Unwind_180900770/ExecuteSystemOperationH7/g' "$FILE_PATH"
sed -i 's/Unwind_180900780/ExecuteSystemOperationH8/g' "$FILE_PATH"
sed -i 's/Unwind_180900790/ExecuteSystemOperationH9/g' "$FILE_PATH"

# I组函数名美化
sed -i 's/Unwind_180900800/HandleMemoryManagementI0/g' "$FILE_PATH"
sed -i 's/Unwind_180900810/HandleMemoryManagementI1/g' "$FILE_PATH"
sed -i 's/Unwind_180900820/HandleMemoryManagementI2/g' "$FILE_PATH"
sed -i 's/Unwind_180900830/HandleMemoryManagementI3/g' "$FILE_PATH"
sed -i 's/Unwind_180900840/HandleMemoryManagementI4/g' "$FILE_PATH"
sed -i 's/Unwind_180900850/HandleMemoryManagementI5/g' "$FILE_PATH"
sed -i 's/Unwind_180900860/HandleMemoryManagementI6/g' "$FILE_PATH"
sed -i 's/Unwind_180900870/HandleMemoryManagementI7/g' "$FILE_PATH"
sed -i 's/Unwind_180900880/HandleMemoryManagementI8/g' "$FILE_PATH"
sed -i 's/Unwind_180900890/HandleMemoryManagementI9/g' "$FILE_PATH"

# J组函数名美化
sed -i 's/Unwind_180900900/ProcessSystemEventsJ0/g' "$FILE_PATH"
sed -i 's/Unwind_180900910/ProcessSystemEventsJ1/g' "$FILE_PATH"
sed -i 's/Unwind_180900920/ProcessSystemEventsJ2/g' "$FILE_PATH"
sed -i 's/Unwind_180900930/ProcessSystemEventsJ3/g' "$FILE_PATH"
sed -i 's/Unwind_180900940/ProcessSystemEventsJ4/g' "$FILE_PATH"
sed -i 's/Unwind_180900950/ProcessSystemEventsJ5/g' "$FILE_PATH"
sed -i 's/Unwind_180900960/ProcessSystemEventsJ6/g' "$FILE_PATH"
sed -i 's/Unwind_180900970/ProcessSystemEventsJ7/g' "$FILE_PATH"
sed -i 's/Unwind_180900980/ProcessSystemEventsJ8/g' "$FILE_PATH"
sed -i 's/Unwind_180900990/ProcessSystemEventsJ9/g' "$FILE_PATH"

echo "第一组 Unwind_ 函数名美化完成"

# 继续美化更多的 Unwind_ 函数名
# K组函数名美化
sed -i 's/Unwind_180900a00/ValidateSystemIntegrityK0/g' "$FILE_PATH"
sed -i 's/Unwind_180900a10/ValidateSystemIntegrityK1/g' "$FILE_PATH"
sed -i 's/Unwind_180900a20/ValidateSystemIntegrityK2/g' "$FILE_PATH"
sed -i 's/Unwind_180900a30/ValidateSystemIntegrityK3/g' "$FILE_PATH"
sed -i 's/Unwind_180900a40/ValidateSystemIntegrityK4/g' "$FILE_PATH"
sed -i 's/Unwind_180900a50/ValidateSystemIntegrityK5/g' "$FILE_PATH"
sed -i 's/Unwind_180900a60/ValidateSystemIntegrityK6/g' "$FILE_PATH"
sed -i 's/Unwind_180900a70/ValidateSystemIntegrityK7/g' "$FILE_PATH"
sed -i 's/Unwind_180900a80/ValidateSystemIntegrityK8/g' "$FILE_PATH"
sed -i 's/Unwind_180900a90/ValidateSystemIntegrityK9/g' "$FILE_PATH"

# L组函数名美化
sed -i 's/Unwind_180900b00/ProcessSystemTasksL0/g' "$FILE_PATH"
sed -i 's/Unwind_180900b10/ProcessSystemTasksL1/g' "$FILE_PATH"
sed -i 's/Unwind_180900b20/ProcessSystemTasksL2/g' "$FILE_PATH"
sed -i 's/Unwind_180900b30/ProcessSystemTasksL3/g' "$FILE_PATH"
sed -i 's/Unwind_180900b40/ProcessSystemTasksL4/g' "$FILE_PATH"
sed -i 's/Unwind_180900b50/ProcessSystemTasksL5/g' "$FILE_PATH"
sed -i 's/Unwind_180900b60/ProcessSystemTasksL6/g' "$FILE_PATH"
sed -i 's/Unwind_180900b70/ProcessSystemTasksL7/g' "$FILE_PATH"
sed -i 's/Unwind_180900b80/ProcessSystemTasksL8/g' "$FILE_PATH"
sed -i 's/Unwind_180900b90/ProcessSystemTasksL9/g' "$FILE_PATH"

# M组函数名美化
sed -i 's/Unwind_180900c00/HandleSystemCleanupM0/g' "$FILE_PATH"
sed -i 's/Unwind_180900c10/HandleSystemCleanupM1/g' "$FILE_PATH"
sed -i 's/Unwind_180900c20/HandleSystemCleanupM2/g' "$FILE_PATH"
sed -i 's/Unwind_180900c30/HandleSystemCleanupM3/g' "$FILE_PATH"
sed -i 's/Unwind_180900c40/HandleSystemCleanupM4/g' "$FILE_PATH"
sed -i 's/Unwind_180900c50/HandleSystemCleanupM5/g' "$FILE_PATH"
sed -i 's/Unwind_180900c60/HandleSystemCleanupM6/g' "$FILE_PATH"
sed -i 's/Unwind_180900c70/HandleSystemCleanupM7/g' "$FILE_PATH"
sed -i 's/Unwind_180900c80/HandleSystemCleanupM8/g' "$FILE_PATH"
sed -i 's/Unwind_180900c90/HandleSystemCleanupM9/g' "$FILE_PATH"

# N组函数名美化
sed -i 's/Unwind_180900d00/ProcessSystemConfigurationN0/g' "$FILE_PATH"
sed -i 's/Unwind_180900d10/ProcessSystemConfigurationN1/g' "$FILE_PATH"
sed -i 's/Unwind_180900d20/ProcessSystemConfigurationN2/g' "$FILE_PATH"
sed -i 's/Unwind_180900d30/ProcessSystemConfigurationN3/g' "$FILE_PATH"
sed -i 's/Unwind_180900d40/ProcessSystemConfigurationN4/g' "$FILE_PATH"
sed -i 's/Unwind_180900d50/ProcessSystemConfigurationN5/g' "$FILE_PATH"
sed -i 's/Unwind_180900d60/ProcessSystemConfigurationN6/g' "$FILE_PATH"
sed -i 's/Unwind_180900d70/ProcessSystemConfigurationN7/g' "$FILE_PATH"
sed -i 's/Unwind_180900d80/ProcessSystemConfigurationN8/g' "$FILE_PATH"
sed -i 's/Unwind_180900d90/ProcessSystemConfigurationN9/g' "$FILE_PATH"

# O组函数名美化
sed -i 's/Unwind_180900e00/ValidateSystemOperationsO0/g' "$FILE_PATH"
sed -i 's/Unwind_180900e10/ValidateSystemOperationsO1/g' "$FILE_PATH"
sed -i 's/Unwind_180900e20/ValidateSystemOperationsO2/g' "$FILE_PATH"
sed -i 's/Unwind_180900e30/ValidateSystemOperationsO3/g' "$FILE_PATH"
sed -i 's/Unwind_180900e40/ValidateSystemOperationsO4/g' "$FILE_PATH"
sed -i 's/Unwind_180900e50/ValidateSystemOperationsO5/g' "$FILE_PATH"
sed -i 's/Unwind_180900e60/ValidateSystemOperationsO6/g' "$FILE_PATH"
sed -i 's/Unwind_180900e70/ValidateSystemOperationsO7/g' "$FILE_PATH"
sed -i 's/Unwind_180900e80/ValidateSystemOperationsO8/g' "$FILE_PATH"
sed -i 's/Unwind_180900e90/ValidateSystemOperationsO9/g' "$FILE_PATH"

# P组函数名美化
sed -i 's/Unwind_180900f00/HandleSystemStateP0/g' "$FILE_PATH"
sed -i 's/Unwind_180900f10/HandleSystemStateP1/g' "$FILE_PATH"
sed -i 's/Unwind_180900f20/HandleSystemStateP2/g' "$FILE_PATH"
sed -i 's/Unwind_180900f30/HandleSystemStateP3/g' "$FILE_PATH"
sed -i 's/Unwind_180900f40/HandleSystemStateP4/g' "$FILE_PATH"
sed -i 's/Unwind_180900f50/HandleSystemStateP5/g' "$FILE_PATH"
sed -i 's/Unwind_180900f60/HandleSystemStateP6/g' "$FILE_PATH"
sed -i 's/Unwind_180900f70/HandleSystemStateP7/g' "$FILE_PATH"
sed -i 's/Unwind_180900f80/HandleSystemStateP8/g' "$FILE_PATH"
sed -i 's/Unwind_180900f90/HandleSystemStateP9/g' "$FILE_PATH"

echo "第二组 Unwind_ 函数名美化完成"

# 美化高范围的 Unwind_ 函数名（901000-902000）
sed -i 's/Unwind_180901000/ProcessSystemDataA0/g' "$FILE_PATH"
sed -i 's/Unwind_180901010/ProcessSystemDataA1/g' "$FILE_PATH"
sed -i 's/Unwind_180901020/ProcessSystemDataA2/g' "$FILE_PATH"
sed -i 's/Unwind_180901030/ProcessSystemDataA3/g' "$FILE_PATH"
sed -i 's/Unwind_180901040/ProcessSystemDataA4/g' "$FILE_PATH"
sed -i 's/Unwind_180901050/ProcessSystemDataA5/g' "$FILE_PATH"
sed -i 's/Unwind_180901060/ProcessSystemDataA6/g' "$FILE_PATH"
sed -i 's/Unwind_180901070/ProcessSystemDataA7/g' "$FILE_PATH"
sed -i 's/Unwind_180901080/ProcessSystemDataA8/g' "$FILE_PATH"
sed -i 's/Unwind_180901090/ProcessSystemDataA9/g' "$FILE_PATH"

# 继续美化更多的函数名...
sed -i 's/Unwind_180901100/ValidateSystemContextA0/g' "$FILE_PATH"
sed -i 's/Unwind_180901110/ValidateSystemContextA1/g' "$FILE_PATH"
sed -i 's/Unwind_180901120/ValidateSystemContextA2/g' "$FILE_PATH"
sed -i 's/Unwind_180901130/ValidateSystemContextA3/g' "$FILE_PATH"
sed -i 's/Unwind_180901140/ValidateSystemContextA4/g' "$FILE_PATH"
sed -i 's/Unwind_180901150/ValidateSystemContextA5/g' "$FILE_PATH"
sed -i 's/Unwind_180901160/ValidateSystemContextA6/g' "$FILE_PATH"
sed -i 's/Unwind_180901170/ValidateSystemContextA7/g' "$FILE_PATH"
sed -i 's/Unwind_180901180/ValidateSystemContextA8/g' "$FILE_PATH"
sed -i 's/Unwind_180901190/ValidateSystemContextA9/g' "$FILE_PATH"

echo "高范围 Unwind_ 函数名美化完成"

# 统计替换结果
echo "统计美化结果..."
REPLACED_COUNT=$(grep -c "ProcessSystem\|HandleSystem\|ValidateSystem\|ManageSystem\|ExecuteSystem" "$FILE_PATH")
echo "已替换函数名数量: $REPLACED_COUNT"

# 检查剩余的未美化函数名
REMAINING_COUNT=$(grep -c "Unwind_180" "$FILE_PATH")
echo "剩余未美化函数名数量: $REMAINING_COUNT"

if [ "$REMAINING_COUNT" -gt 0 ]; then
    echo "还有 $REMAINING_COUNT 个 Unwind_ 函数名需要美化"
    echo "剩余函数名示例："
    grep -o "Unwind_180[a-f0-9]\+" "$FILE_PATH" | head -10
else
    echo "所有 Unwind_ 函数名已美化完成！"
fi

echo "06_utilities.c 美化脚本执行完成"