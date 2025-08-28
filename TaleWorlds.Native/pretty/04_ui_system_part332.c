#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part332.c - 5 个函数

// 函数: void FUN_18084dae0(longlong *param_1)
void FUN_18084dae0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
    }
    *param_1 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
  }
  uVar3 = *(uint *)(param_1 + 1);
  uVar4 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
    lVar2 = (longlong)(int)-uVar3;
    if ((int)uVar3 < 0) {
      lVar1 = (longlong)(int)uVar3 * 0x10 + *param_1 + 0xc;
      do {
        *(uint64_t *)(lVar1 + -0xc) = 0;
        *(uint64_t *)(lVar1 + -4) = 0;
        lVar1 = lVar1 + 0x10;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  else if (0 < (int)uVar3) {
    lVar2 = *param_1;
    do {
      FUN_180840270(lVar2);
      lVar2 = lVar2 + 0x10;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar3 = (int)*(uint *)((longlong)param_1 + 0xc) >> 0x1f;
  *(int32_t *)(param_1 + 1) = 0;
  if (0 < (int)((*(uint *)((longlong)param_1 + 0xc) ^ uVar3) - uVar3)) {
    FUN_18084def0(param_1,0);
  }
  return;
}





// 函数: void FUN_18084db76(void)
void FUN_18084db76(void)

{
  longlong in_RAX;
  uint uVar1;
  longlong lVar2;
  int32_t unaff_EBP;
  longlong *unaff_RDI;
  
  lVar2 = *unaff_RDI;
  do {
    FUN_180840270(lVar2);
    lVar2 = lVar2 + 0x10;
    in_RAX = in_RAX + -1;
  } while (in_RAX != 0);
  uVar1 = (int)*(uint *)((longlong)unaff_RDI + 0xc) >> 0x1f;
  *(int32_t *)(unaff_RDI + 1) = unaff_EBP;
  if (0 < (int)((*(uint *)((longlong)unaff_RDI + 0xc) ^ uVar1) - uVar1)) {
    FUN_18084def0();
  }
  return;
}





// 函数: void FUN_18084dba2(void)
void FUN_18084dba2(void)

{
  uint uVar1;
  int32_t unaff_EBP;
  longlong unaff_RDI;
  
  uVar1 = (int)*(uint *)(unaff_RDI + 0xc) >> 0x1f;
  *(int32_t *)(unaff_RDI + 8) = unaff_EBP;
  if (0 < (int)((*(uint *)(unaff_RDI + 0xc) ^ uVar1) - uVar1)) {
    FUN_18084def0();
  }
  return;
}



longlong FUN_18084dbd0(longlong param_1,ulonglong param_2)

{
  FUN_18084dae0(param_1 + 0x60);
  FUN_180840270(param_1 + 0x50);
  FUN_1808b02a0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x70);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084dc20(int32_t *param_1)
void FUN_18084dc20(int32_t *param_1)

{
  int8_t auStack_48 [32];
  uint64_t uStack_28;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  ulonglong uStack_10;
  
  uStack_10 = _DAT_180bf00a8 ^ (ulonglong)auStack_48;
  uStack_20 = *param_1;
  uStack_1c = param_1[1];
  uStack_18 = param_1[2];
  uStack_14 = param_1[3];
  uStack_28 = 0;
  FUN_1808b11b0(&uStack_20,4,&uStack_28,(longlong)&uStack_28 + 4);
  FUN_1808b11b0(&uStack_1c,2,&uStack_28,(longlong)&uStack_28 + 4);
  FUN_1808b11b0((longlong)&uStack_1c + 2,2,&uStack_28,(longlong)&uStack_28 + 4);
  FUN_1808b11b0(&uStack_18,8,&uStack_28,(longlong)&uStack_28 + 4);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_48);
}



uint64_t FUN_18084de40(longlong param_1,longlong param_2,float *param_3)

{
  int iVar1;
  void *puVar2;
  uint64_t *puVar3;
  float fVar4;
  
  puVar3 = *(uint64_t **)(param_1 + 0x60);
  fVar4 = 0.0;
  do {
    if ((puVar3 < *(uint64_t **)(param_1 + 0x60)) ||
       (*(uint64_t **)(param_1 + 0x60) + (longlong)*(int *)(param_1 + 0x68) * 2 <= puVar3)) {
      return 0x4a;
    }
    if (param_2 != 0) {
      if (*(int *)(puVar3 + 1) < 1) {
        puVar2 = &system_buffer_ptr;
      }
      else {
        puVar2 = (void *)*puVar3;
      }
      iVar1 = func_0x00018076b420(puVar2,param_2);
      if (iVar1 == 0) {
        *param_3 = fVar4;
        return 0;
      }
    }
    fVar4 = fVar4 + 1.0;
    puVar3 = puVar3 + 2;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18084def0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int32_t *puVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar3 = 0;
  if (param_2 != 0) {
    if ((0x3ffffffe < param_2 * 0x10 - 1U) ||
       (lVar3 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x10,&UNK_180957f70,
                              0xf4,0,0,1), lVar3 == 0)) {
      return 0x26;
    }
    iVar1 = (int)param_1[1];
    lVar4 = (longlong)iVar1;
    if (iVar1 != 0) {
      iVar6 = 0;
      lVar2 = *param_1;
      if (0 < iVar1) {
        puVar5 = (int32_t *)(lVar3 + 0xc);
        lVar7 = lVar2 - lVar3;
        do {
          *(uint64_t *)(puVar5 + -3) = 0;
          *(uint64_t *)(puVar5 + -1) = 0;
          *(uint64_t *)(puVar5 + -3) = *(uint64_t *)(lVar7 + -0xc + (longlong)puVar5);
          puVar5[-1] = *(int32_t *)(lVar7 + -4 + (longlong)puVar5);
          *puVar5 = *(int32_t *)(lVar7 + (longlong)puVar5);
          *(uint64_t *)(lVar7 + -0xc + (longlong)puVar5) = 0;
          *(uint64_t *)(lVar7 + -4 + (longlong)puVar5) = 0;
          FUN_180840270((longlong)iVar6 * 0x10 + lVar2);
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 4;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
  }
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18084df0d(uint64_t param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int32_t *puVar5;
  int unaff_ESI;
  longlong *unaff_RDI;
  int iVar6;
  longlong lVar7;
  
  lVar3 = 0;
  if (unaff_ESI != 0) {
    if ((0x3ffffffe < param_2 * 0x10 - 1U) ||
       (lVar3 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x10,&UNK_180957f70,
                              0xf4,0), lVar3 == 0)) {
      return 0x26;
    }
    iVar1 = (int)unaff_RDI[1];
    lVar4 = (longlong)iVar1;
    if (iVar1 != 0) {
      iVar6 = 0;
      lVar2 = *unaff_RDI;
      if (0 < iVar1) {
        puVar5 = (int32_t *)(lVar3 + 0xc);
        lVar7 = lVar2 - lVar3;
        do {
          *(uint64_t *)(puVar5 + -3) = 0;
          *(uint64_t *)(puVar5 + -1) = 0;
          *(uint64_t *)(puVar5 + -3) = *(uint64_t *)(lVar7 + -0xc + (longlong)puVar5);
          puVar5[-1] = *(int32_t *)(lVar7 + -4 + (longlong)puVar5);
          *puVar5 = *(int32_t *)(lVar7 + (longlong)puVar5);
          *(uint64_t *)(lVar7 + -0xc + (longlong)puVar5) = 0;
          *(uint64_t *)(lVar7 + -4 + (longlong)puVar5) = 0;
          FUN_180840270((longlong)iVar6 * 0x10 + lVar2);
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 4;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
  }
  if ((0 < *(int *)((longlong)unaff_RDI + 0xc)) && (*unaff_RDI != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*unaff_RDI,&UNK_180957f70,0x100,1);
  }
  *unaff_RDI = lVar3;
  *(int *)((longlong)unaff_RDI + 0xc) = unaff_ESI;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18084df73(void)

{
  longlong lVar1;
  longlong in_RAX;
  int32_t *puVar2;
  longlong unaff_RBP;
  int32_t unaff_ESI;
  longlong *unaff_RDI;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  lVar1 = *unaff_RDI;
  if (0 < (int)in_RAX) {
    puVar2 = (int32_t *)(unaff_RBP + 0xc);
    lVar4 = lVar1 - unaff_RBP;
    do {
      *(uint64_t *)(puVar2 + -3) = 0;
      *(uint64_t *)(puVar2 + -1) = 0;
      *(uint64_t *)(puVar2 + -3) = *(uint64_t *)(lVar4 + -0xc + (longlong)puVar2);
      puVar2[-1] = *(int32_t *)(lVar4 + -4 + (longlong)puVar2);
      *puVar2 = *(int32_t *)(lVar4 + (longlong)puVar2);
      *(uint64_t *)(lVar4 + -0xc + (longlong)puVar2) = 0;
      *(uint64_t *)(lVar4 + -4 + (longlong)puVar2) = 0;
      FUN_180840270((longlong)iVar3 * 0x10 + lVar1);
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 4;
      in_RAX = in_RAX + -1;
    } while (in_RAX != 0);
  }
  if ((0 < *(int *)((longlong)unaff_RDI + 0xc)) && (*unaff_RDI != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*unaff_RDI,&UNK_180957f70,0x100,1);
  }
  *unaff_RDI = unaff_RBP;
  *(int32_t *)((longlong)unaff_RDI + 0xc) = unaff_ESI;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18084df94(uint64_t param_1)

{
  int32_t *puVar1;
  longlong unaff_RBP;
  int32_t unaff_ESI;
  longlong *unaff_RDI;
  int unaff_R12D;
  longlong unaff_R13;
  longlong lVar2;
  longlong unaff_R15;
  
  puVar1 = (int32_t *)(unaff_RBP + 0xc);
  lVar2 = unaff_R13 - unaff_RBP;
  do {
    *(uint64_t *)(puVar1 + -3) = param_1;
    *(uint64_t *)(puVar1 + -1) = 0;
    *(uint64_t *)(puVar1 + -3) = *(uint64_t *)(lVar2 + -0xc + (longlong)puVar1);
    puVar1[-1] = *(int32_t *)(lVar2 + -4 + (longlong)puVar1);
    *puVar1 = *(int32_t *)(lVar2 + (longlong)puVar1);
    *(uint64_t *)(lVar2 + -0xc + (longlong)puVar1) = param_1;
    *(uint64_t *)(lVar2 + -4 + (longlong)puVar1) = 0;
    FUN_180840270((longlong)unaff_R12D * 0x10 + unaff_R13);
    unaff_R12D = unaff_R12D + 1;
    puVar1 = puVar1 + 4;
    param_1 = 0;
    unaff_R15 = unaff_R15 + -1;
  } while (unaff_R15 != 0);
  if ((0 < *(int *)((longlong)unaff_RDI + 0xc)) && (*unaff_RDI != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*unaff_RDI,&UNK_180957f70,0x100,1);
  }
  *unaff_RDI = unaff_RBP;
  *(int32_t *)((longlong)unaff_RDI + 0xc) = unaff_ESI;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18084e00c(void)

{
  longlong unaff_RBP;
  int32_t unaff_ESI;
  longlong *unaff_RDI;
  
  if ((0 < *(int *)((longlong)unaff_RDI + 0xc)) && (*unaff_RDI != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*unaff_RDI,&UNK_180957f70,0x100,1);
  }
  *unaff_RDI = unaff_RBP;
  *(int32_t *)((longlong)unaff_RDI + 0xc) = unaff_ESI;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18084e01e(void)

{
  longlong unaff_RBP;
  int32_t unaff_ESI;
  longlong *unaff_RDI;
  
  if ((0 < *(int *)((longlong)unaff_RDI + 0xc)) && (*unaff_RDI != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*unaff_RDI,&UNK_180957f70,0x100,1);
  }
  *unaff_RDI = unaff_RBP;
  *(int32_t *)((longlong)unaff_RDI + 0xc) = unaff_ESI;
  return 0;
}



uint64_t FUN_18084e065(void)

{
  return 0x26;
}



uint64_t FUN_18084e110(longlong *param_1,char *param_2)

{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  if (*param_2 == '\0') {
    FUN_180840270();
    return 0;
  }
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (param_2[lVar5] != '\0');
  iVar4 = (int)lVar5 + 1;
  if (0xfffff < iVar4) {
    return 0x1c;
  }
  uVar3 = (int)*(uint *)((longlong)param_1 + 0xc) >> 0x1f;
  if ((int)((*(uint *)((longlong)param_1 + 0xc) ^ uVar3) - uVar3) < iVar4) {
    uVar2 = FUN_180849030(param_1,iVar4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < iVar4) {
                    // WARNING: Subroutine does not return
    memset((longlong)iVar1 + *param_1,0,(longlong)(iVar4 - iVar1));
  }
  *(int *)(param_1 + 1) = iVar4;
                    // WARNING: Subroutine does not return
  memcpy(*param_1,param_2,(longlong)iVar4);
}



longlong FUN_18084e3b0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  FUN_180744d60(param_1 + 0xf8);
  FUN_18084c680(param_1 + 0xb0);
  func_0x00018084e310(param_1 + 0xa0);
  FUN_180744d60(param_1 + 0x90);
  FUN_180744d60(param_1 + 0x80);
  FUN_18084c680(param_1 + 0x50);
  plVar1 = (longlong *)(param_1 + 0x20);
  **(longlong **)(param_1 + 0x28) = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(param_1 + 0x28);
  *(longlong **)(param_1 + 0x28) = plVar1;
  *plVar1 = (longlong)plVar1;
  **(longlong **)(param_1 + 0x28) = (longlong)plVar1;
  *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(param_1 + 0x28);
  *(longlong **)(param_1 + 0x28) = plVar1;
  *plVar1 = (longlong)plVar1;
  FUN_1808b1a30(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x108);
  }
  return param_1;
}



uint64_t FUN_18084e470(uint64_t param_1,ulonglong param_2)

{
  FUN_1808b1a30();
  if ((param_2 & 1) != 0) {
    free(param_1,0x20);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18084e4b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int8_t uVar3;
  short sVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lStackX_8;
  
  sVar4 = func_0x00018084c3d0(*(uint64_t *)(param_1 + 0x40));
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (sVar4 == 4) {
    if ((*(byte *)(lVar2 + 0xc4) & 1) == 0) {
      return 0x1c;
    }
    uVar6 = FUN_18084edf0(param_1);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
  }
  else if ((((*(int *)(lVar2 + 0x58) != 0) || (*(int *)(lVar2 + 0x5c) != 0)) ||
           (*(int *)(lVar2 + 0x60) != 0)) || (*(int *)(lVar2 + 100) != 0)) {
    uVar8 = 0;
    lStackX_8 = 0;
    uVar6 = FUN_1808bc010(*(uint64_t *)(param_1 + 0x38),(int *)(lVar2 + 0x58),
                          *(uint64_t *)(param_1 + 0x70),&lStackX_8);
    lVar2 = lStackX_8;
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
      return 0x1c;
    }
    *(longlong *)(param_1 + 0x60) = lStackX_8;
    plVar1 = (longlong *)(lStackX_8 + 0x50);
    plVar7 = *(longlong **)(lStackX_8 + 0x50);
    if (plVar7 == plVar1) {
LAB_18084e5ba:
      if (plVar7 != plVar1) {
        return 0x1c;
      }
    }
    else {
      do {
        if (plVar7[2] == param_1) goto LAB_18084e5ba;
      } while ((plVar7 != plVar1) && (plVar7 = (longlong *)*plVar7, plVar7 != plVar1));
    }
    plVar7 = (longlong *)
             FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x18,&UNK_180984b50,0xbf,0,0,1);
    if (plVar7 == (longlong *)0x0) {
      uVar8 = 0x26;
    }
    else {
      *plVar7 = (longlong)plVar7;
      plVar7[1] = (longlong)plVar7;
      plVar7[2] = param_1;
      plVar7[1] = *(longlong *)(lVar2 + 0x58);
      *plVar7 = (longlong)plVar1;
      *(longlong **)(lVar2 + 0x58) = plVar7;
      *(longlong **)plVar7[1] = plVar7;
    }
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    uVar5 = FUN_18073f130(*(uint64_t *)(*(longlong *)(param_1 + 0x60) + 0x78),
                          *(uint64_t *)(param_1 + 0x78),1,0);
    if ((uVar5 == 0) &&
       (((*(byte *)(*(longlong *)(param_1 + 0x40) + 0xc4) & 1) != 0 ||
        (uVar5 = FUN_1808b8f60(*(uint64_t *)(*(longlong *)(param_1 + 0x60) + 0x70),param_1),
        uVar5 == 0)))) {
      uVar3 = FUN_180853120(*(uint64_t *)(param_1 + 0x60));
      FUN_180853fc0(param_1,uVar3);
    }
    else if (uVar5 != 0) {
      return (ulonglong)uVar5;
    }
  }
  return 0;
}



uint64_t FUN_18084e710(uint64_t *param_1,uint64_t param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  uint64_t uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  lVar2 = (**(code **)*param_1)();
  if (*(int *)(lVar2 + 0xcc) == 0x7fffffff) goto LAB_18084e8ab;
  if (*(int *)(lVar2 + 0xcc) <= *(int *)(param_1 + 0x20)) {
    lVar2 = (**(code **)*param_1)(param_1);
    iVar1 = *(int *)(lVar2 + 0xd0);
    if (iVar1 == 2) {
      lVar2 = *(longlong *)param_1[0x1f];
    }
    else {
      if (iVar1 == 3) {
        iVar1 = 0;
        iVar7 = 0;
        if (0 < *(int *)(param_1 + 0x20)) {
          lVar6 = 0;
          lVar2 = 0;
          do {
            iVar4 = func_0x00018085f4a0(*(uint64_t *)(lVar6 + param_1[0x1f]),
                                        *(uint64_t *)(lVar2 + param_1[0x1f]));
            if (iVar4 < 0) {
              lVar2 = lVar6;
              iVar1 = iVar7;
            }
            iVar7 = iVar7 + 1;
            lVar6 = lVar6 + 8;
          } while (iVar7 < *(int *)(param_1 + 0x20));
        }
      }
      else {
        if (iVar1 != 4) goto LAB_18084e841;
        iVar1 = 0;
        iVar7 = 1;
        if (1 < *(int *)(param_1 + 0x20)) {
          lVar6 = 8;
          lVar2 = 0;
          do {
            iVar4 = FUN_18085f500(*(uint64_t *)(lVar6 + param_1[0x1f]),
                                  *(uint64_t *)(lVar2 + param_1[0x1f]));
            if (0 < iVar4) {
              lVar2 = lVar6;
              iVar1 = iVar7;
            }
            iVar7 = iVar7 + 1;
            lVar6 = lVar6 + 8;
          } while (iVar7 < *(int *)(param_1 + 0x20));
        }
      }
      lVar2 = *(longlong *)(param_1[0x1f] + (longlong)iVar1 * 8);
    }
    if ((lVar2 != 0) && (uVar3 = FUN_180863820(lVar2,1), (int)uVar3 != 0)) {
      return uVar3;
    }
  }
LAB_18084e841:
  uVar5 = (int)*(uint *)((longlong)param_1 + 0x104) >> 0x1f;
  iVar7 = *(int *)(param_1 + 0x20) + 1;
  iVar1 = (*(uint *)((longlong)param_1 + 0x104) ^ uVar5) - uVar5;
  if (iVar1 < iVar7) {
    iVar4 = (int)((float)iVar1 * 1.5);
    iVar1 = iVar7;
    if (iVar7 <= iVar4) {
      iVar1 = iVar4;
    }
    iVar8 = 8;
    if ((7 < iVar1) && (iVar8 = iVar4, iVar4 < iVar7)) {
      iVar8 = iVar7;
    }
    uVar3 = FUN_180747f10(param_1 + 0x1f,iVar8);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  *(uint64_t *)(param_1[0x1f] + (longlong)*(int *)(param_1 + 0x20) * 8) = param_2;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
LAB_18084e8ab:
  if (((param_3 == '\0') || (param_1[0xc] == 0)) ||
     (uVar3 = FUN_18084e710(param_1[0xc],param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  return uVar3;
}



uint64_t FUN_18084e8f0(longlong param_1,uint64_t *param_2,uint64_t *param_3,int *param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int32_t uStack_24;
  
  iVar9 = *(int *)(param_1 + 0x20);
  if (iVar9 == -1) {
    uVar1 = *param_3;
    iVar9 = *(int *)(param_1 + 0x18);
    uVar2 = *param_2;
    uVar3 = param_2[1];
    iVar7 = iVar9 + 1;
    uVar8 = (int)*(uint *)(param_1 + 0x1c) >> 0x1f;
    iVar4 = (*(uint *)(param_1 + 0x1c) ^ uVar8) - uVar8;
    if (iVar4 < iVar7) {
      iVar4 = (int)((float)iVar4 * 1.5);
      if (iVar7 <= iVar4) {
        iVar7 = iVar4;
      }
      if (iVar7 < 2) {
        iVar7 = 2;
      }
      uVar5 = FUN_1808532e0(param_1 + 0x10,iVar7);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    puVar6 = (uint64_t *)
             ((longlong)*(int *)(param_1 + 0x18) * 0x20 + *(longlong *)(param_1 + 0x10));
    *puVar6 = uVar2;
    puVar6[1] = uVar3;
    puVar6[2] = CONCAT44(uStack_24,0xffffffff);
    puVar6[3] = uVar1;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  else {
    puVar6 = (uint64_t *)((longlong)iVar9 * 0x20 + *(longlong *)(param_1 + 0x10));
    *(int32_t *)(param_1 + 0x20) = *(int32_t *)(puVar6 + 2);
    *(int32_t *)(puVar6 + 2) = 0xffffffff;
    uVar1 = param_2[1];
    *puVar6 = *param_2;
    puVar6[1] = uVar1;
    puVar6[3] = *param_3;
  }
  *param_4 = iVar9;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  return 0;
}



uint64_t FUN_18084e9e0(longlong param_1)

{
  int32_t uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uStackX_8;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    uVar3 = *(uint64_t *)(param_1 + 0x78);
    uStackX_8 = 0;
    if (*(int *)(param_1 + 0x88) == 0) {
      uVar1 = *(int32_t *)(*(longlong *)(param_1 + 0x40) + 0xc0);
      iVar2 = FUN_18073c380(uVar3,0xfffffffe,&uStackX_8);
      uVar3 = uStackX_8;
      if (iVar2 != 0) {
        uVar3 = 0;
      }
      uVar3 = FUN_180853bf0(uVar3,uVar1);
      if ((int)uVar3 == 0) {
        return 0;
      }
      return uVar3;
    }
  }
  else {
    uVar3 = FUN_1807417b0(*(longlong *)(param_1 + 0x68),1,
                          *(int32_t *)(*(longlong *)(param_1 + 0x40) + 0xc0));
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = FUN_180853bf0(*(uint64_t *)(param_1 + 0x68),
                          *(int32_t *)(*(longlong *)(param_1 + 0x40) + 0xc0));
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = *(uint64_t *)(param_1 + 0x78);
  }
  uStackX_8 = 0;
  iVar2 = FUN_18073c380(uVar3,0xfffffffe,&uStackX_8);
  uVar3 = uStackX_8;
  if (iVar2 != 0) {
    uVar3 = 0;
  }
  uVar3 = FUN_1807411a0(uVar3,0,0,0);
  if ((int)uVar3 == 0) {
    return 0;
  }
  return uVar3;
}



uint64_t FUN_18084ea8c(void)

{
  uint64_t uVar1;
  
  FUN_18073c380();
  uVar1 = FUN_180853bf0();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_18084eab7(void)

{
  return 0;
}



uint64_t FUN_18084ead0(longlong param_1,char param_2)

{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uStackX_8;
  
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x38) + 0x783);
  if ((cVar1 == '\0') && (param_2 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x88) == 0) {
    uStackX_8 = 0;
    if (*(int *)(param_1 + 0x98) == 0) {
      iVar2 = FUN_18073c380(*(uint64_t *)(param_1 + 0x78),0xfffffffe,&uStackX_8);
      uVar4 = uStackX_8;
      if (iVar2 != 0) {
        uVar4 = uVar5;
      }
      uVar3 = FUN_180741320(uVar4,param_2,uVar3);
      iVar2 = (int)uVar3;
      goto joined_r0x00018084ebb8;
    }
    iVar2 = FUN_18073c380(*(uint64_t *)(param_1 + 0x78),0xfffffffe,&uStackX_8);
    uVar4 = uStackX_8;
    if (iVar2 != 0) {
      uVar4 = uVar5;
    }
    uVar4 = FUN_180741320(uVar4,param_2,cVar1);
    iVar2 = (int)uVar4;
  }
  else {
    uVar4 = FUN_1808b5bd0(**(uint64_t **)(param_1 + 0x80),param_2,cVar1);
    iVar2 = (int)uVar4;
  }
  if (iVar2 != 0) {
    return uVar4;
  }
  if (*(int *)(param_1 + 0x98) == 0) {
    uStackX_8 = 0;
    iVar2 = FUN_18073c380(*(uint64_t *)(param_1 + 0x78),0xfffffffe,&uStackX_8);
    uVar4 = uStackX_8;
    if (iVar2 != 0) {
      uVar4 = uVar5;
    }
    uVar3 = FUN_180741320(uVar4,0,uVar3);
    iVar2 = (int)uVar3;
  }
  else {
    uVar3 = FUN_1808b5bd0(*(uint64_t *)
                           (*(longlong *)(param_1 + 0x90) + -8 +
                           (longlong)*(int *)(param_1 + 0x98) * 8),0,uVar3);
    iVar2 = (int)uVar3;
  }
joined_r0x00018084ebb8:
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  return uVar3;
}



uint64_t FUN_18084ec10(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  if ((((*(byte *)(param_1 + 0xc0) & 1) == 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x40) + 0x75) == '\0')) &&
     ((*(longlong *)(param_1 + 0x60) == 0 || (cVar2 = FUN_1808530e0(), cVar2 == '\0')))) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    *(char *)(*(longlong *)(param_1 + 0x48) + 0x2b) = cVar2;
  }
  if (((cVar2 == '\0') && ((*(byte *)(param_1 + 0xc0) & 1) == 0)) &&
     (lVar1 = *(longlong *)(param_1 + 0x40), *(char *)(lVar1 + 0x75) == '\0')) {
    uStack_18 = *(int32_t *)(lVar1 + 0x10);
    uStack_14 = *(int32_t *)(lVar1 + 0x14);
    uStack_10 = *(int32_t *)(lVar1 + 0x18);
    uStack_c = *(int32_t *)(lVar1 + 0x1c);
    uVar6 = 0;
    cVar2 = func_0x0001808c0d90(*(uint64_t *)(param_1 + 0x38),&uStack_18);
    if (cVar2 == '\0') {
      uVar4 = 0;
      goto LAB_180853ee2;
    }
  }
  else {
    uVar6 = 1;
  }
  uVar4 = 1;
LAB_180853ee2:
  for (puVar5 = *(uint64_t **)(param_1 + 0x80);
      (*(uint64_t **)(param_1 + 0x80) <= puVar5 &&
      (puVar5 < *(uint64_t **)(param_1 + 0x80) + *(int *)(param_1 + 0x88))); puVar5 = puVar5 + 1)
  {
    uVar3 = FUN_1808b5de0(*puVar5,uVar4);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  for (puVar5 = *(uint64_t **)(param_1 + 0x90);
      (*(uint64_t **)(param_1 + 0x90) <= puVar5 &&
      (puVar5 < *(uint64_t **)(param_1 + 0x90) + *(int *)(param_1 + 0x98))); puVar5 = puVar5 + 1)
  {
    uVar3 = FUN_1808b5de0(*puVar5,uVar4);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  FUN_18073d7c0(*(uint64_t *)(param_1 + 0x78),uVar4);
  puVar5 = *(uint64_t **)(param_1 + 0x50);
  while( true ) {
    if (puVar5 == (uint64_t *)(param_1 + 0x50)) {
      return 0;
    }
    uVar4 = FUN_180853e80(puVar5[2],uVar6);
    if ((int)uVar4 != 0) break;
    if (puVar5 == (uint64_t *)(param_1 + 0x50)) {
      return 0;
    }
    puVar5 = (uint64_t *)*puVar5;
  }
  return uVar4;
}



uint64_t FUN_18084ec60(longlong param_1)

{
  uint64_t *puVar1;
  char cVar2;
  uint64_t uVar3;
  
  if (*(char *)(*(longlong *)(param_1 + 0x40) + 0x74) == '\0') {
    if ((*(longlong *)(param_1 + 0x60) == 0) || (cVar2 = FUN_180853120(), cVar2 == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
  }
  else {
    cVar2 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    *(char *)(*(longlong *)(param_1 + 0x48) + 0x2a) = cVar2;
  }
  if ((cVar2 == '\0') && (*(char *)(*(longlong *)(param_1 + 0x40) + 0x74) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  FUN_18073d8a0(*(uint64_t *)(param_1 + 0x78),uVar3);
  for (puVar1 = *(uint64_t **)(param_1 + 0x50);
      (puVar1 != (uint64_t *)(param_1 + 0x50) &&
      (FUN_180853fc0(puVar1[2],uVar3), puVar1 != (uint64_t *)(param_1 + 0x50)));
      puVar1 = (uint64_t *)*puVar1) {
  }
  return 0;
}



uint64_t FUN_18084ed10(longlong param_1)

{
  uint64_t *puVar1;
  float fVar2;
  float fVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *(float *)(param_1 + 0xcc);
  fVar2 = *(float *)(param_1 + 0xc4);
  fVar3 = *(float *)(*(longlong *)(param_1 + 0x40) + 0x70);
  if ((*(uint *)(param_1 + 0xc0) >> 2 & 1) == 0) {
    fVar7 = *(float *)(*(longlong *)(param_1 + 0x40) + 0x30);
    if (-80.0 < fVar7) {
      fVar7 = (float)powf(0x41200000,fVar7 * 0.05);
    }
    else {
      fVar7 = 0.0;
    }
  }
  else {
    fVar7 = *(float *)(param_1 + 200);
  }
  puVar1 = (uint64_t *)(param_1 + 0xb0);
  fVar7 = fVar6 * fVar2 * fVar3 * fVar7;
  for (puVar4 = (uint64_t *)*puVar1; puVar4 != puVar1; puVar4 = (uint64_t *)*puVar4) {
    fVar6 = (float)func_0x0001808c3960(puVar4[2]);
    fVar7 = fVar7 * fVar6;
    if (puVar4 == puVar1) break;
  }
  *(float *)(param_1 + 0xd0) = fVar7;
  uVar5 = FUN_18073dba0(*(uint64_t *)(param_1 + 0x78),fVar7);
  if ((int)uVar5 == 0) {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      func_0x000180862c20();
    }
    uVar5 = 0;
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084edf0(longlong param_1)
void FUN_18084edf0(longlong param_1)

{
  int8_t auVar1 [16];
  short sVar2;
  int iVar3;
  int8_t auStack_c8 [32];
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  uint uStack_78;
  uint uStack_70;
  uint uStack_68;
  uint uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  int32_t uStack_30;
  int16_t uStack_2c;
  int8_t uStack_2a;
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  sVar2 = func_0x00018084c3d0(*(uint64_t *)(param_1 + 0x40));
  if ((sVar2 == 4) &&
     (iVar3 = FUN_18073cb70(*(uint64_t *)(param_1 + 0x78),&uStack_58), iVar3 == 0)) {
    if ((*(uint *)(param_1 + 0xc0) >> 3 & 1) != 0) {
      iVar3 = FUN_180739350(uStack_58,*(uint64_t *)(param_1 + 0x78));
      if (iVar3 != 0) goto LAB_18084efc3;
      *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xfffffff7;
    }
    uStack_a8 = uStack_a8 & 0xffffff00;
    iVar3 = FUN_180738c00(uStack_58,*(int32_t *)(*(longlong *)(param_1 + 0x40) + 0xd4),
                          *(uint64_t *)(*(longlong *)(param_1 + 0x40) + 0x78),
                          *(uint64_t *)(param_1 + 0x78));
    if (iVar3 != 0) {
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_2a = 0;
      auVar1 = *(int8_t (*) [16])(*(longlong *)(param_1 + 0x40) + 0x10);
      uStack_68 = auVar1._14_2_ & 0xff;
      uStack_70 = auVar1._12_4_ >> 8 & 0xff;
      uStack_78 = auVar1._12_4_ & 0xff;
      uStack_80 = auVar1._11_4_ & 0xff;
      uStack_60 = (uint)auVar1[0xf];
      uStack_88 = (uint)auVar1[10];
      uStack_90 = (uint)auVar1[9];
      uStack_98 = (uint)auVar1[8];
      uStack_a0 = (uint)auVar1._6_2_;
      uStack_a8 = auVar1._4_4_ & 0xffff;
                    // WARNING: Subroutine does not return
      FUN_18076b390(&uStack_50,0x27,&UNK_180958180);
    }
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 8;
  }
LAB_18084efc3:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_c8);
}





