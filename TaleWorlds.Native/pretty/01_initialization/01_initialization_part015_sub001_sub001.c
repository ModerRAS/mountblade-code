#include "TaleWorlds.Native.Split.h"

// 01_initialization_part015_sub001_sub001.c - 11 个函数

#include "TaleWorlds.Native.Split.h"

// 01_initialization_part015_sub001.c - 12 个函数

#include "TaleWorlds.Native.Split.h"

// 01_initialization_part015.c - 12 个函数

// 函数: void initialize_system_config(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 初始化系统配置，处理配置文件和参数设置
void initialize_system_config(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    double dVar1;
    char cVar2;
    double dVar3;
    uint uVar4;
    uint64_t *puVar5;
    int64_t lVar6;
    int64_t lVar7;
    int32_t *puVar8;
    void *puVar9;
    uint64_t uVar10;
    int64_t lVar11;
    uint64_t uVar12;
    int64_t lVar13;
    char *pcVar14;
    void *puVar15;
    uint uVar16;
    int iVar17;
    void *puStack_c8;
    void *puStack_c0;
    uint uStack_b8;
    uint64_t uStack_b0;
    void *puStack_a8;
    char *pcStack_a0;
    int32_t uStack_98;
    uint64_t uStack_90;
    void *puStack_88;
    char *pcStack_80;
    int32_t uStack_78;
    uint64_t uStack_70;
    
    lVar11 = system_config_table;
    uVar12 = 0;
    if (config_enabled_flag == '\0') {
        return;
    }
    puStack_c8 = &system_buffer_start;
    uStack_b0 = 0;
    puStack_c0 = (void *)0x0;
    uStack_b8 = 0;
    uVar16 = *(uint *)(system_config_table + 0x180);
    uVar10 = (uint64_t)uVar16;
    if (*(int64_t *)(system_config_table + 0x178) != 0) {
        allocate_system_memory(&puStack_c8, uVar10, param_3, param_4, 1, 0xfffffffffffffffe);
    }
    if (uVar16 != 0) {
        // WARNING: Subroutine does not return
        memcpy(puStack_c0, *(uint64_t *)(lVar11 + 0x178), uVar10);
    }
    if (puStack_c0 != (void *)0x0) {
        puStack_c0[uVar10] = 0;
    }
    uStack_b0 = CONCAT44(*(int32_t *)(lVar11 + 0x18c), (int32_t)uStack_b0);
    uStack_b8 = uVar16;
    allocate_system_memory(&puStack_c8, 5);
    *(int32_t *)(puStack_c0 + uStack_b8) = 0x73676f6c;  // "logs"
    *(int16_t *)((int64_t)(puStack_c0 + uStack_b8) + 4) = 0x2f;  // "/"
    uStack_b8 = 5;
    allocate_system_memory(&puStack_c8, 0x18);
    puVar8 = (int32_t *)(puStack_c0 + uStack_b8);
    *puVar8 = 0x66726570;      // "pref"
    puVar8[1] = 0x616d726f;     // "mrom"
    puVar8[2] = 0x5f65636e;     // "_ecn"
    puVar8[3] = 0x2e676f6c;     // ".gol"
    puVar8[4] = 0x747874;       // "txt"
    uStack_b8 = 0x18;
    puVar5 = (uint64_t *)create_memory_block(memory_pool_handle, 0x18, 8, 3);
    puVar9 = &default_string_data;
    if (puStack_c0 != (void *)0x0) {
        puVar9 = puStack_c0;
    }
    *puVar5 = 0;
    *(int8_t *)(puVar5 + 2) = 0;
    initialize_data_structure(puVar5, puVar9, &data_structure_config);
    uVar16 = 0;
    uVar10 = uVar12;
    if (config_end_address - config_start_address >> 8 != 0) {
        do {
            lVar13 = config_start_address;
            lVar11 = 0;
            puStack_88 = &system_buffer_start;
            uStack_70 = 0;
            pcStack_80 = (char *)0x0;
            uStack_78 = 0;
            allocate_system_memory(&puStack_88, *(int32_t *)(config_start_address + 0x10 + uVar10));
            iVar17 = *(int *)(lVar13 + 0x10 + uVar10);
            if (iVar17 != 0) {
                // WARNING: Subroutine does not return
                memcpy(pcStack_80, *(uint64_t *)(lVar13 + 8 + uVar10), iVar17 + 1);
            }
            if (*(int64_t *)(lVar13 + 8 + uVar10) != 0) {
                uStack_78 = 0;
                if (pcStack_80 != (char *)0x0) {
                    *pcStack_80 = '\0';
                }
                uStack_70 = uStack_70 & 0xffffffff;
            }
            cVar2 = *pcStack_80;
            while (cVar2 != '\0') {
                lVar6 = strchr(&invalid_characters, (int)pcStack_80[lVar11]);
                if (lVar6 != 0) {
                    pcStack_80[lVar11] = '_';
                }
                lVar11 = lVar11 + 1;
                cVar2 = pcStack_80[lVar11];
            }
            pcVar14 = "";
            if (pcStack_80 != (char *)0x0) {
                pcVar14 = pcStack_80;
            }
            add_string_to_structure(puVar5, &string_field_key, pcVar14);
            dVar1 = *(double *)(lVar13 + 0xa0 + uVar10);
            dVar3 = (double)*(uint *)(lVar13 + 0xb0 + uVar10);
            if (dVar3 != 0.0) {
                add_double_to_structure(puVar5, &double_field_key, &double_field_value1, dVar3);
            }
            if (dVar1 != 0.0) {
                add_double_to_structure(puVar5, &double_field_key, &double_field_value2, dVar1);
            }
            dVar1 = *(double *)(lVar13 + 0xb8 + uVar10);
            dVar3 = (double)*(uint *)(lVar13 + 200 + uVar10);
            if (dVar3 != 0.0) {
                add_double_to_structure(puVar5, &double_field_key, &double_field_value3, dVar3);
            }
            if (dVar1 != 0.0) {
                add_double_to_structure(puVar5, &double_field_key, &double_field_value4, dVar1);
            }
            dVar1 = *(double *)(lVar13 + 0x20 + uVar10);
            if (dVar1 != 0.0) {
                add_double_to_structure(puVar5, &double_field_key, &double_field_value5, dVar1);
            }
            dVar1 = *(double *)(lVar13 + 0x28 + uVar10);
            if (dVar1 != 0.0) {
                add_double_to_structure(puVar5, &double_field_key, &double_field_value6, dVar1);
            }
            lVar11 = *(int64_t *)(lVar13 + 0x30 + uVar10);
            dVar1 = (double)lVar11;
            if (lVar11 < 0) {
                dVar1 = dVar1 + 1.8446744073709552e+19;
            }
            add_double_to_structure(puVar5, &float_conversion_key, &float_field_value1,
                                  (double)(float)(dVar1 * 9.5367431640625e-07));
            lVar11 = *(int64_t *)(lVar13 + 0x38 + uVar10);
            dVar1 = (double)lVar11;
            if (lVar11 < 0) {
                dVar1 = dVar1 + 1.8446744073709552e+19;
            }
            add_double_to_structure(puVar5, &float_conversion_key, &float_field_value2,
                                  (double)(float)(dVar1 * 9.5367431640625e-07));
            lVar11 = *(int64_t *)(lVar13 + 0x40 + uVar10);
            dVar1 = (double)lVar11;
            if (lVar11 < 0) {
                dVar1 = dVar1 + 1.8446744073709552e+19;
            }
            add_double_to_structure(puVar5, &float_conversion_key, &float_field_value3,
                                  (double)(float)(dVar1 * 9.5367431640625e-07));
            lVar11 = *(int64_t *)(lVar13 + 0x48 + uVar10);
            dVar1 = (double)lVar11;
            if (lVar11 < 0) {
                dVar1 = dVar1 + 1.8446744073709552e+19;
            }
            add_double_to_structure(puVar5, &float_conversion_key, &float_field_value4,
                                  (double)(float)(dVar1 * 9.5367431640625e-07));
            lVar11 = *(int64_t *)(lVar13 + 0x50 + uVar10);
            dVar1 = (double)lVar11;
            if (lVar11 < 0) {
                dVar1 = dVar1 + 1.8446744073709552e+19;
            }
            add_double_to_structure(puVar5, &float_conversion_key, &float_field_value5,
                                  (double)(float)(dVar1 * 9.5367431640625e-07));
            lVar11 = *(int64_t *)(lVar13 + 0x58 + uVar10);
            dVar1 = (double)lVar11;
            if (lVar11 < 0) {
                dVar1 = dVar1 + 1.8446744073709552e+19;
            }
            add_double_to_structure(puVar5, &float_conversion_key, &float_field_value6,
                                  (double)(float)(dVar1 * 9.5367431640625e-07));
            lVar11 = *(int64_t *)(lVar13 + 0x60 + uVar10);
            dVar1 = (double)lVar11;
            if (lVar11 < 0) {
                dVar1 = dVar1 + 1.8446744073709552e+19;
            }
            add_double_to_structure(puVar5, &float_conversion_key, &float_field_value7,
                                  (double)(float)(dVar1 * 9.5367431640625e-07));
            lVar11 = *(int64_t *)(lVar13 + 0x68 + uVar10);
            dVar1 = (double)lVar11;
            if (lVar11 < 0) {
                dVar1 = dVar1 + 1.8446744073709552e+19;
            }
            add_double_to_structure(puVar5, &float_conversion_key, &float_field_value8,
                                  (double)(float)(dVar1 * 9.5367431640625e-07));
            lVar11 = *(int64_t *)(lVar13 + 0x70 + uVar10);
            dVar1 = (double)lVar11;
            if (lVar11 < 0) {
                dVar1 = dVar1 + 1.8446744073709552e+19;
            }
            add_double_to_structure(puVar5, &float_conversion_key, &float_field_value9,
                                  (double)(float)(dVar1 * 9.5367431640625e-07));
            dVar1 = *(double *)(lVar13 + 0x78 + uVar10);
            if (dVar1 != 0.0) {
                add_double_to_structure(puVar5, &double_field_key, &double_field_value7, dVar1);
            }
            dVar1 = *(double *)(lVar13 + 0x80 + uVar10);
            if (dVar1 != 0.0) {
                add_double_to_structure(puVar5, &double_field_key, &double_field_value8, dVar1);
            }
            lVar13 = uVar10 + 0xd0 + lVar13;
            lVar11 = *(int64_t *)(lVar13 + 8);
            uVar4 = (uint)uVar12;
            while (lVar11 != lVar13) {
                lVar6 = 0;
                puStack_a8 = &system_buffer_start;
                uStack_90 = 0;
                pcStack_a0 = (char *)0x0;
                uStack_98 = 0;
                allocate_system_memory(&puStack_a8, *(int32_t *)(lVar11 + 0x50));
                if (*(int *)(lVar11 + 0x50) != 0) {
                    // WARNING: Subroutine does not return
                    memcpy(pcStack_a0, *(uint64_t *)(lVar11 + 0x48), *(int *)(lVar11 + 0x50) + 1);
                }
                if (*(int64_t *)(lVar11 + 0x48) != 0) {
                    uStack_98 = 0;
                    if (pcStack_a0 != (char *)0x0) {
                        *pcStack_a0 = '\0';
                    }
                    uStack_90 = uStack_90 & 0xffffffff;
                }
                cVar2 = *pcStack_a0;
                while (cVar2 != '\0') {
                    lVar7 = strchr(&invalid_characters, (int)pcStack_a0[lVar6]);
                    if (lVar7 != 0) {
                        pcStack_a0[lVar6] = '_';
                    }
                    lVar6 = lVar6 + 1;
                    cVar2 = pcStack_a0[lVar6];
                }
                pcVar14 = "";
                if (pcStack_a0 != (char *)0x0) {
                    pcVar14 = pcStack_a0;
                }
                add_string_to_structure(puVar5, &double_field_key, pcVar14, *(uint64_t *)(lVar11 + 0x60));
                puStack_a8 = &system_buffer_start;
                if (pcStack_a0 != (char *)0x0) {
                    // WARNING: Subroutine does not return
                    free_system_memory();
                }
                pcStack_a0 = (char *)0x0;
                uStack_90 = uStack_90 & 0xffffffff00000000;
                puStack_a8 = &system_cleanup_marker;
                lVar11 = cleanup_structure_node(lVar11);
                uVar4 = uVar16;
            }
            finalize_structure_entry(puVar5, &structure_end_marker);
            puStack_88 = &system_buffer_start;
            if (pcStack_80 != (char *)0x0) {
                // WARNING: Subroutine does not return
                free_system_memory();
            }
            pcStack_80 = (char *)0x0;
            uStack_70 = uStack_70 & 0xffffffff00000000;
            puStack_88 = &system_cleanup_marker;
            uVar16 = uVar4 + 1;
            uVar12 = (uint64_t)uVar16;
            uVar10 = uVar10 + 0x100;
        } while ((uint64_t)(int64_t)(int)uVar16 < (uint64_t)(config_end_address - config_start_address >> 8));
    }
    iVar17 = 0;
    finalize_structure_entry(puVar5, &structure_final_marker);
    if ((additional_config_end - additional_config_start) / 0x28 != 0) {
        lVar11 = 0;
        do {
            lVar6 = additional_config_start;
            lVar13 = 0;
            pcVar14 = *(char **)(additional_config_start + 8 + lVar11);
            cVar2 = *pcVar14;
            while (cVar2 != '\0') {
                lVar7 = strchr(&invalid_characters, (int)pcVar14[lVar13]);
                if (lVar7 != 0) {
                    *(int8_t *)(lVar13 + *(int64_t *)(lVar6 + 8 + lVar11)) = 0x5f;
                }
                lVar13 = lVar13 + 1;
                pcVar14 = *(char **)(lVar6 + 8 + lVar11);
                cVar2 = pcVar14[lVar13];
            }
            puVar9 = *(void **)(additional_config_start + 8 + lVar11);
            puVar15 = &default_string_data;
            if (puVar9 != (void *)0x0) {
                puVar15 = puVar9;
            }
            add_string_to_structure(puVar5, &double_field_key, puVar15, *(uint64_t *)(additional_config_start + 0x20 + lVar11));
            iVar17 = iVar17 + 1;
            lVar11 = lVar11 + 0x28;
        } while ((uint64_t)(int64_t)iVar17 < (uint64_t)((additional_config_end - additional_config_start) / 0x28));
    }
    if (puVar5[1] != 0) {
        fclose();
        puVar5[1] = 0;
        LOCK();
        file_handle_count = file_handle_count + -1;
        UNLOCK();
        if (puVar5[1] != 0) {
            fclose();
            puVar5[1] = 0;
            LOCK();
            file_handle_count = file_handle_count + -1;
            UNLOCK();
        }
    }
    // WARNING: Subroutine does not return
    free_system_memory(puVar5);
}

