#!/bin/bash

# 02_core_engine.c第二轮变量名语义化美化脚本
# 用于批量替换剩余的未美化变量名

echo "开始第二轮美化02_core_engine.c文件中的变量名..."

# 定义替换规则
declare -A replacements2=(
    # 剩余的栈变量
    ["puStack_90"]="engine_stack_pointer_90"
    ["uStack_80"]="engine_stack_value_80"
    
    # 临时变量
    ["puVar1"]="engine_temp_ptr_1"
    ["puVar2"]="engine_temp_ptr_2"
    ["puVar3"]="engine_temp_ptr_3"
    ["puVar4"]="engine_temp_ptr_4"
    ["puVar5"]="engine_temp_ptr_5"
    ["puVar6"]="engine_temp_ptr_6"
    ["puVar7"]="engine_temp_ptr_7"
    ["puVar8"]="engine_temp_ptr_8"
    ["puVar9"]="engine_temp_ptr_9"
    
    ["iVar1"]="engine_temp_int_1"
    ["iVar2"]="engine_temp_int_2"
    ["iVar3"]="engine_temp_int_3"
    ["iVar4"]="engine_temp_int_4"
    ["iVar5"]="engine_temp_int_5"
    ["iVar6"]="engine_temp_int_6"
    ["iVar7"]="engine_temp_int_7"
    ["iVar8"]="engine_temp_int_8"
    ["iVar9"]="engine_temp_int_9"
    ["iVar10"]="engine_temp_int_10"
    
    ["uVar1"]="engine_temp_uint_1"
    ["uVar2"]="engine_temp_uint_2"
    ["uVar3"]="engine_temp_uint_3"
    ["uVar4"]="engine_temp_uint_4"
    ["uVar5"]="engine_temp_uint_5"
    ["uVar6"]="engine_temp_uint_6"
    ["uVar7"]="engine_temp_uint_7"
    ["uVar8"]="engine_temp_uint_8"
    ["uVar9"]="engine_temp_uint_9"
    
    ["lVar1"]="engine_temp_long_1"
    ["lVar2"]="engine_temp_long_2"
    ["lVar3"]="engine_temp_long_3"
    ["lVar4"]="engine_temp_long_4"
    ["lVar5"]="engine_temp_long_5"
    ["lVar6"]="engine_temp_long_6"
    ["lVar7"]="engine_temp_long_7"
    ["lVar8"]="engine_temp_long_8"
    ["lVar9"]="engine_temp_long_9"
    
    ["fVar1"]="engine_temp_float_1"
    ["fVar2"]="engine_temp_float_2"
    ["fVar3"]="engine_temp_float_3"
    ["fVar4"]="engine_temp_float_4"
    ["fVar5"]="engine_temp_float_5"
    
    ["cVar1"]="engine_temp_char_1"
    ["cVar2"]="engine_temp_char_2"
    ["cVar3"]="engine_temp_char_3"
    ["cVar5"]="engine_temp_char_5"
    
    ["bVar1"]="engine_temp_bool_1"
    ["bVar2"]="engine_temp_bool_2"
    ["bVar3"]="engine_temp_bool_3"
    ["bVar5"]="engine_temp_bool_5"
    
    ["dVar1"]="engine_temp_double_1"
    ["dVar2"]="engine_temp_double_2"
    
    ["sVar1"]="engine_temp_short_1"
    ["sVar2"]="engine_temp_short_2"
    
    ["local_10"]="engine_local_10"
    ["local_18"]="engine_local_18"
    ["local_20"]="engine_local_20"
    ["local_28"]="engine_local_28"
    ["local_30"]="engine_local_30"
    ["local_38"]="engine_local_38"
    ["local_40"]="engine_local_40"
    ["local_48"]="engine_local_48"
    ["local_50"]="engine_local_50"
    ["local_58"]="engine_local_58"
    ["local_60"]="engine_local_60"
    ["local_68"]="engine_local_68"
    ["local_70"]="engine_local_70"
    ["local_78"]="engine_local_78"
    ["local_80"]="engine_local_80"
    ["local_88"]="engine_local_88"
    ["local_90"]="engine_local_90"
    ["local_98"]="engine_local_98"
    ["local_a0"]="engine_local_a0"
    ["local_a8"]="engine_local_a8"
    ["local_b0"]="engine_local_b0"
    ["local_b8"]="engine_local_b8"
    ["local_c0"]="engine_local_c0"
    ["local_c8"]="engine_local_c8"
    ["local_d0"]="engine_local_d0"
    ["local_d8"]="engine_local_d8"
    ["local_e0"]="engine_local_e0"
    ["local_e8"]="engine_local_e8"
    ["local_f0"]="engine_local_f0"
    ["local_f8"]="engine_local_f8"
    
    # 指针变量
    ["plVar1"]="engine_temp_long_ptr_1"
    ["plVar2"]="engine_temp_long_ptr_2"
    ["plVar3"]="engine_temp_long_ptr_3"
    ["plVar4"]="engine_temp_long_ptr_4"
    ["plVar6"]="engine_temp_long_ptr_6"
    
    # 双指针变量
    ["ppVar1"]="engine_temp_ptr_ptr_1"
    ["ppVar2"]="engine_temp_ptr_ptr_2"
    ["ppVar3"]="engine_temp_ptr_ptr_3"
    ["ppVar4"]="engine_temp_ptr_ptr_4"
    ["ppVar5"]="engine_temp_ptr_ptr_5"
    ["ppVar6"]="engine_temp_ptr_ptr_6"
    ["ppVar7"]="engine_temp_ptr_ptr_7"
    ["ppVar8"]="engine_temp_ptr_ptr_8"
    ["ppVar9"]="engine_temp_ptr_ptr_9"
    
    # 长双指针变量
    ["pplVar1"]="engine_temp_long_ptr_ptr_1"
    ["pplVar2"]="engine_temp_long_ptr_ptr_2"
    ["pplVar3"]="engine_temp_long_ptr_ptr_3"
    ["pplVar4"]="engine_temp_long_ptr_ptr_4"
    ["pplVar5"]="engine_temp_long_ptr_ptr_5"
    ["pplVar6"]="engine_temp_long_ptr_ptr_6"
    ["pplVar7"]="engine_temp_long_ptr_ptr_7"
    ["pplVar8"]="engine_temp_long_ptr_ptr_8"
    ["pplVar9"]="engine_temp_long_ptr_ptr_9"
)

# 执行替换
for old_name in "${!replacements2[@]}"; do
    new_name="${replacements2[$old_name]}"
    echo "替换: $old_name -> $new_name"
    sed -i "s/\b$old_name\b/$new_name/g" "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
done

echo "第二轮变量名美化完成！"