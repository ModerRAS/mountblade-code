#!/bin/bash

# 批量替换06_utilities.c中的FUN_函数为语义化名称
# 基于函数功能分析创建的有意义函数名

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# ===========================================================================
# ulonglong 类型函数替换
# ===========================================================================

# 资源表操作函数
sed -i 's/FUN_18089b896/GetResourceTableEntryCount/g' 06_utilities.c
sed -i 's/FUN_18089c030/ProcessResourceTableEntry/g' 06_utilities.c
sed -i 's/FUN_18089c2d8/ValidateResourceTableHandle/g' 06_utilities.c
sed -i 's/FUN_18089c630/GetResourceTableIndex/g' 06_utilities.c
sed -i 's/FUN_18089c69d/GetResourceTableStatus/g' 06_utilities.c
sed -i 's/FUN_18089c86d/GetResourceTableCapacity/g' 06_utilities.c
sed -i 's/FUN_18089c872/GetResourceTableSize/g' 06_utilities.c
sed -i 's/FUN_18089c94a/CalculateResourceTableValue/g' 06_utilities.c
sed -i 's/FUN_18089cc80/ProcessResourceTableData/g' 06_utilities.c
sed -i 's/FUN_18089ccb9/GetResourceTableData/g' 06_utilities.c
sed -i 's/FUN_18089ce30/HandleResourceTableOperation/g' 06_utilities.c
sed -i 's/FUN_18089ce60/GetResourceTableOperationStatus/g' 06_utilities.c
sed -i 's/FUN_18089cfd6/ValidateResourceTableOperation/g' 06_utilities.c
sed -i 's/FUN_18089d0f0/ProcessResourceTableRequest/g' 06_utilities.c
sed -i 's/FUN_18089d171/GetResourceTableRequestStatus/g' 06_utilities.c
sed -i 's/FUN_18089d193/ValidateResourceTableRequest/g' 06_utilities.c
sed -i 's/FUN_18089dcf0/HandleResourceTableData/g' 06_utilities.c
sed -i 's/FUN_18089dd54/GetResourceTableDataStatus/g' 06_utilities.c
sed -i 's/FUN_18089dd78/ValidateResourceTableData/g' 06_utilities.c
sed -i 's/FUN_18089dda2/ProcessResourceTableValidation/g' 06_utilities.c
sed -i 's/FUN_18089de39/GetResourceTableValidationStatus/g' 06_utilities.c
sed -i 's/FUN_18089de72/ValidateResourceTableValidation/g' 06_utilities.c

# undefined8 类型函数替换
sed -i 's/FUN_18089dfc1/GetResourceTableHandle/g' 06_utilities.c
sed -i 's/FUN_18089dfe4/GetResourceTableInstance/g' 06_utilities.c
sed -i 's/FUN_18089e043/ValidateResourceTableInstance/g' 06_utilities.c
sed -i 's/FUN_18089e0d0/ProcessResourceTableInstance/g' 06_utilities.c
sed -i 's/FUN_18089e230/HandleResourceTableInstance/g' 06_utilities.c
sed -i 's/FUN_18089e297/GetResourceTableInstanceStatus/g' 06_utilities.c
sed -i 's/FUN_18089e2be/ValidateResourceTableInstance/g' 06_utilities.c
sed -i 's/FUN_18089e2e8/ProcessResourceTableInstanceData/g' 06_utilities.c

echo "06_utilities.c函数美化完成！"