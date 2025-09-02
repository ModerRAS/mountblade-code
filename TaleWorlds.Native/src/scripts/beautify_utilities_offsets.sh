#!/bin/bash

# 美化06_utilities.c文件中的变量名和函数名
# 替换硬编码偏移量为常量定义

echo "开始美化06_utilities.c文件..."

# 在文件末尾添加新的常量定义
cat >> /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c << 'EOF'

// 上下文句柄相关偏移量常量
#define ContextHandleDataOffset 0x10
#define ContextHandleValidationOffset 0x18
#define ContextHandleStatusOffset 0x20
#define ContextHandleFloatValueOffset 0x20
#define ContextHandleUpdateFlagOffset 0x35

// 系统执行相关偏移量常量
#define SystemExecutionDataOffset 0x20
#define SystemExecutionCountOffset 0x18
#define SystemExecutionStatusOffset 0x1c

// 资源验证相关偏移量常量
#define ResourceValidationDataOffset 0x18
#define ResourceValidationStatusOffset 0x1c
#define ResourceValidationStackOffset 0x20
EOF

# 使用sed进行替换
echo "替换硬编码偏移量..."

# 替换contextHandle相关的偏移量
sed -i 's/contextHandle + 0x18/contextHandle + ContextHandleValidationOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/contextHandle + 0x20/contextHandle + ContextHandleFloatValueOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/contextHandle + 0x34/contextHandle + ContextConfigurationFlagsOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/contextHandle + 0x35/contextHandle + ContextUpdateFlagOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 替换SystemContext相关的偏移量
sed -i 's/SystemContext + 0x20/SystemContext + SystemExecutionDataOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/SystemContext + 0x18/SystemContext + SystemExecutionCountOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 替换SystemExecutionPointer相关的偏移量
sed -i 's/SystemExecutionPointer + 0x20/SystemExecutionPointer + SystemExecutionDataOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/SystemExecutionPointer + 0x18/SystemExecutionPointer + SystemExecutionCountOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/SystemExecutionPointer + 0x1c/SystemExecutionPointer + SystemExecutionStatusOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 替换ResourceValidationStackBuffer相关的偏移量
sed -i 's/ResourceValidationStackBuffer + 8/ResourceValidationStackBuffer + ResourceValidationDataOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "美化完成！"
EOF