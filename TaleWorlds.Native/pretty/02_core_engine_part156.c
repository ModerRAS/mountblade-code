#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part156.c - 27 个函数

// 函数: void FUN_18013d378(uint64_t param_1,ulonglong param_2)
void FUN_18013d378(uint64_t param_1,ulonglong param_2)

{
  float fVar1;
  float fVar2;
  short sVar3;
  longlong lVar4;
  int8_t auVar5 [16];
  int *piVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  uint64_t *unaff_RBX;
  longlong lVar10;
  uint uVar11;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  int unaff_EDI;
  longlong in_R10;
  uint64_t *unaff_R12;
  longlong unaff_R13;
  int *unaff_R14;
  longlong unaff_R15;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar12;
  ulonglong uVar13;
  
code_r0x00018013d378:
  uVar7 = (longlong)(int)param_2 * 0x38 + in_R10;
  do {
    do {
      while( true ) {
        if (uVar7 == 0) {
          uVar7 = FUN_18013c940(*unaff_RBX);
          auVar5 = SEXT816(unaff_R13) *
                   SEXT816((longlong)(uVar7 - *(longlong *)(unaff_R15 + 0x2e30)));
          *(int *)(unaff_RBX + 0x5c) = (int)(auVar5._8_8_ >> 4) - (auVar5._12_4_ >> 0x1f);
        }
        fVar1 = *(float *)(unaff_RBX + 8);
        fVar2 = *(float *)((longlong)unaff_RBX + 0x34);
        *(float *)(uVar7 + 0x10) =
             *(float *)((longlong)unaff_RBX + 0x44) - *(float *)(unaff_RBX + 7);
        *(float *)(uVar7 + 0xc) = fVar1 - fVar2;
        *(uint64_t *)(uVar7 + 0x14) = unaff_RBX[10];
        *(int32_t *)(uVar7 + 0x24) = *(int32_t *)(unaff_RBX + 6);
        uVar12 = *(uint64_t *)((longlong)unaff_RBX + 0x34);
        *(uint64_t *)(uVar7 + 0x1c) = uVar12;
        *(int32_t *)(uVar7 + 0x28) = *(int32_t *)(unaff_RBX + 0x83);
        *(int32_t *)(uVar7 + 0x2c) = *(int32_t *)((longlong)unaff_RBX + 0x14);
        *(int16_t *)(uVar7 + 0x30) = *(int16_t *)(unaff_RBX + 0x86);
        *(int8_t *)(uVar7 + 0x32) = *(int8_t *)((longlong)unaff_RBX + 0xb2);
        do {
          unaff_EDI = unaff_EDI + 1;
          unaff_RSI = unaff_RSI + 8;
          if (unaff_EDI == *(int *)(unaff_R15 + 0x1aa0)) {
            iVar9 = (int)unaff_RBP;
            if (*(ulonglong *)(unaff_R14 + 2) != unaff_RBP) {
              iVar9 = *unaff_R14 + -1;
            }
            FUN_18011da00(uVar12,*(int *)(unaff_R15 + 0x2e28) * 0x60 + iVar9);
            uVar7 = unaff_RBP;
            if (*(int *)(unaff_R15 + 0x2e28) != (int)unaff_RBP) {
              do {
                lVar4 = *(longlong *)(unaff_R15 + 0x2e30);
                lVar10 = *(longlong *)(uVar7 + lVar4);
                lVar8 = strstr(lVar10,&unknown_var_3336_ptr);
                if (lVar8 != 0) {
                  lVar10 = lVar8;
                }
                uVar12 = FUN_180122210(extraout_XMM0_Qa,&unknown_var_3384_ptr,*unaff_R12,lVar10);
                iVar9 = *(int *)(uVar7 + 0x24 + lVar4);
                if ((iVar9 != 0) && (iVar9 != 0x11111111)) {
                  uVar12 = FUN_180122210(uVar12,&unknown_var_3360_ptr,(int)*(float *)(uVar7 + 0x1c + lVar4)
                                         ,(int)*(float *)(uVar7 + 0x20 + lVar4));
                  FUN_180122210(uVar12,&unknown_var_3416_ptr,*(int32_t *)(uVar7 + 0x24 + lVar4));
                }
                fVar1 = *(float *)(uVar7 + 0xc + lVar4);
                if (((fVar1 != 0.0) || (*(float *)(uVar7 + 0x10 + lVar4) != 0.0)) ||
                   (*(int *)(uVar7 + 0x24 + lVar4) == 0x11111111)) {
                  FUN_180122210(fVar1,&unknown_var_3400_ptr,(int)fVar1,
                                (int)*(float *)(uVar7 + 0x10 + lVar4));
                }
                fVar1 = *(float *)(uVar7 + 0x14 + lVar4);
                uVar13 = (ulonglong)(uint)fVar1;
                if ((fVar1 != 0.0) || (*(float *)(uVar7 + 0x18 + lVar4) != 0.0)) {
                  uVar13 = FUN_180122210(uVar13,&unknown_var_3456_ptr,(int)fVar1,
                                         (int)*(float *)(uVar7 + 0x18 + lVar4));
                }
                uVar12 = FUN_180122210(uVar13,&unknown_var_3440_ptr,*(int8_t *)(uVar7 + 0x32 + lVar4));
                iVar9 = *(int *)(uVar7 + 0x28 + lVar4);
                if (iVar9 != 0) {
                  sVar3 = *(short *)(uVar7 + 0x30 + lVar4);
                  if (sVar3 == -1) {
                    uVar12 = FUN_180122210(uVar12,&unknown_var_3496_ptr);
                  }
                  else {
                    uVar12 = FUN_180122210(uVar12,&unknown_var_3472_ptr,iVar9,(int)sVar3);
                  }
                  if (*(int *)(uVar7 + 0x2c + lVar4) != 0) {
                    uVar12 = FUN_180122210(uVar12,&unknown_var_3512_ptr);
                  }
                }
                FUN_180122210(uVar12,&system_ptr_cc18);
                uVar11 = (int)unaff_RBP + 1;
                unaff_RBP = (ulonglong)uVar11;
                uVar7 = uVar7 + 0x38;
              } while (uVar11 != *(uint *)(unaff_R15 + 0x2e28));
            }
            return;
          }
          unaff_RBX = *(uint64_t **)(unaff_RSI + *(longlong *)(unaff_R15 + 0x1aa8));
        } while ((*(uint *)((longlong)unaff_RBX + 0xc) & 0x100) != 0);
        if (*(int *)(unaff_RBX + 0x5c) == -1) break;
        uVar7 = (longlong)*(int *)(unaff_RBX + 0x5c) * 0x38 + *(longlong *)(unaff_R15 + 0x2e30);
      }
      param_2 = unaff_RBP & 0xffffffff;
      uVar7 = unaff_RBP;
    } while (*(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28) == 0);
    in_R10 = *(longlong *)(SYSTEM_DATA_MANAGER_A + 0x2e30);
    piVar6 = (int *)(in_R10 + 8);
    uVar13 = unaff_RBP;
    do {
      if (*piVar6 == *(int *)(unaff_RBX + 1)) goto code_r0x00018013d378;
      param_2 = (ulonglong)((int)param_2 + 1);
      uVar13 = uVar13 + 1;
      piVar6 = piVar6 + 0xe;
    } while (uVar13 != (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28));
  } while( true );
}





