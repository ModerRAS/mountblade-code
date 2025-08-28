#include "TaleWorlds.Native.Split.h"

/**
 * 渲染系统高级数据序列化和文件处理模块
 * 
 * 本模块包含2个核心函数，涵盖渲染系统数据序列化、文件处理、
 * 哈希表操作、内存管理、数据压缩和高级渲染功能。
 */

/* 常量定义 */
#define RENDERING_SYSTEM_MAX_DATA_SIZE 0x100000
#define RENDERING_SYSTEM_ALIGNMENT_FACTOR 0.03125
#define RENDERING_SYSTEM_COMPRESSION_THRESHOLD 0x1f
#define RENDERING_SYSTEM_BUFFER_SIZE 0x30
#define RENDERING_SYSTEM_MUTEX_TIMEOUT 0x30000
#define RENDERING_SYSTEM_BLOCK_SIZE 8
#define RENDERING_SYSTEM_INITIAL_BUFFER_SIZE 1

/* 函数别名定义 */
#define RenderingSystem_DataSerializer FUN_180331530
#define RenderingSystem_AdvancedFileProcessor FUN_180332110

/* 渲染系统数据序列化器 */
void FUN_180331530(longlong param_1, longlong param_2, uint param_3)
{
    undefined4 uVar1;
    undefined8 *puVar2;
    longlong *plVar3;
    longlong *plVar4;
    uint uVar5;
    uint uVar6;
    ulonglong *puVar7;
    uint *puVar8;
    longlong lVar9;
    ulonglong *puVar10;
    int iVar11;
    int *piVar12;
    ulonglong uVar13;
    int iVar14;
    undefined *puVar15;
    undefined4 *puVar16;
    ulonglong uVar17;
    undefined8 *puVar18;
    uint uVar19;
    longlong **pplVar20;
    ulonglong *puVar21;
    longlong lVar22;
    longlong lVar23;
    ulonglong *puVar24;
    undefined1 auVar25[16];
    longlong lStackX_10;
    uint uStackX_18;
    uint auStackX_20[2];
    longlong *plStack_148;
    uint *puStack_140;
    longlong *plStack_138;
    undefined4 uStack_130;
    ulonglong uStack_128;
    ulonglong uStack_120;
    ulonglong *puStack_118;
    ulonglong *puStack_110;
    ulonglong *puStack_108;
    undefined4 uStack_100;
    longlong *plStack_f8;
    undefined8 uStack_f0;
    code *pcStack_e8;
    undefined *puStack_e0;
    ulonglong *puStack_d8;
    ulonglong *puStack_d0;
    longlong **pplStack_c8;
    longlong lStack_c0;
    longlong *plStack_b8;
    ulonglong **ppuStack_b0;
    longlong **pplStack_a8;
    undefined1 uStack_a0;
    undefined8 uStack_98;
    undefined1 auStack_88[16];
    ulonglong uStack_78;
    undefined *puStack_68;
    longlong lStack_60;
    undefined4 uStack_50;
    
    uStack_98 = 0xfffffffffffffffe;
    uVar13 = (ulonglong)param_3;
    auStackX_20[0] = 0;
    puStack_118 = (ulonglong *)0x0;
    puStack_110 = (ulonglong *)0x0;
    puStack_108 = (ulonglong *)0x0;
    uStack_100 = 3;
    plStack_148 = (longlong *)0x0;
    puStack_140 = (uint *)0x0;
    plStack_138 = (longlong *)0x0;
    uStack_130 = 3;
    puVar2 = *(undefined8 **)(param_1 + 0x9f8);
    puVar16 = (undefined4 *)*puVar2;
    puVar18 = puVar2;
    
    /* 查找有效的渲染数据指针 */
    if (puVar16 == (undefined4 *)0x0) {
        puVar18 = puVar2 + 1;
        puVar16 = (undefined4 *)*puVar18;
        while (puVar16 == (undefined4 *)0x0) {
            puVar18 = puVar18 + 1;
            puVar16 = (undefined4 *)*puVar18;
        }
    }
    
    uVar19 = 0;
    lStackX_10 = param_2;
    uStackX_18 = param_3;
    
    /* 处理渲染数据哈希表 */
    if (puVar16 != (undefined4 *)puVar2[*(longlong *)(param_1 + 0xa00)]) {
        do {
            lVar23 = *(longlong *)(puVar16 + 2);
            lVar22 = *(longlong *)(lVar23 + 8);
            
            /* 在哈希表中查找匹配项 */
            for (piVar12 = *(int **)(lVar22 + (uVar13 % (ulonglong)*(uint *)(lVar23 + 0x10)) * 8);
                 piVar12 != (int *)0x0; piVar12 = *(int **)(piVar12 + 4)) {
                if ((int)uVar13 == *piVar12) {
                    lVar23 = *(longlong *)(lVar23 + 0x10);
                    goto LAB_180331625;
                }
            }
            
            lVar23 = *(longlong *)(lVar23 + 0x10);
            piVar12 = *(int **)(lVar22 + lVar23 * 8);
LAB_180331625:
            
            /* 处理找到的渲染数据 */
            if ((piVar12 != *(int **)(lVar22 + lVar23 * 8)) &&
                (lVar23 = *(longlong *)(piVar12 + 2), lVar23 != 0)) {
                
                /* 动态调整缓冲区大小 */
                if (puStack_110 < puStack_108) {
                    *(undefined4 *)puStack_110 = *puVar16;
                    puVar7 = puStack_110;
                }
                else {
                    lVar22 = (longlong)puStack_110 - (longlong)puStack_118 >> 2;
                    if (lVar22 == 0) {
                        lVar22 = 1;
LAB_180331688:
                        puVar7 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18, lVar22 * 4, (undefined1)uStack_100);
                    }
                    else {
                        lVar22 = lVar22 * 2;
                        if (lVar22 != 0) goto LAB_180331688;
                        puVar7 = (ulonglong *)0x0;
                    }
                    
                    if (puStack_118 != puStack_110) {
                        memmove(puVar7, puStack_118, (longlong)puStack_110 - (longlong)puStack_118);
                    }
                    
                    *(undefined4 *)puVar7 = *puVar16;
                    if (puStack_118 != (ulonglong *)0x0) {
                        FUN_18064e900();
                    }
                    
                    puStack_108 = (ulonglong *)((longlong)puVar7 + lVar22 * 4);
                    puStack_118 = puVar7;
                }
                
                puStack_110 = (ulonglong *)((longlong)puVar7 + 4);
                
                /* 处理渲染数据引用 */
                if (puStack_140 < plStack_138) {
                    *(longlong *)puStack_140 = lVar23;
                    puVar8 = puStack_140;
                }
                else {
                    lVar22 = (longlong)puStack_140 - (longlong)plStack_148 >> 3;
                    if (lVar22 == 0) {
                        lVar22 = 1;
LAB_18033173f:
                        puVar8 = (uint *)FUN_18062b420(_DAT_180c8ed18, lVar22 * 8, (char)uStack_130);
                    }
                    else {
                        lVar22 = lVar22 * 2;
                        if (lVar22 != 0) goto LAB_18033173f;
                        puVar8 = (uint *)0x0;
                    }
                    
                    if ((uint *)plStack_148 != puStack_140) {
                        memmove(puVar8, plStack_148, (longlong)puStack_140 - (longlong)plStack_148);
                    }
                    
                    *(longlong *)puVar8 = lVar23;
                    if (plStack_148 != (longlong *)0x0) {
                        FUN_18064e900();
                    }
                    
                    plStack_138 = (longlong *)((longlong)puVar8 + lVar22 * 8);
                    plStack_148 = (longlong *)puVar8;
                }
                
                puStack_140 = (uint *)((longlong)puVar8 + 8);
                uVar19 = auStackX_20[0] + 1;
                uVar13 = (ulonglong)uStackX_18;
                auStackX_20[0] = uVar19;
            }
            
            puVar16 = *(undefined4 **)(puVar16 + 4);
            while (puVar16 == (undefined4 *)0x0) {
                puVar18 = puVar18 + 1;
                puVar16 = (undefined4 *)*puVar18;
            }
        } while (puVar16 != *(undefined4 **)(*(longlong *)(param_1 + 0x9f8) + *(longlong *)(param_1 + 0xa00) * 8));
    }
    
    /* 数据压缩和优化处理 */
    puVar7 = (ulonglong *)0x0;
    iVar11 = 0x20;
    uStack_128 = CONCAT44(uStack_128._4_4_, 0x20);
    auVar25._0_4_ = 0.0;
    
    if (uVar19 != 0) {
        auVar25._0_4_ = (float)uVar19 * RENDERING_SYSTEM_ALIGNMENT_FACTOR;
        iVar14 = (int)auVar25._0_4_;
        if ((iVar14 != -0x80000000) && ((float)iVar14 != auVar25._0_4_)) {
            auVar25._4_4_ = auVar25._0_4_;
            auVar25._8_8_ = 0;
            uVar5 = movmskps(uVar19, auVar25);
            auVar25._0_4_ = (float)(int)(iVar14 + (uVar5 & 1 ^ 1));
        }
    }
    
    uVar5 = (uint)(longlong)auVar25._0_4_;
    if (uVar5 < 2) {
        uStack_128 = CONCAT44(uStack_128._4_4_, uVar19);
    }
    else {
        uVar6 = uVar5 * RENDERING_SYSTEM_COMPRESSION_THRESHOLD;
        if (uVar19 <= uVar6) {
            do {
                iVar11 = iVar11 + -1;
                uVar6 = uVar6 - uVar5;
            } while (uVar19 <= uVar6);
            uStack_128 = CONCAT44(uStack_128._4_4_, iVar11);
        }
    }
    
    uStack_120 = CONCAT44(uStack_120._4_4_, uVar5);
    fwrite(&uStack_128, 4, 1, *(undefined8 *)(lStackX_10 + 8));
    
    /* 处理压缩后的数据 */
    if ((int)uStack_128 != 0) {
        pplStack_a8 = &plStack_f8;
        puStack_d8 = &uStack_120;
        puStack_d0 = (ulonglong *)auStackX_20;
        pplStack_c8 = &plStack_148;
        plStack_b8 = &lStackX_10;
        ppuStack_b0 = &puStack_118;
        pcStack_e8 = FUN_18033cd80;
        puStack_e0 = &UNK_18033cd70;
        lStack_c0 = param_1;
        plStack_f8 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18, RENDERING_SYSTEM_BUFFER_SIZE, 8, DAT_180bf65bc);
        *plStack_f8 = (longlong)puStack_d8;
        plStack_f8[1] = (longlong)puStack_d0;
        plStack_f8[2] = (longlong)pplStack_c8;
        plStack_f8[3] = lStack_c0;
        plStack_f8[4] = (longlong)plStack_b8;
        plStack_f8[5] = (longlong)ppuStack_b0;
        FUN_18015b810();
    }
    
    /* 清理内存资源 */
    if (plStack_148 != (longlong *)0x0) {
        FUN_18064e900();
    }
    if (puStack_118 != (ulonglong *)0x0) {
        FUN_18064e900();
    }
    
    /* 第二阶段数据处理 */
    auStackX_20[0] = 0;
    puStack_d8 = (ulonglong *)0x0;
    puStack_d0 = (ulonglong *)0x0;
    pplStack_c8 = (longlong **)0x0;
    lStack_c0 = CONCAT44(lStack_c0._4_4_, 3);
    puStack_118 = (ulonglong *)0x0;
    puStack_110 = (ulonglong *)0x0;
    puStack_108 = (ulonglong *)0x0;
    uStack_100 = 3;
    puVar2 = *(undefined8 **)(param_1 + 0x6c0);
    puVar16 = (undefined4 *)*puVar2;
    puVar18 = puVar2;
    
    /* 查找第二阶段数据指针 */
    if (puVar16 == (undefined4 *)0x0) {
        puVar18 = puVar2 + 1;
        puVar16 = (undefined4 *)*puVar18;
        while (puVar16 == (undefined4 *)0x0) {
            puVar18 = puVar18 + 1;
            puVar16 = (undefined4 *)*puVar18;
        }
    }
    
    /* 处理第二阶段渲染数据 */
    if (puVar16 != (undefined4 *)puVar2[*(longlong *)(param_1 + 0x6c8)]) {
        puVar21 = (ulonglong *)0x0;
        puVar24 = (ulonglong *)0x0;
        pplVar20 = (longlong **)puVar7;
        
        do {
            lVar23 = *(longlong *)(puVar16 + 2);
            lVar22 = *(longlong *)(lVar23 + 8);
            
            /* 在第二阶段哈希表中查找 */
            for (piVar12 = *(int **)(lVar22 + (uVar13 % (ulonglong)*(uint *)(lVar23 + 0x10)) * 8);
                 piVar12 != (int *)0x0; piVar12 = *(int **)(piVar12 + 4)) {
                if ((int)uVar13 == *piVar12) {
                    lVar9 = *(longlong *)(lVar23 + 0x10);
                    goto LAB_180331a35;
                }
            }
            
            lVar9 = *(longlong *)(lVar23 + 0x10);
            piVar12 = *(int **)(lVar22 + lVar9 * 8);
LAB_180331a35:
            
            /* 处理第二阶段数据 */
            if ((piVar12 != *(int **)(lVar22 + lVar9 * 8)) &&
                (uStack_120 = *(ulonglong *)(piVar12 + 2), uStack_120 != 0)) {
                
                /* 动态调整缓冲区 */
                if (puVar21 < pplVar20) {
                    *(undefined4 *)puVar21 = *puVar16;
                    puVar10 = puVar21;
                }
                else {
                    uStack_128 = (longlong)puVar21 - (longlong)puStack_d8;
                    if ((longlong)uStack_128 >> 2 == 0) {
                        lVar22 = 1;
LAB_180331a9e:
                        puVar10 = (ulonglong *)
                                  FUN_18062b420(_DAT_180c8ed18, lVar22 * 4,
                                                CONCAT71((int7)((ulonglong)lVar23 >> 8), 3));
                    }
                    else {
                        lVar22 = ((longlong)uStack_128 >> 2) * 2;
                        if (lVar22 != 0) goto LAB_180331a9e;
                        puVar10 = (ulonglong *)0x0;
                    }
                    
                    if (puStack_d8 != puVar21) {
                        memmove(puVar10, puStack_d8, uStack_128);
                    }
                    
                    *(undefined4 *)puVar10 = *puVar16;
                    if (puStack_d8 != (ulonglong *)0x0) {
                        FUN_18064e900();
                    }
                    
                    pplStack_c8 = (longlong **)((longlong)puVar10 + lVar22 * 4);
                    puVar7 = puStack_108;
                    puStack_d8 = puVar10;
                }
                
                puVar21 = (ulonglong *)((longlong)puVar10 + 4);
                puStack_d0 = puVar21;
                
                /* 处理数据引用 */
                if (puVar24 < puVar7) {
                    *puVar24 = uStack_120;
                    puVar10 = puVar24;
                }
                else {
                    uStack_128 = (longlong)puVar24 - (longlong)puStack_118;
                    if ((longlong)uStack_128 >> 3 == 0) {
                        lVar23 = 1;
LAB_180331b54:
                        puVar10 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18, lVar23 * 8, 3);
                    }
                    else {
                        lVar23 = ((longlong)uStack_128 >> 3) * 2;
                        if (lVar23 != 0) goto LAB_180331b54;
                        puVar10 = (ulonglong *)0x0;
                    }
                    
                    if (puStack_118 != puVar24) {
                        memmove(puVar10, puStack_118, uStack_128);
                    }
                    
                    *puVar10 = uStack_120;
                    if (puStack_118 != (ulonglong *)0x0) {
                        FUN_18064e900();
                    }
                    
                    puVar7 = puVar10 + lVar23;
                    puStack_118 = puVar10;
                    puStack_108 = puVar7;
                }
                
                puVar24 = puVar10 + 1;
                auStackX_20[0] = auStackX_20[0] + 1;
                uVar13 = (ulonglong)uStackX_18;
                pplVar20 = pplStack_c8;
                puStack_110 = puVar24;
            }
            
            puVar16 = *(undefined4 **)(puVar16 + 4);
            while (puVar16 == (undefined4 *)0x0) {
                puVar18 = puVar18 + 1;
                puVar16 = (undefined4 *)*puVar18;
            }
        } while (puVar16 != *(undefined4 **)(*(longlong *)(param_1 + 0x6c0) + *(longlong *)(param_1 + 0x6c8) * 8));
    }
    
    /* 写入序列化数据 */
    fwrite(auStackX_20, 4, 1, *(undefined8 *)(lStackX_10 + 8));
    puVar21 = puStack_d8;
    puVar7 = puStack_118;
    
    if (auStackX_20[0] != 0) {
        fwrite(puStack_d8, 4, auStackX_20[0], *(undefined8 *)(lStackX_10 + 8));
        
        /* 初始化数据缓冲区 */
        plStack_148 = (longlong *)0x0;
        puStack_140 = (uint *)0x0;
        plStack_138 = (longlong *)0x0;
        uStack_130 = CONCAT13(uStack_130._3_1_, RENDERING_SYSTEM_MUTEX_TIMEOUT);
        FUN_180639bf0(&plStack_148, RENDERING_SYSTEM_MAX_DATA_SIZE);
        puVar7 = puStack_118;
        plVar3 = plStack_148;
        
        if (auStackX_20[0] != 0) {
            puVar16 = (undefined4 *)*puStack_118;
            uVar1 = *puVar16;
            
            /* 动态调整缓冲区大小 */
            if ((ulonglong)(((longlong)plStack_138 - (longlong)puStack_140) + (longlong)plStack_148) < 5) {
                FUN_180639bf0(&plStack_148, (longlong)puStack_140 + (4 - (longlong)plStack_148));
            }
            
            *puStack_140 = uVar1;
            puStack_140 = (uint *)((longlong)puStack_140 + 4);
            uVar1 = puVar16[2];
            
            if ((ulonglong)(((longlong)plStack_138 - (longlong)puStack_140) + (longlong)plStack_148) < 5) {
                FUN_180639bf0(&plStack_148, (longlong)puStack_140 + (4 - (longlong)plStack_148));
            }
            
            *puStack_140 = uVar1;
            puStack_140 = puStack_140 + 1;
            
            /* 处理渲染数据块 */
            if ((ulonglong)(((longlong)plStack_138 - (longlong)puStack_140) + (longlong)plStack_148) < 0x41) {
                FUN_180639bf0(&plStack_148, (longlong)puStack_140 + (0x40 - (longlong)plStack_148));
            }
            
            if ((ulonglong)(((longlong)plStack_138 - (longlong)puStack_140) + (longlong)plStack_148) < 0x11) {
                FUN_180639bf0(&plStack_148, (longlong)puStack_140 + (0x10 - (longlong)plStack_148));
            }
            
            *puStack_140 = puVar16[3];
            puStack_140[1] = puVar16[4];
            puStack_140[2] = puVar16[5];
            puStack_140[3] = puVar16[6];
            puStack_140 = puStack_140 + 4;
            
            if ((ulonglong)(((longlong)plStack_138 - (longlong)puStack_140) + (longlong)plStack_148) < 0x11) {
                FUN_180639bf0(&plStack_148, (longlong)puStack_140 + (0x10 - (longlong)plStack_148));
            }
            
            *puStack_140 = puVar16[7];
            puStack_140[1] = puVar16[8];
            puStack_140[2] = puVar16[9];
            puStack_140[3] = puVar16[10];
            puStack_140 = puStack_140 + 4;
            
            if ((ulonglong)(((longlong)plStack_138 - (longlong)puStack_140) + (longlong)plStack_148) < 0x11) {
                FUN_180639bf0(&plStack_148, (longlong)puStack_140 + (0x10 - (longlong)plStack_148));
            }
            
            *puStack_140 = puVar16[0xb];
            puStack_140[1] = puVar16[0xc];
            puStack_140[2] = puVar16[0xd];
            puStack_140[3] = puVar16[0xe];
            puStack_140 = puStack_140 + 4;
            
            if ((ulonglong)(((longlong)plStack_138 - (longlong)puStack_140) + (longlong)plStack_148) < 0x11) {
                FUN_180639bf0(&plStack_148, (longlong)puStack_140 + (0x10 - (longlong)plStack_148));
            }
            
            *puStack_140 = puVar16[0xf];
            puStack_140[1] = puVar16[0x10];
            puStack_140[2] = puVar16[0x11];
            puStack_140[3] = puVar16[0x12];
            puStack_140 = puStack_140 + 4;
            
            uVar19 = puVar16[0x18];
            uVar13 = (ulonglong)uVar19 + 4;
            
            if ((ulonglong)(((longlong)plStack_138 - (longlong)puStack_140) + (longlong)plStack_148) <= uVar13) {
                FUN_180639bf0(&plStack_148, (longlong)puStack_140 + (uVar13 - (longlong)plStack_148));
            }
            
            *puStack_140 = uVar19;
            puStack_140 = puStack_140 + 1;
            puVar15 = &DAT_18098bc73;
            
            if (*(undefined **)(puVar16 + 0x16) != (undefined *)0x0) {
                puVar15 = *(undefined **)(puVar16 + 0x16);
            }
            
            memcpy(puStack_140, puVar15, (ulonglong)uVar19);
        }
        
        uVar13 = (longlong)puStack_140 - (longlong)plStack_148;
        if (plStack_148 == (longlong *)0x0) {
            uVar13 = 0;
        }
        
        /* 最终数据序列化 */
        plStack_f8 = (longlong *)0x0;
        uStack_f0 = 0;
        pcStack_e8 = (code *)0x0;
        puStack_e0 = (undefined *)CONCAT53(puStack_e0._3_5_, RENDERING_SYSTEM_MUTEX_TIMEOUT);
        uVar17 = uVar13 & 0xffffffff;
        FUN_180639bf0(&plStack_f8, uVar13 & 0xffffffff);
        plVar4 = plStack_f8;
        pplStack_a8 = (longlong **)&UNK_1809ff4e0;
        uStack_a0 = 1;
        uStack_128 = uVar17;
        uStack_120 = uVar17;
        FUN_18021f4e0(&pplStack_a8, auStack_88, plVar3, uVar13 & 0xffffffff, plStack_f8, uVar17);
        uStack_120 = uStack_78;
        
        /* 写入序列化结果 */
        fwrite(&uStack_128, 8, 1, *(undefined8 *)(lStackX_10 + 8));
        fwrite(&uStack_120, 8, 1, *(undefined8 *)(lStackX_10 + 8));
        fwrite(plVar4, uStack_120, 1, *(undefined8 *)(lStackX_10 + 8));
        puStack_68 = &UNK_180a3c3e0;
        
        if (lStack_60 != 0) {
            FUN_18064e900();
        }
        
        lStack_60 = 0;
        uStack_50 = 0;
        puStack_68 = &UNK_18098bcb0;
        
        if (((char)puStack_e0 == '\0') && (plVar4 != (longlong *)0x0)) {
            FUN_18064e900(plVar4);
        }
        
        if (((char)uStack_130 == '\0') && (plVar3 != (longlong *)0x0)) {
            FUN_18064e900(plVar3);
        }
    }
    
    /* 最终清理 */
    if (puVar7 != (ulonglong *)0x0) {
        FUN_18064e900(puVar7);
    }
    
    if (puVar21 == (ulonglong *)0x0) {
        return;
    }
    
    FUN_18064e900(puVar21);
}

