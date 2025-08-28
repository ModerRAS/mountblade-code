#include "TaleWorlds.Native.Split.h"

// 99_part_07_part043.c - 8 个函数

// 函数: void FUN_1804c32c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1804c32c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)param_1[1];
  for (puVar2 = (undefined8 *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 0x19) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



int FUN_1804c32e0(longlong *param_1,longlong param_2,longlong *param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int *piVar12;
  char *pcVar13;
  char *pcVar14;
  ulonglong uVar15;
  char *pcVar16;
  undefined8 uVar17;
  undefined *puStack_50;
  longlong lStack_48;
  int iStack_40;
  undefined8 uStack_38;
  
  uVar17 = 0xfffffffffffffffe;
  pcVar13 = "item_holsters";
  do {
    pcVar14 = pcVar13;
    pcVar13 = pcVar14 + 1;
  } while (*pcVar13 != '\0');
  pcVar16 = (char *)0x0;
  for (pcVar13 = *(char **)(param_2 + 0x30); pcVar4 = pcVar16, pcVar13 != (char *)0x0;
      pcVar13 = *(char **)(pcVar13 + 0x58)) {
    pcVar4 = *(char **)pcVar13;
    pcVar3 = pcVar16;
    if (pcVar4 != (char *)0x0) {
      pcVar3 = *(char **)(pcVar13 + 0x10);
    }
    pcVar6 = (char *)0x180d48d24;
    if (pcVar4 != (char *)0x0) {
      pcVar6 = pcVar4;
    }
    if (pcVar3 == pcVar14 + -0x180a12ce7) {
      pcVar3 = pcVar3 + (longlong)pcVar6;
      pcVar4 = pcVar13;
      if (pcVar3 <= pcVar6) break;
      lVar8 = (longlong)&UNK_180a12ce8 - (longlong)pcVar6;
      while (*pcVar6 == pcVar6[lVar8]) {
        pcVar6 = pcVar6 + 1;
        if (pcVar3 <= pcVar6) goto LAB_1804c3383;
      }
    }
  }
LAB_1804c3383:
  pcVar13 = "item_holster";
  do {
    pcVar14 = pcVar13;
    pcVar13 = pcVar14 + 1;
  } while (*pcVar13 != '\0');
  pcVar13 = *(char **)(pcVar4 + 0x30);
  do {
    if (pcVar13 == (char *)0x0) {
      return param_4;
    }
    pcVar3 = *(char **)pcVar13;
    pcVar4 = pcVar16;
    if (pcVar3 != (char *)0x0) {
      pcVar4 = *(char **)(pcVar13 + 0x10);
    }
    pcVar6 = (char *)0x180d48d24;
    if (pcVar3 != (char *)0x0) {
      pcVar6 = pcVar3;
    }
    if (pcVar4 == pcVar14 + -0x180a2f74f) {
      pcVar4 = pcVar6 + (longlong)pcVar4;
      if (pcVar4 <= pcVar6) {
LAB_1804c3410:
        do {
          puStack_50 = &UNK_180a3c3e0;
          uStack_38 = 0;
          lStack_48 = 0;
          iStack_40 = 0;
          pcVar14 = "group_name";
          do {
            pcVar4 = pcVar14;
            pcVar14 = pcVar4 + 1;
          } while (*pcVar14 != '\0');
          for (puVar11 = *(undefined8 **)(pcVar13 + 0x40); puVar11 != (undefined8 *)0x0;
              puVar11 = (undefined8 *)puVar11[6]) {
            pcVar3 = (char *)*puVar11;
            pcVar14 = pcVar16;
            if (pcVar3 != (char *)0x0) {
              pcVar14 = (char *)puVar11[2];
            }
            pcVar6 = (char *)0x180d48d24;
            if (pcVar3 != (char *)0x0) {
              pcVar6 = pcVar3;
            }
            if (pcVar14 == pcVar4 + -0x180a2f69f) {
              pcVar14 = pcVar14 + (longlong)pcVar6;
              if (pcVar14 <= pcVar6) {
LAB_1804c34a4:
                lVar8 = 0x180d48d24;
                if (puVar11[1] != 0) {
                  lVar8 = puVar11[1];
                }
                FUN_180627c50(&puStack_50,lVar8,pcVar14,puVar11,uVar17);
                break;
              }
              lVar8 = (longlong)&UNK_180a2f6a0 - (longlong)pcVar6;
              while (*pcVar6 == pcVar6[lVar8]) {
                pcVar6 = pcVar6 + 1;
                if (pcVar14 <= pcVar6) goto LAB_1804c34a4;
              }
            }
          }
          iVar9 = -1;
          if (0 < iStack_40) {
            uVar10 = param_3[1];
            uVar15 = (longlong)(uVar10 - *param_3) >> 5;
            if (uVar15 != 0) {
              piVar12 = (int *)(*param_3 + 0x10);
              pcVar14 = pcVar16;
              do {
                iVar2 = *piVar12;
                iVar9 = (int)pcVar14;
                iVar7 = iStack_40;
                if (iVar2 == iStack_40) {
                  if (iVar2 != 0) {
                    pbVar5 = *(byte **)(piVar12 + -2);
                    lVar8 = lStack_48 - (longlong)pbVar5;
                    do {
                      pbVar1 = pbVar5 + lVar8;
                      iVar7 = (uint)*pbVar5 - (uint)*pbVar1;
                      if (iVar7 != 0) break;
                      pbVar5 = pbVar5 + 1;
                    } while (*pbVar1 != 0);
                  }
LAB_1804c3537:
                  if (iVar7 == 0) {
                    if (-1 < iVar9) goto LAB_1804c3580;
                    break;
                  }
                }
                else if (iVar2 == 0) goto LAB_1804c3537;
                pcVar14 = (char *)(ulonglong)(iVar9 + 1U);
                piVar12 = piVar12 + 8;
                uVar10 = param_3[1];
              } while ((ulonglong)(longlong)(int)(iVar9 + 1U) < uVar15);
            }
            iVar9 = (int)uVar15;
            if (uVar10 < (ulonglong)param_3[2]) {
              param_3[1] = uVar10 + 0x20;
              FUN_180627ae0(uVar10);
            }
            else {
              FUN_180059820(param_3,&puStack_50);
            }
          }
LAB_1804c3580:
          FUN_1804c2600((longlong)param_4 * 200 + *param_1,pcVar13,iVar9);
          puStack_50 = &UNK_180a3c3e0;
          if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          param_4 = param_4 + 1;
          pcVar14 = "item_holster";
          do {
            pcVar4 = pcVar14;
            pcVar14 = pcVar4 + 1;
          } while (*pcVar14 != '\0');
          for (pcVar14 = *(char **)(pcVar13 + 0x58); pcVar13 = pcVar16, pcVar14 != (char *)0x0;
              pcVar14 = *(char **)(pcVar14 + 0x58)) {
            pcVar13 = *(char **)pcVar14;
            pcVar3 = pcVar16;
            if (pcVar13 != (char *)0x0) {
              pcVar3 = *(char **)(pcVar14 + 0x10);
            }
            pcVar6 = (char *)0x180d48d24;
            if (pcVar13 != (char *)0x0) {
              pcVar6 = pcVar13;
            }
            if (pcVar3 == pcVar4 + -0x180a2f74f) {
              pcVar3 = pcVar3 + (longlong)pcVar6;
              pcVar13 = pcVar14;
              if (pcVar3 <= pcVar6) break;
              lVar8 = (longlong)&UNK_180a2f750 - (longlong)pcVar6;
              while (*pcVar6 == pcVar6[lVar8]) {
                pcVar6 = pcVar6 + 1;
                if (pcVar3 <= pcVar6) goto LAB_1804c363e;
              }
            }
          }
LAB_1804c363e:
          if (pcVar13 == (char *)0x0) {
            return param_4;
          }
        } while( true );
      }
      lVar8 = (longlong)&UNK_180a2f750 - (longlong)pcVar6;
      while (*pcVar6 == pcVar6[lVar8]) {
        pcVar6 = pcVar6 + 1;
        if (pcVar4 <= pcVar6) goto LAB_1804c3410;
      }
    }
    pcVar13 = *(char **)(pcVar13 + 0x58);
  } while( true );
}



int FUN_1804c3680(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  
  iVar9 = 0;
  if (0 < (int)param_1[4]) {
    iVar2 = *(int *)(param_2 + 0x10);
    puVar8 = (undefined8 *)(*param_1 + 0x50);
    do {
      iVar3 = *(int *)(puVar8 + 1);
      iVar5 = iVar2;
      if (iVar3 == iVar2) {
        if (iVar3 != 0) {
          pbVar4 = (byte *)*puVar8;
          lVar7 = *(longlong *)(param_2 + 8) - (longlong)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar7;
            iVar5 = (uint)*pbVar4 - (uint)*pbVar1;
            if (iVar5 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
        }
LAB_1804c36de:
        if (iVar5 == 0) {
          return iVar9;
        }
      }
      else if (iVar3 == 0) goto LAB_1804c36de;
      iVar9 = iVar9 + 1;
      puVar8 = puVar8 + 0x19;
    } while (iVar9 < (int)param_1[4]);
  }
  puVar6 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar6 = *(undefined **)(param_2 + 8);
  }
  FUN_180626f80(&UNK_180a2f6f0,puVar6);
  return 0;
}






// 函数: void FUN_1804c3730(longlong *param_1)
void FUN_1804c3730(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != puVar1) {
    do {
      (**(code **)*puVar2)(puVar2,0);
      puVar2 = puVar2 + 0x19;
    } while (puVar2 != puVar1);
    param_1[1] = *param_1;
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  param_1[1] = (longlong)puVar2;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}






// 函数: void FUN_1804c37a0(void)
void FUN_1804c37a0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






// 函数: void FUN_1804c42a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1804c42a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)param_1[1];
  for (puVar2 = (undefined8 *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 0x19) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804c4310(longlong *param_1,ulonglong param_2)
void FUN_1804c4310(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lStackX_8;
  
  puVar4 = (undefined8 *)param_1[1];
  lVar6 = *param_1;
  lVar1 = ((longlong)puVar4 - lVar6) +
          SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)puVar4 - lVar6),8);
  uVar5 = (lVar1 >> 7) - (lVar1 >> 0x3f);
  if (param_2 <= uVar5) {
    puVar2 = (undefined8 *)(param_2 * 200 + lVar6);
    if (puVar2 != puVar4) {
      do {
        (**(code **)*puVar2)(puVar2,0);
        puVar2 = puVar2 + 0x19;
      } while (puVar2 != puVar4);
      lVar6 = *param_1;
    }
    param_1[1] = param_2 * 200 + lVar6;
    return;
  }
  param_2 = param_2 - uVar5;
  lVar1 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_1[2] - (longlong)puVar4),8) +
          (param_1[2] - (longlong)puVar4);
  if (param_2 <= (ulonglong)((lVar1 >> 7) - (lVar1 >> 0x3f))) {
    FUN_1804c44d0(puVar4,param_2);
    param_1[1] = param_1[1] + param_2 * 200;
    return;
  }
  uVar3 = uVar5 * 2;
  if (uVar5 == 0) {
    uVar3 = 1;
  }
  if (uVar3 < uVar5 + param_2) {
    uVar3 = uVar5 + param_2;
  }
  if (uVar3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar3 * 200,(char)param_1[3]);
    lVar6 = *param_1;
    puVar4 = (undefined8 *)param_1[1];
  }
  FUN_1804c4600(&lStackX_8,lVar6,puVar4,lVar1);
  FUN_1804c44d0(lStackX_8,param_2);
  puVar4 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != puVar4) {
    do {
      (**(code **)*puVar2)(puVar2,0);
      puVar2 = puVar2 + 0x19;
    } while (puVar2 != puVar4);
    puVar2 = (undefined8 *)*param_1;
  }
  if (puVar2 == (undefined8 *)0x0) {
    *param_1 = lVar1;
    param_1[2] = uVar3 * 200 + lVar1;
    param_1[1] = param_2 * 200 + lStackX_8;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804c4385(void)
void FUN_1804c4385(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong in_R9;
  longlong in_R10;
  longlong unaff_R14;
  longlong lVar5;
  longlong in_stack_00000050;
  
  uVar4 = in_R9 * 2;
  if (in_R9 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < (ulonglong)(in_R9 + unaff_R14)) {
    uVar4 = in_R9 + unaff_R14;
  }
  if (uVar4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18062b420(_DAT_180c8ed18,uVar4 * 200,(char)unaff_RDI[3]);
    in_R10 = *unaff_RDI;
    unaff_RSI = unaff_RDI[1];
  }
  FUN_1804c4600(&stack0x00000050,in_R10,unaff_RSI,lVar2);
  FUN_1804c44d0(in_stack_00000050);
  puVar1 = (undefined8 *)unaff_RDI[1];
  puVar3 = (undefined8 *)*unaff_RDI;
  lVar5 = unaff_R14 * 200 + in_stack_00000050;
  if (puVar3 != puVar1) {
    do {
      (**(code **)*puVar3)(puVar3,0);
      puVar3 = puVar3 + 0x19;
    } while (puVar3 != puVar1);
    puVar3 = (undefined8 *)*unaff_RDI;
  }
  if (puVar3 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  *unaff_RDI = lVar2;
  unaff_RDI[2] = uVar4 * 200 + lVar2;
  unaff_RDI[1] = lVar5;
  return;
}






// 函数: void FUN_1804c4463(void)
void FUN_1804c4463(void)

{
  longlong unaff_RDI;
  longlong unaff_R14;
  
  FUN_1804c44d0();
  *(longlong *)(unaff_RDI + 8) = *(longlong *)(unaff_RDI + 8) + unaff_R14 * 200;
  return;
}






// 函数: void FUN_1804c44d0(longlong param_1,longlong param_2)
void FUN_1804c44d0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x50);
    do {
      puVar1[-10] = &UNK_180a07218;
      puVar1[-10] = &UNK_180a2f788;
      *(undefined8 *)((longlong)puVar1 + -0x1c) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar1 + -0x14) = 0xffffffffffffffff;
      puVar1[-1] = &UNK_18098bcb0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[-1] = &UNK_180a3c3e0;
      puVar1[2] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[3] = &UNK_18098bcb0;
      puVar1[4] = 0;
      *(undefined4 *)(puVar1 + 5) = 0;
      puVar1[3] = &UNK_180a3c3e0;
      puVar1[6] = 0;
      puVar1[4] = 0;
      *(undefined4 *)(puVar1 + 5) = 0;
      puVar1[7] = &UNK_18098bcb0;
      puVar1[8] = 0;
      *(undefined4 *)(puVar1 + 9) = 0;
      puVar1[7] = &UNK_180a3c3e0;
      puVar1[10] = 0;
      puVar1[8] = 0;
      *(undefined4 *)(puVar1 + 9) = 0;
      puVar1[0xb] = &UNK_18098bcb0;
      puVar1[0xc] = 0;
      *(undefined4 *)(puVar1 + 0xd) = 0;
      puVar1[0xb] = &UNK_180a3c3e0;
      puVar1[0xe] = 0;
      puVar1[0xc] = 0;
      *(undefined4 *)(puVar1 + 0xd) = 0;
      *(undefined4 *)(puVar1 + -4) = 0;
      *(undefined1 *)(puVar1 + -9) = 0xff;
      *(undefined8 *)((longlong)puVar1 + -0x44) = 0;
      *(undefined8 *)((longlong)puVar1 + -0x3c) = 0;
      *(undefined8 *)((longlong)puVar1 + -0x34) = 0;
      *(undefined8 *)((longlong)puVar1 + -0x2c) = 0;
      *(undefined4 *)((longlong)puVar1 + -0x24) = 0xffffffff;
      puVar1 = puVar1 + 0x19;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



undefined8 * FUN_1804c4600(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  *param_1 = param_4;
  if (param_2 != param_3) {
    puVar4 = (undefined8 *)(param_2 + 0xc);
    do {
      puVar2 = (undefined8 *)*param_1;
      *puVar2 = &UNK_180a07218;
      *puVar2 = &UNK_180a2f788;
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)((longlong)puVar4 + -4);
      uVar3 = puVar4[1];
      *(undefined8 *)((longlong)puVar2 + 0xc) = *puVar4;
      *(undefined8 *)((longlong)puVar2 + 0x14) = uVar3;
      uVar3 = puVar4[3];
      *(undefined8 *)((longlong)puVar2 + 0x1c) = puVar4[2];
      *(undefined8 *)((longlong)puVar2 + 0x24) = uVar3;
      *(undefined4 *)((longlong)puVar2 + 0x2c) = *(undefined4 *)(puVar4 + 4);
      *(undefined1 *)(puVar2 + 6) = *(undefined1 *)((longlong)puVar4 + 0x24);
      *(undefined1 *)((longlong)puVar2 + 0x31) = *(undefined1 *)((longlong)puVar4 + 0x25);
      *(undefined1 *)((longlong)puVar2 + 0x32) = *(undefined1 *)((longlong)puVar4 + 0x26);
      *(undefined1 *)((longlong)puVar2 + 0x33) = *(undefined1 *)((longlong)puVar4 + 0x27);
      *(undefined4 *)((longlong)puVar2 + 0x34) = *(undefined4 *)(puVar4 + 5);
      *(undefined4 *)(puVar2 + 7) = *(undefined4 *)((longlong)puVar4 + 0x2c);
      *(undefined4 *)((longlong)puVar2 + 0x3c) = *(undefined4 *)(puVar4 + 6);
      *(undefined4 *)(puVar2 + 8) = *(undefined4 *)((longlong)puVar4 + 0x34);
      puVar2[9] = &UNK_18098bcb0;
      puVar2[10] = 0;
      *(undefined4 *)(puVar2 + 0xb) = 0;
      puVar2[9] = &UNK_180a3c3e0;
      puVar2[0xc] = 0;
      puVar2[10] = 0;
      *(undefined4 *)(puVar2 + 0xb) = 0;
      *(undefined4 *)(puVar2 + 0xb) = *(undefined4 *)((longlong)puVar4 + 0x4c);
      puVar2[10] = *(undefined8 *)((longlong)puVar4 + 0x44);
      *(undefined4 *)((longlong)puVar2 + 100) = *(undefined4 *)(puVar4 + 0xb);
      *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)((longlong)puVar4 + 0x54);
      *(undefined4 *)((longlong)puVar4 + 0x4c) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x44) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x54) = 0;
      puVar2[0xd] = &UNK_18098bcb0;
      puVar2[0xe] = 0;
      *(undefined4 *)(puVar2 + 0xf) = 0;
      puVar2[0xd] = &UNK_180a3c3e0;
      puVar2[0x10] = 0;
      puVar2[0xe] = 0;
      *(undefined4 *)(puVar2 + 0xf) = 0;
      *(undefined4 *)(puVar2 + 0xf) = *(undefined4 *)((longlong)puVar4 + 0x6c);
      puVar2[0xe] = *(undefined8 *)((longlong)puVar4 + 100);
      *(undefined4 *)((longlong)puVar2 + 0x84) = *(undefined4 *)(puVar4 + 0xf);
      *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)((longlong)puVar4 + 0x74);
      *(undefined4 *)((longlong)puVar4 + 0x6c) = 0;
      *(undefined8 *)((longlong)puVar4 + 100) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x74) = 0;
      puVar2[0x11] = &UNK_18098bcb0;
      puVar2[0x12] = 0;
      *(undefined4 *)(puVar2 + 0x13) = 0;
      puVar2[0x11] = &UNK_180a3c3e0;
      puVar2[0x14] = 0;
      puVar2[0x12] = 0;
      *(undefined4 *)(puVar2 + 0x13) = 0;
      *(undefined4 *)(puVar2 + 0x13) = *(undefined4 *)((longlong)puVar4 + 0x8c);
      puVar2[0x12] = *(undefined8 *)((longlong)puVar4 + 0x84);
      *(undefined4 *)((longlong)puVar2 + 0xa4) = *(undefined4 *)(puVar4 + 0x13);
      *(undefined4 *)(puVar2 + 0x14) = *(undefined4 *)((longlong)puVar4 + 0x94);
      *(undefined4 *)((longlong)puVar4 + 0x8c) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x84) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x94) = 0;
      puVar2[0x15] = &UNK_18098bcb0;
      puVar2[0x16] = 0;
      *(undefined4 *)(puVar2 + 0x17) = 0;
      puVar2[0x15] = &UNK_180a3c3e0;
      puVar2[0x18] = 0;
      puVar2[0x16] = 0;
      *(undefined4 *)(puVar2 + 0x17) = 0;
      *(undefined4 *)(puVar2 + 0x17) = *(undefined4 *)((longlong)puVar4 + 0xac);
      puVar2[0x16] = *(undefined8 *)((longlong)puVar4 + 0xa4);
      *(undefined4 *)((longlong)puVar2 + 0xc4) = *(undefined4 *)(puVar4 + 0x17);
      *(undefined4 *)(puVar2 + 0x18) = *(undefined4 *)((longlong)puVar4 + 0xb4);
      *(undefined4 *)((longlong)puVar4 + 0xac) = 0;
      *(undefined8 *)((longlong)puVar4 + 0xa4) = 0;
      *(undefined8 *)((longlong)puVar4 + 0xb4) = 0;
      *param_1 = puVar2 + 0x19;
      lVar1 = (longlong)puVar4 + 0xbc;
      puVar4 = puVar4 + 0x19;
    } while (lVar1 != param_3);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




