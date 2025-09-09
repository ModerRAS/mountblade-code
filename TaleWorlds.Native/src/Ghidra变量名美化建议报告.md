# Ghidra逆向自动生成变量名美化建议报告

## 📋 搜索概述
**搜索时间**: 2025-09-09  
**搜索目录**: /dev/shm/mountblade-code/TaleWorlds.Native/src  
**搜索模式**: DAT_, local_, s_, UNK_, FUN_, LAB_ 等Ghidra自动生成变量名前缀

## 🔍 搜索结果汇总

### 主要文件中的变量名分布

| 文件名 | DAT_数量 | local_数量 | s_数量 | UNK_数量 | FUN_数量 | LAB_数量 | 总计 |
|--------|----------|-----------|--------|----------|----------|----------|------|
| **02_core_engine.c** | 3,560 | 0 | 675 | 2,343 | 有 | 有 | 6,578+ |
| **03_rendering.c** | 7,178 | 8 | 199 | 7,424 | 有 | 有 | 14,809+ |
| **04_ui_system.c** | 0 | 0 | 75 | 41 | 0 | 0 | 116 |
| **99_unmatched_functions.c** | 9,126 | 56 | 324 | 13,296 | 有 | 有 | 22,802+ |
| **06_utilities.c** | 0 | 0 | 4 | 0 | 0 | 0 | 4 |

### 🎯 最需要美化的文件排名

#### 1. **99_unmatched_functions.c** (优先级: 极高)
- **总计未美化变量**: ~22,802个
- **主要类型**: UNK_ (13,296个), DAT_ (9,126个), s_ (324个), local_ (56个)
- **问题**: 变量数量最多，包含大量系统级未定义变量

#### 2. **03_rendering.c** (优先级: 高)
- **总计未美化变量**: ~14,809个
- **主要类型**: UNK_ (7,424个), DAT_ (7,178个), s_ (199个), local_ (8个)
- **问题**: 渲染系统核心，变量使用频繁，影响代码可读性

#### 3. **02_core_engine.c** (优先级: 高)
- **总计未美化变量**: ~6,578个
- **主要类型**: DAT_ (3,560个), UNK_ (2,343个), s_ (675个)
- **问题**: 核心引擎模块，包含关键系统变量

#### 4. **04_ui_system.c** (优先级: 中)
- **总计未美化变量**: 116个
- **主要类型**: s_ (75个), UNK_ (41个)
- **问题**: UI系统变量数量较少，相对容易处理

## 📁 各文件详细分析

### 02_core_engine.c - 核心引擎变量分析

#### 主要变量类型:
1. **DAT_变量**: 3,560个
   - 示例模式: `DAT_180xxxxx` (内存地址数据)
   - 分布: 遍布整个文件，主要用于系统数据访问

2. **UNK_变量**: 2,343个
   - 示例模式: `UNK_180xxxxx` (未知类型数据)
   - 分布: 系统状态和配置相关

3. **s_变量**: 675个
   - 示例模式: `s_DirectX11Device_180a05xxx` (系统变量)
   - 分布: 系统设备和上下文管理

#### 美化建议:
- DAT_ → 系统数据变量 (SystemDataXxx)
- UNK_ → 系统状态变量 (SystemStatusXxx)
- s_ → 静态系统变量 (StaticSystemXxx)

### 03_rendering.c - 渲染系统变量分析

#### 主要变量类型:
1. **UNK_变量**: 7,424个
   - 示例模式: `UNK_180a06058` (渲染未知参数)
   - 分布: 渲染材质、着色器、缓冲区管理

2. **DAT_变量**: 7,178个
   - 示例模式: `DAT_180xxxxx` (渲染数据)
   - 分布: 渲染数据访问和缓存

3. **s_变量**: 199个
   - 示例模式: `s_RenderContext_180a06xxx` (渲染上下文)
   - 分布: 渲染设备和管线状态

4. **local_变量**: 8个
   - 示例模式: `local_60`, `local_70` (局部变量)
   - 分布: 渲染函数内部临时变量

#### 美化建议:
- UNK_ → 渲染参数变量 (RenderParamXxx)
- DAT_ → 渲染数据变量 (RenderDataXxx)
- s_ → 渲染系统变量 (RenderSystemXxx)
- local_ → 渲染局部变量 (RenderLocalXxx)

### 99_unmatched_functions.c - 未匹配函数变量分析

#### 主要变量类型:
1. **UNK_变量**: 13,296个
   - 示例模式: `UNK_180xxxxx` (系统未知变量)
   - 分布: 系统底层处理函数

2. **DAT_变量**: 9,126个
   - 示例模式: `DAT_180xxxxx` (系统数据)
   - 分布: 系统数据访问和操作

