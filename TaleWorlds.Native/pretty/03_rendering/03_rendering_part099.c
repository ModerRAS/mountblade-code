#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

/**
 * 03_rendering_part099.c - 渲染系统高级数据处理和状态管理模块
 * 
 * 本模块包含3个核心函数，主要功能：
 * 1. 渲染系统参数处理器 - 处理渲染参数的复制、状态管理和标志处理
 * 2. 渲染系统状态比较器 - 比较两个渲染状态对象的差异
 * 3. 渲染系统参数初始化器 - 初始化渲染参数结构体
 * 
 * 技术特点：
 * - 高级参数处理和状态管理
 * - 复杂的标志位操作和条件判断
 * - 内存管理和数据结构操作
 * - 浮点数精度比较和容差处理
 * - 资源生命周期管理
 * 
 * 主要应用场景：
 * - 渲染状态变更检测
 * - 参数批量处理和优化
 * - 渲染资源状态同步
 * - 性能监控和状态跟踪
 */

// ============================================================================
// 常量定义和宏定义
// ============================================================================

/** 渲染状态标志位常量 */
#define RENDERING_STATE_FLAG_DIRTY           0x00000004  // 状态脏标记
#define RENDERING_STATE_FLAG_SHADER_CHANGED  0x00000800  // 着色器变更标记
#define RENDERING_STATE_FLAG_TEXTURE_CHANGED 0x00000020  // 纹理变更标记
#define RENDERING_STATE_FLAG_MATERIAL_CHANGED 0x00000080  // 材质变更标记
#define RENDERING_STATE_FLAG_GEOMETRY_CHANGED 0x00000008  // 几何体变更标记

/** 浮点数比较容差 */
#define FLOAT_COMPARISON_TOLERANCE 0.0001f

/** 内存对齐常量 */
#define MEMORY_ALIGNMENT_MASK 0xFFFFFFFF00000000UL
#define STACK_CANARY_VALUE 0xFFFFFFFFFFFFFFFEUL

// ============================================================================
// 函数声明和别名定义
// ============================================================================

/**
 * 渲染系统参数处理器
 * 
 * 主要功能：
 * - 处理渲染参数的复制和状态管理
 * - 管理渲染标志位和状态变更
 * - 执行资源加载和释放操作
 * - 处理纹理和材质参数
 * - 管理渲染上下文和管线状态
 * 
 * 技术特点：
 * - 复杂的条件分支和状态判断
 * - 内存管理和资源生命周期控制
 * - 字符串处理和哈希表操作
 * - 多线程同步和互斥锁处理
 * - 高级参数验证和错误处理
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 渲染参数源指针
 * @param param_3 渲染目标指针
 * @param param_4 渲染标志位参数
 * @param param_5 可选的渲染数据指针
 */
void rendering_system_parameter_processor(int64_t param_1, int64_t param_2, int64_t param_3, uint64_t param_4, int64_t param_5);

/**
 * 渲染系统状态比较器
 * 
 * 主要功能：
 * - 比较两个渲染状态对象的差异
 * - 检测参数变更并设置相应的标志位
 * - 执行浮点数精度比较
 * - 管理状态变更通知
 * 
 * 技术特点：
 * - 高精度的浮点数比较算法
 * - 多层次的状态差异检测
 * - 内存块比较和优化
 * - 标志位管理和状态同步
 * 
 * @param param_1 源渲染状态指针
 * @param param_2 目标渲染状态指针
 * @return bool 如果状态有变更返回true，否则返回false
 */
bool rendering_system_state_comparator(int64_t param_1, int64_t param_2);

/**
 * 渲染系统参数初始化器
 * 
 * 主要功能：
 * - 初始化渲染参数结构体
 * - 设置默认的渲染状态值
 * - 配置标准的渲染参数
 * - 准备渲染环境
 * 
 * 技术特点：
 * - 标准化的参数初始化流程
 * - 默认值设置和内存清零
 * - 浮点数常量的精确设置
 * - 内存对齐和结构体初始化
 * 
 * @param param_1 要初始化的渲染参数指针
 */
void rendering_system_parameter_initializer(int32_t *param_1);

// 函数别名定义
#define FUN_1803269f0 rendering_system_parameter_processor
#define FUN_180327250 rendering_system_state_comparator  
#define FUN_180327540 rendering_system_parameter_initializer

// ============================================================================
// 函数实现
// ============================================================================

