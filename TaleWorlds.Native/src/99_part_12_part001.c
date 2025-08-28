#include "TaleWorlds.Native.Split.h"

// 99_part_12_part001.c - 14 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_12.c - 500 个函数


// 函数: void FUN_1807c5030(longlong param_1)
void FUN_1807c5030(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  undefined *puVar9;
  undefined1 auStack_678 [32];
  undefined8 uStack_658;
  undefined4 uStack_650;
  undefined1 uStack_648;
  char cStack_638;
  char acStack_637 [3];
  undefined4 auStack_634 [3];
  char acStack_628 [517];
  char acStack_423 [507];
  char acStack_228 [512];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_678;
  auStack_634[0] = 0x200;
  iVar3 = 0x200;
  iVar2 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0,0);
  if (iVar2 == 0) {
    uStack_658 = 0;
    iVar2 = FUN_1807c4340(param_1,acStack_628,auStack_634,0);
    if ((iVar2 == 0) && (iVar2 = FUN_18076b6f0(&UNK_18097c7b0,acStack_628,0xc), iVar2 == 0)) {
      iVar2 = FUN_18076b6f0(&UNK_18097c7c0,acStack_628,0x10);
      while (iVar2 != 0) {
        iVar2 = 0;
        cStack_638 = '\0';
        do {
          iVar3 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),acStack_637);
          if (iVar3 != 0) goto FUN_1807c55e3;
        } while ((((acStack_637[0] == ' ') || (acStack_637[0] == '\t')) || (acStack_637[0] == '\n'))
                || (acStack_637[0] == '\r'));
        iVar3 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xffffffff,1);
        if (iVar3 != 0) goto FUN_1807c55e3;
        do {
          iVar3 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_638);
          if (iVar3 != 0) goto FUN_1807c55e3;
        } while (cStack_638 != '<');
        pcVar7 = acStack_628;
        do {
          iVar3 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_638);
          if (iVar3 != 0) goto FUN_1807c55e3;
          if (iVar2 < 0x200) {
            iVar2 = iVar2 + 1;
            *pcVar7 = cStack_638;
            pcVar7 = pcVar7 + 1;
          }
        } while (cStack_638 != '>');
        iVar3 = 0;
        lVar8 = 0;
        iVar4 = FUN_1807c62b0(param_1,0);
        if (iVar4 != 0) goto FUN_1807c55e3;
        do {
          iVar4 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_638);
          if (iVar4 != 0) goto FUN_1807c55e3;
          if (lVar8 < 0x200) {
            iVar3 = iVar3 + 1;
            acStack_228[lVar8] = cStack_638;
            lVar8 = lVar8 + 1;
          }
        } while (cStack_638 != '<');
        iVar3 = iVar3 + -1;
        iVar4 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_638);
        if (iVar4 != 0) goto FUN_1807c55e3;
        if (cStack_638 == '/') {
          do {
            iVar4 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_638);
            if (iVar4 != 0) goto FUN_1807c55e3;
          } while (cStack_638 != '>');
        }
        else {
          iVar4 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xfffffffe,1);
          if (iVar4 != 0) goto FUN_1807c55e3;
        }
        if (0x1ff < (ulonglong)(longlong)(iVar2 + -1)) goto FUN_1807c55fe;
        acStack_628[iVar2 + -1] = '\0';
        if (0x1ff < (ulonglong)(longlong)iVar3) goto FUN_1807c55fe;
        acStack_228[iVar3] = '\0';
        iVar2 = FUN_18076b6f0(&UNK_18097c7c0,acStack_628,0x10);
      }
      do {
        if (iVar3 == 0) {
          cVar5 = '\0';
          lVar8 = 0;
          iVar3 = 0;
          lVar6 = 0;
          do {
            if (lVar8 < 0x200) {
              cVar5 = acStack_628[lVar8];
              lVar8 = lVar8 + 1;
            }
          } while (cVar5 != '\"');
          do {
            pcVar7 = acStack_628 + lVar8;
            lVar8 = lVar8 + 1;
            if (*pcVar7 == '\"') break;
            acStack_628[lVar6 + 0x200] = *pcVar7;
            iVar3 = iVar3 + 1;
            lVar6 = lVar6 + 1;
          } while (lVar8 < 0x1ff);
          acStack_628[lVar6 + 0x200] = '\0';
          iVar2 = FUN_18076b6f0(&UNK_18097c7c0,acStack_628,0x11);
          if (iVar2 == 0) {
            iVar2 = FUN_18076b6f0(&UNK_18097c7d4,acStack_628 + 0x200,5);
            pcVar7 = acStack_423;
            if (iVar2 != 0) {
              pcVar7 = acStack_628 + 0x200;
            }
            puVar9 = &UNK_18097c70c;
            goto LAB_1807c5413;
          }
          iVar2 = FUN_18076b6f0(&UNK_18097c7dc,acStack_628,0xd);
          if (iVar2 == 0) {
            pcVar7 = acStack_628 + 0x200;
            uStack_658 = CONCAT44(uStack_658._4_4_,iVar3 + 1);
            puVar9 = &UNK_18097c7dc;
            goto LAB_1807c5424;
          }
          iVar2 = FUN_18076b6f0(&UNK_18097c7e4,acStack_628,0xe);
          if (iVar2 == 0) {
            pcVar7 = acStack_628 + 0x200;
            uStack_658 = CONCAT44(uStack_658._4_4_,iVar3 + 1);
            puVar9 = &UNK_18097c7e4;
            goto LAB_1807c5424;
          }
        }
        else {
          puVar9 = (undefined *)func_0x00018076b870(acStack_628);
          pcVar7 = acStack_228;
LAB_1807c5413:
          uStack_658 = CONCAT44(uStack_658._4_4_,iVar3 + 1);
LAB_1807c5424:
          uStack_648 = 0;
          uStack_650 = 3;
          FUN_180772fe0(param_1,8,puVar9,pcVar7);
        }
        iVar2 = 0;
        cStack_638 = '\0';
        do {
          iVar3 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),acStack_637);
          if (iVar3 != 0) goto FUN_1807c55e3;
        } while (((acStack_637[0] == ' ') || (acStack_637[0] == '\t')) ||
                ((acStack_637[0] == '\n' || (acStack_637[0] == '\r'))));
        iVar3 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xffffffff,1);
        if (iVar3 != 0) break;
        do {
          iVar3 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_638);
          if (iVar3 != 0) goto FUN_1807c55e3;
        } while (cStack_638 != '<');
        pcVar7 = acStack_628;
        do {
          iVar3 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_638);
          if (iVar3 != 0) goto FUN_1807c55e3;
          if (iVar2 < 0x200) {
            iVar2 = iVar2 + 1;
            *pcVar7 = cStack_638;
            pcVar7 = pcVar7 + 1;
          }
        } while (cStack_638 != '>');
        iVar3 = 0;
        lVar8 = 0;
        iVar4 = FUN_1807c62b0(param_1,0);
        if (iVar4 != 0) break;
        do {
          iVar4 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_638);
          if (iVar4 != 0) goto FUN_1807c55e3;
          if (lVar8 < 0x200) {
            iVar3 = iVar3 + 1;
            acStack_228[lVar8] = cStack_638;
            lVar8 = lVar8 + 1;
          }
        } while (cStack_638 != '<');
        iVar3 = iVar3 + -1;
        iVar4 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_638);
        if (iVar4 != 0) break;
        if (cStack_638 == '/') {
          do {
            iVar4 = FUN_180769720();
            if (iVar4 != 0) goto FUN_1807c55e3;
          } while (cStack_638 != '>');
        }
        else {
          iVar4 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xfffffffe,1);
          if (iVar4 != 0) break;
        }
        if (0x1ff < (ulonglong)(longlong)(iVar2 + -1)) {
FUN_1807c55fe:
          FUN_1808fcdc8();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        acStack_628[iVar2 + -1] = '\0';
        if (0x1ff < (ulonglong)(longlong)iVar3) goto FUN_1807c55fe;
        acStack_228[iVar3] = '\0';
      } while( true );
    }
  }
