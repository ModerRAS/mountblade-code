#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

/**
 * @file 03_rendering_part108.c
 * @brief 渲染系统高级数据处理和资源管理模块
 * 
 * 本模块包含2个核心函数，涵盖渲染系统高级数据处理、资源管理、
 * 批量操作、内存管理、文件写入和资源清理等高级渲染功能。
 */

/**
 * @defgroup rendering_constants 渲染系统常量定义
 * @{
 */
#define RENDERING_RESOURCE_POOL_SIZE 0x100000
#define RENDERING_BUFFER_SIZE 0x30
#define RENDERING_ARRAY_SIZE 0x20
#define RENDERING_FLOAT_MULTIPLIER 0.03125f
#define RENDERING_ALIGNMENT_FACTOR 0x1f
#define RENDERING_STACK_ALIGNMENT 8
#define RENDERING_MAX_ITERATIONS 0x40
#define RENDERING_MEMORY_BLOCK_SIZE 0x10
#define RENDERING_FILE_CHUNK_SIZE 4
#define RENDERING_HASH_TABLE_SIZE 8
#define RENDERING_MUTEX_TIMEOUT 0x30000
#define RENDERING_THREAD_SAFE 3
/* @} */

/**
 * @defgroup rendering_function_aliases 渲染系统函数别名
 * @{
 */
#define RenderingSystem_ProcessResourceData FUN_180331530
#define RenderingSystem_ExecuteBatchOperations FUN_180332110
/* @} */

/**
 * @brief 渲染系统资源数据处理器
 * 
 * 该函数负责处理渲染系统资源数据，包括数据写入、路径处理、
 * 字符串操作和文件管理等高级渲染功能。
 * 
 * @param render_context 渲染上下文指针
 * @param output_handle 输出文件句柄
 * @param resource_data 资源数据指针
 * @return void
 */
