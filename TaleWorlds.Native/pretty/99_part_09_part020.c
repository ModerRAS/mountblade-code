#include "TaleWorlds.Native.Split.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_09_part020.c - 1 个函数
// 函数: void function_5c7200(int64_t *param_1,int8_t param_2)
void function_5c7200(int64_t *param_1,int8_t param_2)
{
  float *pfVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  int8_t uVar5;
  int8_t uVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint uVar11;
  int32_t uVar12;
  char acStackX_8 [8];
  int64_t lStack_c8;
  int64_t lStack_c0;
  int64_t lStack_b8;
  uint64_t local_var_b0;
  int64_t lStack_a8;
  int64_t lStack_a0;
  int64_t lStack_98;
  int64_t lStack_90;
  int32_t local_var_88;
  int64_t lStack_78;
  int64_t lStack_60;
  int64_t lStack_58;
  uint64_t local_var_40;
  acStackX_8[0] = '\0';
  if (((*(int *)(*param_1 + 0x5f8) == 1) || ((*(uint *)(param_1 + 0x413) >> 8 & 1) != 0)) ||
     ((*(uint *)((int64_t)param_1 + 0x1484) >> 2 & 1) != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  lStack_c8 = 0;
  local_var_b0 = 0x7fc000007fc00000;
  lStack_a8 = 0x7fc000007fc00000;
  lStack_c0 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  lStack_b8 = 0;
  lStack_90 = 0;
  plVar7 = (int64_t *)function_3975b0();
  lStack_90 = *plVar7;
  local_var_88 = 0;
  if (bVar3) {
    lVar9 = *param_1;
    lVar8 = *(int64_t *)(lVar9 + 0x9d8);
    lVar2 = *(int64_t *)(lVar9 + 0x20);
    if ((lVar8 == 0) || (cVar4 = SystemCore_PerformanceMonitor(lVar8,lVar2 + 0xc), lStack_c0 = lVar8, cVar4 == '\0')
       ) {
      lStack_c0 = 0;
    }
    local_var_40 = 0;
    lStack_c8 = *(int64_t *)(*(int64_t *)(lVar9 + 0x8d8) + 0x18);
    local_var_b0 = *(int64_t *)(lVar2 + 0xc);
    lStack_a8 = *(int64_t *)(lVar2 + 0x14);
    lStack_a0 = *(int64_t *)(lVar2 + 0xb0);
    lStack_98 = *(int64_t *)(lVar2 + 0xb8);
    local_var_88 = 3;
    lStack_b8 = lVar8;
    lStack_90 = local_var_b0;
    lStack_78 = lStack_c8;
    lStack_60 = local_var_b0;
    lStack_58 = lStack_a8;
  }
  else {
    switch((int)param_1[0x295]) {
    case 0:
      function_5c3590(param_1,&lStack_c8,acStackX_8,param_2);
      break;
    case 1:
      function_5c4650(param_1,&lStack_c8,acStackX_8,param_2);
      break;
    case 2:
      function_5c4a90(param_1,&lStack_c8,acStackX_8);
      break;
    case 3:
      function_5c5520(param_1,&lStack_c8,acStackX_8);
      break;
    case 4:
      function_5c4fc0(param_1,&lStack_c8,acStackX_8);
      break;
    case 5:
    case 6:
      function_5c63f0(param_1,&lStack_c8,acStackX_8);
      break;
    case 8:
      function_5c3ee0(param_1,&lStack_c8);
      break;
    case 9:
      function_5c5fe0(param_1,&lStack_c8);
      break;
    case 10:
      lVar9 = *param_1;
      lVar8 = *(int64_t *)(lVar9 + 0x9d8);
      lVar2 = *(int64_t *)(lVar9 + 0x20);
      if ((lVar8 == 0) ||
         (cVar4 = SystemCore_PerformanceMonitor(lVar8,lVar2 + 0xc), lStack_c0 = lVar8, cVar4 == '\0')) {
        lStack_c0 = 0;
      }
      local_var_40 = 0;
      lStack_c8 = *(int64_t *)(*(int64_t *)(lVar9 + 0x8d8) + 0x18);
      local_var_b0 = *(int64_t *)(lVar2 + 0xc);
      lStack_a8 = *(int64_t *)(lVar2 + 0x14);
      lStack_a0 = *(int64_t *)(lVar2 + 0xb0);
      lStack_98 = *(int64_t *)(lVar2 + 0xb8);
      local_var_88 = 3;
      pfVar1 = (float *)(*(int64_t *)(lVar9 + 0x20) + 0x20);
      lStack_b8 = lVar8;
      lStack_90 = local_var_b0;
      lStack_78 = lStack_c8;
      lStack_60 = local_var_b0;
      lStack_58 = lStack_a8;
      if ((*pfVar1 <= 0.5 && *pfVar1 != 0.5) && (-1 < *(int *)(lVar9 + 0x564))) {
        *(uint *)(param_1 + 0x27a) = *(uint *)(param_1 + 0x27a) | 1;
      }
    }
  }
  plVar7 = param_1 + 0x2f;
  uVar12 = Function_161f47db(plVar7);
  if (*(int *)((int64_t)param_1 + 0x18c) == 1) {
    function_5ddbc0(uVar12,&lStack_c8);
  }
  else if ((*(uint *)((int64_t)param_1 + 0x1484) >> 7 & 1) != 0) {
    function_5dd320(uVar12,&lStack_c8);
  }
  lVar9 = *(int64_t *)(*(int64_t *)param_1[0x33] + 0x9d8);
  lVar8 = SystemCore_ErrorHandler(&lStack_c8);
  cVar4 = *(char *)((int64_t)param_1 + 0x12bc);
  if (lVar9 == lVar8) {
LAB_1805c750e:
    if (cVar4 != '\0') {
      *(int32_t *)(param_1 + 0x25e) = 0;
      *(int16_t *)((int64_t)param_1 + 0x12bc) = 0;
    }
  }
  else if (cVar4 == '\0') {
LAB_1805c74f5:
    if (*(int *)(*param_1 + 0x5f8) == 0) {
      *(int32_t *)plVar7 = 10;
      cVar4 = *(char *)((int64_t)param_1 + 0x12bc);
      goto LAB_1805c750e;
    }
  }
  else {
    lVar9 = SystemCore_ErrorHandler(param_1 + 0x38);
    lVar8 = SystemCore_ErrorHandler(&lStack_c8);
    if (lVar8 != lVar9) goto LAB_1805c74f5;
    *(int32_t *)plVar7 = 0;
    *(int8_t *)((int64_t)param_1 + 0x12bd) = 1;
  }
  if (((float)local_var_b0 != *(float *)(param_1 + 0x3b)) ||
     (local_var_b0._4_4_ != *(float *)((int64_t)param_1 + 0x1dc))) {
    param_1[0x38] = lStack_c8;
    param_1[0x39] = lStack_c0;
    param_1[0x3a] = lStack_b8;
    param_1[0x3f] = lStack_90;
    *(int32_t *)(param_1 + 0x40) = local_var_88;
    param_1[0x3b] = local_var_b0;
    param_1[0x3c] = lStack_a8;
    param_1[0x3d] = lStack_a0;
    param_1[0x3e] = lStack_98;
  }
  if (acStackX_8[0] == '\0') goto LAB_1805c769c;
  if ((*(byte *)((int64_t)param_1 + 0x1484) & 0x38) != 0) {
    uVar11 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar11 = uVar11 ^ uVar11 >> 0x11;
    uVar11 = uVar11 ^ uVar11 << 5;
    *(uint *)(param_1 + 0x272) = uVar11;
    param_1[0x273] =
         *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x274] * 8) -
         (int64_t)(-20000.0 - (float)(uVar11 - 1) * 4.656613e-06);
    goto LAB_1805c769c;
  }
  if ((((float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x274] * 8) - param_1[0x273])
        * 1e-05 < 0.0) ||
      (lVar9 = *param_1, (*(ushort *)(*(int64_t *)(lVar9 + 0x728) + 0x5aa) & 0x400) != 0)) ||
     ((*(uint *)(lVar9 + 0x56c) & 0x4000) == 0)) goto LAB_1805c769c;
  cVar4 = Function_f34c506e(param_1);
  if (cVar4 == '\0') {
LAB_1805c766e:
    cVar4 = Function_02036713(param_1);
    if (cVar4 == '\0') goto LAB_1805c769c;
  }
  else {
    uVar10 = Function_90ed6f9f(param_1);
    cVar4 = Function_db537f1b(lVar9,uVar10);
    if (cVar4 == '\0') goto LAB_1805c766e;
  }
  uVar5 = function_5b8210(param_1);
  uVar6 = function_5b8130(param_1);
  function_5c7cb0(param_1,uVar6,uVar5);
