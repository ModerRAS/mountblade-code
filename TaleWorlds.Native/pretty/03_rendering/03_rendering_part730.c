#include "TaleWorlds.Native.Split.h"

// 03_rendering_part730.c - 渲染系统图像处理和SIMD优化模块
// 本模块包含20个核心函数，主要功能包括：
// - 图像差异计算和绝对差值计算（SIMD/AVX2优化）
// - 平均绝对差值计算（不同块大小）
// - 多参考帧绝对差值计算
// - 图像卷积和滤波处理
// - 系统初始化函数

// 全局变量：SIMD指令支持标志
extern int _DAT_180bf00b0;  // SIMD指令支持标志

// 函数别名定义
typedef void (*ImageDifferenceCalculator)(uint *src_data, int src_stride, uint *ref_data, int ref_stride, int *result);
typedef uint64_t (*AVX2MeanAbsDifference)(uint8_t (*block1)[32], int stride1, uint8_t (*block2)[32], int stride2, uint8_t (*avg_block)[32]);
typedef uint32_t (*AVX2AbsDifference)(uint8_t (*block1)[32], int stride1, uint8_t (*block2)[32], int stride2);
typedef void (*MultiReferenceFrameCalculator)(uint8_t (*src_block)[32], int src_stride, long long *ref_frames, int ref_stride, uint8_t (*result)[16]);
typedef void (*ImageConvolutionProcessor)(long long src_ptr, long long src_stride, long long dst_ptr, long long dst_stride, long long kernel_ptr, uint kernel_offset, int kernel_step, uint width, int height);

// =============================================================================
// 1. 图像差异计算函数（SIMD优化）
// =============================================================================

/**
 * 渲染系统图像差异计算器 - 使用SIMD指令进行像素级别的绝对差值计算
 * 
 * 该函数计算两个图像块之间的绝对差值总和，使用SIMD指令进行优化。
 * 主要用于运动估计、图像匹配和相似度计算等场景。
 * 
 * @param src_data      源图像数据指针（uint32数组）
 * @param src_stride    源图像行跨度（字节）
 * @param ref_data      参考图像数据指针（uint32数组）
 * @param ref_stride    参考图像行跨度（字节）
 * @param result        计算结果数组指针（8个结果）
 * 
 * 算法特点：
 * - 使用pmovzxbd指令进行零扩展字节到双字
 * - 使用pabsd指令计算绝对差值
 * - 支持SIMD指令集优化
 * - 处理8x8像素块
 */
void rendering_system_image_difference_calculator_simd(uint *src_data, int src_stride, uint *ref_data, int ref_stride, int *result)
{
  int simd_support;
  uint8_t *src_ptr, *ref_ptr;
  uint src_pixel, ref_pixel;
  int row_count, col_count;
  uint *src_line, *ref_line;
  longlong line_iter;
  ulonglong simd_processed;
  int sum1, sum2, sum3, sum4;
  int sum5, sum6, sum7, sum8;
  __m128i src_vec, ref_vec, diff_vec, abs_vec;
  uint *current_ref;
  longlong block_count;
  
  simd_support = _DAT_180bf00b0;
  block_count = 8;
  current_ref = ref_data;
  
  // 外层循环：处理8个块
  do {
    sum1 = 0;
    sum2 = 0;
    sum3 = 0;
    sum4 = 0;
    sum5 = 0;
    sum6 = 0;
    sum7 = 0;
    sum8 = 0;
    line_iter = 8;
    src_line = src_data;
    ref_line = current_ref;
    
    // 内层循环：处理8行数据
    do {
      simd_processed = 0;
      
      // SIMD处理部分：如果支持SIMD指令
      if (1 < simd_support) {
        simd_processed = 8;
        
        // 加载源数据和参考数据到SIMD寄存器
        src_vec = _mm_cvtepu8_epi32(_mm_loadu_si128((__m128i*)src_line));
        ref_vec = _mm_cvtepu8_epi32(_mm_loadu_si128((__m128i*)ref_line));
        
        // 计算绝对差值
        diff_vec = _mm_sub_epi32(src_vec, ref_vec);
        abs_vec = _mm_abs_epi32(diff_vec);
        
        // 累加差值到对应的sum变量
        sum1 += _mm_extract_epi32(abs_vec, 0);
        sum2 += _mm_extract_epi32(abs_vec, 1);
        sum3 += _mm_extract_epi32(abs_vec, 2);
        sum4 += _mm_extract_epi32(abs_vec, 3);
        
        // 处理下一组像素
        src_vec = _mm_cvtepu8_epi32(_mm_loadu_si128((__m128i*)(src_line + 1)));
        ref_vec = _mm_cvtepu8_epi32(_mm_loadu_si128((__m128i*)(ref_line + 1)));
        
        diff_vec = _mm_sub_epi32(src_vec, ref_vec);
        abs_vec = _mm_abs_epi32(diff_vec);
        
        sum5 += _mm_extract_epi32(abs_vec, 0);
        sum6 += _mm_extract_epi32(abs_vec, 1);
        sum7 += _mm_extract_epi32(abs_vec, 2);
        sum8 += _mm_extract_epi32(abs_vec, 3);
      }
      
      // 标量处理部分：处理剩余的像素
      int odd_sum = 0;
      int even_sum = 0;
      
      if (simd_processed < 8) {
        if (1 < (longlong)(8 - simd_processed)) {
          uint8_t *pixel_ptr = (uint8_t *)(simd_processed + (longlong)ref_line);
          longlong remaining_pixels = (6 - simd_processed >> 1) + 1;
          simd_processed = simd_processed + remaining_pixels * 2;
          
          do {
            // 计算奇数位置像素的绝对差值
            src_pixel = (uint)pixel_ptr[(longlong)src_line - (longlong)ref_line];
            ref_pixel = (uint)*pixel_ptr;
            uint32_t diff = src_pixel - ref_pixel;
            uint32_t abs_diff = (diff ^ (int32_t)(diff >> 31)) - (diff >> 31);
            odd_sum += abs_diff;
            
            // 计算偶数位置像素的绝对差值
            src_pixel = (uint)(pixel_ptr + 2)[((longlong)src_line - (longlong)ref_line) + -1];
            ref_pixel = (uint)pixel_ptr[1];
            diff = src_pixel - ref_pixel;
            abs_diff = (diff ^ (int32_t)(diff >> 31)) - (diff >> 31);
            even_sum += abs_diff;
            
            remaining_pixels--;
            pixel_ptr += 2;
          } while (remaining_pixels != 0);
        }
        
        // 处理最后一个像素（如果有）
        if ((longlong)simd_processed < 8) {
          src_pixel = (uint)*(uint8_t *)(simd_processed + (longlong)src_line);
          ref_pixel = (uint)*(uint8_t *)(simd_processed + (longlong)ref_line);
          uint32_t diff = src_pixel - ref_pixel;
          uint32_t abs_diff = (diff ^ (int32_t)(diff >> 31)) - (diff >> 31);
          col_count = abs_diff;
        }
        
        col_count = col_count + even_sum + odd_sum;
      }
      
      // 移动到下一行
      src_line = (uint *)((longlong)src_line + (longlong)src_stride);
      ref_line = (uint *)((longlong)ref_line + (longlong)ref_stride);
      line_iter--;
    } while (line_iter != 0);
    
    // 计算最终结果并存储
    *result = sum5 + sum1 + sum7 + sum3 + sum6 + sum2 + sum8 + sum4 + col_count;
    result++;
    current_ref = (uint *)((longlong)current_ref + 1);
    block_count--;
  } while (block_count != 0);
  
  return;
}



