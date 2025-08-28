#include "TaleWorlds.Native.Split.h"

// 99_part_11_part065.c - 6 个函数

// 函数: void FUN_1807c4b10(longlong param_1)
void FUN_1807c4b10(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_688 [32];
  ulonglong uStack_668;
  undefined4 uStack_660;
  undefined1 uStack_658;
  char cStack_648;
  char acStack_647 [3];
  undefined4 auStack_644 [3];
  char acStack_638 [1024];
  char acStack_238 [512];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_688;
  auStack_644[0] = 0x200;
  iVar2 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0,0);
  if (iVar2 == 0) {
    uVar10 = 0;
    uStack_668 = 0;
    iVar2 = FUN_1807c4340(param_1,acStack_638,auStack_644,0);
    if ((iVar2 == 0) && (iVar2 = FUN_18076b6f0(&UNK_18097c6e8,acStack_638,0xb), iVar2 == 0)) {
      while( true ) {
        cStack_648 = '\0';
        do {
          iVar2 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),acStack_647);
          if (iVar2 != 0) goto FUN_1807c500d;
        } while ((((acStack_647[0] == ' ') || (acStack_647[0] == '\t')) || (acStack_647[0] == '\n'))
                || (acStack_647[0] == '\r'));
        iVar2 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xffffffff,1);
        if (iVar2 != 0) goto FUN_1807c500d;
        do {
          iVar2 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_648);
          if (iVar2 != 0) goto FUN_1807c500d;
        } while (cStack_648 != '<');
        pcVar7 = acStack_638;
        uVar3 = uVar10;
        do {
          iVar2 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_648);
          if (iVar2 != 0) goto FUN_1807c500d;
          if ((int)uVar3 < 0x200) {
            uVar3 = (ulonglong)((int)uVar3 + 1);
            *pcVar7 = cStack_648;
            pcVar7 = pcVar7 + 1;
          }
        } while (cStack_648 != '>');
        iVar2 = FUN_1807c62b0(param_1,0);
        uVar8 = uVar10;
        uVar9 = uVar10;
        if (iVar2 != 0) goto FUN_1807c500d;
        do {
          iVar2 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_648);
          if (iVar2 != 0) goto FUN_1807c500d;
          if ((longlong)uVar8 < 0x200) {
            uVar9 = (ulonglong)((int)uVar9 + 1);
            acStack_238[uVar8] = cStack_648;
            uVar8 = uVar8 + 1;
          }
        } while (cStack_648 != '<');
        iVar11 = (int)uVar9 + -1;
        iVar2 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_648);
        if (iVar2 != 0) goto FUN_1807c500d;
        if (cStack_648 == '/') {
          do {
            iVar2 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_648);
            if (iVar2 != 0) goto FUN_1807c500d;
          } while (cStack_648 != '>');
        }
        else {
          iVar2 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xfffffffe,1);
          if (iVar2 != 0) goto FUN_1807c500d;
        }
        uVar3 = (ulonglong)((int)uVar3 + -1);
        if (0x1ff < uVar3) break;
        acStack_638[uVar3] = '\0';
        if (0x1ff < (ulonglong)(longlong)iVar11) break;
        acStack_238[iVar11] = '\0';
        iVar2 = FUN_18076b6f0(&UNK_18097c6f4,acStack_638,5);
        if (iVar2 == 0) {
          uStack_658 = 0;
          uStack_660 = 6;
          uStack_668 = uStack_668 & 0xffffffff00000000;
          FUN_180772fe0(param_1,8,&UNK_18097c6f4,0);
        }
        else if (iVar11 == 0) {
          cVar5 = '\0';
          uVar3 = uVar10;
          do {
            if ((longlong)uVar3 < 0x200) {
              cVar5 = acStack_638[uVar3];
              uVar3 = uVar3 + 1;
            }
            uVar8 = uVar10;
            uVar9 = uVar10;
          } while (cVar5 != '\"');
          do {
            uVar6 = (uint)uVar9;
            pcVar7 = acStack_638 + uVar3;
            uVar3 = uVar3 + 1;
            if (*pcVar7 == '\"') break;
            acStack_638[uVar8 + 0x200] = *pcVar7;
            uVar6 = uVar6 + 1;
            uVar8 = uVar8 + 1;
            uVar9 = (ulonglong)uVar6;
          } while ((longlong)uVar3 < 0x1ff);
          acStack_638[uVar8 + 0x200] = '\0';
          iVar2 = FUN_18076b6f0(&UNK_18097c700,acStack_638,8);
          if (iVar2 == 0) {
            uStack_658 = 0;
            uStack_660 = 6;
            uStack_668 = CONCAT44(uStack_668._4_4_,uVar6 + 1);
            FUN_180772fe0(param_1,8,&UNK_18097c70c,acStack_638 + 0x200);
          }
          else {
            iVar2 = FUN_18076b6f0(&UNK_18097c718,acStack_638,0xd);
            if (iVar2 == 0) {
              uStack_658 = 0;
              uStack_660 = 6;
              uStack_668 = CONCAT44(uStack_668._4_4_,uVar6 + 1);
              FUN_180772fe0(param_1,8,&UNK_18097c728,acStack_638 + 0x200);
            }
            else {
              iVar2 = FUN_18076b6f0(&UNK_18097c738,acStack_638,0xe);
              if (iVar2 == 0) {
                uStack_658 = 0;
                uStack_660 = 6;
                uStack_668 = CONCAT44(uStack_668._4_4_,uVar6 + 1);
                FUN_180772fe0(param_1,8,&UNK_18097c748,acStack_638 + 0x200);
              }
              else {
                iVar2 = FUN_18076b6f0(&UNK_18097c758,acStack_638,9);
                if (iVar2 == 0) {
                  uStack_658 = 0;
                  uStack_660 = 6;
                  uStack_668 = CONCAT44(uStack_668._4_4_,uVar6 + 1);
                  FUN_180772fe0(param_1,8,&UNK_18097c764,acStack_638 + 0x200);
                }
                else {
                  iVar2 = FUN_18076b6f0(&UNK_18097c770,acStack_638,0xb);
                  if (iVar2 == 0) {
                    uStack_658 = 0;
                    uStack_660 = 6;
                    uStack_668 = CONCAT44(uStack_668._4_4_,uVar6 + 1);
                    FUN_180772fe0(param_1,8,&UNK_18097c77c,acStack_638 + 0x200);
                  }
                }
              }
            }
          }
        }
        else {
          uVar4 = func_0x00018076b870(acStack_638);
          uStack_658 = 0;
          uStack_660 = 6;
          uStack_668 = CONCAT44(uStack_668._4_4_,(int)uVar9);
          FUN_180772fe0(param_1,8,uVar4,acStack_238);
        }
      }
      FUN_1808fcdc8();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
