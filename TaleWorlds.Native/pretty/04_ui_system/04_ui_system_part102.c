#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part102.c - UI系统高级数学计算模块
// 本模块包含16个函数，主要处理UI系统的数学计算、矩阵变换、数据处理等高级功能

// 函数: UI系统向量变换处理器
// 原始函数名: FUN_18072ad65
// 功能: 处理UI系统中的向量变换，包括矩阵乘法、位移计算等
// 参数: 
//   param_1 - 变换参数1
//   param_2 - 输入数据指针
//   param_3 - 输出数据指针
//   param_4 - 变换参数2
void UIProcessVectorTransform(uint param_1, undefined8 param_2, undefined8 param_3, short param_4)
{
  short transform_AX;
  undefined2 temp_result;
  int matrix_index;
  longlong scale_factor;
  int *input_buffer;
  int *transform_matrix;
  longlong buffer_offset;
  longlong temp_offset;
  int result_value;
  longlong loop_counter;
  ulonglong scale_param;
  longlong iteration_count;
  undefined2 *output_pointer;
  
  // 计算缓冲区偏移量
  temp_offset = buffer_offset - (longlong)output_pointer;
  do {
    // 获取缩放因子
    scale_factor = (longlong)*(short *)(temp_offset + (longlong)output_pointer);
    // 计算矩阵索引和变换结果
    matrix_index = *input_buffer * 4 + (int)((ulonglong)(*transform_matrix * scale_factor) >> 0x10) * 4;
    scale_factor = (longlong)matrix_index;
    // 执行矩阵变换计算
    result_value = (((int)((scale_param & 0xffffffff) * scale_factor >> 0x10) >> 0xd) + 1 >> 1) +
                   (int)((ulonglong)(transform_AX * scale_factor) >> 0x10) + input_buffer[1];
    *input_buffer = result_value;
    *input_buffer = (int)((ulonglong)(transform_matrix[1] * scale_factor) >> 0x10) + result_value;
    // 计算第二组变换结果
    result_value = (((int)((ulonglong)param_1 * scale_factor >> 0x10) >> 0xd) + 1 >> 1) +
                   (int)((ulonglong)(param_4 * scale_factor) >> 0x10);
    input_buffer[1] = result_value;
    input_buffer[1] = (int)((ulonglong)(transform_matrix[2] * scale_factor) >> 0x10) + result_value;
    // 处理结果值范围限制
    result_value = matrix_index + 0x3fff >> 0xe;
    if (result_value < 0x8000) {
      temp_result = (undefined2)result_value;
      if (result_value < -0x8000) {
        temp_result = 0x8000;  // 最小值限制
      }
    }
    else {
      temp_result = 0x7fff;  // 最大值限制
    }
    *output_pointer = temp_result;
    output_pointer = output_pointer + 1;
    iteration_count = iteration_count + -1;
  } while (iteration_count != 0);
  return;
}





