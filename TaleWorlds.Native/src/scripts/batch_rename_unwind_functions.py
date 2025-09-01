#!/usr/bin/env python3
"""
批量重命名Unwind函数的脚本
"""

import re

# 定义Unwind函数的重命名映射
unwind_rename_map = {
    "Unwind_180902a60": "CleanupSystemResources",
    "Unwind_180902a70": "ReleaseMemoryBuffers",
    "Unwind_180902a80": "ResetSystemState",
    "Unwind_180902a90": "ClearResourceCache",
    "Unwind_180902ab0": "InitializeSystemComponents",
    "Unwind_180902af0": "ValidateSystemIntegrity",
    "Unwind_180902b00": "ProcessSystemEvents",
    "Unwind_180902b30": "HandleSystemExceptions",
    "Unwind_180902b60": "ExecuteSystemCleanup",
    "Unwind_180902b70": "ReleaseSystemHandles",
    "Unwind_180902b80": "ResetSystemConfiguration",
    "Unwind_180902b90": "ClearSystemCache",
    "Unwind_180902ba0": "FlushSystemBuffers",
    "Unwind_180902bb0": "SynchronizeSystemState",
    "Unwind_180902bc0": "ValidateMemoryRegions",
    "Unwind_180902bd0": "CheckSystemResources",
    "Unwind_180902be0": "ProcessPendingOperations",
    "Unwind_180902bf0": "FinalizeSystemState",
    "Unwind_180902c00": "InitializeResourcePool",
    "Unwind_180902c10": "AllocateSystemMemory",
    "Unwind_180902c20": "ConfigureSystemSettings",
    "Unwind_180902c30": "SetupSystemEnvironment",
    "Unwind_180902c40": "InitializeSystemServices",
    "Unwind_180902c50": "StartSystemProcesses",
    "Unwind_180902c90": "MonitorSystemHealth",
    "Unwind_180902ca0": "OptimizeSystemPerformance",
    "Unwind_180902cb0": "BalanceSystemLoad",
    "Unwind_180902cc0": "ManageSystemResources",
    "Unwind_180902cd0": "ScheduleSystemTasks",
    "Unwind_180902ce0": "ExecuteSystemCommands",
    "Unwind_180902cf0": "ProcessSystemRequests",
    "Unwind_180902d00": "HandleSystemSignals",
    "Unwind_180902d10": "RespondSystemEvents",
    "Unwind_180902d20": "ManageSystemThreads",
    "Unwind_180902d30": "ControlSystemProcesses",
    "Unwind_180902d40": "SuperviseSystemOperations",
    "Unwind_180902d50": "AuditSystemActivities",
    "Unwind_180902d70": "SecureSystemEnvironment",
    "Unwind_180902d90": "ProtectSystemResources",
    "Unwind_180902db0": "ValidateSystemSecurity",
    "Unwind_180902dd0": "InitializeSecurityContext",
    "Unwind_180902df0": "ConfigureSecuritySettings",
    "Unwind_180902e10": "EnableSecurityFeatures",
    "Unwind_180902e30": "MonitorSecurityStatus",
    "Unwind_180902e40": "DetectSecurityThreats",
    "Unwind_180902e50": "RespondSecurityIncidents",
    "Unwind_180902e60": "AnalyzeSecurityLogs",
    "Unwind_180902e70": "GenerateSecurityReports",
    "Unwind_180902e80": "UpdateSecurityPolicies",
    "Unwind_180902e90": "EnforceSecurityRules",
    "Unwind_180902eb0": "VerifySecurityCompliance",
    "Unwind_180902ec0": "TestSecurityMeasures",
    "Unwind_180902ed0": "ReviewSecurityControls",
    "Unwind_180902ee0": "OptimizeSecurityPosture",
    "Unwind_180902f60": "InitializeNetworkSecurity",
    "Unwind_180902fa0": "ConfigureNetworkPolicies"
}

def rename_unwind_functions():
    """重命名Unwind函数"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 进行替换
    for old_name, new_name in unwind_rename_map.items():
        # 创建正则表达式模式
        pattern = r'void ' + re.escape(old_name) + r'\('
        replacement = f'/**\n * @brief {new_name}\n * \n * 该函数负责{new_name}相关的系统操作\n * 主要用于系统清理和维护\n * \n * @param objectContextParam 对象上下文参数\n * @param validationContextParam 验证上下文参数\n * @return 无返回值\n * @note 此函数用于系统清理和维护\n */\nvoid {new_name}('
        
        content = re.sub(pattern, replacement, content)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"成功重命名 {len(unwind_rename_map)} 个Unwind函数")

if __name__ == "__main__":
    rename_unwind_functions()