#!/bin/bash

# 获取当前文件
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
TEMP_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/scripts/temp_beautify.c"

# 先处理DAT_开头的变量，将它们改为更有意义的名称
# 这里我们按照变量出现的顺序进行分类处理

# 缓冲区相关变量
sed -i 's/DAT_180bf7258/g_bufferTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7260/g_bufferTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7268/g_bufferTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7310/g_bufferTempData4/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7318/g_bufferTempData5/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7320/g_bufferTempData6/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7328/g_bufferTempData7/g' "$INPUT_FILE"

# 网络相关变量
sed -i 's/DAT_180bf7418/g_networkTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7538/g_networkTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7548/g_networkTempData3/g' "$INPUT_FILE"

# 渲染相关变量
sed -i 's/DAT_180bf7668/g_renderTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7670/g_renderTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7678/g_renderTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7680/g_renderTempData4/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7700/g_renderTempData5/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7708/g_renderTempData6/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7710/g_renderTempData7/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7718/g_renderTempData8/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7798/g_renderTempData9/g' "$INPUT_FILE"
sed -i 's/DAT_180bf77a0/g_renderTempData10/g' "$INPUT_FILE"
sed -i 's/DAT_180bf77a8/g_renderTempData11/g' "$INPUT_FILE"
sed -i 's/DAT_180bf77b0/g_renderTempData12/g' "$INPUT_FILE"

# 物理相关变量
sed -i 's/DAT_180c91d54/g_physicsTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180c91d5c/g_physicsTempData2/g' "$INPUT_FILE"

# 材质和纹理相关变量
sed -i 's/DAT_180bf7830/g_materialTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7838/g_materialTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7840/g_materialTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7848/g_materialTempData4/g' "$INPUT_FILE"
sed -i 's/DAT_180bf78c8/g_materialTempData5/g' "$INPUT_FILE"
sed -i 's/DAT_180bf78d0/g_materialTempData6/g' "$INPUT_FILE"
sed -i 's/DAT_180bf78d8/g_materialTempData7/g' "$INPUT_FILE"
sed -i 's/DAT_180bf78e0/g_materialTempData8/g' "$INPUT_FILE"

# 网格相关变量
sed -i 's/DAT_180bf7960/g_meshTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7968/g_meshTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7970/g_meshTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7978/g_meshTempData4/g' "$INPUT_FILE"

# 着色器相关变量
sed -i 's/DAT_180bf79f8/g_shaderTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7a00/g_shaderTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7a08/g_shaderTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7a10/g_shaderTempData4/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7a90/g_shaderTempData5/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7a98/g_shaderTempData6/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7aa0/g_shaderTempData7/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7aa8/g_shaderTempData8/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7b28/g_shaderTempData9/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7b30/g_shaderTempData10/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7b38/g_shaderTempData11/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7b40/g_shaderTempData12/g' "$INPUT_FILE"

# 计算着色器相关变量
sed -i 's/DAT_180bf7bc0/g_computeShaderTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7bc8/g_computeShaderTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7bd0/g_computeShaderTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7bd8/g_computeShaderTempData4/g' "$INPUT_FILE"

# 几何处理相关变量
sed -i 's/DAT_180bf7c58/g_geometryTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7c60/g_geometryTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7c68/g_geometryTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7c70/g_geometryTempData4/g' "$INPUT_FILE"

# 帧缓冲区相关变量
sed -i 's/DAT_180bf7e90/g_frameBufferTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7e98/g_frameBufferTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7ea0/g_frameBufferTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7ea8/g_frameBufferTempData4/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7ee8/g_frameBufferTempData5/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7ef0/g_frameBufferTempData6/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7ef8/g_frameBufferTempData7/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7f00/g_frameBufferTempData8/g' "$INPUT_FILE"

# 渲染管线相关变量
sed -i 's/DAT_180bf7f40/g_renderPipelineTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7f48/g_renderPipelineTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7f50/g_renderPipelineTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7f58/g_renderPipelineTempData4/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7f98/g_renderPipelineTempData5/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7fa0/g_renderPipelineTempData6/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7fa8/g_renderPipelineTempData7/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7fb0/g_renderPipelineTempData8/g' "$INPUT_FILE"

# 材质渲染状态相关变量
sed -i 's/DAT_180bf7ff0/g_materialRenderStateTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf7ff8/g_materialRenderStateTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8000/g_materialRenderStateTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8008/g_materialRenderStateTempData4/g' "$INPUT_FILE"

