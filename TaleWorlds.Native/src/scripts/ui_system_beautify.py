#!/usr/bin/env python3
"""
UI系统函数和变量名美化脚本
用于批量重命名04_ui_system.c文件中的FUN_函数和变量名
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def generate_function_name(address, context):
    """根据函数地址和上下文生成语义化函数名"""
    # 基于地址范围推断函数类型
    addr = int(address[4:], 16)  # 去掉FUN_前缀并转换为十进制
    
    if 0x180670000 <= addr <= 0x180671000:
        return f"InitializeUIComponent_{addr & 0xFFF:03x}"
    elif 0x180671000 <= addr <= 0x180672000:
        return f"ProcessUIEvent_{addr & 0xFFF:03x}"
    elif 0x180672000 <= addr <= 0x180673000:
        return f"RenderUIElement_{addr & 0xFFF:03x}"
    elif 0x180673000 <= addr <= 0x180674000:
        return f"HandleUIInput_{addr & 0xFFF:03x}"
    elif 0x180674000 <= addr <= 0x180675000:
        return f"UpdateUILayout_{addr & 0xFFF:03x}"
    elif 0x180675000 <= addr <= 0x180676000:
        return f"ManageUIStyle_{addr & 0xFFF:03x}"
    elif 0x180676000 <= addr <= 0x180677000:
        return f"AnimateUIElement_{addr & 0xFFF:03x}"
    elif 0x180677000 <= addr <= 0x180678000:
        return f"ValidateUIState_{addr & 0xFFF:03x}"
    elif 0x180678000 <= addr <= 0x180679000:
        return f"CleanupUIResource_{addr & 0xFFF:03x}"
    else:
        return f"UIUtilityFunction_{addr & 0xFFFF:04x}"

def add_function_comment(function_name, original_line):
    """为函数添加注释"""
    comment_templates = {
        'InitializeUIComponent': '/**\n * @brief 初始化UI组件\n * \n * 该函数负责初始化用户界面组件，设置必要的参数和状态\n * \n * @return 无返回值\n * @note 此函数必须在UI系统启动时调用\n */',
        'ProcessUIEvent': '/**\n * @brief 处理UI事件\n * \n * 该函数负责处理用户界面事件，包括点击、滚动等交互\n * \n * @return 无返回值\n * @note 此函数会根据事件类型调用相应的处理程序\n */',
        'RenderUIElement': '/**\n * @brief 渲染UI元素\n * \n * 该函数负责渲染用户界面元素，包括文本、图像和控件\n * \n * @return 无返回值\n * @note 此函数会在每一帧被调用\n */',
        'HandleUIInput': '/**\n * @brief 处理UI输入\n * \n * 该函数负责处理用户输入事件，包括键盘、鼠标和触摸\n * \n * @return 无返回值\n * @note 此函数会根据输入类型调用相应的处理程序\n */',
        'UpdateUILayout': '/**\n * @brief 更新UI布局\n * \n * 该函数负责更新用户界面布局，重新计算元素位置和大小\n * \n * @return 无返回值\n * @note 此函数会在窗口大小改变或内容更新时被调用\n */',
        'ManageUIStyle': '/**\n * @brief 管理UI样式\n * \n * 该函数负责管理用户界面样式，包括颜色、字体和主题\n * \n * @return 无返回值\n * @note 此函数会根据当前主题更新样式设置\n */',
        'AnimateUIElement': '/**\n * @brief 动画UI元素\n * \n * 该函数负责处理用户界面元素的动画效果\n * \n * @return 无返回值\n * @note 此函数会在每一帧更新动画状态\n */',
        'ValidateUIState': '/**\n * @brief 验证UI状态\n * \n * 该函数负责验证用户界面状态，确保所有元素处于正确状态\n * \n * @return 无返回值\n * @note 此函数会检查UI系统的完整性\n */',
        'CleanupUIResource': '/**\n * @brief 清理UI资源\n * \n * 该函数负责清理用户界面资源，释放不再使用的内存\n * \n * @return 无返回值\n * @note 此函数会在系统关闭时被调用\n */',
        'UIUtilityFunction': '/**\n * @brief UI工具函数\n * \n * 该函数提供用户界面系统的通用工具功能\n * \n * @return 无返回值\n * @note 这是一个通用的UI工具函数\n */'
    }
    
    for prefix, comment in comment_templates.items():
        if function_name.startswith(prefix):
            return comment + '\n'
    
    return '/**\n * @brief UI系统函数\n * \n * 该函数是用户界面系统的一部分\n * \n * @return 无返回值\n */\n'

def replace_fun_functions(content):
    """替换FUN_函数为语义化名称"""
    
    # 查找所有FUN_函数定义
    function_pattern = r'^(void\s+)(FUN_[0-9a-f]{8})\s*\(([^)]*)\)\s*\{'
    
    def replace_function(match):
        prefix = match.group(1)
        original_name = match.group(2)
        params = match.group(3)
        
        # 生成新的函数名
        new_name = generate_function_name(original_name, params)
        
        # 添加函数注释
        comment = add_function_comment(new_name, match.group(0))
        
        # 返回替换后的内容
        return f'{comment}{prefix}{new_name}({params})\n{{'
    
    # 替换函数定义
    content = re.sub(function_pattern, replace_function, content, flags=re.MULTILINE)
    
    # 替换函数调用
    call_pattern = r'FUN_([0-9a-f]{8})'
    
    def replace_call(match):
        address = match.group(1)
        new_name = generate_function_name(f'FUN_{address}', '')
        return new_name
    
    content = re.sub(call_pattern, replace_call, content)
    
    return content

def replace_unk_variables(content):
    """替换UNK_变量为更有意义的名称"""
    
    # 创建替换映射
    replacements = [
        # 渲染相关变量
        (r'UNK_180947e80', 'UIRenderDataTable'),
        (r'UNK_18098bcb0', 'UIComponentHandle'),
        (r'UNK_18001caa4', 'UIStringTable'),
        (r'UNK_18001c96c', 'UIStringBuffer'),
        
        # 系统缓冲区变量
        (r'UNK_18094b168', 'UISystemBuffer1'),
        (r'UNK_18094b1a0', 'UISystemBuffer2'),
        (r'UNK_18094b130', 'UISystemBuffer3'),
        (r'UNK_18094b3d0', 'UISystemBuffer4'),
        (r'UNK_18094b480', 'UISystemBuffer5'),
        (r'UNK_18094b208', 'UISystemBuffer6'),
        (r'UNK_18094b250', 'UISystemBuffer7'),
        (r'UNK_18094b270', 'UISystemBuffer8'),
        (r'UNK_18094b290', 'UISystemBuffer9'),
        (r'UNK_18094b2b0', 'UISystemBuffer10'),
        (r'UNK_18094b2d0', 'UISystemBuffer11'),
        (r'UNK_18094b418', 'UISystemBuffer12'),
        (r'UNK_18094b440', 'UISystemBuffer13'),
        (r'UNK_18094b4f8', 'UISystemBuffer14'),
        (r'UNK_18094b500', 'UISystemBuffer15'),
        (r'UNK_18094b508', 'UISystemBuffer16'),
        (r'UNK_18094b510', 'UISystemBuffer17'),
        (r'UNK_18094b518', 'UISystemBuffer18'),
        (r'UNK_18094b528', 'UISystemBuffer19'),
        (r'UNK_18094b1d8', 'UISystemBuffer20'),
        (r'UNK_18094b2e0', 'UISystemBuffer21'),
        (r'UNK_18094b300', 'UISystemBuffer22'),
        (r'UNK_18094b358', 'UISystemBuffer23'),
        (r'UNK_18094b368', 'UISystemBuffer24'),
        (r'UNK_18094b3a0', 'UISystemBuffer25'),
        (r'UNK_18094b3b0', 'UISystemBuffer26'),
        (r'UNK_18094b458', 'UISystemBuffer27'),
        (r'UNK_18094b1b8', 'UISystemBuffer28'),
        (r'UNK_18094b1f8', 'UISystemBuffer29'),
        (r'UNK_18094b4b0', 'UISystemBuffer30'),
        (r'UNK_18094b540', 'UISystemBuffer31'),
        (r'UNK_18094b578', 'UISystemBuffer32'),
        (r'UNK_18094b590', 'UISystemBuffer33'),
        (r'UNK_18094b5c0', 'UISystemBuffer34'),
        (r'UNK_18094b608', 'UISystemBuffer35'),
        (r'UNK_18094b6b0', 'UISystemBuffer36'),
        (r'UNK_18094b930', 'UISystemBuffer37'),
        (r'UNK_18094b620', 'UISystemBuffer38'),
        (r'UNK_18094b700', 'UISystemBuffer39'),
        (r'UNK_18094b750', 'UISystemBuffer40'),
        (r'UNK_18094b7b0', 'UISystemBuffer41'),
        (r'UNK_18094b820', 'UISystemBuffer42'),
        (r'UNK_18094b8c8', 'UISystemBuffer43'),
        (r'UNK_18094b8f0', 'UISystemBuffer44'),
        (r'UNK_18094b7f8', 'UISystemBuffer45'),
        (r'UNK_18094b880', 'UISystemBuffer46'),
        (r'UNK_18094c0c8', 'UISystemBuffer47'),
        (r'UNK_18094c100', 'UISystemBuffer48'),
        (r'UNK_18094c138', 'UISystemBuffer49'),
        (r'UNK_18094c170', 'UISystemBuffer50'),
        (r'UNK_18094c1a8', 'UISystemBuffer51'),
        (r'UNK_18094c1e0', 'UISystemBuffer52'),
        (r'UNK_18094c218', 'UISystemBuffer53'),
        (r'UNK_18094c250', 'UISystemBuffer54'),
        (r'UNK_18094c288', 'UISystemBuffer55'),
        (r'UNK_18094c2c0', 'UISystemBuffer56'),
        (r'UNK_18094c2f8', 'UISystemBuffer57'),
        (r'UNK_18094c330', 'UISystemBuffer58'),
        (r'UNK_18094c368', 'UISystemBuffer59'),
        (r'UNK_18094c3a0', 'UISystemBuffer60'),
        (r'UNK_18094c3d8', 'UISystemBuffer61'),
        (r'UNK_18094c410', 'UISystemBuffer62'),
        (r'UNK_18094c448', 'UISystemBuffer63'),
        (r'UNK_18094c480', 'UISystemBuffer64'),
        (r'UNK_18094c4c8', 'UISystemBuffer65'),
        (r'UNK_18094c510', 'UISystemBuffer66'),
        (r'UNK_18094c558', 'UISystemBuffer67'),
        (r'UNK_18094c5a0', 'UISystemBuffer68'),
        (r'UNK_18094c5e8', 'UISystemBuffer69'),
        (r'UNK_18094c630', 'UISystemBuffer70'),
        (r'UNK_18094c678', 'UISystemBuffer71'),
        (r'UNK_18094c690', 'UISystemBuffer72'),
        (r'UNK_18094c6b0', 'UISystemBuffer73'),
        (r'UNK_18094c6c0', 'UISystemBuffer74'),
        (r'UNK_18094c6d0', 'UISystemBuffer75'),
        (r'UNK_18094c6d8', 'UISystemBuffer76'),
        (r'UNK_18094c6e8', 'UISystemBuffer77'),
        (r'UNK_18094c6f8', 'UISystemBuffer78'),
        (r'UNK_18094c9c0', 'UISystemBuffer79'),
        (r'UNK_18094bee8', 'UISystemBuffer80'),
        (r'UNK_18094bf00', 'UISystemBuffer81'),
        (r'UNK_18094c770', 'UISystemBuffer82'),
        (r'UNK_18094c7d0', 'UISystemBuffer83'),
        (r'UNK_18094bec8', 'UISystemBuffer84'),
        (r'UNK_18094c9a0', 'UISystemBuffer85'),
        (r'UNK_18094bf90', 'UISystemBuffer86'),
        (r'UNK_18094c840', 'UISystemBuffer87'),
        (r'UNK_18094c008', 'UISystemBuffer88'),
        (r'UNK_18094c018', 'UISystemBuffer89'),
        (r'UNK_18094c030', 'UISystemBuffer90'),
        (r'UNK_18094c048', 'UISystemBuffer91'),
        (r'UNK_18094c060', 'UISystemBuffer92'),
        (r'UNK_18094c070', 'UISystemBuffer93'),
        (r'UNK_18094c088', 'UISystemBuffer94'),
        (r'UNK_18094c830', 'UISystemBuffer95'),
        (r'UNK_18094c858', 'UISystemBuffer96'),
        (r'UNK_18094c870', 'UISystemBuffer97'),
        (r'UNK_18094c930', 'UISystemBuffer98'),
        (r'UNK_18094c990', 'UISystemBuffer99'),
        (r'UNK_18094c0b0', 'UISystemBuffer100'),
        (r'UNK_18094c850', 'UISystemBuffer101'),
        (r'UNK_180a06958', 'UISystemBuffer102'),
        (r'UNK_18094c9b0', 'UISystemBuffer103'),
        (r'UNK_18094c9b8', 'UISystemBuffer104'),
        (r'UNK_18094bbf8', 'UISystemBuffer105'),
        (r'UNK_18094c0b8', 'UISystemBuffer106'),
        (r'UNK_18094bed8', 'UISystemBuffer107'),
        (r'UNK_18094bf18', 'UISystemBuffer108'),
        (r'UNK_18094be80', 'UISystemBuffer109'),
        (r'UNK_18094c718', 'UISystemBuffer110'),
        (r'UNK_18094c758', 'UISystemBuffer111'),
        (r'UNK_18094bf50', 'UISystemBuffer112'),
        (r'UNK_18094bf60', 'UISystemBuffer113'),
        (r'UNK_180a05020', 'UISystemBuffer114'),
        (r'UNK_18094bf28', 'UISystemBuffer115'),
        (r'UNK_18094bf38', 'UISystemBuffer116'),
        (r'UNK_1806d6594', 'UISystemBuffer117'),
        (r'UNK_18094c0a8', 'UISystemBuffer118'),
        (r'UNK_18094c708', 'UISystemBuffer119'),
        (r'UNK_18094c0a4', 'UISystemBuffer120'),
        (r'UNK_18094c9d0', 'UISystemBuffer121'),
        (r'UNK_18094ca60', 'UISystemBuffer122'),
        (r'UNK_18094cab0', 'UISystemBuffer123'),
        (r'UNK_18094ca18', 'UISystemBuffer124'),
        (r'UNK_18094cad0', 'UISystemBuffer125'),
        (r'UNK_18094ca30', 'UISystemBuffer126'),
        (r'UNK_18094cb00', 'UISystemBuffer127'),
        (r'UNK_18094cde8', 'UISystemBuffer128'),
        (r'UNK_18094cfb0', 'UISystemBuffer129'),
        (r'UNK_18094d000', 'UISystemBuffer130'),
        (r'UNK_18094cb50', 'UISystemBuffer131'),
        (r'UNK_18094cbd8', 'UISystemBuffer132'),
        (r'UNK_18094cd98', 'UISystemBuffer133'),
        (r'UNK_18094d010', 'UISystemBuffer134'),
        (r'UNK_18094cba8', 'UISystemBuffer135'),
        (r'UNK_18094cb9c', 'UISystemBuffer136'),
        (r'UNK_18094cbd0', 'UISystemBuffer137'),
        (r'UNK_18094d260', 'UISystemBuffer138'),
        (r'UNK_18094d3e8', 'UISystemBuffer139'),
        (r'UNK_18094d438', 'UISystemBuffer140'),
        (r'UNK_18094d450', 'UISystemBuffer141'),
        (r'UNK_18094d090', 'UISystemBuffer142'),
        (r'UNK_18094d210', 'UISystemBuffer143'),
        (r'UNK_18094d658', 'UISystemBuffer144'),
        (r'UNK_18094d7c8', 'UISystemBuffer145'),
        (r'UNK_18094d818', 'UISystemBuffer146'),
        (r'UNK_18094d830', 'UISystemBuffer147'),
        (r'UNK_18094d4a0', 'UISystemBuffer148'),
        (r'UNK_18094d608', 'UISystemBuffer149'),
        (r'UNK_18094d880', 'UISystemBuffer150'),
        (r'UNK_18094da20', 'UISystemBuffer151'),
        (r'UNK_18094db40', 'UISystemBuffer152'),
        (r'UNK_18094db90', 'UISystemBuffer153'),
        (r'UNK_18094dba0', 'UISystemBuffer154'),
        (r'UNK_18094d8b8', 'UISystemBuffer155'),
        (r'UNK_18094d9d0', 'UISystemBuffer156'),
        (r'UNK_18094dd88', 'UISystemBuffer157'),
        (r'UNK_18094dee0', 'UISystemBuffer158'),
        (r'UNK_18094df30', 'UISystemBuffer159'),
        (r'UNK_18094df50', 'UISystemBuffer160'),
        (r'UNK_18094dbe8', 'UISystemBuffer161'),
        (r'UNK_18094dd38', 'UISystemBuffer162'),
        (r'UNK_18094e138', 'UISystemBuffer163'),
        (r'UNK_18094e280', 'UISystemBuffer164'),
        (r'UNK_18094e2d0', 'UISystemBuffer165'),
        (r'UNK_18094e2f0', 'UISystemBuffer166'),
        (r'UNK_18094dfa8', 'UISystemBuffer167'),
        (r'UNK_18094e0e8', 'UISystemBuffer168'),
        (r'UNK_1806f0f60', 'UISystemBuffer169'),
        (r'UNK_1806f1a70', 'UISystemBuffer170'),
        (r'UNK_18094e3c0', 'UISystemBuffer171'),
        (r'UNK_18094e3d0', 'UISystemBuffer172'),
        (r'UNK_18094e3e0', 'UISystemBuffer173'),
        (r'UNK_18094e3e8', 'UISystemBuffer174'),
        (r'UNK_18094e3f8', 'UISystemBuffer175'),
        (r'UNK_18094e408', 'UISystemBuffer176'),
        (r'UNK_18094e480', 'UISystemBuffer177'),
        (r'UNK_18095b500', 'UISystemBuffer178'),
        (r'UNK_18097cfe0', 'UISystemBuffer179'),
        (r'UNK_18097d050', 'UISystemBuffer180'),
        (r'UNK_180958098', 'UISystemBuffer181'),
        (r'UNK_180958070', 'UISystemBuffer182'),
        (r'UNK_18078b870', 'UISystemBuffer183'),
        (r'UNK_1809581d8', 'UISystemBuffer184'),
        (r'UNK_18094c0a0', 'UISystemBuffer185'),
        (r'UNK_1809581f8', 'UISystemBuffer186'),
        (r'UNK_1809581bc', 'UISystemBuffer187'),
        (r'UNK_1809581e8', 'UISystemBuffer188'),
        (r'UNK_1809581c8', 'UISystemBuffer189'),
        (r'UNK_1809581d0', 'UISystemBuffer190'),
        (r'UNK_1809581e0', 'UISystemBuffer191'),
        (r'UNK_1809583d0', 'UISystemBuffer192'),
        (r'UNK_180958660', 'UISystemBuffer193'),
        (r'UNK_1809586e0', 'UISystemBuffer194'),
        (r'UNK_180958758', 'UISystemBuffer195'),
        (r'UNK_180958970', 'UISystemBuffer196'),
        (r'UNK_1809589a0', 'UISystemBuffer197'),
        (r'UNK_180958a10', 'UISystemBuffer198'),
        (r'UNK_180958a50', 'UISystemBuffer199'),
        (r'UNK_180768039', 'UISystemBuffer200'),
        (r'UNK_18076804b', 'UISystemBuffer201'),
        (r'UNK_180958b20', 'UISystemBuffer202'),
        (r'UNK_180958ac0', 'UISystemBuffer203'),
        (r'UNK_180958b00', 'UISystemBuffer204'),
        (r'UNK_180958b10', 'UISystemBuffer205'),
        (r'UNK_180958ba0', 'UISystemBuffer206'),
        (r'UNK_180958c10', 'UISystemBuffer207'),
        (r'UNK_1807693c0', 'UISystemBuffer208'),
        (r'UNK_180958bf0', 'UISystemBuffer209'),
        (r'UNK_180958c88', 'UISystemBuffer210'),
        (r'UNK_180958cb0', 'UISystemBuffer211'),
        (r'UNK_180958d20', 'UISystemBuffer212'),
        (r'UNK_000003b8', 'UISystemBuffer213'),
        (r'UNK_000003c0', 'UISystemBuffer214'),
        (r'UNK_180958d90', 'UISystemBuffer215'),
        (r'UNK_180958e20', 'UISystemBuffer216'),
        (r'UNK_180958fb0', 'UISystemBuffer217'),
        (r'UNK_180770640', 'UISystemBuffer218'),
        (r'UNK_180958ec0', 'UISystemBuffer219'),
        (r'UNK_180958f10', 'UISystemBuffer220'),
        (r'UNK_180958f68', 'UISystemBuffer221'),
        (r'UNK_1809590c0', 'UISystemBuffer222'),
        (r'UNK_180747d60', 'UISystemBuffer223'),
        (r'UNK_1807868c0', 'UISystemBuffer224'),
        (r'UNK_180786c90', 'UISystemBuffer225'),
        (r'UNK_180788fc0', 'UISystemBuffer226'),
        (r'UNK_180959140', 'UISystemBuffer227'),
        (r'UNK_1809591b0', 'UISystemBuffer228'),
        (r'UNK_180959410', 'UISystemBuffer229'),
        (r'UNK_180959630', 'UISystemBuffer230'),
        (r'UNK_1809596a4', 'UISystemBuffer231'),
        (r'UNK_180959b80', 'UISystemBuffer232'),
        (r'UNK_180959d10', 'UISystemBuffer233'),
        (r'UNK_180959d80', 'UISystemBuffer234'),
        (r'UNK_180948d81', 'UICharacterMappingTable'),
        (r'UNK_18094a000', 'UIInputValidationTable'),
        (r'UNK_180953620', 'UIResourceOffsetTable'),
        (r'UNK_1809530e0', 'UIResourcePointerTable'),
        (r'UNK_180954848', 'UIComponentOffsetTable'),
        (r'UNK_1809536c0', 'UIVertexDataTable'),
        (r'UNK_180953700', 'UIIndexDataTable'),
        (r'UNK_180954860', 'UIRenderStateTable'),
        (r'UNK_180954878', 'UIRenderParamTable'),
        (r'UNK_180954890', 'UIRenderConfigTable'),
        (r'UNK_180741cf0', 'UIEventHandlerTable1'),
        (r'UNK_180741d00', 'UIEventHandlerTable2'),
        (r'UNK_180741ce0', 'UIEventHandlerTable3'),
        (r'UNK_180957080', 'UIWindowManagerTable'),
        (r'UNK_180957e20', 'UIWidgetManagerTable'),
        (r'UNK_180957e90', 'UILayoutManagerTable'),
        (r'UNK_180958000', 'UIRenderManagerTable'),
        (r'UNK_180957f70', 'UIInputManagerTable'),
        (r'UNK_18095b500', 'UIAnimationManagerTable'),
        (r'UNK_18097d050', 'UIThemeManagerTable'),
        (r'UNK_1809580d0', 'UIFontManagerTable'),
        (r'UNK_1809583d0', 'UIEventDispatcherTable'),
        (r'UNK_180be12f0', 'UISystemGlobalTable'),
        (r'UNK_180a3dc20', 'UIEnvironmentVar1'),
        (r'UNK_180a3dbc0', 'UIEnvironmentVar2'),
        (r'UNK_180a3dbd0', 'UIEnvironmentVar3'),
        (r'UNK_18094b168', 'UISystemDataTable1'),
        (r'UNK_18094b1a0', 'UISystemDataTable2'),
        (r'UNK_18094b130', 'UISystemDataTable3'),
        (r'UNK_18094b3d0', 'UISystemDataTable4'),
        (r'UNK_18094b480', 'UISystemDataTable5'),
        (r'UNK_18094b208', 'UISystemDataTable6'),
        (r'UNK_18094b250', 'UISystemDataTable7'),
        (r'UNK_18094b270', 'UISystemDataTable8'),
        (r'UNK_18094b290', 'UISystemDataTable9'),
        (r'UNK_18094b2b0', 'UISystemDataTable10'),
        (r'UNK_18094b2d0', 'UISystemDataTable11'),
        (r'UNK_18094b418', 'UISystemDataTable12'),
        (r'UNK_18094b440', 'UISystemDataTable13'),
        (r'UNK_18094b4f8', 'UISystemDataTable14'),
        (r'UNK_18094b500', 'UISystemDataTable15'),
        (r'UNK_18094b508', 'UISystemDataTable16'),
        (r'UNK_18094b510', 'UISystemDataTable17'),
        (r'UNK_18094b518', 'UISystemDataTable18'),
        (r'UNK_18094b528', 'UISystemDataTable19'),
        (r'UNK_18094b1d8', 'UISystemDataTable20'),
        (r'UNK_18094b2e0', 'UISystemDataTable21'),
        (r'UNK_18094b300', 'UISystemDataTable22'),
        (r'UNK_18094b358', 'UISystemDataTable23'),
        (r'UNK_18094b368', 'UISystemDataTable24'),
        (r'UNK_18094b3a0', 'UISystemDataTable25'),
        (r'UNK_18094b3b0', 'UISystemDataTable26'),
        (r'UNK_18094b458', 'UISystemDataTable27'),
        (r'UNK_18094b1b8', 'UISystemDataTable28'),
        (r'UNK_18094b1f8', 'UISystemDataTable29'),
        (r'UNK_18094b4b0', 'UISystemDataTable30'),
        (r'UNK_18094b540', 'UISystemDataTable31'),
        (r'UNK_18094b578', 'UISystemDataTable32'),
        (r'UNK_18094b590', 'UISystemDataTable33'),
        (r'UNK_18094b5c0', 'UISystemDataTable34'),
        (r'UNK_18094b608', 'UISystemDataTable35'),
        (r'UNK_18094b6b0', 'UISystemDataTable36'),
        (r'UNK_18094b930', 'UISystemDataTable37'),
        (r'UNK_18094b620', 'UISystemDataTable38'),
        (r'UNK_18094b700', 'UISystemDataTable39'),
        (r'UNK_18094b750', 'UISystemDataTable40'),
        (r'UNK_18094b7b0', 'UISystemDataTable41'),
        (r'UNK_18094b820', 'UISystemDataTable42'),
        (r'UNK_18094b8c8', 'UISystemDataTable43'),
        (r'UNK_18094b8f0', 'UISystemDataTable44'),
        (r'UNK_18094b7f8', 'UISystemDataTable45'),
        (r'UNK_18094b880', 'UISystemDataTable46'),
        (r'UNK_18094c0c8', 'UISystemDataTable47'),
        (r'UNK_18094c100', 'UISystemDataTable48'),
        (r'UNK_18094c138', 'UISystemDataTable49'),
        (r'UNK_18094c170', 'UISystemDataTable50'),
        (r'UNK_18094c1a8', 'UISystemDataTable51'),
        (r'UNK_18094c1e0', 'UISystemDataTable52'),
        (r'UNK_18094c218', 'UISystemDataTable53'),
        (r'UNK_18094c250', 'UISystemDataTable54'),
        (r'UNK_18094c288', 'UISystemDataTable55'),
        (r'UNK_18094c2c0', 'UISystemDataTable56'),
        (r'UNK_18094c2f8', 'UISystemDataTable57'),
        (r'UNK_18094c330', 'UISystemDataTable58'),
        (r'UNK_18094c368', 'UISystemDataTable59'),
        (r'UNK_18094c3a0', 'UISystemDataTable60'),
        (r'UNK_18094c3d8', 'UISystemDataTable61'),
        (r'UNK_18094c410', 'UISystemDataTable62'),
        (r'UNK_18094c448', 'UISystemDataTable63'),
        (r'UNK_18094c480', 'UISystemDataTable64'),
        (r'UNK_18094c4c8', 'UISystemDataTable65'),
        (r'UNK_18094c510', 'UISystemDataTable66'),
        (r'UNK_18094c558', 'UISystemDataTable67'),
        (r'UNK_18094c5a0', 'UISystemDataTable68'),
        (r'UNK_18094c5e8', 'UISystemDataTable69'),
        (r'UNK_18094c630', 'UISystemDataTable70'),
        (r'UNK_18094c678', 'UISystemDataTable71'),
        (r'UNK_18094c690', 'UISystemDataTable72'),
        (r'UNK_18094c6b0', 'UISystemDataTable73'),
        (r'UNK_18094c6c0', 'UISystemDataTable74'),
        (r'UNK_18094c6d0', 'UISystemDataTable75'),
        (r'UNK_18094c6d8', 'UISystemDataTable76'),
        (r'UNK_18094c6e8', 'UISystemDataTable77'),
        (r'UNK_18094c6f8', 'UISystemDataTable78'),
        (r'UNK_18094c9c0', 'UISystemDataTable79'),
        (r'UNK_18094bee8', 'UISystemDataTable80'),
        (r'UNK_18094bf00', 'UISystemDataTable81'),
        (r'UNK_18094c770', 'UISystemDataTable82'),
        (r'UNK_18094c7d0', 'UISystemDataTable83'),
        (r'UNK_18094bec8', 'UISystemDataTable84'),
        (r'UNK_18094c9a0', 'UISystemDataTable85'),
        (r'UNK_18094bf90', 'UISystemDataTable86'),
        (r'UNK_18094c840', 'UISystemDataTable87'),
        (r'UNK_18094c008', 'UISystemDataTable88'),
        (r'UNK_18094c018', 'UISystemDataTable89'),
        (r'UNK_18094c030', 'UISystemDataTable90'),
        (r'UNK_18094c048', 'UISystemDataTable91'),
        (r'UNK_18094c060', 'UISystemDataTable92'),
        (r'UNK_18094c070', 'UISystemDataTable93'),
        (r'UNK_18094c088', 'UISystemDataTable94'),
        (r'UNK_18094c830', 'UISystemDataTable95'),
        (r'UNK_18094c858', 'UISystemDataTable96'),
        (r'UNK_18094c870', 'UISystemDataTable97'),
        (r'UNK_18094c930', 'UISystemDataTable98'),
        (r'UNK_18094c990', 'UISystemDataTable99'),
        (r'UNK_18094c0b0', 'UISystemDataTable100'),
        (r'UNK_18094c850', 'UISystemDataTable101'),
        (r'UNK_180a06958', 'UISystemDataTable102'),
        (r'UNK_18094c9b0', 'UISystemDataTable103'),
        (r'UNK_18094c9b8', 'UISystemDataTable104'),
        (r'UNK_18094bbf8', 'UISystemDataTable105'),
        (r'UNK_18094c0b8', 'UISystemDataTable106'),
        (r'UNK_18094bed8', 'UISystemDataTable107'),
        (r'UNK_18094bf18', 'UISystemDataTable108'),
        (r'UNK_18094be80', 'UISystemDataTable109'),
        (r'UNK_18094c718', 'UISystemDataTable110'),
        (r'UNK_18094c758', 'UISystemDataTable111'),
        (r'UNK_18094bf50', 'UISystemDataTable112'),
        (r'UNK_18094bf60', 'UISystemDataTable113'),
        (r'UNK_180a05020', 'UISystemDataTable114'),
        (r'UNK_18094bf28', 'UISystemDataTable115'),
        (r'UNK_18094bf38', 'UISystemDataTable116'),
        (r'UNK_1806d6594', 'UISystemDataTable117'),
        (r'UNK_18094c0a8', 'UISystemDataTable118'),
        (r'UNK_18094c708', 'UISystemDataTable119'),
        (r'UNK_18094c0a4', 'UISystemDataTable120'),
        (r'UNK_18094c9d0', 'UISystemDataTable121'),
        (r'UNK_18094ca60', 'UISystemDataTable122'),
        (r'UNK_18094cab0', 'UISystemDataTable123'),
        (r'UNK_18094ca18', 'UISystemDataTable124'),
        (r'UNK_18094cad0', 'UISystemDataTable125'),
        (r'UNK_18094ca30', 'UISystemDataTable126'),
        (r'UNK_18094cb00', 'UISystemDataTable127'),
        (r'UNK_18094cde8', 'UISystemDataTable128'),
        (r'UNK_18094cfb0', 'UISystemDataTable129'),
        (r'UNK_18094d000', 'UISystemDataTable130'),
        (r'UNK_18094cb50', 'UISystemDataTable131'),
        (r'UNK_18094cbd8', 'UISystemDataTable132'),
        (r'UNK_18094cd98', 'UISystemDataTable133'),
        (r'UNK_18094d010', 'UISystemDataTable134'),
        (r'UNK_18094cba8', 'UISystemDataTable135'),
        (r'UNK_18094cb9c', 'UISystemDataTable136'),
        (r'UNK_18094cbd0', 'UISystemDataTable137'),
        (r'UNK_18094d260', 'UISystemDataTable138'),
        (r'UNK_18094d3e8', 'UISystemDataTable139'),
        (r'UNK_18094d438', 'UISystemDataTable140'),
        (r'UNK_18094d450', 'UISystemDataTable141'),
        (r'UNK_18094d090', 'UISystemDataTable142'),
        (r'UNK_18094d210', 'UISystemDataTable143'),
        (r'UNK_18094d658', 'UISystemDataTable144'),
        (r'UNK_18094d7c8', 'UISystemDataTable145'),
        (r'UNK_18094d818', 'UISystemDataTable146'),
        (r'UNK_18094d830', 'UISystemDataTable147'),
        (r'UNK_18094d4a0', 'UISystemDataTable148'),
        (r'UNK_18094d608', 'UISystemDataTable149'),
        (r'UNK_18094d880', 'UISystemDataTable150'),
        (r'UNK_18094da20', 'UISystemDataTable151'),
        (r'UNK_18094db40', 'UISystemDataTable152'),
        (r'UNK_18094db90', 'UISystemDataTable153'),
        (r'UNK_18094dba0', 'UISystemDataTable154'),
        (r'UNK_18094d8b8', 'UISystemDataTable155'),
        (r'UNK_18094d9d0', 'UISystemDataTable156'),
        (r'UNK_18094dd88', 'UISystemDataTable157'),
        (r'UNK_18094dee0', 'UISystemDataTable158'),
        (r'UNK_18094df30', 'UISystemDataTable159'),
        (r'UNK_18094df50', 'UISystemDataTable160'),
        (r'UNK_18094dbe8', 'UISystemDataTable161'),
        (r'UNK_18094dd38', 'UISystemDataTable162'),
        (r'UNK_18094e138', 'UISystemDataTable163'),
        (r'UNK_18094e280', 'UISystemDataTable164'),
        (r'UNK_18094e2d0', 'UISystemDataTable165'),
        (r'UNK_18094e2f0', 'UISystemDataTable166'),
        (r'UNK_18094dfa8', 'UISystemDataTable167'),
        (r'UNK_18094e0e8', 'UISystemDataTable168'),
        (r'UNK_1806f0f60', 'UISystemDataTable169'),
        (r'UNK_1806f1a70', 'UISystemDataTable170'),
        (r'UNK_18094e3c0', 'UISystemDataTable171'),
        (r'UNK_18094e3d0', 'UISystemDataTable172'),
        (r'UNK_18094e3e0', 'UISystemDataTable173'),
        (r'UNK_18094e3e8', 'UISystemDataTable174'),
        (r'UNK_18094e3f8', 'UISystemDataTable175'),
        (r'UNK_18094e408', 'UISystemDataTable176'),
        (r'UNK_18094e480', 'UISystemDataTable177'),
        (r'UNK_18095b500', 'UISystemDataTable178'),
        (r'UNK_18097cfe0', 'UISystemDataTable179'),
        (r'UNK_18097d050', 'UISystemDataTable180'),
        (r'UNK_180958098', 'UISystemDataTable181'),
        (r'UNK_180958070', 'UISystemDataTable182'),
        (r'UNK_18078b870', 'UISystemDataTable183'),
        (r'UNK_1809581d8', 'UISystemDataTable184'),
        (r'UNK_18094c0a0', 'UISystemDataTable185'),
        (r'UNK_1809581f8', 'UISystemDataTable186'),
        (r'UNK_1809581bc', 'UISystemDataTable187'),
        (r'UNK_1809581e8', 'UISystemDataTable188'),
        (r'UNK_1809581c8', 'UISystemDataTable189'),
        (r'UNK_1809581d0', 'UISystemDataTable190'),
        (r'UNK_1809581e0', 'UISystemDataTable191'),
        (r'UNK_1809583d0', 'UISystemDataTable192'),
        (r'UNK_180958660', 'UISystemDataTable193'),
        (r'UNK_1809586e0', 'UISystemDataTable194'),
        (r'UNK_180958758', 'UISystemDataTable195'),
        (r'UNK_180958970', 'UISystemDataTable196'),
        (r'UNK_1809589a0', 'UISystemDataTable197'),
        (r'UNK_180958a10', 'UISystemDataTable198'),
        (r'UNK_180958a50', 'UISystemDataTable199'),
        (r'UNK_180768039', 'UISystemDataTable200'),
        (r'UNK_18076804b', 'UISystemDataTable201'),
        (r'UNK_180958b20', 'UISystemDataTable202'),
        (r'UNK_180958ac0', 'UISystemDataTable203'),
        (r'UNK_180958b00', 'UISystemDataTable204'),
        (r'UNK_180958b10', 'UISystemDataTable205'),
        (r'UNK_180958ba0', 'UISystemDataTable206'),
        (r'UNK_180958c10', 'UISystemDataTable207'),
        (r'UNK_1807693c0', 'UISystemDataTable208'),
        (r'UNK_180958bf0', 'UISystemDataTable209'),
        (r'UNK_180958c88', 'UISystemDataTable210'),
        (r'UNK_180958cb0', 'UISystemDataTable211'),
        (r'UNK_180958d20', 'UISystemDataTable212'),
        (r'UNK_000003b8', 'UISystemDataTable213'),
        (r'UNK_000003c0', 'UISystemDataTable214'),
        (r'UNK_180958d90', 'UISystemDataTable215'),
        (r'UNK_180958e20', 'UISystemDataTable216'),
        (r'UNK_180958fb0', 'UISystemDataTable217'),
        (r'UNK_180770640', 'UISystemDataTable218'),
        (r'UNK_180958ec0', 'UISystemDataTable219'),
        (r'UNK_180958f10', 'UISystemDataTable220'),
        (r'UNK_180958f68', 'UISystemDataTable221'),
        (r'UNK_1809590c0', 'UISystemDataTable222'),
        (r'UNK_180747d60', 'UISystemDataTable223'),
        (r'UNK_1807868c0', 'UISystemDataTable224'),
        (r'UNK_180786c90', 'UISystemDataTable225'),
        (r'UNK_180788fc0', 'UISystemDataTable226'),
        (r'UNK_180959140', 'UISystemDataTable227'),
        (r'UNK_1809591b0', 'UISystemDataTable228'),
        (r'UNK_180959410', 'UISystemDataTable229'),
        (r'UNK_180959630', 'UISystemDataTable230'),
        (r'UNK_1809596a4', 'UISystemDataTable231'),
        (r'UNK_180959b80', 'UISystemDataTable232'),
        (r'UNK_180959d10', 'UISystemDataTable233'),
        (r'UNK_180959d80', 'UISystemDataTable234'),
        (r'UNK_180948d81', 'UICharacterMappingTable'),
        (r'UNK_18094a000', 'UIInputValidationTable'),
        (r'UNK_180953620', 'UIResourceOffsetTable'),
        (r'UNK_1809530e0', 'UIResourcePointerTable'),
        (r'UNK_180954848', 'UIComponentOffsetTable'),
        (r'UNK_1809536c0', 'UIVertexDataTable'),
        (r'UNK_180953700', 'UIIndexDataTable'),
        (r'UNK_180954860', 'UIRenderStateTable'),
        (r'UNK_180954878', 'UIRenderParamTable'),
        (r'UNK_180954890', 'UIRenderConfigTable'),
        (r'UNK_180741cf0', 'UIEventHandlerTable1'),
        (r'UNK_180741d00', 'UIEventHandlerTable2'),
        (r'UNK_180741ce0', 'UIEventHandlerTable3'),
        (r'UNK_180957080', 'UIWindowManagerTable'),
        (r'UNK_180957e20', 'UIWidgetManagerTable'),
        (r'UNK_180957e90', 'UILayoutManagerTable'),
        (r'UNK_180958000', 'UIRenderManagerTable'),
        (r'UNK_180957f70', 'UIInputManagerTable'),
        (r'UNK_18095b500', 'UIAnimationManagerTable'),
        (r'UNK_18097d050', 'UIThemeManagerTable'),
        (r'UNK_1809580d0', 'UIFontManagerTable'),
        (r'UNK_1809583d0', 'UIEventDispatcherTable'),
        (r'UNK_180be12f0', 'UISystemGlobalTable'),
        (r'UNK_180a3dc20', 'UIEnvironmentVar1'),
        (r'UNK_180a3dbc0', 'UIEnvironmentVar2'),
        (r'UNK_180a3dbd0', 'UIEnvironmentVar3'),
    ]
    
    # 应用替换
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content)
    
    return content

def replace_param_variables(content):
    """替换param_变量为更有意义的名称"""
    
    # 创建替换映射
    replacements = [
        (r'param_1', 'BaseParameter'),
        (r'param_2', 'OffsetParameter'),
        (r'param_3', 'FirstParameter'),
        (r'param_4', 'SecondParameter'),
        (r'param_5', 'ControlParameter'),
        (r'param_6', 'FlagParameter'),
        (r'param_7', 'AdditionalParameter1'),
        (r'param_8', 'AdditionalParameter2'),
    ]
    
    # 应用替换
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content)
    
    return content

def replace_undefined_variables(content):
    """替换undefined变量为更有意义的名称"""
    
    # 创建替换映射
    replacements = [
        (r'undefined1', 'ByteValue'),
        (r'undefined2', 'ShortValue'),
        (r'undefined4', 'IntValue'),
        (r'undefined8', 'LongValue'),
        (r'undefined \*', 'VoidPointer'),
        (r'undefined\[', 'UndefinedArray['),
        (r'undefined\)', 'UndefinedValue)'),
    ]
    
    # 应用替换
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content)
    
    return content

def replace_unaff_variables(content):
    """替换unaff_变量为更有意义的名称"""
    
    # 创建替换映射
    replacements = [
        (r'unaff_RBP', 'StackFramePointer'),
        (r'unaff_RSI', 'SourceIndexRegister'),
        (r'unaff_RDI', 'DestinationIndexRegister'),
        (r'unaff_RBX', 'BaseRegister'),
        (r'unaff_RSP', 'StackPointer'),
        (r'unaff_RIP', 'InstructionPointer'),
        (r'unaff_RAX', 'AccumulatorRegister'),
        (r'unaff_RCX', 'CounterRegister'),
        (r'unaff_RDX', 'DataRegister'),
        (r'unaff_XMM0', 'FloatingPointRegister0'),
        (r'unaff_XMM1', 'FloatingPointRegister1'),
        (r'unaff_XMM2', 'FloatingPointRegister2'),
        (r'unaff_XMM3', 'FloatingPointRegister3'),
        (r'unaff_XMM4', 'FloatingPointRegister4'),
        (r'unaff_XMM5', 'FloatingPointRegister5'),
        (r'unaff_XMM6', 'FloatingPointRegister6'),
        (r'unaff_XMM7', 'FloatingPointRegister7'),
        (r'unaff_XMM8', 'FloatingPointRegister8'),
        (r'unaff_XMM9', 'FloatingPointRegister9'),
        (r'unaff_XMM10', 'FloatingPointRegister10'),
        (r'unaff_XMM11', 'FloatingPointRegister11'),
        (r'unaff_XMM12', 'FloatingPointRegister12'),
        (r'unaff_XMM13', 'FloatingPointRegister13'),
        (r'unaff_XMM14', 'FloatingPointRegister14'),
        (r'unaff_XMM15', 'FloatingPointRegister15'),
    ]
    
    # 应用替换
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content)
    
    return content

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("Usage: python3 ui_system_beautify.py <file_path>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    
    # 读取文件
    print(f"Reading file: {file_path}")
    content = read_file(file_path)
    
    # 应用所有替换
    print("Applying variable replacements...")
    content = replace_unk_variables(content)
    content = replace_param_variables(content)
    content = replace_undefined_variables(content)
    content = replace_unaff_variables(content)
    
    # 写入文件
    print(f"Writing file: {file_path}")
    write_file(file_path, content)
    
    print("Variable beautification completed!")

if __name__ == "__main__":
    main()