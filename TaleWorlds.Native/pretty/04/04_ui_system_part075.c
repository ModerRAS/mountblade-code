#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part075.c - UI系统高级数据处理和控制模块
// 包含8个核心函数，涵盖UI系统高级数据处理、位操作、编码解码、参数计算等高级UI功能

// 全局常量定义
#define UI_MAX_CHANNEL_COUNT 0x4fc
#define UI_SAMPLE_RATE_BASE 48000
#define UI_BITRATE_THRESHOLD 0x1680
#define UI_FLOAT_CLAMP_VALUE 2.0f
#define UI_FLOAT_MIN_VALUE -2.0f
#define UI_PROCESSING_CHUNK_SIZE 16

// 函数别名定义
typedef void (*ui_system_void_function)(void);
typedef uint (*ui_system_data_processor)(longlong *, uint);
typedef ulonglong (*ui_system_audio_decoder)(byte *, int, int, byte *, longlong, short *, int *, int *);
typedef void (*ui_system_float_processor)(longlong, int, int, float *);

// 函数声明
void ui_system_empty_function(void);
uint ui_system_calculate_bit_allocation(longlong *ui_context, uint bit_count);
uint ui_system_process_audio_data(undefined8 param_1, uint param_2);
uint ui_system_empty_function_return(undefined8 param_1);
ulonglong ui_system_decode_audio_stream(byte *audio_data, int data_size, int decode_mode, byte *format_output, longlong buffer_ptr, short *channel_sizes, int *bytes_processed, int *total_size);
ulonglong ui_system_process_audio_chunk(undefined8 param_1, undefined8 param_2, int param_3);
int ui_system_validate_audio_data(void);
uint ui_system_return_error_code(void);
void ui_system_process_float_array(longlong array_ptr, int width, int height, float *output_buffer);

/**
 * @brief UI系统空函数
 * 用作占位符或初始化函数
 */
void ui_system_empty_function(void)
{
  return;
}

/**
 * @brief UI系统位分配计算函数
 * @param ui_context UI上下文指针
 * @param bit_count 位数计数
 * @return uint 计算结果
 * 
 * 该函数根据输入参数计算位分配，用于UI系统的数据处理和资源分配
 */
uint ui_system_calculate_bit_allocation(longlong *ui_context, uint bit_count)
{
  int bit_position;
  uint result;
  byte shift_bits;
  int calculation_result;
  uint current_bits;
  uint available_bits;
  uint processed_bits;
  uint temp_value;
  uint loop_counter;
  int adjustment_factor;
  
  current_bits = *(uint *)(ui_context + 4);
  available_bits = bit_count - 1;
  processed_bits = *(uint *)((longlong)ui_context + 0x24);
  bit_position = 0x1f;
  if (available_bits != 0) {
    for (; available_bits >> bit_position == 0; bit_position = bit_position + -1) {
    }
  }
  if (bit_position + 1 < 9) {
    calculation_result = (int)((ulonglong)current_bits / (ulonglong)bit_count);
    *(int *)(ui_context + 5) = calculation_result;
    adjustment_factor = (int)((ulonglong)processed_bits / ((ulonglong)current_bits / (ulonglong)bit_count));
    bit_position = 0;
    if (bit_count < adjustment_factor + 1U) {
      bit_position = (bit_count - adjustment_factor) + -1;
    }
    adjustment_factor = (bit_count - bit_position) - adjustment_factor;
    bit_position = (bit_count - adjustment_factor) * calculation_result;
    result = adjustment_factor - 1;
    *(uint *)((longlong)ui_context + 0x24) = processed_bits - bit_position;
    if (result == 0) {
      calculation_result = current_bits - bit_position;
    }
    *(int *)(ui_context + 4) = calculation_result;
    ui_system_empty_function();
  }
  else {
    result = bit_position - 7;
    shift_bits = (byte)result;
    temp_value = (available_bits >> (shift_bits & 0x1f)) + 1;
    calculation_result = (int)((ulonglong)current_bits / (ulonglong)temp_value);
    *(int *)(ui_context + 5) = calculation_result;
    adjustment_factor = (int)((ulonglong)processed_bits / ((ulonglong)current_bits / (ulonglong)temp_value));
    bit_position = 0;
    if (temp_value < adjustment_factor + 1U) {
      bit_position = (temp_value - adjustment_factor) + -1;
    }
    adjustment_factor = (temp_value - bit_position) - adjustment_factor;
    bit_position = (temp_value - adjustment_factor) * calculation_result;
    adjustment_factor = adjustment_factor + -1;
    *(uint *)((longlong)ui_context + 0x24) = processed_bits - bit_position;
    if (adjustment_factor == 0) {
      calculation_result = current_bits - bit_position;
    }
    *(int *)(ui_context + 4) = calculation_result;
    ui_system_empty_function();
    current_bits = *(uint *)((longlong)ui_context + 0x14);
    processed_bits = *(uint *)(ui_context + 2);
    if (current_bits < result) {
      temp_value = *(uint *)((longlong)ui_context + 0xc);
      loop_counter = current_bits;
      do {
        if (temp_value < *(uint *)(ui_context + 1)) {
          temp_value = temp_value + 1;
          *(uint *)((longlong)ui_context + 0xc) = temp_value;
          result = (uint)*(byte *)((ulonglong)(*(uint *)(ui_context + 1) - temp_value) + *ui_context);
        }
        else {
          result = 0;
        }
        current_bits = loop_counter + 8;
        processed_bits = processed_bits | result << ((byte)loop_counter & 0x1f);
        loop_counter = current_bits;
      } while ((int)current_bits < 0x19);
    }
    *(uint *)(ui_context + 3) = (int)ui_context[3] + result;
    *(uint *)((longlong)ui_context + 0x14) = current_bits - result;
    *(uint *)(ui_context + 2) = processed_bits >> (shift_bits & 0x1f);
    result = (1 << (shift_bits & 0x1f)) - 1U & processed_bits | adjustment_factor << (shift_bits & 0x1f);
    if (available_bits < result) {
      *(undefined4 *)(ui_context + 6) = 1;
      result = available_bits;
    }
  }
  return result;
}



