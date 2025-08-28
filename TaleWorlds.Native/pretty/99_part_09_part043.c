#include "ultra_high_freq_fun_definitions.h"
/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_09_part043.c - 1 个函数
// 函数: void function_5d0cd0(int64_t *param_1,float param_2)
void function_5d0cd0(int64_t *param_1,float param_2)
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
  int64_t *plVar12;
  int64_t lVar13;
  uint uVar14;
  int64_t lVar15;
  int64_t lVar16;
  float *pfVar17;
  uint64_t uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStackX_8;
  float fStackX_c;
  uint64_t uVar23;
  uint64_t local_var_d8;
  int32_t local_var_d0;
  int32_t local_var_c8;
  uint64_t local_var_c4;
  uint64_t local_var_bc;
  int32_t local_var_b4;
  int32_t local_var_b0;
  uint local_var_ac;
  uint64_t local_var_a8;
  int8_t local_var_a0;
  int64_t lStack_98;
  iVar19 = 0;
  *(int32_t *)(param_1 + 2) = 0;
  if ((int)param_1[0x405] != 0) {
    if ((char)param_1[0x438] == '\0') {
      iVar11 = *(int *)((int64_t)param_1 + 0x14b4);
    }
    else {
      iVar11 = *(int *)((int64_t)param_1 + 0x21c4);
    }
    if (((iVar11 < 0) ||
        (lVar13 = *(int64_t *)((int64_t)iVar11 * 0xa60 + 0x3778 + param_1[0x291]), lVar13 == 0))
       || (*(char *)(lVar13 + 0x8be) == '\0')) {
      *(int32_t *)(param_1 + 0x405) = 0;
    }
    else {
      function_5d2c90(param_1);
    }
  }
  function_5d09b0(param_1);
  function_537fc0(param_1 + 0x2ac,param_2,0x40a00000);
  *(int32_t *)(param_1 + 0x27a) = 0;
  *(int32_t *)(param_1 + 0x2b1) = 0;
  if ((*(uint *)((int64_t)param_1 + 0x1484) >> 1 & 1) != 0) {
    if ((char)param_1[0x389] == '\0') {
      if ((char)param_1[0x386] != '\0') {
        if (0.0 <= (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x370] * 8) -
                          param_1[0x36f]) * 1e-05) {
          lVar13 = *(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1[0x291] + 0x87b790) * 8)
          ;
          lVar15 = *(int64_t *)(param_1[0x291] + 0x87b788);
          iVar11 = (int)param_1[0x381];
          if (0 < iVar11) {
            pfVar17 = (float *)((int64_t)param_1 + 0x1b8c);
            plVar12 = param_1 + 0x371;
            do {
              iVar1 = (int)*plVar12;
              if (((*pfVar17 <= (float)(lVar13 - lVar15) * 1e-05) ||
                  (lVar16 = param_1[0x291], iVar1 < 0)) ||
                 ((*(int *)(lVar16 + 0x52ed94) <= iVar1 ||
                  ((*(short *)(lVar16 + 0x52dda0 + (int64_t)iVar1 * 2) < 0 ||
                   (*(int *)((int64_t)iVar1 * 0xa60 + 0x3608 + lVar16) != 1)))))) {
                lVar16 = (int64_t)(int)param_1[0x381];
                iVar19 = iVar19 + -1;
                *(int *)plVar12 = (int)param_1[lVar16 + 0x370];
                plVar12 = plVar12 + -1;
                *pfVar17 = *(float *)((int64_t)param_1 + lVar16 * 8 + 0x1b84);
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
               *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x370] * 8) -
               (int64_t)((float)(uVar14 - 1) * 0.00034924597 - 3e+06);
        }
        if ((*(uint *)((int64_t)param_1 + 0x209c) >> 0xb & 1) == 0) {
          function_5beae0(param_1);
        }
      }
    }
    else {
      function_5b9990(param_1,0);
    }
  }
  if ((char)param_1[0x2f5] != '\0') {
    function_5b94b0(param_1,0);
  }
  if ((*(byte *)((int64_t)param_1 + 0x1484) & 0x80) != 0) {
    if (*(int *)((int64_t)param_1 + 0x18c) == 0) {
      uVar18 = *(uint64_t *)((int64_t)param_1 + 0x14dc);
      plVar12 = param_1 + 0x38;
      uVar23 = 0;
    }
    else {
      if (*(int *)((int64_t)param_1 + 0x173c) < 0) goto LAB_1805d1005;
      uVar18 = *(uint64_t *)((int64_t)param_1 + 0x14dc);
      lVar13 = (int64_t)*(int *)((int64_t)param_1 + 0x173c) * 0xa60;
      uVar23 = *(uint64_t *)(*(int64_t *)(lVar13 + 0x30c0 + param_1[0x291]) + 0x24);
      plVar12 = (int64_t *)UltraHighFreq_MemoryManager1(lVar13 + param_1[0x291] + 0x30a0,&local_var_d8);
    }
    function_5b93a0(param_1,1,plVar12,uVar18,uVar23,&fStackX_8);
    if (fStackX_8._0_1_ != '\0') {
      *(int8_t *)((int64_t)param_1 + 0x21ff) = 1;
    }
  }
