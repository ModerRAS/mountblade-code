#include "TaleWorlds.Native.Split.h"

// 99_part_14_part013.c - 14 个函数

// 函数: void FUN_1808f2439(void)
void FUN_1808f2439(void)

{
  return;
}



undefined8 FUN_1808f244d(void)

{
  free();
  return 0x80010004;
}



ulonglong FUN_1808f2520(longlong param_1,longlong param_2,ushort param_3)

{
  char cVar1;
  short *psVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  
  lVar5 = 0;
  cVar1 = func_0x0001808f0e90(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22));
  if (cVar1 == '\0') {
    cVar1 = func_0x0001808f0e30(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22));
    if (cVar1 == '\0') {
      return 0;
    }
    if ((ulonglong)param_3 != 0) {
      psVar2 = (short *)(param_2 + 0x14);
      do {
        if ((((psVar2[-10] == -0x100) && (psVar2[0x12] == 0x26)) && (*psVar2 == 0x3f)) &&
           ((char)psVar2[-9] == ' ')) {
          return 0;
        }
        lVar5 = lVar5 + 1;
        psVar2 = psVar2 + 0x24;
      } while (lVar5 < (longlong)(ulonglong)param_3);
    }
  }
  else if (0x12 < *(int *)(param_1 + 0x24)) {
    uVar3 = (ulonglong)param_3;
    if (uVar3 != 0) {
      psVar2 = (short *)(param_2 + 0x14);
      lVar4 = lVar5;
      do {
        if (((psVar2[-10] == -0xfc) && (psVar2[0x12] == 0x27)) &&
           ((*psVar2 == 0x34 && ((char)psVar2[-9] == '\x06')))) {
          bVar6 = 1;
          goto LAB_1808f25a4;
        }
        lVar4 = lVar4 + 1;
        psVar2 = psVar2 + 0x24;
      } while (lVar4 < (longlong)uVar3);
    }
    bVar6 = 0;
LAB_1808f25a4:
    if (uVar3 != 0) {
      psVar2 = (short *)(param_2 + 0x14);
      lVar4 = lVar5;
      do {
        if (((psVar2[-10] == -0x80) && (psVar2[0x12] == 0x43)) &&
           ((*psVar2 == 0x30 && ((char)psVar2[-9] == -0x5d)))) goto LAB_1808f25e5;
        lVar4 = lVar4 + 1;
        psVar2 = psVar2 + 0x24;
      } while (lVar4 < (longlong)uVar3);
    }
    if (bVar6 != 0) {
LAB_1808f25e5:
      if (bVar6 != 1) {
        if (uVar3 != 0) {
          psVar2 = (short *)(param_2 + 0x14);
          do {
            if (((psVar2[-10] == -0xfe) && (psVar2[0x12] == 0x22)) && (*psVar2 == 0x16)) break;
            lVar5 = lVar5 + 1;
            psVar2 = psVar2 + 0x24;
          } while (lVar5 < (longlong)uVar3);
        }
        return (ulonglong)bVar6;
      }
    }
  }
  return 0xffffffff;
}






