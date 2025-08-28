#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part095.c - 6 个函数
// 函数: void RenderingSystem_22e90(uint64_t param_1,int32_t *param_2,int64_t param_3)
void RenderingSystem_22e90(uint64_t param_1,int32_t *param_2,int64_t param_3)
{
  uint64_t *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  uint64_t uVar5;
  void *puVar6;
  int32_t uVar7;
  int64_t *plVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  void *puVar11;
  int64_t *plVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  int64_t *plVar15;
  uint uVar16;
  uint64_t *puVar17;
  uint64_t uVar18;
  int64_t lVar19;
  int32_t *puVar20;
  uint *puVar21;
  int64_t lVar22;
  int8_t stack_array_c8 [32];
  uint local_var_a8;
  int64_t lStack_a0;
  uint64_t local_var_98;
  int32_t *plocal_var_90;
  uint local_var_88;
  int64_t lStack_80;
  int64_t lStack_78;
  int64_t *plStack_70;
  uint local_var_68;
  uint local_var_64;
  uint local_var_60;
  uint local_var_5c;
  uint local_var_58;
  uint local_var_54;
  uint local_var_50;
  uint local_var_4c;
  uint64_t local_var_48;
  if (param_3 == 0) {
    return;
  }
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  uVar5 = *(uint64_t *)(param_3 + 0x10);
  param_2[2] = 1;
  local_var_98 = param_1;
  plocal_var_90 = param_2;
  lStack_78 = param_3;
  uVar7 = RenderingSystem_2b4a0(param_1,param_3);
  *param_2 = uVar7;
  uVar7 = RenderingSystem_2b4a0(param_1,uVar5);
  param_2[1] = uVar7;
  puVar6 = *(void **)(*(int64_t *)(param_3 + 0x208) + 0x18);
  puVar11 = &system_buffer_ptr;
  if (puVar6 != (void *)0x0) {
    puVar11 = puVar6;
  }
  (**(code **)(*(int64_t *)(param_2 + 4) + 0x10))(param_2 + 4,puVar11);
  puVar1 = (uint64_t *)(param_2 + 0x22);
  uVar14 = *(int64_t *)(param_3 + 0x1b0) - *(int64_t *)(param_3 + 0x1a8) >> 3;
  uVar18 = uVar14 & 0xffffffff;
  CoreEngine_0E8140(puVar1,uVar14 & 0xffffffff);
  uVar5 = local_var_98;
  puVar20 = param_2;
  if ((int)uVar14 != 0) {
    lVar22 = 0;
    do {
      lStack_80 = 0;
      RenderingSystem_23340(uVar5,&lStack_80,*(uint64_t *)(lVar22 + *(int64_t *)(param_3 + 0x1a8)),
                    0xffffffff);
      lVar19 = lStack_80;
      if (lStack_80 != 0) {
        plVar15 = *(int64_t **)(param_2 + 0x24);
        if (plVar15 < *(int64_t **)(param_2 + 0x26)) {
          *(int64_t **)(param_2 + 0x24) = plVar15 + 1;
          *plVar15 = lStack_80;
        }
        else {
          plVar12 = (int64_t *)*puVar1;
          lVar9 = (int64_t)plVar15 - (int64_t)plVar12 >> 3;
          if (lVar9 == 0) {
            lVar9 = 1;
LAB_180322fe3:
            plVar8 = (int64_t *)
                     CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar9 * 8,*(int8_t *)(param_2 + 0x28));
            plVar12 = (int64_t *)*puVar1;
            plVar15 = *(int64_t **)(param_2 + 0x24);
          }
          else {
            lVar9 = lVar9 * 2;
            if (lVar9 != 0) goto LAB_180322fe3;
            plVar8 = (int64_t *)0x0;
          }
          if (plVar12 != plVar15) {
// WARNING: Subroutine does not return
            memmove(plVar8,plVar12,(int64_t)plVar15 - (int64_t)plVar12);
          }
          *plVar8 = lVar19;
          if (*puVar1 != 0) {
// WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          *puVar1 = (uint64_t)plVar8;
          *(int64_t **)(param_2 + 0x26) = plVar8 + lVar9;
          *(int64_t **)(param_2 + 0x24) = plVar8 + 1;
          param_3 = lStack_78;
        }
      }
      lVar22 = lVar22 + 8;
      uVar18 = uVar18 - 1;
      puVar20 = plocal_var_90;
      param_1 = local_var_98;
    } while (uVar18 != 0);
  }
  puVar20[0x2a] = *(int32_t *)(param_3 + 0x170);
  puVar20[0x2b] = *(int32_t *)(param_3 + 0x168);
  plVar15 = (int64_t *)(puVar20 + 0x1a);
  cVar4 = *(char *)(param_3 + 0x20);
  plStack_70 = plVar15;
  RenderingSystem_3ab50(plVar15,(int64_t)cVar4);
  local_var_88 = (uint)cVar4;
  local_var_a8 = 0;
  if (cVar4 != '\0') {
    lStack_a0 = 0;
    do {
      lVar22 = lStack_a0;
      uVar16 = local_var_a8;
      puVar21 = (uint *)((int64_t)(char)local_var_a8 * 0x100 + *(int64_t *)(lStack_78 + 0x18));
      *(int32_t *)(lStack_a0 + *plVar15) = 1;
      do {
        LOCK();
        uVar3 = *puVar21;
        *puVar21 = *puVar21 | 1;
        UNLOCK();
      } while ((uVar3 & 1) != 0);
      local_var_68 = puVar21[1];
      local_var_64 = puVar21[2];
      local_var_60 = puVar21[3];
      local_var_5c = puVar21[4];
      local_var_58 = puVar21[5];
      local_var_54 = puVar21[6];
      local_var_50 = puVar21[7];
      local_var_4c = puVar21[8];
      *puVar21 = 0;
      lVar19 = *plVar15;
      puVar2 = (uint *)(lStack_a0 + 0x10 + lVar19);
      *puVar2 = local_var_68;
      puVar2[1] = local_var_64;
      puVar2[2] = local_var_60;
      puVar2[3] = local_var_5c;
      puVar2 = (uint *)(lStack_a0 + 0x20 + lVar19);
      *puVar2 = local_var_58;
      puVar2[1] = local_var_54;
      puVar2[2] = local_var_50;
      puVar2[3] = local_var_4c;
      lVar19 = *(int64_t *)
                ((int64_t)(char)local_var_a8 * 0x1b0 + 0x180 +
                *(int64_t *)(*(int64_t *)(lStack_78 + 0x208) + 0x140));
      lVar9 = *plVar15;
      *(int32_t *)(lVar9 + 0x40 + lStack_a0) = *(int32_t *)(lVar19 + 0x10);
      puVar6 = *(void **)(lVar19 + 8);
      puVar11 = &system_buffer_ptr;
      if (puVar6 != (void *)0x0) {
        puVar11 = puVar6;
      }
      strcpy_s(*(uint64_t *)(lVar9 + 0x38 + lStack_a0),0x40,puVar11);
      uVar14 = *(int64_t *)(puVar21 + 0x2e) - *(int64_t *)(puVar21 + 0x2c) >> 3;
      uVar18 = uVar14 & 0xffffffff;
      CoreEngine_0E8140(*plVar15 + 0x88 + lVar22,uVar14 & 0xffffffff);
      if ((int)uVar14 != 0) {
        lVar19 = 0;
        do {
          plocal_var_90 = (int32_t *)0x0;
          RenderingSystem_23340(param_1,&plocal_var_90,*(uint64_t *)(*(int64_t *)(puVar21 + 0x2c) + lVar19),
                        uVar16);
          puVar20 = plocal_var_90;
          if (plocal_var_90 != (int32_t *)0x0) {
            lVar22 = *plVar15;
            puVar17 = *(uint64_t **)(lStack_a0 + 0x90 + lVar22);
            if (puVar17 < *(uint64_t **)(lStack_a0 + 0x98 + lVar22)) {
              *(uint64_t **)(lStack_a0 + 0x90 + lVar22) = puVar17 + 1;
              *puVar17 = plocal_var_90;
              uVar16 = local_var_a8;
            }
            else {
              puVar13 = *(uint64_t **)(lStack_a0 + 0x88 + lVar22);
              lVar9 = (int64_t)puVar17 - (int64_t)puVar13 >> 3;
              if (lVar9 == 0) {
                lVar9 = 1;
LAB_18032321b:
                puVar10 = (uint64_t *)
                          CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar9 * 8,
                                        *(int8_t *)(lStack_a0 + 0xa0 + lVar22));
                puVar17 = *(uint64_t **)(lStack_a0 + 0x90 + lVar22);
                puVar13 = *(uint64_t **)(lStack_a0 + 0x88 + lVar22);
              }
              else {
                lVar9 = lVar9 * 2;
                if (lVar9 != 0) goto LAB_18032321b;
                puVar10 = (uint64_t *)0x0;
              }
              if (puVar13 != puVar17) {
// WARNING: Subroutine does not return
                memmove(puVar10,puVar13,(int64_t)puVar17 - (int64_t)puVar13);
              }
              *puVar10 = puVar20;
              if (*(int64_t *)(lStack_a0 + 0x88 + lVar22) != 0) {
// WARNING: Subroutine does not return
                CoreMemoryPoolInitializer();
              }
              *(uint64_t **)(lStack_a0 + 0x88 + lVar22) = puVar10;
              *(uint64_t **)(lStack_a0 + 0x90 + lVar22) = puVar10 + 1;
              *(uint64_t **)(lStack_a0 + 0x98 + lVar22) = puVar10 + lVar9;
              plVar15 = plStack_70;
              uVar16 = local_var_a8;
            }
          }
          lVar19 = lVar19 + 8;
          uVar18 = uVar18 - 1;
          lVar22 = lStack_a0;
          param_1 = local_var_98;
        } while (uVar18 != 0);
      }
      local_var_a8 = uVar16 + 1;
      lStack_a0 = lVar22 + 0xb0;
      param_1 = local_var_98;
    } while (local_var_a8 < local_var_88);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_22eba(uint64_t param_1,int32_t *param_2,int64_t param_3)
void RenderingSystem_22eba(uint64_t param_1,int32_t *param_2,int64_t param_3)
{
  uint64_t *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  uint64_t uVar5;
  void *puVar6;
  int64_t lVar7;
  int32_t uVar8;
  int64_t *plVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  void *puVar12;
  int64_t *plVar13;
  uint64_t *puVar14;
  uint64_t unaff_RBX;
  uint64_t uVar15;
  int64_t *plVar16;
  uint64_t unaff_RBP;
  uint64_t unaff_RDI;
  uint64_t *puVar17;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t uVar18;
  int32_t *puVar19;
  uint64_t unaff_R14;
  uint *puVar20;
  int64_t lVar21;
  uint stack_special_x_20;
  int64_t lStack0000000000000028;
  uint64_t local_buffer_30;
  int32_t *plocal_buffer_38;
  uint local_var_40;
  int64_t local_var_48;
  int64_t lStack0000000000000050;
  int64_t *local_var_58;
  uint local_buffer_60;
  uint local_buffer_64;
  uint local_buffer_68;
  uint local_buffer_6c;
  uint local_buffer_70;
  uint local_buffer_74;
  uint local_buffer_78;
  uint local_buffer_7c;
  uint64_t local_var_80;
  *(uint64_t *)(in_R11 + 0x20) = unaff_RBX;
  uVar5 = *(uint64_t *)(param_3 + 0x10);
  *(uint64_t *)(in_R11 + -0x20) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RDI;
  param_2[2] = 1;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R14;
  local_buffer_30 = param_1;
  plocal_buffer_38 = param_2;
  lStack0000000000000050 = param_3;
  uVar8 = RenderingSystem_2b4a0(param_1,param_3);
  *param_2 = uVar8;
  uVar8 = RenderingSystem_2b4a0(param_1,uVar5);
  param_2[1] = uVar8;
  puVar6 = *(void **)(*(int64_t *)(param_3 + 0x208) + 0x18);
  puVar12 = &system_buffer_ptr;
  if (puVar6 != (void *)0x0) {
    puVar12 = puVar6;
  }
  (**(code **)(*(int64_t *)(param_2 + 4) + 0x10))(param_2 + 4,puVar12);
  puVar1 = (uint64_t *)(param_2 + 0x22);
  uVar15 = *(int64_t *)(param_3 + 0x1b0) - *(int64_t *)(param_3 + 0x1a8) >> 3;
  uVar18 = uVar15 & 0xffffffff;
  CoreEngine_0E8140(puVar1,uVar15 & 0xffffffff);
  uVar5 = local_buffer_30;
  puVar19 = param_2;
  if ((int)uVar15 != 0) {
    lVar21 = 0;
    do {
      local_var_48 = 0;
      RenderingSystem_23340(uVar5,&local_buffer_00000048,*(uint64_t *)(lVar21 + *(int64_t *)(param_3 + 0x1a8)),
                    0xffffffff);
      lVar7 = local_var_48;
      if (local_var_48 != 0) {
        plVar16 = *(int64_t **)(param_2 + 0x24);
        if (plVar16 < *(int64_t **)(param_2 + 0x26)) {
          *(int64_t **)(param_2 + 0x24) = plVar16 + 1;
          *plVar16 = local_var_48;
        }
        else {
          plVar13 = (int64_t *)*puVar1;
          lVar10 = (int64_t)plVar16 - (int64_t)plVar13 >> 3;
          if (lVar10 == 0) {
            lVar10 = 1;
LAB_180322fe3:
            plVar9 = (int64_t *)
                     CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 8,*(int8_t *)(param_2 + 0x28));
            plVar13 = (int64_t *)*puVar1;
            plVar16 = *(int64_t **)(param_2 + 0x24);
          }
          else {
            lVar10 = lVar10 * 2;
            if (lVar10 != 0) goto LAB_180322fe3;
            plVar9 = (int64_t *)0x0;
          }
          if (plVar13 != plVar16) {
// WARNING: Subroutine does not return
            memmove(plVar9,plVar13,(int64_t)plVar16 - (int64_t)plVar13);
          }
          *plVar9 = lVar7;
          if (*puVar1 != 0) {
// WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          *puVar1 = (uint64_t)plVar9;
          *(int64_t **)(param_2 + 0x26) = plVar9 + lVar10;
          *(int64_t **)(param_2 + 0x24) = plVar9 + 1;
          param_3 = lStack0000000000000050;
        }
      }
      lVar21 = lVar21 + 8;
      uVar18 = uVar18 - 1;
      puVar19 = plocal_buffer_38;
      param_1 = local_buffer_30;
    } while (uVar18 != 0);
  }
  puVar19[0x2a] = *(int32_t *)(param_3 + 0x170);
  puVar19[0x2b] = *(int32_t *)(param_3 + 0x168);
  plVar16 = (int64_t *)(puVar19 + 0x1a);
  cVar4 = *(char *)(param_3 + 0x20);
  local_var_58 = plVar16;
  RenderingSystem_3ab50(plVar16,(int64_t)cVar4);
  local_var_40 = (uint)cVar4;
  stack_special_x_20 = 0;
  if (cVar4 != '\0') {
    lStack0000000000000028 = 0;
    do {
      puVar20 = (uint *)((int64_t)(char)stack_special_x_20 * 0x100 +
                        *(int64_t *)(lStack0000000000000050 + 0x18));
      *(int32_t *)(lStack0000000000000028 + *plVar16) = 1;
      do {
        LOCK();
        uVar3 = *puVar20;
        *puVar20 = *puVar20 | 1;
        UNLOCK();
      } while ((uVar3 & 1) != 0);
      local_buffer_60 = puVar20[1];
      local_buffer_64 = puVar20[2];
      local_buffer_68 = puVar20[3];
      local_buffer_6c = puVar20[4];
      local_buffer_70 = puVar20[5];
      local_buffer_74 = puVar20[6];
      local_buffer_78 = puVar20[7];
      local_buffer_7c = puVar20[8];
      *puVar20 = 0;
      lVar21 = *plVar16;
      puVar2 = (uint *)(lStack0000000000000028 + 0x10 + lVar21);
      *puVar2 = local_buffer_60;
      puVar2[1] = local_buffer_64;
      puVar2[2] = local_buffer_68;
      puVar2[3] = local_buffer_6c;
      puVar2 = (uint *)(lStack0000000000000028 + 0x20 + lVar21);
      *puVar2 = local_buffer_70;
      puVar2[1] = local_buffer_74;
      puVar2[2] = local_buffer_78;
      puVar2[3] = local_buffer_7c;
      lVar21 = *(int64_t *)
                ((int64_t)(char)stack_special_x_20 * 0x1b0 + 0x180 +
                *(int64_t *)(*(int64_t *)(lStack0000000000000050 + 0x208) + 0x140));
      lVar7 = *plVar16;
      *(int32_t *)(lVar7 + 0x40 + lStack0000000000000028) = *(int32_t *)(lVar21 + 0x10);
      puVar6 = *(void **)(lVar21 + 8);
      puVar12 = &system_buffer_ptr;
      if (puVar6 != (void *)0x0) {
        puVar12 = puVar6;
      }
      strcpy_s(*(uint64_t *)(lVar7 + 0x38 + lStack0000000000000028),0x40,puVar12);
      uVar15 = *(int64_t *)(puVar20 + 0x2e) - *(int64_t *)(puVar20 + 0x2c) >> 3;
      uVar18 = uVar15 & 0xffffffff;
      CoreEngine_0E8140(*plVar16 + 0x88 + lStack0000000000000028,uVar15 & 0xffffffff);
      if ((int)uVar15 != 0) {
        lVar21 = 0;
        do {
          plocal_buffer_38 = (int32_t *)0x0;
          RenderingSystem_23340(param_1,&local_buffer_00000038,
                        *(uint64_t *)(*(int64_t *)(puVar20 + 0x2c) + lVar21),stack_special_x_20);
          puVar19 = plocal_buffer_38;
          if (plocal_buffer_38 != (int32_t *)0x0) {
            lVar7 = *plVar16;
            puVar17 = *(uint64_t **)(lStack0000000000000028 + 0x90 + lVar7);
            if (puVar17 < *(uint64_t **)(lStack0000000000000028 + 0x98 + lVar7)) {
              *(uint64_t **)(lStack0000000000000028 + 0x90 + lVar7) = puVar17 + 1;
              *puVar17 = plocal_buffer_38;
            }
            else {
              puVar14 = *(uint64_t **)(lStack0000000000000028 + 0x88 + lVar7);
              lVar10 = (int64_t)puVar17 - (int64_t)puVar14 >> 3;
              if (lVar10 == 0) {
                lVar10 = 1;
LAB_18032321b:
                puVar11 = (uint64_t *)
                          CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 8,
                                        *(int8_t *)(lStack0000000000000028 + 0xa0 + lVar7));
                puVar17 = *(uint64_t **)(lStack0000000000000028 + 0x90 + lVar7);
                puVar14 = *(uint64_t **)(lStack0000000000000028 + 0x88 + lVar7);
              }
              else {
                lVar10 = lVar10 * 2;
                if (lVar10 != 0) goto LAB_18032321b;
                puVar11 = (uint64_t *)0x0;
              }
              if (puVar14 != puVar17) {
// WARNING: Subroutine does not return
                memmove(puVar11,puVar14,(int64_t)puVar17 - (int64_t)puVar14);
              }
              *puVar11 = puVar19;
              if (*(int64_t *)(lStack0000000000000028 + 0x88 + lVar7) != 0) {
// WARNING: Subroutine does not return
                CoreMemoryPoolInitializer();
              }
              *(uint64_t **)(lStack0000000000000028 + 0x88 + lVar7) = puVar11;
              *(uint64_t **)(lStack0000000000000028 + 0x90 + lVar7) = puVar11 + 1;
              *(uint64_t **)(lStack0000000000000028 + 0x98 + lVar7) = puVar11 + lVar10;
              plVar16 = local_var_58;
            }
          }
          lVar21 = lVar21 + 8;
          uVar18 = uVar18 - 1;
          param_1 = local_buffer_30;
        } while (uVar18 != 0);
      }
      stack_special_x_20 = stack_special_x_20 + 1;
      lStack0000000000000028 = lStack0000000000000028 + 0xb0;
      param_1 = local_buffer_30;
    } while (stack_special_x_20 < local_var_40);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_80 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void RenderingSystem_23335(void)
void RenderingSystem_23335(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_23340(uint64_t param_1,uint64_t *param_2,int64_t *param_3,int32_t param_4)
void RenderingSystem_23340(uint64_t param_1,uint64_t *param_2,int64_t *param_3,int32_t param_4)
{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  int64_t lVar25;
  int64_t lVar26;
  int iVar27;
  int32_t uVar28;
  int64_t lVar29;
  uint64_t *puVar30;
  int32_t *puVar31;
  uint64_t *puVar32;
  uint64_t *plocal_var_48;
  uint64_t local_var_40;
  int64_t *plStack_38;
  local_var_40 = 0xfffffffffffffffe;
  plocal_var_48 = (uint64_t *)0x0;
  iVar27 = (**(code **)(*param_3 + 0x98))(param_3);
  if (iVar27 == 0) {
    lVar29 = (**(code **)(*param_3 + 0x178))(param_3);
    if (lVar29 == 0) {
      return;
    }
    lVar29 = (**(code **)(*param_3 + 0x178))(param_3);
    if ((*(int *)(lVar29 + 0x20) == 0x11) &&
       (iVar27 = strcmp(*(uint64_t *)(lVar29 + 0x18),&processed_var_7552_ptr), iVar27 == 0)) {
      return;
    }
  }
  else {
    if (iVar27 == 1) {
      RenderingSystem_235c0(param_1,&plocal_var_48,param_3);
      puVar30 = plocal_var_48;
      goto LAB_1803234fc;
    }
    if (iVar27 == 2) {
      RenderingSystem_23810(param_1,&plocal_var_48,param_3);
      puVar30 = plocal_var_48;
      goto LAB_1803234fc;
    }
    if (iVar27 == 4) {
      puVar30 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0xf8,8,3);
      plocal_var_48 = puVar30;
      RenderingSystem_20470(puVar30);
      *puVar30 = &processed_var_8168_ptr;
      uVar28 = RenderingSystem_39cf0(puVar30);
      plVar1 = (int64_t *)param_3[9];
      plStack_38 = plVar1;
      if (plVar1 != (int64_t *)0x0) {
        uVar28 = (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      uVar28 = GenericFunction_1800c17c0(uVar28,plVar1 + 9);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
      }
      lVar25 = param_3[10];
      uVar2 = *(int32_t *)((int64_t)param_3 + 0x54);
      lVar26 = param_3[0xb];
      uVar3 = *(int32_t *)((int64_t)param_3 + 0x5c);
      lVar29 = param_3[0xc];
      lVar13 = param_3[0xd];
      lVar14 = param_3[0xe];
      lVar15 = param_3[0xf];
      lVar16 = param_3[0x10];
      lVar17 = param_3[0x11];
      *(int32_t *)(puVar30 + 2) = 1;
      *(int32_t *)(puVar30 + 0x1e) = uVar28;
      *(int32_t *)((int64_t)puVar30 + 0xf4) = param_4;
      *(int *)(puVar30 + 0x16) = (int)lVar25;
      *(int32_t *)((int64_t)puVar30 + 0xb4) = uVar2;
      *(int *)(puVar30 + 0x17) = (int)lVar26;
      *(int32_t *)((int64_t)puVar30 + 0xbc) = uVar3;
      puVar30[0x18] = lVar29;
      puVar30[0x19] = lVar13;
      puVar30[0x1a] = lVar14;
      puVar30[0x1b] = lVar15;
      puVar30[0x1c] = lVar16;
      puVar30[0x1d] = lVar17;
      *(int32_t *)((int64_t)puVar30 + 0x8c) = 4;
      goto LAB_1803234fc;
    }
    if (iVar27 != 6) {
      return;
    }
  }
  puVar30 = (uint64_t *)(**(code **)(*param_3 + 0x1f8))(param_3,param_1);
LAB_1803234fc:
  if (puVar30 != (uint64_t *)0x0) {
    uVar28 = RenderingSystem_2b4a0(param_1,param_3);
    *(int32_t *)(puVar30 + 1) = uVar28;
    uVar28 = RenderingSystem_2b4a0(param_1,param_3[5]);
    *(int32_t *)((int64_t)puVar30 + 0xc) = uVar28;
    *(uint *)(puVar30 + 2) = *(uint *)(puVar30 + 2) | 1;
    uVar28 = (**(code **)(*param_3 + 0x98))(param_3);
    *(int32_t *)((int64_t)puVar30 + 0x8c) = uVar28;
    puVar31 = (int32_t *)(**(code **)(*param_3 + 0x198))(param_3);
    uVar2 = puVar31[1];
    uVar3 = puVar31[2];
    uVar4 = puVar31[3];
    uVar5 = puVar31[4];
    uVar6 = puVar31[5];
    uVar7 = puVar31[6];
    uVar8 = puVar31[7];
    uVar9 = puVar31[8];
    uVar10 = puVar31[9];
    uVar11 = puVar31[10];
    uVar12 = puVar31[0xb];
    uVar28 = puVar31[0xc];
    *(int32_t *)(puVar30 + 0xb) = *puVar31;
    *(int32_t *)((int64_t)puVar30 + 0x5c) = uVar2;
    *(int32_t *)(puVar30 + 0xc) = uVar3;
    *(int32_t *)((int64_t)puVar30 + 100) = uVar4;
    *(int32_t *)(puVar30 + 0xd) = uVar5;
    *(int32_t *)((int64_t)puVar30 + 0x6c) = uVar6;
    *(int32_t *)(puVar30 + 0xe) = uVar7;
    *(int32_t *)((int64_t)puVar30 + 0x74) = uVar8;
    *(int32_t *)(puVar30 + 0xf) = uVar9;
    *(int32_t *)((int64_t)puVar30 + 0x7c) = uVar10;
    *(int32_t *)(puVar30 + 0x10) = uVar11;
    *(int32_t *)((int64_t)puVar30 + 0x84) = uVar12;
    *(int32_t *)(puVar30 + 0x11) = uVar28;
    uVar28 = (**(code **)(*param_3 + 0x130))(param_3);
    *(int32_t *)((int64_t)puVar30 + 0x14) = uVar28;
    puVar32 = (uint64_t *)(**(code **)(*param_3 + 0x158))(param_3);
    uVar18 = puVar32[1];
    uVar19 = puVar32[2];
    uVar20 = puVar32[3];
    uVar21 = puVar32[4];
    uVar22 = puVar32[5];
    uVar23 = puVar32[6];
    uVar24 = puVar32[7];
    puVar30[3] = *puVar32;
    puVar30[4] = uVar18;
    puVar30[5] = uVar19;
    puVar30[6] = uVar20;
    puVar30[7] = uVar21;
    puVar30[8] = uVar22;
    puVar30[9] = uVar23;
    puVar30[10] = uVar24;
    *param_2 = puVar30;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_235c0(uint64_t param_1,int64_t *param_2,int64_t param_3)
void RenderingSystem_235c0(uint64_t param_1,int64_t *param_2,int64_t param_3)
{
  char cVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  char *pcVar8;
  uint uVar9;
  void *puVar10;
  void *puVar11;
  int8_t stack_array_e8 [32];
  int64_t *plStack_c8;
  uint64_t local_var_c0;
  int64_t **pplStack_b8;
  void *plocal_var_a8;
  char *pcStack_a0;
  uint local_var_98;
  char acStack_90 [72];
  uint64_t local_var_48;
  local_var_c0 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_e8;
  uVar5 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x200,8,3);
  lVar6 = RenderingSystem_39920(uVar5);
  *(int32_t *)(lVar6 + 0xb0) = *(int32_t *)(param_3 + 0x30);
  *(int32_t *)(lVar6 + 0xb4) = *(int32_t *)(param_3 + 0xe4);
  *(int32_t *)(lVar6 + 200) = *(int32_t *)(param_3 + 0x168);
  *(int32_t *)(lVar6 + 0xb8) = *(int32_t *)(param_3 + 0xe8);
  *(int32_t *)(lVar6 + 0xbc) = *(int32_t *)(param_3 + 0xec);
  *(int32_t *)(lVar6 + 0xc0) = *(int32_t *)(param_3 + 0xf0);
  *(int32_t *)(lVar6 + 0xc4) = *(int32_t *)(param_3 + 0xf4);
  *(int32_t *)(lVar6 + 0xcc) = *(int32_t *)(param_3 + 0x16c);
  uVar5 = *(uint64_t *)(param_3 + 0xdc);
  *(uint64_t *)(lVar6 + 0xd8) = *(uint64_t *)(param_3 + 0xd4);
  *(uint64_t *)(lVar6 + 0xe0) = uVar5;
  uVar2 = *(int32_t *)(param_3 + 0x15c);
  uVar3 = *(int32_t *)(param_3 + 0x160);
  uVar4 = *(int32_t *)(param_3 + 0x164);
  *(int32_t *)(lVar6 + 0xe8) = *(int32_t *)(param_3 + 0x158);
  *(int32_t *)(lVar6 + 0xec) = uVar2;
  *(int32_t *)(lVar6 + 0xf0) = uVar3;
  *(int32_t *)(lVar6 + 0xf4) = uVar4;
  lVar7 = *(int64_t *)(param_3 + 0x108);
  if (lVar7 != 0) {
    if (*(int64_t *)(lVar7 + 0x1b0) == 0) {
      lVar7 = lVar7 + 0x10;
    }
    else {
      lVar7 = Function_756def3a();
    }
    uVar9 = 0;
    plocal_var_a8 = &memory_allocator_3480_ptr;
    pcStack_a0 = acStack_90;
    acStack_90[0] = '\0';
    local_var_98 = *(uint *)(lVar7 + 0x10);
    puVar11 = &system_buffer_ptr;
    if (*(void **)(lVar7 + 8) != (void *)0x0) {
      puVar11 = *(void **)(lVar7 + 8);
    }
    strcpy_s(acStack_90,0x40,puVar11);
    if (pcStack_a0 != (char *)0x0) {
      cVar1 = *pcStack_a0;
      pcVar8 = pcStack_a0;
      for (; (cVar1 != '.' && (uVar9 < local_var_98)); uVar9 = uVar9 + 1) {
        pcVar8 = pcVar8 + 1;
        cVar1 = *pcVar8;
      }
      if (uVar9 != local_var_98) {
        pcStack_a0[(int)uVar9] = '\0';
        local_var_98 = uVar9;
      }
    }
    *(uint *)(lVar6 + 0x160) = local_var_98;
    pcVar8 = "";
    if (pcStack_a0 != (char *)0x0) {
      pcVar8 = pcStack_a0;
    }
    strcpy_s(*(uint64_t *)(lVar6 + 0x158),0x40,pcVar8);
    plocal_var_a8 = &system_state_ptr;
  }
  if (*(int64_t *)(param_3 + 0x110) != 0) {
    puVar11 = *(void **)(*(int64_t *)(param_3 + 0x110) + 0x18);
    puVar10 = &system_buffer_ptr;
    if (puVar11 != (void *)0x0) {
      puVar10 = puVar11;
    }
    (**(code **)(*(int64_t *)(lVar6 + 0x1a8) + 0x10))((int64_t *)(lVar6 + 0x1a8),puVar10);
    pplStack_b8 = &plStack_c8;
    plStack_c8 = *(int64_t **)(param_3 + 0x110);
    if (plStack_c8 != (int64_t *)0x0) {
      (**(code **)(*plStack_c8 + 0x28))();
    }
    RenderingSystem_23b30(param_1,&plStack_c8);
  }
  *param_2 = lVar6;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_e8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_23810(uint64_t param_1,int64_t *param_2,int64_t param_3)
void RenderingSystem_23810(uint64_t param_1,int64_t *param_2,int64_t param_3)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int iStackX_20;
  lVar1 = RenderingSystem_3a090();
  lVar6 = 0;
  *(int8_t *)(lVar1 + 0xb0) = *(int8_t *)(param_3 + 0xa9);
  lVar3 = *(int64_t *)(lVar1 + 0xc0);
  lVar4 = *(int64_t *)(lVar1 + 0xb8);
  uVar2 = *(int64_t *)(param_3 + 0x38) - *(int64_t *)(param_3 + 0x30) >> 3;
  uVar9 = lVar3 - lVar4 >> 3;
  uVar7 = uVar2 & 0xffffffff;
  if (uVar9 < uVar7) {
    uVar8 = (uVar2 & 0xffffffff) - uVar9;
    if ((uint64_t)(*(int64_t *)(lVar1 + 200) - lVar3 >> 3) < uVar8) {
      if (uVar9 == 0) {
        uVar9 = 1;
      }
      else {
        uVar9 = uVar9 * 2;
      }
      if (uVar9 < uVar7) {
        uVar9 = uVar7;
      }
      lVar5 = lVar3;
      lVar3 = lVar6;
      if (uVar9 != 0) {
        lVar3 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar9 * 8,*(int8_t *)(lVar1 + 0xd0));
        lVar4 = *(int64_t *)(lVar1 + 0xb8);
        lVar5 = *(int64_t *)(lVar1 + 0xc0);
      }
      if (lVar4 != lVar5) {
// WARNING: Subroutine does not return
        memmove(lVar3,lVar4,lVar5 - lVar4);
      }
      if (uVar8 != 0) {
// WARNING: Subroutine does not return
        memset(lVar3,0,uVar8 * 8);
      }
      if (*(int64_t *)(lVar1 + 0xb8) != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(int64_t *)(lVar1 + 0xb8) = lVar3;
      *(uint64_t *)(lVar1 + 200) = lVar3 + uVar9 * 8;
    }
    else if (uVar8 != 0) {
// WARNING: Subroutine does not return
      memset(lVar3,0,uVar8 * 8);
    }
  }
  else {
    lVar3 = lVar4 + uVar7 * 8;
  }
  *(int64_t *)(lVar1 + 0xc0) = lVar3;
  iStackX_20 = (int)uVar2;
  lVar3 = lVar6;
  if (iStackX_20 != 0) {
    do {
      RenderingSystem_23340(param_1,*(int64_t *)(lVar1 + 0xb8) + lVar6,
                    *(uint64_t *)(*(int64_t *)(param_3 + 0x30) + lVar3),0xffffffff);
      lVar6 = lVar6 + 8;
      uVar7 = uVar7 - 1;
      lVar3 = lVar3 + 8;
    } while (uVar7 != 0);
  }
  *param_2 = lVar1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint RenderingSystem_239f0(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int iVar2;
  uint uVar3;
  int64_t lVar4;
  uint *puVar5;
  uint64_t uVar6;
  uint stack_array_40 [2];
  uint *plocal_var_38;
  int8_t stack_array_30 [24];
  uVar6 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = _Mtx_lock(param_1 + 0xb78);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    uVar3 = RenderingSystem_2b4a0(param_1);
    lVar1 = *(int64_t *)(param_1 + 0xb50);
    for (puVar5 = *(uint **)(lVar1 + ((uint64_t)uVar3 % (uint64_t)*(uint *)(param_1 + 0xb58)) * 8)
        ; puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 4)) {
      if (uVar3 == *puVar5) {
        lVar4 = *(int64_t *)(param_1 + 0xb58);
        goto LAB_180323a8e;
      }
    }
    lVar4 = *(int64_t *)(param_1 + 0xb58);
    puVar5 = *(uint **)(lVar1 + lVar4 * 8);
LAB_180323a8e:
    if (puVar5 == *(uint **)(lVar1 + lVar4 * 8)) {
      uVar6 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x10,8,3,uVar6);
      puVar5 = (uint *)RenderingSystem_20830(uVar6);
      *puVar5 = uVar3;
      SystemCore_PointerManager(puVar5 + 2,param_2);
      stack_array_40[0] = uVar3;
      plocal_var_38 = puVar5;
      RenderingSystem_3b220(param_1 + 0xb48,stack_array_30,stack_array_40);
    }
    iVar2 = _Mtx_unlock(param_1 + 0xb78);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
  }
  return uVar3;
}