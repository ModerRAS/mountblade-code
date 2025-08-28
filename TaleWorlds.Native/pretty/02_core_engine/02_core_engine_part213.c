#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part213.c - 核心引擎字符串处理和排序模块

// 全局变量定义
undefined8 *g_string_compare_table = (undefined8 *)0x0;  // 字符串比较表
undefined8 g_empty_string[] = {0x98bc73};  // 空字符串常量
undefined8 g_string_suffix[] = {0xa0af54};  // 字符串后缀常量

// 函数: 执行引擎紧急关闭程序
// 原始函数名: FUN_18018fb50
void execute_engine_emergency_shutdown(void)

{
                    // WARNING: Subroutine does not return
  trigger_system_shutdown();
}

// 函数: 比较两个字符串对象
// 原始函数名: FUN_180190530
// 功能: 比较两个字符串对象，返回比较结果
bool compare_string_objects(undefined8 param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined *puVar5;
  int iVar6;
  
  puVar5 = g_empty_string;
  if (*(undefined **)(param_2 + 0x10) != (undefined *)0x0) {
    puVar5 = *(undefined **)(param_2 + 0x10);
  }
  lVar2 = strstr(puVar5,g_string_suffix);
  puVar5 = g_empty_string;
  if (*(undefined **)(param_3 + 0x10) != (undefined *)0x0) {
    puVar5 = *(undefined **)(param_3 + 0x10);
  }
  lVar3 = strstr(puVar5,g_string_suffix);
  if (lVar2 == 0) {
    if ((lVar3 != 0) || (*(int *)(param_3 + 0x18) == 0)) {
      return false;
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      pbVar4 = *(byte **)(param_3 + 0x10);
      lVar2 = *(longlong *)(param_2 + 0x10) - (longlong)pbVar4;
      do {
        pbVar1 = pbVar4 + lVar2;
        iVar6 = (uint)*pbVar4 - (uint)*pbVar1;
        if (iVar6 != 0) break;
        pbVar4 = pbVar4 + 1;
      } while (*pbVar1 != 0);
LAB_180190603:
      return 0 < iVar6;
    }
  }
  else if (lVar3 != 0) {
    if (*(int *)(param_3 + 0x18) == 0) {
      return false;
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      pbVar4 = *(byte **)(param_3 + 0x10);
      lVar2 = *(longlong *)(param_2 + 0x10) - (longlong)pbVar4;
      while( true ) {
        pbVar1 = pbVar4 + lVar2;
        iVar6 = (uint)*pbVar4 - (uint)*pbVar1;
        if (iVar6 != 0) break;
        pbVar4 = pbVar4 + 1;
        if (*pbVar1 == 0) {
          return false;
        }
      }
      goto LAB_180190603;
    }
  }
  return true;
}