/**
 * @brief UI系统音频数据处理函数
 * @param audio_context 音频上下文参数
 * @param sample_count 采样数量
 * @return uint 处理结果
 * 
 * 该函数处理音频数据的位操作和编码，用于UI系统的音频处理模块
 */
uint ui_system_process_audio_data(undefined8 audio_context, uint sample_count)
{
  ulonglong sample_rate;
  byte bit_shift;
  int channel_count;
  uint bit_result;
  ulonglong audio_data;
  int frame_count;
  uint available_bits;
  uint total_bits;
  uint bit_offset;
  uint channel_size;
  uint processed_bits;
  uint temp_result;
  int adjustment_value;
  uint bit_depth;
  int samples_per_frame;
  
  bit_shift = (byte)bit_offset;
  total_bits = (available_bits >> (bit_shift & 0x1f)) + 1;
  sample_rate = ((ulonglong)sample_count << 0x20 | audio_data & 0xffffffff) / (ulonglong)total_bits;
  channel_count = (int)sample_rate;
  *(int *)(audio_context + 5) = channel_count;
  frame_count = (int)((ulonglong)bit_depth / (sample_rate & 0xffffffff));
  processed_bits = bit_depth;
  if (total_bits < frame_count + 1U) {
    processed_bits = (total_bits - frame_count) - 1;
  }
  frame_count = (total_bits - processed_bits) - frame_count;
  adjustment_value = (total_bits - frame_count) * channel_count;
  frame_count = frame_count + -1;
  *(uint *)((longlong)audio_context + 0x24) = bit_depth - adjustment_value;
  if (frame_count == 0) {
    channel_count = samples_per_frame - adjustment_value;
  }
  *(int *)(audio_context + 4) = channel_count;
  ui_system_empty_function();
  processed_bits = *(uint *)((longlong)audio_context + 0x14);
  total_bits = *(uint *)(audio_context + 2);
  if (processed_bits < bit_offset) {
    available_bits = *(uint *)((longlong)audio_context + 0xc);
    channel_size = processed_bits;
    do {
      bit_result = bit_depth;
      if (available_bits < *(uint *)(audio_context + 1)) {
        available_bits = available_bits + 1;
        *(uint *)((longlong)audio_context + 0xc) = available_bits;
        bit_result = (uint)*(byte *)((ulonglong)(*(uint *)(audio_context + 1) - available_bits) + *audio_context);
      }
      processed_bits = channel_size + 8;
      total_bits = total_bits | bit_result << ((byte)channel_size & 0x1f);
      channel_size = processed_bits;
    } while ((int)processed_bits < 0x19);
  }
  *(uint *)(audio_context + 3) = (int)audio_context[3] + bit_offset;
  *(uint *)((longlong)audio_context + 0x14) = processed_bits - bit_offset;
  *(uint *)(audio_context + 2) = total_bits >> (bit_shift & 0x1f);
  processed_bits = (1 << (bit_shift & 0x1f)) - 1U & total_bits | frame_count << (bit_shift & 0x1f);
  if (available_bits < processed_bits) {
    *(undefined4 *)(audio_context + 6) = 1;
    processed_bits = available_bits;
  }
  return processed_bits;
}



/**
 * @brief UI系统状态设置函数
 * @return undefined4 返回状态码
 * 
 * 该函数用于设置UI系统的状态标志位
 */
uint ui_system_set_status_flag(void)
{
  uint status_code;
  longlong context_ptr;
  
  *(uint *)(context_ptr + 0x30) = 1;
  return status_code;
}



/**
 * @brief UI系统音频流解码函数
 * @param audio_data 音频数据指针
 * @param data_size 数据大小
 * @param decode_mode 解码模式
 * @param format_output 格式输出指针
 * @param buffer_ptr 缓冲区指针
 * @param channel_sizes 通道大小数组
 * @param bytes_processed 已处理字节数
 * @param total_size 总大小
 * @return ulonglong 解码结果
 * 
 * 该函数用于解码音频流数据，支持多种音频格式和编码方式
 */
