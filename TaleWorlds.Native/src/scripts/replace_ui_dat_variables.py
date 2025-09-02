#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
批量替换04_ui_system.c文件中的DAT_变量名
"""

import re

def replace_dat_variables():
    """替换DAT_变量为语义化名称"""
    
    # 定义替换映射
    replacements = {
        '_DAT_180d4a6f8': 'UISystemInputSystemFunctionPointer',
        '_DAT_180d4a8f8': 'UISystemTerminateFunctionPointer',
        '_DAT_180d4a8e0': 'UISystemRenderingDataFunctionPointer',
        '_DAT_180d4a8c8': 'UISystemSecondaryFunctionPointerA',
        '_DAT_180d4a888': 'UISystemSecondaryFunctionPointerB',
        '_DAT_180d4a848': 'UISystemTertiaryFunctionPointerA',
        '_DAT_180d4a828': 'UISystemTertiaryFunctionPointerB',
        '_DAT_180d4a808': 'UISystemQuaternaryFunctionPointerA',
        '_DAT_180d4a7f0': 'UISystemQuaternaryFunctionPointerB',
        '_DAT_180d4a790': 'UISystemQuinaryFunctionPointerA',
        '_DAT_180d4a760': 'UISystemQuinaryFunctionPointerB',
        '_DAT_180d4a728': 'UISystemPermissionManagerFunctionPointer',
        '_DAT_180d4a938': 'UISystemRuleManagerFunctionPointer',
        '_DAT_180d4a8b8': 'UISystemIndexManagerFunctionPointer',
        '_DAT_180d4a860': 'UISystemCacheManagerFunctionPointer',
        '_DAT_180d4a800': 'UISystemStorageManagerFunctionPointer',
        '_DAT_180d4a7c8': 'UISystemBackupManagerFunctionPointer',
        '_DAT_180d4a768': 'UISystemRestoreManagerFunctionPointer',
        '_DAT_180d4a738': 'UISystemMigrationManagerFunctionPointer',
        '_DAT_180d4a720': 'UISystemErrorManagerFunctionPointer',
        '_DAT_180d4a6e8': 'UISystemLogManagerFunctionPointer',
        '_DAT_180d4a6c8': 'UISystemWarningManagerFunctionPointer',
        '_DAT_180d4a6c0': 'UISystemExceptionManagerFunctionPointer',
        '_DAT_180d4a6a0': 'UISystemArchiveManagerFunctionPointer',
        '_DAT_180d4a960': 'UISystemStateManagerFunctionPointer',
        '_DAT_180d4a940': 'UISystemInfoManagerFunctionPointer',
        '_DAT_180d4a908': 'UISystemSyncManagerFunctionPointer',
        '_DAT_180d4a8e8': 'UISystemVersionManagerFunctionPointer',
        '_DAT_180d4a8a0': 'UISystemDiagnosticManagerFunctionPointer',
        '_DAT_180d4a878': 'UISystemHealthCheckManagerFunctionPointer',
        '_DAT_180d4a840': 'UISystemRepairManagerFunctionPointer',
        '_DAT_180d4a818': 'UISystemConfigManagerFunctionPointer',
        '_DAT_180d4a7d8': 'UISystemSettingsManagerFunctionPointer',
        '_DAT_180d4a7a0': 'UISystemEnvironmentManagerFunctionPointer',
        '_DAT_180d4a770': 'UISystemDebugManagerFunctionPointer',
        '_DAT_180d4a6b0': 'UISystemArchiveManagerFunctionPointerSecondary',
        '_DAT_180d4a930': 'UISystemTertiaryFunctionPointerC',
        '_DAT_180d4a900': 'UISystemQuaternaryFunctionPointerC',
        '_DAT_180d4a8d8': 'UISystemQuinaryFunctionPointerC',
        '_DAT_180d4a8b0': 'UISystemSenaryFunctionPointerC',
        '_DAT_180d4a870': 'UISystemSeptenaryFunctionPointerA',
        '_DAT_180d4a830': 'UISystemResourceAllocationFunctionPointer',
        '_DAT_180d4a7e8': 'UISystemResourceAccessFunctionPointer',
        '_DAT_180d4a7c0': 'UISystemMemoryOperationFunctionPointer',
        '_DAT_180d4a788': 'UISystemValidatorManagerFunctionPointer',
        '_DAT_180d4a740': 'UISystemDataBindingManagerFunctionPointer',
        '_DAT_180d4a700': 'UISystemThemeManagerFunctionPointer',
        '_DAT_180d4a6e0': 'UISystemMemoryPoolFunctionPointerA',
        '_DAT_180d4a6b8': 'UISystemMemoryPoolFunctionPointerB',
        '_DAT_180d4a968': 'UISystemSeptenaryFunctionPointerB',
        '_DAT_180d4a948': 'UISystemOctonaryFunctionPointerA',
        '_DAT_180d4a920': 'UISystemOctonaryFunctionPointerB',
        '_DAT_180d4a8f0': 'UISystemMemoryPoolFunctionPointerC',
        '_DAT_180d4a8d0': 'UISystemMemoryPoolFunctionPointerD',
        '_DAT_180d4a898': 'UISystemMemoryPoolFunctionPointerE',
        '_DAT_180d4a858': 'UISystemMemoryPoolFunctionPointerF',
        '_DAT_180d4a820': 'UISystemMemoryPoolFunctionPointerG',
        '_DAT_180d4a7e0': 'UISystemMemoryPoolFunctionPointerH',
        '_DAT_180d4a7b0': 'UISystemReportManagerFunctionPointer',
        '_DAT_180d4a778': 'UISystemAnalysisManagerFunctionPointer',
        '_DAT_180d4a750': 'UISystemPredictManagerFunctionPointer',
        '_DAT_180d4a708': 'UISystemRecommendManagerFunctionPointer',
        '_DAT_180d4a958': 'UISystemAuthenticationManagerFunctionPointer',
        '_DAT_180d4a928': 'UISystemSearchManagerFunctionPointer',
        '_DAT_180d4a910': 'UISystemMemoryPoolFunctionPointerSecondary',
        '_DAT_180d4a8c0': 'UISystemMemoryPoolFunctionPointerTertiary',
        '_DAT_180d4a8a8': 'UISystemMemoryPoolFunctionPointerQuaternary',
        '_DAT_180c0c1ec': 'UISystemCriticalSectionFlag',
        '_DAT_180c0c1e8': 'UISystemCriticalSectionCounter',
        '_DAT_180c0c1e0': 'UISystemCriticalSectionPointer',
        '_DAT_180c0c200': 'UISystemSecondaryCriticalSectionFlag',
        '_DAT_180c0c1fc': 'UISystemSecondaryCriticalSectionFlagSecondary',
        '_DAT_180c0c1f8': 'UISystemSecondaryCriticalSectionCounter',
        '_DAT_180c0c1f0': 'UISystemSecondaryCriticalSectionPointer',
        '_DAT_180946f30': 'UISystemAnimationMultiplyConstant',
        '_DAT_180946f40': 'UISystemAnimationShuffleMaskA',
        '_DAT_180946f70': 'UISystemAnimationShuffleMaskB',
        '_DAT_180946f90': 'UISystemAnimationShuffleMaskC',
        '_DAT_180946fa0': 'UISystemAnimationShuffleMaskD',
        '_DAT_180946f20': 'UISystemAnimationVectorConstantsA',
        '_DAT_180946ed0': 'UISystemAnimationVectorConstantsB',
        '_DAT_180946ec0': 'UISystemAnimationVectorConstantsC',
        '_DAT_180946f10': 'UISystemAnimationVectorConstantsD',
        '_DAT_180946f00': 'UISystemAnimationVectorConstantsE',
        '_DAT_180946ef0': 'UISystemAnimationVectorConstantsF',
        '_DAT_180946ee0': 'UISystemAnimationVectorConstantsG',
        '_DAT_180946f50': 'UISystemAnimationShuffleMaskE',
        '_DAT_180946f60': 'UISystemAnimationShuffleMaskF',
        '_DAT_180946f80': 'UISystemAnimationShuffleMaskG',
        '_DAT_180947040': 'UISystemAnimationVectorConstantsH',
        '_DAT_180947000': 'UISystemAnimationVectorConstantsI',
        '_DAT_180946fe0': 'UISystemAnimationVectorConstantsJ',
        '_DAT_180946fc0': 'UISystemAnimationVectorConstantsSecondary',
        '_DAT_180947060': 'UISystemAnimationShuffleMaskH',
        '_DAT_180947080': 'UISystemAnimationShuffleMaskI',
        '_DAT_1809470a0': 'UISystemAnimationShuffleMaskJ',
        '_DAT_1809470c0': 'UISystemAnimationShuffleMaskK',
        '_DAT_180947510': 'UISystemAnimationMultiplyConstantsA',
        '_DAT_1809473f0': 'UISystemAnimationMultiplyConstantsB',
        '_DAT_180947470': 'UISystemAnimationShuffleMaskL',
        '_DAT_180947370': 'UISystemAnimationShuffleMaskM',
        '_DAT_180947500': 'UISystemAnimationShuffleMaskN'
    }
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 执行替换
    for old_var, new_var in replacements.items():
        content = content.replace(old_var, new_var)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("DAT_变量替换完成")

if __name__ == "__main__":
    replace_dat_variables()