#!/bin/bash

# 美化04_ui_system.c文件中的变量名
# 这是一个临时脚本，执行完成后会被删除

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

# 备份原始文件
cp "$INPUT_FILE" "$INPUT_FILE.backup"

# 替换UserInterfaceSystemTextureProcess函数中的变量名
sed -i 's/parameterTwo/textureSize/g' "$INPUT_FILE"
sed -i 's/parameterThree/processFlags/g' "$INPUT_FILE"
sed -i 's/resourceIndex/textureResourceIndex/g' "$INPUT_FILE"
sed -i 's/semaphoreCount/textureAlignmentSize/g' "$INPUT_FILE"
sed -i 's/animationDataSize/memoryPoolSize/g' "$INPUT_FILE"
sed -i 's/semaphoreArrayIndex/semaphoreIndex/g' "$INPUT_FILE"
sed -i 's/uiDataSize/dataPointer/g' "$INPUT_FILE"
sed -i 's/intVariable7/loopCounter/g' "$INPUT_FILE"
sed -i 's/intVariable8/memorySize/g' "$INPUT_FILE"
sed -i 's/longlongVariable3/memoryPoolHandle/g' "$INPUT_FILE"
sed -i 's/renderMode/uint32_t renderMode/g' "$INPUT_FILE"

# 添加函数注释
sed -i '/void UserInterfaceSystemTextureProcess(longlong systemContext,uint textureSize,undefined4 processFlags)/i\
// 函数: void UserInterfaceSystemTextureProcess(longlong systemContext,uint textureSize,undefined4 processFlags)\
/**\
 * @brief 处理用户界面系统纹理处理操作\
 * \
 * 该函数负责处理用户界面系统中的纹理相关操作，包括内存分配、\
 * 数据初始化和系统配置。主要用于UI纹理的预处理和优化。\
 *\
 * @param systemContext 系统上下文指针，包含系统状态和配置信息\
 * @param textureSize 纹理尺寸参数，控制纹理处理的大小\
 * @param processFlags 处理标志，控制纹理处理的具体行为\
 */' "$INPUT_FILE"

echo "变量名美化完成"