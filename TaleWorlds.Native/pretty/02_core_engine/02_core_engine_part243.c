#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part243.c - 核心引擎模块第243部分
// 本文件包含6个函数，主要用于字符串处理、数据结构遍历和内存管理

// 全局变量定义
uint64_t g_string_buffer_size = GET_SECURITY_COOKIE();  // 字符串缓冲区大小
int64_t g_memory_allocator = core_system_data_memory;     // 内存分配器
int64_t g_string_constants = system_memory_pool_ptr;     // 字符串常量池
char g_empty_string[] = "";                       // 空字符串常量
uint64_t g_string_suffix = memory_allocator_3456;        // 字符串后缀标记
uint64_t g_string_prefix = rendering_buffer_2176;        // 字符串前缀标记
uint64_t g_null_terminator = processed_var_720;      // 空终止符标记

// 函数: void process_string_batch(uint64_t param_1, int64_t *param_2)
// 功能: 批量处理字符串数据，进行字符串格式化、编码转换和内存管理
// 参数: param_1 - 上下文参数, param_2 - 字符串数组指针
void process_string_batch(uint64_t param_1, int64_t *param_2)
{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int32_t uVar4;
  int8_t *puVar5;
  char *pcVar6;
  int64_t lVar7;
  int iVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint uVar12;
  uint64_t uVar13;
  int8_t auStack_2c8 [32];
  void *puStack_2a8;
  char *pcStack_2a0;
  uint uStack_298;
  uint64_t uStack_290;
  void *puStack_288;
  int8_t *puStack_280;
  int32_t uStack_278;
  uint64_t uStack_270;
  void *puStack_268;
  int8_t *puStack_260;
  int32_t uStack_258;
  uint64_t uStack_250;
  uint64_t uStack_248;
  char acStack_238 [512];
  uint64_t uStack_38;
  
  uStack_248 = 0xfffffffffffffffe;
  uStack_38 = g_string_buffer_size ^ (uint64_t)auStack_2c8;
  uVar11 = 0;
  lVar9 = *param_2;
  uVar13 = uVar11;
  if (param_2[1] - lVar9 >> 3 != 0) {
    do {
      lVar9 = *(int64_t *)(uVar11 + lVar9);
      puStack_2a8 = &g_string_suffix;
      uStack_290 = 0;
      pcStack_2a0 = (char *)0x0;
      uStack_298 = 0;
      allocate_string_buffer(&puStack_2a8, *(int32_t *)(lVar9 + 0x298));
      pcVar1 = pcStack_2a0;
      if (*(int *)(lVar9 + 0x298) != 0) {
        // 复制字符串内容
        memcpy(pcStack_2a0, *(uint64_t *)(lVar9 + 0x290), *(int *)(lVar9 + 0x298) + 1);
      }
      if (*(int64_t *)(lVar9 + 0x290) != 0) {
        uStack_298 = 0;
        if (pcStack_2a0 != (char *)0x0) {
          *pcStack_2a0 = '\0';
        }
        uStack_290 = uStack_290 & 0xffffffff;
      }
      if (uStack_298 != 0) {
        uVar10 = (uint64_t)uStack_298;
        pcVar6 = pcStack_2a0;
        do {
          // 字符编码转换
          if ((byte)(*pcVar6 + 0xbfU) < 0x1a) {
            *pcVar6 = *pcVar6 + ' ';
          }
          pcVar6 = pcVar6 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      pcVar6 = g_empty_string;
      if (pcStack_2a0 != (char *)0x0) {
        pcVar6 = pcStack_2a0;
      }
      // 格式化字符串
      format_string_with_prefix(acStack_238, 0x200, &g_string_prefix, pcVar6);
      puStack_288 = &g_string_suffix;
      uStack_270 = 0;
      puStack_280 = (int8_t *)0x0;
      uStack_278 = 0;
      lVar9 = -1;
      do {
        lVar7 = lVar9;
        lVar9 = lVar7 + 1;
      } while (acStack_238[lVar7 + 1] != '\0');
      if ((int)(lVar7 + 1) != 0) {
        iVar8 = (int)lVar7 + 2;
        iVar3 = iVar8;
        if (iVar8 < 0x10) {
          iVar3 = 0x10;
        }
        puVar5 = (int8_t *)allocate_memory_from_pool(g_string_constants, (int64_t)iVar3, 0x13);
        *puVar5 = 0;
        puStack_280 = puVar5;
        uVar4 = calculate_string_hash(puVar5);
        uStack_270 = CONCAT44(uStack_270._4_4_, uVar4);
        // 复制格式化后的字符串
        memcpy(puVar5, acStack_238, iVar8);
      }
      uStack_278 = 0;
      cVar2 = validate_string_checksum(&puStack_288);
      puStack_288 = &g_string_suffix;
      if (puStack_280 != (int8_t *)0x0) {
        release_memory_buffer();
      }
      puStack_280 = (int8_t *)0x0;
      uStack_270 = uStack_270 & 0xffffffff00000000;
      puStack_288 = &g_null_terminator;
      if (cVar2 != '\0') {
        puStack_268 = &g_string_suffix;
        uStack_250 = 0;
        puStack_260 = (int8_t *)0x0;
        uStack_258 = 0;
        lVar9 = -1;
        do {
          lVar7 = lVar9;
          lVar9 = lVar7 + 1;
        } while (acStack_238[lVar7 + 1] != '\0');
        if ((int)(lVar7 + 1) != 0) {
          iVar8 = (int)lVar7 + 2;
          iVar3 = iVar8;
          if (iVar8 < 0x10) {
            iVar3 = 0x10;
          }
          puVar5 = (int8_t *)allocate_memory_from_pool(g_string_constants, (int64_t)iVar3, 0x13);
          *puVar5 = 0;
          puStack_260 = puVar5;
          uVar4 = calculate_string_hash(puVar5);
          uStack_250 = CONCAT44(uStack_250._4_4_, uVar4);
          // 复制校验后的字符串
          memcpy(puVar5, acStack_238, iVar8);
        }
        uStack_258 = 0;
        process_string_validation(&puStack_268);
        puStack_268 = &g_string_suffix;
        if (puStack_260 != (int8_t *)0x0) {
          release_memory_buffer();
        }
        puStack_260 = (int8_t *)0x0;
        uStack_250 = uStack_250 & 0xffffffff00000000;
        puStack_268 = &g_null_terminator;
      }
      puStack_2a8 = &g_string_suffix;
      if (pcVar1 != (char *)0x0) {
        release_memory_buffer(pcVar1);
      }
      pcStack_2a0 = (char *)0x0;
      uStack_290 = uStack_290 & 0xffffffff00000000;
      puStack_2a8 = &g_null_terminator;
      uVar12 = (int)uVar13 + 1;
      uVar11 = uVar11 + 8;
      lVar9 = *param_2;
      uVar13 = (uint64_t)uVar12;
    } while ((uint64_t)(int64_t)(int)uVar12 < (uint64_t)(param_2[1] - lVar9 >> 3));
  }
  // 执行清理操作
  execute_cleanup_routine(uStack_38 ^ (uint64_t)auStack_2c8);
}

// 函数: uint64_t find_string_in_data_structure(int64_t param_1, int64_t param_2)
// 功能: 在复杂数据结构中查找匹配的字符串项
// 参数: param_1 - 数据结构起始地址, param_2 - 查找参数结构
// 返回: 找到的项的地址，未找到返回0
uint64_t find_string_in_data_structure(int64_t param_1, int64_t param_2)
{
  int64_t *plVar1;
  byte *pbVar2;
  int iVar3;
  int64_t lVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  int64_t *plVar11;
  int64_t lVar12;
  
  if ((*(int *)(param_2 + 0x10) != 0) &&
     (plVar1 = (int64_t *)(param_1 + 8), param_1 != *(int64_t *)(param_1 + 8))) {
    do {
      lVar12 = 0;
      for (iVar7 = 0; lVar4 = get_data_structure_head(param_1),
          (uint64_t)(int64_t)iVar7 <
          (uint64_t)(*(int64_t *)(lVar4 + 0x30) - *(int64_t *)(lVar4 + 0x28) >> 3);
          iVar7 = iVar7 + 1) {
        lVar4 = get_data_structure_head(param_1);
        lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x28) + lVar12);
        plVar11 = *(int64_t **)(lVar4 + 0x28);
        lVar8 = *(int64_t *)(lVar4 + 0x30) - (int64_t)plVar11;
        for (iVar10 = 0; (uint64_t)(int64_t)iVar10 < (uint64_t)(lVar8 >> 3); iVar10 = iVar10 + 1)
        {
          iVar6 = *(int *)(param_2 + 0x10);
          iVar3 = *(int *)(*plVar11 + 0x298);
          if (iVar3 == iVar6) {
            if (iVar3 != 0) {
              pbVar5 = *(byte **)(*plVar11 + 0x290);
              lVar9 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar5;
              do {
                pbVar2 = pbVar5 + lVar9;
                iVar6 = (uint)*pbVar5 - (uint)*pbVar2;
                if (iVar6 != 0) break;
                pbVar5 = pbVar5 + 1;
              } while (*pbVar2 != 0);
            }
            // 找到匹配项
            if (iVar6 == 0) {
              return *(uint64_t *)(*(int64_t *)(lVar4 + 0x28) + (int64_t)iVar10 * 8);
            }
          }
          else if (iVar3 == 0) {
            // 空字符串匹配
            if (iVar6 == 0) {
              return *(uint64_t *)(*(int64_t *)(lVar4 + 0x28) + (int64_t)iVar10 * 8);
            }
          }
          plVar11 = plVar11 + 1;
        }
        lVar12 = lVar12 + 8;
      }
      param_1 = get_data_structure_head(param_1);
    } while (param_1 != *plVar1);
  }
  return 0;
}