// 函数: void FUN_1808f26a0(void)
void FUN_1808f26a0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f34b0(void)
void FUN_1808f34b0(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  
  uVar6 = GetCurrentThread();
  SetThreadPriority(uVar6,0xf);
  _DAT_180c698d0 = CreateSemaphoreW(0,0,0x20);
  InitializeCriticalSection(0x180c698d8);
  puVar7 = (undefined2 *)0x180c69910;
  _DAT_180c69e00 = (undefined4 *)0x0;
  _DAT_180c69e08 = (undefined4 *)0x0;
  do {
    puVar3 = (undefined4 *)(puVar7 + -8);
    *(undefined8 *)(puVar7 + -4) = 0;
    *puVar3 = 0xffffffff;
    *puVar7 = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    *(undefined8 *)(puVar7 + 4) = 0;
    EnterCriticalSection(0x180c698d8);
    *(undefined8 *)(puVar7 + 8) = 0;
    if (_DAT_180c69e08 != (undefined4 *)0x0) {
      puVar4 = *(undefined4 **)(_DAT_180c69e08 + 8);
      puVar8 = _DAT_180c69e08;
      while (puVar2 = puVar4, puVar2 != (undefined4 *)0x0) {
        puVar8 = puVar2;
        puVar4 = *(undefined4 **)(puVar2 + 8);
      }
      *(undefined4 **)(puVar8 + 8) = puVar3;
      puVar3 = _DAT_180c69e08;
    }
    _DAT_180c69e08 = puVar3;
    LeaveCriticalSection(0x180c698d8);
    puVar7 = puVar7 + 0x14;
  } while ((longlong)puVar7 < 0x180c69e10);
  while ((DAT_180c58855 != '\0' &&
         (WaitForSingleObject(_DAT_180c698d0,0xffffffff), DAT_180c58855 != '\0'))) {
    EnterCriticalSection(0x180c698d8);
    puVar3 = _DAT_180c69e00;
    puVar8 = (undefined4 *)0x0;
    if (_DAT_180c69e00 != (undefined4 *)0x0) {
      puVar1 = (undefined8 *)(_DAT_180c69e00 + 8);
      _DAT_180c69e00 = *(undefined4 **)(_DAT_180c69e00 + 8);
      *puVar1 = 0;
      puVar8 = puVar3;
    }
    LeaveCriticalSection(0x180c698d8);
    if (puVar8 != (undefined4 *)0x0) {
      if (*(longlong *)(puVar8 + 2) != 0) {
        uVar5 = FUN_1808f2040(*puVar8,*(longlong *)(puVar8 + 2),*(undefined2 *)(puVar8 + 4));
        if (*(code **)(puVar8 + 6) != (code *)0x0) {
          (**(code **)(puVar8 + 6))(uVar5,*(undefined2 *)(puVar8 + 4),*puVar8);
        }
        if (*(longlong *)(puVar8 + 2) != 0) {
          if (_DAT_180c69e10 == (code *)0x0) {
            free();
          }
          else {
            (*_DAT_180c69e10)();
          }
        }
      }
      *puVar8 = 0xffffffff;
      *(undefined8 *)(puVar8 + 2) = 0;
      *(undefined2 *)(puVar8 + 4) = 0;
      *(undefined8 *)(puVar8 + 8) = 0;
      *(undefined8 *)(puVar8 + 6) = 0;
      EnterCriticalSection(0x180c698d8);
      *(undefined8 *)(puVar8 + 8) = 0;
      if (_DAT_180c69e08 != (undefined4 *)0x0) {
        puVar4 = *(undefined4 **)(_DAT_180c69e08 + 8);
        puVar3 = _DAT_180c69e08;
        while (puVar2 = puVar4, puVar2 != (undefined4 *)0x0) {
          puVar3 = puVar2;
          puVar4 = *(undefined4 **)(puVar2 + 8);
        }
        *(undefined4 **)(puVar3 + 8) = puVar8;
        puVar8 = _DAT_180c69e08;
      }
      _DAT_180c69e08 = puVar8;
      LeaveCriticalSection(0x180c698d8);
    }
  }
  while( true ) {
    EnterCriticalSection(0x180c698d8);
    puVar3 = _DAT_180c69e00;
    puVar8 = (undefined4 *)0x0;
    if (_DAT_180c69e00 != (undefined4 *)0x0) {
      puVar1 = (undefined8 *)(_DAT_180c69e00 + 8);
      _DAT_180c69e00 = *(undefined4 **)(_DAT_180c69e00 + 8);
      *puVar1 = 0;
      puVar8 = puVar3;
    }
    LeaveCriticalSection(0x180c698d8);
    if (puVar8 == (undefined4 *)0x0) break;
    if (*(longlong *)(puVar8 + 2) != 0) {
      if (_DAT_180c69e10 == (code *)0x0) {
        free();
      }
      else {
        (*_DAT_180c69e10)();
      }
    }
  }
  CloseHandle(_DAT_180c698d0);
  DeleteCriticalSection(0x180c698d8);
                    // WARNING: Could not recover jumptable at 0x0001808f374f. Too many branches
                    // WARNING: Treating indirect jump as call
  _endthread();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808f3760(undefined8 param_1,longlong param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar2 = FUN_1808f6c60();
  if (iVar2 != 0) {
    return 0;
  }
  puVar4 = (undefined2 *)0x180c58882;
  iVar6 = 0;
  iVar2 = iVar6;
  do {
    if (*(longlong *)(puVar4 + -0x11) != 0) {
      cVar1 = func_0x0001808f0e60(puVar4[-1],*puVar4);
      if (cVar1 == '\0') {
        cVar1 = func_0x0001808f0e90(puVar4[-1],*puVar4,*(undefined4 *)(puVar4 + 1));
        if ((cVar1 != '\0') || (cVar1 = func_0x0001808f0e30(puVar4[-1],*puVar4), cVar1 != '\0')) {
          iVar2 = iVar2 + 1;
        }
      }
      else {
        iVar6 = iVar6 + 1;
      }
    }
    puVar4 = puVar4 + 0x10fc;
  } while ((longlong)puVar4 < 0x180c69842);
  if (((iVar2 != 4) || (param_3 != '\x01')) && ((iVar6 != 4 || (param_3 != '\0')))) {
    plVar7 = (longlong *)0x180c58860;
    do {
      if (*plVar7 == 0) {
        lVar5 = -1;
        do {
          lVar3 = lVar5;
          lVar5 = lVar3 + 1;
        } while (*(short *)(param_2 + lVar5 * 2) != 0);
        lVar5 = (lVar3 + 2) * 2;
        if (_DAT_180c69e18 == (code *)0x0) {
          lVar3 = malloc(lVar5);
        }
        else {
          lVar3 = (*_DAT_180c69e18)();
        }
        *plVar7 = lVar3;
        if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
          memset(lVar3,0,lVar5);
        }
      }
      plVar7 = plVar7 + 0x43f;
    } while ((longlong)plVar7 < 0x180c69820);
  }
  func_0x0001808f6c90();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f3af0(void)
void FUN_1808f3af0(void)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  char *pcVar6;
  
  pcVar6 = &DAT_180c69860;
  do {
    if ((*(longlong *)(pcVar6 + 8) != 0) && (*pcVar6 == '\0')) {
      uVar4 = 0;
      do {
        bVar3 = (byte)uVar4;
        if (pcVar6[uVar4 + 1] != '\0') break;
        bVar3 = bVar3 + 1;
        uVar4 = (ulonglong)bVar3;
      } while (bVar3 < 6);
      if (bVar3 != 6) {
        puVar5 = (undefined2 *)0x180c58882;
        do {
          if ((*(longlong *)(puVar5 + -0x11) != 0) &&
             (cVar1 = func_0x0001808f0e90(puVar5[-1],*puVar5,*(undefined4 *)(puVar5 + 1)),
             cVar1 != '\0')) {
            bVar3 = 0;
            do {
              if (*(char *)((longlong)puVar5 + (ulonglong)bVar3 + 7) != pcVar6[(ulonglong)bVar3 + 1]
                 ) break;
              bVar3 = bVar3 + 1;
            } while (bVar3 < 6);
            if (bVar3 == 6) {
              iVar2 = FUN_1808f6c60();
              if (iVar2 == 0) {
                *(undefined1 *)((longlong)puVar5 + 0xd) = 0;
                func_0x0001808f6c90();
              }
              break;
            }
          }
          puVar5 = puVar5 + 0x10fc;
        } while ((longlong)puVar5 < 0x180c69842);
      }
      if (*(longlong *)(pcVar6 + 8) != 0) {
        if (_DAT_180c69e10 == (code *)0x0) {
          free();
        }
        else {
          (*_DAT_180c69e10)();
        }
      }
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6[4] = '\0';
      pcVar6[5] = '\0';
      pcVar6[6] = '\0';
      pcVar6[7] = '\0';
      pcVar6[8] = '\0';
      pcVar6[9] = '\0';
      pcVar6[10] = '\0';
      pcVar6[0xb] = '\0';
      pcVar6[0xc] = '\0';
      pcVar6[0xd] = '\0';
      pcVar6[0xe] = '\0';
      pcVar6[0xf] = '\0';
    }
    pcVar6 = pcVar6 + 0x10;
    if (0x180c6989f < (longlong)pcVar6) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1808f3c10(longlong param_1)
void FUN_1808f3c10(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1808f6c60();
  if (iVar1 != 0) {
    return;
  }
  if (param_1 != 0) {
    FUN_1808f1d10(param_1);
  }
  if (DAT_180c69e20 != '\0') {
                    // WARNING: Could not recover jumptable at 0x0001808f6ca0. Too many branches
                    // WARNING: Treating indirect jump as call
    LeaveCriticalSection(0x180c69e50);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f3c80(longlong param_1)
void FUN_1808f3c80(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_188 [80];
  ushort auStack_138 [2];
  uint uStack_134;
  uint uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  longlong lStack_118;
  longlong lStack_110;
  undefined8 uStack_100;
  longlong lStack_f8;
  undefined8 uStack_78;
  ulonglong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  uVar5 = GetCurrentThread();
  SetThreadPriority(uVar5,0xf);
  lVar7 = *(longlong *)(param_1 + 0x18);
  iVar8 = 0;
  uStack_100 = 0;
  lStack_f8 = lVar7;
  cVar3 = HidD_GetPreparsedData(*(undefined8 *)(param_1 + 0x10),&uStack_120);
  if (cVar3 == '\0') {
    iVar4 = FUN_1808f6c60();
    if (iVar4 == 0) {
      FUN_1808f1d10(param_1);
      func_0x0001808f6c90();
    }
    if (DAT_180c58853 != '\0') {
      plVar9 = (longlong *)0x180c69820;
      do {
        if (*plVar9 == lVar7) goto LAB_1808f3dbc;
        iVar8 = iVar8 + 1;
        plVar9 = plVar9 + 1;
      } while (iVar8 < 8);
    }
    goto LAB_1808f44e3;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  iVar4 = HidP_GetCaps(uStack_120,&uStack_78);
  if (iVar4 != 0x110000) {
    HidD_FreePreparsedData(uStack_120);
    iVar4 = FUN_1808f6c60();
    if (iVar4 == 0) {
      FUN_1808f1d10(param_1);
      func_0x0001808f6c90();
    }
    if (DAT_180c58853 != '\0') {
      plVar9 = (longlong *)0x180c69820;
      do {
        if (*plVar9 == lVar7) goto LAB_1808f3dbc;
        iVar8 = iVar8 + 1;
        plVar9 = plVar9 + 1;
      } while (iVar8 < 8);
    }
    goto LAB_1808f44e3;
  }
  auStack_138[0] = uStack_40._4_2_;
  if (_DAT_180c69e18 == (code *)0x0) {
    lVar6 = malloc((ulonglong)uStack_40._4_2_ * 0x48);
  }
  else {
    lVar6 = (*_DAT_180c69e18)();
  }
  lStack_118 = lVar6;
  if (lVar6 == 0) {
LAB_1808f44aa:
    HidD_FreePreparsedData(uStack_120);
    FUN_1808f0550(*(undefined4 *)(param_1 + 8));
    iVar8 = FUN_1808f6c60();
    if (iVar8 == 0) {
      FUN_1808f1d10(param_1);
      func_0x0001808f6c90();
    }
    bVar12 = DAT_180c58853 == '\0';
  }
  else {
    iVar8 = HidP_GetValueCaps(2,lVar6,auStack_138,uStack_120);
    if (iVar8 == 0x110000) {
      uVar2 = (ushort)uStack_70;
      uVar10 = uStack_70 & 0xffff;
      uVar1 = uStack_78._4_2_;
      uVar11 = (uint)uStack_78._4_2_;
      uStack_134 = (uint)uStack_78._4_2_;
      uStack_130 = uStack_134;
      cVar3 = func_0x0001808f0e90(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22),
                                  *(undefined4 *)(param_1 + 0x24));
      if (cVar3 == '\0') {
        cVar3 = func_0x0001808f0e30(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22))
        ;
        if ((cVar3 != '\0') && (0x3f < uVar2)) goto LAB_1808f3ebf;
      }
      else if (0x34 < uVar2) {
LAB_1808f3ebf:
        if (0x3f < uVar1) {
          if (_DAT_180c69e18 == (code *)0x0) {
            lVar7 = malloc(uVar10);
          }
          else {
            lVar7 = (*_DAT_180c69e18)();
          }
          lStack_110 = lVar7;
          if (lVar7 != 0) {
            iVar8 = FUN_1808f2520(param_1,lVar6,auStack_138[0]);
            if (0 < iVar8) {
              if (_DAT_180c69e18 == (code *)0x0) {
                uStack_128 = malloc(uStack_134);
                uVar11 = uStack_134;
              }
              else {
                uStack_128 = (*_DAT_180c69e18)();
                uVar11 = uStack_134;
              }
LAB_1808f3fb9:
                    // WARNING: Subroutine does not return
              memset(uStack_128,0,uVar11);
            }
            if (-1 < iVar8) {
              if (uStack_134 == 0x40) {
                if (_DAT_180c69e18 == (code *)0x0) {
                  uStack_128 = malloc(0x800);
                  uVar11 = uStack_134 << 5;
                  uStack_130 = uVar11;
                }
                else {
                  uStack_128 = (*_DAT_180c69e18)();
                  uVar11 = uStack_134 << 5;
                  uStack_130 = uVar11;
                }
              }
              else if (_DAT_180c69e18 == (code *)0x0) {
                uStack_128 = malloc(uStack_134);
                uStack_130 = uVar11;
              }
              else {
                uStack_128 = (*_DAT_180c69e18)();
                uStack_130 = uVar11;
              }
              goto LAB_1808f3fb9;
            }
            if (_DAT_180c69e10 == (code *)0x0) {
              free(lVar7);
            }
            else {
              (*_DAT_180c69e10)();
            }
          }
        }
      }
      if (_DAT_180c69e10 == (code *)0x0) {
        free(lVar6);
        lVar7 = lStack_f8;
      }
      else {
        (*_DAT_180c69e10)();
        lVar7 = lStack_f8;
      }
      goto LAB_1808f44aa;
    }
    HidD_FreePreparsedData(uStack_120);
    FUN_1808f3c10(param_1);
    if (_DAT_180c69e10 == (code *)0x0) {
      free(lVar6);
      bVar12 = DAT_180c58853 == '\0';
    }
    else {
      (*_DAT_180c69e10)();
      bVar12 = DAT_180c58853 == '\0';
    }
  }
  if (!bVar12) {
    func_0x0001808f3c40(lVar7);
  }
LAB_1808f44e3:
  _endthread();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_188);
LAB_1808f3dbc:
  *(undefined8 *)((longlong)iVar8 * 8 + 0x180c69820) = 0;
  goto LAB_1808f44e3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f3e6b(void)
void FUN_1808f3e6b(void)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint unaff_EDI;
  uint uVar6;
  uint uStack0000000000000054;
  uint uStack0000000000000058;
  undefined8 in_stack_00000068;
  
  uVar1 = *(ushort *)(unaff_RBP + 0x14);
  uVar6 = (uint)uVar1;
  uStack0000000000000054 = (uint)uVar1;
  uStack0000000000000058 = uStack0000000000000054;
  cVar2 = func_0x0001808f0e90();
  if (cVar2 == '\0') {
    cVar2 = func_0x0001808f0e30(*(undefined2 *)(unaff_RBX + 0x20),*(undefined2 *)(unaff_RBX + 0x22))
    ;
    if ((cVar2 == '\0') || (unaff_EDI < 0x40)) goto FUN_1808f4485;
  }
  else if (unaff_EDI < 0x35) goto FUN_1808f4485;
  if (0x3f < uVar1) {
    if (_DAT_180c69e18 == (code *)0x0) {
      lVar4 = malloc();
    }
    else {
      lVar4 = (*_DAT_180c69e18)();
    }
    if (lVar4 != 0) {
      iVar3 = FUN_1808f2520();
      if (iVar3 < 1) {
        if (iVar3 < 0) {
          if (_DAT_180c69e10 == (code *)0x0) {
            free(lVar4);
          }
          else {
            (*_DAT_180c69e10)();
          }
          goto FUN_1808f4485;
        }
        if (uStack0000000000000054 == 0x40) {
          if (_DAT_180c69e18 == (code *)0x0) {
            uVar5 = malloc(0x800);
            uVar6 = uStack0000000000000054 << 5;
            uStack0000000000000058 = uVar6;
          }
          else {
            uVar5 = (*_DAT_180c69e18)();
            uVar6 = uStack0000000000000054 << 5;
            uStack0000000000000058 = uVar6;
          }
        }
        else if (_DAT_180c69e18 == (code *)0x0) {
          uVar5 = malloc(uStack0000000000000054);
          uStack0000000000000058 = uVar6;
        }
        else {
          uVar5 = (*_DAT_180c69e18)();
          uStack0000000000000058 = uVar6;
        }
      }
      else if (_DAT_180c69e18 == (code *)0x0) {
        uVar5 = malloc(uStack0000000000000054);
        uVar6 = uStack0000000000000054;
      }
      else {
        uVar5 = (*_DAT_180c69e18)();
        uVar6 = uStack0000000000000054;
      }
                    // WARNING: Subroutine does not return
      memset(uVar5,0,uVar6);
    }
  }
FUN_1808f4485:
  if (_DAT_180c69e10 == (code *)0x0) {
    free();
  }
  else {
    (*_DAT_180c69e10)();
  }
  uVar5 = *(undefined8 *)(unaff_RBP + -0x70);
  HidD_FreePreparsedData(in_stack_00000068);
  FUN_1808f0550(*(undefined4 *)(unaff_RBX + 8));
  iVar3 = FUN_1808f6c60();
  if (iVar3 == 0) {
    FUN_1808f1d10();
    func_0x0001808f6c90();
  }
  if (DAT_180c58853 != '\0') {
    func_0x0001808f3c40(uVar5);
  }
  _endthread();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x50) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f3ed1(void)
void FUN_1808f3ed1(void)

{
  int iVar1;
  code *in_RAX;
  longlong lVar2;
  undefined8 uVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int unaff_R15D;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000068;
  
  if (in_RAX == (code *)0x0) {
    lVar2 = malloc();
  }
  else {
    lVar2 = (*in_RAX)();
  }
  if (lVar2 == 0) {
LAB_1808f447d:
    if (_DAT_180c69e10 == (code *)0x0) {
      free();
    }
    else {
      (*_DAT_180c69e10)();
    }
    uVar3 = *(undefined8 *)(unaff_RBP + -0x70);
    HidD_FreePreparsedData(in_stack_00000068);
    FUN_1808f0550(*(undefined4 *)(unaff_RBX + 8));
    iVar1 = FUN_1808f6c60();
    if (iVar1 == 0) {
      FUN_1808f1d10();
      func_0x0001808f6c90();
    }
    if (DAT_180c58853 != '\0') {
      func_0x0001808f3c40(uVar3);
    }
    _endthread();
                    // WARNING: Subroutine does not return
    FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x50) ^ (ulonglong)&stack0x00000000);
  }
  iVar1 = FUN_1808f2520();
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      if (_DAT_180c69e10 == (code *)0x0) {
        free(lVar2);
      }
      else {
        (*_DAT_180c69e10)();
      }
      goto LAB_1808f447d;
    }
    if (in_stack_00000050._4_4_ == 0x40) {
      if (_DAT_180c69e18 == (code *)0x0) {
        uVar3 = malloc(0x800);
        in_stack_00000050._4_4_ = 0x800;
      }
      else {
        uVar3 = (*_DAT_180c69e18)();
        in_stack_00000050._4_4_ = 0x800;
      }
    }
    else if (_DAT_180c69e18 == (code *)0x0) {
      uVar3 = malloc(in_stack_00000050._4_4_);
      in_stack_00000050._4_4_ = unaff_R15D;
    }
    else {
      uVar3 = (*_DAT_180c69e18)();
      in_stack_00000050._4_4_ = unaff_R15D;
    }
  }
  else if (_DAT_180c69e18 == (code *)0x0) {
    uVar3 = malloc(in_stack_00000050._4_4_);
  }
  else {
    uVar3 = (*_DAT_180c69e18)();
  }
                    // WARNING: Subroutine does not return
  memset(uVar3,0,in_stack_00000050._4_4_);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f3f05(void)
