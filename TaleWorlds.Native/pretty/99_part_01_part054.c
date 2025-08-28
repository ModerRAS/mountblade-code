// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
/* 函数别名定义: RenderingEngineCore */
#define RenderingEngineCore RenderingEngineCore
// 99_part_01_part054.c - 3 个函数
// 函数: void GenericFunction_1800db610(int64_t param_1,int64_t param_2)
void GenericFunction_1800db610(int64_t param_1,int64_t param_2)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  uint64_t uVar12;
  uint uVar13;
  int64_t *plVar14;
  int8_t stack_array_168 [32];
  int32_t local_var_148;
  int32_t local_var_140;
  void **pplocal_var_138;
  uint64_t local_var_130;
  uint64_t local_var_128;
  uint64_t local_var_120;
  uint64_t local_var_118;
  void *plocal_var_108;
  int8_t *plocal_var_100;
  int32_t local_var_f8;
  int8_t stack_array_f0 [72];
  void *plocal_var_a8;
  int8_t *plocal_var_a0;
  int32_t local_var_98;
  int8_t stack_array_90 [72];
  uint64_t local_var_48;
  local_var_118 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  pplocal_var_138 = &plocal_var_a8;
  plVar10 = (int64_t *)0x0;
  plocal_var_a8 = &memory_allocator_3480_ptr;
  plocal_var_a0 = stack_array_90;
  local_var_98 = 0;
  stack_array_90[0] = 0;
  DataStructureManager0(&plocal_var_a8,&memory_allocator_3380_ptr);
  SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_a8);
  lVar8 = *(int64_t *)(param_2 + 0x99c0);
  if (lVar8 == 0) {
LAB_1800dbbe1:
    if ((*(int *)(param_2 + 0x27f8) == 0) && (*(int64_t *)(param_2 + 0x97a0) == 0))
    goto LAB_1800dbd5e;
    DataStructure_c8260(*(uint64_t *)(param_2 + 0x99c0),param_2,0);
    DataStructure_c8fe0(*(uint64_t *)(param_2 + 0x99c0),param_2);
    DataStructure_c84d0(*(uint64_t *)(param_2 + 0x99c0),param_2);
    *(int8_t *)(param_1 + 0x1350) = 1;
    lVar8 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if ((*(int64_t *)(lVar8 + 0x84f8) != 0) ||
       ((*(int *)(lVar8 + 0x8898) != -1 || (*(int *)(lVar8 + 0x8a98) != 0x10)))) {
      pplocal_var_138 = (void **)0x0;
      (**(code **)(**(int64_t **)(lVar8 + 0x8400) + 0x40))
                (*(int64_t **)(lVar8 + 0x8400),0x18,1,&pplocal_var_138);
      *(uint64_t *)(lVar8 + 0x84f8) = 0;
      *(int32_t *)(lVar8 + 0x8898) = 0xffffffff;
      *(int32_t *)(lVar8 + 0x8a98) = 0x10;
      *(int *)(lVar8 + 0x82b4) = *(int *)(lVar8 + 0x82b4) + 1;
    }
    lVar4 = system_message_buffer;
    lVar8 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uVar12 = *(uint64_t *)(lVar8 + 0x83b8);
    plVar11 = *(int64_t **)(lVar8 + 0x83f0);
    *(uint64_t *)(lVar8 + 0x83f0) = 0;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar4 + 0x1cd8),1);
    plVar10 = (int64_t *)**(uint64_t **)(*(int64_t *)(param_2 + 0x99c0) + 0x50);
    local_var_148 = 0xffffffff;
    (**(code **)(*plVar10 + 0x48))(plVar10,0,param_2,0);
    *(int8_t *)(param_1 + 0x1350) = 0;
