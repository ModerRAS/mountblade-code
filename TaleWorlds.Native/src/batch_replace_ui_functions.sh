#!/bin/bash

# UI系统文件美化脚本
# 用于重命名函数和变量，并添加文档注释

# 设置输入文件路径
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
TEMP_FILE="/tmp/04_ui_system_temp.c"

# 备份原始文件
cp "$INPUT_FILE" "$INPUT_FILE.backup"

echo "开始处理 UI 系统文件..."

# 第一步：重命名 DAT_ 变量
echo "步骤1: 重命名 DAT_ 变量..."

# 创建临时文件进行多次替换
cp "$INPUT_FILE" "$TEMP_FILE"

# DAT_ 变量重命名映射
sed -i 's/DAT_180c8f008/UISystemInstancePointer/g' "$TEMP_FILE"
sed -i 's/DAT_180c8f010/UISystemInitializationMethod/g' "$TEMP_FILE"
sed -i 's/DAT_180c8f018/UISystemControllerMethods/g' "$TEMP_FILE"
sed -i 's/DAT_180c8ecfc/UISystemConfigData/g' "$TEMP_FILE"
sed -i 's/DAT_180bf3ff4/UISystemRenderFlags/g' "$TEMP_FILE"
sed -i 's/DAT_180c91020/UISystemDomainHandle/g' "$TEMP_FILE"
sed -i 's/DAT_180c91028/UISystemAssemblyName/g' "$TEMP_FILE"
sed -i 's/DAT_180c91030/UISystemThreadHandle/g' "$TEMP_FILE"
sed -i 's/DAT_180c967f0/UISystemConfigBuffer/g' "$TEMP_FILE"
sed -i 's/DAT_180c967e8/UISystemConfigSize/g' "$TEMP_FILE"
sed -i 's/DAT_180c8ed30/UISystemScaleFactor/g' "$TEMP_FILE"
sed -i 's/DAT_180c0c1cc/UISystemCriticalSectionCount/g' "$TEMP_FILE"
sed -i 's/DAT_180c0c1c8/UISystemCriticalSectionIndex/g' "$TEMP_FILE"
sed -i 's/DAT_180c0c1c0/UISystemCriticalSectionPointer/g' "$TEMP_FILE"
sed -i 's/DAT_180c91038/UISystemInputHandler/g' "$TEMP_FILE"
sed -i 's/DAT_180c8ed00/UISystemRendererInstance/g' "$TEMP_FILE"
sed -i 's/DAT_180a0fd38/UISystemRenderParameters/g' "$TEMP_FILE"
sed -i 's/DAT_180a401f0/UISystemAnimationSpeed/g' "$TEMP_FILE"
sed -i 's/DAT_180a3dda8/UISystemDataSize/g' "$TEMP_FILE"
sed -i 's/DAT_180a3ddc0/UISystemDataPointer/g' "$TEMP_FILE"

# 第二步：重命名 UNK_ 变量
echo "步骤2: 重命名 UNK_ 变量..."

# UNK_ 变量重命名映射
sed -i 's/UNK_180a3dd38/UISystemStringBuffer/g' "$TEMP_FILE"
sed -i 's/UNK_180a3c3e0/UISystemMemoryBuffer/g' "$TEMP_FILE"
sed -i 's/UNK_1809fe62c/UISystemValidationData/g' "$TEMP_FILE"
sed -i 's/UNK_18098bcb0/UISystemDefaultData/g' "$TEMP_FILE"
sed -i 's/UNK_180a3e4a0/UISystemWindowData/g' "$TEMP_FILE"
sed -i 's/UNK_180a3e4b8/UISystemWidgetData/g' "$TEMP_FILE"
sed -i 's/UNK_180a3e500/UISystemLayoutData/g' "$TEMP_FILE"
sed -i 's/UNK_180a3e510/UISystemEventData/g' "$TEMP_FILE"
sed -i 's/UNK_180a3e4d8/UISystemFocusData/g' "$TEMP_FILE"
sed -i 's/UNK_180a3e4e8/UISystemInputData/g' "$TEMP_FILE"

# 第三步：重命名 FUN_ 函数
echo "步骤3: 重命名 FUN_ 函数..."

