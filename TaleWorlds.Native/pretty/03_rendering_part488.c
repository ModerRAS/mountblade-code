#include "SystemDataAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part488.c - 3 个函数
// 函数: void function_52a030(int64_t param_1,int64_t param_2)
void function_52a030(int64_t param_1,int64_t param_2)
{
  int32_t uVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int64_t *plVar7;
  void *puVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  bVar5 = false;
  bVar4 = false;
  lVar10 = 0x9e0;
  lVar9 = 0x9e8;
  do {
    lVar2 = *(int64_t *)(lVar9 + *(int64_t *)(param_1 + 0x8f8));
    if (lVar2 != 0) {
      if (**(int64_t **)(lVar2 + 0xf8) == 0) {
LAB_18052a0d7:
        bVar3 = true;
      }
      else {
        plVar7 = (int64_t *)function_4dfed0(*(int64_t **)(lVar2 + 0xf8),&plStackX_20);
        bVar5 = true;
        if (*plVar7 == 0) goto LAB_18052a0d7;
        plVar7 = (int64_t *)function_4dfed0(*(uint64_t *)(lVar2 + 0xf8),&plStackX_18);
        bVar5 = true;
        bVar4 = true;
        if (*(int64_t *)(*plVar7 + 0x20) == 0) goto LAB_18052a0d7;
        bVar3 = false;
      }
      if ((bVar4) && (bVar4 = false, plStackX_18 != (int64_t *)0x0)) {
        (**(code **)(*plStackX_18 + 0x38))();
      }
      if ((bVar5) && (bVar5 = false, plStackX_20 != (int64_t *)0x0)) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
      if (bVar3) {
        if (**(int64_t **)(lVar2 + 0xf8) == 0) {
          puVar8 = &processed_var_6832_ptr;
        }
        else {
          plVar7 = (int64_t *)**(int64_t **)(lVar2 + 0xf8);
          if (plVar7 == (int64_t *)0x0) {
            puVar8 = &processed_var_6952_ptr;
          }
          else {
            (**(code **)(*plVar7 + 0x28))(plVar7);
            (**(code **)(*plVar7 + 0x38))(plVar7);
            puVar8 = &processed_var_6912_ptr;
          }
        }
// WARNING: Subroutine does not return
        SystemParameterHandler(system_message_context,puVar8);
      }
      uVar1 = *(int32_t *)(lVar10 + *(int64_t *)(param_1 + 0x8f8));
      AcquireSRWLockExclusive(param_2);
      iVar6 = _Mtx_lock(param_2 + 8);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
      function_50c740(param_1,uVar1,0x28,1);
      iVar6 = _Mtx_unlock(param_2 + 8);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
      ReleaseSRWLockExclusive(param_2);
    }
    lVar9 = lVar9 + 8;
    lVar10 = lVar10 + 4;
    if (0x9f7 < lVar9) {
      return;
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_52a270(int64_t *param_1,int64_t param_2)
void function_52a270(int64_t *param_1,int64_t param_2)
{
  bool bVar1;
  int32_t uVar2;
  int32_t uVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  float *pfVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int64_t *plStackX_8;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  int32_t local_var_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  int32_t local_var_15c;
  int32_t local_var_158;
  int32_t local_var_154;
  uint64_t local_var_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  int32_t local_var_13c;
  uint64_t local_var_138;
  int64_t *aplStack_128 [12];
  int8_t stack_array_c8 [16];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int32_t local_var_ac;
  int32_t local_var_a8;
  int32_t local_var_a4;
  int32_t local_var_a0;
  int32_t local_var_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  int32_t local_var_8c;
  local_var_138 = 0xfffffffffffffffe;
  if ((int)param_1[0xad] - 3U < 2) {
    fVar19 = (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x140] * 8) -
                    param_1[0x13f]);
    fVar18 = fVar19 * 1e-05;
    cVar6 = *(float *)(param_1 + 0x141) + 0.11 < fVar18;
    plStackX_8 = (int64_t *)CONCAT71(plStackX_8._1_7_,cVar6);
    bVar1 = *(float *)(param_1 + 0x141) < fVar18;
    if (((((*(uint *)((int64_t)param_1 + 0x56c) & 0x4000) == 0) || ((char)param_1[0x14a] != '\0'))
        || (param_1[0xdb] == 0)) ||
       (((*(char *)(param_1[0xdb] + 0x8be) == '\0' || (system_status_flag == 1)) ||
        (system_status_flag == 4)))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
      if (*(float *)((int64_t)param_1 + 0xa0c) <= fVar18 &&
          fVar18 != *(float *)((int64_t)param_1 + 0xa0c)) {
        function_52a030();
      }
    }
    if ((((char)param_1[0x14a] == '\0') && (!bVar1)) &&
       (2 < (ushort)(*(short *)(param_1[0xcb] + 0x40) - 2U))) {
      if ((bool)cVar6) {
        return;
      }
      iVar8 = Function_5b23c03a();
      if (iVar8 <= (int)(*(int64_t *)(param_1[0x11b] + 0x98d8e0) -
                         *(int64_t *)(param_1[0x11b] + 0x98d8d8) >> 3)) {
        return;
      }
      cVar5 = function_529ac0(param_1,param_2);
      if (cVar5 == '\0') {
        return;
      }
      if (bVar4) {
        function_52a030(param_1,param_2);
      }
      fVar17 = (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x140] * 8) -
                      param_1[0x13f]) * 1e-05;
      *(float *)(param_1 + 0x141) = fVar17;
      *(float *)((int64_t)param_1 + 0xa0c) = fVar17;
      bVar1 = true;
    }
    if ((ushort)(*(short *)(param_1[0xcb] + 0x40) - 2U) < 2) {
      if (*(char *)(render_system_data_config + 0x210) == '\0') {
        AcquireSRWLockShared(param_2);
        function_52b4f0(param_1);
        ReleaseSRWLockShared(param_2);
      }
      if ((((*(uint *)((int64_t)param_1 + 0x56c) & 0x800) != 0) &&
          (*(int64_t *)(param_1[0xe5] + 0x5e0) != 0)) && (5.0 < fVar18)) {
        AcquireSRWLockExclusive(param_2);
        function_52adc0(param_1);
        ReleaseSRWLockExclusive(param_2);
      }
      lVar15 = *(int64_t *)(param_1[0xcb] + 0xd0);
      if (lVar15 != 0) {
        lVar15 = *(int64_t *)(lVar15 + 0x1000);
      }
      fVar19 = fVar19 * fVar19;
      fVar19 = fVar19 * fVar19 * fVar19 * 9.999999e-37;
      AcquireSRWLockShared(param_2);
      if ((*(uint *)((int64_t)param_1 + 0x56c) & 0x800) == 0) {
        cVar6 = *(char *)(lVar15 + 0x208);
        cVar5 = '\0';
        if ('\0' < cVar6) {
          do {
            cVar7 = function_5301a0(*(uint64_t *)(lVar15 + 8 + (int64_t)cVar5 * 8),fVar19,
                                  fVar18 < 3.0);
            if (cVar7 == '\0') {
              ReleaseSRWLockShared(param_2);
              goto LAB_18052a61a;
            }
            cVar5 = cVar5 + '\x01';
          } while (cVar5 < cVar6);
        }
      }
      else {
        lVar10 = param_1[0xb2];
        lVar16 = (int64_t)*(char *)(lVar10 + 0x25e0);
        if (0 < lVar16) {
          lVar14 = 0;
LAB_18052a570:
          cVar6 = *(char *)((int64_t)*(char *)(lVar14 + 0x25d8 + lVar10) + 0x209 + lVar15);
          if (cVar6 < '\0') {
            uVar11 = 0;
          }
          else {
            uVar11 = *(uint64_t *)(lVar15 + 8 + (int64_t)cVar6 * 8);
          }
          cVar6 = function_5301a0(uVar11,fVar19,fVar18 < 3.0);
          if (cVar6 != '\0') goto code_r0x00018052a5a2;
          ReleaseSRWLockShared(param_2);
LAB_18052a61a:
          param_1[0x142] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x143] * 8) + 40000
          ;
          goto LAB_18052a5b9;
        }
      }
