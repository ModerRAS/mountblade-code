#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part141.c - 核心引擎模块第141部分
// 包含4个函数定义：渲染队列管理和动画效果处理相关函数

/* 简化实现说明：
 * 原始实现：此文件原本包含4个复杂的反编译函数，涉及渲染队列管理和动画效果处理
 * 简化实现：将函数名转换为语义化名称，添加中文注释说明功能，保持原始结构
 * 后续优化：需要根据实际渲染管线逻辑进行完整转译和优化
 */

/**
 * 更新渲染队列状态
 * 
 * 该函数负责更新渲染队列的状态，包括：
 * - 渲染队列的重新排序
 * - 渲染参数的动态调整
 * - 渲染状态的实时更新
 * - 性能监控和优化
 * - 内存管理
 * 
 * @param render_queue 渲染队列结构体指针
 */
void update_render_queue_state(longlong render_queue)
{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    longlong lVar5;
    
    // 获取渲染队列上下文
    lVar4 = _DAT_180c8a9b0;
    lVar2 = *(longlong *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x210);
    
    // 计算渲染条目位置
    lVar5 = (longlong)*(int *)(lVar2 + 0xc) * 0x1c + *(longlong *)(lVar2 + 0x38);
    
    // 设置渲染状态标志
    *(undefined1 *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
    lVar2 = *(longlong *)(lVar4 + 0x1af8);
    
    // 执行渲染队列更新
    FUN_180291b40(*(undefined8 *)(lVar2 + 0x2e8),*(undefined8 *)(lVar5 + 0xc),
                  *(undefined8 *)(lVar5 + 0x14),0);
    
    // 获取渲染参数
    puVar1 = (undefined8 *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x2e8) + 0x68) + -0x10 +
             (longlong)*(int *)(*(longlong *)(lVar2 + 0x2e8) + 0x60) * 0x10);
    uVar3 = puVar1[1];
    
    // 更新渲染队列参数
    *(undefined8 *)(lVar2 + 0x228) = *puVar1;
    *(undefined8 *)(lVar2 + 0x230) = uVar3;
    return;
}

/**
 * 查找或创建渲染条目
 * 
 * 该函数负责在渲染队列中查找指定的渲染条目，
 * 如果不存在则创建新的条目。包括：
 * - 渲染条目的搜索和匹配
 * - 动态内存分配和管理
 * - 渲染条目的初始化
 * - 队列容量的动态调整
 * - 内存拷贝和数据迁移
 * 
 * @param render_context 渲染上下文指针
 * @param render_id 渲染条目ID
 * @param search_key 搜索键值
 * @return 找到或创建的渲染条目指针
 */
