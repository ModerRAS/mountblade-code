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
 * @return uint 返回状态码
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
  
  remaining_data = data_size - 1;
  data_ptr = audio_data + 1;
  channel_mode = 0;
  total_frames = remaining_data;
  
  if ((format_header & 3) == 0) {
    frame_count = 1;
    skip_bytes = channels_per_frame;
  }
  else if ((format_header & 3) == 1) {
    frame_count = 2;
    channel_mode = 1;
    skip_bytes = channels_per_frame;
    if (decode_mode == 0) {
      if ((remaining_data & 1) != 0) {
        return 0xfffffffc;
      }
      *channel_sizes = (short)((int)remaining_data / 2);
      total_frames = (int)remaining_data / 2;
    }
  }
  else if ((format_header & 3) == 2) {
    frame_count = 2;
    sample_rate = func_0x0001807104d0(data_ptr, remaining_data, channel_sizes);
    channel_size = *channel_sizes;
    remaining_data = remaining_data - sample_rate;
    if (channel_size < 0) {
      return 0xfffffffc;
    }
    if ((int)remaining_data < (int)channel_size) {
      return 0xfffffffc;
    }
    data_ptr = data_ptr + sample_rate;
    skip_bytes = channels_per_frame;
    total_frames = remaining_data - (int)channel_size;
  }
  else {
    if ((int)remaining_data < 1) {
      return 0xfffffffc;
    }
    channel_mode = *data_ptr;
    data_ptr = audio_data + 2;
    channels_per_frame = channel_mode & 0x3f;
    frame_count = (ulonglong)channels_per_frame;
    if ((channel_mode & 0x3f) == 0) {
      return 0xfffffffc;
    }
    if (UI_BITRATE_THRESHOLD < (int)(sample_rate * channels_per_frame)) {
      return 0xfffffffc;
    }
    remaining_data = data_size - 2;
    result = 0;
    if ((channel_mode & 0x40) != 0) {
      do {
        if ((int)remaining_data < 1) {
          return 0xfffffffc;
        }
        encoding_flag = *data_ptr;
        data_ptr = data_ptr + 1;
        frame_size = (uint)encoding_flag;
        if (encoding_flag == 0xff) {
          frame_size = 0xfe;
        }
        skip_bytes = (int)result + frame_size;
        remaining_data = remaining_data + (-1 - frame_size);
        result = (ulonglong)skip_bytes;
      } while (encoding_flag == 0xff);
    }
    if ((int)remaining_data < 0) {
      return 0xfffffffc;
    }
    channel_mode = ~(channel_mode >> 7) & 1;
    if (channel_mode == 0) {
      result = 0;
      channel_ptr = channel_sizes;
      total_frames = remaining_data;
      if (0 < (int)(channels_per_frame - 1)) {
        do {
          sample_rate = func_0x0001807104d0(data_ptr, remaining_data, channel_sizes + (int)result);
          channel_size = *channel_ptr;
          remaining_data = remaining_data - sample_rate;
          if (channel_size < 0) {
            return 0xfffffffc;
          }
          if ((int)remaining_data < (int)channel_size) {
            return 0xfffffffc;
          }
          frame_size = (int)result + 1;
          data_ptr = data_ptr + sample_rate;
          total_frames = total_frames - (sample_rate + channel_size);
          result = (ulonglong)frame_size;
          channel_ptr = channel_ptr + 1;
        } while ((int)frame_size < (int)(channels_per_frame - 1));
      }
      if ((int)total_frames < 0) {
        return 0xfffffffc;
      }
    }
    else if (decode_mode == 0) {
      total_frames = (int)remaining_data / (int)channels_per_frame;
      if (channels_per_frame * total_frames != remaining_data) {
        return 0xfffffffc;
      }
      if (0 < (int)(channels_per_frame - 1)) {
        channel_ptr = channel_sizes;
        for (result = frame_count * 2 - 2 >> 1; result != 0; result = result - 1) {
          *channel_ptr = (short)total_frames;
          channel_ptr = channel_ptr + 1;
        }
      }
    }
  }
  
  if (decode_mode == 0) {
    if ((int)total_frames < UI_MAX_CHANNEL_COUNT) {
      channel_sizes[frame_count - 1] = (short)total_frames;
      goto DECODE_SUCCESS;
    }
  }
  else {
    sample_rate = func_0x0001807104d0(data_ptr, remaining_data, channel_sizes + (frame_count - 1));
    if ((-1 < channel_sizes[frame_count - 1]) &&
       (bitrate = (int)channel_sizes[frame_count - 1], bitrate <= (int)(remaining_data - sample_rate))) {
      data_ptr = data_ptr + sample_rate;
      if (channel_mode == 0) {
        if (sample_rate + bitrate <= (int)total_frames) goto DECODE_SUCCESS;
      }
      else if (bitrate * (int)frame_count <= (int)(remaining_data - sample_rate)) {
        result = 0;
        if (0 < (longlong)(frame_count - 1)) {
          do {
            channel_sizes[result] = channel_sizes[frame_count - 1];
            result = result + 1;
          } while ((longlong)result < (longlong)(frame_count - 1));
        }
DECODE_SUCCESS:
        if (bytes_processed != (int *)0x0) {
          *bytes_processed = (int)data_ptr - (int)audio_data;
        }
        if ((int)frame_count != 0) {
          do {
            if (buffer_ptr != 0) {
              *(byte **)(buffer_ptr + result * 8) = data_ptr;
            }
            channel_ptr = channel_sizes + result;
            result = result + 1;
            data_ptr = data_ptr + *channel_ptr;
          } while ((longlong)result < (longlong)frame_count);
        }
        if (total_size != (int *)0x0) {
          *total_size = ((int)data_ptr - (int)audio_data) + skip_bytes;
        }
        if (format_output != (byte *)0x0) {
          *format_output = format_header;
          return frame_count;
        }
        return frame_count;
      }
    }
  }
  return 0xfffffffc;
}