/**
 * 渲染系统参数处理器实现
 * 
 * 详细功能说明：
 * 1. 参数验证和状态检查
 *    - 检查渲染标志位和状态参数
 *    - 验证参数有效性和完整性
 *    - 处理条件分支和状态转换
 * 
 * 2. 资源管理和数据处理
 *    - 复制渲染参数和状态数据
 *    - 管理纹理和材质资源
 *    - 处理内存分配和释放
 * 
 * 3. 状态同步和标志处理
 *    - 更新渲染状态标志位
 *    - 同步渲染上下文
 *    - 处理管线状态变更
 * 
 * 4. 高级渲染功能
 *    - 批量参数处理
 *    - 资源生命周期管理
 *    - 多线程同步操作
 * 
 * @param param_1 渲染系统上下文指针，包含渲染状态和资源信息
 * @param param_2 渲染参数源指针，包含源参数数据
 * @param param_3 渲染目标指针，用于存储处理结果
 * @param param_4 渲染标志位参数，控制处理流程
 * @param param_5 可选的渲染数据指针，提供额外的渲染信息
 */
void rendering_system_parameter_processor(int64_t param_1, int64_t param_2, int64_t param_3, uint64_t param_4, int64_t param_5)
{
    // 局部变量声明
    int32_t *puVar1;
    int32_t *puVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    bool bVar9;
    bool bVar10;
    char cVar11;
    byte bVar12;
    int iVar13;
    uint64_t *puVar14;
    int64_t lVar15;
    int64_t *plVar16;
    int64_t lVar17;
    uint64_t uVar18;
    int64_t lVar19;
    uint *puVar20;
    int32_t uVar21;
    int32_t uVar22;
    uint64_t uVar23;
    uint uVar24;
    int iVar25;
    int32_t uVar26;
    
    // 栈变量和临时存储
    int32_t extraout_XMM0_Da;
    int32_t extraout_XMM0_Da_00;
    int32_t extraout_XMM0_Da_01;
    int32_t extraout_XMM0_Da_02;
    int32_t extraout_XMM0_Da_03;
    int8_t auStack_168 [32];
    uint64_t uStack_148;
    char cStack_128;
    char cStack_127;
    char cStack_126;
    int64_t *plStack_120;
    int64_t *plStack_118;
    int32_t uStack_110;
    void *puStack_108;
    int64_t lStack_100;
    uint64_t uStack_f8;
    int64_t *plStack_f0;
    uint64_t uStack_e8;
    uint64_t uStack_e0;
    int32_t uStack_d8;
    int32_t uStack_d4;
    int32_t uStack_d0;
    int32_t uStack_cc;
    int64_t *plStack_c8;
    int64_t lStack_c0;
    uint64_t uStack_b8;
    int64_t lStack_b0;
    void *puStack_a8;
    int8_t *puStack_a0;
    int32_t uStack_98;
    int8_t auStack_90 [72];
    uint64_t uStack_48;
    
    // 初始化栈保护和安全检查
    uStack_b8 = STACK_CANARY_VALUE;
    uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
    lStack_c0 = param_5;
    uStack_110 = 0;
    
    // 解析渲染标志位参数
    uVar18 = param_4 >> 1;
    uVar24 = *(uint *)(param_1 + 0x5c);
    
    // 处理渲染状态标志位
    if (((uVar24 & 8) != 0) || (cStack_128 = '\0', (uVar18 & 1) != 0)) {
        cStack_128 = '\x01';
    }
    if (((uVar24 & 0x20) != 0) || (cStack_126 = '\0', (uVar18 & 1) != 0)) {
        cStack_126 = '\x01';
    }
    if (((char)uVar24 < '\0') || (cStack_127 = '\0', (uVar18 & 1) != 0)) {
        cStack_127 = '\x01';
    }
    
    // 处理几何体和着色器标志位
    if (((uVar24 & 4) == 0) && ((uVar18 & 1) == 0)) {
        bVar9 = false;
    }
    else {
        bVar9 = true;
    }
    if (((uVar24 >> 9 & 1) == 0) && ((uVar18 & 1) == 0)) {
        bVar10 = false;
    }
    else {
        bVar10 = true;
    }
    
    // 主要渲染参数处理逻辑
    if (((param_4 >> 2 & 1) == 0) && (bVar9)) {
        // 复制渲染参数和状态数据
        puStack_108 = *(void **)(param_1 + 0xd0);
        lStack_100 = *(int64_t *)(param_1 + 0xd8);
        uStack_f8 = *(uint64_t *)(param_1 + 0xe0);
        plStack_f0 = *(int64_t **)(param_1 + 0xe8);
        uStack_e8 = *(uint64_t *)(param_1 + 0xf0);
        uStack_e0 = *(uint64_t *)(param_1 + 0xf8);
        uStack_d8 = *(int32_t *)(param_1 + 0x100);
        uStack_d4 = *(int32_t *)(param_1 + 0x104);
        uStack_d0 = *(int32_t *)(param_1 + 0x108);
        uStack_cc = *(int32_t *)(param_1 + 0x10c);
        
        // 处理可选的渲染数据参数
        if (param_5 != 0) {
            uStack_148 = CONCAT44(uStack_148._4_4_,
                                  1.0 - (*(float *)(param_2 + 0x13c) - *(float *)(param_2 + 0x144)) /
                                  *(float *)(param_2 + 0x13c));
            puVar14 = (uint64_t *)
                      FUN_1803310f0(uVar24,&puStack_a8,(uint64_t *)(param_1 + 0xd0),param_5 + 0xd0);
            puStack_108 = (void *)*puVar14;
            lStack_100 = puVar14[1];
            uStack_f8 = puVar14[2];
            plStack_f0 = (int64_t *)puVar14[3];
            uStack_e8 = puVar14[4];
            uStack_e0 = puVar14[5];
            uStack_d8 = *(int32_t *)(puVar14 + 6);
            uStack_d4 = *(int32_t *)((int64_t)puVar14 + 0x34);
            uStack_d0 = *(int32_t *)(puVar14 + 7);
            uStack_cc = *(int32_t *)((int64_t)puVar14 + 0x3c);
        }
        
        // 复制渲染状态数据到目标
        *(int32_t *)(param_3 + 0x270) = *(int32_t *)(param_1 + 100);
        *(int32_t *)(param_3 + 0x100) = *(int32_t *)(param_1 + 0x60);
        uVar3 = *(uint64_t *)(param_1 + 0x88);
        *(uint64_t *)(param_3 + 0x238) = *(uint64_t *)(param_1 + 0x80);
        *(uint64_t *)(param_3 + 0x240) = uVar3;
        uVar26 = *(int32_t *)(param_1 + 0x94);
        uVar22 = *(int32_t *)(param_1 + 0x98);
        uVar21 = *(int32_t *)(param_1 + 0x9c);
        *(int32_t *)(param_3 + 0x248) = *(int32_t *)(param_1 + 0x90);
        *(int32_t *)(param_3 + 0x24c) = uVar26;
        *(int32_t *)(param_3 + 0x250) = uVar22;
        *(int32_t *)(param_3 + 0x254) = uVar21;
        FUN_180075630(param_3);
        *(int8_t *)(param_3 + 0xff) = 0;
        uVar3 = *(uint64_t *)(param_1 + 0xa8);
        *(uint64_t *)(param_3 + 0x2a8) = *(uint64_t *)(param_1 + 0xa0);
        *(uint64_t *)(param_3 + 0x2b0) = uVar3;
        uVar26 = *(int32_t *)(param_1 + 0xb4);
        uVar22 = *(int32_t *)(param_1 + 0xb8);
        uVar21 = *(int32_t *)(param_1 + 0xbc);
        *(int32_t *)(param_3 + 0x2b8) = *(int32_t *)(param_1 + 0xb0);
        *(int32_t *)(param_3 + 700) = uVar26;
        *(int32_t *)(param_3 + 0x2c0) = uVar22;
        *(int32_t *)(param_3 + 0x2c4) = uVar21;
    }
    
    // 处理着色器相关的渲染逻辑
    if ((param_4 >> 2 & 1) != 0) goto LAB_180327215;
    if ((bVar10) && (0 < (int)(*(int64_t *)(param_1 + 0x138) - *(int64_t *)(param_1 + 0x130) >> 3))) {
        if (*(int64_t *)(param_3 + 0x2d0) == 0) {
            SystemCore_EncryptionEngine0(&puStack_108,param_3 + 0x10);
            
            // 字符串处理和搜索逻辑
            while ((0 < (int)(uint)uStack_f8 && (lVar15 = strstr(lStack_100,&system_memory_ff10), lVar15 != 0))) {
                iVar25 = 6;
                iVar13 = (int)lVar15 - (int)lStack_100;
                if ((uint)uStack_f8 < iVar13 + 6U) {
                    iVar25 = (uint)uStack_f8 - iVar13;
                }
                uVar24 = iVar13 + iVar25;
                if (uVar24 < (uint)uStack_f8) {
                    lVar15 = (int64_t)(int)uVar24;
                    do {
                        *(int8_t *)((lVar15 - iVar25) + lStack_100) = *(int8_t *)(lVar15 + lStack_100);
                        uVar24 = uVar24 + 1;
                        lVar15 = lVar15 + 1;
                    } while (uVar24 < (uint)uStack_f8);
                }
                uVar24 = (uint)uStack_f8 - iVar25;
                uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar24);
                *(int8_t *)((uint64_t)uVar24 + lStack_100) = 0;
            }
            
            // 资源管理和状态处理
            uVar26 = FUN_1800b33d0(system_resource_state,&plStack_118,&puStack_108);
            uStack_110 = 1;
            if (plStack_118 == (int64_t *)0x0) {
                if (((uint)uStack_f8 == 0xb) && (iVar13 = strcmp(lStack_100,&unknown_var_9000_ptr), iVar13 == 0)) {
                    uVar26 = FUN_180626ee0(&unknown_var_7584_ptr,&unknown_var_9000_ptr);
                }
                else {
                    puVar14 = (uint64_t *)FUN_1800befa0(render_system_data_config,&plStack_c8);
                    plVar16 = (int64_t *)*puVar14;
                    *puVar14 = 0;
                    plStack_120 = plStack_118;
                    uVar26 = extraout_XMM0_Da_00;
                    if (plStack_118 != (int64_t *)0x0) {
                        lVar15 = *plStack_118;
                        plStack_118 = plVar16;
                        uVar26 = (**(code **)(lVar15 + 0x38))();
                        plVar16 = plStack_118;
                    }
                    plStack_118 = plVar16;
                    if (plStack_c8 != (int64_t *)0x0) {
                        uVar26 = (**(code **)(*plStack_c8 + 0x38))();
                    }
                }
            }
            
            // 清理和状态重置
            lVar15 = 0;
            uStack_110 = 0;
            if (plStack_118 != (int64_t *)0x0) {
                uVar26 = (**(code **)(*plStack_118 + 0x38))();
            }
            puStack_108 = &system_data_buffer_ptr;
            if (lStack_100 != 0) {
                CoreEngine_MemoryPoolManager();
            }
            lStack_100 = 0;
            plStack_f0 = (int64_t *)((uint64_t)plStack_f0 & MEMORY_ALIGNMENT_MASK);
            puStack_108 = &system_state_ptr;
            
            // 渲染状态获取和处理
            if (*(int *)(param_1 + 0x198) == -1) {
            LAB_180326da7:
                lVar17 = FUN_1801efdb0(uVar26,param_3);
                if ((lVar17 == 0) || (*(int *)(lVar17 + 0x18) == 0)) {
                LAB_180326e7a:
                    uVar22 = plStack_120._0_4_;
                    uVar21 = plStack_120._0_4_;
                    uVar26 = plStack_120._0_4_;
                }
                else {
                    uVar22 = *(int32_t *)(lVar17 + 0x24);
                    uVar21 = *(int32_t *)(lVar17 + 0x28);
                    uVar26 = *(int32_t *)(lVar17 + 0x2c);
                }
            }
            else {
                plStack_120 = (int64_t *)CONCAT44(plStack_120._4_4_,*(int *)(param_1 + 0x198));
                plVar16 = (int64_t *)FUN_18033a740(param_2 + 0xb18,&plStack_120);
                plVar16 = (int64_t *)*plVar16;
                lVar15 = *plVar16;
                lVar17 = plVar16[0xe];
                if ((int)lVar17 != -1) {
                    lVar19 = param_2 + 0xb78;
                    lStack_b0 = lVar19;
                    iVar13 = _Mtx_lock(lVar19);
                    if (iVar13 != 0) {
                        __Throw_C_error_std__YAXH_Z(iVar13);
                    }
                    plStack_120 = (int64_t *)CONCAT44(plStack_120._4_4_,(int)lVar17);
                    FUN_18033a740(param_2 + 0xb48,&plStack_120);
                    iVar13 = _Mtx_unlock(lVar19);
                    uVar26 = extraout_XMM0_Da;
                    if (iVar13 != 0) {
                        uVar26 = __Throw_C_error_std__YAXH_Z(iVar13);
                    }
                    goto LAB_180326da7;
                }
                uStack_148 = 0;
                plVar16 = (int64_t *)FUN_1800b32c0(system_resource_state,&plStack_120,plVar16 + 10,0);
                lVar17 = *plVar16;
                uVar26 = extraout_XMM0_Da_01;
                if (plStack_120 != (int64_t *)0x0) {
                    uVar26 = (**(code **)(*plStack_120 + 0x38))();
                }
                if (lVar17 == 0) goto LAB_180326da7;
                cVar11 = FUN_1801ef300(uVar26,param_3,lVar17);
                if (cVar11 == '\0') {
                    SystemCore_ResourceManager0(&unknown_var_1920_ptr);
                    goto LAB_180326e7a;
                }
                lVar19 = FUN_1801ef620(extraout_XMM0_Da_02,param_3,lVar17);
                uVar26 = *(int32_t *)(lVar19 + 0x2c);
                lVar17 = FUN_1801efdb0(extraout_XMM0_Da_03,lVar17);
                uVar22 = *(int32_t *)(lVar17 + 0x24);
                uVar21 = *(int32_t *)(lVar17 + 0x28);
            }
            
            // 更新渲染状态标志位
            *(uint *)(param_3 + 0x100) = *(uint *)(param_3 + 0x100) | 0x800;
            *(byte *)(param_3 + 0xfe) = *(byte *)(param_3 + 0xfe) & 0xf7;
            bVar12 = 0;
            if (lVar15 == 0) {
                bVar12 = 8;
            }
            *(byte *)(param_3 + 0xfe) = *(byte *)(param_3 + 0xfe) | bVar12;
            *(int32_t *)(param_3 + 0x108) = uVar26;
            *(int32_t *)(param_3 + 0x10c) = uVar22;
            *(int32_t *)(param_3 + 0x110) = uVar21;
            
            // 分配和初始化渲染资源
            puVar14 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x20,8,3);
            *puVar14 = 0;
            *(int32_t *)(puVar14 + 1) = 0;
            *(int32_t *)((int64_t)puVar14 + 0xc) = 0xffffffff;
            puVar14[2] = 0;
            *(int32_t *)(puVar14 + 3) = 0;
            *(uint64_t **)(param_3 + 0x2d0) = puVar14;
            param_5 = lStack_c0;
        }
        FUN_180325930(param_2,param_3,param_1 + 0x130,param_1 + 0xc0);
    }
    
    // 处理纹理相关的渲染逻辑
    if (cStack_128 != '\0') {
        uVar24 = *(uint *)(param_1 + 0x6c);
        if (uVar24 != 0) {
            for (puVar20 = *(uint **)(*(int64_t *)(param_2 + 0xaf0) +
                                     ((uint64_t)uVar24 % (uint64_t)*(uint *)(param_2 + 0xaf8)) * 8);
                puVar20 != (uint *)0x0; puVar20 = *(uint **)(puVar20 + 4)) {
                if (uVar24 == *puVar20) goto LAB_180326f61;
            }
            puVar20 = *(uint **)(*(int64_t *)(param_2 + 0xaf0) + *(int64_t *)(param_2 + 0xaf8) * 8);
        LAB_180326f61:
            uVar3 = *(uint64_t *)(puVar20 + 2);
            if (*(int64_t *)(*(int64_t *)(param_3 + 0x1b8) + 0x3b8) != 0) {
                FUN_18022cb40(*(int64_t *)(param_3 + 0x1b8),&plStack_118);
                plVar16 = plStack_118;
                puStack_a8 = &unknown_var_3480_ptr;
                puStack_a0 = auStack_90;
                auStack_90[0] = 0;
                uStack_98 = 0x14;
                strcpy_s(auStack_90,0x40,&system_memory_d5b8);
                uVar18 = FUN_180240430(plVar16[0x3c],&puStack_a8,1);
                plVar16[0x28] = plVar16[0x28] | uVar18;
                FUN_18022dd60(plVar16);
                *(int16_t *)(plVar16 + 0x78) = 0xffff;
                puStack_a8 = &system_state_ptr;
                FUN_18022cd30(plStack_118,1,uVar3);
                FUN_180076910(param_3);
                if (plStack_118 != (int64_t *)0x0) {
                    (**(code **)(*plStack_118 + 0x38))();
                }
            }
        }
    }
    
    // 处理材质相关的渲染逻辑
    uVar18 = 0;
    if (cStack_127 != '\0') {
        if (*(int *)(*(int64_t *)(param_3 + 600) + 0x1c) != *(int *)(param_1 + 0x7c)) {
            *(int *)(*(int64_t *)(param_3 + 600) + 0x1c) = *(int *)(param_1 + 0x7c);
            FUN_18007e990(param_3,*(int *)(*(int64_t *)(param_3 + 600) + 0x1c) +
                          *(int *)(*(int64_t *)(param_3 + 600) + 0x18));
        }
        iVar13 = *(int *)(param_1 + 0x78);
        if ((iVar13 != 0) && (*(int *)(*(int64_t *)(param_3 + 600) + 0x18) != (int)(char)iVar13)) {
            FUN_18007e880(param_3,iVar13,*(uint64_t *)(param_1 + 0x170));
        }
        uVar24 = *(uint *)(param_1 + 0x74);
        if (uVar24 != 0) {
            lVar15 = **(int64_t **)(param_3 + 600);
            if ((param_5 == 0) || (*(uint *)(param_5 + 0x74) != uVar24)) {
                memcpy(lVar15,*(uint64_t *)(param_1 + 0x150),(uint64_t)uVar24 << 6);
            }
            uVar23 = uVar18;
            if (uVar24 != 0) {
                do {
                    lVar17 = *(int64_t *)(param_1 + 0x150);
                    puVar1 = (int32_t *)(lVar17 + uVar18);
                    uVar26 = puVar1[1];
                    uVar22 = puVar1[2];
                    uVar21 = puVar1[3];
                    puVar14 = (uint64_t *)(lVar17 + 0x10 + uVar18);
                    uVar3 = *puVar14;
                    uVar4 = puVar14[1];
                    puVar14 = (uint64_t *)(lVar17 + 0x20 + uVar18);
                    uVar5 = *puVar14;
                    uVar6 = puVar14[1];
                    puVar14 = (uint64_t *)(lVar17 + 0x30 + uVar18);
                    uVar7 = *puVar14;
                    uVar8 = puVar14[1];
                    puVar2 = (int32_t *)(uVar18 + lVar15);
                    *puVar2 = *puVar1;
                    puVar2[1] = uVar26;
                    puVar2[2] = uVar22;
                    puVar2[3] = uVar21;
                    puVar14 = (uint64_t *)(uVar18 + 0x10 + lVar15);
                    *puVar14 = uVar3;
                    puVar14[1] = uVar4;
                    puVar14 = (uint64_t *)(uVar18 + 0x20 + lVar15);
                    *puVar14 = uVar5;
                    puVar14[1] = uVar6;
                    puVar14 = (uint64_t *)(uVar18 + 0x30 + lVar15);
                    *puVar14 = uVar7;
                    puVar14[1] = uVar8;
                    uVar24 = (int)uVar23 + 1;
                    uVar18 = uVar18 + 0x40;
                    uVar23 = (uint64_t)uVar24;
                } while (uVar24 < *(uint *)(param_1 + 0x74));
            }
        }
    }
    
    // 处理几何体相关的渲染逻辑
    if (cStack_126 != '\0') {
        uVar24 = *(uint *)(param_1 + 0x70);
        if (uVar24 != 0) {
            for (puVar20 = *(uint **)(*(int64_t *)(param_2 + 0xb50) +
                                     ((uint64_t)uVar24 % (uint64_t)*(uint *)(param_2 + 0xb58)) * 8);
                puVar20 != (uint *)0x0; puVar20 = *(uint **)(puVar20 + 4)) {
                if (uVar24 == *puVar20) goto LAB_180327199;
            }
            puVar20 = *(uint **)(*(int64_t *)(param_2 + 0xb50) + *(int64_t *)(param_2 + 0xb58) * 8);
        LAB_180327199:
            plVar16 = *(int64_t **)(*(int64_t *)(puVar20 + 2) + 8);
            lStack_c0 = 0;
            plStack_f0 = (int64_t *)0x0;
            puStack_108 = (void *)((uint64_t)puStack_108 & 0xffffffffffffff00);
            uStack_f8 = uStack_f8 & 0xffffffff00000000;
            lStack_100 = param_3;
            FUN_18007f4c0(&puStack_108);
            if (plVar16 != (int64_t *)0x0) {
                plStack_c8 = plVar16;
                (**(code **)(*plVar16 + 0x28))(plVar16);
            }
            plStack_c8 = plStack_f0;
            if (plStack_f0 != (int64_t *)0x0) {
                lVar15 = *plStack_f0;
                plStack_f0 = plVar16;
                (**(code **)(lVar15 + 0x38))();
                plVar16 = plStack_f0;
            }
            plStack_f0 = plVar16;
            FUN_18007f6a0(&puStack_108);
            if (plStack_f0 != (int64_t *)0x0) {
                (**(code **)(*plStack_f0 + 0x38))();
            }
        }
    }
    
    // 最终状态更新和安全检查