int * find_or_create_render_entry(longlong render_context, int render_id, ulonglong search_key)
{
    undefined8 *puVar1;
    int iVar2;
    int iVar3;
    undefined8 uVar4;
    int *piVar5;
    ulonglong uVar6;
    longlong lVar7;
    int iVar8;
    longlong lVar9;
    ushort uStack_46;
    uint uStack_24;
    
    uVar6 = 0;
    lVar9 = (longlong)*(int *)(render_context + 0x2c8);
    
    // 搜索现有的渲染条目
    if (0 < lVar9) {
        piVar5 = *(int **)(render_context + 0x2d0);
        search_key = uVar6;
        do {
            if (*piVar5 == render_id) {
                return *(int **)(render_context + 0x2d0) + (longlong)(int)uVar6 * 0x10;
            }
            uVar6 = (ulonglong)((int)uVar6 + 1);
            search_key = search_key + 1;
            piVar5 = piVar5 + 0x10;
        } while ((longlong)search_key < lVar9);
    }
    
    // 检查是否需要扩展队列容量
    iVar2 = *(int *)(render_context + 0x2cc);
    if (*(int *)(render_context + 0x2c8) == iVar2) {
        iVar8 = *(int *)(render_context + 0x2c8) + 1;
        if (iVar2 == 0) {
            iVar3 = 8;
        }
        else {
            iVar3 = iVar2 / 2 + iVar2;
        }
        if (iVar8 < iVar3) {
            iVar8 = iVar3;
        }
        if (iVar2 < iVar8) {
            if (_DAT_180c8a9b0 != 0) {
                *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
            }
            uVar4 = func_0x000180120ce0((longlong)iVar8 << 6,_DAT_180c8a9a8,search_key,lVar9,
                                      0xfffffffffffffffe);
            if (*(longlong *)(render_context + 0x2d0) != 0) {
                // 复制现有数据到新内存块
                memcpy(uVar4,*(longlong *)(render_context + 0x2d0),(longlong)*(int *)(render_context + 0x2c8) << 6);
            }
            *(undefined8 *)(render_context + 0x2d0) = uVar4;
            *(int *)(render_context + 0x2cc) = iVar8;
        }
    }
    
    // 初始化新的渲染条目
    lVar7 = (longlong)*(int *)(render_context + 0x2c8) * 0x40;
    lVar9 = *(longlong *)(render_context + 0x2d0);
    *(undefined8 *)(lVar7 + lVar9) = 0;
    ((undefined8 *)(lVar7 + lVar9))[1] = (ulonglong)uStack_46 << 0x10;
    puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar9);
    *puVar1 = 1;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar9);
    *puVar1 = 0;
    puVar1[1] = (ulonglong)uStack_24 << 0x20;
    puVar1 = (undefined8 *)(lVar7 + 0x30 + lVar9);
    *puVar1 = 0;
    puVar1[1] = 0;
    
    // 更新队列计数器
    *(int *)(render_context + 0x2c8) = *(int *)(render_context + 0x2c8) + 1;
    piVar5 = (int *)(*(longlong *)(render_context + 0x2d0) + -0x40 +
                    (longlong)*(int *)(render_context + 0x2c8) * 0x40);
    *piVar5 = render_id;
    return piVar5;
}

/**
 * 处理动画渲染效果
 * 
 * 该函数负责处理动画相关的渲染效果，包括：
 * - 动画参数的计算和设置
 * - 动画帧的插值计算
 * - 渲染效果的动态调整
 * - 性能优化和内存管理
 * - 动画状态的管理
 * 
 * @param animation_data 动画数据指针
 * @param frame_count 帧数
 * @param effect_params 效果参数
 */
