#include "TaleWorlds.Native.Split.h"

/*==============================================================================
渲染系统参数管理器 - Rendering System Parameter Manager
03_rendering_part078.c

本模块实现了渲染系统的参数管理和处理功能，包含5个核心函数：
1. 渲染参数设置器 - RenderingSystem_ParameterSetter
2. 渲染参数处理器 - RenderingSystem_ParameterHandler  
3. 渲染系统清理器 - RenderingSystem_Cleaner
4. 渲染状态重置器 - RenderingSystem_StateResetter
5. 渲染参数优化器 - RenderingSystem_ParameterOptimizer

主要功能：
- 渲染参数的设置和处理
- 渲染资源的清理和管理
- 渲染状态的重置和优化
- 材质参数的应用和管理
- 颜色和纹理参数的处理

技术说明：
- 使用链表结构管理渲染参数
- 支持动态内存分配和释放
- 实现了线程安全的资源管理
- 提供了高效的参数查找和更新机制
==============================================================================*/

/*========================== 常量定义 ==========================*/
#define RENDERING_MAX_PARAMS 0x300          // 渲染参数最大数量
#define RENDERING_PARAM_SIZE 0x10           // 渲染参数大小
#define RENDERING_COLOR_SCALE 0.003921569f  // 颜色缩放因子 (1/255)
#define RENDERING_MIN_CAPACITY 8            // 最小容量
#define RENDERING_TEXTURE_PARAM_SIZE 0xd0   // 纹理参数大小
#define RENDERING_VERTEX_COLOR_SIZE 0x20    // 顶点颜色大小

/*========================== 渲染系统常量 ==========================*/
#define RENDERING_FLAG_ACTIVE 0x01          // 渲染激活标志
#define RENDERING_FLAG_LOCKED 0x02          // 渲染锁定标志
#define RENDERING_FLAG_UPDATED 0x04        // 渲染更新标志
#define RENDERING_FLAG_VALID 0x08           // 渲染有效标志

/*========================== 内存管理常量 ==========================*/
#define MEMORY_ALIGN_8 8                    // 8字节对齐
#define MEMORY_ALIGN_16 0x10                // 16字节对齐
#define MEMORY_POOL_SIZE 0x300              // 内存池大小
#define MEMORY_BLOCK_SIZE 0x28              // 内存块大小

/*========================== 函数别名定义 ==========================*/
#define RenderingSystem_ParameterSetter FUN_18030dcc0     // 渲染参数设置器
#define RenderingSystem_ParameterHandler FUN_18030e490    // 渲染参数处理器
#define RenderingSystem_Cleaner FUN_18030e800            // 渲染系统清理器
#define RenderingSystem_StateResetter FUN_18030ea24      // 渲染状态重置器
#define RenderingSystem_ParameterOptimizer FUN_18030eaf0 // 渲染参数优化器

/*========================== 内部函数声明 ==========================*/
static void RenderingSystem_ProcessColorChannels(void* paramObj, uint32_t* colorData);
static void RenderingSystem_UpdateMaterialParams(void* material, void* paramData);
static void RenderingSystem_ValidateParameters(void* paramList);
static void RenderingSystem_OptimizeMemoryUsage(void* memoryPool);
static void RenderingSystem_CleanupResources(void* resourceList);

/*========================== 渲染参数设置器 ==========================*/
/**
 * 渲染参数设置器 - 设置和管理渲染系统参数
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 顶点数据指针
 * @param param_3 纹理坐标指针  
 * @param param_4 材质参数指针
 * @param param_5 顶点数量
 * @param param_6 材质数量
 * @param param_7 渲染标志
 * @param param_8 参数数据数组
 * 
 * 功能说明：
 * - 初始化渲染参数管理器
 * - 处理顶点和材质数据
 * - 设置颜色和纹理参数
 * - 管理渲染资源生命周期
 * - 优化参数存储结构
 */
