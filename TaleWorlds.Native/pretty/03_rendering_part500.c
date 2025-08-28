#include "TaleWorlds.Native.Split.h"

// 03_rendering_part500.c - 渲染系统高级变换和矩阵计算模块
// 包含10个函数，涵盖了渲染系统的高级变换、矩阵计算、资源管理等功能

// 常量定义
#define RENDER_STATE_DIRTY_FLAG 0x10
#define RENDER_STATE_FLAG_MASK 0x10000000
#define MAX_FLOAT_VALUE 3.4028235e+38
#define MATRIX_SCALE_FACTOR 0.0
#define INVALID_HANDLE -1
#define MUTEX_LOCK_TIMEOUT 0xfffffffffffffffe

// 全局变量重命名
#define g_RenderContextManager DAT_180c8a9f0
#define g_RenderThreadData DAT_180d49128
#define g_TLSIndex __tls_index
#define g_ThreadLocalStorage ThreadLocalStoragePointer
#define g_RenderQueue DAT_180c92cd8
#define g_ResourceManager DAT_180c95578
#define g_RenderState DAT_180c92514
#define g_ShaderManager DAT_180c96070

// 未知常量重命名
#define g_UnknownMatrixData UNK_180a30f00
#define g_UnknownRenderState UNK_180943060
#define g_UnknownShaderData UNK_1809fa560
#define g_UnknownTextureData UNK_1809fa540
#define g_UnknownResourceData UNK_1809fa490
#define g_UnknownRenderBuffer UNK_180a30280
#define g_UnknownShaderCache UNK_180a302c0

/**
 * 更新渲染变换矩阵
 * @param renderContext 渲染上下文指针
 * @param transformMatrix 变换矩阵数据
 * 功能：更新渲染上下文的变换矩阵，处理矩阵乘法运算和状态更新
 */
