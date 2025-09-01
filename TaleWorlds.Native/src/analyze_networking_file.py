#!/usr/bin/env python3
"""
网络系统文件美化脚本
用于分析并重命名05_networking.c文件中的FUN_函数、UNK_变量和DAT_变量
"""

import re
import os

def analyze_networking_file(file_path):
    """分析网络系统文件，提取需要重命名的函数和变量"""
    
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 提取所有FUN_函数定义
    fun_functions = re.findall(r'^.*?\b(FUN_[a-f0-9]+)\b.*?\(.*?\).*$', content, re.MULTILINE)
    
    # 提取所有UNK_变量
    unk_variables = re.findall(r'\b(UNK_[a-f0-9]+)\b', content)
    
    # 提取所有DAT_变量
    dat_variables = re.findall(r'\b(DAT_[a-f0-9]+)\b', content)
    
    # 去重
    fun_functions = list(set(fun_functions))
    unk_variables = list(set(unk_variables))
    dat_variables = list(set(dat_variables))
    
    print(f"发现 {len(fun_functions)} 个FUN_函数")
    print(f"发现 {len(unk_variables)} 个UNK_变量")
    print(f"发现 {len(dat_variables)} 个DAT_变量")
    
    # 按照地址排序
    fun_functions.sort()
    unk_variables.sort()
    dat_variables.sort()
    
    return fun_functions, unk_variables, dat_variables

def generate_function_renames(functions):
    """为FUN_函数生成语义化名称"""
    
    renames = {}
    
    for func in functions:
        # 提取地址部分
        addr = func.replace('FUN_', '')
        
        # 根据地址范围推测功能类型
        addr_int = int(addr, 16)
        
        if addr_int < 0x180854000:
            # 网络连接管理相关
            renames[func] = f"NetworkConnectionManager{addr[-4:]}"
        elif addr_int < 0x180856000:
            # 数据包处理相关
            renames[func] = f"NetworkPacketProcessor{addr[-4:]}"
        elif addr_int < 0x180858000:
            # 套接字操作相关
            renames[func] = f"NetworkSocketHandler{addr[-4:]}"
        elif addr_int < 0x18085a000:
            # 协议处理相关
            renames[func] = f"NetworkProtocolHandler{addr[-4:]}"
        elif addr_int < 0x18085c000:
            # 数据传输相关
            renames[func] = f"NetworkDataTransfer{addr[-4:]}"
        elif addr_int < 0x18085e000:
            # 连接状态相关
            renames[func] = f"NetworkConnectionStatus{addr[-4:]}"
        elif addr_int < 0x180860000:
            # 缓冲区管理相关
            renames[func] = f"NetworkBufferManager{addr[-4:]}"
        elif addr_int < 0x180862000:
            # 网络事件相关
            renames[func] = f"NetworkEventHandler{addr[-4:]}"
        elif addr_int < 0x180864000:
            # 网络配置相关
            renames[func] = f"NetworkConfiguration{addr[-4:]}"
        elif addr_int < 0x180866000:
            # 网络验证相关
            renames[func] = f"NetworkValidator{addr[-4:]}"
        elif addr_int < 0x180868000:
            # 网络同步相关
            renames[func] = f"NetworkSynchronizer{addr[-4:]}"
        else:
            # 其他网络功能
            renames[func] = f"NetworkUtility{addr[-4:]}"
    
    return renames

def generate_variable_renames(variables, prefix):
    """为变量生成语义化名称"""
    
    renames = {}
    
    for var in variables:
        # 提取地址部分
        addr = var.replace(f'{prefix}_', '')
        
        if prefix == 'UNK':
            # 根据地址范围推测变量类型
            addr_int = int(addr, 16)
            
            if addr_int < 0x180984000:
                renames[var] = f"NetworkConnectionTable{addr[-4:]}"
            elif addr_int < 0x180985000:
                renames[var] = f"NetworkPacketBuffer{addr[-4:]}"
            elif addr_int < 0x180986000:
                renames[var] = f"NetworkSocketData{addr[-4:]}"
            elif addr_int < 0x180987000:
                renames[var] = f"NetworkProtocolData{addr[-4:]}"
            elif addr_int < 0x180988000:
                renames[var] = f"NetworkConnectionStatus{addr[-4:]}"
            elif addr_int < 0x180989000:
                renames[var] = f"NetworkConfigurationData{addr[-4:]}"
            elif addr_int < 0x18098a000:
                renames[var] = f"NetworkMemoryBuffer{addr[-4:]}"
            elif addr_int < 0x18098b000:
                renames[var] = f"NetworkEventQueue{addr[-4:]}"
            elif addr_int < 0x18098c000:
                renames[var] = f"NetworkSecurityData{addr[-4:]}"
            elif addr_int < 0x18098d000:
                renames[var] = f"NetworkStatisticsData{addr[-4:]}"
            else:
                renames[var] = f"NetworkSystemData{addr[-4:]}"
        
        elif prefix == 'DAT':
            renames[var] = f"NetworkGlobalData{addr[-4:]}"
    
    return renames

def main():
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    
    if not os.path.exists(file_path):
        print(f"文件不存在: {file_path}")
        return
    
    print("开始分析网络系统文件...")
    
    # 分析文件
    fun_functions, unk_variables, dat_variables = analyze_networking_file(file_path)
    
    # 生成重命名映射
    fun_renames = generate_function_renames(fun_functions)
    unk_renames = generate_variable_renames(unk_variables, 'UNK')
    dat_renames = generate_variable_renames(dat_variables, 'DAT')
    
    # 输出结果
    print("\n=== FUN_函数重命名映射 ===")
    for old_name, new_name in fun_renames.items():
        print(f"{old_name} -> {new_name}")
    
    print("\n=== UNK_变量重命名映射 ===")
    for old_name, new_name in unk_renames.items():
        print(f"{old_name} -> {new_name}")
    
    print("\n=== DAT_变量重命名映射 ===")
    for old_name, new_name in dat_renames.items():
        print(f"{old_name} -> {new_name}")
    
    # 保存重命名脚本
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/rename_networking_vars.py', 'w', encoding='utf-8') as f:
        f.write('''#!/usr/bin/env python3
"""
网络系统文件重命名脚本
"""

# FUN_函数重命名映射
FUN_RENAMES = {
''')
        
        for old_name, new_name in fun_renames.items():
            f.write(f'    "{old_name}": "{new_name}",\n')
        
        f.write('''}

# UNK_变量重命名映射
UNK_RENAMES = {
''')
        
        for old_name, new_name in unk_renames.items():
            f.write(f'    "{old_name}": "{new_name}",\n')
        
        f.write('''}

# DAT_变量重命名映射
DAT_RENAMES = {
''')
        
        for old_name, new_name in dat_renames.items():
            f.write(f'    "{old_name}": "{new_name}",\n')
        
        f.write('''}

print("重命名映射已生成")
''')
    
    print(f"\n重命名脚本已保存到: /dev/shm/mountblade-code/TaleWorlds.Native/src/rename_networking_vars.py")

if __name__ == "__main__":
    main()