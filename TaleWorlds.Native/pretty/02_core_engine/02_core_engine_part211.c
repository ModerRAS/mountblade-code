#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part211.c - 核心引擎模块第211部分
// 包含字符串搜索、评分计算和数据结构初始化功能

// 函数: process_string_search_and_scoring
// 功能: 执行字符串搜索、评分计算和排序操作
void process_string_search_and_scoring(uint64_t param_1, int64_t param_2, int64_t param_3)

{
  int iVar1;
  uint64_t uVar2;
  char cVar3;
  uint uVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int8_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  int iVar13;
  uint64_t *puVar14;
  uint64_t *puVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  int8_t auStack_188 [32];
  uint64_t uStack_168;
  void *puStack_160;
  int8_t *puStack_158;
  uint uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  int64_t lStack_138;
  int32_t uStack_130;
  int64_t lStack_128;
  uint64_t *puStack_120;
  uint64_t *puStack_118;
  uint64_t *puStack_110;
  int32_t uStack_108;
  uint64_t uStack_100;
  int64_t lStack_f8;
  int64_t alStack_e8 [24];
  
  uStack_100 = 0xfffffffffffffffe;
  alStack_e8[2] = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_188;
  puVar10 = (uint64_t *)0x0;
  uStack_130 = 0;
  puStack_120 = (uint64_t *)0x0;
  puStack_118 = (uint64_t *)0x0;
  puStack_110 = (uint64_t *)0x0;
  uStack_108 = 3;
  lVar8 = (*(int64_t *)(core_system_data_config + 0x3a8) - *(int64_t *)(core_system_data_config + 0x3a0)) / 0x348;
  uStack_140 = uStack_140 & 0xffffffff00000000;
  puVar11 = puStack_120;
  lStack_138 = param_3;
  lStack_128 = param_2;
  lStack_f8 = param_2;
  alStack_e8[0] = lVar8;
  if (0 < (int)lVar8) {
    puVar7 = (uint64_t *)0x0;
    uStack_168 = (uint64_t *)0x0;
    puVar6 = puVar10;
    puVar14 = puVar10;
    do {
      iVar13 = (int)puVar6;
      lVar12 = (int64_t)iVar13 * 0x348 + *(int64_t *)(core_system_data_config + 0x3a0);
      puStack_160 = &system_data_buffer_ptr;
      uStack_148 = 0;
      puStack_158 = (int8_t *)0x0;
      uStack_150 = 0;
      CoreEngineDataBufferProcessor(&puStack_160, *(int32_t *)(lVar12 + 0x18));
      if (*(int *)(lVar12 + 0x18) != 0) {
        // 复制字符串数据
        memcpy(puStack_158, *(uint64_t *)(lVar12 + 0x10), *(int *)(lVar12 + 0x18) + 1);
      }
      if (*(int64_t *)(lVar12 + 0x10) != 0) {
        uStack_150 = 0;
        if (puStack_158 != (int8_t *)0x0) {
          *puStack_158 = 0;
        }
        uStack_148 = uStack_148 & 0xffffffff;
      }
      puVar11 = puVar10;
      puVar6 = puVar10;
      if (uStack_150 != 0) {
        do {
          // 字符字符转换处理
          if ((byte)(*(char *)((int64_t)puVar11 + (int64_t)puStack_158) + 0xbfU) < 0x1a) {
            *(char *)((int64_t)puVar11 + (int64_t)puStack_158) =
                 *(char *)((int64_t)puVar11 + (int64_t)puStack_158) + ' ';
          }
          uVar16 = (int)puVar6 + 1;
          puVar6 = (uint64_t *)(uint64_t)uVar16;
          puVar11 = (uint64_t *)((int64_t)puVar11 + 1);
        } while (uVar16 < uStack_150);
      }
      puVar9 = &system_buffer_ptr;
      if (puStack_158 != (int8_t *)0x0) {
        puVar9 = puStack_158;
      }
      // 执行字符串搜索
      lVar5 = strstr(puVar9, &ui_system_data_1496_ptr);
      puVar11 = puStack_120;
      if (lVar5 == 0) {
        puStack_160 = &system_data_buffer_ptr;
        if (puStack_158 != (int8_t *)0x0) {
          // 内存分配失败处理
          CoreEngineMemoryPoolCleaner();
        }
      }
      else {
        // 计算评分因子
        fVar18 = ABS(*(float *)(param_3 + 0x40) - *(float *)(lVar12 + 0x9c));
        if (fVar18 <= 1.0) {
          fVar18 = 1.0;
        }
        fVar17 = ABS(*(float *)(param_3 + 0x58) - *(float *)(lVar12 + 0xb0));
        if (fVar17 <= 1.0) {
          fVar17 = 1.0;
        }
        fVar17 = 100.0 / fVar17 + 2000.0 / fVar18;
        fVar18 = *(float *)(param_3 + 0x68);
        if ((fVar18 <= 0.0) || (*(float *)(lVar12 + 0x128) <= 0.0)) {
          if ((-0.01 < fVar18) &&
             (((fVar18 < 0.01 && (-0.01 < *(float *)(lVar12 + 0x128))) &&
              (*(float *)(lVar12 + 0x128) < 0.01)))) {
            fVar17 = fVar17 + 100.0;
          }
        }
        else {
          fVar17 = fVar17 + 100000.0;
        }
        // 计算综合评分
        uStack_168 = (uint64_t *)
                     CONCAT44(iVar13, (24.0 - ABS(ABS(12.0 - *(float *)(lVar12 + 0x2c)) -
                                                 ABS(12.0 - *(float *)(param_3 + 0xa8)))) * 500.0 +
                                     fVar17);
        if (puVar7 < puVar14) {
          *puVar7 = (uint64_t)uStack_168;
        }
        else {
          lVar12 = (int64_t)puVar7 - (int64_t)puStack_120;
          lVar8 = lVar12 >> 3;
          if (lVar8 == 0) {
            lVar8 = 1;
LAB_18018e486:
            // 动态内存分配
            puVar6 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr, lVar8 * 8, 3);
          }
          else {
            lVar8 = lVar8 * 2;
            puVar6 = puVar10;
            if (lVar8 != 0) goto LAB_18018e486;
          }
          puVar14 = (uint64_t *)(lVar12 + 7U >> 3);
          if (puVar7 < puVar11) {
            puVar14 = puVar10;
          }
          puVar7 = puVar6;
          if (puVar14 != (uint64_t *)0x0) {
            puVar15 = puVar10;
            do {
              // 数据复制
              *puVar7 = *(uint64_t *)(((int64_t)puVar11 - (int64_t)puVar6) + (int64_t)puVar7);
              puVar7 = puVar7 + 1;
              puVar15 = (uint64_t *)((int64_t)puVar15 + 1);
            } while (puVar15 != puVar14);
          }
          *puVar7 = (uint64_t)uStack_168;
          if (puVar11 != (uint64_t *)0x0) {
            // 释放内存
            CoreEngineMemoryPoolCleaner(puVar11);
          }
          puVar14 = puVar6 + lVar8;
          lVar8 = alStack_e8[0];
          iVar13 = (int)uStack_140;
          puStack_120 = puVar6;
          puStack_110 = puVar14;
        }
        puVar7 = puVar7 + 1;
        puStack_160 = &system_data_buffer_ptr;
        puStack_118 = puVar7;
        if (puStack_158 != (int8_t *)0x0) {
          // 内存分配失败处理
          CoreEngineMemoryPoolCleaner();
        }
      }
      puVar11 = puStack_120;
      param_2 = lStack_128;
      uStack_148 = uStack_148 & 0xffffffff00000000;
      puStack_158 = (int8_t *)0x0;
      puStack_160 = &system_state_ptr;
      uVar16 = iVar13 + 1;
      puVar6 = (uint64_t *)(uint64_t)uVar16;
      uStack_140 = CONCAT44(uStack_140._4_4_, uVar16);
    } while ((int)uVar16 < (int)lVar8);
    uStack_168 = puVar7;
    if (puStack_120 != puVar7) {
      lVar12 = (int64_t)puVar7 - (int64_t)puStack_120 >> 3;
      uVar16 = 0;
      for (lVar8 = lVar12; lVar8 != 0; lVar8 = lVar8 >> 1) {
        uVar16 = (int)puVar10 + 1;
        puVar10 = (uint64_t *)(uint64_t)uVar16;
      }
      // 执行排序操作
      FUN_180190c90(puStack_120, puVar7, (int64_t)(int)(uVar16 - 1) * 2);
      if (lVar12 < 0x1d) {
        FUN_180190a20(puVar11, puVar7);
      }
      else {
        puVar10 = puVar11 + 0x1c;
        FUN_180190a20(puVar11, puVar10);
        if (puVar10 != puVar7) {
          puVar14 = puVar11 + 0x1b;
          do {
            uVar2 = *puVar10;
            uStack_140 = uVar2;
            cVar3 = func_0x00018018e0d0(uVar2, *puVar14);
            puVar11 = puVar10;
            if (cVar3 != '\0') {
              puVar6 = puVar14;
              do {
                *(int *)puVar11 = (int)*puVar6;
                *(int32_t *)((int64_t)puVar10 + (4 - (int64_t)puVar14) + (int64_t)puVar6) =
                     *(int32_t *)((int64_t)puVar6 + 4);
                puVar11 = puVar11 + -1;
                puVar6 = puVar6 + -1;
                cVar3 = func_0x00018018e0d0(uVar2, *puVar6);
                puVar7 = uStack_168;
              } while (cVar3 != '\0');
            }
            *(int *)puVar11 = (int)uStack_140;
            *(int32_t *)((int64_t)puVar11 + 4) = uStack_140._4_4_;
            puVar10 = puVar10 + 1;
            puVar14 = puVar14 + 1;
            puVar11 = puStack_120;
            param_2 = lStack_128;
          } while (puVar10 != puVar7);
        }
      }
    }
  }
  lVar8 = lStack_138;
  // 调用结果处理函数
  FUN_18018e7e0(param_2, (int64_t)*(int *)((int64_t)puVar11 + 4) * 0x348 +
                        *(int64_t *)(core_system_data_config + 0x3a0));
  uStack_130 = 1;
  alStack_e8[0] = 3;
  alStack_e8[1] = 0x200000001;
  uVar16 = *(uint *)(lVar8 + 0xb8);
  uVar4 = 0;
  if ((-1 < (int)uVar16) && (uVar4 = uVar16, 3 < (int)uVar16)) {
    uVar4 = 3;
  }
  iVar13 = *(int *)((int64_t)alStack_e8 + (int64_t)(int)uVar4 * 4);
  if (*(int *)(param_2 + 0x3c) != iVar13) {
    *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xffffffef;
  }
  iVar1 = *(int *)(param_2 + 0x340);
  *(int *)(param_2 + 0x340) = iVar1 + 1;
  *(int *)(param_2 + 0x3c) = iVar13;
  *(int32_t *)(param_2 + 0x30) = *(int32_t *)(lVar8 + 0xb4);
  *(int *)(param_2 + 0x340) = iVar1 + 2;
  *(int32_t *)(param_2 + 0x120) = *(int32_t *)(lVar8 + 0xbc);
  *(int *)(param_2 + 0x340) = iVar1 + 3;
  *(int32_t *)(param_2 + 0x124) = *(int32_t *)(lVar8 + 0xc0);
  *(int *)(param_2 + 0x340) = iVar1 + 4;
  if (0.4 < *(float *)(param_2 + 0xb4)) {
    *(int32_t *)(param_2 + 0xa0) = *(int32_t *)(lVar8 + 0x44);
    *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffff9;
    *(int *)(param_2 + 0x340) = iVar1 + 5;
  }
  // 释放内存
  CoreEngineMemoryPoolCleaner(puVar11);
}



