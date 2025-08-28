#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part078.c - 20 个函数

// 函数: void FUN_18010af70(undefined8 *param_1,longlong param_2,longlong param_3)
void FUN_18010af70(undefined8 *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_1d8 [32];
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  uint uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [4];
  uint uStack_194;
  undefined *puStack_190;
  undefined2 *puStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  char acStack_148 [256];
  ulonglong uStack_48;
  
  uStack_158 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_1d8;
  iVar11 = *(int *)(param_2 + 0x10);
  puStack_170 = param_1;
  if ((iVar11 == 0x11) && (iVar1 = strcmp(*(undefined8 *)(param_2 + 8),&UNK_180a06028), iVar1 == 0))
  {
    FUN_180627ae0(&puStack_1b8,param_3);
    if ((0 < (int)uStack_1a8) && (lVar3 = strstr(puStack_1b0,&UNK_180a028e0), lVar3 != 0)) {
      iVar11 = 5;
      uVar9 = (int)lVar3 - (int)puStack_1b0;
      uVar10 = (ulonglong)uVar9;
      if (uStack_1a8 < uVar9 + 5) {
        iVar11 = uStack_1a8 - uVar9;
      }
      uVar9 = uVar9 + iVar11;
      if (uVar9 < uStack_1a8) {
        uVar10 = (ulonglong)(int)uVar9;
        do {
          *(undefined1 *)((uVar10 - (longlong)iVar11) + (longlong)puStack_1b0) =
               *(undefined1 *)(uVar10 + (longlong)puStack_1b0);
          uVar9 = uVar9 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar9 < uStack_1a8);
      }
      uStack_1a8 = uStack_1a8 - iVar11;
      *(undefined1 *)((ulonglong)uStack_1a8 + (longlong)puStack_1b0) = 0;
      puStack_190 = &UNK_180a3c3e0;
      uStack_178 = 0;
      puStack_188 = (undefined2 *)0x0;
      uStack_180 = 0;
      puVar4 = (undefined2 *)FUN_18062b420(_DAT_180c8ed18,0x10,CONCAT71((int7)(uVar10 >> 8),0x13));
      *(undefined1 *)puVar4 = 0;
      puStack_188 = puVar4;
      uVar2 = FUN_18064e990(puVar4);
      uStack_178 = CONCAT44(uStack_178._4_4_,uVar2);
      *puVar4 = 0x20;
      uStack_180 = 1;
      FUN_1806288c0(&puStack_1b8,(int)lVar3 - (int)puStack_1b0,&puStack_190);
      puStack_190 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar4);
    }
    puVar5 = (undefined8 *)FUN_180627ae0(&puStack_190,&puStack_1b8);
    puStack_168 = puVar5;
    FUN_18005c8a0(puStack_170 + 0x124,puVar5);
    *puVar5 = &UNK_180a3c3e0;
    if (puVar5[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 3) = 0;
    *puVar5 = &UNK_18098bcb0;
    puStack_1b8 = &UNK_180a3c3e0;
    if (puStack_1b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_1b0 = (undefined1 *)0x0;
    uStack_1a0 = (ulonglong)uStack_1a0._4_4_ << 0x20;
    puStack_1b8 = &UNK_18098bcb0;
  }
  else if ((iVar11 == 0x12) &&
          (iVar1 = strcmp(*(undefined8 *)(param_2 + 8),&UNK_180a06248), iVar1 == 0)) {
    puStack_170 = param_1 + 0x270;
    FUN_180057110(puStack_170);
    puVar13 = &DAT_18098bc73;
    if (*(undefined **)(param_3 + 8) != (undefined *)0x0) {
      puVar13 = *(undefined **)(param_3 + 8);
    }
    iVar11 = FUN_18010cbc0(puVar13,&UNK_180a06288,acStack_148);
    uVar9 = 0;
    while (iVar11 != -1) {
      FUN_18010cbc0(puVar13,&UNK_180a06280,auStack_198);
      lVar3 = -1;
      do {
        lVar6 = lVar3 + 1;
        lVar14 = lVar3 + 1;
        lVar3 = lVar6;
      } while (acStack_148[lVar14] != '\0');
      uStack_194 = uVar9 + (int)lVar6 + 1;
      puStack_1b8 = &UNK_180a3c3e0;
      uStack_1a0 = 0;
      puStack_1b0 = (undefined1 *)0x0;
      uStack_1a8 = 0;
      lVar3 = -1;
      do {
        lVar14 = lVar3;
        lVar3 = lVar14 + 1;
      } while (acStack_148[lVar14 + 1] != '\0');
      if ((int)(lVar14 + 1) != 0) {
        iVar1 = (int)lVar14 + 2;
        iVar11 = iVar1;
        if (iVar1 < 0x10) {
          iVar11 = 0x10;
        }
        puStack_1b0 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar11,0x13);
        *puStack_1b0 = 0;
        uVar2 = FUN_18064e990(puStack_1b0);
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar2);
                    // WARNING: Subroutine does not return
        memcpy(puStack_1b0,acStack_148,iVar1);
      }
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      puStack_1b0 = (undefined1 *)0x0;
      puStack_1b8 = &UNK_180a3c3e0;
      if ((ulonglong)puStack_170[1] < (ulonglong)puStack_170[2]) {
        puStack_170[1] = puStack_170[1] + 0x20;
        FUN_180627ae0();
      }
      else {
        FUN_180059820(puStack_170,&puStack_1b8);
      }
      uVar10 = 0xffffffffffffffff;
      do {
        uVar10 = uVar10 + 1;
      } while (puVar13[uVar10] != '\0');
      puStack_1b8 = &UNK_180a3c3e0;
      if (uVar10 <= (ulonglong)(longlong)(int)uStack_194) {
        if (puStack_1b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_1b0 = (undefined1 *)0x0;
        uStack_1a0 = (ulonglong)uStack_1a0._4_4_ << 0x20;
        puStack_1b8 = &UNK_18098bcb0;
        break;
      }
      if (puStack_1b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_1b0 = (undefined1 *)0x0;
      uStack_1a0 = (ulonglong)uStack_1a0._4_4_ << 0x20;
      puStack_1b8 = &UNK_18098bcb0;
      iVar11 = FUN_18010cbc0(puVar13 + (int)uStack_194,&UNK_180a06288,acStack_148);
      uVar9 = uStack_194;
    }
  }
  else if ((iVar11 == 0xd) &&
          (iVar11 = strcmp(*(undefined8 *)(param_2 + 8),&UNK_180a062b0), iVar11 == 0)) {
    plVar15 = param_1 + 0x274;
    FUN_180057110(plVar15);
    puVar5 = (undefined8 *)&DAT_18098bc73;
    if (*(undefined8 **)(param_3 + 8) != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(param_3 + 8);
    }
    puStack_168 = puVar5;
    iVar11 = FUN_18010cbc0(puVar5,&UNK_180a06288,acStack_148);
    puVar8 = (undefined8 *)0x0;
    while (iVar11 != -1) {
      FUN_18010cbc0(puVar5,&UNK_180a06280,auStack_198);
      lVar3 = -1;
      do {
        lVar6 = lVar3 + 1;
        lVar14 = lVar3 + 1;
        lVar3 = lVar6;
      } while (acStack_148[lVar14] != '\0');
      uStack_194 = (int)puVar8 + (int)lVar6 + 1;
      puStack_1b8 = &UNK_180a3c3e0;
      uStack_160 = 0;
      puStack_1b0 = (undefined1 *)0x0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      lVar3 = -1;
      do {
        lVar14 = lVar3;
        lVar3 = lVar14 + 1;
      } while (acStack_148[lVar14 + 1] != '\0');
      if ((int)(lVar14 + 1) != 0) {
        iVar1 = (int)lVar14 + 2;
        iVar11 = iVar1;
        if (iVar1 < 0x10) {
          iVar11 = 0x10;
        }
        puVar7 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar11,0x13);
        *puVar7 = 0;
        puStack_1b0 = puVar7;
        uStack_160 = FUN_18064e990(puVar7);
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,(int)uStack_160);
                    // WARNING: Subroutine does not return
        memcpy(puVar7,acStack_148,iVar1);
      }
      uStack_1a8 = 0;
      puVar8 = (undefined8 *)param_1[0x275];
      if (puVar8 < (undefined8 *)param_1[0x276]) {
        param_1[0x275] = puVar8 + 4;
        *puVar8 = &UNK_18098bcb0;
        puVar8[1] = 0;
        *(undefined4 *)(puVar8 + 2) = 0;
        *puVar8 = &UNK_180a3c3e0;
        *(undefined4 *)(puVar8 + 2) = 0;
        puVar8[1] = 0;
        *(undefined4 *)((longlong)puVar8 + 0x1c) = 0;
        *(undefined4 *)(puVar8 + 3) = 0;
        uStack_1a8 = 0;
        uStack_1a0 = 0;
        puStack_170 = puVar8;
      }
      else {
        lVar3 = *plVar15;
        lVar14 = (longlong)puVar8 - lVar3 >> 5;
        if (lVar14 == 0) {
          lVar14 = 1;
LAB_18010b692:
          puVar5 = (undefined8 *)
                   FUN_18062b420(_DAT_180c8ed18,lVar14 << 5,*(undefined1 *)(param_1 + 0x277));
          puVar8 = (undefined8 *)param_1[0x275];
          lVar3 = *plVar15;
        }
        else {
          lVar14 = lVar14 * 2;
          puVar5 = (undefined8 *)0x0;
          if (lVar14 != 0) goto LAB_18010b692;
        }
        puStack_170 = puVar5;
        puStack_150 = (undefined8 *)FUN_180059780(lVar3,puVar8,puVar5);
        *puStack_150 = &UNK_18098bcb0;
        puStack_150[1] = 0;
        *(undefined4 *)(puStack_150 + 2) = 0;
        *puStack_150 = &UNK_180a3c3e0;
        *(undefined4 *)(puStack_150 + 2) = 0;
        puStack_150[1] = 0;
        *(undefined4 *)((longlong)puStack_150 + 0x1c) = 0;
        *(int *)(puStack_150 + 3) = (int)uStack_160;
        uStack_1a8 = 0;
        puStack_1b0 = (undefined1 *)0x0;
        uStack_1a0 = 0;
        puVar12 = puStack_150 + 4;
        puVar5 = (undefined8 *)param_1[0x275];
        puVar8 = (undefined8 *)*plVar15;
        if (puVar8 != puVar5) {
          do {
            (**(code **)*puVar8)(puVar8,0);
            puVar8 = puVar8 + 4;
          } while (puVar8 != puVar5);
          puVar8 = (undefined8 *)*plVar15;
        }
        if (puVar8 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar8);
        }
        *plVar15 = (longlong)puStack_170;
        param_1[0x275] = puVar12;
        param_1[0x276] = puStack_170 + lVar14 * 4;
        puVar5 = puStack_168;
      }
      puVar8 = (undefined8 *)(ulonglong)uStack_194;
      puStack_1b0 = (undefined1 *)0x0;
      uStack_1a0 = uStack_1a0 & 0xffffffff00000000;
      puStack_1b8 = &UNK_18098bcb0;
      uVar10 = 0xffffffffffffffff;
      do {
        uVar10 = uVar10 + 1;
      } while (*(char *)((longlong)puVar5 + uVar10) != '\0');
      if (uVar10 <= (ulonglong)(longlong)(int)uStack_194) break;
      iVar11 = FUN_18010cbc0((undefined *)((longlong)(int)uStack_194 + (longlong)puVar5),
                             &UNK_180a06288,acStack_148);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_1d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18010b7d0(longlong param_1,longlong param_2)
void FUN_18010b7d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  undefined *puStack_d8;
  longlong lStack_d0;
  int iStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  uint uStack_a8;
  undefined4 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  uint uStack_88;
  undefined4 uStack_80;
  undefined *puStack_78;
  longlong lStack_70;
  undefined4 uStack_60;
  undefined *puStack_58;
  longlong lStack_50;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  if (param_2 != 0) {
    uStack_38 = 0xfffffffffffffffe;
    uVar5 = 0;
    puStack_d8 = &UNK_180a3c3e0;
    uStack_c0 = 0;
    lStack_d0 = 0;
    iStack_c8 = 0;
    if (*(longlong *)(param_1 + 5000) - *(longlong *)(param_1 + 0x1380) >> 5 != 0) {
      FUN_180628040(&puStack_d8,&UNK_180a06298);
      lVar1 = *(longlong *)(param_1 + 5000);
      lVar2 = *(longlong *)(param_1 + 0x1380);
      uVar4 = uVar5;
      uVar6 = uVar5;
      if (lVar1 - lVar2 >> 5 != 1) {
        do {
          FUN_180627ae0(&puStack_b8,lVar2 + uVar4 * 0x20);
          while ((0 < (int)uStack_a8 && (lVar1 = strstr(puStack_b0,&DAT_1809fc8e4), lVar1 != 0))) {
            iVar11 = 1;
            iVar7 = (int)lVar1 - (int)puStack_b0;
            if (uStack_a8 < iVar7 + 1U) {
              iVar11 = uStack_a8 - iVar7;
            }
            uVar10 = iVar7 + iVar11;
            if (uVar10 < uStack_a8) {
              lVar2 = (longlong)(int)uVar10;
              do {
                puStack_b0[lVar2 - iVar11] = puStack_b0[lVar2];
                uVar10 = uVar10 + 1;
                lVar2 = lVar2 + 1;
              } while (uVar10 < uStack_a8);
            }
            uStack_a8 = uStack_a8 - iVar11;
            puStack_b0[uStack_a8] = 0;
            uVar3 = FUN_180627910(&puStack_78,&UNK_180a028e0);
            FUN_1806288c0(&puStack_b8,(int)lVar1 - (int)puStack_b0,uVar3);
            puStack_78 = &UNK_180a3c3e0;
            if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            lStack_70 = 0;
            uStack_60 = 0;
            puStack_78 = &UNK_18098bcb0;
          }
          puVar8 = &DAT_18098bc73;
          if (puStack_b0 != (undefined *)0x0) {
            puVar8 = puStack_b0;
          }
          FUN_180628040(&puStack_d8,&UNK_180a062d4,puVar8);
          puStack_b8 = &UNK_180a3c3e0;
          if (puStack_b0 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puStack_b0 = (undefined *)0x0;
          uStack_a0 = 0;
          puStack_b8 = &UNK_18098bcb0;
          uVar10 = (int)uVar6 + 1;
          lVar1 = *(longlong *)(param_1 + 5000);
          lVar2 = *(longlong *)(param_1 + 0x1380);
          uVar4 = (longlong)(int)uVar10;
          uVar6 = (ulonglong)uVar10;
        } while ((ulonglong)(longlong)(int)uVar10 < (lVar1 - lVar2 >> 5) - 1U);
      }
      FUN_180627ae0(&puStack_98,lVar2 + ((lVar1 - lVar2 & 0xffffffffffffffe0U) - 0x20));
      while ((0 < (int)uStack_88 && (lVar1 = strstr(puStack_90,&DAT_1809fc8e4), lVar1 != 0))) {
        iVar11 = 1;
        iVar7 = (int)lVar1 - (int)puStack_90;
        if (uStack_88 < iVar7 + 1U) {
          iVar11 = uStack_88 - iVar7;
        }
        uVar10 = iVar7 + iVar11;
        if (uVar10 < uStack_88) {
          lVar2 = (longlong)(int)uVar10;
          do {
            puStack_90[lVar2 - iVar11] = puStack_90[lVar2];
            uVar10 = uVar10 + 1;
            lVar2 = lVar2 + 1;
          } while (uVar10 < uStack_88);
        }
        uStack_88 = uStack_88 - iVar11;
        puStack_90[uStack_88] = 0;
        uVar3 = FUN_180627910(&puStack_58,&UNK_180a028e0);
        FUN_1806288c0(&puStack_98,(int)lVar1 - (int)puStack_90,uVar3);
        puStack_58 = &UNK_180a3c3e0;
        if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_50 = 0;
        uStack_40 = 0;
        puStack_58 = &UNK_18098bcb0;
      }
      puVar8 = &DAT_18098bc73;
      if (puStack_90 != (undefined *)0x0) {
        puVar8 = puStack_90;
      }
      FUN_180628040(&puStack_d8,&UNK_1809fe62c,puVar8);
      puStack_98 = &UNK_180a3c3e0;
      if (puStack_90 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_90 = (undefined *)0x0;
      uStack_80 = 0;
      puStack_98 = &UNK_18098bcb0;
    }
    if (*(longlong *)(param_1 + 0x13a8) - *(longlong *)(param_1 + 0x13a0) >> 5 != 0) {
      FUN_180628040(&puStack_d8,&UNK_180a062c0);
      lVar1 = *(longlong *)(param_1 + 0x13a8);
      lVar2 = *(longlong *)(param_1 + 0x13a0);
      uVar4 = uVar5;
      if (lVar1 - lVar2 >> 5 != 1) {
        do {
          puVar8 = *(undefined **)(uVar5 + 8 + lVar2);
          puVar9 = &DAT_18098bc73;
          if (puVar8 != (undefined *)0x0) {
            puVar9 = puVar8;
          }
          FUN_180628040(&puStack_d8,&UNK_180a062d4,puVar9);
          uVar10 = (int)uVar4 + 1;
          uVar5 = uVar5 + 0x20;
          lVar1 = *(longlong *)(param_1 + 0x13a8);
          lVar2 = *(longlong *)(param_1 + 0x13a0);
          uVar4 = (ulonglong)uVar10;
        } while ((ulonglong)(longlong)(int)uVar10 < (lVar1 - lVar2 >> 5) - 1U);
      }
      puVar8 = *(undefined **)(((lVar1 - lVar2 & 0xffffffffffffffe0U) - 0x18) + lVar2);
      puVar9 = &DAT_18098bc73;
      if (puVar8 != (undefined *)0x0) {
        puVar9 = puVar8;
      }
      FUN_180628040(&puStack_d8,&UNK_1809fe62c,puVar9);
    }
    fwrite(lStack_d0,1,(longlong)iStack_c8,*(undefined8 *)(param_2 + 8));
    if (*(longlong *)(param_2 + 8) != 0) {
      fclose();
      *(undefined8 *)(param_2 + 8) = 0;
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
      UNLOCK();
    }
    puStack_d8 = &UNK_180a3c3e0;
    if (lStack_d0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}





// 函数: void FUN_18010bca0(longlong param_1,undefined4 *param_2,longlong param_3)
void FUN_18010bca0(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  code *pcVar2;
  
  lVar1 = param_1 + 0x50;
  *(undefined4 *)(param_1 + 0x48) = *param_2;
  if (lVar1 != param_3) {
    if (*(code **)(param_1 + 0x60) != (code *)0x0) {
      (**(code **)(param_1 + 0x60))(lVar1,0,0);
    }
    pcVar2 = *(code **)(param_3 + 0x10);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(lVar1,param_3,1);
      pcVar2 = *(code **)(param_3 + 0x10);
    }
    *(code **)(param_1 + 0x60) = pcVar2;
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_3 + 0x18);
  }
  return;
}





// 函数: void FUN_18010bcbf(void)
void FUN_18010bcbf(void)

{
  code *in_RAX;
  longlong unaff_RBX;
  code *pcVar1;
  longlong unaff_RDI;
  
  if (in_RAX != (code *)0x0) {
    (*in_RAX)();
  }
  pcVar1 = *(code **)(unaff_RDI + 0x10);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    pcVar1 = *(code **)(unaff_RDI + 0x10);
  }
  *(code **)(unaff_RBX + 0x10) = pcVar1;
  *(undefined8 *)(unaff_RBX + 0x18) = *(undefined8 *)(unaff_RDI + 0x18);
  return;
}





// 函数: void FUN_18010bcff(void)
void FUN_18010bcff(void)

{
  return;
}



longlong FUN_18010bd10(longlong param_1,longlong param_2)

{
  code *pcVar1;
  
  if (param_1 != param_2) {
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
      (**(code **)(param_1 + 0x10))(param_1,0,0);
    }
    pcVar1 = *(code **)(param_2 + 0x10);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1,param_2,1);
      pcVar1 = *(code **)(param_2 + 0x10);
    }
    *(code **)(param_1 + 0x10) = pcVar1;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  }
  return param_1;
}