// 函数: 创建并初始化字符串排序条目
// 原始函数名: FUN_180190630
// 功能: 在排序数组中创建新的字符串条目并初始化所有字段
undefined8 * create_string_sort_entry(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 < (undefined8 *)param_1[2]) {
    param_1[1] = (longlong)(puVar6 + 0x69);
    *puVar6 = &g_string_sort_entry_vtable;
    *puVar6 = &g_string_entry_vtable;
    initialize_string_entry(puVar6 + 1,param_2 + 8,param_3,param_4,0xfffffffffffffffe);
    *(undefined4 *)(puVar6 + 5) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)((longlong)puVar6 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(puVar6 + 6) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)((longlong)puVar6 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)((longlong)puVar6 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(puVar6 + 8) = *(undefined4 *)(param_2 + 0x40);
    copy_string_data(puVar6 + 9,param_2 + 0x48);
    plVar1 = *(longlong **)(param_2 + 0x68);
    puVar6[0xd] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    copy_string_data(puVar6 + 0xe,param_2 + 0x70);
    plVar1 = *(longlong **)(param_2 + 0x90);
    puVar6[0x12] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    *(undefined4 *)(puVar6 + 0x13) = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)((longlong)puVar6 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
    *(undefined4 *)(puVar6 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined4 *)((longlong)puVar6 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
    *(undefined4 *)(puVar6 + 0x15) = *(undefined4 *)(param_2 + 0xa8);
    *(undefined4 *)((longlong)puVar6 + 0xac) = *(undefined4 *)(param_2 + 0xac);
    *(undefined4 *)(puVar6 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
    *(undefined4 *)((longlong)puVar6 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
    *(undefined4 *)(puVar6 + 0x17) = *(undefined4 *)(param_2 + 0xb8);
    *(undefined4 *)((longlong)puVar6 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
    *(undefined4 *)(puVar6 + 0x18) = *(undefined4 *)(param_2 + 0xc0);
    uVar5 = *(undefined8 *)(param_2 + 0xcc);
    *(undefined8 *)((longlong)puVar6 + 0xc4) = *(undefined8 *)(param_2 + 0xc4);
    *(undefined8 *)((longlong)puVar6 + 0xcc) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0xdc);
    *(undefined8 *)((longlong)puVar6 + 0xd4) = *(undefined8 *)(param_2 + 0xd4);
    *(undefined8 *)((longlong)puVar6 + 0xdc) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0xec);
    *(undefined8 *)((longlong)puVar6 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
    *(undefined8 *)((longlong)puVar6 + 0xec) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0xfc);
    *(undefined8 *)((longlong)puVar6 + 0xf4) = *(undefined8 *)(param_2 + 0xf4);
    *(undefined8 *)((longlong)puVar6 + 0xfc) = uVar5;
    uVar2 = *(undefined4 *)(param_2 + 0x108);
    uVar3 = *(undefined4 *)(param_2 + 0x10c);
    uVar4 = *(undefined4 *)(param_2 + 0x110);
    *(undefined4 *)((longlong)puVar6 + 0x104) = *(undefined4 *)(param_2 + 0x104);
    *(undefined4 *)(puVar6 + 0x21) = uVar2;
    *(undefined4 *)((longlong)puVar6 + 0x10c) = uVar3;
    *(undefined4 *)(puVar6 + 0x22) = uVar4;
    *(undefined4 *)((longlong)puVar6 + 0x114) = *(undefined4 *)(param_2 + 0x114);
    *(undefined4 *)(puVar6 + 0x23) = *(undefined4 *)(param_2 + 0x118);
    *(undefined4 *)((longlong)puVar6 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
    *(undefined4 *)(puVar6 + 0x24) = *(undefined4 *)(param_2 + 0x120);
    *(undefined4 *)((longlong)puVar6 + 0x124) = *(undefined4 *)(param_2 + 0x124);
    *(undefined4 *)(puVar6 + 0x25) = *(undefined4 *)(param_2 + 0x128);
    *(undefined4 *)((longlong)puVar6 + 300) = *(undefined4 *)(param_2 + 300);
    copy_string_data(puVar6 + 0x26,param_2 + 0x130);
    plVar1 = *(longlong **)(param_2 + 0x150);
    puVar6[0x2a] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    copy_string_data(puVar6 + 0x2b,param_2 + 0x158);
    plVar1 = *(longlong **)(param_2 + 0x178);
    puVar6[0x2f] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    *(undefined4 *)(puVar6 + 0x30) = *(undefined4 *)(param_2 + 0x180);
    copy_string_data(puVar6 + 0x31,param_2 + 0x188);
    plVar1 = *(longlong **)(param_2 + 0x1a8);
    puVar6[0x35] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    plVar1 = *(longlong **)(param_2 + 0x1b0);
    puVar6[0x36] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    *(undefined4 *)(puVar6 + 0x37) = *(undefined4 *)(param_2 + 0x1b8);
    *(undefined4 *)((longlong)puVar6 + 0x1bc) = *(undefined4 *)(param_2 + 0x1bc);
    uVar2 = *(undefined4 *)(param_2 + 0x1c4);
    uVar3 = *(undefined4 *)(param_2 + 0x1c8);
    uVar4 = *(undefined4 *)(param_2 + 0x1cc);
    *(undefined4 *)(puVar6 + 0x38) = *(undefined4 *)(param_2 + 0x1c0);
    *(undefined4 *)((longlong)puVar6 + 0x1c4) = uVar2;
    *(undefined4 *)(puVar6 + 0x39) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x1cc) = uVar4;
    *(undefined4 *)(puVar6 + 0x3a) = *(undefined4 *)(param_2 + 0x1d0);
    *(undefined4 *)((longlong)puVar6 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
    *(undefined4 *)(puVar6 + 0x3b) = *(undefined4 *)(param_2 + 0x1d8);
    *(undefined4 *)((longlong)puVar6 + 0x1dc) = *(undefined4 *)(param_2 + 0x1dc);
    *(undefined4 *)(puVar6 + 0x3c) = *(undefined4 *)(param_2 + 0x1e0);
    *(undefined4 *)((longlong)puVar6 + 0x1e4) = *(undefined4 *)(param_2 + 0x1e4);
    *(undefined4 *)(puVar6 + 0x3d) = *(undefined4 *)(param_2 + 0x1e8);
    *(undefined4 *)((longlong)puVar6 + 0x1ec) = *(undefined4 *)(param_2 + 0x1ec);
    *(undefined4 *)(puVar6 + 0x3e) = *(undefined4 *)(param_2 + 0x1f0);
    *(undefined4 *)((longlong)puVar6 + 500) = *(undefined4 *)(param_2 + 500);
    *(undefined4 *)(puVar6 + 0x3f) = *(undefined4 *)(param_2 + 0x1f8);
    *(undefined4 *)((longlong)puVar6 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
    *(undefined4 *)(puVar6 + 0x40) = *(undefined4 *)(param_2 + 0x200);
    *(undefined4 *)((longlong)puVar6 + 0x204) = *(undefined4 *)(param_2 + 0x204);
    *(undefined4 *)(puVar6 + 0x41) = *(undefined4 *)(param_2 + 0x208);
    *(undefined4 *)((longlong)puVar6 + 0x20c) = *(undefined4 *)(param_2 + 0x20c);
    *(undefined4 *)(puVar6 + 0x42) = *(undefined4 *)(param_2 + 0x210);
    *(undefined4 *)((longlong)puVar6 + 0x214) = *(undefined4 *)(param_2 + 0x214);
    *(undefined4 *)(puVar6 + 0x43) = *(undefined4 *)(param_2 + 0x218);
    *(undefined4 *)((longlong)puVar6 + 0x21c) = *(undefined4 *)(param_2 + 0x21c);
    *(undefined4 *)(puVar6 + 0x44) = *(undefined4 *)(param_2 + 0x220);
    *(undefined4 *)((longlong)puVar6 + 0x224) = *(undefined4 *)(param_2 + 0x224);
    *(undefined4 *)(puVar6 + 0x45) = *(undefined4 *)(param_2 + 0x228);
    *(undefined4 *)((longlong)puVar6 + 0x22c) = *(undefined4 *)(param_2 + 0x22c);
    *(undefined4 *)(puVar6 + 0x46) = *(undefined4 *)(param_2 + 0x230);
    *(undefined4 *)((longlong)puVar6 + 0x234) = *(undefined4 *)(param_2 + 0x234);
    copy_string_data(puVar6 + 0x47,param_2 + 0x238);
    plVar1 = *(longlong **)(param_2 + 600);
    puVar6[0x4b] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    copy_string_data(puVar6 + 0x4c,param_2 + 0x260);
    plVar1 = *(longlong **)(param_2 + 0x280);
    puVar6[0x50] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    *(undefined4 *)(puVar6 + 0x51) = *(undefined4 *)(param_2 + 0x288);
    *(undefined4 *)((longlong)puVar6 + 0x28c) = *(undefined4 *)(param_2 + 0x28c);
    *(undefined4 *)(puVar6 + 0x52) = *(undefined4 *)(param_2 + 0x290);
    *(undefined4 *)((longlong)puVar6 + 0x294) = *(undefined4 *)(param_2 + 0x294);
    *(undefined4 *)(puVar6 + 0x53) = *(undefined4 *)(param_2 + 0x298);
    uVar2 = *(undefined4 *)(param_2 + 0x2a0);
    uVar3 = *(undefined4 *)(param_2 + 0x2a4);
    uVar4 = *(undefined4 *)(param_2 + 0x2a8);
    *(undefined4 *)((longlong)puVar6 + 0x29c) = *(undefined4 *)(param_2 + 0x29c);
    *(undefined4 *)(puVar6 + 0x54) = uVar2;
    *(undefined4 *)((longlong)puVar6 + 0x2a4) = uVar3;
    *(undefined4 *)(puVar6 + 0x55) = uVar4;
    *(undefined4 *)((longlong)puVar6 + 0x2ac) = *(undefined4 *)(param_2 + 0x2ac);
    *(undefined4 *)(puVar6 + 0x56) = *(undefined4 *)(param_2 + 0x2b0);
    *(undefined4 *)((longlong)puVar6 + 0x2b4) = *(undefined4 *)(param_2 + 0x2b4);
    *(undefined4 *)(puVar6 + 0x57) = *(undefined4 *)(param_2 + 0x2b8);
    *(undefined4 *)((longlong)puVar6 + 700) = *(undefined4 *)(param_2 + 700);
    *(undefined4 *)(puVar6 + 0x58) = *(undefined4 *)(param_2 + 0x2c0);
    *(undefined4 *)((longlong)puVar6 + 0x2c4) = *(undefined4 *)(param_2 + 0x2c4);
    *(undefined4 *)(puVar6 + 0x59) = *(undefined4 *)(param_2 + 0x2c8);
    *(undefined4 *)((longlong)puVar6 + 0x2cc) = *(undefined4 *)(param_2 + 0x2cc);
    *(undefined4 *)(puVar6 + 0x5a) = *(undefined4 *)(param_2 + 0x2d0);
    *(undefined4 *)((longlong)puVar6 + 0x2d4) = *(undefined4 *)(param_2 + 0x2d4);
    *(undefined4 *)(puVar6 + 0x5b) = *(undefined4 *)(param_2 + 0x2d8);
    *(undefined4 *)((longlong)puVar6 + 0x2dc) = *(undefined4 *)(param_2 + 0x2dc);
    *(undefined4 *)(puVar6 + 0x5c) = *(undefined4 *)(param_2 + 0x2e0);
    *(undefined4 *)((longlong)puVar6 + 0x2e4) = *(undefined4 *)(param_2 + 0x2e4);
    *(undefined4 *)(puVar6 + 0x5d) = *(undefined4 *)(param_2 + 0x2e8);
    *(undefined4 *)((longlong)puVar6 + 0x2ec) = *(undefined4 *)(param_2 + 0x2ec);
    *(undefined4 *)(puVar6 + 0x5e) = *(undefined4 *)(param_2 + 0x2f0);
    *(undefined4 *)((longlong)puVar6 + 0x2f4) = *(undefined4 *)(param_2 + 0x2f4);
    *(undefined4 *)(puVar6 + 0x5f) = *(undefined4 *)(param_2 + 0x2f8);
    *(undefined4 *)((longlong)puVar6 + 0x2fc) = *(undefined4 *)(param_2 + 0x2fc);
    *(undefined4 *)(puVar6 + 0x60) = *(undefined4 *)(param_2 + 0x300);
    *(undefined1 *)((longlong)puVar6 + 0x304) = *(undefined1 *)(param_2 + 0x304);
    *(undefined1 *)((longlong)puVar6 + 0x305) = *(undefined1 *)(param_2 + 0x305);
    *(undefined1 *)((longlong)puVar6 + 0x306) = *(undefined1 *)(param_2 + 0x306);
    *(undefined4 *)(puVar6 + 0x61) = *(undefined4 *)(param_2 + 0x308);
    *(undefined4 *)((longlong)puVar6 + 0x30c) = *(undefined4 *)(param_2 + 0x30c);
    *(undefined4 *)(puVar6 + 0x62) = *(undefined4 *)(param_2 + 0x310);
    *(undefined4 *)((longlong)puVar6 + 0x314) = *(undefined4 *)(param_2 + 0x314);
    *(undefined1 *)(puVar6 + 99) = *(undefined1 *)(param_2 + 0x318);
    copy_string_data(puVar6 + 100,param_2 + 800);
    *(undefined4 *)(puVar6 + 0x68) = *(undefined4 *)(param_2 + 0x340);
    return puVar6;
  }
  puVar7 = (undefined8 *)*param_1;
  lVar9 = ((longlong)puVar6 - (longlong)puVar7) / 0x348;
  if (lVar9 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = lVar9 * 2;
    if (lVar9 == 0) {
      lVar8 = 0;
      lVar10 = lVar8;
      goto joined_r0x0001801906da;
    }
  }
  lVar8 = allocate_string_table_memory(_DAT_180c8ed18,lVar9 * 0x348,(char)param_1[3]);
  puVar6 = (undefined8 *)param_1[1];
  puVar7 = (undefined8 *)*param_1;
  lVar10 = lVar8;
joined_r0x0001801906da:
  for (; puVar7 != puVar6; puVar7 = puVar7 + 0x69) {
    copy_string_entry_data(lVar8,puVar7);
    lVar8 = lVar8 + 0x348;
  }
  copy_string_entry_data(lVar8,param_2);
  puVar6 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)param_1[1];
  if (puVar6 != puVar7) {
    do {
      (**(code **)*puVar6)(puVar6,0);
      puVar6 = puVar6 + 0x69;
    } while (puVar6 != puVar7);
    puVar6 = (undefined8 *)*param_1;
  }
  if (puVar6 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    release_string_memory(puVar6);
  }
  puVar6 = (undefined8 *)(lVar9 * 0x348 + lVar10);
  *param_1 = lVar10;
  param_1[2] = (longlong)puVar6;
  param_1[1] = lVar8 + 0x348;
  return puVar6;
}

// 函数: 扩展字符串排序数组容量
// 原始函数名: FUN_18019067c
// 功能: 扩展字符串排序数组的容量，重新分配内存并复制现有数据
void expand_string_sort_array(longlong param_1)

{
  undefined8 *puVar1;
  longlong in_RAX;
  longlong lVar2;
  longlong unaff_RBX;
  undefined8 *puVar3;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = SUB168(SEXT816(in_RAX) * SEXT816(param_1),8);
  lVar2 = (lVar2 >> 8) - (lVar2 >> 0x3f);
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar2 * 2;
    if (lVar2 == 0) {
      lVar4 = 0;
      lVar5 = lVar4;
      goto joined_r0x0001801906da;
    }
  }
  lVar4 = allocate_string_table_memory(_DAT_180c8ed18,lVar2 * 0x348,(char)unaff_RSI[3]);
  unaff_RBP = unaff_RSI[1];
  unaff_RBX = *unaff_RSI;
  lVar5 = lVar4;
joined_r0x0001801906da:
  for (; unaff_RBX != unaff_RBP; unaff_RBX = unaff_RBX + 0x348) {
    copy_string_entry_data(lVar4,unaff_RBX);
    lVar4 = lVar4 + 0x348;
  }
  copy_string_entry_data(lVar4);
  puVar3 = (undefined8 *)*unaff_RSI;
  puVar1 = (undefined8 *)unaff_RSI[1];
  if (puVar3 != puVar1) {
    do {
      (**(code **)*puVar3)(puVar3,0);
      puVar3 = puVar3 + 0x69;
    } while (puVar3 != puVar1);
    puVar3 = (undefined8 *)*unaff_RSI;
  }
  if (puVar3 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    release_string_memory(puVar3);
  }
  *unaff_RSI = lVar5;
  unaff_RSI[2] = lVar2 * 0x348 + lVar5;
  unaff_RSI[1] = lVar4 + 0x348;
  return;
}

// 函数: 触发内存释放错误
// 原始函数名: FUN_180190743
// 功能: 触发内存释放错误处理程序
void trigger_memory_release_error(void)

{
                    // WARNING: Subroutine does not return
  release_string_memory();
}

// 函数: 清理字符串排序数组
// 原始函数名: FUN_180190780
// 功能: 清理字符串排序数组中的所有条目
void cleanup_string_sort_array(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != puVar1) {
    do {
      (**(code **)*puVar2)(puVar2,0);
      puVar2 = puVar2 + 0x69;
    } while (puVar2 != puVar1);
    param_1[1] = *param_1;
    return;
  }
  param_1[1] = (longlong)puVar2;
  return;
}

