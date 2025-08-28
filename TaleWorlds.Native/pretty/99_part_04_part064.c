#include "TaleWorlds.Native.Split.h"

// 99_part_04_part064.c - 2 个函数

// 函数: void FUN_1802c07a0(longlong *param_1,longlong param_2,longlong param_3)
void FUN_1802c07a0(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined1 auStack_128 [32];
  longlong *plStack_108;
  longlong *plStack_100;
  undefined4 auStack_f8 [2];
  longlong *plStack_f0;
  undefined *puStack_e8;
  longlong lStack_e0;
  int iStack_d8;
  ulonglong uStack_d0;
  longlong **applStack_c8 [2];
  longlong *plStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_128;
  pcVar7 = (char *)0x0;
  pcVar5 = "body_name";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  for (puVar1 = *(undefined8 **)(param_3 + 0x40); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[6]) {
    pcVar5 = (char *)*puVar1;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x180d48d24;
      pcVar2 = pcVar7;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar6 + -0x180a1885f) {
      pcVar2 = pcVar5 + (longlong)pcVar2;
      if (pcVar2 <= pcVar5) {
LAB_1802c0847:
        lVar4 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar4 = puVar1[1];
        }
        (**(code **)(*param_1 + 0x10))(param_1,lVar4);
        break;
      }
      lVar4 = (longlong)&UNK_180a18860 - (longlong)pcVar5;
      while (*pcVar5 == pcVar5[lVar4]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar2 <= pcVar5) goto LAB_1802c0847;
      }
    }
  }
  puStack_e8 = &UNK_180a3c3e0;
  uStack_d0 = 0;
  lStack_e0 = 0;
  iStack_d8 = 0;
  pcVar5 = "name";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  for (puVar1 = *(undefined8 **)(param_3 + 0x40); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[6]) {
    pcVar5 = (char *)*puVar1;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x180d48d24;
      pcVar2 = pcVar7;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar6 + -0x180a03a83) {
      pcVar2 = pcVar2 + (longlong)pcVar5;
      if (pcVar2 <= pcVar5) {
LAB_1802c08f8:
        lVar4 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar4 = puVar1[1];
        }
        uVar8 = FUN_180627c50(&puStack_e8,lVar4);
        if (iStack_d8 != 0) {
          FUN_1800c48e0(uVar8,&plStack_108,&puStack_e8,1);
          if (plStack_108 == (longlong *)0x0) {
            puStack_a8 = &UNK_1809fcc58;
            puStack_a0 = auStack_90;
            auStack_90[0] = 0;
            uStack_98 = 0xb;
            uVar8 = strcpy_s(auStack_90,0x40,&UNK_180a03008);
            puVar1 = (undefined8 *)FUN_1800c48e0(uVar8,&plStack_100,&puStack_a8,1);
            plVar3 = (longlong *)*puVar1;
            *puVar1 = 0;
            plStack_f0 = plStack_108;
            if (plStack_108 != (longlong *)0x0) {
              lVar4 = *plStack_108;
              plStack_108 = plVar3;
              (**(code **)(lVar4 + 0x38))();
              plVar3 = plStack_108;
            }
            plStack_108 = plVar3;
            if (plStack_100 != (longlong *)0x0) {
              (**(code **)(*plStack_100 + 0x38))();
            }
            puStack_a8 = &UNK_18098bcb0;
          }
          applStack_c8[0] = &plStack_100;
          plStack_100 = plStack_108;
          if (plStack_108 != (longlong *)0x0) {
            (**(code **)(*plStack_108 + 0x28))();
          }
          FUN_1802c0630(param_1,param_2,&plStack_100);
          FUN_1802c0c40(param_1,param_3);
          if (plStack_108 != (longlong *)0x0) {
            (**(code **)(*plStack_108 + 0x38))();
          }
          goto LAB_1802c0ac6;
        }
        break;
      }
      lVar4 = (longlong)&DAT_180a03a84 - (longlong)pcVar5;
      while (*pcVar5 == pcVar5[lVar4]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar2 <= pcVar5) goto LAB_1802c08f8;
      }
    }
  }
  puStack_a8 = &UNK_1809fcc58;
  puStack_a0 = auStack_90;
  auStack_90[0] = 0;
  uStack_98 = 0xb;
  uVar8 = strcpy_s(auStack_90,0x40,&UNK_180a03008);
  FUN_1800c48e0(uVar8,&plStack_f0,&puStack_a8,1);
  applStack_c8[0] = &plStack_100;
  plStack_100 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    (**(code **)(*plStack_f0 + 0x28))();
  }
  FUN_1802c0630(param_1,param_2,&plStack_100);
  if (plStack_f0 != (longlong *)0x0) {
    (**(code **)(*plStack_f0 + 0x38))();
  }
  puStack_a8 = &UNK_18098bcb0;