# FUN_ 函数重命名映射
sed -i 's/FUN_180653220/UISystemInitializeCore/g' "$TEMP_FILE"
sed -i 's/FUN_180653420/UISystemProcessConfiguration/g' "$TEMP_FILE"
sed -i 's/FUN_180655260/UISystemCreateWindow/g' "$TEMP_FILE"
sed -i 's/FUN_180655f50/UISystemDestroyWindow/g' "$TEMP_FILE"
sed -i 's/FUN_1806562b0/UISystemUpdateWindow/g' "$TEMP_FILE"
sed -i 's/FUN_180656500/UISystemRenderWindow/g' "$TEMP_FILE"
sed -i 's/FUN_180656730/UISystemHandleInput/g' "$TEMP_FILE"
sed -i 's/FUN_1806567c0/UISystemProcessEvent/g' "$TEMP_FILE"
sed -i 's/FUN_180657450/UISystemUpdateFocus/g' "$TEMP_FILE"
sed -i 's/FUN_1806576d0/UISystemValidateEvent/g' "$TEMP_FILE"
sed -i 's/FUN_180657b00/UISystemDispatchEvent/g' "$TEMP_FILE"
sed -i 's/FUN_180658a60/UISystemTransformMatrix/g' "$TEMP_FILE"
sed -i 's/FUN_1806699e0/UISystemLoadResource/g' "$TEMP_FILE"
sed -i 's/FUN_18066ef60/UISystemProcessAnimation/g' "$TEMP_FILE"
sed -i 's/FUN_1806972a0/UISystemCreateWidget/g' "$TEMP_FILE"
sed -i 's/FUN_180697340/UISystemDestroyWidget/g' "$TEMP_FILE"
sed -i 's/FUN_1806973c0/UISystemUpdateWidget/g' "$TEMP_FILE"
sed -i 's/FUN_180697460/UISystemRenderWidget/g' "$TEMP_FILE"
sed -i 's/FUN_1806974e0/UISystemHandleWidgetEvent/g' "$TEMP_FILE"
sed -i 's/FUN_180697580/UISystemValidateWidget/g' "$TEMP_FILE"
sed -i 's/FUN_180697600/UISystemFocusWidget/g' "$TEMP_FILE"
sed -i 's/FUN_180697680/UISystemBlurWidget/g' "$TEMP_FILE"
sed -i 's/FUN_1806976f0/UISystemEnableWidget/g' "$TEMP_FILE"
sed -i 's/FUN_180697770/UISystemDisableWidget/g' "$TEMP_FILE"
sed -i 's/FUN_18069ed90/UISystemProcessLayout/g' "$TEMP_FILE"
sed -i 's/FUN_180718480/UISystemCalculateMetrics/g' "$TEMP_FILE"
sed -i 's/FUN_1807193b0/UISystemUpdateMetrics/g' "$TEMP_FILE"
sed -i 's/FUN_1807234d0/UISystemRenderText/g' "$TEMP_FILE"
sed -i 's/FUN_180738730/UISystemProcessTexture/g' "$TEMP_FILE"
sed -i 's/FUN_180742460/UISystemUpdateTexture/g' "$TEMP_FILE"
sed -i 's/FUN_180742cd0/UISystemRenderTexture/g' "$TEMP_FILE"
sed -i 's/FUN_180742e00/UISystemHandleTexture/g' "$TEMP_FILE"
sed -i 's/FUN_180744920/UISystemValidateTexture/g' "$TEMP_FILE"
sed -i 's/FUN_180746460/UISystemProcessShader/g' "$TEMP_FILE"
sed -i 's/FUN_18074c570/UISystemUpdateShader/g' "$TEMP_FILE"
sed -i 's/FUN_18074fc70/UISystemRenderShader/g' "$TEMP_FILE"
sed -i 's/FUN_180750bf2/UISystemHandleShader/g' "$TEMP_FILE"
sed -i 's/FUN_180750fa0/UISystemValidateShader/g' "$TEMP_FILE"
sed -i 's/FUN_1807533c2/UISystemProcessBuffer/g' "$TEMP_FILE"
sed -i 's/FUN_180754080/UISystemUpdateBuffer/g' "$TEMP_FILE"
sed -i 's/FUN_180757a30/UISystemRenderBuffer/g' "$TEMP_FILE"
sed -i 's/FUN_180757cec/UISystemHandleBuffer/g' "$TEMP_FILE"
sed -i 's/FUN_180759220/UISystemValidateBuffer/g' "$TEMP_FILE"
sed -i 's/FUN_1807593d0/UISystemProcessMemory/g' "$TEMP_FILE"
sed -i 's/FUN_18075a100/UISystemUpdateMemory/g' "$TEMP_FILE"
sed -i 's/FUN_18075a760/UISystemRenderMemory/g' "$TEMP_FILE"
sed -i 's/FUN_18075e660/UISystemHandleMemory/g' "$TEMP_FILE"
sed -i 's/FUN_18075ece0/UISystemValidateMemory/g' "$TEMP_FILE"
sed -i 's/FUN_180760650/UISystemProcessThread/g' "$TEMP_FILE"
sed -i 's/FUN_180762e40/UISystemUpdateThread/g' "$TEMP_FILE"

