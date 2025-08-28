#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_06_part039.c - 3 个函数
// 函数: void function_3cafa0(int64_t param_1,int64_t param_2,uint64_t *param_3)
void function_3cafa0(int64_t param_1,int64_t param_2,uint64_t *param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  int64_t ****pppplVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t ****pppplVar7;
  int64_t ***ppplVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  uint64_t uVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  int8_t stack_array_148 [32];
  uint64_t *plocal_var_128;
  int8_t *plocal_var_120;
  int8_t local_var_118;
  int8_t stack_array_117 [7];
  int64_t ***ppplStack_110;
  int64_t ***ppplStack_108;
  int64_t ***ppplStack_100;
  uint64_t local_var_f8;
  int64_t lStack_f0;
  int32_t local_var_e8;
  int64_t lStack_e0;
  uint64_t *plocal_var_d8;
  uint64_t local_var_d0;
  int64_t lStack_c8;
  int32_t local_var_c0;
  int32_t local_var_bc;
  int32_t local_var_b8;
  int32_t local_var_b4;
  uint64_t *plocal_var_b0;
  int64_t lStack_a8;
  uint64_t local_var_a0;
  int32_t local_var_98;
  uint64_t local_var_90;
  int32_t stack_array_88 [2];
  uint64_t *plocal_var_80;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  uint64_t local_var_68;
  local_var_90 = 0xfffffffffffffffe;
  local_var_68 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_148;
  uVar1 = *(int32_t *)(param_2 + 0x10);
  uVar2 = *(int32_t *)(param_1 + 0x230);
  plocal_var_b0 = (uint64_t *)0x0;
  lStack_a8 = 0;
  iVar14 = 0;
  local_var_a0 = 0;
  local_var_98 = 3;
  local_var_e8 = 3;
  ppplStack_110 = (int64_t ***)&ppplStack_110;
  ppplStack_108 = (int64_t ***)&ppplStack_110;
  ppplStack_100 = (int64_t ***)0x0;
  local_var_f8 = 0;
  lStack_f0 = 0;
  lStack_e0 = param_1;
  plocal_var_d8 = param_3;
  lStack_c8 = param_2;
  function_057340(&plocal_var_b0,*(int64_t *)(param_2 + 0x40) - *(int64_t *)(param_2 + 0x38) >> 3);
  iVar15 = 0;
  puVar10 = *(uint64_t **)(param_2 + 0x38);
  puVar12 = plocal_var_b0;
  if (puVar10 != *(uint64_t **)(param_2 + 0x40)) {
    do {
      puVar11 = (uint64_t *)(system_system_data_memory + 0xd8);
      puVar9 = *(uint64_t **)(system_system_data_memory + 0xe8);
      puVar3 = puVar11;
      if (puVar9 != (uint64_t *)0x0) {
        do {
          if ((uint64_t)puVar9[4] < *puVar10) {
            puVar9 = (uint64_t *)*puVar9;
          }
          else {
            puVar3 = puVar9;
            puVar9 = (uint64_t *)puVar9[1];
          }
        } while (puVar9 != (uint64_t *)0x0);
      }
      if ((puVar3 == puVar11) || (*puVar10 < (uint64_t)puVar3[4])) {
        plocal_var_128 = puVar10;
        puVar3 = (uint64_t *)function_0fc780(puVar11,&lStack_c8);
        puVar3 = (uint64_t *)*puVar3;
      }
      *puVar12 = puVar3[5];
      pppplVar7 = &ppplStack_110;
      if ((int64_t ****)ppplStack_100 != (int64_t ****)0x0) {
        pppplVar4 = (int64_t ****)ppplStack_100;
        do {
          if (pppplVar4[4] < (int64_t ***)*puVar10) {
            pppplVar4 = (int64_t ****)*pppplVar4;
          }
          else {
            pppplVar7 = pppplVar4;
            pppplVar4 = (int64_t ****)pppplVar4[1];
          }
        } while (pppplVar4 != (int64_t ****)0x0);
      }
      if ((pppplVar7 == &ppplStack_110) || ((int64_t ***)*puVar10 < pppplVar7[4])) {
        if ((pppplVar7 == (int64_t ****)ppplStack_110) || (pppplVar7 == &ppplStack_110)) {
          if ((lStack_f0 != 0) &&
             (ppplVar8 = (int64_t ***)*puVar10, pppplVar7 = (int64_t ****)ppplStack_110,
             ppplStack_110[4] < ppplVar8)) {
LAB_1803cb1a3:
            bVar16 = false;
            pppplVar4 = pppplVar7;
            goto LAB_1803cb1a5;
          }
LAB_1803cb289:
          pppplVar4 = &ppplStack_110;
          bVar16 = true;
          if ((int64_t ****)ppplStack_100 != (int64_t ****)0x0) {
            pppplVar7 = (int64_t ****)ppplStack_100;
            do {
              pppplVar4 = pppplVar7;
              bVar16 = (int64_t ***)*puVar10 < pppplVar4[4];
              if (bVar16) {
                pppplVar7 = (int64_t ****)pppplVar4[1];
              }
              else {
                pppplVar7 = (int64_t ****)*pppplVar4;
              }
            } while (pppplVar7 != (int64_t ****)0x0);
          }
          pppplVar7 = pppplVar4;
          if (bVar16) {
            if (pppplVar4 != (int64_t ****)ppplStack_108) {
              pppplVar7 = (int64_t ****)Function_e2d50782(pppplVar4);
              goto LAB_1803cb2d5;
            }
            ppplVar8 = (int64_t ***)*puVar10;
          }
          else {
LAB_1803cb2d5:
            ppplVar8 = (int64_t ***)*puVar10;
            if (ppplVar8 <= pppplVar7[4]) goto LAB_1803cb1f9;
          }
LAB_1803cb2e2:
          if ((pppplVar4 != &ppplStack_110) && (pppplVar4[4] <= ppplVar8)) {
            uVar13 = 1;
            goto LAB_1803cb1b9;
          }
        }
        else {
          pppplVar4 = (int64_t ****)Function_7bfb2422();
          ppplVar8 = (int64_t ***)*puVar10;
          if ((ppplVar8 <= pppplVar7[4]) || (pppplVar4[4] <= ppplVar8)) goto LAB_1803cb289;
          if (*pppplVar7 == (int64_t ***)0x0) goto LAB_1803cb1a3;
          bVar16 = true;
LAB_1803cb1a5:
          if (pppplVar4 == (int64_t ****)0x0) goto LAB_1803cb289;
          if (!bVar16) goto LAB_1803cb2e2;
        }
        uVar13 = 0;
LAB_1803cb1b9:
        lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,(int8_t)local_var_e8);
        *(uint64_t *)(lVar5 + 0x20) = *puVar10;
        *(int32_t *)(lVar5 + 0x28) = 0;
// WARNING: Subroutine does not return
        SystemStateController(lVar5,pppplVar4,&ppplStack_110,uVar13);
      }
LAB_1803cb1f9:
      *(int *)(pppplVar7 + 5) = iVar14;
      iVar15 = iVar14 + 1;
      puVar10 = puVar10 + 1;
      param_3 = plocal_var_d8;
      puVar12 = puVar12 + 1;
      param_1 = lStack_e0;
      iVar14 = iVar15;
    } while (puVar10 != *(uint64_t **)(param_2 + 0x40));
  }
  puVar12 = plocal_var_b0;
  stack_array_88[0] = 6;
  local_var_6c = 0;
  plVar6 = *(int64_t **)(param_1 + 200);
  plocal_var_80 = param_3;
  local_var_78 = uVar2;
  local_var_74 = uVar1;
  local_var_70 = uVar1;
  if (iVar15 < 1) {
    lStack_e0 = *(int64_t *)(system_system_data_memory + 200);
    stack_array_117[0] = 0xb;
    plocal_var_120 = stack_array_117;
    plocal_var_128 = (uint64_t *)CONCAT71(plocal_var_128._1_7_,1);
    plVar6 = (int64_t *)(**(code **)(*plVar6 + 0xb8))(plVar6,stack_array_88,&lStack_e0);
  }
  else {
    local_var_118 = 0xb;
    plocal_var_120 = &local_var_118;
    plocal_var_128 = (uint64_t *)CONCAT71(plocal_var_128._1_7_,1);
    plVar6 = (int64_t *)
             (**(code **)(*plVar6 + 0xb8))
                       (plVar6,stack_array_88,plocal_var_b0,lStack_a8 - (int64_t)plocal_var_b0 >> 3);
  }
  local_var_b4 = 0;
  local_var_c0 = 4;
  local_var_bc = 10;
  local_var_b8 = 0xffffffff;
  (**(code **)(*plVar6 + 0xa0))(plVar6,&local_var_c0);
  plocal_var_d8 = (uint64_t *)0x400000;
  local_var_d0 = 0;
  (**(code **)(*plVar6 + 0xb0))(plVar6,&plocal_var_d8);
  if (param_3 != (uint64_t *)0x0) {
    (**(code **)*param_3)(param_3);
  }
  uVar13 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,3);
  function_3c5c50(uVar13,plVar6);
  ppplVar8 = ppplStack_100;
  if ((int64_t ****)ppplStack_100 != (int64_t ****)0x0) {
    SystemCache_Manager(&ppplStack_110,*ppplStack_100);
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(ppplVar8);
  }
  if (puVar12 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar12);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_68 ^ (uint64_t)stack_array_148);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
