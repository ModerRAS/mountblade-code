#include "TaleWorlds.Native.Split.h"

// 05_networking_part021.c - 4 个函数

// 函数: void FUN_180852d1a(void)
void FUN_180852d1a(void)

{
  return;
}



uint64_t FUN_180852d23(void)

{
  return 0x1c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180852d40(longlong *param_1,int32_t *param_2,uint64_t *param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  bool bVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  longlong *plVar12;
  uint64_t *puStackX_18;
  int32_t auStackX_20 [2];
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  puStackX_18 = param_3;
  lVar5 = FUN_180851c50(param_1,param_2,*(int32_t *)((longlong)param_3 + 0xe4));
  if (lVar5 != 0) {
    return 0x1f;
  }
  plVar12 = param_1 + 6;
  if ((int)param_1[0xc] < 1) {
    plVar12 = param_1;
  }
  lVar5 = plVar12[5];
  if (lVar5 != 0) {
    FUN_180768360(lVar5);
  }
  puVar6 = (uint64_t *)func_0x000180851be0(plVar12,param_2);
  if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar5);
  }
  bVar4 = false;
  puVar7 = (uint64_t *)0x0;
  if (puVar6 == (uint64_t *)0x0) {
    puVar7 = (uint64_t *)
             FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x38,&unknown_var_2080_ptr,0x124,0,0,1);
    if (puVar7 == (uint64_t *)0x0) {
      iVar10 = 0x26;
      puVar7 = (uint64_t *)0x0;
      goto LAB_180852f9c;
    }
    *puVar7 = 0;
    puVar7[1] = 0;
    bVar4 = true;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(int32_t *)(puVar7 + 4) = 0xffffffff;
    *(int32_t *)((longlong)puVar7 + 0x24) = 0;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(int32_t *)(puVar7 + 5) = *param_2;
    *(int32_t *)((longlong)puVar7 + 0x2c) = uVar1;
    *(int32_t *)(puVar7 + 6) = uVar2;
    *(int32_t *)((longlong)puVar7 + 0x34) = uVar3;
    puVar6 = puVar7;
  }
  auStackX_20[0] = *(int32_t *)((longlong)param_3 + 0xe4);
  iVar10 = FUN_1807d28c0(puVar6,auStackX_20,&puStackX_18);
  if (iVar10 != 0) goto LAB_180852f9c;
  if (!bVar4) {
    return 0;
  }
  uStack_48 = *(uint *)(puVar6 + 5);
  uStack_44 = *(uint *)((longlong)puVar6 + 0x2c);
  uStack_40 = *(uint *)(puVar6 + 6);
  uStack_3c = *(uint *)((longlong)puVar6 + 0x34);
  lVar5 = plVar12[5];
  puStackX_18 = puVar6;
  if (lVar5 != 0) {
    FUN_180768360(lVar5);
  }
  iVar10 = FUN_180851a40(plVar12);
  if (iVar10 == 0) {
    if ((int)plVar12[1] != 0) {
      lVar9 = (longlong)
              (int)((uStack_48 ^ uStack_44 ^ uStack_40 ^ uStack_3c) & (int)plVar12[1] - 1U);
      piVar11 = (int *)(*plVar12 + lVar9 * 4);
      iVar10 = *(int *)(*plVar12 + lVar9 * 4);
      if (iVar10 != -1) {
        lVar9 = plVar12[2];
        do {
          lVar8 = (longlong)iVar10 * 0x20;
          if ((*(longlong *)(lVar8 + lVar9) == CONCAT44(uStack_44,uStack_48)) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40)))
          goto FUN_180852f68;
          piVar11 = (int *)(lVar9 + 0x10 + lVar8);
          iVar10 = *piVar11;
        } while (iVar10 != -1);
      }
      iVar10 = FUN_18084e8f0(plVar12,&uStack_48,&puStackX_18,piVar11);
      if (iVar10 == 0) goto LAB_180852f31;
      goto LAB_180852f2d;
    }
FUN_180852f68:
    iVar10 = 0x1c;
  }
  else {
LAB_180852f2d:
    if (iVar10 == 0) {
LAB_180852f31:
      if (lVar5 == 0) {
        return 0;
      }
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar5);
    }
  }
  if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar5);
  }
  if (iVar10 == 0) {
    return 0;
  }
  puStackX_18 = (uint64_t *)CONCAT44(puStackX_18._4_4_,*(int32_t *)((longlong)param_3 + 0xe4));
  func_0x0001807d2ed0(puVar6,&puStackX_18);
