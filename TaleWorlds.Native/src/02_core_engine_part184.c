#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part184.c - 4 个函数

// 函数: void FUN_18016a890(longlong *param_1)
void FUN_18016a890(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    *(undefined8 *)(lVar2 + 8) = &UNK_180a3c3e0;
    if (*(longlong *)(lVar2 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined4 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 8) = &UNK_18098bcb0;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18016a8b0(undefined8 param_1,longlong param_2)
void FUN_18016a8b0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 *puStack_c8;
  undefined *puStack_a8;
  undefined2 *puStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_68;
  longlong lStack_60;
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*(int *)(param_2 + 0x10) < 1) {
    return;
  }
  puStack_a8 = &UNK_180a3c3e0;
  uStack_90 = 0;
  puStack_a0 = (undefined2 *)0x0;
  uStack_98 = 0;
  puVar6 = (undefined2 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar6 = 0;
  puStack_a0 = puVar6;
  uVar2 = FUN_18064e990(puVar6);
  uStack_90 = CONCAT44(uStack_90._4_4_,uVar2);
  *puVar6 = 0x2023;
  *(undefined1 *)(puVar6 + 1) = 0;
  uStack_98 = 2;
  lVar7 = FUN_180627ce0(&puStack_a8,&puStack_68,param_2);
  uVar4 = 0;
  puStack_c8 = (undefined1 *)0x0;
  uVar1 = *(uint *)(lVar7 + 0x10);
  if (*(longlong *)(lVar7 + 8) == 0) {
LAB_18016a9e0:
    if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_c8,*(undefined8 *)(lVar7 + 8),(ulonglong)uVar1);
    }
  }
  else if (uVar1 != 0) {
    iVar3 = uVar1 + 1;
    if (iVar3 < 0x10) {
      iVar3 = 0x10;
    }
    puStack_c8 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar3,0x13);
    *puStack_c8 = 0;
    uVar4 = FUN_18064e990(puStack_c8);
    goto LAB_18016a9e0;
  }
  if (puStack_c8 != (undefined1 *)0x0) {
    puStack_c8[uVar1] = 0;
  }
  if (uVar1 != 0xffffffff) {
    uVar5 = uVar1 + 2;
    if (puStack_c8 == (undefined1 *)0x0) {
      if ((int)uVar5 < 0x10) {
        uVar5 = 0x10;
      }
      puStack_c8 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar5,0x13);
      *puStack_c8 = 0;
    }
    else {
      if (uVar5 <= uVar4) goto LAB_18016aa7a;
      puStack_c8 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_c8,uVar5,0x10,0x13);
    }
    FUN_18064e990(puStack_c8);
  }
LAB_18016aa7a:
  *(undefined2 *)(puStack_c8 + uVar1) = 10;
  puStack_68 = &UNK_180a3c3e0;
  if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_60 = 0;
  uStack_50 = 0;
  puStack_68 = &UNK_18098bcb0;
  puStack_a8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18016ae30(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_18016ae30(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 auStack_68 [2];
  undefined *puStack_60;
  longlong lStack_58;
  uint uStack_50;
  undefined8 uStack_48;
  
  lVar3 = _DAT_180c868c8;
  auStack_68[0] = 0;
  puStack_60 = &UNK_180a3c3e0;
  uStack_48 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  uVar1 = *(uint *)(param_2 + 0x10);
  uVar4 = (ulonglong)uVar1;
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1806277c0(&puStack_60,uVar4,param_3,param_4,1,0xfffffffffffffffe);
  }
  if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lStack_58,*(undefined8 *)(param_2 + 8),uVar4);
  }
  if (lStack_58 != 0) {
    *(undefined1 *)(uVar4 + lStack_58) = 0;
  }
  uStack_50 = uVar1;
  uStack_48._4_4_ = *(undefined4 *)(param_2 + 0x1c);
  FUN_1806277c0(&puStack_60,1);
  *(undefined2 *)((ulonglong)uStack_50 + lStack_58) = 10;
  puVar2 = *(undefined4 **)(lVar3 + 8);
  if (puVar2 < *(undefined4 **)(lVar3 + 0x10)) {
    *(undefined4 **)(lVar3 + 8) = puVar2 + 10;
    *puVar2 = auStack_68[0];
    *(undefined **)(puVar2 + 2) = &UNK_18098bcb0;
    *(undefined8 *)(puVar2 + 4) = 0;
    puVar2[6] = 0;
    *(undefined **)(puVar2 + 2) = &UNK_180a3c3e0;
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
    puVar2[6] = 0;
    puVar2[6] = 1;
    *(longlong *)(puVar2 + 4) = lStack_58;
    puVar2[9] = uStack_48._4_4_;
    puVar2[8] = (undefined4)uStack_48;
    uStack_50 = 0;
    lStack_58 = 0;
    uStack_48._0_4_ = 0;
    uStack_48._4_4_ = 0;
  }
  else {
    uStack_50 = 1;
    FUN_18016cff0(lVar3,auStack_68);
  }
  puStack_60 = &UNK_180a3c3e0;
  if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18016afc0(longlong param_1)
