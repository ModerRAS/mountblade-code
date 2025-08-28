#include "TaleWorlds.Native.Split.h"

// 99_part_14_part018.c - 7 个函数

// 函数: void FUN_1808f9b70(uint64_t param_1)
void FUN_1808f9b70(uint64_t param_1)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  void *puVar8;
  char *pcVar9;
  void *puVar10;
  int8_t auStack_c8 [32];
  char *pcStack_a8;
  int iStack_a0;
  void *apuStack_98 [6];
  void *apuStack_68 [4];
  void *puStack_48;
  uint64_t uStack_40;
  ulonglong uStack_38;
  
  pcVar3 = _DAT_180c69f70;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  apuStack_68[0] = &UNK_18098aca0;
  puVar10 = &UNK_18098ad60;
  pcVar7 = (char *)0x0;
  apuStack_98[0] = &UNK_18098ad60;
  uStack_40 = 0;
  apuStack_68[1] = &UNK_18098acb8;
  puVar8 = &UNK_18098ac80;
  apuStack_98[5] = &UNK_18098ac80;
  apuStack_68[2] = &UNK_18098ace0;
  apuStack_68[3] = &UNK_18098ad10;
  puStack_48 = &UNK_18098ad38;
  apuStack_98[1] = &UNK_18098ad88;
  apuStack_98[2] = &UNK_18098ada0;
  apuStack_98[3] = &UNK_18098adc0;
  apuStack_98[4] = (void *)0x0;
  _guard_check_icall(_DAT_180c69f70);
  iStack_a0 = 0;
  pcStack_a8 = (char *)0x0;
  iVar4 = (*pcVar3)(param_1,4,1,0);
  pcVar5 = pcVar7;
  if ((iVar4 != 0) &&
     (pcVar5 = (char *)LocalAlloc(0x40,iVar4), pcVar3 = _DAT_180c69f70, pcVar5 != (char *)0x0)) {
    _guard_check_icall(_DAT_180c69f70);
    pcStack_a8 = pcVar5;
    iStack_a0 = iVar4;
    iVar4 = (*pcVar3)(param_1,4,1);
    pcVar9 = pcVar7;
    if (iVar4 != 0) {
      do {
        pcVar6 = pcVar5;
        do {
          cVar1 = *pcVar6;
          cVar2 = pcVar6[(longlong)puVar8 - (longlong)pcVar5];
          if (cVar1 != cVar2) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          LocalFree(pcVar5);
          pcVar3 = _DAT_180c69f70;
          pcVar5 = (char *)0x0;
          _guard_check_icall(_DAT_180c69f70);
          iStack_a0 = 0;
          pcStack_a8 = (char *)0x0;
          iVar4 = (*pcVar3)(param_1,4,0);
          if ((iVar4 == 0) ||
             (pcVar5 = (char *)LocalAlloc(0x40,iVar4), pcVar3 = _DAT_180c69f70,
             pcVar5 == (char *)0x0)) goto LAB_1808f9c53;
          _guard_check_icall(_DAT_180c69f70);
          pcStack_a8 = pcVar5;
          iStack_a0 = iVar4;
          iVar4 = (*pcVar3)(param_1,4,0);
          if (iVar4 == 0) goto LAB_1808f9c53;
          goto LAB_1808f9d74;
        }
        pcVar9 = (char *)(ulonglong)((int)pcVar9 + 1);
        puVar8 = apuStack_98[(longlong)(pcVar9 + 5)];
      } while (puVar8 != (void *)0x0);
      goto LAB_1808f9d95;
    }
  }
LAB_1808f9c53:
  GetLastError();
  goto LAB_1808f9d95;
  while( true ) {
    pcVar7 = (char *)(ulonglong)((int)pcVar7 + 1);
    puVar10 = apuStack_98[(longlong)pcVar7];
    if (puVar10 == (void *)0x0) break;
LAB_1808f9d74:
    iVar4 = _stricmp(pcVar5,puVar10);
    if (iVar4 == 0) break;
  }
LAB_1808f9d95:
  LocalFree(pcVar5);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_c8);
}



uint64_t FUN_1808f9de0(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  
  uVar2 = 0;
  lVar1 = FUN_1808f9200();
  if ((param_1 == 0) || (lVar1 != 0)) {
    uVar2 = LoadLibraryExW(lVar1,0,param_2 & 0xffffe0f7);
  }
  LocalFree(lVar1);
  return uVar2;
}



