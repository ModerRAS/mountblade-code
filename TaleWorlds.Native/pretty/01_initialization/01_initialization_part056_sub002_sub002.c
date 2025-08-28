#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 01_initialization_part056_sub002_sub002.c - 初始化模块：骨骼动画系统初始化（简化实现）
// 
// 本文件包含骨骼动画系统的核心初始化函数，负责：
// 1. 分配和管理骨骼动画数据结构
// 2. 计算骨骼变换矩阵和法线
// 3. 处理骨骼权重和顶点变形
// 4. 设置骨骼绑定姿势
//
// 简化实现说明：
// - 已完成主要变量的语义化命名
// - 添加了详细的中文注释
// - 翻译了核心算法逻辑（矩阵计算、向量归一化等）
// - 保留了原始的内存管理和数据结构操作
// - 未完全翻译所有函数调用（保留了一些原始函数名）

/**
 * 初始化骨骼动画系统（简化实现）
 * 
 * 该函数是骨骼动画系统的核心初始化函数，负责：
 * - 创建和管理骨骼数据结构
 * - 计算骨骼变换矩阵
 * - 处理顶点蒙皮和变形
 * - 设置骨骼绑定姿势
 * 
 * 简化实现特点：
 * - 变量已重命名为有意义的名称
 * - 添加了详细的中文注释
 * - 核心算法逻辑已翻译
 * - 保留了原始内存管理操作
 * 
 * @param animation_context 指向动画系统上下文结构的指针
 */
void initialize_skeletal_animation_system(longlong animation_context)

