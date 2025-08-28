#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_01_part045.c - 2 个函数
// 函数: void GenericFunction_1800cfb40(uint64_t param_1,int64_t param_2,int64_t *param_3)
void GenericFunction_1800cfb40(uint64_t param_1,int64_t param_2,int64_t *param_3)
{
  int iVar1;
  int iVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int8_t stack_array_148 [32];
  int8_t stack_array_128 [8];
  void **pplocal_var_120;
  uint64_t local_var_118;
  uint64_t local_var_110;
  void *plocal_var_108;
  int8_t *plocal_var_100;
  int32_t local_var_f8;
  int8_t stack_array_f0 [72];
  void *aplocal_var_a8 [12];
  uint64_t local_var_48;
  lVar9 = system_message_buffer;
  uVar4 = system_parameter_buffer;
  local_var_110 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_148;
  iVar1 = *(int *)(param_2 + 0x25a8);
  if ((0 < iVar1) && ((*(byte *)(param_2 + 0x35c0) & 0x40) != 0)) {
    lVar5 = *(int64_t *)(system_message_buffer + 0x1cd8);
    *(int32_t *)(lVar5 + 0x11f0) = *(int32_t *)(lVar5 + 0x1230);
    *(int32_t *)(lVar5 + 0x11f4) = *(int32_t *)(lVar5 + 0x1234);
    *(int32_t *)(lVar5 + 0x11f8) = *(int32_t *)(lVar5 + 0x1238);
    *(int32_t *)(lVar5 + 0x11fc) = *(int32_t *)(lVar5 + 0x123c);
    *(int32_t *)(lVar5 + 0x1200) = *(int32_t *)(lVar5 + 0x1240);
    *(int32_t *)(lVar5 + 0x1204) = *(int32_t *)(lVar5 + 0x1244);
    *(int32_t *)(lVar5 + 0x1208) = *(int32_t *)(lVar5 + 0x1248);
    *(int32_t *)(lVar5 + 0x120c) = *(int32_t *)(lVar5 + 0x124c);
    *(int32_t *)(lVar5 + 0x1210) = *(int32_t *)(lVar5 + 0x1250);
    *(int32_t *)(lVar5 + 0x1214) = *(int32_t *)(lVar5 + 0x1254);
    *(int32_t *)(lVar5 + 0x1218) = *(int32_t *)(lVar5 + 0x1258);
    *(int32_t *)(lVar5 + 0x121c) = *(int32_t *)(lVar5 + 0x125c);
    *(int32_t *)(lVar5 + 0x1220) = *(int32_t *)(lVar5 + 0x1260);
    *(int32_t *)(lVar5 + 0x1224) = *(int32_t *)(lVar5 + 0x1264);
    *(int32_t *)(lVar5 + 0x1228) = *(int32_t *)(lVar5 + 0x1268);
    *(int32_t *)(lVar5 + 0x122c) = *(int32_t *)(lVar5 + 0x126c);
    lVar5 = *(int64_t *)(lVar9 + 0x1cd8);
    UltraHighFreq_DatabaseHandler1(lVar5,*(uint64_t *)(lVar9 + 0x1c70),lVar5 + 0x1100,0x6d0);
    DataStructure_4c0f0(param_2,aplocal_var_a8);
    SystemData_Processor(stack_array_128,&rendering_buffer_2992_ptr);
    pplocal_var_120 = &plocal_var_108;
    plVar7 = (int64_t *)0x0;
    plocal_var_108 = &memory_allocator_3480_ptr;
    plocal_var_100 = stack_array_f0;
    local_var_f8 = 0;
    stack_array_f0[0] = 0;
    DataStructureManager0(&plocal_var_108,&rendering_buffer_2960_ptr);
    SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_108);
    lVar9 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if ((*(int64_t *)(lVar9 + 0x84b8) != 0) ||
       ((*(int *)(lVar9 + 0x8878) != -1 || (*(int *)(lVar9 + 0x8a78) != 0x10)))) {
      local_var_118 = 0;
      (**(code **)(**(int64_t **)(lVar9 + 0x8400) + 0x40))
                (*(int64_t **)(lVar9 + 0x8400),0x10,1,&local_var_118);
      *(uint64_t *)(lVar9 + 0x84b8) = 0;
      *(int32_t *)(lVar9 + 0x8878) = 0xffffffff;
      *(int32_t *)(lVar9 + 0x8a78) = 0x10;
      *(int *)(lVar9 + 0x82b4) = *(int *)(lVar9 + 0x82b4) + 1;
    }
    lVar9 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar9 + 0x8540) != 0) || (*(int *)(lVar9 + 0x88bc) != -1)) ||
       (*(int *)(lVar9 + 0x8abc) != 0x10)) {
      pplocal_var_120 = (void **)0x0;
      (**(code **)(**(int64_t **)(lVar9 + 0x8400) + 0x40))
                (*(int64_t **)(lVar9 + 0x8400),0x21,1,&pplocal_var_120);
      *(uint64_t *)(lVar9 + 0x8540) = 0;
      *(int32_t *)(lVar9 + 0x88bc) = 0xffffffff;
      *(int32_t *)(lVar9 + 0x8abc) = 0x10;
      *(int *)(lVar9 + 0x82b4) = *(int *)(lVar9 + 0x82b4) + 1;
    }
    lVar5 = SystemLog_Manager(param_2);
    lVar9 = system_message_buffer;
    plVar3 = *(int64_t **)(system_message_buffer + 0x1cd8);
    iVar2 = *(int *)(param_2 + 0x357c);
    plVar8 = plVar7;
    if (*(int64_t *)(lVar5 + 0x1e0) != 0) {
      if (system_main_module_state != 0) {
        *(int64_t *)(lVar5 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
      }
      plVar8 = (int64_t *)((int64_t)(iVar2 * 2 + 1) * 0x10 + *(int64_t *)(lVar5 + 0x1e0));
      if ((plVar8 != (int64_t *)0x0) && (*plVar8 != 0)) {
        (**(code **)(*plVar3 + 0x70))(plVar3,*plVar8,4);
        lVar9 = system_message_buffer;
      }
    }
    plVar3[0x107e] = (int64_t)plVar8;
    SystemCore_MemoryManager(*(uint64_t *)(lVar9 + 0x1cd8),0,param_3);
    SystemCore_ProcessorEx(*(uint64_t *)(system_message_buffer + 0x1cd8),1);
    if (0 < iVar1) {
      do {
        lVar9 = *(int64_t *)
                 (*(int64_t *)(param_2 + 0x25b0 + ((uint64_t)plVar7 >> 0xb) * 8) + 0x10 +
                 (uint64_t)(uint)((int)plVar7 + (int)((uint64_t)plVar7 >> 0xb) * -0x800) * 0x18);
        *(int32_t *)(lVar9 + 0xc4) = 1;
        *(int32_t *)(lVar9 + 0xa4) = *(int32_t *)(*param_3 + 0x324);
        *(int32_t *)(lVar9 + 0xa0) = *(int32_t *)(lVar5 + 0x324);
        CoreEngine_0E8640(uVar4);
        uVar6 = (int)plVar7 + 1;
        plVar7 = (int64_t *)(uint64_t)uVar6;
      } while ((int)uVar6 < iVar1);
    }
    SystemCore_Synchronizer(&plocal_var_108);
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
    aplocal_var_a8[0] = &system_state_ptr;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_148);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1800cfee0(int64_t param_1,int64_t param_2)