// 函数: void cleanup_memory_blocks(int64_t *param_1)
// 清理内存块，释放分配的资源
void cleanup_memory_blocks(int64_t *param_1)
{
    int64_t lVar1;
    int64_t lVar2;
    
    lVar1 = param_1[1];
    for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x100) {
        release_memory_block(lVar2);
    }
    if (*param_1 == 0) {
        return;
    }
    // WARNING: Subroutine does not return
    free_system_memory();
}

// 函数: void reset_buffer_pointers(int64_t *param_1)
// 重置缓冲区指针，清理缓冲区数据
void reset_buffer_pointers(int64_t *param_1)
{
    uint64_t *puVar1;
    uint64_t *puVar2;
    
    puVar1 = (uint64_t *)param_1[1];
    for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 5) {
        *puVar2 = &system_buffer_start;
        if (puVar2[1] != 0) {
            // WARNING: Subroutine does not return
            free_system_memory();
        }
        puVar2[1] = 0;
        *(int32_t *)(puVar2 + 3) = 0;
        *puVar2 = &system_cleanup_marker;
    }
    if (*param_1 != 0) {
        // WARNING: Subroutine does not return
        free_system_memory();
    }
    return;
}

// 函数: void release_object_reference(uint64_t *param_1)
// 释放对象引用，处理引用计数
void release_object_reference(uint64_t *param_1)
{
    int *piVar1;
    uint64_t *puVar2;
    int64_t lVar3;
    uint64_t uVar4;
    
    puVar2 = (uint64_t *)*param_1;
    if (puVar2 == (uint64_t *)0x0) {
        return;
    }
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
        lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
        lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
        if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
            *puVar2 = *(uint64_t *)(lVar3 + 0x20);
            *(uint64_t **)(lVar3 + 0x20) = puVar2;
            piVar1 = (int *)(lVar3 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
                release_memory_pool();
                return;
            }
        }
        else {
            release_object_memory(uVar4, CONCAT71(0xff000000, *(void ***)(uVar4 + 0x70) == &ExceptionList),
                                puVar2, uVar4, 0xfffffffffffffffe);
        }
    }
    return;
}

