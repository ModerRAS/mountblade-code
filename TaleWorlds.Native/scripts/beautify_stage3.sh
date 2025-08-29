#!/bin/bash

# 美化代码脚本 - 阶段3：继续美化变量名
# 这个脚本会替换一些常见的DAT_变量名为更有意义的名称

cd /root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native

# 备份当前文件
cp TaleWorlds.Native.dll.c TaleWorlds.Native.dll.c.backup.$(date +%Y%m%d_%H%M%S)

# 定义一些变量替换规则
declare -A replacements=(
    # 常见的数据结构
    ["DAT_180bf5208"]="engineConfigData"
    ["DAT_180bf5210"]="engineSettingsData"
    ["DAT_180bf5218"]="engineMemoryData"
    ["DAT_180bf5220"]="engineThreadData"
    ["DAT_180bf5bc0"]="renderConfigData"
    ["DAT_180bf5bc8"]="renderSettingsData"
    ["DAT_180bf5bd0"]="renderMemoryData"
    ["DAT_180bf5bd8"]="renderThreadData"
    ["DAT_180bf5c30"]="physicsConfigData"
    ["DAT_180bf5c38"]="physicsSettingsData"
    ["DAT_180bf5c40"]="physicsMemoryData"
    ["DAT_180bf5c48"]="physicsThreadData"
    ["DAT_180bf6080"]="audioConfigData"
    ["DAT_180bf6088"]="audioSettingsData"
    ["DAT_180bf6090"]="audioMemoryData"
    ["DAT_180c910f8"]="audioSystemState"
    ["DAT_180c91198"]="physicsSystemState"
    ["DAT_180c91900"]="gameSystemState"
    ["DAT_1809fe0d0"]="worldConfigData"
    ["DAT_1809fcc58"]="stateManagerData"
    ["DAT_1809fcc28"]="timeSystemData"
    ["DAT_180a003b8"]="entitySystemData"
    ["DAT_180a00fd8"]="entityConfigData"
    ["DAT_180a00e28"]="entityMemoryData"
    ["DAT_180bf64d0"]="objectConfigData"
    ["DAT_180bf64d8"]="objectSettingsData"
    ["DAT_180bf64e0"]="objectMemoryData"
    ["DAT_180bf64e8"]="objectThreadData"
    ["DAT_180bf6530"]="renderObjectData"
    ["DAT_180bf6538"]="renderSettingsData"
    ["DAT_180bf6540"]="renderMemoryData"
    ["DAT_180bf6548"]="renderThreadData"
    ["DAT_180bf6590"]="physicsObjectData"
    ["DAT_180bf6598"]="physicsSettingsData"
    ["DAT_180bf65a0"]="physicsMemoryData"
    ["DAT_180bf65a8"]="physicsThreadData"
    ["DAT_180bf65c0"]="collisionObjectData"
    ["DAT_180bf65c8"]="collisionSettingsData"
    ["DAT_180bf65d0"]="collisionMemoryData"
    ["DAT_180bf65d8"]="collisionThreadData"
    ["DAT_180bf65f0"]="scriptObjectData"
    ["DAT_180bf65f8"]="scriptSettingsData"
    ["DAT_180bf6600"]="scriptMemoryData"
    ["DAT_180bf6608"]="scriptThreadData"
    ["DAT_180bf6620"]="inputObjectData"
    ["DAT_180bf6628"]="inputSettingsData"
    ["DAT_180bf6630"]="inputMemoryData"
    ["DAT_180bf6638"]="inputThreadData"
    ["DAT_180bf6650"]="animationObjectData"
    ["DAT_180bf6658"]="animationSettingsData"
    ["DAT_180bf6660"]="animationMemoryData"
    ["DAT_180bf6668"]="animationThreadData"
    ["DAT_180bf66b0"]="memoryObjectData"
    ["DAT_180bf66b8"]="memorySettingsData"
    ["DAT_180bf66c0"]="memoryMemoryData"
    ["DAT_180bf66c8"]="memoryThreadData"
    ["DAT_180bf52e8"]="fileSystemData"
    ["DAT_180bf52f0"]="fileSettingsData"
    ["DAT_180bf52f8"]="fileMemoryData"
    ["DAT_180bf5300"]="fileThreadData"
    ["DAT_180bf5738"]="threadSystemData"
    ["DAT_180bf5740"]="threadSettingsData"
    ["DAT_180bf5748"]="threadMemoryData"
    ["DAT_180bf5750"]="threadThreadData"
)

# 执行替换
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    echo "替换 $old_name -> $new_name"
    sed -i "s/\b$old_name\b/$new_name/g" TaleWorlds.Native.dll.c
done

echo "变量替换完成"