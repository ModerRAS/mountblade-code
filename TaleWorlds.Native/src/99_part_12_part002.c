#include "TaleWorlds.Native.Split.h"

// 99_part_12_part002.c - 9 个函数

// 函数: void FUN_1807c5c8d(void)
void FUN_1807c5c8d(void)

{
  int iVar1;
  longlong unaff_RBX;
  longlong lVar2;
  char cStack0000000000000040;
  char cStack0000000000000041;
  char cStack0000000000000042;
  char cStack0000000000000043;
  char cStack0000000000000044;
  char cStack0000000000000045;
  ulonglong in_stack_00000250;
  
LAB_1807c5ca0:
  do {
    iVar1 = FUN_180769720(*(undefined8 *)(unaff_RBX + 0x170),(longlong)&stack0x00000040 + 1);
    if (iVar1 != 0) {
LAB_1807c5e99:
                    // WARNING: Subroutine does not return
      FUN_1808fc050(in_stack_00000250 ^ (ulonglong)&stack0x00000000);
    }
    if ((((cStack0000000000000041 != ' ') && (cStack0000000000000041 != '\t')) &&
        (cStack0000000000000041 != '\n')) && (cStack0000000000000041 != '\r')) {
      iVar1 = FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),0xffffffff,1);
      if ((iVar1 != 0) ||
         (iVar1 = FUN_180769720(*(undefined8 *)(unaff_RBX + 0x170),&stack0x00000040), iVar1 != 0))
      goto LAB_1807c5e99;
      if ((cStack0000000000000040 == '#') || (cStack0000000000000040 == '[')) {
        do {
          do {
            iVar1 = FUN_180769720(*(undefined8 *)(unaff_RBX + 0x170),&stack0x00000040);
            if (iVar1 != 0) goto LAB_1807c5e99;
            if (cStack0000000000000040 == '\n') goto LAB_1807c5ca0;
          } while (cStack0000000000000040 != '\r');
          FUN_180769720(*(undefined8 *)(unaff_RBX + 0x170),(longlong)&stack0x00000040 + 2);
          FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),0xffffffff,1);
        } while (cStack0000000000000042 == '\n');
      }
      else {
        iVar1 = FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),0xffffffff,1);
        if (iVar1 != 0) goto LAB_1807c5e99;
        lVar2 = 0;
        do {
          iVar1 = FUN_180769720(*(undefined8 *)(unaff_RBX + 0x170),(longlong)&stack0x00000040 + 3);
          if (iVar1 != 0) goto LAB_1807c5e99;
        } while (((cStack0000000000000043 == ' ') || (cStack0000000000000043 == '\t')) ||
                ((cStack0000000000000043 == '\n' || (cStack0000000000000043 == '\r'))));
        iVar1 = FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),0xffffffff,1);
        if (iVar1 != 0) goto LAB_1807c5e99;
LAB_1807c5de0:
        do {
          iVar1 = FUN_180769720(*(undefined8 *)(unaff_RBX + 0x170),(longlong)&stack0x00000040 + 4);
          if (iVar1 != 0) goto LAB_1807c5e99;
          if (cStack0000000000000044 == '\n') break;
          if (cStack0000000000000044 != '\r') {
            if (lVar2 < 0x1ff) {
              (&stack0x00000050)[lVar2] = cStack0000000000000044;
              lVar2 = lVar2 + 1;
            }
            if (cStack0000000000000044 != '\r') goto LAB_1807c5de0;
          }
          FUN_180769720(*(undefined8 *)(unaff_RBX + 0x170),(longlong)&stack0x00000040 + 5);
          FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),0xffffffff,1);
        } while (cStack0000000000000045 == '\n');
        (&stack0x00000050)[lVar2] = 0;
        iVar1 = func_0x00018076b8c0(&stack0x00000050);
        if (iVar1 == 0) goto LAB_1807c5e99;
        FUN_180772fe0();
      }
    }
  } while( true );
}






// 函数: void FUN_1807c5ea9(void)
void FUN_1807c5ea9(void)

