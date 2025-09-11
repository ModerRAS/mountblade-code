# 简化的函数替换脚本
# 用于替换02_core_engine.c中的FUN_函数调用

# 由于文件较大，我们使用Python脚本来处理
import re

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'r', encoding='utf-8') as f:
    content = f.read()

# 定义函数映射
function_map = {
    'FUN_180218bc0': 'ProcessSystemContextAccess',
    'FUN_180217b00': 'InitializeSystemDataTransfer', 
    'FUN_180219260': 'ExecuteSystemDataTransformation',
    'FUN_180218a80': 'FinalizeSystemDataOperation',
    'FUN_180219020': 'ProcessSystemMemoryAccess',
    'FUN_18021a140': 'RetrieveSystemContextInfo',
    'FUN_1802121b0': 'InitializeSystemModule'
}

# 统计替换次数
replaced_count = 0

# 执行替换
for old_name, new_name in function_map.items():
    # 使用正则表达式匹配函数调用
    pattern = r'\b' + re.escape(old_name) + r'\b'
    if re.search(pattern, content):
        count = len(re.findall(pattern, content))
        content = re.sub(pattern, new_name, content)
        replaced_count += count
        print(f"替换 {old_name} -> {new_name}: {count} 次")

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'w', encoding='utf-8') as f:
    f.write(content)

print(f"总共替换了 {replaced_count} 个函数调用")