FUN_1807c55e3:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_678);
}






// 函数: void FUN_1807c50a5(void)
void FUN_1807c50a5(void)

{
  code *pcVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  longlong unaff_RBP;
  int iVar8;
  longlong unaff_RDI;
  int unaff_R15D;
  char cStack0000000000000040;
  char cStack0000000000000041;
  
  iVar2 = FUN_18076b6f0(&UNK_18097c7b0,&stack0x00000050,in_EAX + 0xc);
  if (iVar2 != 0) {
LAB_1807c55cb:
                    // WARNING: Subroutine does not return
    FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x550) ^ (ulonglong)&stack0x00000000);
  }
  iVar2 = FUN_18076b6f0(&UNK_18097c7c0,&stack0x00000050,0x10);
  while (iVar2 != 0) {
    iVar2 = 0;
    cStack0000000000000040 = '\0';
    do {
      iVar3 = FUN_180769720(*(undefined8 *)(unaff_RDI + 0x170),(longlong)&stack0x00000040 + 1);
      if (iVar3 != 0) goto LAB_1807c55cb;
    } while ((((cStack0000000000000041 == ' ') || (cStack0000000000000041 == '\t')) ||
             (cStack0000000000000041 == '\n')) || (cStack0000000000000041 == '\r'));
    iVar3 = FUN_18076a440(*(undefined8 *)(unaff_RDI + 0x170),0xffffffff,1);
    if (iVar3 != 0) goto LAB_1807c55cb;
    do {
      iVar3 = FUN_180769720(*(undefined8 *)(unaff_RDI + 0x170),&stack0x00000040);
      if (iVar3 != 0) goto LAB_1807c55cb;
    } while (cStack0000000000000040 != '<');
    pcVar6 = &stack0x00000050;
    do {
      iVar3 = FUN_180769720(*(undefined8 *)(unaff_RDI + 0x170),&stack0x00000040);
      if (iVar3 != 0) goto LAB_1807c55cb;
      if (iVar2 < 0x200) {
        iVar2 = iVar2 + 1;
        *pcVar6 = cStack0000000000000040;
        pcVar6 = pcVar6 + 1;
      }
    } while (cStack0000000000000040 != '>');
    iVar8 = 0;
    lVar7 = 0;
    iVar3 = FUN_1807c62b0();
    if (iVar3 != 0) goto LAB_1807c55cb;
    do {
      iVar3 = FUN_180769720(*(undefined8 *)(unaff_RDI + 0x170),&stack0x00000040);
      if (iVar3 != 0) goto LAB_1807c55cb;
      if (lVar7 < 0x200) {
        iVar8 = iVar8 + 1;
        *(char *)(unaff_RBP + 0x350 + lVar7) = cStack0000000000000040;
        lVar7 = lVar7 + 1;
      }
    } while (cStack0000000000000040 != '<');
    unaff_R15D = iVar8 + -1;
    iVar3 = FUN_180769720(*(undefined8 *)(unaff_RDI + 0x170),&stack0x00000040);
    if (iVar3 != 0) goto LAB_1807c55cb;
    if (cStack0000000000000040 == '/') {
      do {
        iVar3 = FUN_180769720(*(undefined8 *)(unaff_RDI + 0x170),&stack0x00000040);
        if (iVar3 != 0) goto LAB_1807c55cb;
      } while (cStack0000000000000040 != '>');
    }
    else {
      iVar3 = FUN_18076a440(*(undefined8 *)(unaff_RDI + 0x170),0xfffffffe,1);
      if (iVar3 != 0) goto LAB_1807c55cb;
    }
    if (0x1ff < (ulonglong)(longlong)(iVar2 + -1)) goto FUN_1807c55fe;
    (&stack0x00000050)[iVar2 + -1] = 0;
    if (0x1ff < (ulonglong)(longlong)unaff_R15D) goto FUN_1807c55fe;
    *(undefined1 *)(unaff_RBP + 0x350 + (longlong)unaff_R15D) = 0;
    iVar2 = FUN_18076b6f0(&UNK_18097c7c0,&stack0x00000050,0x10);
  }
  do {
    if (unaff_R15D == 0) {
      cVar4 = '\0';
      lVar7 = 0;
      lVar5 = 0;
      do {
        if (lVar7 < 0x200) {
          cVar4 = (&stack0x00000050)[lVar7];
          lVar7 = lVar7 + 1;
        }
      } while (cVar4 != '\"');
      do {
        pcVar6 = &stack0x00000050 + lVar7;
        lVar7 = lVar7 + 1;
        if (*pcVar6 == '\"') break;
        *(char *)(unaff_RBP + 0x150 + lVar5) = *pcVar6;
        lVar5 = lVar5 + 1;
      } while (lVar7 < 0x1ff);
      *(undefined1 *)(unaff_RBP + 0x150 + lVar5) = 0;
      iVar2 = FUN_18076b6f0(&UNK_18097c7c0,&stack0x00000050,0x11);
      if (iVar2 == 0) {
        FUN_18076b6f0(&UNK_18097c7d4,unaff_RBP + 0x150,5);
        goto LAB_1807c5424;
      }
      iVar2 = FUN_18076b6f0(&UNK_18097c7dc,&stack0x00000050,0xd);
      if ((iVar2 == 0) || (iVar2 = FUN_18076b6f0(&UNK_18097c7e4,&stack0x00000050,0xe), iVar2 == 0))
      goto LAB_1807c5424;
    }
    else {
      func_0x00018076b870(&stack0x00000050);
LAB_1807c5424:
      FUN_180772fe0();
    }
    iVar2 = 0;
    cStack0000000000000040 = '\0';
    do {
      iVar3 = FUN_180769720(*(undefined8 *)(unaff_RDI + 0x170),(longlong)&stack0x00000040 + 1);
      if (iVar3 != 0) goto LAB_1807c55cb;
    } while (((cStack0000000000000041 == ' ') || (cStack0000000000000041 == '\t')) ||
            ((cStack0000000000000041 == '\n' || (cStack0000000000000041 == '\r'))));
    iVar3 = FUN_18076a440(*(undefined8 *)(unaff_RDI + 0x170),0xffffffff,1);
    if (iVar3 != 0) goto LAB_1807c55cb;
    do {
      iVar3 = FUN_180769720(*(undefined8 *)(unaff_RDI + 0x170),&stack0x00000040);
      if (iVar3 != 0) goto LAB_1807c55cb;
    } while (cStack0000000000000040 != '<');
    pcVar6 = &stack0x00000050;
    do {
      iVar3 = FUN_180769720(*(undefined8 *)(unaff_RDI + 0x170),&stack0x00000040);
      if (iVar3 != 0) goto LAB_1807c55cb;
      if (iVar2 < 0x200) {
        iVar2 = iVar2 + 1;
        *pcVar6 = cStack0000000000000040;
        pcVar6 = pcVar6 + 1;
      }
    } while (cStack0000000000000040 != '>');
    iVar8 = 0;
    lVar7 = 0;
    iVar3 = FUN_1807c62b0();
    if (iVar3 != 0) goto LAB_1807c55cb;
    do {
      iVar3 = FUN_180769720(*(undefined8 *)(unaff_RDI + 0x170),&stack0x00000040);
      if (iVar3 != 0) goto LAB_1807c55cb;
      if (lVar7 < 0x200) {
        iVar8 = iVar8 + 1;
        *(char *)(unaff_RBP + 0x350 + lVar7) = cStack0000000000000040;
        lVar7 = lVar7 + 1;
      }
    } while (cStack0000000000000040 != '<');
    unaff_R15D = iVar8 + -1;
    iVar3 = FUN_180769720(*(undefined8 *)(unaff_RDI + 0x170),&stack0x00000040);
    if (iVar3 != 0) goto LAB_1807c55cb;
    if (cStack0000000000000040 == '/') {
      do {
        iVar3 = FUN_180769720();
        if (iVar3 != 0) goto LAB_1807c55cb;
      } while (cStack0000000000000040 != '>');
    }
    else {
      iVar3 = FUN_18076a440(*(undefined8 *)(unaff_RDI + 0x170),0xfffffffe,1);
      if (iVar3 != 0) goto LAB_1807c55cb;
    }
    if (0x1ff < (ulonglong)(longlong)(iVar2 + -1)) {
FUN_1807c55fe:
      FUN_1808fcdc8();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (&stack0x00000050)[iVar2 + -1] = 0;
    if (0x1ff < (ulonglong)(longlong)unaff_R15D) goto FUN_1807c55fe;
    *(undefined1 *)(unaff_RBP + 0x350 + (longlong)unaff_R15D) = 0;
  } while( true );
}






