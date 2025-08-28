#include "TaleWorlds.Native.Split.h"

// 03_rendering_part104.c - 2 个函数

// 函数: void FUN_18032cf30(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,int param_5)
void FUN_18032cf30(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,int param_5)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int *piVar10;
  uint *puVar11;
  longlong *plVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  int iVar15;
  bool bVar16;
  uint auStackX_20 [2];
  ulonglong uVar17;
  int iStack_a8;
  uint uStack_a4;
  longlong lStack_a0;
  uint *puStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined1 uStack_86;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 *puStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  longlong *plStack_50;
  
  uStack_60 = 0xfffffffffffffffe;
  auStackX_20[0] = param_4;
  _fseeki64(*(undefined8 *)(param_2 + 8),param_3,0);
  param_5 = 0;
  iStack_a8 = 0;
  fread(&param_5,4,1,*(undefined8 *)(param_2 + 8));
  uVar14 = (ulonglong)param_4;
  uVar17 = (ulonglong)param_4;
  uStack_a4 = param_4;
  FUN_18033af10(param_1 + 0x4a8,&uStack_80);
  lVar7 = CONCAT44(uStack_7c,uStack_80);
  puVar8 = (undefined8 *)(lVar7 + 8);
  if (param_5 < 1) {
    param_5 = 0;
    iStack_a8 = 0;
    fread(&param_5,4,1,*(undefined8 *)(param_2 + 8),uVar17);
    if (param_5 < 1) {
      if (0 < *(int *)(param_1 + 0x9b8)) {
        lStack_a0 = 0;
        puStack_98 = (undefined4 *)0x0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_86 = 3;
        iStack_a8 = 0;
        fread(&iStack_a8,4,1,*(undefined8 *)(param_2 + 8),uVar17);
        param_5 = 0;
        fread(&param_5,4,1,*(undefined8 *)(param_2 + 8));
        if (param_5 != 0) {
          FUN_180639bf0(&lStack_a0,param_5);
        }
        lVar7 = lStack_a0;
        fread(lStack_a0,param_5,1,*(undefined8 *)(param_2 + 8));
        puVar11 = puStack_98;
        uStack_a4 = 0;
        if (0 < iStack_a8) {
          puVar8 = (undefined8 *)(param_1 + 0x818);
          puVar6 = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
          plVar1 = (longlong *)(puVar6 + 6);
          *plVar1 = (longlong)&UNK_18098bcb0;
          *(undefined8 *)(puVar6 + 8) = 0;
          puVar6[10] = 0;
          *plVar1 = (longlong)&UNK_180a3c3e0;
          *(undefined8 *)(puVar6 + 0xc) = 0;
          *(undefined8 *)(puVar6 + 8) = 0;
          puVar6[10] = 0;
          plVar12 = (longlong *)(puVar6 + 0xe);
          puStack_68 = puVar6;
          plStack_58 = plVar1;
          plStack_50 = plVar12;
          FUN_1808fc838(plVar12,0x30,4,FUN_1801c2890,FUN_18004a130);
          puVar6[0x3e] = 0;
          *puVar6 = 0;
          (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_18098bc73);
          *(undefined8 *)(puVar6 + 1) = 0;
          *(undefined8 *)(puVar6 + 3) = 0x7f7fffff00000000;
          *puVar6 = *puVar11;
          puVar6[1] = puVar11[1];
          puVar6[2] = puVar11[2];
          puVar6[3] = puVar11[3];
          puVar6[4] = puVar11[4];
          uVar2 = puVar11[5];
          piVar10 = (int *)(puVar11 + 6);
          if (uVar2 != 0) {
            puStack_98 = (uint *)piVar10;
            (**(code **)(*plVar1 + 0x18))(plVar1,piVar10,uVar2);
            piVar10 = (int *)((longlong)piVar10 + (ulonglong)uVar2);
          }
          iVar3 = *piVar10;
          puVar6[0x3e] = iVar3;
          puStack_98 = (uint *)(piVar10 + 1);
          iVar15 = 0;
          if (0 < iVar3) {
            do {
              uVar2 = *puStack_98;
              puVar11 = puStack_98 + 1;
              if (uVar2 != 0) {
                puStack_98 = puVar11;
                (**(code **)(*plVar12 + 0x18))(plVar12,puVar11,uVar2);
                puVar11 = (uint *)((longlong)puVar11 + (ulonglong)uVar2);
              }
              *(uint *)(plVar12 + 4) = *puVar11;
              *(uint *)((longlong)plVar12 + 0x24) = puVar11[1];
              puStack_98 = puVar11 + 2;
              iVar15 = iVar15 + 1;
              plVar12 = plVar12 + 6;
            } while (iVar15 < (int)puVar6[0x3e]);
          }
          uStack_78 = puStack_68;
          puVar9 = puVar8;
          puVar5 = *(undefined8 **)(param_1 + 0x828);
          while (puVar5 != (undefined8 *)0x0) {
            puVar9 = puVar5;
            if (param_4 < *(uint *)(puVar5 + 4)) {
              puVar5 = (undefined8 *)puVar5[1];
            }
            else {
              puVar5 = (undefined8 *)*puVar5;
            }
          }
          uStack_80 = param_4;
          lVar7 = FUN_18062b420(_DAT_180c8ed18,0x30,*(undefined1 *)(param_1 + 0x840));
          *(uint *)(lVar7 + 0x20) = uStack_80;
          *(undefined4 *)(lVar7 + 0x24) = uStack_7c;
          *(undefined4 *)(lVar7 + 0x28) = (undefined4)uStack_78;
          *(undefined4 *)(lVar7 + 0x2c) = uStack_78._4_4_;
          if ((puVar9 == puVar8) || (param_4 < *(uint *)(puVar9 + 4))) {
            uVar13 = 0;
          }
          else {
            uVar13 = 1;
          }
                    // WARNING: Subroutine does not return
          FUN_18066bdc0(lVar7,puVar9,puVar8,uVar13);
        }
        if (((char)uStack_88 == '\0') && (lVar7 != 0)) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar7);
        }
      }
      FUN_180332560(param_1,param_2,(ulonglong)param_4);
      FUN_1800571e0(param_1 + 0x230,auStackX_20);
      return;
    }
    uStack_a4 = param_4;
    fread(&iStack_a8,4,1,*(undefined8 *)(param_2 + 8),uVar17);
    FUN_18033af10(param_1 + 0x638,&uStack_80);
    lVar7 = CONCAT44(uStack_7c,uStack_80);
    puVar9 = (undefined8 *)(lVar7 + 8);
    lVar4 = FUN_18062b420(_DAT_180c8ed18,0x28,*(undefined1 *)(lVar7 + 0x30));
    *(int *)(lVar4 + 0x20) = iStack_a8;
    bVar16 = true;
    puVar8 = puVar9;
    if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(lVar7 + 0x18);
      do {
        puVar8 = puVar5;
        bVar16 = *(uint *)(lVar4 + 0x20) < *(uint *)(puVar8 + 4);
        if (bVar16) {
          puVar5 = (undefined8 *)puVar8[1];
        }
        else {
          puVar5 = (undefined8 *)*puVar8;
        }
      } while (puVar5 != (undefined8 *)0x0);
    }
    puVar5 = puVar8;
    if (bVar16) {
      if (puVar8 == *(undefined8 **)(lVar7 + 0x10)) goto LAB_18032d19c;
      puVar5 = (undefined8 *)func_0x00018066b9a0(puVar8);
    }
    if (*(uint *)(lVar4 + 0x20) <= *(uint *)(puVar5 + 4)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar4);
    }