void RenderingSystem_ParameterSetter(longlong param_1, longlong param_2, longlong param_3, longlong param_4, 
                                     int param_5, int param_6, undefined8 param_7, undefined4 *param_8)
{
  undefined8 *puVar1;           // 通用指针变量1
  undefined4 *puVar2;           // 通用指针变量2
  undefined4 uVar3;             // 通用变量3
  undefined4 uVar4;             // 通用变量4
  int iVar5;                    // 整数变量5
  uint uVar6;                   // 无符号整数变量6
  ulonglong uVar7;              // 无符号长整型变量7
  ulonglong uVar8;              // 无符号长整型变量8
  undefined8 uVar9;             // 通用变量9
  undefined4 uVar10;            // 通用变量10
  bool bVar11;                  // 布尔变量11
  longlong *plVar12;            // 长整型指针变量12
  undefined8 *puVar13;          // 通用指针变量13
  undefined8 uVar14;            // 通用变量14
  longlong *plVar15;            // 长整型指针变量15
  undefined8 *puVar16;          // 通用指针变量16
  undefined8 *puVar17;          // 通用指针变量17
  undefined8 *puVar18;          // 通用指针变量18
  int iVar19;                   // 整数变量19
  undefined4 *puVar20;          // 通用指针变量20
  longlong lVar21;              // 长整型变量21
  undefined8 uVar22;            // 通用变量22
  int iVar23;                   // 整数变量23
  
  // 栈变量定义
  undefined4 uStack_f8;         // 栈变量f8
  undefined4 uStack_f4;         // 栈变量f4
  undefined4 uStack_f0;         // 栈变量f0
  undefined4 uStack_ec;        // 栈变量ec
  longlong *plStack_e8;         // 栈指针e8
  longlong *plStack_e0;         // 栈指针e0
  longlong *plStack_d8;         // 栈指针d8
  longlong *plStack_d0;         // 栈指针d0
  undefined1 auStack_c8 [8];   // 栈数组c8
  undefined8 uStack_c0;        // 栈变量c0
  longlong *plStack_b0;         // 栈指针b0
  char cStack_a8;               // 栈字符a8
  char cStack_a7;               // 栈字符a7
  char cStack_a6;               // 栈字符a6
  undefined4 auStack_a0 [2];    // 栈数组a0
  undefined4 uStack_98;         // 栈变量98
  undefined4 uStack_94;         // 栈变量94
  longlong lStack_90;           // 栈变量90
  longlong *plStack_88;         // 栈指针88
  undefined4 uStack_80;         // 栈变量80
  undefined4 uStack_7c;         // 栈变量7c
  undefined4 uStack_78;         // 栈变量78
  undefined4 uStack_74;         // 栈变量74
  undefined8 uStack_70;         // 栈变量70
  undefined8 uStack_68;         // 栈变量68
  undefined8 uStack_60;         // 栈变量60
  
  // 初始化栈变量
  uStack_70 = 0xfffffffffffffffe;     // 设置栈变量70
  uVar22 = 0;                         // 初始化变量22
  plStack_e8 = (longlong *)0x0;       // 初始化栈指针e8
  lStack_90 = 0;                      // 初始化栈变量90
  
  // 获取参数数据
  uVar7 = *(ulonglong *)(param_8 + 0x1c);  // 获取参数1c偏移
  if ((uVar7 != 0) && (uVar8 = *(ulonglong *)(param_8 + 0x1e), uVar8 != 0)) {
    // 参数有效，进行处理
    puVar1 = (undefined8 *)(param_1 + 0x1b8);  // 获取渲染系统指针
    puVar16 = *(undefined8 **)(param_1 + 0x1c8);  // 获取参数链表头
    puVar17 = puVar1;  // 设置链表遍历起始点
    
    if (puVar16 == (undefined8 *)0x0) {
LAB_18030dd85:
      puVar13 = puVar1;  // 设置链表指针
    }
    else {
      // 遍历参数链表
      do {
        // 比较参数范围
        if (((ulonglong)puVar16[4] < uVar7) ||
           (((ulonglong)puVar16[4] <= uVar7 && ((ulonglong)puVar16[5] < uVar8)))) {
          bVar11 = true;           // 在范围内
          puVar18 = (undefined8 *)*puVar16;  // 获取下一个节点
        }
        else {
          bVar11 = false;          // 不在范围内
          puVar18 = (undefined8 *)puVar16[1];  // 获取另一个节点
        }
        puVar13 = puVar16;         // 保存当前节点
        if (bVar11) {
          puVar13 = puVar17;       // 更新链表指针
        }
        puVar17 = puVar13;         // 更新遍历指针
        puVar16 = puVar18;         // 移动到下一个节点
      } while (puVar18 != (undefined8 *)0x0);
      
      // 检查是否找到合适的位置
      if (((puVar13 == puVar1) || (uVar7 < (ulonglong)puVar13[4])) ||
         ((uVar7 <= (ulonglong)puVar13[4] && (uVar8 < (ulonglong)puVar13[5])))) goto LAB_18030dd85;
    }
    
    // 获取参数值
    if (puVar13 != puVar1) {
      lStack_90 = puVar13[6];     // 保存参数值
    }
  }
  
  // 分配内存并初始化
  uVar14 = FUN_18062b1e0(_DAT_180c8ed18, 0x300, 0x10, 3);  // 分配内存池
  plVar15 = (longlong *)FUN_180075030(uVar14, 1);           // 初始化内存
  plStack_88 = plVar15;          // 保存内存指针
  
  if (plVar15 != (longlong *)0x0) {
    plStack_e0 = plVar15;         // 设置栈指针
    (**(code **)(*plVar15 + 0x28))(plVar15);  // 调用初始化函数
  }
  
  plStack_e0 = (longlong *)0x0;   // 重置栈指针
  plStack_e8 = plVar15;           // 保存内存指针
  (**(code **)(plVar15[2] + 0x10))(plVar15 + 2, &UNK_180a1a6b0);  // 设置回调函数
  FUN_18007ea10(plVar15, 1);      // 启用参数
  FUN_18007e930(plVar15);         // 初始化参数
  
  // 初始化数据结构
  plStack_d8 = (longlong *)0x0;   // 初始化数据指针
  plStack_d0 = (longlong *)0x0;   // 初始化数据指针
  plStack_e0 = (longlong *)auStack_c8;  // 设置栈指针
  plStack_b0 = (longlong *)0x0;   // 初始化栈指针
  uStack_c0 = 0;                  // 初始化栈变量
  auStack_c8[0] = 0;              // 初始化栈数组
  
  // 处理渲染参数
  FUN_18022f2e0(&plStack_d8, plVar15, 0);  // 初始化渲染参数
  plStack_e0 = (longlong *)(longlong)param_5;  // 设置处理数量
  
  if (0 < (longlong)plStack_e0) {
    // 处理顶点数据
    uStack_78 = 0x41200000;       // 设置浮点常量
    uStack_74 = 0x7f7fffff;       // 设置浮点常量
    uStack_68 = 0;                 // 初始化栈变量
    uStack_60 = 0x7f7fffffbf800000;  // 设置浮点常量
    auStack_a0[0] = 0xffffffff;    // 设置整数常量
    puVar20 = (undefined4 *)(param_3 + 4);  // 获取纹理坐标指针
    
    do {
      plVar15 = plStack_d0;         // 获取数据指针
      uVar3 = *(undefined4 *)((param_2 - param_3) + (longlong)puVar20);  // 获取顶点数据
      uVar4 = *(undefined4 *)((param_2 - param_3) + -4 + (longlong)puVar20);  // 获取顶点数据
      uStack_94 = *puVar20;         // 保存纹理坐标
      uStack_98 = puVar20[-1];      // 保存纹理坐标
      iVar19 = (int)plStack_d0[2];  // 获取索引
      iVar23 = iVar19 + 1;          // 计算新索引
      iVar5 = *(int *)((longlong)plStack_d0 + 0x14);  // 获取容量
      
      // 检查容量是否足够
      if (iVar5 < iVar23) {
        if (iVar5 < 2) {
          *(undefined4 *)((longlong)plStack_d0 + 0x14) = 8;  // 设置最小容量
        }
        else {
          *(int *)((longlong)plStack_d0 + 0x14) = (iVar5 >> 1) + iVar5;  // 扩容
        }
        FUN_1800846d0(plStack_d0 + 2);  // 重新分配内存
      }
      
      plVar12 = plStack_d0;         // 保存数据指针
      *(int *)(plVar15 + 2) = iVar23;  // 更新索引
      puVar2 = (undefined4 *)(plStack_d0[3] + (longlong)iVar19 * 0x10);  // 获取数据位置
      *puVar2 = uVar4;              // 保存数据
      puVar2[1] = uVar3;            // 保存数据
      puVar2[2] = uStack_78;        // 保存浮点常量
      puVar2[3] = uStack_74;        // 保存浮点常量
      uStack_80 = uVar4;            // 保存到栈
      uStack_7c = uVar3;            // 保存到栈
      
      // 处理附加数据
      if ((int)plStack_d0[7] != 0) {
        iVar5 = *(int *)((longlong)plStack_d0 + 0x3c);  // 获取附加容量
        if (iVar5 < iVar23) {
          if (iVar5 < 2) {
            *(undefined4 *)((longlong)plStack_d0 + 0x3c) = 8;  // 设置最小容量
          }
          else {
            *(int *)((longlong)plStack_d0 + 0x3c) = (iVar5 >> 1) + iVar5;  // 扩容
          }
          FUN_1800846d0(plStack_d0 + 7);  // 重新分配内存
        }
        *(int *)(plVar12 + 7) = iVar23;  // 更新索引
        puVar2 = (undefined4 *)(plStack_d0[8] + (longlong)iVar19 * 0x10);  // 获取数据位置
        *puVar2 = uVar4;              // 保存数据
        puVar2[1] = uVar3;            // 保存数据
        puVar2[2] = 0x41200000;       // 保存浮点常量
        puVar2[3] = 0x7f7fffff;       // 保存浮点常量
      }
      
      cStack_a8 = '\x01';            // 设置标志
      cStack_a6 = '\x01';            // 设置标志
      FUN_1802350e0(&plStack_d8, iVar19, &uStack_98, auStack_a0, &uStack_68);  // 处理数据
      puVar20 = puVar20 + 2;         // 移动指针
      plStack_e0 = (longlong *)((longlong)plStack_e0 + -1);  // 减少计数
    } while (plStack_e0 != (longlong *)0x0);
    
    plStack_e0 = (longlong *)0x0;   // 重置指针
    plVar15 = plStack_88;           // 恢复指针
  }
  
  // 处理材质参数
  iVar19 = param_6 / 3 + (param_6 >> 0x1f) +
           (int)(((longlong)param_6 / 3 + ((longlong)param_6 >> 0x3f) & 0xffffffffU) >> 0x1f);
  lVar21 = (longlong)iVar19;       // 转换为长整型
  
  if (0 < iVar19) {
    puVar20 = (undefined4 *)(param_4 + 4);  // 获取材质指针
    do {
      FUN_180235410(&plStack_d8, puVar20[-1], *puVar20, puVar20[1]);  // 处理材质数据
      puVar20 = puVar20 + 3;         // 移动指针
      lVar21 = lVar21 + -1;         // 减少计数
    } while (lVar21 != 0);
  }
  
  // 清理和优化资源
  if ((plStack_d8 != (longlong *)0x0) && (plStack_d0 != (longlong *)0x0)) {
    if (cStack_a6 != '\0') {
      FUN_180075b70();              // 执行清理
    }
    FUN_18007f6a0(auStack_c8);      // 释放内存
    if (cStack_a8 != '\0') {
      FUN_180079520(plStack_d8);    // 清理数据
    }
    if (cStack_a7 != '\0') {
      FUN_180079520(plStack_d8);    // 清理数据
    }
    plVar12 = plStack_d0;            // 保存指针
    plStack_d0 = (longlong *)0x0;   // 重置指针
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x38))();  // 调用清理函数
    }
  }
  
  FUN_18007f6a0(auStack_c8);        // 释放内存
  
  if (plStack_b0 != (longlong *)0x0) {
    (**(code **)(*plStack_b0 + 0x38))();  // 调用清理函数
  }
  if (plStack_d0 != (longlong *)0x0) {
    (**(code **)(*plStack_d0 + 0x38))();  // 调用清理函数
  }
  if (plStack_d8 != (longlong *)0x0) {
    (**(code **)(*plStack_d8 + 0x38))();  // 调用清理函数
  }
  
  // 处理渲染参数
  lVar21 = lStack_90;               // 获取参数值
  if (lStack_90 != 0) {
    FUN_1800b88d0(lStack_90, &plStack_e8);  // 设置参数
    *(int *)(lVar21 + 0x20) = *(int *)(lVar21 + 0x20) + 1;  // 更新计数
    plVar15 = plStack_e8;            // 保存指针
    
LAB_18030e1fe:
    FUN_180076910(plVar15, param_7);  // 应用参数
    uVar6 = param_8[4];              // 获取颜色数据
    
    // 处理颜色通道
    *(float *)(plVar15 + 0x47) = (float)(uVar6 >> 0x10 & 0xff) * RENDERING_COLOR_SCALE;  // 红色通道
    *(float *)((longlong)plVar15 + 0x23c) = (float)(uVar6 >> 8 & 0xff) * RENDERING_COLOR_SCALE;  // 绿色通道
    *(float *)(plVar15 + 0x48) = (float)(uVar6 & 0xff) * RENDERING_COLOR_SCALE;  // 蓝色通道
    *(float *)((longlong)plVar15 + 0x244) = (float)(uVar6 >> 0x18) * RENDERING_COLOR_SCALE;  // alpha通道
    
    uVar3 = param_8[6];              // 获取参数
    uVar4 = param_8[5];              // 获取参数
    lVar21 = plVar15[0x59];          // 获取对象指针
    
    // 设置材质参数
    *(undefined4 *)(lVar21 + 0xa0) = param_8[0x15];  // 设置材质参数
    *(undefined4 *)(lVar21 + 0xa4) = 0;               // 清零
    *(undefined4 *)(lVar21 + 0xa8) = uVar4;           // 设置参数
    *(undefined4 *)(lVar21 + 0xac) = uVar3;           // 设置参数
    
    uVar22 = *(undefined8 *)(param_8 + 0xe);          // 获取参数
    lVar21 = plVar15[0x59];                           // 获取对象指针
    
    // 设置纹理参数
    *(undefined8 *)(lVar21 + 0x10) = *(undefined8 *)(param_8 + 0xc);  // 设置纹理坐标
    *(undefined8 *)(lVar21 + 0x18) = uVar22;                       // 设置纹理参数
    
    uVar6 = param_8[0x10];            // 获取颜色数据
    lVar21 = plVar15[0x59];            // 获取对象指针
    
    // 处理次级颜色通道
    *(float *)(lVar21 + 0x70) = (float)(uVar6 >> 0x10 & 0xff) * RENDERING_COLOR_SCALE;  // 红色通道
    *(float *)(lVar21 + 0x74) = (float)(uVar6 >> 8 & 0xff) * RENDERING_COLOR_SCALE;   // 绿色通道
    *(float *)(lVar21 + 0x78) = (float)(uVar6 & 0xff) * RENDERING_COLOR_SCALE;         // 蓝色通道
    *(float *)(lVar21 + 0x7c) = (float)(uVar6 >> 0x18) * RENDERING_COLOR_SCALE;     // alpha通道
    
    uVar22 = *(undefined8 *)(param_8 + 0x13);          // 获取参数
    lVar21 = plVar15[0x59];                           // 获取对象指针
    
    // 设置高级纹理参数
    *(undefined8 *)(lVar21 + 0x80) = *(undefined8 *)(param_8 + 0x11);  // 设置高级纹理参数
    *(undefined8 *)(lVar21 + 0x88) = uVar22;                       // 设置高级纹理参数
    
    uVar22 = *(undefined8 *)(param_8 + 0x18);          // 获取参数
    lVar21 = plVar15[0x59];                           // 获取对象指针
    
    // 设置材质变换参数
    *(undefined8 *)(lVar21 + 0x90) = *(undefined8 *)(param_8 + 0x16);  // 设置变换参数
    *(undefined8 *)(lVar21 + 0x98) = uVar22;                       // 设置变换参数
    
    uVar3 = param_8[8];              // 获取参数
    lVar21 = plVar15[0x59];          // 获取对象指针
    
    // 设置渲染状态参数
    *(undefined4 *)(lVar21 + 0x60) = param_8[7];  // 设置渲染状态
    *(undefined4 *)(lVar21 + 100) = uVar3;        // 设置渲染参数
    *(undefined4 *)(lVar21 + 0x68) = 0;           // 清零
    *(undefined4 *)(lVar21 + 0x6c) = 0;           // 清零
    
    uVar3 = param_8[1];              // 获取参数
    uVar4 = *param_8;                 // 获取参数
    uVar10 = param_8[3];             // 获取参数
    lVar21 = plVar15[0x59];           // 获取对象指针
    
    // 设置基础渲染参数
    *(undefined4 *)(lVar21 + 0x50) = param_8[2];  // 设置基础参数
    *(undefined4 *)(lVar21 + 0x54) = uVar10;        // 设置基础参数
    *(undefined4 *)(lVar21 + 0x58) = uVar4;         // 设置基础参数
    *(undefined4 *)(lVar21 + 0x5c) = uVar3;         // 设置基础参数
    
    uVar3 = param_8[10];             // 获取参数
    uVar4 = param_8[0xb];            // 获取参数
    lVar21 = plVar15[0x59];           // 获取对象指针
    
    // 设置高级渲染参数
    *(undefined4 *)(lVar21 + 0x20) = param_8[9];   // 设置高级参数
    *(undefined4 *)(lVar21 + 0x24) = uVar3;         // 设置高级参数
    *(undefined4 *)(lVar21 + 0x28) = uVar4;         // 设置高级参数
    *(undefined4 *)(lVar21 + 0x2c) = 0;             // 清零
    
    FUN_18030d6e0(param_1, plVar15, param_8[0x1a]);  // 应用渲染参数
    
    // 执行渲染操作
    // WARNING: Could not recover jumptable at 0x00018030e481. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar15 + 0x38))(plVar15);  // 执行渲染
    return;
  }
  
  // 处理无效参数情况
  if ((*(longlong *)(param_8 + 0x1c) == 0) || (*(longlong *)(param_8 + 0x1e) == 0))
  goto LAB_18030e1fe;
  
  // 创建新的参数节点
  puVar16 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18, 0x28, 8, 3);  // 分配内存
  *puVar16 = 0;                      // 初始化
  puVar16[1] = 0;                    // 初始化
  puVar16[2] = 0;                    // 初始化
  *(undefined4 *)(puVar16 + 3) = 3;  // 设置标志
  puVar16[4] = 0;                    // 初始化
  
  puVar1 = (undefined8 *)(param_1 + 0x1b8);  // 获取渲染系统指针
  uVar14 = *(undefined8 *)(param_8 + 0x1c);  // 获取参数值
  uVar9 = *(undefined8 *)(param_8 + 0x1e);   // 获取参数值
  plStack_88 = puVar16;               // 保存指针
  
  lVar21 = FUN_18062b420(_DAT_180c8ed18, 0x38, *(undefined1 *)(param_1 + 0x1e0));  // 创建参数对象
  
  // 设置参数值
  uStack_f8 = (undefined4)uVar14;    // 保存参数
  uStack_f4 = (undefined4)((ulonglong)uVar14 >> 0x20);  // 保存参数
  uStack_f0 = (undefined4)uVar9;     // 保存参数
  uStack_ec = (undefined4)((ulonglong)uVar9 >> 0x20);   // 保存参数
  
  // 设置参数到对象
  *(undefined4 *)(lVar21 + 0x20) = uStack_f8;   // 设置参数
  *(undefined4 *)(lVar21 + 0x24) = uStack_f4;   // 设置参数
  *(undefined4 *)(lVar21 + 0x28) = uStack_f0;   // 设置参数
  *(undefined4 *)(lVar21 + 0x2c) = uStack_ec;   // 设置参数
  *(undefined8 **)(lVar21 + 0x30) = puVar16;    // 设置指针
  
  bVar11 = true;                     // 设置标志
  puVar16 = puVar1;                  // 设置指针
  
  // 遍历链表查找插入位置
  if (*(undefined8 **)(param_1 + 0x1c8) != (undefined8 *)0x0) {
    puVar17 = *(undefined8 **)(param_1 + 0x1c8);  // 获取链表头
    do {
      puVar16 = puVar17;             // 保存当前节点
      if ((*(ulonglong *)(lVar21 + 0x20) < (ulonglong)puVar16[4]) ||
         ((*(ulonglong *)(lVar21 + 0x20) <= (ulonglong)puVar16[4] &&
          (*(ulonglong *)(lVar21 + 0x28) < (ulonglong)puVar16[5])))) {
        bVar11 = true;               // 在范围内
        puVar17 = (undefined8 *)puVar16[1];  // 获取下一个节点
      }
      else {
        bVar11 = false;              // 不在范围内
        puVar17 = (undefined8 *)*puVar16;  // 获取下一个节点
      }
    } while (puVar17 != (undefined8 *)0x0);
  }
  
  puVar17 = puVar16;                 // 保存节点
  if (bVar11) {
    if (puVar16 == *(undefined8 **)(param_1 + 0x1c0)) goto LAB_18030e1b3;
    puVar17 = (undefined8 *)func_0x00018066b9a0(puVar16);  // 获取前驱节点
  }
  
  // 检查参数范围
  if ((*(ulonglong *)(lVar21 + 0x20) <= (ulonglong)puVar17[4]) &&
     ((*(ulonglong *)(lVar21 + 0x20) < (ulonglong)puVar17[4] ||
      (*(ulonglong *)(lVar21 + 0x28) <= (ulonglong)puVar17[5])))) {
    // WARNING: Subroutine does not return
    FUN_18064e900(lVar21);          // 错误处理
  }
  