LAB_180327215:
    *(byte *)(param_3 + 0xfd) = *(byte *)(param_3 + 0xfd) | 1;
    FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_168);
}

/**
 * 渲染系统状态比较器实现
 * 
 * 详细功能说明：
 * 1. 基础状态比较
 *    - 比较渲染状态的基本参数
 *    - 检测整数和浮点数参数的差异
 *    - 设置相应的状态变更标志位
 * 
 * 2. 高级精度比较
 *    - 使用容差进行浮点数比较
 *    - 处理多个维度的参数差异
 *    - 批量处理多个参数组的比较
 * 
 * 3. 内存块比较
 *    - 比较大块的内存数据
 *    - 优化比较性能
 *    - 处理不同类型的数据比较
 * 
 * 4. 标志位管理
 *    - 根据比较结果设置标志位
 *    - 管理状态变更通知
 *    - 优化状态同步机制
 * 
 * @param param_1 源渲染状态指针，包含要比较的源状态数据
 * @param param_2 目标渲染状态指针，包含要比较的目标状态数据
 * @return bool 如果检测到状态差异返回true，否则返回false
 */
bool rendering_system_state_comparator(int64_t param_1, int64_t param_2)
{
    // 局部变量声明
    uint uVar1;
    char cVar2;
    int iVar3;
    int iVar4;
    bool bVar5;
    bool bVar6;
    float fVar7;
    
    // 初始化比较结果和容差
    bVar5 = *(int *)(param_1 + 100) != *(int *)(param_2 + 100);
    if (bVar5) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | RENDERING_STATE_FLAG_DIRTY;
    }
    
    // 比较基础渲染参数
    bVar6 = *(int *)(param_1 + 0x60) != *(int *)(param_2 + 0x60);
    if (bVar6) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | RENDERING_STATE_FLAG_DIRTY;
    }
    
    // 设置浮点数比较容差
    fVar7 = FLOAT_COMPARISON_TOLERANCE;
    
    // 比较渲染数据结构
    cVar2 = func_0x000180285f10(param_1 + 0xd0,param_2 + 0xd0);
    if (cVar2 == '\0') {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | RENDERING_STATE_FLAG_DIRTY;
    }
    bVar5 = cVar2 == '\0' || (bVar6 || bVar5);
    
    // 比较第一组浮点数参数（位置和变换）
    if (((fVar7 <= ABS(*(float *)(param_1 + 0x80) - *(float *)(param_2 + 0x80))) ||
        (fVar7 <= ABS(*(float *)(param_1 + 0x84) - *(float *)(param_2 + 0x84)))) ||
       (fVar7 <= ABS(*(float *)(param_1 + 0x88) - *(float *)(param_2 + 0x88)))) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | RENDERING_STATE_FLAG_DIRTY;
        bVar5 = true;
    }
    
    // 比较第二组浮点数参数（缩放和旋转）
    if (((fVar7 <= ABS(*(float *)(param_1 + 0x90) - *(float *)(param_2 + 0x90))) ||
        (fVar7 <= ABS(*(float *)(param_1 + 0x94) - *(float *)(param_2 + 0x94)))) ||
       (fVar7 <= ABS(*(float *)(param_1 + 0x98) - *(float *)(param_2 + 0x98)))) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | RENDERING_STATE_FLAG_DIRTY;
        bVar5 = true;
    }
    
    // 比较第三组浮点数参数（颜色和材质）
    if (((fVar7 <= ABS(*(float *)(param_1 + 0xa0) - *(float *)(param_2 + 0xa0))) ||
        (fVar7 <= ABS(*(float *)(param_1 + 0xa4) - *(float *)(param_2 + 0xa4)))) ||
       (fVar7 <= ABS(*(float *)(param_1 + 0xa8) - *(float *)(param_2 + 0xa8)))) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | RENDERING_STATE_FLAG_DIRTY;
        bVar5 = true;
    }
    
    // 比较第四组浮点数参数（光照和阴影）
    if (((fVar7 <= ABS(*(float *)(param_1 + 0xb0) - *(float *)(param_2 + 0xb0))) ||
        (fVar7 <= ABS(*(float *)(param_1 + 0xb4) - *(float *)(param_2 + 0xb4)))) ||
       (fVar7 <= ABS(*(float *)(param_1 + 0xb8) - *(float *)(param_2 + 0xb8)))) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | RENDERING_STATE_FLAG_DIRTY;
        bVar5 = true;
    }
    
    // 比较第五组浮点数参数（高级渲染参数）
    if (((fVar7 <= ABS(*(float *)(param_1 + 0xc0) - *(float *)(param_2 + 0xc0))) ||
        (fVar7 <= ABS(*(float *)(param_1 + 0xc4) - *(float *)(param_2 + 0xc4)))) ||
       (fVar7 <= ABS(*(float *)(param_1 + 200) - *(float *)(param_2 + 200)))) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | RENDERING_STATE_FLAG_DIRTY;
        bVar5 = true;
    }
    
    // 比较纹理参数
    if (*(int *)(param_1 + 0x6c) != *(int *)(param_2 + 0x6c)) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | RENDERING_STATE_FLAG_TEXTURE_CHANGED;
        bVar5 = true;
    }
    if (*(int *)(param_1 + 0x68) != *(int *)(param_2 + 0x68)) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | RENDERING_STATE_FLAG_TEXTURE_CHANGED;
        bVar5 = true;
    }
    
    // 比较几何体参数
    if (*(int *)(param_1 + 0x70) != *(int *)(param_2 + 0x70)) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | RENDERING_STATE_FLAG_GEOMETRY_CHANGED;
        bVar5 = true;
    }
    
    // 比较材质参数
    uVar1 = *(uint *)(param_1 + 0x74);
    if (uVar1 != *(uint *)(param_2 + 0x74)) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | RENDERING_STATE_FLAG_MATERIAL_CHANGED;
        bVar5 = true;
    }
    iVar4 = *(int *)(param_1 + 0x78);
    if (iVar4 != *(int *)(param_2 + 0x78)) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | RENDERING_STATE_FLAG_MATERIAL_CHANGED;
        bVar5 = true;
    }
    if (*(int *)(param_1 + 0x7c) != *(int *)(param_2 + 0x7c)) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | RENDERING_STATE_FLAG_MATERIAL_CHANGED;
        bVar5 = true;
    }
    
    // 比较材质数据块
    if ((uVar1 == *(uint *)(param_2 + 0x74)) &&
       (iVar3 = memcmp(*(uint64_t *)(param_1 + 0x150),*(uint64_t *)(param_2 + 0x150),
                       (uint64_t)uVar1 << 6), iVar3 != 0)) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | RENDERING_STATE_FLAG_MATERIAL_CHANGED;
        bVar5 = true;
    }
    
    // 比较材质参数数据块
    if ((iVar4 == *(int *)(param_2 + 0x78)) &&
       (iVar4 = memcmp(*(uint64_t *)(param_1 + 0x170),*(uint64_t *)(param_2 + 0x170),iVar4),
       iVar4 != 0)) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | RENDERING_STATE_FLAG_MATERIAL_CHANGED;
        bVar5 = true;
    }
    
    // 检查着色器状态变更
    if ((*(uint *)(param_2 + 0x60) & RENDERING_STATE_FLAG_SHADER_CHANGED) != 0) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x200;
        bVar5 = true;
    }
    
    return bVar5;
}