// 函数: void FUN_18013d387(int32_t param_1)
void FUN_18013d387(int32_t param_1)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong unaff_RBP;
  ulonglong uVar7;
  uint64_t *unaff_R12;
  longlong unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t uVar8;
  float fVar9;
  
  FUN_18011da00(param_1,*(int *)(unaff_R15 + 0x2e28) * 0x60 + (int)unaff_RBP);
  uVar7 = unaff_RBP;
  if (*(int *)(unaff_R15 + 0x2e28) != (int)unaff_RBP) {
    do {
      lVar3 = *(longlong *)(unaff_R15 + 0x2e30);
      lVar5 = *(longlong *)(uVar7 + lVar3);
      lVar4 = strstr(lVar5,&unknown_var_3336_ptr);
      if (lVar4 != 0) {
        lVar5 = lVar4;
      }
      uVar8 = FUN_180122210(extraout_XMM0_Da,&unknown_var_3384_ptr,*unaff_R12,lVar5);
      iVar2 = *(int *)(uVar7 + 0x24 + lVar3);
      if ((iVar2 != 0) && (iVar2 != 0x11111111)) {
        uVar8 = FUN_180122210(uVar8,&unknown_var_3360_ptr,(int)*(float *)(uVar7 + 0x1c + lVar3),
                              (int)*(float *)(uVar7 + 0x20 + lVar3));
        FUN_180122210(uVar8,&unknown_var_3416_ptr,*(int32_t *)(uVar7 + 0x24 + lVar3));
      }
      fVar9 = *(float *)(uVar7 + 0xc + lVar3);
      if (((fVar9 != 0.0) || (*(float *)(uVar7 + 0x10 + lVar3) != 0.0)) ||
         (*(int *)(uVar7 + 0x24 + lVar3) == 0x11111111)) {
        FUN_180122210(fVar9,&unknown_var_3400_ptr,(int)fVar9,(int)*(float *)(uVar7 + 0x10 + lVar3));
      }
      fVar9 = *(float *)(uVar7 + 0x14 + lVar3);
      if ((fVar9 != 0.0) || (*(float *)(uVar7 + 0x18 + lVar3) != 0.0)) {
        fVar9 = (float)FUN_180122210(fVar9,&unknown_var_3456_ptr,(int)fVar9,
                                     (int)*(float *)(uVar7 + 0x18 + lVar3));
      }
      uVar8 = FUN_180122210(fVar9,&unknown_var_3440_ptr,*(int8_t *)(uVar7 + 0x32 + lVar3));
      iVar2 = *(int *)(uVar7 + 0x28 + lVar3);
      if (iVar2 != 0) {
        sVar1 = *(short *)(uVar7 + 0x30 + lVar3);
        if (sVar1 == -1) {
          uVar8 = FUN_180122210(uVar8,&unknown_var_3496_ptr);
        }
        else {
          uVar8 = FUN_180122210(uVar8,&unknown_var_3472_ptr,iVar2,(int)sVar1);
        }
        if (*(int *)(uVar7 + 0x2c + lVar3) != 0) {
          uVar8 = FUN_180122210(uVar8,&unknown_var_3512_ptr);
        }
      }
      FUN_180122210(uVar8,&system_ptr_cc18);
      uVar6 = (int)unaff_RBP + 1;
      unaff_RBP = (ulonglong)uVar6;
      uVar7 = uVar7 + 0x38;
    } while (uVar6 != *(uint *)(unaff_R15 + 0x2e28));
  }
  return;
}





