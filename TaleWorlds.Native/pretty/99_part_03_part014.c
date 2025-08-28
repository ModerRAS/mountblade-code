#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part014.c - 4 个函数

// 函数: void FUN_1801d83e0(uint64_t param_1,int64_t param_2)
void FUN_1801d83e0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  char cVar2;
  int64_t lVar3;
  int64_t lVar4;
  bool bVar5;
  int8_t auStack_108 [32];
  uint64_t uStack_e8;
  int8_t auStack_d8 [96];
  int8_t auStack_78 [32];
  int8_t auStack_58 [32];
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  uint64_t uStack_28;
  
  uVar1 = system_global_data_ptr;
  uStack_e8 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_108;
  bVar5 = true;
  if ((*(byte *)(param_2 + 0xa8) & 1) != 0) {
    FUN_18009e8e0(auStack_d8);
    FUN_180627ae0(auStack_78,param_2 + 0x60);
    FUN_180627ae0(auStack_58,param_2 + 0x80);
    uStack_38 = *(int32_t *)(param_2 + 0xa0);
    uStack_30 = *(int32_t *)(param_2 + 0xa8);
    uStack_34 = 0;
    cVar2 = FUN_1801d8740(uVar1,auStack_d8);
    bVar5 = cVar2 != '\0';
    FUN_1801c92a0(auStack_d8);
    if (!bVar5) goto LAB_1801d84a2;
  }
  lVar3 = param_2 + 0x60;
  if ((*(byte *)(param_2 + 0xa8) & 4) != 0) {
    FUN_18009e8e0(auStack_d8,param_2);
    FUN_180627ae0(auStack_78,lVar3);
    FUN_180627ae0(auStack_58,param_2 + 0x80);
    uStack_38 = *(int32_t *)(param_2 + 0xa0);
    uStack_30 = *(int32_t *)(param_2 + 0xa8);
    uStack_34 = 3;
    cVar2 = FUN_1801d8740(uVar1,auStack_d8);
    bVar5 = cVar2 != '\0';
    FUN_1801c92a0(auStack_d8);
  }
  lVar4 = param_2 + 0x80;
  if (bVar5) {
    if ((*(byte *)(param_2 + 0xa8) & 2) != 0) {
      FUN_18009e8e0(auStack_d8,param_2);
      FUN_180627ae0(auStack_78,lVar3);
      FUN_180627ae0(auStack_58,lVar4);
      uStack_38 = *(int32_t *)(param_2 + 0xa0);
      uStack_30 = *(int32_t *)(param_2 + 0xa8);
      uStack_34 = 2;
      cVar2 = FUN_1801d8740(uVar1,auStack_d8);
      bVar5 = cVar2 != '\0';
      FUN_1801c92a0(auStack_d8);
    }
    if (bVar5) {
      if ((*(byte *)(param_2 + 0xa8) & 8) != 0) {
        FUN_18009e8e0(auStack_d8,param_2);
        FUN_180627ae0(auStack_78,lVar3);
        FUN_180627ae0(auStack_58,lVar4);
        uStack_38 = *(int32_t *)(param_2 + 0xa0);
        uStack_30 = *(int32_t *)(param_2 + 0xa8);
        uStack_34 = 5;
        cVar2 = FUN_1801d8740(uVar1,auStack_d8);
        bVar5 = cVar2 != '\0';
        FUN_1801c92a0(auStack_d8);
      }
      if (bVar5) {
        if ((*(byte *)(param_2 + 0xa8) & 0x10) != 0) {
          FUN_18009e8e0(auStack_d8,param_2);
          FUN_180627ae0(auStack_78,lVar3);
          FUN_180627ae0(auStack_58,lVar4);
          uStack_38 = *(int32_t *)(param_2 + 0xa0);
          uStack_30 = *(int32_t *)(param_2 + 0xa8);
          uStack_34 = 1;
          cVar2 = FUN_1801d8740(uVar1,auStack_d8);
          bVar5 = cVar2 != '\0';
          FUN_1801c92a0(auStack_d8);
        }
        if ((bVar5) && ((*(byte *)(param_2 + 0xa8) & 0x20) != 0)) {
          FUN_18009e8e0(auStack_d8,param_2);
          FUN_180627ae0(auStack_78,param_2 + 0x60);
          FUN_180627ae0(auStack_58,lVar4);
          uStack_38 = *(int32_t *)(param_2 + 0xa0);
          uStack_30 = *(int32_t *)(param_2 + 0xa8);
          uStack_34 = 4;
          FUN_1801d8740(uVar1,auStack_d8);
          FUN_1801c92a0(auStack_d8);
        }
      }
    }
  }
LAB_1801d84a2:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_108);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d8740(int64_t param_1,int64_t *param_2)
void FUN_1801d8740(int64_t param_1,int64_t *param_2)

