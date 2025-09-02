#!/usr/bin/env python3
"""
美化06_utilities.c文件中的变量名
主要处理逆向工程产生的数字后缀变量名
"""

import re

def beautify_utilities_file():
    """美化06_utilities.c文件"""
    input_file = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 变量名映射表
    variable_mappings = {
        # 数字后缀变量名映射
        'SystemMemoryConfigTemplateDuodecimal': 'SystemMemoryConfigTemplateSecondary',
        'SystemMemoryConfigTemplateTerdenary': 'SystemMemoryConfigTemplateTertiary', 
        'SystemMemoryConfigTemplateQuattuordenary': 'SystemMemoryConfigTemplateQuaternary',
        'SystemMemoryConfigTemplateQuattuordenaryAlt': 'SystemMemoryConfigTemplateQuaternaryAlt',
        'SystemMemoryConfigTemplateQuindenary': 'SystemMemoryConfigTemplateQuinary',
        'SystemMemoryConfigTemplateSecureSixteenth': 'SystemMemoryConfigTemplateSecureSixth',
        'SystemMemoryConfigTemplateSecureSeventeenth': 'SystemMemoryConfigTemplateSecureSeventh',
        'SystemMemoryConfigTemplateEighteenth': 'SystemMemoryConfigTemplateEighth',
        'SystemMemoryConfigTemplateNormalNineteenth': 'SystemMemoryConfigTemplateNormalNinth',
        'SystemMemoryConfigTemplateTwentieth': 'SystemMemoryConfigTemplateTenth',
        'SystemMemoryConfigTemplateTwentyFirstAlt': 'SystemMemoryConfigTemplateNinthAlt',
        'SystemMemoryConfigTemplateTwentySecond': 'SystemMemoryConfigTemplateTenth',
        'SystemMemoryConfigTemplateTwentyThird': 'SystemMemoryConfigTemplateEleventh',
        'SystemMemoryConfigTemplateTwentyThirdAlt': 'SystemMemoryConfigTemplateEleventhAlt',
        'SystemMemoryConfigTemplateTwentyThirdExtra': 'SystemMemoryConfigTemplateEleventhExtra',
        'SystemMemoryConfigDataTemplateTwentyFourth': 'SystemMemoryConfigDataTemplateFourth',
        'SystemMemoryConfigDataTemplateTwentyFifth': 'SystemMemoryConfigDataTemplateFifth',
        'SystemMemoryConfigDataTemplateTwentySixth': 'SystemMemoryConfigDataTemplateSixth',
        'SystemMemoryConfigDataTemplateTwentySeventh': 'SystemMemoryConfigDataTemplateSeventh',
        'SystemMemoryConfigDataTemplateTwentyEighth': 'SystemMemoryConfigDataTemplateEighth',
        'SystemMemoryConfigDataTemplateTwentyNinth': 'SystemMemoryConfigDataTemplateNinth',
        'SystemMemoryConfigTemplateThirtieth': 'SystemMemoryConfigTemplateTenth',
        'SystemMemoryConfigTemplateThirtyFirst': 'SystemMemoryConfigTemplateEleventh',
        
        # 更新注释
        '// 第十二配置项': '// 第二配置项',
        '// 第十三配置项': '// 第三配置项', 
        '// 第十四配置项': '// 第四配置项',
        '// 第十四配置项备用': '// 第四配置项备用',
        '// 第十五配置项': '// 第五配置项',
        '// 安全第16配置项': '// 安全第6配置项',
        '// 安全第17配置项': '// 安全第7配置项',
        '// 第18配置项': '// 第8配置项',
        '// 普通第19配置项': '// 普通第9配置项',
        '// 第20配置项': '// 第10配置项',
        '// 第21配置项备用': '// 第9配置项备用',
        '// 第22配置项': '// 第10配置项',
        '// 第23配置项': '// 第11配置项',
        '// 第23配置项备用': '// 第11配置项备用',
        '// 第23配置项扩展': '// 第11配置项扩展',
        '// 第24配置项': '// 第4配置项',
        '// 第25配置项': '// 第5配置项',
        '// 第26配置项': '// 第6配置项',
        '// 第27配置项': '// 第7配置项',
        '// 第28配置项': '// 第8配置项',
        '// 第29配置项': '// 第9配置项',
        '// 第30配置项': '// 第10配置项',
        '// 第31配置项': '// 第11配置项',
    }
    
    # 应用替换
    for old_name, new_name in variable_mappings.items():
        content = content.replace(old_name, new_name)
    
    # 写回文件
    with open(input_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("06_utilities.c文件美化完成")

if __name__ == "__main__":
    beautify_utilities_file()