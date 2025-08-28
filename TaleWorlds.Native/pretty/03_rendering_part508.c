#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part508.c - 7 个函数
// 函数: void function_53be00(void)
void function_53be00(void)
{
  uint64_t uVar1;
  int64_t lVar2;
  char cVar3;
  uint uVar4;
  int64_t lVar5;
  int64_t *plVar6;
  uint64_t *puVar7;
  void *puVar8;
  uint64_t uVar9;
  uint uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t lVar15;
  uint uVar16;
  int8_t stack_special_x_8;
  int8_t stack_array_38 [32];
  lVar2 = render_system_memory;
  uVar9 = 0;
  lVar5 = *(int64_t *)(render_system_memory + 0x38);
  lVar13 = *(int64_t *)(render_system_memory + 0x30);
  uVar16 = (uint)(lVar5 - lVar13 >> 3);
  lVar15 = (int64_t)(int)uVar16;
  uVar11 = uVar9;
  if (0 < (int)uVar16) {
    do {
      function_53da80(lVar2,stack_array_38);
      uVar11 = uVar11 + 1;
    } while ((int64_t)uVar11 < lVar15);
    lVar13 = *(int64_t *)(lVar2 + 0x30);
    lVar5 = *(int64_t *)(lVar2 + 0x38);
    uVar11 = uVar9;
    if (0 < (int)uVar16) {
      do {
        function_53c000(*(uint64_t *)(*(int64_t *)(lVar2 + 0x30) + uVar11 * 8));
        uVar11 = uVar11 + 1;
      } while ((int64_t)uVar11 < lVar15);
      lVar13 = *(int64_t *)(lVar2 + 0x30);
      lVar5 = *(int64_t *)(lVar2 + 0x38);
    }
  }
  if (uVar16 != 0) {
    do {
      uVar1 = system_context_ptr;
      lVar5 = PerformanceOptimizer(system_context_ptr);
      if (lVar5 != 0) {
        plVar6 = (int64_t *)PerformanceOptimizer(uVar1);
        (**(code **)(*plVar6 + 0x20))(plVar6,0);
      }
      lVar5 = *(int64_t *)(lVar2 + 0x38);
      uVar4 = 0;
      lVar13 = *(int64_t *)(lVar2 + 0x30);
      uVar11 = uVar9;
      uVar12 = uVar9;
      uVar14 = uVar9;
      if (lVar5 - lVar13 >> 3 != 0) {
        do {
          for (puVar7 = *(uint64_t **)
                         (*(int64_t *)(lVar2 + 8) +
                         (*(uint64_t *)(uVar12 + lVar13) % (uint64_t)*(uint *)(lVar2 + 0x10)) * 8)
              ; puVar7 != (uint64_t *)0x0; puVar7 = (uint64_t *)puVar7[7]) {
            if (*(uint64_t *)(uVar12 + lVar13) == *puVar7) goto LAB_18053bf36;
          }
          puVar7 = *(uint64_t **)(*(int64_t *)(lVar2 + 8) + *(int64_t *)(lVar2 + 0x10) * 8);
LAB_18053bf36:
          lVar5 = *(int64_t *)(lVar2 + 0x38);
          lVar13 = *(int64_t *)(lVar2 + 0x30);
          uVar4 = (uint)uVar14 + 1;
          if (*(char *)((int64_t)puVar7 + 0x34) == '\0') {
            uVar4 = (uint)uVar14;
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (uint64_t)uVar10;
          uVar12 = uVar12 + 8;
          uVar14 = (uint64_t)uVar4;
        } while ((uint64_t)(int64_t)(int)uVar10 < (uint64_t)(lVar5 - lVar13 >> 3));
      }
    } while (uVar4 != uVar16);
  }
  function_53e6e0(lVar13,lVar5,lVar5 - lVar13 >> 3,stack_special_x_8);
  if (0 < lVar15) {
    do {
      lVar5 = *(int64_t *)(*(int64_t *)(lVar2 + 0x30) + uVar9 * 8);
      uVar1 = *(uint64_t *)(*(int64_t *)(lVar5 + 0x200) + 0x20);
      cVar3 = function_53c200(lVar5);
      if (cVar3 == '\0') {
        puVar8 = &system_buffer_ptr;
        if (*(void **)(lVar5 + 0x18) != (void *)0x0) {
          puVar8 = *(void **)(lVar5 + 0x18);
        }
        SystemDataInitializer(&processed_var_8840_ptr,puVar8);
      }
      else {
        function_53c7b0(lVar5,uVar1);
      }
      uVar9 = uVar9 + 1;
    } while ((int64_t)uVar9 < lVar15);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_53be16(void)
void function_53be16(void)
{
  uint64_t uVar1;
  char cVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint64_t *puVar6;
  void *puVar7;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint uVar14;
  int8_t local_buffer_70;
  lVar4 = *(int64_t *)(unaff_RBX + 0x38);
  lVar11 = *(int64_t *)(unaff_RBX + 0x30);
  uVar14 = (uint)(lVar4 - lVar11 >> 3);
  lVar13 = (int64_t)(int)uVar14;
  if (0 < (int)uVar14) {
    uVar10 = unaff_RBP & 0xffffffff;
    do {
      function_53da80();
      uVar10 = uVar10 + 1;
    } while ((int64_t)uVar10 < lVar13);
    lVar11 = *(int64_t *)(unaff_RBX + 0x30);
    lVar4 = *(int64_t *)(unaff_RBX + 0x38);
    uVar10 = unaff_RBP;
    if (0 < (int)uVar14) {
      do {
        function_53c000(*(uint64_t *)(*(int64_t *)(unaff_RBX + 0x30) + uVar10 * 8));
        uVar10 = uVar10 + 1;
      } while ((int64_t)uVar10 < lVar13);
      lVar11 = *(int64_t *)(unaff_RBX + 0x30);
      lVar4 = *(int64_t *)(unaff_RBX + 0x38);
    }
  }
  if (uVar14 != 0) {
    do {
      uVar1 = system_context_ptr;
      lVar4 = PerformanceOptimizer(system_context_ptr);
      if (lVar4 != 0) {
        plVar5 = (int64_t *)PerformanceOptimizer(uVar1);
        (**(code **)(*plVar5 + 0x20))(plVar5,0);
      }
      lVar4 = *(int64_t *)(unaff_RBX + 0x38);
      uVar12 = unaff_RBP & 0xffffffff;
      uVar3 = (uint)unaff_RBP;
      lVar11 = *(int64_t *)(unaff_RBX + 0x30);
      uVar9 = unaff_RBP & 0xffffffff;
      uVar10 = unaff_RBP;
      if (lVar4 - lVar11 >> 3 != 0) {
        do {
          for (puVar6 = *(uint64_t **)
                         (*(int64_t *)(unaff_RBX + 8) +
                         (*(uint64_t *)(uVar10 + lVar11) % (uint64_t)*(uint *)(unaff_RBX + 0x10))
                         * 8); puVar6 != (uint64_t *)0x0; puVar6 = (uint64_t *)puVar6[7]) {
            if (*(uint64_t *)(uVar10 + lVar11) == *puVar6) goto LAB_18053bf36;
          }
          puVar6 = *(uint64_t **)
                    (*(int64_t *)(unaff_RBX + 8) + *(int64_t *)(unaff_RBX + 0x10) * 8);
LAB_18053bf36:
          lVar4 = *(int64_t *)(unaff_RBX + 0x38);
          lVar11 = *(int64_t *)(unaff_RBX + 0x30);
          uVar3 = (uint)uVar12 + 1;
          if (*(char *)((int64_t)puVar6 + 0x34) == '\0') {
            uVar3 = (uint)uVar12;
          }
          uVar8 = (int)uVar9 + 1;
          uVar9 = (uint64_t)uVar8;
          uVar12 = (uint64_t)uVar3;
          uVar10 = uVar10 + 8;
        } while ((uint64_t)(int64_t)(int)uVar8 < (uint64_t)(lVar4 - lVar11 >> 3));
      }
    } while (uVar3 != uVar14);
  }
  function_53e6e0(lVar11,lVar4,lVar4 - lVar11 >> 3,local_buffer_70);
  if (0 < lVar13) {
    do {
      lVar4 = *(int64_t *)(*(int64_t *)(unaff_RBX + 0x30) + unaff_RBP * 8);
      uVar1 = *(uint64_t *)(*(int64_t *)(lVar4 + 0x200) + 0x20);
      cVar2 = function_53c200(lVar4);
      if (cVar2 == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(lVar4 + 0x18) != (void *)0x0) {
          puVar7 = *(void **)(lVar4 + 0x18);
        }
        SystemDataInitializer(&processed_var_8840_ptr,puVar7);
      }
      else {
        function_53c7b0(lVar4,uVar1);
      }
      unaff_RBP = unaff_RBP + 1;
    } while ((int64_t)unaff_RBP < lVar13);
  }
  return;
}
// 函数: void function_53bf95(void)
void function_53bf95(void)
{
  int64_t lVar1;
  uint64_t uVar2;
  char cVar3;
  void *puVar4;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_R14;
  do {
    lVar1 = *(int64_t *)(*(int64_t *)(unaff_RBX + 0x30) + unaff_RBP * 8);
    uVar2 = *(uint64_t *)(*(int64_t *)(lVar1 + 0x200) + 0x20);
    cVar3 = function_53c200(lVar1);
    if (cVar3 == '\0') {
      puVar4 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x18) != (void *)0x0) {
        puVar4 = *(void **)(lVar1 + 0x18);
      }
      SystemDataInitializer(&processed_var_8840_ptr,puVar4);
    }
    else {
      function_53c7b0(lVar1,uVar2);
    }
    unaff_RBP = unaff_RBP + 1;
  } while (unaff_RBP < unaff_R14);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_53c000(uint64_t param_1)
void function_53c000(uint64_t param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  uint64_t stack_array_98 [2];
  code *pcStack_88;
  code *pcStack_80;
  uint64_t stack_array_78 [2];
  code *pcStack_68;
  code *pcStack_60;
  uint64_t stack_array_58 [2];
  code *pcStack_48;
  code *pcStack_40;
  uint64_t stack_array_38 [2];
  code *pcStack_28;
  code *pcStack_20;
  uint64_t local_var_18;
  local_var_18 = 0xfffffffffffffffe;
  lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x200) + 0x20);
  if ((*(int64_t *)(lVar1 + 0x24) != 0) || (*(int64_t *)(lVar1 + 0x2c) != 0)) {
    plVar2 = *(int64_t **)(*(int64_t *)(param_1 + 0x200) + 0x88);
    if (*(char *)(lVar1 + 0x1b1) == '\x01') {
      pcStack_68 = (code *)&ui_system_data_1584_ptr;
      pcStack_60 = function_53ee50;
      pcStack_88 = (code *)&ui_system_data_1824_ptr;
      pcStack_80 = function_53ef20;
      stack_array_98[0] = param_1;
      stack_array_78[0] = param_1;
      (**(code **)(*plVar2 + 0x70))
                (plVar2,&system_data_d660,*(int64_t *)(param_1 + 0x200) + 0xc,0,stack_array_98,stack_array_78)
      ;
      if (pcStack_88 != (code *)0x0) {
        (*pcStack_88)(stack_array_98,0,0);
      }
      if (pcStack_68 != (code *)0x0) {
        (*pcStack_68)(stack_array_78,0,0);
        return;
      }
    }
    else {
      pcStack_28 = (code *)&ui_system_data_1584_ptr;
      pcStack_20 = function_53ee50;
      pcStack_48 = (code *)&ui_system_data_1824_ptr;
      pcStack_40 = function_53ef20;
      stack_array_58[0] = param_1;
      stack_array_38[0] = param_1;
      (**(code **)(*plVar2 + 0x70))
                (plVar2,&system_data_d590,*(int64_t *)(param_1 + 0x200) + 0xc,0,stack_array_58,stack_array_38)
      ;
      if (pcStack_48 != (code *)0x0) {
        (*pcStack_48)(stack_array_58,0,0);
      }
      if (pcStack_28 != (code *)0x0) {
        (*pcStack_28)(stack_array_38,0,0);
      }
    }
    return;
  }
  for (puVar3 = *(uint64_t **)
                 (*(int64_t *)(render_system_memory + 8) +
                 (param_1 % (uint64_t)*(uint *)(render_system_memory + 0x10)) * 8);
      puVar3 != (uint64_t *)0x0; puVar3 = (uint64_t *)puVar3[7]) {
    if (param_1 == *puVar3) goto LAB_18053c076;
  }
  puVar3 = *(uint64_t **)
            (*(int64_t *)(render_system_memory + 8) + *(int64_t *)(render_system_memory + 0x10) * 8);
