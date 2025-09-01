#!/bin/bash

# 批量替换 06_utilities.c 中的 FUN_ 函数名为有意义的名称
# 注意：这是一个简化的实现，实际使用时需要根据函数的具体功能进行调整

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 备份原始文件
cp "$FILE" "$FILE.backup"

echo "开始美化 06_utilities.c 文件..."

# 函数重命名映射
# 格式: "原始函数名->新函数名"
declare -A FUNCTION_RENAMES=(
    ["FUN_180941bf0"]="CleanupSystemResourcesAndThreadSync"
    ["FUN_180941fe0"]="InitializeSystemDataStructureAJ"
    ["FUN_1809423c0"]="InitializeSystemDataStructureAK"
    ["FUN_1809423e0"]="InitializeSystemDataStructureAL"
    ["FUN_180942400"]="InitializeSystemDataStructureAM"
    ["FUN_180942420"]="InitializeSystemDataStructureAN"
    ["FUN_180942440"]="InitializeSystemDataStructureAO"
    ["FUN_180942460"]="InitializeSystemDataStructureAP"
    ["FUN_180942480"]="InitializeSystemDataStructureAQ"
    ["FUN_1809424a0"]="InitializeSystemDataStructureAR"
    ["FUN_1809424c0"]="InitializeSystemDataStructureAS"
    ["FUN_180942520"]="InitializeSystemDataStructureAT"
    ["FUN_180942580"]="InitializeSystemDataStructureAU"
    ["FUN_1809425e0"]="InitializeSystemDataStructureAV"
    ["FUN_180942660"]="InitializeSystemDataStructureAW"
    ["FUN_180942690"]="InitializeSystemDataStructureAX"
    ["FUN_180942700"]="InitializeSystemDataStructureAY"
    ["FUN_180942720"]="InitializeSystemDataStructureAZ"
    ["FUN_180942750"]="InitializeSystemDataStructureBA"
    ["FUN_180942790"]="InitializeSystemDataStructureBB"
    ["FUN_1809427d0"]="InitializeSystemDataStructureBC"
    ["FUN_1809427f0"]="InitializeSystemDataStructureBD"
    ["FUN_180942810"]="InitializeSystemDataStructureBE"
    ["FUN_180942830"]="InitializeSystemDataStructureBF"
    ["FUN_180942850"]="InitializeSystemDataStructureBG"
    ["FUN_1809428d8"]="InitializeSystemDataStructureBH"
    ["FUN_1809428e0"]="InitializeSystemDataStructureBI"
    ["FUN_1809428f2"]="InitializeSystemDataStructureBJ"
    ["FUN_180942928"]="InitializeSystemDataStructureBK"
    ["FUN_180942930"]="InitializeSystemDataStructureBL"
    ["FUN_180942942"]="InitializeSystemDataStructureBM"
    ["FUN_180942978"]="InitializeSystemDataStructureBN"
    ["FUN_180942980"]="InitializeSystemDataStructureBO"
    ["FUN_1809429f0"]="InitializeSystemDataStructureBP"
    ["FUN_180942a20"]="InitializeSystemDataStructureBQ"
    ["FUN_180942bf0"]="InitializeSystemDataStructureBR"
    ["FUN_180942c20"]="InitializeSystemDataStructureBS"
    ["FUN_180942c50"]="InitializeSystemDataStructureBT"
    ["FUN_180942cb0"]="InitializeSystemDataStructureBU"
    ["FUN_180942ce0"]="InitializeSystemDataStructureBV"
    ["FUN_180942d30"]="InitializeSystemDataStructureBW"
    ["FUN_180942e20"]="InitializeSystemDataStructureBX"
    ["FUN_180942e70"]="InitializeSystemDataStructureBY"
    ["FUN_180942f00"]="InitializeSystemDataStructureBZ"
    ["FUN_180942f50"]="InitializeSystemDataStructureCA"
    ["FUN_180942fa0"]="InitializeSystemDataStructureCB"
    ["FUN_180942fc0"]="InitializeSystemDataStructureCC"
    ["FUN_180943070"]="InitializeSystemDataStructureCD"
)

# 变量重命名映射
declare -A VARIABLE_RENAMES=(
    ["DAT_180bfaef0"]="SystemMemoryConfigDataTemplateA"
    ["DAT_180bfaef8"]="SystemMemoryConfigDataTemplateB"
    ["DAT_180bfaf00"]="SystemMemoryConfigDataTemplateC"
    ["DAT_180bfaf08"]="SystemMemoryConfigDataTemplateD"
    ["DAT_180bfb310"]="SystemMemoryConfigDataTemplateE"
    ["DAT_180bfb318"]="SystemMemoryConfigDataTemplateF"
    ["DAT_180bfb320"]="SystemMemoryConfigDataTemplateG"
    ["DAT_180bfb328"]="SystemMemoryConfigDataTemplateH"
    ["DAT_180bfb730"]="SystemMemoryConfigDataTemplateI"
    ["DAT_180bfb738"]="SystemMemoryConfigDataTemplateJ"
    ["DAT_180bfb740"]="SystemMemoryConfigDataTemplateK"
    ["DAT_180bfb748"]="SystemMemoryConfigDataTemplateL"
    ["DAT_180c9246c"]="SystemMemoryConfigDataTemplateM"
    ["DAT_180c92490"]="SystemConfigurationDataA"
    ["DAT_180c92480"]="SystemEnvironmentDataA"
    ["DAT_180c924ac"]="SystemMemoryConfigDataTemplateN"
    ["DAT_180c924b0"]="SystemMemoryConfigDataTemplateO"
    ["DAT_180c924b4"]="SystemMemoryConfigDataTemplateP"
    ["DAT_180c924b8"]="SystemMemoryConfigDataTemplateQ"
)

# 执行函数重命名
for old_name in "${!FUNCTION_RENAMES[@]}"; do
    new_name="${FUNCTION_RENAMES[$old_name]}"
    echo "重命名函数: $old_name -> $new_name"
    
    # 使用 sed 进行替换
    sed -i "s/\b$old_name\b/$new_name/g" "$FILE"
done

# 执行变量重命名
for old_name in "${!VARIABLE_RENAMES[@]}"; do
    new_name="${VARIABLE_RENAMES[$old_name]}"
    echo "重命名变量: $old_name -> $new_name"
    
    # 使用 sed 进行替换
    sed -i "s/\b$old_name\b/$new_name/g" "$FILE"
done

echo "重命名完成！"
echo "备份文件保存在: $FILE.backup"