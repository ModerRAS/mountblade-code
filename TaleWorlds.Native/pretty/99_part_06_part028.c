#include "TaleWorlds.Native.Split.h"

// 99_part_06_part028.c - 4 个函数

// 函数: void FUN_1803bf690(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
void FUN_1803bf690(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  char *pcVar6;
  undefined *puVar7;
  int *piVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  char *pcVar14;
  undefined8 *puVar15;
  char *pcVar16;
  ulonglong uVar17;
  int aiStackX_10 [2];
  longlong lStackX_18;
  undefined8 uStackX_20;
  longlong lStack_78;
  longlong lStack_70;
  
  iVar10 = 0;
  if (param_2[1] - *param_2 >> 3 != 0) {
    lVar13 = 0;
    lStack_78 = 0;
    lStack_70 = 0;
    uVar17 = 0;
    lStackX_18 = param_3;
    uStackX_20 = param_4;
    do {
      plVar9 = (longlong *)0x0;
      if (param_6 != 0) {
        for (piVar8 = *(int **)(*(longlong *)(param_6 + 8) +
                               (uVar17 % (*(ulonglong *)(param_6 + 0x10) & 0xffffffff)) * 8);
            piVar8 != (int *)0x0; piVar8 = *(int **)(piVar8 + 4)) {
          if (iVar10 == *piVar8) {
            if (piVar8 != *(int **)(*(longlong *)(param_6 + 8) + *(ulonglong *)(param_6 + 0x10) * 8)
               ) {
              iVar3 = 0;
              goto LAB_1803bf774;
            }
            break;
          }
        }
      }
      plVar9 = *(longlong **)(*param_1 + (lStack_70 - lVar13) * 8);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x28))(plVar9);
      }
      iVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