// 函数: void close_file_handle(int64_t param_1)
// 关闭文件句柄，清理文件相关资源
void close_file_handle(int64_t param_1)
{
    if (param_1 != 0) {
        if (*(int64_t *)(param_1 + 8) != 0) {
            fclose();
            *(uint64_t *)(param_1 + 8) = 0;
            LOCK();
            file_handle_count = file_handle_count + -1;
            UNLOCK();
        }
        // WARNING: Subroutine does not return
        free_system_memory(param_1);
    }
    return;
}

// 函数: int64_t copy_data_structure(int64_t param_1, int64_t param_2, uint64_t param_3, uint64_t param_4)
// 复制数据结构，深拷贝数据内容
int64_t copy_data_structure(int64_t param_1, int64_t param_2, uint64_t param_3, uint64_t param_4)
{
    uint64_t *puVar1;
    int32_t uVar2;
    int32_t uVar3;
    int32_t uVar4;
    uint64_t uVar5;
    uint64_t *puVar6;
    uint64_t *puVar7;
    uint64_t *puVar8;
    uint64_t *puVar9;
    uint64_t uVar10;
    
    uVar10 = 0xfffffffffffffffe;
    initialize_memory_manager();
    *(uint64_t *)(param_1 + 0x20) = *(uint64_t *)(param_2 + 0x20);
    *(uint64_t *)(param_1 + 0x28) = *(uint64_t *)(param_2 + 0x28);
    uVar5 = *(uint64_t *)(param_2 + 0x38);
    *(uint64_t *)(param_1 + 0x30) = *(uint64_t *)(param_2 + 0x30);
    *(uint64_t *)(param_1 + 0x38) = uVar5;
    uVar5 = *(uint64_t *)(param_2 + 0x48);
    *(uint64_t *)(param_1 + 0x40) = *(uint64_t *)(param_2 + 0x40);
    *(uint64_t *)(param_1 + 0x48) = uVar5;
    uVar5 = *(uint64_t *)(param_2 + 0x58);
    *(uint64_t *)(param_1 + 0x50) = *(uint64_t *)(param_2 + 0x50);
    *(uint64_t *)(param_1 + 0x58) = uVar5;
    uVar2 = *(int32_t *)(param_2 + 100);
    uVar3 = *(int32_t *)(param_2 + 0x68);
    uVar4 = *(int32_t *)(param_2 + 0x6c);
    *(int32_t *)(param_1 + 0x60) = *(int32_t *)(param_2 + 0x60);
    *(int32_t *)(param_1 + 100) = uVar2;
    *(int32_t *)(param_1 + 0x68) = uVar3;
    *(int32_t *)(param_1 + 0x6c) = uVar4;
    *(uint64_t *)(param_1 + 0x70) = *(uint64_t *)(param_2 + 0x70);
    *(uint64_t *)(param_1 + 0x78) = *(uint64_t *)(param_2 + 0x78);
    *(uint64_t *)(param_1 + 0x80) = *(uint64_t *)(param_2 + 0x80);
    *(uint64_t *)(param_1 + 0x88) = *(uint64_t *)(param_2 + 0x88);
    *(uint64_t *)(param_1 + 0x90) = *(uint64_t *)(param_2 + 0x90);
    *(int32_t *)(param_1 + 0x98) = *(int32_t *)(param_2 + 0x98);
    *(int32_t *)(param_1 + 0x9c) = *(int32_t *)(param_2 + 0x9c);
    *(uint64_t *)(param_1 + 0xa0) = *(uint64_t *)(param_2 + 0xa0);
    *(uint64_t *)(param_1 + 0xa8) = *(uint64_t *)(param_2 + 0xa8);
    *(int32_t *)(param_1 + 0xb0) = *(int32_t *)(param_2 + 0xb0);
    *(int32_t *)(param_1 + 0xb4) = *(int32_t *)(param_2 + 0xb4);
    *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_2 + 0xb8);
    *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_2 + 0xc0);
    *(int32_t *)(param_1 + 200) = *(int32_t *)(param_2 + 200);
    *(int32_t *)(param_1 + 0xcc) = *(int32_t *)(param_2 + 0xcc);
    puVar1 = (uint64_t *)(param_1 + 0xd0);
    *puVar1 = 0;
    *(uint64_t *)(param_1 + 0xd8) = 0;
    *(uint64_t *)(param_1 + 0xe0) = 0;
    *(uint64_t *)(param_1 + 0xe8) = 0;
    *(uint64_t *)(param_1 + 0xf0) = 0;
    *(int32_t *)(param_1 + 0xf8) = *(int32_t *)(param_2 + 0xf8);
    *puVar1 = puVar1;
    *(uint64_t **)(param_1 + 0xd8) = puVar1;
    *(uint64_t *)(param_1 + 0xe0) = 0;
    *(int8_t *)(param_1 + 0xe8) = 0;
    *(uint64_t *)(param_1 + 0xf0) = 0;
    if (*(int64_t *)(param_2 + 0xe0) != 0) {
        puVar9 = (uint64_t *)copy_structure_data(puVar1, *(int64_t *)(param_2 + 0xe0), puVar1, param_4, uVar10);
        *(uint64_t **)(param_1 + 0xe0) = puVar9;
        puVar8 = (uint64_t *)*puVar9;
        puVar7 = puVar9;
        while (puVar6 = puVar8, puVar6 != (uint64_t *)0x0) {
            puVar7 = puVar6;
            puVar8 = (uint64_t *)*puVar6;
        }
        *puVar1 = puVar7;
        puVar1 = (uint64_t *)puVar9[1];
        while (puVar7 = puVar1, puVar7 != (uint64_t *)0x0) {
            puVar9 = puVar7;
            puVar1 = (uint64_t *)puVar7[1];
        }
        *(uint64_t **)(param_1 + 0xd8) = puVar9;
        *(uint64_t *)(param_1 + 0xf0) = *(uint64_t *)(param_2 + 0xf0);
    }
    return param_1;
}

