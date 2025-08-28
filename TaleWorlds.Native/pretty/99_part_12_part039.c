#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_12_part039.c - 5 个函数
// 函数: void SystemCore_e3f00(float *param_1,float *param_2,float *param_3,uint64_t *param_4)
void SystemCore_e3f00(float *param_1,float *param_2,float *param_3,uint64_t *param_4)
{
  int64_t lVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint64_t local_var_c8;
  float fStack_c0;
  uint64_t local_var_b8;
  float fStack_b0;
  for (lVar1 = *(int64_t *)(param_1 + 0x12); lVar1 != 0; lVar1 = *(int64_t *)(lVar1 + 0x48)) {
    cVar2 = (*(code *)*param_4)(lVar1,param_4[1]);
    if (cVar2 == '\0') goto LAB_1807e4553;
  }
  fVar4 = *param_2;
  fVar9 = *param_3;
  fVar8 = fVar4 - *param_1;
  fVar6 = fVar9 - *param_1;
  if ((0.0 <= fVar8) || (fVar6 <= 0.0)) {
    if ((fVar8 <= 0.0) || (0.0 <= fVar6)) {
      if ((fVar8 < 0.0) && (fVar6 < 0.0)) {
        return;
      }
    }
    else {
      fVar6 = fVar6 / (fVar6 - fVar8);
      fVar9 = (fVar4 - fVar9) * fVar6 + fVar9;
      param_3[1] = (param_2[1] - param_3[1]) * fVar6 + param_3[1];
      fVar8 = param_2[2];
      *param_3 = fVar9;
      param_3[2] = (fVar8 - param_3[2]) * fVar6 + param_3[2];
    }
  }
  else {
    fVar8 = fVar8 / (fVar8 - fVar6);
    fVar4 = (fVar9 - fVar4) * fVar8 + fVar4;
    param_2[1] = (param_3[1] - param_2[1]) * fVar8 + param_2[1];
    fVar6 = param_3[2];
    *param_2 = fVar4;
    param_2[2] = (fVar6 - param_2[2]) * fVar8 + param_2[2];
  }
  fVar6 = param_1[1] - fVar9;
  fVar8 = param_1[1] - fVar4;
  if ((0.0 <= fVar8) || (fVar6 <= 0.0)) {
    if ((fVar8 <= 0.0) || (0.0 <= fVar6)) {
      if ((fVar8 < 0.0) && (fVar6 < 0.0)) {
        return;
      }
    }
    else {
      fVar6 = fVar6 / (fVar6 - fVar8);
      fVar9 = (fVar4 - fVar9) * fVar6 + fVar9;
      param_3[1] = (param_2[1] - param_3[1]) * fVar6 + param_3[1];
      fVar8 = param_2[2];
      *param_3 = fVar9;
      param_3[2] = (fVar8 - param_3[2]) * fVar6 + param_3[2];
    }
  }
  else {
    fVar8 = fVar8 / (fVar8 - fVar6);
    fVar4 = (fVar9 - fVar4) * fVar8 + fVar4;
    param_2[1] = (param_3[1] - param_2[1]) * fVar8 + param_2[1];
    fVar6 = param_3[2];
    *param_2 = fVar4;
    param_2[2] = (fVar6 - param_2[2]) * fVar8 + param_2[2];
  }
  fVar6 = param_2[1];
  fVar8 = param_3[1];
  fVar10 = fVar6 - param_1[2];
  fVar7 = fVar8 - param_1[2];
  if ((0.0 <= fVar10) || (fVar7 <= 0.0)) {
    if ((fVar10 <= 0.0) || (0.0 <= fVar7)) {
      if ((fVar10 < 0.0) && (fVar7 < 0.0)) {
        return;
      }
    }
    else {
      fVar3 = param_2[2];
      fVar7 = fVar7 / (fVar7 - fVar10);
      fVar9 = (fVar4 - fVar9) * fVar7 + fVar9;
      fVar8 = (fVar6 - fVar8) * fVar7 + fVar8;
      *param_3 = fVar9;
      param_3[1] = fVar8;
      param_3[2] = (fVar3 - param_3[2]) * fVar7 + param_3[2];
    }
  }
  else {
    fVar3 = param_3[2];
    fVar10 = fVar10 / (fVar10 - fVar7);
    fVar4 = (fVar9 - fVar4) * fVar10 + fVar4;
    fVar6 = (fVar8 - fVar6) * fVar10 + fVar6;
    *param_2 = fVar4;
    param_2[1] = fVar6;
    param_2[2] = (fVar3 - param_2[2]) * fVar10 + param_2[2];
  }
  fVar7 = param_1[3] - fVar8;
  fVar10 = param_1[3] - fVar6;
  if ((0.0 <= fVar10) || (fVar7 <= 0.0)) {
    if ((fVar10 <= 0.0) || (0.0 <= fVar7)) {
      if ((fVar10 < 0.0) && (fVar7 < 0.0)) {
        return;
      }
    }
    else {
      fVar3 = param_2[2];
      fVar7 = fVar7 / (fVar7 - fVar10);
      fVar9 = (fVar4 - fVar9) * fVar7 + fVar9;
      fVar8 = (fVar6 - fVar8) * fVar7 + fVar8;
      *param_3 = fVar9;
      param_3[1] = fVar8;
      param_3[2] = (fVar3 - param_3[2]) * fVar7 + param_3[2];
    }
  }
  else {
    fVar3 = param_3[2];
    fVar10 = fVar10 / (fVar10 - fVar7);
    fVar4 = (fVar9 - fVar4) * fVar10 + fVar4;
    fVar6 = (fVar8 - fVar6) * fVar10 + fVar6;
    *param_2 = fVar4;
    param_2[1] = fVar6;
    param_2[2] = (fVar3 - param_2[2]) * fVar10 + param_2[2];
  }
  fVar7 = param_2[2];
  fVar10 = param_3[2];
  fVar5 = fVar7 - param_1[4];
  fVar3 = fVar10 - param_1[4];
  if ((0.0 <= fVar5) || (fVar3 <= 0.0)) {
    if ((fVar5 <= 0.0) || (0.0 <= fVar3)) {
      if ((fVar5 < 0.0) && (fVar3 < 0.0)) {
        return;
      }
    }
    else {
      fVar3 = fVar3 / (fVar3 - fVar5);
      fVar9 = (fVar4 - fVar9) * fVar3 + fVar9;
      fVar8 = (fVar6 - fVar8) * fVar3 + fVar8;
      fVar10 = (fVar7 - fVar10) * fVar3 + fVar10;
      *param_3 = fVar9;
      param_3[1] = fVar8;
      param_3[2] = fVar10;
    }
  }
  else {
    fVar5 = fVar5 / (fVar5 - fVar3);
    fVar4 = (fVar9 - fVar4) * fVar5 + fVar4;
    fVar6 = (fVar8 - fVar6) * fVar5 + fVar6;
    fVar7 = (fVar10 - fVar7) * fVar5 + fVar7;
    *param_2 = fVar4;
    param_2[1] = fVar6;
    param_2[2] = fVar7;
  }
  fVar3 = param_1[5] - fVar10;
  fVar5 = param_1[5] - fVar7;
  if ((0.0 <= fVar5) || (fVar3 <= 0.0)) {
    if ((fVar5 <= 0.0) || (0.0 <= fVar3)) {
      if ((fVar5 < 0.0) && (fVar3 < 0.0)) {
        return;
      }
    }
    else {
      fVar3 = fVar3 / (fVar3 - fVar5);
      *param_3 = (fVar4 - fVar9) * fVar3 + fVar9;
      param_3[1] = (fVar6 - fVar8) * fVar3 + fVar8;
      param_3[2] = (fVar7 - fVar10) * fVar3 + fVar10;
    }
  }
  else {
    fVar5 = fVar5 / (fVar5 - fVar3);
    *param_2 = (fVar9 - fVar4) * fVar5 + fVar4;
    param_2[1] = (fVar8 - fVar6) * fVar5 + fVar6;
    param_2[2] = (fVar10 - fVar7) * fVar5 + fVar7;
  }
  if (((uint)param_1[6] & 4) == 0) {
    if (*(int64_t *)(param_1 + 0xe) != 0) {
      local_var_c8 = *(uint64_t *)param_3;
      fStack_c0 = param_3[2];
      local_var_b8 = *(uint64_t *)param_2;
      fStack_b0 = param_2[2];
      SystemCore_e3f00(*(int64_t *)(param_1 + 0xe),&local_var_b8,&local_var_c8,param_4);
      if (*(char *)(param_4 + 2) != '\0') {
        return;
      }
    }
    if (*(int64_t *)(param_1 + 0x10) != 0) {
      local_var_b8 = *(uint64_t *)param_3;
      fStack_b0 = param_3[2];
      local_var_c8 = *(uint64_t *)param_2;
      fStack_c0 = param_2[2];
      SystemCore_e3f00(*(int64_t *)(param_1 + 0x10),&local_var_c8,&local_var_b8,param_4);
    }
  }
  else {
    cVar2 = (*(code *)*param_4)(param_1,param_4[1]);
    if (cVar2 == '\0') {
LAB_1807e4553:
      *(int8_t *)(param_4 + 2) = 1;
    }
  }
  return;
}
bool SystemCore_e4630(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4,
                  uint64_t *param_5)
{
  uint64_t local_var_48;
  int32_t local_var_40;
  uint64_t local_var_38;
  int32_t local_var_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  char cStack_18;
  if (*param_1 != 0) {
    cStack_18 = '\0';
    local_var_48 = *param_5;
    local_var_40 = *(int32_t *)(param_5 + 1);
    local_var_38 = *param_4;
    local_var_30 = *(int32_t *)(param_4 + 1);
    local_var_28 = param_2;
    local_var_20 = param_3;
    SystemCore_e3f00(*param_1,&local_var_38,&local_var_48,&local_var_28);
    return cStack_18 == '\0';
  }
  return true;
}
// 函数: void SystemCore_e46a0(int64_t *param_1,float *param_2)
void SystemCore_e46a0(int64_t *param_1,float *param_2)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  fVar6 = param_2[6];
  if (((uint)fVar6 & 0x40) != 0) {
    fVar6 = param_2[3] - param_2[2];
    fVar4 = param_2[1] - *param_2;
    fVar5 = param_2[5] - param_2[4];
    if (fVar6 <= fVar4) {
      fVar6 = fVar4;
    }
    if (fVar6 <= fVar5) {
      fVar6 = fVar5;
    }
    fVar4 = *(float *)((int64_t)param_1 + 0x14);
    uVar2 = (uint)(fVar4 * 1.0737418e+09 * fVar6);
    uVar3 = ~((int)param_2[7] - 1U);
    uVar1 = uVar2 >> 1 | uVar2 >> 2;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    if (((((float)(~(uVar1 >> 0x10 | uVar1) & uVar2) == param_2[7]) &&
         (((int)((((*param_2 + param_2[1]) * 0.5 - *(float *)(param_1 + 1)) * fVar4 + 1.0) *
                1.0737418e+09) & uVar3) == ((uint)param_2[8] & uVar3))) &&
        (((int)((((param_2[2] + param_2[3]) * 0.5 - *(float *)((int64_t)param_1 + 0xc)) * fVar4 +
                1.0) * 1.0737418e+09) & uVar3) == ((uint)param_2[9] & uVar3))) &&
       (((int)((((param_2[4] + param_2[5]) * 0.5 - *(float *)(param_1 + 2)) * fVar4 + 1.0) *
              1.0737418e+09) & uVar3) == ((uint)param_2[10] & uVar3))) {
      SystemFunction_0001807e3560(param_1,param_2);
      return;
    }
    SystemCore_e3740(param_1,param_2);
    fVar6 = param_2[6];
    if (((uint)fVar6 & 0x40) != 0) {
      return;
    }
  }
  fVar4 = param_2[1] - *param_2;
  param_2[6] = (float)((uint)fVar6 | 0x44);
  if (fVar4 <= param_2[3] - param_2[2]) {
    fVar4 = param_2[3] - param_2[2];
  }
  if (fVar4 <= param_2[5] - param_2[4]) {
    fVar4 = param_2[5] - param_2[4];
  }
  uVar2 = (uint)(*(float *)((int64_t)param_1 + 0x14) * 1.0737418e+09 * fVar4);
  uVar1 = uVar2 >> 1 | uVar2 >> 2;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  param_2[7] = (float)(~(uVar1 >> 0x10 | uVar1) & uVar2);
  param_2[8] = (float)(int)((((*param_2 + param_2[1]) * 0.5 - *(float *)(param_1 + 1)) *
                             *(float *)((int64_t)param_1 + 0x14) + 1.0) * 1.0737418e+09);
  param_2[9] = (float)(int)((((param_2[2] + param_2[3]) * 0.5 - *(float *)((int64_t)param_1 + 0xc))
                             * *(float *)((int64_t)param_1 + 0x14) + 1.0) * 1.0737418e+09);
  param_2[10] = (float)(int)((((param_2[5] + param_2[4]) * 0.5 - *(float *)(param_1 + 2)) *
                              *(float *)((int64_t)param_1 + 0x14) + 1.0) * 1.0737418e+09);
  if (*param_1 == 0) {
    *param_1 = (int64_t)param_2;
  }
  else {
    SystemCore_e39f0(param_1,*param_1,param_2);
  }
  return;
}
// 函数: void SystemCore_e4970(int64_t *param_1,int64_t param_2,int64_t param_3)
void SystemCore_e4970(int64_t *param_1,int64_t param_2,int64_t param_3)
{
  int32_t uVar1;
  code *pcVar2;
  int iVar3;
  if (((param_1[0x1d] != 0) && (pcVar2 = *(code **)(param_1[0x1d] + 0x40), pcVar2 != (code *)0x0))
     && (iVar3 = (*pcVar2)(param_1 + 0x16), iVar3 != 0)) {
    return;
  }
  param_1[0x43] = param_3;
  param_1[0x44] = param_2;
  if ((param_2 != 0) &&
     (iVar3 = SystemCore_621f0(param_1,0,*(int32_t *)(param_2 + 0x68),0), iVar3 != 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x28))(param_1,0,0,0);
  SystemCore_Initializer(param_1,0,1);
  uVar1 = *(int32_t *)(param_1[0x44] + 0x54);
  param_1[0x4c] = 0;
  *(int32_t *)(param_1 + 0x4b) = uVar1;
  *(int32_t *)((int64_t)param_1 + 0x25c) = 0xfffffffe;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_e4a40(int64_t *param_1)
{
  if (*(int64_t *)(*param_1 + 0x270) != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(*param_1 + 0x270),
                  &rendering_buffer_2400_ptr,0xd3,1);
  }
  return 0;
}
int32_t
SystemCore_e4a90(int64_t *param_1,int param_2,int64_t param_3,int64_t param_4,int32_t param_5,
             int param_6)
{
  int64_t lVar1;
  int iVar2;
  int32_t uVar3;
  uint uVar4;
  int32_t astack_special_x_8 [2];
  param_1 = (int64_t *)*param_1;
  if (param_6 == 1) {
    if ((*(char *)((int64_t)param_1 + 0x31) == '\0') || (param_2 != 0)) {
      uVar3 = 0;
      if ((param_3 != 0) && (param_4 != 0)) {
        if (param_1[0x53] == 0) {
          SystemCore_5ec10(*(uint64_t *)(param_1[0x54] + 0x60),&param_6,0,0);
          if (((param_1[0x54] == 0) ||
              (lVar1 = *(int64_t *)(param_1[0x54] + 0x60), *(int64_t *)(lVar1 + 0x128) == 0)) ||
             (param_6 != 0)) {
            uVar3 = 6;
          }
          else {
            *(int64_t *)(lVar1 + 0xb0) = lVar1;
            uVar3 = (**(code **)(*(int64_t *)(param_1[0x54] + 0x60) + 0x128))
                              (*(int64_t *)(param_1[0x54] + 0x60) + 0xb0,param_2,param_3,param_4,
                               param_5,1);
            if (*(ushort *)(param_1 + 0x23) == 0) {
              uVar4 = *(uint *)(param_1[0x15] + 0x6d4);
            }
            else {
              uVar4 = (uint)*(ushort *)(param_1 + 0x23);
            }
            if (**(uint **)(param_4 + 8) != uVar4) {
              uVar3 = 6;
            }
          }
        }
        else {
          **(uint **)(param_4 + 8) = (uint)*(ushort *)(param_1 + 0x23);
          iVar2 = SystemFunction_000180746b50((short)param_1[0x23]);
          uVar3 = 0;
          if (iVar2 != 1) {
            *(int *)(param_4 + 0x20) = iVar2;
          }
        }
      }
    }
    else {
      *(int8_t *)((int64_t)param_1 + 0x31) = 0;
      (**(code **)(*param_1 + 0x28))(param_1,1,0);
      uVar3 = 9;
    }
  }
  else {
    astack_special_x_8[0] = **(int32_t **)(param_4 + 8);
    uVar3 = SystemCore_e51c0(param_1,**(uint64_t **)(param_4 + 0x18),astack_special_x_8,param_2);
  }
  return uVar3;
}
uint64_t * SystemCore_e4c10(uint64_t *param_1)
{
  SystemFunction_000180758fe0();
  param_1[0x52] = 0x7fffffff;
  *param_1 = &rendering_buffer_2312_ptr;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(int32_t *)(param_1 + 0x46) = 0;
  *(int32_t *)((int64_t)param_1 + 0x28c) = 0;
  param_1[0x4d] = 0;
  param_1[0x47] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_e4c80(int64_t param_1)
{
  int *piVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int aiStackX_8 [2];
  piVar1 = *(int **)(param_1 + 0x108);
  if (*(int64_t *)(param_1 + 0x130) == 0) {
    *(int64_t *)(param_1 + 0x130) = param_1;
  }
  SystemFunction_0001807e4950();
  lVar4 = *(int64_t *)(param_1 + 0xa8);
  iVar5 = *(int *)(param_1 + 0x280);
  *(int32_t *)(param_1 + 0x234) = *(int32_t *)(lVar4 + 0x1165c);
  *(float *)(param_1 + 0x230) = (float)*(int *)(lVar4 + 0x6d0);
  if (iVar5 == 0) {
    if (((piVar1 == (int *)0x0) || (iVar5 = *piVar1, *piVar1 == 0)) &&
       (uVar3 = SystemFunction_000180746360(lVar4,aiStackX_8,0), iVar5 = aiStackX_8[0], (int)uVar3 != 0)) {
      return uVar3;
    }
    *(int *)(param_1 + 0x280) = iVar5;
  }
  if (iVar5 < 8) {
    return 0x1c;
  }
  *(int *)(param_1 + 0x284) = iVar5;
  if ((piVar1 == (int *)0x0) || (iVar7 = piVar1[1], iVar7 == 0)) {
    iVar7 = *(int *)(*(int64_t *)(param_1 + 0xa8) + 0x6d4);
  }
  uVar6 = 0;
  if (piVar1 != (int *)0x0) {
    uVar6 = piVar1[2];
  }
  *(uint *)(param_1 + 700) = uVar6;
  if (5 < uVar6) {
    return 0x13;
  }
  if (uVar6 == 0) {
    uVar6 = 5;
    *(int32_t *)(param_1 + 700) = 5;
  }
  if (uVar6 == 1) {
    iVar2 = 1;
  }
  else if (uVar6 == 2) {
    iVar2 = 2;
  }
  else if (uVar6 == 3) {
    iVar2 = 3;
  }
  else if ((uVar6 == 4) || (uVar6 == 5)) {
    iVar2 = 4;
  }
  else {
    iVar2 = 1;
  }
  uVar6 = (iVar5 + 8) * iVar7 * iVar2 + 0x1fU & 0xffffffe0;
  *(uint *)(param_1 + 0x288) = uVar6;
  if (((*(int64_t *)(param_1 + 0x278) == 0) && (piVar1 != (int *)0x0)) && ((char)piVar1[3] != '\0')
     ) {
    lVar4 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar6 + 0x20,&rendering_buffer_2400_ptr,0xab,0
                         );
    *(int64_t *)(param_1 + 0x270) = lVar4;
    if (lVar4 == 0) {
      return 0x26;
    }
    *(uint64_t *)(param_1 + 0x278) = lVar4 + 0x1fU & 0xffffffffffffffe0;
  }
  *(int16_t *)(param_1 + 0x5a) = *(int16_t *)(param_1 + 0x280);
  *(int32_t *)(param_1 + 0x28c) = 0;
  *(uint64_t *)(param_1 + 0x238) = 0;
  *(uint64_t *)(param_1 + 0x268) = 0;
  *(int16_t *)(param_1 + 0x58) = 0;
  *(int32_t *)(param_1 + 0x2cc) = 0;
  *(uint64_t *)(param_1 + 0x290) = 0x7fffffff;
  *(int32_t *)(param_1 + 0x2a8) = 1;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_e4d19(uint64_t param_1,int param_2)
{
  int iVar1;
  int64_t lVar2;
  uint uVar3;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int iVar4;
  *(int *)(unaff_RBX + 0x284) = param_2;
  if ((unaff_RDI == 0) || (iVar4 = *(int *)(unaff_RDI + 4), iVar4 == 0)) {
    iVar4 = *(int *)(*(int64_t *)(unaff_RBX + 0xa8) + 0x6d4);
  }
  uVar3 = 0;
  if (unaff_RDI != 0) {
    uVar3 = *(uint *)(unaff_RDI + 8);
  }
  *(uint *)(unaff_RBX + 700) = uVar3;
  if (uVar3 < 6) {
    if (uVar3 == 0) {
      uVar3 = 5;
      *(int32_t *)(unaff_RBX + 700) = 5;
    }
    if (uVar3 == 1) {
      iVar1 = 1;
    }
    else if (uVar3 == 2) {
      iVar1 = 2;
    }
    else if (uVar3 == 3) {
      iVar1 = 3;
    }
    else if ((uVar3 == 4) || (uVar3 == 5)) {
      iVar1 = 4;
    }
    else {
      iVar1 = 1;
    }
    uVar3 = (param_2 + 8) * iVar4 * iVar1 + 0x1fU & 0xffffffe0;
    *(uint *)(unaff_RBX + 0x288) = uVar3;
    if (((*(int64_t *)(unaff_RBX + 0x278) == 0) && (unaff_RDI != 0)) &&
       (*(char *)(unaff_RDI + 0xc) != '\0')) {
      lVar2 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar3 + 0x20,&rendering_buffer_2400_ptr,0xab
                            ,0);
      *(int64_t *)(unaff_RBX + 0x270) = lVar2;
      if (lVar2 == 0) {
        return 0x26;
      }
      *(uint64_t *)(unaff_RBX + 0x278) = lVar2 + 0x1fU & 0xffffffffffffffe0;
    }
    *(int16_t *)(unaff_RBX + 0x5a) = *(int16_t *)(unaff_RBX + 0x280);
    *(int32_t *)(unaff_RBX + 0x28c) = 0;
    *(uint64_t *)(unaff_RBX + 0x238) = 0;
    *(uint64_t *)(unaff_RBX + 0x268) = 0;
    *(int16_t *)(unaff_RBX + 0x58) = 0;
    *(int32_t *)(unaff_RBX + 0x2cc) = 0;
    *(uint64_t *)(unaff_RBX + 0x290) = 0x7fffffff;
    *(int32_t *)(unaff_RBX + 0x2a8) = 1;
    return 0;
  }
  return 0x13;
}
uint64_t SystemCore_e4e1c(void)
{
  int64_t in_RAX;
  int64_t unaff_RBX;
  uint64_t unaff_RSI;
  *(uint64_t *)(unaff_RBX + 0x278) = in_RAX + 0x1fU & 0xffffffffffffffe0;
  *(int16_t *)(unaff_RBX + 0x5a) = *(int16_t *)(unaff_RBX + 0x280);
  *(int *)(unaff_RBX + 0x28c) = (int)unaff_RSI;
  *(uint64_t *)(unaff_RBX + 0x238) = unaff_RSI;
  *(uint64_t *)(unaff_RBX + 0x268) = unaff_RSI;
  *(short *)(unaff_RBX + 0x58) = (short)unaff_RSI;
  *(int *)(unaff_RBX + 0x2cc) = (int)unaff_RSI;
  *(uint64_t *)(unaff_RBX + 0x290) = 0x7fffffff;
  *(int32_t *)(unaff_RBX + 0x2a8) = 1;
  return 0;
}
uint64_t SystemCore_e4e7b(void)
{
  return 0x13;
}
// 函数: void SystemCore_e4e85(void)
void SystemCore_e4e85(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_e4e90(int64_t param_1,uint64_t param_2,int *param_3,int32_t param_4)
void SystemCore_e4e90(int64_t param_1,uint64_t param_2,int *param_3,int32_t param_4)
{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int32_t uVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int iVar8;
  int8_t stack_array_188 [32];
  uint64_t *plocal_var_168;
  int iStack_160;
  int iStack_158;
  uint64_t local_var_150;
  int8_t local_var_148;
  uint64_t local_var_138;
  int64_t lStack_130;
  uint64_t local_var_128;
  uint64_t local_var_120;
  int32_t local_var_118;
  int8_t *plocal_var_110;
  int8_t *plocal_var_108;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  int8_t stack_array_e8 [128];
  uint64_t local_var_68;
  local_var_68 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  iVar8 = 0;
  lVar3 = *(int64_t *)(param_1 + 0x2a0);
  *(int64_t *)(param_1 + 0xb0) = param_1;
  local_var_138 = param_2;
  if (lVar3 == 0) {
    if (*(code **)(param_1 + 0x298) != (code *)0x0) {
      plocal_var_168 = &local_var_138;
      local_var_138 = CONCAT44((int)((uint64_t)param_2 >> 0x20),param_4);
      (**(code **)(param_1 + 0x298))((int64_t *)(param_1 + 0xb0),param_2,0,param_3);
    }
  }
  else {
    iStack_158 = *(int *)(param_1 + 0x2a8);
    iVar2 = *param_3;
    local_var_128 = *(uint64_t *)(param_1 + 0xa8);
    local_var_150 = 0;
    plocal_var_108 = stack_array_e8;
    plocal_var_110 = stack_array_e8;
    *(int *)(param_1 + 0x2a8) = iStack_158 + 1;
    local_var_120 = 0x10;
    local_var_f8 = 0;
    local_var_f0 = 0;
    local_var_118 = 0;
    plocal_var_168 = (uint64_t *)((uint64_t)plocal_var_168 & 0xffffffff00000000);
    iStack_160 = iVar2;
    SystemCore_60970(lVar3,&local_var_128,lVar3,iVar2);
    if (0 < local_var_120._4_4_) {
      uVar4 = SystemFunction_000180746b50(param_4);
      lStack_130 = 0;
      do {
        lVar3 = *(int64_t *)(*(int64_t *)(plocal_var_108 + lStack_130) + 0x60);
        while (iVar5 = SystemCore_60d50(lVar3,iVar2,uVar4,param_4), iVar5 != 0) {
          iVar5 = SystemCore_42e60(*(uint64_t *)(param_1 + 0xa8));
          if (iVar5 != 0) goto LAB_1807e50c7;
        }
        if (iVar8 == local_var_120._4_4_ + -1) {
          lVar1 = lVar3 + 0x138;
          lVar6 = SystemFunction_00018075e4e0(lVar1);
          if (lVar6 == 0) {
// WARNING: Subroutine does not return
            memset(local_var_138,0,(uint64_t)(uint)(*(int *)(lVar3 + 0x148) * iVar2) << 2);
          }
          iVar5 = *(int *)(lVar3 + 0x148);
          uVar7 = SystemFunction_00018075e4e0(lVar1);
          local_var_148 = 0;
          local_var_150 = CONCAT44(local_var_150._4_4_,0x3f800000);
          iStack_158 = 1;
          iStack_160 = 1;
          plocal_var_168 = (uint64_t *)CONCAT44(plocal_var_168._4_4_,iVar5 * iVar2);
          SystemCore_edf30(local_var_138,uVar7,*(int32_t *)(param_1 + 700),5);
          UtilitiesSystem_DataValidator(lVar1);
        }
        iVar8 = iVar8 + 1;
        lStack_130 = lStack_130 + 8;
      } while (iVar8 < local_var_120._4_4_);
    }
    UtilitiesSystem_DataValidator(param_1 + 0x138);
  }
LAB_1807e50c7:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_68 ^ (uint64_t)stack_array_188);
}
uint64_t SystemCore_e51c0(int64_t *param_1,int64_t param_2,uint *param_3,uint param_4)
{
  float fVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint uVar9;
  int iVar10;
  uint64_t uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  int iStackX_8;
  uint stack_array_68 [2];
  uint64_t local_var_60;
  int iStack_58;
  int iStack_54;
  int32_t local_var_50;
  uint local_var_4c;
  local_var_60 = (uint64_t)(uint)local_var_60;
  uVar12 = (uint)*(ushort *)(param_1 + 0x23);
  if (*(ushort *)(param_1 + 0x23) == 0) {
    uVar12 = *param_3;
  }
  iVar14 = *(int *)((int64_t)param_1 + 700);
  if (iVar14 == 1) {
    iVar14 = 1;
  }
  else if (iVar14 == 2) {
    iVar14 = 2;
  }
  else if (iVar14 == 3) {
    iVar14 = 3;
  }
  else if ((iVar14 == 4) || (iVar14 == 5)) {
    iVar14 = 4;
  }
  else {
    iVar14 = 1;
  }
  iVar14 = iVar14 * uVar12;
  fVar15 = (float)(**(code **)(*param_1 + 0x50))(param_1);
  fVar1 = *(float *)(param_1 + 0x46);
  if (fVar15 == fVar1) {
    uVar8 = 0x100000000;
    local_var_60 = 0x100000000;
  }
  else {
    local_var_60 = (uint64_t)((4.2949673e+09 / fVar1) * fVar15);
    if ((int64_t)local_var_60 < 0x101) {
      uVar8 = 0xffffffffffffffff;
    }
    else {
      uVar8 = (uint64_t)((fVar1 / fVar15) * 4.2949673e+09);
    }
  }
  iStackX_8 = 0;
  uVar13 = param_4;
  if (0 < (int)param_4) {
    while( true ) {
      iVar10 = *(int *)((int64_t)param_1 + 0x26c);
      if (iVar10 < *(int *)((int64_t)param_1 + 0x294)) {
        uVar9 = uVar13;
        bVar3 = false;
        if (0x100 < (int64_t)local_var_60) {
          uVar2 = *(uint *)(param_1 + 0x52);
          uVar5 = *(int *)((int64_t)param_1 + 0x294) - 4;
          local_var_50 = 0;
          local_var_4c = uVar2;
          if ((int)uVar5 < (int)uVar2) {
            local_var_4c = uVar5;
          }
          uVar11 = ((uint64_t)local_var_4c << 0x20) - param_1[0x4d];
          iVar10 = (int)((uint64_t)param_1[0x4d] >> 0x20);
          uVar4 = 0;
          if (0 < (int64_t)uVar11) {
            uVar4 = (uint)(((uVar8 & 0xffffffff) * (uVar11 & 0xffffffff) >> 0x20) +
                           ((int64_t)uVar8 >> 0x20) * (uVar11 & 0xffffffff) + 0xffffffff +
                           (int64_t)(int)(uVar11 >> 0x20) * uVar8 >> 0x20);
          }
          bVar3 = false;
          if ((int)uVar4 <= (int)uVar13) {
            uVar9 = uVar4;
            bVar3 = (int)uVar2 <= (int)uVar5;
          }
        }
        if (0 < (int)uVar9) {
          iStack_54 = iVar10 + 8;
          iStack_58 = (int)param_1[0x4d];
          iVar10 = *(int *)((int64_t)param_1 + 0x234);
          lVar7 = param_2 + (int64_t)(int)(iStackX_8 * uVar12) * 4;
          if ((((uint)local_var_60 == 0) && (iStack_58 == 0)) || (iVar10 == 1)) {
            NetworkProtocol_1da90(lVar7,uVar9,param_1[0x4f],*(int32_t *)((int64_t)param_1 + 700),
                          &iStack_58,&local_var_60,uVar12);
          }
          else if (iVar10 == 3) {
            NetworkProtocol_1f420(lVar7,uVar9,param_1[0x4f],*(int32_t *)((int64_t)param_1 + 700),
                          &iStack_58,&local_var_60,uVar12);
          }
          else if (iVar10 == 4) {
            NetworkProtocol_21bb0(lVar7,uVar9);
          }
          else {
            NetworkProtocol_1e5c0();
          }
          iStackX_8 = iStackX_8 + uVar9;
          *(int *)((int64_t)param_1 + 0x26c) = iStack_54 + -8;
          uVar13 = uVar13 - uVar9;
          *(int *)(param_1 + 0x4d) = iStack_58;
        }
        if (bVar3) {
// WARNING: Subroutine does not return
          memset(param_2 + (int64_t)(int)(iStackX_8 * uVar12) * 4,0,
                 (int64_t)(int)(uVar13 * uVar12) << 2);
        }
      }
      if ((int)uVar13 < 1) break;
      if (*(int *)((int64_t)param_1 + 0x294) != 0) {
// WARNING: Subroutine does not return
        memmove(param_1[0x4f],
                (uint64_t)(uint)(*(int *)((int64_t)param_1 + 0x294) * iVar14) + param_1[0x4f],
                (int64_t)(iVar14 * 8));
      }
      stack_array_68[0] = *(uint *)((int64_t)param_1 + 0x284);
      lVar7 = (int64_t)(iVar14 * 8) + param_1[0x4f];
      if ((int)param_1[0x52] != 0x7fffffff) {
// WARNING: Subroutine does not return
        memset(lVar7,0,stack_array_68[0] * iVar14);
      }
      uVar11 = SystemCore_e4e90(param_1,lVar7,stack_array_68,uVar12);
      if ((uVar11 & 0xffffffef) != 0) {
        return uVar11;
      }
      if (*(uint *)((int64_t)param_1 + 0x284) < stack_array_68[0]) {
        return 0x1c;
      }
      *(uint *)((int64_t)param_1 + 0x294) = stack_array_68[0];
      if (((int)param_1[0x52] == 0x7fffffff) && ((int)uVar11 == 0x10)) {
        *(uint *)(param_1 + 0x52) = stack_array_68[0];
      }
    }
  }
  iVar14 = *(int *)((int64_t)param_1 + 0x2c4);
  uVar13 = *(uint *)(param_1 + 0x57);
  iVar6 = uVar13 - iVar14;
  iVar10 = (int)param_1[0x59];
  if (uVar13 < (uint)(iVar14 + (int)param_1[0x59])) {
    *(int *)(param_1 + 0x59) = iVar6;
    iVar10 = iVar6;
  }
  if ((int)param_1[0x48] == 1) {
    if (((*(uint *)(param_1 + 0x58) & 2) == 0) || ((int)param_1[0x4b] == 0)) {
      iVar14 = 0;
    }
    lVar7 = param_1[0x47] - param_4 * local_var_60;
    param_1[0x47] = lVar7;
    iVar6 = (int)((uint64_t)lVar7 >> 0x20);
    if (iVar14 < iVar6) goto LAB_1807e56b3;
    if (((*(uint *)(param_1 + 0x58) & 2) == 0) && (uVar13 != 0xffffffff)) {
      *(int32_t *)((int64_t)param_1 + 0x23c) = 0;
      goto LAB_1807e56b3;
    }
    iVar6 = iVar6 + iVar10;
  }
  else {
    if (uVar13 < (uint)(iVar14 + iVar10)) {
      *(int *)(param_1 + 0x59) = iVar6;
      iVar10 = iVar6;
    }
    if (((*(uint *)(param_1 + 0x58) & 2) == 0) || ((int)param_1[0x4b] == 0)) {
      iVar14 = uVar13 - 1;
    }
    else {
      iVar14 = iVar14 + -1 + iVar10;
    }
    uVar8 = param_4 * local_var_60 + param_1[0x47];
    param_1[0x47] = uVar8;
    if (uVar8 <= CONCAT44(iVar14,0xffffffff)) goto LAB_1807e56b3;
    if (((*(uint *)(param_1 + 0x58) & 2) == 0) && (uVar13 != 0xffffffff)) {
      *(uint *)((int64_t)param_1 + 0x23c) = uVar13;
      goto LAB_1807e56b3;
    }
    iVar6 = (int)(uVar8 >> 0x20) - iVar10;
  }
  *(int *)((int64_t)param_1 + 0x23c) = iVar6;
LAB_1807e56b3:
  *param_3 = uVar12;
  return 0;
}
uint64_t SystemCore_e56d0(int64_t param_1,char param_2,char param_3)
{
  int64_t lVar1;
  if (param_2 == '\0') {
    *(int32_t *)(param_1 + 0x2cc) = 0xffffffff;
    return 0;
  }
  if (param_3 == '\0') {
    if ((*(int *)(param_1 + 0x2cc) + 1U & 0xfffffffe) == 0) {
      if ((*(uint *)(param_1 + 100) >> 8 & 1) != 0) {
        *(int32_t *)(param_1 + 0x2cc) = 0;
        return 0;
      }
      *(int *)(param_1 + 0x2cc) = *(int *)(*(int64_t *)(param_1 + 0xa8) + 0x116e8) + 1;
    }
  }
  else {
    lVar1 = *(int64_t *)(param_1 + 0xa8);
    if (lVar1 != 0) {
      SystemFunction_000180743c20(lVar1,3);
    }
    *(int32_t *)(param_1 + 0x2cc) = 0;
    if ((lVar1 != 0) && (lVar1 != 0)) {
// WARNING: Subroutine does not return
      SystemCoreHandler(lVar1,3);
    }
  }
  return 0;
}
uint64_t SystemCore_e56ef(int64_t param_1,uint64_t param_2,char param_3)
{
  int64_t lVar1;
  int64_t unaff_RBX;
  if (param_3 == '\0') {
    if ((*(int *)(param_1 + 0x2cc) + 1U & 0xfffffffe) == 0) {
      if ((*(uint *)(param_1 + 100) >> 8 & 1) != 0) {
        *(int32_t *)(param_1 + 0x2cc) = 0;
        return 0;
      }
      *(int *)(unaff_RBX + 0x2cc) = *(int *)(*(int64_t *)(param_1 + 0xa8) + 0x116e8) + 1;
    }
  }
  else {
    lVar1 = *(int64_t *)(param_1 + 0xa8);
    if (lVar1 != 0) {
      SystemFunction_000180743c20(lVar1,3);
    }
    *(int32_t *)(unaff_RBX + 0x2cc) = 0;
    if ((lVar1 != 0) && (lVar1 != 0)) {
// WARNING: Subroutine does not return
      SystemCoreHandler(lVar1,3);
    }
  }
  return 0;
}
uint64_t SystemCore_e5743(int64_t param_1)
{
  int64_t unaff_RBX;
  if ((*(int *)(param_1 + 0x2cc) + 1U & 0xfffffffe) == 0) {
    if ((*(uint *)(param_1 + 100) >> 8 & 1) != 0) {
      *(int32_t *)(param_1 + 0x2cc) = 0;
      return 0;
    }
    *(int *)(unaff_RBX + 0x2cc) = *(int *)(*(int64_t *)(param_1 + 0xa8) + 0x116e8) + 1;
  }
  return 0;
}
uint64_t SystemCore_e5773(int64_t param_1)
{
  int64_t unaff_RBX;
  *(int *)(unaff_RBX + 0x2cc) = *(int *)(*(int64_t *)(param_1 + 0xa8) + 0x116e8) + 1;
  return 0;
}
uint64_t SystemCore_e5830(int64_t param_1)
{
  uint64_t uVar1;
  uint64_t local_var_28;
  uVar1 = SystemCore_69b80();
  if ((int)uVar1 == 0) {
    *(int32_t *)(param_1 + 0x1f0) = 0;
    *(uint64_t *)(param_1 + 0x1f8) = local_var_28;
    uVar1 = 0;
  }
  return uVar1;
}