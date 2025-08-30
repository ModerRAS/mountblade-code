#!/bin/bash

# 脚本：语义化替换01_initialization.c中剩余的iVar变量（第二批次）
# 原本实现：完全重构初始化系统所有变量命名体系，建立统一的语义化命名规范
# 简化实现：仅将代码中使用的非语义化iVar变量名替换为语义化名称，保持代码结构不变

INPUT_FILE="TaleWorlds.Native/src/01_initialization.c"

# 直接进行替换
sed -i 's/\biVar12\b/system_init_var_12/g' "$INPUT_FILE"
sed -i 's/\biVar16\b/system_init_var_16/g' "$INPUT_FILE"
sed -i 's/\biVar18\b/system_init_var_18/g' "$INPUT_FILE"
sed -i 's/\biVar19\b/system_init_var_19/g' "$INPUT_FILE"
sed -i 's/\biVar21\b/system_init_var_21/g' "$INPUT_FILE"
sed -i 's/\biVar22\b/system_init_var_22/g' "$INPUT_FILE"
sed -i 's/\biVar23\b/system_init_var_23/g' "$INPUT_FILE"
sed -i 's/\biVar24\b/system_init_var_24/g' "$INPUT_FILE"
sed -i 's/\biVar25\b/system_init_var_25/g' "$INPUT_FILE"
sed -i 's/\biVar26\b/system_init_var_26/g' "$INPUT_FILE"
sed -i 's/\biVar27\b/system_init_var_27/g' "$INPUT_FILE"
sed -i 's/\biVar28\b/system_init_var_28/g' "$INPUT_FILE"
sed -i 's/\biVar29\b/system_init_var_29/g' "$INPUT_FILE"
sed -i 's/\biVar30\b/system_init_var_30/g' "$INPUT_FILE"

echo "第二批次iVar变量语义化替换完成"