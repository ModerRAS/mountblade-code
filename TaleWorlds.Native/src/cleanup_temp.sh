#!/bin/bash
# 删除临时文件的脚本
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 删除所有临时文件
rm -f 05_networking_beautified.c
rm -f batch_replace.sh
rm -f beautify_99_functions.py
rm -f beautify_99_functions.sh
rm -f beautify_core_engine_vars.sh
rm -f beautify_functions.sh
rm -f beautify_labels.sh
rm -f beautify_rendering_vars.sh
rm -f beautify_script.sh
rm -f beautify_unk_vars.sh
rm -f beautify_unmatched_functions.sh
rm -f beautify_utilities_vars.sh
rm -f beautify_variables.sh
rm -f cleanup_temp_files.sh
rm -f continue_beautify.sh
rm -f fix_function_comments.sh
rm -f fix_variable_names.sh
rm -f function_replacements.txt
rm -f rename_functions.sh
rm -f rename_vars.sh
rm -f replace_functions.sh
rm -f replace_vars.sh
rm -f simple_beautify.sh
rm -f variable_rename_script.sh

echo "临时文件已删除"