// 函数: void FUN_18013d3ad(void)
void FUN_18013d3ad(void)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong unaff_RBP;
  ulonglong uVar7;
  uint64_t *unaff_R12;
  longlong unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t uVar8;
  float fVar9;
  
  uVar7 = unaff_RBP;
  do {
    lVar3 = *(longlong *)(unaff_R15 + 0x2e30);
    lVar5 = *(longlong *)(uVar7 + lVar3);
    lVar4 = strstr(lVar5,&unknown_var_3336_ptr);
    if (lVar4 != 0) {
      lVar5 = lVar4;
    }
    uVar8 = FUN_180122210(extraout_XMM0_Da,&unknown_var_3384_ptr,*unaff_R12,lVar5);
    iVar2 = *(int *)(uVar7 + 0x24 + lVar3);
    if ((iVar2 != 0) && (iVar2 != 0x11111111)) {
      uVar8 = FUN_180122210(uVar8,&unknown_var_3360_ptr,(int)*(float *)(uVar7 + 0x1c + lVar3),
                            (int)*(float *)(uVar7 + 0x20 + lVar3));
      FUN_180122210(uVar8,&unknown_var_3416_ptr,*(int32_t *)(uVar7 + 0x24 + lVar3));
    }
    fVar9 = *(float *)(uVar7 + 0xc + lVar3);
    if (((fVar9 != 0.0) || (*(float *)(uVar7 + 0x10 + lVar3) != 0.0)) ||
       (*(int *)(uVar7 + 0x24 + lVar3) == 0x11111111)) {
      FUN_180122210(fVar9,&unknown_var_3400_ptr,(int)fVar9,(int)*(float *)(uVar7 + 0x10 + lVar3));
    }
    fVar9 = *(float *)(uVar7 + 0x14 + lVar3);
    if ((fVar9 != 0.0) || (*(float *)(uVar7 + 0x18 + lVar3) != 0.0)) {
      fVar9 = (float)FUN_180122210(fVar9,&unknown_var_3456_ptr,(int)fVar9,
                                   (int)*(float *)(uVar7 + 0x18 + lVar3));
    }
    uVar8 = FUN_180122210(fVar9,&unknown_var_3440_ptr,*(int8_t *)(uVar7 + 0x32 + lVar3));
    iVar2 = *(int *)(uVar7 + 0x28 + lVar3);
    if (iVar2 != 0) {
      sVar1 = *(short *)(uVar7 + 0x30 + lVar3);
      if (sVar1 == -1) {
        uVar8 = FUN_180122210(uVar8,&unknown_var_3496_ptr);
      }
      else {
        uVar8 = FUN_180122210(uVar8,&unknown_var_3472_ptr,iVar2,(int)sVar1);
      }
      if (*(int *)(uVar7 + 0x2c + lVar3) != 0) {
        uVar8 = FUN_180122210(uVar8,&unknown_var_3512_ptr);
      }
    }
    FUN_180122210(uVar8,&system_ptr_cc18);
    uVar6 = (int)unaff_RBP + 1;
    unaff_RBP = (ulonglong)uVar6;
    uVar7 = uVar7 + 0x38;
  } while (uVar6 != *(uint *)(unaff_R15 + 0x2e28));
  return;
}





