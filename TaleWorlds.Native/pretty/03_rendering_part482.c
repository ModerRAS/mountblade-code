#define StringProcessor System_StringProcessor  // 字符串处理器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part482.c - 3 个函数

// 函数: void FUN_180526646(void)
void FUN_180526646(void)

{
  int64_t unaff_RBX;
  
  FUN_18051b660();
  FUN_180510e50();
  FUN_1805113f0();
  FUN_1805af580();
  FUN_18052f590();
  FUN_180526710();
  (**(code **)**(uint64_t **)(unaff_RBX + 0x590))();
  if (*(char *)(unaff_RBX + 0x984) != '\0') {
    if (-1 < *(int *)(unaff_RBX + 0x564)) {
      func_0x00018051a670();
    }
    FUN_18051b210();
    FUN_18051b660();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180526710(int64_t param_1,float param_2)
void FUN_180526710(int64_t param_1,float param_2)

{
  int64_t *plVar1;
  char cVar2;
  int8_t uVar3;
  int iVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int iVar12;
  byte bVar13;
  int32_t extraout_XMM0_Da;
  float fVar14;
  float fVar15;
  int8_t auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  int32_t uVar20;
  uint64_t uStackX_8;
  float fStack_a8;
  float fStack_a4;
  int32_t uStack_98;
  int iStack_94;
  uint64_t uStack_90;
  int64_t lStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  int32_t uStack_70;
  int8_t uStack_6c;
  
  if (*(int64_t *)(param_1 + 0x590) == 0) {
    return;
  }
  lVar11 = *(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8);
  if (lVar11 == 0) {
    return;
  }
  lVar11 = *(int64_t *)(lVar11 + 0x260);
  if (lVar11 == 0) {
    return;
  }
  if ((ushort)(*(short *)(lVar11 + 0x40) - 2U) < 3) {
    return;
  }
  bVar13 = (byte)((uint)*(int32_t *)(param_1 + 0x564) >> 0x1f) ^ 1;
  FUN_18052b130(param_1,&fStack_a8);
  lVar11 = *(int64_t *)(param_1 + 0x20);
  fVar19 = 1.0 / *(float *)(*(int64_t *)(param_1 + 0x6d8) + 0x8c0);
  uStackX_8._4_4_ = (float)((uint64_t)*(uint64_t *)(lVar11 + 0x21c) >> 0x20);
  uStackX_8._4_4_ = fStack_a4 * (1.0 / param_2) + uStackX_8._4_4_;
  uStackX_8._0_4_ = (float)*(uint64_t *)(lVar11 + 0x21c);
  uStackX_8._0_4_ = fStack_a8 * (1.0 / param_2) + (float)uStackX_8;
  fVar17 = (uStackX_8._4_4_ * *(float *)(param_1 + 0x534) +
           (float)uStackX_8 * *(float *)(param_1 + 0x530)) * fVar19;
  fVar18 = (uStackX_8._4_4_ * *(float *)(param_1 + 0x524) +
           (float)uStackX_8 * *(float *)(param_1 + 0x520)) * fVar19;
  uStackX_8 = CONCAT44(fVar17,fVar18);
  fVar14 = fVar17 * fVar17 + fVar18 * fVar18;
  if (396.00998 < fVar14) {
    auVar16 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
    fVar15 = auVar16._0_4_;
    fVar14 = fVar15 * 0.5 * (3.0 - fVar14 * fVar15 * fVar15);
    fVar18 = fVar18 * fVar14 * 19.9;
    fVar17 = fVar17 * fVar14 * 19.9;
    uStackX_8 = CONCAT44(fVar17,fVar18);
  }
  lVar10 = *(int64_t *)(param_1 + 0x590);
  *(uint64_t *)(lVar10 + 0x90) = uStackX_8;
  uVar6 = uStackX_8;
  if (fVar17 * fVar17 + fVar18 * fVar18 < 0.010000001) {
    uVar6 = 0;
  }
  *(uint64_t *)(lVar10 + 0x90) = uVar6;
  if ((*(uint *)(param_1 + 0x56c) & 0x800) != 0) {
    if (*(int *)(param_1 + 0x5f8) == 0) {
      uStackX_8._0_4_ = *(float *)(lVar11 + 0x54) * *(float *)(lVar11 + 0x60);
      uStackX_8._4_4_ = *(float *)(lVar11 + 0x54) * *(float *)(lVar11 + 100);
    }
    else {
      uStackX_8._0_4_ = (float)*(uint64_t *)(lVar11 + 0x1c);
      uStackX_8._4_4_ = (float)((uint64_t)*(uint64_t *)(lVar11 + 0x1c) >> 0x20);
    }
    uStackX_8 = CONCAT44(uStackX_8._4_4_ * fVar19,(float)uStackX_8 * fVar19);
    *(uint64_t *)(*(int64_t *)(param_1 + 0x590) + 0x25b0) = uStackX_8;
    if ((*(uint *)(lVar11 + 8) >> 5 & 1) == 0) {
LAB_180526991:
      fVar14 = 0.0;
    }
    else {
      fVar14 = *(float *)(lVar11 + 0x128) - *(float *)(lVar11 + 0x34);
      if (fVar14 <= 3.1415927) {
        if (fVar14 < -3.1415927) {
          fVar14 = fVar14 + 6.2831855;
        }
      }
      else {
        fVar14 = fVar14 + -6.2831855;
      }
      if (ABS(fVar14) < 0.0001) goto LAB_180526991;
    }
    *(float *)(*(int64_t *)(param_1 + 0x590) + 0x25b8) = fVar14;
    *(int32_t *)(*(int64_t *)(param_1 + 0x590) + 0x25bc) = *(int32_t *)(lVar11 + 0x150);
  }
  *(int32_t *)(*(int64_t *)(param_1 + 0x590) + 0x98) = *(int32_t *)(lVar11 + 0x138);
  lVar10 = *(int64_t *)(param_1 + 0x590);
  lVar7 = (int64_t)*(int *)(lVar10 + 0x2450);
  if ((*(int *)(lVar10 + 0x2450) == -1) ||
     (((*(int *)(lVar7 * 0x68 + 0x58 + render_system_config) < 0x18 ||
       (0x1b < *(int *)(lVar7 * 0x68 + 0x58 + render_system_config))) &&
      (*(int *)(lVar7 * 0x68 + 0x58 + render_system_config) != 0x25)))) {
    if (*(int *)(param_1 + 0x5f8) == 0) {
      uVar8 = func_0x000180534e20(lVar10,1);
      uVar9 = func_0x000180534e20(extraout_XMM0_Da,0);
      if (((uVar9 | uVar8) >> 0x18 & 1) == 0) goto LAB_180526a29;
    }
    *(bool *)(lVar10 + 0xb8) = *(float *)(lVar11 + 0x28) != 0.0;
    *(bool *)(*(int64_t *)(param_1 + 0x590) + 0xb9) = *(float *)(lVar11 + 0x24) != 0.0;
    if ((*(uint *)(param_1 + 0x56c) & 0x800) != 0) {
      func_0x00018057a770(*(uint64_t *)(param_1 + 0x590),
                          *(float *)(lVar11 + 0x24) * *(float *)(lVar11 + 0x24) +
                          *(float *)(lVar11 + 0x28) * *(float *)(lVar11 + 0x28) +
                          *(float *)(lVar11 + 0x2c) * *(float *)(lVar11 + 0x2c));
    }
  }
  else {
LAB_180526a29:
    *(bool *)(lVar10 + 0xb8) = *(float *)(lVar11 + 0x38) != 0.0;
    *(bool *)(*(int64_t *)(param_1 + 0x590) + 0xb9) = *(float *)(lVar11 + 0x3c) != 0.0;
    if (*(float *)(lVar11 + 0x134) == 0.0) {
      *(int8_t *)(*(int64_t *)(param_1 + 0x590) + 0xba) = 0;
    }
    else {
      *(int8_t *)(*(int64_t *)(param_1 + 0x590) + 0xba) = 1;
    }
  }
  if ((ushort)(*(short *)(*(int64_t *)(param_1 + 0x658) + 0x40) - 2U) < 3) {
    return;
  }
  iVar12 = 0;
  if (((*(uint *)(param_1 + 0x56c) & 0x800) != 0) &&
     (0.0 < (float)(*(int64_t *)
                     (&system_error_code +
                     (int64_t)*(int *)(*(int64_t *)(param_1 + 0x728) + 0x590) * 8) -
                   *(int64_t *)(*(int64_t *)(param_1 + 0x728) + 0x588)) * 1e-05)) {
    lVar11 = *(int64_t *)(param_1 + 0x590);
    *(int32_t *)(lVar11 + 0xa414) = 0;
    *(int32_t *)(lVar11 + 0xa418) = 0x40400000;
    *(int64_t *)(*(int64_t *)(param_1 + 0x728) + 0x588) =
         *(int64_t *)
          (&system_error_code + (int64_t)*(int *)(*(int64_t *)(param_1 + 0x728) + 0x590) * 8) +
         0x9184e700000;
    if (((*(ushort *)(*(int64_t *)(param_1 + 0x728) + 0x5ac) |
         *(ushort *)(*(int64_t *)(param_1 + 0x728) + 0x5aa)) & 0x33ff) == 0) {
      lVar11 = *(int64_t *)(param_1 + 0x590);
      *(uint64_t *)(lVar11 + 0x3440) = 0;
      *(uint64_t *)(lVar11 + 0x3448) = 0;
    }
  }
  uVar20 = 0;
  if (bVar13 == 0) {
    if ((*(uint *)(param_1 + 0x56c) & 0x800) != 0) goto LAB_180526d2c;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x564);
    lVar11 = *(int64_t *)(param_1 + 0x8d8);
    plVar1 = *(int64_t **)((int64_t)iVar4 * 0xa60 + 0x3630 + lVar11);
    if ((plVar1 != (int64_t *)0x0) && ((int)plVar1[0x48a] != -1)) {
      uVar20 = (**(code **)(*plVar1 + 0x90))(plVar1,0);
      iVar4 = *(int *)(param_1 + 0x564);
      lVar11 = *(int64_t *)(param_1 + 0x8d8);
    }
    if (*(int64_t *)((int64_t)iVar4 * 0xa60 + 0x3630 + lVar11) != 0) {
      uStackX_8 = CONCAT44(uStackX_8._4_4_,0x3f800000);
      iVar4 = FUN_18050d480(param_1,&uStackX_8);
      if (*(int *)(*(int64_t *)(param_1 + 0x590) + 0x2450) != iVar4) {
        lStack_88 = 0;
        uStack_80 = 0xbe4ccccd3f800000;
        uStack_70 = 0x1000000;
        uStack_78 = 0x3ecccccdbe4ccccd;
        uStack_6c = 0;
        uStack_98 = 0;
        iStack_94 = -1;
        uStack_90 = 0x2002;
        FUN_18051ec50(param_1,&uStack_98);
        if (iVar4 != -1) {
          uStack_90 = 0;
          lStack_88 = 0;
          uStack_70 = 0x1000000;
          uStack_80 = CONCAT44(0xbe4ccccd,(int)uStackX_8);
          uStack_78 = 0x3ecccccdbe4ccccd;
          uStack_6c = 0;
          uStack_98 = 0;
          iStack_94 = iVar4;
          FUN_18051ec50(param_1,&uStack_98);
        }
      }
    }
    if (((*(uint *)(param_1 + 0x56c) & 0x800) != 0) &&
       (*(int *)(*(int64_t *)(param_1 + 0x590) + 0x8228) < 0)) {
LAB_180526d2c:
      func_0x0001805a7480(param_1 + 0x28);
    }
  }
  if ((((system_status_flag != 1) && (system_status_flag != 4)) &&
      ((*(uint *)(param_1 + 0x56c) & 0x4000) != 0)) &&
     ((lVar11 = *(int64_t *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e8), lVar11 != 0 &&
      ((*(byte *)((int64_t)
                  *(int *)((int64_t)*(int *)(lVar11 + 0xf0) * 0xa0 + 100 +
                          *(int64_t *)(lVar11 + 0xd0)) * 0x170 + 0x140 + render_system_config) & 0x10) !=
       0)))) {
    cVar2 = StringProcessor(param_1 + 0x28,&uStackX_8);
    if (cVar2 == '\0') {
LAB_180526f68:
      lVar10 = *(int64_t *)(param_1 + 0x8f8);
      uVar5 = FUN_180590480(lVar11,0,*(int32_t *)(param_1 + 0x56c),bVar13,
                            (byte)((uint)*(int32_t *)(lVar10 + 0x9e4) >> 0x1f) ^ 1,0);
      if ((char)uStackX_8 != '\0') {
        *(int32_t *)(lVar10 + 0xa14) = *(int32_t *)(lVar11 + 0xf0);
      }
LAB_180526faa:
      *(int32_t *)(param_1 + 0x2c0) = uVar5;
    }
    else {
      lVar10 = *(int64_t *)(*(int64_t *)(param_1 + 0x8f8) + 0x9f0);
      lVar7 = (int64_t)
              *(int *)((int64_t)*(int *)(lVar11 + 0xf0) * 0xa0 + 100 + *(int64_t *)(lVar11 + 0xd0)
                      ) * 0x170 + render_system_config;
      uVar3 = func_0x000180525320(param_1);
      if (lVar10 == 0) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = *(int32_t *)
                 ((int64_t)*(int *)(lVar10 + 0xf0) * 0xa0 + 100 + *(int64_t *)(lVar10 + 0xd0));
      }
      lVar10 = FUN_18054f900(lVar7,9,bVar13,uVar5,uVar3);
      if (lVar10 == 0) goto LAB_180526f68;
      iVar4 = *(int *)(*(int64_t *)(param_1 + 0x590) + 0x2498);
      if (*(int *)(lVar10 + 0x1c) != iVar4) {
        if (iVar4 != -1) {
          iVar12 = *(int *)((int64_t)iVar4 * 0x68 + 0x58 + render_system_config);
        }
        uStack_90 = 0;
        uStack_70 = 0x1000000;
        uStack_6c = 0;
        uStack_98 = 1;
        uStack_80 = 0xbe4ccccd3f800000;
        uStack_78 = 0x3ecccccdbe4ccccd;
        if (bVar13 == 0) {
          fVar14 = 0.0;
        }
        else {
          fVar14 = *(float *)(param_1 + 0x3bc);
          if (0.05 <= fVar14) {
            if (0.95 <= fVar14) {
              fVar14 = 0.95;
            }
          }
          else {
            fVar14 = 0.05;
          }
        }
        lStack_88 = (uint64_t)(uint)fVar14 << 0x20;
        iStack_94 = *(int *)(lVar10 + 0x1c);
        cVar2 = FUN_18051ec50(param_1,&uStack_98);
        if (cVar2 != '\0') {
          if (iVar12 != 0x20) {
            *(int32_t *)(param_1 + 0x7c) = 0xffff;
            *(uint64_t *)(param_1 + 0x74) = 0xffffffffbf800000;
            *(int8_t *)(param_1 + 0x68) = 0;
            *(int32_t *)(param_1 + 0xb0) = 0xf149f2ca;
            *(int32_t *)(param_1 + 0xf0) = 0xf149f2ca;
            *(int8_t *)(param_1 + 0x100) = 0xff;
            *(int32_t *)(param_1 + 0x6c) = 0x3f800000;
            *(int32_t *)(param_1 + 0x70) = 1;
            *(uint64_t *)(param_1 + 0x280) = 0;
          }
          goto LAB_180526fb7;
        }
        uVar5 = FUN_180590480(lVar11,0,*(int32_t *)(param_1 + 0x56c),bVar13,
                              (byte)((uint)*(int32_t *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e4)
                                    >> 0x1f) ^ 1,0);
        goto LAB_180526faa;
      }
    }
LAB_180526fb7:
    if ((char)uStackX_8 == '\0') {
      *(int32_t *)(*(int64_t *)(param_1 + 0x8f8) + 0xa14) = 0xffffffff;
    }
  }
  lVar11 = *(int64_t *)(param_1 + 0x590);
  if (((*(int *)(lVar11 + 0x2498) == -1) ||
      (*(int *)((int64_t)*(int *)(lVar11 + 0x2498) * 0x68 + 0x58 + render_system_config) != 0x20)) ||
     (bVar13 == 0)) {
    lVar11 = -0xe8d4a50000;
    lVar10 = *(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x5d0) * 8);
  }
  else {
    lVar10 = *(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x5d0) * 8);
    fVar14 = (float)(lVar10 - *(int64_t *)(param_1 + 0x5c8)) * 1e-05;
    if (0.0 < fVar14) {
      fVar17 = *(float *)(param_1 + 0x3cc);
      if (fVar17 < fVar14) {
        if (*(float *)(param_1 + 0x3d0) <= fVar14) {
          *(int32_t *)(lVar11 + 0x24d4) = 0x3f733333;
        }
        else {
          fVar17 = ((fVar14 - fVar17) / (*(float *)(param_1 + 0x3d0) - fVar17)) *
                   (1.0 - *(float *)(param_1 + 0x3bc)) + *(float *)(param_1 + 0x3bc);
          fVar14 = 0.05;
          if ((0.05 <= fVar17) && (fVar14 = fVar17, 0.95 <= fVar17)) {
            fVar14 = 0.95;
          }
          *(float *)(lVar11 + 0x24d4) = fVar14;
        }
      }
      goto LAB_1805270ca;
    }
    lVar11 = 0;
  }
  *(int64_t *)(param_1 + 0x5c8) = lVar10 - lVar11;
