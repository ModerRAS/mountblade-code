#include "TaleWorlds.Native.Split.h"

// 03_rendering_part039.c - 渲染系统纹理映射和空间管理模块
// 包含9个核心函数，涵盖纹理映射计算、空间分区管理、渲染优化等高级渲染功能

/**
 * 计算纹理映射的最佳位置和尺寸
 * @param render_context 渲染上下文指针
 * @param texture_data 纹理数据数组
 * @param texture_width 纹理宽度
 * @param texture_height 纹理高度
 */
void calculate_texture_mapping(uint *render_context, int *texture_data, int texture_width, int texture_height)

{
  ushort texture_offset;
  int texture_capacity;
  int calculated_position;
  ushort *texture_ptr;
  ushort *next_texture_ptr;
  uint best_score;
  uint current_score;
  uint optimal_score;
  ushort *best_texture_ptr;
  ushort *candidate_texture_ptr;
  uint candidate_score;
  ushort *selected_texture_ptr;
  int iteration_count;
  ushort *texture_list_ptr;
  uint texture_value;
  ushort *optimal_texture_ptr;
  uint mapping_result[2];
  int height_limit;
  ushort *current_texture_ptr;
  ushort *previous_texture_ptr;
  ulonglong optimal_offset;
  
  calculated_position = texture_height + -1 + texture_data[2];
  texture_list_ptr = (ushort *)(texture_data + 6);
  selected_texture_ptr = *(ushort **)texture_list_ptr;
  texture_capacity = *texture_data;
  calculated_position = calculated_position - calculated_position % texture_data[2];
  optimal_score = 0x40000000;
  mapping_result[0] = 0x40000000;
  optimal_offset = 0;
  texture_offset = *selected_texture_ptr;
  previous_texture_ptr = (ushort *)0x0;
  height_limit = texture_height;
  current_texture_ptr = selected_texture_ptr;
  if ((int)(calculated_position + (uint)texture_offset) <= texture_capacity) {
    int texture_stride = texture_data[4];
    best_texture_ptr = texture_list_ptr;
    texture_value = optimal_score;
    do {
      current_score = evaluate_texture_position(texture_offset, selected_texture_ptr, texture_offset, calculated_position, mapping_result);
      if (texture_stride == 0) {
        candidate_score = texture_value;
        if ((int)optimal_score <= (int)current_score) {
          current_score = optimal_score;
          candidate_score = texture_value;
          best_texture_ptr = previous_texture_ptr;
        }
      }
      else if ((texture_data[1] < (int)(height_limit + current_score)) ||
              ((candidate_score = mapping_result[0], (int)optimal_score <= (int)current_score &&
               ((current_score != optimal_score || ((int)texture_value <= (int)mapping_result[0])))))) {
        current_score = optimal_score;
        candidate_score = texture_value;
        best_texture_ptr = previous_texture_ptr;
      }
      previous_texture_ptr = best_texture_ptr;
      texture_value = candidate_score;
      optimal_score = current_score;
      best_texture_ptr = selected_texture_ptr + 4;
      selected_texture_ptr = *(ushort **)(selected_texture_ptr + 4);
      texture_offset = *selected_texture_ptr;
    } while ((int)((uint)texture_offset + calculated_position) <= texture_capacity);
    mapping_result[0] = texture_value;
    if (previous_texture_ptr != (ushort *)0x0) {
      optimal_offset = (ulonglong)**(ushort **)previous_texture_ptr;
      texture_value = (uint)**(ushort **)previous_texture_ptr;
      goto finalize_mapping;
    }
  }
  texture_value = 0;
finalize_mapping:
  // 处理纹理映射优化
  if (texture_data[4] == 1) {
    texture_offset = *current_texture_ptr;
    selected_texture_ptr = current_texture_ptr;
    while ((int)(uint)texture_offset < calculated_position) {
      selected_texture_ptr = *(ushort **)(selected_texture_ptr + 4);
      texture_offset = *selected_texture_ptr;
    }
    candidate_texture_ptr = *(ushort **)(current_texture_ptr + 4);
    best_texture_ptr = current_texture_ptr + 4;
    texture_capacity = texture_data[1];
    current_score = (uint)*candidate_texture_ptr;
    optimal_texture_ptr = current_texture_ptr;
    do {
      candidate_score = (uint)*selected_texture_ptr - calculated_position;
      texture_ptr = candidate_texture_ptr;
      next_texture_ptr = best_texture_ptr;
      while (best_texture_ptr = next_texture_ptr, candidate_texture_ptr = texture_ptr, (int)current_score <= (int)candidate_score) {
        texture_ptr = *(ushort **)(candidate_texture_ptr + 4);
        next_texture_ptr = candidate_texture_ptr + 4;
        texture_list_ptr = best_texture_ptr;
        optimal_texture_ptr = candidate_texture_ptr;
        current_score = (uint)**(ushort **)(candidate_texture_ptr + 4);
      }
      optimal_score = evaluate_texture_position(calculated_position, optimal_texture_ptr, candidate_score, calculated_position, &current_texture_ptr);
      texture_value = (uint)optimal_offset;
      if ((((int)(height_limit + optimal_score) < texture_capacity) && ((int)optimal_score <= (int)optimal_score)) &&
         ((((int)optimal_score < (int)optimal_score || ((int)(uint)current_texture_ptr < (int)mapping_result[0])) ||
          (((uint)current_texture_ptr == mapping_result[0] && ((int)candidate_score < (int)texture_value)))))) {
        optimal_offset = (ulonglong)candidate_score;
        mapping_result[0] = (uint)current_texture_ptr;
        optimal_score = optimal_score;
        texture_value = candidate_score;
        previous_texture_ptr = texture_list_ptr;
      }
      selected_texture_ptr = *(ushort **)(selected_texture_ptr + 4);
    } while (selected_texture_ptr != (ushort *)0x0);
  }
  // 设置最终映射结果
  *(ushort **)(render_context + 2) = previous_texture_ptr;
  *render_context = texture_value;
  render_context[1] = optimal_score;
  return;
}