// 函数: void FUN_18013d527(void)
void FUN_18013d527(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18013d540(void)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ushort *puVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
               0x48) < _DAT_180d49270) && (FUN_1808fcb90(&system_ptr_9270), _DAT_180d49270 == -1)) {
    _DAT_180d49278 = 0;
    _DAT_180d49280 = 0;
    FUN_1808fc820(&unknown_var_7056_ptr);
    FUN_1808fcb30(&system_ptr_9270);
  }
  lVar6 = _DAT_180d49280;
  if (_DAT_180d49280 == 0) {
    iVar3 = OpenClipboard(0);
    if (iVar3 != 0) {
      lVar6 = GetClipboardData(0xd);
      if (lVar6 != 0) {
        puVar7 = (ushort *)GlobalLock(lVar6);
        if (puVar7 != (ushort *)0x0) {
          uVar2 = *puVar7;
          puVar1 = puVar7;
          iVar3 = 0;
          while (uVar2 != 0) {
            puVar1 = puVar1 + 1;
            if (uVar2 < 0x80) {
              iVar4 = 1;
            }
            else if (uVar2 < 0x800) {
              iVar4 = 2;
            }
            else {
              iVar4 = 0;
              if (0x3ff < (ushort)(uVar2 + 0x2400)) {
                iVar4 = ((ushort)(uVar2 + 0x2800) < 0x400) + 3;
              }
            }
            iVar3 = iVar3 + iVar4;
            uVar2 = *puVar1;
          }
          uVar9 = iVar3 + 1;
          if (_DAT_180d4927c < (int)uVar9) {
            if (_DAT_180d4927c == 0) {
              uVar5 = 8;
            }
            else {
              uVar5 = _DAT_180d4927c / 2 + _DAT_180d4927c;
            }
            uVar10 = uVar9;
            if ((int)uVar9 < (int)uVar5) {
              uVar10 = uVar5;
            }
            if (_DAT_180d4927c < (int)uVar10) {
              if (SYSTEM_DATA_MANAGER_A != 0) {
                *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
              }
              lVar8 = func_0x000180120ce0((longlong)(int)uVar10,SYSTEM_DATA_MANAGER_B);
              if (_DAT_180d49280 != 0) {
                    // WARNING: Subroutine does not return
                memcpy(lVar8,_DAT_180d49280,(longlong)_DAT_180d49278);
              }
              _DAT_180d49278 = (ulonglong)uVar10 << 0x20;
              _DAT_180d49280 = lVar8;
            }
          }
          _DAT_180d49278 = CONCAT44(_DAT_180d4927c,uVar9);
          FUN_180121c40(_DAT_180d49280,uVar9,puVar7,0);
        }
        GlobalUnlock(lVar6);
        CloseClipboard();
        return _DAT_180d49280;
      }
      CloseClipboard();
    }
    return 0;
  }
  _DAT_180d49278 = 0;
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0(lVar6,SYSTEM_DATA_MANAGER_B);
}