void UpdateRenderTransformMatrix(longlong renderContext, undefined8 *transformMatrix)
{
    float matrix1[16];
    float matrix2[16];
    float matrix3[16];
    float matrix4[16];
    float matrix5[16];
    float matrix6[16];
    float matrix7[16];
    float matrix8[16];
    float matrix9[16];
    float matrix10[16];
    float matrix11[16];
    float matrix12[16];
    longlong renderObject;
    float transformX, transformY, transformZ, transformW;
    float scaleX, scaleY, scaleZ, scaleW;
    float rotationX, rotationY, rotationZ, rotationW;
    float translationX, translationY, translationZ, translationW;
    undefined4 temp1, temp2, temp3;
    undefined8 matrixData;
    bool canTransform;
    char isRenderReady;
    int objectCount;
    undefined8 *objectList;
    longlong objectIterator;
    longlong currentObject;
    
    // 获取渲染上下文数据
    renderObject = *(longlong *)(renderContext + 0x8a8);
    objectList = (undefined8 *)(renderObject + 0x30);
    isRenderReady = func_0x000180285980();
    
    if (isRenderReady != '\0') {
        // 复制变换矩阵数据
        matrixData = transformMatrix[1];
        *objectList = *transformMatrix;
        objectList[1] = matrixData;
        matrixData = transformMatrix[3];
        objectList[2] = transformMatrix[2];
        objectList[3] = matrixData;
        
        // 复制矩阵元素
        temp1 = *(undefined4 *)((longlong)transformMatrix + 0x24);
        temp2 = *(undefined4 *)(transformMatrix + 5);
        temp3 = *(undefined4 *)((longlong)transformMatrix + 0x2c);
        *(undefined4 *)(objectList + 4) = *(undefined4 *)(transformMatrix + 4);
        *(undefined4 *)((longlong)objectList + 0x24) = temp1;
        *(undefined4 *)(objectList + 5) = temp2;
        *(undefined4 *)((longlong)objectList + 0x2c) = temp3;
        
        temp1 = *(undefined4 *)((longlong)transformMatrix + 0x34);
        temp2 = *(undefined4 *)(transformMatrix + 7);
        temp3 = *(undefined4 *)((longlong)transformMatrix + 0x3c);
        *(undefined4 *)(objectList + 6) = *(undefined4 *)(transformMatrix + 6);
        *(undefined4 *)((longlong)objectList + 0x34) = temp1;
        *(undefined4 *)(objectList + 7) = temp2;
        *(undefined4 *)((longlong)objectList + 0x3c) = temp3;
        
        // 更新渲染状态
        FUN_180254610();
        *(byte *)(renderObject + 0x2e8) = *(byte *)(renderObject + 0x2e8) | RENDER_STATE_DIRTY_FLAG;
        
        // 检查是否需要更新渲染管线
        if (((*(uint *)(renderObject + 0x2ac) & RENDER_STATE_FLAG_MASK) == 0) && 
            (*(longlong *)(renderObject + 0x20) != 0)) {
            FUN_1801b01f0(*(longlong *)(renderObject + 0x20), renderObject);
        }
        
        // 处理所有渲染对象
        objectCount = (int)(*(longlong *)(renderObject + 0x1c8) - *(longlong *)(renderObject + 0x1c0) >> 3);
        if (0 < objectCount) {
            objectIterator = 0;
            do {
                currentObject = *(longlong *)(*(longlong *)(renderObject + 0x1c0) + objectIterator * 8);
                
                // 检查对象是否可以进行变换
                if ((((*(longlong *)(renderObject + 0x20) == 0) ||
                     (*(char *)(*(longlong *)(renderObject + 0x20) + 0x2a62) == '\0')) ||
                    (*(longlong **)(currentObject + 0x270) == (longlong *)0x0)) ||
                   ((isRenderReady = (**(code **)(**(longlong **)(currentObject + 0x270) + 0x70))(), 
                     isRenderReady == '\0' ||
                    (isRenderReady = (**(code **)(**(longlong **)(currentObject + 0x270) + 0x78))(), 
                     isRenderReady == '\0')))) {
                    canTransform = false;
                }
                else {
                    canTransform = true;
                }
                
                if (!canTransform) {
                    // 获取当前矩阵数据
                    transformX = *(float *)(renderObject + 0x70);
                    transformY = *(float *)(renderObject + 0x74);
                    transformZ = *(float *)(renderObject + 0x78);
                    transformW = *(float *)(renderObject + 0x7c);
                    scaleX = *(float *)(renderObject + 0x80);
                    scaleY = *(float *)(renderObject + 0x84);
                    scaleZ = *(float *)(renderObject + 0x88);
                    scaleW = *(float *)(renderObject + 0x8c);
                    rotationX = *(float *)(renderObject + 0x90);
                    rotationY = *(float *)(renderObject + 0x94);
                    rotationZ = *(float *)(renderObject + 0x98);
                    rotationW = *(float *)(renderObject + 0x9c);
                    
                    // 获取对象矩阵数据
                    matrix1[0] = *(float *)(currentObject + 0x34);
                    matrix1[1] = *(float *)(currentObject + 0x30);
                    matrix1[2] = *(float *)(currentObject + 0x38);
                    matrix2[0] = *(float *)(currentObject + 0x44);
                    matrix3[0] = *(float *)(currentObject + 0x54);
                    matrix4[0] = *(float *)(currentObject + 100);
                    matrix2[1] = *(float *)(currentObject + 0x40);
                    matrix2[2] = *(float *)(currentObject + 0x48);
                    matrix3[1] = *(float *)(currentObject + 0x50);
                    matrix3[2] = *(float *)(currentObject + 0x58);
                    matrix3[3] = *(float *)(currentObject + 0x60);
                    matrix4[1] = *(float *)(currentObject + 0x68);
                    
                    translationX = *(float *)(renderObject + 0xa0);
                    translationY = *(float *)(renderObject + 0xa4);
                    translationZ = *(float *)(renderObject + 0xa8);
                    translationW = *(float *)(renderObject + 0xac);
                    
                    // 执行矩阵乘法运算
                    *(float *)(currentObject + 0x70) = matrix1[0] * scaleX + matrix1[1] * transformX + matrix1[2] * rotationX;
                    *(float *)(currentObject + 0x74) = matrix1[0] * scaleY + matrix1[1] * transformY + matrix1[2] * rotationY;
                    *(float *)(currentObject + 0x78) = matrix1[0] * scaleZ + matrix1[1] * transformZ + matrix1[2] * rotationZ;
                    *(float *)(currentObject + 0x7c) = matrix1[0] * scaleW + matrix1[1] * transformW + matrix1[2] * rotationW;
                    
                    *(float *)(currentObject + 0x80) = matrix2[0] * scaleX + matrix2[1] * transformX + matrix2[2] * rotationX;
                    *(float *)(currentObject + 0x84) = matrix2[0] * scaleY + matrix2[1] * transformY + matrix2[2] * rotationY;
                    *(float *)(currentObject + 0x88) = matrix2[0] * scaleZ + matrix2[1] * transformZ + matrix2[2] * rotationZ;
                    *(float *)(currentObject + 0x8c) = matrix2[0] * scaleW + matrix2[1] * transformW + matrix2[2] * rotationW;
                    
                    *(float *)(currentObject + 0x90) = matrix3[0] * scaleX + matrix3[1] * transformX + matrix3[2] * rotationX;
                    *(float *)(currentObject + 0x94) = matrix3[0] * scaleY + matrix3[1] * transformY + matrix3[2] * rotationY;
                    *(float *)(currentObject + 0x98) = matrix3[0] * scaleZ + matrix3[1] * transformZ + matrix3[2] * rotationZ;
                    *(float *)(currentObject + 0x9c) = matrix3[0] * scaleW + matrix3[1] * transformW + matrix3[2] * rotationW;
                    
                    *(float *)(currentObject + 0xa0) = matrix4[0] * scaleX + matrix3[3] * transformX + matrix4[1] * rotationX + translationX;
                    *(float *)(currentObject + 0xa4) = matrix4[0] * scaleY + matrix3[3] * transformY + matrix4[1] * rotationY + translationY;
                    *(float *)(currentObject + 0xa8) = matrix4[0] * scaleZ + matrix3[3] * transformZ + matrix4[1] * rotationZ + translationZ;
                    *(float *)(currentObject + 0xac) = matrix4[0] * scaleW + matrix3[3] * transformW + matrix4[1] * rotationW + translationW;
                    
                    // 更新对象变换状态
                    FUN_1802eace0(currentObject);
                }
                objectIterator = objectIterator + 1;
            } while (objectIterator < objectCount);
        }
        return;
    }
    return;
}

/**
 * 获取渲染资源句柄
 * @param resourceId 资源ID
 * @param resourceData 资源数据指针
 * @return 资源句柄，失败返回-1
 */