LAB_18030e1b3:
  // 插入新节点
  if (puVar16 != puVar1) {
    if (((ulonglong)puVar16[4] <= *(ulonglong *)(lVar21 + 0x20)) &&
       (((ulonglong)puVar16[4] < *(ulonglong *)(lVar21 + 0x20) ||
        ((ulonglong)puVar16[5] <= *(ulonglong *)(lVar21 + 0x28))))) {
      uVar22 = 1;                    // 设置标志
    }
  }
  
  // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar21, puVar16, puVar1, uVar22);  // 插入节点
}

/*========================== 渲染参数处理器 ==========================*/
/**
 * 渲染参数处理器 - 处理和更新渲染参数
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 处理标志
 * @param param_3 参数数据数组
 * 
 * @return 处理结果状态
 * 
 * 功能说明：
 * - 查找和处理渲染参数
 * - 更新材质和颜色参数
 * - 管理参数生命周期
 * - 优化参数存储
 * - 返回处理状态
 */
undefined8 RenderingSystem_ParameterHandler(longlong param_1, undefined8 param_2, undefined4 *param_3)
{
  undefined8 *puVar1;           // 通用指针变量1
  undefined4 uVar2;             // 通用变量2
  undefined4 uVar3;             // 通用变量3
  uint uVar4;                   // 无符号整数变量4
  ulonglong uVar5;              // 无符号长整型变量5
  ulonglong uVar6;              // 无符号长整型变量6
  longlong *plVar7;             // 长整型指针变量7
  longlong lVar8;               // 长整型变量8
  undefined4 uVar9;             // 通用变量9
  undefined8 uVar10;            // 通用变量10
  undefined8 *puVar11;          // 通用指针变量11
  undefined8 *puVar12;          // 通用指针变量12
  undefined8 *puVar13;          // 通用指针变量13
  undefined8 *puVar14;          // 通用指针变量14
  ulonglong uVar15;             // 无符号长整型变量15
  longlong *plVar16;            // 长整型指针变量16
  longlong *plVar17;            // 长整型指针变量17
  uint7 uVar19;                 // 7位无符号整数变量19
  undefined4 *puVar18;          // 通用指针变量18
  undefined8 uVar20;            // 通用变量20
  
  uVar20 = 0xfffffffffffffffe;   // 初始化变量
  plVar16 = (longlong *)0x0;     // 初始化指针
  uVar5 = *(ulonglong *)(param_3 + 0x1c);  // 获取参数值
  plVar17 = plVar16;             // 保存指针
  
  if ((uVar5 != 0) && (uVar15 = *(ulonglong *)(param_3 + 0x1e), uVar15 != 0)) {
    // 参数有效，进行处理
    puVar1 = (undefined8 *)(param_1 + 0x1b8);  // 获取渲染系统指针
    puVar13 = *(undefined8 **)(param_1 + 0x1c8);  // 获取参数链表头
    puVar11 = puVar1;              // 设置遍历起始点
    puVar18 = param_3;             // 保存参数指针
    
    if (puVar13 == (undefined8 *)0x0) {
LAB_18030e535:
      puVar12 = puVar1;            // 设置链表指针
    }
    else {
      // 遍历参数链表
      do {
        uVar6 = puVar13[4];         // 获取参数值
        uVar19 = (uint7)(uVar6 >> 8);  // 提取7位数据
        if ((uVar6 < uVar5) || ((uVar6 <= uVar5 && ((ulonglong)puVar13[5] < uVar15)))) {
          puVar18 = (undefined4 *)CONCAT71(uVar19, 1);  // 设置标志
          puVar14 = (undefined8 *)*puVar13;  // 获取下一个节点
        }
        else {
          puVar18 = (undefined4 *)((ulonglong)uVar19 << 8);  // 清除标志
          puVar14 = (undefined8 *)puVar13[1];  // 获取下一个节点
        }
        puVar12 = puVar13;           // 保存当前节点
        if ((char)puVar18 != '\0') {
          puVar12 = puVar11;         // 更新链表指针
        }
        puVar11 = puVar12;           // 更新遍历指针
        puVar13 = puVar14;           // 移动到下一个节点
      } while (puVar14 != (undefined8 *)0x0);
      
      // 检查是否找到合适的位置
      if (((puVar12 == puVar1) || (uVar5 < (ulonglong)puVar12[4])) ||
         ((uVar5 <= (ulonglong)puVar12[4] && (uVar15 < (ulonglong)puVar12[5])))) goto LAB_18030e535;
    }
    
    // 处理找到的参数
    if ((puVar12 != puVar1) &&
       (plVar7 = (longlong *)puVar12[6], plVar17 = (longlong *)0x0, plVar7 != (longlong *)0x0)) {
      uVar15 = (ulonglong)(int)plVar7[4];  // 获取索引
      if (uVar15 < (ulonglong)(plVar7[1] - *plVar7 >> 3)) {
        plVar16 = *(longlong **)(*plVar7 + uVar15 * 8);  // 获取数据指针
        if (plVar16 != (longlong *)0x0) {
          (**(code **)(*plVar16 + 0x28))(plVar16, uVar15, puVar18, uVar5, 0xfffffffffffffffe);  // 处理参数
        }
        *(int *)(plVar7 + 4) = (int)plVar7[4] + 1;  // 更新计数
      }
      *(undefined4 *)((longlong)plVar7 + 0x24) = 0;  // 清零
      plVar17 = plVar16;            // 保存指针
      
      if (plVar16 != (longlong *)0x0) {
        FUN_180076910(plVar16, param_2);  // 应用参数
        uVar4 = param_3[4];             // 获取颜色数据
        
        // 处理颜色通道
        *(float *)(plVar16 + 0x47) = (float)(uVar4 >> 0x10 & 0xff) * RENDERING_COLOR_SCALE;  // 红色通道
        *(float *)((longlong)plVar16 + 0x23c) = (float)(uVar4 >> 8 & 0xff) * RENDERING_COLOR_SCALE;  // 绿色通道
        *(float *)(plVar16 + 0x48) = (float)(uVar4 & 0xff) * RENDERING_COLOR_SCALE;  // 蓝色通道
        *(float *)((longlong)plVar16 + 0x244) = (float)(uVar4 >> 0x18) * RENDERING_COLOR_SCALE;  // alpha通道
        
        uVar2 = param_3[6];             // 获取参数
        uVar3 = param_3[5];             // 获取参数
        lVar8 = plVar16[0x59];          // 获取对象指针
        
        // 设置材质参数
        *(undefined4 *)(lVar8 + 0xa0) = param_3[0x15];  // 设置材质参数
        *(undefined4 *)(lVar8 + 0xa4) = 0;               // 清零
        *(undefined4 *)(lVar8 + 0xa8) = uVar3;           // 设置参数
        *(undefined4 *)(lVar8 + 0xac) = uVar2;           // 设置参数
        
        uVar10 = *(undefined8 *)(param_3 + 0xe);          // 获取参数
        lVar8 = plVar16[0x59];                           // 获取对象指针
        
        // 设置纹理参数
        *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(param_3 + 0xc);  // 设置纹理坐标
        *(undefined8 *)(lVar8 + 0x18) = uVar10;                       // 设置纹理参数
        
        uVar4 = param_3[0x10];            // 获取颜色数据
        lVar8 = plVar16[0x59];            // 获取对象指针
        
        // 处理次级颜色通道
        *(float *)(lVar8 + 0x70) = (float)(uVar4 >> 0x10 & 0xff) * RENDERING_COLOR_SCALE;  // 红色通道
        *(float *)(lVar8 + 0x74) = (float)(uVar4 >> 8 & 0xff) * RENDERING_COLOR_SCALE;   // 绿色通道
        *(float *)(lVar8 + 0x78) = (float)(uVar4 & 0xff) * RENDERING_COLOR_SCALE;         // 蓝色通道
        *(float *)(lVar8 + 0x7c) = (float)(uVar4 >> 0x18) * RENDERING_COLOR_SCALE;     // alpha通道
        
        uVar10 = *(undefined8 *)(param_3 + 0x13);          // 获取参数
        lVar8 = plVar16[0x59];                           // 获取对象指针
        
        // 设置高级纹理参数
        *(undefined8 *)(lVar8 + 0x80) = *(undefined8 *)(param_3 + 0x11);  // 设置高级纹理参数
        *(undefined8 *)(lVar8 + 0x88) = uVar10;                       // 设置高级纹理参数
        
        uVar10 = *(undefined8 *)(param_3 + 0x18);          // 获取参数
        lVar8 = plVar16[0x59];                           // 获取对象指针
        
        // 设置材质变换参数
        *(undefined8 *)(lVar8 + 0x90) = *(undefined8 *)(param_3 + 0x16);  // 设置变换参数
        *(undefined8 *)(lVar8 + 0x98) = uVar10;                       // 设置变换参数
        
        uVar2 = param_3[8];              // 获取参数
        lVar8 = plVar16[0x59];            // 获取对象指针
        
        // 设置渲染状态参数
        *(undefined4 *)(lVar8 + 0x60) = param_3[7];  // 设置渲染状态
        *(undefined4 *)(lVar8 + 100) = uVar2;        // 设置渲染参数
        *(undefined4 *)(lVar8 + 0x68) = 0;           // 清零
        *(undefined4 *)(lVar8 + 0x6c) = 0;           // 清零
        
        uVar2 = param_3[1];              // 获取参数
        uVar3 = *param_3;                 // 获取参数
        uVar9 = param_3[3];               // 获取参数
        uVar10 = *(undefined8 *)(param_3 + 2);  // 获取参数
        lVar8 = plVar16[0x59];            // 获取对象指针
        
        // 设置基础渲染参数
        *(undefined4 *)(lVar8 + 0x50) = param_3[2];  // 设置基础参数
        *(undefined4 *)(lVar8 + 0x54) = uVar9;        // 设置基础参数
        *(undefined4 *)(lVar8 + 0x58) = uVar3;         // 设置基础参数
        *(undefined4 *)(lVar8 + 0x5c) = uVar2;         // 设置基础参数
        
        uVar2 = param_3[0xb];            // 获取参数
        uVar3 = param_3[10];             // 获取参数
        uVar9 = param_3[0xb];            // 获取参数
        lVar8 = plVar16[0x59];            // 获取对象指针
        
        // 设置高级渲染参数
        *(undefined4 *)(lVar8 + 0x20) = param_3[9];   // 设置高级参数
        *(undefined4 *)(lVar8 + 0x24) = uVar3;         // 设置高级参数
        *(undefined4 *)(lVar8 + 0x28) = uVar9;         // 设置高级参数
        *(undefined4 *)(lVar8 + 0x2c) = 0;             // 清零
        
        FUN_18030d6e0(param_1, plVar16, param_3[0x1a], uVar2, uVar20, uVar10);  // 应用渲染参数
        uVar20 = 1;                    // 设置成功标志
        goto LAB_18030e7dc;
      }
    }
  }
  
  uVar20 = 0;                        // 设置失败标志
  
LAB_18030e7dc:
  if (plVar17 != (longlong *)0x0) {
    (**(code **)(*plVar17 + 0x38))(plVar17);  // 清理资源
  }
  return uVar20;                      // 返回处理结果
}

