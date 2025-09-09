# Ghidra逆向自动生成变量名统计

## 📋 总览
**总计约112,866个Ghidra自动生成的变量名需要语义化处理**

### 🔍 各类型变量名分布（实际统计）

| 变量名前缀 | 当前数量 | 主要分布文件 | 示例 |
|-----------|----------|-------------|------|
| **DAT_** | 80,662个 | 02_core_engine.c, 03_rendering.c, 06_utilities.c | `DAT_180xxxxx` |
| **local_** | 11,074个 | 03_rendering.c, 04_ui_system.c | `local_60`, `local_70`, `local_80` |
| **s_** | 8,873个 | 03_rendering.c, 04_ui_system.c | `s_DirectX11Device_180a05xxx`, `s_RenderContext_180a06xxx` |
| **UNK_** | 7,467个 | 03_rendering.c | `UNK_180a06058`, `UNK_180a060c0` |
| **FUN_** | 349个 | 99_unmatched_functions.c | `FUN_18008fbc0()`, `FUN_18008fa70()` |
| **LABEL_** | 330个 | 99_unmatched_functions.c | `LAB_18008e7c0`, `LAB_18008e7d0` |

### 📁 文件分布详情（实际统计）

#### 1. **03_rendering.c** - 渲染系统变量 (32,242个)
- DAT_: 24,568个
- local_: 7,467个
- s_: 199个
- UNK_: 8个
- FUN_: 0个

#### 2. **02_core_engine.c** - 核心引擎变量 (60,042个)
- DAT_: 59,670个
- s_: 75个
- UNK_: 297个

#### 3. **06_utilities.c** - 工具函数变量 (2,094个)
- DAT_: 2,090个
- UNK_: 4个

#### 4. **04_ui_system.c** - UI系统变量 (22,681个)
- local_: 19,631个
- s_: 2,375个
- UNK_: 675个

#### 5. **99_unmatched_functions.c** - 未匹配函数变量 (62,878个)
- local_: 49,205个
- FUN_: 11个
- LABEL_: 330个
- s_: 13,324个
- UNK_: 8个

### 🔧 变量名特点

- **地址编码**: 大部分变量名包含内存地址（如18008fbc0）
- **类型前缀**: FUN_函数、LABEL_标签、UNK_未知、DAT_数据等
- **数字后缀**: iVar1, iVar2, local_60, local_70等
- **系统相关**: s_前缀表示静态/系统变量

### 📈 处理优先级建议（基于实际统计）

1. **高优先级**: 03_rendering.c (32,242个), 02_core_engine.c (60,042个)
2. **中优先级**: 99_unmatched_functions.c (62,878个), 04_ui_system.c (22,681个)
3. **低优先级**: 06_utilities.c (2,094个)

### ✅ 已完成类型
- **Unwind_**: 100%完成（未发现）
- **iVar**: 100%完成（未发现）

### 🎯 美化目标

将所有Ghidra自动生成的变量名替换为具有语义的名称，遵循以下规则：
- 使用PascalCase命名
- 基于函数功能和变量用途重命名
- 保持代码逻辑不变
- 优先处理高频出现的变量名模式

---
*最后更新: 2025-09-09*
*统计基于当前代码库状态，总计112,866个未美化变量名*