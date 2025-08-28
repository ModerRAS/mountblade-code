#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part008.c - 29 个函数

// 函数: void FUN_1804e19a0(longlong param_1,longlong param_2)
void FUN_1804e19a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *(int32_t *)(param_1 + 0x10) = 0;
    **(int8_t **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((int)lVar1 < 0xc) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x0001804e19d7. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(uint64_t *)(param_1 + 8),0xc);
    return;
  }
  FUN_180626f80(&unknown_var_616_ptr,0xc,param_2);
  *(int32_t *)(param_1 + 0x10) = 0;
  **(int8_t **)(param_1 + 8) = 0;
  return;
}






// 函数: void FUN_1804e1a20(longlong param_1,uint64_t param_2,int param_3)
void FUN_1804e1a20(longlong param_1,uint64_t param_2,int param_3)

{
  if (param_3 + 1 < 0xc) {
                    // WARNING: Subroutine does not return
    memcpy(*(int8_t **)(param_1 + 8),param_2,(longlong)param_3);
  }
  **(int8_t **)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  return;
}






// 函数: void FUN_1804e1a3f(void)
void FUN_1804e1a3f(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}






// 函数: void FUN_1804e1a64(int8_t *param_1)
void FUN_1804e1a64(int8_t *param_1)

{
  longlong unaff_RDI;
  
  *param_1 = 0;
  *(int32_t *)(unaff_RDI + 0x10) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804e1a80(longlong param_1,longlong param_2,longlong param_3)
void FUN_1804e1a80(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int8_t auStack_98 [32];
  uint64_t uStack_78;
  void *puStack_70;
  int8_t *puStack_68;
  int32_t uStack_60;
  int8_t auStack_58 [16];
  ulonglong uStack_48;
  
  uStack_78 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98;
  puStack_70 = &unknown_var_2560_ptr;
  puStack_68 = auStack_58;
  uStack_60 = 0;
  auStack_58[0] = 0;
  lVar1 = strstr(*(uint64_t *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar2 + param_3) != '\0');
                    // WARNING: Subroutine does not return
    memcpy(puStack_68,*(longlong *)(param_1 + 8),lVar1 - *(longlong *)(param_1 + 8));
  }
  puStack_70 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_98);
}






// 函数: void FUN_1804e1be0(longlong param_1,longlong param_2)
void FUN_1804e1be0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *(int32_t *)(param_1 + 0x10) = 0;
    **(int8_t **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((int)lVar1 < 8) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x0001804e1c17. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(uint64_t *)(param_1 + 8),8);
    return;
  }
  FUN_180626f80(&unknown_var_616_ptr,8,param_2);
  *(int32_t *)(param_1 + 0x10) = 0;
  **(int8_t **)(param_1 + 8) = 0;
  return;
}






// 函数: void FUN_1804e1c60(longlong param_1,uint64_t param_2,int param_3)
void FUN_1804e1c60(longlong param_1,uint64_t param_2,int param_3)

{
  if (param_3 + 1 < 8) {
                    // WARNING: Subroutine does not return
    memcpy(*(int8_t **)(param_1 + 8),param_2,(longlong)param_3);
  }
  **(int8_t **)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  return;
}






// 函数: void FUN_1804e1c7f(void)
void FUN_1804e1c7f(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}






// 函数: void FUN_1804e1ca4(int8_t *param_1)
void FUN_1804e1ca4(int8_t *param_1)

{
  longlong unaff_RDI;
  
  *param_1 = 0;
  *(int32_t *)(unaff_RDI + 0x10) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804e1cc0(longlong param_1,longlong param_2,longlong param_3)
void FUN_1804e1cc0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int8_t auStack_88 [32];
  uint64_t uStack_68;
  void *puStack_60;
  int8_t *puStack_58;
  int32_t uStack_50;
  int8_t auStack_48 [8];
  ulonglong uStack_40;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_40 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_88;
  puStack_60 = &unknown_var_2608_ptr;
  puStack_58 = auStack_48;
  uStack_50 = 0;
  auStack_48[0] = 0;
  lVar1 = strstr(*(uint64_t *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar2 + param_3) != '\0');
                    // WARNING: Subroutine does not return
    memcpy(puStack_58,*(longlong *)(param_1 + 8),lVar1 - *(longlong *)(param_1 + 8));
  }
  puStack_60 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_88);
}