{
  ulonglong in_stack_00000250;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000250 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807c5ed0(longlong param_1)
void FUN_1807c5ed0(longlong param_1)

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
  undefined8 uStack_668;
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
    if ((iVar2 == 0) && (iVar2 = FUN_18076b6f0(&UNK_18097c788,acStack_638,0xc), iVar2 == 0)) {
      do {
        auStack_644[0] = 0x200;
        uStack_668 = 0;
        iVar2 = FUN_1807c4340(param_1,acStack_638,auStack_644,0);
        if (iVar2 != 0) goto FUN_1807c6291;
        iVar2 = FUN_18076b6f0(&UNK_18097c798,acStack_638,3);
      } while (iVar2 != 0);
      while( true ) {
        cStack_648 = '\0';
        do {
          iVar2 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),acStack_647);
          if (iVar2 != 0) goto FUN_1807c6291;
        } while ((((acStack_647[0] == ' ') || (acStack_647[0] == '\t')) || (acStack_647[0] == '\n'))
                || (acStack_647[0] == '\r'));
        iVar2 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xffffffff,1);
        if (iVar2 != 0) goto FUN_1807c6291;
        do {
          iVar2 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_648);
          if (iVar2 != 0) goto FUN_1807c6291;
        } while (cStack_648 != '<');
        pcVar7 = acStack_638;
        uVar3 = uVar10;
        do {
          iVar2 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_648);
          if (iVar2 != 0) goto FUN_1807c6291;
          if ((int)uVar3 < 0x200) {
            uVar3 = (ulonglong)((int)uVar3 + 1);
            *pcVar7 = cStack_648;
            pcVar7 = pcVar7 + 1;
          }
        } while (cStack_648 != '>');
        iVar2 = FUN_1807c62b0(param_1,0);
        uVar8 = uVar10;
        uVar9 = uVar10;
        if (iVar2 != 0) goto FUN_1807c6291;
        do {
          iVar2 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_648);
          if (iVar2 != 0) goto FUN_1807c6291;
          if ((longlong)uVar8 < 0x200) {
            uVar9 = (ulonglong)((int)uVar9 + 1);
            acStack_238[uVar8] = cStack_648;
            uVar8 = uVar8 + 1;
          }
        } while (cStack_648 != '<');
        iVar11 = (int)uVar9 + -1;
        iVar2 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_648);
        if (iVar2 != 0) goto FUN_1807c6291;
        if (cStack_648 == '/') {
          do {
            iVar2 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_648);
            if (iVar2 != 0) goto FUN_1807c6291;
          } while (cStack_648 != '>');
        }
        else {
          iVar2 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xfffffffe,1);
          if (iVar2 != 0) goto FUN_1807c6291;
        }
        uVar3 = (ulonglong)((int)uVar3 + -1);
        if (0x1ff < uVar3) break;
        acStack_638[uVar3] = '\0';
        if (0x1ff < (ulonglong)(longlong)iVar11) break;
        acStack_238[iVar11] = '\0';
        if (iVar11 == 0) {
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
          iVar2 = FUN_18076b6f0(&UNK_18097c7a0,acStack_638,8);
          if (iVar2 == 0) {
            uStack_658 = 0;
            uStack_660 = 6;
            uStack_668 = CONCAT44(uStack_668._4_4_,uVar6 + 1);
            FUN_180772fe0(param_1,8,&UNK_18097c70c,acStack_638 + 0x200);
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
FUN_1807c6291:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_688);
}






