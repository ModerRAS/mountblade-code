# Mount & Blade: Unwind_ 函数批量重命名解决方案

## 概述

这个解决方案用于批量重命名 `/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c` 文件中的所有 Unwind_ 函数（约2831个），将它们重命名为语义化的名称，并美化代码。

## 文件说明

### 主要脚本

1. **smart_beautify_unwind.sh** - 主要的智能批量重命名脚本
   - 自动分析所有 Unwind_ 函数
   - 根据函数地址进行智能分类
   - 批量重命名函数
   - 美化变量名
   - 添加文档注释

2. **beautify_unwind_functions.sh** - 预定义重命名规则的脚本
   - 使用预定义的函数映射表
   - 适用于已知函数的重命名

3. **analyze_unwind_functions.sh** - 函数分析脚本
   - 分析 Unwind_ 函数的实际地址范围
   - 生成详细的函数分析报告

4. **verify_unwind_rename.sh** - 验证脚本（由主脚本自动生成）
   - 验证重命名结果
   - 统计处理进度

## 使用方法

### 1. 智能重命名（推荐）

```bash
cd /dev/shm/mountblade-code/TaleWorlds.Native/src/
chmod +x smart_beautify_unwind.sh
./smart_beautify_unwind.sh
```

### 2. 分析函数（可选）

```bash
./analyze_unwind_functions.sh
# 查看分析结果
cat unwind_analysis.txt
```

### 3. 验证结果

```bash
./verify_unwind_rename.sh
```

## 重命名规则

### 函数分类规则

脚本根据函数地址进行智能分类：

- **1809020f0-180902100**: 临界区锁相关函数
- **180902110-180902260**: 异常处理清理函数
- **1809022xxx**: 异常清理函数
- **1809023xxx**: 资源清理函数
- **1809024xxx**: 内存清理函数
- **1809025xxx**: 线程清理函数
- **1809026xxx**: 文件句柄清理函数
- **1809027xxx**: 网络清理函数
- **1809028xxx**: 数据库清理函数
- **1809029xxx**: 系统资源清理函数
- **180902axxx**: 通用清理函数
- **180902bxxx**: 异常处理器清理函数
- **180902cxxx**: 栈清理函数
- **180902dxxx**: 堆清理函数
- **180902exxx**: 线程局部存储清理函数
- **180902fxxx**: 互斥锁清理函数

### 变量重命名规则

- `param_1` → `exceptionCode`
- `param_2` → `exceptionContext`
- `param_3` → `exceptionFlags`
- `param_4` → `exceptionData`
- `bVar1` → `cleanupFlag`
- `bVar2` → `resourceState`
- `iVar1` → `cleanupResult`
- `iVar2` → `resourceCount`
- `lVar1` → `cleanupAddress`
- `pcVar1` → `cleanupFunction`

### 示例重命名

```c
// 原始代码
void Unwind_1809020f0(void) {
    byte bVar1;
    EnterCriticalSection(0x180c82210);
    CriticalSectionLock = 0;
    LeaveCriticalSection(0x180c82210);
    // ...
}

// 重命名后
/**
 * @brief 临界区锁清理函数
 * 
 * 该函数负责清理和释放临界区锁资源
 * 确保多线程环境下的资源安全释放
 * 
 * @return 无返回值
 */
void ReleaseCriticalSectionLock(void) {
    byte cleanupFlag;
    EnterCriticalSection(0x180c82210);
    CriticalSectionLock = 0;
    LeaveCriticalSection(0x180c82210);
    // ...
}
```

## 安全特性

1. **自动备份**: 脚本会自动创建原始文件的备份
2. **映射记录**: 所有重命名操作都会记录在映射文件中
3. **进度显示**: 处理过程中显示进度信息
4. **验证功能**: 提供验证脚本检查重命名结果

## 输出文件

- `06_utilities.c.backup` - 原始文件备份
- `unwind_function_mapping.txt` - 函数重命名映射表
- `unwind_analysis.txt` - 函数分析报告
- `verify_unwind_rename.sh` - 验证脚本

## 注意事项

1. **执行前备份**: 确保重要文件已备份
2. **测试环境**: 建议先在测试环境中运行
3. **性能考虑**: 处理2831个函数可能需要一些时间
4. **内存使用**: 大文件处理可能占用较多内存

## 恢复方法

如果需要恢复原始文件：

```bash
cp 06_utilities.c.backup 06_utilities.c
```

## 故障排除

1. **权限问题**: 确保脚本有执行权限
2. **磁盘空间**: 确保有足够的磁盘空间进行文件操作
3. **文件锁定**: 确保文件没有被其他进程锁定

## 技术细节

- 使用 `sed` 进行文本替换
- 使用 `grep` 进行函数搜索
- 使用 `sort` 进行函数排序
- 使用 `declare -A` 进行关联数组操作
- 支持正则表达式匹配和替换

这个解决方案可以安全、高效地处理大量的 Unwind_ 函数重命名任务，同时保持代码的可读性和维护性。