#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part157.c - 33 个函数

// 函数: void FUN_18013df80(int *param_1,uint64_t *param_2)
void FUN_18013df80(int *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  longlong lVar2;
  int iVar3;
  uint64_t uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = *param_1;
  iVar5 = param_1[1];
  if (iVar6 == iVar5) {
    if (iVar5 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar5 / 2 + iVar5;
    }
    iVar3 = iVar6 + 1;
    if (iVar6 + 1 < iVar5) {
      iVar3 = iVar5;
    }
    FUN_18013e760(param_1,iVar3);
    iVar6 = *param_1;
  }
  uVar4 = param_2[1];
  lVar7 = (longlong)iVar6;
  lVar2 = *(longlong *)(param_1 + 2);
  puVar1 = (uint64_t *)(lVar2 + lVar7 * 0x30);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  uVar4 = param_2[3];
  puVar1 = (uint64_t *)(lVar2 + 0x10 + lVar7 * 0x30);
  *puVar1 = param_2[2];
  puVar1[1] = uVar4;
  uVar4 = param_2[5];
  puVar1 = (uint64_t *)(lVar2 + 0x20 + lVar7 * 0x30);
  *puVar1 = param_2[4];
  puVar1[1] = uVar4;
  *param_1 = *param_1 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013e000(int *param_1,uint64_t *param_2)
void FUN_18013e000(int *param_1,uint64_t *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint64_t uVar4;
  int iVar5;
  
  iVar1 = param_1[1];
  if (*param_1 == iVar1) {
    iVar5 = *param_1 + 1;
    if (iVar1 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar1 / 2 + iVar1;
    }
    if (iVar5 < iVar3) {
      iVar5 = iVar3;
    }
    if (iVar1 < iVar5) {
      if (_DAT_180c8a9b0 != 0) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
      }
      uVar4 = func_0x000180120ce0((longlong)iVar5 * 0xc,_DAT_180c8a9a8);
      if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(uVar4,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0xc);
      }
      *(uint64_t *)(param_1 + 2) = uVar4;
      param_1[1] = iVar5;
    }
  }
  iVar1 = *param_1;
  lVar2 = *(longlong *)(param_1 + 2);
  *(uint64_t *)(lVar2 + (longlong)iVar1 * 0xc) = *param_2;
  *(int32_t *)(lVar2 + (longlong)iVar1 * 0xc + 8) = *(int32_t *)(param_2 + 1);
  *param_1 = *param_1 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013e04c(void)
void FUN_18013e04c(void)

{
  int iVar1;
  longlong lVar2;
  longlong in_RAX;
  uint64_t uVar3;
  int *unaff_RBX;
  uint64_t *unaff_RBP;
  int unaff_EDI;
  
  if (in_RAX != 0) {
    *(int *)(in_RAX + 0x3a8) = *(int *)(in_RAX + 0x3a8) + 1;
  }
  uVar3 = func_0x000180120ce0((longlong)unaff_EDI * 0xc,_DAT_180c8a9a8);
  if (*(longlong *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar3,*(longlong *)(unaff_RBX + 2),(longlong)*unaff_RBX * 0xc);
  }
  *(uint64_t *)(unaff_RBX + 2) = uVar3;
  unaff_RBX[1] = unaff_EDI;
  iVar1 = *unaff_RBX;
  lVar2 = *(longlong *)(unaff_RBX + 2);
  *(uint64_t *)(lVar2 + (longlong)iVar1 * 0xc) = *unaff_RBP;
  *(int32_t *)(lVar2 + (longlong)iVar1 * 0xc + 8) = *(int32_t *)(unaff_RBP + 1);
  *unaff_RBX = *unaff_RBX + 1;
  return;
}





// 函数: void FUN_18013e0c5(void)
void FUN_18013e0c5(void)