undefined4 GetRenderResourceHandle(undefined8 resourceId, longlong resourceData)
{
    longlong *resourceManager;
    undefined *resourceName;
    longlong managerHandle;
    undefined8 stackData;
    
    if (*(int *)(resourceData + 0x10) != 0) {
        managerHandle = g_RenderContextManager + 0x50;
        stackData = resourceId;
        resourceManager = (longlong *)FUN_180058080(managerHandle, &stackData, resourceData);
        if (*resourceManager != managerHandle) {
            return *(undefined4 *)(*resourceManager + 0x40);
        }
        resourceName = &DAT_18098bc73;
        if (*(undefined **)(resourceData + 8) != (undefined *)0x0) {
            resourceName = *(undefined **)(resourceData + 8);
        }
        FUN_180627020(&g_UnknownMatrixData, resourceName);
    }
    return 0xffffffff;
}

/**
 * 重置渲染资源指针
 * @param resourcePointer 资源指针
 * @return 重置后的资源指针
 */
longlong * ResetRenderResourcePointer(longlong *resourcePointer)
{
    longlong *tempPointer;
    
    *resourcePointer = 0;
    tempPointer = (longlong *)*resourcePointer;
    *resourcePointer = 0;
    if (tempPointer != (longlong *)0x0) {
        (**(code **)(*tempPointer + 0x38))();
    }
    *(undefined4 *)(resourcePointer + 1) = 0;
    return resourcePointer;
}

/**
 * 清理渲染资源
 * @param resourcePointer 资源指针
 */
void CleanupRenderResource(longlong *resourcePointer)
{
    longlong *tempPointer;
    
    tempPointer = (longlong *)*resourcePointer;
    *resourcePointer = 0;
    if (tempPointer != (longlong *)0x0) {
        (**(code **)(*tempPointer + 0x38))();
    }
    if ((longlong *)*resourcePointer != (longlong *)0x0) {
        (**(code **)(*(longlong *)*resourcePointer + 0x38))();
    }
    return;
}

/**
 * 初始化渲染线程数据
 * @return 渲染线程数据指针
 */
undefined8 InitializeRenderThreadData(void)
{
    if (*(int *)(*(longlong *)((longlong)g_ThreadLocalStorage + (ulonglong)g_TLSIndex * 8) + 0x48) < g_RenderThreadData) {
        FUN_1808fcb90(&DAT_180d49128);
        if (g_RenderThreadData == INVALID_HANDLE) {
            FUN_18058f390(0x180d48f30);
            FUN_1808fc820(&g_UnknownRenderState);
            FUN_1808fcb30(&DAT_180d49128);
            return 0x180d48f30;
        }
    }
    return 0x180d48f30;
}

/**
 * 处理渲染队列数据
 * @param renderContext 渲染上下文
 * @param queueData 队列数据指针
 * @param queueIndex 队列索引
 */
void ProcessRenderQueueData(longlong renderContext, uint *queueData, char queueIndex)
{
    uint queueValue;
    uint *queuePointer;
    undefined1 stackBuffer[32];
    uint temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8;
    ulonglong stackChecksum;
    
    stackChecksum = DAT_180bf00a8 ^ (ulonglong)stackBuffer;
    if ((*(byte *)(renderContext + 0xa8) & 1) == 0) {
        FUN_1802fac00(renderContext, *(longlong *)(renderContext + 0x10) + 0x70, 0xbf800000);
    }
    queuePointer = (uint *)((longlong)queueIndex * 0x100 + *(longlong *)(renderContext + 0x18));
    
    // 加锁处理队列数据
    do {
        LOCK();
        queueValue = *queuePointer;
        *queuePointer = *queuePointer | 1;
        UNLOCK();
    } while ((queueValue & 1) != 0);
    
    // 复制队列数据
    temp1 = queuePointer[1];
    temp2 = queuePointer[2];
    temp3 = queuePointer[3];
    temp4 = queuePointer[4];
    temp5 = queuePointer[5];
    temp6 = queuePointer[6];
    temp7 = queuePointer[7];
    temp8 = queuePointer[8];
    *queuePointer = 0;
    *queueData = temp1;
    queueData[1] = temp2;
    queueData[2] = temp3;
    queueData[3] = temp4;
    queueData[4] = temp5;
    queueData[5] = temp6;
    queueData[6] = temp7;
    queueData[7] = temp8;
    
    // 处理完成后解锁
    FUN_1808fc050(stackChecksum ^ (ulonglong)stackBuffer);
}

/**
 * 计算3D变换矩阵
 * @param sourceMatrix 源矩阵
 * @param destMatrix 目标矩阵
 * @param transformVector 变换向量
 * @return 目标矩阵指针
 */
