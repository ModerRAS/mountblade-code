#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_10_part014.c - 5 个函数

// 函数: void FUN_1806ab3e4(uint param_1,int64_t param_2,char *param_3,char *param_4,uint64_t param_5,
void FUN_1806ab3e4(uint param_1,int64_t param_2,char *param_3,char *param_4,uint64_t param_5,
                  uint64_t param_6,uint64_t *param_7,int32_t param_8,int32_t param_9,
                  uint64_t param_10)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  int64_t *plVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  int32_t *puVar11;
  int iVar12;
  char *pcVar13;
  uint64_t *unaff_RBX;
  int64_t unaff_RBP;
  char cVar14;
  uint64_t *unaff_RSI;
  char *pcVar15;
  int64_t lVar16;
  uint uVar17;
  uint64_t uVar18;
  uint uVar19;
  int64_t unaff_R13;
  int64_t lVar20;
  int32_t uVar21;
  int32_t uStack0000000000000044;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  uint64_t in_stack_00000070;
  char cStack00000000000000d0;
  uint32_t uStack00000000000000d1;
  uint64_t in_stack_000000d8;
  uint64_t in_stack_000000e0;
  uint in_stack_000000e8;
  int in_stack_000000f0;
  
  uVar8 = in_stack_000000e8;
  uVar18 = (uint64_t)unaff_RSI & 0xffffffff;
  cVar14 = (char)unaff_RSI;
  if (*(uint *)(unaff_RBP + 0x78) != 0) {
    pcVar15 = param_3;
    if (param_4 != (char *)0x0) {
      pcVar15 = param_4;
    }
    do {
      lVar20 = *(int64_t *)(*(int64_t *)(unaff_RBP + 0x70) + uVar18 * 8);
      pcVar4 = *(char **)(lVar20 + 0x20);
      pcVar13 = param_3;
      if (pcVar4 != (char *)0x0) {
        pcVar13 = pcVar4;
      }
      lVar16 = (int64_t)pcVar15 - (int64_t)pcVar13;
      do {
        cVar1 = *pcVar13;
        cVar2 = pcVar13[lVar16];
        if (cVar1 != cVar2) break;
        pcVar13 = pcVar13 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        if (lVar20 != 0) goto FUN_1806ab8be;
        break;
      }
      uVar17 = (int)uVar18 + 1;
      uVar18 = (uint64_t)uVar17;
    } while (uVar17 < *(uint *)(unaff_RBP + 0x78));
    param_2 = *(int64_t *)(unaff_R13 + 0x78);
    param_1 = *(uint *)(unaff_R13 + 0x80);
  }
  if ((((in_stack_000000e8 == 0x4d) || ((int)in_stack_000000e8 < 0)) ||
      (param_1 <= in_stack_000000e8)) ||
     (lVar20 = *(int64_t *)(param_2 + (uint64_t)in_stack_000000e8 * 8), lVar20 == 0)) {
FUN_1806ab8be:
    *unaff_RBX = &unknown_var_3704_ptr;
    unaff_RBX[1] = param_3;
    unaff_RBX[2] = param_3;
    *(int32_t *)(unaff_RBX + 3) = 0xffffffff;
    unaff_RBX[4] = param_3;
    unaff_RBX[5] = param_3;
    *(int32_t *)(unaff_RBX + 6) = 0xffffffff;
    unaff_RBX[7] = param_3;
    unaff_RBX[8] = param_3;
    *(int *)(unaff_RBX + 9) = (int)unaff_RSI;
    *(int32_t *)((int64_t)unaff_RBX + 0x4c) = 0xffffffff;
    unaff_RBX[10] = unaff_RSI;
    *(char *)(unaff_RBX + 0xb) = cVar14;
    return;
  }
  uStack0000000000000060 = *(int32_t *)(lVar20 + 8);
  uStack0000000000000064 = *(int32_t *)(lVar20 + 0xc);
  uStack0000000000000068 = *(int32_t *)(lVar20 + 0x10);
  uStack000000000000006c = *(int32_t *)(lVar20 + 0x14);
  param_6._4_4_ = *(int *)(lVar20 + 0x24);
  uVar17 = *(uint *)(lVar20 + 0x20);
  if (*(char *)(lVar20 + 0x69) == cVar14) {
    cStack00000000000000d0 = *(char *)(unaff_RBP + 0x69) != cVar14;
    if (in_stack_000000f0 == 2) {
      if ((param_1 < 2) || (lVar20 = *(int64_t *)(param_2 + 8), lVar20 == 0)) goto LAB_1806ab69a;
      cStack00000000000000d0 = true;
    }
    uVar3 = *(uint *)(lVar20 + 0x30);
    uVar6 = *(uint *)(unaff_RBP + 0x30);
    if (*(uint *)(unaff_RBP + 0x30) < uVar3) {
      uVar6 = uVar3;
    }
    *(uint *)(unaff_RBP + 0x30) = uVar6;
    uVar19 = *(int *)(unaff_RBP + 0x2c) + -1 + uVar3 & -uVar3;
    iVar12 = *(int *)(lVar20 + 0x28) + uVar19;
    param_7 = (uint64_t *)CONCAT44(param_7._4_4_,uVar19);
    *(int *)(unaff_RBP + 0x2c) = iVar12;
    *(uint *)(unaff_RBP + 0x28) = iVar12 + -1 + uVar6 & -uVar6;
    uVar3 = *(uint *)(lVar20 + 0x50);
    uVar6 = *(uint *)(unaff_RBP + 0x50);
    if (*(uint *)(unaff_RBP + 0x50) < uVar3) {
      uVar6 = uVar3;
    }
    *(uint *)(unaff_RBP + 0x50) = uVar6;
    param_6._0_4_ = *(int *)(unaff_RBP + 0x4c) + -1 + uVar3 & -uVar3;
    iVar12 = *(int *)(lVar20 + 0x48) + (uint)param_6;
    *(int *)(unaff_RBP + 0x4c) = iVar12;
    *(uint *)(unaff_RBP + 0x48) = iVar12 + -1 + uVar6 & -uVar6;
    uVar21 = FUN_1806b15e0(uStack0000000000000060,unaff_RBP + 0x28,unaff_RBP + 0x80,lVar20 + 0x80,
                           uVar19);
    FUN_1806b15e0(uVar21,unaff_RBP + 0x48,unaff_RBP + 0x90,lVar20 + 0x90,(uint)param_6);
    *(int8_t *)(lVar20 + 0x68) = 1;
    param_8 = *(int32_t *)(unaff_RBP + 8);
    uStack0000000000000044 = *(int32_t *)(unaff_RBP + 0xc);
    param_9 = *(int32_t *)(unaff_RBP + 0x10);
    uStack000000000000004c = *(int32_t *)(unaff_RBP + 0x14);
    uVar21 = *(int32_t *)(unaff_RBP + 0x18);
    *(char *)(unaff_RBP + 0x69) = cStack00000000000000d0;
    _cStack00000000000000d0 = *(int32_t *)(unaff_R13 + 0x90);
    puVar9 = (uint64_t *)
             (**(code **)(*system_system_buffer_ui + 8))
                       (system_system_buffer_ui,0x68,&unknown_var_5536_ptr,&unknown_var_5360_ptr,0x36a);
    if (puVar9 != (uint64_t *)0x0) {
      plVar5 = *(int64_t **)(unaff_R13 + 0x98);
      *(int32_t *)(puVar9 + 3) = uVar21;
      *(uint *)(puVar9 + 6) = uVar8;
      puVar9[1] = CONCAT44(uStack0000000000000044,param_8);
      puVar9[2] = CONCAT44(uStack000000000000004c,param_9);
      puVar9[4] = in_stack_000000d8;
      puVar9[5] = in_stack_000000e0;
      *(int *)(puVar9 + 9) = in_stack_000000f0;
      *(int32_t *)((int64_t)puVar9 + 0x4c) = _cStack00000000000000d0;
      *(int32_t *)(puVar9 + 10) = param_7._0_4_;
      *(uint *)((int64_t)puVar9 + 0x54) = (uint)param_6;
      *puVar9 = &unknown_var_5048_ptr;
      *(int32_t *)(puVar9 + 7) = uStack0000000000000060;
      *(int32_t *)((int64_t)puVar9 + 0x3c) = uStack0000000000000064;
      *(int32_t *)(puVar9 + 8) = uStack0000000000000068;
      *(int32_t *)((int64_t)puVar9 + 0x44) = uStack000000000000006c;
      puVar9[0xb] = unaff_RSI;
      puVar9[0xc] = unaff_RSI;
      uVar10 = (**(code **)(*plVar5 + 0x18))(plVar5,puVar9[4],&stack0x000000d0);
      puVar9[4] = uVar10;
      unaff_RSI = puVar9;
    }
    plVar5 = (int64_t *)(unaff_R13 + 0x88);
    param_7 = unaff_RSI;
    if (*(uint *)(unaff_R13 + 0x90) < (*(uint *)(unaff_R13 + 0x94) & 0x7fffffff)) {
      *(uint64_t **)(*plVar5 + (uint64_t)*(uint *)(unaff_R13 + 0x90) * 8) = unaff_RSI;
      *(int *)(unaff_R13 + 0x90) = *(int *)(unaff_R13 + 0x90) + 1;
      iVar12 = *(int *)(unaff_R13 + 0x90);
    }
    else {
      FUN_1806adf60(plVar5,&param_7);
      iVar12 = *(int *)(unaff_R13 + 0x90);
    }
    _uStack0000000000000060 = *(uint64_t *)(unaff_RBP + 8);
    _uStack0000000000000068 = *(uint64_t *)(unaff_RBP + 0x10);
    lVar20 = *(int64_t *)(*plVar5 + (uint64_t)(iVar12 - 1) * 8);
    param_10 = *(uint64_t *)(lVar20 + 0x20);
    in_stack_00000070 = param_10;
    puVar11 = (int32_t *)FUN_1806aae60(unaff_R13 + 0x40,&stack0x00000060,&stack0x000000d0);
    if (cStack00000000000000d0 == '\0') {
      *puVar11 = uStack0000000000000060;
      puVar11[1] = uStack0000000000000064;
      puVar11[2] = uStack0000000000000068;
      puVar11[3] = uStack000000000000006c;
      *(int64_t *)(puVar11 + 6) = lVar20;
      *(uint64_t *)(puVar11 + 4) = in_stack_00000070;
    }
    param_7 = *(uint64_t **)(*plVar5 + (uint64_t)(*(int *)(unaff_R13 + 0x90) - 1) * 8);
    if (*(uint *)(unaff_RBP + 0x78) < (*(uint *)(unaff_RBP + 0x7c) & 0x7fffffff)) {
      *(uint64_t **)(*(int64_t *)(unaff_RBP + 0x70) + (uint64_t)*(uint *)(unaff_RBP + 0x78) * 8)
           = param_7;
      *(int *)(unaff_RBP + 0x78) = *(int *)(unaff_RBP + 0x78) + 1;
    }
    else {
      FUN_1806adf60();
    }
    if (*(int *)(unaff_RBP + 0x78) == 1) {
      *(int *)(unaff_RBP + 0x24) = param_6._4_4_;
      *(uint *)(unaff_RBP + 0x20) = uVar17;
    }
    else {
      if (((int)uVar17 < 1) || (*(uint *)(unaff_RBP + 0x2c) % uVar17 != 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if ((-1 < *(int *)(unaff_RBP + 0x24)) &&
         ((((param_6._4_4_ < 0 || (*(int *)(unaff_RBP + 0x24) != param_6._4_4_)) ||
           (uVar8 - 0x4e < 2)) || (!bVar7)))) {
        *(int32_t *)(unaff_RBP + 0x24) = 0xffffffff;
      }
      if ((-1 < (int)*(uint *)(unaff_RBP + 0x20)) &&
         ((((int)uVar17 < 0 || (*(uint *)(unaff_RBP + 0x20) != uVar17)) ||
          ((uVar8 - 0x4e < 2 || (!bVar7)))))) {
        *(int32_t *)(unaff_RBP + 0x20) = 0xffffffff;
      }
    }
    lVar20 = *(int64_t *)(*plVar5 + (uint64_t)(*(int *)(unaff_R13 + 0x90) - 1) * 8);
    *unaff_RBX = &unknown_var_3704_ptr;
    uVar10 = *(uint64_t *)(lVar20 + 0x10);
    unaff_RBX[1] = *(uint64_t *)(lVar20 + 8);
    unaff_RBX[2] = uVar10;
    *(int32_t *)(unaff_RBX + 3) = *(int32_t *)(lVar20 + 0x18);
    unaff_RBX[4] = *(uint64_t *)(lVar20 + 0x20);
    unaff_RBX[5] = *(uint64_t *)(lVar20 + 0x28);
    *(int32_t *)(unaff_RBX + 6) = *(int32_t *)(lVar20 + 0x30);
    uVar10 = *(uint64_t *)(lVar20 + 0x40);
    unaff_RBX[7] = *(uint64_t *)(lVar20 + 0x38);
    unaff_RBX[8] = uVar10;
    *(int32_t *)(unaff_RBX + 9) = *(int32_t *)(lVar20 + 0x48);
    *(int32_t *)((int64_t)unaff_RBX + 0x4c) = *(int32_t *)(lVar20 + 0x4c);
    *(int32_t *)(unaff_RBX + 10) = *(int32_t *)(lVar20 + 0x50);
    *(int32_t *)((int64_t)unaff_RBX + 0x54) = *(int32_t *)(lVar20 + 0x54);
    *(int8_t *)(unaff_RBX + 0xb) = 1;
  }
  else {
LAB_1806ab69a:
    *unaff_RBX = &unknown_var_3704_ptr;
    unaff_RBX[1] = param_3;
    unaff_RBX[2] = param_3;
    *(int32_t *)(unaff_RBX + 3) = 0xffffffff;
    unaff_RBX[4] = param_3;
    unaff_RBX[5] = param_3;
    *(int32_t *)(unaff_RBX + 6) = 0xffffffff;
    unaff_RBX[7] = param_3;
    unaff_RBX[8] = param_3;
    *(int *)(unaff_RBX + 9) = (int)unaff_RSI;
    *(int32_t *)((int64_t)unaff_RBX + 0x4c) = 0xffffffff;
    unaff_RBX[10] = unaff_RSI;
    *(char *)(unaff_RBX + 0xb) = cVar14;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806ab4af(uint param_1,int64_t param_2,uint64_t param_3)
void FUN_1806ab4af(uint param_1,int64_t param_2,uint64_t param_3)

{
  uint uVar1;
  uint uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint uVar5;
  bool bVar6;
  int in_EAX;
  uint64_t *puVar7;
  uint64_t uVar8;
  int32_t *puVar9;
  int iVar10;
  uint64_t *unaff_RBX;
  int64_t unaff_RBP;
  char cVar11;
  uint64_t *unaff_RSI;
  uint uVar12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int unaff_R15D;
  int32_t uVar13;
  uint64_t in_XMM0_Qa;
  int32_t in_XMM0_Dc;
  int32_t in_XMM0_Dd;
  uint uStack0000000000000030;
  int iStack0000000000000034;
  int32_t uStack0000000000000038;
  int32_t uStack000000000000003c;
  int32_t in_stack_00000040;
  int32_t uStack0000000000000044;
  int32_t in_stack_00000048;
  int32_t uStack000000000000004c;
  uint64_t in_stack_00000050;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  uint64_t in_stack_00000070;
  char cStack00000000000000d0;
  uint32_t uStack00000000000000d1;
  uint64_t in_stack_000000d8;
  uint64_t in_stack_000000e0;
  int in_stack_000000f0;
  
  uStack0000000000000064 = (int32_t)((uint64_t)in_XMM0_Qa >> 0x20);
  uStack0000000000000060 = (int32_t)in_XMM0_Qa;
  uVar1 = *(uint *)(unaff_R14 + 0x20);
  cVar11 = (char)unaff_RSI;
  if (*(char *)(unaff_R14 + 0x69) == cVar11) {
    cStack00000000000000d0 = *(char *)(unaff_RBP + 0x69) != cVar11;
    if (in_stack_000000f0 == 2) {
      if ((param_1 < 2) || (unaff_R14 = *(int64_t *)(param_2 + 8), unaff_R14 == 0))
      goto LAB_1806ab69a;
      cStack00000000000000d0 = true;
    }
    uVar2 = *(uint *)(unaff_R14 + 0x30);
    uVar5 = *(uint *)(unaff_RBP + 0x30);
    if (*(uint *)(unaff_RBP + 0x30) < uVar2) {
      uVar5 = uVar2;
    }
    *(uint *)(unaff_RBP + 0x30) = uVar5;
    uVar12 = *(int *)(unaff_RBP + 0x2c) + -1 + uVar2 & -uVar2;
    iVar10 = *(int *)(unaff_R14 + 0x28) + uVar12;
    _uStack0000000000000038 = (uint64_t *)CONCAT44(uStack000000000000003c,uVar12);
    *(int *)(unaff_RBP + 0x2c) = iVar10;
    *(uint *)(unaff_RBP + 0x28) = iVar10 + -1 + uVar5 & -uVar5;
    uVar2 = *(uint *)(unaff_R14 + 0x50);
    uVar5 = *(uint *)(unaff_RBP + 0x50);
    if (*(uint *)(unaff_RBP + 0x50) < uVar2) {
      uVar5 = uVar2;
    }
    *(uint *)(unaff_RBP + 0x50) = uVar5;
    uStack0000000000000030 = *(int *)(unaff_RBP + 0x4c) + -1 + uVar2 & -uVar2;
    iVar10 = *(int *)(unaff_R14 + 0x48) + uStack0000000000000030;
    *(int *)(unaff_RBP + 0x4c) = iVar10;
    *(uint *)(unaff_RBP + 0x48) = iVar10 + -1 + uVar5 & -uVar5;
    iStack0000000000000034 = in_EAX;
    uStack0000000000000068 = in_XMM0_Dc;
    uStack000000000000006c = in_XMM0_Dd;
    uVar13 = FUN_1806b15e0(uStack0000000000000060,unaff_RBP + 0x28,unaff_RBP + 0x80,unaff_R14 + 0x80
                           ,uVar12);
    FUN_1806b15e0(uVar13,unaff_RBP + 0x48,unaff_RBP + 0x90,unaff_R14 + 0x90,uStack0000000000000030);
    *(int8_t *)(unaff_R14 + 0x68) = 1;
    in_stack_00000040 = *(int32_t *)(unaff_RBP + 8);
    uStack0000000000000044 = *(int32_t *)(unaff_RBP + 0xc);
    in_stack_00000048 = *(int32_t *)(unaff_RBP + 0x10);
    uStack000000000000004c = *(int32_t *)(unaff_RBP + 0x14);
    uVar13 = *(int32_t *)(unaff_RBP + 0x18);
    *(char *)(unaff_RBP + 0x69) = cStack00000000000000d0;
    _cStack00000000000000d0 = *(int32_t *)(unaff_R13 + 0x90);
    puVar7 = (uint64_t *)
             (**(code **)(*system_system_buffer_ui + 8))
                       (system_system_buffer_ui,0x68,&unknown_var_5536_ptr,&unknown_var_5360_ptr,0x36a);
    if (puVar7 != (uint64_t *)0x0) {
      plVar3 = *(int64_t **)(unaff_R13 + 0x98);
      *(int32_t *)(puVar7 + 3) = uVar13;
      *(int *)(puVar7 + 6) = unaff_R15D;
      puVar7[1] = CONCAT44(uStack0000000000000044,in_stack_00000040);
      puVar7[2] = CONCAT44(uStack000000000000004c,in_stack_00000048);
      puVar7[4] = in_stack_000000d8;
      puVar7[5] = in_stack_000000e0;
      *(int *)(puVar7 + 9) = in_stack_000000f0;
      *(int32_t *)((int64_t)puVar7 + 0x4c) = _cStack00000000000000d0;
      *(int32_t *)(puVar7 + 10) = uStack0000000000000038;
      *(uint *)((int64_t)puVar7 + 0x54) = uStack0000000000000030;
      *puVar7 = &unknown_var_5048_ptr;
      *(int32_t *)(puVar7 + 7) = uStack0000000000000060;
      *(int32_t *)((int64_t)puVar7 + 0x3c) = uStack0000000000000064;
      *(int32_t *)(puVar7 + 8) = uStack0000000000000068;
      *(int32_t *)((int64_t)puVar7 + 0x44) = uStack000000000000006c;
      puVar7[0xb] = unaff_RSI;
      puVar7[0xc] = unaff_RSI;
      uVar8 = (**(code **)(*plVar3 + 0x18))(plVar3,puVar7[4],&stack0x000000d0);
      puVar7[4] = uVar8;
      unaff_RSI = puVar7;
    }
    plVar3 = (int64_t *)(unaff_R13 + 0x88);
    _uStack0000000000000038 = unaff_RSI;
    if (*(uint *)(unaff_R13 + 0x90) < (*(uint *)(unaff_R13 + 0x94) & 0x7fffffff)) {
      *(uint64_t **)(*plVar3 + (uint64_t)*(uint *)(unaff_R13 + 0x90) * 8) = unaff_RSI;
      *(int *)(unaff_R13 + 0x90) = *(int *)(unaff_R13 + 0x90) + 1;
      iVar10 = *(int *)(unaff_R13 + 0x90);
    }
    else {
      FUN_1806adf60(plVar3,&stack0x00000038);
      iVar10 = *(int *)(unaff_R13 + 0x90);
    }
    _uStack0000000000000060 = *(uint64_t *)(unaff_RBP + 8);
    _uStack0000000000000068 = *(uint64_t *)(unaff_RBP + 0x10);
    lVar4 = *(int64_t *)(*plVar3 + (uint64_t)(iVar10 - 1) * 8);
    in_stack_00000050 = *(uint64_t *)(lVar4 + 0x20);
    in_stack_00000070 = in_stack_00000050;
    puVar9 = (int32_t *)FUN_1806aae60(unaff_R13 + 0x40,&stack0x00000060,&stack0x000000d0);
    if (cStack00000000000000d0 == '\0') {
      *puVar9 = uStack0000000000000060;
      puVar9[1] = uStack0000000000000064;
      puVar9[2] = uStack0000000000000068;
      puVar9[3] = uStack000000000000006c;
      *(int64_t *)(puVar9 + 6) = lVar4;
      *(uint64_t *)(puVar9 + 4) = in_stack_00000070;
    }
    _uStack0000000000000038 =
         *(uint64_t **)(*plVar3 + (uint64_t)(*(int *)(unaff_R13 + 0x90) - 1) * 8);
    if (*(uint *)(unaff_RBP + 0x78) < (*(uint *)(unaff_RBP + 0x7c) & 0x7fffffff)) {
      *(uint64_t **)(*(int64_t *)(unaff_RBP + 0x70) + (uint64_t)*(uint *)(unaff_RBP + 0x78) * 8)
           = _uStack0000000000000038;
      *(int *)(unaff_RBP + 0x78) = *(int *)(unaff_RBP + 0x78) + 1;
    }
    else {
      FUN_1806adf60();
    }
    if (*(int *)(unaff_RBP + 0x78) == 1) {
      *(int *)(unaff_RBP + 0x24) = iStack0000000000000034;
      *(uint *)(unaff_RBP + 0x20) = uVar1;
    }
    else {
      if (((int)uVar1 < 1) || (*(uint *)(unaff_RBP + 0x2c) % uVar1 != 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((-1 < *(int *)(unaff_RBP + 0x24)) &&
         ((((iStack0000000000000034 < 0 || (*(int *)(unaff_RBP + 0x24) != iStack0000000000000034))
           || (unaff_R15D - 0x4eU < 2)) || (!bVar6)))) {
        *(int32_t *)(unaff_RBP + 0x24) = 0xffffffff;
      }
      if ((-1 < (int)*(uint *)(unaff_RBP + 0x20)) &&
         ((((int)uVar1 < 0 || (*(uint *)(unaff_RBP + 0x20) != uVar1)) ||
          ((unaff_R15D - 0x4eU < 2 || (!bVar6)))))) {
        *(int32_t *)(unaff_RBP + 0x20) = 0xffffffff;
      }
    }
    lVar4 = *(int64_t *)(*plVar3 + (uint64_t)(*(int *)(unaff_R13 + 0x90) - 1) * 8);
    *unaff_RBX = &unknown_var_3704_ptr;
    uVar8 = *(uint64_t *)(lVar4 + 0x10);
    unaff_RBX[1] = *(uint64_t *)(lVar4 + 8);
    unaff_RBX[2] = uVar8;
    *(int32_t *)(unaff_RBX + 3) = *(int32_t *)(lVar4 + 0x18);
    unaff_RBX[4] = *(uint64_t *)(lVar4 + 0x20);
    unaff_RBX[5] = *(uint64_t *)(lVar4 + 0x28);
    *(int32_t *)(unaff_RBX + 6) = *(int32_t *)(lVar4 + 0x30);
    uVar8 = *(uint64_t *)(lVar4 + 0x40);
    unaff_RBX[7] = *(uint64_t *)(lVar4 + 0x38);
    unaff_RBX[8] = uVar8;
    *(int32_t *)(unaff_RBX + 9) = *(int32_t *)(lVar4 + 0x48);
    *(int32_t *)((int64_t)unaff_RBX + 0x4c) = *(int32_t *)(lVar4 + 0x4c);
    *(int32_t *)(unaff_RBX + 10) = *(int32_t *)(lVar4 + 0x50);
    *(int32_t *)((int64_t)unaff_RBX + 0x54) = *(int32_t *)(lVar4 + 0x54);
    *(int8_t *)(unaff_RBX + 0xb) = 1;
  }
  else {
LAB_1806ab69a:
    *unaff_RBX = &unknown_var_3704_ptr;
    unaff_RBX[1] = param_3;
    unaff_RBX[2] = param_3;
    *(int32_t *)(unaff_RBX + 3) = 0xffffffff;
    unaff_RBX[4] = param_3;
    unaff_RBX[5] = param_3;
    *(int32_t *)(unaff_RBX + 6) = 0xffffffff;
    unaff_RBX[7] = param_3;
    unaff_RBX[8] = param_3;
    *(int *)(unaff_RBX + 9) = (int)unaff_RSI;
    *(int32_t *)((int64_t)unaff_RBX + 0x4c) = 0xffffffff;
    unaff_RBX[10] = unaff_RSI;
    *(char *)(unaff_RBX + 0xb) = cVar11;
  }
  return;
}






// 函数: void FUN_1806ab6e4(void)
void FUN_1806ab6e4(void)

{
  return;
}






// 函数: void FUN_1806ab70c(void)
void FUN_1806ab70c(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  bool bVar4;
  int iVar5;
  int32_t *puVar6;
  uint64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint unaff_R12D;
  int64_t unaff_R13;
  int unaff_R15D;
  int64_t in_stack_00000030;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  uint64_t in_stack_00000070;
  char in_stack_000000d0;
  
  plVar1 = (int64_t *)(unaff_R13 + 0x88);
  if (*(uint *)(unaff_R13 + 0x90) < (*(uint *)(unaff_R13 + 0x94) & 0x7fffffff)) {
    *(uint64_t *)(*plVar1 + (uint64_t)*(uint *)(unaff_R13 + 0x90) * 8) = unaff_RSI;
    *(int *)(unaff_R13 + 0x90) = *(int *)(unaff_R13 + 0x90) + 1;
    iVar5 = *(int *)(unaff_R13 + 0x90);
  }
  else {
    FUN_1806adf60(plVar1,&stack0x00000038);
    iVar5 = *(int *)(unaff_R13 + 0x90);
  }
  _uStack0000000000000060 = *(uint64_t *)(unaff_RBP + 8);
  _uStack0000000000000068 = *(uint64_t *)(unaff_RBP + 0x10);
  lVar2 = *(int64_t *)(*plVar1 + (uint64_t)(iVar5 - 1) * 8);
  in_stack_00000070 = *(uint64_t *)(lVar2 + 0x20);
  puVar6 = (int32_t *)FUN_1806aae60(unaff_R13 + 0x40,&stack0x00000060,&stack0x000000d0);
  if (in_stack_000000d0 == '\0') {
    *puVar6 = uStack0000000000000060;
    puVar6[1] = uStack0000000000000064;
    puVar6[2] = uStack0000000000000068;
    puVar6[3] = uStack000000000000006c;
    *(int64_t *)(puVar6 + 6) = lVar2;
    *(uint64_t *)(puVar6 + 4) = in_stack_00000070;
  }
  if (*(uint *)(unaff_RBP + 0x78) < (*(uint *)(unaff_RBP + 0x7c) & 0x7fffffff)) {
    *(uint64_t *)(*(int64_t *)(unaff_RBP + 0x70) + (uint64_t)*(uint *)(unaff_RBP + 0x78) * 8) =
         *(uint64_t *)(*plVar1 + (uint64_t)(*(int *)(unaff_R13 + 0x90) - 1) * 8);
    *(int *)(unaff_RBP + 0x78) = *(int *)(unaff_RBP + 0x78) + 1;
  }
  else {
    FUN_1806adf60();
  }
  if (*(int *)(unaff_RBP + 0x78) == 1) {
    *(int *)(unaff_RBP + 0x24) = in_stack_00000030._4_4_;
    *(uint *)(unaff_RBP + 0x20) = unaff_R12D;
  }
  else {
    if (((int)unaff_R12D < 1) || (*(uint *)(unaff_RBP + 0x2c) % unaff_R12D != 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((-1 < *(int *)(unaff_RBP + 0x24)) &&
       ((((in_stack_00000030 < 0 || (*(int *)(unaff_RBP + 0x24) != in_stack_00000030._4_4_)) ||
         (unaff_R15D - 0x4eU < 2)) || (!bVar4)))) {
      *(int32_t *)(unaff_RBP + 0x24) = 0xffffffff;
    }
    if ((-1 < (int)*(uint *)(unaff_RBP + 0x20)) &&
       ((((int)unaff_R12D < 0 || (*(uint *)(unaff_RBP + 0x20) != unaff_R12D)) ||
        ((unaff_R15D - 0x4eU < 2 || (!bVar4)))))) {
      *(int32_t *)(unaff_RBP + 0x20) = 0xffffffff;
    }
  }
  lVar2 = *(int64_t *)(*plVar1 + (uint64_t)(*(int *)(unaff_R13 + 0x90) - 1) * 8);
  *unaff_RBX = &unknown_var_3704_ptr;
  uVar3 = *(uint64_t *)(lVar2 + 0x10);
  unaff_RBX[1] = *(uint64_t *)(lVar2 + 8);
  unaff_RBX[2] = uVar3;
  *(int32_t *)(unaff_RBX + 3) = *(int32_t *)(lVar2 + 0x18);
  unaff_RBX[4] = *(uint64_t *)(lVar2 + 0x20);
  unaff_RBX[5] = *(uint64_t *)(lVar2 + 0x28);
  *(int32_t *)(unaff_RBX + 6) = *(int32_t *)(lVar2 + 0x30);
  uVar3 = *(uint64_t *)(lVar2 + 0x40);
  unaff_RBX[7] = *(uint64_t *)(lVar2 + 0x38);
  unaff_RBX[8] = uVar3;
  *(int32_t *)(unaff_RBX + 9) = *(int32_t *)(lVar2 + 0x48);
  *(int32_t *)((int64_t)unaff_RBX + 0x4c) = *(int32_t *)(lVar2 + 0x4c);
  *(int32_t *)(unaff_RBX + 10) = *(int32_t *)(lVar2 + 0x50);
  *(int32_t *)((int64_t)unaff_RBX + 0x54) = *(int32_t *)(lVar2 + 0x54);
  *(int8_t *)(unaff_RBX + 0xb) = 1;
  return;
}






// 函数: void FUN_1806ab8be(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1806ab8be(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t *unaff_RBX;
  uint64_t unaff_RSI;
  
  *unaff_RBX = &unknown_var_3704_ptr;
  unaff_RBX[1] = param_3;
  unaff_RBX[2] = param_3;
  *(int32_t *)(unaff_RBX + 3) = 0xffffffff;
  unaff_RBX[4] = param_3;
  unaff_RBX[5] = param_3;
  *(int32_t *)(unaff_RBX + 6) = 0xffffffff;
  unaff_RBX[7] = param_3;
  unaff_RBX[8] = param_3;
  *(int *)(unaff_RBX + 9) = (int)unaff_RSI;
  *(int32_t *)((int64_t)unaff_RBX + 0x4c) = 0xffffffff;
  unaff_RBX[10] = unaff_RSI;
  *(char *)(unaff_RBX + 0xb) = (char)unaff_RSI;
  return;
}