// 函数: uint64_t free_memory_block(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 释放内存块，根据标志位决定是否释放
uint64_t free_memory_block(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    uint64_t uVar1;
    
    uVar1 = 0xfffffffffffffffe;
    initialize_memory_cleanup();
    if ((param_2 & 1) != 0) {
        free(param_1, 200, param_3, param_4, uVar1);
    }
    return param_1;
}

// 函数: uint64_t * find_structure_node(int64_t *param_1, uint64_t *param_2, uint64_t param_3, int64_t *param_4, int64_t param_5)
// 查找结构节点，在链表中搜索特定节点
uint64_t * find_structure_node(int64_t *param_1, uint64_t *param_2, uint64_t param_3, int64_t *param_4,
                                int64_t param_5)
{
    byte bVar1;
    bool bVar2;
    int64_t *plVar3;
    int64_t *plVar4;
    byte *pbVar5;
    uint uVar6;
    int64_t lVar7;
    uint64_t uVar8;
    int64_t *plStackX_8;
    
    plVar4 = (int64_t *)*param_1;
    if ((param_4 == plVar4) || (param_4 == param_1)) {
        if ((param_1[4] != 0) && (*(int *)(param_5 + 0x10) != 0)) {
            param_4 = plVar4;
            if (*(int *)(plVar4 + 6) != 0) {
                pbVar5 = *(byte **)(param_5 + 8);
                lVar7 = plVar4[5] - (int64_t)pbVar5;
                do {
                    bVar1 = *pbVar5;
                    uVar6 = (uint)pbVar5[lVar7];
                    if (bVar1 != uVar6) break;
                    pbVar5 = pbVar5 + 1;
                } while (uVar6 != 0);
                if ((int)(bVar1 - uVar6) < 1) goto LAB_found_match;
            }
LAB_no_match:
            uVar8 = 0;
LAB_process_result:
            if (param_4 != (int64_t *)0x0) {
                process_structure_node(param_1, param_2, param_4, uVar8, param_5);
                return param_2;
            }
        }
    }
    else {
        plVar4 = (int64_t *)get_next_structure_node(param_4);
        if (*(int *)(param_5 + 0x10) != 0) {
            if ((int)param_4[6] != 0) {
                pbVar5 = *(byte **)(param_5 + 8);
                lVar7 = param_4[5] - (int64_t)pbVar5;
                do {
                    bVar1 = *pbVar5;
                    uVar6 = (uint)pbVar5[lVar7];
                    if (bVar1 != uVar6) break;
                    pbVar5 = pbVar5 + 1;
                } while (uVar6 != 0);
                if ((int)(bVar1 - uVar6) < 1) goto LAB_found_match;
            }
            if ((int)plVar4[6] != 0) {
                pbVar5 = (byte *)plVar4[5];
                lVar7 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar5;
                do {
                    bVar1 = *pbVar5;
                    uVar6 = (uint)pbVar5[lVar7];
                    if (bVar1 != uVar6) break;
                    pbVar5 = pbVar5 + 1;
                } while (uVar6 != 0);
                if (0 < (int)(bVar1 - uVar6)) {
                    if (*param_4 == 0) goto LAB_no_match;
                    uVar8 = 1;
                    param_4 = plVar4;
                    goto LAB_process_result;
                }
            }
        }
    }
LAB_found_match:
    bVar2 = true;
    plVar4 = (int64_t *)param_1[2];
    plVar3 = param_1;
    while (plVar4 != (int64_t *)0x0) {
        plVar3 = plVar4;
        if ((int)plVar4[6] == 0) {
            bVar2 = false;
LAB_continue_search:
            plVar4 = (int64_t *)*plVar4;
        }
        else {
            if (*(int *)(param_5 + 0x10) == 0) {
                bVar2 = true;
            }
            else {
                pbVar5 = (byte *)plVar4[5];
                lVar7 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar5;
                do {
                    bVar1 = *pbVar5;
                    uVar6 = (uint)pbVar5[lVar7];
                    if (bVar1 != uVar6) break;
                    pbVar5 = pbVar5 + 1;
                } while (uVar6 != 0);
                bVar2 = 0 < (int)(bVar1 - uVar6);
            }
            if (!bVar2) goto LAB_continue_search;
            plVar4 = (int64_t *)plVar4[1];
        }
    }
    plVar4 = plVar3;
    if (bVar2) {
        if (plVar3 != (int64_t *)param_1[1]) {
            plVar4 = (int64_t *)get_previous_structure_node(plVar3);
            goto LAB_insert_node;
        }
    }
    else {
LAB_insert_node:
        if (*(int *)(param_5 + 0x10) == 0) goto LAB_insert_at_position;
        if ((int)plVar4[6] != 0) {
            pbVar5 = *(byte **)(param_5 + 8);
            lVar7 = plVar4[5] - (int64_t)pbVar5;
            do {
                bVar1 = *pbVar5;
                uVar6 = (uint)pbVar5[lVar7];
                if (bVar1 != uVar6) break;
                pbVar5 = pbVar5 + 1;
            } while (uVar6 != 0);
            if ((int)(bVar1 - uVar6) < 1) goto LAB_insert_at_position;
        }
    }
    process_structure_node(param_1, &plStackX_8, plVar3, 0, param_5);
    plVar4 = plStackX_8;
LAB_insert_at_position:
    *param_2 = plVar4;
    return param_2;
}

