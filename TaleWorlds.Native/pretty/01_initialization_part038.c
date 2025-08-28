#include "SystemDataAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 01_initialization_part038.c - 4 个函数
// 函数: void function_06c070(int64_t param_1)
void function_06c070(int64_t param_1)
{
  int64_t *plVar1;
  int *piVar2;
  byte *pbVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  bool bVar7;
  int64_t lVar8;
  char cVar9;
  int64_t lVar10;
  int64_t *plVar11;
  byte *pbVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t *plVar15;
  uint uVar16;
  int iVar17;
  int64_t *plVar18;
  uint64_t *puVar20;
  int64_t lVar21;
  code *pcVar22;
  int64_t *plVar23;
  void *puVar24;
  uint64_t uVar25;
  int8_t stack_array_278 [32];
  uint64_t local_var_258;
  void **pplocal_var_248;
  int64_t *plStack_240;
  int64_t lStack_238;
  int64_t lStack_230;
  int8_t local_var_228;
  uint64_t local_var_218;
  int iStack_210;
  int32_t local_var_20c;
  uint64_t local_var_208;
  void *plocal_var_1f8;
  byte *pbStack_1f0;
  int iStack_1e8;
  byte abStack_1e0 [256];
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  int64_t lStack_d0;
  int64_t lStack_c8;
  int64_t lStack_c0;
  int8_t local_var_b8;
  int8_t stack_array_b0 [16];
  code *pcStack_a0;
  code *pcStack_98;
  int8_t stack_array_90 [16];
  code *pcStack_80;
  code *pcStack_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  int iStack_48;
  int32_t local_var_44;
  int iStack_40;
  int32_t local_var_3c;
  uint64_t local_var_38;
  uint64_t uVar19;
  local_var_208 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_278;
  cVar9 = *(char *)(*(int64_t *)(param_1 + 1000) + 0x58);
  do {
    if ((cVar9 == '\0') || (uVar19 = 0, *(char *)(param_1 + 0x400) != '\0')) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_278);
    }
    plocal_var_1f8 = &rendering_buffer_2008_ptr;
    pbStack_1f0 = abStack_1e0;
    iStack_1e8 = 0;
    abStack_1e0[0] = 0;
    pcStack_a0 = (code *)0x0;
    pcStack_98 = _guard_check_icall;
    pplocal_var_248 = (void **)stack_array_90;
    pcStack_80 = (code *)0x0;
    pcStack_78 = _guard_check_icall;
    lStack_c0 = -1;
    local_var_d8 = 0xffffffffffffffff;
    local_var_e0 = 0xffffffffffffffff;
    lStack_d0 = 0;
    lStack_c8 = 0;
    local_var_b8 = 0;
    lVar13 = *(int64_t *)(param_1 + 0x3c8);
    lVar14 = *(int64_t *)(param_1 + 0x3d0) - lVar13;
    lVar10 = lVar14 >> 0x3f;
    if (lVar14 / 0x1a8 + lVar10 == lVar10) {
      cVar9 = function_06d4e0(param_1 + 200,&plocal_var_1f8);
      if (cVar9 == '\0') {
        lVar13 = param_1 + 0x378;
        local_var_228 = 0;
        lStack_230 = lVar13;
        iVar17 = _Mtx_lock(lVar13);
        if (iVar17 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar17);
        }
        local_var_228 = 1;
        lVar10 = _Xtime_get_ticks();
        lVar14 = (lVar10 + 50000) * 100;
        lVar10 = lVar14 / 1000000000;
        iStack_48 = (int)lVar10;
        iStack_210 = (int)lVar14 + iStack_48 * -1000000000;
        local_var_218._4_4_ = (int32_t)((uint64_t)lVar10 >> 0x20);
        local_var_44 = local_var_218._4_4_;
        local_var_3c = local_var_20c;
        local_var_218 = lVar10;
        iStack_40 = iStack_210;
        iVar17 = _Mtx_current_owns(lVar13);
        if (iVar17 == 0) {
          __Throw_Cpp_error_std__YAXH_Z(4);
        }
        uVar16 = _Cnd_timedwait(param_1 + 0x330,lVar13,&iStack_48);
        if ((uVar16 & 0xfffffffd) != 0) {
          __Throw_C_error_std__YAXH_Z(uVar16);
        }
        cVar9 = function_06d4e0(param_1 + 200,&plocal_var_1f8);
        if (cVar9 == '\0') {
          iVar17 = _Mtx_unlock(lVar13);
          if (iVar17 != 0) {
            __Throw_C_error_std__YAXH_Z(iVar17);
          }
          bVar7 = false;
        }
        else {
          iVar17 = _Mtx_unlock();
          if (iVar17 != 0) {
            __Throw_C_error_std__YAXH_Z(iVar17);
          }
          bVar7 = true;
        }
      }
      else {
        bVar7 = true;
      }
    }
    else {
      iStack_1e8 = *(int *)(lVar13 + 0x10);
      puVar24 = &system_buffer_ptr;
      if (*(void **)(lVar13 + 8) != (void *)0x0) {
        puVar24 = *(void **)(lVar13 + 8);
      }
      strcpy_s(pbStack_1f0,0x100,puVar24);
      local_var_e0 = *(uint64_t *)(lVar13 + 0x118);
      local_var_d8 = *(uint64_t *)(lVar13 + 0x120);
      lStack_d0 = *(int64_t *)(lVar13 + 0x128);
      lStack_c8 = *(int64_t *)(lVar13 + 0x130);
      lStack_c0 = *(int64_t *)(lVar13 + 0x138);
      local_var_b8 = *(int8_t *)(lVar13 + 0x140);
      if (stack_array_b0 != (int8_t *)(lVar13 + 0x148)) {
        if (pcStack_a0 != (code *)0x0) {
          (*pcStack_a0)(stack_array_b0,0,0);
        }
        pcVar22 = *(code **)(lVar13 + 0x158);
        if (pcVar22 != (code *)0x0) {
          (*pcVar22)(stack_array_b0,(int8_t *)(lVar13 + 0x148),1);
          pcVar22 = *(code **)(lVar13 + 0x158);
        }
        pcStack_98 = *(code **)(lVar13 + 0x160);
        pcStack_a0 = pcVar22;
      }
      if (stack_array_90 != (int8_t *)(lVar13 + 0x168)) {
        if (pcStack_80 != (code *)0x0) {
          (*pcStack_80)(stack_array_90,0,0);
        }
        pcVar22 = *(code **)(lVar13 + 0x178);
        if (pcVar22 != (code *)0x0) {
          (*pcVar22)(stack_array_90,(int8_t *)(lVar13 + 0x168),1);
          pcVar22 = *(code **)(lVar13 + 0x178);
        }
        pcStack_78 = *(code **)(lVar13 + 0x180);
        pcStack_80 = pcVar22;
      }
      local_var_70 = *(uint64_t *)(lVar13 + 0x188);
      local_var_68 = *(uint64_t *)(lVar13 + 400);
      local_var_60 = *(uint64_t *)(lVar13 + 0x198);
      local_var_58 = *(uint64_t *)(lVar13 + 0x1a0);
      *(int64_t *)(param_1 + 0x3d0) = *(int64_t *)(param_1 + 0x3d0) + -0x1a8;
      function_069530();
      bVar7 = true;
    }
    puVar20 = *(uint64_t **)(param_1 + 0xc0);
    if ((void *)*puVar20 == &rendering_buffer_2208_ptr) {
      cVar9 = function_068a90(puVar20 + 2,&plStack_240);
      while (cVar9 != '\0') {
        plVar23 = (int64_t *)puVar20[99];
        if (plStack_240 != (int64_t *)0x0) {
          *(int8_t *)(plStack_240 + 4) = 0;
          *plVar23 = *plVar23 - plStack_240[1];
          plVar23[2] = plVar23[2] + plStack_240[1];
          plVar18 = (int64_t *)plStack_240[3];
          plVar15 = (int64_t *)plVar23[3];
          plVar11 = plStack_240;
          if (plVar18 != plVar15) {
            do {
              if ((plVar18 == (int64_t *)0x0) || ((char)plVar18[4] != '\0')) break;
              lVar13 = plVar11[2];
              plVar18[2] = lVar13;
              if (lVar13 != 0) {
                *(int64_t **)(lVar13 + 0x18) = plVar18;
              }
              plVar18[1] = plVar18[1] + plVar11[1];
              *plVar11 = plVar23[0x28005];
              plVar23[0x28005] = (int64_t)plVar11;
              plVar1 = plVar18 + 3;
              plVar15 = (int64_t *)plVar23[3];
              plVar11 = plVar18;
              plVar18 = (int64_t *)*plVar1;
            } while ((int64_t *)*plVar1 != plVar15);
          }
          plVar18 = (int64_t *)plVar11[2];
          while (((plVar11 != plVar15 && (plVar18 != (int64_t *)0x0)) && ((char)plVar18[4] == '\0')
                 )) {
            lVar13 = plVar18[2];
            plVar11[2] = lVar13;
            if (lVar13 != 0) {
              *(int64_t **)(lVar13 + 0x18) = plVar11;
            }
            plVar11[1] = plVar11[1] + plVar18[1];
            *plVar18 = plVar23[0x28005];
            plVar23[0x28005] = (int64_t)plVar18;
            plVar15 = (int64_t *)plVar23[3];
            plVar18 = (int64_t *)plVar11[2];
          }
        }
        cVar9 = function_068a90(puVar20 + 2,&plStack_240);
      }
    }
    else {
      (**(code **)((void *)*puVar20 + 0x18))(puVar20);
    }
    if (bVar7) {
      plVar23 = *(int64_t **)(param_1 + 0xc0);
      uVar25 = uVar19;
      if (0 < iStack_1e8) {
        do {
          uVar25 = uVar25 * 0x1f + (int64_t)(char)pbStack_1f0[uVar19];
          uVar16 = (int)uVar19 + 1;
          uVar19 = (uint64_t)uVar16;
        } while ((int)uVar16 < iStack_1e8);
      }
      plVar18 = (int64_t *)plVar23[0x67];
      for (lVar13 = plVar18[uVar25 % (uint64_t)*(uint *)(plVar23 + 0x68)]; lVar13 != 0;
          lVar13 = *(int64_t *)(lVar13 + 0x120)) {
        iVar17 = *(int *)(lVar13 + 0x10);
        if (iStack_1e8 == iVar17) {
          if (iStack_1e8 != 0) {
            pbVar12 = pbStack_1f0;
            do {
              pbVar3 = pbVar12 + (*(int64_t *)(lVar13 + 8) - (int64_t)pbStack_1f0);
              iVar17 = (uint)*pbVar12 - (uint)*pbVar3;
              if (iVar17 != 0) break;
              pbVar12 = pbVar12 + 1;
            } while (*pbVar3 != 0);
          }
LAB_18006c61e:
          if (iVar17 == 0) {
            if (lVar13 != 0) {
              lVar10 = plVar23[0x68];
              goto LAB_18006c642;
            }
            break;
          }
        }
        else if (iStack_1e8 == 0) goto LAB_18006c61e;
      }
      lVar10 = plVar23[0x68];
      lVar13 = plVar18[lVar10];
LAB_18006c642:
      if ((lVar13 != plVar18[lVar10]) && (lVar13 = *(int64_t *)(lVar13 + 0x118), lVar13 != 0)) {
LAB_18006c852:
        if (lStack_c8 == 0) {
          uVar19 = 0;
          if (lStack_d0 == 0) {
            uVar19 = local_var_d8;
          }
        }
        else {
          uVar19 = local_var_d8;
          if (lStack_d0 == 0) {
            uVar19 = local_var_d8 + lStack_c0;
          }
        }
        LOCK();
        plVar23 = (int64_t *)(param_1 + 0x3f0);
        lVar10 = *plVar23;
        *plVar23 = *plVar23 + uVar19;
        UNLOCK();
        LOCK();
        piVar2 = (int *)(param_1 + 0x3f8);
        iVar17 = *piVar2;
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        puVar20 = *(uint64_t **)(param_1 + 0xc0);
        local_var_258 = puVar20[0x6c];
        if (local_var_258 < uVar19) {
          pbVar12 = &system_buffer_ptr;
          if (pbStack_1f0 != (byte *)0x0) {
            pbVar12 = pbStack_1f0;
          }
// WARNING: Subroutine does not return
          SystemParameterHandler(system_message_context,&memory_allocator_3520_ptr,uVar19,pbVar12);
        }
        if (((local_var_258 < lVar10 + uVar19) ||
            ((uint64_t)(int64_t)*(int *)(param_1 + 0x3fc) < (int64_t)iVar17 + 1U)) ||
           (cVar9 = (**(code **)*puVar20)(puVar20,lVar13,&plocal_var_1f8), cVar9 == '\0')) {
          LOCK();
          *(int64_t *)(param_1 + 0x3f0) = *(int64_t *)(param_1 + 0x3f0) - uVar19;
          UNLOCK();
          LOCK();
          *(int *)(param_1 + 0x3f8) = *(int *)(param_1 + 0x3f8) + -1;
          UNLOCK();
          function_06cc50(param_1 + 0x3c8,&plocal_var_1f8);
LAB_18006ca44:
          pcVar22 = *(code **)(**(int64_t **)(param_1 + 0xc0) + 0x28);
          if (pcVar22 != _guard_check_icall) {
            (*pcVar22)();
          }
          Sleep(1);
        }
        pcVar22 = *(code **)(**(int64_t **)(param_1 + 0xc0) + 0x20);
        if (pcVar22 != _guard_check_icall) {
          (*pcVar22)();
        }
        goto LAB_18006ca95;
      }
      if (*(int *)((int64_t)plVar23 + 0x32c) < (int)plVar23[0x65]) {
        puVar20 = (uint64_t *)*plVar18;
        plVar15 = plVar18;
        if (puVar20 == (uint64_t *)0x0) {
          plVar15 = plVar18 + 1;
          puVar20 = (uint64_t *)*plVar15;
          if (puVar20 == (uint64_t *)0x0) {
            do {
              plVar15 = plVar15 + 1;
              puVar20 = (uint64_t *)*plVar15;
            } while (puVar20 == (uint64_t *)0x0);
            lVar10 = plVar23[0x68];
          }
        }
        if (puVar20 != (uint64_t *)plVar18[lVar10]) {
          do {
            if (*(int *)(puVar20[0x23] + 0x120) == 0) {
              uVar4 = puVar20[0x23];
              *(int *)(plVar23 + 0x65) = (int)plVar23[0x65] + -1;
              (**(code **)(*plVar23 + 0x10))(plVar23,uVar4);
              lVar13 = puVar20[0x24];
              plVar23 = plVar15;
              while (lVar13 == 0) {
                plVar23 = plVar23 + 1;
                lVar13 = *plVar23;
              }
              puVar5 = (uint64_t *)*plVar15;
              puVar6 = (uint64_t *)puVar5[0x24];
              if (puVar5 == puVar20) {
                *plVar15 = (int64_t)puVar6;
              }
              else {
                for (; puVar6 != puVar20; puVar6 = (uint64_t *)puVar6[0x24]) {
                  puVar5 = puVar6;
                }
                puVar5[0x24] = puVar6[0x24];
              }
              *puVar20 = &system_state_ptr;
              pplocal_var_248 = (void **)puVar20;
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner(puVar20);
            }
            puVar20 = (uint64_t *)puVar20[0x24];
            while (puVar20 == (uint64_t *)0x0) {
              plVar15 = plVar15 + 1;
              puVar20 = (uint64_t *)*plVar15;
            }
          } while (puVar20 != *(uint64_t **)(plVar23[0x67] + plVar23[0x68] * 8));
        }
      }
      plVar18 = (int64_t *)(param_1 + 0x3c8);
      lVar13 = 0;
      plVar23 = *(int64_t **)(param_1 + 0xc0);
      if (*(int *)((int64_t)plVar23 + 0x32c) < (int)plVar23[0x65]) {
        uVar19 = *(uint64_t *)(param_1 + 0x3d0);
        if (uVar19 < *(uint64_t *)(param_1 + 0x3d8)) {
          *(uint64_t *)(param_1 + 0x3d0) = uVar19 + 0x1a8;
          function_06cd80(uVar19,&plocal_var_1f8);
          goto LAB_18006ca44;
        }
        lVar10 = *plVar18;
        lVar14 = (int64_t)(uVar19 - lVar10) / 0x1a8;
        if (lVar14 == 0) {
          lVar14 = 1;
LAB_18006c9ac:
          lVar13 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar14 * 0x1a8,*(int8_t *)(param_1 + 0x3e0));
          uVar19 = *(uint64_t *)(param_1 + 0x3d0);
          lVar10 = *plVar18;
        }
        else {
          lVar14 = lVar14 * 2;
          if (lVar14 != 0) goto LAB_18006c9ac;
        }
        function_06de00(&lStack_238,lVar10,uVar19,lVar13);
        lVar8 = lStack_238;
        function_06cd80(lStack_238,&plocal_var_1f8);
        lVar10 = *(int64_t *)(param_1 + 0x3d0);
        lVar21 = *plVar18;
        if (lVar21 != lVar10) {
          do {
            function_069530(lVar21);
            lVar21 = lVar21 + 0x1a8;
          } while (lVar21 != lVar10);
          lVar21 = *plVar18;
        }
        if (lVar21 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(lVar21);
        }
        *plVar18 = lVar13;
        *(int64_t *)(param_1 + 0x3d0) = lVar8 + 0x1a8;
        *(int64_t *)(param_1 + 0x3d8) = lVar14 * 0x1a8 + lVar13;
        goto LAB_18006ca44;
      }
      *(int *)(plVar23 + 0x65) = (int)plVar23[0x65] + 1;
      lVar13 = (**(code **)(*plVar23 + 8))(plVar23,&plocal_var_1f8);
      if (lVar13 != 0) goto LAB_18006c852;
      (*pcStack_78)(stack_array_90);
      pplocal_var_248 = (void **)stack_array_90;
      if (pcStack_80 != (code *)0x0) {
        (*pcStack_80)(stack_array_90,0,0);
      }
      pplocal_var_248 = (void **)stack_array_b0;
      if (pcStack_a0 != (code *)0x0) {
        (*pcStack_a0)(stack_array_b0,0,0);
      }
    }
    else {
      pcVar22 = *(code **)(**(int64_t **)(param_1 + 0xc0) + 0x28);
      if (pcVar22 != _guard_check_icall) {
        (*pcVar22)();
      }
LAB_18006ca95:
      pplocal_var_248 = (void **)stack_array_90;
      if (pcStack_80 != (code *)0x0) {
        (*pcStack_80)(stack_array_90,0,0);
      }
      pplocal_var_248 = (void **)stack_array_b0;
      if (pcStack_a0 != (code *)0x0) {
        (*pcStack_a0)(stack_array_b0,0,0);
      }
    }
    pplocal_var_248 = &plocal_var_1f8;
    plocal_var_1f8 = &system_state_ptr;
    cVar9 = *(char *)(*(int64_t *)(param_1 + 1000) + 0x58);
  } while( true );
}
// 函数: void function_06cb90(int64_t param_1)
void function_06cb90(int64_t param_1)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uVar3 = *(uint64_t *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(uint64_t **)(lVar1 + uVar4 * 8);
      if (puVar2 != (uint64_t *)0x0) {
        *puVar2 = &system_state_ptr;
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(int64_t *)(param_1 + 8) != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_06cc50(int64_t *param_1,int64_t param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  code *pcVar5;
  int64_t lVar6;
  uint64_t stack_special_x_8;
  uVar2 = param_1[1];
  if (uVar2 < (uint64_t)param_1[2]) {
    param_1[1] = uVar2 + 0x1a8;
    stack_special_x_8 = uVar2;
    function_068ff0();
    *(uint64_t *)(uVar2 + 0x118) = *(uint64_t *)(param_2 + 0x118);
    *(uint64_t *)(uVar2 + 0x120) = *(uint64_t *)(param_2 + 0x120);
    *(uint64_t *)(uVar2 + 0x128) = *(uint64_t *)(param_2 + 0x128);
    *(uint64_t *)(uVar2 + 0x130) = *(uint64_t *)(param_2 + 0x130);
    *(uint64_t *)(uVar2 + 0x138) = *(uint64_t *)(param_2 + 0x138);
    *(int8_t *)(uVar2 + 0x140) = *(int8_t *)(param_2 + 0x140);
    *(uint64_t *)(uVar2 + 0x158) = 0;
    *(code **)(uVar2 + 0x160) = _guard_check_icall;
    if (uVar2 + 0x148 != param_2 + 0x148) {
      pcVar5 = *(code **)(param_2 + 0x158);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar2 + 0x148,param_2 + 0x148,1);
        pcVar5 = *(code **)(param_2 + 0x158);
      }
      *(code **)(uVar2 + 0x158) = pcVar5;
      *(uint64_t *)(uVar2 + 0x160) = *(uint64_t *)(param_2 + 0x160);
    }
    *(uint64_t *)(uVar2 + 0x178) = 0;
    *(code **)(uVar2 + 0x180) = _guard_check_icall;
    if (uVar2 + 0x168 != param_2 + 0x168) {
      pcVar5 = *(code **)(param_2 + 0x178);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar2 + 0x168,param_2 + 0x168,1);
        pcVar5 = *(code **)(param_2 + 0x178);
      }
      *(code **)(uVar2 + 0x178) = pcVar5;
      *(uint64_t *)(uVar2 + 0x180) = *(uint64_t *)(param_2 + 0x180);
    }
    *(uint64_t *)(uVar2 + 0x188) = *(uint64_t *)(param_2 + 0x188);
    *(uint64_t *)(uVar2 + 400) = *(uint64_t *)(param_2 + 400);
    *(uint64_t *)(uVar2 + 0x198) = *(uint64_t *)(param_2 + 0x198);
    *(uint64_t *)(uVar2 + 0x1a0) = *(uint64_t *)(param_2 + 0x1a0);
    return uVar2;
  }
  lVar6 = *param_1;
  lVar4 = (int64_t)(uVar2 - lVar6) / 0x1a8;
  if (lVar4 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = lVar4 * 2;
    if (lVar4 == 0) {
      lVar1 = 0;
      goto LAB_18006ccef;
    }
  }
  lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 0x1a8,(char)param_1[3]);
  uVar2 = param_1[1];
  lVar6 = *param_1;