// 函数: void FUN_18010bd29(undefined8 param_1)
void FUN_18010bd29(undefined8 param_1)

{
  code *in_RAX;
  longlong unaff_RBX;
  code *pcVar1;
  longlong unaff_RDI;
  
  if (in_RAX != (code *)0x0) {
    (*in_RAX)(param_1,0,0);
  }
  pcVar1 = *(code **)(unaff_RDI + 0x10);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    pcVar1 = *(code **)(unaff_RDI + 0x10);
  }
  *(code **)(unaff_RBX + 0x10) = pcVar1;
  *(undefined8 *)(unaff_RBX + 0x18) = *(undefined8 *)(unaff_RDI + 0x18);
  return;
}





// 函数: void FUN_18010bd66(void)
void FUN_18010bd66(void)

{
  return;
}



longlong FUN_18010bd80(longlong param_1)

{
  *(undefined **)(param_1 + 0x10) = &UNK_18010c780;
  *(undefined **)(param_1 + 0x18) = &UNK_18010c750;
  return param_1;
}



longlong FUN_18010bdb0(longlong param_1)

{
  *(undefined **)(param_1 + 0x10) = &UNK_18010c760;
  *(undefined **)(param_1 + 0x18) = &UNK_18010c750;
  return param_1;
}



longlong FUN_18010bde0(longlong param_1)

