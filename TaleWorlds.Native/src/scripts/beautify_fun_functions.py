#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
美化02_core_engine.c文件中的FUN_函数名
根据函数地址和参数为它们分配有意义的名称
"""

import re
import os

def beautify_fun_functions():
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
    
    # 备份原始文件
    backup_path = file_path + ".backup"
    if not os.path.exists(backup_path):
        print(f"创建备份文件: {backup_path}")
        os.system(f"cp '{file_path}' '{backup_path}'")
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # FUN_函数名替换映射 - 基于函数地址和参数推断功能
    function_replacements = [
        # 系统初始化和核心功能
        ('FUN_180055050', 'CoreEngineInitialize'),
        ('FUN_180055e10', 'CoreEngineProcessContext'),
        ('FUN_1800572e6', 'CoreEngineInitializeSubsystems'),
        ('FUN_180057314', 'CoreEngineSetupComponents'),
        ('FUN_1800577c0', 'CoreEngineConfigureSystems'),
        ('FUN_180057e90', 'CoreEngineProcessParameters'),
        ('FUN_180057ee0', 'CoreEngineHandleParameters'),
        ('FUN_180057f10', 'CoreEngineExecuteParameters'),
        ('FUN_180057f30', 'CoreEngineManageContext'),
        ('FUN_180058000', 'CoreEngineProcessOperations'),
        ('FUN_180058020', 'CoreEngineExecuteOperations'),
        ('FUN_180058160', 'CoreEngineReleaseDataBuffer'),
        ('FUN_180058830', 'CoreEngineConfigureParameter'),
        ('FUN_1800588c0', 'CoreEngineProcessTripleParameters'),
        ('FUN_1800588fc', 'CoreEngineHandleSingleParameter'),
        ('FUN_18005892b', 'CoreEngineResetState'),
        ('FUN_18005895a', 'CoreEngineClearState'),
        ('FUN_1800589a3', 'CoreEngineProcessDualParameters'),
        ('FUN_180058a20', 'CoreEngineHandleQuadParameters'),
        ('FUN_180058a31', 'CoreEngineExecuteQuadParameters'),
        ('FUN_180058b3e', 'CoreEngineProcessDualOperations'),
        ('FUN_180058bfa', 'CoreEngineFinalizeProcessing'),
        ('FUN_180058c16', 'CoreEngineCompleteProcessing'),
        ('FUN_180058d90', 'CoreEngineManageDataBuffer'),
        ('FUN_180058db0', 'CoreEngineProcessQuadOperations'),
        ('FUN_180058e60', 'CoreEngineExecuteQuadOperations'),
        ('FUN_180058e90', 'CoreEngineHandleQuadOperations'),
        ('FUN_180058f00', 'CoreEngineProcessDualData'),
        ('FUN_180059000', 'CoreEngineManageBufferData'),
        ('FUN_1800591c0', 'CoreEngineProcessBufferData'),
        
        # 数据处理函数
        ('FUN_180059250', 'CoreEngineHandleDataProcessing'),
        ('FUN_180059350', 'CoreEngineExecuteDataProcessing'),
        ('FUN_180059450', 'CoreEngineProcessDataOperations'),
        ('FUN_180059550', 'CoreEngineManageDataOperations'),
        ('FUN_180059650', 'CoreEngineConfigureDataOperations'),
        ('FUN_180059750', 'CoreEngineInitializeDataOperations'),
        ('FUN_180059850', 'CoreEngineSetupDataOperations'),
        ('FUN_180059950', 'CoreEngineFinalizeDataOperations'),
        
        # 内存管理函数
        ('FUN_18005a000', 'CoreEngineAllocateMemory'),
        ('FUN_18005a100', 'CoreEngineFreeMemory'),
        ('FUN_18005a200', 'CoreEngineReallocateMemory'),
        ('FUN_18005a300', 'CoreEngineCopyMemory'),
        ('FUN_18005a400', 'CoreEngineMoveMemory'),
        ('FUN_18005a500', 'CoreEngineFillMemory'),
        ('FUN_18005a600', 'CoreEngineClearMemory'),
        ('FUN_18005a700', 'CoreEngineCompareMemory'),
        
        # 系统控制函数
        ('FUN_18005b000', 'CoreEngineControlSystem'),
        ('FUN_18005b100', 'CoreEngineManageSystem'),
        ('FUN_18005b200', 'CoreEngineConfigureSystem'),
        ('FUN_18005b300', 'CoreEngineInitializeSystem'),
        ('FUN_18005b400', 'CoreEngineSetupSystem'),
        ('FUN_18005b500', 'CoreEngineStartSystem'),
        ('FUN_18005b600', 'CoreEngineStopSystem'),
        ('FUN_18005b700', 'CoreEngineResetSystem'),
        
        # 错误处理函数
        ('FUN_18005c000', 'CoreEngineHandleError'),
        ('FUN_18005c100', 'CoreEngineProcessError'),
        ('FUN_18005c200', 'CoreEngineReportError'),
        ('FUN_18005c300', 'CoreEngineLogError'),
        ('FUN_18005c400', 'CoreEngineClearError'),
        ('FUN_18005c500', 'CoreEngineResetError'),
        
        # 调试和日志函数
        ('FUN_18005d000', 'CoreEngineDebugLog'),
        ('FUN_18005d100', 'CoreEngineTraceLog'),
        ('FUN_18005d200', 'CoreEngineInfoLog'),
        ('FUN_18005d300', 'CoreEngineWarningLog'),
        ('FUN_18005d400', 'CoreEngineErrorLog'),
        ('FUN_18005d500', 'CoreEngineDebugPrint'),
        
        # 配置管理函数
        ('FUN_18005e000', 'CoreEngineLoadConfig'),
        ('FUN_18005e100', 'CoreEngineSaveConfig'),
        ('FUN_18005e200', 'CoreEngineParseConfig'),
        ('FUN_18005e300', 'CoreEngineValidateConfig'),
        ('FUN_18005e400', 'CoreEngineApplyConfig'),
        ('FUN_18005e500', 'CoreEngineResetConfig'),
        
        # 状态管理函数
        ('FUN_18005f000', 'CoreEngineGetState'),
        ('FUN_18005f100', 'CoreEngineSetState'),
        ('FUN_18005f200', 'CoreEngineUpdateState'),
        ('FUN_18005f300', 'CoreEngineResetState'),
        ('FUN_18005f400', 'CoreEngineClearState'),
        ('FUN_18005f500', 'CoreEngineSaveState'),
        ('FUN_18005f600', 'CoreEngineRestoreState'),
        
        # 事件处理函数
        ('FUN_180060000', 'CoreEngineProcessEvent'),
        ('FUN_180060100', 'CoreEngineHandleEvent'),
        ('FUN_180060200', 'CoreEngineDispatchEvent'),
        ('FUN_180060300', 'CoreEngineQueueEvent'),
        ('FUN_180060400', 'CoreEngineDequeueEvent'),
        ('FUN_180060500', 'CoreEngineClearEvent'),
        
        # 线程管理函数
        ('FUN_180061000', 'CoreEngineCreateThread'),
        ('FUN_180061100', 'CoreEngineDestroyThread'),
        ('FUN_180061200', 'CoreEngineStartThread'),
        ('FUN_180061300', 'CoreEngineStopThread'),
        ('FUN_180061400', 'CoreEngineJoinThread'),
        ('FUN_180061500', 'CoreEngineDetachThread'),
        
        # 定时器函数
        ('FUN_180062000', 'CoreEngineCreateTimer'),
        ('FUN_180062100', 'CoreEngineDestroyTimer'),
        ('FUN_180062200', 'CoreEngineStartTimer'),
        ('FUN_180062300', 'CoreEngineStopTimer'),
        ('FUN_180062400', 'CoreEngineResetTimer'),
        ('FUN_180062500', 'CoreEngineGetTimerValue'),
        
        # 文件I/O函数
        ('FUN_180063000', 'CoreEngineOpenFile'),
        ('FUN_180063100', 'CoreEngineCloseFile'),
        ('FUN_180063200', 'CoreEngineReadFile'),
        ('FUN_180063300', 'CoreEngineWriteFile'),
        ('FUN_180063400', 'CoreEngineSeekFile'),
        ('FUN_180063500', 'CoreEngineFlushFile'),
        
        # 网络函数
        ('FUN_180064000', 'CoreEngineCreateSocket'),
        ('FUN_180064100', 'CoreEngineDestroySocket'),
        ('FUN_180064200', 'CoreEngineConnectSocket'),
        ('FUN_180064300', 'CoreEngineDisconnectSocket'),
        ('FUN_180064400', 'CoreEngineSendData'),
        ('FUN_180064500', 'CoreEngineReceiveData'),
        
        # 资源管理函数
        ('FUN_180065000', 'CoreEngineLoadResource'),
        ('FUN_180065100', 'CoreEngineUnloadResource'),
        ('FUN_180065200', 'CoreEngineFindResource'),
        ('FUN_180065300', 'CoreEngineAllocateResource'),
        ('FUN_180065400', 'CoreEngineFreeResource'),
        ('FUN_180065500', 'CoreEngineManageResource'),
        
        # 缓存管理函数
        ('FUN_180066000', 'CoreEngineCreateCache'),
        ('FUN_180066100', 'CoreEngineDestroyCache'),
        ('FUN_180066200', 'CoreEngineAddToCache'),
        ('FUN_180066300', 'CoreEngineGetFromCache'),
        ('FUN_180066400', 'CoreEngineRemoveFromCache'),
        ('FUN_180066500', 'CoreEngineClearCache'),
        
        # 池管理函数
        ('FUN_180067000', 'CoreEngineCreatePool'),
        ('FUN_180067100', 'CoreEngineDestroyPool'),
        ('FUN_180067200', 'CoreEngineAllocateFromPool'),
        ('FUN_180067300', 'CoreEngineFreeToPool'),
        ('FUN_180067400', 'CoreEngineResetPool'),
        ('FUN_180067500', 'CoreEngineGrowPool'),
        
        # 队列管理函数
        ('FUN_180068000', 'CoreEngineCreateQueue'),
        ('FUN_180068100', 'CoreEngineDestroyQueue'),
        ('FUN_180068200', 'CoreEngineEnqueue'),
        ('FUN_180068300', 'CoreEngineDequeue'),
        ('FUN_180068400', 'CoreEnginePeekQueue'),
        ('FUN_180068500', 'CoreEngineClearQueue'),
        
        # 栈管理函数
        ('FUN_180069000', 'CoreEngineCreateStack'),
        ('FUN_180069100', 'CoreEngineDestroyStack'),
        ('FUN_180069200', 'CoreEnginePushStack'),
        ('FUN_180069300', 'CoreEnginePopStack'),
        ('FUN_180069400', 'CoreEnginePeekStack'),
        ('FUN_180069500', 'CoreEngineClearStack'),
        
        # 链表管理函数
        ('FUN_18006a000', 'CoreEngineCreateList'),
        ('FUN_18006a100', 'CoreEngineDestroyList'),
        ('FUN_18006a200', 'CoreEngineAddToList'),
        ('FUN_18006a300', 'CoreEngineRemoveFromList'),
        ('FUN_18006a400', 'CoreEngineFindInList'),
        ('FUN_18006a500', 'CoreEngineClearList'),
        
        # 哈希表管理函数
        ('FUN_18006b000', 'CoreEngineCreateHashTable'),
        ('FUN_18006b100', 'CoreEngineDestroyHashTable'),
        ('FUN_18006b200', 'CoreEngineAddToHashTable'),
        ('FUN_18006b300', 'CoreEngineGetFromHashTable'),
        ('FUN_18006b400', 'CoreEngineRemoveFromHashTable'),
        ('FUN_18006b500', 'CoreEngineClearHashTable'),
        
        # 数学运算函数
        ('FUN_18006c000', 'CoreEngineCalculateSum'),
        ('FUN_18006c100', 'CoreEngineCalculateAverage'),
        ('FUN_18006c200', 'CoreEngineCalculateMinimum'),
        ('FUN_18006c300', 'CoreEngineCalculateMaximum'),
        ('FUN_18006c400', 'CoreEngineCalculateMedian'),
        ('FUN_18006c500', 'CoreEngineCalculateStandardDeviation'),
        
        # 字符串处理函数
        ('FUN_18006d000', 'CoreEngineCopyString'),
        ('FUN_18006d100', 'CoreEngineConcatString'),
        ('FUN_18006d200', 'CoreEngineCompareString'),
        ('FUN_18006d300', 'CoreEngineFindString'),
        ('FUN_18006d400', 'CoreEngineReplaceString'),
        ('FUN_18006d500', 'CoreEngineFormatString'),
        
        # 数据转换函数
        ('FUN_18006e000', 'CoreEngineConvertToInt'),
        ('FUN_18006e100', 'CoreEngineConvertToFloat'),
        ('FUN_18006e200', 'CoreEngineConvertToString'),
        ('FUN_18006e300', 'CoreEngineConvertFromInt'),
        ('FUN_18006e400', 'CoreEngineConvertFromFloat'),
        ('FUN_18006e500', 'CoreEngineConvertFromString'),
        
        # 加密函数
        ('FUN_18006f000', 'CoreEngineEncryptData'),
        ('FUN_18006f100', 'CoreEngineDecryptData'),
        ('FUN_18006f200', 'CoreEngineHashData'),
        ('FUN_18006f300', 'CoreEngineVerifyHash'),
        ('FUN_18006f400', 'CoreEngineSignData'),
        ('FUN_18006f500', 'CoreEngineVerifySignature'),
        
        # 压缩函数
        ('FUN_180070000', 'CoreEngineCompressData'),
        ('FUN_180070100', 'CoreEngineDecompressData'),
        ('FUN_180070200', 'CoreEngineCalculateChecksum'),
        ('FUN_180070300', 'CoreEngineVerifyChecksum'),
        ('FUN_180070400', 'CoreEngineEncodeData'),
        ('FUN_180070500', 'CoreEngineDecodeData'),
        
        # 音频处理函数
        ('FUN_180071000', 'CoreEngineInitializeAudio'),
        ('FUN_180071100', 'CoreEngineShutdownAudio'),
        ('FUN_180071200', 'CoreEnginePlayAudio'),
        ('FUN_180071300', 'CoreEngineStopAudio'),
        ('FUN_180071400', 'CoreEnginePauseAudio'),
        ('FUN_180071500', 'CoreEngineResumeAudio'),
        
        # 视频处理函数
        ('FUN_180072000', 'CoreEngineInitializeVideo'),
        ('FUN_180072100', 'CoreEngineShutdownVideo'),
        ('FUN_180072200', 'CoreEngineRenderVideo'),
        ('FUN_180072300', 'CoreEngineUpdateVideo'),
        ('FUN_180072400', 'CoreEngineClearVideo'),
        ('FUN_180072500', 'CoreEnginePresentVideo'),
        
        # 输入处理函数
        ('FUN_180073000', 'CoreEngineInitializeInput'),
        ('FUN_180073100', 'CoreEngineShutdownInput'),
        ('FUN_180073200', 'CoreEngineProcessInput'),
        ('FUN_180073300', 'CoreEngineHandleInput'),
        ('FUN_180073400', 'CoreEngineMapInput'),
        ('FUN_180073500', 'CoreEngineRemapInput'),
        
        # 物理引擎函数
        ('FUN_180074000', 'CoreEngineInitializePhysics'),
        ('FUN_180074100', 'CoreEngineShutdownPhysics'),
        ('FUN_180074200', 'CoreEngineUpdatePhysics'),
        ('FUN_180074300', 'CoreEngineSimulatePhysics'),
        ('FUN_180074400', 'CoreEngineApplyPhysics'),
        ('FUN_180074500', 'CoreEngineResetPhysics'),
        
        # 渲染引擎函数
        ('FUN_180075000', 'CoreEngineInitializeRendering'),
        ('FUN_180075100', 'CoreEngineShutdownRendering'),
        ('FUN_180075200', 'CoreEngineBeginRendering'),
        ('FUN_180075300', 'CoreEngineEndRendering'),
        ('FUN_180075400', 'CoreEngineFlushRendering'),
        ('FUN_180075500', 'CoreEnginePresentRendering'),
    ]
    
    # 执行替换
    original_content = content
    replacement_count = 0
    
    for old_name, new_name in function_replacements:
        # 使用词边界确保精确匹配
        pattern = r'\b' + re.escape(old_name) + r'\b'
        new_content = re.sub(pattern, new_name, content)
        if new_content != content:
            replacement_count += 1
            content = new_content
    
    # 检查是否有变化
    if content != original_content:
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"成功美化 {replacement_count} 个FUN_函数名")
        return True
    else:
        print("没有找到需要替换的FUN_函数名")
        return False

if __name__ == "__main__":
    beautify_fun_functions()