/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part009.c - 1 个函数

// 函数: void FUN_1805c16a0(int64_t *param_1,float *param_2,uint *param_3,uint *param_4,uint64_t param_5)
void FUN_1805c16a0(int64_t *param_1,float *param_2,uint *param_3,uint *param_4,uint64_t param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint64_t *puVar10;
  float *pfVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int iVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  byte bVar17;
  int64_t lVar19;
  int64_t *plVar20;
  int64_t lVar21;
  int64_t lVar22;
  float fVar23;
  int32_t uVar24;
  float extraout_XMM0_Da;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int8_t auVar32 [16];
  float fVar33;
  float fVar34;
  uint64_t in_stack_fffffffffffffe38;
  uint64_t uVar35;
  uint64_t uVar36;
  float fStack_1a4;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  int32_t uStack_18c;
  uint64_t uStack_188;
  float fStack_180;
  int32_t uStack_17c;
  int8_t auStack_178 [72];
  int8_t auStack_130 [240];
  uint *puVar18;
  
  plVar20 = param_1 + 1;
  if ((*(uint *)(param_1 + 2) & 0x20) == 0) {
    lVar22 = *(int64_t *)(*(int64_t *)(*(int64_t *)*plVar20 + 0x8f8) + 0x9e8);
    param_1[0x15] = lVar22;
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x20;
  }
  else {
    lVar22 = param_1[0x15];
  }
  puVar18 = param_3;
  if ((((lVar22 == 0) || (*(int *)(lVar22 + 0x30) < 1)) ||
      ((puVar18 = *(uint **)((int64_t)*(int *)(lVar22 + 0xf0) * 0xa0 + 0x50 +
                            *(int64_t *)(lVar22 + 0xd0)), ((uint64_t)puVar18 >> 9 & 1) != 0 &&
       (*(short *)(lVar22 + 8) < 1)))) ||
     (bVar17 = (byte)puVar18 >> 1,
     puVar18 = (uint *)CONCAT71((int7)((uint64_t)puVar18 >> 8),bVar17), (bVar17 & 1) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uVar16 = 0;
  uVar13 = in_stack_fffffffffffffe38 & 0xffffffff00000000;
  fVar23 = (float)FUN_1805c9600(param_1,2,puVar18,0,uVar13,0,0);
  FUN_1805b77f0(param_1,0.0 < fVar23);
  if ((char)param_1[0x386] != '\0') {
    FUN_1805d5a50(plVar20);
  }
  fVar23 = 99999.0;
  param_3[0] = 0xffffffff;
  param_3[1] = 0xffffffff;
  if (((*(uint *)((int64_t)param_1 + 0x209c) >> 0xb & 1) == 0) &&
     (0.0 <= (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2f4] * 8) -
                    param_1[0x2f3]) * 1e-05)) {
    *(int32_t *)((int64_t)param_1 + 0x1b6c) = 0;
    *(int8_t *)(param_1 + 0x2f5) = 1;
    iVar7 = *(int *)(param_1[0x291] + 0x52ed94);
    iVar14 = iVar7;
    if (0 < iVar7) {
      piVar9 = (int *)(param_1[0x291] + 0x30b0);
      uVar12 = uVar16;
      uVar15 = uVar16;
      do {
        iVar14 = (int)uVar15;
        if (-1 < *piVar9) break;
        uVar15 = (uint64_t)((int)uVar15 + 1);
        uVar12 = uVar12 + 1;
        piVar9 = piVar9 + 0x298;
        iVar14 = iVar7;
      } while ((int64_t)uVar12 < (int64_t)iVar7);
    }
    *(int *)(param_1 + 0x36e) = iVar14;
    uVar8 = *param_3;
    param_1[0x2f3] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2f4] * 8) + 100000000;
    FUN_1805b94b0(param_1,uVar8 >> 0x1f,(int64_t)iVar7);
  }
  bVar4 = false;
  if ((char)param_1[0x2f5] == '\0') {
    if ((*(uint *)((int64_t)param_1 + 0x209c) >> 0xb & 1) == 0) {
      if (*(int *)(*param_1 + 0x1fc) == 2) {
        if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
          func_0x0001805d4cd0(plVar20);
        }
        lVar22 = param_1[0x1d];
        if (((lVar22 != 0) && (*(int *)(lVar22 + 0x568) == 1)) &&
           ((*(uint *)(lVar22 + 0x56c) & 0x800) != 0)) goto LAB_1805c19f7;
      }
      puVar10 = (uint64_t *)FUN_1805bdc30(param_1,&uStack_188);
      uVar35 = *puVar10;
      *(uint64_t *)param_3 = uVar35;
      if (((bVar3) && (-1 < (int)uVar35)) &&
         ((lVar22 = param_1[0x291] + 0x30a0 + (int64_t)(int)uVar35 * 0xa60,
          *(int *)((int64_t)(int)((uint64_t)uVar35 >> 0x20) * 0x3c + 0x17e4 + (int64_t)param_1)
          == 1 && (cVar5 = FUN_1805c79a0(param_1,lVar22), cVar5 != '\0')))) {
        lVar22 = *(int64_t *)(lVar22 + 0x20);
        bVar4 = true;
        lVar19 = *(int64_t *)(*param_1 + 0x20);
        fVar30 = *(float *)(lVar19 + 0xc) - *(float *)(lVar22 + 0xc);
        fVar26 = *(float *)(lVar19 + 0x10) - *(float *)(lVar22 + 0x10);
        fVar23 = *(float *)(lVar19 + 0x14) - *(float *)(lVar22 + 0x14);
        fVar23 = SQRT(fVar30 * fVar30 + fVar26 * fVar26 + fVar23 * fVar23);
        fStack_1a4 = 99999.0;
        if (99999.0 <= fVar23) {
          fVar23 = fStack_1a4;
        }
      }
      else {
        fStack_1a4 = 99999.0;
        fVar23 = fStack_1a4;
      }
    }
    else {
LAB_1805c19f7:
      cVar5 = func_0x0001805d1da0(param_1);
      param_5 = uVar13;
      if (cVar5 != '\0') {
        if ((char)param_1[0x438] == '\0') {
          iVar7 = *(int *)((int64_t)param_1 + 0x14b4);
        }
        else {
          iVar7 = *(int *)((int64_t)param_1 + 0x21c4);
        }
        if (*(int *)((int64_t)iVar7 * 0xa60 + 0x3608 + param_1[0x291]) == 1) {
          pfVar11 = (float *)FUN_1805b6950(plVar20);
          fVar23 = *pfVar11;
          if ((char)param_1[0x438] == '\0') {
LAB_1805c1af6:
            uVar8 = *(uint *)((int64_t)param_1 + 0x14b4);
          }
          else {
            uVar8 = *(uint *)((int64_t)param_1 + 0x21c4);
          }
LAB_1805c1afc:
          *param_3 = uVar8;
          param_5 = uVar13;
        }
      }
    }
  }
  else {
    cVar5 = (char)param_1[0x438];
    if (cVar5 == '\0') {
      iVar7 = *(int *)((int64_t)param_1 + 0x14b4);
    }
    else {
      iVar7 = *(int *)((int64_t)param_1 + 0x21c4);
    }
    param_5 = uVar13;
    if (-1 < iVar7) {
      lVar22 = *(int64_t *)((int64_t)iVar7 * 0xa60 + 0x3778 + param_1[0x291]);
      if ((lVar22 != 0) && (*(char *)(lVar22 + 0x8be) != '\0')) {
        if (cVar5 == '\0') {
          iVar7 = *(int *)((int64_t)param_1 + 0x14b4);
        }
        else {
          iVar7 = *(int *)((int64_t)param_1 + 0x21c4);
        }
        if (*(int *)((int64_t)iVar7 * 0xa60 + 0x3608 + param_1[0x291]) == 1) {
          if ((*(byte *)(param_1 + 2) & 1) == 0) {
            FUN_1805d3210(plVar20);
            cVar5 = (char)param_1[0x438];
          }
          fVar23 = *(float *)(param_1 + 0xd);
          if (cVar5 == '\0') goto LAB_1805c1af6;
          uVar8 = *(uint *)((int64_t)param_1 + 0x21c4);
          goto LAB_1805c1afc;
        }
      }
    }
  }
  fVar26 = fVar23 + 1.0;
  param_4[0] = 0xffffffff;
  param_4[1] = 0xffffffff;
  if ((char)param_1[0x386] != '\0') {
    if ((*(uint *)((int64_t)param_1 + 0x209c) >> 0xb & 1) == 0) {
      if (0.0 <= (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x388] * 8) -
                        param_1[0x387]) * 1e-05) {
        *(int32_t *)((int64_t)param_1 + 0x1c0c) = 0xffffffff;
        *(int32_t *)((int64_t)param_1 + 0x1c14) = 0xffffffff;
        *(int32_t *)((int64_t)param_1 + 0x1c1c) = 0xffffffff;
        *(int32_t *)((int64_t)param_1 + 0x1c24) = 0xffffffff;
        *(int32_t *)((int64_t)param_1 + 0x1c2c) = 0;
        *(int32_t *)((int64_t)param_1 + 0x200c) = 0;
        *(int8_t *)(param_1 + 0x389) = 1;
        iVar7 = *(int *)(param_1[0x291] + 0x52ed94);
        iVar14 = iVar7;
        if (0 < iVar7) {
          piVar9 = (int *)(param_1[0x291] + 0x30b0);
          uVar13 = uVar16;
          uVar12 = uVar16;
          do {
            iVar14 = (int)uVar12;
            if (-1 < *piVar9) break;
            uVar12 = (uint64_t)((int)uVar12 + 1);
            uVar13 = uVar13 + 1;
            piVar9 = piVar9 + 0x298;
            iVar14 = iVar7;
          } while ((int64_t)uVar13 < (int64_t)iVar7);
        }
        *(int *)(param_1 + 0x402) = iVar14;
        uVar8 = *param_4;
        param_1[0x387] =
             *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x388] * 8) + 100000000;
        FUN_1805b9990(param_1,uVar8 >> 0x1f);
      }
      if ((char)param_1[0x389] == '\0') {
        if (bVar3) {
          pfVar11 = (float *)FUN_180507fc0(plVar20);
          fVar30 = *pfVar11;
        }
        else {
          fVar30 = *(float *)((int64_t)param_1 + 0x34);
        }
        puVar10 = (uint64_t *)FUN_1805bed80(param_1,&uStack_188,fVar30 * fVar30);
        *(uint64_t *)param_4 = *puVar10;
      }
      else {
        cVar5 = func_0x0001805d1da0(param_1);
        if (cVar5 != '\0') {
          if ((char)param_1[0x438] == '\0') goto LAB_1805c1cc0;
          uVar8 = *(uint *)((int64_t)param_1 + 0x21c4);
          goto LAB_1805c1cc6;
        }
      }
    }
    else {
      if ((char)param_1[0x438] == '\0') {
        iVar7 = *(int *)((int64_t)param_1 + 0x14b4);
      }
      else {
        iVar7 = *(int *)((int64_t)param_1 + 0x21c4);
      }
      if (((-1 < iVar7) &&
          (lVar22 = *(int64_t *)((int64_t)iVar7 * 0xa60 + 0x3778 + param_1[0x291]), lVar22 != 0))
         && (*(char *)(lVar22 + 0x8be) != '\0')) {
        if ((char)param_1[0x438] == '\0') {
LAB_1805c1cc0:
          uVar8 = *(uint *)((int64_t)param_1 + 0x14b4);
        }
        else {
          uVar8 = *(uint *)((int64_t)param_1 + 0x21c4);
        }
LAB_1805c1cc6:
        *param_4 = uVar8;
      }
    }
  }
  lVar22 = *param_1;
  if ((((*(int *)(lVar22 + 0x920) != 0) && ((*(uint *)(lVar22 + 0x56c) & 0x100000) != 0)) &&
      ((*(uint *)(param_1 + 0x413) >> 8 & 1) == 0)) &&
     ((system_status_flag == 0 || (system_status_flag == 5)))) {
    param_2[8] = 100000.0;
    lVar22 = *param_1;
  }
  iVar7 = *(int *)(lVar22 + 0x564);
  if ((*(uint *)(param_1 + 0x413) & 1) != 0) {
    if (((*(uint *)(param_1 + 0x413) & 0x20) == 0) || (iVar7 < 0)) {
      *param_2 = 10.0;
    }
    else {
      param_2[10] = 10000.0;
    }
    goto FUN_1805c296d;
  }
  param_5 = param_5 & 0xffffffff00000000;
  bVar17 = ~(byte)(*(uint *)((int64_t)param_1 + 0x1484) >> 6) & 1;
  fVar30 = (float)FUN_1805c9600(param_1,1);
  uVar36 = 0;
  uVar35 = 0;
  param_5 = param_5 & 0xffffffff00000000;
  bVar1 = 0.0 < fVar30;
  fVar30 = (float)FUN_1805c9600(param_1,3);
  bVar2 = 0.0 < fVar30;
  cVar5 = bVar2;
  if ((*(byte *)((int64_t)param_1 + 0x209c) & 1) != 0) {
    if ((bVar1) || (bVar2)) {
      fVar31 = *(float *)(*(int64_t *)(*param_1 + 0x20) + 0x10) - *(float *)(param_1[0x41e] + 0xa4)
      ;
      fVar30 = *(float *)(*(int64_t *)(*param_1 + 0x20) + 0xc) - *(float *)(param_1[0x41e] + 0xa0);
      fVar30 = (float)func_0x0001805d8e00((int64_t)param_1 + 0x165c,
                                          SQRT(fVar30 * fVar30 + fVar31 * fVar31));
      param_2[5] = fVar30;
    }
    if ((char)param_1[0x386] != '\0') {
      if ((*(byte *)(param_1 + 2) & 1) == 0) {
        FUN_1805d3210(plVar20);
        cVar5 = bVar2;
      }
      fVar30 = (float)func_0x0001805d8e00(param_1 + 0x2ce,(int)param_1[0xd]);
      param_2[6] = fVar30;
    }
    bVar17 = 0;
  }
  fVar30 = 0.001;
  if ((int)*param_3 < 0) {
    param_2[1] = 0.0;
    param_2[3] = 0.0;
  }
  else {
    bVar17 = 0;
    lVar22 = *param_1;
    lVar19 = (int64_t)(int)*param_3 * 0xa60;
    lVar21 = param_1[0x291] + 0x30a0 + lVar19;
    cVar6 = func_0x000180522f60(lVar21);
    if ((cVar6 == '\0') ||
       (*(float *)(*(int64_t *)(lVar22 + 0x20) + 0x14) <=
        *(float *)(*(int64_t *)(lVar21 + 0x20) + 0x14))) {
      if (iVar7 < 0) {
        fVar30 = fVar23;
        if ((char)param_1[0x29b] != '\0') {
          fVar31 = *(float *)(*(int64_t *)(lVar22 + 0x20) + 0xc);
          fVar25 = *(float *)(*(int64_t *)(lVar22 + 0x20) + 0x10);
          fVar29 = *(float *)(param_1 + 0x2a1) - fVar31;
          fVar27 = *(float *)((int64_t)param_1 + 0x150c) - fVar25;
          fVar28 = fVar27 * fVar27 + fVar29 * fVar29;
          uStack_188 = *(int64_t *)(lVar21 + 0x20);
          fVar28 = (float)(fVar28 <= 1.1754944e-38) * 1.1754944e-38 + fVar28;
          auVar32 = rsqrtss(ZEXT416((uint)fVar28),ZEXT416((uint)fVar28));
          fVar33 = auVar32._0_4_;
          fVar31 = *(float *)(uStack_188 + 0xc) - fVar31;
          fVar34 = fVar33 * 0.5 * (3.0 - fVar28 * fVar33 * fVar33);
          fVar25 = *(float *)(uStack_188 + 0x10) - fVar25;
          _fStack_198 = CONCAT44(fVar25,fVar31);
          fVar28 = fVar25 * fVar25 + fVar31 * fVar31;
          fVar28 = (float)(fVar28 <= 1.1754944e-38) * 1.1754944e-38 + fVar28;
          auVar32 = rsqrtss(ZEXT416((uint)fVar28),ZEXT416((uint)fVar28));
          fVar33 = auVar32._0_4_;
          fVar28 = fVar28 * fVar33 * fVar33;
          fVar33 = fVar33 * 0.5 * (3.0 - fVar28);
          if ((fVar34 * fVar27 * fVar25 * fVar33 + fVar34 * fVar29 * fVar31 * fVar33 < 0.5) &&
             (!bVar4)) {
            FUN_180487c70(param_1 + 0x29e,3,auVar32._0_8_,fVar28,param_5,uVar35,uVar36);
            if ((int)param_1[0x2a6] < 3) {
              fVar30 = -NAN;
            }
            else {
              fVar30 = *(float *)(param_1 + 0x2a2);
            }
            fVar25 = *(float *)(param_1 + 0x2a1) - *(float *)(uStack_188 + 0xc);
            fVar31 = *(float *)((int64_t)param_1 + 0x150c) - *(float *)(uStack_188 + 0x10);
            fVar30 = fVar30 - *(float *)(uStack_188 + 0x14);
            fVar30 = SQRT(fVar25 * fVar25 + fVar31 * fVar31 + fVar30 * fVar30);
            if (fVar30 < 20.0) {
              fVar30 = (float)FUN_18052ed30(lVar21,param_1 + 0x29e);
            }
          }
        }
        fVar30 = (float)func_0x0001805d8e00((int64_t)param_1 + 0x160c,fVar30);
        param_2[1] = fVar30;
        if (((!bVar1) && (!bVar2)) && ((char)param_1[0x386] != '\0')) {
          fVar30 = fVar30 * 0.1;
          param_2[1] = fVar30;
        }
        if ((bVar3) && (*(int *)(*(int64_t *)(*param_1 + 0x8f8) + 0x9e0) == 4)) {
          fVar30 = fVar30 * 0.5;
          param_2[1] = fVar30;
        }
        if (-1 < *(int *)(lVar21 + 0x564)) {
          lVar22 = *(int64_t *)(lVar21 + 0x20);
          lVar19 = *(int64_t *)(*param_1 + 0x20);
          if (bVar1) {
            if (1.0 < (0.4 / (*(float *)(lVar19 + 0x1d0) + *(float *)(lVar22 + 0x1d0))) * fVar23) {
              fVar23 = *(float *)(lVar22 + 0xc) - *(float *)(lVar19 + 0xc);
              fVar26 = *(float *)(lVar22 + 0x10) - *(float *)(lVar19 + 0x10);
              fVar23 = fVar26 * fVar26 + fVar23 * fVar23;
              fVar23 = (float)(fVar23 <= 1.1754944e-38) * 1.1754944e-38 + fVar23;
              auVar32 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
                    // WARNING: Subroutine does not return
              AdvancedSystemController(*(int32_t *)(lVar22 + 0x34),
                            3.0 - fVar23 * auVar32._0_4_ * auVar32._0_4_);
            }
          }
          else {
            param_2[1] = fVar30 * 0.4;
          }
        }
        fVar30 = 0.001;
      }
      else if (((cVar5 != '\0') || (bVar1)) || ((char)param_1[0x386] == '\0')) {
        if ((char)param_1[0x29b] == '\0') {
          fVar31 = (float)func_0x0001805d8e00((int64_t)param_1 + 0x1634,fVar23);
          param_2[3] = fVar31;
          if (((*(int *)(lVar19 + 0x3604 + param_1[0x291]) != -1) && (bVar1)) &&
             (((int)param_1[0x295] != 3 ||
              (((int)param_1[0x284] != 0 ||
               (lVar22 = *(int64_t *)(*param_1 + 0x20),
               *(float *)(lVar22 + 0x1fc) * *(float *)(lVar22 + 0x1fc) +
               *(float *)(lVar22 + 0x200) * *(float *)(lVar22 + 0x200) +
               *(float *)(lVar22 + 0x204) * *(float *)(lVar22 + 0x204) <
               *(float *)(lVar22 + 0x50) * *(float *)(lVar22 + 0x50) * 0.0625)))))) {
            fVar31 = (float)func_0x0001805d8e00((int64_t)param_1 + 0x160c,fVar23);
            param_2[1] = fVar31;
          }
        }
        else {
          FUN_180487c70(param_1 + 0x29e,2);
          fVar30 = -NAN;
          if ((int)param_1[0x2a6] < 2) {
            fVar31 = -NAN;
          }
          else {
            fVar31 = *(float *)(param_1 + 0x2a2);
          }
          fVar25 = *(float *)(param_1 + 0x2a1);
          fVar29 = *(float *)((int64_t)param_1 + 0x150c);
          lVar22 = FUN_180516f50(*param_1,auStack_178);
          FUN_180487c70(lVar22,2);
          if (*(int *)(lVar22 + 0x40) < 2) {
            fStack_190 = -NAN;
          }
          else {
            fStack_190 = *(float *)(lVar22 + 0x20);
          }
          fStack_190 = fVar31 - fStack_190;
          uStack_18c = 0x7f7fffff;
          _fStack_198 = CONCAT44(fVar29 - *(float *)(lVar22 + 0x1c),
                                 fVar25 - *(float *)(lVar22 + 0x18));
          fVar31 = (float)FUN_1801c24a0(&fStack_198);
          lVar22 = FUN_180516f50((int64_t)(int)*param_3 * 0xa60 + param_1[0x291] + 0x30a0,
                                 auStack_178);
          FUN_180487c70(lVar22,2);
          if (*(int *)(lVar22 + 0x40) < 2) {
            fVar25 = -NAN;
          }
          else {
            fVar25 = *(float *)(lVar22 + 0x20);
          }
          fVar29 = *(float *)(lVar22 + 0x18);
          fVar28 = *(float *)(lVar22 + 0x1c);
          lVar22 = FUN_180516f50(*param_1,auStack_130);
          FUN_180487c70(lVar22,2);
          if (1 < *(int *)(lVar22 + 0x40)) {
            fVar30 = *(float *)(lVar22 + 0x20);
          }
          fVar29 = fVar29 - *(float *)(lVar22 + 0x18);
          fVar28 = fVar28 - *(float *)(lVar22 + 0x1c);
          uStack_17c = 0x7f7fffff;
          uStack_188 = CONCAT44(fVar28,fVar29);
          fStack_180 = fVar25 - fVar30;
          fVar27 = (float)FUN_1801c24a0(&uStack_188);
          fVar33 = uStack_188._4_4_ * fStack_194 + (float)uStack_188 * fStack_198 +
                   fStack_180 * fStack_190;
          if (fVar33 < -1.0) {
LAB_1805c280c:
            fVar31 = fVar27 * 2.0 + fVar31;
          }
          else {
            if (1.0 <= fVar33) {
              fVar33 = 1.0;
            }
            if (fVar33 < 0.0) goto LAB_1805c280c;
            fVar33 = fVar33 * fVar27;
            if (fVar31 < fVar33) {
              fVar31 = fVar27 * 2.0 - fVar31;
            }
            else {
              fVar28 = fVar28 - fStack_194 * fVar33;
              fVar30 = (fVar25 - fVar30) - fStack_190 * fVar33;
              fVar29 = fVar29 - fStack_198 * fVar33;
              fVar31 = SQRT(fVar28 * fVar28 + fVar29 * fVar29 + fVar30 * fVar30);
            }
          }
          fVar30 = (float)func_0x0001805d8e00((int64_t)param_1 + 0x1634,fVar31);
          param_2[3] = fVar30;
          if ((((int)param_1[0x295] != 3) || ((int)param_1[0x284] != 0)) ||
             (lVar22 = *(int64_t *)(*param_1 + 0x20),
             *(float *)(lVar22 + 0x1fc) * *(float *)(lVar22 + 0x1fc) +
             *(float *)(lVar22 + 0x200) * *(float *)(lVar22 + 0x200) +
             *(float *)(lVar22 + 0x204) * *(float *)(lVar22 + 0x204) <
             *(float *)(lVar22 + 0x50) * *(float *)(lVar22 + 0x50) * 0.0625)) {
            uVar24 = FUN_18052ed30(lVar21,param_1 + 0x29e);
            fVar30 = (float)func_0x0001805d8e00((int64_t)param_1 + 0x160c,uVar24);
            param_2[1] = fVar30;
          }
          fVar30 = 0.001;
        }
      }
    }
    else {
      param_2[1] = 0.0;
      param_2[3] = 0.0;
    }
  }
  if (((char)param_1[0x386] == '\0') || ((int)param_1[0x42c] == 1)) {
    param_2[2] = 0.0;
    param_2[4] = 0.0;
  }
  else if (-1 < (int)*param_4) {
    lVar21 = (int64_t)(int)*param_4 * 0xa60;
    lVar22 = *(int64_t *)(lVar21 + 0x30c0 + param_1[0x291]);
    lVar19 = *(int64_t *)(*param_1 + 0x20);
    fVar25 = *(float *)(lVar22 + 0x10) - *(float *)(lVar19 + 0x10);
    fVar31 = *(float *)(lVar22 + 0xc) - *(float *)(lVar19 + 0xc);
    fVar26 = *(float *)(lVar22 + 0x14) - *(float *)(lVar19 + 0x14);
    fVar26 = SQRT(fVar25 * fVar25 + fVar31 * fVar31 + fVar26 * fVar26);
    if (iVar7 < 0) {
      fVar31 = (float)func_0x0001805d8e00(param_1 + 0x2c4,fVar26);
      param_2[2] = fVar31;
      if (*(char *)((int64_t)param_1 + 0x13bd) != '\0') {
        param_2[2] = fVar31 * fVar30;
        *(int8_t *)((int64_t)param_1 + 0x13bd) = 0;
      }
      lVar22 = *param_1;
      if (((-1 < *(int *)(lVar21 + 0x3604 + param_1[0x291])) &&
          (lVar19 = *(int64_t *)(lVar21 + 0x30c0 + param_1[0x291]),
          fVar31 = *(float *)(*(int64_t *)(lVar22 + 0x20) + 0x8c),
          fVar31 * fVar31 * 0.25 <
          *(float *)(lVar19 + 0x24) * *(float *)(lVar19 + 0x24) +
          *(float *)(lVar19 + 0x28) * *(float *)(lVar19 + 0x28) +
          *(float *)(lVar19 + 0x2c) * *(float *)(lVar19 + 0x2c))) &&
         (*(int *)((int64_t)param_1 + 0x215c) == 2)) {
        param_2[2] = param_2[2] * 1.5;
        lVar22 = *param_1;
      }
      if ((!bVar3) && (*(int *)(*(int64_t *)(lVar22 + 0x8f8) + 0x9e0) == 4)) {
        param_2[2] = param_2[2] * 0.5;
        lVar22 = *param_1;
      }
      if (((-1 < (int)*param_3) && (*(float *)(param_1 + 6) < fVar26)) &&
         (fVar31 = *(float *)(*(int64_t *)(lVar22 + 0x20) + 0x84), fVar30 < fVar31)) {
        fVar31 = 1.0 / fVar31;
        fVar31 = (fVar31 * fVar23) / ((fVar26 - *(float *)(param_1 + 6)) * fVar31);
        fVar30 = 0.1;
        if ((0.1 <= fVar31) && (fVar30 = fVar31, 1.0 <= fVar31)) {
          fVar30 = 1.0;
        }
        param_2[2] = fVar30 * param_2[2];
        lVar22 = *param_1;
      }
      if (*(int *)(*(int64_t *)(lVar22 + 0x8f8) + 0x9e4) == 4) {
        plVar20 = (int64_t *)(*(int64_t *)(lVar22 + 0x8f8) + 0xd8);
        do {
          cVar5 = FUN_18058f970(plVar20 + -0x1a);
          if ((cVar5 != '\0') &&
             ((*(byte *)((int64_t)(int)plVar20[4] * 0xa0 + 0x50 + *plVar20) & 0x12) == 2))
          goto FUN_1805c296d;
          uVar16 = uVar16 + 1;
          plVar20 = plVar20 + 0x3f;
        } while ((int64_t)uVar16 < 4);
        param_2[2] = param_2[2] * 0.01;
      }
    }
    else {
      fVar30 = (float)func_0x0001805d8e00(param_1 + 0x2c9,fVar26);
      param_2[4] = fVar30;
      if (*(int *)(*(int64_t *)(*param_1 + 0x8f8) + 0x9e4) == 4) {
        plVar20 = (int64_t *)(*(int64_t *)(*param_1 + 0x8f8) + 0xd8);
        do {
          cVar5 = FUN_18058f970(plVar20 + -0x1a);
          if ((cVar5 != '\0') &&
             ((*(byte *)((int64_t)(int)plVar20[4] * 0xa0 + 0x50 + *plVar20) & 0x12) == 2))
          goto FUN_1805c296d;
          uVar16 = uVar16 + 1;
          plVar20 = plVar20 + 0x3f;
        } while ((int64_t)uVar16 < 4);
        param_2[4] = extraout_XMM0_Da * 0.01;
      }
    }
    goto FUN_1805c296d;
  }
  if ((bVar17 != 0) && (cVar5 = func_0x000180522f60(*param_1), cVar5 == '\0')) {
    fVar23 = 1000.0;
    *param_2 = 1000.0;
  }
