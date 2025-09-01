#!/bin/bash

# 批量替换03_rendering.c文件中的param_参数为语义化名称

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 创建备份
cp "$FILE" "$FILE.backup_param_replacement"

# 批量替换参数名
sed -i 's/void CreateRenderTextureView(undefined8 objectState,undefined8 contextData,undefined8 param_3)/void CreateRenderTextureView(undefined8 objectState,undefined8 contextData,undefined8 viewType)/g' "$FILE"
sed -i 's/@param param_3 视图类型/@param viewType 视图类型/g' "$FILE"

sed -i 's/void UpdateRenderTextureMipmap(undefined8 objectState,undefined8 contextData,undefined8 param_3)/void UpdateRenderTextureMipmap(undefined8 objectState,undefined8 contextData,undefined8 updateFlags)/g' "$FILE"
sed -i 's/@param param_3 更新标志/@param updateFlags 更新标志/g' "$FILE"

sed -i 's/void BindRenderTextureToShader(undefined8 objectState,undefined8 contextData,undefined8 param_3)/void BindRenderTextureToShader(undefined8 objectState,undefined8 contextData,undefined8 textureSlot)/g' "$FILE"
sed -i 's/@param param_3 纹理单元索引/@param textureSlot 纹理单元索引/g' "$FILE"

sed -i 's/void SetRenderTextureFilterMode(undefined8 objectState,undefined8 contextData,undefined8 param_3)/void SetRenderTextureFilterMode(undefined8 objectState,undefined8 contextData,undefined8 filterMode)/g' "$FILE"
sed -i 's/@param param_3 mipmap过滤模式/@param filterMode mipmap过滤模式/g' "$FILE"

sed -i 's/void SetRenderTextureAddressMode(undefined8 objectState,undefined8 contextData,undefined8 param_3)/void SetRenderTextureAddressMode(undefined8 objectState,undefined8 contextData,undefined8 addressMode)/g' "$FILE"
sed -i 's/@param param_3 V轴寻址模式/@param addressMode V轴寻址模式/g' "$FILE"

sed -i 's/void GenerateRenderTextureMipmap(undefined8 objectState,undefined8 contextData,undefined8 param_3)/void GenerateRenderTextureMipmap(undefined8 objectState,undefined8 contextData,undefined8 qualityLevel)/g' "$FILE"
sed -i 's/@param param_3 质量级别/@param qualityLevel 质量级别/g' "$FILE"

sed -i 's/void CompressRenderTexture(undefined8 objectState,undefined8 contextData,undefined8 param_3)/void CompressRenderTexture(undefined8 objectState,undefined8 contextData,undefined8 compressionQuality)/g' "$FILE"
sed -i 's/@param param_3 压缩质量/@param compressionQuality 压缩质量/g' "$FILE"

sed -i 's/void DecompressRenderTexture(undefined8 objectState,undefined8 contextData,undefined8 param_3)/void DecompressRenderTexture(undefined8 objectState,undefined8 contextData,undefined8 decompressFlags)/g' "$FILE"
sed -i 's/@param param_3 解压缩标志/@param decompressFlags 解压缩标志/g' "$FILE"

sed -i 's/longlong \* CreateRenderBufferInstance(longlong \*objectState, undefined8 contextData, undefined8 param_3, undefined8 param_4)/longlong * CreateRenderBufferInstance(longlong *objectState, undefined8 contextData, undefined8 bufferSize, undefined8 bufferFlags)/g' "$FILE"
sed -i 's/@param param_3 缓冲区大小参数/@param bufferSize 缓冲区大小参数/g' "$FILE"
sed -i 's/@param param_4 缓冲区标志参数/@param bufferFlags 缓冲区标志参数/g' "$FILE"

echo "参数替换完成"