# 纹理上传相关变量
sed -i 's/DAT_180bf8048/g_textureUploadTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8050/g_textureUploadTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8058/g_textureUploadTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8060/g_textureUploadTempData4/g' "$INPUT_FILE"

# 纹理压缩相关变量
sed -i 's/DAT_180bf80a0/g_textureCompressionTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf80a8/g_textureCompressionTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf80b0/g_textureCompressionTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf80b8/g_textureCompressionTempData4/g' "$INPUT_FILE"

# 纹理过滤相关变量
sed -i 's/DAT_180bf80f8/g_textureFilterTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8100/g_textureFilterTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8108/g_textureFilterTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8110/g_textureFilterTempData4/g' "$INPUT_FILE"

# 纹理包装相关变量
sed -i 's/DAT_180bf8150/g_textureWrapTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8158/g_textureWrapTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8160/g_textureWrapTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8168/g_textureWrapTempData4/g' "$INPUT_FILE"

# 网格顶点相关变量
sed -i 's/DAT_180bf81a8/g_meshVertexTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf81b0/g_meshVertexTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf81b8/g_meshVertexTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf81c0/g_meshVertexTempData4/g' "$INPUT_FILE"

# 网格索引相关变量
sed -i 's/DAT_180bf8200/g_meshIndexTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8208/g_meshIndexTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8210/g_meshIndexTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8218/g_meshIndexTempData4/g' "$INPUT_FILE"

# 网格布局相关变量
sed -i 's/DAT_180bf8258/g_meshLayoutTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8260/g_meshLayoutTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8268/g_meshLayoutTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8270/g_meshLayoutTempData4/g' "$INPUT_FILE"

# 网格边界框相关变量
sed -i 's/DAT_180bf82b0/g_meshBoundingBoxTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf82b8/g_meshBoundingBoxTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf82c0/g_meshBoundingBoxTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf82c8/g_meshBoundingBoxTempData4/g' "$INPUT_FILE"

# 网格碰撞相关变量
sed -i 's/DAT_180bf8308/g_meshCollisionTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8310/g_meshCollisionTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8318/g_meshCollisionTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8320/g_meshCollisionTempData4/g' "$INPUT_FILE"

# 着色器编译相关变量
sed -i 's/DAT_180bf8360/g_shaderCompileTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8368/g_shaderCompileTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8370/g_shaderCompileTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8378/g_shaderCompileTempData4/g' "$INPUT_FILE"

# 着色器程序相关变量
sed -i 's/DAT_180bf83b8/g_shaderProgramTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf83c0/g_shaderProgramTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf83c8/g_shaderProgramTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf83d0/g_shaderProgramTempData4/g' "$INPUT_FILE"

# 着色器统一缓冲区相关变量
sed -i 's/DAT_180bf8410/g_shaderUniformTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8418/g_shaderUniformTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8420/g_shaderUniformTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8428/g_shaderUniformTempData4/g' "$INPUT_FILE"

# 着色器属性相关变量
sed -i 's/DAT_180bf8468/g_shaderAttributeTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8470/g_shaderAttributeTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8478/g_shaderAttributeTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8480/g_shaderAttributeTempData4/g' "$INPUT_FILE"

# 着色器常量相关变量
sed -i 's/DAT_180bf84c0/g_shaderConstantTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf84c8/g_shaderConstantTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf84d0/g_shaderConstantTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf84d8/g_shaderConstantTempData4/g' "$INPUT_FILE"

# 渲染通道相关变量
sed -i 's/DAT_180bf8518/g_renderPassTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8520/g_renderPassTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8528/g_renderPassTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8530/g_renderPassTempData4/g' "$INPUT_FILE"

# 渲染目标相关变量
sed -i 's/DAT_180bf8570/g_renderTargetTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8578/g_renderTargetTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8580/g_renderTargetTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8588/g_renderTargetTempData4/g' "$INPUT_FILE"

# 渲染描述符相关变量
sed -i 's/DAT_180bf85c8/g_renderDescriptorTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf85d0/g_renderDescriptorTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf85d8/g_renderDescriptorTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf85e0/g_renderDescriptorTempData4/g' "$INPUT_FILE"

# 渲染命令相关变量
sed -i 's/DAT_180bf8620/g_renderCommandTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8628/g_renderCommandTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8630/g_renderCommandTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8638/g_renderCommandTempData4/g' "$INPUT_FILE"

