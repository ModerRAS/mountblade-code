#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part193.c - 3 个函数

// 函数: void FUN_1801760d0(longlong param_1,longlong *param_2,undefined4 param_3,int param_4)
void FUN_1801760d0(longlong param_1,longlong *param_2,undefined4 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  int *piStack_88;
  int aiStack_78 [2];
  longlong lStack_70;
  undefined1 auStack_68 [8];
  int aiStack_60 [5];
  int iStack_4c;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  lStack_70 = 0;
  __0GpuCacheCreationParameters_Granite_Graphine__QEAA_XZ(aiStack_60);
  piStack_88 = aiStack_60;
  iVar4 = (**(code **)(*param_2 + 0x40))(param_2,param_3,4,(longlong)param_4);
  puVar1 = (undefined8 *)(param_1 + 0x1b0);
  aiStack_78[0] = iStack_4c;
  puVar5 = puVar1;
  puVar2 = *(undefined8 **)(param_1 + 0x1c0);
  while (puVar2 != (undefined8 *)0x0) {
    if (*(int *)(puVar2 + 4) < iStack_4c) {
      puVar2 = (undefined8 *)*puVar2;
    }
    else {
      puVar5 = puVar2;
      puVar2 = (undefined8 *)puVar2[1];
    }
  }
  if ((puVar5 == puVar1) || (iStack_4c < *(int *)(puVar5 + 4))) {
    piStack_88 = aiStack_78;
    puVar5 = (undefined8 *)FUN_180179aa0(puVar1,auStack_68,iStack_4c,puVar5);
    puVar5 = (undefined8 *)*puVar5;
  }
  if (puVar5[5] == 0) {
    if (iVar4 != 0) {
      FUN_180626ee0(&UNK_180a09198);
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x118))
                      (*(longlong **)(param_1 + 0xe8),aiStack_60,&lStack_70);
    if ((lStack_70 == 0) || (iVar4 != 0)) {
      FUN_180626ee0(&UNK_180a09220);
    }
    lVar3 = lStack_70;
    aiStack_78[0] = iStack_4c;
    puVar5 = puVar1;
    puVar2 = *(undefined8 **)(param_1 + 0x1c0);
    while (puVar2 != (undefined8 *)0x0) {
      if (*(int *)(puVar2 + 4) < iStack_4c) {
        puVar2 = (undefined8 *)*puVar2;
      }
      else {
        puVar5 = puVar2;
        puVar2 = (undefined8 *)puVar2[1];
      }
    }
    if ((puVar5 == puVar1) || (iStack_4c < *(int *)(puVar5 + 4))) {
      piStack_88 = aiStack_78;
      puVar5 = (undefined8 *)FUN_180179aa0(puVar1,auStack_68);
      puVar5 = (undefined8 *)*puVar5;
    }
    puVar5[5] = lVar3;
  }
  else {
    aiStack_78[0] = iStack_4c;
    puVar5 = puVar1;
    puVar2 = *(undefined8 **)(param_1 + 0x1c0);
    while (puVar2 != (undefined8 *)0x0) {
      if (*(int *)(puVar2 + 4) < iStack_4c) {
        puVar2 = (undefined8 *)*puVar2;
      }
      else {
        puVar5 = puVar2;
        puVar2 = (undefined8 *)puVar2[1];
      }
    }
    if ((puVar5 == puVar1) || (iStack_4c < *(int *)(puVar5 + 4))) {
      piStack_88 = aiStack_78;
      FUN_180179aa0(puVar1,auStack_68,iStack_4c,puVar5);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801762b0(longlong param_1,undefined **param_2,longlong param_3,undefined **param_4)
void FUN_1801762b0(longlong param_1,undefined **param_2,longlong param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined **ppuVar6;
  longlong *plVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined *puVar13;
  undefined1 auStack_718 [32];
  undefined *puStack_6f8;
  undefined1 *puStack_6f0;
  int iStack_6e8;
  ulonglong uStack_6e0;
  longlong lStack_6d8;
  undefined4 uStack_6d0;
  undefined **ppuStack_6c8;
  undefined4 uStack_6c0;
  longlong *plStack_6b8;
  longlong *plStack_6b0;
  undefined *puStack_6a8;
  longlong *plStack_6a0;
  uint uStack_698;
  undefined8 uStack_690;
  undefined4 uStack_688;
  undefined **appuStack_680 [2];
  undefined8 uStack_670;
  undefined *apuStack_668 [68];
  undefined *apuStack_448 [128];
  ulonglong uStack_48;
  
  uStack_670 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_718;
  plVar10 = *(longlong **)(param_1 + 200);
  appuStack_680[0] = param_2;
  for (plVar12 = *(longlong **)(param_1 + 0xc0); lStack_6d8 = param_3, ppuStack_6c8 = param_4,
      plVar12 != plVar10; plVar12 = plVar12 + 1) {
    uStack_6d0 = 0;
    lVar5 = *plVar12;
    puStack_6f8 = &UNK_180a3c3e0;
    uStack_6e0 = 0;
    puStack_6f0 = (undefined1 *)0x0;
    iStack_6e8 = 0;
    FUN_1806277c0(&puStack_6f8,*(undefined4 *)(lVar5 + 0xb8));
    if (*(int *)(lVar5 + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_6f0,*(undefined8 *)(lVar5 + 0xb0),*(int *)(lVar5 + 0xb8) + 1);
    }
    if (*(longlong *)(lVar5 + 0xb0) != 0) {
      iStack_6e8 = 0;
      if (puStack_6f0 != (undefined1 *)0x0) {
        *puStack_6f0 = 0;
      }
      uStack_6e0 = uStack_6e0 & 0xffffffff;
    }
    uStack_6d0 = 0;
    puStack_6f8 = &UNK_180a3c3e0;
    if (puStack_6f0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_6f0 = (undefined1 *)0x0;
    uStack_6e0 = uStack_6e0 & 0xffffffff00000000;
    puStack_6f8 = &UNK_18098bcb0;
    param_3 = lStack_6d8;
    param_4 = ppuStack_6c8;
  }
  uStack_6d0 = 0;
  __0TileSetCreationParameters_Granite_Graphine__QEAA_XZ(&ppuStack_6c8);
  ppuVar1 = appuStack_680[0];
  lVar5 = FUN_180624440(apuStack_668,appuStack_680[0]);
  puStack_6f8 = &UNK_180a3c3e0;
  uStack_6e0 = 0;
  puStack_6f0 = (undefined1 *)0x0;
  iStack_6e8 = 0;
  FUN_1806277c0(&puStack_6f8,*(undefined4 *)(lVar5 + 0x10));
  if (0 < *(int *)(lVar5 + 0x10)) {
    puVar8 = &DAT_18098bc73;
    if (*(undefined **)(lVar5 + 8) != (undefined *)0x0) {
      puVar8 = *(undefined **)(lVar5 + 8);
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_6f0,puVar8,(longlong)(*(int *)(lVar5 + 0x10) + 1));
  }
  if ((*(longlong *)(lVar5 + 8) != 0) && (iStack_6e8 = 0, puStack_6f0 != (undefined1 *)0x0)) {
    *puStack_6f0 = 0;
  }
  apuStack_668[0] = &UNK_18098bcb0;
  puVar9 = &DAT_18098bc73;
  if (puStack_6f0 != (undefined1 *)0x0) {
    puVar9 = puStack_6f0;
  }
  mbstowcs(apuStack_448,puVar9,(longlong)(iStack_6e8 + 1));
  ppuStack_6c8 = apuStack_448;
  uStack_6c0 = 0;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x48))
                    (*(longlong **)(param_1 + 0xe8),&ppuStack_6c8,&plStack_6b8);
  plVar12 = plStack_6b8;
  if ((plStack_6b8 == (longlong *)0x0) || (iVar4 != 0)) {
    if (DAT_180c82860 == '\0') {
      puVar8 = &DAT_18098bc73;
      if (ppuVar1[1] != (undefined *)0x0) {
        puVar8 = ppuVar1[1];
      }
      puVar13 = &DAT_18098bc73;
      if (*(undefined **)(param_3 + 8) != (undefined *)0x0) {
        puVar13 = *(undefined **)(param_3 + 8);
      }
      FUN_180626f80(&UNK_180a091f0,puVar13,puVar8);
    }
    puStack_6f8 = &UNK_180a3c3e0;
    if (puStack_6f0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_6f0 = (undefined1 *)0x0;
    uStack_6e0 = uStack_6e0 & 0xffffffff00000000;
    puStack_6f8 = &UNK_18098bcb0;
    goto LAB_1801769b0;
  }
  puStack_6f8 = &UNK_180a3c3e0;
  if (puStack_6f0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_6f0 = (undefined1 *)0x0;
  uStack_6e0 = uStack_6e0 & 0xffffffff00000000;
  puStack_6f8 = &UNK_18098bcb0;
  lStack_6d8 = 0;
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x140))
            (*(longlong **)(param_1 + 0xe8),plStack_6b8,&lStack_6d8);
  if (lStack_6d8 == 0) {
    __0CpuCacheCreationParameters_Granite_Graphine__QEAA_XZ(appuStack_680);
    iVar4 = (**(code **)(*plVar12 + 0x38))(plVar12,0x3fffc00,appuStack_680);
    if (iVar4 != 0) {
      FUN_180626ee0(&UNK_180a09158);
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x120))
                      (*(longlong **)(param_1 + 0xe8),appuStack_680,&lStack_6d8);
    if ((lStack_6d8 == 0) || (iVar4 != 0)) {
      FUN_180626ee0(&UNK_180a091c8);
    }
  }
  iVar4 = (**(code **)(*plStack_6b8 + 0x130))(plStack_6b8,lStack_6d8);
  if (iVar4 != 0) {
    FUN_180626ee0(&UNK_180a09280);
  }
  appuStack_680[0] = &puStack_6a8;
  puStack_6a8 = &UNK_180a3c3e0;
  uStack_690 = 0;
  plStack_6a0 = (longlong *)0x0;
  uStack_698 = 0;
  plStack_6b0 = plStack_6b8;
  uVar3 = *(uint *)(param_3 + 0x10);
  uVar11 = (ulonglong)uVar3;
  if (*(longlong *)(param_3 + 8) != 0) {
    FUN_1806277c0(&puStack_6a8,uVar11);
  }
  if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(plStack_6a0,*(undefined8 *)(param_3 + 8),uVar11);
  }
  if (plStack_6a0 != (longlong *)0x0) {
    *(undefined1 *)(uVar11 + (longlong)plStack_6a0) = 0;
  }
  uStack_690 = CONCAT44(*(undefined4 *)(param_3 + 0x1c),(undefined4)uStack_690);
  uStack_688 = (undefined4)(*(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xc0) >> 3);
  uStack_698 = uVar3;
  ppuVar6 = (undefined **)FUN_18062b1e0(_DAT_180c8ed18,0x1c0,8,3);
  ppuStack_6c8 = ppuVar6 + 1;
  appuStack_680[0] = ppuVar6;
  _Mtx_init_in_situ(ppuStack_6c8,2);
  ppuStack_6c8 = ppuVar6 + 0xb;
  _Mtx_init_in_situ(ppuStack_6c8,2);
  uVar3 = uStack_698;
  ppuVar1 = ppuVar6 + 0x15;
  *ppuVar1 = &UNK_18098bcb0;
  ppuVar6[0x16] = (undefined *)0x0;
  *(undefined4 *)(ppuVar6 + 0x17) = 0;
  *ppuVar1 = &UNK_180a3c3e0;
  ppuVar6[0x18] = (undefined *)0x0;
  ppuVar6[0x16] = (undefined *)0x0;
  *(undefined4 *)(ppuVar6 + 0x17) = 0;
  ppuVar2 = ppuVar6 + 0x2a;
  ppuVar6[0x2d] = (undefined *)0x0;
  *(undefined4 *)(ppuVar6 + 0x2f) = 3;
  *ppuVar2 = (undefined *)ppuVar2;
  ppuVar6[0x2b] = (undefined *)ppuVar2;
  ppuVar6[0x2c] = (undefined *)0x0;
  *(undefined1 *)(ppuVar6 + 0x2d) = 0;
  ppuVar6[0x2e] = (undefined *)0x0;
  ppuStack_6c8 = ppuVar6 + 0x30;
  ppuVar6[0x33] = (undefined *)0x0;
  *(undefined4 *)(ppuVar6 + 0x35) = 3;
  *ppuStack_6c8 = (undefined *)ppuStack_6c8;
  ppuVar6[0x31] = (undefined *)ppuStack_6c8;
  ppuVar6[0x32] = (undefined *)0x0;
  *(undefined1 *)(ppuVar6 + 0x33) = 0;
  ppuVar6[0x34] = (undefined *)0x0;
  ppuVar6[0x29] = (undefined *)plStack_6b0;
  uVar11 = (ulonglong)uStack_698;
  if (plStack_6a0 != (longlong *)0x0) {
    FUN_1806277c0(ppuVar1,uVar11);
  }
  if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(ppuVar6[0x16],plStack_6a0,uVar11);
  }
  *(undefined4 *)(ppuVar6 + 0x17) = 0;
  if (ppuVar6[0x16] != (undefined *)0x0) {
    ppuVar6[0x16][uVar11] = 0;
  }
  *(undefined4 *)((longlong)ppuVar6 + 0xc4) = uStack_690._4_4_;
  *(undefined4 *)ppuVar6 = uStack_688;
  *(undefined4 *)(ppuVar6 + 0x36) = *(undefined4 *)param_4;
  *(undefined4 *)((longlong)ppuVar6 + 0x1b4) = *(undefined4 *)((longlong)param_4 + 4);
  *(undefined4 *)(ppuVar6 + 0x37) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)ppuVar6 + 0x1bc) = *(undefined4 *)((longlong)param_4 + 0xc);
  plVar12 = *(longlong **)(param_1 + 200);
  if (plVar12 < *(longlong **)(param_1 + 0xd0)) {
    *(longlong **)(param_1 + 200) = plVar12 + 1;
    *plVar12 = (longlong)ppuVar6;
    plVar10 = plStack_6a0;
  }
  else {
    plVar10 = *(longlong **)(param_1 + 0xc0);
    lVar5 = (longlong)plVar12 - (longlong)plVar10 >> 3;
    if (lVar5 == 0) {
      lVar5 = 1;
LAB_180176827:
      plVar7 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar5 * 8,*(undefined1 *)(param_1 + 0xd8));
      plVar12 = *(longlong **)(param_1 + 200);
      plVar10 = *(longlong **)(param_1 + 0xc0);
    }
    else {
      lVar5 = lVar5 * 2;
      if (lVar5 != 0) goto LAB_180176827;
      plVar7 = (longlong *)0x0;
    }
    if (plVar10 != plVar12) {
                    // WARNING: Subroutine does not return
      memmove(plVar7,plVar10,(longlong)plVar12 - (longlong)plVar10);
    }
    *plVar7 = (longlong)ppuVar6;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(longlong **)(param_1 + 0xc0) = plVar7;
    *(longlong **)(param_1 + 200) = plVar7 + 1;
    *(longlong **)(param_1 + 0xd0) = plVar7 + lVar5;
  }
  FUN_1801769e0(param_1,plVar10);
  plVar10 = *(longlong **)(param_1 + 200);
  for (plVar12 = *(longlong **)(param_1 + 0xc0); plVar12 != plVar10; plVar12 = plVar12 + 1) {
    lVar5 = *plVar12;
    ppuVar1 = (undefined **)(lVar5 + 0x58);
    appuStack_680[0] = ppuVar1;
    iVar4 = _Mtx_lock(ppuVar1);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    plVar7 = *(longlong **)(lVar5 + 0x148);
    (**(code **)(*plVar7 + 0x110))(plVar7,2);
    iVar4 = _Mtx_unlock(ppuVar1);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
  }
  appuStack_680[0] = &puStack_6a8;
  puStack_6a8 = &UNK_180a3c3e0;
  if (plStack_6a0 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  plStack_6a0 = (longlong *)0x0;
  uStack_690 = uStack_690 & 0xffffffff00000000;
  puStack_6a8 = &UNK_18098bcb0;
LAB_1801769b0:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_718);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801769e0(longlong param_1)
void FUN_1801769e0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined4 uVar17;
  float fVar18;
  undefined1 auStack_c8 [32];
  uint uStack_a8;
  longlong *plStack_a0;
  longlong *plStack_98;
  longlong *plStack_90;
  longlong *plStack_88;
  undefined4 uStack_80;
  longlong *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int iStack_60;
  int iStack_5c;
  ulonglong uStack_58;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  uStack_68 = param_1;
  FUN_180176060();
  plStack_98 = (longlong *)0x0;
  plStack_90 = (longlong *)0x0;
  plVar10 = (longlong *)0x0;
  plStack_88 = (longlong *)0x0;
  uStack_80 = 3;
  plStack_a0 = *(longlong **)(param_1 + 0xc0);
  plStack_78 = *(longlong **)(param_1 + 200);
  plVar9 = (longlong *)0x0;
  plVar5 = (longlong *)0x0;
  plVar8 = plVar9;
  plVar15 = plVar5;
  if (plStack_a0 != plStack_78) {
    do {
      uVar11 = 0;
      plVar1 = *(longlong **)(*plStack_a0 + 0x148);
      uStack_a8 = 0;
      iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
      plVar9 = plVar8;
      plVar5 = plVar15;
      if (iVar2 != 0) {
        do {
          lVar4 = (**(code **)(*plVar1 + 0x140))(plVar1,uVar11);
          plVar9 = plVar8;
          plVar5 = plVar15;
          if (lVar4 != 0) {
            if (plVar8 < plVar10) {
              plVar9 = plVar8 + 1;
              *plVar8 = lVar4;
              plStack_90 = plVar9;
            }
            else {
              lVar16 = (longlong)plVar8 - (longlong)plVar15 >> 3;
              if (lVar16 == 0) {
                lVar16 = 1;
LAB_180176af7:
                plVar5 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar16 * 8,3);
              }
              else {
                lVar16 = lVar16 * 2;
                if (lVar16 != 0) goto LAB_180176af7;
                plVar5 = (longlong *)0x0;
              }
              if (plVar15 != plVar8) {
                    // WARNING: Subroutine does not return
                memmove(plVar5,plVar15,(longlong)plVar8 - (longlong)plVar15);
              }
              *plVar5 = lVar4;
              plVar9 = plVar5 + 1;
              if (plVar15 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900(plVar15);
              }
              plVar10 = plVar5 + lVar16;
              plStack_98 = plVar5;
              plStack_90 = plVar9;
              plStack_88 = plVar10;
              uVar11 = uStack_a8;
            }
          }
          (**(code **)(*plVar1 + 0x128))(plVar1,uVar11,0);
          uVar11 = uVar11 + 1;
          uStack_a8 = uVar11;
          uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
          plVar8 = plVar9;
          plVar15 = plVar5;
        } while (uVar11 < uVar3);
      }
      plStack_a0 = plStack_a0 + 1;
      plVar8 = plVar9;
      plVar15 = plVar5;
      param_1 = uStack_68;
    } while (plStack_a0 != plStack_78);
  }
  uVar12 = 0;
  uVar13 = (ulonglong)((longlong)plVar9 + (7 - (longlong)plVar5)) >> 3;
  if (plVar9 < plVar5) {
    uVar13 = uVar12;
  }
  plVar10 = plVar5;
  if (uVar13 != 0) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x128))
                (*(longlong **)(param_1 + 0xe8),*plVar10);
      uVar12 = uVar12 + 1;
      plVar10 = plVar10 + 1;
    } while (uVar12 != uVar13);
  }
  lVar4 = param_1 + 0x1b0;
  puVar14 = *(undefined8 **)(param_1 + 0x1c0);
  if (puVar14 != (undefined8 *)0x0) {
    FUN_18004b790(lVar4,*puVar14);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar14);
  }
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(param_1 + 0x1b8) = lVar4;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  plVar10 = *(longlong **)(param_1 + 200);
  plVar9 = *(longlong **)(param_1 + 0xc0);
  do {
    if (plVar9 == plVar10) {
      if (plVar5 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar5);
      }
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_c8);
    }
    lVar4 = *plVar9;
    iVar2 = *(int *)(_DAT_180c86920 + 0x380);
    if (iVar2 == 3) {
      iVar7 = 0x138;
    }
    else if (iVar2 == 2) {
      iVar7 = 0x9c;
    }
    else {
      iVar7 = 0x4e;
      if ((iVar2 != 1) && (iVar7 = 0x4e, iVar2 == 0)) {
        iVar7 = 0x4e;
      }
    }
    iVar2 = *(int *)(_DAT_180c86920 + 0x3f0);
    if (iVar2 == 2) {
      uVar17 = 0;
LAB_180176cb5:
      (**(code **)(**(longlong **)(lVar4 + 0x148) + 0xd0))(*(longlong **)(lVar4 + 0x148),uVar17);
    }
    else {
      if (iVar2 == 1) {
        uVar17 = 0x3f800000;
        goto LAB_180176cb5;
      }
      if (iVar2 == 0) {
        uVar17 = 0x40000000;
        goto LAB_180176cb5;
      }
    }
    plVar5 = *(longlong **)(lVar4 + 0x148);
    fVar18 = (float)(iVar7 << 0x14);
    uStack_68 = CONCAT44((int)(fVar18 * *(float *)(lVar4 + 0x1b4)),
                         (int)(fVar18 * *(float *)(lVar4 + 0x1b0)));
    iStack_60 = (int)(fVar18 * *(float *)(lVar4 + 0x1b8));
    iStack_5c = (int)(fVar18 * *(float *)(lVar4 + 0x1bc));
    uVar11 = (**(code **)(*plVar5 + 0x20))(plVar5);
    uVar3 = 0;
    if (uVar11 != 0) {
      puVar14 = &uStack_68;
      do {
        uVar6 = FUN_1801760d0(param_1,plVar5,uVar3,*(undefined4 *)puVar14);
        iVar2 = (**(code **)(*plVar5 + 0x128))(plVar5,uVar3,uVar6);
        if (iVar2 != 0) {
          FUN_180626ee0(&UNK_180a09248);
        }
        uVar3 = uVar3 + 1;
        puVar14 = (undefined8 *)((longlong)puVar14 + 4);
      } while (uVar3 < uVar11);
    }
    plVar9 = plVar9 + 1;
    plVar5 = plStack_98;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00018017747d)
