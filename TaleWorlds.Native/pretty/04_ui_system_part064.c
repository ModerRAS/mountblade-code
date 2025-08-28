#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part064.c - 21 个函数

// 函数: void FUN_18069bb20(longlong param_1)
void FUN_18069bb20(longlong param_1)

{
  int16_t uVar1;
  int iVar2;
  int16_t *puVar3;
  
  puVar3 = (int16_t *)(param_1 + 0x1620);
  iVar2 = 0;
  do {
    uVar1 = func_0x00018069eed0(iVar2,*(int32_t *)(param_1 + 0x1e94));
    puVar3[-0x100] = uVar1;
    uVar1 = func_0x00018069ee90(iVar2,*(int32_t *)(param_1 + 0x1e98));
    *puVar3 = uVar1;
    uVar1 = func_0x00018069ef00(iVar2,*(int32_t *)(param_1 + 0x1ea0));
    puVar3[0x100] = uVar1;
    uVar1 = func_0x00018069ee60(iVar2);
    puVar3[-0xff] = uVar1;
    uVar1 = func_0x00018069edf0(iVar2,*(int32_t *)(param_1 + 0x1e9c));
    puVar3[1] = uVar1;
    uVar1 = func_0x00018069ee30(iVar2,*(int32_t *)(param_1 + 0x1ea4));
    iVar2 = iVar2 + 1;
    puVar3[0x101] = uVar1;
    puVar3 = puVar3 + 2;
  } while (iVar2 < 0x80);
  return;
}



bool FUN_18069bbd0(longlong param_1,int param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = ((uint)((*(int *)(param_1 + 0x1c) + -1) * param_2) >> 8) + 1;
  if (*(int *)(param_1 + 0x18) < 0) {
    FUN_18069ec80();
  }
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  uVar2 = (ulonglong)uVar4 << 0x38;
  bVar5 = uVar2 <= uVar3;
  if (bVar5) {
    uVar4 = *(int *)(param_1 + 0x1c) - uVar4;
    uVar3 = uVar3 - uVar2;
  }
  bVar1 = (&unknown_var_8608_ptr)[uVar4];
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
  *(uint *)(param_1 + 0x1c) = uVar4 << (bVar1 & 0x1f);
  *(ulonglong *)(param_1 + 0x10) = uVar3 << (bVar1 & 0x3f);
  return bVar5;
}





// 函数: void FUN_18069bc50(longlong param_1)
void FUN_18069bc50(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 100);
  lVar3 = (((longlong)(*(int *)(param_1 + 4) * *(int *)(param_1 + 0x10)) +
           *(longlong *)(param_1 + 0x38)) - (ulonglong)uVar1) - lVar2;
  if (0 < (int)uVar1) {
                    // WARNING: Subroutine does not return
    memcpy(lVar2 + lVar3,lVar3,lVar2);
  }
  lVar2 = (longlong)*(int *)(param_1 + 0x24);
  lVar3 = (longlong)(*(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x24));
  lVar4 = ((*(longlong *)(param_1 + 0x40) - (ulonglong)(uVar1 >> 1)) - lVar2) + lVar3;
  if (uVar1 >> 1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lVar2 + lVar4,lVar4,lVar2);
  }
  lVar3 = ((*(longlong *)(param_1 + 0x48) - (ulonglong)(uVar1 >> 1)) - lVar2) + lVar3;
  if (uVar1 >> 1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lVar2 + lVar3,lVar3,lVar2);
  }
  return;
}





// 函数: void FUN_18069bd60(longlong param_1,int8_t *param_2)
void FUN_18069bd60(longlong param_1,int8_t *param_2)

{
                    // WARNING: Subroutine does not return
  memset((longlong)param_2 - (ulonglong)*(uint *)(param_1 + 100),*param_2,*(uint *)(param_1 + 100));
}