LAB_18006ccef:
  function_06de00(&stack_special_x_8,lVar6,uVar2,lVar1);
  function_06cd80(stack_special_x_8,param_2);
  lVar6 = param_1[1];
  lVar3 = *param_1;
  if (lVar3 != lVar6) {
    do {
      function_069530(lVar3);
      lVar3 = lVar3 + 0x1a8;
    } while (lVar3 != lVar6);
    lVar3 = *param_1;
  }
  if (lVar3 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar3);
  }
  uVar2 = lVar4 * 0x1a8 + lVar1;
  *param_1 = lVar1;
  param_1[1] = stack_special_x_8 + 0x1a8;
  param_1[2] = uVar2;
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_06cc8d(uint64_t param_1,uint64_t param_2,int64_t param_3)
void function_06cc8d(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t in_RAX;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *unaff_RDI;
  int64_t in_R10;
  int64_t local_buffer_50;
  lVar4 = SUB168(SEXT816(in_RAX) * SEXT816(param_3 - in_R10),8);
  lVar4 = (lVar4 >> 7) - (lVar4 >> 0x3f);
  if (lVar4 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = lVar4 * 2;
    if (lVar4 == 0) {
      lVar3 = 0;
      goto LAB_18006ccef;
    }
  }
  lVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 0x1a8,(char)unaff_RDI[3]);
  param_3 = unaff_RDI[1];
  in_R10 = *unaff_RDI;
