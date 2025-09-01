#!/usr/bin/env python3
"""
美化06_utilities.c文件中的队列变量名
将SystemDataBufferXxxQueue简化为SystemXxxQueue
"""

import re

def beautify_queue_variables():
    """批量美化队列变量名"""
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义需要替换的队列变量名映射
    queue_replacements = {
        'SystemDataBufferLoggingQueue': 'SystemLoggingQueue',
        'SystemDataBufferPerformanceQueue': 'SystemPerformanceQueue',
        'SystemDataBufferNetworkQueue': 'SystemNetworkQueue',
        'SystemDataBufferGraphicsQueue': 'SystemGraphicsQueue',
        'SystemDataBufferAudioQueue': 'SystemAudioQueue',
        'SystemDataBufferInputQueue': 'SystemInputQueue',
        'SystemDataBufferPhysicsQueue': 'SystemPhysicsQueue',
        'SystemDataBufferAnimationQueue': 'SystemAnimationQueue',
        'SystemDataBufferScriptQueue': 'SystemScriptQueue',
        'SystemDataBufferMemoryQueue': 'SystemMemoryQueue',
        'SystemDataBufferThreadQueue': 'SystemThreadQueue',
        'SystemDataProcessEventQueue': 'SystemProcessEventQueue',
        'SystemDataBufferTimerQueue': 'SystemTimerQueue',
        'SystemDataBufferSyncQueue': 'SystemSyncQueue',
        'SystemDataBufferLockQueue': 'SystemLockQueue',
        'SystemDataBufferSemaphoreQueue': 'SystemSemaphoreQueue',
        'SystemDataBufferMutexQueue': 'SystemMutexQueue',
        'SystemDataBufferConditionQueue': 'SystemConditionQueue',
        'SystemDataBufferBarrierQueue': 'SystemBarrierQueue',
        'SystemDataBufferPoolQueue': 'SystemPoolQueue',
        'SystemDataBufferCacheQueue': 'SystemCacheQueue',
        'SystemDataBufferBufferQueue': 'SystemBufferQueue',
        'SystemDataBufferConfigQueue': 'SystemConfigQueue',
        'SystemDataBufferStatusQueue': 'SystemStatusQueue',
        'SystemDataBufferDataQueue': 'SystemDataQueue',
        'SystemDataBufferCommandQueue': 'SystemCommandQueue',
        'SystemDataBufferMessageQueue': 'SystemMessageQueue',
        'SystemDataBufferNotificationQueue': 'SystemNotificationQueue',
        'SystemDataBufferEventQueue': 'SystemEventQueue',
        'SystemDataBufferSignalQueue': 'SystemSignalQueue',
        'SystemDataBufferCallbackQueue': 'SystemCallbackQueue',
        'SystemDataBufferTaskQueue': 'SystemTaskQueue',
        'SystemDataBufferJobQueue': 'SystemJobQueue',
        'SystemDataBufferWorkQueue': 'SystemWorkQueue',
        'SystemDataBufferRequestQueue': 'SystemRequestQueue',
        'SystemDataBufferResponseQueue': 'SystemResponseQueue',
        'SystemDataBufferErrorQueue': 'SystemErrorQueue',
        'SystemDataBufferWarningQueue': 'SystemWarningQueue',
        'SystemDataBufferInfoQueue': 'SystemInfoQueue',
        'SystemDataBufferDebugQueue': 'SystemDebugQueue',
        'SystemDataBufferTraceQueue': 'SystemTraceQueue',
        'SystemDataBufferMetricsQueue': 'SystemMetricsQueue',
        'SystemDataBufferStatsQueue': 'SystemStatsQueue',
        'SystemDataBufferMonitorQueue': 'SystemMonitorQueue',
        'SystemDataBufferProfileQueue': 'SystemProfileQueue',
        'SystemDataBufferBenchmarkQueue': 'SystemBenchmarkQueue',
        'SystemDataBufferTestQueue': 'SystemTestQueue',
        'SystemDataBufferValidationQueue': 'SystemValidationQueue',
        'SystemDataBufferVerificationQueue': 'SystemVerificationQueue',
        'SystemDataBufferCheckQueue': 'SystemCheckQueue',
        'SystemDataBufferInspectQueue': 'SystemInspectQueue',
        'SystemDataBufferAnalyzeQueue': 'SystemAnalyzeQueue',
        'SystemDataBufferReportQueue': 'SystemReportQueue',
        'SystemDataBufferLogQueue': 'SystemLogQueue',
        'SystemDataBufferAuditQueue': 'SystemAuditQueue',
        'SystemDataBufferReviewQueue': 'SystemReviewQueue',
        'SystemDataBufferAssessQueue': 'SystemAssessQueue',
        'SystemDataBufferEvaluateQueue': 'SystemEvaluateQueue',
        'SystemDataBufferMeasureQueue': 'SystemMeasureQueue',
        'SystemDataBufferCalculateQueue': 'SystemCalculateQueue',
        'SystemDataBufferComputeQueue': 'SystemComputeQueue',
        'SystemDataBufferProcessQueue': 'SystemProcessQueue',
        'SystemDataBufferExecuteQueue': 'SystemExecuteQueue',
        'SystemDataBufferRunQueue': 'SystemRunQueue',
        'SystemDataBufferPerformQueue': 'SystemPerformQueue',
        'SystemDataBufferHandleQueue': 'SystemHandleQueue',
        'SystemDataBufferManageQueue': 'SystemManageQueue',
        'SystemDataBufferControlQueue': 'SystemControlQueue',
        'SystemDataBufferDirectQueue': 'SystemDirectQueue',
        'SystemDataBufferGuideQueue': 'SystemGuideQueue',
        'SystemDataBufferLeadQueue': 'SystemLeadQueue',
        'SystemDataBufferSuperviseQueue': 'SystemSuperviseQueue',
        'SystemDataBufferOverseeQueue': 'SystemOverseeQueue'
    }
    
    # 执行替换
    for old_name, new_name in queue_replacements.items():
        # 只替换变量声明，不替换函数名或其他内容
        pattern = r'\buint8_t\s+' + re.escape(old_name) + r'\s*;'
        replacement = f'uint8_t {new_name};'
        content = re.sub(pattern, replacement, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"已美化 {len(queue_replacements)} 个队列变量名")

if __name__ == "__main__":
    beautify_queue_variables()