LAB_1803bf774:
      puVar11 = (undefined8 *)0x0;
      lVar5 = param_2[1] - *param_2 >> 3;
      if (lVar5 != 0) {
        if (lVar5 == 1) {
          pcVar16 = *(char **)(&UNK_180994200 + (longlong)iVar3 * 8);
          if (pcVar16 == (char *)0x0) {
            puVar11 = *(undefined8 **)(lStackX_18 + 0x30);
          }
          else {
            cVar2 = *pcVar16;
            pcVar14 = pcVar16;
            while (cVar2 != '\0') {
              pcVar14 = pcVar14 + 1;
              cVar2 = *pcVar14;
            }
            for (puVar11 = *(undefined8 **)(lStackX_18 + 0x30); puVar11 != (undefined8 *)0x0;
                puVar11 = (undefined8 *)puVar11[0xb]) {
              pcVar6 = (char *)*puVar11;
              if (pcVar6 == (char *)0x0) {
                lVar5 = 0;
                pcVar6 = (char *)0x180d48d24;
              }
              else {
                lVar5 = puVar11[2];
              }
              if (lVar5 == (longlong)pcVar14 - (longlong)pcVar16) {
                pcVar1 = pcVar6 + lVar5;
                if (pcVar1 <= pcVar6) goto LAB_1803bfa1e;
                lVar5 = (longlong)pcVar16 - (longlong)pcVar6;
                while (*pcVar6 == pcVar6[lVar5]) {
                  pcVar6 = pcVar6 + 1;
                  if (pcVar1 <= pcVar6) goto LAB_1803bfa1e;
                }
              }
            }
            puVar11 = (undefined8 *)0x0;
          }
        }
        else {
          pcVar16 = *(char **)(&UNK_180994200 + (longlong)iVar3 * 8);
          lVar13 = lStack_78;
          if (pcVar16 == (char *)0x0) {
            puVar12 = *(undefined8 **)(lStackX_18 + 0x30);
LAB_1803bf8a2:
            if (puVar12 != (undefined8 *)0x0) {
              while (puVar11 == (undefined8 *)0x0) {
                aiStackX_10[0] = 0;
                pcVar16 = "_index_";
                do {
                  pcVar14 = pcVar16;
                  pcVar16 = pcVar14 + 1;
                } while (*pcVar16 != '\0');
                puVar15 = (undefined8 *)puVar12[8];
LAB_1803bf8e0:
                if (puVar15 != (undefined8 *)0x0) {
                  pcVar16 = (char *)*puVar15;
                  if (pcVar16 == (char *)0x0) {
                    pcVar6 = (char *)0x0;
                    pcVar16 = (char *)0x180d48d24;
                  }
                  else {
                    pcVar6 = (char *)puVar15[2];
                  }
                  if (pcVar6 != pcVar14 + -0x180a1692f) goto LAB_1803bf9cf;
                  pcVar6 = pcVar6 + (longlong)pcVar16;
                  if (pcVar16 < pcVar6) {
                    lVar5 = (longlong)&UNK_180a16930 - (longlong)pcVar16;
                    while (*pcVar16 == pcVar16[lVar5]) {
                      pcVar16 = pcVar16 + 1;
                      if (pcVar6 <= pcVar16) goto LAB_1803bf934;
                    }
                    goto LAB_1803bf9cf;
                  }
LAB_1803bf934:
                  pcVar16 = (char *)0x180d48d24;
                  if ((char *)puVar15[1] != (char *)0x0) {
                    pcVar16 = (char *)puVar15[1];
                  }
                  uVar4 = 0xffffffffffffffff;
                  do {
                    uVar4 = uVar4 + 1;
                  } while (pcVar16[uVar4] != '\0');
                  if (((uVar4 < 3) || (*pcVar16 != '0')) ||
                     (puVar7 = &UNK_180a3cb84, (pcVar16[1] + 0xa8U & 0xdf) != 0)) {
                    puVar7 = &UNK_180a063a0;
                  }
                  FUN_18010cbc0(pcVar16,puVar7,aiStackX_10);
                  if (aiStackX_10[0] == iVar10) {
                    puVar11 = puVar12;
                  }
                }
                pcVar16 = *(char **)(&UNK_180994200 + (longlong)iVar3 * 8);
                if (pcVar16 != (char *)0x0) {
                  cVar2 = *pcVar16;
                  pcVar14 = pcVar16;
                  while (cVar2 != '\0') {
                    pcVar14 = pcVar14 + 1;
                    cVar2 = *pcVar14;
                  }
                  while (puVar12 = (undefined8 *)puVar12[0xb], puVar12 != (undefined8 *)0x0) {
                    pcVar6 = (char *)*puVar12;
                    if (pcVar6 == (char *)0x0) {
                      lVar5 = 0;
                      pcVar6 = (char *)0x180d48d24;
                    }
                    else {
                      lVar5 = puVar12[2];
                    }
                    if (lVar5 == (longlong)pcVar14 - (longlong)pcVar16) {
                      pcVar1 = pcVar6 + lVar5;
                      if (pcVar1 <= pcVar6) goto LAB_1803bfa0b;
                      lVar5 = (longlong)pcVar16 - (longlong)pcVar6;
                      while (*pcVar6 == pcVar6[lVar5]) {
                        pcVar6 = pcVar6 + 1;
                        if (pcVar1 <= pcVar6) goto LAB_1803bfa0b;
                      }
                    }
                  }
                  break;
                }
                puVar12 = (undefined8 *)puVar12[0xb];
LAB_1803bfa0b:
                if (puVar12 == (undefined8 *)0x0) break;
              }
            }
          }
          else {
            cVar2 = *pcVar16;
            pcVar14 = pcVar16;
            while (cVar2 != '\0') {
              pcVar14 = pcVar14 + 1;
              cVar2 = *pcVar14;
            }
            for (puVar12 = *(undefined8 **)(lStackX_18 + 0x30); puVar12 != (undefined8 *)0x0;
                puVar12 = (undefined8 *)puVar12[0xb]) {
              pcVar6 = (char *)*puVar12;
              if (pcVar6 == (char *)0x0) {
                lVar5 = 0;
                pcVar6 = (char *)0x180d48d24;
              }
              else {
                lVar5 = puVar12[2];
              }
              if (lVar5 == (longlong)pcVar14 - (longlong)pcVar16) {
                pcVar1 = pcVar6 + lVar5;
                if (pcVar1 <= pcVar6) goto LAB_1803bf8a2;
                lVar5 = (longlong)pcVar16 - (longlong)pcVar6;
                while (*pcVar6 == pcVar6[lVar5]) {
                  pcVar6 = pcVar6 + 1;
                  if (pcVar1 <= pcVar6) goto LAB_1803bf8a2;
                }
              }
            }
          }
        }
      }