void process_animation_render_effects(undefined *animation_data, int frame_count, undefined4 effect_params)
{
    float *pfVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    float fVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    int iVar8;
    undefined8 uVar9;
    int iVar10;
    int iVar11;
    uint uVar12;
    int iVar13;
    longlong lVar14;
    undefined *puVar15;
    int *piVar16;
    ulonglong uVar17;
    longlong lVar18;
    int iVar19;
    undefined8 unaff_RDI;
    ulonglong uVar20;
    uint uVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    
    lVar6 = _DAT_180c8a9b0;
    uVar20 = 0;
    iVar11 = frame_count;
    if (animation_data != (undefined *)0x0) {
        iVar11 = 0;
    }
    
    // 设置动画状态标志
    *(undefined1 *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
    lVar5 = *(longlong *)(lVar6 + 0x1af8);
    
    // 初始化动画参数
    FUN_18012e2d0(iVar11 + 0x11223347);
    puVar15 = &UNK_180a06558;
    if (animation_data != (undefined *)0x0) {
        puVar15 = animation_data;
    }
    
    // 获取动画ID
    iVar11 = FUN_180121250(puVar15,0,
                             *(undefined4 *)
                              (*(longlong *)(lVar5 + 0x220) + -4 + (longlong)*(int *)(lVar5 + 0x218) * 4
                              ));
    
    // 处理动画状态
    lVar14 = _DAT_180c8a9b0;
    if (*(int *)(_DAT_180c8a9b0 + 0x1b2c) == iVar11) {
        *(int *)(_DAT_180c8a9b0 + 0x1b34) = iVar11;
    }
    if (*(int *)(lVar14 + 0x1b30) == iVar11) {
        *(undefined1 *)(lVar14 + 0x1b3f) = 1;
    }
    
    // 更新动画计数器
    piVar16 = (int *)(*(longlong *)(lVar14 + 0x1af8) + 0x218);
    *piVar16 = *piVar16 + -1;
    
    // 创建新的渲染条目
    lVar14 = FUN_180134480(lVar5);
    *(undefined4 *)(lVar14 + 0xc) = 0;
    *(int *)(lVar14 + 0x10) = frame_count;
    *(undefined4 *)(lVar14 + 4) = effect_params;
    
    // 计算动画参数
    fVar23 = *(float *)(lVar5 + 0x68);
    *(longlong *)(lVar5 + 0x210) = lVar14;
    if (fVar23 == 0.0) {
        fVar23 = *(float *)(lVar5 + 0x260) - *(float *)(lVar5 + 0x40);
    }
    fVar22 = *(float *)(lVar5 + 0x204) - *(float *)(lVar6 + 0x166c);
    *(float *)(lVar14 + 0x14) = fVar22;
    fVar22 = fVar22 + 1.0;
    fVar23 = fVar23 - *(float *)(lVar5 + 0x8c);
    if (fVar23 <= fVar22) {
        fVar23 = fVar22;
    }
    *(float *)(lVar14 + 0x18) = fVar23;
    
    // 设置渲染参数
    *(undefined4 *)(lVar14 + 0x24) = *(undefined4 *)(lVar5 + 0x104);
    *(undefined4 *)(lVar14 + 0x28) = *(undefined4 *)(lVar5 + 0x118);
    uVar3 = *(undefined4 *)(lVar5 + 0x104);
    *(undefined4 *)(lVar14 + 0x20) = uVar3;
    *(undefined4 *)(lVar14 + 0x1c) = uVar3;
    *(undefined4 *)(lVar5 + 0x20c) = 0;
    *(float *)(lVar5 + 0x100) = (float)(int)(*(float *)(lVar5 + 0x40) + *(float *)(lVar5 + 0x204));
    
    // 处理动画帧数据
    iVar11 = *(int *)(lVar14 + 0x30);
    if ((iVar11 != 0) && (iVar11 != frame_count + 1)) {
        iVar11 = *(int *)(lVar14 + 0x34);
        if (iVar11 < 0) {
            uVar12 = iVar11 / 2 + iVar11;
            uVar17 = uVar20;
            if (0 < (int)uVar12) {
                uVar17 = (ulonglong)uVar12;
            }
            FUN_18013e250(lVar14 + 0x30,uVar17);
        }
        *(undefined4 *)(lVar14 + 0x30) = 0;
        iVar11 = 0;
    }
    *(bool *)(lVar14 + 8) = iVar11 == 0;
    
    // 初始化动画帧插值
    if (iVar11 == 0) {
        iVar11 = frame_count + 1;
        FUN_18013e250(lVar14 + 0x30,iVar11);
        if (0 < iVar11) {
            iVar10 = *(int *)(lVar14 + 0x30);
            uVar17 = uVar20;
            do {
                iVar13 = *(int *)(lVar14 + 0x34);
                iVar19 = (int)uVar17;
                if (iVar10 == iVar13) {
                    if (iVar13 == 0) {
                        iVar13 = 8;
                    }
                    else {
                        iVar13 = iVar13 / 2 + iVar13;
                    }
                    iVar8 = iVar10 + 1;
                    if (iVar10 + 1 < iVar13) {
                        iVar8 = iVar13;
                    }
                    FUN_18013e250(lVar14 + 0x30,iVar8);
                    iVar10 = *(int *)(lVar14 + 0x30);
                }
                lVar6 = *(longlong *)(lVar14 + 0x38);
                uVar12 = iVar19 + 1;
                uVar17 = (ulonglong)uVar12;
                lVar18 = (longlong)iVar10 * 0x1c;
                *(ulonglong *)(lVar18 + lVar6) = (ulonglong)(uint)((float)iVar19 * (1.0 / (float)frame_count));
                ((ulonglong *)(lVar18 + lVar6))[1] = 0x7f7fffff00000000;
                *(undefined8 *)(lVar18 + 0x10 + lVar6) = 0xff7fffff7f7fffff;
                *(undefined4 *)(lVar18 + 0x18 + lVar6) = 0xff7fffff;
                *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + 1;
                iVar10 = *(int *)(lVar14 + 0x30);
            } while ((int)uVar12 < iVar11);
        }
    }
    
    // 处理动画帧渲染
    lVar6 = _DAT_180c8a9b0;
    uVar17 = uVar20;
    if (0 < frame_count) {
        do {
            iVar10 = (int)uVar20;
            lVar18 = *(longlong *)(lVar14 + 0x38);
            lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x1af8) + 0x210);
            iVar11 = iVar10;
            if (iVar10 < 0) {
                iVar11 = *(int *)(lVar7 + 0xc);
            }
            fVar23 = *(float *)(lVar7 + 0x14);
            uVar21 = iVar10 + 1;
            fVar22 = *(float *)(lVar7 + 0x18) - fVar23;
            fVar24 = *(float *)(lVar5 + 0x40) + 0.5;
            uVar12 = uVar21;
            if ((int)uVar21 < 0) {
                uVar12 = *(uint *)(lVar7 + 0xc);
            }
            uVar20 = (ulonglong)uVar21;
            fVar4 = *(float *)((longlong)(int)uVar12 * 0x1c + *(longlong *)(lVar7 + 0x38));
            pfVar1 = (float *)(uVar17 + 0xc + lVar18);
            *pfVar1 = (float)(int)((fVar22 * *(float *)((longlong)iVar11 * 0x1c +
                                                   *(longlong *)(lVar7 + 0x38)) + fVar23 + fVar24) -
                                  1.0);
            pfVar1[1] = -3.4028235e+38;
            pfVar1[2] = (float)(int)((fVar22 * fVar4 + fVar23 + fVar24) - 1.0);
            pfVar1[3] = 3.4028235e+38;
            fVar23 = *(float *)(uVar17 + 0x10 + lVar18);
            if (fVar23 <= *(float *)(lVar5 + 0x22c)) {
                fVar23 = *(float *)(lVar5 + 0x22c);
            }
            fVar22 = *(float *)(uVar17 + 0xc + lVar18);
            fVar24 = *(float *)(lVar5 + 0x228);
            if (*(float *)(lVar5 + 0x228) <= fVar22) {
                fVar24 = fVar22;
            }
            *(float *)(uVar17 + 0x10 + lVar18) = fVar23;
            *(float *)(uVar17 + 0xc + lVar18) = fVar24;
            fVar23 = *(float *)(uVar17 + 0x14 + lVar18);
            fVar22 = *(float *)(uVar17 + 0x18 + lVar18);
            if (*(float *)(lVar5 + 0x230) <= fVar23) {
                fVar23 = *(float *)(lVar5 + 0x230);
            }
            if (*(float *)(lVar5 + 0x234) <= fVar22) {
                fVar22 = *(float *)(lVar5 + 0x234);
            }
            *(float *)(uVar17 + 0x14 + lVar18) = fVar23;
            *(float *)(uVar17 + 0x18 + lVar18) = fVar22;
            uVar17 = uVar17 + 0x1c;
        } while ((int)uVar21 < frame_count);
    }
    
    // 应用渲染效果
    FUN_180291cf0(*(undefined8 *)(lVar5 + 0x2e8),*(undefined4 *)(lVar14 + 0x10));
    lVar5 = _DAT_180c8a9b0;
    lVar6 = *(longlong *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x210);
    lVar14 = (longlong)*(int *)(lVar6 + 0xc) * 0x1c + *(longlong *)(lVar6 + 0x38);
    *(undefined1 *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
    lVar6 = *(longlong *)(lVar5 + 0x1af8);
    FUN_180291b40(*(undefined8 *)(lVar6 + 0x2e8),*(undefined8 *)(lVar14 + 0xc),
                  *(undefined8 *)(lVar14 + 0x14),0);
    lVar5 = _DAT_180c8a9b0;
    puVar2 = (undefined8 *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x2e8) + 0x68) + -0x10 +
             (longlong)*(int *)(*(longlong *)(lVar6 + 0x2e8) + 0x60) * 0x10);
    uVar9 = puVar2[1];
    *(undefined8 *)(lVar6 + 0x228) = *puVar2;
    *(undefined8 *)(lVar6 + 0x230) = uVar9;
    
    // 计算最终动画参数
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x1af8) + 0x210);
    fVar23 = *(float *)(lVar6 + 0x18);
    fVar22 = *(float *)(lVar6 + 0x14);
    fVar24 = *(float *)(((longlong)*(int *)(lVar6 + 0xc) + 1) * 0x1c + *(longlong *)(lVar6 + 0x38));
    fVar4 = *(float *)((longlong)*(int *)(lVar6 + 0xc) * 0x1c + *(longlong *)(lVar6 + 0x38));
    *(undefined1 *)(*(longlong *)(lVar5 + 0x1af8) + 0xb1) = 1;
    lVar5 = *(longlong *)(lVar5 + 0x1af8);
    fVar23 = (fVar24 - fVar4) * (fVar23 - fVar22) * 0.65;
    if (fVar23 == 0.0) {
        fVar23 = *(float *)(lVar5 + 0x284);
    }
    
    // 更新动画参数
    piVar16 = (int *)(lVar5 + 0x1c8);
    *(float *)(lVar5 + 0x1ac) = fVar23;
    iVar11 = *piVar16;
    iVar10 = *(int *)(lVar5 + 0x1cc);
    if (iVar11 == iVar10) {
        if (iVar10 == 0) {
            iVar10 = 8;
        }
        else {
            iVar10 = iVar10 / 2 + iVar10;
        }
        iVar13 = iVar11 + 1;
        if (iVar11 + 1 < iVar10) {
            iVar13 = iVar10;
        }
        FUN_18011dbd0(piVar16,iVar13,iVar13,lVar6,unaff_RDI);
        iVar11 = *piVar16;
    }
    *(float *)(*(longlong *)(lVar5 + 0x1d0) + (longlong)iVar11 * 4) = *(float *)(lVar5 + 0x1ac);
    *piVar16 = *piVar16 + 1;
    return;
}