LAB_18032d19c:
    if ((puVar8 == puVar9) || (*(uint *)(lVar4 + 0x20) < *(uint *)(puVar8 + 4))) {
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
                    // WARNING: Subroutine does not return
    FUN_18066bdc0(lVar4,puVar8,puVar9,uVar13,uVar14);
  }
  fread(&iStack_a8,4,1,*(undefined8 *)(param_2 + 8),uVar17);
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0x28,*(undefined1 *)(lVar7 + 0x30));
  *(int *)(lVar4 + 0x20) = iStack_a8;
  bVar16 = true;
  puVar9 = puVar8;
  if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(lVar7 + 0x18);
    do {
      puVar9 = puVar5;
      bVar16 = *(uint *)(lVar4 + 0x20) < *(uint *)(puVar9 + 4);
      if (bVar16) {
        puVar5 = (undefined8 *)puVar9[1];
      }
      else {
        puVar5 = (undefined8 *)*puVar9;
      }
    } while (puVar5 != (undefined8 *)0x0);
  }
  puVar5 = puVar9;
  if (bVar16) {
    if (puVar9 == *(undefined8 **)(lVar7 + 0x10)) goto LAB_18032d06c;
    puVar5 = (undefined8 *)func_0x00018066b9a0(puVar9);
  }
  if (*(uint *)(lVar4 + 0x20) <= *(uint *)(puVar5 + 4)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar4);
  }
LAB_18032d06c:
  if ((puVar9 == puVar8) || (*(uint *)(lVar4 + 0x20) < *(uint *)(puVar9 + 4))) {
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,puVar9,puVar8,uVar13);
}