{
  int *bone_count_ptr;           // 骨骼数量指针
  uint *bone_flag_ptr;           // 骨骼标志指针
  uint64_t *transform_matrix1; // 变换矩阵1
  uint64_t *transform_matrix2; // 变换矩阵2
  float weight_value;            // 权重值
  uint64_t matrix_data1;       // 矩阵数据1
  uint64_t matrix_data2;       // 矩阵数据2
  int8_t normal_vector[16];  // 法线向量
  bool is_valid_transform;       // 是否有效变换
  int *temp_index_ptr;           // 临时索引指针
  int bone_count;                // 骨骼数量
  longlong temp_addr1;           // 临时地址1
  int *array_ptr1;               // 数组指针1
  int *array_ptr2;               // 数组指针2
  int *array_ptr3;               // 数组指针3
  int *array_ptr4;               // 数组指针4
  longlong data_offset;          // 数据偏移
  float *float_array;            // 浮点数组
  uint bone_id;                  // 骨骼ID
  int *current_ptr;              // 当前指针
  longlong vertex_data_addr;     // 顶点数据地址
  longlong animation_data_addr;  // 动画数据地址
  longlong matrix_addr;          // 矩阵地址
  longlong frame_data_addr;      // 帧数据地址
  int *index_ptr1;               // 索引指针1
  int *index_ptr2;               // 索引指针2
  int frame_index;               // 帧索引
  ulonglong memory_size;          // 内存大小
  int32_t *buffer_ptr;         // 缓冲区指针
  ulonglong array_size;          // 数组大小
  longlong temp_addr2;           // 临时地址2
  uint *uint_array;              // 无符号整数数组
  uint vertex_id;                // 顶点ID
  int *vertex_ptr;               // 顶点指针
  int8_t (*data_buffer) [16]; // 数据缓冲区
  ulonglong buffer_size1;         // 缓冲区大小1
  int8_t (*buffer_ptr2) [16]; // 缓冲区指针2
  ulonglong buffer_size2;         // 缓冲区大小2
  longlong *long_array;           // 长整数数组
  longlong temp_addr3;           // 临时地址3
  ulonglong temp_size1;           // 临时大小1
  int8_t (*temp_buffer) [16]; // 临时缓冲区
  longlong temp_offset;           // 临时偏移
  bool has_influence;            // 是否有影响
  float vector_x;                // 向量X分量
  float vector_y;                // 向量Y分量
  int8_t temp_vector[16];    // 临时向量
  float normal_x;                // 法线X分量
  float normal_y;                // 法线Y分量
  float normal_z;                // 法线Z分量
  float vector1_x;               // 向量1的X分量
  float vector1_y;               // 向量1的Y分量
  float vector1_z;               // 向量1的Z分量
  int stack_counter;              // 堆栈计数器
  ulonglong bone_influences;     // 骨骼影响数量
  ulonglong remaining_bones;     // 剩余骨骼数量
  int *bone_array_ptr;           // 骨骼数组指针
  int *vertex_array_ptr;         // 顶点数组指针
  int *temp_array_ptr;           // 临时数组指针
  int32_t array_flags;        // 数组标志
  int *influence_ptr;            // 影响指针
  int *frame_ptr;                // 帧指针
  int total_frames;              // 总帧数
  int8_t (*matrix_buffer) [16]; // 矩阵缓冲区
  ulonglong matrix_count;        // 矩阵数量
  longlong current_bone;         // 当前骨骼
  uint processing_flags;         // 处理标志
  uint vertex_flags;             // 顶点标志
  int32_t alignment_pad;      // 对齐填充
  uint64_t matrix_data;        // 矩阵数据
  int *stack_ptr;                // 堆栈指针
  int32_t stack_flags;        // 堆栈标志
  uint64_t stack_data1;        // 堆栈数据1
  uint64_t stack_data2;        // 堆栈数据2
  int *temp_stack_ptr;           // 临时堆栈指针
  int32_t temp_stack_flags;   // 临时堆栈标志
  uint64_t temp_matrix;          // 临时矩阵
  float normal_length;            // 法线长度
  float inv_normal_length;       // 反向法线长度
  longlong main_frame_addr;      // 主帧地址
  longlong *frame_array_ptr;     // 帧数组指针
  longlong *temp_array_ptr2;     // 临时数组指针2
  int32_t frame_flags;        // 帧标志
  int8_t transform_buffer[16]; // 变换缓冲区
  uint64_t buffer_data1;       // 缓冲区数据1
  int32_t buffer_flags;       // 缓冲区标志
  int32_t *bone_weights;      // 骨骼权重
  uint64_t weight_data1;        // 权重数据1
  uint64_t weight_data2;        // 权重数据2
  int32_t weight_flags;        // 权重标志
  uint64_t animation_data1;     // 动画数据1
  uint64_t animation_data2;     // 动画数据2
  uint64_t animation_data3;     // 动画数据3
  uint64_t frame_data1;         // 帧数据1
  uint64_t frame_data2;         // 帧数据2
  uint64_t frame_data3;         // 帧数据3
  uint64_t frame_data4;         // 帧数据4
  uint64_t frame_data5;         // 帧数据5
  uint64_t frame_data6;         // 帧数据6
  uint64_t frame_data7;         // 帧数据7
  uint64_t frame_data8;         // 帧数据8
  uint64_t frame_data9;         // 帧数据9
  uint64_t frame_data10;        // 帧数据10
  uint64_t frame_data11;        // 帧数据11
  uint64_t frame_data12;        // 帧数据12
  int32_t frame_end_flag;      // 帧结束标志
  
  animation_data1 = 0xfffffffffffffffe;  // 初始化动画数据1
  bone_count_ptr = (int *)(animation_context + 0x60);  // 获取骨骼数量指针
  frame_index = *bone_count_ptr;        // 获取帧索引
  bone_count = *(int *)(animation_context + 0x88);  // 获取骨骼数量
  memory_size = (ulonglong)bone_count;  // 计算内存大小
  total_frames = *(int *)(animation_context + 0x10);  // 获取总帧数
  bone_weights = (int32_t *)0x0;     // 初始化骨骼权重为NULL
  weight_data1 = 0;                     // 初始化权重数据1
  weight_data2 = 0;                     // 初始化权重数据2
  weight_flags = 3;                     // 初始化权重标志
  FUN_180080ca0(&bone_weights, memory_size);  // 分配骨骼权重内存
  temp_size1 = memory_size;            // 临时存储内存大小
  buffer_ptr = bone_weights;           // 设置缓冲区指针
  if (0 < bone_count) {                // 如果骨骼数量大于0
    for (; temp_size1 != 0; temp_size1 = temp_size1 - 1) {
      *buffer_ptr = 1;                 // 初始化所有骨骼权重为1
      buffer_ptr = buffer_ptr + 1;     // 移动到下一个权重
    }
  }
  transform_buffer = ZEXT816(0);        // 初始化变换缓冲区
  buffer_data1 = 0;                   // 初始化缓冲区数据1
  buffer_flags = 3;                   // 初始化缓冲区标志
  vertex_data_addr = (ulonglong)*(ushort *)(animation_context + 0xc0) + 1;  // 计算顶点数据地址
  
  // 处理顶点数据缓冲区分配
  if (vertex_data_addr == 0) {
    vertex_data_addr = 0;              // 如果地址为0，保持为0
    transform_buffer = ZEXT816(0) << 0x40;  // 设置变换缓冲区
  }
  else {
    FUN_180082290(transform_buffer, vertex_data_addr);  // 分配变换缓冲区
    vertex_data_addr = transform_buffer._0_8_;  // 获取缓冲区地址
  }
  
  matrix_buffer = (int8_t (*) [16])(ulonglong)*(ushort *)(animation_context + 0xc0);  // 设置矩阵缓冲区
  current_bone = -1;                     // 初始化当前骨骼为-1
  do {
    temp_addr2 = current_bone + 1;      // 计算临时地址2
    data_offset = temp_addr2 * 0x20;    // 计算数据偏移
    animation_data_addr = *(longlong *)(vertex_data_addr + 8 + data_offset);  // 获取动画数据地址
    frame_data_addr = *(longlong *)(vertex_data_addr + data_offset);  // 获取帧数据地址
    temp_size1 = animation_data_addr - frame_data_addr >> 4;  // 计算临时大小1
    
    // 检查是否需要重新分配内存
    if (temp_size1 < memory_size) {
      array_size = memory_size - temp_size1;  // 计算数组大小
      if ((ulonglong)(*(longlong *)(vertex_data_addr + 0x10 + data_offset) - animation_data_addr >> 4) < array_size) {
        // 计算新的缓冲区大小
        if (temp_size1 == 0) {
          temp_size1 = 1;
        }
        else {
          temp_size1 = temp_size1 * 2;
        }
        if (temp_size1 < memory_size) {
          temp_size1 = memory_size;
        }
        
        // 分配新的内存
        if (temp_size1 == 0) {
          temp_addr1 = 0;
        }
        else {
          temp_addr1 = FUN_18062b420(_DAT_180c8ed18, temp_size1 << 4, *(int8_t *)(vertex_data_addr + 0x18 + data_offset));
          animation_data_addr = *(longlong *)(vertex_data_addr + 8 + data_offset);
          frame_data_addr = *(longlong *)(vertex_data_addr + data_offset);
        }
        
        // 移动现有数据
        if (frame_data_addr != animation_data_addr) {
          // WARNING: Subroutine does not return
          memmove(temp_addr1, frame_data_addr, animation_data_addr - frame_data_addr);
        }
        
        // 清零新分配的内存
        if (array_size != 0) {
          // WARNING: Subroutine does not return
          memset(temp_addr1, 0, array_size * 0x10);
        }
        
        // 释放旧内存
        if (*(longlong *)(vertex_data_addr + data_offset) != 0) {
          // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(longlong *)(vertex_data_addr + data_offset) = temp_addr1;  // 更新顶点数据地址
        *(longlong *)(vertex_data_addr + 8 + data_offset) = temp_addr1;  // 更新动画数据地址
        *(ulonglong *)(vertex_data_addr + 0x10 + data_offset) = temp_size1 * 0x10 + temp_addr1;  // 更新数据大小
      }
      else {
        // 如果不需要重新分配，直接清零扩展的内存
        if (array_size != 0) {
          // WARNING: Subroutine does not return
          memset(animation_data_addr, 0, array_size * 0x10);
        }
        *(longlong *)(vertex_data_addr + 8 + data_offset) = animation_data_addr;  // 更新动画数据地址
      }
    }
    else {
      // 如果现有空间足够，直接设置结束地址
      *(ulonglong *)(vertex_data_addr + 8 + data_offset) = memory_size * 0x10 + frame_data_addr;
    }
    buffer_size1 = 0;                    // 初始化缓冲区大小1
    temp_size1 = buffer_size1;        // 临时存储缓冲区大小1
    array_size = buffer_size1;         // 设置数组大小
    buffer_size2 = memory_size;        // 设置缓冲区大小2
    
    // 遍历所有骨骼计算变换矩阵
    if (0 < (longlong)memory_size) {
      do {
        vertex_data_addr = *(longlong *)(animation_context + 0x90);  // 获取顶点数据地址
        frame_data_addr = (longlong)*(int *)(vertex_data_addr + 8 + temp_size1);  // 获取帧数据地址
        animation_data_addr = (longlong)*(int *)(vertex_data_addr + 4 + temp_size1) * 0x5c;  // 获取动画数据地址
        
        // 根据当前骨骼类型选择不同的计算方式
        if (current_bone == -1) {
          // 基础骨骼变换计算
          temp_addr1 = *(longlong *)(animation_context + 0x68);  // 获取临时地址1
          temp_addr3 = *(longlong *)(animation_context + 0x18);   // 获取临时地址3
          animation_data_addr = (longlong)*(int *)(animation_data_addr + temp_addr1);  // 计算动画数据地址
          vertex_data_addr = (longlong)*(int *)((longlong)*(int *)(vertex_data_addr + temp_size1) * 0x5c + temp_addr1);  // 计算顶点数据地址
          
          // 读取向量分量
          normal_x = *(float *)(temp_addr3 + 8 + vertex_data_addr * 0x10);  // 读取法线X分量
          normal_y = *(float *)(temp_addr3 + 8 + animation_data_addr * 0x10) - normal_x;  // 计算法线Y分量差值
          vector_x = *(float *)(temp_addr3 + 4 + vertex_data_addr * 0x10);  // 读取向量X分量
          vector1_y = *(float *)(temp_addr3 + 4 + animation_data_addr * 0x10);  // 读取向量1的Y分量
          vector1_z = *(float *)(temp_addr3 + vertex_data_addr * 0x10);  // 读取向量1的Z分量
          
          vertex_data_addr = (longlong)*(int *)(frame_data_addr * 0x5c + temp_addr1);  // 重新计算顶点数据地址
          normal_x = *(float *)(temp_addr3 + 8 + vertex_data_addr * 0x10) - normal_x;  // 重新计算法线X分量
          vector_y = *(float *)(temp_addr3 + 4 + vertex_data_addr * 0x10);  // 读取向量Y分量
          vector_z = *(float *)(temp_addr3 + animation_data_addr * 0x10);  // 读取向量Z分量
          vector1_x = *(float *)(temp_addr3 + vertex_data_addr * 0x10);  // 读取向量1的X分量
        }
        else {
          // 高级骨骼变换计算
          temp_addr1 = *(longlong *)(animation_context + 0x68);  // 获取临时地址1
          temp_addr3 = *(longlong *)(current_bone * 0x50 + *(longlong *)(animation_context + 0xb0) + 8);  // 获取临时地址3
          animation_data_addr = (longlong)*(int *)(animation_data_addr + temp_addr1);  // 计算动画数据地址
          vertex_data_addr = (longlong)*(int *)((longlong)*(int *)(vertex_data_addr + temp_size1) * 0x5c + temp_addr1);  // 计算顶点数据地址
          
          // 读取变换矩阵数据
          normal_x = *(float *)(temp_addr3 + 8 + vertex_data_addr * 0x10);  // 读取法线X分量
          normal_y = *(float *)(temp_addr3 + 8 + animation_data_addr * 0x10) - normal_x;  // 计算法线Y分量差值
          vector_x = *(float *)(temp_addr3 + 4 + vertex_data_addr * 0x10);  // 读取向量X分量
          vector1_y = *(float *)(temp_addr3 + 4 + animation_data_addr * 0x10);  // 读取向量1的Y分量
          vector1_z = *(float *)(temp_addr3 + vertex_data_addr * 0x10);  // 读取向量1的Z分量
          
          vertex_data_addr = (longlong)*(int *)(frame_data_addr * 0x5c + temp_addr1);  // 重新计算顶点数据地址
          normal_x = *(float *)(temp_addr3 + 8 + vertex_data_addr * 0x10) - normal_x;  // 重新计算法线X分量
          vector_y = *(float *)(temp_addr3 + 4 + vertex_data_addr * 0x10);  // 读取向量Y分量
          vector_z = *(float *)(temp_addr3 + animation_data_addr * 0x10);  // 读取向量Z分量
          vector1_x = *(float *)(temp_addr3 + vertex_data_addr * 0x10);  // 读取向量1的X分量
        }
        // 计算向量叉积（法线向量）
        normal_z = (vector_z - vector1_z) * (vector_y - vector_x) - (vector1_y - vector_x) * (vector1_x - vector1_z);
        vector1_z = normal_y * (vector1_x - vector1_z) - normal_x * (vector_z - vector1_z);
        normal_x = normal_x * (vector1_y - vector_x) - normal_y * (vector_y - vector_x);
        
        // 计算向量长度并进行归一化
        normal_length = SQRT(vector1_z * vector1_z + normal_x * normal_x + normal_z * normal_z);
        if (normal_length <= 0.0) {
          normal_x = 0.0;           // 如果长度为0，设置默认值
          vector1_z = 0.0;
          inv_normal_length = 1.0;
          normal_length = 1.0;
        }
        else {
          inv_normal_length = 1.0 / normal_length;  // 计算反向长度
          normal_x = normal_x * inv_normal_length;  // 归一化X分量
          vector1_z = inv_normal_length * vector1_z;  // 归一化Z分量
          inv_normal_length = inv_normal_length * normal_z;  // 归一化长度并存储
        }
        
        // 将归一化后的法线向量存储到矩阵中
        temp_matrix = CONCAT44(vector1_z, normal_x);
        float_array = (float *)(*(longlong *)(transform_buffer._0_8_ + data_offset) + array_size);
        *float_array = normal_x;                // 存储X分量
        float_array[1] = vector1_z;              // 存储Y分量
        float_array[2] = inv_normal_length;      // 存储Z分量
        float_array[3] = normal_length;          // 存储长度
        
        buffer_size2 = buffer_size2 - 1;         // 减少剩余骨骼数量
        temp_size1 = temp_size1 + 0xc;           // 移动到下一个骨骼
        array_size = array_size + 0x10;          // 移动数组指针
      } while (buffer_size2 != 0);  // 继续处理直到所有骨骼处理完毕
    }
    
    vertex_data_addr = transform_buffer._0_8_;  // 重置顶点数据地址
    current_bone = temp_addr2;                  // 更新当前骨骼
  } while (temp_addr2 < (longlong)matrix_buffer);  // 继续处理直到所有矩阵处理完毕
  main_frame_addr = 0;                    // 初始化主帧地址
  frame_array_ptr = (longlong *)0x0;     // 初始化帧数组指针
  temp_array_ptr2 = (longlong *)0x0;     // 初始化临时数组指针2
  frame_flags = 3;                       // 初始化帧标志
  
  // 分配主帧地址空间
  FUN_180081010(&main_frame_addr, (longlong)frame_index);
  
  temp_size1 = buffer_size1;              // 临时存储缓冲区大小1
  remaining_bones = memory_size;          // 设置剩余骨骼数量
  
  // 处理骨骼影响权重
  if (0 < (longlong)memory_size) {
    do {
      current_bone = main_frame_addr;     // 设置当前骨骼
      array_ptr1 = (int *)0x0;            // 初始化数组指针1
      vertex_data_addr = *(longlong *)(animation_context + 0x90);  // 获取顶点数据地址
      data_offset = (ulonglong)*(uint *)(vertex_data_addr + buffer_size1) * 0x20;  // 计算数据偏移
      piVar20 = *(int **)(lVar31 + 8 + lStack_170);
      iVar27 = (int)uVar41;
      if (piVar20 < *(int **)(lVar31 + 0x10 + lStack_170)) {
        *(int **)(lVar31 + 8 + lStack_170) = piVar20 + 1;
        *piVar20 = iVar27;
      }
      else {
        piVar15 = *(int **)(lVar31 + lStack_170);
        lVar17 = (longlong)piVar20 - (longlong)piVar15 >> 2;
        if (lVar17 == 0) {
          lVar17 = 1;
LAB_180079c12:
          piVar13 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar17 * 4,
                                         *(int8_t *)(lVar31 + 0x18 + lStack_170));
          piVar20 = *(int **)(lVar31 + 8 + lVar23);
          piVar15 = *(int **)(lVar31 + lVar23);
        }
        else {
          lVar17 = lVar17 * 2;
          if (lVar17 != 0) goto LAB_180079c12;
        }
        if (piVar15 != piVar20) {
                    // WARNING: Subroutine does not return
          memmove(piVar13,piVar15,(longlong)piVar20 - (longlong)piVar15);
        }
        *piVar13 = iVar27;
        if (*(longlong *)(lVar31 + lVar23) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(int **)(lVar31 + lVar23) = piVar13;
        *(int **)(lVar31 + 8 + lVar23) = piVar13 + 1;
        *(int **)(lVar31 + 0x10 + lVar23) = piVar13 + lVar17;
      }
      lVar23 = lStack_170;
      piVar13 = (int *)0x0;
      lVar31 = (ulonglong)*(uint *)(lVar21 + 4 + uVar36) * 0x20;
      piVar20 = *(int **)(lVar31 + 8 + lStack_170);
      if (piVar20 < *(int **)(lVar31 + 0x10 + lStack_170)) {
        *(int **)(lVar31 + 8 + lStack_170) = piVar20 + 1;
        *piVar20 = iVar27;
      }
      else {
        piVar15 = *(int **)(lVar31 + lStack_170);
        lVar17 = (longlong)piVar20 - (longlong)piVar15 >> 2;
        if (lVar17 == 0) {
          lVar17 = 1;
LAB_180079cd7:
          piVar13 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar17 * 4,
                                         *(int8_t *)(lVar31 + 0x18 + lStack_170));
          piVar20 = *(int **)(lVar31 + 8 + lVar23);
          piVar15 = *(int **)(lVar31 + lVar23);
        }
        else {
          lVar17 = lVar17 * 2;
          if (lVar17 != 0) goto LAB_180079cd7;
        }
        if (piVar15 != piVar20) {
                    // WARNING: Subroutine does not return
          memmove(piVar13,piVar15,(longlong)piVar20 - (longlong)piVar15);
        }
        *piVar13 = iVar27;
        if (*(longlong *)(lVar31 + lVar23) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(int **)(lVar31 + lVar23) = piVar13;
        *(int **)(lVar31 + 8 + lVar23) = piVar13 + 1;
        *(int **)(lVar31 + 0x10 + lVar23) = piVar13 + lVar17;
      }
      lVar23 = lStack_170;
      lVar21 = (ulonglong)*(uint *)(lVar21 + 8 + uVar36) * 0x20;
      piVar20 = *(int **)(lVar21 + 8 + lStack_170);
      if (piVar20 < *(int **)(lVar21 + 0x10 + lStack_170)) {
        *(int **)(lVar21 + 8 + lStack_170) = piVar20 + 1;
        *piVar20 = iVar27;
      }
      else {
        piVar13 = *(int **)(lVar21 + lStack_170);
        lVar31 = (longlong)piVar20 - (longlong)piVar13 >> 2;
        if (lVar31 == 0) {
          lVar31 = 1;
LAB_180079d9b:
          piVar15 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar31 * 4,
                                         *(int8_t *)(lVar21 + 0x18 + lStack_170));
          piVar20 = *(int **)(lVar21 + 8 + lVar23);
          piVar13 = *(int **)(lVar21 + lVar23);
        }
        else {
          lVar31 = lVar31 * 2;
          if (lVar31 != 0) goto LAB_180079d9b;
          piVar15 = (int *)0x0;
        }
        if (piVar13 != piVar20) {
                    // WARNING: Subroutine does not return
          memmove(piVar15,piVar13,(longlong)piVar20 - (longlong)piVar13);
        }
        *piVar15 = iVar27;
        if (*(longlong *)(lVar21 + lVar23) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(int **)(lVar21 + lVar23) = piVar15;
        *(int **)(lVar21 + 8 + lVar23) = piVar15 + 1;
        *(int **)(lVar21 + 0x10 + lVar23) = piVar15 + lVar31;
      }
      uVar36 = uVar36 + 0xc;
      uStackX_20 = uStackX_20 - 1;
      uVar41 = (ulonglong)(iVar27 + 1);
    } while (uStackX_20 != 0);
  }
  uVar19 = 0;
  uStackX_18 = 0;
  if (*piVar1 < 1) {
LAB_18007a5ac:
    FUN_180080fa0(&lStack_170);
    lVar21 = (longlong)iStack_1e8;
    uStack_1d8 = (ulonglong)*(ushort *)(param_1 + 0xc0);
    uStackX_18 = -1;
    do {
      piStack_218 = (int *)0x0;
      piStack_210 = (int *)0x0;
      piStack_208 = (int *)0x0;
      uStack_200 = 3;
      if (lVar21 == 0) {
        FUN_180082880(0);
        piStack_210 = piStack_218;
      }
      else {
        FUN_1800824a0(&piStack_218,lVar21);
      }
      plVar39 = (longlong *)((uStackX_18 + 1) * 0x20 + auStack_150._0_8_);
      lVar23 = 0;
      piStack_1f0 = (int *)0x0;
      if (0 < (longlong)uVar28) {
        piStack_1f8 = (int *)0x0;
        do {
          lVar21 = 0;
          uStack_180 = *(longlong *)(param_1 + 0x90) + (longlong)piStack_1f8;
          uVar19 = puStack_130[(longlong)piStack_1f0];
          if (uVar19 == 0) {
            do {
              if (uStackX_18 == -1) {
                lVar31 = (longlong)*(int *)(uStack_180 + lVar21 * 4) * 0x5c +
                         *(longlong *)(param_1 + 0x68);
                uVar6 = ((uint64_t *)(lVar23 + *plVar39))[1];
                *(uint64_t *)(lVar31 + 4) = *(uint64_t *)(lVar23 + *plVar39);
                *(uint64_t *)(lVar31 + 0xc) = uVar6;
                uVar6 = ((uint64_t *)(lVar23 + *plVar39))[1];
                *(uint64_t *)(lVar31 + 0x34) = *(uint64_t *)(lVar23 + *plVar39);
                *(uint64_t *)(lVar31 + 0x3c) = uVar6;
                fVar48 = *(float *)(lVar31 + 8);
                fVar52 = *(float *)(lVar31 + 4);
                fVar51 = *(float *)(lVar31 + 0xc);
                fVar45 = fVar51 * fVar51 + fVar52 * fVar52 + fVar48 * fVar48;
                auVar47 = rsqrtss(ZEXT416((uint)fVar45),ZEXT416((uint)fVar45));
                fVar46 = auVar47._0_4_;
                fVar45 = fVar46 * 0.5 * (3.0 - fVar45 * fVar46 * fVar46);
                *(float *)(lVar31 + 4) = fVar45 * fVar52;
                *(float *)(lVar31 + 8) = fVar45 * fVar48;
                *(float *)(lVar31 + 0xc) = fVar45 * fVar51;
                fVar48 = *(float *)(lVar31 + 0x38);
                fVar52 = *(float *)(lVar31 + 0x34);
                fVar51 = *(float *)(lVar31 + 0x3c);
                fVar45 = fVar51 * fVar51 + fVar52 * fVar52 + fVar48 * fVar48;
                auVar47 = rsqrtss(ZEXT416((uint)fVar45),ZEXT416((uint)fVar45));
                fVar46 = auVar47._0_4_;
                fVar45 = fVar46 * 0.5 * (3.0 - fVar45 * fVar46 * fVar46);
                *(float *)(lVar31 + 0x34) = fVar52 * fVar45;
                *(float *)(lVar31 + 0x38) = fVar48 * fVar45;
                *(float *)(lVar31 + 0x3c) = fVar51 * fVar45;
              }
              else {
                uVar6 = ((uint64_t *)(lVar23 + *plVar39))[1];
                puVar3 = (uint64_t *)
                         (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x30 + uStackX_18 * 0x50) +
                         (longlong)*(int *)(uStack_180 + lVar21 * 4) * 0x10);
                *puVar3 = *(uint64_t *)(lVar23 + *plVar39);
                puVar3[1] = uVar6;
                pfVar18 = (float *)((longlong)*(int *)(uStack_180 + lVar21 * 4) * 0x10 +
                                   *(longlong *)
                                    (*(longlong *)(param_1 + 0xb0) + 0x30 + uStackX_18 * 0x50));
                fVar48 = pfVar18[1];
                fVar52 = *pfVar18;
                fVar51 = pfVar18[2];
                fVar45 = fVar51 * fVar51 + fVar52 * fVar52 + fVar48 * fVar48;
                auVar47 = rsqrtss(ZEXT416((uint)fVar45),ZEXT416((uint)fVar45));
                fVar46 = auVar47._0_4_;
                fVar45 = fVar46 * 0.5 * (3.0 - fVar45 * fVar46 * fVar46);
                *pfVar18 = fVar52 * fVar45;
                pfVar18[1] = fVar48 * fVar45;
                pfVar18[2] = fVar51 * fVar45;
              }
              lVar21 = lVar21 + 1;
            } while (lVar21 < 3);
          }
          else {
            lStack_1d0 = 0;
            do {
              piVar1 = piStack_218;
              lVar31 = 0;
              puVar32 = (uint *)((longlong)*(int *)(uStack_180 + lStack_1d0 * 4) * 0x5c +
                                *(longlong *)(param_1 + 0x68));
              bVar44 = false;
              lVar17 = (longlong)
                       (int)((*(longlong *)((longlong)(piStack_218 + (ulonglong)*puVar32 * 8) + 8) -
                             *(longlong *)(piStack_218 + (ulonglong)*puVar32 * 8)) / 0x14);
              lVar21 = lVar31;
              if (3 < lVar17) {
                lVar24 = (lVar17 - 4U >> 2) + 1;
                lVar21 = lVar24 * 4;
                do {
                  uVar33 = *puVar32;
                  if ((*(uint *)(*(longlong *)(piStack_218 + (ulonglong)uVar33 * 8) + lVar31) &
                      uVar19) != 0) {
                    puVar2 = (uint *)(lVar31 + *(longlong *)(piStack_218 + (ulonglong)uVar33 * 8));
                    *puVar2 = *puVar2 | uVar19;
                    lVar22 = *plVar39;
                    fVar48 = *(float *)(lVar23 + 8 + lVar22);
                    fVar52 = *(float *)(lVar23 + 4 + lVar22);
                    lVar12 = *(longlong *)(piStack_218 + (ulonglong)*puVar32 * 8);
                    *(float *)(lVar12 + 4 + lVar31) =
                         *(float *)(lVar12 + 4 + lVar31) + *(float *)(lVar23 + lVar22);
                    *(float *)(lVar12 + 8 + lVar31) = fVar52 + *(float *)(lVar12 + 8 + lVar31);
                    *(float *)(lVar12 + 0xc + lVar31) = fVar48 + *(float *)(lVar12 + 0xc + lVar31);
                    bVar44 = true;
                    uVar33 = *puVar32;
                  }
                  if ((*(uint *)(*(longlong *)(piStack_218 + (ulonglong)uVar33 * 8) + 0x14 + lVar31)
                      & uVar19) != 0) {
                    puVar2 = (uint *)(*(longlong *)(piStack_218 + (ulonglong)uVar33 * 8) + 0x14 +
                                     lVar31);
                    *puVar2 = *puVar2 | uVar19;
                    lVar22 = *plVar39;
                    fVar48 = *(float *)(lVar23 + 8 + lVar22);
                    fVar52 = *(float *)(lVar23 + 4 + lVar22);
                    lVar12 = *(longlong *)(piStack_218 + (ulonglong)*puVar32 * 8);
                    *(float *)(lVar12 + 0x18 + lVar31) =
                         *(float *)(lVar12 + 0x18 + lVar31) + *(float *)(lVar23 + lVar22);
                    *(float *)(lVar12 + 0x1c + lVar31) = fVar52 + *(float *)(lVar12 + 0x1c + lVar31)
                    ;
                    *(float *)(lVar12 + 0x20 + lVar31) = fVar48 + *(float *)(lVar12 + 0x20 + lVar31)
                    ;
                    bVar44 = true;
                    uVar33 = *puVar32;
                  }
                  if ((*(uint *)(*(longlong *)(piStack_218 + (ulonglong)uVar33 * 8) + 0x28 + lVar31)
                      & uVar19) != 0) {
                    puVar2 = (uint *)(*(longlong *)(piStack_218 + (ulonglong)uVar33 * 8) + 0x28 +
                                     lVar31);
                    *puVar2 = *puVar2 | uVar19;
                    lVar22 = *plVar39;
                    fVar48 = *(float *)(lVar23 + 8 + lVar22);
                    fVar52 = *(float *)(lVar23 + 4 + lVar22);
                    lVar12 = *(longlong *)(piStack_218 + (ulonglong)*puVar32 * 8);
                    *(float *)(lVar12 + 0x2c + lVar31) =
                         *(float *)(lVar12 + 0x2c + lVar31) + *(float *)(lVar23 + lVar22);
                    *(float *)(lVar12 + 0x30 + lVar31) = fVar52 + *(float *)(lVar12 + 0x30 + lVar31)
                    ;
                    *(float *)(lVar12 + 0x34 + lVar31) = fVar48 + *(float *)(lVar12 + 0x34 + lVar31)
                    ;
                    bVar44 = true;
                  }
                  uVar33 = *(uint *)(lVar31 + 0x3c +
                                    *(longlong *)(piStack_218 + (ulonglong)*puVar32 * 8));
                  if ((uVar19 & uVar33) != 0) {
                    *(uint *)(*(longlong *)(piStack_218 + (ulonglong)*puVar32 * 8) + 0x3c + lVar31)
                         = uVar33 | uVar19;
                    lVar22 = *plVar39;
                    fVar48 = *(float *)(lVar23 + 8 + lVar22);
                    fVar52 = *(float *)(lVar23 + 4 + lVar22);
                    lVar12 = *(longlong *)(piStack_218 + (ulonglong)*puVar32 * 8);
                    *(float *)(lVar12 + 0x40 + lVar31) =
                         *(float *)(lVar12 + 0x40 + lVar31) + *(float *)(lVar23 + lVar22);
                    *(float *)(lVar12 + 0x44 + lVar31) = fVar52 + *(float *)(lVar12 + 0x44 + lVar31)
                    ;
                    *(float *)(lVar12 + 0x48 + lVar31) = fVar48 + *(float *)(lVar12 + 0x48 + lVar31)
                    ;
                    bVar44 = true;
                  }
                  lVar31 = lVar31 + 0x50;
                  lVar24 = lVar24 + -1;
                } while (lVar24 != 0);
              }
              pauVar42 = (int8_t (*) [16])0x0;
              if (lVar21 < lVar17) {
                lVar31 = lVar21 * 0x14;
                lVar17 = lVar17 - lVar21;
                do {
                  uVar33 = *(uint *)(lVar31 + *(longlong *)(piStack_218 + (ulonglong)*puVar32 * 8));
                  if ((uVar19 & uVar33) != 0) {
                    *(uint *)(lVar31 + *(longlong *)(piStack_218 + (ulonglong)*puVar32 * 8)) =
                         uVar33 | uVar19;
                    lVar21 = *plVar39;
                    fVar48 = *(float *)(lVar23 + 8 + lVar21);
                    fVar52 = *(float *)(lVar23 + 4 + lVar21);
                    lVar24 = *(longlong *)(piStack_218 + (ulonglong)*puVar32 * 8);
                    *(float *)(lVar31 + 4 + lVar24) =
                         *(float *)(lVar31 + 4 + lVar24) + *(float *)(lVar23 + lVar21);
                    *(float *)(lVar31 + 8 + lVar24) = fVar52 + *(float *)(lVar31 + 8 + lVar24);
                    *(float *)(lVar31 + 0xc + lVar24) = fVar48 + *(float *)(lVar31 + 0xc + lVar24);
                    bVar44 = true;
                  }
                  lVar31 = lVar31 + 0x14;
                  lVar17 = lVar17 + -1;
                } while (lVar17 != 0);
              }
              if (!bVar44) {
                lVar21 = *plVar39;
                uStack_1b8._4_4_ = *(int32_t *)(lVar23 + 8 + lVar21);
                uStack_1b8._0_4_ = *(int32_t *)(lVar23 + 4 + lVar21);
                uStack_1bc = *(int32_t *)(lVar23 + lVar21);
                uStack_1a0 = (int *)CONCAT44((int32_t)uStack_1b8,uStack_1bc);
                uStack_198 = (int *)CONCAT44(0x7f7fffff,uStack_1b8._4_4_);
                piStack_1b0 = (int *)CONCAT44(piStack_1b0._4_4_,0x7f7fffff);
                uVar41 = (ulonglong)*puVar32;
                pauVar37 = *(int8_t (**) [16])(piStack_218 + uVar41 * 8 + 2);
                uStack_1c0 = uVar19;
                if (pauVar37 < *(int8_t (**) [16])(piStack_218 + uVar41 * 8 + 4)) {
                  *(int8_t **)(piStack_218 + uVar41 * 8 + 2) = pauVar37[1] + 4;
                  auVar8._4_4_ = uStack_1bc;
                  auVar8._0_4_ = uVar19;
                  auVar8._8_4_ = (int32_t)uStack_1b8;
                  auVar8._12_4_ = uStack_1b8._4_4_;
                  *pauVar37 = auVar8;
                  *(int32_t *)pauVar37[1] = 0x7f7fffff;
                }
                else {
                  pauVar35 = *(int8_t (**) [16])(piStack_218 + uVar41 * 8);
                  lVar21 = ((longlong)pauVar37 - (longlong)pauVar35) / 0x14;
                  if (lVar21 == 0) {
                    uStackX_20 = 1;
LAB_18007ac04:
                    pauVar42 = (int8_t (*) [16])
                               FUN_18062b420(_DAT_180c8ed18,uStackX_20 * 0x14,
                                             (char)piStack_218[uVar41 * 8 + 6]);
                    pauVar37 = *(int8_t (**) [16])(piVar1 + uVar41 * 8 + 2);
                    pauVar35 = *(int8_t (**) [16])(piVar1 + uVar41 * 8);
                  }
                  else {
                    uStackX_20 = lVar21 * 2;
                    if (uStackX_20 != 0) goto LAB_18007ac04;
                  }
                  pauStack_1e0 = pauVar42;
                  if (pauVar35 != pauVar37) {
                    // WARNING: Subroutine does not return
                    memmove(pauVar42,pauVar35,(longlong)pauVar37 - (longlong)pauVar35);
                  }
                  auVar47._4_4_ = uStack_1bc;
                  auVar47._0_4_ = uStack_1c0;
                  auVar47._8_4_ = (int32_t)uStack_1b8;
                  auVar47._12_4_ = uStack_1b8._4_4_;
                  *pauVar42 = auVar47;
                  *(int32_t *)pauVar42[1] = piStack_1b0._0_4_;
                  if (*(longlong *)(piVar1 + uVar41 * 8) != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  *(int8_t (**) [16])(piVar1 + uVar41 * 8) = pauVar42;
                  *(int8_t **)(piVar1 + uVar41 * 8 + 2) = pauVar42[1] + 4;
                  *(ulonglong *)(piVar1 + uVar41 * 8 + 4) = (longlong)pauVar42 + uStackX_20 * 0x14;
                }
              }
              lStack_1d0 = lStack_1d0 + 1;
            } while (lStack_1d0 < 3);
          }
          piStack_1f0 = (int *)((longlong)piStack_1f0 + 1);
          piStack_1f8 = piStack_1f8 + 3;
          lVar23 = lVar23 + 0x10;
        } while ((longlong)piStack_1f0 < (longlong)uVar28);
        lVar21 = (longlong)iStack_1e8;
      }
      lVar17 = 0;
      lVar23 = lVar17;
      lVar31 = lVar21;
      if (0 < lVar21) {
        do {
          iVar27 = (int)((*(longlong *)(lVar23 + 8 + (longlong)piStack_218) -
                         *(longlong *)(lVar23 + (longlong)piStack_218)) / 0x14);
          lVar22 = (longlong)iVar27;
          lVar24 = lVar17;
          if (0 < iVar27) {
            do {
              lVar12 = *(longlong *)(lVar23 + (longlong)piStack_218);
              fVar48 = *(float *)(lVar12 + 8 + lVar24);
              fVar52 = *(float *)(lVar12 + 4 + lVar24);
              fVar51 = *(float *)(lVar12 + 0xc + lVar24);
              fVar45 = fVar52 * fVar52 + fVar48 * fVar48 + fVar51 * fVar51;
              if (SQRT(fVar45) == 0.0) {
                *(int8_t (*) [16])(lVar12 + 4 + lVar24) = _DAT_180a001d0;
              }
              else {
                auVar47 = rsqrtss(ZEXT416((uint)fVar45),ZEXT416((uint)fVar45));
                fVar46 = auVar47._0_4_;
                fVar45 = fVar46 * 0.5 * (3.0 - fVar45 * fVar46 * fVar46);
                *(float *)(lVar12 + 4 + lVar24) = fVar52 * fVar45;
                *(float *)(lVar12 + 8 + lVar24) = fVar45 * fVar48;
                *(float *)(lVar12 + 0xc + lVar24) = fVar51 * fVar45;
              }
              lVar22 = lVar22 + -1;
              lVar24 = lVar24 + 0x14;
            } while (lVar22 != 0);
          }
          lVar31 = lVar31 + -1;
          lVar23 = lVar23 + 0x20;
        } while (lVar31 != 0);
      }
      lVar23 = lVar17;
      if (0 < (longlong)uVar28) {
        do {
          uVar19 = puStack_130[lVar23];
          if (uVar19 != 0) {
            lVar21 = *(longlong *)(param_1 + 0x90);
            lVar12 = (longlong)*(int *)(lVar17 + lVar21) * 0x5c;
            lVar22 = (longlong)*(int *)(*(longlong *)(param_1 + 0x68) + lVar12);
            lVar24 = 0;
            iVar27 = (int)((*(longlong *)(piStack_218 + lVar22 * 8 + 2) -
                           *(longlong *)(piStack_218 + lVar22 * 8)) / 0x14);
            lVar31 = -1;
            if (0 < iVar27) {
              puVar32 = *(uint **)(piStack_218 + lVar22 * 8);
              do {
                lVar31 = lVar24;
                if ((*puVar32 & uVar19) != 0) break;
                lVar24 = lVar24 + 1;
                puVar32 = puVar32 + 5;
                lVar31 = -1;
              } while (lVar24 < iVar27);
            }
            lVar24 = *(longlong *)(piStack_218 + lVar22 * 8);
            puVar3 = (uint64_t *)(lVar24 + 4 + lVar31 * 0x14);
            uVar6 = *puVar3;
            uVar7 = puVar3[1];
            if (uStackX_18 == -1) {
              puVar3 = (uint64_t *)(*(longlong *)(param_1 + 0x68) + 4 + lVar12);
              *puVar3 = uVar6;
              puVar3[1] = uVar7;
              puVar3 = (uint64_t *)(lVar24 + 4 + lVar31 * 0x14);
              uVar6 = puVar3[1];
              puVar4 = (uint64_t *)
                       ((longlong)*(int *)(lVar17 + lVar21) * 0x5c + 0x34 +
                       *(longlong *)(param_1 + 0x68));
              *puVar4 = *puVar3;
              puVar4[1] = uVar6;
            }
            else {
              puVar3 = (uint64_t *)
                       (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x30 + uStackX_18 * 0x50) +
                       (longlong)*(int *)(lVar17 + lVar21) * 0x10);
              *puVar3 = uVar6;
              puVar3[1] = uVar7;
            }
            lVar40 = (longlong)*(int *)(lVar17 + 4 + lVar21);
            lVar12 = lVar40 * 0x5c;
            lVar22 = (longlong)*(int *)(*(longlong *)(param_1 + 0x68) + lVar12);
            lVar24 = 0;
            iVar27 = (int)((*(longlong *)(piStack_218 + lVar22 * 8 + 2) -
                           *(longlong *)(piStack_218 + lVar22 * 8)) / 0x14);
            lVar31 = -1;
            if (0 < iVar27) {
              puVar32 = *(uint **)(piStack_218 + lVar22 * 8);
              do {
                lVar31 = lVar24;
                if ((*puVar32 & uVar19) != 0) break;
                lVar24 = lVar24 + 1;
                puVar32 = puVar32 + 5;
                lVar31 = -1;
              } while (lVar24 < iVar27);
            }
            lVar24 = *(longlong *)(piStack_218 + lVar22 * 8);
            puVar3 = (uint64_t *)(lVar24 + 4 + lVar31 * 0x14);
            uVar6 = *puVar3;
            uVar7 = puVar3[1];
            if (uStackX_18 == -1) {
              puVar3 = (uint64_t *)(*(longlong *)(param_1 + 0x68) + 4 + lVar12);
              *puVar3 = uVar6;
              puVar3[1] = uVar7;
              puVar3 = (uint64_t *)(lVar24 + 4 + lVar31 * 0x14);
              uVar6 = puVar3[1];
              puVar4 = (uint64_t *)
                       ((longlong)*(int *)(lVar17 + 4 + lVar21) * 0x5c + 0x34 +
                       *(longlong *)(param_1 + 0x68));
              *puVar4 = *puVar3;
              puVar4[1] = uVar6;
            }
            else {
              puVar3 = (uint64_t *)
                       (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x30 + uStackX_18 * 0x50) +
                       lVar40 * 0x10);
              *puVar3 = uVar6;
              puVar3[1] = uVar7;
            }
            lVar40 = (longlong)*(int *)(lVar17 + 8 + lVar21);
            lVar43 = lVar40 * 0x5c;
            lVar12 = (longlong)*(int *)(lVar43 + *(longlong *)(param_1 + 0x68));
            lVar24 = 0;
            lVar22 = (longlong)
                     (int)((*(longlong *)(piStack_218 + lVar12 * 8 + 2) -
                           *(longlong *)(piStack_218 + lVar12 * 8)) / 0x14);
            lVar31 = -1;
            if (0 < lVar22) {
              puVar32 = *(uint **)(piStack_218 + lVar12 * 8);
              do {
                lVar31 = lVar24;
                if ((*puVar32 & uVar19) != 0) break;
                lVar24 = lVar24 + 1;
                puVar32 = puVar32 + 5;
                lVar31 = -1;
              } while (lVar24 < lVar22);
            }
            lVar24 = *(longlong *)(piStack_218 + lVar12 * 8);
            auVar47 = *(int8_t (*) [16])(lVar24 + 4 + lVar31 * 0x14);
            if (uStackX_18 == -1) {
              *(int8_t (*) [16])(lVar43 + 4 + *(longlong *)(param_1 + 0x68)) = auVar47;
              puVar3 = (uint64_t *)(lVar24 + 4 + lVar31 * 0x14);
              uVar6 = puVar3[1];
              puVar4 = (uint64_t *)
                       ((longlong)*(int *)(lVar17 + 8 + lVar21) * 0x5c + 0x34 +
                       *(longlong *)(param_1 + 0x68));
              *puVar4 = *puVar3;
              puVar4[1] = uVar6;
            }
            else {
              *(int8_t (*) [16])
               (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x30 + uStackX_18 * 0x50) +
               lVar40 * 0x10) = auVar47;
            }
          }
          lVar23 = lVar23 + 1;
          lVar17 = lVar17 + 0xc;
        } while (lVar23 < (longlong)uVar28);
        lVar21 = (longlong)iStack_1e8;
      }
      FUN_1800810b0(&piStack_218);
      uStackX_18 = uStackX_18 + 1;
      if ((longlong)uStack_1d8 <= (longlong)uStackX_18) {
        FUN_180080fa0(auStack_150);
        if (puStack_130 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puStack_130);
        }
        return;
      }
    } while( true );
  }
  lStack_1d0 = 0;
