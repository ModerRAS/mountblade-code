#include "TaleWorlds.Native.Split.h"

// 03_rendering_part437.c - 1 个函数

// 函数: void FUN_180508d30(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)
void FUN_180508d30(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  ushort *puVar2;
  byte bVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 unaff_RDI;
  
  iVar8 = *(int *)(param_1 + 0x570);
  if (iVar8 == param_2) {
    return;
  }
  *(int *)(param_1 + 0x570) = param_2;
  *(int *)(*(longlong *)(param_1 + 0x738) + 0x178) = param_2;
  if (-1 < *(int *)(param_1 + 0x564)) {
    *(undefined4 *)
     (*(longlong *)
       ((longlong)*(int *)(param_1 + 0x564) * 0xa60 + 0x37d8 + *(longlong *)(param_1 + 0x8d8)) +
     0x17c) = *(undefined4 *)(param_1 + 0x570);
  }
  if (iVar8 == 2) {
    uVar4 = 0xffffffff;
  }
  else {
    if (param_2 != 2) goto LAB_180508db8;
    uVar4 = *(undefined4 *)(param_1 + 0x10);
  }
  FUN_1804f1c90(*(undefined8 *)(param_1 + 0x8d8),uVar4,DAT_180c8ec8a);
LAB_180508db8:
  if ((_DAT_180c92514 != 1) && (_DAT_180c92514 != 4)) {
    uVar6 = *(uint *)(param_1 + 0x56c);
    if (param_2 == 1) {
      if ((uVar6 & 0x800) != 0) {
        FUN_180508bd0(param_1,1);
        uVar6 = *(uint *)(param_1 + 0x56c);
      }
      if ((uVar6 >> 0xe & 1) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x6e0);
        *(undefined4 *)(lVar7 + 0x21a8) = 0xfffffffe;
        *(undefined8 *)(lVar7 + 0x21ac) = 0xfffffffffffffffe;
        lVar7 = *(longlong *)(param_1 + 0x6e0);
        *(undefined4 *)(lVar7 + 0x10) = 0;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        *(undefined8 *)(lVar7 + 0x20) = 0;
        *(undefined4 *)(lVar7 + 0x28) = 0;
        *(undefined4 *)(lVar7 + 0x2c) = 0xbf800000;
        *(undefined8 *)(lVar7 + 0x30) = 0;
        *(undefined4 *)(lVar7 + 0x38) = 0xffffffff;
        puVar2 = (ushort *)(*(longlong *)(param_1 + 0x6e0) + 0x130);
        *puVar2 = *puVar2 | 0x19;
      }
    }
    else if ((uVar6 & 0x800) != 0) {
      FUN_180508bd0(param_1,0);
    }
  }
  if ((*(uint *)(param_1 + 0x56c) & 0x800) != 0) {
    bVar3 = *(byte *)(*(longlong *)(param_1 + 0x590) + 0x3424);
    bVar5 = bVar3 | 4;
    if (param_2 != 2) {
      bVar5 = bVar3 & 0xfb;
    }
    *(byte *)(*(longlong *)(param_1 + 0x590) + 0x3424) = bVar5;
    if (param_2 != 1) {
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x20) + 8);
      *puVar1 = *puVar1 & 0xffffffe3;
    }
  }
  if ((iVar8 == 1) && (param_2 == 0)) {
    if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
      iVar8 = *(int *)(param_1 + 0x10) * 0x10;
      FUN_18055d4d0(&DAT_180c925a0,iVar8 + 0x10);
      FUN_180560090((longlong)(iVar8 + 9) * 0xd08 + _DAT_180c92cf8);
      lVar7 = (longlong)iVar8 * 0xd08 + _DAT_180c92cf8;
      *(undefined8 *)(lVar7 + 0xa0) = *(undefined8 *)(lVar7 + 0x10);
      *(undefined8 *)(lVar7 + 0xa8) = *(undefined8 *)(lVar7 + 0x18);
      *(undefined8 *)(lVar7 + 0xb0) = *(undefined8 *)(lVar7 + 0x20);
      *(undefined8 *)(lVar7 + 0xb8) = *(undefined8 *)(lVar7 + 0x28);
      *(undefined8 *)(lVar7 + 0xc0) = *(undefined8 *)(lVar7 + 0x30);
      *(undefined8 *)(lVar7 + 200) = *(undefined8 *)(lVar7 + 0x38);
      *(undefined8 *)(lVar7 + 0xd0) = *(undefined8 *)(lVar7 + 0x40);
      *(undefined8 *)(lVar7 + 0xd8) = *(undefined8 *)(lVar7 + 0x48);
      *(undefined8 *)(lVar7 + 0xe0) = *(undefined8 *)(lVar7 + 0x50);
      *(undefined8 *)(lVar7 + 0xe8) = *(undefined8 *)(lVar7 + 0x58);
      *(undefined8 *)(lVar7 + 0xf0) = *(undefined8 *)(lVar7 + 0x60);
      *(undefined8 *)(lVar7 + 0xf8) = *(undefined8 *)(lVar7 + 0x68);
      *(undefined8 *)(lVar7 + 0x100) = *(undefined8 *)(lVar7 + 0x70);
      *(undefined8 *)(lVar7 + 0x108) = *(undefined8 *)(lVar7 + 0x78);
      *(undefined4 *)(lVar7 + 0x110) = *(undefined4 *)(lVar7 + 0x80);
      *(undefined4 *)(lVar7 + 0x114) = *(undefined4 *)(lVar7 + 0x84);
      *(undefined4 *)(lVar7 + 0x118) = *(undefined4 *)(lVar7 + 0x88);
      *(undefined4 *)(lVar7 + 0x11c) = *(undefined4 *)(lVar7 + 0x8c);
      *(undefined4 *)(lVar7 + 0x120) = *(undefined4 *)(lVar7 + 0x90);
      *(undefined4 *)(lVar7 + 0x124) = *(undefined4 *)(lVar7 + 0x94);
      *(undefined4 *)(lVar7 + 0x128) = *(undefined4 *)(lVar7 + 0x98);
      *(undefined4 *)(lVar7 + 300) = *(undefined4 *)(lVar7 + 0x9c);
      *(undefined8 *)(lVar7 + 0xcf4) = 0;
                    // WARNING: Subroutine does not return
      memset(*(undefined8 *)(lVar7 + 0xcc8),0,(longlong)(*(int *)(lVar7 + 0xcc0) >> 3),param_4,
             unaff_RDI);
    }
  }
  else if ((param_2 == 2) && (((*(byte *)(param_1 + 0x56c) & 8) != 0 && (_DAT_180c92514 == 1)))) {
    FUN_1805a3a20(param_1 + 0x28);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



