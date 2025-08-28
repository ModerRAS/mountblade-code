// 2ÓûßØ§pnŒ’—Õ!W - ã
// +ypnÒ<ë’íã’Ø§’ŒRÆ—Õ
// ŸË‡ö03_rendering_part044.c

#include <defines.h>
#include <typedefs.h>

// 2Óypn„Ò<Œ¹L
void process_rendering_batch_data(undefined8 param_1, longlong param_2, int *param_3, uint param_4, float param_5,
                                 float param_6, undefined8 param_7, undefined8 param_8, undefined4 param_9,
                                 undefined4 param_10)
{
    int iVar1;
    float fVar2;
    float fVar3;
    int iVar4;
    uint uVar5;
    undefined8 uVar6;
    undefined8 uVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    float local_40;
    float local_3c;
    float local_38;
    float local_34;
    float local_30;
    float local_2c;
    float local_28;
    float local_24;
    float local_20;
    
    iVar4 = *(int *)(param_2 + 0x10);
    iVar10 = *(int *)(param_2 + 0x14);
    iVar11 = *(int *)(param_2 + 0x18);
    iVar1 = *(int *)(param_2 + 0x1c);
    iVar8 = *(int *)(param_2 + 8);
    iVar9 = *(int *)(param_2 + 0xc);
    fVar2 = *(float *)(param_2 + 0x20);
    fVar3 = *(float *)(param_2 + 0x24);
    local_24 = fVar3;
    local_20 = fVar2;
    local_40 = fVar3;
    local_3c = fVar2;
    local_28 = fVar3;
    local_2c = fVar2;
    local_38 = fVar3;
    local_34 = fVar2;
    local_30 = fVar2;
    uVar6 = param_7;
    uVar7 = param_8;
    iVar1 = iVar1 + iVar10;
    iVar8 = iVar8 + iVar9;
    iVar11 = iVar11 + iVar4;
    iVar4 = iVar4 * 4;
    iVar10 = iVar10 * 4;
    iVar9 = iVar9 * 4;
    iVar1 = iVar1 * 4;
    
    // ypn„¹LŒÒ<¡—
    if (iVar8 < iVar1) {
        if (iVar8 < iVar11) {
            if (iVar1 < iVar11) {
                iVar8 = iVar11;
            }
        } else {
            iVar8 = iVar1;
        }
    }
    
    // Ò<¡—Œpnt
    if (iVar8 != iVar1) {
        uVar5 = iVar8 - iVar1;
        if (iVar8 < iVar1) {
            uVar5 = iVar1 - iVar8;
        }
        uVar5 = uVar5 + 3;
        if (uVar5 == 0) {
            uVar5 = 1;
        }
        if (iVar8 < iVar1) {
            iVar8 = iVar8 + uVar5;
        }
        iVar8 = (iVar8 - iVar1) / uVar5;
    }
    
    // gLyÍ\
    iVar8 = render_batch_operation(param_1, iVar1, iVar4, iVar9, iVar10, param_3, param_4, param_5, param_6,
                                   uVar6, uVar7, param_9, param_10, local_40, local_3c, local_38, local_34,
                                   local_30, local_2c, local_28, local_24, local_20);
    return;
}

// 2ÓyÍ\„wS°
int render_batch_operation(undefined8 param_1, int param_2, int param_3, int param_4, int param_5, int *param_6,
                          uint param_7, float param_8, float param_9, undefined8 param_10, undefined8 param_11,
                          undefined4 param_12, undefined4 param_13, float param_14, float param_15, float param_16,
                          float param_17, float param_18, float param_19, float param_20, float param_21)
{
    // 2ÓyÍ\„wS°
    // pnlbP Œ2ÓÂp¾n
    return 0;
}

