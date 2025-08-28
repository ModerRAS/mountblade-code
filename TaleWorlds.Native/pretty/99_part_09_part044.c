#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part044.c - 1 个函数

// 函数: void FUN_1805d0cf4(longlong param_1,float param_2)
void FUN_1805d0cf4(longlong param_1,float param_2)

{
  int iVar1;
  bool bVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  longlong in_RAX;
  uint64_t uVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  int iVar19;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  float fVar20;
  float extraout_XMM0_Da;
  int32_t uVar21;
  float fVar22;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  float fVar23;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  uint64_t uVar24;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_R12;
  *(uint64_t *)(in_RAX + 0x18) = unaff_R13;
  iVar19 = 0;
  *(uint64_t *)(in_RAX + 0x20) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x88) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -0x84) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0x80) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x7c) = unaff_XMM11_Dd;
  *(int32_t *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x2028) != 0) {
    if (*(char *)(param_1 + 0x21c0) == '\0') {
      iVar10 = *(int *)(param_1 + 0x14b4);
    }
    else {
      iVar10 = *(int *)(param_1 + 0x21c4);
    }
    if (((iVar10 < 0) ||
        (lVar14 = *(longlong *)((longlong)iVar10 * 0xa60 + 0x3778 + unaff_RSI[0x291]), lVar14 == 0))
       || (*(char *)(lVar14 + 0x8be) == '\0')) {
      *(int32_t *)(unaff_RSI + 0x405) = 0;
    }
    else {
      FUN_1805d2c90();
    }
  }
  FUN_1805d09b0();
  fVar20 = (float)FUN_180537fc0(unaff_RSI + 0x2ac,param_2,0x40a00000);
  *(int32_t *)(unaff_RSI + 0x27a) = 0;
  *(int32_t *)(unaff_RSI + 0x2b1) = 0;
  if ((*(uint *)((longlong)unaff_RSI + 0x1484) >> 1 & 1) != 0) {
    if ((char)unaff_RSI[0x389] == '\0') {
      if ((char)unaff_RSI[0x386] != '\0') {
        fVar20 = (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x370] * 8) -
                        unaff_RSI[0x36f]) * 1e-05;
        if (0.0 <= fVar20) {
          lVar14 = *(longlong *)
                    (&system_error_code + (longlong)*(int *)(unaff_RSI[0x291] + 0x87b790) * 8);
          lVar16 = *(longlong *)(unaff_RSI[0x291] + 0x87b788);
          iVar10 = (int)unaff_RSI[0x381];
          if (0 < iVar10) {
            pfVar18 = (float *)((longlong)unaff_RSI + 0x1b8c);
            plVar13 = unaff_RSI + 0x371;
            do {
              iVar1 = (int)*plVar13;
              if (((*pfVar18 <= (float)(lVar14 - lVar16) * 1e-05) ||
                  (lVar17 = unaff_RSI[0x291], iVar1 < 0)) ||
                 ((*(int *)(lVar17 + 0x52ed94) <= iVar1 ||
                  ((*(short *)(lVar17 + 0x52dda0 + (longlong)iVar1 * 2) < 0 ||
                   (*(int *)((longlong)iVar1 * 0xa60 + 0x3608 + lVar17) != 1)))))) {
                lVar17 = (longlong)(int)unaff_RSI[0x381];
                iVar19 = iVar19 + -1;
                *(int *)plVar13 = (int)unaff_RSI[lVar17 + 0x370];
                plVar13 = plVar13 + -1;
                *pfVar18 = *(float *)((longlong)unaff_RSI + lVar17 * 8 + 0x1b84);
                *(int32_t *)(unaff_RSI + lVar17 + 0x370) = 0xffffffff;
                *(int *)(unaff_RSI + 0x381) = (int)unaff_RSI[0x381] + -1;
                iVar10 = (int)unaff_RSI[0x381];
                pfVar18 = pfVar18 + -2;
              }
              iVar19 = iVar19 + 1;
              plVar13 = plVar13 + 1;
              pfVar18 = pfVar18 + 2;
            } while (iVar19 < iVar10);
          }
          uVar15 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
          uVar15 = uVar15 ^ uVar15 >> 0x11;
          uVar15 = uVar15 ^ uVar15 << 5;
          *(uint *)(unaff_RSI + 0x272) = uVar15;
          fVar20 = (float)(uVar15 - 1) * 0.00034924597 - 3e+06;
          unaff_RSI[0x36f] =
               *(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x370] * 8) -
               (longlong)fVar20;
        }
        if ((*(uint *)((longlong)unaff_RSI + 0x209c) >> 0xb & 1) == 0) {
          fVar20 = (float)FUN_1805beae0();
        }
      }
    }
    else {
      fVar20 = (float)FUN_1805b9990(fVar20,0);
    }
  }
  if ((char)unaff_RSI[0x2f5] != '\0') {
    fVar20 = (float)FUN_1805b94b0(fVar20,0);
  }
  if ((*(byte *)((longlong)unaff_RSI + 0x1484) & 0x80) != 0) {
    if (*(int *)((longlong)unaff_RSI + 0x18c) == 0) {
      uVar12 = *(uint64_t *)((longlong)unaff_RSI + 0x14dc);
      plVar13 = unaff_RSI + 0x38;
      uVar24 = 0;
    }
    else {
      if (*(int *)((longlong)unaff_RSI + 0x173c) < 0) goto LAB_1805d1005;
      uVar12 = *(uint64_t *)((longlong)unaff_RSI + 0x14dc);
      lVar14 = (longlong)*(int *)((longlong)unaff_RSI + 0x173c) * 0xa60;
      uVar24 = *(uint64_t *)(*(longlong *)(lVar14 + 0x30c0 + unaff_RSI[0x291]) + 0x24);
      plVar13 = (longlong *)FUN_180516f50(lVar14 + unaff_RSI[0x291] + 0x30a0,unaff_RBP + -0x79);
      fVar20 = extraout_XMM0_Da;
    }
    FUN_1805b93a0(fVar20,1,plVar13,uVar12,uVar24);
    if (*(char *)(unaff_RBP + 0x67) != '\0') {
      *(int8_t *)((longlong)unaff_RSI + 0x21ff) = 1;
    }
  }