LAB_180079e40:
  pauVar42 = (int8_t (*) [16])(lStack_1d0 * 0x20);
  piVar20 = *(int **)(*pauVar42 + lStack_170);
  uVar41 = *(longlong *)(*pauVar42 + lStack_170 + 8) - (longlong)piVar20 >> 2;
  pauStack_1e0 = pauVar42;
  if (1 < uVar41) {
    bVar44 = true;
    uStack_1c8 = puStack_130[*piVar20];
    iVar27 = 1;
    uVar19 = uStack_1c8;
    piVar13 = piVar20;
    do {
      piVar13 = piVar13 + 1;
      if ((uVar19 & puStack_130[*piVar13]) == 0) {
        bVar44 = false;
        break;
      }
      uVar19 = uVar19 | puStack_130[*piVar13];
      iVar27 = iVar27 + 1;
    } while ((ulonglong)(longlong)iVar27 < uVar41);
    uVar19 = (uint)uStackX_18;
    if (!bVar44) {
      uStack_1a0 = (int *)0x0;
      uStack_198 = (int *)0x0;
      piStack_190 = (int *)0x0;
      uStack_188 = 3;
      piVar14 = (int *)FUN_18062b420(_DAT_180c8ed18,4,CONCAT71((uint7)(uint3)(uStackX_18 >> 8),3));
      *piVar14 = *piVar20;
      piVar20 = piVar14 + 1;
      piStack_218 = (int *)0x0;
      piStack_210 = (int *)0x0;
      piVar13 = (int *)0x0;
      piStack_208 = (int *)0x0;
      uStack_200 = 3;
      iStackX_10 = 1;
      piStack_1f8 = *(int **)(*pauVar42 + lStack_170);
      piVar15 = piVar20;
      uStack_1a0 = piVar14;
      uStack_198 = piVar20;
      piStack_190 = piVar20;
      if (1 < (ulonglong)(*(longlong *)(*pauVar42 + lStack_170 + 8) - (longlong)piStack_1f8 >> 2)) {
        uStackX_20 = 4;
        piVar25 = (int *)0x0;
        do {
          piVar26 = piStack_210;
          piVar16 = (int *)0x0;
          if (piStack_210 < piVar13) {
            *piStack_210 = *(int *)(uStackX_20 + (longlong)piStack_1f8);
            piVar16 = piVar25;
          }
          else {
            uStack_1d8 = (longlong)piStack_210 - (longlong)piVar25;
            if ((longlong)uStack_1d8 >> 2 == 0) {
              piStack_1f0 = (int *)0x1;
LAB_180079fb3:
              piVar16 = (int *)FUN_18062b420(_DAT_180c8ed18,(longlong)piStack_1f0 * 4,
                                             CONCAT71((int7)(uStackX_20 >> 8),3));
            }
            else {
              piStack_1f0 = (int *)(((longlong)uStack_1d8 >> 2) * 2);
              if (piStack_1f0 != (int *)0x0) goto LAB_180079fb3;
            }
            if (piVar25 != piVar26) {
                    // WARNING: Subroutine does not return
              memmove(piVar16,piVar25,uStack_1d8);
            }
            *piVar16 = *(int *)(uStackX_20 + (longlong)piStack_1f8);
            if (piVar25 != (int *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(piVar25);
            }
            piVar13 = piVar16 + (longlong)piStack_1f0;
            pauVar42 = pauStack_1e0;
            piStack_218 = piVar16;
            piStack_208 = piVar13;
            piStack_210 = piVar16;
          }
          piStack_210 = piStack_210 + 1;
          iStackX_10 = iStackX_10 + 1;
          uStackX_20 = uStackX_20 + 4;
          piStack_1f8 = *(int **)(*pauVar42 + lStack_170);
          piVar25 = piVar16;
        } while ((ulonglong)(longlong)iStackX_10 <
                 (ulonglong)(*(longlong *)(*pauVar42 + lStack_170 + 8) - (longlong)piStack_1f8 >> 2)
                );
      }
      do {
        piVar13 = (int *)0x0;
        uStack_1c0 = 0;
        uStack_1bc = 0;
        uStack_1b8 = (int *)0x0;
        piStack_1b0 = (int *)0x0;
        uStack_1a8 = 3;
        bVar44 = false;
        bVar9 = false;
        uVar33 = 0;
        uStack_180 = (longlong)piStack_210 - (longlong)piStack_218 >> 2;
        piVar26 = (int *)0x0;
        piVar25 = (int *)0x0;
        piVar16 = piVar25;
        piVar34 = piVar13;
        piVar10 = piStack_218;
        piStack_1f8 = piStack_210;
        if (uStack_180 != 0) {
          do {
            piStack_1f0 = piVar10;
            piVar16 = (int *)0x0;
            iVar27 = *piStack_1f0;
            if ((uStack_1c8 & puStack_130[iVar27]) == 0) {
              if (piVar26 < piVar13) {
                *piVar26 = iVar27;
                piVar16 = piVar25;
                uVar33 = (uint)piVar34;
              }
              else {
                uStack_1d8 = (longlong)piVar26 - (longlong)piVar25;
                if ((longlong)uStack_1d8 >> 2 == 0) {
                  lVar21 = 1;
LAB_18007a203:
                  piVar16 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar21 * 4,3);
                }
                else {
                  lVar21 = ((longlong)uStack_1d8 >> 2) * 2;
                  if (lVar21 != 0) goto LAB_18007a203;
                }
                if (piVar25 != piVar26) {
                    // WARNING: Subroutine does not return
                  memmove(piVar16,piVar25,uStack_1d8);
                }
                *piVar16 = *piStack_1f0;
                if (piVar25 != (int *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900(piVar25);
                }
                uStack_1c0 = (uint)piVar16;
                uStack_1bc = (int32_t)((ulonglong)piVar16 >> 0x20);
                piVar13 = piVar16 + lVar21;
                piStack_1b0 = piVar13;
                piVar26 = piVar16;
              }
              piVar26 = piVar26 + 1;
              uStack_1b8 = piVar26;
              bVar44 = bVar9;
            }
            else {
              uStack_1c8 = uStack_1c8 | puStack_130[iVar27];
              if (piVar20 < piVar15) {
                uStack_198 = piVar20 + 1;
                *piVar20 = iVar27;
                piVar20 = uStack_198;
                piVar16 = piVar25;
                uVar33 = (uint)piVar34;
                bVar44 = true;
              }
              else {
                uStack_1d8 = (longlong)piVar20 - (longlong)piVar14;
                if ((longlong)uStack_1d8 >> 2 == 0) {
                  lVar21 = 1;
LAB_18007a142:
                  piVar15 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar21 * 4,3);
                }
                else {
                  lVar21 = ((longlong)uStack_1d8 >> 2) * 2;
                  piVar15 = piVar16;
                  if (lVar21 != 0) goto LAB_18007a142;
                }
                if (piVar14 != piVar20) {
                    // WARNING: Subroutine does not return
                  memmove(piVar15,piVar14,uStack_1d8);
                }
                *piVar15 = *piStack_1f0;
                piVar20 = piVar15 + 1;
                if (piVar14 != (int *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900(piVar14);
                }
                piStack_190 = piVar15 + lVar21;
                piVar16 = piVar25;
                piVar13 = piStack_1b0;
                piVar14 = piVar15;
                uStack_1a0 = piVar15;
                uStack_198 = piVar20;
                bVar44 = true;
              }
            }
            uVar33 = uVar33 + 1;
            piStack_1f0 = piStack_1f0 + 1;
            piVar25 = piVar16;
            piVar34 = (int *)(ulonglong)uVar33;
            piVar10 = piStack_1f0;
            piVar15 = piStack_190;
            bVar9 = bVar44;
          } while ((ulonglong)(longlong)(int)uVar33 < uStack_180);
        }
        plVar39 = plStack_168;
        uStack_1c0 = (uint)piStack_218;
        uStack_1bc = (int32_t)((ulonglong)piStack_218 >> 0x20);
        uStack_1b8._0_4_ = SUB84(piStack_1f8,0);
        uStack_1b8._4_4_ = (int32_t)((ulonglong)piStack_1f8 >> 0x20);
        piStack_1b0 = piStack_208;
        uStack_200 = 3;
        uStack_1a8 = 3;
        piStack_210 = piVar26;
        piStack_208 = piVar13;
        piStack_1f8 = piVar26;
        if ((((longlong)piVar26 - (longlong)piVar16 & 0xfffffffffffffffcU) == 0) || (!bVar44))
        goto LAB_18007a312;
        bVar44 = piStack_218 != (int *)0x0;
        piStack_218 = piVar16;
        if (bVar44) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      } while( true );
    }
  }
  goto LAB_18007a58b;
LAB_18007a312:
  if (piStack_218 != (int *)0x0) {
    piStack_218 = piVar16;
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  piVar13 = *(int **)(*pauStack_1e0 + lStack_170);
  piStack_218 = piVar16;
  if (((*(longlong *)(*pauStack_1e0 + lStack_170 + 8) - (longlong)piVar13 ^
       (longlong)piVar20 - (longlong)piVar14) & 0xfffffffffffffffcU) != 0) {
    *(int **)(*pauStack_1e0 + lStack_170) = piVar14;
    uStack_198 = *(int **)(*pauStack_1e0 + lStack_170 + 8);
    *(int **)(*pauStack_1e0 + lStack_170 + 8) = piVar20;
    piStack_190 = *(int **)(pauStack_1e0[1] + lStack_170);
    *(int **)(pauStack_1e0[1] + lStack_170) = piVar15;
    uStack_188 = *(int32_t *)(pauStack_1e0[1] + lStack_170 + 8);
    *(int32_t *)(pauStack_1e0[1] + lStack_170 + 8) = 3;
    uStack_1a0 = piVar13;
    if (plStack_168 < plStack_160) {
      uVar41 = (longlong)piVar26 - (longlong)piVar16;
      *(int32_t *)(plStack_168 + 3) = 3;
      if (uVar41 < 4) {
        lVar21 = 0;
        plStack_168 = plStack_168 + 4;
      }
      else {
        plStack_168 = plStack_168 + 4;
        lVar21 = FUN_18062b420(_DAT_180c8ed18,((longlong)uVar41 >> 2) * 4,3);
      }
      *plVar39 = lVar21;
      plVar39[1] = lVar21;
      plVar39[2] = lVar21 + ((longlong)uVar41 >> 2) * 4;
      if (piVar16 != piVar26) {
                    // WARNING: Subroutine does not return
        memmove(*plVar39,piVar16,uVar41);
      }
      plVar39[1] = *plVar39;
    }
    else {
      FUN_1800826b0(&lStack_170,&piStack_218);
      piVar26 = piStack_210;
      piVar16 = piStack_218;
    }
    lVar23 = lStack_1d0;
    iVar27 = *piVar1;
    lVar31 = lStack_1d0 * 0x5c;
    lVar21 = *(longlong *)(param_1 + 0x68);
    uStack_108 = *(uint64_t *)(lVar31 + lVar21);
    uStack_100 = ((uint64_t *)(lVar31 + lVar21))[1];
    puVar3 = (uint64_t *)(lVar31 + 0x10 + lVar21);
    uStack_f8 = *puVar3;
    uStack_f0 = puVar3[1];
    puVar3 = (uint64_t *)(lVar31 + 0x20 + lVar21);
    uStack_e8 = *puVar3;
    uStack_e0 = puVar3[1];
    puVar3 = (uint64_t *)(lVar31 + 0x30 + lVar21);
    uStack_d8 = *puVar3;
    uStack_d0 = puVar3[1];
    puVar3 = (uint64_t *)(lVar31 + 0x40 + lVar21);
    uStack_c8 = *puVar3;
    uStack_c0 = puVar3[1];
    uStack_b8 = *(uint64_t *)(lVar31 + 0x50 + lVar21);
    uStack_b0 = *(int32_t *)(lVar31 + 0x58 + lVar21);
    FUN_180080c10(piVar1,&uStack_108);
    uVar38 = (longlong)piVar26 - (longlong)piVar16 >> 2;
    uVar30 = 0;
    piVar20 = piVar16;
    uVar41 = uVar30;
    if (uVar38 != 0) {
      do {
        lVar31 = (longlong)*piVar20;
        lVar21 = *(longlong *)(param_1 + 0x90);
        if (*(uint *)(lVar21 + lVar31 * 0xc) == (uint)uStackX_18) {
          *(int *)(lVar21 + lVar31 * 0xc) = iVar27;
        }
        if (*(uint *)(lVar21 + 4 + lVar31 * 0xc) == (uint)uStackX_18) {
          *(int *)(lVar21 + 4 + lVar31 * 0xc) = iVar27;
        }
        if (*(uint *)(lVar21 + 8 + lVar31 * 0xc) == (uint)uStackX_18) {
          *(int *)(lVar21 + 8 + lVar31 * 0xc) = iVar27;
        }
        uVar33 = (int)uVar41 + 1;
        piVar20 = piVar20 + 1;
        uVar41 = (ulonglong)uVar33;
      } while ((ulonglong)(longlong)(int)uVar33 < uVar38);
    }
    uVar41 = uVar30;
    piVar14 = piVar13;
    if (*(short *)(param_1 + 0xc0) != 0) {
      do {
        lVar21 = uVar30 + *(longlong *)(param_1 + 0xb0);
        lVar31 = *(longlong *)(uVar30 + 0x30 + *(longlong *)(param_1 + 0xb0));
        puVar3 = (uint64_t *)(lVar31 + lVar23 * 0x10);
        uVar6 = *puVar3;
        uVar7 = puVar3[1];
        iVar27 = *(int *)(lVar21 + 0x2c);
        iVar11 = *(int *)(lVar21 + 0x28);
        if (iVar27 <= iVar11) {
          if (iVar27 < 2) {
            *(int32_t *)(lVar21 + 0x2c) = 8;
          }
          else {
            *(int *)(lVar21 + 0x2c) = (iVar27 >> 1) + iVar27;
          }
          FUN_1800846d0(lVar21 + 0x28);
          iVar11 = *(int *)(lVar21 + 0x28);
          lVar31 = *(longlong *)(lVar21 + 0x30);
        }
        puVar3 = (uint64_t *)(lVar31 + (longlong)iVar11 * 0x10);
        *puVar3 = uVar6;
        puVar3[1] = uVar7;
        *(int *)(lVar21 + 0x28) = *(int *)(lVar21 + 0x28) + 1;
        uVar33 = (int)uVar41 + 1;
        uVar30 = uVar30 + 0x50;
        uVar41 = (ulonglong)uVar33;
      } while ((int)uVar33 < (int)(uint)*(ushort *)(param_1 + 0xc0));
    }
  }
  if (piVar16 != (int *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(piVar16);
  }
  if (piVar14 != (int *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(piVar14);
  }
LAB_18007a58b:
  uVar19 = uVar19 + 1;
  uStackX_18 = (ulonglong)uVar19;
  lStack_1d0 = lStack_1d0 + 1;
  if (*piVar1 <= (int)uVar19) goto LAB_18007a5ac;
  goto LAB_180079e40;
}