{
  char cVar1;
  char *pcVar2;
  int64_t lVar3;
  int8_t auStack_78 [32];
  int8_t auStack_58 [8];
  int64_t lStack_50;
  int8_t uStack_48;
  uint64_t uStack_40;
  int iStack_38;
  int32_t uStack_34;
  int64_t lStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int8_t uStack_20;
  int32_t uStack_1c;
  uint64_t uStack_18;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_78;
  if (param_2[4] == 0) {
    pcVar2 = "";
    if (*(char **)(*param_2 + 0x18) != (char *)0x0) {
      pcVar2 = *(char **)(*param_2 + 0x18);
    }
    iStack_38 = 0x1505;
    cVar1 = *pcVar2;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      iStack_38 = iStack_38 * 0x21 + (int)cVar1;
      cVar1 = *pcVar2;
    }
    uStack_34 = (int32_t)((uint64_t)param_2[1] >> 0x20);
    lStack_30 = CONCAT44((int)param_2[2],(int)param_2[1]);
    uStack_28._0_3_ =
         CONCAT12(*(int8_t *)((int64_t)param_2 + 0xa4),
                  *(int16_t *)((int64_t)param_2 + 0x14));
    lVar3 = *(int64_t *)(param_1 + 0x50) + 0x360;
    uStack_48 = 1;
    lStack_50 = lVar3;
    AcquireSRWLockShared(lVar3);
    FUN_1801e6940(*(uint64_t *)(*(int64_t *)(param_1 + 0x50) + 0x318),auStack_58,&iStack_38);
  }
  else {
    pcVar2 = "";
    if (*(char **)(*param_2 + 0x18) != (char *)0x0) {
      pcVar2 = *(char **)(*param_2 + 0x18);
    }
    iStack_38 = 0x1505;
    cVar1 = *pcVar2;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      iStack_38 = iStack_38 * 0x21 + (int)cVar1;
      cVar1 = *pcVar2;
    }
    lStack_30 = param_2[1];
    uStack_28 = (int32_t)param_2[2];
    uStack_24 = *(int32_t *)((int64_t)param_2 + 0x14);
    uStack_20 = *(int8_t *)((int64_t)param_2 + 0xa4);
    uStack_1c = (int32_t)param_2[0x14];
    lVar3 = param_2[4] + 0x360;
    uStack_48 = 1;
    lStack_50 = lVar3;
    AcquireSRWLockShared(lVar3);
    FUN_1801e1020(param_2[4] + 0x328,auStack_58,&iStack_38);
  }
  ReleaseSRWLockShared(lVar3);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_78);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d8920(uint64_t param_1,int64_t param_2)
