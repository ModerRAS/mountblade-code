#!/usr/bin/env python3
"""
美化UI系统文件中的LAB_标签
将LAB_地址标签替换为语义化的名称
"""

import re

def beautify_ui_labels():
    """处理UI系统文件中的LAB_标签"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # LAB_标签映射表
    label_mappings = {
        'LAB_180650673:': 'ResourceSearchLoop:',
        'LAB_1806505ad:': 'ResourceSearchFound:',
        'LAB_180650c04:': 'ResourceValidationLoop:',
        'LAB_180650dc8:': 'ResourceValidationComplete:',
        'LAB_18065166c:': 'ResourceCheckComplete:',
        'LAB_1806516e0:': 'ResourceProcessingComplete:',
        'LAB_180651b0f:': 'ResourceIndexCheck:',
        'LAB_180652228:': 'ResourceComparisonComplete:',
        'LAB_18065258b:': 'ResourceIndexLoop:',
        'LAB_18065415f:': 'ConfigurationLoop:',
        'LAB_1806541f1:': 'ConfigurationCheck:',
        'LAB_1806555a8:': 'StringComparisonComplete:',
        'LAB_1806553fb:': 'StringMatchFound:',
        'LAB_180655402:': 'StringProcessingStart:',
        'LAB_18065555e:': 'StringCompareResult:',
        'LAB_180655598:': 'StringMatchPath:',
        'LAB_1806555a6:': 'StringComparisonFailed:',
        'LAB_1806554a0:': 'StringMismatchFound:',
        'LAB_180655bdf:': 'StringValidationStart:',
        'LAB_180655bea:': 'StringValidationComplete:',
        'LAB_180655685:': 'StringProcessingEnd:',
        'LAB_180655761:': 'StringComparisonFailed:',
        'LAB_1806557d3:': 'StringAlternativePath:',
        'LAB_180655911:': 'StringPrimaryPath:',
        'LAB_1806559dc:': 'StringSecondaryPath:',
        'LAB_180655e30:': 'StringTertiaryPath:',
        'LAB_180655a80:': 'StringQuaternaryPath:',
        'LAB_180655afa:': 'StringFinalPath:',
        'LAB_180655683:': 'StringProcessingError:',
        'LAB_180656abd:': 'ResourceIndexValidation:',
        'LAB_180656d5b:': 'ResourceDataProcessing:',
        'LAB_180656dbb:': 'ResourceDataComplete:',
        'LAB_180656df9:': 'ResourceValidationStart:',
        'LAB_180656e11:': 'ResourceValidationEnd:',
        'LAB_180656d07:': 'ResourceDataError:',
        'LAB_180656e1e:': 'ResourceDataComplete:',
        'LAB_1806572f9:': 'SystemLoop:',
        'LAB_1806575b7:': 'SystemProcessing:',
        'LAB_1806575f7:': 'SystemValidation:',
        'LAB_1806577f1:': 'SystemStatusCheck:',
        'LAB_180657812:': 'SystemStatusComplete:',
        'LAB_180657835:': 'SystemOperationComplete:',
        'LAB_180657941:': 'SystemFinalCheck:',
        'LAB_1806578a7:': 'SystemAlternativePath:',
        'LAB_1806578f0:': 'SystemPrimaryPath:',
        'LAB_1806579e7:': 'SystemSecondaryPath:',
        'LAB_1806579f0:': 'SystemTertiaryPath:',
        'LAB_1806588f2:': 'SteamInterfaceLoop:',
        'LAB_180659172:': 'ValidationComplete:',
        'LAB_180659a1a:': 'PositionCheckStart:',
        'LAB_180659b1a:': 'PositionCheckEnd:',
        'LAB_18065a17c:': 'CalculationLoop:',
        'LAB_18065a2e9:': 'CalculationComplete:',
        'LAB_18065a5be:': 'CharacterValidation:',
        'LAB_18065a5d3:': 'CharacterValidationComplete:',
        'LAB_18065a686:': 'CharacterAlternativeValidation:',
        'LAB_18065a69c:': 'CharacterAlternativeComplete:',
        'LAB_18065a74f:': 'CharacterFinalValidation:',
        'LAB_18065a765:': 'CharacterFinalComplete:',
        'LAB_18065bd31:': 'PrecisionCheck:',
        'LAB_18065cfea:': 'InterfaceInitialize:',
        'LAB_18065d05a:': 'InterfaceInitialized:',
        'LAB_18065d2fb:': 'InterfaceProcessing:',
        'LAB_18065d446:': 'InterfaceLoop:',
        'LAB_18065d515:': 'InterfaceValidation:',
        'LAB_18065d55b:': 'InterfaceComplete:',
        'LAB_18065da24:': 'RenderOperation:',
        'LAB_18065dae7:': 'RenderComplete:',
        'LAB_18065fce5:': 'ModeValidation:',
        'LAB_18065fef9:': 'ModeComplete:',
        'LAB_180663714:': 'EventProcessing:',
        'LAB_18066375a:': 'EventComplete:',
        'LAB_180663ade:': 'EventLoop:',
        'LAB_180663a5e:': 'EventAlternative:',
        'LAB_180664ddf:': 'EventValidation:',
        'LAB_1806654b3:': 'EventValidationComplete:',
        'LAB_18066597d:': 'SystemDataProcessing:',
        'LAB_1806659c4:': 'SystemDataComplete:',
        'LAB_180665f82:': 'MemoryOperation:',
        'LAB_180665f9e:': 'MemoryOperationComplete:',
        'LAB_180665fd7:': 'MemoryAlternative:',
        'LAB_180667308:': 'MemoryFinal:',
        'LAB_18066a567:': 'CharacterCheckComplete:',
        'LAB_18066bb69:': 'AnimationProcessing:',
        'LAB_18066bd4e:': 'AnimationLoop:',
        'LAB_18066be05:': 'AnimationComplete:',
        'LAB_18066bfd1:': 'ValidationLoop:',
        'LAB_18066c500:': 'ValidationAlternative:',
        'LAB_18066c4ed:': 'ValidationComplete:',
        'LAB_18066cdc1:': 'EventDispatch:',
        'LAB_18066e704:': 'InitializationComplete:',
        'LAB_18066f069:': 'FinalProcessing:',
    }
    
    # 执行替换
    for old_label, new_label in label_mappings.items():
        content = content.replace(old_label, new_label)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"已完成UI系统文件中LAB_标签的美化处理")

if __name__ == "__main__":
    beautify_ui_labels()