// 函数: 执行字符串快速排序
// 原始函数名: FUN_1801907f0
// 功能: 对字符串数组执行快速排序算法
void perform_string_quick_sort(longlong param_1,longlong param_2,undefined1 param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  int iVar6;
  undefined *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 auStack_368 [16];
  undefined *puStack_358;
  int iStack_350;
  
  if (param_1 != param_2) {
    iVar6 = 0;
    lVar8 = (param_2 - param_1) / 0x348;
    for (lVar2 = lVar8; lVar2 != 0; lVar2 = lVar2 >> 1) {
      iVar6 = iVar6 + 1;
    }
    initialize_string_sort_partition(param_1,param_2,(longlong)(iVar6 + -1) * 2,param_3,0xfffffffffffffffe);
    if (lVar8 < 0x1d) {
      perform_string_insertion_sort(param_1,param_2);
    }
    else {
      lVar8 = param_1 + 0x5be0;
      perform_string_insertion_sort(param_1,lVar8);
      if (lVar8 != param_2) {
        param_1 = param_1 + 0x5898;
LAB_1801908b0:
        copy_string_entry_data(auStack_368,lVar8);
        puVar9 = (undefined8 *)(param_1 + 0x10);
        lVar2 = lVar8;
        do {
          puVar7 = g_empty_string;
          if (puStack_358 != (undefined *)0x0) {
            puVar7 = puStack_358;
          }
          lVar3 = strstr(puVar7,g_string_suffix);
          puVar7 = g_empty_string;
          if ((undefined *)*puVar9 != (undefined *)0x0) {
            puVar7 = (undefined *)*puVar9;
          }
          lVar4 = strstr(puVar7,g_string_suffix);
          bVar10 = lVar4 != 0;
          if (lVar3 == 0) {
            if (bVar10) goto LAB_1801909bf;
            if (*(int *)(puVar9 + 1) != 0) {
              if (iStack_350 == 0) {
LAB_18019099a:
                bVar10 = true;
              }
              else {
                pbVar5 = (byte *)*puVar9;
                lVar3 = (longlong)puStack_358 - (longlong)pbVar5;
                do {
                  pbVar1 = pbVar5 + lVar3;
                  iVar6 = (uint)*pbVar5 - (uint)*pbVar1;
                  if (iVar6 != 0) break;
                  pbVar5 = pbVar5 + 1;
                } while (*pbVar1 != 0);
LAB_180190993:
                bVar10 = 0 < iVar6;
              }
            }
LAB_18019099c:
            if (!bVar10) goto LAB_1801909bf;
          }
          else if (bVar10) {
            if (*(int *)(puVar9 + 1) == 0) {
              bVar10 = false;
            }
            else {
              if (iStack_350 == 0) goto LAB_18019099a;
              pbVar5 = (byte *)*puVar9;
              lVar3 = (longlong)puStack_358 - (longlong)pbVar5;
              do {
                pbVar1 = pbVar5 + lVar3;
                iVar6 = (uint)*pbVar5 - (uint)*pbVar1;
                if (iVar6 != 0) goto LAB_180190993;
                pbVar5 = pbVar5 + 1;
              } while (*pbVar1 != 0);
              bVar10 = false;
            }
            goto LAB_18019099c;
          }
          swap_string_entries(lVar2,(param_1 - lVar8) + lVar2);
          lVar2 = lVar2 + -0x348;
          puVar9 = puVar9 + -0x69;
        } while( true );
      }
    }
  }
  return;
LAB_1801909bf:
  swap_string_entries(lVar2,auStack_368);
  cleanup_string_sort_buffer(auStack_368);
  lVar8 = lVar8 + 0x348;
  param_1 = param_1 + 0x348;
  if (lVar8 == param_2) {
    return;
  }
  goto LAB_1801908b0;
}