/**
 * @brief UI系统音频块处理函数
 * @param param_1 参数1
 * @param param_2 参数2
 * @param param_3 参数3
 * @return ulonglong 处理结果
 * 
 * 该函数处理音频数据块，用于UI系统的音频处理模块
 */
ulonglong ui_system_process_audio_chunk(undefined8 param_1, undefined8 param_2, int param_3)
{
  byte format_header;
  byte encoding_flag;
  short channel_size;
  byte channel_mode;
  ulonglong result;
  int sample_rate;
  int bitrate;
  ulonglong frame_count;
  uint frame_size;
  short *channel_ptr;
  uint remaining_data;
  uint total_frames;
  byte *data_ptr;
  uint skip_bytes;
  
  format_header = *param_1;
  if ((char)format_header < '\0') {
    sample_rate = UI_SAMPLE_RATE_BASE << (format_header >> 3 & 3);
    sample_rate = sample_rate / 400 + (sample_rate >> 0x1f);
SAMPLE_RATE_PROCESSING:
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
      goto SAMPLE_RATE_PROCESSING;
    }
    sample_rate = 0xb40;
  }
  
  remaining_data = param_3 - 1;
  data_ptr = param_1 + 1;
  total_frames = result;
  
  if ((format_header & 3) == 0) {
    frame_count = 1;
  }
  else if ((format_header & 3) == 1) {
    frame_count = 2;
    total_frames = 1;
    if (param_3 == 0) {
      if ((remaining_data & 1) != 0) {
        return 0xfffffffc;
      }
      *param_2 = (short)((int)remaining_data / 2);
      total_frames = (int)remaining_data / 2;
    }
  }
  else if ((format_header & 3) == 2) {
    frame_count = 2;
    sample_rate = func_0x0001807104d0(data_ptr, remaining_data);
    channel_size = *param_2;
    remaining_data = remaining_data - sample_rate;
    if (channel_size < 0) {
      return 0xfffffffc;
    }
    if ((int)remaining_data < (int)channel_size) {
      return 0xfffffffc;
    }
    data_ptr = data_ptr + sample_rate;
    total_frames = remaining_data - (int)channel_size;
  }
  else {
    if ((int)remaining_data < 1) {
      return 0xfffffffc;
    }
    channel_mode = *data_ptr;
    data_ptr = param_1 + 2;
    frame_size = channel_mode & 0x3f;
    frame_count = (ulonglong)frame_size;
    if ((channel_mode & 0x3f) == 0) {
      return 0xfffffffc;
    }
    if (UI_BITRATE_THRESHOLD < (int)(sample_rate * frame_size)) {
      return 0xfffffffc;
    }
    remaining_data = param_3 - 2;
    if ((channel_mode & 0x40) != 0) {
      do {
        if ((int)remaining_data < 1) {
          return 0xfffffffc;
        }
        encoding_flag = *data_ptr;
        data_ptr = data_ptr + 1;
        total_frames = (uint)encoding_flag;
        if (encoding_flag == 0xff) {
          total_frames = 0xfe;
        }
        param_3 = param_3 + total_frames;
        remaining_data = remaining_data + (-1 - total_frames);
      } while (encoding_flag == 0xff);
    }
    if ((int)remaining_data < 0) {
      return 0xfffffffc;
    }
    total_frames = ~(uint)(channel_mode >> 7) & 1;
    if (total_frames == 0) {
      result = result & 0xffffffff;
      channel_ptr = param_2;
      total_frames = remaining_data;
      if (0 < (int)(frame_size - 1)) {
        do {
          sample_rate = func_0x0001807104d0(data_ptr, remaining_data, param_2 + (int)result);
          channel_size = *channel_ptr;
          remaining_data = remaining_data - sample_rate;
          if (channel_size < 0) {
            return 0xfffffffc;
          }
          if ((int)remaining_data < (int)channel_size) {
            return 0xfffffffc;
          }
          frame_size = (int)result + 1;
          result = (ulonglong)frame_size;
          data_ptr = data_ptr + sample_rate;
          total_frames = total_frames - (sample_rate + channel_size);
          channel_ptr = channel_ptr + 1;
        } while ((int)frame_size < (int)(frame_size - 1));
      }
      if ((int)total_frames < 0) {
        return 0xfffffffc;
      }
    }
    else if (param_3 == 0) {
      total_frames = (int)remaining_data / (int)frame_size;
      if (frame_size * total_frames != remaining_data) {
        return 0xfffffffc;
      }
      if (0 < (int)(frame_size - 1)) {
        channel_ptr = param_2;
        for (result = frame_count * 2 - 2 >> 1; result != 0; result = result - 1) {
          *channel_ptr = (short)total_frames;
          channel_ptr = channel_ptr + 1;
        }
      }
    }
  }
  
  if (param_3 == 0) {
    if ((int)total_frames < UI_MAX_CHANNEL_COUNT) {
      param_2[frame_count - 1] = (short)total_frames;
      goto PROCESSING_SUCCESS;
    }
  }
  else {
    sample_rate = func_0x0001807104d0(data_ptr, remaining_data, param_2 + (frame_count - 1));
    if ((-1 < param_2[frame_count - 1]) &&
       (bitrate = (int)param_2[frame_count - 1], bitrate <= (int)(remaining_data - sample_rate))) {
      data_ptr = data_ptr + sample_rate;
      if (total_frames == 0) {
        if (sample_rate + bitrate <= (int)total_frames) goto PROCESSING_SUCCESS;
      }
      else if (bitrate * (int)frame_count <= (int)(remaining_data - sample_rate)) {
        result = result & 0xffffffff;
        if (0 < (longlong)(frame_count - 1)) {
          do {
            param_2[result] = param_2[frame_count - 1];
            result = result + 1;
          } while ((longlong)result < (longlong)(frame_count - 1));
        }
PROCESSING_SUCCESS:
        if (bytes_processed != (int *)0x0) {
          *bytes_processed = (int)data_ptr - (int)param_1;
        }
        if ((int)frame_count != 0) {
          do {
            if (buffer_ptr != 0) {
              *(byte **)(buffer_ptr + result * 8) = data_ptr;
            }
            channel_ptr = param_2 + result;
            result = result + 1;
            data_ptr = data_ptr + *channel_ptr;
          } while ((longlong)result < (longlong)frame_count);
        }
        if (total_size != (int *)0x0) {
          *total_size = ((int)data_ptr - (int)param_1) + skip_bytes;
        }
        if (format_output != (byte *)0x0) {
          *format_output = format_header;
          return frame_count;
        }
        return frame_count;
      }
    }
  }
  return 0xfffffffc;
}

