#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part243.c - 核心引擎模块第243部分
// 本文件包含6个函数，主要用于字符串处理、数据结构遍历和内存管理

// 全局变量定义
ulonglong g_string_buffer_size = _DAT_180bf00a8;  // 字符串缓冲区大小
longlong g_memory_allocator = _DAT_180c868e8;     // 内存分配器
longlong g_string_constants = _DAT_180c8ed18;     // 字符串常量池
char g_empty_string[] = "";                       // 空字符串常量
undefined8 g_string_suffix = UNK_180a3c3e0;        // 字符串后缀标记
undefined8 g_string_prefix = UNK_180a0ffc0;        // 字符串前缀标记
undefined8 g_null_terminator = UNK_18098bcb0;      // 空终止符标记

// 函数: void process_string_batch(undefined8 param_1, longlong *param_2)
// 功能: 批量处理字符串数据，进行字符串格式化、编码转换和内存管理
// 参数: param_1 - 上下文参数, param_2 - 字符串数组指针
void process_string_batch(undefined8 param_1, longlong *param_2)
{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_2c8 [32];
  undefined *puStack_2a8;
  char *pcStack_2a0;
  uint uStack_298;
  ulonglong uStack_290;
  undefined *puStack_288;
  undefined1 *puStack_280;
  undefined4 uStack_278;
  ulonglong uStack_270;
  undefined *puStack_268;
  undefined1 *puStack_260;
  undefined4 uStack_258;
  ulonglong uStack_250;
  undefined8 uStack_248;
  char acStack_238 [512];
  ulonglong uStack_38;
  
  uStack_248 = 0xfffffffffffffffe;
  uStack_38 = g_string_buffer_size ^ (ulonglong)auStack_2c8;
  uVar11 = 0;
  lVar9 = *param_2;
  uVar13 = uVar11;
  if (param_2[1] - lVar9 >> 3 != 0) {
    do {
      lVar9 = *(longlong *)(uVar11 + lVar9);
      puStack_2a8 = &g_string_suffix;
      uStack_290 = 0;
      pcStack_2a0 = (char *)0x0;
      uStack_298 = 0;
      allocate_string_buffer(&puStack_2a8, *(undefined4 *)(lVar9 + 0x298));
      pcVar1 = pcStack_2a0;
      if (*(int *)(lVar9 + 0x298) != 0) {
        // 复制字符串内容
        memcpy(pcStack_2a0, *(undefined8 *)(lVar9 + 0x290), *(int *)(lVar9 + 0x298) + 1);
      }
      if (*(longlong *)(lVar9 + 0x290) != 0) {
        uStack_298 = 0;
        if (pcStack_2a0 != (char *)0x0) {
          *pcStack_2a0 = '\0';
        }
        uStack_290 = uStack_290 & 0xffffffff;
      }
      if (uStack_298 != 0) {
        uVar10 = (ulonglong)uStack_298;
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
      puStack_280 = (undefined1 *)0x0;
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
        puVar5 = (undefined1 *)allocate_memory_from_pool(g_string_constants, (longlong)iVar3, 0x13);
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
      if (puStack_280 != (undefined1 *)0x0) {
        release_memory_buffer();
      }
      puStack_280 = (undefined1 *)0x0;
      uStack_270 = uStack_270 & 0xffffffff00000000;
      puStack_288 = &g_null_terminator;
      if (cVar2 != '\0') {
        puStack_268 = &g_string_suffix;
        uStack_250 = 0;
        puStack_260 = (undefined1 *)0x0;
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
          puVar5 = (undefined1 *)allocate_memory_from_pool(g_string_constants, (longlong)iVar3, 0x13);
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
        if (puStack_260 != (undefined1 *)0x0) {
          release_memory_buffer();
        }
        puStack_260 = (undefined1 *)0x0;
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
      uVar13 = (ulonglong)uVar12;
    } while ((ulonglong)(longlong)(int)uVar12 < (ulonglong)(param_2[1] - lVar9 >> 3));
  }
  // 执行清理操作
  execute_cleanup_routine(uStack_38 ^ (ulonglong)auStack_2c8);
}

// 函数: undefined8 find_string_in_data_structure(longlong param_1, longlong param_2)
// 功能: 在复杂数据结构中查找匹配的字符串项
// 参数: param_1 - 数据结构起始地址, param_2 - 查找参数结构
// 返回: 找到的项的地址，未找到返回0
undefined8 find_string_in_data_structure(longlong param_1, longlong param_2)
{
  longlong *plVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  
  if ((*(int *)(param_2 + 0x10) != 0) &&
     (plVar1 = (longlong *)(param_1 + 8), param_1 != *(longlong *)(param_1 + 8))) {
    do {
      lVar12 = 0;
      for (iVar7 = 0; lVar4 = get_data_structure_head(param_1),
          (ulonglong)(longlong)iVar7 <
          (ulonglong)(*(longlong *)(lVar4 + 0x30) - *(longlong *)(lVar4 + 0x28) >> 3);
          iVar7 = iVar7 + 1) {
        lVar4 = get_data_structure_head(param_1);
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x28) + lVar12);
        plVar11 = *(longlong **)(lVar4 + 0x28);
        lVar8 = *(longlong *)(lVar4 + 0x30) - (longlong)plVar11;
        for (iVar10 = 0; (ulonglong)(longlong)iVar10 < (ulonglong)(lVar8 >> 3); iVar10 = iVar10 + 1)
        {
          iVar6 = *(int *)(param_2 + 0x10);
          iVar3 = *(int *)(*plVar11 + 0x298);
          if (iVar3 == iVar6) {
            if (iVar3 != 0) {
              pbVar5 = *(byte **)(*plVar11 + 0x290);
              lVar9 = *(longlong *)(param_2 + 8) - (longlong)pbVar5;
              do {
                pbVar2 = pbVar5 + lVar9;
                iVar6 = (uint)*pbVar5 - (uint)*pbVar2;
                if (iVar6 != 0) break;
                pbVar5 = pbVar5 + 1;
              } while (*pbVar2 != 0);
            }
            // 找到匹配项
            if (iVar6 == 0) {
              return *(undefined8 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar10 * 8);
            }
          }
          else if (iVar3 == 0) {
            // 空字符串匹配
            if (iVar6 == 0) {
              return *(undefined8 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar10 * 8);
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

// 函数: longlong * search_and_process_data_items(undefined8 param_1, longlong *param_2, longlong param_3)
// 功能: 搜索并处理数据项，进行复杂的匹配和处理操作
// 参数: param_1 - 上下文参数, param_2 - 输出参数, param_3 - 搜索条件
// 返回: 处理结果的指针
longlong * search_and_process_data_items(undefined8 param_1, longlong *param_2, longlong param_3)
{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  int *piVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  bool bVar21;
  longlong lStackX_18;
  ulonglong uStackX_20;
  int iStack_138;
  int iStack_134;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  longlong *plStack_108;
  longlong *plStack_100;
  longlong *plStack_f8;
  undefined4 uStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined4 uStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  longlong lStack_70;
  longlong lStack_68;
  ulonglong uStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  lStack_d8 = g_memory_allocator;
  bVar21 = g_memory_allocator == *(longlong *)(g_memory_allocator + 8);
  lVar6 = g_memory_allocator;
  lVar4 = g_memory_allocator;
  lStackX_18 = param_3;
  while (!bVar21) {
    lVar3 = get_data_structure_head(lVar6);
    lVar17 = 0;
    iVar14 = (int)(*(longlong *)(lVar3 + 0x30) - *(longlong *)(lVar3 + 0x28) >> 3);
    if (0 < iVar14) {
      do {
        iVar20 = 0;
        lVar4 = get_data_structure_head(lVar6);
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x28) + lVar17 * 8);
        if (*(longlong *)(lVar4 + 0x30) - *(longlong *)(lVar4 + 0x28) >> 3 != 0) {
          lVar4 = 0;
          do {
            lVar3 = get_data_structure_head(lVar6);
            lVar3 = *(longlong *)
                     (lVar4 + *(longlong *)
                               (*(longlong *)(*(longlong *)(lVar3 + 0x28) + lVar17 * 8) + 0x28));
            iVar2 = *(int *)(lVar3 + 0x298);
            iVar10 = *(int *)(param_3 + 0x250);
            if (iVar2 == iVar10) {
              if (iVar2 != 0) {
                pbVar5 = *(byte **)(lVar3 + 0x290);
                lVar12 = *(longlong *)(param_3 + 0x248) - (longlong)pbVar5;
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
                *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar6 + 0x20);
                return param_2;
              }
            }
            else if (iVar2 == 0) {
              // 空字符串匹配
              if (iVar10 == 0) {
                lVar6 = get_data_structure_head(lVar6);
                *param_2 = lVar3;
                *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar6 + 0x20);
                return param_2;
              }
            }
            iVar10 = *(int *)(param_3 + 0x298);
            if (iVar2 == iVar10) {
              if (iVar2 != 0) {
                pbVar5 = *(byte **)(lVar3 + 0x290);
                lVar12 = *(longlong *)(param_3 + 0x290) - (longlong)pbVar5;
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
                *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar6 + 0x20);
                return param_2;
              }
            }
            else if (iVar2 == 0) {
              // 空字符串匹配
              if (iVar10 == 0) {
                lVar6 = get_data_structure_head(lVar6);
                *param_2 = lVar3;
                *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar6 + 0x20);
                return param_2;
              }
            }
            iVar20 = iVar20 + 1;
            lVar4 = lVar4 + 8;
            lVar3 = get_data_structure_head(lVar6);
            lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x28) + lVar17 * 8);
          } while ((ulonglong)(longlong)iVar20 <
                   (ulonglong)(*(longlong *)(lVar3 + 0x30) - *(longlong *)(lVar3 + 0x28) >> 3));
        }
        lVar17 = lVar17 + 1;
        lVar4 = lStack_d8;
      } while (lVar17 < iVar14);
    }
    lVar6 = get_data_structure_head(lVar6);
    bVar21 = lVar6 == *(longlong *)(lVar4 + 8);
  }
  
  // 处理未找到的情况，进行扩展搜索
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 3;
  initialize_search_context(&lStack_90, &lStackX_18);
  process_search_parameters(param_3, &lStack_90);
  puStack_128 = (undefined8 *)0x0;
  puStack_120 = (undefined8 *)0x0;
  puVar19 = (undefined8 *)0x0;
  iVar14 = 0;
  if (lStack_88 - lStack_90 >> 3 != 0) {
    uStackX_20 = 0;
    lVar6 = lStack_90;
    lVar3 = lStack_88;
    do {
      lVar4 = *(longlong *)(uStackX_20 + lVar6);
      lVar17 = 0;
      iVar20 = (int)(*(longlong *)(lVar4 + 0xf8) - *(longlong *)(lVar4 + 0xf0) >> 3);
      if (0 < iVar20) {
        do {
          if ((-1 < *(char *)(lVar4 + 0x2e8)) ||
             (plVar8 = *(longlong **)(*(longlong *)(lVar4 + 0xb0) + lVar17 * 8),
             plVar8 == (longlong *)0x0)) {
            plVar8 = *(longlong **)(*(longlong *)(lVar4 + 0xf0) + lVar17 * 8);
          }
          iVar2 = process_data_item(plVar8);
          if (iVar2 == 0) {
            if (puStack_120 < puVar19) {
              add_item_to_result_list(puStack_120, plVar8 + 0x3e);
              puStack_120 = puStack_120 + 4;
            }
            else {
              lVar6 = (longlong)puStack_120 - (longlong)puStack_128 >> 5;
              if (lVar6 == 0) {
                lVar6 = 1;
                puVar7 = (undefined8 *)allocate_memory_from_pool(g_string_constants, lVar6 << 5, 3);
              }
              else {
                lVar6 = lVar6 * 2;
                if (lVar6 != 0) {
                  puVar7 = (undefined8 *)allocate_memory_from_pool(g_string_constants, lVar6 << 5, 3);
                }
                else {
                  puVar7 = (undefined8 *)0x0;
                }
              }
              lVar3 = expand_result_array(puStack_128, puStack_120, puVar7);
              add_item_to_result_list(lVar3, plVar8 + 0x3e);
              for (puVar19 = puStack_128; puVar19 != puStack_120; puVar19 = puVar19 + 4) {
                (*(void (*)(void *, int))*puVar19)(puVar19, 0);
              }
              if (puStack_128 != (undefined8 *)0x0) {
                release_memory_buffer(puStack_128);
              }
              puVar19 = puVar7 + lVar6 * 4;
              puStack_128 = puVar7;
              puStack_120 = (undefined8 *)(lVar3 + 0x20);
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
    } while ((ulonglong)(longlong)iVar14 < (ulonglong)(lVar3 - lVar6 >> 3));
  }
  
  // 处理结果并返回
  lVar6 = *(longlong *)(lVar4 + 8);
  lVar17 = 0;
  lStack_e8 = 0;
  uStackX_20 = uStackX_20 & 0xffffffff00000000;
  lVar3 = lVar6;
  lStack_c0 = lVar6;
  if (lVar6 != lVar4) {
    do {
      iStack_134 = 0;
      lVar12 = *(longlong *)(lVar6 + 0x28);
      if (*(longlong *)(lVar6 + 0x30) - lVar12 >> 3 != 0) {
        lStack_e0 = 0;
        do {
          lStack_58 = *(longlong *)(lStack_e0 + lVar12);
          iStack_138 = 0;
          lVar4 = *(longlong *)(lStack_58 + 0x28);
          if (*(longlong *)(lStack_58 + 0x30) - lVar4 >> 3 != 0) {
            uStack_60 = (longlong)puStack_120 - (longlong)puStack_128 >> 5;
            lStack_b8 = 0;
            lVar12 = lStack_e8;
            do {
              lStack_e8 = lVar12;
              lVar4 = *(longlong *)(lStack_b8 + lVar4);
              plStack_108 = (longlong *)0x0;
              plStack_100 = (longlong *)0x0;
              plStack_f8 = (longlong *)0x0;
              uStack_f0 = 3;
              lStack_68 = lVar4;
              plVar8 = (longlong *)allocate_memory_from_pool(g_string_constants, 8, 3);
              if (plStack_108 != plStack_100) {
                memmove(plVar8, plStack_108, (longlong)plStack_100 - (longlong)plStack_108);
              }
              *plVar8 = lVar4;
              if (plStack_108 != (longlong *)0x0) {
                release_memory_buffer();
              }
              plStack_f8 = plVar8 + 1;
              plStack_108 = plVar8;
              plStack_100 = plVar8 + 1;
              process_search_parameters(lVar4, &plStack_108);
              puStack_b0 = (undefined8 *)0x0;
              puStack_a8 = (undefined8 *)0x0;
              puVar7 = (undefined8 *)0x0;
              puStack_a0 = (undefined8 *)0x0;
              uStack_98 = 3;
              iVar14 = 0;
              puVar19 = (undefined8 *)0x0;
              if ((longlong)plStack_100 - (longlong)plStack_108 >> 3 != 0) {
                lStack_c8 = 0;
                plVar8 = plStack_108;
                puVar11 = (undefined8 *)0x0;
                plVar13 = plStack_100;
                puVar18 = puVar19;
                do {
                  lVar4 = *(longlong *)((longlong)plVar8 + lStack_c8);
                  lStack_d0 = 0;
                  lStack_70 = (longlong)
                              (int)(*(longlong *)(lVar4 + 0xf8) - *(longlong *)(lVar4 + 0xf0) >> 3);
                  puVar9 = puVar11;
                  puVar19 = puVar18;
                  if (0 < lStack_70) {
                    do {
                      if ((-1 < *(char *)(lVar4 + 0x2e8)) ||
                         (plVar8 = *(longlong **)(*(longlong *)(lVar4 + 0xb0) + lStack_d0 * 8),
                         plVar8 == (longlong *)0x0)) {
                        plVar8 = *(longlong **)(*(longlong *)(lVar4 + 0xf0) + lStack_d0 * 8);
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
                          lVar3 = (longlong)puVar18 - (longlong)puVar11 >> 5;
                          if (lVar3 == 0) {
                            lVar3 = 1;
                            puVar9 = (undefined8 *)allocate_memory_from_pool(g_string_constants, lVar3 << 5, 3);
                          }
                          else {
                            lVar3 = lVar3 * 2;
                            if (lVar3 != 0) {
                              puVar9 = (undefined8 *)allocate_memory_from_pool(g_string_constants, lVar3 << 5, 3);
                            }
                            else {
                              puVar9 = (undefined8 *)0x0;
                            }
                          }
                          lVar17 = expand_result_array(puVar11, puVar18, puVar9);
                          add_item_to_result_list(lVar17, plVar8 + 0x3e);
                          puVar19 = (undefined8 *)(lVar17 + 0x20);
                          for (puVar7 = puVar11; puVar7 != puVar18; puVar7 = puVar7 + 4) {
                            (*(void (*)(void *, int))*puVar7)(puVar7, 0);
                          }
                          if (puVar11 != (undefined8 *)0x0) {
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
                } while ((ulonglong)(longlong)iVar14 <
                         (ulonglong)((longlong)plVar13 - (longlong)plVar8 >> 3));
              }
              puVar11 = puStack_b0;
              uVar16 = (longlong)puVar19 - (longlong)puStack_b0 >> 5;
              lVar12 = lStack_e8;
              puVar7 = puStack_b0;
              if (uVar16 == uStack_60) {
                iVar14 = 0;
                if (uVar16 != 0) {
                  piVar15 = (int *)(puStack_128 + 2);
                  do {
                    iVar20 = *(int *)((longlong)piVar15 +
                                     ((longlong)puStack_b0 - (longlong)puStack_128));
                    iVar2 = *piVar15;
                    if (iVar20 == iVar2) {
                      if (iVar20 != 0) {
                        pbVar5 = *(byte **)((longlong)piVar15 +
                                           ((longlong)puStack_b0 - (longlong)puStack_128) + -8);
                        lVar17 = *(longlong *)(piVar15 + -2) - (longlong)pbVar5;
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
                  } while ((ulonglong)(longlong)iVar14 < uVar16);
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
              if (puVar11 != (undefined8 *)0x0) {
                lStack_e8 = lVar12;
                release_memory_buffer(puVar11);
              }
              if (plStack_108 != (longlong *)0x0) {
                lStack_e8 = lVar12;
                release_memory_buffer();
              }
              iStack_138 = iStack_138 + 1;
              lStack_b8 = lStack_b8 + 8;
              lVar4 = *(longlong *)(lStack_58 + 0x28);
            } while ((ulonglong)(longlong)iStack_138 <
                     (ulonglong)(*(longlong *)(lStack_58 + 0x30) - lVar4 >> 3));
            plStack_108 = (longlong *)0x0;
            lVar17 = lStack_e8;
            lStack_e8 = lVar12;
          }
          iStack_134 = iStack_134 + 1;
          lStack_e0 = lStack_e0 + 8;
          lVar12 = *(longlong *)(lVar6 + 0x28);
          lVar4 = lStack_d8;
        } while ((ulonglong)(longlong)iStack_134 <
                 (ulonglong)(*(longlong *)(lVar6 + 0x30) - lVar12 >> 3));
      }
      lVar6 = get_next_data_structure();
    } while (lVar6 != lVar4);
  }
  *param_2 = lVar17;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar3 + 0x20);
  for (puVar19 = puStack_128; puVar19 != puStack_120; puVar19 = puVar19 + 4) {
    (*(void (*)(void *, int))*puVar19)(puVar19, 0);
  }
  if (puStack_128 == (undefined8 *)0x0) {
    if (lStack_90 == 0) {
      return param_2;
    }
    release_memory_buffer();
  }
  release_memory_buffer(puStack_128);
}

// 函数: void collect_data_from_structure(longlong param_1, ulonglong *param_2)
// 功能: 从数据结构中收集数据项并存储到结果数组中
// 参数: param_1 - 数据结构起始地址, param_2 - 结果数组参数
void collect_data_from_structure(longlong param_1, ulonglong *param_2)
{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iStackX_18;
  int iStackX_20;
  
  lVar4 = *(longlong *)(param_1 + 8);
  do {
    if (lVar4 == param_1) {
      return;
    }
    lVar2 = *(longlong *)(lVar4 + 0x28);
    iStackX_20 = 0;
    if (*(longlong *)(lVar4 + 0x30) - lVar2 >> 3 != 0) {
      lVar8 = 0;
      do {
        iStackX_18 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + lVar8) + 0x30) -
            *(longlong *)(*(longlong *)(lVar2 + lVar8) + 0x28) >> 3 != 0) {
          lVar7 = 0;
          do {
            puVar6 = (undefined8 *)param_2[1];
            uVar1 = *(undefined8 *)(lVar7 + *(longlong *)(*(longlong *)(lVar2 + lVar8) + 0x28));
            if (puVar6 < (undefined8 *)param_2[2]) {
              param_2[1] = (ulonglong)(puVar6 + 1);
              *puVar6 = uVar1;
            }
            else {
              puVar5 = (undefined8 *)*param_2;
              lVar2 = (longlong)puVar6 - (longlong)puVar5 >> 3;
              if (lVar2 == 0) {
                lVar2 = 1;
                puVar3 = (undefined8 *)allocate_memory_from_pool(g_string_constants, lVar2 * 8, (char)param_2[3]);
                puVar5 = (undefined8 *)*param_2;
                puVar6 = (undefined8 *)param_2[1];
              }
              else {
                lVar2 = lVar2 * 2;
                if (lVar2 != 0) {
                  puVar3 = (undefined8 *)allocate_memory_from_pool(g_string_constants, lVar2 * 8, (char)param_2[3]);
                }
                else {
                  puVar3 = (undefined8 *)0x0;
                }
              }
              if (puVar5 != puVar6) {
                memmove(puVar3, puVar5, (longlong)puVar6 - (longlong)puVar5);
              }
              *puVar3 = uVar1;
              if (*param_2 != 0) {
                release_memory_buffer();
              }
              param_2[2] = (ulonglong)(puVar3 + lVar2);
              *param_2 = (ulonglong)puVar3;
              param_2[1] = (ulonglong)(puVar3 + 1);
            }
            lVar2 = *(longlong *)(lVar4 + 0x28);
            iStackX_18 = iStackX_18 + 1;
            lVar7 = lVar7 + 8;
          } while ((ulonglong)(longlong)iStackX_18 <
                   (ulonglong)
                   (*(longlong *)(*(longlong *)(lVar2 + lVar8) + 0x30) -
                    *(longlong *)(*(longlong *)(lVar2 + lVar8) + 0x28) >> 3));
        }
        iStackX_20 = iStackX_20 + 1;
        lVar8 = lVar8 + 8;
      } while ((ulonglong)(longlong)iStackX_20 <
               (ulonglong)(*(longlong *)(lVar4 + 0x30) - lVar2 >> 3));
    }
    lVar4 = get_next_data_structure(lVar4);
  } while( true );
}

// 函数: void collect_data_from_structure_optimized(void)
// 功能: 优化版本的数据结构收集函数，使用寄存器变量提高性能
void collect_data_from_structure_optimized(void)
{
  undefined8 uVar1;
  longlong in_RAX;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 *puVar5;
  ulonglong *unaff_RDI;
  undefined8 unaff_R12;
  longlong lVar6;
  undefined8 unaff_R13;
  longlong lVar7;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  longlong in_stack_00000060;
  int iStack0000000000000070;
  int iStack0000000000000078;
  
  *(undefined8 *)(in_RAX + 0x10) = unaff_RBP;
  *(undefined8 *)(in_RAX + -0x18) = unaff_RSI;
  *(undefined8 *)(in_RAX + -0x20) = unaff_R12;
  *(undefined8 *)(in_RAX + -0x28) = unaff_R13;
  *(undefined8 *)(in_RAX + -0x30) = unaff_R14;
  *(undefined8 *)(in_RAX + -0x38) = unaff_R15;
  do {
    lVar2 = *(longlong *)(unaff_RBX + 0x28);
    iStack0000000000000078 = 0;
    if (*(longlong *)(unaff_RBX + 0x30) - lVar2 >> 3 != 0) {
      lVar7 = 0;
      do {
        iStack0000000000000070 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + lVar7) + 0x30) -
            *(longlong *)(*(longlong *)(lVar2 + lVar7) + 0x28) >> 3 != 0) {
          lVar6 = 0;
          do {
            puVar5 = (undefined8 *)unaff_RDI[1];
            uVar1 = *(undefined8 *)(lVar6 + *(longlong *)(*(longlong *)(lVar2 + lVar7) + 0x28));
            if (puVar5 < (undefined8 *)unaff_RDI[2]) {
              unaff_RDI[1] = (ulonglong)(puVar5 + 1);
              *puVar5 = uVar1;
            }
            else {
              puVar4 = (undefined8 *)*unaff_RDI;
              lVar2 = (longlong)puVar5 - (longlong)puVar4 >> 3;
              if (lVar2 == 0) {
                lVar2 = 1;
                puVar3 = (undefined8 *)allocate_memory_from_pool(g_string_constants, lVar2 * 8, (char)unaff_RDI[3]);
                puVar4 = (undefined8 *)*unaff_RDI;
                puVar5 = (undefined8 *)unaff_RDI[1];
              }
              else {
                lVar2 = lVar2 * 2;
                if (lVar2 != 0) {
                  puVar3 = (undefined8 *)allocate_memory_from_pool(g_string_constants, lVar2 * 8, (char)unaff_RDI[3]);
                }
                else {
                  puVar3 = (undefined8 *)0x0;
                }
              }
              if (puVar4 != puVar5) {
                memmove(puVar3, puVar4, (longlong)puVar5 - (longlong)puVar4);
              }
              *puVar3 = uVar1;
              if (*unaff_RDI != 0) {
                release_memory_buffer();
              }
              unaff_RDI[2] = (ulonglong)(puVar3 + lVar2);
              *unaff_RDI = (ulonglong)puVar3;
              unaff_RDI[1] = (ulonglong)(puVar3 + 1);
            }
            lVar2 = *(longlong *)(unaff_RBX + 0x28);
            iStack0000000000000070 = iStack0000000000000070 + 1;
            lVar6 = lVar6 + 8;
          } while ((ulonglong)(longlong)iStack0000000000000070 <
                   (ulonglong)
                   (*(longlong *)(*(longlong *)(lVar2 + lVar7) + 0x30) -
                    *(longlong *)(*(longlong *)(lVar2 + lVar7) + 0x28) >> 3));
        }
        iStack0000000000000078 = iStack0000000000000078 + 1;
        lVar7 = lVar7 + 8;
      } while ((ulonglong)(longlong)iStack0000000000000078 <
               (ulonglong)(*(longlong *)(unaff_RBX + 0x30) - lVar2 >> 3));
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