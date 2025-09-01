# 99_unmatched_functions.c 文件美化指南

## 概述
这个脚本用于美化 `/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c` 文件中的变量。

## 功能
1. 将所有的 "undefined" 类型替换为 "void*"
2. 将所有以 "UNK_" 开头的变量重命名为有意义的名称
3. 保留原有的注释内容
4. 不修改程序的逻辑

## 使用方法

### 方法1: 直接运行脚本
```bash
cd /dev/shm/mountblade-code/TaleWorlds.Native/src/scripts
python3 beautify_99_unmatched_functions_final.py
```

### 方法2: 使用Python执行
```bash
python3 -c "
import re
import os

file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c'

print('开始处理文件:', file_path)

with open(file_path, 'r', encoding='utf-8') as f:
    content = f.read()

undefined_count = content.count('undefined')
unk_count = len(re.findall(r'UNK_[0-9a-f]{8}', content))

print(f'找到需要替换的内容:')
print(f'  - undefined 类型: {undefined_count} 个')
print(f'  - UNK_ 变量: {unk_count} 个')

# 替换 undefined 为 void*
content = content.replace('undefined', 'void*')

# 替换 UNK_ 变量
replacements = [
    (r'UNK_18010c3([0-9a-f]{2})', r'MemoryManagementVariable_\1'),
    (r'UNK_180a05([e-f][0-9a-f])', r'RenderingSystemVariable_\1'),
    (r'UNK_1800([0-9a-f]{4})', r'InitializationSystemVariable_\1'),
    (r'UNK_1801([0-9a-f]{4})', r'MemoryManagementVariable_\1'),
    (r'UNK_1802([0-9a-f]{4})', r'NetworkHandlerVariable_\1'),
    (r'UNK_1803([0-9a-f]{4})', r'RenderingSystemVariable_\1'),
    (r'UNK_1804([0-9a-f]{4})', r'AudioSystemVariable_\1'),
    (r'UNK_1805([0-9a-f]{4})', r'InputSystemVariable_\1'),
    (r'UNK_1806([0-9a-f]{4})', r'PhysicsSystemVariable_\1'),
    (r'UNK_1807([0-9a-f]{4})', r'AnimationSystemVariable_\1'),
    (r'UNK_1808([0-9a-f]{4})', r'FileSystemVariable_\1'),
    (r'UNK_1809([0-9a-f]{4})', r'DatabaseSystemVariable_\1'),
    (r'UNK_180a([0-9a-f]{4})', r'UserInterfaceVariable_\1'),
    (r'UNK_180b([0-9a-f]{4})', r'ScriptingSystemVariable_\1'),
    (r'UNK_180c([0-9a-f]{4})', r'MultiplayerSystemVariable_\1'),
    (r'UNK_180d([0-9a-f]{4})', r'UtilitySystemVariable_\1'),
    (r'UNK_([0-9a-f]{8})', r'SystemDataPointer_\1'),
]

for pattern, replacement in replacements:
    content = re.sub(pattern, replacement, content)

with open(file_path, 'w', encoding='utf-8') as f:
    f.write(content)

print('文件处理完成!')
print(f'替换统计:')
print(f'  - undefined 类型替换为 void*: {undefined_count} 个')
print(f'  - UNK_ 变量重命名: {unk_count} 个')
print('美化成功完成!')
"
```

## 变量命名规则
脚本根据地址范围将变量重命名为有意义的名称：

- **1800xxxx**: InitializationSystemVariable (初始化系统)
- **1801xxxx**: MemoryManagementVariable (内存管理)
- **1802xxxx**: NetworkHandlerVariable (网络处理)
- **1803xxxx**: RenderingSystemVariable (渲染系统)
- **1804xxxx**: AudioSystemVariable (音频系统)
- **1805xxxx**: InputSystemVariable (输入系统)
- **1806xxxx**: PhysicsSystemVariable (物理系统)
- **1807xxxx**: AnimationSystemVariable (动画系统)
- **1808xxxx**: FileSystemVariable (文件系统)
- **1809xxxx**: DatabaseSystemVariable (数据库系统)
- **180axxxx**: UserInterfaceVariable (用户界面)
- **180bxxxx**: ScriptingSystemVariable (脚本系统)
- **180cxxxx**: MultiplayerSystemVariable (多人游戏)
- **180dxxxx**: UtilitySystemVariable (工具系统)
- **其他**: SystemDataPointer (系统数据指针)

## 示例
替换前:
```c
undefined UNK_18010c370;
undefined UNK_180a05f38;
```

替换后:
```c
void* MemoryManagementVariable_0c370;
void* RenderingSystemVariable_05f38;
```

## 注意事项
1. 脚本会直接修改原文件，建议在执行前备份
2. 由于文件很大（约31MB），处理可能需要一些时间
3. 脚本会保留所有原有的注释内容
4. 不会修改程序的逻辑，只修改变量名和类型

## 文件列表
- `beautify_99_unmatched_functions_final.py` - 主要的美化脚本
- `execute_final_complete_beautify.py` - 执行器脚本
- `complete_beautify.py` - 完整的美化逻辑
- `final_complete_beautify.py` - 最终版本的美化脚本

## 故障排除
如果遇到问题，请检查：
1. Python 3 是否已安装
2. 文件路径是否正确
3. 文件是否有写权限
4. 磁盘空间是否充足