#!/bin/bash

# 美化00_data_definitions.h文件中的变量名
# 将通用变量名替换为语义化名称

sed -i 's/piVar1/system_string_length_counter_ptr/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/piVar2/system_int_param_ptr/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/piVar12/system_float_array_ptr/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/sVar1/system_short_char_value/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/sVar10/system_short_compare_value/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/Var4/system_byte_concat_value_4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/Var7/system_byte_concat_value_7/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/Var10/system_byte_concat_value_10/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/Var13/system_byte_concat_value_13/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/Var5/system_byte_concat_value_5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/Var8/system_byte_concat_value_8/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/Var77/system_uint9_concat_value/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/Var9/system_byte_concat_value_9/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h

echo "变量名美化完成"