// 函数: void FUN_18013d7b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18013d7b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = OpenClipboard(0);
  if (iVar3 != 0) {
    iVar3 = FUN_1801219c0(param_2,0);
    lVar4 = GlobalAlloc(2,(longlong)(iVar3 + 1) * 2);
    if (lVar4 != 0) {
      uVar1 = GlobalLock(lVar4);
      FUN_180121740(uVar1,iVar3 + 1,param_2,param_4,0);
      GlobalUnlock(lVar4);
      EmptyClipboard();
      lVar2 = SetClipboardData(0xd,lVar4);
      if (lVar2 == 0) {
        GlobalFree(lVar4);
      }
    }
    CloseClipboard();
  }
  return;
}





// 函数: void FUN_18013d7c9(void)
void FUN_18013d7c9(void)

{
  int iVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong lVar4;
  
  iVar1 = FUN_1801219c0();
  lVar2 = GlobalAlloc(2,(longlong)(iVar1 + 1) * 2);
  if (lVar2 != 0) {
    uVar3 = GlobalLock(lVar2);
    FUN_180121740(uVar3,iVar1 + 1);
    GlobalUnlock(lVar2);
    EmptyClipboard();
    lVar4 = SetClipboardData(0xd,lVar2);
    if (lVar4 == 0) {
      GlobalFree(lVar2);
    }
  }
  CloseClipboard();
  return;
}





// 函数: void FUN_18013d853(void)
void FUN_18013d853(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013d860(int *param_1,uint64_t *param_2)
void FUN_18013d860(int *param_1,uint64_t *param_2)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  if (*param_1 == iVar1) {
    iVar4 = *param_1 + 1;
    if (iVar1 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar1 / 2 + iVar1;
    }
    if (iVar4 < iVar2) {
      iVar4 = iVar2;
    }
    if (iVar1 < iVar4) {
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
      }
      uVar3 = func_0x000180120ce0((longlong)iVar4 << 3,SYSTEM_DATA_MANAGER_B);
      if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(uVar3,*(longlong *)(param_1 + 2),(longlong)*param_1 << 3);
      }
      *(uint64_t *)(param_1 + 2) = uVar3;
      param_1[1] = iVar4;
    }
  }
  *(uint64_t *)(*(longlong *)(param_1 + 2) + (longlong)*param_1 * 8) = *param_2;
  *param_1 = *param_1 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013d8a9(void)
void FUN_18013d8a9(void)

{
  longlong in_RAX;
  uint64_t uVar1;
  int *unaff_RBX;
  int unaff_EDI;
  uint64_t *unaff_R14;
  
  if (in_RAX != 0) {
    *(int *)(in_RAX + 0x3a8) = *(int *)(in_RAX + 0x3a8) + 1;
  }
  uVar1 = func_0x000180120ce0((longlong)unaff_EDI << 3,SYSTEM_DATA_MANAGER_B);
  if (*(longlong *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(longlong *)(unaff_RBX + 2),(longlong)*unaff_RBX << 3);
  }
  *(uint64_t *)(unaff_RBX + 2) = uVar1;
  unaff_RBX[1] = unaff_EDI;
  *(uint64_t *)(*(longlong *)(unaff_RBX + 2) + (longlong)*unaff_RBX * 8) = *unaff_R14;
  *unaff_RBX = *unaff_RBX + 1;
  return;
}





// 函数: void FUN_18013d91a(void)
void FUN_18013d91a(void)