{
  *(undefined **)(param_1 + 0x10) = &UNK_18010c730;
  *(undefined **)(param_1 + 0x18) = &UNK_18010c300;
  return param_1;
}



longlong FUN_18010be10(longlong param_1)

{
  *(undefined **)(param_1 + 0x10) = &UNK_18010c710;
  *(undefined **)(param_1 + 0x18) = &UNK_18010c700;
  return param_1;
}



longlong FUN_18010be40(longlong param_1)

{
  *(undefined **)(param_1 + 0x10) = &UNK_18010c6e0;
  *(undefined **)(param_1 + 0x18) = &UNK_18010c6d0;
  return param_1;
}



longlong FUN_18010be70(longlong param_1)

{
  *(undefined **)(param_1 + 0x10) = &UNK_18010c6b0;
  *(undefined **)(param_1 + 0x18) = &UNK_18010c300;
  return param_1;
}



longlong FUN_18010bea0(longlong param_1)

{
  *(undefined **)(param_1 + 0x10) = &UNK_18010c690;
  *(undefined **)(param_1 + 0x18) = &UNK_18010c300;
  return param_1;
}



longlong FUN_18010bed0(longlong param_1)

{
  *(undefined **)(param_1 + 0x10) = &UNK_18010c670;
  *(undefined **)(param_1 + 0x18) = &UNK_18010c300;
  return param_1;
}



