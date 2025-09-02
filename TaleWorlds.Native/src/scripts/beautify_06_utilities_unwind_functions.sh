#!/bin/bash

# 美化06_utilities.c文件中的Unwind函数名
# 这个脚本将批量重命名Unwind_开头的函数为语义化名称

echo "开始美化06_utilities.c文件中的Unwind函数名..."

# 备份原文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup

# 处理有意义的Unwind函数名
echo "处理有意义的Unwind函数名..."

# 系统资源清理相关函数
sed -i 's/void Unwind_SystemResourceCleanupHandler1(/void CleanupSystemResourceHandler(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_SystemResourceCleanupHandler1(/CleanupSystemResourceHandler(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_ResourceHashSecondaryCleanupHandler(/void CleanupResourceHashSecondaryHandler(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_ResourceHashSecondaryCleanupHandler(/CleanupResourceHashSecondaryHandler(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_ResourceOperationProcessor(/void ProcessResourceOperationHandler(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_ResourceOperationProcessor(/ProcessResourceOperationHandler(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 资源注册相关函数
sed -i 's/void Unwind_RegisterResourceHandlerAtOffsetC08(/void RegisterResourceHandlerAtC08(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_RegisterResourceHandlerAtOffsetC08(/RegisterResourceHandlerAtC08(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_ProcessResourceContextAtOffsetC58(/void ProcessResourceContextAtC58(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_ProcessResourceContextAtOffsetC58(/ProcessResourceContextAtC58(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_RegisterResourceHandlerForSystemCleanup(/void RegisterResourceCleanupHandler(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_RegisterResourceHandlerForSystemCleanup(/RegisterResourceCleanupHandler(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_ExecuteResourceTablePointerCleanup(/void ExecuteResourceTableCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_ExecuteResourceTablePointerCleanup(/ExecuteResourceTableCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_RegisterResourceHandlerWithValidation(/void RegisterResourceWithValidation(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_RegisterResourceHandlerWithValidation(/RegisterResourceWithValidation(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_ProcessResourceValidationWithCleanup(/void ProcessResourceWithCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_ProcessResourceValidationWithCleanup(/ProcessResourceWithCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_ValidateResourceContextAndCleanup(/void ValidateResourceAndCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_ValidateResourceContextAndCleanup(/ValidateResourceAndCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 资源表指针清理相关函数
sed -i 's/void Unwind_ExecuteValidationContextResourceCleanup(/void ExecuteValidationResourceCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_ExecuteValidationContextResourceCleanup(/ExecuteValidationResourceCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_ExecuteSecondaryResourceTablePointerCleanup(/void ExecuteSecondaryResourceTableCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_ExecuteSecondaryResourceTablePointerCleanup(/ExecuteSecondaryResourceTableCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_ExecuteTertiaryResourceTablePointerCleanup(/void ExecuteTertiaryResourceTableCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_ExecuteTertiaryResourceTablePointerCleanup(/ExecuteTertiaryResourceTableCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_HandleResourceTablePointerAccessWithCleanup(/void HandleResourceTableAccessWithCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_HandleResourceTablePointerAccessWithCleanup(/HandleResourceTableAccessWithCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 互斥锁销毁相关函数
sed -i 's/void Unwind_DestroyMutex1(/void DestroyPrimaryMutex(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_DestroyMutex1(/DestroyPrimaryMutex(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_DestroyMutex2(/void DestroySecondaryMutex(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_DestroyMutex2(/DestroySecondaryMutex(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_DestroyMutex3(/void DestroyTertiaryMutex(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_DestroyMutex3(/DestroyTertiaryMutex(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_DestroyMutex4(/void DestroyQuaternaryMutex(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_DestroyMutex4(/DestroyQuaternaryMutex(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_DestroyMutex5(/void DestroyQuinaryMutex(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_DestroyMutex5(/DestroyQuinaryMutex(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_DestroyMutex6(/void DestroySenaryMutex(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_DestroyMutex6(/DestroySenaryMutex(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_DestroyMutex7(/void DestroySeptenaryMutex(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_DestroyMutex7(/DestroySeptenaryMutex(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_DestroyMutex8(/void DestroyOctonaryMutex(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_DestroyMutex8(/DestroyOctonaryMutex(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_DestroyMutex9(/void DestroyNonaryMutex(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_DestroyMutex9(/DestroyNonaryMutex(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 资源清理相关函数
sed -i 's/void Unwind_ProcessResourceHashCleanup(/void ProcessResourceHashCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_ProcessResourceHashCleanup(/ProcessResourceHashCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_FinalizeResourceRegistrationAndCleanup(/void FinalizeResourceRegistrationAndCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_FinalizeResourceRegistrationAndCleanup(/FinalizeResourceRegistrationAndCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_ManageResourceTablePointerEntryWithCleanup(/void ManageResourceTableEntryWithCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_ManageResourceTablePointerEntryWithCleanup(/ManageResourceTableEntryWithCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_ProcessResourceOperationWithCleanup(/void ProcessResourceOperationWithCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_ProcessResourceOperationWithCleanup(/ProcessResourceOperationWithCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 其他资源注册相关函数
sed -i 's/void Unwind_RegisterResourceHandlerAtC08(/void RegisterResourceHandlerAtC08(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_RegisterResourceHandlerAtC08(/RegisterResourceHandlerAtC08(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_ExecuteResourceContextCallback(/void ExecuteResourceContextCallback(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_ExecuteResourceContextCallback(/ExecuteResourceContextCallback(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_RegisterResourceHandlerAtC60(/void RegisterResourceHandlerAtC60(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_RegisterResourceHandlerAtC60(/RegisterResourceHandlerAtC60(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_RegisterResourceHandlerAtC68(/void RegisterResourceHandlerAtC68(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_RegisterResourceHandlerAtC68(/RegisterResourceHandlerAtC68(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 资源表指针处理相关函数
sed -i 's/void Unwind_ResourceTablePointerCleanupProcessor(/void ProcessResourceTablePointerCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_ResourceTablePointerCleanupProcessor(/ProcessResourceTablePointerCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_ResourceTablePointerAccessCleanupProcessor(/void ProcessResourceTableAccessCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_ResourceTablePointerAccessCleanupProcessor(/ProcessResourceTableAccessCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_ResourceTablePointerAccessCleanupProcessorAlternate(/void ProcessResourceTableAccessCleanupAlternate(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_ResourceTablePointerAccessCleanupProcessorAlternate(/ProcessResourceTableAccessCleanupAlternate(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 系统互斥锁相关函数
sed -i 's/void Unwind_SystemMutexUnlockHandler(/void UnlockSystemMutexHandler(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_SystemMutexUnlockHandler(/UnlockSystemMutexHandler(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_ResourceHashValidationStatusCodeCleanupHandler(/void CleanupResourceHashValidationHandler(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_ResourceHashValidationStatusCodeCleanupHandler(/CleanupResourceHashValidationHandler(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 资源分配/释放相关函数
sed -i 's/void Unwind_ExecuteResourceAllocationCleanup(/void ExecuteResourceAllocationCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_ExecuteResourceAllocationCleanup(/ExecuteResourceAllocationCleanup(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_ExecuteResourceDeallocationHandler(/void ExecuteResourceDeallocationHandler(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_ExecuteResourceDeallocationHandler(/ExecuteResourceDeallocationHandler(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/void Unwind_ExecuteResourceMemoryRelease(/void ReleaseResourceMemory(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unwind_ExecuteResourceMemoryRelease(/ReleaseResourceMemory(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "有意义的Unwind函数名替换完成!"

