#include "TaleWorlds.Native.Split.h"

// 99_part_03_part046.c - 1 个函数

// 函数: void FUN_1801fa0a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
void FUN_1801fa0a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  (**(code **)(*param_1 + 0x50))
            (param_1,param_3,(int)param_1[0x8a],*(undefined4 *)((longlong)param_1 + 0x454),param_4,
             param_5,0);
  return;
}



undefined8 * FUN_1801fa0e0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1801fa180();
  *param_1 = &UNK_180a0ef58;
  *(undefined4 *)(param_1 + 0x8a) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x454) = param_3;
  return param_1;
}



undefined8 FUN_1801fa140(undefined8 param_1,ulonglong param_2)

{
  FUN_1801f9920();
  if ((param_2 & 1) != 0) {
    free(param_1,0x450);
  }
  return param_1;
}



undefined8 * FUN_1801fa180(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &UNK_180a0f068;
  param_1[1] = 0;
  param_1[2] = &UNK_18098bcb0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = &UNK_180a3c3e0;
  param_1[5] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x1060101;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0xff000000;
  *(undefined4 *)(param_1 + 0x21) = 0x40300ff;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0x30503;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x26] = 0x900;
  FUN_1808fc838(param_1 + 0x27,8,0x10,&SUB_18005d5f0,FUN_180045af0);
  FUN_1808fc838(param_1 + 0x39,0x98,4,FUN_180049970,FUN_180044a30);
  FUN_1808fc838(param_1 + 0x85,8,4,&SUB_18005d5f0,FUN_180045af0);
  param_1[0x89] = 0;
  param_1[1] = 0x3f8000003f800000;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  plVar1 = (longlong *)param_1[0x89];
  param_1[0x89] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(undefined2 *)((longlong)param_1 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10a) = 0x3000100;
  *(undefined2 *)((longlong)param_1 + 0x10e) = 0x400;
  *(undefined2 *)(param_1 + 0x20) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x103) = 1;
  *(undefined2 *)(param_1 + 0x26) = 0x400;
  return param_1;
}