function_3cb450(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,int64_t param_5,
             char *param_6)
{
  int64_t *plVar1;
  int64_t *plVar2;
  float *pfVar3;
  uint64_t *puVar4;
  int8_t uVar5;
  int8_t uVar6;
  uint64_t local_var_98;
  uint64_t local_var_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  plVar1 = *(int64_t **)(param_1 + 0xb8);
  (**(code **)(*plVar1 + 0x318))(plVar1,0,0);
  AdvancedProcessor_StateManager0(&local_var_98,param_4);
  local_var_58 = local_var_98._4_4_;
  local_var_54 = (int32_t)local_var_90;
  local_var_50 = local_var_90._4_4_;
  local_var_4c = (int32_t)local_var_98;
  local_var_40 = *(int32_t *)(param_4 + 0x38);
  local_var_44 = *(int32_t *)(param_4 + 0x34);
  local_var_48 = *(int32_t *)(param_4 + 0x30);
  AdvancedProcessor_StateManager0(&local_var_98);
  local_var_78 = local_var_98._4_4_;
  local_var_74 = (int32_t)local_var_90;
  local_var_70 = local_var_90._4_4_;
  local_var_6c = (int32_t)local_var_98;
  local_var_60 = *(int32_t *)(param_5 + 0x38);
  local_var_64 = *(int32_t *)(param_5 + 0x34);
  local_var_68 = *(int32_t *)(param_5 + 0x30);
  plVar2 = (int64_t *)
           function_6d8aa0(*(uint64_t *)(param_1 + 200),*(uint64_t *)(param_2 + 0x28),&local_var_58,
                         *(uint64_t *)(param_3 + 0x28),&local_var_78);
  uVar6 = 2;
  if (*param_6 == '\0') {
    uVar5 = 2;
  }
  else {
    uVar5 = *param_6 == '\x01';
  }
  (**(code **)(*plVar2 + 0xe8))(plVar2,0,uVar5);
  if (param_6[1] == '\0') {
    uVar5 = 2;
  }
  else {
    uVar5 = param_6[1] == '\x01';
  }
  (**(code **)(*plVar2 + 0xe8))(plVar2,1,uVar5);
  if (param_6[2] == '\0') {
    uVar5 = 2;
  }
  else {
    uVar5 = param_6[2] == '\x01';
  }
  (**(code **)(*plVar2 + 0xe8))(plVar2,2,uVar5);
  if (param_6[8] == '\0') {
    uVar5 = 2;
  }
  else {
    uVar5 = param_6[8] == '\x01';
  }
  (**(code **)(*plVar2 + 0xe8))(plVar2,3,uVar5);
  if (param_6[0x14] == '\0') {
    uVar5 = 2;
  }
  else {
    uVar5 = param_6[0x14] == '\x01';
  }
  (**(code **)(*plVar2 + 0xe8))(plVar2,4,uVar5);
  if (param_6[0x15] != '\0') {
    uVar6 = param_6[0x15] == '\x01';
  }
  (**(code **)(*plVar2 + 0xe8))(plVar2,5,uVar6);
  fStack_84 = *(float *)(param_6 + 4);
  if (fStack_84 <= 0.01) {
    fStack_84 = 0.01;
  }
  pfVar3 = (float *)(**(code **)(**(int64_t **)(param_1 + 200) + 0x20))();
  local_var_98 = 0;
  local_var_90 = 0;
  fStack_88 = *pfVar3 * 0.01;
  (**(code **)(*plVar2 + 0x110))(plVar2,&local_var_98);
  fStack_80 = *(float *)(param_6 + 0x1c);
  fStack_84 = *(float *)(param_6 + 0x18);
  local_var_90 = 0;
  fStack_88 = fStack_80;
  if (fStack_84 <= fStack_80) {
    fStack_88 = fStack_84;
  }
  fStack_88 = fStack_88 * 0.49;
  if (0.1 <= fStack_88) {
    fStack_88 = 0.1;
  }
  local_var_98 = 0x3f00000000000000;
  (**(code **)(*plVar2 + 0x140))(plVar2,&local_var_98);
  fStack_84 = *(float *)(param_6 + 0x10);
  fStack_80 = *(float *)(param_6 + 0xc);
  local_var_90 = 0;
  fStack_88 = (fStack_84 - fStack_80) * 0.49;
  if (0.1 <= fStack_88) {
    fStack_88 = 0.1;
  }
  local_var_98 = 0x3f00000000000000;
  (**(code **)(*plVar2 + 0x130))(plVar2,&local_var_98);
  (**(code **)(*plVar2 + 400))(plVar2,0x3dcccccd);
  (**(code **)(*plVar2 + 0x78))(plVar2,6,1);
  (**(code **)(*plVar2 + 0x78))(plVar2,8);
  puVar4 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x10,8,3);
  *puVar4 = &processed_var_7888_ptr;
  *puVar4 = &memory_allocator_3576_ptr;
  puVar4[1] = plVar2;
  (**(code **)(*plVar1 + 800))(plVar1);
  return puVar4;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
