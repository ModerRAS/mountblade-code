#!/bin/bash

# 批量美化UI系统配置数据表模板变量名的脚本

# 定义替换映射
declare -A replacements=(
    ["UISystemConfigDataTableTemplateE0"]="UISystemConfigDataTableTemplateNetwork"
    ["UISystemConfigDataTableTemplateF0"]="UISystemConfigDataTableTemplateStorage"
    ["UISystemConfigDataTableTemplate00"]="UISystemConfigDataTableTemplateMemory"
    ["UISystemConfigDataTableTemplate10"]="UISystemConfigDataTableTemplateRendering"
    ["UISystemConfigDataTableTemplate50"]="UISystemConfigDataTableTemplatePhysics"
    ["UISystemConfigDataTableTemplate60"]="UISystemConfigDataTableTemplateAI"
    ["UISystemConfigDataTableTemplate80"]="UISystemConfigDataTableTemplateUI"
    ["UISystemConfigDataTableTemplate40"]="UISystemConfigDataTableTemplateEffects"
    ["UISystemConfigDataTableTemplateA0"]="UISystemConfigDataTableTemplateShaders"
    ["UISystemConfigDataTableTemplate510"]="UISystemConfigDataTableTemplateTextures"
    ["UISystemConfigDataTableTemplate3F0"]="UISystemConfigDataTableTemplateFonts"
    ["UISystemConfigDataTableTemplate2F0"]="UISystemConfigDataTableTemplateLayouts"
    ["UISystemConfigDataTableTemplate370"]="UISystemConfigDataTableTemplateControls"
    ["UISystemConfigDataTableTemplate470"]="UISystemConfigDataTableTemplateEvents"
    ["UISystemConfigDataTableTemplate500"]="UISystemConfigDataTableTemplateThreading"
    ["UISystemConfigDataTableTemplate4B0"]="UISystemConfigDataTableTemplateResources"
    ["UISystemConfigDataTableTemplate3B0"]="UISystemConfigDataTableTemplateCache"
    ["UISystemConfigDataTableTemplate430"]="UISystemConfigDataTableTemplateBuffers"
    ["UISystemConfigDataTableTemplate330"]="UISystemConfigDataTableTemplateStreaming"
    ["UISystemConfigDataTableTemplate4F0"]="UISystemConfigDataTableTemplateCompression"
    ["UISystemConfigDataTableTemplate520"]="UISystemConfigDataTableTemplateEncryption"
    ["UISystemConfigDataTableTemplate3D0"]="UISystemConfigDataTableTemplateValidation"
    ["UISystemConfigDataTableTemplate4D0"]="UISystemConfigDataTableTemplateOptimization"
    ["UISystemConfigDataTableTemplate450"]="UISystemConfigDataTableTemplateDebugging"
    ["UISystemConfigDataTableTemplate390"]="UISystemConfigDataTableTemplateProfiling"
    ["UISystemConfigDataTableTemplate310"]="UISystemConfigDataTableTemplateLogging"
    ["UISystemConfigDataTableTemplate490"]="UISystemConfigDataTableTemplateLocalization"
    ["UISystemConfigDataTableTemplate410"]="UISystemConfigDataTableTemplateAccessibility"
    ["UISystemConfigDataTableTemplate350"]="UISystemConfigDataTableTemplatePlatform"
    ["UISystemConfigDataTableTemplate3E0"]="UISystemConfigDataTableTemplateHardware"
    ["UISystemConfigDataTableTemplate400"]="UISystemConfigDataTableTemplateDrivers"
    ["UISystemConfigDataTableTemplate4E0"]="UISystemConfigDataTableTemplateCompatibility"
    ["UISystemConfigDataTableTemplate460"]="UISystemConfigDataTableTemplatePerformance"
    ["UISystemConfigDataTableTemplate380"]="UISystemConfigDataTableTemplateQuality"
    ["UISystemConfigDataTableTemplate360"]="UISystemConfigDataTableTemplateScaling"
    ["UISystemConfigDataTableTemplate480"]="UISystemConfigDataTableTemplateResolution"
    ["UISystemConfigDataTableTemplate300"]="UISystemConfigDataTableTemplateRefreshRate"
    ["UISystemConfigDataTableTemplate4A0"]="UISystemConfigDataTableTemplateColorSpace"
    ["UISystemConfigDataTableTemplate3A0"]="UISystemConfigDataTableTemplateHDR"
    ["UISystemConfigDataTableTemplate420"]="UISystemConfigDataTableTemplateAntiAliasing"
)

# 执行替换
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    sed -i "s/$old_name/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
done

echo "变量名美化完成"