longlong FUN_1801fa330(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined *puStack_60;
  undefined8 *puStack_58;
  uint uStack_50;
  undefined8 uStack_48;
  
  lVar7 = 7;
  FUN_1808fc838(param_1,0x48,7,FUN_1801feca0,FUN_1800596a0);
  puVar1 = (undefined8 *)(param_1 + 0x1f8);
  *puVar1 = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *puVar1 = &UNK_180a3c3e0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x218) = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x218) = &UNK_180a3c3e0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined1 *)(param_1 + 0x238) = 0;
  *(undefined1 *)(param_1 + 0x248) = 0;
  *(undefined1 *)(param_1 + 0x254) = 0;
  *(undefined1 *)(param_1 + 0x260) = 0;
  *(undefined1 *)(param_1 + 0x26c) = 0;
  *(undefined1 *)(param_1 + 0x278) = 0;
  *(undefined1 *)(param_1 + 0x284) = 0;
  *(undefined1 *)(param_1 + 0x290) = 0;
  *(undefined1 *)(param_1 + 0x29c) = 0;
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  *(undefined1 *)(param_1 + 0x2b4) = 0;
  *(undefined1 *)(param_1 + 0x2c0) = 0;
  *(undefined1 *)(param_1 + 0x2cc) = 0;
  *(undefined1 *)(param_1 + 0x2f0) = 0;
  *(undefined1 *)(param_1 + 0x2fc) = 0;
  *(undefined1 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x324) = 0;
  *(undefined8 *)(param_1 + 0x32c) = 0;
  *(undefined1 *)(param_1 + 0x334) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined1 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x34c) = 0;
  *(undefined8 *)(param_1 + 0x354) = 0;
  *(undefined1 *)(param_1 + 0x35c) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined4 *)(param_1 + 0x378) = 3;
  puVar2 = (undefined8 *)(param_1 + 0x388);
  *puVar2 = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined4 *)(param_1 + 0x398) = 0;
  *puVar2 = &UNK_180a3c3e0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined4 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = &UNK_180a3c3e0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  uVar4 = FUN_180628ca0();
  FUN_180627be0(puVar2,uVar4);
  *(undefined1 *)(param_1 + 0x380) = 1;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined1 *)(param_1 + 0x290) = 0;
  puStack_60 = &UNK_180a3c3e0;
  uStack_48 = 0;
  puStack_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_1806277c0(&puStack_60,7);
  *puStack_58 = 0x746c7561666564;
  uStack_50 = 7;
  FUN_1801fec30(puVar1,&puStack_60);
  plVar5 = (longlong *)(param_1 + 0x28);
  while( true ) {
    puStack_60 = &UNK_180a3c3e0;
    uStack_48 = 0;
    puStack_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_1806277c0(&puStack_60,4);
    *(undefined4 *)puStack_58 = 0x656e6f6e;
    *(undefined1 *)((longlong)puStack_58 + 4) = 0;
    uStack_50 = 4;
    if (puStack_58 != (undefined8 *)0x0) {
      FUN_1806277c0(plVar5 + -5,4);
    }
    uVar3 = uStack_50;
    *(undefined4 *)plVar5[-4] = *(undefined4 *)puStack_58;
    *(undefined4 *)(plVar5 + -3) = 4;
    if (plVar5[-4] != 0) {
      *(undefined1 *)(plVar5[-4] + 4) = 0;
    }
    *(undefined4 *)((longlong)plVar5 + -0xc) = uStack_48._4_4_;
    uVar6 = (ulonglong)uStack_50;
    if (puStack_58 != (undefined8 *)0x0) {
      FUN_1806277c0(plVar5 + -1,uVar6);
    }
    if (uVar3 != 0) break;
    *(undefined4 *)(plVar5 + 1) = 0;
    if (*plVar5 != 0) {
      *(undefined1 *)(uVar6 + *plVar5) = 0;
    }
    *(undefined4 *)((longlong)plVar5 + 0x14) = uStack_48._4_4_;
    *(undefined1 *)(plVar5 + 3) = 0;
    puStack_60 = &UNK_180a3c3e0;
    if (puStack_58 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puStack_58,puStack_58);
    }
    plVar5 = plVar5 + 9;
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      *(undefined8 *)(param_1 + 0x240) = 0;
      *(undefined1 *)(param_1 + 0x248) = 0;
      *(undefined8 *)(param_1 + 0x24c) = 0;
      *(undefined1 *)(param_1 + 0x254) = 0;
      *(undefined4 *)(param_1 + 600) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x25c) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x260) = 0;
      *(undefined4 *)(param_1 + 0x264) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x268) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x26c) = 0;
      *(undefined8 *)(param_1 + 0x270) = 0;
      *(undefined1 *)(param_1 + 0x278) = 0;
      *(undefined8 *)(param_1 + 0x27c) = 0;
      *(undefined1 *)(param_1 + 0x284) = 0;
      *(undefined8 *)(param_1 + 0x2a0) = 0;
      *(undefined1 *)(param_1 + 0x2a8) = 0;
      *(undefined8 *)(param_1 + 0x2ac) = 0;
      *(undefined1 *)(param_1 + 0x2b4) = 0;
      *(undefined4 *)(param_1 + 0x2b8) = 0x3f800000;
      *(undefined4 *)(param_1 + 700) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x2c0) = 0;
      *(undefined4 *)(param_1 + 0x2c4) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x2c8) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x2cc) = 0;
      *(undefined8 *)(param_1 + 0x294) = 0;
      *(undefined1 *)(param_1 + 0x29c) = 0;
      *(undefined8 *)(param_1 + 0x300) = 0;
      *(undefined8 *)(param_1 + 0x308) = 0x7f7fffff00000000;
      *(undefined8 *)(param_1 + 0x310) = 0;
      *(undefined8 *)(param_1 + 0x318) = 0x7f7fffff00000000;
      *(undefined1 *)(param_1 + 800) = 0;
      *(undefined8 *)(param_1 + 0x324) = 0x3f8000003f800000;
      *(undefined8 *)(param_1 + 0x32c) = 0x3f8000003f800000;
      *(undefined1 *)(param_1 + 0x334) = 0;
      *(undefined8 *)(param_1 + 0x338) = 0;
      *(undefined8 *)(param_1 + 0x340) = 0;
      *(undefined1 *)(param_1 + 0x348) = 0;
      *(undefined8 *)(param_1 + 0x34c) = 0;
      *(undefined8 *)(param_1 + 0x354) = 0;
      *(undefined1 *)(param_1 + 0x35c) = 0;
      *(undefined8 *)(param_1 + 0x2d0) = 0x3f8000003f800000;
      *(undefined8 *)(param_1 + 0x2d8) = 0x3f8000003f800000;
      *(undefined8 *)(param_1 + 0x2e0) = 0x3f8000003f800000;
      *(undefined8 *)(param_1 + 0x2e8) = 0x3f8000003f800000;
      *(undefined1 *)(param_1 + 0x2f0) = 0;
      *(undefined8 *)(param_1 + 0x2f4) = 0;
      *(undefined1 *)(param_1 + 0x2fc) = 0;
      *(undefined1 *)(param_1 + 0x381) = 0;
      return param_1;
    }
  }
                    // WARNING: Subroutine does not return
  memcpy(*plVar5,puStack_58,uVar6);
}



// WARNING: Removing unreachable block (ram,0x0001801fabc0)
// WARNING: Removing unreachable block (ram,0x0001801fabc8)
// WARNING: Removing unreachable block (ram,0x0001801fabce)
// WARNING: Removing unreachable block (ram,0x0001801fabdb)
// WARNING: Removing unreachable block (ram,0x0001801fac0c)
// WARNING: Removing unreachable block (ram,0x0001801fac14)
// WARNING: Removing unreachable block (ram,0x0001801fac17)
// WARNING: Removing unreachable block (ram,0x0001801fabe4)
// WARNING: Removing unreachable block (ram,0x0001801fabe9)
// WARNING: Removing unreachable block (ram,0x0001801fac30)
// WARNING: Removing unreachable block (ram,0x0001801fac41)
// WARNING: Removing unreachable block (ram,0x0001801fac5b)
// WARNING: Removing unreachable block (ram,0x0001801fac60)
// WARNING: Removing unreachable block (ram,0x0001801facc0)
// WARNING: Removing unreachable block (ram,0x0001801facc8)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




