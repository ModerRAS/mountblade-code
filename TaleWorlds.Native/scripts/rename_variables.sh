#!/bin/bash

# 批量重命名unknown_data变量为render_config_data
sed -i 's/undefined unknown_data_180bf6808;/undefined render_config_data_13;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined unknown_data_180bf6810;/undefined render_config_data_14;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined unknown_data_180bf6818;/undefined render_config_data_15;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined unknown_data_180bf6858;/undefined render_config_data_16;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined unknown_data_180bf6860;/undefined render_config_data_17;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined unknown_data_180bf6868;/undefined render_config_data_18;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined unknown_data_180bf6870;/undefined render_config_data_19;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined unknown_data_180bf68b0;/undefined render_config_data_20;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined unknown_data_180bf68b8;/undefined render_config_data_21;/g' TaleWorlds.Native.dll.c
sed -i 's/undefined unknown_data_180bf68c0;/undefined render_config_data_22;/g' TaleWorlds.Native.dll.c