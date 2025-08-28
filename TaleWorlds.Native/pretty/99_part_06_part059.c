/* SystemCore_ConfigValidator - SystemCore_ConfigValidator */
#define SystemCore_ConfigValidator SystemCore_ConfigValidator
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_06_part059.c - 6 个函数
// 函数: void function_3e1ca0(uint64_t *param_1)
void function_3e1ca0(uint64_t *param_1)
{
  int8_t (*pauVar1) [16];
  uint uVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  bool bVar6;
  int iVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  uint *puVar13;
  uint64_t uVar14;
  int64_t lVar15;
  uint64_t uVar16;
  uint64_t *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint64_t uVar22;
  uint64_t *puVar23;
  float fVar24;
  int8_t astack_special_x_8 [8];
  char acStackX_10 [8];
  int iStackX_18;
  uint64_t *pstack_special_x_20;
  uint local_var_98;
  uint local_var_94;
  uint local_var_90;
  int iStack_8c;
  uint local_var_88;
  uint local_var_84;
  uint local_var_80;
  uint local_var_7c;
  int8_t stack_array_78 [16];
LAB_1803e1ce0:
  puVar8 = (uint64_t *)param_1[1];
  do {
    if (puVar8 == param_1) {
      return;
    }
    uVar2 = *(uint *)(puVar8 + 4);
    local_var_84 = *(uint *)((int64_t)puVar8 + 0x24);
    uVar3 = *(uint *)(puVar8 + 5);
    local_var_7c = *(uint *)((int64_t)puVar8 + 0x2c);
    local_var_88 = uVar2;
    local_var_80 = uVar3;
    if ((0x3ff < (int)local_var_84) && (0x3ff < (int)uVar3)) {
      lVar15 = puVar8[7];
      lVar10 = puVar8[6];
      fVar24 = (float)logf();
      iVar19 = 1 << ((byte)(int)(fVar24 * 1.442695) & 0x1f);
      iVar7 = (int)(lVar15 - lVar10 >> 4);
      iStackX_18 = iVar19;
      if ((2 < iVar19) && (0 < iVar7 - iVar19)) break;
    }
    puVar8 = (uint64_t *)SystemFunction_00018066bd70(puVar8);
  } while( true );
  iVar20 = 0;
  puVar9 = (uint64_t *)param_1[1];
  while (puVar9 != param_1) {
    stack_array_78 = *(int8_t (*) [16])(puVar9 + 4);
    if (((stack_array_78._4_4_ == local_var_84) && (stack_array_78._8_4_ == uVar3)) &&
       (stack_array_78._0_4_ == uVar2)) {
      iVar20 = iVar20 + 1;
    }
    puVar9 = (uint64_t *)SystemFunction_00018066bd70(puVar9);
    uVar2 = local_var_88;
    uVar3 = local_var_80;
  }
  puVar9 = (uint64_t *)param_1[0x1f];
  local_var_98 = uVar2;
  local_var_94 = local_var_84;
  local_var_90 = uVar3;
  iStack_8c = iVar20;
  if (puVar9 < (uint64_t *)param_1[0x20]) {
    param_1[0x1f] = puVar9 + 2;
    *puVar9 = CONCAT44(local_var_84,uVar2);
    puVar9[1] = CONCAT44(iVar20,uVar3);
    goto LAB_1803e1e98;
  }
  puVar17 = (uint64_t *)param_1[0x1e];
  lVar15 = (int64_t)puVar9 - (int64_t)puVar17 >> 4;
  if (lVar15 == 0) {
    lVar15 = 1;
LAB_1803e1e15:
    puVar11 = (uint64_t *)
              CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar15 << 4,*(int8_t *)(param_1 + 0x21));
    puVar9 = (uint64_t *)param_1[0x1f];
    puVar17 = (uint64_t *)param_1[0x1e];
  }
  else {
    lVar15 = lVar15 * 2;
    if (lVar15 != 0) goto LAB_1803e1e15;
    puVar11 = (uint64_t *)0x0;
  }
  if (puVar17 != puVar9) {
// WARNING: Subroutine does not return
    memmove(puVar11,puVar17,(int64_t)puVar9 - (int64_t)puVar17);
  }
  *puVar11 = CONCAT44(local_var_94,local_var_98);
  puVar11[1] = CONCAT44(iStack_8c,local_var_90);
  if (param_1[0x1e] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x1e] = puVar11;
  param_1[0x1f] = puVar11 + 2;
  param_1[0x20] = puVar11 + lVar15 * 2;
