# Ghidra逆向自动生成变量名统计

## 📋 总览
**总计约328,854个Ghidra自动生成的变量名需要语义化处理**

### 🔍 各类型变量名分布

| 变量名前缀 | 数量 | 主要分布文件 | 示例 |
|-----------|------|-------------|------|
| **FUN_** | 109,726个 | 99_unmatched_functions.c, 04_ui_system.c, 03_rendering.c | `FUN_18008fbc0()`, `FUN_18008fa70()` |
| **s_** | 88,997个 | 04_ui_system.c, 99_unmatched_functions.c, 03_rendering.c | `s_DirectX11Device_180a05xxx`, `s_RenderContext_180a06xxx` |
| **local_** | 69,581个 | 04_ui_system.c, 99_unmatched_functions.c | `local_60`, `local_70`, `local_80` |
| **LABEL_** | 23,416个 | 02_core_engine.c, 04_ui_system.c, 03_rendering.c, 99_unmatched_functions.c | `LAB_18008e7c0`, `LAB_18008e7d0` |
| **Unwind_** | 20,169个 | 04_ui_system.c, 03_rendering.c, 99_unmatched_functions.c | `Unwind_180904730`, `Unwind_180904760` |
| **UNK_** | 9,425个 | 06_utilities.c, 99_unmatched_functions.c | `UNK_180a06058`, `UNK_180a060c0` |
| **iVar** | 7,540个 | 03_rendering.c, 99_unmatched_functions.c, 04_ui_system.c | `iVar1`, `iVar2`, `iVar3` |

### 📁 文件分布详情

#### 1. **99_unmatched_functions.c** - 最多未匹配变量 (49,213个FUN_)
- FUN_: 49,213个
- LABEL_: 10,696个
- UNK_: 8,375个
- 其他: 大量

#### 2. **04_ui_system.c** - UI系统变量 (22,660个FUN_)
- FUN_: 22,660个
- LABEL_: 3,187个
- s_: 44,248个
- local_: 61,380个

#### 3. **03_rendering.c** - 渲染系统变量 (29,521个FUN_)
- FUN_: 29,521个
- LABEL_: 6,947个
- s_: 5,994个
- iVar: 6,473个

#### 4. **02_core_engine.c** - 核心引擎变量 (8,331个FUN_)
- FUN_: 8,331个
- LABEL_: 2,586个
- iVar: 66个

#### 5. **其他文件** - 较少变量
- 00_data_definitions.h: 1个LABEL_
- 01_initialization.c: 9个iVar
- 05_networking.c: 少量
- 06_utilities.c: 1,050个UNK_

### 🔧 变量名特点

- **地址编码**: 大部分变量名包含内存地址（如18008fbc0）
- **类型前缀**: FUN_函数、LABEL_标签、UNK_未知、DAT_数据等
- **数字后缀**: iVar1, iVar2, local_60, local_70等
- **系统相关**: s_前缀表示静态/系统变量

### 📈 处理优先级建议

1. **高优先级**: 99_unmatched_functions.c (最多变量)
2. **中优先级**: 04_ui_system.c, 03_rendering.c (大量UI和渲染变量)
3. **低优先级**: 02_core_engine.c, 06_utilities.c (较少变量)

### 🎯 美化目标

将所有Ghidra自动生成的变量名替换为具有语义的名称，遵循以下规则：
- 使用PascalCase命名
- 基于函数功能和变量用途重命名
- 保持代码逻辑不变
- 优先处理高频出现的变量名模式

---
*最后更新: 2025-09-05*
*统计基于当前代码库状态*