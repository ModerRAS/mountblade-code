#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part182.c - 1 个函数

// 函数: void FUN_180167a50(void)
void FUN_180167a50(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180167f80(uint64_t param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4)

{
  int iVar1;
  void *puVar2;
  int32_t uVar3;
  void **ppuVar4;
  int32_t *puVar5;
  void *puVar6;
  int iVar7;
  bool bVar8;
  void *puStack_88;
  int32_t *puStack_80;
  int32_t uStack_78;
  ulonglong uStack_70;
  void *puStack_68;
  void *puStack_60;
  int iStack_58;
  void *puStack_50;
  void *puStack_48;
  longlong lStack_40;
  int32_t uStack_30;
  
  bVar8 = (param_4[1] - *param_4 & 0xffffffffffffffe0U) != 0x20;
  if (bVar8) {
    puStack_88 = &unknown_var_3456_ptr;
    uStack_70 = 0;
    puStack_80 = (int32_t *)0x0;
    uStack_78 = 0;
    puVar5 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x17,0x13,param_4,0,0xfffffffffffffffe);
    *(int8_t *)puVar5 = 0;
    puStack_80 = puVar5;
    uVar3 = FUN_18064e990(puVar5);
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar3);
    *puVar5 = 0x64616873;
    puVar5[1] = 0x695f7265;
    puVar5[2] = 0x746e6564;
    puVar5[3] = 0x65696669;
    puVar5[4] = 0x742e7372;
    *(int16_t *)(puVar5 + 5) = 0x7478;
    *(int8_t *)((longlong)puVar5 + 0x16) = 0;
    uStack_78 = 0x16;
    ppuVar4 = &puStack_88;
  }
  else {
    ppuVar4 = (void **)FUN_180627ae0(&puStack_48);
  }
  puStack_68 = &unknown_var_3456_ptr;
  puStack_50 = (void *)0x0;
  puStack_60 = (void *)0x0;
  iStack_58 = 0;
  iVar1 = *(int *)(ppuVar4 + 2);
  iStack_58 = iVar1;
  puVar2 = ppuVar4[1];
  puStack_60 = puVar2;
  puStack_50 = (void *)((ulonglong)*(uint *)((longlong)ppuVar4 + 0x1c) << 0x20);
  puStack_50 = ppuVar4[3];
  *(int32_t *)(ppuVar4 + 2) = 0;
  ppuVar4[1] = (void *)0x0;
  ppuVar4[3] = (void *)0x0;
  if (bVar8) {
    puStack_88 = &unknown_var_3456_ptr;
    if (puStack_80 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_80 = (int32_t *)0x0;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    puStack_88 = &unknown_var_720_ptr;
    ppuVar4 = (void **)0x0;
  }
  if (!bVar8) {
    puStack_48 = &unknown_var_3456_ptr;
    if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_40 = 0;
    uStack_30 = 0;
    puStack_48 = &unknown_var_720_ptr;
    ppuVar4 = (void **)0x0;
  }
  puVar6 = &system_buffer_ptr;
  if (puVar2 != (void *)0x0) {
    puVar6 = puVar2;
  }
  FUN_1801c9bd0(ppuVar4,puVar6);
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3456_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  iVar7 = *(int *)(param_2 + 2) + 0x21;
  FUN_1806277c0(param_2,iVar7);
  puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]);
  *puVar5 = 0x656e6f44;
  puVar5[1] = 0x6f43202e;
  puVar5[2] = 0x6e69626d;
  puVar5[3] = 0x6f697461;
  puVar5[4] = 0x7320736e;
  puVar5[5] = 0x64657661;
  puVar5[6] = 0x206f7420;
  puVar5[7] = 0x656c6966;
  *(int16_t *)(puVar5 + 8) = 0x20;
  *(int *)(param_2 + 2) = iVar7;
  if (0 < iVar1) {
    FUN_1806277c0(param_2,iVar7 + iVar1);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_2 + 2) + param_2[1],puVar2,(longlong)(iVar1 + 1));
  }
  puStack_68 = &unknown_var_3456_ptr;
  if (puVar2 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1801681e0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4)

