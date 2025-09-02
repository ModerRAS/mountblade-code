#!/bin/bash

# 批量重命名LAB_标签为有意义的名称
# 用于美化03_rendering.c文件

# 定义一些常见的LAB_标签模式及其对应的有意义名称
declare -A label_mapping

# 内存分配相关标签
label_mapping["LAB_18060064c"]="MemoryAllocationComplete"
label_mapping["LAB_180602653"]="BufferResizeComplete"
label_mapping["LAB_180602a78"]="TextureLoadComplete"
label_mapping["LAB_180602e68"]="ShaderCompileComplete"
label_mapping["LAB_180604674"]="RenderTargetCreateComplete"
label_mapping["LAB_1806047f8"]="DepthStencilSetupComplete"
label_mapping["LAB_1806049c7"]="PipelineStateComplete"
label_mapping["LAB_180604dcc"]="VertexBufferCreateComplete"
label_mapping["LAB_18060526e"]="IndexBufferSetupComplete"
label_mapping["LAB_18060552f"]="ConstantBufferUpdateComplete"

# 循环相关标签
label_mapping["LAB_180606123"]="RenderLoopContinue"
label_mapping["LAB_180607456"]="TextureLoopContinue"
label_mapping["LAB_180608789"]="ShaderLoopContinue"
label_mapping["LAB_180609012"]="BufferLoopContinue"

# 错误处理相关标签
label_mapping["LAB_180610345"]="ErrorHandlingPath"
label_mapping["LAB_180611678"]="ValidationErrorPath"
label_mapping["LAB_180612901"]="MemoryErrorPath"
label_mapping["LAB_180614234"]="ResourceErrorPath"

# 清理相关标签
label_mapping["LAB_180615567"]="CleanupComplete"
label_mapping["LAB_180616890"]="ResourceReleaseComplete"
label_mapping["LAB_180618123"]="MemoryFreeComplete"
label_mapping["LAB_180619456"]="BufferDestroyComplete"

echo "开始重命名LAB_标签..."

# 遍历映射并执行替换
for label in "${!label_mapping[@]}"; do
    new_name="${label_mapping[$label]}"
    echo "替换 $label 为 $new_name"
    
    # 使用sed进行替换
    sed -i "s/${label}:/${new_name}:/g" 03_rendering.c
    sed -i "s/goto ${label}/goto ${new_name}/g" 03_rendering.c
done

echo "LAB_标签重命名完成"