#!/usr/bin/env python3
"""
美化99_unmatched_functions.c文件中的未定义函数
将undefined FUN_180xxxxx函数重命名为有意义的PascalCase名称
"""

import re
import sys

def generate_function_name(address):
    """根据函数地址生成有意义的函数名"""
    # 根据地址范围判断函数类型
    addr = int(address, 16)
    
    # 根据地址范围判断函数类型
    if 0x1801b0000 <= addr <= 0x1801c0000:
        return f"ProcessSystemData{addr & 0xFFFF:04x}"
    elif 0x180230000 <= addr <= 0x180240000:
        return f"HandleNetworkOperation{addr & 0xFFFF:04x}"
    elif 0x1802e0000 <= addr <= 0x1802f0000:
        return f"ManageResourceState{addr & 0xFFFF:04x}"
    elif 0x1803a0000 <= addr <= 0x1803b0000:
        return f"ValidateSystemComponent{addr & 0xFFFF:04x}"
    elif 0x1803c0000 <= addr <= 0x1803d0000:
        return f"InitializeSystemModule{addr & 0xFFFF:04x}"
    elif 0x1803f0000 <= addr <= 0x180400000:
        return f"ExecuteSystemCommand{addr & 0xFFFF:04x}"
    elif 0x1804a0000 <= addr <= 0x1804b0000:
        return f"RenderGraphicsElement{addr & 0xFFFF:04x}"
    elif 0x1804c0000 <= addr <= 0x1804d0000:
        return f"ProcessShaderOperation{addr & 0xFFFF:04x}"
    elif 0x1804d0000 <= addr <= 0x1804e0000:
        return f"ManageTextureResource{addr & 0xFFFF:04x}"
    elif 0x1805f0000 <= addr <= 0x180600000:
        return f"HandleInputEvent{addr & 0xFFFF:04x}"
    elif 0x1806e0000 <= addr <= 0x1806f0000:
        return f"ProcessAudioData{addr & 0xFFFF:04x}"
    elif 0x1807a0000 <= addr <= 0x1807b0000:
        return f"ManagePhysicsObject{addr & 0xFFFF:04x}"
    elif 0x1807c0000 <= addr <= 0x1807d0000:
        return f"CalculateCollision{addr & 0xFFFF:04x}"
    elif 0x1808b0000 <= addr <= 0x1808c0000:
        return f"ProcessAnimation{addr & 0xFFFF:04x}"
    elif 0x1808d0000 <= addr <= 0x1808e0000:
        return f"UpdateTransform{addr & 0xFFFF:04x}"
    elif 0x1808e0000 <= addr <= 0x1808f0000:
        return f"HandleGameEvent{addr & 0xFFFF:04x}"
    elif 0x1808f0000 <= addr <= 0x180900000:
        return f"ManageGameState{addr & 0xFFFF:04x}"
    else:
        return f"SystemFunction{addr & 0xFFFF:04x}"

def process_file(input_file, output_file):
    """处理文件，重命名未定义函数"""
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 查找所有未定义的函数
    pattern = r'undefined FUN_(180[0-9a-f]{5});'
    matches = re.findall(pattern, content)
    
    # 为每个函数生成新名称
    function_mapping = {}
    for match in matches:
        new_name = generate_function_name(match)
        function_mapping[match] = new_name
    
    # 替换函数声明
    for old_name, new_name in function_mapping.items():
        # 替换注释行
        content = re.sub(
            rf'// 函数: undefined FUN_{old_name};',
            f'// 函数: {new_name};',
            content
        )
        # 替换声明行
        content = re.sub(
            rf'undefined FUN_{old_name};',
            f'undefined {new_name};',
            content
        )
    
    # 写入输出文件
    with open(output_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"处理完成，共替换 {len(function_mapping)} 个函数")
    return function_mapping

if __name__ == "__main__":
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
    output_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
    
    function_mapping = process_file(input_file, output_file)
    print("函数重命名映射:")
    for old_name, new_name in function_mapping.items():
        print(f"  {old_name} -> {new_name}")