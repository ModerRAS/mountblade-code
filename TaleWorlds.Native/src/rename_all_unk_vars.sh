#!/bin/bash

# UNK_ 变量批量重命名脚本
# 根据映射文件对 06_utilities.c 中的所有 UNK_ 变量进行重命名

echo "开始重命名 UNK_ 变量..."

# 创建备份
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup

# 定义重命名函数
rename_variable() {
    local old_name="$1"
    local new_name="$2"
    
    echo "重命名: $old_name -> $new_name"
    
    # 替换变量定义
    sed -i "s/undefined $old_name;/undefined $new_name;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
    
    # 替换变量引用
    sed -i "s/&$old_name/&$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
}

# 数据结构初始化相关
rename_variable "UNK_180986350" "DataStructureDefaultTemplate"
rename_variable "UNK_180986370" "AlternativeDataStructureTemplate"
rename_variable "UNK_180986940" "ResourceDataTemplate"

# 内存分配相关
rename_variable "UNK_1809869a0" "MemoryAllocationTemplate"
rename_variable "UNK_180986e70" "MemoryBlockTemplate"

# 字符串操作相关
rename_variable "UNK_1809863f8" "StringOperationTemplate"
rename_variable "UNK_180986470" "StringProcessingTemplate"

# 序列化/反序列化相关
rename_variable "UNK_180983b68" "SerializationTemplate"
rename_variable "UNK_180983cf8" "DeserializationTemplate"
rename_variable "UNK_1809842e0" "CompressionTemplate"
rename_variable "UNK_180984358" "DecompressionTemplate"
rename_variable "UNK_1809843d0" "EncodingTemplate"
rename_variable "UNK_1809841e0" "DecodingTemplate"
rename_variable "UNK_1809844c8" "TransformationTemplate"

# 资源管理相关
rename_variable "UNK_18098bdc8" "ResourceHashTemplate"
rename_variable "UNK_180a21720" "ResourceTableTemplate"
rename_variable "UNK_180a21690" "ResourceCacheTemplate"
rename_variable "UNK_180a3c3e0" "ResourceDescriptorTemplate"
rename_variable "UNK_180a3cf50" "ResourceMetadataTemplate"
rename_variable "UNK_180a30778" "ResourceInfoTemplate"
rename_variable "UNK_1809fcb90" "ResourceDataTemplate"
rename_variable "UNK_180a10098" "ResourceIndexTemplate"
rename_variable "UNK_180a02968" "ResourcePoolTemplate"

# 缓冲区相关
rename_variable "UNK_180982508" "BufferTemplate1"
rename_variable "UNK_180982608" "BufferTemplate2"
rename_variable "UNK_180982588" "BufferTemplate3"
rename_variable "UNK_180985a80" "BufferTemplate4"
rename_variable "UNK_180982cc0" "BufferTemplate5"
rename_variable "UNK_1809830b8" "BufferTemplate6"
rename_variable "UNK_180983238" "BufferTemplate7"
rename_variable "UNK_1809832b8" "BufferTemplate8"
rename_variable "UNK_180984038" "BufferTemplate9"
rename_variable "UNK_180983840" "BufferTemplate10"
rename_variable "UNK_180983738" "BufferTemplate11"
rename_variable "UNK_1809837c0" "BufferTemplate12"
rename_variable "UNK_1809839d8" "BufferTemplate13"
rename_variable "UNK_1809850f8" "BufferTemplate14"
rename_variable "UNK_180983950" "BufferTemplate15"
rename_variable "UNK_180983be8" "BufferTemplate16"
rename_variable "UNK_180983a60" "BufferTemplate17"
rename_variable "UNK_180983ae8" "BufferTemplate18"
rename_variable "UNK_180983b68" "BufferTemplate19"
rename_variable "UNK_180983cf8" "BufferTemplate20"