// 函数: void FUN_1807c55e3(void)
void FUN_1807c55e3(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x550) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807c55fe(void)
void FUN_1807c55fe(void)

{
  code *pcVar1;
  
  FUN_1808fcdc8();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807c5610(longlong param_1)
void FUN_1807c5610(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_268 [32];
  int iStack_248;
  undefined4 uStack_240;
  undefined1 uStack_238;
  char cStack_228;
  char acStack_227 [3];
  undefined4 auStack_224 [2];
  char acStack_219 [513];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_268;
  auStack_224[0] = 0;
  iVar3 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0,0);
  if (iVar3 == 0) {
    lVar5 = 0;
    do {
      do {
        iVar3 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_228);
        if ((iVar3 != 0) || (0x1ff < lVar5)) goto FUN_1807c5975;
        acStack_219[lVar5 + 1] = cStack_228;
        lVar5 = lVar5 + 1;
        if (cStack_228 == '\n') goto LAB_1807c56d7;
      } while (cStack_228 != '\r');
      FUN_180769720(*(undefined8 *)(param_1 + 0x170),acStack_227);
      FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xffffffff,1);
    } while (acStack_227[0] == '\n');
LAB_1807c56d7:
    iVar3 = FUN_18076b6f0(acStack_219 + 1,&UNK_18097c600,7);
    if (iVar3 == 0) {
      iVar3 = FUN_1807c62b0(param_1,0);
      while (iVar3 == 0) {
        lVar5 = 0;
        do {
          iVar3 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_228);
          if (iVar3 != 0) break;
          if (lVar5 < 0x200) {
            acStack_219[lVar5 + 1] = cStack_228;
            lVar5 = lVar5 + 1;
          }
        } while (cStack_228 != ':');
        iVar3 = FUN_18076b6f0(&UNK_18097c7f0,acStack_219 + 1,7);
        if ((iVar3 != 0) || (iVar3 = FUN_1807c62b0(param_1,0), iVar3 != 0)) break;
        lVar5 = 0;
        do {
          iVar3 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_228);
          if (iVar3 != 0) break;
          if (lVar5 < 0x1ff) {
            acStack_219[lVar5 + 1] = cStack_228;
            lVar5 = lVar5 + 1;
          }
        } while (cStack_228 != ',');
        if (0x1ff < lVar5 - 1U) {
FUN_1807c5995:
          FUN_1808fcdc8();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        acStack_219[lVar5] = '\0';
        auStack_224[0] = atoi(acStack_219 + 1);
        uStack_238 = 0;
        uStack_240 = 1;
        iStack_248 = 4;
        FUN_180772fe0(param_1,8,&UNK_18097c7e4,auStack_224);
        iVar3 = FUN_1807c62b0(param_1,0);
        if (iVar3 != 0) break;
        iVar3 = 0;
        uVar6 = 0;
LAB_1807c5810:
        do {
          iVar4 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_228);
          if ((iVar4 != 0) || (cStack_228 == '\n')) break;
          if (cStack_228 != '\r') {
            if ((longlong)uVar6 < 0x1ff) {
              iVar3 = iVar3 + 1;
              acStack_219[uVar6 + 1] = cStack_228;
              uVar6 = uVar6 + 1;
            }
            if (cStack_228 != '\r') goto LAB_1807c5810;
          }
          FUN_180769720(*(undefined8 *)(param_1 + 0x170),acStack_227);
          FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xffffffff,1);
        } while (acStack_227[0] == '\n');
        if (0x1ff < uVar6) goto FUN_1807c5995;
        iStack_248 = iVar3 + 1;
        uStack_238 = 0;
        uStack_240 = 3;
        acStack_219[uVar6 + 1] = '\0';
        FUN_180772fe0(param_1,8,&UNK_18095b4f8,acStack_219 + 1);
        iVar3 = FUN_1807c62b0(param_1,0);
        if (iVar3 != 0) break;
        iVar3 = 0;
        uVar6 = 0;
        do {
          iVar4 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_228);
          if (iVar4 != 0) break;
          if (((cStack_228 != '\n') && (cStack_228 != '\r')) && ((longlong)uVar6 < 0x1ff)) {
            iVar3 = iVar3 + 1;
            acStack_219[uVar6 + 1] = cStack_228;
            uVar6 = uVar6 + 1;
          }
          cVar2 = FUN_1807c4780(param_1);
        } while (cVar2 == '\0');
        if (0x1ff < uVar6) goto FUN_1807c5995;
        uStack_238 = 0;
        uStack_240 = 3;
        acStack_219[uVar6 + 1] = '\0';
        iStack_248 = iVar3;
        FUN_180772fe0(param_1,8,&UNK_18097c70c,acStack_219 + 1);
        iVar3 = FUN_1807c62b0(param_1,0);
      }
    }
  }
