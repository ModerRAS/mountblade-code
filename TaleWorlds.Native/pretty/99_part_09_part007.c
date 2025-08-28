#include "TaleWorlds.Native.Split.h"

// 99_part_09_part007.c - 2 个函数

// 函数: void FUN_1805c0475(void)
void FUN_1805c0475(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint uVar7;
  int unaff_EBX;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int unaff_EDI;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int8_t auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_XMM7_Da;
  float fVar19;
  float unaff_XMM8_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float in_stack_00000028;
  uint64_t in_stack_00000030;
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
  
LAB_1805c04d0:
  lVar6 = *unaff_RSI;
  lVar1 = **(int64_t **)(unaff_RBP + 0xc0);
  if ((*(int *)(lVar6 + 0x10) == *(int *)(lVar1 + 0x10)) ||
     (((*(uint *)(lVar6 + 0x56c) & 0x2000) == 0 &&
      ((*(float *)(lVar6 + 0x35c) == *(float *)(lVar1 + 0x35c) ||
       (*(float *)(*(int64_t *)(lVar6 + 0x20) + 0x1d0) <= unaff_XMM8_Da * unaff_XMM7_Da)))))) {
    uVar10 = *(uint *)(unaff_RBP + 0xd0);
    iVar9 = *(int *)(unaff_RBP + 0xd8);
  }
  else {
    lVar6 = *(int64_t *)(lVar6 + 0x20);
    fVar12 = *(float *)(*(int64_t *)(lVar1 + 0x20) + 0xc) - *(float *)(lVar6 + 0xc);
    fVar19 = *(float *)(*(int64_t *)(lVar1 + 0x20) + 0x10) - *(float *)(lVar6 + 0x10);
    fVar14 = fVar19 * fVar19 + fVar12 * fVar12;
    auVar11 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
    fVar17 = auVar11._0_4_;
    fVar17 = fVar17 * 0.5 * (3.0 - fVar14 * fVar17 * fVar17);
    if ((*(uint *)(unaff_RBP + 0xd0) & 2) == 0) {
      if (unaff_XMM8_Da * 3.5 <= fVar17 * fVar14) {
        if (fVar17 * fVar14 < unaff_XMM10_Da * 3.0) {
                    // WARNING: Subroutine does not return
          FUN_1808fd400(*(int32_t *)(lVar6 + 0x34));
        }
      }
      else {
        *(uint *)(unaff_RBP + 0xd0) = *(uint *)(unaff_RBP + 0xd0) & 0xfffffffe | 2;
      }
    }
    uVar10 = *(uint *)(unaff_RBP + 0xd0);
    unaff_XMM11_Da = unaff_XMM11_Da + fVar19 * fVar17;
    unaff_XMM7_Da = 3.0;
    unaff_XMM12_Da = unaff_XMM12_Da + fVar17 * fVar12;
    iVar9 = *(int *)(unaff_RBP + 0xd8) + 1;
    *(int *)(unaff_RBP + 0xd8) = iVar9;
  }
  lVar6 = (*(int64_t **)(unaff_RBP + 0xc0))[0x291];
  unaff_RSI = (int64_t *)unaff_RSI[3];
  while (unaff_RSI == (int64_t *)0x0) {
    if ((float)unaff_EBX == fStack0000000000000048) {
      if ((float)unaff_EDI == fStack000000000000004c) break;
      unaff_EDI = unaff_EDI + 1;
      unaff_EBX = iStack0000000000000040;
      iStack000000000000003c = unaff_EDI;
    }
    else {
      unaff_EBX = unaff_EBX + 1;
    }
    iStack0000000000000038 = unaff_EBX;
    unaff_RSI = *(int64_t **)
                 ((int64_t)(iStack000000000000003c * *(int *)(lVar6 + 0x98d238) + unaff_EBX) * 9 +
                 *(int64_t *)(lVar6 + 0x98d248));
  }
  do {
    if ((unaff_RSI == (int64_t *)0x0) ||
       (fVar17 = fStack0000000000000054 - *(float *)((int64_t)unaff_RSI + 0xc),
       (fStack0000000000000050 - *(float *)(unaff_RSI + 1)) *
       (fStack0000000000000050 - *(float *)(unaff_RSI + 1)) + fVar17 * fVar17 <=
       fStack0000000000000058)) break;
    unaff_RSI = (int64_t *)unaff_RSI[3];
    while (unaff_RSI == (int64_t *)0x0) {
      if ((float)unaff_EBX == fStack0000000000000048) {
        if ((float)unaff_EDI == fStack000000000000004c) break;
        unaff_EDI = unaff_EDI + 1;
        unaff_EBX = iStack0000000000000040;
        iStack000000000000003c = unaff_EDI;
      }
      else {
        unaff_EBX = unaff_EBX + 1;
      }
      iStack0000000000000038 = unaff_EBX;
      unaff_RSI = *(int64_t **)
                   ((int64_t)(iStack000000000000003c * *(int *)(lVar6 + 0x98d238) + unaff_EBX) * 9
                   + *(int64_t *)(lVar6 + 0x98d248));
    }
  } while( true );
  if (unaff_RSI == (int64_t *)0x0) goto code_r0x0001805c07d9;
  goto LAB_1805c04d0;
code_r0x0001805c07d9:
  plVar2 = *(int64_t **)(unaff_RBP + 0xc0);
  if (iVar9 < 1) {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(*(int32_t *)(*(int64_t *)(*plVar2 + 0x20) + 0x34));
  }
  fVar17 = unaff_XMM11_Da * unaff_XMM11_Da + unaff_XMM12_Da * unaff_XMM12_Da;
  auVar11 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
  fVar12 = auVar11._0_4_;
  fVar17 = fVar12 * 0.5 * (3.0 - fVar17 * fVar12 * fVar12);
  fVar12 = unaff_XMM12_Da * fVar17;
  fVar14 = unaff_XMM11_Da * fVar17;
  if ((((*(uint *)(*plVar2 + 0x56c) & 0x200000) != 0) && (0 < *(int *)((int64_t)plVar2 + 0x1b6c)))
     && ((uVar10 & 3) == 0)) {
    fVar17 = -*(float *)((int64_t)plVar2 + 0x17b4);
    uVar7 = *(uint *)(plVar2 + 0x272) << 0xd ^ *(uint *)(plVar2 + 0x272);
    uVar7 = uVar7 ^ uVar7 >> 0x11;
    uVar7 = uVar7 ^ uVar7 << 5;
    *(uint *)(plVar2 + 0x272) = uVar7;
    fVar19 = (float)(uVar7 - 1);
    if (((fVar19 * 2.1684043e-19 + 1.8626451e-09) * unaff_XMM10_Da * fVar19 +
        (fVar19 * 1.8626451e-09 + 16.0) * unaff_XMM10_Da) * unaff_XMM10_Da < fVar17) {
      uVar10 = uVar10 | 1;
    }
  }
  if ((uVar10 & 2) == 0) {
    if ((uVar10 & 1) != 0) {
      uVar7 = *(uint *)((int64_t)plVar2 + 0x1484) & 0xfffffffd | 1;
      goto LAB_1805c09a3;
    }
  }
  else {
    uVar7 = *(uint *)((int64_t)plVar2 + 0x1484) & 0xfffffffe | 2;
LAB_1805c09a3:
    *(uint *)((int64_t)plVar2 + 0x1484) = uVar7;
    *(int8_t *)((int64_t)plVar2 + 0x2201) = 1;
  }
  uVar7 = *(uint *)((int64_t)plVar2 + 0x1484);
  puVar4 = (uint64_t *)(uint64_t)uVar7;
  lVar6 = *plVar2;
  if ((uVar7 & 2) != 0) {
    in_stack_00000068 = 0;
    in_stack_00000030 = *(uint64_t *)(*(int64_t *)(lVar6 + 0x8d8) + 0x18);
    fVar17 = *(float *)(plVar2 + 0x3b) - *(float *)(*(int64_t *)(lVar6 + 0x20) + 0xc);
    fVar12 = *(float *)((int64_t)plVar2 + 0x1dc) - *(float *)(*(int64_t *)(lVar6 + 0x20) + 0x10);
    if (fVar17 * fVar17 + fVar12 * fVar12 < unaff_XMM10_Da * unaff_XMM10_Da * 0.5) {
      if ((uVar10 & 2) != 0) {
        FUN_1805c1160(plVar2,&stack0x00000020,puVar4,*(uint64_t *)(unaff_RBP + 200));
        fVar17 = -1.0;
        goto LAB_1805c111b;
      }
      *(uint *)((int64_t)plVar2 + 0x1484) = uVar7 & 0xfffffffd | 1;
      *(int8_t *)((int64_t)plVar2 + 0x2201) = 1;
    }
    fVar17 = -1.0;
    goto LAB_1805c111b;
  }
  if ((uVar7 & 1) == 0) {
    lVar6 = FUN_18065cec0(*(int64_t *)
                           (*(int64_t *)(*(int64_t *)(lVar6 + 0x590) + 0x2590) + 0xc78) + 0x60,0,
                          puVar4,lVar6,fVar12);
    fVar17 = *(float *)(lVar6 + 0x10) * 0.9;
    goto LAB_1805c111b;
  }
  lVar1 = *(int64_t *)(lVar6 + 0x20);
  in_stack_00000068 = 0;
  in_stack_00000030 = *(uint64_t *)(*(int64_t *)(lVar6 + 0x8d8) + 0x18);
  fStack0000000000000048 = *(float *)(lVar1 + 0xc);
  fStack000000000000004c = *(float *)(lVar1 + 0x10);
  fStack0000000000000050 = *(float *)(lVar1 + 0x14);
  fStack0000000000000054 = *(float *)(lVar1 + 0x18);
  if ((uVar10 & 1) == 0) {
    puVar4 = (uint64_t *)(uint64_t)(uVar7 & 0xfffffffc);
    *(uint *)((int64_t)plVar2 + 0x1484) = uVar7 & 0xfffffffc;
    *(int8_t *)((int64_t)plVar2 + 0x2201) = 1;
  }
  else {
    fVar19 = *(float *)((int64_t)plVar2 + 0x1dc) - fStack000000000000004c;
    if ((*(float *)(plVar2 + 0x3b) - fStack0000000000000048) *
        (*(float *)(plVar2 + 0x3b) - fStack0000000000000048) + fVar19 * fVar19 <
        unaff_XMM10_Da * unaff_XMM10_Da * 0.5) {
      if (((*(uint *)(lVar6 + 0x56c) & 0x200000) == 0) || (*(int *)((int64_t)plVar2 + 0x1b6c) < 1))
      {
        if (iVar9 < 1) {
          puVar5 = (uint64_t *)FUN_180516f50(lVar6,unaff_RBP + -0x78);
          puVar4 = *(uint64_t **)(unaff_RBP + 200);
          *puVar4 = *puVar5;
          uVar3 = puVar5[4];
          puVar4[3] = puVar5[3];
          puVar4[4] = uVar3;
          uVar3 = puVar5[6];
          puVar4[5] = puVar5[5];
          puVar4[6] = uVar3;
          puVar4[1] = puVar5[1];
          puVar4[2] = puVar5[2];
          puVar4[7] = puVar5[7];
          *(int32_t *)(puVar4 + 8) = *(int32_t *)(puVar5 + 8);
          uVar7 = *(uint *)(plVar2 + 0x272) << 0xd ^ *(uint *)(plVar2 + 0x272);
          uVar7 = uVar7 ^ uVar7 >> 0x11;
          uVar7 = uVar7 ^ uVar7 << 5;
          uVar10 = uVar7 << 0xd ^ uVar7;
          uVar10 = uVar10 ^ uVar10 >> 0x11;
          uVar10 = uVar10 ^ uVar10 << 5;
          *(uint *)(plVar2 + 0x272) = uVar10;
          fVar14 = *(float *)(puVar4 + 3);
          fVar17 = *(float *)((int64_t)puVar4 + 0x1c);
          fVar19 = ((float)(uVar10 - 1) * 1.3969839e-09 - unaff_XMM7_Da) * unaff_XMM8_Da + fVar14;
          fVar13 = ((float)(uVar7 - 1) * 2.3283064e-09 - 5.0) * unaff_XMM8_Da + fVar17;
          *(float *)(unaff_RBP + 0xc4) = fVar13;
          *(float *)(unaff_RBP + 0xc0) = fVar19;
          if ((fVar14 != fVar19) || (fVar17 != fVar13)) {
            fVar19 = fVar12;
            if (*(int *)(puVar4 + 8) != 0) goto LAB_1805c1095;
            goto LAB_1805c109d;
          }
        }
        else {
          fVar13 = fVar12;
          puVar4 = (uint64_t *)FUN_180516f50(lVar6,unaff_RBP + -0x78);
          puVar5 = *(uint64_t **)(unaff_RBP + 200);
          *puVar5 = *puVar4;
          uVar3 = puVar4[4];
          puVar5[3] = puVar4[3];
          puVar5[4] = uVar3;
          uVar3 = puVar4[6];
          puVar5[5] = puVar4[5];
          puVar5[6] = uVar3;
          puVar5[1] = puVar4[1];
          puVar5[2] = puVar4[2];
          puVar5[7] = puVar4[7];
          *(int32_t *)(puVar5 + 8) = *(int32_t *)(puVar4 + 8);
          uVar7 = *(uint *)(plVar2 + 0x272) << 0xd ^ *(uint *)(plVar2 + 0x272);
          uVar7 = uVar7 ^ uVar7 >> 0x11;
          uVar7 = uVar7 ^ uVar7 << 5;
          *(uint *)(plVar2 + 0x272) = uVar7;
          fVar17 = *(float *)(puVar5 + 3);
          fVar19 = *(float *)((int64_t)puVar5 + 0x1c);
          uVar8 = uVar7 << 0xd ^ uVar7;
          uVar8 = uVar8 ^ uVar8 >> 0x11;
          uVar8 = uVar8 ^ uVar8 << 5;
          puVar4 = (uint64_t *)(uint64_t)uVar8;
          uVar10 = uVar8 << 0xd ^ uVar8;
          fVar16 = (float)(uVar7 - 1) * 2.3283064e-10 + 0.5;
          uVar10 = uVar10 ^ uVar10 >> 0x11;
          uVar10 = uVar10 ^ uVar10 << 5;
          *(uint *)(plVar2 + 0x272) = uVar10;
          fVar15 = (float)(uVar10 - 1) * 2.3283064e-10;
          fVar18 = (float)(uVar8 - 1) * 2.3283064e-10;
          fVar15 = (((fVar12 * unaff_XMM10_Da * fVar16 + fVar17 + fVar15) - 0.5) + fVar15) - 0.5;
          fVar19 = (((fVar14 * unaff_XMM10_Da * fVar16 + fVar19 + fVar18) - 0.5) + fVar18) - 0.5;
          fVar14 = *(float *)(puVar5 + 3);
          *(float *)(unaff_RBP + 0xc4) = fVar19;
          *(float *)(unaff_RBP + 0xc0) = fVar15;
          fVar12 = fVar13;
          if ((fVar15 != fVar14) || (fVar19 != *(float *)((int64_t)puVar5 + 0x1c))) {
            if (*(int *)(puVar5 + 8) != 0) {
              *(int32_t *)(puVar5 + 8) = 0;
            }
            puVar5[3] = *(uint64_t *)(unaff_RBP + 0xc0);
          }
        }
      }
      else {
        fVar19 = fVar12;
        FUN_180516f50((int64_t)*(int *)((int64_t)plVar2 + 0x17ac) * 0xa60 + plVar2[0x291] + 0x30a0
                      ,&stack0x00000030);
        if (0 < *(int *)(unaff_RBP + 0xd8)) {
          fVar13 = fStack0000000000000048 - *(float *)(*(int64_t *)(*plVar2 + 0x20) + 0xc);
          fVar15 = fStack000000000000004c - *(float *)(*(int64_t *)(*plVar2 + 0x20) + 0x10);
          fVar18 = fVar15 * fVar15 + fVar13 * fVar13;
          auVar11 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
          fVar17 = auVar11._0_4_;
          fVar17 = fVar17 * 0.5 * (3.0 - fVar18 * fVar17 * fVar17);
          if (0.99 < ABS(fVar14 * fVar17 * fVar15 + fVar12 * fVar17 * fVar13)) {
            uVar10 = *(uint *)(plVar2 + 0x272) << 0xd ^ *(uint *)(plVar2 + 0x272);
            uVar10 = uVar10 ^ uVar10 >> 0x11;
            uVar10 = uVar10 ^ uVar10 << 5;
            *(uint *)(plVar2 + 0x272) = uVar10;
                    // WARNING: Subroutine does not return
            FUN_1808fd400((float)(uVar10 - 1) * 3.949879e-10 - 0.84823006);
          }
        }
        puVar4 = *(uint64_t **)(unaff_RBP + 200);
        *puVar4 = in_stack_00000030;
        puVar4[1] = CONCAT44(iStack000000000000003c,iStack0000000000000038);
        puVar4[2] = CONCAT44(uStack0000000000000044,iStack0000000000000040);
        puVar4[7] = in_stack_00000068;
        *(int32_t *)(puVar4 + 8) = in_stack_00000070;
        *(float *)(puVar4 + 3) = fStack0000000000000048;
        *(float *)((int64_t)puVar4 + 0x1c) = fStack000000000000004c;
        *(float *)(puVar4 + 4) = fStack0000000000000050;
        *(float *)((int64_t)puVar4 + 0x24) = fStack0000000000000054;
        *(float *)(puVar4 + 5) = fStack0000000000000058;
        *(int32_t *)((int64_t)puVar4 + 0x2c) = uStack000000000000005c;
        *(int32_t *)(puVar4 + 6) = uStack0000000000000060;
        *(int32_t *)((int64_t)puVar4 + 0x34) = uStack0000000000000064;
        uVar7 = *(uint *)(plVar2 + 0x272) << 0xd ^ *(uint *)(plVar2 + 0x272);
        uVar7 = uVar7 ^ uVar7 >> 0x11;
        uVar7 = uVar7 ^ uVar7 << 5;
        uVar10 = uVar7 << 0xd ^ uVar7;
        uVar10 = uVar10 ^ uVar10 >> 0x11;
        uVar10 = uVar10 ^ uVar10 << 5;
        *(uint *)(plVar2 + 0x272) = uVar10;
        fVar17 = *(float *)(puVar4 + 3);
        fVar14 = *(float *)((int64_t)puVar4 + 0x1c);
        fVar12 = ((float)(uVar10 - 1) * 9.313226e-10 - 2.0) * in_stack_00000028 + fVar17;
        fVar13 = ((float)(uVar7 - 1) * 9.313226e-10 - 2.0) * in_stack_00000028 + fVar14;
        *(float *)(unaff_RBP + 0xc4) = fVar13;
        *(float *)(unaff_RBP + 0xc0) = fVar12;
        if ((fVar17 != fVar12) || (fVar12 = fVar19, fVar14 != fVar13)) {
LAB_1805c1095:
          *(int32_t *)(puVar4 + 8) = 0;
          fVar12 = fVar19;
LAB_1805c109d:
          puVar4[3] = *(uint64_t *)(unaff_RBP + 0xc0);
        }
      }
    }
  }
  lVar6 = FUN_18065cec0(*(int64_t *)
                         (*(int64_t *)(*(int64_t *)(*plVar2 + 0x590) + 0x2590) + 0xc78) + 0x60,0,
                        puVar4,fVar17,fVar12);
  fVar17 = *(float *)(lVar6 + 0x10) * 1.8;
LAB_1805c111b:
  *(float *)((int64_t)plVar2 + 0x2204) = fVar17;
  return;
}