// 函数: UI系统空操作处理器
// 原始函数名: FUN_18072ae6c
// 功能: 空操作函数，用于系统初始化或占位
void UIEmptyOperationHandler(void)
{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: UI系统矩阵逆变换处理器
// 原始函数名: FUN_18072af30
// 功能: 执行UI系统中的矩阵逆变换计算，处理浮点数矩阵运算
// 参数:
//   param_1 - 输出缓冲区指针
//   param_2 - 输入数据指针
//   param_3 - 数据元素数量
void UIMatrixInverseTransform(longlong param_1, longlong param_2, int param_3)
{
  double input_value;
  double matrix_val1;
  double matrix_val2;
  double result_val;
  undefined1 conversion_buffer [16];
  longlong element_index;
  double *matrix_pointer;
  longlong row_count;
  longlong col_count;
  ulonglong element_count;
  ulonglong remaining_elements;
  longlong batch_size;
  undefined1 (*buffer_ptr) [16];
  longlong processed_elements;
  longlong matrix_offset;
  undefined4 float_part1;
  undefined4 float_part2;
  double scale_factor;
  undefined1 stack_protector [8];
  double matrix_stack [49];
  ulonglong security_cookie;
  
  // 安全检查：栈保护cookie
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)stack_protector;
  element_count = (ulonglong)param_3;
  element_index = 0;
  buffer_ptr = (undefined1 (*) [16])stack_protector;
  
  // 预处理：将输入数据转换为双精度浮点数
  do {
    result_val = (double)*(float *)(param_2 + element_index * 4);
    element_index = element_index + 1;
    conversion_buffer._8_4_ = SUB84(result_val, 0);
    conversion_buffer._0_8_ = result_val;
    conversion_buffer._12_4_ = (int)((ulonglong)result_val >> 0x20);
    *buffer_ptr = conversion_buffer;
    buffer_ptr = buffer_ptr + 1;
  } while (element_index <= (longlong)element_count);
  
  if (0 < param_3) {
    matrix_offset = 0;
    batch_size = 8;
    element_index = -8;
    remaining_elements = element_count;
    do {
      // 处理矩阵元素，进行数值范围检查
      float_part1 = SUB84(matrix_stack[0], 0);
      float_part2 = (undefined4)((ulonglong)matrix_stack[0] >> 0x20);
      if (matrix_stack[0] <= 9.999999717180685e-10) {
        float_part1 = 0xe0000000;  // 极小值处理
        float_part2 = 0x3e112e0b;
      }
      row_count = (longlong)(int)remaining_elements;
      matrix_pointer = (double *)((longlong)matrix_stack + batch_size + 0x10);
      processed_elements = 0;
      
      // 计算缩放因子
      result_val = (-1.0 / (double)CONCAT44(float_part2, float_part1)) *
                   *(double *)((longlong)matrix_stack + batch_size);
      *(float *)(param_1 + matrix_offset * 4) = (float)result_val;
      
      // 批量处理矩阵运算（4元素一组）
      if (3 < row_count) {
        batch_size = (row_count - 4U >> 2) + 1;
        processed_elements = batch_size * 4;
        do {
          // 执行4x4矩阵块运算
          matrix_val1 = *(double *)((longlong)matrix_pointer + element_index + -0x10);
          matrix_val2 = matrix_pointer[-2];
          matrix_pointer[-2] = matrix_val1 * result_val + matrix_val2;
          result_val = *(double *)((longlong)matrix_pointer + element_index);
          *(double *)((longlong)matrix_pointer + element_index + -0x10) = matrix_val2 * result_val + matrix_val1;
          matrix_val1 = *matrix_pointer;
          *matrix_pointer = result_val * result_val + matrix_val1;
          matrix_val2 = *(double *)((longlong)matrix_pointer + element_index + 0x10);
          *(double *)((longlong)matrix_pointer + element_index) = matrix_val1 * result_val + result_val;
          matrix_val1 = matrix_pointer[2];
          matrix_pointer[2] = matrix_val2 * result_val + matrix_val1;
          result_val = *(double *)((longlong)matrix_pointer + element_index + 0x20);
          *(double *)((longlong)matrix_pointer + element_index + 0x10) = matrix_val1 * result_val + matrix_val2;
          matrix_val1 = matrix_pointer[4];
          matrix_pointer[4] = result_val * result_val + matrix_val1;
          *(double *)((longlong)matrix_pointer + element_index + 0x20) = matrix_val1 * result_val + result_val;
          matrix_pointer = matrix_pointer + 8;
          batch_size = batch_size + -1;
        } while (batch_size != 0);
      }
      
      // 处理剩余元素
      if (processed_elements < row_count) {
        matrix_pointer = matrix_stack + processed_elements * 2;
        row_count = row_count - processed_elements;
        do {
          matrix_val1 = *matrix_pointer;
          matrix_val2 = *(double *)(batch_size + (longlong)matrix_pointer);
          *(double *)(batch_size + (longlong)matrix_pointer) = matrix_val1 * result_val + matrix_val2;
          *matrix_pointer = matrix_val2 * result_val + matrix_val1;
          matrix_pointer = matrix_pointer + 2;
          row_count = row_count + -1;
        } while (row_count != 0);
      }
      remaining_elements = (ulonglong)((int)remaining_elements - 1);
      matrix_offset = matrix_offset + 1;
      element_index = element_index + -0x10;
      batch_size = batch_size + 0x10;
    } while (matrix_offset < (longlong)element_count);
  }
  
  // 安全检查：函数不会返回
  FUN_1808fc050(security_cookie ^ (ulonglong)stack_protector);
}





// 函数: UI系统高级矩阵处理器
// 原始函数名: FUN_18072afa1
// 功能: 执行UI系统中的高级矩阵运算，包括矩阵变换和数值处理
void UIAdvancedMatrixProcessor(void)
{
  double matrix_val1;
  double matrix_val2;
  double matrix_val3;
  double *matrix_pointer;
  longlong batch_counter;
  longlong offset_val;
  int matrix_rows;
  longlong output_buffer;
  longlong matrix_limit;
  ulonglong element_offset;
  longlong processed_count;
  longlong total_elements;
  longlong iteration_index;
  double scale_factor;
  double threshold_value;
  double matrix_stack [4];
  
  element_offset = (ulonglong)((int)iteration_index + 8);
  offset_val = iteration_index + -8;
  do {
    // 获取缩放因子并进行阈值检查
    scale_factor = matrix_stack[0];
    if (matrix_stack[0] <= threshold_value) {
      scale_factor = threshold_value;  // 应用阈值限制
    }
    total_elements = (longlong)matrix_rows;
    matrix_pointer = (double *)((longlong)matrix_stack + element_offset + 0x10);
    processed_count = 0;
    
    // 计算逆变换因子
    scale_factor = (-1.0 / scale_factor) * *(double *)((longlong)matrix_stack + element_offset);
    *(float *)(output_buffer + iteration_index * 4) = (float)scale_factor;
    
    // 批量处理矩阵元素（4元素优化）
    if (3 < total_elements) {
      batch_counter = (total_elements - 4U >> 2) + 1;
      processed_count = batch_counter * 4;
      do {
        // 执行4x4矩阵块运算
        matrix_val1 = *(double *)((longlong)matrix_pointer + offset_val + -0x10);
        matrix_val2 = matrix_pointer[-2];
        matrix_pointer[-2] = matrix_val1 * scale_factor + matrix_val2;
        matrix_val3 = *(double *)((longlong)matrix_pointer + offset_val);
        *(double *)((longlong)matrix_pointer + offset_val + -0x10) = matrix_val2 * scale_factor + matrix_val1;
        matrix_val1 = *matrix_pointer;
        *matrix_pointer = matrix_val3 * scale_factor + matrix_val1;
        matrix_val2 = *(double *)((longlong)matrix_pointer + offset_val + 0x10);
        *(double *)((longlong)matrix_pointer + offset_val) = matrix_val1 * scale_factor + matrix_val3;
        matrix_val1 = matrix_pointer[2];
        matrix_pointer[2] = matrix_val2 * scale_factor + matrix_val1;
        matrix_val3 = *(double *)((longlong)matrix_pointer + offset_val + 0x20);
        *(double *)((longlong)matrix_pointer + offset_val + 0x10) = matrix_val1 * scale_factor + matrix_val2;
        matrix_val1 = matrix_pointer[4];
        matrix_pointer[4] = matrix_val3 * scale_factor + matrix_val1;
        *(double *)((longlong)matrix_pointer + offset_val + 0x20) = matrix_val1 * scale_factor + matrix_val3;
        matrix_pointer = matrix_pointer + 8;
        batch_counter = batch_counter + -1;
      } while (batch_counter != 0);
    }
    
    // 处理剩余的矩阵元素
    if (processed_count < total_elements) {
      matrix_pointer = matrix_stack + processed_count * 2;
      total_elements = total_elements - processed_count;
      do {
        matrix_val1 = *matrix_pointer;
        matrix_val2 = *(double *)(element_offset + (longlong)matrix_pointer);
        *(double *)(element_offset + (longlong)matrix_pointer) = matrix_val1 * scale_factor + matrix_val2;
        *matrix_pointer = matrix_val2 * scale_factor + matrix_val1;
        matrix_pointer = matrix_pointer + 2;
        total_elements = total_elements + -1;
      } while (total_elements != 0);
    }
    
    matrix_rows = matrix_rows + -1;
    iteration_index = iteration_index + 1;
    offset_val = offset_val + -0x10;
    element_offset = element_offset + 0x10;
  } while (iteration_index < matrix_limit);
  
  // 安全检查：函数不会返回
  FUN_1808fc050((float)matrix_stack[0]);
}





