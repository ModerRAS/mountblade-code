#!/bin/bash

# 美化网络代码文件中的变量名
# 这个脚本将逆向工程生成的变量名替换为语义化的名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 备份原始文件
cp "$FILE_PATH" "$FILE_PATH.backup"

# 定义变量名替换映射
# 格式: 原始变量名->新变量名

# 整数类型栈变量
declare -A INT_STACK_VARS=(
    ["iStackX_c"]="networkTimeoutCounter"
    ["iStackX_24"]="packetDataIndex"
    ["aiStackX_8"]="networkOperationArray"
    ["aiStackX_18"]="connectionStatusArray"
    ["aiStackX_10"]="packetSizeArray"
)

# 浮点类型栈变量
declare -A FLOAT_STACK_VARS=(
    ["fStackX_8"]="networkPositionY"
    ["fStackX_c"]="networkPositionZ"
    ["afStackX_8"]="networkFloatArray"
)

# 字符类型栈变量
declare -A CHAR_STACK_VARS=(
    ["cStack_1c"]="connectionStateFlag"
    ["cStack_96"]="connectionContextByte"
    ["cStack_98"]="networkDataValidationFlag"
    ["cStack_97"]="networkParameterValidationFlag"
    ["cStackX_20"]="networkValidationResult"
    ["acStack_a8"]="validationBuffer"
)

# 无符号类型栈变量
declare -A UNSIGNED_STACK_VARS=(
    ["uStackX_c"]="networkFlagsValue"
    ["uStack_84"]="bufferOperationResult"
    ["uStack_a4"]="networkBufferSize"
)

# 指针类型栈变量
declare -A POINTER_STACK_VARS=(
    ["pStackX_20"]="packetDataPointer"
    ["puStack_278"]="packetFooterTemplatePtr"
    ["puStack_2a8"]="securityContextPtr"
    ["puStack_190"]="contextArrayPtr"
    ["puStack_268"]="connectionBufferPoolPtr"
    ["plStack_340"]="connectionTemplatePtr"
    ["aplStack_330"]="authenticationPointerArray"
)

# 执行替换函数
replace_variables() {
    local var_type="$1"
    shift
    local -n replacements=$1
    
    echo "美化 $var_type 变量..."
    
    for old_name in "${!replacements[@]}"; do
        new_name="${replacements[$old_name]}"
        echo "  替换 $old_name -> $new_name"
        
        # 使用sed进行替换，注意处理变量边界
        sed -i "s/\b$old_name\b/$new_name/g" "$FILE_PATH"
    done
}

# 执行所有替换
replace_variables "整数栈" INT_STACK_VARS
replace_variables "浮点栈" FLOAT_STACK_VARS
replace_variables "字符栈" CHAR_STACK_VARS
replace_variables "无符号栈" UNSIGNED_STACK_VARS
replace_variables "指针栈" POINTER_STACK_VARS

echo "变量名美化完成！"
echo "备份文件保存在: $FILE_PATH.backup"