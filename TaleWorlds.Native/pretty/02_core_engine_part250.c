#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part250.c - 21 个函数

// 函数: void FUN_180216250(uint64_t param_1,uint64_t *param_2,int32_t param_3)
void FUN_180216250(uint64_t param_1,uint64_t *param_2,int32_t param_3)

{
  int8_t *puVar1;
  longlong lVar2;
  uint64_t uVar3;
  ulonglong uVar4;
  int8_t auStack_268 [32];
  int32_t uStack_248;
  int8_t auStack_244 [4];
  uint64_t uStack_240;
  uint64_t *puStack_238;
  char acStack_228 [512];
  ulonglong uStack_28;
  ulonglong uVar5;
  
  uStack_240 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_268;
  uStack_248 = 0;
  puStack_238 = param_2;
  lVar2 = FUN_180213700(param_1,param_3,0);
  if (lVar2 == 0) {
    uVar3 = FUN_180628ca0();
    FUN_180627ae0(param_2,uVar3);
  }
  else {
    FUN_180846610(lVar2,acStack_228,0x200,auStack_244);
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    uVar4 = 0xffffffffffffffff;
    do {
      uVar5 = uVar4;
      uVar4 = uVar5 + 1;
    } while (acStack_228[uVar5 + 1] != '\0');
    FUN_1806277c0(param_2,uVar4 & 0xffffffff);
    puVar1 = (int8_t *)param_2[1];
    if ((int)uVar4 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar1,acStack_228,(int)uVar5 + 2);
    }
    *(int32_t *)(param_2 + 2) = 0;
    if (puVar1 != (int8_t *)0x0) {
      *puVar1 = 0;
    }
  }
  uStack_248 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_268);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_180216360(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  uint uVar1;
  longlong lVar2;
  int32_t *puVar3;
  int iVar4;
  int32_t extraout_XMM0_Da;
  void *puStack_40;
  int32_t *puStack_38;
  uint uStack_30;
  uint64_t uStack_28;
  
  if ((*(char *)(param_1 + 0x210) != '\0') || (*(int *)(_DAT_180c8a9c8 + 0xb60) != 1)) {
    return false;
  }
  puStack_40 = (void *)0x18021639b;
  lVar2 = FUN_180213920();
  puStack_40 = (void *)0x1802163a9;
  FUN_1802164f0(extraout_XMM0_Da,lVar2,param_3);
  if (lVar2 == 0) {
    puStack_40 = (void *)0x180216404;
    FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3);
    return false;
  }
  if (*(int *)(_DAT_180c8a9c8 + 0x9a0) == 0) goto LAB_18040698e;
  puStack_40 = &UNK_180a3c3e0;
  uStack_28 = 0;
  puStack_38 = (int32_t *)0x0;
  uStack_30 = 0;
  puStack_38 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x22,0x13);
  *(int8_t *)puStack_38 = 0;
  uVar1 = FUN_18064e990(puStack_38);
  *puStack_38 = 0x53203e20;
  puStack_38[1] = 0x444e554f;
  puStack_38[2] = 0x74533e20;
  puStack_38[3] = 0x20747261;
  puStack_38[4] = 0x6e657665;
  puStack_38[5] = 0x69772074;
  puStack_38[6] = 0x68206874;
  puStack_38[7] = 0x6c646e61;
  *(int16_t *)(puStack_38 + 8) = 0x65;
  uStack_30 = 0x21;
  uStack_28._0_4_ = uVar1;
  FUN_180628570(&puStack_40,lVar2);
  iVar4 = uStack_30 + 1;
  if (iVar4 != 0) {
    uVar1 = uStack_30 + 2;
    if (puStack_38 == (int32_t *)0x0) {
      if ((int)uVar1 < 0x10) {
        uVar1 = 0x10;
      }
      puStack_38 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar1,0x13);
      *(int8_t *)puStack_38 = 0;
    }
    else {
      if (uVar1 <= (uint)uStack_28) goto LAB_180406929;
      puStack_38 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_38,uVar1,0x10,0x13);
    }
    uStack_28._0_4_ = FUN_18064e990(puStack_38);
  }
