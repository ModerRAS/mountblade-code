#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part018.c - 核心引擎模块第18部分
// 本文件包含内存管理、字符串处理和数据结构操作相关功能

/**
 * @brief 核心引擎模块第18部分的实现
 * 
 * 本模块提供核心引擎功能中的内存管理、字符串处理和数据结构操作。
 * 主要功能包括函数指针调用、内存分配、字符串操作和数据结构管理。
 * 这些功能为游戏引擎的高效运行提供了基础支持。
 * 
 * @note 本模块包含10个函数，涵盖内存管理、字符串处理等核心功能
 */

/*
 * 文件信息:
 * - 模块: 核心引擎 (02)
 * - 部分: 第18部分
 * - 功能: 内存管理、字符串处理、数据结构操作
 * - 状态: 已完成美化
 * - 函数数量: 10个
 */

/**
 * @brief 执行函数指针调用
 * 
 * 通过函数指针执行指定的函数，这是一个简单的函数调用包装器。
 * 
 * @param param_1 未使用的参数（保留参数）
 * @param param_2 指向函数指针的指针
 * @note 这是一个简单的函数调用包装器，用于间接函数调用
 */
void execute_function_pointer(uint64_t param_1, uint64_t *param_2)
{
    (*(code *)*param_2)();
    return;
}

/**
 * @brief 初始化和管理内存池
 * 
 * 复杂的内存管理函数，负责初始化内存池、分配内存块和管理内存资源。
 * 该函数处理字符串操作、内存分配和数据结构初始化。
 * 
 * @param param_1 指向内存管理结构的指针
 * @note 这是核心内存管理功能，涉及复杂的内存操作和资源管理
 */
