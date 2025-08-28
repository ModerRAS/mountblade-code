#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 01_initialization_part049.c - 3 个函数

/**
 * 清理异常列表中的节点
 * 从异常列表中移除指定的节点，如果引用计数为0则触发清理
 * 
 * @param context 上下文指针，包含要清理的节点信息
 */
void CleanupExceptionListNode(int64_t context)

{
  int *refCount;
  void **nodePtr;
  int64_t nodeBase;
  uint64_t pageBase;
  
  // 获取要清理的节点指针
  nodePtr = *(void ***)(context + 0x28);
  if (nodePtr == (void **)0x0) {
    return;
  }
  
  // 计算页面基址和节点位置
  pageBase = (uint64_t)nodePtr & 0xffffffffffc00000;
  if (pageBase != 0) {
    nodeBase = pageBase + 0x80 + ((int64_t)nodePtr - pageBase >> 0x10) * 0x50;
    nodeBase = nodeBase - (uint64_t)*(uint *)(nodeBase + 4);
    
    // 检查是否是有效的异常列表节点
    if ((*(void ***)(pageBase + 0x70) == &ExceptionList) && (*(char *)(nodeBase + 0xe) == '\0')) {
      // 从链表中移除节点
      *nodePtr = *(void **)(nodeBase + 0x20);
      *(void **)(nodeBase + 0x20) = nodePtr;
      
      // 减少引用计数
      refCount = (int *)(nodeBase + 0x18);
      *refCount = *refCount - 1;
      if (*refCount == 0) {
        // 引用计数为0，触发清理
        SystemDataCleaner();
        return;
      }
    }
    else {
      // 处理异常情况
      func_0x00018064e870(pageBase,CONCAT71(0xff000000,*(void ***)(pageBase + 0x70) == &ExceptionList),
                          nodePtr,pageBase,0xfffffffffffffffe);
    }
  }
  return;
}



// 全局变量地址警告：以'_'开头的全局变量与同一地址的较小符号重叠

/**
 * 处理渲染对象的矩阵变换和渲染状态
 * 该函数负责设置对象的变换矩阵、材质参数和渲染状态，是核心渲染管线的一部分
 * 
 * @param rendererContext 渲染器上下文，包含渲染状态和对象信息
 * @param materialParams 材质参数指针，包含渲染所需的材质数据
 * @param transformMatrix 变换矩阵数组，包含16个浮点数用于3D变换
 * @param objectData 对象数据指针，包含要渲染的对象信息
 * @param renderState 渲染状态指针，包含当前渲染的状态信息
 * @return 渲染结果状态码
 */
uint64_t ProcessObjectRendering(int64_t rendererContext, uint *materialParams, float *transformMatrix, int64_t objectData,
                       int64_t renderState)

