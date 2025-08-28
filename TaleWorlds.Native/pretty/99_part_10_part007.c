#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_10_part007.c - 11 个函数

// 函数: void FUN_1806a6f40(longlong param_1,longlong *param_2)
void FUN_1806a6f40(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 8);
                    // WARNING: Could not recover jumptable at 0x0001806a6f71. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x10);
  return;
}






// 函数: void FUN_1806a6f80(uint64_t param_1,uint64_t param_2,int8_t param_3)
void FUN_1806a6f80(uint64_t param_1,uint64_t param_2,int8_t param_3)

{
  void *puStack_28;
  uint64_t uStack_20;
  int8_t uStack_18;
  
  puStack_28 = &unknown_var_3232_ptr;
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_1806a39a0(param_1,&puStack_28,0x16);
  return;
}



int8_t FUN_1806a6fb0(longlong param_1,uint64_t param_2,uint64_t *param_3,int *param_4)

{
  int32_t uVar1;
  longlong *plVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint64_t *puVar7;
  int32_t *puVar8;
  int8_t uVar9;
  int8_t auStackX_8 [8];
  int8_t auStackX_20 [8];
  uint64_t uStack_158;
  uint64_t uStack_150;
  void *puStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  void *puStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  int32_t uStack_100;
  int32_t uStack_f8;
  int32_t uStack_f4;
  int32_t uStack_f0;
  int32_t uStack_ec;
  int32_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  int8_t auStack_b8 [16];
  int8_t auStack_a8 [112];
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  plVar5 = (longlong *)(**(code **)(*plVar2 + 0x18))(plVar2);
  lVar6 = (**(code **)(*plVar5 + 0xa0))(plVar5,auStack_a8,param_3);
  puStack_118 = &unknown_var_3712_ptr;
  uStack_100 = *(int32_t *)(lVar6 + 0x18);
  uStack_d8 = *(uint64_t *)(lVar6 + 0x40);
  uStack_110 = *(uint64_t *)(lVar6 + 8);
  uStack_108 = *(uint64_t *)(lVar6 + 0x10);
  uStack_c8 = *(uint64_t *)(lVar6 + 0x50);
  uStack_c0 = *(uint64_t *)(lVar6 + 0x58);
  uStack_e8 = *(int32_t *)(lVar6 + 0x30);
  uStack_e0 = *(uint64_t *)(lVar6 + 0x38);
  uStack_d0 = *(uint *)(lVar6 + 0x48);
  uStack_f8 = *(int32_t *)(lVar6 + 0x20);
  uStack_f4 = *(int32_t *)(lVar6 + 0x24);
  uStack_f0 = *(int32_t *)(lVar6 + 0x28);
  uStack_ec = *(int32_t *)(lVar6 + 0x2c);
  if ((uint)(param_4[2] - *param_4) < uStack_d0) {
    uVar9 = 2;
  }
  else {
    uStack_158 = *(uint64_t *)param_4;
    uStack_150 = *(uint64_t *)(param_4 + 2);
    puVar7 = (uint64_t *)FUN_1806a41e0(param_1,auStack_b8,&puStack_118,&uStack_158);
    uVar3 = *puVar7;
    *(uint64_t *)param_4 = uVar3;
    uVar4 = puVar7[1];
    *(uint64_t *)(param_4 + 2) = uVar4;
    puVar8 = (int32_t *)FUN_1806a74b0(param_1,auStackX_8,param_3[1]);
    uVar1 = *puVar8;
    puVar8 = (int32_t *)FUN_1806a74b0(param_1,auStackX_20,*param_3);
    uStack_158 = CONCAT44(uVar1,*puVar8);
    puStack_148 = &unknown_var_3168_ptr;
    uStack_138 = uStack_158;
    uStack_140 = param_2;
    uStack_130 = uVar3;
    uStack_128 = uVar4;
    FUN_1806a39a0(param_1,&puStack_148,0xb);
    uVar9 = *(char *)(param_1 + 0x1b8) == '\0';
    puStack_148 = &unknown_var_2008_ptr;
  }
  (**(code **)(*plVar2 + 0x20))(plVar2);
  return uVar9;
}



bool FUN_1806a7079(void)

{
  char cVar1;
  uint64_t *puVar2;
  uint64_t *unaff_RBX;
  longlong *unaff_R14;
  longlong unaff_R15;
  
  puVar2 = (uint64_t *)FUN_1806a41e0();
  *unaff_RBX = *puVar2;
  unaff_RBX[1] = puVar2[1];
  FUN_1806a74b0();
  FUN_1806a74b0();
  FUN_1806a39a0();
  cVar1 = *(char *)(unaff_R15 + 0x1b8);
  (**(code **)(*unaff_R14 + 0x20))();
  return cVar1 == '\0';
}



int32_t FUN_1806a7137(void)

