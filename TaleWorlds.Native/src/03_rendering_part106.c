#include "TaleWorlds.Native.Split.h"

// 03_rendering_part106.c - 4 个函数

// 函数: void FUN_18032f540(longlong param_1,longlong param_2,longlong param_3)
void FUN_18032f540(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined1 auStack_128 [32];
  int aiStack_108 [2];
  undefined *puStack_100;
  undefined1 *puStack_f8;
  uint uStack_f0;
  ulonglong uStack_e8;
  longlong lStack_e0;
  longlong alStack_d8 [3];
  undefined2 uStack_c0;
  undefined1 uStack_be;
  undefined4 *puStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  undefined1 uStack_a0;
  longlong *plStack_98;
  longlong *plStack_90;
  undefined4 auStack_88 [2];
  undefined4 *puStack_80;
  undefined8 uStack_78;
  undefined4 *puStack_70;
  undefined1 auStack_68 [24];
  char acStack_50 [16];
  ulonglong uStack_40;
  
  uStack_78 = 0xfffffffffffffffe;
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_128;
  iVar10 = 0;
  aiStack_108[0] = 0;
  fread(aiStack_108,4,1,*(undefined8 *)(param_2 + 8));
  if (0 < aiStack_108[0]) {
    if (aiStack_108[0] == 0) {
      puStack_b8 = (undefined4 *)0x0;
    }
    else {
      puStack_b8 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,(longlong)aiStack_108[0] * 4,3);
    }
    puVar11 = puStack_b8;
    fread(puStack_b8,4,(longlong)aiStack_108[0],*(undefined8 *)(param_2 + 8));
    puVar2 = puVar11;
    if (0 < aiStack_108[0]) {
      lStack_e0 = param_1 + 0xb48;
      do {
        puStack_100 = &UNK_180a3c3e0;
        uStack_e8 = 0;
        puStack_f8 = (undefined1 *)0x0;
        uStack_f0 = 0;
        FUN_1806277c0(&puStack_100,*(undefined4 *)(param_3 + 0x10));
        if (0 < *(int *)(param_3 + 0x10)) {
          puVar5 = &DAT_18098bc73;
          if (*(undefined **)(param_3 + 8) != (undefined *)0x0) {
            puVar5 = *(undefined **)(param_3 + 8);
          }
                    // WARNING: Subroutine does not return
          memcpy(puStack_f8,puVar5,(longlong)(*(int *)(param_3 + 0x10) + 1));
        }
        if ((*(longlong *)(param_3 + 8) != 0) && (uStack_f0 = 0, puStack_f8 != (undefined1 *)0x0)) {
          *puStack_f8 = 0;
        }
        uVar7 = uStack_f0 + 1;
        FUN_1806277c0(&puStack_100,uVar7);
        *(undefined2 *)(puStack_f8 + uStack_f0) = 0x5c;
        uStack_f0 = uVar7;
        FUN_180060680(acStack_50,&UNK_1809fd0a0,*puVar11);
        lVar1 = -1;
        do {
          lVar9 = lVar1;
          lVar1 = lVar9 + 1;
        } while (acStack_50[lVar9 + 1] != '\0');
        iVar8 = (int)(lVar9 + 1);
        if (0 < iVar8) {
          FUN_1806277c0(&puStack_100,uStack_f0 + iVar8);
                    // WARNING: Subroutine does not return
          memcpy(puStack_f8 + uStack_f0,acStack_50,(longlong)((int)lVar9 + 2));
        }
        iVar8 = uStack_f0 + 4;
        FUN_1806277c0(&puStack_100,iVar8);
        *(undefined4 *)(puStack_f8 + uStack_f0) = 0x6664652e;
        *(undefined1 *)((longlong)(puStack_f8 + uStack_f0) + 4) = 0;
        puVar6 = &DAT_18098bc73;
        if (puStack_f8 != (undefined1 *)0x0) {
          puVar6 = puStack_f8;
        }
        uStack_b0 = 0;
        uStack_a0 = 0;
        uStack_f0 = iVar8;
        FUN_18062dee0(&uStack_b0,puVar6,&UNK_180a01ff0);
        lVar1 = lStack_a8;
        lStack_e0 = 0;
        fread(&lStack_e0,8,1,lStack_a8);
        alStack_d8[0] = 0;
        alStack_d8[1] = 0;
        alStack_d8[2] = 0;
        uStack_c0 = 0;
        uStack_be = 3;
        if (lStack_e0 != 0) {
          FUN_180639bf0(alStack_d8);
        }
        fread(alStack_d8[0],lStack_e0,1,lVar1);
        puVar2 = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18,0x10,8,3);
        *(undefined8 *)(puVar2 + 2) = 0;
        *puVar2 = 0xffffffff;
        plStack_98 = *(longlong **)(puVar2 + 2);
        *(undefined8 *)(puVar2 + 2) = 0;
        puStack_70 = puVar2;
        if (plStack_98 != (longlong *)0x0) {
          (**(code **)(*plStack_98 + 0x38))();
        }
        uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0xf0,8,3);
        plVar4 = (longlong *)FUN_18007f2f0(uVar3);
        if (plVar4 != (longlong *)0x0) {
          plStack_90 = plVar4;
          (**(code **)(*plVar4 + 0x28))(plVar4);
        }
        plStack_90 = *(longlong **)(puVar2 + 2);
        *(longlong **)(puVar2 + 2) = plVar4;
        if (plStack_90 != (longlong *)0x0) {
          (**(code **)(*plStack_90 + 0x38))();
        }
        FUN_18007e2b0(*(undefined8 *)(puVar2 + 2),alStack_d8);
        auStack_88[0] = *puVar11;
        puStack_80 = puVar2;
        FUN_18033b220(param_1 + 0xb48,auStack_68,auStack_88);
        if (lVar1 != 0) {
          fclose(lVar1);
          lStack_a8 = 0;
          LOCK();
          _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
          UNLOCK();
        }
        if (((char)uStack_c0 == '\0') && (alStack_d8[0] != 0)) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_100 = &UNK_180a3c3e0;
        if (puStack_f8 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_f8 = (undefined1 *)0x0;
        uStack_e8 = uStack_e8 & 0xffffffff00000000;
        puStack_100 = &UNK_18098bcb0;
        iVar10 = iVar10 + 1;
        puVar11 = puVar11 + 1;
        puVar2 = puStack_b8;
      } while (iVar10 < aiStack_108[0]);
    }
    if (puVar2 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_128);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18032f990(undefined8 param_1,longlong param_2,longlong param_3)
