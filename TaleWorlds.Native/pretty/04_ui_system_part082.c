#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part082.c - 4 个函数

// 函数: void FUN_1807141f0(int64_t param_1,int param_2,int param_3,uint64_t param_4)
void FUN_1807141f0(int64_t param_1,int param_2,int param_3,uint64_t param_4)

{
  byte bVar1;
  int iVar2;
  int in_stack_00000048;
  int in_stack_00000070;
  int iStack_98;
  int iStack_94;
  uint uStack_90;
  int iStack_88;
  uint uStack_84;
  int64_t lStack_80;
  uint64_t uStack_78;
  int iStack_6c;
  int iStack_68;
  int iStack_60;
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)&iStack_98;
  iStack_88 = *(int *)(param_1 + 8);
  iVar2 = 0;
  if (0 < in_stack_00000048) {
    iVar2 = in_stack_00000048;
  }
  iStack_60 = 0;
  if (7 < iVar2) {
    iStack_60 = 8;
  }
  uStack_90 = iVar2 - iStack_60;
  iStack_68 = 0;
  uStack_84 = 0;
  if (in_stack_00000070 == 2) {
    bVar1 = (&processed_var_8784_ptr)[param_3 - param_2];
    uStack_84 = (uint)bVar1;
    if (bVar1 == uStack_90 || (int)uStack_84 < (int)uStack_90) {
      iVar2 = uStack_90 - bVar1;
      iStack_68 = 0;
      if (7 < iVar2) {
        iStack_68 = 8;
      }
      uStack_90 = iVar2 - iStack_68;
    }
    else {
      uStack_84 = 0;
    }
  }
  iStack_98 = param_3;
  iStack_94 = param_2;
  lStack_80 = param_1;
  uStack_78 = param_4;
  iStack_6c = param_2;
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0((int64_t)iStack_88 * 4,0xffffffffffffff0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_1807147f0(int64_t param_1,int param_2,uint param_3,int param_4,int64_t param_5,
                  int64_t param_6,int64_t param_7,int64_t param_8,int param_9,int *param_10,
                  int param_11,uint *param_12,uint param_13,int *param_14,int param_15,
                  int64_t param_16,int64_t param_17,int64_t param_18,int param_19,int param_20,
                  uint64_t param_21,int param_22,int param_23,int param_24)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int *piVar3;
  uint *puVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int64_t lVar8;
  int8_t (*pauVar9) [16];
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint64_t uVar15;
  int iVar16;
  uint uVar17;
  int64_t *plVar18;
  int iVar19;
  uint uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  int64_t lVar23;
  int64_t lVar24;
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  int8_t auVar27 [16];
  int8_t auVar28 [16];
  int8_t auVar29 [16];
  int8_t auVar30 [16];
  int8_t in_XMM2 [16];
  int8_t auVar31 [16];
  int8_t auVar32 [16];
  int8_t auVar33 [16];
  int8_t auVar34 [16];
  int8_t auVar35 [16];
  int8_t auVar36 [16];
  int8_t auVar37 [16];
  int8_t auVar38 [16];
  int8_t auVar39 [16];
  int8_t auVar40 [16];
  int8_t auVar41 [16];
  uint uStackX_10;
  int iStack_98;
  int64_t lStack_90;
  
  uVar15 = (uint64_t)param_2;
  iVar11 = 0;
  uVar21 = (uint64_t)(int)param_3;
  iVar13 = param_19 * 8;
  bVar5 = 1 < param_19;
  auVar41 = ZEXT116(bVar5);
  lStack_90 = 6;
  uVar22 = uVar21;
  iVar14 = 0x40;
  do {
    iVar16 = 0;
    iVar19 = iVar14 + iVar11 >> 1;
    bVar6 = false;
    if (param_2 < (int)uVar22) {
      piVar12 = (int *)(uVar21 * 4 + param_5);
      uVar22 = (uint64_t)(uint)((int)uVar22 - param_2);
      iVar16 = 0;
      do {
        piVar3 = (int *)((param_6 - param_5) + -4 + (int64_t)piVar12);
        piVar12 = piVar12 + -1;
        iVar7 = (*piVar3 * iVar19 >> 6) + *piVar12;
        if ((*(int *)((int64_t)piVar12 + (param_7 - param_5)) <= iVar7) || (bVar6)) {
          bVar6 = true;
          if (*(int *)((param_8 - param_5) + (int64_t)piVar12) <= iVar7) {
            iVar7 = *(int *)((param_8 - param_5) + (int64_t)piVar12);
          }
          iVar16 = iVar16 + iVar7;
        }
        else if (iVar13 <= iVar7) {
          iVar16 = iVar16 + iVar13;
        }
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
      uVar22 = (uint64_t)param_3;
    }
    iVar7 = iVar19;
    if (iVar16 <= param_9) {
      iVar7 = iVar14;
      iVar11 = iVar19;
    }
    lStack_90 = lStack_90 + -1;
    iVar14 = iVar7;
  } while (lStack_90 != 0);
  iVar14 = 0;
  bVar6 = false;
  uStackX_10 = (uint)uVar22;
  if (param_2 < (int)(uint)uVar22) {
    piVar12 = (int *)(uVar21 * 4 + param_5);
    uVar22 = (uint64_t)(param_3 - param_2);
    do {
      piVar3 = (int *)((int64_t)piVar12 + (param_6 - param_5) + -4);
      piVar12 = piVar12 + -1;
      iVar16 = (*piVar3 * iVar11 >> 6) + *piVar12;
      if ((*(int *)((int64_t)piVar12 + (param_7 - param_5)) <= iVar16) || (bVar6)) {
        bVar6 = true;
        iVar19 = iVar16;
      }
      else {
        iVar19 = iVar13;
        if (iVar16 < iVar13) {
          iVar19 = 0;
        }
      }
      iVar16 = *(int *)((int64_t)piVar12 + (param_8 - param_5));
      if (iVar19 < iVar16) {
        iVar16 = iVar19;
      }
      iVar14 = iVar14 + iVar16;
      *(int *)((param_16 - param_5) + (int64_t)piVar12) = iVar16;
      uVar22 = uVar22 - 1;
      uStackX_10 = param_3;
    } while (uVar22 != 0);
  }
  iStack_98 = uStackX_10 - 1;
  lVar8 = (int64_t)iStack_98;
  if (param_4 < iStack_98) {
    uVar22 = uVar21;
    do {
      lVar23 = *(int64_t *)(param_1 + 0x20);
      iVar7 = (int)*(short *)(uVar15 * 2 + lVar23);
      iVar19 = (int)*(short *)(lVar23 + uVar22 * 2);
      uVar17 = iVar19 - iVar7;
      uVar20 = (uint)(param_9 - iVar14) / uVar17;
      piVar12 = (int *)(param_16 + lVar8 * 4);
      iVar16 = (int)*(short *)(lVar23 + lVar8 * 2);
      iVar11 = *piVar12;
      iVar19 = iVar19 - iVar16;
      iVar16 = ((iVar7 - uVar17 * uVar20) - iVar16) + (param_9 - iVar14);
      if (iVar16 < 1) {
        iVar16 = 0;
      }
      iVar7 = iVar19 * uVar20 + iVar11 + iVar16;
      iVar16 = *(int *)(param_7 + lVar8 * 4);
      if (iVar16 <= iVar13 + 8) {
        iVar16 = iVar13 + 8;
      }
      if (iVar16 <= iVar7) {
        if (param_22 == 0) {
          iVar11 = FUN_18070f310(param_21,1);
          if (iVar11 != 0) goto LAB_180714c0e;
        }
        else {
          if ((int64_t)uVar22 < 0x12) {
            iVar11 = 0;
          }
          else {
            iVar11 = 9;
            if (iStack_98 < param_23) {
              iVar11 = 7;
            }
          }
          if (((int)uStackX_10 <= param_2 + 2) ||
             ((((iVar11 * iVar19 << ((byte)param_20 & 0x1f)) << 3) >> 4 < iVar7 &&
              (iStack_98 <= param_24)))) {
            func_0x000180705150(param_21);
            goto LAB_180714c0e;
          }
          func_0x000180705150(param_21);
        }
        iVar14 = iVar14 + 8;
        iVar7 = iVar7 + -8;
        iVar11 = *piVar12;
      }
      iVar11 = iVar11 + param_13;
      if (0 < (int)param_13) {
        param_13 = (uint)(byte)(&processed_var_8784_ptr)[lVar8 - uVar15];
      }
      iVar11 = (iVar14 - iVar11) + param_13;
      iVar14 = iVar13;
      if (iVar7 < iVar13) {
        iVar14 = 0;
      }
      uStackX_10 = uStackX_10 - 1;
      *piVar12 = iVar14;
      iStack_98 = iStack_98 + -1;
      lVar8 = uVar22 - 2;
      iVar14 = iVar11 + iVar13;
      if (iVar7 < iVar13) {
        iVar14 = iVar11;
      }
      uVar22 = uVar22 - 1;
    } while (param_4 < iStack_98);
  }
  param_9 = param_9 + param_11;
LAB_180714c0e:
  if ((int)param_13 < 1) {
    uVar17 = 0;
    *param_12 = 0;
  }
  else if (param_22 == 0) {
    iVar13 = FUN_18070f540(param_21,(uStackX_10 - param_2) + 1);
    uVar17 = iVar13 + param_2;
    *param_12 = uVar17;
  }
  else {
    uVar17 = *param_12;
    if ((int)uStackX_10 <= (int)*param_12) {
      uVar17 = uStackX_10;
    }
    *param_12 = uVar17;
    FUN_1807056f0(param_21,uVar17 - param_2);
    uVar17 = *param_12;
  }
  iVar13 = param_9 + param_15;
  if (param_2 < (int)uVar17) {
    iVar13 = param_9;
  }
  iVar11 = 0;
  if (param_2 < (int)uVar17) {
    iVar11 = param_15;
  }
  if (iVar11 < 1) {
    *param_14 = 0;
  }
  else if (param_22 == 0) {
    iVar11 = FUN_18070f310(param_21);
    *param_14 = iVar11;
  }
  else {
    func_0x000180705150(param_21,*param_14,1);
  }
  plVar18 = (int64_t *)(param_1 + 0x20);
  lVar23 = (int64_t)(int)uStackX_10;
  lVar8 = *plVar18;
  uVar20 = (int)*(short *)(lVar8 + lVar23 * 2) - (int)*(short *)(lVar8 + uVar15 * 2);
  uVar17 = (uint)(iVar13 - iVar14) / uVar20;
  auVar40._4_4_ = uVar17;
  auVar40._0_4_ = uVar17;
  auVar40._8_4_ = uVar17;
  auVar40._12_4_ = uVar17;
  iVar13 = (iVar13 - iVar14) - uVar17 * uVar20;
  if (((param_2 < (int)uStackX_10) && (0xf < uStackX_10 - param_2)) && (1 < ui_system_control_config)) {
    plVar1 = (int64_t *)(param_16 + uVar15 * 4);
    plVar2 = (int64_t *)(param_16 + (int64_t)(int)(uStackX_10 - 1) * 4);
    if ((((int64_t *)(lVar8 + lVar23 * 2) < plVar1) || (plVar2 < (int64_t *)(lVar8 + uVar15 * 2)))
       && ((plVar18 < plVar1 || (plVar2 < plVar18)))) {
      uVar20 = uStackX_10 - param_2 & 0x8000000f;
      if ((int)uVar20 < 0) {
        uVar20 = (uVar20 - 1 | 0xfffffff0) + 1;
      }
      pauVar9 = (int8_t (*) [16])(param_16 + (uVar15 + 8) * 4);
      lVar24 = uVar15 * 2 + 8;
      uVar22 = uVar15;
      do {
        auVar25._8_8_ = 0;
        auVar25._0_8_ = *(uint64_t *)(lVar24 + -6 + lVar8);
        auVar27._8_8_ = 0;
        auVar27._0_8_ = *(uint64_t *)(lVar24 + -8 + lVar8);
        auVar31 = pmovsxwd(in_XMM2,auVar25);
        auVar25 = pmovsxwd(auVar25,auVar27);
        auVar28._8_8_ = 0;
        auVar28._0_8_ = *(uint64_t *)(lVar8 + -0x20 + lVar24 + 0x20);
        auVar32._0_4_ = auVar31._0_4_ - auVar25._0_4_;
        auVar32._4_4_ = auVar31._4_4_ - auVar25._4_4_;
        auVar32._8_4_ = auVar31._8_4_ - auVar25._8_4_;
        auVar32._12_4_ = auVar31._12_4_ - auVar25._12_4_;
        param_2 = param_2 + 0x10;
        uVar22 = uVar22 + 0x10;
        auVar25 = pmulld(auVar32,auVar40);
        auVar33._0_4_ = auVar25._0_4_ + *(int *)pauVar9[-2];
        auVar33._4_4_ = auVar25._4_4_ + *(int *)(pauVar9[-2] + 4);
        auVar33._8_4_ = auVar25._8_4_ + *(int *)(pauVar9[-2] + 8);
        auVar33._12_4_ = auVar25._12_4_ + *(int *)(pauVar9[-2] + 0xc);
        auVar31._8_8_ = 0;
        auVar31._0_8_ = *(uint64_t *)(lVar24 + 2 + lVar8);
        pauVar9[-2] = auVar33;
        auVar34 = pmovsxwd(auVar33,auVar31);
        auVar25 = pmovsxwd(auVar31,auVar28);
        auVar29._8_8_ = 0;
        auVar29._0_8_ = *(uint64_t *)(lVar24 + 8 + lVar8);
        auVar35._0_4_ = auVar34._0_4_ - auVar25._0_4_;
        auVar35._4_4_ = auVar34._4_4_ - auVar25._4_4_;
        auVar35._8_4_ = auVar34._8_4_ - auVar25._8_4_;
        auVar35._12_4_ = auVar34._12_4_ - auVar25._12_4_;
        auVar25 = pmulld(auVar35,auVar40);
        auVar36._0_4_ = auVar25._0_4_ + *(int *)pauVar9[-1];
        auVar36._4_4_ = auVar25._4_4_ + *(int *)(pauVar9[-1] + 4);
        auVar36._8_4_ = auVar25._8_4_ + *(int *)(pauVar9[-1] + 8);
        auVar36._12_4_ = auVar25._12_4_ + *(int *)(pauVar9[-1] + 0xc);
        auVar34._8_8_ = 0;
        auVar34._0_8_ = *(uint64_t *)(lVar24 + 10 + lVar8);
        pauVar9[-1] = auVar36;
        auVar31 = pmovsxwd(auVar36,auVar34);
        auVar25 = pmovsxwd(auVar34,auVar29);
        auVar30._8_8_ = 0;
        auVar30._0_8_ = *(uint64_t *)(lVar24 + 0x10 + lVar8);
        auVar37._0_4_ = auVar31._0_4_ - auVar25._0_4_;
        auVar37._4_4_ = auVar31._4_4_ - auVar25._4_4_;
        auVar37._8_4_ = auVar31._8_4_ - auVar25._8_4_;
        auVar37._12_4_ = auVar31._12_4_ - auVar25._12_4_;
        auVar25 = pmulld(auVar37,auVar40);
        auVar38._0_4_ = auVar25._0_4_ + *(int *)*pauVar9;
        auVar38._4_4_ = auVar25._4_4_ + *(int *)(*pauVar9 + 4);
        auVar38._8_4_ = auVar25._8_4_ + *(int *)(*pauVar9 + 8);
        auVar38._12_4_ = auVar25._12_4_ + *(int *)(*pauVar9 + 0xc);
        auVar26._8_8_ = 0;
        auVar26._0_8_ = *(uint64_t *)(lVar24 + 0x12 + lVar8);
        *pauVar9 = auVar38;
        auVar31 = pmovsxwd(auVar38,auVar26);
        auVar25 = pmovsxwd(auVar26,auVar30);
        auVar39._0_4_ = auVar31._0_4_ - auVar25._0_4_;
        auVar39._4_4_ = auVar31._4_4_ - auVar25._4_4_;
        auVar39._8_4_ = auVar31._8_4_ - auVar25._8_4_;
        auVar39._12_4_ = auVar31._12_4_ - auVar25._12_4_;
        auVar25 = pmulld(auVar39,auVar40);
        in_XMM2._0_4_ = auVar25._0_4_ + *(int *)pauVar9[1];
        in_XMM2._4_4_ = auVar25._4_4_ + *(int *)(pauVar9[1] + 4);
        in_XMM2._8_4_ = auVar25._8_4_ + *(int *)(pauVar9[1] + 8);
        in_XMM2._12_4_ = auVar25._12_4_ + *(int *)(pauVar9[1] + 0xc);
        pauVar9[1] = in_XMM2;
        pauVar9 = pauVar9 + 4;
        lVar24 = lVar24 + 0x20;
      } while ((int64_t)uVar22 < (int64_t)(int)(uStackX_10 - uVar20));
    }
  }
  for (lVar8 = (int64_t)param_2; uVar22 = uVar15, lVar8 < lVar23; lVar8 = lVar8 + 1) {
    piVar12 = (int *)(param_16 + lVar8 * 4);
    *piVar12 = *piVar12 +
               ((int)*(short *)(*plVar18 + 2 + lVar8 * 2) - (int)*(short *)(*plVar18 + lVar8 * 2)) *
               uVar17;
  }
  for (; (int64_t)uVar22 < lVar23; uVar22 = uVar22 + 1) {
    iVar11 = (int)*(short *)(*plVar18 + 2 + uVar22 * 2) - (int)*(short *)(*plVar18 + uVar22 * 2);
    iVar14 = iVar13;
    if (iVar11 <= iVar13) {
      iVar14 = iVar11;
    }
    piVar12 = (int *)(param_16 + uVar22 * 4);
    *piVar12 = *piVar12 + iVar14;
    iVar13 = iVar13 - iVar14;
  }
  iVar13 = 0;
  param_9 = 0;
  if ((int64_t)uVar15 < lVar23) {
    piVar12 = (int *)(param_16 + uVar15 * 4);
    lVar24 = param_17 - param_16;
    lVar8 = param_18 - param_16;
    uVar22 = uVar15;
    do {
      iVar14 = *piVar12 + param_9;
      iVar11 = (int)*(short *)(*plVar18 + 2 + uVar22 * 2) - (int)*(short *)(*plVar18 + uVar22 * 2)
               << ((byte)param_20 & 0x1f);
      if (iVar11 < 2) {
        iVar11 = iVar14 + param_19 * -8;
        iVar13 = 0;
        if (-1 < iVar11) {
          iVar13 = iVar11;
        }
        *piVar12 = iVar14 - iVar13;
        *(int32_t *)(lVar24 + (int64_t)piVar12) = 0;
        *(int32_t *)(lVar8 + (int64_t)piVar12) = 1;
      }
      else {
        iVar13 = iVar14 - *(int *)((param_8 - param_16) + (int64_t)piVar12);
        if (iVar13 < 1) {
          iVar13 = 0;
        }
        iVar14 = iVar14 - iVar13;
        *piVar12 = iVar14;
        if (((param_19 != 2) || (iVar11 < 3)) ||
           ((*param_14 != 0 || (iVar16 = 1, (int)*param_12 <= (int)uVar15)))) {
          iVar16 = 0;
        }
        uVar17 = iVar11 * param_19 + iVar16;
        iVar16 = ((int)*(short *)(*(int64_t *)(param_1 + 0x40) + uVar22 * 2) + param_20 * 8) *
                 uVar17;
        iVar19 = (iVar16 >> 1) + uVar17 * -0x15;
        if (iVar11 == 2) {
          iVar19 = iVar19 + ((int)(uVar17 * 8) >> 2);
        }
        if (iVar14 + iVar19 < (int)(uVar17 * 0x10)) {
          iVar16 = iVar16 >> 2;
LAB_18071500a:
          iVar19 = iVar19 + iVar16;
        }
        else if (iVar14 + iVar19 < (int)(uVar17 * 0x18)) {
          iVar16 = iVar16 >> 3;
          goto LAB_18071500a;
        }
        uVar10 = iVar14 + uVar17 * 4 + iVar19;
        piVar3 = (int *)(lVar24 + (int64_t)piVar12);
        uVar20 = 0;
        if (-1 < (int)uVar10) {
          uVar20 = uVar10;
        }
        iVar14 = (int)((uint64_t)uVar20 / (uint64_t)uVar17 >> 3);
        *piVar3 = iVar14;
        if (*piVar12 >> 3 < iVar14 * param_19) {
          iVar14 = (*piVar12 >> bVar5) >> 3;
          *piVar3 = iVar14;
        }
        iVar11 = 8;
        if (iVar14 < 8) {
          iVar11 = iVar14;
        }
        *piVar3 = iVar11;
        *(uint *)(lVar8 + (int64_t)piVar12) =
             (uint)(*piVar12 + iVar19 <= (int)(uVar17 * 8 * iVar11));
        *piVar12 = *piVar12 + *piVar3 * param_19 * -8;
      }
      if (0 < iVar13) {
        iVar14 = *(int *)(lVar24 + (int64_t)piVar12);
        iVar11 = iVar13 >> bVar5 + 3;
        iVar16 = 8 - iVar14;
        if (iVar16 <= iVar11) {
          iVar11 = iVar16;
        }
        *(int *)(lVar24 + (int64_t)piVar12) = iVar14 + iVar11;
        param_9 = iVar13 - param_9;
        iVar13 = iVar13 + iVar11 * param_19 * -8;
        *(uint *)(lVar8 + (int64_t)piVar12) = (uint)(param_9 <= iVar11 * param_19 * 8);
      }
      uVar15 = (uint64_t)((int)uVar15 + 1);
      uVar22 = uVar22 + 1;
      piVar12 = piVar12 + 1;
      param_9 = iVar13;
    } while ((int64_t)uVar22 < lVar23);
  }
  uVar17 = (uint)uVar15;
  *param_10 = iVar13;
  if (((int)uVar17 < (int)param_3) && (3 < param_3 - uVar17)) {
    lVar8 = (int64_t)(int)uVar17 * 4;
    lVar23 = (int64_t)(int)(param_3 - 1) * 4;
    if (((int *)(lVar23 + param_18) < (int *)(lVar8 + param_17)) ||
       ((int *)(lVar23 + param_17) < (int *)(lVar8 + param_18))) {
      piVar12 = (int *)(lVar8 + param_16);
      if ((((int *)(lVar23 + param_16) < (int *)(lVar8 + param_17)) ||
          ((int *)(lVar23 + param_17) < piVar12)) &&
         (((int *)(lVar23 + param_16) < (int *)(lVar8 + param_18) ||
          ((int *)(lVar23 + param_18) < piVar12)))) {
        uVar20 = param_3 - uVar17 & 0x80000003;
        if ((int)uVar20 < 0) {
          uVar20 = (uVar20 - 1 | 0xfffffffc) + 1;
        }
        auVar40 = ZEXT416(3);
        do {
          iVar13 = *piVar12;
          iVar14 = piVar12[1];
          iVar11 = piVar12[2];
          iVar16 = piVar12[3];
          uVar17 = (int)uVar15 + 4;
          uVar15 = (uint64_t)uVar17;
          *piVar12 = 0;
          piVar12[1] = 0;
          piVar12[2] = 0;
          piVar12[3] = 0;
          iVar13 = (iVar13 >> auVar41) >> auVar40;
          iVar14 = (iVar14 >> auVar41) >> auVar40;
          iVar11 = (iVar11 >> auVar41) >> auVar40;
          iVar16 = (iVar16 >> auVar41) >> auVar40;
          piVar3 = (int *)((int64_t)piVar12 + (param_17 - param_16));
          *piVar3 = iVar13;
          piVar3[1] = iVar14;
          piVar3[2] = iVar11;
          piVar3[3] = iVar16;
          puVar4 = (uint *)((int64_t)piVar12 + (param_18 - param_16));
          *puVar4 = -(uint)(iVar13 < 1) & 1;
          puVar4[1] = -(uint)(iVar14 < 1) & 1;
          puVar4[2] = -(uint)(iVar11 < 1) & 1;
          puVar4[3] = -(uint)(iVar16 < 1) & 1;
          piVar12 = piVar12 + 4;
        } while ((int)uVar17 < (int)(param_3 - uVar20));
      }
    }
  }
  lVar8 = (int64_t)(int)uVar17;
  if (lVar8 < (int64_t)uVar21) {
    lVar23 = uVar21 - lVar8;
    piVar12 = (int *)(param_17 + lVar8 * 4);
    do {
      piVar3 = piVar12 + 1;
      *piVar12 = (*(int *)((param_16 - param_17) + (int64_t)piVar12) >> bVar5) >> 3;
      *(int32_t *)((param_16 - param_17) + -4 + (int64_t)piVar3) = 0;
      *(uint *)((param_18 - param_17) + -4 + (int64_t)piVar3) = (uint)(*piVar12 < 1);
      lVar23 = lVar23 + -1;
      piVar12 = piVar3;
    } while (lVar23 != 0);
  }
  return uStackX_10;
}





// 函数: void FUN_1807152b0(int64_t param_1,int64_t param_2,int64_t param_3,int param_4,int param_5,
void FUN_1807152b0(int64_t param_1,int64_t param_2,int64_t param_3,int param_4,int param_5,
                  int param_6,int param_7,int param_8,int64_t param_9,int64_t param_10,
                  int64_t param_11,int64_t param_12,uint param_13,int32_t param_14)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int *piVar6;
  int64_t lVar7;
  int iVar8;
  int64_t lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int64_t lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  int8_t in_XMM1 [16];
  int8_t auVar22 [16];
  int iStack_e8;
  
  if (param_7 < param_8) {
    lVar13 = (int64_t)param_7 * 2;
    bVar5 = (byte)param_4;
    iVar16 = 1 << (bVar5 & 0x1f);
    iStack_e8 = param_5 * param_7;
    piVar6 = (int *)(param_12 + (int64_t)param_7 * 4);
    do {
      uVar10 = (int)*(short *)(lVar13 + 2 + *(int64_t *)(param_1 + 0x20)) -
               (int)*(short *)(lVar13 + *(int64_t *)(param_1 + 0x20));
      dVar19 = (double)exp((double)((float)(int)((*piVar6 + 1U) / uVar10 >> (bVar5 & 0x1f)) * -0.125
                                   ) * 0.6931471805599453,
                           (uint64_t)(*piVar6 + 1U) % (uint64_t)uVar10);
      iVar15 = 0;
      iVar3 = uVar10 << (bVar5 & 0x1f);
      iVar14 = 0;
      auVar22._0_8_ = (double)iVar3;
      auVar22._8_8_ = 0;
      auVar22 = sqrtpd(in_XMM1,auVar22);
      do {
        bVar2 = false;
        lVar9 = (int64_t)(*(int *)(param_1 + 8) * iVar15 + param_7);
        fVar21 = *(float *)(param_10 + lVar9 * 4);
        fVar18 = *(float *)(param_11 + lVar9 * 4);
        fVar17 = fVar18;
        if (param_5 == 1) {
          lVar7 = (int64_t)(*(int *)(param_1 + 8) + param_7);
          fVar1 = *(float *)(param_10 + lVar7 * 4);
          fVar17 = *(float *)(param_11 + lVar7 * 4);
          if (fVar1 <= fVar21) {
            fVar1 = fVar21;
          }
          fVar21 = fVar1;
          if (fVar17 <= fVar18) {
            fVar17 = fVar18;
          }
        }
        if (fVar21 <= fVar17) {
          fVar17 = fVar21;
        }
        fVar17 = *(float *)(param_9 + lVar9 * 4) - fVar17;
        if (fVar17 <= 0.0) {
          fVar17 = 0.0;
        }
        dVar20 = (double)exp((double)-fVar17 * 0.6931471805599453);
        fVar21 = (float)dVar20 + (float)dVar20;
        if (param_4 == 3) {
          fVar21 = fVar21 * 1.4142135;
        }
        if ((float)dVar19 * 0.5 <= fVar21) {
          fVar21 = (float)dVar19 * 0.5;
        }
        iVar11 = 0;
        fVar21 = fVar21 * (1.0 / (float)auVar22._0_8_);
        in_XMM1 = ZEXT416((uint)fVar21);
        lVar9 = param_2 + ((int64_t)
                           ((int)*(short *)(lVar13 + *(int64_t *)(param_1 + 0x20)) <<
                           (bVar5 & 0x1f)) + (int64_t)iVar14) * 4;
        if (0 < iVar16) {
          uVar12 = 1;
          do {
            if ((*(byte *)((iStack_e8 + iVar15) + param_3) & (byte)uVar12) == 0) {
              iVar8 = 0;
              if (0 < (int)uVar10) {
                do {
                  param_13 = param_13 * 0x19660d + 0x3c6ef35f;
                  fVar18 = fVar21;
                  if ((param_13 >> 0xf & 1) == 0) {
                    fVar18 = -fVar21;
                  }
                  iVar4 = iVar8 << (bVar5 & 0x1f);
                  iVar8 = iVar8 + 1;
                  *(float *)(lVar9 + (int64_t)(iVar4 + iVar11) * 4) = fVar18;
                } while (iVar8 < (int)uVar10);
              }
              bVar2 = true;
            }
            iVar11 = iVar11 + 1;
            uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
          } while (iVar11 < iVar16);
          if (bVar2) {
            FUN_180721bd0(lVar9,iVar3,0x3f800000,param_14);
          }
        }
        iVar14 = iVar14 + param_6;
        iVar15 = iVar15 + 1;
      } while (iVar15 < param_5);
      lVar13 = lVar13 + 2;
      param_7 = param_7 + 1;
      iStack_e8 = iStack_e8 + param_5;
      piVar6 = piVar6 + 1;
    } while (param_7 < param_8);
  }
  return;
}





