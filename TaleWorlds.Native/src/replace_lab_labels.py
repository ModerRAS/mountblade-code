#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import re
import os

def replace_lab_labels(file_path):
    """
    批量替换LAB_180[hex_address]标签为有意义的名称
    """
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义替换映射
    replacements = {
        'LAB_1800a06d4': 'LabelQuotationProcessingComplete',
        'LAB_1800a0f0c': 'LabelStreamProcessingComplete',
        'LAB_1800a1263': 'LabelStreamErrorHandling',
        'LAB_1800a18fd': 'LabelConversionComplete',
        'LAB_1800a31d1': 'LabelSystemInitializationCheck',
        'LAB_1800a326b': 'LabelSystemInitialized',
        'LAB_1800a4380': 'LabelBufferProcessingComplete',
        'LAB_1800a46f5': 'LabelCharacterProcessingLoop',
        'LAB_1800a4de0': 'LabelDataProcessingComplete',
        'LAB_1800a5a93': 'LabelStringValidationComplete',
        'LAB_1800a5a39': 'LabelCharacterValidationStart',
        'LAB_1800a5a44': 'LabelCharacterValidationEnd',
        'LAB_1800a7646': 'LabelStringProcessingComplete',
        'LAB_1800a765c': 'LabelStringValidationEnd',
        'LAB_1800a7660': 'LabelStringFinalization',
        'LAB_1800a7617': 'LabelStringValidationError',
        'LAB_1800a79bb': 'LabelFirstCharacterCheck',
        'LAB_1800a7a55': 'LabelSecondCharacterCheck',
        'LAB_1800a7ae4': 'LabelThirdCharacterCheck',
        'LAB_1800a7ba5': 'LabelFourthCharacterCheck',
        'LAB_1800a7c35': 'LabelFifthCharacterCheck',
        'LAB_1800a7d01': 'LabelSixthCharacterCheck',
        'LAB_1800a7d91': 'LabelSeventhCharacterCheck',
        'LAB_1800a7e51': 'LabelEighthCharacterCheck',
        'LAB_1800a7ee0': 'LabelNinthCharacterCheck',
        'LAB_1800a7f91': 'LabelTenthCharacterCheck',
        'LAB_1800a8044': 'LabelEleventhCharacterCheck',
        'LAB_1800a80cc': 'LabelTwelfthCharacterCheck',
        'LAB_1800a814a': 'LabelThirteenthCharacterCheck',
        'LAB_1800a837b': 'LabelFourteenthCharacterCheck',
        'LAB_1800a87af': 'LabelFifteenthCharacterCheck',
        'LAB_1800a990c': 'LabelSubProcessingComplete',
        'LAB_1800a9108': 'LabelAlternativeProcessingComplete',
        'LAB_1800a8889': 'LabelSecondaryProcessingComplete',
        'LAB_1800a88fb': 'LabelSixteenthCharacterCheck',
        'LAB_1800a8988': 'LabelSeventeenthCharacterCheck',
        'LAB_1800a8a0f': 'LabelEighteenthCharacterCheck',
        'LAB_1800a8a97': 'LabelNineteenthCharacterCheck',
        'LAB_1800a8b50': 'LabelTwentiethCharacterCheck',
        'LAB_1800aa8e4': 'LabelStringProcessingLoop',
        'LAB_1800aa86c': 'LabelStringProcessingContinue',
        'LAB_1800aaac8': 'LabelStringProcessingError',
        'LAB_1800aa9f6': 'LabelStringProcessingValidation',
        'LAB_1800aaa97': 'LabelStringProcessingCheck',
        'LAB_1800ac67e': 'LabelResourceCleanup',
        'LAB_1800ac673': 'LabelResourceCheck',
        'LAB_1800ad67f': 'LabelFloatComparisonLoop',
        'LAB_1800ad94c': 'LabelArraySizeCheck',
        'LAB_1800aea92': 'LabelStringBufferCheck',
        'LAB_1800af096': 'LabelXmlProcessingState1',
        'LAB_1800af0c8': 'LabelXmlProcessingState2',
        'LAB_1800af16e': 'LabelXmlProcessingState3',
        'LAB_1800af387': 'LabelXmlProcessingState4',
        'LAB_1800af3ca': 'LabelXmlProcessingState5',
        'LAB_1800af47e': 'LabelXmlProcessingState6',
        'LAB_1800af665': 'LabelXmlProcessingState7',
        'LAB_1800af973': 'LabelXmlProcessingState8',
        'LAB_1800af57a': 'LabelXmlProcessingState9',
        'LAB_1800af684': 'LabelXmlProcessingState10',
        'LAB_1800af68c': 'LabelXmlProcessingState11',
        'LAB_1800af89b': 'LabelXmlProcessingState12',
        'LAB_1800af8d7': 'LabelXmlProcessingState13',
        'LAB_1800af971': 'LabelXmlProcessingState14',
        'LAB_1800afade': 'LabelXmlProcessingState15',
        'LAB_1800affe3': 'LabelXmlProcessingState16',
        'LAB_1800afc3f': 'LabelXmlProcessingState17',
        'LAB_1800afda6': 'LabelXmlProcessingState18',
        'LAB_1800aff9c': 'LabelXmlProcessingState19',
        'LAB_1800b11f1': 'LabelMainFunctionComplete',
        'LAB_1800b0d28': 'LabelContextCleanup',
        'LAB_1800b1065': 'LabelContextValidation',
        'LAB_1800b1376': 'LabelContextCheck',
        'LAB_1800b26ac': 'LabelProcessingLoopStart',
        'LAB_1800b29e2': 'LabelProcessingLoopEnd',
        'LAB_1800b2afd': 'LabelAlternativePath',
        'LAB_1800b2e4d': 'LabelSecondaryPath',
        'LAB_1800b2e93': 'LabelTertiaryPath',
        'LAB_1800b31ae': 'LabelFinalProcessing',
        'LAB_1800b3832': 'LabelValidationLoop',
        'LAB_1800b5291': 'LabelStreamOperationComplete',
        'LAB_1800b547f': 'LabelStreamValidationComplete',
        'LAB_1800b56df': 'LabelStreamProcessingEnd',
        'LAB_1800b5909': 'LabelStreamContextCheck',
        'LAB_1802abf36': 'LabelStringFinalizationComplete',
        'LAB_1802abea0': 'LabelStringFinalizationCheck',
        'LAB_1800b5da5': 'LabelStringBufferValidation',
        'LAB_1800b60e2': 'LabelBufferOperationComplete',
        'LAB_1800b6221': 'LabelBufferFinalization',
        'LAB_1800b62bf': 'LabelBufferValidationComplete',
        'LAB_1800b6357': 'LabelBufferProcessingEnd',
        'LAB_1800b63ec': 'LabelBufferSizeCheck',
        'LAB_1800b685e': 'LabelResourceValidation',
        'LAB_1800b6a3c': 'LabelStringBufferValidation',
        'LAB_1800b6c99': 'LabelMemoryValidation',
        'LAB_1800b6ea7': 'LabelContextProcessingComplete',
        'LAB_1800b6eea': 'LabelContextValidationComplete',
        'LAB_1800b7264': 'LabelStringBufferCheck',
        'LAB_1800b79d4': 'LabelResourceHandleCheck',
        'LAB_1800b7dd5': 'LabelTempBufferCheck',
        'LAB_1800b8417': 'LabelContextNullCheck',
        'LAB_1800b910f': 'LabelFormattingCheck',
        'LAB_1800b9112': 'LabelFormattingComplete',
        'LAB_1800b917a': 'LabelFormattingEnd',
        'LAB_1800ba7a0': 'LabelCharDataCheck',
        'LAB_1800ba7cd': 'LabelTempBufferCheck',
        'LAB_1800bb220': 'LabelArrayProcessingStart',
        'LAB_1800bb353': 'LabelArrayValidationComplete',
        'LAB_1800bb37f': 'LabelArrayProcessingEnd',
        'LAB_1800bb587': 'LabelArrayFinalization',
        'LAB_1800bbf4b': 'LabelDataFinalization',
        'LAB_1800bebdc': 'LabelOperationComplete',
        'LAB_1800c043d': 'LabelValidationEnd',
        'LAB_1800c15ba': 'LabelContextProcessingStart',
        'LAB_1800c15fa': 'LabelContextProcessingEnd',
        'LAB_1800c1703': 'LabelMainProcessingEnd',
        'LAB_1800c1857': 'LabelSecondaryProcessingEnd',
        'LAB_1800c189a': 'LabelSecondaryProcessingComplete',
        'LAB_1800c2711': 'LabelStringProcessingFinal',
        'LAB_1800c27cd': 'LabelStringProcessingSecondary',
        'LAB_1800c2835': 'LabelStringProcessingComplete',
        'LAB_1800c29e7': 'LabelXmlElementProcessing',
        'LAB_1800c2a37': 'LabelXmlElementValidation',
        'LAB_1800c2bd3': 'LabelXmlElementFinalization',
        'LAB_1800c2ba7': 'LabelXmlElementAlternative',
        'LAB_1800c2e84': 'LabelXmlBufferValidation',
        'LAB_1800c2e67': 'LabelXmlBufferAlternative',
        'LAB_1800c2e6a': 'LabelXmlBufferSecondary',
        'LAB_1800c2ea2': 'LabelXmlFormattingCheck',
        'LAB_1800c2ec2': 'LabelXmlFormattingEnd',
        'LAB_1800c2fcb': 'LabelXmlValidationComplete',
        'LAB_1800c2f37': 'LabelXmlValidationAlternative',
        'LAB_1800c2f80': 'LabelXmlValidationSecondary',
        'LAB_1800c311e': 'LabelXmlIteratorCheck',
        'LAB_1800c3121': 'LabelXmlIteratorComplete',
        'LAB_1800c31aa': 'LabelXmlIteratorEnd',
        'LAB_1800c32aa': 'LabelXmlResourceCheck',
        'LAB_1800c32b5': 'LabelXmlResourceComplete',
        'LAB_1800c3379': 'LabelXmlResourceEnd',
        'LAB_1800c46c3': 'LabelFinalValidation',
        'LAB_1800c6c68': 'LabelStringLengthCheck',
        'LAB_1800c8b2a': 'LabelStringBufferNullCheck',
        'LAB_1800c914a': 'LabelStringProcessingAlternative',
        'LAB_1800c9185': 'LabelStringProcessingFinal',
        'LAB_1800cb83d': 'LabelXmlValidationComplete',
        'LAB_1800caa4f': 'LabelCharacterRangeCheck',
        'LAB_1800cc2d6': 'LabelFloatComparisonStart',
        'LAB_1800cc2f2': 'LabelFloatComparisonEnd',
        'LAB_1800cd0dc': 'LabelDataProcessingFinal',
        'LAB_18024b24e': 'LabelSecondaryFinalization',
        'LAB_1800cdf36': 'LabelProcessingComplete',
        'LAB_1800d35f3': 'LabelMainProcessingFinal',
        'LAB_1800d15de': 'LabelContextValidationCheck',
        'LAB_1800d2d4a': 'LabelStringValidationComplete',
        'LAB_1800d2eb0': 'LabelStringProcessingMain',
        'LAB_1800d32fb': 'LabelStringProcessingFinal',
        'LAB_1800d31f2': 'LabelStringProcessingAlternative',
        'LAB_1800d41dc': 'LabelMemoryCheck',
        'LAB_1800d5e4d': 'LabelContextOffsetCheck',
        'LAB_1800d6409': 'LabelResourceSizeCheck',
        'LAB_1800d6415': 'LabelResourceSizeComplete',
        'LAB_1800d666d': 'LabelResourceSizeFinal',
        'LAB_1800d672d': 'LabelParameterCheck',
        'LAB_1800d6883': 'LabelParameterValidation',
        'LAB_1800d68be': 'LabelParameterComplete',
        'LAB_1800d6939': 'LabelParameterFinal',
        'LAB_1800d733a': 'LabelXmlIteratorFinal',
        'LAB_1800d85a5': 'LabelStreamOperationFinal',
        'LAB_1800da8e0': 'StringLengthValidation',
        'LAB_1800db339': 'LabelResourceCheckComplete',
        'LAB_1800dbbe1': 'LabelResourceProcessingStart',
        'LAB_1800dbcff': 'LabelResourceProcessingEnd',
        'LAB_1800dbd5e': 'LabelResourceProcessingFinal',
        'LAB_1800dc560': 'LabelStringBufferNull',
        'LAB_1800dece7': 'LabelFloatValidationStart',
        'LAB_1800ded07': 'LabelFloatValidationEnd',
        'LAB_1800df320': 'LabelFloatProcessingComplete',
        'LAB_1800e175d': 'LabelCharacterRangeValidation',
        'LAB_1800e1810': 'LabelCharacterRangeComplete',
        'LAB_1800e189d': 'LabelCharacterRangeFinal',
        'LAB_1800e19a6': 'LabelSecondaryCharacterRange',
        'LAB_1800e1a38': 'LabelSecondaryCharacterFinal',
        'LAB_1800e1b4e': 'LabelTertiaryCharacterRange',
        'LAB_1800e1bd4': 'LabelTertiaryCharacterFinal',
        'LAB_1800e1cdb': 'LabelFourthCharacterRange',
        'LAB_1800e1d66': 'LabelFourthCharacterFinal',
        'LAB_1800e1e60': 'LabelFifthCharacterRange',
        'LAB_1800e1ee6': 'LabelFifthCharacterFinal',
        'LAB_1800e1ff7': 'LabelSixthCharacterRange',
        'LAB_1800e2082': 'LabelSixthCharacterFinal',
        'LAB_1800e2194': 'LabelSeventhCharacterRange',
        'LAB_1800e221a': 'LabelSeventhCharacterFinal',
        'LAB_1800e353e': 'LabelCharacterProcessingFinal',
        'LAB_1800e5260': 'LabelStringComparisonStart',
        'LAB_1800e538e': 'LabelStringComparisonEnd',
        'LAB_1800e5388': 'LabelStringComparisonAlternative',
        'LAB_1800e544b': 'LabelStringComparisonComplete',
        'LAB_1800e8942': 'LabelSystemFlagCheck',
        'LAB_1800eaa99': 'LabelResourceProcessingLoop',
        'LAB_1800eaf28': 'LabelResourceProcessingEnd',
        'LAB_1800eb177': 'LabelResourceProcessingFinal',
        'LAB_1800eb431': 'LabelResourceProcessingComplete',
        'LAB_1800eb6ee': 'LabelResourceValidationLoop',
        'LAB_1800ef87d': 'LabelFinalProcessingComplete',
        'LAB_1800ef4ce': 'LabelAlternativeProcessingEnd',
        'LAB_1800ef36c': 'LabelSecondaryProcessingStart',
        'LAB_1800ef375': 'LabelSecondaryProcessingComplete',
        'LAB_1800ef483': 'LabelTertiaryProcessingEnd',
        'LAB_1800ef691': 'LabelFinalProcessingEnd',
    }
    
    # 执行替换
    total_replacements = 0
    for old_label, new_label in replacements.items():
        count = content.count(old_label)
        if count > 0:
            content = content.replace(old_label, new_label)
            print(f"替换 {old_label} -> {new_label} (出现 {count} 次)")
            total_replacements += count
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"总共替换了 {total_replacements} 个LAB标签")
    
    # 统计剩余的LAB标签
    remaining = re.findall(r'LAB_180[0-9a-f]{7}', content)
    if remaining:
        remaining_counts = {}
        for label in remaining:
            remaining_counts[label] = remaining_counts.get(label, 0) + 1
        
        print(f"\n还有 {len(remaining)} 个LAB标签需要替换:")
        for label, count in sorted(remaining_counts.items(), key=lambda x: x[1], reverse=True):
            print(f"  {label}: {count} 次")
    
    return total_replacements

if __name__ == "__main__":
    file_path = "99_unmatched_functions.c"
    if os.path.exists(file_path):
        replace_lab_labels(file_path)
    else:
        print(f"文件 {file_path} 不存在")