/**
 * @brief UI系统音频数据验证函数
 * @return int 验证结果
 * 
 * 该函数验证音频数据的完整性和有效性
 */
int ui_system_validate_audio_data(void)
{
  longlong context_ptr;
  longlong result_ptr;
  int channel_count;
  longlong data_ptr;
  int frame_count;
  longlong output_ptr;
  int sample_rate;
  longlong buffer_offset;
  undefined1 format_header;
  longlong array_ptr;
  int *bytes_processed;
  longlong buffer_ptr;
  int *total_size;
  
  if (frame_count < UI_MAX_CHANNEL_COUNT) {
    *(short *)(data_ptr + -2 + result_ptr * 2) = (short)frame_count;
    if (bytes_processed != (int *)0x0) {
      *bytes_processed = (int)data_ptr - buffer_offset;
    }
    if (channel_count != 0) {
      do {
        if (buffer_ptr != 0) {
          *(longlong *)(buffer_ptr + result_ptr * 8) = data_ptr;
        }
        array_ptr = result_ptr * 2;
        result_ptr = result_ptr + 1;
        data_ptr = data_ptr + *(short *)(data_ptr + array_ptr);
      } while (result_ptr < frame_count);
    }
    if (total_size != (int *)0x0) {
      *total_size = ((int)data_ptr - buffer_offset) + sample_rate;
    }
    if (format_output != (undefined1 *)0x0) {
      *format_output = format_header;
    }
  }
  else {
    channel_count = -4;
  }
  return channel_count;
}