LAB_1805c769c:
  *(int32_t *)((int64_t)param_1 + 0x146c) = 0;
  return;
}
uint64_t function_5c7700(uint64_t *param_1)
{
  int64_t lVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int iVar8;
  int32_t uVar9;
  int32_t extraout_XMM0_Da;
  int32_t uVar11;
  int32_t extraout_XMM0_Db;
  uint64_t uVar10;
  if (*(char *)(param_1 + 0x438) == '\0') {
    iVar8 = *(int *)((int64_t)param_1 + 0x14b4);
  }
  else {
    iVar8 = *(int *)((int64_t)param_1 + 0x21c4);
  }
  lVar6 = (int64_t)iVar8 * 0xa60 + param_1[0x291];
  if (*(int *)(lVar6 + 0x3608) != 1) {
    uVar9 = 0xc0000000;
    uVar11 = 0;
    goto LAB_1805c7999;
  }
  uVar4 = *(uint *)(param_1 + 2);
  uVar9 = 0xbf800000;
  uVar11 = 0;
  if ((uVar4 & 0x20) == 0) {
    uVar4 = uVar4 | 0x20;
    lVar1 = *(int64_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x8f8) + 0x9e8);
    param_1[0x15] = lVar1;
    *(uint *)(param_1 + 2) = uVar4;
  }
  else {
    lVar1 = param_1[0x15];
  }
  if (lVar1 == 0) {
LAB_1805c78d7:
    uVar10 = 0;
    uVar4 = 0;
    if (0 < (int64_t)*(int *)((int64_t)param_1 + 0x1b6c)) {
      piVar3 = (int *)((int64_t)param_1 + 0x17ac);
      uVar5 = uVar10;
      uVar7 = uVar10;
      do {
        uVar4 = (uint)uVar7;
        if (*piVar3 == iVar8) break;
        uVar4 = uVar4 + 1;
        uVar7 = (uint64_t)uVar4;
        uVar5 = uVar5 + 1;
        piVar3 = piVar3 + 0xf;
      } while ((int64_t)uVar5 < (int64_t)*(int *)((int64_t)param_1 + 0x1b6c));
    }
    if (*(int *)((int64_t)param_1 + 0x1b6c) <= (int)uVar4) {
      uVar2 = 0;
      if (0 < (int64_t)*(int *)((int64_t)param_1 + 0x200c)) {
        piVar3 = (int *)((int64_t)param_1 + 0x1c4c);
        uVar5 = uVar10;
        do {
          uVar2 = (uint)uVar5;
          if (*piVar3 == iVar8) break;
          uVar2 = uVar2 + 1;
          uVar5 = (uint64_t)uVar2;
          uVar10 = uVar10 + 1;
          piVar3 = piVar3 + 0xf;
        } while ((int64_t)uVar10 < (int64_t)*(int *)((int64_t)param_1 + 0x200c));
      }
      if (*(int *)((int64_t)param_1 + 0x200c) <= (int)uVar2) goto LAB_1805c7999;
LAB_1805c793f:
      if (*(char *)(param_1 + 0x389) != '\0') {
        if (*(int *)((int64_t)param_1 + (int64_t)(int)uVar2 * 0x3c + 0x1c84) == 1) {
          return (uint64_t)*(uint *)((int64_t)param_1 + (int64_t)(int)uVar2 * 0x3c + 0x1c80);
        }
        goto LAB_1805c7999;
      }
      lVar1 = (int64_t)param_1 + (int64_t)(int)uVar2 * 0x3c + 0x1c5c;
      goto LAB_1805c78b2;
    }
  }
  else {
    if ((uVar4 & 0x20) == 0) {
      param_1[0x15] = *(uint64_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x8f8) + 0x9e8);
      *(uint *)(param_1 + 2) = uVar4 | 0x20;
      lVar1 = param_1[0x15];
    }
    if ((*(int *)(lVar1 + 0x30) < 1) ||
       (((*(uint *)((int64_t)*(int *)(lVar1 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar1 + 0xd0)) >>
          9 & 1) != 0 && (*(short *)(lVar1 + 8) < 1)))) goto LAB_1805c78d7;
    lVar1 = Function_74f39efc(0xbf800000);
    uVar9 = extraout_XMM0_Da;
    uVar11 = extraout_XMM0_Db;
    if ((*(byte *)((int64_t)*(int *)(lVar1 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar1 + 0xd0)) >>
         1 & 1) == 0) goto LAB_1805c78d7;
    uVar10 = 0;
    uVar4 = 0;
    uVar2 = 0;
    if (0 < (int64_t)*(int *)((int64_t)param_1 + 0x200c)) {
      piVar3 = (int *)((int64_t)param_1 + 0x1c4c);
      uVar5 = uVar10;
      uVar7 = uVar10;
      do {
        uVar2 = (uint)uVar5;
        if (*piVar3 == iVar8) break;
        uVar2 = uVar2 + 1;
        uVar5 = (uint64_t)uVar2;
        uVar7 = uVar7 + 1;
        piVar3 = piVar3 + 0xf;
      } while ((int64_t)uVar7 < (int64_t)*(int *)((int64_t)param_1 + 0x200c));
    }
    if ((int)uVar2 < *(int *)((int64_t)param_1 + 0x200c)) goto LAB_1805c793f;
    if (0 < (int64_t)*(int *)((int64_t)param_1 + 0x1b6c)) {
      piVar3 = (int *)((int64_t)param_1 + 0x17ac);
      uVar5 = uVar10;
      do {
        uVar4 = (uint)uVar10;
        if (*piVar3 == iVar8) break;
        uVar4 = uVar4 + 1;
        uVar10 = (uint64_t)uVar4;
        uVar5 = uVar5 + 1;
        piVar3 = piVar3 + 0xf;
      } while ((int64_t)uVar5 < (int64_t)*(int *)((int64_t)param_1 + 0x1b6c));
    }
    if (*(int *)((int64_t)param_1 + 0x1b6c) <= (int)uVar4) goto LAB_1805c7999;
  }
  lVar1 = (int64_t)(int)uVar4 * 0x3c;
  if (*(char *)(param_1 + 0x2f5) != '\0') {
    if (*(int *)(lVar1 + 0x17e4 + (int64_t)param_1) == 1) {
      return (uint64_t)*(uint *)(lVar1 + 0x17e0 + (int64_t)param_1);
    }
LAB_1805c7999:
    return CONCAT44(uVar11,uVar9);
  }
  lVar1 = lVar1 + 0x17bc + (int64_t)param_1;