// 函数: void process_structure_node(int64_t param_1, uint64_t param_2, int64_t param_3, uint64_t param_4, int64_t param_5)
// 处理结构节点，插入或更新节点数据
void process_structure_node(int64_t param_1, uint64_t param_2, int64_t param_3, uint64_t param_4,
                          int64_t param_5)
{
    byte bVar1;
    byte *pbVar2;
    uint uVar3;
    uint64_t *puVar4;
    int64_t lVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    
    uVar7 = 0xfffffffffffffffe;
    uVar6 = 0;
    if (((char)param_4 != '\0') || (param_3 == param_1)) goto LAB_skip_processing;
    if (*(int *)(param_3 + 0x30) != 0) {
        if (*(int *)(param_5 + 0x10) == 0) goto LAB_skip_processing;
        pbVar2 = *(byte **)(param_3 + 0x28);
        lVar5 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar2;
        do {
            bVar1 = *pbVar2;
            uVar3 = (uint)pbVar2[lVar5];
            if (bVar1 != uVar3) break;
            pbVar2 = pbVar2 + 1;
        } while (uVar3 != 0);
        if (0 < (int)(bVar1 - uVar3)) goto LAB_skip_processing;
    }
    uVar6 = 1;
LAB_skip_processing:
    lVar5 = create_structure_node(memory_pool_handle, 0x68, *(int8_t *)(param_1 + 0x28), param_4,
                                0xfffffffffffffffe);
    initialize_node_data(lVar5 + 0x20, param_5);
    puVar4 = (uint64_t *)(lVar5 + 0x40);
    *(uint64_t *)(lVar5 + 0x50) = 0;
    *(uint64_t *)(lVar5 + 0x58) = 0;
    *(uint64_t *)(lVar5 + 0x60) = 0;
    *puVar4 = &system_cleanup_marker;
    *(uint64_t *)(lVar5 + 0x48) = 0;
    *(int32_t *)(lVar5 + 0x50) = 0;
    *puVar4 = &system_buffer_start;
    *(uint64_t *)(lVar5 + 0x58) = 0;
    *(uint64_t *)(lVar5 + 0x48) = 0;
    *(int32_t *)(lVar5 + 0x50) = 0;
    // WARNING: Subroutine does not return
    insert_structure_node(lVar5, param_3, param_1, uVar6, uVar7, puVar4);
}

