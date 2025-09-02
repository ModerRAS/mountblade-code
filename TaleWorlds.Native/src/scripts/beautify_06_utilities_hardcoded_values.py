#!/usr/bin/env python3
"""
美化06_utilities.c文件中的硬编码数值
将硬编码的数值替换为有意义的常量名
"""

import re
import sys

def replace_hardcoded_values():
    """替换硬编码数值为有意义的常量名"""
    
    replacements = [
        # 内存地址相关
        (r'0x180c4f450', 'SystemDataBaseAddress'),
        (r'0x180985054', 'SystemResourceOffset'),
        (r'0x180c91970', 'SystemMutexAddress'),
        
        # 常量值
        (r'0xffffffff', 'InvalidResourceHandle'),
        (r'0xffffffffffffffff', 'MaximumUInt64Value'),
        (r'0xfffffffffffffffe', 'CleanupFlagMask'),
        (r'0xffffffffffffffc0', 'MemoryAlignmentMask'),
        (r'0xffffffffffc00000', 'MemoryAddressMask'),
        (r'0x80000000', 'Int32MinimumValue'),
        (r'0x7fffffff', 'Int32MaximumValue'),
        (r'0x3f800000', 'FloatOneValue'),
        (r'0xbf800000', 'FloatNegativeOneValue'),
        (r'0x7f800000', 'FloatInfinityMask'),
        
        # 标志位
        (r'0x10000000', 'SecurityValidationFlag'),
        (r'0x4000', 'ResourceHashReservedBit'),
        (r'0x7fff', 'ResourceHashValueMask'),
        (r'0xffff7fff', 'ResourceHashMask'),
        (r'0xffffc000', 'ResourceHashShiftMask'),
        
        # 校验种子值
        (r'0x46464542', 'ChecksumSeedValueFEFB'),
        (r'0x42464542', 'ChecksumSeedValueBEFB'),
        (r'0x4c525443', 'ChecksumSeedValueCTRL'),
        (r'0x4f525443', 'ChecksumSeedValueORTC'),
        (r'0x54495645', 'ChecksumSeedValueVIVE'),
        (r'0x42495645', 'ChecksumSeedValueBIVE'),
        (r'0x54534e49', 'ChecksumSeedValueSINI'),
        (r'0x2050414d', 'ChecksumSeedValueMAP'),
        (r'0x4f4c4d50', 'ChecksumSeedValueLOMP'),
        (r'0x424c4d50', 'ChecksumSeedValueBLOMP'),
        (r'0x54494157', 'ChecksumSeedValueTIW'),
        (r'0x42494157', 'ChecksumSeedValueBTIW'),
        (r'0x54495053', 'ChecksumSeedValueTIPS'),
        (r'0x42495053', 'ChecksumSeedValueBTIPS'),
        (r'0x46464553', 'ChecksumSeedValueFES'),
        (r'0x42464553', 'ChecksumSeedValueBFES'),
        (r'0x46464353', 'ChecksumSeedValueFCS'),
        (r'0x46454353', 'ChecksumSeedValueEFCS'),
        (r'0x50414e53', 'ChecksumSeedValuePANS'),
        (r'0x42414e53', 'ChecksumSeedValueBPANS'),
        (r'0x53505250', 'ChecksumSeedValueSPRP'),
        (r'0x504f5250', 'ChecksumSeedValuePORP'),
        (r'0x4e4c4d54', 'ChecksumSeedValueNLMT'),
        (r'0x424e4c54', 'ChecksumSeedValueBNLMT'),
        (r'0x4e415254', 'ChecksumSeedValueNART'),
        (r'0x424e5254', 'ChecksumSeedValueBNRT'),
        (r'0x54494157', 'ChecksumSeedValueTIW'),
        (r'0x42494157', 'ChecksumSeedValueBTIW'),
        (r'0x46454d50', 'ChecksumSeedValueFEMP'),
        (r'0x54534c50', 'ChecksumSeedValueTSLP'),
        (r'0x4a4f5250', 'ChecksumSeedValueJORS'),
        (r'0x494b4e42', 'ChecksumSeedValueIKNB'),
        
        # 错误代码
        (r'0x1c', 'ErrorInvalidObjectHandle'),
        (r'0x1d', 'ErrorInvalidRegistrationData'),
        (r'0x1e', 'ErrorInvalidResourceData'),
        (r'0x1f', 'ErrorResourceValidationFailed'),
        (r'0x2e', 'ErrorFlagCheckFailure'),
        (r'0x4c', 'ErrorPointerCheckFailure'),
        (r'0x4e', 'ErrorStatusCheckFailure'),
        (r'0xe9', 'ResourceAllocationErrorCode'),
        (r'0xf4', 'MemoryAllocationErrorCode'),
        (r'0x100', 'BufferExpansionErrorCode'),
        
        # 偏移量
        (r'0x10', 'ObjectContextOffset'),
        (r'0x48', 'RegistrationHandleOffset'),
        (r'0x38', 'RegistrationDataOffset'),
        (r'0xe4', 'RegistrationStatusOffset'),
        (r'0x4d8', 'RegistrationArrayOffset'),
        (r'0x4e4', 'RegistrationSizeOffset'),
        (r'0x4e8', 'RegistrationCapacityOffset'),
        (r'0x4e0', 'RegistrationCountOffset'),
        (r'0x368', 'RegistrationValidationDataOffset'),
        (r'0x18', 'ThreadLocalStorageDataOffset'),
        (r'0x20', 'ThreadResourceStateOffset'),
        (r'0x30', 'ThreadResourceCountOffset'),
        (r'0x4', 'ResourceManagementStateOffset'),
        (r'0x5', 'ResourceManagementCleanupOffset'),
        (r'0x7', 'ResourceManagementStatusOffset'),
        
        # 其他常量
        (r'0xffffffc0', 'MaximumProcessableItemsLimit'),
        (r'0x8e', 'SystemResourceSizeLimit'),
        (r'0x27', 'SecurityOperationType'),
    ]
    
    input_file = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    output_file = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities_temp.c'
    
    try:
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 应用所有替换
        for pattern, replacement in replacements:
            content = re.sub(pattern, replacement, content)
        
        with open(output_file, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print(f"成功替换硬编码数值，输出文件: {output_file}")
        return True
        
    except Exception as e:
        print(f"替换过程中发生错误: {e}")
        return False

if __name__ == "__main__":
    replace_hardcoded_values()