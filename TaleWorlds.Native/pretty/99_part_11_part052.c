#include "TaleWorlds.Native.Split.h"

// 99_part_11_part052.c - 6 个函数

// 函数: void FUN_1807b1620(int *param_1)
void FUN_1807b1620(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong in_RAX;
  undefined8 *puVar4;
  longlong unaff_RSI;
  undefined4 unaff_R15D;
  
  uVar1 = *(undefined4 *)(in_RAX + 0x10);
  iVar2 = *param_1;
  *(int **)(unaff_RSI + 0x1c8) = param_1 + 2;
  *(int *)(unaff_RSI + 0x1b4) = iVar2;
  *(undefined4 *)(unaff_RSI + 0x1b0) = 0;
  *(undefined4 *)(unaff_RSI + 0x17c) = unaff_R15D;
  *(undefined4 *)(unaff_RSI + 0x180) = uVar1;
  *(undefined4 *)(unaff_RSI + 0x178) = 0;
  uVar3 = *(undefined8 *)(_DAT_180be12f0 + 0x128);
  FUN_180768360(uVar3);
  puVar4 = _DAT_180be4cc8;
  if (_DAT_180be4cc8 != (undefined8 *)&DAT_180be4cc8) {
    do {
      if (*(int *)(puVar4 + 3) == iVar2) break;
      puVar4 = (undefined8 *)*puVar4;
    } while (puVar4 != (undefined8 *)&DAT_180be4cc8);
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807b1625(int *param_1)
void FUN_1807b1625(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong in_RAX;
  undefined8 *puVar4;
  longlong unaff_RSI;
  undefined4 unaff_R15D;
  
  uVar1 = *(undefined4 *)(in_RAX + 0x10);
  iVar2 = *param_1;
  *(int **)(unaff_RSI + 0x1c8) = param_1 + 2;
  *(int *)(unaff_RSI + 0x1b4) = iVar2;
  *(undefined4 *)(unaff_RSI + 0x1b0) = 0;
  *(undefined4 *)(unaff_RSI + 0x17c) = unaff_R15D;
  *(undefined4 *)(unaff_RSI + 0x180) = uVar1;
  *(undefined4 *)(unaff_RSI + 0x178) = 0;
  uVar3 = *(undefined8 *)(_DAT_180be12f0 + 0x128);
  FUN_180768360(uVar3);
  puVar4 = _DAT_180be4cc8;
  if (_DAT_180be4cc8 != (undefined8 *)&DAT_180be4cc8) {
    do {
      if (*(int *)(puVar4 + 3) == iVar2) break;
      puVar4 = (undefined8 *)*puVar4;
    } while (puVar4 != (undefined8 *)&DAT_180be4cc8);
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar3);
}






// 函数: void FUN_1807b16ce(void)
void FUN_1807b16ce(void)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  longlong unaff_RSI;
  undefined8 unaff_R12;
  longlong unaff_R15;
  
  puVar1 = *(undefined8 **)(unaff_RSI + 0x1a0);
  *(undefined8 *)(unaff_RSI + 0x1b8) = *(undefined8 *)(unaff_RBX + 0x20);
  *(undefined4 *)(unaff_RSI + 0x1c0) = *(undefined4 *)(unaff_RBX + 0x30);
  *(undefined8 *)(unaff_RSI + 0x198) = *(undefined8 *)(unaff_RBX + 0x20);
  uVar2 = (longlong)puVar1 + 0x67U & 0xffffffffffffffe0;
  puVar1[2] = uVar2;
  puVar1[1] = uVar2 + unaff_R15 * 0x800;
  *(undefined8 **)(unaff_RSI + 0x1a0) = puVar1;
  *puVar1 = unaff_R12;
  func_0x00018080c1e0(*(undefined8 *)(unaff_RSI + 0x1a0));
                    // WARNING: Subroutine does not return
  memset(*(undefined8 *)(*(longlong *)(unaff_RSI + 0x1a0) + 0x10),0,unaff_R15 * 0x800);
}






// 函数: void FUN_1807b176d(void)
void FUN_1807b176d(void)

{
  return;
}



undefined8 FUN_1807b1890(longlong param_1)

{
  int *piVar1;
  char cVar2;
  
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x18) = 0;
  FUN_1807b5170(param_1,0);
  cVar2 = *(char *)(param_1 + 0xbe9);
  while (cVar2 == '\0') {
    FUN_1807b62e0(param_1,0);
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + *(int *)(param_1 + 0x854);
    cVar2 = *(char *)(param_1 + 0xbe9);
  }
  FUN_18080d690(param_1);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1807b18f0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong *plStackX_8;
  
  uVar2 = FUN_18080c8a0();
  if ((int)uVar2 == 0) {
    if (*(longlong **)(param_1 + 0x46d0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x46d0) + 0x10))();
      *(undefined8 *)(param_1 + 0x46d0) = 0;
    }
    lVar3 = *(longlong *)(param_1 + 0x5f0);
    if (lVar3 != 0) {
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 0x3cc)) {
        lVar7 = 0;
        lVar4 = lVar3;
        do {
          if (*(longlong **)(lVar7 + lVar4) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar7 + lVar4) + 0x10))();
            lVar3 = *(longlong *)(param_1 + 0x5f0);
            lVar4 = lVar3;
          }
          iVar6 = iVar6 + 1;
          lVar7 = lVar7 + 8;
        } while (iVar6 < *(int *)(param_1 + 0x3cc));
      }
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar3,&UNK_18097be80,0x16b6,1);
    }
    if (*(longlong *)(param_1 + 0x900) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x900),
                    &UNK_18097be80,0x16bc,1);
    }
    iVar6 = 0;
    plVar5 = (longlong *)(param_1 + 0x4440);
    do {
      plVar1 = (longlong *)*plVar5;
      if (plVar1 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar1 + 0x120))(plVar1,0,&plStackX_8);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = (**(code **)(*plStackX_8 + 0x10))();
        if ((int)uVar2 != 0) {
          return uVar2;
        }
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*plVar5,&UNK_18097be80,0x16cd,1);
      }
      iVar6 = iVar6 + 1;
      plVar5 = plVar5 + 1;
    } while (iVar6 < 0x32);
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1807b190d(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong unaff_RBX;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong *in_stack_00000040;
  
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x10))();
    *(undefined8 *)(unaff_RBX + 0x46d0) = 0;
  }
  lVar2 = *(longlong *)(unaff_RBX + 0x5f0);
  if (lVar2 != 0) {
    iVar6 = 0;
    if (0 < *(int *)(unaff_RBX + 0x3cc)) {
      lVar7 = 0;
      lVar4 = lVar2;
      do {
        if (*(longlong **)(lVar7 + lVar4) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar7 + lVar4) + 0x10))();
          lVar2 = *(longlong *)(unaff_RBX + 0x5f0);
          lVar4 = lVar2;
        }
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + 8;
      } while (iVar6 < *(int *)(unaff_RBX + 0x3cc));
    }
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar2,&UNK_18097be80,0x16b6,1);
  }
  if (*(longlong *)(unaff_RBX + 0x900) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(unaff_RBX + 0x900),
                  &UNK_18097be80,0x16bc,1);
  }
  iVar6 = 0;
  plVar5 = (longlong *)(unaff_RBX + 0x4440);
  while (plVar1 = (longlong *)*plVar5, plVar1 == (longlong *)0x0) {
    iVar6 = iVar6 + 1;
    plVar5 = plVar5 + 1;
    if (0x31 < iVar6) {
      return 0;
    }
  }
  uVar3 = (**(code **)(*plVar1 + 0x120))(plVar1,0,&stack0x00000040);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar3 = (**(code **)(*in_stack_00000040 + 0x10))();
  if ((int)uVar3 != 0) {
    return uVar3;
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*plVar5,&UNK_18097be80,0x16cd,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807b1934(undefined8 param_1,longlong param_2)
void FUN_1807b1934(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong unaff_RBX;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(unaff_RBX + 0x3cc)) {
    lVar3 = 0;
    lVar1 = param_2;
    do {
      if (*(longlong **)(lVar3 + lVar1) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar3 + lVar1) + 0x10))();
        param_2 = *(longlong *)(unaff_RBX + 0x5f0);
        lVar1 = param_2;
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(unaff_RBX + 0x3cc));
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2,&UNK_18097be80,0x16b6,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1807b19af(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_RBX;
  longlong *plVar3;
  int iVar4;
  longlong *in_stack_00000040;
  
  if (*(longlong *)(unaff_RBX + 0x900) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(unaff_RBX + 0x900),
                  &UNK_18097be80,0x16bc,1);
  }
  iVar4 = 0;
  plVar3 = (longlong *)(unaff_RBX + 0x4440);
  while (plVar1 = (longlong *)*plVar3, plVar1 == (longlong *)0x0) {
    iVar4 = iVar4 + 1;
    plVar3 = plVar3 + 1;
    if (0x31 < iVar4) {
      return 0;
    }
  }
  uVar2 = (**(code **)(*plVar1 + 0x120))(plVar1,0,&stack0x00000040);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar2 = (**(code **)(*in_stack_00000040 + 0x10))();
  if ((int)uVar2 != 0) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*plVar3,&UNK_18097be80,0x16cd,1);
}






