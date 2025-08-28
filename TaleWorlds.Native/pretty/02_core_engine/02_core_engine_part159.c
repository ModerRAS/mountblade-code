#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part159.c - 11 个函数

// 函数: void initialize_data_structure(void)
void initialize_data_structure(void)

{
  longlong unaff_RBX;
  
  *(longlong *)unaff_RBX = unaff_RBX;
  *(undefined8 *)(unaff_RBX + 0x10) = 0;
  *(undefined1 *)(unaff_RBX + 0x18) = 0;
  *(undefined8 *)(unaff_RBX + 0x20) = 0;
  *(longlong *)(unaff_RBX + 8) = unaff_RBX;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_resource_data(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
void process_resource_data(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  if (((char)param_4 != '\0') || (param_3 == param_1)) goto LAB_180142a82;
  if (*(int *)(param_3 + 0x30) != 0) {
    if (*(int *)(param_5 + 0x10) == 0) goto LAB_180142a82;
    pbVar2 = *(byte **)(param_3 + 0x28);
    lVar4 = *(longlong *)(param_5 + 8) - (longlong)pbVar2;
    do {
      bVar1 = *pbVar2;
      uVar3 = (uint)pbVar2[lVar4];
      if (bVar1 != uVar3) break;
      pbVar2 = pbVar2 + 1;
    } while (uVar3 != 0);
    if (0 < (int)(bVar1 - uVar3)) goto LAB_180142a82;
  }
  uVar5 = 1;
LAB_180142a82:
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0x60,*(undefined1 *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  FUN_180627ae0(lVar4 + 0x20,param_5);
  *(undefined8 *)(lVar4 + 0x40) = &UNK_18098bcb0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(undefined4 *)(lVar4 + 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x40) = &UNK_180a3c3e0;
  *(undefined8 *)(lVar4 + 0x58) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(undefined4 *)(lVar4 + 0x50) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,param_3,param_1,uVar5);
}



undefined8 * setup_render_context(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  *param_1 = &UNK_180a07218;
  *param_1 = &UNK_180a071f8;
  puVar1 = param_1 + 1;
  *puVar1 = &UNK_18098bcb0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *puVar1 = &UNK_180a3c3e0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  plVar6 = param_1 + 9;
  *plVar6 = (longlong)&UNK_18098bcb0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *plVar6 = (longlong)&UNK_180a3c3e0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xd] = 0;
  plVar2 = param_1 + 0xe;
  *plVar2 = (longlong)&UNK_18098bcb0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *plVar2 = (longlong)&UNK_180a3c3e0;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  plVar5 = param_1 + 0x26;
  *plVar5 = (longlong)&UNK_18098bcb0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *plVar5 = (longlong)&UNK_180a3c3e0;
  param_1[0x29] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  plVar3 = param_1 + 0x2b;
  *plVar3 = (longlong)&UNK_18098bcb0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *plVar3 = (longlong)&UNK_180a3c3e0;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2f] = 0;
  plVar4 = param_1 + 0x31;
  *plVar4 = (longlong)&UNK_18098bcb0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *plVar4 = (longlong)&UNK_180a3c3e0;
  param_1[0x34] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x47] = &UNK_18098bcb0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x47] = &UNK_180a3c3e0;
  param_1[0x4a] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = &UNK_18098bcb0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x4c] = &UNK_180a3c3e0;
  param_1[0x4f] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x50] = 0;
  param_1[100] = &UNK_18098bcb0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[100] = &UNK_180a3c3e0;
  param_1[0x67] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0x3dcccccd;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0x3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0x7f7fffff3f800000;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x3b) = 0x3e3851ec;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x7f7fffff;
  uVar7 = FUN_180628ca0();
  FUN_180627be0(puVar1,uVar7);
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined2 *)((longlong)param_1 + 0x304) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x59) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0x40400000;
  *(undefined4 *)(param_1 + 0x18) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x13) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x37) = 0x3f800000;
  param_1[0x38] = 0x3f8000003f800000;
  param_1[0x39] = 0x7f7fffff3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x40400000;
  *(undefined1 *)(param_1 + 99) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0x3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x7f7fffff3f800000;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x21) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x22) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3f000000;
  param_1[0x24] = 0x3f800000;
  param_1[0x25] = 0;
  (**(code **)(*plVar5 + 0x10))(plVar5,&UNK_180a03098);
  plVar5 = (longlong *)param_1[0x2a];
  param_1[0x2a] = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x38))();
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,&UNK_180a03098);
  plVar5 = (longlong *)param_1[0x2f];
  param_1[0x2f] = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x38))();
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  (**(code **)(*plVar4 + 0x10))(plVar4,&UNK_180a030f8);
  plVar5 = (longlong *)param_1[0x35];
  param_1[0x35] = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x38))();
  }
  (**(code **)(*plVar6 + 0x10))(plVar6,&UNK_180a069c0);
  plVar6 = (longlong *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x38))();
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,&UNK_180a069b0);
  plVar6 = (longlong *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x38))();
  }
  *(undefined4 *)(param_1 + 0x3d) = 0x3fa66666;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0xc0400000;
  param_1[0x3e] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3f) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  (**(code **)(param_1[0x47] + 0x10))(param_1 + 0x47,&UNK_180a03060);
  plVar6 = (longlong *)param_1[0x4b];
  param_1[0x4b] = 0;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x38))();
  }
  (**(code **)(param_1[0x4c] + 0x10))(param_1 + 0x4c,&UNK_180a030a8);
  plVar6 = (longlong *)param_1[0x50];
  param_1[0x50] = 0;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x38))();
  }
  *(undefined4 *)(param_1 + 0x41) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x42) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x43) = 0x3f59999a;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x3f266666;
  *(undefined4 *)(param_1 + 0x44) = 0x3fe00000;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0x3f0ccccd;
  *(undefined4 *)(param_1 + 0x45) = 8;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x46) = 0x10;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0x41000000;
  *(undefined4 *)(param_1 + 0x53) = 0x41100000;
  *(undefined4 *)(param_1 + 0x51) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0x3f333333;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x52) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0x3f0ccccd;
  *(undefined4 *)(param_1 + 0x54) = 0x3f0ccccd;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x55) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x56) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x57) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 700) = 0x3f0ccccd;
  *(undefined4 *)(param_1 + 0x58) = 0x3e851eb8;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0x3efae148;
  *(undefined4 *)(param_1 + 0x3a) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x3f6147ae;
  *(undefined4 *)(param_1 + 0x5a) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x5b) = 0x44610000;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x41400000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  uVar7 = FUN_180628ca0();
  FUN_180627be0(param_1 + 100,uVar7);
  *(undefined4 *)(param_1 + 0x3c) = 0x3f59999a;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5e] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5f) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0x3f800000;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  return param_1;
}