FUN_1807c500d:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_688);
}






// 函数: void FUN_1807c4b57(void)
void FUN_1807c4b57(void)

{
  code *pcVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  char *pcVar5;
  ulonglong uVar6;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  char cStack0000000000000040;
  char cStack0000000000000041;
  
  uVar8 = 0;
  iVar2 = FUN_1807c4340();
  if ((iVar2 != 0) || (iVar2 = FUN_18076b6f0(&UNK_18097c6e8,&stack0x00000050,0xb), iVar2 != 0)) {
FUN_1807c5005:
                    // WARNING: Subroutine does not return
    FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x550) ^ (ulonglong)&stack0x00000000);
  }
  while( true ) {
    cStack0000000000000040 = '\0';
    do {
      iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),(longlong)&stack0x00000040 + 1);
      if (iVar2 != 0) goto FUN_1807c5005;
    } while ((((cStack0000000000000041 == ' ') || (cStack0000000000000041 == '\t')) ||
             (cStack0000000000000041 == '\n')) || (cStack0000000000000041 == '\r'));
    iVar2 = FUN_18076a440(*(undefined8 *)(unaff_RSI + 0x170),0xffffffff,1);
    if (iVar2 != 0) goto FUN_1807c5005;
    do {
      iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),&stack0x00000040);
      if (iVar2 != 0) goto FUN_1807c5005;
    } while (cStack0000000000000040 != '<');
    pcVar5 = &stack0x00000050;
    uVar3 = uVar8;
    do {
      iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),&stack0x00000040);
      if (iVar2 != 0) goto FUN_1807c5005;
      if ((int)uVar3 < 0x200) {
        uVar3 = (ulonglong)((int)uVar3 + 1);
        *pcVar5 = cStack0000000000000040;
        pcVar5 = pcVar5 + 1;
      }
    } while (cStack0000000000000040 != '>');
    iVar2 = FUN_1807c62b0();
    uVar6 = uVar8;
    uVar7 = uVar8;
    if (iVar2 != 0) goto FUN_1807c5005;
    do {
      iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),&stack0x00000040);
      if (iVar2 != 0) goto FUN_1807c5005;
      if ((longlong)uVar6 < 0x200) {
        uVar7 = (ulonglong)((int)uVar7 + 1);
        *(char *)(unaff_RBP + 0x350 + uVar6) = cStack0000000000000040;
        uVar6 = uVar6 + 1;
      }
    } while (cStack0000000000000040 != '<');
    iVar9 = (int)uVar7 + -1;
    iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),&stack0x00000040);
    if (iVar2 != 0) goto FUN_1807c5005;
    if (cStack0000000000000040 == '/') {
      do {
        iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),&stack0x00000040);
        if (iVar2 != 0) goto FUN_1807c5005;
      } while (cStack0000000000000040 != '>');
    }
    else {
      iVar2 = FUN_18076a440(*(undefined8 *)(unaff_RSI + 0x170),0xfffffffe,1);
      if (iVar2 != 0) goto FUN_1807c5005;
    }
    uVar3 = (ulonglong)((int)uVar3 + -1);
    if (0x1ff < uVar3) break;
    (&stack0x00000050)[uVar3] = 0;
    if (0x1ff < (ulonglong)(longlong)iVar9) break;
    *(undefined1 *)(unaff_RBP + 0x350 + (longlong)iVar9) = 0;
    iVar2 = FUN_18076b6f0(&UNK_18097c6f4,&stack0x00000050,5);
    if (iVar2 == 0) {
      FUN_180772fe0();
    }
    else if (iVar9 == 0) {
      cVar4 = '\0';
      uVar3 = uVar8;
      do {
        if ((longlong)uVar3 < 0x200) {
          cVar4 = (&stack0x00000050)[uVar3];
          uVar3 = uVar3 + 1;
        }
        uVar6 = uVar8;
      } while (cVar4 != '\"');
      do {
        pcVar5 = &stack0x00000050 + uVar3;
        uVar3 = uVar3 + 1;
        if (*pcVar5 == '\"') break;
        *(char *)(unaff_RBP + 0x150 + uVar6) = *pcVar5;
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar3 < 0x1ff);
      *(undefined1 *)(unaff_RBP + 0x150 + uVar6) = 0;
      iVar2 = FUN_18076b6f0(&UNK_18097c700,&stack0x00000050,8);
      if (iVar2 == 0) {
        FUN_180772fe0();
      }
      else {
        iVar2 = FUN_18076b6f0(&UNK_18097c718,&stack0x00000050,0xd);
        if (iVar2 == 0) {
          FUN_180772fe0();
        }
        else {
          iVar2 = FUN_18076b6f0(&UNK_18097c738,&stack0x00000050,0xe);
          if (iVar2 == 0) {
            FUN_180772fe0();
          }
          else {
            iVar2 = FUN_18076b6f0(&UNK_18097c758,&stack0x00000050,9);
            if (iVar2 == 0) {
              FUN_180772fe0();
            }
            else {
              iVar2 = FUN_18076b6f0(&UNK_18097c770,&stack0x00000050,0xb);
              if (iVar2 == 0) {
                FUN_180772fe0();
              }
            }
          }
        }
      }
    }
    else {
      func_0x00018076b870(&stack0x00000050);
      FUN_180772fe0();
    }
  }
  FUN_1808fcdc8();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}