LAB_1805d1005:
  if ((char)unaff_RSI[0x438] == '\0') {
    iVar19 = *(int *)((longlong)unaff_RSI + 0x14b4);
  }
  else {
    iVar19 = *(int *)((longlong)unaff_RSI + 0x21c4);
  }
  if (-1 < iVar19) {
    lVar14 = *(longlong *)((longlong)iVar19 * 0xa60 + 0x3778 + unaff_RSI[0x291]);
    if (((lVar14 != 0) && (*(char *)(lVar14 + 0x8be) != '\0')) &&
       (*(char *)((longlong)unaff_RSI + 0x13be) == '\0')) {
      if ((char)unaff_RSI[0x438] == '\0') {
        iVar19 = *(int *)((longlong)unaff_RSI + 0x14b4);
      }
      else {
        iVar19 = *(int *)((longlong)unaff_RSI + 0x21c4);
      }
      if (*(int *)((longlong)iVar19 * 0xa60 + 0x3608 + unaff_RSI[0x291]) != 1) {
        FUN_180508010();
        *(int8_t *)((longlong)unaff_RSI + 0x13be) = 1;
      }
    }
  }
  fVar20 = (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x276] * 8) -
                  unaff_RSI[0x275]) * 1e-05;
  if (fVar20 < *(float *)(unaff_RSI + 0x277)) {
    fVar20 = *(float *)(unaff_RSI + 0x285);
  }
  else {
    if ((*(uint *)(*unaff_RSI + 0x56c) & 0x4000) == 0) {
      fVar22 = 0.2;
    }
    else {
      fVar22 = 1.5;
    }
    fVar23 = *(float *)(unaff_RSI[0x291] + 0x98d9d8);
    uVar15 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar15 = uVar15 ^ uVar15 >> 0x11;
    uVar15 = uVar15 ^ uVar15 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar15;
    *(int8_t *)((longlong)unaff_RSI + 0x13bc) = 0;
    *(float *)(unaff_RSI + 0x277) =
         ((2.0 - fVar23) * fVar22 - (fVar20 - *(float *)(unaff_RSI + 0x277))) +
         (float)(uVar15 - 1) * 2.3283064e-10;
    unaff_RSI[0x275] = *(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x276] * 8);
    FUN_1805c2bf0();
    uVar15 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar15 = uVar15 ^ uVar15 >> 0x11;
    uVar15 = uVar15 ^ uVar15 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar15;
    *(uint *)(unaff_RSI + 0x427) = uVar15 - 1;
    fVar20 = *(float *)(*unaff_RSI + 0x340);
    fVar22 = *(float *)(*unaff_RSI + 0x344);
    uVar15 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar15 = uVar15 ^ uVar15 >> 0x11;
    uVar15 = uVar15 ^ uVar15 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar15;
    *(float *)((longlong)unaff_RSI + 0x213c) =
         (float)(uVar15 - 1) * 2.3283064e-10 * (fVar22 - fVar20) + fVar20;
    fVar20 = *(float *)(*unaff_RSI + 0x348);
    uVar15 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar15 = uVar15 ^ uVar15 >> 0x11;
    uVar15 = uVar15 ^ uVar15 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar15;
    *(float *)(unaff_RSI + 0x428) = (float)(uVar15 - 1) * fVar20 * 4.656613e-10 - fVar20;
    fVar20 = *(float *)(*unaff_RSI + 0x34c);
    uVar15 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar15 = uVar15 ^ uVar15 >> 0x11;
    uVar15 = uVar15 ^ uVar15 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar15;
    *(float *)((longlong)unaff_RSI + 0x2144) = (float)(uVar15 - 1) * fVar20 * 4.656613e-10 - fVar20;
    fVar20 = (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x287] * 8) -
                    unaff_RSI[0x286]) * 1e-05;
    *(float *)(unaff_RSI + 0x285) = fVar20;
  }
  bVar6 = false;
  fVar22 = (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x287] * 8) -
                  unaff_RSI[0x286]) * 1e-05;
  bVar2 = fVar20 <= fVar22;
  if ((bVar2) ||
     (((*(int *)((longlong)unaff_RSI + 0x18c) == 1 || (-1 < *(int *)((longlong)unaff_RSI + 0x12dc)))
      && (fVar22 = (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x28c] * 8) -
                          unaff_RSI[0x28b]) * 1e-05,
         *(float *)((longlong)unaff_RSI + 0x146c) <= fVar22)))) {
    if ((*(uint *)(*unaff_RSI + 0x56c) & 0x4000) == 0) {
LAB_1805d1360:
      uVar12 = 0;
    }
    else {
      if (!bVar2) {
        if ((*(byte *)(unaff_RSI + 2) & 0x80) == 0) {
          fVar22 = (float)FUN_1805d4440(unaff_RSI + 1);
        }
        if (*(char *)((longlong)unaff_RSI + 0xd5) != '\0') goto LAB_1805d1360;
      }
      uVar12 = 1;
    }
    FUN_1805c7200(fVar22,uVar12);
    bVar6 = true;
    lVar14 = *(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x287] * 8);
    lVar16 = unaff_RSI[0x286];
    fVar20 = *(float *)(unaff_RSI + 0x285);
    unaff_RSI[0x286] = lVar14;
    fVar22 = *(float *)(unaff_RSI[0x291] + 0x98d9d8);
    uVar15 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar15 = uVar15 ^ uVar15 >> 0x11;
    uVar15 = uVar15 ^ uVar15 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar15;
    fVar22 = ((float)(uVar15 - 1) * 1.1641532e-10 + 0.75) * (2.0 - fVar22);
    *(float *)(unaff_RSI + 0x285) = fVar22;
    if (bVar2) {
      *(float *)(unaff_RSI + 0x285) = fVar22 - ((float)(lVar14 - lVar16) * 1e-05 - fVar20);
    }
    if ((char)unaff_RSI[0x438] == '\0') {
      iVar19 = *(int *)((longlong)unaff_RSI + 0x14b4);
    }
    else {
      iVar19 = *(int *)((longlong)unaff_RSI + 0x21c4);
    }
    if (-1 < iVar19) {
      lVar14 = *(longlong *)((longlong)iVar19 * 0xa60 + 0x3778 + unaff_RSI[0x291]);
      if (((lVar14 != 0) && (*(char *)(lVar14 + 0x8be) != '\0')) &&
         (*(int *)(*unaff_RSI + 0x564) < 0)) {
        if ((char)unaff_RSI[0x438] == '\0') {
          iVar19 = *(int *)((longlong)unaff_RSI + 0x14b4);
        }
        else {
          iVar19 = *(int *)((longlong)unaff_RSI + 0x21c4);
        }
        if (1 < *(int *)((longlong)iVar19 * 0xa60 + 0x3718 + unaff_RSI[0x291])) {
          *(int8_t *)((longlong)unaff_RSI + 0x21fc) = 1;
        }
      }
    }
    *(float *)((longlong)unaff_RSI + 0x1454) =
         (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x289] * 8) -
                unaff_RSI[0x288]) * 1e-05;
  }
  if ((*(uint *)((longlong)unaff_RSI + 0x1484) >> 2 & 1) != 0) goto LAB_1805d1a6a;
  lVar14 = *(longlong *)(*(longlong *)unaff_RSI[0x33] + 0x20);
  uVar21 = *(int32_t *)(lVar14 + 0xc);
  uVar3 = *(int32_t *)(lVar14 + 0x10);
  uVar4 = *(int32_t *)(lVar14 + 0x14);
  uVar5 = *(int32_t *)(lVar14 + 0x18);
  *(int32_t *)(unaff_RSI + 0x34) = 0;
  *(int32_t *)((longlong)unaff_RSI + 0x1a4) = uVar21;
  *(int32_t *)(unaff_RSI + 0x35) = uVar3;
  *(int32_t *)((longlong)unaff_RSI + 0x1ac) = uVar4;
  *(int32_t *)(unaff_RSI + 0x36) = uVar5;
  param_2 = *(float *)(*(longlong *)(*unaff_RSI + 0x20) + 0x234) * param_2;
  fVar20 = (float)func_0x000180507a40();
  if ((fVar20 <= param_2) ||
     (*(float *)((longlong)unaff_RSI + 0x1454) <=
      (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x289] * 8) - unaff_RSI[0x288]
             ) * 1e-05)) {
    uVar15 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar15 = uVar15 ^ uVar15 >> 0x11;
    uVar15 = uVar15 ^ uVar15 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar15;
    *(float *)((longlong)unaff_RSI + 0x1454) =
         ((float)(uVar15 - 1) * 1.1641532e-11 + 1.0) * *(float *)(unaff_RSI + 0x28a);
    unaff_RSI[0x288] = *(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x289] * 8);
    uVar9 = FUN_1805dc680(unaff_RSI + 0x2f);
    FUN_1805df120(unaff_RSI + 0x2f);
    if (uVar9 != 0) {
      *(ushort *)(unaff_RSI + 0x26) = *(ushort *)(unaff_RSI + 0x26) | uVar9;
      if ((uVar9 & 4) != 0) {
        *(int32_t *)((longlong)unaff_RSI + 0x134) = 0xffffffff;
      }
      if ((uVar9 & 0x40) != 0) {
        *(int32_t *)(unaff_RSI + 0x27) = 0xffffffff;
      }
    }
    *(uint64_t *)((longlong)unaff_RSI + 0x21f4) = *(uint64_t *)((longlong)unaff_RSI + 0x1b4);
    *(int8_t *)(unaff_RSI + 0x43e) = 1;
  }
  if ((bVar6) ||
     (*(float *)((longlong)unaff_RSI + 0x146c) <=
      (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x28c] * 8) - unaff_RSI[0x28b]
             ) * 1e-05)) {
    if ((*(uint *)(*unaff_RSI + 0x56c) & 0x14000) == 0x14000) {
      *(int8_t *)((longlong)unaff_RSI + 0x21b4) = 1;
      *(float *)(unaff_RSI + 0x437) =
           (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x28c] * 8) -
                  unaff_RSI[0x28b]) * 1e-05;
    }
    else {
      *(int8_t *)((longlong)unaff_RSI + 0x21b4) = 0;
    }
    *(int32_t *)((longlong)unaff_RSI + 0x158c) = 0;
    *(int32_t *)((longlong)unaff_RSI + 0x159c) = 0;
    FUN_1805d22d0();
    lVar14 = *(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x28c] * 8);
    lVar16 = unaff_RSI[0x28b];
    fVar20 = *(float *)((longlong)unaff_RSI + 0x146c);
    unaff_RSI[0x28b] = lVar14;
    uVar15 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar15 = uVar15 ^ uVar15 >> 0x11;
    uVar15 = uVar15 ^ uVar15 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar15;
    fVar22 = ((float)(uVar15 - 1) * 4.656613e-11 + 1.0) * *(float *)(unaff_RSI + 0x28d);
    *(float *)((longlong)unaff_RSI + 0x146c) = fVar22;
    if (!bVar6) {
      fVar22 = fVar22 - ((float)(lVar14 - lVar16) * 1e-05 - fVar20);
      *(float *)((longlong)unaff_RSI + 0x146c) = fVar22;
    }
    *(float *)(unaff_RSI + 0x2e8) = fVar22;
    cVar7 = func_0x0001805b7cd0();
    if (cVar7 != '\0') {
      *(uint *)((longlong)unaff_RSI + 0x159c) = *(uint *)((longlong)unaff_RSI + 0x159c) & 0xffff83ff
      ;
      *(uint *)((longlong)unaff_RSI + 0x159c) =
           *(uint *)((longlong)unaff_RSI + 0x159c) | *(uint *)(unaff_RSI + 0x2f1);
      if (((*(uint *)((longlong)unaff_RSI + 0x209c) >> 2 & 1) == 0) &&
         (fVar20 = *(float *)(*unaff_RSI + 0x354),
         fVar20 * -0.5 <
         (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x2ee] * 8) -
                unaff_RSI[0x2ed]) * 1e-05)) {
        cVar7 = FUN_1805b7d90();
        if (cVar7 == '\0') {
          uVar15 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
          uVar15 = uVar15 ^ uVar15 >> 0x11;
          uVar15 = uVar15 ^ uVar15 << 5;
          *(uint *)(unaff_RSI + 0x272) = uVar15;
          if ((float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x2ee] * 8) -
                     unaff_RSI[0x2ed]) * 1e-05 <=
              (float)(uVar15 - 1) * 4.656613e-11 + (*(float *)(unaff_RSI + 0x2e8) - fVar20))
          goto LAB_1805d185c;
          lVar14 = -0x8000000000000000;
          unaff_RSI[0x2f1] = 0;
        }
        else {
          lVar14 = 100;
        }
        unaff_RSI[0x2ed] =
             *(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x2ee] * 8) - lVar14;
      }
    }