/**
 * @brief UI系统错误码返回函数
 * @return uint 错误码
 * 
 * 该函数返回UI系统的错误码
 */
uint ui_system_return_error_code(void)
{
  return 0xffffffff;
}

/**
 * @brief UI系统浮点数组处理函数
 * @param array_ptr 数组指针
 * @param width 宽度
 * @param height 高度
 * @param output_buffer 输出缓冲区
 * 
 * 该函数处理浮点数组的限制和归一化，用于UI系统的数据处理
 */
void ui_system_process_float_array(longlong array_ptr, int width, int height, float *output_buffer)
{
  bool needs_clamping;
  undefined1 temp_array_1[16];
  undefined1 temp_array_2[16];
  int index;
  undefined1 (*array_ptr_5)[16];
  uint element_count;
  int temp_value;
  longlong offset;
  float *float_ptr;
  float *float_ptr_2;
  uint remaining_elements;
  int temp_index;
  longlong offset_2;
  longlong offset_3;
  int temp_index_2;
  int temp_index_3;
  ulonglong loop_counter;
  int temp_index_4;
  longlong offset_4;
  longlong offset_5;
  int temp_index_5;
  float float_value;
  float float_value_2;
  float float_value_3;
  float float_value_4;
  float float_value_5;
  float float_value_6;
  undefined1 temp_array_3[16];
  float *stack_ptr;
  longlong stack_offset;
  
  temp_array_2 = _DAT_180a401b0;
  temp_array_1 = _DAT_18094ed40;
  offset_5 = (longlong)height;
  if ((((0 < height) && (0 < width)) && (array_ptr != 0)) && (output_buffer != (float *)0x0)) {
    element_count = width * height;
    temp_index_5 = 0;
    if (0 < (int)element_count) {
      if (0xf < element_count) {
        remaining_elements = element_count & 0x8000000f;
        if ((int)remaining_elements < 0) {
          remaining_elements = (remaining_elements - 1 | 0xfffffff0) + 1;
        }
        offset = 0;
        array_ptr_5 = (undefined1 (*) [16])(array_ptr + 0x20);
        do {
          temp_index_5 = temp_index_5 + 0x10;
          temp_array_3 = minps(temp_array_2, array_ptr_5[-2]);
          offset = offset + 0x10;
          temp_array_3 = maxps(temp_array_1, temp_array_3);
          array_ptr_5[-2] = temp_array_3;
          temp_array_3 = minps(temp_array_2, array_ptr_5[-1]);
          temp_array_3 = maxps(temp_array_1, temp_array_3);
          array_ptr_5[-1] = temp_array_3;
          temp_array_3 = minps(temp_array_2, *array_ptr_5);
          temp_array_3 = maxps(temp_array_1, temp_array_3);
          *array_ptr_5 = temp_array_3;
          temp_array_3 = minps(temp_array_2, array_ptr_5[1]);
          temp_array_3 = maxps(temp_array_1, temp_array_3);
          array_ptr_5[1] = temp_array_3;
          array_ptr_5 = array_ptr_5 + 4;
        } while (offset < (int)(element_count - remaining_elements));
      }
      if (temp_index_5 < (int)element_count) {
        if (3 < (int)(element_count - temp_index_5)) {
          remaining_elements = ((element_count - temp_index_5) - 4 >> 2) + 1;
          float_ptr = (float *)(array_ptr + ((longlong)temp_index_5 + 2) * 4);
          loop_counter = (ulonglong)remaining_elements;
          temp_index_5 = temp_index_5 + remaining_elements * 4;
          do {
            float_value_3 = float_ptr[-2];
            if (UI_FLOAT_CLAMP_VALUE <= float_value_3) {
              float_value_3 = UI_FLOAT_CLAMP_VALUE;
            }
            if (float_value_3 < UI_FLOAT_MIN_VALUE) {
              float_value_3 = UI_FLOAT_MIN_VALUE;
            }
            float_value = float_ptr[-1];
            if (UI_FLOAT_CLAMP_VALUE <= float_value) {
              float_value = UI_FLOAT_CLAMP_VALUE;
            }
            float_ptr[-2] = float_value_3;
            if (float_value < UI_FLOAT_MIN_VALUE) {
              float_value = UI_FLOAT_MIN_VALUE;
            }
            float_value_3 = *float_ptr;
            if (UI_FLOAT_CLAMP_VALUE <= float_value_3) {
              float_value_3 = UI_FLOAT_CLAMP_VALUE;
            }
            float_ptr[-1] = float_value;
            if (float_value_3 < UI_FLOAT_MIN_VALUE) {
              float_value_3 = UI_FLOAT_MIN_VALUE;
            }
            *float_ptr = float_value_3;
            float_value_3 = float_ptr[1];
            if (UI_FLOAT_CLAMP_VALUE <= float_value_3) {
              float_value_3 = UI_FLOAT_CLAMP_VALUE;
            }
            if (float_value_3 < UI_FLOAT_MIN_VALUE) {
              float_value_3 = UI_FLOAT_MIN_VALUE;
            }
            float_ptr[1] = float_value_3;
            float_ptr = float_ptr + 4;
            loop_counter = loop_counter - 1;
          } while (loop_counter != 0);
        }
        if (temp_index_5 < (int)element_count) {
          float_ptr = (float *)(array_ptr + (longlong)temp_index_5 * 4);
          offset = (longlong)(int)(element_count - temp_index_5);
          do {
            float_value_3 = *float_ptr;
            if (UI_FLOAT_CLAMP_VALUE <= float_value_3) {
              float_value_3 = UI_FLOAT_CLAMP_VALUE;
            }
            if (float_value_3 < UI_FLOAT_MIN_VALUE) {
              float_value_3 = UI_FLOAT_MIN_VALUE;
            }
            *float_ptr = float_value_3;
            float_ptr = float_ptr + 1;
            offset = offset + -1;
          } while (offset != 0);
        }
      }
    }
    if (0 < height) {
      stack_ptr = output_buffer;
      stack_offset = offset_5;
      do {
        float_value_3 = *stack_ptr;
        float_ptr = (float *)((array_ptr - (longlong)output_buffer) + (longlong)stack_ptr);
        temp_index_5 = 0;
        if (3 < width) {
          temp_index_4 = height * 2;
          do {
            index = height * -2 + temp_index_4;
            float_value = float_ptr[index] * float_value_3;
            if (0.0 <= float_value) goto CLAMPING_COMPLETE;
            float_ptr[index] = (float_value + 1.0) * float_ptr[index];
            float_value = float_ptr[temp_index_4 - height] * float_value_3;
            if (0.0 <= float_value) goto CLAMPING_COMPLETE;
            float_ptr[temp_index_4 - height] = (float_value + 1.0) * float_ptr[temp_index_4 - height];
            float_value = float_ptr[temp_index_4] * float_value_3;
            if (0.0 <= float_value) goto CLAMPING_COMPLETE;
            float_ptr[temp_index_4] = (float_value + 1.0) * float_ptr[temp_index_4];
            index = temp_index_4 + height;
            float_value = float_ptr[index] * float_value_3;
            if (0.0 <= float_value) goto CLAMPING_COMPLETE;
            temp_index_5 = temp_index_5 + 4;
            temp_index_4 = temp_index_4 + height * 4;
            float_ptr[index] = (float_value + 1.0) * float_ptr[index];
          } while (temp_index_5 < width + -3);
        }
        if (temp_index_5 < width) {
          temp_index_4 = temp_index_5 * height;
          do {
            float_value = float_ptr[temp_index_4] * float_value_3;
            if (0.0 <= float_value) break;
            temp_index_5 = temp_index_5 + 1;
            float_ptr[temp_index_4] = (float_value + 1.0) * float_ptr[temp_index_4];
            temp_index_4 = temp_index_4 + height;
          } while (temp_index_5 < width);
        }
CLAMPING_COMPLETE:
        float_value_3 = *float_ptr;
        temp_index_5 = 0;
        do {
          temp_index_4 = temp_index_5;
          if (temp_index_5 < width) {
            if (3 < width - temp_index_5) {
              temp_index_2 = temp_index_5 - (temp_index_5 + 2);
              index = (temp_index_5 + 2) * height;
              do {
                if ((1.0 < float_ptr[temp_index_2 * height + index]) ||
                   (float_ptr[temp_index_2 * height + index] < -1.0)) goto OUT_OF_BOUNDS;
                if ((1.0 < float_ptr[(temp_index_2 + 1) * height + index]) ||
                   (float_ptr[(temp_index_2 + 1) * height + index] < -1.0)) {
                  temp_index_4 = temp_index_4 + 1;
                  goto OUT_OF_BOUNDS;
                }
                if ((1.0 < float_ptr[index]) || (float_ptr[index] < -1.0)) {
                  temp_index_4 = temp_index_4 + 2;
                  goto OUT_OF_BOUNDS;
                }
                if ((1.0 < float_ptr[(temp_index_2 + 3) * height + index]) ||
                   (float_ptr[(temp_index_2 + 3) * height + index] < -1.0)) {
                  temp_index_4 = temp_index_4 + 3;
                  goto OUT_OF_BOUNDS;
                }
                temp_index_4 = temp_index_4 + 4;
                index = index + height * 4;
              } while (temp_index_4 < width + -3);
            }
            if (temp_index_4 < width) {
              index = temp_index_4 * height;
              do {
                if ((1.0 < float_ptr[index]) || (float_ptr[index] < -1.0)) break;
                temp_index_4 = temp_index_4 + 1;
                index = index + height;
              } while (temp_index_4 < width);
            }
          }
OUT_OF_BOUNDS:
          if (temp_index_4 == width) {
            float_value = 0.0;
            break;
          }
          index = temp_index_4 * height;
          float_value_5 = float_ptr[index];
          float_value = ABS(float_value_5);
          temp_index_2 = temp_index_4;
          temp_index_3 = temp_index_4;
          if (0 < temp_index_4) {
            temp_index = (temp_index_4 + -1) * height;
            do {
              if (float_value_5 * float_ptr[temp_index] < 0.0) break;
              temp_index_3 = temp_index_3 + -1;
              temp_index = temp_index - height;
            } while (0 < temp_index_3);
          }
          while ((temp_index = temp_index_2, temp_index_2 = temp_index_4, temp_index_2 < width &&
                 (0.0 <= float_value_5 * float_ptr[index]))) {
            float_value_4 = ABS(float_ptr[index]);
            float_value_2 = float_value;
            if (float_value < float_value_4) {
              float_value_2 = float_value_4;
            }
            index = index + height;
            needs_clamping = float_value_4 <= float_value;
            float_value = float_value_2;
            temp_index_4 = temp_index_2 + 1;
            if (needs_clamping) {
              temp_index_2 = temp_index;
            }
          }
          if ((temp_index_3 != 0) || (float_value_5 * *float_ptr < 0.0)) {
            needs_clamping = false;
          }
          else {
            needs_clamping = true;
          }
          float_value_2 = (float_value - 1.0) / (float_value * float_value);
          float_value = float_value_2 * 1.0000002;
          if (0.0 < float_value_5) {
            float_value = float_value_2 * -1.0000002;
          }
          if (temp_index_3 < temp_index_2) {
            if (3 < temp_index_2 - temp_index_3) {
              offset = (longlong)((temp_index_3 + 2) * height);
              float_ptr_2 = float_ptr + offset;
              offset_2 = (temp_index_3 + 1) * height - offset;
              offset_3 = (temp_index_3 + 3) * height - offset;
              offset = temp_index_3 * height - offset;
              remaining_elements = ((temp_index_2 - temp_index_3) - 4U >> 2) + 1;
              loop_counter = (ulonglong)remaining_elements;
              temp_index_3 = temp_index_3 + remaining_elements * 4;
              do {
                float_ptr_2[offset] = (float_ptr_2[offset] * float_value + 1.0) * float_ptr_2[offset];
                float_ptr_2[offset_2] = (float_ptr_2[offset_2] * float_value + 1.0) * float_ptr_2[offset_2];
                *float_ptr_2 = (float_value * *float_ptr_2 + 1.0) * *float_ptr_2;
                float_ptr_2[offset_3] = (float_ptr_2[offset_3] * float_value + 1.0) * float_ptr_2[offset_3];
                float_ptr_2 = float_ptr_2 + height * 4;
                loop_counter = loop_counter - 1;
              } while (loop_counter != 0);
            }
            if (temp_index_3 < temp_index_2) {
              float_ptr_2 = float_ptr + temp_index_3 * height;
              offset = (longlong)(temp_index_2 - temp_index_3);
              do {
                *float_ptr_2 = (*float_ptr_2 * float_value + 1.0) * *float_ptr_2;
                float_ptr_2 = float_ptr_2 + offset_5;
                offset = offset + -1;
              } while (offset != 0);
            }
          }
          if ((needs_clamping) && (1 < temp_index)) {
            float_value_5 = float_value_3 - *float_ptr;
            float_value_2 = float_value_5 / (float)temp_index;
            if (temp_index_5 < temp_index) {
              if (3 < temp_index - temp_index_5) {
                offset = (longlong)((temp_index_5 + 2) * height);
                float_ptr_2 = float_ptr + offset;
                offset_2 = (temp_index_5 + 1) * height - offset;
                offset_3 = (temp_index_5 + 3) * height - offset;
                offset = temp_index_5 * height - offset;
                remaining_elements = ((temp_index - temp_index_5) - 4U >> 2) + 1;
                loop_counter = (ulonglong)remaining_elements;
                temp_index_5 = temp_index_5 + remaining_elements * 4;
                do {
                  float_value_4 = (float_value_5 - float_value_2) + float_ptr_2[offset];
                  if (1.0 <= float_value_4) {
                    float_value_4 = 1.0;
                  }
                  if (float_value_4 < -1.0) {
                    float_value_4 = -1.0;
                  }
                  float_ptr_2[offset] = float_value_4;
                  float_value_5 = (float_value_5 - float_value_2) - float_value_2;
                  float_value_4 = float_value_5 + float_ptr_2[offset_2];
                  if (1.0 <= float_value_4) {
                    float_value_4 = 1.0;
                  }
                  if (float_value_4 < -1.0) {
                    float_value_4 = -1.0;
                  }
                  float_ptr_2[offset_2] = float_value_4;
                  float_value_5 = float_value_5 - float_value_2;
                  float_value_4 = float_value_5 + *float_ptr_2;
                  if (1.0 <= float_value_4) {
                    float_value_4 = 1.0;
                  }
                  if (float_value_4 < -1.0) {
                    float_value_4 = -1.0;
                  }
                  *float_ptr_2 = float_value_4;
                  float_value_5 = float_value_5 - float_value_2;
                  float_value_4 = float_value_5 + float_ptr_2[offset_3];
                  if (1.0 <= float_value_4) {
                    float_value_4 = 1.0;
                  }
                  if (float_value_4 < -1.0) {
                    float_value_4 = -1.0;
                  }
                  float_ptr_2[offset_3] = float_value_4;
                  float_ptr_2 = float_ptr_2 + height * 4;
                  loop_counter = loop_counter - 1;
                } while (loop_counter != 0);
              }
              if (temp_index_5 < temp_index) {
                float_ptr_2 = float_ptr + temp_index_5 * height;
                offset = (longlong)(temp_index - temp_index_5);
                do {
                  float_value_5 = float_value_5 - float_value_2;
                  float_value_4 = float_value_5 + *float_ptr_2;
                  if (1.0 <= float_value_4) {
                    float_value_4 = 1.0;
                  }
                  if (float_value_4 < -1.0) {
                    float_value_4 = -1.0;
                  }
                  *float_ptr_2 = float_value_4;
                  float_ptr_2 = float_ptr_2 + offset_5;
                  offset = offset + -1;
                } while (offset != 0);
              }
            }
          }
          temp_index_5 = temp_index_2;
        } while (temp_index_2 != width);
        *stack_ptr = float_value;
        stack_ptr = stack_ptr + 1;
        stack_offset = stack_offset + -1;
      } while (stack_offset != 0);
    }
  }
  return;
}