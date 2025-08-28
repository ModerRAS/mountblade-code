#include "TaleWorlds.Native.Split.h"

// 03_rendering_part351.c - 19 个函数

// 函数: void FUN_1804588a0(int32_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4)
void FUN_1804588a0(int32_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4)

{
  code *pcVar1;
  longlong *plVar2;
  uint64_t uVar3;
  longlong *plStackX_20;
  void *puStack_40;
  longlong lStack_38;
  int32_t uStack_28;
  
  FUN_180158990(_DAT_180c86878,&plStackX_20,param_1,param_4,0xfffffffffffffffe);
  plVar2 = plStackX_20;
  if (plStackX_20 != (longlong *)0x0) {
    pcVar1 = *(code **)(*plStackX_20 + 0x140);
    uVar3 = FUN_180627910(&puStack_40,param_2);
    (*pcVar1)(plVar2,uVar3,param_3);
    puStack_40 = &unknown_var_3456_ptr;
    if (lStack_38 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_38 = 0;
    uStack_28 = 0;
    puStack_40 = &unknown_var_720_ptr;
  }
  if (plStackX_20 != (longlong *)0x0) {
    (**(code **)(*plStackX_20 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t *
FUN_180458970(int32_t *param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  longlong *aplStackX_8 [4];
  int8_t auStack_30 [40];
  
  FUN_180158990(_DAT_180c86878,aplStackX_8,param_2,param_4,0xfffffffffffffffe);
  if (aplStackX_8[0] == (longlong *)0x0) {
    uVar2 = 0xbf800000;
    uVar3 = 0xbf800000;
    uVar4 = 0xbf800000;
    uVar5 = 0x7f7fffff;
  }
  else {
    puVar1 = (int32_t *)(**(code **)(*aplStackX_8[0] + 0x120))(aplStackX_8[0],auStack_30);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
  }
  if (aplStackX_8[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_8[0] + 0x38))();
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804589f0(int32_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804589f0(int32_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *aplStackX_18 [2];
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  
  FUN_180158990(_DAT_180c86878,aplStackX_18,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_18[0] != (longlong *)0x0) {
    uStack_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    uStack_14 = param_2[3];
    (**(code **)(*aplStackX_18[0] + 0xa8))(aplStackX_18[0],&uStack_20);
  }
  if (aplStackX_18[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_18[0] + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180458a50(int32_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180458a50(int32_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *aplStackX_18 [2];
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  
  FUN_180158990(_DAT_180c86878,aplStackX_18,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_18[0] != (longlong *)0x0) {
    uStack_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    uStack_14 = param_2[3];
    (**(code **)(*aplStackX_18[0] + 0xe8))(aplStackX_18[0],&uStack_20);
  }
  if (aplStackX_18[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_18[0] + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180458ab0(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  uint64_t uVar2;
  longlong *aplStackX_10 [3];
  
  FUN_180158990(_DAT_180c86878,aplStackX_10,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_10[0] != (longlong *)0x0) {
    cVar1 = (**(code **)(*aplStackX_10[0] + 0x60))();
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_180458aee;
    }
  }
  uVar2 = 0;
LAB_180458aee:
  if (aplStackX_10[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t
FUN_180458b10(int32_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int8_t uVar1;
  longlong *aplStackX_18 [2];
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  
  FUN_180158990(_DAT_180c86878,aplStackX_18,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_18[0] == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uStack_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    uStack_14 = param_2[3];
    (**(code **)(*aplStackX_18[0] + 0xa8))(aplStackX_18[0],&uStack_20);
    uVar1 = (**(code **)(*aplStackX_18[0] + 0x60))();
  }
  if (aplStackX_18[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_18[0] + 0x38))();
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180458b90(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180458b90(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *aplStackX_10 [3];
  
  FUN_180158990(_DAT_180c86878,aplStackX_10,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_10[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x68))();
  }
  if (aplStackX_10[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180458be0(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180458be0(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *aplStackX_10 [3];
  
  FUN_180158990(_DAT_180c86878,aplStackX_10,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_10[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x70))();
  }
  if (aplStackX_10[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180458c30(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180458c30(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *aplStackX_10 [3];
  
  FUN_180158990(_DAT_180c86878,aplStackX_10,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_10[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x78))();
  }
  if (aplStackX_10[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180458c80(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180458c80(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  longlong *plVar2;
  uint64_t uVar3;
  longlong *aplStackX_18 [2];
  void *puStack_30;
  longlong lStack_28;
  int32_t uStack_18;
  
  FUN_180158990(_DAT_180c86878,aplStackX_18,param_1,param_4,0xfffffffffffffffe);
  plVar2 = aplStackX_18[0];
  if (aplStackX_18[0] != (longlong *)0x0) {
    pcVar1 = *(code **)(*aplStackX_18[0] + 0x158);
    uVar3 = FUN_180627910(&puStack_30,param_2);
    (*pcVar1)(plVar2,uVar3);
    puStack_30 = &unknown_var_3456_ptr;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_28 = 0;
    uStack_18 = 0;
    puStack_30 = &unknown_var_720_ptr;
  }
  if (aplStackX_18[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_18[0] + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180458d30(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180458d30(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  longlong *plVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  longlong *plStackX_20;
  void *puStack_50;
  longlong lStack_48;
  int32_t uStack_38;
  void *puStack_30;
  longlong lStack_28;
  int32_t uStack_18;
  
  FUN_180158990(_DAT_180c86878,&plStackX_20,param_1,param_4,0xfffffffffffffffe);
  plVar2 = plStackX_20;
  if (plStackX_20 != (longlong *)0x0) {
    pcVar1 = *(code **)(*plStackX_20 + 0x150);
    uVar3 = FUN_180627910(&puStack_30,param_3);
    uVar4 = FUN_180627910(&puStack_50,param_2);
    (*pcVar1)(plVar2,uVar4,uVar3);
    puStack_50 = &unknown_var_3456_ptr;
    if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_48 = 0;
    uStack_38 = 0;
    puStack_50 = &unknown_var_720_ptr;
    puStack_30 = &unknown_var_3456_ptr;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_28 = 0;
    uStack_18 = 0;
    puStack_30 = &unknown_var_720_ptr;
  }
  if (plStackX_20 != (longlong *)0x0) {
    (**(code **)(*plStackX_20 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180458e30(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180458e30(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *aplStackX_10 [3];
  
  FUN_180158990(_DAT_180c86878,aplStackX_10,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_10[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x160))();
  }
  if (aplStackX_10[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180458e80(int32_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4)
void FUN_180458e80(int32_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4)

{
  longlong *plStackX_20;
  
  FUN_180158990(_DAT_180c86878,&plStackX_20,param_1,param_4,0xfffffffffffffffe);
  if (plStackX_20 != (longlong *)0x0) {
    (**(code **)(*plStackX_20 + 0x138))(plStackX_20,param_2,param_3);
  }
  if (plStackX_20 != (longlong *)0x0) {
    (**(code **)(*plStackX_20 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180458ef0(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  uint64_t uVar2;
  longlong *aplStackX_10 [3];
  
  FUN_180158990(_DAT_180c86878,aplStackX_10,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_10[0] != (longlong *)0x0) {
    cVar1 = (**(code **)(*aplStackX_10[0] + 0x80))();
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_180458f31;
    }
  }
  uVar2 = 0;
LAB_180458f31:
  if (aplStackX_10[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180458f50(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  uint64_t uVar2;
  longlong *aplStackX_10 [3];
  
  FUN_180158990(_DAT_180c86878,aplStackX_10,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_10[0] != (longlong *)0x0) {
    cVar1 = (**(code **)(*aplStackX_10[0] + 0x90))();
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_180458f91;
    }
  }
  uVar2 = 0;
LAB_180458f91:
  if (aplStackX_10[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return uVar2;
}



int32_t FUN_180458fb0(uint64_t param_1,uint64_t *param_2,uint64_t param_3)

{
  longlong lVar1;
  longlong *aplStackX_10 [3];
  
  FUN_180157ef0(param_1,aplStackX_10,param_1,*param_2,(longlong)*(int *)(param_2 + 1),param_3,1);
  lVar1 = aplStackX_10[0][10];
  if (aplStackX_10[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return (int)lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_180459010(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong *plStackX_20;
  void *puStack_30;
  longlong lStack_28;
  int32_t uStack_18;
  
  uVar2 = FUN_180627910(&puStack_30);
  FUN_1801580f0(_DAT_180c86878,&plStackX_20,param_1,uVar2,param_3,1,0);
  puStack_30 = &unknown_var_3456_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_28 = 0;
  uStack_18 = 0;
  puStack_30 = &unknown_var_720_ptr;
  lVar1 = plStackX_20[10];
  if (plStackX_20 != (longlong *)0x0) {
    (**(code **)(*plStackX_20 + 0x38))();
  }
  return (int)lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804590d0(uint64_t param_1,int32_t *param_2)
void FUN_1804590d0(uint64_t param_1,int32_t *param_2)

{
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(*_DAT_180c86878 + 0x48))(_DAT_180c86878,param_1,&uStack_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804591a0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int32_t param_4)
void FUN_1804591a0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int32_t param_4)

{
  code *pcVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong lVar4;
  void *puVar5;
  int8_t auStack_198 [32];
  code *pcStack_178;
  void *puStack_168;
  longlong lStack_160;
  int32_t uStack_150;
  void *puStack_148;
  longlong lStack_140;
  int32_t uStack_130;
  uint64_t uStack_128;
  longlong alStack_118 [4];
  int32_t auStack_f8 [2];
  int8_t auStack_f0 [152];
  int iStack_58;
  ulonglong uStack_48;
  
  uStack_128 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  pcStack_178 = FUN_18004a130;
  FUN_1808fc838(alStack_118,0x30,4,FUN_1801c2890);
  iStack_58 = 0;
  lVar2 = FUN_180627910(&puStack_168,param_3);
  lVar4 = (longlong)iStack_58;
  puVar5 = &system_buffer_ptr;
  if (*(void **)(lVar2 + 8) != (void *)0x0) {
    puVar5 = *(void **)(lVar2 + 8);
  }
  (**(code **)(alStack_118[lVar4 * 6] + 0x10))(alStack_118 + lVar4 * 6,puVar5);
  auStack_f8[lVar4 * 0xc] = 0xffffffff;
  auStack_f8[lVar4 * 0xc + 1] = param_4;
  auStack_f0[lVar4 * 0x30] = 1;
  iStack_58 = iStack_58 + 1;
  puStack_168 = &unknown_var_3456_ptr;
  if (lStack_160 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uStack_150 = 0;
  pcVar1 = *(code **)(*_DAT_180c86878 + 0x70);
  puStack_168 = (void *)*param_2;
  lStack_160 = param_2[1];
  uVar3 = FUN_180627910(&puStack_148,param_1);
  (*pcVar1)(_DAT_180c86878,uVar3,&puStack_168,alStack_118);
  puStack_148 = &unknown_var_3456_ptr;
  if (lStack_140 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_140 = 0;
  uStack_130 = 0;
  puStack_148 = &unknown_var_720_ptr;
  FUN_1808fc8a8(alStack_118,0x30,4,FUN_18004a130);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_198);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t
FUN_180459360(uint64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  int8_t uVar2;
  uint64_t uVar3;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  void *puStack_30;
  longlong lStack_28;
  
  pcVar1 = *(code **)(*_DAT_180c86878 + 0x70);
  uStack_40 = *param_2;
  uStack_3c = param_2[1];
  uStack_38 = param_2[2];
  uStack_34 = param_2[3];
  uVar3 = FUN_180627910(&puStack_30,param_1,*_DAT_180c86878,param_4,0xfffffffffffffffe);
  uVar2 = (*pcVar1)(_DAT_180c86878,uVar3,&uStack_40,0);
  puStack_30 = &unknown_var_3456_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804593f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804593f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  void *puStack_50;
  longlong lStack_48;
  int32_t uStack_38;
  void *puStack_30;
  longlong lStack_28;
  
  uVar4 = 0xfffffffffffffffe;
  pcVar1 = *(code **)(*_DAT_180c86878 + 0x180);
  uVar2 = FUN_180627910(&puStack_30);
  uVar3 = FUN_180627910(&puStack_50,param_1);
  (*pcVar1)(_DAT_180c86878,uVar3,uVar2,param_4,uVar4);
  puStack_50 = &unknown_var_3456_ptr;
  if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_48 = 0;
  uStack_38 = 0;
  puStack_50 = &unknown_var_720_ptr;
  puStack_30 = &unknown_var_3456_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804594b0(uint64_t param_1,int8_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804594b0(uint64_t param_1,int8_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  void *puStack_30;
  longlong lStack_28;
  
  pcVar1 = *(code **)(*_DAT_180c86878 + 0x40);
  FUN_180627910(&puStack_30,param_1,*_DAT_180c86878,param_4,0xfffffffffffffffe);
  (*pcVar1)(_DAT_180c86878,&puStack_30,param_2);
  puStack_30 = &unknown_var_3456_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180459540(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4)
void FUN_180459540(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4)

{
  code *pcVar1;
  uint64_t uVar2;
  void *puStack_40;
  longlong lStack_38;
  
  pcVar1 = *(code **)(*_DAT_180c86878 + 0x18);
  uVar2 = FUN_180627910(&puStack_40,param_1,param_3,param_4,0xfffffffffffffffe);
  (*pcVar1)(_DAT_180c86878,uVar2,param_2);
  puStack_40 = &unknown_var_3456_ptr;
  if (lStack_38 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_1804595c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  int32_t uVar2;
  uint64_t uVar3;
  void *puStack_30;
  longlong lStack_28;
  
  pcVar1 = *(code **)(*_DAT_180c86878 + 0xd0);
  uVar3 = FUN_180627910(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  uVar2 = (*pcVar1)(_DAT_180c86878,uVar3);
  puStack_30 = &unknown_var_3456_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180459640(int32_t param_1)
void FUN_180459640(int32_t param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int aiStackX_8 [2];
  int32_t uStackX_10;
  longlong alStack_28 [4];
  
  lVar1 = _DAT_180c86878;
  uStackX_10 = param_1;
  puVar2 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,8,8,3);
  *puVar2 = 0;
  uVar3 = FUN_1806fd3c0(*(int32_t *)(lVar1 + 0x218),*(int32_t *)(lVar1 + 0x21c),aiStackX_8);
  *puVar2 = uVar3;
  if (aiStackX_8[0] < 0) {
    FUN_180626f80(&unknown_var_7344_ptr);
    *puVar2 = 0;
  }
  FUN_18033bd40(lVar1 + 0x220,alStack_28);
  *(uint64_t **)(alStack_28[0] + 8) = puVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804596f0(uint param_1)
void FUN_1804596f0(uint param_1)

{
  longlong *plVar1;
  uint *puVar2;
  
  for (puVar2 = *(uint **)(*(longlong *)(_DAT_180c86878 + 0x228) +
                          ((ulonglong)param_1 % (ulonglong)*(uint *)(_DAT_180c86878 + 0x230)) * 8);
      puVar2 != (uint *)0x0; puVar2 = *(uint **)(puVar2 + 4)) {
    if (param_1 == *puVar2) goto LAB_18045974e;
  }
  puVar2 = *(uint **)(*(longlong *)(_DAT_180c86878 + 0x228) +
                     *(longlong *)(_DAT_180c86878 + 0x230) * 8);
LAB_18045974e:
  plVar1 = *(longlong **)(puVar2 + 2);
  if (*plVar1 != 0) {
    free();
    *plVar1 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804598d0(uint64_t *param_1,int32_t param_2,int32_t *param_3)
void FUN_1804598d0(uint64_t *param_1,int32_t param_2,int32_t *param_3)

{
  int32_t auStackX_8 [2];
  
  (**(code **)(*_DAT_180c86878 + 0x1d8))(_DAT_180c86878,*param_1,param_2,auStackX_8);
  *param_3 = auStackX_8[0];
  return;
}





// 函数: void FUN_180459930(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t *param_4,
void FUN_180459930(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t *param_4,
                  int32_t *param_5)

{
  int32_t auStackX_10 [6];
  
  FUN_18015af90(param_1,*param_2,param_3,*param_4,auStackX_10);
  *param_5 = auStackX_10[0];
  return;
}