{
  int iVar1;
  longlong lVar2;
  int *unaff_RBX;
  uint64_t *unaff_RBP;
  
  iVar1 = *unaff_RBX;
  lVar2 = *(longlong *)(unaff_RBX + 2);
  *(uint64_t *)(lVar2 + (longlong)iVar1 * 0xc) = *unaff_RBP;
  *(int32_t *)(lVar2 + (longlong)iVar1 * 0xc + 8) = *(int32_t *)(unaff_RBP + 1);
  *unaff_RBX = *unaff_RBX + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013e100(int *param_1,uint64_t *param_2)
void FUN_18013e100(int *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint64_t uVar5;
  int iVar6;
  
  iVar2 = param_1[1];
  if (*param_1 == iVar2) {
    iVar6 = *param_1 + 1;
    if (iVar2 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar2 / 2 + iVar2;
    }
    if (iVar6 < iVar4) {
      iVar6 = iVar4;
    }
    if (iVar2 < iVar6) {
      if (_DAT_180c8a9b0 != 0) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
      }
      uVar5 = func_0x000180120ce0((longlong)iVar6 * 0x14,_DAT_180c8a9a8);
      if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(uVar5,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x14);
      }
      *(uint64_t *)(param_1 + 2) = uVar5;
      param_1[1] = iVar6;
    }
  }
  iVar2 = *param_1;
  uVar5 = param_2[1];
  lVar3 = *(longlong *)(param_1 + 2);
  puVar1 = (uint64_t *)(lVar3 + (longlong)iVar2 * 0x14);
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  *(int32_t *)(lVar3 + (longlong)iVar2 * 0x14 + 0x10) = *(int32_t *)(param_2 + 2);
  *param_1 = *param_1 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013e14c(void)
void FUN_18013e14c(void)

{
  uint64_t *puVar1;
  int iVar2;
  longlong lVar3;
  longlong in_RAX;
  uint64_t uVar4;
  int *unaff_RBX;
  uint64_t *unaff_RBP;
  int unaff_EDI;
  
  if (in_RAX != 0) {
    *(int *)(in_RAX + 0x3a8) = *(int *)(in_RAX + 0x3a8) + 1;
  }
  uVar4 = func_0x000180120ce0((longlong)unaff_EDI * 0x14,_DAT_180c8a9a8);
  if (*(longlong *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar4,*(longlong *)(unaff_RBX + 2),(longlong)*unaff_RBX * 0x14);
  }
  *(uint64_t *)(unaff_RBX + 2) = uVar4;
  unaff_RBX[1] = unaff_EDI;
  iVar2 = *unaff_RBX;
  uVar4 = unaff_RBP[1];
  lVar3 = *(longlong *)(unaff_RBX + 2);
  puVar1 = (uint64_t *)(lVar3 + (longlong)iVar2 * 0x14);
  *puVar1 = *unaff_RBP;
  puVar1[1] = uVar4;
  *(int32_t *)(lVar3 + (longlong)iVar2 * 0x14 + 0x10) = *(int32_t *)(unaff_RBP + 2);
  *unaff_RBX = *unaff_RBX + 1;
  return;
}





// 函数: void FUN_18013e1c5(void)
void FUN_18013e1c5(void)

{
  uint64_t *puVar1;
  int iVar2;
  longlong lVar3;
  uint64_t uVar4;
  int *unaff_RBX;
  uint64_t *unaff_RBP;
  
  iVar2 = *unaff_RBX;
  uVar4 = unaff_RBP[1];
  lVar3 = *(longlong *)(unaff_RBX + 2);
  puVar1 = (uint64_t *)(lVar3 + (longlong)iVar2 * 0x14);
  *puVar1 = *unaff_RBP;
  puVar1[1] = uVar4;
  *(int32_t *)(lVar3 + (longlong)iVar2 * 0x14 + 0x10) = *(int32_t *)(unaff_RBP + 2);
  *unaff_RBX = *unaff_RBX + 1;
  return;
}