{
  int *unaff_RBX;
  uint64_t *unaff_R14;
  
  *(uint64_t *)(*(longlong *)(unaff_RBX + 2) + (longlong)*unaff_RBX * 8) = *unaff_R14;
  *unaff_RBX = *unaff_RBX + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013d950(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18013d950(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    param_1[2] = 0;
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B,param_3,param_4,0xfffffffffffffffe);
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    *param_1 = 0;
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B,param_3,param_4,0xfffffffffffffffe);
  }
  *(int32_t *)(param_1 + 4) = 0;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B,param_3,param_4,0xfffffffffffffffe);
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B,param_3,param_4,0xfffffffffffffffe);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013da40(int *param_1,int param_2)
void FUN_18013da40(int *param_1,int param_2)

{
  uint64_t uVar1;
  
  if (param_1[1] < param_2) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    uVar1 = func_0x000180120ce0((longlong)param_2 << 5,SYSTEM_DATA_MANAGER_B);
    if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(uVar1,*(longlong *)(param_1 + 2),(longlong)*param_1 << 5);
    }
    *(uint64_t *)(param_1 + 2) = uVar1;
    param_1[1] = param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013da5c(void)
void FUN_18013da5c(void)

{
  longlong in_RAX;
  uint64_t uVar1;
  int *unaff_RBX;
  longlong unaff_RDI;
  
  if (in_RAX != 0) {
    *(int *)(in_RAX + 0x3a8) = *(int *)(in_RAX + 0x3a8) + 1;
  }
  uVar1 = func_0x000180120ce0(unaff_RDI << 5,SYSTEM_DATA_MANAGER_B);
  if (*(longlong *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(longlong *)(unaff_RBX + 2),(longlong)*unaff_RBX << 5);
  }
  *(uint64_t *)(unaff_RBX + 2) = uVar1;
  unaff_RBX[1] = (int)unaff_RDI;
  return;
}





// 函数: void FUN_18013dacd(void)
void FUN_18013dacd(void)

{
  return;
}





// 函数: void FUN_18013dae0(int32_t *param_1)
void FUN_18013dae0(int32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (iVar2 < 1) {
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    iVar1 = 1;
    if (1 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_18011dbd0(param_1,iVar1);
    *param_1 = 1;
    return;
  }
  *param_1 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013db40(int *param_1,int param_2)
void FUN_18013db40(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  if (param_2 <= iVar1) {
    *param_1 = param_2;
    return;
  }
  if (iVar1 == 0) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1 / 2 + iVar1;
  }
  iVar4 = param_2;
  if (param_2 < iVar2) {
    iVar4 = iVar2;
  }
  if (iVar1 < iVar4) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    uVar3 = func_0x000180120ce0((longlong)iVar4 * 0x30,SYSTEM_DATA_MANAGER_B);
    if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(uVar3,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x30);
    }
    *(uint64_t *)(param_1 + 2) = uVar3;
    param_1[1] = iVar4;
    *param_1 = param_2;
    return;
  }
  *param_1 = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013db5a(int param_1)
void FUN_18013db5a(int param_1)

{
  int iVar1;
  uint64_t uVar2;
  int *unaff_RBX;
  int iVar3;
  int unaff_EDI;
  
  if (param_1 == 0) {
    iVar1 = 8;
  }
  else {
    iVar1 = param_1 / 2 + param_1;
  }
  iVar3 = unaff_EDI;
  if (unaff_EDI < iVar1) {
    iVar3 = iVar1;
  }
  if (param_1 < iVar3) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    uVar2 = func_0x000180120ce0((longlong)iVar3 * 0x30,SYSTEM_DATA_MANAGER_B);
    if (*(longlong *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(uVar2,*(longlong *)(unaff_RBX + 2),(longlong)*unaff_RBX * 0x30);
    }
    *(uint64_t *)(unaff_RBX + 2) = uVar2;
    unaff_RBX[1] = iVar3;
    *unaff_RBX = unaff_EDI;
    return;
  }
  *unaff_RBX = unaff_EDI;
  return;
}





// 函数: void FUN_18013dc14(void)
void FUN_18013dc14(void)

{
  int32_t *unaff_RBX;
  int32_t unaff_EDI;
  
  *unaff_RBX = unaff_EDI;
  return;
}





