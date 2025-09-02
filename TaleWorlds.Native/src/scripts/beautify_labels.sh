#!/bin/bash

# 美化01_initialization.c文件中的标签
# 将LAB_18006f48d等标签美化为语义化的名称

sed -i 's/LAB_18006f48d:/SystemCleanupLoopEnd:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180070230:/SystemMemoryValidationEnd:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180070a3f:/SystemResourceLoopEnd:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180070b00:/SystemResourceCheckEnd:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180070db8:/SystemMemoryAllocationLoop:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180070e64:/SystemMemoryAllocationCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180070ee8:/SystemMemoryProcessingLoop:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180070f81:/SystemMemoryProcessingCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180071000:/SystemThreadProcessingCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_1800710b8:/SystemResourceProcessingCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_18007113f:/SystemResourceValidationCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_1800718e9:/SystemOperationCompletion:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_1800715eb:/SystemIndexProcessing:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180071af3:/SystemThreadValidationLoop:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180071b69:/SystemThreadStatusLoop:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180071c1a:/SystemThreadOperationCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180071c93:/SystemThreadProcessingLoop:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180071d1f:/SystemThreadStatusCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180071d94:/SystemThreadResourceCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180071e34:/SystemResourceFlagCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180071eb0:/SystemOperationStatusCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180072120:/SystemInitializationLoop:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_1800721e1:/SystemResourceHashCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_1800722f5:/SystemControlByteLoop:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180072521:/SystemOperationFlagLoop:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_1800725ac:/SystemFlagValidationLoop:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180072662:/SystemResourceFlagCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_1800726e7:/SystemResourceFlagLoop:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180072780:/SystemResourceAddressCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_1800727ff:/SystemResourceAddressValidation:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_1800728ad:/SystemResourceHashValidation:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180072934:/SystemOperationCodeCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_1800729bd:/SystemResourceAddressFinalCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180075f4f:/SystemFloatValueValidation:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180076feb:/SystemStatusPointerCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_18007738d:/SystemResourceAllocationCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180077fcf:/SystemTabCharacterCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_SystemStatusCheck:/SystemConfigurationStatusCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_SystemStatusSet:/SystemConfigurationStatusSet:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180079c12:/ResourceDataIndexLoop:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180079cd7:/ResourceDataIndexCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180079d9b:/ResourceDataOffsetCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_18007a5ac:/SystemConfigurationNullCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_18007ac04:/SystemConfigurationPointerCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180079e40:/SystemStackPointerCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_180079fb3:/SystemStackValidation:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_18007a203:/SystemThreadHandleCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_18007a142:/SystemThreadHandleValidation:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_18007a312:/SystemIntegerPointerCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_18007a58b:/SystemContextPointerCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_18007b44a:/SystemThreadFlagsCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_18007b454:/SystemThreadFlagsLoop:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_18007b8fd:/SystemMemoryAddressCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_18007eb55:/SystemConfigurationValidation:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_18007f5cb:/SystemDataIndexCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_18007f7cf:/SystemDataCounterCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/LAB_18007f89f:/SystemResourceIndexCheck:/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

echo "标签美化完成"