FUN_1805c296d:
  if (((((*(uint *)(*param_1 + 0x56c) & 0x200) != 0) && ((char)param_1[0x29b] != '\0')) &&
      ((*(byte *)(param_1 + 0x413) & 3) == 0)) && ((*(byte *)((int64_t)param_1 + 0x209c) & 1) == 0)
     ) {
    lVar22 = *(int64_t *)(*param_1 + 0x20);
    fVar30 = *(float *)((int64_t)param_1 + 0x15fc);
    fVar31 = *(float *)(param_1 + 0x2c0);
    fVar25 = *(float *)(lVar22 + 0xc) - *(float *)(param_1 + 0x2a1);
    fVar29 = *(float *)(lVar22 + 0x10) - *(float *)((int64_t)param_1 + 0x150c);
    fVar25 = SQRT(fVar25 * fVar25 + fVar29 * fVar29);
    if (fVar30 < fVar25) {
      fVar31 = ((*(float *)(param_1 + 0x2c1) - fVar31) * (fVar25 - fVar30)) /
               (*(float *)((int64_t)param_1 + 0x1604) - fVar30) + fVar31;
      if (fVar31 <= 0.0001) {
        fVar31 = 0.0001;
      }
    }
    else {
      fVar31 = ((fVar31 - *(float *)(param_1 + 0x2bf)) * fVar25) / fVar30 +
               *(float *)(param_1 + 0x2bf);
    }
    *param_2 = fVar31;
  }
  fVar30 = fVar23;
  if (((char)param_1[0x386] != '\0') && (fVar30 = fVar26, fVar23 <= fVar26)) {
    fVar30 = fVar23;
  }
  if ((((int)param_1[0x403] == 1) || ((int)param_1[0x295] == 9)) &&
     ((*(int *)(*param_1 + 0x564) < 0 && (-1 < *(int *)((int64_t)param_1 + 0x172c))))) {
    lVar22 = (int64_t)*(int *)((int64_t)param_1 + 0x172c) * 0xa60;
    if (*(int *)(lVar22 + 0x3608 + param_1[0x291]) == 1) {
      lVar19 = *(int64_t *)(*param_1 + 0x20);
      lVar22 = *(int64_t *)(lVar22 + 0x30c0 + param_1[0x291]);
      fVar26 = *(float *)(lVar22 + 0xc) - *(float *)(lVar19 + 0xc);
      fVar31 = *(float *)(lVar22 + 0x10) - *(float *)(lVar19 + 0x10);
      fVar23 = *(float *)(lVar22 + 0x14) - *(float *)(lVar19 + 0x14);
      fVar25 = *(float *)(lVar19 + 0x84) * 4.0;
      fVar23 = SQRT(fVar31 * fVar31 + fVar26 * fVar26 + fVar23 * fVar23);
      if ((fVar25 < fVar30) || ((fVar23 < fVar25 && (fVar23 < fVar30)))) {
        param_2[9] = 12.0 / (fVar23 * 0.15 + 1.2);
        *param_2 = *param_2 * 0.5;
      }
    }
    else {
      *(int32_t *)((int64_t)param_1 + 0x172c) = 0xffffffff;
    }
  }
  else if ((((int)param_1[0x403] == 2) && (*(int *)(*param_1 + 0x564) != -1)) && (5.0 < fVar30)) {
    param_2[10] = 1500.0;
  }
  param_2[*(uint *)(param_1 + 0x295)] = param_2[*(uint *)(param_1 + 0x295)] * 1.2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