{
  int32_t unaff_EBX;
  longlong *unaff_R14;
  
  (**(code **)(*unaff_R14 + 0x20))();
  return unaff_EBX;
}



bool FUN_1806a7160(longlong param_1,uint64_t param_2,uint64_t param_3,int *param_4,
                  uint64_t *param_5)

{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int *piVar9;
  uint64_t *puVar10;
  longlong *plVar11;
  longlong lVar12;
  uint64_t *puVar13;
  int32_t *puVar14;
  longlong lStackX_8;
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  int *piStackX_20;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint uStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  void *puStack_108;
  uint64_t uStack_100;
  int32_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint uStack_d8;
  int8_t auStack_d0 [16];
  int8_t auStack_c0 [128];
  
  plVar6 = *(longlong **)(param_1 + 0x48);
  lStackX_8 = param_1;
  uStackX_10 = param_2;
  uStackX_18 = param_3;
  piStackX_20 = param_4;
  plVar11 = (longlong *)(**(code **)(*plVar6 + 0x18))(plVar6);
  puVar10 = param_5;
  lVar12 = (**(code **)(*plVar11 + 0x18))(plVar11,auStack_c0,param_5);
  uVar1 = *(uint *)(lVar12 + 0x48);
  uVar2 = *(int32_t *)(lVar12 + 0x4c);
  uVar3 = *(int32_t *)(lVar12 + 0x50);
  uVar7 = *(uint64_t *)(lVar12 + 0x58);
  uVar8 = *(uint64_t *)(lVar12 + 0x60);
  (**(code **)(*plVar6 + 0x20))(plVar6);
  lVar12 = lStackX_8;
  iVar4 = piStackX_20[2];
  iVar5 = *piStackX_20;
  uStack_138 = *(uint64_t *)piStackX_20;
  uStack_130 = *(uint64_t *)(piStackX_20 + 2);
  uStack_128 = uVar1;
  uStack_124 = uVar2;
  uStack_120 = uVar3;
  uStack_118 = uVar7;
  uStack_110 = uVar8;
  puVar13 = (uint64_t *)FUN_1806a4370(lStackX_8,auStack_d0,&uStack_128,&uStack_138);
  piVar9 = piStackX_20;
  *(uint64_t *)piStackX_20 = *puVar13;
  *(uint64_t *)(piStackX_20 + 2) = puVar13[1];
  puVar14 = (int32_t *)FUN_1806a74b0(lVar12,&piStackX_20,puVar10[1]);
  uVar2 = *puVar14;
  puVar14 = (int32_t *)FUN_1806a74b0(lVar12,&lStackX_8,*puVar10);
  uVar7 = *(uint64_t *)piVar9;
  uVar8 = *(uint64_t *)(piVar9 + 2);
  uStack_138 = CONCAT44(uVar2,*puVar14);
  puVar14 = (int32_t *)FUN_1806a74b0(lVar12,&param_5,uStackX_18);
  uStack_f8 = *puVar14;
  puStack_108 = &unknown_var_3104_ptr;
  uStack_100 = uStackX_10;
  uStack_e0 = uStack_138;
  uStack_f0 = uVar7;
  uStack_e8 = uVar8;
  uStack_d8 = (uint)(iVar4 - iVar5) / uVar1;
  FUN_1806a39a0(lVar12,&puStack_108,7);
  return *(char *)(lVar12 + 0x1b8) == '\0';
}