# 定义函数名映射
declare -A function_map=(
    ["Unwind_180907040"]="ExecuteValidationContextCleanup"
    ["Unwind_180907110"]="ProcessResourceTableCleanup"
    ["Unwind_180907120"]="ExecuteResourceTableCleanupExtended"
    ["Unwind_180907130"]="ResetSystemInitializationState"
    ["Unwind_180907140"]="ProcessResourceOperationFlagReset"
    ["Unwind_180907170"]="ExecuteContextCleanupHandler"
    ["Unwind_180907180"]="ExecuteResourceCleanupHandler"
    ["Unwind_180907190"]="ExecuteSecondaryResourceCleanupHandler"
    ["Unwind_1809071a0"]="ExecuteTertiaryResourceCleanupHandler"
    ["Unwind_1809071b0"]="ExecuteQuaternaryResourceCleanupHandler"
    ["Unwind_1809071c0"]="ExecuteResourceCleanupWithFlags"
    ["Unwind_1809071d0"]="ExecuteExtendedResourceCleanupWithFlags"
    ["Unwind_1809071e0"]="ValidateResourceContextHandler"
    ["Unwind_1809071f0"]="ProcessResourceValidationHandler"
    ["Unwind_180907200"]="ExecuteResourceValidationHandler"
    ["Unwind_180907210"]="ExecuteSecondaryResourceValidationHandler"
    ["Unwind_180907230"]="ExecuteTertiaryResourceValidationHandler"
    ["Unwind_180907250"]="ExecuteQuaternaryResourceValidationHandler"
    ["Unwind_180907270"]="ExecuteResourceReleaseHandler"
    ["Unwind_180907280"]="ExecuteSecondaryResourceReleaseHandler"
    ["Unwind_180907290"]="ExecuteTertiaryResourceReleaseHandler"
    ["Unwind_1809072a0"]="ExecuteQuaternaryResourceReleaseHandler"
    ["Unwind_1809072c0"]="ExecuteResourceCleanupExtendedHandler"
    ["Unwind_1809072e0"]="ExecuteSecondaryResourceCleanupExtendedHandler"
    ["Unwind_180907300"]="ExecuteTertiaryResourceCleanupExtendedHandler"
    ["Unwind_180907310"]="ExecuteQuaternaryResourceCleanupExtendedHandler"
    ["Unwind_180907320"]="ExecuteResourceResetHandler"
    ["Unwind_180907330"]="ExecuteSecondaryResourceResetHandler"
    ["Unwind_180907340"]="ExecuteTertiaryResourceResetHandler"
    ["Unwind_180907350"]="ExecuteQuaternaryResourceResetHandler"
    ["Unwind_180907360"]="ExecuteResourceFinalizeHandler"
    ["Unwind_180907370"]="ExecuteSecondaryResourceFinalizeHandler"
    ["Unwind_180907380"]="ExecuteTertiaryResourceFinalizeHandler"
    ["Unwind_180907390"]="ExecuteQuaternaryResourceFinalizeHandler"
    ["Unwind_1809073a0"]="ExecuteResourceCleanupFinalHandler"
    ["Unwind_1809073b0"]="ExecuteSecondaryResourceCleanupFinalHandler"
    ["Unwind_1809073c0"]="ExecuteTertiaryResourceCleanupFinalHandler"
    ["Unwind_1809073d0"]="ExecuteQuaternaryResourceCleanupFinalHandler"
    ["Unwind_1809073e0"]="ExecuteResourceValidationFinalHandler"
    ["Unwind_1809073f0"]="ExecuteSecondaryResourceValidationFinalHandler"
    ["Unwind_180907400"]="ExecuteTertiaryResourceValidationFinalHandler"
    ["Unwind_180907430"]="ExecuteQuaternaryResourceValidationFinalHandler"
    ["Unwind_180907440"]="ExecuteResourceReleaseFinalHandler"
    ["Unwind_1809074d0"]="ExecuteSecondaryResourceReleaseFinalHandler"
    ["Unwind_1809074e0"]="ExecuteTertiaryResourceReleaseFinalHandler"
    ["Unwind_1809074f0"]="ExecuteQuaternaryResourceReleaseFinalHandler"
    ["Unwind_180907500"]="ExecuteResourceResetFinalHandler"
    ["Unwind_180907530"]="ExecuteSecondaryResourceResetFinalHandler"
    ["Unwind_180907540"]="ExecuteTertiaryResourceResetFinalHandler"
    ["Unwind_180907550"]="ExecuteQuaternaryResourceResetFinalHandler"
    ["Unwind_180907560"]="ExecuteResourceOperationFinalHandler"
    ["Unwind_180907570"]="ExecuteSecondaryResourceOperationFinalHandler"
    ["Unwind_180907580"]="ExecuteTertiaryResourceOperationFinalHandler"
    ["Unwind_180907590"]="ExecuteQuaternaryResourceOperationFinalHandler"
    ["Unwind_1809075a0"]="ExecuteResourceCleanupOperationHandler"
    ["Unwind_1809075b0"]="ExecuteSecondaryResourceCleanupOperationHandler"
    ["Unwind_1809075c0"]="ExecuteTertiaryResourceCleanupOperationHandler"
    ["Unwind_1809075d0"]="ExecuteQuaternaryResourceCleanupOperationHandler"
    ["Unwind_1809075e0"]="ExecuteResourceValidationOperationHandler"
    ["Unwind_1809075f0"]="ExecuteSecondaryResourceValidationOperationHandler"
    ["Unwind_180907610"]="ExecuteTertiaryResourceValidationOperationHandler"
    ["Unwind_180907620"]="ExecuteQuaternaryResourceValidationOperationHandler"
    ["Unwind_180907630"]="ExecuteResourceReleaseOperationHandler"
    ["Unwind_180907640"]="ExecuteSecondaryResourceReleaseOperationHandler"
    ["Unwind_180907670"]="ExecuteTertiaryResourceReleaseOperationHandler"
    ["Unwind_1809076a0"]="ExecuteQuaternaryResourceReleaseOperationHandler"
    ["Unwind_1809076b0"]="ExecuteResourceResetOperationHandler"
    ["Unwind_1809076c0"]="ExecuteSecondaryResourceResetOperationHandler"
    ["Unwind_1809076d0"]="ExecuteTertiaryResourceResetOperationHandler"
    ["Unwind_1809076e0"]="ExecuteQuaternaryResourceResetOperationHandler"
    ["Unwind_1809076f0"]="ExecuteResourceFinalizeOperationHandler"
    ["Unwind_180907700"]="ExecuteSecondaryResourceFinalizeOperationHandler"
    ["Unwind_180907710"]="ExecuteTertiaryResourceFinalizeOperationHandler"
    ["Unwind_180907720"]="ExecuteQuaternaryResourceFinalizeOperationHandler"
    ["Unwind_180907750"]="ExecuteResourceCleanupExtendedOperationHandler"
    ["Unwind_180907780"]="ResetSystemEventState"
    ["Unwind_180907790"]="ResetSecondarySystemEventState"
    ["Unwind_1809077a0"]="ResetTertiarySystemEventState"
    ["Unwind_1809077b0"]="ResetQuaternarySystemEventState"
    ["Unwind_1809077c0"]="ResetQuinarySystemEventState"
    ["Unwind_1809077d0"]="ResetSenarySystemEventState"
    ["Unwind_180907860"]="ExecuteResourceCleanupWithParameters"
    ["Unwind_180907880"]="ExecuteResourceCleanupHandler"
    ["Unwind_1809078a0"]="ExecuteSecondaryResourceCleanupHandler"
    ["Unwind_1809078b0"]="ExecuteResourceCleanupWithFlagsExtended"
    ["Unwind_1809078c0"]="ExecuteSecondaryResourceCleanupWithFlagsExtended"
    ["Unwind_1809078d0"]="ExecuteTertiaryResourceCleanupWithFlagsExtended"
    ["Unwind_1809078e0"]="ExecuteQuaternaryResourceCleanupWithFlagsExtended"
    ["Unwind_1809078f0"]="ExecuteQuinaryResourceCleanupWithFlagsExtended"
    ["Unwind_180907900"]="ExecuteSenaryResourceCleanupWithFlagsExtended"
    ["Unwind_180907910"]="ExecuteSeptenaryResourceCleanupWithFlagsExtended"
    ["Unwind_180907920"]="ExecuteResourceValidationHandler"
    ["Unwind_180907930"]="ExecuteSecondaryResourceValidationHandler"
    ["Unwind_180907940"]="ExecuteResourceValidationWithFlagsExtended"
    ["Unwind_180907950"]="ExecuteSecondaryResourceValidationWithFlagsExtended"
    ["Unwind_180907960"]="ExecuteTertiaryResourceValidationHandler"
    ["Unwind_180907970"]="ExecuteQuaternaryResourceValidationHandler"
    ["Unwind_180907980"]="ExecuteQuinaryResourceValidationHandler"
    ["Unwind_180907990"]="ExecuteSenaryResourceValidationHandler"
    ["Unwind_1809079a0"]="ExecuteSeptenaryResourceValidationHandler"
    ["Unwind_1809079b0"]="ExecuteOctonaryResourceValidationHandler"
    ["Unwind_180907a50"]="ExecuteResourceReleaseOperation"
    ["Unwind_180907a60"]="ExecuteSecondaryResourceReleaseOperation"
    ["Unwind_180907a70"]="ExecuteResourceReleaseWithFlags"
    ["Unwind_180907a80"]="ExecuteSecondaryResourceReleaseWithFlags"
    ["Unwind_180907a90"]="ExecuteTertiaryResourceReleaseOperation"
    ["Unwind_180907c30"]="ExecuteResourceCleanupWithParametersExtended"
    ["Unwind_180907c60"]="ExecuteResourceCleanupOperationExtended"
    ["Unwind_180907c80"]="ExecuteSecondaryResourceCleanupOperationExtended"
    ["Unwind_180907c90"]="ExecuteResourceCleanupWithFlagsExtendedOperation"
    ["Unwind_180907ca0"]="ExecuteSecondaryResourceCleanupWithFlagsExtendedOperation"
    ["Unwind_180907cb0"]="ExecuteTertiaryResourceCleanupWithFlagsExtendedOperation"
    ["Unwind_180907cc0"]="ExecuteQuaternaryResourceCleanupWithFlagsExtendedOperation"
    ["Unwind_180907cd0"]="ExecuteQuinaryResourceCleanupWithFlagsExtendedOperation"
    ["Unwind_180907ce0"]="ExecuteSenaryResourceCleanupWithFlagsExtendedOperation"
    ["Unwind_180907cf0"]="ExecuteSeptenaryResourceCleanupWithFlagsExtendedOperation"
    ["Unwind_180907d00"]="ExecuteOctonaryResourceCleanupWithFlagsExtendedOperation"
    ["Unwind_180907d10"]="ExecuteResourceValidationWithParametersExtended"
    ["Unwind_180907d20"]="ExecuteSecondaryResourceValidationWithParametersExtended"
    ["Unwind_180907d30"]="ExecuteTertiaryResourceValidationOperationExtended"
    ["Unwind_180907d40"]="ExecuteQuaternaryResourceValidationOperationExtended"
    ["Unwind_180907d50"]="ExecuteQuinaryResourceValidationOperationExtended"
    ["Unwind_180907d80"]="ExecuteSenaryResourceValidationOperationExtended"
    ["Unwind_180907db0"]="ExecuteSeptenaryResourceValidationOperationExtended"
    ["Unwind_180907dc0"]="ExecuteOctonaryResourceValidationOperationExtended"
    ["Unwind_180907dd0"]="ExecuteResourceReleaseOperationExtended"
    ["Unwind_180907e00"]="ExecuteSecondaryResourceReleaseOperationExtended"
    ["Unwind_180907e30"]="ExecuteTertiaryResourceReleaseOperationExtended"
    ["Unwind_180907e40"]="ExecuteQuaternaryResourceReleaseOperationExtended"
    ["Unwind_180907e50"]="ExecuteResourceReleaseWithFlagsExtended"
    ["Unwind_180907e60"]="ExecuteSecondaryResourceReleaseWithFlagsExtended"
    ["Unwind_180907e70"]="ExecuteTertiaryResourceReleaseWithFlagsExtended"
    ["Unwind_180907e80"]="ExecuteQuaternaryResourceReleaseWithFlagsExtended"
    ["Unwind_180907e90"]="ExecuteQuinaryResourceReleaseOperationExtended"
    ["Unwind_180907ea0"]="ExecuteSenaryResourceReleaseOperationExtended"
    ["Unwind_180907eb0"]="ExecuteSeptenaryResourceReleaseOperationExtended"
    ["Unwind_180907ec0"]="ExecuteOctonaryResourceReleaseOperationExtended"
    ["Unwind_180907ed0"]="ExecuteResourceCleanupFinalOperationExtended"
    ["Unwind_180907ee0"]="ExecuteSecondaryResourceCleanupFinalOperationExtended"
    ["Unwind_180907ef0"]="ExecuteTertiaryResourceCleanupFinalOperationExtended"
    ["Unwind_180907f00"]="ExecuteQuaternaryResourceCleanupFinalOperationExtended"
    ["Unwind_180907f10"]="ExecuteQuinaryResourceCleanupFinalOperationExtended"
    ["Unwind_180907f20"]="ExecuteResourceValidationFinalOperationExtended"
    ["Unwind_180907f40"]="ExecuteSecondaryResourceValidationFinalOperationExtended"
    ["Unwind_180907f60"]="ExecuteTertiaryResourceValidationFinalOperationExtended"
    ["Unwind_180907f70"]="ExecuteQuaternaryResourceValidationFinalOperationExtended"
    ["Unwind_180907f80"]="ExecuteQuinaryResourceValidationFinalOperationExtended"
    ["Unwind_180907fb0"]="ExecuteSenaryResourceValidationFinalOperationExtended"
    ["Unwind_180907fe0"]="ExecuteSeptenaryResourceValidationFinalOperationExtended"
    ["Unwind_180907ff0"]="ExecuteResourceReleaseFinalOperationExtended"
    ["Unwind_180908000"]="ExecuteSecondaryResourceReleaseFinalOperationExtended"
    ["Unwind_180908010"]="ExecuteResourceCleanupWithParametersFinalExtended"
    ["Unwind_180908020"]="ExecuteSecondaryResourceCleanupWithParametersFinalExtended"
    ["Unwind_180908030"]="ExecuteTertiaryResourceCleanupOperationFinalExtended"
    ["Unwind_180908040"]="ResetSystemResourceState"
    ["Unwind_180908050"]="ExecuteResourceCleanupWithParametersFinal"
    ["Unwind_180908060"]="ResetSecondarySystemResourceState"
    ["Unwind_180908070"]="ResetTertiarySystemResourceState"
    ["Unwind_180908080"]="ProcessResourceExceptionHandler"
    ["Unwind_1809080a0"]="ExecuteResourceCleanupWithExceptionHandler"
    ["Unwind_1809080b0"]="ExecuteSecondaryResourceCleanupWithExceptionHandler"
    ["Unwind_1809080c0"]="ExecuteTertiaryResourceCleanupWithExceptionHandler"
    ["Unwind_1809080d0"]="ExecuteQuaternaryResourceCleanupWithExceptionHandler"
    ["Unwind_1809080e0"]="ExecuteQuinaryResourceCleanupWithExceptionHandler"
    ["Unwind_1809080f0"]="ExecuteSenaryResourceCleanupWithExceptionHandler"
    ["Unwind_180908100"]="ExecuteSeptenaryResourceCleanupWithExceptionHandler"
    ["Unwind_180908110"]="ExecuteOctonaryResourceCleanupWithExceptionHandler"
    ["Unwind_180908120"]="ExecuteResourceValidationWithExceptionHandler"
    ["Unwind_180908130"]="ExecuteSecondaryResourceValidationWithExceptionHandler"
    ["Unwind_180908140"]="ExecuteTertiaryResourceValidationWithExceptionHandler"
    ["Unwind_180908150"]="ExecuteResourceCleanupWithFlagsExceptionHandler"
    ["Unwind_180908160"]="ExecuteSecondaryResourceCleanupWithFlagsExceptionHandler"
    ["Unwind_180908170"]="ExecuteTertiaryResourceCleanupWithFlagsExceptionHandler"
    ["Unwind_180908180"]="ExecuteQuaternaryResourceCleanupWithFlagsExceptionHandler"
    ["Unwind_180908190"]="ExecuteQuinaryResourceCleanupWithFlagsExceptionHandler"
    ["Unwind_180908210"]="ExecuteResourceCleanupFinalWithExceptionHandler"
    ["Unwind_180908220"]="ProcessResourceCatchHandler"
    ["Unwind_180908240"]="ProcessSecondaryResourceCatchHandler"
    ["Unwind_180908270"]="ProcessTertiaryResourceCatchHandler"
    ["Unwind_180908290"]="ProcessQuaternaryResourceCatchHandler"
    ["Unwind_1809082c0"]="ExecuteResourceCleanupAfterCatch"
    ["Unwind_1809085d0"]="ExecuteSystemResourceCleanupHandler"
    ["Unwind_180908600"]="ExecuteSecondarySystemResourceCleanupHandler"
    ["Unwind_180908630"]="ExecuteTertiarySystemResourceCleanupHandler"
    ["Unwind_180908650"]="ExecuteQuaternarySystemResourceCleanupHandler"
    ["Unwind_180908660"]="ExecuteQuinarySystemResourceCleanupHandler"
    ["Unwind_180908670"]="ExecuteSenarySystemResourceCleanupHandler"
    ["Unwind_180908690"]="ExecuteSeptenarySystemResourceCleanupHandler"
    ["Unwind_1809086b0"]="ExecuteOctonarySystemResourceCleanupHandler"
    ["Unwind_1809086d0"]="ExecuteResourceCleanupSystemHandler"
    ["Unwind_180908710"]="ExecuteSecondaryResourceCleanupSystemHandler"
    ["Unwind_180908730"]="ExecuteTertiaryResourceCleanupSystemHandler"
    ["Unwind_180908750"]="ResetSystemResourceHandlerState"
    ["Unwind_180908760"]="ExecuteSystemResourceHandlerCleanup"
    ["Unwind_180908770"]="ExecuteSecondarySystemResourceHandlerCleanup"
    ["Unwind_1809087d0"]="ExecuteSystemResourceHandlerCleanupExtended"
    ["Unwind_180908800"]="ExecuteSecondarySystemResourceHandlerCleanupExtended"
    ["Unwind_180908810"]="ExecuteTertiarySystemResourceHandlerCleanupExtended"
    ["Unwind_180908820"]="ExecuteQuaternarySystemResourceHandlerCleanupExtended"
)

# 遍历函数映射并执行替换
for old_name in "${!function_map[@]}"; do
    new_name="${function_map[$old_name]}"
    echo "替换函数名: $old_name -> $new_name"
    
    # 使用sed进行替换
    sed -i "s/void $old_name(/void $new_name(/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
    sed -i "s/($old_name(/($new_name(/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
done

echo "函数名替换完成!"

# 清理备份文件
rm -f /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup

echo "06_utilities.c文件美化完成!"