void FUN_1801d8920(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  char cVar2;
  int64_t lVar3;
  int64_t lVar4;
  bool bVar5;
  int8_t auStack_108 [32];
  uint64_t uStack_e8;
  int8_t auStack_d8 [96];
  int8_t auStack_78 [32];
  int8_t auStack_58 [32];
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  uint64_t uStack_28;
  
  uVar1 = system_global_data_ptr;
  uStack_e8 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_108;
  bVar5 = true;
  if ((*(byte *)(param_2 + 0xa8) & 1) != 0) {
    FUN_18009e8e0(auStack_d8);
    FUN_180627ae0(auStack_78,param_2 + 0x60);
    FUN_180627ae0(auStack_58,param_2 + 0x80);
    uStack_38 = *(int32_t *)(param_2 + 0xa0);
    uStack_30 = *(int32_t *)(param_2 + 0xa8);
    uStack_34 = 0;
    cVar2 = FUN_1801d8c80(uVar1,auStack_d8);
    bVar5 = cVar2 != '\0';
    FUN_1801c92a0(auStack_d8);
    if (!bVar5) goto LAB_1801d89e2;
  }
  lVar3 = param_2 + 0x60;
  if ((*(byte *)(param_2 + 0xa8) & 4) != 0) {
    FUN_18009e8e0(auStack_d8,param_2);
    FUN_180627ae0(auStack_78,lVar3);
    FUN_180627ae0(auStack_58,param_2 + 0x80);
    uStack_38 = *(int32_t *)(param_2 + 0xa0);
    uStack_30 = *(int32_t *)(param_2 + 0xa8);
    uStack_34 = 3;
    cVar2 = FUN_1801d8c80(uVar1,auStack_d8);
    bVar5 = cVar2 != '\0';
    FUN_1801c92a0(auStack_d8);
  }
  lVar4 = param_2 + 0x80;
  if (bVar5) {
    if ((*(byte *)(param_2 + 0xa8) & 2) != 0) {
      FUN_18009e8e0(auStack_d8,param_2);
      FUN_180627ae0(auStack_78,lVar3);
      FUN_180627ae0(auStack_58,lVar4);
      uStack_38 = *(int32_t *)(param_2 + 0xa0);
      uStack_30 = *(int32_t *)(param_2 + 0xa8);
      uStack_34 = 2;
      cVar2 = FUN_1801d8c80(uVar1,auStack_d8);
      bVar5 = cVar2 != '\0';
      FUN_1801c92a0(auStack_d8);
    }
    if (bVar5) {
      if ((*(byte *)(param_2 + 0xa8) & 8) != 0) {
        FUN_18009e8e0(auStack_d8,param_2);
        FUN_180627ae0(auStack_78,lVar3);
        FUN_180627ae0(auStack_58,lVar4);
        uStack_38 = *(int32_t *)(param_2 + 0xa0);
        uStack_30 = *(int32_t *)(param_2 + 0xa8);
        uStack_34 = 5;
        cVar2 = FUN_1801d8c80(uVar1,auStack_d8);
        bVar5 = cVar2 != '\0';
        FUN_1801c92a0(auStack_d8);
      }
      if (bVar5) {
        if ((*(byte *)(param_2 + 0xa8) & 0x10) != 0) {
          FUN_18009e8e0(auStack_d8,param_2);
          FUN_180627ae0(auStack_78,lVar3);
          FUN_180627ae0(auStack_58,lVar4);
          uStack_38 = *(int32_t *)(param_2 + 0xa0);
          uStack_30 = *(int32_t *)(param_2 + 0xa8);
          uStack_34 = 1;
          cVar2 = FUN_1801d8c80(uVar1,auStack_d8);
          bVar5 = cVar2 != '\0';
          FUN_1801c92a0(auStack_d8);
        }
        if ((bVar5) && ((*(byte *)(param_2 + 0xa8) & 0x20) != 0)) {
          FUN_18009e8e0(auStack_d8,param_2);
          FUN_180627ae0(auStack_78,param_2 + 0x60);
          FUN_180627ae0(auStack_58,lVar4);
          uStack_38 = *(int32_t *)(param_2 + 0xa0);
          uStack_30 = *(int32_t *)(param_2 + 0xa8);
          uStack_34 = 4;
          FUN_1801d8c80(uVar1,auStack_d8);
          FUN_1801c92a0(auStack_d8);
        }
      }
    }
  }
LAB_1801d89e2:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_108);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d8c80(int64_t param_1,int64_t *param_2)
void FUN_1801d8c80(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  char *pcVar3;
  int64_t lVar4;
  int8_t auStack_78 [32];
  int8_t auStack_58 [8];
  int64_t lStack_50;
  int8_t uStack_48;
  uint64_t uStack_40;
  int iStack_38;
  int32_t uStack_34;
  int64_t lStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int8_t uStack_20;
  int32_t uStack_1c;
  uint64_t uStack_18;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_78;
  lVar4 = param_2[4];
  if (lVar4 == 0) {
    if (*(char *)(*(int64_t *)(param_1 + 0x50) + 0x358) != '\0') {
      pcVar3 = "";
      if (*(char **)(*param_2 + 0x18) != (char *)0x0) {
        pcVar3 = *(char **)(*param_2 + 0x18);
      }
      iStack_38 = 0x1505;
      cVar2 = *pcVar3;
      while (cVar2 != '\0') {
        pcVar3 = pcVar3 + 1;
        iStack_38 = iStack_38 * 0x21 + (int)cVar2;
        cVar2 = *pcVar3;
      }
      uStack_34 = (int32_t)((uint64_t)param_2[1] >> 0x20);
      lStack_30 = CONCAT44((int)param_2[2],(int)param_2[1]);
      uStack_28._0_3_ =
           CONCAT12(*(int8_t *)((int64_t)param_2 + 0xa4),
                    *(int16_t *)((int64_t)param_2 + 0x14));
      lVar4 = *(int64_t *)(param_1 + 0x50) + 0x360;
      uStack_48 = 1;
      lStack_50 = lVar4;
      AcquireSRWLockShared(lVar4);
      FUN_1801e6940(*(uint64_t *)(*(int64_t *)(param_1 + 0x50) + 0x318),auStack_58,&iStack_38);
      ReleaseSRWLockShared(lVar4);
    }
  }
  else if (*(char *)(lVar4 + 0x358) != '\0') {
    pcVar3 = "";
    if (*(char **)(*param_2 + 0x18) != (char *)0x0) {
      pcVar3 = *(char **)(*param_2 + 0x18);
    }
    iStack_38 = 0x1505;
    cVar2 = *pcVar3;
    while (cVar2 != '\0') {
      pcVar3 = pcVar3 + 1;
      iStack_38 = iStack_38 * 0x21 + (int)cVar2;
      cVar2 = *pcVar3;
    }
    lStack_30 = param_2[1];
    uStack_28 = (int32_t)param_2[2];
    uStack_24 = *(int32_t *)((int64_t)param_2 + 0x14);
    uStack_20 = *(int8_t *)((int64_t)param_2 + 0xa4);
    uStack_1c = (int32_t)param_2[0x14];
    lVar1 = lVar4 + 0x360;
    uStack_48 = 1;
    lStack_50 = lVar1;
    AcquireSRWLockShared(lVar1);
    FUN_1801e1020(lVar4 + 0x328,auStack_58,&iStack_38);
    ReleaseSRWLockShared(lVar1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_78);
}



// WARNING: Removing unreachable block (ram,0x0001801d8f73)
// WARNING: Removing unreachable block (ram,0x0001801d8f79)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




