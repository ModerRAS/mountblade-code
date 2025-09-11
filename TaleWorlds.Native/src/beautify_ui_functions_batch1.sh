#!/bin/bash

# FUN_18073afc0 - 处理UI参数的函数
sed -i 's/FUN_18073afc0/ProcessUIContextWithBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073afdd - 类似功能
sed -i 's/FUN_18073afdd/ProcessUIContextWithValidation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b058 - 无参数函数
sed -i 's/FUN_18073b058/InitializeUIResourceManager/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b13d - 无参数函数
sed -i 's/FUN_18073b13d/CleanupUIResourceManager/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b16f - 无参数函数
sed -i 's/FUN_18073b16f/ValidateUIResourceManager/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b190 - 处理UI缓冲区的函数
sed -i 's/FUN_18073b190/ProcessUIBufferData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b1ad - 类似功能
sed -i 's/FUN_18073b1ad/ProcessUIBufferDataWithSize/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b215 - 无参数函数
sed -i 's/FUN_18073b215/InitializeUIRenderingSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b2c4 - 无参数函数
sed -i 's/FUN_18073b2c4/CleanupUIRenderingSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b2ee - 无参数函数
sed -i 's/FUN_18073b2ee/ValidateUIRenderingSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b310 - 处理UI数据源的函数
sed -i 's/FUN_18073b310/ProcessUIDataSource/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b3e0 - 处理UI数据传输的函数
sed -i 's/FUN_18073b3e0/ProcessUIDataTransfer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b3fd - 类似功能
sed -i 's/FUN_18073b3fd/ProcessUIDataTransferWithValidation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b457 - 无参数函数
sed -i 's/FUN_18073b457/InitializeUIEventSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b4cf - 无参数函数
sed -i 's/FUN_18073b4cf/CleanupUIEventSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b4f1 - 无参数函数
sed -i 's/FUN_18073b4f1/ValidateUIEventSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b520 - 处理UI上下文的函数
sed -i 's/FUN_18073b520/ProcessUIContext/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b5f0 - 处理UI缓冲区的函数
sed -i 's/FUN_18073b5f0/ProcessUIBufferWithSize/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b60d - 类似功能
sed -i 's/FUN_18073b60d/ProcessUIBufferWithValidation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b695 - 无参数函数
sed -i 's/FUN_18073b695/InitializeUITextureSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b7af - 无参数函数
sed -i 's/FUN_18073b7af/CleanupUITextureSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b7e9 - 无参数函数
sed -i 's/FUN_18073b7e9/ValidateUITextureSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b810 - 处理UI纹理数据的函数
sed -i 's/FUN_18073b810/ProcessUITextureData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b8e0 - 处理UI纹理资源的函数
sed -i 's/FUN_18073b8e0/ProcessUITextureResource/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b9b0 - 处理UI纹理缓冲区的函数
sed -i 's/FUN_18073b9b0/ProcessUITextureBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073b9cd - 类似功能
sed -i 's/FUN_18073b9cd/ProcessUITextureBufferWithValidation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073bb65 - 无参数函数
sed -i 's/FUN_18073bb65/InitializeUIComponentSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073bbdd - 无参数函数
sed -i 's/FUN_18073bbdd/CleanupUIComponentSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073bbff - 无参数函数
sed -i 's/FUN_18073bbff/ValidateUIComponentSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073bc20 - 处理UI组件数据的函数
sed -i 's/FUN_18073bc20/ProcessUIComponentData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073bcf0 - 处理UI组件状态的函数
sed -i 's/FUN_18073bcf0/ProcessUIComponentState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073bdc0 - 处理UI组件属性的函数
sed -i 's/FUN_18073bdc0/ProcessUIComponentProperty/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073be90 - 处理UI组件事件的函数
sed -i 's/FUN_18073be90/ProcessUIComponentEvent/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073bf60 - 处理UI上下文的函数
sed -i 's/FUN_18073bf60/ProcessUIContextState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073c020 - 处理UI上下文数据的函数
sed -i 's/FUN_18073c020/ProcessUIContextData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073c03d - 类似功能
sed -i 's/FUN_18073c03d/ProcessUIContextDataWithValidation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073c099 - 无参数函数
sed -i 's/FUN_18073c099/InitializeUILayoutSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073c111 - 无参数函数
sed -i 's/FUN_18073c111/CleanupUILayoutSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073c133 - 无参数函数
sed -i 's/FUN_18073c133/ValidateUILayoutSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073c160 - 处理UI布局数据的函数
sed -i 's/FUN_18073c160/ProcessUILayoutData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073c17d - 类似功能
sed -i 's/FUN_18073c17d/ProcessUILayoutDataWithValidation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073c1e0 - 无参数函数
sed -i 's/FUN_18073c1e0/InitializeUIAnimationSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073c258 - 无参数函数
sed -i 's/FUN_18073c258/CleanupUIAnimationSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073c27a - 无参数函数
sed -i 's/FUN_18073c27a/ValidateUIAnimationSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073c2a0 - 处理UI动画数据的函数
sed -i 's/FUN_18073c2a0/ProcessUIAnimationData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073c380 - 处理UI动画缓冲区的函数
sed -i 's/FUN_18073c380/ProcessUIAnimationBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073c39d - 类似功能
sed -i 's/FUN_18073c39d/ProcessUIAnimationBufferWithValidation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073c3f9 - 无参数函数
sed -i 's/FUN_18073c3f9/InitializeUIFontSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073c471 - 无参数函数
sed -i 's/FUN_18073c471/CleanupUIFontSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# FUN_18073c493 - 无参数函数
sed -i 's/FUN_18073c493/ValidateUIFontSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

echo "第一批FUN_函数美化完成"