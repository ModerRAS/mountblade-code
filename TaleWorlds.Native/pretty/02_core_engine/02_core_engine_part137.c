#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part137.c - 核心引擎模块第137部分
// 本文件包含7个函数，主要处理游戏中的坐标计算、边界检查和矩阵变换等功能

// 函数: void FUN_180132b74(uint64_t param_1,int32_t param_2)
// 功能: 处理游戏对象的坐标变换和边界检查
void update_game_object_coordinates(uint64_t param_1, int32_t param_2)
{
    uint64_t *puVar1;
    longlong lVar2;
    int8_t uVar3;
    int iVar4;
    longlong lVar5;
    longlong unaff_RBX;
    longlong unaff_RDI;
    char cVar6;
    longlong unaff_R14;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float unaff_XMM6_Da;
    float fVar17;
    float fVar18;
    float fStack0000000000000030;
    float fStack0000000000000034;
    float fStack0000000000000038;
    float fStack000000000000003c;
    float fStack00000000000000b0;
    float fStack00000000000000b4;
    int iVar7;
    
    // 获取时间因子
    fVar8 = (float)get_time_factor(param_2);
    cVar6 = (char)unaff_R14;
    iVar7 = (int)unaff_R14;
    
    // 检查对象状态
    if (*(int *)(unaff_RBX + 0x1d2c) == -1) {
        if (*(char *)(unaff_RBX + 0x1d21) != cVar6) goto update_object_bounds;
    }
    else {
        *(int8_t *)(unaff_RBX + 0x1d21) = 1;
        *(int *)(unaff_RBX + 0x1d30) = *(int *)(unaff_RBX + 0x1d2c);
update_object_bounds:
        if (*(int *)(unaff_RBX + 0x1ca0) == iVar7) {
            *(int16_t *)(unaff_RBX + 0x1d09) = 0x101;
            *(int *)(unaff_RBX + 0x1d0c) = iVar7;
            *(char *)(unaff_RBX + 0x1d06) = cVar6;
        }
    }
    
    // 更新对象状态标记
    if ((*(char *)(unaff_RDI + 0x1d21) == cVar6) && (*(char *)(unaff_RDI + 0x1d09) == cVar6)) {
        uVar3 = 0;
    }
    else {
        uVar3 = 1;
    }
    *(int8_t *)(unaff_RDI + 0x1d08) = uVar3;
    
    // 检查是否需要更新坐标
    lVar2 = *(longlong *)(unaff_RBX + 0x1c98);
    if (((lVar2 == 0) || ((*(uint *)(lVar2 + 0xc) & 0x40000) != 0)) ||
       (*(longlong *)(unaff_RBX + 0x1cd8) != unaff_R14)) goto update_matrix_values;
    
    // 计算缩放因子
    fVar18 = (float)(int)(*(float *)(unaff_RDI + 0x19fc) * *(float *)(lVar2 + 0x2d8) *
                          *(float *)(lVar2 + 0x2dc) * 100.0 * *(float *)(unaff_RBX + 0x18) + 0.5);
    
    // 根据对象状态更新坐标
    if (((*(int *)(lVar2 + 0x174) == iVar7) && (*(char *)(lVar2 + 0x17d) != cVar6)) &&
       (*(char *)(unaff_RBX + 0x1d21) != cVar6)) {
        iVar4 = *(int *)(unaff_RBX + 0x1d2c);
        if (iVar4 == 0) {
            fVar9 = -fVar18;
update_coordinate_x:
            fVar10 = *(float *)(lVar2 + 0x8c);
            fVar9 = (float)(int)(fVar9 + fVar10);
            *(float *)(lVar2 + 0x8c) = fVar9;
            *(float *)(lVar2 + 0x118) = (fVar10 + *(float *)(lVar2 + 0x118)) - fVar9;
            iVar4 = *(int *)(unaff_RBX + 0x1d2c);
        }
        else {
            fVar9 = fVar18;
            if (iVar4 == 1) goto update_coordinate_x;
        }
        if (iVar4 == 2) {
            fVar9 = -fVar18;
        }
        else {
            fVar9 = fVar18;
            if (iVar4 != 3) goto update_coordinate_y;
        }
        fVar10 = *(float *)(lVar2 + 0x90);
        fVar9 = (float)(int)(fVar9 + fVar10);
        *(float *)(lVar2 + 0x90) = fVar9;
        *(float *)(lVar2 + 0x11c) = (fVar10 + *(float *)(lVar2 + 0x11c)) - fVar9;
    }
update_coordinate_y:
    
    // 获取变换矩阵参数
    FUN_180131aa0(&stack0x000000b0, 4, 0, 0x3dcccccd, 0x41200000);
    if ((fStack00000000000000b0 != unaff_XMM6_Da) && (*(char *)(lVar2 + 0xac) != cVar6)) {
        fVar9 = *(float *)(lVar2 + 0x8c);
        fVar10 = (float)(int)(fStack00000000000000b0 * fVar18 + fVar9);
        *(float *)(lVar2 + 0x8c) = fVar10;
        *(float *)(lVar2 + 0x118) = (fVar9 + *(float *)(lVar2 + 0x118)) - fVar10;
        *(int8_t *)(unaff_RBX + 0x1d20) = 1;
    }
    if (fStack00000000000000b4 != unaff_XMM6_Da) {
        fVar9 = *(float *)(lVar2 + 0x90);
        fVar18 = (float)(int)(fStack00000000000000b4 * fVar18 + fVar9);
        *(float *)(lVar2 + 0x90) = fVar18;
        *(float *)(lVar2 + 0x11c) = (fVar9 + *(float *)(lVar2 + 0x11c)) - fVar18;
        *(int8_t *)(unaff_RBX + 0x1d20) = 1;
    }
update_matrix_values:
    
    // 初始化矩阵值
    *(uint64_t *)(unaff_RBX + 0x1d54) = 0x7f7fffff7f7fffff;
    *(uint64_t *)(unaff_RBX + 0x1d5c) = 0xff7fffffff7fffff;
    *(int *)(unaff_RBX + 0x1d38) = iVar7;
    *(longlong *)(unaff_RBX + 0x1d40) = unaff_R14;
    *(int32_t *)(unaff_RBX + 0x1d50) = 0x7f7fffff;
    *(int32_t *)(unaff_RBX + 0x1d4c) = 0x7f7fffff;
    *(int32_t *)(unaff_RBX + 0x1d48) = 0x7f7fffff;
    *(int *)(unaff_RBX + 0x1d68) = iVar7;
    *(longlong *)(unaff_RBX + 0x1d70) = unaff_R14;
    *(int32_t *)(unaff_RBX + 0x1d80) = 0x7f7fffff;
    *(int32_t *)(unaff_RBX + 0x1d7c) = 0x7f7fffff;
    *(int32_t *)(unaff_RBX + 0x1d78) = 0x7f7fffff;
    *(uint64_t *)(unaff_RBX + 0x1d84) = 0x7f7fffff7f7fffff;
    *(uint64_t *)(unaff_RBX + 0x1d8c) = 0xff7fffffff7fffff;
    *(int *)(unaff_RBX + 0x1d98) = iVar7;
    *(longlong *)(unaff_RBX + 0x1da0) = unaff_R14;
    *(int32_t *)(unaff_RBX + 0x1db0) = 0x7f7fffff;
    *(int32_t *)(unaff_RBX + 0x1dac) = 0x7f7fffff;
    *(int32_t *)(unaff_RBX + 0x1da8) = 0x7f7fffff;
    *(uint64_t *)(unaff_RBX + 0x1db4) = 0x7f7fffff7f7fffff;
    *(uint64_t *)(unaff_RBX + 0x1dbc) = 0xff7fffffff7fffff;
    
    // 检查并更新边界框
    if (((*(char *)(unaff_RBX + 0x1d21) != cVar6) && (*(char *)(unaff_RBX + 0x1d20) != cVar6)) &&
       (*(int *)(unaff_RBX + 0x1cfc) == iVar7)) {
        lVar2 = *(longlong *)(unaff_RBX + 0x1c98);
        fVar18 = *(float *)(lVar2 + 0x3d0);
        fVar17 = (*(float *)(lVar2 + 0x248) - *(float *)(lVar2 + 0x40)) - 1.0;
        fVar10 = (*(float *)(lVar2 + 0x250) - *(float *)(lVar2 + 0x40)) + 1.0;
        fVar16 = (*(float *)(lVar2 + 0x254) - *(float *)(lVar2 + 0x44)) + 1.0;
        fVar9 = (*(float *)(lVar2 + 0x24c) - *(float *)(lVar2 + 0x44)) - 1.0;
        if (((fVar18 < fVar17) ||
            (*(float *)(lVar2 + 0x3d4) <= fVar9 && fVar9 != *(float *)(lVar2 + 0x3d4))) ||
           ((fVar10 < *(float *)(lVar2 + 0x3d8) || (fVar16 < *(float *)(lVar2 + 0x3dc))))) {
            fVar11 = *(float *)(unaff_RDI + 0x19fc) * *(float *)(lVar2 + 0x2d8) *
                     *(float *)(lVar2 + 0x2dc) * 0.5;
            fVar15 = fVar16 - fVar9;
            if (fVar11 <= fVar16 - fVar9) {
                fVar15 = fVar11;
            }
            fVar14 = fVar10 - fVar17;
            if (fVar11 <= fVar10 - fVar17) {
                fVar14 = fVar11;
            }
            fVar9 = fVar9 - -fVar15;
            fVar17 = fVar17 - -fVar14;
            fVar10 = fVar10 + -fVar14;
            fVar16 = fVar16 + -fVar15;
            if (fVar9 <= *(float *)(lVar2 + 0x3d4)) {
                fVar9 = *(float *)(lVar2 + 0x3d4);
            }
            if (fVar17 <= fVar18) {
                fVar17 = fVar18;
            }
            *(float *)(lVar2 + 0x3d4) = fVar9;
            *(float *)(lVar2 + 0x3d0) = fVar17;
            if (*(float *)(lVar2 + 0x3d8) <= fVar10) {
                fVar10 = *(float *)(lVar2 + 0x3d8);
            }
            if (*(float *)(lVar2 + 0x3dc) <= fVar16) {
                fVar16 = *(float *)(lVar2 + 0x3dc);
            }
            *(float *)(lVar2 + 0x3d8) = fVar10;
            *(float *)(lVar2 + 0x3dc) = fVar16;
            *(int *)(unaff_RBX + 0x1ca0) = iVar7;
        }
        *(char *)(unaff_RBX + 0x1d20) = cVar6;
    }
    
    // 更新变换矩阵
    lVar2 = *(longlong *)(unaff_RBX + 0x1c98);
    if (((lVar2 == 0) ||
        (lVar5 = (longlong)*(int *)(unaff_RBX + 0x1cfc) + 0x3d,
        *(float *)(lVar2 + 8 + lVar5 * 0x10) < *(float *)(lVar2 + lVar5 * 0x10))) ||
       (*(float *)(lVar2 + 0xc + lVar5 * 0x10) < *(float *)(lVar2 + 4 + lVar5 * 0x10))) {
        uVar12 = 0;
        uVar13 = 0;
    }
    else {
        puVar1 = (uint64_t *)(lVar2 + lVar5 * 0x10);
        uVar12 = *puVar1;
        uVar13 = puVar1[1];
    }
    if (lVar2 == 0) {
        _fStack0000000000000030 = 0;
        _fStack0000000000000038 = 0;
    }
    else {
        fStack0000000000000038 = (float)uVar13;
        fStack0000000000000030 = (float)uVar12;
        fStack000000000000003c = (float)((ulonglong)uVar13 >> 0x20);
        fStack0000000000000034 = (float)((ulonglong)uVar12 >> 0x20);
        _fStack0000000000000038 =
             CONCAT44(*(float *)(lVar2 + 0x44) + fStack000000000000003c,
                      *(float *)(lVar2 + 0x40) + fStack0000000000000038);
        _fStack0000000000000030 =
             CONCAT44(*(float *)(lVar2 + 0x44) + fStack0000000000000034,
                      *(float *)(lVar2 + 0x40) + fStack0000000000000030);
    }
    *(uint64_t *)(unaff_RBX + 0x1cc4) = _fStack0000000000000030;
    *(uint64_t *)(unaff_RBX + 0x1ccc) = _fStack0000000000000038;
    *(float *)(unaff_RBX + 0x1cd0) = fVar8 + *(float *)(unaff_RBX + 0x1cd0);
    *(float *)(unaff_RBX + 0x1cc8) = fVar8 + *(float *)(unaff_RBX + 0x1cc8);
    fVar8 = *(float *)(unaff_RBX + 0x1cc4) + 1.0;
    *(int *)(unaff_RBX + 0x1cd4) = iVar7;
    if (*(float *)(unaff_RBX + 0x1ccc) <= fVar8) {
        fVar8 = *(float *)(unaff_RBX + 0x1ccc);
    }
    *(float *)(unaff_RBX + 0x1cc4) = fVar8;
    *(float *)(unaff_RBX + 0x1ccc) = fVar8;
    return;
}