LAB_180406929:
  *(int16_t *)((ulonglong)uStack_30 + (longlong)puStack_38) = 10;
  puVar3 = (int32_t *)&DAT_18098bc73;
  if (puStack_38 != (int32_t *)0x0) {
    puVar3 = puStack_38;
  }
  uStack_30 = iVar4;
  FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3,puVar3);
  puStack_40 = &UNK_180a3c3e0;
  if (puStack_38 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_38 = (int32_t *)0x0;
  uStack_28 = (ulonglong)uStack_28._4_4_ << 0x20;
  puStack_40 = &UNK_18098bcb0;
LAB_18040698e:
  iVar4 = FUN_18084acb0(lVar2);
  FUN_180211a30(iVar4,&UNK_180a27158);
  return iVar4 == 0;
}



// WARNING: Removing unreachable block (ram,0x000180406901)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_180216391(void)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int32_t extraout_XMM0_Da;
  void *puStack_8;
  
  puStack_8 = (void *)0x18021639b;
  lVar3 = FUN_180213920();
  puStack_8 = (void *)0x1802163a9;
  FUN_1802164f0(extraout_XMM0_Da,lVar3);
  if (lVar3 == 0) {
    puStack_8 = (void *)0x180216404;
    FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3,&UNK_180a10960);
    return false;
  }
  if (*(int *)(_DAT_180c8a9c8 + 0x9a0) == 0) goto LAB_18040698e;
  puStack_8 = &UNK_180a3c3e0;
  puVar4 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x22,0x13);
  *(int8_t *)puVar4 = 0;
  uVar1 = FUN_18064e990(puVar4);
  *puVar4 = 0x53203e20;
  puVar4[1] = 0x444e554f;
  puVar4[2] = 0x74533e20;
  puVar4[3] = 0x20747261;
  puVar4[4] = 0x6e657665;
  puVar4[5] = 0x69772074;
  puVar4[6] = 0x68206874;
  puVar4[7] = 0x6c646e61;
  *(int16_t *)(puVar4 + 8) = 0x65;
  FUN_180628570(&puStack_8,lVar3);
  if (puVar4 == (int32_t *)0x0) {
    puVar4 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x23,0x13);
    *(int8_t *)puVar4 = 0;
LAB_180406921:
    FUN_18064e990(puVar4);
  }
  else if (uVar1 < 0x23) {
    puVar4 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar4,0x23,0x10,0x13);
    goto LAB_180406921;
  }
  *(int16_t *)((longlong)puVar4 + 0x21) = 10;
  puVar5 = (int32_t *)&DAT_18098bc73;
  if (puVar4 != (int32_t *)0x0) {
    puVar5 = puVar4;
  }
  FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3,puVar5);
  puStack_8 = &UNK_180a3c3e0;
  if (puVar4 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_8 = &UNK_18098bcb0;
LAB_18040698e:
  iVar2 = FUN_18084acb0(lVar3);
  FUN_180211a30(iVar2,&UNK_180a27158);
  return iVar2 == 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1802163c5(void)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  void *puStack0000000000000028;
  
  puStack0000000000000028 = &DAT_18098bc73;
  if (*(void **)(unaff_RDI + 8) != (void *)0x0) {
    puStack0000000000000028 = *(void **)(unaff_RDI + 8);
  }
  uVar1 = FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3,&UNK_180a10960);
  return uVar1 & 0xffffffffffffff00;
}