{
  // 矩阵运算相关变量
  float matrixElement1;
  float matrixElement2;
  float matrixElement3;
  float matrixElement4;
  float matrixElement5;
  
  // 材质和渲染状态变量
  uint materialFlags;
  uint renderState1;
  uint renderState2;
  
  // 输入矩阵元素
  float inputMatrix[16];
  
  // 变换后的矩阵元素
  float transformedMatrix[16];
  
  // 状态标志
  char renderReady;
  byte stateFlags;
  uint tempValue;
  
  // 主要变量
  uint64_t tempPointer;
  uint64_t result;
  uint64_t *renderBuffer;
  int64_t objectContext;
  int64_t sceneContext;
  int32_t *texturePtr;
  uint *counterPtr;
  byte visibilityFlags;
  char *dataBuffer;
  int frameIndex;
  uint64_t bufferOffset;
  uint *bufferPtr;
  bool isAllocated;
  
  // 栈变量
  int32_t tempStack[2];
  uint *materialParamsPtr;
  float *transformMatrixPtr;
  int64_t objectDataPtr;
  int32_t defaultParams[2];
  uint64_t bufferSize;
  uint64_t *renderData[2];
  int64_t renderContext;
  uint64_t transformResult1;
  uint64_t transformResult2;
  uint64_t transformResult3;
  uint64_t transformResult4;
  uint64_t transformResult5;
  uint64_t transformResult6;
  uint64_t transformResult7;
  uint64_t transformResult8;
  uint64_t transformResult9;
  uint64_t transformResult10;
  
  // 变换矩阵栈变量
  float transformedX1;
  float transformedY1;
  float transformedZ1;
  float transformedW1;
  float transformedX2;
  float transformedY2;
  float transformedZ2;
  float transformedW2;
  float transformedX3;
  float transformedY3;
  float transformedZ3;
  float transformedW3;
  float transformedX4;
  float transformedY4;
  float transformedZ4;
  float transformedW4;
  
  // 保存输入参数
  materialParamsPtr = materialParams;
  transformMatrixPtr = transformMatrix;
  objectDataPtr = objectData;
  
  // 初始化渲染器上下文（如果需要）
  if (*(char *)(rendererContext + 0xf9) == '\0') {
    tempPointer = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr, 0xc0, 8, 9);
    tempPointer = FUN_180084ea0(tempPointer);
    *(uint64_t *)(rendererContext + 0x1d8) = tempPointer;
    LOCK();
    *(int8_t *)(rendererContext + 0xf9) = 1;
    UNLOCK();
  }
  
  // 处理场景对象的渲染参数
  if ((char)*(byte *)(rendererContext + 0xfd) < '\0') {
    objectContext = *(int64_t *)(rendererContext + 0x1b8);
    tempPointer = *(uint64_t *)(objectContext + 0x290);
    *(uint64_t *)(rendererContext + 0x2a8) = *(uint64_t *)(objectContext + 0x288);
    *(uint64_t *)(rendererContext + 0x2b0) = tempPointer;
    tempValue = *(int32_t *)(objectContext + 0x29c);
    renderState1 = *(int32_t *)(objectContext + 0x2a0);
    renderState2 = *(int32_t *)(objectContext + 0x2a4);
    *(int32_t *)(rendererContext + 0x2b8) = *(int32_t *)(objectContext + 0x298);
    *(int32_t *)(rendererContext + 700) = tempValue;
    *(int32_t *)(rendererContext + 0x2c0) = renderState1;
    *(int32_t *)(rendererContext + 0x2c4) = renderState2;
  }
  
  // 检查材质标志是否匹配
  result = (uint64_t)*(uint *)(rendererContext + 0x270);
  if ((*materialParams & *(uint *)(rendererContext + 0x270)) == 0) goto skip_rendering;
  
  visibilityFlags = *(byte *)(rendererContext + 0xfd) & 0x20;
  objectContext = rendererContext;
  if (visibilityFlags == 0) {
    objectContext = func_0x000180085de0(*(uint64_t *)(rendererContext + 0x1b0));
  }
  
  // 检查对象是否可见
  if (*(int *)(objectContext + 0x200) == 0) {
check_visibility:
    if ((*(byte *)(rendererContext + 0x100) & 4) != 0) goto prepare_rendering;
    objectContext = *(int64_t *)(rendererContext + 0x1b8);
    result = 0;
    if (*(char *)(objectContext + 0x38c) == '\t') {
      result = func_0x00018022d300();
      *(char *)(objectContext + 0x38c) = (char)result;
      if ((char)result == '\t') goto prepare_rendering;
    }
skip_rendering:
    result = result & 0xffffffffffffff00;
  }
  else {
    objectContext = rendererContext;
    if (visibilityFlags == 0) {
      objectContext = func_0x000180085de0(*(uint64_t *)(rendererContext + 0x1b0));
    }
    if (*(int *)(objectContext + 0x1fc) * 3 == 0) goto check_visibility;
    
prepare_rendering:
    renderReady = func_0x0001800854e0(rendererContext);
    if ((renderReady == '\0') || (objectData == 0)) {
      FUN_18007b1e0(rendererContext, 0);
      if ((*(byte *)(rendererContext + 0xfe) & 4) == 0) {
        tempPointer = FUN_180077420(rendererContext, materialParams);
        visibilityFlags = (char)tempPointer << 2;
        stateFlags = visibilityFlags | *(byte *)(rendererContext + 0xfe) & 0xfb;
        result = CONCAT71((int7)((uint64_t)tempPointer >> 8), stateFlags);
        *(byte *)(rendererContext + 0xfe) = stateFlags;
        if ((visibilityFlags & 4) == 0) goto skip_rendering;
      }
      
      // 处理渲染队列
      materialFlags = *(uint *)(*(int64_t *)(rendererContext + 0x1b8) + 0x388);
      if (((materialFlags >> 0x19 & 1) != 0) ||
         ((*(int64_t *)(rendererContext + 600) != 0 && (0 < *(int *)(*(int64_t *)(rendererContext + 600) + 0x1c)))
         )) {
        frameIndex = *(int *)(system_main_module_state + 0x224);
        renderBuffer = *(uint64_t **)(rendererContext + 600);
        if (renderBuffer == (uint64_t *)0x0) {
          // 初始化渲染缓冲区
          renderBuffer = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr, 0x58, 8, 3);
          *(uint64_t *)((int64_t)renderBuffer + 0x2c) = 0xffffffffffffffff;
          *(int32_t *)(renderBuffer + 9) = 0xffffffff;
          *renderBuffer = 0;
          renderBuffer[2] = 0;
          renderBuffer[7] = 0;
          *(int32_t *)(renderBuffer + 5) = 0xffffffff;
          *(int32_t *)(renderBuffer + 4) = 0xffffffff;
          renderBuffer[3] = 0;
          *(int32_t *)(renderBuffer + 8) = 0;
          *(int32_t *)(renderBuffer + 1) = 0;
          *(int8_t *)((int64_t)renderBuffer + 0x44) = 0;
          *(int8_t *)((int64_t)renderBuffer + 0x24) = 0;
          *(uint64_t **)(rendererContext + 600) = renderBuffer;
        }
        
        transformMatrix = transformMatrix;
        if (*(int *)(renderBuffer + 4) != frameIndex) {
          *(int *)(renderBuffer + 4) = frameIndex;
          FUN_180079270(rendererContext, renderState);
          transformMatrix = transformMatrix;
          if (((byte)(materialFlags >> 0x19) & 1) != 0) {
            if ((*(uint *)(rendererContext + 0x100) & 0x800) != 0) {
              FUN_18007ee70(rendererContext);
            }
            
            // 处理渲染批处理
            renderContext = system_parameter_buffer + 0x5868;
            counterPtr = (uint *)((int64_t)*(int *)(system_parameter_buffer + 0x6a78) * 0x908 + renderContext);
            LOCK();
            materialFlags = *counterPtr;
            *counterPtr = *counterPtr + 1;
            UNLOCK();
            result = (uint64_t)(materialFlags >> 9);
            bufferOffset = (uint64_t)(materialFlags >> 9);
            dataBuffer = (char *)((int64_t)counterPtr + bufferOffset + 0x808);
            bufferPtr = counterPtr + (result + 1) * 2;
            bufferSize = result;
            
            // 分配渲染缓冲区
            do {
              frameIndex = (int)bufferOffset;
              if (*(int64_t *)bufferPtr == 0) {
                objectContext = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr, 0xc000, 0x25);
                LOCK();
                isAllocated = *(int64_t *)(counterPtr + (int64_t)frameIndex * 2 + 2) == 0;
                if (isAllocated) {
                  *(int64_t *)(counterPtr + (int64_t)frameIndex * 2 + 2) = objectContext;
                }
                UNLOCK();
                if (isAllocated) {
                  FUN_1800e94a0(counterPtr, frameIndex << 9);
                  LOCK();
                  *(int8_t *)((int64_t)counterPtr + (int64_t)frameIndex + 0x808) = 0;
                  UNLOCK();
                  result = bufferSize;
                }
                else {
                  if (objectContext != 0) {
                    // 警告：子程序不返回
                    CoreEngineMemoryPoolCleaner();
                  }
                  do {
                    result = bufferSize;
                  } while (*dataBuffer != '\0');
                }
              }
              else {
                do {
                } while (*dataBuffer != '\0');
              }
              dataBuffer = dataBuffer + 1;
              bufferOffset = (uint64_t)(frameIndex + 1);
              bufferPtr = bufferPtr + 2;
            } while ((int64_t)(dataBuffer + (-0x808 - (int64_t)counterPtr)) <= (int64_t)result);
            
            // 获取渲染数据
            renderBuffer = (uint64_t *)
                      (*(int64_t *)
                        ((int64_t)*(int *)(renderContext + 0x1210) * 0x908 + renderContext + 8 +
                        result * 8) + (uint64_t)(materialFlags - (materialFlags & 0xfffffe00)) * 0x60);
            objectContext = rendererContext;
            renderData[0] = renderBuffer;
            
            if ((*(byte *)(rendererContext + 0xfd) & 0x20) == 0) {
              objectContext = func_0x000180085de0(*(uint64_t *)(rendererContext + 0x1b0));
            }
            
            sceneContext = *(int64_t *)(rendererContext + 0x1b8);
            visibilityFlags = *(byte *)(sceneContext + 0x38c);
            if (visibilityFlags == 9) {
              visibilityFlags = func_0x00018022d300();
              *(byte *)(sceneContext + 0x38c) = visibilityFlags;
            }
            
            materialParams = materialParams;
            objectContext = *(int64_t *)(objectContext + 0x1e0);
            *renderBuffer = *(uint64_t *)(objectContext + (uint64_t)visibilityFlags * 0x18);
            renderBuffer[1] = *(uint64_t *)(objectContext + 8 + (uint64_t)visibilityFlags * 0x18);
            
            // 设置渲染参数
            *(int32_t *)(renderData[0] + 2) =
                 *(int32_t *)(*(int64_t *)(rendererContext + 600) + 0x2c);
            *(int32_t *)((int64_t)renderData[0] + 0x14) =
                 *(int32_t *)(*(int64_t *)(rendererContext + 600) + 0x4c);
            *(int *)(renderData[0] + 9) = (int)*(char *)(*(int64_t *)(rendererContext + 600) + 0x44);
            
            // 处理纹理参数
            if ((*(int64_t *)(rendererContext + 0x2d0) == 0) ||
               (*(int *)(*(int64_t *)(rendererContext + 0x2d0) + 0x14) == 0)) {
              tempValue = 0xffffffff;
            }
            else {
              tempValue = *(int32_t *)(rendererContext + 0x108);
            }
            *(int32_t *)(renderData[0] + 3) = tempValue;
            
            if ((*(int64_t *)(rendererContext + 0x2d0) == 0) ||
               (*(int *)(*(int64_t *)(rendererContext + 0x2d0) + 0x14) == 0)) {
              tempValue = 0xffffffff;
            }
            else {
              tempValue = *(int32_t *)(rendererContext + 0x10c);
            }
            *(int32_t *)((int64_t)renderData[0] + 0x1c) = tempValue;
            
            if ((*(int64_t *)(rendererContext + 0x2d0) == 0) ||
               (*(int *)(*(int64_t *)(rendererContext + 0x2d0) + 0x14) == 0)) {
              tempValue = 0xffffffff;
            }
            else {
              tempValue = *(int32_t *)(rendererContext + 0x110);
            }
            *(int32_t *)(renderData[0] + 4) = tempValue;
            
            // 设置渲染标志
            *(byte *)((int64_t)renderData[0] + 0x4e) = *(byte *)(rendererContext + 0xfe) >> 3 & 1;
            
            if (*(int *)(rendererContext + 0x108) != -1) {
              texturePtr = *(int32_t **)(rendererContext + 0x2d0);
              tempValue = texturePtr[1];
              renderState1 = texturePtr[2];
              renderState2 = texturePtr[3];
              *(int32_t *)(renderData[0] + 5) = *texturePtr;
              *(int32_t *)((int64_t)renderData[0] + 0x2c) = tempValue;
              *(int32_t *)(renderData[0] + 6) = renderState1;
              *(int32_t *)((int64_t)renderData[0] + 0x34) = renderState2;
              tempPointer = *(uint64_t *)(texturePtr + 6);
              renderData[0][7] = *(uint64_t *)(texturePtr + 4);
              renderData[0][8] = tempPointer;
            }
            
            *(int8_t *)((int64_t)renderData[0] + 0x4f) =
                 *(int8_t *)(*(int64_t *)(rendererContext + 600) + 0x24);
            objectContext = *(int64_t *)(rendererContext + 600);
            
            if (*(char *)(objectContext + 0x24) != '\0') {
              tempValue = *(int32_t *)(rendererContext + 0x2ac);
              renderState1 = *(int32_t *)(rendererContext + 0x2b0);
              renderState2 = *(int32_t *)(rendererContext + 0x2b4);
              *(int32_t *)(renderData[0] + 10) = *(int32_t *)(rendererContext + 0x2a8);
              *(int32_t *)((int64_t)renderData[0] + 0x54) = tempValue;
              *(int32_t *)(renderData[0] + 0xb) = renderState1;
              *(int32_t *)((int64_t)renderData[0] + 0x5c) = renderState2;
              objectContext = *(int64_t *)(rendererContext + 600);
            }
            
            *(bool *)((int64_t)renderData[0] + 0x4c) = *(int64_t *)(objectContext + 0x10) != 0;
            *(int8_t *)((int64_t)renderData[0] + 0x4d) = 1;
            
            if ((*(char *)(renderState + 0xc) != '\0') ||
               (0 < *(int *)(*(int64_t *)(rendererContext + 600) + 0x1c))) {
              *(int8_t *)((int64_t)renderData[0] + 0x4d) = 0;
            }
            
            // 处理材质参数
            if (*(uint **)(materialParams + 10) == (uint *)0x0) {
              defaultParams[0] = 0xffffffff;
              texturePtr = defaultParams;
              bufferPtr = materialParams;
            }
            else {
              tempStack[0] = 0xffffffff;
              texturePtr = tempStack;
              bufferPtr = *(uint **)(materialParams + 10);
            }
            
            FUN_180080e90(bufferPtr + 0xce2, texturePtr, renderData);
            transformMatrix = transformMatrix;
            objectData = objectData;
          }
        }
      }
    }
    
    // 处理矩阵变换
    if ((*(uint *)(rendererContext + 0x100) & 0x4000000) != 0) {
      // 读取输入矩阵
      inputMatrix[0] = *transformMatrix;
      inputMatrix[1] = transformMatrix[1];
      inputMatrix[2] = transformMatrix[2];
      inputMatrix[3] = transformMatrix[3];
      inputMatrix[4] = transformMatrix[4];
      inputMatrix[5] = transformMatrix[5];
      inputMatrix[6] = transformMatrix[6];
      inputMatrix[7] = transformMatrix[7];
      inputMatrix[8] = transformMatrix[8];
      inputMatrix[9] = transformMatrix[9];
      inputMatrix[10] = transformMatrix[10];
      inputMatrix[11] = transformMatrix[11];
      
      // 读取当前对象的变换矩阵
      matrixElement1 = *(float *)(rendererContext + 0x124);
      matrixElement2 = *(float *)(rendererContext + 0x120);
      matrixElement3 = *(float *)(rendererContext + 0x128);
      matrixElement4 = *(float *)(rendererContext + 0x134);
      matrixElement5 = *(float *)(rendererContext + 0x130);
      
      // 执行矩阵乘法第一行
      transformedX1 = matrixElement1 * inputMatrix[4] + matrixElement2 * inputMatrix[0] + matrixElement3 * inputMatrix[8];
      transformedY1 = matrixElement1 * inputMatrix[5] + matrixElement2 * inputMatrix[1] + matrixElement3 * inputMatrix[9];
      transformedZ1 = matrixElement1 * inputMatrix[6] + matrixElement2 * inputMatrix[2] + matrixElement3 * inputMatrix[10];
      transformedW1 = matrixElement1 * inputMatrix[7] + matrixElement2 * inputMatrix[3] + matrixElement3 * inputMatrix[11];
      
      // 读取第二行变换矩阵元素
      matrixElement1 = *(float *)(rendererContext + 0x138);
      matrixElement2 = *(float *)(rendererContext + 0x140);
      matrixElement3 = *(float *)(rendererContext + 0x144);
      
      // 执行矩阵乘法第二行
      transformedX2 = matrixElement4 * inputMatrix[4] + matrixElement5 * inputMatrix[0] + matrixElement1 * inputMatrix[8];
      transformedY2 = matrixElement4 * inputMatrix[5] + matrixElement5 * inputMatrix[1] + matrixElement1 * inputMatrix[9];
      transformedZ2 = matrixElement4 * inputMatrix[6] + matrixElement5 * inputMatrix[2] + matrixElement1 * inputMatrix[10];
      transformedW2 = matrixElement4 * inputMatrix[7] + matrixElement5 * inputMatrix[3] + matrixElement1 * inputMatrix[11];
      
      // 读取第三行变换矩阵元素
      matrixElement1 = *(float *)(rendererContext + 0x148);
      matrixElement4 = *(float *)(rendererContext + 0x154);
      matrixElement5 = *(float *)(rendererContext + 0x150);
      
      // 执行矩阵乘法第三行
      transformedX3 = matrixElement3 * inputMatrix[4] + matrixElement2 * inputMatrix[0] + matrixElement1 * inputMatrix[8];
      transformedY3 = matrixElement3 * inputMatrix[5] + matrixElement2 * inputMatrix[1] + matrixElement1 * inputMatrix[9];
      transformedZ3 = matrixElement3 * inputMatrix[6] + matrixElement2 * inputMatrix[2] + matrixElement1 * inputMatrix[10];
      transformedW3 = matrixElement3 * inputMatrix[7] + matrixElement2 * inputMatrix[3] + matrixElement1 * inputMatrix[11];
      
      // 读取第四行变换矩阵元素
      matrixElement1 = *(float *)(rendererContext + 0x158);
      
      // 执行矩阵乘法第四行（包括平移）
      transformedX4 = matrixElement4 * inputMatrix[4] + matrixElement5 * inputMatrix[0] + matrixElement1 * inputMatrix[8] + transformMatrix[12];
      transformedY4 = matrixElement4 * inputMatrix[5] + matrixElement5 * inputMatrix[1] + matrixElement1 * inputMatrix[9] + transformMatrix[13];
      transformedZ4 = matrixElement4 * inputMatrix[6] + matrixElement5 * inputMatrix[2] + matrixElement1 * inputMatrix[10] + transformMatrix[14];
      transformedW4 = matrixElement4 * inputMatrix[7] + matrixElement5 * inputMatrix[3] + matrixElement1 * inputMatrix[11] + transformMatrix[15];
      
      // 使用变换后的矩阵
      transformMatrix = &transformedX1;
    }
    
    // 应用变换矩阵
    FUN_180085190(&transformResult1, materialParams + 0xc, *(int8_t *)(rendererContext + 0xf7), transformMatrix);
    
    // 更新渲染状态
    materialFlags = materialParams[0x6f6];
    frameIndex = *(int *)(system_main_module_state + 0x224);
    
    // 检查是否需要更新帧索引
    if (((*(byte *)(rendererContext + 0xfd) & 1) == 0) &&
       ((*(int *)(rendererContext + 0x1d0) == frameIndex || (*(int *)(rendererContext + 0x1d0) == frameIndex - 1)))) {
      visibilityFlags = 0;
    }
    else {
      visibilityFlags = 1;
    }
    
    *(byte *)(rendererContext + 0xfd) = *(byte *)(rendererContext + 0xfd) & 0xfe | visibilityFlags;
    stateFlags = (byte)materialFlags & 0x20;
    
    // 如果需要，保存变换结果
    if ((stateFlags != 0) && (visibilityFlags != 0)) {
      *(uint64_t *)(rendererContext + 0x160) = transformResult1;
      *(uint64_t *)(rendererContext + 0x168) = transformResult2;
      *(uint64_t *)(rendererContext + 0x170) = transformResult3;
      *(uint64_t *)(rendererContext + 0x178) = transformResult4;
      *(uint64_t *)(rendererContext + 0x180) = transformResult5;
      *(uint64_t *)(rendererContext + 0x188) = transformResult6;
      *(uint64_t *)(rendererContext + 400) = transformResult7;
      *(uint64_t *)(rendererContext + 0x198) = transformResult8;
    }
    
    // 执行渲染操作
    result = FUN_18024a290(materialParams, rendererContext, &transformResult1, objectData, renderState);
    
    // 清理渲染状态
    *(byte *)(rendererContext + 0xfd) = *(byte *)(rendererContext + 0xfd) & 0xfe;
    *(int *)(rendererContext + 0x1d0) = frameIndex;
    
    // 恢复变换结果（如果需要）
    if (stateFlags != 0) {
      *(uint64_t *)(rendererContext + 0x160) = transformResult1;
      *(uint64_t *)(rendererContext + 0x168) = transformResult2;
      *(uint64_t *)(rendererContext + 0x170) = transformResult3;
      *(uint64_t *)(rendererContext + 0x178) = transformResult4;
      *(uint64_t *)(rendererContext + 0x180) = transformResult5;
      *(uint64_t *)(rendererContext + 0x188) = transformResult6;
      *(uint64_t *)(rendererContext + 400) = transformResult7;
      *(uint64_t *)(rendererContext + 0x198) = transformResult8;
    }
  }
  return result;
}