void initialize_memory_pool(longlong *param_1)
{
    uint64_t *******pppppppuVar1;
    uint64_t *puVar2;
    uint64_t *puVar3;
    uint64_t *puVar4;
    uint64_t *puVar5;
    uint64_t *puVar6;
    int32_t uVar7;
    int iVar8;
    uint64_t uVar9;
    longlong lVar10;
    int8_t *puVar11;
    longlong lVar12;
    void *puVar13;
    uint64_t *******pppppppuVar14;
    longlong *plVar15;
    uint uVar16;
    void *puVar17;
    longlong lVar18;
    uint64_t ******ppppppuVar19;
    int iVar20;
    uint *puVar21;
    ulonglong uVar22;
    ulonglong uVar23;
    ulonglong uVar24;
    ulonglong uVar25;
    bool bVar26;
    int8_t auStack_3b8 [32];
    void *puStack_398;
    int8_t *puStack_390;
    int32_t uStack_388;
    ulonglong uStack_380;
    uint uStack_378;
    int iStack_374;
    int iStack_370;
    longlong lStack_368;
    uint64_t ******ppppppuStack_360;
    uint64_t ******ppppppuStack_358;
    uint64_t ******ppppppuStack_350;
    uint64_t uStack_348;
    uint64_t uStack_340;
    int32_t uStack_338;
    void *puStack_330;
    void *puStack_328;
    int32_t uStack_320;
    ulonglong uStack_318;
    longlong lStack_310;
    uint64_t *puStack_308;
    uint64_t *puStack_300;
    uint64_t uStack_2f8;
    int32_t uStack_2f0;
    void *puStack_2e8;
    longlong lStack_2e0;
    int32_t uStack_2d0;
    longlong lStack_2c8;
    ulonglong uStack_2c0;
    longlong lStack_2b8;
    uint64_t *puStack_2b0;
    uint64_t *puStack_2a8;
    uint64_t *puStack_2a0;
    uint64_t uStack_298;
    void *puStack_290;
    int8_t *puStack_288;
    int32_t uStack_280;
    int8_t auStack_278 [16];
    uint64_t uStack_268;
    uint64_t uStack_48;
    int32_t uStack_40;
    int32_t uStack_3c;
    ulonglong uStack_38;
    uint64_t uStack_30;
    
    uStack_30 = 0x180059023;
    uVar9 = allocate_memory_block(system_memory_pool_ptr, 0x270, 8, 3);
    uStack_30 = 0x18005902b;
    lVar10 = get_memory_address(uVar9);
    uVar7 = *(int32_t *)(SYSTEM_STATE_MANAGER + 0x1dc0);
    core_system_data_memory = lVar10;
    *(int32_t *)(lVar10 + 0x1e0) = *(int32_t *)(SYSTEM_STATE_MANAGER + 0x1d50);
    *(int32_t *)(lVar10 + 0x1e4) = uVar7;
    uStack_30 = 0x180059066;
    (**(code **)(**(longlong **)(*param_1 + 0x2b0) + 0xf8))();
    uStack_298 = 0xfffffffffffffffe;
    uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_3b8;
    uStack_378 = 0;
    lStack_310 = core_system_data_memory;
    *(uint64_t *)(core_system_data_memory + 0xf0) = 0;
    uStack_338 = 3;
    ppppppuStack_360 = &ppppppuStack_360;
    ppppppuStack_358 = &ppppppuStack_360;
    ppppppuStack_350 = (uint64_t *******)0x0;
    uStack_348 = 0;
    uStack_340 = 0;
    lStack_2b8 = *system_main_module_state;
    iStack_370 = 0;
    lVar10 = *(longlong *)(lStack_2b8 + 0x8a8);
    if (*(longlong *)(lStack_2b8 + 0x8b0) - lVar10 >> 5 != 0) {
        lStack_368 = 0;
        do {
            lVar12 = lStack_368;
            iVar8 = iStack_370;
            puVar17 = *(void **)(lStack_368 * 0x20 + 8 + lVar10);
            puVar13 = &system_buffer_ptr;
            if (puVar17 != (void *)0x0) {
                puVar13 = puVar17;
            }
            puStack_398 = &unknown_var_3456_ptr;
            uStack_380 = 0;
            puStack_390 = (int8_t *)0x0;
            uStack_388 = 0;
            if (puVar13 != (void *)0x0) {
                lVar10 = -1;
                do {
                    lVar18 = lVar10;
                    lVar10 = lVar18 + 1;
                } while (puVar13[lVar10] != '\0');
                if ((int)lVar10 != 0) {
                    iVar20 = (int)lVar18 + 2;
                    iVar8 = iVar20;
                    if (iVar20 < 0x10) {
                        iVar8 = 0x10;
                    }
                    puVar11 = (int8_t *)allocate_string_buffer(system_memory_pool_ptr, (longlong)iVar8, 0x13);
                    *puVar11 = 0;
                    puStack_390 = puVar11;
                    uVar7 = get_string_length(puVar11);
                    uStack_380 = CONCAT44(uStack_380._4_4_, uVar7);
                    // WARNING: Subroutine does not return
                    memcpy(puVar11, puVar13, iVar20);
                }
            }
            uStack_388 = 0;
            process_string_data(&unknown_var_3456_ptr, &puStack_2e8, &puStack_398);
            puStack_390 = (int8_t *)0x0;
            uStack_380 = uStack_380 & 0xffffffff00000000;
            puStack_398 = &unknown_var_720_ptr;
            puStack_308 = (uint64_t *)0x0;
            puStack_300 = (uint64_t *)0x0;
            uStack_2f8 = 0;
            uStack_2f0 = 3;
            puStack_290 = &unknown_var_7512_ptr;
            puStack_288 = auStack_278;
            auStack_278[0] = 0;
            uStack_280 = 4;
            strcpy_s(auStack_278, 0x10, &unknown_var_4276_ptr);
            process_data_structure(&puStack_2e8, &puStack_308, &puStack_290);
            puStack_290 = &unknown_var_720_ptr;
            iStack_374 = 0;
            lStack_2c8 = 0;
            uStack_2c0 = (longlong)puStack_300 - (longlong)puStack_308 >> 5;
            puVar2 = puStack_308;
            puVar3 = puStack_308;
            puVar4 = puStack_300;
            if (uStack_2c0 != 0) {
                do {
                    lVar10 = lStack_2c8;
                    puVar2 = puStack_308;
                    iVar8 = iStack_374;
                    puVar17 = &system_buffer_ptr;
                    if ((void *)puStack_308[lStack_2c8 * 4 + 1] != (void *)0x0) {
                        puVar17 = (void *)puStack_308[lStack_2c8 * 4 + 1];
                    }
                    lVar12 = strrchr(puVar17, 0x2f);
                    if (lVar12 == 0) {
                        puVar17 = &system_buffer_ptr;
                        if ((void *)puVar2[lVar10 * 4 + 1] != (void *)0x0) {
                            puVar17 = (void *)puVar2[lVar10 * 4 + 1];
                        }
                    }
                    else {
                        puVar17 = (void *)(lVar12 + 1);
                    }
                    puVar13 = (void *)strchr(puVar17, 0x2e);
                    if (puVar13 == (void *)0x0) {
                        puVar13 = &system_buffer_ptr;
                        if ((void *)puVar2[lVar10 * 4 + 1] != (void *)0x0) {
                            puVar13 = (void *)puVar2[lVar10 * 4 + 1];
                        }
                        puVar13 = puVar13 + *(int *)(puVar2 + lVar10 * 4 + 2);
                    }
                    if ((longlong)puVar13 - (longlong)puVar17 != 0) {
                        // WARNING: Subroutine does not return
                        memcpy(&uStack_268, puVar17, (longlong)puVar13 - (longlong)puVar17);
                    }
                    // WARNING: Ignoring partial resolution of indirect
                    uStack_268._0_1_ = 0;
                    uVar16 = 0;
                    uVar7 = 0;
                    puStack_330 = &unknown_var_3456_ptr;
                    uStack_318 = 0;
                    puStack_328 = (void *)0x0;
                    uStack_320 = 0;
                    lVar12 = -1;
                    do {
                        lVar18 = lVar12;
                        lVar12 = lVar18 + 1;
                    } while (*(char *)((longlong)&uStack_268 + lVar18 + 1) != '\0');
                    if ((int)(lVar18 + 1) != 0) {
                        iVar20 = (int)lVar18 + 2;
                        iVar8 = iVar20;
                        if (iVar20 < 0x10) {
                            iVar8 = 0x10;
                        }
                        puStack_328 = (void *)allocate_string_buffer(system_memory_pool_ptr, (longlong)iVar8, 0x13);
                        *puStack_328 = 0;
                        uVar22 = (ulonglong)puStack_328 & 0xffffffffffc00000;
                        if (uVar22 != 0) {
                            lVar10 = ((longlong)puStack_328 - uVar22 >> 0x10) * 0x50 + 0x80 + uVar22;
                            puVar21 = (uint *)(lVar10 - (ulonglong)*(uint *)(lVar10 + 4));
                            if ((*(byte *)((longlong)puVar21 + 0xe) & 2) == 0) {
                                uVar16 = puVar21[7];
                                if (0x3ffffff < uVar16) {
                                    uVar16 = *puVar21 << 0x10;
                                }
                            }
                            else {
                                uVar16 = puVar21[7];
                                if (uVar16 < 0x4000000) {
                                    uVar23 = (ulonglong)uVar16;
                                }
                                else {
                                    uVar23 = (ulonglong)*puVar21 << 0x10;
                                }
                                if (0x3ffffff < uVar16) {
                                    uVar16 = *puVar21 << 0x10;
                                }
                                uVar16 = uVar16 - (int)(((longlong)puStack_328 -
                                        (((longlong)((longlong)puVar21 + (-0x80 - uVar22)) / 0x50) *
                                         0x10000 + uVar22)) % uVar23);
                            }
                        }
                        uStack_318 = CONCAT44(uStack_318._4_4_, uVar16);
                        // WARNING: Subroutine does not return
                        memcpy(puStack_328, &uStack_268, iVar20);
                    }
                    uStack_320 = 0;
                    pppppppuVar14 = &ppppppuStack_360;
                    for (pppppppuVar1 = (uint64_t *******)ppppppuStack_350;
                         pppppppuVar1 != (uint64_t *******)0x0;
                         pppppppuVar1 = (uint64_t *******)pppppppuVar1[1]) {
                        pppppppuVar14 = ppppppuVar1;
                    }
                    if ((pppppppuVar14 == &ppppppuStack_360) ||
                       (lVar12 = lVar10, *(int *)(pppppppuVar14 + 6) != 0)) {
                        if ((pppppppuVar14 != (uint64_t *******)ppppppuStack_360) &&
                           (pppppppuVar14 != &ppppppuStack_360)) {
                            cleanup_data_structure(pppppppuVar14);
                        }
                        bVar26 = true;
                        pppppppuVar14 = &ppppppuStack_360;
                        pppppppuVar1 = (uint64_t *******)ppppppuStack_350;
                        while (pppppppuVar1 != (uint64_t *******)0x0) {
                            bVar26 = *(int *)(pppppppuVar1 + 6) != 0;
                            pppppppuVar14 = ppppppuVar1;
                            if (bVar26) {
                                ppppppuVar1 = (uint64_t *******)pppppppuVar1[1];
                            }
                            else {
                                ppppppuVar1 = (uint64_t *******)*pppppppuVar1;
                            }
                        }
                        lVar12 = lStack_2c8;
                        iVar8 = iStack_374;
                        if (bVar26) {
                            if (pppppppuVar14 == (uint64_t *******)ppppppuStack_358) {
                                if ((pppppppuVar14 != &ppppppuStack_360) && (*(int *)(pppppppuVar14 + 6) == 0)) {
                                    uVar7 = 1;
                                }
                                lVar10 = allocate_string_buffer(system_memory_pool_ptr, 0x60, (int8_t)uStack_338);
                                puStack_2b0 = (uint64_t *)(lVar10 + 0x20);
                                *puStack_2b0 = &unknown_var_720_ptr;
                                *(uint64_t *)(lVar10 + 0x28) = 0;
                                *(int32_t *)(lVar10 + 0x30) = 0;
                                *puStack_2b0 = &unknown_var_3456_ptr;
                                *(uint64_t *)(lVar10 + 0x38) = 0;
                                *(uint64_t *)(lVar10 + 0x28) = 0;
                                *(int32_t *)(lVar10 + 0x30) = 0;
                                puStack_2a8 = puStack_2b0;
                                initialize_data_structure(puStack_2b0, 0);
                                puStack_2a0 = (uint64_t *)(lVar10 + 0x40);
                                *puStack_2a0 = &unknown_var_720_ptr;
                                *(uint64_t *)(lVar10 + 0x48) = 0;
                                *(int32_t *)(lVar10 + 0x50) = 0;
                                *puStack_2a0 = &unknown_var_3456_ptr;
                                *(uint64_t *)(lVar10 + 0x58) = 0;
                                *(uint64_t *)(lVar10 + 0x48) = 0;
                                *(int32_t *)(lVar10 + 0x50) = 0;
                                // WARNING: Subroutine does not return
                                create_data_structure(lVar10, ppppppuVar14, &ppppppuStack_360, uVar7);
                            }
                            pppppppuVar14 = (uint64_t *******)find_data_structure(pppppppuVar14);
                            lVar12 = lStack_2c8;
                            iVar8 = iStack_374;
                        }
                    }
                    uVar16 = *(uint *)(puVar2 + lVar10 * 4 + 2);
                    uVar22 = (ulonglong)uVar16;
                    if (puVar2[lVar10 * 4 + 1] != 0) {
                        initialize_data_structure(pppppppuVar14 + 8, uVar22);
                    }
                    if (uVar16 != 0) {
                        // WARNING: Subroutine does not return
                        memcpy(pppppppuVar14[9], puVar2[lVar10 * 4 + 1], uVar22);
                    }
                    *(int32_t *)(pppppppuVar14 + 10) = 0;
                    if (pppppppuVar14[9] != (uint64_t ******)0x0) {
                        *(int8_t *)(uVar22 + (longlong)pppppppuVar14[9]) = 0;
                    }
                    *(int32_t *)((longlong)pppppppuVar14 + 0x5c) =
                         *(int32_t *)((longlong)puVar2 + lVar10 * 0x20 + 0x1c);
                    puStack_328 = (void *)0x0;
                    uStack_318 = uStack_318 & 0xffffffff00000000;
                    puStack_330 = &unknown_var_720_ptr;
                    iStack_374 = iVar8 + 1;
                    lStack_2c8 = lVar12 + 1;
                    puVar2 = puStack_308;
                    puVar3 = puStack_308;
                    puVar4 = puStack_300;
                    iVar8 = iStack_370;
                    lVar12 = lStack_368;
                } while ((ulonglong)(longlong)iStack_374 < uStack_2c0);
            }
            for (; puVar6 = puStack_300, puVar5 = puStack_308, puVar2 != puStack_300; puVar2 = puVar2 + 4)
            {
                puStack_308 = puVar3;
                puStack_300 = puVar4;
                (**(code **)*puVar2)(puVar2, 0);
                puVar3 = puStack_308;
                puVar4 = puStack_300;
                puStack_300 = puVar6;
                puStack_308 = puVar5;
            }
            if (puStack_308 != (uint64_t *)0x0) {
                puStack_308 = puVar3;
                puStack_300 = puVar4;
                // WARNING: Subroutine does not return
                release_memory(puVar5);
            }
            puStack_2e8 = &unknown_var_3456_ptr;
            if (lStack_2e0 != 0) {
                puStack_308 = puVar3;
                puStack_300 = puVar4;
                // WARNING: Subroutine does not return
                release_memory();
            }
            lStack_2e0 = 0;
            uStack_2d0 = 0;
            puStack_2e8 = &unknown_var_720_ptr;
            iStack_370 = iVar8 + 1;
            lStack_368 = lVar12 + 1;
            lVar10 = *(longlong *)(lStack_2b8 + 0x8a8);
            puStack_308 = puVar3;
            puStack_300 = puVar4;
        } while ((ulonglong)(longlong)iStack_370 <
                 (ulonglong)(*(longlong *)(lStack_2b8 + 0x8b0) - lVar10 >> 5));
    }
    uStack_48 = 0x3f8000003f800000;
    uStack_40 = 0x3f000000;
    uStack_3c = 0;
    if ((uint64_t *******)ppppppuStack_358 != &ppppppuStack_360) {
        lVar10 = lStack_310 + 0x150;
        pppppppuVar14 = (uint64_t *******)ppppppuStack_358;
        lVar12 = lStack_310;
        lStack_368 = lVar10;
        do {
            plVar15 = (longlong *)process_memory_allocation(lVar10, &puStack_2a0, ppppppuVar14 + 4);
            if (*plVar15 != lVar10) {
                bVar26 = false;
                uVar23 = 0;
                lVar18 = *(longlong *)(lVar12 + 0xc0);
                uVar22 = uVar23;
                if (*(longlong *)(lVar12 + 200) - lVar18 >> 3 != 0) {
                    do {
                        lVar10 = *(longlong *)(lVar18 + uVar23);
                        puStack_398 = &unknown_var_3456_ptr;
                        uStack_380 = 0;
                        puStack_390 = (int8_t *)0x0;
                        uStack_388 = 0;
                        if (*(int *)(lVar10 + 0xb8) != 0) {
                            iVar8 = *(int *)(lVar10 + 0xb8) + 1;
                            if (iVar8 < 0x10) {
                                iVar8 = 0x10;
                            }
                            puStack_390 = (int8_t *)allocate_string_buffer(system_memory_pool_ptr, (longlong)iVar8, 0x13);
                            *puStack_390 = 0;
                            uVar24 = (ulonglong)puStack_390 & 0xffffffffffc00000;
                            if (uVar24 == 0) {
                                uVar16 = 0;
                            }
                            else {
                                lVar12 = ((longlong)puStack_390 - uVar24 >> 0x10) * 0x50 + 0x80 + uVar24;
                                puVar21 = (uint *)(lVar12 - (ulonglong)*(uint *)(lVar12 + 4));
                                if ((*(byte *)((longlong)puVar21 + 0xe) & 2) == 0) {
                                    uVar16 = puVar21[7];
                                    if (0x3ffffff < uVar16) {
                                        uVar16 = *puVar21 << 0x10;
                                    }
                                }
                                else {
                                    uVar16 = puVar21[7];
                                    if (uVar16 < 0x4000000) {
                                        uVar25 = (ulonglong)uVar16;
                                    }
                                    else {
                                        uVar25 = (ulonglong)*puVar21 << 0x10;
                                    }
                                    if (0x3ffffff < uVar16) {
                                        uVar16 = *puVar21 << 0x10;
                                    }
                                    uVar16 = uVar16 - (int)(((longlong)puStack_390 -
                                            (((longlong)((longlong)puVar21 + (-0x80 - uVar24)) / 0x50)
                                             * 0x10000 + uVar24)) % uVar25);
                                }
                            }
                            uStack_380 = CONCAT44(uStack_380._4_4_, uVar16);
                            if (*(int *)(lVar10 + 0xb8) != 0) {
                                // WARNING: Subroutine does not return
                                memcpy(puStack_390, *(uint64_t *)(lVar10 + 0xb0), *(int *)(lVar10 + 0xb8) + 1);
                            }
                        }
                        if (*(longlong *)(lVar10 + 0xb0) != 0) {
                            uStack_388 = 0;
                            if (puStack_390 != (int8_t *)0x0) {
                                *puStack_390 = 0;
                            }
                            uStack_380 = uStack_380 & 0xffffffff;
                        }
                        uStack_378 = uStack_378 & 0xfffffffd;
                        puStack_398 = &unknown_var_3456_ptr;
                        if (puStack_390 != (int8_t *)0x0) {
                            // WARNING: Subroutine does not return
                            release_memory(puStack_390);
                        }
                        puStack_390 = (int8_t *)0x0;
                        uStack_380 = uStack_380 & 0xffffffff00000000;
                        puStack_398 = &unknown_var_720_ptr;
                        lVar12 = lStack_310;
                        lVar10 = lStack_368;
                        if (*(int *)(pppppppuVar14 + 6) == 0) {
                            bVar26 = true;
                            break;
                        }
                        uVar16 = (int)uVar22 + 1;
                        uVar22 = (ulonglong)uVar16;
                        uVar23 = uVar23 + 8;
                        lVar18 = *(longlong *)(lStack_310 + 0xc0);
                    } while ((ulonglong)(longlong)(int)uVar16 <
                             (ulonglong)(*(longlong *)(lStack_310 + 200) - lVar18 >> 3));
                }
                if (!bVar26) {
                    uVar9 = process_data_comparison(&uStack_268, ppppppuVar14 + 8);
                    update_data_structure(&puStack_330, uVar9);
                    uStack_268 = &unknown_var_720_ptr;
                    ppppppuVar19 = (uint64_t ******)&system_buffer_ptr;
                    if (pppppppuVar14[5] != (uint64_t ******)0x0) {
                        ppppppuVar19 = ppppppuVar14[5];
                    }
                    update_data_structure_pointer(&puStack_308, ppppppuVar19);
                    puVar17 = &system_buffer_ptr;
                    if (puStack_328 != (void *)0x0) {
                        puVar17 = puStack_328;
                    }
                    update_data_structure_reference(&puStack_2e8, puVar17);
                    process_engine_data(lVar12, &puStack_2e8, &puStack_308, &uStack_48);
                    puStack_2e8 = &unknown_var_3456_ptr;
                    if (lStack_2e0 != 0) {
                        // WARNING: Subroutine does not return
                        release_memory();
                    }
                    lStack_2e0 = 0;
                    uStack_2d0 = 0;
                    puStack_2e8 = &unknown_var_720_ptr;
                    puStack_308 = (uint64_t *)&unknown_var_3456_ptr;
                    if (puStack_300 != (uint64_t *)0x0) {
                        // WARNING: Subroutine does not return
                        release_memory();
                    }
                    puStack_300 = (uint64_t *)0x0;
                    uStack_2f0 = 0;
                    puStack_308 = (uint64_t *)&unknown_var_720_ptr;
                    puStack_330 = &unknown_var_3456_ptr;
                    if (puStack_328 != (void *)0x0) {
                        // WARNING: Subroutine does not return
                        release_memory();
                    }
                    puStack_328 = (void *)0x0;
                    uStack_318 = uStack_318 & 0xffffffff00000000;
                    puStack_330 = &unknown_var_720_ptr;
                }
            }
            pppppppuVar14 = (uint64_t *******)cleanup_data_structure(pppppppuVar14);
        } while (pppppppuVar14 != &ppppppuStack_360);
    }
    cleanup_memory_management(&ppppppuStack_360);
    // WARNING: Subroutine does not return
    finalize_memory_operation(uStack_38 ^ (ulonglong)auStack_3b8);
}