int8_t FUN_180216416(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_180216430(longlong param_1,int param_2,uint64_t param_3)

{
  uint uVar1;
  longlong lVar2;
  int32_t *puVar3;
  int iVar4;
  int32_t extraout_XMM0_Da;
  void *puStack_40;
  int32_t *puStack_38;
  uint uStack_30;
  uint64_t uStack_28;
  
  if (((param_2 < 0) || (*(char *)(param_1 + 0x210) != '\0')) ||
     (*(int *)(_DAT_180c8a9c8 + 0xb60) != 1)) {
    return false;
  }
  puStack_40 = (void *)0x18021646e;
  lVar2 = FUN_180213bb0();
  puStack_40 = (void *)0x18021647c;
  FUN_1802164f0(extraout_XMM0_Da,lVar2,param_3);
  if (lVar2 == 0) {
    puStack_40 = (void *)0x1802164c4;
    FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3);
    return false;
  }
  if (*(int *)(_DAT_180c8a9c8 + 0x9a0) == 0) goto LAB_18040698e;
  puStack_40 = &UNK_180a3c3e0;
  uStack_28 = 0;
  puStack_38 = (int32_t *)0x0;
  uStack_30 = 0;
  puStack_38 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x22,0x13);
  *(int8_t *)puStack_38 = 0;
  uVar1 = FUN_18064e990(puStack_38);
  *puStack_38 = 0x53203e20;
  puStack_38[1] = 0x444e554f;
  puStack_38[2] = 0x74533e20;
  puStack_38[3] = 0x20747261;
  puStack_38[4] = 0x6e657665;
  puStack_38[5] = 0x69772074;
  puStack_38[6] = 0x68206874;
  puStack_38[7] = 0x6c646e61;
  *(int16_t *)(puStack_38 + 8) = 0x65;
  uStack_30 = 0x21;
  uStack_28._0_4_ = uVar1;
  FUN_180628570(&puStack_40,lVar2);
  iVar4 = uStack_30 + 1;
  if (iVar4 != 0) {
    uVar1 = uStack_30 + 2;
    if (puStack_38 == (int32_t *)0x0) {
      if ((int)uVar1 < 0x10) {
        uVar1 = 0x10;
      }
      puStack_38 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar1,0x13);
      *(int8_t *)puStack_38 = 0;
    }
    else {
      if (uVar1 <= (uint)uStack_28) goto LAB_180406929;
      puStack_38 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_38,uVar1,0x10,0x13);
    }
    uStack_28._0_4_ = FUN_18064e990(puStack_38);
  }
LAB_180406929:
  *(int16_t *)((ulonglong)uStack_30 + (longlong)puStack_38) = 10;
  puVar3 = (int32_t *)&DAT_18098bc73;
  if (puStack_38 != (int32_t *)0x0) {
    puVar3 = puStack_38;
  }
  uStack_30 = iVar4;
  FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3,puVar3);
  puStack_40 = &UNK_180a3c3e0;
  if (puStack_38 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_38 = (int32_t *)0x0;
  uStack_28 = (ulonglong)uStack_28._4_4_ << 0x20;
  puStack_40 = &UNK_18098bcb0;
LAB_18040698e:
  iVar4 = FUN_18084acb0(lVar2);
  FUN_180211a30(iVar4,&UNK_180a27158);
  return iVar4 == 0;
}



// WARNING: Removing unreachable block (ram,0x000180406901)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_180216464(void)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int32_t extraout_XMM0_Da;
  void *puStack_8;
  
  puStack_8 = (void *)0x18021646e;
  lVar3 = FUN_180213bb0();
  puStack_8 = (void *)0x18021647c;
  FUN_1802164f0(extraout_XMM0_Da,lVar3);
  if (lVar3 == 0) {
    puStack_8 = (void *)0x1802164c4;
    FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3,&UNK_180a10a20);
    return false;
  }
  if (*(int *)(_DAT_180c8a9c8 + 0x9a0) == 0) goto LAB_18040698e;
  puStack_8 = &UNK_180a3c3e0;
  puVar4 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x22,0x13);
  *(int8_t *)puVar4 = 0;
  uVar1 = FUN_18064e990(puVar4);
  *puVar4 = 0x53203e20;
  puVar4[1] = 0x444e554f;
  puVar4[2] = 0x74533e20;
  puVar4[3] = 0x20747261;
  puVar4[4] = 0x6e657665;
  puVar4[5] = 0x69772074;
  puVar4[6] = 0x68206874;
  puVar4[7] = 0x6c646e61;
  *(int16_t *)(puVar4 + 8) = 0x65;
  FUN_180628570(&puStack_8,lVar3);
  if (puVar4 == (int32_t *)0x0) {
    puVar4 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x23,0x13);
    *(int8_t *)puVar4 = 0;