void FUN_18032f990(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  undefined1 auStack_138 [48];
  int aiStack_108 [2];
  undefined8 uStack_100;
  int *piStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  undefined *puStack_e0;
  undefined1 *puStack_d8;
  uint uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  longlong alStack_b8 [2];
  undefined4 *puStack_a8;
  undefined4 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  longlong lStack_80;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  char acStack_50 [16];
  ulonglong uStack_40;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  aiStack_108[0] = 0;
  lStack_80 = param_3;
  fread(aiStack_108,4,1,*(undefined8 *)(param_2 + 8));
  if (0 < aiStack_108[0]) {
    if (aiStack_108[0] == 0) {
      puStack_a0 = (undefined4 *)0x0;
    }
    else {
      puStack_a0 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,(longlong)aiStack_108[0] * 4,3);
    }
    puVar1 = puStack_a0;
    fread(puStack_a0,4,(longlong)aiStack_108[0],*(undefined8 *)(param_2 + 8));
    uStack_c0 = 0;
    if (0 < aiStack_108[0]) {
      puStack_e0 = &UNK_180a3c3e0;
      uStack_c8 = 0;
      puStack_d8 = (undefined1 *)0x0;
      uStack_d0 = 0;
      puStack_a8 = puVar1;
      FUN_1806277c0(&puStack_e0,*(undefined4 *)(param_3 + 0x10));
      if (0 < *(int *)(param_3 + 0x10)) {
        puVar5 = &DAT_18098bc73;
        if (*(undefined **)(param_3 + 8) != (undefined *)0x0) {
          puVar5 = *(undefined **)(param_3 + 8);
        }
                    // WARNING: Subroutine does not return
        memcpy(puStack_d8,puVar5,(longlong)(*(int *)(param_3 + 0x10) + 1));
      }
      if (*(longlong *)(param_3 + 8) != 0) {
        uStack_d0 = 0;
        if (puStack_d8 != (undefined1 *)0x0) {
          *puStack_d8 = 0;
        }
      }
      uVar7 = uStack_d0 + 1;
      FUN_1806277c0(&puStack_e0,uVar7);
      *(undefined2 *)(puStack_d8 + uStack_d0) = 0x5c;
      uStack_d0 = uVar7;
      FUN_180060680(acStack_50,&UNK_1809fd0a0,*puVar1);
      lVar2 = -1;
      do {
        lVar9 = lVar2;
        lVar2 = lVar9 + 1;
      } while (acStack_50[lVar9 + 1] != '\0');
      iVar8 = (int)(lVar9 + 1);
      if (0 < iVar8) {
        FUN_1806277c0(&puStack_e0,uStack_d0 + iVar8);
                    // WARNING: Subroutine does not return
        memcpy(puStack_d8 + uStack_d0,acStack_50,(longlong)((int)lVar9 + 2));
      }
      iVar8 = uStack_d0 + 4;
      FUN_1806277c0(&puStack_e0,iVar8);
      *(undefined4 *)(puStack_d8 + uStack_d0) = 0x6662672e;
      *(undefined1 *)((longlong)(puStack_d8 + uStack_d0) + 4) = 0;
      puVar6 = &DAT_18098bc73;
      if (puStack_d8 != (undefined1 *)0x0) {
        puVar6 = puStack_d8;
      }
      uStack_98 = 0;
      uStack_88 = 0;
      uStack_d0 = iVar8;
      FUN_18062dee0(&uStack_98,puVar6,&UNK_180a01ff0);
      alStack_b8[0] = 0;
      fread(alStack_b8,8,1,uStack_90);
      uStack_100 = 0;
      piStack_f8 = (int *)0x0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e6 = 3;
      if (alStack_b8[0] != 0) {
        FUN_180639bf0(&uStack_100);
      }
      fread(uStack_100,alStack_b8[0],1,uStack_90);
      puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x78,8,3);
      puStack_58 = puVar3 + 10;
      *puStack_58 = &UNK_18098bcb0;
      uVar4 = 0;
      puVar3[0xb] = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0;
      *puStack_58 = &UNK_180a3c3e0;
      puVar3[0xd] = 0;
      puVar3[0xb] = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0;
      *puVar3 = 0;
      puStack_60 = puVar3;
      FUN_1803207c0(puVar3);
      iVar8 = *piStack_f8;
      *(int *)(puVar3 + 1) = iVar8;
      piVar10 = piStack_f8 + 1;
      piStack_f8 = piVar10;
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        uVar4 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar8 * 4,3);
        iVar8 = *(int *)(puVar3 + 1);
      }
      *puVar3 = uVar4;
                    // WARNING: Subroutine does not return
      memcpy(uVar4,piVar10,(longlong)(iVar8 * 4));
    }
    if (puVar1 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar1);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18032ffc0(longlong param_1,longlong param_2,undefined8 param_3)