/**
 * @brief 查找数据结构中的元素
 * 
 * 在链表结构中查找特定的元素，支持字符串比较和元素匹配。
 * 该函数遍历链表，根据给定的条件查找匹配的元素。
 * 
 * @param param_1 指向链表头的指针
 * @param param_2 输出参数，用于返回查找结果
 * @param param_3 比较参数和数据的指针
 * @return 返回找到的元素指针，如果未找到则返回链表尾
 */
uint64_t * find_data_structure_element(uint64_t *param_1, int8_t *param_2, longlong param_3)
{
    byte bVar1;
    bool bVar2;
    uint64_t *puVar3;
    uint64_t *puVar4;
    uint uVar5;
    byte *pbVar6;
    longlong lVar7;
    
    bVar2 = true;
    puVar4 = (uint64_t *)param_1[2];
    puVar3 = param_1;
    while (puVar4 != (uint64_t *)0x0) {
        puVar3 = puVar4;
        if (*(int *)(puVar4 + 6) == 0) {
            bVar2 = false;
LAB_1800590e2:
            puVar4 = (uint64_t *)*puVar4;
        }
        else {
            if (*(int *)(param_3 + 0x10) == 0) {
                bVar2 = true;
            }
            else {
                pbVar6 = (byte *)puVar4[5];
                lVar7 = *(longlong *)(param_3 + 8) - (longlong)pbVar6;
                do {
                    bVar1 = *pbVar6;
                    uVar5 = (uint)pbVar6[lVar7];
                    if (bVar1 != uVar5) break;
                    pbVar6 = pbVar6 + 1;
                } while (uVar5 != 0);
                bVar2 = 0 < (int)(bVar1 - uVar5);
            }
            if (!bVar2) goto LAB_1800590e2;
            puVar4 = (uint64_t *)puVar4[1];
        }
    }
    puVar4 = puVar3;
    if (bVar2) {
        if (puVar3 == (uint64_t *)param_1[1]) {
            *param_2 = 1;
            return puVar3;
        }
        puVar4 = (uint64_t *)find_previous_element(puVar3);
    }
    if (*(int *)(param_3 + 0x10) != 0) {
        if (*(int *)(puVar4 + 6) != 0) {
            pbVar6 = *(byte **)(param_3 + 8);
            lVar7 = puVar4[5] - (longlong)pbVar6;
            do {
                bVar1 = *pbVar6;
                uVar5 = (uint)pbVar6[lVar7];
                if (bVar1 != uVar5) break;
                pbVar6 = pbVar6 + 1;
            } while (uVar5 != 0);
            if ((int)(bVar1 - uVar5) < 1) goto LAB_1800591a6;
        }
        *param_2 = 1;
        return puVar3;
    }
LAB_1800591a6:
    *param_2 = 0;
    return puVar4;
}