function_3cb810(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,int64_t param_5,
             float param_6,float param_7)
{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int32_t local_var_78;
  int32_t local_var_74;
  uint64_t local_var_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  int32_t local_var_2c;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  plVar1 = *(int64_t **)(param_1 + 0xb8);
  (**(code **)(*plVar1 + 0x318))(plVar1,0,0);
  AdvancedProcessor_StateManager0(&local_var_78,param_4);
  local_var_38 = local_var_74;
  local_var_34 = (int32_t)local_var_70;
  local_var_30 = local_var_70._4_4_;
  local_var_2c = local_var_78;
  local_var_20 = *(int32_t *)(param_4 + 0x38);
  local_var_24 = *(int32_t *)(param_4 + 0x34);
  local_var_28 = *(int32_t *)(param_4 + 0x30);
  AdvancedProcessor_StateManager0(&local_var_78);
  local_var_58 = local_var_74;
  local_var_54 = (int32_t)local_var_70;
  local_var_50 = local_var_70._4_4_;
  local_var_4c = local_var_78;
  local_var_40 = *(int32_t *)(param_5 + 0x38);
  local_var_44 = *(int32_t *)(param_5 + 0x34);
  local_var_48 = *(int32_t *)(param_5 + 0x30);
  plVar2 = (int64_t *)
           function_6e3cd0(*(uint64_t *)(param_1 + 200),*(uint64_t *)(param_2 + 0x28),&local_var_38,
                         *(uint64_t *)(param_3 + 0x28),&local_var_58);
  local_var_78 = 0;
  local_var_70 = 0;
  fStack_64 = param_7;
  fStack_60 = param_6;
  fStack_68 = (param_7 - param_6) * 0.49;
  if (0.1 <= fStack_68) {
    fStack_68 = 0.1;
  }
  local_var_74 = 0x3f000000;
  (**(code **)(*plVar2 + 0xf8))(plVar2,&local_var_78);
  (**(code **)(*plVar2 + 0x140))(plVar2,1,1);
  (**(code **)(*plVar2 + 0x78))(plVar2,8);
  puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x10,8,3);
  *puVar3 = &processed_var_7888_ptr;
  *puVar3 = &memory_allocator_3576_ptr;
  puVar3[1] = plVar2;
  (**(code **)(*plVar1 + 800))(plVar1);
  return puVar3;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
