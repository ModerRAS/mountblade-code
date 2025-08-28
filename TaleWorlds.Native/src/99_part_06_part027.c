#include "TaleWorlds.Native.Split.h"

// 99_part_06_part027.c - 2 个函数

// 函数: void FUN_1803be690(longlong param_1,longlong param_2)
void FUN_1803be690(longlong param_1,longlong param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 auStackX_18 [8];
  undefined8 uVar11;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined *puStack_50;
  longlong lStack_48;
  int iStack_40;
  undefined8 uStack_38;
  
  uVar11 = 0xfffffffffffffffe;
  pcVar9 = "additional_features";
  do {
    pcVar10 = pcVar9;
    pcVar9 = pcVar10 + 1;
  } while (*pcVar9 != '\0');
  puVar8 = *(undefined8 **)(param_2 + 0x30);
  if (puVar8 != (undefined8 *)0x0) {
    pcVar9 = (char *)0x0;
    do {
      pcVar3 = (char *)*puVar8;
      if (pcVar3 == (char *)0x0) {
        pcVar3 = (char *)0x180d48d24;
        pcVar4 = pcVar9;
      }
      else {
        pcVar4 = (char *)puVar8[2];
      }
      if (pcVar4 == pcVar10 + -0x180a23b27) {
        pcVar4 = pcVar4 + (longlong)pcVar3;
        if (pcVar4 <= pcVar3) {
LAB_1803be720:
          pcVar10 = "feature";
          do {
            pcVar3 = pcVar10;
            pcVar10 = pcVar3 + 1;
          } while (*pcVar10 != '\0');
          pcVar10 = (char *)puVar8[6];
          do {
            if (pcVar10 == (char *)0x0) {
              return;
            }
            pcVar4 = *(char **)pcVar10;
            if (pcVar4 == (char *)0x0) {
              pcVar4 = (char *)0x180d48d24;
              pcVar6 = pcVar9;
            }
            else {
              pcVar6 = *(char **)(pcVar10 + 0x10);
            }
            if (pcVar6 == pcVar3 + -0x180a23b1f) {
              pcVar6 = pcVar4 + (longlong)pcVar6;
              if (pcVar6 <= pcVar4) {
LAB_1803be7b2:
                do {
                  puStack_50 = &UNK_180a3c3e0;
                  uStack_38 = 0;
                  lStack_48 = 0;
                  iStack_40 = 0;
                  pcVar3 = "name";
                  do {
                    pcVar4 = pcVar3;
                    pcVar3 = pcVar4 + 1;
                  } while (*pcVar3 != '\0');
                  for (puVar8 = *(undefined8 **)(pcVar10 + 0x40); puVar8 != (undefined8 *)0x0;
                      puVar8 = (undefined8 *)puVar8[6]) {
                    pcVar3 = (char *)*puVar8;
                    if (pcVar3 == (char *)0x0) {
                      pcVar3 = (char *)0x180d48d24;
                      pcVar6 = pcVar9;
                    }
                    else {
                      pcVar6 = (char *)puVar8[2];
                    }
                    if (pcVar6 == pcVar4 + -0x180a03a83) {
                      pcVar6 = pcVar6 + (longlong)pcVar3;
                      if (pcVar6 <= pcVar3) {
LAB_1803be834:
                        lVar7 = 0x180d48d24;
                        if (puVar8[1] != 0) {
                          lVar7 = puVar8[1];
                        }
                        FUN_180627c50(&puStack_50,lVar7,pcVar6,puVar8,uVar11);
                        break;
                      }
                      lVar7 = (longlong)&DAT_180a03a84 - (longlong)pcVar3;
                      while (*pcVar3 == pcVar3[lVar7]) {
                        pcVar3 = pcVar3 + 1;
                        if (pcVar6 <= pcVar3) goto LAB_1803be834;
                      }
                    }
                  }
                  if (((iStack_40 == 0x24) && (iVar1 = strcmp(lStack_48,&UNK_180a23af8), iVar1 == 0)
                      ) && (FUN_180631000(pcVar10,&UNK_180a0696c,auStackX_18),
                           (*(byte *)(*(longlong *)(param_1 + 0x28) + 0x2e8) & 0x40) != 0)) {
                    pcVar3 = "factor";
                    do {
                      pcVar4 = pcVar3;
                      pcVar3 = pcVar4 + 1;
                    } while (*pcVar3 != '\0');
                    for (pcVar3 = *(char **)(pcVar10 + 0x30); pcVar6 = pcVar9, pcVar3 != (char *)0x0
                        ; pcVar3 = *(char **)(pcVar3 + 0x58)) {
                      pcVar5 = *(char **)pcVar3;
                      if (pcVar5 == (char *)0x0) {
                        pcVar5 = (char *)0x180d48d24;
                        pcVar2 = pcVar9;
                      }
                      else {
                        pcVar2 = *(char **)(pcVar3 + 0x10);
                      }
                      if (pcVar2 == pcVar4 + -0x180a1674b) {
                        pcVar2 = pcVar2 + (longlong)pcVar5;
                        pcVar6 = pcVar3;
                        if (pcVar2 <= pcVar5) break;
                        lVar7 = (longlong)&UNK_180a1674c - (longlong)pcVar5;
                        while (*pcVar5 == pcVar5[lVar7]) {
                          pcVar5 = pcVar5 + 1;
                          if (pcVar2 <= pcVar5) goto LAB_1803be904;
                        }
                      }
                    }
LAB_1803be904:
                    FUN_180631b90(pcVar6,&UNK_180a0696c,&uStack_60);
                    lVar7 = *(longlong *)(param_1 + 0x28);
                    *(undefined4 *)(lVar7 + 0x180) = uStack_60;
                    *(undefined4 *)(lVar7 + 0x184) = uStack_5c;
                    *(undefined4 *)(lVar7 + 0x188) = uStack_58;
                    *(undefined4 *)(lVar7 + 0x18c) = uStack_54;
                  }
                  pcVar3 = "feature";
                  do {
                    pcVar4 = pcVar3;
                    pcVar3 = pcVar4 + 1;
                  } while (*pcVar3 != '\0');
                  for (pcVar3 = *(char **)(pcVar10 + 0x58); pcVar10 = pcVar9, pcVar3 != (char *)0x0;
                      pcVar3 = *(char **)(pcVar3 + 0x58)) {
                    pcVar6 = *(char **)pcVar3;
                    if (pcVar6 == (char *)0x0) {
                      pcVar6 = (char *)0x180d48d24;
                      pcVar5 = pcVar9;
                    }
                    else {
                      pcVar5 = *(char **)(pcVar3 + 0x10);
                    }
                    if (pcVar5 == pcVar4 + -0x180a23b1f) {
                      pcVar5 = pcVar5 + (longlong)pcVar6;
                      pcVar10 = pcVar3;
                      if (pcVar5 <= pcVar6) break;
                      lVar7 = (longlong)&UNK_180a23b20 - (longlong)pcVar6;
                      while (*pcVar6 == pcVar6[lVar7]) {
                        pcVar6 = pcVar6 + 1;
                        if (pcVar5 <= pcVar6) goto LAB_1803be98e;
                      }
                    }
                  }
LAB_1803be98e:
                  puStack_50 = &UNK_180a3c3e0;
                  if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  if (pcVar10 == (char *)0x0) {
                    return;
                  }
                } while( true );
              }
              lVar7 = (longlong)&UNK_180a23b20 - (longlong)pcVar4;
              while (*pcVar4 == pcVar4[lVar7]) {
                pcVar4 = pcVar4 + 1;
                if (pcVar6 <= pcVar4) goto LAB_1803be7b2;
              }
            }
            pcVar10 = *(char **)(pcVar10 + 0x58);
          } while( true );
        }
        lVar7 = (longlong)&UNK_180a23b28 - (longlong)pcVar3;
        while (*pcVar3 == pcVar3[lVar7]) {
          pcVar3 = pcVar3 + 1;
          if (pcVar4 <= pcVar3) goto LAB_1803be720;
        }
      }
      puVar8 = (undefined8 *)puVar8[0xb];
    } while (puVar8 != (undefined8 *)0x0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803be9f0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
void FUN_1803be9f0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  undefined8 param_5,char param_6)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  char *pcVar14;
  longlong lVar15;
  undefined *puVar16;
  longlong *plVar17;
  longlong lVar18;
  char *pcVar19;
  ulonglong uVar20;
  char *pcVar21;
  char *pcVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  uint uVar26;
  int iVar27;
  undefined4 uVar28;
  longlong lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined4 uStack_110;
  ulonglong uStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  longlong *plStack_e0;
  longlong *plStack_d8;
  longlong *plStack_d0;
  longlong *plStack_c8;
  longlong *plStack_c0;
  longlong *plStack_b8;
  undefined8 uStack_b0;
  longlong *plStack_a8;
  longlong *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong *plStack_88;
  longlong *plStack_80;
  longlong *plStack_78;
  longlong *plStack_70;
  longlong *plStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  
  uStack_90 = 0xfffffffffffffffe;
  uVar28 = 0;
  iVar27 = 0;
  uVar26 = 0;
  lStack_128 = 0;
  do {
    pcVar21 = *(char **)(&UNK_180994200 + lStack_128 * 8);
    if (pcVar21 == (char *)0x0) {
      pcVar22 = *(char **)(param_4 + 0x30);
joined_r0x0001803beb6b:
      if (pcVar22 != (char *)0x0) {
        plVar12 = (longlong *)0x0;
        plVar17 = (longlong *)0x0;
        if (uVar26 == 0) {
          puStack_120 = &UNK_180a3c3e0;
          uStack_108 = 0;
          puStack_118 = (undefined *)0x0;
          uStack_110 = 0;
          pcVar21 = "name";
          do {
            pcVar19 = pcVar21;
            pcVar21 = pcVar19 + 1;
          } while (*pcVar21 != '\0');
          for (puVar4 = *(undefined8 **)(pcVar22 + 0x40); puVar4 != (undefined8 *)0x0;
              puVar4 = (undefined8 *)puVar4[6]) {
            pcVar21 = (char *)*puVar4;
            if (pcVar21 == (char *)0x0) {
              pcVar21 = (char *)0x180d48d24;
              plVar3 = plVar12;
            }
            else {
              plVar3 = (longlong *)puVar4[2];
            }
            if (plVar3 == (longlong *)(pcVar19 + -0x180a03a83)) {
              pcVar9 = pcVar21 + (longlong)plVar3;
              if (pcVar9 <= pcVar21) {
LAB_1803bee65:
                lVar15 = 0x180d48d24;
                if (puVar4[1] != 0) {
                  lVar15 = puVar4[1];
                }
                FUN_180627c50(&puStack_120,lVar15);
                break;
              }
              lVar15 = (longlong)&DAT_180a03a84 - (longlong)pcVar21;
              while (*pcVar21 == pcVar21[lVar15]) {
                pcVar21 = pcVar21 + 1;
                if (pcVar9 <= pcVar21) goto LAB_1803bee65;
              }
            }
          }
          lVar15 = FUN_1800b6de0(_DAT_180c86930,&puStack_120,1);
          uVar2 = _DAT_180c86930;
          if (lVar15 == 0) {
            lVar15 = *(longlong *)(_DAT_180c86898 + 0x2d8);
            if (lVar15 == 0) {
              puStack_100 = &UNK_180a3c3e0;
              uStack_e8 = 0;
              puStack_f8 = (undefined8 *)0x0;
              uStack_f0 = 0;
              puVar4 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
              *(undefined1 *)puVar4 = 0;
              puStack_f8 = puVar4;
              uVar28 = FUN_18064e990(puVar4);
              uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar28);
              *puVar4 = 0x5f64696c61766e69;
              *(undefined4 *)(puVar4 + 1) = 0x6873656d;
              *(undefined1 *)((longlong)puVar4 + 0xc) = 0;
              uStack_f0 = 0xc;
              FUN_1800b6de0(uVar2,&puStack_100,1);
              puStack_100 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
              FUN_18064e900(puVar4);
            }
            puVar16 = &DAT_18098bc73;
            if (puStack_118 != (undefined *)0x0) {
              puVar16 = puStack_118;
            }
            FUN_180627020(&UNK_180a23ad0,puVar16);
            if (param_3 == (longlong *)0x0) {
              uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16);
              plVar17 = (longlong *)FUN_180275090(uVar2);
              plStack_58 = plVar17;
              if (plVar17 != (longlong *)0x0) {
                (**(code **)(*plVar17 + 0x28))(plVar17);
              }
              FUN_180275a60(lVar15,plVar17);
              if (plVar17 != (longlong *)0x0) {
                plStack_a0 = plVar17;
                (**(code **)(*plVar17 + 0x28))(plVar17);
              }
              plStack_a0 = (longlong *)0x0;
              uVar28 = 0;
              if (plVar17 != (longlong *)0x0) {
                (**(code **)(*plVar17 + 0x38))(plVar17);
              }
            }
            else {
              uVar20 = (param_2[1] - *param_2 >> 3) + 1;
              puVar4 = (undefined8 *)param_3[1];
              puVar5 = (undefined8 *)*param_3;
              uVar13 = (longlong)puVar4 - (longlong)puVar5 >> 3;
              if (uVar13 < uVar20) {
                uVar23 = uVar20 - uVar13;
                if (uVar23 <= (ulonglong)(param_3[2] - (longlong)puVar4 >> 3)) {
                  uVar13 = uVar23;
                  if (uVar23 != 0) {
                    for (; uVar13 != 0; uVar13 = uVar13 - 1) {
                      *puVar4 = 0;
                      puVar4 = puVar4 + 1;
                    }
                    puVar4 = (undefined8 *)param_3[1];
                    puVar5 = (undefined8 *)*param_3;
                  }
                  puVar4 = puVar4 + uVar23;
                  puVar6 = puVar5;
                  goto LAB_1803bf352;
                }
                uVar25 = uVar13 * 2;
                if (uVar13 == 0) {
                  uVar25 = 1;
                }
                if (uVar25 < uVar20) {
                  uVar25 = uVar20;
                }
                if (uVar25 == 0) {
                  puVar6 = (undefined8 *)0x0;
                }
                else {
                  puVar6 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,uVar25 * 8);
                  puVar4 = (undefined8 *)param_3[1];
                  puVar5 = (undefined8 *)*param_3;
                }
                if (puVar5 != puVar4) {
                    // WARNING: Subroutine does not return
                  memmove(puVar6,puVar5,(longlong)puVar4 - (longlong)puVar5);
                }
                uVar13 = uVar23;
                puVar4 = puVar6;
                if (uVar23 != 0) {
                  for (; uVar13 != 0; uVar13 = uVar13 - 1) {
                    *puVar4 = 0;
                    puVar4 = puVar4 + 1;
                  }
                }
                if (*param_3 != 0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                *param_3 = (longlong)puVar6;
                param_3[1] = (longlong)(puVar6 + uVar23);
                param_3[2] = (longlong)(puVar6 + uVar25);
              }
              else {
                puVar4 = puVar5 + uVar20;
                puVar6 = puVar5;
LAB_1803bf352:
                param_3[1] = (longlong)puVar4;
              }
              puVar6[param_2[1] - *param_2 >> 3] = 0;
            }
          }
          else {
            plVar17 = *(longlong **)(lVar15 + 0x38);
            lVar18 = 0;
            iVar8 = (int)(*(longlong *)(lVar15 + 0x40) - (longlong)plVar17 >> 4);
            if (0 < iVar8) {
              do {
                if ((*(uint *)(*plVar17 + 0x100) & 0x400000) != 0) {
                  FUN_1802759e0(lVar15,&plStack_e0);
                  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,200,8,3);
                  plVar17 = (longlong *)FUN_18030b420(uVar2,plStack_e0);
                  plStack_68 = plVar17;
                  if (plVar17 != (longlong *)0x0) {
                    (**(code **)(*plVar17 + 0x28))(plVar17);
                    plStack_b8 = plVar17;
                    (**(code **)(*plVar17 + 0x28))(plVar17);
                  }
                  plStack_b8 = (longlong *)0x0;
                  if (plVar17 != (longlong *)0x0) {
                    (**(code **)(*plVar17 + 0x38))(plVar17);
                  }
                  if (plStack_e0 == (longlong *)0x0) goto LAB_1803bf025;
                  lVar15 = *plStack_e0;
                  plVar12 = plStack_e0;
                  goto LAB_1803bf01b;
                }
                lVar18 = lVar18 + 1;
                plVar17 = plVar17 + 2;
              } while (lVar18 < iVar8);
            }
            if ((param_3 == (longlong *)0x0) || (*(longlong *)(pcVar22 + 0x30) != 0)) {
LAB_1803bf07e:
              if ((*(longlong *)(param_1 + 0x18) == 0) || (param_6 == '\0')) {
                uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16);
                plVar17 = (longlong *)FUN_180275370(uVar2,pcVar22);
                plStack_60 = plVar17;
                if (plVar17 != (longlong *)0x0) {
                  (**(code **)(*plVar17 + 0x28))(plVar17);
                }
                FUN_18027ba80(plVar17,param_5);
                if (plVar17 != (longlong *)0x0) {
                  plStack_a8 = plVar17;
                  (**(code **)(*plVar17 + 0x28))(plVar17);
                }
                plStack_a8 = (longlong *)0x0;
                if (plVar17 != (longlong *)0x0) {
                  lVar15 = *plVar17;
                  plVar12 = plVar17;
LAB_1803bf01b:
                  (**(code **)(lVar15 + 0x38))(plVar12);
                }
              }
              else {
                uVar2 = FUN_1802f3a80(param_1,(int)(param_2[1] - *param_2 >> 3) + iVar27,lVar15,
                                      *(undefined8 *)(param_1 + 0x28));
                FUN_180278870(*(undefined8 *)(param_1 + 0x20),uVar2);
                iVar27 = iVar27 + 1;
                plVar17 = plVar12;
              }
            }
            else {
              for (plVar17 = *(longlong **)(pcVar22 + 0x40); plVar17 != (longlong *)0x0;
                  plVar17 = (longlong *)plVar17[6]) {
                lVar18 = 0x180d48d24;
                if (*plVar17 != 0) {
                  lVar18 = *plVar17;
                }
                lVar10 = 0;
                do {
                  lVar11 = lVar10 + 1;
                  if (*(char *)(lVar18 + lVar10) != (&DAT_180a03a84)[lVar10]) goto LAB_1803bf07e;
                  lVar10 = lVar11;
                } while (lVar11 != 5);
                if (plVar17[4] == 0) break;
              }
              uStack_b0 = 0;
              FUN_1802f44a0(param_3,(param_2[1] - *param_2 >> 3) + 1);
              *(longlong *)(*param_3 + (param_2[1] - *param_2 >> 3) * 8) = lVar15;
              plVar17 = plVar12;
            }
          }
LAB_1803bf025:
          puStack_120 = &UNK_180a3c3e0;
          if (puStack_118 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puStack_118 = (undefined *)0x0;
          uStack_108 = uStack_108 & 0xffffffff00000000;
          puStack_120 = &UNK_18098bcb0;
        }
        else if (uVar26 == 1) {
          uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x468,8,3,1,0,iVar27,uVar28);
          plVar17 = (longlong *)FUN_1803dd330(uVar2,pcVar22);
          if (plVar17 != (longlong *)0x0) {
            plStack_c0 = plVar17;
            (**(code **)(*plVar17 + 0x28))(plVar17);
          }
          plStack_c0 = (longlong *)0x0;
        }
        else if (uVar26 == 3) {
          uVar2 = FUN_18062b1e0(_DAT_180c8ed18,200,8,3,3,0,iVar27,uVar28);
          plVar17 = (longlong *)FUN_18030b420(uVar2,0);
          if (plVar17 != (longlong *)0x0) {
            plStack_c8 = plVar17;
            (**(code **)(*plVar17 + 0x28))(plVar17);
          }
          plStack_c8 = (longlong *)0x0;
          (**(code **)(*plVar17 + 0x60))(plVar17,pcVar22);
        }
        else if (uVar26 == 4) {
          uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x168,8,3,4,0,iVar27,uVar28);
          plVar17 = (longlong *)FUN_1802ac390(uVar2);
          plStack_70 = plVar17;
          if (plVar17 != (longlong *)0x0) {
            (**(code **)(*plVar17 + 0x28))(plVar17);
          }
          *(char *)((longlong)plVar17 + 0x164) = '\x01';
          FUN_1802ad110(plVar17,pcVar22);
          plStack_d0 = plVar17;
          (**(code **)(*plVar17 + 0x28))(plVar17);
          plStack_d0 = (longlong *)0x0;
          (**(code **)(*plVar17 + 0x38))(plVar17);
        }
        else {
          plVar17 = plVar12;
          if (uVar26 == 7) {
            plVar17 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x298,8,0xd,7,0,iVar27,uVar28);
            *plVar17 = (longlong)&UNK_180a21690;
            *plVar17 = (longlong)&UNK_180a21720;
            *(undefined4 *)(plVar17 + 1) = 0;
            *plVar17 = (longlong)&UNK_180a14860;
            *(undefined4 *)(plVar17 + 2) = 4;
            plVar17[3] = 0;
            plVar17[4] = 0;
            *(undefined4 *)(plVar17 + 1) = 0;
            plVar17[5] = 0;
            *plVar17 = (longlong)&UNK_180a19770;
            plVar17[0x11] = 0;
            plVar17[0x12] = 0;
            plVar17[0x13] = 0;
            plVar17[0x14] = 0;
            plStack_80 = plVar17 + 0x27;
            *plStack_80 = (longlong)&UNK_18098bcb0;
            plVar17[0x28] = 0;
            *(undefined4 *)(plVar17 + 0x29) = 0;
            *plStack_80 = (longlong)&UNK_180a3c3e0;
            plVar17[0x2a] = 0;
            plVar17[0x28] = 0;
            *(undefined4 *)(plVar17 + 0x29) = 0;
            plVar17[0x2b] = 0;
            plStack_88 = plVar17;
            FUN_1802f6100(plVar17);
            *(undefined4 *)(plVar17 + 1) = 0;
            FUN_1802f6cc0(plVar17,pcVar22);
            plStack_78 = plVar17;
            (**(code **)(*plVar17 + 0x28))(plVar17);
            if ((undefined *)*plVar17 != &UNK_180a19770) {
              (**(code **)((undefined *)*plVar17 + 0x160))(plVar17);
            }
            *(char *)(plVar17 + 0x38) = '\x01';
            plStack_d8 = plVar17;
            (**(code **)(*plVar17 + 0x28))(plVar17);
            plStack_d8 = (longlong *)0x0;
            (**(code **)(*plVar17 + 0x38))(plVar17);
          }
        }
        puVar5 = (undefined8 *)0x0;
        puVar4 = (undefined8 *)param_2[1];
        if (puVar4 < (undefined8 *)param_2[2]) {
          param_2[1] = (longlong)(puVar4 + 1);
          *puVar4 = plVar17;
          if (plVar17 != (longlong *)0x0) {
            (**(code **)(*plVar17 + 0x28))(plVar17);
          }
        }
        else {
          puVar6 = (undefined8 *)*param_2;
          lVar15 = (longlong)puVar4 - (longlong)puVar6 >> 3;
          if (lVar15 == 0) {
            lVar15 = 1;
LAB_1803bf430:
            puVar5 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar15 * 8);
            puVar4 = (undefined8 *)param_2[1];
            puVar6 = (undefined8 *)*param_2;
            puVar24 = puVar5;
          }
          else {
            lVar15 = lVar15 * 2;
            puVar24 = puVar5;
            if (lVar15 != 0) goto LAB_1803bf430;
          }
          for (; puVar6 != puVar4; puVar6 = puVar6 + 1) {
            *puVar5 = *puVar6;
            *puVar6 = 0;
            puVar5 = puVar5 + 1;
          }
          *puVar5 = plVar17;
          if (plVar17 != (longlong *)0x0) {
            (**(code **)(*plVar17 + 0x28))(plVar17);
          }
          plVar12 = (longlong *)param_2[1];
          plVar3 = (longlong *)*param_2;
          if (plVar3 != plVar12) {
            do {
              if ((longlong *)*plVar3 != (longlong *)0x0) {
                (**(code **)(*(longlong *)*plVar3 + 0x38))();
              }
              plVar3 = plVar3 + 1;
            } while (plVar3 != plVar12);
            plVar3 = (longlong *)*param_2;
          }
          if (plVar3 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(plVar3);
          }
          *param_2 = (longlong)puVar24;
          param_2[1] = (longlong)(puVar5 + 1);
          param_2[2] = (longlong)(puVar24 + lVar15);
        }
        if ((param_3 != (longlong *)0x0) && (plVar17 != (longlong *)0x0)) {
          puVar4 = (undefined8 *)param_3[1];
          if (puVar4 < (undefined8 *)param_3[2]) {
            param_3[1] = (longlong)(puVar4 + 1);
            *puVar4 = 0;
          }
          else {
            puVar5 = (undefined8 *)*param_3;
            lVar15 = (longlong)puVar4 - (longlong)puVar5 >> 3;
            if (lVar15 == 0) {
              lVar15 = 1;
LAB_1803bf542:
              puVar6 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar15 * 8,(char)param_3[3]);
              puVar4 = (undefined8 *)param_3[1];
              puVar5 = (undefined8 *)*param_3;
            }
            else {
              lVar15 = lVar15 * 2;
              if (lVar15 != 0) goto LAB_1803bf542;
              puVar6 = (undefined8 *)0x0;
            }
            if (puVar5 != puVar4) {
                    // WARNING: Subroutine does not return
              memmove(puVar6,puVar5,(longlong)puVar4 - (longlong)puVar5);
            }
            *puVar6 = 0;
            if (*param_3 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *param_3 = (longlong)puVar6;
            param_3[1] = (longlong)(puVar6 + 1);
            param_3[2] = (longlong)(puVar6 + lVar15);
          }
        }
        pcVar21 = *(char **)(&UNK_180994200 + lStack_128 * 8);
        if (pcVar21 == (char *)0x0) {
          pcVar22 = *(char **)(pcVar22 + 0x58);
        }
        else {
          cVar1 = *pcVar21;
          pcVar19 = pcVar21;
          while (cVar1 != '\0') {
            pcVar19 = pcVar19 + 1;
            cVar1 = *pcVar19;
          }
          for (pcVar9 = *(char **)(pcVar22 + 0x58); pcVar22 = (char *)0x0, pcVar9 != (char *)0x0;
              pcVar9 = *(char **)(pcVar9 + 0x58)) {
            pcVar14 = *(char **)pcVar9;
            if (pcVar14 == (char *)0x0) {
              pcVar14 = (char *)0x180d48d24;
              pcVar7 = (char *)0x0;
            }
            else {
              pcVar7 = *(char **)(pcVar9 + 0x10);
            }
            if (pcVar7 == pcVar19 + -(longlong)pcVar21) {
              pcVar7 = pcVar7 + (longlong)pcVar14;
              pcVar22 = pcVar9;
              if (pcVar7 <= pcVar14) break;
              lVar15 = (longlong)pcVar21 - (longlong)pcVar14;
              while (*pcVar14 == pcVar14[lVar15]) {
                pcVar14 = pcVar14 + 1;
                if (pcVar7 <= pcVar14) goto LAB_1803bf644;
              }
            }
          }
        }
