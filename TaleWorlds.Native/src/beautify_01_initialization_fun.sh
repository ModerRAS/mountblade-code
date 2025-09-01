#!/bin/bash

# 美化01_initialization.c文件中的FUN_函数名
# 这个脚本将FUN_开头的函数名替换为有意义的名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 替换FUN_函数名为有意义的名称
# 使用sed命令进行替换
sed -i 's/FUN_180627c50/SystemDataInitializer/g' "$FILE_PATH"
sed -i 's/FUN_180048a90/SystemDataProcessor/g' "$FILE_PATH"
sed -i 's/FUN_1800491b0/SystemMemoryBatchInitializer/g' "$FILE_PATH"
sed -i 's/FUN_180047fc0/SystemControllerInitializer/g' "$FILE_PATH"
sed -i 's/FUN_180627be0/SystemReferenceSetter/g' "$FILE_PATH"
sed -i 's/FUN_180627ae0/SystemParameterConfigurator/g' "$FILE_PATH"
sed -i 's/FUN_180624a00/SystemStatusChecker/g' "$FILE_PATH"
sed -i 's/FUN_180624910/SystemStatusResetter/g' "$FILE_PATH"
sed -i 's/FUN_180097d40/SystemResourceManager/g' "$FILE_PATH"
sed -i 's/FUN_180095480/SystemScaleFactorCalculator/g' "$FILE_PATH"
sed -i 's/FUN_180095720/SystemOffsetCalculator/g' "$FILE_PATH"
sed -i 's/FUN_180623ce0/SystemTimestampGetter/g' "$FILE_PATH"
sed -i 's/FUN_180629a40/SystemConfigDataProcessor/g' "$FILE_PATH"
sed -i 's/FUN_180046b80/SystemDataValidator/g' "$FILE_PATH"
sed -i 's/FUN_180046890/SystemDataChecker/g' "$FILE_PATH"
sed -i 's/FUN_1800adba0/SystemApplicationProcessor/g' "$FILE_PATH"
sed -i 's/FUN_18005c650/SystemCommandProcessor/g' "$FILE_PATH"
sed -i 's/FUN_1806277c0/SystemDataWriter/g' "$FILE_PATH"
sed -i 's/FUN_18062c1e0/SystemFlagSetter/g' "$FILE_PATH"
sed -i 's/FUN_18062dee0/SystemNodeLinker/g' "$FILE_PATH"
sed -i 's/FUN_1800ae730/SystemNodeManager/g' "$FILE_PATH"
sed -i 's/FUN_180049b30/SystemMemoryCopier/g' "$FILE_PATH"
sed -i 's/FUN_180048cc0/SystemMemoryNodeFinder/g' "$FILE_PATH"
sed -i 's/FUN_180048ee0/SystemMemoryNodeProcessor/g' "$FILE_PATH"
sed -i 's/FUN_180049010/SystemResourceAllocator/g' "$FILE_PATH"
sed -i 's/FUN_180049110/SystemResourceCreator/g' "$FILE_PATH"
sed -i 's/FUN_18066bdc0/SystemThreadObjectCreator/g' "$FILE_PATH"
sed -i 's/FUN_180049770/SystemSyncObjectInitializer/g' "$FILE_PATH"
sed -i 's/FUN_1800499c0/SystemStringProcessor/g' "$FILE_PATH"
sed -i 's/FUN_180049b30/SystemMemoryAllocatorInitializer/g' "$FILE_PATH"

echo "FUN_函数名美化完成"