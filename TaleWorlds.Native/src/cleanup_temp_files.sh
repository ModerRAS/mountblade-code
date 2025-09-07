#!/bin/bash
# 删除临时文件和脚本

# 删除所有.sh文件
find /dev/shm/mountblade-code/TaleWorlds.Native/src -name "*.sh" -type f -delete

# 删除所有.py文件
find /dev/shm/mountblade-code/TaleWorlds.Native/src -name "*.py" -type f -delete

# 删除所有.md文件
find /dev/shm/mountblade-code/TaleWorlds.Native/src -name "*.md" -type f -delete

# 删除scripts文件夹
rm -rf /dev/shm/mountblade-code/TaleWorlds.Native/src/scripts

# 删除03_rendering_simplified.c（如果存在）
rm -f /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering_simplified.c

echo "临时文件清理完成"