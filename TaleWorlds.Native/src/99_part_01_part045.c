#include "TaleWorlds.Native.Split.h"

// 99_part_01_part045.c - 2 个函数

// 函数: void FUN_1800cfb40(undefined8 param_1,longlong param_2,longlong *param_3)
void FUN_1800cfb40(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [8];
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined4 uStack_f8;
  undefined1 auStack_f0 [72];
  undefined *apuStack_a8 [12];
  ulonglong uStack_48;
  
  lVar9 = _DAT_180c86938;
  uVar4 = _DAT_180c86890;
  uStack_110 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_148;
  iVar1 = *(int *)(param_2 + 0x25a8);
  if ((0 < iVar1) && ((*(byte *)(param_2 + 0x35c0) & 0x40) != 0)) {
    lVar5 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(undefined4 *)(lVar5 + 0x11f0) = *(undefined4 *)(lVar5 + 0x1230);
    *(undefined4 *)(lVar5 + 0x11f4) = *(undefined4 *)(lVar5 + 0x1234);
    *(undefined4 *)(lVar5 + 0x11f8) = *(undefined4 *)(lVar5 + 0x1238);
    *(undefined4 *)(lVar5 + 0x11fc) = *(undefined4 *)(lVar5 + 0x123c);
    *(undefined4 *)(lVar5 + 0x1200) = *(undefined4 *)(lVar5 + 0x1240);
    *(undefined4 *)(lVar5 + 0x1204) = *(undefined4 *)(lVar5 + 0x1244);
    *(undefined4 *)(lVar5 + 0x1208) = *(undefined4 *)(lVar5 + 0x1248);
    *(undefined4 *)(lVar5 + 0x120c) = *(undefined4 *)(lVar5 + 0x124c);
    *(undefined4 *)(lVar5 + 0x1210) = *(undefined4 *)(lVar5 + 0x1250);
    *(undefined4 *)(lVar5 + 0x1214) = *(undefined4 *)(lVar5 + 0x1254);
    *(undefined4 *)(lVar5 + 0x1218) = *(undefined4 *)(lVar5 + 0x1258);
    *(undefined4 *)(lVar5 + 0x121c) = *(undefined4 *)(lVar5 + 0x125c);
    *(undefined4 *)(lVar5 + 0x1220) = *(undefined4 *)(lVar5 + 0x1260);
    *(undefined4 *)(lVar5 + 0x1224) = *(undefined4 *)(lVar5 + 0x1264);
    *(undefined4 *)(lVar5 + 0x1228) = *(undefined4 *)(lVar5 + 0x1268);
    *(undefined4 *)(lVar5 + 0x122c) = *(undefined4 *)(lVar5 + 0x126c);
    lVar5 = *(longlong *)(lVar9 + 0x1cd8);
    FUN_18029fc10(lVar5,*(undefined8 *)(lVar9 + 0x1c70),lVar5 + 0x1100,0x6d0);
    FUN_18024c0f0(param_2,apuStack_a8);
    FUN_1802c22a0(auStack_128,&UNK_180a03fa0);
    ppuStack_120 = &puStack_108;
    plVar7 = (longlong *)0x0;
    puStack_108 = &UNK_1809fcc58;
    puStack_100 = auStack_f0;
    uStack_f8 = 0;
    auStack_f0[0] = 0;
    FUN_180049bf0(&puStack_108,&UNK_180a03f80);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_108);
    lVar9 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    if ((*(longlong *)(lVar9 + 0x84b8) != 0) ||
       ((*(int *)(lVar9 + 0x8878) != -1 || (*(int *)(lVar9 + 0x8a78) != 0x10)))) {
      uStack_118 = 0;
      (**(code **)(**(longlong **)(lVar9 + 0x8400) + 0x40))
                (*(longlong **)(lVar9 + 0x8400),0x10,1,&uStack_118);
      *(undefined8 *)(lVar9 + 0x84b8) = 0;
      *(undefined4 *)(lVar9 + 0x8878) = 0xffffffff;
      *(undefined4 *)(lVar9 + 0x8a78) = 0x10;
      *(int *)(lVar9 + 0x82b4) = *(int *)(lVar9 + 0x82b4) + 1;
    }
    lVar9 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    if (((*(longlong *)(lVar9 + 0x8540) != 0) || (*(int *)(lVar9 + 0x88bc) != -1)) ||
       (*(int *)(lVar9 + 0x8abc) != 0x10)) {
      ppuStack_120 = (undefined **)0x0;
      (**(code **)(**(longlong **)(lVar9 + 0x8400) + 0x40))
                (*(longlong **)(lVar9 + 0x8400),0x21,1,&ppuStack_120);
      *(undefined8 *)(lVar9 + 0x8540) = 0;
      *(undefined4 *)(lVar9 + 0x88bc) = 0xffffffff;
      *(undefined4 *)(lVar9 + 0x8abc) = 0x10;
      *(int *)(lVar9 + 0x82b4) = *(int *)(lVar9 + 0x82b4) + 1;
    }
    lVar5 = FUN_180245280(param_2);
    lVar9 = _DAT_180c86938;
    plVar3 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
    iVar2 = *(int *)(param_2 + 0x357c);
    plVar8 = plVar7;
    if (*(longlong *)(lVar5 + 0x1e0) != 0) {
      if (_DAT_180c86870 != 0) {
        *(longlong *)(lVar5 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
      }
      plVar8 = (longlong *)((longlong)(iVar2 * 2 + 1) * 0x10 + *(longlong *)(lVar5 + 0x1e0));
      if ((plVar8 != (longlong *)0x0) && (*plVar8 != 0)) {
        (**(code **)(*plVar3 + 0x70))(plVar3,*plVar8,4);
        lVar9 = _DAT_180c86938;
      }
    }
    plVar3[0x107e] = (longlong)plVar8;
    FUN_18029ad30(*(undefined8 *)(lVar9 + 0x1cd8),0,param_3);
    FUN_18029de40(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),1);
    if (0 < iVar1) {
      do {
        lVar9 = *(longlong *)
                 (*(longlong *)(param_2 + 0x25b0 + ((ulonglong)plVar7 >> 0xb) * 8) + 0x10 +
                 (ulonglong)(uint)((int)plVar7 + (int)((ulonglong)plVar7 >> 0xb) * -0x800) * 0x18);
        *(undefined4 *)(lVar9 + 0xc4) = 1;
        *(undefined4 *)(lVar9 + 0xa4) = *(undefined4 *)(*param_3 + 0x324);
        *(undefined4 *)(lVar9 + 0xa0) = *(undefined4 *)(lVar5 + 0x324);
        FUN_1800e8640(uVar4);
        uVar6 = (int)plVar7 + 1;
        plVar7 = (longlong *)(ulonglong)uVar6;
      } while ((int)uVar6 < iVar1);
    }
    FUN_1802c2ac0(&puStack_108);
    _DAT_180c8695c = _DAT_180c8695c + -1;
    (**(code **)(*_DAT_180c86968 + 0x20))();
    apuStack_a8[0] = &UNK_18098bcb0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800cfee0(longlong param_1,longlong param_2)
void FUN_1800cfee0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_228 [32];
  undefined4 uStack_208;
  undefined *puStack_1a0;
  longlong lStack_198;
  undefined4 uStack_188;
  undefined1 auStack_180 [8];
  int iStack_178;
  undefined4 uStack_174;
  uint uStack_170;
  undefined8 uStack_138;
  undefined1 auStack_c8 [128];
  ulonglong uStack_48;
  
  uStack_138 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_228;
  uStack_208 = 0;
  if (((*(byte *)(param_2 + 0x1bd8) & 0x20) == 0) || (*(char *)(param_1 + 0x1507) == '\0')) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_228);
  }
  FUN_1800baa00(auStack_180);
  while( true ) {
    if (((int)uStack_170 < 1) ||
       (lVar2 = strstr(CONCAT44(uStack_174,iStack_178),&DAT_1809fcfb8), lVar2 == 0)) {
      cVar1 = FUN_180624a00(auStack_180);
      if (cVar1 == '\0') {
        FUN_180624910(auStack_180);
      }
                    // WARNING: Subroutine does not return
      memset(auStack_c8,0,0x80);
    }
    iVar7 = 1;
    iVar4 = (int)lVar2 - iStack_178;
    if (uStack_170 < iVar4 + 1U) {
      iVar7 = uStack_170 - iVar4;
    }
    uVar6 = iVar4 + iVar7;
    if (uVar6 < uStack_170) {
      lVar5 = (longlong)(int)uVar6;
      do {
        *(undefined1 *)((CONCAT44(uStack_174,iStack_178) - (longlong)iVar7) + lVar5) =
             *(undefined1 *)(CONCAT44(uStack_174,iStack_178) + lVar5);
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 1;
      } while (uVar6 < uStack_170);
    }
    uStack_170 = uStack_170 - iVar7;
    *(undefined1 *)((ulonglong)uStack_170 + CONCAT44(uStack_174,iStack_178)) = 0;
    uVar3 = FUN_180627910(&puStack_1a0,&DAT_1809fe2c8);
    FUN_1806288c0(auStack_180,(int)lVar2 - iStack_178,uVar3);
    puStack_1a0 = &UNK_180a3c3e0;
    if (lStack_198 != 0) break;
    lStack_198 = 0;
    uStack_188 = 0;
    puStack_1a0 = &UNK_18098bcb0;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




