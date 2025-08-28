#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part093.c - 18 个函数

// 函数: void FUN_1805fede0(uint64_t param_1,longlong param_2)
void FUN_1805fede0(uint64_t param_1,longlong param_2)

{
  uint64_t uVar1;
  int iVar2;
  longlong lVar3;
  int8_t auStack_78 [32];
  uint64_t uStack_58;
  void *puStack_50;
  int8_t *puStack_48;
  int32_t uStack_40;
  int8_t auStack_38 [32];
  ulonglong uStack_18;
  
  uStack_58 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_78;
  iVar2 = FUN_1805febd0();
  uVar1 = *(uint64_t *)((longlong)iVar2 * 0xe0 + 0x58 + system_system_config);
  puStack_50 = &unknown_var_672_ptr;
  puStack_48 = auStack_38;
  uStack_40 = 0;
  auStack_38[0] = 0;
  if (param_2 != 0) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    uStack_40 = (int32_t)lVar3;
    strcpy_s(auStack_38,0x20,param_2);
  }
  FUN_18040b330(uVar1,&puStack_50,1);
  puStack_50 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_78);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1805feec0(uint64_t param_1,char param_2)

{
  int iVar1;
  
  iVar1 = FUN_1805febd0();
  return *(char *)(*(longlong *)((longlong)iVar1 * 0xe0 + 0x58 + system_system_config) + 0x100 +
                  (longlong)param_2) != -1;
}



uint64_t FUN_1805fef00(void)

{
  FUN_180626f80(&unknown_var_7496_ptr);
  return 0;
}



int32_t * FUN_1805fef40(int32_t *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int32_t uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  lVar5 = *(longlong *)(param_2 + 0x6d8);
  lVar1 = *(longlong *)(lVar5 + 0x8a8);
  fVar7 = *(float *)(*(longlong *)(param_2 + 0x20) + 0x108) +
          *(float *)(*(longlong *)(param_2 + 0x20) + 0x14) + *(float *)(param_2 + 0x990);
  if ((*(uint *)(param_2 + 0x56c) & 0x800) == 0) {
    lVar4 = *(longlong *)(param_2 + 0x590);
    if (lVar4 == 0) goto LAB_1805ff0d5;
    lVar2 = *(longlong *)(lVar1 + 0x260);
    if ((*(byte *)(lVar2 + 0xa8) & 1) == 0) {
      FUN_1802fac00(lVar2,*(longlong *)(lVar2 + 0x10) + 0x70,0xbf800000);
      lVar4 = *(longlong *)(param_2 + 0x590);
      lVar5 = *(longlong *)(param_2 + 0x6d8);
    }
    fVar6 = *(float *)(*(longlong *)(lVar4 + 0x2598) + 0xc) * *(float *)(lVar5 + 0x8c0);
  }
  else {
    lVar5 = *(longlong *)(lVar1 + 0x260);
    if (*(longlong *)(lVar5 + 0x28) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x590);
      if (lVar4 == 0) goto LAB_1805ff0d5;
      if ((*(byte *)(lVar5 + 0xa8) & 1) == 0) {
        FUN_1802fac00(lVar5,*(longlong *)(lVar5 + 0x10) + 0x70,0xbf800000);
        lVar4 = *(longlong *)(param_2 + 0x590);
      }
      fVar6 = 0.0;
      if (0.0 < *(float *)(lVar4 + 0xa9e0)) {
        fVar6 = *(float *)(lVar4 + 0x2610) - *(float *)(param_2 + 0x558);
      }
    }
    else {
      if (*(int *)(param_2 + 0x564) < 0) goto LAB_1805ff0d5;
      lVar4 = (longlong)*(int *)(param_2 + 0x564) * 0xa60;
      lVar5 = *(longlong *)(param_2 + 0x8d8);
      if (((*(uint *)(lVar4 + 0x360c + lVar5) & 0x800) != 0) ||
         (*(longlong *)(lVar4 + 0x3630 + lVar5) == 0)) goto LAB_1805ff0d5;
      func_0x000180534ad0(*(uint64_t *)(lVar4 + 0x3778 + lVar5));
      lVar5 = (longlong)*(int *)(param_2 + 0x564) * 0xa60;
      fVar6 = *(float *)(*(longlong *)
                          (*(longlong *)(lVar5 + 0x3630 + *(longlong *)(param_2 + 0x8d8)) + 0x2598)
                        + 0xc) *
              *(float *)(*(longlong *)(lVar5 + 0x3778 + *(longlong *)(param_2 + 0x8d8)) + 0x8c0);
    }
  }
  fVar7 = fVar7 + fVar6;