LAB_18053c076:
  *(int8_t *)((int64_t)puVar3 + 0x34) = 1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: stack
// 函数: void function_53c200(uint64_t param_1)
void function_53c200(uint64_t param_1)
{
  int32_t uVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  bool bVar9;
  int8_t stack_array_128 [32];
  int32_t local_var_108;
  int32_t local_var_100;
  int8_t local_var_f8;
  int64_t *plStack_e8;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  int64_t *plStack_d0;
  int64_t alStack_c8 [7];
  int64_t *plStack_90;
  void *plocal_var_88;
  code *pcStack_80;
  uint64_t local_var_78;
  void **pplocal_var_50;
  uint64_t local_var_48;
  local_var_d8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_128;
  lVar5 = *(int64_t *)(*(int64_t *)(param_1 + 0x200) + 0x20);
  bVar9 = *(char *)(lVar5 + 0x1b0) == -1;
  plocal_var_88 = &processed_var_9568_ptr;
  pcStack_80 = function_53bb30;
  pplocal_var_50 = &plocal_var_88;
  local_var_78 = param_1;
  if ((*(int64_t *)(lVar5 + 0x24) != 0) || (*(int64_t *)(lVar5 + 0x2c) != 0)) {
    for (puVar8 = *(uint64_t **)
                   (*(int64_t *)(render_system_memory + 8) +
                   (param_1 % (uint64_t)*(uint *)(render_system_memory + 0x10)) * 8);
        puVar8 != (uint64_t *)0x0; puVar8 = (uint64_t *)puVar8[7]) {
      if (param_1 == *puVar8) goto LAB_18053c2d6;
    }
    puVar8 = *(uint64_t **)
              (*(int64_t *)(render_system_memory + 8) + *(int64_t *)(render_system_memory + 0x10) * 8);
LAB_18053c2d6:
    if (puVar8[5] != 0) {
      cVar4 = *(char *)(lVar5 + 0x1b1);
      if (cVar4 == '\x02') {
        uVar1 = *(int32_t *)(lVar5 + 8);
        fVar2 = *(float *)(lVar5 + 0x10);
        fVar3 = *(float *)(lVar5 + 0xc);
        plStack_d0 = alStack_c8;
        plStack_90 = (int64_t *)0x0;
        if (pplocal_var_50 != (void **)0x0) {
          plStack_90 = (int64_t *)(*(code *)&memory_allocator_368_ptr)(pplocal_var_50,alStack_c8);
        }
        plStack_e8 = alStack_c8;
        *(int *)(param_1 + 0x18c) = (int)fVar3;
        *(int *)(param_1 + 400) = (int)fVar2;
        *(int32_t *)(param_1 + 0x188) = uVar1;
        *(int8_t *)(param_1 + 0x194) = 2;
        *(uint64_t *)(param_1 + 0x88) = 0;
        function_405430(param_1 + 0x98,alStack_c8);
        if (plStack_90 != (int64_t *)0x0) {
          (**(code **)(*plStack_90 + 0x20))
                    (plStack_90,
                     CONCAT71((int7)((uint64_t)alStack_c8 >> 8),plStack_90 != alStack_c8));
        }
      }
      else {
        if (bVar9) {
          plStack_e8 = *(int64_t **)(lVar5 + 0x24);
          local_var_e0 = *(uint64_t *)(lVar5 + 0x2c);
          local_var_108 = CONCAT31(local_var_108._1_3_,cVar4 == '\x01');
          lVar6 = function_53d300(&plStack_e8,*(int32_t *)(lVar5 + 0xc),
                                *(int32_t *)(lVar5 + 0x10),*(int32_t *)(lVar5 + 8));
          if (lVar6 != 0) {
            local_var_108 = CONCAT31(local_var_108._1_3_,cVar4);
            function_53d000(param_1,lVar6,&plocal_var_88,lVar5);
            goto LAB_18053c45b;
          }
        }
        uVar7 = function_53cf40(puVar8 + 1);
        local_var_108 = CONCAT31(local_var_108._1_3_,cVar4);
        function_53d000(param_1,uVar7,&plocal_var_88,lVar5);
        if (bVar9) {
          plStack_e8 = *(int64_t **)(lVar5 + 0x24);
          local_var_e0 = *(uint64_t *)(lVar5 + 0x2c);
          local_var_100 = *(int32_t *)(lVar5 + 8);
          local_var_108 = *(int32_t *)(lVar5 + 0x10);
          local_var_f8 = cVar4 == '\x01';
          function_53d120(local_var_108,uVar7,&plStack_e8,*(int32_t *)(lVar5 + 0xc));
        }
      }
    }
  }
LAB_18053c45b:
  if (pplocal_var_50 != (void **)0x0) {
    (**(code **)(*pplocal_var_50 + 0x20))(pplocal_var_50,pplocal_var_50 != &plocal_var_88);
    pplocal_var_50 = (void **)0x0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_128);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: stack
// 函数: void function_53c4b0(int64_t param_1)
void function_53c4b0(int64_t param_1)
{
  int32_t uVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int64_t lVar5;
  int64_t *plVar6;
  code *pcVar7;
  int64_t lVar8;
  void *puVar9;
  int8_t stack_array_128 [32];
  int64_t **pplStack_108;
  int8_t local_var_f8;
  int8_t stack_array_f7 [7];
  int64_t lStack_f0;
  int64_t *plStack_e8;
  int32_t local_var_e0;
  int32_t local_var_dc;
  code *pcStack_d8;
  code *pcStack_d0;
  int64_t lStack_c8;
  void **pplocal_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  int8_t *plocal_var_a8;
  int64_t *plStack_90;
  uint64_t local_var_88;
  int64_t *plStack_80;
  void *plocal_var_78;
  code *pcStack_70;
  int64_t lStack_68;
  void **pplocal_var_40;
  uint64_t local_var_38;
  local_var_88 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_128;
  lVar5 = *(int64_t *)(*(int64_t *)(param_1 + 0x200) + 0x20);
  stack_array_f7[0] = *(char *)(lVar5 + 0x1b1) == '\x01';
  local_var_f8 = *(char *)(lVar5 + 0x1b0) == -1;
  plocal_var_78 = &processed_var_9568_ptr;
  pcStack_70 = function_53bb30;
  pplocal_var_40 = &plocal_var_78;
  pplocal_var_c0 = &plocal_var_78;
  local_var_b8 = &lStack_f0;
  local_var_b0 = stack_array_f7;
  plocal_var_a8 = &local_var_f8;
  lStack_f0 = lVar5;
  lStack_c8 = param_1;
  lStack_68 = param_1;
  if ((*(int64_t *)(lVar5 + 0x24) != 0) || (*(int64_t *)(lVar5 + 0x2c) != 0)) {
    cVar4 = *(char *)(lVar5 + 0x1b1);
    if (cVar4 == '\x02') {
      uVar1 = *(int32_t *)(lVar5 + 8);
      fVar2 = *(float *)(lVar5 + 0x10);
      fVar3 = *(float *)(lVar5 + 0xc);
      plStack_80 = &lStack_c8;
      plStack_90 = (int64_t *)0x0;
      if (pplocal_var_40 != (void **)0x0) {
        plStack_90 = (int64_t *)(*(code *)&memory_allocator_368_ptr)(pplocal_var_40,&lStack_c8);
      }
      plStack_e8 = &lStack_c8;
      *(int *)(param_1 + 0x18c) = (int)fVar3;
      *(int *)(param_1 + 400) = (int)fVar2;
      *(int32_t *)(param_1 + 0x188) = uVar1;
      *(int8_t *)(param_1 + 0x194) = 2;
      *(uint64_t *)(param_1 + 0x88) = 0;
      function_405430(param_1 + 0x98,&lStack_c8);
      if (plStack_90 != (int64_t *)0x0) {
        (**(code **)(*plStack_90 + 0x20))
                  (plStack_90,CONCAT71((int7)((uint64_t)&lStack_c8 >> 8),plStack_90 != &lStack_c8))
        ;
      }
    }
    else {
      if ((bool)local_var_f8) {
        plStack_e8 = *(int64_t **)(lVar5 + 0x24);
        local_var_e0 = *(int32_t *)(lVar5 + 0x2c);
        local_var_dc = *(int32_t *)(lVar5 + 0x30);
        pplStack_108 = (int64_t **)CONCAT71(pplStack_108._1_7_,cVar4 == '\x01');
        lVar8 = function_53d300(&plStack_e8,*(int32_t *)(lVar5 + 0xc),*(int32_t *)(lVar5 + 0x10)
                              ,*(int32_t *)(lVar5 + 8));
        if (lVar8 != 0) {
          pplStack_108 = (int64_t **)CONCAT71(pplStack_108._1_7_,cVar4);
          function_53d000(param_1,lVar8,&plocal_var_78,lVar5);
          goto LAB_18053c759;
        }
      }
      puVar9 = &system_data_d660;
      if (cVar4 != '\x01') {
        puVar9 = &system_data_d590;
      }
      plVar6 = *(int64_t **)(*(int64_t *)(param_1 + 0x200) + 0x88);
      pcVar7 = *(code **)(*plVar6 + 0x60);
      pcStack_d8 = function_53ed70;
      pcStack_d0 = function_53ecd0;
      plStack_e8 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,system_allocation_flags);
      *plStack_e8 = lStack_c8;
      plStack_e8[1] = (int64_t)pplocal_var_c0;
      *(int32_t *)(plStack_e8 + 2) = (int32_t)local_var_b8;
      *(int32_t *)((int64_t)plStack_e8 + 0x14) = local_var_b8._4_4_;
      *(int32_t *)(plStack_e8 + 3) = (int32_t)local_var_b0;
      *(int32_t *)((int64_t)plStack_e8 + 0x1c) = local_var_b0._4_4_;
      plStack_e8[4] = (int64_t)plocal_var_a8;
      pplStack_108 = &plStack_e8;
      (*pcVar7)(plVar6,puVar9,*(int64_t *)(param_1 + 0x200) + 0xc,0);
      if (pcStack_d8 != (code *)0x0) {
        (*pcStack_d8)(&plStack_e8,0,0);
      }
    }
  }
LAB_18053c759:
  if (pplocal_var_40 != (void **)0x0) {
    (**(code **)(*pplocal_var_40 + 0x20))
              (pplocal_var_40,CONCAT71((int7)((uint64_t)&plocal_var_78 >> 8),pplocal_var_40 != &plocal_var_78))
    ;
    pplocal_var_40 = (void **)0x0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_128);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_53c7b0(uint64_t *param_1,int64_t param_2)
void function_53c7b0(uint64_t *param_1,int64_t param_2)
{
  byte *pbVar1;
  int32_t *puVar2;
  uint uVar3;
  int iVar4;
  int32_t uVar5;
  int32_t uVar6;
  int16_t uVar7;
  short sVar8;
  int16_t uVar9;
  int iVar10;
  int32_t uVar11;
  byte *pbVar12;
  uint64_t uVar13;
  byte bVar14;
  uint64_t uVar15;
  int64_t lVar16;
  void *puVar17;
  int64_t *plVar18;
  int64_t lVar19;
  void *puVar20;
  int64_t lVar21;
  float fVar22;
  int8_t stack_array_198 [32];
  uint64_t local_var_178;
  void *plocal_var_168;
  int8_t *plocal_var_160;
  int iStack_158;
  int8_t stack_array_150 [72];
  void *plocal_var_108;
  int8_t *plocal_var_100;
  int iStack_f8;
  int8_t stack_array_f0 [72];
  void *plocal_var_a8;
  int8_t *plocal_var_a0;
  int32_t local_var_98;
  int8_t stack_array_90 [72];
  uint64_t local_var_48;
  local_var_178 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_198;
  *(int32_t *)(param_1 + 0x3b) = *(int32_t *)(param_2 + 0x14);
  *(int32_t *)((int64_t)param_1 + 0x1dc) = *(int32_t *)(param_2 + 0x18);
  *(int32_t *)(param_1 + 0x3c) = *(int32_t *)(param_2 + 0x1c);
  uVar15 = *(uint64_t *)(param_2 + 0x38);
  param_1[0x3a] = uVar15;
  *(int32_t *)((int64_t)param_1 + 0x1e4) = *(int32_t *)(param_2 + 0x140);
  *(int32_t *)(param_1 + 0x3d) = *(int32_t *)(param_2 + 0x144);
  uVar15 = *(byte *)(param_2 + 0x20) | uVar15;
  param_1[0x3a] = uVar15;
  param_1[0x3a] = (int64_t)*(int *)(param_2 + 0x40) << 0x3c | uVar15;
  fVar22 = *(float *)(param_2 + 0x44);
  if (fVar22 < 0.0) {
    *(int32_t *)((int64_t)param_1 + 0x6c) = 0xbf800000;
  }
  else {
    if (0.99 <= fVar22) {
      fVar22 = 0.99;
    }
    *(float *)((int64_t)param_1 + 0x6c) = fVar22;
  }
  fVar22 = *(float *)(param_2 + 0x48);
  if (fVar22 < 0.0) {
    *(int32_t *)(param_1 + 0xe) = 0xbf800000;
  }
  else {
    if (0.99 <= fVar22) {
      fVar22 = 0.99;
    }
    *(float *)(param_1 + 0xe) = fVar22;
  }
  fVar22 = *(float *)(param_2 + 0x4c);
  if (fVar22 < 0.0) {
    *(int32_t *)((int64_t)param_1 + 0x74) = 0xbf800000;
  }
  else {
    if (0.99 <= fVar22) {
      fVar22 = 0.99;
    }
    *(float *)((int64_t)param_1 + 0x74) = fVar22;
  }
  fVar22 = *(float *)(param_2 + 0x50);
  if (fVar22 < 0.0) {
    *(int32_t *)(param_1 + 0xf) = 0xbf800000;
  }
  else {
    if (0.99 <= fVar22) {
      fVar22 = 0.99;
    }
    *(float *)(param_1 + 0xf) = fVar22;
  }
  *(int16_t *)((int64_t)param_1 + 0x7c) = 0xffff;
  if (0 < *(int *)(param_2 + 0x68)) {
    iVar10 = (**(code **)(*render_system_data_memory + 0xd0))(render_system_data_memory,param_2 + 0x58);
    if (iVar10 < 0) {
      puVar20 = &system_buffer_ptr;
      if ((void *)param_1[3] != (void *)0x0) {
        puVar20 = (void *)param_1[3];
      }
      puVar17 = &system_buffer_ptr;
      if (*(void **)(param_2 + 0x60) != (void *)0x0) {
        puVar17 = *(void **)(param_2 + 0x60);
      }
      SystemDataInitializer(&processed_var_8408_ptr,puVar17,puVar20);
    }
    *(short *)((int64_t)param_1 + 0x7c) = (short)iVar10;
  }
  if (*(int *)(param_2 + 0x88) < 1) {
    *(int16_t *)((int64_t)param_1 + 500) = 0xffff;
  }
  else {
    uVar7 = function_571e20(&system_data_60c0,param_2 + 0x78);
    *(int16_t *)((int64_t)param_1 + 500) = uVar7;
  }
  uVar3 = *(uint *)(param_2 + 0xa8);
  uVar15 = (uint64_t)uVar3;
  if (*(int64_t *)(param_2 + 0xa0) != 0) {
    CoreEngineDataBufferProcessor(param_1 + 0x36,uVar15);
  }
  if (uVar3 != 0) {
// WARNING: Subroutine does not return
    memcpy(param_1[0x37],*(uint64_t *)(param_2 + 0xa0),uVar15);
  }
  *(int32_t *)(param_1 + 0x38) = 0;
  lVar21 = param_1[0x37];
  if (lVar21 != 0) {
    *(int8_t *)(uVar15 + lVar21) = 0;
  }
  *(int32_t *)((int64_t)param_1 + 0x1cc) = *(int32_t *)(param_2 + 0xb4);
  if (*(int *)(param_2 + 0xa8) < 1) {
    *(int32_t *)(param_1 + 0x3f) = 0xffffffff;
  }
  else {
    uVar11 = function_5344c0(lVar21,param_2 + 0x98);
    *(int32_t *)(param_1 + 0x3f) = uVar11;
  }
  bVar14 = ((char)*(int32_t *)(param_2 + 0x138) + '\x01') * '\x10';
  *(byte *)(param_1 + 0x35) = bVar14 | *(byte *)(param_1 + 0x35) & 0xf;
  *(byte *)(param_1 + 0x35) = bVar14 | (char)*(int32_t *)(param_2 + 0x13c) + 1U;
  lVar21 = 0;
  if (*(int *)(param_2 + 0x180) < 1) {
    if (0 < *(int *)(param_2 + 0x128)) {
      plocal_var_a8 = &memory_allocator_3480_ptr;
      plocal_var_a0 = stack_array_90;
      stack_array_90[0] = 0;
      local_var_98 = *(int32_t *)(param_2 + 0x128);
      puVar20 = &system_buffer_ptr;
      if (*(void **)(param_2 + 0x120) != (void *)0x0) {
        puVar20 = *(void **)(param_2 + 0x120);
      }
      strcpy_s(stack_array_90,0x40,puVar20);
      sVar8 = function_4e5820(&system_data_5ed0,&plocal_var_a8);
      plocal_var_a8 = &system_state_ptr;
LAB_18053cd7a:
      *(short *)((int64_t)param_1 + 0x7e) = sVar8;
      goto LAB_18053cd7e;
    }
    *(int16_t *)((int64_t)param_1 + 0x7e) = 0xffff;
  }
  else {
    plocal_var_168 = &memory_allocator_3480_ptr;
    plocal_var_160 = stack_array_150;
    stack_array_150[0] = 0;
    iStack_158 = *(int *)(param_2 + 0x180);
    puVar20 = &system_buffer_ptr;
    if (*(void **)(param_2 + 0x178) != (void *)0x0) {
      puVar20 = *(void **)(param_2 + 0x178);
    }
    strcpy_s(stack_array_150,0x40,puVar20);
    lVar16 = lVar21;
    if (((0 < iStack_158) && (iVar10 = function_53a2e0(&system_data_5f30,&plocal_var_168), iVar10 != -1)) &&
       (iVar10 = *(int *)(render_system_memory + (int64_t)iVar10 * 4), iVar10 != -1)) {
      lVar16 = *(int64_t *)(render_system_memory + (int64_t)iVar10 * 8);
    }
    lVar16 = *(int64_t *)(*(int64_t *)(lVar16 + 0x200) + 0x20);
    plocal_var_168 = &system_state_ptr;
    plocal_var_108 = &memory_allocator_3480_ptr;
    plocal_var_100 = stack_array_f0;
    stack_array_f0[0] = 0;
    iStack_f8 = *(int *)(param_2 + 0x1a0);
    puVar20 = &system_buffer_ptr;
    if (*(void **)(param_2 + 0x198) != (void *)0x0) {
      puVar20 = *(void **)(param_2 + 0x198);
    }
    strcpy_s(stack_array_f0,0x40,puVar20);
    if (((0 < iStack_f8) && (iVar10 = function_53a2e0(&system_data_5f30,&plocal_var_108), iVar10 != -1)) &&
       (iVar10 = *(int *)(render_system_memory + (int64_t)iVar10 * 4), iVar10 != -1)) {
      lVar21 = *(int64_t *)(render_system_memory + (int64_t)iVar10 * 8);
    }
    lVar21 = *(int64_t *)(*(int64_t *)(lVar21 + 0x200) + 0x20);
    plocal_var_108 = &system_state_ptr;
    iVar10 = *(int *)(lVar21 + 0x128);
    iVar4 = *(int *)(lVar16 + 0x128);
    if (iVar4 == iVar10) {
      if (iVar4 != 0) {
        pbVar12 = *(byte **)(lVar16 + 0x120);
        lVar19 = *(int64_t *)(lVar21 + 0x120) - (int64_t)pbVar12;
        do {
          pbVar1 = pbVar12 + lVar19;
          iVar10 = (uint)*pbVar12 - (uint)*pbVar1;
          if (iVar10 != 0) break;
          pbVar12 = pbVar12 + 1;
        } while (*pbVar1 != 0);
      }
LAB_18053cb9d:
      if (iVar10 == 0) {
        plocal_var_108 = &memory_allocator_3480_ptr;
        plocal_var_100 = stack_array_f0;
        stack_array_f0[0] = 0;
        iStack_f8 = *(int *)(lVar16 + 0x128);
        puVar20 = &system_buffer_ptr;
        if (*(void **)(lVar16 + 0x120) != (void *)0x0) {
          puVar20 = *(void **)(lVar16 + 0x120);
        }
        strcpy_s(stack_array_f0,0x40,puVar20);
        sVar8 = function_4e5820(&system_data_5ed0,&plocal_var_108);
        plocal_var_108 = &system_state_ptr;
        goto LAB_18053cd7a;
      }
    }
    else if (iVar4 == 0) goto LAB_18053cb9d;
    plocal_var_a8 = &memory_allocator_3480_ptr;
    plocal_var_a0 = stack_array_90;
    stack_array_90[0] = 0;
    local_var_98 = *(int32_t *)(lVar16 + 0x128);
    puVar20 = &system_buffer_ptr;
    if (*(void **)(lVar16 + 0x120) != (void *)0x0) {
      puVar20 = *(void **)(lVar16 + 0x120);
    }
    strcpy_s(stack_array_90,0x40,puVar20);
    uVar7 = function_4e5820(&system_data_5ed0,&plocal_var_a8);
    plocal_var_a8 = &system_state_ptr;
    plocal_var_168 = &memory_allocator_3480_ptr;
    plocal_var_160 = stack_array_150;
    stack_array_150[0] = 0;
    iStack_158 = *(int *)(lVar21 + 0x128);
    puVar20 = &system_buffer_ptr;
    if (*(void **)(lVar21 + 0x120) != (void *)0x0) {
      puVar20 = *(void **)(lVar21 + 0x120);
    }
    strcpy_s(stack_array_150,0x40,puVar20);
    uVar9 = function_4e5820(&system_data_5ed0,&plocal_var_168);
    plocal_var_168 = &system_state_ptr;
    sVar8 = function_4e58d0(&system_data_5ed0,uVar7,uVar9,
                          *(int32_t *)(&processed_var_5192_ptr + (int64_t)*(char *)(param_2 + 0x1b0) * 4)
                         );
    *(short *)((int64_t)param_1 + 0x7e) = sVar8;
LAB_18053cd7e:
    if (sVar8 != -1) {
      puVar2 = (int32_t *)((int64_t)sVar8 * 0x68 + render_system_memory);
      uVar11 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      *(int32_t *)param_1 = *puVar2;
      *(int32_t *)((int64_t)param_1 + 4) = uVar11;
      *(int32_t *)(param_1 + 1) = uVar5;
      *(int32_t *)((int64_t)param_1 + 0xc) = uVar6;
      goto LAB_18053cdb2;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_18053cdb2:
  if (*(int *)(param_2 + 200) < 1) {
    *(int32_t *)((int64_t)param_1 + 0x1ec) = 0xffffffff;
  }
  else {
    uVar11 = SystemFile_Manager(&system_data_6150,param_2 + 0xb8);
    *(int32_t *)((int64_t)param_1 + 0x1ec) = uVar11;
  }
  if (*(int *)(param_2 + 0x108) < 1) {
    *(int32_t *)(param_1 + 0x3e) = 0xffffffff;
  }
  else {
    uVar11 = SystemFile_Manager(&system_data_6150,param_2 + 0xf8);
    *(int32_t *)(param_1 + 0x3e) = uVar11;
  }
  plVar18 = param_1 + 0x33;
  lVar21 = 2;
  do {
    if (*plVar18 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plVar18 = plVar18 + 1;
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  iVar10 = (int)(*(int64_t *)(param_2 + 0x158) - *(int64_t *)(param_2 + 0x150) >> 3);
  lVar21 = 0;
  if (0 < iVar10) {
    do {
      uVar13 = (**(code **)**(uint64_t **)(*(int64_t *)(param_2 + 0x150) + lVar21 * 8))();
      plVar18 = param_1 + 0x33;
      lVar16 = 0;
      do {
        if (*plVar18 == 0) {
          param_1[lVar16 + 0x33] = uVar13;
          goto LAB_18053ce9e;
        }
        lVar16 = lVar16 + 1;
        plVar18 = plVar18 + 1;
      } while (lVar16 < 2);
      SystemDataInitializer(&processed_var_6592_ptr,2);
LAB_18053ce9e:
      lVar21 = lVar21 + 1;
    } while (lVar21 < iVar10);
  }
  function_53d480(param_1);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_198);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address