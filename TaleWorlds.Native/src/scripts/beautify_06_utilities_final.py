#!/usr/bin/env python3
"""
批量美化06_utilities.c文件中的Unwind_函数
"""

import re

def beautify_unwind_functions():
    """美化Unwind_函数名"""
    
    # 函数映射表
    function_mappings = {
        'Unwind_180906b20': 'ExecuteSystemContextCleanup',
        'Unwind_180906b30': 'ExecuteExtendedResourceCleanup',
        'Unwind_180906b40': 'ExecuteMemoryResourceCleanup',
        'Unwind_180906b50': 'ExecuteThreadResourceCleanup',
        'Unwind_180906b60': 'ExecuteSystemResourceCleanup',
        'Unwind_180906b70': 'ExecuteValidationResourceCleanup',
        'Unwind_180906ba0': 'ExecutePrimaryResourceHandler',
        'Unwind_180906bb0': 'ExecuteSecondaryResourceHandler',
        'Unwind_180906bc0': 'ExecuteTertiaryResourceHandler',
        'Unwind_180906bd0': 'ExecuteQuaternaryResourceHandler',
        'Unwind_180906be0': 'ExecuteFinalResourceHandler',
        'Unwind_180906bf0': 'ExecuteEmergencyResourceHandler',
        'Unwind_180906c00': 'ExecuteSystemDataHandler',
        'Unwind_180906c10': 'ExecuteSystemConfigurationHandler',
        'Unwind_180906c20': 'ExecuteSystemValidationHandler',
        'Unwind_180906c30': 'ExecuteSystemCleanupHandler',
        'Unwind_180906c40': 'ExecuteSystemInitializationHandler',
        'Unwind_180906c50': 'ExecuteSystemFinalizationHandler',
        'Unwind_180906c60': 'ExecuteSystemErrorHandler',
        'Unwind_180906c70': 'ExecuteSystemRecoveryHandler',
        'Unwind_180906c80': 'ExecuteSystemMaintenanceHandler',
        'Unwind_180906c90': 'ExecuteSystemOptimizationHandler',
        'Unwind_180906ca0': 'ExecuteSystemMonitoringHandler',
        'Unwind_180906cb0': 'ExecuteSystemLoggingHandler',
        'Unwind_180906cc0': 'ExecuteSystemReportingHandler',
        'Unwind_180906cd0': 'ExecuteSystemAuditingHandler',
        'Unwind_180906ce0': 'ExecuteSystemSecurityHandler',
        'Unwind_180906cf0': 'ExecuteSystemPerformanceHandler'
    }
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 批量替换函数名
    for old_name, new_name in function_mappings.items():
        # 查找函数定义
        pattern = rf'void {old_name}\(([^)]*)\)'
        match = re.search(pattern, content)
        if match:
            # 创建新的函数定义
            params = match.group(1)
            new_function_def = f'''/**
 * @brief {new_name.replace('Execute', '').replace('Handler', '').replace('Cleanup', '清理')}
 * 
 * 该函数负责{new_name.replace('Execute', '').replace('Handler', '处理').replace('Cleanup', '清理')}
 * 确保系统在异常情况下能够正确处理相关资源
 * 
 * @param ObjectContext 对象上下文参数
 * @param ValidationContext 验证上下文参数
 * @return 无返回值
 */
void {new_name}({params})'''
            
            # 替换函数定义
            content = re.sub(pattern, new_function_def, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("函数美化完成")

if __name__ == "__main__":
    beautify_unwind_functions()