LAB_1805ff0d5:
  uVar3 = *(int32_t *)(lVar1 + 100);
  *param_1 = *(int32_t *)(lVar1 + 0x60);
  param_1[1] = uVar3;
  param_1[2] = fVar7;
  param_1[3] = 0x7f7fffff;
  return param_1;
}



longlong * FUN_1805ff120(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int32_t uVar2;
  int32_t uStack_c;
  
  plVar1 = *(longlong **)(param_2 + 0x6d8);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *param_1 = (longlong)plVar1;
  param_1[1] = CONCAT44(uStack_c,uVar2);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1805ff2e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x6e0) + 0x1358);
  if (-1 < iVar1) {
    iVar1 = *(int *)((longlong)iVar1 * 0xa60 + 0x30b8 + *(longlong *)(param_1 + 0x8d8));
    if ((iVar1 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar1);
    }
    if ((iVar1 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar1);
    }
    return iVar1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1805ff380(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x6e0);
  if (*(char *)(lVar1 + 0x21c0) == '\0') {
    iVar2 = *(int *)(lVar1 + 0x14b4);
  }
  else {
    iVar2 = *(int *)(lVar1 + 0x21c4);
  }
  lVar1 = *(longlong *)(param_1 + 0x8d8);
  if (((-1 < iVar2) && (iVar2 < *(int *)(lVar1 + 0x52ed94))) &&
     (-1 < *(short *)(lVar1 + 0x52dda0 + (longlong)iVar2 * 2))) {
    iVar2 = *(int *)((longlong)iVar2 * 0xa60 + 0x30b8 + lVar1);
    if ((iVar2 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar2);
    }
    if ((iVar2 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar2);
    }
    return iVar2;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ff540(uint64_t param_1,int param_2)
void FUN_1805ff540(uint64_t param_1,int param_2)

{
  char cVar1;
  uint64_t uVar2;
  
  if ((param_2 != -1) && (cVar1 = FUN_18061ca90(param_2), cVar1 == '\0')) {
    return;
  }
  if (param_2 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(system_system_config + 0x20))(&system_data_25a0,param_2);
  }
  FUN_180520b40(param_1,uVar2);
  return;
}






// 函数: void FUN_1805ff5b0(longlong param_1)
void FUN_1805ff5b0(longlong param_1)

{
  uint64_t uVar1;
  int8_t uVar2;
  longlong lVar3;
  int32_t uVar4;
  char acStackX_8 [8];
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  
  uVar1 = *(uint64_t *)(param_1 + 0x6e0);
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  FUN_1805b93a0(uVar1,0,&uStack_58,0x3f80000000000000,0,acStackX_8);
  if ((acStackX_8[0] != '\0') && (lVar3 = *(longlong *)(param_1 + 0x738), lVar3 != 0)) {
    uVar2 = *(int8_t *)(param_1 + 0x5fd);
    uVar4 = func_0x00018052dc80(param_1);
    *(int32_t *)(lVar3 + 0xe8) = uVar4;
    *(int8_t *)(lVar3 + 0xec) = uVar2;
    FUN_180508010(uVar1);
  }
  return;
}



char FUN_1805ff670(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5)

{
  longlong lVar1;
  void *puVar2;
  char cVar3;
  char cVar4;
  uint64_t *puVar5;
  int8_t uVar6;
  void *puVar7;
  longlong lVar8;
  int32_t uVar9;
  float fVar10;
  float fVar11;
  int32_t uVar12;
  char acStack_68 [16];
  float fStack_58;
  float fStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  uint64_t auStack_40 [4];
  
  lVar1 = *(longlong *)(param_1 + 0x6e0);
  uStack_48 = param_3;
  auStack_40[0] = param_4;
  cVar3 = FUN_1805b93a0(lVar1,1,param_2,param_3,param_4,acStack_68);
  if ((cVar3 != '\0') && ((*(uint *)(lVar1 + 0x1484) >> 2 & 1) != 0)) {
    fVar10 = *(float *)(param_1 + 0x550);
    fVar11 = *(float *)(param_1 + 0x554);
    uVar9 = *(int32_t *)(param_1 + 0x558);
    uVar12 = *(int32_t *)(param_1 + 0x55c);
    lVar8 = *(longlong *)(param_1 + 0x8d8);
    uStack_50 = uVar9;
    uStack_4c = uVar12;
    uStack_48 = param_3;
    fStack_58 = fVar10;
    fStack_54 = fVar11;
    cVar4 = FUN_1804f6190(lVar8,&fStack_58);
    if (cVar4 == '\0') {
      puVar2 = *(void **)(*(longlong *)(lVar8 + 0x18) + 0x4e0);
      puVar7 = &system_buffer_ptr;
      if (puVar2 != (void *)0x0) {
        puVar7 = puVar2;
      }
      FUN_180627020(&unknown_var_6736_ptr,(double)fStack_58,(double)fStack_54,puVar7);
      puVar5 = (uint64_t *)FUN_1804f6240(*(uint64_t *)(param_1 + 0x8d8),auStack_40,&fStack_58);
      fStack_58 = (float)*puVar5;
      fStack_54 = (float)((ulonglong)*puVar5 >> 0x20);
      fVar10 = fStack_58;
      fVar11 = fStack_54;
      uVar9 = uStack_50;
      uVar12 = uStack_4c;
    }
    _fStack_58 = CONCAT44(fVar11,fVar10);
    uStack_50 = uVar9;
    uStack_4c = uVar12;
    FUN_180509f20(param_1,&fStack_58,&uStack_48);
  }
  if ((acStack_68[0] != '\0') && (lVar8 = *(longlong *)(param_1 + 0x738), lVar8 != 0)) {
    uVar6 = *(int8_t *)(param_1 + 0x5fd);
    uVar9 = func_0x00018052dc80(param_1);
    *(int32_t *)(lVar8 + 0xe8) = uVar9;
    *(int8_t *)(lVar8 + 0xec) = uVar6;
    *(int32_t *)(lVar1 + 0x14e8) = param_5;
    return cVar3;
  }
  *(int32_t *)(lVar1 + 0x14e8) = param_5;
  return cVar3;
}



char FUN_1805ff67d(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,char param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,uint64_t param_10,uint64_t param_11,int32_t param_12,
                  int32_t param_13)

{
  longlong lVar1;
  void *puVar2;
  uint64_t uVar3;
  char cVar4;
  char cVar5;
  uint64_t *puVar6;
  uint64_t unaff_RBX;
  int8_t uVar7;
  void *puVar8;
  longlong lVar9;
  longlong in_R11;
  int32_t uVar10;
  int32_t unaff_XMM6_Da;
  float fVar11;
  float fVar12;
  int32_t unaff_XMM6_Dc;
  int32_t uVar13;
  int32_t in_stack_000000c0;
  
  uVar3 = param_10;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x48) = param_3;
  *(uint64_t *)(in_R11 + -0x40) = param_4;
  lVar1 = *(longlong *)(param_1 + 0x6e0);
  *(longlong *)(in_R11 + -0x70) = in_R11 + -0x68;
  *(uint64_t *)(in_R11 + -0x78) = param_4;
  cVar4 = FUN_1805b93a0(lVar1,1,param_2,param_10);
  if ((cVar4 != '\0') && ((*(uint *)(lVar1 + 0x1484) >> 2 & 1) != 0)) {
    fVar11 = *(float *)(param_1 + 0x550);
    fVar12 = *(float *)(param_1 + 0x554);
    uVar10 = *(int32_t *)(param_1 + 0x558);
    uVar13 = *(int32_t *)(param_1 + 0x55c);
    lVar9 = *(longlong *)(param_1 + 0x8d8);
    param_9._0_4_ = uVar10;
    param_9._4_4_ = uVar13;
    param_10 = uVar3;
    param_12 = unaff_XMM6_Da;
    param_13 = unaff_XMM6_Dc;
    param_8._0_4_ = fVar11;
    param_8._4_4_ = fVar12;
    cVar5 = FUN_1804f6190(lVar9,&param_8);
    if (cVar5 == '\0') {
      puVar2 = *(void **)(*(longlong *)(lVar9 + 0x18) + 0x4e0);
      puVar8 = &system_buffer_ptr;
      if (puVar2 != (void *)0x0) {
        puVar8 = puVar2;
      }
      FUN_180627020(&unknown_var_6736_ptr,(double)(float)param_8,(double)param_8._4_4_,puVar8);
      puVar6 = (uint64_t *)FUN_1804f6240(*(uint64_t *)(param_1 + 0x8d8),&param_11,&param_8);
      param_8._0_4_ = (float)*puVar6;
      param_8._4_4_ = (float)((ulonglong)*puVar6 >> 0x20);
      fVar11 = (float)param_8;
      fVar12 = param_8._4_4_;
      uVar10 = (int32_t)param_9;
      uVar13 = param_9._4_4_;
    }
    param_8 = CONCAT44(fVar12,fVar11);
    param_9._0_4_ = uVar10;
    param_9._4_4_ = uVar13;
    FUN_180509f20(param_1,&param_8,&param_10);
  }
  if ((param_6 != '\0') && (lVar9 = *(longlong *)(param_1 + 0x738), lVar9 != 0)) {
    uVar7 = *(int8_t *)(param_1 + 0x5fd);
    uVar10 = func_0x00018052dc80(param_1);
    *(int32_t *)(lVar9 + 0xe8) = uVar10;
    *(int8_t *)(lVar9 + 0xec) = uVar7;
    *(int32_t *)(lVar1 + 0x14e8) = in_stack_000000c0;
    return cVar4;
  }
  *(int32_t *)(lVar1 + 0x14e8) = in_stack_000000c0;
  return cVar4;
}



