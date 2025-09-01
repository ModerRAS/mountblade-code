# 清理重复函数声明脚本使用说明

## 脚本功能

这个脚本用于处理 `/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c` 文件中的重复函数声明问题。

## 原实现问题

- 文件中存在重复的函数声明，例如：
  - `void InitializeMemoryTracking(void);`
  - `void ConfigureMemoryProtection(void);`
  - `void InitializeMemoryCache(void);`
- 这些重复声明会导致编译警告和潜在问题

## 简化实现

- 读取整个文件，识别所有函数声明
- 使用字典跟踪已声明的函数
- 保留第一次出现的声明，删除后续重复声明
- 确保函数声明格式统一

## 使用方法

1. 进入脚本所在目录：
   ```bash
   cd /dev/shm/mountblade-code/TaleWorlds.Native/src/
   ```

2. 运行脚本：
   ```bash
   python3 clean_duplicate_functions.py
   ```

3. 脚本会：
   - 读取 `06_utilities.c` 文件
   - 检测所有函数声明
   - 识别重复的函数声明
   - 创建备份文件 `06_utilities.c.backup`
   - 生成清理后的文件 `06_utilities_cleaned.c`

## 输出文件

- `06_utilities.c.backup`: 原始文件的备份
- `06_utilities_cleaned.c`: 清理重复声明后的文件

## 脚本特点

- 自动检测C语言函数声明
- 保留第一次出现的函数声明
- 删除后续重复的声明
- 创建备份以确保安全
- 提供详细的处理日志

## 注意事项

- 脚本专门为 `06_utilities.c` 文件设计
- 会自动创建备份文件
- 建议在运行前确认文件内容
- 如果出现问题，可以使用备份文件恢复

## 相关文件

- `clean_duplicate_functions.py`: 主要的清理脚本
- `test_clean_functions.py`: 测试脚本（用于验证功能）
- `simple_clean_functions.py`: 简化版本的脚本