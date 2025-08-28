#include "TaleWorlds.Native.Split.h"

// 03_rendering_part193.c - 7 个函数

// 函数: void FUN_18037d8b0(undefined4 *param_1,undefined4 *param_2,ulonglong param_3)
void FUN_18037d8b0(undefined4 *param_1,undefined4 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  longlong lVar15;
  bool bVar16;
  longlong *plStackX_10;
  ulonglong uStackX_18;
  undefined1 auStackX_20 [8];
  ulonglong uStack_70;
  longlong alStack_68 [3];
  undefined4 uStack_50;
  
  uVar2 = *(ulonglong *)
           (*(longlong *)
             (*(longlong *)(param_3 + 8) +
             ((ulonglong)(uint)(int)*(char *)(param_2 + 8) %
             (ulonglong)(*(longlong *)(param_3 + 0x10) - *(longlong *)(param_3 + 8) >> 3)) * 8) +
           0x28);
  puVar12 = (ulonglong *)0x0;
  lVar15 = 1;
  if (uVar2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x46);
    puVar8 = *(undefined8 **)(param_1 + 0x4a);
    puVar10 = puVar1;
    if (puVar8 != (undefined8 *)0x0) {
      do {
        if ((ulonglong)puVar8[4] < uVar2) {
          puVar8 = (undefined8 *)*puVar8;
        }
        else {
          puVar10 = puVar8;
          puVar8 = (undefined8 *)puVar8[1];
        }
      } while (puVar8 != (undefined8 *)0x0);
      if ((puVar10 != puVar1) && ((ulonglong)puVar10[4] <= uVar2)) goto LAB_18037da9b;
    }
    uStack_50 = *param_1;
    plStackX_10 = alStack_68;
    alStack_68[0] = 0;
    alStack_68[1] = 0;
    alStack_68[2] = 0;
    uStackX_18 = param_3;
    uStack_70 = uVar2;
    plVar9 = (longlong *)FUN_18062b420(_DAT_180c8ed18,0x48,*(undefined1 *)(param_1 + 0x50));
    puVar14 = (ulonglong *)(plVar9 + 4);
    FUN_18037ad90(puVar14,&uStack_70);
    bVar16 = true;
    puVar8 = puVar1;
    if (*(undefined8 **)(param_1 + 0x4a) != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(param_1 + 0x4a);
      do {
        puVar8 = puVar10;
        bVar16 = *puVar14 < (ulonglong)puVar8[4];
        if (bVar16) {
          puVar10 = (undefined8 *)puVar8[1];
        }
        else {
          puVar10 = (undefined8 *)*puVar8;
        }
      } while (puVar10 != (undefined8 *)0x0);
    }
    puVar10 = puVar8;
    plStackX_10 = plVar9;
    if (bVar16) {
      if (puVar8 == *(undefined8 **)(param_1 + 0x48)) goto LAB_18037da2d;
      puVar10 = (undefined8 *)func_0x00018066b9a0(puVar8);
    }
    if ((ulonglong)puVar10[4] < *puVar14) {
LAB_18037da2d:
      if ((puVar8 == puVar1) || (*puVar14 < (ulonglong)puVar8[4])) {
        lVar15 = 0;
      }
                    // WARNING: Subroutine does not return
      FUN_18066bdc0(plVar9,puVar8,puVar1,lVar15);
    }
    plStackX_10 = plVar9 + 5;
    if (*plStackX_10 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (plVar9 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar9);
    }
    plStackX_10 = alStack_68;
    param_3 = uStackX_18;
    if (alStack_68[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
LAB_18037da9b:
  uVar2 = *(ulonglong *)
           (*(longlong *)
             (*(longlong *)(param_3 + 8) +
             ((ulonglong)(uint)(int)*(char *)(param_2 + 8) %
             (ulonglong)(*(longlong *)(param_3 + 0x10) - *(longlong *)(param_3 + 8) >> 3)) * 8) +
           0x28);
  if (uVar2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x46);
    puVar10 = puVar1;
    puVar8 = *(undefined8 **)(param_1 + 0x4a);
    while (puVar8 != (undefined8 *)0x0) {
      if ((ulonglong)puVar8[4] < uVar2) {
        puVar8 = (undefined8 *)*puVar8;
      }
      else {
        puVar10 = puVar8;
        puVar8 = (undefined8 *)puVar8[1];
      }
    }
    uStackX_18 = uVar2;
    if ((puVar10 == puVar1) || (uVar2 < (ulonglong)puVar10[4])) {
      puVar10 = (undefined8 *)FUN_18037f530(puVar1,&plStackX_10,puVar1,puVar10,&uStackX_18);
      puVar10 = (undefined8 *)*puVar10;
    }
    puVar3 = (undefined4 *)puVar10[6];
    if (puVar3 < (undefined4 *)puVar10[7]) {
      puVar10[6] = puVar3 + 8;
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      *puVar3 = *param_2;
      puVar3[1] = uVar4;
      puVar3[2] = uVar5;
      puVar3[3] = uVar6;
      uVar7 = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(puVar3 + 6) = uVar7;
    }
    else {
      FUN_18037f6b0(puVar10 + 5,param_2);
    }
    puVar1 = (undefined8 *)(param_1 + 0x52);
    puVar10 = puVar1;
    puVar8 = *(undefined8 **)(param_1 + 0x56);
    while (puVar8 != (undefined8 *)0x0) {
      if ((ulonglong)puVar8[4] < uVar2) {
        puVar8 = (undefined8 *)*puVar8;
      }
      else {
        puVar10 = puVar8;
        puVar8 = (undefined8 *)puVar8[1];
      }
    }
    if ((puVar10 == puVar1) || (uVar2 < (ulonglong)puVar10[4])) {
      puVar10 = (undefined8 *)FUN_18037f530(puVar1,auStackX_20);
      puVar10 = (undefined8 *)*puVar10;
    }
    uStackX_18 = CONCAT35(uStackX_18._5_3_,0xff00000000);
    puVar14 = (ulonglong *)puVar10[6];
    if (puVar14 < (ulonglong *)puVar10[7]) {
      puVar10[6] = puVar14 + 1;
      *puVar14 = uStackX_18;
    }
    else {
      puVar13 = (ulonglong *)puVar10[5];
      lVar11 = (longlong)puVar14 - (longlong)puVar13 >> 3;
      if ((lVar11 == 0) || (lVar15 = lVar11 * 2, lVar15 != 0)) {
        puVar12 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,lVar15 * 8,*(undefined1 *)(puVar10 + 8))
        ;
        puVar14 = (ulonglong *)puVar10[6];
        puVar13 = (ulonglong *)puVar10[5];
      }
      if (puVar13 != puVar14) {
                    // WARNING: Subroutine does not return
        memmove(puVar12,puVar13,(longlong)puVar14 - (longlong)puVar13);
      }
      *puVar12 = uStackX_18;
      if (puVar10[5] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puVar10[5] = puVar12;
      puVar10[6] = puVar12 + 1;
      puVar10[7] = puVar12 + lVar15;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18037dc60(int *param_1,longlong param_2,float param_3)
void FUN_18037dc60(int *param_1,longlong param_2,float param_3)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char *pcVar4;
  longlong lVar5;
  undefined *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  float afStackX_18 [2];
  undefined4 auStackX_20 [2];
  int aiStack_b8 [2];
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  int iStack_90;
  int iStack_8c;
  int aiStack_88 [2];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  uStack_80 = 0xfffffffffffffffe;
  pcVar11 = (char *)0x0;
  puStack_b0 = &UNK_180a3c3e0;
  uStack_98 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0;
  auStackX_20[0] = 0;
  pcVar9 = "name";
  do {
    pcVar10 = pcVar9;
    pcVar9 = pcVar10 + 1;
  } while (*pcVar9 != '\0');
  for (puVar8 = *(undefined8 **)(param_2 + 0x40); afStackX_18[0] = param_3,
      puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)puVar8[6]) {
    pcVar9 = (char *)*puVar8;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = (char *)0x180d48d24;
      pcVar4 = pcVar11;
    }
    else {
      pcVar4 = (char *)puVar8[2];
    }
    if (pcVar4 == pcVar10 + -0x180a03a83) {
      pcVar4 = pcVar9 + (longlong)pcVar4;
      if (pcVar4 <= pcVar9) {
LAB_18037dd34:
        lVar5 = 0x180d48d24;
        if (puVar8[1] != 0) {
          lVar5 = puVar8[1];
        }
        uVar12 = FUN_180627c50(&puStack_b0,lVar5);
        lVar5 = _DAT_180c86978;
        if (*(int *)(_DAT_180c86870 + 0x20) == 1) {
          plVar2 = (longlong *)FUN_180058080(_DAT_180c86978,auStack_78,&puStack_b0);
          uVar12 = extraout_XMM0_Da;
          if (*plVar2 == lVar5) break;
        }
        iVar1 = FUN_1800c4620(uVar12,&puStack_b0);
        if ((iVar1 < 0) ||
           ((int)(*(longlong *)(_DAT_180c86978 + 0xd0) - *(longlong *)(_DAT_180c86978 + 200) >> 3)
            <= iVar1)) {
          puVar6 = &DAT_18098bc73;
          if (puStack_a8 != (undefined *)0x0) {
            puVar6 = puStack_a8;
          }
          FUN_180627020(&UNK_180a21880,puVar6);
          iVar1 = 0;
        }
        *param_1 = iVar1;
        break;
      }
      lVar5 = (longlong)&DAT_180a03a84 - (longlong)pcVar9;
      while (*pcVar9 == pcVar9[lVar5]) {
        pcVar9 = pcVar9 + 1;
        if (pcVar4 <= pcVar9) goto LAB_18037dd34;
      }
    }
  }
  pcVar9 = "index";
  do {
    pcVar10 = pcVar9;
    pcVar9 = pcVar10 + 1;
  } while (*pcVar9 != '\0');
  puVar8 = *(undefined8 **)(param_2 + 0x40);
  uVar7 = 0xffffffffffffffff;
  do {
    if (puVar8 == (undefined8 *)0x0) goto LAB_18037de7b;
    pcVar9 = (char *)*puVar8;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = (char *)0x180d48d24;
      pcVar4 = pcVar11;
    }
    else {
      pcVar4 = (char *)puVar8[2];
    }
    if (pcVar4 == pcVar10 + -0x180a0ee37) {
      pcVar4 = pcVar4 + (longlong)pcVar9;
      if (pcVar4 <= pcVar9) {
LAB_18037de35:
        pcVar9 = (char *)0x180d48d24;
        if ((char *)puVar8[1] != (char *)0x0) {
          pcVar9 = (char *)puVar8[1];
        }
        uVar3 = 0xffffffffffffffff;
        do {
          uVar3 = uVar3 + 1;
        } while (pcVar9[uVar3] != '\0');
        if (((uVar3 < 3) || (*pcVar9 != '0')) ||
           (puVar6 = &UNK_180a3cb84, (pcVar9[1] + 0xa8U & 0xdf) != 0)) {
          puVar6 = &UNK_180a063a0;
        }
        FUN_18010cbc0(pcVar9,puVar6,auStackX_20);
LAB_18037de7b:
        pcVar9 = "density";
        do {
          pcVar10 = pcVar9;
          pcVar9 = pcVar10 + 1;
        } while (*pcVar9 != '\0');
        for (puVar8 = *(undefined8 **)(param_2 + 0x40); puVar8 != (undefined8 *)0x0;
            puVar8 = (undefined8 *)puVar8[6]) {
          pcVar9 = (char *)*puVar8;
          if (pcVar9 == (char *)0x0) {
            pcVar9 = (char *)0x180d48d24;
            pcVar4 = pcVar11;
          }
          else {
            pcVar4 = (char *)puVar8[2];
          }
          if (pcVar4 == pcVar10 + -0x180a21987) {
            pcVar4 = pcVar9 + (longlong)pcVar4;
            if (pcVar4 <= pcVar9) {
LAB_18037dee0:
              lVar5 = 0x180d48d24;
              if (puVar8[1] != 0) {
                lVar5 = puVar8[1];
              }
              FUN_18010cbc0(lVar5,&DAT_180a06430,afStackX_18);
              if (0.0 <= afStackX_18[0]) {
                if (2000.0 <= afStackX_18[0]) {
                  afStackX_18[0] = 2000.0;
                }
              }
              else {
                afStackX_18[0] = 0.0;
              }
              param_1[1] = (int)afStackX_18[0];
              break;
            }
            lVar5 = (longlong)&UNK_180a21988 - (longlong)pcVar9;
            while (*pcVar9 == pcVar9[lVar5]) {
              pcVar9 = pcVar9 + 1;
              if (pcVar4 <= pcVar9) goto LAB_18037dee0;
            }
          }
        }
        pcVar9 = "seed_index";
        do {
          pcVar10 = pcVar9;
          pcVar9 = pcVar10 + 1;
        } while (*pcVar9 != '\0');
        for (puVar8 = *(undefined8 **)(param_2 + 0x40); puVar8 != (undefined8 *)0x0;
            puVar8 = (undefined8 *)puVar8[6]) {
          pcVar9 = (char *)*puVar8;
          if (pcVar9 == (char *)0x0) {
            pcVar9 = (char *)0x180d48d24;
            pcVar4 = pcVar11;
          }
          else {
            pcVar4 = (char *)puVar8[2];
          }
          if (pcVar4 == pcVar10 + -0x180a21977) {
            pcVar4 = pcVar4 + (longlong)pcVar9;
            if (pcVar4 <= pcVar9) {
LAB_18037dfa4:
              pcVar9 = (char *)0x180d48d24;
              if ((char *)puVar8[1] != (char *)0x0) {
                pcVar9 = (char *)puVar8[1];
              }
              do {
                uVar7 = uVar7 + 1;
              } while (pcVar9[uVar7] != '\0');
              if (((uVar7 < 3) || (*pcVar9 != '0')) ||
                 (puVar6 = &UNK_180a3cb84, (pcVar9[1] + 0xa8U & 0xdf) != 0)) {
                puVar6 = &UNK_180a063a0;
              }
              FUN_18010cbc0(pcVar9,puVar6,aiStack_b8);
              param_1[2] = aiStack_b8[0];
              break;
            }
            lVar5 = (longlong)&UNK_180a21978 - (longlong)pcVar9;
            while (*pcVar9 == pcVar9[lVar5]) {
              pcVar9 = pcVar9 + 1;
              if (pcVar4 <= pcVar9) goto LAB_18037dfa4;
            }
          }
        }
        pcVar9 = "colony_radius";
        do {
          pcVar10 = pcVar9;
          pcVar9 = pcVar10 + 1;
        } while (*pcVar9 != '\0');
        for (puVar8 = *(undefined8 **)(param_2 + 0x40); puVar8 != (undefined8 *)0x0;
            puVar8 = (undefined8 *)puVar8[6]) {
          pcVar9 = (char *)*puVar8;
          if (pcVar9 == (char *)0x0) {
            pcVar9 = (char *)0x180d48d24;
            pcVar4 = pcVar11;
          }
          else {
            pcVar4 = (char *)puVar8[2];
          }
          if (pcVar4 == pcVar10 + -0x180a21967) {
            pcVar4 = pcVar9 + (longlong)pcVar4;
            if (pcVar4 <= pcVar9) {
LAB_18037e056:
              lVar5 = 0x180d48d24;
              if (puVar8[1] != 0) {
                lVar5 = puVar8[1];
              }
              FUN_18010cbc0(lVar5,&DAT_180a06430,&iStack_90);
              param_1[3] = iStack_90;
              break;
            }
            lVar5 = (longlong)&UNK_180a21968 - (longlong)pcVar9;
            while (*pcVar9 == pcVar9[lVar5]) {
              pcVar9 = pcVar9 + 1;
              if (pcVar4 <= pcVar9) goto LAB_18037e056;
            }
          }
        }
        pcVar9 = "colony_threshold";
        do {
          pcVar10 = pcVar9;
          pcVar9 = pcVar10 + 1;
        } while (*pcVar9 != '\0');
        for (puVar8 = *(undefined8 **)(param_2 + 0x40); puVar8 != (undefined8 *)0x0;
            puVar8 = (undefined8 *)puVar8[6]) {
          pcVar9 = (char *)*puVar8;
          if (pcVar9 == (char *)0x0) {
            pcVar9 = (char *)0x180d48d24;
            pcVar4 = pcVar11;
          }
          else {
            pcVar4 = (char *)puVar8[2];
          }
          if (pcVar4 == pcVar10 + -0x180a2194f) {
            pcVar4 = pcVar4 + (longlong)pcVar9;
            if (pcVar4 <= pcVar9) {
LAB_18037e0f4:
              lVar5 = 0x180d48d24;
              if (puVar8[1] != 0) {
                lVar5 = puVar8[1];
              }
              FUN_18010cbc0(lVar5,&DAT_180a06430,&iStack_8c);
              param_1[4] = iStack_8c;
              break;
            }
            lVar5 = (longlong)&UNK_180a21950 - (longlong)pcVar9;
            while (*pcVar9 == pcVar9[lVar5]) {
              pcVar9 = pcVar9 + 1;
              if (pcVar4 <= pcVar9) goto LAB_18037e0f4;
            }
          }
        }
        lVar5 = FUN_180631960(param_2,&UNK_180a219c8,&iStack_70);
        if (lVar5 != 0) {
          param_1[6] = iStack_70;
          param_1[7] = iStack_6c;
          param_1[8] = iStack_68;
          param_1[9] = iStack_64;
        }
        lVar5 = FUN_180631960(param_2,&UNK_180a219b8,&iStack_60);
        if (lVar5 != 0) {
          param_1[10] = iStack_60;
          param_1[0xb] = iStack_5c;
          param_1[0xc] = iStack_58;
          param_1[0xd] = iStack_54;
        }
        lVar5 = FUN_180631960(param_2,&UNK_180a219a0,&iStack_50);
        if (lVar5 != 0) {
          param_1[0xe] = iStack_50;
          param_1[0xf] = iStack_4c;
          param_1[0x10] = iStack_48;
          param_1[0x11] = iStack_44;
        }
        pcVar9 = "weight_offset";
        do {
          pcVar10 = pcVar9;
          pcVar9 = pcVar10 + 1;
        } while (*pcVar9 != '\0');
        puVar8 = *(undefined8 **)(param_2 + 0x40);
        do {
          if (puVar8 == (undefined8 *)0x0) {
LAB_18037e219:
            puStack_b0 = &UNK_180a3c3e0;
            if (puStack_a8 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            return;
          }
          pcVar9 = (char *)*puVar8;
          if (pcVar9 == (char *)0x0) {
            pcVar9 = (char *)0x180d48d24;
            pcVar4 = pcVar11;
          }
          else {
            pcVar4 = (char *)puVar8[2];
          }
          if (pcVar4 == pcVar10 + -0x180a2198f) {
            pcVar4 = pcVar4 + (longlong)pcVar9;
            if (pcVar4 <= pcVar9) {
LAB_18037e1f0:
              lVar5 = 0x180d48d24;
              if (puVar8[1] != 0) {
                lVar5 = puVar8[1];
              }
              FUN_18010cbc0(lVar5,&DAT_180a06430,aiStack_88);
              param_1[5] = aiStack_88[0];
              goto LAB_18037e219;
            }
            lVar5 = (longlong)&UNK_180a21990 - (longlong)pcVar9;
            while (*pcVar9 == pcVar9[lVar5]) {
              pcVar9 = pcVar9 + 1;
              if (pcVar4 <= pcVar9) goto LAB_18037e1f0;
            }
          }
          puVar8 = (undefined8 *)puVar8[6];
        } while( true );
      }
      lVar5 = (longlong)&UNK_180a0ee38 - (longlong)pcVar9;
      while (*pcVar9 == pcVar9[lVar5]) {
        pcVar9 = pcVar9 + 1;
        if (pcVar4 <= pcVar9) goto LAB_18037de35;
      }
    }
    puVar8 = (undefined8 *)puVar8[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18037e260(ulonglong *param_1,undefined8 param_2,float *param_3,undefined4 param_4,
void FUN_18037e260(ulonglong *param_1,undefined8 param_2,float *param_3,undefined4 param_4,
                  int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong lVar16;
  undefined4 uStack_24;
  
  uVar8 = param_5;
  puVar9 = (undefined8 *)0x0;
  iVar11 = (int)((*param_3 / *(float *)(param_1 + 4)) * 16.0);
  iVar10 = (int)((param_3[1] / *(float *)((longlong)param_1 + 0x24)) * 16.0);
  iVar15 = 0;
  iVar12 = iVar15;
  if ((-1 < iVar11) && (iVar12 = iVar11, 0xf < iVar11)) {
    iVar12 = 0xf;
  }
  if ((-1 < iVar10) && (iVar15 = iVar10, 0xf < iVar10)) {
    iVar15 = 0xf;
  }
  uVar2 = *(undefined8 *)param_3;
  uVar3 = *(undefined8 *)(param_3 + 2);
  puVar13 = (undefined8 *)param_1[1];
  uVar6 = *(undefined8 *)(param_3 + 4);
  uVar4 = *(undefined8 *)(param_3 + 4);
  uVar7 = *(undefined8 *)(param_3 + 6);
  uVar5 = *(undefined8 *)(param_3 + 6);
  uVar1 = *(undefined8 *)(param_3 + 8);
  if (puVar13 < (undefined8 *)param_1[2]) {
    param_1[1] = (ulonglong)(puVar13 + 9);
    *puVar13 = param_2;
    puVar13[1] = uVar2;
    puVar13[2] = uVar3;
    puVar13[3] = uVar4;
    puVar13[4] = uVar5;
    puVar13[5] = uVar1;
    *(int *)(puVar13 + 6) = iVar12;
    *(int *)((longlong)puVar13 + 0x34) = iVar15;
    *(undefined4 *)(puVar13 + 7) = param_4;
    *(undefined4 *)((longlong)puVar13 + 0x3c) = 0;
    puVar13[8] = CONCAT44(uStack_24,param_5);
    puVar13 = (undefined8 *)param_1[1];
    puVar9 = (undefined8 *)*param_1;
    goto FUN_18037e458;
  }
  puVar14 = (undefined8 *)*param_1;
  lVar16 = ((longlong)puVar13 - (longlong)puVar14) / 0x48;
  if (lVar16 == 0) {
    lVar16 = 1;
LAB_18037e3a1:
    puVar9 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar16 * 0x48,(char)param_1[3]);
    puVar14 = (undefined8 *)*param_1;
    puVar13 = (undefined8 *)param_1[1];
  }
  else {
    lVar16 = lVar16 * 2;
    if (lVar16 != 0) goto LAB_18037e3a1;
  }
  if (puVar14 != puVar13) {
                    // WARNING: Subroutine does not return
    memmove(puVar9,puVar14,(longlong)puVar13 - (longlong)puVar14);
  }
  puVar13 = puVar9 + 9;
  *puVar9 = param_2;
  puVar9[1] = uVar2;
  puVar9[2] = uVar3;
  puVar9[3] = uVar6;
  puVar9[4] = uVar7;
  puVar9[5] = uVar1;
  *(int *)(puVar9 + 6) = iVar12;
  *(int *)((longlong)puVar9 + 0x34) = iVar15;
  *(undefined4 *)(puVar9 + 7) = param_4;
  *(undefined4 *)((longlong)puVar9 + 0x3c) = 0;
  puVar9[8] = CONCAT44(uStack_24,uVar8);
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (ulonglong)puVar9;
  param_1[2] = (ulonglong)(puVar9 + lVar16 * 9);
  param_1[1] = (ulonglong)puVar13;
FUN_18037e458:
  param_5 = (int)(((longlong)puVar13 - (longlong)puVar9) / 0x48) + -1;
  FUN_1800571e0(param_1 + (longlong)(iVar12 * 0x10 + iVar15) * 4 + 5,&param_5);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18037e372(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
void FUN_18037e372(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 auVar1 [16];
  longlong in_RAX;
  longlong lVar2;
  longlong *unaff_RBX;
  int unaff_EBP;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong unaff_R12;
  undefined8 *unaff_R14;
  undefined8 uStackX_20;
  int in_stack_000000b0;
  
  lVar2 = SUB168(SEXT816(in_RAX) * SEXT816(param_1 - param_4),8);
  lVar2 = (lVar2 >> 2) - (lVar2 >> 0x3f);
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar2 * 2;
    if (lVar2 == 0) goto LAB_18037e3c4;
  }
  unaff_R14 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 0x48,(char)unaff_RBX[3]);
  param_4 = *unaff_RBX;
  unaff_RDI = unaff_RBX[1];
LAB_18037e3c4:
  if (param_4 != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(unaff_R14,param_4,unaff_RDI - param_4);
  }
  *unaff_R14 = uStackX_20;
  unaff_R14[1] = param_5;
  unaff_R14[2] = param_6;
  unaff_R14[3] = param_7;
  unaff_R14[4] = param_8;
  unaff_R14[5] = param_9;
  *(undefined4 *)(unaff_R14 + 6) = (undefined4)param_10;
  *(undefined4 *)((longlong)unaff_R14 + 0x34) = param_10._4_4_;
  *(undefined4 *)(unaff_R14 + 7) = (undefined4)param_11;
  *(undefined4 *)((longlong)unaff_R14 + 0x3c) = param_11._4_4_;
  unaff_R14[8] = param_12;
  if (*unaff_RBX == 0) {
    *unaff_RBX = (longlong)unaff_R14;
    unaff_RBX[2] = (longlong)(unaff_R14 + lVar2 * 9);
    unaff_RBX[1] = (longlong)(unaff_R14 + 9);
    auVar1 = SEXT816(unaff_R12) * SEXT816((longlong)(unaff_R14 + 9) - (longlong)unaff_R14);
    in_stack_000000b0 = ((int)(auVar1._8_8_ >> 2) - (auVar1._12_4_ >> 0x1f)) + -1;
    FUN_1800571e0(unaff_RBX + (longlong)(unaff_ESI * 0x10 + unaff_EBP) * 4 + 5,&stack0x000000b0);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18037e458(void)
void FUN_18037e458(void)

{
  undefined1 auVar1 [16];
  longlong unaff_RBX;
  int unaff_EBP;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R14;
  int iStack00000000000000b0;
  
  auVar1 = SEXT816(unaff_R12) * SEXT816(unaff_RDI - unaff_R14);
  iStack00000000000000b0 = ((int)(auVar1._8_8_ >> 2) - (auVar1._12_4_ >> 0x1f)) + -1;
  FUN_1800571e0(unaff_RBX + 0x28 + (longlong)(unaff_ESI * 0x10 + unaff_EBP) * 0x20,&stack0x000000b0)
  ;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18037e4c0(longlong *param_1,ulonglong *param_2)
void FUN_18037e4c0(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  int aiStackX_8 [2];
  undefined8 uVar7;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int *piStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined *puStack_50;
  undefined *puStack_48;
  
  uVar7 = 0xfffffffffffffffe;
  aiStackX_8[0] = 0;
  do {
    puStack_50 = &UNK_18037ffb0;
    puStack_48 = &UNK_18037ffa0;
    uStack_70 = SUB84(aiStackX_8,0);
    uStack_68 = SUB84(param_1,0);
    uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
    uStack_58 = uStack_68;
    uStack_54 = uStack_64;
    piStack_60 = aiStackX_8;
    FUN_18015b810(uStack_70,0,8,1,0xffffffffffffffff,&piStack_60,uVar7);
    aiStackX_8[0] = aiStackX_8[0] + 1;
  } while (aiStackX_8[0] < 2);
  iVar5 = 0;
  lVar1 = *param_1;
  lVar6 = param_1[1] - lVar1 >> 0x3f;
  if ((param_1[1] - lVar1) / 0x48 + lVar6 != lVar6) {
    lVar6 = 0;
    do {
      if (*(int *)(lVar6 + 0x3c + lVar1) == 0) {
        piVar4 = (int *)param_2[1];
        if (piVar4 < (int *)param_2[2]) {
          param_2[1] = (ulonglong)(piVar4 + 1);
          *piVar4 = iVar5;
        }
        else {
          piVar3 = (int *)*param_2;
          lVar1 = (longlong)piVar4 - (longlong)piVar3 >> 2;
          if (lVar1 == 0) {
            lVar1 = 1;
LAB_18037e5ea:
            piVar2 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 4,(char)param_2[3]);
            piVar4 = (int *)param_2[1];
            piVar3 = (int *)*param_2;
          }
          else {
            lVar1 = lVar1 * 2;
            if (lVar1 != 0) goto LAB_18037e5ea;
            piVar2 = (int *)0x0;
          }
          if (piVar3 != piVar4) {
                    // WARNING: Subroutine does not return
            memmove(piVar2,piVar3,(longlong)piVar4 - (longlong)piVar3);
          }
          *piVar2 = iVar5;
          if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *param_2 = (ulonglong)piVar2;
          param_2[1] = (ulonglong)(piVar2 + 1);
          param_2[2] = (ulonglong)(piVar2 + lVar1);
        }
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x48;
      lVar1 = *param_1;
    } while ((ulonglong)(longlong)iVar5 < (ulonglong)((param_1[1] - lVar1) / 0x48));
  }
  return;
}





// 函数: void FUN_18037e6a0(undefined8 *param_1,int param_2,int param_3)
void FUN_18037e6a0(undefined8 *param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int *piVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  int *piVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  longlong lStack_50;
  ulonglong uStack_48;
  
  if (param_2 < param_3) {
    iVar14 = param_2 * 2;
    uStack_48 = (ulonglong)(uint)(param_3 - param_2);
    do {
      lStack_50 = 0x10;
      lVar11 = (longlong)(*(int *)*param_1 + iVar14) << 9;
      do {
        piVar4 = *(int **)(lVar11 + 0x30 + param_1[1]);
        for (piVar19 = *(int **)(lVar11 + 0x28 + param_1[1]); piVar19 != piVar4;
            piVar19 = piVar19 + 1) {
          iVar2 = *piVar19;
          lVar17 = (longlong)iVar2;
          lVar5 = *(longlong *)param_1[1];
          if ((*(int *)(lVar5 + 0x3c + lVar17 * 0x48) == 0) &&
             (iVar10 = *(int *)(lVar5 + 0x30 + lVar17 * 0x48), iVar12 = iVar10 + -1,
             iVar12 < iVar10 + 2)) {
            uVar18 = 0;
            do {
              iVar3 = *(int *)(lVar5 + 0x34 + lVar17 * 0x48);
              iVar10 = iVar3 + -1;
              if (iVar10 < iVar3 + 2) {
                uVar13 = (ulonglong)iVar10;
                do {
                  uVar8 = uVar18;
                  if ((-1 < iVar12) && (uVar8 = (longlong)iVar12, 0xf < iVar12)) {
                    uVar8 = 0xf;
                  }
                  uVar16 = uVar18;
                  if ((-1 < iVar10) && (uVar16 = uVar13, 0xf < iVar10)) {
                    uVar16 = 0xf;
                  }
                  lVar9 = (uVar8 * 0x10 + uVar16) * 0x20;
                  piVar15 = *(int **)(lVar9 + 0x28 + param_1[1]);
                  piVar6 = *(int **)(lVar9 + 0x30 + param_1[1]);
                  uVar8 = (ulonglong)((longlong)piVar6 + (3 - (longlong)piVar15)) >> 2;
                  if (piVar6 < piVar15) {
                    uVar8 = uVar18;
                  }
                  uVar16 = uVar18;
                  if (uVar8 != 0) {
                    do {
                      lVar9 = (longlong)*piVar15;
                      if (((*piVar15 != iVar2) &&
                          (lVar7 = *(longlong *)param_1[1],
                          *(int *)(lVar7 + 0x3c + lVar9 * 0x48) == 0)) &&
                         (fVar22 = *(float *)(lVar5 + 0xc + lVar17 * 0x48) -
                                   *(float *)(lVar7 + 0xc + lVar9 * 0x48),
                         fVar21 = *(float *)(lVar5 + 8 + lVar17 * 0x48) -
                                  *(float *)(lVar7 + 8 + lVar9 * 0x48),
                         fVar20 = *(float *)(lVar5 + 0x10 + lVar17 * 0x48) -
                                  *(float *)(lVar7 + 0x10 + lVar9 * 0x48),
                         fVar1 = *(float *)(lVar5 + 0x40 + lVar17 * 0x48),
                         fVar22 * fVar22 + fVar21 * fVar21 + fVar20 * fVar20 < fVar1 * fVar1)) {
                        *(undefined4 *)(lVar7 + 0x3c + lVar9 * 0x48) = 1;
                      }
                      piVar15 = piVar15 + 1;
                      uVar16 = uVar16 + 1;
                    } while (uVar16 != uVar8);
                  }
                  iVar10 = iVar10 + 1;
                  uVar13 = uVar13 + 1;
                } while (iVar10 < *(int *)(lVar5 + 0x34 + lVar17 * 0x48) + 2);
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < *(int *)(lVar5 + 0x30 + lVar17 * 0x48) + 2);
          }
        }
        lVar11 = lVar11 + 0x20;
        lStack_50 = lStack_50 + -1;
      } while (lStack_50 != 0);
      iVar14 = iVar14 + 2;
      uStack_48 = uStack_48 - 1;
    } while (uStack_48 != 0);
  }
  return;
}