LAB_1803bfa1e:
      if (plVar9 == (longlong *)0x0) {
        if (puVar11 != (undefined8 *)0x0) {
          for (piVar8 = *(int **)(*(longlong *)(param_6 + 8) +
                                 (uVar17 % (ulonglong)*(uint *)(param_6 + 0x10)) * 8);
              piVar8 != (int *)0x0; piVar8 = *(int **)(piVar8 + 4)) {
            if (iVar10 == *piVar8) goto LAB_1803bfab5;
          }
          piVar8 = *(int **)(*(longlong *)(param_6 + 8) + *(longlong *)(param_6 + 0x10) * 8);
LAB_1803bfab5:
          FUN_180278870(param_5,*(undefined8 *)(piVar8 + 2),puVar11);
        }
      }
      else {
        if (puVar11 != (undefined8 *)0x0) {
          (**(code **)(*plVar9 + 0x60))(plVar9);
        }
        iVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
        if (iVar3 == 0) {
          FUN_18027ba80();
        }
        else {
          iVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
          if ((iVar3 == 7) && ((undefined *)*plVar9 != &UNK_180a19770)) {
            (**(code **)((undefined *)*plVar9 + 0x160))(plVar9);
          }
        }
      }
      if (param_6 != 0) {
        for (piVar8 = *(int **)(*(longlong *)(param_6 + 8) +
                               (uVar17 % (*(ulonglong *)(param_6 + 0x10) & 0xffffffff)) * 8);
            piVar8 != (int *)0x0; piVar8 = *(int **)(piVar8 + 4)) {
          if (iVar10 == *piVar8) {
            if (piVar8 != *(int **)(*(longlong *)(param_6 + 8) + *(ulonglong *)(param_6 + 0x10) * 8)
               ) {
              lVar13 = lVar13 + 1;
              lStack_78 = lVar13;
            }
            break;
          }
        }
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      iVar10 = iVar10 + 1;
      lStack_70 = lStack_70 + 1;
      uVar17 = (ulonglong)iVar10;
    } while (uVar17 < (ulonglong)(param_2[1] - *param_2 >> 3));
  }
  return;
LAB_1803bf9cf:
  puVar15 = (undefined8 *)puVar15[6];
  goto LAB_1803bf8e0;
}






