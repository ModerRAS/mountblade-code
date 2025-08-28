#include "TaleWorlds.Native.Split.h"

// 03_rendering_part662.c - 7 个函数

// 函数: void FUN_180646fbd(int8_t *param_1,int8_t *param_2,longlong param_3)
void FUN_180646fbd(int8_t *param_1,int8_t *param_2,longlong param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}





// 函数: void FUN_180646fe1(void)
void FUN_180646fe1(void)

{
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * FUN_1806470a0(uint64_t param_1,longlong *param_2)

{
  longlong lVar1;
  void *puVar2;
  
  puVar2 = &system_ptr_ed80;
  if (param_2 != (longlong *)&system_ptr_ed80) {
    if ((*param_2 != 0) || (param_2[1] != 0)) {
      LOCK();
      _DAT_180c8ed80 = _DAT_180c8ed80 + *param_2;
      UNLOCK();
      LOCK();
      _DAT_180c8ed98 = _DAT_180c8ed98 + param_2[3];
      UNLOCK();
      LOCK();
      _DAT_180c8ed88 = _DAT_180c8ed88 + param_2[1];
      UNLOCK();
      LOCK();
      _DAT_180c8ed90 = _DAT_180c8ed90 + param_2[2];
      UNLOCK();
    }
    if ((param_2 + 4 != (longlong *)&system_ptr_eda0) &&
       ((lVar1 = param_2[4], lVar1 != 0 || (param_2[5] != 0)))) {
      LOCK();
      _DAT_180c8eda0 = _DAT_180c8eda0 + lVar1;
      UNLOCK();
      LOCK();
      _DAT_180c8edb8 = _DAT_180c8edb8 + param_2[7];
      UNLOCK();
      LOCK();
      _DAT_180c8eda8 = _DAT_180c8eda8 + param_2[5];
      UNLOCK();
      LOCK();
      _DAT_180c8edb0 = _DAT_180c8edb0 + param_2[6];
      UNLOCK();
    }
    if ((param_2 + 8 != (longlong *)&system_ptr_edc0) &&
       ((lVar1 = param_2[8], lVar1 != 0 || (param_2[9] != 0)))) {
      LOCK();
      _DAT_180c8edc0 = _DAT_180c8edc0 + lVar1;
      UNLOCK();
      LOCK();
      _DAT_180c8edd8 = _DAT_180c8edd8 + param_2[0xb];
      UNLOCK();
      LOCK();
      _DAT_180c8edc8 = _DAT_180c8edc8 + param_2[9];
      UNLOCK();
      LOCK();
      _DAT_180c8edd0 = _DAT_180c8edd0 + param_2[10];
      UNLOCK();
    }
    if ((param_2 + 0xc != (longlong *)&system_ptr_ede0) &&
       ((lVar1 = param_2[0xc], lVar1 != 0 || (param_2[0xd] != 0)))) {
      LOCK();
      _DAT_180c8ede0 = _DAT_180c8ede0 + lVar1;
      UNLOCK();
      LOCK();
      _DAT_180c8edf8 = _DAT_180c8edf8 + param_2[0xf];
      UNLOCK();
      LOCK();
      _DAT_180c8ede8 = _DAT_180c8ede8 + param_2[0xd];
      UNLOCK();
      LOCK();
      _DAT_180c8edf0 = _DAT_180c8edf0 + param_2[0xe];
      UNLOCK();
    }
    if ((param_2 + 0x10 != (longlong *)&system_ptr_ee00) &&
       ((lVar1 = param_2[0x10], lVar1 != 0 || (param_2[0x11] != 0)))) {
      LOCK();
      _DAT_180c8ee00 = _DAT_180c8ee00 + lVar1;
      UNLOCK();
      LOCK();
      _DAT_180c8ee18 = _DAT_180c8ee18 + param_2[0x13];
      UNLOCK();
      LOCK();
      _DAT_180c8ee08 = _DAT_180c8ee08 + param_2[0x11];
      UNLOCK();
      LOCK();
      _DAT_180c8ee10 = _DAT_180c8ee10 + param_2[0x12];
      UNLOCK();
    }
    if ((param_2 + 0x14 != (longlong *)&system_ptr_ee20) &&
       ((lVar1 = param_2[0x14], lVar1 != 0 || (param_2[0x15] != 0)))) {
      LOCK();
      _DAT_180c8ee20 = _DAT_180c8ee20 + lVar1;
      UNLOCK();
      LOCK();
      _DAT_180c8ee38 = _DAT_180c8ee38 + param_2[0x17];
      UNLOCK();
      LOCK();
      _DAT_180c8ee28 = _DAT_180c8ee28 + param_2[0x15];
      UNLOCK();
      LOCK();
      _DAT_180c8ee30 = _DAT_180c8ee30 + param_2[0x16];
      UNLOCK();
    }
    if ((param_2 + 0x1c != (longlong *)&system_ptr_ee60) &&
       ((lVar1 = param_2[0x1c], lVar1 != 0 || (param_2[0x1d] != 0)))) {
      LOCK();
      _DAT_180c8ee60 = _DAT_180c8ee60 + lVar1;
      UNLOCK();
      LOCK();
      _DAT_180c8ee78 = _DAT_180c8ee78 + param_2[0x1f];
      UNLOCK();
      LOCK();
      _DAT_180c8ee68 = _DAT_180c8ee68 + param_2[0x1d];
      UNLOCK();
      LOCK();
      _DAT_180c8ee70 = _DAT_180c8ee70 + param_2[0x1e];
      UNLOCK();
    }
    if ((param_2 + 0x18 != (longlong *)&system_ptr_ee40) &&
       ((lVar1 = param_2[0x18], lVar1 != 0 || (param_2[0x19] != 0)))) {
      LOCK();
      _DAT_180c8ee40 = _DAT_180c8ee40 + lVar1;
      UNLOCK();
      LOCK();
      _DAT_180c8ee58 = _DAT_180c8ee58 + param_2[0x1b];
      UNLOCK();
      LOCK();
      _DAT_180c8ee48 = _DAT_180c8ee48 + param_2[0x19];
      UNLOCK();
      LOCK();
      _DAT_180c8ee50 = _DAT_180c8ee50 + param_2[0x1a];
      UNLOCK();
    }
    if ((param_2 + 0x20 != (longlong *)&system_ptr_ee80) &&
       ((lVar1 = param_2[0x20], lVar1 != 0 || (param_2[0x21] != 0)))) {
      LOCK();
      _DAT_180c8ee80 = _DAT_180c8ee80 + lVar1;
      UNLOCK();
      LOCK();
      _DAT_180c8ee98 = _DAT_180c8ee98 + param_2[0x23];
      UNLOCK();
      LOCK();
      _DAT_180c8ee88 = _DAT_180c8ee88 + param_2[0x21];
      UNLOCK();
      LOCK();
      _DAT_180c8ee90 = _DAT_180c8ee90 + param_2[0x22];
      UNLOCK();
    }
    if ((param_2 + 0x30 != (longlong *)&system_ptr_ef00) &&
       ((lVar1 = param_2[0x30], lVar1 != 0 || (param_2[0x31] != 0)))) {
      LOCK();
      _DAT_180c8ef00 = _DAT_180c8ef00 + lVar1;
      UNLOCK();
      LOCK();
      _DAT_180c8ef18 = _DAT_180c8ef18 + param_2[0x33];
      UNLOCK();
      LOCK();
      _DAT_180c8ef08 = _DAT_180c8ef08 + param_2[0x31];
      UNLOCK();
      LOCK();
      _DAT_180c8ef10 = _DAT_180c8ef10 + param_2[0x32];
      UNLOCK();
    }
    if ((param_2 + 0x34 != (longlong *)&system_ptr_ef20) &&
       ((lVar1 = param_2[0x34], lVar1 != 0 || (param_2[0x35] != 0)))) {
      LOCK();
      _DAT_180c8ef20 = _DAT_180c8ef20 + lVar1;
      UNLOCK();
      LOCK();
      _DAT_180c8ef38 = _DAT_180c8ef38 + param_2[0x37];
      UNLOCK();
      LOCK();
      _DAT_180c8ef28 = _DAT_180c8ef28 + param_2[0x35];
      UNLOCK();
      LOCK();
      _DAT_180c8ef30 = _DAT_180c8ef30 + param_2[0x36];
      UNLOCK();
    }
    if ((param_2 + 0x24 != (longlong *)&system_ptr_eea0) &&
       ((lVar1 = param_2[0x24], lVar1 != 0 || (param_2[0x25] != 0)))) {
      LOCK();
      _DAT_180c8eea0 = _DAT_180c8eea0 + lVar1;
      UNLOCK();
      LOCK();
      _DAT_180c8eeb8 = _DAT_180c8eeb8 + param_2[0x27];
      UNLOCK();
      LOCK();
      _DAT_180c8eea8 = _DAT_180c8eea8 + param_2[0x25];
      UNLOCK();
      LOCK();
      _DAT_180c8eeb0 = _DAT_180c8eeb0 + param_2[0x26];
      UNLOCK();
    }
    func_0x000180647060(0x180c8eec0,param_2 + 0x28);
    func_0x000180647060(0x180c8eee0,param_2 + 0x2c);
    if (param_2 + 0x38 != (longlong *)&system_ptr_ef40) {
      LOCK();
      _DAT_180c8ef40 = _DAT_180c8ef40 + param_2[0x38];
      UNLOCK();
      LOCK();
      _DAT_180c8ef48 = _DAT_180c8ef48 + param_2[0x39];
      UNLOCK();
    }
    if (param_2 + 0x3a != (longlong *)&system_ptr_ef50) {
      LOCK();
      _DAT_180c8ef50 = _DAT_180c8ef50 + param_2[0x3a];
      UNLOCK();
      LOCK();
      _DAT_180c8ef58 = _DAT_180c8ef58 + param_2[0x3b];
      UNLOCK();
    }
    if (param_2 + 0x3c != (longlong *)&system_ptr_ef60) {
      LOCK();
      _DAT_180c8ef60 = _DAT_180c8ef60 + param_2[0x3c];
      UNLOCK();
      LOCK();
      _DAT_180c8ef68 = _DAT_180c8ef68 + param_2[0x3d];
      UNLOCK();
    }
    if (param_2 + 0x3e != (longlong *)&system_ptr_ef70) {
      LOCK();
      _DAT_180c8ef70 = _DAT_180c8ef70 + param_2[0x3e];
      UNLOCK();
      LOCK();
      _DAT_180c8ef78 = _DAT_180c8ef78 + param_2[0x3f];
      UNLOCK();
    }
    if (param_2 + 0x40 != (longlong *)&system_ptr_ef80) {
      LOCK();
      _DAT_180c8ef80 = _DAT_180c8ef80 + param_2[0x40];
      UNLOCK();
      LOCK();
      _DAT_180c8ef88 = _DAT_180c8ef88 + param_2[0x41];
      UNLOCK();
    }
    if (param_2 + 0x42 != (longlong *)&system_ptr_ef90) {
      LOCK();
      _DAT_180c8ef90 = _DAT_180c8ef90 + param_2[0x42];
      UNLOCK();
      LOCK();
      _DAT_180c8ef98 = _DAT_180c8ef98 + param_2[0x43];
      UNLOCK();
    }
    if (param_2 + 0x44 != (longlong *)&system_ptr_efa0) {
      LOCK();
      _DAT_180c8efa0 = _DAT_180c8efa0 + param_2[0x44];
      UNLOCK();
      LOCK();
      _DAT_180c8efa8 = _DAT_180c8efa8 + param_2[0x45];
      UNLOCK();
    }
    puVar2 = &system_ptr_efb0;
    if (param_2 + 0x46 != (longlong *)&system_ptr_efb0) {
      LOCK();
      UNLOCK();
      LOCK();
      _DAT_180c8efb8 = _DAT_180c8efb8 + param_2[0x47];
      UNLOCK();
      puVar2 = _DAT_180c8efb0;
      _DAT_180c8efb0 = _DAT_180c8efb0 + param_2[0x46];
    }
  }
  return puVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180647600(ulonglong param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
void FUN_180647600(ulonglong param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
                  void *param_5)

{
  int8_t auVar1 [16];
  void *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  void *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int8_t auStack_78 [32];
  void *puStack_58;
  void *puStack_50;
  void *puStack_48;
  int8_t auStack_38 [32];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_78;
  puVar7 = &UNK_1809fd068;
  if (param_2 < 1) {
    puVar7 = &system_ptr_c8e4;
  }
  uVar9 = 0x400;
  if (param_2 == 0) {
    uVar9 = 1000;
  }
  if (0 < param_2) {
    param_1 = param_1 * param_2;
  }
  lVar10 = (param_1 ^ (longlong)param_1 >> 0x3f) - ((longlong)param_1 >> 0x3f);
  if (lVar10 < (longlong)uVar9) {
    puStack_58 = puVar7;
    FUN_1800635c0(auStack_38,0x20,&UNK_180a3d3f0);
  }
  else {
    uVar4 = uVar9 * uVar9;
    puVar2 = &UNK_180a156a4;
    uVar6 = uVar4;
    if (lVar10 < (longlong)uVar4) {
      uVar6 = uVar9;
    }
    if (lVar10 < (longlong)uVar4) {
      puVar2 = &UNK_180a3d3f8;
    }
    uVar4 = uVar6 * uVar9;
    puStack_50 = &UNK_180a3d3dc;
    if (lVar10 < (longlong)(uVar6 * uVar9)) {
      uVar4 = uVar6;
      puStack_50 = puVar2;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar4;
    lVar10 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8);
    lVar3 = (longlong)param_1 / (longlong)((uVar4 - lVar10 >> 1) + lVar10 >> 6);
    lVar10 = lVar3 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar3),8);
    uVar8 = (int)lVar3 + ((int)(lVar10 >> 6) - (int)(lVar10 >> 0x3f)) * -100;
    uVar5 = (int)uVar8 >> 0x1f;
    puStack_58 = (void *)CONCAT44(puStack_58._4_4_,(uVar8 ^ uVar5) - uVar5);
    puStack_48 = puVar7;
    FUN_1800635c0(auStack_38,0x20,&UNK_180a3d3e0);
  }
  if (param_5 == (void *)0x0) {
    param_5 = &UNK_180a3d3cc;
  }
  FUN_1806502b0(FUN_180647850,param_4,param_5,auStack_38);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_78);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180647780(uint64_t *param_1)
void FUN_180647780(uint64_t *param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  code *pcVar3;
  code *pcVar4;
  char *pcVar5;
  
  *(int8_t *)(param_1[2] + param_1[3]) = 0;
  pcVar4 = (code *)*param_1;
  uVar1 = param_1[2];
  uVar2 = param_1[1];
  if (pcVar4 != (code *)0x0) {
    pcVar3 = (code *)__acrt_iob_func(1);
    if (pcVar4 != pcVar3) {
      pcVar3 = (code *)__acrt_iob_func(2);
      if (pcVar4 != pcVar3) {
        (*pcVar4)(uVar1,uVar2);
        goto LAB_180647824;
      }
    }
  }
  uVar2 = _DAT_180ca8bc8;
  pcVar5 = (char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8)
                   + 8);
  if (*pcVar5 == '\0') {
    *pcVar5 = '\x01';
    pcVar4 = _DAT_180c96858;
    if (_DAT_180c96858 == (code *)0x0) {
      pcVar4 = (code *)0x18064ffe0;
    }
    (*pcVar4)(uVar1,uVar2);
    *pcVar5 = '\0';
  }
LAB_180647824:
  param_1[3] = 0;
  return;
}