int8_t FUN_1805ff6d4(void)

{
  void *puVar1;
  char cVar2;
  uint64_t *puVar3;
  int8_t unaff_BPL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int8_t uVar4;
  void *puVar5;
  longlong lVar6;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t uVar7;
  int32_t uVar8;
  float fVar9;
  float fVar10;
  int32_t uVar11;
  char in_stack_00000030;
  float fStack0000000000000040;
  float fStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t in_stack_000000c0;
  
  fVar9 = *(float *)(unaff_RDI + 0x550);
  fVar10 = *(float *)(unaff_RDI + 0x554);
  uVar8 = *(int32_t *)(unaff_RDI + 0x558);
  uVar11 = *(int32_t *)(unaff_RDI + 0x55c);
  lVar6 = *(longlong *)(unaff_RDI + 0x8d8);
  uStack0000000000000048 = uVar8;
  uStack000000000000004c = uVar11;
  fStack0000000000000040 = fVar9;
  fStack0000000000000044 = fVar10;
  cVar2 = FUN_1804f6190(lVar6,&stack0x00000040);
  uVar7 = extraout_XMM0_Da;
  if (cVar2 == '\0') {
    puVar1 = *(void **)(*(longlong *)(lVar6 + 0x18) + 0x4e0);
    puVar5 = &system_buffer_ptr;
    if (puVar1 != (void *)0x0) {
      puVar5 = puVar1;
    }
    FUN_180627020(&unknown_var_6736_ptr,(double)fStack0000000000000040,(double)fStack0000000000000044,
                  puVar5);
    puVar3 = (uint64_t *)
             FUN_1804f6240(*(uint64_t *)(unaff_RDI + 0x8d8),&stack0x00000058,&stack0x00000040);
    fStack0000000000000040 = (float)*puVar3;
    fStack0000000000000044 = (float)((ulonglong)*puVar3 >> 0x20);
    uVar7 = extraout_XMM0_Da_00;
    fVar9 = fStack0000000000000040;
    fVar10 = fStack0000000000000044;
    uVar8 = uStack0000000000000048;
    uVar11 = uStack000000000000004c;
  }
  _fStack0000000000000040 = CONCAT44(fVar10,fVar9);
  uStack0000000000000048 = uVar8;
  uStack000000000000004c = uVar11;
  FUN_180509f20(uVar7,&stack0x00000040,&stack0x00000050);
  if ((in_stack_00000030 != '\0') && (lVar6 = *(longlong *)(unaff_RDI + 0x738), lVar6 != 0)) {
    uVar4 = *(int8_t *)(unaff_RDI + 0x5fd);
    uVar8 = func_0x00018052dc80();
    *(int32_t *)(lVar6 + 0xe8) = uVar8;
    *(int8_t *)(lVar6 + 0xec) = uVar4;
    *(int32_t *)(unaff_RSI + 0x14e8) = in_stack_000000c0;
    return unaff_BPL;
  }
  *(int32_t *)(unaff_RSI + 0x14e8) = in_stack_000000c0;
  return unaff_BPL;
}



