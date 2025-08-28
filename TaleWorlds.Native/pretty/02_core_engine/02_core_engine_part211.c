#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part211.c - 核心引擎模块第211部分
// 包含字符串搜索、评分计算和数据结构初始化功能

// 函数: process_string_search_and_scoring
// 功能: 执行字符串搜索、评分计算和排序操作
void process_string_search_and_scoring(undefined8 param_1, longlong param_2, longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  longlong lVar12;
  int iVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_188 [32];
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined1 *puStack_158;
  uint uStack_150;
  ulonglong uStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  undefined4 uStack_130;
  longlong lStack_128;
  ulonglong *puStack_120;
  ulonglong *puStack_118;
  ulonglong *puStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  longlong alStack_e8 [24];
  
  uStack_100 = 0xfffffffffffffffe;
  alStack_e8[2] = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  puVar10 = (ulonglong *)0x0;
  uStack_130 = 0;
  puStack_120 = (ulonglong *)0x0;
  puStack_118 = (ulonglong *)0x0;
  puStack_110 = (ulonglong *)0x0;
  uStack_108 = 3;
  lVar8 = (*(longlong *)(_DAT_180c8a9f8 + 0x3a8) - *(longlong *)(_DAT_180c8a9f8 + 0x3a0)) / 0x348;
  uStack_140 = uStack_140 & 0xffffffff00000000;
  puVar11 = puStack_120;
  lStack_138 = param_3;
  lStack_128 = param_2;
  lStack_f8 = param_2;
  alStack_e8[0] = lVar8;
  if (0 < (int)lVar8) {
    puVar7 = (ulonglong *)0x0;
    uStack_168 = (ulonglong *)0x0;
    puVar6 = puVar10;
    puVar14 = puVar10;
    do {
      iVar13 = (int)puVar6;
      lVar12 = (longlong)iVar13 * 0x348 + *(longlong *)(_DAT_180c8a9f8 + 0x3a0);
      puStack_160 = &UNK_180a3c3e0;
      uStack_148 = 0;
      puStack_158 = (undefined1 *)0x0;
      uStack_150 = 0;
      FUN_1806277c0(&puStack_160, *(undefined4 *)(lVar12 + 0x18));
      if (*(int *)(lVar12 + 0x18) != 0) {
        // 复制字符串数据
        memcpy(puStack_158, *(undefined8 *)(lVar12 + 0x10), *(int *)(lVar12 + 0x18) + 1);
      }
      if (*(longlong *)(lVar12 + 0x10) != 0) {
        uStack_150 = 0;
        if (puStack_158 != (undefined1 *)0x0) {
          *puStack_158 = 0;
        }
        uStack_148 = uStack_148 & 0xffffffff;
      }
      puVar11 = puVar10;
      puVar6 = puVar10;
      if (uStack_150 != 0) {
        do {
          // 字符字符转换处理
          if ((byte)(*(char *)((longlong)puVar11 + (longlong)puStack_158) + 0xbfU) < 0x1a) {
            *(char *)((longlong)puVar11 + (longlong)puStack_158) =
                 *(char *)((longlong)puVar11 + (longlong)puStack_158) + ' ';
          }
          uVar16 = (int)puVar6 + 1;
          puVar6 = (ulonglong *)(ulonglong)uVar16;
          puVar11 = (ulonglong *)((longlong)puVar11 + 1);
        } while (uVar16 < uStack_150);
      }
      puVar9 = &DAT_18098bc73;
      if (puStack_158 != (undefined1 *)0x0) {
        puVar9 = puStack_158;
      }
      // 执行字符串搜索
      lVar5 = strstr(puVar9, &UNK_180a0aef8);
      puVar11 = puStack_120;
      if (lVar5 == 0) {
        puStack_160 = &UNK_180a3c3e0;
        if (puStack_158 != (undefined1 *)0x0) {
          // 内存分配失败处理
          FUN_18064e900();
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
        uStack_168 = (ulonglong *)
                     CONCAT44(iVar13, (24.0 - ABS(ABS(12.0 - *(float *)(lVar12 + 0x2c)) -
                                                 ABS(12.0 - *(float *)(param_3 + 0xa8)))) * 500.0 +
                                     fVar17);
        if (puVar7 < puVar14) {
          *puVar7 = (ulonglong)uStack_168;
        }
        else {
          lVar12 = (longlong)puVar7 - (longlong)puStack_120;
          lVar8 = lVar12 >> 3;
          if (lVar8 == 0) {
            lVar8 = 1;
LAB_18018e486:
            // 动态内存分配
            puVar6 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18, lVar8 * 8, 3);
          }
          else {
            lVar8 = lVar8 * 2;
            puVar6 = puVar10;
            if (lVar8 != 0) goto LAB_18018e486;
          }
          puVar14 = (ulonglong *)(lVar12 + 7U >> 3);
          if (puVar7 < puVar11) {
            puVar14 = puVar10;
          }
          puVar7 = puVar6;
          if (puVar14 != (ulonglong *)0x0) {
            puVar15 = puVar10;
            do {
              // 数据复制
              *puVar7 = *(ulonglong *)(((longlong)puVar11 - (longlong)puVar6) + (longlong)puVar7);
              puVar7 = puVar7 + 1;
              puVar15 = (ulonglong *)((longlong)puVar15 + 1);
            } while (puVar15 != puVar14);
          }
          *puVar7 = (ulonglong)uStack_168;
          if (puVar11 != (ulonglong *)0x0) {
            // 释放内存
            FUN_18064e900(puVar11);
          }
          puVar14 = puVar6 + lVar8;
          lVar8 = alStack_e8[0];
          iVar13 = (int)uStack_140;
          puStack_120 = puVar6;
          puStack_110 = puVar14;
        }
        puVar7 = puVar7 + 1;
        puStack_160 = &UNK_180a3c3e0;
        puStack_118 = puVar7;
        if (puStack_158 != (undefined1 *)0x0) {
          // 内存分配失败处理
          FUN_18064e900();
        }
      }
      puVar11 = puStack_120;
      param_2 = lStack_128;
      uStack_148 = uStack_148 & 0xffffffff00000000;
      puStack_158 = (undefined1 *)0x0;
      puStack_160 = &UNK_18098bcb0;
      uVar16 = iVar13 + 1;
      puVar6 = (ulonglong *)(ulonglong)uVar16;
      uStack_140 = CONCAT44(uStack_140._4_4_, uVar16);
    } while ((int)uVar16 < (int)lVar8);
    uStack_168 = puVar7;
    if (puStack_120 != puVar7) {
      lVar12 = (longlong)puVar7 - (longlong)puStack_120 >> 3;
      uVar16 = 0;
      for (lVar8 = lVar12; lVar8 != 0; lVar8 = lVar8 >> 1) {
        uVar16 = (int)puVar10 + 1;
        puVar10 = (ulonglong *)(ulonglong)uVar16;
      }
      // 执行排序操作
      FUN_180190c90(puStack_120, puVar7, (longlong)(int)(uVar16 - 1) * 2);
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
                *(undefined4 *)((longlong)puVar10 + (4 - (longlong)puVar14) + (longlong)puVar6) =
                     *(undefined4 *)((longlong)puVar6 + 4);
                puVar11 = puVar11 + -1;
                puVar6 = puVar6 + -1;
                cVar3 = func_0x00018018e0d0(uVar2, *puVar6);
                puVar7 = uStack_168;
              } while (cVar3 != '\0');
            }
            *(int *)puVar11 = (int)uStack_140;
            *(undefined4 *)((longlong)puVar11 + 4) = uStack_140._4_4_;
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
  FUN_18018e7e0(param_2, (longlong)*(int *)((longlong)puVar11 + 4) * 0x348 +
                        *(longlong *)(_DAT_180c8a9f8 + 0x3a0));
  uStack_130 = 1;
  alStack_e8[0] = 3;
  alStack_e8[1] = 0x200000001;
  uVar16 = *(uint *)(lVar8 + 0xb8);
  uVar4 = 0;
  if ((-1 < (int)uVar16) && (uVar4 = uVar16, 3 < (int)uVar16)) {
    uVar4 = 3;
  }
  iVar13 = *(int *)((longlong)alStack_e8 + (longlong)(int)uVar4 * 4);
  if (*(int *)(param_2 + 0x3c) != iVar13) {
    *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xffffffef;
  }
  iVar1 = *(int *)(param_2 + 0x340);
  *(int *)(param_2 + 0x340) = iVar1 + 1;
  *(int *)(param_2 + 0x3c) = iVar13;
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(lVar8 + 0xb4);
  *(int *)(param_2 + 0x340) = iVar1 + 2;
  *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(lVar8 + 0xbc);
  *(int *)(param_2 + 0x340) = iVar1 + 3;
  *(undefined4 *)(param_2 + 0x124) = *(undefined4 *)(lVar8 + 0xc0);
  *(int *)(param_2 + 0x340) = iVar1 + 4;
  if (0.4 < *(float *)(param_2 + 0xb4)) {
    *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(lVar8 + 0x44);
    *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffff9;
    *(int *)(param_2 + 0x340) = iVar1 + 5;
  }
  // 释放内存
  FUN_18064e900(puVar11);
}



