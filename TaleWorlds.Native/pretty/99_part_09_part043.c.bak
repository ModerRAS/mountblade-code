#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part043.c - 1 个函数

// 函数: void FUN_1805d0cd0(longlong *param_1,float param_2)
void FUN_1805d0cd0(longlong *param_1,float param_2)

{
  int iVar1;
  bool bVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  ushort uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  uint64_t uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStackX_8;
  float fStackX_c;
  uint64_t uVar23;
  uint64_t uStack_d8;
  int32_t uStack_d0;
  int32_t uStack_c8;
  uint64_t uStack_c4;
  uint64_t uStack_bc;
  int32_t uStack_b4;
  int32_t uStack_b0;
  uint uStack_ac;
  uint64_t uStack_a8;
  int8_t uStack_a0;
  longlong lStack_98;
  
  iVar19 = 0;
  *(int32_t *)(param_1 + 2) = 0;
  if ((int)param_1[0x405] != 0) {
    if ((char)param_1[0x438] == '\0') {
      iVar11 = *(int *)((longlong)param_1 + 0x14b4);
    }
    else {
      iVar11 = *(int *)((longlong)param_1 + 0x21c4);
    }
    if (((iVar11 < 0) ||
        (lVar13 = *(longlong *)((longlong)iVar11 * 0xa60 + 0x3778 + param_1[0x291]), lVar13 == 0))
       || (*(char *)(lVar13 + 0x8be) == '\0')) {
      *(int32_t *)(param_1 + 0x405) = 0;
    }
    else {
      FUN_1805d2c90(param_1);
    }
  }
  FUN_1805d09b0(param_1);
  FUN_180537fc0(param_1 + 0x2ac,param_2,0x40a00000);
  *(int32_t *)(param_1 + 0x27a) = 0;
  *(int32_t *)(param_1 + 0x2b1) = 0;
  if ((*(uint *)((longlong)param_1 + 0x1484) >> 1 & 1) != 0) {
    if ((char)param_1[0x389] == '\0') {
      if ((char)param_1[0x386] != '\0') {
        if (0.0 <= (float)(*(longlong *)(&system_error_code + (longlong)(int)param_1[0x370] * 8) -
                          param_1[0x36f]) * 1e-05) {
          lVar13 = *(longlong *)(&system_error_code + (longlong)*(int *)(param_1[0x291] + 0x87b790) * 8)
          ;
          lVar15 = *(longlong *)(param_1[0x291] + 0x87b788);
          iVar11 = (int)param_1[0x381];
          if (0 < iVar11) {
            pfVar17 = (float *)((longlong)param_1 + 0x1b8c);
            plVar12 = param_1 + 0x371;
            do {
              iVar1 = (int)*plVar12;
              if (((*pfVar17 <= (float)(lVar13 - lVar15) * 1e-05) ||
                  (lVar16 = param_1[0x291], iVar1 < 0)) ||
                 ((*(int *)(lVar16 + 0x52ed94) <= iVar1 ||
                  ((*(short *)(lVar16 + 0x52dda0 + (longlong)iVar1 * 2) < 0 ||
                   (*(int *)((longlong)iVar1 * 0xa60 + 0x3608 + lVar16) != 1)))))) {
                lVar16 = (longlong)(int)param_1[0x381];
                iVar19 = iVar19 + -1;
                *(int *)plVar12 = (int)param_1[lVar16 + 0x370];
                plVar12 = plVar12 + -1;
                *pfVar17 = *(float *)((longlong)param_1 + lVar16 * 8 + 0x1b84);
                *(int32_t *)(param_1 + lVar16 + 0x370) = 0xffffffff;
                *(int *)(param_1 + 0x381) = (int)param_1[0x381] + -1;
                iVar11 = (int)param_1[0x381];
                pfVar17 = pfVar17 + -2;
              }
              iVar19 = iVar19 + 1;
              plVar12 = plVar12 + 1;
              pfVar17 = pfVar17 + 2;
            } while (iVar19 < iVar11);
          }
          uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
          uVar14 = uVar14 ^ uVar14 >> 0x11;
          uVar14 = uVar14 ^ uVar14 << 5;
          *(uint *)(param_1 + 0x272) = uVar14;
          param_1[0x36f] =
               *(longlong *)(&system_error_code + (longlong)(int)param_1[0x370] * 8) -
               (longlong)((float)(uVar14 - 1) * 0.00034924597 - 3e+06);
        }
        if ((*(uint *)((longlong)param_1 + 0x209c) >> 0xb & 1) == 0) {
          FUN_1805beae0(param_1);
        }
      }
    }
    else {
      FUN_1805b9990(param_1,0);
    }
  }
  if ((char)param_1[0x2f5] != '\0') {
    FUN_1805b94b0(param_1,0);
  }
  if ((*(byte *)((longlong)param_1 + 0x1484) & 0x80) != 0) {
    if (*(int *)((longlong)param_1 + 0x18c) == 0) {
      uVar18 = *(uint64_t *)((longlong)param_1 + 0x14dc);
      plVar12 = param_1 + 0x38;
      uVar23 = 0;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x173c) < 0) goto LAB_1805d1005;
      uVar18 = *(uint64_t *)((longlong)param_1 + 0x14dc);
      lVar13 = (longlong)*(int *)((longlong)param_1 + 0x173c) * 0xa60;
      uVar23 = *(uint64_t *)(*(longlong *)(lVar13 + 0x30c0 + param_1[0x291]) + 0x24);
      plVar12 = (longlong *)FUN_180516f50(lVar13 + param_1[0x291] + 0x30a0,&uStack_d8);
    }
    FUN_1805b93a0(param_1,1,plVar12,uVar18,uVar23,&fStackX_8);
    if (fStackX_8._0_1_ != '\0') {
      *(int8_t *)((longlong)param_1 + 0x21ff) = 1;
    }
  }