int8_t FUN_1805ff78d(void)

{
  int8_t unaff_BPL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int8_t uVar1;
  longlong lVar2;
  int32_t uVar3;
  char in_stack_00000030;
  int32_t in_stack_000000c0;
  
  if ((in_stack_00000030 != '\0') && (lVar2 = *(longlong *)(unaff_RDI + 0x738), lVar2 != 0)) {
    uVar1 = *(int8_t *)(unaff_RDI + 0x5fd);
    uVar3 = func_0x00018052dc80();
    *(int32_t *)(lVar2 + 0xe8) = uVar3;
    *(int8_t *)(lVar2 + 0xec) = uVar1;
    *(int32_t *)(unaff_RSI + 0x14e8) = in_stack_000000c0;
    return unaff_BPL;
  }
  *(int32_t *)(unaff_RSI + 0x14e8) = in_stack_000000c0;
  return unaff_BPL;
}



int8_t FUN_1805ff799(void)

{
  int8_t unaff_BPL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int8_t uVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t in_stack_000000c0;
  
  lVar2 = *(longlong *)(unaff_RDI + 0x738);
  if (lVar2 != 0) {
    uVar1 = *(int8_t *)(unaff_RDI + 0x5fd);
    uVar3 = func_0x00018052dc80();
    *(int32_t *)(lVar2 + 0xe8) = uVar3;
    *(int8_t *)(lVar2 + 0xec) = uVar1;
    *(int32_t *)(unaff_RSI + 0x14e8) = in_stack_000000c0;
    return unaff_BPL;
  }
  *(int32_t *)(unaff_RSI + 0x14e8) = in_stack_000000c0;
  return unaff_BPL;
}