undefined8 * FUN_18032d520(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  undefined *puStack_58;
  longlong lStack_50;
  uint uStack_48;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 *puStack_28;
  
  uStack_30 = 0xfffffffffffffffe;
  iVar5 = 0;
  uStack_38 = 0;
  puStack_28 = param_2;
  FUN_1800baa40(&puStack_58);
  uVar2 = uStack_48 + 7;
  FUN_1806277c0(&puStack_58,uVar2);
  *(undefined8 *)((ulonglong)uStack_48 + lStack_50) = 0x7379616c706552;
  uStack_48 = uVar2;
  cVar1 = FUN_180624a00(&puStack_58);
  if (cVar1 == '\0') {
    FUN_180624910(&puStack_58);
  }
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  uStack_38 = 1;
  do {
    uVar2 = uStack_48;
    uVar4 = (ulonglong)uStack_48;
    if (lStack_50 != 0) {
      FUN_1806277c0(param_2,uVar4);
    }
    if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(param_2[1],lStack_50,uVar4);
    }
    *(undefined4 *)(param_2 + 2) = 0;
    iVar3 = 0;
    if (param_2[1] != 0) {
      *(undefined1 *)(uVar4 + param_2[1]) = 0;
      iVar3 = *(int *)(param_2 + 2);
    }
    *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_3c;
    FUN_1806277c0(param_2,iVar3 + 1);
    *(undefined2 *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]) = 0x5c;
    *(int *)(param_2 + 2) = iVar3 + 1;
    FUN_180628380(param_2,iVar5);
    iVar5 = iVar5 + 1;
    cVar1 = FUN_180624a00(param_2);
  } while (cVar1 != '\0');
  puStack_58 = &UNK_180a3c3e0;
  if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18032d690(longlong param_1,longlong param_2,longlong param_3)
