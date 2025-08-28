#include "TaleWorlds.Native.Split.h"

// 99_part_02_part005.c - 8 个函数

// 函数: void FUN_1800eb09b(void)
void FUN_1800eb09b(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  longlong in_RAX;
  ulonglong uVar13;
  uint uVar14;
  longlong unaff_RBX;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 *puVar17;
  undefined8 unaff_RDI;
  undefined8 *puVar18;
  uint uVar19;
  longlong in_R10;
  int iVar20;
  ulonglong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  longlong *unaff_R14;
  longlong *unaff_R15;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  uint uStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  longlong in_stack_00000040;
  uint uStack0000000000000048;
  longlong in_stack_00000050;
  longlong in_stack_00000058;
  longlong in_stack_00000060;
  longlong in_stack_00000068;
  longlong in_stack_00000070;
  longlong in_stack_00000078;
  undefined4 in_stack_00000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  undefined4 uStack000000000000008c;
  longlong *in_stack_000000f0;
  longlong *in_stack_000000f8;
  longlong in_stack_00000100;
  int in_stack_00000108;
  
  *(undefined8 *)(in_RAX + -0x20) = unaff_RBP;
  *(undefined8 *)(in_RAX + -0x28) = unaff_RSI;
  *(undefined8 *)(in_RAX + -0x30) = unaff_RDI;
  *(undefined8 *)(in_RAX + -0x38) = unaff_R12;
  *(undefined8 *)(in_RAX + -0x40) = unaff_R13;
  *(undefined4 *)(in_RAX + -0x58) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x54) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x50) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0x4c) = unaff_XMM6_Dd;
  do {
    if (unaff_RBX < 1) break;
    uVar19 = (int)in_R10 - 1;
    uVar14 = uVar19 >> 0xb;
    iVar20 = (int)in_R11;
    puVar18 = (undefined8 *)
              (*(longlong *)(*unaff_R14 + 8 + (ulonglong)uVar14 * 8) +
              (ulonglong)(uVar19 + uVar14 * -0x800) * 0x10);
    uVar14 = (int)(((longlong)(int)in_R10 - (longlong)iVar20) / 2) + iVar20;
    uVar19 = uVar14 >> 0xb;
    puVar15 = (undefined8 *)
              (*(longlong *)(*unaff_R15 + 8 + (ulonglong)uVar19 * 8) +
              (ulonglong)(uVar14 + uVar19 * -0x800) * 0x10);
    uVar13 = in_R11 >> 0xb & 0x1fffff;
    puVar17 = (undefined8 *)
              (*(longlong *)(*unaff_R15 + 8 + uVar13 * 8) +
              (ulonglong)(uint)(iVar20 + (int)uVar13 * -0x800) * 0x10);
    cVar12 = func_0x0001800d40c0(puVar17,puVar15);
    if (cVar12 == '\0') {
      cVar12 = func_0x0001800d40c0(puVar17,puVar18);
      puVar16 = puVar17;
      if (cVar12 == '\0') {
        cVar12 = func_0x0001800d40c0(puVar15,puVar18);
        goto LAB_1800eb177;
      }
    }
    else {
      cVar12 = func_0x0001800d40c0(puVar15,puVar18);
      puVar16 = puVar15;
      if (cVar12 == '\0') {
        cVar12 = func_0x0001800d40c0(puVar17,puVar18);
        puVar15 = puVar17;
LAB_1800eb177:
        puVar16 = puVar15;
        if (cVar12 != '\0') {
          puVar16 = puVar18;
        }
      }
    }
    in_stack_00000030 = *puVar16;
    in_stack_00000038 = puVar16[1];
    lVar7 = *unaff_R14;
    _uStack0000000000000048 = unaff_R14[1];
    lVar11 = *unaff_R15;
    lVar10 = *unaff_R15;
    uStack0000000000000028 = *(uint *)(unaff_R15 + 1);
    uVar3 = *(undefined4 *)((longlong)unaff_R15 + 0xc);
    uVar14 = uStack0000000000000048;
    in_stack_00000040 = lVar7;
    while( true ) {
      while( true ) {
        uVar19 = uStack0000000000000028 >> 0xb;
        cVar12 = func_0x0001800d40c0(*(longlong *)(lVar10 + 8 + (ulonglong)uVar19 * 8) +
                                     (ulonglong)(uStack0000000000000028 + uVar19 * -0x800) * 0x10,
                                     &stack0x00000030);
        if (cVar12 == '\0') break;
        uStack0000000000000028 = uStack0000000000000028 + 1;
      }
      uVar14 = uVar14 - 1;
      cVar12 = func_0x0001800d40c0(&stack0x00000030,
                                   (ulonglong)(uVar14 + (uVar14 >> 0xb) * -0x800) * 0x10 +
                                   *(longlong *)(lVar7 + 8 + (ulonglong)(uVar14 >> 0xb) * 8));
      unaff_R14 = in_stack_000000f8;
      while (in_stack_000000f8 = unaff_R14, cVar12 != '\0') {
        uVar14 = uVar14 - 1;
        cVar12 = func_0x0001800d40c0(&stack0x00000030,
                                     (ulonglong)(uVar14 + (uVar14 >> 0xb) * -0x800) * 0x10 +
                                     *(longlong *)(lVar7 + 8 + (ulonglong)(uVar14 >> 0xb) * 8));
        unaff_R14 = in_stack_000000f8;
      }
      if ((int)uVar14 <= (int)uStack0000000000000028) break;
      uVar13 = (ulonglong)(uStack0000000000000028 + uVar19 * -0x800);
      puVar17 = (undefined8 *)
                ((ulonglong)(uVar14 + (uVar14 >> 0xb) * -0x800) * 0x10 +
                *(longlong *)(lVar7 + 8 + (ulonglong)(uVar14 >> 0xb) * 8));
      lVar2 = *(longlong *)(lVar10 + 8 + (ulonglong)uVar19 * 8);
      uStack0000000000000028 = uStack0000000000000028 + 1;
      uVar4 = *(undefined4 *)((longlong)puVar17 + 4);
      uVar5 = *(undefined4 *)(puVar17 + 1);
      uVar6 = *(undefined4 *)((longlong)puVar17 + 0xc);
      puVar15 = (undefined8 *)(lVar2 + uVar13 * 0x10);
      uVar8 = *puVar15;
      uVar9 = puVar15[1];
      puVar1 = (undefined4 *)(lVar2 + uVar13 * 0x10);
      *puVar1 = *(undefined4 *)puVar17;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      *puVar17 = uVar8;
      puVar17[1] = uVar9;
    }
    lVar7 = CONCAT44(uVar3,uStack0000000000000028);
    unaff_RBX = in_stack_00000100 + -1;
    in_stack_00000040 = *unaff_R14;
    _uStack0000000000000048 = unaff_R14[1];
    in_stack_00000050 = lVar11;
    in_stack_00000058 = lVar7;
    in_stack_00000100 = unaff_RBX;
    FUN_1800eb050(&stack0x00000050,&stack0x00000040,unaff_RBX,&SUB_1800d40c0);
    in_R11 = (ulonglong)in_stack_00000108;
    *unaff_R14 = lVar11;
    unaff_R14[1] = lVar7;
    in_R10 = (longlong)(int)unaff_R14[1];
    unaff_R15 = in_stack_000000f0;
  } while (0x1c < (longlong)(in_R10 - in_R11));
  if (unaff_RBX == 0) {
    in_stack_00000060 = *unaff_R14;
    in_stack_00000068 = unaff_R14[1];
    in_stack_00000080 = (undefined4)*unaff_R15;
    uStack0000000000000084 = *(undefined4 *)((longlong)unaff_R15 + 4);
    in_stack_00000088 = (undefined4)unaff_R15[1];
    uStack000000000000008c = *(undefined4 *)((longlong)unaff_R15 + 0xc);
    in_stack_00000070 = in_stack_00000060;
    in_stack_00000078 = in_stack_00000068;
    FUN_1800ebe90(&stack0x00000080,&stack0x00000070,&stack0x00000060);
  }
  return;
}






