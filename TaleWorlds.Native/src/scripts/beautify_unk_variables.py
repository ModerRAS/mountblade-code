#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
美化02_core_engine.c文件中的UNK_变量名
基于已有的替换映射进行批量重命名
"""

import re
import os

def beautify_unk_variables():
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
    
    # 备份原始文件
    backup_path = file_path + ".backup"
    if not os.path.exists(backup_path):
        print(f"创建备份文件: {backup_path}")
        os.system(f"cp '{file_path}' '{backup_path}'")
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # UNK_变量名替换映射
    replacements = [
        # SystemMemoryDataTemplate 系列
        ('SystemMemoryDataTemplateA', 'SystemMemoryDataTemplateAudio'),
        ('SystemMemoryDataTemplateB', 'SystemMemoryDataTemplateVideo'),
        ('SystemMemoryDataTemplateC', 'SystemMemoryDataTemplateInput'),
        ('SystemMemoryDataTemplateD', 'SystemMemoryDataTemplateNetwork'),
        ('SystemMemoryDataTemplateE', 'SystemMemoryDataTemplatePhysics'),
        ('SystemMemoryDataTemplateF', 'SystemMemoryDataTemplateRendering'),
        ('SystemMemoryDataTemplateG', 'SystemMemoryDataTemplateAudioPrimary'),
        ('SystemMemoryDataTemplateH', 'SystemMemoryDataTemplateVideoPrimary'),
        ('SystemMemoryDataTemplateI', 'SystemMemoryDataTemplateInputPrimary'),
        ('SystemMemoryDataTemplateJ', 'SystemMemoryDataTemplateNetworkPrimary'),
        ('SystemMemoryDataTemplateK', 'SystemMemoryDataTemplatePhysicsPrimary'),
        ('SystemMemoryDataTemplateL', 'SystemMemoryDataTemplateRenderingPrimary'),
        ('SystemMemoryDataTemplateM', 'SystemMemoryDataTemplateAudioSecondary'),
        ('SystemMemoryDataTemplateN', 'SystemMemoryDataTemplateVideoSecondary'),
        ('SystemMemoryDataTemplateO', 'SystemMemoryDataTemplateInputSecondary'),
        ('SystemMemoryDataTemplateP', 'SystemMemoryDataTemplateNetworkSecondary'),
        ('SystemMemoryDataTemplateQ', 'SystemMemoryDataTemplatePhysicsSecondary'),
        ('SystemMemoryDataTemplateR', 'SystemMemoryDataTemplateRenderingSecondary'),
        ('SystemMemoryDataTemplateS', 'SystemMemoryDataTemplateAudioTertiary'),
        ('SystemMemoryDataTemplateT', 'SystemMemoryDataTemplateVideoTertiary'),
        ('SystemMemoryDataTemplateU', 'SystemMemoryDataTemplateInputTertiary'),
        ('SystemMemoryDataTemplateV', 'SystemMemoryDataTemplateNetworkTertiary'),
        ('SystemMemoryDataTemplateW', 'SystemMemoryDataTemplatePhysicsTertiary'),
        ('SystemMemoryDataTemplateX', 'SystemMemoryDataTemplateRenderingTertiary'),
        
        # SystemComparisonData 系列
        ('SystemComparisonDataPrimary', 'SystemComparisonDataMemoryPrimary'),
        ('SystemComparisonDataSecondary', 'SystemComparisonDataMemorySecondary'),
        ('SystemComparisonDataTertiary', 'SystemComparisonDataMemoryTertiary'),
        ('SystemComparisonDataQuaternary', 'SystemComparisonDataConnectionPrimary'),
        ('SystemComparisonDataQuinary', 'SystemComparisonDataConnectionSecondary'),
        ('SystemComparisonDataSextenary', 'SystemComparisonDataQueuePrimary'),
        ('SystemComparisonDataSeptenary', 'SystemComparisonDataEventPrimary'),
        ('SystemComparisonDataOctonary', 'SystemComparisonDataSyncPrimary'),
        ('SystemComparisonDataNonary', 'SystemComparisonDataAudioPrimary'),
        ('SystemComparisonDataDenary', 'SystemComparisonDataInputPrimary'),
        ('SystemComparisonDataUndenary', 'SystemComparisonDataResourcePrimary'),
        
        # SystemConnectionTemplate 系列
        ('SystemConnectionTemplateA', 'SystemConnectionTemplateAudio'),
        ('SystemConnectionTemplateB', 'SystemConnectionTemplateVideo'),
        ('SystemConnectionTemplateC', 'SystemConnectionTemplateInput'),
        ('SystemConnectionTemplateD', 'SystemConnectionTemplateNetwork'),
        ('SystemConnectionTemplateE', 'SystemConnectionTemplatePhysics'),
        ('SystemConnectionTemplateF', 'SystemConnectionTemplateRendering'),
        ('SystemConnectionTemplateG', 'SystemConnectionTemplateAudioPrimary'),
        
        # UNK_变量名替换
        ('UNK_180a3cf50', 'SystemDataBufferPrimary'),
        ('UNK_1809fe6d8', 'SystemDataBufferSecondary'),
        ('UNK_1809fd9a0', 'NetworkConfigBuffer'),
        ('UNK_1809fd9b0', 'NetworkStatusBuffer'),
        ('UNK_1809fd9d0', 'NetworkParameterBuffer'),
        ('UNK_1809fd9f0', 'NetworkControlBuffer'),
        ('UNK_1809fda10', 'NetworkTransferBuffer'),
        ('UNK_1809fda30', 'NetworkSessionBuffer'),
        ('UNK_1809fda58', 'NetworkConnectionBuffer'),
        ('UNK_1809fda80', 'NetworkPacketBuffer'),
        ('UNK_1809fdaa8', 'NetworkStreamBuffer'),
        ('UNK_1809fdad0', 'NetworkSecurityBuffer'),
        ('UNK_1809fdaf8', 'NetworkEncryptionBuffer'),
        ('UNK_1809fdb20', 'NetworkCompressionBuffer'),
        ('UNK_1809fdb40', 'NetworkHeaderBuffer'),
        ('UNK_1809fdbd0', 'NetworkFooterBuffer'),
        ('UNK_1809fdc18', 'NetworkChecksumBuffer'),
        ('UNK_1809fe220', 'NetworkValidationBuffer'),
        ('UNK_1809fe85c', 'NetworkErrorCodeBuffer'),
        ('UNK_180a07805', 'SystemStringBuffer'),
        ('UNK_180a0888c', 'SystemConfigBuffer'),
        ('UNK_180a08db0', 'SystemMemoryBuffer'),
        ('UNK_180a0b408', 'SystemTimerBuffer'),
        ('UNK_180a0f0b8', 'SystemStatusBuffer'),
        ('UNK_180a10500', 'SystemTableBuffer'),
        ('UNK_180a10698', 'SystemCounterBuffer'),
        ('UNK_180a130b4', 'StringComparisonTable'),
        ('UNK_180a13100', 'StringOperationTable'),
        ('UNK_180a13108', 'StringFormatTable'),
        ('UNK_180a13158', 'StringValidationTable'),
        ('UNK_180a13160', 'StringConversionTable'),
        ('UNK_180a1318c', 'StringEncodingTable'),
        ('UNK_180a1316c', 'StringCompressionTable'),
        ('UNK_180a13174', 'StringEncryptionTable'),
        ('UNK_180a131a0', 'StringHashingTable'),
        ('UNK_180a131a8', 'StringChecksumTable'),
        ('UNK_180a13194', 'StringIndexingTable'),
        ('UNK_180a1319c', 'StringSearchingTable'),
        ('UNK_180a131bc', 'StringSortingTable'),
        ('UNK_180a131c0', 'StringFilteringTable'),
        ('UNK_180a131b0', 'StringGroupingTable'),
        ('UNK_180a131b4', 'StringPartitioningTable'),
        ('UNK_180a131cc', 'StringAggregationTable'),
        ('UNK_180a131d4', 'StringTransformationTable'),
        ('UNK_180a131c4', 'StringNormalizationTable'),
        ('UNK_180a131c8', 'StringSanitizationTable'),
        ('UNK_180a131ec', 'StringOptimizationTable'),
        ('UNK_180a13238', 'StringCachingTable'),
        ('UNK_180a13230', 'StringBufferingTable'),
        ('UNK_180a13264', 'StringStreamingTable'),
        ('UNK_180a1326c', 'StringBatchingTable'),
        ('UNK_180a1324c', 'StringQueuingTable'),
        ('UNK_180a132a4', 'StringSchedulingTable'),
        ('UNK_180a13274', 'StringPrioritizationTable'),
        ('UNK_18098bc74', 'SystemDebugBuffer'),
    ]
    
    # 执行替换
    original_content = content
    replacement_count = 0
    
    for old_name, new_name in replacements:
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
        print(f"成功美化 {replacement_count} 个变量名")
        return True
    else:
        print("没有找到需要替换的变量名")
        return False

if __name__ == "__main__":
    beautify_unk_variables()