// 函数: 执行字符串插入排序
// 原始函数名: FUN_180190a20
// 功能: 对字符串数组执行插入排序算法
void perform_string_insertion_sort(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStackX_18;
  undefined4 uStackX_1c;
  
  if (param_1 != param_2) {
    for (puVar5 = param_1 + 1; puVar5 != param_2; puVar5 = puVar5 + 1) {
      uVar1 = *puVar5;
      puVar4 = puVar5;
      puVar2 = puVar5;
      while (puVar2 != param_1) {
        cVar3 = compare_string_entries(uVar1,puVar2[-1]);
        if (cVar3 == '\0') break;
        *(undefined4 *)puVar4 = *(undefined4 *)(puVar2 + -1);
        *(undefined4 *)((longlong)puVar4 + 4) = *(undefined4 *)((longlong)puVar2 + -4);
        puVar4 = puVar4 + -1;
        puVar2 = puVar2 + -1;
      }
      uStackX_18 = (undefined4)uVar1;
      uStackX_1c = (undefined4)((ulonglong)uVar1 >> 0x20);
      *(undefined4 *)puVar4 = uStackX_18;
      *(undefined4 *)((longlong)puVar4 + 4) = uStackX_1c;
    }
  }
  return;
}

// 函数: 执行字符串选择排序
// 原始函数名: FUN_180190a35
// 功能: 对字符串数组执行选择排序算法
void perform_string_selection_sort(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  
  puVar5 = param_1 + 1;
  do {
    if (puVar5 == param_2) {
      return;
    }
    uVar1 = *puVar5;
    _uStack0000000000000050 = uVar1;
    puVar4 = puVar5;
    puVar2 = puVar5;
    while (puVar2 != param_1) {
      cVar3 = compare_string_entries(uVar1,puVar2[-1]);
      if (cVar3 == '\0') break;
      *(undefined4 *)puVar4 = *(undefined4 *)(puVar2 + -1);
      *(undefined4 *)((longlong)puVar4 + 4) = *(undefined4 *)((longlong)puVar2 + -4);
      puVar4 = puVar4 + -1;
      puVar2 = puVar2 + -1;
    }
    puVar5 = puVar5 + 1;
    *(undefined4 *)puVar4 = uStack0000000000000050;
    *(undefined4 *)((longlong)puVar4 + 4) = uStack0000000000000054;
  } while( true );
}