// =============================================================================
// 2. AVX2平均绝对差值计算函数（8字节块）
// =============================================================================

/**
 * 渲染系统AVX2平均绝对差值计算器 - 8字节块版本
 * 
 * 该函数使用AVX2指令集计算两个图像块之间的平均绝对差值，
 * 专门针对8字节数据块进行优化。
 * 
 * @param block1        第一个图像块数据（32字节数组）
 * @param stride1       第一个块的行跨度
 * @param block2        第二个图像块数据（32字节数组）
 * @param stride2       第二个块的行跨度
 * @param avg_block     平均值块数据（32字节数组）
 * @return              平均绝对差值的总和
 * 
 * 算法特点：
 * - 使用vpavgb_avx2计算平均值
 * - 使用vpsadbw_avx2计算绝对差值和
 * - 处理8行数据
 * - AVX2指令集优化
 */
uint64_t rendering_system_avx2_mean_abs_difference_8byte(uint8_t (*block1)[32], int stride1, uint8_t (*block2)[32], int stride2, uint8_t (*avg_block)[32])
{
  __m128i low_result;
  __m256i sum_vec, avg_vec, sad_vec;
  longlong row_count;
  __m256i temp_vec, result_vec;
  
  row_count = 8;
  result_vec = _mm256_setzero_si256();
  
  // 处理8行数据
  do {
    // 计算平均值并求绝对差值和
    avg_vec = _mm256_avg_epu8(_mm256_loadu_si256((__m256i*)avg_block), 
                             _mm256_loadu_si256((__m256i*)block2));
    sad_vec = _mm256_sad_epu8(avg_vec, _mm256_loadu_si256((__m256i*)block1));
    
    // 处理下一行
    avg_vec = _mm256_avg_epu8(_mm256_loadu_si256((__m256i*)(avg_block + 1)), 
                             _mm256_loadu_si256((__m256i*)((uint8_t*)block2 + stride2)));
    temp_vec = _mm256_sad_epu8(avg_vec, _mm256_loadu_si256((__m256i*)((uint8_t*)block1 + stride1)));
    
    // 更新指针
    block1 = (uint8_t (*)[32])((uint8_t*)block1 + stride1 * 2);
    avg_block += 2;
    block2 = (uint8_t (*)[32])((uint8_t*)block2 + stride2 * 2);
    
    // 累加结果
    temp_vec = _mm256_add_epi32(temp_vec, sad_vec);
    result_vec = _mm256_add_epi32(temp_vec, result_vec);
    row_count--;
  } while (row_count != 0);
  
  // 最终结果汇总
  temp_vec = _mm256_srli_si256(result_vec, 8);
  result_vec = _mm256_add_epi32(temp_vec, result_vec);
  low_result = _mm_add_epi32(_mm256_extracti128_si256(result_vec, 1), 
                             _mm256_extracti128_si256(result_vec, 0));
  
  return ((uint64_t)(uint32_t)avg_block << 32) | (uint32_t)_mm_extract_epi32(low_result, 0);
}



// =============================================================================
// 3. AVX2绝对差值计算函数（8字节块）
// =============================================================================

/**
 * 渲染系统AVX2绝对差值计算器 - 8字节块版本
 * 
 * 该函数使用AVX2指令集计算两个图像块之间的绝对差值总和，
 * 专门针对8字节数据块进行优化。
 * 
 * @param block1        第一个图像块数据（32字节数组）
 * @param stride1       第一个块的行跨度
 * @param block2        第二个图像块数据（32字节数组）
 * @param stride2       第二个块的行跨度
 * @return              绝对差值的总和
 * 
 * 算法特点：
 * - 使用vpsadbw_avx2计算绝对差值和
 * - 处理8行数据
 * - AVX2指令集优化
 * - 高效的内存访问模式
 */
uint32_t rendering_system_avx2_abs_difference_8byte(uint8_t (*block1)[32], int stride1, uint8_t (*block2)[32], int stride2)
{
  __m128i low_result;
  __m256i sum_vec, sad_vec;
  longlong row_count;
  __m256i temp_vec, result_vec;
  
  row_count = 8;
  result_vec = _mm256_setzero_si256();
  
  // 处理8行数据
  do {
    // 计算绝对差值和
    sad_vec = _mm256_sad_epu8(_mm256_loadu_si256((__m256i*)block2), 
                             _mm256_loadu_si256((__m256i*)block1));
    temp_vec = _mm256_sad_epu8(_mm256_loadu_si256((__m256i*)((uint8_t*)block2 + stride2)),
                              _mm256_loadu_si256((__m256i*)((uint8_t*)block1 + stride1)));
    
    // 更新指针
    block1 = (uint8_t (*)[32])((uint8_t*)block1 + stride1 * 2);
    block2 = (uint8_t (*)[32])((uint8_t*)block2 + stride2 * 2);
    
    // 累加结果
    temp_vec = _mm256_add_epi32(temp_vec, sad_vec);
    result_vec = _mm256_add_epi32(temp_vec, result_vec);
    row_count--;
  } while (row_count != 0);
  
  // 最终结果汇总
  temp_vec = _mm256_srli_si256(result_vec, 8);
  result_vec = _mm256_add_epi32(temp_vec, result_vec);
  low_result = _mm_add_epi32(_mm256_extracti128_si256(result_vec, 1), 
                             _mm256_extracti128_si256(result_vec, 0));
  
  return _mm_extract_epi32(low_result, 0);
}



