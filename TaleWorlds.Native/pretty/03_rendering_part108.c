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
#define RENDERING_FILE_CHSYSTEM_SIZE 4
#define RENDERING_HASH_TABLE_SIZE 8
#define RENDERING_MUTEX_TIMEOUT 0x30000
#define RENDERING_THREAD_SAFE 3
/* @} */
/**
 * @defgroup rendering_function_aliases 渲染系统函数别名
 * @{
 */
#define RenderingSystem_ProcessResourceData function_331530
#define RenderingSystem_ExecuteBatchOperations function_332110
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
void RenderingSystem_ProcessResourceData(int64_t render_context, int64_t output_handle, uint resource_data)
{
    int32_t render_data;
    uint64_t *resource_pool_ptr;
    int64_t *memory_block_ptr;
    int64_t *memory_block_ptr2;
    uint loop_counter;
    uint alignment_counter;
    uint64_t *data_buffer_ptr;
    uint *uint_array_ptr;
    int64_t hash_table_entry;
    uint64_t *resource_data_ptr;
    int array_size;
    int *hash_entry_ptr;
    uint64_t resource_id;
    int float_value;
    void *string_data;
    int32_t *resource_array_ptr;
    uint64_t resource_size;
    uint64_t *resource_manager_ptr;
    uint item_count;
    int64_t **context_ptr_ptr;
    uint64_t *output_buffer_ptr;
    int64_t data_offset;
    int64_t resource_offset;
    uint64_t *temp_buffer_ptr;
    int8_t float_buffer[16];
    int64_t output_handle_local;
    uint resource_data_param;
    uint count_array[2];
    int64_t *memory_pool_ptr;
    uint *uint_buffer_ptr;
    int64_t *long_buffer_ptr;
    int32_t memory_flag;
    uint64_t write_data_1;
    uint64_t write_data_2;
    uint64_t *buffer_start_ptr;
    uint64_t *buffer_current_ptr;
    uint64_t *buffer_end_ptr;
    int32_t allocation_flag;
    int64_t *stack_buffer_ptr;
    uint64_t callback_data;
    code *callback_function;
    void *error_handler;
    uint64_t *resource_list_ptr;
    uint64_t *data_stream_ptr;
    int64_t **context_manager_ptr;
    int64_t render_context_local;
    int64_t *file_handle_ptr;
    uint64_t **buffer_manager_ptr;
    int64_t **thread_manager_ptr;
    int8_t thread_flag;
    uint64_t thread_counter;
    int8_t stack_buffer[16];
    uint64_t performance_counter;
    void *cleanup_handler;
    int64_t cleanup_flag;
    int32_t status_flag;
    thread_counter = 0xfffffffffffffffe;
    resource_id = (uint64_t)resource_data;
    count_array[0] = 0;
    buffer_start_ptr = (uint64_t *)0x0;
    buffer_current_ptr = (uint64_t *)0x0;
    buffer_end_ptr = (uint64_t *)0x0;
    allocation_flag = 3;
    memory_pool_ptr = (int64_t *)0x0;
    uint_buffer_ptr = (uint *)0x0;
    long_buffer_ptr = (int64_t *)0x0;
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
    if (resource_array_ptr != (int32_t *)resource_pool_ptr[*(int64_t *)(render_context + 0xa00)]) {
        do {
            resource_offset = *(int64_t *)(resource_array_ptr + 2);
            data_offset = *(int64_t *)(resource_offset + 8);
            for (hash_entry_ptr = *(int **)(data_offset + (resource_id % (uint64_t)*(uint *)(resource_offset + 0x10)) * 8);
                hash_entry_ptr != (int *)0x0; hash_entry_ptr = *(int **)(hash_entry_ptr + 4)) {
                if ((int)resource_id == *hash_entry_ptr) {
                    resource_offset = *(int64_t *)(resource_offset + 0x10);
                    goto LAB_180331625;
                }
            }
            resource_offset = *(int64_t *)(resource_offset + 0x10);
      hash_entry_ptr = *(int **)(data_offset + resource_offset * 8);
LAB_180331625:
        if ((hash_entry_ptr != *(int **)(data_offset + resource_offset * 8)) &&
            (resource_offset = *(int64_t *)(hash_entry_ptr + 2), resource_offset != 0)) {
        if (resource_buffer_end < resource_buffer_start) {
          *(int32_t *)resource_buffer_end = *resource_array_item;
          temp_buffer_ptr = resource_buffer_end;
        }
        else {
          buffer_size = (int64_t)resource_buffer_end - (int64_t)memory_pool_ptr >> 2;
          if (buffer_size == 0) {
            buffer_size = 1;
LAB_180331688:
            temp_buffer_ptr = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,buffer_size * 4,(int8_t)allocation_flag);
          }
          else {
            buffer_size = buffer_size * 2;
            if (buffer_size != 0) goto LAB_180331688;
            temp_buffer_ptr = (uint64_t *)0x0;
          }
          if (memory_pool_ptr != resource_buffer_end) {
// WARNING: Subroutine does not return
            memmove(temp_buffer_ptr,memory_pool_ptr,(int64_t)resource_buffer_end - (int64_t)memory_pool_ptr);
          }
          *(int32_t *)temp_buffer_ptr = *resource_array_item;
          if (memory_pool_ptr != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          resource_buffer_start = (uint64_t *)((int64_t)temp_buffer_ptr + buffer_size * 4);
          memory_pool_ptr = temp_buffer_ptr;
        }
        resource_buffer_end = (uint64_t *)((int64_t)temp_buffer_ptr + 4);
        if (data_buffer_end < memory_buffer_end) {
          *(int64_t *)data_buffer_end = resource_data;
          temp_data_ptr = data_buffer_end;
        }
        else {
          buffer_size = (int64_t)data_buffer_end - (int64_t)resource_pool_ptr >> 3;
          if (buffer_size == 0) {
            buffer_size = 1;
LAB_18033173f:
            temp_data_ptr = (uint *)CoreMemoryPoolAllocator(system_memory_pool_ptr,buffer_size * 8,(char)thread_flag);
          }
          else {
            buffer_size = buffer_size * 2;
            if (buffer_size != 0) goto LAB_18033173f;
            temp_data_ptr = (uint *)0x0;
          }
          if ((uint *)resource_pool_ptr != data_buffer_end) {
// WARNING: Subroutine does not return
            memmove(temp_data_ptr,resource_pool_ptr,(int64_t)data_buffer_end - (int64_t)resource_pool_ptr);
          }
          *(int64_t *)temp_data_ptr = resource_data;
          if (resource_pool_ptr != (int64_t *)0x0) {
// WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          memory_buffer_end = (int64_t *)((int64_t)temp_data_ptr + buffer_size * 8);
          resource_pool_ptr = (int64_t *)temp_data_ptr;
        }
        data_buffer_end = (uint *)((int64_t)temp_data_ptr + 8);
        item_count = count_array[0] + 1;
        resource_id = (uint64_t)resource_data_param;
        count_array[0] = item_count;
      }
      resource_array_item = *(int32_t **)(resource_array_item + 4);
      while (resource_array_item == (int32_t *)0x0) {
        resource_manager_ptr = resource_manager_ptr + 1;
        resource_array_item = (int32_t *)*resource_manager_ptr;
      }
    } while (resource_array_item !=
             *(int32_t **)(*(int64_t *)(render_context + 0x9f8) + *(int64_t *)(render_context + 0xa00) * 8));
  }
  puVar7 = (uint64_t *)0x0;
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
  alignment_result = (uint)(int64_t)float_union._0_4_;
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
  if ((int)local_var_128 != 0) {
    pplStack_a8 = &plStack_f8;
    plocal_var_d8 = &local_var_120;
    plocal_var_d0 = (uint64_t *)astack_special_x_20;
    pplStack_c8 = &plStack_148;
    plStack_b8 = &lStackX_10;
    pplocal_var_b0 = &plocal_var_118;
    pcStack_e8 = function_33cd80;
    plocal_var_e0 = &processed_var_5872_ptr;
    lStack_c0 = param_1;
    plStack_f8 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,system_allocation_flags);
    *plStack_f8 = (int64_t)plocal_var_d8;
    plStack_f8[1] = (int64_t)plocal_var_d0;
    plStack_f8[2] = (int64_t)pplStack_c8;
    plStack_f8[3] = lStack_c0;
    plStack_f8[4] = (int64_t)plStack_b8;
    plStack_f8[5] = (int64_t)pplocal_var_b0;
    SystemCore_DataTransformer();
  }
  if (plStack_148 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (plocal_var_118 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  astack_special_x_20[0] = 0;
  plocal_var_d8 = (uint64_t *)0x0;
  plocal_var_d0 = (uint64_t *)0x0;
  pplStack_c8 = (int64_t **)0x0;
  lStack_c0 = CONCAT44(lStack_c0._4_4_,3);
  plocal_var_118 = (uint64_t *)0x0;
  plocal_var_110 = (uint64_t *)0x0;
  plocal_var_108 = (uint64_t *)0x0;
  local_var_100 = 3;
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
  if (puVar16 != (int32_t *)puVar2[*(int64_t *)(param_1 + 0x6c8)]) {
    puVar21 = (uint64_t *)0x0;
    puVar24 = (uint64_t *)0x0;
    pplVar20 = (int64_t **)puVar7;
    do {
      lVar23 = *(int64_t *)(puVar16 + 2);
      lVar22 = *(int64_t *)(lVar23 + 8);
      for (piVar12 = *(int **)(lVar22 + (uVar13 % (uint64_t)*(uint *)(lVar23 + 0x10)) * 8);
          piVar12 != (int *)0x0; piVar12 = *(int **)(piVar12 + 4)) {
        if ((int)uVar13 == *piVar12) {
          lVar9 = *(int64_t *)(lVar23 + 0x10);
          goto LAB_180331a35;
        }
      }
      lVar9 = *(int64_t *)(lVar23 + 0x10);
      piVar12 = *(int **)(lVar22 + lVar9 * 8);
LAB_180331a35:
      if ((piVar12 != *(int **)(lVar22 + lVar9 * 8)) &&
         (local_var_120 = *(uint64_t *)(piVar12 + 2), local_var_120 != 0)) {
        if (puVar21 < pplVar20) {
          *(int32_t *)puVar21 = *puVar16;
          puVar10 = puVar21;
        }
        else {
          local_var_128 = (int64_t)puVar21 - (int64_t)plocal_var_d8;
          if ((int64_t)local_var_128 >> 2 == 0) {
            lVar22 = 1;
LAB_180331a9e:
            puVar10 = (uint64_t *)
                      CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar22 * 4,
                                    CONCAT71((int7)((uint64_t)lVar23 >> 8),3));
          }
          else {
            lVar22 = ((int64_t)local_var_128 >> 2) * 2;
            if (lVar22 != 0) goto LAB_180331a9e;
            puVar10 = (uint64_t *)0x0;
          }
          if (plocal_var_d8 != puVar21) {
// WARNING: Subroutine does not return
            memmove(puVar10,plocal_var_d8,local_var_128);
          }
          *(int32_t *)puVar10 = *puVar16;
          if (plocal_var_d8 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          pplStack_c8 = (int64_t **)((int64_t)puVar10 + lVar22 * 4);
          puVar7 = plocal_var_108;
          plocal_var_d8 = puVar10;
        }
        puVar21 = (uint64_t *)((int64_t)puVar10 + 4);
        plocal_var_d0 = puVar21;
        if (puVar24 < puVar7) {
          *puVar24 = local_var_120;
          puVar10 = puVar24;
        }
        else {
          local_var_128 = (int64_t)puVar24 - (int64_t)plocal_var_118;
          if ((int64_t)local_var_128 >> 3 == 0) {
            lVar23 = 1;
LAB_180331b54:
            puVar10 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar23 * 8,3);
          }
          else {
            lVar23 = ((int64_t)local_var_128 >> 3) * 2;
            if (lVar23 != 0) goto LAB_180331b54;
            puVar10 = (uint64_t *)0x0;
          }
          if (plocal_var_118 != puVar24) {
// WARNING: Subroutine does not return
            memmove(puVar10,plocal_var_118,local_var_128);
          }
          *puVar10 = local_var_120;
          if (plocal_var_118 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          puVar7 = puVar10 + lVar23;
          plocal_var_118 = puVar10;
          plocal_var_108 = puVar7;
        }
        puVar24 = puVar10 + 1;
        astack_special_x_20[0] = astack_special_x_20[0] + 1;
        uVar13 = (uint64_t)stack_special_x_18;
        pplVar20 = pplStack_c8;
        plocal_var_110 = puVar24;
      }
      puVar16 = *(int32_t **)(puVar16 + 4);
      while (puVar16 == (int32_t *)0x0) {
        puVar18 = puVar18 + 1;
        puVar16 = (int32_t *)*puVar18;
      }
    } while (puVar16 !=
             *(int32_t **)(*(int64_t *)(param_1 + 0x6c0) + *(int64_t *)(param_1 + 0x6c8) * 8));
  }
  fwrite(astack_special_x_20,4,1,*(uint64_t *)(lStackX_10 + 8));
  puVar21 = plocal_var_d8;
  puVar7 = plocal_var_118;
  if (astack_special_x_20[0] != 0) {
    fwrite(plocal_var_d8,4,astack_special_x_20[0],*(uint64_t *)(lStackX_10 + 8));
    plStack_148 = (int64_t *)0x0;
    plocal_var_140 = (uint *)0x0;
    plStack_138 = (int64_t *)0x0;
    local_var_130 = CONCAT13(local_var_130._3_1_,0x30000);
    System_BufferManager(&plStack_148,0x100000);
    puVar7 = plocal_var_118;
    plVar3 = plStack_148;
    if (astack_special_x_20[0] != 0) {
      puVar16 = (int32_t *)*plocal_var_118;
      uVar1 = *puVar16;
      if ((uint64_t)(((int64_t)plStack_138 - (int64_t)plocal_var_140) + (int64_t)plStack_148) < 5)
      {
        System_BufferManager(&plStack_148,(int64_t)plocal_var_140 + (4 - (int64_t)plStack_148));
      }
      *plocal_var_140 = uVar1;
      plocal_var_140 = (uint *)((int64_t)plocal_var_140 + 4);
      uVar1 = puVar16[2];
      if ((uint64_t)(((int64_t)plStack_138 - (int64_t)plocal_var_140) + (int64_t)plStack_148) < 5)
      {
        System_BufferManager(&plStack_148,(int64_t)plocal_var_140 + (4 - (int64_t)plStack_148));
      }
      *plocal_var_140 = uVar1;
      plocal_var_140 = plocal_var_140 + 1;
      if ((uint64_t)(((int64_t)plStack_138 - (int64_t)plocal_var_140) + (int64_t)plStack_148) <
          0x41) {
        System_BufferManager(&plStack_148,(int64_t)plocal_var_140 + (0x40 - (int64_t)plStack_148));
      }
      if ((uint64_t)(((int64_t)plStack_138 - (int64_t)plocal_var_140) + (int64_t)plStack_148) <
          0x11) {
        System_BufferManager(&plStack_148,(int64_t)plocal_var_140 + (0x10 - (int64_t)plStack_148));
      }
      *plocal_var_140 = puVar16[3];
      plocal_var_140[1] = puVar16[4];
      plocal_var_140[2] = puVar16[5];
      plocal_var_140[3] = puVar16[6];
      plocal_var_140 = plocal_var_140 + 4;
      if ((uint64_t)(((int64_t)plStack_138 - (int64_t)plocal_var_140) + (int64_t)plStack_148) <
          0x11) {
        System_BufferManager(&plStack_148,(int64_t)plocal_var_140 + (0x10 - (int64_t)plStack_148));
      }
      *plocal_var_140 = puVar16[7];
      plocal_var_140[1] = puVar16[8];
      plocal_var_140[2] = puVar16[9];
      plocal_var_140[3] = puVar16[10];
      plocal_var_140 = plocal_var_140 + 4;
      if ((uint64_t)(((int64_t)plStack_138 - (int64_t)plocal_var_140) + (int64_t)plStack_148) <
          0x11) {
        System_BufferManager(&plStack_148,(int64_t)plocal_var_140 + (0x10 - (int64_t)plStack_148));
      }
      *plocal_var_140 = puVar16[0xb];
      plocal_var_140[1] = puVar16[0xc];
      plocal_var_140[2] = puVar16[0xd];
      plocal_var_140[3] = puVar16[0xe];
      plocal_var_140 = plocal_var_140 + 4;
      if ((uint64_t)(((int64_t)plStack_138 - (int64_t)plocal_var_140) + (int64_t)plStack_148) <
          0x11) {
        System_BufferManager(&plStack_148,(int64_t)plocal_var_140 + (0x10 - (int64_t)plStack_148));
      }
      *plocal_var_140 = puVar16[0xf];
      plocal_var_140[1] = puVar16[0x10];
      plocal_var_140[2] = puVar16[0x11];
      plocal_var_140[3] = puVar16[0x12];
      plocal_var_140 = plocal_var_140 + 4;
      uVar19 = puVar16[0x18];
      uVar13 = (uint64_t)uVar19 + 4;
      if ((uint64_t)(((int64_t)plStack_138 - (int64_t)plocal_var_140) + (int64_t)plStack_148) <=
          uVar13) {
        System_BufferManager(&plStack_148,(int64_t)plocal_var_140 + (uVar13 - (int64_t)plStack_148));
      }
      *plocal_var_140 = uVar19;
      plocal_var_140 = plocal_var_140 + 1;
      puVar15 = &system_buffer_ptr;
      if (*(void **)(puVar16 + 0x16) != (void *)0x0) {
        puVar15 = *(void **)(puVar16 + 0x16);
      }
// WARNING: Subroutine does not return
      memcpy(plocal_var_140,puVar15,(uint64_t)uVar19);
    }
    uVar13 = (int64_t)plocal_var_140 - (int64_t)plStack_148;
    if (plStack_148 == (int64_t *)0x0) {
      uVar13 = 0;
    }
    plStack_f8 = (int64_t *)0x0;
    local_var_f0 = 0;
    pcStack_e8 = (code *)0x0;
    plocal_var_e0 = (void *)CONCAT53(plocal_var_e0._3_5_,0x30000);
    uVar17 = uVar13 & 0xffffffff;
    System_BufferManager(&plStack_f8,uVar13 & 0xffffffff);
    plVar4 = plStack_f8;
    pplStack_a8 = (int64_t **)&memory_allocator_3856_ptr;
    local_var_a0 = 1;
    local_var_128 = uVar17;
    local_var_120 = uVar17;
    function_21f4e0(&pplStack_a8,stack_array_88,plVar3,uVar13 & 0xffffffff,plStack_f8,uVar17);
    local_var_120 = local_var_78;
    fwrite(&local_var_128,8,1,*(uint64_t *)(lStackX_10 + 8));
    fwrite(&local_var_120,8,1,*(uint64_t *)(lStackX_10 + 8));
    fwrite(plVar4,local_var_120,1,*(uint64_t *)(lStackX_10 + 8));
    plocal_var_68 = &system_data_buffer_ptr;
    if (lStack_60 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_60 = 0;
    local_var_50 = 0;
    plocal_var_68 = &system_state_ptr;
    if (((char)plocal_var_e0 == '\0') && (plVar4 != (int64_t *)0x0)) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(plVar4);
    }
    if (((char)local_var_130 == '\0') && (plVar3 != (int64_t *)0x0)) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(plVar3);
    }
  }
  if (puVar7 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(puVar7);
  }
  if (puVar21 == (uint64_t *)0x0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(puVar21);
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
    int64_t *data_ptr;
    int64_t *temp_ptr;
    uint64_t data_size;
    uint64_t buffer_size;
    int64_t offset;
    int64_t *current_ptr;
    int64_t *next_ptr;
    int64_t *end_ptr;
    int current_index;
    void **item_ptr;
    uint item_counter;
    int64_t buffer_start;
    int loop_index;
    int count_array[2];
    int64_t memory_pool;
    int64_t memory_end;
    uint64_t thread_counter;
    int16_t thread_flag;
    int8_t memory_flag;
    uint64_t pool_size;
    void **item_list;
    int64_t buffer_array[3];
    int16_t cleanup_flag;
    int8_t cleanup_mode;
    int64_t *data_buffer;
    int64_t *temp_buffer;
    int64_t *buffer_start_ptr;
    int32_t allocation_flag;
    uint64_t total_size;
    void *output_ptr;
    int8_t output_flag;
    uint64_t context_data;
    int64_t mutex_address;
    int8_t temp_buffer_array[16];
    uint64_t processed_size;
    void *cleanup_ptr;
    int64_t cleanup_status;
    int32_t final_flag;
    if (start_index < end_index) {
        context_data = 0xfffffffffffffffe;
        loop_index = start_index;
        do {
            end_ptr = (int64_t *)0x0;
            data_buffer = (int64_t *)0x0;
            temp_buffer = (int64_t *)0x0;
            buffer_start_ptr = (int64_t *)0x0;
            allocation_flag = 3;
            memory_pool = 0;
            memory_end = 0;
            thread_counter = 0;
            thread_flag = 0;
            memory_flag = 3;
            System_BufferManager(&memory_pool, RENDERING_RESOURCE_POOL_SIZE);
            count_array[0] = 0;
            item_counter = *(int *)*batch_context * loop_index;
            current_index = loop_index + 1;
            buffer_start = memory_pool;
            offset = memory_end;
            data_ptr = data_buffer;
            if (item_counter < (uint)(current_index * *(int *)*batch_context)) {
                item_ptr = (void **)((int64_t)(int)item_counter * 8);
                current_ptr = data_buffer;
                next_ptr = temp_buffer;
                do {
                    data_ptr = current_ptr;
                    item_list = item_ptr;
                    if (*(uint *)batch_context[1] <= item_counter) break;
                    if (*(int64_t *)((int64_t)item_ptr + *(int64_t *)batch_context[2]) != 0) {
                        temp_ptr = (int64_t *)(offset - buffer_start);
                        if (buffer_start == 0) {
                            temp_ptr = (int64_t *)0x0;
                        }
                        if (next_ptr < end_ptr) {
                            *next_ptr = (int64_t)temp_ptr;
                        }
                        else {
                            buffer_start = (int64_t)next_ptr - (int64_t)current_ptr >> 3;
                            if (buffer_start == 0) {
                                buffer_start = 1;
LAB_180332267:
                                data_ptr = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr, buffer_start * 8);
                            }
                            else {
                                buffer_start = buffer_start * 2;
                                data_ptr = (int64_t *)0x0;
                                if (buffer_start != 0) goto LAB_180332267;
                            }
                            if (current_ptr != next_ptr) {
                                memmove(data_ptr, current_ptr, (int64_t)next_ptr - (int64_t)current_ptr);
                            }
                            *data_ptr = (int64_t)temp_ptr;
                            if (current_ptr != (int64_t *)0x0) {
                                CoreMemoryPoolInitializer(current_ptr);
                            }
                            end_ptr = data_ptr + buffer_start;
                            data_buffer = data_ptr;
                            buffer_start_ptr = end_ptr;
                            next_ptr = data_ptr;
                        }
                        item_ptr = item_list;
                        next_ptr = next_ptr + 1;
                        temp_buffer = next_ptr;
                        function_336980(*(uint64_t *)((int64_t)item_list + *(int64_t *)batch_context[2]),
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
            System_BufferManager(buffer_array, buffer_size);
            buffer_start = buffer_array[0];
            output_ptr = &memory_allocator_3856_ptr;
            output_flag = 0;
            pool_size = buffer_size;
            total_size = buffer_size;
            function_21f4e0(&output_ptr, temp_buffer_array, memory_pool, data_size & 0xffffffff, buffer_array[0], buffer_size);
            pool_size = processed_size;
            offset = batch_context[3] + 0xa70;
            mutex_address = offset;
            status_code = _Mtx_lock(offset);
            if (status_code != 0) {
                __Throw_C_error_std__YAXH_Z(status_code);
            }
            fwrite(count_array, 4, 1, *(uint64_t *)(*(int64_t *)batch_context[4] + 8));
            fwrite(*(int64_t *)batch_context[5] + (uint64_t)(uint)(*(int *)*batch_context * loop_index) * 4, 4,
                   count_array[0], *(uint64_t *)(*(int64_t *)batch_context[4] + 8));
            fwrite(data_ptr, 8, count_array[0], *(uint64_t *)(*(int64_t *)batch_context[4] + 8));
            fwrite(&total_size, 8, 1, *(uint64_t *)(*(int64_t *)batch_context[4] + 8));
            fwrite(&pool_size, 8, 1, *(uint64_t *)(*(int64_t *)batch_context[4] + 8));
            fwrite(buffer_start, pool_size, 1, *(uint64_t *)(*(int64_t *)batch_context[4] + 8));
            status_code = _Mtx_unlock(offset);
            if (status_code != 0) {
                __Throw_C_error_std__YAXH_Z(status_code);
            }
            item_list = &cleanup_ptr;
            cleanup_ptr = &system_data_buffer_ptr;
            if (cleanup_status != 0) {
                CoreMemoryPoolInitializer();
            }
            cleanup_status = 0;
            final_flag = 0;
            cleanup_ptr = &system_state_ptr;
            if (((char)cleanup_flag == '\0') && (buffer_start != 0)) {
                CoreMemoryPoolInitializer(buffer_start);
            }
            if (((char)thread_flag == '\0') && (memory_pool != 0)) {
                CoreMemoryPoolInitializer();
            }
            if (data_ptr != (int64_t *)0x0) {
                CoreMemoryPoolInitializer(data_ptr);
            }
            loop_index = current_index;
        } while (current_index < end_index);
    }
    return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address