// 函数: UI系统栈保护处理器
// 原始函数名: FUN_18072b12c
// 功能: 处理UI系统栈保护和安全检查
void UIStackProtectionHandler(void)
{
  undefined8 stack_cookie;
  
  // 安全检查：函数不会返回
  FUN_1808fc050((float)stack_cookie);
}





// 函数: UI系统浮点矩阵变换器
// 原始函数名: FUN_18072b160
// 功能: 执行UI系统中的浮点矩阵变换运算
// 参数:
//   param_1 - 输出矩阵指针
//   param_2 - 输入矩阵指针
//   param_3 - 矩阵元素数量
void UIFloatMatrixTransformer(longlong param_1, float *param_2, int param_3)
{
  float transform_factor;
  float matrix_val1;
  float matrix_val2;
  float matrix_val3;
  float matrix_val4;
  longlong batch_counter;
  longlong element_count;
  float *output_matrix;
  longlong row_index;
  longlong matrix_offset;
  int iteration_count;
  longlong half_size;
  float *input_matrix;
  
  if (0 < param_3) {
    row_index = 0;
    matrix_offset = param_1 - (longlong)param_2;
    iteration_count = 0;
    do {
      iteration_count = iteration_count + 1;
      transform_factor = *param_2;
      element_count = 0;
      half_size = (longlong)iteration_count >> 1;
      
      // 批量处理矩阵元素（4元素优化）
      if (3 < half_size) {
        input_matrix = (float *)(matrix_offset + -8 + (longlong)param_2);
        output_matrix = (float *)(param_1 + 8);
        batch_counter = (half_size - 4U >> 2) + 1;
        element_count = batch_counter * 4;
        do {
          // 执行4x4矩阵块变换
          matrix_val1 = input_matrix[1];
          matrix_val2 = output_matrix[-2];
          output_matrix[-2] = matrix_val1 * transform_factor + matrix_val2;
          matrix_val3 = *input_matrix;
          input_matrix[1] = matrix_val2 * transform_factor + matrix_val1;
          matrix_val1 = output_matrix[-1];
          output_matrix[-1] = matrix_val3 * transform_factor + matrix_val1;
          matrix_val2 = input_matrix[-1];
          *input_matrix = matrix_val1 * transform_factor + matrix_val3;
          matrix_val1 = *output_matrix;
          *output_matrix = matrix_val2 * transform_factor + matrix_val1;
          matrix_val3 = input_matrix[-2];
          input_matrix[-1] = matrix_val1 * transform_factor + matrix_val2;
          matrix_val1 = output_matrix[1];
          output_matrix[1] = matrix_val3 * transform_factor + matrix_val1;
          output_matrix = output_matrix + 4;
          input_matrix[-2] = matrix_val1 * transform_factor + matrix_val3;
          input_matrix = input_matrix + -4;
          batch_counter = batch_counter + -1;
        } while (batch_counter != 0);
      }
      
      // 处理剩余的矩阵元素
      if (element_count < half_size) {
        output_matrix = (float *)(param_1 + ((row_index - element_count) + -1) * 4);
        do {
          matrix_val1 = *output_matrix;
          matrix_val2 = *(float *)(param_1 + element_count * 4);
          *(float *)(param_1 + element_count * 4) = matrix_val1 * transform_factor + matrix_val2;
          element_count = element_count + 1;
          *output_matrix = matrix_val2 * transform_factor + matrix_val1;
          output_matrix = output_matrix + -1;
        } while (element_count < half_size);
      }
      
      // 应用负变换因子
      *(float *)(matrix_offset + (longlong)param_2) = -transform_factor;
      row_index = row_index + 1;
      param_2 = param_2 + 1;
    } while (row_index < param_3);
  }
  return;
}