ulonglong ui_system_decode_audio_stream(byte *audio_data, int data_size, int decode_mode, byte *format_output, longlong buffer_ptr, short *channel_sizes, int *bytes_processed, int *total_size)
{
  byte format_header;
  byte encoding_flag;
  short channel_size;
  byte channel_mode;
  ulonglong channel_count;
  int sample_rate;
  int bitrate;
  ulonglong result;
  uint channels_per_frame;
  ulonglong frame_count;
  uint frame_size;
  short *channel_ptr;
  uint total_frames;
  byte *data_ptr;
  uint remaining_data;
  uint skip_bytes;
  
  result = 0;
  channels_per_frame = 0;
  skip_bytes = 0;
  if ((channel_sizes == (short *)0x0) || (data_size < 0)) {
    return 0xffffffff;
  }
  if (data_size == 0) {
    return 0xfffffffc;
  }
  format_header = *audio_data;
  if ((char)format_header < '\0') {
    sample_rate = UI_SAMPLE_RATE_BASE << (format_header >> 3 & 3);
    sample_rate = sample_rate / 400 + (sample_rate >> 0x1f);
SAMPLE_RATE_CALCULATION:
    sample_rate = sample_rate - (sample_rate >> 0x1f);
  }
  else if ((format_header & 0x60) == 0x60) {
    sample_rate = 0x3c0;
    if ((format_header & 8) == 0) {
      sample_rate = 0x1e0;
    }
  }
  else {
    channel_mode = format_header >> 3 & 3;
    if (channel_mode != 3) {
      sample_rate = UI_SAMPLE_RATE_BASE << channel_mode;
      sample_rate = sample_rate / 100 + (sample_rate >> 0x1f);
      goto SAMPLE_RATE_CALCULATION;
    }
    sample_rate = 0xb40;
  }
  uVar15 = param_2 - 1;
  pbVar14 = param_1 + 1;
  bVar4 = 0;
  uVar13 = uVar15;
  if ((bVar1 & 3) == 0) {
    uVar10 = 1;
    uStackX_8 = uVar9;
  }
  else if ((bVar1 & 3) == 1) {
    uVar10 = 2;
    bVar4 = 1;
    uStackX_8 = uVar9;
    if (param_3 == 0) {
      if ((uVar15 & 1) != 0) {
        return 0xfffffffc;
      }
      *param_6 = (short)((int)uVar15 / 2);
      uVar13 = (int)uVar15 / 2;
    }
  }
  else if ((bVar1 & 3) == 2) {
    uVar10 = 2;
    iVar6 = func_0x0001807104d0(pbVar14,uVar15,param_6);
    sVar3 = *param_6;
    uVar15 = uVar15 - iVar6;
    if (sVar3 < 0) {
      return 0xfffffffc;
    }
    if ((int)uVar15 < (int)sVar3) {
      return 0xfffffffc;
    }
    pbVar14 = pbVar14 + iVar6;
    uStackX_8 = uVar9;
    uVar13 = uVar15 - (int)sVar3;
  }
  else {
    if ((int)uVar15 < 1) {
      return 0xfffffffc;
    }
    bVar4 = *pbVar14;
    pbVar14 = param_1 + 2;
    uVar9 = bVar4 & 0x3f;
    uVar10 = (ulonglong)uVar9;
    if ((bVar4 & 0x3f) == 0) {
      return 0xfffffffc;
    }
    if (0x1680 < (int)(iVar6 * uVar9)) {
      return 0xfffffffc;
    }
    uVar15 = param_2 - 2;
    uVar5 = uVar8;
    if ((bVar4 & 0x40) != 0) {
      do {
        if ((int)uVar15 < 1) {
          return 0xfffffffc;
        }
        bVar2 = *pbVar14;
        pbVar14 = pbVar14 + 1;
        uVar11 = (uint)bVar2;
        if (bVar2 == 0xff) {
          uVar11 = 0xfe;
        }
        uStackX_8 = (int)uVar5 + uVar11;
        uVar15 = uVar15 + (-1 - uVar11);
        uVar5 = (ulonglong)uStackX_8;
      } while (bVar2 == 0xff);
    }
    if ((int)uVar15 < 0) {
      return 0xfffffffc;
    }
    bVar4 = ~(bVar4 >> 7) & 1;
    if (bVar4 == 0) {
      uVar5 = uVar8;
      psVar12 = param_6;
      uVar13 = uVar15;
      if (0 < (int)(uVar9 - 1)) {
        do {
          iVar6 = func_0x0001807104d0(pbVar14,uVar15,param_6 + (int)uVar5);
          sVar3 = *psVar12;
          uVar15 = uVar15 - iVar6;
          if (sVar3 < 0) {
            return 0xfffffffc;
          }
          if ((int)uVar15 < (int)sVar3) {
            return 0xfffffffc;
          }
          uVar11 = (int)uVar5 + 1;
          pbVar14 = pbVar14 + iVar6;
          uVar13 = uVar13 - (iVar6 + sVar3);
          uVar5 = (ulonglong)uVar11;
          psVar12 = psVar12 + 1;
        } while ((int)uVar11 < (int)(uVar9 - 1));
      }
      if ((int)uVar13 < 0) {
        return 0xfffffffc;
      }
    }
    else if (param_3 == 0) {
      uVar13 = (int)uVar15 / (int)uVar9;
      if (uVar9 * uVar13 != uVar15) {
        return 0xfffffffc;
      }
      if (0 < (int)(uVar9 - 1)) {
        psVar12 = param_6;
        for (uVar5 = uVar10 * 2 - 2 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
          *psVar12 = (short)uVar13;
          psVar12 = psVar12 + 1;
        }
      }
    }
  }
  if (param_3 == 0) {
    if ((int)uVar13 < 0x4fc) {
      param_6[uVar10 - 1] = (short)uVar13;
      goto LAB_18070fb9d;
    }
  }
  else {
    iVar6 = func_0x0001807104d0(pbVar14,uVar15,param_6 + (uVar10 - 1));
    if ((-1 < param_6[uVar10 - 1]) &&
       (iVar7 = (int)param_6[uVar10 - 1], iVar7 <= (int)(uVar15 - iVar6))) {
      pbVar14 = pbVar14 + iVar6;
      if (bVar4 == 0) {
        if (iVar6 + iVar7 <= (int)uVar13) goto LAB_18070fb9d;
      }
      else if (iVar7 * (int)uVar10 <= (int)(uVar15 - iVar6)) {
        uVar5 = uVar8;
        if (0 < (longlong)(uVar10 - 1)) {
          do {
            param_6[uVar5] = param_6[uVar10 - 1];
            uVar5 = uVar5 + 1;
          } while ((longlong)uVar5 < (longlong)(uVar10 - 1));
        }
LAB_18070fb9d:
        if (param_7 != (int *)0x0) {
          *param_7 = (int)pbVar14 - (int)param_1;
        }
        if ((int)uVar10 != 0) {
          do {
            if (param_5 != 0) {
              *(byte **)(param_5 + uVar8 * 8) = pbVar14;
            }
            psVar12 = param_6 + uVar8;
            uVar8 = uVar8 + 1;
            pbVar14 = pbVar14 + *psVar12;
          } while ((longlong)uVar8 < (longlong)uVar10);
        }
        if (param_8 != (int *)0x0) {
          *param_8 = ((int)pbVar14 - (int)param_1) + uStackX_8;
        }
        if (param_4 != (byte *)0x0) {
          *param_4 = bVar1;
          return uVar10;
        }
        return uVar10;
      }
    }
  }
  return 0xfffffffc;
}



