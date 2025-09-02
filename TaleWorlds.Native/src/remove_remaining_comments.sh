# 临时脚本用于批量删除剩余的原始函数名注释
sed -i '/^[[:space:]]* \* 原始函数名：FUN_180[0-9a-f]\{5\}$/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c