// 函数: UI系统加密矩阵变换器
// 原始函数名: FUN_18072b17c
// 功能: 执行UI系统中的加密矩阵变换，包含XOR加密操作
// 参数:
//   param_1 - 基础地址指针
//   param_2 - 偏移地址指针
//   param_3 - 保留参数
//   param_4 - 输出矩阵指针
void UIEncryptedMatrixTransformer(longlong param_1, longlong param_2, undefined8 param_3, longlong param_4)
{
  float transform_factor;
  float matrix_val1;
  float matrix_val2;
  float matrix_val3;
  float matrix_val4;
  longlong batch_counter;
  longlong element_count;
  float *output_matrix;
  longlong row_index;
  longlong matrix_size;
  int iteration_count;
  longlong half_size;
  float *input_matrix;
  float *data_pointer;
  uint encryption_key;
  
  row_index = 0;
  iteration_count = 0;
  do {
    iteration_count = iteration_count + 1;
    transform_factor = *data_pointer;
    element_count = 0;
    half_size = (longlong)iteration_count >> 1;
    
    // 批量处理加密矩阵元素（4元素优化）
    if (3 < half_size) {
      input_matrix = (float *)((param_1 - param_2) + -8 + (longlong)data_pointer);
      output_matrix = (float *)(param_4 + 8);
      batch_counter = (half_size - 4U >> 2) + 1;
      element_count = batch_counter * 4;
      do {
        // 执行4x4加密矩阵块变换
        matrix_val1 = input_matrix[1];
        matrix_val2 = output_matrix[-2];
        output_matrix[-2] = matrix_val1 * transform_factor + matrix_val2;
        matrix_val3 = *input_matrix;
        input_matrix[1] = matrix_val2 * transform_factor + matrix_val1;
        matrix_val1 = output_matrix[-1];
        output_matrix[-1] = matrix_val3 * transform_factor + matrix_val1;
        matrix_val2 = input_matrix[-1];
        *input_matrix = matrix_val1 * transform_factor + matrix_val3;
        matrix_val1 = *output_matrix;
        *output_matrix = matrix_val2 * transform_factor + matrix_val1;
        matrix_val3 = input_matrix[-2];
        input_matrix[-1] = matrix_val1 * transform_factor + matrix_val2;
        matrix_val1 = output_matrix[1];
        output_matrix[1] = matrix_val3 * transform_factor + matrix_val1;
        output_matrix = output_matrix + 4;
        input_matrix[-2] = matrix_val1 * transform_factor + matrix_val3;
        input_matrix = input_matrix + -4;
        batch_counter = batch_counter + -1;
      } while (batch_counter != 0);
    }
    
    // 处理剩余的加密矩阵元素
    if (element_count < half_size) {
      output_matrix = (float *)(param_4 + ((row_index - element_count) + -1) * 4);
      do {
        matrix_val1 = *output_matrix;
        matrix_val2 = *(float *)(param_4 + element_count * 4);
        *(float *)(param_4 + element_count * 4) = matrix_val1 * transform_factor + matrix_val2;
        element_count = element_count + 1;
        *output_matrix = matrix_val2 * transform_factor + matrix_val1;
        output_matrix = output_matrix + -1;
      } while (element_count < half_size);
    }
    
    // 应用XOR加密
    *(uint *)((param_1 - param_2) + (longlong)data_pointer) = (uint)transform_factor ^ encryption_key;
    row_index = row_index + 1;
    data_pointer = data_pointer + 1;
  } while (row_index < matrix_size);
  return;
}





// 函数: UI系统空操作处理器2
// 原始函数名: FUN_18072b301
// 功能: 空操作函数，用于系统初始化或占位
void UIEmptyOperationHandler2(void)
{
  return;
}





// 函数: UI系统数据转换处理器
// 原始函数名: FUN_18072b310
// 功能: 执行UI系统中的数据转换处理，调用外部函数进行数据计算
// 参数:
//   param_1 - 输出数据指针
//   param_2 - 输入数据指针
//   param_3 - 数据范围1
//   param_4 - 数据范围2
void UIDataConversionProcessor(longlong param_1, longlong param_2, int param_3, int param_4)
{
  int range_limit;
  ulonglong element_index;
  ulonglong data_offset;
  double calculated_value;
  
  element_index = 0;
  range_limit = param_3;
  if (param_4 <= param_3) {
    range_limit = param_4;  // 选择较小的范围作为限制
  }
  data_offset = element_index;
  
  if (0 < range_limit) {
    do {
      // 调用外部计算函数进行数据处理
      calculated_value = (double)FUN_180734500(param_2, param_2 + (longlong)(int)data_offset * 4, param_3);
      param_3 = param_3 + -1;
      *(float *)(param_1 + element_index * 4) = (float)calculated_value;
      element_index = element_index + 1;
      data_offset = (ulonglong)((int)data_offset + 1);
    } while ((longlong)element_index < (longlong)range_limit);
  }
  return;
}





// 函数: UI系统循环数据处理器
// 原始函数名: FUN_18072b33f
// 功能: 执行UI系统中的循环数据处理，调用外部函数进行迭代计算
// 参数:
//   param_1 - 初始计算值
void UIIterativeDataProcessor(double param_1)
{
  ulonglong element_index;
  longlong array_size;
  int data_count;
  uint start_index;
  longlong data_pointer;
  longlong output_pointer;
  
  element_index = (ulonglong)start_index;
  do {
    // 调用外部函数进行迭代计算
    param_1 = (double)FUN_180734500(param_1, data_pointer + (longlong)(int)start_index * 4, data_count);
    start_index = start_index + 1;
    data_count = data_count + -1;
    *(float *)(output_pointer + element_index * 4) = (float)param_1;
    element_index = element_index + 1;
  } while ((longlong)element_index < array_size);
  return;
}





// 函数: UI系统空操作处理器3
// 原始函数名: FUN_18072b380
// 功能: 空操作函数，用于系统初始化或占位
void UIEmptyOperationHandler3(void)
{
  return;
}