# 渲染状态相关变量
sed -i 's/DAT_180bf8678/g_renderStateTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8680/g_renderStateTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8688/g_renderStateTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8690/g_renderStateTempData4/g' "$INPUT_FILE"

# 渲染队列相关变量
sed -i 's/DAT_180bf86d0/g_renderQueueTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf86d8/g_renderQueueTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf86e0/g_renderQueueTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf86e8/g_renderQueueTempData4/g' "$INPUT_FILE"

# 渲染缓冲区相关变量
sed -i 's/DAT_180bf8728/g_renderBufferTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8730/g_renderBufferTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8738/g_renderBufferTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8740/g_renderBufferTempData4/g' "$INPUT_FILE"

# 渲染同步相关变量
sed -i 's/DAT_180bf8780/g_renderSyncTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8788/g_renderSyncTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8790/g_renderSyncTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8798/g_renderSyncTempData4/g' "$INPUT_FILE"

# 渲染内存相关变量
sed -i 's/DAT_180bf87d8/g_renderMemoryTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf87e0/g_renderMemoryTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf87e8/g_renderMemoryTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf87f0/g_renderMemoryTempData4/g' "$INPUT_FILE"

# 渲染资源相关变量
sed -i 's/DAT_180bf8830/g_renderResourceTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8838/g_renderResourceTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8840/g_renderResourceTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8848/g_renderResourceTempData4/g' "$INPUT_FILE"

# 渲染纹理相关变量
sed -i 's/DAT_180bf8888/g_renderTextureTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8890/g_renderTextureTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8898/g_renderTextureTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf88a0/g_renderTextureTempData4/g' "$INPUT_FILE"

# 渲染采样器相关变量
sed -i 's/DAT_180bf88e0/g_renderSamplerTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf88e8/g_renderSamplerTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf88f0/g_renderSamplerTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf88f8/g_renderSamplerTempData4/g' "$INPUT_FILE"

# 渲染混合相关变量
sed -i 's/DAT_180bf8938/g_renderBlendTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8940/g_renderBlendTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8948/g_renderBlendTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf8950/g_renderBlendTempData4/g' "$INPUT_FILE"

# AI相关变量
sed -i 's/DAT_180c91d60/g_aiTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180c91d64/g_aiTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180c91d68/g_aiTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180c91d6c/g_aiTempData4/g' "$INPUT_FILE"
sed -i 's/DAT_180a14640/g_aiTempData5/g' "$INPUT_FILE"
sed -i 's/DAT_180c91d70/g_aiTempData6/g' "$INPUT_FILE"
sed -i 's/DAT_180c91da4/g_aiTempData7/g' "$INPUT_FILE"

# AI导航网格相关变量
sed -i 's/DAT_180bf90b0/g_aiNavigationTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf90b8/g_aiNavigationTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf90c0/g_aiNavigationTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf90c8/g_aiNavigationTempData4/g' "$INPUT_FILE"

# 数据库相关变量
sed -i 's/DAT_180bf5b88/g_databaseTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf5b90/g_databaseTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf5b98/g_databaseTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf5ba0/g_databaseTempData4/g' "$INPUT_FILE"

# AI行为树相关变量
sed -i 's/DAT_180c91da8/g_aiBehaviorTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180a16c50/g_aiBehaviorTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180c91dac/g_aiBehaviorTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180a16c38/g_aiBehaviorTempData4/g' "$INPUT_FILE"
sed -i 's/DAT_180c91ee8/g_aiBehaviorTempData5/g' "$INPUT_FILE"

# AI决策相关变量
sed -i 's/DAT_180c91ef8/g_aiDecisionTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180c91efc/g_aiDecisionTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180c91f00/g_aiDecisionTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180c91f04/g_aiDecisionTempData4/g' "$INPUT_FILE"

# 资源相关变量
sed -i 's/DAT_180c91f08/g_resourceTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180c91f0c/g_resourceTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180c91f10/g_resourceTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180c91f14/g_resourceTempData4/g' "$INPUT_FILE"
sed -i 's/DAT_180c91f30/g_resourceTempData5/g' "$INPUT_FILE"
sed -i 's/DAT_180c91f68/g_resourceTempData6/g' "$INPUT_FILE"

# 场景相关变量
sed -i 's/DAT_180bf91b0/g_sceneTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf91b8/g_sceneTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf91c0/g_sceneTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf91c8/g_sceneTempData4/g' "$INPUT_FILE"