/**
 * @brief 清理数据结构内存
 * 
 * 遍历数据结构数组，对每个元素执行清理操作。
 * 该函数负责释放和管理数据结构占用的内存资源。
 * 
 * @param param_1 指向数据结构数组的指针
 * @note 这是一个重要的内存管理函数，确保资源的正确释放
 */
void cleanup_data_structure_memory(longlong *param_1)
{
    longlong lVar1;
    longlong lVar2;
    
    lVar1 = param_1[1];
    for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x548) {
        cleanup_element_memory(lVar2);
    }
    if (*param_1 == 0) {
        return;
    }
    // WARNING: Subroutine does not return
    release_memory();
}

/**
 * @brief 处理引擎初始化
 * 
 * 执行引擎的初始化过程，调用相应的初始化函数。
 * 这是一个简化的初始化包装器函数。
 * 
 * @param param_1 初始化参数
 * @param param_2 初始化参数2
 * @param param_3 初始化参数3
 * @param param_4 初始化参数4
 */
void process_engine_initialization(longlong param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    initialize_engine_components(param_1, *(uint64_t *)(param_1 + 0x10), param_3, param_4, 0xfffffffffffffffe);
    return;
}

/**
 * @brief 复制数据结构元素
 * 
 * 在数据结构之间复制元素，处理内存分配和数据复制。
 * 该函数确保数据在复制过程中的完整性和安全性。
 * 
 * @param param_1 源数据起始地址
 * @param param_2 源数据结束地址
 * @param param_3 目标数据地址
 * @return 返回下一个可用的目标地址
 */