void GetProcAddress(void)

{
                    // WARNING: Could not recover jumptable at 0x0001808f9e50. Too many branches
                    // WARNING: Treating indirect jump as call
  GetProcAddress();
  return;
}



ulonglong FUN_1808f9e60(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int32_t auStackX_20 [2];
  uint64_t auStack_18 [2];
  
  FUN_1808fb9a0(&UNK_18098b020,0x18,&UNK_18098b008,&UNK_18098afe8,param_2,param_1);
  uVar2 = RegOpenKeyExW(0xffffffff80000002,param_1,0,0x20019,auStack_18);
  if ((int)uVar2 == 0) {
    auStackX_20[0] = 0x104;
    uVar1 = RegQueryValueExW(auStack_18[0],param_2,0,0,param_3,auStackX_20);
    uVar2 = (ulonglong)uVar1;
    if (uVar1 == 0) {
      FUN_1808fb9a0(&UNK_18098b020,0x1f,&UNK_18098b008,&UNK_18098b078,param_2,param_1);
    }
    RegCloseKey(auStack_18[0]);
  }
  return uVar2;
}



uint FUN_1808f9f40(uint64_t param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iStackX_c;
  int32_t auStackX_18 [2];
  ulonglong uStack_68;
  longlong lStack_60;
  
  FUN_1808fb9a0(&UNK_18098b020,0x29,&UNK_18098b0c8,&UNK_18098b098);
  lVar2 = LoadLibraryW(&UNK_18098b0e0);
  if (lVar2 == 0) {
    return 0x8000ffff;
  }
  pcVar3 = (code *)GetProcAddress(lVar2,&UNK_18098b0f8);
  pcVar4 = (code *)GetProcAddress(lVar2,&UNK_18098b110);
  lVar5 = GetProcAddress(lVar2,&UNK_18098b128);
  if (((pcVar3 == (code *)0x0) || (pcVar4 == (code *)0x0)) || (lVar5 == 0)) {
    uVar1 = 0x8000ffff;
  }
  else {
    uVar8 = 0;
    uStack_68 = 0;
    lStack_60 = 0;
    _guard_check_icall(pcVar3);
    uVar1 = (*pcVar3)(&uStack_68);
    if ((int)uVar1 < 0) {
      uVar1 = uVar1 | 0x10000000;
    }
    else if ((uint)uStack_68 == 0) {
      uVar1 = 0x8000ffff;
    }
    else {
      lVar5 = malloc((uStack_68 & 0xffffffff) * 0x14);
      if (lVar5 == 0) {
        uVar1 = 0x8007000e;
      }
      else {
        lStack_60 = lVar5;
        _guard_check_icall(pcVar3);
        uVar1 = (*pcVar3)(&uStack_68);
        if ((int)uVar1 < 0) {
          uVar1 = uVar1 | 0x10000000;
        }
        else {
          if ((uint)uStack_68 != 0) {
            iStackX_c = (int)((ulonglong)param_1 >> 0x20);
            uVar9 = uVar8;
            do {
              if ((*(int *)(lVar5 + 8 + uVar9 * 0x14) == iStackX_c) &&
                 (*(int *)(lVar5 + 4 + uVar9 * 0x14) == (int)param_1)) {
                if (*(int *)(lVar5 + uVar9 * 0x14) != 0) {
                  lVar6 = malloc(0x430);
                  if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
                    memset(lVar6,0,0x430);
                  }
                  FUN_1808fb790(&UNK_18098b020,0x8b,&UNK_18098b0c8,&UNK_18098b190);
                  uVar1 = 0x80004005;
                  goto LAB_1808fa111;
                }
                break;
              }
              uVar1 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar1;
            } while (uVar1 < (uint)uStack_68);
          }
          FUN_1808fb790(&UNK_18098b020,0x91,&UNK_18098b0c8,&UNK_18098b1c8);
          uVar1 = 0x80070057;
LAB_1808fa111:
          if ((uint)uStack_68 != 0) {
            do {
              auStackX_18[0] = *(int32_t *)(lVar5 + uVar8 * 0x14);
              _guard_check_icall(pcVar4);
              (*pcVar4)(auStackX_18);
              uVar7 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar7;
            } while (uVar7 < (uint)uStack_68);
          }
          free(lVar5);
          FreeLibrary(lVar2);
        }
      }
    }
  }
  return uVar1;
}



