#!/bin/bash

# 美化04_ui_system.c文件中的函数名
# 这个脚本将帮助批量重命名未美化的函数

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

echo "开始美化 $FILE 文件中的函数名..."

# 函数名映射表
declare -A FUNCTION_MAP=(
    # UI系统核心功能函数
    ["FUN_18068ebd0"]="InitializeUIComponentSystem"
    ["FUN_18068ec40"]="ProcessUIEventHandling"
    ["FUN_18068ecb0"]="UpdateUIRenderingSystem"
    ["FUN_18068ed20"]="ManageUILayoutSystem"
    ["FUN_18068ed90"]="HandleUIInputSystem"
    ["FUN_18068ee80"]="ManageUIAnimationSystem"
    ["FUN_18068ef70"]="ProcessUIThemeSystem"
    ["FUN_18068f060"]="UpdateUIStateSystem"
    ["FUN_18068f150"]="ManageUIWindowSystem"
    ["FUN_18068f240"]="HandleUIDialogSystem"
    ["FUN_18068f330"]="ProcessUIContextMenu"
    ["FUN_18068f3a0"]="HandleUITooltipSystem"
    ["FUN_18068f410"]="ManageUIProgressBar"
    ["FUN_18068f480"]="ProcessUIStatusBar"
    ["FUN_18068f4f0"]="HandleUIMenuSystem"
    ["FUN_18068f680"]="UpdateUITabControl"
    ["FUN_18068f810"]="ProcessUITreeView"
    ["FUN_18068f9a0"]="ManageUIListView"
    ["FUN_18068fb30"]="HandleUIComboBox"
    ["FUN_18068fba0"]="ProcessUICheckBox"
    ["FUN_18068fc10"]="HandleUIRadioButton"
    ["FUN_18068fc80"]="ProcessUIButton"
    ["FUN_18068fcf0"]="ManageUITextBox"
    ["FUN_18068fd60"]="HandleUILabel"
    ["FUN_18068fdd0"]="ProcessUIPanel"
    ["FUN_18068fe10"]="UpdateUIScrollBar"
    ["FUN_18068ff60"]="HandleUIImageControl"
    ["FUN_180690200"]="ProcessUIVideoPlayer"
    ["FUN_1806903c0"]="HandleUIAudioPlayer"
    ["FUN_1806905c0"]="InitializeUIResourceManager"
    ["FUN_1806917c0"]="ManageUIMemoryPool"
    ["FUN_180691db0"]="ProcessUIGarbageCollection"
    ["FUN_180694010"]="InitializeUIThreadManager"
    ["FUN_180695530"]="ProcessUIEventQueue"
    ["FUN_180695560"]="HandleUIFocusManager"
    ["FUN_180695590"]="UpdateUICursorManager"
    ["FUN_180695600"]="ProcessUIDragDrop"
    ["FUN_180695700"]="HandleUIResizeOperation"
    ["FUN_180695750"]="ProcessUIMinimizeOperation"
    ["FUN_180695820"]="HandleUIMaximizeOperation"
    ["FUN_180695870"]="UpdateUICloseOperation"
    ["FUN_1806958c0"]="ProcessUIRestoreOperation"
    ["FUN_180695990"]="HandleUIFullscreenOperation"
    ["FUN_180695ac0"]="ProcessUIScreenshotOperation"
    ["FUN_180695bf0"]="ManageUIIndexingSystem"
    ["FUN_180695f70"]="ProcessUICacheSystem"
    ["FUN_1806961a0"]="HandleUIStorageSystem"
    ["FUN_180696370"]="ManageUIBackupSystem"
    ["FUN_180696540"]="ProcessUIRecoverySystem"
    ["FUN_180696710"]="HandleUIMigrationSystem"
    ["FUN_1806968e0"]="UpdateUISynchronizationSystem"
    ["FUN_180696a60"]="ProcessUIVersionManager"
    ["FUN_180696be0"]="HandleUIConfigurationManager"
    ["FUN_180696d90"]="ManageUISettingsManager"
    ["FUN_180696f40"]="ProcessUIEnvironmentManager"
    ["FUN_1806970f0"]="HandleUILogManager"
)

# 备份原文件
cp "$FILE" "$FILE.backup.$(date +%Y%m%d_%H%M%S)"

# 对每个函数进行重命名
for old_name in "${!FUNCTION_MAP[@]}"; do
    new_name="${FUNCTION_MAP[$old_name]}"
    
    echo "重命名函数: $old_name -> $new_name"
    
    # 使用sed进行替换，注意使用词边界确保只匹配完整函数名
    sed -i "s/\b$old_name\b/$new_name/g" "$FILE"
done

echo "函数重命名完成！"

# 更新函数注释中的函数名
echo "更新函数注释..."
sed -i 's/\/\/ 函数: void FUN_/\/\/ 函数: void /g' "$FILE"
sed -i 's/\/\/ 函数: undefined FUN_/\/\/ 函数: undefined /g' "$FILE"

echo "注释更新完成！"
echo "美化完成！"