LAB_1805c78b2:
  uVar10 = function_5b65d0(lVar1,0,*param_1,lVar6 + 0x30a0,0x3f800000);
  return uVar10;
}
uint64_t function_5c79a0(int64_t *param_1,int64_t param_2)
{
  int64_t lVar1;
  bool bVar2;
  uint64_t in_RAX;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  float fVar6;
  float fVar7;
  int8_t auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  if (*(int *)(param_2 + 0x568) == 1) {
    lVar4 = *(int64_t *)(param_2 + 0x20);
    lVar5 = *param_1;
    lVar1 = *(int64_t *)(lVar5 + 0x20);
    fVar12 = *(float *)(lVar4 + 0x10) - *(float *)(lVar1 + 0x10);
    fVar13 = *(float *)(lVar4 + 0xc) - *(float *)(lVar1 + 0xc);
    fVar14 = *(float *)(lVar4 + 0x14) - *(float *)(lVar1 + 0x14);
    fVar11 = fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14;
    fVar9 = fVar11;
    if (fVar11 <= 1.1754944e-38) {
      fVar9 = 1.1754944e-38;
    }
    auVar8 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    fVar10 = auVar8._0_4_;
    fVar9 = fVar10 * 0.5 * (3.0 - fVar9 * fVar10 * fVar10);
    if ((*(float *)(lVar4 + 0x1d0) + *(float *)(lVar1 + 0x1d0)) * 2.5 <= fVar9 * fVar11) {
      if ((char)param_1[0x29b] == '\0') {
        fVar10 = 3.0;
      }
      else {
        SystemCore_Validator(param_1 + 0x29e,2);
        if ((int)param_1[0x2a6] < 2) {
          fVar10 = -NAN;
        }
        else {
          fVar10 = *(float *)(param_1 + 0x2a2);
        }
        lVar5 = *param_1;
        lVar1 = *(int64_t *)(lVar5 + 0x20);
        fVar6 = *(float *)(lVar1 + 0x10) - *(float *)((int64_t)param_1 + 0x150c);
        fVar7 = *(float *)(lVar1 + 0xc) - *(float *)(param_1 + 0x2a1);
        fVar10 = *(float *)(lVar1 + 0x14) - fVar10;
        fVar10 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar10 * fVar10) *
                 (1.0 / *(float *)(lVar1 + 0x84));
        if (2.3 <= fVar10) {
          fVar10 = 1.465 - (fVar10 - 2.3) * 0.2;
          if (fVar10 <= 1.0) {
            fVar10 = 1.0;
          }
        }
        else {
          fVar10 = 2.5 - fVar10 * 0.45;
        }
        if (2 < *(int *)(param_2 + 0x678)) {
          fVar10 = fVar10 / (float)(*(int *)(param_2 + 0x678) + -2);
        }
        lVar4 = *(int64_t *)(param_2 + 0x20);
      }
      lVar1 = *(int64_t *)(lVar5 + 0x20);
      fVar12 = (fVar12 * fVar9 * *(float *)(lVar1 + 0x28) +
                fVar13 * fVar9 * *(float *)(lVar1 + 0x24) +
               fVar14 * fVar9 * *(float *)(lVar1 + 0x2c)) -
               (fVar12 * fVar9 * *(float *)(lVar4 + 0x28) +
                fVar13 * fVar9 * *(float *)(lVar4 + 0x24) +
               fVar14 * fVar9 * *(float *)(lVar4 + 0x2c));
      if (fVar12 < 0.001) {
        fVar12 = 3.4028235e+38;
      }
      else {
        fVar12 = (fVar9 * fVar11) / fVar12;
      }
      bVar2 = fVar12 < fVar10;
      if ((bVar2) || (2.0 <= fVar12)) {
        uVar3 = (uint64_t)bVar2;
      }
      else {
        uVar3 = (uint64_t)bVar2;
        fVar9 = (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x276] * 8) -
                       param_1[0x275]) * 1e-05;
        if (fVar12 * 0.75 < *(float *)(param_1 + 0x277) - fVar9) {
          *(float *)(param_1 + 0x277) = fVar9 + fVar12 * 0.75;
        }
      }
    }
    else {
      uVar3 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
    }
    return uVar3;
  }
  return in_RAX & 0xffffffffffffff00;
}
uint64_t function_5c79c4(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  bool bVar2;
  uint64_t uVar3;
  int64_t *unaff_RBX;
  int64_t unaff_RSI;
  float fVar4;
  float fVar5;
  int8_t auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  lVar1 = *(int64_t *)(param_2 + 0x20);
  fVar10 = *(float *)(param_1 + 0x10) - *(float *)(lVar1 + 0x10);
  fVar11 = *(float *)(param_1 + 0xc) - *(float *)(lVar1 + 0xc);
  fVar12 = *(float *)(param_1 + 0x14) - *(float *)(lVar1 + 0x14);
  fVar9 = fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12;
  fVar7 = fVar9;
  if (fVar9 <= 1.1754944e-38) {
    fVar7 = 1.1754944e-38;
  }
  auVar6 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
  fVar8 = auVar6._0_4_;
  fVar7 = fVar8 * 0.5 * (3.0 - fVar7 * fVar8 * fVar8);
  if ((*(float *)(param_1 + 0x1d0) + *(float *)(lVar1 + 0x1d0)) * 2.5 <= fVar7 * fVar9) {
    if ((char)unaff_RBX[0x29b] == '\0') {
      fVar8 = 3.0;
    }
    else {
      SystemCore_Validator(unaff_RBX + 0x29e,2);
      if ((int)unaff_RBX[0x2a6] < 2) {
        fVar8 = -NAN;
      }
      else {
        fVar8 = *(float *)(unaff_RBX + 0x2a2);
      }
      param_2 = *unaff_RBX;
      lVar1 = *(int64_t *)(param_2 + 0x20);
      fVar4 = *(float *)(lVar1 + 0x10) - *(float *)((int64_t)unaff_RBX + 0x150c);
      fVar5 = *(float *)(lVar1 + 0xc) - *(float *)(unaff_RBX + 0x2a1);
      fVar8 = *(float *)(lVar1 + 0x14) - fVar8;
      fVar8 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar8 * fVar8) * (1.0 / *(float *)(lVar1 + 0x84))
      ;
      if (2.3 <= fVar8) {
        fVar8 = 1.465 - (fVar8 - 2.3) * 0.2;
        if (fVar8 <= 1.0) {
          fVar8 = 1.0;
        }
      }
      else {
        fVar8 = 2.5 - fVar8 * 0.45;
      }
      if (2 < *(int *)(unaff_RSI + 0x678)) {
        fVar8 = fVar8 / (float)(*(int *)(unaff_RSI + 0x678) + -2);
      }
      param_1 = *(int64_t *)(unaff_RSI + 0x20);
    }
    lVar1 = *(int64_t *)(param_2 + 0x20);
    fVar10 = (fVar10 * fVar7 * *(float *)(lVar1 + 0x28) + fVar11 * fVar7 * *(float *)(lVar1 + 0x24)
             + fVar12 * fVar7 * *(float *)(lVar1 + 0x2c)) -
             (fVar10 * fVar7 * *(float *)(param_1 + 0x28) +
              fVar11 * fVar7 * *(float *)(param_1 + 0x24) +
             fVar12 * fVar7 * *(float *)(param_1 + 0x2c));
    if (fVar10 < 0.001) {
      fVar10 = 3.4028235e+38;
    }
    else {
      fVar10 = (fVar7 * fVar9) / fVar10;
    }
    bVar2 = fVar10 < fVar8;
    if ((bVar2) || (2.0 <= fVar10)) {
      uVar3 = (uint64_t)bVar2;
    }
    else {
      uVar3 = (uint64_t)bVar2;
      fVar7 = (float)(*(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x276] * 8) -
                     unaff_RBX[0x275]) * 1e-05;
      if (fVar10 * 0.75 < *(float *)(unaff_RBX + 0x277) - fVar7) {
        *(float *)(unaff_RBX + 0x277) = fVar7 + fVar10 * 0.75;
      }
    }
  }
  else {
    uVar3 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
  }
  return uVar3;
}
bool function_5c7ac5(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int64_t unaff_RSI;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  if ((char)unaff_RBX[0x29b] == '\0') {
    fVar4 = 3.0;
  }
  else {
    SystemCore_Validator(unaff_RBX + 0x29e,2);
    if ((int)unaff_RBX[0x2a6] < 2) {
      fVar4 = -NAN;
    }
    else {
      fVar4 = *(float *)(unaff_RBX + 0x2a2);
    }
    param_2 = *unaff_RBX;
    lVar1 = *(int64_t *)(param_2 + 0x20);
    fVar2 = *(float *)(lVar1 + 0x10) - *(float *)((int64_t)unaff_RBX + 0x150c);
    fVar3 = *(float *)(lVar1 + 0xc) - *(float *)(unaff_RBX + 0x2a1);
    fVar4 = *(float *)(lVar1 + 0x14) - fVar4;
    fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4) * (1.0 / *(float *)(lVar1 + 0x84));
    if (2.3 <= fVar4) {
      fVar4 = 1.465 - (fVar4 - 2.3) * 0.2;
      if (fVar4 <= 1.0) {
        fVar4 = 1.0;
      }
    }
    else {
      fVar4 = unaff_XMM6_Da - fVar4 * 0.45;
    }
    if (2 < *(int *)(unaff_RSI + 0x678)) {
      fVar4 = fVar4 / (float)(*(int *)(unaff_RSI + 0x678) + -2);
    }
    param_1 = *(int64_t *)(unaff_RSI + 0x20);
  }
  lVar1 = *(int64_t *)(param_2 + 0x20);
  fVar2 = (unaff_XMM8_Da * *(float *)(lVar1 + 0x28) + unaff_XMM9_Da * *(float *)(lVar1 + 0x24) +
          unaff_XMM10_Da * *(float *)(lVar1 + 0x2c)) -
          (unaff_XMM8_Da * *(float *)(param_1 + 0x28) + unaff_XMM9_Da * *(float *)(param_1 + 0x24) +
          unaff_XMM10_Da * *(float *)(param_1 + 0x2c));
  if (fVar2 < 0.001) {
    fVar2 = 3.4028235e+38;
  }
  else {
    fVar2 = unaff_XMM7_Da / fVar2;
  }
  if ((fVar2 >= fVar4) && (fVar2 < 2.0)) {
    fVar3 = (float)(*(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x276] * 8) -
                   unaff_RBX[0x275]) * 1e-05;
    if (fVar2 * 0.75 < *(float *)(unaff_RBX + 0x277) - fVar3) {
      *(float *)(unaff_RBX + 0x277) = fVar3 + fVar2 * 0.75;
    }
  }
  return fVar2 < fVar4;
}
bool function_5c7ad7(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *unaff_RBX;
  int64_t unaff_RSI;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  SystemCore_Validator(unaff_RBX + 0x29e);
  if ((int)unaff_RBX[0x2a6] < 2) {
    fVar5 = -NAN;
  }
  else {
    fVar5 = *(float *)(unaff_RBX + 0x2a2);
  }
  lVar1 = *(int64_t *)(*unaff_RBX + 0x20);
  fVar3 = *(float *)(lVar1 + 0x10) - *(float *)((int64_t)unaff_RBX + 0x150c);
  fVar4 = *(float *)(lVar1 + 0xc) - *(float *)(unaff_RBX + 0x2a1);
  fVar5 = *(float *)(lVar1 + 0x14) - fVar5;
  fVar5 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5) * (1.0 / *(float *)(lVar1 + 0x84));
  if (2.3 <= fVar5) {
    fVar5 = 1.465 - (fVar5 - 2.3) * 0.2;
    if (fVar5 <= 1.0) {
      fVar5 = 1.0;
    }
  }
  else {
    fVar5 = unaff_XMM6_Da - fVar5 * 0.45;
  }
  if (2 < *(int *)(unaff_RSI + 0x678)) {
    fVar5 = fVar5 / (float)(*(int *)(unaff_RSI + 0x678) + -2);
  }
  lVar1 = *(int64_t *)(unaff_RSI + 0x20);
  lVar2 = *(int64_t *)(*unaff_RBX + 0x20);
  fVar3 = (unaff_XMM8_Da * *(float *)(lVar2 + 0x28) + unaff_XMM9_Da * *(float *)(lVar2 + 0x24) +
          unaff_XMM10_Da * *(float *)(lVar2 + 0x2c)) -
          (unaff_XMM8_Da * *(float *)(lVar1 + 0x28) + unaff_XMM9_Da * *(float *)(lVar1 + 0x24) +
          unaff_XMM10_Da * *(float *)(lVar1 + 0x2c));
  if (fVar3 < 0.001) {
    fVar3 = 3.4028235e+38;
  }
  else {
    fVar3 = unaff_XMM7_Da / fVar3;
  }
  if ((fVar3 >= fVar5) && (fVar3 < 2.0)) {
    fVar4 = (float)(*(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x276] * 8) -
                   unaff_RBX[0x275]) * 1e-05;
    if (fVar3 * 0.75 < *(float *)(unaff_RBX + 0x277) - fVar4) {
      *(float *)(unaff_RBX + 0x277) = fVar4 + fVar3 * 0.75;
    }
  }
  return fVar3 < fVar5;
}
bool function_5c7b77(uint64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  float in_XMM1_Da;
  float fVar3;
  float fVar4;
  float unaff_XMM6_Da;
  float fVar5;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  fVar5 = unaff_XMM6_Da - in_XMM1_Da * 0.45;
  if (2 < *(int *)(unaff_RSI + 0x678)) {
    fVar5 = fVar5 / (float)(*(int *)(unaff_RSI + 0x678) + -2);
  }
  lVar1 = *(int64_t *)(unaff_RSI + 0x20);
  lVar2 = *(int64_t *)(param_2 + 0x20);
  fVar4 = (unaff_XMM8_Da * *(float *)(lVar2 + 0x28) + unaff_XMM9_Da * *(float *)(lVar2 + 0x24) +
          unaff_XMM10_Da * *(float *)(lVar2 + 0x2c)) -
          (unaff_XMM8_Da * *(float *)(lVar1 + 0x28) + unaff_XMM9_Da * *(float *)(lVar1 + 0x24) +
          unaff_XMM10_Da * *(float *)(lVar1 + 0x2c));
  if (fVar4 < 0.001) {
    fVar4 = 3.4028235e+38;
  }
  else {
    fVar4 = unaff_XMM7_Da / fVar4;
  }
  if ((fVar4 >= fVar5) && (fVar4 < 2.0)) {
    fVar3 = (float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(unaff_RBX + 0x13b0) * 8) -
                   *(int64_t *)(unaff_RBX + 0x13a8)) * 1e-05;
    if (fVar4 * 0.75 < *(float *)(unaff_RBX + 0x13b8) - fVar3) {
      *(float *)(unaff_RBX + 0x13b8) = fVar3 + fVar4 * 0.75;
    }
  }
  return fVar4 < fVar5;
}
int8_t function_5c7c9f(void)
{
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address