longlong FUN_18010bf00(longlong param_1)

{
  *(undefined **)(param_1 + 0x10) = &UNK_18010c650;
  *(undefined **)(param_1 + 0x18) = &UNK_18010c300;
  return param_1;
}



longlong FUN_18010bf30(longlong param_1)

{
  *(undefined **)(param_1 + 0x10) = &UNK_18010c630;
  *(undefined **)(param_1 + 0x18) = &UNK_18010c300;
  return param_1;
}





// 函数: void FUN_18010cbc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18010cbc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar1 = (undefined8 *)func_0x00018010cbb0();
  __stdio_common_vsscanf(*puVar1,param_1,0xffffffffffffffff,param_2,0,&uStackX_18);
  return;
}





// 函数: void FUN_18010cc70(longlong param_1,undefined4 param_2)
void FUN_18010cc70(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 auStackX_10 [6];
  
  if ((*(longlong *)(param_1 + 0x1bf0) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x1bf8))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar2 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0x1ba0) != (undefined *)0x0) {
        puVar2 = *(undefined **)(param_1 + 0x1ba0);
      }
      FUN_180626f80(&UNK_18098bc00,puVar2);
    }
    *(undefined4 *)(param_1 + 0x1b90) = *(undefined4 *)(param_1 + 0x1bd8);
    return;
  }
  *(undefined4 *)(param_1 + 0x1b90) = param_2;
  return;
}