// 函数: initialize_data_structure_copy
// 功能: 初始化并复制数据结构
undefined8 *
initialize_data_structure_copy(undefined8 *param_1, longlong param_2, undefined8 param_3, undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a07218;
  *param_1 = &UNK_180a071f8;
  // 初始化数据结构
  FUN_180627ae0(param_1 + 1, param_2 + 8, param_3, param_4, 0xfffffffffffffffe);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  FUN_180627ae0(param_1 + 9, param_2 + 0x48);
  plVar1 = *(longlong **)(param_2 + 0x68);
  param_1[0xd] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  FUN_180627ae0(param_1 + 0xe, param_2 + 0x70, param_3, param_4, uVar5);
  plVar1 = *(longlong **)(param_2 + 0x90);
  param_1[0x12] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc0);
  uVar5 = *(undefined8 *)(param_2 + 0xcc);
  *(undefined8 *)((longlong)param_1 + 0xc4) = *(undefined8 *)(param_2 + 0xc4);
  *(undefined8 *)((longlong)param_1 + 0xcc) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0xdc);
  *(undefined8 *)((longlong)param_1 + 0xd4) = *(undefined8 *)(param_2 + 0xd4);
  *(undefined8 *)((longlong)param_1 + 0xdc) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0xec);
  *(undefined8 *)((longlong)param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)((longlong)param_1 + 0xec) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0xfc);
  *(undefined8 *)((longlong)param_1 + 0xf4) = *(undefined8 *)(param_2 + 0xf4);
  *(undefined8 *)((longlong)param_1 + 0xfc) = uVar5;
  uVar2 = *(undefined4 *)(param_2 + 0x108);
  uVar3 = *(undefined4 *)(param_2 + 0x10c);
  uVar4 = *(undefined4 *)(param_2 + 0x110);
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x21) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar3;
  *(undefined4 *)(param_1 + 0x22) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)((longlong)param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)(param_2 + 300);
  FUN_180627ae0(param_1 + 0x26, param_2 + 0x130);
  plVar1 = *(longlong **)(param_2 + 0x150);
  param_1[0x2a] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  FUN_180627ae0(param_1 + 0x2b, param_2 + 0x158);
  plVar1 = *(longlong **)(param_2 + 0x178);
  param_1[0x2f] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x180);
  FUN_180627ae0(param_1 + 0x31, param_2 + 0x188);
  plVar1 = *(longlong **)(param_2 + 0x1a8);
  param_1[0x35] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = *(longlong **)(param_2 + 0x1b0);
  param_1[0x36] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)((longlong)param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0x1bc);
  uVar2 = *(undefined4 *)(param_2 + 0x1c4);
  uVar3 = *(undefined4 *)(param_2 + 0x1c8);
  uVar4 = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar2;
  *(undefined4 *)(param_1 + 0x39) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = uVar4;
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_2 + 0x1d0);
  *(undefined4 *)((longlong)param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined4 *)((longlong)param_1 + 0x1dc) = *(undefined4 *)(param_2 + 0x1dc);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined4 *)((longlong)param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined4 *)((longlong)param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_2 + 0x1f0);
  *(undefined4 *)((longlong)param_1 + 500) = *(undefined4 *)(param_2 + 500);
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined4 *)((longlong)param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x200);
  *(undefined4 *)((longlong)param_1 + 0x204) = *(undefined4 *)(param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)(param_2 + 0x208);
  *(undefined4 *)((longlong)param_1 + 0x20c) = *(undefined4 *)(param_2 + 0x20c);
  *(undefined4 *)(param_1 + 0x42) = *(undefined4 *)(param_2 + 0x210);
  *(undefined4 *)((longlong)param_1 + 0x214) = *(undefined4 *)(param_2 + 0x214);
  *(undefined4 *)(param_1 + 0x43) = *(undefined4 *)(param_2 + 0x218);
  *(undefined4 *)((longlong)param_1 + 0x21c) = *(undefined4 *)(param_2 + 0x21c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x220);
  *(undefined4 *)((longlong)param_1 + 0x224) = *(undefined4 *)(param_2 + 0x224);
  *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(param_2 + 0x228);
  *(undefined4 *)((longlong)param_1 + 0x22c) = *(undefined4 *)(param_2 + 0x22c);
  *(undefined4 *)(param_1 + 0x46) = *(undefined4 *)(param_2 + 0x230);
  *(undefined4 *)((longlong)param_1 + 0x234) = *(undefined4 *)(param_2 + 0x234);
  FUN_180627ae0(param_1 + 0x47, param_2 + 0x238);
  plVar1 = *(longlong **)(param_2 + 600);
  param_1[0x4b] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  FUN_180627ae0(param_1 + 0x4c, param_2 + 0x260);
  plVar1 = *(longlong **)(param_2 + 0x280);
  param_1[0x50] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  *(undefined4 *)(param_1 + 0x51) = *(undefined4 *)(param_2 + 0x288);
  *(undefined4 *)((longlong)param_1 + 0x28c) = *(undefined4 *)(param_2 + 0x28c);
  *(undefined4 *)(param_1 + 0x52) = *(undefined4 *)(param_2 + 0x290);
  *(undefined4 *)((longlong)param_1 + 0x294) = *(undefined4 *)(param_2 + 0x294);
  *(undefined4 *)(param_1 + 0x53) = *(undefined4 *)(param_2 + 0x298);
  uVar2 = *(undefined4 *)(param_2 + 0x2a0);
  uVar3 = *(undefined4 *)(param_2 + 0x2a4);
  uVar4 = *(undefined4 *)(param_2 + 0x2a8);
  *(undefined4 *)((longlong)param_1 + 0x29c) = *(undefined4 *)(param_2 + 0x29c);
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = uVar3;
  *(undefined4 *)(param_1 + 0x55) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = *(undefined4 *)(param_2 + 0x2ac);
  *(undefined4 *)(param_1 + 0x56) = *(undefined4 *)(param_2 + 0x2b0);
  *(undefined4 *)((longlong)param_1 + 0x2b4) = *(undefined4 *)(param_2 + 0x2b4);
  *(undefined4 *)(param_1 + 0x57) = *(undefined4 *)(param_2 + 0x2b8);
  *(undefined4 *)((longlong)param_1 + 700) = *(undefined4 *)(param_2 + 700);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x2c0);
  *(undefined4 *)((longlong)param_1 + 0x2c4) = *(undefined4 *)(param_2 + 0x2c4);
  *(undefined4 *)(param_1 + 0x59) = *(undefined4 *)(param_2 + 0x2c8);
  *(undefined4 *)((longlong)param_1 + 0x2cc) = *(undefined4 *)(param_2 + 0x2cc);
  *(undefined4 *)(param_1 + 0x5a) = *(undefined4 *)(param_2 + 0x2d0);
  *(undefined4 *)((longlong)param_1 + 0x2d4) = *(undefined4 *)(param_2 + 0x2d4);
  *(undefined4 *)(param_1 + 0x5b) = *(undefined4 *)(param_2 + 0x2d8);
  *(undefined4 *)((longlong)param_1 + 0x2dc) = *(undefined4 *)(param_2 + 0x2dc);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x2e0);
  *(undefined4 *)((longlong)param_1 + 0x2e4) = *(undefined4 *)(param_2 + 0x2e4);
  *(undefined4 *)(param_1 + 0x5d) = *(undefined4 *)(param_2 + 0x2e8);
  *(undefined4 *)((longlong)param_1 + 0x2ec) = *(undefined4 *)(param_2 + 0x2ec);
  *(undefined4 *)(param_1 + 0x5e) = *(undefined4 *)(param_2 + 0x2f0);
  *(undefined4 *)((longlong)param_1 + 0x2f4) = *(undefined4 *)(param_2 + 0x2f4);
  *(undefined4 *)(param_1 + 0x5f) = *(undefined4 *)(param_2 + 0x2f8);
  *(undefined4 *)((longlong)param_1 + 0x2fc) = *(undefined4 *)(param_2 + 0x2fc);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x300);
  *(undefined1 *)((longlong)param_1 + 0x304) = *(undefined1 *)(param_2 + 0x304);
  *(undefined1 *)((longlong)param_1 + 0x305) = *(undefined1 *)(param_2 + 0x305);
  *(undefined1 *)((longlong)param_1 + 0x306) = *(undefined1 *)(param_2 + 0x306);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_2 + 0x308);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)(param_2 + 0x30c);
  *(undefined4 *)(param_1 + 0x62) = *(undefined4 *)(param_2 + 0x310);
  *(undefined4 *)((longlong)param_1 + 0x314) = *(undefined4 *)(param_2 + 0x314);
  *(undefined1 *)(param_1 + 99) = *(undefined1 *)(param_2 + 0x318);
  FUN_180627ae0(param_1 + 100, param_2 + 800);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x340);
  return param_1;
}


// 全局变量和常量定义区域
// 注意：这些变量可能与其他符号在相同地址重叠