uint FUN_1808f9f9d(void)

{
  uint uVar1;
  code *pcVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong unaff_RBP;
  ulonglong uVar8;
  
  pcVar2 = (code *)GetProcAddress();
  pcVar3 = (code *)GetProcAddress();
  lVar4 = GetProcAddress();
  if (((pcVar2 == (code *)0x0) || (pcVar3 == (code *)0x0)) || (lVar4 == 0)) {
    uVar1 = 0x8000ffff;
  }
  else {
    uVar7 = 0;
    *(uint64_t *)(unaff_RBP + -9) = 0;
    *(int32_t *)(unaff_RBP + -9) = 0;
    *(uint64_t *)(unaff_RBP + -1) = 0;
    _guard_check_icall(pcVar2);
    uVar1 = (*pcVar2)(unaff_RBP + -9);
    if ((int)uVar1 < 0) {
      uVar1 = uVar1 | 0x10000000;
    }
    else if (*(uint *)(unaff_RBP + -9) == 0) {
      uVar1 = 0x8000ffff;
    }
    else {
      lVar4 = malloc((ulonglong)*(uint *)(unaff_RBP + -9) * 0x14);
      if (lVar4 == 0) {
        uVar1 = 0x8007000e;
      }
      else {
        *(longlong *)(unaff_RBP + -1) = lVar4;
        _guard_check_icall(pcVar2);
        uVar1 = (*pcVar2)(unaff_RBP + -9);
        if ((int)uVar1 < 0) {
          uVar1 = uVar1 | 0x10000000;
        }
        else {
          if (*(uint *)(unaff_RBP + -9) != 0) {
            uVar8 = uVar7;
            do {
              if ((*(int *)(lVar4 + 8 + uVar8 * 0x14) == *(int *)(unaff_RBP + 0x6b)) &&
                 (*(int *)(lVar4 + 4 + uVar8 * 0x14) == (int)*(uint64_t *)(unaff_RBP + 0x67))) {
                if (*(int *)(lVar4 + uVar8 * 0x14) != 0) {
                  lVar5 = malloc(0x430);
                  if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
                    memset(lVar5,0,0x430);
                  }
                  FUN_1808fb790(&UNK_18098b020,0x8b,&UNK_18098b0c8,&UNK_18098b190);
                  uVar1 = 0x80004005;
                  goto LAB_1808fa111;
                }
                break;
              }
              uVar1 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar1;
            } while (uVar1 < *(uint *)(unaff_RBP + -9));
          }
          FUN_1808fb790(&UNK_18098b020,0x91,&UNK_18098b0c8,&UNK_18098b1c8);
          uVar1 = 0x80070057;
LAB_1808fa111:
          if (*(int *)(unaff_RBP + -9) != 0) {
            do {
              *(int32_t *)(unaff_RBP + 0x77) = *(int32_t *)(lVar4 + uVar7 * 0x14);
              _guard_check_icall(pcVar3);
              (*pcVar3)(unaff_RBP + 0x77);
              uVar6 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar6;
            } while (uVar6 < *(uint *)(unaff_RBP + -9));
          }
          free(lVar4);
          FreeLibrary();
        }
      }
    }
  }
  return uVar1;
}



uint FUN_1808fa005(void)