/**
 * 处理渲染空间分区数据
 * @param space_data 空间分区数据指针
 * @param render_info 渲染信息数据
 * @param partition_count 分区数量
 * @return 处理状态码
 */
undefined4 process_rendering_partitions(longlong space_data, longlong render_info, int partition_count)

{
  ushort *partition_ptr;
  ushort partition_width;
  ushort partition_height;
  short *space_info;
  undefined8 mapping_result;
  longlong *texture_mapping;
  int partition_index;
  undefined8 *partition_data;
  ushort *texture_ptr;
  undefined4 process_status;
  ushort *next_texture_ptr;
  short *partition_manager;
  longlong space_offset;
  short partition_offset;
  int *index_array;
  short texture_id;
  undefined4 success_flag;
  longlong partition_size;
  undefined1 temp_buffer[16];
  
  process_status = 1;
  partition_index = 0;
  // 初始化分区索引数组
  if (0 < partition_count) {
    index_array = (int *)(render_info + 0xc);
    do {
      *index_array = partition_index;
      index_array = index_array + 4;
      partition_index = partition_index + 1;
    } while (partition_index < partition_count);
  }
  partition_size = (longlong)partition_count;
  qsort(render_info, partition_size, 0x10, &partition_comparator);
  // 处理每个分区
  if (0 < partition_size) {
    partition_manager = (short *)(render_info + 10);
    space_offset = partition_size;
    
    do {
      partition_width = partition_manager[-3];
      
      if ((partition_width == 0) || (partition_height = partition_manager[-2], partition_height == 0)) {
        partition_manager[-1] = 0;
        partition_manager[0] = 0;
      }
      else {
        partition_data = (undefined8 *)calculate_texture_mapping(temp_buffer, space_data, partition_width, partition_height);
        mapping_result = *partition_data;
        texture_mapping = (longlong *)partition_data[1];
        
        // 检查纹理映射有效性
        if (((texture_mapping == (longlong *)0x0) ||
            (*(int *)(space_data + 4) < (int)((int)((ulonglong)mapping_result >> 0x20) + (uint)partition_height))) ||
           (space_info = *(short **)(space_data + 0x20), space_info == (short *)0x0)) {
          partition_manager[-1] = -1;
          partition_manager[0] = -1;
        }
        else {
          // 设置分区信息
          texture_id = (short)((ulonglong)mapping_result >> 0x20);
          space_info[1] = partition_height + texture_id;
          partition_offset = (short)mapping_result;
          *space_info = partition_offset;
          *(undefined8 *)(space_data + 0x20) = *(undefined8 *)(space_info + 4);
          
          texture_ptr = (ushort *)*texture_mapping;
          partition_index = (int)mapping_result;
          
          // 插入纹理到链表
          if ((int)(uint)*texture_ptr < partition_index) {
            next_texture_ptr = texture_ptr + 4;
            texture_ptr = *(ushort **)(texture_ptr + 4);
            *(short **)next_texture_ptr = space_info;
          }
          else {
            *texture_mapping = (longlong)space_info;
          }
          
          // 处理纹理链表优化
          if (*(ushort **)(texture_ptr + 4) != (ushort *)0x0) {
            next_texture_ptr = *(ushort **)(texture_ptr + 4);
            
            do {
              if ((int)(partition_index + (uint)partition_width) < (int)(uint)*next_texture_ptr) break;
              *(undefined8 *)(texture_ptr + 4) = *(undefined8 *)(space_data + 0x20);
              *(ushort **)(space_data + 0x20) = texture_ptr;
              partition_ptr = next_texture_ptr + 4;
              texture_ptr = next_texture_ptr;
              next_texture_ptr = *(ushort **)partition_ptr;
            } while (*(ushort **)partition_ptr != (ushort *)0x0);
          }
          
          *(ushort **)(space_info + 4) = texture_ptr;
          
          if ((int)(uint)*texture_ptr < (int)(partition_index + (uint)partition_width)) {
            *texture_ptr = partition_width + partition_offset;
          }
          
          partition_manager[-1] = partition_offset;
          *partition_manager = texture_id;
        }
      }
      
      partition_manager = partition_manager + 8;
      space_offset = space_offset + -1;
    } while (space_offset != 0);
  }
  qsort(param_2,lVar18,0x10,&UNK_18028ad70);
  if (0 < lVar18) {
    psVar12 = (short *)(param_2 + 10);
    uVar17 = uVar10;
    do {
      if ((psVar12[-1] != -1) || (iVar7 = 0, *psVar12 != -1)) {
        iVar7 = 1;
      }
      *(int *)(psVar12 + 1) = iVar7;
      uVar10 = 0;
      if (iVar7 != 0) {
        uVar10 = uVar17;
      }
      psVar12 = psVar12 + 8;
      lVar18 = lVar18 + -1;
      uVar17 = uVar10;
    } while (lVar18 != 0);
  }
  return uVar10;
}