// 函数: void FUN_1804e1e20(void)
void FUN_1804e1e20(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






// 函数: void FUN_1804e2190(void)
void FUN_1804e2190(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






// 函数: void FUN_1804e2550(void)
void FUN_1804e2550(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






// 函数: void FUN_1804e2890(void)
void FUN_1804e2890(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






// 函数: void FUN_1804e2be0(void)
void FUN_1804e2be0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



uint64_t *
FUN_1804e2ec0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_720_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1804e2f00(longlong param_1,longlong *param_2,uint64_t param_3)

{
  longlong *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  
  puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x28,*(int8_t *)(param_1 + 0x28));
  puVar3[4] = param_2[4];
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = param_3;
  *(char *)(puVar3 + 3) = (char)param_2[3];
  if (*param_2 != 0) {
    uVar4 = FUN_1804e2f00(param_1,*param_2,puVar3);
    *puVar3 = uVar4;
  }
  puVar2 = puVar3;
  for (plVar1 = (longlong *)param_2[1]; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[1]) {
    puVar5 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x28,*(int8_t *)(param_1 + 0x28));
    puVar5[4] = plVar1[4];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = puVar2;
    *(char *)(puVar5 + 3) = (char)plVar1[3];
    puVar2[1] = puVar5;
    if (*plVar1 != 0) {
      uVar4 = FUN_1804e2f00(param_1,*plVar1,puVar5);
      *puVar5 = uVar4;
    }
    puVar2 = puVar5;
  }
  return puVar3;
}






// 函数: void FUN_1804e3060(longlong param_1)
void FUN_1804e3060(longlong param_1)

{
  if ((*(char *)(param_1 + 0x20) == '\0') && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}






// 函数: void FUN_1804e30b0(longlong *param_1)
void FUN_1804e30b0(longlong *param_1)

{
  if (((char)param_1[3] == '\0') && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}






// 函数: void FUN_1804e4a10(void)
void FUN_1804e4a10(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






// 函数: void FUN_1804e5780(longlong param_1)
void FUN_1804e5780(longlong param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(uint64_t **)(lVar1 + uVar4 * 8);
      if (puVar2 != (uint64_t *)0x0) {
        *puVar2 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}






// 函数: void FUN_1804e57a0(ulonglong *param_1)
void FUN_1804e57a0(ulonglong *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  
  puVar2 = (uint64_t *)param_1[1];
  for (puVar4 = (uint64_t *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0x16) {
    puVar4[0xb] = &unknown_var_720_ptr;
    *puVar4 = &unknown_var_720_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((longlong)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804e57c0(uint64_t *param_1)
void FUN_1804e57c0(uint64_t *param_1)

{
  param_1[0xb] = &unknown_var_720_ptr;
  *param_1 = &unknown_var_720_ptr;
  return;
}






// 函数: void FUN_1804e5800(longlong param_1)
void FUN_1804e5800(longlong param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(uint64_t **)(lVar1 + uVar4 * 8);
      if (puVar2 != (uint64_t *)0x0) {
        *puVar2 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



ulonglong FUN_1804e5820(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  
  lVar7 = param_1[1] - *param_1;
  uVar6 = 0;
  lVar4 = lVar7 >> 0x3f;
  lVar7 = lVar7 / 0x68 + lVar4;
  if (lVar7 != lVar4) {
    iVar2 = *(int *)(param_2 + 0x10);
    uVar11 = uVar6;
    do {
      lVar9 = *(longlong *)(uVar6 * 0x68 + 0x18 + *param_1);
      iVar3 = *(int *)(lVar9 + 0x10);
      iVar8 = iVar2;
      if (iVar3 == iVar2) {
        if (iVar3 != 0) {
          pbVar5 = *(byte **)(lVar9 + 8);
          lVar9 = *(longlong *)(param_2 + 8) - (longlong)pbVar5;
          do {
            pbVar1 = pbVar5 + lVar9;
            iVar8 = (uint)*pbVar5 - (uint)*pbVar1;
            if (iVar8 != 0) break;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar1 != 0);
        }
LAB_1804e589f:
        if (iVar8 == 0) {
          return uVar11 & 0xffff;
        }
      }
      else if (iVar3 == 0) goto LAB_1804e589f;
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      uVar6 = (ulonglong)(int)uVar10;
    } while (uVar6 < (ulonglong)(lVar7 - lVar4));
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1804e58d0(longlong *param_1,short param_2,short param_3,float param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  int32_t uStack_bc;
  longlong lStack_b8;
  longlong *plStack_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  int32_t uStack_4c;
  uint64_t uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pfVar6 = (float *)((longlong)param_2 * 0x68 + *param_1);
  pfVar7 = (float *)((longlong)param_3 * 0x68 + *param_1);
  plStack_b0 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x58,8,3);
  *plStack_b0 = (longlong)&unknown_var_720_ptr;
  plStack_b0[1] = 0;
  *(int32_t *)(plStack_b0 + 2) = 0;
  *plStack_b0 = (longlong)&unknown_var_3480_ptr;
  plStack_b0[1] = (longlong)(plStack_b0 + 3);
  *(int32_t *)(plStack_b0 + 2) = 0;
  *(int8_t *)(plStack_b0 + 3) = 0;
  lStack_b8 = 0;
  FUN_1804e6c90(&fStack_c8,pfVar6);
  plVar4 = plStack_b0;
  (**(code **)(*plStack_b0 + 0x10))(plStack_b0,&unknown_var_3408_ptr);
  FUN_18043be00(plVar4,(longlong)param_2 & 0xffffffff);
  uVar1 = *(uint *)(plVar4 + 2) + 1;
  if (uVar1 < 0x3f) {
    *(int16_t *)((ulonglong)*(uint *)(plVar4 + 2) + plVar4[1]) = 0x5f;
    *(uint *)(plVar4 + 2) = uVar1;
  }
  FUN_18043be00(plVar4,(int)param_3);
  uVar1 = *(uint *)(plVar4 + 2) + 1;
  if (uVar1 < 0x3f) {
    *(int16_t *)((ulonglong)*(uint *)(plVar4 + 2) + plVar4[1]) = 0x5f;
    *(uint *)(plVar4 + 2) = uVar1;
  }
  FUN_1804e5ec0(plVar4,&unknown_var_8448_ptr,(double)param_4);
  fStack_c8 = (*pfVar7 - *pfVar6) * param_4 + *pfVar6;
  fStack_c4 = (pfVar7[1] - pfVar6[1]) * param_4 + pfVar6[1];
  fStack_c0 = (pfVar7[2] - pfVar6[2]) * param_4 + pfVar6[2];
  uStack_bc = uStack_4c;
  fStack_a8 = (pfVar7[8] - pfVar6[8]) * param_4 + pfVar6[8];
  fStack_a4 = (pfVar7[9] - pfVar6[9]) * param_4 + pfVar6[9];
  fStack_a0 = (pfVar7[10] - pfVar6[10]) * param_4 + pfVar6[10];
  fStack_9c = (pfVar7[0xb] - pfVar6[0xb]) * param_4 + pfVar6[0xb];
  fStack_98 = (pfVar7[0xc] - pfVar6[0xc]) * param_4 + pfVar6[0xc];
  fStack_94 = (pfVar7[0xd] - pfVar6[0xd]) * param_4 + pfVar6[0xd];
  fStack_90 = (pfVar7[0xe] - pfVar6[0xe]) * param_4 + pfVar6[0xe];
  fStack_8c = (pfVar7[0xf] - pfVar6[0xf]) * param_4 + pfVar6[0xf];
  fStack_88 = (pfVar7[0x10] - pfVar6[0x10]) * param_4 + pfVar6[0x10];
  fStack_84 = (pfVar7[0x11] - pfVar6[0x11]) * param_4 + pfVar6[0x11];
  fStack_80 = (pfVar7[0x12] - pfVar6[0x12]) * param_4 + pfVar6[0x12];
  fStack_7c = (pfVar7[0x13] - pfVar6[0x13]) * param_4 + pfVar6[0x13];
  fStack_78 = (pfVar7[0x14] - pfVar6[0x14]) * param_4 + pfVar6[0x14];
  fStack_74 = (pfVar7[0x15] - pfVar6[0x15]) * param_4 + pfVar6[0x15];
  fStack_70 = (pfVar7[0x16] - pfVar6[0x16]) * param_4 + pfVar6[0x16];
  fStack_6c = (pfVar7[0x17] - pfVar6[0x17]) * param_4 + pfVar6[0x17];
  fStack_68 = (pfVar7[0x18] - pfVar6[0x18]) * param_4 + pfVar6[0x18];
  lVar2 = param_1[1];
  lVar3 = *param_1;
  FUN_1804e6120(param_1,&fStack_c8);
  plVar4 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    lVar5 = __RTCastToVoid(plStack_b0);
    (**(code **)*plVar4)(plVar4,0);
    if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar5);
    }
  }
  plStack_b0 = (longlong *)0x0;
  if (lStack_b8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return (lVar2 - lVar3) / 0x68 & 0xffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804e5ca0(uint64_t param_1,longlong param_2)
void FUN_1804e5ca0(uint64_t param_1,longlong param_2)

{
  void **ppuVar1;
  longlong lVar2;
  void *puVar3;
  int8_t auStack_148 [32];
  void **ppuStack_128;
  void **ppuStack_120;
  void *apuStack_118 [6];
  void *puStack_e8;
  void *puStack_e0;
  int32_t uStack_d8;
  uint8_t auStack_d0 [64];
  void *puStack_90;
  void *puStack_88;
  int32_t uStack_80;
  uint8_t auStack_78 [64];
  ulonglong uStack_38;
  
  apuStack_118[4] = (void *)0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_148;
  apuStack_118[0] = &unknown_var_2328_ptr;
  apuStack_118[1] = &unknown_var_2336_ptr;
  apuStack_118[2] = &system_data_8120;
  apuStack_118[3] = &system_data_89e8;
  lVar2 = 0;
  do {
    puStack_e8 = &unknown_var_3480_ptr;
    puStack_e0 = auStack_d0;
    uStack_d8 = 0;
    auStack_d0[0] = 0;
    ppuStack_120 = &puStack_90;
    puStack_90 = &unknown_var_3480_ptr;
    puStack_88 = auStack_78;
    uStack_80 = 0;
    auStack_78[0] = 0;
    FUN_180049bf0(&puStack_e8,*(uint64_t *)((longlong)apuStack_118 + lVar2));
    (**(code **)(puStack_90 + 0x10))
              (&puStack_90,*(uint64_t *)((longlong)apuStack_118 + lVar2 + 0x10));
    ppuVar1 = *(void ***)(param_2 + 8);
    if (ppuVar1 < *(void ***)(param_2 + 0x10)) {
      *(void ***)(param_2 + 8) = ppuVar1 + 0x16;
      *ppuVar1 = &unknown_var_720_ptr;
      ppuVar1[1] = (void *)0x0;
      *(int32_t *)(ppuVar1 + 2) = 0;
      *ppuVar1 = &unknown_var_3480_ptr;
      ppuVar1[1] = (void *)(ppuVar1 + 3);
      *(int32_t *)(ppuVar1 + 2) = 0;
      *(int8_t *)(ppuVar1 + 3) = 0;
      *(int32_t *)(ppuVar1 + 2) = uStack_d8;
      puVar3 = &system_buffer_ptr;
      if (puStack_e0 != (void *)0x0) {
        puVar3 = puStack_e0;
      }
      ppuStack_128 = ppuVar1;
      ppuStack_120 = ppuVar1;
      strcpy_s(ppuVar1[1],0x40,puVar3);
      ppuStack_128 = ppuVar1 + 0xb;
      *ppuStack_128 = &unknown_var_720_ptr;
      ppuVar1[0xc] = (void *)0x0;
      *(int32_t *)(ppuVar1 + 0xd) = 0;
      *ppuStack_128 = &unknown_var_3480_ptr;
      ppuVar1[0xc] = (void *)(ppuVar1 + 0xe);
      *(int32_t *)(ppuVar1 + 0xd) = 0;
      *(int8_t *)(ppuVar1 + 0xe) = 0;
      *(int32_t *)(ppuVar1 + 0xd) = uStack_80;
      puVar3 = &system_buffer_ptr;
      if (puStack_88 != (void *)0x0) {
        puVar3 = puStack_88;
      }
      strcpy_s(ppuVar1[0xc],0x40,puVar3);
    }
    else {
      FUN_1804e6610(param_2,&puStack_e8);
    }
    puStack_90 = &unknown_var_720_ptr;
    ppuStack_128 = &puStack_e8;
    puStack_e8 = &unknown_var_720_ptr;
    lVar2 = lVar2 + 8;
  } while (lVar2 < 0x10);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804e5ec0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804e5ec0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  int8_t auStack_98 [32];
  uint64_t uStack_78;
  uint64_t *puStack_70;
  char acStack_68 [64];
  ulonglong uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar3 = (ulonglong *)func_0x00018004b9a0();
  uStack_78 = 0;
  puStack_70 = &uStackX_18;
  __stdio_common_vsprintf(*puVar3 | 1,acStack_68,0x40,param_2);
  lVar1 = -1;
  do {
    lVar4 = lVar1;
    lVar1 = lVar4 + 1;
  } while (acStack_68[lVar4 + 1] != '\0');
  iVar2 = (int)(lVar4 + 1);
  if ((0 < iVar2) && (*(uint *)(param_1 + 0x10) + iVar2 < 0x3f)) {
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8),acStack_68,
           (longlong)((int)lVar4 + 2));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804e5f80(longlong *param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
void FUN_1804e5f80(longlong *param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t *puVar4;
  longlong lVar5;
  uint64_t *puVar6;
  longlong lVar7;
  uint64_t uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar8 = 0xfffffffffffffffe;
  lVar2 = param_1[1];
  lVar5 = *param_1;
  lVar3 = 0;
  uVar1 = *(uint *)(param_1 + 3);
  lVar7 = (lVar2 - lVar5) / 0x68;
  if (lVar7 != 0) {
    lVar3 = FUN_18062b420(_DAT_180c8ed18,lVar7 * 0x68,uVar1 & 0xff,param_4,0xfffffffffffffffe,0,0,0,
                          uVar1);
  }
  lVar7 = lVar7 * 0x68 + lVar3;
  if (lVar5 != lVar2) {
    puVar6 = (uint64_t *)(lVar3 + 0x10);
    lVar9 = lVar3;
    lVar10 = lVar7;
    lVar11 = lVar7;
    do {
      puVar4 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x58,8,3,uVar8,lVar9,lVar10,lVar11);
      *puVar4 = &unknown_var_720_ptr;
      puVar4[1] = 0;
      *(int32_t *)(puVar4 + 2) = 0;
      *puVar4 = &unknown_var_3480_ptr;
      puVar4[1] = puVar4 + 3;
      *(int32_t *)(puVar4 + 2) = 0;
      *(int8_t *)(puVar4 + 3) = 0;
      puVar6[1] = puVar4;
      *puVar6 = 0;
      FUN_1804e6c90(puVar6 + -2,lVar5);
      lVar5 = lVar5 + 0x68;
      puVar6 = puVar6 + 0xd;
    } while (lVar5 != lVar2);
  }
  lVar2 = *param_1;
  *param_1 = lVar3;
  lVar5 = param_1[1];
  param_1[1] = lVar7;
  param_1[2] = lVar7;
  *(uint *)(param_1 + 3) = uVar1;
  for (lVar7 = lVar2; lVar7 != lVar5; lVar7 = lVar7 + 0x68) {
    FUN_1804a6e40(lVar7);
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804e6120(ulonglong *param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
void FUN_1804e6120(ulonglong *param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)

{
  uint64_t *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lStackX_18;
  
  uVar4 = param_1[1];
  if (uVar4 < param_1[2]) {
    param_1[1] = uVar4 + 0x68;
    puVar1 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x58,8,3);
    *puVar1 = &unknown_var_720_ptr;
    puVar1[1] = 0;
    *(int32_t *)(puVar1 + 2) = 0;
    *puVar1 = &unknown_var_3480_ptr;
    puVar1[1] = puVar1 + 3;
    *(int32_t *)(puVar1 + 2) = 0;
    *(int8_t *)(puVar1 + 3) = 0;
    *(uint64_t **)(uVar4 + 0x18) = puVar1;
    *(uint64_t *)(uVar4 + 0x10) = 0;
    FUN_1804e6c90(uVar4,param_2);
    return;
  }
  uVar5 = *param_1;
  lStackX_18 = (longlong)(uVar4 - uVar5) / 0x68;
  uVar2 = 0;
  if (lStackX_18 == 0) {
    lStackX_18 = 1;
  }
  else {
    lStackX_18 = lStackX_18 * 2;
    if (lStackX_18 == 0) goto LAB_1804e6230;
  }
  uVar2 = FUN_18062b420(_DAT_180c8ed18,lStackX_18 * 0x68,(char)param_1[3],param_4,0xfffffffffffffffe
                       );
  uVar4 = param_1[1];
  uVar5 = *param_1;
LAB_1804e6230:
  uVar3 = uVar2;
  if (uVar5 != uVar4) {
    lVar6 = uVar2 - uVar5;
    do {
      puVar1 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x58,8,3);
      *puVar1 = &unknown_var_720_ptr;
      puVar1[1] = 0;
      *(int32_t *)(puVar1 + 2) = 0;
      *puVar1 = &unknown_var_3480_ptr;
      puVar1[1] = puVar1 + 3;
      *(int32_t *)(puVar1 + 2) = 0;
      *(int8_t *)(puVar1 + 3) = 0;
      *(uint64_t **)(lVar6 + 0x18 + uVar5) = puVar1;
      *(uint64_t *)(lVar6 + 0x10 + uVar5) = 0;
      FUN_1804e6c90(uVar3,uVar5);
      uVar3 = uVar3 + 0x68;
      uVar5 = uVar5 + 0x68;
    } while (uVar5 != uVar4);
  }
  FUN_1804e6c00(uVar3,param_2);
  uVar4 = param_1[1];
  uVar5 = *param_1;
  if (uVar5 != uVar4) {
    do {
      FUN_1804a6e40(uVar5);
      uVar5 = uVar5 + 0x68;
    } while (uVar5 != uVar4);
    uVar5 = *param_1;
  }
  if (uVar5 == 0) {
    *param_1 = uVar2;
    param_1[1] = uVar3 + 0x68;
    param_1[2] = lStackX_18 * 0x68 + uVar2;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(uVar5);
}






// 函数: void FUN_1804e6330(ulonglong *param_1)
void FUN_1804e6330(ulonglong *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  
  puVar2 = (uint64_t *)param_1[1];
  for (puVar4 = (uint64_t *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0x16) {
    puVar4[0xb] = &unknown_var_720_ptr;
    *puVar4 = &unknown_var_720_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((longlong)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804e63a0(longlong param_1)
void FUN_1804e63a0(longlong param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(uint64_t **)(lVar1 + uVar4 * 8);
      if (puVar2 != (uint64_t *)0x0) {
        *puVar2 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804e6610(uint64_t *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804e6610(uint64_t *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  int8_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  void *puVar5;
  void *puVar6;
  int8_t *puVar7;
  uint64_t *puStackX_18;
  longlong lStackX_20;
  int8_t *puVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  puVar7 = (int8_t *)param_1[1];
  puVar1 = (int8_t *)*param_1;
  lStackX_20 = ((longlong)puVar7 - (longlong)puVar1) / 0xb0;
  if (lStackX_20 == 0) {
    lStackX_20 = 1;
  }
  else {
    lStackX_20 = lStackX_20 * 2;
    if (lStackX_20 == 0) {
      puStackX_18 = (uint64_t *)0x0;
      goto LAB_1804e66bf;
    }
  }
  puStackX_18 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lStackX_20 * 0xb0);
  puVar7 = (int8_t *)param_1[1];
  puVar1 = (int8_t *)*param_1;
LAB_1804e66bf:
  puVar3 = puStackX_18;
  if (puVar1 != puVar7) {
    puVar4 = puStackX_18 + 0xe;
    puVar8 = puVar1 + (-8 - (longlong)puStackX_18);
    do {
      *puVar3 = &unknown_var_720_ptr;
      puVar4[-0xd] = 0;
      *(int32_t *)(puVar4 + -0xc) = 0;
      *puVar3 = &unknown_var_3480_ptr;
      puVar4[-0xd] = puVar4 + -0xb;
      *(int32_t *)(puVar4 + -0xc) = 0;
      *(int8_t *)(puVar4 + -0xb) = 0;
      *(int32_t *)(puVar4 + -0xc) =
           *(int32_t *)
            ((longlong)puVar4 + (longlong)(puVar1 + (-0x68 - (longlong)puStackX_18) + 8));
      puVar6 = *(void **)
                ((longlong)puVar4 + (longlong)(puVar1 + (-0x68 - (longlong)puStackX_18)));
      puVar5 = &system_buffer_ptr;
      if (puVar6 != (void *)0x0) {
        puVar5 = puVar6;
      }
      puVar9 = puVar3;
      strcpy_s(puVar4[-0xd],0x40,puVar5,param_4,puVar8,puVar3,puVar3,uVar10);
      puVar2 = puVar4 + -3;
      *puVar2 = &unknown_var_720_ptr;
      puVar4[-2] = 0;
      *(int32_t *)(puVar4 + -1) = 0;
      *puVar2 = &unknown_var_3480_ptr;
      puVar4[-2] = puVar4;
      *(int32_t *)(puVar4 + -1) = 0;
      *(int8_t *)puVar4 = 0;
      *(int32_t *)(puVar4 + -1) =
           *(int32_t *)((longlong)puVar4 + (longlong)(puVar1 + (-8 - (longlong)puStackX_18)));
      puVar6 = &system_buffer_ptr;
      if (*(void **)((longlong)puVar4 + (longlong)(puVar1 + (-0x10 - (longlong)puStackX_18)))
          != (void *)0x0) {
        puVar6 = *(void **)
                  ((longlong)puVar4 + (longlong)(puVar1 + (-0x10 - (longlong)puStackX_18)));
      }
      strcpy_s(puVar4,0x40,puVar6,param_4,puVar8,puVar2,puVar9);
      puVar3 = puVar3 + 0x16;
      puVar4 = puVar4 + 0x16;
    } while ((int8_t *)((longlong)puVar4 + (longlong)(puVar1 + (-0x70 - (longlong)puStackX_18)))
             != puVar7);
  }
  FUN_1800b8300(puVar3,param_2);
  FUN_1800b8300(puVar3 + 0xb,param_2 + 0x58);
  puVar4 = (uint64_t *)param_1[1];
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != puVar4) {
    do {
      puVar2[0xb] = &unknown_var_720_ptr;
      *puVar2 = &unknown_var_720_ptr;
      puVar2 = puVar2 + 0x16;
    } while (puVar2 != puVar4);
    puVar2 = (uint64_t *)*param_1;
  }
  if (puVar2 == (uint64_t *)0x0) {
    *param_1 = puStackX_18;
    param_1[1] = puVar3 + 0x16;
    param_1[2] = puStackX_18 + lStackX_20 * 0x16;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