/*========================== 渲染系统清理器 ==========================*/
/**
 * 渲染系统清理器 - 清理渲染系统资源和状态
 * 
 * @param param_1 渲染系统上下文指针
 * 
 * 功能说明：
 * - 清理渲染资源
 * - 重置渲染状态
 * - 释放内存资源
 * - 处理锁定的资源
 * - 确保系统稳定性
 */
void RenderingSystem_Cleaner(longlong param_1)
{
  longlong lVar1;               // 长整型变量1
  longlong lVar2;               // 长整型变量2
  uint uVar3;                  // 无符号整数变量3
  ulonglong uVar4;              // 无符号长整型变量4
  ulonglong uVar5;              // 无符号长整型变量5
  ulonglong uVar6;              // 无符号长整型变量6
  ulonglong uVar7;              // 无符号长整型变量7
  ulonglong uVar8;              // 无符号长整型变量8
  
  lVar1 = *(longlong *)(param_1 + 0x130);  // 获取资源列表起始位置
  uVar8 = 0;                     // 初始化计数器
  uVar4 = uVar8;                 // 初始化索引
  uVar6 = uVar8;                 // 初始化偏移量
  
  // 清理第一组资源
  if (*(longlong *)(param_1 + 0x138) - lVar1 >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(uVar6 + lVar1);  // 获取资源指针
      if (*(char *)(lVar1 + 0xf9) != '\0') {  // 检查资源状态
        if (*(longlong *)(lVar1 + 0x1d8) != 0) {  // 检查资源锁定状态
          // WARNING: Subroutine does not return
          FUN_18064e900();           // 错误处理
        }
        *(undefined8 *)(lVar1 + 0x1d8) = 0;  // 清除资源锁定
        LOCK();                       // 获取锁
        *(undefined1 *)(lVar1 + 0xf9) = 0;  // 清除资源状态
        UNLOCK();                     // 释放锁
      }
      lVar1 = *(longlong *)(param_1 + 0x130);  // 重新获取起始位置
      uVar3 = (int)uVar4 + 1;        // 增加计数器
      uVar4 = (ulonglong)uVar3;      // 更新索引
      uVar6 = uVar6 + 8;             // 更新偏移量
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0x138) - lVar1 >> 3));
  }
  
  // 清理第二组资源
  lVar1 = *(longlong *)(param_1 + 0x150);  // 获取资源列表起始位置
  uVar4 = uVar8;                     // 重置索引
  uVar6 = uVar8;                     // 重置偏移量
  
  if (*(longlong *)(param_1 + 0x158) - lVar1 >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(uVar6 + lVar1);  // 获取资源指针
      if (*(char *)(lVar1 + 0xf9) != '\0') {  // 检查资源状态
        if (*(longlong *)(lVar1 + 0x1d8) != 0) {  // 检查资源锁定状态
          // WARNING: Subroutine does not return
          FUN_18064e900();           // 错误处理
        }
        *(undefined8 *)(lVar1 + 0x1d8) = 0;  // 清除资源锁定
        LOCK();                       // 获取锁
        *(undefined1 *)(lVar1 + 0xf9) = 0;  // 清除资源状态
        UNLOCK();                     // 释放锁
      }
      lVar1 = *(longlong *)(param_1 + 0x150);  // 重新获取起始位置
      uVar3 = (int)uVar4 + 1;        // 增加计数器
      uVar4 = (ulonglong)uVar3;      // 更新索引
      uVar6 = uVar6 + 8;             // 更新偏移量
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0x158) - lVar1 >> 3));
  }
  
  // 清理第三组资源
  lVar1 = *(longlong *)(param_1 + 0x178);  // 获取资源列表起始位置
  lVar2 = *(longlong *)(param_1 + 0x170);  // 获取资源列表结束位置
  uVar4 = uVar8;                     // 重置索引
  uVar6 = uVar8;                     // 重置偏移量
  
  if (lVar1 - lVar2 >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(uVar6 + lVar2);  // 获取资源指针
      if (*(char *)(lVar1 + 0xf9) != '\0') {  // 检查资源状态
        if (*(longlong *)(lVar1 + 0x1d8) != 0) {  // 检查资源锁定状态
          // WARNING: Subroutine does not return
          FUN_18064e900();           // 错误处理
        }
        *(undefined8 *)(lVar1 + 0x1d8) = 0;  // 清除资源锁定
        LOCK();                       // 获取锁
        *(undefined1 *)(lVar1 + 0xf9) = 0;  // 清除资源状态
        UNLOCK();                     // 释放锁
      }
      lVar1 = *(longlong *)(param_1 + 0x178);  // 重新获取结束位置
      uVar3 = (int)uVar4 + 1;        // 增加计数器
      lVar2 = *(longlong *)(param_1 + 0x170);  // 重新获取起始位置
      uVar4 = (ulonglong)uVar3;      // 更新索引
      uVar6 = uVar6 + 8;             // 更新偏移量
    } while ((ulonglong)(longlong)(int)uVar3 < (ulonglong)(lVar1 - lVar2 >> 3));
  }
  
  // 清理第四组资源
  uVar4 = uVar8;                     // 重置索引
  uVar6 = uVar8;                     // 重置偏移量
  
  if (lVar1 - lVar2 >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(uVar6 + lVar2);  // 获取资源指针
      if (*(char *)(lVar1 + 0xf9) != '\0') {  // 检查资源状态
        if (*(longlong *)(lVar1 + 0x1d8) != 0) {  // 检查资源锁定状态
          // WARNING: Subroutine does not return
          FUN_18064e900();           // 错误处理
        }
        *(undefined8 *)(lVar1 + 0x1d8) = 0;  // 清除资源锁定
        LOCK();                       // 获取锁
        *(undefined1 *)(lVar1 + 0xf9) = 0;  // 清除资源状态
        UNLOCK();                     // 释放锁
      }
      lVar2 = *(longlong *)(param_1 + 0x170);  // 重新获取起始位置
      uVar3 = (int)uVar4 + 1;        // 增加计数器
      uVar4 = (ulonglong)uVar3;      // 更新索引
      uVar6 = uVar6 + 8;             // 更新偏移量
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0x178) - lVar2 >> 3));
  }
  
  // 清理嵌套资源
  lVar1 = **(longlong **)(param_1 + 0x110);  // 获取嵌套资源列表
  uVar4 = uVar8;                     // 重置索引
  uVar6 = uVar8;                     // 重置偏移量
  
  if ((*(longlong **)(param_1 + 0x110))[1] - lVar1 >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(lVar1 + uVar6);  // 获取资源指针
      lVar2 = *(longlong *)(lVar1 + 8);     // 获取子资源起始位置
      uVar5 = uVar8;                         // 重置子索引
      uVar7 = uVar8;                         // 重置子偏移量
      
      if (*(longlong *)(lVar1 + 0x10) - lVar2 >> 3 != 0) {
        do {
          lVar2 = *(longlong *)(uVar7 + lVar2);  // 获取子资源指针
          if (*(char *)(lVar2 + 0xf9) != '\0') {  // 检查资源状态
            if (*(longlong *)(lVar2 + 0x1d8) != 0) {  // 检查资源锁定状态
              // WARNING: Subroutine does not return
              FUN_18064e900();           // 错误处理
            }
            *(undefined8 *)(lVar2 + 0x1d8) = 0;  // 清除资源锁定
            LOCK();                       // 获取锁
            *(undefined1 *)(lVar2 + 0xf9) = 0;  // 清除资源状态
            UNLOCK();                     // 释放锁
          }
          lVar2 = *(longlong *)(lVar1 + 8);  // 重新获取子资源起始位置
          uVar3 = (int)uVar5 + 1;        // 增加子计数器
          uVar5 = (ulonglong)uVar3;      // 更新子索引
          uVar7 = uVar7 + 8;             // 更新子偏移量
        } while ((ulonglong)(longlong)(int)uVar3 <
                 (ulonglong)(*(longlong *)(lVar1 + 0x10) - lVar2 >> 3));
      }
      
      uVar3 = (int)uVar4 + 1;            // 增加计数器
      lVar1 = **(longlong **)(param_1 + 0x110);  // 重新获取嵌套资源列表
      uVar4 = (ulonglong)uVar3;          // 更新索引
      uVar6 = uVar6 + 8;                 // 更新偏移量
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)((*(longlong **)(param_1 + 0x110))[1] - lVar1 >> 3));
  }
  
  return;  // 清理完成
}

