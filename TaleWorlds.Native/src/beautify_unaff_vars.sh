#!/bin/bash

# 美化网络系统文件中的 unaff_ 变量名

# 定义替换映射
declare -A replacements=(
    # 基础网络连接变量
    ["unaff_R13"]="NetworkConnectionContext"
    ["unaff_R13B"]="NetworkConnectionByteFlag"
    ["unaff_R13D"]="NetworkConnectionDataValue"
    
    # 浮点数变量
    ["unaff_XMM6_Da"]="NetworkFloatParameterValue"
    ["unaff_XMM10_Da"]="NetworkFloatAccumulator"
    
    # 其他 unaff 变量
    ["unaff_R12"]="NetworkSecondaryContext"
    ["unaff_R14"]="NetworkTertiaryContext"
    ["unaff_R15"]="NetworkQuaternaryContext"
    ["unaff_RBX"]="NetworkBaseContext"
    ["unaff_RBP"]="NetworkStackFrame"
    ["unaff_RSI"]="NetworkSourceIndex"
    ["unaff_RDI"]="NetworkDestinationIndex"
    ["unaff_RSP"]="NetworkStackPointer"
    
    # 字节变量
    ["unaff_SIL"]="NetworkSystemByteFlag"
    ["unaff_DIL"]="NetworkDataByteFlag"
    ["unaff_BPL"]="NetworkBaseByteFlag"
    ["unaff_SPL"]="NetworkStackByteFlag"
    
    # 字变量
    ["unaff_SI"]="NetworkSystemWordFlag"
    ["unaff_DI"]="NetworkDataWordFlag"
    ["unaff_BP"]="NetworkBaseWordFlag"
    ["unaff_SP"]="NetworkStackWordFlag"
    
    # 双字变量
    ["unaff_ESI"]="NetworkSystemDwordFlag"
    ["unaff_EDI"]="NetworkDataDwordFlag"
    ["unaff_EBP"]="NetworkBaseDwordFlag"
    ["unaff_ESP"]="NetworkStackDwordFlag"
    
    # 其他特殊变量
    ["unaff_RAX"]="NetworkAccumulator"
    ["unaff_RBX"]="NetworkBaseRegister"
    ["unaff_RCX"]="NetworkCounter"
    ["unaff_RDX"]="NetworkDataRegister"
    ["unaff_R8"]="NetworkParameter8"
    ["unaff_R9"]="NetworkParameter9"
    ["unaff_R10"]="NetworkParameter10"
    ["unaff_R11"]="NetworkParameter11"
)

# 文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup"

# 执行替换
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    echo "替换: $old_name -> $new_name"
    sed -i "s/\b$old_name\b/$new_name/g" "$FILE_PATH"
done

echo "变量名替换完成"