// 函数: void FUN_1803bfb60(undefined1 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
void FUN_1803bfb60(undefined1 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  int param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar10;
  undefined8 uStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  ulonglong uVar9;
  
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x2e5) == '\x04') {
    puVar2 = (undefined8 *)FUN_1804c1300(param_2 + 0x60,0x60);
    uVar9 = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = 1;
    puVar2[6] = 0;
    puVar2[8] = 0;
    pcVar3 = "game_entity";
    do {
      pcVar5 = pcVar3;
      pcVar3 = pcVar5 + 1;
    } while (*pcVar3 != '\0');
    *puVar2 = &UNK_180a0b680;
    puVar2[2] = pcVar5 + -0x180a0b67f;
    FUN_1803bff20(param_1,param_2,puVar2);
    FUN_1803c05d0(param_1,param_2,puVar2);
    FUN_1803c11d0(param_1,param_2,puVar2);
    FUN_1803c1470(param_1,param_2,puVar2);
    FUN_180381360(*(longlong *)(param_1 + 8) + 0x110,param_2,puVar2,
                  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x268));
    FUN_1803c0180(param_1,param_2,puVar2);
    lVar7 = *(longlong *)(param_1 + 8);
    lVar1 = *(longlong *)(lVar7 + 0x268);
    if (lVar1 == 0) {
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 3;
      uStack_70 = 0;
      lStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 3;
      plVar6 = (longlong *)(*(longlong *)(param_1 + 8) + 0xf0);
      if (*(longlong *)(*(longlong *)(param_1 + 8) + 0xf8) - *plVar6 >> 3 != 0) {
        FUN_1803c1870(plVar6,&uStack_50,&uStack_70,param_2,puVar2,param_4);
      }
    }
    else if (*(longlong *)(lVar7 + 0xf8) - *(longlong *)(lVar7 + 0xf0) >> 3 != 0) {
      FUN_1803c1870((longlong *)(lVar7 + 0xf0),lVar1 + 0xf0,lVar1 + 0xb0,param_2,puVar2,param_4);
    }
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x260);
    if (lVar7 != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x268);
      uVar10 = uVar9;
      if (lVar1 != 0) {
        uVar10 = *(ulonglong *)(lVar1 + 0x260);
      }
      FUN_1802fef20(lVar7,param_2,puVar2,uVar10,param_4);
    }
    FUN_1803c1e40(param_1,param_2,puVar2);
    if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c8) -
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) >> 3 != 0) {
      puVar4 = (undefined8 *)FUN_1804c1300(param_2 + 0x60,0x60);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[4] = 0;
      *(undefined4 *)(puVar4 + 5) = 1;
      puVar4[6] = 0;
      puVar4[8] = 0;
      pcVar3 = "children";
      do {
        pcVar5 = pcVar3;
        pcVar3 = pcVar5 + 1;
      } while (*pcVar3 != '\0');
      *puVar4 = &UNK_180a18038;
      puVar4[2] = pcVar5 + -0x180a18037;
      lVar7 = *(longlong *)(param_1 + 8);
      uVar10 = uVar9;
      if (*(longlong *)(lVar7 + 0x1c8) - *(longlong *)(lVar7 + 0x1c0) >> 3 != 0) {
        do {
          lVar1 = *(longlong *)(uVar10 + *(longlong *)(lVar7 + 0x1c0));
          if ((*(uint *)(lVar1 + 0x2ac) & 0x20000) == 0) {
            uStack_70 = CONCAT71(uStack_70._1_7_,*param_1);
            lStack_68 = lVar1;
            FUN_1803bfb60(&uStack_70,param_2,puVar4,param_4,uVar9);
            lVar7 = *(longlong *)(param_1 + 8);
          }
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          uVar10 = uVar10 + 8;
        } while ((ulonglong)(longlong)(int)uVar8 <
                 (ulonglong)(*(longlong *)(lVar7 + 0x1c8) - *(longlong *)(lVar7 + 0x1c0) >> 3));
      }
      if ((puVar4[6] != 0) || (puVar4[8] != 0)) {
        if (puVar2[6] == 0) {
          puVar4[10] = 0;
          puVar2[6] = puVar4;
        }
        else {
          puVar4[10] = puVar2[7];
          *(undefined8 **)(puVar2[7] + 0x58) = puVar4;
        }
        puVar2[7] = puVar4;
        puVar4[4] = puVar2;
        puVar4[0xb] = 0;
      }
    }
    FUN_1803c1a30(param_1,param_2,puVar2);
    FUN_1803c21c0(param_1,param_2,puVar2);
    if ((*(longlong *)(*(longlong *)(param_1 + 8) + 0x268) != 0) && (param_5 != -1)) {
      if ((puVar2[6] == 0) && (puVar2[8] == 0)) {
        return;
      }
      FUN_180630c80(param_2,puVar2,&UNK_180a16930);
    }
    if (*(longlong *)(param_3 + 0x30) == 0) {
      puVar2[10] = 0;
      *(undefined8 **)(param_3 + 0x30) = puVar2;
    }
    else {
      puVar2[10] = *(undefined8 *)(param_3 + 0x38);
      *(undefined8 **)(*(longlong *)(param_3 + 0x38) + 0x58) = puVar2;
    }
    *(undefined8 **)(param_3 + 0x38) = puVar2;
    puVar2[4] = param_3;
    puVar2[0xb] = 0;
  }
  return;
}






