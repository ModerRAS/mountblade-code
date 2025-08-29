#!/bin/bash

# 美化00_data_definitions.h中的十六进制地址变量名
# 将十六进制地址变量名替换为有意义的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份（以防万一）
cp 00_data_definitions.h 00_data_definitions.h.backup_temp

# 替换十六进制地址变量名为有意义的名称
sed -i 's/data_180bf6698/g_system_name_data/g' 00_data_definitions.h
sed -i 's/data_180bf66c8/g_system_version_data/g' 00_data_definitions.h
sed -i 's/_data_180bf52e8/g_config_string_buffer_ptr/g' 00_data_definitions.h
sed -i 's/_data_180bf52f0/g_config_data_ptr/g' 00_data_definitions.h
sed -i 's/data_180bf5300/g_config_data_value/g' 00_data_definitions.h
sed -i 's/_data_180bf52f8/g_config_resource_type/g' 00_data_definitions.h
sed -i 's/_data_180bf5738/g_savegame_string_buffer_ptr/g' 00_data_definitions.h
sed -i 's/_data_180bf5740/g_savegame_data_ptr/g' 00_data_definitions.h
sed -i 's/data_180bf5750/g_savegame_data_value/g' 00_data_definitions.h
sed -i 's/_data_180bf5748/g_savegame_resource_type/g' 00_data_definitions.h
sed -i 's/data_180bf6768/g_system_config_buffer/g' 00_data_definitions.h
sed -i 's/_data_180bf6760/g_system_config_flags/g' 00_data_definitions.h
sed -i 's/_data_180bf67a8/g_resource_template_ptr_1/g' 00_data_definitions.h
sed -i 's/_data_180bf67b0/g_resource_data_ptr_1/g' 00_data_definitions.h
sed -i 's/_data_180bf67b8/g_resource_type_1/g' 00_data_definitions.h
sed -i 's/_data_180bf6800/g_resource_template_ptr_2/g' 00_data_definitions.h
sed -i 's/_data_180bf6808/g_resource_data_ptr_2/g' 00_data_definitions.h

echo "变量名美化完成"