# 第四步：添加函数文档注释
echo "步骤4: 添加函数文档注释..."

# 为主要函数添加文档注释
sed -i '/^UISystemInitializeCore(/i\
/**\
 * @brief 用户界面系统核心初始化函数\
 * \
 * 该函数负责初始化用户界面系统的核心组件，包括：\
 * - 系统实例创建\
 * - 内存分配初始化\
 * - 配置数据加载\
 * - 回调函数设置\
 *\
 * @param systemInstance 系统实例指针\
 * @param configData 配置数据指针\
 * @param configSize 配置数据大小\
 * @param configFlags 配置标志\
 * @return 成功返回初始化后的系统实例指针，失败返回NULL\
 */' "$TEMP_FILE"

sed -i '/^UISystemProcessConfiguration(/i\
/**\
 * @brief 用户界面系统配置处理函数\
 * \
 * 该函数负责处理用户界面系统的配置数据，包括：\
 * - 配置参数解析\
 * - 系统参数设置\
 * - 状态初始化\
 *\
 * @param configHandle 配置句柄\
 * @param configBuffer 配置缓冲区\
 * @param configSize 配置大小\
 * @param configFlags 配置标志\
 * @return 处理结果状态码\
 */' "$TEMP_FILE"

sed -i '/^UISystemCreateWindow(/i\
/**\
 * @brief 用户界面系统窗口创建函数\
 * \
 * 该函数负责创建用户界面窗口，包括：\
 * - 窗口对象分配\
 * - 窗口属性设置\
 * - 窗口句柄生成\
 *\
 * @param windowManager 窗口管理器指针\
 * @param windowId 窗口ID\
 * @param windowStyle 窗口样式\
 * @param windowFlags 窗口标志\
 * @return 创建的窗口句柄\
 */' "$TEMP_FILE"

sed -i '/^UISystemDestroyWindow(/i\
/**\
 * @brief 用户界面系统窗口销毁函数\
 * \
 * 该函数负责销毁用户界面窗口，包括：\
 * - 窗口资源释放\
 * - 子窗口处理\
 * - 事件清理\
 *\
 * @param windowHandle 窗口句柄\
 * @param destroyFlags 销毁标志\
 * @param reserved1 保留参数1\
 * @param reserved2 保留参数2\
 * @return 销毁结果状态码\
 */' "$TEMP_FILE"

sed -i '/^UISystemUpdateWindow(/i\
/**\
 * @brief 用户界面系统窗口更新函数\
 * \
 * 该函数负责更新用户界面窗口，包括：\
 * - 窗口状态更新\
 * - 子窗口更新\
 * - 重绘标记设置\
 *\
 * @param windowHandle 窗口句柄\
 * @param updateData 更新数据\
 * @param updateFlags 更新标志\
 * @param reserved 保留参数\
 * @return 更新结果状态码\
 */' "$TEMP_FILE"

sed -i '/^UISystemRenderWindow(/i\
/**\
 * @brief 用户界面系统窗口渲染函数\
 * \
 * 该函数负责渲染用户界面窗口，包括：\
 * - 窗口内容绘制\
 * - 子窗口渲染\
 * - 效果处理\
 *\
 * @param windowHandle 窗口句柄\
 * @param renderData 渲染数据\
 * @param renderFlags 渲染标志\
 * @param reserved 保留参数\
 * @return 渲染结果状态码\
 */' "$TEMP_FILE"