LAB_1805d1005:
  if ((char)param_1[0x438] == '\0') {
    iVar19 = *(int *)((int64_t)param_1 + 0x14b4);
  }
  else {
    iVar19 = *(int *)((int64_t)param_1 + 0x21c4);
  }
  if (-1 < iVar19) {
    lVar13 = *(int64_t *)((int64_t)iVar19 * 0xa60 + 0x3778 + param_1[0x291]);
    if (((lVar13 != 0) && (*(char *)(lVar13 + 0x8be) != '\0')) &&
       (*(char *)((int64_t)param_1 + 0x13be) == '\0')) {
      if ((char)param_1[0x438] == '\0') {
        iVar19 = *(int *)((int64_t)param_1 + 0x14b4);
      }
      else {
        iVar19 = *(int *)((int64_t)param_1 + 0x21c4);
      }
      if (*(int *)((int64_t)iVar19 * 0xa60 + 0x3608 + param_1[0x291]) != 1) {
        AnimationSystem_Controller(param_1);
        *(int8_t *)((int64_t)param_1 + 0x13be) = 1;
      }
    }
  }
  fVar20 = (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x276] * 8) -
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
    *(int8_t *)((int64_t)param_1 + 0x13bc) = 0;
    *(float *)(param_1 + 0x277) =
         ((2.0 - fVar22) * fVar21 - (fVar20 - *(float *)(param_1 + 0x277))) +
         (float)(uVar14 - 1) * 2.3283064e-10;
    param_1[0x275] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x276] * 8);
    function_5c2bf0(param_1);
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
    *(float *)((int64_t)param_1 + 0x213c) =
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
    *(float *)((int64_t)param_1 + 0x2144) = (float)(uVar14 - 1) * fVar20 * 4.656613e-10 - fVar20;
    fVar20 = (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x287] * 8) -
                    param_1[0x286]) * 1e-05;
    *(float *)(param_1 + 0x285) = fVar20;
  }
  bVar7 = false;
  bVar2 = fVar20 <= (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x287] * 8) -
                           param_1[0x286]) * 1e-05;
  if ((bVar2) ||
     (((*(int *)((int64_t)param_1 + 0x18c) == 1 || (-1 < *(int *)((int64_t)param_1 + 0x12dc))) &&
      (*(float *)((int64_t)param_1 + 0x146c) <=
       (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x28c] * 8) - param_1[0x28b]) *
       1e-05)))) {
    if ((*(uint *)(*param_1 + 0x56c) & 0x4000) == 0) {
LAB_1805d1360:
      uVar18 = 0;
    }
    else {
      if (!bVar2) {
        if ((*(byte *)(param_1 + 2) & 0x80) == 0) {
          SystemCore_Validator(param_1 + 1);
        }
        if (*(char *)((int64_t)param_1 + 0xd5) != '\0') goto LAB_1805d1360;
      }
      uVar18 = 1;
    }
    function_5c7200(param_1,uVar18);
    bVar7 = true;
    lVar13 = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x287] * 8);
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
      iVar19 = *(int *)((int64_t)param_1 + 0x14b4);
    }
    else {
      iVar19 = *(int *)((int64_t)param_1 + 0x21c4);
    }
    if (-1 < iVar19) {
      lVar13 = *(int64_t *)((int64_t)iVar19 * 0xa60 + 0x3778 + param_1[0x291]);
      if (((lVar13 != 0) && (*(char *)(lVar13 + 0x8be) != '\0')) && (*(int *)(*param_1 + 0x564) < 0)
         ) {
        if ((char)param_1[0x438] == '\0') {
          iVar19 = *(int *)((int64_t)param_1 + 0x14b4);
        }
        else {
          iVar19 = *(int *)((int64_t)param_1 + 0x21c4);
        }
        if (1 < *(int *)((int64_t)iVar19 * 0xa60 + 0x3718 + param_1[0x291])) {
          *(int8_t *)((int64_t)param_1 + 0x21fc) = 1;
        }
      }
    }
    *(float *)((int64_t)param_1 + 0x1454) =
         (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x289] * 8) - param_1[0x288])
         * 1e-05;
  }
  if ((*(uint *)((int64_t)param_1 + 0x1484) >> 2 & 1) != 0) goto LAB_1805d1a6a;
  lVar13 = *(int64_t *)(*(int64_t *)param_1[0x33] + 0x20);
  uVar3 = *(int32_t *)(lVar13 + 0xc);
  uVar4 = *(int32_t *)(lVar13 + 0x10);
  uVar5 = *(int32_t *)(lVar13 + 0x14);
  uVar6 = *(int32_t *)(lVar13 + 0x18);
  *(int32_t *)(param_1 + 0x34) = 0;
  *(int32_t *)((int64_t)param_1 + 0x1a4) = uVar3;
  *(int32_t *)(param_1 + 0x35) = uVar4;
  *(int32_t *)((int64_t)param_1 + 0x1ac) = uVar5;
  *(int32_t *)(param_1 + 0x36) = uVar6;
  param_2 = *(float *)(*(int64_t *)(*param_1 + 0x20) + 0x234) * param_2;
  fVar20 = (float)Function_f76dacc3();
  if ((fVar20 <= param_2) ||
     (*(float *)((int64_t)param_1 + 0x1454) <=
      (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x289] * 8) - param_1[0x288]) *
      1e-05)) {
    uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar14 = uVar14 ^ uVar14 >> 0x11;
    uVar14 = uVar14 ^ uVar14 << 5;
    *(uint *)(param_1 + 0x272) = uVar14;
    *(float *)((int64_t)param_1 + 0x1454) =
         ((float)(uVar14 - 1) * 1.1641532e-11 + 1.0) * *(float *)(param_1 + 0x28a);
    param_1[0x288] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x289] * 8);
    uVar10 = function_5dc680(param_1 + 0x2f);
    function_5df120(param_1 + 0x2f);
    if (uVar10 != 0) {
      *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | uVar10;
      if ((uVar10 & 4) != 0) {
        *(int32_t *)((int64_t)param_1 + 0x134) = 0xffffffff;
      }
      if ((uVar10 & 0x40) != 0) {
        *(int32_t *)(param_1 + 0x27) = 0xffffffff;
      }
    }
    *(uint64_t *)((int64_t)param_1 + 0x21f4) = *(uint64_t *)((int64_t)param_1 + 0x1b4);
    *(int8_t *)(param_1 + 0x43e) = 1;
  }
  if ((bVar7) ||
     (*(float *)((int64_t)param_1 + 0x146c) <=
      (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x28c] * 8) - param_1[0x28b]) *
      1e-05)) {
    if ((*(uint *)(*param_1 + 0x56c) & 0x14000) == 0x14000) {
      *(int8_t *)((int64_t)param_1 + 0x21b4) = 1;
      *(float *)(param_1 + 0x437) =
           (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x28c] * 8) -
                  param_1[0x28b]) * 1e-05;
    }
    else {
      *(int8_t *)((int64_t)param_1 + 0x21b4) = 0;
    }
    *(int32_t *)((int64_t)param_1 + 0x158c) = 0;
    *(int32_t *)((int64_t)param_1 + 0x159c) = 0;
    function_5d22d0(param_1);
    lVar13 = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x28c] * 8);
    lVar15 = param_1[0x28b];
    fVar20 = *(float *)((int64_t)param_1 + 0x146c);
    param_1[0x28b] = lVar13;
    uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar14 = uVar14 ^ uVar14 >> 0x11;
    uVar14 = uVar14 ^ uVar14 << 5;
    *(uint *)(param_1 + 0x272) = uVar14;
    fVar21 = ((float)(uVar14 - 1) * 4.656613e-11 + 1.0) * *(float *)(param_1 + 0x28d);
    *(float *)((int64_t)param_1 + 0x146c) = fVar21;
    if (!bVar7) {
      fVar21 = fVar21 - ((float)(lVar13 - lVar15) * 1e-05 - fVar20);
      *(float *)((int64_t)param_1 + 0x146c) = fVar21;
    }
    *(float *)(param_1 + 0x2e8) = fVar21;
    cVar8 = Function_6bb7c718(param_1);
    if (cVar8 != '\0') {
      *(uint *)((int64_t)param_1 + 0x159c) = *(uint *)((int64_t)param_1 + 0x159c) & 0xffff83ff;
      *(uint *)((int64_t)param_1 + 0x159c) =
           *(uint *)((int64_t)param_1 + 0x159c) | *(uint *)(param_1 + 0x2f1);
      if (((*(uint *)((int64_t)param_1 + 0x209c) >> 2 & 1) == 0) &&
         (fVar20 = *(float *)(*param_1 + 0x354),
         fVar20 * -0.5 <
         (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ee] * 8) - param_1[0x2ed])
         * 1e-05)) {
        cVar8 = function_5b7d90(param_1);
        if (cVar8 == '\0') {
          uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
          uVar14 = uVar14 ^ uVar14 >> 0x11;
          uVar14 = uVar14 ^ uVar14 << 5;
          *(uint *)(param_1 + 0x272) = uVar14;
          if ((float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ee] * 8) -
                     param_1[0x2ed]) * 1e-05 <=
              (float)(uVar14 - 1) * 4.656613e-11 + (*(float *)(param_1 + 0x2e8) - fVar20))
          goto LAB_1805d185c;
          lVar13 = -0x8000000000000000;
          param_1[0x2f1] = 0;
        }
        else {
          lVar13 = 100;
        }
        param_1[0x2ed] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ee] * 8) - lVar13;
      }
    }