undefined8 cleanup_memory_block(undefined8 param_1,ulonglong param_2)

{
  reset_render_state();
  if ((param_2 & 1) != 0) {
    free(param_1,0x348);
  }
  return param_1;
}





// 函数: void reset_render_state(undefined8 *param_1)
void reset_render_state(undefined8 *param_1)

{
  *param_1 = &UNK_180a071f8;
  if (DAT_180c8ecee == '\0') {
    initialize_render_system();
  }
  param_1[100] = &UNK_180a3c3e0;
  if (param_1[0x65] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[100] = &UNK_18098bcb0;
  if ((longlong *)param_1[0x50] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x50] + 0x38))();
  }
  param_1[0x4c] = &UNK_180a3c3e0;
  if (param_1[0x4d] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x4c] = &UNK_18098bcb0;
  if ((longlong *)param_1[0x4b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4b] + 0x38))();
  }
  param_1[0x47] = &UNK_180a3c3e0;
  if (param_1[0x48] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x47] = &UNK_18098bcb0;
  if ((longlong *)param_1[0x36] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x36] + 0x38))();
  }
  if ((longlong *)param_1[0x35] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x35] + 0x38))();
  }
  param_1[0x31] = &UNK_180a3c3e0;
  if (param_1[0x32] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x31] = &UNK_18098bcb0;
  if ((longlong *)param_1[0x2f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2f] + 0x38))();
  }
  param_1[0x2b] = &UNK_180a3c3e0;
  if (param_1[0x2c] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2b] = &UNK_18098bcb0;
  if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2a] + 0x38))();
  }
  param_1[0x26] = &UNK_180a3c3e0;
  if (param_1[0x27] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x26] = &UNK_18098bcb0;
  if ((longlong *)param_1[0x12] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x38))();
  }
  param_1[0xe] = &UNK_180a3c3e0;
  if (param_1[0xf] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xe] = &UNK_18098bcb0;
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x38))();
  }
  param_1[9] = &UNK_180a3c3e0;
  if (param_1[10] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[9] = &UNK_18098bcb0;
  param_1[1] = &UNK_180a3c3e0;
  if (param_1[2] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[1] = &UNK_18098bcb0;
  *param_1 = &UNK_180a07218;
  return;
}





// 函数: void initialize_render_system(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void initialize_render_system(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plStackX_8;
  longlong **pplStackX_10;
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  plStackX_8 = *(longlong **)(param_1 + 0x90);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_10 = &plStackX_8;
  if ((plStackX_8 != (longlong *)0x0) && ((*(uint *)(plStackX_8 + 0x65) & 0x20000000) == 0)) {
    FUN_18023b050(plStackX_8,0,param_3,param_4,uVar1);
  }
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  plStackX_8 = *(longlong **)(param_1 + 0x68);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_10 = &plStackX_8;
  if ((plStackX_8 != (longlong *)0x0) && ((*(uint *)(plStackX_8 + 0x65) & 0x20000000) == 0)) {
    FUN_18023b050(plStackX_8,0,param_3,param_4,uVar1);
  }
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  plStackX_8 = *(longlong **)(param_1 + 0x1a8);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_10 = &plStackX_8;
  if ((plStackX_8 != (longlong *)0x0) && ((*(uint *)(plStackX_8 + 0x65) & 0x20000000) == 0)) {
    FUN_18023b050(plStackX_8,0);
  }
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  plStackX_8 = *(longlong **)(param_1 + 0x1b0);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_10 = &plStackX_8;
  if ((plStackX_8 != (longlong *)0x0) && ((*(uint *)(plStackX_8 + 0x65) & 0x20000000) == 0)) {
    FUN_18023b050(plStackX_8,0);
  }
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  plStackX_8 = *(longlong **)(param_1 + 600);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_10 = &plStackX_8;
  if ((plStackX_8 != (longlong *)0x0) && ((*(uint *)(plStackX_8 + 0x65) & 0x20000000) == 0)) {
    FUN_18023b050(plStackX_8,0);
  }
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  plStackX_8 = *(longlong **)(param_1 + 0x280);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_10 = &plStackX_8;
  if ((plStackX_8 != (longlong *)0x0) && ((*(uint *)(plStackX_8 + 0x65) & 0x20000000) == 0)) {
    FUN_18023b050(plStackX_8,0);
  }
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_values_data(undefined8 param_1,longlong param_2)
void process_values_data(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auStack_178 [32];
  undefined *puStack_158;
  undefined4 *puStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_118;
  ulonglong uStack_48;
  char *pcVar8;
  
  if (param_2 == 0) {
    return;
  }
  uStack_118 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  pcVar7 = "values";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  for (pcVar7 = *(char **)(param_2 + 0x30); pcVar6 = (char *)0x0, pcVar7 != (char *)0x0;
      pcVar7 = *(char **)(pcVar7 + 0x58)) {
    pcVar4 = *(char **)pcVar7;
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)0x180d48d24;
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = *(char **)(pcVar7 + 0x10);
    }
    if (pcVar2 == pcVar8 + -0x180a069e7) {
      pcVar2 = pcVar2 + (longlong)pcVar4;
      pcVar6 = pcVar7;
      if (pcVar2 <= pcVar4) break;
      lVar5 = (longlong)&UNK_180a069e8 - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar5]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_1801436c2;
      }
    }
  }
