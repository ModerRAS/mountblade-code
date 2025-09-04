#!/bin/bash

# 系统渲染配置变量替换脚本
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 定义替换映射
declare -A replacements=(
    ["UNK_180a05798"]="SystemRenderConfigurationOffset5798"
    ["UNK_180a057d8"]="SystemRenderConfigurationOffset57d8"
    ["UNK_180a057c0"]="SystemRenderConfigurationOffset57c0"
    ["UNK_180a057f8"]="SystemRenderConfigurationOffset57f8"
    ["UNK_180a057e8"]="SystemRenderConfigurationOffset57e8"
    ["UNK_180a05828"]="SystemRenderConfigurationOffset5828"
    ["UNK_180a05808"]="SystemRenderConfigurationOffset5808"
    ["UNK_180a05850"]="SystemRenderConfigurationOffset5850"
    ["UNK_180a05840"]="SystemRenderConfigurationOffset5840"
    ["UNK_180a05918"]="SystemRenderConfigurationOffset5918"
    ["UNK_180a05900"]="SystemRenderConfigurationOffset5900"
    ["UNK_180a05940"]="SystemRenderConfigurationOffset5940"
    ["UNK_180a05928"]="SystemRenderConfigurationOffset5928"
    ["UNK_180a05960"]="SystemRenderConfigurationOffset5960"
    ["UNK_180a05950"]="SystemRenderConfigurationOffset5950"
    ["UNK_180a05978"]="SystemRenderConfigurationOffset5978"
    ["UNK_180a05970"]="SystemRenderConfigurationOffset5970"
    ["UNK_180a059b8"]="SystemRenderConfigurationOffset59b8"
    ["UNK_180a05998"]="SystemRenderConfigurationOffset5998"
    ["UNK_180a059f8"]="SystemRenderConfigurationOffset59f8"
    ["UNK_180a059c8"]="SystemRenderConfigurationOffset59c8"
    ["UNK_180a05a30"]="SystemRenderConfigurationOffset5a30"
    ["UNK_180a05a20"]="SystemRenderConfigurationOffset5a20"
    ["UNK_180a05a58"]="SystemRenderConfigurationOffset5a58"
    ["UNK_180a05a40"]="SystemRenderConfigurationOffset5a40"
    ["UNK_180a05a88"]="SystemRenderConfigurationOffset5a88"
    ["UNK_180a05a68"]="SystemRenderConfigurationOffset5a68"
    ["UNK_180a05ac0"]="SystemRenderConfigurationOffset5ac0"
    ["UNK_180a05aa0"]="SystemRenderConfigurationOffset5aa0"
    ["UNK_180a05af8"]="SystemRenderConfigurationOffset5af8"
    ["UNK_180a052b8"]="SystemRenderConfigurationOffset52b8"
    ["UNK_180a05ae0"]="SystemRenderConfigurationOffset5ae0"
    ["UNK_180a05b30"]="SystemRenderConfigurationOffset5b30"
    ["UNK_180a05b10"]="SystemRenderConfigurationOffset5b10"
    ["UNK_180a05b58"]="SystemRenderConfigurationOffset5b58"
    ["UNK_180a05b48"]="SystemRenderConfigurationOffset5b48"
    ["UNK_180a05b80"]="SystemRenderConfigurationOffset5b80"
    ["UNK_180a05b68"]="SystemRenderConfigurationOffset5b68"
    ["UNK_180a05bb8"]="SystemRenderConfigurationOffset5bb8"
    ["UNK_180a05ba0"]="SystemRenderConfigurationOffset5ba0"
    ["UNK_180a05be0"]="SystemRenderConfigurationOffset5be0"
    ["UNK_180a05bd0"]="SystemRenderConfigurationOffset5bd0"
)

# 执行替换
for old in "${!replacements[@]}"; do
    new="${replacements[$old]}"
    sed -i "s/$old/$new/g" 02_core_engine.c
    echo "Replaced $old with $new"
done

echo "All replacements completed"