#!/usr/bin/env python3
"""
批量替换00_data_definitions.h文件中的UNK_标签为语义化名称
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def replace_unk_labels(content):
    """替换UNK_标签为语义化名称"""
    
    # 定义UNK_标签的映射关系
    unk_mappings = {
        # 网络相关字符串常量
        'UNK_180a38ea0': 'NetworkCommandStringConnect',
        'UNK_180a389b0': 'NetworkCommandStringDisconnect',
        'UNK_180a38988': 'NetworkCommandStringPing',
        'UNK_180a38a88': 'NetworkCommandStringPong',
        'UNK_180a38d38': 'NetworkCommandStringLogin',
        'UNK_180a38ad8': 'NetworkCommandStringLogout',
        'UNK_180a38a78': 'NetworkCommandStringAuth',
        'UNK_180a38ec0': 'NetworkCommandStringData',
        'UNK_180a38a48': 'NetworkCommandStringRequest',
        'UNK_180a38b48': 'NetworkCommandStringResponse',
        'UNK_180a38c40': 'NetworkCommandStringError',
        'UNK_180a38ca8': 'NetworkCommandStringStatus',
        'UNK_180a38e38': 'NetworkCommandStringInfo',
        'UNK_180a38a60': 'NetworkCommandStringQuery',
        'UNK_180a38bb8': 'NetworkCommandStringUpdate',
        'UNK_180a38e78': 'NetworkCommandStringSync',
        'UNK_180a38b20': 'NetworkCommandStringCreate',
        'UNK_180a38ae8': 'NetworkCommandStringDelete',
        'UNK_180a38c78': 'NetworkCommandStringModify',
        'UNK_180a38c58': 'NetworkCommandStringRead',
        'UNK_180a38be8': 'NetworkCommandStringWrite',
        'UNK_180a38d98': 'NetworkCommandStringExecute',
        'UNK_180a38be0': 'NetworkCommandStringCancel',
        'UNK_180a38bd0': 'NetworkCommandStringAbort',
        'UNK_180a38e50': 'NetworkCommandStringConfirm',
        'UNK_180a38f30': 'NetworkCommandStringComplete',
        'UNK_180a38d58': 'NetworkCommandStringPending',
        'UNK_180a38cc0': 'NetworkCommandStringActive',
        'UNK_180a38ce8': 'NetworkCommandStringIdle',
        'UNK_180a38dd8': 'NetworkCommandStringBusy',
        'UNK_180a38dc8': 'NetworkCommandStringReady',
        'UNK_180a38e90': 'NetworkCommandStringWait',
        'UNK_180a38e10': 'NetworkCommandStringTimeout',
        'UNK_180a38df8': 'NetworkCommandStringRetry',
        'UNK_180a38d80': 'NetworkCommandStringFailed',
        'UNK_180a38f10': 'NetworkCommandStringSuccess',
        'UNK_180a38e28': 'NetworkCommandStringUnknown',
        'UNK_180a38b60': 'NetworkCommandStringVersion',
        'UNK_180a38d10': 'NetworkCommandStringProtocol',
        'UNK_180a38de8': 'NetworkCommandStringFormat',
        'UNK_180a38db8': 'NetworkCommandStringEncoding',
        'UNK_180a38b88': 'NetworkCommandStringCompression',
        'UNK_180a38b70': 'NetworkCommandStringEncryption',
        'UNK_180a38d20': 'NetworkCommandStringDecryption',
        'UNK_180a38e60': 'NetworkCommandStringSignature',
        
        # 系统配置相关字符串常量
        'UNK_180a3ac00': 'SystemConfigStringVersion',
        'UNK_180a3acf8': 'SystemConfigStringPlatform',
        'UNK_180a3acd8': 'SystemConfigStringArchitecture',
        'UNK_180a3ad30': 'SystemConfigStringLocale',
        'UNK_180a3ad18': 'SystemConfigStringLanguage',
        'UNK_180a3ac90': 'SystemConfigStringTimezone',
        'UNK_180a3ac80': 'SystemConfigStringEncoding',
        'UNK_180a3acc8': 'SystemConfigStringDateFormat',
        'UNK_180a3aca8': 'SystemConfigStringTimeFormat',
        'UNK_180a3ade8': 'SystemConfigStringDebugMode',
        'UNK_180a3add0': 'SystemConfigStringLogLevel',
        'UNK_180a3ae18': 'SystemConfigStringLogPath',
        'UNK_180a3ae00': 'SystemConfigStringConfigPath',
        'UNK_180a3ad88': 'SystemConfigStringDataPath',
        'UNK_180a29da8': 'SystemConfigStringTempPath',
        'UNK_180a3ad60': 'SystemConfigStringCachePath',
        'UNK_180a3adb8': 'SystemConfigStringMemoryLimit',
        'UNK_180a3ada0': 'SystemConfigStringCpuLimit',
        
        # 缓冲区大小相关常量
        'UNK_180a3abe0': 'BufferSizeDefault',
        'UNK_180a1029c': 'BufferSizeMinimum',
        'UNK_180a3ac10': 'BufferSizeMaximum',
        'UNK_180a3ac48': 'BufferSizeNetwork',
        'UNK_180a3abe8': 'BufferSizeFile',
        'UNK_180a3a960': 'BufferSizeMemory',
        'UNK_180a3ab28': 'BufferSizeString',
        'UNK_180a39f78': 'BufferSizeArray',
        'UNK_180a3ab18': 'BufferSizeStruct',
        'UNK_180a39fb0': 'BufferSizeObject',
        'UNK_180a3ab50': 'BufferSizePacket',
        'UNK_180a3ab38': 'BufferSizeHeader',
        'UNK_180a3aae8': 'BufferSizeFooter',
        'UNK_180a3aad8': 'BufferSizePayload',
        'UNK_180a3ab08': 'BufferSizeChecksum',
        'UNK_180a3aaf8': 'BufferSizeSignature',
        'UNK_180a3abb0': 'BufferSizeMetadata',
        'UNK_180a3aba0': 'BufferSizePadding',
        'UNK_180a3abd0': 'BufferSizeAlignment',
        'UNK_180a3abc0': 'BufferSizeReserved',
        'UNK_180a3ab70': 'BufferSizePage',
        'UNK_180a3ab60': 'BufferSizeSector',
        'UNK_180a3ab90': 'BufferSizeCluster',
        'UNK_180a3ab80': 'BufferSizeBlock',
        'UNK_180a3ac30': 'BufferSizeChunk',
        'UNK_180a3ac18': 'BufferSizeSegment',
        'UNK_180a3ac68': 'BufferSizeRegion',
        
        # 内存管理相关常量
        'UNK_180a3a8b0': 'MemoryPoolDefault',
        'UNK_180a3a850': 'MemoryPoolSystem',
        'UNK_180a3a830': 'MemoryPoolUser',
        'UNK_180a3a870': 'MemoryPoolShared',
        'UNK_180a3a860': 'MemoryPoolPrivate',
        'UNK_180a04be8': 'MemoryPoolGlobal',
        'UNK_180a3a938': 'MemoryPoolLocal',
        'UNK_180a3a920': 'MemoryPoolStatic',
        'UNK_180a3a960': 'MemoryPoolDynamic',
        'UNK_180a3a948': 'MemoryPoolTemporary',
        'UNK_180a3a8f0': 'MemoryPoolPermanent',
        'UNK_180a3a8d8': 'MemoryPoolCache',
        'UNK_180a3a910': 'MemoryPoolBuffer',
        'UNK_180a3a900': 'MemoryPoolQueue',
        'UNK_180a3a9d8': 'MemoryPoolStack',
        'UNK_180a3a9c8': 'MemoryPoolHeap',
        'UNK_180a3a9f0': 'MemoryPoolVirtual',
        'UNK_180a3a9e0': 'MemoryPoolPhysical',
        'UNK_180a3a988': 'MemoryPoolMapped',
        'UNK_180a2a000': 'MemoryPoolDirect',
        'UNK_180a21a30': 'MemoryPoolIndirect',
        'UNK_180a3a970': 'MemoryPoolLocked',
        'UNK_180a3a9b0': 'MemoryPoolUnlocked',
        'UNK_180a3a998': 'MemoryPoolCommitted',
        'UNK_180a3aa98': 'MemoryPoolReserved',
        'UNK_180a3aa70': 'MemoryPoolFree',
        'UNK_180a3aac0': 'MemoryPoolUsed',
        'UNK_180a3aab0': 'MemoryPoolAvailable',
        'UNK_180a3aa20': 'MemoryPoolTotal',
        'UNK_180a3aa08': 'MemoryPoolLimit',
        'UNK_180a3aa50': 'MemoryPoolThreshold',
        'UNK_180a3aa38': 'MemoryPoolQuota',
        
        # 其他系统常量
        'UNK_180a3a650': 'SystemFlagEnabled',
        'UNK_180a3a640': 'SystemFlagDisabled',
        'UNK_180a3a800': 'SystemFlagActive',
        'UNK_180a3a7a8': 'SystemFlagInactive',
        'UNK_180a3a798': 'SystemFlagReady',
        'UNK_180a3a7d0': 'SystemFlagBusy',
        'UNK_180a3a7b8': 'SystemFlagIdle',
        'UNK_180a3a898': 'SystemFlagRunning',
        'UNK_180a3a880': 'SystemFlagStopped',
        'UNK_180a3a8c0': 'SystemFlagPaused',
        'UNK_180a3a5a8': 'SystemFlagError',
        'UNK_180a2e2bc': 'SystemFlagWarning',
        'UNK_180a2e9e0': 'SystemFlagInfo',
        'UNK_180a3a720': 'SystemFlagDebug',
        'UNK_180a3a754': 'SystemFlagTrace',
        'UNK_180a3a748': 'SystemFlagVerbose',
        'UNK_180a3a7f0': 'SystemFlagQuiet',
        'UNK_180a3a7e0': 'SystemFlagSilent',
        'UNK_180a3a820': 'SystemFlagNormal',
        'UNK_180a1a470': 'SystemFlagMinimal',
        'UNK_180a3a758': 'SystemFlagMaximum',
        'UNK_180a3a788': 'SystemFlagOptimal',
        'UNK_180a3a778': 'SystemFlagDefault',
        'UNK_180a3a738': 'SystemFlagCustom',
        
        # 验证相关常量
        'UNK_180a3a6c0': 'ValidationSuccess',
        'UNK_180a3a708': 'ValidationFailure',
        'UNK_180a3a6f8': 'ValidationError',
        'UNK_180a39ee0': 'ValidationWarning',
        'UNK_180a39e48': 'ValidationInfo',
        'UNK_180a39dd0': 'ValidationDebug',
        'UNK_180a39df0': 'ValidationTrace',
        'UNK_180a39fb0': 'ValidationVerbose',
        'UNK_180a3a670': 'ValidationQuiet',
        'UNK_180a3a660': 'ValidationSilent',
        'UNK_180a3a6a0': 'ValidationNormal',
        'UNK_180a3a688': 'ValidationMinimal',
        'UNK_180a39d58': 'ValidationMaximum',
        'UNK_180a39f18': 'ValidationOptimal',
        'UNK_180a3a768': 'ValidationDefault',
        'UNK_180a3a5d0': 'ValidationCustom',
        'UNK_180a3a5c0': 'ValidationStrict',
        'UNK_180a3a600': 'ValidationRelaxed',
        'UNK_180a3a5e0': 'ValidationModerate',
        'UNK_180a3a6e0': 'ValidationBalanced',
        
        # 配置相关常量
        'UNK_180a3a2f8': 'ConfigKeyVersion',
        'UNK_180a3a2e8': 'ConfigKeyPlatform',
        'UNK_180a3a310': 'ConfigKeyArchitecture',
        'UNK_180a3a300': 'ConfigKeyLocale',
        'UNK_180a3a418': 'ConfigKeyLanguage',
        'UNK_180a3a408': 'ConfigKeyTimezone',
        'UNK_180a3a440': 'ConfigKeyEncoding',
        'UNK_180a3a428': 'ConfigKeyDateFormat',
        'UNK_180a3a3d0': 'ConfigKeyTimeFormat',
        'UNK_180a3a3c0': 'ConfigKeyDebugMode',
        'UNK_180a3a3f8': 'ConfigKeyLogLevel',
        'UNK_180a3a3e8': 'ConfigKeyLogPath',
        'UNK_180a3a4c0': 'ConfigKeyConfigPath',
        'UNK_180a3a4a8': 'ConfigKeyDataPath',
        'UNK_180a3a4e0': 'ConfigKeyTempPath',
        'UNK_180a3a4d0': 'ConfigKeyCachePath',
        'UNK_180a3a468': 'ConfigKeyMemoryLimit',
        'UNK_180a3a458': 'ConfigKeyCpuLimit',
        'UNK_180a3a498': 'ConfigKeyThreadLimit',
        'UNK_180a3a478': 'ConfigKeyProcessLimit',
        'UNK_180a3a560': 'ConfigKeyFileLimit',
        'UNK_180a3a540': 'ConfigKeyNetworkLimit',
        'UNK_180a3a5a8': 'ConfigKeySecurityLevel',
        'UNK_180a3a580': 'ConfigKeyPermission',
        'UNK_180a3a508': 'ConfigKeyAccessControl'
    }
    
    # 执行替换
    for unk_label, semantic_name in unk_mappings.items():
        content = content.replace(f'&{unk_label}', f'&{semantic_name}')
        content = content.replace(unk_label, semantic_name)
    
    return content

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h'
    
    # 读取文件
    content = read_file(file_path)
    
    # 替换UNK_标签
    new_content = replace_unk_labels(content)
    
    # 写入文件
    write_file(file_path, new_content)
    
    print(f"成功美化文件: {file_path}")

if __name__ == '__main__':
    main()