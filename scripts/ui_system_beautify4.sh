#!/bin/bash

# UI系统最终标签语义化美化脚本（2025年8月30日最终批次）
# 原本实现：完全重构UI系统所有命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的非语义化名称替换为语义化名称，保持代码结构不变

# 处理剩余的FUN_标签
sed -i 's/FUN_18073d683/ui_system_widget_style_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073e229/ui_system_widget_theme_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073e414/ui_system_widget_font_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073e6ce/ui_system_widget_text_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073eb6d/ui_system_widget_image_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073eddb/ui_system_widget_icon_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073f0d1/ui_system_widget_border_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073f32d/ui_system_widget_shadow_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073f45d/ui_system_widget_margin_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073fb64/ui_system_widget_padding_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# 处理剩余的LAB_标签
sed -i 's/LAB_18073dc41/UI_LABEL_WIDGET_STYLE_START/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_18073dd1d/UI_LABEL_WIDGET_STYLE_END/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_18073dde3/UI_LABEL_WIDGET_THEME_START/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_18073df0e/UI_LABEL_WIDGET_THEME_END/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_18073e0bd/UI_LABEL_WIDGET_FONT_START/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_18073e512/UI_LABEL_WIDGET_FONT_END/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_18073e90c/UI_LABEL_WIDGET_TEXT_START/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_18073ec81/UI_LABEL_WIDGET_TEXT_END/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# 处理更多FUN_标签
sed -i 's/FUN_180740283/ui_system_widget_alignment_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1807403bf/ui_system_widget_visibility_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1807405cf/ui_system_widget_focusable_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1807412d1/ui_system_widget_clickable_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180741413/ui_system_widget_draggable_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180741b27/ui_system_widget_droppable_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180742460/ui_system_widget_scrollable_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180742aca/ui_system_widget_resizable_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180742cd0/ui_system_widget_movable_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180742e00/ui_system_widget_selectable_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# 处理更多LAB_标签
sed -i 's/LAB_18073fff8/UI_LABEL_WIDGET_ALIGNMENT_START/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_180740150/UI_LABEL_WIDGET_ALIGNMENT_END/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_180740886/UI_LABEL_WIDGET_VISIBILITY_START/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_180740b11/UI_LABEL_WIDGET_VISIBILITY_END/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_180740c9a/UI_LABEL_WIDGET_FOCUS_START/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_180740e13/UI_LABEL_WIDGET_FOCUS_END/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_180740ed2/UI_LABEL_WIDGET_CLICK_START/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_180740faf/UI_LABEL_WIDGET_CLICK_END/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_18074108c/UI_LABEL_WIDGET_DRAG_START/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_18074116a/UI_LABEL_WIDGET_DRAG_END/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

echo "UI系统最终标签美化完成"