// 函数: UI系统向量平方和计算器
// 原始函数名: FUN_18072b3a0
// 功能: 计算UI系统中向量的平方和，用于数学运算和优化处理
// 参数:
//   param_1 - 向量数据指针
//   param_2 - 向量元素数量
// 返回值: 向量平方和结果
double UIVectorSquareSumCalculator(longlong param_1, int param_2)
{
  float *vector_ptr1;
  float *vector_ptr2;
  float *vector_ptr3;
  undefined8 *data_ptr;
  float element_val;
  uint batch_count;
  longlong remaining_elements;
  float *vector_array;
  int processed_elements;
  undefined8 *batch_ptr;
  ulonglong batch_iterations;
  double square_val1;
  double square_val2;
  double sum_part1;
  double sum_part2;
  double sum_part3;
  double sum_part4;
  double total_sum;
  double temp_sum1;
  double temp_sum2;
  
  processed_elements = 0;
  total_sum = 0.0;
  
  // 批量处理4元素组（优化计算）
  if (0 < param_2 + -3) {
    vector_array = (float *)(param_1 + 8);
    batch_count = (param_2 - 4U >> 2) + 1;
    batch_iterations = (ulonglong)batch_count;
    processed_elements = batch_count * 4;
    do {
      // 计算4个元素的平方和
      vector_ptr1 = vector_array + -1;
      vector_ptr2 = vector_array + -2;
      element_val = *vector_array;
      vector_ptr3 = vector_array + 1;
      vector_array = vector_array + 4;
      total_sum = total_sum + (double)*vector_ptr2 * (double)*vector_ptr2 + (double)*vector_ptr1 * (double)*vector_ptr1 +
                          (double)element_val * (double)element_val + (double)*vector_ptr3 * (double)*vector_ptr3;
      batch_iterations = batch_iterations - 1;
    } while (batch_iterations != 0);
  }
  
  // 处理剩余元素
  if (processed_elements < param_2) {
    if (3 < (uint)(param_2 - processed_elements)) {
      // 对齐处理8字节边界
      batch_count = param_2 - processed_elements & 0x80000003;
      if ((int)batch_count < 0) {
        batch_count = (batch_count - 1 | 0xfffffffc) + 1;
      }
      sum_part1 = 0.0;
      sum_part2 = 0.0;
      sum_part3 = 0.0;
      temp_sum2 = 0.0;
      batch_ptr = (undefined8 *)(param_1 + (longlong)processed_elements * 4);
      do {
        processed_elements = processed_elements + 4;
        square_val1 = (double)(float)*batch_ptr;
        square_val2 = (double)(float)((ulonglong)*batch_ptr >> 0x20);
        data_ptr = batch_ptr + 1;
        batch_ptr = batch_ptr + 2;
        sum_part1 = sum_part1 + square_val1 * square_val1;
        sum_part2 = sum_part2 + square_val2 * square_val2;
        square_val1 = (double)(float)*data_ptr;
        square_val2 = (double)(float)((ulonglong)*data_ptr >> 0x20);
        sum_part3 = sum_part3 + square_val1 * square_val1;
        temp_sum2 = temp_sum2 + square_val2 * square_val2;
      } while (processed_elements < (int)(param_2 - batch_count));
      total_sum = total_sum + sum_part1 + sum_part3 + sum_part2 + temp_sum2;
    }
    
    if (processed_elements < param_2) {
      if (3 < param_2 - processed_elements) {
        // 继续处理剩余的4元素组
        vector_array = (float *)(param_1 + ((longlong)processed_elements + 2) * 4);
        do {
          vector_ptr1 = vector_array + -2;
          processed_elements = processed_elements + 4;
          vector_ptr2 = vector_array + -1;
          element_val = *vector_array;
          vector_ptr3 = vector_array + 1;
          vector_array = vector_array + 4;
          total_sum = (double)*vector_ptr1 * (double)*vector_ptr1 + total_sum + (double)*vector_ptr2 * (double)*vector_ptr2 +
                       (double)element_val * (double)element_val + (double)*vector_ptr3 * (double)*vector_ptr3;
        } while (processed_elements < param_2 + -3);
      }
      
      // 处理最后剩余的元素
      if (processed_elements < param_2) {
        vector_array = (float *)(param_1 + (longlong)processed_elements * 4);
        remaining_elements = (longlong)(param_2 - processed_elements);
        do {
          element_val = *vector_array;
          vector_array = vector_array + 1;
          total_sum = total_sum + (double)element_val * (double)element_val;
          remaining_elements = remaining_elements + -1;
        } while (remaining_elements != 0);
      }
    }
  }
  return total_sum;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: UI系统双精度数组处理器
// 原始函数名: FUN_18072b540
// 功能: 执行UI系统中的双精度数组处理，包括滤波和变换操作
// 参数:
//   param_1 - 输出双精度数组指针
//   param_2 - 输入数据指针
//   param_3 - 滤波系数
//   param_4 - 输入数据数量
//   param_5 - 滤波器阶数
void UIDoubleArrayProcessor(double *param_1, longlong param_2, float param_3, int param_4, int param_5)
{
  double filter_val1;
  double filter_val2;
  ulonglong filter_index;
  double *output_ptr;
  float *input_ptr;
  uint alignment_mask;
  ulonglong base_index;
  longlong remaining_elements;
  longlong filter_order;
  ulonglong element_count;
  uint output_size;
  double input_value;
  double processed_value;
  double filter_buffer1 [26];
  double filter_buffer2 [26];
  ulonglong security_cookie;
  
  // 安全检查：栈保护cookie
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)filter_buffer1;
  filter_order = (longlong)param_5;
  
  // 初始化滤波器缓冲区
  filter_buffer2[0x11] = 0.0;
  filter_buffer2[0] = 0.0;
  filter_buffer2[1] = 0.0;
  filter_buffer2[2] = 0.0;
  filter_buffer2[3] = 0.0;
  base_index = 0;
  filter_buffer2[4] = 0.0;
  filter_buffer2[5] = 0.0;
  filter_buffer2[6] = 0.0;
  filter_buffer2[7] = 0.0;
  filter_buffer2[8] = 0.0;
  filter_buffer2[9] = 0.0;
  filter_buffer2[0x10] = 0.0;
  filter_buffer1[0x10] = 0.0;
  filter_buffer2[10] = 0.0;
  filter_buffer2[0xb] = 0.0;
  filter_buffer2[0xc] = 0.0;
  filter_buffer2[0xd] = 0.0;
  filter_buffer2[0xe] = 0.0;
  filter_buffer2[0xf] = 0.0;
  filter_buffer2[0x12] = 0.0;
  filter_buffer2[0x13] = 0.0;
  filter_buffer2[0x14] = 0.0;
  filter_buffer2[0x15] = 0.0;
  filter_buffer2[0x16] = 0.0;
  filter_buffer2[0x17] = 0.0;
  filter_buffer2[0x18] = 0.0;
  filter_buffer1[0] = 0.0;
  filter_buffer1[1] = 0.0;
  filter_buffer1[2] = 0.0;
  filter_buffer1[3] = 0.0;
  filter_buffer1[4] = 0.0;
  filter_buffer1[5] = 0.0;
  filter_buffer1[6] = 0.0;
  filter_buffer1[7] = 0.0;
  filter_buffer1[8] = 0.0;
  filter_buffer1[9] = 0.0;
  filter_buffer1[10] = 0.0;
  filter_buffer1[0xb] = 0.0;
  filter_buffer1[0xc] = 0.0;
  filter_buffer1[0xd] = 0.0;
  filter_buffer1[0xe] = 0.0;
  filter_buffer1[0xf] = 0.0;
  filter_buffer1[0x11] = 0.0;
  filter_buffer1[0x12] = 0.0;
  filter_buffer1[0x13] = 0.0;
  filter_buffer1[0x14] = 0.0;
  filter_buffer1[0x15] = 0.0;
  filter_buffer1[0x16] = 0.0;
  filter_buffer1[0x17] = 0.0;
  filter_buffer1[0x18] = 0.0;
  element_count = base_index;
  
  // 处理输入数据
  if (0 < param_4) {
    do {
      processed_value = (double)*(float *)(param_2 + element_count * 4);
      filter_index = base_index;
      if (0 < param_5) {
        do {
          // 执行滤波器计算
          filter_val1 = filter_buffer2[filter_index + 1];
          input_value = (filter_val1 - processed_value) * (double)param_3 + filter_buffer2[filter_index];
          filter_buffer2[filter_index] = processed_value;
          filter_buffer2[filter_index + 1] = input_value;
          filter_buffer1[filter_index] = processed_value * filter_buffer2[0] + filter_buffer1[filter_index];
          processed_value = filter_buffer2[filter_index + 2];
          filter_buffer1[filter_index + 1] = input_value * filter_buffer2[0] + filter_buffer1[filter_index + 1];
          filter_index = filter_index + 2;
          processed_value = (processed_value - input_value) * (double)param_3 + filter_val1;
        } while ((longlong)filter_index < filter_order);
      }
      filter_buffer2[filter_order] = processed_value;
      element_count = element_count + 1;
      filter_buffer1[filter_order] = processed_value * filter_buffer2[0] + filter_buffer1[filter_order];
    } while ((longlong)element_count < (longlong)param_4);
  }
  
  output_size = param_5 + 1;
  element_count = base_index;
  
  // 批量输出处理（8字节对齐优化）
  if (((0 < (int)output_size) && (element_count = 0, 7 < output_size)) &&
     ((filter_buffer1 + filter_order < param_1 ||
      ((undefined1 *)((longlong)param_1 + filter_order * 4) < filter_buffer1)))) {
    alignment_mask = output_size & 0x80000007;
    if ((int)alignment_mask < 0) {
      alignment_mask = (alignment_mask - 1 | 0xfffffff8) + 1;
    }
    output_ptr = param_1 + 2;
    element_count = base_index;
    do {
      element_count = (ulonglong)((int)element_count + 8);
      processed_value = filter_buffer1[base_index + 2];
      filter_val1 = filter_buffer1[base_index + 3];
      output_ptr[-2] = (double)CONCAT44((float)filter_buffer1[base_index + 1], (float)filter_buffer1[base_index]);
      input_value = filter_buffer1[base_index + 4];
      filter_val2 = filter_buffer1[base_index + 5];
      output_ptr[-1] = (double)CONCAT44((float)filter_val1, (float)processed_value);
      processed_value = filter_buffer1[base_index + 6];
      filter_val1 = filter_buffer1[base_index + 7];
      base_index = base_index + 8;
      *output_ptr = (double)CONCAT44((float)filter_val2, (float)input_value);
      output_ptr[1] = (double)CONCAT44((float)filter_val1, (float)processed_value);
      output_ptr = output_ptr + 4;
    } while ((longlong)base_index < (longlong)(int)(output_size - alignment_mask));
  }
  
  // 处理剩余元素
  filter_order = (longlong)(int)element_count;
  remaining_elements = (longlong)(int)output_size;
  if (filter_order < remaining_elements) {
    if (3 < remaining_elements - filter_order) {
      input_ptr = (float *)((longlong)param_1 + filter_order * 4 + 8);
      do {
        processed_value = filter_buffer1[filter_order + 1];
        input_ptr[-2] = (float)filter_buffer1[filter_order];
        filter_val1 = filter_buffer1[filter_order + 2];
        input_ptr[-1] = (float)processed_value;
        processed_value = filter_buffer1[filter_order + 3];
        filter_order = filter_order + 4;
        *input_ptr = (float)filter_val1;
        input_ptr[1] = (float)processed_value;
        input_ptr = input_ptr + 4;
      } while (filter_order < remaining_elements + -3);
    }
    
    // 处理最后剩余的元素
    for (; filter_order < remaining_elements; filter_order = filter_order + 1) {
      *(float *)((longlong)param_1 + filter_order * 4) = (float)filter_buffer1[filter_order];
    }
  }
  
  // 安全检查：函数不会返回
  FUN_1808fc050(security_cookie ^ (ulonglong)filter_buffer1);
}