void FUN_1808f3f05(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int unaff_R15D;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000068;
  
  iVar1 = FUN_1808f2520();
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      if (_DAT_180c69e10 == (code *)0x0) {
        free();
      }
      else {
        (*_DAT_180c69e10)();
      }
      if (_DAT_180c69e10 == (code *)0x0) {
        free();
      }
      else {
        (*_DAT_180c69e10)();
      }
      uVar2 = *(undefined8 *)(unaff_RBP + -0x70);
      HidD_FreePreparsedData(in_stack_00000068);
      FUN_1808f0550(*(undefined4 *)(unaff_RBX + 8));
      iVar1 = FUN_1808f6c60();
      if (iVar1 == 0) {
        FUN_1808f1d10();
        func_0x0001808f6c90();
      }
      if (DAT_180c58853 != '\0') {
        func_0x0001808f3c40(uVar2);
      }
      _endthread();
                    // WARNING: Subroutine does not return
      FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x50) ^ (ulonglong)&stack0x00000000);
    }
    if (in_stack_00000050._4_4_ == 0x40) {
      if (_DAT_180c69e18 == (code *)0x0) {
        uVar2 = malloc(0x800);
        in_stack_00000050._4_4_ = 0x800;
      }
      else {
        uVar2 = (*_DAT_180c69e18)();
        in_stack_00000050._4_4_ = 0x800;
      }
    }
    else if (_DAT_180c69e18 == (code *)0x0) {
      uVar2 = malloc(in_stack_00000050._4_4_);
      in_stack_00000050._4_4_ = unaff_R15D;
    }
    else {
      uVar2 = (*_DAT_180c69e18)();
      in_stack_00000050._4_4_ = unaff_R15D;
    }
  }
  else if (_DAT_180c69e18 == (code *)0x0) {
    uVar2 = malloc(in_stack_00000050._4_4_);
  }
  else {
    uVar2 = (*_DAT_180c69e18)();
  }
                    // WARNING: Subroutine does not return
  memset(uVar2,0,in_stack_00000050._4_4_);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f4473(void)