void GenericFunction_1800cfee0(int64_t param_1,int64_t param_2)
{
  char cVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int iVar4;
  int64_t lVar5;
  uint uVar6;
  int iVar7;
  int8_t stack_array_228 [32];
  int32_t local_var_208;
  void *plocal_var_1a0;
  int64_t lStack_198;
  int32_t local_var_188;
  int8_t stack_array_180 [8];
  int iStack_178;
  int32_t local_var_174;
  uint local_var_170;
  uint64_t local_var_138;
  int8_t stack_array_c8 [128];
  uint64_t local_var_48;
  local_var_138 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_228;
  local_var_208 = 0;
  if (((*(byte *)(param_2 + 0x1bd8) & 0x20) == 0) || (*(char *)(param_1 + 0x1507) == '\0')) {
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_228);
  }
  GenericFunction_1800baa00(stack_array_180);
  while( true ) {
    if (((int)local_var_170 < 1) ||
       (lVar2 = strstr(CONCAT44(local_var_174,iStack_178),&system_data_cfb8), lVar2 == 0)) {
      cVar1 = UltraHighFreq_LogManager1(stack_array_180);
      if (cVar1 == '\0') {
        SystemManager_Processor(stack_array_180);
      }
// WARNING: Subroutine does not return
      memset(stack_array_c8,0,0x80);
    }
    iVar7 = 1;
    iVar4 = (int)lVar2 - iStack_178;
    if (local_var_170 < iVar4 + 1U) {
      iVar7 = local_var_170 - iVar4;
    }
    uVar6 = iVar4 + iVar7;
    if (uVar6 < local_var_170) {
      lVar5 = (int64_t)(int)uVar6;
      do {
        *(int8_t *)((CONCAT44(local_var_174,iStack_178) - (int64_t)iVar7) + lVar5) =
             *(int8_t *)(CONCAT44(local_var_174,iStack_178) + lVar5);
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 1;
      } while (uVar6 < local_var_170);
    }
    local_var_170 = local_var_170 - iVar7;
    *(int8_t *)((uint64_t)local_var_170 + CONCAT44(local_var_174,iStack_178)) = 0;
    uVar3 = CoreMemoryPoolValidator(&plocal_var_1a0,&system_data_e2c8);
    UtilitiesSystem_288c0(stack_array_180,(int)lVar2 - iStack_178,uVar3);
    plocal_var_1a0 = &system_data_buffer_ptr;
    if (lStack_198 != 0) break;
    lStack_198 = 0;
    local_var_188 = 0;
    plocal_var_1a0 = &system_state_ptr;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address