// =============================================================================
// 4. AVX2平均绝对差值计算函数（16字节块）
// =============================================================================

/**
 * 渲染系统AVX2平均绝对差值计算器 - 16字节块版本
 * 
 * 该函数使用AVX2指令集计算两个图像块之间的平均绝对差值，
 * 专门针对16字节数据块进行优化。
 * 
 * @param block1        第一个图像块数据（32字节数组）
 * @param stride1       第一个块的行跨度
 * @param block2        第二个图像块数据（32字节数组）
 * @param stride2       第二个块的行跨度
 * @param avg_block     平均值块数据（32字节数组）
 * @return              平均绝对差值的总和
 * 
 * 算法特点：
 * - 使用vpavgb_avx2计算平均值
 * - 使用vpsadbw_avx2计算绝对差值和
 * - 处理16行数据
 * - AVX2指令集优化
 */
uint64_t rendering_system_avx2_mean_abs_difference_16byte(uint8_t (*block1)[32], int stride1, uint8_t (*block2)[32], int stride2, uint8_t (*avg_block)[32])
{
  __m128i low_result;
  __m256i sum_vec, avg_vec, sad_vec;
  longlong row_count;
  __m256i temp_vec, result_vec;
  
  row_count = 16;
  result_vec = _mm256_setzero_si256();
  
  // 处理16行数据
  do {
    // 计算平均值并求绝对差值和
    avg_vec = _mm256_avg_epu8(_mm256_loadu_si256((__m256i*)avg_block), 
                             _mm256_loadu_si256((__m256i*)block2));
    sad_vec = _mm256_sad_epu8(avg_vec, _mm256_loadu_si256((__m256i*)block1));
    
    // 处理下一行
    avg_vec = _mm256_avg_epu8(_mm256_loadu_si256((__m256i*)(avg_block + 1)), 
                             _mm256_loadu_si256((__m256i*)((uint8_t*)block2 + stride2)));
    temp_vec = _mm256_sad_epu8(avg_vec, _mm256_loadu_si256((__m256i*)((uint8_t*)block1 + stride1)));
    
    // 更新指针
    block1 = (uint8_t (*)[32])((uint8_t*)block1 + stride1 * 2);
    avg_block += 2;
    block2 = (uint8_t (*)[32])((uint8_t*)block2 + stride2 * 2);
    
    // 累加结果
    temp_vec = _mm256_add_epi32(temp_vec, sad_vec);
    result_vec = _mm256_add_epi32(temp_vec, result_vec);
    row_count--;
  } while (row_count != 0);
  
  // 最终结果汇总
  temp_vec = _mm256_srli_si256(result_vec, 8);
  result_vec = _mm256_add_epi32(temp_vec, result_vec);
  low_result = _mm_add_epi32(_mm256_extracti128_si256(result_vec, 1), 
                             _mm256_extracti128_si256(result_vec, 0));
  
  return ((uint64_t)(uint32_t)avg_block << 32) | (uint32_t)_mm_extract_epi32(low_result, 0);
}



// =============================================================================
// 5. AVX2绝对差值计算函数（16字节块）
// =============================================================================

/**
 * 渲染系统AVX2绝对差值计算器 - 16字节块版本
 * 
 * 该函数使用AVX2指令集计算两个图像块之间的绝对差值总和，
 * 专门针对16字节数据块进行优化。
 * 
 * @param block1        第一个图像块数据（32字节数组）
 * @param stride1       第一个块的行跨度
 * @param block2        第二个图像块数据（32字节数组）
 * @param stride2       第二个块的行跨度
 * @return              绝对差值的总和
 * 
 * 算法特点：
 * - 使用vpsadbw_avx2计算绝对差值和
 * - 处理16行数据
 * - AVX2指令集优化
 * - 高效的内存访问模式
 */
uint32_t rendering_system_avx2_abs_difference_16byte(uint8_t (*block1)[32], int stride1, uint8_t (*block2)[32], int stride2)
{
  __m128i low_result;
  __m256i sum_vec, sad_vec;
  longlong row_count;
  __m256i temp_vec, result_vec;
  
  row_count = 16;
  result_vec = _mm256_setzero_si256();
  
  // 处理16行数据
  do {
    // 计算绝对差值和
    sad_vec = _mm256_sad_epu8(_mm256_loadu_si256((__m256i*)block2), 
                             _mm256_loadu_si256((__m256i*)block1));
    temp_vec = _mm256_sad_epu8(_mm256_loadu_si256((__m256i*)((uint8_t*)block2 + stride2)),
                              _mm256_loadu_si256((__m256i*)((uint8_t*)block1 + stride1)));
    
    // 更新指针
    block1 = (uint8_t (*)[32])((uint8_t*)block1 + stride1 * 2);
    block2 = (uint8_t (*)[32])((uint8_t*)block2 + stride2 * 2);
    
    // 累加结果
    temp_vec = _mm256_add_epi32(temp_vec, sad_vec);
    result_vec = _mm256_add_epi32(temp_vec, result_vec);
    row_count--;
  } while (row_count != 0);
  
  // 最终结果汇总
  temp_vec = _mm256_srli_si256(result_vec, 8);
  result_vec = _mm256_add_epi32(temp_vec, result_vec);
  low_result = _mm_add_epi32(_mm256_extracti128_si256(result_vec, 1), 
                             _mm256_extracti128_si256(result_vec, 0));
  
  return _mm_extract_epi32(low_result, 0);
}



// =============================================================================
// 6. AVX2平均绝对差值计算函数（32字节块）
// =============================================================================

/**
 * 渲染系统AVX2平均绝对差值计算器 - 32字节块版本
 * 
 * 该函数使用AVX2指令集计算两个图像块之间的平均绝对差值，
 * 专门针对32字节数据块进行优化。
 * 
 * @param block1        第一个图像块数据（32字节数组）
 * @param stride1       第一个块的行跨度
 * @param block2        第二个图像块数据（32字节数组）
 * @param stride2       第二个块的行跨度
 * @param avg_block     平均值块数据（32字节数组）
 * @return              平均绝对差值的总和
 * 
 * 算法特点：
 * - 使用vpavgb_avx2计算平均值
 * - 使用vpsadbw_avx2计算绝对差值和
 * - 处理32行数据
 * - AVX2指令集优化
 */
