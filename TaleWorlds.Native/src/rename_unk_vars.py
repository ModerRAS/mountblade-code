#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import re
import sys

def rename_unk_variables(file_path):
    """
    批量重命名06_utilities.c文件中的UNK_变量
    """
    
    # 创建备份
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 备份文件
    with open(file_path + '.backup', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"已创建备份文件: {file_path}.backup")
    
    # 定义重命名映射
    rename_mapping = {
        'UNK_180a39ab8': 'SystemVariable011',
        'UNK_180a39ad8': 'SystemVariable012',
        'UNK_180a39af0': 'SystemVariable013',
        'UNK_180a39b00': 'SystemVariable014',
        'UNK_180a39b18': 'SystemVariable015',
        'UNK_180a39b30': 'SystemVariable016',
        'UNK_180a39b48': 'SystemVariable017',
        'UNK_180a39b68': 'SystemVariable018',
        'UNK_180a39b78': 'SystemVariable019',
        'UNK_180a39b88': 'SystemVariable020',
        'UNK_180a39ba0': 'SystemVariable021',
        'UNK_180a39bc0': 'SystemVariable022',
        'UNK_180a39bd8': 'SystemVariable023',
        'UNK_180a39bf0': 'SystemVariable024',
        'UNK_180a39c10': 'SystemVariable025',
        'UNK_180a39c30': 'SystemVariable026',
        'UNK_180a39c50': 'SystemVariable027',
        'UNK_180a39c60': 'SystemVariable028',
        'UNK_180a39c80': 'SystemVariable029',
        'UNK_180a39c98': 'SystemVariable030',
        'UNK_180a39cb8': 'SystemVariable031',
        'UNK_180a39ccc': 'SystemVariable032',
        'UNK_180a39cd0': 'SystemVariable033',
        'UNK_180a39cd4': 'SystemVariable034',
        'UNK_180a39cd8': 'SystemVariable035',
        'UNK_180a39ce0': 'SystemVariable036',
        'UNK_180a39cf8': 'SystemVariable037',
        'UNK_180a39d10': 'SystemVariable038',
        'UNK_180a39d28': 'SystemVariable039',
        'UNK_180a39d40': 'SystemVariable040',
        'UNK_180a39d58': 'SystemVariable041',
        'UNK_180a39d70': 'SystemVariable042',
        'UNK_180a39d88': 'SystemVariable043',
        'UNK_180a39d98': 'SystemVariable044',
        'UNK_180a39da8': 'SystemVariable045',
        'UNK_180a39db0': 'SystemVariable046',
        'UNK_180a39dc0': 'SystemVariable047',
        'UNK_180a39dd0': 'SystemVariable048',
        'UNK_180a39de0': 'SystemVariable049',
        'UNK_180a39df0': 'SystemVariable050',
        'UNK_180a39e08': 'SystemVariable051',
        'UNK_180a39e18': 'SystemVariable052',
        'UNK_180a39e30': 'SystemVariable053',
        'UNK_180a39e48': 'SystemVariable054',
        'UNK_180a39e58': 'SystemVariable055',
        'UNK_180a39e78': 'SystemVariable056',
        'UNK_180a39e90': 'SystemVariable057',
        'UNK_180a39ea8': 'SystemVariable058',
        'UNK_180a39eb8': 'SystemVariable059',
        'UNK_180a39ed0': 'SystemVariable060',
        'UNK_180a39ee0': 'SystemVariable061',
        'UNK_180a39ef0': 'SystemVariable062',
        'UNK_180a39f00': 'SystemVariable063',
        'UNK_180a39f18': 'SystemVariable064',
        'UNK_180a39f28': 'SystemVariable065',
        'UNK_180a39f50': 'SystemVariable066',
        'UNK_180a39f60': 'SystemVariable067',
        'UNK_180a39f78': 'SystemVariable068',
        'UNK_180a39f88': 'SystemVariable069',
        'UNK_180a39f98': 'SystemVariable070',
        'UNK_180a39fb0': 'SystemVariable071',
        'UNK_180a39fc0': 'SystemVariable072',
        'UNK_180a39fe0': 'SystemVariable073',
        'UNK_180a39ff8': 'SystemVariable074',
        'UNK_180a3a018': 'SystemVariable075',
        'UNK_180a3a038': 'SystemVariable076',
        'UNK_180a3a048': 'SystemVariable077',
        'UNK_180a3a058': 'SystemVariable078',
        'UNK_180a3a068': 'SystemVariable079',
        'UNK_180a3a078': 'SystemVariable080',
        'UNK_180a3a098': 'SystemVariable081',
        'UNK_180a3a0b8': 'SystemVariable082',
        'UNK_180a3a0d0': 'SystemVariable083',
        'UNK_180a3a0f0': 'SystemVariable084',
        'UNK_180a3a118': 'SystemVariable085',
        'UNK_180a3a140': 'SystemVariable086',
        'UNK_180a3a158': 'SystemVariable087',
        'UNK_180a3a178': 'SystemVariable088',
        'UNK_180a3a188': 'SystemVariable089',
        'UNK_180a3a1a8': 'SystemVariable090',
        'UNK_180a3a1b8': 'SystemVariable091',
        'UNK_180a3a1c8': 'SystemVariable092',
        'UNK_180a3a1e8': 'SystemVariable093',
        'UNK_180a3a208': 'SystemVariable094',
        'UNK_180a3a220': 'SystemVariable095',
        'UNK_180a3a240': 'SystemVariable096',
        'UNK_180a3a250': 'SystemVariable097',
        'UNK_180a3a260': 'SystemVariable098',
        'UNK_180a3a278': 'SystemVariable099',
        'UNK_180a3a298': 'SystemVariable100',
        'UNK_180a3a2b0': 'SystemVariable101',
        'UNK_180a3a2c0': 'SystemVariable102',
        'UNK_180a3a2d8': 'SystemVariable103',
        'UNK_180a3a2e8': 'SystemVariable104',
        'UNK_180a3a2f8': 'SystemVariable105',
        'UNK_180a3a300': 'SystemVariable106',
        'UNK_180a3a310': 'SystemVariable107',
        'UNK_180a3a320': 'SystemVariable108',
        'UNK_180a3a348': 'SystemVariable109',
        'UNK_180a3a370': 'SystemVariable110',
        'UNK_180a3a398': 'SystemVariable111',
        'UNK_180a3a3c0': 'SystemVariable112',
        'UNK_180a3a3d0': 'SystemVariable113',
        'UNK_180a3a3e8': 'SystemVariable114',
        'UNK_180a3a3f8': 'SystemVariable115',
        'UNK_180a3a408': 'SystemVariable116',
        'UNK_180a3a418': 'SystemVariable117',
        'UNK_180a3a428': 'SystemVariable118',
        'UNK_180a3a440': 'SystemVariable119',
        'UNK_180a3a458': 'SystemVariable120',
        'UNK_180a3a468': 'SystemVariable121',
        'UNK_180a3a478': 'SystemVariable122',
        'UNK_180a3a498': 'SystemVariable123',
        'UNK_180a3a4a8': 'SystemVariable124',
        'UNK_180a3a4c0': 'SystemVariable125',
        'UNK_180a3a4d0': 'SystemVariable126',
        'UNK_180a3a4e0': 'SystemVariable127',
        'UNK_180a3a4f8': 'SystemVariable128',
        'UNK_180a3a508': 'SystemVariable129',
        'UNK_180a3a520': 'SystemVariable130',
        'UNK_180a3a530': 'SystemVariable131',
        'UNK_180a3a540': 'SystemVariable132',
        'UNK_180a3a560': 'SystemVariable133',
        'UNK_180a3a580': 'SystemVariable134',
        'UNK_180a3a5a8': 'SystemVariable135',
        'UNK_180a3a5c0': 'SystemVariable136',
        'UNK_180a3a5d0': 'SystemVariable137',
        'UNK_180a3a5e0': 'SystemVariable138',
        'UNK_180a3a600': 'SystemVariable139',
        'UNK_180a3a620': 'SystemVariable140',
        'UNK_180a3a630': 'SystemVariable141',
        'UNK_180a3a640': 'SystemVariable142',
        'UNK_180a3a650': 'SystemVariable143',
        'UNK_180a3a660': 'SystemVariable144',
        'UNK_180a3a670': 'SystemVariable145',
        'UNK_180a3a688': 'SystemVariable146',
        'UNK_180a3a6a0': 'SystemVariable147',
        'UNK_180a3a6c0': 'SystemVariable148',
        'UNK_180a3a6e0': 'SystemVariable149',
        'UNK_180a3a6f8': 'SystemVariable150',
        'UNK_180a3a708': 'SystemVariable151',
        'UNK_180a3a720': 'SystemVariable152',
        'UNK_180a3a738': 'SystemVariable153',
        'UNK_180a3a748': 'SystemVariable154',
        'UNK_180a3a754': 'SystemVariable155',
        'UNK_180a3a758': 'SystemVariable156',
        'UNK_180a3a768': 'SystemVariable157',
        'UNK_180a3a778': 'SystemVariable158',
        'UNK_180a3a788': 'SystemVariable159',
        'UNK_180a3a798': 'SystemVariable160',
        'UNK_180a3a7a8': 'SystemVariable161',
        'UNK_180a3a7b8': 'SystemVariable162',
        'UNK_180a3a7d0': 'SystemVariable163',
        'UNK_180a3a7e0': 'SystemVariable164',
        'UNK_180a3a7f0': 'SystemVariable165',
        'UNK_180a3a800': 'SystemVariable166',
        'UNK_180a3a820': 'SystemVariable167',
        'UNK_180a3a830': 'SystemVariable168',
        'UNK_180a3a850': 'SystemVariable169',
        'UNK_180a3a860': 'SystemVariable170',
        'UNK_180a3a870': 'SystemVariable171',
        'UNK_180a3a880': 'SystemVariable172',
        'UNK_180a3a898': 'SystemVariable173',
        'UNK_180a3a8b0': 'SystemVariable174',
        'UNK_180a3a8c0': 'SystemVariable175',
        'UNK_180a3a8d8': 'SystemVariable176',
        'UNK_180a3a8f0': 'SystemVariable177',
        'UNK_180a3a900': 'SystemVariable178',
        'UNK_180a3a910': 'SystemVariable179',
        'UNK_180a3a920': 'SystemVariable180',
        'UNK_180a3a938': 'SystemVariable181',
        'UNK_180a3a948': 'SystemVariable182',
        'UNK_180a3a960': 'SystemVariable183',
        'UNK_180a3a970': 'SystemVariable184',
        'UNK_180a3a988': 'SystemVariable185',
        'UNK_180a3a998': 'SystemVariable186',
        'UNK_180a3a9b0': 'SystemVariable187',
        'UNK_180a3a9c8': 'SystemVariable188',
        'UNK_180a3a9d8': 'SystemVariable189',
        'UNK_180a3a9e0': 'SystemVariable190',
        'UNK_180a3a9f0': 'SystemVariable191',
        'UNK_180a3aa08': 'SystemVariable192',
        'UNK_180a3aa20': 'SystemVariable193',
        'UNK_180a3aa38': 'SystemVariable194',
        'UNK_180a3aa50': 'SystemVariable195',
        'UNK_180a3aa70': 'SystemVariable196',
        'UNK_180a3aa98': 'SystemVariable197',
        'UNK_180a3aab0': 'SystemVariable198',
        'UNK_180a3aac0': 'SystemVariable199',
        'UNK_180a3aad8': 'SystemVariable200',
        'UNK_180a3aae8': 'SystemVariable201',
        'UNK_180a3aaf8': 'SystemVariable202',
        'UNK_180a3ab08': 'SystemVariable203',
        'UNK_180a3ab18': 'SystemVariable204',
        'UNK_180a3ab28': 'SystemVariable205',
        'UNK_180a3ab38': 'SystemVariable206',
        'UNK_180a3ab50': 'SystemVariable207',
        'UNK_180a3ab60': 'SystemVariable208',
        'UNK_180a3ab70': 'SystemVariable209',
        'UNK_180a3ab80': 'SystemVariable210',
        'UNK_180a3ab90': 'SystemVariable211',
        'UNK_180a3aba0': 'SystemVariable212',
        'UNK_180a3abb0': 'SystemVariable213',
        'UNK_180a3abc0': 'SystemVariable214',
        'UNK_180a3abd0': 'SystemVariable215',
        'UNK_180a3abe0': 'SystemVariable216',
        'UNK_180a3abe8': 'SystemVariable217',
        'UNK_180a3ac00': 'SystemVariable218',
        'UNK_180a3ac10': 'SystemVariable219',
        'UNK_180a3ac18': 'SystemVariable220',
        'UNK_180a3ac30': 'SystemVariable221',
        'UNK_180a3ac48': 'SystemVariable222',
        'UNK_180a3ac68': 'SystemVariable223',
        'UNK_180a3ac80': 'SystemVariable224',
        'UNK_180a3ac90': 'SystemVariable225',
        'UNK_180a3aca8': 'SystemVariable226',
        'UNK_180a3acc8': 'SystemVariable227',
        'UNK_180a3acd8': 'SystemVariable228',
        'UNK_180a3acf8': 'SystemVariable229',
        'UNK_180a3ad18': 'SystemVariable230',
        'UNK_180a3ad30': 'SystemVariable231',
        'UNK_180a3ad60': 'SystemVariable232',
        'UNK_180a3ad88': 'SystemVariable233',
        'UNK_180a3ada0': 'SystemVariable234',
        'UNK_180a3adb8': 'SystemVariable235',
        'UNK_180a3add0': 'SystemVariable236',
        'UNK_180a3ade8': 'SystemVariable237',
        'UNK_180a3ae00': 'SystemVariable238',
        'UNK_180a3ae18': 'SystemVariable239',
        'UNK_180a2eac0': 'SystemVariable240',
        'UNK_180a3e5e8': 'SystemVariable241',
        'UNK_18064ffc0': 'SystemVariable242',
        'UNK_180a3c8c8': 'SystemVariable243',
        'UNK_180a3c908': 'SystemVariable244',
        'UNK_180a3d970': 'SystemVariable245',
        'UNK_180a3db60': 'SystemVariable246'
    }
    
    # 执行替换
    original_content = content
    for old_name, new_name in rename_mapping.items():
        # 使用单词边界确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    # 统计替换数量
    replacements = 0
    for old_name in rename_mapping.keys():
        pattern = r'\b' + re.escape(old_name) + r'\b'
        replacements += len(re.findall(pattern, original_content))
    
    # 写入文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"批量重命名完成！")
    print(f"处理了 {len(rename_mapping)} 个变量")
    print(f"总共替换了 {replacements} 处")
    print(f"备份文件保存在: {file_path}.backup")
    
    # 验证结果
    remaining_unk = len(re.findall(r'\bUNK_[a-fA-F0-9_]+\b', content))
    print(f"剩余UNK_变量数量: {remaining_unk}")
    
    if remaining_unk == 0:
        print("✓ 所有UNK_变量已成功重命名")
    else:
        print("⚠ 仍有UNK_变量未处理")
    
    return content

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("用法: python3 rename_unk_vars.py <文件路径>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    rename_unk_variables(file_path)