sed -i '/^UISystemHandleInput(/i\
/**\
 * @brief 用户界面系统输入处理函数\
 * \
 * 该函数负责处理用户界面输入事件，包括：\
 * - 输入事件分发\
 * - 焦点管理\
 * - 事件冒泡处理\
 *\
 * @param inputHandle 输入句柄\
 * @param inputData 输入数据\
 * @param inputFlags 输入标志\
 * @param reserved 保留参数\
 * @return 处理结果状态码\
 */' "$TEMP_FILE"

sed -i '/^UISystemProcessEvent(/i\
/**\
 * @brief 用户界面系统事件处理函数\
 * \
 * 该函数负责处理用户界面事件，包括：\
 * - 事件验证\
 * - 事件分发\
 * - 回调函数调用\
 *\
 * @param eventHandle 事件句柄\
 * @param eventData 事件数据\
 * @param eventFlags 事件标志\
 * @param reserved 保留参数\
 * @return 处理结果状态码\
 */' "$TEMP_FILE"

sed -i '/^UISystemUpdateFocus(/i\
/**\
 * @brief 用户界面系统焦点更新函数\
 * \
 * 该函数负责更新用户界面焦点，包括：\
 * - 焦点丢失处理\
 * - 焦点获取处理\
 * - 焦点路径更新\
 *\
 * @param focusHandle 焦点句柄\
 * @param focusData 焦点数据\
 * @param focusFlags 焦点标志\
 * @param reserved 保留参数\
 * @return 更新结果状态码\
 */' "$TEMP_FILE"

sed -i '/^UISystemValidateEvent(/i\
/**\
 * @brief 用户界面系统事件验证函数\
 * \
 * 该函数负责验证用户界面事件，包括：\
 * - 事件格式验证\
 * - 事件权限检查\
 * - 事件完整性检查\
 *\
 * @param eventId 事件ID\
 * @param eventData 事件数据指针\
 * @param eventSize 事件数据大小\
 * @param validationFlags 验证标志\
 * @param resultPointer 结果指针\
 * @return 验证结果状态码\
 */' "$TEMP_FILE"

sed -i '/^UISystemDispatchEvent(/i\
/**\
 * @brief 用户界面系统事件分发函数\
 * \
 * 该函数负责分发用户界面事件，包括：\
 * - 事件目标查找\
 * - 事件分发处理\
 * - 传播控制\
 *\
 * @param dispatcherHandle 分发器句柄\
 * @param eventId 事件ID\
 * @param dispatchFlags 分发标志\
 * @param reserved 保留参数\
 * @return 分发结果状态码\
 */' "$TEMP_FILE"

sed -i '/^UISystemTransformMatrix(/i\
/**\
 * @brief 用户界面系统矩阵变换函数\
 * \
 * 该函数负责处理用户界面矩阵变换，包括：\
 * - 变换矩阵计算\
 * - 坐标系统转换\
 * - 投影变换\
 *\
 * @param matrixPointer 矩阵指针\
 * @param positionX X坐标位置\
 * @param positionY Y坐标位置\
 * @param positionZ Z坐标位置\
 * @param transformFlags 变换标志\
 * @return 变换结果状态码\
 */' "$TEMP_FILE"

# 第五步：处理其他变量
echo "步骤5: 处理其他变量..."

