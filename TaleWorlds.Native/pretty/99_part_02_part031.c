#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_02_part031.c - 3 个函数
// 函数: void function_1a2410(int64_t param_1)
void function_1a2410(int64_t param_1)
{
  int64_t *plVar1;
  int iVar2;
  int64_t *plVar3;
  int32_t *puVar4;
  uint64_t uVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  uint *puVar11;
  uint64_t uVar12;
  int64_t *plVar13;
  function_3986d0(param_1 + 0x607e0);
  lVar7 = *(int64_t *)(param_1 + 0x60860) - *(int64_t *)(param_1 + 0x60858) >> 3;
  plVar3 = (int64_t *)0x0;
  if (lVar7 != 0) {
    plVar3 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 8,*(uint *)(param_1 + 0x60870) & 0xff)
    ;
  }
  plVar13 = *(int64_t **)(param_1 + 0x60860);
  plVar10 = plVar3;
  for (plVar8 = *(int64_t **)(param_1 + 0x60858); plVar1 = plVar3, plVar8 != plVar13;
      plVar8 = plVar8 + 1) {
    plVar1 = (int64_t *)*plVar8;
    *plVar10 = (int64_t)plVar1;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    plVar10 = plVar10 + 1;
  }
  for (; plVar1 != plVar10; plVar1 = plVar1 + 1) {
    lVar7 = *plVar1;
    if ((*(int64_t *)(lVar7 + 0x20) != 0) && (*(int64_t *)(lVar7 + 0x270) != 0)) {
      function_2e8910(lVar7);
      *(int8_t *)(lVar7 + 0x278) = 0;
    }
    function_2eaec0(lVar7,0,1,1,0,0,1,0x17);
  }
  SystemCore_Controller(param_1 + 0x60d10);
  if (*(int64_t *)(param_1 + 0x2838) != 0) {
    function_3a89f0(*(int64_t *)(param_1 + 0x2838) + 0x4c0);
    *(uint64_t *)(param_1 + 0x2838) = 0;
  }
  if (*(int64_t *)(param_1 + 0x260) != 0) {
    function_2d2f50(*(int64_t *)(param_1 + 0x260));
    lVar7 = *(int64_t *)(param_1 + 0x260);
    if (lVar7 != 0) {
      function_2d1970(lVar7);
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar7);
    }
  }
  *(uint64_t *)(param_1 + 0x260) = 0;
  plVar13 = *(int64_t **)(param_1 + 0x81f8);
  *(uint64_t *)(param_1 + 0x81f8) = 0;
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x38))();
  }
  plVar13 = *(int64_t **)(param_1 + 0x8200);
  *(uint64_t *)(param_1 + 0x8200) = 0;
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x38))();
  }
  plVar13 = *(int64_t **)(param_1 + 0x8208);
  *(uint64_t *)(param_1 + 0x8208) = 0;
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x38))();
  }
  plVar13 = *(int64_t **)(param_1 + 0x8210);
  *(uint64_t *)(param_1 + 0x8210) = 0;
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x28c0) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x28c0) + 0x10))();
  }
  plVar13 = *(int64_t **)(param_1 + 0x60858);
  plVar8 = plVar3;
  if (plVar13 < *(int64_t **)(param_1 + 0x60860)) {
    do {
      uVar6 = 0;
      puVar4 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x12,0x13);
      *(int8_t *)puVar4 = 0;
      uVar12 = (uint64_t)puVar4 & 0xffffffffffc00000;
      if (uVar12 != 0) {
        lVar7 = ((int64_t)puVar4 - uVar12 >> 0x10) * 0x50 + 0x80 + uVar12;
        puVar11 = (uint *)(lVar7 - (uint64_t)*(uint *)(lVar7 + 4));
        if ((*(byte *)((int64_t)puVar11 + 0xe) & 2) == 0) {
          uVar6 = puVar11[7];
          if (0x3ffffff < uVar6) {
            uVar6 = *puVar11 << 0x10;
          }
        }
        else {
          uVar6 = puVar11[7];
          uVar9 = (uint64_t)uVar6;
          uVar5 = uVar9;
          if (0x3ffffff < uVar9) {
            uVar5 = (uint64_t)*puVar11 << 0x10;
          }
          if (0x3ffffff < uVar9) {
            uVar6 = *puVar11 << 0x10;
          }
          uVar6 = uVar6 - (int)(((int64_t)puVar4 -
                                (((int64_t)((int64_t)puVar11 + (-0x80 - uVar12)) / 0x50) * 0x10000
                                + uVar12)) % uVar5);
        }
      }
      *puVar4 = 0x69746e45;
      puVar4[1] = 0x77207974;
      puVar4[2] = 0x20687469;
      puVar4[3] = 0x656d616e;
      *(int16_t *)(puVar4 + 4) = 0x20;
      lVar7 = *plVar13;
      iVar2 = *(int *)(lVar7 + 0x298);
      if (0 < iVar2) {
        if ((iVar2 != -0x11) && (uVar6 < iVar2 + 0x12U)) {
          puVar4 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar4,iVar2 + 0x12U,0x10,0x13);
          CoreMemoryPoolCleaner(puVar4);
          iVar2 = *(int *)(lVar7 + 0x298);
        }
// WARNING: Subroutine does not return
        memcpy((int8_t *)((int64_t)puVar4 + 0x11),*(uint64_t *)(lVar7 + 0x290),
               (int64_t)(iVar2 + 1));
      }
      if (puVar4 == (int32_t *)0x0) {
        puVar4 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x44,0x13);
        *(int8_t *)puVar4 = 0;
      }
      else if (uVar6 < 0x44) {
        puVar4 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar4,0x44,0x10,0x13);
        CoreMemoryPoolCleaner(puVar4);
      }
      *(uint64_t *)((int64_t)puVar4 + 0x11) = 0x6e6f6e2073616820;
      *(uint64_t *)((int64_t)puVar4 + 0x19) = 0x657361656c657220;
      *(int32_t *)((int64_t)puVar4 + 0x21) = 0x65722064;
      *(int32_t *)((int64_t)puVar4 + 0x25) = 0x65726566;
      *(int32_t *)((int64_t)puVar4 + 0x29) = 0x7365636e;
      *(int32_t *)((int64_t)puVar4 + 0x2d) = 0x20746120;
      *(int32_t *)((int64_t)puVar4 + 0x31) = 0x6e656373;
      *(int32_t *)((int64_t)puVar4 + 0x35) = 0x65642065;
      *(int32_t *)((int64_t)puVar4 + 0x39) = 0x75727473;
      *(int32_t *)((int64_t)puVar4 + 0x3d) = 0x6f697463;
      *(int16_t *)((int64_t)puVar4 + 0x41) = 0xa6e;
      *(int8_t *)((int64_t)puVar4 + 0x43) = 0;
      if (puVar4 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(puVar4);
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 < *(int64_t **)(param_1 + 0x60860));
  }
  for (; plVar8 != plVar10; plVar8 = plVar8 + 1) {
    if ((int64_t *)*plVar8 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar8 + 0x38))();
    }
  }
  if (plVar3 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(plVar3);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1a29f0(int64_t param_1,char param_2,char param_3,uint64_t param_4)
void function_1a29f0(int64_t param_1,char param_2,char param_3,uint64_t param_4)
{
  int64_t *plVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uVar10 = 0xfffffffffffffffe;
  if (system_context_ptr != 0) {
    SystemCore_FileSystem();
  }
  uVar7 = 0;
  lVar5 = *(int64_t *)(param_1 + 0x60858);
  uVar6 = uVar7;
  uVar9 = uVar7;
  if (*(int64_t *)(param_1 + 0x60860) - lVar5 >> 3 != 0) {
    do {
      function_2f0600(*(uint64_t *)(lVar5 + uVar6),0xffffffff,lVar5,param_4,uVar10);
      uVar8 = (int)uVar9 + 1;
      lVar5 = *(int64_t *)(param_1 + 0x60858);
      uVar6 = uVar6 + 8;
      uVar9 = (uint64_t)uVar8;
    } while ((uint64_t)(int64_t)(int)uVar8 <
             (uint64_t)(*(int64_t *)(param_1 + 0x60860) - lVar5 >> 3));
  }
  uVar6 = uVar7;
  uVar9 = uVar7;
  if (*(int64_t *)(param_1 + 0x60d18) - *(int64_t *)(param_1 + 0x60d10) >> 3 != 0) {
    do {
      function_2f0600(*(uint64_t *)(uVar6 + *(int64_t *)(param_1 + 0x60d10)),0xffffffff);
      uVar8 = (int)uVar9 + 1;
      uVar6 = uVar6 + 8;
      uVar9 = (uint64_t)uVar8;
    } while ((uint64_t)(int64_t)(int)uVar8 <
             (uint64_t)(*(int64_t *)(param_1 + 0x60d18) - *(int64_t *)(param_1 + 0x60d10) >> 3));
  }
  plVar1 = *(int64_t **)(param_1 + 0x60c50);
  *(uint64_t *)(param_1 + 0x60c50) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0x60c58);
  *(uint64_t *)(param_1 + 0x60c58) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0x60c68);
  *(uint64_t *)(param_1 + 0x60c68) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  uVar6 = uVar7;
  if (*(int64_t *)(param_1 + 0x60c28) - *(int64_t *)(param_1 + 0x60c20) >> 3 != 0) {
    do {
      function_3162f0(*(uint64_t *)(uVar7 + *(int64_t *)(param_1 + 0x60c20)));
      uVar8 = (int)uVar6 + 1;
      uVar7 = uVar7 + 8;
      uVar6 = (uint64_t)uVar8;
    } while ((uint64_t)(int64_t)(int)uVar8 <
             (uint64_t)(*(int64_t *)(param_1 + 0x60c28) - *(int64_t *)(param_1 + 0x60c20) >> 3));
  }
  function_143430(param_1 + 0x3018);
  lVar5 = *(int64_t *)(param_1 + 0x3360);
  if (lVar5 != 0) {
    for (lVar4 = *(int64_t *)(lVar5 + 0xe48); lVar4 != lVar5 + 0xe40;
        lVar4 = Function_7bfb2422(lVar4)) {
      SystemCore_NetworkHandler(*(uint64_t *)(lVar4 + 0x28),0);
    }
    for (lVar4 = *(int64_t *)(lVar5 + 0xe78); lVar4 != lVar5 + 0xe70;
        lVar4 = Function_7bfb2422(lVar4)) {
      SystemCore_NetworkHandler(*(uint64_t *)(lVar4 + 0x28),0);
    }
    CoreEngine_0572D0(lVar5 + 0xe40);
    CoreEngine_0572D0(lVar5 + 0xe70);
    *(int8_t *)(lVar5 + 0xe18) = 1;
  }
  function_397960(param_1 + 14000);
  if (*(int64_t *)(param_1 + 0x448) != 0) {
    function_374050();
  }
  if (*(int64_t *)(param_1 + 0x260) != 0) {
    function_2d2f50();
    function_2d33c0(*(uint64_t *)(param_1 + 0x260));
  }
  if (*(int64_t *)(param_1 + 0x358) != 0) {
    function_1ba720();
    *(uint64_t *)(param_1 + 0x358) = 0;
  }
  if ((param_2 != '\0') && (*(int64_t *)(param_1 + 0x60b80) != 0)) {
    if ((*(int64_t **)(param_1 + 0x318) != (int64_t *)0x0) &&
       (((*(char *)(param_1 + 0x2a61) != '\0' && (*(char *)(param_1 + 0x2a62) != '\0')) &&
        (*(int *)(system_system_data_config + 0xaf0) != 0)))) {
      (**(code **)(**(int64_t **)(param_1 + 0x318) + 0x18))();
      (**(code **)(**(int64_t **)(param_1 + 0x318) + 0x38))();
    }
    function_1c0f40(param_1 + 0xe0);
    function_3b0350(*(uint64_t *)(param_1 + 0x60b80));
    puVar2 = *(uint64_t **)(param_1 + 0x60b80);
    if (puVar2 != (uint64_t *)0x0) {
      lVar5 = __RTCastToVoid(puVar2);
      (**(code **)*puVar2)(puVar2,0);
      if (lVar5 != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(lVar5);
      }
    }
    *(uint64_t *)(param_1 + 0x60b80) = 0;
    lVar5 = *(int64_t *)(param_1 + 0x2908);
    if (lVar5 != 0) {
      function_3a5ff0(lVar5);
      if (*(int64_t **)(lVar5 + 0x48) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(lVar5 + 0x48) + 0x38))();
      }
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar5);
    }
    *(uint64_t *)(param_1 + 0x2908) = 0;
    plVar1 = *(int64_t **)(param_1 + 0x2918);
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(*plVar1 + 0x318) + 0x90))
                (*(int64_t **)(*plVar1 + 0x318),plVar1[1]);
      if ((int64_t *)plVar1[1] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)plVar1[1] + 0x38))();
      }
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(plVar1);
    }
    *(uint64_t *)(param_1 + 0x2918) = 0;
    *(uint64_t *)(param_1 + 0x60b80) = 0;
    if (*(int64_t *)(param_1 + 0x448) != 0) {
      function_374e60();
      *(int8_t *)(*(int64_t *)(param_1 + 0x448) + 0x2314) = 1;
    }
    function_389800(param_1 + 0x29a0);
  }
  if (*(int64_t *)(param_1 + 0x81f8) != 0) {
    function_2f0600(*(int64_t *)(param_1 + 0x81f8),0xffffffff);
  }
  if (param_3 != '\0') {
    function_24e890(param_1 + 0x570);
  }
  *(int32_t *)(param_1 + 0x27c0) = 1;
  *(int8_t *)(param_1 + 0x3f31) = 1;
  if (system_context_ptr != 0) {
    RenderingSystem_CameraProcessor(*(uint64_t *)(*(int64_t *)(system_context_ptr + 8) + 8));
    lVar5 = system_message_buffer + 0x20;
    iVar3 = _Mtx_lock(lVar5);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    iVar3 = _Mtx_unlock(lVar5);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1a2ea0(int64_t param_1)
void function_1a2ea0(int64_t param_1)
{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *plVar6;
  uint uVar7;
  code *pcVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t *plVar13;
  function_1a29f0(param_1,1);
  puVar2 = (uint64_t *)(param_1 + 0xe0);
  function_1c0f40(puVar2);
  function_38c3d0(param_1 + 0x2a68);
  uVar11 = 0;
  plVar13 = *(int64_t **)(param_1 + 0x81f8);
  *(uint64_t *)(param_1 + 0x81f8) = 0;
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x38))();
  }
  plVar13 = *(int64_t **)(param_1 + 0x8200);
  *(uint64_t *)(param_1 + 0x8200) = 0;
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x38))();
  }
  plVar13 = *(int64_t **)(param_1 + 0x8208);
  *(uint64_t *)(param_1 + 0x8208) = 0;
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x38))();
  }
  plVar13 = *(int64_t **)(param_1 + 0x8210);
  *(uint64_t *)(param_1 + 0x8210) = 0;
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x38))();
  }
  puVar3 = *(uint64_t **)(param_1 + 0x3360);
  if (puVar3 != (uint64_t *)0x0) {
    lVar5 = __RTCastToVoid(puVar3);
    (**(code **)*puVar3)(puVar3,0);
    if (lVar5 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar5);
    }
  }
  *(uint64_t *)(param_1 + 0x3360) = 0;
  function_2eaec0(*(uint64_t *)(param_1 + 0x90),0,0,1,0,0,0,0x18);
  lVar5 = *(int64_t *)(param_1 + 0x448);
  if (lVar5 != 0) {
    function_373d90(lVar5);
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(lVar5);
  }
  *(uint64_t *)(param_1 + 0x448) = 0;
  if (*(int64_t *)(param_1 + 800) != 0) {
    function_31dfa0();
    plVar13 = *(int64_t **)(param_1 + 800);
    *(uint64_t *)(param_1 + 800) = 0;
    if (plVar13 != (int64_t *)0x0) {
      (**(code **)(*plVar13 + 0x38))();
    }
  }
  function_389800(param_1 + 0x29a0);
  lVar5 = *(int64_t *)(param_1 + 0x318);
  if (lVar5 != 0) {
    lVar12 = lVar5 + 0x90;
    if (lVar12 != param_1 + 0x608d0) {
      if (*(code **)(lVar5 + 0xa0) != (code *)0x0) {
        (**(code **)(lVar5 + 0xa0))(lVar12,0,0);
      }
      pcVar8 = *(code **)(param_1 + 0x608e0);
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(lVar12,param_1 + 0x608d0,1);
        pcVar8 = *(code **)(param_1 + 0x608e0);
      }
      *(code **)(lVar5 + 0xa0) = pcVar8;
      *(uint64_t *)(lVar5 + 0xa8) = *(uint64_t *)(param_1 + 0x608e8);
    }
  }
  *(int8_t *)(param_1 + 0x60a0c) = 0;
  *(uint64_t *)(param_1 + 0x60a38) = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 0x60a40) = 0xbf800000;
  *(int32_t *)(param_1 + 0x60a50) = 0xffffffff;
  if (*(int64_t *)(param_1 + 0x60b40) != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(uint64_t *)(param_1 + 0x60b40) = 0;
  lVar5 = *(int64_t *)(param_1 + 0x60b20);
  uVar9 = uVar11;
  uVar10 = uVar11;
  if (*(int64_t *)(param_1 + 0x60b28) - lVar5 >> 3 != 0) {
    do {
      lVar5 = *(int64_t *)(uVar10 + lVar5);
      if (lVar5 != 0) {
        function_1fddb0(lVar5);
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(lVar5);
      }
      *(uint64_t *)(uVar10 + *(int64_t *)(param_1 + 0x60b20)) = 0;
      uVar7 = (int)uVar9 + 1;
      lVar5 = *(int64_t *)(param_1 + 0x60b20);
      uVar9 = (uint64_t)uVar7;
      uVar10 = uVar10 + 8;
    } while ((uint64_t)(int64_t)(int)uVar7 <
             (uint64_t)(*(int64_t *)(param_1 + 0x60b28) - lVar5 >> 3));
  }
  *(int64_t *)(param_1 + 0x60b28) = lVar5;
  puVar3 = *(uint64_t **)(param_1 + 0x60b80);
  if (puVar3 != (uint64_t *)0x0) {
    lVar5 = __RTCastToVoid(puVar3);
    (**(code **)*puVar3)(puVar3,0);
    if (lVar5 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar5);
    }
  }
  *(uint64_t *)(param_1 + 0x60b80) = 0;
  function_1a2410(param_1);
  Function_5f413255(param_1 + 0x28c8);
  if (*(char *)(param_1 + 0x2901) != '\0') {
    *(int8_t *)(param_1 + 0x2901) = 0;
    function_1c0df0(param_1 + 0x28c8);
  }
  function_3837e0(param_1 + 0x120);
  lVar5 = *(int64_t *)(param_1 + 0x2908);
  if (lVar5 != 0) {
    function_3a5ff0(lVar5);
    if (*(int64_t **)(lVar5 + 0x48) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(lVar5 + 0x48) + 0x38))();
    }
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(lVar5);
  }
  *(uint64_t *)(param_1 + 0x2908) = 0;
  if (*(int64_t *)(param_1 + 0x328) != 0) {
    function_1be4d0();
    plVar13 = *(int64_t **)(param_1 + 0xe8);
    plVar6 = (int64_t *)*puVar2;
    if (plVar6 != plVar13) {
      do {
        if (*plVar6 == *(int64_t *)(param_1 + 0x328)) break;
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar13);
      if (plVar6 != plVar13) {
        plVar1 = plVar6 + 1;
        if (plVar1 < plVar13) {
// WARNING: Subroutine does not return
          memmove(plVar6,plVar1,(int64_t)plVar13 - (int64_t)plVar1);
        }
        *(int64_t **)(param_1 + 0xe8) = plVar13 + -1;
      }
    }
    puVar3 = *(uint64_t **)(param_1 + 0x328);
    if (puVar3 != (uint64_t *)0x0) {
      lVar5 = __RTCastToVoid(puVar3);
      (**(code **)*puVar3)(puVar3,0);
      if (lVar5 != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(lVar5);
      }
    }
    *(uint64_t *)(param_1 + 0x328) = 0;
  }
  if (*(int64_t *)(param_1 + 0x330) != 0) {
    plVar13 = *(int64_t **)(param_1 + 0xe8);
    plVar6 = (int64_t *)*puVar2;
    if (plVar6 != plVar13) {
      do {
        if (*plVar6 == *(int64_t *)(param_1 + 0x330)) break;
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar13);
      if (plVar6 != plVar13) {
        plVar1 = plVar6 + 1;
        if (plVar1 < plVar13) {
// WARNING: Subroutine does not return
          memmove(plVar6,plVar1,(int64_t)plVar13 - (int64_t)plVar1);
        }
        *(int64_t **)(param_1 + 0xe8) = plVar13 + -1;
      }
    }
    puVar3 = *(uint64_t **)(param_1 + 0x330);
    if (puVar3 != (uint64_t *)0x0) {
      lVar5 = __RTCastToVoid(puVar3);
      (**(code **)*puVar3)(puVar3,0);
      if (lVar5 != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(lVar5);
      }
    }
    *(uint64_t *)(param_1 + 0x330) = 0;
  }
  SystemCore_Controller(param_1 + 0x81b0);
  *(int32_t *)(param_1 + 0x36a8) = 0xffffffff;
  function_1b9920(param_1 + 0x60c80);
  iVar4 = (int)(*(int64_t *)(param_1 + 0x29b8) - *(int64_t *)(param_1 + 0x29b0) >> 3) + -1;
  lVar5 = (int64_t)iVar4;
  if (-1 < iVar4) {
    do {
      function_2fc520(*(uint64_t *)(*(int64_t *)(param_1 + 0x29b0) + lVar5 * 8),0);
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(uint64_t *)(param_1 + 0x29b8) = *(uint64_t *)(param_1 + 0x29b0);
  puVar3 = *(uint64_t **)(param_1 + 0x318);
  if (puVar3 != (uint64_t *)0x0) {
    lVar5 = __RTCastToVoid(puVar3);
    (**(code **)*puVar3)(puVar3,0);
    if (lVar5 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar5);
    }
  }
  *(uint64_t *)(param_1 + 0x318) = 0;
  plVar13 = (int64_t *)(param_1 + 0x2f0);
  lVar5 = 4;
  do {
    plVar6 = (int64_t *)*plVar13;
    *plVar13 = 0;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x38))();
    }
    plVar13 = plVar13 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  SystemCore_Controller(param_1 + 0x2970);
  function_24e890(param_1 + 0x570);
  if ((*(int *)(param_1 + 0x286c) != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))();
  }
  *(int32_t *)(param_1 + 0x286c) = 0;
  puVar3 = *(uint64_t **)(param_1 + 0x28c0);
  if (puVar3 != (uint64_t *)0x0) {
    lVar5 = __RTCastToVoid(puVar3);
    (**(code **)*puVar3)(puVar3,0);
    if (lVar5 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar5);
    }
  }
  *(uint64_t *)(param_1 + 0x28c0) = 0;
  if (*(int64_t *)(param_1 + 0x81f0) == 0) {
    *(uint64_t *)(param_1 + 0x81f0) = 0;
    function_1b0140(param_1);
    if (*(int64_t *)(param_1 + 0x3a8) != 0) {
      function_2c60f0();
      lVar5 = *(int64_t *)(param_1 + 0x3a8);
      if (lVar5 != 0) {
        function_2c60f0(lVar5);
        function_246760(lVar5);
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(lVar5);
      }
      *(uint64_t *)(param_1 + 0x3a8) = 0;
    }
    if (*(int64_t **)(param_1 + 0x60b80) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(param_1 + 0x60b80) + 0x68))();
    }
    if (*(int64_t *)(param_1 + 0x358) != 0) {
      function_1ba720();
      *(uint64_t *)(param_1 + 0x358) = 0;
    }
    uVar9 = uVar11;
    if ((int64_t)(*(int64_t *)(param_1 + 0xe8) - *puVar2) >> 3 != 0) {
      do {
        (**(code **)(**(int64_t **)(uVar9 + *puVar2) + 0x48))();
        uVar7 = (int)uVar11 + 1;
        uVar11 = (uint64_t)uVar7;
        uVar9 = uVar9 + 8;
      } while ((uint64_t)(int64_t)(int)uVar7 <
               (uint64_t)((int64_t)(*(int64_t *)(param_1 + 0xe8) - *puVar2) >> 3));
    }
    function_3981a0(param_1 + 0x607e0);
    plVar13 = *(int64_t **)(param_1 + 0x8258);
    *(uint64_t *)(param_1 + 0x8258) = 0;
    if (plVar13 != (int64_t *)0x0) {
      (**(code **)(*plVar13 + 0x38))();
    }
    plVar13 = *(int64_t **)(param_1 + 0x8260);
    *(uint64_t *)(param_1 + 0x8260) = 0;
    if (plVar13 != (int64_t *)0x0) {
      (**(code **)(*plVar13 + 0x38))();
    }
    return;
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}
uint64_t function_1a35b0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar2;
  uVar2 = 0xfffffffffffffffe;
  uVar1 = *(uint64_t *)(param_1 + 0x340);
  pplStackX_18 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_2;
  plStackX_10 = param_2;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  function_3a61d0(uVar1,&plStackX_8,param_3,param_4,uVar2);
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  return 1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address