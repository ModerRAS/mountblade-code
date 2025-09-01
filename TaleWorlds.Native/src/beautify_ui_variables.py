#!/usr/bin/env python3
"""
美化UI系统变量名脚本
将十六进制命名的变量替换为有意义的名称
"""

import re
import sys

def beautify_variables(content):
    """美化变量名"""
    
    # 定义替换规则
    replacements = [
        # 第一组变量：渲染数据表
        (r'UISystemDataTable780', 'UISystemRenderDataTable001'),
        (r'UISystemDataTable748', 'UISystemRenderDataTable002'),
        (r'UISystemDataTable730', 'UISystemRenderDataTable003'),
        (r'UISystemDataTable718', 'UISystemRenderDataTable004'),
        (r'UISystemDataTable6f8', 'UISystemRenderDataTable005'),
        (r'UISystemDataTable8f8', 'UISystemRenderDataTable006'),
        (r'UISystemDataTable8e0', 'UISystemRenderDataTable007'),
        (r'UISystemDataTable8c8', 'UISystemRenderDataTable008'),
        (r'UISystemDataTable888', 'UISystemRenderDataTable009'),
        (r'UISystemDataTable848', 'UISystemRenderDataTable010'),
        (r'UISystemDataTable828', 'UISystemRenderDataTable011'),
        (r'UISystemDataTable808', 'UISystemRenderDataTable012'),
        (r'UISystemDataTable7f0', 'UISystemRenderDataTable013'),
        (r'UISystemDataTable790', 'UISystemRenderDataTable014'),
        (r'UISystemDataTable760', 'UISystemRenderDataTable015'),
        (r'UISystemDataTable728', 'UISystemRenderDataTable016'),
        (r'UISystemDataTable938', 'UISystemRenderDataTable017'),
        (r'UISystemDataTable8b8', 'UISystemRenderDataTable018'),
        (r'UISystemDataTable860', 'UISystemRenderDataTable019'),
        (r'UISystemDataTable800', 'UISystemRenderDataTable020'),
        (r'UISystemDataTable7c8', 'UISystemRenderDataTable021'),
        (r'UISystemDataTable768', 'UISystemRenderDataTable022'),
        (r'UISystemDataTable738', 'UISystemRenderDataTable023'),
        (r'UISystemDataTable720', 'UISystemRenderDataTable024'),
        (r'UISystemDataTable6e8', 'UISystemRenderDataTable025'),
        (r'UISystemDataTable6c8', 'UISystemRenderDataTable026'),
        (r'UISystemDataTable6c0', 'UISystemRenderDataTable027'),
        (r'UISystemDataTable6a0', 'UISystemRenderDataTable028'),
        (r'UISystemDataTable960', 'UISystemRenderDataTable029'),
        (r'UISystemDataTable940', 'UISystemRenderDataTable030'),
        (r'UISystemDataTable908', 'UISystemRenderDataTable031'),
        (r'UISystemDataTable8e8', 'UISystemRenderDataTable032'),
        (r'UISystemDataTable8a0', 'UISystemRenderDataTable033'),
        (r'UISystemDataTable878', 'UISystemRenderDataTable034'),
        (r'UISystemDataTable840', 'UISystemRenderDataTable035'),
        (r'UISystemDataTable818', 'UISystemRenderDataTable036'),
        (r'UISystemDataTable7d8', 'UISystemRenderDataTable037'),
        (r'UISystemDataTable7a0', 'UISystemRenderDataTable038'),
        (r'UISystemDataTable770', 'UISystemRenderDataTable039'),
        (r'UISystemDataTable6f0', 'UISystemRenderDataTable040'),
        (r'UISystemDataTable6d8', 'UISystemRenderDataTable041'),
        (r'UISystemDataTable6b0', 'UISystemRenderDataTable042'),
        (r'UISystemDataTable930', 'UISystemRenderDataTable043'),
        (r'UISystemDataTable900', 'UISystemRenderDataTable044'),
        (r'UISystemDataTable8d8', 'UISystemRenderDataTable045'),
        (r'UISystemDataTable8b0', 'UISystemRenderDataTable046'),
        (r'UISystemDataTable870', 'UISystemRenderDataTable047'),
        (r'UISystemDataTable830', 'UISystemRenderDataTable048'),
        (r'UISystemDataTable7e8', 'UISystemRenderDataTable049'),
        (r'UISystemDataTable7c0', 'UISystemRenderDataTable050'),
        (r'UISystemDataTable788', 'UISystemRenderDataTable051'),
        (r'UISystemDataTable740', 'UISystemRenderDataTable052'),
        (r'UISystemDataTable700', 'UISystemRenderDataTable053'),
        (r'UISystemDataTable6e0', 'UISystemRenderDataTable054'),
        (r'UISystemDataTable6b8', 'UISystemRenderDataTable055'),
        (r'UISystemDataTable968', 'UISystemRenderDataTable056'),
        (r'UISystemDataTable948', 'UISystemRenderDataTable057'),
        (r'UISystemDataTable920', 'UISystemRenderDataTable058'),
        (r'UISystemDataTable8f0', 'UISystemRenderDataTable059'),
        (r'UISystemDataTable8d0', 'UISystemRenderDataTable060'),
        (r'UISystemDataTable898', 'UISystemRenderDataTable061'),
        (r'UISystemDataTable858', 'UISystemRenderDataTable062'),
        (r'UISystemDataTable820', 'UISystemRenderDataTable063'),
        (r'UISystemDataTable7e0', 'UISystemRenderDataTable064'),
        (r'UISystemDataTable7b0', 'UISystemRenderDataTable065'),
        (r'UISystemDataTable778', 'UISystemRenderDataTable066'),
        (r'UISystemDataTable750', 'UISystemRenderDataTable067'),
        (r'UISystemDataTable708', 'UISystemRenderDataTable068'),
        (r'UISystemDataTable958', 'UISystemRenderDataTable069'),
        (r'UISystemDataTable928', 'UISystemRenderDataTable070'),
        (r'UISystemDataTable910', 'UISystemRenderDataTable071'),
        (r'UISystemDataTable8c0', 'UISystemRenderDataTable072'),
        (r'UISystemDataTable8a8', 'UISystemRenderDataTable073'),
        
        # 第二组变量：配置数据表
        (r'UISystemDataTableb70', 'UISystemConfigDataTable001'),
        (r'UISystemDataTableb68', 'UISystemConfigDataTable002'),
        (r'UISystemDataTableb60', 'UISystemConfigDataTable003'),
        (r'UISystemDataTableb58', 'UISystemConfigDataTable004'),
        (r'UISystemDataTableb50', 'UISystemConfigDataTable005'),
        (r'UISystemDataTableb48', 'UISystemConfigDataTable006'),
        (r'UISystemDataTableb40', 'UISystemConfigDataTable007'),
        (r'UISystemDataTableb38', 'UISystemConfigDataTable008'),
        (r'UISystemDataTableb30', 'UISystemConfigDataTable009'),
        (r'UISystemDataTableb28', 'UISystemConfigDataTable010'),
        (r'UISystemDataTableb20', 'UISystemConfigDataTable011'),
        (r'UISystemDataTableb18', 'UISystemConfigDataTable012'),
        (r'UISystemDataTable9d0', 'UISystemConfigDataTable013'),
        (r'UISystemDataTable9d8', 'UISystemConfigDataTable014'),
        (r'UISystemDataTable9e0', 'UISystemConfigDataTable015'),
        (r'UISystemDataTable9e8', 'UISystemConfigDataTable016'),
        (r'UISystemDataTable9f0', 'UISystemConfigDataTable017'),
        (r'UISystemDataTable9f8', 'UISystemConfigDataTable018'),
        (r'UISystemDataTablea00', 'UISystemConfigDataTable019'),
        (r'UISystemDataTablea08', 'UISystemConfigDataTable020'),
        (r'UISystemDataTablea10', 'UISystemConfigDataTable021'),
        (r'UISystemDataTablea20', 'UISystemConfigDataTable022'),
        (r'UISystemDataTablea30', 'UISystemConfigDataTable023'),
        (r'UISystemDataTablea40', 'UISystemConfigDataTable024'),
        (r'UISystemDataTablea50', 'UISystemConfigDataTable025'),
        (r'UISystemDataTablea58', 'UISystemConfigDataTable026'),
        (r'UISystemDataTablea60', 'UISystemConfigDataTable027'),
        (r'UISystemDataTablea68', 'UISystemConfigDataTable028'),
        (r'UISystemDataTablea70', 'UISystemConfigDataTable029'),
        (r'UISystemDataTablea78', 'UISystemConfigDataTable030'),
        (r'UISystemDataTablea80', 'UISystemConfigDataTable031'),
        (r'UISystemDataTablea88', 'UISystemConfigDataTable032'),
        (r'UISystemDataTablea90', 'UISystemConfigDataTable033'),
        (r'UISystemDataTablea98', 'UISystemConfigDataTable034'),
        (r'UISystemDataTableaa0', 'UISystemConfigDataTable035'),
        (r'UISystemDataTableaa8', 'UISystemConfigDataTable036'),
        (r'UISystemDataTableab0', 'UISystemConfigDataTable037'),
        (r'UISystemDataTableab8', 'UISystemConfigDataTable038'),
        (r'UISystemDataTableac0', 'UISystemConfigDataTable039'),
        (r'UISystemDataTableac8', 'UISystemConfigDataTable040'),
        (r'UISystemDataTablead0', 'UISystemConfigDataTable041'),
        (r'UISystemDataTableae0', 'UISystemConfigDataTable042'),
        (r'UISystemDataTableaf0', 'UISystemConfigDataTable043'),
        (r'UISystemDataTableb00', 'UISystemConfigDataTable044'),
        (r'UISystemDataTableb08', 'UISystemConfigDataTable045'),
        (r'UISystemDataTableb10', 'UISystemConfigDataTable046'),
        (r'UISystemDataTableaf8', 'UISystemConfigDataTable047'),
        (r'UISystemDataTableae8', 'UISystemConfigDataTable048'),
        (r'UISystemDataTablead8', 'UISystemConfigDataTable049'),
        (r'UISystemDataTablea48', 'UISystemConfigDataTable050'),
        (r'UISystemDataTablea38', 'UISystemConfigDataTable051'),
        (r'UISystemDataTablea28', 'UISystemConfigDataTable052'),
        (r'UISystemDataTablea18', 'UISystemConfigDataTable053'),
    ]
    
    # 应用替换规则
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content)
    
    return content

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("Usage: python beautify_ui_variables.py <input_file>")
        sys.exit(1)
    
    input_file = sys.argv[1]
    
    try:
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 美化变量名
        beautified_content = beautify_variables(content)
        
        with open(input_file, 'w', encoding='utf-8') as f:
            f.write(beautified_content)
        
        print(f"Successfully beautified variables in {input_file}")
        
    except Exception as e:
        print(f"Error: {e}")
        sys.exit(1)

if __name__ == "__main__":
    main()