longlong copy_data_structure_elements(longlong param_1, longlong param_2, longlong param_3)
{
    uint uVar1;
    longlong *plVar2;
    longlong lVar3;
    ulonglong uVar4;
    
    lVar3 = param_2 - param_1 >> 5;
    if (0 < lVar3) {
        plVar2 = (longlong *)(param_1 + 8);
        param_1 = param_3 - param_1;
        do {
            uVar1 = *(uint *)(plVar2 + 1);
            uVar4 = (ulonglong)uVar1;
            if (*plVar2 != 0) {
                allocate_data_memory(param_3, uVar4);
            }
            if (uVar1 != 0) {
                // WARNING: Subroutine does not return
                memcpy(*(uint64_t *)(param_1 + (longlong)plVar2), *plVar2, uVar4);
            }
            *(int32_t *)(param_1 + 8 + (longlong)plVar2) = 0;
            if (*(longlong *)(param_1 + (longlong)plVar2) != 0) {
                *(int8_t *)(uVar4 + *(longlong *)(param_1 + (longlong)plVar2)) = 0;
            }
            lVar3 = lVar3 + -1;
            *(int32_t *)(param_1 + 0x14 + (longlong)plVar2) = *(int32_t *)((longlong)plVar2 + 0x14);
            param_3 = param_3 + 0x20;
            plVar2 = plVar2 + 4;
        } while (0 < lVar3);
    }
    return param_3;
}