// 函数: void FUN_18013dc26(void)
void FUN_18013dc26(void)

{
  int32_t *unaff_RBX;
  int32_t unaff_EDI;
  
  *unaff_RBX = unaff_EDI;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013dc40(int *param_1,uint64_t *param_2)
void FUN_18013dc40(int *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint64_t uVar5;
  longlong lVar6;
  int iVar7;
  
  iVar2 = param_1[1];
  if (*param_1 == iVar2) {
    iVar7 = *param_1 + 1;
    if (iVar2 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar2 / 2 + iVar2;
    }
    if (iVar7 < iVar4) {
      iVar7 = iVar4;
    }
    if (iVar2 < iVar7) {
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
      }
      uVar5 = func_0x000180120ce0((longlong)iVar7 * 0x30,SYSTEM_DATA_MANAGER_B);
      if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(uVar5,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x30);
      }
      *(uint64_t *)(param_1 + 2) = uVar5;
      param_1[1] = iVar7;
    }
  }
  lVar6 = (longlong)*param_1;
  uVar5 = param_2[1];
  lVar3 = *(longlong *)(param_1 + 2);
  puVar1 = (uint64_t *)(lVar3 + lVar6 * 0x30);
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  uVar5 = param_2[3];
  puVar1 = (uint64_t *)(lVar3 + 0x10 + lVar6 * 0x30);
  *puVar1 = param_2[2];
  puVar1[1] = uVar5;
  uVar5 = param_2[5];
  puVar1 = (uint64_t *)(lVar3 + 0x20 + lVar6 * 0x30);
  *puVar1 = param_2[4];
  puVar1[1] = uVar5;
  *param_1 = *param_1 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013dc8c(void)
void FUN_18013dc8c(void)

{
  uint64_t *puVar1;
  longlong lVar2;
  longlong in_RAX;
  uint64_t uVar3;
  longlong lVar4;
  int *unaff_RBX;
  uint64_t *unaff_RSI;
  int unaff_EDI;
  
  if (in_RAX != 0) {
    *(int *)(in_RAX + 0x3a8) = *(int *)(in_RAX + 0x3a8) + 1;
  }
  uVar3 = func_0x000180120ce0((longlong)unaff_EDI * 0x30,SYSTEM_DATA_MANAGER_B);
  if (*(longlong *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar3,*(longlong *)(unaff_RBX + 2),(longlong)*unaff_RBX * 0x30);
  }
  *(uint64_t *)(unaff_RBX + 2) = uVar3;
  unaff_RBX[1] = unaff_EDI;
  lVar4 = (longlong)*unaff_RBX;
  uVar3 = unaff_RSI[1];
  lVar2 = *(longlong *)(unaff_RBX + 2);
  puVar1 = (uint64_t *)(lVar2 + lVar4 * 0x30);
  *puVar1 = *unaff_RSI;
  puVar1[1] = uVar3;
  uVar3 = unaff_RSI[3];
  puVar1 = (uint64_t *)(lVar2 + 0x10 + lVar4 * 0x30);
  *puVar1 = unaff_RSI[2];
  puVar1[1] = uVar3;
  uVar3 = unaff_RSI[5];
  puVar1 = (uint64_t *)(lVar2 + 0x20 + lVar4 * 0x30);
  *puVar1 = unaff_RSI[4];
  puVar1[1] = uVar3;
  *unaff_RBX = *unaff_RBX + 1;
  return;
}