// 函数: 执行字符串冒泡排序
// 原始函数名: FUN_180190a4d
// 功能: 对字符串数组执行冒泡排序算法
void perform_string_bubble_sort(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *unaff_RBP;
  undefined8 *puVar4;
  undefined8 *unaff_R14;
  undefined8 *unaff_R15;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  
  do {
    uVar1 = *unaff_R14;
    _uStack0000000000000050 = uVar1;
    puVar2 = unaff_R14;
    puVar4 = unaff_R14;
    while (puVar2 != unaff_RBP) {
      cVar3 = compare_string_entries(uVar1,puVar2[-1]);
      if (cVar3 == '\0') break;
      *(undefined4 *)puVar4 = *(undefined4 *)(puVar2 + -1);
      *(undefined4 *)((longlong)puVar4 + 4) = *(undefined4 *)((longlong)puVar2 + -4);
      puVar4 = puVar4 + -1;
      puVar2 = puVar2 + -1;
    }
    unaff_R14 = unaff_R14 + 1;
    *(undefined4 *)puVar4 = uStack0000000000000050;
    *(undefined4 *)((longlong)puVar4 + 4) = uStack0000000000000054;
    if (unaff_R14 == unaff_R15) {
      return;
    }
  } while( true );
}

// 函数: 空操作函数1
// 原始函数名: FUN_180190ad0
// 功能: 空操作，用于占位或调试
void perform_no_operation_1(void)