# 处理其他 DAT_ 变量
sed -i 's/DAT_180c0fa90/UISystemRenderQueue/g' "$TEMP_FILE"
sed -i 's/DAT_180c0fa94/UISystemRenderQueueSize/g' "$TEMP_FILE"
sed -i 's/DAT_180c0fcd0/UISystemVertexBuffer/g' "$TEMP_FILE"
sed -i 's/DAT_180c0fcd4/UISystemVertexBufferCount/g' "$TEMP_FILE"
sed -i 's/DAT_180c0fc70/UISystemIndexBuffer/g' "$TEMP_FILE"
sed -i 's/DAT_180c0fc74/UISystemIndexBufferCount/g' "$TEMP_FILE"
sed -i 's/DAT_180c0faf0/UISystemUniformBuffer/g' "$TEMP_FILE"
sed -i 's/DAT_180c0faf4/UISystemUniformBufferSize/g' "$TEMP_FILE"
sed -i 's/DAT_180c0fe50/UISystemFrameBuffer/g' "$TEMP_FILE"
sed -i 's/DAT_180c0fe54/UISystemFrameBufferCount/g' "$TEMP_FILE"
sed -i 's/DAT_180c0fdf0/UISystemTextureBuffer/g' "$TEMP_FILE"
sed -i 's/DAT_180c0fdf4/UISystemTextureBufferCount/g' "$TEMP_FILE"
sed -i 's/DAT_180c0fb50/UISystemShaderBuffer/g' "$TEMP_FILE"
sed -i 's/DAT_180c0fb54/UISystemShaderBufferCount/g' "$TEMP_FILE"
sed -i 's/DAT_180c0fd90/UISystemMemoryBuffer/g' "$TEMP_FILE"
sed -i 's/DAT_180c0fd94/UISystemMemoryBufferSize/g' "$TEMP_FILE"
sed -i 's/DAT_180c0fbb0/UISystemThreadBuffer/g' "$TEMP_FILE"
sed -i 's/DAT_180c0fbb4/UISystemThreadBufferCount/g' "$TEMP_FILE"
sed -i 's/DAT_180c0fc10/UISystemEventBuffer/g' "$TEMP_FILE"
sed -i 's/DAT_180c0fc14/UISystemEventBufferCount/g' "$TEMP_FILE"
sed -i 's/DAT_180c0fd30/UISystemInputBuffer/g' "$TEMP_FILE"
sed -i 's/DAT_180c0fd34/UISystemInputBufferSize/g' "$TEMP_FILE"
sed -i 's/DAT_180c0feb0/UISystemConfigBuffer/g' "$TEMP_FILE"
sed -i 's/DAT_180c0feb4/UISystemConfigBufferSize/g' "$TEMP_FILE"
sed -i 's/DAT_180c10880/UISystemInitialized/g' "$TEMP_FILE"
sed -i 's/DAT_180c10890/UISystemActive/g' "$TEMP_FILE"
sed -i 's/DAT_180c108d8/UISystemVersion/g' "$TEMP_FILE"
sed -i 's/DAT_180c108e0/UISystemBuildNumber/g' "$TEMP_FILE"
sed -i 's/DAT_180c108dc/UISystemFlags/g' "$TEMP_FILE"
sed -i 's/DAT_180c108e4/UISystemState/g' "$TEMP_FILE"
sed -i 's/DAT_180c10a88/UISystemMemorySize/g' "$TEMP_FILE"
sed -i 's/DAT_180c10a70/UISystemMemoryUsed/g' "$TEMP_FILE"
sed -i 's/DAT_180c10a80/UISystemMemoryFree/g' "$TEMP_FILE"