// ë’2Ópn
void quick_sort_rendering_data(int *param_1, int param_2)
{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    
    iVar2 = param_2 + -1;
    if (iVar2 < 0) {
        return;
    }
    
    iVar12 = param_1[iVar2];
    iVar1 = 0;
    iVar11 = 0;
    iVar10 = iVar2;
    
    while (iVar11 < iVar10) {
        iVar3 = param_1[iVar11];
        if (iVar3 < iVar12) {
            iVar1 = iVar11;
            iVar11 = iVar11 + 1;
        } else if (iVar12 < iVar3) {
            iVar10 = iVar10 + -1;
            iVar3 = param_1[iVar11];
            param_1[iVar11] = param_1[iVar10];
            param_1[iVar10] = iVar3;
        } else {
            iVar11 = iVar11 + 1;
        }
    }
    
    param_1[iVar2] = param_1[iVar10];
    param_1[iVar10] = iVar12;
    iVar4 = iVar10 - iVar1;
    iVar5 = iVar10;
    iVar6 = iVar1;
    iVar7 = iVar2;
    iVar8 = iVar1;
    iVar9 = iVar10;
    
    // R:
    if (iVar1 < iVar10 + -1) {
        quick_sort_recursive(param_1, iVar1, iVar10 + -1);
    }
    
    if (iVar10 + 1 < iVar2) {
        quick_sort_recursive(param_1, iVar10 + 1, iVar2);
    }
    
    return;
}

// Rë’°
void quick_sort_recursive(int *param_1, int param_2, int param_3)
{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    
    iVar2 = param_3 + -1;
    if (iVar2 < param_2) {
        return;
    }
    
    iVar12 = param_1[iVar2];
    iVar1 = param_2;
    iVar11 = param_2;
    iVar10 = iVar2;
    
    while (iVar11 < iVar10) {
        iVar3 = param_1[iVar11];
        if (iVar3 < iVar12) {
            iVar1 = iVar11;
            iVar11 = iVar11 + 1;
        } else if (iVar12 < iVar3) {
            iVar10 = iVar10 + -1;
            iVar3 = param_1[iVar11];
            param_1[iVar11] = param_1[iVar10];
            param_1[iVar10] = iVar3;
        } else {
            iVar11 = iVar11 + 1;
        }
    }
    
    param_1[iVar2] = param_1[iVar10];
    param_1[iVar10] = iVar12;
    iVar4 = iVar10 - iVar1;
    iVar5 = iVar10;
    iVar6 = iVar1;
    iVar7 = iVar2;
    iVar8 = iVar1;
    iVar9 = iVar10;
    
    // R:
    if (iVar1 < iVar10 + -1) {
        quick_sort_recursive(param_1, iVar1, iVar10 + -1);
    }
    
    if (iVar10 + 1 < iVar2) {
        quick_sort_recursive(param_1, iVar10 + 1, iVar2);
    }
    
    return;
}

// íã’2Ópn
void iterative_sort_rendering_data(int *param_1, int param_2)
{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    
    iVar2 = param_2 + -1;
    if (iVar2 < 0) {
        return;
    }
    
    iVar12 = param_1[iVar2];
    iVar1 = 0;
    iVar11 = 0;
    iVar10 = iVar2;
    
    while (iVar11 < iVar10) {
        iVar3 = param_1[iVar11];
        if (iVar3 < iVar12) {
            iVar1 = iVar11;
            iVar11 = iVar11 + 1;
        } else if (iVar12 < iVar3) {
            iVar10 = iVar10 + -1;
            iVar3 = param_1[iVar11];
            param_1[iVar11] = param_1[iVar10];
            param_1[iVar10] = iVar3;
        } else {
            iVar11 = iVar11 + 1;
        }
    }
    
    param_1[iVar2] = param_1[iVar10];
    param_1[iVar10] = iVar12;
    iVar4 = iVar10 - iVar1;
    iVar5 = iVar10;
    iVar6 = iVar1;
    iVar7 = iVar2;
    iVar8 = iVar1;
    iVar9 = iVar10;
    
    // íã:
    if (iVar1 < iVar10 + -1) {
        iterative_sort_partition(param_1, iVar1, iVar10 + -1);
    }
    
    if (iVar10 + 1 < iVar2) {
        iterative_sort_partition(param_1, iVar10 + 1, iVar2);
    }
    
    return;
}