// 函数: uint64_t * copy_structure_data(int64_t param_1, int64_t *param_2, uint64_t param_3, uint64_t param_4)
// 复制结构数据，递归复制子节点
uint64_t * copy_structure_data(int64_t param_1, int64_t *param_2, uint64_t param_3, uint64_t param_4)
{
    int64_t *plVar1;
    uint64_t *puVar2;
    uint64_t *puVar3;
    uint64_t *puVar4;
    uint64_t uVar5;
    
    uVar5 = 0xfffffffffffffffe;
    puVar3 = (uint64_t *)create_structure_copy();
    if (*param_2 != 0) {
        uVar5 = copy_structure_data(param_1, *param_2, puVar3, param_4, uVar5);
        *puVar3 = uVar5;
    }
    puVar2 = puVar3;
    for (plVar1 = (int64_t *)param_2[1]; plVar1 != (int64_t *)0x0; plVar1 = (int64_t *)plVar1[1]) {
        puVar4 = (uint64_t *)create_structure_node(memory_pool_handle, 0x68, *(int8_t *)(param_1 + 0x28));
        initialize_node_data(puVar4 + 4, plVar1 + 4);
        initialize_node_data(puVar4 + 8, plVar1 + 8);
        puVar4[0xc] = plVar1[0xc];
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = puVar2;
        *(char *)(puVar4 + 3) = (char)plVar1[3];
        puVar2[1] = puVar4;
        if (*plVar1 != 0) {
            uVar5 = copy_structure_data(param_1, *plVar1, puVar4);
            *puVar4 = uVar5;
        }
        puVar2 = puVar4;
    }
    return puVar3;
}

