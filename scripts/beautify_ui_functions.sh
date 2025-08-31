#!/bin/bash

# 美化04_ui_system.c文件中的FUN_函数名
# 为每个FUN_函数创建语义化名称

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

# 创建备份
cp "$FILE" "$FILE.backup_$(date +%Y%m%d_%H%M%S)"

# FUN_180746180 - UI事件状态检查函数
sed -i 's/FUN_180746180/ui_check_event_state/g' "$FILE"

# FUN_180746320 - UI事件数据处理函数
sed -i 's/FUN_180746320/ui_process_event_data/g' "$FILE"

# FUN_18074ba80 - UI事件处理函数
sed -i 's/FUN_18074ba80/ui_handle_event/g' "$FILE"

# FUN_180746390 - UI事件回调函数
sed -i 's/FUN_180746390/ui_event_callback_handler/g' "$FILE"

# FUN_180739c9f - UI初始化函数
sed -i 's/FUN_180739c9f/ui_initialize_system/g' "$FILE"

# FUN_180739cc0 - UI回调设置函数
sed -i 's/FUN_180739cc0/ui_set_callback_handler/g' "$FILE"

# FUN_1807463d0 - UI事件分发函数
sed -i 's/FUN_1807463d0/ui_dispatch_event/g' "$FILE"

# FUN_180739cdd - UI回调处理器
sed -i 's/FUN_180739cdd/ui_process_callback/g' "$FILE"

# FUN_180739d35 - UI清理函数
sed -i 's/FUN_180739d35/ui_cleanup_system/g' "$FILE"

# FUN_180739dcf - UI重置函数
sed -i 's/FUN_180739dcf/ui_reset_system/g' "$FILE"

# FUN_180739df0 - UI事件处理主函数
sed -i 's/FUN_180739df0/ui_process_main_event/g' "$FILE"

# FUN_18074a420 - UI事件标志处理函数
sed -i 's/FUN_18074a420/ui_process_event_flags/g' "$FILE"

# FUN_180739ec0 - UI系统更新函数
sed -i 's/FUN_180739ec0/ui_update_system/g' "$FILE"

# FUN_180739f90 - UI渲染函数
sed -i 's/FUN_180739f90/ui_render_system/g' "$FILE"

echo "FUN_函数名美化完成"