// íã’:°
void iterative_sort_partition(int *param_1, int param_2, int param_3)
{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    
    iVar2 = param_3 + -1;
    if (iVar2 < param_2) {
        return;
    }
    
    iVar12 = param_1[iVar2];
    iVar1 = param_2;
    iVar11 = param_2;
    iVar10 = iVar2;
    
    while (iVar11 < iVar10) {
        iVar3 = param_1[iVar11];
        if (iVar3 < iVar12) {
            iVar1 = iVar11;
            iVar11 = iVar11 + 1;
        } else if (iVar12 < iVar3) {
            iVar10 = iVar10 + -1;
            iVar3 = param_1[iVar11];
            param_1[iVar11] = param_1[iVar10];
            param_1[iVar10] = iVar3;
        } else {
            iVar11 = iVar11 + 1;
        }
    }
    
    param_1[iVar2] = param_1[iVar10];
    param_1[iVar10] = iVar12;
    iVar4 = iVar10 - iVar1;
    iVar5 = iVar10;
    iVar6 = iVar1;
    iVar7 = iVar2;
    iVar8 = iVar1;
    iVar9 = iVar10;
    
    // íã:
    if (iVar1 < iVar10 + -1) {
        iterative_sort_partition(param_1, iVar1, iVar10 + -1);
    }
    
    if (iVar10 + 1 < iVar2) {
        iterative_sort_partition(param_1, iVar10 + 1, iVar2);
    }
    
    return;
}

// ê”Ø§’2Ópn
void adaptive_advanced_sort_rendering_data(undefined8 param_1, int *param_2, int param_3, undefined4 param_4,
                                          undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined8 uVar1;
    undefined8 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    
    iVar3 = param_3 + -1;
    if (iVar3 < 0) {
        return;
    }
    
    // ê”	é’—Õ
    if (param_3 < 100) {
        // pnÆ(Òe’
        insertion_sort_small_dataset(param_2, param_3);
    } else {
        // 'pnÆ(Ø§’
        uVar1 = param_1;
        uVar2 = param_1 + 0x10;
        iVar3 = *(int *)(param_1 + 8);
        iVar4 = *(int *)(param_1 + 0xc);
        iVar5 = *(int *)(param_1 + 0x10);
        iVar6 = *(int *)(param_1 + 0x14);
        iVar7 = *(int *)(param_1 + 0x18);
        iVar8 = *(int *)(param_1 + 0x1c);
        iVar9 = *(int *)(param_1 + 0x20);
        iVar10 = *(int *)(param_1 + 0x24);
        iVar11 = *(int *)(param_1 + 0x28);
        iVar12 = *(int *)(param_1 + 0x2c);
        iVar13 = *(int *)(param_1 + 0x30);
        
        // gLØ§’—Õ
        advanced_sort_implementation(param_2, param_3, iVar3, iVar4, iVar5, iVar6, iVar7, iVar8, iVar9, iVar10,
                                     iVar11, iVar12, iVar13, param_4, param_5, param_6, param_7);
    }
    
    return;
}

// Ø§’°
void advanced_sort_implementation(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                  int param_7, int param_8, int param_9, int param_10, int param_11, int param_12,
                                  int param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16,
                                  undefined4 param_17)
{
    // Ø§’—Õ„wS°
    // Óë’Rv’Œ’„¿
    return;
}

// Òe’pnÆ
void insertion_sort_small_dataset(int *param_1, int param_2)
{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    for (iVar1 = 1; iVar1 < param_2; iVar1++) {
        iVar2 = param_1[iVar1];
        iVar3 = iVar1 - 1;
        
        while (iVar3 >= 0 && param_1[iVar3] > iVar2) {
            param_1[iVar3 + 1] = param_1[iVar3];
            iVar3--;
        }
        
        param_1[iVar3 + 1] = iVar2;
    }
    
    return;
}

