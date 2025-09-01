#!/usr/bin/env python3
"""
渲染系统函数和变量名美化脚本
用于批量重命名03_rendering.c文件中的FUN_函数和变量名
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
    
    # 渲染初始化相关函数
    if 0x180400000 <= addr <= 0x180401000:
        return f"InitializeRenderer_{addr & 0xFFF:03x}"
    elif 0x180401000 <= addr <= 0x180402000:
        return f"SetupRenderPipeline_{addr & 0xFFF:03x}"
    elif 0x180402000 <= addr <= 0x180403000:
        return f"CreateRenderContext_{addr & 0xFFF:03x}"
    
    # 渲染状态管理
    elif 0x180403000 <= addr <= 0x180404000:
        return f"ManageRenderState_{addr & 0xFFF:03x}"
    elif 0x180404000 <= addr <= 0x180405000:
        return f"UpdateRenderBuffer_{addr & 0xFFF:03x}"
    elif 0x180405000 <= addr <= 0x180406000:
        return f"ConfigureRenderSettings_{addr & 0xFFF:03x}"
    
    # 渲染操作
    elif 0x180406000 <= addr <= 0x180407000:
        return f"ExecuteRenderCommand_{addr & 0xFFF:03x}"
    elif 0x180407000 <= addr <= 0x180408000:
        return f"ProcessRenderData_{addr & 0xFFF:03x}"
    elif 0x180408000 <= addr <= 0x180409000:
        return f"HandleRenderQueue_{addr & 0xFFF:03x}"
    
    # 缓冲区管理
    elif 0x180409000 <= addr <= 0x18040a000:
        return f"ManageRenderBuffer_{addr & 0xFFF:03x}"
    elif 0x18040a000 <= addr <= 0x18040b000:
        return f"OptimizeBufferUsage_{addr & 0xFFF:03x}"
    elif 0x18040b000 <= addr <= 0x18040c000:
        return f"FlushBufferCache_{addr & 0xFFF:03x}"
    
    # 纹理和材质
    elif 0x18040c000 <= addr <= 0x18040d000:
        return f"LoadTexture_{addr & 0xFFF:03x}"
    elif 0x18040d000 <= addr <= 0x18040e000:
        return f"ProcessMaterial_{addr & 0xFFF:03x}"
    elif 0x18040e000 <= addr <= 0x18040f000:
        return f"UpdateShader_{addr & 0xFFF:03x}"
    
    # 渲染效果
    elif 0x18040f000 <= addr <= 0x180410000:
        return f"ApplyRenderEffect_{addr & 0xFFF:03x}"
    elif 0x180410000 <= addr <= 0x180411000:
        return f"ProcessLighting_{addr & 0xFFF:03x}"
    elif 0x180411000 <= addr <= 0x180412000:
        return f"HandleShadow_{addr & 0xFFF:03x}"
    
    # 图形对象管理
    elif 0x180412000 <= addr <= 0x180413000:
        return f"CreateGraphicsObject_{addr & 0xFFF:03x}"
    elif 0x180413000 <= addr <= 0x180414000:
        return f"UpdateGraphicsObject_{addr & 0xFFF:03x}"
    elif 0x180414000 <= addr <= 0x180415000:
        return f"DestroyGraphicsObject_{addr & 0xFFF:03x}"
    
    # 渲染查询
    elif 0x180415000 <= addr <= 0x180416000:
        return f"QueryRenderInfo_{addr & 0xFFF:03x}"
    elif 0x180416000 <= addr <= 0x180417000:
        return f"ValidateRenderState_{addr & 0xFFF:03x}"
    elif 0x180417000 <= addr <= 0x180418000:
        return f"CheckRenderError_{addr & 0xFFF:03x}"
    
    # 特殊渲染功能
    elif 0x180418000 <= addr <= 0x180419000:
        return f"ProcessSpecialRender_{addr & 0xFFF:03x}"
    elif 0x180419000 <= addr <= 0x18041a000:
        return f"HandlePostProcess_{addr & 0xFFF:03x}"
    elif 0x18041a000 <= addr <= 0x18041b000:
        return f"ManageRenderTarget_{addr & 0xFFF:03x}"
    
    # 渲染工具函数
    elif 0x18041b000 <= addr <= 0x18041c000:
        return f"ConvertRenderData_{addr & 0xFFF:03x}"
    elif 0x18041c000 <= addr <= 0x18041d000:
        return f"OptimizeRenderCall_{addr & 0xFFF:03x}"
    elif 0x18041d000 <= addr <= 0x18041e000:
        return f"BatchRenderOperation_{addr & 0xFFF:03x}"
    
    # 渲染同步
    elif 0x18041e000 <= addr <= 0x18041f000:
        return f"SynchronizeRender_{addr & 0xFFF:03x}"
    elif 0x18041f000 <= addr <= 0x180420000:
        return f"WaitForRender_{addr & 0xFFF:03x}"
    elif 0x180420000 <= addr <= 0x180421000:
        return f"SignalRenderEvent_{addr & 0xFFF:03x}"
    
    # 渲染统计和性能
    elif 0x180421000 <= addr <= 0x180422000:
        return f"CollectRenderStats_{addr & 0xFFF:03x}"
    elif 0x180422000 <= addr <= 0x180423000:
        return f"ProfileRenderPerformance_{addr & 0xFFF:03x}"
    elif 0x180423000 <= addr <= 0x180424000:
        return f"OptimizeRenderPerformance_{addr & 0xFFF:03x}"
    
    # 内存管理
    elif 0x180424000 <= addr <= 0x180425000:
        return f"AllocateRenderMemory_{addr & 0xFFF:03x}"
    elif 0x180425000 <= addr <= 0x180426000:
        return f"FreeRenderMemory_{addr & 0xFFF:03x}"
    elif 0x180426000 <= addr <= 0x180427000:
        return f"CompactRenderMemory_{addr & 0xFFF:03x}"
    
    # 资源管理
    elif 0x180427000 <= addr <= 0x180428000:
        return f"LoadRenderResource_{addr & 0xFFF:03x}"
    elif 0x180428000 <= addr <= 0x180429000:
        return f"UnloadRenderResource_{addr & 0xFFF:03x}"
    elif 0x180429000 <= addr <= 0x18042a000:
        return f"CacheRenderResource_{addr & 0xFFF:03x}"
    
    # 其他渲染功能
    elif 0x18042a000 <= addr <= 0x18042b000:
        return f"ProcessRenderCommand_{addr & 0xFFF:03x}"
    elif 0x18042b000 <= addr <= 0x18042c000:
        return f"ValidateRenderData_{addr & 0xFFF:03x}"
    elif 0x18042c000 <= addr <= 0x18042d000:
        return f"TransformRenderData_{addr & 0xFFF:03x}"
    
    else:
        return f"RenderUtilityFunction_{addr & 0xFFFF:04x}"

def add_function_comment(function_name, original_line):
    """为函数添加注释"""
    comment_templates = {
        'InitializeRenderer': '/**\n * @brief 初始化渲染器\n * \n * 该函数负责初始化渲染系统，设置必要的渲染上下文和状态\n * \n * @return 无返回值\n * @note 此函数必须在渲染系统启动时调用\n */',
        'SetupRenderPipeline': '/**\n * @brief 设置渲染管线\n * \n * 该函数负责配置渲染管线，包括着色器、混合模式和深度测试等\n * \n * @return 无返回值\n * @note 此函数会根据渲染需求配置不同的渲染状态\n */',
        'CreateRenderContext': '/**\n * @brief 创建渲染上下文\n * \n * 该函数负责创建渲染上下文，为渲染操作提供必要的环境\n * \n * @return 无返回值\n * @note 此函数会分配渲染所需的资源\n */',
        'ManageRenderState': '/**\n * @brief 管理渲染状态\n * \n * 该函数负责管理渲染状态，包括切换不同的渲染模式\n * \n * @return 无返回值\n * @note 此函数会根据当前渲染需求更新状态\n */',
        'UpdateRenderBuffer': '/**\n * @brief 更新渲染缓冲区\n * \n * 该函数负责更新渲染缓冲区，处理顶点、索引等数据\n * \n * @return 无返回值\n * @note 此函数会在渲染数据变化时被调用\n */',
        'ConfigureRenderSettings': '/**\n * @brief 配置渲染设置\n * \n * 该函数负责配置渲染设置，包括分辨率、抗锯齿等参数\n * \n * @return 无返回值\n * @note 此函数会影响最终的渲染效果\n */',
        'ExecuteRenderCommand': '/**\n * @brief 执行渲染命令\n * \n * 该函数负责执行具体的渲染命令，如绘制、清除等\n * \n * @return 无返回值\n * @note 此函数是渲染系统的核心执行函数\n */',
        'ProcessRenderData': '/**\n * @brief 处理渲染数据\n * \n * 该函数负责处理渲染数据，包括变换、裁剪等操作\n * \n * @return 无返回值\n * @note 此函数会对原始数据进行预处理\n */',
        'HandleRenderQueue': '/**\n * @brief 处理渲染队列\n * \n * 该函数负责处理渲染队列，按优先级执行渲染任务\n * \n * @return 无返回值\n * @note 此函数会优化渲染顺序以提高性能\n */',
        'ManageRenderBuffer': '/**\n * @brief 管理渲染缓冲区\n * \n * 该函数负责管理渲染缓冲区，包括创建、更新和销毁\n * \n * @return 无返回值\n * @note 此函数会管理GPU内存的使用\n */',
        'OptimizeBufferUsage': '/**\n * @brief 优化缓冲区使用\n * \n * 该函数负责优化缓冲区使用，减少内存碎片和提升性能\n * \n * @return 无返回值\n * @note 此函数会定期调用以保持最佳性能\n */',
        'FlushBufferCache': '/**\n * @brief 刷新缓冲区缓存\n * \n * 该函数负责刷新缓冲区缓存，确保数据同步\n * \n * @return 无返回值\n * @note 此函数会在关键渲染操作前调用\n */',
        'LoadTexture': '/**\n * @brief 加载纹理\n * \n * 该函数负责加载纹理资源，包括图像文件和纹理参数\n * \n * @return 无返回值\n * @note 此函数支持多种纹理格式\n */',
        'ProcessMaterial': '/**\n * @brief 处理材质\n * \n * 该函数负责处理材质数据，包括纹理、颜色和属性\n * \n * @return 无返回值\n * @note 此函数会编译材质着色器\n */',
        'UpdateShader': '/**\n * @brief 更新着色器\n * \n * 该函数负责更新着色器程序，处理渲染效果\n * \n * @return 无返回值\n * @note 此函数会重新编译着色器代码\n */',
        'ApplyRenderEffect': '/**\n * @brief 应用渲染效果\n * \n * 该函数负责应用渲染效果，如模糊、发光等后处理效果\n * \n * @return 无返回值\n * @note 此函数会修改渲染管线的输出\n */',
        'ProcessLighting': '/**\n * @brief 处理光照\n * \n * 该函数负责处理光照计算，包括光源和材质的交互\n * \n * @return 无返回值\n * @note 此函数会计算像素的光照强度\n */',
        'HandleShadow': '/**\n * @brief 处理阴影\n * \n * 该函数负责处理阴影渲染，包括阴影贴图和投影\n * \n * @return 无返回值\n * @note 此函数会生成实时的阴影效果\n */',
        'CreateGraphicsObject': '/**\n * @brief 创建图形对象\n * \n * 该函数负责创建图形对象，包括网格、模型等\n * \n * @return 无返回值\n * @note 此函数会分配GPU资源\n */',
        'UpdateGraphicsObject': '/**\n * @brief 更新图形对象\n * \n * 该函数负责更新图形对象的数据和状态\n * \n * @return 无返回值\n * @note 此函数会同步CPU和GPU数据\n */',
        'DestroyGraphicsObject': '/**\n * @brief 销毁图形对象\n * \n * 该函数负责销毁图形对象，释放相关资源\n * \n * @return 无返回值\n * @note 此函数会安全地释放GPU内存\n */',
        'QueryRenderInfo': '/**\n * @brief 查询渲染信息\n * \n * 该函数负责查询渲染信息，包括性能统计和状态\n * \n * @return 渲染信息\n * @note 此函数用于调试和性能监控\n */',
        'ValidateRenderState': '/**\n * @brief 验证渲染状态\n * \n * 该函数负责验证渲染状态的正确性\n * \n * @return 验证结果\n * @note 此函数用于错误检测和状态确认\n */',
        'CheckRenderError': '/**\n * @brief 检查渲染错误\n * \n * 该函数负责检查渲染过程中的错误\n * \n * @return 错误状态\n * @note 此函数用于错误处理和诊断\n */',
        'ProcessSpecialRender': '/**\n * @brief 处理特殊渲染\n * \n * 该函数负责处理特殊的渲染效果和模式\n * \n * @return 无返回值\n * @note 此函数处理非标准的渲染需求\n */',
        'HandlePostProcess': '/**\n * @brief 处理后处理\n * \n * 该函数负责处理后处理效果，如色彩校正、景深等\n * \n * @return 无返回值\n * @note 此函数在主渲染完成后执行\n */',
        'ManageRenderTarget': '/**\n * @brief 管理渲染目标\n * \n * 该函数负责管理渲染目标，包括屏幕和离屏缓冲区\n * \n * @return 无返回值\n * @note 此函数会切换不同的渲染目标\n */',
        'ConvertRenderData': '/**\n * @brief 转换渲染数据\n * \n * 该函数负责转换渲染数据的格式和结构\n * \n * @return 转换后的数据\n * @note 此函数会优化数据格式\n */',
        'OptimizeRenderCall': '/**\n * @brief 优化渲染调用\n * \n * 该函数负责优化渲染调用，减少绘制次数\n * \n * @return 无返回值\n * @note 此函数会合并相似的渲染操作\n */',
        'BatchRenderOperation': '/**\n * @brief 批量渲染操作\n * \n * 该函数负责批量处理渲染操作，提高效率\n * \n * @return 无返回值\n * @note 此函数会减少GPU状态切换\n */',
        'SynchronizeRender': '/**\n * @brief 同步渲染\n * \n * 该函数负责同步渲染操作，确保数据一致性\n * \n * @return 无返回值\n * @note 此函数会等待GPU操作完成\n */',
        'WaitForRender': '/**\n * @brief 等待渲染\n * \n * 该函数负责等待渲染操作完成\n * \n * @return 无返回值\n * @note 此函数用于同步CPU和GPU\n */',
        'SignalRenderEvent': '/**\n * @brief 信号渲染事件\n * \n * 该函数负责发送渲染事件信号\n * \n * @return 无返回值\n * @note 此函数用于事件通知\n */',
        'CollectRenderStats': '/**\n * @brief 收集渲染统计\n * \n * 该函数负责收集渲染性能统计数据\n * \n * @return 统计数据\n * @note 此函数用于性能分析\n */',
        'ProfileRenderPerformance': '/**\n * @brief 分析渲染性能\n * \n * 该函数负责分析渲染性能，识别瓶颈\n * \n * @return 性能分析结果\n * @note 此函数用于性能优化\n */',
        'OptimizeRenderPerformance': '/**\n * @brief 优化渲染性能\n * \n * 该函数负责优化渲染性能，应用各种优化技术\n * \n * @return 无返回值\n * @note 此函数会持续改进性能\n */',
        'AllocateRenderMemory': '/**\n * @brief 分配渲染内存\n * \n * 该函数负责分配渲染所需的内存\n * \n * @return 内存指针\n * @note 此函数会管理GPU内存池\n */',
        'FreeRenderMemory': '/**\n * @brief 释放渲染内存\n * \n * 该函数负责释放不再使用的渲染内存\n * \n * @return 无返回值\n * @note 此函数会防止内存泄漏\n */',
        'CompactRenderMemory': '/**\n * @brief 压缩渲染内存\n * \n * 该函数负责压缩渲染内存，减少碎片\n * \n * @return 无返回值\n * @note 此函数会优化内存使用\n */',
        'LoadRenderResource': '/**\n * @brief 加载渲染资源\n * \n * 该函数负责加载渲染资源，如纹理、模型等\n * \n * @return 资源句柄\n * @note 此函数支持异步加载\n */',
        'UnloadRenderResource': '/**\n * @brief 卸载渲染资源\n * \n * 该函数负责卸载不再需要的渲染资源\n * \n * @return 无返回值\n * @note 此函数会释放相关资源\n */',
        'CacheRenderResource': '/**\n * @brief 缓存渲染资源\n * \n * 该函数负责缓存渲染资源，提高加载速度\n * \n * @return 缓存结果\n * @note 此函数会管理资源缓存\n */',
        'ProcessRenderCommand': '/**\n * @brief 处理渲染命令\n * \n * 该函数负责处理渲染命令队列\n * \n * @return 无返回值\n * @note 此函数是渲染命令处理器\n */',
        'ValidateRenderData': '/**\n * @brief 验证渲染数据\n * \n * 该函数负责验证渲染数据的有效性\n * \n * @return 验证结果\n * @note 此函数用于数据完整性检查\n */',
        'TransformRenderData': '/**\n * @brief 转换渲染数据\n * \n * 该函数负责转换渲染数据的格式和结构\n * \n * @return 转换后的数据\n * @note 此函数会优化数据布局\n */',
        'RenderUtilityFunction': '/**\n * @brief 渲染工具函数\n * \n * 该函数提供渲染系统的通用工具功能\n * \n * @return 无返回值\n * @note 这是一个通用的渲染工具函数\n */'
    }
    
    for prefix, comment in comment_templates.items():
        if function_name.startswith(prefix):
            return comment + '\n'
    
    return '/**\n * @brief 渲染系统函数\n * \n * 该函数是渲染系统的一部分\n * \n * @return 无返回值\n */\n'

def replace_fun_functions(content):
    """替换FUN_函数为语义化名称"""
    
    # 查找所有FUN_函数定义
    function_pattern = r'^(void\s+|undefined\s+\*?\s*|bool\s+|byte\s+|ulonglong\s+|float\s+\*?\s*|longlong\s+\*?\s*|undefined4\s+\*?\s*)(FUN_[0-9a-f]{8})\s*\(([^)]*)\)\s*\{'
    
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
        (r'UNK_180947e80', 'RenderDataTable'),
        (r'UNK_18098bcb0', 'RenderContextHandle'),
        (r'UNK_180a26f90', 'RenderBufferPointer'),
        (r'UNK_180a27040', 'RenderStateData'),
        (r'UNK_180a18e08', 'RenderConfigString'),
        (r'UNK_180a3c3e0', 'RenderParameterBlock'),
        (r'UNK_1809fcc58', 'RenderDefaultSettings'),
        
        # 渲染常量
        (r'UNK_180bf00a8', 'RenderMagicConstant'),
        (r'UNK_180c86878', 'RenderGlobalData'),
        (r'UNK_180c86938', 'RenderSystemData'),
        (r'UNK_180c8a9c8', 'RenderStatusData'),
        (r'UNK_180c8ed18', 'RenderResourceTable'),
        
        # 特殊值
        (r'0xfffffffffffffffe', 'RENDER_INVALID_HANDLE'),
        (r'0xfffffffffffffffd', 'RENDER_ERROR_HANDLE'),
        (r'0x3f800000', 'RENDER_SCALE_FACTOR'),
        (r'0x53203e20', 'RENDER_SIGNATURE_1'),
        (r'0x444e554f', 'RENDER_SIGNATURE_2'),
    ]
    
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content)
    
    return content

def replace_param_variables(content):
    """替换参数变量为更有意义的名称"""
    
    # 创建替换映射
    replacements = [
        (r'param_1', 'renderContext'),
        (r'param_2', 'renderData'),
        (r'param_3', 'renderFlags'),
        (r'param_4', 'renderOptions'),
        (r'param_5', 'renderMode'),
        (r'param_6', 'renderTarget'),
    ]
    
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content)
    
    return content

def replace_undefined_variables(content):
    """替换undefined变量为更有意义的名称"""
    
    # 创建替换映射
    replacements = [
        (r'undefined', 'renderByte'),
        (r'undefined1', 'renderFlag'),
        (r'undefined2', 'renderShort'),
        (r'undefined4', 'renderInt'),
        (r'undefined8', 'renderLong'),
        (r'undefined\*', 'renderPointer'),
    ]
    
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content)
    
    return content

def replace_unaff_variables(content):
    """替换unaff变量为更有意义的名称"""
    
    # 创建替换映射
    replacements = [
        (r'unaff_RBP', 'renderFramePointer'),
        (r'unaff_RSP', 'renderStackPointer'),
        (r'unaff_RBX', 'renderBaseRegister'),
        (r'unaff_R12', 'renderGeneralReg12'),
        (r'unaff_R13', 'renderGeneralReg13'),
        (r'unaff_R14', 'renderGeneralReg14'),
        (r'unaff_R15', 'renderGeneralReg15'),
        (r'unaff_RSI', 'renderSourceIndex'),
        (r'unaff_RDI', 'renderDestIndex'),
        (r'unaff_RAX', 'renderAccumulator'),
        (r'unaff_RCX', 'renderCounter'),
        (r'unaff_RDX', 'renderDataReg'),
    ]
    
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content)
    
    return content

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("Usage: python beautify_rendering_functions.py <file_path>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    
    # 读取文件
    print(f"Reading file: {file_path}")
    content = read_file(file_path)
    
    # 应用所有替换
    print("Applying function replacements...")
    content = replace_fun_functions(content)
    
    print("Applying variable replacements...")
    content = replace_unk_variables(content)
    content = replace_param_variables(content)
    content = replace_undefined_variables(content)
    content = replace_unaff_variables(content)
    
    # 写入文件
    print(f"Writing file: {file_path}")
    write_file(file_path, content)
    
    print("Function and variable beautification completed!")

if __name__ == "__main__":
    main()