float * Calculate3DTransformMatrix(float *sourceMatrix, float *destMatrix, float *transformVector)
{
    float vecX, vecY, vecZ;
    float srcX, srcY, srcZ;
    float transX, transY, transZ;
    float rotX, rotY, rotZ;
    
    vecY = transformVector[1];
    srcY = sourceMatrix[4];
    srcZ = sourceMatrix[5];
    vecX = *transformVector;
    vecZ = transformVector[2];
    rotX = transformVector[4];
    rotY = transformVector[5];
    rotZ = sourceMatrix[5];
    transZ = sourceMatrix[1];
    
    // 计算变换矩阵
    *destMatrix = vecX * *sourceMatrix + vecY * sourceMatrix[1];
    destMatrix[1] = vecX * srcY + vecY * srcZ;
    destMatrix[2] = vecZ;
    destMatrix[3] = MAX_FLOAT_VALUE;
    
    vecY = transformVector[6];
    srcZ = transformVector[8];
    vecX = *sourceMatrix;
    destMatrix[4] = rotX * *sourceMatrix + rotY * transZ;
    destMatrix[5] = rotX * srcY + rotY * rotZ;
    destMatrix[6] = vecY;
    destMatrix[7] = MAX_FLOAT_VALUE;
    
    vecY = transformVector[9];
    vecZ = sourceMatrix[5];
    rotX = transformVector[10];
    destMatrix[8] = srcZ * vecX + vecY * sourceMatrix[1];
    destMatrix[9] = srcZ * srcY + vecY * vecZ;
    destMatrix[10] = rotX;
    destMatrix[0xb] = MAX_FLOAT_VALUE;
    
    return destMatrix;
}

/**
 * 应用矩阵变换
 * @param transformMatrix 变换矩阵
 * @param destMatrix 目标矩阵
 * @param positionVector 位置向量
 * @return 目标矩阵指针
 */
float * ApplyMatrixTransform(undefined4 *transformMatrix, float *destMatrix, float *positionVector)
{
    float posX, posY, posZ;
    undefined4 tempMatrix[16];
    float resultMatrix[16];
    
    // 复制变换矩阵数据
    tempMatrix[0] = *transformMatrix;
    tempMatrix[1] = transformMatrix[1];
    tempMatrix[2] = transformMatrix[2];
    tempMatrix[5] = transformMatrix[5];
    tempMatrix[4] = transformMatrix[4];
    tempMatrix[8] = transformMatrix[8];
    tempMatrix[6] = transformMatrix[6];
    tempMatrix[10] = transformMatrix[10];
    tempMatrix[9] = transformMatrix[9];
    tempMatrix[13] = transformMatrix[0xd];
    tempMatrix[12] = transformMatrix[0xc];
    tempMatrix[14] = transformMatrix[0xe];
    tempMatrix[15] = 0x3f800000;  // 1.0f
    tempMatrix[3] = 0;
    tempMatrix[7] = 0;
    tempMatrix[11] = 0;
    
    // 计算矩阵变换
    FUN_1805351a0(&tempMatrix[0], &resultMatrix[0]);
    
    posX = positionVector[2];
    posY = *positionVector;
    posZ = positionVector[1];
    
    // 应用变换到目标矩阵
    *destMatrix = posZ * resultMatrix[1] + posY * resultMatrix[0] + posX * resultMatrix[2] + resultMatrix[3];
    destMatrix[1] = resultMatrix[4] * posY + resultMatrix[5] * posZ + resultMatrix[6] * posX + resultMatrix[7];
    destMatrix[2] = resultMatrix[8] * posY + resultMatrix[9] * posZ + resultMatrix[10] * posX + resultMatrix[11];
    destMatrix[3] = resultMatrix[12] * posY + resultMatrix[13] * posZ + resultMatrix[14] * posX + resultMatrix[15];
    
    return destMatrix;
}

/**
 * 清理渲染缓冲区
 */
void CleanupRenderBuffer(void)
{
    undefined4 bufferData;
    
    FUN_1808fd400(bufferData);
}

/**
 * 锁定渲染上下文
 * @param renderContext 渲染上下文
 * @param lockData 锁定数据
 * @param timeout 超时时间
 * @param lockFlag 锁定标志
 * @return 锁定后的资源数据
 */
undefined8 LockRenderContext(longlong renderContext, undefined8 lockData, ulonglong timeout, undefined8 lockFlag)
{
    int lockResult;
    
    if ((*(byte *)(renderContext + 0xa8) & 1) == 0) {
        lockResult = _Mtx_lock(renderContext + 0xe0, lockData, timeout, lockFlag, MUTEX_LOCK_TIMEOUT);
        if (lockResult != 0) {
            __Throw_C_error_std__YAXH_Z(lockResult);
        }
        if ((*(byte *)(renderContext + 0xa8) & 1) == 0) {
            FUN_1802fac00(renderContext, *(longlong *)(renderContext + 0x10) + 0x70, 0xbf800000);
        }
        lockResult = _Mtx_unlock(renderContext + 0xe0);
        if (lockResult != 0) {
            __Throw_C_error_std__YAXH_Z(lockResult);
        }
    }
    FUN_1801c15d0(renderContext, lockData, timeout & 0xff);
    return lockData;
}

/**
 * 释放渲染资源
 * @param resourceId 资源ID
 * @param resourceFlag 资源标志
 */
void ReleaseRenderResource(undefined8 resourceId, undefined4 resourceFlag)
{
    FUN_1808fd400(resourceFlag);
}

/**
 * 计算矩阵逆矩阵
 * @param sourceMatrix 源矩阵
 * @param destMatrix 目标矩阵
 */