// 函数: void FUN_1806a73a0(longlong param_1,longlong *param_2)
void FUN_1806a73a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_2;
  uVar3 = param_2[1] - lVar1 >> 4;
  **(int **)(param_1 + 8) = **(int **)(param_1 + 8) + 4;
  if ((int)uVar3 != 0) {
    lVar2 = 0;
    uVar3 = uVar3 & 0xffffffff;
    do {
      (**(code **)(*(longlong *)(lVar2 + lVar1) + 8))(lVar2 + lVar1,param_1);
      lVar2 = lVar2 + 0x10;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}






// 函数: void FUN_1806a73c7(uint64_t param_1,uint64_t param_2,uint param_3)
void FUN_1806a73c7(uint64_t param_1,uint64_t param_2,uint param_3)

{
  longlong lVar1;
  longlong unaff_RBP;
  ulonglong uVar2;
  
  lVar1 = 0;
  uVar2 = (ulonglong)param_3;
  do {
    (**(code **)(*(longlong *)(lVar1 + unaff_RBP) + 8))(lVar1 + unaff_RBP);
    lVar1 = lVar1 + 0x10;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return;
}






// 函数: void FUN_1806a7402(void)
void FUN_1806a7402(void)

{
  return;
}






// 函数: void FUN_1806a7410(longlong param_1,longlong *param_2)
void FUN_1806a7410(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_2;
  uVar3 = param_2[1] - lVar1 >> 5;
  **(int **)(param_1 + 8) = **(int **)(param_1 + 8) + 4;
  if ((int)uVar3 != 0) {
    lVar2 = 0;
    uVar3 = uVar3 & 0xffffffff;
    do {
      (**(code **)(*(longlong *)(lVar2 + lVar1) + 8))(lVar2 + lVar1,param_1);
      lVar2 = lVar2 + 0x20;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}






// 函数: void FUN_1806a7437(uint64_t param_1,uint64_t param_2,uint param_3)
void FUN_1806a7437(uint64_t param_1,uint64_t param_2,uint param_3)

{
  longlong lVar1;
  longlong unaff_RBP;
  ulonglong uVar2;
  
  lVar1 = 0;
  uVar2 = (ulonglong)param_3;
  do {
    (**(code **)(*(longlong *)(lVar1 + unaff_RBP) + 8))(lVar1 + unaff_RBP);
    lVar1 = lVar1 + 0x20;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return;
}






// 函数: void FUN_1806a7472(void)
void FUN_1806a7472(void)

{
  return;
}



int32_t * FUN_1806a74b0(longlong param_1,int32_t *param_2,byte *param_3)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  int32_t uVar4;
  byte bVar5;
  char *pcVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  byte *pbVar11;
  longlong lVar12;
  uint uVar13;
  char acStackX_18 [8];
  int32_t auStackX_20 [2];
  uint64_t uStack_38;
  void *puStack_30;
  uint64_t uStack_28;
  int32_t uStack_20;
  
  if ((param_3 == (byte *)0x0) || (bVar5 = *param_3, bVar5 == 0)) {
    *param_2 = 0;
    return param_2;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar13 = 0x1505;
    pbVar11 = param_3;
    do {
      pbVar11 = pbVar11 + 1;
      uVar13 = uVar13 * 0x21 ^ (uint)bVar5;
      bVar5 = *pbVar11;
    } while (bVar5 != 0);
    uVar13 = *(uint *)(*(longlong *)(param_1 + 0x28) +
                      (ulonglong)(*(int *)(param_1 + 0x34) - 1U & uVar13) * 4);
    if (uVar13 != 0xffffffff) {
      do {
        pcVar6 = *(char **)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar13 * 0x10);
        lVar12 = (longlong)param_3 - (longlong)pcVar6;
        do {
          cVar1 = *pcVar6;
          cVar2 = pcVar6[lVar12];
          if (cVar1 != cVar2) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          if ((uVar13 != 0xffffffff) &&
             (lVar12 = (ulonglong)uVar13 * 0x10 + *(longlong *)(param_1 + 0x18), lVar12 != 0)) {
            *param_2 = *(int32_t *)(lVar12 + 8);
            return param_2;
          }
          break;
        }
        uVar13 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar13 * 4);
      } while (uVar13 != 0xffffffff);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x48);
  plVar7 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3);
  plVar8 = (longlong *)(**(code **)(*plVar7 + 0xc0))(plVar7);
  (**(code **)(*plVar8 + 0x20))(plVar8,auStackX_20,param_3);
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0xc0))(plVar7);
  uVar9 = (**(code **)(*plVar7 + 0x28))(plVar7,auStackX_20[0]);
  uStack_20 = auStackX_20[0];
  puStack_30 = &unknown_var_2976_ptr;
  uStack_28 = uVar9;
  FUN_1806a39a0(param_1,&puStack_30,1);
  uVar4 = auStackX_20[0];
  uStack_38 = uVar9;
  puVar10 = (uint64_t *)FUN_1806a45c0(param_1 + 0x10,&uStack_38,acStackX_18);
  if (acStackX_18[0] == '\0') {
    *puVar10 = uVar9;
    *(int32_t *)(puVar10 + 1) = uVar4;
  }
  *param_2 = auStackX_20[0];
  (**(code **)(*plVar3 + 0x20))(plVar3);
  return param_2;
}






// 函数: void FUN_1806a756c(void)
void FUN_1806a756c(void)

{
  longlong *plVar1;
  int32_t uVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  longlong unaff_RDI;
  int32_t *unaff_R14;
  uint64_t uStackX_20;
  char in_stack_00000070;
  int32_t in_stack_00000078;
  
  plVar1 = *(longlong **)(unaff_RDI + 0x48);
  plVar3 = (longlong *)(**(code **)(*plVar1 + 0x18))(plVar1);
  plVar4 = (longlong *)(**(code **)(*plVar3 + 0xc0))(plVar3);
  (**(code **)(*plVar4 + 0x20))(plVar4,&stack0x00000078);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0xc0))(plVar3);
  uVar5 = (**(code **)(*plVar3 + 0x28))(plVar3,in_stack_00000078);
  FUN_1806a39a0();
  uVar2 = in_stack_00000078;
  uStackX_20 = uVar5;
  puVar6 = (uint64_t *)FUN_1806a45c0(unaff_RDI + 0x10,&uStackX_20,&stack0x00000070);
  if (in_stack_00000070 == '\0') {
    *puVar6 = uVar5;
    *(int32_t *)(puVar6 + 1) = uVar2;
  }
  *unaff_R14 = in_stack_00000078;
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}






