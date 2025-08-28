# TaleWorlds.Native 代码转译项目

## 📋 项目简介

这是一个代码转译项目，目标是将TaleWorlds.Native的反编译代码转换为可读版本。

- **总文件数**: 3,266个C文件
- **输出目录**: `pretty/`
- **工作方式**: 按文件分配，并行处理

## 🚀 快速开始

### 1. 查看可用文件
```bash
./docs/workflow/process.sh -l
```

### 2. 选择并处理文件
```bash
# 处理指定文件
./docs/workflow/process.sh 01_initialization_part001.c

# 查看进度
./docs/workflow/process.sh -p
```

### 3. 手动转译
脚本会自动创建目标目录和文件，然后手动转译：
```bash
# 编辑文件
code pretty/01_initialization/01_initialization_part001.c
```

## 📁 文件结构

```
TaleWorlds.Native/
├── src/                          # 原始代码
│   ├── 00_data_definitions.h
│   ├── 01_initialization_*.c
│   ├── 02_core_engine_*.c
│   ├── 03_rendering_*.c
│   ├── 04_ui_system_*.c
│   ├── 05_networking_*.c
│   ├── 06_utilities_*.c
│   └── 99_unmatched_*.c
├── pretty/                        # 转译后的代码（输出）
│   ├── 00/                       # 按模块组织
│   ├── 01/
│   ├── 02/
│   ├── 03/
│   ├── 04/
│   ├── 05/
│   ├── 06/
│   └── 99/
└── docs/workflow/                 # 工作文档
    ├── task_assignment.md         # 任务分配表
    ├── quick_start.md             # 快速开始指南
    └── process.sh                 # 处理脚本
```

## 📝 转译标准

### 函数命名
- `FUN_00123456` → `语义化名称`
- 例如: `FUN_00123456` → `initialize_engine`

### 变量命名
- `DAT_00123456` → `描述性名称`
- 例如: `DAT_00123456` → `player_position`

### 常量命名
- `UNK_00123456` → `有意义名称`
- 例如: `UNK_00123456` → `MAX_PLAYERS`

### 注释要求
- 为每个函数添加中文注释
- 说明参数和返回值
- 解释复杂逻辑

## 📊 任务分配

### 模块统计
| 模块 | 文件数 | 难度 |
|------|--------|------|
| 00 | 1 | 简单 |
| 01 | 64 | 中等 |
| 02 | 268 | 困难 |
| 03 | 735 | 困难 |
| 04 | 51 | 中等 |
| 05 | 4 | 中等 |
| 06 | 2 | 简单 |
| 99 | 5 | 中等 |

### 如何领取任务
1. 查看 `docs/workflow/task_assignment.md`
2. 选择一个未开始的文件
3. 在表中填写你的名字
4. 开始转译

## 🛠️ 工具使用

### 自动化脚本
```bash
# 处理文件
./docs/workflow/process.sh <文件名>

# 列出文件
./docs/workflow/process.sh -l

# 查看进度
./docs/workflow/process.sh -p
```

### 批量创建目录
```bash
# 为所有模块创建目录
for module in 00 01 02 03 04 05 06 99; do
    mkdir -p pretty/$module
done
```

## ✅ 质量检查

完成转译后，请检查：
- [ ] 所有FUN_函数都已重命名
- [ ] 所有DAT_变量都已重命名
- [ ] 所有UNK_常量都已重命名
- [ ] 每个函数都有中文注释
- [ ] 代码格式统一
- [ ] 语法正确

## 📈 进度跟踪

### 查看总体进度
```bash
./docs/workflow/process.sh -p
```

### 更新任务状态
完成任务后，请在 `docs/workflow/task_assignment.md` 中更新状态。

## 🎯 建议

### 新手推荐
从简单模块开始：
- 模块00 (1个文件)
- 模块06 (2个文件)
- 模块05 (4个文件)

### 工作流程
1. 选择文件 → 2. 运行脚本 → 3. 手动转译 → 4. 质量检查 → 5. 更新进度

## 🤝 协作

### 避免冲突
- 每人处理不同的文件
- 定期同步进度
- 遇到问题及时沟通

### 分享经验
- 记录常见的命名模式
- 分享转译技巧
- 互相检查质量

## 📞 支持

### 查看帮助
```bash
./docs/workflow/process.sh -h
```

### 详细文档
- 任务分配: `docs/workflow/task_assignment.md`
- 快速开始: `docs/workflow/quick_start.md`

---

**开始你的第一个转译任务吧！** 🚀