LAB_1805d185c:
    if ((*(uint *)((longlong)unaff_RSI + 0x158c) >> 0xe & 1) != 0) {
      *(uint *)((longlong)unaff_RSI + 0x158c) = *(uint *)((longlong)unaff_RSI + 0x158c) & 0xffffbfff
      ;
      uVar15 = FUN_1805c8d60();
      *(uint *)((longlong)unaff_RSI + 0x158c) = *(uint *)((longlong)unaff_RSI + 0x158c) | uVar15;
    }
    *(int32_t *)(unaff_RBP + 0x67) = 0;
    *(int32_t *)(unaff_RBP + 0x6b) = 0x3f800000;
    *(uint64_t *)(unaff_RBP + -0x79) = *(uint64_t *)(unaff_RBP + 0x67);
    *(int32_t *)(unaff_RBP + -0x51) = 0;
    *(int32_t *)(unaff_RBP + -0x71) = 0;
    uVar21 = atan2f(0x80000000,0x3f800000);
    uVar15 = *(uint *)(unaff_RSI + 2);
    *(int32_t *)(unaff_RBP + -0x4d) = *(int32_t *)((longlong)unaff_RSI + 0x159c);
    *(int32_t *)(unaff_RBP + -0x69) = uVar21;
    *(int8_t *)(unaff_RBP + -0x41) = 0;
    *(uint64_t *)(unaff_RBP + -0x65) = 0;
    *(uint64_t *)(unaff_RBP + -0x5d) = 0;
    *(int32_t *)(unaff_RBP + -0x55) = 0xffffffff;
    if ((uVar15 & 0x8000000) == 0) {
      bVar8 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RSI[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((longlong)unaff_RSI + 0x11c) = bVar8;
    }
    else {
      bVar8 = *(byte *)((longlong)unaff_RSI + 0x11c);
    }
    if ((bVar8 == 0) && ((*(byte *)(*unaff_RSI + 0x56c) & 1) == 0)) {
      fVar20 = *(float *)(unaff_RSI + 0x4b);
      if ((-0.2 <= fVar20) && (fVar20 <= 0.2)) {
        fVar20 = 0.0;
      }
      fVar22 = *(float *)((longlong)unaff_RSI + 0x25c);
      if ((-0.2 <= fVar22) && (fVar22 <= 0.2)) {
        fVar22 = 0.0;
      }
      *(float *)(unaff_RBP + 0x67) = fVar20;
      *(float *)(unaff_RBP + 0x6b) = fVar22;
      uVar12 = *(uint64_t *)(unaff_RBP + 0x67);
    }
    else {
      uVar12 = 0;
    }
    *(uint64_t *)(unaff_RBP + -0x49) = uVar12;
    FUN_180538160(unaff_RBP + -0x79,(longlong)unaff_RSI + 0x135c);
    uVar15 = *(uint *)(unaff_RBP + -0x4d);
    if ((uVar15 >> 0xe & 1) != 0) {
      uVar11 = FUN_1805c8d60();
      *(uint *)(unaff_RBP + -0x4d) = uVar11 | uVar15 & 0xffffbfff;
    }
    fVar20 = *(float *)((longlong)unaff_RSI + 0x21a4);
    *(float *)((longlong)unaff_RSI + 0x21a4) = *(float *)(*unaff_RSI + 0x324) * 0.1;
    *(longlong *)(unaff_RBP + -0x39) = (longlong)(fVar20 * 100000.0 + (float)system_system_data_ui);
    *(uint *)(unaff_RSI + 0x2b1) = *(uint *)(unaff_RSI + 0x2b1) | *(uint *)(unaff_RSI + 0x27a);
    FUN_1805d8a70(unaff_RSI + 0x2b4);
  }
  else {
    FUN_18061a730(unaff_RSI + 0x269,(int)unaff_RSI[0x427],(longlong)unaff_RSI + 0x213c,0);
    FUN_180538160(unaff_RSI + 0x2ac);
  }
  if (*(char *)((longlong)unaff_RSI + 0x26c) != '\0') {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(*(float *)(unaff_RSI + 0x4d) -
                  *(float *)(*(longlong *)(*(longlong *)unaff_RSI[0x33] + 0x20) + 0x34));
  }
