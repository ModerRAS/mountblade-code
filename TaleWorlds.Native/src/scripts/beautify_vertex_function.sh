#!/bin/bash

# 批量替换函数内的变量名
FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 处理函数体的变量替换
sed -e 's/iVar16/VertexAllocationFlag/g' \
    -e 's/iStack_358/VertexBufferSize_358/g' \
    -e 's/plStack_350/SystemBufferPointer_350/g' \
    -e 's/pVertexCount/VertexDataPointer/g' \
    -e 's/ResourceLockPointer9/MemoryHeapNodePointer/g' \
    -e 's/fStack_fc/VertexMinY_fc/g' \
    -e 's/fStack_100/VertexMaxY_100/g' \
    -e 's/fStack_104/VertexMaxZ_104/g' \
    -e 's/fStack_f8/VertexMinX_f8/g' \
    -e 's/fStack_2f4/VertexCoordinateX_2f4/g' \
    -e 's/fStack_2f8/VertexCoordinateY_2f8/g' \
    -e 's/uStack_2f0/StackDataOffset_2f0/g' \
    -e 's/fVar21/VertexMinValue/g' \
    -e 's/SourceDataPointer3/VertexSourceDataPointer3/g' \
    -e 's/ResourceLockPointer/VertexSourceDataPointer/g' \
    -e 's/EncodingCharacter/VertexEncodingCharacter/g' \
    -e 's/piVar9/VertexIndexPointer/g' \
    -e 's/piStack_2d8/VertexDataIndex_2d8/g' \
    -e 's/puStack_2d0/VertexDataOffset_2d0/g' \
    -e 's/ppStringLengthValue/VertexDataReferencePointer/g' \
    -e 's/piStack_2c8/VertexDataPosition_2c8/g' \
    -e 's/plStack_2c0/VertexResourcePointer_2c0/g' \
    -e 's/ConfigTablePointer/SystemConfigurationTable/g' \
    -e 's/iVar14/ProcessedVertexCount/g' \
    -e 's/fVar6/VertexScaleFactor/g' \
    -e 's/LAB_1801b6d83/LABEL_ProcessVertexDataMatch/g' \
    -e 's/auStack_388/StackDataArray_388/g' \
    -e 's/uStack_368/StackProcessingFlag_368/g' \
    -e 's/uStack_354/StackValidationFlag_354/g' \
    -e 's/iStack_348/StackIndex_348/g' \
    -e 's/iStack_344/StackOffset_344/g' \
    -e 's/uStack_340/StackDataFlag_340/g' \
    -e 's/uStack_33c/StackBufferSize_33c/g' \
    -e 's/uStack_338/StackAllocationSize_338/g' \
    -e 's/uStack_334/StackMemorySize_334/g' \
    -e 's/uStack_330/StackProcessFlag_330/g' \
    -e 's/puStack_328/StackResourcePointer_328/g' \
    -e 's/puStack_320/StackMemoryPointer_320/g' \
    -e 's/uStack_318/StackDataLength_318/g' \
    -e 's/uStack_310/StackMemoryHandle_310/g' \
    -e 's/plStack_2e8/VertexDataBuffer_2e8/g' \
    -e 's/plStack_2e0/SystemResourceBuffer_2e0/g' \
    -e 's/puStack_2a8/StackSystemPointer_2a8/g' \
    -e 's/puStack_2a0/StackBufferPointer_2a0/g' \
    -e 's/uStack_298/StackDataCount_298/g' \
    -e 's/auStack_290/StackBufferArray_290/g' \
    -e 's/auStack_208/StackTransformMatrix_208/g' \
    -e 's/uStack_148/StackMatrixElement_148/g' \
    -e 's/uStack_140/StackMatrixElement_140/g' \
    -e 's/uStack_138/StackMatrixElement_138/g' \
    -e 's/uStack_130/StackMatrixElement_130/g' \
    -e 's/uStack_128/StackMatrixElement_128/g' \
    -e 's/uStack_120/StackMatrixElement_120/g' \
    -e 's/uStack_118/StackMatrixElement_118/g' \
    -e 's/uStack_114/StackMatrixElement_114/g' \
    -e 's/uStack_110/StackMatrixElement_110/g' \
    -e 's/uStack_10c/StackMatrixElement_10c/g' \
    -e 's/uStack_108/StackSystemFlag_108/g' \
    -e 's/fStack_104/VertexMaxZ_104/g' \
    -e 's/fStack_100/VertexMaxY_100/g' \
    -e 's/uStack_f4/StackSystemData_f4/g' \
    -e 's/uStack_f0/StackSystemData_f0/g' \
    -e 's/uStack_c8/StackProtectionValue_c8/g' \
    -e 's/SourceDataPointer2/VertexSourceDataPointer2/g' \
    -e 's/pDataValue15/VertexDataValue15/g' \
    -e 's/pDataValue17/VertexDataValue17/g' \
    -e 's/QueueItemCount0/VertexQueueItemCount/g' \
    -e 's/Counter/VertexDataRequiredSpace/g' \
    -e 's/RequiredSpace/VertexComparisonResult/g' \
    -e 's/uVar5/SystemEncodedDataValue/g' \
    -e 's/EncodedDataValue/VertexAllocationSize/g' \
    -e 's/DAT_180a00330\._8_8_/SystemGlobalDataTable._8_8_/g' \
    "$FILE" > "$TEMP_FILE"

# 替换原始文件
mv "$TEMP_FILE" "$FILE"

echo "变量名替换完成"