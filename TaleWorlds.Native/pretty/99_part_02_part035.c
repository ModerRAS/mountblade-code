#include "CoreSystem_DatabaseHandler0_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_02_part035.c - 2 个函数
// 函数: void function_1a82a0(int64_t *param_1)
void function_1a82a0(int64_t *param_1)
{
  uint64_t ****ppppuVar1;
  uint uVar2;
  uint64_t ***pppuVar3;
  int32_t **ppuVar4;
  uint64_t *****pppppuVar5;
  int64_t *plVar6;
  uint64_t **ppuVar7;
  uint64_t **ppuVar8;
  char cVar9;
  uint64_t *puVar10;
  uint64_t ****ppppuVar11;
  uint64_t uVar12;
  uint64_t ****ppppuVar13;
  uint64_t ****ppppuVar14;
  int32_t ***pppuVar15;
  uint64_t *puVar16;
  int64_t lVar17;
  int64_t lVar18;
  uint64_t ****ppppuVar19;
  int iVar20;
  int iVar21;
  uint64_t ****ppppuVar22;
  int64_t *plVar23;
  int64_t lVar24;
  int32_t ***pppuVar25;
  int64_t lVar26;
  int64_t lVar27;
  int iStackX_10;
  int32_t stack_special_x_14;
  uint64_t ****ppppstack_special_x_18;
  int32_t *****pppppstack_special_x_20;
  uint64_t local_var_118;
  uint64_t local_var_110;
  int32_t ***ppplocal_var_108;
  code *pcStack_100;
  uint64_t ****pppplocal_var_f8;
  uint64_t ****pppplocal_var_f0;
  uint64_t ****pppplocal_var_e8;
  int32_t local_var_e0;
  uint64_t *****ppppplocal_var_d8;
  int32_t ***ppplocal_var_d0;
  int32_t **pplocal_var_c8;
  uint64_t *plocal_var_c0;
  uint64_t *plocal_var_b8;
  int32_t local_var_b0;
  int64_t lStack_a8;
  int64_t lStack_a0;
  uint64_t local_var_98;
  int32_t local_var_90;
  uint64_t ****pppplocal_var_88;
  uint64_t ****pppplocal_var_80;
  uint64_t ***appplocal_var_78 [2];
  code *pcStack_68;
  void *plocal_var_60;
  uint64_t local_var_58;
  local_var_58 = 0xfffffffffffffffe;
  if (*(char *)(*param_1 + 0x48) == '\0') {
    cVar9 = *(char *)(*param_1 + 0x47);
    lStack_a8 = 0;
    lStack_a0 = 0;
    local_var_98 = 0;
    local_var_90 = 3;
    function_1a5ea0(param_1[1],&lStack_a8);
    iStackX_10 = 0;
    pplocal_var_c8 = (int32_t **)0x0;
    plocal_var_c0 = (uint64_t *)0x0;
    plocal_var_b8 = (uint64_t *)0x0;
    local_var_b0 = 3;
    pppplocal_var_f8 = (uint64_t ****)0x0;
    pppplocal_var_f0 = (uint64_t ****)0x0;
    pppplocal_var_e8 = (uint64_t ****)0x0;
    local_var_e0 = 3;
    puVar10 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x8000,3);
    if (pplocal_var_c8 != (int32_t **)plocal_var_c0) {
// WARNING: Subroutine does not return
      memmove(puVar10,pplocal_var_c8,(int64_t)plocal_var_c0 - (int64_t)pplocal_var_c8);
    }
    if (pplocal_var_c8 != (int32_t **)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(pplocal_var_c8);
    }
    plocal_var_b8 = puVar10 + 0x1000;
    pplocal_var_c8 = (int32_t **)puVar10;
    plocal_var_c0 = puVar10;
    if ((uint64_t)(((int64_t)pppplocal_var_e8 - (int64_t)pppplocal_var_f8) / 0x18) < 0x1000) {
      ppppuVar11 = (uint64_t ****)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18000,(int8_t)local_var_e0);
      ppppuVar14 = pppplocal_var_f0;
      ppppuVar13 = pppplocal_var_f8;
      ppppuVar19 = ppppuVar11;
      if (pppplocal_var_f8 != pppplocal_var_f0) {
        ppppuVar22 = pppplocal_var_f8 + 1;
        do {
          *ppppuVar19 = ppppuVar22[-1];
          ppppuVar19[1] = *ppppuVar22;
          *ppppuVar22 = (uint64_t ***)0x0;
          *(int8_t *)(ppppuVar19 + 2) = *(int8_t *)(ppppuVar22 + 1);
          ppppuVar19 = ppppuVar19 + 3;
          ppppuVar1 = ppppuVar22 + 2;
          ppppuVar22 = ppppuVar22 + 3;
        } while (ppppuVar1 != pppplocal_var_f0);
      }
      for (; ppppstack_special_x_18 = ppppuVar13, ppppuVar13 != ppppuVar14; ppppuVar13 = ppppuVar13 + 3) {
        if (ppppuVar13[1] != (uint64_t ***)0x0) {
          (*(code *)(*ppppuVar13[1])[7])();
        }
      }
      if (pppplocal_var_f8 != (uint64_t ****)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(pppplocal_var_f8);
      }
      pppplocal_var_e8 = ppppuVar11 + 0x3000;
      pppplocal_var_f8 = ppppuVar11;
      pppplocal_var_f0 = ppppuVar19;
    }
    lVar17 = (lStack_a0 - lStack_a8) / 6 + (lStack_a0 - lStack_a8 >> 0x3f);
    lVar27 = lVar17 >> 2;
    lVar17 = lVar17 >> 0x3f;
    iVar20 = 0;
    if (cVar9 == '\0') {
      if (lVar27 != lVar17) {
        lVar26 = 0;
        do {
          ppppuVar13 = pppplocal_var_f0;
          plVar23 = (int64_t *)(lStack_a8 + lVar26);
          if ((char)plVar23[2] == '\0') {
            if (pppplocal_var_f0 < pppplocal_var_e8) {
              ppppuVar14 = pppplocal_var_f0 + 3;
              ppppstack_special_x_18 = pppplocal_var_f0;
              *pppplocal_var_f0 = (uint64_t ***)*plVar23;
              pppuVar3 = (uint64_t ***)plVar23[1];
              pppplocal_var_f0[1] = pppuVar3;
              pppplocal_var_f0 = ppppuVar14;
              if (pppuVar3 != (uint64_t ***)0x0) {
                (*(code *)(*pppuVar3)[5])();
              }
              *(char *)(ppppuVar13 + 2) = (char)plVar23[2];
            }
            else {
              function_1bb6c0(&pppplocal_var_f8,plVar23);
            }
          }
          iVar20 = iVar20 + 1;
          lVar26 = lVar26 + 0x18;
        } while ((uint64_t)(int64_t)iVar20 < (uint64_t)(lVar27 - lVar17));
      }
    }
    else if (lVar27 != lVar17) {
      lVar26 = 0;
      do {
        ppppuVar13 = pppplocal_var_f0;
        plVar23 = (int64_t *)(lStack_a8 + lVar26);
        if ((char)plVar23[2] == '\0') {
          ppppuVar14 = (uint64_t ****)plVar23[1];
          pppuVar3 = ppppuVar14[0x5d];
          ppppstack_special_x_18 = ppppuVar14;
          if (((((uint64_t)pppuVar3 & 1) == 0) || (((uint64_t)pppuVar3 & 2) == 0)) ||
             (((uint64_t)pppuVar3 & 8) == 0)) {
            if (pppplocal_var_e8 <= pppplocal_var_f0) goto LAB_1801a867d;
            ppppuVar14 = pppplocal_var_f0 + 3;
            ppppstack_special_x_18 = pppplocal_var_f0;
            *pppplocal_var_f0 = (uint64_t ***)*plVar23;
            pppuVar3 = (uint64_t ***)plVar23[1];
            pppplocal_var_f0[1] = pppuVar3;
            pppplocal_var_f0 = ppppuVar14;
            if (pppuVar3 != (uint64_t ***)0x0) {
              (*(code *)(*pppuVar3)[5])();
            }
            *(char *)(ppppuVar13 + 2) = (char)plVar23[2];
          }
          else {
            if (((*(byte *)((int64_t)ppppuVar14 + 0x2e9) & 1) == 0) &&
               ((*(byte *)((int64_t)ppppuVar14 + 0x2c4) & 8) == 0)) {
              if (ppppuVar14[0x2d] == (uint64_t ***)0x0) {
                cVar9 = function_2f23a0(ppppuVar14,*(uint64_t *)(param_1[1] + 600));
                cVar9 = cVar9 == '\0';
              }
              else {
                cVar9 = function_2f28a0();
              }
              if (cVar9 != '\0') {
                function_2f2240(ppppuVar14,*(uint64_t *)(param_1[1] + 600));
                iVar21 = function_2ef1b0(ppppuVar14,*(uint64_t *)(param_1[1] + 600));
                iStackX_10 = iStackX_10 + iVar21;
                SystemInitializer(&pplocal_var_c8,&ppppstack_special_x_18);
                goto LAB_1801a868a;
              }
            }
            ppppuVar13 = pppplocal_var_f0;
            if (pppplocal_var_f0 < pppplocal_var_e8) {
              ppppuVar14 = pppplocal_var_f0 + 3;
              ppppstack_special_x_18 = pppplocal_var_f0;
              *pppplocal_var_f0 = (uint64_t ***)*plVar23;
              pppuVar3 = (uint64_t ***)plVar23[1];
              pppplocal_var_f0[1] = pppuVar3;
              pppplocal_var_f0 = ppppuVar14;
              if (pppuVar3 != (uint64_t ***)0x0) {
                (*(code *)(*pppuVar3)[5])();
              }
              *(char *)(ppppuVar13 + 2) = (char)plVar23[2];
            }
            else {
LAB_1801a867d:
              function_1bb6c0(&pppplocal_var_f8,plVar23);
            }
          }
        }
LAB_1801a868a:
        iVar20 = iVar20 + 1;
        lVar26 = lVar26 + 0x18;
      } while ((uint64_t)(int64_t)iVar20 < (uint64_t)(lVar27 - lVar17));
    }
    local_var_110 = (int32_t ***)param_1[1];
    local_var_118 = (int32_t *****)&pplocal_var_c8;
    ppplocal_var_108 = (int32_t ***)&iStackX_10;
    ppppplocal_var_d8 = &pppplocal_var_f8;
    ppplocal_var_d0 = local_var_110;
    uVar12 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
    ppppstack_special_x_18 = appplocal_var_78;
    pcStack_68 = function_1bc5d0;
    plocal_var_60 = &ui_system_data_1040_ptr;
    appplocal_var_78[0] = (uint64_t ***)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags);
    *(int32_t *)appplocal_var_78[0] = (int32_t)local_var_118;
    *(int32_t *)((int64_t)appplocal_var_78[0] + 4) = local_var_118._4_4_;
    *(int32_t *)((int32_t ***)appplocal_var_78[0] + 1) = (int32_t)local_var_110;
    *(int32_t *)((int64_t)appplocal_var_78[0] + 0xc) = local_var_110._4_4_;
    ((int32_t ***)appplocal_var_78[0])[2] = (int32_t **)ppplocal_var_108;
    ppppuVar13 = (uint64_t ****)SystemCore_ErrorHandler(uVar12,appplocal_var_78);
    pppplocal_var_80 = ppppuVar13;
    if (ppppuVar13 != (uint64_t ****)0x0) {
      (*(code *)(*ppppuVar13)[5])(ppppuVar13);
    }
    ppppuVar13[3] = (uint64_t ***)0xfffffffffffffffd;
    uVar12 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
    ppppstack_special_x_18 = (uint64_t ****)&local_var_118;
    ppplocal_var_108 = (int32_t ***)&processed_var_976_ptr;
    pcStack_100 = function_1bc4e0;
    local_var_118 = (int32_t *****)ppppplocal_var_d8;
    local_var_110 = ppplocal_var_d0;
    ppppuVar14 = (uint64_t ****)SystemCore_ErrorHandler(uVar12,&local_var_118);
    pppplocal_var_88 = ppppuVar14;
    if (ppppuVar14 != (uint64_t ****)0x0) {
      (*(code *)(*ppppuVar14)[5])(ppppuVar14);
    }
    uVar12 = system_context_ptr;
    pppppstack_special_x_20 = (int32_t *****)&ppppstack_special_x_18;
    ppppstack_special_x_18 = ppppuVar13;
    (*(code *)(*ppppuVar13)[5])(ppppuVar13);
    SystemCore_TimerManager(uVar12,&ppppstack_special_x_18);
    uVar12 = system_context_ptr;
    ppppplocal_var_d8 = (uint64_t *****)&pppppstack_special_x_20;
    pppppstack_special_x_20 = (int32_t *****)ppppuVar14;
    if (ppppuVar14 != (uint64_t ****)0x0) {
      (*(code *)(*ppppuVar14)[5])(ppppuVar14);
    }
    SystemCore_TimerManager(uVar12,&pppppstack_special_x_20);
    uVar12 = system_context_ptr;
    ppppplocal_var_d8 = &ppppstack_special_x_18;
    ppppstack_special_x_18 = ppppuVar13;
    (*(code *)(*ppppuVar13)[5])(ppppuVar13);
    SystemCore_ErrorHandler(uVar12,&ppppstack_special_x_18,0);
    uVar12 = system_context_ptr;
    ppppplocal_var_d8 = (uint64_t *****)&pppppstack_special_x_20;
    pppppstack_special_x_20 = (int32_t *****)ppppuVar14;
    if (ppppuVar14 != (uint64_t ****)0x0) {
      (*(code *)(*ppppuVar14)[5])(ppppuVar14);
    }
    SystemCore_ErrorHandler(uVar12,&pppppstack_special_x_20,0);
    if (*(int64_t *)(param_1[1] + 600) != 0) {
      local_var_118 = (int32_t *****)0x0;
      local_var_110 = (int32_t ***)0x0;
      ppplocal_var_108 = (int32_t ***)0x0;
      pcStack_100 = (code *)CONCAT44(pcStack_100._4_4_,3);
      pppuVar15 = (int32_t ***)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x2000,3);
      if (local_var_118 != (int32_t *****)local_var_110) {
// WARNING: Subroutine does not return
        memmove(pppuVar15,local_var_118,(int64_t)local_var_110 - (int64_t)local_var_118);
      }
      if (local_var_118 != (int32_t *****)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(local_var_118);
      }
      ppplocal_var_108 = pppuVar15 + 0x400;
      ppppstack_special_x_18 = (uint64_t ****)((uint64_t)ppppstack_special_x_18 & 0xffffffff00000000);
      lVar17 = lStack_a0 - lStack_a8 >> 0x3f;
      local_var_118 = (int32_t *****)pppuVar15;
      local_var_110 = pppuVar15;
      if ((lStack_a0 - lStack_a8) / 0x18 + lVar17 != lVar17) {
        lVar17 = 0;
        do {
          ppuVar4 = *(int32_t ***)(lStack_a8 + 8 + lVar17);
          if (local_var_110 < ppplocal_var_108) {
            *local_var_110 = ppuVar4;
            pppuVar15 = local_var_110;
          }
          else {
            pppuVar15 = (int32_t ***)
                        CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,8,(uint64_t)pcStack_100 & 0xff);
            if (local_var_118 != (int32_t *****)local_var_110) {
// WARNING: Subroutine does not return
              memmove(pppuVar15,local_var_118,(int64_t)local_var_110 - (int64_t)local_var_118);
            }
            *pppuVar15 = ppuVar4;
            if (local_var_118 != (int32_t *****)0x0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            ppplocal_var_108 = pppuVar15 + 1;
            local_var_118 = (int32_t *****)pppuVar15;
          }
          local_var_110 = pppuVar15 + 1;
          NetworkSystem_SecurityManager(ppuVar4,&local_var_118);
          iVar20 = 0;
          pppuVar15 = (int32_t ***)local_var_118;
          if ((int64_t)local_var_110 - (int64_t)local_var_118 >> 3 != 0) {
            lVar27 = 0;
            pppuVar25 = local_var_110;
            do {
              lVar26 = *(int64_t *)((int64_t)pppuVar15 + lVar27);
              iVar21 = 0;
              lVar18 = *(int64_t *)(lVar26 + 0x200);
              if (*(int64_t *)(lVar26 + 0x208) - lVar18 >> 3 != 0) {
                lVar24 = 0;
                do {
                  pppppuVar5 = *(uint64_t ******)(lVar18 + lVar24);
                  ppppplocal_var_d8 = pppppuVar5;
                  if (pppppuVar5 != (uint64_t *****)0x0) {
                    (*(code *)(*pppppuVar5)[5])(pppppuVar5);
                  }
                  (*(code *)(*pppppuVar5)[0xc])(pppppuVar5);
                  (*(code *)(*pppppuVar5)[7])(pppppuVar5);
                  iVar21 = iVar21 + 1;
                  lVar24 = lVar24 + 8;
                  lVar18 = *(int64_t *)(lVar26 + 0x200);
                  pppuVar15 = (int32_t ***)local_var_118;
                  pppuVar25 = local_var_110;
                } while ((uint64_t)(int64_t)iVar21 <
                         (uint64_t)(*(int64_t *)(lVar26 + 0x208) - lVar18 >> 3));
              }
              iVar20 = iVar20 + 1;
              lVar27 = lVar27 + 8;
            } while ((uint64_t)(int64_t)iVar20 <
                     (uint64_t)((int64_t)pppuVar25 - (int64_t)pppuVar15 >> 3));
          }
          iVar20 = (int)ppppstack_special_x_18 + 1;
          ppppstack_special_x_18 = (uint64_t ****)CONCAT44(ppppstack_special_x_18._4_4_,iVar20);
          lVar17 = lVar17 + 0x18;
          local_var_110 = pppuVar15;
        } while ((uint64_t)(int64_t)iVar20 < (uint64_t)((lStack_a0 - lStack_a8) / 0x18));
      }
      lVar17 = *(int64_t *)(*(int64_t *)(param_1[1] + 600) + 0x58);
      lVar27 = *(int64_t *)(lVar17 + 8);
      ppppuVar14 = pppplocal_var_88;
      ppppuVar13 = pppplocal_var_80;
      while (pppplocal_var_88 = ppppuVar14, pppplocal_var_80 = ppppuVar13, lVar27 != lVar17) {
        lVar26 = *(int64_t *)(lVar27 + 0x20);
        if ((*(int64_t *)(lVar26 + 0x20) == param_1[1]) && ((*(byte *)(lVar26 + 0x2c4) & 2) == 0))
        {
          lVar18 = *(int64_t *)(lVar27 + 0x28);
          plVar6 = *(int64_t **)(lVar18 + 8);
          lVar24 = *plVar6;
          plVar23 = plVar6;
          if (lVar24 == 0) {
            plVar23 = plVar6 + 1;
            lVar24 = *plVar23;
            while (lVar24 == 0) {
              plVar23 = plVar23 + 1;
              lVar24 = *plVar23;
            }
          }
          if (lVar24 != plVar6[*(int64_t *)(lVar18 + 0x10)]) {
            ppppplocal_var_d8 = &ppppstack_special_x_18;
            do {
              (**(code **)(*(int64_t *)**(uint64_t **)(lVar24 + 8) + 0xa8))
                        ((int64_t *)**(uint64_t **)(lVar24 + 8),&pppppstack_special_x_20);
              function_279640(pppppstack_special_x_20,*(uint64_t *)(lVar24 + 8),0);
              ppppstack_special_x_18 = (uint64_t ****)pppppstack_special_x_20;
              if (pppppstack_special_x_20 != (int32_t *****)0x0) {
                (*(code *)(*pppppstack_special_x_20)[5])();
              }
              PhysicsSystem_TerrainCollider(lVar26,ppppstack_special_x_18);
              if (ppppstack_special_x_18 != (uint64_t ****)0x0) {
                (*(code *)(*ppppstack_special_x_18)[7])();
              }
              if (pppppstack_special_x_20 != (int32_t *****)0x0) {
                (*(code *)(*pppppstack_special_x_20)[7])();
              }
              lVar24 = *(int64_t *)(lVar24 + 0x10);
              while (lVar24 == 0) {
                plVar23 = plVar23 + 1;
                lVar24 = *plVar23;
              }
            } while (lVar24 != *(int64_t *)
                                (*(int64_t *)(lVar18 + 8) + *(int64_t *)(lVar18 + 0x10) * 8));
          }
        }
        lVar27 = SystemFunction_00018066bd70(lVar27);
        ppppuVar14 = pppplocal_var_88;
        ppppuVar13 = pppplocal_var_80;
      }
      ppppuVar19 = *(uint64_t *****)(param_1[1] + 600);
      ppppstack_special_x_18 = ppppuVar19;
      if (ppppuVar19 != (uint64_t ****)0x0) {
        pppuVar3 = ppppuVar19[0xb];
        ppuVar8 = pppuVar3[2];
        while (ppuVar8 != (uint64_t **)0x0) {
          function_3a0f00(pppuVar3,*ppuVar8);
          ppuVar7 = (uint64_t **)ppuVar8[1];
          pppppstack_special_x_20 = (int32_t *****)(ppuVar8 + 4);
          ppuVar8 = ppuVar7;
          if (*pppppstack_special_x_20 != (int32_t ****)0x0) {
            (*(code *)(**pppppstack_special_x_20)[7])();
          }
        }
        *pppuVar3 = (uint64_t **)pppuVar3;
        pppuVar3[1] = (uint64_t **)pppuVar3;
        pppuVar3[2] = (uint64_t **)0x0;
        *(int8_t *)(pppuVar3 + 3) = 0;
        pppuVar3[4] = (uint64_t **)0x0;
        function_3a0e50(ppppuVar19[0xc]);
        function_3a0e50(ppppuVar19[0xd]);
        pppuVar3 = ppppuVar19[10];
        if (pppuVar3 != (uint64_t ***)0x0) {
          if (*pppuVar3 != (uint64_t **)0x0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          *pppuVar3 = (uint64_t **)0x0;
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(pppuVar3);
        }
        ppppuVar19[10] = (uint64_t ***)0x0;
        _Mtx_destroy_in_situ(ppppuVar19);
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(ppppuVar19);
      }
      *(uint64_t *)(param_1[1] + 600) = 0;
      if (local_var_118 != (int32_t *****)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      ppppstack_special_x_18 = (uint64_t ****)0x0;
      local_var_118 = (int32_t *****)0x0;
    }
    if (ppppuVar14 != (uint64_t ****)0x0) {
      (*(code *)(*ppppuVar14)[7])(ppppuVar14);
    }
    (*(code *)(*ppppuVar13)[7])(ppppuVar13);
    ppppuVar14 = pppplocal_var_f0;
    lVar17 = lStack_a0;
    for (ppppuVar13 = pppplocal_var_f8; lStack_a0 = lVar17, ppppuVar13 != ppppuVar14;
        ppppuVar13 = ppppuVar13 + 3) {
      if (ppppuVar13[1] != (uint64_t ***)0x0) {
        (*(code *)(*ppppuVar13[1])[7])();
      }
      lVar17 = lStack_a0;
    }
    if (pppplocal_var_f8 != (uint64_t ****)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (pplocal_var_c8 != (int32_t **)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    pppplocal_var_f8 = (uint64_t ****)0x0;
    pplocal_var_c8 = (int32_t **)0x0;
    for (lVar27 = lStack_a8; lVar27 != lVar17; lVar27 = lVar27 + 0x18) {
      if (*(int64_t **)(lVar27 + 8) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(lVar27 + 8) + 0x38))();
      }
    }
    if (lStack_a8 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  function_1ab4c0(param_1[1]);
  puVar16 = (uint64_t *)function_198890(param_1[1],&iStackX_10,0);
  lVar17 = param_1[1];
  uVar12 = *puVar16;
  *puVar16 = 0;
  plVar23 = *(int64_t **)(lVar17 + 0x8208);
  *(uint64_t *)(lVar17 + 0x8208) = uVar12;
  if (plVar23 != (int64_t *)0x0) {
    (**(code **)(*plVar23 + 0x38))();
  }
  if ((int64_t *)CONCAT44(stack_special_x_14,iStackX_10) != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)CONCAT44(stack_special_x_14,iStackX_10) + 0x38))();
  }
  function_170ac0(*(uint64_t *)(param_1[1] + 0x8208),&memory_allocator_3496_ptr);
  lVar17 = *(int64_t *)(param_1[1] + 0x8208);
  uVar2 = *(uint *)(lVar17 + 0x2ac);
  *(uint *)(lVar17 + 0x2ac) = uVar2 | 0x20000;
  function_2ee810(lVar17,uVar2);
  function_2ee990(lVar17,uVar2);
  lVar17 = *(int64_t *)(param_1[1] + 0x8208);
  uVar2 = *(uint *)(lVar17 + 0x2c4);
  if ((uVar2 & 4) == 0) {
    *(uint *)(lVar17 + 0x2c4) = uVar2 | 4;
    if (((*(int64_t *)(lVar17 + 0x20) != 0) &&
        (*(char *)(*(int64_t *)(lVar17 + 0x20) + 0x60cb0) == '\0')) && ((uVar2 & 2) != 0)) {
      RenderingSystem_UpdateCamera(lVar17,0);
    }
  }
  NetworkProtocol_Transmitter(*(uint64_t *)(param_1[1] + 0x8208),&system_data_0300);
  function_3986d0(param_1[1] + 0x607e0);
  if ((*(char *)(*param_1 + 0x46) == '\0') &&
     (plVar23 = *(int64_t **)(system_operation_state + 0x1860), plVar23 != (int64_t *)0x0)) {
    (**(code **)(*plVar23 + 0x28))(plVar23,0x3e0f5c29);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1a8f60(int64_t *param_1)
void function_1a8f60(int64_t *param_1)
{
  if (*(int64_t *)*param_1 != ((int64_t *)*param_1)[1]) {
    function_24e890(param_1[1] + 0x570);
    function_2511f0(param_1[1] + 0x570,param_1[1],*param_1,*(int32_t *)param_1[2]);
    function_1b9eb0(param_1[1] + 0x5c8);
    function_1b9da0(param_1[1] + 0x5a8);
    function_1b9fc0(param_1[1] + 0x5e8);
    function_1ba230(param_1[1] + 0x608);
    function_1ba230(param_1[1] + 0x628);
// WARNING: Subroutine does not return
    SystemParameterHandler(system_message_context,&system_data_buffer_ptr,
                  ((int64_t *)*param_1)[1] - *(int64_t *)*param_1 >> 3);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address