// 函数: void FUN_1807b1a59(void)
void FUN_1807b1a59(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_1807b1a60(longlong param_1,longlong *param_2,ushort *param_3,uint param_4,char param_5,
             int param_6)

{
  short sVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ushort uVar14;
  ushort uVar15;
  uint uStackX_20;
  
  if (((param_3 == (ushort *)0x0) || (param_2 == (longlong *)0x0)) || (*param_2 == 0)) {
    return 0x1f;
  }
  uStackX_20 = param_4;
  if (param_4 != 0) {
    do {
      uVar2 = FUN_1807b5bc0(param_1,param_2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar13 = 0x4000;
      uVar14 = 0;
      uVar12 = 0x11;
      if ((int)uStackX_20 < 0x4000) {
        uVar13 = uStackX_20 & 0xffff;
      }
      uVar15 = uVar14;
      uVar6 = uVar14;
      if ((ushort)uVar13 != 0) {
        do {
          puVar8 = *(uint **)(param_1 + 0x4430);
          bVar4 = *(byte *)(param_1 + 0x4438);
          bVar10 = (byte)uVar12;
          uVar7 = uVar12 & 0xff;
          uVar9 = *puVar8;
          if (bVar4 < bVar10) {
            puVar8 = puVar8 + 1;
            *(uint **)(param_1 + 0x4430) = puVar8;
            bVar3 = bVar10 - bVar4;
            uVar11 = ((1 << (bVar3 & 0x1f)) - 1U & *puVar8) << (bVar4 & 0x1f) | uVar9;
            *puVar8 = *puVar8 >> (bVar3 & 0x1f);
            bVar3 = 0x20 - bVar3;
            *(byte *)(param_1 + 0x4438) = bVar3;
          }
          else {
            uVar11 = (1 << (bVar10 & 0x1f)) - 1U & uVar9;
            *puVar8 = uVar9 >> (bVar10 & 0x1f);
            *(char *)(param_1 + 0x4438) = *(char *)(param_1 + 0x4438) - bVar10;
            bVar3 = *(byte *)(param_1 + 0x4438);
          }
          if (bVar10 < 7) {
            uVar9 = uVar11;
            if (uVar11 == 1 << (bVar10 - 1 & 0x1f)) {
              puVar8 = *(uint **)(param_1 + 0x4430);
              uVar9 = *puVar8;
              if (bVar3 < 4) {
                puVar8 = puVar8 + 1;
                *(uint **)(param_1 + 0x4430) = puVar8;
                bVar4 = 4 - bVar3;
                uVar12 = uVar9 | ((1 << (bVar4 & 0x1f)) - 1U & *puVar8) << (bVar3 & 0x1f);
                *puVar8 = *puVar8 >> (bVar4 & 0x1f);
                *(byte *)(param_1 + 0x4438) = ' ' - bVar4;
              }
              else {
                uVar12 = uVar9 & 0xf;
                *puVar8 = uVar9 >> 4;
                *(char *)(param_1 + 0x4438) = *(char *)(param_1 + 0x4438) + -4;
              }
              uVar12 = uVar12 + 1;
              if (uVar7 <= uVar12) {
                uVar12 = (uint)(byte)((char)uVar12 + 1);
              }
            }
            else {
LAB_1807b1c60:
              sVar1 = (short)uVar9;
              if (bVar10 < 0x10) {
                sVar1 = (short)(sVar1 << (0x10 - bVar10 & 0x1f)) >> (0x10 - bVar10 & 0x1f);
              }
LAB_1807b1c96:
              uVar6 = uVar6 + sVar1;
              uVar15 = uVar15 + uVar6;
              param_3 = param_3 + param_6;
              uVar5 = uVar6;
              if (param_5 != '\0') {
                uVar5 = uVar15;
              }
              uVar14 = uVar14 + 1;
              *param_3 = uVar5;
            }
          }
          else if (bVar10 < 0x11) {
            uVar9 = uVar11 & 0xffff;
            sVar1 = (short)(0xffff >> (0x11 - bVar10 & 0x1f));
            uVar5 = sVar1 - 8;
            if ((uVar11 <= uVar5) || ((ushort)(sVar1 + 8) < uVar11)) goto LAB_1807b1c60;
            uVar12 = uVar11 - uVar5;
            if (uVar11 - uVar5 < uVar7) {
              uVar12 = uVar12 & 0xff;
            }
            else {
              uVar12 = uVar12 + 1;
            }
          }
          else {
            if (bVar10 != 0x11) {
              if (*(longlong *)(param_1 + 0x4428) == 0) {
                return 0x13;
              }
                    // WARNING: Subroutine does not return
              FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x4428),
                            &UNK_18097be80,0xdf,1);
            }
            sVar1 = (short)uVar11;
            if ((uVar11 >> 0x10 & 1) == 0) goto LAB_1807b1c96;
            uVar12 = (uint)(byte)((char)uVar11 + 1);
          }
        } while (uVar14 < (ushort)uVar13);
      }
      if (*(longlong *)(param_1 + 0x4428) != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x4428),
                      &UNK_18097be80,0xdf,1);
      }
      uStackX_20 = uStackX_20 - uVar13;
    } while (uStackX_20 != 0);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1807b1a98(void)