LAB_1800dbcff:
    SystemCore_MemoryManager(*(uint64_t *)(system_message_buffer + 0x1cd8),0,uVar12);
    plVar10 = *(int64_t **)(system_message_buffer + 0x1cd8);
    if ((plVar11 != (int64_t *)0x0) && (*plVar11 != 0)) {
      (**(code **)(*plVar10 + 0x70))(plVar10,*plVar11,2);
    }
    lVar8 = system_message_buffer;
    plVar10[0x107e] = (int64_t)plVar11;
  }
  else {
    if (1 < (uint64_t)(*(int64_t *)(lVar8 + 0x58) - *(int64_t *)(lVar8 + 0x50) >> 3)) {
      DataStructure_c8260(lVar8,param_2,0);
      DataStructure_c8fe0(*(uint64_t *)(param_2 + 0x99c0),param_2);
      DataStructure_c84d0(*(uint64_t *)(param_2 + 0x99c0),param_2);
      *(int8_t *)(param_1 + 0x1350) = 1;
      GenericFunction_1800debc0();
      lVar8 = *(int64_t *)(system_message_buffer + 0x1cd8);
      if (((*(int64_t *)(lVar8 + 0x84f8) != 0) || (*(int *)(lVar8 + 0x8898) != -1)) ||
         (*(int *)(lVar8 + 0x8a98) != 0x10)) {
        local_var_130 = 0;
        (**(code **)(**(int64_t **)(lVar8 + 0x8400) + 0x40))
                  (*(int64_t **)(lVar8 + 0x8400),0x18,1,&local_var_130);
        *(uint64_t *)(lVar8 + 0x84f8) = 0;
        *(int32_t *)(lVar8 + 0x8898) = 0xffffffff;
        *(int32_t *)(lVar8 + 0x8a98) = 0x10;
        *(int *)(lVar8 + 0x82b4) = *(int *)(lVar8 + 0x82b4) + 1;
      }
      lVar4 = system_message_buffer;
      lVar8 = *(int64_t *)(system_message_buffer + 0x1cd8);
      uVar12 = *(uint64_t *)(lVar8 + 0x83b8);
      plVar11 = *(int64_t **)(lVar8 + 0x83f0);
      puVar1 = *(uint64_t **)(*(int64_t *)(param_2 + 0x99c0) + 0x50);
      if ((*(int64_t *)(*(int64_t *)(param_2 + 0x99c0) + 0x58) - (int64_t)puVar1 &
          0xfffffffffffffff8U) == 8) {
        plVar10 = (int64_t *)*puVar1;
        local_var_148 = 0xffffffff;
        (**(code **)(*plVar10 + 0x48))(plVar10,0,param_2,0);
      }
      else {
        *(uint64_t *)(lVar8 + 0x83f0) = 0;
        SystemCore_ProcessorEx(*(uint64_t *)(lVar4 + 0x1cd8),1);
        uVar2 = *(uint64_t *)(system_message_buffer + 0x1cd8);
        uVar7 = SystemLog_Manager(param_2);
        local_var_148 = 0xffffffff;
        RenderingEngineCore0(uVar2,0x21,uVar7);
        lVar8 = *(int64_t *)(param_2 + 0x99c0);
        plVar14 = plVar10;
        if (*(int64_t *)(lVar8 + 0x58) - *(int64_t *)(lVar8 + 0x50) >> 3 != 0) {
          do {
            plVar3 = *(int64_t **)((int64_t)plVar10 + *(int64_t *)(lVar8 + 0x50));
            local_var_148 = 0xffffffff;
            (**(code **)(*plVar3 + 0x48))(plVar3,0,param_2,0);
            uVar13 = (int)plVar14 + 1;
            plVar10 = plVar10 + 1;
            lVar8 = *(int64_t *)(param_2 + 0x99c0);
            plVar14 = (int64_t *)(uint64_t)uVar13;
          } while ((uint64_t)(int64_t)(int)uVar13 <
                   (uint64_t)(*(int64_t *)(lVar8 + 0x58) - *(int64_t *)(lVar8 + 0x50) >> 3));
        }
        lVar8 = *(int64_t *)(system_message_buffer + 0x1cd8);
        if (((*(int64_t *)(lVar8 + 0x8540) != 0) || (*(int *)(lVar8 + 0x88bc) != -1)) ||
           (*(int *)(lVar8 + 0x8abc) != 0x20)) {
          local_var_128 = 0;
          (**(code **)(**(int64_t **)(lVar8 + 0x8400) + 0x218))
                    (*(int64_t **)(lVar8 + 0x8400),0x21,1,&local_var_128);
          *(uint64_t *)(lVar8 + 0x8540) = 0;
          *(int32_t *)(lVar8 + 0x88bc) = 0xffffffff;
          *(int32_t *)(lVar8 + 0x8abc) = 0x20;
          *(int *)(lVar8 + 0x82b4) = *(int *)(lVar8 + 0x82b4) + 1;
        }
      }
      DataStructure_c8f70(*(uint64_t *)(param_2 + 0x99c0));
      *(int8_t *)(param_1 + 0x1350) = 0;
      if (0 < *(int *)(param_2 + 0x2920)) {
        pplocal_var_138 = &plocal_var_108;
        plocal_var_108 = &memory_allocator_3480_ptr;
        plocal_var_100 = stack_array_f0;
        local_var_f8 = 0;
        stack_array_f0[0] = 0;
        DataStructureManager0(&plocal_var_108,&memory_allocator_3432_ptr);
        SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_108);
        GenericFunction_1800dd660(param_1,param_2);
        SystemCore_Synchronizer(&plocal_var_108);
      }
      goto LAB_1800dbcff;
    }
    if (((lVar8 == 0) ||
        ((*(int64_t *)(lVar8 + 0x58) - *(int64_t *)(lVar8 + 0x50) & 0xfffffffffffffff8U) != 0x38))
       || (*(int64_t *)(*(int64_t *)(lVar8 + 0x50) + 0x30) == 0)) goto LAB_1800dbbe1;
    lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar4 + 0x84f8) != 0) || (*(int *)(lVar4 + 0x8898) != -1)) ||
       (*(int *)(lVar4 + 0x8a98) != 0x10)) {
      local_var_120 = 0;
      (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
                (*(int64_t **)(lVar4 + 0x8400),0x18,1,&local_var_120);
      *(uint64_t *)(lVar4 + 0x84f8) = 0;
      *(int32_t *)(lVar4 + 0x8898) = 0xffffffff;
      *(int32_t *)(lVar4 + 0x8a98) = 0x10;
      *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
      lVar8 = *(int64_t *)(param_2 + 0x99c0);
    }
    lVar6 = system_message_buffer;
    lVar5 = system_main_module_state;
    lVar4 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar8 + 0x50) + 0x30) + 0x428);
    lVar9 = *(int64_t *)(lVar4 + 0x1d8);
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else if (system_main_module_state != 0) {
      *(int64_t *)(lVar4 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
      lVar8 = *(int64_t *)(param_2 + 0x99c0);
    }
    if (*(int64_t *)(*(int64_t *)(*(int64_t *)(lVar8 + 0x50) + 0x30) + 0x448) != 0) {
      lVar8 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar8 + 0x50) + 0x28) + 0x448);
      lVar4 = *(int64_t *)(lVar8 + 0x1e0);
      if (lVar4 != 0) {
        if (lVar5 != 0) {
          *(int64_t *)(lVar8 + 0x340) = (int64_t)*(int *)(lVar5 + 0x224);
        }
        plVar10 = (int64_t *)(lVar4 + 0x10);
      }
    }
    lVar8 = *(int64_t *)(lVar6 + 0x1cd8);
    uVar12 = *(uint64_t *)(lVar8 + 0x83b8);
    plVar11 = *(int64_t **)(lVar8 + 0x83f0);
    SystemCore_MemoryManager(lVar8,0,lVar9);
    plVar14 = *(int64_t **)(system_message_buffer + 0x1cd8);
    if ((plVar10 != (int64_t *)0x0) && (*plVar10 != 0)) {
      (**(code **)(*plVar14 + 0x70))(plVar14,*plVar10,4);
    }
    lVar8 = system_message_buffer;
    plVar14[0x107e] = (int64_t)plVar10;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar8 + 0x1cd8),1);
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x5b0) == 1) {
      local_var_140 = 0;
      local_var_148 = 0;
      UtilitiesSystem_MathCalculator(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0xffffffff,0x3f800000);
    }
    SystemCore_MemoryManager(*(uint64_t *)(system_message_buffer + 0x1cd8),0,uVar12);
    plVar10 = *(int64_t **)(system_message_buffer + 0x1cd8);
    if ((plVar11 != (int64_t *)0x0) && (*plVar11 != 0)) {
      (**(code **)(*plVar10 + 0x70))(plVar10,*plVar11,2);
    }
    lVar8 = system_message_buffer;
    plVar10[0x107e] = (int64_t)plVar11;
  }
  SystemCore_ProcessorEx(*(uint64_t *)(lVar8 + 0x1cd8),1);