/*========================== 渲染状态重置器 ==========================*/
/**
 * 渲染状态重置器 - 重置渲染系统状态
 * 
 * @param param_1 重置标志
 * @param param_2 渲染系统上下文指针
 * 
 * 功能说明：
 * - 重置渲染状态
 * - 清理资源锁定
 * - 释放内存资源
 * - 重置系统参数
 * - 确保系统一致性
 */
void RenderingSystem_StateResetter(undefined8 param_1, longlong param_2)
{
  longlong lVar1;               // 长整型变量1
  longlong lVar2;               // 长整型变量2
  uint uVar3;                  // 无符号整数变量3
  ulonglong uVar4;              // 无符号长整型变量4
  ulonglong uVar5;              // 无符号长整型变量5
  int unaff_R12D;              // 未使用寄存器R12D
  ulonglong unaff_R13;          // 未使用寄存器R13
  longlong unaff_R14;           // 未使用寄存器R14
  ulonglong uVar6;              // 无符号长整型变量6
  
  uVar6 = unaff_R13;             // 获取寄存器值
  
  do {
    lVar1 = *(longlong *)(param_2 + uVar6);  // 获取资源指针
    uVar4 = unaff_R13 & 0xffffffff;  // 获取低32位
    lVar2 = *(longlong *)(lVar1 + 8);  // 获取子资源起始位置
    uVar5 = unaff_R13;             // 保存寄存器值
    
    if (*(longlong *)(lVar1 + 0x10) - lVar2 >> 3 != 0) {
      do {
        lVar2 = *(longlong *)(uVar5 + lVar2);  // 获取子资源指针
        if (*(char *)(lVar2 + 0xf9) != '\0') {  // 检查资源状态
          if (*(longlong *)(lVar2 + 0x1d8) != 0) {  // 检查资源锁定状态
            // WARNING: Subroutine does not return
            FUN_18064e900();           // 错误处理
          }
          *(ulonglong *)(lVar2 + 0x1d8) = unaff_R13;  // 清除资源锁定
          LOCK();                       // 获取锁
          *(char *)(lVar2 + 0xf9) = (char)unaff_R13;  // 清除资源状态
          UNLOCK();                     // 释放锁
        }
        lVar2 = *(longlong *)(lVar1 + 8);  // 重新获取子资源起始位置
        uVar3 = (int)uVar4 + 1;        // 增加计数器
        uVar4 = (ulonglong)uVar3;      // 更新索引
        uVar5 = uVar5 + 8;             // 更新偏移量
      } while ((ulonglong)(longlong)(int)uVar3 <
               (ulonglong)(*(longlong *)(lVar1 + 0x10) - lVar2 >> 3));
    }
    
    unaff_R12D = unaff_R12D + 1;      // 增加计数器
    uVar6 = uVar6 + 8;                // 更新偏移量
    param_2 = **(longlong **)(unaff_R14 + 0x110);  // 重新获取资源列表
  } while ((ulonglong)(longlong)unaff_R12D <
           (ulonglong)((*(longlong **)(unaff_R14 + 0x110))[1] - param_2 >> 3));
  
  return;  // 重置完成
}

