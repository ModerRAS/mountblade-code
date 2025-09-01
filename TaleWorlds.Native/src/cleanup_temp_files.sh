#!/bin/bash
# 临时清理脚本 - 用于删除临时文件
# 这个脚本将在执行后自动删除

echo "正在删除临时文件..."

# 删除未跟踪的文件
rm -f "TaleWorlds.Native/src/beautify_01_initialization.sh"
rm -f "TaleWorlds.Native/src/beautify_ui_functions_batch.sh"

echo "临时文件删除完成"

# 自删除脚本
rm -f "$0"