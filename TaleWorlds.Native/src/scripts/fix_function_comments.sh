#!/bin/bash

# 批量替换核心引擎文件中的函数注释

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 创建临时脚本文件
cat > /tmp/fix_comments.py << 'EOF'
import re

# 读取文件内容
with open('$FILE_PATH', 'r', encoding='utf-8') as f:
    content = f.read()

# 函数名映射
function_mapping = {
    'FUN_180038450': 'CoreEngineInitializeSystemConfigurationD',
    'FUN_1800391a0': 'CoreEngineInitializeNetworkSystem',
    'FUN_1800393a0': 'CoreEngineInitializeRenderSystem',
    'FUN_1800394a0': 'CoreEngineInitializePhysicsSystem',
    'FUN_1800395a0': 'CoreEngineInitializeAudioSystem',
    'FUN_1800396a0': 'CoreEngineInitializeInputSystem',
    'FUN_1800397a0': 'CoreEngineInitializeFileSystem',
    'FUN_1800398a0': 'CoreEngineInitializeMemorySystem',
    'FUN_1800399a0': 'CoreEngineInitializeThreadSystem',
    'FUN_180039aa0': 'CoreEngineInitializeEventSystem',
    'FUN_180039bb0': 'CoreEngineInitializeTimeSystem',
    'FUN_180039cb0': 'CoreEngineInitializeResourceSystem',
    'FUN_180039db0': 'CoreEngineInitializeSecuritySystem',
    'FUN_180039eb0': 'CoreEngineInitializeDatabaseSystem',
    'FUN_180039fb0': 'CoreEngineInitializeConfigurationSystem',
    'FUN_1800404b0': 'CoreEngineInitializeConsoleSystem',
    'FUN_1800405b0': 'CoreEngineInitializeDebugSystem'
}

# 执行替换
replaced_count = 0
for old_name, new_name in function_mapping.items():
    old_pattern = f'// 函数: void {old_name}\\(void\\)'
    new_pattern = f'// 函数: void {new_name}(void)'
    
    if old_pattern in content:
        content = re.sub(old_pattern, new_pattern, content)
        replaced_count += 1
        print(f"替换: {old_name} -> {new_name}")

# 写回文件
with open('$FILE_PATH', 'w', encoding='utf-8') as f:
    f.write(content)

print(f"处理完成！共替换了 {replaced_count} 个函数注释")
EOF

# 执行Python脚本
python3 /tmp/fix_comments.py

# 删除临时文件
rm /tmp/fix_comments.py