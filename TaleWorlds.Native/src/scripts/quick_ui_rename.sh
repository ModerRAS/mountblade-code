#!/bin/bash

# UI系统函数重命名脚本
# 用于替换04_ui_system.c中的FUN_函数

# 设置文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

# 创建临时脚本文件
cat > /tmp/ui_system_rename.sh << 'EOF'
#!/bin/bash

# UI系统函数重命名
sed -i 's/FUN_180194a50/InitializeUIComponent/g' "$1"
sed -i 's/FUN_18062b1e0/AllocateUIMemory/g' "$1"
sed -i 's/FUN_180057830/ProcessUIEvent/g' "$1"
sed -i 's/FUN_180624af0/GetUIComponentData/g' "$1"
sed -i 's/FUN_18005d580/UpdateUIState/g' "$1"
sed -i 's/FUN_18069d280/RenderUIComponent/g' "$1"
sed -i 's/FUN_180697770/CreateUIWindow/g' "$1"
sed -i 's/FUN_18069ca80/HandleUIInput/g' "$1"
sed -i 's/FUN_18069d9e0/DrawUIElement/g' "$1"
sed -i 's/FUN_18069ed90/ProcessUILayout/g' "$1"
sed -i 's/FUN_180718480/ApplyUITheme/g' "$1"

# UI系统变量重命名
sed -i 's/alStack_30/uiComponentStack/g' "$1"
sed -i 's/uStackX_8/uiLocalDataArray/g' "$1"
sed -i 's/localData/uiLocalData/g' "$1"
sed -i 's/targetAddress/uiTargetAddress/g' "$1"
sed -i 's/pcleanupCounter/cleanupCounter/g' "$1"
sed -i 's/puVar1/uiVar1Pointer/g' "$1"
sed -i 's/puStack_98/uiStackPointer98/g' "$1"
sed -i 's/puStack_d8/uiStackPointerD8/g' "$1"
sed -i 's/ptempInt1/tempIntPointer1/g' "$1"
sed -i 's/ptempInt2/tempIntPointer2/g' "$1"
sed -i 's/cleanupCounter/uiCleanupCounter/g' "$1"

# UI系统配置变量重命名
sed -i 's/UNK_1809fe070/UIConfigurationPointer/g' "$1"
sed -i 's/DAT_1809fe070/UIConfigurationData/g' "$1"

echo "UI系统函数和变量重命名完成"
EOF

# 使脚本可执行
chmod +x /tmp/ui_system_rename.sh

# 执行重命名脚本
/tmp/ui_system_rename.sh "$FILE_PATH"

# 清理临时文件
rm -f /tmp/ui_system_rename.sh

echo "UI系统代码美化完成"