LAB_18052a5b1:
      ReleaseSRWLockShared(param_2);
LAB_18052a5b9:
      if ((*(byte *)(param_1[4] + 0x40) & 1) == 0) {
        fVar19 = 29.5;
      }
      else {
        fVar19 = 20.0;
      }
      if ((fVar19 < fVar18) ||
         ((1.0 < fVar18 &&
          (0.0 < (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x143] * 8) -
                        param_1[0x142]) * 1e-05)))) {
        function_51aff0(param_1,0,param_2);
      }
      else if (((*(uint *)((int64_t)param_1 + 0x56c) & 0x800) != 0) &&
              (*(int64_t *)(param_1[0xe5] + 0x5e0) != 0)) {
        lVar16 = (int64_t)*(int *)(param_1[0xe5] + 0x5e8) * 0xa60;
        lVar15 = param_1[0x11b];
        lVar10 = *(int64_t *)(lVar16 + 0x3778 + lVar15);
        if ((lVar10 == 0) || (*(char *)(lVar10 + 0x8be) == '\0')) {
          AcquireSRWLockExclusive(param_2);
          function_52adc0(param_1);
          ReleaseSRWLockExclusive(param_2);
        }
        else {
          lVar10 = *(int64_t *)(lVar16 + 0x30c0 + lVar15);
          fStack_140 = (*(float *)(lVar10 + 0x1b8) + *(float *)(lVar10 + 0x1c8)) * 0.5;
          fStack_144 = (*(float *)(lVar10 + 0x1c4) + *(float *)(lVar10 + 0x1b4)) * 0.5;
          fStack_148 = (*(float *)(lVar10 + 0x1c0) + *(float *)(lVar10 + 0x1b0)) * 0.5;
          local_var_13c = 0x7f7fffff;
          fStack_160 = *(float *)(lVar10 + 0x1c8) - *(float *)(lVar10 + 0x1b8);
          fStack_164 = *(float *)(lVar10 + 0x1c4) - *(float *)(lVar10 + 0x1b4);
          fStack_168 = *(float *)(lVar10 + 0x1c0) - *(float *)(lVar10 + 0x1b0);
          local_var_15c = 0x7f7fffff;
          local_var_158 = 0;
          local_var_154 = 0;
          local_var_150 = 0x7f7fffff3f800000;
          Utilities_DataValidator(&fStack_178);
          if (3.0 < *(float *)(*(int64_t *)(lVar16 + 0x30c0 + lVar15) + 0x28)) {
            function_085970(&fStack_178,0x3e19999a);
          }
          if (*(int *)(lVar16 + 0x3608 + lVar15) == 1) {
            AcquireSRWLockExclusive(param_2);
            (**(code **)(**(int64_t **)(param_1[0xe5] + 0x5e0) + 0x98))
                      (*(int64_t **)(param_1[0xe5] + 0x5e0),&fStack_178);
            ReleaseSRWLockExclusive(param_2);
          }
          else {
            AcquireSRWLockExclusive(param_2);
            function_52adc0(param_1);
            ReleaseSRWLockExclusive(param_2);
          }
        }
      }
      cVar6 = (char)plStackX_8;
    }
    if ((((bVar1) && ((char)param_1[0x14a] == '\0')) && (param_1[0xcb] != 0)) &&
       (*(short *)(param_1[0xcb] + 0x40) == 0)) {
      if (cVar6 == '\0') {
        lVar15 = param_1[0x11b];
        plStackX_8 = param_1;
        iVar8 = Function_5b23c03a();
        lVar10 = param_1[0xdb];
        iVar9 = _Mtx_lock(param_2 + 0x58);
        if (iVar9 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar9);
        }
        plVar12 = (int64_t *)(lVar15 + 0x98d8d8);
        if ((uint64_t)(*(int64_t *)(lVar15 + 0x98d8e0) - *plVar12 >> 3) <
            (uint64_t)(int64_t)iVar8) {
          SystemSecurity_Manager(plVar12,&plStackX_8);
          uVar11 = *(uint64_t *)(*(int64_t *)(lVar10 + 0x8a8) + 0x260);
          function_2feaf0(uVar11,1);
          lVar10 = function_3009f0(uVar11);
          lVar15 = param_1[0x145];
          *(int64_t *)(lVar10 + 0x1008) = param_1[0x144];
          *(int64_t *)(lVar10 + 0x1010) = lVar15;
          uVar2 = *(int32_t *)((int64_t)param_1 + 0xa34);
          lVar15 = param_1[0x147];
          uVar3 = *(int32_t *)((int64_t)param_1 + 0xa3c);
          *(int *)(lVar10 + 0x1018) = (int)param_1[0x146];
          *(int32_t *)(lVar10 + 0x101c) = uVar2;
          *(int *)(lVar10 + 0x1020) = (int)lVar15;
          *(int32_t *)(lVar10 + 0x1024) = uVar3;
          bVar1 = true;
        }
        else {
          lVar15 = *(int64_t *)(*(int64_t *)(lVar10 + 0x8a8) + 0x260);
          bVar1 = false;
          if (*(short *)(lVar15 + 0x40) != 0) {
            if (*(float *)(lVar15 + 0x3c) < 0.0) {
              *(int32_t *)(lVar15 + 0x34) = 0x3dcccccd;
            }
            else {
              *(float *)(lVar15 + 0x34) = *(float *)(lVar15 + 0x3c) + 1.1920929e-07;
            }
            if ((*(int64_t *)(lVar15 + 0x10) != 0) &&
               (lVar10 = *(int64_t *)(*(int64_t *)(lVar15 + 0x10) + 0x20), lVar10 != 0)) {
              function_1b6ae0(lVar10,lVar15);
            }
            *(int16_t *)(lVar15 + 0x40) = 0;
            if ((*(int64_t *)(lVar15 + 0x130) != 0) || (*(int64_t *)(lVar15 + 0x138) != 0)) {
              (**(code **)(lVar15 + 0x138))(*(int64_t *)(lVar15 + 0x130),lVar15);
            }
          }
        }
        iVar8 = _Mtx_unlock(param_2 + 0x58);
        if (iVar8 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar8);
        }
        if (bVar1) {
          iVar8 = *(int *)((int64_t)param_1 + 0x564);
          if (((iVar8 != -1) && ((*(uint *)((int64_t)param_1 + 0x56c) & 0x800) != 0)) &&
             (lVar15 = param_1[0xe5], *(int *)(lVar15 + 0x5e8) != iVar8)) {
            lVar10 = param_1[0x11b];
            if (*(int64_t *)((int64_t)iVar8 * 0xa60 + 0x36f8 + lVar10) != 0) {
              *(int *)(lVar15 + 0x5e8) = iVar8;
              lVar15 = *(int64_t *)((int64_t)iVar8 * 0xa60 + 0x30c0 + lVar10);
              pfVar13 = (float *)(lVar15 + 0x1b0);
              fStack_90 = (*(float *)(lVar15 + 0x1c8) + *(float *)(lVar15 + 0x1b8)) * 0.5;
              fStack_94 = (*(float *)(lVar15 + 0x1c4) + *(float *)(lVar15 + 0x1b4)) * 0.5;
              fStack_98 = (*(float *)(lVar15 + 0x1c0) + *pfVar13) * 0.5;
              local_var_8c = 0x7f7fffff;
              fStack_b0 = *(float *)(lVar15 + 0x1c8) - *(float *)(lVar15 + 0x1b8);
              fStack_b4 = *(float *)(lVar15 + 0x1c4) - *(float *)(lVar15 + 0x1b4);
              fStack_b8 = *(float *)(lVar15 + 0x1c0) - *pfVar13;
              local_var_ac = 0x7f7fffff;
              local_var_a8 = 0;
              local_var_a4 = 0;
              local_var_a0 = 0x3f800000;
              local_var_9c = 0x7f7fffff;
              Utilities_DataValidator(stack_array_c8);
              local_var_150 = *(uint64_t *)(render_system_data_config + 0x28);
              fStack_174 = *pfVar13;
              fStack_170 = pfVar13[1];
              local_var_16c = 0;
              fStack_168 = 3.4028235e+38;
              fStack_164 = pfVar13[4];
              fStack_160 = pfVar13[5];
              local_var_15c = 0;
              local_var_158 = 0x7f7fffff;
              fStack_178 = pfVar13[8] * 0.5;
              plStackX_8 = *(int64_t **)(param_1[0xe5] + 0x5e0);
              *(uint64_t *)(param_1[0xe5] + 0x5e0) = 0;
              if (plStackX_8 != (int64_t *)0x0) {
                (**(code **)(*plStackX_8 + 0x38))();
              }
              function_2f5e40(aplStack_128);
              uVar11 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x140,0x10,3);
              plVar12 = (int64_t *)function_14a1b0(uVar11);
              if (plVar12 != (int64_t *)0x0) {
                plStackX_8 = plVar12;
                (**(code **)(*plVar12 + 0x28))(plVar12);
              }
              plStackX_8 = aplStack_128[0];
              if (aplStack_128[0] != (int64_t *)0x0) {
                lVar15 = *aplStack_128[0];
                aplStack_128[0] = plVar12;
                (**(code **)(lVar15 + 0x38))();
                plVar12 = aplStack_128[0];
              }
              aplStack_128[0] = plVar12;
              uVar11 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x130,8,6);
// WARNING: Subroutine does not return
              memset(uVar11,0,0x130);
            }
            *(int32_t *)(lVar15 + 0x5e8) = 0xffffffff;
          }
        }
      }
      if ((system_status_flag != 1) && (system_status_flag != 4)) {
        function_51b580(param_1,param_2,0);
      }
    }
  }
  return;
code_r0x00018052a5a2:
  lVar14 = lVar14 + 1;
  if (lVar16 <= lVar14) goto LAB_18052a5b1;
  goto LAB_18052a570;
}
// 函数: void function_52adc0(int64_t param_1)
void function_52adc0(int64_t param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  lVar2 = *(int64_t *)(param_1 + 0x728);
  if (*(int64_t *)(lVar2 + 0x5e0) != 0) {
    plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0x660) + 0x318);
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x90))();
      lVar2 = *(int64_t *)(param_1 + 0x728);
    }
    plVar1 = *(int64_t **)(lVar2 + 0x5e0);
    *(uint64_t *)(lVar2 + 0x5e0) = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    *(int32_t *)(*(int64_t *)(param_1 + 0x728) + 0x5e8) = 0xffffffff;
    return;
  }
  *(int32_t *)(lVar2 + 0x5e8) = 0xffffffff;
  return;
}
// WARNING: Removing unreachable block (ram,0x0001804f42d8)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address