#!/bin/bash

# 美化06_utilities.c文件中的位域变量名
# 这个脚本专门处理逆向工程生成的位域变量名

echo "开始美化06_utilities.c文件中的位域变量名..."

# 备份原始文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup

# 定义位域变量映射关系
declare -A BITFIELD_MAPPING=(
    ["_1_3_"]="High31Bits"
    ["_4_4_"]="High28Bits"
    ["_1_7_"]="High57Bits"
)

# 遍历映射关系并进行替换
for old_name in "${!BITFIELD_MAPPING[@]}"; do
    new_name="${BITFIELD_MAPPING[$old_name]}"
    echo "替换 $old_name -> $new_name"
    
    # 使用sed进行精确替换
    sed -i "s/\.$old_name\./\.$new_name\./g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
done

echo "位域变量名美化完成！"