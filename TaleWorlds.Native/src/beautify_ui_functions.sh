#!/bin/bash

# UI系统函数美化脚本
# 用于将04_ui_system.c中的FUN_函数名替换为语义化名称

# 定义函数映射
declare -A function_mapping=(
    # 初始化相关函数
    ["FUN_180656020"]="InitializeUserInterfaceSystem"
    ["FUN_180656410"]="CreateUserInterfaceWindow"
    ["FUN_180657530"]="ProcessUserInterfaceEvent"
    ["FUN_180657a70"]="RenderUserInterfaceElement"
    ["FUN_18065cf30"]="UpdateUserInterfaceLayout"
    ["FUN_180662260"]="HandleUserInterfaceInput"
    ["FUN_18066c220"]="DrawUserInterfaceWidget"
    ["FUN_18066c633"]="GetUserInterfaceSystemState"
    ["FUN_18066cf80"]="SetUserInterfaceFocus"
    ["FUN_18066d040"]="ProcessUserInterfaceCallback"
    ["FUN_18066d130"]="ValidateUserInterfaceComponent"
    ["FUN_18066d310"]="CleanupUserInterfaceResources"
    ["FUN_18066e500"]="InitializeUserInterfaceRenderer"
    ["FUN_18066e9b0"]="CreateUserInterfaceControl"
    ["FUN_18066e9db"]="RegisterUserInterfaceEvent"
    ["FUN_18066ea6a"]="EnableUserInterfaceSystem"
    ["FUN_18066ea80"]="DisableUserInterfaceSystem"
    ["FUN_18066eea0"]="ProcessUserInterfaceMessage"
    ["FUN_18066ef00"]="HandleUserInterfaceError"
    ["FUN_18066efd0"]="UpdateUserInterfaceAnimation"
    ["FUN_18066f2e0"]="ProcessUserInterfaceGesture"
    ["FUN_18068d480"]="InitializeUserInterfaceTheme"
    ["FUN_180695560"]="LoadUserInterfaceResources"
    ["FUN_180697e60"]="CreateUserInterfaceDialog"
    ["FUN_180697ed0"]="ShowUserInterfaceDialog"
    ["FUN_180697f10"]="UpdateUserInterfaceDialog"
    ["FUN_180697f32"]="CloseUserInterfaceDialog"
    ["FUN_18069801e"]="ProcessUserInterfaceTooltip"
    ["FUN_1806980bd"]="GetUserInterfaceCursorPosition"
    ["FUN_180698e20"]="SetUserInterfaceCursorPosition"
    ["FUN_180698f21"]="ValidateUserInterfacePosition"
    ["FUN_18069916b"]="UpdateUserInterfaceCursor"
    ["FUN_1807030d0"]="ProcessUserInterfaceLayout"
    ["FUN_1807032d3"]="CalculateUserInterfaceMetrics"
    ["FUN_180706c10"]="RenderUserInterfaceText"
    ["FUN_18070708f"]="InitializeUserInterfaceFont"
    ["FUN_18070e180"]="CreateUserInterfaceButton"
    ["FUN_18070f060"]="ProcessUserInterfaceButtonClick"
    ["FUN_18070f198"]="UpdateUserInterfaceButtonState"
    ["FUN_18070f64d"]="CreateUserInterfaceTextBox"
    ["FUN_18070fc08"]="ProcessUserInterfaceTextInput"
    ["FUN_180712260"]="ValidateUserInterfaceTextInput"
    ["FUN_180718a8d"]="CreateUserInterfaceScrollBar"
    ["FUN_18071943e"]="UpdateUserInterfaceScrollBar"
    ["FUN_18071a8ff"]="ProcessUserInterfaceScrollEvent"
    ["FUN_18071c1b0"]="CreateUserInterfaceListBox"
    ["FUN_18071c23f"]="UpdateUserInterfaceListBox"
    ["FUN_18071c285"]="InitializeUserInterfaceList"
    ["FUN_18071dce5"]="AddUserInterfaceListItem"
    ["FUN_18071dfc0"]="RemoveUserInterfaceListItem"
    ["FUN_180722540"]="SelectUserInterfaceListItem"
    ["FUN_1807238f3"]="GetUserInterfaceSelectedItems"
    ["FUN_18072390f"]="SetUserInterfaceSelectedItem"
    ["FUN_1807388c0"]="CreateUserInterfaceMenu"
    ["FUN_1807388f6"]="AddUserInterfaceMenuItem"
    ["FUN_1807389a0"]="ShowUserInterfaceMenu"
    ["FUN_1807389d7"]="HideUserInterfaceMenu"
    ["FUN_180741b80"]="CreateUserInterfaceContextMenu"
    ["FUN_180741c20"]="ShowUserInterfaceContextMenu"
    ["FUN_180742070"]="ProcessUserInterfaceMenuSelection"
    ["FUN_180742d90"]="UpdateUserInterfaceMenuState"
    ["FUN_180742e60"]="ValidateUserInterfaceMenuItem"
    ["FUN_180743010"]="CreateUserInterfaceToolBar"
    ["FUN_180743160"]="AddUserInterfaceToolItem"
    ["FUN_180743166"]="UpdateUserInterfaceToolItem"
    ["FUN_1807431a7"]="EnableUserInterfaceToolItem"
    ["FUN_1807431d5"]="DisableUserInterfaceToolItem"
    ["FUN_1807435b8"]="GetUserInterfaceToolItemState"
    ["FUN_1807437c0"]="SetUserInterfaceToolItemIcon"
    ["FUN_180743864"]="GetUserInterfaceToolItemIcon"
    ["FUN_180743880"]="CreateUserInterfaceStatusBar"
    ["FUN_180743921"]="UpdateUserInterfaceStatusBar"
    ["FUN_180743940"]="SetUserInterfaceStatusBarText"
    ["FUN_180743ab0"]="GetUserInterfaceStatusBarText"
    ["FUN_180743ae4"]="ClearUserInterfaceStatusBar"
    ["FUN_180743b2f"]="CreateUserInterfaceProgressBar"
    ["FUN_180743b50"]="UpdateUserInterfaceProgressBar"
    ["FUN_180743c40"]="GetUserInterfaceProgressBarValue"
    ["FUN_180743cc0"]="SetUserInterfaceProgressBarValue"
    ["FUN_180743d60"]="CreateUserInterfaceSlider"
    ["FUN_180743d80"]="UpdateUserInterfaceSlider"
    ["FUN_180743da0"]="GetUserInterfaceSliderValue"
    ["FUN_180743e10"]="SetUserInterfaceSliderValue"
    ["FUN_180743e50"]="ValidateUserInterfaceSlider"
)

# 获取脚本所在目录
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
TARGET_FILE="$SCRIPT_DIR/04_ui_system.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 读取文件并替换函数名
while IFS= read -r line; do
    # 替换函数定义
    for old_name in "${!function_mapping[@]}"; do
        new_name="${function_mapping[$old_name]}"
        # 替换函数定义
        line=$(echo "$line" | sed "s/$old_name/$new_name/g")
        # 替换函数调用
        line=$(echo "$line" | sed "s/\*$old_name/\*$new_name/g")
    done
    echo "$line" >> "$TEMP_FILE"
done < "$TARGET_FILE"

# 替换原文件
mv "$TEMP_FILE" "$TARGET_FILE"

echo "函数名替换完成"