LAB_18006ccef:
  function_06de00(&local_buffer_00000050,in_R10,param_3,lVar3);
  lVar2 = local_buffer_50;
  function_06cd80(local_buffer_50);
  lVar1 = unaff_RDI[1];
  lVar5 = *unaff_RDI;
  if (lVar5 != lVar1) {
    do {
      function_069530(lVar5);
      lVar5 = lVar5 + 0x1a8;
    } while (lVar5 != lVar1);
    lVar5 = *unaff_RDI;
  }
  if (lVar5 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar5);
  }
  *unaff_RDI = lVar3;
  unaff_RDI[1] = lVar2 + 0x1a8;
  unaff_RDI[2] = lVar4 * 0x1a8 + lVar3;
  return;
}
// 函数: void function_06cd43(void)
void function_06cd43(void)
{
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
int64_t function_06cd80(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  uint64_t uVar2;
  uVar2 = 0xfffffffffffffffe;
  function_068ff0();
  *(uint64_t *)(param_1 + 0x118) = *(uint64_t *)(param_2 + 0x118);
  *(uint64_t *)(param_1 + 0x120) = *(uint64_t *)(param_2 + 0x120);
  *(uint64_t *)(param_1 + 0x128) = *(uint64_t *)(param_2 + 0x128);
  *(uint64_t *)(param_1 + 0x130) = *(uint64_t *)(param_2 + 0x130);
  *(uint64_t *)(param_1 + 0x138) = *(uint64_t *)(param_2 + 0x138);
  *(int8_t *)(param_1 + 0x140) = *(int8_t *)(param_2 + 0x140);
  *(uint64_t *)(param_1 + 0x158) = 0;
  *(code **)(param_1 + 0x160) = _guard_check_icall;
  if (param_1 + 0x148 != param_2 + 0x148) {
    pcVar1 = *(code **)(param_2 + 0x158);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1 + 0x148,param_2 + 0x148,1,param_4,uVar2);
      pcVar1 = *(code **)(param_2 + 0x158);
    }
    *(code **)(param_1 + 0x158) = pcVar1;
    *(uint64_t *)(param_1 + 0x160) = *(uint64_t *)(param_2 + 0x160);
  }
  *(uint64_t *)(param_1 + 0x178) = 0;
  *(code **)(param_1 + 0x180) = _guard_check_icall;
  if (param_1 + 0x168 != param_2 + 0x168) {
    pcVar1 = *(code **)(param_2 + 0x178);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1 + 0x168,param_2 + 0x168,1);
      pcVar1 = *(code **)(param_2 + 0x178);
    }
    *(code **)(param_1 + 0x178) = pcVar1;
    *(uint64_t *)(param_1 + 0x180) = *(uint64_t *)(param_2 + 0x180);
  }
  *(uint64_t *)(param_1 + 0x188) = *(uint64_t *)(param_2 + 0x188);
  *(uint64_t *)(param_1 + 400) = *(uint64_t *)(param_2 + 400);
  *(uint64_t *)(param_1 + 0x198) = *(uint64_t *)(param_2 + 0x198);
  *(uint64_t *)(param_1 + 0x1a0) = *(uint64_t *)(param_2 + 0x1a0);
  return param_1;
}