{
  int iVar1;
  void *puVar2;
  int32_t uVar3;
  void **ppuVar4;
  int32_t *puVar5;
  void *puVar6;
  int iVar7;
  bool bVar8;
  void *puStack_88;
  int32_t *puStack_80;
  int32_t uStack_78;
  ulonglong uStack_70;
  void *puStack_68;
  void *puStack_60;
  int iStack_58;
  void *puStack_50;
  void *puStack_48;
  longlong lStack_40;
  int32_t uStack_30;
  
  bVar8 = (param_4[1] - *param_4 & 0xffffffffffffffe0U) != 0x20;
  if (bVar8) {
    puStack_88 = &unknown_var_3456_ptr;
    uStack_70 = 0;
    puStack_80 = (int32_t *)0x0;
    uStack_78 = 0;
    puVar5 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x18,0x13,param_4,0,0xfffffffffffffffe);
    *(int8_t *)puVar5 = 0;
    puStack_80 = puVar5;
    uVar3 = FUN_18064e990(puVar5);
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar3);
    *puVar5 = 0x64616873;
    puVar5[1] = 0x635f7265;
    puVar5[2] = 0x69626d6f;
    puVar5[3] = 0x6974616e;
    *(uint64_t *)(puVar5 + 4) = 0x7478742e736e6f;
    uStack_78 = 0x17;
    ppuVar4 = &puStack_88;
  }
  else {
    ppuVar4 = (void **)FUN_180627ae0(&puStack_48);
  }
  puStack_68 = &unknown_var_3456_ptr;
  puStack_50 = (void *)0x0;
  puStack_60 = (void *)0x0;
  iStack_58 = 0;
  iVar1 = *(int *)(ppuVar4 + 2);
  iStack_58 = iVar1;
  puVar2 = ppuVar4[1];
  puStack_60 = puVar2;
  puStack_50 = (void *)((ulonglong)*(uint *)((longlong)ppuVar4 + 0x1c) << 0x20);
  puStack_50 = ppuVar4[3];
  *(int32_t *)(ppuVar4 + 2) = 0;
  ppuVar4[1] = (void *)0x0;
  ppuVar4[3] = (void *)0x0;
  if (bVar8) {
    puStack_88 = &unknown_var_3456_ptr;
    if (puStack_80 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_80 = (int32_t *)0x0;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    puStack_88 = &unknown_var_720_ptr;
    ppuVar4 = (void **)0x0;
  }
  if (!bVar8) {
    puStack_48 = &unknown_var_3456_ptr;
    if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_40 = 0;
    uStack_30 = 0;
    puStack_48 = &unknown_var_720_ptr;
    ppuVar4 = (void **)0x0;
  }
  puVar6 = &system_buffer_ptr;
  if (puVar2 != (void *)0x0) {
    puVar6 = puVar2;
  }
  FUN_1801ca670(ppuVar4,puVar6);
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3456_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  iVar7 = *(int *)(param_2 + 2) + 0x21;
  FUN_1806277c0(param_2,iVar7);
  puVar5 = (int32_t *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]);
  *puVar5 = 0x656e6f44;
  puVar5[1] = 0x6f43202e;
  puVar5[2] = 0x6e69626d;
  puVar5[3] = 0x6f697461;
  puVar5[4] = 0x7320736e;
  puVar5[5] = 0x64657661;
  puVar5[6] = 0x206f7420;
  puVar5[7] = 0x656c6966;
  *(int16_t *)(puVar5 + 8) = 0x20;
  *(int *)(param_2 + 2) = iVar7;
  if (0 < iVar1) {
    FUN_1806277c0(param_2,iVar7 + iVar1);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_2 + 2) + param_2[1],puVar2,(longlong)(iVar1 + 1));
  }
  puStack_68 = &unknown_var_3456_ptr;
  if (puVar2 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180168430(uint64_t param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4)

{
  longlong lVar1;
  uint64_t *puVar2;
  
  lVar1 = *param_4;
  if ((((param_4[1] - lVar1 >> 5 == 0) || (*(int *)(lVar1 + 0x10) != 1)) ||
      (**(char **)(lVar1 + 8) != '0')) || ((*(char **)(lVar1 + 8))[1] != '\0')) {
    *(int8_t *)(_DAT_180c8a9d0 + 0x1f0) = 1;
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x19,0,param_4,0,0xfffffffffffffffe);
    puVar2 = (uint64_t *)param_2[1];
    *puVar2 = 0x206574696e617247;
    puVar2[1] = 0x6e696d6165727473;
    puVar2[2] = 0x6465737561702067;
    *(int16_t *)(puVar2 + 3) = 0x2e;
    *(int32_t *)(param_2 + 2) = 0x19;
  }
  else {
    *(int8_t *)(_DAT_180c8a9d0 + 0x1f0) = 0;
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x1c,0,param_4,0,0xfffffffffffffffe);
    puVar2 = (uint64_t *)param_2[1];
    *puVar2 = 0x206574696e617247;
    puVar2[1] = 0x6e696d6165727473;
    puVar2[2] = 0x7561702d6e752067;
    *(int32_t *)(puVar2 + 3) = 0x2e646573;
    *(int8_t *)((longlong)puVar2 + 0x1c) = 0;
    *(int32_t *)(param_2 + 2) = 0x1c;
  }
  return param_2;
}



uint64_t *
FUN_180168590(uint64_t param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  
  lVar1 = param_4[1];
  lVar2 = *param_4;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_720_ptr;
  if ((ulonglong)(lVar1 - lVar2 >> 5) < 2) {
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x14,param_3,param_4,0,0xfffffffffffffffe);
    puVar4 = (uint64_t *)param_2[1];
    *puVar4 = 0x777420736465654e;
    puVar4[1] = 0x656d75677261206f;
    *(int32_t *)(puVar4 + 2) = 0x2e73746e;
    *(int8_t *)((longlong)puVar4 + 0x14) = 0;
    *(int32_t *)(param_2 + 2) = 0x14;
  }
  else {
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,4,param_3,param_4,0,0xfffffffffffffffe);
    puVar3 = (int32_t *)param_2[1];
    *puVar3 = 0x656e6f44;
    *(int8_t *)(puVar3 + 1) = 0;
    *(int32_t *)(param_2 + 2) = 4;
  }
  return param_2;
}