{
  uint uVar1;
  uint64_t in_RAX;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong unaff_RBP;
  code *unaff_RSI;
  ulonglong uVar6;
  code *unaff_R14;
  
  uVar5 = 0;
  *(uint64_t *)(unaff_RBP + -9) = in_RAX;
  *(int32_t *)(unaff_RBP + -9) = 0;
  *(uint64_t *)(unaff_RBP + -1) = 0;
  _guard_check_icall();
  uVar1 = (*unaff_R14)(unaff_RBP + -9);
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 | 0x10000000;
  }
  else if (*(uint *)(unaff_RBP + -9) == 0) {
    uVar1 = 0x8000ffff;
  }
  else {
    lVar2 = malloc((ulonglong)*(uint *)(unaff_RBP + -9) * 0x14);
    if (lVar2 == 0) {
      uVar1 = 0x8007000e;
    }
    else {
      *(longlong *)(unaff_RBP + -1) = lVar2;
      _guard_check_icall();
      uVar1 = (*unaff_R14)(unaff_RBP + -9);
      if ((int)uVar1 < 0) {
        uVar1 = uVar1 | 0x10000000;
      }
      else {
        if (*(uint *)(unaff_RBP + -9) != 0) {
          uVar6 = uVar5;
          do {
            if ((*(int *)(lVar2 + 8 + uVar6 * 0x14) == *(int *)(unaff_RBP + 0x6b)) &&
               (*(int *)(lVar2 + 4 + uVar6 * 0x14) == (int)*(uint64_t *)(unaff_RBP + 0x67))) {
              if (*(int *)(lVar2 + uVar6 * 0x14) != 0) {
                lVar3 = malloc(0x430);
                if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
                  memset(lVar3,0,0x430);
                }
                FUN_1808fb790(&UNK_18098b020,0x8b,&UNK_18098b0c8,&UNK_18098b190);
                uVar1 = 0x80004005;
                goto LAB_1808fa111;
              }
              break;
            }
            uVar1 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar1;
          } while (uVar1 < *(uint *)(unaff_RBP + -9));
        }
        FUN_1808fb790(&UNK_18098b020,0x91,&UNK_18098b0c8,&UNK_18098b1c8);
        uVar1 = 0x80070057;
LAB_1808fa111:
        if (*(int *)(unaff_RBP + -9) != 0) {
          do {
            *(int32_t *)(unaff_RBP + 0x77) = *(int32_t *)(lVar2 + uVar5 * 0x14);
            _guard_check_icall();
            (*unaff_RSI)(unaff_RBP + 0x77);
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
          } while (uVar4 < *(uint *)(unaff_RBP + -9));
        }
        free(lVar2);
        FreeLibrary();
      }
    }
  }
  return uVar1;
}



uint FUN_1808fa046(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint unaff_EBX;
  longlong unaff_RBP;
  code *unaff_RSI;
  ulonglong uVar4;
  code *unaff_R14;
  
  lVar2 = malloc(param_1 << 2);
  if (lVar2 == 0) {
    uVar1 = 0x8007000e;
  }
  else {
    *(longlong *)(unaff_RBP + -1) = lVar2;
    _guard_check_icall();
    uVar1 = (*unaff_R14)(unaff_RBP + -9);
    if ((int)uVar1 < 0) {
      uVar1 = uVar1 | 0x10000000;
    }
    else {
      uVar4 = (ulonglong)unaff_EBX;
      if (*(uint *)(unaff_RBP + -9) != 0) {
        do {
          if ((*(int *)(lVar2 + 8 + uVar4 * 0x14) == *(int *)(unaff_RBP + 0x6b)) &&
             (*(int *)(lVar2 + 4 + uVar4 * 0x14) == (int)*(uint64_t *)(unaff_RBP + 0x67))) {
            if (*(int *)(lVar2 + uVar4 * 0x14) != 0) {
              lVar3 = malloc(0x430);
              if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
                memset(lVar3,0,0x430);
              }
              FUN_1808fb790(&UNK_18098b020,0x8b,&UNK_18098b0c8,&UNK_18098b190);
              uVar1 = 0x80004005;
              goto LAB_1808fa111;
            }
            break;
          }
          uVar1 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(unaff_RBP + -9));
      }
      FUN_1808fb790(&UNK_18098b020,0x91,&UNK_18098b0c8,&UNK_18098b1c8);
      uVar1 = 0x80070057;
LAB_1808fa111:
      if (unaff_EBX < *(uint *)(unaff_RBP + -9)) {
        do {
          *(int32_t *)(unaff_RBP + 0x77) = *(int32_t *)(lVar2 + (ulonglong)unaff_EBX * 0x14);
          _guard_check_icall();
          (*unaff_RSI)(unaff_RBP + 0x77);
          unaff_EBX = unaff_EBX + 1;
        } while (unaff_EBX < *(uint *)(unaff_RBP + -9));
      }
      free(lVar2);
      FreeLibrary();
    }
  }
  return uVar1;
}