{
  short sVar1;
  longlong in_RAX;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  longlong unaff_RBX;
  ushort uVar6;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  uint unaff_EDI;
  uint uVar7;
  uint *puVar8;
  int in_R9D;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  ushort *unaff_R12;
  uint uVar13;
  undefined8 unaff_R13;
  ushort uVar14;
  undefined8 unaff_R14;
  ushort uVar15;
  undefined8 unaff_R15;
  uint in_stack_00000088;
  char in_stack_00000090;
  int in_stack_00000098;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBP;
  *(undefined8 *)(in_RAX + -0x20) = unaff_RSI;
  *(undefined8 *)(in_RAX + -0x28) = unaff_R13;
  *(undefined8 *)(in_RAX + -0x30) = unaff_R14;
  *(undefined8 *)(in_RAX + -0x38) = unaff_R15;
  if (in_R9D != 0) {
    do {
      uVar2 = FUN_1807b5bc0();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar13 = 0x4000;
      uVar14 = 0;
      uVar12 = 0x11;
      if ((int)unaff_EDI < 0x4000) {
        uVar13 = unaff_EDI & 0xffff;
      }
      uVar15 = uVar14;
      uVar6 = uVar14;
      if ((ushort)uVar13 != 0) {
        do {
          puVar8 = *(uint **)(unaff_RBX + 0x4430);
          bVar4 = *(byte *)(unaff_RBX + 0x4438);
          bVar10 = (byte)uVar12;
          uVar7 = uVar12 & 0xff;
          uVar9 = *puVar8;
          if (bVar4 < bVar10) {
            puVar8 = puVar8 + 1;
            *(uint **)(unaff_RBX + 0x4430) = puVar8;
            bVar3 = bVar10 - bVar4;
            uVar11 = ((1 << (bVar3 & 0x1f)) - 1U & *puVar8) << (bVar4 & 0x1f) | uVar9;
            *puVar8 = *puVar8 >> (bVar3 & 0x1f);
            bVar3 = 0x20 - bVar3;
            *(byte *)(unaff_RBX + 0x4438) = bVar3;
          }
          else {
            uVar11 = (1 << (bVar10 & 0x1f)) - 1U & uVar9;
            *puVar8 = uVar9 >> (bVar10 & 0x1f);
            *(char *)(unaff_RBX + 0x4438) = *(char *)(unaff_RBX + 0x4438) - bVar10;
            bVar3 = *(byte *)(unaff_RBX + 0x4438);
          }
          if (bVar10 < 7) {
            uVar9 = uVar11;
            if (uVar11 == 1 << (bVar10 - 1 & 0x1f)) {
              puVar8 = *(uint **)(unaff_RBX + 0x4430);
              uVar9 = *puVar8;
              if (bVar3 < 4) {
                puVar8 = puVar8 + 1;
                *(uint **)(unaff_RBX + 0x4430) = puVar8;
                bVar4 = 4 - bVar3;
                uVar12 = uVar9 | ((1 << (bVar4 & 0x1f)) - 1U & *puVar8) << (bVar3 & 0x1f);
                *puVar8 = *puVar8 >> (bVar4 & 0x1f);
                *(byte *)(unaff_RBX + 0x4438) = ' ' - bVar4;
              }
              else {
                uVar12 = uVar9 & 0xf;
                *puVar8 = uVar9 >> 4;
                *(char *)(unaff_RBX + 0x4438) = *(char *)(unaff_RBX + 0x4438) + -4;
              }
              uVar12 = uVar12 + 1;
              if (uVar7 <= uVar12) {
                uVar12 = (uint)(byte)((char)uVar12 + 1);
              }
            }
            else {
LAB_1807b1c60:
              sVar1 = (short)uVar9;
              if (bVar10 < 0x10) {
                sVar1 = (short)(sVar1 << (0x10 - bVar10 & 0x1f)) >> (0x10 - bVar10 & 0x1f);
              }
LAB_1807b1c96:
              uVar6 = uVar6 + sVar1;
              uVar15 = uVar15 + uVar6;
              unaff_R12 = unaff_R12 + in_stack_00000098;
              uVar5 = uVar6;
              if (in_stack_00000090 != '\0') {
                uVar5 = uVar15;
              }
              uVar14 = uVar14 + 1;
              *unaff_R12 = uVar5;
            }
          }
          else if (bVar10 < 0x11) {
            uVar9 = uVar11 & 0xffff;
            sVar1 = (short)(0xffff >> (0x11 - bVar10 & 0x1f));
            uVar5 = sVar1 - 8;
            if ((uVar11 <= uVar5) || ((ushort)(sVar1 + 8) < uVar11)) goto LAB_1807b1c60;
            uVar12 = uVar11 - uVar5;
            if (uVar11 - uVar5 < uVar7) {
              uVar12 = uVar12 & 0xff;
            }
            else {
              uVar12 = uVar12 + 1;
            }
          }
          else {
            if (bVar10 != 0x11) {
              if (*(longlong *)(unaff_RBX + 0x4428) == 0) {
                return 0x13;
              }
                    // WARNING: Subroutine does not return
              FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),
                            *(longlong *)(unaff_RBX + 0x4428),&UNK_18097be80,0xdf,1);
            }
            sVar1 = (short)uVar11;
            if ((uVar11 >> 0x10 & 1) == 0) goto LAB_1807b1c96;
            uVar12 = (uint)(byte)((char)uVar11 + 1);
          }
          unaff_EDI = in_stack_00000088;
        } while (uVar14 < (ushort)uVar13);
      }
      if (*(longlong *)(unaff_RBX + 0x4428) != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(unaff_RBX + 0x4428),
                      &UNK_18097be80,0xdf,1);
      }
      unaff_EDI = unaff_EDI - uVar13;
      in_stack_00000088 = unaff_EDI;
    } while (unaff_EDI != 0);
  }
  return 0;
}



