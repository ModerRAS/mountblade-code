import re

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'r', encoding='utf-8') as f:
    content = f.read()

# 函数映射表
function_mappings = {
    'FUN_18069cb40': 'ProcessUIEventData',
    'FUN_18069ca00': 'ProcessUITextureBufferData',
    'FUN_18069cad0': 'ProcessUILayoutData',
    'FUN_18069c900': 'ProcessUIRenderingBufferData',
    'FUN_18069ca80': 'ProcessUIBatchData',
    'FUN_18069c990': 'ProcessUISemaphoreData'
}

# 执行替换
for old_name, new_name in function_mappings.items():
    # 只替换函数调用，不替换函数定义（注释中的）
    # 使用正则表达式确保只替换函数调用
    pattern = r'\b' + re.escape(old_name) + r'\('
    content = re.sub(pattern, new_name + '(', content)

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'w', encoding='utf-8') as f:
    f.write(content)

print("函数调用替换完成")