void FUN_18016afc0(longlong param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 **ppuVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined *puVar18;
  uint *puVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong *plVar24;
  uint *puVar25;
  undefined1 *puVar26;
  undefined8 *puVar27;
  uint uVar28;
  undefined4 uVar29;
  undefined8 *puStackX_8;
  longlong *plStackX_10;
  ulonglong uStackX_18;
  undefined8 *puStackX_20;
  undefined *puStack_108;
  char *pcStack_100;
  uint uStack_f8;
  undefined4 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined4 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined *puStack_a0;
  longlong lStack_98;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  uStack_80 = 0xfffffffffffffffe;
  plVar24 = (longlong *)(param_1 + 0x20);
  plStackX_10 = plVar24;
  FUN_180057110(plVar24);
  if (*(char *)(param_1 + 0x74) == '\0') {
    uVar11 = 0;
    lVar8 = *(longlong *)(param_1 + 0x40);
    uVar21 = uVar11;
    if (*(longlong *)(param_1 + 0x48) - lVar8 >> 5 != 0) {
      do {
        if (*(ulonglong *)(param_1 + 0x28) < *(ulonglong *)(param_1 + 0x30)) {
          *(ulonglong *)(param_1 + 0x28) = *(ulonglong *)(param_1 + 0x28) + 0x20;
          FUN_180627ae0();
        }
        else {
          FUN_180059820(plVar24,uVar11 * 0x20 + lVar8);
        }
        uVar28 = (int)uVar21 + 1;
        lVar8 = *(longlong *)(param_1 + 0x40);
        uVar11 = (ulonglong)(int)uVar28;
        uVar21 = (ulonglong)uVar28;
      } while (uVar11 < (ulonglong)(*(longlong *)(param_1 + 0x48) - lVar8 >> 5));
    }
  }
  else {
    FUN_180627910(&puStack_a0);
    puStack_e8 = (undefined8 *)0x0;
    puStack_e0 = (undefined8 *)0x0;
    puVar7 = (undefined1 *)0x0;
    uVar28 = 0;
    puStack_d8 = (undefined8 *)0x0;
    uStack_d0 = 3;
    puStack_c0 = (undefined8 *)0x0;
    puStack_b8 = (undefined8 *)0x0;
    uStack_b0 = 0;
    uStack_a8 = 3;
    puStackX_8 = (undefined8 *)CONCAT62(puStackX_8._2_6_,0x3b);
    if (lStack_98 != 0) {
      FUN_180057980(&puStack_a0,&puStack_c0,&puStackX_8);
    }
    puVar13 = puStack_b8;
    FUN_180627ae0(&puStack_108,puStack_b8 + -4);
    if (uStack_f8 != 0) {
      pcVar2 = pcStack_100;
      puVar5 = puVar7;
      puVar20 = puVar7;
      uVar23 = uVar28;
      if (uStack_f8 != 1) {
        do {
          uVar23 = (uint)puVar20;
          if (*pcVar2 != '\n') break;
          uVar23 = uVar23 + 1;
          uVar10 = (int)puVar5 + 1;
          pcVar2 = pcVar2 + 1;
          puVar5 = (undefined1 *)(ulonglong)uVar10;
          puVar20 = (undefined1 *)(ulonglong)uVar23;
        } while (uVar10 < uStack_f8 - 1);
      }
      if (uStack_f8 != 1) {
        puVar5 = puVar7;
        puVar20 = puVar7;
        do {
          puVar5[(longlong)pcStack_100] = (puVar5 + (int)uVar23)[(longlong)pcStack_100];
          uVar10 = (int)puVar20 + 1;
          puVar20 = (undefined1 *)(ulonglong)uVar10;
          puVar5 = puVar5 + 1;
        } while (uVar10 < uStack_f8 - 1);
      }
      uStack_f8 = uStack_f8 - uVar23;
      pcStack_100[uStack_f8] = '\0';
      if (uStack_f8 != 0) {
        pcVar2 = pcStack_100;
        puVar5 = puVar7;
        puVar20 = puVar7;
        uVar23 = uVar28;
        if (uStack_f8 != 1) {
          do {
            uVar23 = (uint)puVar20;
            if (*pcVar2 != ' ') break;
            uVar23 = uVar23 + 1;
            uVar10 = (int)puVar5 + 1;
            pcVar2 = pcVar2 + 1;
            puVar5 = (undefined1 *)(ulonglong)uVar10;
            puVar20 = (undefined1 *)(ulonglong)uVar23;
          } while (uVar10 < uStack_f8 - 1);
        }
        if (uStack_f8 != 1) {
          puVar5 = puVar7;
          puVar20 = puVar7;
          do {
            puVar5[(longlong)pcStack_100] = (puVar5 + (int)uVar23)[(longlong)pcStack_100];
            uVar10 = (int)puVar20 + 1;
            puVar20 = (undefined1 *)(ulonglong)uVar10;
            puVar5 = puVar5 + 1;
          } while (uVar10 < uStack_f8 - 1);
        }
        uStack_f8 = uStack_f8 - uVar23;
        pcStack_100[uStack_f8] = '\0';
        if (uStack_f8 != 0) {
          lVar8 = (longlong)(int)(uStack_f8 - 1);
          puVar5 = puVar7;
          uVar23 = uVar28;
          if (0 < (int)(uStack_f8 - 1)) {
            do {
              uVar23 = (uint)puVar5;
              if (pcStack_100[lVar8] != ' ') break;
              uVar23 = uVar23 + 1;
              puVar5 = (undefined1 *)(ulonglong)uVar23;
              lVar8 = lVar8 + -1;
            } while (0 < lVar8);
          }
          uStack_f8 = uStack_f8 - uVar23;
          pcStack_100[uStack_f8] = '\0';
        }
      }
    }
    uVar29 = FUN_180629b30(&puStack_108);
    ppuVar3 = (undefined8 **)FUN_180169f60(uVar29,&puStack_70,&puStack_108);
    puStackX_20 = puStack_e8;
    puVar15 = puStack_e8;
    puVar27 = puStack_e0;
    puStack_c8 = puStack_e0;
    puVar12 = puStack_70;
    if (&puStack_e8 != ppuVar3) {
      FUN_180057f30(&puStack_e8);
      puStackX_20 = *ppuVar3;
      *ppuVar3 = puStack_e8;
      puStack_c8 = ppuVar3[1];
      ppuVar3[1] = puStack_e0;
      puVar12 = ppuVar3[2];
      ppuVar3[2] = puStack_d8;
      uVar29 = *(undefined4 *)(ppuVar3 + 3);
      *(undefined4 *)(ppuVar3 + 3) = uStack_d0;
      puVar15 = puStackX_20;
      puVar27 = puStack_c8;
      puStack_d8 = puVar12;
      uStack_d0 = uVar29;
      puVar12 = puStack_70;
      puStack_e0 = puStack_c8;
      puStack_e8 = puStackX_20;
    }
    for (; puVar1 = puStack_e0, puVar16 = puStack_e8, puVar12 != uStack_68; puVar12 = puVar12 + 4) {
      puStack_e8 = puVar15;
      puStack_e0 = puVar27;
      (**(code **)*puVar12)(puVar12,0);
      puVar15 = puStack_e8;
      puVar27 = puStack_e0;
      puStack_e0 = puVar1;
      puStack_e8 = puVar16;
    }
    if (puStack_70 != (undefined8 *)0x0) {
      puStack_e8 = puVar15;
      puStack_e0 = puVar27;
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStackX_8 = (undefined8 *)((ulonglong)puStackX_8 & 0xffffffff00000000);
    uStackX_18 = (longlong)puStack_e0 - (longlong)puStack_e8 >> 5;
    puVar12 = puStack_e8;
    puStack_e0 = puVar27;
    if (uStackX_18 != 0) {
      lVar8 = (longlong)puVar13 - (longlong)puStack_c0 >> 5;
      plVar24 = puStack_e8 + 1;
      puStack_e8 = puVar15;
      do {
        puVar5 = puVar7;
        puVar20 = puVar7;
        uVar23 = uVar28;
        if (lVar8 != 1) {
          puVar25 = (uint *)(puStack_c0 + 2);
          puVar6 = puVar7;
          puVar9 = puVar7;
          puVar26 = puVar7;
          do {
            puVar13 = puStack_c0 + (longlong)puVar6 * 4;
            FUN_180629c00(puVar13,10);
            FUN_180629c00(puVar13,0x20);
            uVar23 = *puVar25;
            if (uVar23 != 0) {
              uVar10 = uVar28;
              if (0 < (int)(uVar23 - 1)) {
                lVar4 = (longlong)(int)(uVar23 - 1);
                puVar6 = puVar7;
                do {
                  uVar10 = (uint)puVar6;
                  if (*(char *)(*(longlong *)(puVar25 + -2) + lVar4) != ' ') break;
                  uVar10 = uVar10 + 1;
                  puVar6 = (undefined1 *)(ulonglong)uVar10;
                  lVar4 = lVar4 + -1;
                } while (0 < lVar4);
              }
              *puVar25 = uVar23 - uVar10;
              *(undefined1 *)((ulonglong)(uVar23 - uVar10) + *(longlong *)(puVar25 + -2)) = 0;
            }
            FUN_180629b30(puVar13);
            iVar17 = (int)puVar20;
            if (0 < (int)*puVar25) {
              iVar17 = *puVar25 + iVar17;
              if (iVar17 != 0) {
                uVar28 = iVar17 + 1;
                if (puVar5 == (undefined1 *)0x0) {
                  if ((int)uVar28 < 0x10) {
                    uVar28 = 0x10;
                  }
                  puVar5 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar28,0x13);
                  *puVar5 = 0;
                  FUN_18064e990(puVar5);
                }
                else if ((uint)puVar9 < uVar28) {
                  puVar5 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puVar5,uVar28,0x10,0x13);
                  FUN_18064e990(puVar5);
                }
              }
                    // WARNING: Subroutine does not return
              memcpy(puVar20 + (longlong)puVar5,*(undefined8 *)(puVar25 + -2),
                     (longlong)(int)(*puVar25 + 1));
            }
            uVar10 = iVar17 + 1;
            if (uVar10 != 0) {
              uVar23 = iVar17 + 2;
              if (puVar5 == (undefined1 *)0x0) {
                if ((int)uVar23 < 0x10) {
                  uVar23 = 0x10;
                }
                puVar5 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar23,0x13);
                *puVar5 = 0;
                uVar21 = (ulonglong)puVar5 & 0xffffffffffc00000;
                puVar9 = puVar7;
                if (uVar21 != 0) {
                  lVar4 = ((longlong)puVar5 - uVar21 >> 0x10) * 0x50 + 0x80 + uVar21;
                  puVar19 = (uint *)(lVar4 - (ulonglong)*(uint *)(lVar4 + 4));
                  if ((*(byte *)((longlong)puVar19 + 0xe) & 2) == 0) {
                    puVar9 = (undefined1 *)(ulonglong)puVar19[7];
                    if ((undefined1 *)0x3ffffff < (undefined1 *)(ulonglong)puVar19[7]) {
                      puVar9 = (undefined1 *)((ulonglong)*puVar19 << 0x10);
                    }
                  }
                  else {
                    uVar11 = (ulonglong)puVar19[7];
                    if (uVar11 < 0x4000000) {
                      uVar22 = (ulonglong)puVar19[7];
                    }
                    else {
                      uVar22 = (ulonglong)*puVar19 << 0x10;
                    }
                    if (0x3ffffff < uVar11) {
                      uVar11 = (ulonglong)*puVar19 << 0x10;
                    }
                    puVar9 = (undefined1 *)
                             (uVar11 - ((longlong)puVar5 -
                                       (((longlong)((longlong)puVar19 + (-0x80 - uVar21)) / 0x50) *
                                        0x10000 + uVar21)) % uVar22);
                  }
                }
                puVar9 = (undefined1 *)((ulonglong)puVar9 & 0xffffffff);
              }
              else if ((uint)puVar9 < uVar23) {
                puVar5 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puVar5,uVar23,0x10,0x13);
                uVar23 = FUN_18064e990(puVar5);
                puVar9 = (undefined1 *)(ulonglong)uVar23;
              }
            }
            puVar20[(longlong)puVar5] = 0x3b;
            puVar5[uVar10] = 0;
            if (iVar17 != -2) {
              uVar23 = iVar17 + 3;
              if (puVar5 == (undefined1 *)0x0) {
                if ((int)uVar23 < 0x10) {
                  uVar23 = 0x10;
                }
                puVar5 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar23,0x13);
                *puVar5 = 0;
                uVar21 = (ulonglong)puVar5 & 0xffffffffffc00000;
                puVar9 = puVar7;
                if (uVar21 != 0) {
                  lVar4 = ((longlong)puVar5 - uVar21 >> 0x10) * 0x50 + 0x80 + uVar21;
                  puVar19 = (uint *)(lVar4 - (ulonglong)*(uint *)(lVar4 + 4));
                  if ((*(byte *)((longlong)puVar19 + 0xe) & 2) == 0) {
                    puVar9 = (undefined1 *)(ulonglong)puVar19[7];
                    if ((undefined1 *)0x3ffffff < (undefined1 *)(ulonglong)puVar19[7]) {
                      puVar9 = (undefined1 *)((ulonglong)*puVar19 << 0x10);
                    }
                  }
                  else {
                    uVar11 = (ulonglong)puVar19[7];
                    if (uVar11 < 0x4000000) {
                      uVar22 = (ulonglong)puVar19[7];
                    }
                    else {
                      uVar22 = (ulonglong)*puVar19 << 0x10;
                    }
                    if (0x3ffffff < uVar11) {
                      uVar11 = (ulonglong)*puVar19 << 0x10;
                    }
                    puVar9 = (undefined1 *)
                             (uVar11 - ((longlong)puVar5 -
                                       (((longlong)((longlong)puVar19 + (-0x80 - uVar21)) / 0x50) *
                                        0x10000 + uVar21)) % uVar22);
                  }
                }
                puVar9 = (undefined1 *)((ulonglong)puVar9 & 0xffffffff);
              }
              else if ((uint)puVar9 < uVar23) {
                puVar5 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puVar5,uVar23,0x10,0x13);
                uVar23 = FUN_18064e990(puVar5);
                puVar9 = (undefined1 *)(ulonglong)uVar23;
              }
            }
            uVar23 = (uint)puVar9;
            puVar5[uVar10] = 0x20;
            puVar20 = (undefined1 *)(ulonglong)(iVar17 + 2);
            puVar20[(longlong)puVar5] = 0;
            uVar10 = (int)puVar26 + 1;
            puVar26 = (undefined1 *)(ulonglong)uVar10;
            puVar25 = puVar25 + 8;
            puVar6 = (undefined1 *)(longlong)(int)uVar10;
          } while (puVar6 < (undefined1 *)(lVar8 + -1));
        }
        if (0 < (int)plVar24[1]) {
          iVar17 = (int)plVar24[1] + (int)puVar20;
          if (iVar17 != 0) {
            uVar28 = iVar17 + 1;
            if (puVar5 == (undefined1 *)0x0) {
              if ((int)uVar28 < 0x10) {
                uVar28 = 0x10;
              }
              puVar5 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar28,0x13);
              *puVar5 = 0;
            }
            else {
              if (uVar28 <= uVar23) goto LAB_18016b773;
              puVar5 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puVar5,uVar28,0x10,0x13);
            }
            FUN_18064e990(puVar5);
          }
