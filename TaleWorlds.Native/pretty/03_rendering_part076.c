#include "TaleWorlds.Native.Split.h"

// 03_rendering_part076.c - 1 个函数

// 函数: void FUN_18030bde0(undefined4 param_1,longlong param_2)
void FUN_18030bde0(undefined4 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  char cVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  longlong in_RCX;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  char *pcVar20;
  char *pcVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auStack_218 [32];
  code *pcStack_1f8;
  undefined8 *puStack_1e8;
  longlong *plStack_1e0;
  undefined **ppuStack_1d8;
  undefined *puStack_1d0;
  longlong lStack_1c8;
  int iStack_1c0;
  ulonglong uStack_1b8;
  longlong lStack_1b0;
  longlong *plStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  longlong alStack_160 [19];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined *puStack_70;
  longlong lStack_68;
  undefined4 uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_48;
  
  uStack_198 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_218;
  pcVar21 = "guid";
  do {
    pcVar20 = pcVar21;
    pcVar21 = pcVar20 + 1;
  } while (*pcVar21 != '\0');
  for (puVar9 = *(undefined8 **)(param_2 + 0x40); lStack_1b0 = in_RCX, puVar9 != (undefined8 *)0x0;
      puVar9 = (undefined8 *)puVar9[6]) {
    pcVar21 = (char *)*puVar9;
    if (pcVar21 == (char *)0x0) {
      pcVar7 = (char *)0x0;
      pcVar21 = (char *)0x180d48d24;
    }
    else {
      pcVar7 = (char *)puVar9[2];
    }
    if (pcVar7 == pcVar20 + -0x180a04c43) {
      pcVar7 = pcVar7 + (longlong)pcVar21;
      if (pcVar7 <= pcVar21) {
LAB_18030be84:
        lVar10 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar10 = puVar9[1];
        }
        puVar8 = (undefined4 *)FUN_1802c0460(auStack_190,lVar10);
        param_1 = *puVar8;
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        *(undefined4 *)(in_RCX + 0xd0) = param_1;
        *(undefined4 *)(in_RCX + 0xd4) = uVar2;
        *(undefined4 *)(in_RCX + 0xd8) = uVar3;
        *(undefined4 *)(in_RCX + 0xdc) = uVar4;
        break;
      }
      lVar10 = (longlong)&UNK_180a04c44 - (longlong)pcVar21;
      while (*pcVar21 == pcVar21[lVar10]) {
        pcVar21 = pcVar21 + 1;
        if (pcVar7 <= pcVar21) goto LAB_18030be84;
      }
    }
  }
  pcVar21 = "name";
  do {
    pcVar20 = pcVar21;
    pcVar21 = pcVar20 + 1;
  } while (*pcVar21 != '\0');
  for (puVar9 = *(undefined8 **)(param_2 + 0x40); puVar9 != (undefined8 *)0x0;
      puVar9 = (undefined8 *)puVar9[6]) {
    pcVar21 = (char *)*puVar9;
    if (pcVar21 == (char *)0x0) {
      pcVar7 = (char *)0x0;
      pcVar21 = (char *)0x180d48d24;
    }
    else {
      pcVar7 = (char *)puVar9[2];
    }
    if (pcVar7 == pcVar20 + -0x180a03a83) {
      pcVar7 = pcVar7 + (longlong)pcVar21;
      if (pcVar7 <= pcVar21) {
LAB_18030bf14:
        lVar10 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar10 = puVar9[1];
        }
        param_1 = (**(code **)(*(longlong *)(in_RCX + 0x38) + 0x10))(in_RCX + 0x38,lVar10);
        break;
      }
      lVar10 = (longlong)&DAT_180a03a84 - (longlong)pcVar21;
      while (*pcVar21 == pcVar21[lVar10]) {
        pcVar21 = pcVar21 + 1;
        if (pcVar7 <= pcVar21) goto LAB_18030bf14;
      }
    }
  }
  puStack_1d0 = &UNK_180a3c3e0;
  uStack_1b8 = 0;
  lStack_1c8 = 0;
  iStack_1c0 = 0;
  pcVar21 = "owner_skeleton";
  do {
    pcVar20 = pcVar21;
    pcVar21 = pcVar20 + 1;
  } while (*pcVar21 != '\0');
  for (puVar9 = *(undefined8 **)(param_2 + 0x40); puVar9 != (undefined8 *)0x0;
      puVar9 = (undefined8 *)puVar9[6]) {
    pcVar21 = (char *)*puVar9;
    if (pcVar21 == (char *)0x0) {
      pcVar7 = (char *)0x0;
      pcVar21 = (char *)0x180d48d24;
    }
    else {
      pcVar7 = (char *)puVar9[2];
    }
    if (pcVar7 == pcVar20 + -0x180a1a43f) {
      pcVar7 = pcVar21 + (longlong)pcVar7;
      if (pcVar7 <= pcVar21) {
LAB_18030bfe4:
        lVar10 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar10 = puVar9[1];
        }
        param_1 = FUN_180627c50(&puStack_1d0,lVar10);
        break;
      }
      lVar10 = (longlong)&UNK_180a1a440 - (longlong)pcVar21;
      while (*pcVar21 == pcVar21[lVar10]) {
        pcVar21 = pcVar21 + 1;
        if (pcVar7 <= pcVar21) goto LAB_18030bfe4;
      }
    }
  }
  if (iStack_1c0 != 0) {
    puVar9 = (undefined8 *)FUN_1800b3970(param_1,&plStack_1a0,&puStack_1d0,1);
    uVar1 = *puVar9;
    *puVar9 = 0;
    plStack_1e0 = *(longlong **)(in_RCX + 0x180);
    *(undefined8 *)(in_RCX + 0x180) = uVar1;
    if (plStack_1e0 != (longlong *)0x0) {
      (**(code **)(*plStack_1e0 + 0x38))();
    }
    if (plStack_1a0 != (longlong *)0x0) {
      (**(code **)(*plStack_1a0 + 0x38))();
    }
  }
  pcVar21 = "capsules";
  do {
    pcVar20 = pcVar21;
    pcVar21 = pcVar20 + 1;
  } while (*pcVar21 != '\0');
  puVar9 = *(undefined8 **)(param_2 + 0x30);