void FUN_18032ffc0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  int aiStackX_10 [4];
  int iStackX_20;
  undefined *puStack_e8;
  undefined *puStack_e0;
  uint uStack_d8;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  undefined1 uStack_9e;
  undefined4 *puStack_98;
  longlong *plStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  undefined1 uStack_78;
  longlong lStack_70;
  longlong lStack_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 *puStack_48;
  
  uStack_50 = 0xfffffffffffffffe;
  aiStackX_10[0] = 0;
  fread(aiStackX_10,4,1,*(undefined8 *)(param_2 + 8));
  if (0 < aiStackX_10[0]) {
    if (aiStackX_10[0] == 0) {
      lStack_c0 = 0;
    }
    else {
      lStack_c0 = FUN_18062b420(_DAT_180c8ed18,(longlong)aiStackX_10[0] * 4,3);
    }
    lVar5 = lStack_c0;
    if (aiStackX_10[0] == 0) {
      puStack_98 = (undefined4 *)0x0;
    }
    else {
      puStack_98 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,(longlong)aiStackX_10[0] * 4,3);
    }
    puVar13 = puStack_98;
    if (aiStackX_10[0] == 0) {
      lStack_c8 = 0;
    }
    else {
      lStack_c8 = FUN_18062b420(_DAT_180c8ed18,(longlong)aiStackX_10[0] * 4,3);
    }
    lVar14 = lStack_c8;
    if (aiStackX_10[0] == 0) {
      plStack_90 = (longlong *)0x0;
    }
    else {
      plStack_90 = (longlong *)FUN_18062b420(_DAT_180c8ed18,(longlong)aiStackX_10[0] * 8,3);
    }
    plVar15 = plStack_90;
    fread(lVar5,4,(longlong)aiStackX_10[0],*(undefined8 *)(param_2 + 8));
    fread(puVar13,4,(longlong)aiStackX_10[0],*(undefined8 *)(param_2 + 8));
    fread(lVar14,4,(longlong)aiStackX_10[0],*(undefined8 *)(param_2 + 8));
    fread(plVar15,8,(longlong)aiStackX_10[0],*(undefined8 *)(param_2 + 8));
    FUN_1806279c0(&puStack_e8,param_3);
    uVar11 = uStack_d8;
    uVar8 = uStack_d8 + 1;
    FUN_1806277c0(&puStack_e8,uVar8);
    *(undefined2 *)(puStack_e0 + uStack_d8) = 0x5c;
    uVar9 = uVar11 + 0x16;
    uStack_d8 = uVar8;
    FUN_1806277c0(&puStack_e8,uVar9);
    puVar6 = (undefined4 *)(puStack_e0 + uStack_d8);
    *puVar6 = 0x6e696b73;
    puVar6[1] = 0x5f64656e;
    puVar6[2] = 0x61636564;
    puVar6[3] = 0x75625f6c;
    puVar6[4] = 0x72656666;
    *(undefined2 *)(puVar6 + 5) = 0x73;
    iVar10 = uVar11 + 0x1a;
    uStack_d8 = uVar9;
    FUN_1806277c0(&puStack_e8,iVar10);
    *(undefined4 *)(puStack_e0 + uStack_d8) = 0x6264732e;
    *(undefined1 *)((longlong)(puStack_e0 + uStack_d8) + 4) = 0;
    puVar7 = &DAT_18098bc73;
    if (puStack_e0 != (undefined *)0x0) {
      puVar7 = puStack_e0;
    }
    uStack_88 = 0;
    uStack_78 = 0;
    uStack_d8 = iVar10;
    FUN_18062dee0(&uStack_88,puVar7,&UNK_180a01ff0);
    iStackX_20 = 0;
    plVar16 = plVar15;
    puVar6 = puVar13;
    if (0 < aiStackX_10[0]) {
      puVar17 = (undefined8 *)(param_1 + 0x958);
      lStack_68 = lStack_c8 - (longlong)puVar13;
      lStack_70 = lStack_c0 - (longlong)puVar13;
      do {
        lVar14 = lStack_68;
        iVar10 = iStackX_20;
        uVar11 = 0;
        lStack_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_9e = 3;
        lVar5 = *plVar15;
        if (lVar5 != 0) {
          FUN_180639bf0(&lStack_b8);
          lVar5 = *plVar15;
        }
        fread(lStack_b8,lVar5,1,lStack_80);
        puVar6 = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18,0x908,8,3);
        LOCK();
        *puVar6 = 0;
        UNLOCK();
        do {
          *(undefined8 *)(puVar6 + (longlong)(int)uVar11 * 2 + 2) = 0;
          LOCK();
          *(undefined1 *)((longlong)puVar6 + (longlong)(int)uVar11 + 0x808) = 1;
          UNLOCK();
          uVar11 = uVar11 + 1;
        } while (uVar11 < 0x100);
        LOCK();
        *puVar6 = 0;
        UNLOCK();
        iVar1 = *(int *)(lVar14 + (longlong)puVar13);
        puStack_48 = puVar6;
        FUN_1801b9a40(puVar6,*puVar13);
        if (0 < iVar1) {
                    // WARNING: Subroutine does not return
          memcpy(*(undefined8 *)(puVar6 + 2),uStack_b0,0x20000);
        }
        iVar1 = *(int *)(lStack_70 + (longlong)puVar13);
        bVar2 = true;
        puVar3 = puVar17;
        puVar4 = *(undefined8 **)(param_1 + 0x968);
        while (puVar4 != (undefined8 *)0x0) {
          bVar2 = iVar1 < *(int *)(puVar4 + 4);
          puVar3 = puVar4;
          if (iVar1 < *(int *)(puVar4 + 4)) {
            puVar4 = (undefined8 *)puVar4[1];
          }
          else {
            puVar4 = (undefined8 *)*puVar4;
          }
        }
        puVar4 = puVar3;
        iStack_60 = iVar1;
        uStack_58 = puVar6;
        if (bVar2) {
          if (puVar3 == *(undefined8 **)(param_1 + 0x960)) goto LAB_180330378;
          puVar4 = (undefined8 *)func_0x00018066b9a0(puVar3);
        }
        if (*(int *)(puVar4 + 4) < iVar1) {
LAB_180330378:
          lVar5 = FUN_18062b420(_DAT_180c8ed18,0x30,*(undefined1 *)(param_1 + 0x980));
          *(int *)(lVar5 + 0x20) = iStack_60;
          *(undefined4 *)(lVar5 + 0x24) = uStack_5c;
          *(undefined4 *)(lVar5 + 0x28) = (undefined4)uStack_58;
          *(undefined4 *)(lVar5 + 0x2c) = uStack_58._4_4_;
          if ((puVar3 == puVar17) || (iVar1 < *(int *)(puVar3 + 4))) {
            uVar12 = 0;
          }
          else {
            uVar12 = 1;
          }
                    // WARNING: Subroutine does not return
          FUN_18066bdc0(lVar5,puVar3,puVar17,uVar12);
        }
        if (((char)uStack_a0 == '\0') && (lStack_b8 != 0)) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        iStackX_20 = iVar10 + 1;
        plVar15 = plVar15 + 1;
        puVar13 = puVar13 + 1;
        lVar14 = lStack_c8;
        plVar16 = plStack_90;
        puVar6 = puStack_98;
      } while (iStackX_20 < aiStackX_10[0]);
    }
    if (lStack_80 != 0) {
      fclose(lStack_80);
      lStack_80 = 0;
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
      UNLOCK();
    }
    if (lStack_c0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lStack_c0);
    }
    if (puVar6 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar6);
    }
    if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar14);
    }
    if (plVar16 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar16);
    }
    if (lStack_80 != 0) {
      fclose(lStack_80);
      lStack_80 = 0;
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
      UNLOCK();
    }
    puStack_e8 = &UNK_180a3c3e0;
    if (puStack_e0 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803304e0(longlong param_1,longlong param_2,undefined8 param_3)
void FUN_1803304e0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  longlong lVar14;
  undefined4 *puVar15;
  int *piVar16;
  int aiStackX_8 [2];
  longlong *plStackX_10;
  int iStackX_20;
  undefined *puStack_148;
  undefined *puStack_140;
  uint uStack_138;
  undefined4 uStack_130;
  longlong lStack_128;
  undefined4 *puStack_120;
  undefined8 uStack_118;
  undefined2 uStack_110;
  undefined1 uStack_10e;
  longlong lStack_108;
  int *piStack_100;
  int *piStack_f8;
  longlong lStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 *puStack_d8;
  undefined4 *puStack_d0;
  undefined4 *puStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  longlong lStack_b0;
  undefined1 uStack_a8;
  undefined4 uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined4 uStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  undefined1 auStack_50 [24];
  
  uStack_60 = 0xfffffffffffffffe;
  lVar7 = param_1 + 0x908;
  lStack_108 = lVar7;
  iVar3 = _Mtx_lock(lVar7);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  aiStackX_8[0] = 0;
  fread(aiStackX_8,4,1,*(undefined8 *)(param_2 + 8));
  if (0 < aiStackX_8[0]) {
    if (aiStackX_8[0] == 0) {
      lStack_f0 = 0;
    }
    else {
      lStack_f0 = FUN_18062b420(_DAT_180c8ed18,(longlong)aiStackX_8[0] * 4,3);
    }
    lVar14 = lStack_f0;
    if (aiStackX_8[0] == 0) {
      piStack_f8 = (int *)0x0;
    }
    else {
      piStack_f8 = (int *)FUN_18062b420(_DAT_180c8ed18,(longlong)aiStackX_8[0] * 4,3);
    }
    piVar13 = piStack_f8;
    fread(lVar14,4,(longlong)aiStackX_8[0],*(undefined8 *)(param_2 + 8));
    fread(piVar13,4,(longlong)aiStackX_8[0],*(undefined8 *)(param_2 + 8));
    FUN_1806279c0(&puStack_148,param_3);
    uVar11 = uStack_138;
    uVar9 = uStack_138 + 1;
    FUN_1806277c0(&puStack_148,uVar9);
    *(undefined2 *)(puStack_140 + uStack_138) = 0x5c;
    uVar10 = uVar11 + 0x15;
    uStack_138 = uVar9;
    FUN_1806277c0(&puStack_148,uVar10);
    puVar5 = (undefined4 *)(puStack_140 + uStack_138);
    *puVar5 = 0x6e656761;
    puVar5[1] = 0x6f705f74;
    puVar5[2] = 0x69746973;
    puVar5[3] = 0x5f736e6f;
    puVar5[4] = 0x61746164;
    *(undefined1 *)(puVar5 + 5) = 0;
    uVar11 = uVar11 + 0x19;
    uStack_138 = uVar10;
    FUN_1806277c0(&puStack_148,uVar11);
    *(undefined4 *)(puStack_140 + uStack_138) = 0x6470612e;
    *(undefined1 *)((longlong)(puStack_140 + uStack_138) + 4) = 0;
    puVar6 = &DAT_18098bc73;
    if (puStack_140 != (undefined *)0x0) {
      puVar6 = puStack_140;
    }
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_138 = uVar11;
    FUN_18062dee0(&uStack_b8,puVar6,&UNK_180a01ff0);
    lVar2 = lStack_b0;
    iStackX_20 = 0;
    piVar16 = piVar13;
    if (0 < aiStackX_8[0]) {
      lStack_68 = param_1 + 0x8d8;
      plStack_58 = &lStack_98;
      lStack_70 = lVar14 - (longlong)piVar13;
      do {
        lStack_128 = 0;
        puStack_120 = (undefined4 *)0x0;
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_10e = 3;
        iVar3 = *piVar13;
        piStack_100 = piVar13;
        if (((longlong)iVar3 & 0xfffffffffffffffU) != 0) {
          FUN_180639bf0(&lStack_128);
          iVar3 = *piVar13;
        }
        lVar7 = lStack_128;
        fread(lStack_128,(longlong)iVar3 << 4,1,lVar2);
        puStack_d8 = (undefined4 *)0x0;
        puStack_d0 = (undefined4 *)0x0;
        puStack_c8 = (undefined4 *)0x0;
        uStack_c0 = 3;
        iVar3 = *piVar13;
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          puStack_d0 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar3 * 0x10,3);
          puStack_c8 = puStack_d0 + (longlong)iVar3 * 4;
          iVar3 = *piVar13;
        }
        plStackX_10 = (longlong *)((ulonglong)plStackX_10 & 0xffffffff00000000);
        puVar5 = puStack_c8;
        puVar12 = puStack_120;
        puVar15 = puStack_d0;
        puVar4 = puStack_d0;
        puStack_d8 = puStack_d0;
        if (0 < iVar3) {
          do {
            puVar1 = puStack_d0;
            uStack_e8 = *puVar12;
            uStack_e4 = puVar12[1];
            uStack_e0 = puVar12[2];
            uStack_dc = puVar12[3];
            puVar12 = puVar12 + 4;
            puStack_120 = puVar12;
            if (puStack_d0 < puVar5) {
              *puStack_d0 = uStack_e8;
              puStack_d0[1] = uStack_e4;
              puStack_d0[2] = uStack_e0;
              puStack_d0[3] = uStack_dc;
              puVar4 = puVar15;
            }
            else {
              lStack_78 = (longlong)puStack_d0 - (longlong)puVar15;
              if (lStack_78 >> 4 == 0) {
                lVar7 = 1;
LAB_18033084a:
                puVar4 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,lVar7 << 4,3);
              }
              else {
                lVar7 = (lStack_78 >> 4) * 2;
                if (lVar7 != 0) goto LAB_18033084a;
                puVar4 = (undefined4 *)0x0;
              }
              if (puVar15 != puVar1) {
                    // WARNING: Subroutine does not return
                memmove(puVar4,puVar15,lStack_78);
              }
              *puVar4 = uStack_e8;
              puVar4[1] = uStack_e4;
              puVar4[2] = uStack_e0;
              puVar4[3] = uStack_dc;
              if (puVar15 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900(puVar15);
              }
              puVar5 = puVar4 + lVar7 * 4;
              piVar13 = piStack_100;
              puStack_d8 = puVar4;
              puStack_c8 = puVar5;
              puStack_d0 = puVar4;
            }
            puStack_d0 = puStack_d0 + 4;
            iVar3 = (int)plStackX_10 + 1;
            plStackX_10 = (longlong *)CONCAT44(plStackX_10._4_4_,iVar3);
            lVar7 = lStack_128;
            puVar15 = puVar4;
          } while (iVar3 < *piVar13);
        }
        puVar5 = puStack_d0;
        uStack_a0 = *(undefined4 *)(lStack_70 + (longlong)piVar13);
        uVar8 = (longlong)puStack_d0 - (longlong)puVar4;
        uStack_80 = 3;
        if (uVar8 < 0x10) {
          lStack_98 = 0;
        }
        else {
          lStack_98 = FUN_18062b420(_DAT_180c8ed18,((longlong)uVar8 >> 4) << 4,3);
        }
        lStack_88 = lStack_98 + ((longlong)uVar8 >> 4) * 0x10;
        lStack_90 = lStack_98;
        if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
          memmove(lStack_98,puVar4,uVar8);
        }
        FUN_18033c520(lStack_68,auStack_50);
        plStackX_10 = &lStack_98;
        if (lStack_98 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        if (puVar4 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar4);
        }
        if (((char)uStack_110 == '\0') && (lVar7 != 0)) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar7);
        }
        iStackX_20 = iStackX_20 + 1;
        piVar13 = piVar13 + 1;
        lVar7 = lStack_108;
        lVar14 = lStack_f0;
        piVar16 = piStack_f8;
        piStack_100 = piVar13;
      } while (iStackX_20 < aiStackX_8[0]);
    }
    if (lStack_b0 != 0) {
      fclose(lStack_b0);
      lStack_b0 = 0;
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
      UNLOCK();
      lVar7 = lStack_108;
    }
    if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar14);
    }
    if (piVar16 != (int *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(piVar16);
    }
    if (lStack_b0 != 0) {
      fclose(lStack_b0);
      lStack_b0 = 0;
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
      UNLOCK();
      lVar7 = lStack_108;
    }
    puStack_148 = &UNK_180a3c3e0;
    if (puStack_140 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_140 = (undefined *)0x0;
    uStack_130 = 0;
    puStack_148 = &UNK_18098bcb0;
  }
  iVar3 = _Mtx_unlock(lVar7);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180330cd0)