FUN_1807c5975:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_268);
}






// 函数: void FUN_1807c565a(void)
void FUN_1807c565a(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char cStack0000000000000040;
  char cStack0000000000000041;
  undefined4 uStack0000000000000044;
  
  lVar4 = 0;
  do {
    do {
      iVar3 = FUN_180769720(*(undefined8 *)(unaff_RDI + 0x170),&stack0x00000040);
      if ((iVar3 != 0) || (0x1ff < lVar4)) goto LAB_1807c5965;
      (&stack0x00000050)[lVar4] = cStack0000000000000040;
      lVar4 = lVar4 + 1;
      if (cStack0000000000000040 == '\n') goto LAB_1807c56d7;
    } while (cStack0000000000000040 != '\r');
    FUN_180769720(*(undefined8 *)(unaff_RDI + 0x170),(longlong)&stack0x00000040 + 1);
    FUN_18076a440(*(undefined8 *)(unaff_RDI + 0x170),0xffffffff,1);
  } while (cStack0000000000000041 == '\n');
LAB_1807c56d7:
  iVar3 = FUN_18076b6f0(&stack0x00000050,&UNK_18097c600,7);
  if (iVar3 == 0) {
    iVar3 = FUN_1807c62b0();
    while (iVar3 == 0) {
      lVar4 = 0;
      do {
        iVar3 = FUN_180769720(*(undefined8 *)(unaff_RDI + 0x170),&stack0x00000040);
        if (iVar3 != 0) break;
        if (lVar4 < 0x200) {
          (&stack0x00000050)[lVar4] = cStack0000000000000040;
          lVar4 = lVar4 + 1;
        }
      } while (cStack0000000000000040 != ':');
      iVar3 = FUN_18076b6f0(&UNK_18097c7f0,&stack0x00000050,7);
      if ((iVar3 != 0) || (iVar3 = FUN_1807c62b0(), iVar3 != 0)) break;
      lVar4 = 0;
      do {
        iVar3 = FUN_180769720(*(undefined8 *)(unaff_RDI + 0x170),&stack0x00000040);
        if (iVar3 != 0) break;
        if (lVar4 < 0x1ff) {
          (&stack0x00000050)[lVar4] = cStack0000000000000040;
          lVar4 = lVar4 + 1;
        }
      } while (cStack0000000000000040 != ',');
      if (0x1ff < lVar4 - 1U) {
FUN_1807c5995:
        FUN_1808fcdc8();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (&stack0x0000004f)[lVar4] = 0;
      uStack0000000000000044 = atoi(&stack0x00000050);
      FUN_180772fe0();
      iVar3 = FUN_1807c62b0();
      if (iVar3 != 0) break;
      uVar5 = 0;
LAB_1807c5810:
      do {
        iVar3 = FUN_180769720(*(undefined8 *)(unaff_RDI + 0x170),&stack0x00000040);
        if ((iVar3 != 0) || (cStack0000000000000040 == '\n')) break;
        if (cStack0000000000000040 != '\r') {
          if ((longlong)uVar5 < 0x1ff) {
            (&stack0x00000050)[uVar5] = cStack0000000000000040;
            uVar5 = uVar5 + 1;
          }
          if (cStack0000000000000040 != '\r') goto LAB_1807c5810;
        }
        FUN_180769720(*(undefined8 *)(unaff_RDI + 0x170),(longlong)&stack0x00000040 + 1);
        FUN_18076a440(*(undefined8 *)(unaff_RDI + 0x170),0xffffffff,1);
      } while (cStack0000000000000041 == '\n');
      if (0x1ff < uVar5) goto FUN_1807c5995;
      (&stack0x00000050)[uVar5] = 0;
      FUN_180772fe0();
      iVar3 = FUN_1807c62b0();
      if (iVar3 != 0) break;
      uVar5 = 0;
      do {
        iVar3 = FUN_180769720(*(undefined8 *)(unaff_RDI + 0x170),&stack0x00000040);
        if (iVar3 != 0) break;
        if (((cStack0000000000000040 != '\n') && (cStack0000000000000040 != '\r')) &&
           ((longlong)uVar5 < 0x1ff)) {
          (&stack0x00000050)[uVar5] = cStack0000000000000040;
          uVar5 = uVar5 + 1;
        }
        cVar2 = FUN_1807c4780();
      } while (cVar2 == '\0');
      if (0x1ff < uVar5) goto FUN_1807c5995;
      (&stack0x00000050)[uVar5] = 0;
      FUN_180772fe0();
      iVar3 = FUN_1807c62b0();
    }
  }
LAB_1807c5965:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x150) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807c5975(void)
void FUN_1807c5975(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x150) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807c5995(void)
void FUN_1807c5995(void)

{
  code *pcVar1;
  
  FUN_1808fcdc8();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807c59a0(longlong param_1)
void FUN_1807c59a0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_268 [32];
  int iStack_248;
  undefined4 uStack_240;
  undefined1 uStack_238;
  int iStack_228;
  undefined4 uStack_224;
  undefined1 auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_268;
  iVar2 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0,0);
  if (((iVar2 == 0) && (iVar2 = FUN_1807c44f0(param_1,auStack_218,0x200,0), iVar2 == 0)) &&
     (iVar2 = FUN_18076b6f0(auStack_218,&UNK_18097c7f8,10), iVar2 == 0)) {
    iVar2 = FUN_1807c44f0(param_1,auStack_218,0x200,0);
    while (iVar2 == 0) {
      iVar2 = FUN_18076b6f0(&UNK_18094b508,auStack_218,4);
      if (iVar2 == 0) {
        iVar2 = FUN_1807c44f0(param_1,auStack_218,0x200,&iStack_228);
        if (iVar2 != 0) break;
        iStack_248 = iStack_228 + 1;
        uStack_238 = 0;
        uStack_240 = 3;
        FUN_180772fe0(param_1,8,&UNK_18097c70c);
      }
      else {
        iVar2 = FUN_18076b6f0(&UNK_18097c804,auStack_218,5);
        if (iVar2 == 0) {
          iVar2 = FUN_1807c44f0(param_1,auStack_218,0x200,&iStack_228);
          if (iVar2 != 0) break;
          iStack_248 = iStack_228 + 1;
          uStack_238 = 0;
          uStack_240 = 3;
          FUN_180772fe0(param_1,8,&UNK_18095b4f8);
        }
        else {
          iVar2 = FUN_18076b6f0(&UNK_18097c80c,auStack_218,6);
          if (iVar2 == 0) {
            uStack_224 = 0;
            iVar2 = FUN_1807c44f0(param_1,auStack_218,0x200,&iStack_228);
            if (iVar2 != 0) break;
            if (0x1ff < (ulonglong)(longlong)iStack_228) {
              FUN_1808fcdc8();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            auStack_218[iStack_228] = 0;
            uStack_224 = atoi(auStack_218);
            uStack_238 = 0;
            uStack_240 = 1;
            iStack_248 = 4;
            FUN_180772fe0(param_1,8,&UNK_18097c7e4);
          }
          else {
            iVar2 = FUN_18076b6f0(&UNK_18097c818,auStack_218,0xf);
            if (((iVar2 == 0) || (iVar2 = FUN_18076b6f0(&UNK_1809fd7a8,auStack_218,7), iVar2 == 0))
               && (iVar2 = FUN_1807c44f0(param_1,auStack_218,0x200,0), iVar2 != 0)) break;
          }
        }
      }
      iVar2 = FUN_1807c44f0(param_1,auStack_218,0x200,0);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_268);
}






// 函数: void FUN_1807c5a20(void)
void FUN_1807c5a20(void)

{
  code *pcVar1;
  int iVar2;
  longlong unaff_RBP;
  int in_stack_00000040;
  
  iVar2 = FUN_1807c44f0();
  while (iVar2 == 0) {
    iVar2 = FUN_18076b6f0(&UNK_18094b508,&stack0x00000050,4);
    if (iVar2 == 0) {
      iVar2 = FUN_1807c44f0();
      if (iVar2 != 0) break;
      FUN_180772fe0();
    }
    else {
      iVar2 = FUN_18076b6f0(&UNK_18097c804,&stack0x00000050,5);
      if (iVar2 == 0) {
        iVar2 = FUN_1807c44f0();
        if (iVar2 != 0) break;
        FUN_180772fe0();
      }
      else {
        iVar2 = FUN_18076b6f0(&UNK_18097c80c,&stack0x00000050,6);
        if (iVar2 == 0) {
          iVar2 = FUN_1807c44f0();
          if (iVar2 != 0) break;
          if (0x1ff < (ulonglong)(longlong)in_stack_00000040) {
            FUN_1808fcdc8();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (&stack0x00000050)[in_stack_00000040] = 0;
          atoi(&stack0x00000050);
          FUN_180772fe0();
        }
        else {
          iVar2 = FUN_18076b6f0(&UNK_18097c818,&stack0x00000050,0xf);
          if (((iVar2 == 0) ||
              (iVar2 = FUN_18076b6f0(&UNK_1809fd7a8,&stack0x00000050,7), iVar2 == 0)) &&
             (iVar2 = FUN_1807c44f0(), iVar2 != 0)) break;
        }
      }
    }
    iVar2 = FUN_1807c44f0();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x150) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807c5c22(void)
void FUN_1807c5c22(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x150) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807c5c49(void)
void FUN_1807c5c49(void)

{
  code *pcVar1;
  
  FUN_1808fcdc8();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807c5c50(longlong param_1)
void FUN_1807c5c50(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_268 [32];
  int iStack_248;
  undefined4 uStack_240;
  undefined1 uStack_238;
  char cStack_228;
  char cStack_227;
  char cStack_226;
  char cStack_225;
  char cStack_224;
  char acStack_223 [11];
  char acStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_268;
  iVar1 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0,0);
  if (iVar1 == 0) {
LAB_1807c5ca0:
    iVar1 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_227);
    if (iVar1 == 0) {
      if ((((cStack_227 != ' ') && (cStack_227 != '\t')) && (cStack_227 != '\n')) &&
         (cStack_227 != '\r')) {
        iVar1 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xffffffff,1);
        if ((iVar1 != 0) ||
           (iVar1 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_228), iVar1 != 0))
        goto FUN_1807c5ea9;
        if ((cStack_228 == '#') || (cStack_228 == '[')) {
          do {
            do {
              iVar1 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_228);
              if (iVar1 != 0) goto FUN_1807c5ea9;
              if (cStack_228 == '\n') goto LAB_1807c5ca0;
            } while (cStack_228 != '\r');
            FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_226);
            FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xffffffff,1);
          } while (cStack_226 == '\n');
        }
        else {
          iVar1 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xffffffff,1);
          if (iVar1 != 0) goto FUN_1807c5ea9;
          iVar1 = 0;
          lVar3 = 0;
          do {
            iVar2 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_225);
            if (iVar2 != 0) goto FUN_1807c5ea9;
          } while (((cStack_225 == ' ') || (cStack_225 == '\t')) ||
                  ((cStack_225 == '\n' || (cStack_225 == '\r'))));
          iVar2 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xffffffff,1);
          if (iVar2 != 0) goto FUN_1807c5ea9;
LAB_1807c5de0:
          do {
            iVar2 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_224);
            if (iVar2 != 0) goto FUN_1807c5ea9;
            if (cStack_224 == '\n') break;
            if (cStack_224 != '\r') {
              if (lVar3 < 0x1ff) {
                iVar1 = iVar1 + 1;
                acStack_218[lVar3] = cStack_224;
                lVar3 = lVar3 + 1;
              }
              if (cStack_224 != '\r') goto LAB_1807c5de0;
            }
            FUN_180769720(*(undefined8 *)(param_1 + 0x170),acStack_223);
            FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xffffffff,1);
          } while (acStack_223[0] == '\n');
          acStack_218[lVar3] = '\0';
          iVar2 = func_0x00018076b8c0(acStack_218);
          if (iVar2 == 0) goto FUN_1807c5ea9;
          iStack_248 = iVar1 + 1;
          uStack_238 = 0;
          uStack_240 = 3;
          FUN_180772fe0(param_1,8,&UNK_18097c70c,acStack_218);
        }
      }
      goto LAB_1807c5ca0;
    }
  }
FUN_1807c5ea9:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_268);
}