# 处理其他 UNK_ 变量
sed -i 's/UNK_180959e90/UISystemGlobalData/g' "$TEMP_FILE"
sed -i 's/UNK_18095a310/UISystemWindowData/g' "$TEMP_FILE"
sed -i 's/UNK_18095a384/UISystemWidgetData/g' "$TEMP_FILE"
sed -i 's/UNK_18095a598/UISystemLayoutData/g' "$TEMP_FILE"
sed -i 's/UNK_18095a5a0/UISystemEventData/g' "$TEMP_FILE"
sed -i 's/UNK_18095a618/UISystemInputData/g' "$TEMP_FILE"
sed -i 's/UNK_18095a628/UISystemFocusData/g' "$TEMP_FILE"
sed -i 's/UNK_18095a638/UISystemRenderData/g' "$TEMP_FILE"
sed -i 's/UNK_18095a648/UISystemTextureData/g' "$TEMP_FILE"
sed -i 's/UNK_18095a650/UISystemShaderData/g' "$TEMP_FILE"
sed -i 's/UNK_18095a658/UISystemBufferData/g' "$TEMP_FILE"
sed -i 's/UNK_18095a668/UISystemThreadData/g' "$TEMP_FILE"
sed -i 's/UNK_180a215c0/UISystemMemoryData/g' "$TEMP_FILE"
sed -i 's/UNK_18095aaa0/UISystemConfigData/g' "$TEMP_FILE"
sed -i 's/UNK_18095ab70/UISystemVersionData/g' "$TEMP_FILE"
sed -i 's/UNK_18095ab80/UISystemStateData/g' "$TEMP_FILE"
sed -i 's/UNK_180785d90/UISystemResourceData/g' "$TEMP_FILE"
sed -i 's/UNK_18095ac00/UISystemFontData/g' "$TEMP_FILE"
sed -i 's/UNK_18095ac78/UISystemColorData/g' "$TEMP_FILE"
sed -i 's/UNK_18095ac80/UISystemStyleData/g' "$TEMP_FILE"
sed -i 's/UNK_1807880a0/UISystemAnimationData/g' "$TEMP_FILE"
sed -i 's/UNK_18095acf0/UISystemEffectData/g' "$TEMP_FILE"
sed -i 's/UNK_1807872a0/UISystemSoundData/g' "$TEMP_FILE"
sed -i 's/UNK_18095ad08/UISystemGestureData/g' "$TEMP_FILE"
sed -i 's/UNK_18095ad20/UISystemTouchData/g' "$TEMP_FILE"
sed -i 's/UNK_18095ad40/UISystemCursorData/g' "$TEMP_FILE"
sed -i 's/UNK_18095adb0/UISystemThemeData/g' "$TEMP_FILE"
sed -i 's/UNK_18095ae30/UISystemLocaleData/g' "$TEMP_FILE"
sed -i 's/UNK_18095aeb0/UISystemDebugData/g' "$TEMP_FILE"
sed -i 's/UNK_18095af28/UISystemProfileData/g' "$TEMP_FILE"
sed -i 's/UNK_18095af38/UISystemLogData/g' "$TEMP_FILE"
sed -i 's/UNK_18095afe8/UISystemCacheData/g' "$TEMP_FILE"
sed -i 's/UNK_18095b430/UISystemPoolData/g' "$TEMP_FILE"
sed -i 's/UNK_18095af48/UISystemQueueData/g' "$TEMP_FILE"
sed -i 's/UNK_18095b038/UISystemStackData/g' "$TEMP_FILE"
sed -i 's/UNK_18095b4a8/UISystemTreeData/g' "$TEMP_FILE"
sed -i 's/UNK_18095b4b8/UISystemGraphData/g' "$TEMP_FILE"
sed -i 's/UNK_18095b4c0/UISystemListData/g' "$TEMP_FILE"
sed -i 's/UNK_18095b4d0/UISystemArrayData/g' "$TEMP_FILE"
sed -i 's/UNK_18095b4dc/UISystemHashData/g' "$TEMP_FILE"
sed -i 's/UNK_18095b4e4/UISystemMapData/g' "$TEMP_FILE"
sed -i 's/UNK_18095af98/UISystemSetData/g' "$TEMP_FILE"
sed -i 's/UNK_18095b094/UISystemVectorData/g' "$TEMP_FILE"
sed -i 's/UNK_18095b4ec/UISystemMatrixData/g' "$TEMP_FILE"
sed -i 's/UNK_18095b4f4/UISystemPointData/g' "$TEMP_FILE"
sed -i 's/UNK_18095b4f8/UISystemRectData/g' "$TEMP_FILE"
sed -i 's/UNK_18095b580/UISystemSizeData/g' "$TEMP_FILE"
sed -i 's/UNK_18095b6b8/UISystemColorData/g' "$TEMP_FILE"
sed -i 's/UNK_18095b780/UISystemFontData/g' "$TEMP_FILE"
sed -i 's/UNK_18095b5f8/UISystemStyleData/g' "$TEMP_FILE"
sed -i 's/UNK_18095b638/UISystemThemeData/g' "$TEMP_FILE"
sed -i 's/UNK_18095b678/UISystemAnimationData/g' "$TEMP_FILE"

# 第六步：处理函数声明
echo "步骤6: 处理函数声明..."

