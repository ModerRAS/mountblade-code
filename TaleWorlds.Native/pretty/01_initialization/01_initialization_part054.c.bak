#define SystemInitializer FUN_1808fcb90  // 系统初始化器

#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 01_initialization_part054.c - 渲染系统初始化相关函数

// 全局变量重命名
#define render_global_data system_parameter_buffer
#define render_config_data system_main_module_state
#define render_tls_value init_system_config_render
#define default_render_context unknown_var_3432

/**
 * 处理渲染数据
 * 从渲染数据结构中提取矩阵数据并进行变换计算
 */
void process_render_data(void)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  uint64_t *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  char cVar14;
  float *pfVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint64_t uVar29;
  int32_t uVar30;
  longlong lVar31;
  longlong *plVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  longlong unaff_RBX;
  ulonglong uVar37;
  char *pcVar38;
  uint *puVar39;
  int iVar40;
  longlong unaff_RDI;
  int iVar41;
  int iVar42;
  longlong lVar43;
  int32_t *puVar44;
  uint *puVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  bool bVar48;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  uint64_t uStack0000000000000050;
  uint64_t in_stack_00000058;
  
  // 获取渲染相关的指针和数据
  uint render_index = (int)*(char *)(unaff_RDI + 0xd) + *(int *)(unaff_RDI + 0x18);
  float *render_matrix = (float *)**(longlong **)(unaff_RBX + 600);
  longlong render_data_base = (longlong)*(int *)(render_global_data + 0xe78) * 0x128 + render_global_data + 0xc28;
  
  // 计算渲染数据偏移
  uint chunk_index = render_index >> 0xd;
  longlong render_chunk_ptr = *(longlong *)(render_data_base + 8 + (ulonglong)chunk_index * 8);
  longlong matrix_offset = (ulonglong)(render_index + chunk_index * -0x2000) * 0x40;
  
  // 提取4x4矩阵数据
  uint64_t matrix_row1 = ((uint64_t *)(render_chunk_ptr + matrix_offset))[1];
  *(uint64_t *)render_matrix = *(uint64_t *)(render_chunk_ptr + matrix_offset);
  *(uint64_t *)(render_matrix + 2) = matrix_row1;
  
  uint64_t *matrix_data = (uint64_t *)(render_chunk_ptr + 0x10 + matrix_offset);
  matrix_row1 = matrix_data[1];
  *(uint64_t *)(render_matrix + 4) = *matrix_data;
  *(uint64_t *)(render_matrix + 6) = matrix_row1;
  
  matrix_data = (uint64_t *)(render_chunk_ptr + 0x20 + matrix_offset);
  matrix_row1 = matrix_data[1];
  *(uint64_t *)(render_matrix + 8) = *matrix_data;
  *(uint64_t *)(render_matrix + 10) = matrix_row1;
  
  matrix_data = (uint64_t *)(render_chunk_ptr + 0x30 + matrix_offset);
  matrix_row1 = matrix_data[1];
  *(uint64_t *)(render_matrix + 0xc) = *matrix_data;
  *(uint64_t *)(render_matrix + 0xe) = matrix_row1;
  // 获取变换矩阵的各个元素
  longlong transform_ptr = *(longlong *)(unaff_RDI + 0x10);
  float m31 = render_matrix[8];
  float m32 = render_matrix[9];
  float m33 = render_matrix[10];
  float m34 = render_matrix[0xb];
  float m11 = *render_matrix;
  float m12 = render_matrix[1];
  float m13 = render_matrix[2];
  float m14 = render_matrix[3];
  float m21 = render_matrix[4];
  float m22 = render_matrix[5];
  float m23 = render_matrix[6];
  float m24 = render_matrix[7];
  // 获取变换参数
  float t11 = *(float *)(transform_ptr + 0x374);
  float t12 = *(float *)(transform_ptr + 0x370);
  float t13 = *(float *)(transform_ptr + 0x378);
  float t21 = *(float *)(transform_ptr + 900);
  float t31 = *(float *)(transform_ptr + 0x394);
  float t22 = *(float *)(transform_ptr + 0x380);
  float t23 = *(float *)(transform_ptr + 0x388);
  float t32 = *(float *)(transform_ptr + 0x390);
  float t33 = *(float *)(transform_ptr + 0x398);
  
  // 计算变换后的矩阵
  *render_matrix = t11 * m21 + t12 * m11 + t13 * m31;
  render_matrix[1] = t11 * m22 + t12 * m12 + t13 * m32;
  render_matrix[2] = t11 * m23 + t12 * m13 + t13 * m33;
  render_matrix[3] = t11 * m24 + t12 * m14 + t13 * m34;
  render_matrix[4] = t21 * m21 + t22 * m11 + t23 * m31;
  render_matrix[5] = t21 * m22 + t22 * m12 + t23 * m32;
  render_matrix[6] = t21 * m23 + t22 * m13 + t23 * m33;
  render_matrix[7] = t21 * m24 + t22 * m14 + t23 * m34;
  render_matrix[8] = t31 * m21 + t32 * m11 + t33 * m31;
  render_matrix[9] = t31 * m22 + t32 * m12 + t33 * m32;
  render_matrix[10] = t31 * m23 + t32 * m13 + t33 * m33;
  render_matrix[0xb] = t31 * m24 + t32 * m14 + t33 * m34;
  // 检查渲染配置是否需要更新
  longlong render_context = *(longlong *)(unaff_RBX + 600);
  if (*(int *)(render_context + 0x28) != *(int *)(render_config_data + 0x224)) {
    int total_items = *(int *)(render_context + 0x1c) + *(int *)(render_context + 0x18);
    *(int *)(render_context + 0x28) = *(int *)(render_config_data + 0x224);
    
    if (0 < total_items) {
      // 准备渲染缓冲区
      uStack0000000000000050 = in_stack_00000058;
      longlong buffer_base = (longlong)*(int *)(render_global_data + 0xe78) * 0x128 + render_global_data + 0xc28;
      int32_t render_result = FUN_180080380(buffer_base, total_items, render_data_base, render_matrix, CONCAT44(unaff_XMM7_Db, unaff_XMM7_Da));
      *(int32_t *)(render_context + 0x30) = render_result;
      FUN_1800802e0(buffer_base, render_result);
      // 处理渲染上下文
      if (*(longlong *)(render_context + 0x10) == 0) {
        if (*(int *)(render_context + 0x18) != 0) {
          *(int32_t *)(render_context + 0x2c) = *(int32_t *)(render_context + 0x30);
          return;
        }
      } else {
        // 初始化渲染线程数据
        char thread_count = *(char *)(render_context + 0x44);
        ulonglong thread_count_ulong = (ulonglong)thread_count;
        longlong *thread_ptr = (longlong *)(render_context + 0x38);
        int thread_count_int = (int)thread_count;
        // 检查线程数据是否需要重新分配
        if (*(int *)(render_context + 0x40) == (int)thread_count) {
          longlong *thread_data = (longlong *)*thread_ptr;
        } else {
          *(int *)(render_context + 0x40) = thread_count_int;
          if (*thread_ptr != 0) {
            // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *thread_ptr = 0;
          
          if (thread_count == '\0') {
            longlong *thread_data = (longlong *)0x0;
            *thread_ptr = 0;
          } else {
            longlong *thread_data = (longlong *)FUN_18062b1e0(system_memory_pool_ptr, (longlong)thread_count * 4);
            *thread_ptr = (longlong)thread_data;
          }
        }
        // 处理线程数据初始化
        if (thread_data != (longlong *)0x0) {
          int batch_start = 0;
          uint thread_count_uint = (uint)thread_count;
          int batch_count = batch_start;
          
          // 批量初始化线程数据（当线程数大于15时）
          if ((0 < thread_count_int) && (0xf < thread_count_uint)) {
            int base_offset = *(int *)(render_context + 0x2c);
            longlong *thread_end_ptr = (longlong *)((longlong)thread_data + (longlong)(thread_count + -1) * 4);
            
            // 检查内存边界
            if ((((longlong *)(render_context + 0x2c) < thread_data) || (thread_end_ptr < (longlong *)(render_context + 0x2c)))
               && ((thread_ptr < thread_data || (batch_count = 0, thread_end_ptr < thread_ptr)))) {
              
              // 计算批量处理的对齐偏移
              uint aligned_offset = thread_count_uint & 0x8000000f;
              if ((int)aligned_offset < 0) {
                aligned_offset = (aligned_offset - 1 | 0xfffffff0) + 1;
              }
              
              // 批量初始化线程数据
              thread_data = thread_data + 4;
              int value_base = 8;
              do {
                *(int *)(thread_data + -4) = batch_start + base_offset;
                *(int *)((longlong)thread_data + -0x1c) = batch_start + 1 + base_offset;
                *(int *)(thread_data + -3) = batch_start + 2 + base_offset;
                *(int *)((longlong)thread_data + -0x14) = batch_start + 3 + base_offset;
                batch_start = batch_start + 0x10;
                *(int *)(thread_data + -2) = value_base + -4 + base_offset;
                *(int *)((longlong)thread_data + -0xc) = value_base + -3 + base_offset;
                *(int *)(thread_data + -1) = value_base + -2 + base_offset;
                *(int *)((longlong)thread_data + -4) = value_base + -1 + base_offset;
                *(int *)thread_data = value_base + base_offset;
                *(int *)((longlong)thread_data + 4) = value_base + 1 + base_offset;
                *(int *)(thread_data + 1) = value_base + 2 + base_offset;
                *(int *)((longlong)thread_data + 0xc) = value_base + 3 + base_offset;
                *(int *)(thread_data + 2) = value_base + 4 + base_offset;
                *(int *)((longlong)thread_data + 0x14) = value_base + 5 + base_offset;
                *(int *)(thread_data + 3) = value_base + 6 + base_offset;
                *(int *)((longlong)thread_data + 0x1c) = value_base + 7 + base_offset;
                thread_data = thread_data + 8;
                value_base = value_base + 0x10;
                batch_count = batch_start;
              } while (batch_start < (int)(thread_count_uint - aligned_offset));
            }
          }
          // 初始化剩余的线程数据
          for (longlong thread_idx = (longlong)batch_count; thread_idx < (longlong)thread_count_ulong; thread_idx = thread_idx + 1) {
            int thread_value = *(int *)(render_context + 0x2c) + batch_count;
            batch_count = batch_count + 1;
            *(int *)(*thread_ptr + thread_idx * 4) = thread_value;
          }
          
          // 处理渲染项索引
          int render_item_count = *(int *)(render_context + 0x18);
          int item_index = 0;
          if (0 < (longlong)render_item_count) {
            longlong item_offset = 0;
            do {
              int render_offset = *(int *)(render_context + 0x30) + item_index;
              item_index = item_index + 1;
              byte *item_ptr = (byte *)(*(longlong *)(render_context + 0x10) + item_offset);
              item_offset = item_offset + 1;
              *(int *)(*thread_ptr + (ulonglong)*item_ptr * 4) = render_offset;
            } while (item_offset < render_item_count);
          }
        }
        // 获取渲染队列指针
        uint *render_queue = (uint *)((longlong)*(int *)(render_global_data + 0xc20) * 0x128 + render_global_data + 0x9d0);
        
        if (thread_count_int == 0) {
          uint queue_index = (int)thread_count - 1;
        } else {
          // 原子操作更新队列索引
          LOCK();
          uint queue_index = *render_queue;
          *render_queue = *render_queue + (int)thread_count;
          UNLOCK();
          
          // 计算队列块索引
          ulonglong start_block = (ulonglong)(queue_index >> 0xb);
          ulonglong end_block = (ulonglong)(thread_count + -1 + queue_index >> 0xb);
          
          // 检查并分配必要的队列块
          if (start_block <= end_block) {
            char *block_flag = (char *)((longlong)render_queue + start_block + 0x108);
            longlong block_count = (end_block - start_block) + 1;
            uint *block_ptr = render_queue + start_block * 2 + 2;
            
            do {
              int current_block = (int)start_block;
              if (*(longlong *)block_ptr == 0) {
                // 分配新的队列块
                longlong new_block = FUN_18062b420(system_memory_pool_ptr, 0x2000, 0x25);
                LOCK();
                bool block_allocated = *(longlong *)(render_queue + (longlong)current_block * 2 + 2) == 0;
                if (block_allocated) {
                  *(longlong *)(render_queue + (longlong)current_block * 2 + 2) = new_block;
                }
                UNLOCK();
                
                if (block_allocated) {
                  LOCK();
                  *(int8_t *)((longlong)current_block + 0x108 + (longlong)render_queue) = 0;
                  UNLOCK();
                } else {
                  if (new_block != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  // 等待块初始化完成
                  do {
                  } while (*block_flag != '\0');
                }
              } else {
                // 等待块初始化完成
                do {
                } while (*block_flag != '\0');
              }
              
              start_block = (ulonglong)(current_block + 1);
              block_ptr = block_ptr + 2;
              block_flag = block_flag + 1;
              block_count = block_count + -1;
            } while (block_count != 0);
          }
        }
        // 复制线程数据到渲染队列
        int32_t *thread_data_ptr = *(int32_t **)(render_context + 0x38);
        uint block_index = queue_index >> 0xb;
        *(uint *)(render_context + 0x2c) = queue_index;
        
        // 批量复制数据（如果适合）
        if (block_index == (int)thread_count + queue_index >> 0xb) {
          // WARNING: Subroutine does not return
          memcpy(*(longlong *)(render_queue + (ulonglong)block_index * 2 + 2) +
                 (ulonglong)(queue_index + block_index * -0x800) * 4, thread_data_ptr, (thread_count_ulong & 0xffffffff) << 2);
        }
        
        // 逐个复制数据
        if (thread_count_int != 0) {
          ulonglong remaining_count = thread_count_ulong & 0xffffffff;
          do {
            int32_t data_value = *thread_data_ptr;
            thread_data_ptr = thread_data_ptr + 1;
            *(int32_t *)(*(longlong *)(render_queue + (ulonglong)(queue_index >> 0xb) * 2 + 2) +
                           (ulonglong)(queue_index + (queue_index >> 0xb) * -0x800) * 4) = data_value;
            remaining_count = remaining_count - 1;
            queue_index = queue_index + 1;
          } while (remaining_count != 0);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 更新渲染矩阵
 * 根据指定的参数更新渲染矩阵数据
 * @param param_1 渲染数据基础指针
 * @param param_2 渲染索引
 * @param param_3 未定义参数
 * @param param_4 渲染矩阵输出指针
 */
void update_render_matrix(longlong param_1, uint param_2, uint64_t param_3, float *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  uint64_t *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  char cVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint64_t uVar28;
  int32_t uVar29;
  uint uVar30;
  longlong lVar31;
  longlong *plVar32;
  longlong lVar33;
  int iVar34;
  int iVar35;
  longlong unaff_RBX;
  ulonglong uVar36;
  char *pcVar37;
  uint *puVar38;
  int iVar39;
  uint uVar40;
  longlong unaff_RDI;
  int iVar41;
  int iVar42;
  int32_t *puVar43;
  uint *puVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  bool bVar47;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  uint64_t uStack0000000000000050;
  uint64_t in_stack_00000058;
  
  // 计算渲染数据基础地址
  longlong render_base = (longlong)*(int *)(param_1 + 0x250) * 0x128 + param_1;
  
  // 获取渲染数据块指针
  longlong render_chunk = *(longlong *)(render_base + 8 + (ulonglong)(param_2 >> 0xd) * 8);
  longlong matrix_offset = (ulonglong)(param_2 + (param_2 >> 0xd) * -0x2000) * 0x40;
  
  // 提取4x4矩阵数据到输出缓冲区
  uint64_t matrix_row1 = ((uint64_t *)(render_chunk + matrix_offset))[1];
  *(uint64_t *)param_4 = *(uint64_t *)(render_chunk + matrix_offset);
  *(uint64_t *)(param_4 + 2) = matrix_row1;
  
  uint64_t *matrix_data = (uint64_t *)(render_chunk + 0x10 + matrix_offset);
  matrix_row1 = matrix_data[1];
  *(uint64_t *)(param_4 + 4) = *matrix_data;
  *(uint64_t *)(param_4 + 6) = matrix_row1;
  
  matrix_data = (uint64_t *)(render_chunk + 0x20 + matrix_offset);
  matrix_row1 = matrix_data[1];
  *(uint64_t *)(param_4 + 8) = *matrix_data;
  *(uint64_t *)(param_4 + 10) = matrix_row1;
  
  matrix_data = (uint64_t *)(render_chunk + 0x30 + matrix_offset);
  matrix_row1 = matrix_data[1];
  *(uint64_t *)(param_4 + 0xc) = *matrix_data;
  *(uint64_t *)(param_4 + 0xe) = matrix_row1;
  // 获取变换矩阵的各个元素
  longlong transform_ptr = *(longlong *)(unaff_RDI + 0x10);
  float m31 = param_4[8];
  float m32 = param_4[9];
  float m33 = param_4[10];
  float m34 = param_4[0xb];
  float m11 = *param_4;
  float m12 = param_4[1];
  float m13 = param_4[2];
  float m14 = param_4[3];
  float m21 = param_4[4];
  float m22 = param_4[5];
  float m23 = param_4[6];
  float m24 = param_4[7];
  
  // 获取变换参数
  float t11 = *(float *)(transform_ptr + 0x374);
  float t12 = *(float *)(transform_ptr + 0x370);
  float t13 = *(float *)(transform_ptr + 0x378);
  float t21 = *(float *)(transform_ptr + 900);
  float t31 = *(float *)(transform_ptr + 0x394);
  float t22 = *(float *)(transform_ptr + 0x380);
  float t23 = *(float *)(transform_ptr + 0x388);
  float t32 = *(float *)(transform_ptr + 0x390);
  float t33 = *(float *)(transform_ptr + 0x398);
  
  // 计算变换后的矩阵
  *param_4 = t11 * m21 + t12 * m11 + t13 * m31;
  param_4[1] = t11 * m22 + t12 * m12 + t13 * m32;
  param_4[2] = t11 * m23 + t12 * m13 + t13 * m33;
  param_4[3] = t11 * m24 + t12 * m14 + t13 * m34;
  param_4[4] = t21 * m21 + t22 * m11 + t23 * m31;
  param_4[5] = t21 * m22 + t22 * m12 + t23 * m32;
  param_4[6] = t21 * m23 + t22 * m13 + t23 * m33;
  param_4[7] = t21 * m24 + t22 * m14 + t23 * m34;
  param_4[8] = t31 * m21 + t32 * m11 + t33 * m31;
  param_4[9] = t31 * m22 + t32 * m12 + t33 * m32;
  param_4[10] = t31 * m23 + t32 * m13 + t33 * m33;
  param_4[0xb] = t31 * m24 + t32 * m14 + t33 * m34;
  lVar15 = *(longlong *)(unaff_RBX + 600);
  if (*(int *)(lVar15 + 0x28) != *(int *)(system_main_module_state + 0x224)) {
    iVar39 = *(int *)(lVar15 + 0x1c) + *(int *)(lVar15 + 0x18);
    *(int *)(lVar15 + 0x28) = *(int *)(system_main_module_state + 0x224);
    if (0 < iVar39) {
      uStack0000000000000050 = in_stack_00000058;
      lVar31 = (longlong)*(int *)(system_parameter_buffer + 0xe78) * 0x128 + system_parameter_buffer + 0xc28;
      uVar29 = FUN_180080380(lVar31,iVar39,param_1,param_4,CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da));
      *(int32_t *)(lVar15 + 0x30) = uVar29;
      FUN_1800802e0(lVar31,uVar29);
      if (*(longlong *)(lVar15 + 0x10) == 0) {
        if (*(int *)(lVar15 + 0x18) != 0) {
          *(int32_t *)(lVar15 + 0x2c) = *(int32_t *)(lVar15 + 0x30);
          return;
        }
      }
      else {
        cVar14 = *(char *)(lVar15 + 0x44);
        uVar36 = (ulonglong)cVar14;
        plVar1 = (longlong *)(lVar15 + 0x38);
        iVar39 = (int)cVar14;
        if (*(int *)(lVar15 + 0x40) == (int)cVar14) {
          plVar32 = (longlong *)*plVar1;
        }
        else {
          *(int *)(lVar15 + 0x40) = iVar39;
          if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *plVar1 = 0;
          if (cVar14 == '\0') {
            plVar32 = (longlong *)0x0;
            *plVar1 = 0;
          }
          else {
            plVar32 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,(longlong)cVar14 * 4);
            *plVar1 = (longlong)plVar32;
          }
        }
        if (plVar32 != (longlong *)0x0) {
          iVar41 = 0;
          uVar40 = (uint)cVar14;
          iVar42 = iVar41;
          if ((0 < iVar39) && (0xf < uVar40)) {
            iVar35 = *(int *)(lVar15 + 0x2c);
            plVar2 = (longlong *)((longlong)plVar32 + (longlong)(cVar14 + -1) * 4);
            if ((((longlong *)(lVar15 + 0x2c) < plVar32) || (plVar2 < (longlong *)(lVar15 + 0x2c)))
               && ((plVar1 < plVar32 || (iVar42 = 0, plVar2 < plVar1)))) {
              uVar30 = uVar40 & 0x8000000f;
              if ((int)uVar30 < 0) {
                uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
              }
              plVar32 = plVar32 + 4;
              iVar34 = 8;
              do {
                *(int *)(plVar32 + -4) = iVar41 + iVar35;
                *(int *)((longlong)plVar32 + -0x1c) = iVar41 + 1 + iVar35;
                *(int *)(plVar32 + -3) = iVar41 + 2 + iVar35;
                *(int *)((longlong)plVar32 + -0x14) = iVar41 + 3 + iVar35;
                iVar41 = iVar41 + 0x10;
                *(int *)(plVar32 + -2) = iVar34 + -4 + iVar35;
                *(int *)((longlong)plVar32 + -0xc) = iVar34 + -3 + iVar35;
                *(int *)(plVar32 + -1) = iVar34 + -2 + iVar35;
                *(int *)((longlong)plVar32 + -4) = iVar34 + -1 + iVar35;
                *(int *)plVar32 = iVar34 + iVar35;
                *(int *)((longlong)plVar32 + 4) = iVar34 + 1 + iVar35;
                *(int *)(plVar32 + 1) = iVar34 + 2 + iVar35;
                *(int *)((longlong)plVar32 + 0xc) = iVar34 + 3 + iVar35;
                *(int *)(plVar32 + 2) = iVar34 + 4 + iVar35;
                *(int *)((longlong)plVar32 + 0x14) = iVar34 + 5 + iVar35;
                *(int *)(plVar32 + 3) = iVar34 + 6 + iVar35;
                *(int *)((longlong)plVar32 + 0x1c) = iVar34 + 7 + iVar35;
                plVar32 = plVar32 + 8;
                iVar34 = iVar34 + 0x10;
                iVar42 = iVar41;
              } while (iVar41 < (int)(uVar40 - uVar30));
            }
          }
          for (lVar31 = (longlong)iVar42; lVar31 < (longlong)uVar36; lVar31 = lVar31 + 1) {
            iVar41 = *(int *)(lVar15 + 0x2c) + iVar42;
            iVar42 = iVar42 + 1;
            *(int *)(*plVar1 + lVar31 * 4) = iVar41;
          }
          iVar42 = *(int *)(lVar15 + 0x18);
          iVar41 = 0;
          if (0 < (longlong)iVar42) {
            lVar31 = 0;
            do {
              iVar35 = *(int *)(lVar15 + 0x30) + iVar41;
              iVar41 = iVar41 + 1;
              pbVar3 = (byte *)(*(longlong *)(lVar15 + 0x10) + lVar31);
              lVar31 = lVar31 + 1;
              *(int *)(*plVar1 + (ulonglong)*pbVar3 * 4) = iVar35;
            } while (lVar31 < iVar42);
          }
        }
        puVar38 = (uint *)((longlong)*(int *)(system_parameter_buffer + 0xc20) * 0x128 +
                          system_parameter_buffer + 0x9d0);
        if (iVar39 == 0) {
          uVar40 = (int)cVar14 - 1;
        }
        else {
          LOCK();
          uVar40 = *puVar38;
          *puVar38 = *puVar38 + (int)cVar14;
          UNLOCK();
          uVar45 = (ulonglong)(uVar40 >> 0xb);
          uVar46 = (ulonglong)(cVar14 + -1 + uVar40 >> 0xb);
          if (uVar45 <= uVar46) {
            pcVar37 = (char *)((longlong)puVar38 + uVar45 + 0x108);
            lVar31 = (uVar46 - uVar45) + 1;
            puVar44 = puVar38 + uVar45 * 2 + 2;
            do {
              iVar42 = (int)uVar45;
              if (*(longlong *)puVar44 == 0) {
                lVar33 = FUN_18062b420(system_memory_pool_ptr,0x2000,0x25);
                LOCK();
                bVar47 = *(longlong *)(puVar38 + (longlong)iVar42 * 2 + 2) == 0;
                if (bVar47) {
                  *(longlong *)(puVar38 + (longlong)iVar42 * 2 + 2) = lVar33;
                }
                UNLOCK();
                if (bVar47) {
                  LOCK();
                  *(int8_t *)((longlong)iVar42 + 0x108 + (longlong)puVar38) = 0;
                  UNLOCK();
                }
                else {
                  if (lVar33 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  do {
                  } while (*pcVar37 != '\0');
                }
              }
              else {
                do {
                } while (*pcVar37 != '\0');
              }
              uVar45 = (ulonglong)(iVar42 + 1);
              puVar44 = puVar44 + 2;
              pcVar37 = pcVar37 + 1;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
          }
        }
        puVar43 = *(int32_t **)(lVar15 + 0x38);
        uVar30 = uVar40 >> 0xb;
        *(uint *)(lVar15 + 0x2c) = uVar40;
        if (uVar30 == (int)cVar14 + uVar40 >> 0xb) {
                    // WARNING: Subroutine does not return
          memcpy(*(longlong *)(puVar38 + (ulonglong)uVar30 * 2 + 2) +
                 (ulonglong)(uVar40 + uVar30 * -0x800) * 4,puVar43,(uVar36 & 0xffffffff) << 2);
        }
        if (iVar39 != 0) {
          uVar36 = uVar36 & 0xffffffff;
          do {
            uVar29 = *puVar43;
            puVar43 = puVar43 + 1;
            *(int32_t *)
             (*(longlong *)(puVar38 + (ulonglong)(uVar40 >> 0xb) * 2 + 2) +
             (ulonglong)(uVar40 + (uVar40 >> 0xb) * -0x800) * 4) = uVar29;
            uVar36 = uVar36 - 1;
            uVar40 = uVar40 + 1;
          } while (uVar36 != 0);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化渲染缓冲区
 * 初始化和配置渲染系统的缓冲区
 */
void initialize_render_buffers(void)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  char cVar4;
  longlong lVar5;
  int32_t uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong unaff_RBX;
  longlong lVar12;
  ulonglong uVar13;
  char *pcVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int32_t *puVar20;
  uint *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  bool bVar24;
  uint64_t uStack0000000000000050;
  uint64_t in_stack_00000058;
  
  lVar5 = *(longlong *)(unaff_RBX + 600);
  if (*(int *)(lVar5 + 0x28) != *(int *)(system_main_module_state + 0x224)) {
    iVar16 = *(int *)(lVar5 + 0x1c) + *(int *)(lVar5 + 0x18);
    *(int *)(lVar5 + 0x28) = *(int *)(system_main_module_state + 0x224);
    if (0 < iVar16) {
      uStack0000000000000050 = in_stack_00000058;
      lVar12 = (longlong)*(int *)(system_parameter_buffer + 0xe78) * 0x128 + system_parameter_buffer + 0xc28;
      uVar6 = FUN_180080380(lVar12,iVar16);
      *(int32_t *)(lVar5 + 0x30) = uVar6;
      FUN_1800802e0(lVar12,uVar6);
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        if (*(int *)(lVar5 + 0x18) != 0) {
          *(int32_t *)(lVar5 + 0x2c) = *(int32_t *)(lVar5 + 0x30);
          return;
        }
      }
      else {
        cVar4 = *(char *)(lVar5 + 0x44);
        uVar13 = (ulonglong)cVar4;
        plVar1 = (longlong *)(lVar5 + 0x38);
        iVar16 = (int)cVar4;
        if (*(int *)(lVar5 + 0x40) == (int)cVar4) {
          plVar8 = (longlong *)*plVar1;
        }
        else {
          *(int *)(lVar5 + 0x40) = iVar16;
          if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *plVar1 = 0;
          if (cVar4 == '\0') {
            plVar8 = (longlong *)0x0;
            *plVar1 = 0;
          }
          else {
            plVar8 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,(longlong)cVar4 * 4);
            *plVar1 = (longlong)plVar8;
          }
        }
        if (plVar8 != (longlong *)0x0) {
          iVar18 = 0;
          uVar17 = (uint)cVar4;
          iVar19 = iVar18;
          if ((0 < iVar16) && (0xf < uVar17)) {
            iVar11 = *(int *)(lVar5 + 0x2c);
            plVar2 = (longlong *)((longlong)plVar8 + (longlong)(cVar4 + -1) * 4);
            if ((((longlong *)(lVar5 + 0x2c) < plVar8) || (plVar2 < (longlong *)(lVar5 + 0x2c))) &&
               ((plVar1 < plVar8 || (iVar19 = 0, plVar2 < plVar1)))) {
              uVar7 = uVar17 & 0x8000000f;
              if ((int)uVar7 < 0) {
                uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
              }
              plVar8 = plVar8 + 4;
              iVar10 = 8;
              do {
                *(int *)(plVar8 + -4) = iVar18 + iVar11;
                *(int *)((longlong)plVar8 + -0x1c) = iVar18 + 1 + iVar11;
                *(int *)(plVar8 + -3) = iVar18 + 2 + iVar11;
                *(int *)((longlong)plVar8 + -0x14) = iVar18 + 3 + iVar11;
                iVar18 = iVar18 + 0x10;
                *(int *)(plVar8 + -2) = iVar10 + -4 + iVar11;
                *(int *)((longlong)plVar8 + -0xc) = iVar10 + -3 + iVar11;
                *(int *)(plVar8 + -1) = iVar10 + -2 + iVar11;
                *(int *)((longlong)plVar8 + -4) = iVar10 + -1 + iVar11;
                *(int *)plVar8 = iVar10 + iVar11;
                *(int *)((longlong)plVar8 + 4) = iVar10 + 1 + iVar11;
                *(int *)(plVar8 + 1) = iVar10 + 2 + iVar11;
                *(int *)((longlong)plVar8 + 0xc) = iVar10 + 3 + iVar11;
                *(int *)(plVar8 + 2) = iVar10 + 4 + iVar11;
                *(int *)((longlong)plVar8 + 0x14) = iVar10 + 5 + iVar11;
                *(int *)(plVar8 + 3) = iVar10 + 6 + iVar11;
                *(int *)((longlong)plVar8 + 0x1c) = iVar10 + 7 + iVar11;
                plVar8 = plVar8 + 8;
                iVar10 = iVar10 + 0x10;
                iVar19 = iVar18;
              } while (iVar18 < (int)(uVar17 - uVar7));
            }
          }
          for (lVar12 = (longlong)iVar19; lVar12 < (longlong)uVar13; lVar12 = lVar12 + 1) {
            iVar18 = *(int *)(lVar5 + 0x2c) + iVar19;
            iVar19 = iVar19 + 1;
            *(int *)(*plVar1 + lVar12 * 4) = iVar18;
          }
          iVar19 = *(int *)(lVar5 + 0x18);
          iVar18 = 0;
          if (0 < (longlong)iVar19) {
            lVar12 = 0;
            do {
              iVar11 = *(int *)(lVar5 + 0x30) + iVar18;
              iVar18 = iVar18 + 1;
              pbVar3 = (byte *)(*(longlong *)(lVar5 + 0x10) + lVar12);
              lVar12 = lVar12 + 1;
              *(int *)(*plVar1 + (ulonglong)*pbVar3 * 4) = iVar11;
            } while (lVar12 < iVar19);
          }
        }
        puVar15 = (uint *)((longlong)*(int *)(system_parameter_buffer + 0xc20) * 0x128 +
                          system_parameter_buffer + 0x9d0);
        if (iVar16 == 0) {
          uVar17 = (int)cVar4 - 1;
        }
        else {
          LOCK();
          uVar17 = *puVar15;
          *puVar15 = *puVar15 + (int)cVar4;
          UNLOCK();
          uVar22 = (ulonglong)(uVar17 >> 0xb);
          uVar23 = (ulonglong)(cVar4 + -1 + uVar17 >> 0xb);
          if (uVar22 <= uVar23) {
            pcVar14 = (char *)((longlong)puVar15 + uVar22 + 0x108);
            lVar12 = (uVar23 - uVar22) + 1;
            puVar21 = puVar15 + uVar22 * 2 + 2;
            do {
              iVar19 = (int)uVar22;
              if (*(longlong *)puVar21 == 0) {
                lVar9 = FUN_18062b420(system_memory_pool_ptr,0x2000,0x25);
                LOCK();
                bVar24 = *(longlong *)(puVar15 + (longlong)iVar19 * 2 + 2) == 0;
                if (bVar24) {
                  *(longlong *)(puVar15 + (longlong)iVar19 * 2 + 2) = lVar9;
                }
                UNLOCK();
                if (bVar24) {
                  LOCK();
                  *(int8_t *)((longlong)iVar19 + 0x108 + (longlong)puVar15) = 0;
                  UNLOCK();
                }
                else {
                  if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  do {
                  } while (*pcVar14 != '\0');
                }
              }
              else {
                do {
                } while (*pcVar14 != '\0');
              }
              uVar22 = (ulonglong)(iVar19 + 1);
              puVar21 = puVar21 + 2;
              pcVar14 = pcVar14 + 1;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
        }
        puVar20 = *(int32_t **)(lVar5 + 0x38);
        uVar7 = uVar17 >> 0xb;
        *(uint *)(lVar5 + 0x2c) = uVar17;
        if (uVar7 == (int)cVar4 + uVar17 >> 0xb) {
                    // WARNING: Subroutine does not return
          memcpy(*(longlong *)(puVar15 + (ulonglong)uVar7 * 2 + 2) +
                 (ulonglong)(uVar17 + uVar7 * -0x800) * 4,puVar20,(uVar13 & 0xffffffff) << 2);
        }
        if (iVar16 != 0) {
          uVar13 = uVar13 & 0xffffffff;
          do {
            uVar6 = *puVar20;
            puVar20 = puVar20 + 1;
            *(int32_t *)
             (*(longlong *)(puVar15 + (ulonglong)(uVar17 >> 0xb) * 2 + 2) +
             (ulonglong)(uVar17 + (uVar17 >> 0xb) * -0x800) * 4) = uVar6;
            uVar13 = uVar13 - 1;
            uVar17 = uVar17 + 1;
          } while (uVar13 != 0);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 获取渲染上下文
 * 从线程本地存储中获取渲染上下文指针
 * @param param_1 上下文参数
 * @param param_2 未定义参数
 * @param param_3 未定义参数
 * @param param_4 未定义参数
 * @return 渲染上下文指针
 */
void *get_render_context(longlong param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  uint64_t context_result;
  
  context_result = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    return (void *)(*(longlong *)(param_1 + 0x1b8) + 0x10);
  }
  
  // 检查线程本地存储中的渲染值
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 0x48) < render_tls_value) {
    SystemInitializer(&system_buffer_9158);
    if (render_tls_value == -1) {
      init_system_config_render = &default_render_context;
      init_system_config_render = &system_buffer_9178;
    }
  }
  
  // 返回默认的上下文结果
  return (void *)context_result;


/**
 * 清理渲染线程
 * 清理和重置渲染线程的状态
 * @param param_1 渲染上下文指针
 */
void cleanup_render_threads(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  // 检查是否启用多线程渲染
  if (((*(byte *)(param_1 + 0xfd) & 0x20) != 0) && (*(longlong *)(param_1 + 0x1e0) != 0)) {
    int thread_index = 0;
    longlong thread_offset = 0;
    
    // 遍历所有渲染线程
    do {
      // 等待线程就绪状态
      while ((*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x15 + thread_offset) == '\x02' ||
             (*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x15 + thread_offset) == '\x01'))) {
        Sleep(0);
      }
      
      // 重置线程状态
      longlong current_thread = (longlong)thread_index;
      thread_offset = thread_offset + 0x18;
      thread_index = thread_index + 1;
      
      // 加锁并重置线程标志
      LOCK();
      *(int8_t *)(*(longlong *)(param_1 + 0x1e0) + current_thread * 0x18 + 0x15) = 0;
      UNLOCK();
    } while (thread_index < 0x10);  // 最多16个线程
  }
  return;
}



/**
 * 重置线程标志
 * 重置所有渲染线程的状态标志
 * @return 最后一个线程的原始状态
 */
int8_t reset_thread_flags(void)
{
  int8_t *thread_flag_ptr;
  int8_t original_flag;
  longlong thread_index;
  longlong unaff_RBX;
  int loop_counter;
  longlong thread_offset;
  
  loop_counter = 0;
  thread_offset = 0;
  
  // 遍历所有线程进行重置
  do {
    // 等待线程就绪
    while ((*(char *)(*(longlong *)(unaff_RBX + 0x1e0) + 0x15 + thread_offset) == '\x02' ||
           (*(char *)(*(longlong *)(unaff_RBX + 0x1e0) + 0x15 + thread_offset) == '\x01'))) {
      Sleep(0);
    }
    
    // 保存并重置线程标志
    thread_index = (longlong)loop_counter;
    thread_offset = thread_offset + 0x18;
    loop_counter = loop_counter + 1;
    
    LOCK();
    thread_flag_ptr = (int8_t *)(*(longlong *)(unaff_RBX + 0x1e0) + thread_index * 0x18 + 0x15);
    original_flag = *thread_flag_ptr;
    *thread_flag_ptr = 0;
    UNLOCK();
  } while (loop_counter < 0x10);  // 最多16个线程
  
  return original_flag;
}