// 函数: void FUN_1807c5f17(void)
void FUN_1807c5f17(void)

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
  undefined4 uStack0000000000000044;
  
  uVar8 = 0;
  iVar2 = FUN_1807c4340();
  if ((iVar2 != 0) || (iVar2 = FUN_18076b6f0(&UNK_18097c788,&stack0x00000050,0xc), iVar2 != 0)) {
FUN_1807c6289:
                    // WARNING: Subroutine does not return
    FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x550) ^ (ulonglong)&stack0x00000000);
  }
  do {
    uStack0000000000000044 = 0x200;
    iVar2 = FUN_1807c4340();
    if (iVar2 != 0) goto FUN_1807c6289;
    iVar2 = FUN_18076b6f0(&UNK_18097c798,&stack0x00000050,3);
  } while (iVar2 != 0);
  while( true ) {
    cStack0000000000000040 = '\0';
    do {
      iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),(longlong)&stack0x00000040 + 1);
      if (iVar2 != 0) goto FUN_1807c6289;
    } while ((((cStack0000000000000041 == ' ') || (cStack0000000000000041 == '\t')) ||
             (cStack0000000000000041 == '\n')) || (cStack0000000000000041 == '\r'));
    iVar2 = FUN_18076a440(*(undefined8 *)(unaff_RSI + 0x170),0xffffffff,1);
    if (iVar2 != 0) goto FUN_1807c6289;
    do {
      iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),&stack0x00000040);
      if (iVar2 != 0) goto FUN_1807c6289;
    } while (cStack0000000000000040 != '<');
    pcVar5 = &stack0x00000050;
    uVar3 = uVar8;
    do {
      iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),&stack0x00000040);
      if (iVar2 != 0) goto FUN_1807c6289;
      if ((int)uVar3 < 0x200) {
        uVar3 = (ulonglong)((int)uVar3 + 1);
        *pcVar5 = cStack0000000000000040;
        pcVar5 = pcVar5 + 1;
      }
    } while (cStack0000000000000040 != '>');
    iVar2 = FUN_1807c62b0();
    uVar6 = uVar8;
    uVar7 = uVar8;
    if (iVar2 != 0) goto FUN_1807c6289;
    do {
      iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),&stack0x00000040);
      if (iVar2 != 0) goto FUN_1807c6289;
      if ((longlong)uVar6 < 0x200) {
        uVar7 = (ulonglong)((int)uVar7 + 1);
        *(char *)(unaff_RBP + 0x350 + uVar6) = cStack0000000000000040;
        uVar6 = uVar6 + 1;
      }
    } while (cStack0000000000000040 != '<');
    iVar9 = (int)uVar7 + -1;
    iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),&stack0x00000040);
    if (iVar2 != 0) goto FUN_1807c6289;
    if (cStack0000000000000040 == '/') {
      do {
        iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),&stack0x00000040);
        if (iVar2 != 0) goto FUN_1807c6289;
      } while (cStack0000000000000040 != '>');
    }
    else {
      iVar2 = FUN_18076a440(*(undefined8 *)(unaff_RSI + 0x170),0xfffffffe,1);
      if (iVar2 != 0) goto FUN_1807c6289;
    }
    uVar3 = (ulonglong)((int)uVar3 + -1);
    if (0x1ff < uVar3) break;
    (&stack0x00000050)[uVar3] = 0;
    if (0x1ff < (ulonglong)(longlong)iVar9) break;
    *(undefined1 *)(unaff_RBP + 0x350 + (longlong)iVar9) = 0;
    if (iVar9 == 0) {
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
      iVar2 = FUN_18076b6f0(&UNK_18097c7a0,&stack0x00000050,8);
      if (iVar2 == 0) {
        FUN_180772fe0();
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






// 函数: void FUN_1807c5fb3(void)
void FUN_1807c5fb3(void)

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
      if (iVar2 != 0) goto LAB_1807c6267;
    } while ((((cStack0000000000000041 == ' ') || (cStack0000000000000041 == '\t')) ||
             (cStack0000000000000041 == '\n')) || (cStack0000000000000041 == '\r'));
    iVar2 = FUN_18076a440(*(undefined8 *)(unaff_RSI + 0x170),0xffffffff,1);
    if (iVar2 != 0) {
LAB_1807c6267:
                    // WARNING: Subroutine does not return
      FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x550) ^ (ulonglong)&stack0x00000000);
    }
    do {
      iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),&stack0x00000040);
      if (iVar2 != 0) goto LAB_1807c6267;
    } while (cStack0000000000000040 != '<');
    pcVar5 = &stack0x00000050;
    do {
      iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),&stack0x00000040);
      if (iVar2 != 0) goto LAB_1807c6267;
      if ((int)uVar3 < 0x200) {
        uVar3 = (ulonglong)((int)uVar3 + 1);
        *pcVar5 = cStack0000000000000040;
        pcVar5 = pcVar5 + 1;
      }
    } while (cStack0000000000000040 != '>');
    uVar7 = unaff_R12 & 0xffffffff;
    iVar2 = FUN_1807c62b0();
    uVar6 = unaff_R12;
    if (iVar2 != 0) goto LAB_1807c6267;
    do {
      iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),&stack0x00000040);
      if (iVar2 != 0) goto LAB_1807c6267;
      if ((longlong)uVar6 < 0x200) {
        uVar7 = (ulonglong)((int)uVar7 + 1);
        *(char *)(unaff_RBP + 0x350 + uVar6) = cStack0000000000000040;
        uVar6 = uVar6 + 1;
      }
    } while (cStack0000000000000040 != '<');
    iVar9 = (int)uVar7 + -1;
    iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),&stack0x00000040);
    if (iVar2 != 0) goto LAB_1807c6267;
    if (cStack0000000000000040 == '/') {
      do {
        iVar2 = FUN_180769720(*(undefined8 *)(unaff_RSI + 0x170),&stack0x00000040);
        if (iVar2 != 0) goto LAB_1807c6267;
      } while (cStack0000000000000040 != '>');
    }
    else {
      iVar2 = FUN_18076a440(*(undefined8 *)(unaff_RSI + 0x170),0xfffffffe,1);
      if (iVar2 != 0) goto LAB_1807c6267;
    }
    uVar3 = (ulonglong)((int)uVar3 + -1);
    if (0x1ff < uVar3) {
FUN_1807c62aa:
      FUN_1808fcdc8();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar8 = (undefined1)unaff_R12;
    (&stack0x00000050)[uVar3] = uVar8;
    if (0x1ff < (ulonglong)(longlong)iVar9) goto FUN_1807c62aa;
    *(undefined1 *)(unaff_RBP + 0x350 + (longlong)iVar9) = uVar8;
    if (iVar9 == 0) {
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
      iVar2 = FUN_18076b6f0(&UNK_18097c7a0,&stack0x00000050,8);
      if (iVar2 == 0) {
        FUN_180772fe0();
      }
    }
    else {
      func_0x00018076b870(&stack0x00000050);
      FUN_180772fe0();
    }
  } while( true );
}






