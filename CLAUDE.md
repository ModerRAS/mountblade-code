# Ghidra逆向自动生成变量名统计

## 📋 总览
**总计约328,854个Ghidra自动生成的变量名需要语义化处理，已完成约43,241个（13.2%），剩余285,613个**

### 🔍 各类型变量名分布

| 变量名前缀 | 原始数量 | 剩余数量 | 完成度 | 主要分布文件 | 示例 |
|-----------|----------|----------|--------|-------------|------|
| **FUN_** | 109,726个 | 34,596个 | 68.5% | 99_unmatched_functions.c, 04_ui_system.c, 03_rendering.c | `FUN_18008fbc0()`, `FUN_18008fa70()` |
| **s_** | 88,997个 | 88,997个 | 0% | 04_ui_system.c, 99_unmatched_functions.c, 03_rendering.c | `s_DirectX11Device_180a05xxx`, `s_RenderContext_180a06xxx` |
| **local_** | 69,581个 | 73,808个 | -6.1% | 04_ui_system.c, 99_unmatched_functions.c | `local_60`, `local_70`, `local_80` |
| **LABEL_** | 23,416个 | 11,594个 | 50.5% | 02_core_engine.c, 04_ui_system.c, 03_rendering.c, 99_unmatched_functions.c | `LAB_18008e7c0`, `LAB_18008e7d0` |
| **Unwind_** | 20,169个 | 0个 | 100% | 04_ui_system.c, 03_rendering.c, 99_unmatched_functions.c | `Unwind_180904730`, `Unwind_180904760` |
| **UNK_** | 9,425个 | 31,502个 | -234.2% | 06_utilities.c, 99_unmatched_functions.c | `UNK_180a06058`, `UNK_180a060c0` |
| **iVar** | 7,540个 | 0个 | 100% | 03_rendering.c, 99_unmatched_functions.c, 04_ui_system.c | `iVar1`, `iVar2`, `iVar3` |
| **DAT_** | 未统计 | 123,713个 | 新增 | 02_core_engine.c, 06_utilities.c, 04_ui_system.c, 03_rendering.c, 99_unmatched_functions.c | `DAT_180xxxxx` |

### 📁 文件分布详情（更新后）

#### 1. **99_unmatched_functions.c** - 最多未匹配变量 (83,923个剩余)
- FUN_: 20,929个 (原始49,213个)
- UNK_: 14,659个 (原始8,375个)
- local_: 48,335个 (原始未统计)
- LABEL_: 8,417个 (原始10,696个)

#### 2. **04_ui_system.c** - UI系统变量 (29,128个剩余)
- FUN_: 2,965个 (原始22,660个)
- UNK_: 4,179个 (原始未统计)
- local_: 21,984个 (原始61,380个)
- s_: 44,248个 (未处理)

#### 3. **03_rendering.c** - 渲染系统变量 (24,203个剩余)
- FUN_: 8,514个 (原始29,521个)
- UNK_: 12,200个 (原始未统计)
- local_: 3,489个 (原始未统计)
- s_: 5,994个 (未处理)

#### 4. **02_core_engine.c** - 核心引擎变量 (8,357个剩余)
- FUN_: 646个 (原始8,331个)
- DAT_: 7,711个 (新增)
- LABEL_: 未统计

#### 5. **其他文件** - 较少变量
- 06_utilities.c: 4,921个剩余 (FUN_: 1,542个, DAT_: 2,915个, UNK_: 464个)
- 00_data_definitions.h: 1个DAT_
- 01_initialization.c: 未统计
- 05_networking.c: 未统计

### 🔧 变量名特点

- **地址编码**: 大部分变量名包含内存地址（如18008fbc0）
- **类型前缀**: FUN_函数、LABEL_标签、UNK_未知、DAT_数据等
- **数字后缀**: iVar1, iVar2, local_60, local_70等
- **系统相关**: s_前缀表示静态/系统变量

### 📈 处理优先级建议（更新后）

1. **高优先级**: 99_unmatched_functions.c (83,923个剩余)
2. **中优先级**: 04_ui_system.c (29,128个剩余), 03_rendering.c (24,203个剩余)
3. **低优先级**: 02_core_engine.c (8,357个剩余), 06_utilities.c (4,921个剩余)

### ✅ 已完成类型
- **Unwind_**: 100%完成
- **iVar**: 100%完成

### 🎯 美化目标

将所有Ghidra自动生成的变量名替换为具有语义的名称，遵循以下规则：
- 使用PascalCase命名
- 基于函数功能和变量用途重命名
- 保持代码逻辑不变
- 优先处理高频出现的变量名模式

---
*最后更新: 2025-09-07*
*统计基于当前代码库状态，剩余285,613个未美化变量名*