// 函数: int64_t * search_and_process_data_items(uint64_t param_1, int64_t *param_2, int64_t param_3)
// 功能: 搜索并处理数据项，进行复杂的匹配和处理操作
// 参数: param_1 - 上下文参数, param_2 - 输出参数, param_3 - 搜索条件
// 返回: 处理结果的指针
int64_t * search_and_process_data_items(uint64_t param_1, int64_t *param_2, int64_t param_3)
{
  byte *pbVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  byte *pbVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int64_t *plVar8;
  uint64_t *puVar9;
  int iVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int iVar14;
  int *piVar15;
  uint64_t uVar16;
  int64_t lVar17;
  uint64_t *puVar18;
  uint64_t *puVar19;
  int iVar20;
  bool bVar21;
  int64_t lStackX_18;
  uint64_t uStackX_20;
  int iStack_138;
  int iStack_134;
  uint64_t *puStack_128;
  uint64_t *puStack_120;
  int64_t *plStack_108;
  int64_t *plStack_100;
  int64_t *plStack_f8;
  int32_t uStack_f0;
  int64_t lStack_e8;
  int64_t lStack_e0;
  int64_t lStack_d8;
  int64_t lStack_d0;
  int64_t lStack_c8;
  int64_t lStack_c0;
  int64_t lStack_b8;
  uint64_t *puStack_b0;
  uint64_t *puStack_a8;
  uint64_t *puStack_a0;
  int32_t uStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  int64_t lStack_70;
  int64_t lStack_68;
  uint64_t uStack_60;
  int64_t lStack_58;
  uint64_t uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  lStack_d8 = g_memory_allocator;
  bVar21 = g_memory_allocator == *(int64_t *)(g_memory_allocator + 8);
  lVar6 = g_memory_allocator;
  lVar4 = g_memory_allocator;
  lStackX_18 = param_3;
  while (!bVar21) {
    lVar3 = get_data_structure_head(lVar6);
    lVar17 = 0;
    iVar14 = (int)(*(int64_t *)(lVar3 + 0x30) - *(int64_t *)(lVar3 + 0x28) >> 3);
    if (0 < iVar14) {
      do {
        iVar20 = 0;
        lVar4 = get_data_structure_head(lVar6);
        lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x28) + lVar17 * 8);
        if (*(int64_t *)(lVar4 + 0x30) - *(int64_t *)(lVar4 + 0x28) >> 3 != 0) {
          lVar4 = 0;
          do {
            lVar3 = get_data_structure_head(lVar6);
            lVar3 = *(int64_t *)
                     (lVar4 + *(int64_t *)
                               (*(int64_t *)(*(int64_t *)(lVar3 + 0x28) + lVar17 * 8) + 0x28));
            iVar2 = *(int *)(lVar3 + 0x298);
            iVar10 = *(int *)(param_3 + 0x250);
            if (iVar2 == iVar10) {
              if (iVar2 != 0) {
                pbVar5 = *(byte **)(lVar3 + 0x290);
                lVar12 = *(int64_t *)(param_3 + 0x248) - (int64_t)pbVar5;
                do {
                  pbVar1 = pbVar5 + lVar12;
                  iVar10 = (uint)*pbVar5 - (uint)*pbVar1;
                  if (iVar10 != 0) break;
                  pbVar5 = pbVar5 + 1;
                } while (*pbVar1 != 0);
              }
              // 第一个条件匹配
              if (iVar10 == 0) {
                lVar6 = get_data_structure_head(lVar6);
                *param_2 = lVar3;
                *(int32_t *)(param_2 + 1) = *(int32_t *)(lVar6 + 0x20);
                return param_2;
              }
            }
            else if (iVar2 == 0) {
              // 空字符串匹配
              if (iVar10 == 0) {
                lVar6 = get_data_structure_head(lVar6);
                *param_2 = lVar3;
                *(int32_t *)(param_2 + 1) = *(int32_t *)(lVar6 + 0x20);
                return param_2;
              }
            }
            iVar10 = *(int *)(param_3 + 0x298);
            if (iVar2 == iVar10) {
              if (iVar2 != 0) {
                pbVar5 = *(byte **)(lVar3 + 0x290);
                lVar12 = *(int64_t *)(param_3 + 0x290) - (int64_t)pbVar5;
                do {
                  pbVar1 = pbVar5 + lVar12;
                  iVar10 = (uint)*pbVar5 - (uint)*pbVar1;
                  if (iVar10 != 0) break;
                  pbVar5 = pbVar5 + 1;
                } while (*pbVar1 != 0);
              }
              // 第二个条件匹配
              if (iVar10 == 0) {
                lVar6 = get_data_structure_head(lVar6);
                *param_2 = lVar3;
                *(int32_t *)(param_2 + 1) = *(int32_t *)(lVar6 + 0x20);
                return param_2;
              }
            }
            else if (iVar2 == 0) {
              // 空字符串匹配
              if (iVar10 == 0) {
                lVar6 = get_data_structure_head(lVar6);
                *param_2 = lVar3;
                *(int32_t *)(param_2 + 1) = *(int32_t *)(lVar6 + 0x20);
                return param_2;
              }
            }
            iVar20 = iVar20 + 1;
            lVar4 = lVar4 + 8;
            lVar3 = get_data_structure_head(lVar6);
            lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x28) + lVar17 * 8);
          } while ((uint64_t)(int64_t)iVar20 <
                   (uint64_t)(*(int64_t *)(lVar3 + 0x30) - *(int64_t *)(lVar3 + 0x28) >> 3));
        }
        lVar17 = lVar17 + 1;
        lVar4 = lStack_d8;
      } while (lVar17 < iVar14);
    }
    lVar6 = get_data_structure_head(lVar6);
    bVar21 = lVar6 == *(int64_t *)(lVar4 + 8);
  }
  
  // 处理未找到的情况，进行扩展搜索
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 3;
  initialize_search_context(&lStack_90, &lStackX_18);
  process_search_parameters(param_3, &lStack_90);
  puStack_128 = (uint64_t *)0x0;
  puStack_120 = (uint64_t *)0x0;
  puVar19 = (uint64_t *)0x0;
  iVar14 = 0;
  if (lStack_88 - lStack_90 >> 3 != 0) {
    uStackX_20 = 0;
    lVar6 = lStack_90;
    lVar3 = lStack_88;
    do {
      lVar4 = *(int64_t *)(uStackX_20 + lVar6);
      lVar17 = 0;
      iVar20 = (int)(*(int64_t *)(lVar4 + 0xf8) - *(int64_t *)(lVar4 + 0xf0) >> 3);
      if (0 < iVar20) {
        do {
          if ((-1 < *(char *)(lVar4 + 0x2e8)) ||
             (plVar8 = *(int64_t **)(*(int64_t *)(lVar4 + 0xb0) + lVar17 * 8),
             plVar8 == (int64_t *)0x0)) {
            plVar8 = *(int64_t **)(*(int64_t *)(lVar4 + 0xf0) + lVar17 * 8);
          }
          iVar2 = process_data_item(plVar8);
          if (iVar2 == 0) {
            if (puStack_120 < puVar19) {
              add_item_to_result_list(puStack_120, plVar8 + 0x3e);
              puStack_120 = puStack_120 + 4;
            }
            else {
              lVar6 = (int64_t)puStack_120 - (int64_t)puStack_128 >> 5;
              if (lVar6 == 0) {
                lVar6 = 1;
                puVar7 = (uint64_t *)allocate_memory_from_pool(g_string_constants, lVar6 << 5, 3);
              }
              else {
                lVar6 = lVar6 * 2;
                if (lVar6 != 0) {
                  puVar7 = (uint64_t *)allocate_memory_from_pool(g_string_constants, lVar6 << 5, 3);
                }
                else {
                  puVar7 = (uint64_t *)0x0;
                }
              }
              lVar3 = expand_result_array(puStack_128, puStack_120, puVar7);
              add_item_to_result_list(lVar3, plVar8 + 0x3e);
              for (puVar19 = puStack_128; puVar19 != puStack_120; puVar19 = puVar19 + 4) {
                (*(void (*)(void *, int))*puVar19)(puVar19, 0);
              }
              if (puStack_128 != (uint64_t *)0x0) {
                release_memory_buffer(puStack_128);
              }
              puVar19 = puVar7 + lVar6 * 4;
              puStack_128 = puVar7;
              puStack_120 = (uint64_t *)(lVar3 + 0x20);
            }
          }
          lVar17 = lVar17 + 1;
          lVar6 = lStack_90;
          lVar3 = lStack_88;
        } while (lVar17 < iVar20);
      }
      iVar14 = iVar14 + 1;
      uStackX_20 = uStackX_20 + 8;
      lVar4 = lStack_d8;
    } while ((uint64_t)(int64_t)iVar14 < (uint64_t)(lVar3 - lVar6 >> 3));
  }
  
  // 处理结果并返回
  lVar6 = *(int64_t *)(lVar4 + 8);
  lVar17 = 0;
  lStack_e8 = 0;
  uStackX_20 = uStackX_20 & 0xffffffff00000000;
  lVar3 = lVar6;
  lStack_c0 = lVar6;
  if (lVar6 != lVar4) {
    do {
      iStack_134 = 0;
      lVar12 = *(int64_t *)(lVar6 + 0x28);
      if (*(int64_t *)(lVar6 + 0x30) - lVar12 >> 3 != 0) {
        lStack_e0 = 0;
        do {
          lStack_58 = *(int64_t *)(lStack_e0 + lVar12);
          iStack_138 = 0;
          lVar4 = *(int64_t *)(lStack_58 + 0x28);
          if (*(int64_t *)(lStack_58 + 0x30) - lVar4 >> 3 != 0) {
            uStack_60 = (int64_t)puStack_120 - (int64_t)puStack_128 >> 5;
            lStack_b8 = 0;
            lVar12 = lStack_e8;
            do {
              lStack_e8 = lVar12;
              lVar4 = *(int64_t *)(lStack_b8 + lVar4);
              plStack_108 = (int64_t *)0x0;
              plStack_100 = (int64_t *)0x0;
              plStack_f8 = (int64_t *)0x0;
              uStack_f0 = 3;
              lStack_68 = lVar4;
              plVar8 = (int64_t *)allocate_memory_from_pool(g_string_constants, 8, 3);
              if (plStack_108 != plStack_100) {
                memmove(plVar8, plStack_108, (int64_t)plStack_100 - (int64_t)plStack_108);
              }
              *plVar8 = lVar4;
              if (plStack_108 != (int64_t *)0x0) {
                release_memory_buffer();
              }
              plStack_f8 = plVar8 + 1;
              plStack_108 = plVar8;
              plStack_100 = plVar8 + 1;
              process_search_parameters(lVar4, &plStack_108);
              puStack_b0 = (uint64_t *)0x0;
              puStack_a8 = (uint64_t *)0x0;
              puVar7 = (uint64_t *)0x0;
              puStack_a0 = (uint64_t *)0x0;
              uStack_98 = 3;
              iVar14 = 0;
              puVar19 = (uint64_t *)0x0;
              if ((int64_t)plStack_100 - (int64_t)plStack_108 >> 3 != 0) {
                lStack_c8 = 0;
                plVar8 = plStack_108;
                puVar11 = (uint64_t *)0x0;
                plVar13 = plStack_100;
                puVar18 = puVar19;
                do {
                  lVar4 = *(int64_t *)((int64_t)plVar8 + lStack_c8);
                  lStack_d0 = 0;
                  lStack_70 = (int64_t)
                              (int)(*(int64_t *)(lVar4 + 0xf8) - *(int64_t *)(lVar4 + 0xf0) >> 3);
                  puVar9 = puVar11;
                  puVar19 = puVar18;
                  if (0 < lStack_70) {
                    do {
                      if ((-1 < *(char *)(lVar4 + 0x2e8)) ||
                         (plVar8 = *(int64_t **)(*(int64_t *)(lVar4 + 0xb0) + lStack_d0 * 8),
                         plVar8 == (int64_t *)0x0)) {
                        plVar8 = *(int64_t **)(*(int64_t *)(lVar4 + 0xf0) + lStack_d0 * 8);
                      }
                      iVar20 = process_data_item(plVar8);
                      puVar9 = puVar11;
                      puVar19 = puVar18;
                      if (iVar20 == 0) {
                        if (puVar18 < puVar7) {
                          puVar19 = puVar18 + 4;
                          puStack_a8 = puVar19;
                          add_item_to_result_list(puVar18, plVar8 + 0x3e);
                        }
                        else {
                          lVar3 = (int64_t)puVar18 - (int64_t)puVar11 >> 5;
                          if (lVar3 == 0) {
                            lVar3 = 1;
                            puVar9 = (uint64_t *)allocate_memory_from_pool(g_string_constants, lVar3 << 5, 3);
                          }
                          else {
                            lVar3 = lVar3 * 2;
                            if (lVar3 != 0) {
                              puVar9 = (uint64_t *)allocate_memory_from_pool(g_string_constants, lVar3 << 5, 3);
                            }
                            else {
                              puVar9 = (uint64_t *)0x0;
                            }
                          }
                          lVar17 = expand_result_array(puVar11, puVar18, puVar9);
                          add_item_to_result_list(lVar17, plVar8 + 0x3e);
                          puVar19 = (uint64_t *)(lVar17 + 0x20);
                          for (puVar7 = puVar11; puVar7 != puVar18; puVar7 = puVar7 + 4) {
                            (*(void (*)(void *, int))*puVar7)(puVar7, 0);
                          }
                          if (puVar11 != (uint64_t *)0x0) {
                            release_memory_buffer(puVar11);
                          }
                          puVar7 = puVar9 + lVar3 * 4;
                          puStack_b0 = puVar9;
                          puStack_a8 = puVar19;
                          puStack_a0 = puVar7;
                        }
                      }
                      lStack_d0 = lStack_d0 + 1;
                      plVar8 = plStack_108;
                      puVar11 = puVar9;
                      plVar13 = plStack_100;
                      puVar18 = puVar19;
                    } while (lStack_d0 < lStack_70);
                  }
                  iVar14 = iVar14 + 1;
                  lStack_c8 = lStack_c8 + 8;
                  puVar11 = puVar9;
                  lVar3 = lStack_c0;
                  puVar18 = puVar19;
                  lVar4 = lStack_68;
                } while ((uint64_t)(int64_t)iVar14 <
                         (uint64_t)((int64_t)plVar13 - (int64_t)plVar8 >> 3));
              }
              puVar11 = puStack_b0;
              uVar16 = (int64_t)puVar19 - (int64_t)puStack_b0 >> 5;
              lVar12 = lStack_e8;
              puVar7 = puStack_b0;
              if (uVar16 == uStack_60) {
                iVar14 = 0;
                if (uVar16 != 0) {
                  piVar15 = (int *)(puStack_128 + 2);
                  do {
                    iVar20 = *(int *)((int64_t)piVar15 +
                                     ((int64_t)puStack_b0 - (int64_t)puStack_128));
                    iVar2 = *piVar15;
                    if (iVar20 == iVar2) {
                      if (iVar20 != 0) {
                        pbVar5 = *(byte **)((int64_t)piVar15 +
                                           ((int64_t)puStack_b0 - (int64_t)puStack_128) + -8);
                        lVar17 = *(int64_t *)(piVar15 + -2) - (int64_t)pbVar5;
                        do {
                          pbVar1 = pbVar5 + lVar17;
                          iVar2 = (uint)*pbVar5 - (uint)*pbVar1;
                          if (iVar2 != 0) break;
                          pbVar5 = pbVar5 + 1;
                        } while (*pbVar1 != 0);
                      }
                    }
                    else if (iVar20 != 0) break;
                    if (iVar2 != 0) break;
                    iVar14 = iVar14 + 1;
                    piVar15 = piVar15 + 8;
                  } while ((uint64_t)(int64_t)iVar14 < uVar16);
                }
                if ((int)uStackX_20 < iVar14) {
                  uStackX_20 = CONCAT44(uStackX_20._4_4_, iVar14);
                  lVar12 = lVar4;
                  lStack_c0 = lVar6;
                  lStack_e8 = lVar4;
                  lVar3 = lVar6;
                }
              }
              for (; lVar4 = lStack_e8, puVar7 != puVar19; puVar7 = puVar7 + 4) {
                lStack_e8 = lVar12;
                (*(void (*)(void *, int))*puVar7)(puVar7, 0);
                lVar12 = lStack_e8;
                lStack_e8 = lVar4;
              }
              if (puVar11 != (uint64_t *)0x0) {
                lStack_e8 = lVar12;
                release_memory_buffer(puVar11);
              }
              if (plStack_108 != (int64_t *)0x0) {
                lStack_e8 = lVar12;
                release_memory_buffer();
              }
              iStack_138 = iStack_138 + 1;
              lStack_b8 = lStack_b8 + 8;
              lVar4 = *(int64_t *)(lStack_58 + 0x28);
            } while ((uint64_t)(int64_t)iStack_138 <
                     (uint64_t)(*(int64_t *)(lStack_58 + 0x30) - lVar4 >> 3));
            plStack_108 = (int64_t *)0x0;
            lVar17 = lStack_e8;
            lStack_e8 = lVar12;
          }
          iStack_134 = iStack_134 + 1;
          lStack_e0 = lStack_e0 + 8;
          lVar12 = *(int64_t *)(lVar6 + 0x28);
          lVar4 = lStack_d8;
        } while ((uint64_t)(int64_t)iStack_134 <
                 (uint64_t)(*(int64_t *)(lVar6 + 0x30) - lVar12 >> 3));
      }
      lVar6 = get_next_data_structure();
    } while (lVar6 != lVar4);
  }
  *param_2 = lVar17;
  *(int32_t *)(param_2 + 1) = *(int32_t *)(lVar3 + 0x20);
  for (puVar19 = puStack_128; puVar19 != puStack_120; puVar19 = puVar19 + 4) {
    (*(void (*)(void *, int))*puVar19)(puVar19, 0);
  }
  if (puStack_128 == (uint64_t *)0x0) {
    if (lStack_90 == 0) {
      return param_2;
    }
    release_memory_buffer();
  }
  release_memory_buffer(puStack_128);
}

