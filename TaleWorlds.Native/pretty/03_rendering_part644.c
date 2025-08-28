#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part644.c - 9 个函数

// 函数: void FUN_18062c8f0(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_18062c8f0(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *puStack_70;
  int8_t *puStack_68;
  int iStack_60;
  ulonglong uStack_58;
  uint64_t *puStack_50;
  uint64_t *puStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  
  puStack_50 = (uint64_t *)0x0;
  puStack_48 = (uint64_t *)0x0;
  uVar5 = 0;
  uStack_40 = 0;
  uStack_38 = 3;
  FUN_18062c5f0(0,&puStack_50,param_3,param_4,0xfffffffffffffffe);
  puVar3 = puStack_50;
  uVar6 = (longlong)puStack_48 - (longlong)puStack_50 >> 5;
  puVar2 = puVar3;
  puVar1 = puStack_48;
  if (uVar6 != 0) {
    do {
      puStack_70 = &unknown_var_3456_ptr;
      uStack_58 = 0;
      puStack_68 = (int8_t *)0x0;
      iStack_60 = 0;
      FUN_1806277c0(&puStack_70,*(int32_t *)(puVar3 + uVar5 * 4 + 2));
      if (*(int *)(puVar3 + uVar5 * 4 + 2) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_68,puVar3[uVar5 * 4 + 1],*(int *)(puVar3 + uVar5 * 4 + 2) + 1);
      }
      if (puVar3[uVar5 * 4 + 1] != 0) {
        iStack_60 = 0;
        if (puStack_68 != (int8_t *)0x0) {
          *puStack_68 = 0;
        }
        uStack_58 = uStack_58 & 0xffffffff;
      }
      puVar1 = *(uint64_t **)(param_2 + 8);
      if (puVar1 < *(uint64_t **)(param_2 + 0x10)) {
        *(uint64_t **)(param_2 + 8) = puVar1 + 4;
        *puVar1 = &unknown_var_720_ptr;
        puVar1[1] = 0;
        *(int32_t *)(puVar1 + 2) = 0;
        *puVar1 = &unknown_var_3456_ptr;
        puVar1[3] = 0;
        puVar1[1] = 0;
        *(int32_t *)(puVar1 + 2) = 0;
        FUN_1806277c0(puVar1,iStack_60);
        if (iStack_60 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(puVar1[1],puStack_68,iStack_60 + 1);
        }
        if (puStack_68 != (int8_t *)0x0) {
          *(int32_t *)(puVar1 + 2) = 0;
          if ((int8_t *)puVar1[1] != (int8_t *)0x0) {
            *(int8_t *)puVar1[1] = 0;
          }
          *(int32_t *)((longlong)puVar1 + 0x1c) = 0;
        }
      }
      else {
        FUN_180059820(param_2,&puStack_70);
      }
      puStack_70 = &unknown_var_3456_ptr;
      if (puStack_68 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_68 = (int8_t *)0x0;
      uStack_58 = uStack_58 & 0xffffffff00000000;
      puStack_70 = &unknown_var_720_ptr;
      uVar5 = (ulonglong)((int)uVar5 + 1);
      puVar1 = puStack_48;
    } while (uVar5 < uVar6);
  }
  for (; puVar4 = puStack_48, puVar2 != puStack_48; puVar2 = puVar2 + 4) {
    puStack_48 = puVar1;
    (**(code **)*puVar2)(puVar2,0);
    puVar1 = puStack_48;
    puStack_48 = puVar4;
  }
  if (puVar3 == (uint64_t *)0x0) {
    return;
  }
  puStack_48 = puVar1;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062cb00(uint64_t param_1,longlong param_2,uint64_t param_3)
