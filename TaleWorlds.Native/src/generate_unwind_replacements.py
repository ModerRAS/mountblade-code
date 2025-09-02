#!/usr/bin/env python3
"""
生成Unwind函数批量替换命令
"""

import re

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'r', encoding='utf-8') as f:
    content = f.read()

# 查找所有Unwind函数定义
pattern = r'void (Unwind_[0-9a-fA-F]{8})\(([^)]*)\)'
matches = re.findall(pattern, content)

print("# Unwind函数批量替换命令")
print("# 请手动执行这些命令来完成美化")
print("")

# 计数器
counters = {
    "resource_cleanup": 0,
    "context_cleanup": 0,
    "flag_cleanup": 0,
    "system_cleanup": 0,
    "generic_cleanup": 0
}

for old_name, params in matches:
    # 跳过已经处理过的函数
    if "Cleanup" in old_name or "System" in old_name:
        continue
    
    # 确定函数类型
    if params.strip() == "void":
        func_type = "system_cleanup"
        desc = "系统清理"
    elif "uint8_t CleanupOption" in params and "uint8_t CleanupFlag" in params:
        func_type = "resource_cleanup"
        desc = "资源清理"
    elif "uint8_t objectContext" in params and "int64_t validationContext" in params:
        func_type = "context_cleanup"
        desc = "上下文清理"
    elif "uint8_t objectContext" in params and "uint *validationContext" in params:
        func_type = "flag_cleanup"
        desc = "标志清理"
    else:
        func_type = "generic_cleanup"
        desc = "通用清理"
    
    # 生成新函数名
    counters[func_type] += 1
    new_name = f"Unwind_{desc}_{counters[func_type]:03d}"
    
    # 生成注释
    comment = f"""/**
 * {desc}函数 - {new_name}
 * 
 * 功能描述：
 * 执行{desc}操作，确保系统资源正确释放。
 * 
 * 参数说明："""
    
    if "objectContext" in params:
        comment += "\n * @param objectContext 对象上下文，标识要清理的对象"
    if "validationContext" in params:
        if "uint *" in params:
            comment += "\n * @param validationContext 验证上下文指针，包含清理所需的验证信息"
        else:
            comment += "\n * @param validationContext 验证上下文，包含清理所需的验证信息"
    if "CleanupOption" in params:
        comment += "\n * @param CleanupOption 清理选项，指定清理的方式和范围"
    if "CleanupFlag" in params:
        comment += "\n * @param CleanupFlag 清理标志，控制清理过程中的具体行为"
    
    if not any(x in params for x in ["objectContext", "validationContext", "CleanupOption", "CleanupFlag"]):
        comment += "\n * 无参数"
    
    comment += """
 * 
 * 返回值：
 * 无返回值
 * 
 * 注意事项：
 * - 确保所有相关资源都被正确释放
 * - 可能会调用系统紧急退出函数
 * - 原函数名：""" + old_name + """
 */
"""
    
    # 生成替换命令
    print(f"# 替换函数: {old_name}")
    print(f"sed -i 's/void {old_name}({params})/{comment}void {new_name}({params})/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c")
    print(f"sed -i 's/{old_name}/{new_name}/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c")
    print("")

print(f"总共需要处理 {len(matches)} 个函数")
print("请手动执行上述命令完成美化")