// 函数: void FUN_18069beb0(longlong param_1)
void FUN_18069beb0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 100);
  lVar3 = *(longlong *)(param_1 + 0x38) - (ulonglong)uVar1;
  if (0 < (int)uVar1) {
                    // WARNING: Subroutine does not return
    memcpy(lVar3 - (ulonglong)(*(int *)(param_1 + 0x10) * uVar1),lVar3,
           (longlong)*(int *)(param_1 + 0x10));
  }
  iVar2 = *(int *)(param_1 + 0x24);
  uVar4 = uVar1 >> 1;
  lVar3 = *(longlong *)(param_1 + 0x40) - (ulonglong)uVar4;
  if (uVar1 >> 1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lVar3 - (ulonglong)(iVar2 * uVar4),lVar3,(longlong)iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48) - (ulonglong)uVar4;
  if (uVar1 >> 1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lVar3 - (ulonglong)(iVar2 * uVar4),lVar3,(longlong)iVar2);
  }
  return;
}





// 函数: void FUN_18069bebb(longlong param_1)
void FUN_18069bebb(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 100);
  lVar3 = *(longlong *)(param_1 + 0x38) - (ulonglong)uVar1;
  if (0 < (int)uVar1) {
                    // WARNING: Subroutine does not return
    memcpy(lVar3 - (ulonglong)(*(int *)(param_1 + 0x10) * uVar1),lVar3,
           (longlong)*(int *)(param_1 + 0x10));
  }
  iVar2 = *(int *)(param_1 + 0x24);
  uVar4 = uVar1 >> 1;
  lVar3 = *(longlong *)(param_1 + 0x40) - (ulonglong)uVar4;
  if (uVar1 >> 1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lVar3 - (ulonglong)(iVar2 * uVar4),lVar3,(longlong)iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48) - (ulonglong)uVar4;
  if (uVar1 >> 1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lVar3 - (ulonglong)(iVar2 * uVar4),lVar3,(longlong)iVar2);
  }
  return;
}