/**
 * 渲染系统参数初始化器实现
 * 
 * 详细功能说明：
 * 1. 内存清零和初始化
 *    - 清零参数结构体的关键字段
 *    - 设置默认的渲染状态值
 *    - 初始化浮点数参数
 * 
 * 2. 标准值设置
 *    - 设置标准的浮点数常量（1.0）
 *    - 配置默认的渲染参数
 *    - 初始化向量和矩阵参数
 * 
 * 3. 内存对齐处理
 *    - 确保64位内存对齐
 *    - 处理结构体字段的对齐
 *    - 优化内存访问性能
 * 
 * 4. 渲染环境准备
 *    - 准备标准的渲染环境
 *    - 设置默认的渲染状态
 *    - 初始化渲染参数结构
 * 
 * @param param_1 要初始化的渲染参数指针，包含需要初始化的参数结构
 */
void rendering_system_parameter_initializer(int32_t *param_1)
{
    // 清零基础参数
    *param_1 = 0;
    param_1[2] = 0;
    
    // 初始化高级参数区域
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0x3f800000;  // 1.0f
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0x3f800000;  // 1.0f
    
    // 初始化64位对齐的浮点数参数
    *(uint64_t *)(param_1 + 0x32) = 0;
    *(uint64_t *)(param_1 + 0x34) = 0;
    *(uint64_t *)(param_1 + 0x36) = 0;
    *(uint64_t *)(param_1 + 0x38) = 0;
    
    // 初始化渲染变换参数
    *(uint64_t *)(param_1 + 3) = 0x3f800000;  // 1.0f
    *(uint64_t *)(param_1 + 5) = 0;
    *(uint64_t *)(param_1 + 7) = 0x3f80000000000000;  // 1.0 (double)
    *(uint64_t *)(param_1 + 9) = 0;
    *(uint64_t *)(param_1 + 0xb) = 0;
    *(uint64_t *)(param_1 + 0xd) = 0x3f800000;  // 1.0f
    *(uint64_t *)(param_1 + 0xf) = 0;
    *(uint64_t *)(param_1 + 0x11) = 0x3f80000000000000;  // 1.0 (double)
    
    // 初始化状态和引用参数
    param_1[0x18] = 0;
    **(int8_t **)(param_1 + 0x16) = 0;
    *(uint64_t *)(param_1 + 0x3a) = 0;
    
    return;
}