int FUN_18028ada4(longlong param_1,longlong param_2,int param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  short *psVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 *puVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  ushort *puVar12;
  short *psVar13;
  longlong lVar14;
  short sVar15;
  int *piVar16;
  short sVar17;
  int unaff_R14D;
  longlong lVar18;
  longlong in_stack_00000088;
  
  iVar10 = 1;
  if (0 < param_3) {
    piVar16 = (int *)(param_2 + 0xc);
    iVar7 = unaff_R14D;
    do {
      *piVar16 = iVar7;
      piVar16 = piVar16 + 4;
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_3);
  }
  lVar18 = (longlong)param_3;
  qsort(param_2,lVar18,0x10,&UNK_18028ad30);
  if (0 < lVar18) {
    psVar13 = (short *)(param_2 + 10);
    lVar14 = lVar18;
    do {
      uVar2 = psVar13[-3];
      if ((uVar2 == 0) || (uVar3 = psVar13[-2], uVar3 == 0)) {
        psVar13[-1] = 0;
        psVar13[0] = 0;
      }
      else {
        puVar8 = (undefined8 *)FUN_18028aaf0(&stack0x00000030,param_1,uVar2,uVar3);
        uVar5 = *puVar8;
        plVar6 = (longlong *)puVar8[1];
        if (((plVar6 == (longlong *)0x0) ||
            (*(int *)(param_1 + 4) < (int)((int)((ulonglong)uVar5 >> 0x20) + (uint)uVar3))) ||
           (psVar4 = *(short **)(param_1 + 0x20), psVar4 == (short *)0x0)) {
          unaff_R14D = 0;
          psVar13[-1] = -1;
          psVar13[0] = -1;
        }
        else {
          sVar17 = (short)((ulonglong)uVar5 >> 0x20);
          psVar4[1] = uVar3 + sVar17;
          sVar15 = (short)uVar5;
          *psVar4 = sVar15;
          *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(psVar4 + 4);
          puVar9 = (ushort *)*plVar6;
          iVar7 = (int)uVar5;
          if ((int)(uint)*puVar9 < iVar7) {
            puVar12 = puVar9 + 4;
            puVar9 = *(ushort **)(puVar9 + 4);
            *(short **)puVar12 = psVar4;
          }
          else {
            *plVar6 = (longlong)psVar4;
          }
          if (*(ushort **)(puVar9 + 4) != (ushort *)0x0) {
            puVar12 = *(ushort **)(puVar9 + 4);
            do {
              if ((int)(iVar7 + (uint)uVar2) < (int)(uint)*puVar12) break;
              *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(param_1 + 0x20);
              *(ushort **)(param_1 + 0x20) = puVar9;
              puVar1 = puVar12 + 4;
              puVar9 = puVar12;
              puVar12 = *(ushort **)puVar1;
            } while (*(ushort **)puVar1 != (ushort *)0x0);
          }
          *(ushort **)(psVar4 + 4) = puVar9;
          if ((int)(uint)*puVar9 < (int)(iVar7 + (uint)uVar2)) {
            *puVar9 = uVar2 + sVar15;
          }
          unaff_R14D = 0;
          psVar13[-1] = sVar15;
          *psVar13 = sVar17;
        }
      }
      psVar13 = psVar13 + 8;
      lVar14 = lVar14 + -1;
      param_2 = in_stack_00000088;
    } while (lVar14 != 0);
  }
  qsort(param_2,lVar18,0x10,&UNK_18028ad70);
  if (0 < lVar18) {
    psVar13 = (short *)(param_2 + 10);
    iVar7 = iVar10;
    do {
      if ((psVar13[-1] != -1) || (iVar11 = unaff_R14D, *psVar13 != -1)) {
        iVar11 = 1;
      }
      *(int *)(psVar13 + 1) = iVar11;
      iVar10 = unaff_R14D;
      if (iVar11 != 0) {
        iVar10 = iVar7;
      }
      psVar13 = psVar13 + 8;
      lVar18 = lVar18 + -1;
      iVar7 = iVar10;
    } while (lVar18 != 0);
  }
  return iVar10;
}



