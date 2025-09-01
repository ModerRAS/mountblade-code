#!/bin/bash

# 批量重命名UI系统函数的脚本
# 将UserInterfaceSystem前缀简化为UI

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原文件
cp 04_ui_system.c 04_ui_system.c.backup

# 定义要重命名的函数映射
declare -A function_map=(
    ["UserInterfaceSystemWindowManager"]="UIWindowManager"
    ["UserInterfaceSystemDialogManager"]="UIDialogManager"
    ["UserInterfaceSystemMenuManager"]="UIMenuManager"
    ["UserInterfaceSystemFocusManager"]="UIFocusManager"
    ["UserInterfaceSystemTooltipManager"]="UITooltipManager"
    ["UserInterfaceSystemDragDropManager"]="UIDragDropManager"
    ["UserInterfaceSystemClipboardManager"]="UIClipboardManager"
    ["UserInterfaceSystemUndoRedoManager"]="UIUndoRedoManager"
    ["UserInterfaceSystemShortcutManager"]="UIShortcutManager"
    ["UserInterfaceSystemNotificationManager"]="UINotificationManager"
    ["UserInterfaceSystemLocalizationManager"]="UILocalizationManager"
    ["UserInterfaceSystemAccessibilityManager"]="UIAccessibilityManager"
    ["UserInterfaceSystemPrintManager"]="UIPrintManager"
    ["UserInterfaceSystemDataBindingManager"]="UIDataBindingManager"
    ["UserInterfaceSystemCacheManager"]="UICacheManager"
    ["UserInterfaceSystemMemoryManager"]="UIMemoryManager"
    ["UserInterfaceSystemDebugManager"]="UIDebugManager"
    ["UserInterfaceSystemConfigurationManager"]="UIConfigurationManager"
    ["UserInterfaceSystemPluginManager"]="UIPluginManager"
    ["UserInterfaceSystemUpdateManager"]="UIUpdateManager"
    ["UserInterfaceSystemBackupManager"]="UIBackupManager"
    ["UserInterfaceSystemRecoveryManager"]="UIRecoveryManager"
    ["UserInterfaceSystemSecurityManager"]="UISecurityManager"
    ["UserInterfaceSystemNetworkManager"]="UINetworkManager"
    ["UserInterfaceSystemSyncManager"]="UISyncManager"
    ["UserInterfaceSystemOfflineManager"]="UIOfflineManager"
    ["UserInterfaceSystemCompressionManager"]="UICompressionManager"
    ["UserInterfaceSystemEncryptionManager"]="UIEncryptionManager"
    ["UserInterfaceSystemDecryptionManager"]="UIDecryptionManager"
    ["UserInterfaceSystemSignatureManager"]="UISignatureManager"
    ["UserInterfaceSystemCertificateManager"]="UICertificateManager"
    ["UserInterfaceSystemAuthorizationManager"]="UIAuthorizationManager"
    ["UserInterfaceSystemSessionManager"]="UISessionManager"
    ["UserInterfaceSystemAuthenticationManager"]="UIAuthenticationManager"
    ["UserInterfaceSystemRoleManager"]="UIRoleManager"
    ["UserInterfaceSystemUserManager"]="UIUserManager"
    ["UserInterfaceSystemGroupManager"]="UIGroupManager"
    ["UserInterfaceSystemPermissionManager"]="UIPermissionManager"
    ["UserInterfaceSystemPolicyManager"]="UIPolicyManager"
    ["UserInterfaceSystemRuleManager"]="UIRuleManager"
    ["UserInterfaceSystemValidationManager"]="UIValidationManager"
    ["UserInterfaceSystemCheckManager"]="UICheckManager"
    ["UserInterfaceSystemAuditManager"]="UIAuditManager"
    ["UserInterfaceSystemMonitoringManager"]="UIMonitoringManager"
    ["UserInterfaceSystemReportManager"]="UIReportManager"
    ["UserInterfaceSystemAnalysisManager"]="UIAnalysisManager"
    ["UserInterfaceSystemPredictionManager"]="UIPredictionManager"
    ["UserInterfaceSystemRecommendationManager"]="UIRecommendationManager"
    ["UserInterfaceSystemSearchManager"]="UISearchManager"
    ["UserInterfaceSystemIndexManager"]="UIIndexManager"
    ["UserInterfaceSystemStorageManager"]="UIStorageManager"
    ["UserInterfaceSystemMigrationManager"]="UIMigrationManager"
    ["UserInterfaceSystemSynchronizationManager"]="UISynchronizationManager"
    ["UserInterfaceSystemVersionManager"]="UIVersionManager"
    ["UserInterfaceSystemSettingsManager"]="UISettingsManager"
    ["UserInterfaceSystemEnvironmentManager"]="UIEnvironmentManager"
    ["UserInterfaceSystemLogManager"]="UILogManager"
    ["UserInterfaceSystemErrorManager"]="UIErrorManager"
    ["UserInterfaceSystemExceptionManager"]="UIExceptionManager"
    ["UserInterfaceSystemWarningManager"]="UIWarningManager"
    ["UserInterfaceSystemInformationManager"]="UIInformationManager"
    ["UserInterfaceSystemStatusManager"]="UIStatusManager"
    ["UserInterfaceSystemHealthCheckManager"]="UIHealthCheckManager"
    ["UserInterfaceSystemDiagnosticsManager"]="UIDiagnosticsManager"
    ["UserInterfaceSystemRepairManager"]="UIRepairManager"
    ["UserInterfaceSystemRestoreManager"]="UIRestoreManager"
    ["UserInterfaceSystemArchiveManager"]="UIArchiveManager"
)

# 执行批量替换
for old_name in "${!function_map[@]}"; do
    new_name="${function_map[$old_name]}"
    echo "替换: $old_name -> $new_name"
    sed -i "s/void $old_name/void $new_name/g" 04_ui_system.c
done

echo "批量重命名完成"