LAB_1805d1a6a:
  lVar14 = system_system_data_ui;
  bVar2 = false;
  if (unaff_RSI[0x2b6] == unaff_RSI[0x2ba]) {
LAB_1805d1bc2:
    *(uint *)((longlong)unaff_RSI + 0x158c) =
         *(uint *)((longlong)unaff_RSI + 0x158c) | *(uint *)((longlong)unaff_RSI + 0x1794);
    if ((*(uint *)(unaff_RSI + 2) & 0x8000000) == 0) {
      bVar8 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RSI[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((longlong)unaff_RSI + 0x11c) = bVar8;
    }
    else {
      bVar8 = *(byte *)((longlong)unaff_RSI + 0x11c);
    }
    if ((bVar8 == 0) && ((*(byte *)(*unaff_RSI + 0x56c) & 1) == 0)) {
      fVar20 = *(float *)(unaff_RSI + 0x4b);
      if ((-0.2 <= fVar20) && (fVar20 <= 0.2)) {
        fVar20 = 0.0;
      }
      fVar22 = *(float *)((longlong)unaff_RSI + 0x25c);
      if ((fVar22 < -0.2) || (fVar23 = 0.0, 0.2 < fVar22)) {
        fVar23 = fVar22;
      }
      *(float *)(unaff_RBP + 0x67) = fVar20;
      *(float *)(unaff_RBP + 0x6b) = fVar23;
      lVar14 = *(longlong *)(unaff_RBP + 0x67);
    }
    else {
      lVar14 = 0;
    }
    unaff_RSI[0x2b2] = lVar14;
  }
  else {
    do {
      if (lVar14 < *(longlong *)(unaff_RSI[0x2b6] + 0x40)) {
        if (bVar2) {
          return;
        }
        goto LAB_1805d1bc2;
      }
      *(uint *)((longlong)unaff_RSI + 0x158c) =
           *(uint *)((longlong)unaff_RSI + 0x158c) | *(uint *)(unaff_RSI[0x2b6] + 0x2c);
      if ((*(uint *)(unaff_RSI + 2) & 0x8000000) == 0) {
        bVar8 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RSI[1] + 0x564) >> 0x1f) ^ 1;
        *(byte *)((longlong)unaff_RSI + 0x11c) = bVar8;
      }
      else {
        bVar8 = *(byte *)((longlong)unaff_RSI + 0x11c);
      }
      if ((bVar8 == 0) && ((*(byte *)(*unaff_RSI + 0x56c) & 1) == 0)) {
        lVar16 = unaff_RSI[0x2b6];
        plVar13 = (longlong *)(lVar16 + 0x30);
      }
      else {
        lVar16 = unaff_RSI[0x2b6];
        plVar13 = (longlong *)&system_data_f0c8;
      }
      unaff_RSI[0x2b2] = *plVar13;
      lVar17 = lVar16 + 0x48;
      *(int32_t *)((longlong)unaff_RSI + 0x1794) = *(int32_t *)(lVar16 + 0x2c);
      if (lVar17 == unaff_RSI[0x2b8]) {
        if (unaff_RSI[0x2b7] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(unaff_RSI[0x2b7],lVar16);
        }
        lVar16 = unaff_RSI[0x2b9];
        unaff_RSI[0x2b9] = lVar16 + 8;
        lVar16 = *(longlong *)(lVar16 + 8);
        unaff_RSI[0x2b7] = lVar16;
        unaff_RSI[0x2b8] = lVar16 + 0x120;
        lVar17 = unaff_RSI[0x2b7];
      }
      unaff_RSI[0x2b6] = lVar17;
      bVar2 = true;
    } while (lVar17 != unaff_RSI[0x2ba]);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




