#!/bin/bash

# 网络模块LAB标签美化脚本
# 将LAB_标签替换为语义化名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 美化主要LAB标签
sed -i 's/LAB_NetworkConnectionOperationComplete/LAB_NetworkConnectionCompleteOperation/g' 05_networking.c
sed -i 's/LAB_NetworkConnectionValidationStart/LAB_NetworkConnectionStartValidation/g' 05_networking.c
sed -i 's/LAB_NetworkParameterConfigurationStart/LAB_NetworkParameterStartConfiguration/g' 05_networking.c
sed -i 's/LAB_TimestampUpdateLoop/LAB_TimestampStartUpdate/g' 05_networking.c
sed -i 's/LAB_TimestampComparisonStart/LAB_TimestampStartComparison/g' 05_networking.c
sed -i 's/LAB_ConnectionHandleLoop/LAB_ConnectionHandleStartLoop/g' 05_networking.c
sed -i 's/LAB_ConnectionHandleFailure/LAB_ConnectionHandleFailureState/g' 05_networking.c
sed -i 's/LAB_NetworkOperationComplete/LAB_NetworkCompleteOperation/g' 05_networking.c
sed -i 's/LAB_NetworkContextProcessing/LAB_NetworkStartContextProcessing/g' 05_networking.c
sed -i 's/LAB_NetworkContextValidation/LAB_NetworkStartContextValidation/g' 05_networking.c
sed -i 's/LAB_NetworkStatusCheck/LAB_NetworkStartStatusCheck/g' 05_networking.c

echo "主要LAB标签美化完成"