/**
 * @brief 移动数据结构元素
 * 
 * 在数据结构之间移动元素，处理内存重定位。
 * 该函数确保数据在移动过程中的完整性和安全性。
 * 
 * @param param_1 源数据起始地址
 * @param param_2 移动参数
 * @param param_3 目标数据地址
 * @return 返回下一个可用的目标地址
 */
longlong move_data_structure_elements(longlong param_1, uint64_t param_2, longlong param_3)
{
    uint uVar1;
    longlong *plVar2;
    longlong unaff_RBP;
    longlong unaff_RSI;
    ulonglong uVar3;
    
    plVar2 = (longlong *)(param_1 + 8);
    param_3 = param_3 - param_1;
    do {
        uVar1 = *(uint *)(plVar2 + 1);
        uVar3 = (ulonglong)uVar1;
        if (*plVar2 != 0) {
            allocate_data_memory(unaff_RSI, uVar3);
        }
        if (uVar1 != 0) {
            // WARNING: Subroutine does not return
            memcpy(*(uint64_t *)(param_3 + (longlong)plVar2), *plVar2, uVar3);
        }
        *(int32_t *)(param_3 + 8 + (longlong)plVar2) = 0;
        if (*(longlong *)(param_3 + (longlong)plVar2) != 0) {
            *(int8_t *)(uVar3 + *(longlong *)(param_3 + (longlong)plVar2)) = 0;
        }
        unaff_RBP = unaff_RBP + -1;
        *(int32_t *)(param_3 + 0x14 + (longlong)plVar2) = *(int32_t *)((longlong)plVar2 + 0x14);
        unaff_RSI = unaff_RSI + 0x20;
        plVar2 = plVar2 + 4;
    } while (0 < unaff_RBP);
    return unaff_RSI;
}

