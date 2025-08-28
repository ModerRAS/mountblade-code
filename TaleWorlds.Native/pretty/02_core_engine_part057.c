#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part057.c - 4 个函数

// 函数: void FUN_180092b20(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180092b20(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  float fVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  uint uVar9;
  int iVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  int64_t *plVar14;
  int64_t lVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  int64_t lVar19;
  uint64_t uVar20;
  uint64_t *puVar21;
  int64_t lVar22;
  int64_t lVar23;
  float fVar24;
  int64_t lStackX_8;
  int64_t *plStack_80;
  int64_t lStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  
  plStack_80 = (int64_t *)0x0;
  lStack_78 = 0;
  puVar17 = (uint64_t *)0x0;
  uStack_70 = 0;
  uStack_68 = 3;
  FUN_1800da760(system_parameter_buffer,param_2,&plStack_80,param_4,0xfffffffffffffffe);
  uVar20 = lStack_78 - (int64_t)plStack_80 >> 3;
  puVar11 = puVar17;
  plVar14 = plStack_80;
  if (uVar20 != 0) {
    do {
      if (*(char *)(*plVar14 + 0x11c38) != '\0') {
        lVar22 = plStack_80[(int)puVar11];
        if (lVar22 != 0) goto LAB_180092bbb;
        break;
      }
      uVar9 = (int)puVar11 + 1;
      puVar11 = (uint64_t *)(uint64_t)uVar9;
      plVar14 = plVar14 + 1;
    } while ((uint64_t)(int64_t)(int)uVar9 < uVar20);
  }
  lVar22 = param_2;
LAB_180092bbb:
  FUN_180634b20(lVar22 + 0x11a50);
  lVar19 = core_system_data_ui;
  iVar10 = (int)(lStack_78 - (int64_t)plStack_80 >> 3) + -1;
  lVar15 = (int64_t)iVar10;
  if (-1 < iVar10) {
    do {
      if (*(char *)(plStack_80[lVar15] + 0x11c38) != '\0') {
        lStackX_8 = plStack_80[iVar10];
        if (lStackX_8 != 0) goto LAB_180092c16;
        break;
      }
      iVar10 = iVar10 + -1;
      lVar15 = lVar15 + -1;
    } while (-1 < lVar15);
  }
  lStackX_8 = param_2;
