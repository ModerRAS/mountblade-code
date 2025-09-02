#!/usr/bin/env python3
"""
美化UI系统变量名的脚本
将带有十六进制后缀的变量名重命名为有意义的名称
"""

import re

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_variables(content):
    # 渲染数据表变量重命名
    content = re.sub(r'UISystemRenderDataTableEC', 'UISystemRenderDataTablePrimary', content)
    content = re.sub(r'UISystemRenderDataTableE8', 'UISystemRenderDataTableSecondary', content)
    content = re.sub(r'UISystemRenderDataTableE0', 'UISystemRenderDataTableTertiary', content)
    content = re.sub(r'UISystemRenderDataTable200', 'UISystemRenderDataTableQuaternary', content)
    content = re.sub(r'UISystemRenderDataTableFC', 'UISystemRenderDataTableQuinary', content)
    content = re.sub(r'UISystemRenderDataTableF8', 'UISystemRenderDataTableSenary', content)
    content = re.sub(r'UISystemRenderDataTableF0', 'UISystemRenderDataTableSeptenary', content)
    content = re.sub(r'UISystemRenderTableB38', 'UISystemRenderDataTablePrimaryReference', content)
    
    # 配置数据表模板变量重命名
    content = re.sub(r'UISystemConfigDataTableTemplate70', 'UISystemConfigDataTableTemplatePrimary', content)
    content = re.sub(r'UISystemConfigDataTableTemplate90', 'UISystemConfigDataTableTemplateSecondary', content)
    content = re.sub(r'UISystemConfigDataTableTemplateA0', 'UISystemConfigDataTableTemplateTertiary', content)
    content = re.sub(r'UISystemConfigDataTableTemplate40', 'UISystemConfigDataTableTemplateQuaternary', content)
    content = re.sub(r'UISystemConfigDataTableTemplate30', 'UISystemConfigDataTableTemplateQuinary', content)
    content = re.sub(r'UISystemConfigDataTableTemplate20', 'UISystemConfigDataTableTemplateSenary', content)
    content = re.sub(r'UISystemConfigDataTableTemplateC0', 'UISystemConfigDataTableTemplateSeptenary', content)
    content = re.sub(r'UISystemConfigDataTableTemplateD0', 'UISystemConfigDataTableTemplateOctonary', content)
    content = re.sub(r'UISystemConfigDataTableTemplateE0', 'UISystemConfigDataTableTemplateNonary', content)
    content = re.sub(r'UISystemConfigDataTableTemplateF0', 'UISystemConfigDataTableTemplateDenary', content)
    content = re.sub(r'UISystemConfigDataTableTemplate00', 'UISystemConfigDataTableTemplateUndenary', content)
    content = re.sub(r'UISystemConfigDataTableTemplate10', 'UISystemConfigDataTableTemplateDuodenary', content)
    content = re.sub(r'UISystemConfigDataTableTemplate50', 'UISystemConfigDataTableTemplateTredecenary', content)
    content = re.sub(r'UISystemConfigDataTableTemplate60', 'UISystemConfigDataTableTemplateQuattuordecenary', content)
    content = re.sub(r'UISystemConfigDataTableTemplate80', 'UISystemConfigDataTableTemplateQuindecenary', content)
    
    # 替换参数六为frameIndexComponent
    content = re.sub(r'参数六\._4_4_', 'frameIndexComponent', content)
    content = re.sub(r'参数六([^._])', r'animationFrame\1', content)
    
    return content

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c'
    
    # 读取文件
    content = read_file(file_path)
    
    # 美化变量名
    beautified_content = beautify_variables(content)
    
    # 写入文件
    write_file(file_path, beautified_content)
    
    print("变量名美化完成")

if __name__ == "__main__":
    main()