ulonglong FUN_18070f8a4(byte *param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  byte bVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong unaff_RBX;
  uint uVar8;
  ulonglong uVar9;
  short *unaff_RSI;
  uint uVar10;
  short *psVar11;
  uint uVar12;
  longlong in_R10;
  byte *pbVar13;
  int in_R11D;
  uint uVar14;
  uint uVar15;
  int unaff_R14D;
  int unaff_R15D;
  bool in_ZF;
  int iStackX_20;
  int in_stack_00000070;
  int in_stack_00000080;
  byte *in_stack_00000088;
  longlong in_stack_00000090;
  int *in_stack_000000a0;
  int *in_stack_000000a8;
  
  if (in_ZF) {
    return 0xfffffffc;
  }
  bVar1 = *param_1;
  if ((char)bVar1 < '\0') {
    iVar6 = 48000 << (bVar1 >> 3 & 3);
    iVar6 = iVar6 / 400 + (iVar6 >> 0x1f);
LAB_18070f928:
    iVar6 = iVar6 - (iVar6 >> 0x1f);
  }
  else if ((bVar1 & 0x60) == 0x60) {
    iVar6 = 0x3c0;
    if ((bVar1 & 8) == 0) {
      iVar6 = 0x1e0;
    }
  }
  else {
    bVar4 = bVar1 >> 3 & 3;
    if (bVar4 != 3) {
      iVar6 = 48000 << bVar4;
      iVar6 = iVar6 / 100 + (iVar6 >> 0x1f);
      goto LAB_18070f928;
    }
    iVar6 = 0xb40;
  }
  uVar14 = in_R11D - 1;
  pbVar13 = (byte *)(in_R10 + 1);
  uVar15 = (uint)unaff_RBX;
  uVar12 = uVar14;
  if ((bVar1 & 3) == 0) {
    uVar9 = 1;
  }
  else if ((bVar1 & 3) == 1) {
    uVar9 = 2;
    uVar15 = 1;
    if (param_3 == 0) {
      if ((uVar14 & 1) != 0) {
        return 0xfffffffc;
      }
      *unaff_RSI = (short)((int)uVar14 / 2);
      uVar12 = (int)uVar14 / 2;
    }
  }
  else if ((bVar1 & 3) == 2) {
    uVar9 = 2;
    iVar6 = func_0x0001807104d0(pbVar13,uVar14);
    sVar3 = *unaff_RSI;
    uVar14 = uVar14 - iVar6;
    if (sVar3 < 0) {
      return 0xfffffffc;
    }
    if ((int)uVar14 < (int)sVar3) {
      return 0xfffffffc;
    }
    pbVar13 = pbVar13 + iVar6;
    uVar12 = uVar14 - (int)sVar3;
  }
  else {
    if ((int)uVar14 < 1) {
      return 0xfffffffc;
    }
    bVar4 = *pbVar13;
    pbVar13 = (byte *)(in_R10 + 2);
    uVar8 = bVar4 & 0x3f;
    uVar9 = (ulonglong)uVar8;
    if ((bVar4 & 0x3f) == 0) {
      return 0xfffffffc;
    }
    if (0x1680 < (int)(iVar6 * uVar8)) {
      return 0xfffffffc;
    }
    uVar14 = in_R11D - 2;
    if ((bVar4 & 0x40) != 0) {
      do {
        if ((int)uVar14 < 1) {
          return 0xfffffffc;
        }
        bVar2 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        uVar15 = (uint)bVar2;
        if (bVar2 == 0xff) {
          uVar15 = 0xfe;
        }
        unaff_R15D = unaff_R15D + uVar15;
        uVar14 = uVar14 + (-1 - uVar15);
        in_stack_00000070 = unaff_R15D;
      } while (bVar2 == 0xff);
    }
    if ((int)uVar14 < 0) {
      return 0xfffffffc;
    }
    uVar15 = ~(uint)(bVar4 >> 7) & 1;
    if (uVar15 == 0) {
      uVar5 = unaff_RBX & 0xffffffff;
      psVar11 = unaff_RSI;
      uVar12 = uVar14;
      if (0 < (int)(uVar8 - 1)) {
        do {
          iVar6 = func_0x0001807104d0(pbVar13,uVar14,unaff_RSI + (int)uVar5);
          sVar3 = *psVar11;
          uVar14 = uVar14 - iVar6;
          if (sVar3 < 0) {
            return 0xfffffffc;
          }
          if ((int)uVar14 < (int)sVar3) {
            return 0xfffffffc;
          }
          uVar10 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar10;
          pbVar13 = pbVar13 + iVar6;
          uVar12 = uVar12 - (iVar6 + sVar3);
          psVar11 = psVar11 + 1;
          unaff_R14D = in_stack_00000080;
        } while ((int)uVar10 < (int)(uVar8 - 1));
      }
      unaff_R15D = in_stack_00000070;
      if ((int)uVar12 < 0) {
        return 0xfffffffc;
      }
    }
    else if (param_3 == 0) {
      uVar12 = (int)uVar14 / (int)uVar8;
      if (uVar8 * uVar12 != uVar14) {
        return 0xfffffffc;
      }
      if (0 < (int)(uVar8 - 1)) {
        psVar11 = unaff_RSI;
        for (uVar5 = uVar9 * 2 - 2 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
          *psVar11 = (short)uVar12;
          psVar11 = psVar11 + 1;
        }
      }
    }
  }
  if (unaff_R14D == 0) {
    if ((int)uVar12 < 0x4fc) {
      unaff_RSI[uVar9 - 1] = (short)uVar12;
      goto LAB_18070fb9d;
    }
  }
  else {
    iVar6 = func_0x0001807104d0(pbVar13,uVar14,unaff_RSI + (uVar9 - 1));
    if ((-1 < unaff_RSI[uVar9 - 1]) &&
       (iVar7 = (int)unaff_RSI[uVar9 - 1], iVar7 <= (int)(uVar14 - iVar6))) {
      pbVar13 = pbVar13 + iVar6;
      if (uVar15 == 0) {
        if (iVar6 + iVar7 <= (int)uVar12) goto LAB_18070fb9d;
      }
      else if (iVar7 * (int)uVar9 <= (int)(uVar14 - iVar6)) {
        uVar5 = unaff_RBX;
        if (0 < (longlong)(uVar9 - 1)) {
          do {
            unaff_RSI[uVar5] = unaff_RSI[uVar9 - 1];
            uVar5 = uVar5 + 1;
          } while ((longlong)uVar5 < (longlong)(uVar9 - 1));
        }
LAB_18070fb9d:
        if (in_stack_000000a0 != (int *)0x0) {
          *in_stack_000000a0 = (int)pbVar13 - iStackX_20;
        }
        if ((int)uVar9 != 0) {
          do {
            if (in_stack_00000090 != 0) {
              *(byte **)(in_stack_00000090 + unaff_RBX * 8) = pbVar13;
            }
            psVar11 = unaff_RSI + unaff_RBX;
            unaff_RBX = unaff_RBX + 1;
            pbVar13 = pbVar13 + *psVar11;
          } while ((longlong)unaff_RBX < (longlong)uVar9);
        }
        if (in_stack_000000a8 != (int *)0x0) {
          *in_stack_000000a8 = ((int)pbVar13 - iStackX_20) + unaff_R15D;
        }
        if (in_stack_00000088 != (byte *)0x0) {
          *in_stack_00000088 = bVar1;
          return uVar9;
        }
        return uVar9;
      }
    }
  }
  return 0xfffffffc;
}