ulonglong FUN_18028adf9(void)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  short *psVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  longlong unaff_RBX;
  short *psVar12;
  longlong unaff_RSI;
  longlong lVar13;
  short sVar14;
  int iVar15;
  short sVar16;
  ulonglong unaff_R12;
  uint unaff_R14D;
  longlong unaff_R15;
  longlong in_stack_00000088;
  
  psVar12 = (short *)(unaff_RBX + 10);
  lVar13 = unaff_R15;
  do {
    uVar2 = psVar12[-3];
    if ((uVar2 == 0) || (uVar3 = psVar12[-2], uVar3 == 0)) {
      psVar12[-1] = 0;
      psVar12[0] = 0;
    }
    else {
      puVar7 = (undefined8 *)FUN_18028aaf0(&stack0x00000030);
      uVar5 = *puVar7;
      plVar6 = (longlong *)puVar7[1];
      if (((plVar6 == (longlong *)0x0) ||
          (*(int *)(unaff_RSI + 4) < (int)((int)((ulonglong)uVar5 >> 0x20) + (uint)uVar3))) ||
         (psVar4 = *(short **)(unaff_RSI + 0x20), psVar4 == (short *)0x0)) {
        unaff_R14D = 0;
        psVar12[-1] = -1;
        psVar12[0] = -1;
      }
      else {
        sVar16 = (short)((ulonglong)uVar5 >> 0x20);
        psVar4[1] = uVar3 + sVar16;
        sVar14 = (short)uVar5;
        *psVar4 = sVar14;
        *(undefined8 *)(unaff_RSI + 0x20) = *(undefined8 *)(psVar4 + 4);
        puVar8 = (ushort *)*plVar6;
        iVar15 = (int)uVar5;
        if ((int)(uint)*puVar8 < iVar15) {
          puVar11 = puVar8 + 4;
          puVar8 = *(ushort **)(puVar8 + 4);
          *(short **)puVar11 = psVar4;
        }
        else {
          *plVar6 = (longlong)psVar4;
        }
        if (*(ushort **)(puVar8 + 4) != (ushort *)0x0) {
          puVar11 = *(ushort **)(puVar8 + 4);
          do {
            if ((int)(iVar15 + (uint)uVar2) < (int)(uint)*puVar11) break;
            *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(unaff_RSI + 0x20);
            *(ushort **)(unaff_RSI + 0x20) = puVar8;
            puVar1 = puVar11 + 4;
            puVar8 = puVar11;
            puVar11 = *(ushort **)puVar1;
          } while (*(ushort **)puVar1 != (ushort *)0x0);
        }
        *(ushort **)(psVar4 + 4) = puVar8;
        if ((int)(uint)*puVar8 < (int)(iVar15 + (uint)uVar2)) {
          *puVar8 = uVar2 + sVar14;
        }
        unaff_R14D = 0;
        psVar12[-1] = sVar14;
        *psVar12 = sVar16;
      }
    }
    psVar12 = psVar12 + 8;
    lVar13 = lVar13 - unaff_R12;
    if (lVar13 == 0) {
      qsort(in_stack_00000088);
      if (0 < unaff_R15) {
        psVar12 = (short *)(in_stack_00000088 + 10);
        do {
          if ((psVar12[-1] != -1) || (uVar10 = unaff_R14D, *psVar12 != -1)) {
            uVar10 = 1;
          }
          *(uint *)(psVar12 + 1) = uVar10;
          uVar9 = unaff_R14D;
          if (uVar10 != 0) {
            uVar9 = (uint)unaff_R12;
          }
          psVar12 = psVar12 + 8;
          unaff_R12 = (ulonglong)uVar9;
          unaff_R15 = unaff_R15 + -1;
        } while (unaff_R15 != 0);
      }
      return unaff_R12 & 0xffffffff;
    }
  } while( true );
}