undefined8 FUN_1807b1d89(void)

{
  return 0;
}



undefined8 FUN_1807b1d8d(void)

{
  return 0x1f;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_1807b1da0(longlong param_1,longlong *param_2,char *param_3,uint param_4,char param_5,int param_6
             )

{
  char cVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ushort uVar13;
  char cVar14;
  uint uStackX_20;
  
  if (((param_3 == (char *)0x0) || (param_2 == (longlong *)0x0)) || (*param_2 == 0)) {
    return 0x1f;
  }
  uStackX_20 = param_4;
  if (param_4 != 0) {
    do {
      uVar2 = FUN_1807b5bc0(param_1,param_2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar12 = 0x8000;
      uVar13 = 0;
      uVar11 = 9;
      if ((int)uStackX_20 < 0x8000) {
        uVar12 = uStackX_20 & 0xffff;
      }
      cVar14 = '\0';
      cVar6 = '\0';
      if ((ushort)uVar12 != 0) {
        do {
          puVar8 = *(uint **)(param_1 + 0x4430);
          bVar4 = *(byte *)(param_1 + 0x4438);
          bVar9 = (byte)uVar11;
          uVar7 = uVar11 & 0xff;
          uVar5 = *puVar8;
          if (bVar4 < bVar9) {
            puVar8 = puVar8 + 1;
            *(uint **)(param_1 + 0x4430) = puVar8;
            bVar3 = bVar9 - bVar4;
            uVar10 = ((1 << (bVar3 & 0x1f)) - 1U & *puVar8) << (bVar4 & 0x1f) | uVar5;
            *puVar8 = *puVar8 >> (bVar3 & 0x1f);
            bVar3 = 0x20 - bVar3;
            *(byte *)(param_1 + 0x4438) = bVar3;
          }
          else {
            uVar10 = (1 << (bVar9 & 0x1f)) - 1U & uVar5;
            *puVar8 = uVar5 >> (bVar9 & 0x1f);
            *(char *)(param_1 + 0x4438) = *(char *)(param_1 + 0x4438) - bVar9;
            bVar3 = *(byte *)(param_1 + 0x4438);
          }
          if (bVar9 < 7) {
            uVar5 = uVar10;
            if (uVar10 == 1 << (bVar9 - 1 & 0x1f)) {
              puVar8 = *(uint **)(param_1 + 0x4430);
              uVar5 = *puVar8;
              if (bVar3 < 3) {
                puVar8 = puVar8 + 1;
                *(uint **)(param_1 + 0x4430) = puVar8;
                bVar4 = 3 - bVar3;
                uVar11 = uVar5 | ((1 << (bVar4 & 0x1f)) - 1U & *puVar8) << (bVar3 & 0x1f);
                *puVar8 = *puVar8 >> (bVar4 & 0x1f);
                *(byte *)(param_1 + 0x4438) = ' ' - bVar4;
              }
              else {
                uVar11 = uVar5 & 7;
                *puVar8 = uVar5 >> 3;
                *(char *)(param_1 + 0x4438) = *(char *)(param_1 + 0x4438) + -3;
              }
              uVar11 = uVar11 + 1;
              if (uVar7 <= uVar11) {
                uVar11 = (uint)(byte)((char)uVar11 + 1);
              }
            }
            else {
LAB_1807b1f9a:
              cVar1 = (char)uVar5;
              if (bVar9 < 8) {
                cVar1 = (char)(cVar1 << (8 - bVar9 & 0x1f)) >> (8 - bVar9 & 0x1f);
              }
LAB_1807b1fce:
              cVar6 = cVar6 + cVar1;
              param_3 = param_3 + param_6;
              cVar14 = cVar14 + cVar6;
              cVar1 = cVar6;
              if (param_5 != '\0') {
                cVar1 = cVar14;
              }
              uVar13 = uVar13 + 1;
              *param_3 = cVar1;
            }
          }
          else {
            cVar1 = (char)uVar10;
            if (bVar9 < 9) {
              bVar4 = (char)(0xff >> (9 - bVar9 & 0x1f)) - 4;
              uVar5 = uVar10 & 0xff;
              if ((uVar10 <= bVar4) || (bVar4 + 8 < uVar10)) goto LAB_1807b1f9a;
              uVar11 = uVar10 - bVar4;
              if (uVar10 - bVar4 < uVar7) {
                uVar11 = uVar11 & 0xff;
              }
              else {
                uVar11 = uVar11 + 1;
              }
            }
            else {
              if (bVar9 != 9) {
                if (*(longlong *)(param_1 + 0x4428) == 0) {
                  return 0x13;
                }
                    // WARNING: Subroutine does not return
                FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),
                              *(longlong *)(param_1 + 0x4428),&UNK_18097be80,0xdf,1);
              }
              if ((uVar10 >> 8 & 1) == 0) goto LAB_1807b1fce;
              uVar11 = (uint)(byte)(cVar1 + 1);
            }
          }
        } while (uVar13 < (ushort)uVar12);
      }
      if (*(longlong *)(param_1 + 0x4428) != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x4428),
                      &UNK_18097be80,0xdf,1);
      }
      uStackX_20 = uStackX_20 - uVar12;
    } while (uStackX_20 != 0);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1807b1dd8(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  longlong unaff_RBX;
  char cVar6;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  uint unaff_EDI;
  uint uVar7;
  uint *puVar8;
  int in_R9D;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  char *unaff_R12;
  uint uVar12;
  undefined8 unaff_R13;
  ushort uVar13;
  undefined8 unaff_R14;
  char cVar14;
  undefined8 unaff_R15;
  uint in_stack_00000088;
  char in_stack_00000090;
  int in_stack_00000098;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBP;
  *(undefined8 *)(in_RAX + -0x20) = unaff_RSI;
  *(undefined8 *)(in_RAX + -0x28) = unaff_R13;
  *(undefined8 *)(in_RAX + -0x30) = unaff_R14;
  *(undefined8 *)(in_RAX + -0x38) = unaff_R15;
  if (in_R9D != 0) {
    do {
      uVar2 = FUN_1807b5bc0();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar12 = 0x8000;
      uVar13 = 0;
      uVar11 = 9;
      if ((int)unaff_EDI < 0x8000) {
        uVar12 = unaff_EDI & 0xffff;
      }
      cVar14 = '\0';
      cVar6 = '\0';
      if ((ushort)uVar12 != 0) {
        do {
          puVar8 = *(uint **)(unaff_RBX + 0x4430);
          bVar4 = *(byte *)(unaff_RBX + 0x4438);
          bVar9 = (byte)uVar11;
          uVar7 = uVar11 & 0xff;
          uVar5 = *puVar8;
          if (bVar4 < bVar9) {
            puVar8 = puVar8 + 1;
            *(uint **)(unaff_RBX + 0x4430) = puVar8;
            bVar3 = bVar9 - bVar4;
            uVar10 = ((1 << (bVar3 & 0x1f)) - 1U & *puVar8) << (bVar4 & 0x1f) | uVar5;
            *puVar8 = *puVar8 >> (bVar3 & 0x1f);
            bVar3 = 0x20 - bVar3;
            *(byte *)(unaff_RBX + 0x4438) = bVar3;
          }
          else {
            uVar10 = (1 << (bVar9 & 0x1f)) - 1U & uVar5;
            *puVar8 = uVar5 >> (bVar9 & 0x1f);
            *(char *)(unaff_RBX + 0x4438) = *(char *)(unaff_RBX + 0x4438) - bVar9;
            bVar3 = *(byte *)(unaff_RBX + 0x4438);
          }
          if (bVar9 < 7) {
            uVar5 = uVar10;
            if (uVar10 == 1 << (bVar9 - 1 & 0x1f)) {
              puVar8 = *(uint **)(unaff_RBX + 0x4430);
              uVar5 = *puVar8;
              if (bVar3 < 3) {
                puVar8 = puVar8 + 1;
                *(uint **)(unaff_RBX + 0x4430) = puVar8;
                bVar4 = 3 - bVar3;
                uVar11 = uVar5 | ((1 << (bVar4 & 0x1f)) - 1U & *puVar8) << (bVar3 & 0x1f);
                *puVar8 = *puVar8 >> (bVar4 & 0x1f);
                *(byte *)(unaff_RBX + 0x4438) = ' ' - bVar4;
              }
              else {
                uVar11 = uVar5 & 7;
                *puVar8 = uVar5 >> 3;
                *(char *)(unaff_RBX + 0x4438) = *(char *)(unaff_RBX + 0x4438) + -3;
              }
              uVar11 = uVar11 + 1;
              if (uVar7 <= uVar11) {
                uVar11 = (uint)(byte)((char)uVar11 + 1);
              }
            }
            else {
LAB_1807b1f9a:
              cVar1 = (char)uVar5;
              if (bVar9 < 8) {
                cVar1 = (char)(cVar1 << (8 - bVar9 & 0x1f)) >> (8 - bVar9 & 0x1f);
              }
LAB_1807b1fce:
              cVar6 = cVar6 + cVar1;
              unaff_R12 = unaff_R12 + in_stack_00000098;
              cVar14 = cVar14 + cVar6;
              cVar1 = cVar6;
              if (in_stack_00000090 != '\0') {
                cVar1 = cVar14;
              }
              uVar13 = uVar13 + 1;
              *unaff_R12 = cVar1;
            }
          }
          else {
            cVar1 = (char)uVar10;
            if (bVar9 < 9) {
              bVar4 = (char)(0xff >> (9 - bVar9 & 0x1f)) - 4;
              uVar5 = uVar10 & 0xff;
              if ((uVar10 <= bVar4) || (bVar4 + 8 < uVar10)) goto LAB_1807b1f9a;
              uVar11 = uVar10 - bVar4;
              if (uVar10 - bVar4 < uVar7) {
                uVar11 = uVar11 & 0xff;
              }
              else {
                uVar11 = uVar11 + 1;
              }
            }
            else {
              if (bVar9 != 9) {
                if (*(longlong *)(unaff_RBX + 0x4428) == 0) {
                  return 0x13;
                }
                    // WARNING: Subroutine does not return
                FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),
                              *(longlong *)(unaff_RBX + 0x4428),&UNK_18097be80,0xdf,1);
              }
              if ((uVar10 >> 8 & 1) == 0) goto LAB_1807b1fce;
              uVar11 = (uint)(byte)(cVar1 + 1);
            }
          }
          unaff_EDI = in_stack_00000088;
        } while (uVar13 < (ushort)uVar12);
      }
      if (*(longlong *)(unaff_RBX + 0x4428) != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(unaff_RBX + 0x4428),
                      &UNK_18097be80,0xdf,1);
      }
      unaff_EDI = unaff_EDI - uVar12;
      in_stack_00000088 = unaff_EDI;
    } while (unaff_EDI != 0);
  }
  return 0;
}



undefined8 FUN_1807b20c1(void)

{
  return 0;
}



undefined8 FUN_1807b20c5(void)

{
  return 0x1f;
}






