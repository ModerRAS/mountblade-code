#include "TaleWorlds.Native.Split.h"

// 99_part_02_part014.c - 4 个函数

// 函数: void FUN_1800f2940(longlong param_1)
void FUN_1800f2940(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined **ppuVar8;
  undefined1 auStack_298 [32];
  undefined4 uStack_278;
  undefined4 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_260;
  uint uStack_258;
  undefined8 uStack_250;
  undefined1 uStack_248;
  undefined4 uStack_240;
  undefined **ppuStack_238;
  longlong *plStack_230;
  longlong *plStack_228;
  undefined ***pppuStack_220;
  longlong *plStack_218;
  longlong *plStack_210;
  longlong *plStack_208;
  longlong *plStack_200;
  longlong *plStack_1f8;
  longlong *plStack_1f0;
  undefined **ppuStack_1e8;
  longlong lStack_1e0;
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  longlong *plStack_1c8;
  longlong *plStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined4 uStack_1a8;
  undefined1 auStack_1a0 [128];
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  int iStack_100;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [32];
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined4 uStack_58;
  undefined1 auStack_50 [32];
  ulonglong uStack_30;
  
  uStack_1d0 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_298;
  lStack_1e0 = param_1 + 0x2b8;
  uStack_1d8 = 0;
  AcquireSRWLockExclusive();
  uStack_1d8 = 1;
  uVar2 = *(uint *)(param_1 + 0x58);
  if (((*(longlong *)(param_1 + 0x420) == 0) ||
      (*(uint *)(*(longlong *)(param_1 + 0x420) + 0x3c) < uVar2)) ||
     (*(char *)(param_1 + 0x3a0) != '\0')) {
    puStack_d8 = &UNK_18098bc80;
    puStack_d0 = auStack_c0;
    auStack_c0[0] = 0;
    uStack_c8 = 0x16;
    strcpy_s(auStack_c0,0x20,&UNK_180a04b50);
    uStack_240 = 1;
    uStack_248 = 1;
    uStack_250 = 0;
    uStack_260 = 4;
    uStack_268 = 5;
    uStack_270 = 0;
    uStack_278 = 5;
    uStack_258 = uVar2 * 2;
    puVar4 = (undefined8 *)FUN_1800b0a10();
    uVar5 = *puVar4;
    *puVar4 = 0;
    plStack_218 = *(longlong **)(param_1 + 0x388);
    *(undefined8 *)(param_1 + 0x388) = uVar5;
    if (plStack_218 != (longlong *)0x0) {
      (**(code **)(*plStack_218 + 0x38))();
    }
    if (plStack_210 != (longlong *)0x0) {
      (**(code **)(*plStack_210 + 0x38))();
    }
    puStack_d8 = &UNK_18098bcb0;
    puStack_a0 = &UNK_18098bc80;
    puStack_98 = auStack_88;
    auStack_88[0] = 0;
    uStack_90 = 0x16;
    strcpy_s(auStack_88,0x20,&UNK_180a04b50);
    uStack_240 = 1;
    uStack_248 = 1;
    uStack_250 = 0;
    uStack_260 = 4;
    uStack_268 = 5;
    uStack_270 = 0;
    uStack_278 = 5;
    uStack_258 = uVar2 * 2;
    puVar4 = (undefined8 *)FUN_1800b0a10();
    uVar5 = *puVar4;
    *puVar4 = 0;
    plStack_208 = *(longlong **)(param_1 + 0x390);
    *(undefined8 *)(param_1 + 0x390) = uVar5;
    if (plStack_208 != (longlong *)0x0) {
      (**(code **)(*plStack_208 + 0x38))();
    }
    if (plStack_200 != (longlong *)0x0) {
      (**(code **)(*plStack_200 + 0x38))();
    }
    puStack_a0 = &UNK_18098bcb0;
    puStack_68 = &UNK_18098bc80;
    puStack_60 = auStack_50;
    auStack_50[0] = 0;
    uStack_58 = 0x14;
    strcpy_s(auStack_50,0x20,&UNK_180a04b38);
    uStack_240 = 1;
    uStack_248 = 1;
    uStack_250 = 0;
    uStack_260 = 4;
    uStack_268 = 5;
    uStack_270 = 0;
    uStack_278 = 5;
    uStack_258 = uVar2;
    puVar4 = (undefined8 *)FUN_1800b0a10();
    uVar5 = *puVar4;
    *puVar4 = 0;
    plStack_1f8 = *(longlong **)(param_1 + 0x398);
    *(undefined8 *)(param_1 + 0x398) = uVar5;
    if (plStack_1f8 != (longlong *)0x0) {
      (**(code **)(*plStack_1f8 + 0x38))();
    }
    if (plStack_1f0 != (longlong *)0x0) {
      (**(code **)(*plStack_1f0 + 0x38))();
    }
    puStack_68 = &UNK_18098bcb0;
    if (*(longlong *)(param_1 + 0x420) != 0) {
      ppuStack_238 = &puStack_1b8;
      puStack_1b8 = &UNK_1809fcc28;
      puStack_1b0 = auStack_1a0;
      uStack_1a8 = 0;
      auStack_1a0[0] = 0;
      uStack_120 = 7;
      uStack_118 = *(undefined8 *)(param_1 + 0x398);
      puStack_110 = *(undefined8 **)(param_1 + 0x420);
      uStack_108 = 0;
      iStack_100 = *(int *)(puStack_110 + 8) * *(int *)((longlong)puStack_110 + 0x3c);
      if ((undefined *)*puStack_110 == &UNK_180a176f8) {
        LOCK();
        *(int *)(puStack_110 + 1) = *(int *)(puStack_110 + 1) + 1;
        UNLOCK();
      }
      else {
        (**(code **)((undefined *)*puStack_110 + 0x28))();
      }
      puVar3 = (undefined *)**(undefined8 **)(param_1 + 0x398);
      if (puVar3 == &UNK_180a176f8) {
        LOCK();
        piVar1 = (int *)(*(undefined8 **)(param_1 + 0x398) + 1);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      else {
        (**(code **)(puVar3 + 0x28))();
      }
      uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
      plVar6 = (longlong *)FUN_18005ce30(uVar5,&puStack_1b8);
      plStack_1c8 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6);
      }
      uVar5 = _DAT_180c82868;
      pppuStack_220 = (undefined ***)&plStack_230;
      plStack_230 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6);
      }
      FUN_18005e370(uVar5,&plStack_230);
      uStack_118 = *(undefined8 *)(param_1 + 0x388);
      puStack_110 = *(undefined8 **)(param_1 + 0x410);
      uStack_108 = 0;
      iStack_100 = *(int *)(puStack_110 + 8) * *(int *)((longlong)puStack_110 + 0x3c);
      if ((undefined *)*puStack_110 == &UNK_180a176f8) {
        LOCK();
        *(int *)(puStack_110 + 1) = *(int *)(puStack_110 + 1) + 1;
        UNLOCK();
      }
      else {
        (**(code **)((undefined *)*puStack_110 + 0x28))();
      }
      puVar3 = (undefined *)**(undefined8 **)(param_1 + 0x388);
      if (puVar3 == &UNK_180a176f8) {
        LOCK();
        piVar1 = (int *)(*(undefined8 **)(param_1 + 0x388) + 1);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      else {
        (**(code **)(puVar3 + 0x28))();
      }
      uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
      plVar7 = (longlong *)FUN_18005ce30(uVar5,&puStack_1b8);
      plStack_1c0 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7);
      }
      uVar5 = _DAT_180c82868;
      pppuStack_220 = (undefined ***)&plStack_228;
      plStack_228 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7);
      }
      FUN_18005e370(uVar5,&plStack_228);
      uStack_118 = *(undefined8 *)(param_1 + 0x390);
      puStack_110 = *(undefined8 **)(param_1 + 0x418);
      uStack_108 = 0;
      iStack_100 = *(int *)(puStack_110 + 8) * *(int *)((longlong)puStack_110 + 0x3c);
      if ((undefined *)*puStack_110 == &UNK_180a176f8) {
        LOCK();
        *(int *)(puStack_110 + 1) = *(int *)(puStack_110 + 1) + 1;
        UNLOCK();
      }
      else {
        (**(code **)((undefined *)*puStack_110 + 0x28))();
      }
      puVar3 = (undefined *)**(undefined8 **)(param_1 + 0x390);
      if (puVar3 == &UNK_180a176f8) {
        LOCK();
        piVar1 = (int *)(*(undefined8 **)(param_1 + 0x390) + 1);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      else {
        (**(code **)(puVar3 + 0x28))();
      }
      uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
      ppuVar8 = (undefined **)FUN_18005ce30(uVar5,&puStack_1b8);
      ppuStack_1e8 = ppuVar8;
      if (ppuVar8 != (undefined **)0x0) {
        (**(code **)(*ppuVar8 + 0x28))(ppuVar8);
      }
      uVar5 = _DAT_180c82868;
      pppuStack_220 = &ppuStack_238;
      ppuStack_238 = ppuVar8;
      if (ppuVar8 != (undefined **)0x0) {
        (**(code **)(*ppuVar8 + 0x28))(ppuVar8);
      }
      FUN_18005e370(uVar5,&ppuStack_238);
      *(undefined1 *)(param_1 + 0x3a0) = 0;
      if (ppuVar8 != (undefined **)0x0) {
        (**(code **)(*ppuVar8 + 0x38))(ppuVar8);
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7);
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      ppuStack_1e8 = &puStack_1b8;
      puStack_1b8 = &UNK_18098bcb0;
    }
  }
  ReleaseSRWLockExclusive(lStack_1e0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_298);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800f2fd0(void)
