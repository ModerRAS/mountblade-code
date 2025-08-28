#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part024.c - 2 个函数

// 函数: void FUN_1805c86d0(uint64_t *param_1)
void FUN_1805c86d0(uint64_t *param_1)

{
  int8_t auStack_b28 [2832];
  
                    // WARNING: Subroutine does not return
  memcpy(auStack_b28,*param_1,0xa60);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1805c880c(uint64_t param_1,int param_2,longlong *param_3,int param_4,float param_5,
                 uint64_t param_6,float param_7,uint64_t param_8,uint64_t param_9,
                 uint64_t param_10,int param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong in_RAX;
  int unaff_EBX;
  longlong unaff_RBP;
  longlong in_R10;
  int in_R11D;
  int unaff_R15D;
  float fVar7;
  int8_t auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fStackX_20;
  float fStackX_24;
  
  lVar6 = system_system_config;
  iVar1 = *(int *)(in_RAX + 0x10);
LAB_1805c8850:
  lVar4 = *param_3;
  iVar2 = *(int *)(lVar4 + 0x10);
  if ((((iVar2 != iVar1) && (*(int *)(lVar4 + 0x568) == 1)) &&
      (iVar3 = *(int *)(*(longlong *)(lVar4 + 0x590) + 0x2498), iVar3 != -1)) &&
     (*(byte *)((longlong)iVar3 * 0x68 + 0x60 + lVar6) < 3)) {
    lVar5 = *(longlong *)(lVar4 + 0x20);
    fVar10 = *(float *)(lVar5 + 0xc) - fStackX_20;
    fVar11 = *(float *)(lVar5 + 0x10) - fStackX_24;
    fVar12 = *(float *)(lVar5 + 0x14) - param_5;
    fVar13 = fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12;
    auVar8 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
    fVar7 = auVar8._0_4_;
    fVar14 = fVar7 * 0.5 * (3.0 - fVar13 * fVar7 * fVar7);
    fVar9 = fVar14 * fVar10 * (float)param_6 + fVar14 * fVar11 * param_6._4_4_ +
            fVar14 * fVar12 * param_7 + 0.8;
    fVar7 = unaff_XMM11_Da;
    if ((unaff_XMM11_Da <= fVar9) && (fVar7 = fVar9, unaff_XMM10_Da <= fVar9)) {
      fVar7 = unaff_XMM10_Da;
    }
    fVar13 = unaff_XMM10_Da / (fVar14 * fVar13 + unaff_XMM15_Da);
    fVar9 = unaff_XMM11_Da;
    if ((unaff_XMM11_Da <= fVar13) && (fVar9 = fVar13, unaff_XMM10_Da <= fVar13)) {
      fVar9 = unaff_XMM10_Da;
    }
    fVar11 = unaff_XMM15_Da -
             (fVar14 * fVar11 * *(float *)(lVar4 + 0x4a0) +
              fVar14 * fVar10 * *(float *)(lVar4 + 0x49c) +
             fVar14 * fVar12 * *(float *)(lVar4 + 0x4a4));
    fVar10 = unaff_XMM11_Da;
    if ((unaff_XMM11_Da <= fVar11) && (fVar10 = fVar11, unaff_XMM10_Da <= fVar11)) {
      fVar10 = unaff_XMM10_Da;
    }
    fVar10 = fVar9 * fVar7 * fVar10;
    if (*(float *)(unaff_RBP + 0xaa0) <= fVar10 && fVar10 != *(float *)(unaff_RBP + 0xaa0)) {
      *(float *)(unaff_RBP + 0xaa0) = fVar10;
      unaff_R15D = iVar2;
    }
  }
  param_3 = (longlong *)param_3[3];
  while (param_3 == (longlong *)0x0) {
    if (param_2 == param_11) {
      if (param_4 == unaff_EBX) break;
      param_4 = param_4 + 1;
      param_2 = in_R11D;
      param_9._4_4_ = param_4;
    }
    else {
      param_2 = param_2 + 1;
    }
    param_3 = *(longlong **)
               ((longlong)(param_9._4_4_ * *(int *)(in_R10 + 0x98d238) + param_2) * 9 +
               *(longlong *)(in_R10 + 0x98d248));
  }
  do {
    if ((param_3 == (longlong *)0x0) ||
       (fVar7 = unaff_XMM13_Da - *(float *)((longlong)param_3 + 0xc),
       (unaff_XMM14_Da - *(float *)(param_3 + 1)) * (unaff_XMM14_Da - *(float *)(param_3 + 1)) +
       fVar7 * fVar7 <= unaff_XMM12_Da)) break;
    param_3 = (longlong *)param_3[3];
    while (param_3 == (longlong *)0x0) {
      if (param_2 == param_11) {
        if (param_4 == unaff_EBX) break;
        param_4 = param_4 + 1;
        param_2 = in_R11D;
        param_9._4_4_ = param_4;
      }
      else {
        param_2 = param_2 + 1;
      }
      param_3 = *(longlong **)
                 ((longlong)(param_9._4_4_ * *(int *)(in_R10 + 0x98d238) + param_2) * 9 +
                 *(longlong *)(in_R10 + 0x98d248));
    }
  } while( true );
  if (param_3 == (longlong *)0x0) {
    return unaff_R15D;
  }
  goto LAB_1805c8850;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1805c8b0e(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int *piVar6;
  ulonglong uVar7;
  int32_t unaff_R15D;
  float fVar8;
  int8_t auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_XMM11_Da;
  float fStackX_20;
  float fStackX_24;
  float in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  
  lVar4 = system_system_config;
  if (0 < (int)*(uint *)(unaff_RBX + 0x1b6c)) {
    piVar6 = (int *)(unaff_RBX + 0x17ac);
    uVar7 = (ulonglong)*(uint *)(unaff_RBX + 0x1b6c);
    do {
      if (-1 < *piVar6) {
        lVar2 = *(longlong *)(unaff_RBX + 0x1488);
        lVar5 = (longlong)*piVar6 * 0xa60;
        if (((*(int *)(lVar5 + 0x3608 + lVar2) == 1) &&
            (iVar1 = *(int *)(*(longlong *)(lVar5 + 0x3630 + lVar2) + 0x2498), iVar1 != -1)) &&
           (*(byte *)((longlong)iVar1 * 0x68 + 0x60 + lVar4) < 3)) {
          lVar3 = *(longlong *)(lVar5 + 0x30c0 + lVar2);
          fVar11 = *(float *)(lVar3 + 0xc) - fStackX_20;
          fVar12 = *(float *)(lVar3 + 0x10) - fStackX_24;
          fVar13 = *(float *)(lVar3 + 0x14) - in_stack_00000028;
          fVar14 = fVar12 * fVar12 + fVar11 * fVar11 + fVar13 * fVar13;
          auVar9 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
          fVar8 = auVar9._0_4_;
          fVar15 = fVar8 * 0.5 * (3.0 - fVar14 * fVar8 * fVar8);
          fVar10 = fVar15 * fVar11 * fStack0000000000000030 +
                   fVar15 * fVar12 * fStack0000000000000034 + fVar15 * fVar13 * in_stack_00000038 +
                   0.8;
          fVar8 = unaff_XMM11_Da;
          if ((unaff_XMM11_Da <= fVar10) && (fVar8 = fVar10, 1.0 <= fVar10)) {
            fVar8 = 1.0;
          }
          fVar14 = 1.0 / (fVar15 * fVar14 + 0.5);
          fVar10 = unaff_XMM11_Da;
          if ((unaff_XMM11_Da <= fVar14) && (fVar10 = fVar14, 1.0 <= fVar14)) {
            fVar10 = 1.0;
          }
          fVar12 = 0.5 - (fVar15 * fVar12 * *(float *)(lVar5 + 0x3540 + lVar2) +
                          fVar15 * fVar11 * *(float *)(lVar5 + 0x353c + lVar2) +
                         fVar15 * fVar13 * *(float *)(lVar5 + 0x3544 + lVar2));
          fVar11 = unaff_XMM11_Da;
          if ((unaff_XMM11_Da <= fVar12) && (fVar11 = fVar12, 1.0 <= fVar12)) {
            fVar11 = 1.0;
          }
          fVar11 = fVar10 * fVar8 * fVar11;
          if (*(float *)(unaff_RBP + 0xaa0) <= fVar11 && fVar11 != *(float *)(unaff_RBP + 0xaa0)) {
            unaff_R15D = *(int32_t *)(lVar5 + 0x30b0 + lVar2);
            *(float *)(unaff_RBP + 0xaa0) = fVar11;
          }
        }
      }
      piVar6 = piVar6 + 0xf;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return unaff_R15D;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1805c8d60(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar11;
  ulonglong uVar12;
  int32_t uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  int8_t auVar18 [16];
  float fVar19;
  char acStackX_8 [3];
  bool bStackX_b;
  uint uStackX_10;
  ulonglong uVar10;
  
  if ((float)(*(longlong *)(&system_error_code + (longlong)(int)param_1[0x293] * 8) - param_1[0x292]) *
      1e-05 < 0.0) {
    return (int)param_1[0x294];
  }
  iVar1 = FUN_1805c86d0();
  if (iVar1 < 0) {
FUN_1805c922e:
    param_1[0x292] = *(longlong *)(&system_error_code + (longlong)(int)param_1[0x293] * 8) + 50000;
    iVar1 = (int)param_1[0x294];
    if (iVar1 == 0) {
      uVar7 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
      uVar7 = uVar7 ^ uVar7 >> 0x11;
      uVar7 = uVar7 ^ uVar7 << 5;
      *(uint *)(param_1 + 0x272) = uVar7;
      uVar7 = uVar7 - 1 & 3;
      if (uVar7 != 0) {
        if (uVar7 == 1) {
          *(int32_t *)(param_1 + 0x294) = 0x800;
          return 0x800;
        }
        if (uVar7 == 2) {
          *(int32_t *)(param_1 + 0x294) = 0x1000;
          return 0x1000;
        }
        *(int32_t *)(param_1 + 0x294) = 0x2000;
        return 0x2000;
      }
      *(int32_t *)(param_1 + 0x294) = 0x400;
      iVar1 = 0x400;
    }
    return iVar1;
  }
  lVar8 = param_1[0x291];
  lVar11 = (longlong)iVar1 * 0xa60;
  lVar6 = *(longlong *)(lVar11 + 0x3630 + lVar8);
  if (lVar6 == 0) goto FUN_1805c922e;
  iVar1 = *(int *)(lVar6 + 0x2498);
  if (((iVar1 == -1) || (2 < *(byte *)((longlong)iVar1 * 0x68 + 0x60 + system_system_config))) ||
     (uVar7 = *(uint *)((longlong)iVar1 * 0x68 + 0x5c + system_system_config), 3 < uVar7)) {
    lVar8 = *(longlong *)(lVar11 + 0x30c0 + lVar8);
    lVar6 = *(longlong *)(*param_1 + 0x20);
    fVar17 = *(float *)(lVar8 + 0x10) - *(float *)(lVar6 + 0x10);
    fVar16 = *(float *)(lVar8 + 0xc) - *(float *)(lVar6 + 0xc);
    fVar19 = *(float *)(lVar8 + 0x14) - *(float *)(lVar6 + 0x14);
    fVar16 = fVar17 * fVar17 + fVar16 * fVar16 + fVar19 * fVar19;
    if (fVar16 <= 1.1754944e-38) {
      fVar16 = 1.1754944e-38;
    }
    auVar18 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
    fVar17 = auVar18._0_4_;
    uVar13 = 0x1000;
    if (fVar17 * 0.5 * (3.0 - fVar16 * fVar17 * fVar17) * fVar19 < 0.5) {
      uVar13 = 0x2000;
    }
    *(int32_t *)(param_1 + 0x294) = uVar13;
    lVar6 = -50000;
    lVar8 = *(longlong *)(&system_error_code + (longlong)(int)param_1[0x293] * 8);
    goto LAB_1805c920a;
  }
  uVar14 = *(uint *)(param_1 + 0x294);
  uVar15 = 5;
  uVar13 = 0x2000;
  if ((uVar14 & 0x3c00) == 0) {
    uVar14 = 9;
  }
  else {
    if ((uVar14 & 0x2000) == 0) {
      if ((uVar14 & 0x1000) == 0) {
        uVar9 = (uVar14 & 0x800 | 0x1400) >> 10;
        if ((uVar14 >> 10 & 1) != 0) {
          uVar9 = 6;
        }
      }
      else {
        uVar9 = 4;
      }
    }
    else {
      uVar9 = 5;
    }
    if (uVar9 == 4) {
      uVar14 = 0;
    }
    else if (uVar9 == 5) {
LAB_1805c8e85:
      uVar14 = 1;
    }
    else if (uVar9 == 6) {
      uVar14 = 3;
    }
    else {
      if (uVar9 != 7) goto LAB_1805c8e85;
      uVar14 = 2;
    }
  }
  if (uVar14 == uVar7) {
LAB_1805c911b:
    *(int8_t *)((longlong)param_1 + 0x14a4) = 0;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x14a4) != '\0') {
LAB_1805c8eb6:
      if (uVar7 == 0) {
        uVar15 = 4;
      }
      else if (uVar7 != 1) {
        if (uVar7 == 2) {
          uVar15 = 7;
        }
        else if (uVar7 == 3) {
          uVar15 = 6;
        }
      }
      if (uVar15 == 4) {
        uVar13 = 0x1000;
      }
      else if (uVar15 != 5) {
        if (uVar15 == 6) {
          uVar13 = 0x400;
        }
        else if (uVar15 == 7) {
          uVar13 = 0x800;
        }
      }
      *(int32_t *)(param_1 + 0x294) = uVar13;
      goto LAB_1805c911b;
    }
    fVar16 = *(float *)(*param_1 + 0x360);
    uStackX_10 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uStackX_10 = uStackX_10 ^ uStackX_10 >> 0x11;
    uStackX_10 = uStackX_10 ^ uStackX_10 << 5;
    *(uint *)(param_1 + 0x272) = uStackX_10;
    if (fVar16 <= (float)(uStackX_10 - 1) * 2.3283064e-10) goto LAB_1805c8eb6;
    lVar11 = lVar8 + 0x30c8 + lVar11;
    iVar1 = FUN_1805a0a20(lVar11,0);
    acStackX_8[0] = iVar1 != -1;
    iVar2 = FUN_1805a0a20(lVar11,1);
    acStackX_8[1] = iVar2 != -1;
    iVar3 = FUN_1805a0a20(lVar11,2);
    acStackX_8[2] = iVar3 != -1;
    iVar4 = FUN_1805a0a20(lVar11,3);
    bStackX_b = iVar4 != -1;
    uVar5 = 0;
    uVar14 = (iVar1 != -1) + 1;
    if (iVar2 == -1) {
      uVar14 = (uint)(iVar1 != -1);
    }
    uVar9 = uVar14 + 1;
    if (iVar3 == -1) {
      uVar9 = uVar14;
    }
    uVar14 = uVar9 + 1;
    if (iVar4 == -1) {
      uVar14 = uVar9;
    }
    uStackX_10 = uStackX_10 << 0xd ^ uStackX_10;
    uStackX_10 = uStackX_10 ^ uStackX_10 >> 0x11;
    uStackX_10 = uStackX_10 ^ uStackX_10 << 5;
    *(uint *)(param_1 + 0x272) = uStackX_10;
    uVar10 = (ulonglong)(uStackX_10 - 1) % (ulonglong)uVar14;
    uVar12 = uVar5;
    do {
      if ((acStackX_8[uVar5] != '\0') &&
         (uVar9 = (int)uVar10 - 1, uVar10 = (ulonglong)uVar9, uVar14 = (uint)uVar12, (int)uVar9 < 0)
         ) break;
      uVar12 = (ulonglong)((uint)uVar12 + 1);
      uVar5 = uVar5 + 1;
      uVar14 = uVar7;
    } while ((longlong)uVar5 < 4);
    if (uVar14 == 0) {
      uVar15 = 4;
    }
    else if (uVar14 != 1) {
      if (uVar14 == 2) {
        uVar15 = 7;
      }
      else if (uVar14 == 3) {
        uVar15 = 6;
      }
    }
    if (uVar15 == 4) {
      uVar13 = 0x1000;
    }
    else if (uVar15 != 5) {
      if (uVar15 == 6) {
        uVar13 = 0x400;
      }
      else if (uVar15 == 7) {
        uVar13 = 0x800;
      }
    }
    *(int32_t *)(param_1 + 0x294) = uVar13;
    if (((*(char *)((longlong)param_1 + 0x14a4) == '\0') &&
        (iVar1 = *(int *)(*(longlong *)(*param_1 + 0x590) + 0x2498), iVar1 != -1)) &&
       ((0 < *(int *)((longlong)iVar1 * 0x68 + 0x58 + system_system_config) &&
        (*(int *)((longlong)iVar1 * 0x68 + 0x58 + system_system_config) < 0xf)))) {
      *(int8_t *)((longlong)param_1 + 0x14a4) = 1;
    }
  }
  lVar8 = *(longlong *)(&system_error_code + (longlong)(int)param_1[0x293] * 8);
  lVar6 = (longlong)(*(float *)(*param_1 + 0x2f4) * 100000.0 - 150000.0);
LAB_1805c920a:
  param_1[0x292] = lVar8 - lVar6;
  return (int)param_1[0x294];
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1805c8dab(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar11;
  ulonglong uVar12;
  int32_t uVar13;
  uint uVar14;
  uint uVar15;
  longlong unaff_R14;
  longlong *unaff_R15;
  float fVar16;
  float fVar17;
  int8_t auVar18 [16];
  float fVar19;
  int8_t in_stack_00000060;
  int8_t uStack0000000000000061;
  int8_t uStack0000000000000062;
  bool bStack0000000000000063;
  uint in_stack_00000068;
  ulonglong uVar10;
  
  iVar1 = FUN_1805c86d0();
  if (iVar1 < 0) {
FUN_1805c922e:
    unaff_R15[0x292] = *(longlong *)(unaff_R14 + (longlong)(int)unaff_R15[0x293] * 8) + 50000;
    iVar1 = (int)unaff_R15[0x294];
    if (iVar1 == 0) {
      uVar7 = *(uint *)(unaff_R15 + 0x272) << 0xd ^ *(uint *)(unaff_R15 + 0x272);
      uVar7 = uVar7 ^ uVar7 >> 0x11;
      uVar7 = uVar7 ^ uVar7 << 5;
      *(uint *)(unaff_R15 + 0x272) = uVar7;
      uVar7 = uVar7 - 1 & 3;
      if (uVar7 != 0) {
        if (uVar7 == 1) {
          *(int32_t *)(unaff_R15 + 0x294) = 0x800;
          return 0x800;
        }
        if (uVar7 == 2) {
          *(int32_t *)(unaff_R15 + 0x294) = 0x1000;
          return 0x1000;
        }
        *(int32_t *)(unaff_R15 + 0x294) = 0x2000;
        return 0x2000;
      }
      *(int32_t *)(unaff_R15 + 0x294) = 0x400;
      iVar1 = 0x400;
    }
    return iVar1;
  }
  lVar8 = unaff_R15[0x291];
  lVar11 = (longlong)iVar1 * 0xa60;
  lVar6 = *(longlong *)(lVar11 + 0x3630 + lVar8);
  if (lVar6 == 0) goto FUN_1805c922e;
  iVar1 = *(int *)(lVar6 + 0x2498);
  if (((iVar1 == -1) || (2 < *(byte *)((longlong)iVar1 * 0x68 + 0x60 + system_system_config))) ||
     (uVar7 = *(uint *)((longlong)iVar1 * 0x68 + 0x5c + system_system_config), 3 < uVar7)) {
    lVar8 = *(longlong *)(lVar11 + 0x30c0 + lVar8);
    lVar6 = *(longlong *)(*unaff_R15 + 0x20);
    fVar17 = *(float *)(lVar8 + 0x10) - *(float *)(lVar6 + 0x10);
    fVar16 = *(float *)(lVar8 + 0xc) - *(float *)(lVar6 + 0xc);
    fVar19 = *(float *)(lVar8 + 0x14) - *(float *)(lVar6 + 0x14);
    fVar16 = fVar17 * fVar17 + fVar16 * fVar16 + fVar19 * fVar19;
    if (fVar16 <= 1.1754944e-38) {
      fVar16 = 1.1754944e-38;
    }
    auVar18 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
    fVar17 = auVar18._0_4_;
    uVar13 = 0x1000;
    if (fVar17 * 0.5 * (3.0 - fVar16 * fVar17 * fVar17) * fVar19 < 0.5) {
      uVar13 = 0x2000;
    }
    *(int32_t *)(unaff_R15 + 0x294) = uVar13;
    lVar6 = -50000;
    lVar8 = *(longlong *)(unaff_R14 + (longlong)(int)unaff_R15[0x293] * 8);
    goto LAB_1805c920a;
  }
  uVar14 = *(uint *)(unaff_R15 + 0x294);
  uVar15 = 5;
  uVar13 = 0x2000;
  if ((uVar14 & 0x3c00) == 0) {
    uVar14 = 9;
  }
  else {
    if ((uVar14 & 0x2000) == 0) {
      if ((uVar14 & 0x1000) == 0) {
        uVar9 = (uVar14 & 0x800 | 0x1400) >> 10;
        if ((uVar14 >> 10 & 1) != 0) {
          uVar9 = 6;
        }
      }
      else {
        uVar9 = 4;
      }
    }
    else {
      uVar9 = 5;
    }
    if (uVar9 == 4) {
      uVar14 = 0;
    }
    else if (uVar9 == 5) {
LAB_1805c8e85:
      uVar14 = 1;
    }
    else if (uVar9 == 6) {
      uVar14 = 3;
    }
    else {
      if (uVar9 != 7) goto LAB_1805c8e85;
      uVar14 = 2;
    }
  }
  if (uVar14 == uVar7) {
LAB_1805c911b:
    *(int8_t *)((longlong)unaff_R15 + 0x14a4) = 0;
  }
  else {
    if (*(char *)((longlong)unaff_R15 + 0x14a4) != '\0') {
LAB_1805c8eb6:
      if (uVar7 == 0) {
        uVar15 = 4;
      }
      else if (uVar7 != 1) {
        if (uVar7 == 2) {
          uVar15 = 7;
        }
        else if (uVar7 == 3) {
          uVar15 = 6;
        }
      }
      if (uVar15 == 4) {
        uVar13 = 0x1000;
      }
      else if (uVar15 != 5) {
        if (uVar15 == 6) {
          uVar13 = 0x400;
        }
        else if (uVar15 == 7) {
          uVar13 = 0x800;
        }
      }
      *(int32_t *)(unaff_R15 + 0x294) = uVar13;
      goto LAB_1805c911b;
    }
    fVar16 = *(float *)(*unaff_R15 + 0x360);
    in_stack_00000068 = *(uint *)(unaff_R15 + 0x272) << 0xd ^ *(uint *)(unaff_R15 + 0x272);
    in_stack_00000068 = in_stack_00000068 ^ in_stack_00000068 >> 0x11;
    in_stack_00000068 = in_stack_00000068 ^ in_stack_00000068 << 5;
    *(uint *)(unaff_R15 + 0x272) = in_stack_00000068;
    if (fVar16 <= (float)(in_stack_00000068 - 1) * 2.3283064e-10) goto LAB_1805c8eb6;
    lVar11 = lVar8 + 0x30c8 + lVar11;
    iVar1 = FUN_1805a0a20(lVar11,0);
    in_stack_00000060 = iVar1 != -1;
    iVar2 = FUN_1805a0a20(lVar11,1);
    uStack0000000000000061 = iVar2 != -1;
    iVar3 = FUN_1805a0a20(lVar11,2);
    uStack0000000000000062 = iVar3 != -1;
    iVar4 = FUN_1805a0a20(lVar11,3);
    bStack0000000000000063 = iVar4 != -1;
    uVar5 = 0;
    uVar14 = (iVar1 != -1) + 1;
    if (iVar2 == -1) {
      uVar14 = (uint)(iVar1 != -1);
    }
    uVar9 = uVar14 + 1;
    if (iVar3 == -1) {
      uVar9 = uVar14;
    }
    uVar14 = uVar9 + 1;
    if (iVar4 == -1) {
      uVar14 = uVar9;
    }
    in_stack_00000068 = in_stack_00000068 << 0xd ^ in_stack_00000068;
    in_stack_00000068 = in_stack_00000068 ^ in_stack_00000068 >> 0x11;
    in_stack_00000068 = in_stack_00000068 ^ in_stack_00000068 << 5;
    *(uint *)(unaff_R15 + 0x272) = in_stack_00000068;
    uVar10 = (ulonglong)(in_stack_00000068 - 1) % (ulonglong)uVar14;
    uVar12 = uVar5;
    do {
      if (((&stack0x00000060)[uVar5] != '\0') &&
         (uVar9 = (int)uVar10 - 1, uVar10 = (ulonglong)uVar9, uVar14 = (uint)uVar12, (int)uVar9 < 0)
         ) break;
      uVar12 = (ulonglong)((uint)uVar12 + 1);
      uVar5 = uVar5 + 1;
      uVar14 = uVar7;
    } while ((longlong)uVar5 < 4);
    if (uVar14 == 0) {
      uVar15 = 4;
    }
    else if (uVar14 != 1) {
      if (uVar14 == 2) {
        uVar15 = 7;
      }
      else if (uVar14 == 3) {
        uVar15 = 6;
      }
    }
    if (uVar15 == 4) {
      uVar13 = 0x1000;
    }
    else if (uVar15 != 5) {
      if (uVar15 == 6) {
        uVar13 = 0x400;
      }
      else if (uVar15 == 7) {
        uVar13 = 0x800;
      }
    }
    *(int32_t *)(unaff_R15 + 0x294) = uVar13;
    if (((*(char *)((longlong)unaff_R15 + 0x14a4) == '\0') &&
        (iVar1 = *(int *)(*(longlong *)(*unaff_R15 + 0x590) + 0x2498), iVar1 != -1)) &&
       ((0 < *(int *)((longlong)iVar1 * 0x68 + 0x58 + system_system_config) &&
        (*(int *)((longlong)iVar1 * 0x68 + 0x58 + system_system_config) < 0xf)))) {
      *(int8_t *)((longlong)unaff_R15 + 0x14a4) = 1;
    }
  }
  lVar8 = *(longlong *)(&system_error_code + (longlong)(int)unaff_R15[0x293] * 8);
  lVar6 = (longlong)(*(float *)(*unaff_R15 + 0x2f4) * 100000.0 - 150000.0);
LAB_1805c920a:
  unaff_R15[0x292] = lVar8 - lVar6;
  return (int)unaff_R15[0x294];
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1805c8f2e(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar9;
  int32_t unaff_R12D;
  int unaff_R13D;
  int unaff_R14D;
  longlong *unaff_R15;
  int8_t in_stack_00000060;
  int8_t uStack0000000000000061;
  int8_t uStack0000000000000062;
  bool bStack0000000000000063;
  uint in_stack_00000068;
  ulonglong uVar8;
  
  param_3 = param_4 + 0x30c8 + param_3;
  iVar2 = FUN_1805a0a20(param_3,0);
  in_stack_00000060 = iVar2 != -1;
  iVar3 = FUN_1805a0a20(param_3,1);
  uStack0000000000000061 = iVar3 != -1;
  iVar4 = FUN_1805a0a20(param_3,2);
  uStack0000000000000062 = iVar4 != -1;
  iVar5 = FUN_1805a0a20(param_3,3);
  bStack0000000000000063 = iVar5 != -1;
  uVar6 = 0;
  uVar7 = (iVar2 != -1) + 1;
  if (iVar3 == -1) {
    uVar7 = (uint)(iVar2 != -1);
  }
  uVar1 = uVar7 + 1;
  if (iVar4 == -1) {
    uVar1 = uVar7;
  }
  uVar7 = uVar1 + 1;
  if (iVar5 == -1) {
    uVar7 = uVar1;
  }
  in_stack_00000068 = in_stack_00000068 << 0xd ^ in_stack_00000068;
  in_stack_00000068 = in_stack_00000068 ^ in_stack_00000068 >> 0x11;
  in_stack_00000068 = in_stack_00000068 ^ in_stack_00000068 << 5;
  *(uint *)(unaff_R15 + 0x272) = in_stack_00000068;
  uVar8 = (ulonglong)(in_stack_00000068 - 1) % (ulonglong)uVar7;
  uVar9 = uVar6;
  do {
    if (((&stack0x00000060)[uVar6] != '\0') &&
       (uVar7 = (int)uVar8 - 1, uVar8 = (ulonglong)uVar7, iVar2 = (int)uVar9, (int)uVar7 < 0))
    break;
    uVar9 = (ulonglong)((int)uVar9 + 1);
    uVar6 = uVar6 + 1;
    iVar2 = unaff_R13D;
  } while ((longlong)uVar6 < 4);
  if (iVar2 == 0) {
    unaff_R14D = 4;
  }
  else if (iVar2 != 1) {
    if (iVar2 == 2) {
      unaff_R14D = 7;
    }
    else if (iVar2 == 3) {
      unaff_R14D = 6;
    }
  }
  if (unaff_R14D == 4) {
    unaff_R12D = 0x1000;
  }
  else if (unaff_R14D != 5) {
    if (unaff_R14D == 6) {
      unaff_R12D = 0x400;
    }
    else if (unaff_R14D == 7) {
      unaff_R12D = 0x800;
    }
  }
  *(int32_t *)(unaff_R15 + 0x294) = unaff_R12D;
  if ((((*(char *)((longlong)unaff_R15 + 0x14a4) == '\0') &&
       (iVar2 = *(int *)(*(longlong *)(*unaff_R15 + 0x590) + 0x2498), iVar2 != -1)) &&
      (0 < *(int *)((longlong)iVar2 * 0x68 + 0x58 + system_system_config))) &&
     (*(int *)((longlong)iVar2 * 0x68 + 0x58 + system_system_config) < 0xf)) {
    *(int8_t *)((longlong)unaff_R15 + 0x14a4) = 1;
  }
  unaff_R15[0x292] =
       *(longlong *)(&system_error_code + (longlong)(int)unaff_R15[0x293] * 8) -
       (longlong)(*(float *)(*unaff_R15 + 0x2f4) * 100000.0 - 150000.0);
  return (int)unaff_R15[0x294];
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1805c9010(uint64_t param_1,int param_2,uint64_t param_3,int param_4)

{
  longlong in_RAX;
  int32_t unaff_R12D;
  int unaff_R13D;
  int iVar1;
  int unaff_R14D;
  longlong *unaff_R15;
  
  do {
    if (((&stack0x00000060)[in_RAX] != '\0') &&
       (param_2 = param_2 + -1, iVar1 = param_4, param_2 < 0)) break;
    param_4 = param_4 + 1;
    in_RAX = in_RAX + 1;
    iVar1 = unaff_R13D;
  } while (in_RAX < 4);
  if (iVar1 == 0) {
    unaff_R14D = 4;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      unaff_R14D = 7;
    }
    else if (iVar1 == 3) {
      unaff_R14D = 6;
    }
  }
  if (unaff_R14D == 4) {
    unaff_R12D = 0x1000;
  }
  else if (unaff_R14D != 5) {
    if (unaff_R14D == 6) {
      unaff_R12D = 0x400;
    }
    else if (unaff_R14D == 7) {
      unaff_R12D = 0x800;
    }
  }
  *(int32_t *)(unaff_R15 + 0x294) = unaff_R12D;
  if ((((*(char *)((longlong)unaff_R15 + 0x14a4) == '\0') &&
       (iVar1 = *(int *)(*(longlong *)(*unaff_R15 + 0x590) + 0x2498), iVar1 != -1)) &&
      (0 < *(int *)((longlong)iVar1 * 0x68 + 0x58 + system_system_config))) &&
     (*(int *)((longlong)iVar1 * 0x68 + 0x58 + system_system_config) < 0xf)) {
    *(int8_t *)((longlong)unaff_R15 + 0x14a4) = 1;
  }
  unaff_R15[0x292] =
       *(longlong *)(&system_error_code + (longlong)(int)unaff_R15[0x293] * 8) -
       (longlong)(*(float *)(*unaff_R15 + 0x2f4) * 100000.0 - 150000.0);
  return (int)unaff_R15[0x294];
}



int FUN_1805c922e(void)

{
  uint uVar1;
  int iVar2;
  longlong unaff_R14;
  longlong unaff_R15;
  
  *(longlong *)(unaff_R15 + 0x1490) =
       *(longlong *)(unaff_R14 + (longlong)*(int *)(unaff_R15 + 0x1498) * 8) + 50000;
  iVar2 = *(int *)(unaff_R15 + 0x14a0);
  if (iVar2 == 0) {
    uVar1 = *(uint *)(unaff_R15 + 0x1390) << 0xd ^ *(uint *)(unaff_R15 + 0x1390);
    uVar1 = uVar1 ^ uVar1 >> 0x11;
    uVar1 = uVar1 ^ uVar1 << 5;
    *(uint *)(unaff_R15 + 0x1390) = uVar1;
    uVar1 = uVar1 - 1 & 3;
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        *(int32_t *)(unaff_R15 + 0x14a0) = 0x800;
        return 0x800;
      }
      if (uVar1 != 2) {
        *(int32_t *)(unaff_R15 + 0x14a0) = 0x2000;
        return 0x2000;
      }
      *(int32_t *)(unaff_R15 + 0x14a0) = 0x1000;
      return 0x1000;
    }
    *(int32_t *)(unaff_R15 + 0x14a0) = 0x400;
    iVar2 = 0x400;
  }
  return iVar2;
}



uint64_t FUN_1805c92ae(void)

{
  longlong unaff_R15;
  
  *(int32_t *)(unaff_R15 + 0x14a0) = 0x1000;
  return 0x1000;
}



uint64_t FUN_1805c92cc(void)

{
  longlong unaff_R15;
  
  *(int32_t *)(unaff_R15 + 0x14a0) = 0x800;
  return 0x800;
}



uint64_t FUN_1805c92ee(void)

{
  longlong unaff_R15;
  
  *(int32_t *)(unaff_R15 + 0x14a0) = 0x400;
  return 0x400;
}






// 函数: void FUN_1805c9310(longlong *param_1,int param_2,int param_3,int param_4)
void FUN_1805c9310(longlong *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  short *psVar11;
  int iVar12;
  ulonglong uVar13;
  
  uVar13 = 0xffffffff;
  lVar6 = *(longlong *)(*param_1 + 0x8f8);
  bVar7 = 0;
  lVar10 = (longlong)param_3;
  iVar1 = *(int *)(lVar6 + 0x9e0);
  iVar12 = -1;
  if (iVar1 == param_3) {
    bVar3 = false;
    if (-1 < param_3) {
      if (*(int *)(lVar6 + 0xa08) == -1) {
        iVar5 = *(int *)(*(longlong *)(lVar6 + 0x9e8) + 0xf0);
      }
      else {
        iVar5 = *(int *)(lVar6 + 0xa10);
      }
      bVar3 = false;
      if (iVar5 != param_4) goto LAB_1805c937e;
    }
  }
  else {
LAB_1805c937e:
    *(int32_t *)(param_1 + 0x436) = 0xffffffff;
    iVar5 = -2;
    if (param_3 != 4) {
      iVar5 = param_3;
    }
    *(int *)(param_1 + 0x435) = iVar5;
    bVar3 = false;
    if (-1 < param_3) {
      bVar3 = true;
      bVar7 = *(byte *)((longlong)param_4 * 0xa0 + 0x50 +
                       *(longlong *)(lVar10 * 0x1f8 + 0xd8 + *(longlong *)(*param_1 + 0x8f8))) >> 4
              & 1;
      if (param_4 != *(int *)(lVar10 * 0x1f8 + 0xf8 + *(longlong *)(*param_1 + 0x8f8))) {
        *(int *)(param_1 + 0x436) = param_4;
        *(int32_t *)(param_1 + 0x277) = 0;
      }
    }
  }
  if ((param_3 == -1) && (param_4 == -1)) {
LAB_1805c944c:
    if (bVar3) {
LAB_1805c94b7:
      iVar12 = -1;
      if (bVar7 == 0) {
        lVar6 = *(longlong *)(*param_1 + 0x8f8);
        cVar4 = FUN_18058f970(lVar6 + 0x7e8);
        if ((cVar4 == '\0') ||
           ((*(uint *)((longlong)*(int *)(lVar6 + 0x8d8) * 0xa0 + 0x58 +
                      *(longlong *)(lVar6 + 0x8b8)) & 0x80000) == 0)) {
          uVar9 = 0;
          psVar11 = (short *)(lVar6 + 0x10);
          do {
            if (0 < *(int *)(psVar11 + 0x14)) {
              iVar1 = *(int *)(psVar11 + 0x74);
              lVar6 = *(longlong *)(psVar11 + 100);
              uVar2 = *(ulonglong *)((longlong)iVar1 * 0xa0 + 0x50 + lVar6);
              if (((((uVar2 >> 9 & 1) == 0) || (0 < *psVar11)) &&
                  ((cVar4 = func_0x000180534fb0(psVar11 + -4), cVar4 == '\0' || (0 < *psVar11)))) &&
                 (((*(uint *)((longlong)iVar1 * 0xa0 + 0x58 + lVar6) & 0x80000) != 0 &&
                  (uVar13 = uVar13 & 0xffffffff, (uVar2 >> 0x1c & 1) != 0)))) {
                uVar13 = uVar9;
              }
            }
            iVar12 = (int)uVar13;
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
            psVar11 = psVar11 + 0xfc;
          } while ((int)uVar8 < 4);
        }
        else {
          iVar12 = -2;
        }
      }
    }
    else {
LAB_1805c9451:
      if ((*(uint *)(param_1 + 2) & 0x20) == 0) {
        lVar6 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x8f8) + 0x9e8);
        param_1[0x15] = lVar6;
        *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x20;
      }
      else {
        lVar6 = param_1[0x15];
      }
      if ((lVar6 == 0) ||
         (iVar12 = -1,
         (*(byte *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar6 + 0xd0)) >>
          4 & 1) == 0)) {
        bVar7 = 0;
        goto LAB_1805c94b7;
      }
    }
    if (iVar12 == *(int *)(*(longlong *)(*param_1 + 0x8f8) + 0x9e4)) goto LAB_1805c9594;
  }
  else {
    if ((!bVar3) && (lVar10 = (longlong)iVar1, iVar1 < 0)) goto LAB_1805c9451;
    if ((*(ulonglong *)
          (*(longlong *)(lVar10 * 0x1f8 + 0xd8 + *(longlong *)(*param_1 + 0x8f8)) + 0x50 +
          (longlong)param_4 * 0xa0) >> 4 & 1) == 0) goto LAB_1805c944c;
    if (*(int *)(*(longlong *)(*param_1 + 0x8f8) + 0x9e4) < 0) goto LAB_1805c9594;
  }
  *(int *)((longlong)param_1 + 0x21ac) = iVar12;
LAB_1805c9594:
  if (*(int *)((longlong)param_1 + 0x215c) != param_2) {
    FUN_180508010(param_1);
    *(int32_t *)((longlong)param_1 + 0x178c) = 0;
    if (*(int *)(*param_1 + 0x1fc) - 1U < 2) {
      *(uint *)((longlong)param_1 + 0x158c) =
           *(uint *)((longlong)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
    }
    *(int *)((longlong)param_1 + 0x215c) = param_2;
  }
  return;
}