LAB_1801436c2:
  puStack_158 = &UNK_180a3c3e0;
  uStack_140 = 0;
  puStack_150 = (undefined4 *)0x0;
  uStack_148 = 0;
  puVar3 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar3 = 0;
  puStack_150 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_140 = CONCAT44(uStack_140._4_4_,uVar1);
  *puVar3 = 0x656d616e;
  *(undefined1 *)(puVar3 + 1) = 0;
  uStack_148 = 4;
  FUN_180632650(pcVar6,&puStack_158);
  puStack_158 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}





// 函数: void calculate_angle_conversion(longlong param_1,longlong param_2)
void calculate_angle_conversion(longlong param_1,longlong param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x9c);
  *(undefined4 *)(param_2 + 0xc) = 0x7f7fffff;
                    // WARNING: Subroutine does not return
  FUN_1808fd400(fVar1 * 0.017453292);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_fog_settings(undefined8 param_1,longlong param_2)
void process_fog_settings(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  char *pcVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  pcVar6 = "fog";
  do {
    pcVar7 = pcVar6;
    pcVar6 = pcVar7 + 1;
  } while (*pcVar6 != '\0');
  pcVar7 = pcVar7 + -0x180a06bdf;
  for (pcVar6 = *(char **)(param_2 + 0x30); pcVar8 = (char *)0x0, pcVar6 != (char *)0x0;
      pcVar6 = *(char **)(pcVar6 + 0x58)) {
    pcVar4 = *(char **)pcVar6;
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)0x180d48d24;
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = *(char **)(pcVar6 + 0x10);
    }
    if (pcVar2 == pcVar7) {
      pcVar2 = pcVar2 + (longlong)pcVar4;
      pcVar8 = pcVar6;
      if (pcVar2 <= pcVar4) break;
      lVar5 = (longlong)&UNK_180a06be0 - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar5]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_1801452ee;
      }
    }
  }
