// 02_core_engine_part151.c - 核心引擎模块第151部分 - 资源管理系统
// 
// 本文件包含8个函数，主要负责：
// - 资源节点的遍历和搜索
// - 资源碰撞检测和处理
// - 资源优先级更新
// - 资源系统清理和重置
// - 资源交互处理
//
// 简化说明：为提高代码可读性，函数已重命名为语义化名称，
//          并添加了中文注释说明功能。部分复杂算法进行了简化处理。

#include "TaleWorlds.Native.Split.h"


// 函数: void traverse_resource_nodes(longlong resource_node,int filter_id,int traversal_mode,uint64_t callback_data)
// 功能: 遍历资源节点树，根据过滤条件和遍历模式执行回调
// 原始实现: FUN_18013a860
// 简化实现: 保留原始的递归遍历和过滤逻辑
void traverse_resource_nodes(longlong resource_node,int filter_id,int traversal_mode,uint64_t callback_data)

{
  longlong next_node;
  longlong sibling_node;
  longlong current_node;
  
  next_node = *(longlong *)(resource_node + 0x10);
  while( true ) {
    current_node = resource_node;
    if (next_node == 0) {
      FUN_18013d860(callback_data,&current_node);
      return;
    }
    if (((*(byte *)(next_node + 0xa0) & 4) != 0) &&
       (((*(int *)(resource_node + 0x50) != filter_id || (traversal_mode == 0)) ||
        ((*(byte *)(*(longlong *)(resource_node + 0x18) + 0xa0) & 4) == 0)))) {
      traverse_resource_nodes(next_node,filter_id,traversal_mode,callback_data);
    }
    sibling_node = *(longlong *)(resource_node + 0x18);
    if ((*(byte *)(sibling_node + 0xa0) & 4) == 0) break;
    if (((*(int *)(resource_node + 0x50) == filter_id) && (traversal_mode != 1)) &&
       ((*(byte *)(*(longlong *)(resource_node + 0x10) + 0xa0) & 4) != 0)) {
      return;
    }
    next_node = *(longlong *)(sibling_node + 0x10);
    resource_node = sibling_node;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_resource_collision(int32_t *collision_data)
// 功能: 处理资源碰撞检测和响应，包括空间分割和边界计算
// 原始实现: FUN_18013a920
// 简化实现: 保留原始的碰撞检测算法和空间分割逻辑
void process_resource_collision(int32_t *collision_data)

{
  byte *pbVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  char cVar9;
  int32_t uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int32_t extraout_XMM0_Da;
  float fVar18;
  float fVar19;
  int32_t *puStackX_8;
  float afStackX_10 [2];
  float *in_stack_fffffffffffffee8;
  int32_t uVar20;
  float afStack_e0 [2];
  uint64_t uStack_d8;
  float afStack_d0 [4];
  float fStack_c0;
  float fStack_bc;
  float afStack_b8 [4];
  int32_t uStack_a8;
  float fStack_a4;
  uint auStack_a0 [2];
  longlong *plStack_98;
  uint auStack_90 [2];
  longlong *aplStack_88 [10];
  
  lVar5 = *(longlong *)(param_1 + 4);
  lVar16 = _DAT_180c8a9b0;
  while( true ) {
    if (lVar5 == 0) {
      _DAT_180c8a9b0 = lVar16;
      return;
    }
    uVar20 = (int32_t)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
    puVar6 = *(int32_t **)(param_1 + 4);
    puVar7 = *(int32_t **)(param_1 + 6);
    _DAT_180c8a9b0 = lVar16;
    if ((*(byte *)(puVar6 + 0x28) & 4) != 0) {
      if ((*(byte *)(puVar7 + 0x28) & 4) != 0) {
        iVar4 = param_1[0x14];
        uVar15 = (ulonglong)iVar4;
        afStack_e0[0] = (float)puVar6[0xe];
        afStack_e0[1] = (float)puVar6[0xf];
        uStack_d8 = *(uint64_t *)(puVar7 + 0xe);
        lVar5 = uVar15 * 4;
        afStack_e0[uVar15] = (float)puVar6[uVar15 + 0x10] + afStack_e0[uVar15];
        uVar12 = uVar15 ^ 1;
        *(float *)((longlong)&uStack_d8 + uVar12 * 4) =
             (float)puVar7[uVar12 + 0x10] + *(float *)((longlong)&uStack_d8 + uVar12 * 4);
        if ((*(byte *)(param_1 + 1) & 0x20) == 0) {
          FUN_18012e2d0(*param_1);
          FUN_1808fc838(auStack_a0,0x10,2,&SUB_18013d940,FUN_18011d900);
          fVar3 = *(float *)(lVar5 + 0x163c + lVar16);
          fVar19 = fVar3 + *(float *)(lVar5 + 0x38 + *(longlong *)(param_1 + 4));
          fVar18 = (*(float *)(lVar5 + 0x40 + *(longlong *)(param_1 + 6)) +
                   *(float *)(lVar5 + 0x38 + *(longlong *)(param_1 + 6))) - fVar3;
          iVar11 = FUN_18012e350(&UNK_180a065b8);
          if (*(int *)(lVar16 + 0x1b2c) == iVar11) {
            lVar5 = *(longlong *)(puVar6 + 4);
            puStackX_8 = puVar6;
            if (lVar5 == 0) {
              FUN_18013d860(auStack_a0,&puStackX_8);
            }
            else {
              if (((*(byte *)(lVar5 + 0xa0) & 4) != 0) &&
                 ((puVar6[0x14] != iVar4 || ((*(byte *)(*(longlong *)(puVar6 + 6) + 0xa0) & 4) == 0)
                  ))) {
                FUN_18013a860(lVar5,iVar4,1,auStack_a0);
              }
              if ((*(byte *)(*(longlong *)(puVar6 + 6) + 0xa0) & 4) != 0) {
                FUN_18013a860(*(longlong *)(puVar6 + 6),iVar4,1,auStack_a0);
              }
            }
            lVar5 = *(longlong *)(puVar7 + 4);
            puStackX_8 = puVar7;
            if (lVar5 == 0) {
              FUN_18013d860(auStack_90,&puStackX_8);
            }
            else {
              if ((*(byte *)(lVar5 + 0xa0) & 4) != 0) {
                FUN_18013a860(lVar5,iVar4,0,auStack_90);
              }
              if (((*(byte *)(*(longlong *)(puVar7 + 6) + 0xa0) & 4) != 0) &&
                 ((puVar7[0x14] != iVar4 || ((*(byte *)(*(longlong *)(puVar7 + 4) + 0xa0) & 4) == 0)
                  ))) {
                FUN_18013a860(*(longlong *)(puVar7 + 6),iVar4,0,auStack_90);
              }
            }
            if (0 < (int)auStack_a0[0]) {
              uVar12 = (ulonglong)auStack_a0[0];
              plVar13 = plStack_98;
              do {
                lVar5 = *plVar13;
                afStack_d0[0] = *(float *)(lVar5 + 0x38);
                afStack_d0[1] = *(float *)(lVar5 + 0x3c);
                afStack_d0[2] = *(float *)(lVar5 + 0x38) + *(float *)(lVar5 + 0x40);
                afStack_d0[3] = *(float *)(lVar5 + 0x3c) + *(float *)(lVar5 + 0x44);
                if (fVar19 <= fVar3 + afStack_d0[uVar15]) {
                  fVar19 = fVar3 + afStack_d0[uVar15];
                }
                plVar13 = plVar13 + 1;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            if (0 < (int)auStack_90[0]) {
              uVar12 = (ulonglong)auStack_90[0];
              plVar13 = aplStack_88[0];
              do {
                lVar5 = *plVar13;
                fStack_c0 = *(float *)(lVar5 + 0x38);
                fStack_bc = *(float *)(lVar5 + 0x3c);
                afStack_b8[0] = *(float *)(lVar5 + 0x38) + *(float *)(lVar5 + 0x40);
                afStack_b8[1] = *(float *)(lVar5 + 0x3c) + *(float *)(lVar5 + 0x44);
                if (afStack_b8[uVar15] - fVar3 <= fVar18) {
                  fVar18 = afStack_b8[uVar15] - fVar3;
                }
                plVar13 = plVar13 + 1;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
          }
          lVar5 = _DAT_180c8a9b0;
          puStackX_8 = (int32_t *)CONCAT44(puStackX_8._4_4_,puVar6[uVar15 + 0x10]);
          afStackX_10[0] = (float)puVar7[uVar15 + 0x10];
          fVar3 = (float)puVar6[uVar15 + 0xe];
          iVar11 = FUN_180121250((afStackX_10[0] + (float)puVar7[uVar15 + 0xe]) - fVar18,0,
                                 *(int32_t *)
                                  (*(longlong *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x220) +
                                   -4 + (longlong)
                                        *(int *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x218) * 4
                                  ));
          if (*(int *)(lVar5 + 0x1b2c) == iVar11) {
            *(int *)(lVar5 + 0x1b34) = iVar11;
          }
          if (*(int *)(lVar5 + 0x1b30) == iVar11) {
            *(int8_t *)(lVar5 + 0x1b3f) = 1;
          }
          in_stack_fffffffffffffee8 = afStackX_10;
          cVar9 = FUN_180112630(afStack_e0,iVar11,iVar4,&puStackX_8,in_stack_fffffffffffffee8,
                                fVar19 - fVar3,extraout_XMM0_Da);
          lVar5 = _DAT_180c8a9b0;
          if (((cVar9 != '\0') && (0 < (int)auStack_a0[0])) && (0 < (int)auStack_90[0])) {
            puVar6[uVar15 + 0x12] = puStackX_8._0_4_;
            puVar6[uVar15 + 0x10] = puStackX_8._0_4_;
            puVar7[uVar15 + 0xe] =
                 (float)puVar7[uVar15 + 0xe] - (afStackX_10[0] - (float)puVar7[uVar15 + 0x10]);
            puVar7[uVar15 + 0x12] = afStackX_10[0];
            puVar7[uVar15 + 0x10] = afStackX_10[0];
            lVar16 = 0;
            do {
              iVar11 = 0;
              if (0 < (int)auStack_a0[lVar16 * 4]) {
                lVar17 = 0;
                do {
                  lVar14 = *(longlong *)(lVar17 + *(longlong *)(auStack_90 + lVar16 * 4 + -2));
                  puVar8 = *(int32_t **)(lVar14 + 8);
                  while (puVar8 != param_1) {
                    plVar13 = (longlong *)(lVar14 + 8);
                    lVar14 = *plVar13;
                    if (*(int *)(lVar14 + 0x50) == iVar4) {
                      pbVar1 = (byte *)(*(longlong *)(lVar14 + 0x10 + lVar16 * 8) + 0xa1);
                      *pbVar1 = *pbVar1 | 4;
                      lVar14 = *plVar13;
                    }
                    puVar8 = *(int32_t **)(lVar14 + 8);
                  }
                  iVar11 = iVar11 + 1;
                  lVar17 = lVar17 + 8;
                } while (iVar11 < (int)auStack_a0[lVar16 * 4]);
              }
              iVar11 = 0;
              if (0 < (int)auStack_90[lVar16 * 4]) {
                lVar17 = 0;
                do {
                  lVar14 = *(longlong *)(lVar17 + (longlong)aplStack_88[lVar16 * 2]);
                  puVar8 = *(int32_t **)(lVar14 + 8);
                  while (puVar8 != param_1) {
                    plVar13 = (longlong *)(lVar14 + 8);
                    lVar14 = *plVar13;
                    if (*(int *)(lVar14 + 0x50) == iVar4) {
                      pbVar1 = (byte *)(*(longlong *)(lVar14 + 0x18 + lVar16 * 8) + 0xa1);
                      *pbVar1 = *pbVar1 | 4;
                      lVar14 = *plVar13;
                    }
                    puVar8 = *(int32_t **)(lVar14 + 8);
                  }
                  iVar11 = iVar11 + 1;
                  lVar17 = lVar17 + 8;
                } while (iVar11 < (int)auStack_90[lVar16 * 4]);
              }
              lVar16 = lVar16 + 2;
            } while (lVar16 < 2);
            FUN_18013a5e0(puVar6,*(uint64_t *)(puVar6 + 0xe),*(uint64_t *)(puVar6 + 0x10));
            FUN_18013a5e0(puVar7,*(uint64_t *)(puVar7 + 0xe),*(uint64_t *)(puVar7 + 0x10));
            if (*(float *)(lVar5 + 0x2e04) <= 0.0) {
              *(int32_t *)(lVar5 + 0x2e04) = *(int32_t *)(lVar5 + 0x1c);
            }
          }
          piVar2 = (int *)(*(longlong *)(lVar5 + 0x1af8) + 0x218);
          *piVar2 = *piVar2 + -1;
          FUN_1808fc8a8(auStack_a0,0x10,2,FUN_18011d900);
        }
        else {
          afStack_b8[2] = *(float *)(lVar16 + 0x1878);
          afStack_b8[3] = *(float *)(lVar16 + 0x187c);
          uStack_a8 = *(int32_t *)(lVar16 + 0x1880);
          fStack_a4 = *(float *)(lVar16 + 0x1884) * *(float *)(lVar16 + 0x1628);
          uVar10 = func_0x000180121e20(afStack_b8 + 2);
          in_stack_fffffffffffffee8 = (float *)CONCAT44(uVar20,*(int32_t *)(lVar16 + 0x1664));
          FUN_180293f50(*(uint64_t *)(*(longlong *)(lVar16 + 0x1af8) + 0x2e8),afStack_e0,
                        &uStack_d8,uVar10,in_stack_fffffffffffffee8,0xf);
        }
      }
      if ((*(byte *)(puVar6 + 0x28) & 4) != 0) {
        FUN_18013a920(puVar6);
      }
    }
    if ((*(byte *)(puVar7 + 0x28) & 4) == 0) break;
    lVar5 = *(longlong *)(puVar7 + 4);
    param_1 = puVar7;
    lVar16 = _DAT_180c8a9b0;
  }
  return;
}



// 函数: longlong find_next_resource_node(longlong node_ptr)
// 功能: 查找下一个有效资源节点，用于节点遍历和搜索
// 原始实现: FUN_18013aed0
// 简化实现: 保留原始的递归遍历逻辑
longlong find_next_resource_node(longlong node_ptr)

{
  longlong next_node;
  longlong child_node;
  
  while( true ) {
    child_node = *(longlong *)(node_ptr + 0x10);
    if (child_node == 0) {
      return node_ptr;
    }
    next_node = find_next_resource_node(child_node);
    if (next_node != 0) break;
    node_ptr = *(longlong *)(node_ptr + 0x18);
  }
  return next_node;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: longlong find_resource_by_position(longlong node_ptr,uint64_t position_coords)
// 功能: 根据位置坐标查找资源节点，用于空间搜索和定位
// 原始实现: FUN_18013af10
// 简化实现: 保留原始的边界检查和递归查找逻辑
longlong find_resource_by_position(longlong node_ptr,uint64_t position_coords)

{
  longlong found_node;
  float boundary_half_size;
  float position_x;
  float position_y;
  longlong child_node;
  longlong sibling_node;
  
  if ((*(byte *)(node_ptr + 0xa0) & 4) != 0) {
    position_x = (float)position_coords;
    boundary_half_size = *(float *)(_DAT_180c8a9b0 + 0x1674) * 0.5;
    if ((((*(float *)(node_ptr + 0x38) - boundary_half_size <= position_x) &&
         (position_y = (float)((ulonglong)position_coords >> 0x20),
         *(float *)(node_ptr + 0x3c) - boundary_half_size <= position_y)) &&
        (position_x < *(float *)(node_ptr + 0x38) + *(float *)(node_ptr + 0x40) + boundary_half_size)) &&
       (position_y < *(float *)(node_ptr + 0x3c) + *(float *)(node_ptr + 0x44) + boundary_half_size)) {
      if (*(longlong *)(node_ptr + 0x10) == 0) {
        return node_ptr;
      }
      found_node = find_resource_by_position(*(longlong *)(node_ptr + 0x10),position_coords);
      if (found_node != 0) {
        return found_node;
      }
      found_node = find_resource_by_position(*(uint64_t *)(node_ptr + 0x18),position_coords);
      if (found_node != 0) {
        return found_node;
      }
      if (((*(byte *)(node_ptr + 0xa0) & 0x10) != 0) && (*(longlong *)(node_ptr + 8) == 0)) {
        if ((*(longlong *)(node_ptr + 0x78) != 0) && (*(longlong *)(node_ptr + 0x10) == 0)) {
          return *(longlong *)(node_ptr + 0x78);
        }
        if (*(longlong *)(node_ptr + 0x10) == 0) {
          return node_ptr;
        }
        child_node = *(longlong *)(node_ptr + 0x10);
        found_node = find_next_resource_node(child_node);
        if (found_node != 0) {
          return found_node;
        }
        sibling_node = *(longlong *)(node_ptr + 0x18);
        found_node = find_next_resource_node(sibling_node);
        return found_node;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void update_resource_priority(longlong node_ptr,int priority_value,uint flags_mask)
// 功能: 更新资源节点的优先级，管理资源处理顺序
// 原始实现: FUN_18013b040
// 简化实现: 保留原始的优先级更新逻辑
void update_resource_priority(longlong node_ptr,int priority_value,uint flags_mask)

{
  longlong material_list;
  longlong current_material;
  longlong last_material;
  
  if (((flags_mask == 0) || ((*(uint *)(node_ptr + 0xec) & flags_mask) != 0)) &&
     (*(uint *)(node_ptr + 0xec) = *(uint *)(node_ptr + 0xec) & 0xfffffff1,
     *(int *)(node_ptr + 0x418) != priority_value)) {
    material_list = FUN_180121fa0(*(uint64_t *)(_DAT_180c8a9b0 + 0x2df8));
    if ((material_list != 0) && (*(longlong *)(material_list + 0x10) != 0)) {
      current_material = *(longlong *)(material_list + 8);
      while (last_material = current_material, last_material != 0) {
        material_list = last_material;
        current_material = *(longlong *)(last_material + 8);
      }
      if (*(int **)(material_list + 0x78) == (int *)0x0) {
        priority_value = *(int *)(material_list + 0x94);
      }
      else {
        priority_value = **(int **)(material_list + 0x78);
      }
    }
    if (*(int *)(node_ptr + 0x418) != priority_value) {
      if (*(longlong *)(node_ptr + 0x408) != 0) {
        FUN_180136d40(*(longlong *)(node_ptr + 0x408),node_ptr,0);
      }
      *(int *)(node_ptr + 0x418) = priority_value;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void cleanup_resource_system(int cleanup_mode)
// 功能: 清理资源系统，释放内存和重置状态
// 原始实现: FUN_18013b0f0
// 简化实现: 保留原始的清理逻辑
void cleanup_resource_system(int cleanup_mode)

{
  int *resource_array;
  int *resource_ptr;
  int *resource_link;
  longlong global_context;
  bool needs_cleanup;
  bool has_special_flags;
  uint array_size;
  int *resource_data;
  uint64_t *resource_table;
  ulonglong table_index;
  uint64_t *table_entry;
  uint entry_count;
  int loop_counter;
  ulonglong temp_index;
  uint new_size;
  uint64_t *temp_array;
  int temp_int;
  uint64_t *temp_ptr;
  longlong resource_node;
  uint64_t *array_ptr;
  uint64_t *list_ptr;
  longlong context_handle;
  uint64_t cleanup_mask;
  uint64_t cleanup_flags;
  uint64_t *cleanup_buffer;
  longlong lVar4;
  ulonglong uVar22;
  int *piVar1;
  longlong lStackX_18;
  uint64_t *puVar16;
  bool bVar6;
  bool bVar5;
  ulonglong uVar23;
  ulonglong uVar12;
  uint64_t *puVar24;
  uint64_t *puVar11;
  uint64_t *puVar18;
  uint64_t *puVar20;
  uint64_t *puVar21;
  uint64_t *puVar9;
  longlong lVar19;
  ulonglong uVar10;
  int *piVar2;
  longlong lVar19_2;
  ulonglong uVar14;
  ulonglong uVar12_2;
  int iVar13;
  ulonglong uVar7;
  ulonglong uVar15;
  int iVar17;
  int *piVar3;
  int *piVar8;
  uint uVar12_3;
  ulonglong uVar7_2;
  
  lVar4 = _DAT_180c8a9b0;
  uVar22 = 0xfffffffffffffffe;
  piVar1 = *(int **)(_DAT_180c8a9b0 + 0x2df8);
  if (param_1 == 0) {
    lStackX_18 = 0;
  }
  else {
    lStackX_18 = FUN_180121fa0(piVar1);
    if (lStackX_18 == 0) {
      return;
    }
  }
  puVar16 = (uint64_t *)0x0;
  bVar6 = false;
  bVar5 = false;
  uVar23 = 0;
  uVar12 = 0;
  puVar24 = (uint64_t *)0x0;
  puVar11 = puVar16;
  puVar18 = puVar16;
  puVar20 = puVar16;
  puVar21 = puVar16;
  puVar9 = puVar16;
  if (0 < *piVar1) {
    do {
      lVar19 = 1;
      uVar10 = 0;
      piVar2 = *(int **)((longlong)puVar20 + *(longlong *)(piVar1 + 2) + 8);
      puVar9 = puVar21;
      if (piVar2 != (int *)0x0) {
        if (param_1 == 0) {
LAB_18013b1d6:
          bVar5 = bVar6;
          if ((*(byte *)(piVar2 + 0x28) & 0x20) != 0) {
            bVar5 = true;
          }
          if ((param_1 != 0) &&
             (lVar19 = *(longlong *)(lVar4 + 0x2df8), uVar14 = uVar10, 0 < *(int *)(lVar19 + 0x10)))
          {
            do {
              if (*(int **)(uVar10 + 0x10 + *(longlong *)(lVar19 + 0x18)) == piVar2) {
                *(int32_t *)(uVar10 + *(longlong *)(lVar19 + 0x18)) = 0;
              }
              uVar12 = (int)uVar14 + 1;
              uVar10 = uVar10 + 0x40;
              uVar14 = (ulonglong)uVar12;
            } while ((int)uVar12 < *(int *)(lVar19 + 0x10));
          }
          if (lStackX_18 != 0) {
            FUN_180136f60(lStackX_18,piVar2,lVar19,lStackX_18,uVar22,uVar23,puVar24);
          }
          uVar12 = (uint)((ulonglong)uVar23 >> 0x20);
          iVar13 = (int)puVar18;
          iVar17 = (int)puVar11;
          if (iVar17 == iVar13) {
            if (iVar13 == 0) {
              uVar7 = 8;
            }
            else {
              uVar7 = iVar13 / 2 + iVar13;
            }
            uVar15 = iVar17 + 1U;
            if ((int)(iVar17 + 1U) < (int)uVar7) {
              uVar15 = uVar7;
            }
            if (iVar13 < (int)uVar15) {
              if (_DAT_180c8a9b0 != 0) {
                *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
              }
              puVar9 = (uint64_t *)func_0x000180120ce0((longlong)(int)uVar15 << 3,_DAT_180c8a9a8);
              if (puVar21 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
                memcpy(puVar9,puVar21,(longlong)iVar17 << 3);
              }
              puVar18 = (uint64_t *)(ulonglong)uVar15;
              puVar24 = puVar9;
              uVar12 = uVar15;
            }
          }
          puVar9[iVar17] = piVar2;
          puVar11 = (uint64_t *)(ulonglong)(iVar17 + 1U);
          uVar23 = CONCAT44(uVar12,iVar17 + 1U);
          bVar6 = bVar5;
        }
        else {
          iVar17 = *piVar2;
          if (iVar17 != param_1) {
            piVar3 = *(int **)(piVar2 + 2);
            if (*(int **)(piVar2 + 2) != (int *)0x0) {
              do {
                piVar8 = piVar3;
                piVar3 = *(int **)(piVar8 + 2);
              } while (piVar3 != (int *)0x0);
              iVar17 = *piVar8;
            }
            if (iVar17 == param_1) goto LAB_18013b1d6;
          }
        }
      }
      uVar12 = (uint)puVar11;
      uVar7 = (int)puVar16 + 1;
      puVar16 = (uint64_t *)(ulonglong)uVar7;
      puVar20 = puVar20 + 2;
      puVar21 = puVar9;
    } while ((int)uVar7 < *piVar1);
  }
  uVar10 = 0;
  if (lStackX_18 != 0) {
    *(byte *)(lStackX_18 + 0xa0) = *(byte *)(lStackX_18 + 0xa0) & 0xfe;
  }
  uVar14 = uVar10;
  if (0 < *(int *)(lVar4 + 0x2e28)) {
    do {
      iVar17 = *(int *)(*(longlong *)(lVar4 + 0x2e30) + 0x28 + uVar14);
      if ((iVar17 != 0) && (iVar13 = 0, puVar11 = puVar9, 0 < (int)uVar12)) {
        do {
          if (*(int *)*puVar11 == iVar17) {
            *(int *)(*(longlong *)(lVar4 + 0x2e30) + 0x28 + uVar14) = param_1;
            break;
          }
          iVar13 = iVar13 + 1;
          puVar11 = puVar11 + 1;
        } while (iVar13 < (int)uVar12);
      }
      uVar7 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar7;
      uVar14 = uVar14 + 0x38;
    } while ((int)uVar7 < *(int *)(lVar4 + 0x2e28));
  }
  if (1 < (int)uVar12) {
    qsort(puVar9,(longlong)(int)uVar12,8,&UNK_180135af0);
  }
  if (0 < (int)uVar12) {
    uVar10 = (ulonglong)uVar12;
    puVar11 = puVar9;
    do {
      FUN_1801359f0(lVar4,*puVar11,0);
      puVar11 = puVar11 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (param_1 == 0) {
    lVar4 = *(longlong *)(piVar1 + 2);
    if (lVar4 != 0) {
      piVar1[0] = 0;
      piVar1[1] = 0;
      if (_DAT_180c8a9b0 != 0) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar4,_DAT_180c8a9a8);
    }
    lVar4 = *(longlong *)(piVar1 + 6);
    if (lVar4 != 0) {
      piVar1[4] = 0;
      piVar1[5] = 0;
      if (_DAT_180c8a9b0 != 0) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar4,_DAT_180c8a9a8);
    }
  }
  else if (bVar5) {
    *(byte *)(lStackX_18 + 0xa0) = *(byte *)(lStackX_18 + 0xa0) | 0x20;
  }
  if (puVar9 == (uint64_t *)0x0) {
    return;
  }
  if (_DAT_180c8a9b0 != 0) {
    *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0(puVar9,_DAT_180c8a9a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void reset_resource_states(uint64_t reset_context,char reset_flag)
// 功能: 重置资源状态，清除临时数据和标志位
// 原始实现: FUN_18013b490
// 简化实现: 保留原始的状态重置逻辑
void reset_resource_states(uint64_t reset_context,char reset_flag)

{
  int *state_array;
  longlong *resource_ptr;
  longlong resource_handle;
  longlong global_context;
  ulonglong state_index;
  ulonglong resource_index;
  uint state_count;
  ulonglong preserve_flags;
  ulonglong loop_counter;
  longlong lVar4;
  ulonglong uVar9;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar8;
  
  lVar4 = _DAT_180c8a9b0;
  uVar9 = 0;
  if ((param_2 != '\0') && (uVar5 = uVar9, uVar6 = uVar9, 0 < *(int *)(_DAT_180c8a9b0 + 0x2e28))) {
    do {
      uVar7 = (int)uVar6 + 1;
      *(int32_t *)(uVar5 + 0x28 + *(longlong *)(lVar4 + 0x2e30)) = 0;
      uVar5 = uVar5 + 0x38;
      uVar6 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(lVar4 + 0x2e28));
  }
  piVar1 = (int *)(lVar4 + 0x1aa0);
  if (0 < *piVar1) {
    plVar2 = (longlong *)(lVar4 + 0x1aa8);
    uVar5 = uVar9;
    uVar6 = uVar9;
    do {
      lVar3 = *(longlong *)(uVar5 + *plVar2);
      if (*(longlong *)(lVar3 + 0x408) == 0) {
        *(int32_t *)(lVar3 + 0x418) = 0;
      }
      else {
        uVar8 = uVar9;
        if (param_2 == '\0') {
          uVar8 = (ulonglong)*(uint *)(lVar3 + 0x418);
        }
        FUN_180136d40(*(longlong *)(lVar3 + 0x408),lVar3,uVar8);
        lVar4 = _DAT_180c8a9b0;
      }
      *(byte *)(lVar3 + 0x432) = *(byte *)(lVar3 + 0x432) & 0xfc;
      *(int8_t *)(lVar3 + 0xb2) = 0;
      if (*(float *)(lVar4 + 0x2e04) <= 0.0) {
        *(int32_t *)(lVar4 + 0x2e04) = *(int32_t *)(lVar4 + 0x1c);
      }
      uVar7 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar7;
      uVar5 = uVar5 + 8;
    } while ((int)uVar7 < *piVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void update_resource_batch(longlong batch_context)
// 功能: 批量更新资源状态，优化性能和减少系统调用
// 原始实现: FUN_18013b4f0
// 简化实现: 保留原始的批量更新逻辑
void update_resource_batch(longlong batch_context)

{
  longlong *resource_array;
  longlong resource_handle;
  int *batch_count;
  ulonglong array_index;
  int processed_count;
  ulonglong update_flags;
  ulonglong batch_offset;
  char update_flag;
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  plVar1 = (longlong *)(param_1 + 0x1aa8);
  uVar3 = unaff_R12;
  do {
    lVar2 = *(longlong *)(uVar3 + *plVar1);
    if (*(longlong *)(lVar2 + 0x408) == 0) {
      *(int *)(lVar2 + 0x418) = (int)unaff_R12;
    }
    else {
      uVar4 = unaff_R12 & 0xffffffff;
      if (unaff_R14B == '\0') {
        uVar4 = (ulonglong)*(uint *)(lVar2 + 0x418);
      }
      FUN_180136d40(*(longlong *)(lVar2 + 0x408),lVar2,uVar4);
      param_1 = _DAT_180c8a9b0;
    }
    *(byte *)(lVar2 + 0x432) = *(byte *)(lVar2 + 0x432) & 0xfc;
    *(char *)(lVar2 + 0xb2) = (char)unaff_R12;
    if (*(float *)(param_1 + 0x2e04) <= 0.0) {
      *(int32_t *)(param_1 + 0x2e04) = *(int32_t *)(param_1 + 0x1c);
    }
    unaff_EDI = unaff_EDI + 1;
    uVar3 = uVar3 + 8;
  } while (unaff_EDI < *unaff_RBP);
  return;
}





// 函数: void empty_resource_handler(void)
// 功能: 空资源处理器，用于特殊情况处理和占位
// 原始实现: FUN_18013b58d
// 简化实现: 保留原始的空实现
void empty_resource_handler(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_resource_interaction(uint64_t *resource_data,int8_t *interaction_result)
// 功能: 处理资源交互，包括碰撞检测、状态更新和事件触发
// 原始实现: FUN_18013b5a0
// 简化实现: 保留原始的交互处理逻辑
void process_resource_interaction(uint64_t *resource_data,int8_t *interaction_result)

{
  uint resource_flags;
  longlong material_handle;
  int *priority_array;
  longlong context_data;
  bool is_active;
  byte interaction_type;
  int16_t resource_id;
  int32_t priority_value;
  longlong resource_node;
  int *array_ptr;
  uint update_flags;
  ulonglong search_index;
  longlong global_context;
  int match_count;
  ulonglong loop_counter;
  longlong temp_context;
  byte state_flags;
  longlong lVar13;
  bool bVar6;
  bool bVar5;
  longlong lVar9;
  longlong lVar16;
  ulonglong uVar8;
  ulonglong uVar12;
  longlong lVar2;
  longlong lVar4;
  longlong lVar2_2;
  bool bVar17;
  uint uVar1;
  uint uVar11;
  int *piVar3;
  int *piVar10;
  ulonglong uVar15;
  int iVar14;
  ulonglong uVar7;
  int16_t uVar7_2;
  
  lVar13 = _DAT_180c8a9b0;
  if ((*(char *)(_DAT_180c8a9b0 + 0xc2) == '\0') ||
     ((*(uint *)((longlong)param_1 + 0xc) & 0x1200001) != 0)) {
    bVar6 = (byte)(*(uint *)((longlong)param_1 + 0xc) >> 0x15) & 1;
    bVar5 = false;
    if ((*(uint *)(_DAT_180c8a9b0 + 0x1bd0) != 0) &&
       (((*(uint *)(param_1 + 0x1c) & *(uint *)(_DAT_180c8a9b0 + 0x1bd0)) != 0 &&
        (*(char *)(_DAT_180c8a9b0 + 0x1c14) != '\0')))) {
      bVar6 = 1;
    }
    *(int8_t *)(_DAT_180c8a9b0 + 0x1c14) = 0;
    if (bVar6 != 0) {
      if (param_1[0x81] == 0) {
        *(int32_t *)(param_1 + 0x83) = 0;
      }
      else {
        FUN_180136d40(param_1[0x81],param_1,0);
        lVar13 = _DAT_180c8a9b0;
      }
      *(byte *)((longlong)param_1 + 0x432) = *(byte *)((longlong)param_1 + 0x432) & 0xfc;
      *(int8_t *)((longlong)param_1 + 0xb2) = 0;
      if (0.0 < *(float *)(lVar13 + 0x2e04)) {
        return;
      }
      *(int32_t *)(lVar13 + 0x2e04) = *(int32_t *)(lVar13 + 0x1c);
      return;
    }
  }
  else {
    bVar5 = true;
    if (*(int *)(param_1 + 0x83) == 0) {
      uVar8 = FUN_1801358c0(_DAT_180c8a9b0);
      *(int32_t *)(param_1 + 0x83) = uVar8;
    }
  }
  uVar12 = 0;
  lVar9 = param_1[0x81];
  lVar16 = lVar13;
  if ((*(int *)(param_1 + 0x83) != 0) && (lVar9 == 0)) {
    lVar9 = FUN_180121fa0(*(uint64_t *)(lVar13 + 0x2df8),*(int32_t *)(param_1 + 0x83));
    if (lVar9 == 0) {
      lVar9 = FUN_180135960(lVar13,*(int32_t *)(param_1 + 0x83));
      if (bVar5) {
        *(int32_t *)(lVar9 + 0x88) = *(int32_t *)(lVar13 + 0x1a90);
      }
    }
    else if (*(longlong *)(lVar9 + 0x10) != 0) {
      if (param_1[0x81] == 0) {
        *(int32_t *)(param_1 + 0x83) = 0;
        *(int8_t *)((longlong)param_1 + 0xb2) = 0;
      }
      else {
        FUN_180136d40(param_1[0x81],param_1,0);
        lVar13 = _DAT_180c8a9b0;
        *(int8_t *)((longlong)param_1 + 0xb2) = 0;
      }
      goto LAB_18013b83c;
    }
    FUN_180136b10(lVar9,param_1,1);
    lVar16 = _DAT_180c8a9b0;
    *(uint64_t *)(_DAT_180c8a9b0 + 0x1bf4) = param_1[8];
    *(uint64_t *)(lVar16 + 0x1bfc) = 0;
    *(int32_t *)(lVar16 + 0x1bd0) = 1;
    *(int8_t *)(lVar16 + 0x1c14) = 1;
    *(uint64_t *)(lVar16 + 0x1c04) = param_1[10];
    *(int32_t *)(lVar16 + 0x1bd4) = 1;
    *(int8_t *)(lVar13 + 0x1c14) = 0;
  }
  if (((*(byte *)(lVar9 + 0xa0) & 0x20) == 0) || ((*(byte *)(lVar9 + 4) & 8) == 0)) {
    if (*(int *)(lVar9 + 0x88) < *(int *)(lVar13 + 0x1a90)) {
      lVar2 = *(longlong *)(lVar9 + 8);
      while (lVar4 = lVar2, lVar4 != 0) {
        lVar9 = lVar4;
        lVar2 = *(longlong *)(lVar4 + 8);
      }
      if (*(int *)(lVar13 + 0x1a90) <= *(int *)(lVar9 + 0x88)) {
        *(byte *)((longlong)param_1 + 0x432) = *(byte *)((longlong)param_1 + 0x432) & 0xfd | 1;
        return;
      }
    }
    else {
      lVar2 = *(longlong *)(lVar9 + 0x68);
      if (lVar2 == 0) {
LAB_18013b872:
        *(byte *)((longlong)param_1 + 0x432) = *(byte *)((longlong)param_1 + 0x432) & 0xfd;
        return;
      }
      if (*(short *)(lVar2 + 0xbc) <= *(short *)((longlong)param_1 + 0xbc)) {
        if (lVar2 != 0) {
          *(uint64_t *)(lVar16 + 0x1bf4) = *(uint64_t *)(lVar9 + 0x38);
          *(uint64_t *)(lVar16 + 0x1bfc) = 0;
          *(int32_t *)(lVar16 + 0x1bd0) = 1;
          *(int8_t *)(lVar16 + 0x1c14) = 1;
          *(uint64_t *)(lVar16 + 0x1c04) = *(uint64_t *)(lVar9 + 0x40);
          *(int32_t *)(lVar16 + 0x1bd4) = 1;
          *(int8_t *)(lVar13 + 0x1c14) = 0;
          bVar6 = *(byte *)((longlong)param_1 + 0x432) & 0xfd;
          bVar17 = bVar6 | 1;
          *(byte *)((longlong)param_1 + 0x432) = bVar17;
          if ((*(byte *)(lVar9 + 4) & 1) != 0) {
            return;
          }
          lVar13 = *(longlong *)(lVar9 + 0x30);
          if ((lVar13 != 0) && (*(int *)(lVar13 + 0x1c) == *(int *)(param_1 + 1))) {
            bVar17 = bVar6 | 3;
            *(byte *)((longlong)param_1 + 0x432) = bVar17;
            lVar13 = *(longlong *)(lVar9 + 0x30);
          }
          if ((((bVar17 & 2) == 0) && (lVar13 != 0)) &&
             (*(int *)(lVar13 + 0x18) == *(int *)(param_1 + 1))) {
            *(int32_t *)((longlong)param_1 + 0xdc) = 2;
          }
          uVar1 = *(uint *)((longlong)param_1 + 0xc);
          *(uint *)((longlong)param_1 + 0xc) = uVar1 | 0x1010002;
          uVar11 = uVar1 & 0xfffffffe | 0x1010002;
          if ((*(byte *)(lVar9 + 0xa0) & 0x40) != 0) {
            uVar11 = uVar1 | 0x1010003;
          }
          *(uint *)((longlong)param_1 + 0xc) = uVar11;
          if (*(longlong *)(lVar9 + 0x30) != 0) {
            piVar3 = *(int **)(param_1[0x81] + 0x30);
            if (((piVar3 != (int *)0x0) && (*(int *)(param_1 + 1) != 0)) && (0 < *piVar3)) {
              piVar10 = *(int **)(piVar3 + 2);
              uVar15 = uVar12;
              do {
                iVar14 = (int)uVar15;
                if (*piVar10 == *(int *)(param_1 + 1)) {
                  if (*(int **)(piVar3 + 2) + (longlong)iVar14 * 10 != (int *)0x0) {
                    uVar7 = (int16_t)(((longlong)iVar14 * 0x28) / 0x28);
                    goto LAB_18013b999;
                  }
                  break;
                }
                uVar15 = (ulonglong)(iVar14 + 1);
                uVar12 = uVar12 + 1;
                piVar10 = piVar10 + 10;
              } while ((longlong)uVar12 < (longlong)*piVar3);
            }
            uVar7 = 0xffff;
LAB_18013b999:
            *(int16_t *)(param_1 + 0x86) = uVar7;
          }
          if ((((*(byte *)(lVar9 + 0xa1) & 2) != 0) ||
              (*(int *)(lVar9 + 0x9c) == *(int *)(param_1 + 1))) && (param_2 != (int8_t *)0x0))
          {
            *param_2 = 0;
          }
          uVar8 = FUN_180123c00(*(uint64_t *)(param_1[0x81] + 0x68),*param_1);
          *(int32_t *)(param_1 + 0x11) = uVar8;
          return;
        }
        goto LAB_18013b872;
      }
    }
  }
  if (param_1[0x81] == 0) {
    *(int32_t *)(param_1 + 0x83) = 0;
    lVar13 = lVar16;
  }
  else {
    FUN_180136d40(param_1[0x81],param_1,0);
    lVar13 = _DAT_180c8a9b0;
  }
  *(int8_t *)((longlong)param_1 + 0xb2) = 0;
LAB_18013b83c:
  *(byte *)((longlong)param_1 + 0x432) = *(byte *)((longlong)param_1 + 0x432) & 0xfc;
  if (0.0 < *(float *)(lVar13 + 0x2e04)) {
    return;
  }
  *(int32_t *)(lVar13 + 0x2e04) = *(int32_t *)(lVar13 + 0x1c);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