int FUN_18028af71(void)

{
  short *psVar1;
  int iVar2;
  longlong unaff_RBX;
  short unaff_DI;
  int unaff_R12D;
  int iVar3;
  int unaff_R14D;
  longlong unaff_R15;
  
  qsort();
  if (0 < unaff_R15) {
    psVar1 = (short *)(unaff_RBX + 10);
    iVar3 = unaff_R12D;
    do {
      if ((psVar1[-1] != unaff_DI) || (iVar2 = unaff_R14D, *psVar1 != unaff_DI)) {
        iVar2 = 1;
      }
      *(int *)(psVar1 + 1) = iVar2;
      unaff_R12D = unaff_R14D;
      if (iVar2 != 0) {
        unaff_R12D = iVar3;
      }
      psVar1 = psVar1 + 8;
      unaff_R15 = unaff_R15 + -1;
      iVar3 = unaff_R12D;
    } while (unaff_R15 != 0);
  }
  return unaff_R12D;
}



int FUN_18028af94(void)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  longlong unaff_RBX;
  short unaff_DI;
  int unaff_R12D;
  int unaff_R14D;
  longlong unaff_R15;
  
  psVar1 = (short *)(unaff_RBX + 10);
  do {
    if ((psVar1[-1] != unaff_DI) || (iVar3 = unaff_R14D, *psVar1 != unaff_DI)) {
      iVar3 = 1;
    }
    *(int *)(psVar1 + 1) = iVar3;
    iVar2 = unaff_R14D;
    if (iVar3 != 0) {
      iVar2 = unaff_R12D;
    }
    psVar1 = psVar1 + 8;
    unaff_R15 = unaff_R15 + -1;
    unaff_R12D = iVar2;
  } while (unaff_R15 != 0);
  return iVar2;
}