// 函数: uint64_t * create_structure_copy(int64_t param_1, int64_t param_2, uint64_t param_3, uint64_t param_4)
// 创建结构副本，分配新节点并复制数据
uint64_t * create_structure_copy(int64_t param_1, int64_t param_2, uint64_t param_3, uint64_t param_4)
{
    uint64_t *puVar1;
    
    puVar1 = (uint64_t *)
             create_structure_node(memory_pool_handle, 0x68, *(int8_t *)(param_1 + 0x28), param_4,
                                   0xfffffffffffffffe);
    initialize_node_data(puVar1 + 4, param_2 + 0x20);
    initialize_node_data(puVar1 + 8, param_2 + 0x40);
    puVar1[0xc] = *(uint64_t *)(param_2 + 0x60);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = param_3;
    *(int8_t *)(puVar1 + 3) = *(int8_t *)(param_2 + 0x18);
    return puVar1;
}

// 函数: uint64_t * build_structure_from_data(uint64_t *param_1, int64_t *param_2, int64_t *param_3, uint64_t *param_4)
// 从数据构建结构，将数据转换为结构化节点
uint64_t * build_structure_from_data(uint64_t *param_1, int64_t *param_2, int64_t *param_3, uint64_t *param_4)
{
    int64_t *plVar1;
    int64_t *plVar2;
    int32_t uVar3;
    int64_t lVar4;
    int64_t *plVar5;
    
    *param_1 = param_4;
    if (param_2 != param_3) {
        plVar5 = param_2 + 0x1b;
        do {
            *param_4 = &system_cleanup_marker;
            param_4[1] = 0;
            *(int32_t *)(param_4 + 2) = 0;
            *param_4 = &system_buffer_start;
            param_4[3] = 0;
            param_4[1] = 0;
            *(int32_t *)(param_4 + 2) = 0;
            *(int *)(param_4 + 2) = (int)plVar5[-0x19];
            param_4[1] = plVar5[-0x1a];
            *(int32_t *)((int64_t)param_4 + 0x1c) = *(int32_t *)((int64_t)plVar5 + -0xbc);
            *(int *)(param_4 + 3) = (int)plVar5[-0x18];
            *(int32_t *)(plVar5 + -0x19) = 0;
            plVar5[-0x1a] = 0;
            plVar5[-0x18] = 0;
            param_4[4] = plVar5[-0x17];
            param_4[5] = plVar5[-0x16];
            lVar4 = plVar5[-0x14];
            param_4[6] = plVar5[-0x15];
            param_4[7] = lVar4;
            lVar4 = plVar5[-0x12];
            param_4[8] = plVar5[-0x13];
            param_4[9] = lVar4;
            lVar4 = plVar5[-0x10];
            param_4[10] = plVar5[-0x11];
            param_4[0xb] = lVar4;
            lVar4 = plVar5[-0xe];
            param_4[0xc] = plVar5[-0xf];
            param_4[0xd] = lVar4;
            param_4[0xe] = plVar5[-0xd];
            param_4[0xf] = plVar5[-0xc];
            param_4[0x10] = plVar5[-0xb];
            param_4[0x11] = plVar5[-10];
            param_4[0x12] = plVar5[-9];
            *(int *)(param_4 + 0x13) = (int)plVar5[-8];
            *(int32_t *)((int64_t)param_4 + 0x9c) = *(int32_t *)((int64_t)plVar5 + -0x3c);
            param_4[0x14] = plVar5[-7];
            param_4[0x15] = plVar5[-6];
            *(int *)(param_4 + 0x16) = (int)plVar5[-5];
            *(int32_t *)((int64_t)param_4 + 0xb4) = *(int32_t *)((int64_t)plVar5 + -0x24);
            param_4[0x17] = plVar5[-4];
            param_4[0x18] = plVar5[-3];
            *(int *)(param_4 + 0x19) = (int)plVar5[-2];
            *(int32_t *)((int64_t)param_4 + 0xcc) = *(int32_t *)((int64_t)plVar5 + -0xc);
            plVar2 = param_4 + 0x1a;
            *plVar2 = 0;
            param_4[0x1b] = 0;
            param_4[0x1c] = 0;
            param_4[0x1d] = 0;
            param_4[0x1e] = 0;
            *(int *)(param_4 + 0x1f) = (int)plVar5[4];
            *plVar2 = (int64_t)plVar2;
            param_4[0x1b] = plVar2;
            param_4[0x1c] = 0;
            *(int8_t *)(param_4 + 0x1d) = 0;
            param_4[0x1e] = 0;
            param_4[0x1e] = plVar5[3];
            plVar5[3] = 0;
            uVar3 = *(int32_t *)(param_4 + 0x1f);
            *(int *)(param_4 + 0x1f) = (int)plVar5[4];
            *(int32_t *)(plVar5 + 4) = uVar3;
            if (param_4[0x1c] == 0) {
                if (plVar5[1] != 0) {
                    plVar1 = plVar5 + -1;
                    *plVar2 = *plVar1;
                    param_4[0x1b] = *plVar5;
                    lVar4 = plVar5[1];
                    param_4[0x1c] = lVar4;
                    *(int64_t **)(lVar4 + 0x10) = plVar2;
                    *plVar1 = (int64_t)plVar1;
                    *plVar5 = (int64_t)plVar1;
                    plVar5[1] = 0;
                }
            }
            else if (plVar5[1] == 0) {
                plVar5[-1] = *plVar2;
                *plVar5 = param_4[0x1b];
                lVar4 = param_4[0x1c];
                plVar5[1] = lVar4;
                *(int64_t **)(lVar4 + 0x10) = plVar5 + -1;
                *plVar2 = (int64_t)plVar2;
                param_4[0x1b] = plVar2;
                param_4[0x1c] = 0;
            }
            else {
                lVar4 = *plVar2;
                plVar1 = plVar5 + -1;
                *plVar2 = *plVar1;
                *plVar1 = lVar4;
                lVar4 = param_4[0x1b];
                param_4[0x1b] = *plVar5;
                *plVar5 = lVar4;
                lVar4 = param_4[0x1c];
                param_4[0x1c] = plVar5[1];
                plVar5[1] = lVar4;
                *(int64_t **)(param_4[0x1c] + 0x10) = plVar2;
                *(int64_t **)(plVar5[1] + 0x10) = plVar1;
            }
            param_4 = param_4 + 0x20;
            *param_1 = param_4;
            plVar2 = plVar5 + 5;
            plVar5 = plVar5 + 0x20;
        } while (plVar2 != param_3);
    }
    return param_1;
}