LAB_18016b773:
                    // WARNING: Subroutine does not return
          memcpy(puVar20 + (longlong)puVar5,*plVar24,(longlong)((int)plVar24[1] + 1));
        }
        if (puVar5 != (undefined1 *)0x0) {
          FUN_1806277c0(plVar24 + -1,puVar20);
        }
        if ((int)puVar20 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(*plVar24,puVar5,puVar20);
        }
        *(undefined4 *)(plVar24 + 1) = 0;
        if (*plVar24 != 0) {
          puVar20[*plVar24] = 0;
        }
        *(undefined4 *)((longlong)plVar24 + 0x14) = 0;
        if (puVar5 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar5);
        }
        iVar17 = (int)puStackX_8 + 1;
        puStackX_8 = (undefined8 *)CONCAT44(puStackX_8._4_4_,iVar17);
        plVar24 = plVar24 + 4;
        puVar12 = puStackX_20;
        puVar15 = puStack_e8;
      } while ((ulonglong)(longlong)iVar17 < uStackX_18);
    }
    puStack_e8 = puVar15;
    puStackX_8 = (undefined8 *)((ulonglong)puStackX_8 & 0xffffffff00000000);
    if (uStackX_18 != 0) {
      puVar12 = puVar12 + 1;
      puVar5 = puVar7;
      do {
        plVar24 = plStackX_10;
        puVar18 = &DAT_18098bc73;
        if ((undefined *)*puVar12 != (undefined *)0x0) {
          puVar18 = (undefined *)*puVar12;
        }
        if (puVar18 != (undefined *)0x0) {
          lVar8 = -1;
          do {
            lVar4 = lVar8;
            lVar8 = lVar4 + 1;
          } while (puVar18[lVar8] != '\0');
          if ((int)lVar8 != 0) {
            iVar14 = (int)lVar4 + 2;
            iVar17 = iVar14;
            if (iVar14 < 0x10) {
              iVar17 = 0x10;
            }
            puVar7 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar17,&UNK_18098bc13);
            *puVar7 = 0;
            FUN_18064e990(puVar7);
                    // WARNING: Subroutine does not return
            memcpy(puVar7,puVar18,iVar14);
          }
        }
        puVar13 = (undefined8 *)plStackX_10[1];
        if (puVar13 < (undefined8 *)plStackX_10[2]) {
          plStackX_10[1] = (longlong)(puVar13 + 4);
          *puVar13 = &UNK_18098bcb0;
          puVar13[1] = 0;
          *(undefined4 *)(puVar13 + 2) = 0;
          *puVar13 = &UNK_180a3c3e0;
          *(undefined4 *)(puVar13 + 2) = 0;
          puVar13[1] = 0;
          *(undefined4 *)((longlong)puVar13 + 0x1c) = 0;
          *(undefined4 *)(puVar13 + 3) = 0;
          iVar17 = (int)puVar5;
          puStackX_8 = puVar13;
        }
        else {
          lVar8 = *plStackX_10;
          lVar4 = (longlong)puVar13 - lVar8 >> 5;
          if (lVar4 == 0) {
            lVar4 = 1;
LAB_18016b996:
            puVar5 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,lVar4 << 5,(char)plStackX_10[3]);
            puVar13 = (undefined8 *)plVar24[1];
            lVar8 = *plVar24;
          }
          else {
            lVar4 = lVar4 * 2;
            puVar5 = puVar7;
            if (lVar4 != 0) goto LAB_18016b996;
          }
          puStack_78 = (undefined8 *)FUN_180059780(lVar8,puVar13,puVar5);
          *puStack_78 = &UNK_18098bcb0;
          puStack_78[1] = 0;
          *(undefined4 *)(puStack_78 + 2) = 0;
          *puStack_78 = &UNK_180a3c3e0;
          *(undefined4 *)(puStack_78 + 2) = 0;
          puStack_78[1] = 0;
          *(undefined4 *)((longlong)puStack_78 + 0x1c) = 0;
          *(undefined4 *)(puStack_78 + 3) = 0;
          puVar27 = puStack_78 + 4;
          puVar13 = (undefined8 *)plVar24[1];
          puVar15 = (undefined8 *)*plVar24;
          if (puVar15 != puVar13) {
            do {
              (**(code **)*puVar15)(puVar15,0);
              puVar15 = puVar15 + 4;
            } while (puVar15 != puVar13);
            puVar15 = (undefined8 *)*plStackX_10;
          }
          if (puVar15 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar15);
          }
          *plStackX_10 = (longlong)puVar5;
          plStackX_10[1] = (longlong)puVar27;
          plStackX_10[2] = (longlong)(puVar5 + lVar4 * 0x20);
          iVar17 = (int)puStackX_8;
        }
        uVar28 = iVar17 + 1;
        puVar5 = (undefined1 *)(ulonglong)uVar28;
        puStackX_8 = (undefined8 *)CONCAT44(puStackX_8._4_4_,uVar28);
        puVar12 = puVar12 + 4;
      } while ((ulonglong)(longlong)(int)uVar28 < uStackX_18);
    }
    puVar15 = puStack_b8;
    puVar13 = puStack_c0;
    puStack_108 = &UNK_180a3c3e0;
    if (pcStack_100 != (char *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    pcStack_100 = (char *)0x0;
    uStack_f0 = 0;
    puStack_108 = &UNK_18098bcb0;
    puVar27 = puStackX_20;
    puVar12 = puStack_c8;
    for (puVar16 = puStack_c0; puStackX_20 = puVar27, puStack_c8 = puVar12, puVar16 != puVar15;
        puVar16 = puVar16 + 4) {
      (**(code **)*puVar16)(puVar16,0);
      puVar27 = puStackX_20;
      puVar12 = puStack_c8;
    }
    puVar15 = puVar27;
    if (puVar13 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar13);
    }
    for (; puVar15 != puVar12; puVar15 = puVar15 + 4) {
      (**(code **)*puVar15)(puVar15,0);
    }
    if (puVar27 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar27);
    }
    puStack_a0 = &UNK_180a3c3e0;
    if (lStack_98 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}



