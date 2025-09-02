#!/usr/bin/env python3
"""
美化06_utilities.c文件中的魔法数字
替换十六进制常量为有意义的常量定义
"""

import re

def beautify_magic_numbers():
    """美化文件中的魔法数字"""
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义替换规则
    replacements = [
        # 浮点数常量
        (r'0x7f800000', 'FloatInfinityMask'),
        (r'0xbf800000', 'FloatNegativeInfinity'),
        (r'0x3f800000', 'FloatOneValue'),
        (r'-0x80000000', 'Int32MinimumValue'),
        
        # 内存对齐常量
        (r'0xfffffff0', 'MemoryAlignmentMask'),
        (r'0xf', 'MemoryAlignment16Bytes'),
        
        # 资源管理常量
        (r'0x3fffffff', 'ResourceSizeLimit'),
        (r'0xffffffff', 'UInt32MaximumValue'),
        (r'0xffffffffffffffff', 'UInt64MaximumValue'),
        
        # 系统常量
        (r'0x17c', 'SystemContextOffset'),
        (r'0x180c4f450', 'SystemDataBaseAddress'),
        (r'0x180985054', 'SystemResourceOffset'),
        (r'256\.0', 'SystemFloatMaxValue'),
        (r'0x8e', 'SystemResourceSizeLimit'),
        (r'0x7fffffff', 'SystemMaxIntValue'),
        
        # 安全常量
        (r'0x27', 'SecurityOperationType'),
        (r'0x10000000', 'SecurityValidationFlag'),
        
        # 资源偏移常量
        (r'0x48', 'ResourceContextOffset48'),
        (r'0x90', 'ResourceContextOffset90'),
        (r'0xb0', 'ResourceContextOffsetB0'),
        (r'0xb4', 'ResourceContextOffsetB4'),
        (r'0x6c', 'ResourceContextOffset6c'),
        (r'0xf8', 'ResourceContextOffsetF8'),
        
        # 缓冲区偏移常量
        (r'0x70', 'BufferOffset70'),
        (r'0x80', 'BufferOffset80'),
        (r'0x88', 'BufferOffset88'),
        (r'0x94', 'BufferOffset94'),
        (r'0xb8', 'BufferOffsetB8'),
        
        # 标志位掩码
        (r'0xfdffffff', 'FlagBit25Mask'),
        (r'0xfbffffff', 'FlagBit26Mask'),
        (r'0xffffff00', 'ByteAlignmentMask'),
        
        # 验证常量
        (r'0x3ffffffe', 'ValidationSizeLimitMinus2'),
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
        (r'0x54494157', 'ChecksumSeedValueTIWS'),
        (r'0x42494157', 'ChecksumSeedValueBIWS'),
        (r'0x4a4f5250', 'ChecksumSeedValueJORS'),
        (r'0x494b4e42', 'ChecksumSeedValueIKNB'),
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
        
        # 乘数常量
        (r'\*\s*8', '* ResourceTableIndexMultiplier'),
        (r'\*\s*0xc', '* ResourceEntrySizeBytes'),
        (r'\*\s*3', '* ValidationArraySizeMultiplier'),
        
        # 移位常量
        (r'>>\s*3', '>> ValidationContextShift'),
        (r'&\s*1', '& ValidationStatusBit'),
        
        # 保留一些特殊模式不替换
        (r'0x[0-9a-fA-F]{1,2}(?![0-9a-fA-F])', 'KEEP_SMALL_HEX'),
    ]
    
    # 执行替换
    original_content = content
    for pattern, replacement in replacements:
        if replacement == 'KEEP_SMALL_HEX':
            continue  # 跳过小数值的十六进制数
        content = re.sub(pattern, replacement, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("魔法数字美化完成")
    
    # 显示替换统计
    lines_changed = len([line for line in content.split('\n') if 'FloatInfinityMask' in line or 
                        'ResourceSizeLimit' in line or 'SystemContextOffset' in line])
    print(f"大约修改了 {lines_changed} 行代码")

if __name__ == "__main__":
    beautify_magic_numbers()