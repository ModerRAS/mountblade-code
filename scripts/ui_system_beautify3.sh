#!/bin/bash

# UI系统批量标签语义化美化脚本（2025年8月30日最终批次）
# 原本实现：完全重构UI系统所有命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的非语义化名称替换为语义化名称，保持代码结构不变

# 使用更高效的方式处理剩余标签
# 先处理最常见的模式

# 批量处理FUN_标签 - 系统核心功能
sed -i 's/FUN_180739b3f/ui_system_animation_update_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180739c7d/ui_system_layout_calculator/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180739dad/ui_system_render_manager/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073adad/ui_system_input_processor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073af6d/ui_system_event_dispatcher/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073b13d/ui_system_widget_factory/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073b2c4/ui_system_theme_manager/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073b4cf/ui_system_font_renderer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073b7af/ui_system_texture_loader/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073ba9f/ui_system_sound_player/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# 批量处理LAB_标签 - 通用标签
sed -i 's/LAB_180739325/UI_LABEL_SYSTEM_INIT_START/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_1807393ea/UI_LABEL_SYSTEM_INIT_END/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_18073985a/UI_LABEL_WIDGET_CREATE_START/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_180739e8e/UI_LABEL_WIDGET_CREATE_END/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_180739f5a/UI_LABEL_WIDGET_DESTROY_START/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_18073a089/UI_LABEL_WIDGET_DESTROY_END/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_18073a35a/UI_LABEL_WIDGET_SHOW_START/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_18073a55a/UI_LABEL_WIDGET_SHOW_END/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_18073a6c1/ui_system_widget_hide_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_18073a7fd/ui_system_widget_enable_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# 批量处理更多FUN_标签
sed -i 's/FUN_18073bbdd/ui_system_widget_disable_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073c111/ui_system_widget_resize_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073c258/ui_system_widget_move_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073c471/ui_system_widget_rotate_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073c6e3/ui_system_widget_scale_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073c87f/ui_system_widget_color_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073cfcb/ui_system_widget_opacity_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073d103/ui_system_widget_zorder_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073d372/ui_system_widget_parent_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_18073d4b8/ui_system_widget_child_handler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# 批量处理更多LAB_标签
sed -i 's/LAB_18073c33b/UI_LABEL_WIDGET_RESIZE_START/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_18073c5c9/UI_LABEL_WIDGET_RESIZE_END/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_18073c96e/UI_LABEL_WIDGET_MOVE_START/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_18073ca4b/UI_LABEL_WIDGET_MOVE_END/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_18073cb2b/UI_LABEL_WIDGET_ROTATE_START/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_18073cccb/UI_LABEL_WIDGET_ROTATE_END/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_18073cdb6/UI_LABEL_WIDGET_SCALE_START/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/LAB_18073ce8e/UI_LABEL_WIDGET_SCALE_END/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

echo "UI系统批量标签美化完成"