LAB_18030c071:
  if (puVar9 == (undefined8 *)0x0) goto LAB_18030c93f;
  pcVar21 = (char *)*puVar9;
  if (pcVar21 == (char *)0x0) {
    pcVar7 = (char *)0x0;
    pcVar21 = (char *)0x180d48d24;
  }
  else {
    pcVar7 = (char *)puVar9[2];
  }
  if (pcVar7 == pcVar20 + -0x180a1a42f) {
    pcVar7 = pcVar7 + (longlong)pcVar21;
    if (pcVar7 <= pcVar21) {
LAB_18030c0c0:
      pcVar21 = "capsule";
      do {
        pcVar20 = pcVar21;
        pcVar21 = pcVar20 + 1;
      } while (*pcVar21 != '\0');
      puVar9 = (undefined8 *)puVar9[6];
      do {
        puStack_1e8 = puVar9;
        if (puVar9 == (undefined8 *)0x0) {
LAB_18030c93f:
          iVar22 = (int)((*(longlong *)(lStack_1b0 + 0x20) - *(longlong *)(lStack_1b0 + 0x18)) /
                        0x128);
          plStack_1e0 = (longlong *)(longlong)iVar22;
          lVar10 = lStack_1b0;
          if (0 < iVar22) {
            ppuStack_1d8 = (undefined **)0x0;
            do {
              ppuVar5 = ppuStack_1d8;
              lVar11 = *(longlong *)(lVar10 + 0x18);
              lVar12 = 0;
              lVar23 = 0;
              puStack_1e8 = (undefined8 *)0x2;
              do {
                lVar17 = 0;
                lVar15 = 0;
                piVar13 = (int *)((longlong)ppuVar5 + lVar12 + lVar11);
                lVar24 = 2;
                do {
                  *piVar13 = -1;
                  if ((*(longlong *)(lVar10 + 0x180) != 0) &&
                     (*(int *)((longlong)ppuVar5 + lVar12 + lVar17 + 0x28 + lVar11) != 0)) {
                    cVar6 = FUN_18040b330(*(longlong *)(lVar10 + 0x180),
                                          (longlong)ppuVar5 + lVar23 + 0x18 + lVar15 + lVar11,0);
                    *piVar13 = (int)cVar6;
                    lVar10 = lStack_1b0;
                  }
                  lVar15 = lVar15 + 0x20;
                  piVar13 = piVar13 + 1;
                  lVar17 = lVar17 + 0x20;
                  lVar24 = lVar24 + -1;
                } while (lVar24 != 0);
                lVar23 = lVar23 + 0x58;
                lVar12 = lVar12 + 0x58;
                puStack_1e8 = (undefined8 *)((longlong)puStack_1e8 + -1);
              } while (puStack_1e8 != (undefined8 *)0x0);
              ppuStack_1d8 = ppuStack_1d8 + 0x25;
              plStack_1e0 = (longlong *)((longlong)plStack_1e0 + -1);
              puStack_1e8 = (undefined8 *)0x0;
            } while (plStack_1e0 != (longlong *)0x0);
          }
          if (*(char *)(lVar10 + 0x14) != '\0') {
            FUN_1800f4980(_DAT_180c8a980,*(undefined4 *)(lVar10 + 0x10),lVar10);
          }
          puStack_1d0 = &UNK_180a3c3e0;
          if (lStack_1c8 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_1c8 = 0;
          uStack_1b8 = uStack_1b8 & 0xffffffff00000000;
          puStack_1d0 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
          FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_218);
        }
        pcVar21 = (char *)*puVar9;
        if (pcVar21 == (char *)0x0) {
          pcVar7 = (char *)0x0;
          pcVar21 = (char *)0x180d48d24;
        }
        else {
          pcVar7 = (char *)puVar9[2];
        }
        if (pcVar7 == pcVar20 + -0x180a1a487) {
          pcVar7 = pcVar21 + (longlong)pcVar7;
          if (pcVar7 <= pcVar21) {
LAB_18030c136:
            plVar16 = (longlong *)(in_RCX + 0x18);
            plStack_1e0 = plVar16;
            goto LAB_18030c154;
          }
          lVar10 = (longlong)&UNK_180a1a488 - (longlong)pcVar21;
          while (*pcVar21 == pcVar21[lVar10]) {
            pcVar21 = pcVar21 + 1;
            if (pcVar7 <= pcVar21) goto LAB_18030c136;
          }
        }
        puVar9 = (undefined8 *)puVar9[0xb];
      } while( true );
    }
    lVar10 = (longlong)&UNK_180a1a430 - (longlong)pcVar21;
    while (*pcVar21 == pcVar21[lVar10]) {
      pcVar21 = pcVar21 + 1;
      if (pcVar7 <= pcVar21) goto LAB_18030c0c0;
    }
  }
  puVar9 = (undefined8 *)puVar9[0xb];
  goto LAB_18030c071;
