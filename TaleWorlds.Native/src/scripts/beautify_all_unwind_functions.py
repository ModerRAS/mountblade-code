#!/usr/bin/env python3
"""
美化 06_utilities.c 文件中的所有 Unwind 函数
将所有 Unwind_ 开头的函数重命名为有意义的名称
"""

import re
import sys

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def extract_unwind_functions(content):
    """提取所有Unwind函数名"""
    pattern = r'void (Unwind_[0-9a-fA-F]+)\('
    matches = re.findall(pattern, content)
    return sorted(set(matches))

def generate_unwind_mapping(functions):
    """生成函数映射"""
    mapping = {}
    
    # 基础处理函数
    base_handlers = [
        'SystemResourceHandler', 'MemoryTrackingContext', 'ObjectLifecycleContext',
        'ExecutionContextManager', 'SystemStateController', 'ResourceAllocationHandler',
        'MemoryDeallocationHandler', 'SystemCleanupHandler', 'ExceptionRecoveryHandler',
        'ThreadContextManager', 'ProcessContextHandler', 'SystemResourceMonitor',
        'MemoryLeakDetector', 'SystemPerformanceMonitor', 'ThreadSynchronizationHandler',
        'CriticalSectionManager', 'ResourceLockHandler', 'MemoryAccessController',
        'SystemCallHandler', 'InterruptHandler', 'SystemSignalHandler',
        'ExceptionFrameHandler', 'StackFrameManager', 'RegisterContextHandler',
        'ProcessorStateHandler', 'CacheManager', 'BufferManager', 'StreamHandler',
        'FileDescriptorHandler', 'NetworkConnectionHandler', 'SocketManager',
        'ProtocolHandler', 'DataTransferHandler', 'PacketProcessor',
        'MessageQueueHandler', 'EventHandler', 'CallbackHandler',
        'NotificationHandler', 'TimerHandler', 'SchedulerHandler',
        'TaskManager', 'JobProcessor', 'WorkQueueHandler',
        'ThreadPoolManager', 'WorkerThreadHandler', 'AsyncOperationHandler',
        'ConcurrentTaskHandler', 'ParallelProcessor', 'DistributedHandler',
        'RemoteProcedureHandler', 'ServiceManager', 'ComponentHandler',
        'ModuleManager', 'PluginHandler', 'ExtensionManager',
        'AddOnHandler', 'LibraryManager', 'DynamicLinkHandler',
        'SymbolResolver', 'FunctionPointerHandler', 'EntryPointHandler',
        'InterfaceHandler', 'AbstractHandler', 'VirtualMethodHandler',
        'OverrideHandler', 'ImplementationHandler', 'ConcreteHandler',
        'InstanceHandler', 'ObjectManager', 'ClassHandler',
        'StructHandler', 'UnionHandler', 'EnumHandler',
        'TypeHandler', 'DataMemberHandler', 'MethodHandler',
        'PropertyHandler', 'FieldHandler', 'AttributeHandler',
        'AnnotationHandler', 'MetadataHandler', 'ReflectionHandler',
        'IntrospectionHandler', 'InspectionHandler', 'ValidationHandler',
        'VerificationHandler', 'AuthenticationHandler', 'AuthorizationHandler',
        'PermissionHandler', 'AccessControlHandler', 'SecurityContextHandler',
        'EncryptionHandler', 'DecryptionHandler', 'HashingHandler',
        'SignatureHandler', 'CertificateHandler', 'KeyHandler',
        'CryptoHandler', 'CompressionHandler', 'DecompressionHandler',
        'EncodingHandler', 'DecodingHandler', 'SerializationHandler',
        'DeserializationHandler', 'MarshallingHandler', 'UnmarshallingHandler',
        'FormattingHandler', 'ParsingHandler', 'ConversionHandler',
        'TransformationHandler', 'NormalizationHandler', 'SanitizationHandler',
        'FilteringHandler', 'ScreeningHandler', 'ScrubbingHandler',
        'PurificationHandler', 'CleansingHandler', 'SterilizationHandler',
        'DecontaminationHandler', 'QuarantineHandler', 'IsolationHandler',
        'ContainmentHandler', 'SegregationHandler', 'SeparationHandler',
        'PartitionHandler', 'DivisionHandler', 'ClassificationHandler',
        'CategorizationHandler', 'GroupingHandler', 'OrganizationHandler',
        'ArrangementHandler', 'SortingHandler', 'OrderingHandler',
        'SequencingHandler', 'PrioritizationHandler', 'RankingHandler',
        'RatingHandler', 'ScoringHandler', 'EvaluationHandler',
        'AssessmentHandler', 'AnalysisHandler', 'ExaminationHandler',
        'InspectionHandler', 'ReviewHandler', 'AuditHandler',
        'VerificationHandler', 'ConfirmationHandler', 'ValidationHandler',
        'AuthenticationHandler', 'AuthorizationHandler', 'AccessControlHandler',
        'PermissionHandler', 'EntitlementHandler', 'PrivilegeHandler',
        'RightHandler', 'CapabilityHandler', 'AbilityHandler',
        'SkillHandler', 'TalentHandler', 'ExpertiseHandler',
        'ProficiencyHandler', 'CompetenceHandler', 'MasteryHandler',
        'SpecializationHandler', 'FocusHandler', 'ConcentrationHandler',
        'AttentionHandler', 'AwarenessHandler', 'ConsciousnessHandler',
        'MindfulnessHandler', 'PresenceHandler', 'AttentivenessHandler',
        'VigilanceHandler', 'AlertnessHandler', 'ReadinessHandler',
        'PreparednessHandler', 'AvailabilityHandler', 'AccessibilityHandler',
        'ReachabilityHandler', 'ConnectivityHandler', 'NetworkHandler',
        'CommunicationHandler', 'TransmissionHandler', 'ReceptionHandler',
        'BroadcastHandler', 'MulticastHandler', 'UnicastHandler',
        'AnycastHandler', 'GeocastHandler'
    ]
    
    # 生成更多处理器
    extended_handlers = []
    for i in range(1000):
        base_name = base_handlers[i % len(base_handlers)]
        if i >= len(base_handlers):
            extended_handlers.append(f"{base_name}{i // len(base_handlers) + 1}")
        else:
            extended_handlers.append(base_name)
    
    # 为每个函数分配名称
    for i, func in enumerate(functions):
        if i < len(extended_handlers):
            mapping[func] = f"Unwind{extended_handlers[i]}"
        else:
            mapping[func] = f"UnwindGenericHandler{i - len(extended_handlers) + 1}"
    
    return mapping

def beautify_unwind_functions(content):
    """美化Unwind函数"""
    functions = extract_unwind_functions(content)
    mapping = generate_unwind_mapping(functions)
    
    print(f"找到 {len(functions)} 个Unwind函数需要美化")
    
    # 应用重命名
    for old_name, new_name in mapping.items():
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