LAB_1805270ca:
  FUN_18058ada0(*(uint64_t *)(param_1 + 0x590),param_1,
                *(uint64_t *)(*(int64_t *)(param_1 + 0x658) + 0x208),uVar20);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180526772(int32_t param_1)
void FUN_180526772(int32_t param_1)

{
  int iVar1;
  int64_t *plVar2;
  char cVar3;
  int8_t uVar4;
  int iVar5;
  int32_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t in_R11;
  int iVar13;
  byte bVar14;
  uint64_t unaff_R15;
  int32_t extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar15;
  float fVar16;
  int8_t auVar17 [16];
  float fVar18;
  float fVar19;
  float unaff_XMM6_Da;
  float fVar20;
  int32_t unaff_XMM7_Da;
  float fVar21;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  
  *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
  uVar6 = *(int32_t *)(unaff_RBX + 0x564);
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
  bVar14 = (byte)((uint)uVar6 >> 0x1f) ^ 1;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM11_Dd;
  FUN_18052b130(param_1,unaff_RBP + -0x49);
  lVar12 = *(int64_t *)(unaff_RBX + 0x20);
  fVar21 = 1.0 / *(float *)(*(int64_t *)(unaff_RBX + 0x6d8) + 0x8c0);
  *(uint64_t *)(unaff_RBP + 0x67) = *(uint64_t *)(lVar12 + 0x21c);
  fVar18 = *(float *)(unaff_RBP + -0x45) * (1.0 / unaff_XMM6_Da) + *(float *)(unaff_RBP + 0x6b);
  fVar15 = *(float *)(unaff_RBP + -0x49) * (1.0 / unaff_XMM6_Da) + *(float *)(unaff_RBP + 0x67);
  fVar19 = (fVar18 * *(float *)(unaff_RBX + 0x534) + fVar15 * *(float *)(unaff_RBX + 0x530)) *
           fVar21;
  fVar20 = (fVar18 * *(float *)(unaff_RBX + 0x524) + fVar15 * *(float *)(unaff_RBX + 0x520)) *
           fVar21;
  *(float *)(unaff_RBP + 0x6b) = fVar19;
  *(float *)(unaff_RBP + 0x67) = fVar20;
  fVar15 = fVar20 * fVar20;
  fVar18 = fVar19 * fVar19 + fVar15;
  if (396.00998 < fVar18) {
    auVar17 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
    fVar16 = auVar17._0_4_;
    fVar15 = fVar16 * fVar16;
    fVar18 = fVar16 * 0.5 * (3.0 - fVar18 * fVar15);
    fVar20 = fVar20 * fVar18 * 19.9;
    fVar19 = fVar19 * fVar18 * 19.9;
    *(float *)(unaff_RBP + 0x67) = fVar20;
    *(float *)(unaff_RBP + 0x6b) = fVar19;
  }
  lVar11 = *(int64_t *)(unaff_RBX + 0x590);
  uVar7 = *(uint64_t *)(unaff_RBP + 0x67);
  *(uint64_t *)(lVar11 + 0x90) = uVar7;
  if (fVar19 * fVar19 + fVar20 * fVar20 < 0.010000001) {
    uVar7 = 0;
  }
  *(uint64_t *)(lVar11 + 0x90) = uVar7;
  if ((*(uint *)(unaff_RBX + 0x56c) & 0x800) != 0) {
    if (*(int *)(unaff_RBX + 0x5f8) == 0) {
      fVar15 = *(float *)(lVar12 + 0x54) * *(float *)(lVar12 + 0x60);
      fVar18 = *(float *)(lVar12 + 0x54) * *(float *)(lVar12 + 100);
    }
    else {
      *(uint64_t *)(unaff_RBP + 0x67) = *(uint64_t *)(lVar12 + 0x1c);
      fVar15 = *(float *)(unaff_RBP + 0x67);
      fVar18 = *(float *)(unaff_RBP + 0x6b);
    }
    lVar11 = *(int64_t *)(unaff_RBX + 0x590);
    fVar15 = fVar15 * fVar21;
    *(float *)(unaff_RBP + 0x67) = fVar15;
    *(float *)(unaff_RBP + 0x6b) = fVar18 * fVar21;
    *(uint64_t *)(lVar11 + 0x25b0) = *(uint64_t *)(unaff_RBP + 0x67);
    if ((*(uint *)(lVar12 + 8) >> 5 & 1) == 0) {
LAB_180526991:
      fVar18 = 0.0;
    }
    else {
      fVar18 = *(float *)(lVar12 + 0x128) - *(float *)(lVar12 + 0x34);
      if (fVar18 <= 3.1415927) {
        if (fVar18 < -3.1415927) {
          fVar18 = fVar18 + 6.2831855;
        }
      }
      else {
        fVar18 = fVar18 + -6.2831855;
      }
      fVar15 = ABS(fVar18);
      if (fVar15 < 0.0001) goto LAB_180526991;
    }
    *(float *)(*(int64_t *)(unaff_RBX + 0x590) + 0x25b8) = fVar18;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x590) + 0x25bc) = *(int32_t *)(lVar12 + 0x150);
  }
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x590) + 0x98) = *(int32_t *)(lVar12 + 0x138);
  lVar11 = *(int64_t *)(unaff_RBX + 0x590);
  lVar8 = (int64_t)*(int *)(lVar11 + 0x2450);
  if ((*(int *)(lVar11 + 0x2450) == -1) ||
     (((*(int *)(lVar8 * 0x68 + 0x58 + render_system_config) < 0x18 ||
       (0x1b < *(int *)(lVar8 * 0x68 + 0x58 + render_system_config))) &&
      (*(int *)(lVar8 * 0x68 + 0x58 + render_system_config) != 0x25)))) {
    if (*(int *)(unaff_RBX + 0x5f8) == 0) {
      uVar9 = func_0x000180534e20(lVar11,1);
      uVar10 = func_0x000180534e20(extraout_XMM0_Da,0);
      fVar15 = extraout_XMM0_Da_00;
      if (((uVar10 | uVar9) >> 0x18 & 1) == 0) goto LAB_180526a29;
    }
    *(bool *)(lVar11 + 0xb8) = *(float *)(lVar12 + 0x28) != 0.0;
    *(bool *)(*(int64_t *)(unaff_RBX + 0x590) + 0xb9) = *(float *)(lVar12 + 0x24) != 0.0;
    if ((*(uint *)(unaff_RBX + 0x56c) & 0x800) != 0) {
      fVar15 = (float)func_0x00018057a770(*(uint64_t *)(unaff_RBX + 0x590),
                                          *(float *)(lVar12 + 0x24) * *(float *)(lVar12 + 0x24) +
                                          *(float *)(lVar12 + 0x28) * *(float *)(lVar12 + 0x28) +
                                          *(float *)(lVar12 + 0x2c) * *(float *)(lVar12 + 0x2c));
    }
  }
  else {
LAB_180526a29:
    *(bool *)(lVar11 + 0xb8) = *(float *)(lVar12 + 0x38) != 0.0;
    *(bool *)(*(int64_t *)(unaff_RBX + 0x590) + 0xb9) = *(float *)(lVar12 + 0x3c) != 0.0;
    if (*(float *)(lVar12 + 0x134) == 0.0) {
      *(int8_t *)(*(int64_t *)(unaff_RBX + 0x590) + 0xba) = 0;
    }
    else {
      *(int8_t *)(*(int64_t *)(unaff_RBX + 0x590) + 0xba) = 1;
    }
  }
  if ((ushort)(*(short *)(*(int64_t *)(unaff_RBX + 0x658) + 0x40) - 2U) < 3) {
    return;
  }
  iVar13 = 0;
  if (((*(uint *)(unaff_RBX + 0x56c) & 0x800) != 0) &&
     (fVar15 = (float)(*(int64_t *)
                        (&system_error_code +
                        (int64_t)*(int *)(*(int64_t *)(unaff_RBX + 0x728) + 0x590) * 8) -
                      *(int64_t *)(*(int64_t *)(unaff_RBX + 0x728) + 0x588)) * 1e-05, 0.0 < fVar15
     )) {
    lVar12 = *(int64_t *)(unaff_RBX + 0x590);
    *(int32_t *)(lVar12 + 0xa414) = 0;
    *(int32_t *)(lVar12 + 0xa418) = 0x40400000;
    *(int64_t *)(*(int64_t *)(unaff_RBX + 0x728) + 0x588) =
         *(int64_t *)
          (&system_error_code + (int64_t)*(int *)(*(int64_t *)(unaff_RBX + 0x728) + 0x590) * 8) +
         0x9184e700000;
    if (((*(ushort *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5ac) |
         *(ushort *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5aa)) & 0x33ff) == 0) {
      lVar12 = *(int64_t *)(unaff_RBX + 0x590);
      *(uint64_t *)(lVar12 + 0x3440) = 0;
      *(uint64_t *)(lVar12 + 0x3448) = 0;
    }
  }
  if (bVar14 == 0) {
    if ((*(uint *)(unaff_RBX + 0x56c) & 0x800) != 0) goto LAB_180526d2c;
  }
  else {
    iVar5 = *(int *)(unaff_RBX + 0x564);
    lVar12 = *(int64_t *)(unaff_RBX + 0x8d8);
    plVar2 = *(int64_t **)((int64_t)iVar5 * 0xa60 + 0x3630 + lVar12);
    if ((plVar2 != (int64_t *)0x0) && ((int)plVar2[0x48a] != -1)) {
      fVar15 = (float)(**(code **)(*plVar2 + 0x90))(plVar2,0);
      iVar5 = *(int *)(unaff_RBX + 0x564);
      lVar12 = *(int64_t *)(unaff_RBX + 0x8d8);
    }
    if (*(int64_t *)((int64_t)iVar5 * 0xa60 + 0x3630 + lVar12) != 0) {
      *(int32_t *)(unaff_RBP + 0x67) = 0x3f800000;
      iVar5 = FUN_18050d480(fVar15,unaff_RBP + 0x67);
      if (*(int *)(*(int64_t *)(unaff_RBX + 0x590) + 0x2450) != iVar5) {
        *(int32_t *)(unaff_RBP + -0x29) = 0;
        *(int32_t *)(unaff_RBP + -0x25) = 0;
        *(int32_t *)(unaff_RBP + -0x21) = 0x3f800000;
        *(int32_t *)(unaff_RBP + -0x1d) = 0xbe4ccccd;
        *(int32_t *)(unaff_RBP + -0x19) = 0xbe4ccccd;
        *(int32_t *)(unaff_RBP + -0x11) = 0x1000000;
        *(int32_t *)(unaff_RBP + -0x15) = 0x3ecccccd;
        *(int8_t *)(unaff_RBP + -0xd) = 0;
        *(int32_t *)(unaff_RBP + -0x39) = 0;
        *(int32_t *)(unaff_RBP + -0x35) = 0xffffffff;
        *(uint64_t *)(unaff_RBP + -0x31) = 0x2002;
        FUN_18051ec50(0,unaff_RBP + -0x39);
        if (iVar5 != -1) {
          *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(unaff_RBP + 0x67);
          *(uint64_t *)(unaff_RBP + -0x31) = 0;
          *(uint64_t *)(unaff_RBP + -0x29) = 0;
          *(int32_t *)(unaff_RBP + -0x11) = 0x1000000;
          *(int32_t *)(unaff_RBP + -0x1d) = 0xbe4ccccd;
          *(int32_t *)(unaff_RBP + -0x19) = 0xbe4ccccd;
          *(int32_t *)(unaff_RBP + -0x15) = 0x3ecccccd;
          *(int8_t *)(unaff_RBP + -0xd) = 0;
          *(int32_t *)(unaff_RBP + -0x39) = 0;
          *(int *)(unaff_RBP + -0x35) = iVar5;
          FUN_18051ec50(*(int32_t *)(unaff_RBP + 0x67),unaff_RBP + -0x39);
        }
      }
    }
    if (((*(uint *)(unaff_RBX + 0x56c) & 0x800) != 0) &&
       (*(int *)(*(int64_t *)(unaff_RBX + 0x590) + 0x8228) < 0)) {
LAB_180526d2c:
      func_0x0001805a7480(unaff_RBX + 0x28);
    }
  }
  if ((((system_status_flag != 1) && (system_status_flag != 4)) &&
      ((*(uint *)(unaff_RBX + 0x56c) & 0x4000) != 0)) &&
     ((lVar12 = *(int64_t *)(*(int64_t *)(unaff_RBX + 0x8f8) + 0x9e8), lVar12 != 0 &&
      ((*(byte *)((int64_t)
                  *(int *)((int64_t)*(int *)(lVar12 + 0xf0) * 0xa0 + 100 +
                          *(int64_t *)(lVar12 + 0xd0)) * 0x170 + 0x140 + render_system_config) & 0x10) !=
       0)))) {
    cVar3 = StringProcessor(unaff_RBX + 0x28,unaff_RBP + 0x67);
    if (cVar3 == '\0') {
LAB_180526f68:
      lVar11 = *(int64_t *)(unaff_RBX + 0x8f8);
      uVar6 = FUN_180590480(lVar12,0,*(int32_t *)(unaff_RBX + 0x56c),bVar14,
                            (byte)((uint)*(int32_t *)(lVar11 + 0x9e4) >> 0x1f) ^ 1);
      if (*(char *)(unaff_RBP + 0x67) != '\0') {
        *(int32_t *)(lVar11 + 0xa14) = *(int32_t *)(lVar12 + 0xf0);
      }
LAB_180526faa:
      *(int32_t *)(unaff_RBX + 0x2c0) = uVar6;
    }
    else {
      lVar11 = *(int64_t *)(*(int64_t *)(unaff_RBX + 0x8f8) + 0x9f0);
      lVar8 = (int64_t)
              *(int *)((int64_t)*(int *)(lVar12 + 0xf0) * 0xa0 + 100 + *(int64_t *)(lVar12 + 0xd0)
                      ) * 0x170 + render_system_config;
      uVar4 = func_0x000180525320();
      if (lVar11 == 0) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(int32_t *)
                 ((int64_t)*(int *)(lVar11 + 0xf0) * 0xa0 + 100 + *(int64_t *)(lVar11 + 0xd0));
      }
      lVar11 = FUN_18054f900(lVar8,9,bVar14,uVar6,uVar4);
      if (lVar11 == 0) goto LAB_180526f68;
      iVar5 = *(int *)(lVar11 + 0x1c);
      iVar1 = *(int *)(*(int64_t *)(unaff_RBX + 0x590) + 0x2498);
      if (iVar5 != iVar1) {
        if (iVar1 != -1) {
          iVar13 = *(int *)((int64_t)iVar1 * 0x68 + 0x58 + render_system_config);
        }
        *(uint64_t *)(unaff_RBP + -0x31) = 0;
        *(int32_t *)(unaff_RBP + -0x29) = 0;
        *(int32_t *)(unaff_RBP + -0x11) = 0x1000000;
        *(int8_t *)(unaff_RBP + -0xd) = 0;
        *(int32_t *)(unaff_RBP + -0x39) = 1;
        *(int *)(unaff_RBP + -0x35) = iVar5;
        *(uint64_t *)(unaff_RBP + -0x21) = 0xbe4ccccd3f800000;
        *(uint64_t *)(unaff_RBP + -0x19) = 0x3ecccccdbe4ccccd;
        if (bVar14 == 0) {
          fVar15 = 0.0;
        }
        else {
          fVar15 = *(float *)(unaff_RBX + 0x3bc);
          if (0.05 <= fVar15) {
            if (0.95 <= fVar15) {
              fVar15 = 0.95;
            }
          }
          else {
            fVar15 = 0.05;
          }
        }
        *(float *)(unaff_RBP + -0x25) = fVar15;
        cVar3 = FUN_18051ec50(fVar15,unaff_RBP + -0x39);
        if (cVar3 != '\0') {
          if (iVar13 != 0x20) {
            *(int32_t *)(unaff_RBX + 0x7c) = 0xffff;
            *(uint64_t *)(unaff_RBX + 0x74) = 0xffffffffbf800000;
            *(int8_t *)(unaff_RBX + 0x68) = 0;
            *(int32_t *)(unaff_RBX + 0xb0) = 0xf149f2ca;
            *(int32_t *)(unaff_RBX + 0xf0) = 0xf149f2ca;
            *(int8_t *)(unaff_RBX + 0x100) = 0xff;
            *(int32_t *)(unaff_RBX + 0x6c) = 0x3f800000;
            *(int32_t *)(unaff_RBX + 0x70) = 1;
            *(uint64_t *)(unaff_RBX + 0x280) = 0;
          }
          goto LAB_180526fb7;
        }
        uVar6 = FUN_180590480(lVar12,0,*(int32_t *)(unaff_RBX + 0x56c),bVar14,
                              (byte)((uint)*(int32_t *)(*(int64_t *)(unaff_RBX + 0x8f8) + 0x9e4)
                                    >> 0x1f) ^ 1);
        goto LAB_180526faa;
      }
    }