uint64_t rendering_system_avx2_mean_abs_difference_32byte(uint8_t (*block1)[32], int stride1, uint8_t (*block2)[32], int stride2, uint8_t (*avg_block)[32])
{
  __m128i low_result;
  __m256i sum_vec, avg_vec, sad_vec;
  longlong row_count;
  __m256i temp_vec, result_vec;
  
  row_count = 32;
  result_vec = _mm256_setzero_si256();
  
  // 处理32行数据
  do {
    // 计算平均值并求绝对差值和
    avg_vec = _mm256_avg_epu8(_mm256_loadu_si256((__m256i*)avg_block), 
                             _mm256_loadu_si256((__m256i*)block2));
    sad_vec = _mm256_sad_epu8(avg_vec, _mm256_loadu_si256((__m256i*)block1));
    
    // 处理下一行
    avg_vec = _mm256_avg_epu8(_mm256_loadu_si256((__m256i*)(avg_block + 1)), 
                             _mm256_loadu_si256((__m256i*)((uint8_t*)block2 + stride2)));
    temp_vec = _mm256_sad_epu8(avg_vec, _mm256_loadu_si256((__m256i*)((uint8_t*)block1 + stride1)));
    
    // 更新指针
    block1 = (uint8_t (*)[32])((uint8_t*)block1 + stride1 * 2);
    avg_block += 2;
    block2 = (uint8_t (*)[32])((uint8_t*)block2 + stride2 * 2);
    
    // 累加结果
    temp_vec = _mm256_add_epi32(temp_vec, sad_vec);
    result_vec = _mm256_add_epi32(temp_vec, result_vec);
    row_count--;
  } while (row_count != 0);
  
  // 最终结果汇总
  temp_vec = _mm256_srli_si256(result_vec, 8);
  result_vec = _mm256_add_epi32(temp_vec, result_vec);
  low_result = _mm_add_epi32(_mm256_extracti128_si256(result_vec, 1), 
                             _mm256_extracti128_si256(result_vec, 0));
  
  return ((uint64_t)(uint32_t)avg_block << 32) | (uint32_t)_mm_extract_epi32(low_result, 0);
}



// =============================================================================
// 7. AVX2绝对差值计算函数（32字节块）
// =============================================================================

/**
 * 渲染系统AVX2绝对差值计算器 - 32字节块版本
 * 
 * 该函数使用AVX2指令集计算两个图像块之间的绝对差值总和，
 * 专门针对32字节数据块进行优化。
 * 
 * @param block1        第一个图像块数据（32字节数组）
 * @param stride1       第一个块的行跨度
 * @param block2        第二个图像块数据（32字节数组）
 * @param stride2       第二个块的行跨度
 * @return              绝对差值的总和
 * 
 * 算法特点：
 * - 使用vpsadbw_avx2计算绝对差值和
 * - 处理32行数据
 * - AVX2指令集优化
 * - 高效的内存访问模式
 */
uint32_t rendering_system_avx2_abs_difference_32byte(uint8_t (*block1)[32], int stride1, uint8_t (*block2)[32], int stride2)
{
  __m128i low_result;
  __m256i sum_vec, sad_vec;
  longlong row_count;
  __m256i temp_vec, result_vec;
  
  row_count = 32;
  result_vec = _mm256_setzero_si256();
  
  // 处理32行数据
  do {
    // 计算绝对差值和
    sad_vec = _mm256_sad_epu8(_mm256_loadu_si256((__m256i*)block2), 
                             _mm256_loadu_si256((__m256i*)block1));
    temp_vec = _mm256_sad_epu8(_mm256_loadu_si256((__m256i*)((uint8_t*)block2 + stride2)),
                              _mm256_loadu_si256((__m256i*)((uint8_t*)block1 + stride1)));
    
    // 更新指针
    block1 = (uint8_t (*)[32])((uint8_t*)block1 + stride1 * 2);
    block2 = (uint8_t (*)[32])((uint8_t*)block2 + stride2 * 2);
    
    // 累加结果
    temp_vec = _mm256_add_epi32(temp_vec, sad_vec);
    result_vec = _mm256_add_epi32(temp_vec, result_vec);
    row_count--;
  } while (row_count != 0);
  
  // 最终结果汇总
  temp_vec = _mm256_srli_si256(result_vec, 8);
  result_vec = _mm256_add_epi32(temp_vec, result_vec);
  low_result = _mm_add_epi32(_mm256_extracti128_si256(result_vec, 1), 
                             _mm256_extracti128_si256(result_vec, 0));
  
  return _mm_extract_epi32(low_result, 0);
}



// =============================================================================
// 8. AVX2平均绝对差值计算函数（32字节块，不同寻址）
// =============================================================================

/**
 * 渲染系统AVX2平均绝对差值计算器 - 32字节块版本（不同寻址模式）
 * 
 * 该函数使用AVX2指令集计算两个图像块之间的平均绝对差值，
 * 专门针对32字节数据块进行优化，使用不同的内存寻址模式。
 * 
 * @param block1        第一个图像块数据（32字节数组）
 * @param stride1       第一个块的行跨度
 * @param block2        第二个图像块数据（32字节数组）
 * @param stride2       第二个块的行跨度
 * @param avg_block     平均值块数据（32字节数组）
 * @return              平均绝对差值的总和
 * 
 * 算法特点：
 * - 使用vpavgb_avx2计算平均值
 * - 使用vpsadbw_avx2计算绝对差值和
 * - 处理32行数据
 * - 使用不同的内存寻址模式
 * - AVX2指令集优化
 */
