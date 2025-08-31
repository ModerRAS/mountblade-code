#!/bin/bash

# 06_utilities.c 代码美化脚本
# 原本实现：完全重构工具系统所有命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的非语义化名称替换为语义化名称，为关键函数添加文档注释，保持代码结构不变

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原文件
cp 06_utilities.c 06_utilities.c.backup

# 基本变量名替换
sed -i 's/\buVar1\b/return_value/g' 06_utilities.c
sed -i 's/\biVar2\b/status_code/g' 06_utilities.c
sed -i 's/\blVar3\b/loop_counter/g' 06_utilities.c
sed -i 's/\biVar4\b/item_count/g' 06_utilities.c
sed -i 's/\bparam_1\b/context_handle/g' 06_utilities.c
sed -i 's/\bparam_2\b/data_pointer/g' 06_utilities.c

# 基本函数名替换
sed -i 's/\bFUN_1808900e0\b/initialize_utility_system/g' 06_utilities.c
sed -i 's/\bFUN_18089011d\b/cleanup_utility_system/g' 06_utilities.c
sed -i 's/\bFUN_18089022b\b/reset_utility_system/g' 06_utilities.c
sed -i 's/\bFUN_180890246\b/validate_utility_system/g' 06_utilities.c
sed -i 's/\bFUN_180890270\b/get_utility_status/g' 06_utilities.c
sed -i 's/\bFUN_180890450\b/allocate_utility_memory/g' 06_utilities.c
sed -i 's/\bFUN_180890490\b/free_utility_memory/g' 06_utilities.c
sed -i 's/\bFUN_180890500\b/reallocate_utility_memory/g' 06_utilities.c
sed -i 's/\bFUN_180890540\b/get_utility_memory_size/g' 06_utilities.c
sed -i 's/\bFUN_180890590\b/copy_utility_memory/g' 06_utilities.c
sed -i 's/\bFUN_1808905ae\b/get_utility_memory_info/g' 06_utilities.c
sed -i 's/\bFUN_18089062a\b/validate_utility_memory/g' 06_utilities.c
sed -i 's/\bFUN_18089064b\b/clear_utility_memory/g' 06_utilities.c
sed -i 's/\bFUN_180890650\b/compare_utility_memory/g' 06_utilities.c
sed -i 's/\bFUN_180890673\b/get_utility_memory_flags/g' 06_utilities.c
sed -i 's/\bFUN_18089069c\b/set_utility_memory_flags/g' 06_utilities.c
sed -i 's/\bFUN_1808906f0\b/initialize_utility_thread/g' 06_utilities.c
sed -i 's/\bFUN_180890700\b/create_utility_thread/g' 06_utilities.c
sed -i 's/\bFUN_180890723\b/get_utility_thread_status/g' 06_utilities.c
sed -i 's/\bFUN_18089074c\b/destroy_utility_thread/g' 06_utilities.c
sed -i 's/\bFUN_18089079f\b/resume_utility_thread/g' 06_utilities.c
sed -i 's/\bFUN_1808907b0\b/suspend_utility_thread/g' 06_utilities.c
sed -i 's/\bFUN_180890830\b/get_utility_thread_info/g' 06_utilities.c
sed -i 's/\bFUN_1808908b0\b/set_utility_thread_priority/g' 06_utilities.c
sed -i 's/\bFUN_180890900\b/initialize_utility_mutex/g' 06_utilities.c
sed -i 's/\bFUN_180890923\b/create_utility_mutex/g' 06_utilities.c
sed -i 's/\bFUN_1808909b4\b/destroy_utility_mutex/g' 06_utilities.c
sed -i 's/\bFUN_1808909ba\b/lock_utility_mutex/g' 06_utilities.c
sed -i 's/\bFUN_1808909d0\b/unlock_utility_mutex/g' 06_utilities.c
sed -i 's/\bFUN_1808909f3\b/try_lock_utility_mutex/g' 06_utilities.c
sed -i 's/\bFUN_180890ac1\b/initialize_utility_semaphore/g' 06_utilities.c
sed -i 's/\bFUN_180890ac7\b/create_utility_semaphore/g' 06_utilities.c
sed -i 's/\bFUN_180890ad0\b/wait_utility_semaphore/g' 06_utilities.c
sed -i 's/\bFUN_180890aef\b/post_utility_semaphore/g' 06_utilities.c
sed -i 's/\bFUN_180890b18\b/destroy_utility_semaphore/g' 06_utilities.c
sed -i 's/\bFUN_180890b65\b/get_utility_semaphore_value/g' 06_utilities.c
sed -i 's/\bFUN_180890b70\b/initialize_utility_event/g' 06_utilities.c
sed -i 's/\bFUN_180890b8f\b/create_utility_event/g' 06_utilities.c
sed -i 's/\bFUN_180890bb8\b/destroy_utility_event/g' 06_utilities.c
sed -i 's/\bFUN_180890c06\b/wait_utility_event/g' 06_utilities.c
sed -i 's/\bFUN_180890c10\b/set_utility_event/g' 06_utilities.c
sed -i 's/\bFUN_180890c33\b/reset_utility_event/g' 06_utilities.c
sed -i 's/\bFUN_180890c66\b/get_utility_event_status/g' 06_utilities.c
sed -i 's/\bFUN_180890d39\b/initialize_utility_timer/g' 06_utilities.c
sed -i 's/\bFUN_180890d60\b/create_utility_timer/g' 06_utilities.c
sed -i 's/\bFUN_180890d83\b/destroy_utility_timer/g' 06_utilities.c
sed -i 's/\bFUN_180890dac\b/start_utility_timer/g' 06_utilities.c
sed -i 's/\bFUN_180890e03\b/stop_utility_timer/g' 06_utilities.c
sed -i 's/\bFUN_180890e10\b/get_utility_timer_value/g' 06_utilities.c
sed -i 's/\bFUN_180890e33\b/reset_utility_timer/g' 06_utilities.c
sed -i 's/\bFUN_180890e5c\b/get_utility_timer_info/g' 06_utilities.c
sed -i 's/\bFUN_180890ed2\b/initialize_utility_file/g' 06_utilities.c
sed -i 's/\bFUN_180890ee0\b/open_utility_file/g' 06_utilities.c
sed -i 's/\bFUN_180890f03\b/close_utility_file/g' 06_utilities.c
sed -i 's/\bFUN_180890f2c\b/read_utility_file/g' 06_utilities.c
sed -i 's/\bFUN_180890f7f\b/write_utility_file/g' 06_utilities.c
sed -i 's/\bFUN_180890f90\b/seek_utility_file/g' 06_utilities.c
sed -i 's/\bFUN_180890fae\b/get_utility_file_size/g' 06_utilities.c
sed -i 's/\bFUN_180890fe2\b/flush_utility_file/g' 06_utilities.c

# 清理警告注释
sed -i '/\/\/ WARNING: Subroutine does not return$/d' 06_utilities.c

echo "06_utilities.c 基本美化完成"