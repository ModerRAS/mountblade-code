#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part003.c - 13 个函数

// 函数: void FUN_1800ea57e(void)
void FUN_1800ea57e(void)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint64_t uVar6;
  uint uVar7;
  uint uVar8;
  longlong in_RAX;
  ulonglong *puVar9;
  uint unaff_EBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint unaff_R12D;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint unaff_R15D;
  bool bVar10;
  longlong unaff_retaddr;
  uint uStackX_8;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R14;
  do {
    puVar9 = (ulonglong *)
             (*(longlong *)(unaff_retaddr + 8 + (ulonglong)(unaff_EBX >> 0xb) * 8) +
             (ulonglong)(unaff_EBX + (unaff_EBX >> 0xb) * -0x800) * 0x10);
    uVar4 = *puVar9;
    plVar5 = (longlong *)puVar9[1];
    uVar7 = uStackX_8;
    uVar8 = unaff_EBX;
    while (uVar8 != unaff_R15D) {
      uStackX_8 = uStackX_8 - 1;
      puVar9 = (ulonglong *)
               (*(longlong *)(unaff_retaddr + 8 + (ulonglong)(uStackX_8 >> 0xb) * 8) +
               (ulonglong)(uStackX_8 & 0x7ff) * 0x10);
      uVar3 = *puVar9;
      bVar10 = uVar4 < uVar3;
      if (uVar4 == uVar3) {
        bVar10 = *(int *)(*(longlong *)(*(longlong *)puVar9[1] + 0x18) + 0x184) <
                 *(int *)(*(longlong *)(*plVar5 + 0x18) + 0x184);
      }
      if (!bVar10) break;
      puVar1 = (uint64_t *)
               (*(longlong *)(unaff_retaddr + 8 + (ulonglong)(uStackX_8 >> 0xb) * 8) +
               (ulonglong)(uStackX_8 & 0x7ff) * 0x10);
      uVar6 = puVar1[1];
      puVar2 = (uint64_t *)
               (*(longlong *)(unaff_retaddr + 8 + (ulonglong)(uVar7 >> 0xb) * 8) +
               (ulonglong)(uVar7 + (uVar7 >> 0xb) * -0x800) * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      uVar7 = uVar7 - 1;
      uVar8 = uStackX_8;
    }
    unaff_EBX = unaff_EBX + 1;
    puVar9 = (ulonglong *)
             (*(longlong *)(unaff_retaddr + 8 + (ulonglong)(uVar7 >> 0xb) * 8) +
             (ulonglong)(uVar7 + (uVar7 >> 0xb) * -0x800) * 0x10);
    *puVar9 = uVar4;
    puVar9[1] = (ulonglong)plVar5;
    uStackX_8 = unaff_EBX;
    if (unaff_EBX == unaff_R12D) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1800ea6d3(void)
void FUN_1800ea6d3(void)

{
  return;
}






// 函数: void FUN_1800ea6d8(void)
void FUN_1800ea6d8(void)

{
  return;
}






// 函数: void FUN_1800ea6f0(int param_1,int param_2,uint64_t *param_3)
void FUN_1800ea6f0(int param_1,int param_2,uint64_t *param_3)

{
  longlong lVar1;
  
  for (lVar1 = (longlong)param_1; lVar1 < param_2; lVar1 = lVar1 + 1) {
    FUN_1802dd2b0(*(uint64_t *)(*(longlong *)*param_3 + lVar1 * 8),*(uint64_t *)param_3[1]);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800ea780(longlong *param_1)
void FUN_1800ea780(longlong *param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong *plStackX_18;
  
  plVar4 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,200,8,3,0xfffffffffffffffe);
  plStackX_18 = plVar4;
  FUN_180049830(plVar4);
  *plVar4 = (longlong)&unknown_var_5408_ptr;
  *(int8_t *)(plVar4 + 0x18) = 1;
  lVar1 = *param_1;
  pplStackX_10 = (longlong **)plVar4;
  (**(code **)(*plVar4 + 0x28))(plVar4);
  pplStackX_10 = *(longlong ***)(lVar1 + 0x10);
  *(longlong **)(lVar1 + 0x10) = plVar4;
  if (pplStackX_10 != (longlong **)0x0) {
    (**(code **)((longlong)*pplStackX_10 + 0x38))();
  }
  *(int32_t *)(*param_1 + 8) = 1;
  plVar4 = *(longlong **)(system_operation_state + 0x1860);
  if (system_data_c049 == '\0') {
    system_system_memory = *(int *)(system_parameter_buffer + 0x12d0) + 1;
  }
  else {
    system_system_memory = *(int *)(system_parameter_buffer + 0x12d0);



// 函数: void FUN_1800ea950(longlong *param_1,longlong *param_2,longlong param_3)
void FUN_1800ea950(longlong *param_1,longlong *param_2,longlong param_3)

{
  ulonglong *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  longlong lVar5;
  int32_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  int iVar20;
  ulonglong uVar21;
  bool bVar22;
  uint uStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  ulonglong uStack_58;
  ulonglong uStack_50;
  
  lVar17 = (longlong)(int)param_2[1];
  uVar21 = (ulonglong)(int)param_1[1];
  lVar11 = lVar17 - uVar21;
  do {
    if ((lVar11 < 0x1d) || (param_3 < 1)) {
      if (param_3 == 0) {
        lStack_88 = *param_2;
        lStack_80 = param_2[1];
        uStack_68 = (int32_t)*param_1;
        uStack_64 = *(int32_t *)((longlong)param_1 + 4);
        uStack_60 = (int32_t)param_1[1];
        uStack_5c = *(int32_t *)((longlong)param_1 + 0xc);
        lStack_78 = lStack_88;
        lStack_70 = lStack_80;
        FUN_1800eb800(&uStack_68,&lStack_78,&lStack_88);
      }
      return;
    }
    uVar16 = (int)lVar17 - 1;
    uVar14 = uVar16 >> 0xb;
    puVar12 = (ulonglong *)
              (*(longlong *)(*param_2 + 8 + (ulonglong)uVar14 * 8) +
              (ulonglong)(uVar16 + uVar14 * -0x800) * 0x18);
    iVar20 = (int)uVar21;
    uVar14 = (int)(((longlong)(int)lVar17 - (longlong)iVar20) / 2) + iVar20;
    uVar16 = uVar14 >> 0xb;
    puVar1 = (ulonglong *)
             (*(longlong *)(*param_1 + 8 + (ulonglong)uVar16 * 8) +
             (ulonglong)(uVar14 + uVar16 * -0x800) * 0x18);
    uVar21 = uVar21 >> 0xb & 0x1fffff;
    uVar13 = (ulonglong)(uint)(iVar20 + (int)uVar21 * -0x800);
    lVar17 = *(longlong *)(*param_1 + 8 + uVar21 * 8);
    uVar21 = *puVar1;
    puVar18 = (ulonglong *)(lVar17 + uVar13 * 0x18);
    uVar13 = *(ulonglong *)(lVar17 + uVar13 * 0x18);
    bVar22 = uVar13 < uVar21;
    if (uVar13 == uVar21) {
      bVar22 = puVar18[1] < puVar1[1];
    }
    uVar15 = *puVar12;
    if (bVar22) {
      bVar22 = uVar21 < uVar15;
      if (uVar21 == uVar15) {
        bVar22 = puVar1[1] < puVar12[1];
      }
      puVar19 = puVar1;
      if (!bVar22) {
        bVar22 = uVar13 < uVar15;
        if (uVar13 == uVar15) {
          bVar22 = puVar18[1] < puVar12[1];
        }
LAB_1800eaa99:
        puVar19 = puVar18;
        if (bVar22) {
          puVar19 = puVar12;
        }
      }
    }
    else {
      bVar22 = uVar13 < uVar15;
      if (uVar13 == uVar15) {
        bVar22 = puVar18[1] < puVar12[1];
      }
      puVar19 = puVar18;
      if (!bVar22) {
        bVar22 = uVar21 < uVar15;
        puVar18 = puVar1;
        if (uVar21 == uVar15) {
          bVar22 = puVar1[1] < puVar12[1];
        }
        goto LAB_1800eaa99;
      }
    }
    uStack_58 = *puVar19;
    uStack_50 = puVar19[1];
    lVar10 = *param_1;
    lVar11 = *param_1;
    uStack_b0 = *(uint *)(param_1 + 1);
    uVar6 = *(int32_t *)((longlong)param_1 + 0xc);
    lVar17 = *param_2;
    uVar21 = param_2[1] & 0xffffffff;
    while( true ) {
      while( true ) {
        uVar14 = uStack_b0 >> 0xb;
        uVar15 = (ulonglong)(uStack_b0 + uVar14 * -0x800);
        lVar5 = *(longlong *)(lVar11 + 8 + (ulonglong)uVar14 * 8);
        uVar13 = *(ulonglong *)(lVar5 + uVar15 * 0x18);
        bVar22 = uVar13 < uStack_58;
        if (uVar13 == uStack_58) {
          bVar22 = *(ulonglong *)(lVar5 + 8 + uVar15 * 0x18) < uStack_50;
        }
        if (!bVar22) break;
        uStack_b0 = uStack_b0 + 1;
      }
      do {
        uVar16 = (int)uVar21 - 1;
        uVar21 = (ulonglong)uVar16;
        puVar12 = (ulonglong *)
                  (*(longlong *)(lVar17 + 8 + (ulonglong)(uVar16 >> 0xb) * 8) +
                  (ulonglong)(uVar16 + (uVar16 >> 0xb) * -0x800) * 0x18);
        uVar13 = *puVar12;
        bVar22 = uStack_58 < uVar13;
        if (uStack_58 == uVar13) {
          bVar22 = uStack_50 < puVar12[1];
        }
      } while (bVar22);
      if ((int)uVar16 <= (int)uStack_b0) break;
      uVar13 = (ulonglong)(uStack_b0 + uVar14 * -0x800);
      uStack_b0 = uStack_b0 + 1;
      puVar2 = (uint64_t *)
               (*(longlong *)(lVar17 + 8 + (ulonglong)(uVar16 >> 0xb) * 8) +
               (ulonglong)(uVar16 + (uVar16 >> 0xb) * -0x800) * 0x18);
      lVar5 = *(longlong *)(lVar11 + 8 + (ulonglong)uVar14 * 8);
      uVar7 = puVar2[1];
      puVar3 = (uint64_t *)(lVar5 + uVar13 * 0x18);
      uVar8 = *puVar3;
      uVar9 = puVar3[1];
      uVar4 = *(uint64_t *)(lVar5 + 0x10 + uVar13 * 0x18);
      puVar3 = (uint64_t *)(lVar5 + uVar13 * 0x18);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      *(uint64_t *)(lVar5 + 0x10 + uVar13 * 0x18) = puVar2[2];
      *puVar2 = uVar8;
      puVar2[1] = uVar9;
      puVar2[2] = uVar4;
    }
    lStack_a8 = *param_2;
    lStack_a0 = param_2[1];
    param_3 = param_3 + -1;
    lVar17 = CONCAT44(uVar6,uStack_b0);
    lStack_98 = lVar10;
    lStack_90 = lVar17;
    FUN_1800ea950(&lStack_98,&lStack_a8,param_3);
    uVar21 = (ulonglong)(int)param_1[1];
    *param_2 = lVar10;
    param_2[1] = lVar17;
    lVar17 = (longlong)(int)param_2[1];
    lVar11 = lVar17 - uVar21;
  } while( true );
}






// 函数: void FUN_1800ea96c(longlong *param_1,uint64_t param_2,longlong param_3,longlong param_4,
void FUN_1800ea96c(longlong *param_1,uint64_t param_2,longlong param_3,longlong param_4,
                  uint64_t param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12,
                  longlong param_13,int32_t param_14,int32_t param_15,ulonglong param_16,
                  ulonglong param_17,uint64_t param_18,uint64_t param_19,int32_t param_20,
                  int32_t param_21)

{
  ulonglong *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  longlong lVar5;
  longlong lVar6;
  int32_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  longlong lVar11;
  longlong lVar12;
  int32_t uVar13;
  longlong in_RAX;
  ulonglong *puVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong *puVar20;
  ulonglong *puVar21;
  int iVar22;
  ulonglong in_R11;
  longlong *unaff_R15;
  bool bVar23;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  int32_t uStack0000000000000074;
  int32_t uStack000000000000007c;
  
  uVar7 = unaff_XMM6_Da;
  uVar13 = unaff_XMM6_Dc;
  if (0x1c < in_RAX) {
    do {
      param_21 = uVar13;
      param_20 = uVar7;
      if (param_3 < 1) break;
      uVar19 = (int)param_4 - 1;
      uVar16 = uVar19 >> 0xb;
      puVar14 = (ulonglong *)
                (*(longlong *)(*unaff_R15 + 8 + (ulonglong)uVar16 * 8) +
                (ulonglong)(uVar19 + uVar16 * -0x800) * 0x18);
      iVar22 = (int)in_R11;
      uVar16 = (int)(((longlong)(int)param_4 - (longlong)iVar22) / 2) + iVar22;
      uVar19 = uVar16 >> 0xb;
      puVar1 = (ulonglong *)
               (*(longlong *)(*param_1 + 8 + (ulonglong)uVar19 * 8) +
               (ulonglong)(uVar16 + uVar19 * -0x800) * 0x18);
      uVar18 = in_R11 >> 0xb & 0x1fffff;
      uVar15 = (ulonglong)(uint)(iVar22 + (int)uVar18 * -0x800);
      lVar5 = *(longlong *)(*param_1 + 8 + uVar18 * 8);
      uVar18 = *puVar1;
      puVar20 = (ulonglong *)(lVar5 + uVar15 * 0x18);
      uVar15 = *(ulonglong *)(lVar5 + uVar15 * 0x18);
      bVar23 = uVar15 < uVar18;
      if (uVar15 == uVar18) {
        bVar23 = puVar20[1] < puVar1[1];
      }
      uVar17 = *puVar14;
      if (bVar23) {
        bVar23 = uVar18 < uVar17;
        if (uVar18 == uVar17) {
          bVar23 = puVar1[1] < puVar14[1];
        }
        puVar21 = puVar1;
        if (!bVar23) {
          bVar23 = uVar15 < uVar17;
          if (uVar15 == uVar17) {
            bVar23 = puVar20[1] < puVar14[1];
          }
LAB_1800eaa99:
          puVar21 = puVar20;
          if (bVar23) {
            puVar21 = puVar14;
          }
        }
      }
      else {
        bVar23 = uVar15 < uVar17;
        if (uVar15 == uVar17) {
          bVar23 = puVar20[1] < puVar14[1];
        }
        puVar21 = puVar20;
        if (!bVar23) {
          bVar23 = uVar18 < uVar17;
          puVar20 = puVar1;
          if (uVar18 == uVar17) {
            bVar23 = puVar1[1] < puVar14[1];
          }
          goto LAB_1800eaa99;
        }
      }
      param_16 = *puVar21;
      param_17 = puVar21[1];
      lVar12 = *param_1;
      lVar11 = *param_1;
      param_5._0_4_ = *(uint *)(param_1 + 1);
      uVar7 = *(int32_t *)((longlong)param_1 + 0xc);
      lVar5 = *unaff_R15;
      uVar18 = unaff_R15[1] & 0xffffffff;
      while( true ) {
        while( true ) {
          uVar16 = (uint)param_5 >> 0xb;
          uVar17 = (ulonglong)((uint)param_5 + uVar16 * -0x800);
          lVar6 = *(longlong *)(lVar11 + 8 + (ulonglong)uVar16 * 8);
          uVar15 = *(ulonglong *)(lVar6 + uVar17 * 0x18);
          bVar23 = uVar15 < param_16;
          if (uVar15 == param_16) {
            bVar23 = *(ulonglong *)(lVar6 + 8 + uVar17 * 0x18) < param_17;
          }
          if (!bVar23) break;
          param_5._0_4_ = (uint)param_5 + 1;
        }
        do {
          uVar19 = (int)uVar18 - 1;
          uVar18 = (ulonglong)uVar19;
          puVar14 = (ulonglong *)
                    (*(longlong *)(lVar5 + 8 + (ulonglong)(uVar19 >> 0xb) * 8) +
                    (ulonglong)(uVar19 + (uVar19 >> 0xb) * -0x800) * 0x18);
          uVar15 = *puVar14;
          bVar23 = param_16 < uVar15;
          if (param_16 == uVar15) {
            bVar23 = param_17 < puVar14[1];
          }
        } while (bVar23);
        if ((int)uVar19 <= (int)(uint)param_5) break;
        uVar15 = (ulonglong)((uint)param_5 + uVar16 * -0x800);
        param_5._0_4_ = (uint)param_5 + 1;
        puVar2 = (uint64_t *)
                 (*(longlong *)(lVar5 + 8 + (ulonglong)(uVar19 >> 0xb) * 8) +
                 (ulonglong)(uVar19 + (uVar19 >> 0xb) * -0x800) * 0x18);
        lVar6 = *(longlong *)(lVar11 + 8 + (ulonglong)uVar16 * 8);
        uVar8 = puVar2[1];
        puVar3 = (uint64_t *)(lVar6 + uVar15 * 0x18);
        uVar9 = *puVar3;
        uVar10 = puVar3[1];
        uVar4 = *(uint64_t *)(lVar6 + 0x10 + uVar15 * 0x18);
        puVar3 = (uint64_t *)(lVar6 + uVar15 * 0x18);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        *(uint64_t *)(lVar6 + 0x10 + uVar15 * 0x18) = puVar2[2];
        *puVar2 = uVar9;
        puVar2[1] = uVar10;
        puVar2[2] = uVar4;
      }
      param_6 = *unaff_R15;
      param_7 = unaff_R15[1];
      param_3 = param_3 + -1;
      lVar5 = CONCAT44(uVar7,(uint)param_5);
      param_8 = lVar12;
      param_9 = lVar5;
      FUN_1800ea950(&param_8,&param_6,param_3);
      in_R11 = (ulonglong)(int)param_1[1];
      *unaff_R15 = lVar12;
      unaff_R15[1] = lVar5;
      param_4 = (longlong)(int)unaff_R15[1];
      uVar7 = param_20;
      uVar13 = param_21;
    } while (0x1c < (longlong)(param_4 - in_R11));
  }
  if (param_3 == 0) {
    param_10 = *unaff_R15;
    param_11 = unaff_R15[1];
    param_14 = (int32_t)*param_1;
    uStack0000000000000074 = *(int32_t *)((longlong)param_1 + 4);
    param_15 = (int32_t)param_1[1];
    uStack000000000000007c = *(int32_t *)((longlong)param_1 + 0xc);
    param_12 = param_10;
    param_13 = param_11;
    FUN_1800eb800(&param_14,&param_12,&param_10);
  }
  return;
}






// 函数: void FUN_1800ea984(void)
void FUN_1800ea984(void)

{
  ulonglong *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  longlong lVar5;
  longlong lVar6;
  int32_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong in_R9;
  ulonglong *puVar19;
  ulonglong *puVar20;
  int iVar21;
  ulonglong in_R11;
  longlong unaff_R12;
  longlong *unaff_R13;
  longlong *unaff_R15;
  bool bVar22;
  uint uStack0000000000000028;
  longlong in_stack_00000030;
  longlong in_stack_00000038;
  longlong in_stack_00000040;
  longlong in_stack_00000048;
  longlong in_stack_00000050;
  longlong in_stack_00000058;
  longlong in_stack_00000060;
  longlong in_stack_00000068;
  int32_t in_stack_00000070;
  int32_t uStack0000000000000074;
  int32_t in_stack_00000078;
  int32_t uStack000000000000007c;
  ulonglong in_stack_00000080;
  ulonglong in_stack_00000088;
  
  do {
    if (unaff_R12 < 1) break;
    uVar18 = (int)in_R9 - 1;
    uVar15 = uVar18 >> 0xb;
    puVar13 = (ulonglong *)
              (*(longlong *)(*unaff_R15 + 8 + (ulonglong)uVar15 * 8) +
              (ulonglong)(uVar18 + uVar15 * -0x800) * 0x18);
    iVar21 = (int)in_R11;
    uVar15 = (int)(((longlong)(int)in_R9 - (longlong)iVar21) / 2) + iVar21;
    uVar18 = uVar15 >> 0xb;
    puVar1 = (ulonglong *)
             (*(longlong *)(*unaff_R13 + 8 + (ulonglong)uVar18 * 8) +
             (ulonglong)(uVar15 + uVar18 * -0x800) * 0x18);
    uVar17 = in_R11 >> 0xb & 0x1fffff;
    uVar14 = (ulonglong)(uint)(iVar21 + (int)uVar17 * -0x800);
    lVar5 = *(longlong *)(*unaff_R13 + 8 + uVar17 * 8);
    uVar17 = *puVar1;
    puVar19 = (ulonglong *)(lVar5 + uVar14 * 0x18);
    uVar14 = *(ulonglong *)(lVar5 + uVar14 * 0x18);
    bVar22 = uVar14 < uVar17;
    if (uVar14 == uVar17) {
      bVar22 = puVar19[1] < puVar1[1];
    }
    uVar16 = *puVar13;
    if (bVar22) {
      bVar22 = uVar17 < uVar16;
      if (uVar17 == uVar16) {
        bVar22 = puVar1[1] < puVar13[1];
      }
      puVar20 = puVar1;
      if (!bVar22) {
        bVar22 = uVar14 < uVar16;
        if (uVar14 == uVar16) {
          bVar22 = puVar19[1] < puVar13[1];
        }
LAB_1800eaa99:
        puVar20 = puVar19;
        if (bVar22) {
          puVar20 = puVar13;
        }
      }
    }
    else {
      bVar22 = uVar14 < uVar16;
      if (uVar14 == uVar16) {
        bVar22 = puVar19[1] < puVar13[1];
      }
      puVar20 = puVar19;
      if (!bVar22) {
        bVar22 = uVar17 < uVar16;
        puVar19 = puVar1;
        if (uVar17 == uVar16) {
          bVar22 = puVar1[1] < puVar13[1];
        }
        goto LAB_1800eaa99;
      }
    }
    in_stack_00000080 = *puVar20;
    in_stack_00000088 = puVar20[1];
    lVar12 = *unaff_R13;
    lVar11 = *unaff_R13;
    uStack0000000000000028 = *(uint *)(unaff_R13 + 1);
    uVar7 = *(int32_t *)((longlong)unaff_R13 + 0xc);
    lVar5 = *unaff_R15;
    uVar17 = unaff_R15[1] & 0xffffffff;
    while( true ) {
      while( true ) {
        uVar15 = uStack0000000000000028 >> 0xb;
        uVar16 = (ulonglong)(uStack0000000000000028 + uVar15 * -0x800);
        lVar6 = *(longlong *)(lVar11 + 8 + (ulonglong)uVar15 * 8);
        uVar14 = *(ulonglong *)(lVar6 + uVar16 * 0x18);
        bVar22 = uVar14 < in_stack_00000080;
        if (uVar14 == in_stack_00000080) {
          bVar22 = *(ulonglong *)(lVar6 + 8 + uVar16 * 0x18) < in_stack_00000088;
        }
        if (!bVar22) break;
        uStack0000000000000028 = uStack0000000000000028 + 1;
      }
      do {
        uVar18 = (int)uVar17 - 1;
        uVar17 = (ulonglong)uVar18;
        puVar13 = (ulonglong *)
                  (*(longlong *)(lVar5 + 8 + (ulonglong)(uVar18 >> 0xb) * 8) +
                  (ulonglong)(uVar18 + (uVar18 >> 0xb) * -0x800) * 0x18);
        uVar14 = *puVar13;
        bVar22 = in_stack_00000080 < uVar14;
        if (in_stack_00000080 == uVar14) {
          bVar22 = in_stack_00000088 < puVar13[1];
        }
      } while (bVar22);
      if ((int)uVar18 <= (int)uStack0000000000000028) break;
      uVar14 = (ulonglong)(uStack0000000000000028 + uVar15 * -0x800);
      uStack0000000000000028 = uStack0000000000000028 + 1;
      puVar2 = (uint64_t *)
               (*(longlong *)(lVar5 + 8 + (ulonglong)(uVar18 >> 0xb) * 8) +
               (ulonglong)(uVar18 + (uVar18 >> 0xb) * -0x800) * 0x18);
      lVar6 = *(longlong *)(lVar11 + 8 + (ulonglong)uVar15 * 8);
      uVar8 = puVar2[1];
      puVar3 = (uint64_t *)(lVar6 + uVar14 * 0x18);
      uVar9 = *puVar3;
      uVar10 = puVar3[1];
      uVar4 = *(uint64_t *)(lVar6 + 0x10 + uVar14 * 0x18);
      puVar3 = (uint64_t *)(lVar6 + uVar14 * 0x18);
      *puVar3 = *puVar2;
      puVar3[1] = uVar8;
      *(uint64_t *)(lVar6 + 0x10 + uVar14 * 0x18) = puVar2[2];
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      puVar2[2] = uVar4;
    }
    in_stack_00000030 = *unaff_R15;
    in_stack_00000038 = unaff_R15[1];
    unaff_R12 = unaff_R12 + -1;
    lVar5 = CONCAT44(uVar7,uStack0000000000000028);
    in_stack_00000040 = lVar12;
    in_stack_00000048 = lVar5;
    FUN_1800ea950(&stack0x00000040,&stack0x00000030,unaff_R12);
    in_R11 = (ulonglong)(int)unaff_R13[1];
    *unaff_R15 = lVar12;
    unaff_R15[1] = lVar5;
    in_R9 = (longlong)(int)unaff_R15[1];
  } while (0x1c < (longlong)(in_R9 - in_R11));
  if (unaff_R12 == 0) {
    in_stack_00000050 = *unaff_R15;
    in_stack_00000058 = unaff_R15[1];
    in_stack_00000070 = (int32_t)*unaff_R13;
    uStack0000000000000074 = *(int32_t *)((longlong)unaff_R13 + 4);
    in_stack_00000078 = (int32_t)unaff_R13[1];
    uStack000000000000007c = *(int32_t *)((longlong)unaff_R13 + 0xc);
    in_stack_00000060 = in_stack_00000050;
    in_stack_00000068 = in_stack_00000058;
    FUN_1800eb800(&stack0x00000070,&stack0x00000060,&stack0x00000050);
  }
  return;
}






// 函数: void FUN_1800eac3a(void)
void FUN_1800eac3a(void)

{
  longlong unaff_R12;
  int32_t *unaff_R13;
  uint64_t *unaff_R15;
  uint64_t uStack0000000000000050;
  uint64_t uStack0000000000000058;
  uint64_t uStack0000000000000060;
  uint64_t uStack0000000000000068;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  int32_t uStack0000000000000078;
  int32_t uStack000000000000007c;
  
  if (unaff_R12 == 0) {
    uStack0000000000000050 = *unaff_R15;
    uStack0000000000000058 = unaff_R15[1];
    uStack0000000000000070 = *unaff_R13;
    uStack0000000000000074 = unaff_R13[1];
    uStack0000000000000078 = unaff_R13[2];
    uStack000000000000007c = unaff_R13[3];
    uStack0000000000000060 = uStack0000000000000050;
    uStack0000000000000068 = uStack0000000000000058;
    FUN_1800eb800(&stack0x00000070,&stack0x00000060,&stack0x00000050);
  }
  return;
}






// 函数: void FUN_1800eac47(void)
void FUN_1800eac47(void)

{
  int32_t *unaff_R13;
  uint64_t *unaff_R15;
  uint64_t uStack0000000000000050;
  uint64_t uStack0000000000000058;
  uint64_t uStack0000000000000060;
  uint64_t uStack0000000000000068;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  int32_t uStack0000000000000078;
  int32_t uStack000000000000007c;
  
  uStack0000000000000050 = *unaff_R15;
  uStack0000000000000058 = unaff_R15[1];
  uStack0000000000000070 = *unaff_R13;
  uStack0000000000000074 = unaff_R13[1];
  uStack0000000000000078 = unaff_R13[2];
  uStack000000000000007c = unaff_R13[3];
  uStack0000000000000060 = uStack0000000000000050;
  uStack0000000000000068 = uStack0000000000000058;
  FUN_1800eb800(&stack0x00000070,&stack0x00000060,&stack0x00000050);
  return;
}






// 函数: void FUN_1800eac80(longlong *param_1,longlong param_2)
void FUN_1800eac80(longlong *param_1,longlong param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint64_t uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  bool bVar19;
  
  uVar5 = *(uint *)(param_1 + 1);
  uVar6 = *(uint *)(param_2 + 8);
  if (uVar5 != uVar6) {
    lVar11 = *param_1;
    lVar10 = *param_1;
    uVar12 = *(uint *)(param_1 + 1);
    while (uVar12 = uVar12 + 1, uVar12 != uVar6) {
      lVar7 = *(longlong *)(lVar10 + 8 + (ulonglong)(uVar12 >> 0xb) * 8);
      uVar15 = (ulonglong)(uVar12 + (uVar12 >> 0xb) * -0x800);
      uVar3 = *(uint64_t *)(lVar7 + 0x10 + uVar15 * 0x18);
      puVar14 = (ulonglong *)(lVar7 + uVar15 * 0x18);
      uVar15 = *puVar14;
      uVar8 = puVar14[1];
      uVar13 = uVar12;
      uVar18 = uVar12;
      while (uVar18 != uVar5) {
        uVar18 = uVar18 - 1;
        uVar17 = (ulonglong)(uVar18 & 0x7ff);
        puVar14 = (ulonglong *)
                  (*(longlong *)(lVar11 + 8 + (ulonglong)(uVar18 >> 0xb) * 8) + uVar17 * 0x18);
        uVar16 = *puVar14;
        bVar19 = uVar15 < uVar16;
        if (uVar15 == uVar16) {
          bVar19 = uVar8 < puVar14[1];
        }
        if (!bVar19) break;
        lVar7 = *(longlong *)(lVar11 + 8 + (ulonglong)(uVar18 >> 0xb) * 8);
        puVar1 = (uint64_t *)(lVar7 + uVar17 * 0x18);
        uVar9 = puVar1[1];
        uVar4 = *(uint64_t *)(lVar7 + 0x10 + uVar17 * 0x18);
        lVar7 = *(longlong *)(lVar11 + 8 + (ulonglong)(uVar13 >> 0xb) * 8);
        uVar16 = (ulonglong)(uVar13 + (uVar13 >> 0xb) * -0x800);
        puVar2 = (uint64_t *)(lVar7 + uVar16 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar9;
        *(uint64_t *)(lVar7 + 0x10 + uVar16 * 0x18) = uVar4;
        uVar13 = uVar13 - 1;
      }
      uVar16 = (ulonglong)(uVar13 + (uVar13 >> 0xb) * -0x800);
      lVar7 = *(longlong *)(lVar11 + 8 + (ulonglong)(uVar13 >> 0xb) * 8);
      puVar14 = (ulonglong *)(lVar7 + uVar16 * 0x18);
      *puVar14 = uVar15;
      puVar14[1] = uVar8;
      *(uint64_t *)(lVar7 + 0x10 + uVar16 * 0x18) = uVar3;
    }
  }
  return;
}






// 函数: void FUN_1800eacbd(void)
void FUN_1800eacbd(void)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint64_t uVar7;
  uint uVar8;
  uint uVar9;
  longlong in_RAX;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint in_R11D;
  uint64_t unaff_R12;
  uint unaff_R14D;
  uint unaff_R15D;
  bool bVar14;
  longlong unaff_retaddr;
  uint uStackX_8;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + 0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R12;
  do {
    lVar5 = *(longlong *)(unaff_retaddr + 8 + (ulonglong)(in_R11D >> 0xb) * 8);
    uVar11 = (ulonglong)(in_R11D + (in_R11D >> 0xb) * -0x800);
    uVar3 = *(uint64_t *)(lVar5 + 0x10 + uVar11 * 0x18);
    puVar10 = (ulonglong *)(lVar5 + uVar11 * 0x18);
    uVar11 = *puVar10;
    uVar6 = puVar10[1];
    uVar8 = uStackX_8;
    uVar9 = in_R11D;
    while (uVar9 != unaff_R14D) {
      uStackX_8 = uStackX_8 - 1;
      uVar13 = (ulonglong)(uStackX_8 & 0x7ff);
      puVar10 = (ulonglong *)
                (*(longlong *)(unaff_retaddr + 8 + (ulonglong)(uStackX_8 >> 0xb) * 8) +
                uVar13 * 0x18);
      uVar12 = *puVar10;
      bVar14 = uVar11 < uVar12;
      if (uVar11 == uVar12) {
        bVar14 = uVar6 < puVar10[1];
      }
      if (!bVar14) break;
      lVar5 = *(longlong *)(unaff_retaddr + 8 + (ulonglong)(uStackX_8 >> 0xb) * 8);
      puVar1 = (uint64_t *)(lVar5 + uVar13 * 0x18);
      uVar7 = puVar1[1];
      uVar4 = *(uint64_t *)(lVar5 + 0x10 + uVar13 * 0x18);
      lVar5 = *(longlong *)(unaff_retaddr + 8 + (ulonglong)(uVar8 >> 0xb) * 8);
      uVar12 = (ulonglong)(uVar8 + (uVar8 >> 0xb) * -0x800);
      puVar2 = (uint64_t *)(lVar5 + uVar12 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      *(uint64_t *)(lVar5 + 0x10 + uVar12 * 0x18) = uVar4;
      uVar8 = uVar8 - 1;
      uVar9 = uStackX_8;
    }
    in_R11D = in_R11D + 1;
    uVar12 = (ulonglong)(uVar8 + (uVar8 >> 0xb) * -0x800);
    lVar5 = *(longlong *)(unaff_retaddr + 8 + (ulonglong)(uVar8 >> 0xb) * 8);
    puVar10 = (ulonglong *)(lVar5 + uVar12 * 0x18);
    *puVar10 = uVar11;
    puVar10[1] = uVar6;
    *(uint64_t *)(lVar5 + 0x10 + uVar12 * 0x18) = uVar3;
    uStackX_8 = in_R11D;
    if (in_R11D == unaff_R15D) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1800eae03(void)
void FUN_1800eae03(void)

{
  return;
}