LAB_1803e1e98:
  lVar15 = (int64_t)iVar19;
  iVar20 = iVar19;
  for (; iVar19 < iVar7; iVar19 = iVar19 + 1) {
    pauVar1 = (int8_t (*) [16])(puVar8[6] + lVar15 * 0x10);
    uVar22 = *(uint64_t *)*pauVar1;
    uVar5 = *(uint64_t *)(*pauVar1 + 8);
    stack_array_78 = *pauVar1;
    puVar9 = (uint64_t *)param_1[2];
    puVar17 = param_1;
    while (puVar11 = puVar17, puVar17 = puVar9, puVar17 != (uint64_t *)0x0) {
      uVar2 = *(uint *)(puVar17 + 4);
      if ((((uVar2 < local_var_98) ||
           ((uVar2 <= local_var_98 && (*(int *)((int64_t)puVar17 + 0x24) < (int)local_var_94)))) ||
          ((uVar2 <= local_var_98 &&
           (((uVar2 < local_var_98 || (*(int *)((int64_t)puVar17 + 0x24) <= (int)local_var_94)) &&
            (*(int *)(puVar17 + 5) < (int)local_var_90)))))) ||
         (((uVar2 <= local_var_98 && (*(int *)((int64_t)puVar17 + 0x24) <= (int)local_var_94)) &&
          (((*(int *)((int64_t)puVar17 + 0x24) < (int)local_var_94 ||
            (*(int *)(puVar17 + 5) <= (int)local_var_90)) &&
           (*(int *)((int64_t)puVar17 + 0x2c) < iStack_8c)))))) {
        bVar6 = true;
        puVar9 = (uint64_t *)*puVar17;
      }
      else {
        bVar6 = false;
        puVar9 = (uint64_t *)puVar17[1];
      }
      if (bVar6) {
        puVar17 = puVar11;
      }
    }
    if ((((puVar11 == param_1) || (uVar2 = *(uint *)(puVar11 + 4), local_var_98 < uVar2)) ||
        ((local_var_98 <= uVar2 && ((int)local_var_94 < *(int *)((int64_t)puVar11 + 0x24))))) ||
       (((local_var_98 <= uVar2 &&
         (((local_var_98 < uVar2 || ((int)local_var_94 <= *(int *)((int64_t)puVar11 + 0x24))) &&
          ((int)local_var_90 < *(int *)(puVar11 + 5))))) ||
        ((((puVar9 = pstack_special_x_20, local_var_98 <= uVar2 &&
           ((int)local_var_94 <= *(int *)((int64_t)puVar11 + 0x24))) &&
          (((int)local_var_94 < *(int *)((int64_t)puVar11 + 0x24) ||
           ((int)local_var_90 <= *(int *)(puVar11 + 5))))) &&
         (iStack_8c < *(int *)((int64_t)puVar11 + 0x2c))))))) {
      lVar10 = function_3e7da0(param_1,puVar11,astack_special_x_8,&local_var_98);
      if (lVar10 == 0) {
        puVar11 = (uint64_t *)function_3e8310(param_1,acStackX_10,&local_var_98);
        puVar9 = puVar11;
        if (acStackX_10[0] != '\0') {
          if ((((puVar11 == param_1) || (uVar2 = *(uint *)(puVar11 + 4), local_var_98 < uVar2)) ||
              ((local_var_98 <= uVar2 && ((int)local_var_94 < *(int *)((int64_t)puVar11 + 0x24))))) ||
             (((local_var_98 <= uVar2 &&
               (((local_var_98 < uVar2 || ((int)local_var_94 <= *(int *)((int64_t)puVar11 + 0x24))) &&
                ((int)local_var_90 < *(int *)(puVar11 + 5))))) ||
              ((((local_var_98 <= uVar2 && ((int)local_var_94 <= *(int *)((int64_t)puVar11 + 0x24))) &&
                (((int)local_var_94 < *(int *)((int64_t)puVar11 + 0x24) ||
                 ((int)local_var_90 <= *(int *)(puVar11 + 5))))) &&
               (iStack_8c < *(int *)((int64_t)puVar11 + 0x2c))))))) {
            uVar22 = 0;
          }
          else {
            uVar22 = 1;
          }
          lVar15 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x50,*(int8_t *)(param_1 + 5));
          pstack_special_x_20 = (uint64_t *)(lVar15 + 0x20);
          *pstack_special_x_20 = CONCAT44(local_var_94,local_var_98);
          *(uint64_t *)(lVar15 + 0x28) = CONCAT44(iStack_8c,local_var_90);
          *(uint64_t *)(lVar15 + 0x30) = 0;
          *(uint64_t *)(lVar15 + 0x38) = 0;
          *(uint64_t *)(lVar15 + 0x40) = 0;
          *(int32_t *)(lVar15 + 0x48) = 3;
// WARNING: Subroutine does not return
          SystemNetworkHandler(lVar15,puVar11,param_1,uVar22);
        }
      }
      else {
        function_3e7c80(param_1,&pstack_special_x_20,lVar10,astack_special_x_8[0],&local_var_98);
        puVar11 = pstack_special_x_20;
        puVar9 = pstack_special_x_20;
      }
    }
    pstack_special_x_20 = puVar9;
    puVar9 = (uint64_t *)puVar11[7];
    if (puVar9 < (uint64_t *)puVar11[8]) {
      puVar11[7] = puVar9 + 2;
      *puVar9 = uVar22;
      puVar9[1] = uVar5;
    }
    else {
      puVar17 = (uint64_t *)puVar11[6];
      lVar10 = (int64_t)puVar9 - (int64_t)puVar17 >> 4;
      if (lVar10 == 0) {
        lVar10 = 1;
LAB_1803e20d2:
        puVar12 = (uint64_t *)
                  CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 << 4,*(int8_t *)(puVar11 + 9));
        puVar9 = (uint64_t *)puVar11[7];
        puVar17 = (uint64_t *)puVar11[6];
        puVar23 = puVar12;
      }
      else {
        lVar10 = lVar10 * 2;
        if (lVar10 != 0) goto LAB_1803e20d2;
        puVar12 = (uint64_t *)0x0;
        puVar23 = puVar12;
      }
      for (; puVar17 != puVar9; puVar17 = puVar17 + 2) {
        uVar4 = puVar17[1];
        *puVar12 = *puVar17;
        puVar12[1] = uVar4;
        puVar12 = puVar12 + 2;
      }
      *puVar12 = uVar22;
      puVar12[1] = uVar5;
      if (puVar11[6] != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      puVar11[6] = puVar23;
      puVar11[7] = puVar12 + 2;
      puVar11[8] = puVar23 + lVar10 * 2;
    }
    iVar20 = 0;
    uVar16 = (int64_t)(param_1[0x1f] - param_1[0x1e]) >> 4;
    if (uVar16 != 0) {
      uVar14 = 0;
      do {
        puVar13 = (uint *)(uVar14 * 0x10 + param_1[0x1e]);
        if (((*puVar13 == local_var_88) && (puVar13[1] == local_var_84)) &&
           ((puVar13[2] == local_var_80 && (puVar13[3] == local_var_7c)))) goto LAB_1803e219c;
        iVar20 = iVar20 + 1;
        uVar14 = (uint64_t)iVar20;
      } while (uVar14 < uVar16);
    }
    iVar20 = -1;
