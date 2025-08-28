#include "TaleWorlds.Native.Split.h"

// 01_initialization_part049.c - 3 个函数

/**
 * 清理异常列表中的节点
 * 从异常列表中移除指定的节点，如果引用计数为0则触发清理
 * 
 * @param context 上下文指针，包含要清理的节点信息
 */
void CleanupExceptionListNode(longlong context)

{
  int *refCount;
  void **nodePtr;
  longlong nodeBase;
  ulonglong pageBase;
  
  // 获取要清理的节点指针
  nodePtr = *(void ***)(context + 0x28);
  if (nodePtr == (void **)0x0) {
    return;
  }
  
  // 计算页面基址和节点位置
  pageBase = (ulonglong)nodePtr & 0xffffffffffc00000;
  if (pageBase != 0) {
    nodeBase = pageBase + 0x80 + ((longlong)nodePtr - pageBase >> 0x10) * 0x50;
    nodeBase = nodeBase - (ulonglong)*(uint *)(nodeBase + 4);
    
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
        FUN_18064d630();
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
ulonglong ProcessObjectRendering(longlong rendererContext, uint *materialParams, float *transformMatrix, longlong objectData,
                       longlong renderState)

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
  undefined8 tempPointer;
  ulonglong result;
  undefined8 *renderBuffer;
  longlong objectContext;
  longlong sceneContext;
  undefined4 *texturePtr;
  uint *counterPtr;
  byte visibilityFlags;
  char *dataBuffer;
  int frameIndex;
  ulonglong bufferOffset;
  uint *bufferPtr;
  bool isAllocated;
  
  // 栈变量
  undefined4 tempStack[2];
  uint *materialParamsPtr;
  float *transformMatrixPtr;
  longlong objectDataPtr;
  undefined4 defaultParams[2];
  ulonglong bufferSize;
  undefined8 *renderData[2];
  longlong renderContext;
  undefined8 transformResult1;
  undefined8 transformResult2;
  undefined8 transformResult3;
  undefined8 transformResult4;
  undefined8 transformResult5;
  undefined8 transformResult6;
  undefined8 transformResult7;
  undefined8 transformResult8;
  undefined8 transformResult9;
  undefined8 transformResult10;
  
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
    tempPointer = FUN_18062b1e0(_DAT_180c8ed18, 0xc0, 8, 9);
    tempPointer = FUN_180084ea0(tempPointer);
    *(undefined8 *)(rendererContext + 0x1d8) = tempPointer;
    LOCK();
    *(undefined1 *)(rendererContext + 0xf9) = 1;
    UNLOCK();
  }
  
  // 处理场景对象的渲染参数
  if ((char)*(byte *)(rendererContext + 0xfd) < '\0') {
    objectContext = *(longlong *)(rendererContext + 0x1b8);
    tempPointer = *(undefined8 *)(objectContext + 0x290);
    *(undefined8 *)(rendererContext + 0x2a8) = *(undefined8 *)(objectContext + 0x288);
    *(undefined8 *)(rendererContext + 0x2b0) = tempPointer;
    tempValue = *(undefined4 *)(objectContext + 0x29c);
    renderState1 = *(undefined4 *)(objectContext + 0x2a0);
    renderState2 = *(undefined4 *)(objectContext + 0x2a4);
    *(undefined4 *)(rendererContext + 0x2b8) = *(undefined4 *)(objectContext + 0x298);
    *(undefined4 *)(rendererContext + 700) = tempValue;
    *(undefined4 *)(rendererContext + 0x2c0) = renderState1;
    *(undefined4 *)(rendererContext + 0x2c4) = renderState2;
  }
  
  // 检查材质标志是否匹配
  result = (ulonglong)*(uint *)(rendererContext + 0x270);
  if ((*materialParams & *(uint *)(rendererContext + 0x270)) == 0) goto skip_rendering;
  
  visibilityFlags = *(byte *)(rendererContext + 0xfd) & 0x20;
  objectContext = rendererContext;
  if (visibilityFlags == 0) {
    objectContext = func_0x000180085de0(*(undefined8 *)(rendererContext + 0x1b0));
  }
  
  // 检查对象是否可见
  if (*(int *)(objectContext + 0x200) == 0) {
check_visibility:
    if ((*(byte *)(rendererContext + 0x100) & 4) != 0) goto prepare_rendering;
    objectContext = *(longlong *)(rendererContext + 0x1b8);
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
      objectContext = func_0x000180085de0(*(undefined8 *)(rendererContext + 0x1b0));
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
        result = CONCAT71((int7)((ulonglong)tempPointer >> 8), stateFlags);
        *(byte *)(rendererContext + 0xfe) = stateFlags;
        if ((visibilityFlags & 4) == 0) goto skip_rendering;
      }
      
      // 处理渲染队列
      materialFlags = *(uint *)(*(longlong *)(rendererContext + 0x1b8) + 0x388);
      if (((materialFlags >> 0x19 & 1) != 0) ||
         ((*(longlong *)(rendererContext + 600) != 0 && (0 < *(int *)(*(longlong *)(rendererContext + 600) + 0x1c)))
         )) {
        frameIndex = *(int *)(_DAT_180c86870 + 0x224);
        renderBuffer = *(undefined8 **)(rendererContext + 600);
        if (renderBuffer == (undefined8 *)0x0) {
          // 初始化渲染缓冲区
          renderBuffer = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18, 0x58, 8, 3);
          *(undefined8 *)((longlong)renderBuffer + 0x2c) = 0xffffffffffffffff;
          *(undefined4 *)(renderBuffer + 9) = 0xffffffff;
          *renderBuffer = 0;
          renderBuffer[2] = 0;
          renderBuffer[7] = 0;
          *(undefined4 *)(renderBuffer + 5) = 0xffffffff;
          *(undefined4 *)(renderBuffer + 4) = 0xffffffff;
          renderBuffer[3] = 0;
          *(undefined4 *)(renderBuffer + 8) = 0;
          *(undefined4 *)(renderBuffer + 1) = 0;
          *(undefined1 *)((longlong)renderBuffer + 0x44) = 0;
          *(undefined1 *)((longlong)renderBuffer + 0x24) = 0;
          *(undefined8 **)(rendererContext + 600) = renderBuffer;
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
            renderContext = _DAT_180c86890 + 0x5868;
            counterPtr = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0x6a78) * 0x908 + renderContext);
            LOCK();
            materialFlags = *counterPtr;
            *counterPtr = *counterPtr + 1;
            UNLOCK();
            result = (ulonglong)(materialFlags >> 9);
            bufferOffset = (ulonglong)(materialFlags >> 9);
            dataBuffer = (char *)((longlong)counterPtr + bufferOffset + 0x808);
            bufferPtr = counterPtr + (result + 1) * 2;
            bufferSize = result;
            
            // 分配渲染缓冲区
            do {
              frameIndex = (int)bufferOffset;
              if (*(longlong *)bufferPtr == 0) {
                objectContext = FUN_18062b420(_DAT_180c8ed18, 0xc000, 0x25);
                LOCK();
                isAllocated = *(longlong *)(counterPtr + (longlong)frameIndex * 2 + 2) == 0;
                if (isAllocated) {
                  *(longlong *)(counterPtr + (longlong)frameIndex * 2 + 2) = objectContext;
                }
                UNLOCK();
                if (isAllocated) {
                  FUN_1800e94a0(counterPtr, frameIndex << 9);
                  LOCK();
                  *(undefined1 *)((longlong)counterPtr + (longlong)frameIndex + 0x808) = 0;
                  UNLOCK();
                  result = bufferSize;
                }
                else {
                  if (objectContext != 0) {
                    // 警告：子程序不返回
                    FUN_18064e900();
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
              bufferOffset = (ulonglong)(frameIndex + 1);
              bufferPtr = bufferPtr + 2;
            } while ((longlong)(dataBuffer + (-0x808 - (longlong)counterPtr)) <= (longlong)result);
            
            // 获取渲染数据
            renderBuffer = (undefined8 *)
                      (*(longlong *)
                        ((longlong)*(int *)(renderContext + 0x1210) * 0x908 + renderContext + 8 +
                        result * 8) + (ulonglong)(materialFlags - (materialFlags & 0xfffffe00)) * 0x60);
            objectContext = rendererContext;
            renderData[0] = renderBuffer;
            
            if ((*(byte *)(rendererContext + 0xfd) & 0x20) == 0) {
              objectContext = func_0x000180085de0(*(undefined8 *)(rendererContext + 0x1b0));
            }
            
            sceneContext = *(longlong *)(rendererContext + 0x1b8);
            visibilityFlags = *(byte *)(sceneContext + 0x38c);
            if (visibilityFlags == 9) {
              visibilityFlags = func_0x00018022d300();
              *(byte *)(sceneContext + 0x38c) = visibilityFlags;
            }
            
            materialParams = materialParams;
            objectContext = *(longlong *)(objectContext + 0x1e0);
            *renderBuffer = *(undefined8 *)(objectContext + (ulonglong)visibilityFlags * 0x18);
            renderBuffer[1] = *(undefined8 *)(objectContext + 8 + (ulonglong)visibilityFlags * 0x18);
            
            // 设置渲染参数
            *(undefined4 *)(renderData[0] + 2) =
                 *(undefined4 *)(*(longlong *)(rendererContext + 600) + 0x2c);
            *(undefined4 *)((longlong)renderData[0] + 0x14) =
                 *(undefined4 *)(*(longlong *)(rendererContext + 600) + 0x4c);
            *(int *)(renderData[0] + 9) = (int)*(char *)(*(longlong *)(rendererContext + 600) + 0x44);
            
            // 处理纹理参数
            if ((*(longlong *)(rendererContext + 0x2d0) == 0) ||
               (*(int *)(*(longlong *)(rendererContext + 0x2d0) + 0x14) == 0)) {
              tempValue = 0xffffffff;
            }
            else {
              tempValue = *(undefined4 *)(rendererContext + 0x108);
            }
            *(undefined4 *)(renderData[0] + 3) = tempValue;
            
            if ((*(longlong *)(rendererContext + 0x2d0) == 0) ||
               (*(int *)(*(longlong *)(rendererContext + 0x2d0) + 0x14) == 0)) {
              tempValue = 0xffffffff;
            }
            else {
              tempValue = *(undefined4 *)(rendererContext + 0x10c);
            }
            *(undefined4 *)((longlong)renderData[0] + 0x1c) = tempValue;
            
            if ((*(longlong *)(rendererContext + 0x2d0) == 0) ||
               (*(int *)(*(longlong *)(rendererContext + 0x2d0) + 0x14) == 0)) {
              tempValue = 0xffffffff;
            }
            else {
              tempValue = *(undefined4 *)(rendererContext + 0x110);
            }
            *(undefined4 *)(renderData[0] + 4) = tempValue;
            
            // 设置渲染标志
            *(byte *)((longlong)renderData[0] + 0x4e) = *(byte *)(rendererContext + 0xfe) >> 3 & 1;
            
            if (*(int *)(rendererContext + 0x108) != -1) {
              texturePtr = *(undefined4 **)(rendererContext + 0x2d0);
              tempValue = texturePtr[1];
              renderState1 = texturePtr[2];
              renderState2 = texturePtr[3];
              *(undefined4 *)(renderData[0] + 5) = *texturePtr;
              *(undefined4 *)((longlong)renderData[0] + 0x2c) = tempValue;
              *(undefined4 *)(renderData[0] + 6) = renderState1;
              *(undefined4 *)((longlong)renderData[0] + 0x34) = renderState2;
              tempPointer = *(undefined8 *)(texturePtr + 6);
              renderData[0][7] = *(undefined8 *)(texturePtr + 4);
              renderData[0][8] = tempPointer;
            }
            
            *(undefined1 *)((longlong)renderData[0] + 0x4f) =
                 *(undefined1 *)(*(longlong *)(rendererContext + 600) + 0x24);
            objectContext = *(longlong *)(rendererContext + 600);
            
            if (*(char *)(objectContext + 0x24) != '\0') {
              tempValue = *(undefined4 *)(rendererContext + 0x2ac);
              renderState1 = *(undefined4 *)(rendererContext + 0x2b0);
              renderState2 = *(undefined4 *)(rendererContext + 0x2b4);
              *(undefined4 *)(renderData[0] + 10) = *(undefined4 *)(rendererContext + 0x2a8);
              *(undefined4 *)((longlong)renderData[0] + 0x54) = tempValue;
              *(undefined4 *)(renderData[0] + 0xb) = renderState1;
              *(undefined4 *)((longlong)renderData[0] + 0x5c) = renderState2;
              objectContext = *(longlong *)(rendererContext + 600);
            }
            
            *(bool *)((longlong)renderData[0] + 0x4c) = *(longlong *)(objectContext + 0x10) != 0;
            *(undefined1 *)((longlong)renderData[0] + 0x4d) = 1;
            
            if ((*(char *)(renderState + 0xc) != '\0') ||
               (0 < *(int *)(*(longlong *)(rendererContext + 600) + 0x1c))) {
              *(undefined1 *)((longlong)renderData[0] + 0x4d) = 0;
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
    FUN_180085190(&transformResult1, materialParams + 0xc, *(undefined1 *)(rendererContext + 0xf7), transformMatrix);
    
    // 更新渲染状态
    materialFlags = materialParams[0x6f6];
    frameIndex = *(int *)(_DAT_180c86870 + 0x224);
    
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
      *(undefined8 *)(rendererContext + 0x160) = transformResult1;
      *(undefined8 *)(rendererContext + 0x168) = transformResult2;
      *(undefined8 *)(rendererContext + 0x170) = transformResult3;
      *(undefined8 *)(rendererContext + 0x178) = transformResult4;
      *(undefined8 *)(rendererContext + 0x180) = transformResult5;
      *(undefined8 *)(rendererContext + 0x188) = transformResult6;
      *(undefined8 *)(rendererContext + 400) = transformResult7;
      *(undefined8 *)(rendererContext + 0x198) = transformResult8;
    }
    
    // 执行渲染操作
    result = FUN_18024a290(materialParams, rendererContext, &transformResult1, objectData, renderState);
    
    // 清理渲染状态
    *(byte *)(rendererContext + 0xfd) = *(byte *)(rendererContext + 0xfd) & 0xfe;
    *(int *)(rendererContext + 0x1d0) = frameIndex;
    
    // 恢复变换结果（如果需要）
    if (stateFlags != 0) {
      *(undefined8 *)(rendererContext + 0x160) = transformResult1;
      *(undefined8 *)(rendererContext + 0x168) = transformResult2;
      *(undefined8 *)(rendererContext + 0x170) = transformResult3;
      *(undefined8 *)(rendererContext + 0x178) = transformResult4;
      *(undefined8 *)(rendererContext + 0x180) = transformResult5;
      *(undefined8 *)(rendererContext + 0x188) = transformResult6;
      *(undefined8 *)(rendererContext + 400) = transformResult7;
      *(undefined8 *)(rendererContext + 0x198) = transformResult8;
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
  undefined8 transformResult1;
  undefined8 transformResult2;
  undefined8 transformResult3;
  undefined8 transformResult4;
  undefined8 transformResult5;
  undefined8 transformResult6;
  undefined8 transformResult7;
  undefined8 transformResult8;
  
  // 状态标志
  byte visibilityFlags1;
  byte visibilityFlags2;
  uint tempValue;
  
  // 主要变量
  ulonglong bufferSize;
  longlong objectContext;
  longlong sceneContext;
  undefined4 *texturePtr;
  uint *counterPtr;
  char *dataBuffer;
  undefined8 *renderBuffer;
  float *transformMatrix;
  int frameIndex;
  ulonglong bufferOffset;
  uint *bufferPtr;
  bool isAllocated;
  
  // 栈变量
  undefined4 tempStack;
  ulonglong stackSize;
  undefined8 *renderData;
  longlong renderContext;
  undefined8 transformResult[8];
  
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
  undefined4 stackParam1;
  undefined4 stackParam2;
  undefined4 stackParam3;
  undefined4 stackParam4;
  undefined4 stackParam5;
  undefined4 stackParam6;
  undefined4 stackParam7;
  undefined4 stackParam8;
  undefined4 stackParam9;
  undefined4 stackParam10;
  undefined4 stackParam11;
  undefined4 stackParam12;
  undefined4 stackParam13;
  undefined4 stackParam14;
  undefined4 stackParam15;
  undefined4 stackParam16;
  undefined4 stackParam17;
  longlong sceneData;
  float *matrixPtr;
  undefined8 matrixParam;
  longlong renderState;
  
  // 渲染器上下文（从寄存器获取）
  longlong rendererContext;
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
  renderContext = _DAT_180c86890 + 0x5868;
  counterPtr = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0x6a78) * 0x908 + renderContext);
  
  // 更新渲染计数器
  LOCK();
  renderFlags = *counterPtr;
  *counterPtr = *counterPtr + renderCount;
  UNLOCK();
  
  bufferSize = (ulonglong)(renderFlags >> 9);
  bufferOffset = (ulonglong)(renderFlags >> 9);
  dataBuffer = (char *)((longlong)counterPtr + bufferOffset + 0x808);
  bufferPtr = counterPtr + (bufferSize + 1) * 2;
  stackSize = bufferSize;
  
  // 分配渲染缓冲区
  do {
    frameIndex = (int)bufferOffset;
    if (*(longlong *)bufferPtr == 0) {
      objectContext = FUN_18062b420(_DAT_180c8ed18, 0xc000, 0x25);
      LOCK();
      isAllocated = *(longlong *)(counterPtr + (longlong)frameIndex * 2 + 2) == 0;
      if (isAllocated) {
        *(longlong *)(counterPtr + (longlong)frameIndex * 2 + 2) = objectContext;
      }
      UNLOCK();
      if (isAllocated) {
        FUN_1800e94a0(counterPtr, frameIndex << 9);
        LOCK();
        *(undefined1 *)((longlong)counterPtr + (longlong)frameIndex + 0x808) = 0;
        UNLOCK();
        bufferSize = stackSize;
      }
      else {
        if (objectContext != 0) {
          // 警告：子程序不返回
          FUN_18064e900();
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
    bufferOffset = (ulonglong)(frameIndex + 1);
    bufferPtr = bufferPtr + 2;
  } while ((longlong)(dataBuffer + (-0x808 - (longlong)counterPtr)) <= (longlong)bufferSize);
  
  // 获取渲染数据
  renderBuffer = (undefined8 *)
            (*(longlong *)
              ((longlong)*(int *)(renderContext + 0x1210) * 0x908 + renderContext + 8 +
              bufferSize * 8) + (ulonglong)(renderFlags - (renderFlags & 0xfffffe00)) * 0x60);
  objectContext = rendererContext;
  renderData = renderBuffer;
  
  // 获取对象上下文
  if ((*(byte *)(rendererContext + 0xfd) & 0x20) == 0) {
    objectContext = func_0x000180085de0(*(undefined8 *)(rendererContext + 0x1b0));
  }
  
  sceneContext = *(longlong *)(rendererContext + 0x1b8);
  visibilityFlags1 = *(byte *)(sceneContext + 0x38c);
  if (visibilityFlags1 == 9) {
    visibilityFlags1 = func_0x00018022d300();
    *(byte *)(sceneContext + 0x38c) = visibilityFlags1;
  }
  
  // 设置场景数据
  sceneContext = sceneData;
  objectContext = *(longlong *)(objectContext + 0x1e0);
  *renderBuffer = *(undefined8 *)(objectContext + (ulonglong)visibilityFlags1 * 0x18);
  renderBuffer[1] = *(undefined8 *)(objectContext + 8 + (ulonglong)visibilityFlags1 * 0x18);
  
  // 设置渲染参数
  *(undefined4 *)(renderData + 2) = *(undefined4 *)(*(longlong *)(rendererContext + 600) + 0x2c);
  *(undefined4 *)((longlong)renderData + 0x14) = *(undefined4 *)(*(longlong *)(rendererContext + 600) + 0x4c);
  *(int *)(renderData + 9) = (int)*(char *)(*(longlong *)(rendererContext + 600) + 0x44);
  
  // 处理纹理参数
  if ((*(longlong *)(rendererContext + 0x2d0) == 0) ||
     (*(int *)(*(longlong *)(rendererContext + 0x2d0) + 0x14) == 0)) {
    tempValue = 0xffffffff;
  }
  else {
    tempValue = *(undefined4 *)(rendererContext + 0x108);
  }
  *(undefined4 *)(renderData + 3) = tempValue;
  
  if ((*(longlong *)(rendererContext + 0x2d0) == 0) ||
     (*(int *)(*(longlong *)(rendererContext + 0x2d0) + 0x14) == 0)) {
    tempValue = 0xffffffff;
  }
  else {
    tempValue = *(undefined4 *)(rendererContext + 0x10c);
  }
  *(undefined4 *)((longlong)renderData + 0x1c) = tempValue;
  
  if ((*(longlong *)(rendererContext + 0x2d0) == 0) ||
     (*(int *)(*(longlong *)(rendererContext + 0x2d0) + 0x14) == 0)) {
    tempValue = 0xffffffff;
  }
  else {
    tempValue = *(undefined4 *)(rendererContext + 0x110);
  }
  *(undefined4 *)(renderData + 4) = tempValue;
  
  // 设置渲染标志
  *(byte *)((longlong)renderData + 0x4e) = *(byte *)(rendererContext + 0xfe) >> 3 & 1;
  
  if (*(int *)(rendererContext + 0x108) != -1) {
    texturePtr = *(undefined4 **)(rendererContext + 0x2d0);
    tempValue = texturePtr[1];
    renderState1 = texturePtr[2];
    renderState2 = texturePtr[3];
    *(undefined4 *)(renderData + 5) = *texturePtr;
    *(undefined4 *)((longlong)renderData + 0x2c) = tempValue;
    *(undefined4 *)(renderData + 6) = renderState1;
    *(undefined4 *)((longlong)renderData + 0x34) = renderState2;
    transformResult1 = *(undefined8 *)(texturePtr + 6);
    renderData[7] = *(undefined8 *)(texturePtr + 4);
    renderData[8] = transformResult1;
  }
  
  *(undefined1 *)((longlong)renderData + 0x4f) = *(undefined1 *)(*(longlong *)(rendererContext + 600) + 0x24);
  objectContext = *(longlong *)(rendererContext + 600);
  
  if (*(char *)(objectContext + 0x24) != '\0') {
    tempValue = *(undefined4 *)(rendererContext + 0x2ac);
    renderState1 = *(undefined4 *)(rendererContext + 0x2b0);
    renderState2 = *(undefined4 *)(rendererContext + 0x2b4);
    *(undefined4 *)(renderData + 10) = *(undefined4 *)(rendererContext + 0x2a8);
    *(undefined4 *)((longlong)renderData + 0x54) = tempValue;
    *(undefined4 *)(renderData + 0xb) = renderState1;
    *(undefined4 *)((longlong)renderData + 0x5c) = renderState2;
    objectContext = *(longlong *)(rendererContext + 600);
  }
  
  *(bool *)((longlong)renderData + 0x4c) = *(longlong *)(objectContext + 0x10) != 0;
  *(undefined1 *)((longlong)renderData + 0x4d) = 1;
  
  if ((*(char *)(renderState + 0xc) != '\0') ||
     (0 < *(int *)(*(longlong *)(rendererContext + 600) + 0x1c))) {
    *(undefined1 *)((longlong)renderData + 0x4d) = 0;
  }
  
  // 处理材质参数
  if (*(longlong *)(sceneData + 0x28) == 0) {
    tempStack = 0xffffffff;
    texturePtr = &tempStack;
    objectContext = sceneData;
  }
  else {
    stackParam17 = 0xffffffff;
    texturePtr = &stackParam17;
    objectContext = *(longlong *)(sceneData + 0x28);
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
  FUN_180085190(&transformResult[0], sceneContext + 0x30, *(undefined1 *)(rendererContext + 0xf7), transformMatrix);
  
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
  frameIndex = *(int *)(_DAT_180c86870 + 0x224);
  
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
    *(undefined8 *)(rendererContext + 0x160) = transformResult[0];
    *(undefined8 *)(rendererContext + 0x168) = transformResult[1];
    *(undefined8 *)(rendererContext + 0x170) = transformResult[2];
    *(undefined8 *)(rendererContext + 0x178) = transformResult[3];
    *(undefined8 *)(rendererContext + 0x180) = transformResult[4];
    *(undefined8 *)(rendererContext + 0x188) = transformResult[5];
    *(undefined8 *)(rendererContext + 400) = transformResult[6];
    *(undefined8 *)(rendererContext + 0x198) = transformResult[7];
  }
  
  // 执行场景渲染
  FUN_18024a290(sceneContext);
  
  // 清理渲染状态
  *(byte *)(rendererContext + 0xfd) = *(byte *)(rendererContext + 0xfd) & 0xfe;
  *(int *)(rendererContext + 0x1d0) = frameIndex;
  
  // 恢复变换结果（如果需要）
  if (visibilityFlags1 != 0) {
    *(undefined8 *)(rendererContext + 0x160) = transformResult1;
    *(undefined8 *)(rendererContext + 0x168) = transformResult2;
    *(undefined8 *)(rendererContext + 0x170) = transformResult3;
    *(undefined8 *)(rendererContext + 0x178) = transformResult4;
    *(undefined8 *)(rendererContext + 0x180) = transformResult5;
    *(undefined8 *)(rendererContext + 0x188) = transformResult6;
    *(undefined8 *)(rendererContext + 400) = transformResult7;
    *(undefined8 *)(rendererContext + 0x198) = transformResult8;
  }
  return;
}



// 全局变量地址警告：以'_'开头的全局变量与同一地址的较小符号重叠