#include "TaleWorlds.Native.Split.h"

// 03_rendering_part142.c - 13 个函数

// 函数: void FUN_180352bf0(undefined8 *param_1)
void FUN_180352bf0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined4 *puStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  uVar5 = 0xfffffffffffffffe;
  puVar4 = param_1;
  FUN_1803456e0();
  *puVar4 = &UNK_180a1e978;
  plVar1 = puVar4 + 0xf;
  *plVar1 = (longlong)&UNK_18098bcb0;
  puVar4[0x10] = 0;
  *(undefined4 *)(puVar4 + 0x11) = 0;
  *plVar1 = (longlong)&UNK_180a3c3e0;
  puVar4[0x12] = 0;
  puVar4[0x10] = 0;
  *(undefined4 *)(puVar4 + 0x11) = 0;
  *(undefined1 *)(puVar4 + 0xe) = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_180a1e968);
  puStack_80 = &UNK_180a3c3e0;
  uStack_68 = 0;
  puStack_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  puVar3 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x1f,0x13);
  *(undefined1 *)puVar3 = 0;
  puStack_78 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar2);
  *puVar3 = 0x74726150;
  puVar3[1] = 0x206c6169;
  puVar3[2] = 0x656b6142;
  puVar3[3] = 0x726f4620;
  *(undefined8 *)(puVar3 + 4) = 0x746e657272754320;
  puVar3[6] = 0x76654c20;
  *(undefined2 *)(puVar3 + 7) = 0x6c65;
  *(undefined1 *)((longlong)puVar3 + 0x1e) = 0;
  uStack_70 = 0x1e;
  FUN_1803460a0(param_1,&puStack_80,param_1 + 0xe,0xb,uVar5);
  puStack_80 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



longlong FUN_180352dc0(longlong param_1,ulonglong param_2)

