# 02_core_engine.c 变量名美化映射表

## 结构体字段映射

### 64位联合体字段（_X_Y_ 格式）
- `_4_4_` → `HighPart`（高位部分）
- `_0_4_` → `LowPart`（低位部分）
- `_1_7_` → `FullPart`（完整部分）
- `_8_8_` → `High64Part`（高64位部分）
- `_0_8_` → `Low64Part`（低64位部分）
- `_12_4_` → `High32Part`（高32位部分）

### 示例用法
```c
// 原始代码
FinalConfigData = CONCAT44(FinalConfigData._4_4_,ValidationResult);

// 美化后
FinalConfigData = CONCAT44(FinalConfigData.HighPart,ValidationResult);
```

## 局部变量映射

### 栈变量（uStack_X 格式）
- `uStack_50` → `StackVariable50`
- `uStack_70` → `StackVariable70`
- `uStack_198` → `StackVariable198`
- `uStack_140` → `StackVariable140`
- `uStack_1b8` → `StackVariable1B8`
- `uStack_380` → `StackVariable380`
- `uStack_268` → `StackVariable268`
- `uStack_318` → `StackVariable318`
- `uStack_88` → `StackVariable88`
- `uStack_2c8` → `StackVariable2C8`

### 指针变量（pUnsigned 格式）
- `pUnsignedVariable4` → `PointerVariable4`
- `pUnsignedValue` → `PointerValue`
- `puStack_168` → `PointerStack168`
- `puStack_148` → `PointerStack148`
- `puStack_3f8` → `PointerStack3F8`
- `puStack_5b8` → `PointerStack5B8`

### 浮点变量（FloatVariable 格式）
- `FloatVariable46` → `FloatValue46`
- `FloatVariable1` → `FloatValue1`
- `FloatVariable5` → `FloatValue5`
- `FloatVariable12` → `FloatValue12`
- `FloatVariable15` → `FloatValue15`
- `FloatVariable18` → `FloatValue18`

### 系统变量（SystemVariable 格式）
- `SystemVariable7` → `SystemValue7`
- `SystemVariable9` → `SystemValue9`
- `SystemLongVariable12` → `SystemLongValue12`

### 缓冲区变量（Buffer 格式）
- `DataBuffer0` → `DataBuffer0`（保持不变，已有意义）
- `DataBuffer5` → `DataBuffer5`（保持不变）
- `DataBuffer6` → `DataBuffer6`（保持不变）
- `DataBuffer9` → `DataBuffer9`（保持不变）

### 临时变量（Temp 格式）
- `TempBufferA` → `TempBufferA`（保持不变）
- `TempBufferB` → `TempBufferB`（保持不变）

### 其他变量
- `UnsignedVariable2` → `UnsignedValue2`
- `UnsignedVariable3` → `UnsignedValue3`
- `UnsignedVariable4` → `UnsignedValue4`
- `UnsignedValue` → `UnsignedValue`（保持不变）
- `UnsignedVariable26` → `UnsignedValue26`
- `ReturnValue6` → `ReturnData6`
- `comparisonResult3` → `ComparisonResult3`
- `uVar6` → `UnsignedVar6`
- `uStackX_8` → `StackVariableX8`

## 函数调用映射

### 已知函数映射
- `FUN_180057110` → `CoreEngineInitializeResourceHandler`
- `FUN_180057cb0` → `CoreEngineInitializeSystemResourcesReturnPointer`
- `FUN_180058710` → `CoreEngineProcessSystemResource`
- `FUN_180058b3e` → `CoreEngineAllocateAndCopyMemoryBuffer`
- `FUN_1800590b0` → `CoreEngineAllocateSystemMemoryBlock`
- `FUN_18005d580` → `CoreEngineProcessSystemOperation`
- `FUN_1800649d0` → `CoreEngineProcessSystemTask`
- `FUN_1800671b0` → `CoreEngineReallocateTargetDataStructure`

### 待确定函数映射
- `FUN_18005e570` → 需要分析上下文
- `FUN_18005d580` → 需要分析上下文
- `FUN_1801762b0` → 需要分析上下文
- `FUN_18004b730` → 需要分析上下文
- `FUN_1808fc8a8` → 需要分析上下文

## 数据类型映射

### 联合体类型
- `aUnsignedVariable47` → `DataUnion47`
- `auVar8` → `DataUnion8`
- `auStack_150` → `StackUnion150`

### 指针类型
- `piStack_1b0` → `PointerStack1B0`
- `pFloatVariable18` → `PointerFloat18`
- `pMemoryBlockPointer9` → `PointerMemoryBlock9`

## 实施优先级

### 高优先级（立即处理）
1. `_4_4_` → `HighPart`（影响约200处）
2. `_0_4_` → `LowPart`（影响约50处）
3. `uStack_` → `StackVariable`（影响约100处）

### 中优先级（第二阶段）
1. `pUnsigned` → `PointerVariable`（影响约50处）
2. `FloatVariable` → `FloatValue`（影响约30处）
3. `SystemVariable` → `SystemValue`（影响约20处）

### 低优先级（第三阶段）
1. 剩余的函数调用重命名
2. 联合体重命名
3. 最终清理和验证

## 实施策略

### 第一阶段：结构体字段重命名
1. 使用全局替换 `_4_4_` → `HighPart`
2. 使用全局替换 `_0_4_` → `LowPart`
3. 使用全局替换 `_1_7_` → `FullPart`

### 第二阶段：局部变量重命名
1. 逐个替换 `uStack_` 变量
2. 逐个替换 `pUnsigned` 变量
3. 逐个替换 `FloatVariable` 变量

### 第三阶段：函数调用重命名
1. 分析每个函数调用的上下文
2. 根据功能重命名函数
3. 更新所有调用点

## 注意事项

1. **保持功能不变**：所有重命名都不能改变代码逻辑
2. **避免冲突**：确保新名称不会与现有变量冲突
3. **一致性**：使用统一的命名规范
4. **验证**：每个阶段完成后进行验证

## 测试策略

1. **编译测试**：确保重命名后代码能正常编译
2. **功能测试**：确保重命名后功能保持不变
3. **回归测试**：确保没有引入新的错误

## 进度跟踪

- [ ] 完成结构体字段重命名
- [ ] 完成局部变量重命名
- [ ] 完成函数调用重命名
- [ ] 完成最终验证和测试
- [ ] 更新文档和映射表