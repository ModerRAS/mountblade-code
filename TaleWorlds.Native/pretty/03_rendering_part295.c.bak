#include "TaleWorlds.Native.Split.h"

// 03_rendering_part295.c - 3 个函数

// 函数: void FUN_180424f34(uint64_t param_1,uint64_t param_2,int param_3)
void FUN_180424f34(uint64_t param_1,uint64_t param_2,int param_3)

{
  ushort uVar1;
  byte *pbVar2;
  uint uVar3;
  uint in_EAX;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint64_t *unaff_RBX;
  int iVar10;
  longlong lVar11;
  int8_t uVar12;
  uint unaff_R12D;
  int unaff_R14D;
  int iVar13;
  ushort auStackX_20 [4];
  ulonglong in_stack_00000a00;
  
  uVar9 = in_EAX >> 4;
  iVar13 = unaff_R14D + unaff_R12D;
  param_3 = param_3 + -4;
  *(uint *)((longlong)unaff_RBX + 0x14) = uVar9;
  *(int *)(unaff_RBX + 2) = param_3;
  iVar6 = 0;
  uVar4 = (in_EAX & 0xf) + 4;
  if (uVar4 != 0) {
    lVar11 = 0;
    do {
      uVar3 = uVar9;
      if (param_3 < 3) {
        do {
          pbVar2 = (byte *)*unaff_RBX;
          if (pbVar2 < (byte *)unaff_RBX[1]) {
            bVar8 = *pbVar2;
            *unaff_RBX = pbVar2 + 1;
          }
          else {
            bVar8 = 0;
          }
          bVar7 = (byte)param_3;
          param_3 = param_3 + 8;
          uVar9 = (uint)bVar8 << (bVar7 & 0x1f) | uVar9;
          *(int *)(unaff_RBX + 2) = param_3;
          *(uint *)((longlong)unaff_RBX + 0x14) = uVar9;
          uVar3 = uVar9;
        } while (param_3 < 0x19);
      }
      bVar8 = (&unknown_var_6288_ptr)[lVar11];
      param_3 = param_3 + -3;
      *(int *)(unaff_RBX + 2) = param_3;
      uVar9 = uVar3 >> 3;
      lVar11 = lVar11 + 1;
      *(uint *)((longlong)unaff_RBX + 0x14) = uVar9;
      (&stack0x00000810)[bVar8] = (byte)uVar3 & 7;
    } while (lVar11 < (longlong)(ulonglong)uVar4);
  }
  iVar5 = FUN_180424710(auStackX_20,&stack0x00000810,0x13);
  if (iVar5 != 0) {
    do {
      iVar5 = *(int *)(unaff_RBX + 2);
      uVar4 = *(uint *)((longlong)unaff_RBX + 0x14);
      if (iVar5 < 0x10) {
        do {
          pbVar2 = (byte *)*unaff_RBX;
          if (pbVar2 < (byte *)unaff_RBX[1]) {
            bVar8 = *pbVar2;
            *unaff_RBX = pbVar2 + 1;
          }
          else {
            bVar8 = 0;
          }
          bVar7 = (byte)iVar5;
          iVar5 = iVar5 + 8;
          uVar4 = uVar4 | (uint)bVar8 << (bVar7 & 0x1f);
          *(int *)(unaff_RBX + 2) = iVar5;
          *(uint *)((longlong)unaff_RBX + 0x14) = uVar4;
        } while (iVar5 < 0x19);
      }
      uVar1 = auStackX_20[uVar4 & 0x1ff];
      if (uVar1 == 0) {
        uVar4 = FUN_180424980();
      }
      else {
        *(uint *)((longlong)unaff_RBX + 0x14) = uVar4 >> ((byte)(uVar1 >> 9) & 0x1f);
        uVar4 = uVar1 & 0x1ff;
        *(uint *)(unaff_RBX + 2) = iVar5 - (uint)(uVar1 >> 9);
      }
      if (0x12 < uVar4) goto LAB_180425272;
      if (0xf < (int)uVar4) {
        iVar5 = *(int *)(unaff_RBX + 2);
        uVar12 = 0;
        if (uVar4 == 0x10) {
          if (iVar5 < 2) {
            uVar4 = *(uint *)((longlong)unaff_RBX + 0x14);
            do {
              pbVar2 = (byte *)*unaff_RBX;
              if (pbVar2 < (byte *)unaff_RBX[1]) {
                uVar9 = (uint)*pbVar2;
                *unaff_RBX = pbVar2 + 1;
              }
              else {
                uVar9 = 0;
              }
              bVar8 = (byte)iVar5;
              iVar5 = iVar5 + 8;
              uVar4 = uVar9 << (bVar8 & 0x1f) | uVar4;
              *(int *)(unaff_RBX + 2) = iVar5;
              *(uint *)((longlong)unaff_RBX + 0x14) = uVar4;
            } while (iVar5 < 0x19);
          }
          else {
            uVar4 = *(uint *)((longlong)unaff_RBX + 0x14);
          }
          iVar10 = (uVar4 & 3) + 3;
          *(uint *)((longlong)unaff_RBX + 0x14) = uVar4 >> 2;
          *(int *)(unaff_RBX + 2) = iVar5 + -2;
          if (iVar6 == 0) goto LAB_180425272;
          uVar12 = (&stack0x0000082f)[iVar6];
        }
        else {
          if (uVar4 == 0x11) {
            if (iVar5 < 3) {
              uVar4 = *(uint *)((longlong)unaff_RBX + 0x14);
              do {
                pbVar2 = (byte *)*unaff_RBX;
                if (pbVar2 < (byte *)unaff_RBX[1]) {
                  uVar9 = (uint)*pbVar2;
                  *unaff_RBX = pbVar2 + 1;
                }
                else {
                  uVar9 = 0;
                }
                bVar8 = (byte)iVar5;
                iVar5 = iVar5 + 8;
                uVar4 = uVar9 << (bVar8 & 0x1f) | uVar4;
                *(int *)(unaff_RBX + 2) = iVar5;
                *(uint *)((longlong)unaff_RBX + 0x14) = uVar4;
              } while (iVar5 < 0x19);
            }
            else {
              uVar4 = *(uint *)((longlong)unaff_RBX + 0x14);
            }
            *(uint *)((longlong)unaff_RBX + 0x14) = uVar4 >> 3;
            iVar10 = (uVar4 & 7) + 3;
            iVar5 = iVar5 + -3;
          }
          else {
            if (iVar5 < 7) {
              uVar4 = *(uint *)((longlong)unaff_RBX + 0x14);
              do {
                pbVar2 = (byte *)*unaff_RBX;
                if (pbVar2 < (byte *)unaff_RBX[1]) {
                  uVar9 = (uint)*pbVar2;
                  *unaff_RBX = pbVar2 + 1;
                }
                else {
                  uVar9 = 0;
                }
                bVar8 = (byte)iVar5;
                iVar5 = iVar5 + 8;
                uVar4 = uVar9 << (bVar8 & 0x1f) | uVar4;
                *(int *)(unaff_RBX + 2) = iVar5;
                *(uint *)((longlong)unaff_RBX + 0x14) = uVar4;
              } while (iVar5 < 0x19);
            }
            else {
              uVar4 = *(uint *)((longlong)unaff_RBX + 0x14);
            }
            *(uint *)((longlong)unaff_RBX + 0x14) = uVar4 >> 7;
            iVar10 = (uVar4 & 0x7f) + 0xb;
            iVar5 = iVar5 + -7;
          }
          *(int *)(unaff_RBX + 2) = iVar5;
        }
        if (iVar10 <= iVar13 - iVar6) {
                    // WARNING: Subroutine does not return
          memset(&stack0x00000830 + iVar6,uVar12,iVar10);
        }
        goto LAB_180425272;
      }
      (&stack0x00000830)[iVar6] = (char)uVar4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar13);
    if ((iVar6 == iVar13) &&
       (iVar6 = FUN_180424710((longlong)unaff_RBX + 0x34,&stack0x00000830,unaff_R12D), iVar6 != 0))
    {
      FUN_180424710(unaff_RBX + 0x103,&stack0x00000830 + unaff_R12D,unaff_R14D);
    }
  }
LAB_180425272:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000a00 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180424f7f(uint param_1,uint64_t param_2,int param_3)
void FUN_180424f7f(uint param_1,uint64_t param_2,int param_3)

{
  ushort uVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint64_t *unaff_RBX;
  uint unaff_EBP;
  longlong unaff_RSI;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int8_t uVar10;
  uint unaff_R12D;
  int32_t unaff_R14D;
  uint unaff_R15D;
  ushort auStackX_20 [4];
  ulonglong in_stack_00000a00;
  
  uVar8 = (ulonglong)unaff_EBP;
  do {
    if (param_3 < 3) {
      do {
        pbVar2 = (byte *)*unaff_RBX;
        if (pbVar2 < (byte *)unaff_RBX[1]) {
          bVar5 = *pbVar2;
          *unaff_RBX = pbVar2 + 1;
        }
        else {
          bVar5 = 0;
        }
        bVar4 = (byte)param_3;
        param_3 = param_3 + 8;
        param_1 = (uint)bVar5 << (bVar4 & 0x1f) | param_1;
        *(int *)(unaff_RBX + 2) = param_3;
        *(uint *)((longlong)unaff_RBX + 0x14) = param_1;
      } while (param_3 < 0x19);
    }
    bVar5 = (&unknown_var_6288_ptr)[uVar8];
    param_3 = param_3 + -3;
    *(int *)(unaff_RBX + 2) = param_3;
    uVar8 = uVar8 + 1;
    *(uint *)((longlong)unaff_RBX + 0x14) = param_1 >> 3;
    (&stack0x00000810)[bVar5] = (byte)param_1 & 7;
    param_1 = param_1 >> 3;
  } while ((longlong)uVar8 < unaff_RSI);
  iVar3 = FUN_180424710(auStackX_20,&stack0x00000810,0x13);
  if (iVar3 != 0) {
    do {
      iVar3 = *(int *)(unaff_RBX + 2);
      uVar9 = *(uint *)((longlong)unaff_RBX + 0x14);
      if (iVar3 < 0x10) {
        do {
          pbVar2 = (byte *)*unaff_RBX;
          if (pbVar2 < (byte *)unaff_RBX[1]) {
            bVar5 = *pbVar2;
            *unaff_RBX = pbVar2 + 1;
          }
          else {
            bVar5 = 0;
          }
          bVar4 = (byte)iVar3;
          iVar3 = iVar3 + 8;
          uVar9 = uVar9 | (uint)bVar5 << (bVar4 & 0x1f);
          *(int *)(unaff_RBX + 2) = iVar3;
          *(uint *)((longlong)unaff_RBX + 0x14) = uVar9;
        } while (iVar3 < 0x19);
      }
      uVar1 = auStackX_20[uVar9 & 0x1ff];
      if (uVar1 == 0) {
        uVar9 = FUN_180424980();
      }
      else {
        *(uint *)((longlong)unaff_RBX + 0x14) = uVar9 >> ((byte)(uVar1 >> 9) & 0x1f);
        uVar9 = uVar1 & 0x1ff;
        *(uint *)(unaff_RBX + 2) = iVar3 - (uint)(uVar1 >> 9);
      }
      if (0x12 < uVar9) goto LAB_180425272;
      if (0xf < (int)uVar9) {
        iVar3 = *(int *)(unaff_RBX + 2);
        uVar10 = 0;
        if (uVar9 == 0x10) {
          if (iVar3 < 2) {
            uVar9 = *(uint *)((longlong)unaff_RBX + 0x14);
            do {
              pbVar2 = (byte *)*unaff_RBX;
              if (pbVar2 < (byte *)unaff_RBX[1]) {
                uVar6 = (uint)*pbVar2;
                *unaff_RBX = pbVar2 + 1;
              }
              else {
                uVar6 = 0;
              }
              bVar5 = (byte)iVar3;
              iVar3 = iVar3 + 8;
              uVar9 = uVar6 << (bVar5 & 0x1f) | uVar9;
              *(int *)(unaff_RBX + 2) = iVar3;
              *(uint *)((longlong)unaff_RBX + 0x14) = uVar9;
            } while (iVar3 < 0x19);
          }
          else {
            uVar9 = *(uint *)((longlong)unaff_RBX + 0x14);
          }
          iVar7 = (uVar9 & 3) + 3;
          *(uint *)((longlong)unaff_RBX + 0x14) = uVar9 >> 2;
          *(int *)(unaff_RBX + 2) = iVar3 + -2;
          if (unaff_EBP == 0) goto LAB_180425272;
          uVar10 = (&stack0x0000082f)[(int)unaff_EBP];
        }
        else {
          if (uVar9 == 0x11) {
            if (iVar3 < 3) {
              uVar9 = *(uint *)((longlong)unaff_RBX + 0x14);
              do {
                pbVar2 = (byte *)*unaff_RBX;
                if (pbVar2 < (byte *)unaff_RBX[1]) {
                  uVar6 = (uint)*pbVar2;
                  *unaff_RBX = pbVar2 + 1;
                }
                else {
                  uVar6 = 0;
                }
                bVar5 = (byte)iVar3;
                iVar3 = iVar3 + 8;
                uVar9 = uVar6 << (bVar5 & 0x1f) | uVar9;
                *(int *)(unaff_RBX + 2) = iVar3;
                *(uint *)((longlong)unaff_RBX + 0x14) = uVar9;
              } while (iVar3 < 0x19);
            }
            else {
              uVar9 = *(uint *)((longlong)unaff_RBX + 0x14);
            }
            *(uint *)((longlong)unaff_RBX + 0x14) = uVar9 >> 3;
            iVar7 = (uVar9 & 7) + 3;
            iVar3 = iVar3 + -3;
          }
          else {
            if (iVar3 < 7) {
              uVar9 = *(uint *)((longlong)unaff_RBX + 0x14);
              do {
                pbVar2 = (byte *)*unaff_RBX;
                if (pbVar2 < (byte *)unaff_RBX[1]) {
                  uVar6 = (uint)*pbVar2;
                  *unaff_RBX = pbVar2 + 1;
                }
                else {
                  uVar6 = 0;
                }
                bVar5 = (byte)iVar3;
                iVar3 = iVar3 + 8;
                uVar9 = uVar6 << (bVar5 & 0x1f) | uVar9;
                *(int *)(unaff_RBX + 2) = iVar3;
                *(uint *)((longlong)unaff_RBX + 0x14) = uVar9;
              } while (iVar3 < 0x19);
            }
            else {
              uVar9 = *(uint *)((longlong)unaff_RBX + 0x14);
            }
            *(uint *)((longlong)unaff_RBX + 0x14) = uVar9 >> 7;
            iVar7 = (uVar9 & 0x7f) + 0xb;
            iVar3 = iVar3 + -7;
          }
          *(int *)(unaff_RBX + 2) = iVar3;
        }
        if (iVar7 <= (int)(unaff_R15D - unaff_EBP)) {
                    // WARNING: Subroutine does not return
          memset(&stack0x00000830 + (int)unaff_EBP,uVar10,iVar7);
        }
        goto LAB_180425272;
      }
      (&stack0x00000830)[(int)unaff_EBP] = (char)uVar9;
      unaff_EBP = unaff_EBP + 1;
    } while ((int)unaff_EBP < (int)unaff_R15D);
    if ((unaff_EBP == unaff_R15D) &&
       (iVar3 = FUN_180424710((longlong)unaff_RBX + 0x34,&stack0x00000830,unaff_R12D), iVar3 != 0))
    {
      FUN_180424710(unaff_RBX + 0x103,&stack0x00000830 + unaff_R12D,unaff_R14D);
    }
  }
LAB_180425272:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000a00 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18042500e(void)
void FUN_18042500e(void)

{
  ushort uVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint64_t *unaff_RBX;
  int unaff_EBP;
  int iVar7;
  uint uVar8;
  int8_t uVar9;
  uint unaff_R12D;
  int32_t unaff_R14D;
  int unaff_R15D;
  ushort auStackX_20 [4];
  ulonglong in_stack_00000a00;
  
  iVar3 = FUN_180424710(auStackX_20,&stack0x00000810,0x13);
  if (iVar3 != 0) {
    do {
      iVar3 = *(int *)(unaff_RBX + 2);
      uVar8 = *(uint *)((longlong)unaff_RBX + 0x14);
      if (iVar3 < 0x10) {
        do {
          pbVar2 = (byte *)*unaff_RBX;
          if (pbVar2 < (byte *)unaff_RBX[1]) {
            bVar5 = *pbVar2;
            *unaff_RBX = pbVar2 + 1;
          }
          else {
            bVar5 = 0;
          }
          bVar4 = (byte)iVar3;
          iVar3 = iVar3 + 8;
          uVar8 = uVar8 | (uint)bVar5 << (bVar4 & 0x1f);
          *(int *)(unaff_RBX + 2) = iVar3;
          *(uint *)((longlong)unaff_RBX + 0x14) = uVar8;
        } while (iVar3 < 0x19);
      }
      uVar1 = auStackX_20[uVar8 & 0x1ff];
      if (uVar1 == 0) {
        uVar8 = FUN_180424980();
      }
      else {
        *(uint *)((longlong)unaff_RBX + 0x14) = uVar8 >> ((byte)(uVar1 >> 9) & 0x1f);
        uVar8 = uVar1 & 0x1ff;
        *(uint *)(unaff_RBX + 2) = iVar3 - (uint)(uVar1 >> 9);
      }
      if (0x12 < uVar8) goto LAB_180425272;
      if (0xf < (int)uVar8) {
        iVar3 = *(int *)(unaff_RBX + 2);
        uVar9 = 0;
        if (uVar8 == 0x10) {
          if (iVar3 < 2) {
            uVar8 = *(uint *)((longlong)unaff_RBX + 0x14);
            do {
              pbVar2 = (byte *)*unaff_RBX;
              if (pbVar2 < (byte *)unaff_RBX[1]) {
                uVar6 = (uint)*pbVar2;
                *unaff_RBX = pbVar2 + 1;
              }
              else {
                uVar6 = 0;
              }
              bVar5 = (byte)iVar3;
              iVar3 = iVar3 + 8;
              uVar8 = uVar6 << (bVar5 & 0x1f) | uVar8;
              *(int *)(unaff_RBX + 2) = iVar3;
              *(uint *)((longlong)unaff_RBX + 0x14) = uVar8;
            } while (iVar3 < 0x19);
          }
          else {
            uVar8 = *(uint *)((longlong)unaff_RBX + 0x14);
          }
          iVar7 = (uVar8 & 3) + 3;
          *(uint *)((longlong)unaff_RBX + 0x14) = uVar8 >> 2;
          *(int *)(unaff_RBX + 2) = iVar3 + -2;
          if (unaff_EBP == 0) goto LAB_180425272;
          uVar9 = (&stack0x0000082f)[unaff_EBP];
        }
        else {
          if (uVar8 == 0x11) {
            if (iVar3 < 3) {
              uVar8 = *(uint *)((longlong)unaff_RBX + 0x14);
              do {
                pbVar2 = (byte *)*unaff_RBX;
                if (pbVar2 < (byte *)unaff_RBX[1]) {
                  uVar6 = (uint)*pbVar2;
                  *unaff_RBX = pbVar2 + 1;
                }
                else {
                  uVar6 = 0;
                }
                bVar5 = (byte)iVar3;
                iVar3 = iVar3 + 8;
                uVar8 = uVar6 << (bVar5 & 0x1f) | uVar8;
                *(int *)(unaff_RBX + 2) = iVar3;
                *(uint *)((longlong)unaff_RBX + 0x14) = uVar8;
              } while (iVar3 < 0x19);
            }
            else {
              uVar8 = *(uint *)((longlong)unaff_RBX + 0x14);
            }
            *(uint *)((longlong)unaff_RBX + 0x14) = uVar8 >> 3;
            iVar7 = (uVar8 & 7) + 3;
            iVar3 = iVar3 + -3;
          }
          else {
            if (iVar3 < 7) {
              uVar8 = *(uint *)((longlong)unaff_RBX + 0x14);
              do {
                pbVar2 = (byte *)*unaff_RBX;
                if (pbVar2 < (byte *)unaff_RBX[1]) {
                  uVar6 = (uint)*pbVar2;
                  *unaff_RBX = pbVar2 + 1;
                }
                else {
                  uVar6 = 0;
                }
                bVar5 = (byte)iVar3;
                iVar3 = iVar3 + 8;
                uVar8 = uVar6 << (bVar5 & 0x1f) | uVar8;
                *(int *)(unaff_RBX + 2) = iVar3;
                *(uint *)((longlong)unaff_RBX + 0x14) = uVar8;
              } while (iVar3 < 0x19);
            }
            else {
              uVar8 = *(uint *)((longlong)unaff_RBX + 0x14);
            }
            *(uint *)((longlong)unaff_RBX + 0x14) = uVar8 >> 7;
            iVar7 = (uVar8 & 0x7f) + 0xb;
            iVar3 = iVar3 + -7;
          }
          *(int *)(unaff_RBX + 2) = iVar3;
        }
        if (iVar7 <= unaff_R15D - unaff_EBP) {
                    // WARNING: Subroutine does not return
          memset(&stack0x00000830 + unaff_EBP,uVar9,iVar7);
        }
        goto LAB_180425272;
      }
      (&stack0x00000830)[unaff_EBP] = (char)uVar8;
      unaff_EBP = unaff_EBP + 1;
    } while (unaff_EBP < unaff_R15D);
    if ((unaff_EBP == unaff_R15D) &&
       (iVar3 = FUN_180424710((longlong)unaff_RBX + 0x34,&stack0x00000830,unaff_R12D), iVar3 != 0))
    {
      FUN_180424710(unaff_RBX + 0x103,&stack0x00000830 + unaff_R12D,unaff_R14D);
    }
  }
LAB_180425272:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000a00 ^ (ulonglong)&stack0x00000000);
}





