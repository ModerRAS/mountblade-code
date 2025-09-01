#!/bin/bash

# 渲染系统变量名美化脚本
# 用于美化03_rendering.c文件中的变量名
# 简化实现：仅处理关键变量名的语义化替换
# 原本实现：完整的代码重构和变量名标准化

echo "开始渲染系统变量名美化工作..."

# 处理十六进制常量美化
sed -i 's/RENDER_CONTEXT_OFFSET_QUATERNARY_TEXTURE_SIZE98e220/render_texture_quad_size_primary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_OFFSET_QUATERNARY_TEXTURE_SIZEbf90b0/render_texture_quad_size_secondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_OFFSET_QUATERNARY_TEXTURE_SIZE98e220/render_texture_quad_size_tertiary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_OFFSET_QUATERNARY_TEXTURE_SIZEbf90b8/render_texture_quad_size_quaternary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_OFFSET_QUATERNARY_TEXTURE_SIZEc91910/render_mutex_lock_handle/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_OFFSET_SECONDARY_TEXTURE_SIZE00000/render_shader_flag_mask/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_OFFSET_QUATERNARY_TEXTURE_SIZEa04ebf/render_buffer_offset_primary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_OFFSET_QUATERNARY_TEXTURE_SIZEa1674b/render_buffer_offset_secondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_OFFSET_QUATERNARY_TEXTURE_SIZEa167ff/render_buffer_offset_tertiary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_OFFSET_QUATERNARY_TEXTURE_SIZEa0f3e7/render_buffer_offset_quaternary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_OFFSET_QUATERNARY_TEXTURE_SIZEa16827/render_buffer_offset_quinary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_OFFSET_QUATERNARY_TEXTURE_SIZEa09d7f/render_buffer_offset_senary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_OFFSET_QUATERNARY_TEXTURE_SIZE64e96c/render_stack_offset_primary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_OFFSET_QUATERNARY_TEXTURE_SIZE64e984/render_stack_offset_secondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_OFFSET_QUATERNARY_TEXTURE_SIZE000000/render_zero_offset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_OFFSET_QUATERNARY_TEXTURE_SIZEbf9104/render_float_offset_primary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_OFFSET_QUATERNARY_TEXTURE_SIZEbf9100/render_float_offset_secondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_OFFSET_QUATERNARY_TEXTURE_SIZEbf90f8/render_float_offset_tertiary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_OFFSET_QUATERNARY_TEXTURE_SIZEbf90fc/render_float_offset_quaternary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_OFFSET_QUATERNARY_TEXTURE_SIZEbf90f0/render_float_offset_quinary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_OFFSET_QUATERNARY_TEXTURE_SIZEbf90f4/render_float_offset_senary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 处理标志常量美化
sed -i 's/RENDER_FLAG_ACTIVEffffff/render_max_active_flag/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLAG_SHADER_STATUS_LARGE_0000000/render_shader_status_zero/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLAG_SHADER_STATUS_LARGE_0000003/render_shader_status_mask/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLAG_SHADER_STATUS_LARGE_0000007/render_shader_status_septenary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLAG_ACTIVE0000000/render_zero_flag/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 处理渲染上下文偏移量常量美化
sed -i 's/RENDER_CONTEXT_OFFSET_RENDER_TRANSFORM000000/render_transform_offset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_OFFSET_SECONDARY_TEXTURE_SIZE00001/render_texture_size_increment/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 处理浮点常量美化
sed -i 's/RENDER_FLOAT_NEGATIVE_ONE00000000/render_float_negative_one/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLOAT_VALUE_ONE_POINT_ZERO3e0f5c29/render_float_one_primary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLOAT_VALUE_ONE_POINT_ZERO3ed1eb85/render_float_one_secondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLOAT_VALUE_ONE_POINT_ZERO3e9eb852/render_float_one_tertiary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLOAT_VALUE_ONE_POINT_ZERO3f7ae148/render_float_one_quaternary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLOAT_VALUE_ONE_POINT_ZERO3f028f5c/render_float_one_quinary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLOAT_VALUE_ONE_POINT_ZERO3f6147ae/render_float_one_senary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLOAT_VALUE_ONE_POINT_ZERO3e4ccccd/render_float_one_septenary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLOAT_VALUE_ONE_POINT_ZERO3f1c28f6/render_float_one_octonary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLOAT_VALUE_ONE_POINT_ZERO3eb33333/render_float_one_nona/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLOAT_VALUE_ONE_POINT_ZERO3f400000/render_float_one_denary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLOAT_VALUE_NEGATIVE_ONEffffff0/render_float_negative_one_flag/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 处理特殊标志常量美化
sed -i 's/RENDER_FLAG_ACTIVEf2b851f3f7ae148/render_special_flag_primary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLAG_ACTIVEf07ae143ca3d70a/render_special_flag_secondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLAG_ACTIVEf028f5c3f028f5c/render_special_flag_tertiary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLAG_ACTIVEf47ae143f400000/render_special_flag_quaternary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLAG_ACTIVEf051eb83e75c28f/render_special_flag_quinary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLAG_ACTIVEf7333333f7ae148/render_special_flag_senary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLAG_ACTIVEf07ae143d75c28f/render_special_flag_septenary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLAG_ACTIVEf4ccccd3f7ae148/render_special_flag_octonary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLAG_ACTIVEf1c28f63f1c28f6/render_special_flag_nona/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLAG_ACTIVEf3333333f666666/render_special_flag_denary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLAG_ACTIVEf19999a3f800000/render_special_flag_undenary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_FLAG_ACTIVEf66666600000000/render_special_flag_duodenary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 处理渲染上下文索引常量美化
sed -i 's/RENDER_CONTEXT_INDEX_RENDER_BUFFER73656d/render_buffer_index/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_INDEX_RENDER_SHADER765f6e/render_shader_index_primary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_INDEX_RENDER_SHADER765f72/render_shader_index_secondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_CONTEXT_INDEX_RENDER_CONFIG6f7250/render_config_index/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 处理特殊偏移量常量美化
sed -i 's/RENDER_OFFSET_START_POSITION_ZERO000001/render_zero_offset_primary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_OFFSET_START_POSITION_ZERO000003/render_zero_offset_secondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_OFFSET_START_POSITION_ZERO000000/render_zero_offset_tertiary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/RENDER_HANDLE_OFFSET_COUNT667474/render_handle_count_offset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 处理特殊渲染变换常量美化
sed -i 's/RENDER_CONTEXT_OFFSET_RENDER_TRANSFORMbc7edd/render_transform_special_offset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "渲染系统变量名美化完成"
echo "简化实现：批量替换十六进制常量为语义化变量名"
echo "原本实现：完整的代码重构和变量名标准化系统"