// 函数: void FUN_18013e200(int32_t *param_1)
void FUN_18013e200(int32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (iVar2 < 0) {
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    iVar1 = 0;
    if (0 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_18011dc70(param_1,iVar1);
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013e250(int *param_1,int param_2)
void FUN_18013e250(int *param_1,int param_2)

{
  uint64_t uVar1;
  
  if (param_1[1] < param_2) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
    }
    uVar1 = func_0x000180120ce0((longlong)param_2 * 0x1c,_DAT_180c8a9a8);
    if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(uVar1,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x1c);
    }
    *(uint64_t *)(param_1 + 2) = uVar1;
    param_1[1] = param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013e26c(void)
void FUN_18013e26c(void)

{
  longlong in_RAX;
  uint64_t uVar1;
  int *unaff_RBX;
  longlong unaff_RDI;
  
  if (in_RAX != 0) {
    *(int *)(in_RAX + 0x3a8) = *(int *)(in_RAX + 0x3a8) + 1;
  }
  uVar1 = func_0x000180120ce0(unaff_RDI * 0x1c,_DAT_180c8a9a8);
  if (*(longlong *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(longlong *)(unaff_RBX + 2),(longlong)*unaff_RBX * 0x1c);
  }
  *(uint64_t *)(unaff_RBX + 2) = uVar1;
  unaff_RBX[1] = (int)unaff_RDI;
  return;
}





// 函数: void FUN_18013e2da(void)
void FUN_18013e2da(void)

{
  return;
}





// 函数: void FUN_18013e2f0(int32_t *param_1)
void FUN_18013e2f0(int32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (iVar2 < 0) {
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    iVar1 = 0;
    if (0 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_18011dbd0(param_1,iVar1);
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  return;
}





// 函数: void FUN_18013e340(int *param_1,int param_2)
void FUN_18013e340(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  if (iVar1 < param_2) {
    if (iVar1 == 0) {
      iVar1 = 8;
    }
    else {
      iVar1 = iVar1 / 2 + iVar1;
    }
    iVar2 = param_2;
    if (param_2 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_18011dbd0(param_1,iVar2);
  }
  *param_1 = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013e390(int *param_1,int32_t *param_2)
void FUN_18013e390(int *param_1,int32_t *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = _DAT_180c8a9b0;
  lVar2 = *(longlong *)(param_1 + 2);
  if (lVar2 != 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    if (lVar3 != 0) {
      piVar1 = (int *)(lVar3 + 0x3a8);
      *piVar1 = *piVar1 + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar2,_DAT_180c8a9a8);
  }
  FUN_18013e800(param_1,*param_2);
                    // WARNING: Subroutine does not return
  memcpy(*(uint64_t *)(param_1 + 2),*(uint64_t *)(param_2 + 2),(longlong)*param_1 * 0x14);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013e410(int *param_1,int *param_2)
void FUN_18013e410(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint64_t uVar7;
  
  lVar5 = _DAT_180c8a9b0;
  lVar3 = *(longlong *)(param_1 + 2);
  if (lVar3 != 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 0x3a8);
      *piVar1 = *piVar1 + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar3,_DAT_180c8a9a8);
  }
  iVar2 = *param_2;
  iVar6 = param_1[1];
  uVar7 = 0;
  if (iVar6 < iVar2) {
    if (iVar6 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar6 / 2 + iVar6;
    }
    iVar4 = iVar2;
    if (iVar2 < iVar6) {
      iVar4 = iVar6;
    }
    FUN_18013e760(param_1,iVar4);
    uVar7 = *(uint64_t *)(param_1 + 2);
  }
  *param_1 = iVar2;
                    // WARNING: Subroutine does not return
  memcpy(uVar7,*(uint64_t *)(param_2 + 2),(longlong)iVar2 * 0x30);
}



longlong FUN_18013e4c0(int *param_1,longlong param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar4 = *param_1;
  iVar3 = param_1[1];
  lVar7 = param_2 - *(longlong *)(param_1 + 2) >> 4;
  if (iVar4 == iVar3) {
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    iVar5 = iVar4 + 1;
    if (iVar4 + 1 < iVar3) {
      iVar5 = iVar3;
    }
    FUN_18013e620(param_1,iVar5);
    iVar4 = *param_1;
  }
  if (lVar7 < iVar4) {
    lVar6 = lVar7 * 0x10 + *(longlong *)(param_1 + 2);
                    // WARNING: Subroutine does not return
    memmove(lVar6 + 0x10,lVar6,(iVar4 - lVar7) * 0x10);
  }
  uVar2 = param_3[1];
  puVar1 = (uint64_t *)(lVar7 * 0x10 + *(longlong *)(param_1 + 2));
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  *param_1 = *param_1 + 1;
  return *(longlong *)(param_1 + 2) + lVar7 * 0x10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013e570(int *param_1,int *param_2)
void FUN_18013e570(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint64_t uVar7;
  
  lVar5 = _DAT_180c8a9b0;
  lVar3 = *(longlong *)(param_1 + 2);
  if (lVar3 != 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 0x3a8);
      *piVar1 = *piVar1 + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar3,_DAT_180c8a9a8);
  }
  iVar2 = *param_2;
  iVar6 = param_1[1];
  uVar7 = 0;
  if (iVar6 < iVar2) {
    if (iVar6 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar6 / 2 + iVar6;
    }
    iVar4 = iVar2;
    if (iVar2 < iVar6) {
      iVar4 = iVar6;
    }
    FUN_18011dd10(param_1,iVar4);
    uVar7 = *(uint64_t *)(param_1 + 2);
  }
  *param_1 = iVar2;
                    // WARNING: Subroutine does not return
  memcpy(uVar7,*(uint64_t *)(param_2 + 2),(longlong)iVar2 * 2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013e620(int *param_1,int param_2)
void FUN_18013e620(int *param_1,int param_2)

{
  uint64_t uVar1;
  
  if (param_1[1] < param_2) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
    }
    uVar1 = func_0x000180120ce0((longlong)param_2 << 4,_DAT_180c8a9a8);
    if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(uVar1,*(longlong *)(param_1 + 2),(longlong)*param_1 << 4);
    }
    *(uint64_t *)(param_1 + 2) = uVar1;
    param_1[1] = param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013e63c(void)
void FUN_18013e63c(void)

{
  longlong in_RAX;
  uint64_t uVar1;
  int *unaff_RBX;
  longlong unaff_RDI;
  
  if (in_RAX != 0) {
    *(int *)(in_RAX + 0x3a8) = *(int *)(in_RAX + 0x3a8) + 1;
  }
  uVar1 = func_0x000180120ce0(unaff_RDI << 4,_DAT_180c8a9a8);
  if (*(longlong *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(longlong *)(unaff_RBX + 2),(longlong)*unaff_RBX << 4);
  }
  *(uint64_t *)(unaff_RBX + 2) = uVar1;
  unaff_RBX[1] = (int)unaff_RDI;
  return;
}





// 函数: void FUN_18013e6ad(void)
void FUN_18013e6ad(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013e6c0(int *param_1,int param_2)
void FUN_18013e6c0(int *param_1,int param_2)

{
  uint64_t uVar1;
  
  if (param_1[1] < param_2) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
    }
    uVar1 = func_0x000180120ce0((longlong)param_2 << 6,_DAT_180c8a9a8);
    if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(uVar1,*(longlong *)(param_1 + 2),(longlong)*param_1 << 6);
    }
    *(uint64_t *)(param_1 + 2) = uVar1;
    param_1[1] = param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013e6dc(void)
void FUN_18013e6dc(void)

{
  longlong in_RAX;
  uint64_t uVar1;
  int *unaff_RBX;
  longlong unaff_RDI;
  
  if (in_RAX != 0) {
    *(int *)(in_RAX + 0x3a8) = *(int *)(in_RAX + 0x3a8) + 1;
  }
  uVar1 = func_0x000180120ce0(unaff_RDI << 6,_DAT_180c8a9a8);
  if (*(longlong *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(longlong *)(unaff_RBX + 2),(longlong)*unaff_RBX << 6);
  }
  *(uint64_t *)(unaff_RBX + 2) = uVar1;
  unaff_RBX[1] = (int)unaff_RDI;
  return;
}





// 函数: void FUN_18013e74d(void)
void FUN_18013e74d(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013e760(int *param_1,int param_2)
void FUN_18013e760(int *param_1,int param_2)

{
  uint64_t uVar1;
  
  if (param_1[1] < param_2) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
    }
    uVar1 = func_0x000180120ce0((longlong)param_2 * 0x30,_DAT_180c8a9a8);
    if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(uVar1,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x30);
    }
    *(uint64_t *)(param_1 + 2) = uVar1;
    param_1[1] = param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013e77c(void)
void FUN_18013e77c(void)

{
  longlong in_RAX;
  uint64_t uVar1;
  int *unaff_RBX;
  longlong unaff_RDI;
  
  if (in_RAX != 0) {
    *(int *)(in_RAX + 0x3a8) = *(int *)(in_RAX + 0x3a8) + 1;
  }
  uVar1 = func_0x000180120ce0(unaff_RDI * 0x30,_DAT_180c8a9a8);
  if (*(longlong *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(longlong *)(unaff_RBX + 2),(longlong)*unaff_RBX * 0x30);
  }
  *(uint64_t *)(unaff_RBX + 2) = uVar1;
  unaff_RBX[1] = (int)unaff_RDI;
  return;
}





// 函数: void FUN_18013e7f2(void)
void FUN_18013e7f2(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013e800(int *param_1,int param_2)
void FUN_18013e800(int *param_1,int param_2)

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
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
    }
    uVar3 = func_0x000180120ce0((longlong)iVar4 * 0x14,_DAT_180c8a9a8);
    if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(uVar3,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x14);
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



// 函数: void FUN_18013e81a(int param_1)
void FUN_18013e81a(int param_1)

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
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
    }
    uVar2 = func_0x000180120ce0((longlong)iVar3 * 0x14,_DAT_180c8a9a8);
    if (*(longlong *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(uVar2,*(longlong *)(unaff_RBX + 2),(longlong)*unaff_RBX * 0x14);
    }
    *(uint64_t *)(unaff_RBX + 2) = uVar2;
    unaff_RBX[1] = iVar3;
    *unaff_RBX = unaff_EDI;
    return;
  }
  *unaff_RBX = unaff_EDI;
  return;
}





// 函数: void FUN_18013e8d4(void)
void FUN_18013e8d4(void)

{
  int32_t *unaff_RBX;
  int32_t unaff_EDI;
  
  *unaff_RBX = unaff_EDI;
  return;
}





// 函数: void FUN_18013e8e6(void)
void FUN_18013e8e6(void)

{
  int32_t *unaff_RBX;
  int32_t unaff_EDI;
  
  *unaff_RBX = unaff_EDI;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013e910(longlong param_1)
void FUN_18013e910(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    FUN_18011fab0(lVar1);
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,_DAT_180c8a9a8);
  }
  FUN_1808fc8a8(param_1 + 0xb8,0x10,2,FUN_18011d900,0xfffffffffffffffe);
  *(int8_t *)(param_1 + 0x88) = 0;
  *(uint64_t *)(param_1 + 0x90) = 0;
  *(uint64_t *)(param_1 + 0x9c) = 0;
  *(int32_t *)(param_1 + 0x98) = 0;
  *(uint64_t *)(param_1 + 0xac) = 0;
  *(uint64_t *)(param_1 + 0xa4) = 0;
  if (_DAT_180c8a9b0 != 0) {
    *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0(param_1,_DAT_180c8a9a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013ea00(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18013ea00(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,_DAT_180c8a9a8,param_3,param_4,0xfffffffffffffffe);
  }
  if (_DAT_180c8a9b0 != 0) {
    *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0(param_1,_DAT_180c8a9a8,param_3,param_4,0xfffffffffffffffe);
}





// 函数: void FUN_18013ea70(void)
void FUN_18013ea70(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_18013f090(longlong param_1)
void FUN_18013f090(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  while( true ) {
    if (lVar3 == param_1) {
      FUN_180058370(param_1,*(uint64_t *)(param_1 + 0x10));
      *(longlong *)param_1 = param_1;
      *(longlong *)(param_1 + 8) = param_1;
      *(uint64_t *)(param_1 + 0x10) = 0;
      *(int8_t *)(param_1 + 0x18) = 0;
      *(uint64_t *)(param_1 + 0x20) = 0;
      return;
    }
    lVar2 = *(longlong *)(lVar3 + 0x40);
    if (lVar2 != 0) break;
    *(uint64_t *)(lVar3 + 0x40) = 0;
    lVar3 = func_0x00018066bd70(lVar3);
  }
  plVar1 = (longlong *)(lVar2 + 0x360);
  lVar3 = *plVar1;
  if (*(longlong *)(lVar2 + 0x368) - lVar3 >> 3 != 0) {
    do {
      if (*(longlong *)(lVar3 + uVar4 * 8) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(*plVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
      lVar3 = *plVar1;
    } while (uVar4 < (ulonglong)(*(longlong *)(lVar2 + 0x368) - lVar3 >> 3));
  }
  *(longlong *)(lVar2 + 0x368) = lVar3;
  *(uint64_t *)(lVar2 + 0x3a8) = &unknown_var_3456_ptr;
  if (*(longlong *)(lVar2 + 0x3b0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(lVar2 + 0x3b0) = 0;
  *(int32_t *)(lVar2 + 0x3c0) = 0;
  *(uint64_t *)(lVar2 + 0x3a8) = &unknown_var_720_ptr;
  *(uint64_t *)(lVar2 + 0x388) = &unknown_var_3456_ptr;
  if (*(longlong *)(lVar2 + 0x390) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(lVar2 + 0x390) = 0;
  *(int32_t *)(lVar2 + 0x3a0) = 0;
  *(uint64_t *)(lVar2 + 0x388) = &unknown_var_720_ptr;
  if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_1800596a0(lVar2 + 0x1f8);
  FUN_1808fc8a8(lVar2,0x48,7,FUN_1800596a0);
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18013f220(longlong *param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
             longlong param_5)

{
  byte bVar1;
  bool bVar2;
  longlong *plVar3;
  byte *pbVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint64_t uVar10;
  
  plVar5 = (longlong *)*param_1;
  if ((param_4 == plVar5) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (*(int *)(param_5 + 0x10) != 0)) {
      plVar8 = param_4;
      if (*(int *)(plVar5 + 6) != 0) {
        pbVar4 = *(byte **)(param_5 + 8);
        plVar8 = (longlong *)(plVar5[5] - (longlong)pbVar4);
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[(longlong)plVar8];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_18013f344;
      }
LAB_18013f327:
      uVar9 = (ulonglong)plVar8 & 0xffffffffffffff00;
LAB_18013f32a:
      if (plVar5 != (longlong *)0x0) {
        FUN_18013f4b0(param_1,param_2,plVar5,uVar9,param_5);
        return param_2;
      }
    }
  }
  else {
    plVar3 = (longlong *)func_0x00018066bd70(param_4);
    if (*(int *)(param_5 + 0x10) != 0) {
      if ((int)param_4[6] != 0) {
        pbVar4 = *(byte **)(param_5 + 8);
        lVar7 = param_4[5] - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[lVar7];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_18013f344;
      }
      if ((int)plVar3[6] != 0) {
        pbVar4 = (byte *)plVar3[5];
        plVar8 = (longlong *)(*(longlong *)(param_5 + 8) - (longlong)pbVar4);
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[(longlong)plVar8];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if (0 < (int)(bVar1 - uVar6)) {
          plVar5 = param_4;
          if (*param_4 == 0) goto LAB_18013f327;
          uVar9 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
          plVar5 = plVar3;
          goto LAB_18013f32a;
        }
      }
    }
  }
LAB_18013f344:
  bVar2 = true;
  plVar5 = (longlong *)param_1[2];
  plVar8 = param_1;
  while (plVar5 != (longlong *)0x0) {
    plVar8 = plVar5;
    if ((int)plVar5[6] == 0) {
      bVar2 = false;
LAB_18013f362:
      plVar5 = (longlong *)*plVar5;
    }
    else {
      if (*(int *)(param_5 + 0x10) == 0) {
        bVar2 = true;
      }
      else {
        pbVar4 = (byte *)plVar5[5];
        lVar7 = *(longlong *)(param_5 + 8) - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[lVar7];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar6);
      }
      if (!bVar2) goto LAB_18013f362;
      plVar5 = (longlong *)plVar5[1];
    }
  }
  plVar5 = plVar8;
  if (bVar2) {
    if (plVar8 != (longlong *)param_1[1]) {
      plVar5 = (longlong *)func_0x00018066b9a0(plVar8);
      goto LAB_18013f382;
    }
  }
  else {
LAB_18013f382:
    if (*(int *)(param_5 + 0x10) == 0) {
LAB_18013f48b:
      *param_2 = plVar5;
      return param_2;
    }
    if ((int)plVar5[6] != 0) {
      pbVar4 = *(byte **)(param_5 + 8);
      lVar7 = plVar5[5] - (longlong)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar7];
        if (bVar1 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_18013f48b;
    }
  }
  if (plVar8 != param_1) {
    if ((int)plVar8[6] == 0) {
LAB_18013f3f7:
      uVar10 = 1;
      goto LAB_18013f440;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar4 = (byte *)plVar8[5];
      lVar7 = *(longlong *)(param_5 + 8) - (longlong)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar7];
        if (bVar1 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_18013f3f7;
    }
  }
  uVar10 = 0;
LAB_18013f440:
  lVar7 = FUN_18062b420(_DAT_180c8ed18,0x48,(char)param_1[5]);
  FUN_180627ae0(lVar7 + 0x20,param_5);
  *(uint64_t *)(lVar7 + 0x40) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar7,plVar8,param_1,uVar10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