// 函数: void FUN_1805c0820(void)
void FUN_1805c0820(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint uVar6;
  uint uVar7;
  int64_t unaff_RBP;
  int64_t *unaff_RDI;
  uint uVar8;
  int in_R11D;
  uint unaff_R13D;
  float fVar9;
  float fVar10;
  int8_t auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  uint unaff_XMM6_Da;
  float fVar15;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float fVar16;
  float unaff_XMM12_Da;
  float fVar17;
  float in_stack_00000028;
  uint64_t in_stack_00000030;
  uint64_t in_stack_00000038;
  uint64_t in_stack_00000040;
  float in_stack_00000048;
  float fStack000000000000004c;
  int32_t in_stack_00000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  uint64_t in_stack_00000068;
  int32_t in_stack_00000070;
  
  fVar9 = unaff_XMM11_Da * unaff_XMM11_Da + unaff_XMM12_Da * unaff_XMM12_Da;
  auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
  fVar17 = auVar11._0_4_;
  fVar9 = fVar17 * 0.5 * (3.0 - fVar9 * fVar17 * fVar17);
  fVar17 = unaff_XMM12_Da * fVar9;
  fVar16 = unaff_XMM11_Da * fVar9;
  if ((((*(uint *)(*unaff_RDI + 0x56c) & 0x200000) != 0) &&
      (0 < *(int *)((int64_t)unaff_RDI + 0x1b6c))) && ((unaff_R13D & 3) == 0)) {
    fVar9 = (float)(*(uint *)((int64_t)unaff_RDI + 0x17b4) ^ unaff_XMM6_Da);
    uVar6 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
    uVar6 = uVar6 ^ uVar6 >> 0x11;
    uVar6 = uVar6 ^ uVar6 << 5;
    *(uint *)(unaff_RDI + 0x272) = uVar6;
    fVar10 = (float)(uVar6 - 1);
    if (((fVar10 * 2.1684043e-19 + 1.8626451e-09) * unaff_XMM10_Da * fVar10 +
        (fVar10 * 1.8626451e-09 + 16.0) * unaff_XMM10_Da) * unaff_XMM10_Da < fVar9) {
      unaff_R13D = unaff_R13D | 1;
    }
  }
  if ((unaff_R13D & 2) == 0) {
    if ((unaff_R13D & 1) != 0) {
      uVar6 = *(uint *)((int64_t)unaff_RDI + 0x1484) & 0xfffffffd | 1;
      goto LAB_1805c09a3;
    }
  }
  else {
    uVar6 = *(uint *)((int64_t)unaff_RDI + 0x1484) & 0xfffffffe | 2;
LAB_1805c09a3:
    *(uint *)((int64_t)unaff_RDI + 0x1484) = uVar6;
    *(int8_t *)((int64_t)unaff_RDI + 0x2201) = 1;
  }
  uVar6 = *(uint *)((int64_t)unaff_RDI + 0x1484);
  puVar3 = (uint64_t *)(uint64_t)uVar6;
  lVar5 = *unaff_RDI;
  if ((uVar6 & 2) != 0) {
    in_stack_00000068 = 0;
    in_stack_00000030 = *(uint64_t *)(*(int64_t *)(lVar5 + 0x8d8) + 0x18);
    fVar17 = *(float *)(unaff_RDI + 0x3b) - *(float *)(*(int64_t *)(lVar5 + 0x20) + 0xc);
    fVar16 = *(float *)((int64_t)unaff_RDI + 0x1dc) -
             *(float *)(*(int64_t *)(lVar5 + 0x20) + 0x10);
    fVar9 = unaff_XMM10_Da * unaff_XMM10_Da * 0.5;
    if (fVar17 * fVar17 + fVar16 * fVar16 < fVar9) {
      if ((unaff_R13D & 2) != 0) {
        FUN_1805c1160(fVar9,&stack0x00000020,puVar3,*(uint64_t *)(unaff_RBP + 200));
        fVar9 = -1.0;
        goto LAB_1805c111b;
      }
      *(uint *)((int64_t)unaff_RDI + 0x1484) = uVar6 & 0xfffffffd | 1;
      *(int8_t *)((int64_t)unaff_RDI + 0x2201) = 1;
    }
    fVar9 = -1.0;
    goto LAB_1805c111b;
  }
  if ((uVar6 & 1) == 0) {
    lVar5 = FUN_18065cec0(*(int64_t *)
                           (*(int64_t *)(*(int64_t *)(lVar5 + 0x590) + 0x2590) + 0xc78) + 0x60,0,
                          puVar3,lVar5,fVar17);
    fVar9 = *(float *)(lVar5 + 0x10) * 0.9;
    goto LAB_1805c111b;
  }
  lVar1 = *(int64_t *)(lVar5 + 0x20);
  in_stack_00000068 = 0;
  in_stack_00000030 = *(uint64_t *)(*(int64_t *)(lVar5 + 0x8d8) + 0x18);
  in_stack_00000048 = *(float *)(lVar1 + 0xc);
  fStack000000000000004c = *(float *)(lVar1 + 0x10);
  in_stack_00000050 = *(int32_t *)(lVar1 + 0x14);
  uStack0000000000000054 = *(int32_t *)(lVar1 + 0x18);
  if ((unaff_R13D & 1) == 0) {
    puVar3 = (uint64_t *)(uint64_t)(uVar6 & 0xfffffffc);
    *(uint *)((int64_t)unaff_RDI + 0x1484) = uVar6 & 0xfffffffc;
    *(int8_t *)((int64_t)unaff_RDI + 0x2201) = 1;
  }
  else {
    fVar10 = *(float *)((int64_t)unaff_RDI + 0x1dc) - fStack000000000000004c;
    if ((*(float *)(unaff_RDI + 0x3b) - in_stack_00000048) *
        (*(float *)(unaff_RDI + 0x3b) - in_stack_00000048) + fVar10 * fVar10 <
        unaff_XMM10_Da * unaff_XMM10_Da * 0.5) {
      if (((*(uint *)(lVar5 + 0x56c) & 0x200000) == 0) ||
         (*(int *)((int64_t)unaff_RDI + 0x1b6c) < 1)) {
        if (in_R11D < 1) {
          puVar4 = (uint64_t *)FUN_180516f50(lVar5,unaff_RBP + -0x78);
          puVar3 = *(uint64_t **)(unaff_RBP + 200);
          *puVar3 = *puVar4;
          uVar2 = puVar4[4];
          puVar3[3] = puVar4[3];
          puVar3[4] = uVar2;
          uVar2 = puVar4[6];
          puVar3[5] = puVar4[5];
          puVar3[6] = uVar2;
          puVar3[1] = puVar4[1];
          puVar3[2] = puVar4[2];
          puVar3[7] = puVar4[7];
          *(int32_t *)(puVar3 + 8) = *(int32_t *)(puVar4 + 8);
          uVar7 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
          uVar7 = uVar7 ^ uVar7 >> 0x11;
          uVar7 = uVar7 ^ uVar7 << 5;
          uVar6 = uVar7 << 0xd ^ uVar7;
          uVar6 = uVar6 ^ uVar6 >> 0x11;
          uVar6 = uVar6 ^ uVar6 << 5;
          *(uint *)(unaff_RDI + 0x272) = uVar6;
          fVar16 = *(float *)(puVar3 + 3);
          fVar9 = *(float *)((int64_t)puVar3 + 0x1c);
          fVar10 = ((float)(uVar6 - 1) * 1.3969839e-09 - unaff_XMM7_Da) * unaff_XMM8_Da + fVar16;
          fVar12 = ((float)(uVar7 - 1) * 2.3283064e-09 - 5.0) * unaff_XMM8_Da + fVar9;
          *(float *)(unaff_RBP + 0xc4) = fVar12;
          *(float *)(unaff_RBP + 0xc0) = fVar10;
          if ((fVar16 != fVar10) || (fVar9 != fVar12)) {
            fVar10 = fVar17;
            if (*(int *)(puVar3 + 8) != 0) goto LAB_1805c1095;
            goto LAB_1805c109d;
          }
        }
        else {
          fVar12 = fVar17;
          puVar3 = (uint64_t *)FUN_180516f50(lVar5,unaff_RBP + -0x78);
          puVar4 = *(uint64_t **)(unaff_RBP + 200);
          *puVar4 = *puVar3;
          uVar2 = puVar3[4];
          puVar4[3] = puVar3[3];
          puVar4[4] = uVar2;
          uVar2 = puVar3[6];
          puVar4[5] = puVar3[5];
          puVar4[6] = uVar2;
          puVar4[1] = puVar3[1];
          puVar4[2] = puVar3[2];
          puVar4[7] = puVar3[7];
          *(int32_t *)(puVar4 + 8) = *(int32_t *)(puVar3 + 8);
          uVar7 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
          uVar7 = uVar7 ^ uVar7 >> 0x11;
          uVar7 = uVar7 ^ uVar7 << 5;
          *(uint *)(unaff_RDI + 0x272) = uVar7;
          fVar9 = *(float *)(puVar4 + 3);
          fVar10 = *(float *)((int64_t)puVar4 + 0x1c);
          uVar8 = uVar7 << 0xd ^ uVar7;
          uVar8 = uVar8 ^ uVar8 >> 0x11;
          uVar8 = uVar8 ^ uVar8 << 5;
          puVar3 = (uint64_t *)(uint64_t)uVar8;
          uVar6 = uVar8 << 0xd ^ uVar8;
          fVar14 = (float)(uVar7 - 1) * 2.3283064e-10 + 0.5;
          uVar6 = uVar6 ^ uVar6 >> 0x11;
          uVar6 = uVar6 ^ uVar6 << 5;
          *(uint *)(unaff_RDI + 0x272) = uVar6;
          fVar13 = (float)(uVar6 - 1) * 2.3283064e-10;
          fVar15 = (float)(uVar8 - 1) * 2.3283064e-10;
          fVar13 = (((fVar17 * unaff_XMM10_Da * fVar14 + fVar9 + fVar13) - 0.5) + fVar13) - 0.5;
          fVar10 = (((fVar16 * unaff_XMM10_Da * fVar14 + fVar10 + fVar15) - 0.5) + fVar15) - 0.5;
          fVar16 = *(float *)(puVar4 + 3);
          *(float *)(unaff_RBP + 0xc4) = fVar10;
          *(float *)(unaff_RBP + 0xc0) = fVar13;
          fVar17 = fVar12;
          if ((fVar13 != fVar16) || (fVar10 != *(float *)((int64_t)puVar4 + 0x1c))) {
            if (*(int *)(puVar4 + 8) != 0) {
              *(int32_t *)(puVar4 + 8) = 0;
            }
            puVar4[3] = *(uint64_t *)(unaff_RBP + 0xc0);
          }
        }
      }
      else {
        fVar10 = fVar17;
        FUN_180516f50((int64_t)*(int *)((int64_t)unaff_RDI + 0x17ac) * 0xa60 +
                      unaff_RDI[0x291] + 0x30a0,&stack0x00000030);
        if (0 < *(int *)(unaff_RBP + 0xd8)) {
          fVar12 = in_stack_00000048 - *(float *)(*(int64_t *)(*unaff_RDI + 0x20) + 0xc);
          fVar13 = fStack000000000000004c - *(float *)(*(int64_t *)(*unaff_RDI + 0x20) + 0x10);
          fVar15 = fVar13 * fVar13 + fVar12 * fVar12;
          auVar11 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
          fVar9 = auVar11._0_4_;
          fVar9 = fVar9 * 0.5 * (3.0 - fVar15 * fVar9 * fVar9);
          if (0.99 < ABS(fVar16 * fVar9 * fVar13 + fVar17 * fVar9 * fVar12)) {
            uVar6 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
            uVar6 = uVar6 ^ uVar6 >> 0x11;
            uVar6 = uVar6 ^ uVar6 << 5;
            *(uint *)(unaff_RDI + 0x272) = uVar6;
                    // WARNING: Subroutine does not return
            FUN_1808fd400((float)(uVar6 - 1) * 3.949879e-10 - 0.84823006);
          }
        }
        puVar3 = *(uint64_t **)(unaff_RBP + 200);
        *puVar3 = in_stack_00000030;
        puVar3[1] = in_stack_00000038;
        puVar3[2] = in_stack_00000040;
        puVar3[7] = in_stack_00000068;
        *(int32_t *)(puVar3 + 8) = in_stack_00000070;
        *(float *)(puVar3 + 3) = in_stack_00000048;
        *(float *)((int64_t)puVar3 + 0x1c) = fStack000000000000004c;
        *(int32_t *)(puVar3 + 4) = in_stack_00000050;
        *(int32_t *)((int64_t)puVar3 + 0x24) = uStack0000000000000054;
        *(int32_t *)(puVar3 + 5) = uStack0000000000000058;
        *(int32_t *)((int64_t)puVar3 + 0x2c) = uStack000000000000005c;
        *(int32_t *)(puVar3 + 6) = uStack0000000000000060;
        *(int32_t *)((int64_t)puVar3 + 0x34) = uStack0000000000000064;
        uVar7 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
        uVar7 = uVar7 ^ uVar7 >> 0x11;
        uVar7 = uVar7 ^ uVar7 << 5;
        uVar6 = uVar7 << 0xd ^ uVar7;
        uVar6 = uVar6 ^ uVar6 >> 0x11;
        uVar6 = uVar6 ^ uVar6 << 5;
        *(uint *)(unaff_RDI + 0x272) = uVar6;
        fVar9 = *(float *)(puVar3 + 3);
        fVar16 = *(float *)((int64_t)puVar3 + 0x1c);
        fVar17 = ((float)(uVar6 - 1) * 9.313226e-10 - 2.0) * in_stack_00000028 + fVar9;
        fVar12 = ((float)(uVar7 - 1) * 9.313226e-10 - 2.0) * in_stack_00000028 + fVar16;
        *(float *)(unaff_RBP + 0xc4) = fVar12;
        *(float *)(unaff_RBP + 0xc0) = fVar17;
        if ((fVar9 != fVar17) || (fVar17 = fVar10, fVar16 != fVar12)) {
LAB_1805c1095:
          *(int32_t *)(puVar3 + 8) = 0;
          fVar17 = fVar10;
LAB_1805c109d:
          puVar3[3] = *(uint64_t *)(unaff_RBP + 0xc0);
        }
      }
    }
  }
  lVar5 = FUN_18065cec0(*(int64_t *)
                         (*(int64_t *)(*(int64_t *)(*unaff_RDI + 0x590) + 0x2590) + 0xc78) + 0x60,
                        0,puVar3,fVar9,fVar17);
  fVar9 = *(float *)(lVar5 + 0x10) * 1.8;
LAB_1805c111b:
  *(float *)((int64_t)unaff_RDI + 0x2204) = fVar9;
  return;
}






