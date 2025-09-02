#!/bin/bash

# 批量替换DAT_变量的脚本
sed -i 's/_DAT_180d4a7e8 = ValidateUISystemResourceAccess/UISystemResourceAccessValidationFunction = ValidateUISystemResourceAccess/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a7e8 = ValidateUISystemResourceAccessAVX/UISystemResourceAccessValidationFunction = ValidateUISystemResourceAccessAVX/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a7c0 = ProcessUISystemMemoryOperation/UISystemMemoryOperationFunction = ProcessUISystemMemoryOperation/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a7c0 = ProcessUISystemMemoryOperationAVX/UISystemMemoryOperationFunction = ProcessUISystemMemoryOperationAVX/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a788 = ProcessUISystemDataValidation/UISystemDataValidationFunction = ProcessUISystemDataValidation/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a788 = ProcessUISystemDataValidationAVX/UISystemDataValidationFunction = ProcessUISystemDataValidationAVX/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a740 = ProcessUISystemSecurityCheck/UISystemSecurityCheckFunction = ProcessUISystemSecurityCheck/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a740 = ProcessUISystemSecurityCheckAVX/UISystemSecurityCheckFunction = ProcessUISystemSecurityCheckAVX/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a740 = UICheckManager/UISystemSecurityCheckFunction = UICheckManager/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a700 = ProcessUISystemResourceAllocation/UISystemResourceAllocationManager = ProcessUISystemResourceAllocation/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a700 = ProcessUISystemResourceAllocationAVX/UISystemResourceAllocationManager = ProcessUISystemResourceAllocationAVX/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a6e0 = ProcessUISystemMemoryAllocation/UISystemMemoryAllocationFunction = ProcessUISystemMemoryAllocation/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a6e0 = ProcessUISystemMemoryAllocationAVX/UISystemMemoryAllocationFunction = ProcessUISystemMemoryAllocationAVX/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a6b8 = ProcessUISystemBufferManagement/UISystemBufferManagementFunction = ProcessUISystemBufferManagement/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a6b8 = ProcessUISystemBufferManagementAVX/UISystemBufferManagementFunction = ProcessUISystemBufferManagementAVX/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a968 = ProcessUISystemEventHandling/UISystemEventHandlingFunction = ProcessUISystemEventHandling/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a968 = ProcessUISystemEventHandlingAVX/UISystemEventHandlingFunction = ProcessUISystemEventHandlingAVX/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a948 = ProcessUISystemInputProcessing/UISystemInputProcessingFunction = ProcessUISystemInputProcessing/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a948 = ProcessUISystemInputProcessingAVX/UISystemInputProcessingFunction = ProcessUISystemInputProcessingAVX/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a920 = ProcessUISystemStateUpdate/UISystemStateUpdateFunction = ProcessUISystemStateUpdate/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a920 = ProcessUISystemStateUpdateAVX/UISystemStateUpdateFunction = ProcessUISystemStateUpdateAVX/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a8f0 = ProcessUISystemDataBinding/UISystemDataBindingFunction = ProcessUISystemDataBinding/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180d4a8f0 = ProcessUISystemDataBindingAVX/UISystemDataBindingFunction = ProcessUISystemDataBindingAVX/g' TaleWorlds.Native/src/04_ui_system.c

echo "DAT_变量替换完成"