// 函数: void FUN_1806a763c(void)
void FUN_1806a763c(void)

{
  longlong *plVar1;
  int32_t uVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  longlong unaff_RDI;
  longlong in_R9;
  longlong lVar7;
  int in_R10D;
  longlong in_R11;
  int32_t *unaff_R14;
  uint64_t uStackX_20;
  char in_stack_00000070;
  int32_t in_stack_00000078;
  
  if ((in_R10D != -1) && (lVar7 = in_R9 * 0x10 + in_R11, lVar7 != 0)) {
    *unaff_R14 = *(int32_t *)(lVar7 + 8);
    return;
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x48);
  plVar3 = (longlong *)(**(code **)(*plVar1 + 0x18))(plVar1);
  plVar4 = (longlong *)(**(code **)(*plVar3 + 0xc0))(plVar3);
  (**(code **)(*plVar4 + 0x20))(plVar4,&stack0x00000078);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0xc0))(plVar3);
  uVar5 = (**(code **)(*plVar3 + 0x28))(plVar3,in_stack_00000078);
  FUN_1806a39a0();
  uVar2 = in_stack_00000078;
  uStackX_20 = uVar5;
  puVar6 = (uint64_t *)FUN_1806a45c0(unaff_RDI + 0x10,&uStackX_20,&stack0x00000070);
  if (in_stack_00000070 == '\0') {
    *puVar6 = uVar5;
    *(int32_t *)(puVar6 + 1) = uVar2;
  }
  *unaff_R14 = in_stack_00000078;
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}






// 函数: void FUN_1806a7680(uint64_t param_1,uint64_t param_2,int32_t *param_3,int32_t *param_4,
void FUN_1806a7680(uint64_t param_1,uint64_t param_2,int32_t *param_3,int32_t *param_4,
                  int32_t *param_5)

{
  void *puStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  
  uStack_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_28 = param_4[1];
  uStack_2c = *param_4;
  uStack_24 = param_4[2];
  puStack_48 = &unknown_var_3248_ptr;
  uStack_20 = *param_5;
  uStack_1c = param_5[1];
  uStack_18 = param_5[2];
  uStack_40 = param_2;
  FUN_1806a39a0(uStack_18,&puStack_48,0x17);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1806a7720(void)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)
           (**(code **)(*_DAT_180be0050 + 8))
                     (_DAT_180be0050,0xb8,&unknown_var_5432_ptr,&unknown_var_5360_ptr,0x5de);
  if (puVar1 != (uint64_t *)0x0) {
    *puVar1 = &unknown_var_5064_ptr;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(int32_t *)(puVar1 + 6) = 0x3f400000;
    *(int32_t *)((longlong)puVar1 + 0x34) = 0xffffffff;
    puVar1[7] = 0;
    FUN_1806b0b40(puVar1 + 1,0x40);
    *(int32_t *)(puVar1 + 8) = 1;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *(int32_t *)(puVar1 + 0xe) = 0x3f400000;
    *(int32_t *)((longlong)puVar1 + 0x74) = 0xffffffff;
    puVar1[0xf] = 0;
    FUN_1806b0560(puVar1 + 9,0x40);
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    *(int32_t *)(puVar1 + 0x15) = 0x3f400000;
    *(int32_t *)((longlong)puVar1 + 0xac) = 0xffffffff;
    puVar1[0x16] = 0;
    FUN_1806a6390(puVar1 + 0x10,0x40);
    return puVar1;
  }
  return (uint64_t *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1806a7780(void)

{
  longlong lVar1;
  uint64_t uVar2;
  
  lVar1 = (**(code **)(*_DAT_180be0050 + 8))
                    (_DAT_180be0050,0xf0,&unknown_var_5584_ptr,&unknown_var_5360_ptr,0x5d0);
  if (lVar1 != 0) {
    uVar2 = FUN_1806a9b80(lVar1);
    FUN_1806ae700(uVar2);
    return uVar2;
  }
  FUN_1806ae700(0);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1806a77f0(uint64_t param_1)

{
  longlong lVar1;
  uint64_t uVar2;
  
  lVar1 = (**(code **)(*_DAT_180be0050 + 8))
                    (_DAT_180be0050,0xf0,&unknown_var_5584_ptr,&unknown_var_5360_ptr,0x5d7);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1806a9b80(lVar1);
  }
  FUN_1806a7860(uVar2,param_1);
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




