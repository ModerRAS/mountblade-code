#!/bin/bash

# 脚本：美化04_ui_system.c文件中的变量名和函数名
# 这是简化实现，主要处理重复变量名和添加函数文档注释
# 原本实现：完全重构整个UI系统的命名体系，建立统一的语义化命名规范
# 简化实现：仅处理常见的重复变量名和为主要函数添加文档注释

FILE="TaleWorlds.Native/src/04_ui_system.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 使用sed处理文件，替换重复变量名并添加函数注释
sed -e 's/ui_stack_extended_unsigned_value \([0-9]*\):/ui_stack_param_context\1:/g' \
    -e 's/ui_stack_extended_unsigned_value$/ui_stack_param_context/g' \
    -e 's/bool_flag/ui_thread_processing_flag/g' \
    -e 's/ui_event_position/ui_event_thread_position/g' \
    -e '/^void ui_system_process_ui_event(/i\
\
/**\
 * 处理UI系统事件的主入口函数\
 * @param ui_event_callback 事件回调函数指针\
 * @param ui_event_context 事件上下文数据\
 * @param ui_event_data 事件数据内容\
 * @param ui_event_flags 事件标志位\
 */' \
    -e '/^void ui_system_process_threaded_event(/i\
\
/**\
 * 处理UI系统线程化事件的函数\
 * @param ui_event_callback 事件回调函数指针\
 * @param ui_event_context 事件上下文数据\
 * @param ui_event_data 事件数据内容\
 * @param ui_event_flags 事件标志位\
 */' \
    "$FILE" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$FILE"

echo "已完成变量名美化和函数注释添加：$FILE"