#!/bin/bash

# 批量美化03_rendering.c中的FUN_函数
echo "=== 批量美化03_rendering.c中的FUN_函数 ==="

# 创建临时文件来存储唯一的函数定义
temp_file="/tmp/unique_functions.txt"
output_file="/tmp/beautified_functions.txt"

# 提取所有函数定义并去重
echo "提取并去重函数定义..."
grep "^#define FUN_180" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c | sort -u > "$temp_file"

# 统计唯一函数数量
unique_count=$(wc -l < "$temp_file")
echo "唯一函数数量: $unique_count"

# 分析函数模式
echo ""
echo "=== 函数命名模式分析 ==="

# 已美化的函数
echo "已美化的函数示例："
grep "^#define FUN_180[0-9a-fA-F]* [A-Z]" "$temp_file" | head -10

# 未美化的函数
echo ""
echo "未美化的函数："
unbeautified_count=$(grep -c "^#define FUN_180[0-9a-fA-F]* FUN_" "$temp_file")
echo "未美化函数数量: $unbeautified_count"

if [ $unbeautified_count -gt 0 ]; then
    echo "未美化的函数示例："
    grep "^#define FUN_180[0-9a-fA-F]* FUN_" "$temp_file" | head -10
    
    echo ""
    echo "=== 为未美化的函数提供语义化名称建议 ==="
    
    # 为常见的函数模式提供建议
    cat << 'EOF' > "$output_file"
