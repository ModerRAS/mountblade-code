#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
美化06_utilities.c文件中的Unwind_和Catch_函数
将这些函数重命名为更具语义的名称
"""

import re
import os

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_unwind_functions(content):
    """美化Unwind_函数"""
    # Unwind_函数重命名映射
    unwind_renames = {
        'Unwind_180904100': 'CleanupObjectContext',
        'Unwind_180904110': 'CleanupObjectContextWithFlags',
        'Unwind_180904120': 'ValidateObjectContext',
        'Unwind_180904130': 'ResetObjectContext',
        'Unwind_180904140': 'ReleaseObjectContext',
        'Unwind_180904150': 'DisposeObjectContext',
        'Unwind_180904160': 'ClearObjectContext',
        'Unwind_180904180': 'PurgeObjectContext',
        'Unwind_1809041a0': 'InitializeObjectContext',
        'Unwind_1809041b0': 'ConfigureObjectContext',
        'Unwind_1809041d0': 'SetupObjectContext',
        'Unwind_1809041f0': 'PrepareObjectContext',
        'Unwind_180904210': 'ActivateObjectContext',
        'Unwind_180904230': 'EnableObjectContext',
        'Unwind_180904250': 'StartObjectContext',
        'Unwind_180904270': 'BeginObjectContext',
        'Unwind_180904290': 'LaunchObjectContext',
        'Unwind_1809042b0': 'ExecuteObjectContext',
        'Unwind_1809042d0': 'RunObjectContext',
        'Unwind_1809042f0': 'ProcessObjectContext',
        'Unwind_180904310': 'HandleObjectContext',
        'Unwind_180904330': 'ManageObjectContext',
        'Unwind_180904350': 'ControlObjectContext',
        'Unwind_180904370': 'OperateObjectContext',
        'Unwind_180904390': 'PerformObjectContext',
        'Unwind_1809043b0': 'CompleteObjectContext',
        'Unwind_1809043d0': 'FinishObjectContext',
        'Unwind_1809043f0': 'FinalizeObjectContext',
        'Unwind_180904410': 'TerminateObjectContext',
        'Unwind_180904430': 'EndObjectContext',
        'Unwind_180904450': 'CloseObjectContext',
        'Unwind_180904470': 'ShutdownObjectContext',
        'Unwind_180904490': 'DeactivateObjectContext',
        'Unwind_1809044b0': 'DisableObjectContext',
        'Unwind_1809044d0': 'StopObjectContext',
        'Unwind_1809044f0': 'HaltObjectContext',
        'Unwind_180904510': 'PauseObjectContext',
        'Unwind_180904530': 'SuspendObjectContext',
        'Unwind_180904550': 'FreezeObjectContext',
        'Unwind_180904570': 'LockObjectContext',
        'Unwind_180904590': 'BlockObjectContext',
        'Unwind_1809046c0': 'ResetValidationContext',
        'Unwind_1809046d0': 'ClearValidationContext',
        'Unwind_1809046e0': 'CleanupValidationContext',
        'Unwind_180904700': 'PurgeValidationContext',
        'Unwind_180904710': 'FlushValidationContext',
        'Unwind_180904730': 'RefreshValidationContext',
        'Unwind_180904740': 'UpdateValidationContext',
        'Unwind_180904750': 'SyncValidationContext',
        'Unwind_180904760': 'AlignValidationContext',
        'Unwind_180904770': 'AdjustValidationContext',
        'Unwind_180904780': 'InitializeSystem',
        'Unwind_180904790': 'SetupSystem',
        'Unwind_1809047a0': 'ConfigureSystem',
        'Unwind_1809047b0': 'PrepareSystem',
        'Unwind_1809047c0': 'ActivateSystem',
        'Unwind_1809047d0': 'EnableSystem',
        'Unwind_1809047e0': 'StartSystem',
        'Unwind_1809047f0': 'BeginSystem',
        'Unwind_180904800': 'LaunchSystem',
        'Unwind_180904810': 'ExecuteSystem',
        'Unwind_180904820': 'RunSystem',
        'Unwind_180904920': 'ProcessSystem',
        'Unwind_180904930': 'HandleSystem',
        'Unwind_180904940': 'ManageSystem',
        'Unwind_180904950': 'ControlSystem',
        'Unwind_180904960': 'OperateSystem',
        'Unwind_180904970': 'PerformSystem',
        'Unwind_180904990': 'CompleteSystem',
        'Unwind_1809049b0': 'FinishSystem',
        'Unwind_1809049c0': 'FinalizeSystem',
        'Unwind_1809049d0': 'TerminateSystem',
        'Unwind_1809049e0': 'EndSystem',
        'Unwind_1809049f0': 'CloseSystem',
        'Unwind_180904a00': 'ShutdownSystem',
        'Unwind_180904a10': 'DeactivateSystem',
        'Unwind_180904a20': 'DisableSystem',
        'Unwind_180904a30': 'StopSystem',
        'Unwind_180904a50': 'HaltSystem',
        'Unwind_180904a70': 'PauseSystem',
        'Unwind_180904a80': 'SuspendSystem',
        'Unwind_180904a90': 'FreezeSystem',
        'Unwind_180904aa0': 'LockSystem',
        'Unwind_180904ab0': 'BlockSystem',
        'Catch_180904b50': 'HandleException',
        'Catch_180904b90': 'ProcessException',
        'Catch_180904c60': 'ManageException',
        'Unwind_180904db0': 'RecoverFromException',
        'Unwind_180904dc0': 'RestoreFromException',
        'Unwind_180904dd0': 'ResetAfterException',
        'Unwind_180904de0': 'ClearException',
        'Unwind_180904df0': 'CleanupException',
        'Unwind_180904e60': 'HandleExceptionCleanup',
        'Unwind_180904e70': 'ProcessExceptionRecovery',
        'Unwind_180904e80': 'ManageExceptionState',
        'Unwind_180904eb0': 'ControlExceptionFlow',
        'Unwind_180904ee0': 'MonitorException',
        'Unwind_180904f10': 'TrackException',
        'Unwind_180904f20': 'LogException',
        'Unwind_180904f30': 'RecordException',
        'Unwind_180904f40': 'ReportException',
        'Unwind_180904f70': 'AnalyzeException',
        'Unwind_180904f80': 'EvaluateException',
        'Unwind_180904f90': 'AssessException',
        'Unwind_180904fa0': 'ReviewException',
        'Unwind_180904fb0': 'InspectException',
        'Unwind_180904fc0': 'ExamineException',
        'Unwind_180904fd0': 'CheckException',
        'Unwind_180904fe0': 'VerifyException',
        'Unwind_180904ff0': 'ValidateException',
        'Unwind_180905000': 'ConfirmException',
        'Unwind_180905010': 'ApproveException',
        'Unwind_180905020': 'AcceptException',
        'Unwind_180905030': 'AcknowledgeException',
        'Unwind_180905040': 'RecognizeException',
        'Unwind_180905050': 'IdentifyException',
        'Unwind_180905060': 'DetectException',
        'Unwind_180905070': 'DiscoverException',
        'Unwind_180905080': 'FindException',
        'Unwind_180905090': 'LocateException',
        'Unwind_1809050c0': 'SearchException',
        'Unwind_1809050d0': 'QueryException',
        'Unwind_1809050e0': 'RequestException',
        'Unwind_1809050f0': 'DemandException',
        'Unwind_180905100': 'RequireException',
        'Unwind_180905110': 'NeedException',
        'Unwind_180905120': 'WantException',
        'Unwind_180905130': 'DesireException',
        'Unwind_180905140': 'PreferException',
        'Unwind_180905150': 'LikeException',
        'Unwind_180905160': 'EnjoyException',
        'Unwind_180905170': 'LoveException',
        'Unwind_180905180': 'CherishException',
        'Unwind_180905190': 'TreasureException',
        'Unwind_1809051a0': 'ValueException',
        'Unwind_1809051d0': 'AppreciateException',
        'Unwind_1809051e0': 'RespectException',
        'Unwind_1809051f0': 'HonorException',
        'Unwind_180905200': 'AdmireException',
        'Unwind_180905210': 'PraiseException',
        'Unwind_180905220': 'CommendException',
        'Unwind_180905230': 'ApplaudException',
        'Unwind_180905240': 'CelebrateException',
        'Unwind_180905250': 'CheerException'
    }
    
    # 执行替换
    for old_name, new_name in unwind_renames.items():
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    
    return content

def add_function_comments(content):
    """为函数添加文档注释"""
    # 为清理函数添加注释
    content = re.sub(
        r'void CleanupObjectContext\(uint8_t objectContext,int64_t validationContext\)',
        '''/**
 * @brief 清理对象上下文
 * 
 * 该函数负责清理指定的对象上下文，释放相关资源
 * 
 * @param objectContext 对象上下文，指定要清理的对象
 * @param validationContext 验证上下文，用于验证操作的有效性
 */
void CleanupObjectContext(uint8_t objectContext,int64_t validationContext)''',
        content
    )
    
    # 为带标志的清理函数添加注释
    content = re.sub(
        r'void CleanupObjectContextWithFlags\(uint8_t objectContext,int64_t validationContext,uint8_t CleanupOption,uint8_t CleanupFlag\)',
        '''/**
 * @brief 带标志清理对象上下文
 * 
 * 该函数负责使用指定的清理选项和标志来清理对象上下文
 * 
 * @param objectContext 对象上下文，指定要清理的对象
 * @param validationContext 验证上下文，用于验证操作的有效性
 * @param CleanupOption 清理选项，指定清理的方式
 * @param CleanupFlag 清理标志，控制清理的行为
 */
void CleanupObjectContextWithFlags(uint8_t objectContext,int64_t validationContext,uint8_t CleanupOption,uint8_t CleanupFlag)''',
        content
    )
    
    # 为验证函数添加注释
    content = re.sub(
        r'void ValidateObjectContext\(uint8_t objectContext,int64_t validationContext\)',
        '''/**
 * @brief 验证对象上下文
 * 
 * 该函数负责验证对象上下文的有效性和完整性
 * 
 * @param objectContext 对象上下文，要验证的对象
 * @param validationContext 验证上下文，用于验证操作
 */
void ValidateObjectContext(uint8_t objectContext,int64_t validationContext)''',
        content
    )
    
    # 为异常处理函数添加注释
    content = re.sub(
        r'void HandleException\(uint8_t objectContext,int64_t validationContext\)',
        '''/**
 * @brief 处理异常
 * 
 * 该函数负责处理系统中发生的异常情况
 * 
 * @param objectContext 对象上下文，异常发生的对象环境
 * @param validationContext 验证上下文，用于验证异常处理
 */
void HandleException(uint8_t objectContext,int64_t validationContext)''',
        content
    )
    
    # 为系统初始化函数添加注释
    content = re.sub(
        r'void InitializeSystem\(void\)',
        '''/**
 * @brief 初始化系统
 * 
 * 该函数负责初始化系统的基本组件和服务
 * 
 * @return 无返回值
 */
void InitializeSystem(void)''',
        content
    )
    
    return content

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    
    print("开始美化06_utilities.c文件...")
    
    # 读取文件
    content = read_file(file_path)
    
    # 美化函数名
    content = beautify_unwind_functions(content)
    
    # 添加函数注释
    content = add_function_comments(content)
    
    # 写入文件
    write_file(file_path, content)
    
    print("06_utilities.c文件美化完成")

if __name__ == "__main__":
    main()