// RÆ2Ópn
void recursive_subdivide_rendering_data(undefined8 param_1, undefined8 param_2, int param_3, int param_4, int param_5,
                                        int param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
{
    undefined8 uVar1;
    undefined8 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    
    // RÆ—Õ„¹LÀå
    if (param_3 < 2 || param_4 < 2) {
        return;
    }
    
    // Æ¡—
    iVar3 = param_3 / 2;
    iVar4 = param_4 / 2;
    iVar5 = param_5 + iVar3;
    iVar6 = param_6 + iVar4;
    
    // RÛ*aP
    if (iVar3 > 1 && iVar4 > 1) {
        recursive_subdivide_rendering_data(param_1, param_2, iVar3, iVar4, param_5, param_6, param_7, param_8, param_9);
        recursive_subdivide_rendering_data(param_1, param_2, iVar3, iVar4, iVar5, param_6, param_7, param_8, param_9);
        recursive_subdivide_rendering_data(param_1, param_2, iVar3, iVar4, param_5, iVar6, param_7, param_8, param_9);
        recursive_subdivide_rendering_data(param_1, param_2, iVar3, iVar4, iVar5, iVar6, param_7, param_8, param_9);
    }
    
    return;
}

// ê”Ø§Æ2Ópn
void adaptive_advanced_subdivide_rendering_data(undefined8 param_1, undefined8 param_2, int param_3, int param_4,
                                                 int param_5, int param_6, undefined4 param_7, undefined4 param_8,
                                                 undefined4 param_9)
{
    undefined8 uVar1;
    undefined8 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    
    // ê”Æ—Õ„¹LÀå
    if (param_3 < 2 || param_4 < 2) {
        return;
    }
    
    // 9npny	éÆVe
    if (param_3 * param_4 < 1000) {
        // bï(€UÆ
        simple_subdivide_area(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9);
    } else {
        // 'bï(Ø§Æ
        iVar3 = param_3 / 2;
        iVar4 = param_4 / 2;
        iVar5 = param_5 + iVar3;
        iVar6 = param_6 + iVar4;
        
        // RÛ*aP
        if (iVar3 > 1 && iVar4 > 1) {
            adaptive_advanced_subdivide_rendering_data(param_1, param_2, iVar3, iVar4, param_5, param_6, param_7, param_8, param_9);
            adaptive_advanced_subdivide_rendering_data(param_1, param_2, iVar3, iVar4, iVar5, param_6, param_7, param_8, param_9);
            adaptive_advanced_subdivide_rendering_data(param_1, param_2, iVar3, iVar4, param_5, iVar6, param_7, param_8, param_9);
            adaptive_advanced_subdivide_rendering_data(param_1, param_2, iVar3, iVar4, iVar5, iVar6, param_7, param_8, param_9);
        }
    }
    
    return;
}

// €UÆ:ß
void simple_subdivide_area(undefined8 param_1, undefined8 param_2, int param_3, int param_4, int param_5, int param_6,
                           undefined4 param_7, undefined4 param_8, undefined4 param_9)
{
    // €UÆ—Õ„wS°
    // (bï„pnÆ
    return;
}

// 2ÓpnD
void cleanup_rendering_data_resources(undefined8 param_1)
{
    undefined8 uVar1;
    undefined8 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    
    // ÀåD	H'
    if (param_1 == (undefined8)0x0) {
        return;
    }
    
    // Ê>…XD
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 != 0) {
        free_memory_resource(iVar3);
    }
    
    // pnÓ„
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 != 0) {
        cleanup_data_structure(iVar4);
    }
    
    // Ín¶
    *(int *)(param_1 + 4) = 0;
    *(int *)(param_1 + 8) = 0;
    
    return;
}

// Ê>…XD
void free_memory_resource(int param_1)
{
    // Ê>…XD„wS°
    return;
}

// pnÓ„
void cleanup_data_structure(int param_1)
{
    // pnÓ„„wS°
    return;
}