# 网络相关
rename_variable "UNK_180986408" "NetworkRequestTemplate"
rename_variable "UNK_1809864dc" "NetworkValidationTemplate"
rename_variable "UNK_180986590" "NetworkOperationTemplate"
rename_variable "UNK_1809865f0" "NetworkRequestTemplate2"
rename_variable "UNK_1809866c0" "NetworkConfigTemplate"
rename_variable "UNK_180986730" "NetworkDataTemplate"
rename_variable "UNK_1809867b0" "NetworkStreamTemplate"
rename_variable "UNK_180986850" "NetworkConnectionTemplate"
rename_variable "UNK_180986488" "NetworkStatusTemplate"
rename_variable "UNK_1809864b0" "NetworkResponseTemplate"

echo "基础变量重命名完成"

# 批量处理系统配置变量（1-200）
for i in {1..200}; do
    old_name="UNK_180a39c$(printf "%02x" $((i-1)))"
    # 处理特殊情况
    case $i in
        8) old_name="UNK_180a39ccc" ;;
        9) old_name="UNK_180a39cd0" ;;
        10) old_name="UNK_180a39cd4" ;;
        11) old_name="UNK_180a39cd8" ;;
        12) old_name="UNK_180a39ce0" ;;
        14) old_name="UNK_180a39d10" ;;
        15) old_name="UNK_180a39d28" ;;
        16) old_name="UNK_180a39d40" ;;
        17) old_name="UNK_180a39d58" ;;
        18) old_name="UNK_180a39d70" ;;
        19) old_name="UNK_180a39d88" ;;
        20) old_name="UNK_180a39d98" ;;
        21) old_name="UNK_180a39da8" ;;
        22) old_name="UNK_180a39db0" ;;
        23) old_name="UNK_180a39dc0" ;;
        24) old_name="UNK_180a39dd0" ;;
        25) old_name="UNK_180a39de0" ;;
        26) old_name="UNK_180a39df0" ;;
        27) old_name="UNK_180a39e08" ;;
        28) old_name="UNK_180a39e18" ;;
        29) old_name="UNK_180a39e30" ;;
        30) old_name="UNK_180a39e48" ;;
        31) old_name="UNK_180a39e58" ;;
        32) old_name="UNK_180a39e78" ;;
        33) old_name="UNK_180a39e90" ;;
        34) old_name="UNK_180a39ea8" ;;
        35) old_name="UNK_180a39eb8" ;;
        36) old_name="UNK_180a39ed0" ;;
        37) old_name="UNK_180a39ee0" ;;
        38) old_name="UNK_180a39ef0" ;;
        39) old_name="UNK_180a39f00" ;;
        40) old_name="UNK_180a39f18" ;;
        41) old_name="UNK_180a39f28" ;;
        42) old_name="UNK_180a39f50" ;;
        43) old_name="UNK_180a39f60" ;;
        44) old_name="UNK_180a39f78" ;;
        45) old_name="UNK_180a39f88" ;;
        46) old_name="UNK_180a39f98" ;;
        47) old_name="UNK_180a39fb0" ;;
        48) old_name="UNK_180a39fc0" ;;
        49) old_name="UNK_180a39fe0" ;;
        50) old_name="UNK_180a39ff8" ;;
        51) old_name="UNK_180a3a018" ;;
        52) old_name="UNK_180a3a038" ;;
        53) old_name="UNK_180a3a048" ;;
        54) old_name="UNK_180a3a058" ;;
        55) old_name="UNK_180a3a068" ;;
        56) old_name="UNK_180a3a078" ;;
        57) old_name="UNK_180a3a098" ;;
        58) old_name="UNK_180a3a0b8" ;;
        59) old_name="UNK_180a3a0d0" ;;
        60) old_name="UNK_180a3a0f0" ;;
        61) old_name="UNK_180a3a118" ;;
        62) old_name="UNK_180a3a140" ;;
        63) old_name="UNK_180a3a158" ;;
        64) old_name="UNK_180a3a178" ;;
        65) old_name="UNK_180a3a188" ;;
        66) old_name="UNK_180a3a1a8" ;;
        67) old_name="UNK_180a3a1b8" ;;
        68) old_name="UNK_180a3a1c8" ;;
        69) old_name="UNK_180a3a1e8" ;;
        70) old_name="UNK_180a3a208" ;;
        71) old_name="UNK_180a3a220" ;;
        72) old_name="UNK_180a3a240" ;;
        73) old_name="UNK_180a3a250" ;;
        74) old_name="UNK_180a3a260" ;;
        75) old_name="UNK_180a3a278" ;;
        76) old_name="UNK_180a3a298" ;;
        77) old_name="UNK_180a3a2b0" ;;
        78) old_name="UNK_180a3a2c0" ;;
        79) old_name="UNK_180a3a2d8" ;;
        80) old_name="UNK_180a3a2e8" ;;
        81) old_name="UNK_180a3a2f8" ;;
        82) old_name="UNK_180a3a300" ;;
        83) old_name="UNK_180a3a310" ;;
        84) old_name="UNK_180a3a320" ;;
        85) old_name="UNK_180a3a348" ;;
        86) old_name="UNK_180a3a370" ;;
        87) old_name="UNK_180a3a398" ;;
        88) old_name="UNK_180a3a3c0" ;;
        89) old_name="UNK_180a3a3d0" ;;
        90) old_name="UNK_180a3a3e8" ;;
        91) old_name="UNK_180a3a3f8" ;;
        92) old_name="UNK_180a3a408" ;;
        93) old_name="UNK_180a3a418" ;;
        94) old_name="UNK_180a3a428" ;;
        95) old_name="UNK_180a3a440" ;;
        96) old_name="UNK_180a3a458" ;;
        97) old_name="UNK_180a3a468" ;;
        98) old_name="UNK_180a3a478" ;;
        99) old_name="UNK_180a3a498" ;;
        100) old_name="UNK_180a3a4a8" ;;
        101) old_name="UNK_180a3a4c0" ;;
        102) old_name="UNK_180a3a4d0" ;;
        103) old_name="UNK_180a3a4e0" ;;
        104) old_name="UNK_180a3a4f8" ;;
        105) old_name="UNK_180a3a508" ;;
        106) old_name="UNK_180a3a520" ;;
        107) old_name="UNK_180a3a530" ;;
        108) old_name="UNK_180a3a540" ;;
        109) old_name="UNK_180a3a560" ;;
        110) old_name="UNK_180a3a580" ;;
        111) old_name="UNK_180a3a5a8" ;;
        112) old_name="UNK_180a3a5c0" ;;
        113) old_name="UNK_180a3a5d0" ;;
        114) old_name="UNK_180a3a5e0" ;;
        115) old_name="UNK_180a3a600" ;;
        116) old_name="UNK_180a3a620" ;;
        117) old_name="UNK_180a3a630" ;;
        118) old_name="UNK_180a3a640" ;;
        119) old_name="UNK_180a3a650" ;;
        120) old_name="UNK_180a3a660" ;;
        121) old_name="UNK_180a3a670" ;;
        122) old_name="UNK_180a3a688" ;;
        123) old_name="UNK_180a3a6a0" ;;
        124) old_name="UNK_180a3a6c0" ;;
        125) old_name="UNK_180a3a6e0" ;;
        126) old_name="UNK_180a3a6f8" ;;
        127) old_name="UNK_180a3a708" ;;
        128) old_name="UNK_180a3a720" ;;
        129) old_name="UNK_180a3a738" ;;
        130) old_name="UNK_180a3a748" ;;
        131) old_name="UNK_180a3a754" ;;
        132) old_name="UNK_180a3a758" ;;
        133) old_name="UNK_180a3a768" ;;
        134) old_name="UNK_180a3a778" ;;
        135) old_name="UNK_180a3a788" ;;
        136) old_name="UNK_180a3a798" ;;
        137) old_name="UNK_180a3a7a8" ;;
        138) old_name="UNK_180a3a7b8" ;;
        139) old_name="UNK_180a3a7d0" ;;
        140) old_name="UNK_180a3a7e0" ;;
        141) old_name="UNK_180a3a7f0" ;;
        142) old_name="UNK_180a3a800" ;;
        143) old_name="UNK_180a3a820" ;;
        144) old_name="UNK_180a3a830" ;;
        145) old_name="UNK_180a3a850" ;;
        146) old_name="UNK_180a3a860" ;;
        147) old_name="UNK_180a3a870" ;;
        148) old_name="UNK_180a3a880" ;;
        149) old_name="UNK_180a3a898" ;;
        150) old_name="UNK_180a3a8b0" ;;
        151) old_name="UNK_180a3a8c0" ;;
        152) old_name="UNK_180a3a8d8" ;;
        153) old_name="UNK_180a3a8f0" ;;
        154) old_name="UNK_180a3a900" ;;
        155) old_name="UNK_180a3a910" ;;
        156) old_name="UNK_180a3a920" ;;
        157) old_name="UNK_180a3a938" ;;
        158) old_name="UNK_180a3a948" ;;
        159) old_name="UNK_180a3a960" ;;
        160) old_name="UNK_180a3a970" ;;
        161) old_name="UNK_180a3a988" ;;
        162) old_name="UNK_180a3a998" ;;
        163) old_name="UNK_180a3a9b0" ;;
        164) old_name="UNK_180a3a9c8" ;;
        165) old_name="UNK_180a3a9d8" ;;
        166) old_name="UNK_180a3a9e0" ;;
        167) old_name="UNK_180a3a9f0" ;;
        168) old_name="UNK_180a3aa08" ;;
        169) old_name="UNK_180a3aa20" ;;
        170) old_name="UNK_180a3aa38" ;;
        171) old_name="UNK_180a3aa50" ;;
        172) old_name="UNK_180a3aa70" ;;
        173) old_name="UNK_180a3aa98" ;;
        174) old_name="UNK_180a3aab0" ;;
        175) old_name="UNK_180a3aac0" ;;
        176) old_name="UNK_180a3aad8" ;;
        177) old_name="UNK_180a3aae8" ;;
        178) old_name="UNK_180a3aaf8" ;;
        179) old_name="UNK_180a3ab08" ;;
        180) old_name="UNK_180a3ab18" ;;
        181) old_name="UNK_180a3ab28" ;;
        182) old_name="UNK_180a3ab38" ;;
        183) old_name="UNK_180a3ab50" ;;
        184) old_name="UNK_180a3ab60" ;;
        185) old_name="UNK_180a3ab70" ;;
        186) old_name="UNK_180a3ab80" ;;
        187) old_name="UNK_180a3ab90" ;;
        188) old_name="UNK_180a3aba0" ;;
        189) old_name="UNK_180a3abb0" ;;
        190) old_name="UNK_180a3abc0" ;;
        191) old_name="UNK_180a3abd0" ;;
        192) old_name="UNK_180a3abe0" ;;
        193) old_name="UNK_180a3abe8" ;;
        194) old_name="UNK_180a3ac00" ;;
        195) old_name="UNK_180a3ac10" ;;
        196) old_name="UNK_180a3ac18" ;;
        197) old_name="UNK_180a3ac30" ;;
        198) old_name="UNK_180a3ac48" ;;
        199) old_name="UNK_180a3ac68" ;;
        200) old_name="UNK_180a3ac80" ;;
    esac
    
    new_name="SystemConfig$i"
    
    # 检查变量是否存在
    if grep -q "$old_name" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c; then
        rename_variable "$old_name" "$new_name"
    fi
done

# 其他系统变量
rename_variable "UNK_18064ffc0" "GlobalSystemVariable1"
rename_variable "UNK_180a2eac0" "GlobalSystemVariable2"
rename_variable "UNK_180a3e5e8" "GlobalSystemVariable3"
rename_variable "UNK_180a3c8c8" "GlobalSystemVariable4"
rename_variable "UNK_180a3c908" "GlobalSystemVariable5"
rename_variable "UNK_180a3d970" "GlobalSystemVariable6"
rename_variable "UNK_180a3db60" "GlobalSystemVariable7"

echo "所有 UNK_ 变量重命名完成！"

# 验证重命名结果
echo "验证重命名结果..."
remaining_unk=$(grep -c "UNK_" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c)
echo "剩余 UNK_ 变量数量: $remaining_unk"

if [ $remaining_unk -eq 0 ]; then
    echo "✓ 所有 UNK_ 变量已成功重命名"
else
    echo "⚠ 仍有 $remaining_unk 个 UNK_ 变量未处理"
    echo "剩余变量:"
    grep -n "UNK_" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
fi