void CalculateMatrixInverse(float *sourceMatrix, float *destMatrix)
{
    float scaleX, scaleY, scaleZ;
    float rotX, rotY, rotZ;
    float transX, transY, transZ;
    float determinant;
    
    scaleZ = sourceMatrix[10];
    scaleY = sourceMatrix[1];
    rotZ = sourceMatrix[0xd];
    destMatrix[2] = MATRIX_SCALE_FACTOR;
    destMatrix[3] = MATRIX_SCALE_FACTOR;
    scaleX = sourceMatrix[4];
    transZ = sourceMatrix[0xc];
    
    // 计算行列式和逆矩阵元素
    rotY = scaleY * scaleZ;
    rotZ = sourceMatrix[5] * scaleZ;
    transX = *sourceMatrix;
    destMatrix[1] = -rotY;
    rotX = sourceMatrix[5];
    *destMatrix = rotZ;
    destMatrix[4] = -(scaleX * scaleZ);
    destMatrix[5] = transX * scaleZ;
    destMatrix[6] = MATRIX_SCALE_FACTOR;
    destMatrix[7] = MATRIX_SCALE_FACTOR;
    destMatrix[8] = MATRIX_SCALE_FACTOR;
    destMatrix[9] = MATRIX_SCALE_FACTOR;
    
    determinant = transX * rotX - scaleX * scaleY;
    destMatrix[0xb] = MATRIX_SCALE_FACTOR;
    rotX = -(scaleX * -(scaleZ * rotZ)) - transZ * rotZ;
    destMatrix[10] = determinant;
    destMatrix[0xc] = rotX;
    transZ = transZ * rotY + transX * -(scaleZ * rotZ);
    rotZ = sourceMatrix[0xe] * scaleY * scaleX - sourceMatrix[0xe] * sourceMatrix[5] * transX;
    destMatrix[0xd] = transZ;
    scaleZ = transX * *destMatrix + scaleX * destMatrix[1];
    destMatrix[0xe] = rotZ;
    scaleY = transX * rotZ - scaleX * rotY;
    destMatrix[0xf] = scaleY;
    
    // 如果行列式不为1，进行归一化
    if (scaleZ != 1.0) {
        scaleZ = 1.0 / scaleZ;
        *destMatrix = scaleZ * *destMatrix;
        destMatrix[1] = scaleZ * destMatrix[1];
        destMatrix[5] = scaleZ * destMatrix[5];
        destMatrix[4] = scaleZ * destMatrix[4];
        destMatrix[10] = determinant * scaleZ;
        destMatrix[0xc] = rotX * scaleZ;
        destMatrix[0xd] = transZ * scaleZ;
        destMatrix[0xe] = rotZ * scaleZ;
        destMatrix[0xf] = scaleY * scaleZ;
    }
    return;
}

/**
 * 应用矩阵变换到向量
 * @param vector 向量数据
 * @param transformMatrix 变换矩阵
 */
void ApplyMatrixToVector(float *vector, undefined4 *transformMatrix)
{
    float vecX, vecY, vecZ;
    float matrixResult[16];
    undefined4 tempMatrix[16];
    
    // 复制变换矩阵数据
    tempMatrix[0] = *transformMatrix;
    tempMatrix[1] = transformMatrix[1];
    tempMatrix[2] = transformMatrix[2];
    tempMatrix[5] = transformMatrix[5];
    tempMatrix[4] = transformMatrix[4];
    tempMatrix[8] = transformMatrix[8];
    tempMatrix[6] = transformMatrix[6];
    tempMatrix[10] = transformMatrix[10];
    tempMatrix[9] = transformMatrix[9];
    tempMatrix[13] = transformMatrix[0xd];
    tempMatrix[12] = transformMatrix[0xc];
    tempMatrix[14] = transformMatrix[0xe];
    tempMatrix[15] = 0x3f800000;  // 1.0f
    tempMatrix[3] = 0;
    tempMatrix[7] = 0;
    tempMatrix[11] = 0;
    
    // 计算矩阵变换
    FUN_1805351a0(&tempMatrix[0], &matrixResult[0]);
    
    vecY = vector[1];
    vecX = *vector;
    vecZ = vector[2];
    
    // 应用变换到向量
    vector[3] = 1.0;
    *vector = vecX * matrixResult[0] + vecY * matrixResult[4] + vecZ * matrixResult[8] + matrixResult[12];
    vector[1] = vecX * matrixResult[1] + vecY * matrixResult[5] + vecZ * matrixResult[9] + matrixResult[13];
    vector[2] = vecX * matrixResult[2] + vecY * matrixResult[6] + vecZ * matrixResult[10] + matrixResult[14];
    vector[3] = vecX * matrixResult[3] + vecY * matrixResult[7] + vecZ * matrixResult[11] + matrixResult[15];
    
    vector[7] = 1.0;
    vecY = vector[4];
    vecX = vector[5];
    vecZ = vector[6];
    vector[4] = vecX * matrixResult[0] + vecY * matrixResult[4] + vecZ * matrixResult[8] + matrixResult[12];
    vector[5] = vecX * matrixResult[1] + vecY * matrixResult[5] + vecZ * matrixResult[9] + matrixResult[13];
    vector[6] = vecX * matrixResult[2] + vecY * matrixResult[6] + vecZ * matrixResult[10] + matrixResult[14];
    vector[7] = vecX * matrixResult[3] + vecY * matrixResult[7] + vecZ * matrixResult[11] + matrixResult[15];
    
    return;
}

/**
 * 缩放矩阵
 * @param sourceMatrix 源矩阵
 * @param destMatrix 目标矩阵
 * @param scaleFactor 缩放因子
 * @return 目标矩阵指针
 */