// 函数: void cleanup_mutex_resources(uint64_t *param_1)
// 清理互斥锁资源，释放同步对象
void cleanup_mutex_resources(uint64_t *param_1)
{
    *param_1 = &mutex_cleanup_marker;
    destroy_mutex_in_place();
    destroy_condition_in_place(param_1 + 4);
    *param_1 = &mutex_cleanup_marker2;
    *param_1 = &thread_cleanup_marker;
    *param_1 = &sync_cleanup_marker;
    return;
}

// 函数: uint64_t cleanup_thread_resources(uint64_t param_1, uint64_t param_2)
// 清理线程资源，根据标志位决定是否释放
uint64_t cleanup_thread_resources(uint64_t param_1, uint64_t param_2)
{
    cleanup_mutex_resources();
    if ((param_2 & 1) != 0) {
        free(param_1, 0xc0);
    }
    return param_1;
}

// 函数: void set_thread_state(int64_t param_1, int8_t param_2)
// 设置线程状态，更新线程的状态标志
void set_thread_state(int64_t param_1, int8_t param_2)
{
    int iVar1;
    
    iVar1 = lock_mutex(param_1 + 0x48);
    if (iVar1 != 0) {
        throw_system_error(iVar1);
    }
    *(int8_t *)(param_1 + 0x98) = param_2;
    iVar1 = unlock_mutex(param_1 + 0x48);
    if (iVar1 != 0) {
        throw_system_error(iVar1);
    }
    return;
}

// 函数: void wait_for_condition(uint64_t param_1, uint64_t *param_2, int64_t *param_3)
// 等待条件变量，实现线程同步
void wait_for_condition(uint64_t param_1, uint64_t *param_2, int64_t *param_3)
{
    int iVar1;
    uint uVar2;
    int64_t lVar3;
    int8_t auStack_58 [32];
    int64_t lStack_38;
    int iStack_30;
    uint64_t uStack_28;
    
    uStack_28 = security_cookie ^ (uint64_t)auStack_58;
    if (*param_3 < 1) {
        lStack_38 = 0;
        iStack_30 = 0;
    }
    else {
        lVar3 = get_system_time();
        lVar3 = (lVar3 + *param_3 * 10) * 100;
        lStack_38 = lVar3 / 1000000000;
        iStack_30 = (int)lVar3 + (int)lStack_38 * -1000000000;
    }
    iVar1 = check_mutex_ownership(*param_2);
    if (iVar1 == 0) {
        throw_cpp_error(4);
    }
    uVar2 = wait_on_condition(param_1, *param_2, &lStack_38);
    if ((uVar2 & 0xfffffffd) != 0) {
        throw_system_error(uVar2);
    }
    // WARNING: Subroutine does not return
    security_check(uStack_28 ^ (uint64_t)auStack_58);
}

// 函数: int8_t check_thread_status(int64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 检查线程状态，返回线程是否处于特定状态
int8_t check_thread_status(int64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    int8_t uVar1;
    int iVar2;
    uint64_t uStackX_8;
    uint64_t uVar3;
    int64_t lStack_20;
    char cStack_18;
    
    uVar3 = 0xfffffffffffffffe;
    lStack_20 = param_1 + 0x48;
    cStack_18 = 0;
    iVar2 = lock_mutex();
    if (iVar2 != 0) {
        throw_system_error(iVar2);
    }
    cStack_18 = '\x01';
    if (*(char *)(param_1 + 0x98) == '\x01') {
        uVar1 = 1;
    }
    else {
        uStackX_8 = 1;
        wait_for_condition(param_1, &lStack_20, &uStackX_8, param_4, uVar3);
        uVar1 = *(int8_t *)(param_1 + 0x98);
    }
    *(int8_t *)(param_1 + 0x98) = 0;
    if (cStack_18 != '\0') {
        iVar2 = unlock_mutex(lStack_20);
        if (iVar2 != 0) {
            throw_system_error(iVar2);
        }
    }
    return uVar1;
}

// 函数: void cleanup_condition_variables(void)
// 清理条件变量，释放同步资源
void cleanup_condition_variables(void)
{
    destroy_condition_in_place();
    return;
}