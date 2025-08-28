#include "CoreSystem_ValidationEngine0_definition.h"
#include "SystemDataAdvancedValidator_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part039.c - 1 个函数
// 函数: void GenericFunction_18007959e(void)
void GenericFunction_18007959e(void)
{
  return;
}
int8_t GenericFunction_1800795a4(void)
{
  int8_t *puVar1;
  int8_t uVar2;
  int64_t lVar3;
  int64_t unaff_RBX;
  int unaff_ESI;
  int64_t unaff_RDI;
  do {
    Sleep(0);
    while ((*(char *)(*(int64_t *)(unaff_RBX + 0x1e0) + 0x15 + unaff_RDI) != '\x02' &&
           (*(char *)(*(int64_t *)(unaff_RBX + 0x1e0) + 0x15 + unaff_RDI) != '\x01'))) {
      lVar3 = (int64_t)unaff_ESI;
      unaff_RDI = unaff_RDI + 0x18;
      unaff_ESI = unaff_ESI + 1;
      LOCK();
      puVar1 = (int8_t *)(*(int64_t *)(unaff_RBX + 0x1e0) + lVar3 * 0x18 + 0x15);
      uVar2 = *puVar1;
      *puVar1 = 0;
      UNLOCK();
      if (0xf < unaff_ESI) {
        return uVar2;
      }
    }
  } while( true );
}
// WARNING: Removing unreachable block (ram,0x000180079699)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
float * GenericFunction_1800795b0(float *param_1)
{
  float *pfVar1;
  byte bVar2;
  int64_t *plVar3;
  float *pfVar4;
  char cVar5;
  float fVar6;
  float *pfVar7;
  uint uVar8;
  uint64_t uVar9;
  bool bVar10;
  float fVar11;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int32_t local_var_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  int32_t local_var_9c;
  float *pfStack_98;
  int32_t local_var_90;
  int64_t lStack_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  void *plocal_var_58;
  float fStack_50;
  float fStack_4c;
  void *plocal_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  int8_t stack_array_30 [8];
  float *pfStack_28;
  int32_t local_var_20;
  local_var_38 = 0xfffffffffffffffe;
  if (((uint)param_1[0x40] & 0x10000) == 0) {
    stack_array_30[0] = 0;
    local_var_20 = 0;
    local_var_80 = 0x1800795fa;
    pfStack_28 = param_1;
    CoreEngine_07F4C0(stack_array_30);
    local_var_80 = 0x180079605;
    fVar6 = (float)DataStructure_349a0(0);
    if ((10 < (int)fVar6) ||
       ((int)(*(int *)(*(int64_t *)(param_1 + 0x84) + 0x88) +
             (*(int *)(*(int64_t *)(param_1 + 0x84) + 0x88) >> 0x1f & 3U)) >> 2 < (int)fVar6)) {
      plocal_var_48 = &system_buffer_ptr;
      if (*(void **)(param_1 + 6) != (void *)0x0) {
        plocal_var_48 = *(void **)(param_1 + 6);
      }
      local_var_40 = CONCAT44(local_var_40._4_4_,*(int32_t *)(*(int64_t *)(param_1 + 0x84) + 0x60));
      plocal_var_58 = &processed_var_5472_ptr;
      local_var_80 = 0x18007967a;
      fStack_50 = fVar6;
      SystemConfigurationManager(system_message_context,0,0x80000000000,3);
    }
    param_1[0x40] = (float)((uint)param_1[0x40] | 0x10000);
    local_var_80 = 0x18007968e;
    SystemSecurityManager(stack_array_30);
  }
  local_var_38 = 0xfffffffffffffffe;
  pfVar7 = param_1;
  if ((*(byte *)((int64_t)param_1 + 0xfd) & 0x20) == 0) {
    pfVar7 = (float *)Function_4c4a6726(*(uint64_t *)(param_1 + 0x6c));
  }
  if ((*(int64_t *)(pfVar7 + 0x84) != 0) && (((uint)param_1[0x40] & 0x80) == 0)) {
    pfVar1 = param_1 + 0x9d;
    pfVar1[0] = 1e+08;
    pfVar1[1] = 1e+08;
    param_1[0x9f] = 1e+08;
    param_1[0xa0] = 3.4028235e+38;
    param_1[0xa1] = -1e+08;
    param_1[0xa2] = -1e+08;
    param_1[0xa3] = -1e+08;
    param_1[0xa4] = 3.4028235e+38;
    uVar8 = 0;
    param_1[0xa9] = 0.0;
    param_1[0xa5] = 0.0;
    param_1[0xa6] = 0.0;
    param_1[0xa7] = 0.0;
    param_1[0xa8] = 3.4028235e+38;
    local_var_90 = 0;
    pfStack_98 = pfVar7;
    CoreEngine_07F770(&pfStack_98);
    if (*(int *)(lStack_88 + 0x10) != 0) {
      do {
        pfVar7 = (float *)((int64_t)(int)uVar8 * 0x10 + *(int64_t *)(lStack_88 + 0x18));
        fStack_a8 = *pfVar7;
        if (*pfVar1 < fStack_a8) {
          fStack_a8 = *pfVar1;
        }
        fStack_a4 = pfVar7[1];
        if (param_1[0x9e] < fStack_a4) {
          fStack_a4 = param_1[0x9e];
        }
        fStack_a0 = pfVar7[2];
        if (param_1[0x9f] < fStack_a0) {
          fStack_a0 = param_1[0x9f];
        }
        *(uint64_t *)pfVar1 = CONCAT44(fStack_a4,fStack_a8);
        *(uint64_t *)(param_1 + 0x9f) = CONCAT44(local_var_9c,fStack_a0);
        fStack_b8 = *pfVar7;
        if (fStack_b8 < param_1[0xa1]) {
          fStack_b8 = param_1[0xa1];
        }
        fStack_b4 = pfVar7[1];
        if (fStack_b4 < param_1[0xa2]) {
          fStack_b4 = param_1[0xa2];
        }
        fStack_b0 = pfVar7[2];
        if (fStack_b0 < param_1[0xa3]) {
          fStack_b0 = param_1[0xa3];
        }
        *(uint64_t *)(param_1 + 0xa1) = CONCAT44(fStack_b4,fStack_b8);
        *(uint64_t *)(param_1 + 0xa3) = CONCAT44(local_var_ac,fStack_b0);
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(lStack_88 + 0x10));
    }
    pfVar7 = *(float **)(param_1 + 0x6e);
    if ((pfVar7 != (float *)0x0) && (((uint)pfVar7[0x4e] & 0x3000) != 0)) {
      local_var_78 = *(uint64_t *)(param_1 + 0x48);
      local_var_70 = *(uint64_t *)(param_1 + 0x4a);
      local_var_68 = *(uint64_t *)(param_1 + 0x4c);
      local_var_60 = *(uint64_t *)(param_1 + 0x4e);
      plocal_var_58 = *(void **)(param_1 + 0x50);
      fStack_50 = param_1[0x52];
      fStack_4c = param_1[0x53];
      plocal_var_48 = *(void **)(param_1 + 0x54);
      local_var_40 = *(uint64_t *)(param_1 + 0x56);
      GenericFunction_180085c10(&local_var_78);
      UI_WidgetHandler(pfVar1,pfVar1,&local_var_78);
      pfVar7 = *(float **)(param_1 + 0x6e);
      if (((uint)pfVar7[0x4e] & 0x3000) == 0x2000) {
        local_var_78 = *(uint64_t *)(param_1 + 0x48);
        local_var_70 = *(uint64_t *)(param_1 + 0x4a);
        local_var_68 = *(uint64_t *)(param_1 + 0x4c);
        local_var_60 = *(uint64_t *)(param_1 + 0x4e);
        plocal_var_58 = *(void **)(param_1 + 0x50);
        fStack_50 = param_1[0x52];
        fStack_4c = param_1[0x53];
        plocal_var_48 = *(void **)(param_1 + 0x54);
        local_var_40 = *(uint64_t *)(param_1 + 0x56);
        GenericFunction_180085ac0(&local_var_78,0x3fc90fdb);
        UI_WidgetHandler(pfVar1,pfVar1,&local_var_78);
        local_var_78 = *(uint64_t *)(param_1 + 0x48);
        local_var_70 = *(uint64_t *)(param_1 + 0x4a);
        local_var_68 = *(uint64_t *)(param_1 + 0x4c);
        local_var_60 = *(uint64_t *)(param_1 + 0x4e);
        plocal_var_58 = *(void **)(param_1 + 0x50);
        fStack_50 = param_1[0x52];
        fStack_4c = param_1[0x53];
        plocal_var_48 = *(void **)(param_1 + 0x54);
        local_var_40 = *(uint64_t *)(param_1 + 0x56);
        GenericFunction_180085970(&local_var_78);
        pfVar7 = (float *)UI_WidgetHandler(pfVar1,pfVar1,&local_var_78);
      }
    }
    pfVar4 = pfStack_98;
    if (param_1[0xa1] < *pfVar1) {
      param_1[0xa9] = 0.0;
      pfVar1[0] = 0.0;
      pfVar1[1] = 0.0;
      param_1[0x9f] = 0.0;
      param_1[0xa0] = 0.0;
      param_1[0xa1] = 0.0;
      param_1[0xa2] = 0.0;
      param_1[0xa3] = 0.0;
      param_1[0xa4] = 0.0;
      param_1[0xa5] = 0.0;
      param_1[0xa6] = 0.0;
      param_1[0xa7] = 0.0;
      param_1[0xa8] = 0.0;
    }
    else {
      param_1[0xa5] = (param_1[0xa1] + *pfVar1) * 0.5;
      param_1[0xa6] = (param_1[0xa2] + param_1[0x9e]) * 0.5;
      param_1[0xa7] = (param_1[0xa3] + param_1[0x9f]) * 0.5;
      param_1[0xa8] = 3.4028235e+38;
      fVar6 = 0.0;
      uVar9 = (uint64_t)*(uint *)(lStack_88 + 0x10);
      if (0 < (int)*(uint *)(lStack_88 + 0x10)) {
        pfVar7 = *(float **)(lStack_88 + 0x18);
        fVar11 = fVar6;
        do {
          fVar6 = (*pfVar7 - param_1[0xa5]) * (*pfVar7 - param_1[0xa5]) +
                  (pfVar7[1] - param_1[0xa6]) * (pfVar7[1] - param_1[0xa6]) +
                  (pfVar7[2] - param_1[0xa7]) * (pfVar7[2] - param_1[0xa7]);
          if (fVar6 <= fVar11) {
            fVar6 = fVar11;
          }
          pfVar7 = pfVar7 + 4;
          uVar9 = uVar9 - 1;
          fVar11 = fVar6;
        } while (uVar9 != 0);
      }
      param_1[0xa9] = SQRT(fVar6);
    }
    if (pfStack_98 != (float *)0x0) {
      while( true ) {
        LOCK();
        cVar5 = *(char *)(pfVar4 + 0x3b);
        bVar10 = cVar5 == '\0';
        if (bVar10) {
          *(char *)(pfVar4 + 0x3b) = '\x01';
          cVar5 = '\0';
        }
        UNLOCK();
        if (bVar10) break;
        fVar6 = (float)_Thrd_id();
        if ((pfVar4[0x3c] == fVar6) || (pfVar4[0x3c] != 0.0)) goto LAB_180075f4f;
        Sleep();
      }
      cVar5 = '\0';
LAB_180075f4f:
      LOCK();
      pfVar1 = pfVar4 + 0x3a;
      fVar6 = *pfVar1;
      pfVar7 = (float *)(uint64_t)(uint)fVar6;
      *pfVar1 = (float)((int)*pfVar1 + -1);
      UNLOCK();
      if (cVar5 == '\0') {
        if ((((fVar6 == 1.4013e-45) && (*(int64_t *)(pfStack_98 + 0x84) != 0)) &&
            (pfVar7 = pfStack_98, GenericFunction_1800791a0(pfStack_98), *(char *)(pfVar7 + 0x3f) == '\0')) &&
           ((*(char *)(pfVar7 + 0x3d) == '\0' &&
            (((*(byte *)((int64_t)pfVar7 + 0xfd) & 0x20) == 0 ||
             ((*(byte *)((int64_t)pfVar7 + 0xfe) & 1) == 0)))))) {
          plVar3 = *(int64_t **)(pfVar7 + 0x84);
          pfVar7[0x84] = 0.0;
          pfVar7[0x85] = 0.0;
          if (plVar3 != (int64_t *)0x0) {
            (**(code **)(*plVar3 + 0x38))();
          }
        }
        LOCK();
        bVar2 = *(byte *)(pfVar4 + 0x3b);
        *(byte *)(pfVar4 + 0x3b) = 0;
        pfVar7 = (float *)(uint64_t)bVar2;
        UNLOCK();
      }
    }
  }
  return pfVar7;
}
// WARNING: Removing unreachable block (ram,0x0001800797c0)
// WARNING: Removing unreachable block (ram,0x0001800797c8)
// WARNING: Removing unreachable block (ram,0x0001800797cd)
// WARNING: Removing unreachable block (ram,0x0001800797dd)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address