#!/bin/bash

# 渲染系统函数美化脚本
# 用于批量替换03_rendering.c文件中的FUN_函数调用

echo "开始处理渲染系统函数美化..."

# 定义函数替换映射
declare -A function_map

# 材质属性处理函数
function_map["FUN_180628ca0"]="ProcessRenderMaterialPropertyArray"
function_map["FUN_18062fb40"]="ConfigureRenderMaterialProperty"
function_map["FUN_180079430"]="ProcessRenderMaterialDataStream"
function_map["FUN_180630010"]="ValidateRenderMaterialProperty"
function_map["FUN_18007f770"]="CleanupRenderMaterialBuffer"
function_map["FUN_180280ad0"]="InitializeRenderMaterialData"
function_map["FUN_180626f80"]="ValidateRenderMaterialProperty"
function_map["FUN_180284830"]="ProcessRenderMaterialNode"
function_map["FUN_180284a50"]="UpdateRenderMaterialState"
function_map["FUN_180284cf0"]="RefreshRenderMaterial"
function_map["FUN_180075030"]="AllocateRenderMaterialProperty"
function_map["FUN_180628040"]="ProcessRenderMemoryBlock"
function_map["FUN_18062b8b0"]="AllocateRenderMemoryEx"
function_map["FUN_180235ca0"]="ProcessRenderDataStructure"
function_map["FUN_18022f410"]="ProcessRenderParameters"
function_map["FUN_18017a600"]="ProcessRenderComponent"
function_map["FUN_180057830"]="ReleaseRenderBuffer"
function_map["FUN_180284fe0"]="ProcessRenderShader"
function_map["FUN_180280fd0"]="ApplyShaderUniforms"
function_map["FUN_180284f90"]="CompileShaderSource"
function_map["FUN_180284500"]="LinkShaderProgram"
function_map["FUN_180275e10"]="ValidateShaderProgram"
function_map["FUN_1802841d0"]="SetShaderAttribute"
function_map["FUN_180284780"]="GetShaderUniformLocation"
function_map["FUN_180285080"]="SetShaderUniformValue"
function_map["FUN_180280600"]="UpdateShaderState"
function_map["FUN_180075ff0"]="FreeRenderMaterialChild"
function_map["FUN_1801940f0"]="ProcessRenderMaterialPropertyStream"
function_map["FUN_1800b32c0"]="InitializeRenderMaterialProperty"
function_map["FUN_1800763c0"]="ProcessRenderMaterialParent"
function_map["FUN_180334930"]="GetRenderMaterialChildIndex"
function_map["FUN_18022cb40"]="ProcessRenderShaderParameters"
function_map["FUN_180240430"]="ApplyRenderMaterialProperty"
function_map["FUN_18022dd60"]="ClearRenderBuffer"
function_map["FUN_1803310f0"]="ProcessRenderDataStream"
function_map["FUN_1803269f0"]="ProcessRenderMaterialData"
function_map["FUN_1803276a0"]="ExtractRenderMaterialData"
function_map["FUN_180339110"]="SetRenderMaterialAttribute"
function_map["FUN_180274db0"]="UpdateRenderMaterialParameters"
function_map["FUN_1803263e0"]="InitializeRenderData"
function_map["FUN_180327250"]="ProcessRenderDataStructure"
function_map["FUN_180281e80"]="ProcessRenderMemoryBlock"
function_map["FUN_180284720"]="ProcessRenderParameters"
function_map["FUN_180284580"]="ProcessRenderComponent"
function_map["FUN_180284de0"]="ProcessRenderShader"
function_map["FUN_180285440"]="ApplyShaderUniforms"
function_map["FUN_180285190"]="CompileShaderSource"
function_map["FUN_180281e80"]="LinkShaderProgram"
function_map["FUN_180285080"]="ValidateShaderProgram"
function_map["FUN_18066c220"]="SetShaderAttribute"
function_map["FUN_180285760"]="GetShaderUniformLocation"
function_map["FUN_18028a2c0"]="SetShaderUniformValue"
function_map["FUN_1800daa50"]="UpdateShaderState"
function_map["FUN_180094b30"]="CleanupShaderResources"
function_map["FUN_18024b8d0"]="InitializeRenderPipeline"
function_map["FUN_18025aec0"]="ConfigureRenderPipeline"
function_map["FUN_18028aaf0"]="ExecuteRenderPipelineStage"
function_map["FUN_18028b4c0"]="UpdateRenderPipelineState"
function_map["FUN_18028b820"]="ValidateRenderPipeline"
function_map["FUN_18028b2f0"]="ResetRenderPipeline"
function_map["FUN_18028b000"]="OptimizeRenderPipeline"
function_map["FUN_18028b630"]="FlushRenderPipeline"
function_map["FUN_18028c3e0"]="SynchronizeRenderPipeline"
function_map["FUN_18028e390"]="DestroyRenderPipeline"
function_map["FUN_180059ba0"]="SetRenderBlendMode"
function_map["FUN_18028c2f0"]="SetRenderDepthTest"
function_map["FUN_18028d0b0"]="SetRenderStencilTest"
function_map["FUN_18028d680"]="SetRenderCullMode"
function_map["FUN_18028d290"]="SetRenderFillMode"
function_map["FUN_18028d400"]="CreateRenderBuffer"
function_map["FUN_18028d4a0"]="BindRenderBuffer"
function_map["FUN_18028c2f0"]="UpdateRenderBuffer"
function_map["FUN_18028d0b0"]="ReadRenderBuffer"
function_map["FUN_18028d680"]="WriteRenderBuffer"
function_map["FUN_18028d290"]="DeleteRenderBuffer"
function_map["FUN_18028d400"]="ValidateRenderBuffer"
function_map["FUN_18028d4a0"]="OptimizeRenderBuffer"
function_map["FUN_18028c2f0"]="SynchronizeRenderBuffer"
function_map["FUN_18028d0b0"]="MapRenderBuffer"
function_map["FUN_18028d680"]="UnmapRenderBuffer"

# 创建临时文件
temp_file="/tmp/rendering_functions_temp.c"

# 复制原文件
cp "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c" "$temp_file"

# 执行替换
for func in "${!function_map[@]}"; do
    new_name="${function_map[$func]}"
    echo "替换 $func -> $new_name"
    sed -i "s/$func/$new_name/g" "$temp_file"
done

# 替换回原文件
cp "$temp_file" "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 清理临时文件
rm -f "$temp_file"

echo "渲染系统函数美化完成！"