// 函数: void FUN_1805ff820(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1805ff820(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5,int32_t param_6)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x6e0);
  *(uint64_t *)(lVar1 + 0x12f8) = param_2;
  *(uint64_t *)(lVar1 + 0x1304) = param_3;
  *(uint64_t *)(lVar1 + 0x130c) = param_4;
  *(int32_t *)(lVar1 + 0x1314) = param_5;
  *(int32_t *)(lVar1 + 0x1300) = param_6;
  return;
}






// 函数: void FUN_1805ff8c0(uint64_t param_1,uint64_t param_2,int8_t param_3)
void FUN_1805ff8c0(uint64_t param_1,uint64_t param_2,int8_t param_3)

{
  FUN_180521270(param_1,param_3,param_2);
  return;
}






// 函数: void FUN_1805ff9e0(longlong param_1,float *param_2,uint64_t *param_3,char param_4)
void FUN_1805ff9e0(longlong param_1,float *param_2,uint64_t *param_3,char param_4)

{
  longlong lVar1;
  void *puVar2;
  char cVar3;
  uint64_t *puVar4;
  void *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint64_t uStackX_8;
  int8_t auStackX_10 [8];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  uStackX_8 = *param_3;
  fVar6 = *param_2;
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  if (param_4 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x8d8);
    fStack_20 = fVar8;
    fStack_1c = fVar9;
    fStack_28 = fVar6;
    fStack_24 = fVar7;
    cVar3 = FUN_1804f6190(lVar1,&fStack_28);
    if (cVar3 == '\0') {
      puVar2 = *(void **)(*(longlong *)(lVar1 + 0x18) + 0x4e0);
      puVar5 = &system_buffer_ptr;
      if (puVar2 != (void *)0x0) {
        puVar5 = puVar2;
      }
      FUN_180627020(&unknown_var_6736_ptr,(double)fStack_28,(double)fStack_24,puVar5);
      puVar4 = (uint64_t *)FUN_1804f6240(*(uint64_t *)(param_1 + 0x8d8),auStackX_10,&fStack_28);
      fStack_28 = (float)*puVar4;
      fStack_24 = (float)((ulonglong)*puVar4 >> 0x20);
      fVar6 = fStack_28;
      fVar7 = fStack_24;
      fVar8 = fStack_20;
      fVar9 = fStack_1c;
    }
  }
  _fStack_28 = CONCAT44(fVar7,fVar6);
  fStack_20 = fVar8;
  fStack_1c = fVar9;
  FUN_180509f20(param_1,&fStack_28,&uStackX_8);
  return;
}






