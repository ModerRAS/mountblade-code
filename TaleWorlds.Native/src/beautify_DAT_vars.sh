#!/bin/bash

# 美化06_utilities.c文件中的DAT_变量名
# 将DAT_180c8ed00等变量名改为语义化名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份
cp 06_utilities.c 06_utilities.c.backup.$(date +%s)

# 美化DAT_变量名
sed -i 's/DAT_180c8ed00/SystemDataNode000/g' 06_utilities.c
sed -i 's/DAT_180c8ed50/SystemDataNode001/g' 06_utilities.c
sed -i 's/DAT_180bf0102/SystemStatusByte001/g' 06_utilities.c
sed -i 's/DAT_180c8ed58/SystemDataNode002/g' 06_utilities.c
sed -i 's/DAT_180c8ed48/SystemDataNode003/g' 06_utilities.c
sed -i 's/DAT_180c8ed40/SystemDataNode004/g' 06_utilities.c
sed -i 's/DAT_180c86940/SystemDataNode005/g' 06_utilities.c
sed -i 's/DAT_180c82854/SystemDataNode006/g' 06_utilities.c
sed -i 's/DAT_180c82860/SystemStatusByte002/g' 06_utilities.c
sed -i 's/DAT_180c86920/SystemDataNode007/g' 06_utilities.c
sed -i 's/DAT_180bf52b8/SystemConfigData001/g' 06_utilities.c
sed -i 's/DAT_180bf52bc/SystemConfigData002/g' 06_utilities.c
sed -i 's/DAT_180bf5248/SystemConfigData003/g' 06_utilities.c
sed -i 's/DAT_1809fc7ec/SystemConfigData004/g' 06_utilities.c
sed -i 's/DAT_180bf5240/SystemConfigData005/g' 06_utilities.c
sed -i 's/DAT_180a01440/SystemConfigData006/g' 06_utilities.c
sed -i 's/DAT_180d48d38/SystemDataNode008/g' 06_utilities.c
sed -i 's/DAT_180d48d30/SystemDataNode009/g' 06_utilities.c
sed -i 's/DAT_180d49238/SystemDataNode010/g' 06_utilities.c
sed -i 's/DAT_180d49250/SystemDataNode011/g' 06_utilities.c
sed -i 's/DAT_180d49248/SystemDataNode012/g' 06_utilities.c
sed -i 's/DAT_180d49240/SystemDataNode013/g' 06_utilities.c
sed -i 's/DAT_180d49258/SystemDataNode014/g' 06_utilities.c
sed -i 's/DAT_180d4925c/SystemDataNode015/g' 06_utilities.c
sed -i 's/DAT_180d49648/SystemDataNode016/g' 06_utilities.c
sed -i 's/DAT_180d49640/SystemDataNode017/g' 06_utilities.c
sed -i 's/DAT_180d49650/SystemDataNode018/g' 06_utilities.c
sed -i 's/DAT_180d49638/SystemDataNode019/g' 06_utilities.c
sed -i 's/DAT_180d497d0/SystemDataNode020/g' 06_utilities.c
sed -i 's/DAT_180d49990/SystemDataNode021/g' 06_utilities.c
sed -i 's/DAT_180d48de0/SystemDataNode022/g' 06_utilities.c
sed -i 's/DAT_180d48de8/SystemDataNode023/g' 06_utilities.c
sed -i 's/DAT_180d48df0/SystemDataNode024/g' 06_utilities.c
sed -i 's/DAT_180d48df8/SystemDataNode025/g' 06_utilities.c
sed -i 's/DAT_180d48e00/SystemDataNode026/g' 06_utilities.c
sed -i 's/DAT_180d48e08/SystemDataNode027/g' 06_utilities.c
sed -i 's/DAT_180c918d8/SystemDataNode028/g' 06_utilities.c
sed -i 's/DAT_180d48e10/SystemDataNode029/g' 06_utilities.c
sed -i 's/DAT_180d48e18/SystemDataNode030/g' 06_utilities.c
sed -i 's/DAT_180c918c0/SystemDataNode031/g' 06_utilities.c
sed -i 's/DAT_180d49d08/SystemDataNode032/g' 06_utilities.c
sed -i 's/DAT_180d49bf0/SystemDataNode033/g' 06_utilities.c
sed -i 's/DAT_180d49bf8/SystemDataNode034/g' 06_utilities.c
sed -i 's/DAT_180d49c00/SystemDataNode035/g' 06_utilities.c
sed -i 's/DAT_180d49c08/SystemDataNode036/g' 06_utilities.c
sed -i 's/DAT_180c91038/SystemDataNode037/g' 06_utilities.c
sed -i 's/DAT_180d49d0c/SystemDataNode038/g' 06_utilities.c
sed -i 's/DAT_180d49d10/SystemDataNode039/g' 06_utilities.c
sed -i 's/DAT_180d49d18/SystemDataNode040/g' 06_utilities.c
sed -i 's/DAT_180d49d20/SystemDataNode041/g' 06_utilities.c
sed -i 's/DAT_180d49d28/SystemDataNode042/g' 06_utilities.c
sed -i 's/DAT_180d49d30/SystemDataNode043/g' 06_utilities.c
sed -i 's/DAT_180d49d38/SystemDataNode044/g' 06_utilities.c
sed -i 's/DAT_180d49d40/SystemDataNode045/g' 06_utilities.c
sed -i 's/DAT_180d49d48/SystemDataNode046/g' 06_utilities.c
sed -i 's/DAT_180c8ecd4/SystemDataNode047/g' 06_utilities.c
sed -i 's/DAT_180bfbb50/SystemConfigData007/g' 06_utilities.c
sed -i 's/DAT_180bfbb60/SystemConfigData008/g' 06_utilities.c
sed -i 's/DAT_180bfbb70/SystemConfigData009/g' 06_utilities.c
sed -i 's/DAT_180bfbb80/SystemConfigData010/g' 06_utilities.c
sed -i 's/DAT_180a2de40/SystemDataNode048/g' 06_utilities.c
sed -i 's/DAT_180d49e30/SystemDataNode049/g' 06_utilities.c
sed -i 's/DAT_180c96128/SystemDataNode050/g' 06_utilities.c
sed -i 's/DAT_180c9612c/SystemDataNode051/g' 06_utilities.c
sed -i 's/DAT_180c96410/SystemDataNode052/g' 06_utilities.c
sed -i 's/DAT_180d49ec0/SystemDataNode053/g' 06_utilities.c
sed -i 's/DAT_180d49ec4/SystemDataNode054/g' 06_utilities.c
sed -i 's/DAT_180c9642c/SystemDataNode055/g' 06_utilities.c
sed -i 's/DAT_180c96430/SystemDataNode056/g' 06_utilities.c
sed -i 's/DAT_180c963e8/SystemDataNode057/g' 06_utilities.c
sed -i 's/DAT_180d49f60/SystemDataNode058/g' 06_utilities.c
sed -i 's/DAT_180d49f64/SystemDataNode059/g' 06_utilities.c
sed -i 's/DAT_180c963d4/SystemDataNode060/g' 06_utilities.c
sed -i 's/DAT_180c963dc/SystemDataNode061/g' 06_utilities.c
sed -i 's/DAT_180c963d8/SystemDataNode062/g' 06_utilities.c
sed -i 's/DAT_180c9644c/SystemDataNode063/g' 06_utilities.c
sed -i 's/DAT_180c96450/SystemDataNode064/g' 06_utilities.c
sed -i 's/DAT_180d49128/SystemDataNode065/g' 06_utilities.c
sed -i 's/DAT_180bfbcc0/SystemConfigData011/g' 06_utilities.c
sed -i 's/DAT_180c91d14/SystemStatusByte003/g' 06_utilities.c
sed -i 's/DAT_180c91d18/SystemDataNode066/g' 06_utilities.c
sed -i 's/DAT_180d49ff8/SystemDataNode067/g' 06_utilities.c
sed -i 's/DAT_180c92510/SystemDataNode068/g' 06_utilities.c
sed -i 's/DAT_180c8aa68/SystemStatusByte004/g' 06_utilities.c
sed -i 's/DAT_180bf66d8/SystemDataNode069/g' 06_utilities.c
sed -i 's/DAT_180c96858/SystemDataNode070/g' 06_utilities.c
sed -i 's/DAT_180bfbf64/SystemConfigData012/g' 06_utilities.c
sed -i 's/DAT_180bfbf7c/SystemConfigData013/g' 06_utilities.c
sed -i 's/DAT_180bfbf60/SystemConfigData014/g' 06_utilities.c
sed -i 's/DAT_180bf7308/SystemConfigData015/g' 06_utilities.c
sed -i 's/DAT_180bfbf78/SystemConfigData016/g' 06_utilities.c
sed -i 's/DAT_180bf72a8/SystemConfigData017/g' 06_utilities.c
sed -i 's/DAT_180c8efc8/SystemStatusByte005/g' 06_utilities.c
sed -i 's/DAT_180bfbd80/SystemConfigData018/g' 06_utilities.c
sed -i 's/_DAT_180c4eaa0/SystemValidationData001/g' 06_utilities.c
sed -i 's/_DAT_180c4eaa4/SystemValidationData002/g' 06_utilities.c
sed -i 's/_DAT_180be12f0/SystemMemoryManagerBase/g' 06_utilities.c
sed -i 's/DAT_00000018/SystemNullPointer/g' 06_utilities.c
sed -i 's/DAT_18098bc73/SystemStringConstant001/g' 06_utilities.c
sed -i 's/DAT_180a06434/SystemStringConstant002/g' 06_utilities.c
sed -i 's/DAT_180c8a9b0/SystemGlobalData001/g' 06_utilities.c
sed -i 's/DAT_180d49140/SystemGlobalData002/g' 06_utilities.c
sed -i 's/DAT_180d49148/SystemGlobalData003/g' 06_utilities.c

echo "DAT_变量名美化完成"