uint64_t rendering_system_avx2_mean_abs_difference_32byte_alt_addr(uint8_t (*block1)[32], int stride1, uint8_t (*block2)[32], int stride2, uint8_t (*avg_block)[32])
{
  __m128i low_result;
  __m256i sum_vec, avg_vec, sad_vec;
  longlong row_count;
  __m256i temp_vec, result_vec;
  
  row_count = 32;
  result_vec = _mm256_setzero_si256();
  
  // 处理32行数据
  do {
    // 计算平均值并求绝对差值和
    avg_vec = _mm256_avg_epu8(_mm256_loadu_si256((__m256i*)avg_block), 
                             _mm256_loadu_si256((__m256i*)block2));
    sad_vec = _mm256_sad_epu8(avg_vec, _mm256_loadu_si256((__m256i*)block1));
    
    // 处理下一行（使用不同的寻址模式）
    avg_vec = _mm256_avg_epu8(_mm256_loadu_si256((__m256i*)(avg_block + 1)), 
                             _mm256_loadu_si256((__m256i*)(block2 + 1)));
    temp_vec = _mm256_sad_epu8(avg_vec, _mm256_loadu_si256((__m256i*)(block1 + 1)));
    
    // 更新指针（使用不同的寻址模式）
    block1 = (uint8_t (*)[32])((uint8_t*)block1 + stride1);
    avg_block += 2;
    block2 = (uint8_t (*)[32])((uint8_t*)block2 + stride2);
    
    // 累加结果
    temp_vec = _mm256_add_epi32(temp_vec, sad_vec);
    result_vec = _mm256_add_epi32(temp_vec, result_vec);
    row_count--;
  } while (row_count != 0);
  
  // 最终结果汇总
  temp_vec = _mm256_srli_si256(result_vec, 8);
  result_vec = _mm256_add_epi32(temp_vec, result_vec);
  low_result = _mm_add_epi32(_mm256_extracti128_si256(result_vec, 1), 
                             _mm256_extracti128_si256(result_vec, 0));
  
  return ((uint64_t)(uint32_t)avg_block << 32) | (uint32_t)_mm_extract_epi32(low_result, 0);
}



// =============================================================================
// 9. AVX2绝对差值计算函数（32字节块，不同寻址）
// =============================================================================

/**
 * 渲染系统AVX2绝对差值计算器 - 32字节块版本（不同寻址模式）
 * 
 * 该函数使用AVX2指令集计算两个图像块之间的绝对差值总和，
 * 专门针对32字节数据块进行优化，使用不同的内存寻址模式。
 * 
 * @param block1        第一个图像块数据（32字节数组）
 * @param stride1       第一个块的行跨度
 * @param block2        第二个图像块数据（32字节数组）
 * @param stride2       第二个块的行跨度
 * @return              绝对差值的总和
 * 
 * 算法特点：
 * - 使用vpsadbw_avx2计算绝对差值和
 * - 处理32行数据
 * - 使用不同的内存寻址模式
 * - AVX2指令集优化
 * - 高效的内存访问模式
 */
uint32_t rendering_system_avx2_abs_difference_32byte_alt_addr(uint8_t (*block1)[32], int stride1, uint8_t (*block2)[32], int stride2)
{
  __m128i low_result;
  __m256i sum_vec, sad_vec;
  longlong row_count;
  __m256i temp_vec, result_vec;
  
  row_count = 32;
  result_vec = _mm256_setzero_si256();
  
  // 处理32行数据
  do {
    // 计算绝对差值和
    sad_vec = _mm256_sad_epu8(_mm256_loadu_si256((__m256i*)block2), 
                             _mm256_loadu_si256((__m256i*)block1));
    temp_vec = _mm256_sad_epu8(_mm256_loadu_si256((__m256i*)(block2 + 1)),
                              _mm256_loadu_si256((__m256i*)(block1 + 1)));
    
    // 更新指针（使用不同的寻址模式）
    block1 = (uint8_t (*)[32])((uint8_t*)block1 + stride1);
    block2 = (uint8_t (*)[32])((uint8_t*)block2 + stride2);
    
    // 累加结果
    temp_vec = _mm256_add_epi32(temp_vec, sad_vec);
    result_vec = _mm256_add_epi32(temp_vec, result_vec);
    row_count--;
  } while (row_count != 0);
  
  // 最终结果汇总
  temp_vec = _mm256_srli_si256(result_vec, 8);
  result_vec = _mm256_add_epi32(temp_vec, result_vec);
  low_result = _mm_add_epi32(_mm256_extracti128_si256(result_vec, 1), 
                             _mm256_extracti128_si256(result_vec, 0));
  
  return _mm_extract_epi32(low_result, 0);
}



// =============================================================================
// 10. AVX2平均绝对差值计算函数（64字节块）
// =============================================================================

/**
 * 渲染系统AVX2平均绝对差值计算器 - 64字节块版本
 * 
 * 该函数使用AVX2指令集计算两个图像块之间的平均绝对差值，
 * 专门针对64字节数据块进行优化。
 * 
 * @param block1        第一个图像块数据（32字节数组）
 * @param stride1       第一个块的行跨度
 * @param block2        第二个图像块数据（32字节数组）
 * @param stride2       第二个块的行跨度
 * @param avg_block     平均值块数据（32字节数组）
 * @return              平均绝对差值的总和
 * 
 * 算法特点：
 * - 使用vpavgb_avx2计算平均值
 * - 使用vpsadbw_avx2计算绝对差值和
 * - 处理64行数据
 * - AVX2指令集优化
 */
uint64_t rendering_system_avx2_mean_abs_difference_64byte(uint8_t (*block1)[32], int stride1, uint8_t (*block2)[32], int stride2, uint8_t (*avg_block)[32])
{
  __m128i low_result;
  __m256i sum_vec, avg_vec, sad_vec;
  longlong row_count;
  __m256i temp_vec, result_vec;
  
  row_count = 64;
  result_vec = _mm256_setzero_si256();
  
  // 处理64行数据
  do {
    // 计算平均值并求绝对差值和
    avg_vec = _mm256_avg_epu8(_mm256_loadu_si256((__m256i*)avg_block), 
                             _mm256_loadu_si256((__m256i*)block2));
    sad_vec = _mm256_sad_epu8(avg_vec, _mm256_loadu_si256((__m256i*)block1));
    
    // 处理下一行
    avg_vec = _mm256_avg_epu8(_mm256_loadu_si256((__m256i*)(avg_block + 1)), 
                             _mm256_loadu_si256((__m256i*)(block2 + 1)));
    temp_vec = _mm256_sad_epu8(avg_vec, _mm256_loadu_si256((__m256i*)(block1 + 1)));
    
    // 更新指针
    block1 = (uint8_t (*)[32])((uint8_t*)block1 + stride1);
    avg_block += 2;
    block2 = (uint8_t (*)[32])((uint8_t*)block2 + stride2);
    
    // 累加结果
    temp_vec = _mm256_add_epi32(temp_vec, sad_vec);
    result_vec = _mm256_add_epi32(temp_vec, result_vec);
    row_count--;
  } while (row_count != 0);
  
  // 最终结果汇总
  temp_vec = _mm256_srli_si256(result_vec, 8);
  result_vec = _mm256_add_epi32(temp_vec, result_vec);
  low_result = _mm_add_epi32(_mm256_extracti128_si256(result_vec, 1), 
                             _mm256_extracti128_si256(result_vec, 0));
  
  return ((uint64_t)(uint32_t)avg_block << 32) | (uint32_t)_mm_extract_epi32(low_result, 0);
}



