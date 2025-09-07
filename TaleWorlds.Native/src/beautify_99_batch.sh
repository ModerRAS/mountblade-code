#!/bin/bash

# 99_unmatched_functions.c 变量美化脚本
# 用于处理文件中剩余的未美化变量名

echo "开始美化 99_unmatched_functions.c 中的变量名..."

# 处理 DAT_ 变量（全局数据变量）
sed -i 's/_DAT_180c86938/SystemGlobalDataPointer/g' TaleWorlds.Native/src/99_unmatched_functions.c

# 处理 FUN_ 函数
sed -i 's/FUN_18029fc10/ProcessGraphicsColorOperation/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_18029cdd0/ProcessSystemGraphicsBuffer/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_18029e110/ExecuteSystemGraphicsUpdate/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FUN_1802dbc70/ProcessSystemDataTransfer/g' TaleWorlds.Native/src/99_unmatched_functions.c

# 处理 UNK_ 变量
sed -i 's/UNK_180a03c10/SystemDefaultStringTemplate/g' TaleWorlds.Native/src/99_unmatched_functions.c

# 处理栈变量 - 数字类型
sed -i 's/uStack_\([0-9a-f]\+\)/SystemStackVariable_\1/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/iStack_\([0-9a-f]\+\)/SystemIntegerStack_\1/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/fStack_\([0-9a-f]\+\)/SystemFloatStack_\1/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/plStack_\([0-9a-f]\+\)/SystemPointerStack_\1/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/puStack_\([0-9a-f]\+\)/SystemPointerArrayStack_\1/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/auStack_\([0-9a-f]\+\)/SystemArrayStack_\1/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/pcStack_\([0-9a-f]\+\)/SystemCharacterStack_\1/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/lStack_\([0-9a-f]\+\)/SystemLongStack_\1/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/bStack_\([0-9a-f]\+\)/SystemByteStack_\1/g' TaleWorlds.Native/src/99_unmatched_functions.c

# 处理局部变量
sed -i 's/\bfVar\([0-9]\+\)\b/SystemFloatVariable\1/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\buVar\([0-9]\+\)\b/SystemUnsignedVariable\1/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\blVar\([0-9]\+\)\b/SystemLongVariable\1/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\biVar\([0-9]\+\)\b/SystemIntegerVariable\1/g' TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/\bpVar\([0-9]\+\)\b/SystemPointerVariable\1/g' TaleWorlds.Native/src/99_unmatched_functions.c

echo "变量美化完成！"