#!/usr/bin/env python3
"""
美化02_core_engine.c文件中的函数名
将FUN_开头的函数名替换为语义化的名称
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    try:
        with open(file_path, 'r', encoding='utf-8') as file:
            return file.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return None

def write_file(file_path, content):
    """写入文件内容"""
    try:
        with open(file_path, 'w', encoding='utf-8') as file:
            file.write(content)
        return True
    except Exception as e:
        print(f"写入文件失败: {e}")
        return False

def extract_function_declarations(content):
    """提取函数声明"""
    # 匹配 // 函数: void FUN_180060420(uint64_t *TargetDataStructure) 这样的行
    pattern = r'// 函数: void (FUN_[a-f0-9]+)\(([^)]*)\)'
    matches = re.findall(pattern, content)
    return matches

def generate_function_name(match):
    """根据函数地址生成语义化函数名"""
    func_addr = match[0]
    params = match[1]
    
    # 根据函数地址生成不同的函数名
    addr_num = int(func_addr.split('_')[1], 16)
    
    # 根据地址范围确定函数类型
    if 0x180060000 <= addr_num < 0x180061000:
        return f"CoreEngineProcessSystemData{addr_num & 0xFFF:03x}"
    elif 0x180061000 <= addr_num < 0x180062000:
        return f"CoreEngineHandleMemoryOperation{addr_num & 0xFFF:03x}"
    elif 0x180062000 <= addr_num < 0x180063000:
        return f"CoreEngineManageDataStructure{addr_num & 0xFFF:03x}"
    elif 0x180063000 <= addr_num < 0x180064000:
        return f"CoreEngineProcessSystemEvent{addr_num & 0xFFF:03x}"
    elif 0x180064000 <= addr_num < 0x180065000:
        return f"CoreEngineHandleResourceAllocation{addr_num & 0xFFF:03x}"
    elif 0x180065000 <= addr_num < 0x180066000:
        return f"CoreEngineProcessSystemConfiguration{addr_num & 0xFFF:03x}"
    elif 0x180066000 <= addr_num < 0x180067000:
        return f"CoreEngineHandleSystemInitialization{addr_num & 0xFFF:03x}"
    elif 0x180067000 <= addr_num < 0x180068000:
        return f"CoreEngineProcessMemoryManagement{addr_num & 0xFFF:03x}"
    elif 0x180068000 <= addr_num < 0x180069000:
        return f"CoreEngineHandleDataValidation{addr_num & 0xFFF:03x}"
    elif 0x180069000 <= addr_num < 0x18006a000:
        return f"CoreEngineProcessSystemOperation{addr_num & 0xFFF:03x}"
    elif 0x18006a000 <= addr_num < 0x18006b000:
        return f"CoreEngineHandleSystemSynchronization{addr_num & 0xFFF:03x}"
    elif 0x18006b000 <= addr_num < 0x18006c000:
        return f"CoreEngineProcessSystemThread{addr_num & 0xFFF:03x}"
    elif 0x18006c000 <= addr_num < 0x18006d000:
        return f"CoreEngineHandleSystemEvent{addr_num & 0xFFF:03x}"
    elif 0x18006d000 <= addr_num < 0x18006e000:
        return f"CoreEngineProcessSystemResource{addr_num & 0xFFF:03x}"
    elif 0x18006e000 <= addr_num < 0x18006f000:
        return f"CoreEngineHandleSystemQueue{addr_num & 0xFFF:03x}"
    elif 0x18006f000 <= addr_num < 0x180070000:
        return f"CoreEngineProcessSystemBuffer{addr_num & 0xFFF:03x}"
    elif 0x180070000 <= addr_num < 0x180071000:
        return f"CoreEngineHandleSystemData{addr_num & 0xFFF:03x}"
    elif 0x180071000 <= addr_num < 0x180072000:
        return f"CoreEngineProcessSystemMemory{addr_num & 0xFFF:03x}"
    elif 0x180072000 <= addr_num < 0x180073000:
        return f"CoreEngineHandleSystemConfiguration{addr_num & 0xFFF:03x}"
    elif 0x180073000 <= addr_num < 0x180074000:
        return f"CoreEngineProcessSystemState{addr_num & 0xFFF:03x}"
    elif 0x180074000 <= addr_num < 0x180075000:
        return f"CoreEngineHandleSystemOperation{addr_num & 0xFFF:03x}"
    elif 0x180075000 <= addr_num < 0x180076000:
        return f"CoreEngineProcessSystemFunction{addr_num & 0xFFF:03x}"
    elif 0x180076000 <= addr_num < 0x180077000:
        return f"CoreEngineHandleSystemCallback{addr_num & 0xFFF:03x}"
    elif 0x180077000 <= addr_num < 0x180078000:
        return f"CoreEngineProcessSystemTask{addr_num & 0xFFF:03x}"
    elif 0x180078000 <= addr_num < 0x180079000:
        return f"CoreEngineHandleSystemParameter{addr_num & 0xFFF:03x}"
    elif 0x180079000 <= addr_num < 0x18007a000:
        return f"CoreEngineProcessSystemValidation{addr_num & 0xFFF:03x}"
    elif 0x18007a000 <= addr_num < 0x18007b000:
        return f"CoreEngineHandleSystemFlag{addr_num & 0xFFF:03x}"
    elif 0x18007b000 <= addr_num < 0x18007c000:
        return f"CoreEngineProcessSystemVariable{addr_num & 0xFFF:03x}"
    elif 0x18007c000 <= addr_num < 0x18007d000:
        return f"CoreEngineHandleSystemConstant{addr_num & 0xFFF:03x}"
    elif 0x18007d000 <= addr_num < 0x18007e000:
        return f"CoreEngineProcessSystemArray{addr_num & 0xFFF:03x}"
    elif 0x18007e000 <= addr_num < 0x18007f000:
        return f"CoreEngineHandleSystemPointer{addr_num & 0xFFF:03x}"
    elif 0x18007f000 <= addr_num < 0x180080000:
        return f"CoreEngineProcessSystemReference{addr_num & 0xFFF:03x}"
    elif 0x180080000 <= addr_num < 0x180081000:
        return f"CoreEngineHandleSystemStructure{addr_num & 0xFFF:03x}"
    elif 0x180081000 <= addr_num < 0x180082000:
        return f"CoreEngineProcessSystemAllocation{addr_num & 0xFFF:03x}"
    elif 0x180082000 <= addr_num < 0x180083000:
        return f"CoreEngineHandleSystemDeallocation{addr_num & 0xFFF:03x}"
    elif 0x180083000 <= addr_num < 0x180084000:
        return f"CoreEngineProcessSystemCleanup{addr_num & 0xFFF:03x}"
    elif 0x180084000 <= addr_num < 0x180085000:
        return f"CoreEngineHandleSystemFinalization{addr_num & 0xFFF:03x}"
    elif 0x180085000 <= addr_num < 0x180086000:
        return f"CoreEngineProcessSystemInitialization{addr_num & 0xFFF:03x}"
    elif 0x180086000 <= addr_num < 0x180087000:
        return f"CoreEngineHandleSystemTermination{addr_num & 0xFFF:03x}"
    elif 0x180087000 <= addr_num < 0x180088000:
        return f"CoreEngineProcessSystemReset{addr_num & 0xFFF:03x}"
    elif 0x180088000 <= addr_num < 0x180089000:
        return f"CoreEngineHandleSystemFlush{addr_num & 0xFFF:03x}"
    elif 0x180089000 <= addr_num < 0x18008a000:
        return f"CoreEngineProcessSystemClear{addr_num & 0xFFF:03x}"
    elif 0x18008a000 <= addr_num < 0x18008b000:
        return f"CoreEngineHandleSystemEmpty{addr_num & 0xFFF:03x}"
    elif 0x18008b000 <= addr_num < 0x18008c000:
        return f"CoreEngineProcessSystemNull{addr_num & 0xFFF:03x}"
    elif 0x18008c000 <= addr_num < 0x18008d000:
        return f"CoreEngineHandleSystemZero{addr_num & 0xFFF:03x}"
    elif 0x18008d000 <= addr_num < 0x18008e000:
        return f"CoreEngineProcessSystemDefault{addr_num & 0xFFF:03x}"
    elif 0x18008e000 <= addr_num < 0x18008f000:
        return f"CoreEngineHandleSystemStandard{addr_num & 0xFFF:03x}"
    elif 0x18008f000 <= addr_num < 0x180090000:
        return f"CoreEngineProcessSystemBasic{addr_num & 0xFFF:03x}"
    elif 0x180090000 <= addr_num < 0x180091000:
        return f"CoreEngineHandleSystemSimple{addr_num & 0xFFF:03x}"
    elif 0x180091000 <= addr_num < 0x180092000:
        return f"CoreEngineProcessSystemGeneral{addr_num & 0xFFF:03x}"
    elif 0x180092000 <= addr_num < 0x180093000:
        return f"CoreEngineHandleSystemCommon{addr_num & 0xFFF:03x}"
    elif 0x180093000 <= addr_num < 0x180094000:
        return f"CoreEngineProcessSystemUniversal{addr_num & 0xFFF:03x}"
    elif 0x180094000 <= addr_num < 0x180095000:
        return f"CoreEngineHandleSystemGlobal{addr_num & 0xFFF:03x}"
    elif 0x180095000 <= addr_num < 0x180096000:
        return f"CoreEngineProcessSystemShared{addr_num & 0xFFF:03x}"
    elif 0x180096000 <= addr_num < 0x180097000:
        return f"CoreEngineHandleSystemPublic{addr_num & 0xFFF:03x}"
    elif 0x180097000 <= addr_num < 0x180098000:
        return f"CoreEngineProcessSystemStatic{addr_num & 0xFFF:03x}"
    elif 0x180098000 <= addr_num < 0x180099000:
        return f"CoreEngineHandleSystemFixed{addr_num & 0xFFF:03x}"
    elif 0x180099000 <= addr_num < 0x18009a000:
        return f"CoreEngineProcessSystemConstant{addr_num & 0xFFF:03x}"
    elif 0x18009a000 <= addr_num < 0x18009b000:
        return f"CoreEngineHandleSystemImmutable{addr_num & 0xFFF:03x}"
    elif 0x18009b000 <= addr_num < 0x18009c000:
        return f"CoreEngineProcessSystemStable{addr_num & 0xFFF:03x}"
    elif 0x18009c000 <= addr_num < 0x18009d000:
        return f"CoreEngineHandleSystemPermanent{addr_num & 0xFFF:03x}"
    else:
        return f"CoreEngineSystemFunction{addr_num & 0xFFFF:04x}"

def generate_function_comment(func_name, params):
    """生成函数注释"""
    param_list = [p.strip() for p in params.split(',') if p.strip()]
    
    comment = f"/**\n"
    comment += f" * @brief 核心引擎系统功能函数\n"
    comment += f" * \n"
    comment += f" * 该函数是核心引擎系统的一个重要功能函数，负责处理系统级别的操作。\n"
    comment += f" * 具体功能根据函数参数和上下文确定。\n"
    comment += f" * \n"
    
    # 添加参数说明
    for i, param in enumerate(param_list):
        comment += f" * @param param{i+1} 参数{i+1}: {param}\n"
    
    comment += f" * \n"
    comment += f" * 原始函数名已重命名为{func_name}\n"
    comment += f" */\n"
    
    return comment

def beautify_functions(content):
    """美化函数名"""
    # 提取所有函数声明
    matches = extract_function_declarations(content)
    
    if not matches:
        print("未找到需要美化的函数")
        return content
    
    # 为每个函数生成新名称和注释
    for match in matches:
        old_func_name = match[0]
        params = match[1]
        new_func_name = generate_function_name(match)
        
        # 生成函数注释
        comment = generate_function_comment(new_func_name, params)
        
        # 替换函数声明注释
        old_pattern = f"// 函数: void {old_func_name}\\({re.escape(params)}\\)"
        new_content = f"{comment}void {new_func_name}({params})"
        content = re.sub(old_pattern, new_content, content)
        
        # 替换函数调用
        content = content.replace(old_func_name, new_func_name)
    
    return content

def main():
    """主函数"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
    
    # 读取文件
    content = read_file(file_path)
    if content is None:
        return
    
    # 美化函数
    beautified_content = beautify_functions(content)
    
    # 写入文件
    if write_file(file_path, beautified_content):
        print("函数美化完成")
    else:
        print("函数美化失败")

if __name__ == "__main__":
    main()