// 全局变量地址警告：以'_'开头的全局变量与同一地址的较小符号重叠



/**
 * 处理场景对象的渲染批处理
 * 这是一个简化的渲染函数，处理场景中对象的批量渲染，主要用于性能优化
 * 
 * @param rendererContext 渲染器上下文（通过寄存器传递）
 * @param sceneData 场景数据指针
 * @param transformMatrix 变换矩阵
 * @param renderState 渲染状态
 */
void ProcessSceneBatchRendering(void)

{
  uint renderFlags;
  float matrixElement1;
  float matrixElement2;
  float matrixElement3;
  float matrixElement4;
  float matrixElement5;
  uint renderState1;
  uint renderState2;
  
  // 输入矩阵元素
  float inputMatrix[16];
  
  // 变换后的矩阵元素
  float transformedMatrix[16];
  
  // 变换结果
  uint64_t transformResult1;
  uint64_t transformResult2;
  uint64_t transformResult3;
  uint64_t transformResult4;
  uint64_t transformResult5;
  uint64_t transformResult6;
  uint64_t transformResult7;
  uint64_t transformResult8;
  
  // 状态标志
  byte visibilityFlags1;
  byte visibilityFlags2;
  uint tempValue;
  
  // 主要变量
  uint64_t bufferSize;
  int64_t objectContext;
  int64_t sceneContext;
  int32_t *texturePtr;
  uint *counterPtr;
  char *dataBuffer;
  uint64_t *renderBuffer;
  float *transformMatrix;
  int frameIndex;
  uint64_t bufferOffset;
  uint *bufferPtr;
  bool isAllocated;
  
  // 栈变量
  int32_t tempStack;
  uint64_t stackSize;
  uint64_t *renderData;
  int64_t renderContext;
  uint64_t transformResult[8];
  
  // 变换矩阵栈变量
  float transformedX1;
  float transformedY1;
  float transformedZ1;
  float transformedW1;
  float transformedX2;
  float transformedY2;
  float transformedZ2;
  float transformedW2;
  float transformedX3;
  float transformedY3;
  float transformedZ3;
  float transformedW3;
  float transformedX4;
  float transformedY4;
  float transformedZ4;
  float transformedW4;
  
  // 输入栈变量
  int32_t stackParam1;
  int32_t stackParam2;
  int32_t stackParam3;
  int32_t stackParam4;
  int32_t stackParam5;
  int32_t stackParam6;
  int32_t stackParam7;
  int32_t stackParam8;
  int32_t stackParam9;
  int32_t stackParam10;
  int32_t stackParam11;
  int32_t stackParam12;
  int32_t stackParam13;
  int32_t stackParam14;
  int32_t stackParam15;
  int32_t stackParam16;
  int32_t stackParam17;
  int64_t sceneData;
  float *matrixPtr;
  uint64_t matrixParam;
  int64_t renderState;
  
  // 渲染器上下文（从寄存器获取）
  int64_t rendererContext;
  int renderCount;
  
  // 初始化变量
  rendererContext = unaff_RBX;
  renderCount = unaff_R12D;
  sceneData = in_stack_00000178;
  matrixPtr = in_stack_00000180;
  renderState = in_stack_00000190;
  
  // 检查零标志位，如果需要则执行渲染准备
  if (!in_ZF) {
    FUN_18007ee70();
  }
  
  // 设置渲染上下文
  renderContext = system_parameter_buffer + 0x5868;
  counterPtr = (uint *)((int64_t)*(int *)(system_parameter_buffer + 0x6a78) * 0x908 + renderContext);
  
  // 更新渲染计数器
  LOCK();
  renderFlags = *counterPtr;
  *counterPtr = *counterPtr + renderCount;
  UNLOCK();
  
  bufferSize = (uint64_t)(renderFlags >> 9);
  bufferOffset = (uint64_t)(renderFlags >> 9);
  dataBuffer = (char *)((int64_t)counterPtr + bufferOffset + 0x808);
  bufferPtr = counterPtr + (bufferSize + 1) * 2;
  stackSize = bufferSize;
  
  // 分配渲染缓冲区
  do {
    frameIndex = (int)bufferOffset;
    if (*(int64_t *)bufferPtr == 0) {
      objectContext = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr, 0xc000, 0x25);
      LOCK();
      isAllocated = *(int64_t *)(counterPtr + (int64_t)frameIndex * 2 + 2) == 0;
      if (isAllocated) {
        *(int64_t *)(counterPtr + (int64_t)frameIndex * 2 + 2) = objectContext;
      }
      UNLOCK();
      if (isAllocated) {
        FUN_1800e94a0(counterPtr, frameIndex << 9);
        LOCK();
        *(int8_t *)((int64_t)counterPtr + (int64_t)frameIndex + 0x808) = 0;
        UNLOCK();
        bufferSize = stackSize;
      }
      else {
        if (objectContext != 0) {
          // 警告：子程序不返回
          CoreEngineMemoryPoolCleaner();
        }
        do {
          bufferSize = stackSize;
        } while (*dataBuffer != '\0');
      }
    }
    else {
      do {
      } while (*dataBuffer != '\0');
    }
    dataBuffer = dataBuffer + 1;
    bufferOffset = (uint64_t)(frameIndex + 1);
    bufferPtr = bufferPtr + 2;
  } while ((int64_t)(dataBuffer + (-0x808 - (int64_t)counterPtr)) <= (int64_t)bufferSize);
  
  // 获取渲染数据
  renderBuffer = (uint64_t *)
            (*(int64_t *)
              ((int64_t)*(int *)(renderContext + 0x1210) * 0x908 + renderContext + 8 +
              bufferSize * 8) + (uint64_t)(renderFlags - (renderFlags & 0xfffffe00)) * 0x60);
  objectContext = rendererContext;
  renderData = renderBuffer;
  
  // 获取对象上下文
  if ((*(byte *)(rendererContext + 0xfd) & 0x20) == 0) {
    objectContext = func_0x000180085de0(*(uint64_t *)(rendererContext + 0x1b0));
  }
  
  sceneContext = *(int64_t *)(rendererContext + 0x1b8);
  visibilityFlags1 = *(byte *)(sceneContext + 0x38c);
  if (visibilityFlags1 == 9) {
    visibilityFlags1 = func_0x00018022d300();
    *(byte *)(sceneContext + 0x38c) = visibilityFlags1;
  }
  
  // 设置场景数据
  sceneContext = sceneData;
  objectContext = *(int64_t *)(objectContext + 0x1e0);
  *renderBuffer = *(uint64_t *)(objectContext + (uint64_t)visibilityFlags1 * 0x18);
  renderBuffer[1] = *(uint64_t *)(objectContext + 8 + (uint64_t)visibilityFlags1 * 0x18);
  
  // 设置渲染参数
  *(int32_t *)(renderData + 2) = *(int32_t *)(*(int64_t *)(rendererContext + 600) + 0x2c);
  *(int32_t *)((int64_t)renderData + 0x14) = *(int32_t *)(*(int64_t *)(rendererContext + 600) + 0x4c);
  *(int *)(renderData + 9) = (int)*(char *)(*(int64_t *)(rendererContext + 600) + 0x44);
  
  // 处理纹理参数
  if ((*(int64_t *)(rendererContext + 0x2d0) == 0) ||
     (*(int *)(*(int64_t *)(rendererContext + 0x2d0) + 0x14) == 0)) {
    tempValue = 0xffffffff;
  }
  else {
    tempValue = *(int32_t *)(rendererContext + 0x108);
  }
  *(int32_t *)(renderData + 3) = tempValue;
  
  if ((*(int64_t *)(rendererContext + 0x2d0) == 0) ||
     (*(int *)(*(int64_t *)(rendererContext + 0x2d0) + 0x14) == 0)) {
    tempValue = 0xffffffff;
  }
  else {
    tempValue = *(int32_t *)(rendererContext + 0x10c);
  }
  *(int32_t *)((int64_t)renderData + 0x1c) = tempValue;
  
  if ((*(int64_t *)(rendererContext + 0x2d0) == 0) ||
     (*(int *)(*(int64_t *)(rendererContext + 0x2d0) + 0x14) == 0)) {
    tempValue = 0xffffffff;
  }
  else {
    tempValue = *(int32_t *)(rendererContext + 0x110);
  }
  *(int32_t *)(renderData + 4) = tempValue;
  
  // 设置渲染标志
  *(byte *)((int64_t)renderData + 0x4e) = *(byte *)(rendererContext + 0xfe) >> 3 & 1;
  
  if (*(int *)(rendererContext + 0x108) != -1) {
    texturePtr = *(int32_t **)(rendererContext + 0x2d0);
    tempValue = texturePtr[1];
    renderState1 = texturePtr[2];
    renderState2 = texturePtr[3];
    *(int32_t *)(renderData + 5) = *texturePtr;
    *(int32_t *)((int64_t)renderData + 0x2c) = tempValue;
    *(int32_t *)(renderData + 6) = renderState1;
    *(int32_t *)((int64_t)renderData + 0x34) = renderState2;
    transformResult1 = *(uint64_t *)(texturePtr + 6);
    renderData[7] = *(uint64_t *)(texturePtr + 4);
    renderData[8] = transformResult1;
  }
  
  *(int8_t *)((int64_t)renderData + 0x4f) = *(int8_t *)(*(int64_t *)(rendererContext + 600) + 0x24);
  objectContext = *(int64_t *)(rendererContext + 600);
  
  if (*(char *)(objectContext + 0x24) != '\0') {
    tempValue = *(int32_t *)(rendererContext + 0x2ac);
    renderState1 = *(int32_t *)(rendererContext + 0x2b0);
    renderState2 = *(int32_t *)(rendererContext + 0x2b4);
    *(int32_t *)(renderData + 10) = *(int32_t *)(rendererContext + 0x2a8);
    *(int32_t *)((int64_t)renderData + 0x54) = tempValue;
    *(int32_t *)(renderData + 0xb) = renderState1;
    *(int32_t *)((int64_t)renderData + 0x5c) = renderState2;
    objectContext = *(int64_t *)(rendererContext + 600);
  }
  
  *(bool *)((int64_t)renderData + 0x4c) = *(int64_t *)(objectContext + 0x10) != 0;
  *(int8_t *)((int64_t)renderData + 0x4d) = 1;
  
  if ((*(char *)(renderState + 0xc) != '\0') ||
     (0 < *(int *)(*(int64_t *)(rendererContext + 600) + 0x1c))) {
    *(int8_t *)((int64_t)renderData + 0x4d) = 0;
  }
  
  // 处理材质参数
  if (*(int64_t *)(sceneData + 0x28) == 0) {
    tempStack = 0xffffffff;
    texturePtr = &tempStack;
    objectContext = sceneData;
  }
  else {
    stackParam17 = 0xffffffff;
    texturePtr = &stackParam17;
    objectContext = *(int64_t *)(sceneData + 0x28);
  }
  
  // 执行渲染操作
  FUN_180080e90(objectContext + 0x3388, texturePtr, &renderData);
  
  transformMatrix = matrixPtr;
  
  // 处理矩阵变换
  if ((*(uint *)(rendererContext + 0x100) & 0x4000000) != 0) {
    // 读取输入矩阵
    inputMatrix[0] = *matrixPtr;
    inputMatrix[1] = matrixPtr[1];
    inputMatrix[2] = matrixPtr[2];
    inputMatrix[3] = matrixPtr[3];
    inputMatrix[4] = matrixPtr[4];
    inputMatrix[5] = matrixPtr[5];
    inputMatrix[6] = matrixPtr[6];
    inputMatrix[7] = matrixPtr[7];
    inputMatrix[8] = matrixPtr[8];
    inputMatrix[9] = matrixPtr[9];
    inputMatrix[10] = matrixPtr[10];
    inputMatrix[11] = matrixPtr[11];
    
    // 读取当前对象的变换矩阵
    matrixElement1 = *(float *)(rendererContext + 0x124);
    matrixElement2 = *(float *)(rendererContext + 0x120);
    matrixElement3 = *(float *)(rendererContext + 0x128);
    matrixElement4 = *(float *)(rendererContext + 0x134);
    matrixElement5 = *(float *)(rendererContext + 0x130);
    
    // 执行矩阵乘法第一行
    transformedX1 = matrixElement1 * inputMatrix[4] + matrixElement2 * inputMatrix[0] + matrixElement3 * inputMatrix[8];
    transformedY1 = matrixElement1 * inputMatrix[5] + matrixElement2 * inputMatrix[1] + matrixElement3 * inputMatrix[9];
    transformedZ1 = matrixElement1 * inputMatrix[6] + matrixElement2 * inputMatrix[2] + matrixElement3 * inputMatrix[10];
    transformedW1 = matrixElement1 * inputMatrix[7] + matrixElement2 * inputMatrix[3] + matrixElement3 * inputMatrix[11];
    
    // 读取第二行变换矩阵元素
    matrixElement1 = *(float *)(rendererContext + 0x138);
    matrixElement2 = *(float *)(rendererContext + 0x140);
    matrixElement3 = *(float *)(rendererContext + 0x144);
    
    // 执行矩阵乘法第二行
    transformedX2 = matrixElement4 * inputMatrix[4] + matrixElement5 * inputMatrix[0] + matrixElement1 * inputMatrix[8];
    transformedY2 = matrixElement4 * inputMatrix[5] + matrixElement5 * inputMatrix[1] + matrixElement1 * inputMatrix[9];
    transformedZ2 = matrixElement4 * inputMatrix[6] + matrixElement5 * inputMatrix[2] + matrixElement1 * inputMatrix[10];
    transformedW2 = matrixElement4 * inputMatrix[7] + matrixElement5 * inputMatrix[3] + matrixElement1 * inputMatrix[11];
    
    // 读取第三行变换矩阵元素
    matrixElement1 = *(float *)(rendererContext + 0x148);
    matrixElement4 = *(float *)(rendererContext + 0x154);
    matrixElement5 = *(float *)(rendererContext + 0x150);
    
    // 执行矩阵乘法第三行
    transformedX3 = matrixElement3 * inputMatrix[4] + matrixElement2 * inputMatrix[0] + matrixElement1 * inputMatrix[8];
    transformedY3 = matrixElement3 * inputMatrix[5] + matrixElement2 * inputMatrix[1] + matrixElement1 * inputMatrix[9];
    transformedZ3 = matrixElement3 * inputMatrix[6] + matrixElement2 * inputMatrix[2] + matrixElement1 * inputMatrix[10];
    transformedW3 = matrixElement3 * inputMatrix[7] + matrixElement2 * inputMatrix[3] + matrixElement1 * inputMatrix[11];
    
    // 读取第四行变换矩阵元素
    matrixElement1 = *(float *)(rendererContext + 0x158);
    
    // 执行矩阵乘法第四行（包括平移）
    transformedX4 = matrixElement4 * inputMatrix[4] + matrixElement5 * inputMatrix[0] + matrixElement1 * inputMatrix[8] + matrixPtr[12];
    transformedY4 = matrixElement4 * inputMatrix[5] + matrixElement5 * inputMatrix[1] + matrixElement1 * inputMatrix[9] + matrixPtr[13];
    transformedZ4 = matrixElement4 * inputMatrix[6] + matrixElement5 * inputMatrix[2] + matrixElement1 * inputMatrix[10] + matrixPtr[14];
    transformedW4 = matrixElement4 * inputMatrix[7] + matrixElement5 * inputMatrix[3] + matrixElement1 * inputMatrix[11] + matrixPtr[15];
    
    // 使用变换后的矩阵
    transformMatrix = &transformedX1;
  }
  
  // 应用变换矩阵
  FUN_180085190(&transformResult[0], sceneContext + 0x30, *(int8_t *)(rendererContext + 0xf7), transformMatrix);
  
  // 保存变换结果
  transformResult8 = transformResult[7];
  transformResult7 = transformResult[6];
  transformResult6 = transformResult[5];
  transformResult5 = transformResult[4];
  transformResult4 = transformResult[3];
  transformResult3 = transformResult[2];
  transformResult2 = transformResult[1];
  transformResult1 = transformResult[0];
  
  visibilityFlags1 = *(byte *)(sceneContext + 0x1bd8);
  frameIndex = *(int *)(system_main_module_state + 0x224);
  
  // 检查是否需要更新帧索引
  if (((*(byte *)(rendererContext + 0xfd) & 1) == 0) &&
     ((*(int *)(rendererContext + 0x1d0) == frameIndex || (*(int *)(rendererContext + 0x1d0) == frameIndex - 1))) {
    visibilityFlags2 = 0;
  }
  else {
    visibilityFlags2 = 1;
  }
  
  *(byte *)(rendererContext + 0xfd) = *(byte *)(rendererContext + 0xfd) & 0xfe | visibilityFlags2;
  visibilityFlags1 = visibilityFlags1 & 0x20;
  
  // 如果需要，保存变换结果
  if ((visibilityFlags1 != 0) && (visibilityFlags2 != 0)) {
    *(uint64_t *)(rendererContext + 0x160) = transformResult[0];
    *(uint64_t *)(rendererContext + 0x168) = transformResult[1];
    *(uint64_t *)(rendererContext + 0x170) = transformResult[2];
    *(uint64_t *)(rendererContext + 0x178) = transformResult[3];
    *(uint64_t *)(rendererContext + 0x180) = transformResult[4];
    *(uint64_t *)(rendererContext + 0x188) = transformResult[5];
    *(uint64_t *)(rendererContext + 400) = transformResult[6];
    *(uint64_t *)(rendererContext + 0x198) = transformResult[7];
  }
  
  // 执行场景渲染
  FUN_18024a290(sceneContext);
  
  // 清理渲染状态
  *(byte *)(rendererContext + 0xfd) = *(byte *)(rendererContext + 0xfd) & 0xfe;
  *(int *)(rendererContext + 0x1d0) = frameIndex;
  
  // 恢复变换结果（如果需要）
  if (visibilityFlags1 != 0) {
    *(uint64_t *)(rendererContext + 0x160) = transformResult1;
    *(uint64_t *)(rendererContext + 0x168) = transformResult2;
    *(uint64_t *)(rendererContext + 0x170) = transformResult3;
    *(uint64_t *)(rendererContext + 0x178) = transformResult4;
    *(uint64_t *)(rendererContext + 0x180) = transformResult5;
    *(uint64_t *)(rendererContext + 0x188) = transformResult6;
    *(uint64_t *)(rendererContext + 400) = transformResult7;
    *(uint64_t *)(rendererContext + 0x198) = transformResult8;
  }
  return;
}



// 全局变量地址警告：以'_'开头的全局变量与同一地址的较小符号重叠