// =============================================================================
// 11. AVX2绝对差值计算函数（64字节块）
// =============================================================================

/**
 * 渲染系统AVX2绝对差值计算器 - 64字节块版本
 * 
 * 该函数使用AVX2指令集计算两个图像块之间的绝对差值总和，
 * 专门针对64字节数据块进行优化。
 * 
 * @param block1        第一个图像块数据（32字节数组）
 * @param stride1       第一个块的行跨度
 * @param block2        第二个图像块数据（32字节数组）
 * @param stride2       第二个块的行跨度
 * @return              绝对差值的总和
 * 
 * 算法特点：
 * - 使用vpsadbw_avx2计算绝对差值和
 * - 处理64行数据
 * - AVX2指令集优化
 * - 高效的内存访问模式
 */
uint32_t rendering_system_avx2_abs_difference_64byte(uint8_t (*block1)[32], int stride1, uint8_t (*block2)[32], int stride2)
{
  __m128i low_result;
  __m256i sum_vec, sad_vec;
  longlong row_count;
  __m256i temp_vec, result_vec;
  
  row_count = 64;
  result_vec = _mm256_setzero_si256();
  
  // 处理64行数据
  do {
    // 计算绝对差值和
    sad_vec = _mm256_sad_epu8(_mm256_loadu_si256((__m256i*)block2), 
                             _mm256_loadu_si256((__m256i*)block1));
    temp_vec = _mm256_sad_epu8(_mm256_loadu_si256((__m256i*)(block2 + 1)),
                              _mm256_loadu_si256((__m256i*)(block1 + 1)));
    
    // 更新指针
    block1 = (uint8_t (*)[32])((uint8_t*)block1 + stride1);
    block2 = (uint8_t (*)[32])((uint8_t*)block2 + stride2);
    
    // 累加结果
    temp_vec = _mm256_add_epi32(temp_vec, sad_vec);
    result_vec = _mm256_add_epi32(temp_vec, result_vec);
    row_count--;
  } while (row_count != 0);
  
  // 最终结果汇总
  temp_vec = _mm256_srli_si256(result_vec, 8);
  result_vec = _mm256_add_epi32(temp_vec, result_vec);
  low_result = _mm_add_epi32(_mm256_extracti128_si256(result_vec, 1), 
                             _mm256_extracti128_si256(result_vec, 0));
  
  return _mm_extract_epi32(low_result, 0);
}





// =============================================================================
// 12. AVX2多参考帧绝对差值计算函数
// =============================================================================

/**
 * 渲染系统AVX2多参考帧绝对差值计算器
 * 
 * 该函数使用AVX2指令集计算源图像块与多个参考帧之间的绝对差值，
 * 专门用于视频编码中的多参考帧运动估计。
 * 
 * @param src_block     源图像块数据（32字节数组）
 * @param src_stride    源图像块行跨度
 * @param ref_frames    参考帧数组指针（包含4个参考帧的地址）
 * @param ref_stride    参考帧行跨度
 * @param result        计算结果数组（16字节）
 * 
 * 算法特点：
 * - 使用vpsadbw_avx2计算绝对差值和
 * - 同时处理4个参考帧
 * - 使用AVX2指令集进行并行计算
 * - 高效的内存访问模式
 * - 适用于视频编码中的多参考帧运动估计
 */
void rendering_system_avx2_multi_reference_frame_calculator(uint8_t (*src_block)[32], int src_stride, long long *ref_frames, int ref_stride, uint8_t (*result)[16])
{
  __m256i src_vec;
  __m128i final_result;
  __m256i sum_vec1, sum_vec2, sum_vec3, sum_vec4;
  __m256i temp_vec1, temp_vec2, result_vec1, result_vec2;
  uint8_t (*current_ref)[32];
  longlong ref_offset1, ref_offset2, ref_offset3;
  longlong row_count;
  __m256i sad_vec;
  
  // 获取参考帧地址和偏移量
  current_ref = (uint8_t (*)[32])ref_frames[2];
  ref_offset1 = ref_frames[1] - (longlong)current_ref;
  ref_offset2 = ref_frames[3] - (longlong)current_ref;
  sum_vec2 = _mm256_setzero_si256();
  ref_offset3 = *ref_frames - (longlong)current_ref;
  row_count = 32;
  sum_vec1 = sum_vec2;
  sum_vec3 = sum_vec2;
  sum_vec4 = sum_vec2;
  
  // 处理32行数据
  do {
    // 加载源图像块
    src_vec = _mm256_loadu_si256((__m256i*)src_block);
    
    // 计算与第一个参考帧的绝对差值和
    sad_vec = _mm256_sad_epu8(src_vec, _mm256_loadu_si256((__m256i*)(ref_offset3 + (longlong)current_ref)));
    sum_vec2 = _mm256_add_epi32(sad_vec, sum_vec2);
    
    // 计算与第二个参考帧的绝对差值和
    sad_vec = _mm256_sad_epu8(src_vec, _mm256_loadu_si256((__m256i*)(ref_offset1 + (longlong)current_ref)));
    sum_vec1 = _mm256_add_epi32(sad_vec, sum_vec1);
    
    // 计算与第三个参考帧的绝对差值和
    sad_vec = _mm256_sad_epu8(src_vec, _mm256_loadu_si256((__m256i*)current_ref));
    sum_vec3 = _mm256_add_epi32(sad_vec, sum_vec3);
    
    // 计算与第四个参考帧的绝对差值和
    sad_vec = _mm256_sad_epu8(src_vec, _mm256_loadu_si256((__m256i*)(ref_offset2 + (longlong)current_ref)));
    current_ref = (uint8_t (*)[32])((uint8_t*)current_ref + ref_stride);
    src_block = (uint8_t (*)[32])((uint8_t*)src_block + src_stride);
    sum_vec4 = _mm256_add_epi32(sad_vec, sum_vec4);
    
    row_count--;
  } while (row_count != 0);
  
  // 结果处理：使用AVX2指令进行数据重组和累加
  temp_vec1 = _mm256_slli_si256(sum_vec1, 4);
  sum_vec2 = _mm256_or_si256(temp_vec1, sum_vec2);
  temp_vec1 = _mm256_slli_si256(sum_vec4, 4);
  temp_vec1 = _mm256_or_si256(temp_vec1, sum_vec3);
  result_vec1 = _mm256_unpacklo_epi64(sum_vec2, temp_vec1);
  sum_vec2 = _mm256_unpackhi_epi64(sum_vec2, temp_vec1);
  sum_vec2 = _mm256_add_epi32(sum_vec2, result_vec1);
  final_result = _mm_add_epi32(_mm256_extracti128_si256(sum_vec2, 1), 
                               _mm256_extracti128_si256(sum_vec2, 0));
  
  *result = (__m128i)final_result;
  return;
}