// 函数: void FUN_1800eb334(void)
void FUN_1800eb334(void)

{
  longlong unaff_RBX;
  undefined8 *unaff_R14;
  undefined4 *unaff_R15;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  
  if (unaff_RBX == 0) {
    uStack0000000000000060 = *unaff_R14;
    uStack0000000000000068 = unaff_R14[1];
    uStack0000000000000080 = *unaff_R15;
    uStack0000000000000084 = unaff_R15[1];
    uStack0000000000000088 = unaff_R15[2];
    uStack000000000000008c = unaff_R15[3];
    uStack0000000000000070 = uStack0000000000000060;
    uStack0000000000000078 = uStack0000000000000068;
    FUN_1800ebe90(&stack0x00000080,&stack0x00000070,&stack0x00000060);
  }
  return;
}






// 函数: void FUN_1800eb341(void)
void FUN_1800eb341(void)

{
  undefined8 *unaff_R14;
  undefined4 *unaff_R15;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  
  uStack0000000000000060 = *unaff_R14;
  uStack0000000000000068 = unaff_R14[1];
  uStack0000000000000080 = *unaff_R15;
  uStack0000000000000084 = unaff_R15[1];
  uStack0000000000000088 = unaff_R15[2];
  uStack000000000000008c = unaff_R15[3];
  uStack0000000000000070 = uStack0000000000000060;
  uStack0000000000000078 = uStack0000000000000068;
  FUN_1800ebe90(&stack0x00000080,&stack0x00000070,&stack0x00000060);
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800ec2a4)
// WARNING: Removing unreachable block (ram,0x0001800ec2b7)
// WARNING: Removing unreachable block (ram,0x0001800ec2d0)
// WARNING: Removing unreachable block (ram,0x0001800ec2e2)
// WARNING: Removing unreachable block (ram,0x0001800ec2e5)
// WARNING: Removing unreachable block (ram,0x0001800ec2fd)
// WARNING: Removing unreachable block (ram,0x0001800ec2ff)
// WARNING: Removing unreachable block (ram,0x0001800ec30c)
// WARNING: Removing unreachable block (ram,0x0001800ec311)
// WARNING: Removing unreachable block (ram,0x0001800ec328)
// WARNING: Removing unreachable block (ram,0x0001800ec338)
// WARNING: Removing unreachable block (ram,0x0001800ec33e)
// WARNING: Removing unreachable block (ram,0x0001800ec34e)
// WARNING: Removing unreachable block (ram,0x0001800ec297)