LAB_18030c154:
  pcStack_1f8 = FUN_1800f88f0;
  FUN_1808fc838(auStack_178,0x58,2,FUN_18030cdf0);
  ppuStack_1d8 = &puStack_70;
  puStack_70 = &UNK_180a3c3e0;
  uStack_58 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  uStack_b4 = 0x3f800000;
  uStack_ac = 0;
  uStack_a4 = 0x3f80000000000000;
  uStack_9c = 0;
  uStack_94 = 0;
  uStack_8c = 0x3f800000;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0x3f800000;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_c8 = 0;
  pcVar21 = "name";
  do {
    pcVar20 = pcVar21;
    pcVar21 = pcVar20 + 1;
  } while (*pcVar21 != '\0');
  for (puVar18 = (undefined8 *)puVar9[8]; puVar18 != (undefined8 *)0x0;
      puVar18 = (undefined8 *)puVar18[6]) {
    pcVar21 = (char *)*puVar18;
    if (pcVar21 == (char *)0x0) {
      pcVar7 = (char *)0x0;
      pcVar21 = (char *)0x180d48d24;
    }
    else {
      pcVar7 = (char *)puVar18[2];
    }
    if (pcVar7 == pcVar20 + -0x180a03a83) {
      pcVar7 = pcVar7 + (longlong)pcVar21;
      if (pcVar7 <= pcVar21) {
LAB_18030c270:
        lVar10 = 0x180d48d24;
        if (puVar18[1] != 0) {
          lVar10 = puVar18[1];
        }
        FUN_180627c50(&puStack_70,lVar10);
        break;
      }
      lVar10 = (longlong)&DAT_180a03a84 - (longlong)pcVar21;
      while (*pcVar21 == pcVar21[lVar10]) {
        pcVar21 = pcVar21 + 1;
        if (pcVar7 <= pcVar21) goto LAB_18030c270;
      }
    }
  }
  pcVar21 = "length";
  do {
    pcVar20 = pcVar21;
    pcVar21 = pcVar20 + 1;
  } while (*pcVar21 != '\0');
  for (puVar18 = (undefined8 *)puVar9[8]; puVar18 != (undefined8 *)0x0;
      puVar18 = (undefined8 *)puVar18[6]) {
    pcVar21 = (char *)*puVar18;
    if (pcVar21 == (char *)0x0) {
      pcVar7 = (char *)0x0;
      pcVar21 = (char *)0x180d48d24;
    }
    else {
      pcVar7 = (char *)puVar18[2];
    }
    if (pcVar7 == pcVar20 + -0x180a1a47f) {
      pcVar7 = pcVar7 + (longlong)pcVar21;
      if (pcVar7 <= pcVar21) {
LAB_18030c2f0:
        lVar10 = 0x180d48d24;
        if (puVar18[1] != 0) {
          lVar10 = puVar18[1];
        }
        FUN_18010cbc0(lVar10,&DAT_180a06430,&uStack_c8);
        break;
      }
      lVar10 = (longlong)&UNK_180a1a480 - (longlong)pcVar21;
      while (*pcVar21 == pcVar21[lVar10]) {
        pcVar21 = pcVar21 + 1;
        if (pcVar7 <= pcVar21) goto LAB_18030c2f0;
      }
    }
  }
  FUN_180631960(puVar9,&UNK_180a1a478,&uStack_c4);
  FUN_180631f30(puVar9,&UNK_180a015a8,&uStack_b4);
  pcVar21 = "points";
  do {
    pcVar20 = pcVar21;
    pcVar21 = pcVar20 + 1;
  } while (*pcVar21 != '\0');
  puVar18 = (undefined8 *)puVar9[6];