/**
 * @brief 空操作函数
 * 
 * 这是一个空操作函数，不执行任何操作。
 * 通常用作占位符或默认操作。
 */
void empty_operation(void)
{
    return;
}

/**
 * @brief 处理数据块传输
 * 
 * 在内存之间传输数据块，确保数据传输的完整性。
 * 该函数处理大块数据的复制操作。
 * 
 * @param param_1 源数据起始地址
 * @param param_2 源数据结束地址
 * @param param_3 目标数据地址
 * @return 返回下一个可用的目标地址
 */
longlong process_data_block_transfer(longlong param_1, longlong param_2, longlong param_3)
{
    if (param_1 != param_2) {
        do {
            process_data_element(param_3, param_1);
            param_1 = param_1 + 0x20;
            param_3 = param_3 + 0x20;
        } while (param_1 != param_2);
    }
    return param_3;
}

/**
 * @brief 移动内存数据
 * 
 * 在内存之间移动数据，处理重叠区域的特殊情况。
 * 该函数使用memmove确保数据移动的安全性。
 * 
 * @param param_1 源数据起始地址
 * @param param_2 源数据结束地址
 * @param param_3 目标数据地址
 */
void move_memory_data(longlong param_1, longlong param_2, uint64_t param_3)
{
    if (param_1 != param_2) {
        // WARNING: Subroutine does not return
        memmove(param_3, param_1, param_2 - param_1);
    }
    return;
}