void FUN_1800f2fd0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  lVar4 = _DAT_180c8a980;
  lVar6 = _DAT_180c8a980 + 0x2b8;
  AcquireSRWLockExclusive(lVar6);
  iVar5 = (int)(*(longlong *)(lVar4 + 0x148) - *(longlong *)(lVar4 + 0x140) >> 3);
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x140) + lVar8 * 8);
      *(undefined8 *)(lVar1 + 0x118) = *(undefined8 *)(lVar1 + 0xb0);
      *(undefined8 *)(lVar1 + 0x120) = *(undefined8 *)(lVar1 + 0xb8);
      *(undefined8 *)(lVar1 + 0x128) = *(undefined8 *)(lVar1 + 0xc0);
      *(undefined8 *)(lVar1 + 0x130) = *(undefined8 *)(lVar1 + 200);
      *(undefined8 *)(lVar1 + 0x138) = *(undefined8 *)(lVar1 + 0xd0);
      *(undefined8 *)(lVar1 + 0x140) = *(undefined8 *)(lVar1 + 0xd8);
      *(undefined8 *)(lVar1 + 0x148) = *(undefined8 *)(lVar1 + 0xe0);
      *(undefined8 *)(lVar1 + 0x150) = *(undefined8 *)(lVar1 + 0xe8);
      *(undefined8 *)(lVar1 + 0x158) = *(undefined8 *)(lVar1 + 0xf0);
      *(undefined8 *)(lVar1 + 0x160) = *(undefined8 *)(lVar1 + 0xf8);
      *(undefined8 *)(lVar1 + 0x168) = *(undefined8 *)(lVar1 + 0x100);
      *(undefined8 *)(lVar1 + 0x170) = *(undefined8 *)(lVar1 + 0x108);
      *(undefined8 *)(lVar1 + 0x178) = *(undefined8 *)(lVar1 + 0x110);
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar5);
  }
  ReleaseSRWLockExclusive(lVar6);
  plVar7 = *(longlong **)(lVar4 + 0x370);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plVar2 = *(longlong **)(lVar4 + 0x468);
  *(longlong **)(lVar4 + 0x468) = plVar7;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar7 = *(longlong **)(lVar4 + 0x378);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plVar2 = *(longlong **)(lVar4 + 0x458);
  *(longlong **)(lVar4 + 0x458) = plVar7;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar7 = *(longlong **)(lVar4 + 0x380);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plVar2 = *(longlong **)(lVar4 + 0x460);
  *(longlong **)(lVar4 + 0x460) = plVar7;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar7 = *(longlong **)(lVar4 + 0x388);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plVar2 = *(longlong **)(lVar4 + 0x410);
  *(longlong **)(lVar4 + 0x410) = plVar7;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar7 = *(longlong **)(lVar4 + 0x390);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plVar2 = *(longlong **)(lVar4 + 0x418);
  *(longlong **)(lVar4 + 0x418) = plVar7;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar7 = *(longlong **)(lVar4 + 0x398);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plVar2 = *(longlong **)(lVar4 + 0x420);
  *(longlong **)(lVar4 + 0x420) = plVar7;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar7 = (longlong *)(lVar4 + 0x3a8);
  lVar6 = 0xd;
  do {
    plVar2 = (longlong *)plVar7[-0x14];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    plVar3 = (longlong *)*plVar7;
    *plVar7 = (longlong)plVar2;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
    plVar7 = plVar7 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800f3260(longlong param_1,longlong param_2)
void FUN_1800f3260(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong **pplVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  bool bVar19;
  bool bVar20;
  byte bVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  undefined4 uStackX_18;
  longlong *plStackX_20;
  longlong *plStack_110;
  longlong *plStack_108;
  longlong *plStack_100;
  longlong *plStack_f8;
  longlong lStack_f0;
  longlong **pplStack_e8;
  longlong **pplStack_e0;
  longlong lStack_d8;
  undefined8 uStack_d0;
  longlong *plStack_c8;
  longlong *plStack_c0;
  longlong **pplStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  longlong *plStack_a0;
  longlong *plStack_98;
  longlong *plStack_90;
  longlong lStack_88;
  undefined1 uStack_80;
  longlong lStack_78;
  undefined1 uStack_70;
  longlong lStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  longlong *plStack_50;
  longlong *plStack_48;
  longlong *plStack_40;
  
  uStack_58 = 0xfffffffffffffffe;
  plVar11 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0x48) + 0x3c8) + 0x20);
  plStack_50 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11);
    (**(code **)(*plVar11 + 0x38))(plVar11);
    if (plVar11[8] - plVar11[7] >> 4 != 1) {
      puVar15 = &DAT_18098bc73;
      if ((undefined *)plVar11[0x3f] != (undefined *)0x0) {
        puVar15 = (undefined *)plVar11[0x3f];
      }
      FUN_180627020(&UNK_180a04b90,puVar15);
    }
  }
  uStackX_18 = 0xffffffff;
  plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0x48) + 0x3c8) + 0x18);
  plStack_48 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
    (**(code **)(*plVar6 + 0x38))(plVar6);
    plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0x48) + 0x3c8) + 0x18);
    plStack_40 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    uStackX_18 = (undefined4)plVar6[2];
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x38))(plVar6);
    }
  }
  bVar20 = false;
  bVar3 = false;
  plStack_f8 = (longlong *)0x0;
  if (plVar11 != (longlong *)0x0) {
    plVar6 = (longlong *)FUN_1800763c0(*(undefined8 *)plVar11[7],&plStack_c8);
    plVar11 = (longlong *)*plVar6;
    *plVar6 = 0;
    uStack_d0 = 0;
    plStack_f8 = plVar11;
    if (plStack_c8 != (longlong *)0x0) {
      (**(code **)(*plStack_c8 + 0x38))();
    }
    plVar6 = plVar11;
    if ((*(byte *)((longlong)plVar11 + 0xfd) & 0x20) == 0) {
      plVar6 = (longlong *)func_0x000180085de0(plVar11[0x36]);
    }
    lVar12 = param_1 + 0x2b8;
    uStack_80 = 0;
    lStack_88 = lVar12;
    AcquireSRWLockExclusive(lVar12);
    uStack_80 = 1;
    lVar18 = *(longlong *)(param_1 + 0x128);
    if (*(longlong *)(param_1 + 0x120) == lVar18) {
      lVar18 = *(longlong *)(param_1 + 0x1a0);
      uVar22 = *(longlong *)(param_1 + 0x1a8) - lVar18 >> 4;
      uVar16 = (ulonglong)((int)uVar22 + 1);
      if (uVar22 < uVar16) {
        FUN_1800f7100((longlong *)(param_1 + 0x1a0),uVar16 - uVar22);
      }
      else {
        *(ulonglong *)(param_1 + 0x1a8) = uVar16 * 0x10 + lVar18;
      }
    }
    else {
      uVar22 = (ulonglong)*(int *)(lVar18 + -4);
      *(longlong *)(param_1 + 0x128) = lVar18 + -4;
      puVar10 = (undefined1 *)(uVar22 * 0x10 + *(longlong *)(param_1 + 0x1a0));
      *puVar10 = 0;
      *(undefined8 *)(puVar10 + 4) = 0xffffffffffffffff;
      *(undefined4 *)(puVar10 + 0xc) = 0;
    }
    ReleaseSRWLockExclusive(lVar12);
    plVar9 = plVar11;
    if ((*(byte *)((longlong)plVar11 + 0xfd) & 0x20) == 0) {
      plVar9 = (longlong *)func_0x000180085de0(plVar11[0x36]);
    }
    FUN_1800f4a20(param_1,uVar22 & 0xffffffff,(int)plVar9[0x3f]);
    if ((char)plVar6[0x5d] == '\0') {
      FUN_1800f45c0(param_1,*(undefined4 *)((longlong)plVar6 + 0x2ec),plVar6[0x5c],plVar6);
      *(undefined1 *)(plVar6 + 0x5d) = 1;
    }
    lVar12 = plVar11[0x4d];
    uVar7 = FUN_18062b1e0(_DAT_180c8ed18,0x140,8,3);
    pplVar8 = (longlong **)
              FUN_180309740(uVar7,*(undefined4 *)((longlong)plVar6 + 0x2ec),0xffffffff,uStackX_18,
                            (int)uVar22);
    pplStack_e8 = pplVar8;
    if (pplVar8 != (longlong **)0x0) {
      (*(code *)(*pplVar8)[5])(pplVar8);
    }
    *(undefined1 *)((longlong)pplVar8 + 0x13c) = *(undefined1 *)(param_2 + 0x43);
    *(undefined4 *)(pplVar8 + 0x11) = *(undefined4 *)(lVar12 + 0x60);
    *(undefined4 *)((longlong)pplVar8 + 0x8c) = *(undefined4 *)(lVar12 + 100);
    *(undefined4 *)((longlong)pplVar8 + 0x14) = 0;
    uVar1 = *(undefined1 *)(lVar12 + 0x19);
    uVar2 = *(undefined1 *)(lVar12 + 0x18);
    if ((*(char *)(param_2 + 0x43) == '\0') || (*(char *)((longlong)plVar11 + 0xf6) < '\x01')) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    plVar6 = plVar11;
    if ((*(byte *)((longlong)plVar11 + 0xfd) & 0x20) == 0) {
      plVar6 = (longlong *)func_0x000180085de0(plVar11[0x36]);
    }
    uVar4 = FUN_1800f8ea0((int)plVar6[0x3f],uVar7,uVar2,uVar1);
    *(undefined4 *)(pplVar8 + 0x27) = uVar4;
    *(undefined4 *)((longlong)pplVar8 + 0x11c) = *(undefined4 *)(plVar11[0x4d] + 0x14);
    pplStack_e0 = pplVar8;
    (*(code *)(*pplVar8)[5])(pplVar8);
    FUN_1800f8e20(plVar11,&pplStack_e0);
    plStack_c0 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
    plStack_c0 = *(longlong **)(param_2 + 0x38);
    *(longlong **)(param_2 + 0x38) = plVar11;
    if (plStack_c0 != (longlong *)0x0) {
      (**(code **)(*plStack_c0 + 0x38))();
    }
    pplStack_b8 = pplVar8;
    FUN_18005ea90(param_2 + 0x50,&pplStack_b8);
    bVar3 = true;
    (*(code *)(*pplVar8)[7])(pplVar8);
  }
  bVar19 = false;
  iVar14 = (int)(*(longlong *)(*(longlong *)(param_2 + 0x48) + 0x40) -
                 *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x38) >> 4);
  lStack_d8 = (longlong)iVar14;
  plVar11 = plStack_f8;
  if (0 < iVar14) {
    lStack_f0 = 0;
    do {
      lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x38);
      plVar6 = *(longlong **)(lStack_f0 + lVar12);
      plStack_108 = plVar6;
      if (plVar11 == (longlong *)0x0) {
        lVar18 = 0;
      }
      else {
        plVar9 = (longlong *)FUN_1800f8dd0(plVar11,&plStack_b0);
        bVar20 = true;
        bVar19 = true;
        lVar18 = *plVar9;
      }
      if (bVar19) {
        bVar20 = false;
        bVar19 = false;
        if (plStack_b0 != (longlong *)0x0) {
          (**(code **)(*plStack_b0 + 0x38))();
        }
      }
      if (((*(byte *)(lStack_f0 + 8 + lVar12) & 1) == 0) ||
         (iVar14 = *(int *)(_DAT_180c86920 + 0x620), iVar14 == -1)) {
LAB_1800f3c54:
        plStack_110 = (longlong *)0x0;
        pplStack_e8 = &plStack_110;
        FUN_180080810(plVar6 + 0x23,&plStack_110);
        if (plStack_110 != (longlong *)0x0) {
          (**(code **)(*plStack_110 + 0x38))();
        }
      }
      else {
        if (iVar14 == 0) {
          uVar5 = *(uint *)(plVar6 + 0x20) >> 4;
        }
        else {
          if (iVar14 != 1) goto LAB_1800f3c54;
          uVar5 = *(uint *)(plVar6 + 0x20) >> 0x16;
        }
        if ((uVar5 & 1) == 0) goto LAB_1800f3c54;
        plVar11 = plVar6;
        if ((*(byte *)((longlong)plVar6 + 0xfd) & 0x20) == 0) {
          plVar11 = (longlong *)func_0x000180085de0(plVar6[0x36]);
        }
        plStack_100 = (longlong *)0x0;
        if (bVar3) {
          uVar7 = FUN_18062b1e0(_DAT_180c8ed18,0x140,8,3);
          plVar9 = (longlong *)
                   FUN_180309740(uVar7,*(undefined4 *)(lVar18 + 0x18),
                                 *(undefined4 *)((longlong)plVar11 + 0x2fc),uStackX_18,
                                 *(undefined4 *)(lVar18 + 0x24));
          if (plVar9 != (longlong *)0x0) {
            plStack_a8 = plVar9;
            (**(code **)(*plVar9 + 0x28))(plVar9);
          }
          plStack_a8 = (longlong *)0x0;
          *(undefined4 *)((longlong)plVar9 + 0x8c) = *(undefined4 *)(plVar11[0x4d] + 100);
          *(undefined4 *)(plVar9 + 0x11) = *(undefined4 *)(plVar11[0x4d] + 0x60);
          *(undefined1 *)((longlong)plVar9 + 0x13c) = *(undefined1 *)(lVar18 + 0x13c);
          *(undefined4 *)((longlong)plVar9 + 0x14) = 1;
          *(undefined4 *)(plVar9 + 0x27) = 0;
          *(undefined4 *)((longlong)plVar9 + 0x11c) = *(undefined4 *)(lVar18 + 0x11c);
          plStack_100 = plVar9;
          if ((char)plVar11[0x5f] == '\0') {
            plStack_108 = (longlong *)plVar11[0x5e];
            lVar18 = (longlong)*(int *)((longlong)plVar11 + 0x2fc);
            lStack_78 = param_1 + 0x2b8;
            uStack_70 = 0;
            AcquireSRWLockExclusive(lStack_78);
            uStack_70 = 1;
            *(undefined1 *)(param_1 + 2) = 1;
            *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x160) + lVar18 * 8) + 0x20) =
                 plVar11;
            lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x160) + lVar18 * 8);
            plVar9 = (longlong *)*plStack_108;
            if (plVar9 != (longlong *)0x0) {
              plStack_a0 = plVar9;
              (**(code **)(*plVar9 + 0x28))(plVar9);
            }
            plStack_a0 = *(longlong **)(lVar12 + 8);
            *(longlong **)(lVar12 + 8) = plVar9;
            if (plStack_a0 != (longlong *)0x0) {
              (**(code **)(*plStack_a0 + 0x38))();
            }
            lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x160) + lVar18 * 8);
            plVar9 = (longlong *)plStack_108[1];
            if (plVar9 != (longlong *)0x0) {
              plStack_98 = plVar9;
              (**(code **)(*plVar9 + 0x28))(plVar9);
            }
            plStack_98 = *(longlong **)(lVar12 + 0x10);
            *(longlong **)(lVar12 + 0x10) = plVar9;
            if (plStack_98 != (longlong *)0x0) {
              (**(code **)(*plStack_98 + 0x38))();
            }
            **(undefined1 **)(*(longlong *)(param_1 + 0x160) + lVar18 * 8) = 1;
            ReleaseSRWLockExclusive(param_1 + 0x2b8);
            *(undefined1 *)(plVar11 + 0x5f) = 1;
            plVar9 = plStack_100;
          }
        }
        else {
          lVar12 = param_1 + 0x2b8;
          uStack_60 = 0;
          lStack_68 = lVar12;
          AcquireSRWLockExclusive(lVar12);
          uStack_60 = 1;
          lVar18 = *(longlong *)(param_1 + 0x128);
          if (*(longlong *)(param_1 + 0x120) == lVar18) {
            lVar18 = *(longlong *)(param_1 + 0x1a0);
            uVar22 = *(longlong *)(param_1 + 0x1a8) - lVar18 >> 4;
            uVar16 = (ulonglong)((int)uVar22 + 1);
            if (uVar22 < uVar16) {
              FUN_1800f7100((longlong *)(param_1 + 0x1a0),uVar16 - uVar22);
            }
            else {
              *(ulonglong *)(param_1 + 0x1a8) = uVar16 * 0x10 + lVar18;
            }
          }
          else {
            uVar22 = (ulonglong)*(int *)(lVar18 + -4);
            *(longlong *)(param_1 + 0x128) = lVar18 + -4;
            puVar10 = (undefined1 *)(uVar22 * 0x10 + *(longlong *)(param_1 + 0x1a0));
            *puVar10 = 0;
            *(undefined8 *)(puVar10 + 4) = 0xffffffffffffffff;
            *(undefined4 *)(puVar10 + 0xc) = 0;
          }
          ReleaseSRWLockExclusive(lVar12);
          plVar9 = plVar11;
          if ((*(byte *)((longlong)plVar11 + 0xfd) & 0x20) == 0) {
            plVar9 = (longlong *)func_0x000180085de0(plVar11[0x36]);
          }
          FUN_1800f4a20(param_1,uVar22 & 0xffffffff,(int)plVar9[0x3f]);
          bVar21 = *(byte *)((longlong)plVar11 + 0xfd) & 0x20;
          plVar9 = plVar11;
          if (bVar21 == 0) {
            plVar9 = (longlong *)func_0x000180085de0(plVar11[0x36]);
          }
          if ((char)plVar9[0x5d] == '\0') {
            plVar9 = plVar11;
            plVar6 = plVar11;
            if (bVar21 == 0) {
              plVar6 = (longlong *)func_0x000180085de0(plVar11[0x36]);
              plVar9 = (longlong *)func_0x000180085de0(plVar11[0x36]);
            }
            lVar12 = plVar9[0x5c];
            plVar9 = plVar11;
            if (bVar21 == 0) {
              plVar9 = (longlong *)func_0x000180085de0(plVar11[0x36]);
            }
            FUN_1800f45c0(param_1,*(undefined4 *)((longlong)plVar9 + 0x2ec),lVar12,plVar6);
            plVar6 = plVar11;
            if ((*(byte *)((longlong)plVar11 + 0xfd) & 0x20) == 0) {
              plVar6 = (longlong *)func_0x000180085de0(plVar11[0x36]);
            }
            *(undefined1 *)(plVar6 + 0x5d) = 1;
            plVar6 = plStack_108;
          }
          uVar7 = FUN_18062b1e0(_DAT_180c8ed18,0x140,8,3);
          plVar9 = (longlong *)
                   FUN_180309740(uVar7,*(undefined4 *)((longlong)plVar11 + 0x2ec),0xffffffff,
                                 uStackX_18,(int)uVar22);
          if (plVar9 != (longlong *)0x0) {
            plStack_90 = plVar9;
            (**(code **)(*plVar9 + 0x28))(plVar9);
          }
          plStack_90 = (longlong *)0x0;
          *(undefined4 *)((longlong)plVar9 + 0x8c) = *(undefined4 *)(plVar6[0x4d] + 100);
          *(undefined4 *)(plVar9 + 0x11) = *(undefined4 *)(plVar6[0x4d] + 0x60);
          *(undefined4 *)((longlong)plVar9 + 0x11c) = *(undefined4 *)(plVar6[0x4d] + 0x14);
          *(undefined1 *)((longlong)plVar9 + 0x13c) = *(undefined1 *)(param_2 + 0x43);
          *(undefined4 *)((longlong)plVar9 + 0x14) = 0;
          uVar1 = *(undefined1 *)(plVar6[0x4d] + 0x19);
          bVar21 = *(byte *)(plVar6[0x4d] + 0x18);
          plStackX_20 = (longlong *)CONCAT44(plStackX_20._4_4_,(uint)bVar21);
          if ((*(char *)(param_2 + 0x43) == '\0') ||
             (uVar7 = 1, *(char *)((longlong)plVar11 + 0xf6) < '\x01')) {
            uVar7 = 0;
          }
          uVar5 = (uint)bVar21;
          plStack_100 = plVar9;
          if ((*(byte *)((longlong)plVar11 + 0xfd) & 0x20) == 0) {
            plVar11 = (longlong *)func_0x000180085de0(plVar11[0x36]);
            uVar5 = (uint)plStackX_20;
          }
          uVar4 = FUN_1800f8ea0((int)plVar11[0x3f],uVar7,uVar5,uVar1);
          *(undefined4 *)(plVar9 + 0x27) = uVar4;
        }
        puVar23 = *(undefined8 **)(param_2 + 0x58);
        if (puVar23 < *(undefined8 **)(param_2 + 0x60)) {
          *(undefined8 **)(param_2 + 0x58) = puVar23 + 1;
          *puVar23 = plVar9;
        }
        else {
          puVar17 = *(undefined8 **)(param_2 + 0x50);
          lVar12 = (longlong)puVar23 - (longlong)puVar17 >> 3;
          if (lVar12 == 0) {
            lVar12 = 1;
LAB_1800f3b9f:
            puVar13 = (undefined8 *)
                      FUN_18062b420(_DAT_180c8ed18,lVar12 * 8,*(undefined1 *)(param_2 + 0x68));
            puVar23 = *(undefined8 **)(param_2 + 0x58);
            puVar17 = *(undefined8 **)(param_2 + 0x50);
          }
          else {
            lVar12 = lVar12 * 2;
            if (lVar12 != 0) goto LAB_1800f3b9f;
            puVar13 = (undefined8 *)0x0;
          }
          if (puVar17 != puVar23) {
                    // WARNING: Subroutine does not return
            memmove(puVar13,puVar17,(longlong)puVar23 - (longlong)puVar17);
          }
          *puVar13 = plVar9;
          if (*(longlong *)(param_2 + 0x50) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(undefined8 **)(param_2 + 0x50) = puVar13;
          *(undefined8 **)(param_2 + 0x58) = puVar13 + 1;
          *(undefined8 **)(param_2 + 0x60) = puVar13 + lVar12;
        }
        plStackX_20 = plVar9;
        (**(code **)(*plVar9 + 0x28))(plVar9);
        pplStack_e8 = &plStackX_20;
        FUN_180080810(plVar6 + 0x23,&plStackX_20);
        if (plStackX_20 != (longlong *)0x0) {
          (**(code **)(*plStackX_20 + 0x38))();
        }
        (**(code **)(*plVar9 + 0x38))(plVar9);
        plVar11 = plStack_f8;
        bVar19 = bVar20;
      }
      lStack_f0 = lStack_f0 + 0x10;
      lStack_d8 = lStack_d8 + -1;
    } while (lStack_d8 != 0);
  }
  *(undefined1 *)(param_2 + 0x44) = 1;
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x38))(plVar11);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800f3d8d)




// 函数: void FUN_1800f3ce0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800f3ce0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  longlong **pplStackX_20;
  
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x50);
  lVar4 = 0;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    pplStackX_10 = &plStackX_8;
    plStackX_8 = (longlong *)0x0;
    FUN_1800f8e20(*(longlong *)(param_2 + 0x38),&plStackX_8,param_3,param_4,0xfffffffffffffffe);
  }
  iVar2 = (int)(*(longlong *)(*(longlong *)(param_2 + 0x48) + 0x40) -
                *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x38) >> 4);
  lVar3 = (longlong)iVar2;
  if (0 < iVar2) {
    pplStackX_18 = &plStackX_8;
    do {
      lVar1 = *(longlong *)(lVar4 + *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x38));
      pplStackX_20 = &plStackX_8;
      plStackX_8 = (longlong *)0x0;
      pplStackX_10 = *(longlong ***)(lVar1 + 0x118);
      *(undefined8 *)(lVar1 + 0x118) = 0;
      if (pplStackX_10 != (longlong **)0x0) {
        (**(code **)((longlong)*pplStackX_10 + 0x38))();
      }
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      lVar4 = lVar4 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




