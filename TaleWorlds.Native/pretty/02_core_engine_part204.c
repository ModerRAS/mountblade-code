#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part204.c - 17 个函数

// 函数: void FUN_180186430(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180186430(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  uint64_t uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = *plVar1;
  lVar4 = lVar2;
  plVar5 = *(longlong **)(lVar2 + 8);
  if (*(char *)((longlong)*(longlong **)(lVar2 + 8) + 0x19) == '\0') {
    do {
      FUN_1801885a0(plVar1,plVar5[2],param_3,param_4,uVar6);
      plVar3 = (longlong *)*plVar5;
      free(plVar5,0x28);
      plVar5 = plVar3;
    } while (*(char *)((longlong)plVar3 + 0x19) == '\0');
    lVar4 = *plVar1;
  }
  *(longlong *)(lVar4 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  *(uint64_t *)(param_1 + 0x30) = 0;
  free(*plVar1,0x28);
  FUN_180067070(param_1 + 8);
  return;
}





// 函数: void FUN_1801864e0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801864e0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (lVar1 - lVar2,uVar3 + 0x27,lVar2,param_4,0xfffffffffffffffe);
      }
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801865a0(uint64_t param_1,uint64_t *param_2)
void FUN_1801865a0(uint64_t param_1,uint64_t *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint64_t uVar3;
  void *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  int8_t auStack_c8 [32];
  longlong **pplStack_a8;
  uint64_t uStack_a0;
  uint64_t *puStack_98;
  int8_t auStack_90 [16];
  uint64_t uStack_80;
  uint64_t uStack_78;
  longlong *plStack_70;
  uint64_t uStack_68;
  void *puStack_60;
  longlong lStack_58;
  uint64_t uStack_50;
  ulonglong uStack_48;
  void **ppuStack_28;
  ulonglong uStack_20;
  
  lVar2 = _DAT_180c8a9e0;
  uStack_a0 = 0xfffffffffffffffe;
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  puStack_98 = param_2;
  if (*(longlong *)(_DAT_180c8a9e0 + 8) == 0) {
    *param_2 = &UNK_180a3c3e0;
    if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_2[1] = 0;
    *(int32_t *)(param_2 + 3) = 0;
  }
  else {
    uStack_80 = 0;
    uStack_78 = 0xf;
    auStack_90[0] = 0;
    pplStack_a8 = &plStack_70;
    plStack_70 = (longlong *)0x0;
    uStack_68 = 0;
    plStack_70 = (longlong *)FUN_180188490();
    puVar4 = &DAT_18098bc73;
    if ((void *)param_2[1] != (void *)0x0) {
      puVar4 = (void *)param_2[1];
    }
    lVar6 = -1;
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (puVar4[lVar7] != '\0');
    FUN_1800671b0(auStack_90);
    puVar4 = &DAT_18098bc73;
    if ((void *)param_2[1] != (void *)0x0) {
      puVar4 = (void *)param_2[1];
    }
    uStack_50 = 0;
    uStack_48 = 0xf;
    puStack_60 = (void *)((ulonglong)puStack_60 & 0xffffffffffffff00);
    FUN_1800671b0(&puStack_60,&UNK_180a0aa34,5);
    uVar3 = FUN_180187f00(&plStack_70,&puStack_60);
    do {
      lVar6 = lVar6 + 1;
    } while (puVar4[lVar6] != '\0');
    FUN_1800671b0(uVar3,puVar4,lVar6);
    if (0xf < uStack_48) {
      uVar5 = uStack_48 + 1;
      puVar4 = puStack_60;
      if (0xfff < uVar5) {
        uVar5 = uStack_48 + 0x28;
        puVar4 = *(void **)(puStack_60 + -8);
        if ((void *)0x1f < puStack_60 + (-8 - (longlong)puVar4)) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(puVar4,uVar5);
    }
    uStack_50 = 0;
    uStack_48 = 0xf;
    plVar1 = *(longlong **)(lVar2 + 8);
    pplStack_a8 = (longlong **)&puStack_60;
    puStack_60 = &UNK_180a0abe0;
    lStack_58 = lVar2;
    ppuStack_28 = &puStack_60;
    (**(code **)(*plVar1 + 0x18))(plVar1,auStack_90,&puStack_60,0);
    plVar1 = plStack_70;
    pplStack_a8 = &plStack_70;
    FUN_1801884d0(&plStack_70,plStack_70[1]);
    plStack_70[1] = (longlong)plVar1;
    *plStack_70 = (longlong)plVar1;
    plStack_70[2] = (longlong)plVar1;
    uStack_68 = 0;
    free(plStack_70,0x60);
    FUN_180067070(auStack_90);
    *param_2 = &UNK_180a3c3e0;
    if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_2[1] = 0;
    *(int32_t *)(param_2 + 3) = 0;
  }
  *param_2 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_c8);
}