undefined8 FUN_18016bb80(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  iVar2 = *param_2;
  if (iVar2 == 0x40) {
    if ((*(char *)(param_1 + 0x60) != '\0') &&
       (lVar3 = *(longlong *)(param_1 + 0x20), *(longlong *)(param_1 + 0x28) - lVar3 >> 5 != 0)) {
      lVar4 = -1;
      puVar6 = &DAT_18098bc73;
      if (*(int *)(param_1 + 100) == -1) {
        if (*(undefined **)(lVar3 + 8) != (undefined *)0x0) {
          puVar6 = *(undefined **)(lVar3 + 8);
        }
        do {
          lVar4 = lVar4 + 1;
        } while (puVar6[lVar4] != '\0');
      }
      else {
        puVar5 = *(undefined **)((longlong)*(int *)(param_1 + 100) * 0x20 + 8 + lVar3);
        if (puVar5 != (undefined *)0x0) {
          puVar6 = puVar5;
        }
        do {
          lVar4 = lVar4 + 1;
        } while (puVar6[lVar4] != '\0');
      }
                    // WARNING: Subroutine does not return
      memmove(*(undefined8 *)(param_2 + 6),puVar6,lVar4 + 1);
    }
    if ((*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) & 0xffffffffffffffe0U) == 0)
    {
      *(undefined1 *)(param_1 + 0x60) = 0;
      FUN_18016afc0(param_1);
      *(undefined8 *)(param_1 + 100) = 0xffffffffffffffff;
    }
  }
  else if (iVar2 == 0x80) {
    FUN_18016afc0(param_1);
    if (*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 5 != 0) {
      *(undefined1 *)(param_1 + 0x60) = 1;
      if (param_2[5] == 3) {
        piVar1 = (int *)(param_1 + 100);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          *(undefined1 *)(param_1 + 0x70) = 1;
          *(int *)(param_1 + 100) =
               (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 5) + -1;
          return 0;
        }
      }
      else {
        if (param_2[5] != 4) {
          return 0;
        }
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
        iVar2 = *(int *)(param_1 + 100);
        if ((int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 5) + -1 <
            *(int *)(param_1 + 100)) {
          iVar2 = 0;
        }
        *(int *)(param_1 + 100) = iVar2;
      }
      *(undefined1 *)(param_1 + 0x70) = 1;
    }
  }
  else if (iVar2 == 0x100) {
    FUN_18016afc0(param_1);
    if ((*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) & 0xffffffffffffffe0U) == 0)
    {
      *(undefined1 *)(param_1 + 0x60) = 0;
      FUN_18016afc0(param_1);
      *(undefined8 *)(param_1 + 100) = 0xffffffffffffffff;
    }
    else {
      *(undefined1 *)(param_1 + 0x60) = 1;
      if (*(int *)(param_1 + 0x68) != -1) {
        puVar6 = *(undefined **)
                  ((longlong)*(int *)(param_1 + 0x68) * 0x20 + 8 + *(longlong *)(param_1 + 0x20));
        lVar3 = -1;
        puVar5 = &DAT_18098bc73;
        if (puVar6 != (undefined *)0x0) {
          puVar5 = puVar6;
        }
        do {
          lVar4 = lVar3;
          lVar3 = lVar4 + 1;
        } while (puVar5[lVar3] != '\0');
                    // WARNING: Subroutine does not return
        memmove(*(undefined8 *)(param_2 + 6),puVar5,lVar4 + 2);
      }
    }
    if (*(char *)(param_1 + 0x71) != '\0') {
      *(undefined1 *)(param_1 + 0x71) = 0;
      param_2[0xb] = param_2[8];
      param_2[0xc] = 0;
      param_2[0xd] = 0;
    }
  }
  return 0;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