float * ScaleMatrix(float *sourceMatrix, float *destMatrix, float scaleFactor)
{
    float scaleX, scaleY, scaleZ;
    float rotX, rotY, rotZ;
    float transX, transY, transZ;
    float vecX, vecY, vecZ;
    
    scaleFactor = 1.0 / scaleFactor;
    scaleX = *sourceMatrix;
    scaleY = sourceMatrix[1];
    rotX = sourceMatrix[4];
    rotY = sourceMatrix[5];
    transZ = sourceMatrix[9];
    transX = sourceMatrix[10];
    vecX = sourceMatrix[2];
    vecY = sourceMatrix[6];
    
    // 应用缩放因子到矩阵元素
    destMatrix[8] = scaleFactor * sourceMatrix[8];
    destMatrix[9] = scaleFactor * transZ;
    destMatrix[10] = scaleFactor * transX;
    destMatrix[0xb] = MAX_FLOAT_VALUE;
    *destMatrix = scaleFactor * scaleX;
    destMatrix[1] = scaleFactor * scaleY;
    destMatrix[2] = scaleFactor * vecX;
    destMatrix[3] = MAX_FLOAT_VALUE;
    destMatrix[4] = scaleFactor * rotX;
    destMatrix[5] = scaleFactor * rotY;
    destMatrix[6] = scaleFactor * vecY;
    destMatrix[7] = MAX_FLOAT_VALUE;
    
    return destMatrix;
}

/**
 * 添加渲染资源到队列
 * @param resourceQueue 资源队列
 * @param resourceData 资源数据
 * @return 资源队列指针
 */
longlong * AddResourceToQueue(longlong *resourceQueue, longlong *resourceData)
{
    undefined8 resourceHandle;
    longlong *resourcePointer;
    longlong *queuePointer;
    longlong queueSize;
    longlong *newQueue;
    longlong newSize;
    longlong *tempPointer;
    
    queuePointer = (longlong *)0x0;
    resourceHandle = FUN_18062b1e0(DAT_180c8ed18, 0x98d9e0, 0x10, 8, 0, MUTEX_LOCK_TIMEOUT);
    resourcePointer = (longlong *)FUN_1804f2420(resourceHandle);
    *resourceData = (longlong)resourcePointer;
    
    if (resourcePointer != (longlong *)0x0) {
        (**(code **)(*resourcePointer + 0x28))(resourcePointer);
    }
    
    newSize = 1;
    if (*resourceQueue == 0) {
        resourcePointer = (longlong *)*resourceData;
        if (resourcePointer != (longlong *)0x0) {
            (**(code **)(*resourcePointer + 0x28))(resourcePointer);
        }
        tempPointer = (longlong *)*resourceQueue;
        *resourceQueue = (longlong)resourcePointer;
        if (tempPointer != (longlong *)0x0) {
            (**(code **)(*tempPointer + 0x38))();
        }
    }
    
    resourcePointer = (longlong *)resourceQueue[2];
    if (resourcePointer < (longlong *)resourceQueue[3]) {
        resourceQueue[2] = (longlong)(resourcePointer + 1);
        queuePointer = (longlong *)*resourceData;
        *resourcePointer = (longlong)queuePointer;
        if (queuePointer != (longlong *)0x0) {
            (**(code **)(*queuePointer + 0x28))();
        }
    }
    else {
        tempPointer = (longlong *)resourceQueue[1];
        queueSize = (longlong)resourcePointer - (longlong)tempPointer >> 3;
        if ((queueSize == 0) || (newSize = queueSize * 2, queuePointer = queuePointer, newSize != 0)) {
            queuePointer = (longlong *)FUN_18062b420(DAT_180c8ed18, newSize * 8, (char)resourceQueue[4]);
            resourcePointer = (longlong *)resourceQueue[2];
            tempPointer = (longlong *)resourceQueue[1];
            queuePointer = queuePointer;
        }
        
        // 复制现有队列数据
        for (; tempPointer != resourcePointer; tempPointer = tempPointer + 1) {
            *queuePointer = *tempPointer;
            *tempPointer = 0;
            queuePointer = queuePointer + 1;
        }
        
        // 添加新资源到队列
        resourcePointer = (longlong *)*resourceData;
        *queuePointer = (longlong)resourcePointer;
        if (resourcePointer != (longlong *)0x0) {
            (**(code **)(*resourcePointer + 0x28))();
        }
        
        // 清理旧队列数据
        resourcePointer = (longlong *)resourceQueue[2];
        tempPointer = (longlong *)resourceQueue[1];
        if (tempPointer != resourcePointer) {
            do {
                if ((longlong *)*tempPointer != (longlong *)0x0) {
                    (**(code **)(*(longlong *)*tempPointer + 0x38))();
                }
                tempPointer = tempPointer + 1;
            } while (tempPointer != resourcePointer);
            tempPointer = (longlong *)resourceQueue[1];
        }
        
        if (tempPointer != (longlong *)0x0) {
            FUN_18064e900(tempPointer);
        }
        
        // 更新队列指针
        resourceQueue[1] = (longlong)queuePointer;
        resourceQueue[2] = (longlong)(queuePointer + 1);
        resourceQueue[3] = (longlong)(queuePointer + newSize);
    }
    
    return resourceData;
}

/**
 * 处理渲染队列事件
 * @param renderManager 渲染管理器
 * @param eventData 事件数据
 * @param eventFlag 事件标志
 */
