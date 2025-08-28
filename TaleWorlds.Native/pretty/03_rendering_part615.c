#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part615.c - 19 个函数
// 函数: void UtilitiesSystem_06600(int64_t param_1,int param_2,int param_3)
void UtilitiesSystem_06600(int64_t param_1,int param_2,int param_3)
{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x8be) != '\0') {
      NetworkSystem_43e30();
      *(int8_t *)(param_1 + 0x1b5) = 0;
      *(int8_t *)(param_1 + 0x335) = 0;
      *(int8_t *)(param_1 + 0x4b5) = 0;
      *(int8_t *)(param_1 + 0x635) = 0;
      *(int8_t *)(param_1 + 0x7b5) = 0;
      if (-1 < param_2) {
        *(int8_t *)((int64_t)param_2 * 0x180 + 0x1b5 + param_1) = 1;
      }
      if (-1 < param_3) {
        *(int8_t *)((int64_t)param_3 * 0x180 + 0x1b5 + param_1) = 1;
      }
    }
  }
  return;
}
// 函数: void UtilitiesSystem_06690(uint64_t param_1,uint64_t param_2,int32_t *param_3)
void UtilitiesSystem_06690(uint64_t param_1,uint64_t param_2,int32_t *param_3)
{
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = *param_3;
  local_var_14 = param_3[1];
  local_var_10 = param_3[2];
  local_var_c = param_3[3];
  NetworkSystem_44200(local_var_18,0,0,&local_var_18,0,0);
  return;
}
// 函数: void UtilitiesSystem_066d0(int64_t param_1,int8_t param_2)
void UtilitiesSystem_066d0(int64_t param_1,int8_t param_2)
{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  lVar1 = *(int64_t *)(param_1 + 0x8a8);
  lVar4 = 0;
  iVar2 = (int)(*(int64_t *)(lVar1 + 0x1e8) - *(int64_t *)(lVar1 + 0x1e0) >> 3);
  lVar5 = lVar4;
  if (0 < iVar2) {
    do {
      iVar3 = (**(code **)(**(int64_t **)(*(int64_t *)(lVar1 + 0x1e0) + lVar5 * 8) + 0x98))();
      if (iVar3 == 3) {
        *(int8_t *)(*(int64_t *)(*(int64_t *)(lVar1 + 0x1e0) + lVar5 * 8) + 0xbc) = param_2;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar2);
  }
  lVar1 = *(int64_t *)(lVar1 + 0x260);
  if ((lVar1 != 0) &&
     (iVar2 = (int)(*(int64_t *)(lVar1 + 0x1d0) - *(int64_t *)(lVar1 + 0x1c8) >> 3), 0 < iVar2)) {
    do {
      iVar3 = (**(code **)(**(int64_t **)(*(int64_t *)(lVar1 + 0x1c8) + lVar4 * 8) + 0x98))();
      if (iVar3 == 3) {
        *(int8_t *)(*(int64_t *)(*(int64_t *)(lVar1 + 0x1c8) + lVar4 * 8) + 0xbc) = param_2;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  return;
}
// 函数: void UtilitiesSystem_067f0(int64_t param_1,byte param_2,uint64_t param_3,uint64_t param_4)
void UtilitiesSystem_067f0(int64_t param_1,byte param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lStack_30;
  int32_t local_var_28;
  int8_t stack_array_20 [24];
  plVar3 = *(int64_t **)(*(int64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260) + 0x210);
  lStack_30 = 0x180606821;
  (**(code **)(*plVar3 + 0x148))(plVar3,param_2);
  *(uint *)(param_1 + 0x91c) = (param_2 ^ 1) << 3;
  uVar5 = 0xfffffffffffffffe;
  lVar2 = *(int64_t *)(param_1 + 0x930);
  lVar1 = lVar2 + 0x2be8;
  lVar6 = lVar1;
  iVar4 = _Mtx_lock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  local_var_28 = *(int32_t *)(param_1 + 0x938);
  lStack_30 = param_1;
  UISystem_dd4d0(lVar2 + 0x2b88,stack_array_20,&lStack_30,param_4,uVar5,lVar6,1);
  iVar4 = _Mtx_unlock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  return;
}
// 函数: void UtilitiesSystem_068f0(int64_t param_1,uint64_t *param_2)
void UtilitiesSystem_068f0(int64_t param_1,uint64_t *param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  if ((param_1 != 0) && (*(char *)(param_1 + 0x8be) != '\0')) {
    lVar1 = *(int64_t *)(param_1 + 0x8a8);
    uVar2 = *(uint64_t *)(lVar1 + 0x38);
    *param_2 = *(uint64_t *)(lVar1 + 0x30);
    param_2[1] = uVar2;
    uVar2 = *(uint64_t *)(lVar1 + 0x48);
    param_2[2] = *(uint64_t *)(lVar1 + 0x40);
    param_2[3] = uVar2;
    uVar2 = *(uint64_t *)(lVar1 + 0x58);
    param_2[4] = *(uint64_t *)(lVar1 + 0x50);
    param_2[5] = uVar2;
    uVar2 = *(uint64_t *)(lVar1 + 0x68);
    param_2[6] = *(uint64_t *)(lVar1 + 0x60);
    param_2[7] = uVar2;
    return;
  }
  SystemCore_ResourceManager0(&processed_var_8120_ptr);
  *param_2 = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0x3f80000000000000;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x3f800000;
  param_2[6] = 0;
  param_2[7] = 0x3f80000000000000;
  return;
}
// 函数: void UtilitiesSystem_06970(int64_t param_1,uint64_t *param_2)
void UtilitiesSystem_06970(int64_t param_1,uint64_t *param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  if ((param_1 != 0) && (*(char *)(param_1 + 0x8be) != '\0')) {
    lVar1 = *(int64_t *)(param_1 + 0x8a8);
    uVar2 = *(uint64_t *)(lVar1 + 0x78);
    *param_2 = *(uint64_t *)(lVar1 + 0x70);
    param_2[1] = uVar2;
    uVar2 = *(uint64_t *)(lVar1 + 0x88);
    param_2[2] = *(uint64_t *)(lVar1 + 0x80);
    param_2[3] = uVar2;
    uVar2 = *(uint64_t *)(lVar1 + 0x98);
    param_2[4] = *(uint64_t *)(lVar1 + 0x90);
    param_2[5] = uVar2;
    uVar2 = *(uint64_t *)(lVar1 + 0xa8);
    param_2[6] = *(uint64_t *)(lVar1 + 0xa0);
    param_2[7] = uVar2;
    return;
  }
  SystemCore_ResourceManager0(&processed_var_8048_ptr);
  *param_2 = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0x3f80000000000000;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x3f800000;
  param_2[6] = 0;
  param_2[7] = 0x3f80000000000000;
  return;
}
uint64_t * UtilitiesSystem_06b60(uint64_t *param_1,int64_t param_2)
{
  int32_t uVar1;
  int64_t *plVar2;
  int32_t local_var_c;
  if ((param_2 != 0) && (*(char *)(param_2 + 0x8be) != '\0')) {
    plVar2 = *(int64_t **)(param_2 + 0x8a8);
    if ((plVar2 == (int64_t *)0x0) ||
       (plVar2 = (int64_t *)plVar2[0x4c], plVar2 == (int64_t *)0x0)) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    }
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    *param_1 = plVar2;
    param_1[1] = CONCAT44(local_var_c,uVar1);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = CONCAT44(local_var_c,0xffffffff);
  return param_1;
}
int64_t * UtilitiesSystem_06c00(int64_t *param_1,int64_t param_2)
{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t local_var_c;
  if ((param_2 != 0) && (*(char *)(param_2 + 0x8be) != '\0')) {
    plVar1 = *(int64_t **)(param_2 + 0x8a8);
    if (plVar1 == (int64_t *)0x0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    *param_1 = (int64_t)plVar1;
    param_1[1] = CONCAT44(local_var_c,uVar2);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = CONCAT44(local_var_c,0xffffffff);
  return param_1;
}
// 函数: void UtilitiesSystem_06c17(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
void UtilitiesSystem_06c17(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5)
{
  int64_t *plVar1;
  int32_t uVar2;
  int64_t *unaff_RDI;
  plVar1 = *(int64_t **)(param_2 + 0x8a8);
  if (plVar1 == (int64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *unaff_RDI = (int64_t)plVar1;
  unaff_RDI[1] = CONCAT44(param_5._4_4_,uVar2);
  return;
}
// 函数: void UtilitiesSystem_06c65(uint64_t *param_1)
void UtilitiesSystem_06c65(uint64_t *param_1)
{
  uint64_t local_var_28;
  *param_1 = 0;
  param_1[1] = CONCAT44(local_var_28._4_4_,0xffffffff);
  return;
}
uint64_t * UtilitiesSystem_06cb0(uint64_t *param_1,int64_t param_2)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  int8_t stack_array_18 [16];
  if ((param_2 != 0) && (*(char *)(param_2 + 0x8be) != '\0')) {
    puVar2 = (uint64_t *)NetworkSystem_44c30(param_2,stack_array_18);
    uVar1 = puVar2[1];
    *param_1 = *puVar2;
    param_1[1] = uVar1;
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_06d00(float *param_1,int64_t param_2)
void UtilitiesSystem_06d00(float *param_1,int64_t param_2)
{
  uint uVar1;
  char cVar2;
  int64_t lVar3;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint *puVar17;
  float fVar18;
  uint64_t local_var_38;
  uint64_t local_var_30;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  uint local_var_1c;
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)&local_var_38;
  if ((param_2 != 0) && (*(char *)(param_2 + 0x8be) != '\0')) {
    lVar3 = *(int64_t *)(*(int64_t *)(param_2 + 0x8a8) + 0x260);
    cVar2 = *(char *)(*(int64_t *)(lVar3 + 0x210) + 0xde);
    puVar17 = (uint *)((int64_t)*(char *)(*(int64_t *)(lVar3 + 0x210) + 0xe2) * 0x100 +
                      *(int64_t *)(lVar3 + 0x18));
    do {
      LOCK();
      uVar1 = *puVar17;
      *puVar17 = *puVar17 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    local_var_38 = *(uint64_t *)(puVar17 + 1);
    local_var_30 = *(uint64_t *)(puVar17 + 3);
    fStack_28 = (float)puVar17[5];
    fStack_24 = (float)puVar17[6];
    fStack_20 = (float)puVar17[7];
    local_var_1c = puVar17[8];
    *puVar17 = 0;
    lVar4 = *(int64_t *)(param_2 + 0x8a8);
    fVar5 = *(float *)(lVar4 + 0x84);
    fVar6 = *(float *)(lVar4 + 0x88);
    fVar7 = *(float *)(lVar4 + 0x8c);
    fVar8 = *(float *)(lVar4 + 0x74);
    fVar9 = *(float *)(lVar4 + 0x78);
    fVar10 = *(float *)(lVar4 + 0x7c);
    fVar11 = *(float *)(lVar4 + 0x94);
    fVar12 = *(float *)(lVar4 + 0x98);
    fVar13 = *(float *)(lVar4 + 0x9c);
    fVar18 = fStack_20 +
             *(float *)(*(int64_t *)(*(int64_t *)(lVar3 + 0x208) + 0x140) + 0x100 +
                       (int64_t)cVar2 * 0x1b0);
    fVar14 = *(float *)(lVar4 + 0xa4);
    fVar15 = *(float *)(lVar4 + 0xa8);
    fVar16 = *(float *)(lVar4 + 0xac);
    *param_1 = *(float *)(lVar4 + 0x80) * fStack_24 + *(float *)(lVar4 + 0x70) * fStack_28 +
               fVar18 * *(float *)(lVar4 + 0x90) + *(float *)(lVar4 + 0xa0);
    param_1[1] = fVar5 * fStack_24 + fVar8 * fStack_28 + fVar18 * fVar11 + fVar14;
    param_1[2] = fVar6 * fStack_24 + fVar9 * fStack_28 + fVar18 * fVar12 + fVar15;
    param_1[3] = fVar7 * fStack_24 + fVar10 * fStack_28 + fVar18 * fVar13 + fVar16;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_18 ^ (uint64_t)&local_var_38);
  }
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)&local_var_38);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_06e30(int64_t param_1,char param_2,char param_3,uint64_t *param_4)
void UtilitiesSystem_06e30(int64_t param_1,char param_2,char param_3,uint64_t *param_4)
{
  uint uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint *puVar5;
  int8_t stack_array_b8 [32];
  uint local_var_98;
  uint local_var_94;
  uint local_var_90;
  uint local_var_8c;
  uint64_t local_var_88;
  uint64_t local_var_80;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  uint local_var_48;
  uint local_var_44;
  uint local_var_40;
  uint local_var_3c;
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260);
  if (lVar2 != 0) {
    if (param_3 != '\0') {
      param_2 = *(char *)(*(int64_t *)(lVar2 + 0x208) + 0xc0 + (int64_t)param_2);
    }
    puVar5 = (uint *)((int64_t)param_2 * 0x100 + *(int64_t *)(lVar2 + 0x18));
    do {
      LOCK();
      uVar1 = *puVar5;
      *puVar5 = *puVar5 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    local_var_98 = puVar5[1];
    local_var_94 = puVar5[2];
    local_var_90 = puVar5[3];
    local_var_8c = puVar5[4];
    uVar3 = *(uint64_t *)(puVar5 + 5);
    uVar4 = *(uint64_t *)(puVar5 + 7);
    *puVar5 = 0;
    local_var_88 = uVar3;
    local_var_80 = uVar4;
    local_var_48 = local_var_98;
    local_var_44 = local_var_94;
    local_var_40 = local_var_90;
    local_var_3c = local_var_8c;
    local_var_38 = uVar3;
    local_var_30 = uVar4;
    SystemSecurityManager(&local_var_78,&local_var_98);
    *(int32_t *)param_4 = local_var_78;
    *(int32_t *)((int64_t)param_4 + 4) = local_var_74;
    *(int32_t *)(param_4 + 1) = local_var_70;
    *(int32_t *)((int64_t)param_4 + 0xc) = local_var_6c;
    *(int32_t *)(param_4 + 2) = local_var_68;
    *(int32_t *)((int64_t)param_4 + 0x14) = local_var_64;
    *(int32_t *)(param_4 + 3) = local_var_60;
    *(int32_t *)((int64_t)param_4 + 0x1c) = local_var_5c;
    *(int32_t *)(param_4 + 4) = local_var_58;
    *(int32_t *)((int64_t)param_4 + 0x24) = local_var_54;
    *(int32_t *)(param_4 + 5) = local_var_50;
    *(int32_t *)((int64_t)param_4 + 0x2c) = local_var_4c;
    param_4[6] = uVar3;
    param_4[7] = uVar4;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_b8);
  }
  *param_4 = 0x3f800000;
  param_4[1] = 0;
  param_4[2] = 0x3f80000000000000;
  param_4[3] = 0;
  *(int32_t *)(param_4 + 4) = 0;
  *(int32_t *)((int64_t)param_4 + 0x24) = 0;
  *(int32_t *)(param_4 + 5) = 0x3f800000;
  *(int32_t *)((int64_t)param_4 + 0x2c) = 0;
  *(int32_t *)(param_4 + 6) = 0;
  *(int32_t *)((int64_t)param_4 + 0x34) = 0;
  *(int32_t *)(param_4 + 7) = 0;
  *(int32_t *)((int64_t)param_4 + 0x3c) = 0x3f800000;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_b8);
}
// 函数: void UtilitiesSystem_06e60(uint64_t param_1,char param_2,char param_3,int32_t *param_4)
void UtilitiesSystem_06e60(uint64_t param_1,char param_2,char param_3,int32_t *param_4)
{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint *puVar4;
  int64_t in_R10;
  uint local_buffer_28;
  uint local_buffer_2c;
  uint64_t local_buffer_30;
  uint64_t local_buffer_38;
  int32_t local_buffer_40;
  int32_t local_buffer_44;
  int32_t local_buffer_48;
  int32_t local_buffer_4c;
  int32_t local_buffer_50;
  int32_t local_buffer_54;
  int32_t local_buffer_58;
  int32_t local_buffer_5c;
  int32_t local_buffer_60;
  int32_t local_buffer_64;
  int32_t local_buffer_68;
  int32_t local_buffer_6c;
  uint local_buffer_70;
  uint local_buffer_74;
  uint local_buffer_78;
  uint local_buffer_7c;
  uint64_t local_buffer_80;
  uint64_t local_buffer_88;
  uint64_t local_var_90;
  if (param_3 != '\0') {
    param_2 = *(char *)(*(int64_t *)(in_R10 + 0x208) + 0xc0 + (int64_t)param_2);
  }
  puVar4 = (uint *)((int64_t)param_2 * 0x100 + *(int64_t *)(in_R10 + 0x18));
  do {
    LOCK();
    uVar1 = *puVar4;
    *puVar4 = *puVar4 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  local_buffer_70 = puVar4[1];
  local_buffer_74 = puVar4[2];
  local_buffer_28 = puVar4[3];
  local_buffer_2c = puVar4[4];
  uVar2 = *(uint64_t *)(puVar4 + 5);
  uVar3 = *(uint64_t *)(puVar4 + 7);
  *puVar4 = 0;
  local_buffer_30 = uVar2;
  local_buffer_38 = uVar3;
  local_buffer_78 = local_buffer_28;
  local_buffer_7c = local_buffer_2c;
  local_buffer_80 = uVar2;
  local_buffer_88 = uVar3;
  SystemSecurityManager(&local_buffer_00000040,&local_buffer_00000020,param_3,param_4,local_buffer_70);
  *param_4 = local_buffer_40;
  param_4[1] = local_buffer_44;
  param_4[2] = local_buffer_48;
  param_4[3] = local_buffer_4c;
  param_4[4] = local_buffer_50;
  param_4[5] = local_buffer_54;
  param_4[6] = local_buffer_58;
  param_4[7] = local_buffer_5c;
  param_4[8] = local_buffer_60;
  param_4[9] = local_buffer_64;
  param_4[10] = local_buffer_68;
  param_4[0xb] = local_buffer_6c;
  *(uint64_t *)(param_4 + 0xc) = uVar2;
  *(uint64_t *)(param_4 + 0xe) = uVar3;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_90 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UtilitiesSystem_06f11(void)
void UtilitiesSystem_06f11(void)
{
  uint64_t *in_R9;
  uint64_t local_var_90;
  *in_R9 = 0x3f800000;
  in_R9[1] = 0;
  in_R9[2] = 0x3f80000000000000;
  in_R9[3] = 0;
  *(int32_t *)(in_R9 + 4) = 0;
  *(int32_t *)((int64_t)in_R9 + 0x24) = 0;
  *(int32_t *)(in_R9 + 5) = 0x3f800000;
  *(int32_t *)((int64_t)in_R9 + 0x2c) = 0;
  *(int32_t *)(in_R9 + 6) = 0;
  *(int32_t *)((int64_t)in_R9 + 0x34) = 0;
  *(int32_t *)(in_R9 + 7) = 0;
  *(int32_t *)((int64_t)in_R9 + 0x3c) = 0x3f800000;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_90 ^ (uint64_t)&local_buffer_00000000);
}
int64_t * UtilitiesSystem_06f90(int64_t *param_1,int64_t param_2,int param_3)
{
  int64_t *plStack_18;
  int32_t local_var_10;
  int32_t local_var_c;
  if ((param_2 == 0) || (*(char *)(param_2 + 0x8be) == '\0')) {
    plStack_18 = (int64_t *)0x0;
    local_var_10 = 0xffffffff;
  }
  else {
    plStack_18 = (int64_t *)**(int64_t **)(*(int64_t *)(param_2 + 0x810) + (int64_t)param_3 * 8)
    ;
    if (plStack_18 == (int64_t *)0x0) {
      local_var_10 = 0xffffffff;
    }
    else {
      (**(code **)(*plStack_18 + 0x28))(plStack_18);
      (**(code **)(*plStack_18 + 0x38))(plStack_18);
      local_var_10 = (**(code **)(*plStack_18 + 8))(plStack_18);
      (**(code **)(*plStack_18 + 0x28))(plStack_18);
    }
  }
  *param_1 = (int64_t)plStack_18;
  param_1[1] = CONCAT44(local_var_c,local_var_10);
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_07060(int64_t param_1,int32_t param_2,int8_t param_3,int64_t *param_4)
void UtilitiesSystem_07060(int64_t param_1,int32_t param_2,int8_t param_3,int64_t *param_4)
{
  int32_t uVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plStackX_8;
  plVar4 = (int64_t *)GenericFunction_1800c1750(param_1,&plStackX_8,param_2);
  plVar4 = (int64_t *)*plVar4;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  uVar5 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x168,8,3);
  plVar6 = (int64_t *)DataStructure_ac390(uVar5);
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  plStackX_8 = plVar4;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  DataStructure_adab0(plVar6,&plStackX_8);
  lVar3 = param_4[1];
  plVar6[10] = *param_4;
  plVar6[0xb] = lVar3;
  lVar3 = param_4[3];
  plVar6[0xc] = param_4[2];
  plVar6[0xd] = lVar3;
  uVar1 = *(int32_t *)((int64_t)param_4 + 0x24);
  lVar3 = param_4[5];
  uVar2 = *(int32_t *)((int64_t)param_4 + 0x2c);
  *(int *)(plVar6 + 0xe) = (int)param_4[4];
  *(int32_t *)((int64_t)plVar6 + 0x74) = uVar1;
  *(int *)(plVar6 + 0xf) = (int)lVar3;
  *(int32_t *)((int64_t)plVar6 + 0x7c) = uVar2;
  uVar1 = *(int32_t *)((int64_t)param_4 + 0x34);
  lVar3 = param_4[7];
  uVar2 = *(int32_t *)((int64_t)param_4 + 0x3c);
  *(int *)(plVar6 + 0x10) = (int)param_4[6];
  *(int32_t *)((int64_t)plVar6 + 0x84) = uVar1;
  *(int *)(plVar6 + 0x11) = (int)lVar3;
  *(int32_t *)((int64_t)plVar6 + 0x8c) = uVar2;
  DataStructure_fbf30(*(uint64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260),param_3,plVar6,param_4);
  NetworkSystem_44ac0(param_1);
// WARNING: Could not recover jumptable at 0x00018060716b. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*plVar6 + 0x38))(plVar6);
  return;
}
uint64_t * UtilitiesSystem_071a0(uint64_t *param_1,int64_t param_2,uint64_t param_3,char param_4)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  int8_t stack_array_18 [16];
  puVar2 = (uint64_t *)
           UtilitiesSystem_071f0(stack_array_18,param_2,param_3,
                         *(int8_t *)
                          (*(int64_t *)
                            (*(int64_t *)(*(int64_t *)(param_2 + 0x8a8) + 0x260) + 0x208) + 0xc0 +
                          (int64_t)param_4));
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t *
UtilitiesSystem_071f0(int32_t *param_1,int64_t param_2,uint64_t param_3,int8_t param_4)
{
  uint64_t uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t local_var_34;
  void *plocal_var_30;
  int64_t lStack_28;
  CoreMemoryPoolValidator(&plocal_var_30,param_3,param_3,param_4,0xfffffffffffffffe);
  uVar1 = *(uint64_t *)(*(int64_t *)(param_2 + 0x8a8) + 0x260);
  uVar3 = DataStructure_0bef0(render_system_data_config,&plocal_var_30);
  plVar4 = (int64_t *)DataStructure_ffb00(uVar1,uVar3,param_4);
  NetworkSystem_44ac0(param_2);
  if (plVar4 == (int64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plVar4 + 8))(plVar4);
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  local_var_40 = SUB84(plVar4,0);
  local_var_3c = (int32_t)((uint64_t)plVar4 >> 0x20);
  *param_1 = local_var_40;
  param_1[1] = local_var_3c;
  param_1[2] = uVar2;
  param_1[3] = local_var_34;
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 == 0) {
    return param_1;
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}
int8_t UtilitiesSystem_072e0(int64_t param_1,uint64_t param_2)
{
  DataStructure_e8a50(*(uint64_t *)(param_1 + 0x8a8),param_2,0,1);
  NetworkSystem_44ac0(param_1);
  return 0;
}
// 函数: void UtilitiesSystem_07310(int64_t param_1,int32_t *param_2,char param_3,int param_4)
void UtilitiesSystem_07310(int64_t param_1,int32_t *param_2,char param_3,int param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int iVar6;
  int64_t *plVar7;
  int iVar8;
  int64_t *plStackX_8;
  uint64_t uVar9;
  uVar9 = 0xfffffffffffffffe;
  iVar8 = 0;
  plVar1 = *(int64_t **)((int64_t)param_4 * 0x180 + 0x90 + param_1);
  plStackX_8 = plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  iVar6 = DataStructure_ed190(plVar1,3);
  if (0 < iVar6) {
    do {
      plVar7 = (int64_t *)DataStructure_ed2b0(plVar1,&plStackX_8,3,iVar8,uVar9);
      lVar2 = *plVar7;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      *(int32_t *)(lVar2 + 0x74) = *param_2;
      *(int32_t *)(lVar2 + 0x78) = uVar3;
      *(int32_t *)(lVar2 + 0x7c) = uVar4;
      *(int32_t *)(lVar2 + 0x80) = uVar5;
      if (param_3 == '\0') {
        *(int32_t *)(lVar2 + 0x70) = 2;
      }
      else {
        *(int32_t *)(lVar2 + 0x70) = 1;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar6);
  }
  return;
}
// 函数: void UtilitiesSystem_073f0(int64_t param_1,uint64_t param_2,int32_t param_3)
void UtilitiesSystem_073f0(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lStack_30;
  int32_t local_var_28;
  int8_t stack_array_20 [8];
  int8_t local_var_18;
  int32_t local_var_10;
  local_var_18 = 0;
  local_var_10 = param_3;
  DataStructure_eb9a0(*(uint64_t *)(param_1 + 0x8a8),param_2,0,0);
  lVar2 = *(int64_t *)(param_1 + 0x930);
  lVar1 = lVar2 + 0x2be8;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  local_var_28 = *(int32_t *)(param_1 + 0x938);
  lStack_30 = param_1;
  UISystem_dd4d0(lVar2 + 0x2b88,stack_array_20,&lStack_30);
  iVar3 = _Mtx_unlock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}
bool UtilitiesSystem_07430(int64_t param_1,byte param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  uint64_t local_var_58;
  int32_t local_var_50;
  int32_t local_var_4c;
  ushort local_var_48;
  int8_t local_var_46;
  int32_t local_var_44;
  int8_t local_var_40;
  uint64_t local_var_38;
  int64_t lStack_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  int32_t local_var_18;
  uint64_t local_var_10;
  local_var_58 = 0;
  local_var_50 = 0;
  local_var_4c = 0xffffffff;
  local_var_46 = 0;
  local_var_44 = 0xffffffff;
  local_var_40 = 1;
  local_var_38 = 0;
  lStack_30 = 0;
  local_var_28 = 0;
  local_var_20 = 0;
  local_var_18 = 3;
  local_var_10 = 0;
  local_var_48 = (ushort)param_2;
  iVar1 = DataStructure_e7bc0(*(uint64_t *)(param_1 + 0x8a8),&local_var_58,0,param_4,0xfffffffffffffffe);
  if (lStack_30 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return iVar1 == 0;
}
// 函数: void UtilitiesSystem_074e0(int64_t param_1,uint param_2)
void UtilitiesSystem_074e0(int64_t param_1,uint param_2)
{
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  fStack_c = (float)(param_2 >> 0x18) * 0.003921569;
  fStack_18 = (float)(param_2 >> 0x10 & 0xff) * 0.003921569;
  fStack_14 = (float)(param_2 >> 8 & 0xff) * 0.003921569;
  fStack_10 = (float)(param_2 & 0xff) * 0.003921569;
  DataStructure_ec490(*(uint64_t *)(param_1 + 0x8a8),&fStack_18);
  return;
}
// 函数: void UtilitiesSystem_07590(int64_t param_1,char param_2)
void UtilitiesSystem_07590(int64_t param_1,char param_2)
{
  uint uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int iVar4;
  uint uVar5;
  int64_t lVar6;
  byte bVar7;
  char cVar8;
  int64_t lVar9;
  lVar6 = *(int64_t *)(param_1 + 0x8a8);
  uVar1 = *(uint *)(lVar6 + 0x2ac);
  if (param_2 == '\0') {
    uVar5 = uVar1 | 0x200;
  }
  else {
    uVar5 = uVar1 & 0xfffffdff;
  }
  *(uint *)(lVar6 + 0x2ac) = uVar5;
  DataStructure_ee810(lVar6,uVar1);
  lVar2 = *(int64_t *)(lVar6 + 0x260);
  if ((lVar2 != 0) && (((*(uint *)(lVar6 + 0x2ac) ^ uVar1) >> 0x16 & 1) != 0)) {
    bVar7 = ~(byte)(*(uint *)(lVar6 + 0x2ac) >> 0x16) & 1;
    iVar4 = (int)(*(int64_t *)(lVar2 + 0x1b0) - *(int64_t *)(lVar2 + 0x1a8) >> 3);
    if (0 < iVar4) {
      lVar6 = 0;
      do {
        plVar3 = *(int64_t **)(*(int64_t *)(lVar2 + 0x1a8) + lVar6 * 8);
        (**(code **)(*plVar3 + 0xe0))(plVar3,bVar7);
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar4);
    }
    cVar8 = '\0';
    if ('\0' < *(char *)(lVar2 + 0x20)) {
      do {
        lVar6 = 0;
        lVar9 = (int64_t)cVar8 * 0x100 + *(int64_t *)(lVar2 + 0x18);
        iVar4 = (int)(*(int64_t *)(lVar9 + 0xb8) - *(int64_t *)(lVar9 + 0xb0) >> 3);
        if (0 < iVar4) {
          do {
            plVar3 = *(int64_t **)(*(int64_t *)(lVar9 + 0xb0) + lVar6 * 8);
            (**(code **)(*plVar3 + 0xe0))(plVar3,bVar7);
            lVar6 = lVar6 + 1;
          } while (lVar6 < iVar4);
        }
        cVar8 = cVar8 + '\x01';
      } while (cVar8 < *(char *)(lVar2 + 0x20));
    }
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x0001806076a0)
// WARNING: Removing unreachable block (ram,0x0001806076b0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_075e0(int64_t *param_1)
void UtilitiesSystem_075e0(int64_t *param_1)
{
  int64_t **pplVar1;
  int64_t **pplVar2;
  int64_t **pplStackX_8;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  int64_t **pplStackX_20;
  uint64_t uVar3;
  int64_t *aplStack_48 [2];
  code *pcStack_38;
  code *pcStack_30;
  uVar3 = 0xfffffffffffffffe;
  plStackX_18 = param_1;
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  uVar3 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3,uVar3);
  pplStackX_20 = aplStack_48;
  pplStackX_8 = &plStackX_10;
  plStackX_10 = param_1;
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  pcStack_30 = UtilitiesSystem_07a90;
  pcStack_38 = UtilitiesSystem_07b10;
  aplStack_48[0] = plStackX_10;
  plStackX_10 = (int64_t *)0x0;
  pplStackX_8 = (int64_t **)0x0;
  pplVar2 = (int64_t **)SystemCore_ErrorHandler(uVar3,aplStack_48);
  pplVar1 = pplVar2;
  pplStackX_20 = pplVar2;
  uVar3 = system_context_ptr;
  if (pplVar2 != (int64_t **)0x0) {
    (*(code *)(*pplVar2)[5])(pplVar2);
    uVar3 = system_context_ptr;
    pplStackX_8 = pplVar2;
    (*(code *)(*pplVar2)[5])(pplVar2);
    pplVar1 = pplStackX_8;
  }
  pplStackX_8 = pplVar1;
  GenericFunction_18005e300(uVar3,&pplStackX_8);
  if (pplVar2 != (int64_t **)0x0) {
    (*(code *)(*pplVar2)[7])(pplVar2);
  }
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return;
}
// 函数: void UtilitiesSystem_07730(int64_t param_1)
void UtilitiesSystem_07730(int64_t param_1)
{
  int64_t lStack_28;
  int32_t local_var_20;
  int8_t stack_array_18 [16];
  if (*(char *)(param_1 + 0x8be) != '\0') {
    NetworkSystem_3fcb0(param_1,1);
    local_var_20 = *(int32_t *)(param_1 + 0x938);
    lStack_28 = param_1;
    UISystem_dd4d0(*(int64_t *)(param_1 + 0x930) + 0x2b58,stack_array_18,&lStack_28);
  }
  return;
}