LAB_1801452ee:
  puStack_50 = &UNK_180a3c3e0;
  uStack_38 = 0;
  puStack_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13,pcVar7,0xfffffffffffffffe);
  *(undefined1 *)puVar3 = 0;
  puStack_48 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  *puVar3 = 0x736e65645f676f66;
  *(undefined4 *)(puVar3 + 1) = 0x797469;
  uStack_40 = 0xb;
  FUN_180632650(pcVar8,&puStack_50);
  puStack_50 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_cloud_shadow_settings(undefined8 param_1,longlong param_2)
void process_cloud_shadow_settings(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined *puStack_50;
  undefined4 *puStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  pcVar5 = "cloud_shadow";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  pcVar6 = pcVar6 + -0x18098c08f;
  puVar7 = *(undefined8 **)(param_2 + 0x30);
  if (puVar7 != (undefined8 *)0x0) {
    do {
      pcVar5 = (char *)*puVar7;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = (char *)0x180d48d24;
        pcVar3 = (char *)0x0;
      }
      else {
        pcVar3 = (char *)puVar7[2];
      }
      if (pcVar3 == pcVar6) {
        pcVar3 = pcVar3 + (longlong)pcVar5;
        if (pcVar3 <= pcVar5) {
LAB_180146224:
          puStack_50 = &UNK_180a3c3e0;
          uStack_38 = 0;
          puStack_48 = (undefined4 *)0x0;
          uStack_40 = 0;
          puVar2 = (undefined4 *)
                   FUN_18062b420(_DAT_180c8ed18,0x14,CONCAT71((int7)((ulonglong)pcVar3 >> 8),0x13),
                                 pcVar6,0xfffffffffffffffe);
          *(undefined1 *)puVar2 = 0;
          puStack_48 = puVar2;
          uVar1 = FUN_18064e990(puVar2);
          uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
          *puVar2 = 0x756f6c63;
          puVar2[1] = 0x68735f64;
          puVar2[2] = 0x776f6461;
          puVar2[3] = 0x6f6d615f;
          puVar2[4] = 0x746e75;
          uStack_40 = 0x13;
          FUN_180632650(puVar7,&puStack_50);
          puStack_50 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar2);
        }
        lVar4 = (longlong)&DAT_18098c090 - (longlong)pcVar5;
        while (*pcVar5 == pcVar5[lVar4]) {
          pcVar5 = pcVar5 + 1;
          if (pcVar3 <= pcVar5) goto LAB_180146224;
        }
      }
      puVar7 = (undefined8 *)puVar7[0xb];
    } while (puVar7 != (undefined8 *)0x0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_sun_settings(undefined8 param_1,longlong param_2)
void process_sun_settings(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined *puStack_50;
  undefined4 *puStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  pcVar6 = "sun";
  do {
    pcVar7 = pcVar6;
    pcVar6 = pcVar7 + 1;
  } while (*pcVar6 != '\0');
  pcVar7 = pcVar7 + -0x180a06dc7;
  for (pcVar6 = *(char **)(param_2 + 0x30); pcVar8 = (char *)0x0, pcVar6 != (char *)0x0;
      pcVar6 = *(char **)(pcVar6 + 0x58)) {
    pcVar4 = *(char **)pcVar6;
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)0x180d48d24;
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = *(char **)(pcVar6 + 0x10);
    }
    if (pcVar2 == pcVar7) {
      pcVar2 = pcVar2 + (longlong)pcVar4;
      pcVar8 = pcVar6;
      if (pcVar2 <= pcVar4) break;
      lVar5 = (longlong)&UNK_180a06dc8 - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar5]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_180146a6e;
      }
    }
  }