// 函数: void FUN_18010ccf0(longlong param_1,undefined4 param_2)
void FUN_18010ccf0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 auStackX_10 [6];
  
  if ((*(longlong *)(param_1 + 0x1fe0) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x1fe8))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar2 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0x1f90) != (undefined *)0x0) {
        puVar2 = *(undefined **)(param_1 + 0x1f90);
      }
      FUN_180626f80(&UNK_18098bc00,puVar2);
    }
    *(undefined4 *)(param_1 + 0x1f80) = *(undefined4 *)(param_1 + 0x1fc8);
    return;
  }
  *(undefined4 *)(param_1 + 0x1f80) = param_2;
  return;
}





// 函数: void FUN_18010cd70(longlong param_1,undefined4 param_2)
void FUN_18010cd70(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 auStackX_10 [6];
  
  if ((*(longlong *)(param_1 + 0x20c0) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x20c8))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar2 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0x2070) != (undefined *)0x0) {
        puVar2 = *(undefined **)(param_1 + 0x2070);
      }
      FUN_180626f80(&UNK_18098bc00,puVar2);
    }
    *(undefined4 *)(param_1 + 0x2060) = *(undefined4 *)(param_1 + 0x20a8);
    return;
  }
  *(undefined4 *)(param_1 + 0x2060) = param_2;
  return;
}