// 函数: void FUN_1806978b0(undefined1 (*param_1) [32],int param_2,longlong *param_3,int param_4,
void FUN_1806978b0(undefined1 (*param_1) [32],int param_2,longlong *param_3,int param_4,
                  undefined1 (*param_5) [16])

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 (*pauVar8) [32];
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  
  pauVar8 = (undefined1 (*) [32])param_3[2];
  lVar12 = param_3[1] - (longlong)pauVar8;
  lVar11 = param_3[3] - (longlong)pauVar8;
  auVar14 = ZEXT832(0) << 0x40;
  lVar10 = *param_3 - (longlong)pauVar8;
  lVar9 = 0x40;
  auVar13 = auVar14;
  auVar4 = auVar14;
  auVar5 = auVar14;
  do {
    auVar1 = *param_1;
    auVar2 = param_1[1];
    auVar6 = vpsadbw_avx2(auVar1,*(undefined1 (*) [32])(lVar10 + (longlong)pauVar8));
    auVar7 = vpsadbw_avx2(auVar2,*(undefined1 (*) [32])(lVar10 + 0x20 + (longlong)pauVar8));
    auVar14 = vpaddd_avx2(auVar6,auVar14);
    auVar6 = vpsadbw_avx2(auVar1,*(undefined1 (*) [32])(lVar12 + (longlong)pauVar8));
    auVar14 = vpaddd_avx2(auVar14,auVar7);
    auVar7 = vpsadbw_avx2(auVar2,*(undefined1 (*) [32])(lVar12 + 0x20 + (longlong)pauVar8));
    auVar13 = vpaddd_avx2(auVar6,auVar13);
    auVar6 = vpsadbw_avx2(auVar1,*pauVar8);
    auVar13 = vpaddd_avx2(auVar13,auVar7);
    auVar7 = vpsadbw_avx2(auVar2,pauVar8[1]);
    auVar4 = vpaddd_avx2(auVar6,auVar4);
    auVar1 = vpsadbw_avx2(auVar1,*(undefined1 (*) [32])(lVar11 + (longlong)pauVar8));
    auVar4 = vpaddd_avx2(auVar4,auVar7);
    auVar2 = vpsadbw_avx2(auVar2,*(undefined1 (*) [32])(lVar11 + 0x20 + (longlong)pauVar8));
    pauVar8 = (undefined1 (*) [32])(*pauVar8 + param_4);
    param_1 = (undefined1 (*) [32])(*param_1 + param_2);
    auVar5 = vpaddd_avx2(auVar1,auVar5);
    auVar5 = vpaddd_avx2(auVar5,auVar2);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  auVar13 = vpslldq_avx2(auVar13,4);
  auVar14 = vpor_avx2(auVar13,auVar14);
  auVar13 = vpslldq_avx2(auVar5,4);
  auVar13 = vpor_avx2(auVar13,auVar4);
  auVar4 = vpunpcklqdq_avx2(auVar14,auVar13);
  auVar14 = vpunpckhqdq_avx2(auVar14,auVar13);
  auVar14 = vpaddd_avx2(auVar14,auVar4);
  auVar3 = vpaddd_avx(auVar14._16_16_,auVar14._0_16_);
  *param_5 = auVar3;
  return;
}





