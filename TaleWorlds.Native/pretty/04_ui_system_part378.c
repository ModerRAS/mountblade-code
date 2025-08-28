#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part378.c - 32 个函数

// 函数: void FUN_18086f5fd(void)
void FUN_18086f5fd(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18086f610(longlong param_1,longlong param_2,uint64_t param_3)
void FUN_18086f610(longlong param_1,longlong param_2,uint64_t param_3)

{
  longlong lVar1;
  int iVar2;
  uint64_t *puVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar5 = FUN_18086f300();
  if (iVar5 == 0) {
    iVar5 = FUN_18086ddc0(param_1,param_2,param_3);
    if (iVar5 == 0) {
      iVar5 = FUN_18086f040(param_1,param_2,param_3);
      if (iVar5 == 0) {
        iVar5 = FUN_18086e5c0(param_1,param_2,param_3);
        if (iVar5 == 0) {
          iVar5 = FUN_18086e330(param_1,param_2,param_3);
          if (iVar5 == 0) {
            iVar5 = FUN_18086eda0(param_1,param_2,param_3);
            if (iVar5 == 0) {
              uVar6 = 0;
              while ((iVar5 = (int)uVar6, -1 < iVar5 &&
                     (iVar2 = *(int *)(param_1 + 0x68), iVar5 < iVar2))) {
                puVar3 = *(uint64_t **)(*(longlong *)(param_1 + 0x60) + (longlong)iVar5 * 8);
                lVar1 = *(longlong *)(param_1 + 0x60) + (longlong)iVar5 * 8;
                uVar6 = param_2 + 0xf0;
                if (param_2 == 0) {
                  uVar6 = 0;
                }
                if (uVar6 != 0) {
                  cVar4 = func_0x000180875460(uVar6,puVar3 + 2);
                  if (cVar4 != '\0') {
                    iVar5 = (iVar2 - iVar5) + -1;
                    if (0 < iVar5) {
                    // WARNING: Subroutine does not return
                      memmove(lVar1,lVar1 + 8,(longlong)iVar5 << 3);
                    }
                    *(int *)(param_1 + 0x68) = iVar2 + -1;
                    (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
                    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),puVar3,&unknown_var_5856_ptr,
                                  0xc2f,1);
                  }
                }
                uVar6 = (ulonglong)(iVar5 + 1);
              }
              iVar5 = FUN_18086e860(param_1,param_2,param_3);
              if (iVar5 == 0) {
                iVar5 = FUN_18086e090(param_1,param_2,param_3);
                if (iVar5 == 0) {
                  FUN_18086eb00(param_1,param_2,param_3);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18086f69d(void)
void FUN_18086f69d(void)

{
  longlong lVar1;
  int iVar2;
  uint64_t *puVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  uVar6 = 0;
  while ((iVar5 = (int)uVar6, -1 < iVar5 && (iVar2 = *(int *)(unaff_RDI + 0x68), iVar5 < iVar2))) {
    puVar3 = *(uint64_t **)(*(longlong *)(unaff_RDI + 0x60) + (longlong)iVar5 * 8);
    lVar1 = *(longlong *)(unaff_RDI + 0x60) + (longlong)iVar5 * 8;
    uVar6 = unaff_RBP + 0xf0;
    if (unaff_RBP == 0) {
      uVar6 = 0;
    }
    if (uVar6 != 0) {
      cVar4 = func_0x000180875460(uVar6,puVar3 + 2);
      if (cVar4 != '\0') {
        iVar5 = (iVar2 - iVar5) + -1;
        if (0 < iVar5) {
                    // WARNING: Subroutine does not return
          memmove(lVar1,lVar1 + 8,(longlong)iVar5 << 3);
        }
        *(int *)(unaff_RDI + 0x68) = iVar2 + -1;
        (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),puVar3,&unknown_var_5856_ptr,0xc2f,1);
      }
    }
    uVar6 = (ulonglong)(iVar5 + 1);
  }
  iVar5 = FUN_18086e860();
  if (iVar5 == 0) {
    iVar5 = FUN_18086e090();
    if (iVar5 == 0) {
      FUN_18086eb00();
    }
  }
  return;
}





// 函数: void FUN_18086f793(void)
void FUN_18086f793(void)

{
  int iVar1;
  
  iVar1 = FUN_18086e090();
  if (iVar1 == 0) {
    FUN_18086eb00();
  }
  return;
}





// 函数: void FUN_18086f7c0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_18086f7c0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_18086f8b0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_18086f8b0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_18086f9a0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_18086f9a0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_18086fa90(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_18086fa90(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_18086fb80(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_18086fb80(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_18086fc70(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_18086fc70(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_18086fd60(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_18086fd60(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_18086fe50(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_18086fe50(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_18086ff40(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_18086ff40(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_180870030(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_180870030(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_180870120(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_180870120(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_180870210(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_180870210(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_180870310(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_180870310(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_180870410(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_180870410(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_180870500(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_180870500(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_1808705f0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_1808705f0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_1808706e0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_1808706e0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_1808707d0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_1808707d0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_1808708c0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_1808708c0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_1808709b0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_1808709b0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_180870aa0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_180870aa0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_180870b90(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_180870b90(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_180870c80(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_180870c80(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_180870d70(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_180870d70(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_180870e60(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_180870e60(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_180870f50(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_180870f50(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_180871040(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_180871040(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}





// 函数: void FUN_180871130(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_180871130(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
                    // WARNING: Subroutine does not return
  memset(*param_3,0,(longlong)*(int *)(param_3 + 1));
}



uint64_t FUN_180871220(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint64_t uVar2;
  int iVar3;
  
  for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(param_1 + 0x1d8))); iVar3 = iVar3 + 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x1d0) + (longlong)iVar3 * 8) != 0) {
      plVar1 = (longlong *)(**(code **)(*param_2 + 0x38))(param_2,0);
      uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
  }
  return 0;
}



uint64_t FUN_1808712a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint64_t uVar2;
  int iVar3;
  
  for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(param_1 + 0x1e8))); iVar3 = iVar3 + 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x1e0) + (longlong)iVar3 * 8) != 0) {
      plVar1 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2,0);
      uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
  }
  return 0;
}