int FUN_18070fb8e(void)

{
  longlong lVar1;
  longlong unaff_RBX;
  int unaff_EBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int in_R9D;
  longlong in_R10;
  undefined1 unaff_R13B;
  int unaff_R15D;
  undefined4 uStackX_20;
  undefined1 *in_stack_00000088;
  longlong in_stack_00000090;
  int *in_stack_000000a0;
  int *in_stack_000000a8;
  
  if (in_R9D < 0x4fc) {
    *(short *)(unaff_RSI + -2 + unaff_RDI * 2) = (short)in_R9D;
    if (in_stack_000000a0 != (int *)0x0) {
      *in_stack_000000a0 = (int)in_R10 - uStackX_20;
    }
    if (unaff_EBP != 0) {
      do {
        if (in_stack_00000090 != 0) {
          *(longlong *)(in_stack_00000090 + unaff_RBX * 8) = in_R10;
        }
        lVar1 = unaff_RBX * 2;
        unaff_RBX = unaff_RBX + 1;
        in_R10 = in_R10 + *(short *)(unaff_RSI + lVar1);
      } while (unaff_RBX < unaff_RDI);
    }
    if (in_stack_000000a8 != (int *)0x0) {
      *in_stack_000000a8 = ((int)in_R10 - uStackX_20) + unaff_R15D;
    }
    if (in_stack_00000088 != (undefined1 *)0x0) {
      *in_stack_00000088 = unaff_R13B;
    }
  }
  else {
    unaff_EBP = -4;
  }
  return unaff_EBP;
}