// 函数: void FUN_1806979e0(void)
void FUN_1806979e0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_180697ae0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
void FUN_180697ae0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,uint param_6,int param_7,int param_8,uint param_9)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  short *psVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  param_1 = param_1 + -3;
  if (0 < (int)param_9) {
    uVar6 = (ulonglong)param_9;
    do {
      lVar5 = 0;
      uVar1 = param_6;
      if (0 < (longlong)param_8) {
        do {
          psVar4 = (short *)((ulonglong)(uVar1 & 0xf) * 0x10 + param_5);
          pbVar3 = (byte *)(((longlong)(int)uVar1 >> 4) + param_1);
          iVar2 = (int)((uint)*pbVar3 * (int)*psVar4 +
                       (int)psVar4[7] * (uint)pbVar3[7] + (int)psVar4[6] * (uint)pbVar3[6] +
                       (int)psVar4[5] * (uint)pbVar3[5] + (int)psVar4[4] * (uint)pbVar3[4] +
                       (int)psVar4[3] * (uint)pbVar3[3] + (int)psVar4[2] * (uint)pbVar3[2] +
                       (int)psVar4[1] * (uint)pbVar3[1] + 0x40) >> 7;
          if (iVar2 < 0x100) {
            if (iVar2 < 0) {
              iVar2 = 0;
            }
          }
          else {
            iVar2 = 0xff;
          }
          *(char *)(lVar5 + param_3) = (char)iVar2;
          lVar5 = lVar5 + 1;
          uVar1 = uVar1 + param_7;
        } while (lVar5 < param_8);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}





// 函数: void FUN_180697b09(void)
void FUN_180697b09(void)

{
  uint uVar1;
  uint in_EAX;
  int iVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  byte *pbVar3;
  short *psVar4;
  longlong lVar5;
  longlong unaff_R12;
  ulonglong uVar6;
  longlong unaff_R15;
  longlong in_stack_00000048;
  uint in_stack_00000050;
  int in_stack_00000058;
  
  uVar6 = (ulonglong)in_EAX;
  do {
    lVar5 = 0;
    uVar1 = in_stack_00000050;
    if (0 < unaff_RDI) {
      do {
        psVar4 = (short *)((ulonglong)(uVar1 & 0xf) * 0x10 + in_stack_00000048);
        pbVar3 = (byte *)(((longlong)(int)uVar1 >> 4) + unaff_RBP);
        iVar2 = (int)((uint)*pbVar3 * (int)*psVar4 +
                     (int)psVar4[7] * (uint)pbVar3[7] + (int)psVar4[6] * (uint)pbVar3[6] +
                     (int)psVar4[5] * (uint)pbVar3[5] + (int)psVar4[4] * (uint)pbVar3[4] +
                     (int)psVar4[3] * (uint)pbVar3[3] + (int)psVar4[2] * (uint)pbVar3[2] +
                     (int)psVar4[1] * (uint)pbVar3[1] + 0x40) >> 7;
        if (iVar2 < 0x100) {
          if (iVar2 < 0) {
            iVar2 = 0;
          }
        }
        else {
          iVar2 = 0xff;
        }
        *(char *)(lVar5 + unaff_RBX) = (char)iVar2;
        lVar5 = lVar5 + 1;
        uVar1 = uVar1 + in_stack_00000058;
      } while (lVar5 < unaff_RDI);
    }
    unaff_RBP = unaff_RBP + unaff_R12;
    unaff_RBX = unaff_RBX + unaff_R15;
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  return;
}





// 函数: void FUN_180697c23(void)
void FUN_180697c23(void)

{
  return;
}





// 函数: void FUN_180697c30(longlong param_1,longlong param_2,undefined1 *param_3,longlong param_4,
void FUN_180697c30(longlong param_1,longlong param_2,undefined1 *param_3,longlong param_4,
                  longlong param_5,uint param_6,int param_7,uint param_8,int param_9)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  short *psVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulonglong uStackX_8;
  undefined1 *puStackX_18;
  
  param_1 = param_1 + param_2 * -3;
  uStackX_8 = (ulonglong)param_8;
  puStackX_18 = param_3;
  if (0 < (int)param_8) {
    do {
      lVar3 = (longlong)param_9;
      if (0 < lVar3) {
        puVar6 = puStackX_18;
        uVar7 = param_6;
        do {
          psVar5 = (short *)((ulonglong)(uVar7 & 0xf) * 0x10 + param_5);
          pbVar4 = (byte *)(((longlong)(int)uVar7 >> 4) * param_2 + param_1);
          iVar2 = (int)((uint)*pbVar4 * (int)*psVar5 +
                       (uint)pbVar4[param_2 * 2] * (int)psVar5[2] +
                       (uint)pbVar4[param_2 * 4] * (int)psVar5[4] +
                       (uint)pbVar4[param_2 * 5] * (int)psVar5[5] +
                       (uint)pbVar4[param_2 * 6] * (int)psVar5[6] +
                       (uint)pbVar4[param_2 * 7] * (int)psVar5[7] +
                       (uint)pbVar4[param_2 * 3] * (int)psVar5[3] +
                       (uint)pbVar4[param_2] * (int)psVar5[1] + 0x40) >> 7;
          if (iVar2 < 0x100) {
            uVar1 = (undefined1)iVar2;
            if (iVar2 < 0) {
              uVar1 = 0;
            }
          }
          else {
            uVar1 = 0xff;
          }
          *puVar6 = uVar1;
          uVar7 = uVar7 + param_7;
          puVar6 = puVar6 + param_4;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      puStackX_18 = puStackX_18 + 1;
      param_1 = param_1 + 1;
      uStackX_8 = uStackX_8 - 1;
    } while (uStackX_8 != 0);
  }
  return;
}





// 函数: void FUN_180697c6b(void)
void FUN_180697c6b(void)

{
  undefined1 uVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  byte *pbVar3;
  short *psVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong unaff_R13;
  longlong unaff_R14;
  undefined1 *unaff_R15;
  ulonglong uStack0000000000000050;
  undefined1 *in_stack_00000060;
  longlong in_stack_00000070;
  uint in_stack_00000078;
  int in_stack_00000080;
  int in_stack_00000090;
  
  uVar6 = in_RAX & 0xffffffff;
  uStack0000000000000050 = in_RAX;
  do {
    if (0 < unaff_R13) {
      uVar5 = in_stack_00000078;
      do {
        psVar4 = (short *)((ulonglong)(uVar5 & 0xf) * 0x10 + in_stack_00000070);
        pbVar3 = (byte *)(((longlong)(int)uVar5 >> 4) * unaff_RDI + unaff_R14);
        iVar2 = (int)((uint)*pbVar3 * (int)*psVar4 +
                     (uint)pbVar3[unaff_RDI * 2] * (int)psVar4[2] +
                     (uint)pbVar3[unaff_RDI * 4] * (int)psVar4[4] +
                     (uint)pbVar3[unaff_RDI * 5] * (int)psVar4[5] +
                     (uint)pbVar3[unaff_RDI * 6] * (int)psVar4[6] +
                     (uint)pbVar3[unaff_RDI * 7] * (int)psVar4[7] +
                     (uint)pbVar3[unaff_RDI * 3] * (int)psVar4[3] +
                     (uint)pbVar3[unaff_RDI] * (int)psVar4[1] + 0x40) >> 7;
        if (iVar2 < 0x100) {
          uVar1 = (undefined1)iVar2;
          if (iVar2 < 0) {
            uVar1 = 0;
          }
        }
        else {
          uVar1 = 0xff;
        }
        *unaff_R15 = uVar1;
        uVar5 = uVar5 + in_stack_00000080;
        unaff_R15 = unaff_R15 + unaff_RBP;
        unaff_R13 = unaff_R13 + -1;
      } while (unaff_R13 != 0);
      unaff_R13 = (longlong)in_stack_00000090;
      uVar6 = uStack0000000000000050;
      unaff_R15 = in_stack_00000060;
    }
    unaff_R15 = unaff_R15 + 1;
    unaff_R14 = unaff_R14 + 1;
    uVar6 = uVar6 - 1;
    uStack0000000000000050 = uVar6;
    in_stack_00000060 = unaff_R15;
  } while (uVar6 != 0);
  return;
}





// 函数: void FUN_180697dc2(void)
void FUN_180697dc2(void)

{
  return;
}