void ProcessRenderQueueEvent(longlong *renderManager, undefined8 eventData, undefined8 eventFlag)
{
    undefined4 renderState;
    longlong renderContext;
    char isRenderReady;
    int lockResult;
    longlong queueIterator;
    longlong *queuePointer;
    
    renderContext = *renderManager;
    if (renderContext != 0) {
        isRenderReady = FUN_18055f260(eventFlag, &queuePointer, &g_UnknownResourceData);
        FUN_1804fe350(&g_UnknownRenderBuffer, isRenderReady, &g_UnknownShaderCache, &queuePointer);
        
        if ((((isRenderReady != '\0') && (-1 < (int)(uint)queuePointer)) &&
            ((int)(uint)queuePointer < *(int *)(renderContext + 0x87b31c))) &&
           (renderContext = (ulonglong)((uint)queuePointer & 0xf) * 0xbe0 +
            *(longlong *)(*(longlong *)(renderContext + 0x87b340) + (ulonglong)((uint)queuePointer >> 4) * 8),
            *(int *)(renderContext + 8) != 0)) {
            
            queueIterator = 0;
            if (((g_RenderState - 2U & 0xfffffffc) == 0) && (g_RenderState != 4)) {
                lockResult = _Mtx_lock(0x180c95528);
                if (lockResult != 0) {
                    __Throw_C_error_std__YAXH_Z(lockResult);
                }
                renderState = *(undefined4 *)(renderContext + 0xc);
                isRenderReady = FUN_180645c10(0x180c95578, 0, &g_UnknownShaderData);
                if ((isRenderReady != '\0') &&
                   (isRenderReady = FUN_180645c10(0x180c95578, 0x13, &g_UnknownTextureData), isRenderReady != '\0')) {
                    FUN_180645c10(0x180c95578, renderState, &g_UnknownResourceData);
                }
                
                // 清理渲染状态
                DAT_180c95b3c = DAT_180c95b3c & 0xffffffff00000000;
                lockResult = (int)(DAT_180c92ce0 - DAT_180c92cd8 >> 3);
                renderContext = DAT_180c92cd8;
                
                if (0 < lockResult) {
                    do {
                        queueIterator = *(longlong *)(renderContext + queueIterator * 8);
                        if ((queueIterator != 0) && (*(char *)(*(longlong *)(queueIterator + 0x58f8) + 0x1c) != '\0')) {
                            FUN_1805b59d0(queueIterator, 0x180c95578);
                            renderContext = DAT_180c92cd8;
                        }
                        queueIterator = queueIterator + 1;
                    } while (queueIterator < lockResult);
                }
                
                if (g_ShaderManager != 0) {
                    FUN_180567f30(DAT_180c92580, 0x180c95578);
                }
                
                DAT_180c95b3c = 0;
                memset(DAT_180c95b10, 0, (longlong)(DAT_180c95b08 >> 3));
            }
            
            *(undefined2 *)(renderContext + 0x3d1) = 0;
            if (*(longlong *)(*(longlong *)(renderContext + 0xe0) + 0x20) != 0) {
                FUN_180198980();
            }
            queuePointer = *(longlong **)(renderContext + 0xe0);
            *(undefined8 *)(renderContext + 0xe0) = 0;
            if (queuePointer != (longlong *)0x0) {
                (**(code **)(*queuePointer + 0x38))();
            }
            *(undefined8 *)(renderContext + 0xe8) = 0;
            return;
        }
    }
    return;
}

/**
 * 处理渲染队列清理事件
 */
void ProcessRenderQueueCleanupEvent(void)
{
    undefined4 renderState;
    longlong renderContext;
    char isRenderReady;
    int lockResult;
    longlong queueIterator;
    longlong unaff_RDI;
    uint queueData;
    
    isRenderReady = FUN_18055f260();
    FUN_1804fe350(&g_UnknownRenderBuffer, isRenderReady, &g_UnknownShaderCache, &queueData);
    
    if ((((isRenderReady != '\0') && (-1 < (int)queueData)) &&
        ((int)queueData < *(int *)(unaff_RDI + 0x87b31c))) &&
       (renderContext = (ulonglong)(queueData & 0xf) * 0xbe0 +
        *(longlong *)(*(longlong *)(unaff_RDI + 0x87b340) + (ulonglong)(queueData >> 4) * 8),
        *(int *)(renderContext + 8) != 0)) {
        
        queueIterator = 0;
        if (((g_RenderState - 2U & 0xfffffffc) == 0) && (g_RenderState != 4)) {
            lockResult = _Mtx_lock(0x180c95528);
            if (lockResult != 0) {
                __Throw_C_error_std__YAXH_Z(lockResult);
            }
            renderState = *(undefined4 *)(renderContext + 0xc);
            isRenderReady = FUN_180645c10(0x180c95578, 0, &g_UnknownShaderData);
            if ((isRenderReady != '\0') && 
                (isRenderReady = FUN_180645c10(0x180c95578, 0x13, &g_UnknownTextureData), isRenderReady != '\0')) {
                FUN_180645c10(0x180c95578, renderState, &g_UnknownResourceData);
            }
            
            // 清理渲染状态
            DAT_180c95b3c = DAT_180c95b3c & 0xffffffff00000000;
            lockResult = (int)(DAT_180c92ce0 - DAT_180c92cd8 >> 3);
            renderContext = DAT_180c92cd8;
            
            if (0 < lockResult) {
                do {
                    queueIterator = *(longlong *)(renderContext + queueIterator * 8);
                    if ((queueIterator != 0) && (*(char *)(*(longlong *)(queueIterator + 0x58f8) + 0x1c) != '\0')) {
                        FUN_1805b59d0(queueIterator, 0x180c95578);
                        renderContext = DAT_180c92cd8;
                    }
                    queueIterator = queueIterator + 1;
                } while (queueIterator < lockResult);
            }
            
            if (g_ShaderManager != 0) {
                FUN_180567f30(DAT_180c92580, 0x180c95578);
            }
            
            DAT_180c95b3c = 0;
            memset(DAT_180c95b10, 0, (longlong)(DAT_180c95b08 >> 3));
        }
        
        *(undefined2 *)(renderContext + 0x3d1) = 0;
        if (*(longlong *)(*(longlong *)(renderContext + 0xe0) + 0x20) != 0) {
            FUN_180198980();
        }
        
        queueData = *(longlong **)(renderContext + 0xe0);
        *(undefined8 *)(renderContext + 0xe0) = 0;
        if (queueData != (longlong *)0x0) {
            (**(code **)(*queueData + 0x38))();
        }
        *(undefined8 *)(renderContext + 0xe8) = 0;
        return;
    }
    return;
}