// 函数: void FUN_18010cdf0(longlong param_1,undefined4 param_2)
void FUN_18010cdf0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 auStackX_10 [6];
  
  if ((*(longlong *)(param_1 + 0x2210) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x2218))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar2 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0x21c0) != (undefined *)0x0) {
        puVar2 = *(undefined **)(param_1 + 0x21c0);
      }
      FUN_180626f80(&UNK_18098bc00,puVar2);
    }
    *(undefined4 *)(param_1 + 0x21b0) = *(undefined4 *)(param_1 + 0x21f8);
    return;
  }
  *(undefined4 *)(param_1 + 0x21b0) = param_2;
  return;
}





// 函数: void FUN_18010ce70(longlong param_1,undefined4 param_2)
void FUN_18010ce70(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 auStackX_10 [6];
  
  if ((*(longlong *)(param_1 + 0x2280) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x2288))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar2 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0x2230) != (undefined *)0x0) {
        puVar2 = *(undefined **)(param_1 + 0x2230);
      }
      FUN_180626f80(&UNK_18098bc00,puVar2);
    }
    *(undefined4 *)(param_1 + 0x2220) = *(undefined4 *)(param_1 + 0x2268);
    return;
  }
  *(undefined4 *)(param_1 + 0x2220) = param_2;
  return;
}