LAB_180526fb7:
    if (*(char *)(unaff_RBP + 0x67) == '\0') {
      *(int32_t *)(*(int64_t *)(unaff_RBX + 0x8f8) + 0xa14) = 0xffffffff;
    }
  }
  lVar12 = *(int64_t *)(unaff_RBX + 0x590);
  if (((*(int *)(lVar12 + 0x2498) == -1) ||
      (*(int *)((int64_t)*(int *)(lVar12 + 0x2498) * 0x68 + 0x58 + render_system_config) != 0x20)) ||
     (bVar14 == 0)) {
    lVar12 = -0xe8d4a50000;
    lVar11 = *(int64_t *)(&system_error_code + (int64_t)*(int *)(unaff_RBX + 0x5d0) * 8);
  }
  else {
    lVar11 = *(int64_t *)(&system_error_code + (int64_t)*(int *)(unaff_RBX + 0x5d0) * 8);
    fVar15 = (float)(lVar11 - *(int64_t *)(unaff_RBX + 0x5c8)) * 1e-05;
    if (0.0 < fVar15) {
      fVar18 = *(float *)(unaff_RBX + 0x3cc);
      if (fVar18 < fVar15) {
        if (*(float *)(unaff_RBX + 0x3d0) <= fVar15) {
          *(int32_t *)(lVar12 + 0x24d4) = 0x3f733333;
        }
        else {
          fVar18 = ((fVar15 - fVar18) / (*(float *)(unaff_RBX + 0x3d0) - fVar18)) *
                   (1.0 - *(float *)(unaff_RBX + 0x3bc)) + *(float *)(unaff_RBX + 0x3bc);
          fVar15 = 0.05;
          if ((0.05 <= fVar18) && (fVar15 = fVar18, 0.95 <= fVar18)) {
            fVar15 = 0.95;
          }
          *(float *)(lVar12 + 0x24d4) = fVar15;
        }
      }
      goto LAB_1805270ca;
    }
    lVar12 = 0;
  }
  *(int64_t *)(unaff_RBX + 0x5c8) = lVar11 - lVar12;
LAB_1805270ca:
  FUN_18058ada0(*(uint64_t *)(unaff_RBX + 0x590));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