void RenderingSystem_ProcessResourceData(longlong render_context, longlong output_handle, uint resource_data)
{
    int32_t render_data;
    uint64_t *resource_pool_ptr;
    longlong *memory_block_ptr;
    longlong *memory_block_ptr2;
    uint loop_counter;
    uint alignment_counter;
    ulonglong *data_buffer_ptr;
    uint *uint_array_ptr;
    longlong hash_table_entry;
    ulonglong *resource_data_ptr;
    int array_size;
    int *hash_entry_ptr;
    ulonglong resource_id;
    int float_value;
    void *string_data;
    int32_t *resource_array_ptr;
    ulonglong resource_size;
    uint64_t *resource_manager_ptr;
    uint item_count;
    longlong **context_ptr_ptr;
    ulonglong *output_buffer_ptr;
    longlong data_offset;
    longlong resource_offset;
    ulonglong *temp_buffer_ptr;
    int8_t float_buffer[16];
    longlong output_handle_local;
    uint resource_data_param;
    uint count_array[2];
    longlong *memory_pool_ptr;
    uint *uint_buffer_ptr;
    longlong *long_buffer_ptr;
    int32_t memory_flag;
    ulonglong write_data_1;
    ulonglong write_data_2;
    ulonglong *buffer_start_ptr;
    ulonglong *buffer_current_ptr;
    ulonglong *buffer_end_ptr;
    int32_t allocation_flag;
    longlong *stack_buffer_ptr;
    uint64_t callback_data;
    code *callback_function;
    void *error_handler;
    ulonglong *resource_list_ptr;
    ulonglong *data_stream_ptr;
    longlong **context_manager_ptr;
    longlong render_context_local;
    longlong *file_handle_ptr;
    ulonglong **buffer_manager_ptr;
    longlong **thread_manager_ptr;
    int8_t thread_flag;
    uint64_t thread_counter;
    int8_t stack_buffer[16];
    ulonglong performance_counter;
    void *cleanup_handler;
    longlong cleanup_flag;
    int32_t status_flag;
    
    thread_counter = 0xfffffffffffffffe;
    resource_id = (ulonglong)resource_data;
    count_array[0] = 0;
    buffer_start_ptr = (ulonglong *)0x0;
    buffer_current_ptr = (ulonglong *)0x0;
    buffer_end_ptr = (ulonglong *)0x0;
    allocation_flag = 3;
    memory_pool_ptr = (longlong *)0x0;
    uint_buffer_ptr = (uint *)0x0;
    long_buffer_ptr = (longlong *)0x0;
    memory_flag = 3;
    resource_pool_ptr = *(uint64_t **)(render_context + 0x9f8);
    resource_array_ptr = (int32_t *)*resource_pool_ptr;
    resource_manager_ptr = resource_pool_ptr;
  if (resource_array_ptr == (int32_t *)0x0) {
        resource_manager_ptr = resource_pool_ptr + 1;
        resource_array_ptr = (int32_t *)*resource_manager_ptr;
        while (resource_array_ptr == (int32_t *)0x0) {
            resource_manager_ptr = resource_manager_ptr + 1;
            resource_array_ptr = (int32_t *)*resource_manager_ptr;
        }
    }
    item_count = 0;
    output_handle_local = output_handle;
    resource_data_param = resource_data;
    if (resource_array_ptr != (int32_t *)resource_pool_ptr[*(longlong *)(render_context + 0xa00)]) {
        do {
            resource_offset = *(longlong *)(resource_array_ptr + 2);
            data_offset = *(longlong *)(resource_offset + 8);
            for (hash_entry_ptr = *(int **)(data_offset + (resource_id % (ulonglong)*(uint *)(resource_offset + 0x10)) * 8);
                hash_entry_ptr != (int *)0x0; hash_entry_ptr = *(int **)(hash_entry_ptr + 4)) {
                if ((int)resource_id == *hash_entry_ptr) {
                    resource_offset = *(longlong *)(resource_offset + 0x10);
                    goto LAB_180331625;
                }
            }
            resource_offset = *(longlong *)(resource_offset + 0x10);
      hash_entry_ptr = *(int **)(data_offset + resource_offset * 8);
LAB_180331625:
        if ((hash_entry_ptr != *(int **)(data_offset + resource_offset * 8)) &&
            (resource_offset = *(longlong *)(hash_entry_ptr + 2), resource_offset != 0)) {
        if (resource_buffer_end < resource_buffer_start) {
          *(int32_t *)resource_buffer_end = *resource_array_item;
          temp_buffer_ptr = resource_buffer_end;
        }
        else {
          buffer_size = (longlong)resource_buffer_end - (longlong)memory_pool_ptr >> 2;
          if (buffer_size == 0) {
            buffer_size = 1;
LAB_180331688:
            temp_buffer_ptr = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,buffer_size * 4,(int8_t)allocation_flag);
          }
          else {
            buffer_size = buffer_size * 2;
            if (buffer_size != 0) goto LAB_180331688;
            temp_buffer_ptr = (ulonglong *)0x0;
          }
          if (memory_pool_ptr != resource_buffer_end) {
                    // WARNING: Subroutine does not return
            memmove(temp_buffer_ptr,memory_pool_ptr,(longlong)resource_buffer_end - (longlong)memory_pool_ptr);
          }
          *(int32_t *)temp_buffer_ptr = *resource_array_item;
          if (memory_pool_ptr != (ulonglong *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          resource_buffer_start = (ulonglong *)((longlong)temp_buffer_ptr + buffer_size * 4);
          memory_pool_ptr = temp_buffer_ptr;
        }
        resource_buffer_end = (ulonglong *)((longlong)temp_buffer_ptr + 4);
        if (data_buffer_end < memory_buffer_end) {
          *(longlong *)data_buffer_end = resource_data;
          temp_data_ptr = data_buffer_end;
        }
        else {
          buffer_size = (longlong)data_buffer_end - (longlong)resource_pool_ptr >> 3;
          if (buffer_size == 0) {
            buffer_size = 1;
LAB_18033173f:
            temp_data_ptr = (uint *)FUN_18062b420(_DAT_180c8ed18,buffer_size * 8,(char)thread_flag);
          }
          else {
            buffer_size = buffer_size * 2;
            if (buffer_size != 0) goto LAB_18033173f;
            temp_data_ptr = (uint *)0x0;
          }
          if ((uint *)resource_pool_ptr != data_buffer_end) {
                    // WARNING: Subroutine does not return
            memmove(temp_data_ptr,resource_pool_ptr,(longlong)data_buffer_end - (longlong)resource_pool_ptr);
          }
          *(longlong *)temp_data_ptr = resource_data;
          if (resource_pool_ptr != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          memory_buffer_end = (longlong *)((longlong)temp_data_ptr + buffer_size * 8);
          resource_pool_ptr = (longlong *)temp_data_ptr;
        }
        data_buffer_end = (uint *)((longlong)temp_data_ptr + 8);
        item_count = count_array[0] + 1;
        resource_id = (ulonglong)resource_data_param;
        count_array[0] = item_count;
      }
      resource_array_item = *(int32_t **)(resource_array_item + 4);
      while (resource_array_item == (int32_t *)0x0) {
        resource_manager_ptr = resource_manager_ptr + 1;
        resource_array_item = (int32_t *)*resource_manager_ptr;
      }
    } while (resource_array_item !=
             *(int32_t **)(*(longlong *)(render_context + 0x9f8) + *(longlong *)(render_context + 0xa00) * 8));
  }
  puVar7 = (ulonglong *)0x0;
  alignment_counter = 0x20;
  write_buffer = CONCAT44(write_buffer._4_4_,0x20);
  float_union._0_4_ = 0.0;
  if (item_count != 0) {
    float_union._0_4_ = (float)item_count * RENDERING_FLOAT_MULTIPLIER;
    float_value = (int)float_union._0_4_;
    if ((float_value != -0x80000000) && ((float)float_value != float_union._0_4_)) {
      float_union._4_4_ = float_union._0_4_;
      float_union._8_8_ = 0;
      alignment_result = movmskps(item_count,float_union);
      float_union._0_4_ = (float)(int)(float_value + (alignment_result & 1 ^ 1));
    }
  }
  alignment_result = (uint)(longlong)float_union._0_4_;
  if (alignment_result < 2) {
    write_buffer = CONCAT44(write_buffer._4_4_,item_count);
  }
  else {
    alignment_factor = alignment_result * RENDERING_ALIGNMENT_FACTOR;
    if (item_count <= alignment_factor) {
      do {
        alignment_counter = alignment_counter + -1;
        alignment_factor = alignment_factor - alignment_result;
      } while (item_count <= alignment_factor);
      write_buffer = CONCAT44(write_buffer._4_4_,alignment_counter);
    }
  }
  alignment_value = CONCAT44(alignment_value._4_4_,alignment_result);
  fwrite(&write_buffer,4,1,*(uint64_t *)(output_handle_local + 8));
  if ((int)uStack_128 != 0) {
    pplStack_a8 = &plStack_f8;
    puStack_d8 = &uStack_120;
    puStack_d0 = (ulonglong *)auStackX_20;
    pplStack_c8 = &plStack_148;
    plStack_b8 = &lStackX_10;
    ppuStack_b0 = &puStack_118;
    pcStack_e8 = FUN_18033cd80;
    puStack_e0 = &unknown_var_5872_ptr;
    lStack_c0 = param_1;
    plStack_f8 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x30,8,system_allocation_flags);
    *plStack_f8 = (longlong)puStack_d8;
    plStack_f8[1] = (longlong)puStack_d0;
    plStack_f8[2] = (longlong)pplStack_c8;
    plStack_f8[3] = lStack_c0;
    plStack_f8[4] = (longlong)plStack_b8;
    plStack_f8[5] = (longlong)ppuStack_b0;
    FUN_18015b810();
  }
  if (plStack_148 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (puStack_118 != (ulonglong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  auStackX_20[0] = 0;
  puStack_d8 = (ulonglong *)0x0;
  puStack_d0 = (ulonglong *)0x0;
  pplStack_c8 = (longlong **)0x0;
  lStack_c0 = CONCAT44(lStack_c0._4_4_,3);
  puStack_118 = (ulonglong *)0x0;
  puStack_110 = (ulonglong *)0x0;
  puStack_108 = (ulonglong *)0x0;
  uStack_100 = 3;
  puVar2 = *(uint64_t **)(param_1 + 0x6c0);
  puVar16 = (int32_t *)*puVar2;
  puVar18 = puVar2;
  if (puVar16 == (int32_t *)0x0) {
    puVar18 = puVar2 + 1;
    puVar16 = (int32_t *)*puVar18;
    while (puVar16 == (int32_t *)0x0) {
      puVar18 = puVar18 + 1;
      puVar16 = (int32_t *)*puVar18;
    }
  }
  if (puVar16 != (int32_t *)puVar2[*(longlong *)(param_1 + 0x6c8)]) {
    puVar21 = (ulonglong *)0x0;
    puVar24 = (ulonglong *)0x0;
    pplVar20 = (longlong **)puVar7;
    do {
      lVar23 = *(longlong *)(puVar16 + 2);
      lVar22 = *(longlong *)(lVar23 + 8);
      for (piVar12 = *(int **)(lVar22 + (uVar13 % (ulonglong)*(uint *)(lVar23 + 0x10)) * 8);
          piVar12 != (int *)0x0; piVar12 = *(int **)(piVar12 + 4)) {
        if ((int)uVar13 == *piVar12) {
          lVar9 = *(longlong *)(lVar23 + 0x10);
          goto LAB_180331a35;
        }
      }
      lVar9 = *(longlong *)(lVar23 + 0x10);
      piVar12 = *(int **)(lVar22 + lVar9 * 8);
LAB_180331a35:
      if ((piVar12 != *(int **)(lVar22 + lVar9 * 8)) &&
         (uStack_120 = *(ulonglong *)(piVar12 + 2), uStack_120 != 0)) {
        if (puVar21 < pplVar20) {
          *(int32_t *)puVar21 = *puVar16;
          puVar10 = puVar21;
        }
        else {
          uStack_128 = (longlong)puVar21 - (longlong)puStack_d8;
          if ((longlong)uStack_128 >> 2 == 0) {
            lVar22 = 1;
LAB_180331a9e:
            puVar10 = (ulonglong *)
                      FUN_18062b420(_DAT_180c8ed18,lVar22 * 4,
                                    CONCAT71((int7)((ulonglong)lVar23 >> 8),3));
          }
          else {
            lVar22 = ((longlong)uStack_128 >> 2) * 2;
            if (lVar22 != 0) goto LAB_180331a9e;
            puVar10 = (ulonglong *)0x0;
          }
          if (puStack_d8 != puVar21) {
                    // WARNING: Subroutine does not return
            memmove(puVar10,puStack_d8,uStack_128);
          }
          *(int32_t *)puVar10 = *puVar16;
          if (puStack_d8 != (ulonglong *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          pplStack_c8 = (longlong **)((longlong)puVar10 + lVar22 * 4);
          puVar7 = puStack_108;
          puStack_d8 = puVar10;
        }
        puVar21 = (ulonglong *)((longlong)puVar10 + 4);
        puStack_d0 = puVar21;
        if (puVar24 < puVar7) {
          *puVar24 = uStack_120;
          puVar10 = puVar24;
        }
        else {
          uStack_128 = (longlong)puVar24 - (longlong)puStack_118;
          if ((longlong)uStack_128 >> 3 == 0) {
            lVar23 = 1;
LAB_180331b54:
            puVar10 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,lVar23 * 8,3);
          }
          else {
            lVar23 = ((longlong)uStack_128 >> 3) * 2;
            if (lVar23 != 0) goto LAB_180331b54;
            puVar10 = (ulonglong *)0x0;
          }
          if (puStack_118 != puVar24) {
                    // WARNING: Subroutine does not return
            memmove(puVar10,puStack_118,uStack_128);
          }
          *puVar10 = uStack_120;
          if (puStack_118 != (ulonglong *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puVar7 = puVar10 + lVar23;
          puStack_118 = puVar10;
          puStack_108 = puVar7;
        }
        puVar24 = puVar10 + 1;
        auStackX_20[0] = auStackX_20[0] + 1;
        uVar13 = (ulonglong)uStackX_18;
        pplVar20 = pplStack_c8;
        puStack_110 = puVar24;
      }
      puVar16 = *(int32_t **)(puVar16 + 4);
      while (puVar16 == (int32_t *)0x0) {
        puVar18 = puVar18 + 1;
        puVar16 = (int32_t *)*puVar18;
      }
    } while (puVar16 !=
             *(int32_t **)(*(longlong *)(param_1 + 0x6c0) + *(longlong *)(param_1 + 0x6c8) * 8));
  }
  fwrite(auStackX_20,4,1,*(uint64_t *)(lStackX_10 + 8));
  puVar21 = puStack_d8;
  puVar7 = puStack_118;
  if (auStackX_20[0] != 0) {
    fwrite(puStack_d8,4,auStackX_20[0],*(uint64_t *)(lStackX_10 + 8));
    plStack_148 = (longlong *)0x0;
    puStack_140 = (uint *)0x0;
    plStack_138 = (longlong *)0x0;
    uStack_130 = CONCAT13(uStack_130._3_1_,0x30000);
    FUN_180639bf0(&plStack_148,0x100000);
    puVar7 = puStack_118;
    plVar3 = plStack_148;
    if (auStackX_20[0] != 0) {
      puVar16 = (int32_t *)*puStack_118;
      uVar1 = *puVar16;
      if ((ulonglong)(((longlong)plStack_138 - (longlong)puStack_140) + (longlong)plStack_148) < 5)
      {
        FUN_180639bf0(&plStack_148,(longlong)puStack_140 + (4 - (longlong)plStack_148));
      }
      *puStack_140 = uVar1;
      puStack_140 = (uint *)((longlong)puStack_140 + 4);
      uVar1 = puVar16[2];
      if ((ulonglong)(((longlong)plStack_138 - (longlong)puStack_140) + (longlong)plStack_148) < 5)
      {
        FUN_180639bf0(&plStack_148,(longlong)puStack_140 + (4 - (longlong)plStack_148));
      }
      *puStack_140 = uVar1;
      puStack_140 = puStack_140 + 1;
      if ((ulonglong)(((longlong)plStack_138 - (longlong)puStack_140) + (longlong)plStack_148) <
          0x41) {
        FUN_180639bf0(&plStack_148,(longlong)puStack_140 + (0x40 - (longlong)plStack_148));
      }
      if ((ulonglong)(((longlong)plStack_138 - (longlong)puStack_140) + (longlong)plStack_148) <
          0x11) {
        FUN_180639bf0(&plStack_148,(longlong)puStack_140 + (0x10 - (longlong)plStack_148));
      }
      *puStack_140 = puVar16[3];
      puStack_140[1] = puVar16[4];
      puStack_140[2] = puVar16[5];
      puStack_140[3] = puVar16[6];
      puStack_140 = puStack_140 + 4;
      if ((ulonglong)(((longlong)plStack_138 - (longlong)puStack_140) + (longlong)plStack_148) <
          0x11) {
        FUN_180639bf0(&plStack_148,(longlong)puStack_140 + (0x10 - (longlong)plStack_148));
      }
      *puStack_140 = puVar16[7];
      puStack_140[1] = puVar16[8];
      puStack_140[2] = puVar16[9];
      puStack_140[3] = puVar16[10];
      puStack_140 = puStack_140 + 4;
      if ((ulonglong)(((longlong)plStack_138 - (longlong)puStack_140) + (longlong)plStack_148) <
          0x11) {
        FUN_180639bf0(&plStack_148,(longlong)puStack_140 + (0x10 - (longlong)plStack_148));
      }
      *puStack_140 = puVar16[0xb];
      puStack_140[1] = puVar16[0xc];
      puStack_140[2] = puVar16[0xd];
      puStack_140[3] = puVar16[0xe];
      puStack_140 = puStack_140 + 4;
      if ((ulonglong)(((longlong)plStack_138 - (longlong)puStack_140) + (longlong)plStack_148) <
          0x11) {
        FUN_180639bf0(&plStack_148,(longlong)puStack_140 + (0x10 - (longlong)plStack_148));
      }
      *puStack_140 = puVar16[0xf];
      puStack_140[1] = puVar16[0x10];
      puStack_140[2] = puVar16[0x11];
      puStack_140[3] = puVar16[0x12];
      puStack_140 = puStack_140 + 4;
      uVar19 = puVar16[0x18];
      uVar13 = (ulonglong)uVar19 + 4;
      if ((ulonglong)(((longlong)plStack_138 - (longlong)puStack_140) + (longlong)plStack_148) <=
          uVar13) {
        FUN_180639bf0(&plStack_148,(longlong)puStack_140 + (uVar13 - (longlong)plStack_148));
      }
      *puStack_140 = uVar19;
      puStack_140 = puStack_140 + 1;
      puVar15 = &system_buffer_ptr;
      if (*(void **)(puVar16 + 0x16) != (void *)0x0) {
        puVar15 = *(void **)(puVar16 + 0x16);
      }
                    // WARNING: Subroutine does not return
      memcpy(puStack_140,puVar15,(ulonglong)uVar19);
    }
    uVar13 = (longlong)puStack_140 - (longlong)plStack_148;
    if (plStack_148 == (longlong *)0x0) {
      uVar13 = 0;
    }
    plStack_f8 = (longlong *)0x0;
    uStack_f0 = 0;
    pcStack_e8 = (code *)0x0;
    puStack_e0 = (void *)CONCAT53(puStack_e0._3_5_,0x30000);
    uVar17 = uVar13 & 0xffffffff;
    FUN_180639bf0(&plStack_f8,uVar13 & 0xffffffff);
    plVar4 = plStack_f8;
    pplStack_a8 = (longlong **)&unknown_var_3856_ptr;
    uStack_a0 = 1;
    uStack_128 = uVar17;
    uStack_120 = uVar17;
    FUN_18021f4e0(&pplStack_a8,auStack_88,plVar3,uVar13 & 0xffffffff,plStack_f8,uVar17);
    uStack_120 = uStack_78;
    fwrite(&uStack_128,8,1,*(uint64_t *)(lStackX_10 + 8));
    fwrite(&uStack_120,8,1,*(uint64_t *)(lStackX_10 + 8));
    fwrite(plVar4,uStack_120,1,*(uint64_t *)(lStackX_10 + 8));
    puStack_68 = &unknown_var_3456_ptr;
    if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_60 = 0;
    uStack_50 = 0;
    puStack_68 = &unknown_var_720_ptr;
    if (((char)puStack_e0 == '\0') && (plVar4 != (longlong *)0x0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar4);
    }
    if (((char)uStack_130 == '\0') && (plVar3 != (longlong *)0x0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar3);
    }
  }
  if (puVar7 != (ulonglong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar7);
  }
  if (puVar21 == (ulonglong *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar21);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * @brief 渲染系统批量操作执行器
 * 
 * 该函数负责执行渲染系统的批量操作，包括数据处理、内存管理、
 * 文件写入和线程同步等高级渲染功能。
 * 
 * @param batch_context 批处理上下文指针
 * @param start_index 起始索引
 * @param end_index 结束索引
 * @return void
 */
void RenderingSystem_ExecuteBatchOperations(uint64_t *batch_context, int start_index, int end_index)
{
    int status_code;
    longlong *data_ptr;
    longlong *temp_ptr;
    ulonglong data_size;
    ulonglong buffer_size;
    longlong offset;
    longlong *current_ptr;
    longlong *next_ptr;
    longlong *end_ptr;
    int current_index;
    void **item_ptr;
    uint item_counter;
    longlong buffer_start;
    int loop_index;
    int count_array[2];
    longlong memory_pool;
    longlong memory_end;
    uint64_t thread_counter;
    int16_t thread_flag;
    int8_t memory_flag;
    ulonglong pool_size;
    void **item_list;
    longlong buffer_array[3];
    int16_t cleanup_flag;
    int8_t cleanup_mode;
    longlong *data_buffer;
    longlong *temp_buffer;
    longlong *buffer_start_ptr;
    int32_t allocation_flag;
    ulonglong total_size;
    void *output_ptr;
    int8_t output_flag;
    uint64_t context_data;
    longlong mutex_address;
    int8_t temp_buffer_array[16];
    ulonglong processed_size;
    void *cleanup_ptr;
    longlong cleanup_status;
    int32_t final_flag;
    
    if (start_index < end_index) {
        context_data = 0xfffffffffffffffe;
        loop_index = start_index;
        do {
            end_ptr = (longlong *)0x0;
            data_buffer = (longlong *)0x0;
            temp_buffer = (longlong *)0x0;
            buffer_start_ptr = (longlong *)0x0;
            allocation_flag = 3;
            memory_pool = 0;
            memory_end = 0;
            thread_counter = 0;
            thread_flag = 0;
            memory_flag = 3;
            FUN_180639bf0(&memory_pool, RENDERING_RESOURCE_POOL_SIZE);
            count_array[0] = 0;
            item_counter = *(int *)*batch_context * loop_index;
            current_index = loop_index + 1;
            buffer_start = memory_pool;
            offset = memory_end;
            data_ptr = data_buffer;
            if (item_counter < (uint)(current_index * *(int *)*batch_context)) {
                item_ptr = (void **)((longlong)(int)item_counter * 8);
                current_ptr = data_buffer;
                next_ptr = temp_buffer;
                do {
                    data_ptr = current_ptr;
                    item_list = item_ptr;
                    if (*(uint *)batch_context[1] <= item_counter) break;
                    if (*(longlong *)((longlong)item_ptr + *(longlong *)batch_context[2]) != 0) {
                        temp_ptr = (longlong *)(offset - buffer_start);
                        if (buffer_start == 0) {
                            temp_ptr = (longlong *)0x0;
                        }
                        if (next_ptr < end_ptr) {
                            *next_ptr = (longlong)temp_ptr;
                        }
                        else {
                            buffer_start = (longlong)next_ptr - (longlong)current_ptr >> 3;
                            if (buffer_start == 0) {
                                buffer_start = 1;
LAB_180332267:
                                data_ptr = (longlong *)FUN_18062b420(_DAT_180c8ed18, buffer_start * 8);
                            }
                            else {
                                buffer_start = buffer_start * 2;
                                data_ptr = (longlong *)0x0;
                                if (buffer_start != 0) goto LAB_180332267;
                            }
                            if (current_ptr != next_ptr) {
                                memmove(data_ptr, current_ptr, (longlong)next_ptr - (longlong)current_ptr);
                            }
                            *data_ptr = (longlong)temp_ptr;
                            if (current_ptr != (longlong *)0x0) {
                                FUN_18064e900(current_ptr);
                            }
                            end_ptr = data_ptr + buffer_start;
                            data_buffer = data_ptr;
                            buffer_start_ptr = end_ptr;
                            next_ptr = data_ptr;
                        }
                        item_ptr = item_list;
                        next_ptr = next_ptr + 1;
                        temp_buffer = next_ptr;
                        FUN_180336980(*(uint64_t *)((longlong)item_list + *(longlong *)batch_context[2]),
                                      &memory_pool);
                        count_array[0] = count_array[0] + 1;
                        buffer_start = memory_pool;
                        offset = memory_end;
                    }
                    item_counter = item_counter + 1;
                    item_ptr = item_ptr + 1;
                    current_ptr = data_ptr;
                    item_list = item_ptr;
                } while (item_counter < (uint)(*(int *)*batch_context * current_index));
            }
            data_size = offset - buffer_start;
            if (buffer_start == 0) {
                data_size = 0;
            }
            buffer_array[0] = 0;
            buffer_array[1] = 0;
            buffer_array[2] = 0;
            cleanup_flag = 0;
            cleanup_mode = 3;
            buffer_size = data_size & 0xffffffff;
            FUN_180639bf0(buffer_array, buffer_size);
            buffer_start = buffer_array[0];
            output_ptr = &unknown_var_3856_ptr;
            output_flag = 0;
            pool_size = buffer_size;
            total_size = buffer_size;
            FUN_18021f4e0(&output_ptr, temp_buffer_array, memory_pool, data_size & 0xffffffff, buffer_array[0], buffer_size);
            pool_size = processed_size;
            offset = batch_context[3] + 0xa70;
            mutex_address = offset;
            status_code = _Mtx_lock(offset);
            if (status_code != 0) {
                __Throw_C_error_std__YAXH_Z(status_code);
            }
            fwrite(count_array, 4, 1, *(uint64_t *)(*(longlong *)batch_context[4] + 8));
            fwrite(*(longlong *)batch_context[5] + (ulonglong)(uint)(*(int *)*batch_context * loop_index) * 4, 4,
                   count_array[0], *(uint64_t *)(*(longlong *)batch_context[4] + 8));
            fwrite(data_ptr, 8, count_array[0], *(uint64_t *)(*(longlong *)batch_context[4] + 8));
            fwrite(&total_size, 8, 1, *(uint64_t *)(*(longlong *)batch_context[4] + 8));
            fwrite(&pool_size, 8, 1, *(uint64_t *)(*(longlong *)batch_context[4] + 8));
            fwrite(buffer_start, pool_size, 1, *(uint64_t *)(*(longlong *)batch_context[4] + 8));
            status_code = _Mtx_unlock(offset);
            if (status_code != 0) {
                __Throw_C_error_std__YAXH_Z(status_code);
            }
            item_list = &cleanup_ptr;
            cleanup_ptr = &unknown_var_3456_ptr;
            if (cleanup_status != 0) {
                FUN_18064e900();
            }
            cleanup_status = 0;
            final_flag = 0;
            cleanup_ptr = &unknown_var_720_ptr;
            if (((char)cleanup_flag == '\0') && (buffer_start != 0)) {
                FUN_18064e900(buffer_start);
            }
            if (((char)thread_flag == '\0') && (memory_pool != 0)) {
                FUN_18064e900();
            }
            if (data_ptr != (longlong *)0x0) {
                FUN_18064e900(data_ptr);
            }
            loop_index = current_index;
        } while (current_index < end_index);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



