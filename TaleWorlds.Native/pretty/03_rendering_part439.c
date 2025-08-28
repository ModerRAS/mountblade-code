#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part439.c - 5 个函数
// 函数: void NetworkSystem_09f20(int64_t param_1,uint64_t *param_2,uint *param_3)
void NetworkSystem_09f20(int64_t param_1,uint64_t *param_2,uint *param_3)
{
  uint uVar1;
  float *pfVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int32_t uVar5;
  int32_t uVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int64_t *plVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  int32_t uVar20;
  float fVar21;
  uint64_t stack_special_x_8;
  uint64_t stack_special_x_18;
  float fStack_2d0;
  uint64_t local_var_2c8;
  uint64_t local_var_2c0;
  uint64_t local_var_2b8;
  int32_t local_var_2b0;
  int32_t local_var_2ac;
  int32_t local_var_2a8;
  int32_t local_var_2a4;
  int32_t local_var_2a0;
  int32_t local_var_29c;
  int32_t local_var_298;
  int32_t local_var_294;
  uint64_t local_var_290;
  int32_t local_var_288;
  uint64_t local_var_280;
  uint64_t local_var_278;
  uint64_t local_var_270;
  int32_t local_var_254;
  uint64_t local_var_23c;
  uint64_t local_var_218;
  uint64_t local_var_210;
  uint64_t local_var_1c0;
  local_var_280 = 0xfffffffffffffffe;
  uVar10 = GenericFunction_1801b4cd0(*(uint64_t *)(*(int64_t *)(param_1 + 0x8d8) + 0x18));
  fStack_2d0 = *(float *)(param_2 + 1);
  uVar20 = *(int32_t *)((int64_t)param_2 + 0xc);
  uVar14 = *param_2;
  stack_special_x_8 = uVar14;
  cVar7 = UtilitiesSystem_3e7e0(uVar10,param_2);
  if (cVar7 == '\0') {
    UtilitiesSystem_3ee10(uVar10,param_2,&stack_special_x_8);
    uVar14 = stack_special_x_8;
  }
  if (-100.0 <= fStack_2d0) {
    if (2521.0 <= fStack_2d0) {
      fStack_2d0 = 2521.0;
    }
  }
  else {
    fStack_2d0 = -100.0;
  }
  local_var_278 = 0;
  local_var_270 = 0;
  local_var_23c = 0;
  local_var_1c0 = 0;
  Function_887be345(&local_var_278);
  lVar3 = *(int64_t *)(param_1 + 0x6d8);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x8be) != '\0')) {
    Function_d173edf4(lVar3,param_1 + 0x520,*(int32_t *)(lVar3 + 0x8c0));
  }
  NetworkSystem_a3a20(param_1 + 0x28);
  NetworkSystem_af0d0(&local_var_278,param_1,1);
  lVar3 = *(int64_t *)(param_1 + 0x20);
  lVar12 = *(int64_t *)(param_1 + 0x8d8);
  *(uint64_t *)(lVar3 + 0xc) = uVar14;
  *(uint64_t *)(lVar3 + 0x14) = CONCAT44(uVar20,fStack_2d0);
  *(int8_t *)(lVar3 + 0xd4) = 0;
  *(int32_t *)(lVar3 + 0xb0) = 0;
  *(int32_t *)(lVar3 + 0xb4) = 0;
  *(int32_t *)(lVar3 + 0xb8) = 0x3f800000;
  *(int32_t *)(lVar3 + 0xbc) = 0x7f7fffff;
  uVar15 = 0;
  uVar13 = 0;
  *(int32_t *)(lVar3 + 0xd0) = 0;
  *(uint64_t *)(lVar3 + 0xc0) = 0;
  *(uint64_t *)(lVar3 + 200) = 0;
  uVar14 = *(uint64_t *)(lVar3 + 0xc);
  uVar10 = *(uint64_t *)(lVar3 + 0x14);
  cVar7 = '\0';
  uVar11 = uVar15;
  do {
    if (99 < (int)uVar11) break;
    uVar18 = (int)uVar11 + 1;
    uVar11 = (uint64_t)uVar18;
    if (uVar18 == 0x32) {
      *(uint64_t *)(lVar3 + 0xc) = uVar14;
      *(uint64_t *)(lVar3 + 0x14) = uVar10;
    }
    PhysicsSystem_JointManager(*(uint64_t *)(lVar12 + 0x18),lVar3 + 0xc,0,lVar3 + 0xa0,0x51b189,
                  (byte)((uint)local_var_254 >> 8) & 1);
    cVar8 = *(char *)(lVar3 + 0xd4);
    if (cVar8 == '\0') {
      uVar18 = *(uint *)(param_1 + 0x748) << 0xd ^ *(uint *)(param_1 + 0x748);
      uVar18 = uVar18 >> 0x11 ^ uVar18;
      uVar18 = uVar18 << 5 ^ uVar18;
      *(uint *)(param_1 + 0x748) = uVar18;
      *(float *)(lVar3 + 0xc) =
           ((float)(uVar18 - 1) * 2.3283064e-12 + *(float *)(lVar3 + 0xc)) - 0.005;
      uVar18 = *(uint *)(param_1 + 0x748) << 0xd ^ *(uint *)(param_1 + 0x748);
      uVar18 = uVar18 >> 0x11 ^ uVar18;
      uVar18 = uVar18 << 5 ^ uVar18;
      *(uint *)(param_1 + 0x748) = uVar18;
      *(float *)(lVar3 + 0x10) =
           ((float)(uVar18 - 1) * 2.3283064e-12 + *(float *)(lVar3 + 0x10)) - 0.005;
      cVar8 = *(char *)(lVar3 + 0xd4);
      cVar7 = cVar8;
    }
    else {
      cVar7 = *(char *)(lVar3 + 0xd4);
    }
  } while (cVar8 == '\0');
  if (((local_var_218 | local_var_210) >> 9 & 1) == 0) {
    *(int32_t *)(lVar3 + 0x14) = *(int32_t *)(lVar3 + 0xd0);
  }
  *(uint64_t *)(lVar3 + 0x68) = *(uint64_t *)(lVar3 + 0xb0);
  *(uint64_t *)(lVar3 + 0x70) = *(uint64_t *)(lVar3 + 0xb8);
  *(uint64_t *)(lVar3 + 0xf8) = *(uint64_t *)(lVar3 + 0xc);
  *(uint64_t *)(lVar3 + 0x100) = *(uint64_t *)(lVar3 + 0x14);
  *(int32_t *)(lVar3 + 0x78) = *(int32_t *)(lVar3 + 0x108);
  uVar20 = atan2f(*param_3 ^ 0x80000000,param_3[1]);
  *(int32_t *)(lVar3 + 0x34) = uVar20;
  pfVar2 = (float *)(lVar3 + 0x178);
  *pfVar2 = *(float *)(lVar3 + 0xc);
  *(int32_t *)(lVar3 + 0x17c) = *(int32_t *)(lVar3 + 0x10);
  *(int32_t *)(lVar3 + 0x180) = *(int32_t *)(lVar3 + 0x14);
  *(int32_t *)(lVar3 + 0x184) = *(int32_t *)(lVar3 + 0x18);
  if (((cVar7 != '\0') && (*(int64_t *)(lVar3 + 0xc0) != 0)) &&
     (*(int64_t *)(*(int64_t *)(lVar3 + 0xc0) + 0x10) != 0)) {
    *(int8_t *)(param_1 + 0x418) = 0;
    uVar11 = uVar15;
    if (*(int64_t *)(lVar3 + 0xc0) != 0) {
      uVar11 = *(uint64_t *)(*(int64_t *)(lVar3 + 0xc0) + 0x10);
    }
    uVar14 = *(uint64_t *)(uVar11 + 0x78);
    *(uint64_t *)(param_1 + 0x41c) = *(uint64_t *)(uVar11 + 0x70);
    *(uint64_t *)(param_1 + 0x424) = uVar14;
    uVar14 = *(uint64_t *)(uVar11 + 0x88);
    *(uint64_t *)(param_1 + 0x42c) = *(uint64_t *)(uVar11 + 0x80);
    *(uint64_t *)(param_1 + 0x434) = uVar14;
    uVar14 = *(uint64_t *)(uVar11 + 0x98);
    *(uint64_t *)(param_1 + 0x43c) = *(uint64_t *)(uVar11 + 0x90);
    *(uint64_t *)(param_1 + 0x444) = uVar14;
    uVar14 = *(uint64_t *)(uVar11 + 0xa8);
    *(uint64_t *)(param_1 + 0x44c) = *(uint64_t *)(uVar11 + 0xa0);
    *(uint64_t *)(param_1 + 0x454) = uVar14;
    uVar14 = *(uint64_t *)(uVar11 + 0x78);
    *(uint64_t *)(param_1 + 0x45c) = *(uint64_t *)(uVar11 + 0x70);
    *(uint64_t *)(param_1 + 0x464) = uVar14;
    uVar14 = *(uint64_t *)(uVar11 + 0x88);
    *(uint64_t *)(param_1 + 0x46c) = *(uint64_t *)(uVar11 + 0x80);
    *(uint64_t *)(param_1 + 0x474) = uVar14;
    uVar20 = *(int32_t *)(uVar11 + 0x94);
    uVar5 = *(int32_t *)(uVar11 + 0x98);
    uVar6 = *(int32_t *)(uVar11 + 0x9c);
    *(int32_t *)(param_1 + 0x47c) = *(int32_t *)(uVar11 + 0x90);
    *(int32_t *)(param_1 + 0x480) = uVar20;
    *(int32_t *)(param_1 + 0x484) = uVar5;
    *(int32_t *)(param_1 + 0x488) = uVar6;
    uVar14 = *(uint64_t *)(uVar11 + 0xa8);
    *(uint64_t *)(param_1 + 0x48c) = *(uint64_t *)(uVar11 + 0xa0);
    *(uint64_t *)(param_1 + 0x494) = uVar14;
  }
  if (((*(int64_t *)(param_1 + 0x6d8) != 0) &&
      (*(char *)(*(int64_t *)(param_1 + 0x6d8) + 0x8be) != '\0')) &&
     ((*(uint *)(param_1 + 0x56c) & 0x800) != 0)) {
    lVar12 = *(int64_t *)(param_1 + 0x728);
    *(int32_t *)(lVar12 + 0x80) = 0;
    *(int32_t *)(lVar12 + 0x84) = 0;
    *(int32_t *)(lVar12 + 0x88) = 0;
    *(int32_t *)(lVar12 + 0x8c) = 0;
    SystemFunction_000180577960(*(uint64_t *)(param_1 + 0x590),*(int64_t *)(param_1 + 0x20) + 0xc);
  }
  NetworkSystem_1b660(param_1);
  if (*(int *)(param_1 + 0x6a0) < 0) {
    lVar12 = *(int64_t *)(param_1 + 0x8d8);
    fVar21 = (*pfVar2 - *(float *)(lVar12 + 0x98d230)) * *(float *)(lVar12 + 0x98d244);
    if (fVar21 <= 0.0) {
      fVar21 = fVar21 - 0.9999999;
    }
    uVar18 = (uint)fVar21;
    fVar21 = *(float *)(lVar12 + 0x98d244) *
             (*(float *)(lVar3 + 0x17c) - *(float *)(lVar12 + 0x98d234));
    if (fVar21 <= 0.0) {
      fVar21 = fVar21 - 0.9999999;
    }
    iVar9 = (int)fVar21;
    uVar1 = *(int *)(lVar12 + 0x98d238) - 1;
    if ((-1 < (int)uVar18) && (uVar13 = uVar18, (int)uVar1 < (int)uVar18)) {
      uVar13 = uVar1;
    }
    iVar17 = *(int *)(lVar12 + 0x98d23c) + -1;
    if (iVar9 < 0) {
      iVar9 = 0;
      stack_special_x_18 = (uint64_t)uVar13;
    }
    else {
      if (iVar17 < iVar9) {
        iVar9 = iVar17;
      }
      stack_special_x_18 = CONCAT44(iVar9,uVar13);
    }
    plVar16 = (int64_t *)
              ((int64_t)(int)(iVar9 * *(int *)(lVar12 + 0x98d238) + uVar13) * 9 +
              *(int64_t *)(lVar12 + 0x98d248));
    *(uint64_t *)(param_1 + 0x698) = *(uint64_t *)pfVar2;
    *(uint64_t *)(param_1 + 0x6a0) = stack_special_x_18;
    plVar4 = plVar16 + 1;
    do {
      do {
      } while ((char)*plVar4 != '\0');
      LOCK();
      bVar19 = (char)*plVar4 == '\0';
      if (bVar19) {
        *(int8_t *)plVar4 = 1;
      }
      UNLOCK();
    } while (!bVar19);
    *(int64_t *)(param_1 + 0x6a8) = *plVar16;
    *plVar16 = param_1 + 0x690;
    *(int8_t *)plVar4 = 0;
    plVar4 = *(int64_t **)(*(int64_t *)(param_1 + 0x8d8) + 0x98d250);
    (**(code **)(*plVar4 + 8))(plVar4,param_1,pfVar2);
  }
  else {
    NetworkSystem_31590(*(int64_t *)(param_1 + 0x8d8) + 0x98d230,param_1 + 0x690,pfVar2);
    plVar4 = *(int64_t **)(*(int64_t *)(param_1 + 0x8d8) + 0x98d250);
    (**(code **)(*plVar4 + 0x10))(plVar4,param_1,pfVar2);
  }
  *(uint64_t *)(param_1 + 0x4c4) = 0;
  *(uint64_t *)(param_1 + 0x4cc) = 0;
  *(uint64_t *)(param_1 + 0x49c) = *(uint64_t *)param_3;
  *(int32_t *)(param_1 + 0x4a4) = 0;
  uVar20 = atan2f(*param_3 ^ 0x80000000,param_3[1]);
  *(int32_t *)(param_1 + 0x4ac) = uVar20;
  *(int8_t *)(param_1 + 0x4d4) = 0;
  *(uint64_t *)(param_1 + 0x4b0) = 0;
  *(uint64_t *)(param_1 + 0x4b8) = 0;
  *(int32_t *)(param_1 + 0x4c0) = 0xffffffff;
  NetworkSystem_24d80(param_1);
  if ((*(int *)(param_1 + 0x570) == 1) && (lVar3 = *(int64_t *)(param_1 + 0x6e0), lVar3 != 0)) {
    uVar11 = *(uint64_t *)(param_1 + 0x9d8);
    lVar12 = *(int64_t *)(param_1 + 0x20);
    if ((uVar11 == 0) ||
       (cVar7 = SystemCore_PerformanceMonitor(uVar11,lVar12 + 0xc), local_var_2c0 = uVar11, cVar7 == '\0')) {
      local_var_2c0 = uVar15;
    }
    local_var_2c8 = *(uint64_t *)(*(int64_t *)(param_1 + 0x8d8) + 0x18);
    local_var_2b0 = *(int32_t *)(lVar12 + 0xc);
    local_var_2ac = *(int32_t *)(lVar12 + 0x10);
    local_var_290 = *(uint64_t *)(lVar12 + 0xc);
    local_var_2a8 = *(int32_t *)(lVar12 + 0x14);
    local_var_2a4 = *(int32_t *)(lVar12 + 0x18);
    local_var_2a0 = *(int32_t *)(lVar12 + 0xb0);
    local_var_29c = *(int32_t *)(lVar12 + 0xb4);
    local_var_298 = *(int32_t *)(lVar12 + 0xb8);
    local_var_294 = *(int32_t *)(lVar12 + 0xbc);
    local_var_288 = 3;
    local_var_2b8 = uVar11;
    Function_c170cfaa(lVar3 + 0x178,&local_var_2c8);
  }
  lVar3 = *(int64_t *)(param_1 + 0x6d8);
  if ((((lVar3 != 0) && (*(char *)(lVar3 + 0x8be) != '\0')) && (*(int64_t *)(lVar3 + 0x8a8) != 0))
     && ((lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x8a8) + 0x260), lVar3 != 0 &&
         (lVar12 = *(int64_t *)(lVar3 + 0x1a8), uVar11 = uVar15,
         *(int64_t *)(lVar3 + 0x1b0) - lVar12 >> 3 != 0)))) {
    do {
      iVar9 = (**(code **)(**(int64_t **)(uVar11 + lVar12) + 0x98))();
      if (iVar9 == 3) {
        *(int8_t *)(*(int64_t *)(*(int64_t *)(lVar3 + 0x1a8) + uVar11) + 0x44) = 1;
      }
      uVar13 = (int)uVar15 + 1;
      uVar15 = (uint64_t)uVar13;
      lVar12 = *(int64_t *)(lVar3 + 0x1a8);
      uVar11 = uVar11 + 8;
    } while ((uint64_t)(int64_t)(int)uVar13 <
             (uint64_t)(*(int64_t *)(lVar3 + 0x1b0) - lVar12 >> 3));
  }
  return;
}
float * NetworkSystem_0a660(int64_t param_1,float *param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int64_t lVar5;
  float fVar6;
  int8_t stack_array_58 [16];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  NetworkSystem_0a770(param_1,stack_array_58);
  lVar5 = *(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8);
  fVar1 = *(float *)(*(int64_t *)(param_1 + 0x6d8) + 0x8c0);
  fVar6 = ABS(*(float *)(*(int64_t *)(param_1 + 0x590) + 0x2590));
  param_2[3] = 3.4028235e+38;
  fStack_28 = fStack_28 - fStack_48 * 0.45 * fVar6 * fVar1;
  fStack_24 = fStack_24 - fStack_44 * 0.45 * fVar6 * fVar1;
  fVar2 = *(float *)(lVar5 + 0x70);
  fVar3 = *(float *)(lVar5 + 0x80);
  fVar4 = *(float *)(lVar5 + 0xa0);
  param_2[1] = fStack_24 * *(float *)(lVar5 + 0x84) + fStack_28 * *(float *)(lVar5 + 0x74) +
               *(float *)(lVar5 + 0xa4);
  *param_2 = fStack_24 * fVar3 + fStack_28 * fVar2 + fVar4;
  param_2[2] = (fStack_20 - fStack_40 * 0.45 * fVar6 * fVar1) * *(float *)(lVar5 + 0x98) +
               *(float *)(lVar5 + 0xa8);
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_0a770(int64_t param_1,uint64_t *param_2)
void NetworkSystem_0a770(int64_t param_1,uint64_t *param_2)
{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  uint *puVar9;
  int8_t stack_array_d8 [32];
  int8_t stack_array_b8 [16];
  uint local_var_a8;
  uint local_var_a4;
  uint local_var_a0;
  uint local_var_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
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
  uint local_var_58;
  uint local_var_54;
  uint local_var_50;
  uint local_var_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint local_var_3c;
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_d8;
  puVar9 = (uint *)((int64_t)
                    *(char *)(*(int64_t *)
                               (*(int64_t *)
                                 (*(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8) + 0x260) +
                               0x210) + 0xde) * 0x100 +
                   *(int64_t *)(*(int64_t *)(param_1 + 0x658) + 0x18));
  do {
    LOCK();
    uVar1 = *puVar9;
    *puVar9 = *puVar9 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  local_var_a8 = puVar9[1];
  local_var_a4 = puVar9[2];
  local_var_a0 = puVar9[3];
  local_var_9c = puVar9[4];
  fVar5 = (float)puVar9[5];
  fVar6 = (float)puVar9[6];
  fVar7 = (float)puVar9[7];
  local_var_8c = puVar9[8];
  *puVar9 = 0;
  fStack_98 = fVar5;
  fStack_94 = fVar6;
  fStack_90 = fVar7;
  local_var_58 = local_var_a8;
  local_var_54 = local_var_a4;
  local_var_50 = local_var_a0;
  local_var_4c = local_var_9c;
  fStack_48 = fVar5;
  fStack_44 = fVar6;
  fStack_40 = fVar7;
  local_var_3c = local_var_8c;
  pfVar8 = (float *)SystemFileHandler(&local_var_a8,stack_array_b8,param_1 + 0x8a0);
  fVar2 = *pfVar8;
  fVar3 = pfVar8[1];
  fVar4 = pfVar8[2];
  local_var_8c = 0x7f7fffff;
  fStack_98 = fVar5 + fVar2;
  fStack_94 = fVar6 + fVar3;
  fStack_90 = fVar7 + fVar4;
  SystemSecurityManager(&local_var_88,&local_var_a8);
  *param_2 = local_var_88;
  param_2[1] = local_var_80;
  *(int32_t *)(param_2 + 2) = local_var_78;
  *(int32_t *)((int64_t)param_2 + 0x14) = local_var_74;
  *(int32_t *)(param_2 + 3) = local_var_70;
  *(int32_t *)((int64_t)param_2 + 0x1c) = local_var_6c;
  *(int32_t *)(param_2 + 4) = local_var_68;
  *(int32_t *)((int64_t)param_2 + 0x24) = local_var_64;
  *(int32_t *)(param_2 + 5) = local_var_60;
  *(int32_t *)((int64_t)param_2 + 0x2c) = local_var_5c;
  *(float *)(param_2 + 6) = fVar5 + fVar2;
  *(float *)((int64_t)param_2 + 0x34) = fVar6 + fVar3;
  *(float *)(param_2 + 7) = fVar7 + fVar4;
  *(int32_t *)((int64_t)param_2 + 0x3c) = 0x7f7fffff;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_d8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_0a8c0(int64_t param_1)
void NetworkSystem_0a8c0(int64_t param_1)
{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int64_t lVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  int64_t lVar10;
  float *pfVar11;
  int64_t lVar12;
  uint *puVar13;
  int64_t lVar14;
  float fVar15;
  int32_t uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int32_t uVar20;
  float fVar21;
  float fVar22;
  int8_t stack_array_208 [32];
  float fStack_1e8;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  int32_t local_var_1d4;
  float fStack_1d0;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  uint local_var_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  int32_t local_var_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  int32_t local_var_19c;
  uint64_t local_var_198;
  uint64_t local_var_190;
  uint64_t local_var_188;
  uint64_t local_var_180;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  uint local_var_16c;
  int8_t stack_array_168 [16];
  uint64_t local_var_158;
  uint64_t local_var_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  uint local_var_13c;
  uint64_t local_var_138;
  uint64_t local_var_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint local_var_11c;
  uint64_t local_var_118;
  uint64_t local_var_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  uint local_var_fc;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint local_var_dc;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint local_var_bc;
  uint64_t local_var_b8;
  local_var_b8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_208;
  if ((*(uint *)(param_1 + 0x56c) & 0x800) == 0) {
    lVar14 = *(int64_t *)(param_1 + 0x6d8);
    fStack_1e8 = *(float *)(lVar14 + 0x8c0) * *(float *)(param_1 + 0x8c0);
  }
  else {
    if (*(int *)(param_1 + 0x564) < 0) {
      lVar10 = *(int64_t *)(param_1 + 0x590);
      lVar14 = *(int64_t *)(param_1 + 0x6d8);
      if ((*(byte *)(lVar10 + 0x3424) & 0x10) == 0) {
        fStack_1e8 = *(float *)(lVar14 + 0x8c0) * *(float *)(param_1 + 0x8c0);
      }
      else {
        fStack_1e8 = *(float *)(lVar14 + 0x8c0) * *(float *)(param_1 + 0x8c4);
      }
    }
    else {
      lVar12 = (int64_t)*(int *)(param_1 + 0x564) * 0xa60;
      lVar6 = *(int64_t *)(lVar12 + 0x3778 + *(int64_t *)(param_1 + 0x8d8));
      if ((lVar6 == 0) || (*(char *)(lVar6 + 0x8be) == '\0')) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      lVar14 = *(int64_t *)(param_1 + 0x6d8);
      if (bVar9) {
        lVar10 = *(int64_t *)(param_1 + 0x590);
        fStack_1e8 = *(float *)(lVar12 + 0x396c + *(int64_t *)(param_1 + 0x8d8)) *
                     *(float *)(lVar6 + 0x8c0) +
                     *(float *)(lVar14 + 0x8c0) * *(float *)(param_1 + 0x8c8);
      }
      else {
        lVar10 = *(int64_t *)(param_1 + 0x590);
        fStack_1e8 = *(float *)(lVar14 + 0x8c0) * *(float *)(param_1 + 0x8c0);
      }
    }
    if (-1 < *(char *)(lVar10 + 0x2601)) {
      puVar13 = (uint *)((int64_t)*(char *)(lVar10 + 0x2601) * 0x100 +
                        *(int64_t *)(*(int64_t *)(param_1 + 0x658) + 0x18));
      do {
        LOCK();
        uVar1 = *puVar13;
        *puVar13 = *puVar13 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      local_var_158 = *(uint64_t *)(puVar13 + 1);
      local_var_150 = *(uint64_t *)(puVar13 + 3);
      fStack_148 = (float)puVar13[5];
      fStack_144 = (float)puVar13[6];
      fStack_140 = (float)puVar13[7];
      local_var_13c = puVar13[8];
      *puVar13 = 0;
      lVar14 = *(int64_t *)(param_1 + 0x6d8);
      lVar10 = *(int64_t *)(lVar14 + 0x8a8);
      local_var_1ac = 0x7f7fffff;
      fStack_1b8 = fStack_144 * *(float *)(lVar10 + 0x80) + fStack_148 * *(float *)(lVar10 + 0x70) +
                   *(float *)(lVar10 + 0xa0);
      fStack_1b0 = fStack_140 * *(float *)(lVar10 + 0x98) + *(float *)(lVar10 + 0xa8);
      fStack_1b4 = fStack_148 * *(float *)(lVar10 + 0x74) + fStack_144 * *(float *)(lVar10 + 0x84) +
                   *(float *)(lVar10 + 0xa4);
      local_var_118 = local_var_158;
      local_var_110 = local_var_150;
      fStack_108 = fStack_148;
      fStack_104 = fStack_144;
      fStack_100 = fStack_140;
      local_var_fc = local_var_13c;
    }
  }
  cVar5 = *(char *)(*(int64_t *)(*(int64_t *)(*(int64_t *)(lVar14 + 0x8a8) + 0x260) + 0x210) +
                   0xe1);
  if (cVar5 < '\0') {
    fStack_1a8 = NAN;
    fStack_1a4 = NAN;
    fStack_1a0 = NAN;
    local_var_19c = 0x7fc00000;
    local_var_198 = 0xffc00000;
    local_var_190 = 0;
  }
  else {
    puVar13 = (uint *)((int64_t)cVar5 * 0x100 +
                      *(int64_t *)(*(int64_t *)(param_1 + 0x658) + 0x18));
    do {
      LOCK();
      uVar1 = *puVar13;
      *puVar13 = *puVar13 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    local_var_138 = *(uint64_t *)(puVar13 + 1);
    local_var_130 = *(uint64_t *)(puVar13 + 3);
    fStack_128 = (float)puVar13[5];
    fStack_124 = (float)puVar13[6];
    fStack_120 = (float)puVar13[7];
    local_var_11c = puVar13[8];
    *puVar13 = 0;
    lVar14 = *(int64_t *)(param_1 + 0x6d8);
    lVar10 = *(int64_t *)(lVar14 + 0x8a8);
    fStack_1e0 = fStack_124 * *(float *)(lVar10 + 0x80) + fStack_128 * *(float *)(lVar10 + 0x70) +
                 *(float *)(lVar10 + 0xa0);
    fStack_1dc = fStack_128 * *(float *)(lVar10 + 0x74) + fStack_124 * *(float *)(lVar10 + 0x84) +
                 *(float *)(lVar10 + 0xa4);
    fStack_1d8 = fStack_120 * *(float *)(lVar10 + 0x98) + *(float *)(lVar10 + 0xa8);
    local_var_198 = CONCAT44(fStack_120,fStack_120 * *(float *)(lVar14 + 0x8c0));
    local_var_190 = CONCAT44(fStack_120,fStack_120);
    local_var_19c = 0x7f7fffff;
    local_var_1d4 = 0x7f7fffff;
    fStack_1a8 = fStack_1e0;
    fStack_1a4 = fStack_1dc;
    fStack_1a0 = fStack_1d8;
    local_var_f8 = local_var_138;
    local_var_f0 = local_var_130;
    fStack_e8 = fStack_128;
    fStack_e4 = fStack_124;
    fStack_e0 = fStack_120;
    local_var_dc = local_var_11c;
  }
  uVar16 = 0x7fc00000;
  fVar21 = NAN;
  fVar22 = NAN;
  fVar15 = NAN;
  cVar5 = *(char *)(*(int64_t *)(*(int64_t *)(*(int64_t *)(lVar14 + 0x8a8) + 0x260) + 0x210) +
                   0xde);
  fVar17 = fVar15;
  fVar18 = fVar22;
  fVar19 = fVar21;
  uVar20 = uVar16;
  if (-1 < cVar5) {
    puVar13 = (uint *)((int64_t)cVar5 * 0x100 +
                      *(int64_t *)(*(int64_t *)(param_1 + 0x658) + 0x18));
    do {
      LOCK();
      uVar1 = *puVar13;
      *puVar13 = *puVar13 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    fStack_1c8 = (float)puVar13[5];
    fVar7 = (float)puVar13[6];
    fVar8 = (float)puVar13[7];
    local_var_1bc = puVar13[8];
    local_var_188 = *(uint64_t *)(puVar13 + 1);
    local_var_180 = *(uint64_t *)(puVar13 + 3);
    *puVar13 = 0;
    lVar14 = *(int64_t *)(param_1 + 0x6d8);
    lVar10 = *(int64_t *)(lVar14 + 0x8a8);
    local_var_1d4 = 0x7f7fffff;
    fVar17 = *(float *)(lVar10 + 0x70);
    fVar18 = *(float *)(lVar10 + 0x74);
    fVar19 = *(float *)(lVar10 + 0x98);
    fVar2 = *(float *)(lVar10 + 0xa0);
    fVar3 = *(float *)(lVar10 + 0xa4);
    fVar4 = *(float *)(lVar10 + 0xa8);
    fStack_1d0 = fVar17 * fStack_1c8 + *(float *)(lVar10 + 0x80) * fVar7 + fVar2;
    fVar21 = fVar19 * fVar8 + fVar4;
    fVar22 = fVar18 * fStack_1c8 + *(float *)(lVar10 + 0x84) * fVar7 + fVar3;
    fStack_1c4 = fVar7;
    fStack_1c0 = fVar8;
    fStack_178 = fStack_1c8;
    fStack_174 = fVar7;
    fStack_170 = fVar8;
    local_var_16c = local_var_1bc;
    local_var_d8 = local_var_188;
    local_var_d0 = local_var_180;
    fStack_c8 = fStack_1c8;
    fStack_c4 = fVar7;
    fStack_c0 = fVar8;
    local_var_bc = local_var_1bc;
    pfVar11 = (float *)SystemFileHandler(&local_var_188,stack_array_168,lVar14 + 0x920);
    local_var_1bc = 0x7f7fffff;
    fVar15 = fStack_1d0;
    uVar16 = local_var_1d4;
    fVar17 = *(float *)(lVar10 + 0x80) * (fVar7 + pfVar11[1]) + fVar17 * (fStack_1c8 + *pfVar11) +
             fVar2;
    fVar18 = *(float *)(lVar10 + 0x84) * (fVar7 + pfVar11[1]) + fVar18 * (fStack_1c8 + *pfVar11) +
             fVar3;
    fVar19 = (fVar8 + pfVar11[2]) * fVar19 + fVar4;
    uVar20 = 0x7f7fffff;
  }
  *(uint64_t *)(lVar14 + 0x8c4) = CONCAT44(fStack_1a4,fStack_1a8);
  *(uint64_t *)(lVar14 + 0x8cc) = CONCAT44(local_var_19c,fStack_1a0);
  *(int32_t *)(lVar14 + 0x908) = (int32_t)local_var_198;
  *(float *)(lVar14 + 0x8f4) = fStack_1b8;
  *(float *)(lVar14 + 0x8f8) = fStack_1b4;
  *(float *)(lVar14 + 0x8fc) = fStack_1b0;
  *(int32_t *)(lVar14 + 0x900) = local_var_1ac;
  *(float *)(lVar14 + 0x904) = fStack_1e8;
  *(float *)(lVar14 + 0x8d4) = fVar15;
  *(float *)(lVar14 + 0x8d8) = fVar22;
  *(float *)(lVar14 + 0x8dc) = fVar21;
  *(int32_t *)(lVar14 + 0x8e0) = uVar16;
  *(float *)(lVar14 + 0x8e4) = fVar17;
  *(float *)(lVar14 + 0x8e8) = fVar18;
  *(float *)(lVar14 + 0x8ec) = fVar19;
  *(int32_t *)(lVar14 + 0x8f0) = uVar20;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_b8 ^ (uint64_t)stack_array_208);
}
// 函数: void NetworkSystem_0abe6(char param_1,int64_t param_2)
void NetworkSystem_0abe6(char param_1,int64_t param_2)
{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
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
  uint64_t uVar16;
  uint64_t uVar17;
  int64_t in_RAX;
  float *pfVar18;
  int64_t unaff_RBP;
  uint *puVar19;
  int64_t lVar20;
  int64_t lVar21;
  uint in_R11D;
  float fVar22;
  int32_t stack_special_x_20;
  int32_t local_buffer_34;
  float fStack0000000000000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  uint local_buffer_4c;
  int32_t local_buffer_50;
  int32_t local_buffer_54;
  int32_t local_buffer_58;
  int32_t local_buffer_5c;
  uint64_t local_buffer_60;
  uint64_t local_buffer_68;
  int32_t local_buffer_70;
  puVar19 = (uint *)((int64_t)param_1 * 0x100 + *(int64_t *)(in_RAX + 0x18));
  do {
    LOCK();
    uVar1 = *puVar19;
    *puVar19 = *puVar19 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  fStack0000000000000040 = (float)puVar19[5];
  fVar14 = (float)puVar19[6];
  fVar15 = (float)puVar19[7];
  local_buffer_4c = puVar19[8];
  uVar16 = *(uint64_t *)(puVar19 + 1);
  uVar17 = *(uint64_t *)(puVar19 + 3);
  *(uint64_t *)(unaff_RBP + 0x30) = uVar16;
  *(uint64_t *)(unaff_RBP + 0x38) = uVar17;
  *(float *)(unaff_RBP + 0x40) = fStack0000000000000040;
  *(float *)(unaff_RBP + 0x44) = fVar14;
  *(float *)(unaff_RBP + 0x48) = fVar15;
  *(uint *)(unaff_RBP + 0x4c) = local_buffer_4c;
  *puVar19 = in_R11D;
  lVar21 = *(int64_t *)(param_2 + 0x6d8);
  *(uint64_t *)(unaff_RBP + -0x80) = uVar16;
  *(uint64_t *)(unaff_RBP + -0x78) = uVar17;
  lVar20 = *(int64_t *)(lVar21 + 0x8a8);
  *(float *)(unaff_RBP + -0x70) = fStack0000000000000040;
  *(float *)(unaff_RBP + -0x6c) = fVar14;
  *(float *)(unaff_RBP + -0x68) = fVar15;
  *(uint *)(unaff_RBP + -100) = local_buffer_4c;
  local_buffer_34 = 0x7f7fffff;
  fVar2 = *(float *)(lVar20 + 0x70);
  fVar3 = *(float *)(lVar20 + 0x74);
  fVar4 = *(float *)(lVar20 + 0x98);
  fVar5 = *(float *)(lVar20 + 0xa0);
  fVar6 = *(float *)(lVar20 + 0xa4);
  fVar7 = *(float *)(lVar20 + 0xa8);
  fVar22 = fVar3 * fStack0000000000000040;
  fVar8 = *(float *)(lVar20 + 0x84);
  fStack0000000000000038 =
       fVar2 * fStack0000000000000040 + *(float *)(lVar20 + 0x80) * fVar14 + fVar5;
  fStack0000000000000044 = fVar14;
  fStack0000000000000048 = fVar15;
  pfVar18 = (float *)SystemFileHandler(unaff_RBP + -0x80,unaff_RBP + -0x60,lVar21 + 0x920);
  local_buffer_4c = 0x7f7fffff;
  fVar9 = *(float *)(lVar20 + 0x80);
  fVar10 = *pfVar18;
  fVar11 = pfVar18[1];
  fVar12 = pfVar18[2];
  fVar13 = *(float *)(lVar20 + 0x84);
  *(uint64_t *)(lVar21 + 0x8c4) = local_buffer_60;
  *(uint64_t *)(lVar21 + 0x8cc) = local_buffer_68;
  *(int32_t *)(lVar21 + 0x908) = local_buffer_70;
  *(int32_t *)(lVar21 + 0x8f4) = local_buffer_50;
  *(int32_t *)(lVar21 + 0x8f8) = local_buffer_54;
  *(int32_t *)(lVar21 + 0x8fc) = local_buffer_58;
  *(int32_t *)(lVar21 + 0x900) = local_buffer_5c;
  *(int32_t *)(lVar21 + 0x904) = stack_special_x_20;
  *(float *)(lVar21 + 0x8d4) = fStack0000000000000038;
  *(float *)(lVar21 + 0x8d8) = fVar22 + fVar8 * fVar14 + fVar6;
  *(float *)(lVar21 + 0x8dc) = fVar4 * fVar15 + fVar7;
  *(int32_t *)(lVar21 + 0x8e0) = local_buffer_34;
  *(float *)(lVar21 + 0x8e4) =
       fVar9 * (fVar14 + fVar11) + fVar2 * (fStack0000000000000040 + fVar10) + fVar5;
  *(float *)(lVar21 + 0x8e8) =
       fVar13 * (fVar14 + fVar11) + fVar3 * (fStack0000000000000040 + fVar10) + fVar6;
  *(float *)(lVar21 + 0x8ec) = (fVar15 + fVar12) * fVar4 + fVar7;
  *(int32_t *)(lVar21 + 0x8f0) = 0x7f7fffff;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x50) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkSystem_0ae38(void)
void NetworkSystem_0ae38(void)
{
  int64_t unaff_RBP;
  int64_t in_R10;
  uint64_t in_XMM3_Qa;
  int32_t uVar1;
  int32_t in_XMM3_Dc;
  int32_t in_XMM3_Dd;
  int32_t stack_special_x_20;
  int32_t local_buffer_50;
  int32_t local_buffer_54;
  int32_t local_buffer_58;
  int32_t local_buffer_5c;
  uint64_t local_buffer_60;
  uint64_t local_buffer_68;
  int32_t local_buffer_70;
  uVar1 = (int32_t)((uint64_t)in_XMM3_Qa >> 0x20);
  *(uint64_t *)(in_R10 + 0x8c4) = local_buffer_60;
  *(uint64_t *)(in_R10 + 0x8cc) = local_buffer_68;
  *(int32_t *)(in_R10 + 0x908) = local_buffer_70;
  *(int32_t *)(in_R10 + 0x8f4) = local_buffer_50;
  *(int32_t *)(in_R10 + 0x8f8) = local_buffer_54;
  *(int32_t *)(in_R10 + 0x8fc) = local_buffer_58;
  *(int32_t *)(in_R10 + 0x900) = local_buffer_5c;
  *(int32_t *)(in_R10 + 0x904) = stack_special_x_20;
  *(int *)(in_R10 + 0x8d4) = (int)in_XMM3_Qa;
  *(int32_t *)(in_R10 + 0x8d8) = uVar1;
  *(int32_t *)(in_R10 + 0x8dc) = in_XMM3_Dc;
  *(int32_t *)(in_R10 + 0x8e0) = in_XMM3_Dd;
  *(int *)(in_R10 + 0x8e4) = (int)in_XMM3_Qa;
  *(int32_t *)(in_R10 + 0x8e8) = uVar1;
  *(int32_t *)(in_R10 + 0x8ec) = in_XMM3_Dc;
  *(int32_t *)(in_R10 + 0x8f0) = in_XMM3_Dd;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x50) ^ (uint64_t)&local_buffer_00000000);
}