LAB_1805d185c:
    if ((*(uint *)((int64_t)param_1 + 0x158c) >> 0xe & 1) != 0) {
      *(uint *)((int64_t)param_1 + 0x158c) = *(uint *)((int64_t)param_1 + 0x158c) & 0xffffbfff;
      uVar14 = function_5c8d60(param_1);
      *(uint *)((int64_t)param_1 + 0x158c) = *(uint *)((int64_t)param_1 + 0x158c) | uVar14;
    }
    fStackX_8 = 0.0;
    fStackX_c = 1.0;
    local_var_d8 = 0x3f80000000000000;
    local_var_b0 = 0;
    local_var_d0 = 0;
    local_var_c8 = atan2f(0x80000000,0x3f800000);
    local_var_ac = *(uint *)((int64_t)param_1 + 0x159c);
    local_var_a0 = 0;
    local_var_c4 = 0;
    local_var_bc = 0;
    local_var_b4 = 0xffffffff;
    if ((*(uint *)(param_1 + 2) & 0x8000000) == 0) {
      bVar9 = (byte)((uint)*(int32_t *)(*(int64_t *)param_1[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((int64_t)param_1 + 0x11c) = bVar9;
    }
    else {
      bVar9 = *(byte *)((int64_t)param_1 + 0x11c);
    }
    if ((bVar9 == 0) && ((*(byte *)(*param_1 + 0x56c) & 1) == 0)) {
      fStackX_8 = *(float *)(param_1 + 0x4b);
      if ((-0.2 <= fStackX_8) && (fStackX_8 <= 0.2)) {
        fStackX_8 = 0.0;
      }
      fStackX_c = *(float *)((int64_t)param_1 + 0x25c);
      if ((-0.2 <= fStackX_c) && (fStackX_c <= 0.2)) {
        fStackX_c = 0.0;
      }
      local_var_a8 = CONCAT44(fStackX_c,fStackX_8);
    }
    else {
      local_var_a8 = 0;
    }
    function_538160(&local_var_d8,(int64_t)param_1 + 0x135c);
    uVar14 = local_var_ac;
    if ((local_var_ac >> 0xe & 1) != 0) {
      local_var_ac = function_5c8d60(param_1);
      local_var_ac = local_var_ac | uVar14 & 0xffffbfff;
    }
    fVar20 = *(float *)((int64_t)param_1 + 0x21a4);
    *(float *)((int64_t)param_1 + 0x21a4) = *(float *)(*param_1 + 0x324) * 0.1;
    lStack_98 = (int64_t)(fVar20 * 100000.0 + (float)system_system_data_config);
    *(uint *)(param_1 + 0x2b1) = *(uint *)(param_1 + 0x2b1) | *(uint *)(param_1 + 0x27a);
    function_5d8a70(param_1 + 0x2b4);
  }
  else {
    function_61a730(param_1 + 0x269,(int)param_1[0x427],(int64_t)param_1 + 0x213c,0);
    function_538160(param_1 + 0x2ac);
  }
  if (*(char *)((int64_t)param_1 + 0x26c) != '\0') {
// WARNING: Subroutine does not return
    AdvancedSystemController(*(float *)(param_1 + 0x4d) -
                  *(float *)(*(int64_t *)(*(int64_t *)param_1[0x33] + 0x20) + 0x34));
  }
LAB_1805d1a6a:
  lVar13 = system_system_data_config;
  bVar2 = false;
  if (param_1[0x2b6] == param_1[0x2ba]) {
LAB_1805d1bc2:
    *(uint *)((int64_t)param_1 + 0x158c) =
         *(uint *)((int64_t)param_1 + 0x158c) | *(uint *)((int64_t)param_1 + 0x1794);
    if ((*(uint *)(param_1 + 2) & 0x8000000) == 0) {
      bVar9 = (byte)((uint)*(int32_t *)(*(int64_t *)param_1[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((int64_t)param_1 + 0x11c) = bVar9;
    }
    else {
      bVar9 = *(byte *)((int64_t)param_1 + 0x11c);
    }
    if ((bVar9 == 0) && ((*(byte *)(*param_1 + 0x56c) & 1) == 0)) {
      fVar20 = *(float *)(param_1 + 0x4b);
      if ((-0.2 <= fVar20) && (fVar20 <= 0.2)) {
        fVar20 = 0.0;
      }
      fVar21 = *(float *)((int64_t)param_1 + 0x25c);
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
      if (lVar13 < *(int64_t *)(param_1[0x2b6] + 0x40)) {
        if (bVar2) {
          return;
        }
        goto LAB_1805d1bc2;
      }
      *(uint *)((int64_t)param_1 + 0x158c) =
           *(uint *)((int64_t)param_1 + 0x158c) | *(uint *)(param_1[0x2b6] + 0x2c);
      if ((*(uint *)(param_1 + 2) & 0x8000000) == 0) {
        bVar9 = (byte)((uint)*(int32_t *)(*(int64_t *)param_1[1] + 0x564) >> 0x1f) ^ 1;
        *(byte *)((int64_t)param_1 + 0x11c) = bVar9;
      }
      else {
        bVar9 = *(byte *)((int64_t)param_1 + 0x11c);
      }
      if ((bVar9 == 0) && ((*(byte *)(*param_1 + 0x56c) & 1) == 0)) {
        lVar15 = param_1[0x2b6];
        plVar12 = (int64_t *)(lVar15 + 0x30);
      }
      else {
        lVar15 = param_1[0x2b6];
        plVar12 = (int64_t *)&system_data_f0c8;
      }
      param_1[0x2b2] = *plVar12;
      lVar16 = lVar15 + 0x48;
      *(int32_t *)((int64_t)param_1 + 0x1794) = *(int32_t *)(lVar15 + 0x2c);
      if (lVar16 == param_1[0x2b8]) {
        if (param_1[0x2b7] != 0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer(param_1[0x2b7],lVar15);
        }
        lVar15 = param_1[0x2b9];
        param_1[0x2b9] = lVar15 + 8;
        lVar15 = *(int64_t *)(lVar15 + 8);
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