/* 渲染系统高级文件处理器 */
void FUN_180332110(undefined8 *param_1, int param_2, int param_3)
{
    int iVar1;
    longlong *plVar2;
    longlong *plVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong *plVar8;
    longlong *plVar9;
    int iVar10;
    undefined **ppuVar11;
    uint uVar12;
    longlong lVar13;
    int iStackX_10;
    int aiStackX_20[2];
    longlong lStack_120;
    longlong lStack_118;
    undefined8 uStack_110;
    undefined2 uStack_108;
    undefined1 uStack_106;
    ulonglong uStack_100;
    undefined **ppuStack_f8;
    longlong alStack_f0[3];
    undefined2 uStack_d8;
    undefined1 uStack_d6;
    longlong *plStack_d0;
    longlong *plStack_c8;
    longlong *plStack_c0;
    undefined4 uStack_b8;
    ulonglong uStack_b0;
    undefined *puStack_a8;
    undefined1 uStack_a0;
    undefined8 uStack_98;
    longlong lStack_90;
    undefined1 auStack_88[16];
    ulonglong uStack_78;
    undefined *puStack_68;
    longlong lStack_60;
    undefined4 uStack_50;
    
    /* 参数验证和初始化 */
    if (param_2 < param_3) {
        uStack_98 = 0xfffffffffffffffe;
        iStackX_10 = param_2;
        
        do {
            /* 初始化处理缓冲区 */
            plVar9 = (longlong *)0x0;
            plStack_d0 = (longlong *)0x0;
            plStack_c8 = (longlong *)0x0;
            plStack_c0 = (longlong *)0x0;
            uStack_b8 = 3;
            lStack_120 = 0;
            lStack_118 = 0;
            uStack_110 = 0;
            uStack_108 = 0;
            uStack_106 = 3;
            
            /* 分配渲染数据缓冲区 */
            FUN_180639bf0(&lStack_120, RENDERING_SYSTEM_MAX_DATA_SIZE);
            aiStackX_20[0] = 0;
            uVar12 = *(int *)*param_1 * iStackX_10;
            iVar10 = iStackX_10 + 1;
            lVar13 = lStack_120;
            lVar6 = lStack_118;
            plVar2 = plStack_d0;
            
            /* 处理渲染数据范围 */
            if (uVar12 < (uint)(iVar10 * *(int *)*param_1)) {
                ppuVar11 = (undefined **)((longlong)(int)uVar12 * 8);
                plVar7 = plStack_d0;
                plVar8 = plStack_c8;
                
                do {
                    plVar2 = plVar7;
                    ppuStack_f8 = ppuVar11;
                    
                    /* 检查数据边界 */
                    if (*(uint *)param_1[1] <= uVar12) break;
                    
                    /* 处理有效的渲染数据 */
                    if (*(longlong *)((longlong)ppuVar11 + *(longlong *)param_1[2]) != 0) {
                        plVar3 = (longlong *)(lVar6 - lVar13);
                        if (lVar13 == 0) {
                            plVar3 = (longlong *)0x0;
                        }
                        
                        /* 动态调整数据缓冲区 */
                        if (plVar8 < plVar9) {
                            *plVar8 = (longlong)plVar3;
                        }
                        else {
                            lVar13 = (longlong)plVar8 - (longlong)plVar7 >> 3;
                            if (lVar13 == 0) {
                                lVar13 = RENDERING_SYSTEM_INITIAL_BUFFER_SIZE;
LAB_180332267:
                                plVar2 = (longlong *)FUN_18062b420(_DAT_180c8ed18, lVar13 * RENDERING_SYSTEM_BLOCK_SIZE);
                            }
                            else {
                                lVar13 = lVar13 * 2;
                                plVar2 = (longlong *)0x0;
                                if (lVar13 != 0) goto LAB_180332267;
                            }
                            
                            if (plVar7 != plVar8) {
                                memmove(plVar2, plVar7, (longlong)plVar8 - (longlong)plVar7);
                            }
                            
                            *plVar2 = (longlong)plVar3;
                            if (plVar7 != (longlong *)0x0) {
                                FUN_18064e900(plVar7);
                            }
                            
                            plVar9 = plVar2 + lVar13;
                            plStack_d0 = plVar2;
                            plStack_c0 = plVar9;
                            plVar8 = plVar2;
                        }
                        
                        ppuVar11 = ppuStack_f8;
                        plVar8 = plVar8 + 1;
                        plStack_c8 = plVar8;
                        
                        /* 处理渲染数据 */
                        FUN_180336980(*(undefined8 *)((longlong)ppuStack_f8 + *(longlong *)param_1[2]),
                                      &lStack_120);
                        aiStackX_20[0] = aiStackX_20[0] + 1;
                        lVar13 = lStack_120;
                        lVar6 = lStack_118;
                    }
                    
                    uVar12 = uVar12 + 1;
                    ppuVar11 = ppuVar11 + 1;
                    plVar7 = plVar2;
                    ppuStack_f8 = ppuVar11;
                } while (uVar12 < (uint)(*(int *)*param_1 * iVar10));
            }
            
            /* 计算数据大小 */
            uVar4 = lVar6 - lVar13;
            if (lVar13 == 0) {
                uVar4 = 0;
            }
            
            /* 初始化输出缓冲区 */
            alStack_f0[0] = 0;
            alStack_f0[1] = 0;
            alStack_f0[2] = 0;
            uStack_d8 = 0;
            uStack_d6 = 3;
            uVar5 = uVar4 & 0xffffffff;
            FUN_180639bf0(alStack_f0, uVar5);
            lVar13 = alStack_f0[0];
            puStack_a8 = &UNK_1809ff4e0;
            uStack_a0 = 0;
            uStack_100 = uVar5;
            uStack_b0 = uVar5;
            
            /* 数据压缩处理 */
            FUN_18021f4e0(&puStack_a8, auStack_88, lStack_120, uVar4 & 0xffffffff, alStack_f0[0], uVar5);
            uStack_100 = uStack_78;
            lVar6 = param_1[3] + 0xa70;
            lStack_90 = lVar6;
            
            /* 线程安全的文件写入操作 */
            iVar1 = _Mtx_lock(lVar6);
            if (iVar1 != 0) {
                __Throw_C_error_std__YAXH_Z(iVar1);
            }
            
            /* 写入渲染数据到文件 */
            fwrite(aiStackX_20, 4, 1, *(undefined8 *)(*(longlong *)param_1[4] + 8));
            fwrite(*(longlong *)param_1[5] + (ulonglong)(uint)(*(int *)*param_1 * iStackX_10) * 4, 4,
                   aiStackX_20[0], *(undefined8 *)(*(longlong *)param_1[4] + 8));
            fwrite(plVar2, 8, aiStackX_20[0], *(undefined8 *)(*(longlong *)param_1[4] + 8));
            fwrite(&uStack_b0, 8, 1, *(undefined8 *)(*(longlong *)param_1[4] + 8));
            fwrite(&uStack_100, 8, 1, *(undefined8 *)(*(longlong *)param_1[4] + 8));
            fwrite(lVar13, uStack_100, 1, *(undefined8 *)(*(longlong *)param_1[4] + 8));
            
            /* 释放互斥锁 */
            iVar1 = _Mtx_unlock(lVar6);
            if (iVar1 != 0) {
                __Throw_C_error_std__YAXH_Z(iVar1);
            }
            
            /* 清理临时资源 */
            ppuStack_f8 = &puStack_68;
            puStack_68 = &UNK_180a3c3e0;
            if (lStack_60 != 0) {
                FUN_18064e900();
            }
            
            lStack_60 = 0;
            uStack_50 = 0;
            puStack_68 = &UNK_18098bcb0;
            
            if (((char)uStack_d8 == '\0') && (lVar13 != 0)) {
                FUN_18064e900(lVar13);
            }
            
            if (((char)uStack_108 == '\0') && (lStack_120 != 0)) {
                FUN_18064e900();
            }
            
            if (plVar2 != (longlong *)0x0) {
                FUN_18064e900(plVar2);
            }
            
            iStackX_10 = iVar10;
        } while (iVar10 < param_3);
    }
    
    return;
}