// 函数: void FUN_1805ffa0a(longlong param_1)
void FUN_1805ffa0a(longlong param_1)

{
  longlong lVar1;
  void *puVar2;
  char cVar3;
  uint64_t *puVar4;
  longlong unaff_RBX;
  void *puVar5;
  float unaff_XMM6_Da;
  float unaff_XMM6_Db;
  float fStackX_20;
  float fStackX_24;
  
  lVar1 = *(longlong *)(param_1 + 0x8d8);
  cVar3 = FUN_1804f6190(lVar1,&fStackX_20);
  if (cVar3 == '\0') {
    puVar2 = *(void **)(*(longlong *)(lVar1 + 0x18) + 0x4e0);
    puVar5 = &system_buffer_ptr;
    if (puVar2 != (void *)0x0) {
      puVar5 = puVar2;
    }
    FUN_180627020(&unknown_var_6736_ptr,(double)fStackX_20,(double)fStackX_24,puVar5);
    puVar4 = (uint64_t *)
             FUN_1804f6240(*(uint64_t *)(unaff_RBX + 0x8d8),&stack0x00000058,&fStackX_20);
    fStackX_20 = (float)*puVar4;
    fStackX_24 = (float)((ulonglong)*puVar4 >> 0x20);
    unaff_XMM6_Da = fStackX_20;
    unaff_XMM6_Db = fStackX_24;
  }
  _fStackX_20 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  FUN_180509f20();
  return;
}






// 函数: void FUN_1805ffa90(void)
void FUN_1805ffa90(void)