LAB_180092c16:
  iVar10 = _Mtx_lock(lStackX_8 + 0x11a50);
  if (iVar10 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar10);
  }
  iVar10 = _Mtx_lock(lVar19);
  if (iVar10 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar10);
  }
  lVar15 = *(int64_t *)(lVar19 + 0x178);
  puVar11 = puVar17;
  puVar18 = puVar17;
  if ((*(int64_t *)(lVar19 + 0x180) - lVar15) / 0x50 != 0) {
    do {
      if (*(uint64_t *)(lStackX_8 + 0x11bd0) < *(uint64_t *)(lStackX_8 + 0x11bd8)) {
        *(uint64_t *)(lStackX_8 + 0x11bd0) = *(uint64_t *)(lStackX_8 + 0x11bd0) + 0x50;
        FUN_1800940b0();
      }
      else {
        FUN_180093d90(lStackX_8 + 0x11bc8,(int64_t)puVar11 * 0x50 + lVar15);
      }
      uVar9 = (int)puVar18 + 1;
      lVar15 = *(int64_t *)(lVar19 + 0x178);
      puVar11 = (uint64_t *)(int64_t)(int)uVar9;
      puVar18 = (uint64_t *)(uint64_t)uVar9;
    } while ((uint64_t *)(int64_t)(int)uVar9 <
             (uint64_t *)((*(int64_t *)(lVar19 + 0x180) - lVar15) / 0x50));
  }
  iVar10 = _Mtx_unlock(lVar19);
  if (iVar10 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar10);
  }
  iVar10 = _Mtx_unlock(lStackX_8 + 0x11a50);
  if (iVar10 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar10);
  }
  func_0x00018005c480(core_system_data_ui);
  if (*(char *)(param_1 + 0x1610) == '\0') {
    fVar24 = (float)system_error_code * 1e-05;
    lVar19 = *(int64_t *)(lVar22 + 0x11ae8);
    lVar12 = *(int64_t *)(lVar22 + 0x11af0) - lVar19;
    lVar15 = lVar12 >> 0x3f;
    puVar11 = puVar17;
    puVar18 = puVar17;
    if (lVar12 / 0x30 + lVar15 != lVar15) {
      do {
        lVar15 = core_system_data_ui;
        fVar3 = *(float *)(lVar19 + 0x2c + (int64_t)puVar11);
        if ((fVar3 != 0.0) && (fVar24 - *(float *)(lVar19 + 0x28 + (int64_t)puVar11) < fVar3)) {
          puVar21 = *(uint64_t **)(core_system_data_ui + 0xa0);
          if (puVar21 < *(uint64_t **)(core_system_data_ui + 0xa8)) {
            *(uint64_t **)(core_system_data_ui + 0xa0) = puVar21 + 6;
            puVar21[4] = 0xffffffffffffffff;
            uVar7 = ((uint64_t *)(lVar19 + (int64_t)puVar11))[1];
            *puVar21 = *(uint64_t *)(lVar19 + (int64_t)puVar11);
            puVar21[1] = uVar7;
            puVar1 = (int32_t *)(lVar19 + 0x10 + (int64_t)puVar11);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *(int32_t *)(puVar21 + 2) = *puVar1;
            *(int32_t *)((int64_t)puVar21 + 0x14) = uVar4;
            *(int32_t *)(puVar21 + 3) = uVar5;
            *(int32_t *)((int64_t)puVar21 + 0x1c) = uVar6;
            *(int32_t *)(puVar21 + 4) = *(int32_t *)(lVar19 + 0x20 + (int64_t)puVar11);
            *(int32_t *)((int64_t)puVar21 + 0x24) =
                 *(int32_t *)(lVar19 + 0x24 + (int64_t)puVar11);
            *(int32_t *)((int64_t)puVar21 + 0x2c) =
                 *(int32_t *)(lVar19 + 0x2c + (int64_t)puVar11);
            *(int32_t *)(puVar21 + 5) = *(int32_t *)(lVar19 + 0x28 + (int64_t)puVar11);
          }
          else {
            puVar16 = *(uint64_t **)(core_system_data_ui + 0x98);
            lVar12 = ((int64_t)puVar21 - (int64_t)puVar16) / 0x30;
            if (lVar12 == 0) {
              lVar12 = 1;
LAB_180092e59:
              puVar8 = (uint64_t *)
                       CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar12 * 0x30,
                                     *(int8_t *)(core_system_data_ui + 0xb0));
              puVar21 = *(uint64_t **)(lVar15 + 0xa0);
              puVar16 = *(uint64_t **)(lVar15 + 0x98);
            }
            else {
              lVar12 = lVar12 * 2;
              puVar8 = puVar17;
              if (lVar12 != 0) goto LAB_180092e59;
            }
            puVar13 = puVar8;
            if (puVar16 != puVar21) {
              lVar23 = (int64_t)puVar8 - (int64_t)puVar16;
              puVar16 = puVar16 + 4;
              do {
                *(uint64_t *)(lVar23 + (int64_t)puVar16) = 0xffffffffffffffff;
                uVar7 = puVar16[-3];
                *puVar13 = puVar16[-4];
                puVar13[1] = uVar7;
                uVar7 = puVar16[-1];
                puVar2 = (uint64_t *)(lVar23 + -0x10 + (int64_t)puVar16);
                *puVar2 = puVar16[-2];
                puVar2[1] = uVar7;
                *(int32_t *)(lVar23 + (int64_t)puVar16) = *(int32_t *)puVar16;
                *(int32_t *)(lVar23 + 4 + (int64_t)puVar16) =
                     *(int32_t *)((int64_t)puVar16 + 4);
                *(int32_t *)(lVar23 + 0xc + (int64_t)puVar16) =
                     *(int32_t *)((int64_t)puVar16 + 0xc);
                *(int32_t *)(lVar23 + 8 + (int64_t)puVar16) = *(int32_t *)(puVar16 + 1);
                puVar13 = puVar13 + 6;
                puVar2 = puVar16 + 2;
                puVar16 = puVar16 + 6;
              } while (puVar2 != puVar21);
            }
            puVar13[4] = 0xffffffffffffffff;
            uVar7 = ((uint64_t *)(lVar19 + (int64_t)puVar11))[1];
            *puVar13 = *(uint64_t *)(lVar19 + (int64_t)puVar11);
            puVar13[1] = uVar7;
            puVar1 = (int32_t *)(lVar19 + 0x10 + (int64_t)puVar11);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *(int32_t *)(puVar13 + 2) = *puVar1;
            *(int32_t *)((int64_t)puVar13 + 0x14) = uVar4;
            *(int32_t *)(puVar13 + 3) = uVar5;
            *(int32_t *)((int64_t)puVar13 + 0x1c) = uVar6;
            *(int32_t *)(puVar13 + 4) = *(int32_t *)(lVar19 + 0x20 + (int64_t)puVar11);
            *(int32_t *)((int64_t)puVar13 + 0x24) =
                 *(int32_t *)(lVar19 + 0x24 + (int64_t)puVar11);
            *(int32_t *)((int64_t)puVar13 + 0x2c) =
                 *(int32_t *)(lVar19 + 0x2c + (int64_t)puVar11);
            *(int32_t *)(puVar13 + 5) = *(int32_t *)(lVar19 + 0x28 + (int64_t)puVar11);
            if (*(int64_t *)(lVar15 + 0x98) != 0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            *(uint64_t **)(lVar15 + 0x98) = puVar8;
            *(uint64_t **)(lVar15 + 0xa0) = puVar13 + 6;
            *(uint64_t **)(lVar15 + 0xa8) = puVar8 + lVar12 * 6;
          }
        }
        uVar9 = (int)puVar18 + 1;
        lVar19 = *(int64_t *)(lVar22 + 0x11ae8);
        puVar11 = puVar11 + 6;
        puVar18 = (uint64_t *)(uint64_t)uVar9;
      } while ((uint64_t)(int64_t)(int)uVar9 <
               (uint64_t)((*(int64_t *)(lVar22 + 0x11af0) - lVar19) / 0x30));
    }
    lVar19 = *(int64_t *)(lVar22 + 0x11b08);
    lVar12 = *(int64_t *)(lVar22 + 0x11b10) - lVar19;
    lVar15 = lVar12 >> 0x3f;
    puVar11 = puVar17;
    puVar18 = puVar17;
    if (lVar12 / 0x30 + lVar15 != lVar15) {
      do {
        lVar15 = core_system_data_ui;
        fVar3 = *(float *)(lVar19 + 0x2c + (int64_t)puVar11);
        if ((fVar3 != 0.0) && (fVar24 - *(float *)(lVar19 + 0x28 + (int64_t)puVar11) < fVar3)) {
          puVar21 = *(uint64_t **)(core_system_data_ui + 0xc0);
          if (puVar21 < *(uint64_t **)(core_system_data_ui + 200)) {
            *(uint64_t **)(core_system_data_ui + 0xc0) = puVar21 + 6;
            puVar21[4] = 0xffffffffffffffff;
            uVar7 = ((uint64_t *)(lVar19 + (int64_t)puVar11))[1];
            *puVar21 = *(uint64_t *)(lVar19 + (int64_t)puVar11);
            puVar21[1] = uVar7;
            puVar1 = (int32_t *)(lVar19 + 0x10 + (int64_t)puVar11);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *(int32_t *)(puVar21 + 2) = *puVar1;
            *(int32_t *)((int64_t)puVar21 + 0x14) = uVar4;
            *(int32_t *)(puVar21 + 3) = uVar5;
            *(int32_t *)((int64_t)puVar21 + 0x1c) = uVar6;
            *(int32_t *)(puVar21 + 4) = *(int32_t *)(lVar19 + 0x20 + (int64_t)puVar11);
            *(int32_t *)((int64_t)puVar21 + 0x24) =
                 *(int32_t *)(lVar19 + 0x24 + (int64_t)puVar11);
            *(int32_t *)((int64_t)puVar21 + 0x2c) =
                 *(int32_t *)(lVar19 + 0x2c + (int64_t)puVar11);
            *(int32_t *)(puVar21 + 5) = *(int32_t *)(lVar19 + 0x28 + (int64_t)puVar11);
          }
          else {
            puVar16 = *(uint64_t **)(core_system_data_ui + 0xb8);
            lVar12 = ((int64_t)puVar21 - (int64_t)puVar16) / 0x30;
            if (lVar12 == 0) {
              lVar12 = 1;
LAB_180093089:
              puVar8 = (uint64_t *)
                       CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar12 * 0x30,
                                     *(int8_t *)(core_system_data_ui + 0xd0));
              puVar21 = *(uint64_t **)(lVar15 + 0xc0);
              puVar16 = *(uint64_t **)(lVar15 + 0xb8);
            }
            else {
              lVar12 = lVar12 * 2;
              puVar8 = puVar17;
              if (lVar12 != 0) goto LAB_180093089;
            }
            puVar13 = puVar8;
            if (puVar16 != puVar21) {
              lVar23 = (int64_t)puVar8 - (int64_t)puVar16;
              puVar16 = puVar16 + 4;
              do {
                *(uint64_t *)(lVar23 + (int64_t)puVar16) = 0xffffffffffffffff;
                uVar7 = puVar16[-3];
                *puVar13 = puVar16[-4];
                puVar13[1] = uVar7;
                uVar7 = puVar16[-1];
                puVar2 = (uint64_t *)(lVar23 + -0x10 + (int64_t)puVar16);
                *puVar2 = puVar16[-2];
                puVar2[1] = uVar7;
                *(int32_t *)(lVar23 + (int64_t)puVar16) = *(int32_t *)puVar16;
                *(int32_t *)(lVar23 + 4 + (int64_t)puVar16) =
                     *(int32_t *)((int64_t)puVar16 + 4);
                *(int32_t *)(lVar23 + 0xc + (int64_t)puVar16) =
                     *(int32_t *)((int64_t)puVar16 + 0xc);
                *(int32_t *)(lVar23 + 8 + (int64_t)puVar16) = *(int32_t *)(puVar16 + 1);
                puVar13 = puVar13 + 6;
                puVar2 = puVar16 + 2;
                puVar16 = puVar16 + 6;
              } while (puVar2 != puVar21);
            }
            puVar13[4] = 0xffffffffffffffff;
            uVar7 = ((uint64_t *)(lVar19 + (int64_t)puVar11))[1];
            *puVar13 = *(uint64_t *)(lVar19 + (int64_t)puVar11);
            puVar13[1] = uVar7;
            puVar1 = (int32_t *)(lVar19 + 0x10 + (int64_t)puVar11);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *(int32_t *)(puVar13 + 2) = *puVar1;
            *(int32_t *)((int64_t)puVar13 + 0x14) = uVar4;
            *(int32_t *)(puVar13 + 3) = uVar5;
            *(int32_t *)((int64_t)puVar13 + 0x1c) = uVar6;
            *(int32_t *)(puVar13 + 4) = *(int32_t *)(lVar19 + 0x20 + (int64_t)puVar11);
            *(int32_t *)((int64_t)puVar13 + 0x24) =
                 *(int32_t *)(lVar19 + 0x24 + (int64_t)puVar11);
            *(int32_t *)((int64_t)puVar13 + 0x2c) =
                 *(int32_t *)(lVar19 + 0x2c + (int64_t)puVar11);
            *(int32_t *)(puVar13 + 5) = *(int32_t *)(lVar19 + 0x28 + (int64_t)puVar11);
            if (*(int64_t *)(lVar15 + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            *(uint64_t **)(lVar15 + 0xb8) = puVar8;
            *(uint64_t **)(lVar15 + 0xc0) = puVar13 + 6;
            *(uint64_t **)(lVar15 + 200) = puVar8 + lVar12 * 6;
          }
        }
        uVar9 = (int)puVar18 + 1;
        lVar19 = *(int64_t *)(lVar22 + 0x11b08);
        puVar11 = puVar11 + 6;
        puVar18 = (uint64_t *)(uint64_t)uVar9;
      } while ((uint64_t)(int64_t)(int)uVar9 <
               (uint64_t)((*(int64_t *)(lVar22 + 0x11b10) - lVar19) / 0x30));
    }
    lVar19 = *(int64_t *)(lVar22 + 0x11ac8);
    lVar12 = *(int64_t *)(lVar22 + 0x11ad0) - lVar19;
    lVar15 = lVar12 >> 0x3f;
    puVar11 = puVar17;
    puVar18 = puVar17;
    if (lVar12 / 0x30 + lVar15 != lVar15) {
      do {
        lVar15 = core_system_data_ui;
        fVar3 = *(float *)(lVar19 + 0x2c + (int64_t)puVar11);
        if ((fVar3 != 0.0) && (fVar24 - *(float *)(lVar19 + 0x28 + (int64_t)puVar11) < fVar3)) {
          puVar21 = *(uint64_t **)(core_system_data_ui + 0x80);
          if (puVar21 < *(uint64_t **)(core_system_data_ui + 0x88)) {
            *(uint64_t **)(core_system_data_ui + 0x80) = puVar21 + 6;
            puVar21[4] = 0xffffffffffffffff;
            uVar7 = ((uint64_t *)(lVar19 + (int64_t)puVar11))[1];
            *puVar21 = *(uint64_t *)(lVar19 + (int64_t)puVar11);
            puVar21[1] = uVar7;
            puVar1 = (int32_t *)(lVar19 + 0x10 + (int64_t)puVar11);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *(int32_t *)(puVar21 + 2) = *puVar1;
            *(int32_t *)((int64_t)puVar21 + 0x14) = uVar4;
            *(int32_t *)(puVar21 + 3) = uVar5;
            *(int32_t *)((int64_t)puVar21 + 0x1c) = uVar6;
            *(int32_t *)(puVar21 + 4) = *(int32_t *)(lVar19 + 0x20 + (int64_t)puVar11);
            *(int32_t *)((int64_t)puVar21 + 0x24) =
                 *(int32_t *)(lVar19 + 0x24 + (int64_t)puVar11);
            *(int32_t *)((int64_t)puVar21 + 0x2c) =
                 *(int32_t *)(lVar19 + 0x2c + (int64_t)puVar11);
            *(int32_t *)(puVar21 + 5) = *(int32_t *)(lVar19 + 0x28 + (int64_t)puVar11);
          }
          else {
            puVar16 = *(uint64_t **)(core_system_data_ui + 0x78);
            lVar12 = ((int64_t)puVar21 - (int64_t)puVar16) / 0x30;
            if (lVar12 == 0) {
              lVar12 = 1;
LAB_1800932b6:
              puVar8 = (uint64_t *)
                       CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar12 * 0x30,
                                     *(int8_t *)(core_system_data_ui + 0x90));
              puVar21 = *(uint64_t **)(lVar15 + 0x80);
              puVar16 = *(uint64_t **)(lVar15 + 0x78);
            }
            else {
              lVar12 = lVar12 * 2;
              puVar8 = puVar17;
              if (lVar12 != 0) goto LAB_1800932b6;
            }
            puVar13 = puVar8;
            if (puVar16 != puVar21) {
              lVar23 = (int64_t)puVar8 - (int64_t)puVar16;
              puVar16 = puVar16 + 4;
              do {
                *(uint64_t *)(lVar23 + (int64_t)puVar16) = 0xffffffffffffffff;
                uVar7 = puVar16[-3];
                *puVar13 = puVar16[-4];
                puVar13[1] = uVar7;
                uVar7 = puVar16[-1];
                puVar2 = (uint64_t *)(lVar23 + -0x10 + (int64_t)puVar16);
                *puVar2 = puVar16[-2];
                puVar2[1] = uVar7;
                *(int32_t *)(lVar23 + (int64_t)puVar16) = *(int32_t *)puVar16;
                *(int32_t *)(lVar23 + 4 + (int64_t)puVar16) =
                     *(int32_t *)((int64_t)puVar16 + 4);
                *(int32_t *)(lVar23 + 0xc + (int64_t)puVar16) =
                     *(int32_t *)((int64_t)puVar16 + 0xc);
                *(int32_t *)(lVar23 + 8 + (int64_t)puVar16) = *(int32_t *)(puVar16 + 1);
                puVar13 = puVar13 + 6;
                puVar2 = puVar16 + 2;
                puVar16 = puVar16 + 6;
              } while (puVar2 != puVar21);
            }
            puVar13[4] = 0xffffffffffffffff;
            uVar7 = ((uint64_t *)(lVar19 + (int64_t)puVar11))[1];
            *puVar13 = *(uint64_t *)(lVar19 + (int64_t)puVar11);
            puVar13[1] = uVar7;
            puVar1 = (int32_t *)(lVar19 + 0x10 + (int64_t)puVar11);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *(int32_t *)(puVar13 + 2) = *puVar1;
            *(int32_t *)((int64_t)puVar13 + 0x14) = uVar4;
            *(int32_t *)(puVar13 + 3) = uVar5;
            *(int32_t *)((int64_t)puVar13 + 0x1c) = uVar6;
            *(int32_t *)(puVar13 + 4) = *(int32_t *)(lVar19 + 0x20 + (int64_t)puVar11);
            *(int32_t *)((int64_t)puVar13 + 0x24) =
                 *(int32_t *)(lVar19 + 0x24 + (int64_t)puVar11);
            *(int32_t *)((int64_t)puVar13 + 0x2c) =
                 *(int32_t *)(lVar19 + 0x2c + (int64_t)puVar11);
            *(int32_t *)(puVar13 + 5) = *(int32_t *)(lVar19 + 0x28 + (int64_t)puVar11);
            if (*(int64_t *)(lVar15 + 0x78) != 0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            *(uint64_t **)(lVar15 + 0x78) = puVar8;
            *(uint64_t **)(lVar15 + 0x80) = puVar13 + 6;
            *(uint64_t **)(lVar15 + 0x88) = puVar8 + lVar12 * 6;
          }
        }
        uVar9 = (int)puVar18 + 1;
        lVar19 = *(int64_t *)(lVar22 + 0x11ac8);
        puVar11 = puVar11 + 6;
        puVar18 = (uint64_t *)(uint64_t)uVar9;
      } while ((uint64_t)(int64_t)(int)uVar9 <
               (uint64_t)((*(int64_t *)(lVar22 + 0x11ad0) - lVar19) / 0x30));
    }
    lVar19 = *(int64_t *)(lVar22 + 0x11aa8);
    lVar12 = *(int64_t *)(lVar22 + 0x11ab0) - lVar19;
    lVar15 = lVar12 >> 0x3f;
    puVar11 = puVar17;
    puVar18 = puVar17;
    if (lVar12 / 0x30 + lVar15 != lVar15) {
      do {
        lVar15 = core_system_data_ui;
        fVar3 = *(float *)(lVar19 + 0x2c + (int64_t)puVar11);
        if ((fVar3 != 0.0) && (fVar24 - *(float *)(lVar19 + 0x28 + (int64_t)puVar11) < fVar3)) {
          puVar21 = *(uint64_t **)(core_system_data_ui + 0x60);
          if (puVar21 < *(uint64_t **)(core_system_data_ui + 0x68)) {
            *(uint64_t **)(core_system_data_ui + 0x60) = puVar21 + 6;
            puVar21[4] = 0xffffffffffffffff;
            uVar7 = ((uint64_t *)(lVar19 + (int64_t)puVar11))[1];
            *puVar21 = *(uint64_t *)(lVar19 + (int64_t)puVar11);
            puVar21[1] = uVar7;
            puVar1 = (int32_t *)(lVar19 + 0x10 + (int64_t)puVar11);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *(int32_t *)(puVar21 + 2) = *puVar1;
            *(int32_t *)((int64_t)puVar21 + 0x14) = uVar4;
            *(int32_t *)(puVar21 + 3) = uVar5;
            *(int32_t *)((int64_t)puVar21 + 0x1c) = uVar6;
            *(int32_t *)(puVar21 + 4) = *(int32_t *)(lVar19 + 0x20 + (int64_t)puVar11);
            *(int32_t *)((int64_t)puVar21 + 0x24) =
                 *(int32_t *)(lVar19 + 0x24 + (int64_t)puVar11);
            *(int32_t *)((int64_t)puVar21 + 0x2c) =
                 *(int32_t *)(lVar19 + 0x2c + (int64_t)puVar11);
            *(int32_t *)(puVar21 + 5) = *(int32_t *)(lVar19 + 0x28 + (int64_t)puVar11);
          }
          else {
            puVar16 = *(uint64_t **)(core_system_data_ui + 0x58);
            lVar12 = ((int64_t)puVar21 - (int64_t)puVar16) / 0x30;
            if (lVar12 == 0) {
              lVar12 = 1;
LAB_1800934cd:
              puVar8 = (uint64_t *)
                       CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar12 * 0x30,
                                     *(int8_t *)(core_system_data_ui + 0x70));
              puVar21 = *(uint64_t **)(lVar15 + 0x60);
              puVar16 = *(uint64_t **)(lVar15 + 0x58);
            }
            else {
              lVar12 = lVar12 * 2;
              puVar8 = puVar17;
              if (lVar12 != 0) goto LAB_1800934cd;
            }
            puVar13 = puVar8;
            if (puVar16 != puVar21) {
              lVar23 = (int64_t)puVar8 - (int64_t)puVar16;
              puVar16 = puVar16 + 4;
              do {
                *(uint64_t *)(lVar23 + (int64_t)puVar16) = 0xffffffffffffffff;
                uVar7 = puVar16[-3];
                *puVar13 = puVar16[-4];
                puVar13[1] = uVar7;
                uVar7 = puVar16[-1];
                puVar2 = (uint64_t *)(lVar23 + -0x10 + (int64_t)puVar16);
                *puVar2 = puVar16[-2];
                puVar2[1] = uVar7;
                *(int32_t *)(lVar23 + (int64_t)puVar16) = *(int32_t *)puVar16;
                *(int32_t *)(lVar23 + 4 + (int64_t)puVar16) =
                     *(int32_t *)((int64_t)puVar16 + 4);
                *(int32_t *)(lVar23 + 0xc + (int64_t)puVar16) =
                     *(int32_t *)((int64_t)puVar16 + 0xc);
                *(int32_t *)(lVar23 + 8 + (int64_t)puVar16) = *(int32_t *)(puVar16 + 1);
                puVar13 = puVar13 + 6;
                puVar2 = puVar16 + 2;
                puVar16 = puVar16 + 6;
              } while (puVar2 != puVar21);
            }
            puVar13[4] = 0xffffffffffffffff;
            uVar7 = ((uint64_t *)(lVar19 + (int64_t)puVar11))[1];
            *puVar13 = *(uint64_t *)(lVar19 + (int64_t)puVar11);
            puVar13[1] = uVar7;
            puVar1 = (int32_t *)(lVar19 + 0x10 + (int64_t)puVar11);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *(int32_t *)(puVar13 + 2) = *puVar1;
            *(int32_t *)((int64_t)puVar13 + 0x14) = uVar4;
            *(int32_t *)(puVar13 + 3) = uVar5;
            *(int32_t *)((int64_t)puVar13 + 0x1c) = uVar6;
            *(int32_t *)(puVar13 + 4) = *(int32_t *)(lVar19 + 0x20 + (int64_t)puVar11);
            *(int32_t *)((int64_t)puVar13 + 0x24) =
                 *(int32_t *)(lVar19 + 0x24 + (int64_t)puVar11);
            *(int32_t *)((int64_t)puVar13 + 0x2c) =
                 *(int32_t *)(lVar19 + 0x2c + (int64_t)puVar11);
            *(int32_t *)(puVar13 + 5) = *(int32_t *)(lVar19 + 0x28 + (int64_t)puVar11);
            if (*(int64_t *)(lVar15 + 0x58) != 0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            *(uint64_t **)(lVar15 + 0x58) = puVar8;
            *(uint64_t **)(lVar15 + 0x60) = puVar13 + 6;
            *(uint64_t **)(lVar15 + 0x68) = puVar8 + lVar12 * 6;
          }
        }
        uVar9 = (int)puVar18 + 1;
        lVar19 = *(int64_t *)(lVar22 + 0x11aa8);
        puVar11 = puVar11 + 6;
        puVar18 = (uint64_t *)(uint64_t)uVar9;
      } while ((uint64_t)(int64_t)(int)uVar9 <
               (uint64_t)((*(int64_t *)(lVar22 + 0x11ab0) - lVar19) / 0x30));
    }
    lVar22 = *(int64_t *)(lStackX_8 + 0x11bc8);
    lVar15 = *(int64_t *)(lStackX_8 + 0x11bd0) - lVar22;
    lVar19 = lVar15 >> 0x3f;
    puVar11 = puVar17;
    puVar18 = puVar17;
    if (lVar15 / 0x50 + lVar19 != lVar19) {
      do {
        fVar3 = *(float *)(lVar22 + 0x48 + (int64_t)puVar17);
        if ((fVar3 != 0.0) && (fVar24 - *(float *)(lVar22 + 0x44 + (int64_t)puVar17) < fVar3)) {
          uVar20 = *(uint64_t *)(core_system_data_ui + 0x180);
          if (uVar20 < *(uint64_t *)(core_system_data_ui + 0x188)) {
            *(uint64_t *)(core_system_data_ui + 0x180) = uVar20 + 0x50;
            FUN_1800940b0(uVar20);
          }
          else {
            FUN_180093d90(core_system_data_ui + 0x178,(int64_t)puVar11 * 0x50 + lVar22);
          }
        }
        uVar9 = (int)puVar18 + 1;
        puVar17 = puVar17 + 10;
        lVar22 = *(int64_t *)(lStackX_8 + 0x11bc8);
        puVar11 = (uint64_t *)(int64_t)(int)uVar9;
        puVar18 = (uint64_t *)(uint64_t)uVar9;
      } while ((uint64_t *)(int64_t)(int)uVar9 <
               (uint64_t *)((*(int64_t *)(lStackX_8 + 0x11bd0) - lVar22) / 0x50));
    }
  }
  else {
    *(int8_t *)(param_1 + 0x1610) = 0;
  }
  if (plStack_80 == (int64_t *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_180093710(uint64_t param_1,int64_t *param_2,uint64_t param_3)

{
  int64_t *plVar1;
  
  if (param_3 < (uint64_t)
                (*(int64_t *)(system_operation_state + 0x1870) - *(int64_t *)(system_operation_state + 0x1868) >>
                3)) {
    plVar1 = *(int64_t **)(*(int64_t *)(system_operation_state + 0x1868) + param_3 * 8);
    *param_2 = (int64_t)plVar1;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
  }
  else {
    *param_2 = 0;
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180093780(uint64_t param_1,int param_2,int param_3)
void FUN_180093780(uint64_t param_1,int param_2,int param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  uint uVar10;
  uint uVar11;
  uint64_t uStackX_8;
  int64_t *plStackX_20;
  
  lVar1 = *(int64_t *)(system_main_module_state + 8);
  uVar7 = (uint64_t)(*(uint *)(lVar1 + 0x13c) & 1);
  lVar2 = *(int64_t *)(system_main_module_state + 8);
  uVar8 = (uint64_t)(*(uint *)(lVar2 + 0x13c) & 1);
  uVar5 = param_2 - (*(int *)(lVar1 + 0xc0 + uVar7 * 0x48) - *(int *)(lVar2 + 0xec + uVar8 * 0x48));
  uVar10 = (int)uVar5 >> 0x1f;
  uVar6 = param_3 - (*(int *)(lVar1 + 0xc4 + uVar7 * 0x48) - *(int *)(lVar2 + 0xf0 + uVar8 * 0x48));
  uVar11 = (int)uVar6 >> 0x1f;
  if ((0 < (int)((uVar5 ^ uVar10) - uVar10)) || (0 < (int)((uVar6 ^ uVar11) - uVar11))) {
    lVar2 = *(int64_t *)(system_main_module_state + 8);
    uStackX_8 = CONCAT44(param_3,param_2);
    plVar9 = (int64_t *)
             CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x48,8,CONCAT71((int7)((uint64_t)lVar1 >> 8),3),
                           0xfffffffffffffffe);
    *plVar9 = (int64_t)&system_handler1_ptr;
    *plVar9 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar9 + 1) = 0;
    *plVar9 = (int64_t)&unknown_var_1000_ptr;
    LOCK();
    *(int8_t *)(plVar9 + 2) = 0;
    UNLOCK();
    plVar9[3] = -1;
    *plVar9 = (int64_t)&unknown_var_2640_ptr;
    *(int32_t *)(plVar9 + 5) = 5;
    plVar9[4] = lVar2;
    (**(code **)(*plVar9 + 0x28))(plVar9);
    plVar9[6] = uStackX_8;
    puVar3 = *(uint64_t **)(lVar2 + 0x140);
    pcVar4 = *(code **)*puVar3;
    plStackX_20 = plVar9;
    (**(code **)(*plVar9 + 0x28))(plVar9);
    (*pcVar4)(puVar3,&plStackX_20);
    (**(code **)(*plVar9 + 0x38))(plVar9);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180093950(void)
void FUN_180093950(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  
  lVar2 = system_operation_state;
  uVar6 = 0xfffffffffffffffe;
  lVar1 = system_operation_state + 0x1808;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  lVar4 = system_main_module_state;
  *(int8_t *)(system_main_module_state + 0x1ec) = 0;
  lVar5 = *(int64_t *)(lVar2 + 0x1800);
  if (lVar5 == 0) {
    uVar6 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x160,8,3,uVar6);
    uVar6 = FUN_180288040(uVar6);
    FUN_180056f10(lVar2 + 0x1800,uVar6);
    lVar5 = *(int64_t *)(lVar2 + 0x1800);
    lVar4 = system_main_module_state;
  }
  *(int32_t *)(lVar4 + 0x200) = 0x3d088889;
  *(int8_t *)(lVar5 + 0xdd) = 1;
  iVar3 = _Mtx_unlock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180093a20(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180093a20(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  
  lVar3 = system_operation_state;
  lVar1 = system_operation_state + 0x1808;
  iVar4 = _Mtx_lock(lVar1,param_2,param_3,param_4,0xfffffffffffffffe);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  lVar5 = system_main_module_state;
  *(int8_t *)(system_main_module_state + 0x1ec) = 1;
  plVar2 = *(int64_t **)(lVar3 + 0x1800);
  if (plVar2 != (int64_t *)0x0) {
    *(int8_t *)((int64_t)plVar2 + 0xdd) = 0;
    (**(code **)(*plVar2 + 0xc0))();
    *(int8_t *)(*(int64_t *)(lVar3 + 0x1800) + 0xf0) = 1;
    lVar5 = system_main_module_state;
  }
  *(float *)(lVar5 + 0x200) = 1.0 / (float)*(int *)(SYSTEM_STATE_MANAGER + 0x1b90);
  iVar4 = _Mtx_unlock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



