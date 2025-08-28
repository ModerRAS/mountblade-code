# 快速开始指南 - 代码转译任务

## 🚀 5分钟快速上手

### 第一步：选择任务
1. 查看 `task_assignment.md` 了解可用文件
2. 选择一个你感兴趣的模块和文件
3. 在任务表中填写你的名字

### 第二步：准备环境
```bash
# 创建输出目录
mkdir -p pretty/[模块名]/

# 例如，处理初始化模块
mkdir -p pretty/01_initialization/
```

### 第三步：复制文件
```bash
# 复制你选择的文件
cp src/[文件名].c pretty/[模块名]/

# 例如
cp src/01_initialization_part001.c pretty/01_initialization/
```

### 第四步：转译代码
使用你喜欢的编辑器打开文件：
```bash
# 用VS Code打开
code pretty/01_initialization/01_initialization_part001.c

# 或者用vim
vim pretty/01_initialization/01_initialization_part001.c
```

### 第五步：按标准转译
1. **重命名函数**：`FUN_00123456` → `语义化名称`
2. **重命名变量**：`DAT_00123456` → `描述性名称`
3. **重命名常量**：`UNK_00123456` → `有意义名称`
4. **添加注释**：为每个函数添加中文注释

## 📋 转译示例

### 转译前
```c
int FUN_00123456(int param1, int param2) {
    int DAT_00123456 = param1 + param2;
    return DAT_00123456;
}
```

### 转译后
```c
/**
 * @brief 计算两个整数的和
 * 
 * @param param1 第一个整数
 * @param param2 第二个整数
 * @return 两数之和
 */
int calculate_sum(int param1, int param2) {
    int sum_result = param1 + param2;
    return sum_result;
}
```

## 🎯 常见命名建议

### 初始化相关
- `FUN_*` → `initialize_*` (初始化系统)
- `FUN_*` → `setup_*` (设置参数)
- `FUN_*` → `create_*` (创建对象)

### 渲染相关
- `FUN_*` → `render_*` (渲染场景)
- `FUN_*` → `draw_*` (绘制对象)
- `FUN_*` → `display_*` (显示内容)

### 数据处理
- `FUN_*` → `process_*` (处理数据)
- `FUN_*` → `update_*` (更新状态)
- `FUN_*` → `calculate_*` (计算结果)

### 变量命名
- `DAT_*` → `*_status` (状态变量)
- `DAT_*` → `*_count` (计数变量)
- `DAT_*` → `*_position` (位置变量)
- `DAT_*` → `*_context` (上下文变量)

## ✅ 完成检查

完成转译后，请检查：
- [ ] 所有FUN_函数都已重命名
- [ ] 所有DAT_变量都已重命名
- [ ] 所有UNK_常量都已重命名
- [ ] 每个函数都有中文注释
- [ ] 代码格式统一
- [ ] 语法正确

## 📊 更新进度

完成任务后，请在 `task_assignment.md` 中更新：
1. 将状态改为"已完成"
2. 记录完成日期
3. 可选：添加备注

## 🛠️ 实用工具

### 批量创建目录
```bash
# 为所有模块创建目录
for module in 00 01 02 03 04 05 06 99; do
    mkdir -p pretty/$module
done
```

### 检查进度
```bash
# 统计已完成的文件数
find pretty -name "*.c" | wc -l

# 查看某个模块的进度
ls pretty/01_initialization/ | wc -l
```

### 快速备份
```bash
# 备份原始文件
cp src/[文件名].c src/[文件名].c.backup
```

## 🤝 需要帮助？

1. **查看示例**：参考已完成的文件
2. **咨询团队**：在任务表中记录问题
3. **查看模板**：参考转译示例

## 🎉 开始吧！

选择一个文件，开始你的第一个转译任务！

**建议从简单的模块开始**：
- 模块00 (数据定义) - 1个文件
- 模块06 (工具函数) - 2个文件
- 模块05 (网络系统) - 4个文件

---

**祝你工作顺利！** 🚀