// 函数: void FUN_18010cef0(longlong param_1,undefined4 param_2)
void FUN_18010cef0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 auStackX_10 [6];
  
  if ((*(longlong *)(param_1 + 0x21a0) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x21a8))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar2 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0x2150) != (undefined *)0x0) {
        puVar2 = *(undefined **)(param_1 + 0x2150);
      }
      FUN_180626f80(&UNK_18098bc00,puVar2);
    }
    *(undefined4 *)(param_1 + 0x2140) = *(undefined4 *)(param_1 + 0x2188);
    return;
  }
  *(undefined4 *)(param_1 + 0x2140) = param_2;
  return;
}





// 函数: void FUN_18010cf70(longlong param_1,undefined4 param_2)
void FUN_18010cf70(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 auStackX_10 [6];
  
  if ((*(longlong *)(param_1 + 0x2130) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x2138))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar2 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0x20e0) != (undefined *)0x0) {
        puVar2 = *(undefined **)(param_1 + 0x20e0);
      }
      FUN_180626f80(&UNK_18098bc00,puVar2);
    }
    *(undefined4 *)(param_1 + 0x20d0) = *(undefined4 *)(param_1 + 0x2118);
    return;
  }
  *(undefined4 *)(param_1 + 0x20d0) = param_2;
  return;
}