{
  *(undefined8 *)(param_1 + 0x78) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x78) = &UNK_18098bcb0;
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x98);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180352e50(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_180352e50(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined *puStack_60;
  undefined4 *puStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined4 *puStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  if ((*(int *)(param_2 + 0x10) == 0xf) &&
     (iVar1 = strcmp(*(undefined8 *)(param_2 + 8),&DAT_180a1e938,(char)param_3,param_4,
                     0xfffffffffffffffe), iVar1 == 0)) {
    puStack_60 = &UNK_180a3c3e0;
    uStack_48 = 0;
    puStack_58 = (undefined4 *)0x0;
    uStack_50 = 0;
    puVar3 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar3 = 0;
    puStack_58 = puVar3;
    uVar2 = FUN_18064e990(puVar3);
    *puVar3 = 0x6d726f4e;
    *(undefined2 *)(puVar3 + 1) = 0x6c61;
    *(undefined1 *)((longlong)puVar3 + 6) = 0;
    uStack_50 = 6;
    uStack_48._0_4_ = uVar2;
    FUN_180066df0(param_3,&puStack_60);
    puStack_60 = &UNK_180a3c3e0;
    if (puStack_58 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_58 = (undefined4 *)0x0;
    uStack_48 = (ulonglong)uStack_48._4_4_ << 0x20;
    puStack_60 = &UNK_18098bcb0;
    puStack_40 = &UNK_180a3c3e0;
    uStack_28 = 0;
    puStack_38 = (undefined4 *)0x0;
    uStack_30 = 0;
    puVar3 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar3 = 0;
    puStack_38 = puVar3;
    uVar2 = FUN_18064e990(puVar3);
    uStack_28 = CONCAT44(uStack_28._4_4_,uVar2);
    *puVar3 = 0x68676948;
    *(undefined1 *)(puVar3 + 1) = 0;
    uStack_30 = 4;
    FUN_180066df0(param_3,&puStack_40);
    puStack_40 = &UNK_180a3c3e0;
    if (puStack_38 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}



undefined8 *
FUN_180352ff0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_1809fcc28;
  param_2[1] = param_2 + 3;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 2) = 0x13;
  strcpy_s(param_2[1],0x80,&UNK_180a1eb30,param_4,0,0xfffffffffffffffe);
  return param_2;
}





// 函数: void FUN_180353070(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180353070(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a1cdc0;
  FUN_1802f5b10(param_1 + 4,param_1[6],param_3,param_4,0xfffffffffffffffe);
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803530c0(longlong *param_1,longlong param_2,undefined8 param_3)
void FUN_1803530c0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined1 *puVar5;
  undefined1 auStack_7e8 [48];
  undefined *puStack_7b8;
  undefined1 *puStack_7b0;
  undefined4 uStack_7a8;
  ulonglong uStack_7a0;
  undefined8 *puStack_798;
  undefined8 *puStack_6d0;
  undefined8 *puStack_6c8;
  undefined8 uStack_6c0;
  undefined4 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 *puStack_6a8;
  longlong *plStack_6a0;
  undefined *puStack_698;
  longlong lStack_690;
  undefined4 uStack_680;
  undefined8 uStack_678;
  undefined1 auStack_5a8 [1216];
  ulonglong uStack_e8;
  char *pcVar4;
  
  uStack_678 = 0xfffffffffffffffe;
  uStack_e8 = _DAT_180bf00a8 ^ (ulonglong)auStack_7e8;
  uStack_6b0 = param_3;
  plStack_6a0 = param_1;
  FUN_180627ae0(&puStack_698,param_1[2] + 8);
  puStack_6d0 = (undefined8 *)0x0;
  puStack_6c8 = (undefined8 *)0x0;
  uStack_6c0 = 0;
  uStack_6b8 = 3;
  (**(code **)(*param_1 + 0xf8))(param_1,&puStack_6d0);
  puVar1 = puStack_6c8;
  puVar2 = puStack_6d0;
  puStack_798 = puStack_6d0;
  puStack_6a8 = puStack_6c8;
  if (puStack_6d0 != puStack_6c8) {
    puStack_7b8 = &UNK_180a3c3e0;
    uStack_7a0 = 0;
    puStack_7b0 = (undefined1 *)0x0;
    uStack_7a8 = 0;
    FUN_1806277c0(&puStack_7b8,*(undefined4 *)(puStack_6d0 + 2));
    if (*(int *)(puVar2 + 2) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_7b0,puVar2[1],*(int *)(puVar2 + 2) + 1);
    }
    if (puVar2[1] != 0) {
      uStack_7a8 = 0;
      if (puStack_7b0 != (undefined1 *)0x0) {
        *puStack_7b0 = 0;
      }
      uStack_7a0 = uStack_7a0 & 0xffffffff;
    }
    puVar2 = (undefined8 *)FUN_1804c1300(param_2 + 0x60,0x60);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = 1;
    puVar2[6] = 0;
    puVar2[8] = 0;
    pcVar3 = "variable";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *puVar2 = &UNK_180a19500;
    puVar2[2] = pcVar4 + -0x180a194ff;
    puVar5 = &DAT_18098bc73;
    if (puStack_7b0 != (undefined1 *)0x0) {
      puVar5 = puStack_7b0;
    }
    FUN_180630b20(param_2,puVar2,&DAT_180a03a84,puVar5);
    (**(code **)(*param_1 + 0x140))(param_1,&puStack_7b8);
                    // WARNING: Subroutine does not return
    memset(auStack_5a8,0,0x200);
  }
  for (; puVar2 != puVar1; puVar2 = puVar2 + 4) {
    (**(code **)*puVar2)(puVar2,0);
  }
  if (puStack_6d0 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_698 = &UNK_180a3c3e0;
  if (lStack_690 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_690 = 0;
  uStack_680 = 0;
  puStack_698 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_7e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180353e50(longlong *param_1,longlong param_2)
void FUN_180353e50(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_3b8 [48];
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  undefined4 uStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 uStack_358;
  undefined4 uStack_350;
  undefined *puStack_348;
  longlong lStack_340;
  undefined4 uStack_330;
  undefined *puStack_328;
  longlong lStack_320;
  undefined4 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_278 [544];
  ulonglong uStack_58;
  ulonglong uVar9;
  
  uStack_308 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_3b8;
  FUN_180627ae0(&puStack_328,*(longlong *)(param_2 + 0x10) + 8);
  FUN_180627ae0(&puStack_348,param_1[2] + 8);
  puStack_388 = (undefined8 *)0x0;
  puStack_380 = (undefined8 *)0x0;
  uVar9 = 0;
  uStack_378 = 0;
  uStack_370 = 3;
  (**(code **)(*param_1 + 0xf8))(param_1,&puStack_388);
  puStack_368 = (undefined8 *)0x0;
  puStack_360 = (undefined8 *)0x0;
  uStack_358 = 0;
  uStack_350 = 3;
  (**(code **)(*param_1 + 0xf8))(param_1,&puStack_368);
  puVar4 = puStack_360;
  puVar3 = puStack_380;
  puVar7 = puStack_368;
  if ((longlong)puStack_380 - (longlong)puStack_388 >> 5 != 0) {
    lVar10 = 0;
    uVar12 = uVar9;
    do {
      iVar2 = *(int *)(lVar10 + 0x10 + (longlong)puStack_388);
      iVar6 = *(int *)(lVar10 + 0x10 + (longlong)puStack_368);
      if (iVar2 == iVar6) {
        if (iVar2 != 0) {
          pbVar5 = *(byte **)(lVar10 + 8 + (longlong)puStack_388);
          lVar11 = *(longlong *)(lVar10 + 8 + (longlong)puStack_368) - (longlong)pbVar5;
          do {
            pbVar1 = pbVar5 + lVar11;
            iVar6 = (uint)*pbVar5 - (uint)*pbVar1;
            if (iVar6 != 0) break;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar1 != 0);
        }
LAB_180353f85:
        if (iVar6 == 0) {
          (**(code **)(*param_1 + 0x140))(param_1,puStack_388 + uVar12 * 4);
                    // WARNING: Subroutine does not return
          memset(auStack_278,0,0x200);
        }
      }
      else if (iVar2 == 0) goto LAB_180353f85;
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      lVar10 = lVar10 + 0x20;
      uVar12 = (ulonglong)(int)uVar8;
    } while (uVar12 < (ulonglong)((longlong)puStack_380 - (longlong)puStack_388 >> 5));
  }
  for (; puStack_380 = puVar3, puVar7 != puVar4; puVar7 = puVar7 + 4) {
    (**(code **)*puVar7)(puVar7,0);
    puVar3 = puStack_380;
  }
  if (puStack_368 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_368 = (undefined8 *)0x0;
  for (puVar7 = puStack_388; puVar7 != puVar3; puVar7 = puVar7 + 4) {
    (**(code **)*puVar7)(puVar7,0);
  }
  if (puStack_388 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_348 = &UNK_180a3c3e0;
  if (lStack_340 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_340 = 0;
  uStack_330 = 0;
  puStack_348 = &UNK_18098bcb0;
  puStack_328 = &UNK_180a3c3e0;
  if (lStack_320 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_320 = 0;
  uStack_310 = 0;
  puStack_328 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_3b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180354170(longlong *param_1)
void FUN_180354170(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  char cVar3;
  undefined *puVar4;
  undefined1 auStack_3e8 [48];
  undefined1 auStack_3b8 [8];
  undefined8 uStack_3b0;
  undefined1 auStack_328 [544];
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined4 uStack_f8;
  undefined1 auStack_f0 [136];
  ulonglong uStack_68;
  
  uStack_3b0 = 0xfffffffffffffffe;
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_3e8;
  uVar1 = *(undefined8 *)(param_1[3] + 0x20);
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != param_1 + 4) {
    puStack_108 = &UNK_1809fcc28;
    puStack_100 = auStack_f0;
    auStack_f0[0] = 0;
    uStack_f8 = (undefined4)plVar2[10];
    puVar4 = &DAT_18098bc73;
    if ((undefined *)plVar2[9] != (undefined *)0x0) {
      puVar4 = (undefined *)plVar2[9];
    }
    strcpy_s(auStack_f0,0x80,puVar4);
    FUN_1801b46a0(uVar1,auStack_3b8,&puStack_108);
                    // WARNING: Subroutine does not return
    memset(auStack_328,0,0x200);
  }
  if (*(char *)(*(longlong *)(param_1[3] + 0x20) + 0x561) != '\0') {
    cVar3 = (**(code **)(*param_1 + 0x110))(param_1);
    if (cVar3 == '\0') goto LAB_18035436c;
  }
  (**(code **)(*param_1 + 0x70))(param_1);
LAB_18035436c:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_3e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1803543b0(longlong param_1,undefined8 *param_2,char param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *aplStack_a0 [2];
  longlong *aplStack_90 [2];
  longlong **applStack_80 [2];
  undefined *puStack_70;
  longlong lStack_68;
  undefined4 uStack_58;
  undefined8 uStack_50;
  longlong alStack_48 [4];
  
  lVar7 = _DAT_180c8ecc0;
  uStack_50 = 0xfffffffffffffffe;
  plVar6 = (longlong *)0x0;
  lVar2 = *(longlong *)
           (*(longlong *)(_DAT_180c8ecc0 + 8) + *(longlong *)(_DAT_180c8ecc0 + 0x10) * 8);
  plVar4 = (longlong *)FUN_180355030(_DAT_180c8ecc0,aplStack_90,param_2,param_4,0);
  if (*plVar4 == lVar2) {
    aplStack_a0[0] = alStack_48;
    uVar5 = FUN_180627ae0(alStack_48,param_2);
    uVar5 = FUN_180354db0(&puStack_70,uVar5);
    FUN_18005d190(param_2,uVar5);
    puStack_70 = &UNK_180a3c3e0;
    if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_68 = 0;
    uStack_58 = 0;
    puStack_70 = &UNK_18098bcb0;
    lVar7 = _DAT_180c8ecc0;
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar7 + 8) + *(longlong *)(lVar7 + 0x10) * 8);
  plVar4 = (longlong *)FUN_180355030(lVar7,applStack_80,param_2);
  if (*plVar4 != lVar2) {
    FUN_180355030(lVar7,aplStack_a0,param_2);
    pcVar3 = (char *)aplStack_a0[0][4];
    aplStack_90[0] = (longlong *)0x0;
    if (*pcVar3 == '\0') {
      plVar6 = (longlong *)(**(code **)(pcVar3 + 0x48))(pcVar3,param_1);
      if (plVar6 != (longlong *)0x0) {
        aplStack_a0[0] = plVar6;
        (**(code **)(*plVar6 + 0x28))(plVar6);
      }
    }
    else {
      uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x58,8,0xd);
      plVar6 = (longlong *)FUN_180469f40(uVar5,param_1,pcVar3);
      if (plVar6 != (longlong *)0x0) {
        aplStack_a0[0] = plVar6;
        (**(code **)(*plVar6 + 0x28))(plVar6);
      }
    }
    applStack_80[0] = aplStack_a0;
    aplStack_a0[0] = plVar6;
    aplStack_90[0] = plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    FUN_1802efdd0(param_1,aplStack_a0);
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (lVar2 != 0) {
      FUN_1801982b0(lVar2,plVar6);
    }
    if (((param_3 != '\0') && (plVar6 != (longlong *)0x0)) && (lVar2 != 0)) {
      (**(code **)(*plVar6 + 0x68))(plVar6);
      if ((undefined *)*plVar6 == &UNK_180a2ac38) {
        (**(code **)(_DAT_180c8a9c0 + 0x1e0))((int)plVar6[10]);
      }
      else {
        (**(code **)((undefined *)*plVar6 + 0x70))(plVar6);
      }
    }
    lVar2 = _DAT_180c8a9c0;
    if ((param_4 != '\0') && (*pcVar3 != '\0')) {
      iVar1 = (int)plVar6[10];
      applStack_80[0] = (longlong **)CONCAT44(applStack_80[0]._4_4_,iVar1);
      if ((iVar1 != 0) && (_DAT_180c8f008 != 0)) {
        (**(code **)(_DAT_180c8f008 + 0x30))(iVar1);
      }
      (**(code **)(lVar2 + 0x200))(iVar1);
      if ((iVar1 != 0) && (_DAT_180c8f008 != 0)) {
        (**(code **)(_DAT_180c8f008 + 0x18))(iVar1);
      }
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x38))(plVar6);
    }
  }
  *param_2 = &UNK_180a3c3e0;
  if (param_2[1] == 0) {
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    *param_2 = &UNK_18098bcb0;
    return plVar6;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803549f0(void)
void FUN_1803549f0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x80,8,3,0xfffffffffffffffe);
                    // WARNING: Subroutine does not return
  memset(uVar1,0,0x80);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180354b70(void)
void FUN_180354b70(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x80,8,3,0,0xfffffffffffffffe);
                    // WARNING: Subroutine does not return
  memset(uVar1,0,0x80);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_180354db0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [16];
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  
  lVar1 = *(longlong *)
           (*(longlong *)(_DAT_180c8ecc0 + 8) + *(longlong *)(_DAT_180c8ecc0 + 0x10) * 8);
  plVar2 = (longlong *)FUN_180355030(_DAT_180c8ecc0,auStack_48,param_2,param_4,0,0xfffffffffffffffe)
  ;
  if (*plVar2 == lVar1) {
    (**(code **)(**(longlong **)(_DAT_180c86870 + 0x2b0) + 0xa0))
              (*(longlong **)(_DAT_180c86870 + 0x2b0),&puStack_38,param_2);
    *param_1 = &UNK_18098bcb0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = &UNK_180a3c3e0;
    *(undefined4 *)(param_1 + 2) = uStack_28;
    param_1[1] = uStack_30;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_20._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_20;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    puStack_38 = &UNK_18098bcb0;
    *param_2 = &UNK_180a3c3e0;
    if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 3) = 0;
  }
  else {
    *param_1 = &UNK_18098bcb0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = &UNK_180a3c3e0;
    param_1[3] = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    param_1[1] = param_2[1];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)(param_2 + 2) = 0;
    param_2[1] = 0;
    param_2[3] = 0;
    *param_2 = &UNK_180a3c3e0;
    if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 3) = 0;
  }
  *param_2 = &UNK_18098bcb0;
  return param_1;
}





// 函数: void FUN_180354f20(longlong param_1)
void FUN_180354f20(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(undefined8 **)(lVar1 + uVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &UNK_180a3c3e0;
        if (puVar2[1] == 0) {
          puVar2[1] = 0;
          *(undefined4 *)(puVar2 + 3) = 0;
          *puVar2 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar2);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_180354f40(longlong param_1)
void FUN_180354f40(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(undefined8 **)(lVar1 + uVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &UNK_180a3c3e0;
        if (puVar2[1] == 0) {
          puVar2[1] = 0;
          *(undefined4 *)(puVar2 + 3) = 0;
          *puVar2 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar2);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



longlong * FUN_180355030(longlong param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  longlong lVar5;
  byte *pbVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  
  pbVar4 = *(byte **)(param_3 + 8);
  uVar3 = *(uint *)(param_3 + 0x10);
  pbVar6 = &DAT_18098bc73;
  if (pbVar4 != (byte *)0x0) {
    pbVar6 = pbVar4;
  }
  uVar7 = 0xcbf29ce484222325;
  uVar9 = 0;
  if (uVar3 != 0) {
    do {
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      uVar9 = uVar9 + 1;
      uVar7 = (uVar7 ^ bVar2) * 0x100000001b3;
    } while (uVar9 < uVar3);
  }
  lVar5 = *(longlong *)(param_1 + 8);
  uVar7 = uVar7 % (ulonglong)*(uint *)(param_1 + 0x10);
  for (lVar8 = *(longlong *)(lVar5 + uVar7 * 8); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x28)) {
    uVar9 = *(uint *)(lVar8 + 0x10);
    if (uVar3 == uVar9) {
      if (uVar3 != 0) {
        pbVar6 = pbVar4;
        do {
          pbVar1 = pbVar6 + (*(longlong *)(lVar8 + 8) - (longlong)pbVar4);
          uVar9 = (uint)*pbVar6 - (uint)*pbVar1;
          if (uVar9 != 0) break;
          pbVar6 = pbVar6 + 1;
        } while (*pbVar1 != 0);
      }
LAB_1803550fe:
      if (uVar9 == 0) goto LAB_18035510c;
    }
    else if (uVar3 == 0) goto LAB_1803550fe;
  }
  lVar8 = 0;
LAB_18035510c:
  if (lVar8 == 0) {
    uVar7 = *(ulonglong *)(param_1 + 0x10);
    lVar8 = *(longlong *)(lVar5 + uVar7 * 8);
  }
  *param_2 = lVar8;
  param_2[1] = lVar5 + uVar7 * 8;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180355140(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  
  uVar14 = 0xfffffffffffffffe;
  puVar7 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18);
  *puVar7 = &UNK_18098bcb0;
  uVar12 = 0;
  puVar7[1] = 0;
  *(undefined4 *)(puVar7 + 2) = 0;
  *puVar7 = &UNK_180a3c3e0;
  puVar7[3] = 0;
  puVar7[1] = 0;
  *(undefined4 *)(puVar7 + 2) = 0;
  *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(param_4 + 0x10);
  puVar7[1] = *(undefined8 *)(param_4 + 8);
  *(undefined4 *)((longlong)puVar7 + 0x1c) = *(undefined4 *)(param_4 + 0x1c);
  *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(param_4 + 0x18);
  *(undefined4 *)(param_4 + 0x10) = 0;
  *(undefined8 *)(param_4 + 8) = 0;
  *(undefined8 *)(param_4 + 0x18) = 0;
  puVar7[4] = *(undefined8 *)(param_4 + 0x20);
  puVar7[5] = 0;
  uVar3 = *(uint *)(puVar7 + 2);
  pbVar4 = (byte *)puVar7[1];
  pbVar8 = &DAT_18098bc73;
  if (pbVar4 != (byte *)0x0) {
    pbVar8 = pbVar4;
  }
  uVar13 = 0xcbf29ce484222325;
  if (uVar3 != 0) {
    do {
      uVar13 = (uVar13 ^ *pbVar8) * 0x100000001b3;
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      pbVar8 = pbVar8 + 1;
    } while (uVar11 < uVar3);
  }
  uVar9 = (ulonglong)*(uint *)(param_1 + 0x10);
  uVar6 = uVar13 % uVar9;
  lVar1 = uVar6 * 8;
  lVar10 = *(longlong *)(lVar1 + *(longlong *)(param_1 + 8));
  do {
    if (lVar10 == 0) {
      FUN_180355340(param_1,param_2,uVar12,uVar13,uVar6,puVar7,uVar14);
      return param_2;
    }
    uVar11 = *(uint *)(lVar10 + 0x10);
    if (uVar3 == uVar11) {
      if (uVar3 != 0) {
        uVar12 = *(longlong *)(lVar10 + 8) - (longlong)pbVar4;
        pbVar8 = pbVar4;
        do {
          bVar2 = pbVar8[uVar12];
          uVar9 = (ulonglong)bVar2;
          uVar11 = (uint)*pbVar8 - (uint)bVar2;
          if (uVar11 != 0) break;
          pbVar8 = pbVar8 + 1;
        } while (bVar2 != 0);
      }
LAB_180355291:
      if (uVar11 == 0) {
        FUN_1803552e0(uVar9,puVar7);
        lVar5 = *(longlong *)(param_1 + 8);
        *param_2 = lVar10;
        param_2[1] = lVar5 + lVar1;
        *(undefined1 *)(param_2 + 2) = 0;
        return param_2;
      }
    }
    else if (uVar3 == 0) goto LAB_180355291;
    lVar10 = *(longlong *)(lVar10 + 0x28);
  } while( true );
}





// 函数: void FUN_1803552e0(undefined8 param_1,undefined8 *param_2)
void FUN_1803552e0(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_2 = &UNK_180a3c3e0;
  if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *param_2 = &UNK_18098bcb0;
  uVar3 = (ulonglong)param_2 & 0xffffffffffc00000;
  if (uVar3 != 0) {
    lVar2 = uVar3 + 0x80 + ((longlong)param_2 - uVar3 >> 0x10) * 0x50;
    lVar2 = lVar2 - (ulonglong)*(uint *)(lVar2 + 4);
    if ((*(void ***)(uVar3 + 0x70) == &ExceptionList) && (*(char *)(lVar2 + 0xe) == '\0')) {
      *param_2 = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 **)(lVar2 + 0x20) = param_2;
      piVar1 = (int *)(lVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar3,CONCAT71(0xff000000,*(void ***)(uVar3 + 0x70) == &ExceptionList),
                          param_2,uVar3,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *
FUN_180355340(longlong param_1,longlong *param_2,ulonglong param_3,undefined8 param_4,
             longlong param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong auStackX_18 [2];
  
  auStackX_18[0] = param_3;
  FUN_18066c220(param_1 + 0x20,auStackX_18,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18),1);
  if ((char)auStackX_18[0] != '\0') {
    lVar1 = (auStackX_18[0] >> 0x20) * 8;
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,lVar1 + 8,8,*(undefined1 *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar2,0,lVar1);
  }
  *(undefined8 *)(param_6 + 0x28) = *(undefined8 *)(*(longlong *)(param_1 + 8) + param_5 * 8);
  *(longlong *)(*(longlong *)(param_1 + 8) + param_5 * 8) = param_6;
  lVar1 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
  *param_2 = param_6;
  param_2[1] = lVar1 + param_5 * 8;
  *(undefined1 *)(param_2 + 2) = 1;
  return param_2;
}





// 函数: void FUN_180355393(undefined8 param_1)
void FUN_180355393(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong in_stack_00000070;
  
  lVar1 = (in_stack_00000070 >> 0x20) * 8;
  uVar2 = FUN_18062b1e0(param_1,lVar1 + 8,8);
                    // WARNING: Subroutine does not return
  memset(uVar2,0,lVar1);
}





// 函数: void FUN_1803553e1(void)
void FUN_1803553e1(void)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte *pbVar5;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  uint uVar6;
  ulonglong in_R11;
  longlong *unaff_R14;
  longlong unaff_R15;
  longlong in_stack_00000088;
  
  do {
    lVar2 = *(longlong *)(unaff_RDI + 8);
    lVar3 = *(longlong *)(lVar2 + in_R11 * 8);
    while (lVar3 != 0) {
      pbVar5 = &DAT_18098bc73;
      if (*(byte **)(lVar3 + 8) != (byte *)0x0) {
        pbVar5 = *(byte **)(lVar3 + 8);
      }
      uVar6 = 0;
      uVar4 = 0xcbf29ce484222325;
      if (*(uint *)(lVar3 + 0x10) != 0) {
        do {
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          uVar6 = uVar6 + 1;
          uVar4 = (uVar4 ^ bVar1) * 0x100000001b3;
        } while (uVar6 < *(uint *)(lVar3 + 0x10));
      }
      *(undefined8 *)(*(longlong *)(unaff_RDI + 8) + in_R11 * 8) = *(undefined8 *)(lVar3 + 0x28);
      uVar4 = uVar4 % unaff_RBP & 0xffffffff;
      *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(unaff_RSI + uVar4 * 8);
      *(longlong *)(unaff_RSI + uVar4 * 8) = lVar3;
      lVar2 = *(longlong *)(unaff_RDI + 8);
      lVar3 = *(longlong *)(lVar2 + in_R11 * 8);
    }
    in_R11 = in_R11 + 1;
  } while (in_R11 < *(ulonglong *)(unaff_RDI + 0x10));
  if ((1 < *(ulonglong *)(unaff_RDI + 0x10)) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(ulonglong *)(unaff_RDI + 0x10) = unaff_RBP;
  *(longlong *)(unaff_RDI + 8) = unaff_RSI;
  *(undefined8 *)(in_stack_00000088 + 0x28) = *(undefined8 *)(unaff_RSI + unaff_R15 * 8);
  *(longlong *)(*(longlong *)(unaff_RDI + 8) + unaff_R15 * 8) = in_stack_00000088;
  lVar2 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R14 = in_stack_00000088;
  unaff_R14[1] = lVar2 + unaff_R15 * 8;
  *(undefined1 *)(unaff_R14 + 2) = 1;
  return;
}