void FUN_1808f4473(void)

{
  undefined8 uVar1;
  int iVar2;
  code *in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined8 in_stack_00000068;
  
  (*in_RAX)();
  if (_DAT_180c69e10 == (code *)0x0) {
    free();
  }
  else {
    (*_DAT_180c69e10)();
  }
  uVar1 = *(undefined8 *)(unaff_RBP + -0x70);
  HidD_FreePreparsedData(in_stack_00000068);
  FUN_1808f0550(*(undefined4 *)(unaff_RBX + 8));
  iVar2 = FUN_1808f6c60();
  if (iVar2 == 0) {
    FUN_1808f1d10();
    func_0x0001808f6c90();
  }
  if (DAT_180c58853 != '\0') {
    func_0x0001808f3c40(uVar1);
  }
  _endthread();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x50) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f4485(void)
void FUN_1808f4485(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined8 in_stack_00000068;
  
  if (_DAT_180c69e10 == (code *)0x0) {
    free();
  }
  else {
    (*_DAT_180c69e10)();
  }
  uVar1 = *(undefined8 *)(unaff_RBP + -0x70);
  HidD_FreePreparsedData(in_stack_00000068);
  FUN_1808f0550(*(undefined4 *)(unaff_RBX + 8));
  iVar2 = FUN_1808f6c60();
  if (iVar2 == 0) {
    FUN_1808f1d10();
    func_0x0001808f6c90();
  }
  if (DAT_180c58853 != '\0') {
    func_0x0001808f3c40(uVar1);
  }
  _endthread();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x50) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808f449c(void)