// 函数: void FUN_18010cff0(longlong param_1,undefined4 param_2)
void FUN_18010cff0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 auStackX_10 [6];
  
  if ((*(longlong *)(param_1 + 0x1330) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x1338))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar2 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0x12e0) != (undefined *)0x0) {
        puVar2 = *(undefined **)(param_1 + 0x12e0);
      }
      FUN_180626f80(&UNK_18098bc00,puVar2);
    }
    *(undefined4 *)(param_1 + 0x12d0) = *(undefined4 *)(param_1 + 0x1318);
    return;
  }
  *(undefined4 *)(param_1 + 0x12d0) = param_2;
  return;
}





// 函数: void FUN_18010d070(longlong param_1,undefined4 param_2)
void FUN_18010d070(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 auStackX_10 [6];
  
  if ((*(longlong *)(param_1 + 0x1100) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x1108))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar2 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0x10b0) != (undefined *)0x0) {
        puVar2 = *(undefined **)(param_1 + 0x10b0);
      }
      FUN_180626f80(&UNK_18098bc00,puVar2);
    }
    *(undefined4 *)(param_1 + 0x10a0) = *(undefined4 *)(param_1 + 0x10e8);
    return;
  }
  *(undefined4 *)(param_1 + 0x10a0) = param_2;
  return;
}





// 函数: void FUN_18010d0f0(longlong param_1,undefined4 param_2)
void FUN_18010d0f0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 auStackX_10 [6];
  
  if ((*(longlong *)(param_1 + 0x1090) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x1098))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar2 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0x1040) != (undefined *)0x0) {
        puVar2 = *(undefined **)(param_1 + 0x1040);
      }
      FUN_180626f80(&UNK_18098bc00,puVar2);
    }
    *(undefined4 *)(param_1 + 0x1030) = *(undefined4 *)(param_1 + 0x1078);
    return;
  }
  *(undefined4 *)(param_1 + 0x1030) = param_2;
  return;
}





// 函数: void FUN_18010d170(longlong param_1,undefined4 param_2)
void FUN_18010d170(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 auStackX_10 [6];
  
  if ((*(longlong *)(param_1 + 0x1020) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x1028))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar2 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0xfd0) != (undefined *)0x0) {
        puVar2 = *(undefined **)(param_1 + 0xfd0);
      }
      FUN_180626f80(&UNK_18098bc00,puVar2);
    }
    *(undefined4 *)(param_1 + 0xfc0) = *(undefined4 *)(param_1 + 0x1008);
    return;
  }
  *(undefined4 *)(param_1 + 0xfc0) = param_2;
  return;
}





// 函数: void FUN_18010d1f0(longlong param_1,undefined4 param_2)
void FUN_18010d1f0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 auStackX_10 [6];
  
  if ((*(longlong *)(param_1 + 0xfb0) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0xfb8))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar2 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0xf60) != (undefined *)0x0) {
        puVar2 = *(undefined **)(param_1 + 0xf60);
      }
      FUN_180626f80(&UNK_18098bc00,puVar2);
    }
    *(undefined4 *)(param_1 + 0xf50) = *(undefined4 *)(param_1 + 0xf98);
    return;
  }
  *(undefined4 *)(param_1 + 0xf50) = param_2;
  return;
}