/**
 * @brief 释放数据结构内存
 * 
 * 释放数据结构占用的内存，确保内存的正确释放。
 * 该函数处理复杂的内存释放操作。
 * 
 * @param param_1 指向要释放的数据结构的指针
 */
void release_data_structure_memory(uint64_t *param_1)
{
    if (param_1[4] != 0) {
        // WARNING: Subroutine does not return
        release_memory();
    }
    *param_1 = &unknown_var_3456_ptr;
    if (param_1[1] != 0) {
        // WARNING: Subroutine does not return
        release_memory();
    }
    param_1[1] = 0;
    *(int32_t *)(param_1 + 3) = 0;
    *param_1 = &unknown_var_720_ptr;
    return;
}

/**
 * @brief 处理递归数据结构清理
 * 
 * 递归地清理数据结构，处理嵌套的数据结构。
 * 该函数确保所有相关内存都被正确释放。
 * 
 * @param param_1 清理参数
 * @param param_2 指向数据结构的指针
 * @param param_3 清理参数3
 * @param param_4 清理参数4
 */
void process_recursive_data_structure_cleanup(uint64_t param_1, uint64_t *param_2, uint64_t param_3, uint64_t param_4)
{
    if (param_2 == (uint64_t *)0x0) {
        return;
    }
    process_recursive_data_structure_cleanup(param_1, *param_2, param_3, param_4, 0xfffffffffffffffe);
    perform_system_cleanup();
    param_2[4] = &unknown_var_3456_ptr;
    if (param_2[5] != 0) {
        // WARNING: Subroutine does not return
        release_memory();
    }
    param_2[5] = 0;
    *(int32_t *)(param_2 + 7) = 0;
    param_2[4] = &unknown_var_720_ptr;
    // WARNING: Subroutine does not return
    release_memory(param_2);
}

/**
 * @brief 清理单个元素内存
 * 
 * 清理单个数据结构元素的内存，释放相关资源。
 * 该函数处理元素级别的内存清理操作。
 * 
 * @param param_1 指向要清理的元素的指针
 */
void cleanup_element_memory(uint64_t *param_1)
{
    perform_memory_cleanup(param_1 + 0x7d, 0x58, 4, perform_element_cleanup, 0xfffffffffffffffe);
    perform_memory_cleanup(param_1 + 0x51, 0x58, 4, perform_element_cleanup);
    perform_memory_cleanup(param_1 + 0x11, 0x20, 0x10, process_element_initialization);
    param_1[8] = &unknown_var_3456_ptr;
    if (param_1[9] != 0) {
        // WARNING: Subroutine does not return
        release_memory();
    }
    param_1[9] = 0;
    *(int32_t *)(param_1 + 0xb) = 0;
    param_1[8] = &unknown_var_720_ptr;
    param_1[4] = &unknown_var_3456_ptr;
    if (param_1[5] != 0) {
        // WARNING: Subroutine does not return
        release_memory();
    }
    param_1[5] = 0;
    *(int32_t *)(param_1 + 7) = 0;
    param_1[4] = &unknown_var_720_ptr;
    *param_1 = &unknown_var_3456_ptr;
    if (param_1[1] != 0) {
        // WARNING: Subroutine does not return
        release_memory();
    }
    param_1[1] = 0;
    *(int32_t *)(param_1 + 3) = 0;
    *param_1 = &unknown_var_720_ptr;
    return;
}

/**
 * @brief 清理系统资源
 * 
 * 清理系统资源，执行必要的系统清理操作。
 * 该函数确保系统资源的正确释放。
 * 
 * @param param_1 指向要清理的资源的指针
 */
void cleanup_system_resources(uint64_t *param_1)
{
    perform_system_cleanup();
    *param_1 = &unknown_var_3456_ptr;
    if (param_1[1] != 0) {
        // WARNING: Subroutine does not return
        release_memory();
    }
    param_1[1] = 0;
    *(int32_t *)(param_1 + 3) = 0;
    *param_1 = &unknown_var_720_ptr;
    return;
}