# 文件系统相关变量
sed -i 's/DAT_180bf9210/g_fileSystemTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9218/g_fileSystemTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9220/g_fileSystemTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9228/g_fileSystemTempData4/g' "$INPUT_FILE"

# 文件缓存相关变量
sed -i 's/DAT_180bf9270/g_fileCacheTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9278/g_fileCacheTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9280/g_fileCacheTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9288/g_fileCacheTempData4/g' "$INPUT_FILE"

# 场景渲染相关变量
sed -i 's/DAT_180bf92d0/g_sceneRenderTempData1/g' "$INPUT_FILE"

# 材质着色器程序相关变量
sed -i 's/DAT_180bf92d8/g_materialShaderTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf92e0/g_materialShaderTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf92e8/g_materialShaderTempData3/g' "$INPUT_FILE"

# 材质纹理采样器相关变量
sed -i 's/DAT_180bf9330/g_materialTextureTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9338/g_materialTextureTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9390/g_materialTextureTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9398/g_materialTextureTempData4/g' "$INPUT_FILE"
sed -i 's/DAT_180bf93a0/g_materialTextureTempData5/g' "$INPUT_FILE"

# 材质属性缓冲区相关变量
sed -i 's/DAT_180bf93a8/g_materialPropertyTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf93f0/g_materialPropertyTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf93f8/g_materialPropertyTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9400/g_materialPropertyTempData4/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9408/g_materialPropertyTempData5/g' "$INPUT_FILE"

# 材质渲染状态相关变量
sed -i 's/DAT_180bf9450/g_materialRenderStateTempData5/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9458/g_materialRenderStateTempData6/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9460/g_materialRenderStateTempData7/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9468/g_materialRenderStateTempData8/g' "$INPUT_FILE"

# 材质统一数据相关变量
sed -i 's/DAT_180bf94b0/g_materialUniformTempData5/g' "$INPUT_FILE"
sed -i 's/DAT_180bf94b8/g_materialUniformTempData6/g' "$INPUT_FILE"
sed -i 's/DAT_180bf94c0/g_materialUniformTempData7/g' "$INPUT_FILE"
sed -i 's/DAT_180bf94c8/g_materialUniformTempData8/g' "$INPUT_FILE"

# 纹理上传缓冲区相关变量
sed -i 's/DAT_180bf9510/g_textureUploadTempData5/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9518/g_textureUploadTempData6/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9520/g_textureUploadTempData7/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9528/g_textureUploadTempData8/g' "$INPUT_FILE"

# 纹理MIP链相关变量
sed -i 's/DAT_180bf9570/g_textureMipTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9578/g_textureMipTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9580/g_textureMipTempData3/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9588/g_textureMipTempData4/g' "$INPUT_FILE"

# 纹理压缩标志相关变量
sed -i 's/DAT_180bf95d0/g_textureCompressionTempData5/g' "$INPUT_FILE"
sed -i 's/DAT_180bf95d8/g_textureCompressionTempData6/g' "$INPUT_FILE"
sed -i 's/DAT_180bf95e0/g_textureCompressionTempData7/g' "$INPUT_FILE"
sed -i 's/DAT_180bf95e8/g_textureCompressionTempData8/g' "$INPUT_FILE"

# 纹理过滤模式相关变量
sed -i 's/DAT_180bf9630/g_textureFilterTempData5/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9638/g_textureFilterTempData6/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9640/g_textureFilterTempData7/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9648/g_textureFilterTempData8/g' "$INPUT_FILE"

# 纹理包装模式相关变量
sed -i 's/DAT_180bf9690/g_textureWrapTempData5/g' "$INPUT_FILE"
sed -i 's/DAT_180bf9698/g_textureWrapTempData6/g' "$INPUT_FILE"
sed -i 's/DAT_180bf96a0/g_textureWrapTempData7/g' "$INPUT_FILE"
sed -i 's/DAT_180bf96a8/g_textureWrapTempData8/g' "$INPUT_FILE"

# 其他变量
sed -i 's/DAT_180a22cb0/g_miscTempData1/g' "$INPUT_FILE"
sed -i 's/DAT_180a22d48/g_miscTempData2/g' "$INPUT_FILE"
sed -i 's/DAT_18098bc73/g_miscTempData3/g' "$INPUT_FILE"

echo "变量美化完成"