uint64_t *
FUN_180168670(uint64_t param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4)

{
  longlong lVar1;
  int32_t *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  void *puStack_48;
  ulonglong uStack_40;
  uint uStack_38;
  uint64_t uStack_30;
  ulonglong uVar5;
  
  uVar5 = 0;
  puStack_48 = &unknown_var_3456_ptr;
  uStack_30 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  lVar8 = param_4[1];
  lVar3 = *param_4;
  uVar6 = uVar5;
  uVar7 = uVar5;
  uVar9 = uVar5;
  uVar10 = uVar5;
  if (lVar8 - lVar3 >> 5 != 0) {
    do {
      lVar1 = uVar10 + lVar3;
      if (0 < *(int *)(lVar1 + 0x10)) {
        FUN_1806277c0(&puStack_48,(int)uVar5 + *(int *)(lVar1 + 0x10));
                    // WARNING: Subroutine does not return
        memcpy(uStack_38 + uStack_40,*(uint64_t *)(lVar1 + 8),
               (longlong)(*(int *)(lVar1 + 0x10) + 1));
      }
      if (uVar6 != (lVar8 - lVar3 >> 5) - 1U) {
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        FUN_1806277c0(&puStack_48,uVar5);
        *(int16_t *)(uStack_38 + uStack_40) = 0x20;
        lVar8 = param_4[1];
        lVar3 = *param_4;
        uVar7 = uStack_40;
        uStack_38 = uVar4;
      }
      uVar4 = (int)uVar9 + 1;
      uVar6 = (longlong)(int)uVar4;
      uVar9 = (ulonglong)uVar4;
      uVar10 = uVar10 + 0x20;
    } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(lVar8 - lVar3 >> 5));
  }
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3456_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,4);
  puVar2 = (int32_t *)param_2[1];
  *puVar2 = 0x656e6f44;
  *(int8_t *)(puVar2 + 1) = 0;
  *(int32_t *)(param_2 + 2) = 4;
  puStack_48 = &unknown_var_3456_ptr;
  if (uVar7 == 0) {
    return param_2;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(uVar7);
}



uint64_t *
FUN_180168840(uint64_t param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  uint uVar3;
  int32_t extraout_XMM0_Da;
  
  uVar3 = atoi(*(uint64_t *)(*param_4 + 8));
  if (uVar3 < 5) {
    FUN_180100ff0(extraout_XMM0_Da,uVar3);
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,4);
    puVar1 = (int32_t *)param_2[1];
    *puVar1 = 0x656e6f44;
    *(int8_t *)(puVar1 + 1) = 0;
    *(int32_t *)(param_2 + 2) = 4;
  }
  else {
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x43);
    puVar2 = (uint64_t *)param_2[1];
    *puVar2 = 0x3a736e6f6974704f;
    puVar2[1] = 0x726556202d203020;
    puVar2[2] = 0x31202c776f4c2079;
    puVar2[3] = 0x202c776f4c202d20;
    puVar2[4] = 0x6964654d202d2032;
    puVar2[5] = 0x202d2033202c6d75;
    puVar2[6] = 0x2034202c68676948;
    puVar2[7] = 0x482079726556202d;
    *(int32_t *)(puVar2 + 8) = 0x686769;
    *(int32_t *)(param_2 + 2) = 0x43;
  }
  return param_2;
}



uint64_t *
FUN_180168960(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint64_t *puStack_38;
  uint64_t *puStack_30;
  
  uVar4 = 0;
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3456_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  FUN_18016a6c0(*param_1,&puStack_38,param_3,param_4,1,0xfffffffffffffffe);
  FUN_18016d200(puStack_38,puStack_30,0);
  uVar5 = uVar4;
  puVar1 = puStack_38;
  if ((longlong)puStack_30 - (longlong)puStack_38 >> 5 != 0) {
    do {
      iVar2 = *(int *)(uVar5 + 0x10 + (longlong)puStack_38);
      if (0 < iVar2) {
        FUN_1806277c0(param_2,*(int *)(param_2 + 2) + iVar2);
                    // WARNING: Subroutine does not return
        memcpy((ulonglong)*(uint *)(param_2 + 2) + param_2[1],
               *(uint64_t *)(uVar5 + 8 + (longlong)puStack_38),
               (longlong)(*(int *)(uVar5 + 0x10 + (longlong)puStack_38) + 1));
      }
      iVar2 = *(int *)(param_2 + 2) + 1;
      FUN_1806277c0(param_2,iVar2);
      *(int16_t *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]) = 10;
      *(int *)(param_2 + 2) = iVar2;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar5 = uVar5 + 0x20;
      puVar1 = puStack_38;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)((longlong)puStack_30 - (longlong)puStack_38 >> 5));
  }
  for (; puVar1 != puStack_30; puVar1 = puVar1 + 4) {
    (**(code **)*puVar1)(puVar1,0);
  }
  if (puStack_38 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return param_2;
}





