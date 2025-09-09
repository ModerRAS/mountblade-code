#!/bin/bash

# UI系统代码美化脚本
# 用于处理04_ui_system.c文件中的变量名和函数名

INPUT_FILE="04_ui_system.c"
TEMP_FILE="temp_ui_system.c"

echo "开始美化UI系统文件..."
echo "输入文件: $INPUT_FILE"

# 1. 首先复制原始文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 2. 删除文件头部的中文注释（保留宏定义）
echo "正在删除中文注释..."
sed -i '/^\/\//d' "$TEMP_FILE"

# 3. 处理FUN_函数名 - 按地址段分配语义化名称
echo "正在处理FUN_函数名..."

# UI数据管理相关函数 (180705xxx)
sed -i 's/FUN_180705180/ProcessUIDataWrite/g' "$TEMP_FILE"
sed -i 's/FUN_180705210/InitializeUIContext/g' "$TEMP_FILE"
sed -i 's/FUN_1807054a0/ProcessUIDataRead/g' "$TEMP_FILE"
sed -i 's/FUN_180705530/UpdateUIState/g' "$TEMP_FILE"
sed -i 's/FUN_180705545/ProcessUIBufferOperation/g' "$TEMP_FILE"
sed -i 's/FUN_180705616/ValidateUISystem/g' "$TEMP_FILE"
sed -i 's/FUN_1807056b0/GetUIData/g' "$TEMP_FILE"
sed -i 's/FUN_1807056f0/SetUIData/g' "$TEMP_FILE"
sed -i 's/FUN_180705870/ProcessUIRenderData/g' "$TEMP_FILE"
sed -i 's/FUN_1807058d0/CleanupUIResources/g' "$TEMP_FILE"
sed -i 's/FUN_180705980/ProcessUIComponentData/g' "$TEMP_FILE"

# UI事件处理相关函数 (180706xxx)
sed -i 's/FUN_1807069e0/ProcessUIEvent/g' "$TEMP_FILE"
sed -i 's/FUN_180706b30/ProcessUIEventBuffer/g' "$TEMP_FILE"
sed -i 's/FUN_180706b61/UpdateUIEventState/g' "$TEMP_FILE"
sed -i 's/FUN_180706ba7/InitializeUIEventSystem/g' "$TEMP_FILE"

# UI渲染相关函数 (180707xxx)
sed -i 's/FUN_180707200/ProcessUIRendering/g' "$TEMP_FILE"
sed -i 's/FUN_1807072c0/ProcessUIRenderBuffer/g' "$TEMP_FILE"
sed -i 's/FUN_18070737d/CalculateUIRenderData/g' "$TEMP_FILE"
sed -i 's/FUN_180707457/ProcessUITextureData/g' "$TEMP_FILE"
sed -i 's/FUN_1807074b0/UpdateUITexture/g' "$TEMP_FILE"

# UI动画相关函数 (1807075xx)
sed -i 's/FUN_1807075c0/ProcessUIAnimation/g' "$TEMP_FILE"
sed -i 's/FUN_180707950/UpdateUIAnimationState/g' "$TEMP_FILE"

# UI布局相关函数 (1807079xx)
sed -i 's/FUN_180707988/ProcessUILayout/g' "$TEMP_FILE"
sed -i 's/FUN_1807079df/GetUILayoutData/g' "$TEMP_FILE"

# UI上下文数据传输相关函数 (180786xxx)
sed -i 's/FUN_180786cc3/ProcessUIContextDataTransfer/g' "$TEMP_FILE"
sed -i 's/FUN_180787080/ValidateUIContextTransfer/g' "$TEMP_FILE"
sed -i 's/FUN_1807872c0/ProcessUIContextDataWithMetrics/g' "$TEMP_FILE"

# UI事件数据传输相关函数 (1807edfxxx)
sed -i 's/FUN_1807edf30/ValidateUIEventDataTransfer/g' "$TEMP_FILE"
sed -i 's/FUN_180772cf0/CleanupUIEventResources/g' "$TEMP_FILE"
sed -i 's/FUN_180742250/ReleaseUIContextMemory/g' "$TEMP_FILE"
sed -i 's/FUN_1807ef140/ProcessUIEventValidation/g' "$TEMP_FILE"
sed -i 's/FUN_1807ef110/ProcessUIEventCleanup/g' "$TEMP_FILE"
sed -i 's/FUN_1807eed30/FinalizeUIContextTransfer/g' "$TEMP_FILE"

# 4. 处理栈变量名
echo "正在处理栈变量名..."
sed -i 's/lStack0000000000000040/UIContextStack40/g' "$TEMP_FILE"
sed -i 's/uStack0000000000000090/UIContextDataBuffer90/g' "$TEMP_FILE"
sed -i 's/stackParam00000098/UIStackParam98/g' "$TEMP_FILE"
sed -i 's/lStack00000000000000a8/UIContextDataBufferA8/g' "$TEMP_FILE"

# 5. 处理local_变量名
echo "正在处理local_变量名..."
sed -i 's/local_[0-9]\+/uiLocalVar/g' "$TEMP_FILE"

# 5. 处理UNK_变量名
echo "正在处理UNK_变量名..."
sed -i 's/UNK_180[0-9a-f]\+/uiUnknown/g' "$TEMP_FILE"

# 6. 处理s_静态变量名
echo "正在处理s_静态变量名..."
sed -i 's/s_\(DirectX11Device\|RenderContext\|TextureManager\|FontRenderer\|ShaderManager\|AnimationManager\|LayoutManager\|EventQueue\|ComponentPool\|ResourcePool\)_180[0-9a-f]\+/uiSystem\1/g' "$TEMP_FILE"

# 7. 处理DAT_数据变量名
echo "正在处理DAT_数据变量名..."
sed -i 's/DAT_180[0-9a-f]\+/uiData/g' "$TEMP_FILE"

# 8. 添加函数文档注释
echo "正在添加函数文档注释..."
# 这里可以添加更复杂的逻辑来为不同类型的函数添加注释

# 9. 移动到最终位置
mv "$TEMP_FILE" "$INPUT_FILE"

echo "美化完成！"
echo "已更新文件: $INPUT_FILE"