# 清理重复函数声明工具包

## 概述

这个工具包专门用于处理 `/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c` 文件中的重复函数声明问题。

## 问题背景

**原实现问题：**
- 06_utilities.c 文件中存在大量重复的函数声明
- 例如：
  - `void InitializeMemoryTracking(void);`
  - `void ConfigureMemoryProtection(void);`
  - `void InitializeMemoryCache(void);`
- 这些重复声明会导致编译警告和潜在的维护问题

**简化实现方案：**
- 自动扫描文件中的所有函数声明
- 识别重复的函数声明
- 保留第一次出现的声明，删除后续重复项
- 确保函数声明格式统一

## 文件清单

### 核心脚本
- `clean_duplicate_functions_complete.py` - 完整功能的主脚本
- `clean_duplicate_functions.py` - 基础版本脚本
- `test_clean_functions.py` - 功能测试脚本

### 工具文件
- `run_clean_duplicate_functions.sh` - 批处理脚本
- `CLEAN_DUPLICATE_FUNCTIONS_README.md` - 使用说明文档

## 使用方法

### 方法一：使用批处理脚本（推荐）

```bash
cd /dev/shm/mountblade-code/TaleWorlds.Native/src/
chmod +x run_clean_duplicate_functions.sh
./run_clean_duplicate_functions.sh
```

### 方法二：直接运行主脚本

```bash
cd /dev/shm/mountblade-code/TaleWorlds.Native/src/
python3 clean_duplicate_functions_complete.py
```

### 方法三：运行测试

```bash
python3 clean_duplicate_functions_complete.py --test
```

## 输出文件

运行后会在当前目录生成以下文件：

- `06_utilities_cleaned.c` - 清理重复声明后的文件
- `06_utilities.c.backup` - 原始文件的备份

## 脚本功能特性

### 1. 智能检测
- 自动识别C语言函数声明
- 支持各种返回类型（void, int, uint32_t, 指针类型等）
- 正确处理函数参数

### 2. 重复处理
- 精确识别重复的函数声明
- 保留第一次出现的声明
- 删除后续所有重复项

### 3. 安全保障
- 自动创建原始文件备份
- 详细的处理日志
- 错误处理和异常捕获

### 4. 格式标准化
- 统一函数声明格式
- 移除多余的空格
- 确保语法正确性

## 技术实现

### 正则表达式模式
```python
function_pattern = r'^\s*([a-zA-Z_][a-zA-Z0-9_]*\s+[a-zA-Z_][a-zA-Z0-9_]*\s*\([^;]*\)\s*;)'
```

### 处理流程
1. 读取目标文件
2. 使用正则表达式提取所有函数声明
3. 构建函数名到行号的映射
4. 识别重复的函数声明
5. 生成清理后的文件内容
6. 创建备份文件
7. 写入清理后的文件

### 验证机制
- 清理前后函数声明数量对比
- 重复声明检测验证
- 文件完整性检查

## 注意事项

1. **备份机制**：脚本会自动创建备份文件，确保数据安全
2. **文件权限**：确保脚本有读写目标文件的权限
3. **Python版本**：需要Python 3.x环境
4. **文件编码**：使用UTF-8编码处理文件

## 故障排除

### 常见问题

1. **文件不存在**
   ```
   错误: 文件 06_utilities.c 不存在
   ```
   - 确保在正确的目录中运行脚本
   - 检查文件是否存在

2. **权限问题**
   ```
   处理文件时出错: [Errno 13] Permission denied
   ```
   - 检查文件权限
   - 确保有读写权限

3. **Python错误**
   ```
   python3: command not found
   ```
   - 确保安装了Python 3
   - 检查PATH环境变量

### 恢复方法

如果清理结果不理想，可以使用备份文件恢复：
```bash
cp 06_utilities.c.backup 06_utilities.c
```

## 扩展功能

脚本设计支持以下扩展：
- 处理其他C源文件
- 自定义函数声明模式
- 批量处理多个文件
- 集成到构建流程中

## 维护说明

- 脚本代码包含详细的注释
- 模块化设计便于维护
- 测试用例确保功能正确性
- 支持命令行参数配置

---

**注意：** 这是一个专门为处理Mount & Blade代码库中的重复函数声明问题而设计的工具。在使用前，请确保理解其功能和工作原理。