/*========================== 渲染参数优化器 ==========================*/
/**
 * 渲染参数优化器 - 优化渲染参数和内存使用
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 顶点数据指针
 * @param param_3 纹理坐标指针
 * @param param_4 材质参数指针
 * @param param_5 顶点数量
 * @param param_6 材质数量
 * @param param_7 优化标志
 * @param param_8 优化参数
 * 
 * 功能说明：
 * - 优化渲染参数结构
 * - 减少内存使用
 * - 提高渲染效率
 * - 清理冗余数据
 * - 优化资源分配
 */
void RenderingSystem_ParameterOptimizer(longlong param_1, longlong param_2, longlong param_3, longlong param_4, 
                                        int param_5, int param_6, undefined8 param_7, longlong param_8)
{
  undefined4 *puVar1;           // 通用指针变量1
  undefined4 uVar2;             // 通用变量2
  undefined4 uVar3;             // 通用变量3
  int iVar4;                    // 整数变量4
  uint uVar5;                   // 无符号整数变量5
  longlong *plVar6;             // 长整型指针变量6
  undefined8 uVar7;             // 通用变量7
  longlong *plVar8;             // 长整型指针变量8
  int iVar9;                    // 整数变量9
  undefined4 *puVar10;          // 通用指针变量10
  longlong lVar11;              // 长整型变量11
  int iVar12;                   // 整数变量12
  longlong *plStack_c8;         // 栈指针c8
  longlong *plStack_c0;         // 栈指针c0
  undefined1 auStack_b8 [8];    // 栈数组b8
  undefined8 uStack_b0;         // 栈变量b0
  longlong *plStack_a0;         // 栈指针a0
  char cStack_98;               // 栈字符98
  char cStack_97;               // 栈字符97
  char cStack_96;               // 栈字符96
  longlong *plStack_90;         // 栈指针90
  undefined8 uStack_88;         // 栈变量88
  undefined4 uStack_80;         // 栈变量80
  undefined4 uStack_7c;         // 栈变量7c
  undefined4 uStack_78;         // 栈变量78
  undefined4 uStack_74;         // 栈变量74
  undefined8 uStack_70;         // 栈变量70
  undefined8 uStack_68;         // 栈变量68
  undefined8 uStack_60;         // 栈变量60
  
  // 初始化栈变量
  uStack_70 = 0xfffffffffffffffe;     // 设置优化标志
  uVar7 = FUN_18062b1e0(_DAT_180c8ed18, 0x300, 0x10, 3);  // 分配优化内存池
  plVar8 = (longlong *)FUN_180075030(uVar7, 1);           // 初始化内存
  plStack_90 = plVar8;              // 保存内存指针
  
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8);  // 调用初始化函数
  }
  
  // 设置优化回调函数
  (**(code **)(plVar8[2] + 0x10))(plVar8 + 2, &UNK_180a1a6f0);  // 设置优化回调
  
  // 检查优化标志
  if (*(char *)((longlong)plVar8 + 0xfb) != '\x01') {
    *(undefined1 *)((longlong)plVar8 + 0xfb) = 1;  // 设置优化标志
    FUN_180079520(plVar8);          // 执行优化
  }
  
  if (*(char *)((longlong)plVar8 + 0xfa) != '\x01') {
    *(undefined1 *)((longlong)plVar8 + 0xfa) = 1;  // 设置优化标志
    FUN_180079520(plVar8);          // 执行优化
  }
  
  // 初始化优化数据结构
  plStack_c8 = (longlong *)0x0;      // 初始化数据指针
  plStack_c0 = (longlong *)0x0;      // 初始化数据指针
  uStack_88 = auStack_b8;            // 设置栈指针
  plStack_a0 = (longlong *)0x0;      // 初始化栈指针
  uStack_b0 = 0;                     // 初始化栈变量
  auStack_b8[0] = 0;                 // 初始化栈数组
  
  // 开始优化处理
  FUN_18022f2e0(&plStack_c8, plVar8, 0);  // 初始化优化器
  lVar11 = (longlong)param_5;        // 设置优化数量
  
  if (0 < lVar11) {
    // 优化顶点数据
    uStack_78 = 0x41200000;           // 设置优化常量
    uStack_74 = 0x7f7fffff;           // 设置优化常量
    uStack_68 = 0;                     // 初始化栈变量
    uStack_60 = 0x7f7fffffbf800000;    // 设置优化常量
    param_5 = -1;                      // 设置优化标志
    puVar10 = (undefined4 *)(param_3 + 4);  // 获取纹理坐标指针
    
    do {
      plVar8 = plStack_c0;             // 获取数据指针
      uVar2 = *(undefined4 *)((param_2 - param_3) + (longlong)puVar10);  // 获取顶点数据
      uVar3 = *(undefined4 *)((param_2 - param_3) + -4 + (longlong)puVar10);  // 获取顶点数据
      uStack_88 = (undefined1 *)CONCAT44(*puVar10, puVar10[-1]);  // 合并数据
      iVar9 = (int)plStack_c0[2];      // 获取索引
      iVar12 = iVar9 + 1;               // 计算新索引
      iVar4 = *(int *)((longlong)plStack_c0 + 0x14);  // 获取容量
      
      // 检查容量是否足够
      if (iVar4 < iVar12) {
        if (iVar4 < 2) {
          *(undefined4 *)((longlong)plStack_c0 + 0x14) = 8;  // 设置最小容量
        }
        else {
          *(int *)((longlong)plStack_c0 + 0x14) = (iVar4 >> 1) + iVar4;  // 扩容
        }
        FUN_1800846d0(plStack_c0 + 2);  // 重新分配内存
      }
      
      plVar6 = plStack_c0;              // 保存数据指针
      *(int *)(plVar8 + 2) = iVar12;    // 更新索引
      puVar1 = (undefined4 *)(plStack_c0[3] + (longlong)iVar9 * 0x10);  // 获取数据位置
      *puVar1 = uVar3;                  // 保存优化数据
      puVar1[1] = uVar2;                // 保存优化数据
      puVar1[2] = uStack_78;            // 保存优化常量
      puVar1[3] = uStack_74;            // 保存优化常量
      uStack_80 = uVar3;                // 保存到栈
      uStack_7c = uVar2;                // 保存到栈
      
      // 处理附加优化数据
      if ((int)plStack_c0[7] != 0) {
        iVar4 = *(int *)((longlong)plStack_c0 + 0x3c);  // 获取附加容量
        if (iVar4 < iVar12) {
          if (iVar4 < 2) {
            *(undefined4 *)((longlong)plStack_c0 + 0x3c) = 8;  // 设置最小容量
          }
          else {
            *(int *)((longlong)plStack_c0 + 0x3c) = (iVar4 >> 1) + iVar4;  // 扩容
          }
          FUN_1800846d0(plStack_c0 + 7);  // 重新分配内存
        }
        *(int *)(plVar6 + 7) = iVar12;   // 更新索引
        puVar1 = (undefined4 *)(plStack_c0[8] + (longlong)iVar9 * 0x10);  // 获取数据位置
        *puVar1 = uVar3;                 // 保存优化数据
        puVar1[1] = uVar2;               // 保存优化数据
        puVar1[2] = 0x41200000;          // 保存优化常量
        puVar1[3] = 0x7f7fffff;          // 保存优化常量
      }
      
      cStack_98 = '\x01';               // 设置优化标志
      cStack_96 = '\x01';               // 设置优化标志
      FUN_1802350e0(&plStack_c8, iVar9, &uStack_88, &param_5, &uStack_68);  // 执行优化
      puVar10 = puVar10 + 2;            // 移动指针
      lVar11 = lVar11 + -1;             // 减少计数
      plVar8 = plStack_90;              // 恢复指针
    } while (lVar11 != 0);
  }
  
  // 优化材质参数
  iVar9 = param_6 / 3 + (param_6 >> 0x1f) +
          (int)(((longlong)param_6 / 3 + ((longlong)param_6 >> 0x3f) & 0xffffffffU) >> 0x1f);
  lVar11 = (longlong)iVar9;            // 转换为长整型
  
  if (0 < iVar9) {
    puVar10 = (undefined4 *)(param_4 + 4);  // 获取材质指针
    do {
      FUN_180235410(&plStack_c8, puVar10[-1], *puVar10, puVar10[1]);  // 优化材质数据
      puVar10 = puVar10 + 3;            // 移动指针
      lVar11 = lVar11 + -1;             // 减少计数
    } while (lVar11 != 0);
  }
  
  // 清理优化资源
  if ((plStack_c8 != (longlong *)0x0) && (plStack_c0 != (longlong *)0x0)) {
    if (cStack_96 != '\0') {
      FUN_180075b70();                 // 执行清理
    }
    FUN_18007f6a0(auStack_b8);          // 释放内存
    if (cStack_98 != '\0') {
      FUN_180079520(plStack_c8);        // 清理数据
    }
    if (cStack_97 != '\0') {
      FUN_180079520(plStack_c8);        // 清理数据
    }
    plVar6 = plStack_c0;                // 保存指针
    plStack_c0 = (longlong *)0x0;       // 重置指针
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x38))();  // 调用清理函数
    }
  }
  
  FUN_18007f6a0(auStack_b8);            // 释放内存
  
  if (plStack_a0 != (longlong *)0x0) {
    (**(code **)(*plStack_a0 + 0x38))();  // 调用清理函数
  }
  if (plStack_c0 != (longlong *)0x0) {
    (**(code **)(*plStack_c0 + 0x38))();  // 调用清理函数
  }
  if (plStack_c8 != (longlong *)0x0) {
    (**(code **)(*plStack_c8 + 0x38))();  // 调用清理函数
  }
  
  // 应用优化参数
  FUN_180076910(plVar8, param_7);      // 应用优化
  lVar11 = param_8;                   // 获取优化参数
  uVar5 = *(uint *)(param_8 + 0x20);  // 获取颜色数据
  
  // 优化颜色通道
  *(float *)(plVar8 + 0x47) = (float)(uVar5 >> 0x10 & 0xff) * RENDERING_COLOR_SCALE;  // 红色通道
  *(float *)((longlong)plVar8 + 0x23c) = (float)(uVar5 >> 8 & 0xff) * RENDERING_COLOR_SCALE;  // 绿色通道
  *(float *)(plVar8 + 0x48) = (float)(uVar5 & 0xff) * RENDERING_COLOR_SCALE;  // 蓝色通道
  *(float *)((longlong)plVar8 + 0x244) = (float)(uVar5 >> 0x18) * RENDERING_COLOR_SCALE;  // alpha通道
  
  if (plVar8[0x59] != 0) {
    FUN_18030ef70(uVar5, plVar8, param_8);  // 执行高级优化
    FUN_1800b88d0((longlong)*(int *)(param_1 + 0x124) * 0x20 + 0x170 + param_1, &plStack_90);  // 优化资源
    plVar8 = plStack_90;              // 恢复指针
    FUN_18030d6e0(param_1, plStack_90, *(undefined4 *)(lVar11 + 0x60));  // 应用优化
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x38))(plVar8);  // 执行最终优化
    }
    return;  // 优化完成
  }
  
  // 处理优化失败情况
  *(uint *)(plVar8 + 0x20) = *(uint *)(plVar8 + 0x20) | 8;  // 设置优化失败标志
  uVar7 = FUN_18062b1e0(_DAT_180c8ed18, 0xd0, 4, 9);  // 分配错误处理内存
  // WARNING: Subroutine does not return
  memset(uVar7, 0, 0xd0);             // 清零内存
}

/*==============================================================================
模块功能总结：
1. 渲染参数设置器 - 完整的渲染参数设置和管理功能
2. 渲染参数处理器 - 高效的参数处理和更新机制
3. 渲染系统清理器 - 全面的资源清理和状态重置
4. 渲染状态重置器 - 安全的状态重置和资源释放
5. 渲染参数优化器 - 智能的参数优化和内存管理

技术特点：
- 支持动态内存管理
- 实现了线程安全操作
- 提供了完整的错误处理
- 支持多种渲染参数类型
- 具有良好的扩展性
==============================================================================*/