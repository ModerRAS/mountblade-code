#!/bin/bash

# 03_rendering.c 继续美化脚本
# 继续重命名剩余的 UNK_ 和 FUN_ 变量/函数

# 继续定义重命名映射
declare -A RENAME_MAP=(
    ["UNK_180446560"]="StencilBufferManager"
    ["UNK_1804465b0"]="ColorAttachmentManager"
    ["UNK_180446950"]="CameraConfigurationManager"
    ["UNK_1804469d0"]="ShadowMapManager"
    ["UNK_1804469e0"]="PostProcessingManager"
    ["FUN_1804460c0"]="InitializeRenderContext"
    ["FUN_1804460f0"]="CreateRenderDevice"
    ["FUN_180446120"]="SetupSwapChain"
    ["FUN_180446160"]="ConfigureCommandQueue"
    ["FUN_1804461b0"]="CreateRenderTargets"
)

# 创建临时替换脚本
cat > /tmp/replace_script.sed << 'EOF'
s/UNK_180446560/StencilBufferManager/g
s/UNK_1804465b0/ColorAttachmentManager/g
s/UNK_180446950/CameraConfigurationManager/g
s/UNK_1804469d0/ShadowMapManager/g
s/UNK_1804469e0/PostProcessingManager/g
s/FUN_1804460c0/InitializeRenderContext/g
s/FUN_1804460f0/CreateRenderDevice/g
s/FUN_180446120/SetupSwapChain/g
s/FUN_180446160/ConfigureCommandQueue/g
s/FUN_1804461b0/CreateRenderTargets/g
EOF

# 应用替换
sed -f /tmp/replace_script.sed /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c > /tmp/rendering_temp.c
mv /tmp/rendering_temp.c /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 清理临时文件
rm -f /tmp/replace_script.sed

echo "03_rendering.c 继续美化完成"