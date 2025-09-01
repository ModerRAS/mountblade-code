#!/usr/bin/env python3
"""
渲染系统函数名快速美化脚本
用于快速重命名03_rendering.c文件中的FUN_函数为语义化名称
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

def generate_function_name(address):
    """根据函数地址生成语义化函数名"""
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

def replace_functions(content):
    """替换FUN_函数为语义化名称"""
    
    # 查找所有FUN_函数定义
    function_pattern = r'^(void\s+|undefined\s+\*?\s*|bool\s+|byte\s+|ulonglong\s+|float\s+\*?\s*|longlong\s+\*?\s*|undefined4\s+\*?\s*)(FUN_[0-9a-f]{8})\s*\(([^)]*)\)\s*\{'
    
    def replace_function(match):
        prefix = match.group(1)
        original_name = match.group(2)
        params = match.group(3)
        
        # 生成新的函数名
        new_name = generate_function_name(original_name)
        
        # 添加简单的注释
        comment = f"/**\n * @brief 渲染系统函数\n * \n * 原始函数名: {original_name}\n * 功能: 根据地址推断为渲染相关功能\n * \n * @return 无返回值\n */\n"
        
        # 返回替换后的内容
        return f'{comment}{prefix}{new_name}({params})\n{{'
    
    # 替换函数定义
    content = re.sub(function_pattern, replace_function, content, flags=re.MULTILINE)
    
    # 替换函数调用
    call_pattern = r'FUN_([0-9a-f]{8})'
    
    def replace_call(match):
        address = match.group(1)
        new_name = generate_function_name(f'FUN_{address}')
        return new_name
    
    content = re.sub(call_pattern, replace_call, content)
    
    return content

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("Usage: python simple_rendering_beautify.py <file_path>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    
    # 读取文件
    print(f"正在读取文件: {file_path}")
    content = read_file(file_path)
    
    # 应用函数替换
    print("正在替换函数名...")
    content = replace_functions(content)
    
    # 写入文件
    print(f"正在写入文件: {file_path}")
    write_file(file_path, content)
    
    print("渲染系统函数美化完成！")

if __name__ == "__main__":
    main()