LAB_1802c0ac6:
  auStack_f8[0] = 0xbf800000;
  pcVar5 = "bb_radius";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  puVar1 = *(undefined8 **)(param_3 + 0x40);
  do {
    if (puVar1 == (undefined8 *)0x0) {
LAB_1802c0b5f:
      if (0 < (int)param_1[2]) {
        plVar3 = (longlong *)FUN_1800b3430(auStack_f8[0],applStack_c8,param_1,1);
        lVar4 = *plVar3;
        *plVar3 = 0;
        plStack_b8 = (longlong *)param_1[7];
        param_1[7] = lVar4;
        if (plStack_b8 != (longlong *)0x0) {
          (**(code **)(*plStack_b8 + 0x38))();
        }
        if (applStack_c8[0] != (longlong **)0x0) {
          (*(code *)(*applStack_c8[0])[7])();
        }
      }
      plVar3 = (longlong *)param_1[5];
      if (plVar3 != (longlong *)0x0) {
        uVar8 = 0x31;
        if ((~(byte)((uint)*(undefined4 *)(param_2 + 0x60) >> 0x1c) & 1) == 0) {
          uVar8 = 1;
        }
        plStack_108 = (longlong *)CONCAT44(plStack_108._4_4_,uVar8);
        (**(code **)(*plVar3 + 0x128))(plVar3,&plStack_108);
      }
      puStack_e8 = &UNK_180a3c3e0;
      if (lStack_e0 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_e0 = 0;
      uStack_d0 = uStack_d0 & 0xffffffff00000000;
      puStack_e8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_128);
    }
    pcVar5 = (char *)*puVar1;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x180d48d24;
      pcVar2 = pcVar7;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar6 + -0x180a18887) {
      pcVar2 = pcVar2 + (longlong)pcVar5;
      if (pcVar2 <= pcVar5) {
LAB_1802c0b35:
        lVar4 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar4 = puVar1[1];
        }
        FUN_18010cbc0(lVar4,&DAT_180a06430,auStack_f8);
        *(undefined4 *)(param_1 + 4) = auStack_f8[0];
        goto LAB_1802c0b5f;
      }
      lVar4 = (longlong)&UNK_180a18888 - (longlong)pcVar5;
      while (*pcVar5 == pcVar5[lVar4]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar2 <= pcVar5) goto LAB_1802c0b35;
      }
    }
    puVar1 = (undefined8 *)puVar1[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802c0c40(longlong param_1,longlong param_2)
void FUN_1802c0c40(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  char *pcVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  char *pcVar15;
  ulonglong uVar16;
  char *pcVar17;
  undefined8 *puStackX_8;
  longlong *plStackX_18;
  longlong *plStackX_20;
  undefined *puVar18;
  byte *pbVar19;
  uint uVar20;
  undefined *puStack_98;
  longlong lStack_90;
  uint uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  longlong lStack_70;
  undefined4 uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pcVar17 = (char *)0x0;
  lVar6 = *(longlong *)(param_1 + 0x28);
  if (lVar6 != 0) {
    uVar16 = *(longlong *)(lVar6 + 0x40) - *(longlong *)(lVar6 + 0x38) >> 4;
    pcVar12 = "mesh";
    do {
      pcVar15 = pcVar12;
      pcVar12 = pcVar15 + 1;
    } while (*pcVar12 != '\0');
    for (puStackX_8 = *(undefined8 **)(param_2 + 0x30); puStackX_8 != (undefined8 *)0x0;
        puStackX_8 = (undefined8 *)puStackX_8[0xb]) {
      pcVar12 = (char *)*puStackX_8;
      if (pcVar12 == (char *)0x0) {
        pcVar12 = (char *)0x180d48d24;
        pcVar5 = pcVar17;
      }
      else {
        pcVar5 = (char *)puStackX_8[2];
      }
      if (pcVar5 == pcVar15 + -0x180a0f3e7) {
        pcVar5 = pcVar5 + (longlong)pcVar12;
        uStack_50 = uVar16;
        if (pcVar5 <= pcVar12) {
LAB_1802c0d10:
          do {
            puStack_98 = &UNK_180a3c3e0;
            uStack_80 = 0;
            lStack_90 = 0;
            uStack_88 = 0;
            pcVar12 = "name";
            do {
              pcVar15 = pcVar12;
              pcVar12 = pcVar15 + 1;
            } while (*pcVar12 != '\0');
            for (puVar13 = (undefined8 *)puStackX_8[8]; puVar13 != (undefined8 *)0x0;
                puVar13 = (undefined8 *)puVar13[6]) {
              pcVar12 = (char *)*puVar13;
              if (pcVar12 == (char *)0x0) {
                pcVar12 = (char *)0x180d48d24;
                pcVar5 = pcVar17;
              }
              else {
                pcVar5 = (char *)puVar13[2];
              }
              if (pcVar5 == pcVar15 + -0x180a03a83) {
                pcVar5 = pcVar5 + (longlong)pcVar12;
                if (pcVar5 <= pcVar12) {
LAB_1802c0da6:
                  lVar6 = 0x180d48d24;
                  if (puVar13[1] != 0) {
                    lVar6 = puVar13[1];
                  }
                  FUN_180627c50(&puStack_98,lVar6);
                  break;
                }
                lVar6 = (longlong)&DAT_180a03a84 - (longlong)pcVar12;
                while (*pcVar12 == pcVar12[lVar6]) {
                  pcVar12 = pcVar12 + 1;
                  if (pcVar5 <= pcVar12) goto LAB_1802c0da6;
                }
              }
            }
            puStack_78 = &UNK_180a3c3e0;
            uStack_60 = 0;
            lStack_70 = 0;
            uStack_68 = 0;
            pcVar12 = "material";
            do {
              pcVar15 = pcVar12;
              pcVar12 = pcVar15 + 1;
            } while (*pcVar12 != '\0');
            for (puVar13 = (undefined8 *)puStackX_8[8]; puVar13 != (undefined8 *)0x0;
                puVar13 = (undefined8 *)puVar13[6]) {
              pcVar12 = (char *)*puVar13;
              if (pcVar12 == (char *)0x0) {
                pcVar12 = (char *)0x180d48d24;
                pcVar5 = pcVar17;
              }
              else {
                pcVar5 = (char *)puVar13[2];
              }
              if (pcVar5 == pcVar15 + -0x180a04ebf) {
                pcVar5 = pcVar5 + (longlong)pcVar12;
                if (pcVar5 <= pcVar12) {
LAB_1802c0e54:
                  lVar6 = 0x180d48d24;
                  if (puVar13[1] != 0) {
                    lVar6 = puVar13[1];
                  }
                  FUN_180627c50(&puStack_78,lVar6);
                  break;
                }
                lVar6 = (longlong)&UNK_180a04ec0 - (longlong)pcVar12;
                while (*pcVar12 == pcVar12[lVar6]) {
                  pcVar12 = pcVar12 + 1;
                  if (pcVar5 <= pcVar12) goto LAB_1802c0e54;
                }
              }
            }
            if ((int)uVar16 != 0) {
              uVar7 = uVar16 & 0xffffffff;
              pcVar12 = pcVar17;
              do {
                lVar6 = *(longlong *)(pcVar12 + *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38))
                ;
                puVar18 = &UNK_180a3c3e0;
                uVar16 = 0;
                pbVar19 = (byte *)0x0;
                uVar20 = 0;
                if (*(int *)(lVar6 + 0x20) != 0) {
                  iVar3 = *(int *)(lVar6 + 0x20) + 1;
                  if (iVar3 < 0x10) {
                    iVar3 = 0x10;
                  }
                  pbVar19 = (byte *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar3,0x13);
                  *pbVar19 = 0;
                  uVar16 = (ulonglong)pbVar19 & 0xffffffffffc00000;
                  uVar8 = 0;
                  if (uVar16 != 0) {
                    lVar9 = uVar16 + 0x80 + ((longlong)pbVar19 - uVar16 >> 0x10) * 0x50;
                    puVar10 = (uint *)(lVar9 - (ulonglong)*(uint *)(lVar9 + 4));
                    if ((*(byte *)((longlong)puVar10 + 0xe) & 2) == 0) {
                      uVar8 = puVar10[7];
                      if (0x3ffffff < puVar10[7]) {
                        uVar8 = *puVar10 << 0x10;
                      }
                    }
                    else {
                      uVar8 = puVar10[7];
                      if (uVar8 < 0x4000000) {
                        uVar14 = (ulonglong)uVar8;
                      }
                      else {
                        uVar14 = (ulonglong)*puVar10 << 0x10;
                      }
                      if (0x3ffffff < uVar8) {
                        uVar8 = *puVar10 << 0x10;
                      }
                      uVar8 = uVar8 - (int)(((longlong)pbVar19 -
                                            (((longlong)((longlong)puVar10 + (-0x80 - uVar16)) /
                                             0x50) * 0x10000 + uVar16)) % uVar14);
                    }
                  }
                  uVar16 = (ulonglong)uVar8;
                  if (0 < *(int *)(lVar6 + 0x20)) {
                    puVar18 = &DAT_18098bc73;
                    if (*(undefined **)(lVar6 + 0x18) != (undefined *)0x0) {
                      puVar18 = *(undefined **)(lVar6 + 0x18);
                    }
                    // WARNING: Subroutine does not return
                    memcpy(pbVar19,puVar18,(longlong)(*(int *)(lVar6 + 0x20) + 1));
                  }
                }
                if ((*(longlong *)(lVar6 + 0x18) != 0) && (uVar20 = 0, pbVar19 != (byte *)0x0)) {
                  *pbVar19 = 0;
                }
                while ((0 < (int)uVar20 && (lVar6 = strstr(pbVar19,&DAT_180a0ff10), lVar6 != 0))) {
                  iVar11 = 6;
                  iVar3 = (int)lVar6 - (int)pbVar19;
                  if (uVar20 < iVar3 + 6U) {
                    iVar11 = uVar20 - iVar3;
                  }
                  uVar8 = iVar3 + iVar11;
                  if (uVar8 < uVar20) {
                    lVar6 = (longlong)(int)uVar8;
                    do {
                      pbVar19[lVar6 - iVar11] = pbVar19[lVar6];
                      uVar8 = uVar8 + 1;
                      lVar6 = lVar6 + 1;
                    } while (uVar8 < uVar20);
                  }
                  uVar20 = uVar20 - iVar11;
                  pbVar19[uVar20] = 0;
                }
                uVar8 = uStack_88;
                if (uVar20 == uStack_88) {
                  if (uVar20 != 0) {
                    pbVar4 = pbVar19;
                    do {
                      pbVar1 = pbVar4 + (lStack_90 - (longlong)pbVar19);
                      uVar8 = (uint)*pbVar4 - (uint)*pbVar1;
                      if (uVar8 != 0) break;
                      pbVar4 = pbVar4 + 1;
                    } while (*pbVar1 != 0);
                  }
LAB_1802c10bd:
                  if (uVar8 == 0) {
                    FUN_1800b30d0(_DAT_180c86930,&plStackX_18,&puStack_78,0,puVar18,pbVar19,uVar20,
                                  uVar16);
                    plVar2 = plStackX_18;
                    if (plStackX_18 != (longlong *)0x0) {
                      plStackX_20 = plStackX_18;
                      (**(code **)(*plStackX_18 + 0x28))(plStackX_18);
                      FUN_180076910(*(undefined8 *)
                                     (pcVar12 + *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38))
                                    ,&plStackX_20);
                      (**(code **)(*plVar2 + 0x38))(plVar2);
                    }
                    if (plStackX_18 != (longlong *)0x0) {
                      (**(code **)(*plStackX_18 + 0x38))();
                    }
                  }
                }
                else if (uVar20 == 0) goto LAB_1802c10bd;
                if (pbVar19 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                pcVar12 = pcVar12 + 0x10;
                uVar7 = uVar7 - 1;
                uVar16 = uStack_50;
              } while (uVar7 != 0);
            }
            pcVar12 = "mesh";
            do {
              pcVar15 = pcVar12;
              pcVar12 = pcVar15 + 1;
            } while (*pcVar12 != '\0');
            for (puStackX_8 = (undefined8 *)puStackX_8[0xb]; puStackX_8 != (undefined8 *)0x0;
                puStackX_8 = (undefined8 *)puStackX_8[0xb]) {
              pcVar12 = (char *)*puStackX_8;
              if (pcVar12 == (char *)0x0) {
                pcVar12 = (char *)0x180d48d24;
                pcVar5 = pcVar17;
              }
              else {
                pcVar5 = (char *)puStackX_8[2];
              }
              if (pcVar5 == pcVar15 + -0x180a0f3e7) {
                pcVar5 = pcVar5 + (longlong)pcVar12;
                if (pcVar5 <= pcVar12) goto LAB_1802c11de;
                lVar6 = (longlong)&UNK_180a0f3e8 - (longlong)pcVar12;
                while (*pcVar12 == pcVar12[lVar6]) {
                  pcVar12 = pcVar12 + 1;
                  if (pcVar5 <= pcVar12) goto LAB_1802c11de;
                }
              }
            }
            puStackX_8 = (undefined8 *)0x0;
LAB_1802c11de:
            puStack_78 = &UNK_180a3c3e0;
            if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            lStack_70 = 0;
            uStack_60 = uStack_60 & 0xffffffff00000000;
            puStack_78 = &UNK_18098bcb0;
            puStack_98 = &UNK_180a3c3e0;
            if (lStack_90 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            if (puStackX_8 == (undefined8 *)0x0) {
              return;
            }
          } while( true );
        }
        lVar6 = (longlong)&UNK_180a0f3e8 - (longlong)pcVar12;
        while (*pcVar12 == pcVar12[lVar6]) {
          pcVar12 = pcVar12 + 1;
          if (pcVar5 <= pcVar12) goto LAB_1802c0d10;
        }
      }
    }
  }
  return;
}



undefined8 * FUN_1802c1260(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  plVar1 = (longlong *)param_1[7];
  param_1[7] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(undefined4 *)(param_1 + 4) = 0xc2c80000;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  return param_1;
}



undefined8 * FUN_1802c12e0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &UNK_180a189e0;
  plVar3 = param_1 + 0xd;
  lVar4 = 4;
  do {
    puVar1 = (undefined8 *)*plVar3;
    if (puVar1 != (undefined8 *)0x0) {
      lVar2 = __RTCastToVoid(puVar1);
      (**(code **)*puVar1)(puVar1,0);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
    }
    *plVar3 = 0;
    plVar3 = plVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  param_1[1] = &UNK_18098bcb0;
  *param_1 = &UNK_180a07218;
  if ((param_2 & 1) != 0) {
    free(param_1,0x88);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