undefined8 FUN_18070fc08(void)

{
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18070fc20(longlong param_1,int param_2,int param_3,float *param_4)
void FUN_18070fc20(longlong param_1,int param_2,int param_3,float *param_4)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined1 (*pauVar5) [16];
  uint uVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  float *pfStackX_20;
  longlong lStack_a8;
  
  auVar3 = _DAT_180a401b0;
  auVar2 = _DAT_18094ed40;
  lVar19 = (longlong)param_3;
  if ((((0 < param_3) && (0 < param_2)) && (param_1 != 0)) && (param_4 != (float *)0x0)) {
    uVar11 = param_2 * param_3;
    iVar15 = 0;
    if (0 < (int)uVar11) {
      if (0xf < uVar11) {
        uVar6 = uVar11 & 0x8000000f;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
        }
        lVar8 = 0;
        pauVar5 = (undefined1 (*) [16])(param_1 + 0x20);
        do {
          iVar15 = iVar15 + 0x10;
          auVar25 = minps(auVar3,pauVar5[-2]);
          lVar8 = lVar8 + 0x10;
          auVar25 = maxps(auVar2,auVar25);
          pauVar5[-2] = auVar25;
          auVar25 = minps(auVar3,pauVar5[-1]);
          auVar25 = maxps(auVar2,auVar25);
          pauVar5[-1] = auVar25;
          auVar25 = minps(auVar3,*pauVar5);
          auVar25 = maxps(auVar2,auVar25);
          *pauVar5 = auVar25;
          auVar25 = minps(auVar3,pauVar5[1]);
          auVar25 = maxps(auVar2,auVar25);
          pauVar5[1] = auVar25;
          pauVar5 = pauVar5 + 4;
        } while (lVar8 < (int)(uVar11 - uVar6));
      }
      if (iVar15 < (int)uVar11) {
        if (3 < (int)(uVar11 - iVar15)) {
          uVar6 = ((uVar11 - iVar15) - 4 >> 2) + 1;
          pfVar9 = (float *)(param_1 + ((longlong)iVar15 + 2) * 4);
          uVar17 = (ulonglong)uVar6;
          iVar15 = iVar15 + uVar6 * 4;
          do {
            fVar22 = pfVar9[-2];
            if (2.0 <= fVar22) {
              fVar22 = 2.0;
            }
            if (fVar22 < -2.0) {
              fVar22 = -2.0;
            }
            fVar20 = pfVar9[-1];
            if (2.0 <= fVar20) {
              fVar20 = 2.0;
            }
            pfVar9[-2] = fVar22;
            if (fVar20 < -2.0) {
              fVar20 = -2.0;
            }
            fVar22 = *pfVar9;
            if (2.0 <= fVar22) {
              fVar22 = 2.0;
            }
            pfVar9[-1] = fVar20;
            if (fVar22 < -2.0) {
              fVar22 = -2.0;
            }
            *pfVar9 = fVar22;
            fVar22 = pfVar9[1];
            if (2.0 <= fVar22) {
              fVar22 = 2.0;
            }
            if (fVar22 < -2.0) {
              fVar22 = -2.0;
            }
            pfVar9[1] = fVar22;
            pfVar9 = pfVar9 + 4;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        if (iVar15 < (int)uVar11) {
          pfVar9 = (float *)(param_1 + (longlong)iVar15 * 4);
          lVar8 = (longlong)(int)(uVar11 - iVar15);
          do {
            fVar22 = *pfVar9;
            if (2.0 <= fVar22) {
              fVar22 = 2.0;
            }
            if (fVar22 < -2.0) {
              fVar22 = -2.0;
            }
            *pfVar9 = fVar22;
            pfVar9 = pfVar9 + 1;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
      }
    }
    if (0 < param_3) {
      pfStackX_20 = param_4;
      lStack_a8 = lVar19;
      do {
        fVar22 = *pfStackX_20;
        pfVar9 = (float *)((param_1 - (longlong)param_4) + (longlong)pfStackX_20);
        iVar15 = 0;
        if (3 < param_2) {
          iVar12 = param_3 * 2;
          do {
            iVar4 = param_3 * -2 + iVar12;
            fVar20 = pfVar9[iVar4] * fVar22;
            if (0.0 <= fVar20) goto LAB_18070ff9b;
            pfVar9[iVar4] = (fVar20 + 1.0) * pfVar9[iVar4];
            fVar20 = pfVar9[iVar12 - param_3] * fVar22;
            if (0.0 <= fVar20) goto LAB_18070ff9b;
            pfVar9[iVar12 - param_3] = (fVar20 + 1.0) * pfVar9[iVar12 - param_3];
            fVar20 = pfVar9[iVar12] * fVar22;
            if (0.0 <= fVar20) goto LAB_18070ff9b;
            pfVar9[iVar12] = (fVar20 + 1.0) * pfVar9[iVar12];
            iVar4 = iVar12 + param_3;
            fVar20 = pfVar9[iVar4] * fVar22;
            if (0.0 <= fVar20) goto LAB_18070ff9b;
            iVar15 = iVar15 + 4;
            iVar12 = iVar12 + param_3 * 4;
            pfVar9[iVar4] = (fVar20 + 1.0) * pfVar9[iVar4];
          } while (iVar15 < param_2 + -3);
        }
        if (iVar15 < param_2) {
          iVar12 = iVar15 * param_3;
          do {
            fVar20 = pfVar9[iVar12] * fVar22;
            if (0.0 <= fVar20) break;
            iVar15 = iVar15 + 1;
            pfVar9[iVar12] = (fVar20 + 1.0) * pfVar9[iVar12];
            iVar12 = iVar12 + param_3;
          } while (iVar15 < param_2);
        }
LAB_18070ff9b:
        fVar22 = *pfVar9;
        iVar15 = 0;
        do {
          iVar12 = iVar15;
          if (iVar15 < param_2) {
            if (3 < param_2 - iVar15) {
              iVar18 = iVar15 - (iVar15 + 2);
              iVar4 = (iVar15 + 2) * param_3;
              do {
                if ((1.0 < pfVar9[iVar18 * param_3 + iVar4]) ||
                   (pfVar9[iVar18 * param_3 + iVar4] < -1.0)) goto LAB_1807100a5;
                if ((1.0 < pfVar9[(iVar18 + 1) * param_3 + iVar4]) ||
                   (pfVar9[(iVar18 + 1) * param_3 + iVar4] < -1.0)) {
                  iVar12 = iVar12 + 1;
                  goto LAB_1807100a5;
                }
                if ((1.0 < pfVar9[iVar4]) || (pfVar9[iVar4] < -1.0)) {
                  iVar12 = iVar12 + 2;
                  goto LAB_1807100a5;
                }
                if ((1.0 < pfVar9[(iVar18 + 3) * param_3 + iVar4]) ||
                   (pfVar9[(iVar18 + 3) * param_3 + iVar4] < -1.0)) {
                  iVar12 = iVar12 + 3;
                  goto LAB_1807100a5;
                }
                iVar12 = iVar12 + 4;
                iVar4 = iVar4 + param_3 * 4;
              } while (iVar12 < param_2 + -3);
            }
            if (iVar12 < param_2) {
              iVar4 = iVar12 * param_3;
              do {
                if ((1.0 < pfVar9[iVar4]) || (pfVar9[iVar4] < -1.0)) break;
                iVar12 = iVar12 + 1;
                iVar4 = iVar4 + param_3;
              } while (iVar12 < param_2);
            }
          }
LAB_1807100a5:
          if (iVar12 == param_2) {
            fVar20 = 0.0;
            break;
          }
          iVar4 = iVar12 * param_3;
          fVar24 = pfVar9[iVar4];
          fVar20 = ABS(fVar24);
          iVar18 = iVar12;
          iVar16 = iVar12;
          if (0 < iVar12) {
            iVar7 = (iVar12 + -1) * param_3;
            do {
              if (fVar24 * pfVar9[iVar7] < 0.0) break;
              iVar16 = iVar16 + -1;
              iVar7 = iVar7 - param_3;
            } while (0 < iVar16);
          }
          while ((iVar7 = iVar18, iVar18 = iVar12, iVar18 < param_2 &&
                 (0.0 <= fVar24 * pfVar9[iVar4]))) {
            fVar23 = ABS(pfVar9[iVar4]);
            fVar21 = fVar20;
            if (fVar20 < fVar23) {
              fVar21 = fVar23;
            }
            iVar4 = iVar4 + param_3;
            bVar1 = fVar23 <= fVar20;
            fVar20 = fVar21;
            iVar12 = iVar18 + 1;
            if (bVar1) {
              iVar18 = iVar7;
            }
          }
          if ((iVar16 != 0) || (fVar24 * *pfVar9 < 0.0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          fVar21 = (fVar20 - 1.0) / (fVar20 * fVar20);
          fVar20 = fVar21 * 1.0000002;
          if (0.0 < fVar24) {
            fVar20 = fVar21 * -1.0000002;
          }
          if (iVar16 < iVar18) {
            if (3 < iVar18 - iVar16) {
              lVar8 = (longlong)((iVar16 + 2) * param_3);
              pfVar10 = pfVar9 + lVar8;
              lVar13 = (iVar16 + 1) * param_3 - lVar8;
              lVar14 = (iVar16 + 3) * param_3 - lVar8;
              lVar8 = iVar16 * param_3 - lVar8;
              uVar11 = ((iVar18 - iVar16) - 4U >> 2) + 1;
              uVar17 = (ulonglong)uVar11;
              iVar16 = iVar16 + uVar11 * 4;
              do {
                pfVar10[lVar8] = (pfVar10[lVar8] * fVar20 + 1.0) * pfVar10[lVar8];
                pfVar10[lVar13] = (pfVar10[lVar13] * fVar20 + 1.0) * pfVar10[lVar13];
                *pfVar10 = (fVar20 * *pfVar10 + 1.0) * *pfVar10;
                pfVar10[lVar14] = (pfVar10[lVar14] * fVar20 + 1.0) * pfVar10[lVar14];
                pfVar10 = pfVar10 + param_3 * 4;
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
            }
            if (iVar16 < iVar18) {
              pfVar10 = pfVar9 + iVar16 * param_3;
              lVar8 = (longlong)(iVar18 - iVar16);
              do {
                *pfVar10 = (*pfVar10 * fVar20 + 1.0) * *pfVar10;
                pfVar10 = pfVar10 + lVar19;
                lVar8 = lVar8 + -1;
              } while (lVar8 != 0);
            }
          }
          if ((bVar1) && (1 < iVar7)) {
            fVar24 = fVar22 - *pfVar9;
            fVar21 = fVar24 / (float)iVar7;
            if (iVar15 < iVar7) {
              if (3 < iVar7 - iVar15) {
                lVar8 = (longlong)((iVar15 + 2) * param_3);
                pfVar10 = pfVar9 + lVar8;
                lVar13 = (iVar15 + 1) * param_3 - lVar8;
                lVar14 = (iVar15 + 3) * param_3 - lVar8;
                lVar8 = iVar15 * param_3 - lVar8;
                uVar11 = ((iVar7 - iVar15) - 4U >> 2) + 1;
                uVar17 = (ulonglong)uVar11;
                iVar15 = iVar15 + uVar11 * 4;
                do {
                  fVar23 = (fVar24 - fVar21) + pfVar10[lVar8];
                  if (1.0 <= fVar23) {
                    fVar23 = 1.0;
                  }
                  if (fVar23 < -1.0) {
                    fVar23 = -1.0;
                  }
                  pfVar10[lVar8] = fVar23;
                  fVar24 = (fVar24 - fVar21) - fVar21;
                  fVar23 = fVar24 + pfVar10[lVar13];
                  if (1.0 <= fVar23) {
                    fVar23 = 1.0;
                  }
                  if (fVar23 < -1.0) {
                    fVar23 = -1.0;
                  }
                  pfVar10[lVar13] = fVar23;
                  fVar24 = fVar24 - fVar21;
                  fVar23 = fVar24 + *pfVar10;
                  if (1.0 <= fVar23) {
                    fVar23 = 1.0;
                  }
                  if (fVar23 < -1.0) {
                    fVar23 = -1.0;
                  }
                  *pfVar10 = fVar23;
                  fVar24 = fVar24 - fVar21;
                  fVar23 = fVar24 + pfVar10[lVar14];
                  if (1.0 <= fVar23) {
                    fVar23 = 1.0;
                  }
                  if (fVar23 < -1.0) {
                    fVar23 = -1.0;
                  }
                  pfVar10[lVar14] = fVar23;
                  pfVar10 = pfVar10 + param_3 * 4;
                  uVar17 = uVar17 - 1;
                } while (uVar17 != 0);
              }
              if (iVar15 < iVar7) {
                pfVar10 = pfVar9 + iVar15 * param_3;
                lVar8 = (longlong)(iVar7 - iVar15);
                do {
                  fVar24 = fVar24 - fVar21;
                  fVar23 = fVar24 + *pfVar10;
                  if (1.0 <= fVar23) {
                    fVar23 = 1.0;
                  }
                  if (fVar23 < -1.0) {
                    fVar23 = -1.0;
                  }
                  *pfVar10 = fVar23;
                  pfVar10 = pfVar10 + lVar19;
                  lVar8 = lVar8 + -1;
                } while (lVar8 != 0);
              }
            }
          }
          iVar15 = iVar18;
        } while (iVar18 != param_2);
        *pfStackX_20 = fVar20;
        pfStackX_20 = pfStackX_20 + 1;
        lStack_a8 = lStack_a8 + -1;
      } while (lStack_a8 != 0);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