function_3cba10(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,int64_t param_5,
             int32_t param_6,int32_t param_7)
{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int32_t local_var_148;
  int32_t local_var_144;
  int32_t local_var_140;
  int32_t local_var_13c;
  int32_t local_var_138;
  int32_t local_var_134;
  int32_t local_var_130;
  int32_t local_var_12c;
  int32_t local_var_128;
  int32_t local_var_124;
  int32_t local_var_120;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_10c;
  int32_t local_var_108;
  int32_t local_var_104;
  int32_t local_var_100;
  uint64_t local_var_f8;
  int8_t stack_array_e8 [48];
  int32_t local_var_b8;
  int32_t local_var_b4;
  int32_t local_var_b0;
  int8_t stack_array_a8 [48];
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int8_t stack_array_68 [64];
  local_var_f8 = 0xfffffffffffffffe;
  plVar1 = *(int64_t **)(param_1 + 0xb8);
  (**(code **)(*plVar1 + 0x318))(plVar1,0,0);
  local_var_148 = 0;
  local_var_144 = 0;
  local_var_140 = 0x3f800000;
  local_var_13c = 0x7f7fffff;
  function_645340(stack_array_68,param_4 + 0x30,param_5 + 0x30,&local_var_148);
  function_2f5d10(param_4,stack_array_e8,stack_array_68);
  function_2f5d10(param_5,stack_array_a8,stack_array_68);
  AdvancedProcessor_StateManager0(&local_var_148,stack_array_e8);
  local_var_118 = local_var_144;
  local_var_114 = local_var_140;
  local_var_110 = local_var_13c;
  local_var_10c = local_var_148;
  local_var_108 = local_var_b8;
  local_var_104 = local_var_b4;
  local_var_100 = local_var_b0;
  AdvancedProcessor_StateManager0(&local_var_148,stack_array_a8);
  local_var_138 = local_var_144;
  local_var_134 = local_var_140;
  local_var_130 = local_var_13c;
  local_var_12c = local_var_148;
  local_var_128 = local_var_78;
  local_var_124 = local_var_74;
  local_var_120 = local_var_70;
  plVar2 = (int64_t *)
           function_6e6000(*(uint64_t *)(param_1 + 200),*(uint64_t *)(param_2 + 0x28),&local_var_118,
                         *(uint64_t *)(param_3 + 0x28),&local_var_138);
  (**(code **)(*plVar2 + 0x78))(plVar2,8,1);
  (**(code **)(*plVar2 + 0x148))(plVar2,2,1);
  (**(code **)(*plVar2 + 0x148))(plVar2,4);
  (**(code **)(*plVar2 + 0xf0))(plVar2,param_6);
  (**(code **)(*plVar2 + 0x100))(plVar2,param_7);
  puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x10,8,3);
  *puVar3 = &processed_var_7888_ptr;
  *puVar3 = &memory_allocator_3576_ptr;
  puVar3[1] = plVar2;
  (**(code **)(*plVar1 + 800))(plVar1);
  return puVar3;
}
// 函数: void function_3cbc70(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void function_3cbc70(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  plVar2 = *(int64_t **)(param_1 + 0xb8);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x318))(plVar2,0,0,param_4,0xfffffffffffffffe);
    if (*(int64_t *)(param_1 + 0xa0) != 0) {
      (**(code **)(param_1 + 0xa8))(param_2);
    }
    *(uint64_t *)(param_2 + 0x10) = 0;
    plVar3 = *(int64_t **)(param_1 + 0x1b8);
    plVar4 = *(int64_t **)(param_1 + 0x1b0);
    if (plVar4 != plVar3) {
      do {
        if (*plVar4 == *(int64_t *)(param_2 + 0x28)) break;
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar3);
      if (plVar4 != plVar3) {
        plVar1 = plVar4 + 1;
        if (plVar1 < plVar3) {
// WARNING: Subroutine does not return
          memmove(plVar4,plVar1,(int64_t)plVar3 - (int64_t)plVar1);
        }
        *(int64_t **)(param_1 + 0x1b8) = plVar3 + -1;
      }
    }
    (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x68))
              (*(int64_t **)(param_1 + 0xb8),*(uint64_t *)(param_2 + 0x28),1);
    (**(code **)**(uint64_t **)(param_2 + 0x28))();
    (**(code **)(*plVar2 + 800))(plVar2);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3cbd70(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
void function_3cbd70(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
{
  int iVar1;
  int64_t *plVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int32_t uVar6;
  int32_t uVar7;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  iVar1 = *(int *)(system_parameter_buffer + 0x1358);
  bVar3 = 1 < iVar1 - 7U;
  plVar2 = *(int64_t **)(param_1 + 0xb8);
  (**(code **)(*plVar2 + 0x318))(plVar2,0,0,param_4,0xfffffffffffffffe);
  if (bVar3) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x3f800000;
  }
  (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x220))(*(int64_t **)(param_1 + 0xb8),0xc,uVar6);
  uVar6 = 0x3da3d70a;
  if (iVar1 == 7) {
    uVar7 = 0x3da3d70a;
  }
  else {
    uVar7 = 0;
  }
  (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x220))(*(int64_t **)(param_1 + 0xb8),3,uVar7);
  if (iVar1 == 7) {
    uVar7 = 0x3da3d70a;
  }
  else {
    uVar7 = 0;
  }
  (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x220))(*(int64_t **)(param_1 + 0xb8),2,uVar7);
  if (iVar1 == 8) {
    uVar7 = 0x3f800000;
  }
  else {
    uVar7 = 0;
  }
  (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x220))(*(int64_t **)(param_1 + 0xb8),6,uVar7);
  if (iVar1 == 8) {
    uVar7 = 0x3f800000;
  }
  else {
    uVar7 = 0;
  }
  (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x220))(*(int64_t **)(param_1 + 0xb8),9,uVar7);
  if (iVar1 != 8) {
    uVar6 = 0;
  }
  (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x220))(*(int64_t **)(param_1 + 0xb8),0x14,uVar6);
  if (iVar1 == 8) {
    uVar6 = 0x3e4ccccd;
  }
  else {
    uVar6 = 0;
  }
  (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x220))(*(int64_t **)(param_1 + 0xb8),0x15,uVar6);
  plVar5 = *(int64_t **)(param_1 + 0xb8);
  uVar6 = 0;
  lVar4 = *plVar5;
  if (!bVar3) {
    (**(code **)(lVar4 + 0x220))(plVar5,0x16,0);
    fStack_2c = *(float *)(param_1 + 0x128) + 15.0;
    fStack_30 = *(float *)(param_1 + 0x124) + 15.0;
    fStack_34 = *(float *)(param_1 + 0x120) + 15.0;
    fStack_38 = *(float *)(param_1 + 0x128) - 15.0;
    fStack_3c = *(float *)(param_1 + 0x124) - 15.0;
    fStack_40 = *(float *)(param_1 + 0x120) - 15.0;
    (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x230))
              (*(int64_t **)(param_1 + 0xb8),&fStack_40);
    plVar5 = *(int64_t **)(param_1 + 0xb8);
    lVar4 = *plVar5;
    uVar6 = 0x3f800000;
  }
  (**(code **)(lVar4 + 0x220))(plVar5,0,uVar6);
// WARNING: Could not recover jumptable at 0x0001803cbfa3. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*plVar2 + 800))(plVar2);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address