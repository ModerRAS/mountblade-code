#!/bin/bash

# 美化UI系统函数的脚本
# 这个脚本将重命名FUN_函数为语义化名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

# 备份原始文件
cp "$FILE_PATH" "$FILE_PATH.backup"

# 函数重命名映射
declare -A FUNCTION_RENAME_MAP=(
    ["FUN_180650219"]="InitializeUserInterfaceSystem"
    ["FUN_1806502a2"]="ValidateUserInterfaceSystem"
    ["FUN_1806502b0"]="ConfigureUserInterfaceSystem"
    ["FUN_1806502e0"]="ProcessUserInterfaceSystemCommand"
    ["FUN_1806503d0"]="ExecuteUserInterfaceSystemCallback"
    ["FUN_180650490"]="HandleUserInterfaceSystemSecurity"
    ["FUN_180650513"]="ProcessUserInterfaceSystemError"
    ["FUN_1806505b5"]="ResetUserInterfaceSystemState"
    ["FUN_1806505d6"]="ClearUserInterfaceSystemCache"
    ["FUN_18065067e"]="UpdateUserInterfaceSystemStatus"
    ["FUN_180650697"]="VerifyUserInterfaceSystemSecurity"
    ["FUN_1806506a0"]="CalculateUserInterfaceSystemTransform"
    ["FUN_180650782"]="ProcessUserInterfaceSystemVector"
    ["FUN_180650908"]="InitializeUserInterfaceSystemRenderer"
    ["FUN_180650950"]="ProcessUserInterfaceSystemData"
    ["FUN_180650a70"]="HandleUserInterfaceSystemWrapper"
    ["FUN_180650b30"]="ConvertUserInterfaceSystemData"
    ["FUN_180650c20"]="ProcessUserInterfaceSystemBatch"
    ["FUN_180650e00"]="InitializeUserInterfaceSystemResources"
    ["FUN_180651540"]="ProcessUserInterfaceSystemMessage"
    ["FUN_180651770"]="ValidateUserInterfaceSystemData"
    ["FUN_180651830"]="InitializeUserInterfaceSystemComponents"
    ["FUN_180651910"]="ConfigureUserInterfaceSystemData"
    ["FUN_180651970"]="ProcessUserInterfaceSystemEvents"
    ["FUN_180651990"]="ExecuteUserInterfaceSystemRendering"
    ["FUN_180651a80"]="InitializeUserInterfaceSystemCore"
    ["FUN_180651d20"]="ProcessUserInterfaceSystemDestruction"
    ["FUN_180651d46"]="ExecuteUserInterfaceSystemFunctions"
    ["FUN_180651d97"]="HandleUserInterfaceSystemOperations"
)

# 执行函数重命名
for old_name in "${!FUNCTION_RENAME_MAP[@]}"; do
    new_name="${FUNCTION_RENAME_MAP[$old_name]}"
    echo "重命名函数: $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" "$FILE_PATH"
done

echo "函数重命名完成"

# 变量重命名
declare -A VARIABLE_RENAME_MAP=(
    ["DAT_1ac76f654"]="UserInterfaceSystemInitializationFlag"
    ["UNK_000003b8"]="UserInterfaceSystemUnknownDataA"
    ["UNK_000003c0"]="UserInterfaceSystemUnknownDataB"
    ["UNK_180a3dbd0"]="UserInterfaceSystemEventQueue"
    ["UNK_180a3c3e0"]="UserInterfaceSystemComponentTable"
    ["UNK_18098bcb0"]="UserInterfaceSystemCallbackTable"
    ["_DAT_180c8f008"]="UserInterfaceSystemManagedInterface"
    ["_DAT_180c8f010"]="UserInterfaceSystemInitializeMethod"
    ["_DAT_180c8f018"]="UserInterfaceSystemControllerMethods"
    ["_DAT_180c8ecfc"]="UserInterfaceSystemVTableDataA"
    ["_DAT_180bf3ff4"]="UserInterfaceSystemVTableDataB"
    ["_DAT_180c967f0"]="UserInterfaceSystemConfigData"
)

# 执行变量重命名
for old_name in "${!VARIABLE_RENAME_MAP[@]}"; do
    new_name="${VARIABLE_RENAME_MAP[$old_name]}"
    echo "重命名变量: $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" "$FILE_PATH"
done

echo "变量重命名完成"

# 删除备份文件
rm "$FILE_PATH.backup"

echo "美化完成"