{
  return;
}

// 函数: 空操作函数2
// 原始函数名: FUN_180190adc
// 功能: 空操作，用于占位或调试
void perform_no_operation_2(void)

{
  return;
}

// 函数: 执行字符串归并排序
// 原始函数名: FUN_180190ae0
// 功能: 对字符串数组执行归并排序算法
void perform_string_merge_sort(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_368 [16];
  undefined *puStack_358;
  int iStack_350;
  
  if (param_1 != param_2) {
    for (puVar9 = param_1 + 0x69; puVar9 != param_2; puVar9 = puVar9 + 0x69) {
      copy_string_entry_data(auStack_368,puVar9);
      puVar10 = puVar9;
      if (puVar9 != param_1) {
        puVar11 = puVar9 + 2;
        do {
          puVar2 = puVar11 + -0x69;
          puVar7 = g_empty_string;
          if (puStack_358 != (undefined *)0x0) {
            puVar7 = puStack_358;
          }
          lVar4 = strstr(puVar7,g_string_suffix);
          puVar7 = g_empty_string;
          if ((undefined *)*puVar2 != (undefined *)0x0) {
            puVar7 = (undefined *)*puVar2;
          }
          lVar5 = strstr(puVar7,g_string_suffix);
          bVar12 = lVar5 != 0;
          if (lVar4 == 0) {
            if (bVar12) break;
            if (*(int *)(puVar11 + -0x68) != 0) {
              if (iStack_350 == 0) {
LAB_180190c1a:
                bVar12 = true;
              }
              else {
                pbVar6 = (byte *)*puVar2;
                lVar4 = (longlong)puStack_358 - (longlong)pbVar6;
                do {
                  pbVar3 = pbVar6 + lVar4;
                  iVar8 = (uint)*pbVar6 - (uint)*pbVar3;
                  if (iVar8 != 0) break;
                  pbVar6 = pbVar6 + 1;
                } while (*pbVar3 != 0);
LAB_180190c13:
                bVar12 = 0 < iVar8;
              }
            }
LAB_180190c1c:
            if (!bVar12) break;
          }
          else if (bVar12) {
            if (*(int *)(puVar11 + -0x68) == 0) {
              bVar12 = false;
            }
            else {
              if (iStack_350 == 0) goto LAB_180190c1a;
              pbVar6 = (byte *)*puVar2;
              lVar4 = (longlong)puStack_358 - (longlong)pbVar6;
              do {
                pbVar3 = pbVar6 + lVar4;
                iVar8 = (uint)*pbVar6 - (uint)*pbVar3;
                if (iVar8 != 0) goto LAB_180190c13;
                pbVar6 = pbVar6 + 1;
              } while (*pbVar3 != 0);
              bVar12 = false;
            }
            goto LAB_180190c1c;
          }
          puVar1 = puVar11 + -0x6b;
          swap_string_entries(puVar10,puVar1);
          puVar10 = puVar10 + -0x69;
          puVar11 = puVar2;
        } while (puVar1 != param_1);
      }
      swap_string_entries(puVar10,auStack_368);
      cleanup_string_sort_buffer(auStack_368);
    }
  }
  return;
}