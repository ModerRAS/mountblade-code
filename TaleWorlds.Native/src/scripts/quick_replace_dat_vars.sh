#!/bin/bash

# 简单的变量替换脚本
echo "开始替换变量..."

# 使用sed进行批量替换
sed -i 's/_DAT_180d4a6f0/UIEnvironmentManagerInstance/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a6d8/UIDebugManagerInstance/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a6b0/UIArchiveManagerInstance/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a870/UIValidatorManagerInstance/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a830/UIResourceAllocationCalculator/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a7e8/UIResourceAccessValidator/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a7c0/UIMemoryOperationProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a788/UIDataValidationProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a740/UISecurityCheckProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a700/UIResourceAllocationProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a6e0/UIMemoryAllocationProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a6b8/UIBufferManagementProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a968/UIEventHandlingProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a948/UIInputProcessingProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a920/UIStateUpdateProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a8f0/UIDataBindingProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a8d0/UIThemeSwitcherInstance/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a898/UIThemeRenderingProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a858/UIMemoryPoolIntegrityChecker/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a820/UIMemoryPoolCounterResetter/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a7e0/UIMemoryPoolIndexRebuilder/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a7b0/UIMemoryPoolUsageAnalyzer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a778/UIMemoryPoolMetricsUpdater/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a750/UIMemoryPoolAllocatorInitializer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a708/UIMemoryPoolParameterSetter/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a958/UIReportGenerationProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a928/UIPerformanceAnalysisProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a910/UIPredictionProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a8c0/UIRecommendationProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a8a8/UIAuthenticationManagerInstance/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180c0c1ec/UIInitializationFlag/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180c0c1e8/UISemaphoreCounter/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180c0c1e0/UICriticalSection/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180c0c200/UIRuntimeState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180c0c1fc/UIInitializationState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180c0c1f8/UIReferenceCounter/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180c0c1f0/UILockSection/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

echo "变量替换完成"