LAB_1805d1005:
  if ((char)param_1[0x438] == '\0') {
    iVar19 = *(int *)((longlong)param_1 + 0x14b4);
  }
  else {
    iVar19 = *(int *)((longlong)param_1 + 0x21c4);
  }
  if (-1 < iVar19) {
    lVar13 = *(longlong *)((longlong)iVar19 * 0xa60 + 0x3778 + param_1[0x291]);
    if (((lVar13 != 0) && (*(char *)(lVar13 + 0x8be) != '\0')) &&
       (*(char *)((longlong)param_1 + 0x13be) == '\0')) {
      if ((char)param_1[0x438] == '\0') {
        iVar19 = *(int *)((longlong)param_1 + 0x14b4);
      }
      else {
        iVar19 = *(int *)((longlong)param_1 + 0x21c4);
      }
      if (*(int *)((longlong)iVar19 * 0xa60 + 0x3608 + param_1[0x291]) != 1) {
        FUN_180508010(param_1);
        *(int8_t *)((longlong)param_1 + 0x13be) = 1;
      }
    }
  }
  fVar20 = (float)(*(longlong *)(&system_error_code + (longlong)(int)param_1[0x276] * 8) -
                  param_1[0x275]) * 1e-05;
  if (fVar20 < *(float *)(param_1 + 0x277)) {
    fVar20 = *(float *)(param_1 + 0x285);
  }
  else {
    if ((*(uint *)(*param_1 + 0x56c) & 0x4000) == 0) {
      fVar21 = 0.2;
    }
    else {
      fVar21 = 1.5;
    }
    fVar22 = *(float *)(param_1[0x291] + 0x98d9d8);
    uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar14 = uVar14 ^ uVar14 >> 0x11;
    uVar14 = uVar14 ^ uVar14 << 5;
    *(uint *)(param_1 + 0x272) = uVar14;
    *(int8_t *)((longlong)param_1 + 0x13bc) = 0;
    *(float *)(param_1 + 0x277) =
         ((2.0 - fVar22) * fVar21 - (fVar20 - *(float *)(param_1 + 0x277))) +
         (float)(uVar14 - 1) * 2.3283064e-10;
    param_1[0x275] = *(longlong *)(&system_error_code + (longlong)(int)param_1[0x276] * 8);
    FUN_1805c2bf0(param_1);
    uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar14 = uVar14 ^ uVar14 >> 0x11;
    uVar14 = uVar14 ^ uVar14 << 5;
    *(uint *)(param_1 + 0x272) = uVar14;
    *(uint *)(param_1 + 0x427) = uVar14 - 1;
    fVar20 = *(float *)(*param_1 + 0x340);
    fVar21 = *(float *)(*param_1 + 0x344);
    uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar14 = uVar14 ^ uVar14 >> 0x11;
    uVar14 = uVar14 ^ uVar14 << 5;
    *(uint *)(param_1 + 0x272) = uVar14;
    *(float *)((longlong)param_1 + 0x213c) =
         (float)(uVar14 - 1) * 2.3283064e-10 * (fVar21 - fVar20) + fVar20;
    fVar20 = *(float *)(*param_1 + 0x348);
    uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar14 = uVar14 ^ uVar14 >> 0x11;
    uVar14 = uVar14 ^ uVar14 << 5;
    *(uint *)(param_1 + 0x272) = uVar14;
    *(float *)(param_1 + 0x428) = (float)(uVar14 - 1) * fVar20 * 4.656613e-10 - fVar20;
    fVar20 = *(float *)(*param_1 + 0x34c);
    uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar14 = uVar14 ^ uVar14 >> 0x11;
    uVar14 = uVar14 ^ uVar14 << 5;
    *(uint *)(param_1 + 0x272) = uVar14;
    *(float *)((longlong)param_1 + 0x2144) = (float)(uVar14 - 1) * fVar20 * 4.656613e-10 - fVar20;
    fVar20 = (float)(*(longlong *)(&system_error_code + (longlong)(int)param_1[0x287] * 8) -
                    param_1[0x286]) * 1e-05;
    *(float *)(param_1 + 0x285) = fVar20;
  }
  bVar7 = false;
  bVar2 = fVar20 <= (float)(*(longlong *)(&system_error_code + (longlong)(int)param_1[0x287] * 8) -
                           param_1[0x286]) * 1e-05;
  if ((bVar2) ||
     (((*(int *)((longlong)param_1 + 0x18c) == 1 || (-1 < *(int *)((longlong)param_1 + 0x12dc))) &&
      (*(float *)((longlong)param_1 + 0x146c) <=
       (float)(*(longlong *)(&system_error_code + (longlong)(int)param_1[0x28c] * 8) - param_1[0x28b]) *
       1e-05)))) {
    if ((*(uint *)(*param_1 + 0x56c) & 0x4000) == 0) {
LAB_1805d1360:
      uVar18 = 0;
    }
    else {
      if (!bVar2) {
        if ((*(byte *)(param_1 + 2) & 0x80) == 0) {
          FUN_1805d4440(param_1 + 1);
        }
        if (*(char *)((longlong)param_1 + 0xd5) != '\0') goto LAB_1805d1360;
      }
      uVar18 = 1;
    }
    FUN_1805c7200(param_1,uVar18);
    bVar7 = true;
    lVar13 = *(longlong *)(&system_error_code + (longlong)(int)param_1[0x287] * 8);
    lVar15 = param_1[0x286];
    fVar20 = *(float *)(param_1 + 0x285);
    param_1[0x286] = lVar13;
    fVar21 = *(float *)(param_1[0x291] + 0x98d9d8);
    uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar14 = uVar14 ^ uVar14 >> 0x11;
    uVar14 = uVar14 ^ uVar14 << 5;
    *(uint *)(param_1 + 0x272) = uVar14;
    fVar21 = ((float)(uVar14 - 1) * 1.1641532e-10 + 0.75) * (2.0 - fVar21);
    *(float *)(param_1 + 0x285) = fVar21;
    if (bVar2) {
      *(float *)(param_1 + 0x285) = fVar21 - ((float)(lVar13 - lVar15) * 1e-05 - fVar20);
    }
    if ((char)param_1[0x438] == '\0') {
      iVar19 = *(int *)((longlong)param_1 + 0x14b4);
    }
    else {
      iVar19 = *(int *)((longlong)param_1 + 0x21c4);
    }
    if (-1 < iVar19) {
      lVar13 = *(longlong *)((longlong)iVar19 * 0xa60 + 0x3778 + param_1[0x291]);
      if (((lVar13 != 0) && (*(char *)(lVar13 + 0x8be) != '\0')) && (*(int *)(*param_1 + 0x564) < 0)
         ) {
        if ((char)param_1[0x438] == '\0') {
          iVar19 = *(int *)((longlong)param_1 + 0x14b4);
        }
        else {
          iVar19 = *(int *)((longlong)param_1 + 0x21c4);
        }
        if (1 < *(int *)((longlong)iVar19 * 0xa60 + 0x3718 + param_1[0x291])) {
          *(int8_t *)((longlong)param_1 + 0x21fc) = 1;
        }
      }
    }
    *(float *)((longlong)param_1 + 0x1454) =
         (float)(*(longlong *)(&system_error_code + (longlong)(int)param_1[0x289] * 8) - param_1[0x288])
         * 1e-05;
  }
  if ((*(uint *)((longlong)param_1 + 0x1484) >> 2 & 1) != 0) goto LAB_1805d1a6a;
  lVar13 = *(longlong *)(*(longlong *)param_1[0x33] + 0x20);
  uVar3 = *(int32_t *)(lVar13 + 0xc);
  uVar4 = *(int32_t *)(lVar13 + 0x10);
  uVar5 = *(int32_t *)(lVar13 + 0x14);
  uVar6 = *(int32_t *)(lVar13 + 0x18);
  *(int32_t *)(param_1 + 0x34) = 0;
  *(int32_t *)((longlong)param_1 + 0x1a4) = uVar3;
  *(int32_t *)(param_1 + 0x35) = uVar4;
  *(int32_t *)((longlong)param_1 + 0x1ac) = uVar5;
  *(int32_t *)(param_1 + 0x36) = uVar6;
  param_2 = *(float *)(*(longlong *)(*param_1 + 0x20) + 0x234) * param_2;
  fVar20 = (float)func_0x000180507a40();
  if ((fVar20 <= param_2) ||
     (*(float *)((longlong)param_1 + 0x1454) <=
      (float)(*(longlong *)(&system_error_code + (longlong)(int)param_1[0x289] * 8) - param_1[0x288]) *
      1e-05)) {
    uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar14 = uVar14 ^ uVar14 >> 0x11;
    uVar14 = uVar14 ^ uVar14 << 5;
    *(uint *)(param_1 + 0x272) = uVar14;
    *(float *)((longlong)param_1 + 0x1454) =
         ((float)(uVar14 - 1) * 1.1641532e-11 + 1.0) * *(float *)(param_1 + 0x28a);
    param_1[0x288] = *(longlong *)(&system_error_code + (longlong)(int)param_1[0x289] * 8);
    uVar10 = FUN_1805dc680(param_1 + 0x2f);
    FUN_1805df120(param_1 + 0x2f);
    if (uVar10 != 0) {
      *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | uVar10;
      if ((uVar10 & 4) != 0) {
        *(int32_t *)((longlong)param_1 + 0x134) = 0xffffffff;
      }
      if ((uVar10 & 0x40) != 0) {
        *(int32_t *)(param_1 + 0x27) = 0xffffffff;
      }
    }
    *(uint64_t *)((longlong)param_1 + 0x21f4) = *(uint64_t *)((longlong)param_1 + 0x1b4);
    *(int8_t *)(param_1 + 0x43e) = 1;
  }
  if ((bVar7) ||
     (*(float *)((longlong)param_1 + 0x146c) <=
      (float)(*(longlong *)(&system_error_code + (longlong)(int)param_1[0x28c] * 8) - param_1[0x28b]) *
      1e-05)) {
    if ((*(uint *)(*param_1 + 0x56c) & 0x14000) == 0x14000) {
      *(int8_t *)((longlong)param_1 + 0x21b4) = 1;
      *(float *)(param_1 + 0x437) =
           (float)(*(longlong *)(&system_error_code + (longlong)(int)param_1[0x28c] * 8) -
                  param_1[0x28b]) * 1e-05;
    }
    else {
      *(int8_t *)((longlong)param_1 + 0x21b4) = 0;
    }
    *(int32_t *)((longlong)param_1 + 0x158c) = 0;
    *(int32_t *)((longlong)param_1 + 0x159c) = 0;
    FUN_1805d22d0(param_1);
    lVar13 = *(longlong *)(&system_error_code + (longlong)(int)param_1[0x28c] * 8);
    lVar15 = param_1[0x28b];
    fVar20 = *(float *)((longlong)param_1 + 0x146c);
    param_1[0x28b] = lVar13;
    uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar14 = uVar14 ^ uVar14 >> 0x11;
    uVar14 = uVar14 ^ uVar14 << 5;
    *(uint *)(param_1 + 0x272) = uVar14;
    fVar21 = ((float)(uVar14 - 1) * 4.656613e-11 + 1.0) * *(float *)(param_1 + 0x28d);
    *(float *)((longlong)param_1 + 0x146c) = fVar21;
    if (!bVar7) {
      fVar21 = fVar21 - ((float)(lVar13 - lVar15) * 1e-05 - fVar20);
      *(float *)((longlong)param_1 + 0x146c) = fVar21;
    }
    *(float *)(param_1 + 0x2e8) = fVar21;
    cVar8 = func_0x0001805b7cd0(param_1);
    if (cVar8 != '\0') {
      *(uint *)((longlong)param_1 + 0x159c) = *(uint *)((longlong)param_1 + 0x159c) & 0xffff83ff;
      *(uint *)((longlong)param_1 + 0x159c) =
           *(uint *)((longlong)param_1 + 0x159c) | *(uint *)(param_1 + 0x2f1);
      if (((*(uint *)((longlong)param_1 + 0x209c) >> 2 & 1) == 0) &&
         (fVar20 = *(float *)(*param_1 + 0x354),
         fVar20 * -0.5 <
         (float)(*(longlong *)(&system_error_code + (longlong)(int)param_1[0x2ee] * 8) - param_1[0x2ed])
         * 1e-05)) {
        cVar8 = FUN_1805b7d90(param_1);
        if (cVar8 == '\0') {
          uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
          uVar14 = uVar14 ^ uVar14 >> 0x11;
          uVar14 = uVar14 ^ uVar14 << 5;
          *(uint *)(param_1 + 0x272) = uVar14;
          if ((float)(*(longlong *)(&system_error_code + (longlong)(int)param_1[0x2ee] * 8) -
                     param_1[0x2ed]) * 1e-05 <=
              (float)(uVar14 - 1) * 4.656613e-11 + (*(float *)(param_1 + 0x2e8) - fVar20))
          goto LAB_1805d185c;
          lVar13 = -0x8000000000000000;
          param_1[0x2f1] = 0;
        }
        else {
          lVar13 = 100;
        }
        param_1[0x2ed] = *(longlong *)(&system_error_code + (longlong)(int)param_1[0x2ee] * 8) - lVar13;
      }
    }
LAB_1805d185c:
    if ((*(uint *)((longlong)param_1 + 0x158c) >> 0xe & 1) != 0) {
      *(uint *)((longlong)param_1 + 0x158c) = *(uint *)((longlong)param_1 + 0x158c) & 0xffffbfff;
      uVar14 = FUN_1805c8d60(param_1);
      *(uint *)((longlong)param_1 + 0x158c) = *(uint *)((longlong)param_1 + 0x158c) | uVar14;
    }
    fStackX_8 = 0.0;
    fStackX_c = 1.0;
    uStack_d8 = 0x3f80000000000000;
    uStack_b0 = 0;
    uStack_d0 = 0;
    uStack_c8 = atan2f(0x80000000,0x3f800000);
    uStack_ac = *(uint *)((longlong)param_1 + 0x159c);
    uStack_a0 = 0;
    uStack_c4 = 0;
    uStack_bc = 0;
    uStack_b4 = 0xffffffff;
    if ((*(uint *)(param_1 + 2) & 0x8000000) == 0) {
      bVar9 = (byte)((uint)*(int32_t *)(*(longlong *)param_1[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((longlong)param_1 + 0x11c) = bVar9;
    }
    else {
      bVar9 = *(byte *)((longlong)param_1 + 0x11c);
    }
    if ((bVar9 == 0) && ((*(byte *)(*param_1 + 0x56c) & 1) == 0)) {
      fStackX_8 = *(float *)(param_1 + 0x4b);
      if ((-0.2 <= fStackX_8) && (fStackX_8 <= 0.2)) {
        fStackX_8 = 0.0;
      }
      fStackX_c = *(float *)((longlong)param_1 + 0x25c);
      if ((-0.2 <= fStackX_c) && (fStackX_c <= 0.2)) {
        fStackX_c = 0.0;
      }
      uStack_a8 = CONCAT44(fStackX_c,fStackX_8);
    }
    else {
      uStack_a8 = 0;
    }
    FUN_180538160(&uStack_d8,(longlong)param_1 + 0x135c);
    uVar14 = uStack_ac;
    if ((uStack_ac >> 0xe & 1) != 0) {
      uStack_ac = FUN_1805c8d60(param_1);
      uStack_ac = uStack_ac | uVar14 & 0xffffbfff;
    }
    fVar20 = *(float *)((longlong)param_1 + 0x21a4);
    *(float *)((longlong)param_1 + 0x21a4) = *(float *)(*param_1 + 0x324) * 0.1;
    lStack_98 = (longlong)(fVar20 * 100000.0 + (float)system_system_data_config);
    *(uint *)(param_1 + 0x2b1) = *(uint *)(param_1 + 0x2b1) | *(uint *)(param_1 + 0x27a);
    FUN_1805d8a70(param_1 + 0x2b4);
  }
  else {
    FUN_18061a730(param_1 + 0x269,(int)param_1[0x427],(longlong)param_1 + 0x213c,0);
    FUN_180538160(param_1 + 0x2ac);
  }
  if (*(char *)((longlong)param_1 + 0x26c) != '\0') {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(*(float *)(param_1 + 0x4d) -
                  *(float *)(*(longlong *)(*(longlong *)param_1[0x33] + 0x20) + 0x34));
  }
LAB_1805d1a6a:
  lVar13 = system_system_data_config;
  bVar2 = false;
  if (param_1[0x2b6] == param_1[0x2ba]) {
LAB_1805d1bc2:
    *(uint *)((longlong)param_1 + 0x158c) =
         *(uint *)((longlong)param_1 + 0x158c) | *(uint *)((longlong)param_1 + 0x1794);
    if ((*(uint *)(param_1 + 2) & 0x8000000) == 0) {
      bVar9 = (byte)((uint)*(int32_t *)(*(longlong *)param_1[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((longlong)param_1 + 0x11c) = bVar9;
    }
    else {
      bVar9 = *(byte *)((longlong)param_1 + 0x11c);
    }
    if ((bVar9 == 0) && ((*(byte *)(*param_1 + 0x56c) & 1) == 0)) {
      fVar20 = *(float *)(param_1 + 0x4b);
      if ((-0.2 <= fVar20) && (fVar20 <= 0.2)) {
        fVar20 = 0.0;
      }
      fVar21 = *(float *)((longlong)param_1 + 0x25c);
      if ((fVar21 < -0.2) || (fVar22 = 0.0, 0.2 < fVar21)) {
        fVar22 = fVar21;
      }
      lVar13 = CONCAT44(fVar22,fVar20);
    }
    else {
      lVar13 = 0;
    }
    param_1[0x2b2] = lVar13;
  }
  else {
    do {
      if (lVar13 < *(longlong *)(param_1[0x2b6] + 0x40)) {
        if (bVar2) {
          return;
        }
        goto LAB_1805d1bc2;
      }
      *(uint *)((longlong)param_1 + 0x158c) =
           *(uint *)((longlong)param_1 + 0x158c) | *(uint *)(param_1[0x2b6] + 0x2c);
      if ((*(uint *)(param_1 + 2) & 0x8000000) == 0) {
        bVar9 = (byte)((uint)*(int32_t *)(*(longlong *)param_1[1] + 0x564) >> 0x1f) ^ 1;
        *(byte *)((longlong)param_1 + 0x11c) = bVar9;
      }
      else {
        bVar9 = *(byte *)((longlong)param_1 + 0x11c);
      }
      if ((bVar9 == 0) && ((*(byte *)(*param_1 + 0x56c) & 1) == 0)) {
        lVar15 = param_1[0x2b6];
        plVar12 = (longlong *)(lVar15 + 0x30);
      }
      else {
        lVar15 = param_1[0x2b6];
        plVar12 = (longlong *)&system_data_f0c8;
      }
      param_1[0x2b2] = *plVar12;
      lVar16 = lVar15 + 0x48;
      *(int32_t *)((longlong)param_1 + 0x1794) = *(int32_t *)(lVar15 + 0x2c);
      if (lVar16 == param_1[0x2b8]) {
        if (param_1[0x2b7] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(param_1[0x2b7],lVar15);
        }
        lVar15 = param_1[0x2b9];
        param_1[0x2b9] = lVar15 + 8;
        lVar15 = *(longlong *)(lVar15 + 8);
        param_1[0x2b7] = lVar15;
        param_1[0x2b8] = lVar15 + 0x120;
        lVar16 = param_1[0x2b7];
      }
      param_1[0x2b6] = lVar16;
      bVar2 = true;
    } while (lVar16 != param_1[0x2ba]);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