// 函数: initialize_data_structure_copy
// 功能: 初始化并复制数据结构
uint64_t *
initialize_data_structure_copy(uint64_t *param_1, int64_t param_2, uint64_t param_3, uint64_t param_4)

{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  *param_1 = &processed_var_5912_ptr;
  *param_1 = &processed_var_5880_ptr;
  // 初始化数据结构
  CoreEngineDataTransformer(param_1 + 1, param_2 + 8, param_3, param_4, 0xfffffffffffffffe);
  *(int32_t *)(param_1 + 5) = *(int32_t *)(param_2 + 0x28);
  *(int32_t *)((int64_t)param_1 + 0x2c) = *(int32_t *)(param_2 + 0x2c);
  *(int32_t *)(param_1 + 6) = *(int32_t *)(param_2 + 0x30);
  *(int32_t *)((int64_t)param_1 + 0x34) = *(int32_t *)(param_2 + 0x34);
  *(int32_t *)(param_1 + 7) = *(int32_t *)(param_2 + 0x38);
  *(int32_t *)((int64_t)param_1 + 0x3c) = *(int32_t *)(param_2 + 0x3c);
  *(int32_t *)(param_1 + 8) = *(int32_t *)(param_2 + 0x40);
  CoreEngineDataTransformer(param_1 + 9, param_2 + 0x48);
  plVar1 = *(int64_t **)(param_2 + 0x68);
  param_1[0xd] = plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  CoreEngineDataTransformer(param_1 + 0xe, param_2 + 0x70, param_3, param_4, uVar5);
  plVar1 = *(int64_t **)(param_2 + 0x90);
  param_1[0x12] = plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  *(int32_t *)(param_1 + 0x13) = *(int32_t *)(param_2 + 0x98);
  *(int32_t *)((int64_t)param_1 + 0x9c) = *(int32_t *)(param_2 + 0x9c);
  *(int32_t *)(param_1 + 0x14) = *(int32_t *)(param_2 + 0xa0);
  *(int32_t *)((int64_t)param_1 + 0xa4) = *(int32_t *)(param_2 + 0xa4);
  *(int32_t *)(param_1 + 0x15) = *(int32_t *)(param_2 + 0xa8);
  *(int32_t *)((int64_t)param_1 + 0xac) = *(int32_t *)(param_2 + 0xac);
  *(int32_t *)(param_1 + 0x16) = *(int32_t *)(param_2 + 0xb0);
  *(int32_t *)((int64_t)param_1 + 0xb4) = *(int32_t *)(param_2 + 0xb4);
  *(int32_t *)(param_1 + 0x17) = *(int32_t *)(param_2 + 0xb8);
  *(int32_t *)((int64_t)param_1 + 0xbc) = *(int32_t *)(param_2 + 0xbc);
  *(int32_t *)(param_1 + 0x18) = *(int32_t *)(param_2 + 0xc0);
  uVar5 = *(uint64_t *)(param_2 + 0xcc);
  *(uint64_t *)((int64_t)param_1 + 0xc4) = *(uint64_t *)(param_2 + 0xc4);
  *(uint64_t *)((int64_t)param_1 + 0xcc) = uVar5;
  uVar5 = *(uint64_t *)(param_2 + 0xdc);
  *(uint64_t *)((int64_t)param_1 + 0xd4) = *(uint64_t *)(param_2 + 0xd4);
  *(uint64_t *)((int64_t)param_1 + 0xdc) = uVar5;
  uVar5 = *(uint64_t *)(param_2 + 0xec);
  *(uint64_t *)((int64_t)param_1 + 0xe4) = *(uint64_t *)(param_2 + 0xe4);
  *(uint64_t *)((int64_t)param_1 + 0xec) = uVar5;
  uVar5 = *(uint64_t *)(param_2 + 0xfc);
  *(uint64_t *)((int64_t)param_1 + 0xf4) = *(uint64_t *)(param_2 + 0xf4);
  *(uint64_t *)((int64_t)param_1 + 0xfc) = uVar5;
  uVar2 = *(int32_t *)(param_2 + 0x108);
  uVar3 = *(int32_t *)(param_2 + 0x10c);
  uVar4 = *(int32_t *)(param_2 + 0x110);
  *(int32_t *)((int64_t)param_1 + 0x104) = *(int32_t *)(param_2 + 0x104);
  *(int32_t *)(param_1 + 0x21) = uVar2;
  *(int32_t *)((int64_t)param_1 + 0x10c) = uVar3;
  *(int32_t *)(param_1 + 0x22) = uVar4;
  *(int32_t *)((int64_t)param_1 + 0x114) = *(int32_t *)(param_2 + 0x114);
  *(int32_t *)(param_1 + 0x23) = *(int32_t *)(param_2 + 0x118);
  *(int32_t *)((int64_t)param_1 + 0x11c) = *(int32_t *)(param_2 + 0x11c);
  *(int32_t *)(param_1 + 0x24) = *(int32_t *)(param_2 + 0x120);
  *(int32_t *)((int64_t)param_1 + 0x124) = *(int32_t *)(param_2 + 0x124);
  *(int32_t *)(param_1 + 0x25) = *(int32_t *)(param_2 + 0x128);
  *(int32_t *)((int64_t)param_1 + 300) = *(int32_t *)(param_2 + 300);
  CoreEngineDataTransformer(param_1 + 0x26, param_2 + 0x130);
  plVar1 = *(int64_t **)(param_2 + 0x150);
  param_1[0x2a] = plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  CoreEngineDataTransformer(param_1 + 0x2b, param_2 + 0x158);
  plVar1 = *(int64_t **)(param_2 + 0x178);
  param_1[0x2f] = plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  *(int32_t *)(param_1 + 0x30) = *(int32_t *)(param_2 + 0x180);
  CoreEngineDataTransformer(param_1 + 0x31, param_2 + 0x188);
  plVar1 = *(int64_t **)(param_2 + 0x1a8);
  param_1[0x35] = plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = *(int64_t **)(param_2 + 0x1b0);
  param_1[0x36] = plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  *(int32_t *)(param_1 + 0x37) = *(int32_t *)(param_2 + 0x1b8);
  *(int32_t *)((int64_t)param_1 + 0x1bc) = *(int32_t *)(param_2 + 0x1bc);
  uVar2 = *(int32_t *)(param_2 + 0x1c4);
  uVar3 = *(int32_t *)(param_2 + 0x1c8);
  uVar4 = *(int32_t *)(param_2 + 0x1cc);
  *(int32_t *)(param_1 + 0x38) = *(int32_t *)(param_2 + 0x1c0);
  *(int32_t *)((int64_t)param_1 + 0x1c4) = uVar2;
  *(int32_t *)(param_1 + 0x39) = uVar3;
  *(int32_t *)((int64_t)param_1 + 0x1cc) = uVar4;
  *(int32_t *)(param_1 + 0x3a) = *(int32_t *)(param_2 + 0x1d0);
  *(int32_t *)((int64_t)param_1 + 0x1d4) = *(int32_t *)(param_2 + 0x1d4);
  *(int32_t *)(param_1 + 0x3b) = *(int32_t *)(param_2 + 0x1d8);
  *(int32_t *)((int64_t)param_1 + 0x1dc) = *(int32_t *)(param_2 + 0x1dc);
  *(int32_t *)(param_1 + 0x3c) = *(int32_t *)(param_2 + 0x1e0);
  *(int32_t *)((int64_t)param_1 + 0x1e4) = *(int32_t *)(param_2 + 0x1e4);
  *(int32_t *)(param_1 + 0x3d) = *(int32_t *)(param_2 + 0x1e8);
  *(int32_t *)((int64_t)param_1 + 0x1ec) = *(int32_t *)(param_2 + 0x1ec);
  *(int32_t *)(param_1 + 0x3e) = *(int32_t *)(param_2 + 0x1f0);
  *(int32_t *)((int64_t)param_1 + 500) = *(int32_t *)(param_2 + 500);
  *(int32_t *)(param_1 + 0x3f) = *(int32_t *)(param_2 + 0x1f8);
  *(int32_t *)((int64_t)param_1 + 0x1fc) = *(int32_t *)(param_2 + 0x1fc);
  *(int32_t *)(param_1 + 0x40) = *(int32_t *)(param_2 + 0x200);
  *(int32_t *)((int64_t)param_1 + 0x204) = *(int32_t *)(param_2 + 0x204);
  *(int32_t *)(param_1 + 0x41) = *(int32_t *)(param_2 + 0x208);
  *(int32_t *)((int64_t)param_1 + 0x20c) = *(int32_t *)(param_2 + 0x20c);
  *(int32_t *)(param_1 + 0x42) = *(int32_t *)(param_2 + 0x210);
  *(int32_t *)((int64_t)param_1 + 0x214) = *(int32_t *)(param_2 + 0x214);
  *(int32_t *)(param_1 + 0x43) = *(int32_t *)(param_2 + 0x218);
  *(int32_t *)((int64_t)param_1 + 0x21c) = *(int32_t *)(param_2 + 0x21c);
  *(int32_t *)(param_1 + 0x44) = *(int32_t *)(param_2 + 0x220);
  *(int32_t *)((int64_t)param_1 + 0x224) = *(int32_t *)(param_2 + 0x224);
  *(int32_t *)(param_1 + 0x45) = *(int32_t *)(param_2 + 0x228);
  *(int32_t *)((int64_t)param_1 + 0x22c) = *(int32_t *)(param_2 + 0x22c);
  *(int32_t *)(param_1 + 0x46) = *(int32_t *)(param_2 + 0x230);
  *(int32_t *)((int64_t)param_1 + 0x234) = *(int32_t *)(param_2 + 0x234);
  CoreEngineDataTransformer(param_1 + 0x47, param_2 + 0x238);
  plVar1 = *(int64_t **)(param_2 + 600);
  param_1[0x4b] = plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  CoreEngineDataTransformer(param_1 + 0x4c, param_2 + 0x260);
  plVar1 = *(int64_t **)(param_2 + 0x280);
  param_1[0x50] = plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  *(int32_t *)(param_1 + 0x51) = *(int32_t *)(param_2 + 0x288);
  *(int32_t *)((int64_t)param_1 + 0x28c) = *(int32_t *)(param_2 + 0x28c);
  *(int32_t *)(param_1 + 0x52) = *(int32_t *)(param_2 + 0x290);
  *(int32_t *)((int64_t)param_1 + 0x294) = *(int32_t *)(param_2 + 0x294);
  *(int32_t *)(param_1 + 0x53) = *(int32_t *)(param_2 + 0x298);
  uVar2 = *(int32_t *)(param_2 + 0x2a0);
  uVar3 = *(int32_t *)(param_2 + 0x2a4);
  uVar4 = *(int32_t *)(param_2 + 0x2a8);
  *(int32_t *)((int64_t)param_1 + 0x29c) = *(int32_t *)(param_2 + 0x29c);
  *(int32_t *)(param_1 + 0x54) = uVar2;
  *(int32_t *)((int64_t)param_1 + 0x2a4) = uVar3;
  *(int32_t *)(param_1 + 0x55) = uVar4;
  *(int32_t *)((int64_t)param_1 + 0x2ac) = *(int32_t *)(param_2 + 0x2ac);
  *(int32_t *)(param_1 + 0x56) = *(int32_t *)(param_2 + 0x2b0);
  *(int32_t *)((int64_t)param_1 + 0x2b4) = *(int32_t *)(param_2 + 0x2b4);
  *(int32_t *)(param_1 + 0x57) = *(int32_t *)(param_2 + 0x2b8);
  *(int32_t *)((int64_t)param_1 + 700) = *(int32_t *)(param_2 + 700);
  *(int32_t *)(param_1 + 0x58) = *(int32_t *)(param_2 + 0x2c0);
  *(int32_t *)((int64_t)param_1 + 0x2c4) = *(int32_t *)(param_2 + 0x2c4);
  *(int32_t *)(param_1 + 0x59) = *(int32_t *)(param_2 + 0x2c8);
  *(int32_t *)((int64_t)param_1 + 0x2cc) = *(int32_t *)(param_2 + 0x2cc);
  *(int32_t *)(param_1 + 0x5a) = *(int32_t *)(param_2 + 0x2d0);
  *(int32_t *)((int64_t)param_1 + 0x2d4) = *(int32_t *)(param_2 + 0x2d4);
  *(int32_t *)(param_1 + 0x5b) = *(int32_t *)(param_2 + 0x2d8);
  *(int32_t *)((int64_t)param_1 + 0x2dc) = *(int32_t *)(param_2 + 0x2dc);
  *(int32_t *)(param_1 + 0x5c) = *(int32_t *)(param_2 + 0x2e0);
  *(int32_t *)((int64_t)param_1 + 0x2e4) = *(int32_t *)(param_2 + 0x2e4);
  *(int32_t *)(param_1 + 0x5d) = *(int32_t *)(param_2 + 0x2e8);
  *(int32_t *)((int64_t)param_1 + 0x2ec) = *(int32_t *)(param_2 + 0x2ec);
  *(int32_t *)(param_1 + 0x5e) = *(int32_t *)(param_2 + 0x2f0);
  *(int32_t *)((int64_t)param_1 + 0x2f4) = *(int32_t *)(param_2 + 0x2f4);
  *(int32_t *)(param_1 + 0x5f) = *(int32_t *)(param_2 + 0x2f8);
  *(int32_t *)((int64_t)param_1 + 0x2fc) = *(int32_t *)(param_2 + 0x2fc);
  *(int32_t *)(param_1 + 0x60) = *(int32_t *)(param_2 + 0x300);
  *(int8_t *)((int64_t)param_1 + 0x304) = *(int8_t *)(param_2 + 0x304);
  *(int8_t *)((int64_t)param_1 + 0x305) = *(int8_t *)(param_2 + 0x305);
  *(int8_t *)((int64_t)param_1 + 0x306) = *(int8_t *)(param_2 + 0x306);
  *(int32_t *)(param_1 + 0x61) = *(int32_t *)(param_2 + 0x308);
  *(int32_t *)((int64_t)param_1 + 0x30c) = *(int32_t *)(param_2 + 0x30c);
  *(int32_t *)(param_1 + 0x62) = *(int32_t *)(param_2 + 0x310);
  *(int32_t *)((int64_t)param_1 + 0x314) = *(int32_t *)(param_2 + 0x314);
  *(int8_t *)(param_1 + 99) = *(int8_t *)(param_2 + 0x318);
  CoreEngineDataTransformer(param_1 + 100, param_2 + 800);
  *(int32_t *)(param_1 + 0x68) = *(int32_t *)(param_2 + 0x340);
  return param_1;
}


// 全局变量和常量定义区域
// 注意：这些变量可能与其他符号在相同地址重叠