// 函数: void FUN_1807c6289(void)
void FUN_1807c6289(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x550) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807c6291(void)
void FUN_1807c6291(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x550) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807c62aa(void)
void FUN_1807c62aa(void)

{
  code *pcVar1;
  
  FUN_1808fcdc8();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined8 FUN_1807c62b0(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  char acStackX_8 [8];
  
  iVar3 = 0;
  do {
    iVar2 = iVar3;
    uVar1 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),acStackX_8);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    iVar3 = iVar2 + 1;
  } while ((((acStackX_8[0] == ' ') || (acStackX_8[0] == '\t')) || (acStackX_8[0] == '\n')) ||
          (acStackX_8[0] == '\r'));
  uVar1 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xffffffff,1);
  if ((int)uVar1 == 0) {
    if (param_2 != (int *)0x0) {
      *param_2 = iVar2;
    }
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 FUN_1807c6400(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)(param_1 + 0x28) = 0xc;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(longlong *)(param_1 + 8) = param_1 + 0x178;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x170) + 0x10))
                    (*(longlong **)(param_1 + 0x170),param_1 + 0x18c);
  if ((int)uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x110) = 0;
    if (*(int *)(param_3 + 0x14) - 1U < 5) {
      *(int *)(*(longlong *)(param_1 + 8) + 8) = *(int *)(param_3 + 0x14);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xc) = *(undefined4 *)(param_3 + 0xc);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x10) = *(undefined4 *)(param_3 + 0x10);
      lVar2 = *(longlong *)(param_1 + 8);
      if (*(uint *)(param_3 + 0xc) != 0) {
        iVar1 = *(int *)(param_3 + 0x14);
        if (iVar1 == 1) {
          uVar5 = 8;
        }
        else if (iVar1 == 2) {
          uVar5 = 0x10;
        }
        else if (iVar1 == 3) {
          uVar5 = 0x18;
        }
        else {
          if ((iVar1 != 4) && (iVar1 != 5)) {
            *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x14);
            *(undefined4 *)(param_1 + 0x18) = 0;
            return 0;
          }
          uVar5 = 0x20;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar5;
        *(int *)(lVar2 + 0x18) =
             (int)((SUB168((ZEXT416(*(uint *)(lVar2 + 0x14)) << 3) / auVar3,0) & 0xffffffff) /
                  (ulonglong)*(uint *)(param_3 + 0xc));
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
      return 0;
    }
    uVar4 = 0x13;
  }
  return uVar4;
}



