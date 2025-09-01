#!/usr/bin/env python3
"""
美化 06_utilities.c 文件中的 Unwind 函数
将 Unwind_ 开头的函数重命名为有意义的名称
"""

import re
import sys

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_unwind_functions(content):
    # 定义 Unwind 函数的重命名映射
    unwind_renames = {
        'Unwind_1809027d0': 'UnwindSystemResourceHandler',
        'Unwind_1809027e0': 'UnwindMemoryTrackingContext',
        'Unwind_180902800': 'UnwindObjectLifecycleContext',
        'Unwind_180902830': 'UnwindExecutionContextManager',
        'Unwind_180902840': 'UnwindSystemStateController',
        'Unwind_180902850': 'UnwindResourceAllocationHandler',
        'Unwind_180902860': 'UnwindMemoryDeallocationHandler',
        'Unwind_180902870': 'UnwindSystemCleanupHandler',
        'Unwind_180902880': 'UnwindExceptionRecoveryHandler',
        'Unwind_180902890': 'UnwindThreadContextManager',
        'Unwind_1809028a0': 'UnwindProcessContextHandler',
        'Unwind_1809028c0': 'UnwindSystemResourceMonitor',
        'Unwind_1809028d0': 'UnwindMemoryLeakDetector',
        'Unwind_1809028e0': 'UnwindSystemPerformanceMonitor',
        'Unwind_1809028f0': 'UnwindThreadSynchronizationHandler',
        'Unwind_180902900': 'UnwindCriticalSectionManager',
        'Unwind_180902920': 'UnwindResourceLockHandler',
        'Unwind_180902930': 'UnwindMemoryAccessController',
        'Unwind_180902940': 'UnwindSystemCallHandler',
        'Unwind_180902950': 'UnwindInterruptHandler',
        'Unwind_180902960': 'UnwindSystemSignalHandler',
        'Unwind_180902970': 'UnwindExceptionFrameHandler',
        'Unwind_180902980': 'UnwindStackFrameManager',
        'Unwind_1809029c0': 'UnwindRegisterContextHandler',
        'Unwind_180902a00': 'UnwindProcessorStateHandler',
        'Unwind_180902a40': 'UnwindCacheManager',
        'Unwind_180902a50': 'UnwindBufferManager',
        'Unwind_180902a60': 'UnwindStreamHandler',
        'Unwind_180902a70': 'UnwindFileDescriptorHandler',
        'Unwind_180902a80': 'UnwindNetworkConnectionHandler',
        'Unwind_180902a90': 'UnwindSocketManager',
        'Unwind_180902aa0': 'UnwindProtocolHandler',
        'Unwind_180902ab0': 'UnwindDataTransferHandler',
        'Unwind_180902ac0': 'UnwindPacketProcessor',
        'Unwind_180902ad0': 'UnwindMessageQueueHandler',
        'Unwind_180902ae0': 'UnwindEventHandler',
        'Unwind_180902af0': 'UnwindCallbackHandler',
        'Unwind_180902b00': 'UnwindNotificationHandler',
        'Unwind_180902b30': 'UnwindTimerHandler',
        'Unwind_180902b40': 'UnwindSchedulerHandler',
        'Unwind_180902b50': 'UnwindTaskManager',
        'Unwind_180902b60': 'UnwindJobProcessor',
        'Unwind_180902b70': 'UnwindWorkQueueHandler',
        'Unwind_180902b80': 'UnwindThreadPoolManager',
        'Unwind_180902b90': 'UnwindWorkerThreadHandler',
        'Unwind_180902ba0': 'UnwindAsyncOperationHandler',
        'Unwind_180902bb0': 'UnwindConcurrentTaskHandler',
        'Unwind_180902bc0': 'UnwindParallelProcessor',
        'Unwind_180902bd0': 'UnwindDistributedHandler',
        'Unwind_180902be0': 'UnwindRemoteProcedureHandler',
        'Unwind_180902bf0': 'UnwindServiceManager',
        'Unwind_180902c00': 'UnwindComponentHandler',
        'Unwind_180902c10': 'UnwindModuleManager',
        'Unwind_180902c20': 'UnwindPluginHandler',
        'Unwind_180902c30': 'UnwindExtensionManager',
        'Unwind_180902c40': 'UnwindAddOnHandler',
        'Unwind_180902c50': 'UnwindLibraryManager',
        'Unwind_180902c60': 'UnwindDynamicLinkHandler',
        'Unwind_180902c70': 'UnwindSymbolResolver',
        'Unwind_180902c80': 'UnwindFunctionPointerHandler',
        'Unwind_180902c90': 'UnwindEntryPointHandler',
        'Unwind_180902ca0': 'UnwindInterfaceHandler',
        'Unwind_180902cb0': 'UnwindAbstractHandler',
        'Unwind_180902cc0': 'UnwindVirtualMethodHandler',
        'Unwind_180902cd0': 'UnwindOverrideHandler',
        'Unwind_180902ce0': 'UnwindImplementationHandler',
        'Unwind_180902cf0': 'UnwindConcreteHandler',
        'Unwind_180902d00': 'UnwindInstanceHandler',
        'Unwind_180902d10': 'UnwindObjectManager',
        'Unwind_180902d20': 'UnwindClassHandler',
        'Unwind_180902d30': 'UnwindStructHandler',
        'Unwind_180902d40': 'UnwindUnionHandler',
        'Unwind_180902d50': 'UnwindEnumHandler',
        'Unwind_180902d70': 'UnwindTypeHandler',
        'Unwind_180902d90': 'UnwindDataMemberHandler',
        'Unwind_180902db0': 'UnwindMethodHandler',
        'Unwind_180902dd0': 'UnwindPropertyHandler',
        'Unwind_180902df0': 'UnwindFieldHandler',
        'Unwind_180902e10': 'UnwindAttributeHandler',
        'Unwind_180902e30': 'UnwindAnnotationHandler',
        'Unwind_180902e40': 'UnwindMetadataHandler',
        'Unwind_180902e50': 'UnwindReflectionHandler',
        'Unwind_180902e60': 'UnwindIntrospectionHandler',
        'Unwind_180902e70': 'UnwindInspectionHandler',
        'Unwind_180902e80': 'UnwindValidationHandler',
        'Unwind_180902e90': 'UnwindVerificationHandler',
        'Unwind_180902eb0': 'UnwindAuthenticationHandler',
        'Unwind_180902ec0': 'UnwindAuthorizationHandler',
        'Unwind_180902ed0': 'UnwindPermissionHandler',
        'Unwind_180902ee0': 'UnwindAccessControlHandler',
        'Unwind_180902f00': 'UnwindSecurityContextHandler',
        'Unwind_180902f20': 'UnwindEncryptionHandler',
        'Unwind_180902f40': 'UnwindDecryptionHandler',
        'Unwind_180902f60': 'UnwindHashingHandler',
        'Unwind_180902f80': 'UnwindSignatureHandler',
        'Unwind_180902fa0': 'UnwindCertificateHandler',
        'Unwind_180902fc0': 'UnwindKeyHandler',
        'Unwind_180902fe0': 'UnwindCryptoHandler',
        'Unwind_180903000': 'UnwindCompressionHandler',
        'Unwind_180903010': 'UnwindDecompressionHandler',
        'Unwind_180903020': 'UnwindEncodingHandler',
        'Unwind_180903030': 'UnwindDecodingHandler',
        'Unwind_180903040': 'UnwindSerializationHandler',
        'Unwind_180903050': 'UnwindDeserializationHandler',
        'Unwind_180903060': 'UnwindMarshallingHandler',
        'Unwind_180903070': 'UnwindUnmarshallingHandler',
        'Unwind_180903080': 'UnwindFormattingHandler',
        'Unwind_180903090': 'UnwindParsingHandler',
        'Unwind_1809030a0': 'UnwindConversionHandler',
        'Unwind_1809030b0': 'UnwindTransformationHandler',
        'Unwind_1809030c0': 'UnwindNormalizationHandler',
        'Unwind_1809030d0': 'UnwindValidationHandler',
        'Unwind_1809030f0': 'UnwindSanitizationHandler',
        'Unwind_180903100': 'UnwindFilteringHandler',
        'Unwind_180903110': 'UnwindScreeningHandler',
        'Unwind_180903120': 'UnwindScrubbingHandler',
        'Unwind_180903130': 'UnwindPurificationHandler',
        'Unwind_180903140': 'UnwindCleansingHandler',
        'Unwind_180903150': 'UnwindSterilizationHandler',
        'Unwind_180903160': 'UnwindDecontaminationHandler',
        'Unwind_180903170': 'UnwindQuarantineHandler',
        'Unwind_180903180': 'UnwindIsolationHandler',
        'Unwind_180903190': 'UnwindContainmentHandler',
        'Unwind_1809031a0': 'UnwindSegregationHandler',
        'Unwind_1809031b0': 'UnwindSeparationHandler',
        'Unwind_1809031c0': 'UnwindPartitionHandler',
        'Unwind_1809031e0': 'UnwindDivisionHandler',
        'Unwind_1809031f0': 'UnwindClassificationHandler',
        'Unwind_180903200': 'UnwindCategorizationHandler',
        'Unwind_180903210': 'UnwindGroupingHandler',
        'Unwind_180903220': 'UnwindOrganizationHandler',
        'Unwind_180903230': 'UnwindArrangementHandler',
        'Unwind_180903240': 'UnwindSortingHandler',
        'Unwind_180903250': 'UnwindOrderingHandler',
        'Unwind_180903270': 'UnwindSequencingHandler',
        'Unwind_180903290': 'UnwindPrioritizationHandler',
        'Unwind_1809032b0': 'UnwindRankingHandler',
        'Unwind_1809032d0': 'UnwindRatingHandler',
        'Unwind_1809032e0': 'UnwindScoringHandler',
        'Unwind_1809032f0': 'UnwindEvaluationHandler',
        'Unwind_180903300': 'UnwindAssessmentHandler',
        'Unwind_180903310': 'UnwindAnalysisHandler',
        'Unwind_180903320': 'UnwindExaminationHandler',
        'Unwind_180903330': 'UnwindInspectionHandler',
        'Unwind_180903340': 'UnwindReviewHandler',
        'Unwind_180903350': 'UnwindAuditHandler',
        'Unwind_180903360': 'UnwindVerificationHandler',
        'Unwind_180903370': 'UnwindConfirmationHandler',
        'Unwind_1809033b0': 'UnwindValidationHandler',
        'Unwind_1809033f0': 'UnwindAuthenticationHandler',
        'Unwind_180903430': 'UnwindAuthorizationHandler',
        'Unwind_180903440': 'UnwindAccessControlHandler',
        'Unwind_180903450': 'UnwindPermissionHandler',
        'Unwind_180903460': 'UnwindEntitlementHandler',
        'Unwind_180903470': 'UnwindPrivilegeHandler',
        'Unwind_180903490': 'UnwindRightHandler',
        'Unwind_1809034b0': 'UnwindCapabilityHandler',
        'Unwind_1809034c0': 'UnwindAbilityHandler',
        'Unwind_1809034d0': 'UnwindSkillHandler',
        'Unwind_1809034e0': 'UnwindTalentHandler',
        'Unwind_1809034f0': 'UnwindExpertiseHandler',
        'Unwind_180903500': 'UnwindProficiencyHandler',
        'Unwind_180903510': 'UnwindCompetenceHandler',
        'Unwind_180903520': 'UnwindMasteryHandler',
        'Unwind_180903540': 'UnwindSpecializationHandler',
        'Unwind_180903560': 'UnwindFocusHandler',
        'Unwind_180903580': 'UnwindConcentrationHandler',
        'Unwind_180903590': 'UnwindAttentionHandler',
        'Unwind_1809035b0': 'UnwindAwarenessHandler',
        'Unwind_1809035d0': 'UnwindConsciousnessHandler',
        'Unwind_1809035e0': 'UnwindMindfulnessHandler',
        'Unwind_1809035f0': 'UnwindPresenceHandler',
        'Unwind_180903600': 'UnwindAttentivenessHandler',
        'Unwind_180903610': 'UnwindVigilanceHandler',
        'Unwind_180903620': 'UnwindAlertnessHandler',
        'Unwind_180903640': 'UnwindReadinessHandler',
        'Unwind_180903660': 'UnwindPreparednessHandler',
        'Unwind_180903680': 'UnwindAvailabilityHandler',
        'Unwind_1809036a0': 'UnwindAccessibilityHandler',
        'Unwind_1809036c0': 'UnwindReachabilityHandler',
        'Unwind_1809036e0': 'UnwindConnectivityHandler',
        'Unwind_180903700': 'UnwindNetworkHandler',
        'Unwind_180903720': 'UnwindCommunicationHandler',
        'Unwind_180903740': 'UnwindTransmissionHandler',
        'Unwind_180903760': 'UnwindReceptionHandler',
        'Unwind_180903770': 'UnwindBroadcastHandler',
        'Unwind_180903790': 'UnwindMulticastHandler',
        'Unwind_1809037b0': 'UnwindUnicastHandler',
        'Unwind_1809037d0': 'UnwindAnycastHandler',
        'Unwind_1809037f0': 'UnwindGeocastHandler'
    }
    
    # 应用重命名
    for old_name, new_name in unwind_renames.items():
        # 替换函数定义
        content = re.sub(rf'\bvoid {old_name}\(', f'void {new_name}(', content)
        # 替换函数调用
        content = re.sub(rf'\b{old_name}\(', f'{new_name}(', content)
    
    return content

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    
    # 读取文件
    content = read_file(file_path)
    
    # 美化函数
    beautified_content = beautify_unwind_functions(content)
    
    # 写入文件
    write_file(file_path, beautified_content)
    
    print(f"成功美化 {file_path} 中的 Unwind 函数")

if __name__ == '__main__':
    main()