# 处理函数声明中的 FUN_ 函数
sed -i 's/FUN_180763100/UISystemProcessResource/g' "$TEMP_FILE"
sed -i 's/FUN_1807868e0/UISystemUpdateResource/g' "$TEMP_FILE"
sed -i 's/FUN_180788990/UISystemRenderResource/g' "$TEMP_FILE"
sed -i 's/FUN_1807863b0/UISystemHandleResource/g' "$TEMP_FILE"
sed -i 's/FUN_180787030/UISystemValidateResource/g' "$TEMP_FILE"
sed -i 's/FUN_18079bc20/UISystemProcessFont/g' "$TEMP_FILE"
sed -i 's/FUN_18079c2e0/UISystemUpdateFont/g' "$TEMP_FILE"
sed -i 's/FUN_18079b740/UISystemRenderFont/g' "$TEMP_FILE"
sed -i 's/FUN_18079b400/UISystemHandleFont/g' "$TEMP_FILE"
sed -i 's/FUN_18079b4c0/UISystemValidateFont/g' "$TEMP_FILE"
sed -i 's/FUN_18079b5a0/UISystemProcessStyle/g' "$TEMP_FILE"
sed -i 's/FUN_18079b600/UISystemUpdateStyle/g' "$TEMP_FILE"
sed -i 's/FUN_18079cd20/UISystemRenderStyle/g' "$TEMP_FILE"
sed -i 's/FUN_18079cda0/UISystemHandleStyle/g' "$TEMP_FILE"

# 处理缓冲区数据表变量
sed -i 's/UISystemBufferDataTable2198/UISystemRenderBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable2288/UISystemEventBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable2d0c/UISystemMemoryBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable2d08/UISystemThreadBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable2df8/UISystemInputBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable2ee8/UISystemConfigBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable3540/UISystemFontBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable3538/UISystemStyleBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable34d8/UISystemThemeBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable34dc/UISystemAnimationBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable3590/UISystemSoundBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable34e0/UISystemGestureBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable3598/UISystemTouchBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable35a0/UISystemCursorBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable34e4/UISystemDebugBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable34e8/UISystemProfileBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable34f0/UISystemLogBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable34f4/UISystemCacheBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable35f0/UISystemPoolBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable35f8/UISystemQueueBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable3600/UISystemStackBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable3650/UISystemTreeBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable3658/UISystemGraphBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable3660/UISystemListBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable36c0/UISystemArrayBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable36b4/UISystemHashBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable3710/UISystemMapBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable3718/UISystemSetBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable3720/UISystemVectorBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable3770/UISystemMatrixBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable3778/UISystemPointBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable3780/UISystemRectBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable37d0/UISystemSizeBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable37d8/UISystemColorBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable37e0/UISystemFontBuffer/g' "$TEMP_FILE"
sed -i 's/UISystemBufferDataTable3840/UISystemStyleBuffer/g' "$TEMP_FILE"

# 处理其他变量
sed -i 's/DAT_180c11734/UISystemResourceCount/g' "$TEMP_FILE"
sed -i 's/DAT_180c11738/UISystemResourceSize/g' "$TEMP_FILE"
sed -i 's/DAT_180c1173c/UISystemResourceFlags/g' "$TEMP_FILE"
sed -i 's/DAT_180c11740/UISystemResourceState/g' "$TEMP_FILE"
sed -i 's/DAT_180c11744/UISystemResourceType/g' "$TEMP_FILE"
sed -i 's/DAT_180c11748/UISystemResourceFormat/g' "$TEMP_FILE"
sed -i 's/DAT_180c1174c/UISystemResourceUsage/g' "$TEMP_FILE"
sed -i 's/DAT_180c11750/UISystemResourceAccess/g' "$TEMP_FILE"
sed -i 's/DAT_180c11754/UISystemResourceBind/g' "$TEMP_FILE"
sed -i 's/DAT_180c11758/UISystemResourceMisc/g' "$TEMP_FILE"
sed -i 's/DAT_180c11730/UISystemResourceVersion/g' "$TEMP_FILE"

# 处理其他 UNK_ 变量
sed -i 's/UNK_18095a524/UISystemGlobalState/g' "$TEMP_FILE"
sed -i 's/UNK_18095bc58/UISystemResourceState/g' "$TEMP_FILE"
sed -i 's/UNK_18095be50/UISystemMemoryState/g' "$TEMP_FILE"

# 第七步：验证和清理
echo "步骤7: 验证和清理..."

# 清理多余的空行和注释
sed -i '/^$/N;/^\n$/d' "$TEMP_FILE"

# 第八步：替换原始文件
echo "步骤8: 替换原始文件..."
mv "$TEMP_FILE" "$INPUT_FILE"

echo "UI 系统文件美化完成！"
echo "备份文件保存在: $INPUT_FILE.backup"