// 函数: void FUN_18013dd05(void)
void FUN_18013dd05(void)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong lVar4;
  int *unaff_RBX;
  uint64_t *unaff_RSI;
  
  lVar4 = (longlong)*unaff_RBX;
  uVar3 = unaff_RSI[1];
  lVar2 = *(longlong *)(unaff_RBX + 2);
  puVar1 = (uint64_t *)(lVar2 + lVar4 * 0x30);
  *puVar1 = *unaff_RSI;
  puVar1[1] = uVar3;
  uVar3 = unaff_RSI[3];
  puVar1 = (uint64_t *)(lVar2 + 0x10 + lVar4 * 0x30);
  *puVar1 = unaff_RSI[2];
  puVar1[1] = uVar3;
  uVar3 = unaff_RSI[5];
  puVar1 = (uint64_t *)(lVar2 + 0x20 + lVar4 * 0x30);
  *puVar1 = unaff_RSI[4];
  puVar1[1] = uVar3;
  *unaff_RBX = *unaff_RBX + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013dd40(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18013dd40(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  piVar1 = (int *)(param_1 + 2);
  uVar6 = uVar4;
  if (0 < *piVar1) {
    do {
      iVar2 = *(int *)(param_1[3] + 8 + uVar4);
      if ((iVar2 != -1) &&
         (lVar3 = *(longlong *)((longlong)iVar2 * 0x60 + param_1[1] + 8), lVar3 != 0)) {
        if (SYSTEM_DATA_MANAGER_A != 0) {
          *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
        }
                    // WARNING: Subroutine does not return
        FUN_180059ba0(lVar3,SYSTEM_DATA_MANAGER_B,param_3,param_4,0xfffffffffffffffe);
      }
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 0x10;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < *piVar1);
  }
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    piVar1[0] = 0;
    piVar1[1] = 0;
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar3,SYSTEM_DATA_MANAGER_B,param_3,param_4,0xfffffffffffffffe);
  }
  lVar3 = param_1[1];
  if (lVar3 == 0) {
    *(int32_t *)(param_1 + 4) = 0;
    lVar3 = param_1[3];
    if (lVar3 != 0) {
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar3,SYSTEM_DATA_MANAGER_B,param_3,param_4,0xfffffffffffffffe);
    }
    lVar3 = param_1[1];
    if (lVar3 == 0) {
      return;
    }
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar3,SYSTEM_DATA_MANAGER_B,param_3,param_4,0xfffffffffffffffe);
  }
  *param_1 = 0;
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0(lVar3,SYSTEM_DATA_MANAGER_B,param_3,param_4,0xfffffffffffffffe);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013de90(int *param_1,int param_2)
void FUN_18013de90(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  if (param_2 <= iVar1) {
    *param_1 = param_2;
    return;
  }
  if (iVar1 == 0) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1 / 2 + iVar1;
  }
  iVar4 = param_2;
  if (param_2 < iVar2) {
    iVar4 = iVar2;
  }
  if (iVar1 < iVar4) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    uVar3 = func_0x000180120ce0((longlong)iVar4,SYSTEM_DATA_MANAGER_B);
    if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(uVar3,*(longlong *)(param_1 + 2),(longlong)*param_1);
    }
    *(uint64_t *)(param_1 + 2) = uVar3;
    param_1[1] = iVar4;
    *param_1 = param_2;
    return;
  }
  *param_1 = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013deaa(int param_1)
void FUN_18013deaa(int param_1)

{
  int iVar1;
  uint64_t uVar2;
  int *unaff_RBX;
  int iVar3;
  int unaff_EDI;
  
  if (param_1 == 0) {
    iVar1 = 8;
  }
  else {
    iVar1 = param_1 / 2 + param_1;
  }
  iVar3 = unaff_EDI;
  if (unaff_EDI < iVar1) {
    iVar3 = iVar1;
  }
  if (param_1 < iVar3) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    uVar2 = func_0x000180120ce0((longlong)iVar3,SYSTEM_DATA_MANAGER_B);
    if (*(longlong *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(uVar2,*(longlong *)(unaff_RBX + 2),(longlong)*unaff_RBX);
    }
    *(uint64_t *)(unaff_RBX + 2) = uVar2;
    unaff_RBX[1] = iVar3;
    *unaff_RBX = unaff_EDI;
    return;
  }
  *unaff_RBX = unaff_EDI;
  return;
}





// 函数: void FUN_18013df54(void)
void FUN_18013df54(void)

{
  int32_t *unaff_RBX;
  int32_t unaff_EDI;
  
  *unaff_RBX = unaff_EDI;
  return;
}





// 函数: void FUN_18013df66(void)
void FUN_18013df66(void)

{
  int32_t *unaff_RBX;
  int32_t unaff_EDI;
  
  *unaff_RBX = unaff_EDI;
  return;
}