void FUN_18032d690(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined1 auStack_138 [32];
  int aiStack_118 [2];
  undefined *puStack_110;
  undefined1 *puStack_108;
  uint uStack_100;
  ulonglong uStack_f8;
  longlong alStack_f0 [3];
  undefined2 uStack_d8;
  undefined1 uStack_d6;
  undefined4 *puStack_d0;
  undefined4 *puStack_c8;
  undefined4 *puStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  undefined1 uStack_90;
  longlong lStack_88;
  undefined4 *puStack_80;
  longlong lStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  char acStack_60 [32];
  ulonglong uStack_40;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  aiStack_118[0] = 0;
  puStack_d0 = (undefined4 *)0x0;
  puStack_c8 = (undefined4 *)0x0;
  puStack_c0 = (undefined4 *)0x0;
  uStack_b8 = 3;
  plVar1 = *(longlong **)(param_1 + 0xb50);
  lVar5 = *plVar1;
  plVar6 = plVar1;
  if (lVar5 == 0) {
    plVar6 = plVar1 + 1;
    lVar5 = *plVar6;
    while (lVar5 == 0) {
      plVar6 = plVar6 + 1;
      lVar5 = *plVar6;
    }
  }
  puVar11 = (undefined4 *)0x0;
  lStack_a8 = param_3;
  lStack_78 = param_1;
  lStack_70 = param_2;
  if (lVar5 != plVar1[*(longlong *)(param_1 + 0xb58)]) {
    puVar12 = (undefined4 *)0x0;
    do {
      aiStack_118[0] = aiStack_118[0] + 1;
      puStack_80 = *(undefined4 **)(lVar5 + 8);
      if (puVar12 < puStack_c0) {
        *puVar12 = *puStack_80;
        puVar2 = puVar11;
      }
      else {
        lStack_88 = (longlong)puVar12 - (longlong)puVar11;
        if (lStack_88 >> 2 == 0) {
          lVar10 = 1;
LAB_18032d78f:
          puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,lVar10 * 4,3);
        }
        else {
          lVar10 = (lStack_88 >> 2) * 2;
          if (lVar10 != 0) goto LAB_18032d78f;
          puVar2 = (undefined4 *)0x0;
        }
        if (puVar11 != puVar12) {
                    // WARNING: Subroutine does not return
          memmove(puVar2,puVar11,lStack_88);
        }
        *puVar2 = *puStack_80;
        if (puVar11 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar11);
        }
        puStack_c0 = puVar2 + lVar10;
        puStack_d0 = puVar2;
        puVar12 = puVar2;
      }
      lVar10 = lStack_a8;
      puStack_110 = &UNK_180a3c3e0;
      uStack_f8 = 0;
      puStack_108 = (undefined1 *)0x0;
      uStack_100 = 0;
      puStack_c8 = puVar12 + 1;
      FUN_1806277c0(&puStack_110,*(undefined4 *)(lStack_a8 + 0x10));
      if (0 < *(int *)(lVar10 + 0x10)) {
        puVar3 = &DAT_18098bc73;
        if (*(undefined **)(lVar10 + 8) != (undefined *)0x0) {
          puVar3 = *(undefined **)(lVar10 + 8);
        }
                    // WARNING: Subroutine does not return
        memcpy(puStack_108,puVar3,(longlong)(*(int *)(lVar10 + 0x10) + 1));
      }
      if ((*(longlong *)(lVar10 + 8) != 0) && (uStack_100 = 0, puStack_108 != (undefined1 *)0x0)) {
        *puStack_108 = 0;
      }
      uVar7 = uStack_100 + 1;
      FUN_1806277c0(&puStack_110,uVar7);
      *(undefined2 *)(puStack_108 + uStack_100) = 0x5c;
      uStack_100 = uVar7;
      FUN_180626eb0(acStack_60,0x20,&UNK_180a3c39c,**(undefined4 **)(lVar5 + 8));
      lVar10 = -1;
      do {
        lVar9 = lVar10;
        lVar10 = lVar9 + 1;
      } while (acStack_60[lVar9 + 1] != '\0');
      iVar8 = (int)(lVar9 + 1);
      if (0 < iVar8) {
        FUN_1806277c0(&puStack_110,uStack_100 + iVar8);
                    // WARNING: Subroutine does not return
        memcpy(puStack_108 + uStack_100,acStack_60,(longlong)((int)lVar9 + 2));
      }
      iVar8 = uStack_100 + 4;
      FUN_1806277c0(&puStack_110,iVar8);
      *(undefined4 *)(puStack_108 + uStack_100) = 0x6664652e;
      *(undefined1 *)((longlong)(puStack_108 + uStack_100) + 4) = 0;
      puVar4 = &DAT_18098bc73;
      if (puStack_108 != (undefined1 *)0x0) {
        puVar4 = puStack_108;
      }
      uStack_a0 = 0;
      uStack_90 = 0;
      uStack_100 = iVar8;
      FUN_18062dee0(&uStack_a0,puVar4,&UNK_180a0cf4c);
      alStack_f0[0] = 0;
      alStack_f0[1] = 0;
      alStack_f0[2] = 0;
      uStack_d8 = 0;
      uStack_d6 = 3;
      FUN_180639bf0(alStack_f0,0x100000);
      FUN_18007e5b0(*(undefined8 *)(*(longlong *)(lVar5 + 8) + 8),alStack_f0);
      lVar10 = lStack_98;
      uStack_b0 = alStack_f0[2];
      fwrite(&uStack_b0,8,1,lStack_98);
      lVar9 = alStack_f0[0];
      fwrite(alStack_f0[0],uStack_b0,1,lVar10);
      puVar12 = puVar12 + 1;
      if (lVar10 != 0) {
        fclose(lVar10);
        lStack_98 = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
        UNLOCK();
        lVar10 = 0;
        lVar9 = alStack_f0[0];
        puVar2 = puStack_d0;
        puVar12 = puStack_c8;
      }
      if (((char)uStack_d8 == '\0') && (lVar9 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar9);
      }
      puVar11 = puVar2;
      if (lVar10 != 0) {
        fclose(lVar10);
        lStack_98 = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
        UNLOCK();
        puVar11 = puStack_d0;
        puVar12 = puStack_c8;
      }
      puStack_110 = &UNK_180a3c3e0;
      if (puStack_108 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_108 = (undefined1 *)0x0;
      uStack_f8 = uStack_f8 & 0xffffffff00000000;
      puStack_110 = &UNK_18098bcb0;
      lVar5 = *(longlong *)(lVar5 + 0x10);
      while (lVar5 == 0) {
        plVar6 = plVar6 + 1;
        lVar5 = *plVar6;
      }
    } while (lVar5 != *(longlong *)
                       (*(longlong *)(lStack_78 + 0xb50) + *(longlong *)(lStack_78 + 0xb58) * 8));
  }
  lVar5 = lStack_70;
  fwrite(aiStack_118,4,1,*(undefined8 *)(lStack_70 + 8));
  if (0 < aiStack_118[0]) {
    fwrite(puVar11,4,(longlong)aiStack_118[0],*(undefined8 *)(lVar5 + 8));
  }
  _ftelli64(*(undefined8 *)(lVar5 + 8));
  if (puVar11 == (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_138);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar11);
}



// WARNING: Removing unreachable block (ram,0x00018032dc9e)
// WARNING: Removing unreachable block (ram,0x00018032dc40)
// WARNING: Removing unreachable block (ram,0x00018032dc49)
// WARNING: Removing unreachable block (ram,0x00018032dc7b)
// WARNING: Removing unreachable block (ram,0x00018032dc0f)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



