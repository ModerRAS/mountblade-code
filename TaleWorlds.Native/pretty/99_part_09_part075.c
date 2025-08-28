#include "SystemDataAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_09_part075.c - 6 个函数
// 函数: void function_5ee510(int64_t param_1,int64_t param_2,char param_3)
void function_5ee510(int64_t param_1,int64_t param_2,char param_3)
{
  uint uVar1;
  int32_t uVar2;
  int64_t lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char cVar13;
  uint *puVar14;
  int iVar15;
  int64_t lVar16;
  int iVar17;
  int8_t auVar18 [16];
  int8_t auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int8_t stack_array_568 [32];
  int64_t *plStack_548;
  float fStack_540;
  int8_t local_var_53c;
  int8_t local_var_53b;
  float fStack_538;
  float fStack_534;
  float fStack_530;
  float fStack_528;
  float fStack_524;
  float fStack_520;
  float fStack_518;
  float fStack_514;
  float fStack_510;
  uint64_t local_var_508;
  uint local_var_4f8;
  uint local_var_4f4;
  uint local_var_4f0;
  uint local_var_4ec;
  uint64_t local_var_4e8;
  uint64_t local_var_4e0;
  uint local_var_4d8;
  uint local_var_4d4;
  uint local_var_4d0;
  uint local_var_4cc;
  uint64_t local_var_4c8;
  uint64_t local_var_4c0;
  int iStack_4b8;
  float afStack_4b4 [255];
  uint64_t local_var_b8;
  local_var_508 = 0xfffffffffffffffe;
  local_var_b8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_568;
  fVar26 = 0.0;
  fVar28 = 0.0;
  fVar27 = 0.0;
  fVar29 = 0.0;
  fVar25 = 0.0;
  fVar22 = *(float *)(param_1 + 0x28);
  if (0.0 <= fVar22) {
    fVar20 = *(float *)(param_1 + 0x2c);
    fVar21 = fVar20 + *(float *)(param_1 + 0x30);
    if (fVar22 <= *(float *)(param_1 + 0x34) + fVar21) {
      if (fVar20 < fVar22) {
        if (fVar21 < fVar22) {
          fVar25 = (fVar22 - fVar20) / *(float *)(param_1 + 0x34);
          if (0.0 <= fVar25) {
            if (1.0 <= fVar25) {
              fVar25 = 1.0;
            }
          }
          else {
            fVar25 = 0.0;
          }
          fVar25 = 1.0 - fVar25;
        }
        else {
          fVar25 = 1.0;
        }
      }
      else {
        fVar25 = fVar22 / fVar20;
        if (0.0 <= fVar25) {
          if (1.0 <= fVar25) {
            fVar25 = 1.0;
          }
        }
        else {
          fVar25 = 0.0;
        }
      }
    }
  }
  if ((*(char *)(param_1 + 0x48) != '\0') &&
     (*(float *)(param_1 + 0x30) <= 1.0 && *(float *)(param_1 + 0x30) != 1.0)) {
    lVar16 = *(int64_t *)(param_2 + 0x10);
    puVar14 = (uint *)((int64_t)param_3 * 0x100 + *(int64_t *)(param_2 + 0x18));
    do {
      LOCK();
      uVar1 = *puVar14;
      *puVar14 = *puVar14 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    local_var_4f8 = puVar14[1];
    local_var_4f4 = puVar14[2];
    local_var_4f0 = puVar14[3];
    local_var_4ec = puVar14[4];
    local_var_4e8 = *(uint64_t *)(puVar14 + 5);
    local_var_4e0 = *(uint64_t *)(puVar14 + 7);
    *puVar14 = 0;
    local_var_4d8 = local_var_4f8;
    local_var_4d4 = local_var_4f4;
    local_var_4d0 = local_var_4f0;
    local_var_4cc = local_var_4ec;
    local_var_4c8 = local_var_4e8;
    local_var_4c0 = local_var_4e0;
    SystemSecurityManager(&fStack_538,&local_var_4f8);
    fVar4 = *(float *)(lVar16 + 0x30);
    fVar5 = *(float *)(lVar16 + 0x34);
    fVar6 = *(float *)(lVar16 + 0x38);
    fVar7 = *(float *)(lVar16 + 0x40);
    fVar8 = *(float *)(lVar16 + 0x44);
    fVar9 = *(float *)(lVar16 + 0x48);
    fVar10 = *(float *)(lVar16 + 0x50);
    fVar11 = *(float *)(lVar16 + 0x54);
    fVar12 = *(float *)(lVar16 + 0x58);
    fVar22 = *(float *)(param_1 + 0x3c);
    fVar20 = *(float *)(param_1 + 0x40);
    fVar21 = *(float *)(param_1 + 0x38);
    fVar23 = fVar21 * (fStack_538 * fVar4 + fStack_534 * fVar7 + fStack_530 * fVar10) +
             fVar22 * (fStack_538 * fVar5 + fStack_534 * fVar8 + fStack_530 * fVar11) +
             fVar20 * (fStack_538 * fVar6 + fStack_534 * fVar9 + fStack_530 * fVar12);
    fVar24 = fVar21 * (fStack_528 * fVar4 + fStack_524 * fVar7 + fStack_520 * fVar10) +
             fVar22 * (fStack_528 * fVar5 + fStack_524 * fVar8 + fStack_520 * fVar11) +
             fVar20 * (fStack_528 * fVar6 + fStack_524 * fVar9 + fStack_520 * fVar12);
    fVar21 = fVar21 * (fStack_518 * fVar4 + fStack_514 * fVar7 + fStack_510 * fVar10) +
             fVar22 * (fStack_518 * fVar5 + fStack_514 * fVar8 + fStack_510 * fVar11) +
             fVar20 * (fStack_518 * fVar6 + fStack_514 * fVar9 + fStack_510 * fVar12);
    auVar19._4_4_ = fVar21;
    auVar19._0_4_ = fVar21;
    auVar19._8_4_ = fVar21;
    auVar19._12_4_ = fVar21;
    auVar18._4_12_ = auVar19._4_12_;
    auVar18._0_4_ = fVar21 * fVar21;
    fVar20 = fVar24 * fVar24 + fVar23 * fVar23 + auVar18._0_4_;
    auVar19 = rsqrtss(auVar18,ZEXT416((uint)fVar20));
    fVar22 = auVar19._0_4_;
    fVar22 = fVar22 * 0.5 * (3.0 - fVar20 * fVar22 * fVar22);
    if (fVar24 * fVar22 != 0.0) {
      fVar26 = fVar21 * fVar22 * -1.4;
      if (0.0 <= fVar26) {
        if (1.0 <= fVar26) {
          fVar26 = 1.0;
        }
      }
      else {
        fVar26 = 0.0;
      }
      fVar28 = fVar21 * fVar22 * 1.4;
      if (0.0 <= fVar28) {
        if (1.0 <= fVar28) {
          fVar28 = 1.0;
        }
      }
      else {
        fVar28 = 0.0;
      }
      fVar29 = fVar23 * fVar22 * 1.4;
      if (0.0 <= fVar29) {
        if (1.0 <= fVar29) {
          fVar29 = 1.0;
        }
      }
      else {
        fVar29 = 0.0;
      }
      fVar27 = fVar23 * fVar22 * -1.4;
      if (0.0 <= fVar27) {
        if (1.0 <= fVar27) {
          fVar27 = 1.0;
        }
      }
      else {
        fVar27 = 0.0;
      }
    }
  }
  iVar15 = 0;
  iVar17 = 0;
  if (*(int64_t *)(param_1 + 0x10) - *(int64_t *)(param_1 + 8) >> 3 != 0) {
    lVar16 = 0;
    do {
      if (0x7f < lVar16) {
// WARNING: Subroutine does not return
        SystemParameterHandler(system_message_context,&processed_var_4288_ptr);
      }
      lVar3 = *(int64_t *)(param_1 + 8);
      *(uint64_t *)(&iStack_4b8 + lVar16 * 2) = *(uint64_t *)(lVar3 + lVar16 * 8);
      iVar15 = iVar15 + 1;
      lVar16 = lVar16 + 1;
      iVar17 = iVar17 + 1;
    } while ((uint64_t)(int64_t)iVar17 < (uint64_t)(*(int64_t *)(param_1 + 0x10) - lVar3 >> 3));
  }
  if (0.001 < fVar26) {
    if (0x7f < iVar15) {
// WARNING: Subroutine does not return
      SystemParameterHandler(system_message_context,&processed_var_4288_ptr);
    }
    (&iStack_4b8)[(int64_t)iVar15 * 2] = 0x3c;
    afStack_4b4[(int64_t)iVar15 * 2] = fVar26;
    iVar15 = iVar15 + 1;
  }
  if (0.001 < fVar28) {
    if (0x7f < iVar15) {
// WARNING: Subroutine does not return
      SystemParameterHandler(system_message_context,&processed_var_4288_ptr);
    }
    (&iStack_4b8)[(int64_t)iVar15 * 2] = 0x3d;
    afStack_4b4[(int64_t)iVar15 * 2] = fVar28;
    iVar15 = iVar15 + 1;
  }
  if (0.001 < fVar27) {
    if (0x7f < iVar15) {
// WARNING: Subroutine does not return
      SystemParameterHandler(system_message_context,&processed_var_4288_ptr);
    }
    (&iStack_4b8)[(int64_t)iVar15 * 2] = 0x3f;
    afStack_4b4[(int64_t)iVar15 * 2] = fVar27;
    iVar15 = iVar15 + 1;
  }
  if (0.001 < fVar29) {
    if (0x7f < iVar15) {
// WARNING: Subroutine does not return
      SystemParameterHandler(system_message_context,&processed_var_4288_ptr);
    }
    (&iStack_4b8)[(int64_t)iVar15 * 2] = 0x3e;
    afStack_4b4[(int64_t)iVar15 * 2] = fVar29;
    iVar15 = iVar15 + 1;
  }
  if (0.0 < fVar25) {
    if (0x7f < iVar15) {
// WARNING: Subroutine does not return
      SystemParameterHandler(system_message_context,&processed_var_4288_ptr);
    }
    (&iStack_4b8)[(int64_t)iVar15 * 2] = 0x58;
    afStack_4b4[(int64_t)iVar15 * 2] = fVar25;
    iVar15 = iVar15 + 1;
  }
  if (((param_2 != 0) && (*(int64_t **)(param_2 + 0x210) != (int64_t *)0x0)) &&
     (cVar13 = (**(code **)(**(int64_t **)(param_2 + 0x210) + 0xf0))(), cVar13 != '\0')) {
    lVar16 = *(int64_t *)(param_2 + 0x210);
    if (*(char *)(lVar16 + 0x3425) == '\0') {
      *(int32_t *)(lVar16 + 0x3438) = 0xbf800000;
    }
    else {
      if (*(float *)(lVar16 + 0x3438) <= 0.0 && *(float *)(lVar16 + 0x3438) != 0.0) {
        *(int32_t *)(lVar16 + 0x3438) = 0;
      }
      uVar2 = *(int32_t *)(lVar16 + 0x3428);
      RenderingSystem_MaterialHandler(system_system_data_memory,&plStack_548,uVar2);
      if (plStack_548 == (int64_t *)0x0) {
// WARNING: Subroutine does not return
        SystemParameterHandler(system_message_context,&rendering_buffer_256_ptr,uVar2);
      }
      fVar25 = (float)(**(code **)(*plStack_548 + 0xc0))();
      *(float *)(lVar16 + 0x3438) = fVar25;
      fVar22 = *(float *)(*(int64_t *)(lVar16 + 0x3430) + 0x20);
      fVar26 = fVar25 - fVar22;
      if (((-0.01 < fVar26) && (fVar26 < 0.01)) || (fVar22 < fVar25)) {
        *(int32_t *)(lVar16 + 0x3438) = 0xbf800000;
        *(int8_t *)(lVar16 + 0x3425) = 0;
        *(int32_t *)(lVar16 + 0x3428) = 0xffffffff;
        *(uint64_t *)(lVar16 + 0x3430) = 0;
      }
      if (plStack_548 != (int64_t *)0x0) {
        (**(code **)(*plStack_548 + 0x38))();
      }
    }
    if (*(char *)(*(int64_t *)(param_2 + 0x210) + 0x3425) != '\0') {
      function_5727f0(*(int64_t *)(param_2 + 0x210),&fStack_540);
      if (0x7f < iVar15) {
// WARNING: Subroutine does not return
        SystemParameterHandler(system_message_context,&processed_var_4288_ptr);
      }
      lVar16 = (int64_t)iVar15;
      cVar13 = Function_b0801d46(local_var_53c);
      (&iStack_4b8)[lVar16 * 2] = (int)cVar13;
      afStack_4b4[lVar16 * 2] = fStack_540;
      if (0x7f < iVar15 + 1) {
// WARNING: Subroutine does not return
        SystemParameterHandler(system_message_context,&processed_var_4288_ptr);
      }
      lVar16 = (int64_t)(iVar15 + 1);
      cVar13 = Function_b0801d46(local_var_53b);
      (&iStack_4b8)[lVar16 * 2] = (int)cVar13;
      afStack_4b4[lVar16 * 2] = 1.0 - fStack_540;
    }
  }
  function_208720(param_1 + 0x50);
  function_208720(param_1 + 0x8a0);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_b8 ^ (uint64_t)stack_array_568);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_5eebb0(int64_t param_1,int64_t param_2,int param_3,uint param_4,float param_5,
void function_5eebb0(int64_t param_1,int64_t param_2,int param_3,uint param_4,float param_5,
                  int64_t *param_6,int64_t *param_7,int64_t *param_8,char param_9)
{
  int32_t *puVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  float fVar6;
  char cVar7;
  uint64_t *puVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  uint uVar13;
  int64_t lVar14;
  int64_t *plVar15;
  uint64_t uVar16;
  int64_t *plVar17;
  int64_t *plVar18;
  int64_t lStackX_8;
  int64_t lStackX_10;
  int64_t lStack_a8;
  int64_t *plStack_a0;
  uint64_t local_var_98;
  int8_t stack_array_90 [8];
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  lVar3 = (int64_t)param_6;
  fVar6 = param_5;
  local_var_98 = 0xfffffffffffffffe;
  plVar15 = (int64_t *)0x0;
  if (5.0 <= param_5) {
    if (10.0 <= param_5) {
      if (16.0 <= param_5) {
        uVar13 = (21.0 <= param_5) + 3;
      }
      else {
        uVar13 = 2;
      }
    }
    else {
      uVar13 = 1;
    }
  }
  else {
    uVar13 = 0;
  }
  uVar13 = (param_3 << 8 | param_4) << 8 | uVar13;
  lStackX_8 = 0;
  plVar18 = plVar15;
  if (param_6 != (int64_t *)0x0) {
    plVar18 = *(int64_t **)((int64_t)param_6 + 0x108);
  }
  lStackX_10 = param_2;
  param_5 = (float)uVar13;
  if (plVar18 != (int64_t *)0x0) {
    (**(code **)(*plVar18 + 0x28))(plVar18);
  }
  plVar17 = *(int64_t **)(param_1 + 0x10f8);
  *(int64_t **)(param_1 + 0x10f8) = plVar18;
  if (plVar17 != (int64_t *)0x0) {
    (**(code **)(*plVar17 + 0x38))();
  }
  if ((*(int64_t *)(param_1 + 0x10f8) != 0) &&
     (iVar2 = *(int *)(*(int64_t *)(lVar3 + 0x188) + 4), -1 < iVar2)) {
    puVar8 = (uint64_t *)0x180c95e98;
    puVar11 = system_system_memory;
    while (puVar11 != (uint64_t *)0x0) {
      if (*(uint *)(puVar11 + 4) < uVar13) {
        puVar11 = (uint64_t *)*puVar11;
      }
      else {
        puVar8 = puVar11;
        puVar11 = (uint64_t *)puVar11[1];
      }
    }
    if ((puVar8 == (uint64_t *)0x180c95e98) || (uVar13 < *(uint *)(puVar8 + 4))) {
      puVar8 = (uint64_t *)PhysicsSystem_IntegrationProcessor(0x180c95e98,&lStackX_8,0x180c95e98,puVar8,&param_5);
      puVar8 = (uint64_t *)*puVar8;
    }
    lStackX_8 = (uint64_t)*(uint *)(lVar3 + 0x178) * 0x30 + 0x70 +
                (int64_t)iVar2 * 400 + *(int64_t *)(puVar8[5] + 0x388);
  }
  lStack_a8 = 0;
  plVar18 = plVar15;
  if (lVar3 != 0) {
    plVar18 = *(int64_t **)(lVar3 + 0x118);
  }
  if (plVar18 != (int64_t *)0x0) {
    plStack_a0 = plVar18;
    (**(code **)(*plVar18 + 0x28))(plVar18);
  }
  plStack_a0 = *(int64_t **)(param_1 + 0x1100);
  *(int64_t **)(param_1 + 0x1100) = plVar18;
  if (plStack_a0 != (int64_t *)0x0) {
    (**(code **)(*plStack_a0 + 0x38))();
  }
  if ((*(int64_t *)(param_1 + 0x1100) != 0) &&
     (iVar2 = *(int *)(*(int64_t *)(lVar3 + 0x188) + 0xc), -1 < iVar2)) {
    puVar8 = (uint64_t *)0x180c95e98;
    puVar11 = system_system_memory;
    while (puVar11 != (uint64_t *)0x0) {
      if (*(uint *)(puVar11 + 4) < uVar13) {
        puVar11 = (uint64_t *)*puVar11;
      }
      else {
        puVar8 = puVar11;
        puVar11 = (uint64_t *)puVar11[1];
      }
    }
    if ((puVar8 == (uint64_t *)0x180c95e98) || (uVar13 < *(uint *)(puVar8 + 4))) {
      puVar8 = (uint64_t *)PhysicsSystem_IntegrationProcessor(0x180c95e98,&plStack_a0,0x180c95e98,puVar8,&param_5);
      puVar8 = (uint64_t *)*puVar8;
    }
    lStack_a8 = (int64_t)iVar2 * 0x58 + 0x28 + *(int64_t *)(puVar8[5] + 0x398);
  }
  lVar3 = (int64_t)param_6;
  plStack_a0 = *(int64_t **)((int64_t)param_6 + 0x110);
  plVar18 = plVar15;
  if ((plStack_a0 != (int64_t *)0x0) &&
     (iVar2 = *(int *)(*(int64_t *)((int64_t)param_6 + 0x188) + 8), -1 < iVar2)) {
    param_5 = (float)Function_34dec64a(param_3,param_4,fVar6);
    puVar8 = (uint64_t *)0x180c95e98;
    puVar11 = system_system_memory;
    while (puVar11 != (uint64_t *)0x0) {
      if (*(uint *)(puVar11 + 4) < (uint)param_5) {
        puVar11 = (uint64_t *)*puVar11;
      }
      else {
        puVar8 = puVar11;
        puVar11 = (uint64_t *)puVar11[1];
      }
    }
    if ((puVar8 == (uint64_t *)0x180c95e98) || ((uint)param_5 < *(uint *)(puVar8 + 4))) {
      puVar8 = (uint64_t *)PhysicsSystem_IntegrationProcessor(0x180c95e98,stack_array_90);
      puVar8 = (uint64_t *)*puVar8;
    }
    plVar18 = (int64_t *)
              ((int64_t)iVar2 * 400 + *(int64_t *)(puVar8[5] + 0x378) +
              (uint64_t)*(uint *)(lVar3 + 0x174) * 0x30 + 0x70);
  }
  lVar3 = *(int64_t *)(param_1 + 0x58);
  lVar14 = *(int64_t *)(param_1 + 0x50);
  if (lVar14 != lVar3) {
    do {
      function_207ea0(lVar14);
      lVar14 = lVar14 + 0x78;
    } while (lVar14 != lVar3);
    lVar14 = *(int64_t *)(param_1 + 0x50);
  }
  lVar3 = (int64_t)param_6;
  *(int64_t *)(param_1 + 0x58) = lVar14;
  plVar17 = *(int64_t **)((int64_t)param_6 + 0x100);
  if (plVar17 != (int64_t *)0x0) {
    param_6 = plVar17;
    (**(code **)(*plVar17 + 0x28))(plVar17);
  }
  param_6 = *(int64_t **)(param_1 + 0x10f0);
  *(int64_t **)(param_1 + 0x10f0) = plVar17;
  if (param_6 != (int64_t *)0x0) {
    (**(code **)(*param_6 + 0x38))();
  }
  if (*(int64_t *)(param_1 + 0x10f0) != 0) {
    function_207f50(param_1 + 0x50);
  }
  cVar7 = param_9;
  lVar5 = lStackX_10;
  lVar14 = *(int64_t *)(param_1 + 0x10f8);
  if ((lVar14 != 0) && (lStackX_8 != 0)) {
    for (puVar11 = *(uint64_t **)(*(int64_t *)(param_1 + 0x10f0) + 0x38); plVar17 = plVar15,
        puVar11 < *(uint64_t **)(*(int64_t *)(param_1 + 0x10f0) + 0x40); puVar11 = puVar11 + 2) {
      if ((*(byte *)(puVar11 + 1) & 1) != 0) {
        plVar17 = (int64_t *)*puVar11;
        break;
      }
    }
    for (puVar11 = *(uint64_t **)(lVar14 + 0x38); plVar9 = plVar15,
        puVar11 < *(uint64_t **)(lVar14 + 0x40); puVar11 = puVar11 + 2) {
      if ((*(byte *)(puVar11 + 1) & 1) != 0) {
        plVar9 = (int64_t *)*puVar11;
        break;
      }
    }
    local_var_88 = 0x3f800000;
    local_var_80 = 0;
    local_var_78 = 0x3f80000000000000;
    local_var_70 = 0;
    local_var_68 = 0;
    local_var_64 = 0;
    local_var_60 = 0x3f800000;
    local_var_5c = 0;
    local_var_58 = 0;
    local_var_54 = 0;
    local_var_50 = 0;
    local_var_4c = 0x3f800000;
    if ((*(uint *)(plVar9[0x37] + 0x388) >> 0x19 & 1) == 0) {
      lVar12 = (int64_t)param_9 * 0x1b0;
      lVar4 = *(int64_t *)(lStackX_10 + 0x140);
      local_var_88 = *(uint64_t *)(lVar12 + lVar4);
      local_var_80 = ((uint64_t *)(lVar12 + lVar4))[1];
      puVar11 = (uint64_t *)(lVar12 + 0x10 + lVar4);
      local_var_78 = *puVar11;
      local_var_70 = puVar11[1];
      puVar1 = (int32_t *)(lVar12 + 0x20 + lVar4);
      local_var_68 = *puVar1;
      local_var_64 = puVar1[1];
      local_var_60 = puVar1[2];
      local_var_5c = puVar1[3];
      puVar1 = (int32_t *)(lVar12 + 0x30 + lVar4);
      local_var_58 = *puVar1;
      local_var_54 = puVar1[1];
      local_var_50 = puVar1[2];
      local_var_4c = puVar1[3];
    }
    function_208160(param_1 + 0x50,lVar14,lStackX_8,plVar17,&local_var_88);
  }
  lVar14 = *(int64_t *)(param_1 + 0x1100);
  if ((lVar14 != 0) && (lStack_a8 != 0)) {
    for (puVar11 = *(uint64_t **)(*(int64_t *)(param_1 + 0x10f0) + 0x38); plVar17 = plVar15,
        puVar11 < *(uint64_t **)(*(int64_t *)(param_1 + 0x10f0) + 0x40); puVar11 = puVar11 + 2) {
      if ((*(byte *)(puVar11 + 1) & 1) != 0) {
        plVar17 = (int64_t *)*puVar11;
        break;
      }
    }
    for (puVar11 = *(uint64_t **)(lVar14 + 0x38); plVar9 = plVar15,
        puVar11 < *(uint64_t **)(lVar14 + 0x40); puVar11 = puVar11 + 2) {
      if ((*(byte *)(puVar11 + 1) & 1) != 0) {
        plVar9 = (int64_t *)*puVar11;
        break;
      }
    }
    local_var_88 = 0x3f800000;
    local_var_80 = 0;
    local_var_78 = 0x3f80000000000000;
    local_var_70 = 0;
    local_var_68 = 0;
    local_var_64 = 0;
    local_var_60 = 0x3f800000;
    local_var_5c = 0;
    local_var_58 = 0;
    local_var_54 = 0;
    local_var_50 = 0;
    local_var_4c = 0x3f800000;
    if ((*(uint *)(plVar9[0x37] + 0x388) >> 0x19 & 1) == 0) {
      lVar12 = (int64_t)cVar7 * 0x1b0;
      lVar4 = *(int64_t *)(lVar5 + 0x140);
      local_var_88 = *(uint64_t *)(lVar12 + lVar4);
      local_var_80 = ((uint64_t *)(lVar12 + lVar4))[1];
      puVar11 = (uint64_t *)(lVar12 + 0x10 + lVar4);
      local_var_78 = *puVar11;
      local_var_70 = puVar11[1];
      puVar1 = (int32_t *)(lVar12 + 0x20 + lVar4);
      local_var_68 = *puVar1;
      local_var_64 = puVar1[1];
      local_var_60 = puVar1[2];
      local_var_5c = puVar1[3];
      puVar1 = (int32_t *)(lVar12 + 0x30 + lVar4);
      local_var_58 = *puVar1;
      local_var_54 = puVar1[1];
      local_var_50 = puVar1[2];
      local_var_4c = puVar1[3];
    }
    function_208160(param_1 + 0x50,lVar14,lStack_a8,plVar17,&local_var_88);
  }
  if (((*(char *)(lVar3 + 0x192) != '\0') && (plStack_a0 != (int64_t *)0x0)) &&
     (plVar18 != (int64_t *)0x0)) {
    for (puVar11 = *(uint64_t **)(*(int64_t *)(param_1 + 0x10f0) + 0x38); plVar17 = plVar15,
        puVar11 < *(uint64_t **)(*(int64_t *)(param_1 + 0x10f0) + 0x40); puVar11 = puVar11 + 2) {
      if ((*(byte *)(puVar11 + 1) & 1) != 0) {
        plVar17 = (int64_t *)*puVar11;
        break;
      }
    }
    local_var_88 = 0x3f800000;
    local_var_80 = 0;
    local_var_78 = 0x3f80000000000000;
    local_var_70 = 0;
    local_var_68 = 0;
    local_var_64 = 0;
    local_var_60 = 0x3f800000;
    local_var_5c = 0;
    local_var_58 = 0;
    local_var_54 = 0;
    local_var_50 = 0;
    local_var_4c = 0x3f800000;
    plVar9 = (int64_t *)plStack_a0[7];
    uVar16 = plStack_a0[8] - (int64_t)plVar9 >> 4;
    if (uVar16 != 0) {
      do {
        if (((*(byte *)(plVar9 + 1) & 1) != 0) &&
           ((*(uint *)(*(int64_t *)(*plVar9 + 0x1b8) + 0x388) >> 0x19 & 1) == 0)) {
          lVar14 = (int64_t)cVar7 * 0x1b0;
          lVar3 = *(int64_t *)(lVar5 + 0x140);
          local_var_88 = *(uint64_t *)(lVar14 + lVar3);
          local_var_80 = ((uint64_t *)(lVar14 + lVar3))[1];
          puVar11 = (uint64_t *)(lVar14 + 0x10 + lVar3);
          local_var_78 = *puVar11;
          local_var_70 = puVar11[1];
          puVar1 = (int32_t *)(lVar14 + 0x20 + lVar3);
          local_var_68 = *puVar1;
          local_var_64 = puVar1[1];
          local_var_60 = puVar1[2];
          local_var_5c = puVar1[3];
          puVar1 = (int32_t *)(lVar14 + 0x30 + lVar3);
          local_var_58 = *puVar1;
          local_var_54 = puVar1[1];
          local_var_50 = puVar1[2];
          local_var_4c = puVar1[3];
          break;
        }
        uVar13 = (int)plVar15 + 1;
        plVar15 = (int64_t *)(uint64_t)uVar13;
        plVar9 = plVar9 + 2;
      } while ((uint64_t)(int64_t)(int)uVar13 < uVar16);
    }
    function_208160(param_1 + 0x50,plStack_a0,plVar18,plVar17,&local_var_88);
  }
  plVar15 = (int64_t *)(param_1 + 0x8a0);
  lVar3 = *(int64_t *)(param_1 + 0x8a8);
  lVar14 = *plVar15;
  if (lVar14 != lVar3) {
    do {
      function_207ea0(lVar14);
      lVar14 = lVar14 + 0x78;
    } while (lVar14 != lVar3);
    lVar14 = *plVar15;
  }
  *(int64_t *)(param_1 + 0x8a8) = lVar14;
  plVar18 = param_7;
  if ((param_7 != (int64_t *)0x0) || (plVar18 = param_8, param_8 != (int64_t *)0x0)) {
    uVar10 = (**(code **)(*plVar18 + 0xb0))();
    function_207f50(plVar15,uVar10);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_5ef2e0(int64_t param_1,int param_2,int64_t param_3,uint64_t param_4)
void function_5ef2e0(int64_t param_1,int param_2,int64_t param_3,uint64_t param_4)
{
  byte bVar1;
  bool bVar2;
  uint64_t *puVar3;
  byte *pbVar4;
  uint uVar5;
  void *puVar6;
  uint64_t *puVar7;
  int iVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  void *plocal_var_50;
  byte *pbStack_48;
  int iStack_40;
  uint64_t local_var_38;
  lVar12 = (int64_t)param_2;
  if (*(int *)(param_3 + 0x10) < 1) {
    *(int32_t *)(param_1 + 0x1108 + lVar12 * 4) = 0xffffffff;
    *(int8_t *)(lVar12 + 0x1114 + param_1) = 0;
    return;
  }
  plocal_var_50 = &system_data_buffer_ptr;
  local_var_38 = 0;
  pbStack_48 = (byte *)0x0;
  iStack_40 = 0;
  CoreMemoryPoolProcessor(&plocal_var_50,*(int32_t *)(param_3 + 0x10),param_3,param_4,0xfffffffffffffffe);
  if (0 < *(int *)(param_3 + 0x10)) {
    puVar6 = &system_buffer_ptr;
    if (*(void **)(param_3 + 8) != (void *)0x0) {
      puVar6 = *(void **)(param_3 + 8);
    }
// WARNING: Subroutine does not return
    memcpy(pbStack_48,puVar6,(int64_t)(*(int *)(param_3 + 0x10) + 1));
  }
  if ((*(int64_t *)(param_3 + 8) != 0) && (iStack_40 = 0, pbStack_48 != (byte *)0x0)) {
    *pbStack_48 = 0;
  }
  if (iStack_40 != 0) {
    puVar7 = (uint64_t *)(system_system_data_memory + 0x50);
    puVar3 = puVar7;
    puVar9 = *(uint64_t **)(system_system_data_memory + 0x60);
    if (*(uint64_t **)(system_system_data_memory + 0x60) == (uint64_t *)0x0) {
LAB_1805ef45a:
      puVar3 = puVar7;
    }
    else {
      do {
        if (*(int *)(puVar9 + 6) == 0) {
          bVar2 = true;
LAB_1805ef418:
          puVar10 = (uint64_t *)*puVar9;
        }
        else {
          pbVar4 = pbStack_48;
          do {
            uVar5 = (uint)pbVar4[puVar9[5] - (int64_t)pbStack_48];
            iVar8 = *pbVar4 - uVar5;
            if (*pbVar4 != uVar5) break;
            pbVar4 = pbVar4 + 1;
          } while (uVar5 != 0);
          bVar2 = 0 < iVar8;
          if (0 < iVar8) goto LAB_1805ef418;
          puVar10 = (uint64_t *)puVar9[1];
        }
        if (bVar2) {
          puVar9 = puVar3;
        }
        puVar3 = puVar9;
        puVar9 = puVar10;
      } while (puVar10 != (uint64_t *)0x0);
      if (puVar3 == puVar7) goto LAB_1805ef45a;
      if (*(int *)(puVar3 + 6) != 0) {
        pbVar4 = (byte *)puVar3[5];
        lVar11 = (int64_t)pbStack_48 - (int64_t)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar5 = (uint)pbVar4[lVar11];
          if (bVar1 != uVar5) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar5 != 0);
        if (0 < (int)(bVar1 - uVar5)) goto LAB_1805ef45a;
      }
    }
    if (puVar3 != puVar7) {
      iVar8 = *(int *)(puVar3 + 8);
      goto LAB_1805ef490;
    }
    pbVar4 = &system_buffer_ptr;
    if (pbStack_48 != (byte *)0x0) {
      pbVar4 = pbStack_48;
    }
    SystemCore_Allocator(&processed_var_7152_ptr,pbVar4);
  }
  iVar8 = -1;
LAB_1805ef490:
  plocal_var_50 = &system_data_buffer_ptr;
  if (pbStack_48 == (byte *)0x0) {
    *(int *)(param_1 + 0x1108 + lVar12 * 4) = iVar8;
    *(char *)(lVar12 + 0x1114 + param_1) = (char)param_4;
    if (iVar8 != -1) {
      *(int32_t *)(param_1 + 0x1118) = 0xffffffff;
    }
    return;
  }
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}
// 函数: void function_5ef510(int64_t param_1,int param_2,int64_t *param_3)
void function_5ef510(int64_t param_1,int param_2,int64_t *param_3)
{
  int64_t *plVar1;
  int64_t lVar2;
  lVar2 = (int64_t)param_2;
  if (param_3 != (int64_t *)0x0) {
    (**(code **)(*param_3 + 0x28))(param_3);
  }
  plVar1 = *(int64_t **)(param_1 + 0x1120 + lVar2 * 8);
  *(int64_t **)(param_1 + 0x1120 + lVar2 * 8) = param_3;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int8_t *)(lVar2 + 0x1138 + param_1) = 1;
  return;
}
// 函数: void function_5ef580(int64_t param_1)
void function_5ef580(int64_t param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  lVar1 = *(int64_t *)(param_1 + 0x58);
  lVar3 = *(int64_t *)(param_1 + 0x50);
  if (lVar3 != lVar1) {
    do {
      function_207ea0(lVar3);
      lVar3 = lVar3 + 0x78;
    } while (lVar3 != lVar1);
    lVar3 = *(int64_t *)(param_1 + 0x50);
  }
  *(int64_t *)(param_1 + 0x58) = lVar3;
  lVar1 = *(int64_t *)(param_1 + 0x8a8);
  lVar3 = *(int64_t *)(param_1 + 0x8a0);
  if (lVar3 != lVar1) {
    do {
      function_207ea0(lVar3);
      lVar3 = lVar3 + 0x78;
    } while (lVar3 != lVar1);
    lVar3 = *(int64_t *)(param_1 + 0x8a0);
  }
  *(int64_t *)(param_1 + 0x8a8) = lVar3;
  plVar2 = *(int64_t **)(param_1 + 0x10f0);
  *(uint64_t *)(param_1 + 0x10f0) = 0;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar2 = *(int64_t **)(param_1 + 0x10f8);
  *(uint64_t *)(param_1 + 0x10f8) = 0;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return;
}
// 函数: void function_5ef660(int64_t param_1)
void function_5ef660(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int64_t lVar6;
  int iVar7;
  function_2091d0(param_1 + 0x50);
  lVar4 = *(int64_t *)(param_1 + 0x8a0);
  lVar6 = *(int64_t *)(param_1 + 0x8a8) - lVar4;
  iVar7 = 0;
  lVar6 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar6),8) + lVar6;
  if (lVar6 >> 6 != lVar6 >> 0x3f) {
    lVar6 = 0;
    do {
      lVar2 = *(int64_t *)(lVar6 + lVar4);
      iVar5 = 0;
      if (*(int64_t *)(lVar2 + 0x40) - *(int64_t *)(lVar2 + 0x38) >> 4 != 0) {
        lVar3 = 0;
        do {
          if (((*(byte *)(*(int64_t *)(lVar2 + 0x38) + 8 + lVar3) & 1) != 0) &&
             (lVar1 = *(int64_t *)(*(int64_t *)(lVar2 + 0x38) + lVar3),
             (*(uint *)(lVar1 + 0x100) & 0x800) != 0)) {
            function_07f0e0(lVar1,param_1 + 0x8e4,*(int32_t *)(param_1 + 0x10e4));
            lVar2 = *(int64_t *)(lVar6 + lVar4);
          }
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 0x10;
        } while ((uint64_t)(int64_t)iVar5 <
                 (uint64_t)(*(int64_t *)(lVar2 + 0x40) - *(int64_t *)(lVar2 + 0x38) >> 4));
      }
      lVar4 = *(int64_t *)(param_1 + 0x8a0);
      iVar7 = iVar7 + 1;
      lVar2 = *(int64_t *)(param_1 + 0x8a8) - lVar4;
      lVar6 = lVar6 + 0x78;
      lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar2),8) + lVar2;
    } while ((uint64_t)(int64_t)iVar7 < (uint64_t)((lVar2 >> 6) - (lVar2 >> 0x3f)));
  }
  return;
}