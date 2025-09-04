#!/bin/bash

# 批量替换UI系统文件中的变量名
# 这个脚本用于美化04_ui_system.c文件中的变量名

sed -i 's/UNK_180a3deb8/UIElementReferenceCount/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e0b8/UIElementStateFlags/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e0d8/UIElementVisibilityMask/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e0f0/UIElementOpacityLevel/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e110/UIElementTransformMatrix/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e128/UIElementBoundingBox/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e148/UIElementClipRegion/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e150/UIElementZOrder/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e160/UIElementParentPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e178/UIElementChildList/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e180/UIEventListener/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e1a0/UIElementEventHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e1b0/UIElementAnimationState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e1c8/UIElementTransitionEffect/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e1f8/UIElementShaderProgram/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e210/UIElementTextureHandle/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e224/UIElementVertexBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e230/UIElementIndexBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e248/UIElementUniformBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e260/UIElementRenderState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e1e0/UIElementLayoutConstraints/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e1e8/UIElementPadding/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e270/UIElementMargin/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e280/UIElementAlignment/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e294/UIElementAnchorPoint/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e2a0/UIElementPivot/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e2b0/UIElementScale/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e2b8/UIElementRotation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e2c8/UIElementPosition/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e2d8/UIElementSize/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e2e8/UIElementMinSize/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e300/UIElementMaxSize/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e310/UIElementPreferredSize/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e378/UIElementFlexProperties/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/DAT_180c96808/UIElementFocusState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e470/UIElementHoverState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e408/UIElementActiveState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e418/UIElementDisabledState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/DAT_180a3c248/UIElementDataPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e4a0/UIElementStyleProperties/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e4b8/UIElementColorTint/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e4c8/UIElementBackgroundColor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e4d8/UIElementBorderColor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e4e8/UIElementBorderWidth/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e500/UIElementCornerRadius/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e510/UIElementShadowProperties/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180a3e588/UIElementTextProperties/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/DAT_180d4913c/UIElementInputEnabled/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

echo "变量名替换完成"