// 函数: void FUN_18069bf80(void)
void FUN_18069bf80(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18069bfb0(code *param_1)
void FUN_18069bfb0(code *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (_DAT_180c0c21c == 0) {
    LOCK();
    _DAT_180c0c218 = _DAT_180c0c218 + 1;
    UNLOCK();
    lVar3 = malloc(0x28);
    InitializeCriticalSection(lVar3);
    LOCK();
    bVar4 = _DAT_180c0c210 != 0;
    lVar2 = lVar3;
    if (bVar4) {
      lVar2 = _DAT_180c0c210;
    }
    _DAT_180c0c210 = lVar2;
    UNLOCK();
    if (bVar4) {
      DeleteCriticalSection(lVar3);
      free(lVar3);
    }
    EnterCriticalSection(_DAT_180c0c210);
    if (_DAT_180c0c21c == 0) {
      (*param_1)();
      _DAT_180c0c21c = 1;
    }
    LeaveCriticalSection(_DAT_180c0c210);
    LOCK();
    iVar1 = _DAT_180c0c218 + -1;
    UNLOCK();
    bVar4 = _DAT_180c0c218 == 1;
    _DAT_180c0c218 = iVar1;
    if (bVar4) {
      DeleteCriticalSection(_DAT_180c0c210);
      free(_DAT_180c0c210);
      _DAT_180c0c210 = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18069bfc6(void)
void FUN_18069bfc6(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *unaff_RDI;
  bool bVar4;
  
  LOCK();
  _DAT_180c0c218 = _DAT_180c0c218 + 1;
  UNLOCK();
  lVar3 = malloc(0x28);
  InitializeCriticalSection(lVar3);
  LOCK();
  bVar4 = _DAT_180c0c210 != 0;
  lVar2 = lVar3;
  if (bVar4) {
    lVar2 = _DAT_180c0c210;
  }
  _DAT_180c0c210 = lVar2;
  UNLOCK();
  if (bVar4) {
    DeleteCriticalSection(lVar3);
    free(lVar3);
  }
  EnterCriticalSection(_DAT_180c0c210);
  if (_DAT_180c0c21c == 0) {
    (*unaff_RDI)();
    _DAT_180c0c21c = 1;
  }
  LeaveCriticalSection(_DAT_180c0c210);
  LOCK();
  iVar1 = _DAT_180c0c218 + -1;
  UNLOCK();
  bVar4 = _DAT_180c0c218 == 1;
  _DAT_180c0c218 = iVar1;
  if (bVar4) {
    DeleteCriticalSection(_DAT_180c0c210);
    free(_DAT_180c0c210);
    _DAT_180c0c210 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18069c023(void)
void FUN_18069c023(void)

{
  int iVar1;
  code *unaff_RDI;
  bool bVar2;
  
  (*unaff_RDI)();
  _DAT_180c0c21c = 1;
  LeaveCriticalSection(_DAT_180c0c210);
  LOCK();
  iVar1 = _DAT_180c0c218 + -1;
  UNLOCK();
  bVar2 = _DAT_180c0c218 == 1;
  _DAT_180c0c218 = iVar1;
  if (bVar2) {
    DeleteCriticalSection(_DAT_180c0c210);
    free(_DAT_180c0c210);
    _DAT_180c0c210 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18069c080(longlong param_1,uint64_t param_2,uint64_t param_3,int8_t *param_4,
void FUN_18069c080(longlong param_1,uint64_t param_2,uint64_t param_3,int8_t *param_4,
                  int8_t *param_5,int param_6,uint64_t param_7,uint64_t param_8,int param_9)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  int8_t auStack_68 [32];
  int8_t uStack_48;
  int8_t uStack_47;
  int8_t uStack_46;
  int8_t uStack_45;
  int8_t uStack_44;
  int8_t uStack_43;
  int8_t uStack_42;
  int8_t uStack_41;
  int8_t uStack_40;
  int8_t uStack_3f;
  int8_t uStack_3e;
  int8_t uStack_3d;
  int8_t uStack_3c;
  int8_t uStack_3b;
  int8_t uStack_3a;
  int8_t uStack_39;
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_68;
  lVar2 = (longlong)param_6;
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0xf00) + 1);
  uStack_48 = *param_4;
  uStack_40 = *param_5;
  uStack_47 = param_4[lVar2];
  uStack_3f = param_5[lVar2];
  uStack_46 = param_4[lVar2 * 2];
  uStack_3e = param_5[lVar2 * 2];
  uStack_45 = param_4[lVar2 * 3];
  uStack_3d = param_5[lVar2 * 3];
  uStack_44 = param_4[lVar2 * 4];
  uStack_3c = param_5[lVar2 * 4];
  uStack_43 = param_4[lVar2 * 5];
  uStack_3b = param_5[lVar2 * 5];
  uStack_42 = param_4[lVar2 * 6];
  uStack_3a = param_5[lVar2 * 6];
  uStack_41 = param_4[lVar2 * 7];
  uStack_39 = param_5[lVar2 * 7];
  if (bVar1 == 0) {
    pcVar3 = *(code **)(((longlong)*(int *)(param_1 + 0xf10) +
                        (longlong)*(int *)(param_1 + 0xf14) * 2) * 0x10 + 0x180c0c268);
  }
  else {
    pcVar3 = *(code **)((ulonglong)bVar1 * 0x10 + 0x180c0c228);
  }
  (*pcVar3)(param_7,(longlong)param_9,param_2,&uStack_48);
  (*pcVar3)(param_8,(longlong)param_9,param_3,&uStack_40);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18069c200(longlong param_1,uint64_t param_2,int8_t *param_3,int param_4,
void FUN_18069c200(longlong param_1,uint64_t param_2,int8_t *param_3,int param_4,
                  uint64_t param_5,int param_6)

{
  byte bVar1;
  int8_t uVar2;
  longlong lVar3;
  code *pcVar4;
  int8_t auStack_48 [32];
  int8_t auStack_28 [16];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_48;
  bVar1 = **(byte **)(param_1 + 0xf00);
  lVar3 = 0;
  do {
    uVar2 = *param_3;
    param_3 = param_3 + param_4;
    auStack_28[lVar3] = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 < 0x10);
  if (bVar1 == 0) {
    pcVar4 = *(code **)(((longlong)*(int *)(param_1 + 0xf10) +
                        (longlong)*(int *)(param_1 + 0xf14) * 2) * 0x10 + 0x180c0c260);
  }
  else {
    pcVar4 = *(code **)((ulonglong)bVar1 * 0x10 + 0x180c0c220);
  }
  (*pcVar4)(param_5,(longlong)param_6,param_2,auStack_28);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_48);
}





// 函数: void FUN_18069c3b0(int8_t *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
void FUN_18069c3b0(int8_t *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_6;
  param_8 = param_3 + param_6 + param_8;
  if (0 < param_4) {
                    // WARNING: Subroutine does not return
    memset((longlong)param_1 - lVar1,*param_1,lVar1);
  }
  if (0 < param_5) {
                    // WARNING: Subroutine does not return
    memcpy(param_1 + (-(param_2 * param_5) - lVar1),(longlong)param_1 - lVar1,(longlong)param_8);
  }
  if (0 < param_7) {
                    // WARNING: Subroutine does not return
    memcpy(param_1 + (param_2 * param_4 - lVar1),param_1 + ((param_4 + -1) * param_2 - lVar1),
           (longlong)param_8);
  }
  return;
}





// 函数: void FUN_18069c3f3(int param_1,int param_2,uint64_t param_3,longlong param_4)
void FUN_18069c3f3(int param_1,int param_2,uint64_t param_3,longlong param_4)

{
  longlong in_RAX;
  longlong in_R10;
  int in_R11D;
  uint64_t unaff_R12;
  int unaff_R13D;
  uint64_t unaff_R15;
  int in_stack_000000a0;
  int iStack00000000000000a8;
  int in_stack_000000b0;
  
  *(uint64_t *)(in_RAX + 0x18) = unaff_R12;
  iStack00000000000000a8 = param_2 + param_1;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  if (0 < in_R11D) {
                    // WARNING: Subroutine does not return
    memset();
  }
  if (0 < in_stack_000000a0) {
                    // WARNING: Subroutine does not return
    memcpy((-(unaff_R13D * in_stack_000000a0) - in_R10) + param_4);
  }
  if (0 < in_stack_000000b0) {
                    // WARNING: Subroutine does not return
    memcpy((unaff_R13D * in_R11D - in_R10) + param_4,
           ((in_R11D + -1) * unaff_R13D - in_R10) + param_4,(longlong)iStack00000000000000a8);
  }
  return;
}





// 函数: void FUN_18069c4ff(void)
void FUN_18069c4ff(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}





// 函数: void FUN_18069c540(int *param_1,int *param_2)
void FUN_18069c540(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_1[1]) {
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(param_2 + 0xe),*(uint64_t *)(param_1 + 0xe),(longlong)*param_1);
  }
  if (0 < param_1[6]) {
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(param_2 + 0x10),*(uint64_t *)(param_1 + 0x10),(longlong)param_1[5]);
  }
  if (0 < param_1[6]) {
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(param_2 + 0x12),*(uint64_t *)(param_1 + 0x12),(longlong)param_1[5]);
  }
  iVar1 = param_2[0x19];
  iVar2 = iVar1 / 2;
  FUN_18069c3b0(*(uint64_t *)(param_2 + 0xe),param_2[4],param_2[2],param_2[3],iVar1,iVar1,
                (param_2[1] - param_2[3]) + iVar1,(iVar1 - param_2[2]) + *param_2);
  FUN_18069c3b0(*(uint64_t *)(param_2 + 0x10),param_2[9],param_2[7],param_2[8],iVar2,iVar2,
                (param_2[6] - param_2[8]) + iVar2,(param_2[5] - param_2[7]) + iVar2);
  FUN_18069c3b0(*(uint64_t *)(param_2 + 0x12),param_2[9],param_2[7],param_2[8],iVar2,iVar2,
                (param_2[6] - param_2[8]) + iVar2,(param_2[5] - param_2[7]) + iVar2);
  return;
}





// 函数: void FUN_18069c640(int *param_1)
void FUN_18069c640(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[0x19];
  iVar2 = iVar1 / 2;
  FUN_18069c3b0(*(uint64_t *)(param_1 + 0xe),param_1[4],param_1[2],param_1[3],iVar1,iVar1,
                (param_1[1] - param_1[3]) + iVar1,(iVar1 - param_1[2]) + *param_1);
  FUN_18069c3b0(*(uint64_t *)(param_1 + 0x10),param_1[9],param_1[7],param_1[8],iVar2,iVar2,
                (param_1[6] - param_1[8]) + iVar2,(param_1[5] - param_1[7]) + iVar2);
  FUN_18069c3b0(*(uint64_t *)(param_1 + 0x12),param_1[9],param_1[7],param_1[8],iVar2,iVar2,
                (param_1[6] - param_1[8]) + iVar2,(param_1[5] - param_1[7]) + iVar2);
  return;
}





// 函数: void FUN_18069c710(longlong param_1,uint64_t param_2,longlong param_3,longlong param_4,int param_5
void FUN_18069c710(longlong param_1,uint64_t param_2,longlong param_3,longlong param_4,int param_5
                  ,ushort *param_6)

{
  if (*param_6 != 0) {
    if ((*param_6 & 0xfefe) == 0) {
      func_0x000180029620();
    }
    else {
      func_0x0001800296e1();
    }
  }
  if (param_6[1] != 0) {
    if ((param_6[1] & 0xfefe) == 0) {
      func_0x000180029620(param_1 + 0x40,param_2,param_3 + param_5 * 4,param_5);
    }
    else {
      func_0x0001800296e1();
    }
  }
  if (param_6[2] != 0) {
    if ((param_6[2] & 0xfefe) == 0) {
      func_0x000180029620(param_1 + 0x80,param_2,param_4,param_5);
    }
    else {
      func_0x0001800296e1();
    }
  }
  if (param_6[3] != 0) {
    if ((param_6[3] & 0xfefe) == 0) {
      func_0x000180029620(param_1 + 0xc0,param_2,param_4 + param_5 * 4,param_5);
    }
    else {
      func_0x0001800296e1();
    }
  }
  return;
}





// 函数: void FUN_18069c820(longlong param_1,uint64_t param_2,longlong param_3,int param_4,ushort *param_5)
void FUN_18069c820(longlong param_1,uint64_t param_2,longlong param_3,int param_4,ushort *param_5)

{
  longlong lVar1;
  
  lVar1 = 4;
  do {
    if (*param_5 != 0) {
      if ((*param_5 & 0xfefe) == 0) {
        func_0x000180029620(param_1,param_2,param_3,param_4);
      }
      else {
        func_0x0001800296e1();
      }
    }
    if (param_5[1] != 0) {
      if ((param_5[1] & 0xfefe) == 0) {
        func_0x000180029620(param_1 + 0x40,param_2,param_3 + 8,param_4);
      }
      else {
        func_0x0001800296e1();
      }
    }
    param_1 = param_1 + 0x80;
    param_3 = param_3 + param_4 * 4;
    param_5 = param_5 + 2;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}





// 函数: void FUN_18069c900(uint64_t param_1,longlong param_2,longlong param_3,int32_t param_4,
void FUN_18069c900(uint64_t param_1,longlong param_2,longlong param_3,int32_t param_4,
                  int param_5,longlong param_6)

{
  func_0x00018002acc0(param_1,param_4,*(uint64_t *)(param_6 + 8),*(uint64_t *)(param_6 + 0x10),
                      *(uint64_t *)(param_6 + 0x18),2);
  if (param_2 != 0) {
    func_0x00018001a840(param_5 * 4 + param_2,param_5,*(uint64_t *)(param_6 + 8),
                        *(uint64_t *)(param_6 + 0x10),*(uint64_t *)(param_6 + 0x18),
                        param_5 * 4 + param_3);
  }
  return;
}



// WARNING: Possible PIC construction at 0x00018069c9b4: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00018069c9b9)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18069c990(longlong param_1,int param_2,int8_t (*param_3) [16])
void FUN_18069c990(longlong param_1,int param_2,int8_t (*param_3) [16])

{
  int8_t auVar1 [16];
  longlong lVar2;
  int8_t (*pauVar3) [16];
  int8_t auVar4 [16];
  int8_t auVar5 [16];
  int8_t auVar6 [16];
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  
  auVar1 = _DAT_180d9e5d0;
  pauVar3 = (int8_t (*) [16])(param_2 * 4 + param_1);
  lVar2 = (longlong)param_2;
  auVar5 = *(int8_t (*) [16])(*pauVar3 + lVar2);
  auVar7 = *(int8_t (*) [16])((longlong)pauVar3 + lVar2 * -2);
  auVar4 = psubusb(auVar5,auVar7);
  auVar6 = psubusb(auVar7,auVar5);
  auVar4 = (auVar6 | auVar4) & _DAT_180d9e5c0;
  auVar10._0_2_ = auVar4._0_2_ >> 1;
  auVar10._2_2_ = auVar4._2_2_ >> 1;
  auVar10._4_2_ = auVar4._4_2_ >> 1;
  auVar10._6_2_ = auVar4._6_2_ >> 1;
  auVar10._8_2_ = auVar4._8_2_ >> 1;
  auVar10._10_2_ = auVar4._10_2_ >> 1;
  auVar10._12_2_ = auVar4._12_2_ >> 1;
  auVar10._14_2_ = auVar4._14_2_ >> 1;
  auVar4 = *(int8_t (*) [16])((longlong)pauVar3 + -lVar2);
  auVar6 = *pauVar3;
  auVar9 = psubusb(auVar4,auVar6);
  auVar8 = psubusb(auVar6,auVar4);
  auVar8 = paddusb(auVar9 | auVar8,auVar9 | auVar8);
  auVar10 = paddusb(auVar8,auVar10);
  auVar10 = psubusb(auVar10,*param_3);
  auVar8[0] = -(auVar10[0] == '\0');
  auVar8[1] = -(auVar10[1] == '\0');
  auVar8[2] = -(auVar10[2] == '\0');
  auVar8[3] = -(auVar10[3] == '\0');
  auVar8[4] = -(auVar10[4] == '\0');
  auVar8[5] = -(auVar10[5] == '\0');
  auVar8[6] = -(auVar10[6] == '\0');
  auVar8[7] = -(auVar10[7] == '\0');
  auVar8[8] = -(auVar10[8] == '\0');
  auVar8[9] = -(auVar10[9] == '\0');
  auVar8[10] = -(auVar10[10] == '\0');
  auVar8[0xb] = -(auVar10[0xb] == '\0');
  auVar8[0xc] = -(auVar10[0xc] == '\0');
  auVar8[0xd] = -(auVar10[0xd] == '\0');
  auVar8[0xe] = -(auVar10[0xe] == '\0');
  auVar8[0xf] = -(auVar10[0xf] == '\0');
  auVar7 = psubsb(auVar7 ^ _DAT_180d9e5d0,auVar5 ^ _DAT_180d9e5d0);
  auVar5 = psubsb(auVar6 ^ _DAT_180d9e5d0,auVar4 ^ _DAT_180d9e5d0);
  auVar7 = paddsb(auVar7,auVar5);
  auVar7 = paddsb(auVar7,auVar5);
  auVar5 = paddsb(auVar7,auVar5);
  auVar10 = paddsb(auVar8 & auVar5,_DAT_180d9e5f0);
  auVar5 = paddsb(auVar8 & auVar5,_DAT_180d9e600);
  auVar9[0] = -(auVar5[0] < '\0');
  auVar9[1] = -(auVar5[1] < '\0');
  auVar9[2] = -(auVar5[2] < '\0');
  auVar9[3] = -(auVar5[3] < '\0');
  auVar9[4] = -(auVar5[4] < '\0');
  auVar9[5] = -(auVar5[5] < '\0');
  auVar9[6] = -(auVar5[6] < '\0');
  auVar9[7] = -(auVar5[7] < '\0');
  auVar9[8] = -(auVar5[8] < '\0');
  auVar9[9] = -(auVar5[9] < '\0');
  auVar9[10] = -(auVar5[10] < '\0');
  auVar9[0xb] = -(auVar5[0xb] < '\0');
  auVar9[0xc] = -(auVar5[0xc] < '\0');
  auVar9[0xd] = -(auVar5[0xd] < '\0');
  auVar9[0xe] = -(auVar5[0xe] < '\0');
  auVar9[0xf] = -(auVar5[0xf] < '\0');
  auVar7._0_2_ = auVar5._0_2_ >> 3;
  auVar7._2_2_ = auVar5._2_2_ >> 3;
  auVar7._4_2_ = auVar5._4_2_ >> 3;
  auVar7._6_2_ = auVar5._6_2_ >> 3;
  auVar7._8_2_ = auVar5._8_2_ >> 3;
  auVar7._10_2_ = auVar5._10_2_ >> 3;
  auVar7._12_2_ = auVar5._12_2_ >> 3;
  auVar7._14_2_ = auVar5._14_2_ >> 3;
  auVar5 = psubsb(auVar6 ^ _DAT_180d9e5d0,auVar7 & _DAT_180d9e650 | auVar9 & _DAT_180d9e640);
  auVar11[0] = -(auVar10[0] < '\0');
  auVar11[1] = -(auVar10[1] < '\0');
  auVar11[2] = -(auVar10[2] < '\0');
  auVar11[3] = -(auVar10[3] < '\0');
  auVar11[4] = -(auVar10[4] < '\0');
  auVar11[5] = -(auVar10[5] < '\0');
  auVar11[6] = -(auVar10[6] < '\0');
  auVar11[7] = -(auVar10[7] < '\0');
  auVar11[8] = -(auVar10[8] < '\0');
  auVar11[9] = -(auVar10[9] < '\0');
  auVar11[10] = -(auVar10[10] < '\0');
  auVar11[0xb] = -(auVar10[0xb] < '\0');
  auVar11[0xc] = -(auVar10[0xc] < '\0');
  auVar11[0xd] = -(auVar10[0xd] < '\0');
  auVar11[0xe] = -(auVar10[0xe] < '\0');
  auVar11[0xf] = -(auVar10[0xf] < '\0');
  auVar6._0_2_ = auVar10._0_2_ >> 3;
  auVar6._2_2_ = auVar10._2_2_ >> 3;
  auVar6._4_2_ = auVar10._4_2_ >> 3;
  auVar6._6_2_ = auVar10._6_2_ >> 3;
  auVar6._8_2_ = auVar10._8_2_ >> 3;
  auVar6._10_2_ = auVar10._10_2_ >> 3;
  auVar6._12_2_ = auVar10._12_2_ >> 3;
  auVar6._14_2_ = auVar10._14_2_ >> 3;
  auVar7 = paddsb(auVar4 ^ _DAT_180d9e5d0,auVar6 & _DAT_180d9e650 | auVar11 & _DAT_180d9e640);
  *pauVar3 = auVar5 ^ _DAT_180d9e5d0;
  *(int8_t (*) [16])((longlong)pauVar3 + -lVar2) = auVar7 ^ auVar1;
  return;
}





// 函数: void FUN_18069ca00(uint64_t param_1,longlong param_2,longlong param_3,int32_t param_4,
void FUN_18069ca00(uint64_t param_1,longlong param_2,longlong param_3,int32_t param_4,
                  int32_t param_5,longlong param_6)

{
  func_0x00018002b38a(param_1,param_4,*(uint64_t *)(param_6 + 8),*(uint64_t *)(param_6 + 0x10),
                      *(uint64_t *)(param_6 + 0x18),2);
  if (param_2 != 0) {
    func_0x00018001b1ed(param_2 + 4,param_5,*(uint64_t *)(param_6 + 8),
                        *(uint64_t *)(param_6 + 0x10),*(uint64_t *)(param_6 + 0x18),param_3 + 4)
    ;
  }
  return;
}



// WARNING: Possible PIC construction at 0x00018069ca9b: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00018069caa0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