LAB_180146a6e:
  puStack_50 = &UNK_180a3c3e0;
  uStack_38 = 0;
  puStack_48 = (undefined4 *)0x0;
  uStack_40 = 0;
  puVar3 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13,pcVar7,0xfffffffffffffffe);
  *(undefined1 *)puVar3 = 0;
  puStack_48 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  *puVar3 = 0x62796b73;
  puVar3[1] = 0x725f786f;
  puVar3[2] = 0x7461746f;
  puVar3[3] = 0x6e6f69;
  uStack_40 = 0xf;
  FUN_180632650(pcVar8,&puStack_50);
  puStack_50 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180147920(undefined8 param_1,longlong param_2)
void FUN_180147920(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined *puStack_50;
  undefined4 *puStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  pcVar5 = "postfx";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  pcVar6 = pcVar6 + -0x180a071e7;
  puVar7 = *(undefined8 **)(param_2 + 0x30);
  if (puVar7 != (undefined8 *)0x0) {
    do {
      pcVar5 = (char *)*puVar7;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = (char *)0x180d48d24;
        pcVar2 = (char *)0x0;
      }
      else {
        pcVar2 = (char *)puVar7[2];
      }
      if (pcVar2 == pcVar6) {
        pcVar2 = pcVar2 + (longlong)pcVar5;
        if (pcVar2 <= pcVar5) {
LAB_1801479b7:
          puStack_50 = &UNK_180a3c3e0;
          uStack_38 = 0;
          puStack_48 = (undefined4 *)0x0;
          uStack_40 = 0;
          puVar3 = (undefined4 *)
                   FUN_18062b420(_DAT_180c8ed18,0x15,CONCAT71((int7)((ulonglong)pcVar2 >> 8),0x13),
                                 pcVar6,0xfffffffffffffffe);
          *(undefined1 *)puVar3 = 0;
          puStack_48 = puVar3;
          uVar1 = FUN_18064e990(puVar3);
          uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
          *puVar3 = 0x67697262;
          puVar3[1] = 0x61707468;
          puVar3[2] = 0x745f7373;
          puVar3[3] = 0x73657268;
          puVar3[4] = 0x646c6f68;
          *(undefined1 *)(puVar3 + 5) = 0;
          uStack_40 = 0x14;
          FUN_180632650(puVar7,&puStack_50);
          puStack_50 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar3);
        }
        lVar4 = (longlong)&UNK_180a071e8 - (longlong)pcVar5;
        while (*pcVar5 == pcVar5[lVar4]) {
          pcVar5 = pcVar5 + 1;
          if (pcVar2 <= pcVar5) goto LAB_1801479b7;
        }
      }
      puVar7 = (undefined8 *)puVar7[0xb];
    } while (puVar7 != (undefined8 *)0x0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180149590(longlong param_1,longlong param_2)
void FUN_180149590(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  longlong *plStackX_18;
  
  pcVar7 = "cubemap_texture";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  for (puVar5 = *(undefined8 **)(param_2 + 0x30); puVar5 != (undefined8 *)0x0;
      puVar5 = (undefined8 *)puVar5[0xb]) {
    pcVar7 = (char *)*puVar5;
    if (pcVar7 == (char *)0x0) {
      pcVar4 = (char *)0x0;
      pcVar7 = (char *)0x180d48d24;
    }
    else {
      pcVar4 = (char *)puVar5[2];
    }
    if (pcVar4 == pcVar8 + -0x180a071d7) {
      pcVar4 = pcVar4 + (longlong)pcVar7;
      if (pcVar4 <= pcVar7) goto LAB_18014961e;
      lVar6 = (longlong)&UNK_180a071d8 - (longlong)pcVar7;
      while (*pcVar7 == pcVar7[lVar6]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar4 <= pcVar7) goto LAB_18014961e;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_18014961e:
  pcVar7 = "env_map_name";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  puVar5 = (undefined8 *)puVar5[8];
  do {
    if (puVar5 == (undefined8 *)0x0) {
LAB_1801496a3:
      puVar5 = (undefined8 *)FUN_1800b08e0(_DAT_180c86930,&plStackX_18,param_1 + 0x188,1);
      uVar1 = *puVar5;
      *puVar5 = 0;
      plVar2 = *(longlong **)(param_1 + 0x1a8);
      *(undefined8 *)(param_1 + 0x1a8) = uVar1;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      if (plStackX_18 != (longlong *)0x0) {
        (**(code **)(*plStackX_18 + 0x38))();
      }
      plVar2 = *(longlong **)(param_1 + 0x1a8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
        plVar3 = *(longlong **)(param_1 + 0x1b0);
        *(longlong **)(param_1 + 0x1b0) = plVar2;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x38))();
        }
      }
      return;
    }
    pcVar7 = (char *)*puVar5;
    if (pcVar7 == (char *)0x0) {
      pcVar4 = (char *)0x0;
      pcVar7 = (char *)0x180d48d24;
    }
    else {
      pcVar4 = (char *)puVar5[2];
    }
    if (pcVar4 == pcVar8 + -0x180a071c7) {
      pcVar4 = pcVar4 + (longlong)pcVar7;
      if (pcVar4 <= pcVar7) {
LAB_180149684:
        lVar6 = 0x180d48d24;
        if (puVar5[1] != 0) {
          lVar6 = puVar5[1];
        }
        (**(code **)(*(longlong *)(param_1 + 0x188) + 0x10))
                  (param_1 + 0x188,lVar6,pcVar4,puVar5,0xfffffffffffffffe);
        goto LAB_1801496a3;
      }
      lVar6 = (longlong)&UNK_180a071c8 - (longlong)pcVar7;
      while (*pcVar7 == pcVar7[lVar6]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar4 <= pcVar7) goto LAB_180149684;
      }
    }
    puVar5 = (undefined8 *)puVar5[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * FUN_180149750(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
              0x48) < _DAT_180d49288) {
    FUN_1808fcb90(&DAT_180d49288);
    if (_DAT_180d49288 == -1) {
      _DAT_180d49290 = &UNK_1809fcc58;
      _DAT_180d49298 = &DAT_180d492a8;


