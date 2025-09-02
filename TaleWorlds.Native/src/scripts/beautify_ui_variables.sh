#!/bin/bash

# UI系统变量名美化脚本
# 批量替换04_ui_system.c文件中的UNK_变量名为有意义的名称

echo "开始美化UI系统变量名..."

# 创建变量映射文件
cat > ui_variable_mapping.txt << 'EOF'
# UI系统变量映射表
UNK_1809581e0=UiSystemInstance
UNK_1809583d0=UiSystemContext
UNK_180958660=UiWindowManager
UNK_1809586e0=UiRenderer
UNK_180958758=UiInputHandler
UNK_180958970=UiEventDispatcher
UNK_1809589a0=UiFontManager
UNK_180958a10=UiTextureAtlas
UNK_180958a50=UiShaderProgram
UNK_18076804b=UiVertexBuffer
UNK_180958b20=UiIndexBuffer
UNK_180958ac0=UiAnimationSystem
UNK_180958b00=UiLayoutManager
UNK_180958b10=UiStyleManager
UNK_180958ba0=UiWindowFactory
UNK_180958c10=UiWidgetManager
UNK_1807693c0=UiControlManager
UNK_180958bf0=UiFocusManager
UNK_180958c88=UiThemeManager
UNK_180958cb0=UiLayoutEngine
UNK_180958d20=UiRenderQueue
UNK_000003b8=UiSystemFlags
UNK_000003c0=UiSystemState
UNK_180958d90=UiEventQueue
UNK_180958e20=UiCommandBuffer
UNK_180958fb0=UiResourceCache
UNK_180770640=UiFontCache
UNK_180958ec0=UiTextureCache
UNK_180958f10=UiShaderCache
UNK_180958f68=UiVertexCache
UNK_1809590c0=UiMaterialCache
UNK_180747d60=UiSystemConfig
UNK_1807868c0=UiWindowStack
UNK_180786c90=UiWidgetStack
UNK_180788fc0=UiControlStack
UNK_180959140=UiEventStack
UNK_1809591b0=UiRenderStack
UNK_180959410=UiCommandStack
UNK_180959630=UiResourceStack
UNK_1809596a4=UiSystemStack
UNK_180959b80=UiMemoryPool
UNK_180959d10=UiObjectPool
UNK_180959d80=UiBufferPool
UNK_1803f60a0=UiSystemData
UNK_180655e50=UiWindowData
UNK_180084650=UiWidgetData
UNK_180655f30=UiControlData
UNK_1806561b0=UiEventData
UNK_1806561c0=UiRenderData
UNK_1dd01c85c=UiSystemByte
EOF

# 执行替换
while IFS='=' read -r old_name new_name; do
    # 跳过注释行和空行
    if [[ $old_name =~ ^#.*$ ]] || [[ -z $old_name ]]; then
        continue
    fi
    
    echo "替换 $old_name 为 $new_name"
    sed -i "s/\b$old_name\b/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
done < ui_variable_mapping.txt

echo "UI系统变量名美化完成"

# 清理临时文件
rm -f ui_variable_mapping.txt