3. **s_变量**: 324个
   - 示例模式: `s_SystemXxx_180xxxxx` (系统变量)
   - 分布: 系统状态管理

4. **local_变量**: 56个
   - 示例模式: `local_60`, `local_70` (局部变量)
   - 分布: 函数内部栈变量

#### 美化建议:
- UNK_ → 系统处理变量 (SystemProcessXxx)
- DAT_ → 系统数据变量 (SystemDataXxx)
- s_ → 系统状态变量 (SystemStateXxx)
- local_ → 系统局部变量 (SystemLocalXxx)

### 04_ui_system.c - UI系统变量分析

#### 主要变量类型:
1. **s_变量**: 75个
   - 示例模式: `s_UiElement_180xxxxx` (UI元素)
   - 分布: UI元素和控件管理

2. **UNK_变量**: 41个
   - 示例模式: `UNK_180xxxxx` (UI未知参数)
   - 分布: UI状态和配置

#### 美化建议:
- s_ → UI元素变量 (UIElementXxx)
- UNK_ → UI状态变量 (UIStatusXxx)

## 🎯 美化策略建议

### 第一阶段：高优先级文件 (预计2-3周)
1. **99_unmatched_functions.c**
   - 优先处理UNK_和DAT_变量
   - 按功能模块分组处理
   - 建立系统变量命名规范

2. **03_rendering.c**
   - 优先处理渲染相关的UNK_和DAT_变量
   - 按渲染管线、材质、缓冲区等模块分组
   - 建立渲染变量命名规范

### 第二阶段：核心文件 (预计1-2周)
3. **02_core_engine.c**
   - 优先处理系统数据访问变量
   - 按系统上下文、内存管理等模块分组
   - 建立核心系统变量命名规范

### 第三阶段：剩余文件 (预计1周)
4. **04_ui_system.c**
   - 处理UI系统变量
   - 按UI元素、状态管理等模块分组

## 📊 美化进度跟踪

### 当前状态:
- **已完成**: 部分变量名已通过宏定义语义化
- **待完成**: 约44,189个变量需要语义化处理

### 美化工具推荐:
1. **批量替换脚本**: 使用现有的beautify_*.sh脚本
2. **变量分类处理**: 按变量类型和用途分组处理
3. **语义化映射**: 建立变量名到语义名称的映射表

## 🚀 下一步行动

1. **立即行动**: 开始处理99_unmatched_functions.c中的UNK_变量
2. **建立规范**: 制定统一的变量命名规范
3. **批量处理**: 使用现有脚本进行批量替换
4. **验证测试**: 每个阶段完成后进行功能验证

## 🔧 简化实现说明

**注意**：由于变量数量庞大，建议采用以下简化策略：

1. **批量替换脚本**：使用sed命令进行批量替换
2. **渐进式处理**：分阶段处理，每阶段验证结果
3. **自动化工具**：开发专门的变量美化工具
4. **备份机制**：每次处理前创建备份，确保可回滚

## 📋 具体实施步骤

### 步骤1: 准备工作
```bash
# 创建备份
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c.backup

# 创建变量映射表
cat > variable_mapping.txt << EOF
UNK_180a06058=RenderParamTextureBinding
UNK_180a060c0=RenderParamShaderUniform
DAT_180a00320=SystemDataTableEntry
DAT_180c8aa08=SystemConfigData
EOF
```

### 步骤2: 批量替换脚本
```bash
#!/bin/bash
# beautify_99_unmatched_functions.sh

# 处理UNK_变量
sed -i 's/UNK_180a06058/RenderParamTextureBinding/g' 99_unmatched_functions.c
sed -i 's/UNK_180a060c0/RenderParamShaderUniform/g' 99_unmatched_functions.c
# 继续添加更多替换规则...

# 处理DAT_变量
sed -i 's/DAT_180a00320/SystemDataTableEntry/g' 99_unmatched_functions.c
sed -i 's/DAT_180c8aa08/SystemConfigData/g' 99_unmatched_functions.c
# 继续添加更多替换规则...

# 处理s_变量
sed -i 's/s_DirectX11Device_180a05xxx/StaticDirectX11Device/g' 99_unmatched_functions.c
# 继续添加更多替换规则...
```

### 步骤3: 验证和测试
```bash
# 验证替换结果
grep -c "UNK_[0-9a-fA-F]" 99_unmatched_functions.c
grep -c "DAT_[0-9a-fA-F]" 99_unmatched_functions.c
grep -c "s_[a-zA-Z0-9_]" 99_unmatched_functions.c
```

---

*报告生成时间: 2025-09-09*
*总计未美化变量: 约44,189个*
*预计完成时间: 4-6周*