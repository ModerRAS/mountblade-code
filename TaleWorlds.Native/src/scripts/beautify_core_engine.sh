#!/bin/bash

# 核心引擎文件美化脚本
# 用于批量重命名变量和函数

# 设置文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup.$(date +%s)"

echo "开始美化核心引擎文件..."

# 1. 重命名 FUN_ 函数
echo "重命名 FUN_ 函数..."
sed -i 's/FUN_180041fd0/CoreEngineInitializeDataStreamManager/g' "$FILE_PATH"
sed -i 's/FUN_1800430d0/CoreEngineInitializeSystemConfigNodeG/g' "$FILE_PATH"
sed -i 's/FUN_1800431d0/CoreEngineInitializeSystemDataNodeH/g' "$FILE_PATH"
sed -i 's/FUN_1800432d0/CoreEngineInitializeSystemMemoryPoolA/g' "$FILE_PATH"
sed -i 's/FUN_1800433d0/CoreEngineInitializeSystemMemoryPoolB/g' "$FILE_PATH"
sed -i 's/FUN_1800434d0/CoreEngineInitializeSystemMemoryPoolC/g' "$FILE_PATH"
sed -i 's/FUN_180043690/CoreEngineInitializeSystemThreadManager/g' "$FILE_PATH"
sed -i 's/FUN_180043c30/CoreEngineInitializeSystemEventQueue/g' "$FILE_PATH"
sed -i 's/FUN_180044a50/CoreEngineInitializeSystemResourceLoader/g' "$FILE_PATH"
sed -i 's/FUN_180044dc0/CoreEngineInitializeSystemConfigurationLoader/g' "$FILE_PATH"
sed -i 's/FUN_180045380/CoreEngineInitializeSystemSecurityManager/g' "$FILE_PATH"
sed -i 's/FUN_180046130/CoreEngineProcessDataNode/g' "$FILE_PATH"
sed -i 's/FUN_180046160/CoreEngineProcessDataNodeCleanup/g' "$FILE_PATH"
sed -i 's/FUN_180046190/CoreEngineAllocateDataNode/g' "$FILE_PATH"
sed -i 's/FUN_180046240/CoreEngineValidateDataNode/g' "$FILE_PATH"
sed -i 's/FUN_180046444/CoreEngineInitializeDataNode/g' "$FILE_PATH"
sed -i 's/FUN_180046840/CoreEngineSetupDataNode/g' "$FILE_PATH"
sed -i 's/FUN_180047e40/CoreEngineProcessDataNodeStream/g' "$FILE_PATH"
sed -i 's/FUN_180048ee0/CoreEngineHandleDataNodeOperation/g' "$FILE_PATH"
sed -i 's/FUN_180049470/CoreEngineFinalizeDataNode/g' "$FILE_PATH"
sed -i 's/FUN_1800495d0/CoreEngineValidateDataNodeOperation/g' "$FILE_PATH"
sed -i 's/FUN_180049910/CoreEngineExecuteDataNodeCommand/g' "$FILE_PATH"
sed -i 's/FUN_180049931/CoreEngineFlushDataNodeCache/g' "$FILE_PATH"
sed -i 's/FUN_180049956/CoreEngineResetDataNodeState/g' "$FILE_PATH"
sed -i 's/FUN_180049970/CoreEngineGetDataNodePointer/g' "$FILE_PATH"
sed -i 's/FUN_1800499c0/CoreEngineProcessDataNodeBatch/g' "$FILE_PATH"
sed -i 's/FUN_180049b30/CoreEngineAllocateDataNodeEx/g' "$FILE_PATH"
sed -i 's/FUN_180049bf0/CoreEngineFreeDataNode/g' "$FILE_PATH"
sed -i 's/FUN_180049c70/CoreEngineProcessDataNodeAsync/g' "$FILE_PATH"
sed -i 's/FUN_180049c8f/CoreEngineSynchronizeDataNode/g' "$FILE_PATH"

# 2. 重命名 SUB_ 函数
echo "重命名 SUB_ 函数..."
sed -i 's/SUB_18005d5f0/CoreEngineSystemBufferAllocator/g' "$FILE_PATH"
sed -i 's/SUB_180045af0/CoreEngineSystemBufferDeallocator/g' "$FILE_PATH"