LAB_1803e219c:
    iVar21 = (int)uVar16 + -1;
    iVar18 = iVar19 - iStackX_18;
    puVar9 = (uint64_t *)param_1[7];
    if (puVar9 != param_1 + 6) {
      do {
        if ((*(int *)(puVar9 + 5) == iVar20) && (*(int *)((int64_t)puVar9 + 0x2c) == iVar19)) {
          *(int *)(puVar9 + 5) = iVar21;
          *(int *)((int64_t)puVar9 + 0x2c) = iVar18;
        }
        puVar9 = (uint64_t *)SystemFunction_00018066bd70(puVar9);
      } while (puVar9 != param_1 + 6);
    }
    puVar9 = (uint64_t *)param_1[0xd];
    if (puVar9 != param_1 + 0xc) {
      do {
        if ((*(int *)((int64_t)puVar9 + 0x2c) == iVar20) && (*(int *)(puVar9 + 6) == iVar19)) {
          *(int *)((int64_t)puVar9 + 0x2c) = iVar21;
          *(int *)(puVar9 + 6) = iVar18;
        }
        puVar9 = (uint64_t *)SystemFunction_00018066bd70(puVar9);
      } while (puVar9 != param_1 + 0xc);
    }
    if (stack_array_78._0_8_ != 0) {
      puVar9 = param_1 + 0x12;
      puVar17 = puVar9;
      puVar11 = (uint64_t *)param_1[0x14];
      if ((uint64_t *)param_1[0x14] == (uint64_t *)0x0) {
LAB_1803e2244:
        puVar17 = puVar9;
      }
      else {
        do {
          if ((uint64_t)puVar11[4] < (uint64_t)stack_array_78._0_8_) {
            puVar12 = (uint64_t *)*puVar11;
          }
          else {
            puVar12 = (uint64_t *)puVar11[1];
            puVar17 = puVar11;
          }
          puVar11 = puVar12;
        } while (puVar12 != (uint64_t *)0x0);
        if ((puVar17 == puVar9) || ((uint64_t)stack_array_78._0_8_ < (uint64_t)puVar17[4]))
        goto LAB_1803e2244;
      }
      if (puVar17 != puVar9) {
        *(int *)(puVar17 + 5) = iVar21;
        *(int *)((int64_t)puVar17 + 0x2c) = iVar18;
      }
    }
    if (stack_array_78._8_8_ != 0) {
      puVar9 = param_1 + 0x18;
      puVar17 = puVar9;
      puVar11 = (uint64_t *)param_1[0x1a];
      if ((uint64_t *)param_1[0x1a] == (uint64_t *)0x0) {
LAB_1803e2292:
        puVar17 = puVar9;
      }
      else {
        do {
          if ((uint64_t)puVar11[4] < (uint64_t)stack_array_78._8_8_) {
            puVar12 = (uint64_t *)*puVar11;
          }
          else {
            puVar12 = (uint64_t *)puVar11[1];
            puVar17 = puVar11;
          }
          puVar11 = puVar12;
        } while (puVar12 != (uint64_t *)0x0);
        if ((puVar17 == puVar9) || ((uint64_t)stack_array_78._8_8_ < (uint64_t)puVar17[4]))
        goto LAB_1803e2292;
      }
      if (puVar17 != puVar9) {
        *(int *)(puVar17 + 5) = iVar21;
        *(int *)((int64_t)puVar17 + 0x2c) = iVar18;
      }
    }
    lVar15 = lVar15 + 1;
    iVar20 = iStackX_18;
  }
  iVar7 = iVar7 + -1;
  if (iVar20 <= iVar7) {
    puVar9 = (uint64_t *)puVar8[7];
    lVar15 = (int64_t)iVar7 << 4;
    uVar16 = (uint64_t)((iVar7 - iVar20) + 1);
    do {
      puVar17 = (uint64_t *)(puVar8[6] + 0x10 + lVar15);
      if ((puVar17 < puVar9) && (lVar10 = (int64_t)puVar9 - (int64_t)puVar17 >> 4, 0 < lVar10)) {
        do {
          puVar17[-2] = *puVar17;
          puVar17[-1] = puVar17[1];
          lVar10 = lVar10 + -1;
          puVar17 = puVar17 + 2;
        } while (0 < lVar10);
        puVar9 = (uint64_t *)puVar8[7];
      }
      puVar9 = puVar9 + -2;
      puVar8[7] = puVar9;
      lVar15 = lVar15 + -0x10;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  goto LAB_1803e1ce0;
}
// 函数: void function_3e2360(int64_t param_1,int64_t param_2)
void function_3e2360(int64_t param_1,int64_t param_2)
{
  uint64_t *puVar1;
  char cVar2;
  int64_t lVar3;
  char *pcVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  int16_t *puVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int64_t lVar13;
  void *plocal_var_d8;
  int64_t lStack_d0;
  int iStack_c8;
  uint64_t local_var_c0;
  void *plocal_var_b8;
  int64_t lStack_b0;
  int iStack_a8;
  uint64_t local_var_a0;
  void *plocal_var_98;
  int64_t lStack_90;
  int iStack_88;
  uint64_t local_var_80;
  void *plocal_var_78;
  int64_t lStack_70;
  int iStack_68;
  uint64_t local_var_60;
  void *plocal_var_58;
  uint64_t local_var_50;
  int32_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  local_var_38 = 0xfffffffffffffffe;
  *(int64_t *)(param_1 + 400) = param_2;
  function_3e7220(param_1,*(int32_t *)(*(int64_t *)(param_2 + 0x68) + 0x3054));
  function_3e28f0(param_1);
  iVar12 = 0;
  puVar1 = (uint64_t *)(param_1 + 0x150);
  puVar10 = (uint *)&processed_var_6672_ptr;
  iVar11 = iVar12;
  do {
    for (puVar6 = *(uint64_t **)(param_1 + 0x158); puVar6 != puVar1;
        puVar6 = (uint64_t *)SystemFunction_00018066bd70(puVar6)) {
      if (((*puVar10 & 0xfffffffc) == 0) && (*puVar10 != 1)) {
        function_3e57c0(param_1,*(int32_t *)(puVar6 + 4),iVar11);
      }
    }
    iVar11 = iVar11 + 1;
    puVar10 = puVar10 + 1;
  } while (iVar11 < 6);
  if (0 < *(int *)(param_2 + 0x78)) {
    lVar13 = 0x80;
    do {
      lVar3 = *(int64_t *)(lVar13 + *(int64_t *)(param_1 + 400));
      if ((*(char *)(lVar3 + 0x152) != '\0') && (*(char *)(lVar3 + 0x150) == '\0')) {
        puVar6 = *(uint64_t **)(param_1 + 0x160);
        puVar8 = puVar1;
        if (puVar6 != (uint64_t *)0x0) {
          do {
            if (*(int *)(puVar6 + 4) < iVar12) {
              puVar6 = (uint64_t *)*puVar6;
            }
            else {
              puVar8 = puVar6;
              puVar6 = (uint64_t *)puVar6[1];
            }
          } while (puVar6 != (uint64_t *)0x0);
          if ((puVar8 != puVar1) && (*(int *)(puVar8 + 4) <= iVar12)) {
            iVar11 = 0;
            puVar10 = (uint *)&processed_var_6672_ptr;
            do {
              if (((*puVar10 & 0xfffffffc) != 0) || (*puVar10 == 1)) {
                function_3e57c0(param_1,iVar12,iVar11);
              }
              iVar11 = iVar11 + 1;
              puVar10 = puVar10 + 1;
            } while (iVar11 < 6);
            goto LAB_1803e24c4;
          }
        }
        iVar11 = 0;
        do {
          function_3e57c0(param_1,iVar12,iVar11);
          iVar11 = iVar11 + 1;
        } while (iVar11 < 6);
      }
LAB_1803e24c4:
      iVar12 = iVar12 + 1;
      lVar13 = lVar13 + 8;
    } while (iVar12 < *(int *)(param_2 + 0x78));
  }
  lVar13 = 0;
  function_3e5a10(param_1);
  if (*(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 400) + 0x68) + 0x358) == 0) {
    function_3e1ca0(param_1);
  }
  plocal_var_98 = &system_data_buffer_ptr;
  local_var_80 = 0;
  lStack_90 = 0;
  iStack_88 = 0;
  function_3e6170(param_1,&plocal_var_98);
  plocal_var_78 = &system_data_buffer_ptr;
  local_var_60 = 0;
  lStack_70 = 0;
  iStack_68 = 0;
  function_3e3630(param_1,param_2,&plocal_var_78);
  plocal_var_b8 = &system_data_buffer_ptr;
  local_var_a0 = 0;
  lStack_b0 = 0;
  iStack_a8 = 0;
  function_3e2a40(param_1,&plocal_var_b8);
  plocal_var_d8 = &system_data_buffer_ptr;
  local_var_c0 = 0;
  lStack_d0 = 0;
  iStack_c8 = 0;
  function_3e6ff0(param_1,&plocal_var_d8);
  (**(code **)(**(int64_t **)(param_1 + 0x188) + 0x10))
            (*(int64_t **)(param_1 + 0x188),&system_buffer_ptr);
  lVar3 = *(int64_t *)(param_1 + 0x188);
  if (0 < iStack_88) {
    CoreEngineDataBufferProcessor(lVar3,*(int *)(lVar3 + 0x10) + iStack_88);
// WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(lVar3 + 0x10) + *(int64_t *)(lVar3 + 8),lStack_90,
           (int64_t)(iStack_88 + 1));
  }
  iVar12 = *(int *)(lVar3 + 0x10) + 2;
  CoreEngineDataBufferProcessor(lVar3,iVar12);
  iVar11 = iStack_68;
  lVar5 = lStack_70;
  puVar9 = (int16_t *)((uint64_t)*(uint *)(lVar3 + 0x10) + *(int64_t *)(lVar3 + 8));
  *puVar9 = 0xa5c;
  *(int8_t *)(puVar9 + 1) = 0;
  *(int *)(lVar3 + 0x10) = iVar12;
  lVar3 = *(int64_t *)(param_1 + 0x188);
  if (0 < iStack_68) {
    CoreEngineDataBufferProcessor(lVar3,*(int *)(lVar3 + 0x10) + iStack_68);
// WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(lVar3 + 0x10) + *(int64_t *)(lVar3 + 8),lVar5,
           (int64_t)(iVar11 + 1));
  }
  iVar11 = *(int *)(lVar3 + 0x10) + 2;
  CoreEngineDataBufferProcessor(lVar3,iVar11);
  puVar9 = (int16_t *)((uint64_t)*(uint *)(lVar3 + 0x10) + *(int64_t *)(lVar3 + 8));
  *puVar9 = 0xa5c;
  *(int8_t *)(puVar9 + 1) = 0;
  *(int *)(lVar3 + 0x10) = iVar11;
  lVar3 = *(int64_t *)(param_1 + 0x188);
  if (0 < iStack_a8) {
    CoreEngineDataBufferProcessor(lVar3,*(int *)(lVar3 + 0x10) + iStack_a8);
// WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(lVar3 + 0x10) + *(int64_t *)(lVar3 + 8),lStack_b0,
           (int64_t)(iStack_a8 + 1));
  }
  iVar11 = *(int *)(lVar3 + 0x10) + 2;
  CoreEngineDataBufferProcessor(lVar3,iVar11);
  puVar9 = (int16_t *)((uint64_t)*(uint *)(lVar3 + 0x10) + *(int64_t *)(lVar3 + 8));
  *puVar9 = 0xa5c;
  *(int8_t *)(puVar9 + 1) = 0;
  *(int *)(lVar3 + 0x10) = iVar11;
  lVar3 = *(int64_t *)(param_1 + 0x188);
  if (0 < iStack_c8) {
    CoreEngineDataBufferProcessor(lVar3,*(int *)(lVar3 + 0x10) + iStack_c8);
// WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(lVar3 + 0x10) + *(int64_t *)(lVar3 + 8),lStack_d0,
           (int64_t)(iStack_c8 + 1));
  }
  iVar11 = *(int *)(lVar3 + 0x10) + 2;
  CoreEngineDataBufferProcessor(lVar3,iVar11);
  puVar9 = (int16_t *)((uint64_t)*(uint *)(lVar3 + 0x10) + *(int64_t *)(lVar3 + 8));
  *puVar9 = 0xa5c;
  *(int8_t *)(puVar9 + 1) = 0;
  *(int *)(lVar3 + 0x10) = iVar11;
  if (*(char *)(param_1 + 0x1e8) != '\0') {
    lVar3 = *(int64_t *)(param_1 + 0x188);
    pcVar4 = *(char **)(lVar3 + 8);
    cVar2 = *pcVar4;
    while (cVar2 != '\0') {
      lVar7 = strchr(&system_data_cfb8,(int)pcVar4[lVar13]);
      if (lVar7 != 0) {
        *(int8_t *)(lVar13 + *(int64_t *)(lVar3 + 8)) = 0x20;
      }
      lVar13 = lVar13 + 1;
      pcVar4 = *(char **)(lVar3 + 8);
      cVar2 = pcVar4[lVar13];
    }
  }
  function_3e3020(param_1);
  if (0x40 < (uint64_t)(*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 4)) {
    SystemDataInitializer(&processed_var_7360_ptr);
  }
  plocal_var_58 = &system_data_buffer_ptr;
  local_var_40 = 0;
  local_var_50 = 0;
  local_var_48 = 0;
  if (system_data_2847 == '\0') {
    function_3e4ba0(param_1,param_2);
  }
  local_var_50 = 0;
  local_var_40 = local_var_40 & 0xffffffff00000000;
  plocal_var_58 = &system_state_ptr;
  plocal_var_d8 = &system_data_buffer_ptr;
  if (lStack_d0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_d0 = 0;
  local_var_c0 = local_var_c0 & 0xffffffff00000000;
  plocal_var_d8 = &system_state_ptr;
  plocal_var_b8 = &system_data_buffer_ptr;
  if (lStack_b0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_b0 = 0;
  local_var_a0 = local_var_a0 & 0xffffffff00000000;
  plocal_var_b8 = &system_state_ptr;
  plocal_var_78 = &system_data_buffer_ptr;
  if (lVar5 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar5);
  }
  lStack_70 = 0;
  local_var_60 = local_var_60 & 0xffffffff00000000;
  plocal_var_78 = &system_state_ptr;
  plocal_var_98 = &system_data_buffer_ptr;
  if (lStack_90 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// 函数: void function_3e28f0(int64_t param_1)
void function_3e28f0(int64_t param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int8_t *puVar4;
  int64_t *plVar5;
  function_3b9430(param_1,*(uint64_t *)(param_1 + 0x10));
  *(int64_t *)param_1 = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int8_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(int64_t *)(param_1 + 8) = param_1;
  CoreEngine_0572D0(param_1 + 0x30);
  puVar3 = *(uint64_t **)(param_1 + 0x70);
  lVar1 = param_1 + 0x60;
  if (puVar3 != (uint64_t *)0x0) {
    SystemCache_Manager(lVar1,*puVar3);
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar3);
  }
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(param_1 + 0x68) = lVar1;
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(int8_t *)(param_1 + 0x78) = 0;
  *(uint64_t *)(param_1 + 0x80) = 0;
  *(uint64_t *)(param_1 + 0xf8) = *(uint64_t *)(param_1 + 0xf0);
  SystemCore_ConfigValidator(param_1 + 0x110);
  CoreEngine_0572D0(param_1 + 0x90);
  lVar1 = param_1 + 0xc0;
  puVar3 = *(uint64_t **)(param_1 + 0xd0);
  if (puVar3 != (uint64_t *)0x0) {
    SystemCache_Manager(lVar1,*puVar3);
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar3);
  }
  *(uint64_t *)(param_1 + 0xd0) = 0;
  *(int8_t *)(param_1 + 0xd8) = 0;
  *(uint64_t *)(param_1 + 0xe0) = 0;
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(param_1 + 200) = lVar1;
  *(uint64_t *)(param_1 + 0x138) = *(uint64_t *)(param_1 + 0x130);
  puVar4 = *(int8_t **)(*(int64_t *)(param_1 + 0x188) + 8);
  *(int32_t *)(*(int64_t *)(param_1 + 0x188) + 0x10) = 0;
  if (puVar4 != (int8_t *)0x0) {
    *puVar4 = 0;
  }
  lVar1 = *(int64_t *)(param_1 + 400);
  if (lVar1 != 0) {
    plVar2 = *(int64_t **)(lVar1 + 0x108);
    plVar5 = *(int64_t **)(lVar1 + 0x100);
    if (plVar5 != plVar2) {
      do {
        if ((int64_t *)*plVar5 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar5 + 0x38))();
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar2);
      *(int64_t *)(lVar1 + 0x108) = *(int64_t *)(lVar1 + 0x100);
      return;
    }
    *(int64_t **)(lVar1 + 0x108) = plVar5;
    return;
  }
  return;
}
// 函数: void function_3e28f8(int64_t param_1)
void function_3e28f8(int64_t param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int8_t *puVar4;
  int64_t *plVar5;
  function_3b9430();
  *(int64_t *)param_1 = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int8_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(int64_t *)(param_1 + 8) = param_1;
  CoreEngine_0572D0(param_1 + 0x30);
  puVar3 = *(uint64_t **)(param_1 + 0x70);
  lVar1 = param_1 + 0x60;
  if (puVar3 != (uint64_t *)0x0) {
    SystemCache_Manager(lVar1,*puVar3);
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar3);
  }
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(param_1 + 0x68) = lVar1;
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(int8_t *)(param_1 + 0x78) = 0;
  *(uint64_t *)(param_1 + 0x80) = 0;
  *(uint64_t *)(param_1 + 0xf8) = *(uint64_t *)(param_1 + 0xf0);
  SystemCore_ConfigValidator(param_1 + 0x110);
  CoreEngine_0572D0(param_1 + 0x90);
  lVar1 = param_1 + 0xc0;
  puVar3 = *(uint64_t **)(param_1 + 0xd0);
  if (puVar3 != (uint64_t *)0x0) {
    SystemCache_Manager(lVar1,*puVar3);
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar3);
  }
  *(uint64_t *)(param_1 + 0xd0) = 0;
  *(int8_t *)(param_1 + 0xd8) = 0;
  *(uint64_t *)(param_1 + 0xe0) = 0;
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(param_1 + 200) = lVar1;
  *(uint64_t *)(param_1 + 0x138) = *(uint64_t *)(param_1 + 0x130);
  puVar4 = *(int8_t **)(*(int64_t *)(param_1 + 0x188) + 8);
  *(int32_t *)(*(int64_t *)(param_1 + 0x188) + 0x10) = 0;
  if (puVar4 != (int8_t *)0x0) {
    *puVar4 = 0;
  }
  lVar1 = *(int64_t *)(param_1 + 400);
  if (lVar1 != 0) {
    plVar2 = *(int64_t **)(lVar1 + 0x108);
    plVar5 = *(int64_t **)(lVar1 + 0x100);
    if (plVar5 != plVar2) {
      do {
        if ((int64_t *)*plVar5 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar5 + 0x38))();
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar2);
      *(int64_t *)(lVar1 + 0x108) = *(int64_t *)(lVar1 + 0x100);
      return;
    }
    *(int64_t **)(lVar1 + 0x108) = plVar5;
    return;
  }
  return;
}
// 函数: void function_3e2a17(int8_t *param_1)
void function_3e2a17(int8_t *param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t unaff_RDI;
  *param_1 = 0;
  lVar2 = *(int64_t *)(unaff_RDI + 400);
  if (lVar2 == 0) {
    return;
  }
  plVar1 = *(int64_t **)(lVar2 + 0x108);
  plVar3 = *(int64_t **)(lVar2 + 0x100);
  if (plVar3 != plVar1) {
    do {
      if ((int64_t *)*plVar3 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar3 + 0x38))();
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    *(int64_t *)(lVar2 + 0x108) = *(int64_t *)(lVar2 + 0x100);
    return;
  }
  *(int64_t **)(lVar2 + 0x108) = plVar3;
  return;
}
// 函数: void function_3e2a2b(int64_t param_1)
void function_3e2a2b(int64_t param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  plVar1 = *(int64_t **)(param_1 + 0x108);
  plVar2 = *(int64_t **)(param_1 + 0x100);
  if (plVar2 != plVar1) {
    do {
      if ((int64_t *)*plVar2 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar2 + 0x38))();
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    *(int64_t *)(param_1 + 0x108) = *(int64_t *)(param_1 + 0x100);
    return;
  }
  *(int64_t **)(param_1 + 0x108) = plVar2;
  return;
}