// 函数: void FUN_1808fa067(void)
void FUN_1808fa067(void)

{
  return;
}






// 函数: void FUN_1808fa06f(void)
void FUN_1808fa06f(void)

{
  return;
}



uint FUN_1808fa08c(void)

{
  uint uVar1;
  longlong lVar2;
  uint unaff_EBX;
  longlong unaff_RBP;
  code *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar3;
  code *unaff_R14;
  
  *(longlong *)(unaff_RBP + -1) = unaff_RDI;
  _guard_check_icall();
  uVar1 = (*unaff_R14)(unaff_RBP + -9);
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 | 0x10000000;
  }
  else {
    uVar3 = (ulonglong)unaff_EBX;
    if (*(uint *)(unaff_RBP + -9) != 0) {
      do {
        if ((*(int *)(unaff_RDI + 8 + uVar3 * 0x14) == *(int *)(unaff_RBP + 0x6b)) &&
           (*(int *)(unaff_RDI + 4 + uVar3 * 0x14) == (int)*(uint64_t *)(unaff_RBP + 0x67))) {
          if (*(int *)(unaff_RDI + uVar3 * 0x14) != 0) {
            lVar2 = malloc(0x430);
            if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
              memset(lVar2,0,0x430);
            }
            FUN_1808fb790(&UNK_18098b020,0x8b,&UNK_18098b0c8,&UNK_18098b190);
            uVar1 = 0x80004005;
            goto LAB_1808fa111;
          }
          break;
        }
        uVar1 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(unaff_RBP + -9));
    }
    FUN_1808fb790(&UNK_18098b020,0x91,&UNK_18098b0c8,&UNK_18098b1c8);
    uVar1 = 0x80070057;
LAB_1808fa111:
    if (unaff_EBX < *(uint *)(unaff_RBP + -9)) {
      do {
        *(int32_t *)(unaff_RBP + 0x77) = *(int32_t *)(unaff_RDI + (ulonglong)unaff_EBX * 0x14)
        ;
        _guard_check_icall();
        (*unaff_RSI)(unaff_RBP + 0x77);
        unaff_EBX = unaff_EBX + 1;
      } while (unaff_EBX < *(uint *)(unaff_RBP + -9));
    }
    free();
    FreeLibrary();
  }
  return uVar1;
}



uint64_t FUN_1808fa0b1(uint64_t param_1,uint64_t param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint unaff_EBX;
  longlong unaff_RBP;
  code *unaff_RSI;
  longlong unaff_RDI;
  uint64_t uVar2;
  
  if (param_4 != 0) {
    do {
      if ((*(int *)(unaff_RDI + 8 + (ulonglong)param_3 * 0x14) == *(int *)(unaff_RBP + 0x6b)) &&
         (*(int *)(unaff_RDI + 4 + (ulonglong)param_3 * 0x14) ==
          (int)*(uint64_t *)(unaff_RBP + 0x67))) {
        if (*(int *)(unaff_RDI + (ulonglong)param_3 * 0x14) != 0) {
          lVar1 = malloc(0x430);
          if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
            memset(lVar1,0,0x430);
          }
          FUN_1808fb790(&UNK_18098b020,0x8b,&UNK_18098b0c8,&UNK_18098b190);
          uVar2 = 0x80004005;
          goto LAB_1808fa111;
        }
        break;
      }
      param_3 = param_3 + 1;
    } while (param_3 < param_4);
  }
  FUN_1808fb790(&UNK_18098b020,0x91,&UNK_18098b0c8,&UNK_18098b1c8);
  uVar2 = 0x80070057;
LAB_1808fa111:
  if (unaff_EBX < *(uint *)(unaff_RBP + -9)) {
    do {
      *(int32_t *)(unaff_RBP + 0x77) = *(int32_t *)(unaff_RDI + (ulonglong)unaff_EBX * 0x14);
      _guard_check_icall();
      (*unaff_RSI)(unaff_RBP + 0x77);
      unaff_EBX = unaff_EBX + 1;
    } while (unaff_EBX < *(uint *)(unaff_RBP + -9));
  }
  free();
  FreeLibrary();
  return uVar2;
}



int32_t FUN_1808fa120(void)