LAB_180852f9c:
  if (puVar7 == (uint64_t *)0x0) {
    return iVar10;
  }
  FUN_1808bb9a0(puVar7);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),puVar7,&unknown_var_2144_ptr,0xc6,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180852d79(void)

{
  longlong lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  bool bVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *unaff_RBX;
  int32_t *unaff_RBP;
  int iVar10;
  int *piVar11;
  longlong unaff_R13;
  longlong *plVar12;
  bool in_ZF;
  char in_SF;
  char in_OF;
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  uint64_t *in_stack_000000a0;
  int32_t in_stack_000000a8;
  
  plVar12 = unaff_RBX + 6;
  if (in_ZF || in_OF != in_SF) {
    plVar12 = unaff_RBX;
  }
  lVar1 = plVar12[5];
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  puVar6 = (uint64_t *)func_0x000180851be0(plVar12);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  bVar5 = false;
  puVar7 = (uint64_t *)0x0;
  if (puVar6 == (uint64_t *)0x0) {
    puVar7 = (uint64_t *)
             FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x38,&unknown_var_2080_ptr,0x124,0);
    if (puVar7 == (uint64_t *)0x0) {
      iVar10 = 0x26;
      puVar7 = (uint64_t *)0x0;
      goto LAB_180852f9c;
    }
    *puVar7 = 0;
    puVar7[1] = 0;
    bVar5 = true;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(int32_t *)(puVar7 + 4) = 0xffffffff;
    *(int32_t *)((longlong)puVar7 + 0x24) = 0;
    uVar2 = unaff_RBP[1];
    uVar3 = unaff_RBP[2];
    uVar4 = unaff_RBP[3];
    *(int32_t *)(puVar7 + 5) = *unaff_RBP;
    *(int32_t *)((longlong)puVar7 + 0x2c) = uVar2;
    *(int32_t *)(puVar7 + 6) = uVar3;
    *(int32_t *)((longlong)puVar7 + 0x34) = uVar4;
    puVar6 = puVar7;
  }
  in_stack_000000a8 = *(int32_t *)(unaff_R13 + 0xe4);
  iVar10 = FUN_1807d28c0(puVar6,&stack0x000000a8,&stack0x000000a0);
  if (iVar10 != 0) goto LAB_180852f9c;
  if (!bVar5) {
    return 0;
  }
  uStack0000000000000040 = *(uint *)(puVar6 + 5);
  uStack0000000000000044 = *(uint *)((longlong)puVar6 + 0x2c);
  uStack0000000000000048 = *(uint *)(puVar6 + 6);
  uStack000000000000004c = *(uint *)((longlong)puVar6 + 0x34);
  lVar1 = plVar12[5];
  in_stack_000000a0 = puVar6;
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  iVar10 = FUN_180851a40(plVar12);
  if (iVar10 == 0) {
    if ((int)plVar12[1] != 0) {
      lVar9 = (longlong)
              (int)((uStack0000000000000040 ^ uStack0000000000000044 ^ uStack0000000000000048 ^
                    uStack000000000000004c) & (int)plVar12[1] - 1U);
      piVar11 = (int *)(*plVar12 + lVar9 * 4);
      iVar10 = *(int *)(*plVar12 + lVar9 * 4);
      if (iVar10 != -1) {
        lVar9 = plVar12[2];
        do {
          lVar8 = (longlong)iVar10 * 0x20;
          if ((*(longlong *)(lVar8 + lVar9) ==
               CONCAT44(uStack0000000000000044,uStack0000000000000040)) &&
             (*(longlong *)(lVar8 + 8 + lVar9) ==
              CONCAT44(uStack000000000000004c,uStack0000000000000048))) goto FUN_180852f68;
          piVar11 = (int *)(lVar9 + 0x10 + lVar8);
          iVar10 = *piVar11;
        } while (iVar10 != -1);
      }
      iVar10 = FUN_18084e8f0(plVar12,&stack0x00000040,&stack0x000000a0,piVar11);
      if (iVar10 == 0) goto LAB_180852f31;
      goto LAB_180852f2d;
    }
FUN_180852f68:
    iVar10 = 0x1c;
  }
  else {
LAB_180852f2d:
    if (iVar10 == 0) {
LAB_180852f31:
      if (lVar1 == 0) {
        return 0;
      }
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
  }
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  if (iVar10 == 0) {
    return 0;
  }
  in_stack_000000a0 =
       (uint64_t *)CONCAT44(in_stack_000000a0._4_4_,*(int32_t *)(unaff_R13 + 0xe4));
  func_0x0001807d2ed0(puVar6,&stack0x000000a0);
LAB_180852f9c:
  if (puVar7 == (uint64_t *)0x0) {
    return iVar10;
  }
  FUN_1808bb9a0(puVar7);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),puVar7,&unknown_var_2144_ptr,0xc6,1);
}