// WARNING: Removing unreachable block (ram,0x000180177a18)
// WARNING: Removing unreachable block (ram,0x000180177a22)
// WARNING: Removing unreachable block (ram,0x000180177a2e)
// WARNING: Removing unreachable block (ram,0x000180177a35)
// WARNING: Removing unreachable block (ram,0x000180177581)
// WARNING: Removing unreachable block (ram,0x000180177590)
// WARNING: Removing unreachable block (ram,0x00018017759c)
// WARNING: Removing unreachable block (ram,0x0001801775a3)
// WARNING: Removing unreachable block (ram,0x0001801775b3)
// WARNING: Removing unreachable block (ram,0x0001801775c0)
// WARNING: Removing unreachable block (ram,0x0001801775cc)
// WARNING: Removing unreachable block (ram,0x0001801775d3)
// WARNING: Removing unreachable block (ram,0x000180177263)
// WARNING: Removing unreachable block (ram,0x000180177296)
// WARNING: Removing unreachable block (ram,0x00018017726a)
// WARNING: Removing unreachable block (ram,0x000180177274)
// WARNING: Removing unreachable block (ram,0x000180177280)
// WARNING: Removing unreachable block (ram,0x000180177287)
// WARNING: Removing unreachable block (ram,0x000180177290)
// WARNING: Removing unreachable block (ram,0x000180177298)
// WARNING: Removing unreachable block (ram,0x00018017753a)
// WARNING: Removing unreachable block (ram,0x000180177540)
// WARNING: Removing unreachable block (ram,0x000180177550)
// WARNING: Removing unreachable block (ram,0x00018017755c)
// WARNING: Removing unreachable block (ram,0x000180177563)
// WARNING: Removing unreachable block (ram,0x0001801772c2)
// WARNING: Removing unreachable block (ram,0x0001801772d0)
// WARNING: Removing unreachable block (ram,0x0001801772dc)
// WARNING: Removing unreachable block (ram,0x0001801772e3)
// WARNING: Removing unreachable block (ram,0x00018017764c)
// WARNING: Removing unreachable block (ram,0x00018017749a)
// WARNING: Removing unreachable block (ram,0x0001801774a8)
// WARNING: Removing unreachable block (ram,0x0001801774aa)
// WARNING: Removing unreachable block (ram,0x000180176fc3)
// WARNING: Removing unreachable block (ram,0x000180177722)
// WARNING: Removing unreachable block (ram,0x00018017729d)
// WARNING: Removing unreachable block (ram,0x00018017766b)
// WARNING: Removing unreachable block (ram,0x000180177677)
// WARNING: Removing unreachable block (ram,0x000180177679)
// WARNING: Removing unreachable block (ram,0x00018017739f)
// WARNING: Removing unreachable block (ram,0x0001801773a6)
// WARNING: Removing unreachable block (ram,0x0001801773b0)
// WARNING: Removing unreachable block (ram,0x0001801773bc)
// WARNING: Removing unreachable block (ram,0x0001801773c3)
// WARNING: Removing unreachable block (ram,0x00018017731b)
// WARNING: Removing unreachable block (ram,0x000180177321)
// WARNING: Removing unreachable block (ram,0x000180177330)
// WARNING: Removing unreachable block (ram,0x00018017733c)
// WARNING: Removing unreachable block (ram,0x000180177343)
// WARNING: Removing unreachable block (ram,0x00018017734b)
// WARNING: Removing unreachable block (ram,0x000180177356)
// WARNING: Removing unreachable block (ram,0x000180177360)
// WARNING: Removing unreachable block (ram,0x00018017736c)
// WARNING: Removing unreachable block (ram,0x000180177373)
// WARNING: Removing unreachable block (ram,0x00018017737b)
// WARNING: Removing unreachable block (ram,0x000180177385)
// WARNING: Removing unreachable block (ram,0x0001801773cb)
// WARNING: Removing unreachable block (ram,0x000180177381)
// WARNING: Removing unreachable block (ram,0x0001801773cd)
// WARNING: Removing unreachable block (ram,0x0001801773d6)
// WARNING: Removing unreachable block (ram,0x0001801773da)
// WARNING: Removing unreachable block (ram,0x0001801773e4)
// WARNING: Removing unreachable block (ram,0x0001801773eb)
// WARNING: Removing unreachable block (ram,0x000180177400)
// WARNING: Removing unreachable block (ram,0x00018017740c)
// WARNING: Removing unreachable block (ram,0x000180177413)
// WARNING: Removing unreachable block (ram,0x00018017741e)
// WARNING: Removing unreachable block (ram,0x000180177417)
// WARNING: Removing unreachable block (ram,0x000180177420)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