// 函数: void FUN_180647850(char *param_1,longlong param_2)
void FUN_180647850(char *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  ulonglong uVar3;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    cVar2 = *param_1;
    while (cVar2 != '\0') {
      uVar3 = *(ulonglong *)(param_2 + 0x18);
      if (*(ulonglong *)(param_2 + 0x20) <= uVar3) {
        FUN_180647780(param_2);
        uVar3 = *(ulonglong *)(param_2 + 0x18);
      }
      *(char *)(uVar3 + *(longlong *)(param_2 + 0x10)) = cVar2;
      *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + 1;
      if (cVar2 == '\n') {
        FUN_180647780(param_2);
      }
      pcVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar2 = *pcVar1;
    }
  }
  return;
}





// 函数: void FUN_18064786a(char *param_1)
void FUN_18064786a(char *param_1)

{
  char *pcVar1;
  char cVar2;
  ulonglong uVar3;
  longlong unaff_RBX;
  longlong unaff_RSI;
  
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    uVar3 = *(ulonglong *)(unaff_RBX + 0x18);
    if (*(ulonglong *)(unaff_RBX + 0x20) <= uVar3) {
      FUN_180647780();
      uVar3 = *(ulonglong *)(unaff_RBX + 0x18);
    }
    *(char *)(uVar3 + *(longlong *)(unaff_RBX + 0x10)) = cVar2;
    *(longlong *)(unaff_RBX + 0x18) = *(longlong *)(unaff_RBX + 0x18) + 1;
    if (cVar2 == '\n') {
      FUN_180647780();
    }
    pcVar1 = (char *)(unaff_RSI + 1);
    unaff_RSI = unaff_RSI + 1;
    cVar2 = *pcVar1;
  }
  return;
}





// 函数: void FUN_1806478c1(void)
void FUN_1806478c1(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



