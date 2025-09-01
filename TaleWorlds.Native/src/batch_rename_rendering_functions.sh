#!/bin/bash

# 批量重命名渲染函数脚本
# 为 /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c 文件中的 FUN_ 函数重命名

# 定义函数映射关系
declare -A function_mapping=(
    ["FUN_180441730"]="InitializeRenderRasterizer"
    ["FUN_1804417b0"]="SetupRenderBlendState"
    ["FUN_180441830"]="ConfigureRenderViewport"
    ["FUN_180441890"]="SetupRenderScissorRect"
    ["FUN_1804418e0"]="InitializeRenderTarget"
    ["FUN_180441910"]="ConfigureRenderOutputMerger"
    ["FUN_180441950"]="SetupRenderStreamOutput"
    ["FUN_180441a00"]="ProcessRenderGeometryShader"
    ["FUN_180441c50"]="ConfigureRenderTessellation"
    ["FUN_180441cc0"]="SetupRenderHullShader"
    ["FUN_180441dd0"]="InitializeRenderDomainShader"
    ["FUN_180441e10"]="ConfigureRenderComputeShader"
    ["FUN_180441e50"]="SetupRenderShaderResources"
    ["FUN_180441e90"]="ProcessRenderConstantBuffer"
    ["FUN_180441f60"]="ConfigureRenderSamplerState"
    ["FUN_180441fc0"]="SetupRenderTextureArray"
    ["FUN_180442020"]="InitializeRenderBufferPool"
    ["FUN_1804420c0"]="ConfigureRenderMemoryManager"
    ["FUN_180442180"]="SetupRenderCommandList"
    ["FUN_1804422a0"]="ProcessRenderCommandBuffer"
    ["FUN_180442370"]="InitializeRenderFence"
    ["FUN_180442450"]="ConfigureRenderQuery"
    ["FUN_1804424d0"]="SetupRenderPredicate"
    ["FUN_180442560"]="ProcessRenderCounter"
    ["FUN_180442670"]="ConfigureRenderStatistics"
    ["FUN_180442720"]="InitializeRenderProfiler"
    ["FUN_180442860"]="SetupRenderDebugInfo"
    ["FUN_180442950"]="ConfigureRenderValidation"
    ["FUN_1804429f0"]="ProcessRenderErrorHandling"
    ["FUN_180442b30"]="SetupRenderExceptionHandler"
    ["FUN_180442d10"]="ConfigureRenderLogging"
    ["FUN_180442e00"]="InitializeRenderTracing"
    ["FUN_180443000"]="SetupRenderPerformanceMonitor"
    ["FUN_180443080"]="ConfigureRenderBenchmark"
    ["FUN_1804431c0"]="InitializeRenderAnalytics"
    ["FUN_180443320"]="SetupRenderMetricsCollector"
    ["FUN_180443510"]="ConfigureRenderTelemetry"
    ["FUN_180443630"]="ProcessRenderDiagnostics"
    ["FUN_180443680"]="SetupRenderHealthMonitor"
    ["FUN_180443700"]="InitializeRenderOptimization"
    ["FUN_180443770"]="ConfigureRenderAdaptiveQuality"
    ["FUN_180443820"]="SetupRenderDynamicResolution"
    ["FUN_180443930"]="ProcessRenderUpscaling"
    ["FUN_180443a40"]="ConfigureRenderAntiAliasing"
    ["FUN_180443aa0"]="SetupRenderPostProcessing"
    ["FUN_180443b00"]="InitializeRenderEffects"
    ["FUN_180443b40"]="ConfigureRenderFilters"
    ["FUN_180443b80"]="SetupRenderColorGrading"
    ["FUN_180443d10"]="ProcessRenderToneMapping"
    ["FUN_180443d70"]="ConfigureRenderHDR"
    ["FUN_180443df0"]="SetupRenderColorSpace"
    ["FUN_180443f80"]="InitializeRenderGammaCorrection"
    ["FUN_180443ff0"]="ConfigureRenderDisplayCalibration"
    ["FUN_180444030"]="SetupRenderOutputMapping"
    ["FUN_180444070"]="ProcessRenderColorManagement"
    ["FUN_180444100"]="ConfigureRenderGamutMapping"
    ["FUN_180444200"]="SetupRenderHDRPipeline"
    ["FUN_180444280"]="InitializeRenderSDRPipeline"
    ["FUN_1804442c0"]="ConfigureRenderWideColorGamut"
    ["FUN_1804442e0"]="SetupRenderColorProfile"
    ["FUN_180444370"]="ProcessRenderColorTransform"
    ["FUN_1804443c0"]="ConfigureRenderColorSpaceConversion"
    ["FUN_180444410"]="SetupRenderColorCorrection"
    ["FUN_1804445b0"]="InitializeRenderWhiteBalance"
    ["FUN_180444600"]="ConfigureRenderExposure"
    ["FUN_180444700"]="SetupRenderContrast"
    ["FUN_1804447c0"]="ProcessRenderBrightness"
    ["FUN_1804448a0"]="ConfigureRenderSaturation"
    ["FUN_1804449a0"]="SetupRenderVibrance"
    ["FUN_180444a20"]="InitializeRenderHue"
    ["FUN_180444b70"]="ConfigureRenderColorBalance"
    ["FUN_180444dd0"]="SetupRenderColorGradingLUT"
    ["FUN_180444e90"]="ProcessRenderColorCurves"
    ["FUN_180445060"]="ConfigureRenderColorGradingParameters"
    ["FUN_180445110"]="SetupRenderColorGradingTexture"
    ["FUN_180445180"]="InitializeRenderColorGradingBuffer"
    ["FUN_180445390"]="ConfigureRenderColorGradingShader"
    ["FUN_180445480"]="SetupRenderColorGradingRenderTarget"
    ["FUN_180445570"]="ProcessRenderColorGradingPass"
    ["FUN_180445680"]="ConfigureRenderColorGradingComposite"
    ["FUN_1804457b0"]="SetupRenderColorGradingFinal"
    ["FUN_180445870"]="InitializeRenderColorGradingCache"
    ["FUN_180445970"]="ConfigureRenderColorGradingManager"
    ["FUN_180445a80"]="SetupRenderColorGradingSystem"
    ["FUN_180445cd0"]="ProcessRenderColorGradingUpdate"
    ["FUN_180445dc0"]="ConfigureRenderColorGradingCleanup"
    ["FUN_180445eb0"]="SetupRenderColorGradingReset"
    ["FUN_180445fd0"]="InitializeRenderColorGradingValidation"
    ["FUN_180446010"]="ConfigureRenderColorGradingOptimization"
    ["FUN_180446080"]="SetupRenderColorGradingProfiling"
    ["FUN_1804460c0"]="ProcessRenderColorGradingDebug"
    ["FUN_1804460f0"]="ConfigureRenderColorGradingStatistics"
    ["FUN_180446120"]="SetupRenderColorGradingMetrics"
    ["FUN_180446160"]="InitializeRenderColorGradingAnalytics"
    ["FUN_1804461b0"]="ConfigureRenderColorGradingTelemetry"
    ["FUN_1804462a0"]="SetupRenderColorGradingDiagnostics"
    ["FUN_1804462e0"]="ProcessRenderColorGradingHealthMonitor"
)

# 文件路径
file_path="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 执行替换
for old_name in "${!function_mapping[@]}"; do
    new_name="${function_mapping[$old_name]}"
    echo "正在替换: $old_name -> $new_name"
    
    # 使用 sed 进行替换
    sed -i "s/$old_name/$new_name/g" "$file_path"
    
    # 检查替换是否成功
    if [ $? -eq 0 ]; then
        echo "✓ 成功替换: $old_name -> $new_name"
    else
        echo "✗ 替换失败: $old_name"
    fi
done

echo "批量替换完成！"

# 验证替换结果
echo "验证替换结果..."
for old_name in "${!function_mapping[@]}"; do
    count=$(grep -c "$old_name" "$file_path" 2>/dev/null || echo "0")
    if [ "$count" -gt 0 ]; then
        echo "⚠ 警告: $old_name 仍有 $count 处未替换"
    fi
done

echo "验证完成！"