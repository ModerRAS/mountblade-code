#!/bin/bash

# 美化网络系统文件中的所有剩余 unaff_ 变量名

# 定义替换映射
declare -A replacements=(
    # XMM 浮点寄存器变量
    ["unaff_XMM11_Da"]="NetworkMatrixParameter11"
    ["unaff_XMM13_Da"]="NetworkMatrixParameter13"
    ["unaff_XMM14_Da"]="NetworkMatrixParameter14"
    ["unaff_XMM15_Da"]="NetworkMatrixParameter15"
    ["unaff_XMM6_Dc"]="NetworkStatusRegister6c"
    ["unaff_XMM6_Dd"]="NetworkStatusRegister6d"
    
    # 字节标志变量
    ["unaff_BPL"]="NetworkStackBaseByteFlag"
    ["unaff_BL"]="NetworkBaseByteRegister"
    ["unaff_DIL"]="NetworkDestinationByteRegister"
    
    # 状态变量
    ["unaff_000000a4"]="NetworkExtendedStatusA4"
    ["unaff_0000001c"]="NetworkExtendedStatus1c"
    
    # R13 特殊引用（这些是指针操作）
    ["*unaff_R13"]="*NetworkConnectionContext"
    ["unaff_R13[1]"]="NetworkConnectionContext[1]"
    ["unaff_R13[2]"]="NetworkConnectionContext[2]"
    ["unaff_R13[3]"]="NetworkConnectionContext[3]"
)

# 文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup2"

# 执行替换
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    echo "替换: $old_name -> $new_name"
    sed -i "s/\\b$old_name\\b/$new_name/g" "$FILE_PATH"
done

echo "剩余变量名替换完成"