// ============================================================================
// 原始函数实现（保持兼容性）
// ============================================================================

void FUN_1803269f0(int64_t param_1, int64_t param_2, int64_t param_3, uint64_t param_4, int64_t param_5)
{
    rendering_system_parameter_processor(param_1, param_2, param_3, param_4, param_5);
}

bool FUN_180327250(int64_t param_1, int64_t param_2)
{
    return rendering_system_state_comparator(param_1, param_2);
}

void FUN_180327540(int32_t *param_1)
{
    rendering_system_parameter_initializer(param_1);
}

// ============================================================================
// 技术文档和说明
// ============================================================================

/**
 * 技术实现说明：
 * 
 * 1. 内存管理策略：
 *    - 使用栈保护和安全检查机制
 *    - 实现内存对齐优化
 *    - 采用高效的内存分配模式
 * 
 * 2. 性能优化技术：
 *    - 批量参数处理减少函数调用开销
 *    - 使用位运算提高标志位处理效率
 *    - 实现条件分支优化
 * 
 * 3. 错误处理机制：
 *    - 全面的参数验证
 *    - 异常状态检测和处理
 *    - 资源释放和清理机制
 * 
 * 4. 多线程支持：
 *    - 互斥锁保护共享资源
 *    - 线程安全的状态管理
 *    - 原子操作支持
 * 
 * 5. 渲染状态管理：
 *    - 细粒度的状态变更检测
 *    - 高效的状态同步机制
 *    - 智能的标志位管理
 * 
 * 6. 扩展性设计：
 *    - 模块化的函数结构
 *    - 标准化的接口定义
 *    - 可配置的参数系统
 */

// 注意：全局变量符号重叠警告（原始代码特性）
// WARNING: Globals starting with '_' overlap smaller symbols at the same address