// WARNING: Removing unreachable block (ram,0x000180330cd5)
// WARNING: Removing unreachable block (ram,0x000180330f1c)
// WARNING: Removing unreachable block (ram,0x000180330f25)
// WARNING: Removing unreachable block (ram,0x000180330f57)
// WARNING: Removing unreachable block (ram,0x000180330f5f)
// WARNING: Removing unreachable block (ram,0x000180330f62)
// WARNING: Removing unreachable block (ram,0x000180330f2e)
// WARNING: Removing unreachable block (ram,0x000180330f33)
// WARNING: Removing unreachable block (ram,0x000180330f7c)
// WARNING: Removing unreachable block (ram,0x000180330f8b)
// WARNING: Removing unreachable block (ram,0x0001803310e5)
// WARNING: Removing unreachable block (ram,0x000180330fd4)
// WARNING: Removing unreachable block (ram,0x000180330fe1)
// WARNING: Removing unreachable block (ram,0x00018033100b)
// WARNING: Removing unreachable block (ram,0x000180331012)
// WARNING: Removing unreachable block (ram,0x000180331023)
// WARNING: Removing unreachable block (ram,0x00018033102b)
// WARNING: Removing unreachable block (ram,0x00018033104b)
// WARNING: Removing unreachable block (ram,0x000180331053)
// WARNING: Removing unreachable block (ram,0x000180331087)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