void FUN_1808f449c(void)

{
  undefined8 uVar1;
  undefined4 in_EAX;
  int iVar2;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined8 in_stack_00000068;
  
  (*(code *)CONCAT44(in_register_00000004,in_EAX))();
  uVar1 = *(undefined8 *)(unaff_RBP + -0x70);
  HidD_FreePreparsedData(in_stack_00000068);
  FUN_1808f0550(*(undefined4 *)(unaff_RBX + 8));
  iVar2 = FUN_1808f6c60();
  if (iVar2 == 0) {
    FUN_1808f1d10();
    func_0x0001808f6c90();
  }
  if (DAT_180c58853 != '\0') {
    func_0x0001808f3c40(uVar1);
  }
  _endthread();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x50) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1808f4510(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar6) && (param_4 == plVar6)) {
    FUN_1808f17d0(param_1,plVar6[1],param_3,param_4,0xfffffffffffffffe);
    *(longlong **)(*param_1 + 8) = plVar6;
    *(longlong **)*param_1 = plVar6;
    *(longlong **)(*param_1 + 0x10) = plVar6;
    param_1[1] = 0;
    *param_2 = *(undefined8 *)*param_1;
  }
  else {
    plVar6 = param_3;
    if (param_3 != param_4) {
      do {
        plVar2 = (longlong *)plVar6[2];
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x19);
          param_3 = plVar2;
          plVar3 = (longlong *)*plVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar3 + 0x19);
            param_3 = plVar3;
            plVar3 = (longlong *)*plVar3;
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((param_3 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)param_3[2]))) {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar4 = (longlong *)param_3[1];
            plVar3 = param_3;
          }
        }
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          plVar2 = (longlong *)*plVar2;
          cVar1 = *(char *)((longlong)plVar2 + 0x19);
          while (cVar1 == '\0') {
            plVar2 = (longlong *)*plVar2;
            cVar1 = *(char *)((longlong)plVar2 + 0x19);
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar2 = (longlong *)plVar6[1];
          while ((plVar3 = plVar2, cVar1 == '\0' && (plVar6 == (longlong *)plVar3[2]))) {
            cVar1 = *(char *)(plVar3[1] + 0x19);
            plVar2 = (longlong *)plVar3[1];
            plVar6 = plVar3;
          }
        }
        lVar5 = FUN_1808f1890(param_1);
        if ((7 < *(ulonglong *)(lVar5 + 0x38)) && (*(longlong *)(lVar5 + 0x20) != 0)) {
          if (_DAT_180c69e10 == (code *)0x0) {
            free();
          }
          else {
            (*_DAT_180c69e10)();
          }
        }
        *(undefined8 *)(lVar5 + 0x30) = 0;
        *(undefined8 *)(lVar5 + 0x38) = 7;
        *(undefined2 *)(lVar5 + 0x20) = 0;
        if (lVar5 != 0) {
          if (_DAT_180c69e10 == (code *)0x0) {
            free(lVar5);
          }
          else {
            (*_DAT_180c69e10)();
          }
        }
        plVar6 = param_3;
      } while (param_3 != param_4);
    }
    *param_2 = param_3;
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f4720(undefined8 param_1,undefined8 param_2,undefined1 param_3)
void FUN_1808f4720(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_b8 [112];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
                    // WARNING: Subroutine does not return
  memset(param_2,0,param_3);
}



undefined8 FUN_1808f4930(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = func_0x0001808f0e90(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22),
                              *(undefined4 *)(param_1 + 0x24));
  if (cVar1 != '\0') {
                    // WARNING: Subroutine does not return
    memset(param_2,0,param_3);
  }
  cVar1 = func_0x0001808f0e30(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22));
  if (cVar1 != '\0') {
                    // WARNING: Subroutine does not return
    memset(param_2,0,param_3);
  }
  return 0;
}






// 函数: void FUN_1808f4a70(void)
void FUN_1808f4a70(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






