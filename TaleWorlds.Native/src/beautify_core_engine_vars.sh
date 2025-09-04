#!/bin/bash

# 美化02_core_engine.c文件中的变量名脚本
# 此脚本将替换一些常见的简单变量名为更具语义的名称

# 定义一些常见的变量名替换规则
declare -A variable_replacements=(
    ["bVar[0-9]+"]="BooleanVariable"
    ["cVar[0-9]+"]="CharacterVariable"
    ["iVar[0-9]+"]="IntegerVariable"
    ["uVar[0-9]+"]="UnsignedVariable"
    ["lVar[0-9]+"]="LongVariable"
    ["pVar[0-9]+"]="PointerVariable"
    ["sVar[0-9]+"]="StringVariable"
    ["fVar[0-9]+"]="FloatVariable"
    ["dVar[0-9]+"]="DoubleVariable"
    ["auStack_[0-9a-fA-F]+"]="StackByteArray"
    ["acStack_[0-9a-fA-F]+"]="StackCharArray"
    ["puStack_[0-9a-fA-F]+"]="StackPointer"
    ["ppuStack_[0-9a-fA-F]+"]="StackPointerPointer"
    ["uStack_[0-9a-fA-F]+"]="StackUnsignedValue"
    ["lStack_[0-9a-fA-F]+"]="StackLongValue"
    ["iStack_[0-9a-fA-F]+"]="StackIntegerValue"
    ["FUN_180[0-9a-fA-F]+"]="SystemFunction"
    ["UNK_180[0-9a-fA-F]+"]="SystemUnknown"
    ["DAT_180[0-9a-fA-F]+"]="SystemData"
    ["ptr_"]="Pointer"
    ["param_"]="Parameter"
    ["local_"]="LocalVariable"
    ["in_r"]="InputRegister"
    ["out_r"]="OutputRegister"
    ["var_"]="Variable"
    ["extraout_"]="ExtraOutput"
)

# 读取文件内容
input_file="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
temp_file="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine_temp.c"

# 复制原始文件到临时文件
cp "$input_file" "$temp_file"

# 应用变量名替换规则
for pattern in "${!variable_replacements[@]}"; do
    replacement="${variable_replacements[$pattern]}"
    # 使用sed进行替换，只替换变量声明和使用的部分
    sed -i "s/\b$pattern\b/$replacement/g" "$temp_file"
done

# 替换一些特殊的模式
sed -i 's/\b\bVar[0-9]\+\b/Variable/g' "$temp_file"
sed -i 's/\bStack_[0-9a-fA-F]\+/StackValue/g' "$temp_file"
sed -i 's/\bSystemContext[0-9]\+/SystemContext/g' "$temp_file"

echo "变量名美化完成，结果保存在: $temp_file"
echo "请检查替换结果，然后手动替换原始文件"