void FUN_18062cb00(uint64_t param_1,longlong param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  void *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int8_t auStack_f8 [32];
  void *puStack_d8;
  int8_t *puStack_d0;
  int iStack_c8;
  ulonglong uStack_c0;
  void *puStack_b8;
  int8_t *puStack_b0;
  int32_t uStack_a8;
  ulonglong uStack_a0;
  uint64_t uStack_98;
  uint64_t *puStack_90;
  uint64_t *puStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  uint64_t uStack_70;
  void *apuStack_68 [5];
  ulonglong uStack_40;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_40 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_f8;
  puStack_90 = (uint64_t *)0x0;
  puStack_88 = (uint64_t *)0x0;
  uVar10 = 0;
  uStack_80 = 0;
  uStack_78 = 3;
  uStack_98 = param_3;
  FUN_18062d0d0(0,&puStack_90);
  puVar4 = puStack_90;
  uVar3 = uStack_98;
  uVar11 = (longlong)puStack_88 - (longlong)puStack_90 >> 5;
  puVar1 = puVar4;
  puVar2 = puStack_88;
  if (uVar11 != 0) {
    do {
      puVar2 = puVar4 + uVar10 * 4;
      puStack_b8 = &unknown_var_3456_ptr;
      uStack_a0 = 0;
      puStack_b0 = (int8_t *)0x0;
      uStack_a8 = 0;
      FUN_1806277c0(&puStack_b8,*(int32_t *)(puVar2 + 2));
      if (*(int *)(puVar2 + 2) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_b0,puVar2[1],*(int *)(puVar2 + 2) + 1);
      }
      if (puVar2[1] != 0) {
        uStack_a8 = 0;
        if (puStack_b0 != (int8_t *)0x0) {
          *puStack_b0 = 0;
        }
        uStack_a0 = uStack_a0 & 0xffffffff;
      }
      lVar7 = FUN_180627490(apuStack_68,puVar2);
      puStack_d8 = &unknown_var_3456_ptr;
      uStack_c0 = 0;
      puStack_d0 = (int8_t *)0x0;
      iStack_c8 = 0;
      FUN_1806277c0(&puStack_d8,*(int32_t *)(lVar7 + 0x10));
      if (0 < *(int *)(lVar7 + 0x10)) {
        puVar9 = &system_buffer_ptr;
        if (*(void **)(lVar7 + 8) != (void *)0x0) {
          puVar9 = *(void **)(lVar7 + 8);
        }
                    // WARNING: Subroutine does not return
        memcpy(puStack_d0,puVar9,(longlong)(*(int *)(lVar7 + 0x10) + 1));
      }
      if ((*(longlong *)(lVar7 + 8) != 0) && (iStack_c8 = 0, puStack_d0 != (int8_t *)0x0)) {
        *puStack_d0 = 0;
      }
      apuStack_68[0] = &unknown_var_720_ptr;
      lVar7 = func_0x0001800464d0(uVar3);
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (*(char *)(lVar7 + lVar8) != '\0');
      iVar6 = (int)lVar8;
      if (iStack_c8 == iVar6) {
        if (iStack_c8 != 0) {
          iVar6 = _stricmp(puStack_d0,lVar7);
        }
LAB_18062ccd5:
        if (iVar6 == 0) {
          if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
            *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) + 0x20;
            FUN_180627ae0();
          }
          else {
            FUN_180059820(param_2,puVar2);
          }
        }
      }
      else if (iStack_c8 == 0) goto LAB_18062ccd5;
      puStack_d8 = &unknown_var_3456_ptr;
      if (puStack_d0 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_d0 = (int8_t *)0x0;
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
      puStack_d8 = &unknown_var_720_ptr;
      puStack_b8 = &unknown_var_3456_ptr;
      if (puStack_b0 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_b0 = (int8_t *)0x0;
      uStack_a0 = uStack_a0 & 0xffffffff00000000;
      puStack_b8 = &unknown_var_720_ptr;
      uVar10 = (ulonglong)((int)uVar10 + 1);
      puVar2 = puStack_88;
    } while (uVar10 < uVar11);
  }
  for (; puVar5 = puStack_88, puVar1 != puStack_88; puVar1 = puVar1 + 4) {
    puStack_88 = puVar2;
    (**(code **)*puVar1)(puVar1,0);
    puVar2 = puStack_88;
    puStack_88 = puVar5;
  }
  if (puVar4 != (uint64_t *)0x0) {
    puStack_88 = puVar2;
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar4);
  }
  puStack_88 = puVar2;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062cdc0(uint64_t param_1,longlong param_2,uint64_t param_3)