// 函数: void FUN_1800eb380(undefined8 *param_1,undefined8 *param_2,longlong param_3)
void FUN_1800eb380(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  
  uVar4 = (longlong)param_2 - (longlong)param_1;
  do {
    if (((longlong)(uVar4 & 0xfffffffffffffff8) < 0xe1) || (param_3 < 1)) {
      if (param_3 != 0) {
        return;
      }
      lVar5 = (longlong)param_2 - (longlong)param_1 >> 3;
      if (1 < lVar5) {
        lVar7 = (lVar5 + -2 >> 1) + 1;
        lVar12 = lVar7 * 2 + 2;
        do {
          uVar1 = param_1[lVar7 + -1];
          lVar7 = lVar7 + -1;
          lVar12 = lVar12 + -2;
          lVar10 = lVar7;
          for (lVar11 = lVar12; lVar11 < lVar5; lVar11 = lVar11 * 2 + 2) {
            cVar3 = func_0x0001800da750(param_1[lVar11],param_1[lVar11 + -1]);
            if (cVar3 != '\0') {
              lVar11 = lVar11 + -1;
            }
            param_1[lVar10] = param_1[lVar11];
            lVar10 = lVar11;
          }
          if (lVar11 == lVar5) {
            param_1[lVar10] = param_1[lVar11 + -1];
            lVar10 = lVar11 + -1;
          }
          while (lVar7 < lVar10) {
            lVar11 = lVar10 + -1 >> 1;
            cVar3 = func_0x0001800da750(param_1[lVar11],uVar1);
            if (cVar3 == '\0') break;
            param_1[lVar10] = param_1[lVar11];
            lVar10 = lVar11;
          }
          param_1[lVar10] = uVar1;
        } while (lVar7 != 0);
      }
      if (1 < lVar5) {
        param_2 = param_2 + -1;
        do {
          lVar12 = 0;
          uVar1 = *param_2;
          lVar7 = 2;
          lVar5 = lVar5 + -1;
          *param_2 = *param_1;
          bVar13 = lVar5 == 2;
          lVar10 = lVar12;
          if (2 < lVar5) {
            do {
              cVar3 = func_0x0001800da750(param_1[lVar7],param_1[lVar7 + -1]);
              lVar12 = lVar7;
              if (cVar3 != '\0') {
                lVar12 = lVar7 + -1;
              }
              param_1[lVar10] = param_1[lVar12];
              lVar7 = lVar12 * 2 + 2;
              bVar13 = lVar7 == lVar5;
              lVar10 = lVar12;
            } while (lVar7 < lVar5);
          }
          if (bVar13) {
            param_1[lVar12] = param_1[lVar7 + -1];
            lVar12 = lVar7 + -1;
          }
          while (0 < lVar12) {
            lVar5 = lVar12 + -1 >> 1;
            cVar3 = func_0x0001800da750(param_1[lVar5],uVar1);
            if (cVar3 == '\0') break;
            param_1[lVar12] = param_1[lVar5];
            lVar12 = lVar5;
          }
          param_2 = param_2 + -1;
          param_1[lVar12] = uVar1;
          lVar5 = (8 - (longlong)param_1) + (longlong)param_2 >> 3;
        } while (1 < lVar5);
      }
      return;
    }
    puVar6 = param_2 + -1;
    lVar5 = (longlong)param_2 - (longlong)param_1 >> 3;
    if (lVar5 < 0) {
      lVar5 = lVar5 + 1;
    }
    puVar8 = param_1 + (lVar5 >> 1);
    cVar3 = func_0x0001800da750(*param_1,param_1[lVar5 >> 1]);
    if (cVar3 == '\0') {
      cVar3 = func_0x0001800da750(*param_1,*puVar6);
      puVar9 = param_1;
      if (cVar3 == '\0') {
        cVar3 = func_0x0001800da750(*puVar8,*puVar6);
        goto LAB_1800eb431;
      }
    }
    else {
      cVar3 = func_0x0001800da750(*puVar8,*puVar6);
      puVar9 = puVar8;
      if (cVar3 == '\0') {
        cVar3 = func_0x0001800da750(*param_1,*puVar6);
        puVar8 = param_1;
LAB_1800eb431:
        puVar9 = puVar8;
        if (cVar3 != '\0') {
          puVar9 = puVar6;
        }
      }
    }
    uVar1 = *puVar9;
    puVar6 = param_2;
    puVar8 = param_1;
    while( true ) {
      while (cVar3 = func_0x0001800da750(*puVar8,uVar1), cVar3 != '\0') {
        puVar8 = puVar8 + 1;
      }
      cVar3 = func_0x0001800da750(uVar1,puVar6[-1]);
      puVar9 = puVar6;
      while (puVar6 = puVar9 + -1, cVar3 != '\0') {
        cVar3 = func_0x0001800da750(uVar1,puVar9[-2]);
        puVar9 = puVar6;
      }
      if (puVar6 <= puVar8) break;
      uVar2 = *puVar8;
      *puVar8 = *puVar6;
      puVar8 = puVar8 + 1;
      *puVar6 = uVar2;
    }
    param_3 = param_3 + -1;
    FUN_1800eb380(puVar8,param_2,param_3,&SUB_1800da750);
    uVar4 = (longlong)puVar8 - (longlong)param_1;
    param_2 = puVar8;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0001800ec2a4)
// WARNING: Removing unreachable block (ram,0x0001800ec2b7)
// WARNING: Removing unreachable block (ram,0x0001800ec2d0)
// WARNING: Removing unreachable block (ram,0x0001800ec2e2)
// WARNING: Removing unreachable block (ram,0x0001800ec2e5)
// WARNING: Removing unreachable block (ram,0x0001800ec2fd)
// WARNING: Removing unreachable block (ram,0x0001800ec2ff)
// WARNING: Removing unreachable block (ram,0x0001800ec30c)
// WARNING: Removing unreachable block (ram,0x0001800ec311)
// WARNING: Removing unreachable block (ram,0x0001800ec328)
// WARNING: Removing unreachable block (ram,0x0001800ec338)
// WARNING: Removing unreachable block (ram,0x0001800ec33e)
// WARNING: Removing unreachable block (ram,0x0001800ec34e)
// WARNING: Removing unreachable block (ram,0x0001800ec297)




// 函数: void FUN_1800eb38b(undefined8 *param_1,undefined8 *param_2,longlong param_3)
void FUN_1800eb38b(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong in_RAX;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  
  uVar4 = in_RAX - (longlong)param_1;
  do {
    if (((longlong)(uVar4 & 0xfffffffffffffff8) < 0xe1) || (param_3 < 1)) {
      if (param_3 != 0) {
        return;
      }
      lVar5 = (longlong)param_2 - (longlong)param_1 >> 3;
      if (1 < lVar5) {
        lVar7 = (lVar5 + -2 >> 1) + 1;
        lVar12 = lVar7 * 2 + 2;
        do {
          uVar1 = param_1[lVar7 + -1];
          lVar7 = lVar7 + -1;
          lVar12 = lVar12 + -2;
          lVar10 = lVar7;
          for (lVar11 = lVar12; lVar11 < lVar5; lVar11 = lVar11 * 2 + 2) {
            cVar3 = func_0x0001800da750(param_1[lVar11],param_1[lVar11 + -1]);
            if (cVar3 != '\0') {
              lVar11 = lVar11 + -1;
            }
            param_1[lVar10] = param_1[lVar11];
            lVar10 = lVar11;
          }
          if (lVar11 == lVar5) {
            param_1[lVar10] = param_1[lVar11 + -1];
            lVar10 = lVar11 + -1;
          }
          while (lVar7 < lVar10) {
            lVar11 = lVar10 + -1 >> 1;
            cVar3 = func_0x0001800da750(param_1[lVar11],uVar1);
            if (cVar3 == '\0') break;
            param_1[lVar10] = param_1[lVar11];
            lVar10 = lVar11;
          }
          param_1[lVar10] = uVar1;
        } while (lVar7 != 0);
      }
      if (1 < lVar5) {
        param_2 = param_2 + -1;
        do {
          lVar12 = 0;
          uVar1 = *param_2;
          lVar7 = 2;
          lVar5 = lVar5 + -1;
          *param_2 = *param_1;
          bVar13 = lVar5 == 2;
          lVar10 = lVar12;
          if (2 < lVar5) {
            do {
              cVar3 = func_0x0001800da750(param_1[lVar7],param_1[lVar7 + -1]);
              lVar12 = lVar7;
              if (cVar3 != '\0') {
                lVar12 = lVar7 + -1;
              }
              param_1[lVar10] = param_1[lVar12];
              lVar7 = lVar12 * 2 + 2;
              bVar13 = lVar7 == lVar5;
              lVar10 = lVar12;
            } while (lVar7 < lVar5);
          }
          if (bVar13) {
            param_1[lVar12] = param_1[lVar7 + -1];
            lVar12 = lVar7 + -1;
          }
          while (0 < lVar12) {
            lVar5 = lVar12 + -1 >> 1;
            cVar3 = func_0x0001800da750(param_1[lVar5],uVar1);
            if (cVar3 == '\0') break;
            param_1[lVar12] = param_1[lVar5];
            lVar12 = lVar5;
          }
          param_2 = param_2 + -1;
          param_1[lVar12] = uVar1;
          lVar5 = (8 - (longlong)param_1) + (longlong)param_2 >> 3;
        } while (1 < lVar5);
      }
      return;
    }
    puVar6 = param_2 + -1;
    lVar5 = (longlong)param_2 - (longlong)param_1 >> 3;
    if (lVar5 < 0) {
      lVar5 = lVar5 + 1;
    }
    puVar8 = param_1 + (lVar5 >> 1);
    cVar3 = func_0x0001800da750(*param_1,param_1[lVar5 >> 1]);
    if (cVar3 == '\0') {
      cVar3 = func_0x0001800da750(*param_1,*puVar6);
      puVar9 = param_1;
      if (cVar3 == '\0') {
        cVar3 = func_0x0001800da750(*puVar8,*puVar6);
        goto LAB_1800eb431;
      }
    }
    else {
      cVar3 = func_0x0001800da750(*puVar8,*puVar6);
      puVar9 = puVar8;
      if (cVar3 == '\0') {
        cVar3 = func_0x0001800da750(*param_1,*puVar6);
        puVar8 = param_1;
LAB_1800eb431:
        puVar9 = puVar8;
        if (cVar3 != '\0') {
          puVar9 = puVar6;
        }
      }
    }
    uVar1 = *puVar9;
    puVar6 = param_2;
    puVar8 = param_1;
    while( true ) {
      while (cVar3 = func_0x0001800da750(*puVar8,uVar1), cVar3 != '\0') {
        puVar8 = puVar8 + 1;
      }
      cVar3 = func_0x0001800da750(uVar1,puVar6[-1]);
      puVar9 = puVar6;
      while (puVar6 = puVar9 + -1, cVar3 != '\0') {
        cVar3 = func_0x0001800da750(uVar1,puVar9[-2]);
        puVar9 = puVar6;
      }
      if (puVar6 <= puVar8) break;
      uVar2 = *puVar8;
      *puVar8 = *puVar6;
      puVar8 = puVar8 + 1;
      *puVar6 = uVar2;
    }
    param_3 = param_3 + -1;
    FUN_1800eb380(puVar8,param_2,param_3,&SUB_1800da750);
    uVar4 = (longlong)puVar8 - (longlong)param_1;
    param_2 = puVar8;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0001800ec2a4)
// WARNING: Removing unreachable block (ram,0x0001800ec2b7)
// WARNING: Removing unreachable block (ram,0x0001800ec2d0)
// WARNING: Removing unreachable block (ram,0x0001800ec2e2)
// WARNING: Removing unreachable block (ram,0x0001800ec2e5)
// WARNING: Removing unreachable block (ram,0x0001800ec2fd)
// WARNING: Removing unreachable block (ram,0x0001800ec2ff)
// WARNING: Removing unreachable block (ram,0x0001800ec30c)
// WARNING: Removing unreachable block (ram,0x0001800ec311)
// WARNING: Removing unreachable block (ram,0x0001800ec328)
// WARNING: Removing unreachable block (ram,0x0001800ec338)
// WARNING: Removing unreachable block (ram,0x0001800ec33e)
// WARNING: Removing unreachable block (ram,0x0001800ec34e)
// WARNING: Removing unreachable block (ram,0x0001800ec297)




// 函数: void FUN_1800eb3ac(void)
void FUN_1800eb3ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *unaff_RBP;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *unaff_R14;
  longlong unaff_R15;
  bool bVar12;
  
  do {
    puVar6 = unaff_RBP;
    if (unaff_R15 < 1) break;
    puVar6 = unaff_RBP + -1;
    lVar4 = (longlong)unaff_RBP - (longlong)unaff_R14 >> 3;
    if (lVar4 < 0) {
      lVar4 = lVar4 + 1;
    }
    puVar5 = unaff_R14 + (lVar4 >> 1);
    cVar3 = func_0x0001800da750(*unaff_R14,unaff_R14[lVar4 >> 1]);
    if (cVar3 == '\0') {
      cVar3 = func_0x0001800da750(*unaff_R14,*puVar6);
      puVar8 = unaff_R14;
      if (cVar3 == '\0') {
        cVar3 = func_0x0001800da750(*puVar5,*puVar6);
        goto LAB_1800eb431;
      }
    }
    else {
      cVar3 = func_0x0001800da750(*puVar5,*puVar6);
      puVar8 = puVar5;
      if (cVar3 == '\0') {
        cVar3 = func_0x0001800da750(*unaff_R14,*puVar6);
        puVar5 = unaff_R14;
LAB_1800eb431:
        puVar8 = puVar5;
        if (cVar3 != '\0') {
          puVar8 = puVar6;
        }
      }
    }
    uVar1 = *puVar8;
    puVar5 = unaff_RBP;
    puVar6 = unaff_R14;
    while( true ) {
      while (cVar3 = func_0x0001800da750(*puVar6,uVar1), cVar3 != '\0') {
        puVar6 = puVar6 + 1;
      }
      cVar3 = func_0x0001800da750(uVar1,puVar5[-1]);
      puVar8 = puVar5;
      while (puVar5 = puVar8 + -1, cVar3 != '\0') {
        cVar3 = func_0x0001800da750(uVar1,puVar8[-2]);
        puVar8 = puVar5;
      }
      if (puVar5 <= puVar6) break;
      uVar2 = *puVar6;
      *puVar6 = *puVar5;
      puVar6 = puVar6 + 1;
      *puVar5 = uVar2;
    }
    unaff_R15 = unaff_R15 + -1;
    FUN_1800eb380(puVar6,unaff_RBP,unaff_R15,&SUB_1800da750);
    unaff_RBP = puVar6;
  } while (0xe0 < (longlong)((longlong)puVar6 - (longlong)unaff_R14 & 0xfffffffffffffff8U));
  if (unaff_R15 != 0) {
    return;
  }
  lVar4 = (longlong)puVar6 - (longlong)unaff_R14 >> 3;
  if (1 < lVar4) {
    lVar7 = (lVar4 + -2 >> 1) + 1;
    lVar11 = lVar7 * 2 + 2;
    do {
      uVar1 = unaff_R14[lVar7 + -1];
      lVar7 = lVar7 + -1;
      lVar11 = lVar11 + -2;
      lVar9 = lVar7;
      for (lVar10 = lVar11; lVar10 < lVar4; lVar10 = lVar10 * 2 + 2) {
        cVar3 = func_0x0001800da750(unaff_R14[lVar10],unaff_R14[lVar10 + -1]);
        if (cVar3 != '\0') {
          lVar10 = lVar10 + -1;
        }
        unaff_R14[lVar9] = unaff_R14[lVar10];
        lVar9 = lVar10;
      }
      if (lVar10 == lVar4) {
        unaff_R14[lVar9] = unaff_R14[lVar10 + -1];
        lVar9 = lVar10 + -1;
      }
      while (lVar7 < lVar9) {
        lVar10 = lVar9 + -1 >> 1;
        cVar3 = func_0x0001800da750(unaff_R14[lVar10],uVar1);
        if (cVar3 == '\0') break;
        unaff_R14[lVar9] = unaff_R14[lVar10];
        lVar9 = lVar10;
      }
      unaff_R14[lVar9] = uVar1;
    } while (lVar7 != 0);
  }
  if (1 < lVar4) {
    puVar6 = puVar6 + -1;
    do {
      lVar11 = 0;
      uVar1 = *puVar6;
      lVar7 = 2;
      lVar4 = lVar4 + -1;
      *puVar6 = *unaff_R14;
      bVar12 = lVar4 == 2;
      lVar9 = lVar11;
      if (2 < lVar4) {
        do {
          cVar3 = func_0x0001800da750(unaff_R14[lVar7],unaff_R14[lVar7 + -1]);
          lVar11 = lVar7;
          if (cVar3 != '\0') {
            lVar11 = lVar7 + -1;
          }
          unaff_R14[lVar9] = unaff_R14[lVar11];
          lVar7 = lVar11 * 2 + 2;
          bVar12 = lVar7 == lVar4;
          lVar9 = lVar11;
        } while (lVar7 < lVar4);
      }
      if (bVar12) {
        unaff_R14[lVar11] = unaff_R14[lVar7 + -1];
        lVar11 = lVar7 + -1;
      }
      while (0 < lVar11) {
        lVar4 = lVar11 + -1 >> 1;
        cVar3 = func_0x0001800da750(unaff_R14[lVar4],uVar1);
        if (cVar3 == '\0') break;
        unaff_R14[lVar11] = unaff_R14[lVar4];
        lVar11 = lVar4;
      }
      puVar6 = puVar6 + -1;
      unaff_R14[lVar11] = uVar1;
      lVar4 = (8 - (longlong)unaff_R14) + (longlong)puVar6 >> 3;
    } while (1 < lVar4);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800ec2a4)
// WARNING: Removing unreachable block (ram,0x0001800ec2b7)
// WARNING: Removing unreachable block (ram,0x0001800ec2d0)
// WARNING: Removing unreachable block (ram,0x0001800ec2e2)
// WARNING: Removing unreachable block (ram,0x0001800ec2e5)
// WARNING: Removing unreachable block (ram,0x0001800ec2fd)
// WARNING: Removing unreachable block (ram,0x0001800ec2ff)
// WARNING: Removing unreachable block (ram,0x0001800ec30c)
// WARNING: Removing unreachable block (ram,0x0001800ec311)
// WARNING: Removing unreachable block (ram,0x0001800ec328)
// WARNING: Removing unreachable block (ram,0x0001800ec338)
// WARNING: Removing unreachable block (ram,0x0001800ec33e)
// WARNING: Removing unreachable block (ram,0x0001800ec34e)
// WARNING: Removing unreachable block (ram,0x0001800ec297)




// 函数: void FUN_1800eb4d9(void)
void FUN_1800eb4d9(void)

{
  undefined8 uVar1;
  char cVar2;
  longlong unaff_RBP;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *unaff_R14;
  longlong lVar7;
  longlong unaff_R15;
  undefined8 *puVar8;
  bool bVar9;
  
  if (unaff_R15 != 0) {
    return;
  }
  lVar7 = unaff_RBP - (longlong)unaff_R14 >> 3;
  if (1 < lVar7) {
    lVar3 = (lVar7 + -2 >> 1) + 1;
    lVar6 = lVar3 * 2 + 2;
    do {
      uVar1 = unaff_R14[lVar3 + -1];
      lVar3 = lVar3 + -1;
      lVar6 = lVar6 + -2;
      lVar4 = lVar3;
      for (lVar5 = lVar6; lVar5 < lVar7; lVar5 = lVar5 * 2 + 2) {
        cVar2 = func_0x0001800da750(unaff_R14[lVar5],unaff_R14[lVar5 + -1]);
        if (cVar2 != '\0') {
          lVar5 = lVar5 + -1;
        }
        unaff_R14[lVar4] = unaff_R14[lVar5];
        lVar4 = lVar5;
      }
      if (lVar5 == lVar7) {
        unaff_R14[lVar4] = unaff_R14[lVar5 + -1];
        lVar4 = lVar5 + -1;
      }
      while (lVar3 < lVar4) {
        lVar5 = lVar4 + -1 >> 1;
        cVar2 = func_0x0001800da750(unaff_R14[lVar5],uVar1);
        if (cVar2 == '\0') break;
        unaff_R14[lVar4] = unaff_R14[lVar5];
        lVar4 = lVar5;
      }
      unaff_R14[lVar4] = uVar1;
    } while (lVar3 != 0);
  }
  if (1 < lVar7) {
    puVar8 = (undefined8 *)(unaff_RBP + -8);
    do {
      lVar6 = 0;
      uVar1 = *puVar8;
      lVar3 = 2;
      lVar7 = lVar7 + -1;
      *puVar8 = *unaff_R14;
      bVar9 = lVar7 == 2;
      lVar4 = lVar6;
      if (2 < lVar7) {
        do {
          cVar2 = func_0x0001800da750(unaff_R14[lVar3],unaff_R14[lVar3 + -1]);
          lVar6 = lVar3;
          if (cVar2 != '\0') {
            lVar6 = lVar3 + -1;
          }
          unaff_R14[lVar4] = unaff_R14[lVar6];
          lVar3 = lVar6 * 2 + 2;
          bVar9 = lVar3 == lVar7;
          lVar4 = lVar6;
        } while (lVar3 < lVar7);
      }
      if (bVar9) {
        unaff_R14[lVar6] = unaff_R14[lVar3 + -1];
        lVar6 = lVar3 + -1;
      }
      while (0 < lVar6) {
        lVar7 = lVar6 + -1 >> 1;
        cVar2 = func_0x0001800da750(unaff_R14[lVar7],uVar1);
        if (cVar2 == '\0') break;
        unaff_R14[lVar6] = unaff_R14[lVar7];
        lVar6 = lVar7;
      }
      puVar8 = puVar8 + -1;
      unaff_R14[lVar6] = uVar1;
      lVar7 = (8 - (longlong)unaff_R14) + (longlong)puVar8 >> 3;
    } while (1 < lVar7);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800ec2a4)
// WARNING: Removing unreachable block (ram,0x0001800ec2b7)
// WARNING: Removing unreachable block (ram,0x0001800ec2d0)
// WARNING: Removing unreachable block (ram,0x0001800ec2e2)
// WARNING: Removing unreachable block (ram,0x0001800ec2e5)
// WARNING: Removing unreachable block (ram,0x0001800ec2fd)
// WARNING: Removing unreachable block (ram,0x0001800ec2ff)
// WARNING: Removing unreachable block (ram,0x0001800ec30c)
// WARNING: Removing unreachable block (ram,0x0001800ec311)
// WARNING: Removing unreachable block (ram,0x0001800ec328)
// WARNING: Removing unreachable block (ram,0x0001800ec338)
// WARNING: Removing unreachable block (ram,0x0001800ec33e)
// WARNING: Removing unreachable block (ram,0x0001800ec34e)
// WARNING: Removing unreachable block (ram,0x0001800ec297)




// 函数: void FUN_1800eb4e3(void)
void FUN_1800eb4e3(void)

{
  undefined8 uVar1;
  char cVar2;
  longlong unaff_RBP;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *unaff_R14;
  longlong lVar7;
  undefined8 *puVar8;
  bool bVar9;
  
  lVar7 = unaff_RBP - (longlong)unaff_R14 >> 3;
  if (1 < lVar7) {
    lVar3 = (lVar7 + -2 >> 1) + 1;
    lVar6 = lVar3 * 2 + 2;
    do {
      uVar1 = unaff_R14[lVar3 + -1];
      lVar3 = lVar3 + -1;
      lVar6 = lVar6 + -2;
      lVar4 = lVar3;
      for (lVar5 = lVar6; lVar5 < lVar7; lVar5 = lVar5 * 2 + 2) {
        cVar2 = func_0x0001800da750(unaff_R14[lVar5],unaff_R14[lVar5 + -1]);
        if (cVar2 != '\0') {
          lVar5 = lVar5 + -1;
        }
        unaff_R14[lVar4] = unaff_R14[lVar5];
        lVar4 = lVar5;
      }
      if (lVar5 == lVar7) {
        unaff_R14[lVar4] = unaff_R14[lVar5 + -1];
        lVar4 = lVar5 + -1;
      }
      while (lVar3 < lVar4) {
        lVar5 = lVar4 + -1 >> 1;
        cVar2 = func_0x0001800da750(unaff_R14[lVar5],uVar1);
        if (cVar2 == '\0') break;
        unaff_R14[lVar4] = unaff_R14[lVar5];
        lVar4 = lVar5;
      }
      unaff_R14[lVar4] = uVar1;
    } while (lVar3 != 0);
  }
  if (1 < lVar7) {
    puVar8 = (undefined8 *)(unaff_RBP + -8);
    do {
      lVar6 = 0;
      uVar1 = *puVar8;
      lVar3 = 2;
      lVar7 = lVar7 + -1;
      *puVar8 = *unaff_R14;
      bVar9 = lVar7 == 2;
      lVar4 = lVar6;
      if (2 < lVar7) {
        do {
          cVar2 = func_0x0001800da750(unaff_R14[lVar3],unaff_R14[lVar3 + -1]);
          lVar6 = lVar3;
          if (cVar2 != '\0') {
            lVar6 = lVar3 + -1;
          }
          unaff_R14[lVar4] = unaff_R14[lVar6];
          lVar3 = lVar6 * 2 + 2;
          bVar9 = lVar3 == lVar7;
          lVar4 = lVar6;
        } while (lVar3 < lVar7);
      }
      if (bVar9) {
        unaff_R14[lVar6] = unaff_R14[lVar3 + -1];
        lVar6 = lVar3 + -1;
      }
      while (0 < lVar6) {
        lVar7 = lVar6 + -1 >> 1;
        cVar2 = func_0x0001800da750(unaff_R14[lVar7],uVar1);
        if (cVar2 == '\0') break;
        unaff_R14[lVar6] = unaff_R14[lVar7];
        lVar6 = lVar7;
      }
      puVar8 = puVar8 + -1;
      unaff_R14[lVar6] = uVar1;
      lVar7 = (8 - (longlong)unaff_R14) + (longlong)puVar8 >> 3;
    } while (1 < lVar7);
  }
  return;
}