// 函数: UI系统三角函数生成器
// 原始函数名: FUN_18072b830
// 功能: 生成UI系统中使用的三角函数序列，用于动画和变换效果
// 参数:
//   param_1 - 输出缓冲区指针
//   param_2 - 输入数据指针
//   param_3 - 生成模式
//   param_4 - 生成元素数量
void UITrigonometricGenerator(longlong param_1, longlong param_2, int param_3, int param_4)
{
  float *output_ptr;
  longlong batch_counter;
  float angle_step;
  float cos_value;
  float sin_value;
  float recurrence_factor;
  
  // 初始化三角函数参数
  cos_value = 1.0;
  angle_step = 1.0 / (float)(param_4 + 1);
  recurrence_factor = 2.0 - angle_step * angle_step * 9.869605;  // 9.869605 ≈ π²
  
  if (param_3 < 2) {
    angle_step = angle_step * 3.1415927;  // 转换为弧度
    cos_value = 0.0;
  }
  else {
    angle_step = recurrence_factor * 0.5;
  }
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    output_ptr = (float *)(param_1 + 4);
    batch_counter = ((longlong)param_4 - 1U >> 2) + 1;
    do {
      // 使用递推公式生成三角函数序列
      output_ptr[-1] = *(float *)(param_2 + -4 + (longlong)output_ptr) * 0.5 * (angle_step + cos_value);
      *output_ptr = angle_step * *(float *)(param_2 + (longlong)output_ptr);
      cos_value = angle_step * recurrence_factor - cos_value;
      output_ptr[1] = *(float *)(param_2 + 4 + (longlong)output_ptr) * 0.5 * (angle_step + cos_value);
      angle_step = cos_value * recurrence_factor - angle_step;
      output_ptr[2] = cos_value * *(float *)(param_2 + 8 + (longlong)output_ptr);
      output_ptr = output_ptr + 4;
      batch_counter = batch_counter + -1;
    } while (batch_counter != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18072b930(longlong param_1,longlong param_2,int param_3,ulonglong param_4,uint param_5,
void FUN_18072b930(longlong param_1,longlong param_2,int param_3,ulonglong param_4,uint param_5,
                  int param_6,undefined4 param_7)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  longlong lVar11;
  int iVar12;
  undefined *puVar13;
  undefined4 *puVar14;
  undefined4 auStack_514 [231];
  undefined1 auStack_178 [32];
  int iStack_158;
  undefined4 uStack_150;
  int iStack_148;
  uint uStack_144;
  ulonglong uStack_140;
  longlong lStack_138;
  longlong lStack_130;
  longlong lStack_128;
  undefined4 auStack_118 [22];
  undefined4 auStack_c0 [26];
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  uStack_144 = (uint)param_4;
  if (param_5 == 4) {
    iStack_148 = 0x22;
    iVar7 = (int)(char)(&UNK_180956e8c)[param_6];
    pcVar10 = &UNK_180956f18 + (longlong)param_6 * 8;
    puVar13 = &UNK_180956e90;
  }
  else {
    iVar7 = 0xc;
    pcVar10 = &UNK_180956f50;
    iStack_148 = 0xc;
    puVar13 = &UNK_180956f38;
  }
  lStack_138 = (longlong)iVar7;
  param_2 = param_2 + (longlong)(int)(uStack_144 * 4) * 4;
  if (0 < (int)param_5) {
    lStack_130 = (longlong)(int)uStack_144 << 2;
    lStack_128 = (longlong)param_3;
    iVar7 = 0;
    puVar14 = (undefined4 *)(param_1 + 8);
    uStack_140 = (ulonglong)param_5;
    do {
      lVar3 = (longlong)pcVar10[1];
      lVar9 = (longlong)*pcVar10;
      lVar11 = 0;
      iStack_158 = ((int)pcVar10[1] - (int)*pcVar10) + 1;
      uStack_150 = param_7;
      FUN_180712f20(param_2,param_2 + (lVar3 + lStack_128) * -4,auStack_c0 + 2,param_4);
      if (lVar9 <= lVar3) {
        lVar4 = lVar3 - lVar9;
        if (3 < lVar4 + 1) {
          lVar8 = ((lVar3 - lVar9) - 3U >> 2) + 1;
          lVar9 = lVar9 + lVar8 * 4;
          puVar5 = auStack_c0 + lVar4;
          do {
            auStack_118[lVar11] = puVar5[2];
            auStack_118[lVar11 + 1] = puVar5[1];
            auStack_118[lVar11 + 2] = *puVar5;
            auStack_118[lVar11 + 3] = puVar5[-1];
            lVar11 = lVar11 + 4;
            lVar8 = lVar8 + -1;
            puVar5 = puVar5 + -4;
          } while (lVar8 != 0);
        }
        if (lVar9 <= lVar3) {
          puVar6 = auStack_118 + lVar11;
          lVar11 = (lVar3 - lVar9) + 1;
          puVar5 = auStack_c0 + (lVar3 - lVar9) + 2;
          do {
            uVar2 = *puVar5;
            puVar5 = puVar5 + -1;
            *puVar6 = uVar2;
            puVar6 = puVar6 + 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
      }
      cVar1 = *pcVar10;
      puVar5 = puVar14;
      lVar9 = lStack_138;
      iVar12 = iVar7;
      if (0 < lStack_138) {
        do {
          lVar3 = (longlong)((int)(char)puVar13[iVar12] - (int)cVar1);
          puVar5[-2] = auStack_118[lVar3];
          puVar5[-1] = auStack_118[lVar3 + 1];
          *puVar5 = auStack_118[lVar3 + 2];
          puVar5[1] = auStack_118[lVar3 + 3];
          puVar5[2] = auStack_118[lVar3 + 4];
          lVar9 = lVar9 + -1;
          puVar5 = puVar5 + 5;
          iVar12 = iVar12 + 1;
        } while (lVar9 != 0);
      }
      param_2 = param_2 + lStack_130;
      pcVar10 = pcVar10 + 2;
      iVar7 = iVar7 + iStack_148;
      puVar14 = puVar14 + 0xaa;
      uStack_140 = uStack_140 - 1;
      param_4 = (ulonglong)uStack_144;
    } while (uStack_140 != 0);
    uStack_140 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_178);
}





// 函数: void FUN_18072b9d4(undefined8 param_1,undefined8 param_2,int param_3,ulonglong param_4,
void FUN_18072b9d4(undefined8 param_1,undefined8 param_2,int param_3,ulonglong param_4,
                  undefined8 param_5,ulonglong param_6,undefined8 param_7,longlong param_8)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong unaff_RBX;
  longlong lVar8;
  char *unaff_RBP;
  longlong lVar9;
  int iVar10;
  longlong in_R10;
  longlong unaff_R12;
  longlong unaff_R13;
  int iVar11;
  undefined4 *puVar12;
  longlong lStack0000000000000048;
  longlong lStack0000000000000050;
  ulonglong in_stack_00000120;
  undefined4 in_stack_000001b0;
  undefined4 auStack_39c [231];
  
  lStack0000000000000048 = (longlong)(int)param_4 << 2;
  lStack0000000000000050 = (longlong)param_3;
  iVar11 = 0;
  puVar12 = (undefined4 *)(unaff_RBX + 8);
  param_7 = in_R10;
  do {
    lVar3 = (longlong)unaff_RBP[1];
    lVar8 = (longlong)*unaff_RBP;
    lVar9 = 0;
    param_5._0_4_ = in_stack_000001b0;
    FUN_180712f20(unaff_R12,unaff_R12 + (lVar3 + lStack0000000000000050) * -4,&stack0x000000c0,
                  param_4,((int)unaff_RBP[1] - (int)*unaff_RBP) + 1);
    if (lVar8 <= lVar3) {
      lVar4 = lVar3 - lVar8;
      if (3 < lVar4 + 1) {
        lVar7 = ((lVar3 - lVar8) - 3U >> 2) + 1;
        lVar8 = lVar8 + lVar7 * 4;
        puVar5 = (undefined4 *)(&stack0x000000b8 + lVar4 * 4);
        do {
          *(undefined4 *)(&stack0x00000060 + lVar9 * 4) = puVar5[2];
          *(undefined4 *)(&stack0x00000064 + lVar9 * 4) = puVar5[1];
          *(undefined4 *)(&stack0x00000068 + lVar9 * 4) = *puVar5;
          *(undefined4 *)(&stack0x0000006c + lVar9 * 4) = puVar5[-1];
          lVar9 = lVar9 + 4;
          lVar7 = lVar7 + -1;
          puVar5 = puVar5 + -4;
        } while (lVar7 != 0);
      }
      if (lVar8 <= lVar3) {
        puVar6 = (undefined4 *)(&stack0x00000060 + lVar9 * 4);
        lVar9 = (lVar3 - lVar8) + 1;
        puVar5 = (undefined4 *)(&stack0x000000c0 + (lVar3 - lVar8) * 4);
        do {
          uVar2 = *puVar5;
          puVar5 = puVar5 + -1;
          *puVar6 = uVar2;
          puVar6 = puVar6 + 1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
    }
    cVar1 = *unaff_RBP;
    puVar5 = puVar12;
    lVar8 = param_8;
    iVar10 = iVar11;
    if (0 < param_8) {
      do {
        lVar3 = (longlong)((int)*(char *)(iVar10 + unaff_R13) - (int)cVar1);
        puVar5[-2] = *(undefined4 *)(&stack0x00000060 + lVar3 * 4);
        puVar5[-1] = *(undefined4 *)(&stack0x00000064 + lVar3 * 4);
        *puVar5 = *(undefined4 *)(&stack0x00000068 + lVar3 * 4);
        puVar5[1] = *(undefined4 *)(&stack0x0000006c + lVar3 * 4);
        puVar5[2] = *(undefined4 *)(&stack0x00000070 + lVar3 * 4);
        lVar8 = lVar8 + -1;
        puVar5 = puVar5 + 5;
        iVar10 = iVar10 + 1;
      } while (lVar8 != 0);
    }
    unaff_R12 = unaff_R12 + lStack0000000000000048;
    unaff_RBP = unaff_RBP + 2;
    iVar11 = iVar11 + (int)param_6;
    puVar12 = puVar12 + 0xaa;
    param_7 = param_7 + -1;
    param_4 = param_6 >> 0x20;
  } while (param_7 != 0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000120 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18072bbae(void)
void FUN_18072bbae(void)

{
  ulonglong in_stack_00000120;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000120 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



