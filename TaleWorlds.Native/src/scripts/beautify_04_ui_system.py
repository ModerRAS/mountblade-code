#!/usr/bin/env python3
"""
美化04_ui_system.c文件中的变量名
替换_DAT_变量名为语义化名称
"""

import re

def beautify_ui_system_variables():
    """美化UI系统文件中的变量名"""
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义_DAT_变量名映射
    dat_variable_mapping = {
        "_DAT_180d4a7d8": "UIRestoreManagerInstance",
        "_DAT_180d4a7a0": "UIConfigManagerInstance",
        "_DAT_180d4a770": "UISettingsManagerInstance",
        "_DAT_180d4a6f0": "UIEnvironmentManagerInstance",
        "_DAT_180d4a6d8": "UIDebugManagerInstance",
        "_DAT_180d4a6b0": "UIArchiveManagerInstance",
        "_DAT_180d4a870": "UIValidatorManagerInstance",
        "_DAT_180d4a830": "UIResourceAllocationCalculator",
        "_DAT_180d4a7e8": "UIResourceAccessValidator",
        "_DAT_180d4a7c0": "UIMemoryOperationProcessor",
        "_DAT_180d4a788": "UIDataValidationProcessor",
        "_DAT_180d4a740": "UISecurityCheckProcessor",
        "_DAT_180d4a700": "UIResourceAllocationProcessor",
        "_DAT_180d4a6e0": "UIMemoryAllocationProcessor",
        "_DAT_180d4a6b8": "UIBufferManagementProcessor",
        "_DAT_180d4a968": "UIEventHandlingProcessor",
        "_DAT_180d4a948": "UIInputProcessingProcessor",
        "_DAT_180d4a920": "UIStateUpdateProcessor",
        "_DAT_180d4a8f0": "UIDataBindingProcessor",
        "_DAT_180d4a8d0": "UIThemeSwitcherInstance",
        "_DAT_180d4a898": "UIThemeRenderingProcessor",
        "_DAT_180d4a858": "UIMemoryPoolIntegrityChecker",
        "_DAT_180d4a820": "UIMemoryPoolCounterResetter",
        "_DAT_180d4a7e0": "UIMemoryPoolIndexRebuilder",
        "_DAT_180d4a7b0": "UIMemoryPoolUsageAnalyzer",
        "_DAT_180d4a778": "UIMemoryPoolMetricsUpdater",
        "_DAT_180d4a750": "UIMemoryPoolAllocatorInitializer",
        "_DAT_180d4a708": "UIMemoryPoolParameterSetter",
        "_DAT_180d4a958": "UIReportGenerationProcessor",
        "_DAT_180d4a928": "UIPerformanceAnalysisProcessor",
        "_DAT_180d4a910": "UIPredictionProcessor",
        "_DAT_180d4a8c0": "UIRecommendationProcessor",
        "_DAT_180d4a8a8": "UIAuthenticationManagerInstance",
        "_DAT_180c0c1ec": "UIInitializationFlag",
        "_DAT_180c0c1e8": "UISemaphoreCounter",
        "_DAT_180c0c1e0": "UICriticalSection",
        "_DAT_180c0c200": "UIRuntimeState",
        "_DAT_180c0c1fc": "UIInitializationState",
        "_DAT_180c0c1f8": "UIReferenceCounter",
        "_DAT_180c0c1f0": "UILockSection"
    }
    
    # 替换_DAT_变量名
    for old_name, new_name in dat_variable_mapping.items():
        content = content.replace(old_name, new_name)
        print(f"替换 {old_name} -> {new_name}")
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("变量名美化完成")

if __name__ == "__main__":
    beautify_ui_system_variables()