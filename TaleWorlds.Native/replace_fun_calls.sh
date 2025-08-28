#!/bin/bash

# FUN_函数替换脚本
# 用于替换pretty/03_rendering_part152.c文件中的FUN_函数调用为语义化别名

FILE_PATH="pretty/03_rendering_part152.c"

echo "开始替换FUN_函数调用..."

# 替换所有FUN_函数调用为对应的语义化别名
sed -i 's/FUN_18035ec60/RenderingSystem_AdvancedDataProcessorAndOptimizer/g' "$FILE_PATH"
sed -i 's/FUN_18035fff0/RenderingSystem_ConfigurationManager/g' "$FILE_PATH"
sed -i 's/FUN_1802a11e0/RenderingSystem_DataSampler/g' "$FILE_PATH"
sed -i 's/FUN_18062b420/RenderingSystem_MemoryPoolAllocator/g' "$FILE_PATH"
sed -i 's/FUN_18064e900/RenderingSystem_MemoryCleaner/g' "$FILE_PATH"
sed -i 's/FUN_1802e9fa0/RenderingSystem_TextureManager/g' "$FILE_PATH"
sed -i 's/FUN_18046a8c0/RenderingSystem_RenderPipelineInitializer/g' "$FILE_PATH"
sed -i 's/FUN_18062b1e0/RenderingSystem_MemoryAllocator/g' "$FILE_PATH"
sed -i 's/FUN_180275090/RenderingSystem_ResourceManager/g' "$FILE_PATH"
sed -i 's/FUN_1802edcd0/RenderingSystem_RenderQueueManager/g' "$FILE_PATH"
sed -i 's/FUN_180075030/RenderingSystem_BufferManager/g' "$FILE_PATH"
sed -i 's/FUN_1800b30d0/RenderingSystem_ResourceStateManager/g' "$FILE_PATH"
sed -i 's/FUN_180076910/RenderingSystem_DataProcessor/g' "$FILE_PATH"
sed -i 's/FUN_18022f2e0/RenderingSystem_DataManager/g' "$FILE_PATH"
sed -i 's/FUN_1803a5130/RenderingSystem_CoordinateTransformer/g' "$FILE_PATH"
sed -i 's/FUN_180235000/RenderingSystem_GeometryProcessor/g' "$FILE_PATH"
sed -i 's/FUN_1802350e0/RenderingSystem_GeometryOptimizer/g' "$FILE_PATH"
sed -i 's/FUN_180235410/RenderingSystem_GeometryRenderer/g' "$FILE_PATH"
sed -i 's/FUN_180234880/RenderingSystem_StateManager/g' "$FILE_PATH"
sed -i 's/FUN_18040fa30/RenderingSystem_DataFlowProcessor/g' "$FILE_PATH"
sed -i 's/FUN_1800623b0/RenderingSystem_MessageProcessor/g' "$FILE_PATH"
sed -i 's/FUN_180075b70/RenderingSystem_ErrorHandler/g' "$FILE_PATH"
sed -i 's/FUN_18007f6a0/RenderingSystem_ResourceCleaner/g' "$FILE_PATH"
sed -i 's/FUN_180079520/RenderingSystem_StateCleaner/g' "$FILE_PATH"
sed -i 's/FUN_180275cf0/RenderingSystem_ResourceReleaser/g' "$FILE_PATH"
sed -i 's/FUN_180276f30/RenderingSystem_ResourceAllocator/g' "$FILE_PATH"
sed -i 's/FUN_18007c860/RenderingSystem_ResourceInitializer/g' "$FILE_PATH"
sed -i 's/FUN_18022f390/RenderingSystem_DataManager2/g' "$FILE_PATH"
sed -i 's/FUN_1800b8300/RenderingSystem_StringProcessor/g' "$FILE_PATH"
sed -i 's/FUN_180180730/RenderingSystem_ArrayManager/g' "$FILE_PATH"
sed -i 's/FUN_1808fc050/RenderingSystem_SecurityChecker/g' "$FILE_PATH"

echo "替换完成！"

# 验证替换结果
echo "验证替换结果..."
REMAINING_FUNS=$(grep -c "FUN_180[a-f0-9]" "$FILE_PATH")
echo "剩余的FUN_函数调用数量: $REMAINING_FUNS"

if [ "$REMAINING_FUNS" -eq 0 ]; then
    echo "所有FUN_函数调用已成功替换！"
else
    echo "仍有 $REMAINING_FUNS 个FUN_函数调用需要处理"
    echo "剩余的FUN_函数："
    grep -o "FUN_180[a-f0-9]*" "$FILE_PATH" | sort | uniq
fi