undefined4 FUN_1807c6550(longlong param_1,byte *param_2,uint param_3,uint *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint auStackX_8 [2];
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 8);
  if ((iVar1 - 1U < 2) && ((*(uint *)(param_1 + 0x2c) & 0x100) == 0)) {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0;
      }
      if (*(int *)(param_1 + 0x28) == 0) {
        return 0;
      }
      uVar3 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),param_2,2,
                            *(int *)(lVar2 + 0xc) * param_3,param_4);
      auStackX_8[0] = *param_4 / *(uint *)(*(longlong *)(param_1 + 8) + 0xc);
      goto LAB_1807c6767;
    }
    uVar3 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),param_2,1,*(int *)(lVar2 + 0xc) * param_3
                          ,auStackX_8);
    uVar5 = (ulonglong)auStackX_8[0];
    for (uVar6 = auStackX_8[0] >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *param_2 = *param_2 ^ 0x80;
      param_2[1] = param_2[1] ^ 0x80;
      param_2[2] = param_2[2] ^ 0x80;
      param_2[3] = param_2[3] ^ 0x80;
      param_2 = param_2 + 4;
    }
    for (uVar6 = auStackX_8[0] & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *param_2 = *param_2 ^ 0x80;
      param_2 = param_2 + 1;
    }
    uVar6 = *(uint *)(*(longlong *)(param_1 + 8) + 0xc);
    if (uVar6 == 0) {
      return uVar3;
    }
    iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 8);
    if (iVar1 == 1) {
      uVar7 = 8;
    }
    else if (iVar1 == 2) {
      uVar7 = 0x10;
    }
    else if (iVar1 == 3) {
      uVar7 = 0x18;
    }
    else {
      if ((iVar1 != 4) && (iVar1 != 5)) {
        *param_4 = auStackX_8[0];
        return uVar3;
      }
      uVar7 = 0x20;
    }
  }
  else {
    uVar7 = 0x20;
    if (iVar1 == 1) {
      lVar4 = 8;
LAB_1807c66e5:
      param_3 = (uint)((ulonglong)param_3 * lVar4 >> 3);
    }
    else {
      if (iVar1 == 2) {
        lVar4 = 0x10;
        goto LAB_1807c66e5;
      }
      if (iVar1 == 3) {
        lVar4 = 0x18;
        goto LAB_1807c66e5;
      }
      if ((iVar1 == 4) || (iVar1 == 5)) {
        lVar4 = 0x20;
        goto LAB_1807c66e5;
      }
    }
    uVar3 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),param_2,1,*(int *)(lVar2 + 0xc) * param_3
                          ,auStackX_8);
    uVar6 = *(uint *)(*(longlong *)(param_1 + 8) + 0xc);
    if (uVar6 == 0) {
      return uVar3;
    }
    iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 8);
    if (iVar1 == 1) {
      uVar7 = 8;
    }
    else if (iVar1 == 2) {
      uVar7 = 0x10;
    }
    else if (iVar1 == 3) {
      uVar7 = 0x18;
    }
    else if ((iVar1 != 4) && (iVar1 != 5)) goto LAB_1807c6767;
    uVar5 = (ulonglong)auStackX_8[0];
  }
  auStackX_8[0] = (uint)(((uVar5 << 3) / uVar7 & 0xffffffff) / (ulonglong)uVar6);
LAB_1807c6767:
  *param_4 = auStackX_8[0];
  return uVar3;
}






// 函数: void FUN_1807c6910(void)
void FUN_1807c6910(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