LAB_1800dbd5e:
  SystemCore_Synchronizer(&plocal_var_a8);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_168);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1800dbd90(int64_t param_1,int64_t param_2,int64_t param_3)
void GenericFunction_1800dbd90(int64_t param_1,int64_t param_2,int64_t param_3)
{
  ushort uVar1;
  uint uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int8_t stack_array_158 [32];
  int32_t local_var_138;
  int8_t stack_array_128 [4];
  int32_t local_var_124;
  uint local_var_120;
  uint local_var_11c;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_10c;
  int32_t local_var_108;
  int32_t local_var_104;
  int32_t local_var_100;
  int8_t local_var_fc;
  uint64_t local_var_fb;
  int32_t local_var_f0;
  int8_t local_var_ec;
  int64_t *plStack_e8;
  uint64_t local_var_e0;
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int32_t local_var_c8;
  int8_t stack_array_c0 [136];
  uint64_t local_var_38;
  local_var_e0 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  local_var_124 = 0;
  if (((*(byte *)(param_3 + 0x1bd8) & 0x20) != 0) && (*(char *)(param_3 + 0x9a30) == '\0')) {
    SystemData_Processor(stack_array_128,&memory_allocator_3408_ptr);
    uVar2 = *(uint *)(*(int64_t *)(*(int64_t *)(param_2 + 0x280) + 0x1e0) + 0x1588);
    if (((uVar2 & 0x10) != 0) && (*(int64_t *)(param_3 + 0x9960) != 0)) {
      local_var_138 = 0xffffffff;
      RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x16,*(int64_t *)(param_3 + 0x9960),
                    0x10);
    }
    if (((*(int64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83b8) != 0) &&
        ((char)uVar2 < '\0')) ||
       (((*(uint *)(param_2 + 0x314) & 0x400) != 0 && ((uVar2 >> 8 & 1) != 0)))) {
      if (*(uint64_t *)(param_3 + 0x99a0) != (uint64_t)*(uint *)(param_1 + 0x2ca8)) {
        *(uint64_t *)(param_3 + 0x99a0) = (uint64_t)*(uint *)(param_1 + 0x2ca8);
        lVar4 = SystemOptimizer(param_3);
        uVar1 = *(ushort *)(lVar4 + 0x32c);
        lVar5 = SystemOptimizer(param_3);
        lVar4 = *(int64_t *)(param_3 + 0x9998);
        if (lVar4 == 0) {
          local_var_118 = 1;
          local_var_114 = 1;
          local_var_10c = 0;
          local_var_108 = 0;
          local_var_104 = 0;
          local_var_100 = 0x3f800000;
          local_var_fb = 1;
          local_var_fc = 0;
          local_var_f0 = 0xffffffff;
          local_var_ec = 0;
          local_var_120 = (uint)uVar1;
          local_var_11c = (uint)*(ushort *)(lVar5 + 0x32e);
          lVar4 = SystemOptimizer(param_3);
          local_var_110 = *(int32_t *)(lVar4 + 0x324);
          plocal_var_d8 = &memory_allocator_3432_ptr;
          plocal_var_d0 = stack_array_c0;
          stack_array_c0[0] = 0;
          local_var_c8 = 0x13;
          strcpy_s(stack_array_c0,0x80,&memory_allocator_3488_ptr);
          uVar6 = SystemInitializer(system_resource_state,&plStack_e8,&plocal_var_d8,&local_var_120);
          local_var_124 = 1;
          SystemCore_ChecksumValidator(param_3 + 0x9998,uVar6);
          local_var_124 = 0;
          if (plStack_e8 != (int64_t *)0x0) {
            (**(code **)(*plStack_e8 + 0x38))();
          }
          plocal_var_d8 = &system_state_ptr;
          lVar4 = *(int64_t *)(param_3 + 0x9998);
        }
        if (*(char *)(lVar4 + 900) != '\0') {
          uVar6 = *(uint64_t *)(system_message_buffer + 0x1cd8);
          uVar3 = *(uint64_t *)(param_3 + 0x9998);
          uVar7 = SystemOptimizer(param_3);
          DataStructure_9e3e0(uVar6,uVar7,uVar3);
        }
      }
      if ((*(int64_t *)(param_3 + 0x9998) != 0) &&
         (*(char *)(*(int64_t *)(param_3 + 0x9998) + 900) != '\0')) {
        *(uint64_t *)(param_2 + 0x48) = *(uint64_t *)(param_3 + 0x9998);
        local_var_138 = 0xffffffff;
        RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),9,*(uint64_t *)(param_3 + 0x9998));
      }
    }
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1800dc070(void **param_1,int64_t param_2,char param_3)
void GenericFunction_1800dc070(void **param_1,int64_t param_2,char param_3)
{
  ushort uVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  void **ppuVar5;
  uint uVar6;
  int32_t *puVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int32_t *puVar13;
  int64_t *plVar14;
  uint64_t uVar15;
  int32_t uVar16;
  int8_t stack_array_238 [32];
  int8_t local_var_218;
  void **pplocal_var_208;
  int8_t stack_array_200 [8];
  void **pplocal_var_1f8;
  void *plocal_var_1f0;
  int32_t *plocal_var_1e8;
  int32_t local_var_1e0;
  uint64_t local_var_1d8;
  uint local_var_1d0;
  uint local_var_1cc;
  int32_t local_var_1c8;
  int32_t local_var_1c4;
  int32_t local_var_1c0;
  int8_t local_var_1bc;
  int16_t local_var_1bb;
  int8_t local_var_1b9;
  int32_t local_var_1b8;
  uint64_t local_var_1b0;
  void *plocal_var_1a8;
  int8_t *plocal_var_1a0;
  int32_t local_var_198;
  int8_t stack_array_190 [72];
  void *plocal_var_148;
  int8_t *plocal_var_140;
  int32_t local_var_138;
  int8_t stack_array_130 [136];
  void *plocal_var_a8;
  int8_t *plocal_var_a0;
  int32_t local_var_98;
  int8_t stack_array_90 [72];
  uint64_t local_var_48;
  local_var_1b0 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_238;
  pplocal_var_1f8 = param_1;
  SystemData_Processor(stack_array_200,&memory_allocator_3464_ptr);
  plocal_var_1f0 = &system_data_buffer_ptr;
  local_var_1d8 = 0;
  plocal_var_1e8 = (int32_t *)0x0;
  local_var_1e0 = 0;
  puVar7 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x12,0x13);
  *(int8_t *)puVar7 = 0;
  plocal_var_1e8 = puVar7;
  uVar6 = CoreEngineSystemCleanup(puVar7);
  *puVar7 = 0x646e6572;
  puVar7[1] = 0x775f7265;
  puVar7[2] = 0x72657461;
  puVar7[3] = 0x73656d5f;
  *(int16_t *)(puVar7 + 4) = 0x68;
  local_var_1e0 = 0x11;
  local_var_1d8._0_4_ = uVar6;
  if (param_3 != '\0') {
    if (uVar6 < 0x18) {
      local_var_218 = 0x13;
      puVar7 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar7,0x18,0x10);
      plocal_var_1e8 = puVar7;
      local_var_1d8._0_4_ = CoreEngineSystemCleanup(puVar7);
    }
    *(int32_t *)((int64_t)puVar7 + 0x11) = 0x7065645f;
    *(int16_t *)((int64_t)puVar7 + 0x15) = 0x6874;
    *(int8_t *)((int64_t)puVar7 + 0x17) = 0;
    local_var_1e0 = 0x17;
  }
  puVar13 = (int32_t *)&system_buffer_ptr;
  if (puVar7 != (int32_t *)0x0) {
    puVar13 = puVar7;
  }
  pplocal_var_208 = &plocal_var_a8;
  plocal_var_a8 = &memory_allocator_3480_ptr;
  plocal_var_a0 = stack_array_90;
  local_var_98 = 0;
  stack_array_90[0] = 0;
  if (puVar13 != (int32_t *)0x0) {
    DataStructureManager0(&plocal_var_a8);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_a8);
  }
  if (param_3 == '\0') {
    lVar3 = *(int64_t *)(param_2 + 0x34e0);
    if (lVar3 == 0) goto LAB_1800dc560;
    pplocal_var_208 = &plocal_var_1a8;
    plocal_var_1a8 = &memory_allocator_3480_ptr;
    plocal_var_1a0 = stack_array_190;
    local_var_198 = 0;
    stack_array_190[0] = 0;
    DataStructureManager0(&plocal_var_1a8,&memory_allocator_3540_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_1a8);
    lVar8 = system_message_buffer;
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83f0) = 0;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar8 + 0x1cd8),1);
    pplocal_var_208 = &plocal_var_148;
    plocal_var_148 = &memory_allocator_3480_ptr;
    plocal_var_140 = stack_array_130;
    local_var_138 = 0;
    stack_array_130[0] = 0;
    DataStructureManager0(&plocal_var_148,&system_data_3ec0);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_148);
    GenericFunction_1800dbd90(param_1,lVar3,param_2);
    lVar10 = SystemLog_Manager(param_2);
    lVar8 = *(int64_t *)(param_2 + 0x9968);
    if (((lVar8 == 0) && (lVar8 = SystemLog_Manager(param_2), lVar8 == 0)) || (lVar10 == lVar8)) {
      uVar15 = *(uint64_t *)(system_message_buffer + 0x1cd8);
      lVar8 = SystemOptimizer(param_2);
      iVar2 = *(int *)(param_2 + 0x3578);
      if (*(int64_t *)(lVar8 + 0x1d8) == 0) {
        lVar8 = 0;
      }
      else {
        if (system_main_module_state != 0) {
          *(int64_t *)(lVar8 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
        }
        lVar8 = (int64_t)(int)((uint)*(byte *)(lVar8 + 0x335) * iVar2) * 0x10 +
                *(int64_t *)(lVar8 + 0x1d8);
      }
      SystemCore_MemoryManager(uVar15,0,lVar8);
      lVar8 = system_message_buffer;
      *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83f0) = 0;
      SystemCore_ProcessorEx(*(uint64_t *)(lVar8 + 0x1cd8),1);
      *(int32_t *)(lVar3 + 0xc4) = 1;
      lVar8 = SystemOptimizer(param_2);
      *(int32_t *)(lVar3 + 0xa4) = *(int32_t *)(lVar8 + 0x324);
      *(int8_t *)(lVar3 + 0x90) = 1;
    }
    else {
      uVar15 = *(uint64_t *)(system_message_buffer + 0x1cd8);
      uVar9 = SystemOptimizer(param_2);
      uVar9 = SystemFunction_0001800858c0(uVar9,*(int32_t *)(param_2 + 0x3578),0);
      SystemCore_MemoryManager(uVar15,0,uVar9);
      lVar12 = system_message_buffer;
      plVar4 = *(int64_t **)(system_message_buffer + 0x1cd8);
      plVar14 = *(int64_t **)(lVar8 + 0x1e0);
      if (plVar14 != (int64_t *)0x0) {
        if (system_main_module_state != 0) {
          *(int64_t *)(lVar8 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
        }
        plVar14 = plVar14 + 2;
        if ((plVar14 != (int64_t *)0x0) && (*plVar14 != 0)) {
          (**(code **)(*plVar4 + 0x70))(plVar4,*plVar14,4);
          lVar12 = system_message_buffer;
        }
      }
      plVar4[0x107e] = (int64_t)plVar14;
      SystemCore_ProcessorEx(*(uint64_t *)(lVar12 + 0x1cd8),1);
      *(int32_t *)(lVar3 + 0xc4) = 1;
      lVar8 = SystemOptimizer(param_2);
      *(int32_t *)(lVar3 + 0xa4) = *(int32_t *)(lVar8 + 0x324);
      *(int8_t *)(lVar3 + 0x92) = 2;
      *(int8_t *)(lVar3 + 0x90) = 0;
      param_1 = pplocal_var_1f8;
      if (lVar10 == 0) {
        *(int32_t *)(lVar3 + 0xa0) = 0x1a;
      }
      else {
        *(int32_t *)(lVar3 + 0xa0) = *(int32_t *)(lVar10 + 0x324);
      }
    }
    *(uint64_t *)(lVar3 + 0x48) = *(uint64_t *)(param_2 + 0x9998);
    *(int64_t *)(lVar3 + 0x50) = lVar10;
    CoreEngine_0E8640(param_1,lVar3);
    lVar3 = system_message_buffer;
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83f0) = 0;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar3 + 0x1cd8),1);
    SystemCore_Synchronizer(&plocal_var_148);
  }
  else {
    lVar3 = *(int64_t *)(param_2 + 0x34d8);
    if (lVar3 == 0) goto LAB_1800dc560;
    pplocal_var_1f8 = &plocal_var_1a8;
    plocal_var_1a8 = &memory_allocator_3480_ptr;
    plocal_var_1a0 = stack_array_190;
    local_var_198 = 0;
    stack_array_190[0] = 0;
    DataStructureManager0(&plocal_var_1a8,&processed_var_5240_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_1a8);
    if ((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0) {
      lVar8 = SystemLog_Manager(param_2);
      uVar1 = *(ushort *)(lVar8 + 0x32c);
      lVar8 = SystemLog_Manager(param_2);
      local_var_1c8 = 1;
      local_var_1bb = 1;
      local_var_1b9 = 0;
      local_var_1c0 = 0;
      local_var_1bc = 0x8a;
      local_var_1d0 = (uint)uVar1;
      local_var_1cc = (uint)*(ushort *)(lVar8 + 0x32e);
      lVar8 = SystemLog_Manager(param_2);
      local_var_1c4 = *(int32_t *)(lVar8 + 0x324);
      local_var_1b8 = *(int32_t *)(param_2 + 0x1bd4);
      plocal_var_148 = &memory_allocator_3432_ptr;
      plocal_var_140 = stack_array_130;
      stack_array_130[0] = 0;
      local_var_138 = 0x17;
      uVar16 = strcpy_s(stack_array_130,0x80,&system_handler1_ptr);
      GenericFunction_1800b1d80(uVar16,&pplocal_var_208,&plocal_var_148,&local_var_1d0);
      ppuVar5 = pplocal_var_208;
      plocal_var_148 = &system_state_ptr;
      uVar15 = *(uint64_t *)(system_message_buffer + 0x1cd8);
      uVar9 = SystemLog_Manager(param_2);
      DataStructure_9e3e0(uVar15,uVar9,ppuVar5);
      ppuVar5 = pplocal_var_208;
      pplocal_var_1f8 = pplocal_var_208;
      if (pplocal_var_208 != (void **)0x0) {
        (**(code **)(*pplocal_var_208 + 0x28))(pplocal_var_208);
      }
      pplocal_var_1f8 = *(void ***)(param_2 + 0x9968);
      *(void ***)(param_2 + 0x9968) = ppuVar5;
      if (pplocal_var_1f8 != (void **)0x0) {
        (**(code **)(*pplocal_var_1f8 + 0x38))();
      }
      if (pplocal_var_208 != (void **)0x0) {
        (**(code **)(*pplocal_var_208 + 0x38))();
      }
    }
    lVar10 = SystemLog_Manager(param_2);
    lVar8 = *(int64_t *)(param_2 + 0x9968);
    if (lVar8 == 0) {
      lVar8 = SystemLog_Manager(param_2);
    }
    lVar11 = system_message_buffer;
    lVar12 = *(int64_t *)(param_2 + 0x96e8);
    if (lVar8 != 0) {
      if (lVar12 == 0) {
        *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83b8) = 0;
      }
      else {
        uVar15 = *(uint64_t *)(system_message_buffer + 0x1cd8);
        SystemFunction_0001800858c0(lVar12,0,0);
        SystemCore_MemoryManager(uVar15);
        *(int32_t *)(lVar3 + 0xa4) = *(int32_t *)(lVar12 + 0x324);
        lVar11 = system_message_buffer;
      }
      *(int32_t *)(lVar3 + 0xc4) = 1;
      plVar4 = *(int64_t **)(lVar11 + 0x1cd8);
      if (*(int64_t *)(lVar8 + 0x1e0) == 0) {
        plVar14 = (int64_t *)0x0;
      }
      else {
        if (system_main_module_state != 0) {
          *(int64_t *)(lVar8 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
        }
        plVar14 = (int64_t *)(*(int64_t *)(lVar8 + 0x1e0) + 0x10);
        if ((plVar14 != (int64_t *)0x0) && (*plVar14 != 0)) {
          (**(code **)(*plVar4 + 0x70))(plVar4,*plVar14,4);
          lVar11 = system_message_buffer;
        }
      }
      plVar4[0x107e] = (int64_t)plVar14;
      SystemCore_ProcessorEx(*(uint64_t *)(lVar11 + 0x1cd8),(lVar12 != 0) + '\x01');
    }
    *(int8_t *)(lVar3 + 0x92) = 4;
    *(int32_t *)(lVar3 + 0xa0) = *(int32_t *)(lVar10 + 0x324);
    CoreEngine_0E8640(param_1,lVar3);
    lVar3 = system_message_buffer;
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83f0) = 0;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar3 + 0x1cd8),1);
  }
  SystemCore_Synchronizer(&plocal_var_1a8);