{
  FUN_180509f20();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ffac0(longlong param_1,int param_2,uint64_t param_3,uint64_t param_4,
void FUN_1805ffac0(longlong param_1,int param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5,uint64_t param_6,uint64_t param_7,int32_t param_8,
                  longlong *param_9,int8_t param_10,int8_t param_11)

{
  ushort *puVar1;
  bool bVar2;
  longlong *plStackX_8;
  
  if ((((system_status_flag == 1) || (system_status_flag == 4)) || (*(int *)(param_1 + 0x570) != 1)) ||
     ((param_2 != *(int *)(*(longlong *)(param_1 + 0x8f8) + 0x9e0) &&
      (param_2 != *(int *)(*(longlong *)(param_1 + 0x8f8) + 0x9e4))))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  plStackX_8 = param_9;
  if (param_9 != (longlong *)0x0) {
    (**(code **)(*param_9 + 0x28))();
  }
  FUN_18051fea0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,&plStackX_8,param_10
                ,param_11);
  if (bVar2) {
    FUN_1805a3a20(param_1 + 0x28);
    puVar1 = (ushort *)(*(longlong *)(param_1 + 0x6e0) + 0x130);
    *puVar1 = *puVar1 | 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ffc20(longlong param_1,int param_2)
void FUN_1805ffc20(longlong param_1,int param_2)

{
  ushort *puVar1;
  ulonglong uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  int8_t auStack_248 [32];
  void *puStack_228;
  int8_t auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_248;
  uVar7 = (ulonglong)param_2;
  lVar5 = uVar7 * 0x1f8 + *(longlong *)(param_1 + 0x8f8);
  if ((*(int *)(lVar5 + 0x38) < 1) ||
     ((uVar2 = *(ulonglong *)
                ((longlong)*(int *)(lVar5 + 0xf8) * 0xa0 + 0x50 + *(longlong *)(lVar5 + 0xd8)),
      uVar6 = (uint)uVar2, (uVar2 >> 9 & 1) != 0 && (*(short *)(lVar5 + 0x10) < 1)))) {
    FUN_180626eb0(auStack_218,0x200,&unknown_var_1952_ptr,&unknown_var_7536_ptr);
    FUN_18061c7a0(auStack_218);
  }
  else {
    cVar4 = func_0x000180534dc0(lVar5 + 8);
    if ((cVar4 == '\0') && ((uVar6 & 0x103) != 0x100)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    FUN_18050c740(param_1,uVar7 & 0xffffffff,8);
    if (bVar3) {
      puVar1 = (ushort *)(*(longlong *)(param_1 + 0x6e0) + 0x130);
      *puVar1 = *puVar1 | 8;
    }
    puStack_228 = &unknown_var_6416_ptr;
    if (bVar3) {
      puStack_228 = &unknown_var_6344_ptr;
    }
    func_0x000180508000(*(uint64_t *)(param_1 + 0x6e0),&unknown_var_7624_ptr,&unknown_var_7672_ptr,0x262);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_248);
}






// 函数: void FUN_1805ffc8a(void)
void FUN_1805ffc8a(void)

{
  ushort *puVar1;
  bool bVar2;
  char cVar3;
  void *puVar4;
  longlong unaff_RDI;
  uint in_R10D;
  ulonglong in_stack_00000230;
  
  cVar3 = func_0x000180534dc0();
  if ((cVar3 == '\0') && ((in_R10D & 0x103) != 0x100)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  FUN_18050c740();
  if (bVar2) {
    puVar1 = (ushort *)(*(longlong *)(unaff_RDI + 0x6e0) + 0x130);
    *puVar1 = *puVar1 | 8;
  }
  puVar4 = &unknown_var_6416_ptr;
  if (bVar2) {
    puVar4 = &unknown_var_6344_ptr;
  }
  func_0x000180508000(*(uint64_t *)(unaff_RDI + 0x6e0),&unknown_var_7624_ptr,&unknown_var_7672_ptr,0x262,puVar4)
  ;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000230 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1805ffd19(void)
void FUN_1805ffd19(void)

{
  ulonglong in_stack_00000230;
  
  FUN_180626eb0(&stack0x00000030,0x200,&unknown_var_1952_ptr,&unknown_var_7536_ptr);
  FUN_18061c7a0(&stack0x00000030);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000230 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ffd60(longlong param_1,int param_2,int32_t param_3)
void FUN_1805ffd60(longlong param_1,int param_2,int32_t param_3)

{
  ushort *puVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x8f8);
  if (-1 < *(int *)(lVar2 + 0x9e0 + (longlong)param_2 * 4)) {
    if ((((system_status_flag == 1) || (system_status_flag == 4)) || (*(int *)(param_1 + 0x570) != 1)) ||
       (((*(int *)(lVar2 + 0x9e0) < 0 ||
         (lVar2 = *(longlong *)(lVar2 + 0x9e8), *(int *)(lVar2 + 0x30) < 1)) ||
        (((*(uint *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar2 + 0xd0))
           >> 9 & 1) != 0 && (*(short *)(lVar2 + 8) < 1)))))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    FUN_18050b440(param_1,param_2,0xffffffff,param_3,0);
    if (bVar3) {
      puVar1 = (ushort *)(*(longlong *)(param_1 + 0x6e0) + 0x130);
      *puVar1 = *puVar1 | 1;
    }
  }
  return;
}






// 函数: void FUN_1805ffd88(longlong param_1,longlong param_2)
void FUN_1805ffd88(longlong param_1,longlong param_2)

{
  ushort *puVar1;
  longlong lVar2;
  bool bVar3;
  int in_EAX;
  longlong unaff_RBX;
  
  if ((((in_EAX == 1) || (in_EAX == 4)) || (*(int *)(param_1 + 0x570) != 1)) ||
     (((*(int *)(param_2 + 0x9e0) < 0 ||
       (lVar2 = *(longlong *)(param_2 + 0x9e8), *(int *)(lVar2 + 0x30) < 1)) ||
      (((*(uint *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar2 + 0xd0)) >>
         9 & 1) != 0 && (*(short *)(lVar2 + 8) < 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  FUN_18050b440();
  if (bVar3) {
    puVar1 = (ushort *)(*(longlong *)(unaff_RBX + 0x6e0) + 0x130);
    *puVar1 = *puVar1 | 1;
  }
  return;
}






// 函数: void FUN_1805ffe09(void)
void FUN_1805ffe09(void)

{
  ushort *puVar1;
  longlong unaff_RBX;
  
  puVar1 = (ushort *)(*(longlong *)(unaff_RBX + 0x6e0) + 0x130);
  *puVar1 = *puVar1 | 1;
  return;
}






// 函数: void FUN_1805ffe20(longlong param_1)
void FUN_1805ffe20(longlong param_1)

{
  longlong lVar1;
  
  FUN_18050bbd0();
  lVar1 = *(longlong *)(param_1 + 0x6e0);
  if (lVar1 != 0) {
    *(int32_t *)(lVar1 + 0x21a8) = 0xfffffffe;
    *(uint64_t *)(lVar1 + 0x21ac) = 0xfffffffffffffffe;
  }
  return;
}



longlong * FUN_1805ffe60(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           **(longlong **)((longlong)param_2 * 0x1f8 + 0x100 + *(longlong *)(param_1 + 0x8f8));
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  return plVar1;
}






// 函数: void FUN_1805ffed0(longlong param_1,int param_2,char param_3)
void FUN_1805ffed0(longlong param_1,int param_2,char param_3)

{
  uint64_t uVar1;
  char cVar2;
  uint64_t unaff_RDI;
  int8_t uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int32_t uVar7;
  
  lVar5 = *(longlong *)(param_1 + 0x8f8);
  uVar1 = *(uint64_t *)(param_1 + 0x658);
  lVar4 = (longlong)param_2 * 0x1f8 + lVar5;
  if ((*(uint *)((longlong)*(int *)(lVar4 + 0xf8) * 0xa0 + 0x50 + *(longlong *)(lVar4 + 0xd8)) >>
       0xc & 1) != 0) {
    if ((*(longlong *)(lVar4 + 8) != 0) && (*(short *)(*(longlong *)(lVar4 + 8) + 8) != 0)) {
      FUN_1805373f0(lVar5,param_2);
    }
    FUN_180537de0(lVar5,param_2,0);
  }
  if ((*(int *)(lVar5 + 0x9e0) == param_2) || (*(int *)(lVar5 + 0x9e4) == param_2)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  if ((*(byte *)((longlong)*(int *)(lVar4 + 0xf8) * 0xa0 + 0x50 + *(longlong *)(lVar4 + 0xd8)) >> 1
      & 1) != 0) {
    if (*(short *)(lVar4 + 0x12) < 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0x3f800000;
    }
    if (*(longlong *)(lVar4 + 0x100) != 0) {
      *(int32_t *)(*(longlong *)(lVar4 + 0x100) + 0x90) = uVar7;
    }
  }
  lVar5 = *(longlong *)(lVar4 + 0x100);
  if (lVar5 != 0) {
    lVar6 = lVar5;
    if (param_3 != '\0') {
      cVar2 = func_0x000180534fb0();
      if (cVar2 != '\0') {
        *(float *)(lVar5 + 0x98) = (float)(8 - *(short *)(lVar4 + 0x10));
        lVar6 = *(longlong *)(lVar4 + 0x100);
      }
    }
    FUN_1805ec620(lVar6,param_3,0,uVar1,uVar1,uVar3,unaff_RDI);
  }
  return;
}






// 函数: void FUN_1805fffa0(longlong param_1)
void FUN_1805fffa0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x8f8) != 0) {
    FUN_1805369a0();
    iVar1 = *(int *)(param_1 + 0x10);
    piVar3 = *(int **)(param_1 + 0x8f8);
    lVar4 = *(longlong *)(param_1 + 0x8d8);
    *(longlong *)(piVar3 + 0x286) = lVar4;
    *piVar3 = iVar1;
    if ((-1 < iVar1) &&
       (lVar4 = *(longlong *)((longlong)iVar1 * 0xa60 + 0x37d8 + lVar4), lVar4 != 0)) {
      if (piVar3 == (int *)0x0) {
        *(int32_t *)(lVar4 + 0xdc) = 0;
        *(uint64_t *)(lVar4 + 0xe0) = 0;
        return;
      }
      lVar2 = *(longlong *)(piVar3 + 0x27a);
      if (lVar2 != 0) {
        *(int32_t *)(lVar4 + 0xdc) =
             *(int32_t *)
              ((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x58 + *(longlong *)(lVar2 + 0xd0));
        *(uint64_t *)(lVar4 + 0xe0) =
             *(uint64_t *)
              ((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar2 + 0xd0));
        return;
      }
      *(int32_t *)(lVar4 + 0xdc) = 0;
      *(uint64_t *)(lVar4 + 0xe0) = 0;
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