LAB_18030c347:
  if (puVar18 == (undefined8 *)0x0) goto LAB_18030c834;
  pcVar21 = (char *)*puVar18;
  if (pcVar21 == (char *)0x0) {
    pcVar7 = (char *)0x0;
    pcVar21 = (char *)0x180d48d24;
  }
  else {
    pcVar7 = (char *)puVar18[2];
  }
  if (pcVar7 != pcVar20 + -0x180a1a46f) {
LAB_18030c3ca:
    puVar18 = (undefined8 *)puVar18[0xb];
    goto LAB_18030c347;
  }
  pcVar7 = pcVar7 + (longlong)pcVar21;
  if (pcVar21 < pcVar7) {
    lVar10 = (longlong)&UNK_180a1a470 - (longlong)pcVar21;
    while (*pcVar21 == pcVar21[lVar10]) {
      pcVar21 = pcVar21 + 1;
      if (pcVar7 <= pcVar21) goto LAB_18030c390;
    }
    goto LAB_18030c3ca;
  }
LAB_18030c390:
  pcVar21 = "point";
  do {
    pcVar20 = pcVar21;
    pcVar21 = pcVar20 + 1;
  } while (*pcVar21 != '\0');
  for (puVar18 = (undefined8 *)puVar18[6]; puVar18 != (undefined8 *)0x0;
      puVar18 = (undefined8 *)puVar18[0xb]) {
    pcVar21 = (char *)*puVar18;
    if (pcVar21 == (char *)0x0) {
      pcVar7 = (char *)0x0;
      pcVar21 = (char *)0x180d48d24;
    }
    else {
      pcVar7 = (char *)puVar18[2];
    }
    if (pcVar7 == pcVar20 + -0x18098be47) {
      pcVar7 = pcVar21 + (longlong)pcVar7;
      if (pcVar7 <= pcVar21) {
LAB_18030c400:
        iVar22 = 0;
        lVar10 = 0;
LAB_18030c410:
        pcVar21 = "radius";
        do {
          pcVar20 = pcVar21;
          pcVar21 = pcVar20 + 1;
        } while (*pcVar21 != '\0');
        for (puVar9 = (undefined8 *)puVar18[8]; puVar9 != (undefined8 *)0x0;
            puVar9 = (undefined8 *)puVar9[6]) {
          pcVar21 = (char *)*puVar9;
          if (pcVar21 == (char *)0x0) {
            pcVar7 = (char *)0x0;
            pcVar21 = (char *)0x180d48d24;
          }
          else {
            pcVar7 = (char *)puVar9[2];
          }
          if (pcVar7 == pcVar20 + -0x180a1a48f) {
            pcVar7 = pcVar7 + (longlong)pcVar21;
            if (pcVar7 <= pcVar21) {
LAB_18030c490:
              lVar11 = 0x180d48d24;
              if (puVar9[1] != 0) {
                lVar11 = puVar9[1];
              }
              goto LAB_18030c4af;
            }
            lVar11 = (longlong)&UNK_180a1a490 - (longlong)pcVar21;
            while (*pcVar21 == pcVar21[lVar11]) {
              pcVar21 = pcVar21 + 1;
              if (pcVar7 <= pcVar21) goto LAB_18030c490;
            }
          }
        }
        lVar11 = 0;
LAB_18030c4af:
        if ((auStack_168 + (longlong)iVar22 * 0x58 != (undefined1 *)0x0) && (lVar11 != 0)) {
          FUN_18010cbc0(lVar11,&DAT_180a06430,auStack_168 + (longlong)iVar22 * 0x58);
        }
        pcVar21 = "bones";
        do {
          pcVar20 = pcVar21;
          pcVar21 = pcVar20 + 1;
        } while (*pcVar21 != '\0');
        puVar9 = (undefined8 *)puVar18[6];
LAB_18030c4f0:
        if (puVar9 != (undefined8 *)0x0) {
          pcVar21 = (char *)*puVar9;
          if (pcVar21 == (char *)0x0) {
            pcVar7 = (char *)0x0;
            pcVar21 = (char *)0x180d48d24;
          }
          else {
            pcVar7 = (char *)puVar9[2];
          }
          if (pcVar7 != pcVar20 + -0x180a19c8b) goto LAB_18030c575;
          pcVar7 = pcVar7 + (longlong)pcVar21;
          if (pcVar21 < pcVar7) {
            lVar11 = (longlong)&UNK_180a19c8c - (longlong)pcVar21;
            while (*pcVar21 == pcVar21[lVar11]) {
              pcVar21 = pcVar21 + 1;
              if (pcVar7 <= pcVar21) goto LAB_18030c530;
            }
            goto LAB_18030c575;
          }
LAB_18030c530:
          iVar14 = 0;
          pcVar21 = "bone";
          do {
            pcVar20 = pcVar21;
            pcVar21 = pcVar20 + 1;
          } while (*pcVar21 != '\0');
          for (puVar9 = (undefined8 *)puVar9[6]; puVar9 != (undefined8 *)0x0;
              puVar9 = (undefined8 *)puVar9[0xb]) {
            pcVar21 = (char *)*puVar9;
            if (pcVar21 == (char *)0x0) {
              pcVar7 = (char *)0x0;
              pcVar21 = (char *)0x180d48d24;
            }
            else {
              pcVar7 = (char *)puVar9[2];
            }
            if (pcVar7 == pcVar20 + -0x180a19c83) {
              pcVar7 = pcVar7 + (longlong)pcVar21;
              if (pcVar7 <= pcVar21) {
LAB_18030c5a4:
                lVar11 = 0;
LAB_18030c5a6:
                if (iVar14 < 2) {
                  plVar16 = (longlong *)((longlong)alStack_160 + lVar10 * 0x58 + lVar11);
                  pcVar21 = "name";
                  do {
                    pcVar20 = pcVar21;
                    pcVar21 = pcVar20 + 1;
                  } while (*pcVar21 != '\0');
                  for (puVar19 = (undefined8 *)puVar9[8]; puVar19 != (undefined8 *)0x0;
                      puVar19 = (undefined8 *)puVar19[6]) {
                    pcVar21 = (char *)*puVar19;
                    if (pcVar21 == (char *)0x0) {
                      pcVar7 = (char *)0x0;
                      pcVar21 = (char *)0x180d48d24;
                    }
                    else {
                      pcVar7 = (char *)puVar19[2];
                    }
                    if (pcVar7 == pcVar20 + -0x180a03a83) {
                      pcVar7 = pcVar7 + (longlong)pcVar21;
                      if (pcVar7 <= pcVar21) {
LAB_18030c631:
                        lVar12 = 0x180d48d24;
                        if (puVar19[1] != 0) {
                          lVar12 = puVar19[1];
                        }
                        (**(code **)(*plVar16 + 0x10))(plVar16,lVar12);
                        break;
                      }
                      lVar12 = (longlong)&DAT_180a03a84 - (longlong)pcVar21;
                      while (*pcVar21 == pcVar21[lVar12]) {
                        pcVar21 = pcVar21 + 1;
                        if (pcVar7 <= pcVar21) goto LAB_18030c631;
                      }
                    }
                  }
                  pcVar21 = "weight";
                  do {
                    pcVar20 = pcVar21;
                    pcVar21 = pcVar20 + 1;
                  } while (*pcVar21 != '\0');
                  for (puVar19 = (undefined8 *)puVar9[8]; puVar19 != (undefined8 *)0x0;
                      puVar19 = (undefined8 *)puVar19[6]) {
                    pcVar21 = (char *)*puVar19;
                    if (pcVar21 == (char *)0x0) {
                      pcVar7 = (char *)0x0;
                      pcVar21 = (char *)0x180d48d24;
                    }
                    else {
                      pcVar7 = (char *)puVar19[2];
                    }
                    if (pcVar7 == pcVar20 + -0x180a1029b) {
                      pcVar7 = pcVar21 + (longlong)pcVar7;
                      if (pcVar7 <= pcVar21) {
LAB_18030c6d0:
                        lVar12 = 0x180d48d24;
                        if (puVar19[1] != 0) {
                          lVar12 = puVar19[1];
                        }
                        goto LAB_18030c6f3;
                      }
                      lVar12 = (longlong)&UNK_180a1029c - (longlong)pcVar21;
                      while (*pcVar21 == pcVar21[lVar12]) {
                        pcVar21 = pcVar21 + 1;
                        if (pcVar7 <= pcVar21) goto LAB_18030c6d0;
                      }
                    }
                  }
                  lVar12 = 0;
LAB_18030c6f3:
                  if ((auStack_170 + ((longlong)iVar22 * 0x16 + (longlong)iVar14) * 4 !=
                       (undefined1 *)0x0) && (lVar12 != 0)) {
                    FUN_18010cbc0(lVar12,&DAT_180a06430,
                                  auStack_170 + ((longlong)iVar22 * 0x16 + (longlong)iVar14) * 4);
                  }
                  iVar14 = iVar14 + 1;
                  lVar11 = lVar11 + 0x20;
                  pcVar21 = "bone";
                  do {
                    pcVar20 = pcVar21;
                    pcVar21 = pcVar20 + 1;
                  } while (*pcVar21 != '\0');
                  puVar9 = (undefined8 *)puVar9[0xb];
                  if (puVar9 != (undefined8 *)0x0) {
                    do {
                      pcVar21 = (char *)*puVar9;
                      if (pcVar21 == (char *)0x0) {
                        pcVar7 = (char *)0x0;
                        pcVar21 = (char *)0x180d48d24;
                      }
                      else {
                        pcVar7 = (char *)puVar9[2];
                      }
                      if (pcVar7 == pcVar20 + -0x180a19c83) {
                        pcVar7 = pcVar7 + (longlong)pcVar21;
                        if (pcVar7 <= pcVar21) goto LAB_18030c5a6;
                        lVar12 = (longlong)&UNK_180a19c84 - (longlong)pcVar21;
                        while (*pcVar21 == pcVar21[lVar12]) {
                          pcVar21 = pcVar21 + 1;
                          if (pcVar7 <= pcVar21) goto LAB_18030c5a6;
                        }
                      }
                      puVar9 = (undefined8 *)puVar9[0xb];
                      if (puVar9 == (undefined8 *)0x0) break;
                    } while( true );
                  }
                }
                break;
              }
              lVar11 = (longlong)&UNK_180a19c84 - (longlong)pcVar21;
              while (*pcVar21 == pcVar21[lVar11]) {
                pcVar21 = pcVar21 + 1;
                if (pcVar7 <= pcVar21) goto LAB_18030c5a4;
              }
            }
          }
        }
        iVar22 = iVar22 + 1;
        lVar10 = lVar10 + 1;
        pcVar21 = "point";
        do {
          pcVar20 = pcVar21;
          pcVar21 = pcVar20 + 1;
        } while (*pcVar21 != '\0');
        puVar18 = (undefined8 *)puVar18[0xb];
        do {
          puVar9 = puStack_1e8;
          plVar16 = plStack_1e0;
          if (puVar18 == (undefined8 *)0x0) goto LAB_18030c834;
          pcVar21 = (char *)*puVar18;
          if (pcVar21 == (char *)0x0) {
            pcVar7 = (char *)0x0;
            pcVar21 = (char *)0x180d48d24;
          }
          else {
            pcVar7 = (char *)puVar18[2];
          }
          if (pcVar7 == pcVar20 + -0x18098be47) {
            pcVar7 = pcVar21 + (longlong)pcVar7;
            if (pcVar7 <= pcVar21) goto LAB_18030c410;
            lVar11 = (longlong)&DAT_18098be48 - (longlong)pcVar21;
            while (*pcVar21 == pcVar21[lVar11]) {
              pcVar21 = pcVar21 + 1;
              if (pcVar7 <= pcVar21) goto LAB_18030c410;
            }
          }
          puVar18 = (undefined8 *)puVar18[0xb];
        } while( true );
      }
      lVar10 = (longlong)&DAT_18098be48 - (longlong)pcVar21;
      while (*pcVar21 == pcVar21[lVar10]) {
        pcVar21 = pcVar21 + 1;
        if (pcVar7 <= pcVar21) goto LAB_18030c400;
      }
    }
  }