// 函数: void collect_data_from_structure(int64_t param_1, uint64_t *param_2)
// 功能: 从数据结构中收集数据项并存储到结果数组中
// 参数: param_1 - 数据结构起始地址, param_2 - 结果数组参数
void collect_data_from_structure(int64_t param_1, uint64_t *param_2)
{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  int64_t lVar8;
  int iStackX_18;
  int iStackX_20;
  
  lVar4 = *(int64_t *)(param_1 + 8);
  do {
    if (lVar4 == param_1) {
      return;
    }
    lVar2 = *(int64_t *)(lVar4 + 0x28);
    iStackX_20 = 0;
    if (*(int64_t *)(lVar4 + 0x30) - lVar2 >> 3 != 0) {
      lVar8 = 0;
      do {
        iStackX_18 = 0;
        if (*(int64_t *)(*(int64_t *)(lVar2 + lVar8) + 0x30) -
            *(int64_t *)(*(int64_t *)(lVar2 + lVar8) + 0x28) >> 3 != 0) {
          lVar7 = 0;
          do {
            puVar6 = (uint64_t *)param_2[1];
            uVar1 = *(uint64_t *)(lVar7 + *(int64_t *)(*(int64_t *)(lVar2 + lVar8) + 0x28));
            if (puVar6 < (uint64_t *)param_2[2]) {
              param_2[1] = (uint64_t)(puVar6 + 1);
              *puVar6 = uVar1;
            }
            else {
              puVar5 = (uint64_t *)*param_2;
              lVar2 = (int64_t)puVar6 - (int64_t)puVar5 >> 3;
              if (lVar2 == 0) {
                lVar2 = 1;
                puVar3 = (uint64_t *)allocate_memory_from_pool(g_string_constants, lVar2 * 8, (char)param_2[3]);
                puVar5 = (uint64_t *)*param_2;
                puVar6 = (uint64_t *)param_2[1];
              }
              else {
                lVar2 = lVar2 * 2;
                if (lVar2 != 0) {
                  puVar3 = (uint64_t *)allocate_memory_from_pool(g_string_constants, lVar2 * 8, (char)param_2[3]);
                }
                else {
                  puVar3 = (uint64_t *)0x0;
                }
              }
              if (puVar5 != puVar6) {
                memmove(puVar3, puVar5, (int64_t)puVar6 - (int64_t)puVar5);
              }
              *puVar3 = uVar1;
              if (*param_2 != 0) {
                release_memory_buffer();
              }
              param_2[2] = (uint64_t)(puVar3 + lVar2);
              *param_2 = (uint64_t)puVar3;
              param_2[1] = (uint64_t)(puVar3 + 1);
            }
            lVar2 = *(int64_t *)(lVar4 + 0x28);
            iStackX_18 = iStackX_18 + 1;
            lVar7 = lVar7 + 8;
          } while ((uint64_t)(int64_t)iStackX_18 <
                   (uint64_t)
                   (*(int64_t *)(*(int64_t *)(lVar2 + lVar8) + 0x30) -
                    *(int64_t *)(*(int64_t *)(lVar2 + lVar8) + 0x28) >> 3));
        }
        iStackX_20 = iStackX_20 + 1;
        lVar8 = lVar8 + 8;
      } while ((uint64_t)(int64_t)iStackX_20 <
               (uint64_t)(*(int64_t *)(lVar4 + 0x30) - lVar2 >> 3));
    }
    lVar4 = get_next_data_structure(lVar4);
  } while( true );
}