{
  uint unaff_EBX;
  longlong unaff_RBP;
  code *unaff_RSI;
  longlong unaff_RDI;
  int32_t unaff_R14D;
  
  do {
    *(int32_t *)(unaff_RBP + 0x77) = *(int32_t *)(unaff_RDI + (ulonglong)unaff_EBX * 0x14);
    _guard_check_icall();
    (*unaff_RSI)(unaff_RBP + 0x77);
    unaff_EBX = unaff_EBX + 1;
  } while (unaff_EBX < *(uint *)(unaff_RBP + -9));
  free();
  FreeLibrary();
  return unaff_R14D;
}



uint64_t FUN_1808fa15c(uint64_t param_1,uint64_t param_2,ulonglong param_3)

{
  longlong lVar1;
  uint unaff_EBX;
  longlong unaff_RBP;
  code *unaff_RSI;
  longlong unaff_RDI;
  uint64_t uVar2;
  
  if (*(int *)(unaff_RDI + (param_3 & 0xffffffff) * 0x14) == 0) {
    FUN_1808fb790(&UNK_18098b020,0x91,&UNK_18098b0c8,&UNK_18098b1c8);
    uVar2 = 0x80070057;
  }
  else {
    lVar1 = malloc(0x430);
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar1,0,0x430);
    }
    FUN_1808fb790(&UNK_18098b020,0x8b,&UNK_18098b0c8,&UNK_18098b190);
    uVar2 = 0x80004005;
  }
  if (unaff_EBX < *(uint *)(unaff_RBP + -9)) {
    do {
      *(int32_t *)(unaff_RBP + 0x77) = *(int32_t *)(unaff_RDI + (ulonglong)unaff_EBX * 0x14);
      _guard_check_icall();
      (*unaff_RSI)(unaff_RBP + 0x77);
      unaff_EBX = unaff_EBX + 1;
    } while (unaff_EBX < *(uint *)(unaff_RBP + -9));
  }
  free();
  FreeLibrary();
  return uVar2;
}



uint64_t FUN_1808fa285(void)