// 函数: void FUN_1807c4ba8(void)
void FUN_1807c4ba8(void)

{
  code *pcVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  char *pcVar5;
  ulonglong uVar6;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar7;
  undefined1 uVar8;
  ulonglong unaff_R12;
  int iVar9;
  char cStack0000000000000040;
  char cStack0000000000000041;
  
  do {
    uVar3 = unaff_R12 & 0xffffffff;
    cStack0000000000000040 = (char)uVar3;
    do {
      iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),(longlong)&stack0x00000040 + 1);
      if (iVar2 != 0) goto LAB_1807c4fe3;
    } while ((((cStack0000000000000041 == ' ') || (cStack0000000000000041 == '\t')) ||
             (cStack0000000000000041 == '\n')) || (cStack0000000000000041 == '\r'));
    iVar2 = FUN_18076a440(*(undefined8 *)(unaff_RSI + 0x170),0xffffffff,1);
    if (iVar2 != 0) {
LAB_1807c4fe3:
                    // WARNING: Subroutine does not return
      FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x550) ^ (ulonglong)&stack0x00000000);
    }
    do {
      iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),&stack0x00000040);
      if (iVar2 != 0) goto LAB_1807c4fe3;
    } while (cStack0000000000000040 != '<');
    pcVar5 = &stack0x00000050;
    do {
      iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),&stack0x00000040);
      if (iVar2 != 0) goto LAB_1807c4fe3;
      if ((int)uVar3 < 0x200) {
        uVar3 = (ulonglong)((int)uVar3 + 1);
        *pcVar5 = cStack0000000000000040;
        pcVar5 = pcVar5 + 1;
      }
    } while (cStack0000000000000040 != '>');
    uVar7 = unaff_R12 & 0xffffffff;
    iVar2 = FUN_1807c62b0();
    uVar6 = unaff_R12;
    if (iVar2 != 0) goto LAB_1807c4fe3;
    do {
      iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),&stack0x00000040);
      if (iVar2 != 0) goto LAB_1807c4fe3;
      if ((longlong)uVar6 < 0x200) {
        uVar7 = (ulonglong)((int)uVar7 + 1);
        *(char *)(unaff_RBP + 0x350 + uVar6) = cStack0000000000000040;
        uVar6 = uVar6 + 1;
      }
    } while (cStack0000000000000040 != '<');
    iVar9 = (int)uVar7 + -1;
    iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),&stack0x00000040);
    if (iVar2 != 0) goto LAB_1807c4fe3;
    if (cStack0000000000000040 == '/') {
      do {
        iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),&stack0x00000040);
        if (iVar2 != 0) goto LAB_1807c4fe3;
      } while (cStack0000000000000040 != '>');
    }
    else {
      iVar2 = FUN_18076a440(*(undefined8 *)(unaff_RSI + 0x170),0xfffffffe,1);
      if (iVar2 != 0) goto LAB_1807c4fe3;
    }
    uVar3 = (ulonglong)((int)uVar3 + -1);
    if (0x1ff < uVar3) {
FUN_1807c5026:
      FUN_1808fcdc8();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar8 = (undefined1)unaff_R12;
    (&stack0x00000050)[uVar3] = uVar8;
    if (0x1ff < (ulonglong)(longlong)iVar9) goto FUN_1807c5026;
    *(undefined1 *)(unaff_RBP + 0x350 + (longlong)iVar9) = uVar8;
    iVar2 = FUN_18076b6f0(&UNK_18097c6f4,&stack0x00000050,5);
    if (iVar2 == 0) {
      FUN_180772fe0();
    }
    else if (iVar9 == 0) {
      cVar4 = '\0';
      uVar3 = unaff_R12;
      do {
        if ((longlong)uVar3 < 0x200) {
          cVar4 = (&stack0x00000050)[uVar3];
          uVar3 = uVar3 + 1;
        }
        uVar6 = unaff_R12;
      } while (cVar4 != '\"');
      do {
        pcVar5 = &stack0x00000050 + uVar3;
        uVar3 = uVar3 + 1;
        if (*pcVar5 == '\"') break;
        *(char *)(unaff_RBP + 0x150 + uVar6) = *pcVar5;
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar3 < 0x1ff);
      *(undefined1 *)(unaff_RBP + 0x150 + uVar6) = uVar8;
      iVar2 = FUN_18076b6f0(&UNK_18097c700,&stack0x00000050,8);
      if (iVar2 == 0) {
        FUN_180772fe0();
      }
      else {
        iVar2 = FUN_18076b6f0(&UNK_18097c718,&stack0x00000050,0xd);
        if (iVar2 == 0) {
          FUN_180772fe0();
        }
        else {
          iVar2 = FUN_18076b6f0(&UNK_18097c738,&stack0x00000050,0xe);
          if (iVar2 == 0) {
            FUN_180772fe0();
          }
          else {
            iVar2 = FUN_18076b6f0(&UNK_18097c758,&stack0x00000050,9);
            if (iVar2 == 0) {
              FUN_180772fe0();
            }
            else {
              iVar2 = FUN_18076b6f0(&UNK_18097c770,&stack0x00000050,0xb);
              if (iVar2 == 0) {
                FUN_180772fe0();
              }
            }
          }
        }
      }
    }
    else {
      func_0x00018076b870(&stack0x00000050);
      FUN_180772fe0();
    }
  } while( true );
}






// 函数: void FUN_1807c5005(void)
void FUN_1807c5005(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x550) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807c500d(void)
void FUN_1807c500d(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x550) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807c5026(void)
void FUN_1807c5026(void)

{
  code *pcVar1;
  
  FUN_1808fcdc8();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