// 函数: void FUN_1803bff20(longlong param_1,undefined8 param_2,undefined8 param_3)
void FUN_1803bff20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined *puVar7;
  longlong lVar8;
  undefined *puVar9;
  longlong lVar10;
  bool bVar11;
  
  lVar10 = *(longlong *)(param_1 + 8);
  lVar8 = *(longlong *)(lVar10 + 0x268);
  if (lVar8 == 0) {
LAB_1803bff9f:
    puVar9 = &DAT_18098bc73;
    if (*(undefined **)(lVar10 + 0x290) != (undefined *)0x0) {
      puVar9 = *(undefined **)(lVar10 + 0x290);
    }
    FUN_180630b20(param_2,param_3,&DAT_180a03a84,puVar9);
    lVar10 = *(longlong *)(param_1 + 8);
  }
  else {
    iVar4 = *(int *)(lVar10 + 0x298);
    iVar6 = *(int *)(lVar8 + 0x298);
    if (iVar4 == iVar6) {
      if (iVar4 != 0) {
        pbVar5 = *(byte **)(lVar10 + 0x290);
        lVar8 = *(longlong *)(lVar8 + 0x290) - (longlong)pbVar5;
        do {
          pbVar1 = pbVar5 + lVar8;
          iVar6 = (uint)*pbVar5 - (uint)*pbVar1;
          if (iVar6 != 0) break;
          pbVar5 = pbVar5 + 1;
        } while (*pbVar1 != 0);
      }
    }
    else if (iVar4 != 0) goto LAB_1803bff9f;
    if (iVar6 != 0) goto LAB_1803bff9f;
  }
  if (*(longlong *)(lVar10 + 0x268) == 0) {
    puVar9 = &DAT_18098bc73;
    if (*(undefined **)(lVar10 + 0x248) != (undefined *)0x0) {
      puVar9 = *(undefined **)(lVar10 + 0x248);
    }
    FUN_180630b20(param_2,param_3,&UNK_180a23a70,puVar9);
    lVar10 = *(longlong *)(param_1 + 8);
  }
  if (*(longlong *)(lVar10 + 0x170) != 0) {
    lVar8 = FUN_1802267d0();
    puVar9 = &DAT_18098bc73;
    if (*(undefined **)(lVar8 + 8) != (undefined *)0x0) {
      puVar9 = *(undefined **)(lVar8 + 8);
    }
    FUN_180630b20(param_2,param_3,&UNK_180a04c44,puVar9);
    lVar10 = *(longlong *)(param_1 + 8);
  }
  if ((*(longlong *)(lVar10 + 0x268) != 0) &&
     ((*(longlong *)(lVar10 + 0x168) == 0 ||
      (*(longlong *)(*(longlong *)(lVar10 + 0x168) + 0x268) == 0)))) {
    puVar9 = *(undefined **)(*(longlong *)(lVar10 + 0x268) + 0x290);
    puVar7 = &DAT_18098bc73;
    if (puVar9 != (undefined *)0x0) {
      puVar7 = puVar9;
    }
    FUN_180630b20(param_2,param_3,&UNK_180a239d4,puVar7);
    lVar10 = *(longlong *)(param_1 + 8);
  }
  bVar2 = *(byte *)(lVar10 + 0x2e8);
  if (*(longlong *)(lVar10 + 0x268) == 0) {
    if ((bVar2 & 1) != 0) goto LAB_1803c00bb;
  }
  else if ((bVar2 & 1) == (*(byte *)(*(longlong *)(lVar10 + 0x268) + 0x2e8) & 1))
  goto LAB_1803c00bb;
  FUN_18062f7c0(param_2,param_3,&UNK_180a23a40,bVar2 & 1);
  lVar10 = *(longlong *)(param_1 + 8);