// 函数: void FUN_180132ea3(void)
// 功能: 更新游戏对象的边界框和变换矩阵
void update_object_bounds_and_matrix(void)
{
    float *pfVar1;
    longlong lVar2;
    longlong lVar3;
    longlong unaff_RBX;
    longlong unaff_RDI;
    int unaff_R14D;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float unaff_XMM7_Da;
    float unaff_XMM8_Da;
    uint unaff_XMM9_Da;
    uint64_t uStack0000000000000030;
    uint64_t uStack0000000000000038;
    
    // 检查并更新边界框
    if ((*(char *)(unaff_RBX + 0x1d20) != (char)unaff_R14D) &&
       (*(int *)(unaff_RBX + 0x1cfc) == unaff_R14D)) {
        lVar2 = *(longlong *)(unaff_RBX + 0x1c98);
        fVar5 = *(float *)(lVar2 + 0x3d0);
        fVar11 = (*(float *)(lVar2 + 0x248) - *(float *)(lVar2 + 0x40)) - unaff_XMM7_Da;
        fVar9 = (*(float *)(lVar2 + 0x250) - *(float *)(lVar2 + 0x40)) + unaff_XMM7_Da;
        fVar10 = (*(float *)(lVar2 + 0x254) - *(float *)(lVar2 + 0x44)) + unaff_XMM7_Da;
        fVar8 = (*(float *)(lVar2 + 0x24c) - *(float *)(lVar2 + 0x44)) - unaff_XMM7_Da;
        if ((fVar5 < fVar11) ||
           (((*(float *)(lVar2 + 0x3d4) <= fVar8 && fVar8 != *(float *)(lVar2 + 0x3d4) ||
             (fVar9 < *(float *)(lVar2 + 0x3d8))) || (fVar10 < *(float *)(lVar2 + 0x3dc)))) {
            fVar4 = *(float *)(unaff_RDI + 0x19fc) * *(float *)(lVar2 + 0x2d8) * *(float *)(lVar2 + 0x2dc)
                    * 0.5;
            fVar7 = fVar10 - fVar8;
            if (fVar4 <= fVar10 - fVar8) {
                fVar7 = fVar4;
            }
            fVar6 = fVar9 - fVar11;
            if (fVar4 <= fVar9 - fVar11) {
                fVar6 = fVar4;
            }
            fVar8 = fVar8 - (float)((uint)fVar7 ^ unaff_XMM9_Da);
            fVar11 = fVar11 - (float)((uint)fVar6 ^ unaff_XMM9_Da);
            fVar9 = fVar9 + (float)((uint)fVar6 ^ unaff_XMM9_Da);
            fVar10 = fVar10 + (float)((uint)fVar7 ^ unaff_XMM9_Da);
            if (fVar8 <= *(float *)(lVar2 + 0x3d4)) {
                fVar8 = *(float *)(lVar2 + 0x3d4);
            }
            if (fVar11 <= fVar5) {
                fVar11 = fVar5;
            }
            *(float *)(lVar2 + 0x3d4) = fVar8;
            *(float *)(lVar2 + 0x3d0) = fVar11;
            if (*(float *)(lVar2 + 0x3d8) <= fVar9) {
                fVar9 = *(float *)(lVar2 + 0x3d8);
            }
            if (*(float *)(lVar2 + 0x3dc) <= fVar10) {
                fVar10 = *(float *)(lVar2 + 0x3dc);
            }
            *(float *)(lVar2 + 0x3d8) = fVar9;
            *(float *)(lVar2 + 0x3dc) = fVar10;
            *(int *)(unaff_RBX + 0x1ca0) = unaff_R14D;
        }
        *(char *)(unaff_RBX + 0x1d20) = (char)unaff_R14D;
    }
    
    // 更新变换矩阵
    lVar2 = *(longlong *)(unaff_RBX + 0x1c98);
    if (((lVar2 == 0) ||
        (lVar3 = (longlong)*(int *)(unaff_RBX + 0x1cfc) + 0x3d,
        *(float *)(lVar2 + 8 + lVar3 * 0x10) < *(float *)(lVar2 + lVar3 * 0x10))) ||
       (*(float *)(lVar2 + 0xc + lVar3 * 0x10) < *(float *)(lVar2 + 4 + lVar3 * 0x10))) {
        fVar5 = 0.0;
        fVar8 = 0.0;
        fVar9 = 0.0;
        fVar10 = 0.0;
    }
    else {
        pfVar1 = (float *)(lVar2 + lVar3 * 0x10);
        fVar5 = *pfVar1;
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
    }
    if (lVar2 == 0) {
        uStack0000000000000030 = 0;
        uStack0000000000000038 = 0;
    }
    else {
        uStack0000000000000038 =
             CONCAT44(*(float *)(lVar2 + 0x44) + fVar10,*(float *)(lVar2 + 0x40) + fVar9);
        uStack0000000000000030 =
             CONCAT44(*(float *)(lVar2 + 0x44) + fVar8,*(float *)(lVar2 + 0x40) + fVar5);
    }
    *(uint64_t *)(unaff_RBX + 0x1cc4) = uStack0000000000000030;
    *(uint64_t *)(unaff_RBX + 0x1ccc) = uStack0000000000000038;
    *(float *)(unaff_RBX + 0x1cd0) = unaff_XMM8_Da + *(float *)(unaff_RBX + 0x1cd0);
    *(float *)(unaff_RBX + 0x1cc8) = unaff_XMM8_Da + *(float *)(unaff_RBX + 0x1cc8);
    fVar5 = *(float *)(unaff_RBX + 0x1cc4) + unaff_XMM7_Da;
    *(int *)(unaff_RBX + 0x1cd4) = unaff_R14D;
    if (*(float *)(unaff_RBX + 0x1ccc) <= fVar5) {
        fVar5 = *(float *)(unaff_RBX + 0x1ccc);
    }
    *(float *)(unaff_RBX + 0x1cc4) = fVar5;
    *(float *)(unaff_RBX + 0x1ccc) = fVar5;
    return;
}

// 函数: void FUN_180132ec4(void)
// 功能: 处理特定对象的边界框更新和矩阵变换
void process_specific_object_bounds(void)
{
    float *pfVar1;
    longlong lVar2;
    longlong in_RAX;
    longlong lVar3;
    longlong unaff_RBX;
    longlong unaff_RDI;
    int32_t unaff_R14D;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float unaff_XMM7_Da;
    float unaff_XMM8_Da;
    uint unaff_XMM9_Da;
    uint64_t uStack0000000000000030;
    uint64_t uStack0000000000000038;
    
    // 获取并处理边界框数据
    fVar5 = *(float *)(in_RAX + 0x3d0);
    fVar11 = (*(float *)(in_RAX + 0x248) - *(float *)(in_RAX + 0x40)) - unaff_XMM7_Da;
    fVar9 = (*(float *)(in_RAX + 0x250) - *(float *)(in_RAX + 0x40)) + unaff_XMM7_Da;
    fVar10 = (*(float *)(in_RAX + 0x254) - *(float *)(in_RAX + 0x44)) + unaff_XMM7_Da;
    fVar8 = (*(float *)(in_RAX + 0x24c) - *(float *)(in_RAX + 0x44)) - unaff_XMM7_Da;
    if ((((fVar5 < fVar11) ||
         (*(float *)(in_RAX + 0x3d4) <= fVar8 && fVar8 != *(float *)(in_RAX + 0x3d4))) ||
        (fVar9 < *(float *)(in_RAX + 0x3d8))) || (fVar10 < *(float *)(in_RAX + 0x3dc))) {
        fVar4 = *(float *)(unaff_RDI + 0x19fc) * *(float *)(in_RAX + 0x2d8) * *(float *)(in_RAX + 0x2dc)
                * 0.5;
        fVar7 = fVar10 - fVar8;
        if (fVar4 <= fVar10 - fVar8) {
            fVar7 = fVar4;
        }
        fVar6 = fVar9 - fVar11;
        if (fVar4 <= fVar9 - fVar11) {
            fVar6 = fVar4;
        }
        fVar8 = fVar8 - (float)((uint)fVar7 ^ unaff_XMM9_Da);
        fVar11 = fVar11 - (float)((uint)fVar6 ^ unaff_XMM9_Da);
        fVar9 = fVar9 + (float)((uint)fVar6 ^ unaff_XMM9_Da);
        fVar10 = fVar10 + (float)((uint)fVar7 ^ unaff_XMM9_Da);
        if (fVar8 <= *(float *)(in_RAX + 0x3d4)) {
            fVar8 = *(float *)(in_RAX + 0x3d4);
        }
        if (fVar11 <= fVar5) {
            fVar11 = fVar5;
        }
        *(float *)(in_RAX + 0x3d4) = fVar8;
        *(float *)(in_RAX + 0x3d0) = fVar11;
        if (*(float *)(in_RAX + 0x3d8) <= fVar9) {
            fVar9 = *(float *)(in_RAX + 0x3d8);
        }
        if (*(float *)(in_RAX + 0x3dc) <= fVar10) {
            fVar10 = *(float *)(in_RAX + 0x3dc);
        }
        *(float *)(in_RAX + 0x3d8) = fVar9;
        *(float *)(in_RAX + 0x3dc) = fVar10;
        *(int32_t *)(unaff_RBX + 0x1ca0) = unaff_R14D;
    }
    *(char *)(unaff_RBX + 0x1d20) = (char)unaff_R14D;
    
    // 更新变换矩阵
    lVar2 = *(longlong *)(unaff_RBX + 0x1c98);
    if (((lVar2 == 0) ||
        (lVar3 = (longlong)*(int *)(unaff_RBX + 0x1cfc) + 0x3d,
        *(float *)(lVar2 + 8 + lVar3 * 0x10) < *(float *)(lVar2 + lVar3 * 0x10))) ||
       (*(float *)(lVar2 + 0xc + lVar3 * 0x10) < *(float *)(lVar2 + 4 + lVar3 * 0x10))) {
        fVar5 = 0.0;
        fVar8 = 0.0;
        fVar9 = 0.0;
        fVar10 = 0.0;
    }
    else {
        pfVar1 = (float *)(lVar2 + lVar3 * 0x10);
        fVar5 = *pfVar1;
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
    }
    if (lVar2 == 0) {
        uStack0000000000000030 = 0;
        uStack0000000000000038 = 0;
    }
    else {
        uStack0000000000000038 =
             CONCAT44(*(float *)(lVar2 + 0x44) + fVar10,*(float *)(lVar2 + 0x40) + fVar9);
        uStack0000000000000030 =
             CONCAT44(*(float *)(lVar2 + 0x44) + fVar8,*(float *)(lVar2 + 0x40) + fVar5);
    }
    *(uint64_t *)(unaff_RBX + 0x1cc4) = uStack0000000000000030;
    *(uint64_t *)(unaff_RBX + 0x1ccc) = uStack0000000000000038;
    *(float *)(unaff_RBX + 0x1cd0) = unaff_XMM8_Da + *(float *)(unaff_RBX + 0x1cd0);
    *(float *)(unaff_RBX + 0x1cc8) = unaff_XMM8_Da + *(float *)(unaff_RBX + 0x1cc8);
    fVar5 = *(float *)(unaff_RBX + 0x1cc4) + unaff_XMM7_Da;
    *(int32_t *)(unaff_RBX + 0x1cd4) = unaff_R14D;
    if (*(float *)(unaff_RBX + 0x1ccc) <= fVar5) {
        fVar5 = *(float *)(unaff_RBX + 0x1ccc);
    }
    *(float *)(unaff_RBX + 0x1cc4) = fVar5;
    *(float *)(unaff_RBX + 0x1ccc) = fVar5;
    return;
}

// 函数: void FUN_180132fdb(void)
// 功能: 简化版的矩阵变换更新
void update_matrix_transform_simple(void)
{
    float *pfVar1;
    longlong lVar2;
    longlong lVar3;
    longlong unaff_RBX;
    int32_t unaff_R14D;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float unaff_XMM7_Da;
    float unaff_XMM8_Da;
    uint64_t uStack0000000000000030;
    uint64_t uStack0000000000000038;
    
    // 获取矩阵数据
    lVar2 = *(longlong *)(unaff_RBX + 0x1c98);
    if (((lVar2 == 0) ||
        (lVar3 = (longlong)*(int *)(unaff_RBX + 0x1cfc) + 0x3d,
        *(float *)(lVar2 + 8 + lVar3 * 0x10) < *(float *)(lVar2 + lVar3 * 0x10))) ||
       (*(float *)(lVar2 + 0xc + lVar3 * 0x10) < *(float *)(lVar2 + 4 + lVar3 * 0x10))) {
        fVar4 = 0.0;
        fVar5 = 0.0;
        fVar6 = 0.0;
        fVar7 = 0.0;
    }
    else {
        pfVar1 = (float *)(lVar2 + lVar3 * 0x10);
        fVar4 = *pfVar1;
        fVar5 = pfVar1[1];
        fVar6 = pfVar1[2];
        fVar7 = pfVar1[3];
    }
    if (lVar2 == 0) {
        uStack0000000000000030 = 0;
        uStack0000000000000038 = 0;
    }
    else {
        uStack0000000000000038 =
             CONCAT44(*(float *)(lVar2 + 0x44) + fVar7,*(float *)(lVar2 + 0x40) + fVar6);
        uStack0000000000000030 =
             CONCAT44(*(float *)(lVar2 + 0x44) + fVar5,*(float *)(lVar2 + 0x40) + fVar4);
    }
    *(uint64_t *)(unaff_RBX + 0x1cc4) = uStack0000000000000030;
    *(uint64_t *)(unaff_RBX + 0x1ccc) = uStack0000000000000038;
    *(float *)(unaff_RBX + 0x1cd0) = unaff_XMM8_Da + *(float *)(unaff_RBX + 0x1cd0);
    *(float *)(unaff_RBX + 0x1cc8) = unaff_XMM8_Da + *(float *)(unaff_RBX + 0x1cc8);
    fVar4 = *(float *)(unaff_RBX + 0x1cc4) + unaff_XMM7_Da;
    *(int32_t *)(unaff_RBX + 0x1cd4) = unaff_R14D;
    if (*(float *)(unaff_RBX + 0x1ccc) <= fVar4) {
        fVar4 = *(float *)(unaff_RBX + 0x1ccc);
    }
    *(float *)(unaff_RBX + 0x1cc4) = fVar4;
    *(float *)(unaff_RBX + 0x1ccc) = fVar4;
    return;
}

// 函数: void FUN_180132ffd(longlong param_1)
// 功能: 处理指定参数的矩阵变换
void process_parameter_matrix_transform(longlong param_1)
{
    float *pfVar1;
    longlong lVar2;
    longlong unaff_RBX;
    int32_t unaff_R14D;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float unaff_XMM7_Da;
    float unaff_XMM8_Da;
    uint64_t uStack0000000000000030;
    uint64_t uStack0000000000000038;
    
    // 根据参数获取矩阵数据
    lVar2 = (longlong)*(int *)(unaff_RBX + 0x1cfc) + 0x3d;
    if ((*(float *)(param_1 + 8 + lVar2 * 0x10) < *(float *)(param_1 + lVar2 * 0x10)) ||
       (*(float *)(param_1 + 0xc + lVar2 * 0x10) < *(float *)(param_1 + 4 + lVar2 * 0x10))) {
        fVar3 = 0.0;
        fVar4 = 0.0;
        fVar5 = 0.0;
        fVar6 = 0.0;
    }
    else {
        pfVar1 = (float *)(param_1 + lVar2 * 0x10);
        fVar3 = *pfVar1;
        fVar4 = pfVar1[1];
        fVar5 = pfVar1[2];
        fVar6 = pfVar1[3];
    }
    if (param_1 == 0) {
        uStack0000000000000030 = 0;
        uStack0000000000000038 = 0;
    }
    else {
        uStack0000000000000038 =
             CONCAT44(*(float *)(param_1 + 0x44) + fVar6,*(float *)(param_1 + 0x40) + fVar5);
        uStack0000000000000030 =
             CONCAT44(*(float *)(param_1 + 0x44) + fVar4,*(float *)(param_1 + 0x40) + fVar3);
    }
    *(uint64_t *)(unaff_RBX + 0x1cc4) = uStack0000000000000030;
    *(uint64_t *)(unaff_RBX + 0x1ccc) = uStack0000000000000038;
    *(float *)(unaff_RBX + 0x1cd0) = unaff_XMM8_Da + *(float *)(unaff_RBX + 0x1cd0);
    *(float *)(unaff_RBX + 0x1cc8) = unaff_XMM8_Da + *(float *)(unaff_RBX + 0x1cc8);
    fVar3 = *(float *)(unaff_RBX + 0x1cc4) + unaff_XMM7_Da;
    *(int32_t *)(unaff_RBX + 0x1cd4) = unaff_R14D;
    if (*(float *)(unaff_RBX + 0x1ccc) <= fVar3) {
        fVar3 = *(float *)(unaff_RBX + 0x1ccc);
    }
    *(float *)(unaff_RBX + 0x1cc4) = fVar3;
    *(float *)(unaff_RBX + 0x1ccc) = fVar3;
    return;
}

// 函数: void FUN_180133110(void)
// 功能: 处理游戏对象的复杂变换和状态更新
void process_complex_object_transform(void)
{
    int *piVar1;
    uint64_t *puVar2;
    int iVar3;
    int iVar4;
    uint64_t uVar5;
    longlong lVar6;
    int *piVar7;
    longlong lVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fStackX_8;
    float fStackX_c;
    float fStack_58;
    float fStack_54;
    float fStack_50;
    float fStack_4c;
    
    // 获取对象指针
    piVar1 = (int *)(global_object_data + 0x1d98);
    if ((*(int *)(global_object_data + 0x1d38) == 0) && (*piVar1 == 0)) {
        if (*(int *)(global_object_data + 0x1ca0) != 0) {
            *(int16_t *)(global_object_data + 0x1d06) = 0x100;
            return;
        }
    }
    else {
        lVar6 = 0x1d38;
        if (*(int *)(global_object_data + 0x1d38) == 0) {
            lVar6 = 0x1d98;
        }
        piVar7 = (int *)(lVar6 + global_object_data);
        if ((*(byte *)(global_object_data + 0x1d24) & 0x20) != 0) {
            iVar3 = *(int *)(global_object_data + 0x1d68);
            if ((iVar3 != 0) && (iVar3 != *(int *)(global_object_data + 0x1ca0))) {
                piVar7 = (int *)(global_object_data + 0x1d68);
            }
        }
        if (((piVar7 != piVar1) && (*piVar1 != 0)) &&
           (*(longlong *)(*(longlong *)(global_object_data + 0x1da0) + 0x398) ==
            *(longlong *)(global_object_data + 0x1c98))) {
            if ((*(float *)(global_object_data + 0x1da8) < (float)piVar7[4]) ||
               ((*(float *)(global_object_data + 0x1da8) == (float)piVar7[4] &&
                (*(float *)(global_object_data + 0x1dac) <= (float)piVar7[5] &&
                 (float)piVar7[5] != *(float *)(global_object_data + 0x1dac))))) {
                piVar7 = piVar1;
            }
        }
        lVar6 = global_object_data;
        if (*(int *)(global_object_data + 0x1cfc) == 0) {
            lVar8 = *(longlong *)(piVar7 + 2);
            fVar11 = *(float *)(lVar8 + 0x40) + (float)piVar7[9];
            fVar9 = *(float *)(lVar8 + 0x40) + (float)piVar7[7];
            fVar12 = *(float *)(lVar8 + 0x44) + (float)piVar7[10];
            fVar10 = *(float *)(lVar8 + 0x44) + (float)piVar7[8];
            fStack_58 = fVar9;
            fStack_54 = fVar10;
            fStack_50 = fVar11;
            fStack_4c = fVar12;
            transform_coordinates(lVar8, &fStack_58);
            lVar8 = *(longlong *)(piVar7 + 2);
            calculate_coordinate_offset(&fStackX_8, lVar8, 0);
            fStackX_8 = *(float *)(lVar8 + 0x8c) - fStackX_8;
            fStackX_c = *(float *)(lVar8 + 0x90) - fStackX_c;
            piVar7[7] = (int)(fStackX_8 + (float)piVar7[7]);
            piVar7[8] = (int)(fStackX_c + (float)piVar7[8]);
            piVar7[9] = (int)(fStackX_8 + (float)piVar7[9]);
            piVar7[10] = (int)(fStackX_c + (float)piVar7[10]);
            if ((*(uint *)(*(longlong *)(piVar7 + 2) + 0xc) & 0x1000000) != 0) {
                fStack_50 = fStackX_8 + fVar11;
                fStack_4c = fStackX_c + fVar12;
                fStack_58 = fStackX_8 + fVar9;
                fStack_54 = fStackX_c + fVar10;
                transform_coordinates(*(uint64_t *)(*(longlong *)(piVar7 + 2) + 0x398), &fStack_58);
            }
        }
        *(bool *)(lVar6 + 0x1b3c) = *(int *)(lVar6 + 0x1b2c) != 0;
        if (*(int *)(lVar6 + 0x1b2c) != 0) {
            *(int32_t *)(lVar6 + 0x1b38) = 0;
            *(int8_t *)(lVar6 + 0x1b3e) = 0;
        }
        *(int32_t *)(lVar6 + 0x1b2c) = 0;
        *(int32_t *)(lVar6 + 0x1b44) = 0;
        *(int8_t *)(lVar6 + 0x1b3d) = 0;
        *(uint64_t *)(lVar6 + 0x1b50) = 0;
        lVar8 = *(longlong *)(piVar7 + 2);
        iVar3 = *(int *)(lVar6 + 0x1cfc);
        *(longlong *)(lVar6 + 0x1c98) = lVar8;
        iVar4 = *piVar7;
        *(int *)(lVar6 + 0x1ca0) = iVar4;
        *(int *)(lVar8 + 0x3c8 + (longlong)iVar3 * 4) = iVar4;
        uVar5 = *(uint64_t *)(piVar7 + 9);
        puVar2 = (uint64_t *)(*(longlong *)(lVar6 + 0x1c98) + ((longlong)iVar3 + 0x3d) * 0x10);
        *puVar2 = *(uint64_t *)(piVar7 + 7);
        puVar2[1] = uVar5;
        *(int16_t *)(lVar6 + 0x1d05) = 1;
        *(int8_t *)(lVar6 + 0x1d07) = 1;
        *(int *)(lVar6 + 0x1cb8) = *piVar7;
        *(int8_t *)(lVar6 + 0x1d20) = 0;
    }
    return;
}

// 函数: void FUN_1801331eb(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
// 功能: 处理复杂参数的对象变换
void process_complex_parameter_transform(longlong param_1, uint64_t param_2, uint64_t param_3, longlong param_4)
{
    uint64_t *puVar1;
    float fVar2;
    float fVar3;
    int iVar4;
    int32_t uVar5;
    uint64_t uVar6;
    longlong lVar7;
    int32_t *in_R10;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fStack0000000000000028;
    float fStack000000000000002c;
    float fStack0000000000000080;
    float fStack0000000000000084;
    
    // 获取基础变换数据
    fVar2 = *(float *)(param_1 + 0x44);
    fVar10 = *(float *)(param_1 + 0x40) + (float)in_R10[9];
    fVar9 = *(float *)(param_1 + 0x40) + (float)in_R10[7];
    fVar11 = fVar2 + (float)in_R10[10];
    fVar3 = (float)in_R10[8];
    fStack0000000000000028 = fVar10;
    fStack000000000000002c = fVar11;
    transform_coordinates(param_1, param_2, param_3, param_4, fVar9);
    lVar7 = *(longlong *)(in_R10 + 2);
    calculate_coordinate_offset(&stack0x00000080, lVar7, 0);
    fVar8 = *(float *)(lVar7 + 0x8c) - fStack0000000000000080;
    fStack0000000000000084 = *(float *)(lVar7 + 0x90) - fStack0000000000000084;
    in_R10[7] = fVar8 + (float)in_R10[7];
    in_R10[8] = fStack0000000000000084 + (float)in_R10[8];
    in_R10[9] = fVar8 + (float)in_R10[9];
    in_R10[10] = fStack0000000000000084 + (float)in_R10[10];
    if ((*(uint *)(*(longlong *)(in_R10 + 2) + 0xc) & 0x1000000) != 0) {
        fStack0000000000000028 = fVar8 + fVar10;
        fStack000000000000002c = fStack0000000000000084 + fVar11;
        fVar8 = fVar8 + fVar9;
        transform_coordinates(*(uint64_t *)(*(longlong *)(in_R10 + 2) + 0x398), &stack0x00000020, fVar8,
                            fStack0000000000000084 + fVar2 + fVar3, fVar8);
    }
    *(bool *)(param_4 + 0x1b3c) = *(int *)(param_4 + 0x1b2c) != 0;
    if (*(int *)(param_4 + 0x1b2c) != 0) {
        *(int32_t *)(param_4 + 0x1b38) = 0;
        *(int8_t *)(param_4 + 0x1b3e) = 0;
    }
    *(int32_t *)(param_4 + 0x1b2c) = 0;
    *(int32_t *)(param_4 + 0x1b44) = 0;
    *(int8_t *)(param_4 + 0x1b3d) = 0;
    *(uint64_t *)(param_4 + 0x1b50) = 0;
    lVar7 = *(longlong *)(in_R10 + 2);
    iVar4 = *(int *)(param_4 + 0x1cfc);
    *(longlong *)(param_4 + 0x1c98) = lVar7;
    uVar5 = *in_R10;
    *(int32_t *)(param_4 + 0x1ca0) = uVar5;
    *(int32_t *)(lVar7 + 0x3c8 + (longlong)iVar4 * 4) = uVar5;
    uVar6 = *(uint64_t *)(in_R10 + 9);
    puVar1 = (uint64_t *)(*(longlong *)(param_4 + 0x1c98) + ((longlong)iVar4 + 0x3d) * 0x10);
    *puVar1 = *(uint64_t *)(in_R10 + 7);
    puVar1[1] = uVar6;
    *(int16_t *)(param_4 + 0x1d05) = 1;
    *(int8_t *)(param_4 + 0x1d07) = 1;
    *(int32_t *)(param_4 + 0x1cb8) = *in_R10;
    *(int8_t *)(param_4 + 0x1d20) = 0;
    return;
}