// 函数: void collect_data_from_structure_optimized(void)
// 功能: 优化版本的数据结构收集函数，使用寄存器变量提高性能
void collect_data_from_structure_optimized(void)
{
  uint64_t uVar1;
  int64_t in_RAX;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t *puVar5;
  uint64_t *unaff_RDI;
  uint64_t unaff_R12;
  int64_t lVar6;
  uint64_t unaff_R13;
  int64_t lVar7;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int64_t in_stack_00000060;
  int iStack0000000000000070;
  int iStack0000000000000078;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  do {
    lVar2 = *(int64_t *)(unaff_RBX + 0x28);
    iStack0000000000000078 = 0;
    if (*(int64_t *)(unaff_RBX + 0x30) - lVar2 >> 3 != 0) {
      lVar7 = 0;
      do {
        iStack0000000000000070 = 0;
        if (*(int64_t *)(*(int64_t *)(lVar2 + lVar7) + 0x30) -
            *(int64_t *)(*(int64_t *)(lVar2 + lVar7) + 0x28) >> 3 != 0) {
          lVar6 = 0;
          do {
            puVar5 = (uint64_t *)unaff_RDI[1];
            uVar1 = *(uint64_t *)(lVar6 + *(int64_t *)(*(int64_t *)(lVar2 + lVar7) + 0x28));
            if (puVar5 < (uint64_t *)unaff_RDI[2]) {
              unaff_RDI[1] = (uint64_t)(puVar5 + 1);
              *puVar5 = uVar1;
            }
            else {
              puVar4 = (uint64_t *)*unaff_RDI;
              lVar2 = (int64_t)puVar5 - (int64_t)puVar4 >> 3;
              if (lVar2 == 0) {
                lVar2 = 1;
                puVar3 = (uint64_t *)allocate_memory_from_pool(g_string_constants, lVar2 * 8, (char)unaff_RDI[3]);
                puVar4 = (uint64_t *)*unaff_RDI;
                puVar5 = (uint64_t *)unaff_RDI[1];
              }
              else {
                lVar2 = lVar2 * 2;
                if (lVar2 != 0) {
                  puVar3 = (uint64_t *)allocate_memory_from_pool(g_string_constants, lVar2 * 8, (char)unaff_RDI[3]);
                }
                else {
                  puVar3 = (uint64_t *)0x0;
                }
              }
              if (puVar4 != puVar5) {
                memmove(puVar3, puVar4, (int64_t)puVar5 - (int64_t)puVar4);
              }
              *puVar3 = uVar1;
              if (*unaff_RDI != 0) {
                release_memory_buffer();
              }
              unaff_RDI[2] = (uint64_t)(puVar3 + lVar2);
              *unaff_RDI = (uint64_t)puVar3;
              unaff_RDI[1] = (uint64_t)(puVar3 + 1);
            }
            lVar2 = *(int64_t *)(unaff_RBX + 0x28);
            iStack0000000000000070 = iStack0000000000000070 + 1;
            lVar6 = lVar6 + 8;
          } while ((uint64_t)(int64_t)iStack0000000000000070 <
                   (uint64_t)
                   (*(int64_t *)(*(int64_t *)(lVar2 + lVar7) + 0x30) -
                    *(int64_t *)(*(int64_t *)(lVar2 + lVar7) + 0x28) >> 3));
        }
        iStack0000000000000078 = iStack0000000000000078 + 1;
        lVar7 = lVar7 + 8;
      } while ((uint64_t)(int64_t)iStack0000000000000078 <
               (uint64_t)(*(int64_t *)(unaff_RBX + 0x30) - lVar2 >> 3));
    }
    unaff_RBX = get_next_data_structure(unaff_RBX);
    if (unaff_RBX == in_stack_00000060) {
      return;
    }
  } while( true );
}

// 函数: void execute_data_collection_cleanup(void)
// 功能: 执行数据收集后的清理操作
void execute_data_collection_cleanup(void)
{
  return;
}