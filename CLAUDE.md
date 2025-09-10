# Ghidra逆向自动生成变量名统计

## 📋 总览
**总计约147,539个Ghidra自动生成的变量名需要语义化处理**

### 🔍 各类型变量名分布（实际统计 - 2025年9月10日更新）

| 变量名前缀 | 当前数量 | 主要分布文件 | 示例 |
|-----------|----------|-------------|------|
| **FUN_** | 102,519个 | 99_unmatched_functions.c, 03_rendering.c, 04_ui_system.c | `FUN_18008fbc0()`, `FUN_18008fa70()` |
| **DAT_** | 20,689个 | 99_unmatched_functions.c, 03_rendering.c, 04_ui_system.c | `DAT_180xxxxx` |
| **UNK_** | 22,945个 | 99_unmatched_functions.c, 03_rendering.c, 04_ui_system.c | `UNK_180a06058`, `UNK_180a060c0` |
| **s_** | 1,277个 | 04_ui_system.c, 99_unmatched_functions.c, 03_rendering.c | `s_DirectX11Device_180a05xxx`, `s_RenderContext_180a06xxx` |
| **local_** | 109个 | 99_unmatched_functions.c, 03_rendering.c | `local_60`, `local_70`, `local_80` |
| **LABEL_** | 0个 | - | - |

### 📁 文件分布详情（实际统计 - 2025年9月10日更新）

#### 1. **99_unmatched_functions.c** - 未匹配函数变量 (73,642个)
- FUN_: 49,770个
- UNK_: 13,172个
- DAT_: 10,295个
- s_: 324个
- local_: 82个

#### 2. **03_rendering.c** - 渲染系统变量 (39,537个)
- FUN_: 25,185个
- UNK_: 7,285个
- DAT_: 6,841个
- s_: 199个
- local_: 27个

#### 3. **04_ui_system.c** - UI系统变量 (25,128个)
- FUN_: 19,481个
- DAT_: 3,553个
- UNK_: 2,419个
- s_: 675个

#### 4. **02_core_engine.c** - 核心引擎变量 (6,257个)
- FUN_: 6,113个
- UNK_: 69个
- s_: 75个

#### 5. **06_utilities.c** - 工具函数变量 (1,973个)
- FUN_: 1,969个
- s_: 4个

#### 6. **01_initialization.c** - 初始化文件变量 (1个)
- FUN_: 1个

### 🔧 变量名特点

- **地址编码**: 大部分变量名包含内存地址（如18008fbc0）
- **类型前缀**: FUN_函数、LABEL_标签、UNK_未知、DAT_数据等
- **数字后缀**: iVar1, iVar2, local_60, local_70等
- **系统相关**: s_前缀表示静态/系统变量

### 📈 处理优先级建议（基于实际统计 - 2025年9月10日更新）

1. **高优先级**: 99_unmatched_functions.c (73,642个), 03_rendering.c (39,537个)
2. **中优先级**: 04_ui_system.c (25,128个), 02_core_engine.c (6,257个)
3. **低优先级**: 06_utilities.c (1,973个), 01_initialization.c (1个)

### ✅ 已完成类型
- **Unwind_**: 100%完成（未发现）
- **iVar**: 100%完成（未发现）
- **LABEL_**: 100%完成（未发现）

### 🎯 美化目标

将所有Ghidra自动生成的变量名替换为具有语义的名称，遵循以下规则：
- 使用PascalCase命名
- 基于函数功能和变量用途重命名
- 保持代码逻辑不变
- 优先处理高频出现的变量名模式

---
*最后更新: 2025-09-10*
*统计基于当前代码库状态，总计147,539个未美化变量名*