// WARNING: Removing unreachable block (ram,0x000180852f3e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_180852f68(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  if (unaff_RBP != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  func_0x0001807d2ed0();
  if (unaff_RBX == 0) {
    return 0x1c;
  }
  FUN_1808bb9a0();
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0));
}





// 函数: void FUN_180853000(longlong param_1,uint64_t param_2)
void FUN_180853000(longlong param_1,uint64_t param_2)

{
  int iVar1;
  uint64_t auStackX_8 [4];
  
  auStackX_8[0] = 0;
  iVar1 = FUN_18073c380(*(uint64_t *)(param_1 + 0x78),0xffffffff,auStackX_8);
  if (iVar1 == 0) {
    FUN_180740410(auStackX_8[0],param_2);
  }
  return;
}



uint64_t FUN_180853040(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint64_t uVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uStack_18;
  ulonglong uStack_10;
  
  if ((int)param_1[1] == (int)param_2[1]) {
    iVar3 = 0;
    if (0 < (int)param_2[1]) {
      lVar5 = 0;
      do {
        puVar4 = (ulonglong *)((longlong)iVar3 * 0x10 + *param_2);
        plVar1 = (longlong *)(**(code **)**(uint64_t **)(lVar5 + *param_1))();
        (**(code **)(*plVar1 + 0x40))(plVar1,&uStack_18);
        if ((uStack_18 != *puVar4) || (uStack_10 != puVar4[1])) goto LAB_1808530ba;
        iVar3 = iVar3 + 1;
        lVar5 = lVar5 + 8;
      } while (iVar3 < (int)param_2[1]);
    }
    uVar2 = 1;
  }
  else {
LAB_1808530ba:
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_1808530e0(longlong param_1)

{
  char cVar1;
  
  if (((*(byte *)(param_1 + 0xc0) & 1) != 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x40) + 0x75) != '\0')) {
    return 1;
  }
  if ((*(longlong *)(param_1 + 0x60) != 0) && (cVar1 = FUN_1808530e0(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



uint64_t FUN_180853120(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x40) + 0x74) != '\0') {
    return 1;
  }
  if ((*(longlong *)(param_1 + 0x60) != 0) && (cVar1 = FUN_180853120(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



uint64_t FUN_180853180(longlong param_1,int param_2,int32_t param_3)

{
  uint64_t uVar1;
  float fVar2;
  
  if (param_2 == 0) {
    fVar2 = (float)func_0x0001808b2ef0(param_3);
    if (fVar2 < 0.0) {
      return 0x1f;
    }
    *(float *)(param_1 + 200) = fVar2;
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 4;
    uVar1 = FUN_18084ed10(param_1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  else {
    if (param_2 != 1) {
      return 0x1c;
    }
    fVar2 = (float)func_0x0001808b2ec0(param_3);
    if (fVar2 < 0.0) {
      return 0x1f;
    }
    *(float *)(param_1 + 0xd8) = fVar2;
    fVar2 = fVar2 * *(float *)(param_1 + 0xd4) * *(float *)(param_1 + 0xdc);
    *(float *)(param_1 + 0xe0) = fVar2;
    uVar1 = FUN_18073d980(*(uint64_t *)(param_1 + 0x78),fVar2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180853230(longlong param_1)
void FUN_180853230(longlong param_1)

{
  uint64_t uVar1;
  int iVar2;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  longlong lStack_128;
  longlong *plStack_120;
  int8_t auStack_118 [232];
  uint64_t uStack_30;
  ulonglong uStack_18;
  
  uStack_30 = 0x180853242;
  iVar2 = FUN_18073c9b0(*(uint64_t *)(param_1 + 0x78));
  if (iVar2 != 0) {
    return;
  }
  uVar1 = *(uint64_t *)(param_1 + 0x78);
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  lStack_128 = 0;
  iVar2 = func_0x00018074fb10(uVar1,&plStack_120,&lStack_128);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*plStack_120 + 0x10))(plStack_120,1);
    if (iVar2 == 0) goto LAB_18073d93d;
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    FUN_18074be90(auStack_118,0x100,1);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar2,4,uVar1,&unknown_var_6016_ptr);
  }
LAB_18073d93d:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



uint64_t FUN_180853260(longlong *param_1,uint64_t *param_2)

{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = (int)param_1[1] + 1;
  uVar4 = (int)*(uint *)((longlong)param_1 + 0xc) >> 0x1f;
  iVar1 = (*(uint *)((longlong)param_1 + 0xc) ^ uVar4) - uVar4;
  if (iVar1 < iVar3) {
    iVar1 = (int)((float)iVar1 * 1.5);
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    if (iVar3 < 8) {
      iVar3 = 8;
    }
    uVar2 = FUN_180747f10(param_1,iVar3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  *(uint64_t *)(*param_1 + (longlong)(int)param_1[1] * 8) = *param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808532e0(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar1 = 0;
  if (param_2 != 0) {
    if (param_2 * 0x20 - 1U < 0x3fffffff) {
      lVar1 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x20,&unknown_var_8432_ptr,
                            0xf4,0,0,1);
      if (lVar1 != 0) {
        if ((int)param_1[1] != 0) {
                    // WARNING: Subroutine does not return
          memcpy(lVar1,*param_1,(longlong)(int)param_1[1] << 5);
        }
        goto LAB_180853370;
      }
    }
    return 0x26;
  }
LAB_180853370:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = lVar1;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180853304(uint64_t param_1,int param_2)

{
  longlong lVar1;
  longlong *unaff_RBX;
  int unaff_EDI;
  
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_180853370:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&unknown_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0x20 - 1U < 0x3fffffff) {
    lVar1 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x20,&unknown_var_8432_ptr,0xf4
                          ,0);
    if (lVar1 != 0) {
      if ((int)unaff_RBX[1] != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar1,*unaff_RBX,(longlong)(int)unaff_RBX[1] << 5);
      }
      goto LAB_180853370;
    }
  }
  return 0x26;
}



uint64_t FUN_1808533bb(void)

{
  return 0x26;
}



uint64_t FUN_1808533d0(longlong param_1,int *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  int aiStackX_8 [2];
  
  iVar3 = *(int *)(param_1 + 0xf4);
  puVar1 = (uint64_t *)(param_1 + 0x50);
  *(int *)(param_1 + 0xec) = iVar3;
  *(int32_t *)(param_1 + 0xf4) = 0;
  for (puVar2 = (uint64_t *)*puVar1; puVar2 != puVar1; puVar2 = (uint64_t *)*puVar2) {
    aiStackX_8[0] = 0;
    FUN_1808533d0(puVar2[2],aiStackX_8);
    iVar3 = iVar3 + aiStackX_8[0];
    if (puVar2 == puVar1) break;
  }
  *(int *)(param_1 + 0xf0) = iVar3;
  *param_2 = iVar3;
  return 0;
}



uint64_t FUN_180853470(longlong param_1)

{
  longlong lVar1;
  uint64_t uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  uVar2 = FUN_180851840();
  if ((int)uVar2 == 0) {
    if ((lVar1 != 0) &&
       (uVar2 = FUN_1808c19d0(*(uint64_t *)(param_1 + 0x38),lVar1), (int)uVar2 != 0)) {
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180853560(longlong *param_1,uint64_t *param_2)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  int *piVar13;
  
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  lVar6 = (**(code **)*param_2)(param_2);
  plVar12 = (longlong *)0x0;
  uVar4 = *(uint *)(lVar6 + 0x10);
  lVar11 = *(longlong *)(lVar6 + 0x10);
  uVar2 = *(uint *)(lVar6 + 0x18);
  lVar9 = *(longlong *)(lVar6 + 0x18);
  if (((*(int *)((longlong)param_1 + 0x54) != 0) && ((int)param_1[7] != 0)) &&
     (iVar10 = *(int *)(param_1[6] +
                       (longlong)
                       (int)((*(uint *)(lVar6 + 0x14) ^ *(uint *)(lVar6 + 0x1c) ^ uVar4 ^ uVar2) &
                            (int)param_1[7] - 1U) * 4), iVar10 != -1)) {
    do {
      plVar7 = (longlong *)((longlong)iVar10 * 0x20 + param_1[8]);
      if ((*plVar7 == lVar11) && (plVar7[1] == lVar9)) {
        plVar7 = (longlong *)plVar7[3];
        if (plVar7 != (longlong *)0x0) {
          bVar3 = false;
          goto LAB_180853663;
        }
        break;
      }
      iVar10 = (int)plVar7[2];
    } while (iVar10 != -1);
  }
  plVar7 = plVar12;
  if (((*(int *)((longlong)param_1 + 0x24) != 0) && ((int)param_1[1] != 0)) &&
     (iVar10 = *(int *)(*param_1 +
                       (longlong)
                       (int)((uVar4 ^ *(uint *)(lVar6 + 0x14) ^ uVar2 ^ *(uint *)(lVar6 + 0x1c)) &
                            (int)param_1[1] - 1U) * 4), iVar10 != -1)) {
    do {
      plVar8 = (longlong *)((longlong)iVar10 * 0x20 + param_1[2]);
      if ((*plVar8 == lVar11) && (plVar8[1] == lVar9)) {
        plVar7 = (longlong *)plVar8[3];
        break;
      }
      iVar10 = (int)plVar8[2];
    } while (iVar10 != -1);
  }
  bVar3 = true;
LAB_180853663:
  if (plVar7 == (longlong *)0x0) {
    uVar4 = 0x1f;
  }
  else {
    iVar10 = *(int *)((longlong)plVar7 + 0x24);
    if (iVar10 != 0) {
      if ((int)plVar7[1] == 0) {
        uVar4 = 0x1c;
        goto LAB_180853766;
      }
      lVar9 = (longlong)(int)((int)plVar7[1] - 1U & *(uint *)((longlong)param_2 + 0xe4));
      piVar13 = (int *)(*plVar7 + lVar9 * 4);
      iVar5 = *(int *)(*plVar7 + lVar9 * 4);
      if (iVar5 != -1) {
        lVar9 = plVar7[2];
        do {
          if (*(uint *)(lVar9 + (longlong)iVar5 * 0x10) == *(uint *)((longlong)param_2 + 0xe4)) {
            iVar10 = *piVar13;
            lVar11 = (longlong)iVar10;
            *(uint64_t *)(lVar9 + 8 + lVar11 * 0x10) = 0;
            *piVar13 = *(int *)(lVar9 + 4 + lVar11 * 0x10);
            *(int *)(lVar9 + 4 + lVar11 * 0x10) = (int)plVar7[4];
            *(int *)((longlong)plVar7 + 0x24) = *(int *)((longlong)plVar7 + 0x24) + -1;
            *(int *)(plVar7 + 4) = iVar10;
            iVar10 = *(int *)((longlong)plVar7 + 0x24);
            break;
          }
          piVar13 = (int *)((longlong)iVar5 * 0x10 + 4 + lVar9);
          iVar5 = *piVar13;
        } while (iVar5 != -1);
      }
      if (iVar10 != 0) goto LAB_180853768;
    }
    if (bVar3) {
      uVar4 = FUN_180853840(param_1,plVar7 + 5);
    }
    else {
      uVar4 = FUN_180853840(param_1 + 6,plVar7 + 5);
    }
    if (uVar4 == 0) {
      FUN_1808bb9a0(plVar7);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar7,&unknown_var_2080_ptr,0xe1,1);
    }
  }
LAB_180853766:
  plVar12 = (longlong *)(ulonglong)uVar4;
LAB_180853768:
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return plVar12;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180853790(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)*param_1) {
    param_1[1] = *plVar1;
    *(longlong *)plVar1[1] = *plVar1;
    *(longlong *)(*plVar1 + 8) = plVar1[1];
    plVar1[1] = (longlong)plVar1;
    *plVar1 = (longlong)plVar1;
    *(longlong **)plVar1[1] = plVar1;
    *(longlong *)(*plVar1 + 8) = plVar1[1];
    plVar1[1] = (longlong)plVar1;
    *plVar1 = (longlong)plVar1;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar1,&unknown_var_1696_ptr,0xe1,1);
  }
  return 0x1c;
}





// 函数: void FUN_180853840(longlong param_1,uint64_t param_2)
void FUN_180853840(longlong param_1,uint64_t param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  func_0x0001808534b0(param_1,param_2);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return;
}



uint64_t FUN_1808538a0(uint64_t *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  if (param_1 != (uint64_t *)0x0) {
    do {
      lVar3 = (**(code **)*param_1)(param_1);
      if (*(int *)(lVar3 + 0xcc) != 0x7fffffff) {
        iVar1 = *(int *)(param_1 + 0x20);
        iVar2 = 0;
        if (iVar1 < 1) {
          return 0x4a;
        }
        plVar4 = (longlong *)param_1[0x1f];
        while (*plVar4 != param_2) {
          iVar2 = iVar2 + 1;
          plVar4 = plVar4 + 1;
          if (iVar1 <= iVar2) {
            return 0x4a;
          }
        }
        if ((iVar2 < 0) || (iVar1 <= iVar2)) {
          return 0x1c;
        }
        iVar5 = (iVar1 - iVar2) + -1;
        if (0 < iVar5) {
          plVar4 = (longlong *)param_1[0x1f] + iVar2;
                    // WARNING: Subroutine does not return
          memmove(plVar4,plVar4 + 1,(longlong)iVar5 << 3);
        }
        *(int *)(param_1 + 0x20) = iVar1 + -1;
      }
      param_1 = (uint64_t *)param_1[0xc];
    } while (param_1 != (uint64_t *)0x0);
  }
  return 0;
}



uint64_t FUN_180853980(longlong param_1)

{
  uint64_t *puVar1;
  int iVar2;
  uint64_t uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uStackX_8;
  
  if (*(int *)(param_1 + 0x98) == 0) {
    uStackX_8 = 0;
    iVar2 = FUN_18073c380(*(uint64_t *)(param_1 + 0x78),0xfffffffe,&uStackX_8);
    uVar4 = uStackX_8;
    if (iVar2 != 0) {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = *(ulonglong *)
             (*(longlong *)
               (*(longlong *)(param_1 + 0x90) + -8 + (longlong)*(int *)(param_1 + 0x98) * 8) + 0x30)
    ;
  }
  uVar3 = FUN_180740e50(uVar4);
  if ((int)uVar3 == 0) {
    if (*(int *)(param_1 + 0x88) == 0) {
      uStackX_8 = 0;
      iVar2 = FUN_18073c380(*(uint64_t *)(param_1 + 0x78),0xfffffffe,&uStackX_8);
      uVar4 = uStackX_8;
      if (iVar2 != 0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = *(ulonglong *)(**(longlong **)(param_1 + 0x80) + 0x30);
    }
    uVar3 = FUN_180740e50(uVar4);
    if ((int)uVar3 == 0) {
      if (*(longlong *)(param_1 + 0x68) != 0) {
        FUN_180740e50();
      }
      uStackX_8 = uStackX_8 & 0xffffffffffffff00;
      uVar3 = FUN_18073cc30(*(uint64_t *)(param_1 + 0x78),&uStackX_8);
      if (((((int)uVar3 == 0) &&
           (uVar3 = FUN_18073dc80(*(uint64_t *)(param_1 + 0x78),0), (int)uVar3 == 0)) &&
          (uVar3 = FUN_18084ed10(param_1), (int)uVar3 == 0)) &&
         (uVar3 = FUN_18073dc80(*(uint64_t *)(param_1 + 0x78),uStackX_8 & 0xff), (int)uVar3 == 0))
      {
        for (plVar5 = *(longlong **)(param_1 + 0x80);
            (*(longlong **)(param_1 + 0x80) <= plVar5 &&
            (plVar5 < *(longlong **)(param_1 + 0x80) + *(int *)(param_1 + 0x88)));
            plVar5 = plVar5 + 1) {
          uVar3 = FUN_180740e50(*(uint64_t *)(*plVar5 + 0x30));
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
        for (plVar5 = *(longlong **)(param_1 + 0x90);
            (*(longlong **)(param_1 + 0x90) <= plVar5 &&
            (plVar5 < *(longlong **)(param_1 + 0x90) + *(int *)(param_1 + 0x98)));
            plVar5 = plVar5 + 1) {
          uVar3 = FUN_180740e50(*(uint64_t *)(*plVar5 + 0x30));
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
        for (puVar1 = *(uint64_t **)(param_1 + 0x50); puVar1 != (uint64_t *)(param_1 + 0x50);
            puVar1 = (uint64_t *)*puVar1) {
          uVar3 = FUN_180853980(puVar1[2]);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          if (puVar1 == (uint64_t *)(param_1 + 0x50)) break;
        }
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}



uint64_t FUN_180853ba0(longlong param_1,byte param_2)

{
  uint64_t uVar1;
  
  if (((byte)(*(uint *)(param_1 + 0xc0) >> 1) & 1) != param_2) {
    *(uint *)(param_1 + 0xc0) =
         ((uint)param_2 * 2 | *(uint *)(param_1 + 0xc0)) & ~((param_2 ^ 1) * 2);
    uVar1 = FUN_18084ead0();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}





