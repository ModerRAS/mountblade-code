#include "TaleWorlds.Native.Split.h"

// 99_part_01_part015_sub002.c - 1 个函数

// 函数: void FUN_1800af9f0(longlong param_1,undefined8 *param_2,longlong param_3)
void FUN_1800af9f0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_b8 [32];
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  ulonglong uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  ulonglong uStack_40;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  uStack_78 = 0;
  puStack_98 = &UNK_180a3c3e0;
  uStack_80 = 0;
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  iVar15 = 0;
  uVar9 = *(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3;
  puStack_68 = param_2;
  uStack_60 = param_1;
  if (uVar9 != 0) {
    iVar10 = *(int *)(param_3 + 0x10);
    lVar13 = 0;
    do {
      lVar11 = *(longlong *)(lVar13 + *(longlong *)(param_1 + 8));
      iVar2 = *(int *)(lVar11 + 0x18);
      iVar8 = iVar10;
      if (iVar2 == iVar10) {
        if (iVar2 != 0) {
          pbVar4 = *(byte **)(lVar11 + 0x10);
          lVar11 = *(longlong *)(param_3 + 8) - (longlong)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar11;
            iVar8 = (uint)*pbVar4 - (uint)*pbVar1;
            if (iVar8 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
        }
LAB_1800afade:
        if (iVar8 == 0) {
          FUN_180060680(&uStack_60,&UNK_1809fd0a0,
                        **(undefined4 **)(*(longlong *)(param_1 + 8) + (longlong)iVar15 * 8));
          lVar13 = -1;
          do {
            lVar11 = lVar13;
            lVar13 = lVar11 + 1;
          } while (*(char *)((longlong)&uStack_60 + lVar11 + 1) != '\0');
          if (0 < (int)(lVar11 + 1)) {
            iVar10 = (int)lVar11 + 2;
            iVar15 = iVar10;
            if (iVar10 < 0x10) {
              iVar15 = 0x10;
            }
            puVar5 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar15,0x13);
            *puVar5 = 0;
            puStack_90 = puVar5;
            uVar3 = FUN_18064e990(puVar5);
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar3);
                    // WARNING: Subroutine does not return
            memcpy(puVar5,&uStack_60,(longlong)iVar10);
          }
          *param_2 = &UNK_18098bcb0;
          param_2[1] = 0;
          *(undefined4 *)(param_2 + 2) = 0;
          *param_2 = &UNK_180a3c3e0;
          *(undefined4 *)(param_2 + 2) = 0;
          param_2[1] = 0;
          *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
          *(undefined4 *)(param_2 + 3) = 0;
          uStack_88 = 0;
          uStack_80 = 0;
          goto LAB_1800affe3;
        }
      }
      else if (iVar2 == 0) goto LAB_1800afade;
      iVar15 = iVar15 + 1;
      lVar13 = lVar13 + 8;
    } while ((ulonglong)(longlong)iVar15 < uVar9);
  }
  iVar15 = 0;
  uVar9 = *(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3;
  if (uVar9 != 0) {
    iVar10 = *(int *)(param_3 + 0x10);
    lVar13 = 0;
    do {
      lVar11 = *(longlong *)(lVar13 + *(longlong *)(param_1 + 0x28));
      iVar2 = *(int *)(lVar11 + 0x18);
      iVar8 = iVar10;
      if (iVar2 == iVar10) {
        if (iVar2 != 0) {
          pbVar4 = *(byte **)(lVar11 + 0x10);
          lVar11 = *(longlong *)(param_3 + 8) - (longlong)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar11;
            iVar8 = (uint)*pbVar4 - (uint)*pbVar1;
            if (iVar8 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
        }
LAB_1800afc3f:
        if (iVar8 == 0) {
          FUN_180626eb0(&uStack_60,0x20,&DAT_180a06430,
                        (double)**(float **)(*(longlong *)(param_1 + 0x28) + (longlong)iVar15 * 8));
          lVar13 = -1;
          do {
            lVar11 = lVar13;
            lVar13 = lVar11 + 1;
          } while (*(char *)((longlong)&uStack_60 + lVar11 + 1) != '\0');
          if (0 < (int)(lVar11 + 1)) {
            iVar10 = (int)lVar11 + 2;
            iVar15 = iVar10;
            if (iVar10 < 0x10) {
              iVar15 = 0x10;
            }
            puVar5 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar15,0x13);
            *puVar5 = 0;
            puStack_90 = puVar5;
            uVar3 = FUN_18064e990(puVar5);
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar3);
                    // WARNING: Subroutine does not return
            memcpy(puVar5,&uStack_60,(longlong)iVar10);
          }
          *param_2 = &UNK_18098bcb0;
          param_2[1] = 0;
          *(undefined4 *)(param_2 + 2) = 0;
          *param_2 = &UNK_180a3c3e0;
          *(undefined4 *)(param_2 + 2) = 0;
          param_2[1] = 0;
          *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
          *(undefined4 *)(param_2 + 3) = 0;
          uStack_88 = 0;
          uStack_80 = 0;
          goto LAB_1800affe3;
        }
      }
      else if (iVar2 == 0) goto LAB_1800afc3f;
      iVar15 = iVar15 + 1;
      lVar13 = lVar13 + 8;
    } while ((ulonglong)(longlong)iVar15 < uVar9);
  }
  iVar15 = 0;
  uVar9 = *(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 3;
  if (uVar9 != 0) {
    iVar10 = *(int *)(param_3 + 0x10);
    lVar13 = 0;
    do {
      lVar11 = *(longlong *)(lVar13 + *(longlong *)(param_1 + 0x48));
      iVar2 = *(int *)(lVar11 + 0x50);
      iVar8 = iVar10;
      if (iVar2 == iVar10) {
        if (iVar2 != 0) {
          pbVar4 = *(byte **)(lVar11 + 0x48);
          lVar11 = *(longlong *)(param_3 + 8) - (longlong)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar11;
            iVar8 = (uint)*pbVar4 - (uint)*pbVar1;
            if (iVar8 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
        }
LAB_1800afda6:
        if (iVar8 == 0) {
          lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar15 * 8);
          if (0 < *(int *)(lVar13 + 0x10)) {
            iVar15 = *(int *)(lVar13 + 0x10) + 1;
            if (iVar15 < 0x10) {
              iVar15 = 0x10;
            }
            puStack_90 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar15,0x13);
            *puStack_90 = 0;
            uVar9 = (ulonglong)puStack_90 & 0xffffffffffc00000;
            if (uVar9 == 0) {
              uVar7 = 0;
            }
            else {
              lVar11 = ((longlong)puStack_90 - uVar9 >> 0x10) * 0x50 + 0x80 + uVar9;
              puVar12 = (uint *)(lVar11 - (ulonglong)*(uint *)(lVar11 + 4));
              if ((*(byte *)((longlong)puVar12 + 0xe) & 2) == 0) {
                uVar7 = puVar12[7];
                if (0x3ffffff < uVar7) {
                  uVar7 = *puVar12 << 0x10;
                }
              }
              else {
                uVar7 = puVar12[7];
                if (uVar7 < 0x4000000) {
                  uVar14 = (ulonglong)uVar7;
                }
                else {
                  uVar14 = (ulonglong)*puVar12 << 0x10;
                }
                if (0x3ffffff < uVar7) {
                  uVar7 = *puVar12 << 0x10;
                }
                uVar7 = uVar7 - (int)(((longlong)puStack_90 -
                                      (((longlong)((longlong)puVar12 + (-0x80 - uVar9)) / 0x50) *
                                       0x10000 + uVar9)) % uVar14);
              }
            }
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
                    // WARNING: Subroutine does not return
            memcpy(puStack_90,*(undefined8 *)(lVar13 + 8),(longlong)(*(int *)(lVar13 + 0x10) + 1));
          }
          *param_2 = &UNK_18098bcb0;
          param_2[1] = 0;
          *(undefined4 *)(param_2 + 2) = 0;
          *param_2 = &UNK_180a3c3e0;
          *(undefined4 *)(param_2 + 2) = 0;
          param_2[1] = 0;
          *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
          *(undefined4 *)(param_2 + 3) = 0;
          uStack_88 = 0;
          uStack_80 = 0;
          goto LAB_1800affe3;
        }
      }
      else if (iVar2 == 0) goto LAB_1800afda6;
      iVar15 = iVar15 + 1;
      lVar13 = lVar13 + 8;
    } while ((ulonglong)(longlong)iVar15 < uVar9);
  }
  iVar15 = 0;
  uVar9 = *(longlong *)(param_1 + 0x70) - *(longlong *)(param_1 + 0x68) >> 3;
  if (uVar9 != 0) {
    iVar10 = *(int *)(param_3 + 0x10);
    lVar13 = 0;
    do {
      lVar11 = *(longlong *)(lVar13 + *(longlong *)(param_1 + 0x68));
      iVar2 = *(int *)(lVar11 + 0x20);
      iVar8 = iVar10;
      if (iVar2 == iVar10) {
        if (iVar2 != 0) {
          pbVar4 = *(byte **)(lVar11 + 0x18);
          lVar11 = *(longlong *)(param_3 + 8) - (longlong)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar11;
            iVar8 = (uint)*pbVar4 - (uint)*pbVar1;
            if (iVar8 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
        }
LAB_1800aff9c:
        if (iVar8 == 0) {
          FUN_180626eb0(&uStack_60,0x20,&UNK_180a02954,
                        **(undefined8 **)(*(longlong *)(param_1 + 0x68) + (longlong)iVar15 * 8));
          lVar13 = -1;
          do {
            lVar11 = lVar13;
            lVar13 = lVar11 + 1;
          } while (*(char *)((longlong)&uStack_60 + lVar11 + 1) != '\0');
          if (0 < (int)(lVar11 + 1)) {
            iVar15 = (int)lVar11 + 2;
            if (iVar15 < 0x10) {
              iVar15 = 0x10;
            }
            puStack_90 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar15,0x13);
            *puStack_90 = 0;
            uVar9 = (ulonglong)puStack_90 & 0xffffffffffc00000;
            if (uVar9 == 0) {
              uVar7 = 0;
            }
            else {
              lVar13 = ((longlong)puStack_90 - uVar9 >> 0x10) * 0x50 + 0x80 + uVar9;
              puVar12 = (uint *)(lVar13 - (ulonglong)*(uint *)(lVar13 + 4));
              if ((*(byte *)((longlong)puVar12 + 0xe) & 2) == 0) {
                uVar7 = puVar12[7];
                if (0x3ffffff < uVar7) {
                  uVar7 = *puVar12 << 0x10;
                }
              }
              else {
                uVar7 = puVar12[7];
                if (uVar7 < 0x4000000) {
                  uVar14 = (ulonglong)uVar7;
                }
                else {
                  uVar14 = (ulonglong)*puVar12 << 0x10;
                }
                if (0x3ffffff < uVar7) {
                  uVar7 = *puVar12 << 0x10;
                }
                uVar7 = uVar7 - (int)(((longlong)puStack_90 -
                                      (((longlong)((longlong)puVar12 + (-0x80 - uVar9)) / 0x50) *
                                       0x10000 + uVar9)) % uVar14);
              }
            }
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
                    // WARNING: Subroutine does not return
            memcpy(puStack_90,&uStack_60,(longlong)((int)lVar11 + 2));
          }
          *param_2 = &UNK_18098bcb0;
          param_2[1] = 0;
          *(undefined4 *)(param_2 + 2) = 0;
          *param_2 = &UNK_180a3c3e0;
          *(undefined4 *)(param_2 + 2) = 0;
          param_2[1] = 0;
          *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
          *(undefined4 *)(param_2 + 3) = 0;
          uStack_88 = 0;
          uStack_80 = 0;
          goto LAB_1800affe3;
        }
      }
      else if (iVar2 == 0) goto LAB_1800aff9c;
      iVar15 = iVar15 + 1;
      lVar13 = lVar13 + 8;
    } while ((ulonglong)(longlong)iVar15 < uVar9);
  }
  uVar6 = FUN_180628ca0();
  FUN_180627ae0(param_2,uVar6);
  uStack_80 = uStack_80 & 0xffffffff00000000;
LAB_1800affe3:
  uStack_78 = 1;
  puStack_90 = (undefined1 *)0x0;
  puStack_98 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_b8);
}







