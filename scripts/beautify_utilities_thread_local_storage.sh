#!/bin/bash

# 06_utilities.c 线程本地存储偏移量美化脚本
# 美化线程本地存储偏移量，将十六进制值替换为语义化名称

# 输入文件路径
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
TEMP_FILE="/tmp/utilities_thread_local_storage.tmp"

# 创建美化映射表
declare -A OFFSET_MAP=(
    # 线程本地存储偏移量映射
    ["utility_thread_local_storage_offset_1138"]="utility_thread_local_storage_offset_data_primary"
    ["utility_thread_local_storage_offset_1150"]="utility_thread_local_storage_offset_flag_primary"
    ["utility_thread_local_storage_offset_1118"]="utility_thread_local_storage_offset_data_secondary"
    ["utility_thread_local_storage_offset_11A8"]="utility_thread_local_storage_offset_data_tertiary"
    ["utility_thread_local_storage_offset_11C0"]="utility_thread_local_storage_offset_flag_tertiary"
    ["utility_thread_local_storage_offset_11F8"]="utility_thread_local_storage_offset_data_quaternary"
    ["utility_thread_local_storage_offset_1450"]="utility_thread_local_storage_offset_flag_quaternary"
    ["utility_thread_local_storage_offset_1428"]="utility_thread_local_storage_offset_data_quinary"
    ["utility_thread_local_storage_offset_1440"]="utility_thread_local_storage_offset_flag_quinary"
    ["utility_thread_local_storage_offset_14B8"]="utility_thread_local_storage_offset_data_senary"
    ["utility_thread_local_storage_offset_1498"]="utility_thread_local_storage_offset_data_septenary"
    ["utility_thread_local_storage_offset_14A0"]="utility_thread_local_storage_offset_flag_septenary"
    ["utility_thread_local_storage_offset_14B0"]="utility_thread_local_storage_offset_status_septenary"
    ["utility_thread_local_storage_offset_1528"]="utility_thread_local_storage_offset_data_octonary"
    ["utility_thread_local_storage_offset_1530"]="utility_thread_local_storage_offset_flag_octonary"
    ["utility_thread_local_storage_offset_1520"]="utility_thread_local_storage_offset_status_octonary"
    ["utility_thread_local_storage_offset_1508"]="utility_thread_local_storage_offset_data_nonary"
    ["utility_thread_local_storage_offset_1510"]="utility_thread_local_storage_offset_flag_nonary"
    ["utility_thread_local_storage_offset_1598"]="utility_thread_local_storage_offset_data_denary"
    ["utility_thread_local_storage_offset_15A0"]="utility_thread_local_storage_offset_flag_denary"
    ["utility_thread_local_storage_offset_15B0"]="utility_thread_local_storage_offset_status_denary"
    ["utility_thread_local_storage_offset_1578"]="utility_thread_local_storage_offset_data_undenary"
    ["utility_thread_local_storage_offset_1590"]="utility_thread_local_storage_offset_flag_undenary"
    ["utility_thread_local_storage_offset_15F0"]="utility_thread_local_storage_offset_cleanup_flag"
    ["utility_thread_local_storage_offset_1838"]="utility_thread_local_storage_offset_data_duodenary"
    ["utility_thread_local_storage_offset_1840"]="utility_thread_local_storage_offset_flag_duodenary"
    ["utility_thread_local_storage_offset_1850"]="utility_thread_local_storage_offset_status_duodenary"
    ["utility_thread_local_storage_offset_1818"]="utility_thread_local_storage_offset_data_terdenary"
    ["utility_thread_local_storage_offset_1820"]="utility_thread_local_storage_offset_flag_terdenary"
    ["utility_thread_local_storage_offset_1830"]="utility_thread_local_storage_offset_status_terdenary"
    ["utility_thread_local_storage_offset_18A8"]="utility_thread_local_storage_offset_data_quattuordenary"
    ["utility_thread_local_storage_offset_18B0"]="utility_thread_local_storage_offset_flag_quattuordenary"
    ["utility_thread_local_storage_offset_18C0"]="utility_thread_local_storage_offset_status_quattuordenary"
    ["utility_thread_local_storage_offset_18A0"]="utility_thread_local_storage_offset_control_quattuordenary"
    ["utility_thread_local_storage_offset_18F8"]="utility_thread_local_storage_offset_data_quindenary"
    ["utility_thread_local_storage_offset_1C28"]="utility_thread_local_storage_offset_data_sexdenary"
    ["utility_thread_local_storage_offset_1C30"]="utility_thread_local_storage_offset_flag_sexdenary"
    ["utility_thread_local_storage_offset_1C40"]="utility_thread_local_storage_offset_status_sexdenary"
    ["utility_thread_local_storage_offset_1E58"]="utility_thread_local_storage_offset_data_septendenary"
    ["utility_thread_local_storage_offset_1E60"]="utility_thread_local_storage_offset_flag_septendenary"
    ["utility_thread_local_storage_offset_1E50"]="utility_thread_local_storage_offset_status_septendenary"
    ["utility_thread_local_storage_offset_1E38"]="utility_thread_local_storage_offset_data_octodenary"
    ["utility_thread_local_storage_offset_1E40"]="utility_thread_local_storage_offset_flag_octodenary"
    ["utility_thread_local_storage_offset_1E50"]="utility_thread_local_storage_offset_status_octodenary"
    ["utility_thread_local_storage_offset_1ec8"]="utility_thread_local_storage_offset_data_novendenary"
    ["utility_thread_local_storage_offset_1ed0"]="utility_thread_local_storage_offset_flag_novendenary"
    ["utility_thread_local_storage_offset_1ee0"]="utility_thread_local_storage_offset_status_novendenary"
    ["utility_thread_local_storage_offset_1ea8"]="utility_thread_local_storage_offset_data_vigesimal"
    ["utility_thread_local_storage_offset_1eb0"]="utility_thread_local_storage_offset_flag_vigesimal"
    ["utility_thread_local_storage_offset_1ec0"]="utility_thread_local_storage_offset_status_vigesimal"
    ["utility_thread_local_storage_offset_1F38"]="utility_thread_local_storage_offset_data_unvigesimal"
    ["utility_thread_local_storage_offset_1F50"]="utility_thread_local_storage_offset_flag_unvigesimal"
    ["utility_thread_local_storage_offset_1F18"]="utility_thread_local_storage_offset_data_duovigesimal"
    ["utility_thread_local_storage_offset_1F20"]="utility_thread_local_storage_offset_flag_duovigesimal"
    ["utility_thread_local_storage_offset_1F30"]="utility_thread_local_storage_offset_status_duovigesimal"
    ["utility_thread_local_storage_offset_1fa8"]="utility_thread_local_storage_offset_data_trevigesimal"
    ["utility_thread_local_storage_offset_1fb0"]="utility_thread_local_storage_offset_flag_trevigesimal"
    ["utility_thread_local_storage_offset_1fc0"]="utility_thread_local_storage_offset_status_trevigesimal"
    ["utility_thread_local_storage_offset_1F90"]="utility_thread_local_storage_offset_flag_trevigesimal_alt"
    ["utility_thread_local_storage_offset_1fa0"]="utility_thread_local_storage_offset_status_trevigesimal_alt"
    ["utility_thread_local_storage_offset_2018"]="utility_thread_local_storage_offset_data_quattuorvigesimal"
    ["utility_thread_local_storage_offset_2020"]="utility_thread_local_storage_offset_flag_quattuorvigesimal"
    ["utility_thread_local_storage_offset_2030"]="utility_thread_local_storage_offset_status_quattuorvigesimal"
    ["utility_thread_local_storage_offset_1ff8"]="utility_thread_local_storage_offset_data_quinvigesimal"
    ["utility_thread_local_storage_offset_2000"]="utility_thread_local_storage_offset_flag_quinvigesimal"
    ["utility_thread_local_storage_offset_2010"]="utility_thread_local_storage_offset_status_quinvigesimal"
    ["utility_thread_local_storage_offset_2090"]="utility_thread_local_storage_offset_flag_sexvigesimal"
    ["utility_thread_local_storage_offset_20A0"]="utility_thread_local_storage_offset_status_sexvigesimal"
    ["utility_thread_local_storage_offset_2068"]="utility_thread_local_storage_offset_data_sexvigesimal"
    ["utility_thread_local_storage_offset_2070"]="utility_thread_local_storage_offset_flag_sexvigesimal_alt"
    ["utility_thread_local_storage_offset_20F8"]="utility_thread_local_storage_offset_data_septenvigesimal"
    ["utility_thread_local_storage_offset_2110"]="utility_thread_local_storage_offset_flag_septenvigesimal"
    ["utility_thread_local_storage_offset_20D8"]="utility_thread_local_storage_offset_data_octovigesimal"
    ["utility_thread_local_storage_offset_20E0"]="utility_thread_local_storage_offset_flag_octovigesimal"
    ["utility_thread_local_storage_offset_20F0"]="utility_thread_local_storage_offset_status_octovigesimal"
    ["utility_thread_local_storage_offset_2168"]="utility_thread_local_storage_offset_data_novemvigesimal"
    ["utility_thread_local_storage_offset_2170"]="utility_thread_local_storage_offset_flag_novemvigesimal"
    ["utility_thread_local_storage_offset_2148"]="utility_thread_local_storage_offset_data_trigesimal"
    ["utility_thread_local_storage_offset_2150"]="utility_thread_local_storage_offset_flag_trigesimal"
    ["utility_thread_local_storage_offset_2330"]="utility_thread_local_storage_offset_flag_untrigesimal"
    ["utility_thread_local_storage_offset_2340"]="utility_thread_local_storage_offset_status_untrigesimal"
    ["utility_thread_local_storage_offset_2310"]="utility_thread_local_storage_offset_flag_duotrigesimal"
    ["utility_thread_local_storage_offset_2320"]="utility_thread_local_storage_offset_status_duotrigesimal"
    ["utility_thread_local_storage_offset_23A0"]="utility_thread_local_storage_offset_flag_tertrigesimal"
    ["utility_thread_local_storage_offset_23B0"]="utility_thread_local_storage_offset_status_tertrigesimal"
    ["utility_thread_local_storage_offset_2378"]="utility_thread_local_storage_offset_data_quattuortrigesimal"
    ["utility_thread_local_storage_offset_2390"]="utility_thread_local_storage_offset_flag_quattuortrigesimal"
    ["utility_thread_local_storage_offset_2408"]="utility_thread_local_storage_offset_data_quintrigesimal"
    ["utility_thread_local_storage_offset_2410"]="utility_thread_local_storage_offset_flag_quintrigesimal"
    ["utility_thread_local_storage_offset_2420"]="utility_thread_local_storage_offset_status_quintrigesimal"
    ["utility_thread_local_storage_offset_23E8"]="utility_thread_local_storage_offset_data_sextrigesimal"
    ["utility_thread_local_storage_offset_23F0"]="utility_thread_local_storage_offset_flag_sextrigesimal"
    ["utility_thread_local_storage_offset_2400"]="utility_thread_local_storage_offset_status_sextrigesimal"
    ["utility_thread_local_storage_offset_2478"]="utility_thread_local_storage_offset_data_septentrigesimal"
)

# 检查文件是否存在
if [ ! -f "$INPUT_FILE" ]; then
    echo "错误: 输入文件不存在: $INPUT_FILE"
    exit 1
fi

# 创建临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 执行美化替换
for hex_offset in "${!OFFSET_MAP[@]}"; do
    semantic_offset="${OFFSET_MAP[$hex_offset]}"
    echo "替换: $hex_offset -> $semantic_offset"
    
    # 使用sed进行替换
    sed -i "s/${hex_offset}/${semantic_offset}/g" "$TEMP_FILE"
done

# 统计替换次数
replace_count=$(grep -c "utility_thread_local_storage_offset_" "$TEMP_FILE" 2>/dev/null | grep -v "utility_thread_local_storage_offset_" | wc -l)
echo "总共替换了约 $replace_count 处十六进制偏移量"

# 替换文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "06_utilities.c 文件线程本地存储偏移量美化完成"
echo "美化了线程本地存储偏移量，将十六进制值替换为语义化名称"
echo "原本实现：完全重构所有线程本地存储偏移量命名体系，建立统一的语义化命名规范"
echo "简化实现：仅将代码中的十六进制偏移量替换为语义化名称，保持代码结构不变"