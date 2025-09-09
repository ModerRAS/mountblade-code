#!/bin/bash

# 渲染系统函数美化完整解决方案
# 针对03_rendering.c文件中的FUN_函数进行语义化处理

echo "=== 渲染系统函数美化完整解决方案 ==="
echo "目标文件: /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 创建备份
echo "1. 创建文件备份..."
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c.backup.$(date +%Y%m%d_%H%M%S)

echo ""
echo "2. 分析当前状态..."

# 统计函数状态
total_funs=$(grep -c "^#define FUN_180" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c)
beautified_funs=$(grep -c "^#define FUN_180[0-9a-fA-F]* [A-Z]" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c)
unbeautified_funs=$(grep -c "^#define FUN_180[0-9a-fA-F]* FUN_" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c)

echo "   总函数定义: $total_funs"
echo "   已美化函数: $beautified_funs"
echo "   未美化函数: $unbeautified_funs"

echo ""
echo "3. 核心FUN_函数美化映射表..."

# 创建函数映射表
cat << 'EOF' > /tmp/function_mappings.txt
# 渲染系统核心函数映射表
# 格式: 原始函数名 -> 语义化函数名

# === 系统核心函数 ===
FUN_1800e7d00 -> ReleaseRenderResource
FUN_18011dd10 -> ProcessRenderMaterialProperty
FUN_18015b810 -> ProcessTransformMatrix
FUN_18028f6d0 -> BatchProcessRenderMaterial
FUN_180290070 -> CalculateRenderMaterialProperty
FUN_180290380 -> CalculateRenderMaterialTransform
FUN_180290630 -> CalculateRenderMaterialMatrix
FUN_180280ad0 -> ProcessRenderMaterialTransform
FUN_1806a012f -> ProcessRenderMaterialCleanup

# === 材质属性处理 ===
FUN_18030a00 -> SetRenderMaterialAttributeData
FUN_180309a00 -> ProcessRenderMaterialAttributeStream
FUN_18030b420 -> AllocateRenderMaterialPropertyBuffer
FUN_1802c98d0 -> ValidateRenderMaterialShaderProperty
FUN_18029fdf0 -> AllocateRenderMaterialPropertyMemory
FUN_1802a00a0 -> SetRenderMaterialPropertyExtended
FUN_1802fac00 -> CalculateRenderMaterialPropertyExtended

# === 曲线和动画处理 ===
FUN_1801c0fb0 -> GetRenderMaterialCurveData
FUN_180194a50 -> ProcessRenderMaterialBuffer
FUN_1801a29f0 -> ProcessRenderMaterialCurve
FUN_180383450 -> ProcessRenderMaterialAnimation
FUN_1802e4490 -> ProcessRenderMaterialState
FUN_180383630 -> ProcessRenderMaterialTransformAnimation
FUN_1801a2ea0 -> ProcessRenderMaterialAnimationComplete
FUN_1803048f0 -> ProcessRenderMaterialAnimationData

# === 系统管理函数 ===
FUN_180049470 -> DestroyRenderMaterialObject
FUN_180303590 -> ProcessRenderSystemState
FUN_18062b8b0 -> AllocateRenderSystemMemory
FUN_180302370 -> CalculateRenderMaterialPropertyCount
FUN_180304100 -> ProcessRenderMaterialAttributes

# === 着色器处理 ===
FUN_1802e8910 -> ProcessRenderMaterialShaderProperty
FUN_1802f28f0 -> SetRenderMaterialShaderPropertyData
FUN_1808fd200 -> ExecuteRenderShaderProgram

# === 纹理和缓冲区 ===
FUN_180062300 -> ProcessRenderMaterialTexture
FUN_180301f30 -> ResetRenderMaterialProperty
FUN_180143430 -> ValidateRenderMaterialPropertyData
FUN_18066ba00 -> ProcessRenderMaterialStreamData

# === 系统初始化和清理 ===
FUN_1803456e0 -> InitializeRenderMaterialSystem
FUN_1803460a0 -> ConfigureRenderMaterialSystem
FUN_1803457d0 -> CleanupRenderMaterialSystem
FUN_180305a80 -> CheckRenderMaterialState
FUN_1800ba9c0 -> InitializeRenderMaterialValidation