// 函数: void FUN_1807152e3(uint64_t param_1,int64_t param_2,uint64_t param_3,byte param_4)
void FUN_1807152e3(uint64_t param_1,int64_t param_2,uint64_t param_3,byte param_4)

{
  float fVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int64_t in_RAX;
  int64_t lVar6;
  int iVar7;
  int64_t lVar8;
  uint64_t unaff_RBX;
  int unaff_EBP;
  uint uVar9;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int iVar10;
  uint uVar11;
  int64_t in_R11;
  int64_t unaff_R12;
  int iVar12;
  uint64_t unaff_R13;
  int iVar13;
  uint64_t unaff_R14;
  int iVar14;
  uint64_t unaff_R15;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  int8_t in_XMM1 [16];
  int8_t auVar20 [16];
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int iStackX_20;
  int64_t lStack0000000000000028;
  int *piStack0000000000000030;
  int64_t in_stack_00000110;
  int64_t in_stack_00000118;
  int in_stack_00000130;
  int in_stack_00000138;
  int in_stack_00000140;
  int in_stack_00000148;
  int64_t in_stack_00000150;
  int64_t in_stack_00000158;
  int64_t in_stack_00000160;
  int64_t in_stack_00000168;
  uint in_stack_00000170;
  int32_t in_stack_00000178;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBX;
  lStack0000000000000028 = in_RAX * 2;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM10_Dd;
  iVar14 = 1 << (param_4 & 0x1f);
  iStackX_20 = in_stack_00000130 * (int)in_RAX;
  piStack0000000000000030 = (int *)(in_stack_00000168 + in_RAX * 4);
  do {
    uVar9 = (int)*(short *)(lStack0000000000000028 + 2 + *(int64_t *)(param_2 + 0x20)) -
            (int)*(short *)(lStack0000000000000028 + *(int64_t *)(param_2 + 0x20));
    bVar2 = (byte)unaff_EBP;
    dVar17 = (double)exp((double)((float)(int)((*piStack0000000000000030 + 1U) / uVar9 >>
                                              (bVar2 & 0x1f)) * -0.125) * 0.6931471805599453,
                         (uint64_t)(*piStack0000000000000030 + 1U) % (uint64_t)uVar9);
    iVar13 = 0;
    iVar4 = uVar9 << (bVar2 & 0x1f);
    iVar12 = 0;
    auVar20._0_8_ = (double)iVar4;
    auVar20._8_8_ = 0;
    auVar20 = sqrtpd(in_XMM1,auVar20);
    do {
      bVar3 = false;
      lVar8 = (int64_t)(*(int *)(in_stack_00000110 + 8) * iVar13 + in_stack_00000140);
      fVar19 = *(float *)(in_stack_00000158 + lVar8 * 4);
      fVar16 = *(float *)(in_stack_00000160 + lVar8 * 4);
      fVar15 = fVar16;
      if (in_stack_00000130 == 1) {
        lVar6 = (int64_t)(*(int *)(in_stack_00000110 + 8) + in_stack_00000140);
        fVar1 = *(float *)(in_stack_00000158 + lVar6 * 4);
        fVar15 = *(float *)(in_stack_00000160 + lVar6 * 4);
        if (fVar1 <= fVar19) {
          fVar1 = fVar19;
        }
        fVar19 = fVar1;
        if (fVar15 <= fVar16) {
          fVar15 = fVar16;
        }
      }
      if (fVar19 <= fVar15) {
        fVar15 = fVar19;
      }
      fVar15 = *(float *)(in_stack_00000150 + lVar8 * 4) - fVar15;
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      dVar18 = (double)exp((double)-fVar15 * 0.6931471805599453);
      fVar19 = (float)dVar18 + (float)dVar18;
      if (unaff_EBP == 3) {
        fVar19 = fVar19 * 1.4142135;
      }
      if ((float)dVar17 * 0.5 <= fVar19) {
        fVar19 = (float)dVar17 * 0.5;
      }
      iVar10 = 0;
      fVar19 = fVar19 * (1.0 / (float)auVar20._0_8_);
      in_XMM1 = ZEXT416((uint)fVar19);
      lVar8 = in_stack_00000118 +
              ((int64_t)
               ((int)*(short *)(lStack0000000000000028 + *(int64_t *)(in_stack_00000110 + 0x20)) <<
               (bVar2 & 0x1f)) + (int64_t)iVar12) * 4;
      if (0 < iVar14) {
        uVar11 = 1;
        do {
          if ((*(byte *)((iStackX_20 + iVar13) + unaff_R12) & (byte)uVar11) == 0) {
            iVar7 = 0;
            if (0 < (int)uVar9) {
              do {
                in_stack_00000170 = in_stack_00000170 * 0x19660d + 0x3c6ef35f;
                fVar16 = fVar19;
                if ((in_stack_00000170 >> 0xf & 1) == 0) {
                  fVar16 = -fVar19;
                }
                iVar5 = iVar7 << (bVar2 & 0x1f);
                iVar7 = iVar7 + 1;
                *(float *)(lVar8 + (int64_t)(iVar5 + iVar10) * 4) = fVar16;
              } while (iVar7 < (int)uVar9);
            }
            bVar3 = true;
          }
          iVar10 = iVar10 + 1;
          uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
        } while (iVar10 < iVar14);
        if (bVar3) {
          FUN_180721bd0(lVar8,iVar4,0x3f800000,in_stack_00000178);
        }
      }
      iVar12 = iVar12 + in_stack_00000138;
      iVar13 = iVar13 + 1;
    } while (iVar13 < in_stack_00000130);
    lStack0000000000000028 = lStack0000000000000028 + 2;
    in_stack_00000140 = in_stack_00000140 + 1;
    iStackX_20 = iStackX_20 + in_stack_00000130;
    piStack0000000000000030 = piStack0000000000000030 + 1;
    param_2 = in_stack_00000110;
  } while (in_stack_00000140 < in_stack_00000148);
  return;
}





// 函数: void FUN_18071565d(void)
void FUN_18071565d(void)

{
  return;
}



int FUN_180715670(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar2 = 0x1f;
  if (param_2 != 0) {
    for (; param_2 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  iVar4 = (int)(short)((short)param_2 << (0xfU - (char)(iVar2 + 1) & 0x1f));
  iVar3 = (int)(short)((short)param_1 << (0xfU - (char)(iVar1 + 1) & 0x1f));
  return ((iVar1 + 1) - (iVar2 + 1)) * 0x800 +
         (((short)((short)(iVar3 * -0xa25 + 0x4000 >> 0xf) + 0x1efc) * iVar3 + 0x4000 >> 0xf) -
         ((short)((short)(iVar4 * -0xa25 + 0x4000 >> 0xf) + 0x1efc) * iVar4 + 0x4000 >> 0xf));
}





