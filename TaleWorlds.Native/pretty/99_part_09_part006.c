#include "TaleWorlds.Native.Split.h"

// 99_part_09_part006.c - 1 个函数

// 函数: void FUN_1805c034d(int64_t param_1,uint64_t *param_2)
void FUN_1805c034d(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int64_t in_RAX;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  uint uVar10;
  int iVar11;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t *plVar12;
  int iVar13;
  int64_t *unaff_RDI;
  uint uVar14;
  int iVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int8_t auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM15_Da;
  int32_t unaff_XMM15_Dc;
  uint64_t uVar26;
  int64_t *in_stack_00000030;
  int iStack0000000000000038;
  int iStack000000000000003c;
  int iStack0000000000000040;
  int32_t uStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  int32_t uStack000000000000005c;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  uint64_t in_stack_00000068;
  int32_t in_stack_00000070;
  int32_t in_stack_000000d0;
  int32_t in_stack_000000d8;
  int32_t in_stack_000000e0;
  int32_t in_stack_000000e8;
  int32_t in_stack_000000f0;
  int32_t in_stack_000000f8;
  
  *(uint64_t *)(in_RAX + -0x20) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x28) = unaff_RSI;
  *param_2 = *(uint64_t *)(param_1 + 0x1c0);
  uVar26 = *(uint64_t *)(param_1 + 0x1e0);
  param_2[3] = *(uint64_t *)(param_1 + 0x1d8);
  param_2[4] = uVar26;
  uVar3 = *(int32_t *)(param_1 + 0x1ec);
  uVar4 = *(int32_t *)(param_1 + 0x1f0);
  uVar5 = *(int32_t *)(param_1 + 500);
  *(int32_t *)(param_2 + 5) = *(int32_t *)(param_1 + 0x1e8);
  *(int32_t *)((int64_t)param_2 + 0x2c) = uVar3;
  *(int32_t *)(param_2 + 6) = uVar4;
  *(int32_t *)((int64_t)param_2 + 0x34) = uVar5;
  param_2[1] = *(uint64_t *)(param_1 + 0x1c8);
  param_2[2] = *(uint64_t *)(param_1 + 0x1d0);
  param_2[7] = *(uint64_t *)(param_1 + 0x1f8);
  *(int32_t *)(param_2 + 8) = *(int32_t *)(param_1 + 0x200);
  fVar17 = (float)func_0x0001805b7780();
  lVar9 = *unaff_RDI;
  uVar26 = 0;
  lVar1 = *(int64_t *)(lVar9 + 0x20);
  *(int32_t *)(unaff_RBP + 0xd8) = 0;
  *(int32_t *)(unaff_RBP + 0xd0) = 0;
  _fStack0000000000000050 = 0;
  fVar19 = *(float *)(lVar1 + 0x84);
  lVar2 = unaff_RDI[0x291];
  *(uint64_t *)(unaff_RBP + -0x80) = *(uint64_t *)(lVar1 + 0xc);
  in_stack_00000030 = (int64_t *)0x0;
  fVar18 = *(float *)(lVar2 + 0x98d240) * 10.0;
  fVar20 = (*(float *)(*(int64_t *)(lVar9 + 0x6d8) + 0x904) + 1.0) * fVar17 * 5.0;
  if (fVar18 <= fVar20) {
    fVar20 = fVar18;
  }
  FUN_1804ff330(lVar2 + 0x98d230,unaff_RBP + -0x80,fVar20,&stack0x00000030);
  if (in_stack_00000030 != (int64_t *)0x0) {
    fVar20 = (float)((uint64_t)uVar26 >> 0x20);
    fVar18 = (float)uVar26;
    plVar12 = in_stack_00000030;
    iVar13 = iStack000000000000003c;
    iVar11 = iStack0000000000000038;
LAB_1805c04d0:
    lVar9 = *plVar12;
    lVar1 = **(int64_t **)(unaff_RBP + 0xc0);
    if ((*(int *)(lVar9 + 0x10) == *(int *)(lVar1 + 0x10)) ||
       (((*(uint *)(lVar9 + 0x56c) & 0x2000) == 0 &&
        ((*(float *)(lVar9 + 0x35c) == *(float *)(lVar1 + 0x35c) ||
         (*(float *)(*(int64_t *)(lVar9 + 0x20) + 0x1d0) <= fVar17 * 3.0)))))) {
      uVar16 = *(uint *)(unaff_RBP + 0xd0);
      iVar15 = *(int *)(unaff_RBP + 0xd8);
    }
    else {
      lVar9 = *(int64_t *)(lVar9 + 0x20);
      fVar22 = *(float *)(*(int64_t *)(lVar1 + 0x20) + 0xc) - *(float *)(lVar9 + 0xc);
      fVar25 = *(float *)(*(int64_t *)(lVar1 + 0x20) + 0x10) - *(float *)(lVar9 + 0x10);
      fVar23 = fVar25 * fVar25 + fVar22 * fVar22;
      auVar21 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
      fVar24 = auVar21._0_4_;
      fVar24 = fVar24 * 0.5 * (3.0 - fVar23 * fVar24 * fVar24);
      if ((*(uint *)(unaff_RBP + 0xd0) & 2) == 0) {
        if (fVar17 * 3.5 <= fVar24 * fVar23) {
          if (fVar24 * fVar23 < fVar19 * 3.0) {
                    // WARNING: Subroutine does not return
            FUN_1808fd400(*(int32_t *)(lVar9 + 0x34));
          }
        }
        else {
          *(uint *)(unaff_RBP + 0xd0) = *(uint *)(unaff_RBP + 0xd0) & 0xfffffffe | 2;
        }
      }
      uVar16 = *(uint *)(unaff_RBP + 0xd0);
      fVar20 = fVar20 + fVar25 * fVar24;
      fVar18 = fVar18 + fVar24 * fVar22;
      iVar15 = *(int *)(unaff_RBP + 0xd8) + 1;
      *(int *)(unaff_RBP + 0xd8) = iVar15;
    }
    lVar9 = (*(int64_t **)(unaff_RBP + 0xc0))[0x291];
    plVar12 = (int64_t *)plVar12[3];
    while (plVar12 == (int64_t *)0x0) {
      if ((float)iVar11 == fStack0000000000000048) {
        if ((float)iVar13 == fStack000000000000004c) break;
        iVar13 = iVar13 + 1;
        iVar11 = iStack0000000000000040;
        iStack000000000000003c = iVar13;
      }
      else {
        iVar11 = iVar11 + 1;
      }
      iStack0000000000000038 = iVar11;
      plVar12 = *(int64_t **)
                 ((int64_t)(iStack000000000000003c * *(int *)(lVar9 + 0x98d238) + iVar11) * 9 +
                 *(int64_t *)(lVar9 + 0x98d248));
    }
    do {
      if ((plVar12 == (int64_t *)0x0) ||
         (fVar24 = fStack0000000000000054 - *(float *)((int64_t)plVar12 + 0xc),
         (fStack0000000000000050 - *(float *)(plVar12 + 1)) *
         (fStack0000000000000050 - *(float *)(plVar12 + 1)) + fVar24 * fVar24 <=
         fStack0000000000000058)) goto LAB_1805c07d0;
      plVar12 = (int64_t *)plVar12[3];
      while (plVar12 == (int64_t *)0x0) {
        if ((float)iVar11 == fStack0000000000000048) {
          if ((float)iVar13 == fStack000000000000004c) break;
          iVar13 = iVar13 + 1;
          iVar11 = iStack0000000000000040;
          iStack000000000000003c = iVar13;
        }
        else {
          iVar11 = iVar11 + 1;
        }
        iStack0000000000000038 = iVar11;
        plVar12 = *(int64_t **)
                   ((int64_t)(iStack000000000000003c * *(int *)(lVar9 + 0x98d238) + iVar11) * 9 +
                   *(int64_t *)(lVar9 + 0x98d248));
      }
    } while( true );
  }
