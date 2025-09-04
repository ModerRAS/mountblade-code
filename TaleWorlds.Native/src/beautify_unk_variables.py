#!/usr/bin/env python3
"""
美化99_unmatched_functions.c文件中的UNK_变量名
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            return f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return None

def write_file(file_path, content):
    """写入文件内容"""
    try:
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        return True
    except Exception as e:
        print(f"写入文件失败: {e}")
        return False

def create_mapping_dict():
    """创建UNK_变量到有意义名称的映射"""
    mapping = {
        # 字符串常量映射
        '&UNK_180a02060': '&SystemStringConstantType1',
        '&UNK_180a02158': '&SystemStringConstantType2', 
        '&UNK_180a020a8': '&SystemStringConstantType3',
        '&UNK_180a020a0': '&SystemStringConstantType4',
        '&UNK_180a020c8': '&SystemStringConstantType5',
        '&UNK_180a020b0': '&SystemStringConstantType6',
        '&UNK_180a020c0': '&SystemStringConstantType7',
        '&UNK_180a020b8': '&SystemStringConstantType8',
        '&UNK_180a020d8': '&SystemStringConstantType9',
        '&UNK_180a020d0': '&SystemStringConstantType10',
        '&UNK_180a020f8': '&SystemStringConstantType11',
        '&UNK_180a020e0': '&SystemStringConstantType12',
        '&UNK_180a020f0': '&SystemStringConstantType13',
        '&UNK_180a020e8': '&SystemStringConstantType14',
        '&UNK_180a02628': '&SystemStringConstantType15',
        '&UNK_180a01d04': '&SystemStringConstantType16',
        '&UNK_180a01cfc': '&SystemStringConstantType17',
        '&UNK_180a01d24': '&SystemStringConstantType18',
        '&UNK_180a01d0c': '&SystemStringConstantType19',
        '&UNK_180a01d1c': '&SystemStringConstantType20',
        '&UNK_180a01d14': '&SystemStringConstantType21',
        
        # 错误消息映射
        '&UNK_180a02440': '&SystemErrorMessageType1',
        '&UNK_180a02490': '&SystemErrorMessageType2',
        '&UNK_180a024f0': '&SystemErrorMessageType3',
        '&UNK_180a023e0': '&SystemErrorMessageType4',
        
        # XML相关映射
        '&UNK_180a0253c': '&XmlFormattingConstant1',
        '&UNK_180a02560': '&XmlFormattingConstant2',
        '&UNK_180a02558': '&XmlFormattingConstant3',
        '&UNK_180a02548': '&XmlFormattingConstant4',
        
        # 字符串处理映射
        '&UNK_180a028e8': '&StringProcessingConstant1',
        '&UNK_180a028f8': '&StringProcessingConstant2',
        '&UNK_180a02918': '&StringProcessingConstant3',
        '&UNK_180a02908': '&StringProcessingConstant4',
        '&UNK_180a02940': '&StringProcessingConstant5',
        '&UNK_180a02928': '&StringProcessingConstant6',
        '&UNK_180a02998': '&StringProcessingConstant7',
        
        # XML上下文映射
        '&UNK_180a02e68': '&XmlContextConstant1',
        '&UNK_180a21720': '&XmlContextConstant2',
        '&UNK_180a21690': '&XmlContextConstant3',
        '&UNK_180a029b0': '&XmlContextConstant4',
        '&UNK_180a029d0': '&XmlContextConstant5',
        '&UNK_180a176f8': '&XmlContextConstant6',
        '&UNK_180a14060': '&XmlContextConstant7',
        '&UNK_180a02dd8': '&XmlContextConstant8',
        '&UNK_180a13fa8': '&XmlContextConstant9',
        '&UNK_180a02a00': '&XmlContextConstant10',
        '&UNK_180a029f0': '&XmlContextConstant11',
        '&UNK_180a02a40': '&XmlContextConstant12',
        '&UNK_180a02a60': '&XmlContextConstant13',
        '&UNK_180a02aa8': '&XmlContextConstant14',
        '&UNK_180a02b30': '&XmlContextConstant15',
        '&UNK_180a02b98': '&XmlContextConstant16',
        
        # 其他常量映射
        '&UNK_180a02bc8': '&SystemConstantType1',
        '&UNK_1809fcc58': '&SystemConstantType2',
        '&UNK_1809fc8e4': '&SystemConstantType3',
        '&UNK_180a02bb8': '&SystemConstantType4',
        '&UNK_180a02c78': '&SystemConstantType5',
        '&UNK_180a02c60': '&SystemConstantType6',
        '&UNK_180a02cc0': '&SystemConstantType7',
        '&UNK_180a02c98': '&SystemConstantType8',
        '&UNK_180a02d08': '&SystemConstantType9',
        '&UNK_180a02ce0': '&SystemConstantType10',
        '&UNK_180a02d50': '&SystemConstantType11',
        '&UNK_180a02d28': '&SystemConstantType12',
        '&UNK_180a02d90': '&SystemConstantType13',
        '&UNK_180a02c10': '&SystemConstantType14',
        '&UNK_180a13cc0': '&SystemConstantType15',
        '&UNK_180a14060': '&SystemConstantType16',
        '&UNK_18023e110': '&SystemConstantType17',
        '&UNK_180a02c38': '&SystemConstantType18',
        '&UNK_180a02c40': '&SystemConstantType19',
        '&UNK_180a02ed8': '&SystemConstantType20',
        '&UNK_180a02f10': '&SystemConstantType21',
        '&UNK_180a02f58': '&SystemConstantType22',
        '&UNK_180a02f38': '&SystemConstantType23',
        '&UNK_180a02f88': '&SystemConstantType24',
        '&UNK_180a02f70': '&SystemConstantType25',
        '&UNK_180a02d70': '&SystemConstantType26',
        '&UNK_180a02db8': '&SystemConstantType27',
        '&UNK_180a03004': '&SystemConstantType28',
        '&UNK_180a03018': '&SystemConstantType29',
        '&UNK_180a03048': '&SystemConstantType30',
        '&UNK_180a03070': '&SystemConstantType31',
        '&UNK_180a03098': '&SystemConstantType32',
        '&UNK_180a030b8': '&SystemConstantType33',
        '&UNK_180a030c0': '&SystemConstantType34',
        '&UNK_180a030e8': '&SystemConstantType35',
        '&UNK_180a030d8': '&SystemConstantType36',
        '&UNK_180a030f8': '&SystemConstantType37',
        '&UNK_180a03120': '&SystemConstantType38',
        '&UNK_180a03140': '&SystemConstantType39',
        '&UNK_180a03150': '&SystemConstantType40',
        '&UNK_180a03190': '&SystemConstantType41',
        '&UNK_180a031d8': '&SystemConstantType42',
        '&UNK_180a031c0': '&SystemConstantType43',
        '&UNK_180a03208': '&SystemConstantType44',
        '&UNK_180a031e8': '&SystemConstantType45',
        '&UNK_180a032c0': '&SystemConstantType46',
        '&UNK_180a03240': '&SystemConstantType47',
        '&UNK_180a03220': '&SystemConstantType48',
        '&UNK_180a03288': '&SystemConstantType49',
        '&UNK_180a03260': '&SystemConstantType50',
        '&UNK_180a032d0': '&SystemConstantType51',
        '&UNK_180a032a8': '&SystemConstantType52',
        '&UNK_180a032e0': '&SystemConstantType53',
        '&UNK_180a03340': '&SystemConstantType54',
        '&UNK_180a03300': '&SystemConstantType55',
        '&UNK_180a03360': '&SystemConstantType56',
        '&UNK_180a033a8': '&SystemConstantType57',
        '&UNK_180a033d8': '&SystemConstantType58',
        '&UNK_180a033b8': '&SystemConstantType59',
        '&UNK_180a03410': '&SystemConstantType60',
        '&UNK_180a032c0': '&SystemConstantType61',
        '&UNK_180a033f0': '&SystemConstantType62',
        '&UNK_180a03458': '&SystemConstantType63',
        '&UNK_180a03430': '&SystemConstantType64',
        '&UNK_180a03490': '&SystemConstantType65',
        '&UNK_180a03478': '&SystemConstantType66',
        '&UNK_180a034c0': '&SystemConstantType67',
        '&UNK_180a03008': '&SystemConstantType68',
        '&UNK_180a03528': '&SystemConstantType69',
        '&UNK_180a03508': '&SystemConstantType70',
        '&UNK_180a03540': '&SystemConstantType71',
        '&UNK_180a03600': '&SystemConstantType72',
        '&UNK_180a036f0': '&SystemConstantType73',
        '&UNK_180a03720': '&SystemConstantType74',
        '&UNK_180a03758': '&SystemConstantType75',
        '&UNK_180a037a0': '&SystemConstantType76',
        '&UNK_180a03810': '&SystemConstantType77',
        '&UNK_180a21720': '&SystemConstantType78',
        '&UNK_180a21690': '&SystemConstantType79',
        '&UNK_1809fff60': '&SystemConstantType80',
        '&UNK_18098bc80': '&SystemConstantType81',
        '&UNK_180a03898': '&SystemConstantType82',
        '&UNK_180a03888': '&SystemConstantType83',
        '&UNK_180a038c8': '&SystemConstantType84',
        '&UNK_180a038b0': '&SystemConstantType85',
        '&UNK_180a038e8': '&SystemConstantType86',
        '&UNK_180a038f8': '&SystemConstantType87',
        '&UNK_180a03908': '&SystemConstantType88',
        '&UNK_180a03930': '&SystemConstantType89',
        '&UNK_180a03948': '&SystemConstantType90',
        '&UNK_180a039a0': '&SystemConstantType91',
        '&UNK_180a07218': '&SystemConstantType92',
        '&UNK_180a189e0': '&SystemConstantType93',
        '&UNK_180a03a48': '&SystemConstantType94',
        '&UNK_180a189d0': '&SystemConstantType95',
        '&UNK_180a03ad8': '&SystemConstantType96',
        '&UNK_180a03aa0': '&SystemConstantType97',
        '&UNK_180a03ac8': '&SystemConstantType98',
        '&UNK_180a01620': '&SystemConstantType99',
        '&UNK_180a03ae0': '&SystemConstantType100',
        '&UNK_180a03b10': '&SystemConstantType101',
        '&UNK_180a03af8': '&SystemConstantType102',
        '&UNK_180a03b40': '&SystemConstantType103',
        '&UNK_180a03b30': '&SystemConstantType104',
        '&UNK_180a03b80': '&SystemConstantType105',
        '&UNK_180a17358': '&SystemConstantType106',
        '&UNK_180a03b60': '&SystemConstantType107',
        '&UNK_180a03bb8': '&SystemConstantType108',
        '&UNK_180a035e0': '&SystemConstantType109',
        '&UNK_180a03b98': '&SystemConstantType110',
        '&UNK_180a03be8': '&SystemConstantType111',
        '&UNK_180a03bdc': '&SystemConstantType112',
        '&UNK_180a03bf8': '&SystemConstantType113',
        '&UNK_180a03c10': '&SystemConstantType114',
        '&UNK_180a03c00': '&SystemConstantType115',
        '&UNK_180a03c28': '&SystemConstantType116',
        '&UNK_180a03c5c': '&SystemConstantType117',
        '&UNK_180a03d88': '&SystemConstantType118',
        '&UNK_180a03d78': '&SystemConstantType119',
        '&UNK_180a03da0': '&SystemConstantType120',
        '&UNK_180a03d90': '&SystemConstantType121',
        '&UNK_180a03db0': '&SystemConstantType122',
        '&UNK_180a03180': '&SystemConstantType123',
        '&UNK_180a03df0': '&SystemConstantType124',
        '&UNK_180a03de0': '&SystemConstantType125',
        '&UNK_180a03e10': '&SystemConstantType126',
        '&UNK_180a03e04': '&SystemConstantType127',
        '&UNK_180a03e48': '&SystemConstantType128',
        '&UNK_180a03e30': '&SystemConstantType129',
        '&UNK_180a03e50': '&SystemConstantType130',
        '&UNK_180a03ea8': '&SystemConstantType131',
        '&UNK_180a03ea0': '&SystemConstantType132',
    }
    return mapping

def replace_unk_variables(content, mapping):
    """替换UNK_变量名"""
    for old_name, new_name in mapping.items():
        content = content.replace(old_name, new_name)
    return content

def main():
    """主函数"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
    
    # 读取文件
    content = read_file(file_path)
    if content is None:
        return
    
    # 创建映射字典
    mapping = create_mapping_dict()
    
    # 替换变量名
    new_content = replace_unk_variables(content, mapping)
    
    # 写入文件
    if write_file(file_path, new_content):
        print("文件美化完成")
    else:
        print("文件美化失败")

if __name__ == "__main__":
    main()