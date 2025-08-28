#include "TaleWorlds.Native.Split.h"

// 03_rendering_part105.c - 2 个函数

// 函数: void FUN_18032db60(longlong param_1,longlong param_2,longlong param_3)
void FUN_18032db60(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 auStack_138 [32];
  longlong lStack_118;
  undefined4 *puStack_110;
  longlong lStack_108;
  undefined2 uStack_100;
  undefined1 uStack_fe;
  int aiStack_f8 [2];
  undefined *puStack_f0;
  undefined1 *puStack_e8;
  uint uStack_e0;
  undefined8 uStack_d8;
  undefined4 *puStack_d0;
  undefined4 *puStack_c8;
  undefined4 *puStack_c0;
  undefined4 *puStack_b8;
  undefined4 uStack_b0;
  longlong lStack_a0;
  undefined8 auStack_98 [2];
  undefined1 uStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  char acStack_60 [32];
  ulonglong uStack_40;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  aiStack_f8[0] = 0;
  puStack_c8 = (undefined4 *)0x0;
  puStack_c0 = (undefined4 *)0x0;
  puStack_b8 = (undefined4 *)0x0;
  uStack_b0 = 3;
  puVar2 = *(undefined8 **)(param_1 + 0xb20);
  puVar9 = (undefined4 *)*puVar2;
  if (puVar9 == (undefined4 *)0x0) {
    puVar11 = puVar2 + 1;
    puVar9 = (undefined4 *)*puVar11;
    while (puVar9 == (undefined4 *)0x0) {
      puVar11 = puVar11 + 1;
      puVar9 = (undefined4 *)*puVar11;
    }
  }
  lStack_a0 = param_3;
  lStack_78 = param_1;
  lStack_70 = param_2;
  if (puVar9 == (undefined4 *)puVar2[*(longlong *)(param_1 + 0xb28)]) {
    fwrite(aiStack_f8,4,1,*(undefined8 *)(param_2 + 8));
    puVar9 = puStack_c8;
    if (0 < aiStack_f8[0]) {
      fwrite(puStack_c8,4,(longlong)aiStack_f8[0],*(undefined8 *)(param_2 + 8));
    }
    _ftelli64(*(undefined8 *)(param_2 + 8));
    if (puVar9 == (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_138);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar9);
  }
  aiStack_f8[0] = 1;
  puStack_d0 = (undefined4 *)0x0;
  puStack_c8 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,4,3);
  lVar3 = lStack_a0;
  *puStack_c8 = *puVar9;
  puStack_d0 = puStack_c8 + 1;
  puStack_b8 = puStack_c8 + 1;
  puStack_f0 = &UNK_180a3c3e0;
  uStack_d8 = 0;
  puStack_e8 = (undefined1 *)0x0;
  uStack_e0 = 0;
  puStack_c0 = puStack_d0;
  FUN_1806277c0(&puStack_f0,*(undefined4 *)(lStack_a0 + 0x10));
  if (0 < *(int *)(lVar3 + 0x10)) {
    puVar4 = &DAT_18098bc73;
    if (*(undefined **)(lVar3 + 8) != (undefined *)0x0) {
      puVar4 = *(undefined **)(lVar3 + 8);
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_e8,puVar4,(longlong)(*(int *)(lVar3 + 0x10) + 1));
  }
  if ((*(longlong *)(lVar3 + 8) != 0) && (uStack_e0 = 0, puStack_e8 != (undefined1 *)0x0)) {
    *puStack_e8 = 0;
  }
  uVar6 = uStack_e0 + 1;
  FUN_1806277c0(&puStack_f0,uVar6);
  *(undefined2 *)(puStack_e8 + uStack_e0) = 0x5c;
  uStack_e0 = uVar6;
  FUN_180626eb0(acStack_60,0x20,&UNK_180a3c39c,*puVar9);
  lVar3 = -1;
  do {
    lVar8 = lVar3;
    lVar3 = lVar8 + 1;
  } while (acStack_60[lVar8 + 1] != '\0');
  iVar7 = (int)(lVar8 + 1);
  if (iVar7 < 1) {
    iVar7 = uStack_e0 + 4;
    FUN_1806277c0(&puStack_f0,iVar7);
    *(undefined4 *)(puStack_e8 + uStack_e0) = 0x6662672e;
    *(undefined1 *)((longlong)(puStack_e8 + uStack_e0) + 4) = 0;
    puVar5 = &DAT_18098bc73;
    if (puStack_e8 != (undefined1 *)0x0) {
      puVar5 = puStack_e8;
    }
    auStack_98[0] = 0;
    uStack_88 = 0;
    uStack_e0 = iVar7;
    FUN_18062dee0(auStack_98,puVar5,&UNK_180a0cf4c);
    lStack_118 = 0;
    puStack_110 = (undefined4 *)0x0;
    lStack_108 = 0;
    uStack_100 = 0;
    uStack_fe = 3;
    FUN_180639bf0(&lStack_118,0x100000);
    puVar2 = *(undefined8 **)(puVar9 + 2);
    uVar1 = *(undefined4 *)(puVar2 + 1);
    if ((ulonglong)((lStack_108 - (longlong)puStack_110) + lStack_118) < 5) {
      FUN_180639bf0(&lStack_118,(longlong)puStack_110 + (4 - lStack_118));
    }
    *puStack_110 = uVar1;
    puStack_110 = puStack_110 + 1;
    uVar10 = (longlong)*(int *)(puVar2 + 1) * 4;
    uStack_80 = *puVar2;
    if ((ulonglong)((lStack_108 - (longlong)puStack_110) + lStack_118) <= uVar10) {
      FUN_180639bf0(&lStack_118,(longlong)puStack_110 + (uVar10 - lStack_118));
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_110,uStack_80,uVar10);
  }
  FUN_1806277c0(&puStack_f0,uStack_e0 + iVar7);
                    // WARNING: Subroutine does not return
  memcpy(puStack_e8 + uStack_e0,acStack_60,(longlong)((int)lVar8 + 2));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_18032e340(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  int *piVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  undefined4 *puVar17;
  longlong lVar18;
  int *piVar19;
  longlong *plVar20;
  int aiStackX_8 [2];
  longlong lStackX_10;
  longlong lStack_128;
  longlong lStack_120;
  ulonglong uStack_118;
  undefined2 uStack_110;
  undefined1 uStack_10e;
  undefined *puStack_108;
  undefined *puStack_100;
  uint uStack_f8;
  undefined4 uStack_f0;
  ulonglong uStack_e8;
  undefined4 *puStack_e0;
  undefined4 *puStack_d8;
  undefined4 *puStack_d0;
  undefined4 uStack_c8;
  undefined4 *puStack_c0;
  undefined4 *puStack_b8;
  undefined4 *puStack_b0;
  undefined4 uStack_a8;
  int *piStack_a0;
  int *piStack_98;
  int *piStack_90;
  undefined4 uStack_88;
  longlong *plStack_80;
  longlong *plStack_78;
  longlong *plStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  undefined1 uStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  aiStackX_8[0] = 0;
  puStack_e0 = (undefined4 *)0x0;
  puStack_d8 = (undefined4 *)0x0;
  puStack_d0 = (undefined4 *)0x0;
  uStack_c8 = 3;
  puStack_c0 = (undefined4 *)0x0;
  puStack_b8 = (undefined4 *)0x0;
  puStack_b0 = (undefined4 *)0x0;
  uStack_a8 = 3;
  piStack_a0 = (int *)0x0;
  piStack_98 = (int *)0x0;
  piStack_90 = (int *)0x0;
  uStack_88 = 3;
  plStack_80 = (longlong *)0x0;
  plStack_78 = (longlong *)0x0;
  plStack_70 = (longlong *)0x0;
  uStack_68 = 3;
  lStackX_10 = param_2;
  FUN_1806279c0(&puStack_108,param_3);
  uVar4 = uStack_f8;
  uVar13 = uStack_f8 + 1;
  FUN_1806277c0(&puStack_108,uVar13);
  *(undefined2 *)(puStack_100 + uStack_f8) = 0x5c;
  uVar14 = uVar4 + 0x16;
  uStack_f8 = uVar13;
  FUN_1806277c0(&puStack_108,uVar14);
  puVar11 = (undefined4 *)(puStack_100 + uStack_f8);
  *puVar11 = 0x6e696b73;
  puVar11[1] = 0x5f64656e;
  puVar11[2] = 0x61636564;
  puVar11[3] = 0x75625f6c;
  puVar11[4] = 0x72656666;
  *(undefined2 *)(puVar11 + 5) = 0x73;
  iVar15 = uVar4 + 0x1a;
  uStack_f8 = uVar14;
  FUN_1806277c0(&puStack_108,iVar15);
  *(undefined4 *)(puStack_100 + uStack_f8) = 0x6264732e;
  *(undefined1 *)((longlong)(puStack_100 + uStack_f8) + 4) = 0;
  puVar12 = &DAT_18098bc73;
  if (puStack_100 != (undefined *)0x0) {
    puVar12 = puStack_100;
  }
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_f8 = iVar15;
  FUN_18062dee0(&uStack_60,puVar12,&UNK_180a0cf4c);
  lStack_128 = 0;
  lStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_10e = 3;
  uStack_e8 = 0;
  lStack_48 = param_1 + 0x958;
  lVar10 = *(longlong *)(param_1 + 0x960);
  puVar11 = (undefined4 *)0x0;
  if (lVar10 != lStack_48) {
    do {
      puVar8 = puStack_d8;
      puVar17 = puStack_e0;
      aiStackX_8[0] = aiStackX_8[0] + 1;
      uVar5 = *(undefined4 *)(lVar10 + 0x20);
      if (puStack_d8 < puVar11) {
        *puStack_d8 = uVar5;
        puVar11 = puStack_d8;
      }
      else {
        lVar18 = (longlong)puStack_d8 - (longlong)puStack_e0;
        lVar16 = lVar18 >> 2;
        if (lVar16 == 0) {
          lVar16 = 1;
LAB_18032e50f:
          puVar11 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,lVar16 * 4,3);
        }
        else {
          lVar16 = lVar16 * 2;
          if (lVar16 != 0) goto LAB_18032e50f;
          puVar11 = (undefined4 *)0x0;
        }
        if (puVar17 != puVar8) {
                    // WARNING: Subroutine does not return
          memmove(puVar11,puVar17,lVar18);
        }
        *puVar11 = uVar5;
        if (puVar17 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar17);
        }
        puStack_d0 = puVar11 + lVar16;
        puStack_e0 = puVar11;
      }
      puStack_d8 = puVar11 + 1;
      uVar4 = **(uint **)(lVar10 + 0x28);
      if (uVar4 != 0) {
        uVar4 = (**(uint **)(lVar10 + 0x28) - 1 >> 0xc) + 1;
      }
      lVar16 = (ulonglong)uVar4 * 0x20000;
      uStack_e8 = uStack_e8 + lVar16;
      if (uStack_118 < uStack_e8) {
        FUN_180639bf0(&lStack_128);
      }
      plVar3 = plStack_78;
      plVar20 = plStack_80;
      if (plStack_78 < plStack_70) {
        *plStack_78 = lVar16;
        plVar7 = plStack_78;
      }
      else {
        lVar6 = (longlong)plStack_78 - (longlong)plStack_80;
        lVar18 = lVar6 >> 3;
        if (lVar18 == 0) {
          lVar18 = 1;
LAB_18032e5ed:
          plVar7 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar18 * 8,3);
        }
        else {
          lVar18 = lVar18 * 2;
          if (lVar18 != 0) goto LAB_18032e5ed;
          plVar7 = (longlong *)0x0;
        }
        if (plVar20 != plVar3) {
                    // WARNING: Subroutine does not return
          memmove(plVar7,plVar20,lVar6);
        }
        *plVar7 = lVar16;
        if (plVar20 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar20);
        }
        plStack_70 = plVar7 + lVar18;
        plStack_80 = plVar7;
      }
      puVar17 = puStack_b8;
      puVar11 = puStack_c0;
      plStack_78 = plVar7 + 1;
      uVar5 = **(undefined4 **)(lVar10 + 0x28);
      if (puStack_b8 < puStack_b0) {
        *puStack_b8 = uVar5;
        puVar8 = puStack_b8;
      }
      else {
        lVar18 = (longlong)puStack_b8 - (longlong)puStack_c0;
        lVar16 = lVar18 >> 2;
        if (lVar16 == 0) {
          lVar16 = 1;
LAB_18032e696:
          puVar8 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,lVar16 * 4,3);
        }
        else {
          lVar16 = lVar16 * 2;
          if (lVar16 != 0) goto LAB_18032e696;
          puVar8 = (undefined4 *)0x0;
        }
        if (puVar11 != puVar17) {
                    // WARNING: Subroutine does not return
          memmove(puVar8,puVar11,lVar18);
        }
        *puVar8 = uVar5;
        if (puVar11 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar11);
        }
        puStack_b0 = puVar8 + lVar16;
        puStack_c0 = puVar8;
      }
      piVar2 = piStack_98;
      piVar19 = piStack_a0;
      puStack_b8 = puVar8 + 1;
      if (**(int **)(lVar10 + 0x28) == 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = (**(int **)(lVar10 + 0x28) - 1U >> 0xc) + 1;
      }
      if (piStack_98 < piStack_90) {
        *piStack_98 = iVar15;
        piVar9 = piStack_98;
      }
      else {
        lVar18 = (longlong)piStack_98 - (longlong)piStack_a0;
        lVar16 = lVar18 >> 2;
        if (lVar16 == 0) {
          lVar16 = 1;
LAB_18032e74e:
          piVar9 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar16 * 4,3);
        }
        else {
          lVar16 = lVar16 * 2;
          if (lVar16 != 0) goto LAB_18032e74e;
          piVar9 = (int *)0x0;
        }
        if (piVar19 != piVar2) {
                    // WARNING: Subroutine does not return
          memmove(piVar9,piVar19,lVar18);
        }
        *piVar9 = iVar15;
        if (piVar19 != (int *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(piVar19);
        }
        piStack_90 = piVar9 + lVar16;
        piStack_a0 = piVar9;
      }
      piStack_98 = piVar9 + 1;
      piVar19 = *(int **)(lVar10 + 0x28);
      FUN_1801b9a40(piVar19,*piVar19);
      iVar15 = *piVar19;
      if (iVar15 != 0) {
        iVar15 = (*piVar19 - 1U >> 0xc) + 1;
      }
      if (iVar15 != 0) {
        uVar1 = *(undefined8 *)(piVar19 + 2);
        if ((uStack_118 - lStack_120) + lStack_128 < 0x20001) {
          FUN_180639bf0(&lStack_128,(lStack_120 - lStack_128) + 0x20000);
        }
                    // WARNING: Subroutine does not return
        memcpy(lStack_120,uVar1,0x20000);
      }
      lVar10 = func_0x00018066bd70(lVar10);
      puVar11 = puStack_d0;
      param_2 = lStackX_10;
    } while (lVar10 != lStack_48);
  }
  lVar10 = lStack_58;
  fwrite(lStack_128,uStack_118,1,lStack_58);
  if (lVar10 != 0) {
    fclose(lVar10);
    lStack_58 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
    lVar10 = 0;
  }
  fwrite(aiStackX_8,4,1,*(undefined8 *)(param_2 + 8));
  plVar20 = plStack_80;
  piVar19 = piStack_a0;
  puVar17 = puStack_c0;
  puVar11 = puStack_e0;
  if (0 < aiStackX_8[0]) {
    fwrite(puStack_e0,4,(longlong)aiStackX_8[0],*(undefined8 *)(param_2 + 8));
    fwrite(puVar17,4,(longlong)aiStackX_8[0],*(undefined8 *)(param_2 + 8));
    fwrite(piVar19,4,(longlong)aiStackX_8[0],*(undefined8 *)(param_2 + 8));
    fwrite(plVar20,8,(longlong)aiStackX_8[0],*(undefined8 *)(param_2 + 8));
  }
  uVar5 = _ftelli64(*(undefined8 *)(param_2 + 8));
  if (((char)uStack_110 == '\0') && (lStack_128 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (lVar10 != 0) {
    fclose(lVar10);
    lStack_58 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
    puVar17 = puStack_c0;
    puVar11 = puStack_e0;
    piVar19 = piStack_a0;
    plVar20 = plStack_80;
  }
  puStack_108 = &UNK_180a3c3e0;
  if (puStack_100 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_100 = (undefined *)0x0;
  uStack_f0 = 0;
  puStack_108 = &UNK_18098bcb0;
  if (plVar20 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar20);
  }
  if (piVar19 == (int *)0x0) {
    if (puVar17 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar17);
    }
    if (puVar11 == (undefined4 *)0x0) {
      return uVar5;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar11);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(piVar19);
}



// WARNING: Removing unreachable block (ram,0x00018032ec90)
// WARNING: Removing unreachable block (ram,0x00018032ec9e)
// WARNING: Removing unreachable block (ram,0x00018032eca2)
// WARNING: Removing unreachable block (ram,0x00018032ecd0)
// WARNING: Removing unreachable block (ram,0x00018032ecd9)
// WARNING: Removing unreachable block (ram,0x00018032ecdd)
// WARNING: Removing unreachable block (ram,0x00018032ed0b)
// WARNING: Removing unreachable block (ram,0x00018032ed50)
// WARNING: Removing unreachable block (ram,0x00018032ed61)
// WARNING: Removing unreachable block (ram,0x00018032ed65)
// WARNING: Removing unreachable block (ram,0x00018032ed71)
// WARNING: Removing unreachable block (ram,0x00018032ed7d)
// WARNING: Removing unreachable block (ram,0x00018032ed84)
// WARNING: Removing unreachable block (ram,0x00018032edcc)
// WARNING: Removing unreachable block (ram,0x00018032edd1)
// WARNING: Removing unreachable block (ram,0x00018032edfd)
// WARNING: Removing unreachable block (ram,0x00018032ee02)
// WARNING: Removing unreachable block (ram,0x00018032ee60)
// WARNING: Removing unreachable block (ram,0x00018032ee7c)
// WARNING: Removing unreachable block (ram,0x00018032ee6f)
// WARNING: Removing unreachable block (ram,0x00018032ee82)
// WARNING: Removing unreachable block (ram,0x00018032ee78)
// WARNING: Removing unreachable block (ram,0x00018032ee9c)
// WARNING: Removing unreachable block (ram,0x00018032eea5)
// WARNING: Removing unreachable block (ram,0x00018032eeb4)
// WARNING: Removing unreachable block (ram,0x00018032eec7)
// WARNING: Removing unreachable block (ram,0x00018032eecf)
// WARNING: Removing unreachable block (ram,0x00018032ee46)
// WARNING: Removing unreachable block (ram,0x00018032eef0)
// WARNING: Removing unreachable block (ram,0x00018032ef09)
// WARNING: Removing unreachable block (ram,0x00018032ef0e)
// WARNING: Removing unreachable block (ram,0x00018032ef31)
// WARNING: Removing unreachable block (ram,0x00018032ef40)
// WARNING: Removing unreachable block (ram,0x00018032ef56)
// WARNING: Removing unreachable block (ram,0x00018032ef79)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18032ea30(longlong param_1,longlong param_2,undefined8 param_3)
void FUN_18032ea30(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_188 [32];
  undefined4 uStack_168;
  int iStack_164;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  longlong lStack_138;
  uint uStack_130;
  undefined8 uStack_128;
  longlong lStack_120;
  longlong *plStack_118;
  undefined1 auStack_110 [32];
  undefined *puStack_f0;
  longlong lStack_e8;
  uint uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined1 *puStack_98;
  longlong *plStack_90;
  undefined8 uStack_68;
  ulonglong uStack_50;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_50 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  uStack_168 = 0;
  iStack_164 = 0;
  lStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 3;
  lStack_a8 = param_1;
  lStack_a0 = param_2;
  FUN_1806279c0(&puStack_f0,param_3);
  uVar6 = uStack_e0 + 0x11;
  FUN_1806277c0(&puStack_f0,uVar6);
  puVar5 = (undefined4 *)((ulonglong)uStack_e0 + lStack_e8);
  *puVar5 = 0x6261742f;
  puVar5[1] = 0x7561656c;
  puVar5[2] = 0x7865745f;
  puVar5[3] = 0x65727574;
  *(undefined2 *)(puVar5 + 4) = 0x73;
  uStack_e0 = uVar6;
  cVar4 = FUN_180624a00(&puStack_f0);
  if (cVar4 == '\0') {
    FUN_180624910(&puStack_f0);
  }
  lVar3 = lStack_c8;
  uVar6 = uStack_e0;
  plVar1 = *(longlong **)(param_1 + 0xaf0);
  lStack_120 = *plVar1;
  plStack_118 = plVar1;
  if (lStack_120 == 0) {
    plStack_118 = plVar1 + 1;
    lVar2 = *plStack_118;
    while (lVar2 == 0) {
      plStack_118 = plStack_118 + 1;
      lVar2 = *plStack_118;
    }
    lStack_120 = *plStack_118;
  }
  if (lStack_120 == plVar1[*(longlong *)(param_1 + 0xaf8)]) {
    fwrite(&iStack_164,4,1,*(undefined8 *)(param_2 + 8));
    if (0 < iStack_164) {
      fwrite(lVar3,4,(longlong)iStack_164,*(undefined8 *)(param_2 + 8));
    }
    _ftelli64(*(undefined8 *)(param_2 + 8));
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 == 0) {
      lStack_e8 = 0;
      uStack_d8 = 0;
      puStack_f0 = &UNK_18098bcb0;
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        FUN_1808fc050(uStack_50 ^ (ulonglong)auStack_188);
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_98 = auStack_110;
  plStack_90 = &lStack_120;
  puStack_140 = &UNK_180a3c3e0;
  uStack_128 = 0;
  lStack_138 = 0;
  uStack_130 = 0;
  uStack_168 = 1;
  uVar7 = (ulonglong)uStack_e0;
  uStack_d0 = uStack_c0;
  if (lStack_e8 != 0) {
    FUN_1806277c0(&puStack_140,uVar7);
  }
  if (uVar6 == 0) {
    uStack_130 = uVar6;
    if (lStack_138 != 0) {
      *(undefined1 *)(uVar7 + lStack_138) = 0;
    }
    uStack_128 = CONCAT44(uStack_d4,(undefined4)uStack_128);
    FUN_1806277c0(&puStack_140,1);
    *(undefined2 *)((ulonglong)uStack_130 + lStack_138) = 0x2f;
    puStack_160 = &UNK_180a3c3e0;
    uStack_148 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 3;
    uStack_130 = 1;
    if (lStack_138 != 0) {
      FUN_1806277c0(&puStack_160,1);
    }
                    // WARNING: Subroutine does not return
    memcpy(uStack_158,lStack_138,1);
  }
                    // WARNING: Subroutine does not return
  memcpy(lStack_138,lStack_e8,uVar7);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_18032f030(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int aiStackX_20 [2];
  longlong lStack_108;
  longlong lStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  uint uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  undefined4 *puStack_b8;
  undefined4 *puStack_b0;
  undefined4 *puStack_a8;
  undefined4 uStack_a0;
  undefined4 *puStack_98;
  undefined4 *puStack_90;
  undefined4 *puStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  undefined1 uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  uint uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  lVar12 = param_1 + 0x908;
  lStack_d0 = lVar12;
  iVar2 = _Mtx_lock(lVar12);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  puStack_b8 = (undefined4 *)0x0;
  puStack_b0 = (undefined4 *)0x0;
  puStack_a8 = (undefined4 *)0x0;
  uStack_a0 = 3;
  puStack_98 = (undefined4 *)0x0;
  puStack_90 = (undefined4 *)0x0;
  puStack_88 = (undefined4 *)0x0;
  uStack_80 = 3;
  FUN_1806279c0(&puStack_f8,param_3);
  uVar1 = uStack_e8;
  uVar10 = uStack_e8 + 1;
  FUN_1806277c0(&puStack_f8,uVar10);
  *(undefined2 *)(puStack_f0 + uStack_e8) = 0x5c;
  uVar11 = uVar1 + 0x15;
  uStack_e8 = uVar10;
  FUN_1806277c0(&puStack_f8,uVar11);
  puVar8 = (undefined4 *)(puStack_f0 + uStack_e8);
  *puVar8 = 0x6e656761;
  puVar8[1] = 0x6f705f74;
  puVar8[2] = 0x69746973;
  puVar8[3] = 0x5f736e6f;
  puVar8[4] = 0x61746164;
  *(undefined1 *)(puVar8 + 5) = 0;
  iVar2 = uVar1 + 0x19;
  uStack_e8 = uVar11;
  FUN_1806277c0(&puStack_f8,iVar2);
  *(undefined4 *)(puStack_f0 + uStack_e8) = 0x6470612e;
  *(undefined1 *)((longlong)(puStack_f0 + uStack_e8) + 4) = 0;
  puVar9 = &DAT_18098bc73;
  if (puStack_f0 != (undefined *)0x0) {
    puVar9 = puStack_f0;
  }
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_e8 = iVar2;
  FUN_18062dee0(&uStack_78,puVar9,&UNK_180a0cf4c);
  lVar7 = *(longlong *)(param_1 + 0x8e0);
  puVar8 = puStack_b0;
  puVar5 = puStack_b8;
  puVar13 = puStack_b8;
  puVar14 = puStack_90;
  puVar6 = puStack_98;
  puVar15 = puStack_98;
  if (lVar7 != param_1 + 0x8d8) {
    do {
      lVar12 = *(longlong *)(lVar7 + 0x30) - *(longlong *)(lVar7 + 0x28) >> 4;
      uStack_48 = *(uint *)(lVar7 + 0x40);
      if (lVar12 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = FUN_18062b420(_DAT_180c8ed18,lVar12 << 4,uStack_48 & 0xff);
      }
      lStack_50 = lVar12 * 0x10 + lVar4;
      lVar12 = *(longlong *)(lVar7 + 0x28);
      lStack_60 = lVar4;
      lStack_58 = lVar4;
      if (lVar12 != *(longlong *)(lVar7 + 0x30)) {
                    // WARNING: Subroutine does not return
        memmove(lVar4,lVar12,*(longlong *)(lVar7 + 0x30) - lVar12);
      }
      uStack_d8 = *(undefined4 *)(lVar7 + 0x20);
      if (puVar8 < puStack_a8) {
        *puVar8 = uStack_d8;
        puVar5 = puVar13;
      }
      else {
        lStack_c8 = (longlong)puVar8 - (longlong)puVar13;
        lStack_c0 = lStack_c8 >> 2;
        if (lStack_c0 == 0) {
          lStack_100 = 1;
LAB_18032f27b:
          puVar5 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,lStack_100 * 4,3);
        }
        else {
          lStack_100 = lStack_c0 * 2;
          if (lStack_100 != 0) goto LAB_18032f27b;
          puVar5 = (undefined4 *)0x0;
        }
        if (puVar13 != puVar8) {
                    // WARNING: Subroutine does not return
          memmove(puVar5,puVar13,lStack_c8);
        }
        *puVar5 = uStack_d8;
        if (puVar13 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar13);
        }
        puStack_a8 = puVar5 + lStack_100;
        puStack_b8 = puVar5;
        puVar8 = puVar5;
      }
      puVar8 = puVar8 + 1;
      puStack_b0 = puVar8;
      if (puVar14 < puStack_88) {
        *puVar14 = 0;
        puVar6 = puVar15;
      }
      else {
        lStack_c0 = (longlong)puVar14 - (longlong)puVar15;
        lStack_c8 = lStack_c0 >> 2;
        if (lStack_c8 == 0) {
          lStack_108 = 1;
LAB_18032f333:
          puVar6 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,lStack_108 * 4,3);
        }
        else {
          lStack_108 = lStack_c8 * 2;
          if (lStack_108 != 0) goto LAB_18032f333;
          puVar6 = (undefined4 *)0x0;
        }
        if (puVar15 != puVar14) {
                    // WARNING: Subroutine does not return
          memmove(puVar6,puVar15,lStack_c0);
        }
        *puVar6 = 0;
        if (puVar15 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar15);
        }
        puStack_88 = puVar6 + lStack_108;
        puStack_98 = puVar6;
        puVar14 = puVar6;
      }
      puStack_90 = puVar14 + 1;
      fwrite(lVar4,0,1,lStack_70);
      if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar4);
      }
      lVar7 = func_0x00018066bd70(lVar7);
      lVar12 = lStack_d0;
      puVar13 = puVar5;
      puVar14 = puVar14 + 1;
      puVar15 = puVar6;
    } while (lVar7 != param_1 + 0x8d8);
  }
  if (lStack_70 != 0) {
    fclose(lStack_70);
    lStack_70 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
    lVar12 = lStack_d0;
    puVar5 = puStack_b8;
    puVar6 = puStack_98;
  }
  lVar7 = lStack_70;
  aiStackX_20[0] = (int)*(undefined8 *)(param_1 + 0x8f8);
  fwrite(aiStackX_20,4,1,*(undefined8 *)(param_2 + 8));
  if (aiStackX_20[0] != 0) {
    fwrite(puVar5,4,aiStackX_20[0],*(undefined8 *)(param_2 + 8));
    fwrite(puVar6,4,aiStackX_20[0],*(undefined8 *)(param_2 + 8));
  }
  uVar3 = _ftelli64(*(undefined8 *)(param_2 + 8));
  if (lVar7 != 0) {
    fclose(lVar7);
    lVar7 = 0;
    lStack_70 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
    lVar12 = lStack_d0;
    puVar5 = puStack_b8;
    puVar6 = puStack_98;
  }
  puStack_f8 = &UNK_180a3c3e0;
  if (puStack_f0 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uStack_e0 = (undefined4)lVar7;
  puStack_f8 = &UNK_18098bcb0;
  puStack_f0 = (undefined *)lVar7;
  if (puVar6 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar6);
  }
  if (puVar5 == (undefined4 *)0x0) {
    iVar2 = _Mtx_unlock(lVar12);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    return uVar3;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}



// WARNING: Removing unreachable block (ram,0x00018032f8e9)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