void FUN_18062cdc0(uint64_t param_1,longlong param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  void *puVar7;
  uint64_t *puVar8;
  ulonglong uVar9;
  int8_t auStack_118 [32];
  void *puStack_f8;
  int8_t *puStack_f0;
  int iStack_e8;
  ulonglong uStack_e0;
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  ulonglong uStack_c0;
  uint64_t *puStack_b8;
  uint64_t *puStack_b0;
  uint64_t uStack_a8;
  int32_t uStack_a0;
  uint64_t *puStack_98;
  uint64_t *puStack_90;
  uint64_t uStack_88;
  int32_t uStack_80;
  uint64_t uStack_78;
  void *apuStack_70 [5];
  ulonglong uStack_48;
  
  uStack_78 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_118;
  puStack_b8 = (uint64_t *)0x0;
  puStack_b0 = (uint64_t *)0x0;
  uVar9 = 0;
  uStack_a8 = 0;
  uStack_a0 = 3;
  puStack_98 = (uint64_t *)0x0;
  puStack_90 = (uint64_t *)0x0;
  uStack_88 = 0;
  uStack_80 = 3;
  FUN_18062d3b0(0,&puStack_b8,&puStack_98);
  puVar1 = puStack_b0;
  puVar8 = puStack_98;
  puVar2 = puStack_90;
  if ((longlong)puStack_b0 - (longlong)puStack_b8 >> 5 != 0) {
    do {
      puVar1 = puStack_b8;
      puStack_d8 = &unknown_var_3456_ptr;
      uStack_c0 = 0;
      puStack_d0 = (int8_t *)0x0;
      uStack_c8 = 0;
      FUN_1806277c0(&puStack_d8,*(int32_t *)(puStack_b8 + uVar9 * 4 + 2));
      if (*(int *)(puVar1 + uVar9 * 4 + 2) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_d0,puVar1[uVar9 * 4 + 1],*(int *)(puVar1 + uVar9 * 4 + 2) + 1);
      }
      if (puVar1[uVar9 * 4 + 1] != 0) {
        uStack_c8 = 0;
        if (puStack_d0 != (int8_t *)0x0) {
          *puStack_d0 = 0;
        }
        uStack_c0 = uStack_c0 & 0xffffffff;
      }
      lVar5 = FUN_180627490(apuStack_70,puStack_b8 + uVar9 * 4);
      puStack_f8 = &unknown_var_3456_ptr;
      uStack_e0 = 0;
      puStack_f0 = (int8_t *)0x0;
      iStack_e8 = 0;
      FUN_1806277c0(&puStack_f8,*(int32_t *)(lVar5 + 0x10));
      if (0 < *(int *)(lVar5 + 0x10)) {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(lVar5 + 8) != (void *)0x0) {
          puVar7 = *(void **)(lVar5 + 8);
        }
                    // WARNING: Subroutine does not return
        memcpy(puStack_f0,puVar7,(longlong)(*(int *)(lVar5 + 0x10) + 1));
      }
      if ((*(longlong *)(lVar5 + 8) != 0) && (iStack_e8 = 0, puStack_f0 != (int8_t *)0x0)) {
        *puStack_f0 = 0;
      }
      apuStack_70[0] = &unknown_var_720_ptr;
      lVar5 = func_0x0001800464d0(param_3);
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (*(char *)(lVar5 + lVar6) != '\0');
      iVar4 = (int)lVar6;
      if (iStack_e8 == iVar4) {
        if (iStack_e8 != 0) {
          iVar4 = _stricmp(puStack_f0,lVar5);
        }
LAB_18062cfad:
        if (iVar4 == 0) {
          if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
            *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) + 0x20;
            FUN_180627ae0();
          }
          else {
            FUN_180059820(param_2,puStack_b8 + uVar9 * 4);
          }
        }
      }
      else if (iStack_e8 == 0) goto LAB_18062cfad;
      puStack_f8 = &unknown_var_3456_ptr;
      if (puStack_f0 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_f0 = (int8_t *)0x0;
      uStack_e0 = uStack_e0 & 0xffffffff00000000;
      puStack_f8 = &unknown_var_720_ptr;
      puStack_d8 = &unknown_var_3456_ptr;
      if (puStack_d0 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_d0 = (int8_t *)0x0;
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
      puStack_d8 = &unknown_var_720_ptr;
      uVar9 = (ulonglong)((int)uVar9 + 1);
      puVar1 = puStack_b0;
      puVar8 = puStack_98;
      puVar2 = puStack_90;
    } while (uVar9 < (ulonglong)((longlong)puStack_b0 - (longlong)puStack_b8 >> 5));
  }
  for (; puVar3 = puStack_90, puStack_b0 = puVar1, puVar8 != puStack_90; puVar8 = puVar8 + 4) {
    puStack_90 = puVar2;
    (**(code **)*puVar8)(puVar8,0);
    puVar1 = puStack_b0;
    puVar2 = puStack_90;
    puStack_90 = puVar3;
  }
  if (puStack_98 != (uint64_t *)0x0) {
    puStack_90 = puVar2;
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_98 = (uint64_t *)0x0;
  puStack_90 = puVar2;
  for (puVar8 = puStack_b8; puVar8 != puVar1; puVar8 = puVar8 + 4) {
    (**(code **)*puVar8)(puVar8,0);
  }
  if (puStack_b8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062d0d0(uint64_t param_1,longlong param_2)
void FUN_18062d0d0(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  int8_t auStack_778 [32];
  uint64_t *puStack_758;
  int32_t uStack_750;
  uint64_t uStack_748;
  uint64_t uStack_740;
  void *puStack_738;
  longlong lStack_730;
  uint uStack_728;
  int32_t uStack_720;
  void *puStack_718;
  longlong lStack_710;
  uint uStack_708;
  int32_t uStack_700;
  uint64_t uStack_6f8;
  byte abStack_6e8 [44];
  short sStack_6bc;
  short sStack_6ba;
  short sStack_6b8;
  uint64_t uStack_498;
  uint64_t auStack_278 [70];
  ulonglong uStack_48;
  
  uStack_6f8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_778;
  cVar2 = FUN_180624a00();
  if (cVar2 != '\0') {
    uVar4 = FUN_180624440(&uStack_498,param_1);
    FUN_1806279c0(&puStack_718,uVar4);
    uStack_498 = &unknown_var_720_ptr;
    uVar6 = uStack_708 + 2;
    FUN_1806277c0(&puStack_718,uVar6);
    *(int16_t *)((ulonglong)uStack_708 + lStack_710) = 0x2a2f;
    *(int8_t *)((int16_t *)((ulonglong)uStack_708 + lStack_710) + 1) = 0;
    uStack_750 = 0x118;
    puStack_758 = auStack_278;
    uStack_708 = uVar6;
    MultiByteToWideChar(0xfde9,0,lStack_710,0xffffffff);
    lVar5 = FindFirstFileW(auStack_278,abStack_6e8);
    if (lVar5 != -1) {
      do {
        if ((((sStack_6bc != 0x2e) || (sStack_6ba != 0)) &&
            ((sStack_6bc != 0x2e || ((sStack_6ba != 0x2e || (sStack_6b8 != 0)))))) &&
           ((abStack_6e8[0] & 0x10) == 0)) {
          FUN_1806279c0(&puStack_738,param_1);
          if (*(char *)((ulonglong)(uStack_728 - 1) + lStack_730) != '/') {
            uVar6 = uStack_728 + 1;
            FUN_1806277c0(&puStack_738,uVar6);
            *(int16_t *)((ulonglong)uStack_728 + lStack_730) = 0x2f;
            uStack_728 = uVar6;
          }
          uStack_740 = 0;
          uStack_748 = 0;
          uStack_750 = 0x118;
          puStack_758 = &uStack_498;
          WideCharToMultiByte(0xfde9,0,&sStack_6bc,0xffffffff);
          lVar1 = -1;
          do {
            lVar7 = lVar1;
            lVar1 = lVar7 + 1;
          } while (*(char *)((longlong)&uStack_498 + lVar7 + 1) != '\0');
          iVar3 = (int)(lVar7 + 1);
          if (0 < iVar3) {
            FUN_1806277c0(&puStack_738,uStack_728 + iVar3);
                    // WARNING: Subroutine does not return
            memcpy((ulonglong)uStack_728 + lStack_730,&uStack_498,(longlong)((int)lVar7 + 2));
          }
          if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
            *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) + 0x20;
            FUN_180627ae0();
          }
          else {
            FUN_180059820(param_2,&puStack_738);
          }
          puStack_738 = &unknown_var_3456_ptr;
          if (lStack_730 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_730 = 0;
          uStack_720 = 0;
          puStack_738 = &unknown_var_720_ptr;
        }
        iVar3 = FindNextFileW(lVar5,abStack_6e8);
      } while (iVar3 != 0);
    }
    FindClose(lVar5);
    puStack_718 = &unknown_var_3456_ptr;
    if (lStack_710 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_710 = 0;
    uStack_700 = 0;
    puStack_718 = &unknown_var_720_ptr;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_778);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062d3b0(longlong param_1,longlong param_2,uint64_t param_3)
void FUN_18062d3b0(longlong param_1,longlong param_2,uint64_t param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  longlong lVar5;
  void *puVar6;
  uint uVar7;
  longlong lVar8;
  int8_t auStack_8c8 [32];
  char *pcStack_8a8;
  int32_t uStack_8a0;
  uint64_t uStack_898;
  uint64_t uStack_890;
  void *puStack_888;
  int8_t *puStack_880;
  uint uStack_878;
  ulonglong uStack_870;
  void *puStack_868;
  longlong lStack_860;
  uint uStack_858;
  int32_t uStack_850;
  void *puStack_848;
  void *puStack_840;
  uint uStack_838;
  int32_t uStack_830;
  void *puStack_828;
  longlong lStack_820;
  int32_t uStack_810;
  void *puStack_808;
  longlong lStack_800;
  int32_t uStack_7f0;
  uint64_t uStack_7e8;
  byte abStack_7d8 [44];
  short sStack_7ac;
  short sStack_7aa;
  short sStack_7a8;
  void *apuStack_588 [68];
  char acStack_368 [272];
  char acStack_258 [528];
  ulonglong uStack_48;
  
  uStack_7e8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_8c8;
  cVar2 = FUN_180624a00();
  if (cVar2 != '\0') {
    uVar4 = FUN_180624440(apuStack_588,param_1);
    FUN_1806279c0(&puStack_848,uVar4);
    apuStack_588[0] = &unknown_var_720_ptr;
    uVar7 = uStack_838 + 2;
    FUN_1806277c0(&puStack_848,uVar7);
    *(int16_t *)(puStack_840 + uStack_838) = 0x2a2f;
    *(int8_t *)((longlong)(puStack_840 + uStack_838) + 2) = 0;
    puVar6 = &system_buffer_ptr;
    if (puStack_840 != (void *)0x0) {
      puVar6 = puStack_840;
    }
    uStack_8a0 = 0x104;
    pcStack_8a8 = acStack_258;
    uStack_838 = uVar7;
    MultiByteToWideChar(0xfde9,0,puVar6,0xffffffff);
    lVar5 = FindFirstFileW(acStack_258,abStack_7d8);
    if (lVar5 != -1) {
      do {
        if (((sStack_7ac != 0x2e) || (sStack_7aa != 0)) &&
           ((sStack_7ac != 0x2e || ((sStack_7aa != 0x2e || (sStack_7a8 != 0)))))) {
          uStack_890 = 0;
          pcStack_8a8 = acStack_368;
          uStack_898 = 0;
          uStack_8a0 = 0x104;
          if ((abStack_7d8[0] & 0x10) == 0) {
            WideCharToMultiByte(0xfde9,0,&sStack_7ac,0xffffffff);
            FUN_1806279c0(&puStack_868,param_1);
            if (*(char *)((ulonglong)(uStack_858 - 1) + lStack_860) != '/') {
              uVar7 = uStack_858 + 1;
              FUN_1806277c0(&puStack_868,uVar7);
              *(int16_t *)((ulonglong)uStack_858 + lStack_860) = 0x2f;
              uStack_858 = uVar7;
            }
            lVar1 = -1;
            do {
              lVar8 = lVar1;
              lVar1 = lVar8 + 1;
            } while (acStack_368[lVar8 + 1] != '\0');
            iVar3 = (int)(lVar8 + 1);
            if (0 < iVar3) {
              FUN_1806277c0(&puStack_868,uStack_858 + iVar3);
                    // WARNING: Subroutine does not return
              memcpy((ulonglong)uStack_858 + lStack_860,acStack_368,(longlong)((int)lVar8 + 2));
            }
            if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
              *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) + 0x20;
              FUN_180627ae0();
            }
            else {
              FUN_180059820(param_2,&puStack_868);
            }
            uVar4 = FUN_180627910(&puStack_808,acStack_368);
            uVar4 = FUN_180627560(apuStack_588,uVar4);
            FUN_1806279c0(&puStack_828,uVar4);
            FUN_180066df0(param_3,&puStack_828);
            puStack_828 = &unknown_var_3456_ptr;
            if (lStack_820 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            lStack_820 = 0;
            uStack_810 = 0;
            puStack_828 = &unknown_var_720_ptr;
            apuStack_588[0] = &unknown_var_720_ptr;
            puStack_808 = &unknown_var_3456_ptr;
            if (lStack_800 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            lStack_800 = 0;
            uStack_7f0 = 0;
            puStack_808 = &unknown_var_720_ptr;
            puStack_868 = &unknown_var_3456_ptr;
            if (lStack_860 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            lStack_860 = 0;
            uStack_850 = 0;
            puStack_868 = &unknown_var_720_ptr;
          }
          else {
            WideCharToMultiByte();
            puStack_888 = &unknown_var_3456_ptr;
            uStack_870 = 0;
            puStack_880 = (int8_t *)0x0;
            uStack_878 = 0;
            FUN_1806277c0(&puStack_888,*(int32_t *)(param_1 + 0x10));
            if (0 < *(int *)(param_1 + 0x10)) {
              puVar6 = &system_buffer_ptr;
              if (*(void **)(param_1 + 8) != (void *)0x0) {
                puVar6 = *(void **)(param_1 + 8);
              }
                    // WARNING: Subroutine does not return
              memcpy(puStack_880,puVar6,(longlong)(*(int *)(param_1 + 0x10) + 1));
            }
            if ((*(longlong *)(param_1 + 8) != 0) &&
               (uStack_878 = 0, puStack_880 != (int8_t *)0x0)) {
              *puStack_880 = 0;
            }
            if (puStack_880[uStack_878 - 1] != '/') {
              uVar7 = uStack_878 + 1;
              FUN_1806277c0(&puStack_888,uVar7);
              *(int16_t *)(puStack_880 + uStack_878) = 0x2f;
              uStack_878 = uVar7;
            }
            lVar1 = -1;
            do {
              lVar8 = lVar1;
              lVar1 = lVar8 + 1;
            } while (acStack_368[lVar8 + 1] != '\0');
            iVar3 = (int)(lVar8 + 1);
            if (0 < iVar3) {
              FUN_1806277c0(&puStack_888,uStack_878 + iVar3);
                    // WARNING: Subroutine does not return
              memcpy(puStack_880 + uStack_878,acStack_368,(longlong)((int)lVar8 + 2));
            }
            FUN_18062d3b0(&puStack_888,param_2,param_3);
            puStack_888 = &unknown_var_3456_ptr;
            if (puStack_880 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            puStack_880 = (int8_t *)0x0;
            uStack_870 = uStack_870 & 0xffffffff00000000;
            puStack_888 = &unknown_var_720_ptr;
          }
        }
        iVar3 = FindNextFileW(lVar5,abStack_7d8);
      } while (iVar3 != 0);
    }
    FindClose(lVar5);
    puStack_848 = &unknown_var_3456_ptr;
    if (puStack_840 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_840 = (void *)0x0;
    uStack_830 = 0;
    puStack_848 = &unknown_var_720_ptr;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_8c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062d860(uint64_t param_1)
void FUN_18062d860(uint64_t param_1)

{
  int iVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  void *puVar4;
  int8_t auStack_4f8 [32];
  int8_t *puStack_4d8;
  int32_t uStack_4d0;
  void *puStack_4c8;
  void *puStack_4c0;
  int32_t uStack_4b0;
  uint64_t uStack_4a8;
  int8_t auStack_4a0 [56];
  void *apuStack_468 [68];
  int8_t auStack_248 [560];
  ulonglong uStack_18;
  
  uStack_4a8 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_4f8;
  uVar2 = FUN_180624440(apuStack_468,param_1);
  FUN_1806279c0(&puStack_4c8,uVar2);
  apuStack_468[0] = &unknown_var_720_ptr;
  uStack_4d0 = 0x118;
  puStack_4d8 = auStack_248;
  MultiByteToWideChar(0xfde9,0,puStack_4c0,0xffffffff);
  iVar1 = _wstat64(auStack_248,auStack_4a0);
  if (iVar1 == -1) {
    puVar3 = (int32_t *)_errno();
    uVar2 = strerror(*puVar3);
    puVar3 = (int32_t *)_errno();
    puVar4 = &system_buffer_ptr;
    if (puStack_4c0 != (void *)0x0) {
      puVar4 = puStack_4c0;
    }
    FUN_180626f80(&unknown_var_4872_ptr,puVar4,*puVar3,uVar2);
  }
  puStack_4c8 = &unknown_var_3456_ptr;
  if (puStack_4c0 == (void *)0x0) {
    puStack_4c0 = (void *)0x0;
    uStack_4b0 = 0;
    puStack_4c8 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_4f8);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18062d9a0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  void *puVar3;
  uint64_t uStack_20;
  longlong lStack_18;
  int8_t uStack_10;
  
  puVar3 = &system_buffer_ptr;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    puVar3 = *(void **)(param_1 + 8);
  }
  uStack_20 = 0;
  uStack_10 = 0;
  FUN_18062dee0(&uStack_20,puVar3,&unknown_var_4880_ptr,param_4,0xfffffffffffffffe);
  if (lStack_18 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = _ftelli64(lStack_18);
    _fseeki64(lStack_18,0,2);
    uVar2 = _ftelli64(lStack_18);
    _fseeki64(lStack_18,uVar1,0);
    fclose(lStack_18);
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062da70(uint64_t param_1)
void FUN_18062da70(uint64_t param_1)

{
  uint64_t uVar1;
  int8_t auStack_4c8 [32];
  int8_t *puStack_4a8;
  int32_t uStack_4a0;
  void *puStack_498;
  longlong lStack_490;
  int32_t uStack_480;
  uint64_t uStack_478;
  void *apuStack_468 [68];
  int8_t auStack_248 [560];
  ulonglong uStack_18;
  
  uStack_478 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_4c8;
  uVar1 = FUN_180624440(apuStack_468,param_1);
  FUN_1806279c0(&puStack_498,uVar1);
  apuStack_468[0] = &unknown_var_720_ptr;
  uStack_4a0 = 0x118;
  puStack_4a8 = auStack_248;
  MultiByteToWideChar(0xfde9,0,lStack_490,0xffffffff);
  DeleteFileW(auStack_248);
  puStack_498 = &unknown_var_3456_ptr;
  if (lStack_490 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_490 = 0;
  uStack_480 = 0;
  puStack_498 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_4c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062db60(uint64_t param_1,uint64_t param_2)
void FUN_18062db60(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  uint64_t uVar2;
  int8_t auStack_728 [32];
  int8_t *puStack_708;
  int32_t uStack_700;
  void *puStack_6f8;
  longlong lStack_6f0;
  int32_t uStack_6e0;
  void *puStack_6d8;
  longlong lStack_6d0;
  int32_t uStack_6c0;
  uint64_t uStack_6b8;
  void *apuStack_6a8 [68];
  int8_t auStack_488 [560];
  int8_t auStack_258 [560];
  ulonglong uStack_28;
  
  uStack_6b8 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_728;
  uVar2 = FUN_180624440(apuStack_6a8,param_1);
  FUN_1806279c0(&puStack_6d8,uVar2);
  apuStack_6a8[0] = &unknown_var_720_ptr;
  uVar2 = FUN_180624440(apuStack_6a8,param_2);
  FUN_1806279c0(&puStack_6f8,uVar2);
  apuStack_6a8[0] = &unknown_var_720_ptr;
  uStack_700 = 0x118;
  puStack_708 = auStack_488;
  MultiByteToWideChar(0xfde9,0,lStack_6d0,0xffffffff);
  uStack_700 = 0x118;
  puStack_708 = auStack_258;
  MultiByteToWideChar(0xfde9,0,lStack_6f0,0xffffffff);
  iVar1 = CopyFileW(auStack_258,auStack_488,0);
  if (iVar1 == 0) {
    GetLastError();
  }
  puStack_6f8 = &unknown_var_3456_ptr;
  if (lStack_6f0 == 0) {
    lStack_6f0 = 0;
    uStack_6e0 = 0;
    puStack_6f8 = &unknown_var_720_ptr;
    puStack_6d8 = &unknown_var_3456_ptr;
    if (lStack_6d0 == 0) {
      lStack_6d0 = 0;
      uStack_6c0 = 0;
      puStack_6d8 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_728);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062dce0(uint64_t param_1)
void FUN_18062dce0(uint64_t param_1)

{
  uint64_t uVar1;
  int8_t auStack_728 [32];
  int8_t *puStack_708;
  int32_t uStack_700;
  void *puStack_6f8;
  longlong lStack_6f0;
  int32_t uStack_6e0;
  void *puStack_6d8;
  longlong lStack_6d0;
  int32_t uStack_6c0;
  uint64_t uStack_6b8;
  void *apuStack_6a8 [68];
  int8_t auStack_488 [560];
  int8_t auStack_258 [560];
  ulonglong uStack_28;
  
  uStack_6b8 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_728;
  uVar1 = FUN_180624440(apuStack_6a8);
  FUN_1806279c0(&puStack_6d8,uVar1);
  apuStack_6a8[0] = &unknown_var_720_ptr;
  uVar1 = FUN_180624440(apuStack_6a8,param_1);
  FUN_1806279c0(&puStack_6f8,uVar1);
  apuStack_6a8[0] = &unknown_var_720_ptr;
  uStack_700 = 0x118;
  puStack_708 = auStack_488;
  MultiByteToWideChar(0xfde9,0,lStack_6d0,0xffffffff);
  uStack_700 = 0x118;
  puStack_708 = auStack_258;
  MultiByteToWideChar(0xfde9,0,lStack_6f0,0xffffffff);
  MoveFileW(auStack_258,auStack_488);
  puStack_6f8 = &unknown_var_3456_ptr;
  if (lStack_6f0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_6f0 = 0;
  uStack_6e0 = 0;
  puStack_6f8 = &unknown_var_720_ptr;
  puStack_6d8 = &unknown_var_3456_ptr;
  if (lStack_6d0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_6d0 = 0;
  uStack_6c0 = 0;
  puStack_6d8 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_728);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



