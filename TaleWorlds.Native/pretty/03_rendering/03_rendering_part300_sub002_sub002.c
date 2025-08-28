#include "TaleWorlds.Native.Split.h"

// 03_rendering_part300_sub002_sub002.c - 1 个函数

// 函数: void FUN_180428d50(undefined8 param_1,undefined1 *param_2)
void FUN_180428d50(undefined8 param_1,undefined1 *param_2)

{
  ushort uVar1;
  
  uVar1 = FUN_18041f0a0();
  *param_2 = (char)(((uVar1 >> 10 & 0x1f) * 0xff) / 0x1f);
  param_2[1] = (char)(((uVar1 >> 5 & 0x1f) * 0xff) / 0x1f);
  param_2[2] = (char)(((uVar1 & 0x1f) * 0xff) / 0x1f);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 * FUN_180428de0(longlong param_1,int *param_2,uint *param_3,int *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  byte bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  byte bVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uStackX_8;
  byte bStack0000000000000028;
  undefined4 uStack_70;
  uint uStack_6c;
  uint uStack_64;
  int iStack_60;
  undefined1 *puStack_58;
  uint uStack_50;
  uint uStack_4c;
  int iStack_48;
  longlong lStack_40;
  ulonglong uStack_38;
  
  pbVar4 = *(byte **)(param_1 + 0xb8);
  pbVar5 = *(byte **)(param_1 + 0xc0);
  if (pbVar4 < pbVar5) {
    bVar19 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    *(byte **)(param_1 + 0xb8) = pbVar4;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    bVar19 = 0;
  }
  else {
    FUN_18041ee20(param_1);
    pbVar5 = *(byte **)(param_1 + 0xc0);
    bVar19 = **(byte **)(param_1 + 0xb8);
    pbVar4 = *(byte **)(param_1 + 0xb8) + 1;
    *(byte **)(param_1 + 0xb8) = pbVar4;
  }
  if (pbVar4 < pbVar5) {
    bStack0000000000000028 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    *(byte **)(param_1 + 0xb8) = pbVar4;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    bStack0000000000000028 = 0;
  }
  else {
    FUN_18041ee20(param_1);
    pbVar5 = *(byte **)(param_1 + 0xc0);
    bStack0000000000000028 = **(byte **)(param_1 + 0xb8);
    pbVar4 = *(byte **)(param_1 + 0xb8) + 1;
    *(byte **)(param_1 + 0xb8) = pbVar4;
  }
  if (pbVar4 < pbVar5) {
    bVar7 = *pbVar4;
    *(byte **)(param_1 + 0xb8) = pbVar4 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    bVar7 = 0;
  }
  else {
    FUN_18041ee20(param_1);
    bVar7 = **(byte **)(param_1 + 0xb8);
    *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
  }
  uVar21 = (uint)bVar7;
  uVar2 = FUN_18041f0a0(param_1);
  uStack_4c = FUN_18041f0a0(param_1);
  pbVar4 = *(byte **)(param_1 + 0xb8);
  if (pbVar4 < *(byte **)(param_1 + 0xc0)) {
    uVar13 = (uint)*pbVar4;
    *(byte **)(param_1 + 0xb8) = pbVar4 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    uVar13 = 0;
  }
  else {
    FUN_18041ee20(param_1);
    uVar13 = (uint)**(byte **)(param_1 + 0xb8);
    *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
  }
  FUN_18041f0a0(param_1);
  FUN_18041f0a0(param_1);
  iStack_60 = FUN_18041f0a0(param_1);
  uStack_64 = FUN_18041f0a0(param_1);
  pbVar4 = *(byte **)(param_1 + 0xc0);
  pbVar5 = *(byte **)(param_1 + 0xb8);
  if (pbVar5 < pbVar4) {
    uStack_50 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
    *(byte **)(param_1 + 0xb8) = pbVar5;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    uStack_50 = 0;
  }
  else {
    FUN_18041ee20(param_1);
    pbVar4 = *(byte **)(param_1 + 0xc0);
    uStack_50 = (uint)**(byte **)(param_1 + 0xb8);
    pbVar5 = *(byte **)(param_1 + 0xb8) + 1;
    *(byte **)(param_1 + 0xb8) = pbVar5;
  }
  if (pbVar5 < pbVar4) {
    bVar7 = *pbVar5;
    *(byte **)(param_1 + 0xb8) = pbVar5 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    bVar7 = 0;
  }
  else {
    FUN_18041ee20(param_1);
    bVar7 = **(byte **)(param_1 + 0xb8);
    *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
  }
  uVar12 = 0;
  lStack_40 = 0;
  uStack_70 = 0;
  uVar15 = 1;
  uStack_6c = 0;
  bVar1 = false;
  uVar10 = uVar21 - 8;
  if (uVar21 < 8) {
    uVar10 = uVar21;
  }
  iStack_48 = 1 - (bVar7 >> 5 & 1);
  if (bStack0000000000000028 == 0) {
    if (uStack_50 == 8) goto LAB_1804290dd;
    if (uStack_50 != 0xf) {
      iVar9 = uStack_50 - 0x10;
      uVar13 = uStack_50;
      if (iVar9 != 0) goto LAB_1804290a3;
      if (uVar10 == 3) {
        uVar18 = 2;
        uStackX_8 = 2;
        goto LAB_1804290e8;
      }
    }
LAB_180429079:
    uVar18 = 3;
    bVar1 = true;
    uStackX_8 = 3;
  }
  else if (uVar13 == 8) {
LAB_1804290dd:
    uStackX_8 = 1;
    uVar18 = 1;
  }
  else {
    if ((uVar13 == 0xf) || (iVar9 = uVar13 - 0x10, iVar9 == 0)) goto LAB_180429079;
LAB_1804290a3:
    if ((iVar9 != 8) && (iVar9 != 0x10)) {
      return (undefined1 *)0x0;
    }
    uStackX_8 = uVar13 >> 3;
    uVar18 = (ulonglong)uStackX_8;
    if (uVar13 >> 3 == 0) {
      return (undefined1 *)0x0;
    }
  }
LAB_1804290e8:
  *param_2 = iStack_60;
  *param_3 = uStack_64;
  if (param_4 != (int *)0x0) {
    *param_4 = (int)uVar18;
  }
  if ((((((iStack_60 < 0) || ((int)uStack_64 < 0)) ||
        ((uStack_64 != 0 && ((int)(0x7fffffff / (longlong)(int)uStack_64) < iStack_60)))) ||
       ((uVar13 = uStack_64 * iStack_60, (int)uVar13 < 0 ||
        (iVar9 = (int)(0x7fffffff / uVar18), iVar9 < (int)uVar13)))) ||
      ((uStack_64 != 0 && ((int)(0x7fffffff / (longlong)(int)uStack_64) < iStack_60)))) ||
     ((((int)uVar13 < 0 || (iVar9 < (int)uVar13)) ||
      (puVar6 = (undefined1 *)
                FUN_18062b420(_DAT_180c8ed18,(longlong)(int)((int)uVar18 * uStack_64 * iStack_60),
                              CONCAT71((int7)(uVar18 >> 8),0x22)), puVar6 == (undefined1 *)0x0)))) {
    return (undefined1 *)0x0;
  }
  puStack_58 = puVar6;
  func_0x00018041ee90(param_1,bVar19);
  if (bStack0000000000000028 == 0) {
    if ((uVar21 < 8) && (!bVar1)) {
      if (0 < (int)uStack_64) {
        uVar15 = (ulonglong)uStack_64;
        iVar9 = iStack_60 * uStackX_8;
        if (iStack_48 == 0) {
          puVar14 = puVar6;
          do {
            FUN_18041eef0(param_1,puVar14,iVar9);
            puVar14 = puVar14 + iVar9;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        else {
          puVar14 = puVar6 + (int)((uStack_64 - 1) * uStackX_8 * iStack_60);
          do {
            FUN_18041eef0(param_1,puVar14,iVar9);
            puVar14 = puVar14 + -iVar9;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
      }
      goto LAB_1804295cb;
    }
  }
  else {
    func_0x00018041ee90(param_1,uVar2);
    uVar10 = uStack_4c;
    if (((int)uStack_4c < 0) || (iVar9 < (int)uStack_4c)) {
LAB_18042960f:
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar6);
    }
    iVar9 = uStackX_8 * uStack_4c;
    lVar22 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar9,0x22);
    lStack_40 = lVar22;
    if (lVar22 == 0) goto LAB_18042960f;
    if (bVar1) {
      if (0 < (int)uVar10) {
        uVar18 = (ulonglong)uVar10;
        do {
          FUN_180428d50(param_1,lVar22);
          lVar22 = lVar22 + (ulonglong)uStackX_8;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
    }
    else {
      iVar9 = FUN_18041eef0(param_1,lVar22,iVar9);
      if (iVar9 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar6);
      }
    }
  }
  uVar18 = (ulonglong)uStackX_8;
  puVar14 = puVar6;
  if (0 < (int)uVar13) {
    uStack_38 = (ulonglong)uVar13;
    lVar22 = -(longlong)puVar6;
    uVar16 = uVar12;
    uVar23 = uVar12;
    do {
      if (uVar21 < 8) {
LAB_1804293c4:
        uVar15 = uVar12;
        if (bStack0000000000000028 == 0) {
          if (bVar1) {
            FUN_180428d50(param_1,&uStack_70);
            uVar10 = uStack_6c;
          }
          else {
            uVar16 = uVar12;
            uVar10 = uStack_6c;
            if (uVar18 != 0) {
              do {
                puVar14 = *(undefined1 **)(param_1 + 0xb8);
                if (puVar14 < *(undefined1 **)(param_1 + 0xc0)) {
                  uVar8 = *puVar14;
                  *(undefined1 **)(param_1 + 0xb8) = puVar14 + 1;
                }
                else if (*(int *)(param_1 + 0x30) == 0) {
                  uVar8 = 0;
                }
                else {
                  FUN_18041ee20(param_1);
                  uVar8 = **(undefined1 **)(param_1 + 0xb8);
                  *(undefined1 **)(param_1 + 0xb8) = *(undefined1 **)(param_1 + 0xb8) + 1;
                }
                *(undefined1 *)((longlong)&uStack_70 + uVar16) = uVar8;
                uVar16 = uVar16 + 1;
                uVar10 = uStack_6c;
              } while ((longlong)uVar16 < (longlong)uVar18);
            }
          }
        }
        else {
          if (uStack_50 == 8) {
            pbVar4 = *(byte **)(param_1 + 0xb8);
            if (pbVar4 < *(byte **)(param_1 + 0xc0)) {
              bVar19 = *pbVar4;
              *(byte **)(param_1 + 0xb8) = pbVar4 + 1;
              uVar3 = (uint)bVar19;
            }
            else if (*(int *)(param_1 + 0x30) == 0) {
              uVar3 = 0;
            }
            else {
              FUN_18041ee20(param_1);
              bVar19 = **(byte **)(param_1 + 0xb8);
              *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
              uVar3 = (uint)bVar19;
            }
          }
          else {
            uVar3 = FUN_18041f0a0(param_1);
          }
          if ((int)uStack_4c <= (int)uVar3) {
            uVar3 = 0;
          }
          uVar10 = uStack_6c;
          if (uVar18 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(&uStack_70,(int)(uVar3 * uStackX_8) + lStack_40,uVar18);
          }
        }
      }
      else {
        if ((uint)uVar16 == 0) {
          pbVar4 = *(byte **)(param_1 + 0xb8);
          if (pbVar4 < *(byte **)(param_1 + 0xc0)) {
            uVar10 = (uint)*pbVar4;
            *(byte **)(param_1 + 0xb8) = pbVar4 + 1;
          }
          else if (*(int *)(param_1 + 0x30) == 0) {
            uVar10 = 0;
          }
          else {
            FUN_18041ee20(param_1);
            uVar10 = (uint)**(byte **)(param_1 + 0xb8);
            *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
          }
          uVar23 = (ulonglong)(uVar10 >> 7);
          uStack_6c = (uVar10 & 0x7f) + 1;
          goto LAB_1804293c4;
        }
        if (((int)uVar23 == 0) || (uVar10 = (uint)uVar16, (int)uVar15 != 0)) goto LAB_1804293c4;
      }
      if (uVar18 != 0) {
        puVar14 = puVar6;
        do {
          *puVar14 = puVar14[(longlong)&uStack_70 + lVar22];
          puVar14 = puVar14 + 1;
        } while ((longlong)(puVar14 + lVar22) < (longlong)uVar18);
      }
      uVar16 = (ulonglong)(uVar10 - 1);
      lVar22 = lVar22 - (ulonglong)uStackX_8;
      uStack_6c = uVar10 - 1;
      puVar6 = puVar6 + uStackX_8;
      uStack_38 = uStack_38 - 1;
      puVar14 = puStack_58;
    } while (uStack_38 != 0);
  }
  if ((iStack_48 != 0) && (0 < (int)uStack_64)) {
    iVar20 = uStackX_8 * iStack_60;
    iVar9 = (uStack_64 - 1) * uStackX_8 * iStack_60;
    uVar15 = uVar12;
    do {
      iVar11 = (int)uVar12;
      if (0 < iVar20) {
        lVar22 = (longlong)iVar9 - (longlong)iVar11;
        puVar6 = puVar14 + iVar11;
        iVar17 = iVar20;
        do {
          iVar17 = iVar17 + -1;
          uVar8 = *puVar6;
          *puVar6 = puVar6[lVar22];
          puVar6[lVar22] = uVar8;
          puVar6 = puVar6 + 1;
        } while (0 < iVar17);
      }
      uVar12 = (ulonglong)(uint)(iVar11 + iVar20);
      iVar9 = iVar9 - iVar20;
      uVar21 = (int)uVar15 + 2;
      uVar15 = (ulonglong)uVar21;
    } while ((int)uVar21 < (int)uStack_64);
  }
  puVar6 = puStack_58;
  if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lStack_40);
  }
LAB_1804295cb:
  if (uStackX_8 < 3) {
    return puVar6;
  }
  if (!bVar1) {
    if (0 < (int)uVar13) {
      uVar15 = (ulonglong)uVar13;
      puVar14 = puVar6;
      do {
        uVar8 = *puVar14;
        *puVar14 = puVar14[2];
        puVar14[2] = uVar8;
        puVar14 = puVar14 + uStackX_8;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
      return puVar6;
    }
    return puVar6;
  }
  return puVar6;
}



undefined8 FUN_180429640(longlong param_1,byte *param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar2 = param_3;
  if (0 < param_3) {
    do {
      pbVar3 = *(byte **)(param_1 + 0xb8);
      if (pbVar3 < *(byte **)(param_1 + 0xc0)) {
        uVar5 = (uint)*pbVar3;
        pbVar3 = pbVar3 + 1;
        *(byte **)(param_1 + 0xb8) = pbVar3;
      }
      else if (*(int *)(param_1 + 0x30) == 0) {
        uVar5 = 0;
      }
      else {
        puVar1 = (undefined1 *)(param_1 + 0x38);
        iVar6 = (**(code **)(param_1 + 0x10))
                          (*(undefined8 *)(param_1 + 0x28),puVar1,*(undefined4 *)(param_1 + 0x34));
        *(undefined1 **)(param_1 + 0xb8) = puVar1;
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0x30) = 0;
          *(longlong *)(param_1 + 0xc0) = param_1 + 0x39;
          *puVar1 = 0;
        }
        else {
          *(longlong *)(param_1 + 0xc0) = param_1 + 0x38 + (longlong)iVar6;
        }
        uVar5 = (uint)**(byte **)(param_1 + 0xb8);
        pbVar3 = *(byte **)(param_1 + 0xb8) + 1;
        *(byte **)(param_1 + 0xb8) = pbVar3;
      }
      if (uVar5 != 0x80) {
        if (uVar5 < 0x80) {
          iVar6 = uVar5 + 1;
          if (iVar2 < iVar6) {
            return 0;
          }
          iVar7 = iVar7 + iVar6;
          do {
            pbVar3 = *(byte **)(param_1 + 0xb8);
            if (pbVar3 < *(byte **)(param_1 + 0xc0)) {
              bVar4 = *pbVar3;
              *(byte **)(param_1 + 0xb8) = pbVar3 + 1;
            }
            else if (*(int *)(param_1 + 0x30) == 0) {
              bVar4 = 0;
            }
            else {
              puVar1 = (undefined1 *)(param_1 + 0x38);
              iVar2 = (**(code **)(param_1 + 0x10))
                                (*(undefined8 *)(param_1 + 0x28),puVar1,
                                 *(undefined4 *)(param_1 + 0x34));
              *(undefined1 **)(param_1 + 0xb8) = puVar1;
              if (iVar2 == 0) {
                *(undefined4 *)(param_1 + 0x30) = 0;
                *(longlong *)(param_1 + 0xc0) = param_1 + 0x39;
                *puVar1 = 0;
              }
              else {
                *(longlong *)(param_1 + 0xc0) = param_1 + 0x38 + (longlong)iVar2;
              }
              bVar4 = **(byte **)(param_1 + 0xb8);
              *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
            }
            *param_2 = bVar4;
            param_2 = param_2 + 4;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        else if (0x80 < uVar5) {
          iVar6 = 0x101 - uVar5;
          if (iVar2 < iVar6) {
            return 0;
          }
          if (pbVar3 < *(byte **)(param_1 + 0xc0)) {
            bVar4 = *pbVar3;
            *(byte **)(param_1 + 0xb8) = pbVar3 + 1;
          }
          else if (*(int *)(param_1 + 0x30) == 0) {
            bVar4 = 0;
          }
          else {
            FUN_18041ee20(param_1);
            bVar4 = **(byte **)(param_1 + 0xb8);
            *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
          }
          iVar7 = iVar7 + iVar6;
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            *param_2 = bVar4;
            param_2 = param_2 + 4;
          }
        }
      }
      iVar2 = param_3 - iVar7;
    } while (0 < param_3 - iVar7);
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 *
FUN_180429860(longlong param_1,int *param_2,int *param_3,undefined4 *param_4,undefined8 param_5,
             int *param_6,int param_7)

{
  longlong *plVar1;
  undefined2 uVar2;
  undefined1 extraout_AH;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  undefined1 uVar11;
  ushort *puVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  float fVar21;
  float fVar22;
  undefined2 *puStack_48;
  
  iVar3 = FUN_18041efc0();
  iVar4 = FUN_18041efc0(param_1);
  if ((iVar4 + iVar3 * 0x10000 == 0x38425053) && (iVar3 = FUN_18041efc0(param_1), iVar3 == 1)) {
    plVar1 = (longlong *)(param_1 + 0xb8);
    if ((*(longlong *)(param_1 + 0x10) == 0) ||
       (iVar3 = *(int *)(param_1 + 0xc0) - *(int *)plVar1, 5 < iVar3)) {
      *plVar1 = *plVar1 + 6;
    }
    else {
      *plVar1 = *(longlong *)(param_1 + 0xc0);
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x28),6 - iVar3);
    }
    uVar5 = FUN_18041efc0(param_1);
    if (uVar5 < 0x11) {
      iVar3 = FUN_18041f070(param_1);
      iVar4 = FUN_18041f070(param_1);
      iVar6 = FUN_18041efc0(param_1);
      if (((iVar6 - 8U & 0xfffffff7) == 0) && (iVar7 = FUN_18041efc0(param_1), iVar7 == 3)) {
        uVar8 = FUN_18041f070(param_1);
        func_0x00018041ee90(param_1,uVar8);
        uVar8 = FUN_18041f070(param_1);
        func_0x00018041ee90(param_1,uVar8);
        uVar8 = FUN_18041f070(param_1);
        func_0x00018041ee90(param_1,uVar8);
        iVar7 = FUN_18041efc0(param_1);
        if ((((iVar7 < 2) && (-1 < iVar4)) &&
            ((((iVar4 == 0 || (3 < (int)(0x7fffffff / (longlong)iVar4))) && (-1 < iVar4 * 4)) &&
             (-1 < iVar3)))) && ((iVar3 == 0 || (iVar4 * 4 <= (int)(0x7fffffff / (longlong)iVar3))))
           ) {
          uVar16 = iVar4 * iVar3;
          if ((iVar7 == 0) && ((iVar6 == 0x10 && (param_7 == 0x10)))) {
            if ((((iVar4 == 0) || (7 < (int)(0x7fffffff / (longlong)iVar4))) && (-1 < iVar4 * 8)) &&
               ((iVar3 == 0 || (iVar4 * 8 <= (int)(0x7fffffff / (longlong)iVar3))))) {
              puStack_48 = (undefined2 *)
                           FUN_18062b420(_DAT_180c8ed18,(longlong)(int)(uVar16 * 8),0x22);
              *param_6 = 0x10;
            }
            else {
              puStack_48 = (undefined2 *)0x0;
              *param_6 = 0x10;
            }
          }
          else {
            puStack_48 = (undefined2 *)
                         FUN_18062b420(_DAT_180c8ed18,(longlong)(int)(uVar16 * 4),0x22);
          }
          if (puStack_48 != (undefined2 *)0x0) {
            if (iVar7 == 0) {
              iVar7 = 0;
              puVar19 = puStack_48;
              puVar20 = puStack_48;
              do {
                if (iVar7 < (int)uVar5) {
                  if (*param_6 == 0x10) {
                    if (0 < (int)uVar16) {
                      uVar9 = (ulonglong)uVar16;
                      puVar10 = puVar20;
                      do {
                        uVar2 = FUN_18041efc0(param_1);
                        *puVar10 = uVar2;
                        puVar10 = puVar10 + 4;
                        uVar9 = uVar9 - 1;
                      } while (uVar9 != 0);
                    }
                  }
                  else if (iVar6 == 0x10) {
                    if (0 < (int)uVar16) {
                      uVar9 = (ulonglong)uVar16;
                      puVar10 = puVar19;
                      do {
                        FUN_18041efc0(param_1);
                        *(undefined1 *)puVar10 = extraout_AH;
                        puVar10 = puVar10 + 2;
                        uVar9 = uVar9 - 1;
                      } while (uVar9 != 0);
                    }
                  }
                  else if (0 < (int)uVar16) {
                    uVar9 = (ulonglong)uVar16;
                    puVar10 = puVar19;
                    do {
                      puVar14 = (undefined1 *)*plVar1;
                      if (puVar14 < *(undefined1 **)(param_1 + 0xc0)) {
                        uVar11 = *puVar14;
                        *plVar1 = (longlong)(puVar14 + 1);
                      }
                      else if (*(int *)(param_1 + 0x30) == 0) {
                        uVar11 = 0;
                      }
                      else {
                        FUN_18041ee20(param_1);
                        uVar11 = *(undefined1 *)*plVar1;
                        *plVar1 = (longlong)((undefined1 *)*plVar1 + 1);
                      }
                      *(undefined1 *)puVar10 = uVar11;
                      puVar10 = puVar10 + 2;
                      uVar9 = uVar9 - 1;
                    } while (uVar9 != 0);
                  }
                }
                else if ((iVar6 == 0x10) && (param_7 == 0x10)) {
                  uVar2 = 0;
                  if (iVar7 == 3) {
                    uVar2 = 0xffff;
                  }
                  if (0 < (int)uVar16) {
                    uVar9 = (ulonglong)uVar16;
                    puVar10 = puVar20;
                    do {
                      *puVar10 = uVar2;
                      puVar10 = puVar10 + 4;
                      uVar9 = uVar9 - 1;
                    } while (uVar9 != 0);
                  }
                }
                else {
                  uVar11 = 0;
                  if (iVar7 == 3) {
                    uVar11 = 0xff;
                  }
                  if (0 < (int)uVar16) {
                    uVar9 = (ulonglong)uVar16;
                    puVar10 = puVar19;
                    do {
                      *(undefined1 *)puVar10 = uVar11;
                      puVar10 = puVar10 + 2;
                      uVar9 = uVar9 - 1;
                    } while (uVar9 != 0);
                  }
                }
                iVar7 = iVar7 + 1;
                puVar20 = puVar20 + 1;
                puVar19 = (undefined2 *)((longlong)puVar19 + 1);
              } while (iVar7 < 4);
            }
            else {
              func_0x00018041ee90(param_1,iVar3 * uVar5 * 2);
              iVar6 = 0;
              do {
                puVar14 = (undefined1 *)((longlong)iVar6 + (longlong)puStack_48);
                if (iVar6 < (int)uVar5) {
                  iVar7 = FUN_180429640(param_1,puVar14,uVar16);
                  if (iVar7 == 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900(puStack_48);
                  }
                }
                else if (0 < (int)uVar16) {
                  uVar11 = 0;
                  if (iVar6 == 3) {
                    uVar11 = 0xff;
                  }
                  uVar9 = (ulonglong)uVar16;
                  do {
                    *puVar14 = uVar11;
                    puVar14 = puVar14 + 4;
                    uVar9 = uVar9 - 1;
                  } while (uVar9 != 0);
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < 4);
            }
            lVar17 = 0;
            if (3 < (int)uVar5) {
              lVar15 = (longlong)(int)uVar16;
              if (*param_6 == 0x10) {
                if (3 < lVar15) {
                  puVar12 = puStack_48 + 5;
                  lVar18 = (lVar15 - 4U >> 2) + 1;
                  lVar17 = lVar18 * 4;
                  do {
                    if ((ushort)(puVar12[-2] - 1) < 0xfffe) {
                      fVar22 = 65535.0 / (float)puVar12[-2];
                      fVar21 = (1.0 - fVar22) * 65535.0;
                      puVar12[-5] = (ushort)(int)((float)puVar12[-5] * fVar22 + fVar21);
                      puVar12[-4] = (ushort)(int)((float)puVar12[-4] * fVar22 + fVar21);
                      puVar12[-3] = (ushort)(int)((float)puVar12[-3] * fVar22 + fVar21);
                    }
                    if ((ushort)(puVar12[2] - 1) < 0xfffe) {
                      fVar22 = 65535.0 / (float)puVar12[2];
                      fVar21 = (1.0 - fVar22) * 65535.0;
                      puVar12[-1] = (ushort)(int)((float)puVar12[-1] * fVar22 + fVar21);
                      *puVar12 = (ushort)(int)((float)*puVar12 * fVar22 + fVar21);
                      puVar12[1] = (ushort)(int)((float)puVar12[1] * fVar22 + fVar21);
                    }
                    if ((ushort)(puVar12[6] - 1) < 0xfffe) {
                      fVar22 = 65535.0 / (float)puVar12[6];
                      fVar21 = (1.0 - fVar22) * 65535.0;
                      puVar12[3] = (ushort)(int)((float)puVar12[3] * fVar22 + fVar21);
                      puVar12[4] = (ushort)(int)((float)puVar12[4] * fVar22 + fVar21);
                      puVar12[5] = (ushort)(int)((float)puVar12[5] * fVar22 + fVar21);
                    }
                    if ((ushort)(puVar12[10] - 1) < 0xfffe) {
                      fVar22 = 65535.0 / (float)puVar12[10];
                      fVar21 = (1.0 - fVar22) * 65535.0;
                      puVar12[7] = (ushort)(int)((float)puVar12[7] * fVar22 + fVar21);
                      puVar12[8] = (ushort)(int)((float)puVar12[8] * fVar22 + fVar21);
                      puVar12[9] = (ushort)(int)((float)puVar12[9] * fVar22 + fVar21);
                    }
                    puVar12 = puVar12 + 0x10;
                    lVar18 = lVar18 + -1;
                  } while (lVar18 != 0);
                }
                if (lVar17 < lVar15) {
                  puVar12 = puStack_48 + lVar17 * 4 + 1;
                  lVar15 = lVar15 - lVar17;
                  do {
                    if ((ushort)(puVar12[2] - 1) < 0xfffe) {
                      fVar22 = 65535.0 / (float)puVar12[2];
                      fVar21 = (1.0 - fVar22) * 65535.0;
                      puVar12[-1] = (ushort)(int)((float)puVar12[-1] * fVar22 + fVar21);
                      *puVar12 = (ushort)(int)((float)*puVar12 * fVar22 + fVar21);
                      puVar12[1] = (ushort)(int)((float)puVar12[1] * fVar22 + fVar21);
                    }
                    puVar12 = puVar12 + 4;
                    lVar15 = lVar15 + -1;
                  } while (lVar15 != 0);
                }
              }
              else {
                if (3 < lVar15) {
                  pbVar13 = (byte *)((longlong)puStack_48 + 5);
                  lVar18 = (lVar15 - 4U >> 2) + 1;
                  lVar17 = lVar18 * 4;
                  do {
                    if ((byte)(pbVar13[-2] - 1) < 0xfe) {
                      fVar22 = 255.0 / (float)pbVar13[-2];
                      fVar21 = (1.0 - fVar22) * 255.0;
                      pbVar13[-5] = (byte)(int)((float)pbVar13[-5] * fVar22 + fVar21);
                      pbVar13[-4] = (byte)(int)((float)pbVar13[-4] * fVar22 + fVar21);
                      pbVar13[-3] = (byte)(int)((float)pbVar13[-3] * fVar22 + fVar21);
                    }
                    if ((byte)(pbVar13[2] - 1) < 0xfe) {
                      fVar22 = 255.0 / (float)pbVar13[2];
                      fVar21 = (1.0 - fVar22) * 255.0;
                      pbVar13[-1] = (byte)(int)((float)pbVar13[-1] * fVar22 + fVar21);
                      *pbVar13 = (byte)(int)((float)*pbVar13 * fVar22 + fVar21);
                      pbVar13[1] = (byte)(int)((float)pbVar13[1] * fVar22 + fVar21);
                    }
                    if ((byte)(pbVar13[6] - 1) < 0xfe) {
                      fVar22 = 255.0 / (float)pbVar13[6];
                      fVar21 = (1.0 - fVar22) * 255.0;
                      pbVar13[3] = (byte)(int)((float)pbVar13[3] * fVar22 + fVar21);
                      pbVar13[4] = (byte)(int)((float)pbVar13[4] * fVar22 + fVar21);
                      pbVar13[5] = (byte)(int)((float)pbVar13[5] * fVar22 + fVar21);
                    }
                    if ((byte)(pbVar13[10] - 1) < 0xfe) {
                      fVar22 = 255.0 / (float)pbVar13[10];
                      fVar21 = (1.0 - fVar22) * 255.0;
                      pbVar13[7] = (byte)(int)((float)pbVar13[7] * fVar22 + fVar21);
                      pbVar13[8] = (byte)(int)((float)pbVar13[8] * fVar22 + fVar21);
                      pbVar13[9] = (byte)(int)((float)pbVar13[9] * fVar22 + fVar21);
                    }
                    pbVar13 = pbVar13 + 0x10;
                    lVar18 = lVar18 + -1;
                  } while (lVar18 != 0);
                }
                if (lVar17 < lVar15) {
                  pbVar13 = (byte *)(lVar17 * 4 + 1 + (longlong)puStack_48);
                  lVar15 = lVar15 - lVar17;
                  do {
                    if ((byte)(pbVar13[2] - 1) < 0xfe) {
                      fVar22 = 255.0 / (float)pbVar13[2];
                      fVar21 = (1.0 - fVar22) * 255.0;
                      pbVar13[-1] = (byte)(int)((float)pbVar13[-1] * fVar22 + fVar21);
                      *pbVar13 = (byte)(int)((float)*pbVar13 * fVar22 + fVar21);
                      pbVar13[1] = (byte)(int)((float)pbVar13[1] * fVar22 + fVar21);
                    }
                    pbVar13 = pbVar13 + 4;
                    lVar15 = lVar15 + -1;
                  } while (lVar15 != 0);
                }
              }
            }
            if (param_4 != (undefined4 *)0x0) {
              *param_4 = 4;
            }
            *param_3 = iVar3;
            *param_2 = iVar4;
            return puStack_48;
          }
        }
      }
    }
  }
  return (undefined2 *)0x0;
}



undefined8 FUN_18042a2c0(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = 0;
  while( true ) {
    pcVar1 = *(char **)(param_1 + 0xb8);
    if (pcVar1 < *(char **)(param_1 + 0xc0)) {
      cVar2 = *pcVar1;
      *(char **)(param_1 + 0xb8) = pcVar1 + 1;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
      cVar2 = '\0';
    }
    else {
      FUN_18041ee20(param_1);
      cVar2 = **(char **)(param_1 + 0xb8);
      *(char **)(param_1 + 0xb8) = *(char **)(param_1 + 0xb8) + 1;
    }
    if (cVar2 != *(char *)(lVar3 + param_2)) break;
    lVar3 = lVar3 + 1;
    if (3 < lVar3) {
      return 1;
    }
  }
  return 0;
}



longlong FUN_18042a360(longlong param_1,uint param_2,longlong param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0x80;
  lVar6 = 0;
  do {
    if ((param_2 & uVar5) != 0) {
      if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_18042a3c0:
        puVar2 = *(undefined1 **)(param_1 + 0xb8);
        puVar4 = *(undefined1 **)(param_1 + 0xc0);
        if (puVar4 <= puVar2) {
          return 0;
        }
      }
      else {
        iVar1 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28));
        if (iVar1 != 0) {
          if (*(int *)(param_1 + 0x30) == 0) {
            return 0;
          }
          goto LAB_18042a3c0;
        }
        puVar2 = *(undefined1 **)(param_1 + 0xb8);
        puVar4 = *(undefined1 **)(param_1 + 0xc0);
      }
      if (puVar2 < puVar4) {
        uVar3 = *puVar2;
        *(undefined1 **)(param_1 + 0xb8) = puVar2 + 1;
      }
      else if (*(int *)(param_1 + 0x30) == 0) {
        uVar3 = 0;
      }
      else {
        FUN_18041ee20(param_1);
        uVar3 = **(undefined1 **)(param_1 + 0xb8);
        *(undefined1 **)(param_1 + 0xb8) = *(undefined1 **)(param_1 + 0xb8) + 1;
      }
      *(undefined1 *)(lVar6 + param_3) = uVar3;
    }
    lVar6 = lVar6 + 1;
    uVar5 = (int)uVar5 >> 1;
    if (3 < lVar6) {
      return param_3;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