LAB_18030c834:
  pcVar21 = "capsule";
  do {
    pcVar20 = pcVar21;
    pcVar21 = pcVar20 + 1;
  } while (*pcVar21 != '\0');
  for (puStack_1e8 = (undefined8 *)puVar9[0xb]; puStack_1e8 != (undefined8 *)0x0;
      puStack_1e8 = (undefined8 *)puStack_1e8[0xb]) {
    pcVar21 = (char *)*puStack_1e8;
    if (pcVar21 == (char *)0x0) {
      pcVar7 = (char *)0x0;
      pcVar21 = (char *)0x180d48d24;
    }
    else {
      pcVar7 = (char *)puStack_1e8[2];
    }
    if (pcVar7 == pcVar20 + -0x180a1a487) {
      pcVar7 = pcVar7 + (longlong)pcVar21;
      if (pcVar7 <= pcVar21) goto LAB_18030c89f;
      lVar10 = (longlong)&UNK_180a1a488 - (longlong)pcVar21;
      while (*pcVar21 == pcVar21[lVar10]) {
        pcVar21 = pcVar21 + 1;
        if (pcVar7 <= pcVar21) goto LAB_18030c89f;
      }
    }
  }
  puStack_1e8 = (undefined8 *)0x0;
LAB_18030c89f:
  puVar9 = puStack_1e8;
  if (*(ulonglong *)((longlong)plVar16 + 8) < *(ulonglong *)((longlong)plVar16 + 0x10)) {
    *(ulonglong *)((longlong)plVar16 + 8) = *(ulonglong *)((longlong)plVar16 + 8) + 0x128;
    FUN_1800f8570();
  }
  else {
    FUN_18030cab0(plVar16,auStack_178);
  }
  ppuStack_1d8 = &puStack_70;
  puStack_70 = &UNK_180a3c3e0;
  if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_68 = 0;
  uStack_58 = uStack_58 & 0xffffffff00000000;
  puStack_70 = &UNK_18098bcb0;
  FUN_1808fc8a8(auStack_178,0x58,2,FUN_1800f88f0);
  if (puVar9 == (undefined8 *)0x0) goto LAB_18030c93f;
  goto LAB_18030c154;
LAB_18030c575:
  puVar9 = (undefined8 *)puVar9[0xb];
  goto LAB_18030c4f0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