# 常见函数模式的语义化名称建议
FUN_1800e7d00 -> ReleaseRenderResource
FUN_18011dd10 -> ProcessRenderMaterialProperty
FUN_18015b810 -> ProcessTransformMatrix
FUN_18028f6d0 -> BatchProcessRenderMaterial
FUN_180290070 -> CalculateRenderMaterialProperty
FUN_180290380 -> CalculateRenderMaterialTransform
FUN_180290630 -> CalculateRenderMaterialMatrix
FUN_180280ad0 -> ProcessRenderMaterialTransform
FUN_1806a012f -> ProcessRenderMaterialCleanup
FUN_18030a00 -> SetRenderMaterialAttributeData
FUN_180309a00 -> ProcessRenderMaterialAttributeStream
FUN_18030b420 -> AllocateRenderMaterialPropertyBuffer
FUN_1802c98d0 -> ValidateRenderMaterialShaderProperty
FUN_18029fdf0 -> AllocateRenderMaterialPropertyMemory
FUN_1802a00a0 -> SetRenderMaterialPropertyExtended
FUN_1802fac00 -> CalculateRenderMaterialPropertyExtended
FUN_1801c0fb0 -> GetRenderMaterialCurveData
FUN_180194a50 -> ProcessRenderMaterialBuffer
FUN_180049470 -> DestroyRenderMaterialObject
FUN_180303590 -> ProcessRenderSystemState
FUN_18062b8b0 -> AllocateRenderSystemMemory
FUN_180302370 -> CalculateRenderMaterialPropertyCount
FUN_180304100 -> ProcessRenderMaterialAttributes
FUN_1802e8910 -> ProcessRenderMaterialShaderProperty
FUN_1802f28f0 -> SetRenderMaterialShaderPropertyData
FUN_1801a29f0 -> ProcessRenderMaterialCurve
FUN_180383450 -> ProcessRenderMaterialAnimation
FUN_1802e4490 -> ProcessRenderMaterialState
FUN_180383630 -> ProcessRenderMaterialTransformAnimation
FUN_1801a2ea0 -> ProcessRenderMaterialAnimationComplete
FUN_1803048f0 -> ProcessRenderMaterialAnimationData
FUN_180062300 -> ProcessRenderMaterialTexture
FUN_180301f30 -> ResetRenderMaterialProperty
FUN_180143430 -> ValidateRenderMaterialPropertyData
FUN_18066ba00 -> ProcessRenderMaterialStreamData
FUN_1803456e0 -> InitializeRenderMaterialSystem
FUN_1803460a0 -> ConfigureRenderMaterialSystem
FUN_1803457d0 -> CleanupRenderMaterialSystem
FUN_180305a80 -> CheckRenderMaterialState
FUN_1800ba9c0 -> InitializeRenderMaterialValidation
FUN_180624a00 -> ValidateRenderMaterialData
FUN_180624910 -> ProcessRenderMaterialValidation
FUN_1802f1cd0 -> ProcessRenderMaterialCurveAnimation
FUN_18063aab0 -> ProcessRenderMaterialCurveTransform
FUN_180626eb0 -> ProcessRenderMaterialCurveAnimationData
FUN_180632d00 -> ProcessRenderMaterialAnimationSystem
FUN_180633220 -> ProcessRenderMaterialTransformSystem
FUN_18015b810 -> InitializeRenderMaterialAnimationSystem
FUN_1803a64f0 -> ProcessRenderMaterialAnimationFrame
FUN_180307ca0 -> ProcessRenderMaterialObjectAnimation
FUN_180308500 -> ProcessRenderMaterialPropertyArray
FUN_180287b30 -> ProcessRenderMaterialTransformMatrix
FUN_180051f00 -> GetRenderMaterialPropertyData
FUN_1803073e0 -> ProcessRenderMaterialObjectComplete
FUN_1803a6710 -> CalculateRenderMaterialAnimation
FUN_180309520 -> ProcessRenderMaterialDataBuffer
FUN_1802f65b0 -> ProcessRenderMaterialPropertyStream
FUN_180308670 -> InitializeRenderMaterialPropertyArray
FUN_180308820 -> ProcessRenderMaterialPropertyArrayData
FUN_18033c190 -> InitializeRenderMaterialBuffer
FUN_18039f160 -> ProcessRenderMaterialDataBuffer
FUN_18039f2b0 -> ValidateRenderMaterialDataBuffer
FUN_18032b4a0 -> OptimizeRenderMaterialData
FUN_18007eb80 -> ReleaseRenderMaterialCurveData
FUN_1803239f0 -> CalculateRenderMaterialPropertyOffset
FUN_18005d4b0 -> AllocateRenderMaterialPropertyHandle
FUN_180275540 -> AllocateRenderMaterialPropertyMemoryExtended
FUN_180275370 -> AllocateRenderMaterialPropertyMemorySimple
FUN_180275090 -> AllocateRenderMaterialPropertyDataBuffer
FUN_180628f30 -> ProcessRenderMaterialPropertyValidation
FUN_1802c0460 -> AllocateRenderMaterialPropertyTempBuffer
FUN_1800b3970 -> ProcessRenderMaterialPropertyNode
FUN_18040b330 -> CalculateRenderMaterialPropertyOffset
FUN_1800f4980 -> ProcessRenderMaterialPropertyReference
FUN_180631f30 -> ProcessRenderMaterialPropertyIterator
FUN_1800f8570 -> InitializeRenderMaterialPropertySystem
FUN_18030cab0 -> ProcessRenderMaterialPropertyDataSystem
FUN_1808fcf5c -> ProcessRenderMaterialPropertyArraySystem
FUN_1800f8930 -> ProcessRenderMaterialPropertyIndexSystem
FUN_180627a70 -> ProcessRenderMaterialPropertyCallback
FUN_180627b90 -> ProcessRenderMaterialPropertyCleanup
FUN_1800b8500 -> ProcessRenderMaterialPropertyTerminator
FUN_18004b790 -> ValidateRenderMaterialPropertyState
FUN_18004b730 -> CleanupRenderMaterialPropertyState
FUN_18005e110 -> ProcessRenderMaterialPropertyDataStream
FUN_180049470 -> DestroyRenderMaterialProperty
FUN_18022d470 -> CountRenderMaterialProperties
FUN_18005ea90 -> ProcessRenderMaterialPropertyDataExtended
FUN_18030f1e0 -> AllocateRenderMaterialPropertyArray
FUN_18007e930 -> ProcessRenderMaterialPropertyArrayData
FUN_18030ef70 -> ProcessRenderMaterialPropertyArrayIndex
FUN_18030d6e0 -> ProcessRenderMaterialPropertyAnimationData
FUN_180075030 -> AllocateRenderMaterialPropertyMemoryEx
FUN_18007ea10 -> ReleaseRenderMaterialPropertyMemory
FUN_18007e930 -> FreeRenderMaterialPropertyMemory
FUN_1808ee740 -> GetRenderMaterialInputDeviceStatus
FUN_1808ee620 -> GetRenderMaterialInputDeviceStatusEx
FUN_1808eed90 -> ProcessRenderMaterialInputDeviceData
FUN_1808ee3e0 -> ProcessRenderMaterialInputDeviceDataEx
FUN_1808ee7d0 -> GetRenderMaterialPropertyIndex
FUN_1801edeb0 -> ProcessRenderMaterialAnimationSystemEx
FUN_180174080 -> ProcessRenderMaterialAnimationDataEx
EOF

    echo "建议的语义化名称已保存到: $output_file"
    echo ""
    echo "=== 创建批量替换脚本 ==="
    
    # 创建批量替换脚本
    cat << 'EOF' > /tmp/batch_replace.sh
#!/bin/bash

# 批量替换FUN_函数为语义化名称
echo "开始批量替换FUN_函数..."

# 替换示例（可以根据需要添加更多）
sed -i 's/FUN_1800e7d00/ReleaseRenderResource/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18011dd10/ProcessRenderMaterialProperty/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18015b810/ProcessTransformMatrix/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18028f6d0/BatchProcessRenderMaterial/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180290070/CalculateRenderMaterialProperty/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180290380/CalculateRenderMaterialTransform/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180290630/CalculateRenderMaterialMatrix/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180280ad0/ProcessRenderMaterialTransform/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1806a012f/ProcessRenderMaterialCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "批量替换完成！"
EOF

    chmod +x /tmp/batch_replace.sh
    echo "批量替换脚本已创建: /tmp/batch_replace.sh"
else
    echo "所有函数都已经被美化了！"
fi

echo ""
echo "=== 建议的后续步骤 ==="
echo "1. 检查重复定义并选择最合适的名称"
echo "2. 为未美化的函数提供语义化名称"
echo "3. 删除重复的函数定义"
echo "4. 验证所有替换后的函数名称的一致性"

# 清理临时文件
rm -f "$temp_file"