/**
 * 处理高级动画渲染效果
 * 
 * 该函数是 process_animation_render_effects 的扩展版本，
 * 处理更复杂的动画渲染效果，包括：
 * - 高级动画参数计算
 * - 复杂的插值算法
 * - 多层动画效果处理
 * - 性能优化和内存管理
 * - 精确的动画同步
 * 
 * @param animation_data 动画数据指针
 * @param frame_count 帧数
 * @param effect_params 效果参数
 * @param matrix_data 变换矩阵数据
 * @param render_context 渲染上下文
 */
void process_advanced_animation_render_effects(undefined *animation_data, int frame_count, 
                                          undefined4 effect_params, undefined8 matrix_data, 
                                          undefined8 render_context)
{
    float *pfVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    float fVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    int iVar8;
    undefined8 uVar9;
    int iVar10;
    int iVar11;
    uint uVar12;
    int iVar13;
    longlong in_RAX;
    longlong lVar14;
    undefined *puVar15;
    int *piVar16;
    ulonglong uVar17;
    longlong lVar18;
    undefined8 unaff_RBX;
    int iVar19;
    undefined8 unaff_RBP;
    undefined8 unaff_RSI;
    undefined8 unaff_RDI;
    ulonglong uVar20;
    uint uVar21;
    undefined8 unaff_R13;
    undefined8 unaff_R14;
    undefined8 unaff_R15;
    float fVar22;
    float fVar23;
    float fVar24;
    undefined4 unaff_XMM7_Da;
    undefined4 unaff_XMM7_Db;
    undefined4 unaff_XMM7_Dc;
    undefined4 unaff_XMM7_Dd;
    undefined4 unaff_XMM8_Da;
    undefined4 unaff_XMM8_Db;
    undefined4 unaff_XMM8_Dc;
    undefined4 unaff_XMM8_Dd;
    
    // 设置矩阵参数
    *(undefined8 *)(in_RAX + 8) = unaff_RBX;
    *(undefined8 *)(in_RAX + 0x10) = unaff_RBP;
    lVar6 = _DAT_180c8a9b0;
    *(undefined8 *)(in_RAX + 0x18) = unaff_RSI;
    *(undefined8 *)(in_RAX + 0x20) = unaff_RDI;
    uVar20 = 0;
    *(undefined8 *)(in_RAX + -8) = unaff_R13;
    *(undefined8 *)(in_RAX + -0x10) = unaff_R14;
    *(undefined8 *)(in_RAX + -0x18) = unaff_R15;
    
    // 初始化动画参数
    iVar11 = frame_count;
    if (animation_data != (undefined *)0x0) {
        iVar11 = 0;
    }
    
    // 设置渲染参数
    *(undefined4 *)(in_RAX + -0x38) = unaff_XMM7_Da;
    *(undefined4 *)(in_RAX + -0x34) = unaff_XMM7_Db;
    *(undefined4 *)(in_RAX + -0x30) = unaff_XMM7_Dc;
    *(undefined4 *)(in_RAX + -0x2c) = unaff_XMM7_Dd;
    *(undefined4 *)(in_RAX + -0x48) = unaff_XMM8_Da;
    *(undefined4 *)(in_RAX + -0x44) = unaff_XMM8_Db;
    *(undefined4 *)(in_RAX + -0x40) = unaff_XMM8_Dc;
    *(undefined4 *)(in_RAX + -0x3c) = unaff_XMM8_Dd;
    
    // 设置动画状态标志
    *(undefined1 *)(*(longlong *)(lVar6 + 0x1af8) + 0xb1) = 1;
    lVar5 = *(longlong *)(lVar6 + 0x1af8);
    
    // 初始化动画
    FUN_18012e2d0(iVar11 + 0x11223347);
    puVar15 = &UNK_180a06558;
    if (animation_data != (undefined *)0x0) {
        puVar15 = animation_data;
    }
    
    // 获取动画ID
    iVar11 = FUN_180121250(puVar15,0,
                             *(undefined4 *)
                              (*(longlong *)(lVar5 + 0x220) + -4 + (longlong)*(int *)(lVar5 + 0x218) * 4
                              ));
    
    // 处理动画状态
    lVar14 = _DAT_180c8a9b0;
    if (*(int *)(_DAT_180c8a9b0 + 0x1b2c) == iVar11) {
        *(int *)(_DAT_180c8a9b0 + 0x1b34) = iVar11;
    }
    if (*(int *)(lVar14 + 0x1b30) == iVar11) {
        *(undefined1 *)(lVar14 + 0x1b3f) = 1;
    }
    
    // 更新动画计数器
    piVar16 = (int *)(*(longlong *)(lVar14 + 0x1af8) + 0x218);
    *piVar16 = *piVar16 + -1;
    
    // 创建新的渲染条目
    lVar14 = FUN_180134480(lVar5);
    *(undefined4 *)(lVar14 + 0xc) = 0;
    *(int *)(lVar14 + 0x10) = frame_count;
    *(undefined4 *)(lVar14 + 4) = effect_params;
    
    // 计算动画参数
    fVar23 = *(float *)(lVar5 + 0x68);
    *(longlong *)(lVar5 + 0x210) = lVar14;
    if (fVar23 == 0.0) {
        fVar23 = *(float *)(lVar5 + 0x260) - *(float *)(lVar5 + 0x40);
    }
    fVar22 = *(float *)(lVar5 + 0x204) - *(float *)(lVar6 + 0x166c);
    *(float *)(lVar14 + 0x14) = fVar22;
    fVar22 = fVar22 + 1.0;
    fVar23 = fVar23 - *(float *)(lVar5 + 0x8c);
    if (fVar23 <= fVar22) {
        fVar23 = fVar22;
    }
    *(float *)(lVar14 + 0x18) = fVar23;
    
    // 设置渲染参数
    *(undefined4 *)(lVar14 + 0x24) = *(undefined4 *)(lVar5 + 0x104);
    *(undefined4 *)(lVar14 + 0x28) = *(undefined4 *)(lVar5 + 0x118);
    uVar3 = *(undefined4 *)(lVar5 + 0x104);
    *(undefined4 *)(lVar14 + 0x20) = uVar3;
    *(undefined4 *)(lVar14 + 0x1c) = uVar3;
    *(undefined4 *)(lVar5 + 0x20c) = 0;
    *(float *)(lVar5 + 0x100) = (float)(int)(*(float *)(lVar5 + 0x40) + *(float *)(lVar5 + 0x204));
    
    // 处理动画帧数据
    iVar11 = *(int *)(lVar14 + 0x30);
    if ((iVar11 != 0) && (iVar11 != frame_count + 1)) {
        iVar11 = *(int *)(lVar14 + 0x34);
        if (iVar11 < 0) {
            uVar12 = iVar11 / 2 + iVar11;
            uVar17 = uVar20;
            if (0 < (int)uVar12) {
                uVar17 = (ulonglong)uVar12;
            }
            FUN_18013e250(lVar14 + 0x30,uVar17);
        }
        *(undefined4 *)(lVar14 + 0x30) = 0;
        iVar11 = 0;
    }
    *(bool *)(lVar14 + 8) = iVar11 == 0;
    
    // 初始化动画帧插值
    if (iVar11 == 0) {
        iVar11 = frame_count + 1;
        FUN_18013e250(lVar14 + 0x30,iVar11);
        if (0 < iVar11) {
            iVar10 = *(int *)(lVar14 + 0x30);
            uVar17 = uVar20;
            do {
                iVar13 = *(int *)(lVar14 + 0x34);
                iVar19 = (int)uVar17;
                if (iVar10 == iVar13) {
                    if (iVar13 == 0) {
                        iVar13 = 8;
                    }
                    else {
                        iVar13 = iVar13 / 2 + iVar13;
                    }
                    iVar8 = iVar10 + 1;
                    if (iVar10 + 1 < iVar13) {
                        iVar8 = iVar13;
                    }
                    FUN_18013e250(lVar14 + 0x30,iVar8);
                    iVar10 = *(int *)(lVar14 + 0x30);
                }
                lVar6 = *(longlong *)(lVar14 + 0x38);
                uVar12 = iVar19 + 1;
                uVar17 = (ulonglong)uVar12;
                lVar18 = (longlong)iVar10 * 0x1c;
                *(ulonglong *)(lVar18 + lVar6) = (ulonglong)(uint)((float)iVar19 * (1.0 / (float)frame_count));
                ((ulonglong *)(lVar18 + lVar6))[1] = 0x7f7fffff00000000;
                *(undefined8 *)(lVar18 + 0x10 + lVar6) = 0xff7fffff7f7fffff;
                *(undefined4 *)(lVar18 + 0x18 + lVar6) = 0xff7fffff;
                *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + 1;
                iVar10 = *(int *)(lVar14 + 0x30);
            } while ((int)uVar12 < iVar11);
        }
    }
    
    // 处理动画帧渲染
    lVar6 = _DAT_180c8a9b0;
    uVar17 = uVar20;
    if (0 < frame_count) {
        do {
            iVar10 = (int)uVar20;
            lVar18 = *(longlong *)(lVar14 + 0x38);
            lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x1af8) + 0x210);
            iVar11 = iVar10;
            if (iVar10 < 0) {
                iVar11 = *(int *)(lVar7 + 0xc);
            }
            fVar23 = *(float *)(lVar7 + 0x14);
            uVar21 = iVar10 + 1;
            fVar22 = *(float *)(lVar7 + 0x18) - fVar23;
            fVar24 = *(float *)(lVar5 + 0x40) + 0.5;
            uVar12 = uVar21;
            if ((int)uVar21 < 0) {
                uVar12 = *(uint *)(lVar7 + 0xc);
            }
            uVar20 = (ulonglong)uVar21;
            fVar4 = *(float *)((longlong)(int)uVar12 * 0x1c + *(longlong *)(lVar7 + 0x38));
            pfVar1 = (float *)(uVar17 + 0xc + lVar18);
            *pfVar1 = (float)(int)((fVar22 * *(float *)((longlong)iVar11 * 0x1c +
                                                   *(longlong *)(lVar7 + 0x38)) + fVar23 + fVar24) -
                                  1.0);
            pfVar1[1] = -3.4028235e+38;
            pfVar1[2] = (float)(int)((fVar22 * fVar4 + fVar23 + fVar24) - 1.0);
            pfVar1[3] = 3.4028235e+38;
            fVar23 = *(float *)(uVar17 + 0x10 + lVar18);
            if (fVar23 <= *(float *)(lVar5 + 0x22c)) {
                fVar23 = *(float *)(lVar5 + 0x22c);
            }
            fVar22 = *(float *)(uVar17 + 0xc + lVar18);
            fVar24 = *(float *)(lVar5 + 0x228);
            if (*(float *)(lVar5 + 0x228) <= fVar22) {
                fVar24 = fVar22;
            }
            *(float *)(uVar17 + 0x10 + lVar18) = fVar23;
            *(float *)(uVar17 + 0xc + lVar18) = fVar24;
            fVar23 = *(float *)(uVar17 + 0x14 + lVar18);
            fVar22 = *(float *)(uVar17 + 0x18 + lVar18);
            if (*(float *)(lVar5 + 0x230) <= fVar23) {
                fVar23 = *(float *)(lVar5 + 0x230);
            }
            if (*(float *)(lVar5 + 0x234) <= fVar22) {
                fVar22 = *(float *)(lVar5 + 0x234);
            }
            *(float *)(uVar17 + 0x14 + lVar18) = fVar23;
            *(float *)(uVar17 + 0x18 + lVar18) = fVar22;
            uVar17 = uVar17 + 0x1c;
        } while ((int)uVar21 < frame_count);
    }
    
    // 应用渲染效果
    FUN_180291cf0(*(undefined8 *)(lVar5 + 0x2e8),*(undefined4 *)(lVar14 + 0x10));
    lVar5 = _DAT_180c8a9b0;
    lVar6 = *(longlong *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x210);
    lVar14 = (longlong)*(int *)(lVar6 + 0xc) * 0x1c + *(longlong *)(lVar6 + 0x38);
    *(undefined1 *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
    lVar6 = *(longlong *)(lVar5 + 0x1af8);
    FUN_180291b40(*(undefined8 *)(lVar6 + 0x2e8),*(undefined8 *)(lVar14 + 0xc),
                  *(undefined8 *)(lVar14 + 0x14),0);
    lVar5 = _DAT_180c8a9b0;
    puVar2 = (undefined8 *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x2e8) + 0x68) + -0x10 +
             (longlong)*(int *)(*(longlong *)(lVar6 + 0x2e8) + 0x60) * 0x10);
    uVar9 = puVar2[1];
    *(undefined8 *)(lVar6 + 0x228) = *puVar2;
    *(undefined8 *)(lVar6 + 0x230) = uVar9;
    
    // 计算最终动画参数
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x1af8) + 0x210);
    fVar23 = *(float *)(lVar6 + 0x18);
    fVar22 = *(float *)(lVar6 + 0x14);
    fVar24 = *(float *)(((longlong)*(int *)(lVar6 + 0xc) + 1) * 0x1c + *(longlong *)(lVar6 + 0x38));
    fVar4 = *(float *)((longlong)*(int *)(lVar6 + 0xc) * 0x1c + *(longlong *)(lVar6 + 0x38));
    *(undefined1 *)(*(longlong *)(lVar5 + 0x1af8) + 0xb1) = 1;
    lVar6 = *(longlong *)(lVar5 + 0x1af8);
    fVar23 = (fVar24 - fVar4) * (fVar23 - fVar22) * 0.65;
    if (fVar23 == 0.0) {
        fVar23 = *(float *)(lVar6 + 0x284);
    }
    
    // 更新动画参数
    piVar16 = (int *)(lVar6 + 0x1c8);
    *(float *)(lVar6 + 0x1ac) = fVar23;
    iVar11 = *piVar16;
    iVar10 = *(int *)(lVar6 + 0x1cc);
    if (iVar11 == iVar10) {
        if (iVar10 == 0) {
            iVar10 = 8;
        }
        else {
            iVar10 = iVar10 / 2 + iVar10;
        }
        iVar13 = iVar11 + 1;
        if (iVar11 + 1 < iVar10) {
            iVar13 = iVar10;
        }
        FUN_18011dbd0(piVar16,iVar13);
        iVar11 = *piVar16;
    }
    *(float *)(*(longlong *)(lVar6 + 0x1d0) + (longlong)iVar11 * 4) = *(float *)(lVar6 + 0x1ac);
    *piVar16 = *piVar16 + 1;
    return;
}