LAB_180406921:
    FUN_18064e990(puVar4);
  }
  else if (uVar1 < 0x23) {
    puVar4 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar4,0x23,0x10,0x13);
    goto LAB_180406921;
  }
  *(int16_t *)((longlong)puVar4 + 0x21) = 10;
  puVar5 = (int32_t *)&DAT_18098bc73;
  if (puVar4 != (int32_t *)0x0) {
    puVar5 = puVar4;
  }
  FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3,puVar5);
  puStack_8 = &UNK_180a3c3e0;
  if (puVar4 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_8 = &UNK_18098bcb0;
LAB_18040698e:
  iVar2 = FUN_18084acb0(lVar3);
  FUN_180211a30(iVar2,&UNK_180a27158);
  return iVar2 == 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180216498(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3,&UNK_180a10a20);
  return uVar1 & 0xffffffffffffff00;
}



int8_t FUN_1802164d6(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802164f0(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_1802164f0(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  int32_t uVar1;
  uint64_t *puVar2;
  void *puVar3;
  int32_t *puVar4;
  int iVar5;
  
  if ((param_3 != 0) && (iVar5 = 0, 0 < *(int *)(param_3 + 0xc0))) {
    puVar4 = (int32_t *)(param_3 + 0x24);
    do {
      uVar1 = *puVar4;
      if ((int)puVar4[-1] < 0) {
        puVar3 = &DAT_18098bc73;
        if (*(void **)(puVar4 + -7) != (void *)0x0) {
          puVar3 = *(void **)(puVar4 + -7);
        }
        FUN_180849d40(param_2,puVar3,uVar1);
      }
      else {
        puVar2 = (uint64_t *)(**(code **)(*_DAT_180c86878 + 0x1f8))();
        FUN_180849bb0(param_2,*puVar2,uVar1,0);
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 0xc;
    } while (iVar5 < *(int *)(param_3 + 0xc0));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180216508(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_180216508(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  int32_t uVar1;
  uint64_t *puVar2;
  void *puVar3;
  int32_t *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)(param_3 + 0xc0)) {
    puVar4 = (int32_t *)(param_3 + 0x24);
    do {
      uVar1 = *puVar4;
      if ((int)puVar4[-1] < 0) {
        puVar3 = &DAT_18098bc73;
        if (*(void **)(puVar4 + -7) != (void *)0x0) {
          puVar3 = *(void **)(puVar4 + -7);
        }
        FUN_180849d40(param_2,puVar3,uVar1);
      }
      else {
        puVar2 = (uint64_t *)(**(code **)(*_DAT_180c86878 + 0x1f8))();
        FUN_180849bb0(param_2,*puVar2,uVar1,0);
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 0xc;
    } while (iVar5 < *(int *)(param_3 + 0xc0));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180216522(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_180216522(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  longlong unaff_RSI;
  int unaff_EDI;
  
  param_3 = param_3 + 0x24;
  do {
    if (*(int *)(param_3 + -4) < 0) {
      FUN_180849d40();
    }
    else {
      (**(code **)(*_DAT_180c86878 + 0x1f8))();
      FUN_180849bb0();
    }
    unaff_EDI = unaff_EDI + 1;
    param_3 = param_3 + 0x30;
  } while (unaff_EDI < *(int *)(unaff_RSI + 0xc0));
  return;
}





// 函数: void FUN_1802165a5(void)
void FUN_1802165a5(void)

{
  return;
}





// 函数: void FUN_1802165b4(void)
void FUN_1802165b4(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802165c0(longlong param_1,float param_2)
void FUN_1802165c0(longlong param_1,float param_2)

{
  int iVar1;
  float fVar2;
  uint64_t auStackX_8 [4];
  
  fVar2 = 0.0;
  if ((0.0 <= param_2) && (fVar2 = param_2, 1.0 <= param_2)) {
    fVar2 = 1.0;
  }
  if (fVar2 != *(float *)(param_1 + 0x200)) {
    FUN_180847310(*(uint64_t *)(param_1 + 0x368),&UNK_180a10a48,auStackX_8);
    iVar1 = FUN_18084ab60(auStackX_8[0],fVar2);
    if (iVar1 != 0) {
      FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3,&UNK_180a109d8);
    }
    *(float *)(param_1 + 0x200) = fVar2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180216650(longlong param_1,float param_2)
void FUN_180216650(longlong param_1,float param_2)

{
  int iVar1;
  float fVar2;
  uint64_t auStackX_8 [4];
  
  fVar2 = 0.0;
  if ((0.0 <= param_2) && (fVar2 = param_2, 1.0 <= param_2)) {
    fVar2 = 1.0;
  }
  if (fVar2 != *(float *)(param_1 + 0x204)) {
    FUN_180847310(*(uint64_t *)(param_1 + 0x368),&UNK_180a10a10,auStackX_8);
    iVar1 = FUN_18084ab60(auStackX_8[0],fVar2);
    if (iVar1 != 0) {
      FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3,&UNK_180a10aa0);
    }
    *(float *)(param_1 + 0x204) = fVar2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802166e0(longlong param_1,float param_2)
void FUN_1802166e0(longlong param_1,float param_2)

{
  int iVar1;
  float fVar2;
  uint64_t auStackX_8 [4];
  
  fVar2 = 0.0;
  if ((0.0 <= param_2) && (fVar2 = param_2, 1.0 <= param_2)) {
    fVar2 = 1.0;
  }
  if (fVar2 != *(float *)(param_1 + 0x208)) {
    FUN_180847310(*(uint64_t *)(param_1 + 0x368),&UNK_180a10ad0,auStackX_8);
    iVar1 = FUN_18084ab60(auStackX_8[0],fVar2);
    if (iVar1 != 0) {
      FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3,&UNK_180a10a58);
    }
    *(float *)(param_1 + 0x208) = fVar2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180216770(longlong param_1,float param_2)
void FUN_180216770(longlong param_1,float param_2)

{
  int iVar1;
  float fVar2;
  uint64_t auStackX_8 [4];
  
  fVar2 = 0.0;
  if ((0.0 <= param_2) && (fVar2 = param_2, 1.0 <= param_2)) {
    fVar2 = 1.0;
  }
  if (fVar2 != *(float *)(param_1 + 0x20c)) {
    FUN_180847310(*(uint64_t *)(param_1 + 0x368),&UNK_180a10a90,auStackX_8);
    iVar1 = FUN_18084ab60(auStackX_8[0],fVar2);
    if (iVar1 != 0) {
      FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3,&UNK_180a10b88);
    }
    *(float *)(param_1 + 0x20c) = fVar2;
  }
  return;
}





// 函数: void FUN_180216800(longlong param_1)
void FUN_180216800(longlong param_1)

{
  uint64_t uStackX_8;
  uint64_t auStackX_10 [3];
  
  FUN_1808451c0(*(uint64_t *)(param_1 + 0x368),&UNK_180a10bc0,&uStackX_8);
  FUN_18084a8c0(uStackX_8,0);
  FUN_1808451c0(*(uint64_t *)(param_1 + 0x368),&UNK_180a10ae0,auStackX_10);
  FUN_18084a8c0(auStackX_10[0],0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180216860(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180216860(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  void *puVar5;
  uint uVar6;
  uint *puVar7;
  int32_t *puVar8;
  ulonglong uVar9;
  int32_t uVar10;
  void *puStack_d0;
  longlong lStack_c8;
  int32_t uStack_c0;
  ulonglong uStack_b8;
  uint64_t uStack_b0;
  longlong lStack_a8;
  uint *puStack_a0;
  uint64_t uStack_98;
  int16_t uStack_90;
  int8_t uStack_8e;
  void *puStack_88;
  longlong lStack_80;
  uint uStack_78;
  int32_t uStack_70;
  void *puStack_68;
  void *puStack_60;
  uint64_t uStack_48;
  longlong lStack_40;
  uint64_t uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  FUN_1801597a0(param_1,&puStack_68,param_3,param_4,0);
  uStack_48 = 0;
  lStack_40 = 0;
  puVar5 = &DAT_18098bc73;
  if (puStack_60 != (void *)0x0) {
    puVar5 = puStack_60;
  }
  uVar10 = FUN_18062dee0(&uStack_48,puVar5,&UNK_180a01ff0);
  lVar2 = lStack_40;
  if (lStack_40 == 0) {
    lVar2 = FUN_1801595d0(uVar10,&puStack_88);
    uVar6 = uStack_78 + 0x13;
    FUN_1806277c0(&puStack_88,uVar6);
    puVar8 = (int32_t *)((ulonglong)uStack_78 + lStack_80);
    *puVar8 = 0x6e756f53;
    puVar8[1] = 0x74614464;
    puVar8[2] = 0x672e7361;
    puVar8[3] = 0x732e6e65;
    puVar8[4] = 0x666465;
    puVar5 = &DAT_18098bc73;
    if (*(void **)(lVar2 + 8) != (void *)0x0) {
      puVar5 = *(void **)(lVar2 + 8);
    }
    uStack_78 = uVar6;
    FUN_180626f80(&UNK_180a10af0,puVar5);
    puStack_88 = &UNK_180a3c3e0;
    if (lStack_80 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_80 = 0;
    uStack_70 = 0;
    puStack_88 = &UNK_18098bcb0;
  }
  else {
    lStack_a8 = 0;
    puStack_a0 = (uint *)0x0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_8e = 3;
    uVar3 = _ftelli64(lStack_40);
    _fseeki64(lVar2,0,2);
    uVar4 = _ftelli64(lVar2);
    _fseeki64(lVar2,uVar3,0);
    FUN_180639bf0(&lStack_a8,uVar4);
    fread(puStack_a0,1,uVar4,lVar2);
    fclose(lVar2);
    lStack_40 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
    uVar6 = *puStack_a0;
    puVar7 = (uint *)((longlong)puStack_a0 + 2);
    puStack_a0 = puVar7;
    if ((ushort)uVar6 != 0) {
      uVar9 = (ulonglong)(ushort)uVar6;
      do {
        puStack_d0 = &UNK_180a3c3e0;
        uStack_b8 = 0;
        lStack_c8 = 0;
        uStack_c0 = 0;
        uStack_b0 = 0;
        uVar6 = *puVar7;
        puVar7 = puVar7 + 1;
        if (uVar6 != 0) {
          puStack_a0 = puVar7;
          FUN_180628f30(&puStack_d0,puVar7,uVar6);
          puVar7 = (uint *)((longlong)puVar7 + (ulonglong)uVar6);
        }
        uStack_b0 = *(uint64_t *)puVar7;
        puVar7 = puVar7 + 2;
        uVar1 = *(ulonglong *)(param_1 + 0x3e0);
        puStack_a0 = puVar7;
        if (uVar1 < *(ulonglong *)(param_1 + 1000)) {
          *(ulonglong *)(param_1 + 0x3e0) = uVar1 + 0x28;
          FUN_180627ae0(uVar1);
          *(uint64_t *)(uVar1 + 0x20) = uStack_b0;
        }
        else {
          FUN_1802195b0(param_1 + 0x3d8,&puStack_d0);
        }
        puStack_d0 = &UNK_180a3c3e0;
        if (lStack_c8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_c8 = 0;
        uStack_b8 = uStack_b8 & 0xffffffff00000000;
        puStack_d0 = &UNK_18098bcb0;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    FUN_1802187b0(param_1 + 0x3d8);
    if (((char)uStack_90 == '\0') && (lStack_a8 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  puStack_68 = &UNK_180a3c3e0;
  if (puStack_60 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_180216bb0(longlong param_1,int param_2,uint64_t param_3)
void FUN_180216bb0(longlong param_1,int param_2,uint64_t param_3)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x430) != '\0') {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x438 + (longlong)param_2 * 8) + 0x18);
    (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
    *(int8_t *)((longlong)param_2 + 0x3f8 + param_1) = 1;
  }
  return;
}





// 函数: void FUN_180216bc2(longlong param_1,int param_2,uint64_t param_3)
void FUN_180216bc2(longlong param_1,int param_2,uint64_t param_3)

{
  longlong *plVar1;
  longlong unaff_RDI;
  
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x438 + (longlong)param_2 * 8) + 0x18);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
  *(int8_t *)((longlong)param_2 + 0x3f8 + unaff_RDI) = 1;
  return;
}





// 函数: void FUN_180216bec(void)
void FUN_180216bec(void)

{
  return;
}





// 函数: void FUN_180216c00(longlong param_1,int param_2)
void FUN_180216c00(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x430) != '\0') {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x438 + (longlong)param_2 * 8) + 0x18);
    (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_18098bc73);
    *(int8_t *)((longlong)param_2 + 0x3f8 + param_1) = 0;
  }
  return;
}





// 函数: void FUN_180216c12(longlong param_1,int param_2)
void FUN_180216c12(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong unaff_RDI;
  
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x438 + (longlong)param_2 * 8) + 0x18);
  (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_18098bc73);
  *(int8_t *)((longlong)param_2 + 0x3f8 + unaff_RDI) = 0;
  return;
}





// 函数: void FUN_180216c40(void)
void FUN_180216c40(void)

{
  return;
}





// 函数: void FUN_180216c80(longlong param_1,int param_2,int param_3)
void FUN_180216c80(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = timeGetTime();
  *(ulonglong *)(param_1 + 0x490 + (longlong)param_2 * 8) = (ulonglong)uVar1 + (longlong)param_3;
  return;
}



uint64_t FUN_180216cc0(longlong param_1,int param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x430) != '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x438 + (longlong)param_2 * 8) + 0x80))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180216d70(ulonglong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint64_t *puVar10;
  longlong lVar11;
  uint64_t uVar12;
  
  uVar12 = 0xfffffffffffffffe;
  lVar11 = _DAT_180c86878 + 0x260;
  iVar4 = _Mtx_lock(lVar11);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  puVar10 = (uint64_t *)(_DAT_180c86878 + 0x2d0);
  puVar6 = *(uint64_t **)(_DAT_180c86878 + 0x2e0);
  puVar5 = puVar10;
  if (puVar6 != (uint64_t *)0x0) {
    do {
      if ((ulonglong)puVar6[4] < param_1) {
        puVar6 = (uint64_t *)*puVar6;
      }
      else {
        puVar5 = puVar6;
        puVar6 = (uint64_t *)puVar6[1];
      }
    } while (puVar6 != (uint64_t *)0x0);
    if ((puVar5 != puVar10) && ((ulonglong)puVar5[4] <= param_1)) goto LAB_180216e0c;
  }
  puVar5 = puVar10;
LAB_180216e0c:
  if (puVar5 != puVar10) {
    plVar1 = *(longlong **)
              (*(longlong *)(_DAT_180c86878 + 0x2b0) + (longlong)*(int *)(puVar5 + 5) * 0x10);
    lVar3 = plVar1[1];
    lVar8 = *plVar1;
    uVar7 = 0;
    iVar4 = 0;
    if (param_3 != 0) {
      uVar9 = uVar7;
      puVar10 = (uint64_t *)(ulonglong)param_3;
      do {
        if ((longlong)uVar7 < (longlong)((int)lVar3 - (int)lVar8)) {
          *(int8_t *)(uVar7 + param_2) = *(int8_t *)(uVar7 + *plVar1);
          uVar9 = (ulonglong)((int)uVar9 + 1);
        }
        else {
          *(int8_t *)(uVar7 + param_2) = 0;
        }
        iVar4 = (int)uVar9;
        uVar7 = uVar7 + 1;
        puVar10 = (uint64_t *)((longlong)puVar10 + -1);
      } while (puVar10 != (uint64_t *)0x0);
    }
    lVar3 = *plVar1;
    lVar8 = iVar4 + lVar3;
    if (lVar3 != lVar8) {
      lVar2 = plVar1[1];
      if (lVar8 != lVar2) {
                    // WARNING: Subroutine does not return
        memmove(lVar3,lVar8,lVar2 - lVar8,puVar10,uVar12);
      }
      plVar1[1] = (lVar2 - lVar8) + lVar3;
    }
  }
  iVar4 = _Mtx_unlock(lVar11);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  return 0;
}





// 函数: void FUN_180216ec0(longlong param_1,int param_2)
void FUN_180216ec0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  
  lVar10 = (longlong)param_2 * 0x10;
  plVar2 = *(longlong **)(lVar10 + 8 + *(longlong *)(param_1 + 0x2b0));
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  iVar6 = _Mtx_lock(param_1 + 0x260);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x2b0) + lVar10);
  if (plVar11 != (longlong *)0x0) {
    if (*plVar11 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar11);
  }
  *(uint64_t *)(lVar10 + *(longlong *)(param_1 + 0x2b0)) = 0;
  lVar10 = lVar10 + *(longlong *)(param_1 + 0x2b0);
  uVar1 = lVar10 + 0x10;
  uVar7 = *(ulonglong *)(param_1 + 0x2b8);
  if ((uVar1 < uVar7) && (lVar9 = (longlong)(uVar7 - uVar1) >> 4, 0 < lVar9)) {
    plVar11 = (longlong *)(lVar10 + 8);
    do {
      plVar11[-1] = plVar11[1];
      plVar3 = (longlong *)plVar11[2];
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      plVar4 = (longlong *)*plVar11;
      *plVar11 = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x38))();
      }
      lVar9 = lVar9 + -1;
      plVar11 = plVar11 + 2;
    } while (0 < lVar9);
    uVar7 = *(ulonglong *)(param_1 + 0x2b8);
  }
  *(ulonglong *)(param_1 + 0x2b8) = uVar7 - 0x10;
  if (*(longlong **)(uVar7 - 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(uVar7 - 8) + 0x38))();
  }
  lVar10 = param_1 + 0x2d0;
  lVar9 = *(longlong *)(param_1 + 0x2d8);
  lVar5 = lVar10;
  while (lVar9 != lVar10) {
    iVar6 = *(int *)(lVar9 + 0x28);
    lVar8 = lVar9;
    if ((iVar6 != param_2) && (lVar8 = lVar5, param_2 < iVar6)) {
      *(int *)(lVar9 + 0x28) = iVar6 + -1;
    }
    lVar9 = func_0x00018066bd70(lVar9);
    lVar5 = lVar8;
  }
  *(longlong *)(param_1 + 0x2f0) = *(longlong *)(param_1 + 0x2f0) + -1;
  func_0x00018066bd70(lVar5);
  FUN_18066ba00(lVar5,lVar10);
  if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar5);
  }
  iVar6 = _Mtx_unlock(param_1 + 0x260);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  FUN_18073ebd0(plVar2[0xc]);
                    // WARNING: Could not recover jumptable at 0x00018021709f. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar2 + 0x38))(plVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802170b0(longlong param_1)
void FUN_1802170b0(longlong param_1)

{
  uint64_t uVar1;
  longlong lVar2;
  int8_t auStack_118 [224];
  
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0xb8,8,3);
  lVar2 = FUN_180211930(uVar1);
  *(int32_t *)(lVar2 + 0x60) = 0;
  *(int32_t *)(lVar2 + 100) = 0;
  *(int32_t *)(lVar2 + 0x68) = 0;
  *(int32_t *)(lVar2 + 0x6c) = 0;
  *(int32_t *)(param_1 + 0x480) = 0;
                    // WARNING: Subroutine does not return
  memset(auStack_118,0,0xe0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