LAB_1803bf644:
        if (plVar17 != (longlong *)0x0) {
          (**(code **)(*plVar17 + 0x38))(plVar17);
        }
        goto joined_r0x0001803beb6b;
      }
    }
    else {
      cVar1 = *pcVar21;
      pcVar19 = pcVar21;
      while (cVar1 != '\0') {
        pcVar19 = pcVar19 + 1;
        cVar1 = *pcVar19;
      }
      for (pcVar22 = *(char **)(param_4 + 0x30); pcVar22 != (char *)0x0;
          pcVar22 = *(char **)(pcVar22 + 0x58)) {
        pcVar9 = *(char **)pcVar22;
        if (pcVar9 == (char *)0x0) {
          pcVar9 = (char *)0x180d48d24;
          lVar15 = 0;
        }
        else {
          lVar15 = *(longlong *)(pcVar22 + 0x10);
        }
        if (lVar15 == (longlong)pcVar19 - (longlong)pcVar21) {
          pcVar14 = pcVar9 + lVar15;
          if (pcVar14 <= pcVar9) goto joined_r0x0001803beb6b;
          lVar15 = (longlong)pcVar21 - (longlong)pcVar9;
          while (*pcVar9 == pcVar9[lVar15]) {
            pcVar9 = pcVar9 + 1;
            if (pcVar14 <= pcVar9) goto joined_r0x0001803beb6b;
          }
        }
      }
    }
    uVar26 = uVar26 + 1;
    lStack_128 = lStack_128 + 1;
    if (7 < uVar26) {
      if (param_3 != (longlong *)0x0) {
        uStack_98 = 0;
        FUN_1802f44a0(param_3,param_2[1] - *param_2 >> 3,&uStack_98);
      }
      return;
    }
  } while( true );
}