/**
 * 处理渲染队列重置事件
 */
void ProcessRenderQueueResetEvent(void)
{
    undefined4 renderState;
    longlong renderContext;
    longlong *queuePointer;
    char isRenderReady;
    int lockResult;
    longlong queueIterator;
    longlong unaff_RDI;
    uint queueData;
    
    if (((-1 < (int)queueData) && ((int)queueData < *(int *)(unaff_RDI + 0x87b31c))) &&
       (renderContext = (ulonglong)(queueData & 0xf) * 0xbe0 +
        *(longlong *)(*(longlong *)(unaff_RDI + 0x87b340) + (ulonglong)(queueData >> 4) * 8),
        *(int *)(renderContext + 8) != 0)) {
        
        queueIterator = 0;
        if (((g_RenderState - 2U & 0xfffffffc) == 0) && (g_RenderState != 4)) {
            lockResult = _Mtx_lock(0x180c95528);
            if (lockResult != 0) {
                __Throw_C_error_std__YAXH_Z(lockResult);
            }
            renderState = *(undefined4 *)(renderContext + 0xc);
            isRenderReady = FUN_180645c10(0x180c95578, 0, &g_UnknownShaderData);
            if ((isRenderReady != '\0') && 
                (isRenderReady = FUN_180645c10(0x180c95578, 0x13, &g_UnknownTextureData), isRenderReady != '\0')) {
                FUN_180645c10(0x180c95578, renderState, &g_UnknownResourceData);
            }
            
            // 清理渲染状态
            DAT_180c95b3c = DAT_180c95b3c & 0xffffffff00000000;
            lockResult = (int)(DAT_180c92ce0 - DAT_180c92cd8 >> 3);
            renderContext = DAT_180c92cd8;
            
            if (0 < lockResult) {
                do {
                    queueIterator = *(longlong *)(renderContext + queueIterator * 8);
                    if ((queueIterator != 0) && (*(char *)(*(longlong *)(queueIterator + 0x58f8) + 0x1c) != '\0')) {
                        FUN_1805b59d0(queueIterator, 0x180c95578);
                        renderContext = DAT_180c92cd8;
                    }
                    queueIterator = queueIterator + 1;
                } while (queueIterator < lockResult);
            }
            
            if (g_ShaderManager != 0) {
                FUN_180567f30(DAT_180c92580, 0x180c95578);
            }
            
            DAT_180c95b3c = 0;
            memset(DAT_180c95b10, 0, (longlong)(DAT_180c95b08 >> 3));
        }
        
        *(undefined2 *)(renderContext + 0x3d1) = 0;
        if (*(longlong *)(*(longlong *)(renderContext + 0xe0) + 0x20) != 0) {
            FUN_180198980();
        }
        queuePointer = *(longlong **)(renderContext + 0xe0);
        *(undefined8 *)(renderContext + 0xe0) = 0;
        if (queuePointer != (longlong *)0x0) {
            (**(code **)(*queuePointer + 0x38))();
        }
        *(undefined8 *)(renderContext + 0xe8) = 0;
        return;
    }
    return;
}

// 函数别名定义（保持向后兼容）
#define FUN_180534410 UpdateRenderTransformMatrix
#define FUN_1805344c0 GetRenderResourceHandle
#define FUN_180534540 ResetRenderResourcePointer
#define FUN_180534590 CleanupRenderResource
#define FUN_1805346e0 InitializeRenderThreadData
#define FUN_180534770 ProcessRenderQueueData
#define FUN_180534800 Calculate3DTransformMatrix
#define FUN_180534930 ApplyMatrixTransform
#define FUN_180534b00 CleanupRenderBuffer
#define FUN_180534d00 LockRenderContext
#define FUN_180535010 ReleaseRenderResource
#define FUN_1805351a0 CalculateMatrixInverse
#define FUN_1805353a0 ApplyMatrixToVector
#define FUN_180535610 ScaleMatrix
#define FUN_180535720 AddResourceToQueue
#define FUN_1805358d0 ProcessRenderQueueEvent
#define FUN_1805358ec ProcessRenderQueueCleanupEvent
#define FUN_180535925 ProcessRenderQueueResetEvent