LAB_1800dc560:
  lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar3 + 0x8480) != 0) || (*(int *)(lVar3 + 0x885c) != -1)) ||
     (*(int *)(lVar3 + 0x8a5c) != 0x13)) {
    pplocal_var_208 = (void **)0x0;
    (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 200))
              (*(int64_t **)(lVar3 + 0x8400),9,1,&pplocal_var_208);
    (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 0x1f8))
              (*(int64_t **)(lVar3 + 0x8400),9,1,&pplocal_var_208);
    (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 0x40))
              (*(int64_t **)(lVar3 + 0x8400),9,1,&pplocal_var_208);
    *(uint64_t *)(lVar3 + 0x8480) = 0;
    *(int32_t *)(lVar3 + 0x885c) = 0xffffffff;
    *(int32_t *)(lVar3 + 0x8a5c) = 0x13;
    *(int *)(lVar3 + 0x82b4) = *(int *)(lVar3 + 0x82b4) + 1;
  }
  lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar3 + 0x8488) != 0) || (*(int *)(lVar3 + 0x8860) != -1)) ||
     (*(int *)(lVar3 + 0x8a60) != 0x13)) {
    pplocal_var_208 = (void **)0x0;
    (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 200))
              (*(int64_t **)(lVar3 + 0x8400),10,1,&pplocal_var_208);
    (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 0x1f8))
              (*(int64_t **)(lVar3 + 0x8400),10,1,&pplocal_var_208);
    (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 0x40))
              (*(int64_t **)(lVar3 + 0x8400),10,1,&pplocal_var_208);
    *(uint64_t *)(lVar3 + 0x8488) = 0;
    *(int32_t *)(lVar3 + 0x8860) = 0xffffffff;
    *(int32_t *)(lVar3 + 0x8a60) = 0x13;
    *(int *)(lVar3 + 0x82b4) = *(int *)(lVar3 + 0x82b4) + 1;
  }
  SystemCore_Synchronizer(&plocal_var_a8);
  plocal_var_1f0 = &system_data_buffer_ptr;
  if (puVar7 == (int32_t *)0x0) {
    plocal_var_1e8 = (int32_t *)0x0;
    local_var_1d8 = (uint64_t)local_var_1d8._4_4_ << 0x20;
    plocal_var_1f0 = &system_state_ptr;
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_238);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar7);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address