# 3. 重命名其他 FUN_ 函数
echo "重命名其他 FUN_ 函数..."
sed -i 's/FUN_1804ac640/CoreEngineInitializeSystemComponents/g' "$FILE_PATH"
sed -i 's/FUN_180629770/CoreEngineInitializeSystemCore/g' "$FILE_PATH"
sed -i 's/FUN_180767e20/CoreEngineSystemStatusCheck/g' "$FILE_PATH"
sed -i 's/FUN_1807681a0/CoreEngineSystemValidationCheck/g' "$FILE_PATH"
sed -i 's/FUN_1808fc838/CoreEngineInitializeBufferPool/g' "$FILE_PATH"
sed -i 's/FUN_180943070/CoreEngineInitializeNetworkSystem/g' "$FILE_PATH"
sed -i 's/FUN_180943140/CoreEngineInitializeAudioSystem/g' "$FILE_PATH"
sed -i 's/FUN_180943160/CoreEngineInitializePhysicsSystem/g' "$FILE_PATH"
sed -i 's/FUN_180943180/CoreEngineInitializeRenderSystem/g' "$FILE_PATH"
sed -i 's/FUN_180943200/CoreEngineInitializeInputSystem/g' "$FILE_PATH"

# 4. 重命名 param_ 变量
echo "重命名 param_ 变量..."
sed -i 's/param_1/InputParameter/g' "$FILE_PATH"
sed -i 's/param_2/OutputParameter/g' "$FILE_PATH"
sed -i 's/param_3/ConfigurationParameter/g' "$FILE_PATH"
sed -i 's/param_4/StatusParameter/g' "$FILE_PATH"

# 5. 重命名局部变量
echo "重命名局部变量..."
sed -i 's/int iVar1/IntResult/g' "$FILE_PATH"
sed -i 's/int iVar2/IntCounter/g' "$FILE_PATH"
sed -i 's/longlong lVar1/LongResult/g' "$FILE_PATH"
sed -i 's/longlong lVar2/LongValue/g' "$FILE_PATH"
sed -i 's/longlong lVar3/LongBuffer/g' "$FILE_PATH"
sed -i 's/uint uVar1/UIntIndex/g' "$FILE_PATH"
sed -i 's/uint uVar2/UIntCount/g' "$FILE_PATH"
sed -i 's/uint uVar3/UIntFlag/g' "$FILE_PATH"
sed -i 's/uint uVar4/UIntStatus/g' "$FILE_PATH"
sed -i 's/uint uVar5/UIntResult/g' "$FILE_PATH"
sed -i 's/uint uVar6/UIntSize/g' "$FILE_PATH"
sed -i 's/char cVar1/CharStatus/g' "$FILE_PATH"
sed -i 's/char cVar2/CharFlag/g' "$FILE_PATH"
sed -i 's/void \*pvVar1/PointerResult/g' "$FILE_PATH"
sed -i 's/void \*pvVar2/PointerBuffer/g' "$FILE_PATH"
sed -i 's/void \*pvVar3/PointerData/g' "$FILE_PATH"

# 6. 重命名 unaff_ 变量
echo "重命名 unaff_ 变量..."
sed -i 's/unaff_RDI/RegisterRDI/g' "$FILE_PATH"
sed -i 's/unaff_RSI/RegisterRSI/g' "$FILE_PATH"
sed -i 's/unaff_RBP/RegisterRBP/g' "$FILE_PATH"
sed -i 's/unaff_RSP/RegisterRSP/g' "$FILE_PATH"
sed -i 's/unaff_RAX/RegisterRAX/g' "$FILE_PATH"
sed -i 's/unaff_RBX/RegisterRBX/g' "$FILE_PATH"
sed -i 's/unaff_RCX/RegisterRCX/g' "$FILE_PATH"
sed -i 's/unaff_RDX/RegisterRDX/g' "$FILE_PATH"

echo "核心引擎文件美化完成！"
echo "请检查文件内容，确保重命名正确且没有破坏代码逻辑。"