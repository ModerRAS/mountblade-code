#!/bin/bash

# 网络模块UNK_变量美化脚本
# 用于批量替换05_networking.c中的UNK_变量为语义化名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建替换映射
declare -A replacements=(
    # 错误消息缓冲区
    ["UNK_180984790"]="NetworkErrorMessageBuffer1"
    ["UNK_180984690"]="NetworkErrorMessageBuffer2"
    ["UNK_180984730"]="NetworkErrorMessageBuffer3"
    ["UNK_180984700"]="NetworkErrorMessageBuffer4"
    ["UNK_1809846e0"]="NetworkErrorMessageBuffer5"
    ["UNK_180984948"]="NetworkErrorMessageBuffer6"
    ["UNK_180984990"]="NetworkErrorMessageBuffer7"
    ["UNK_180984928"]="NetworkErrorMessageBuffer8"
    ["UNK_180983680"]="NetworkErrorMessageBuffer9"
    ["UNK_180983618"]="NetworkConnectionContextBuffer1"
    ["UNK_180984968"]="NetworkErrorMessageBuffer10"
    ["UNK_180984830"]="NetworkErrorMessageBuffer11"
    ["UNK_1809849d0"]="NetworkErrorMessageBuffer12"
    ["UNK_180984768"]="NetworkErrorMessageBuffer13"
    ["UNK_180984630"]="NetworkErrorMessageBuffer14"
    ["UNK_1809845a0"]="NetworkBufferPointer1"
    ["UNK_1809845c0"]="NetworkBufferPointer2"
    ["UNK_180984540"]="NetworkBufferPointer3"
    ["UNK_1809847d8"]="NetworkErrorMessageBuffer15"
    ["UNK_180983c78"]="NetworkConnectionContextBuffer2"
    ["UNK_180982508"]="NetworkPacketDataBuffer1"
    ["UNK_180982cc0"]="NetworkConnectionContextBuffer3"
    ["UNK_180986258"]="NetworkSecurityContextBuffer1"
    ["UNK_180983cf8"]="NetworkConnectionContextBuffer4"
    ["UNK_1809838a8"]="NetworkErrorMessageBuffer16"
    ["UNK_180983840"]="NetworkConnectionContextBuffer5"
    ["UNK_1809823f8"]="NetworkConnectionContextBuffer6"
    ["UNK_180983e88"]="NetworkConnectionContextBuffer7"
    ["UNK_1809840a0"]="NetworkErrorMessageBuffer17"
    ["UNK_180984038"]="NetworkConnectionContextBuffer8"
    ["UNK_180982260"]="NetworkConnectionContextBuffer9"
    ["UNK_180983a60"]="NetworkConnectionContextBuffer10"
    ["UNK_1809837c0"]="NetworkConnectionContextBuffer11"
    ["UNK_180983950"]="NetworkConnectionContextBuffer12"
    ["UNK_180983be8"]="NetworkConnectionContextBuffer13"
    ["UNK_1809842e0"]="NetworkConnectionContextBuffer14"
    ["UNK_180983738"]="NetworkConnectionContextBuffer15"
    ["UNK_1809844c8"]="NetworkConnectionContextBuffer16"
    ["UNK_180983ae8"]="NetworkConnectionContextBuffer17"
    ["UNK_180983b68"]="NetworkConnectionContextBuffer18"
    ["UNK_180982ab0"]="NetworkConnectionContextBuffer19"
    ["UNK_180982790"]="NetworkConnectionContextBuffer20"
    ["UNK_1809827f8"]="NetworkErrorMessageBuffer18"
    ["UNK_1809570e8"]="NetworkErrorMessageBuffer19"
    ["UNK_180957208"]="NetworkErrorMessageBuffer20"
    ["UNK_180957310"]="NetworkErrorMessageBuffer21"
    ["UNK_180957600"]="NetworkErrorMessageBuffer22"
    ["UNK_180958180"]="NetworkProcessingBufferTemplate"
    ["UNK_18095af38"]="NetworkMemoryAllocationBuffer"
    ["UNK_18095b500"]="NetworkConnectionDataBuffer"
    ["UNK_180863400"]="NetworkFunctionPointer1"
    ["UNK_1808633a0"]="NetworkFunctionPointer2"
)

# 应用替换
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    echo "替换 $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" 05_networking.c
done

echo "UNK_变量美化完成"