LAB_1803c00bb:
  cVar3 = *(char *)(lVar10 + 0x2e4);
  if (*(longlong *)(lVar10 + 0x268) == 0) {
    bVar11 = cVar3 == '\0';
  }
  else {
    bVar11 = cVar3 == *(char *)(*(longlong *)(lVar10 + 0x268) + 0x2e4);
  }
  if (!bVar11) {
    FUN_180630c80(param_2,param_3,&UNK_180a23a30,(int)cVar3);
    lVar10 = *(longlong *)(param_1 + 8);
  }
  if (*(longlong *)(lVar10 + 0x268) == 0) {
    bVar11 = *(float *)(lVar10 + 700) == 0.0;
  }
  else {
    bVar11 = *(float *)(lVar10 + 700) == *(float *)(*(longlong *)(lVar10 + 0x268) + 700);
  }
  if (!bVar11) {
    FUN_18062f990(param_2,param_3,&UNK_180a23ac0);
    lVar10 = *(longlong *)(param_1 + 8);
  }
  cVar3 = *(char *)(lVar10 + 0x2e7);
  if (*(longlong *)(lVar10 + 0x268) == 0) {
    bVar11 = cVar3 == -1;
  }
  else {
    bVar11 = cVar3 == *(char *)(*(longlong *)(lVar10 + 0x268) + 0x2e7);
  }
  if (!bVar11) {
    FUN_18062f640(param_2,param_3,&UNK_180a23a80,cVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803c0180(longlong param_1,longlong param_2,longlong param_3)
void FUN_1803c0180(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 *puVar11;
  int iVar12;
  undefined *puVar13;
  undefined1 auStack_148 [32];
  longlong lStack_128;
  longlong lStack_120;
  undefined8 uStack_118;
  undefined *puStack_108;
  byte *pbStack_100;
  int iStack_f8;
  byte abStack_f0 [72];
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  int iStack_98;
  undefined1 auStack_90 [72];
  ulonglong uStack_48;
  char *pcVar10;
  
  uStack_118 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_148;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = *(longlong *)(lVar3 + 0x268);
  lStack_128 = param_2;
  lStack_120 = param_1;
  if (lVar4 == 0) {
    puStack_108 = &UNK_1809fcc58;
    pbStack_100 = abStack_f0;
    abStack_f0[0] = 0;
    iStack_f8 = 0;
    strcpy_s(abStack_f0,0x40,&DAT_18098bc73);
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      puVar5 = *(undefined **)(*(longlong *)(lVar3 + 0x10) + 0x18);
      puVar13 = &DAT_18098bc73;
      if (puVar5 != (undefined *)0x0) {
        puVar13 = puVar5;
      }
      (**(code **)(puStack_108 + 0x10))(&puStack_108,puVar13);
    }
    if (iStack_f8 != 0) {
      pbVar7 = &DAT_18098bc73;
      if (pbStack_100 != (byte *)0x0) {
        pbVar7 = pbStack_100;
      }
      FUN_180630b20(lStack_128,param_3,&UNK_180a235b0,pbVar7);
    }
    goto LAB_1803c03a8;
  }
  puStack_108 = &UNK_1809fcc58;
  pbStack_100 = abStack_f0;
  abStack_f0[0] = 0;
  iStack_f8 = 0;
  strcpy_s(abStack_f0,0x40,&DAT_18098bc73);
  if (*(longlong *)(lVar3 + 0x10) != 0) {
    puVar5 = *(undefined **)(*(longlong *)(lVar3 + 0x10) + 0x18);
    puVar13 = &DAT_18098bc73;
    if (puVar5 != (undefined *)0x0) {
      puVar13 = puVar5;
    }
    (**(code **)(puStack_108 + 0x10))(&puStack_108,puVar13);
  }
  puStack_a8 = &UNK_1809fcc58;
  puStack_a0 = auStack_90;
  auStack_90[0] = 0;
  iStack_98 = 0;
  strcpy_s(auStack_90,0x40,&DAT_18098bc73);
  lVar3 = *(longlong *)(lVar4 + 0x10);
  if (lVar3 != 0) {
    puVar5 = *(undefined **)(lVar3 + 0x18);
    puVar13 = &DAT_18098bc73;
    if (puVar5 != (undefined *)0x0) {
      puVar13 = puVar5;
    }
    (**(code **)(puStack_a8 + 0x10))(&puStack_a8,puVar13);
  }
  iVar12 = iStack_98;
  if (iStack_f8 == iStack_98) {
    if (iStack_f8 != 0) {
      pbVar7 = pbStack_100;
      do {
        pbVar1 = pbVar7 + ((longlong)puStack_a0 - (longlong)pbStack_100);
        iVar12 = (uint)*pbVar7 - (uint)*pbVar1;
        if (iVar12 != 0) break;
        pbVar7 = pbVar7 + 1;
      } while (*pbVar1 != 0);
    }
LAB_1803c02ed:
    if (iVar12 != 0) goto LAB_1803c02ef;
  }
  else {
    if (iStack_f8 == 0) goto LAB_1803c02ed;
LAB_1803c02ef:
    pbVar7 = &DAT_18098bc73;
    if (pbStack_100 != (byte *)0x0) {
      pbVar7 = pbStack_100;
    }
    FUN_180630b20(lStack_128,param_3,&UNK_180a235b0,pbVar7);
  }
  puStack_a8 = &UNK_18098bcb0;
LAB_1803c03a8:
  lVar6 = lStack_128;
  puStack_108 = &UNK_18098bcb0;
  lVar3 = *(longlong *)(lStack_120 + 8);
  lVar4 = *(longlong *)(lVar3 + 0x268);
  if (((lVar4 == 0) || (*(int *)(lVar3 + 0x18) != *(int *)(lVar4 + 0x18))) &&
     ((uVar2 = *(uint *)(lVar3 + 0x18), lVar4 != 0 || (uVar2 != 0)))) {
    puVar8 = (undefined8 *)FUN_1804c1300(lStack_128 + 0x60,0x60);
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[4] = 0;
    *(undefined4 *)(puVar8 + 5) = 1;
    puVar8[6] = 0;
    puVar8[8] = 0;
    pcVar9 = "occlusion_body_flags";
    do {
      pcVar10 = pcVar9;
      pcVar9 = pcVar10 + 1;
    } while (*pcVar9 != '\0');
    *puVar8 = &UNK_180a23598;
    puVar8[2] = pcVar10 + -0x180a23597;
    if ((uVar2 & 4) != 0) {
      puVar11 = (undefined8 *)FUN_1804c1300(lVar6 + 0x60,0x60);
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[4] = 0;
      *(undefined4 *)(puVar11 + 5) = 1;
      puVar11[6] = 0;
      puVar11[8] = 0;
      pcVar9 = "occlusion_body_flag";
      do {
        pcVar10 = pcVar9;
        pcVar9 = pcVar10 + 1;
      } while (*pcVar9 != '\0');
      *puVar11 = &UNK_180a23580;
      puVar11[2] = pcVar10 + -0x180a2357f;
      FUN_180630b20(lVar6,puVar11,&DAT_180a03a84,&UNK_180a16540);
      if (puVar8[6] == 0) {
        puVar11[10] = 0;
        puVar8[6] = puVar11;
      }
      else {
        puVar11[10] = puVar8[7];
        *(undefined8 **)(puVar8[7] + 0x58) = puVar11;
      }
      puVar8[7] = puVar11;
      puVar11[4] = puVar8;
      puVar11[0xb] = 0;
    }
    if ((uVar2 & 1) != 0) {
      puVar11 = (undefined8 *)FUN_1804c1300(lVar6 + 0x60,0x60);
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[4] = 0;
      *(undefined4 *)(puVar11 + 5) = 1;
      puVar11[6] = 0;
      puVar11[8] = 0;
      pcVar9 = "occlusion_body_flag";
      do {
        pcVar10 = pcVar9;
        pcVar9 = pcVar10 + 1;
      } while (*pcVar9 != '\0');
      *puVar11 = &UNK_180a23580;
      puVar11[2] = pcVar10 + -0x180a2357f;
      FUN_180630b20(lVar6,puVar11,&DAT_180a03a84,&UNK_180a21a48);
      if (puVar8[6] == 0) {
        puVar11[10] = 0;
        puVar8[6] = puVar11;
      }
      else {
        puVar11[10] = puVar8[7];
        *(undefined8 **)(puVar8[7] + 0x58) = puVar11;
      }
      puVar8[7] = puVar11;
      puVar11[4] = puVar8;
      puVar11[0xb] = 0;
    }
    if ((puVar8[6] != 0) || (puVar8[8] != 0)) {
      if (*(longlong *)(param_3 + 0x30) == 0) {
        puVar8[10] = 0;
        *(undefined8 **)(param_3 + 0x30) = puVar8;
      }
      else {
        puVar8[10] = *(undefined8 *)(param_3 + 0x38);
        *(undefined8 **)(*(longlong *)(param_3 + 0x38) + 0x58) = puVar8;
      }
      *(undefined8 **)(param_3 + 0x38) = puVar8;
      puVar8[4] = param_3;
      puVar8[0xb] = 0;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_148);
}