longlong * FUN_18028b000(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iStack_c;
  
  iVar1 = (int)param_2[1];
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  if (iVar1 < iVar2) {
    iVar7 = iVar1 + 1;
    uVar3 = *(undefined1 *)((longlong)iVar1 + *param_2);
    *(int *)(param_2 + 1) = iVar7;
  }
  else {
    uVar3 = 0;
    iVar7 = iVar1;
  }
  if (iVar7 < iVar2) {
    lVar6 = (longlong)iVar7;
    iVar7 = iVar7 + 1;
    uVar4 = *(undefined1 *)(lVar6 + *param_2);
    *(int *)(param_2 + 1) = iVar7;
  }
  else {
    uVar4 = 0;
  }
  if (CONCAT11(uVar3,uVar4) != 0) {
    if (iVar7 < iVar2) {
      lVar6 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      bVar5 = *(byte *)(lVar6 + *param_2);
    }
    else {
      bVar5 = 0;
    }
    uVar8 = (ulonglong)bVar5;
    iVar7 = (uint)CONCAT11(uVar3,uVar4) * (uint)bVar5 + iVar7;
    if ((iVar2 < iVar7) || (iVar7 < 0)) {
      iVar7 = iVar2;
    }
    uVar9 = 0;
    *(int *)(param_2 + 1) = iVar7;
    if (bVar5 != 0) {
      do {
        if (iVar7 < iVar2) {
          lVar6 = (longlong)iVar7;
          iVar7 = iVar7 + 1;
          bVar5 = *(byte *)(lVar6 + *param_2);
          *(int *)(param_2 + 1) = iVar7;
        }
        else {
          iVar7 = (int)param_2[1];
          bVar5 = 0;
        }
        uVar9 = uVar9 << 8 | (uint)bVar5;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    iVar7 = (uVar9 - 1) + iVar7;
    if ((iVar2 < iVar7) || (iVar7 < 0)) {
      iVar7 = iVar2;
    }
    *(int *)(param_2 + 1) = iVar7;
  }
  iVar7 = iVar7 - iVar1;
  iStack_c = 0;
  lVar6 = 0;
  if ((((-1 < iVar1) && (lVar6 = 0, -1 < iVar7)) && (iStack_c = 0, lVar6 = 0, iVar1 <= iVar2)) &&
     (lVar6 = 0, iVar7 <= iVar2 - iVar1)) {
    lVar6 = (longlong)iVar1 + *param_2;
    iStack_c = iVar7;
  }
  *param_1 = lVar6;
  *(undefined4 *)(param_1 + 1) = 0;
  *(int *)((longlong)param_1 + 0xc) = iStack_c;
  return param_1;
}





// 函数: void FUN_18028b091(undefined8 param_1,int param_2,uint param_3,longlong *param_4)
void FUN_18028b091(undefined8 param_1,int param_2,uint param_3,longlong *param_4)

{
  byte bVar1;
  longlong in_RAX;
  longlong lVar2;
  longlong *unaff_RDI;
  int in_R10D;
  int in_R11D;
  undefined4 in_register_0000009c;
  int iStackX_c;
  
  do {
    if (param_2 < in_R10D) {
      lVar2 = (longlong)param_2;
      param_2 = param_2 + 1;
      bVar1 = *(byte *)(lVar2 + *param_4);
      *(int *)(param_4 + 1) = param_2;
    }
    else {
      param_2 = (int)param_4[1];
      bVar1 = 0;
    }
    param_3 = param_3 << 8 | (uint)bVar1;
    in_RAX = in_RAX + -1;
  } while (in_RAX != 0);
  param_2 = (param_3 - 1) + param_2;
  if ((in_R10D < param_2) || (param_2 < 0)) {
    param_2 = in_R10D;
  }
  *(int *)(param_4 + 1) = param_2;
  param_2 = param_2 - in_R11D;
  iStackX_c = 0;
  lVar2 = 0;
  if ((((-1 < in_R11D) && (lVar2 = 0, -1 < param_2)) &&
      (iStackX_c = 0, lVar2 = 0, in_R11D <= in_R10D)) && (lVar2 = 0, param_2 <= in_R10D - in_R11D))
  {
    lVar2 = CONCAT44(in_register_0000009c,in_R11D) + *param_4;
    iStackX_c = param_2;
  }
  *unaff_RDI = lVar2;
  *(undefined4 *)(unaff_RDI + 1) = 0;
  *(int *)((longlong)unaff_RDI + 0xc) = iStackX_c;
  return;
}