{
  return 0x8000ffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808fa290(uint64_t param_1)
void FUN_1808fa290(uint64_t param_1)

{
  int iVar1;
  int16_t *puVar2;
  longlong lVar3;
  int8_t auStack_258 [32];
  int8_t *puStack_238;
  int8_t auStack_228 [528];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_258;
  iVar1 = GetModuleFileNameW(0,auStack_228,0x104);
  if (iVar1 == 0) {
    FUN_1808fb9a0(&UNK_18098b020,0xb5,&UNK_18098b240,&UNK_18098b208);
  }
  else {
    puVar2 = (int16_t *)wcsrchr(auStack_228,0x5c);
    if (puVar2 != (int16_t *)0x0) {
      *puVar2 = 0;
    }
    wcscat_s(auStack_228,0x104,&UNK_18098b1f0);
    lVar3 = FUN_1808faf90(auStack_228,0,1);
    if (lVar3 != 0) {
      puStack_238 = auStack_228;
      FUN_1808fb9a0(&UNK_18098b020,0xe7,&UNK_18098b408,&UNK_18098b3e8);
      goto LAB_1808fa47f;
    }
  }
  FUN_1808fb9a0(&UNK_18098b020,0xbb,&UNK_18098b240,&UNK_18098b258);
  iVar1 = FUN_1808f9f40(param_1,auStack_228);
  if (((iVar1 < 0) && (iVar1 = FUN_1808f9e60(&UNK_18098b2a0,&UNK_18098b288,auStack_228), iVar1 != 0)
      ) && (iVar1 = FUN_1808f9e60(&UNK_18098b320,&UNK_18098b308,auStack_228), iVar1 != 0)) {
    puStack_238 = (int8_t *)CONCAT44(puStack_238._4_4_,iVar1);
    FUN_1808fb790(&UNK_18098b020,0xd6,&UNK_18098b240,&UNK_18098b3a0);
  }
  else {
    wcscat_s(auStack_228,0x104,&UNK_18098b1f0);
    lVar3 = FUN_1808faf90(auStack_228,0,1);
    if (lVar3 == 0) {
      puStack_238 = auStack_228;
      FUN_1808fb790(&UNK_18098b020,0xd1,&UNK_18098b240,&UNK_18098b378);
    }
    else {
      puStack_238 = auStack_228;
      FUN_1808fb9a0(&UNK_18098b020,0xe7,&UNK_18098b408,&UNK_18098b3e8);
    }
  }
LAB_1808fa47f:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_258);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808fa4a0(uint64_t param_1,ulonglong param_2)
void FUN_1808fa4a0(uint64_t param_1,ulonglong param_2)

{
  char cVar1;
  code *pcVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort *puVar11;
  ulonglong uVar12;
  int8_t auStack_228 [32];
  uint64_t *puStack_208;
  int32_t uStack_1e8;
  int32_t uStack_1e4;
  uint64_t uStack_1d8;
  int32_t uStack_1d0;
  int32_t uStack_1cc;
  int32_t uStack_1c8;
  int32_t uStack_1c4;
  ushort auStack_1c0 [4];
  int32_t uStack_1b8;
  int32_t uStack_1b4;
  int32_t uStack_1b0;
  int32_t uStack_1ac;
  uint64_t uStack_1a8;
  uint64_t uStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  int32_t uStack_150;
  int16_t uStack_14c;
  int8_t auStack_148 [256];
  ulonglong uStack_48;
  
  cVar1 = DAT_180c69ef8;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_228;
  uStack_1b8 = 0x780030;
  uStack_1b4 = 0x300030;
  uStack_1b0 = 0x300030;
  uStack_1ac = 0x300030;
  uVar12 = param_2 & 0xffffffff;
  uStack_1a8 = 0xa00300030;
  OutputDebugStringW(&UNK_18098ae50);
  OutputDebugStringW(param_1);
  OutputDebugStringW(&UNK_18098aed8);
  sVar3 = 0x37;
  uVar10 = (ushort)(uVar12 >> 0x1c);
  if (uVar10 < 10) {
    sVar3 = 0x30;
  }
  uVar8 = (ushort)(param_2 >> 0x18) & 0xf;
  sVar4 = 0x37;
  if (uVar8 < 10) {
    sVar4 = 0x30;
  }
  uVar9 = (ushort)(uVar12 >> 0x14) & 0xf;
  uStack_1b4 = CONCAT22(sVar4 + uVar8,sVar3 + uVar10);
  sVar3 = 0x37;
  if (uVar9 < 10) {
    sVar3 = 0x30;
  }
  uVar10 = (ushort)(param_2 >> 0x10) & 0xf;
  sVar4 = 0x37;
  if (uVar10 < 10) {
    sVar4 = 0x30;
  }
  uVar8 = (ushort)(param_2 >> 0xc) & 0xf;
  uStack_1b0 = CONCAT22(sVar4 + uVar10,sVar3 + uVar9);
  sVar3 = 0x37;
  if (uVar8 < 10) {
    sVar3 = 0x30;
  }
  uVar10 = (ushort)(param_2 >> 8) & 0xf;
  sVar4 = 0x37;
  if (uVar10 < 10) {
    sVar4 = 0x30;
  }
  uStack_1ac = CONCAT22(sVar4 + uVar10,sVar3 + uVar8);
  sVar3 = 0x37;
  uVar10 = (ushort)(uVar12 >> 4) & 0xf;
  if (uVar10 < 10) {
    sVar3 = 0x30;
  }
  uVar8 = (ushort)uVar12 & 0xf;
  sVar4 = 0x37;
  if (uVar8 < 10) {
    sVar4 = 0x30;
  }
  uStack_1a8._0_4_ = CONCAT22(sVar4 + uVar8,sVar3 + uVar10);
  OutputDebugStringW(&uStack_1b8);
  if (cVar1 == '\0') {
    if (DAT_180bf0080 != '\0') {
      lVar7 = 0;
      auStack_1c0[0] = 0x100;
      auStack_1c0[1] = 0x200;
      auStack_1c0[2] = 0;
      uStack_1d0 = 0x41fcc608;
      uStack_1cc = 0x4def8496;
      uStack_1c8 = 0x9b7d3eb4;
      uStack_1c4 = 0xffa675d6;



// 函数: void FUN_1808fa9b0(byte *param_1,uint param_2,char param_3)
void FUN_1808fa9b0(byte *param_1,uint param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte bVar10;
  byte bVar11;
  byte *pbVar12;
  int8_t auStack_58 [32];
  longlong lStack_38;
  short sStack_30;
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_58;
  lStack_38 = 0x9010df78648862a;
  sStack_30 = 0x110;
  do {
    uVar4 = 0;
LAB_1808fa9f5:
    if (param_2 <= (uint)uVar4) {
LAB_1808fab6f:
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_58);
    }
    uVar8 = 2;
    pbVar12 = param_1 + uVar4;
    bVar10 = pbVar12[1];
    uVar6 = (uint)bVar10;
    if ((char)bVar10 < '\0') {
      uVar5 = bVar10 & 0x7f;
      uVar6 = 0;
      uVar9 = uVar8;
      if ((bVar10 & 0x7f) != 0) {
        do {
          uVar5 = uVar5 - 1;
          uVar8 = (ulonglong)((int)uVar9 + 1);
          uVar6 = uVar6 << 8 | (uint)pbVar12[uVar9];
          uVar9 = uVar8;
        } while (0 < (int)uVar5);
      }
    }
    pbVar3 = pbVar12 + uVar8;
    uVar5 = (uint)uVar4 + uVar6 + (int)uVar8;
    uVar4 = (ulonglong)uVar5;
    if ((*pbVar12 & 0x20) != 0) {
      lVar2 = FUN_1808fa9b0(pbVar3,uVar6,param_3);
      if (lVar2 != 0) goto LAB_1808fab6f;
      goto LAB_1808fa9f5;
    }
    bVar10 = *pbVar12 & 0x1f;
    if (param_3 != '\0') {
      if (bVar10 == 0x18) {
        lStack_38 = 0;
        FUN_18010cbc0(pbVar3,&UNK_18098ae10,&lStack_38);
        goto LAB_1808fab6f;
      }
      goto LAB_1808fa9f5;
    }
    if ((((bVar10 != 6) || (uVar6 != 0xb)) || (*(longlong *)pbVar3 != lStack_38)) ||
       ((*(short *)(pbVar3 + 8) != sStack_30 || (pbVar3[10] != 4)))) goto LAB_1808fa9f5;
    uVar7 = 2;
    pbVar12 = param_1 + uVar5;
    bVar10 = pbVar12[1];
    uVar6 = (uint)bVar10;
    bVar11 = *pbVar12;
    if ((char)bVar10 < '\0') {
      uVar1 = uVar6 & 0x7f;
      uVar6 = 0;
      if ((bVar10 & 0x7f) != 0) {
        do {
          uVar4 = (ulonglong)uVar7;
          uVar1 = uVar1 - 1;
          uVar7 = uVar7 + 1;
          uVar6 = uVar6 << 8 | (uint)pbVar12[uVar4];
        } while (0 < (int)uVar1);
      }
    }
    pbVar12 = pbVar12 + uVar7;
    uVar4 = (ulonglong)(uVar5 + uVar6 + uVar7);
    if ((bVar11 & 0x20) != 0) {
      bVar10 = pbVar12[1];
      uVar6 = (uint)bVar10;
      uVar8 = 2;
      bVar11 = *pbVar12;
      if ((char)bVar10 < '\0') {
        uVar5 = uVar6 & 0x7f;
        uVar6 = 0;
        uVar9 = uVar8;
        if ((bVar10 & 0x7f) != 0) {
          do {
            uVar5 = uVar5 - 1;
            uVar8 = (ulonglong)((int)uVar9 + 1);
            uVar6 = uVar6 << 8 | (uint)pbVar12[uVar9];
            uVar9 = uVar8;
          } while (0 < (int)uVar5);
        }
      }
      pbVar12 = pbVar12 + uVar8;
    }
    if (bVar11 != 4) goto LAB_1808fa9f5;
    param_3 = '\x01';
    param_1 = pbVar12;
    param_2 = uVar6;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808fab90(uint64_t param_1)
void FUN_1808fab90(uint64_t param_1)

{
  int8_t auStack_c8 [32];
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int8_t auStack_88 [96];
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  uStack_28 = 0xaac56b;
  uStack_24 = 0x11d0cd44;
  uStack_20 = 0xc000c28c;
  uStack_1c = 0xee95c24f;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0x20;
  uStack_a0 = param_1;
                    // WARNING: Subroutine does not return
  memset(auStack_88,0,0x58);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