# === 验证函数 ===
FUN_180624a00 -> ValidateRenderMaterialData
FUN_180624910 -> ProcessRenderMaterialValidation

# === 动画系统 ===
FUN_1802f1cd0 -> ProcessRenderMaterialCurveAnimation
FUN_18063aab0 -> ProcessRenderMaterialCurveTransform
FUN_180626eb0 -> ProcessRenderMaterialCurveAnimationData
FUN_180632d00 -> ProcessRenderMaterialAnimationSystem
FUN_180633220 -> ProcessRenderMaterialTransformSystem

# === 缓冲区管理 ===
FUN_18033c190 -> InitializeRenderMaterialBuffer
FUN_18039f160 -> ProcessRenderMaterialDataBuffer
FUN_18039f2b0 -> ValidateRenderMaterialDataBuffer
FUN_18032b4a0 -> OptimizeRenderMaterialData
FUN_18007eb80 -> ReleaseRenderMaterialCurveData
FUN_1803239f0 -> CalculateRenderMaterialPropertyOffset

# === 属性系统 ===
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

# === 输入设备处理 ===
FUN_1808ee740 -> GetRenderMaterialInputDeviceStatus
FUN_1808ee620 -> GetRenderMaterialInputDeviceStatusEx
FUN_1808eed90 -> ProcessRenderMaterialInputDeviceData
FUN_1808ee3e0 -> ProcessRenderMaterialInputDeviceDataEx
FUN_1808ee7d0 -> GetRenderMaterialPropertyIndex
FUN_1801edeb0 -> ProcessRenderMaterialAnimationSystemEx
FUN_180174080 -> ProcessRenderMaterialAnimationDataEx
EOF

echo "   函数映射表已创建: /tmp/function_mappings.txt"

echo ""
echo "4. 生成批量替换脚本..."

# 创建批量替换脚本
cat << 'EOF' > /tmp/batch_replace_functions.sh
#!/bin/bash

# 批量替换FUN_函数为语义化名称
echo "开始批量替换FUN_函数..."

# 系统核心函数
sed -i 's/FUN_1800e7d00/ReleaseRenderResource/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18011dd10/ProcessRenderMaterialProperty/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18015b810/ProcessTransformMatrix/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18028f6d0/BatchProcessRenderMaterial/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180290070/CalculateRenderMaterialProperty/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180290380/CalculateRenderMaterialTransform/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180290630/CalculateRenderMaterialMatrix/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180280ad0/ProcessRenderMaterialTransform/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1806a012f/ProcessRenderMaterialCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 材质属性处理
sed -i 's/FUN_18030a00/SetRenderMaterialAttributeData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180309a00/ProcessRenderMaterialAttributeStream/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18030b420/AllocateRenderMaterialPropertyBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1802c98d0/ValidateRenderMaterialShaderProperty/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029fdf0/AllocateRenderMaterialPropertyMemory/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1802a00a0/SetRenderMaterialPropertyExtended/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1802fac00/CalculateRenderMaterialPropertyExtended/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 曲线和动画处理
sed -i 's/FUN_1801c0fb0/GetRenderMaterialCurveData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180194a50/ProcessRenderMaterialBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1801a29f0/ProcessRenderMaterialCurve/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180383450/ProcessRenderMaterialAnimation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1802e4490/ProcessRenderMaterialState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180383630/ProcessRenderMaterialTransformAnimation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1801a2ea0/ProcessRenderMaterialAnimationComplete/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1803048f0/ProcessRenderMaterialAnimationData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 系统管理函数
sed -i 's/FUN_180049470/DestroyRenderMaterialObject/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180303590/ProcessRenderSystemState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18062b8b0/AllocateRenderSystemMemory/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180302370/CalculateRenderMaterialPropertyCount/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180304100/ProcessRenderMaterialAttributes/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 着色器处理
sed -i 's/FUN_1802e8910/ProcessRenderMaterialShaderProperty/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1802f28f0/SetRenderMaterialShaderPropertyData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1808fd200/ExecuteRenderShaderProgram/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 纹理和缓冲区
sed -i 's/FUN_180062300/ProcessRenderMaterialTexture/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180301f30/ResetRenderMaterialProperty/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180143430/ValidateRenderMaterialPropertyData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18066ba00/ProcessRenderMaterialStreamData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 系统初始化和清理
sed -i 's/FUN_1803456e0/InitializeRenderMaterialSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1803460a0/ConfigureRenderMaterialSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1803457d0/CleanupRenderMaterialSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180305a80/CheckRenderMaterialState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1800ba9c0/InitializeRenderMaterialValidation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 验证函数
sed -i 's/FUN_180624a00/ValidateRenderMaterialData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180624910/ProcessRenderMaterialValidation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 动画系统
sed -i 's/FUN_1802f1cd0/ProcessRenderMaterialCurveAnimation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18063aab0/ProcessRenderMaterialCurveTransform/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180626eb0/ProcessRenderMaterialCurveAnimationData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180632d00/ProcessRenderMaterialAnimationSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180633220/ProcessRenderMaterialTransformSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "批量替换完成！"
EOF