LAB_1805c0886:
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(int32_t *)(*(int64_t *)(*unaff_RDI + 0x20) + 0x34));
LAB_1805c07d0:
  if (plVar12 == (int64_t *)0x0) goto code_r0x0001805c07d9;
  goto LAB_1805c04d0;
code_r0x0001805c07d9:
  unaff_RDI = *(int64_t **)(unaff_RBP + 0xc0);
  in_stack_000000d0 = unaff_XMM15_Da;
  in_stack_000000d8 = unaff_XMM15_Dc;
  in_stack_000000e0 = unaff_XMM14_Da;
  in_stack_000000e8 = unaff_XMM14_Dc;
  in_stack_000000f0 = unaff_XMM13_Da;
  in_stack_000000f8 = unaff_XMM13_Dc;
  if (iVar15 < 1) goto LAB_1805c0886;
  fVar24 = fVar20 * fVar20 + fVar18 * fVar18;
  auVar21 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
  fVar22 = auVar21._0_4_;
  fVar24 = fVar22 * 0.5 * (3.0 - fVar24 * fVar22 * fVar22);
  fVar18 = fVar18 * fVar24;
  fVar20 = fVar20 * fVar24;
  uVar26 = CONCAT44(fVar20,fVar18);
  if ((((*(uint *)(*unaff_RDI + 0x56c) & 0x200000) != 0) &&
      (0 < *(int *)((int64_t)unaff_RDI + 0x1b6c))) && ((uVar16 & 3) == 0)) {
    fVar24 = -*(float *)((int64_t)unaff_RDI + 0x17b4);
    uVar10 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
    uVar10 = uVar10 ^ uVar10 >> 0x11;
    uVar10 = uVar10 ^ uVar10 << 5;
    *(uint *)(unaff_RDI + 0x272) = uVar10;
    fVar22 = (float)(uVar10 - 1);
    if (((fVar22 * 2.1684043e-19 + 1.8626451e-09) * fVar19 * fVar22 +
        (fVar22 * 1.8626451e-09 + 16.0) * fVar19) * fVar19 < fVar24) {
      uVar16 = uVar16 | 1;
    }
  }
  if ((uVar16 & 2) == 0) {
    if ((uVar16 & 1) != 0) {
      uVar10 = *(uint *)((int64_t)unaff_RDI + 0x1484) & 0xfffffffd | 1;
      goto LAB_1805c09a3;
    }
  }
  else {
    uVar10 = *(uint *)((int64_t)unaff_RDI + 0x1484) & 0xfffffffe | 2;
LAB_1805c09a3:
    *(uint *)((int64_t)unaff_RDI + 0x1484) = uVar10;
    *(int8_t *)((int64_t)unaff_RDI + 0x2201) = 1;
  }
  uVar10 = *(uint *)((int64_t)unaff_RDI + 0x1484);
  puVar7 = (uint64_t *)(uint64_t)uVar10;
  lVar9 = *unaff_RDI;
  if ((uVar10 & 2) != 0) {
    in_stack_00000068 = 0;
    in_stack_00000030 = *(int64_t **)(*(int64_t *)(lVar9 + 0x8d8) + 0x18);
    fVar20 = *(float *)(unaff_RDI + 0x3b) - *(float *)(*(int64_t *)(lVar9 + 0x20) + 0xc);
    fVar17 = *(float *)((int64_t)unaff_RDI + 0x1dc) -
             *(float *)(*(int64_t *)(lVar9 + 0x20) + 0x10);
    if (fVar20 * fVar20 + fVar17 * fVar17 < fVar19 * fVar19 * 0.5) {
      if ((uVar16 & 2) != 0) {
        FUN_1805c1160(unaff_RDI,&stack0x00000020,puVar7,*(uint64_t *)(unaff_RBP + 200));
        fVar19 = -1.0;
        goto LAB_1805c111b;
      }
      *(uint *)((int64_t)unaff_RDI + 0x1484) = uVar10 & 0xfffffffd | 1;
      *(int8_t *)((int64_t)unaff_RDI + 0x2201) = 1;
    }
    fVar19 = -1.0;
    goto LAB_1805c111b;
  }
  if ((uVar10 & 1) == 0) {
    lVar9 = FUN_18065cec0(*(int64_t *)
                           (*(int64_t *)(*(int64_t *)(lVar9 + 0x590) + 0x2590) + 0xc78) + 0x60,0,
                          puVar7,lVar9,uVar26);
    fVar19 = *(float *)(lVar9 + 0x10) * 0.9;
    goto LAB_1805c111b;
  }
  lVar1 = *(int64_t *)(lVar9 + 0x20);
  in_stack_00000068 = 0;
  in_stack_00000030 = *(int64_t **)(*(int64_t *)(lVar9 + 0x8d8) + 0x18);
  fStack0000000000000048 = *(float *)(lVar1 + 0xc);
  fStack000000000000004c = *(float *)(lVar1 + 0x10);
  fStack0000000000000050 = *(float *)(lVar1 + 0x14);
  fStack0000000000000054 = *(float *)(lVar1 + 0x18);
  if ((uVar16 & 1) == 0) {
    puVar7 = (uint64_t *)(uint64_t)(uVar10 & 0xfffffffc);
    *(uint *)((int64_t)unaff_RDI + 0x1484) = uVar10 & 0xfffffffc;
    *(int8_t *)((int64_t)unaff_RDI + 0x2201) = 1;
  }
  else {
    fVar22 = *(float *)((int64_t)unaff_RDI + 0x1dc) - fStack000000000000004c;
    if ((*(float *)(unaff_RDI + 0x3b) - fStack0000000000000048) *
        (*(float *)(unaff_RDI + 0x3b) - fStack0000000000000048) + fVar22 * fVar22 <
        fVar19 * fVar19 * 0.5) {
      if (((*(uint *)(lVar9 + 0x56c) & 0x200000) == 0) ||
         (*(int *)((int64_t)unaff_RDI + 0x1b6c) < 1)) {
        if (iVar15 < 1) {
          puVar8 = (uint64_t *)FUN_180516f50(lVar9,unaff_RBP + -0x78);
          puVar7 = *(uint64_t **)(unaff_RBP + 200);
          *puVar7 = *puVar8;
          uVar6 = puVar8[4];
          puVar7[3] = puVar8[3];
          puVar7[4] = uVar6;
          uVar6 = puVar8[6];
          puVar7[5] = puVar8[5];
          puVar7[6] = uVar6;
          puVar7[1] = puVar8[1];
          puVar7[2] = puVar8[2];
          puVar7[7] = puVar8[7];
          *(int32_t *)(puVar7 + 8) = *(int32_t *)(puVar8 + 8);
          uVar10 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
          uVar10 = uVar10 ^ uVar10 >> 0x11;
          uVar10 = uVar10 ^ uVar10 << 5;
          uVar16 = uVar10 << 0xd ^ uVar10;
          uVar16 = uVar16 ^ uVar16 >> 0x11;
          uVar16 = uVar16 ^ uVar16 << 5;
          *(uint *)(unaff_RDI + 0x272) = uVar16;
          fVar19 = *(float *)(puVar7 + 3);
          fVar24 = *(float *)((int64_t)puVar7 + 0x1c);
          fVar20 = ((float)(uVar16 - 1) * 1.3969839e-09 - 3.0) * fVar17 + fVar19;
          fVar17 = ((float)(uVar10 - 1) * 2.3283064e-09 - 5.0) * fVar17 + fVar24;
          *(float *)(unaff_RBP + 0xc4) = fVar17;
          *(float *)(unaff_RBP + 0xc0) = fVar20;
          if ((fVar19 != fVar20) || (fVar24 != fVar17)) {
            if (*(int *)(puVar7 + 8) != 0) goto LAB_1805c1095;
            goto LAB_1805c109d;
          }
        }
        else {
          puVar7 = (uint64_t *)FUN_180516f50(lVar9,unaff_RBP + -0x78);
          puVar8 = *(uint64_t **)(unaff_RBP + 200);
          *puVar8 = *puVar7;
          uVar6 = puVar7[4];
          puVar8[3] = puVar7[3];
          puVar8[4] = uVar6;
          uVar6 = puVar7[6];
          puVar8[5] = puVar7[5];
          puVar8[6] = uVar6;
          puVar8[1] = puVar7[1];
          puVar8[2] = puVar7[2];
          puVar8[7] = puVar7[7];
          *(int32_t *)(puVar8 + 8) = *(int32_t *)(puVar7 + 8);
          uVar10 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
          uVar10 = uVar10 ^ uVar10 >> 0x11;
          uVar10 = uVar10 ^ uVar10 << 5;
          *(uint *)(unaff_RDI + 0x272) = uVar10;
          fVar24 = *(float *)(puVar8 + 3);
          fVar17 = *(float *)((int64_t)puVar8 + 0x1c);
          uVar14 = uVar10 << 0xd ^ uVar10;
          uVar14 = uVar14 ^ uVar14 >> 0x11;
          uVar14 = uVar14 ^ uVar14 << 5;
          puVar7 = (uint64_t *)(uint64_t)uVar14;
          uVar16 = uVar14 << 0xd ^ uVar14;
          fVar25 = (float)(uVar10 - 1) * 2.3283064e-10 + 0.5;
          uVar16 = uVar16 ^ uVar16 >> 0x11;
          uVar16 = uVar16 ^ uVar16 << 5;
          *(uint *)(unaff_RDI + 0x272) = uVar16;
          fVar22 = (float)(uVar16 - 1) * 2.3283064e-10;
          fVar23 = (float)(uVar14 - 1) * 2.3283064e-10;
          fVar18 = (((fVar18 * fVar19 * fVar25 + fVar24 + fVar22) - 0.5) + fVar22) - 0.5;
          fVar20 = (((fVar20 * fVar19 * fVar25 + fVar17 + fVar23) - 0.5) + fVar23) - 0.5;
          fVar19 = *(float *)(puVar8 + 3);
          *(float *)(unaff_RBP + 0xc4) = fVar20;
          *(float *)(unaff_RBP + 0xc0) = fVar18;
          if ((fVar18 != fVar19) || (fVar20 != *(float *)((int64_t)puVar8 + 0x1c))) {
            if (*(int *)(puVar8 + 8) != 0) {
              *(int32_t *)(puVar8 + 8) = 0;
            }
            puVar8[3] = *(uint64_t *)(unaff_RBP + 0xc0);
          }
        }
      }
      else {
        FUN_180516f50((int64_t)*(int *)((int64_t)unaff_RDI + 0x17ac) * 0xa60 +
                      unaff_RDI[0x291] + 0x30a0,&stack0x00000030);
        if (0 < *(int *)(unaff_RBP + 0xd8)) {
          fVar24 = fStack0000000000000048 - *(float *)(*(int64_t *)(*unaff_RDI + 0x20) + 0xc);
          fVar22 = fStack000000000000004c - *(float *)(*(int64_t *)(*unaff_RDI + 0x20) + 0x10);
          fVar23 = fVar22 * fVar22 + fVar24 * fVar24;
          auVar21 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
          fVar19 = auVar21._0_4_;
          fVar19 = fVar19 * 0.5 * (3.0 - fVar23 * fVar19 * fVar19);
          if (0.99 < ABS(fVar20 * fVar19 * fVar22 + fVar18 * fVar19 * fVar24)) {
            uVar16 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
            uVar16 = uVar16 ^ uVar16 >> 0x11;
            uVar16 = uVar16 ^ uVar16 << 5;
            *(uint *)(unaff_RDI + 0x272) = uVar16;
                    // WARNING: Subroutine does not return
            FUN_1808fd400((float)(uVar16 - 1) * 3.949879e-10 - 0.84823006);
          }
        }
        puVar7 = *(uint64_t **)(unaff_RBP + 200);
        *puVar7 = in_stack_00000030;
        puVar7[1] = CONCAT44(iStack000000000000003c,iStack0000000000000038);
        puVar7[2] = CONCAT44(uStack0000000000000044,iStack0000000000000040);
        puVar7[7] = in_stack_00000068;
        *(int32_t *)(puVar7 + 8) = in_stack_00000070;
        *(float *)(puVar7 + 3) = fStack0000000000000048;
        *(float *)((int64_t)puVar7 + 0x1c) = fStack000000000000004c;
        *(float *)(puVar7 + 4) = fStack0000000000000050;
        *(float *)((int64_t)puVar7 + 0x24) = fStack0000000000000054;
        *(float *)(puVar7 + 5) = fStack0000000000000058;
        *(int32_t *)((int64_t)puVar7 + 0x2c) = uStack000000000000005c;
        *(int32_t *)(puVar7 + 6) = uStack0000000000000060;
        *(int32_t *)((int64_t)puVar7 + 0x34) = uStack0000000000000064;
        uVar10 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
        uVar10 = uVar10 ^ uVar10 >> 0x11;
        uVar10 = uVar10 ^ uVar10 << 5;
        uVar16 = uVar10 << 0xd ^ uVar10;
        uVar16 = uVar16 ^ uVar16 >> 0x11;
        uVar16 = uVar16 ^ uVar16 << 5;
        *(uint *)(unaff_RDI + 0x272) = uVar16;
        fVar24 = *(float *)(puVar7 + 3);
        fVar19 = *(float *)((int64_t)puVar7 + 0x1c);
        fVar20 = ((float)(uVar16 - 1) * 9.313226e-10 - 2.0) * fVar17 + fVar24;
        fVar17 = ((float)(uVar10 - 1) * 9.313226e-10 - 2.0) * fVar17 + fVar19;
        *(float *)(unaff_RBP + 0xc4) = fVar17;
        *(float *)(unaff_RBP + 0xc0) = fVar20;
        if ((fVar24 != fVar20) || (fVar19 != fVar17)) {
LAB_1805c1095:
          *(int32_t *)(puVar7 + 8) = 0;
LAB_1805c109d:
          puVar7[3] = *(uint64_t *)(unaff_RBP + 0xc0);
        }
      }
    }
  }
  lVar9 = FUN_18065cec0(*(int64_t *)
                         (*(int64_t *)(*(int64_t *)(*unaff_RDI + 0x590) + 0x2590) + 0xc78) + 0x60,
                        0,puVar7,fVar24,uVar26);
  fVar19 = *(float *)(lVar9 + 0x10) * 1.8;
LAB_1805c111b:
  *(float *)((int64_t)unaff_RDI + 0x2204) = fVar19;
  return;
}