// 函数: void FUN_180186800(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180186800(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  lVar2 = *plVar1;
  FUN_1801884d0(plVar1,*(uint64_t *)(lVar2 + 8),param_3,param_4,0xfffffffffffffffe);
  *(longlong *)(*plVar1 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  *(uint64_t *)(param_1 + 0x28) = 0;
  free(*plVar1,0x60);
  FUN_180067070(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180186880(uint64_t param_1,uint64_t *param_2,uint64_t *param_3)
void FUN_180186880(uint64_t param_1,uint64_t *param_2,uint64_t *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  void *puVar3;
  longlong lVar4;
  longlong lVar5;
  int8_t auStack_e8 [32];
  uint64_t uStack_c8;
  uint64_t *puStack_c0;
  uint64_t *puStack_b8;
  void **ppuStack_b0;
  void *puStack_a8;
  longlong lStack_a0;
  void **ppuStack_70;
  int8_t auStack_68 [16];
  uint64_t uStack_58;
  uint64_t uStack_50;
  int8_t auStack_48 [16];
  uint64_t uStack_38;
  uint64_t uStack_30;
  ulonglong uStack_28;
  
  lVar2 = _DAT_180c8a9e0;
  uStack_c8 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  puStack_c0 = param_2;
  puStack_b8 = param_3;
  if (*(longlong *)(_DAT_180c8a9e0 + 8) == 0) {
    *param_2 = &UNK_180a3c3e0;
    if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_2[1] = 0;
    *(int32_t *)(param_2 + 3) = 0;
    *param_2 = &UNK_18098bcb0;
    *param_3 = &UNK_180a3c3e0;
    if (param_3[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_3[1] = 0;
    *(int32_t *)(param_3 + 3) = 0;
  }
  else {
    uStack_58 = 0;
    uStack_50 = 0xf;
    auStack_68[0] = 0;
    uStack_38 = 0;
    uStack_30 = 0xf;
    auStack_48[0] = 0;
    puVar3 = &DAT_18098bc73;
    if ((void *)param_3[1] != (void *)0x0) {
      puVar3 = (void *)param_3[1];
    }
    lVar4 = -1;
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (puVar3[lVar5] != '\0');
    FUN_1800671b0(auStack_68);
    puVar3 = &DAT_18098bc73;
    if ((void *)param_2[1] != (void *)0x0) {
      puVar3 = (void *)param_2[1];
    }
    do {
      lVar4 = lVar4 + 1;
    } while (puVar3[lVar4] != '\0');
    FUN_1800671b0(auStack_48,puVar3,lVar4);
    plVar1 = *(longlong **)(lVar2 + 8);
    ppuStack_b0 = &puStack_a8;
    puStack_a8 = &UNK_180a0ab70;
    lStack_a0 = lVar2;
    ppuStack_70 = &puStack_a8;
    (**(code **)(*plVar1 + 0x28))(plVar1,auStack_68,&puStack_a8,0);
    FUN_180067070(auStack_48);
    FUN_180067070(auStack_68);
    *param_2 = &UNK_180a3c3e0;
    if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_2[1] = 0;
    *(int32_t *)(param_2 + 3) = 0;
    *param_2 = &UNK_18098bcb0;
    *param_3 = &UNK_180a3c3e0;
    if (param_3[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_3[1] = 0;
    *(int32_t *)(param_3 + 3) = 0;
  }
  *param_3 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_e8);
}





// 函数: void FUN_180186a90(longlong param_1)
void FUN_180186a90(longlong param_1)

{
  FUN_180067070(param_1 + 0x20);
  FUN_180067070(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180186ac0(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,int32_t param_4,
void FUN_180186ac0(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,int32_t param_4,
                  int32_t param_5)

{
  longlong *plVar1;
  longlong lVar2;
  void *puVar3;
  longlong lVar4;
  longlong lVar5;
  int8_t auStack_108 [32];
  uint64_t uStack_e8;
  uint64_t *puStack_e0;
  uint64_t *puStack_d8;
  void **ppuStack_d0;
  void *puStack_c8;
  longlong lStack_c0;
  void **ppuStack_90;
  int8_t auStack_88 [16];
  uint64_t uStack_78;
  uint64_t uStack_70;
  int8_t auStack_68 [16];
  uint64_t uStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  int32_t uStack_44;
  ulonglong uStack_38;
  
  lVar2 = _DAT_180c8a9e0;
  uStack_e8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  puStack_e0 = param_2;
  puStack_d8 = param_3;
  if (*(longlong *)(_DAT_180c8a9e0 + 8) == 0) {
    *param_2 = &UNK_180a3c3e0;
    if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_2[1] = 0;
    *(int32_t *)(param_2 + 3) = 0;
    *param_2 = &UNK_18098bcb0;
    *param_3 = &UNK_180a3c3e0;
    if (param_3[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_3[1] = 0;
    *(int32_t *)(param_3 + 3) = 0;
  }
  else {
    uStack_78 = 0;
    uStack_70 = 0xf;
    auStack_88[0] = 0;
    uStack_58 = 0;
    uStack_50 = 0xf;
    auStack_68[0] = 0;
    uStack_44 = param_5;
    puVar3 = &DAT_18098bc73;
    if ((void *)param_3[1] != (void *)0x0) {
      puVar3 = (void *)param_3[1];
    }
    lVar4 = -1;
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (puVar3[lVar5] != '\0');
    uStack_48 = param_4;
    FUN_1800671b0(auStack_88);
    puVar3 = &DAT_18098bc73;
    if ((void *)param_2[1] != (void *)0x0) {
      puVar3 = (void *)param_2[1];
    }
    do {
      lVar4 = lVar4 + 1;
    } while (puVar3[lVar4] != '\0');
    FUN_1800671b0(auStack_68,puVar3,lVar4);
    plVar1 = *(longlong **)(lVar2 + 8);
    ppuStack_d0 = &puStack_c8;
    puStack_c8 = &UNK_180a0aba8;
    lStack_c0 = lVar2;
    ppuStack_90 = &puStack_c8;
    (**(code **)(*plVar1 + 0x30))(plVar1,auStack_88,&puStack_c8,0);
    FUN_180067070(auStack_68);
    FUN_180067070(auStack_88);
    *param_2 = &UNK_180a3c3e0;
    if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_2[1] = 0;
    *(int32_t *)(param_2 + 3) = 0;
    *param_2 = &UNK_18098bcb0;
    *param_3 = &UNK_180a3c3e0;
    if (param_3[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_3[1] = 0;
    *(int32_t *)(param_3 + 3) = 0;
  }
  *param_3 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_108);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180186ca0(uint64_t param_1,longlong param_2,ulonglong param_3)
void FUN_180186ca0(uint64_t param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  void **ppuVar3;
  void **ppuVar4;
  ulonglong uVar5;
  longlong lVar6;
  int8_t auStack_b8 [32];
  void **ppuStack_98;
  void **ppuStack_90;
  void **ppuStack_88;
  void **ppuStack_80;
  uint64_t uStack_78;
  void *puStack_70;
  longlong lStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  void **ppuStack_38;
  ulonglong uStack_30;
  
  lVar2 = _DAT_180c8a9e0;
  uStack_78 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(_DAT_180c8a9e0 + 8) != 0) {
    ppuStack_98 = (void **)0x0;
    ppuStack_90 = (void **)0x0;
    uVar5 = 0;
    ppuStack_88 = (void **)0x0;
    if (param_3 != 0) {
      do {
        uStack_60 = 0;
        uStack_58 = 0xf;
        puStack_70 = (void *)((ulonglong)puStack_70 & 0xffffffffffffff00);
        uStack_50 = 0;
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (*(char *)(*(longlong *)(param_2 + uVar5 * 8) + lVar6) != '\0');
        FUN_1800671b0(&puStack_70);
        ppuVar4 = ppuStack_90;
        if (ppuStack_88 == ppuStack_90) {
          FUN_180188f60(&ppuStack_98,ppuStack_90,&puStack_70);
        }
        else {
          ppuStack_80 = ppuStack_90;
          FUN_18018b350(ppuStack_90,&puStack_70);
          *(int32_t *)(ppuVar4 + 4) = (int32_t)uStack_50;
          *(int32_t *)((longlong)ppuVar4 + 0x24) = uStack_50._4_4_;
          ppuStack_90 = ppuStack_90 + 5;
        }
        FUN_180067070(&puStack_70);
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_3);
    }
    plVar1 = *(longlong **)(lVar2 + 8);
    ppuStack_80 = &puStack_70;
    puStack_70 = &UNK_180a0ab00;
    lStack_68 = lVar2;
    ppuStack_38 = &puStack_70;
    (**(code **)(*plVar1 + 0x38))(plVar1,&ppuStack_98,&puStack_70,0);
    ppuVar3 = ppuStack_90;
    ppuVar4 = ppuStack_98;
    if (ppuStack_98 != (void **)0x0) {
      for (; ppuStack_80 = ppuVar4, ppuVar4 != ppuVar3; ppuVar4 = ppuVar4 + 5) {
        FUN_180067070(ppuVar4);
      }
      uVar5 = (((longlong)ppuStack_88 - (longlong)ppuStack_98) / 0x28) * 0x28;
      ppuVar4 = ppuStack_98;
      if (0xfff < uVar5) {
        uVar5 = uVar5 + 0x27;
        ppuVar4 = (void **)ppuStack_98[-1];
        if (0x1f < (ulonglong)((longlong)ppuStack_98 + (-8 - (longlong)ppuVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(ppuVar4,uVar5);
      ppuStack_98 = (void **)0x0;
      ppuStack_90 = (void **)0x0;
      ppuStack_88 = (void **)0x0;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180186eb0(void)
void FUN_180186eb0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x88,8,3,0xfffffffffffffffe);
                    // WARNING: Subroutine does not return
  memset(lVar1 + 0x14,0,0x74);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801871f0(uint64_t param_1,uint64_t *param_2)
void FUN_1801871f0(uint64_t param_1,uint64_t *param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  longlong lVar6;
  byte *pbVar7;
  int iVar8;
  uint64_t *puVar9;
  longlong lVar10;
  
  lVar6 = _DAT_180c8a9e0;
  puVar9 = *(uint64_t **)(_DAT_180c8a9e0 + 0x18);
  if (puVar9 != *(uint64_t **)(_DAT_180c8a9e0 + 0x20)) {
    iVar2 = *(int *)(param_2 + 2);
    do {
      puVar4 = (uint64_t *)*puVar9;
      iVar3 = *(int *)(puVar4 + 2);
      iVar8 = iVar2;
      if (iVar3 == iVar2) {
        if (iVar3 != 0) {
          pbVar7 = (byte *)puVar4[1];
          lVar10 = param_2[1] - (longlong)pbVar7;
          do {
            pbVar1 = pbVar7 + lVar10;
            iVar8 = (uint)*pbVar7 - (uint)*pbVar1;
            if (iVar8 != 0) break;
            pbVar7 = pbVar7 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18018728e:
        if (iVar8 == 0) {
          if (puVar4 != (uint64_t *)0x0) {
            if (puVar4[0xd] != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            puVar4[4] = &UNK_180a3c3e0;
            if (puVar4[5] == 0) {
              puVar4[5] = 0;
              *(int32_t *)(puVar4 + 7) = 0;
              puVar4[4] = &UNK_18098bcb0;
              *puVar4 = &UNK_180a3c3e0;
              if (puVar4[1] == 0) {
                puVar4[1] = 0;
                *(int32_t *)(puVar4 + 3) = 0;
                *puVar4 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
                FUN_18064e900(puVar4);
              }
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *puVar9 = 0;
          puVar4 = puVar9 + 1;
          puVar5 = *(uint64_t **)(lVar6 + 0x20);
          if (puVar4 < puVar5) {
                    // WARNING: Subroutine does not return
            memmove(puVar9,puVar4,(longlong)puVar5 - (longlong)puVar4,iVar2,0xfffffffffffffffe);
          }
          *(uint64_t **)(lVar6 + 0x20) = puVar5 + -1;
          break;
        }
      }
      else if (iVar3 == 0) goto LAB_18018728e;
      puVar9 = puVar9 + 1;
    } while (puVar9 != *(uint64_t **)(_DAT_180c8a9e0 + 0x20));
  }
  FUN_180187390(lVar6,&UNK_180a0aa34);
  *param_2 = &UNK_180a3c3e0;
  if (param_2[1] == 0) {
    param_2[1] = 0;
    *(int32_t *)(param_2 + 3) = 0;
    *param_2 = &UNK_18098bcb0;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180187390(void **param_1,longlong param_2)
void FUN_180187390(void **param_1,longlong param_2)

{
  ulonglong uVar1;
  int8_t *puVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  int8_t *puVar7;
  ulonglong uVar8;
  uint64_t *puVar9;
  uint64_t **ppuVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int8_t auStack_148 [32];
  uint64_t uStack_128;
  uint64_t **ppuStack_118;
  uint64_t **ppuStack_110;
  ulonglong uStack_108;
  uint64_t *puStack_100;
  void **ppuStack_f8;
  int8_t *puStack_f0;
  longlong lStack_e8;
  uint64_t uStack_e0;
  void *puStack_d8;
  void **ppuStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  int8_t uStack_b8;
  uint64_t uStack_b4;
  uint64_t *puStack_a8;
  void **ppuStack_a0;
  int8_t uStack_98;
  uint8_t uStack_97;
  ulonglong uStack_88;
  ulonglong uStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  int8_t auStack_60 [16];
  uint64_t uStack_50;
  uint64_t uStack_48;
  ulonglong uStack_40;
  
  uStack_e0 = 0xfffffffffffffffe;
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_148;
  puVar9 = (uint64_t *)*param_1;
  ppuStack_f8 = param_1;
  lStack_e8 = param_2;
  if ((puVar9 != (uint64_t *)0x0) &&
     (((longlong)param_1[4] - (longlong)param_1[3] & 0xfffffffffffffff8U) != 0)) {
    puVar4 = (uint64_t *)FUN_1808fc418(0x10);
    *puVar4 = &UNK_180a0ac88;
    *puVar4 = &UNK_180a0acd8;
    uVar5 = 0;
    puStack_100 = puVar4;
    if (puVar9 != (uint64_t *)0x0) {
      if ((void *)*puVar9 == &UNK_180a0ad28) {
        uVar5 = puVar9[1];
      }
      else {
        uVar5 = (**(code **)((void *)*puVar9 + 0x20))(puVar9);
      }
    }
    puVar4[1] = uVar5;
    puVar9 = (uint64_t *)param_1[1];
    param_1[1] = (void *)puVar4;
    if (puVar9 != (uint64_t *)0x0) {
      (**(code **)*puVar9)(puVar9,1);
    }
    lStack_78 = 0;
    lStack_70 = 0;
    lStack_68 = 0;
    uStack_50 = 0;
    uStack_48 = 0xf;
    auStack_60[0] = 0;
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (*(char *)(param_2 + lVar11) != '\0');
    FUN_1800671b0(auStack_60,param_2);
    for (ppuVar10 = (uint64_t **)param_1[3]; ppuStack_110 = ppuVar10,
        ppuVar10 != (uint64_t **)param_1[4]; ppuVar10 = (uint64_t **)((longlong *)ppuVar10 + 1))
    {
      uStack_c8 = 0;
      uStack_c0 = 0xf;
      puStack_d8 = (void *)((ulonglong)puStack_d8 & 0xffffffffffffff00);
      uStack_b8 = 1;
      uStack_b4 = 0;
      ppuStack_118 = &puStack_a8;
      puStack_a8 = (uint64_t *)0x0;
      ppuStack_a0 = (void **)0x0;
      puStack_a8 = (uint64_t *)FUN_180188490();
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (*(char *)(*(longlong *)((longlong)*ppuVar10 + 0x40) + lVar11) != '\0');
      FUN_1800671b0(&puStack_d8);
      lVar11 = (longlong)*ppuVar10;
      uStack_b8 = *(int8_t *)(lVar11 + 0x48);
      uStack_b4 = *(uint64_t *)(lVar11 + 0x4c);
      uStack_108 = 0;
      if (*(longlong *)(lVar11 + 0x60) != 0) {
        ppuStack_118 = (uint64_t **)0x0;
        do {
          lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x58) + 8 + (longlong)ppuStack_118);
          uStack_88 = 0;
          uStack_80 = 0xf;
          uStack_98 = 0;
          lVar12 = -1;
          do {
            lVar12 = lVar12 + 1;
          } while (*(char *)(param_2 + lVar12) != '\0');
          FUN_1800671b0(&uStack_98,param_2);
          uVar14 = uStack_80;
          uVar8 = uStack_88;
          puVar9 = puStack_a8;
          if (*(char *)((longlong)puStack_a8[1] + 0x19) == '\0') {
            puVar2 = (int8_t *)CONCAT71(uStack_97,uStack_98);
            puVar4 = (uint64_t *)puStack_a8[1];
            do {
              puVar6 = puVar4 + 4;
              puVar7 = &uStack_98;
              if (0xf < uVar14) {
                puVar7 = puVar2;
              }
              uVar1 = puVar4[6];
              if (0xf < (ulonglong)puVar4[7]) {
                puVar6 = (uint64_t *)*puVar6;
              }
              uVar13 = uVar1;
              if (uVar8 < uVar1) {
                uVar13 = uVar8;
              }
              iVar3 = memcmp(puVar6,puVar7,uVar13);
              if (iVar3 == 0) {
                if (uVar1 < uVar8) goto LAB_180187642;
LAB_1801875f6:
                puVar6 = (uint64_t *)*puVar4;
                puVar9 = puVar4;
              }
              else {
                if (-1 < iVar3) goto LAB_1801875f6;
LAB_180187642:
                puVar6 = (uint64_t *)puVar4[2];
              }
              puVar4 = puVar6;
            } while (*(char *)((longlong)puVar6 + 0x19) == '\0');
            if (puVar9 == puStack_a8) goto LAB_18018764a;
            puVar4 = puVar9 + 4;
            uVar1 = puVar9[6];
            if (0xf < (ulonglong)puVar9[7]) {
              puVar4 = (uint64_t *)*puVar4;
            }
            puVar7 = &uStack_98;
            if (0xf < uVar14) {
              puVar7 = puVar2;
            }
            uVar14 = uVar8;
            if (uVar1 < uVar8) {
              uVar14 = uVar1;
            }
            iVar3 = memcmp(puVar7,puVar4,uVar14);
            if (iVar3 == 0) {
              if (uVar8 < uVar1) goto LAB_18018764a;
            }
            else if (iVar3 < 0) goto LAB_18018764a;
          }
          else {
LAB_18018764a:
            puStack_f0 = &uStack_98;
            uStack_128 = FUN_18018a130(&puStack_a8);
            FUN_18018a1c0(&puStack_a8,&puStack_100,puVar9);
            puVar9 = puStack_100;
          }
          lVar12 = -1;
          do {
            lVar12 = lVar12 + 1;
          } while (*(char *)(lVar12 + lVar11) != '\0');
          FUN_1800671b0(puVar9 + 8,lVar11);
          if (0xf < uStack_80) {
            if (0xfff < uStack_80 + 1) {
              lVar11 = *(longlong *)(CONCAT71(uStack_97,uStack_98) + -8);
              if (0x1f < (CONCAT71(uStack_97,uStack_98) - lVar11) - 8U) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn(lVar11,uStack_80 + 0x28);
              }
            }
            free();
          }
          uStack_88 = 0;
          uStack_80 = 0xf;
          uStack_98 = 0;
          uStack_108 = uStack_108 + 1;
          ppuStack_118 = ppuStack_118 + 2;
          lVar11 = (longlong)*ppuStack_110;
          param_2 = lStack_e8;
          ppuVar10 = ppuStack_110;
          param_1 = ppuStack_f8;
        } while (uStack_108 < *(ulonglong *)(lVar11 + 0x60));
      }
      if (lStack_68 == lStack_70) {
        FUN_1801891f0(&lStack_78,lStack_70,&puStack_d8);
      }
      else {
        FUN_180189190();
        lStack_70 = lStack_70 + 0x40;
      }
      puVar9 = puStack_a8;
      ppuStack_110 = &puStack_a8;
      FUN_1801884d0(&puStack_a8,puStack_a8[1]);
      puStack_a8[1] = puVar9;
      *puStack_a8 = puVar9;
      puStack_a8[2] = puVar9;
      ppuStack_a0 = (void **)0x0;
      free(puStack_a8,0x60);
      FUN_180067070(&puStack_d8);
    }
    ppuStack_f8 = &puStack_d8;
    puStack_d8 = &UNK_180a0ab38;
    ppuStack_a0 = &puStack_d8;
    ppuStack_d0 = param_1;
    (**(code **)(*(longlong *)param_1[1] + 8))(param_1[1],&lStack_78,&puStack_d8,0);
    FUN_180067070(auStack_60);
    lVar12 = lStack_70;
    lVar11 = lStack_78;
    if (lStack_78 != 0) {
      for (; lVar11 != lVar12; lVar11 = lVar11 + 0x40) {
        FUN_180187950(lVar11);
      }
      uVar8 = lStack_68 - lStack_78 & 0xffffffffffffffc0;
      lVar11 = lStack_78;
      if (0xfff < uVar8) {
        uVar8 = uVar8 + 0x27;
        lVar11 = *(longlong *)(lStack_78 + -8);
        if (0x1f < (lStack_78 - lVar11) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar11,uVar8);
      lStack_78 = 0;
      lStack_70 = 0;
      lStack_68 = 0;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_148);
}





// 函数: void FUN_1801878a0(longlong *param_1)
void FUN_1801878a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_180067070(param_1 + 3);
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    if (lVar1 != lVar2) {
      do {
        FUN_180187950(lVar1);
        lVar1 = lVar1 + 0x40;
      } while (lVar1 != lVar2);
      lVar1 = *param_1;
    }
    lVar2 = lVar1;
    if ((0xfff < (param_1[2] - lVar1 & 0xffffffffffffffc0U)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}





// 函数: void FUN_180187950(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180187950(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar2 = *plVar1;
  FUN_1801884d0(plVar1,*(uint64_t *)(lVar2 + 8),param_3,param_4,0xfffffffffffffffe);
  *(longlong *)(*plVar1 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  *(uint64_t *)(param_1 + 0x38) = 0;
  free(*plVar1,0x60);
  FUN_180067070(param_1);
  return;
}





// 函数: void FUN_1801879d0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801879d0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[7];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1,param_3,param_4,0xfffffffffffffffe);
      param_1[7] = 0;
    }
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
    free(param_1,0x48);
    return;
  }
  return;
}





// 函数: void FUN_180187a30(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180187a30(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff0;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (lVar1 - lVar2,uVar3 + 0x27,lVar2,param_4,0xfffffffffffffffe);
      }
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}





// 函数: void FUN_180187aa0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180187aa0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*param_1 != 0) {
    FUN_180189900(*param_1,param_1[1],param_3,param_4,0xfffffffffffffffe);
    lVar1 = *param_1;
    uVar3 = ((param_1[2] - lVar1) / 0x18) * 0x18;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar1 - lVar2,uVar3 + 0x27);
      }
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}





// 函数: void FUN_180187b40(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180187b40(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = ((param_1[2] - lVar1) / 0x28) * 0x28;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (lVar1 - lVar2,uVar3 + 0x27,lVar2,param_4,0xfffffffffffffffe);
      }
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}