uint64_t FUN_180871320(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint64_t uVar2;
  int iVar3;
  
  for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(param_1 + 0x1f8))); iVar3 = iVar3 + 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x1f0) + (longlong)iVar3 * 8) != 0) {
      plVar1 = (longlong *)(**(code **)(*param_2 + 0x58))(param_2,0);
      uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
  }
  return 0;
}



uint64_t *
FUN_1808719a0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5)

{
  uint64_t *puVar1;
  
  puVar1 = param_1 + 1;
  *puVar1 = puVar1;
  param_1[2] = puVar1;
  *(int32_t *)(param_1 + 3) = 0xffffffff;
  *param_1 = &unknown_var_4696_ptr;
  *(uint64_t *)((longlong)param_1 + 0x1c) = 0;
  puVar1 = param_1 + 10;
  *(int32_t *)((longlong)param_1 + 0x24) = 0;
  *(int32_t *)(param_1 + 5) = 1;
  param_1[0xb] = 0;
  *puVar1 = puVar1;
  param_1[0xb] = puVar1;
  func_0x0001808674c0(param_1 + 0xc);
  param_1[0xf] = param_2;
  param_1[0x10] = param_4;
  param_1[0x11] = 0;
  param_1[0x12] = param_3;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x61] = 0;
  *(int32_t *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  param_1[100] = param_5;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(int32_t *)(param_1 + 0x69) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x34c) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(int32_t *)(param_1 + 0x6f) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x37c) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(int32_t *)(param_1 + 0x75) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x3ac) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(int32_t *)(param_1 + 0x7b) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x3dc) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(int32_t *)(param_1 + 0x81) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x40c) = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  *(int32_t *)(param_1 + 0x87) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x43c) = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(int32_t *)(param_1 + 0x8d) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x46c) = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(int32_t *)(param_1 + 0x93) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x49c) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  *(int32_t *)(param_1 + 0x99) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x4cc) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(int32_t *)(param_1 + 0x9f) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x4fc) = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  *(int32_t *)(param_1 + 0xa5) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x52c) = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  *(int32_t *)(param_1 + 0xab) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x55c) = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(int32_t *)(param_1 + 0xb1) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x58c) = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(int32_t *)(param_1 + 0xb7) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x5bc) = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  *(int32_t *)(param_1 + 0xbd) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x5ec) = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  *(int32_t *)(param_1 + 0xc3) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x61c) = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  *(int32_t *)(param_1 + 0xc9) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x64c) = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(int32_t *)(param_1 + 0xcf) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x67c) = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  *(int32_t *)(param_1 + 0xd5) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x6ac) = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  *(int32_t *)(param_1 + 0xdb) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x6dc) = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  *(int32_t *)(param_1 + 0xe1) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x70c) = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  *(int32_t *)(param_1 + 0xe7) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x73c) = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  *(int32_t *)(param_1 + 0xed) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x76c) = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  *(int32_t *)(param_1 + 0xf3) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x79c) = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  *(int32_t *)(param_1 + 0xf9) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x7cc) = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  *(int32_t *)(param_1 + 0xff) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x7fc) = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  *(int32_t *)(param_1 + 0x105) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x82c) = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  *(int32_t *)(param_1 + 0x10b) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x85c) = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  *(int32_t *)(param_1 + 0x111) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x88c) = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  *(int32_t *)(param_1 + 0x117) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x8bc) = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x125] = param_1 + 0xa7;
  param_1[0x124] = &unknown_var_4424_ptr;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x129] = param_1 + 0xcb;
  param_1[0x128] = &unknown_var_4424_ptr;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[0x12d] = param_1 + 0xd1;
  param_1[300] = &unknown_var_4424_ptr;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x132] = param_1[0x12];
  param_1[0x133] = &unknown_var_4316_ptr;
  param_1[0x130] = &unknown_var_4424_ptr;
  param_1[0x131] = param_1 + 0xbf;
  param_1[0x136] = param_1[0x12];
  param_1[0x137] = &unknown_var_4324_ptr;
  param_1[0x134] = &unknown_var_4424_ptr;
  param_1[0x135] = param_1 + 0xc5;
  param_1[0x138] = &unknown_var_4424_ptr;
  param_1[0x139] = param_1 + 0xad;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = &unknown_var_4424_ptr;
  param_1[0x13d] = param_1 + 0xb3;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = &unknown_var_4424_ptr;
  param_1[0x141] = param_1 + 0xb9;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = &unknown_var_4552_ptr;
  param_1[0x145] = param_1 + 0xd7;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x148] = &unknown_var_4592_ptr;
  param_1[0x149] = param_1 + 0xdd;
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  param_1[0x14d] = 0;
  puVar1 = param_1 + 0x155;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x156] = 0;
  *puVar1 = puVar1;
  param_1[0x156] = puVar1;
  *(int32_t *)(param_1 + 0x157) = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  func_0x000180871840(param_1 + 0x15b);
  param_1[0x158] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(int32_t *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(int32_t *)(param_1 + 6) = 0x3f800000;
  *(int32_t *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(int32_t *)(param_1 + 7) = 0x3f800000;
  *(int32_t *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(int32_t *)(param_1 + 8) = 0x3f800000;
  *(int32_t *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(int32_t *)(param_1 + 9) = 0x3f800000;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000180883143)
// WARNING: Removing unreachable block (ram,0x000180883157)
// WARNING: Removing unreachable block (ram,0x000180883191)
// WARNING: Removing unreachable block (ram,0x00018088319d)
// WARNING: Removing unreachable block (ram,0x0001808831a9)
// WARNING: Removing unreachable block (ram,0x0001808831b0)
// WARNING: Removing unreachable block (ram,0x0001808831c0)
// WARNING: Removing unreachable block (ram,0x000180883213)
// WARNING: Removing unreachable block (ram,0x000180883279)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_180872300(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = uVar3 ^ (int)uVar3 >> 0x1f;
  if ((int)(uVar2 - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return uVar2;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
      memset((longlong)iVar1 * 0x118 + *param_1,0,(ulonglong)(uint)-iVar1 * 0x118);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar3 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  if ((int)uVar3 < 1) {
    return uVar3;
  }
  if (0 < (int)param_1[1]) {
    return 0x1c;
  }
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = 0;
  *(int32_t *)((longlong)param_1 + 0xc) = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0001808832c3)
// WARNING: Removing unreachable block (ram,0x0001808832d7)
// WARNING: Removing unreachable block (ram,0x000180883311)
// WARNING: Removing unreachable block (ram,0x00018088331d)
// WARNING: Removing unreachable block (ram,0x000180883329)
// WARNING: Removing unreachable block (ram,0x000180883330)
// WARNING: Removing unreachable block (ram,0x000180883340)
// WARNING: Removing unreachable block (ram,0x000180883393)
// WARNING: Removing unreachable block (ram,0x000180883405)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_1808723c0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = uVar3 ^ (int)uVar3 >> 0x1f;
  if ((int)(uVar2 - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return uVar2;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
      memset((longlong)iVar1 * 0x128 + *param_1,0,(ulonglong)(uint)-iVar1 * 0x128);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar3 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  if ((int)uVar3 < 1) {
    return uVar3;
  }
  if (0 < (int)param_1[1]) {
    return 0x1c;
  }
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = 0;
  *(int32_t *)((longlong)param_1 + 0xc) = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x000180883653)
// WARNING: Removing unreachable block (ram,0x000180883664)
// WARNING: Removing unreachable block (ram,0x00018088369e)
// WARNING: Removing unreachable block (ram,0x0001808836a6)
// WARNING: Removing unreachable block (ram,0x0001808836ae)
// WARNING: Removing unreachable block (ram,0x0001808836c0)
// WARNING: Removing unreachable block (ram,0x000180883732)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_180872480(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = uVar3 ^ (int)uVar3 >> 0x1f;
  if ((int)(uVar2 - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return uVar2;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
      memset((longlong)iVar1 * 0x1c + *param_1,0,(ulonglong)(uint)-iVar1 * 0x1c);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar3 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  if ((int)uVar3 < 1) {
    return uVar3;
  }
  if (0 < (int)param_1[1]) {
    return 0x1c;
  }
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = 0;
  *(int32_t *)((longlong)param_1 + 0xc) = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



