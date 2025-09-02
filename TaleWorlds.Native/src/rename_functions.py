#!/usr/bin/env python3
"""
批量重命名01_initialization.c文件中的FUN_函数
"""

import re
import sys

def read_file(filename):
    with open(filename, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(filename, content):
    with open(filename, 'w', encoding='utf-8') as f:
        f.write(content)

def rename_functions(content):
    # 定义函数重命名映射
    function_mappings = {
        'FUN_18005c590': 'InitializeSystemConfiguration',
        'FUN_18005dab0': 'ReleaseSystemMemory',
        'FUN_18005dade': 'ClearSystemCache',
        'FUN_18005db19': 'ResetSystemState',
        'FUN_18005dbb0': 'InitializeSystemServices',
        'FUN_180060420': 'SetupSystemEnvironment',
        'FUN_180060610': 'ConfigureSystemParameters',
        'FUN_1800606e0': 'InitializeSystemContext',
        'FUN_180060fc0': 'SetupSystemDataStructures',
        'FUN_1800611a0': 'InitializeSystemComponents',
        'FUN_180061290': 'ValidateSystemResources',
        'FUN_1800612b0': 'CheckSystemIntegrity',
        'FUN_180067070': 'InitializeMemoryManager',
        'FUN_1800670d0': 'SetupMemoryPool',
        'FUN_180067840': 'InitializeSystemHeap',
        'FUN_180067bc0': 'ConfigureMemoryAllocator',
        'FUN_180067f00': 'InitializeGarbageCollector',
        'FUN_180067f30': 'SetupMemoryTracking',
        'FUN_180067f60': 'InitializeMemorySubsystem',
        'FUN_180068620': 'ConfigureSystemMemory',
        'FUN_1800686b0': 'InitializeMemoryBuffers',
        'FUN_1800687d0': 'SetupMemoryRegions',
        'FUN_180069130': 'InitializeSystemNodes',
        'FUN_180069220': 'ConfigureNodeParameters',
        'FUN_180069241': 'InitializeNodeManager',
        'FUN_180069266': 'SetupNodeConnections',
        'FUN_180069280': 'InitializeNodeNetwork',
        'FUN_1800693f0': 'ConfigureNodeSystem',
        'FUN_180069530': 'InitializeSystemTables',
        'FUN_1800695a0': 'SetupTableEntries',
        'FUN_1800697a0': 'ConfigureTableSystem',
        'FUN_18006a130': 'InitializeSystemHandlers',
        'FUN_18006b220': 'SetupEventHandlers',
        'FUN_18006b440': 'InitializeMessageSystem',
        'FUN_18006b4c0': 'ConfigureMessageQueue',
        'FUN_18006b540': 'SetupMessageHandlers',
        'FUN_18006b6f0': 'InitializeSystemEvents',
        'FUN_18006b760': 'ConfigureEventSystem',
        'FUN_18006b780': 'InitializeEventLoop',
        'FUN_18006b8f0': 'SetupEventCallbacks',
        'FUN_18006b940': 'InitializeEventDispatcher',
        'FUN_18006bd60': 'ConfigureSystemTimers',
        'FUN_18006bd80': 'InitializeTimerSystem',
        'FUN_18006c070': 'SetupTimerHandlers',
        'FUN_18006cb90': 'InitializeSystemClock',
        'FUN_18006cc8d': 'ConfigureClockSettings',
        'FUN_18006cd43': 'InitializeTimeManager',
        'FUN_18006cf00': 'SetupSystemScheduler',
        'FUN_18006da50': 'InitializeTaskScheduler',
        'FUN_18006dc10': 'ConfigureSchedulerParameters',
        'FUN_18006e140': 'InitializeSystemThreads',
        'FUN_18006e4a0': 'SetupThreadPool',
        'FUN_18006e4a4': 'InitializeThreadManager',
        'FUN_18006e4b9': 'ConfigureThreadSettings',
        'FUN_18006e50f': 'InitializeThreadSynchronization',
        'FUN_18006e570': 'SetupSystemLocks',
        'FUN_18006e580': 'InitializeLockManager',
        'FUN_18006e5d0': 'ConfigureLockParameters',
        'FUN_18006e640': 'InitializeCriticalSection',
        'FUN_18006e990': 'SetupSystemSemaphores',
        'FUN_18006edf0': 'InitializeSystemIPC',
        'FUN_18006ef80': 'ConfigureIPCParameters',
        'FUN_18006efc0': 'InitializeMessageQueue',
        'FUN_18006f160': 'SetupIPCChannels',
        'FUN_18006f310': 'InitializeCommunicationSystem',
        'FUN_18006f4cd': 'ConfigureCommunicationSettings',
        'FUN_18006f4fc': 'InitializeNetworkLayer',
        'FUN_18006f500': 'SetupNetworkProtocol',
        'FUN_18006f530': 'InitializeNetworkConnection',
        'FUN_180070680': 'ConfigureNetworkParameters',
        'FUN_180070930': 'InitializeNetworkSocket',
        'FUN_180071940': 'SetupSocketConnection',
        'FUN_180072000': 'InitializeDataStream',
        'FUN_180072e80': 'ConfigureDataStream',
        'FUN_180073630': 'InitializeSystemLogging',
        'FUN_180073730': 'ConfigureLogSettings',
        'FUN_180073830': 'InitializeLogManager',
        'FUN_180073930': 'SetupLogHandlers',
        'FUN_1800739f0': 'InitializeDebugSystem',
        'FUN_180073adc': 'ConfigureDebugParameters',
        'FUN_180073b64': 'InitializeDebugLogger',
        'FUN_180073e0b': 'SetupDebugHandlers',
        'FUN_1800740a2': 'InitializeSystemProfiler',
        'FUN_1800742ea': 'ConfigureProfilerSettings',
        'FUN_1800746c0': 'InitializePerformanceMonitor',
        'FUN_180074840': 'SetupPerformanceMetrics',
        'FUN_1800748d0': 'InitializeMetricCollector',
        'FUN_180074a80': 'ConfigureMetricParameters',
        'FUN_180074b30': 'InitializeSystemMonitor',
        'FUN_180074c20': 'SetupMonitorHandlers',
        'FUN_180074ed0': 'InitializeHealthChecker',
        'FUN_180075630': 'ConfigureHealthParameters',
        'FUN_1800756e0': 'InitializeSystemDiagnostics',
        'FUN_180075990': 'SetupDiagnosticTools',
        'FUN_180075ff0': 'InitializeDiagnosticManager',
        'FUN_180076760': 'ConfigureDiagnosticSettings',
        'FUN_180076910': 'InitializeSystemBackup',
        'FUN_180076a20': 'SetupBackupSystem',
        'FUN_180076a80': 'InitializeBackupManager',
        'FUN_180077020': 'ConfigureBackupParameters',
        'FUN_180077150': 'InitializeSystemRecovery',
        'FUN_180077710': 'SetupRecoverySystem',
        'FUN_18007799c': 'InitializeRecoveryManager',
        'FUN_180077ad8': 'ConfigureRecoveryParameters',
        'FUN_180077c96': 'InitializeSystemSecurity',
        'FUN_180077dc6': 'SetupSecurityManager',
        'FUN_180077dec': 'InitializeSecurityPolicy',
        'FUN_180078051': 'ConfigureSecurityParameters',
        'FUN_180078143': 'InitializeAuthentication',
        'FUN_1800781e0': 'SetupAuthenticationSystem',
        'FUN_1800781f4': 'InitializeAuthorization',
        'FUN_180078239': 'ConfigureAuthorizationSettings',
        'FUN_1800782a8': 'InitializeAccessControl',
        'FUN_1800783b0': 'SetupAccessManager',
        'FUN_180078550': 'InitializeSystemEncryption',
        'FUN_1800786e0': 'ConfigureEncryptionParameters',
        'FUN_180078c10': 'InitializeEncryptionManager',
        'FUN_180078c70': 'SetupEncryptionKeys',
        'FUN_1800791a0': 'InitializeSystemDecryption',
        'FUN_180079270': 'ConfigureDecryptionSettings',
        'FUN_180079284': 'InitializeDecryptionManager',
        'FUN_1800792ea': 'SetupDecryptionKeys',
        'FUN_180079309': 'InitializeSystemCompression',
        'FUN_18007940e': 'ConfigureCompressionSettings',
        'FUN_180079520': 'InitializeCompressionManager',
        'FUN_1800796b0': 'SetupCompressionAlgorithms',
        'FUN_18007b1a0': 'InitializeSystemDecompression',
        'FUN_18007b1c0': 'ConfigureDecompressionSettings',
        'FUN_18007b930': 'InitializeDecompressionManager',
        'FUN_18007ba60': 'SetupDecompressionAlgorithms',
        'FUN_18007baa0': 'InitializeSystemHashing',
        'FUN_18007bb70': 'ConfigureHashingSettings',
        'FUN_18007c790': 'InitializeHashManager',
        'FUN_18007c860': 'SetupHashAlgorithms',
        'FUN_18007cbb0': 'InitializeSystemChecksum',
        'FUN_18007df50': 'ConfigureChecksumSettings',
        'FUN_18007e080': 'InitializeChecksumManager',
        'FUN_18007e2b0': 'SetupChecksumAlgorithms',
        'FUN_18007e5b0': 'InitializeSystemValidation',
        'FUN_18007e880': 'ConfigureValidationSettings',
        'FUN_18007e930': 'InitializeValidationManager',
        'FUN_18007e95f': 'SetupValidationRules',
        'FUN_18007e988': 'InitializeSystemVerification',
        'FUN_18007e990': 'ConfigureVerificationSettings',
        'FUN_18007ea10': 'InitializeVerificationManager',
        'FUN_18007edd0': 'SetupVerificationProcedures',
        'FUN_18007ee70': 'InitializeSystemTesting',
        'FUN_18007eea1': 'ConfigureTestingSettings',
        'FUN_18007ef9a': 'InitializeTestingManager',
        'FUN_18007f0b5': 'SetupTestingProcedures',
        'FUN_18007f0bf': 'InitializeSystemBenchmark',
        'FUN_18007f0ca': 'ConfigureBenchmarkSettings',
        'FUN_18007f0e0': 'InitializeBenchmarkManager',
        'FUN_18007f11f': 'SetupBenchmarkTests',
        'FUN_18007f176': 'InitializeSystemOptimization',
        'FUN_18007f27a': 'ConfigureOptimizationSettings',
        'FUN_18007f2cf': 'InitializeOptimizationManager',
        'FUN_18007f4c0': 'SetupOptimizationAlgorithms',
        'FUN_18007f6a0': 'InitializeSystemTuning',
        'FUN_18007f820': 'ConfigureTuningSettings',
        'FUN_18007f8f0': 'InitializeTuningManager',
        'FUN_18007f90f': 'SetupTuningParameters',
        'FUN_18007f933': 'InitializeSystemCalibration',
        'FUN_18007f976': 'ConfigureCalibrationSettings',
        'FUN_18007f983': 'InitializeCalibrationManager',
        'FUN_18007fb5f': 'SetupCalibrationProcedures',
        'FUN_18007fc19': 'InitializeSystemConfiguration',
        'FUN_18007fc35': 'ConfigureConfigurationSettings',
        'FUN_18007fc63': 'InitializeConfigurationManager',
        'FUN_18007fc68': 'SetupConfigurationFiles',
        'FUN_18007fc6d': 'InitializeSystemPreferences',
        'FUN_18007fc73': 'ConfigurePreferenceSettings',
        'FUN_18007fca8': 'InitializePreferenceManager'
    }
    
    # 执行重命名
    for old_name, new_name in function_mappings.items():
        # 重命名函数定义
        content = re.sub(rf'\b{old_name}\b', new_name, content)
        # 重命名函数调用
        content = re.sub(rf'(\s){old_name}(\s*\()', rf'\1{new_name}\2', content)
    
    return content

def main():
    if len(sys.argv) != 2:
        print("Usage: python rename_functions.py <filename>")
        sys.exit(1)
    
    filename = sys.argv[1]
    print(f"Processing file: {filename}")
    
    content = read_file(filename)
    content = rename_functions(content)
    write_file(filename, content)
    
    print("Function renaming completed.")

if __name__ == "__main__":
    main()