chmod +x /tmp/batch_replace_functions.sh

echo "   批量替换脚本已创建: /tmp/batch_replace_functions.sh"

echo ""
echo "5. 生成重复定义清理脚本..."

# 创建重复定义清理脚本
cat << 'EOF' > /tmp/cleanup_duplicates.sh
#!/bin/bash

# 清理重复的函数定义
echo "开始清理重复的函数定义..."

# 找出重复的函数地址并清理
grep "^#define FUN_180" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c | cut -d' ' -f2 | sort | uniq -d | while read addr; do
    echo "处理重复地址: $addr"
    
    # 保留第一个定义，删除其他的
    first_line=$(grep -n "^#define FUN_180$addr" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c | head -1 | cut -d: -f1)
    echo "保留第 $first_line 行的定义"
    
    # 删除其他的定义
    grep -n "^#define FUN_180$addr" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c | tail -n +2 | cut -d: -f1 | sort -nr | while read line_num; do
        sed -i "${line_num}d" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
        echo "删除第 $line_num 行的重复定义"
    done
done

echo "重复定义清理完成！"
EOF

chmod +x /tmp/cleanup_duplicates.sh

echo "   重复定义清理脚本已创建: /tmp/cleanup_duplicates.sh"

echo ""
echo "6. 生成验证脚本..."

# 创建验证脚本
cat << 'EOF' > /tmp/verify_results.sh
#!/bin/bash

# 验证处理结果
echo "验证处理结果..."

# 统计处理后的状态
total_funs=$(grep -c "^#define FUN_180" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c)
beautified_funs=$(grep -c "^#define FUN_180[0-9a-fA-F]* [A-Z]" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c)
unbeautified_funs=$(grep -c "^#define FUN_180[0-9a-fA-F]* FUN_" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c)

echo "处理结果:"
echo "  总函数定义: $total_funs"
echo "  已美化函数: $beautified_funs"
echo "  未美化函数: $unbeautified_funs"

# 显示未美化的函数
if [ $unbeautified_funs -gt 0 ]; then
    echo ""
    echo "未美化的函数:"
    grep "^#define FUN_180[0-9a-fA-F]* FUN_" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
fi
EOF

chmod +x /tmp/verify_results.sh

echo "   验证脚本已创建: /tmp/verify_results.sh"

echo ""
echo "=== 完整解决方案已生成 ==="
echo ""
echo "生成的文件:"
echo "1. /tmp/function_mappings.txt - 函数映射表"
echo "2. /tmp/batch_replace_functions.sh - 批量替换脚本"
echo "3. /tmp/cleanup_duplicates.sh - 重复定义清理脚本"
echo "4. /tmp/verify_results.sh - 验证脚本"
echo ""
echo "使用方法:"
echo "1. 查看函数映射表: cat /tmp/function_mappings.txt"
echo "2. 执行批量替换: /tmp/batch_replace_functions.sh"
echo "3. 清理重复定义: /tmp/cleanup_duplicates.sh"
echo "4. 验证处理结果: /tmp/verify_results.sh"
echo ""
echo "注意事项:"
echo "- 执行前请确保已创建备份"
echo "- 建议先在小范围内测试"
echo "- 处理完成后请编译验证"