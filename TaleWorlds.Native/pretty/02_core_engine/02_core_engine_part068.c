#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part068.c - 12个函数

// 全局变量声明
extern undefined8 *DAT_180bf00a8;           // 全局数据指针
extern undefined8 UNK_18098b928;              // 未知全局变量
extern undefined8 UNK_180a01638;              // 未知全局变量
extern undefined8 UNK_180a01650;              // 未知全局变量
extern undefined8 UNK_180a01630;              // 未知全局变量
extern undefined8 UNK_180a01668;              // 未知全局变量
extern undefined8 UNK_180bd8990;              // 异常处理相关
extern undefined8 *DAT_180d48d30;             // 全局数据指针

// 辅助函数声明
undefined8 FUN_180067110(ulonglong size);     // 内存分配函数
void FUN_1800670f0(void);                    // 内存释放函数
void *swi(int interrupt_num);                 // 软件中断调用
void *memcpy(void *dest, const void *src, size_t n); // 内存拷贝
void *memmove(void *dest, const void *src, size_t n); // 内存移动
void free(void *ptr, size_t size, ...);       // 内存释放
int fgetc(void *stream);                      // 文件字符读取
int fgetpos(void *stream, void *pos);         // 获取文件位置
int fsetpos(void *stream, const void *pos);   // 设置文件位置
int fseeki64(void *stream, longlong offset, int origin); // 文件定位
int setvbuf(void *stream, void *buffer, int mode, size_t size); // 设置缓冲区
int fflush(void *stream);                     // 刷新缓冲区
size_t fread(void *ptr, size_t size, size_t count, void *stream); // 文件读取
size_t fwrite(const void *ptr, size_t size, size_t count, void *stream); // 文件写入
int ungetc(int c, void *stream);             // 字符放回缓冲区
void func_0x0001800a1680(longlong param_1);   // 文件处理函数
void FUN_1800a1920(longlong param_1, undefined8 param_2, int param_3); // 缓冲区设置
int FUN_1800a16b0(longlong param_1, int param_2); // 文件操作函数
char FUN_1800a1850(void);                     // 文件状态检查
void FUN_1800a19c0(undefined8 *param_1);     // 文件清理函数
void FUN_1808fc050(undefined8 param_1);       // 异常处理函数
void FUN_1808ffb84(undefined8 *param_1);     // 对象初始化函数
longlong _xsgetn___basic_streambuf_DU__char_traits_D_std___std__MEAA_JPEAD_J_Z(void); // 流缓冲区读取
longlong _xsputn___basic_streambuf_DU__char_traits_D_std___std__MEAA_JPEBD_J_Z(void); // 流缓冲区写入
void __Gninc___basic_streambuf_DU__char_traits_D_std___std__IEAAPEADXZ(longlong param_1); // 流缓冲区操作
void __std_exception_destroy(undefined8 *param_1); // 异常销毁
void __std_exception_copy(longlong param_1);   // 异常拷贝
longlong __0_Lockit_std__QEAA_H_Z(undefined8 *param_1, int param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5); // 锁定操作
void __1_Lockit_std__QEAA_XZ(undefined8 *param_1); // 锁定释放
ulonglong __Bid_locale_std__QEAA_KXZ(undefined8 param_1); // 区域设置ID获取
longlong __Getgloballocale_locale_std__CAPEAV_Locimp_12_XZ(void); // 全局区域设置获取
longlong __Getcat___codecvt_DDU_Mbstatet___std__SA_KPEAPEBVfacet_locale_2_PEBV42__Z(undefined8 **param_1, longlong param_2); // 编码转换获取
char _always_noconv_codecvt_base_std__QEBA_NXZ(undefined8 *param_1); // 编码转换检查
void __Init___basic_streambuf_DU__char_traits_D_std___std__IEAAXXZ(longlong param_1); // 流缓冲区初始化
void __1__basic_streambuf_DU__char_traits_D_std___std__UEAA_XZ(undefined8 *param_1); // 流缓冲区析构
void __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(longlong param_1); // IO流析构
void __1__basic_ostream_DU__char_traits_D_std___std__UEAA_XZ(longlong param_1); // 输出流析构
int _in___codecvt_DDU_Mbstatet___std__QEBAHAEAU_Mbstatet__PEBD1AEAPEBDPEAD3AEAPEAD_Z(undefined8 param_1, longlong param_2, undefined8 *param_3, undefined8 *param_4); // 编码转换输入
void _invalid_parameter_noinfo_noreturn(void); // 无效参数处理
void _CxxThrowException(void *exception, void *type); // 异常抛出
void FUN_1800a0e50(longlong param_1, int param_2); // 字符输出函数
void FUN_1800a1160(longlong param_1, longlong param_2); // 字符输出函数
undefined8 *FUN_1800a05a0(undefined8 *param_1, undefined8 *param_2, undefined8 *param_3); // 格式化函数
undefined8 *FUN_1800a0350(undefined8 *param_1, undefined8 *param_2, undefined8 *param_3, int param_4, undefined8 *param_5); // 格式化函数
undefined8 *FUN_1800a1310(undefined8 *param_1, undefined8 *param_2, undefined8 *param_3, int param_4, int param_5); // 递归格式化函数

// 函数：动态数组字符添加函数
// 功能：向动态数组中添加字符，处理数组扩容和内存管理
void dynamic_array_add_char(undefined8 *array_ptr, undefined1 char_value)

{
  ulonglong current_size;     // 当前数组大小
  ulonglong max_size;        // 最大数组大小
  ulonglong new_size;        // 新的数组大小
  code *exception_handler;   // 异常处理器
  undefined8 new_buffer;     // 新缓冲区指针
  ulonglong expanded_size;   // 扩展后的大小
  ulonglong calculated_size;  // 计算后的大小
  
  current_size = array_ptr[2];
  max_size = array_ptr[3];
  if (current_size < max_size) {
    array_ptr[2] = current_size + 1;
    if (0xf < max_size) {
      array_ptr = (undefined8 *)*array_ptr;
    }
    *(undefined1 *)((longlong)array_ptr + current_size) = char_value;
    *(undefined1 *)((longlong)array_ptr + current_size + 1) = 0;
    return;
  }
  if (current_size != 0x7fffffffffffffff) {
    expanded_size = current_size + 1 | 0xf;
    calculated_size = 0x7fffffffffffffff;
    if (((expanded_size < 0x8000000000000000) && (max_size <= 0x7fffffffffffffff - (max_size >> 1))) &&
       (new_size = (max_size >> 1) + max_size, calculated_size = expanded_size, expanded_size < new_size)) {
      calculated_size = new_size;
    }
    new_buffer = FUN_180067110(calculated_size + 1);
    array_ptr[2] = current_size + 1;
    array_ptr[3] = calculated_size;
    if (0xf < max_size) {
      memcpy(new_buffer, *array_ptr, current_size);
    }
    memcpy(new_buffer, array_ptr, current_size);
  }
  FUN_1800670f0();
  exception_handler = (code *)swi(3);
  (*exception_handler)();
  return;
}

// 函数：动态数组扩容函数版本1
// 功能：对动态数组进行扩容处理，使用默认参数
void dynamic_array_expand_v1(void)

{
  ulonglong new_size;        // 新的数组大小
  code *exception_handler;   // 异常处理器
  undefined8 new_buffer;     // 新缓冲区指针
  undefined8 *array_ptr;     // 数组指针
  ulonglong max_size;        // 最大数组大小
  longlong current_size;     // 当前数组大小
  ulonglong expanded_size;  // 扩展后的大小
  
  if (current_size == 0x7fffffffffffffff) {
    FUN_1800670f0();
    exception_handler = (code *)swi(3);
    (*exception_handler)();
    return;
  }
  expanded_size = current_size + 1U | 0xf;
  new_size = 0x7fffffffffffffff;
  if (((expanded_size < 0x8000000000000000) && (max_size <= 0x7fffffffffffffff - (max_size >> 1))) &&
     (new_size = (max_size >> 1) + max_size, new_size = expanded_size, expanded_size < new_size)) {
    new_size = new_size;
  }
  new_buffer = FUN_180067110(new_size + 1);
  array_ptr[2] = current_size + 1U;
  array_ptr[3] = new_size;
  if (0xf < max_size) {
    memcpy(new_buffer, *array_ptr);
  }
  memcpy(new_buffer);
}

// 函数：动态数组扩容函数版本2
// 功能：对动态数组进行扩容处理，使用指定参数
void dynamic_array_expand_v2(void)

{
  ulonglong new_size;        // 新的数组大小
  undefined8 new_buffer;     // 新缓冲区指针
  ulonglong calculated_size;  // 计算后的大小
  undefined8 *array_ptr;     // 数组指针
  ulonglong max_size;        // 最大数组大小
  longlong current_size;     // 当前数组大小
  ulonglong target_size;     // 目标大小
  
  calculated_size = current_size + 1U | 0xf;
  if (((calculated_size <= target_size) && (max_size <= target_size - (max_size >> 1))) &&
     (new_size = (max_size >> 1) + max_size, target_size = calculated_size, calculated_size < new_size)) {
    target_size = new_size;
  }
  new_buffer = FUN_180067110(target_size + 1);
  array_ptr[2] = current_size + 1U;
  array_ptr[3] = target_size;
  if (0xf < max_size) {
    memcpy(new_buffer, *array_ptr);
  }
  memcpy(new_buffer);
}

// 函数：内存拷贝函数
// 功能：执行内存拷贝操作
void memory_copy(undefined8 dest, undefined8 *src_ptr)

{
  undefined8 *unaff_RBX;     // 源指针
  
  memcpy(dest, *src_ptr);
}

// 函数：异常处理函数
// 功能：处理异常情况
void handle_exception(void)

{
  code *exception_handler;   // 异常处理器
  
  FUN_1800670f0();
  exception_handler = (code *)swi(3);
  (*exception_handler)();
  return;
}

// 函数：流缓冲区清理函数
// 功能：清理流缓冲区，处理文件指针和数据
void cleanup_stream_buffer(longlong stream_ptr)

{
  undefined8 buffer_info;     // 缓冲区信息
  longlong buffer_size;      // 缓冲区大小
  uint char_value;           // 字符值
  int conversion_result;     // 转换结果
  longlong file_size;        // 文件大小
  longlong position;         // 文件位置
  ulonglong buffer_capacity; // 缓冲区容量
  undefined1 *read_ptr;      // 读取指针
  undefined1 *write_ptr;     // 写入指针
  undefined1 **ptr_ptr;      // 指针指针
  undefined1 stack_char;     // 栈字符
  undefined1 char_array[7];  // 字符数组
  longlong temp_long;        // 临时长整型
  undefined1 *temp_ptr;      // 临时指针
  undefined8 stack_info;     // 栈信息
  undefined1 stack_flag;     // 栈标志
  undefined7 stack_padding;  // 栈填充
  ulonglong stack_size;      // 栈大小
  ulonglong stack_capacity;  // 栈容量
  
  stack_info = 0xfffffffffffffffe;
  stack_capacity = DAT_180bf00a8 ^ (ulonglong)char_array;
  buffer_capacity = **(ulonglong **)(stream_ptr + 0x38);
  if ((buffer_capacity == 0) || ((longlong)**(int **)(stream_ptr + 0x50) + buffer_capacity <= buffer_capacity)) {
    if (*(longlong *)(stream_ptr + 0x80) != 0) {
      if (**(longlong **)(stream_ptr + 0x18) == stream_ptr + 0x70) {
        buffer_info = *(undefined8 *)(stream_ptr + 0x90);
        file_size = *(longlong *)(stream_ptr + 0x88);
        **(longlong **)(stream_ptr + 0x18) = file_size;
        **(longlong **)(stream_ptr + 0x38) = file_size;
        **(int **)(stream_ptr + 0x50) = (int)buffer_info - (int)file_size;
      }
      if (*(longlong *)(stream_ptr + 0x68) == 0) {
        fgetc(*(undefined8 *)(stream_ptr + 0x80));
      }
      else {
        stack_size = 0;
        stack_capacity = 0xf;
        stack_flag = 0;
        char_value = fgetc(*(undefined8 *)(stream_ptr + 0x80));
        if (char_value != 0xffffffff) {
          dynamic_array_add_char(&stack_flag, char_value & 0xff);
          read_ptr = &stack_flag;
          if (0xf < stack_capacity) {
            read_ptr = (undefined1 *)CONCAT71(stack_padding, stack_flag);
          }
          write_ptr = &stack_flag;
          if (0xf < stack_capacity) {
            write_ptr = (undefined1 *)CONCAT71(stack_padding, stack_flag);
          }
          ptr_ptr = &temp_ptr;
          temp_ptr = char_array;
          write_ptr = &stack_char;
          temp_long = &stack_size;
          conversion_result = _in___codecvt_DDU_Mbstatet___std__QEBAHAEAU_Mbstatet__PEBD1AEAPEBDPEAD3AEAPEAD_Z
                            (*(undefined8 *)(stream_ptr + 0x68), stream_ptr + 0x74, write_ptr,
                             read_ptr + stack_size);
          if ((-1 < conversion_result) && (conversion_result < 2)) {
            if (temp_ptr == &stack_char) {
              read_ptr = &stack_flag;
              if (0xf < stack_capacity) {
                read_ptr = (undefined1 *)CONCAT71(stack_padding, stack_flag);
              }
              buffer_capacity = stack_size - (longlong)read_ptr;
              if (stack_size < (ulonglong)(stack_size - (longlong)read_ptr)) {
                buffer_capacity = stack_size;
              }
              read_ptr = &stack_flag;
              if (0xf < stack_capacity) {
                read_ptr = (undefined1 *)CONCAT71(stack_padding, stack_flag);
              }
              stack_size = stack_size - buffer_capacity;
              memmove(read_ptr, read_ptr + buffer_capacity, stack_size + 1);
            }
            read_ptr = &stack_flag;
            if (0xf < stack_capacity) {
              read_ptr = (undefined1 *)CONCAT71(stack_padding, stack_flag);
            }
            read_ptr = read_ptr + (stack_size - stack_size);
            while (0 < (longlong)read_ptr) {
              read_ptr = read_ptr + -1;
              ungetc((int)(char)read_ptr[stack_size], *(undefined8 *)(stream_ptr + 0x80));
            }
          }
        }
        if (0xf < stack_capacity) {
          buffer_capacity = stack_capacity + 1;
          position = CONCAT71(stack_padding, stack_flag);
          file_size = position;
          if (0xfff < buffer_capacity) {
            buffer_capacity = stack_capacity + 0x28;
            file_size = *(longlong *)(position + -8);
            if (0x1f < (position - file_size) - 8U) {
              _invalid_parameter_noinfo_noreturn();
            }
          }
          free(file_size, buffer_capacity);
        }
        stack_size = 0;
        stack_capacity = 0xf;
        stack_flag = 0;
      }
    }
  }
  else {
    __Gninc___basic_streambuf_DU__char_traits_D_std___std__IEAAPEADXZ(stream_ptr);
  }
  FUN_1808fc050(stack_capacity ^ (ulonglong)char_array);
}

// 函数：流读取函数
// 功能：从流中读取指定数量的数据
longlong stream_read_data(longlong stream_ptr, undefined8 buffer, longlong size)

{
  undefined8 buffer_info;     // 缓冲区信息
  longlong bytes_read;        // 已读取字节数
  int available_bytes;        // 可用字节数
  longlong bytes_to_copy;     // 要拷贝的字节数
  
  if (*(longlong *)(stream_ptr + 0x68) != 0) {
    bytes_read = _xsgetn___basic_streambuf_DU__char_traits_D_std___std__MEAA_JPEAD_J_Z();
    return bytes_read;
  }
  if (**(longlong **)(stream_ptr + 0x38) == 0) {
    available_bytes = 0;
  }
  else {
    available_bytes = **(int **)(stream_ptr + 0x50);
  }
  bytes_read = size;
  if (0 < size) {
    if (0 < available_bytes) {
      bytes_read = (longlong)available_bytes;
      if (size < available_bytes) {
        bytes_read = size;
      }
      memcpy(buffer, **(longlong **)(stream_ptr + 0x38), bytes_read);
    }
    if ((0 < size) && (bytes_to_copy = *(longlong *)(stream_ptr + 0x80), bytes_to_copy != 0)) {
      if (**(longlong **)(stream_ptr + 0x18) == stream_ptr + 0x70) {
        bytes_read = *(longlong *)(stream_ptr + 0x88);
        buffer_info = *(undefined8 *)(stream_ptr + 0x90);
        **(longlong **)(stream_ptr + 0x18) = bytes_read;
        **(longlong **)(stream_ptr + 0x38) = bytes_read;
        **(int **)(stream_ptr + 0x50) = (int)buffer_info - (int)bytes_read;
        bytes_to_copy = *(longlong *)(stream_ptr + 0x80);
      }
      bytes_read = fread(buffer, 1, size, bytes_to_copy);
      bytes_read = size - bytes_read;
    }
  }
  return size - bytes_read;
}

// 函数：流写入函数
// 功能：向流中写入指定数量的数据
longlong stream_write_data(longlong stream_ptr, undefined8 buffer, longlong size)

{
  longlong bytes_written;     // 已写入字节数
  int available_space;       // 可用空间
  longlong bytes_to_copy;     // 要拷贝的字节数
  
  if (*(longlong *)(stream_ptr + 0x68) != 0) {
    bytes_written = _xsputn___basic_streambuf_DU__char_traits_D_std___std__MEAA_JPEBD_J_Z();
    return bytes_written;
  }
  if (**(longlong **)(stream_ptr + 0x40) == 0) {
    available_space = 0;
  }
  else {
    available_space = **(int **)(stream_ptr + 0x58);
  }
  bytes_written = size;
  if (0 < size) {
    if (0 < available_space) {
      bytes_written = (longlong)available_space;
      if (size < available_space) {
        bytes_written = size;
      }
      memcpy(**(longlong **)(stream_ptr + 0x40), buffer, bytes_written);
    }
    if ((0 < size) && (*(longlong *)(stream_ptr + 0x80) != 0)) {
      bytes_written = fwrite(buffer, 1, size);
      bytes_written = size - bytes_written;
    }
  }
  return size - bytes_written;
}

// 函数：流定位函数
// 功能：设置流的位置指针
undefined8 * stream_seek_position(longlong stream_ptr, undefined8 *position_ptr, longlong offset, int origin)

{
  undefined8 file_info;      // 文件信息
  char seek_result;          // 定位结果
  int position_result;       // 位置设置结果
  undefined8 stack_info;     // 栈信息
  
  if (((**(longlong **)(stream_ptr + 0x38) == stream_ptr + 0x70) && (origin == 1)) &&
     (*(longlong *)(stream_ptr + 0x68) == 0)) {
    offset = offset + -1;
  }
  if ((((*(longlong *)(stream_ptr + 0x80) != 0) && (seek_result = FUN_1800a1850(), seek_result != '\0')) &&
      (((offset == 0 && (origin == 1)) ||
       (position_result = _fseeki64(*(undefined8 *)(stream_ptr + 0x80), offset, origin), position_result == 0)))) &&
     (position_result = fgetpos(*(undefined8 *)(stream_ptr + 0x80), &stack_info), position_result == 0)) {
    func_0x0001800a1680(stream_ptr);
    file_info = *(undefined8 *)(stream_ptr + 0x74);
    *position_ptr = stack_info;
    position_ptr[1] = 0;
    position_ptr[2] = file_info;
    return position_ptr;
  }
  *position_ptr = 0xffffffffffffffff;
  position_ptr[1] = 0;
  position_ptr[2] = 0;
  return position_ptr;
}

// 函数：流位置设置函数
// 功能：设置流的绝对位置
longlong * stream_set_position(longlong stream_ptr, longlong *position_ptr, longlong *offset_ptr)

{
  undefined8 file_info;      // 文件信息
  char seek_result;          // 定位结果
  int position_result;       // 位置设置结果
  longlong file_position;    // 文件位置
  longlong stack_offset;     // 栈偏移量
  
  stack_offset = offset_ptr[1] + *offset_ptr;
  if (*(longlong *)(stream_ptr + 0x80) != 0) {
    seek_result = FUN_1800a1850();
    if (seek_result != '\0') {
      position_result = fsetpos(*(undefined8 *)(stream_ptr + 0x80), &stack_offset);
      if (position_result == 0) {
        file_position = offset_ptr[2];
        *(longlong *)(stream_ptr + 0x74) = file_position;
        if (**(longlong **)(stream_ptr + 0x18) == stream_ptr + 0x70) {
          file_position = *(longlong *)(stream_ptr + 0x88);
          file_info = *(undefined8 *)(stream_ptr + 0x90);
          **(longlong **)(stream_ptr + 0x18) = file_position;
          **(longlong **)(stream_ptr + 0x38) = file_position;
          **(int **)(stream_ptr + 0x50) = (int)file_info - (int)file_position;
          file_position = *(longlong *)(stream_ptr + 0x74);
        }
        *position_ptr = stack_offset;
        position_ptr[1] = 0;
        position_ptr[2] = file_position;
        return position_ptr;
      }
    }
  }
  *position_ptr = -1;
  position_ptr[1] = 0;
  position_ptr[2] = 0;
  return position_ptr;
}

// 函数：流缓冲区设置函数
// 功能：设置流的缓冲区参数
longlong stream_set_buffer(longlong stream_ptr, longlong buffer, longlong size)

{
  int buffer_result;         // 缓冲区设置结果
  undefined4 buffer_mode;     // 缓冲区模式
  
  if (*(longlong *)(stream_ptr + 0x80) != 0) {
    if ((buffer == 0) && (size == 0)) {
      buffer_mode = 4;
    }
    else {
      buffer_mode = 0;
    }
    buffer_result = setvbuf(*(longlong *)(stream_ptr + 0x80), buffer, buffer_mode);
    if (buffer_result == 0) {
      FUN_1800a1920(stream_ptr, *(undefined8 *)(stream_ptr + 0x80), 1);
      return stream_ptr;
    }
  }
  return 0;
}

// 函数：流刷新函数
// 功能：刷新流的缓冲区
undefined8 stream_flush(longlong stream_ptr)

{
  int flush_result;          // 刷新结果
  
  if (*(longlong *)(stream_ptr + 0x80) != 0) {
    flush_result = FUN_1800a16b0(stream_ptr, 0xffffffff);
    if (flush_result != -1) {
      flush_result = fflush(*(undefined8 *)(stream_ptr + 0x80));
      if (flush_result < 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}

// 函数：流初始化函数
// 功能：初始化流对象
undefined8 * stream_initialize(undefined8 *stream_ptr)

{
  *stream_ptr = &UNK_18098b928;
  stream_ptr[2] = 0;
  stream_ptr[1] = &UNK_180a01638;
  *stream_ptr = &UNK_180a01650;
  return stream_ptr;
}

// 函数：流销毁函数
// 功能：销毁流对象
void stream_destroy(undefined8 *stream_ptr)

{
  *stream_ptr = &UNK_18098b928;
  __std_exception_destroy(stream_ptr + 1);
  return;
}

// 函数：流构造函数
// 功能：构造流对象
undefined8 *
stream_constructor(undefined8 *stream_ptr, ulonglong flags, undefined8 param_3, undefined8 param_4)

{
  undefined8 stack_info;     // 栈信息
  
  stack_info = 0xfffffffffffffffe;
  *stream_ptr = &UNK_18098b928;
  __std_exception_destroy(stream_ptr + 1);
  if ((flags & 1) != 0) {
    free(stream_ptr, 0x18, param_3, param_4, stack_info);
  }
  return stream_ptr;
}

// 函数：流拷贝函数
// 功能：拷贝流对象
undefined8 * stream_copy(undefined8 *dest_ptr, longlong src_ptr)

{
  *dest_ptr = &UNK_18098b928;
  dest_ptr[1] = 0;
  dest_ptr[2] = 0;
  __std_exception_copy(src_ptr + 8);
  *dest_ptr = &UNK_180a01650;
  return dest_ptr;
}

// 函数：编码转换获取函数
// 功能：获取编码转换器
longlong * get_codecvt_converter(longlong locale_ptr, undefined8 param_2, undefined8 param_3, undefined8 param_4)

{
  ulonglong locale_id;       // 区域设置ID
  longlong locale_data;      // 区域设置数据
  longlong *converter_ptr;   // 转换器指针
  undefined1 stack_data[8];  // 栈数据
  longlong *stack_ptr;       // 栈指针
  longlong *stack_ptr2;      // 栈指针2
  undefined1 stack_buffer[24]; // 栈缓冲区
  
  __0_Lockit_std__QEAA_H_Z(stack_data, 0, param_3, param_4, 0xfffffffffffffffe);
  stack_ptr = DAT_180d48d30;
  locale_id = __Bid_locale_std__QEAA_KXZ(_id___codecvt_DDU_Mbstatet___std__2V0locale_2_A_exref);
  locale_data = *(longlong *)(locale_ptr + 8);
  if (locale_id < *(ulonglong *)(locale_data + 0x18)) {
    converter_ptr = *(longlong **)(*(longlong *)(locale_data + 0x10) + locale_id * 8);
    if (converter_ptr != (longlong *)0x0) goto LAB_converter_found;
  }
  else {
    converter_ptr = (longlong *)0x0;
  }
  if (*(char *)(locale_data + 0x24) == '\0') {
LAB_check_converter:
    if (converter_ptr != (longlong *)0x0) goto LAB_converter_found;
  }
  else {
    locale_data = __Getgloballocale_locale_std__CAPEAV_Locimp_12_XZ();
    if (locale_id < *(ulonglong *)(locale_data + 0x18)) {
      converter_ptr = *(longlong **)(*(longlong)(locale_data + 0x10) + locale_id * 8);
      goto LAB_check_converter;
    }
  }
  converter_ptr = stack_ptr;
  if (stack_ptr == (longlong *)0x0) {
    locale_data = __Getcat___codecvt_DDU_Mbstatet___std__SA_KPEAPEBVfacet_locale_2_PEBV42__Z
                      (&stack_ptr, locale_ptr);
    converter_ptr = stack_ptr;
    if (locale_data == -1) {
      stream_initialize(stack_buffer);
      _CxxThrowException(stack_buffer, &UNK_180bd8990);
    }
    stack_ptr2 = stack_ptr;
    FUN_1808ffb84(stack_ptr);
    (**(code **)(*converter_ptr + 8))(converter_ptr);
    DAT_180d48d30 = stack_ptr;
    stack_ptr2 = (longlong *)0x0;
    converter_ptr = stack_ptr;
  }
LAB_converter_found:
  __1_Lockit_std__QEAA_XZ(stack_data);
  return converter_ptr;
}

// 函数：流编码设置函数
// 功能：设置流的编码转换器
void stream_set_codecvt(longlong stream_ptr, undefined8 locale_ptr)

{
  char conversion_result;     // 转换结果
  undefined8 converter_ptr;   // 转换器指针
  
  converter_ptr = get_codecvt_converter(locale_ptr);
  conversion_result = _always_noconv_codecvt_base_std__QEBA_NXZ(converter_ptr);
  if (conversion_result != '\0') {
    *(undefined8 *)(stream_ptr + 0x68) = 0;
    return;
  }
  *(undefined8 *)(stream_ptr + 0x68) = converter_ptr;
  __Init___basic_streambuf_DU__char_traits_D_std___std__IEAAXXZ(stream_ptr);
  return;
}

// 函数：流清理函数
// 功能：清理流资源
void stream_cleanup(longlong stream_ptr)

{
  undefined8 *object_ptr;    // 对象指针
  
  if (*(longlong **)(stream_ptr + 8) != (longlong *)0x0) {
    object_ptr = (undefined8 *)(**(code **)(**(longlong **)(stream_ptr + 8) + 0x10))();
    if (object_ptr != (undefined8 *)0x0) {
      (**(code **)*object_ptr)(object_ptr, 1);
      return;
    }
  }
  return;
}

// 函数：流析构函数
// 功能：析构流对象
void stream_destructor(undefined8 *stream_ptr)

{
  undefined8 buffer_info;     // 缓冲区信息
  undefined8 buffer_data;     // 缓冲区数据
  
  *stream_ptr = &UNK_180a01668;
  if ((stream_ptr[0x10] != 0) && (*(undefined8 **)stream_ptr[3] == stream_ptr + 0xe)) {
    buffer_info = stream_ptr[0x12];
    buffer_data = stream_ptr[0x11];
    *(undefined8 *)stream_ptr[3] = buffer_data;
    *(undefined8 *)stream_ptr[7] = buffer_data;
    *(int *)stream_ptr[10] = (int)buffer_info - (int)buffer_data;
  }
  if (*(char *)((longlong)stream_ptr + 0x7c) != '\0') {
    FUN_1800a19c0(stream_ptr);
  }
  __1__basic_streambuf_DU__char_traits_D_std___std__UEAA_XZ(stream_ptr);
  return;
}

// 函数：流完全析构函数
// 功能：完全析构流对象和相关资源
void stream_full_destructor(longlong *stream_ptr)

{
  longlong *ios_ptr;         // IO流指针
  
  ios_ptr = stream_ptr + 0x15;
  *(undefined **)((longlong)*(int *)(*stream_ptr + 4) + -0xa8 + (longlong)ios_ptr) = &UNK_180a01630;
  *(int *)((longlong)*(int *)(*stream_ptr + 4) + -0xac + (longlong)ios_ptr) =
       *(int *)(*stream_ptr + 4) + -0xa8;
  stream_destructor(stream_ptr + 1);
  __1__basic_ostream_DU__char_traits_D_std___std__UEAA_XZ(stream_ptr + 2);
  __1__basic_ios_DU__char_traits_D_std__std__UEAA_XZ(ios_ptr);
  return;
}

// 函数：格式化输出函数
// 功能：执行格式化输出操作
void format_output_data(longlong *dest_ptr, longlong *format_ptr, undefined8 *args_ptr, uint format_flags, uint indent_level)

{
  undefined1 format_char;     // 格式字符
  undefined1 *arg_ptr;        // 参数指针
  longlong arg_size;          // 参数大小
  longlong format_size;       // 格式大小
  undefined4 *format_result;  // 格式化结果
  longlong *temp_ptr;         // 临时指针
  undefined1 *temp_ptr2;      // 临时指针2
  longlong temp_size;         // 临时大小
  ulonglong loop_counter;     // 循环计数器
  undefined1 *iter_ptr;       // 迭代指针
  longlong temp_long;         // 临时长整型
  undefined4 result1;         // 结果1
  undefined4 result2;         // 结果2
  undefined4 result3;         // 结果3
  undefined4 result4;         // 结果4
  undefined8 stack_info1;     // 栈信息1
  undefined8 stack_info2;     // 栈信息2
  undefined1 stack_buffer[32]; // 栈缓冲区
  
  if ((format_flags & 1) == 0) {
    temp_long = *format_ptr;
    arg_size = format_ptr[1];
    stack_info1 = temp_long;
    stack_info2 = arg_size;
    if (0 < (int)indent_level) {
      loop_counter = (ulonglong)indent_level;
      do {
        FUN_1800a0e50(arg_size, 9);
        if (temp_long != 0) {
          FUN_1800a1160(arg_size, temp_long);
        }
        loop_counter = loop_counter - 1;
      } while (loop_counter != 0);
    }
    *format_ptr = temp_long;
    format_ptr[1] = arg_size;
  }
  temp_long = format_ptr[1];
  FUN_1800a0e50(temp_long, 0x3c);
  if (*format_ptr != 0) {
    FUN_1800a1160(temp_long);
  }
  arg_ptr = (undefined1 *)*args_ptr;
  arg_size = *format_ptr;
  temp_size = format_ptr[1];
  temp_long = 0;
  if (arg_ptr == (undefined1 *)0x0) {
    temp_ptr2 = (undefined1 *)0x180d48d24;
  }
  else {
    temp_long = args_ptr[2];
    temp_ptr2 = arg_ptr;
  }
  iter_ptr = (undefined1 *)0x180d48d24;
  stack_info1 = arg_size;
  stack_info2 = temp_size;
  if (arg_ptr != (undefined1 *)0x0) {
    iter_ptr = arg_ptr;
  }
  while (iter_ptr != temp_ptr2 + temp_long) {
    format_char = *iter_ptr;
    iter_ptr = iter_ptr + 1;
    FUN_1800a0e50(temp_size, format_char);
    if (arg_size != 0) {
      FUN_1800a1160(temp_size, arg_size);
    }
  }
  temp_long = 0;
  stack_info1 = *format_ptr;
  stack_info2 = format_ptr[1];
  format_result = (undefined4 *)FUN_1800a05a0(stack_buffer, &stack_info1, args_ptr);
  arg_size = args_ptr[1];
  result1 = format_result[1];
  result2 = format_result[2];
  result3 = format_result[3];
  *(undefined4 *)format_ptr = *format_result;
  *(undefined4 *)((longlong)format_ptr + 4) = result1;
  *(undefined4 *)(format_ptr + 1) = result2;
  *(undefined4 *)((longlong)format_ptr + 0xc) = result3;
  if (((arg_size == 0) || (args_ptr[3] == 0)) && (args_ptr[6] == 0)) {
    temp_long = format_ptr[1];
    FUN_1800a0e50(temp_long, 0x2f);
    arg_size = *format_ptr;
    if (arg_size != 0) {
      FUN_1800a1160(temp_long, arg_size);
    }
    FUN_1800a0e50(temp_long, 0x3e);
    goto format_complete;
  }
  arg_size = format_ptr[1];
  FUN_1800a0e50(arg_size, 0x3e);
  temp_size = *format_ptr;
  if (temp_size != 0) {
    FUN_1800a1160(arg_size, temp_size);
  }
  temp_size = args_ptr[6];
  if (temp_size == 0) {
    arg_size = args_ptr[1];
    stack_info1 = *format_ptr;
    stack_info2 = format_ptr[1];
    if (arg_size == 0) {
      temp_long = 0x180d48d24;
      temp_size = 0x180d48d24;
    }
    else {
      temp_long = args_ptr[3] + arg_size;
      temp_size = 0x180d48d24;
      if (arg_size != 0) {
        temp_size = arg_size;
      }
    }
LAB_format_simple:
    format_result = (undefined4 *)FUN_1800a0350(stack_buffer, temp_size, temp_long, 0, &stack_info1);
    result1 = format_result[1];
    result2 = format_result[2];
    result3 = format_result[3];
    *(undefined4 *)format_ptr = *format_result;
    *(undefined4 *)((longlong)format_ptr + 4) = result1;
    *(undefined4 *)(format_ptr + 1) = result2;
    *(undefined4 *)((longlong)format_ptr + 0xc) = result3;
  }
  else {
    if ((*(longlong *)(temp_size + 0x58) == 0) && (*(int *)(temp_size + 0x28) == 2)) {
      arg_size = *(longlong *)(temp_size + 8);
      stack_info1 = *format_ptr;
      stack_info2 = format_ptr[1];
      if (arg_size == 0) {
        temp_size = 0x180d48d24;
      }
      else {
        temp_long = *(longlong *)(temp_size + 0x18);
        temp_size = arg_size;
      }
      temp_long = temp_long + temp_size;
      temp_size = 0x180d48d24;
      if (arg_size != 0) {
        temp_size = arg_size;
      }
      goto LAB_format_simple;
    }
    if (((format_flags & 1) == 0) && (FUN_1800a0e50(arg_size, 10), temp_size != 0)) {
      FUN_1800a1160(arg_size, temp_size);
    }
    temp_long = args_ptr[6];
    result1 = (undefined4)*format_ptr;
    result2 = *(undefined4 *)((longlong)format_ptr + 4);
    stack_info1 = *format_ptr;
    result3 = (undefined4)format_ptr[1];
    result4 = *(undefined4 *)((longlong)format_ptr + 0xc);
    stack_info2 = format_ptr[1];
    if (temp_long != 0) {
      do {
        stack_info1 = CONCAT44(result2, result1);
        stack_info2 = CONCAT44(result4, result3);
        temp_ptr = (longlong *)FUN_1800a1310(stack_buffer, &stack_info1, temp_long, format_flags, indent_level + 1);
        temp_long = *(longlong *)(temp_long + 0x58);
        result1 = (undefined4)*temp_ptr;
        result2 = *(undefined4 *)((longlong)temp_ptr + 4);
        stack_info1 = *temp_ptr;
        result3 = (undefined4)temp_ptr[1];
        result4 = *(undefined4 *)((longlong)temp_ptr + 0xc);
        stack_info2 = temp_ptr[1];
      } while (temp_long != 0);
    }
    arg_size = stack_info2;
    temp_long = stack_info1;
    *(undefined4 *)format_ptr = result1;
    *(undefined4 *)((longlong)format_ptr + 4) = result2;
    *(undefined4 *)(format_ptr + 1) = result3;
    *(undefined4 *)((longlong)format_ptr + 0xc) = result4;
    if ((format_flags & 1) == 0) {
      if (0 < (int)indent_level) {
        loop_counter = (ulonglong)indent_level;
        do {
          FUN_1800a0e50(arg_size, 9);
          if (temp_long != 0) {
            FUN_1800a1160(arg_size, temp_long);
          }
          loop_counter = loop_counter - 1;
        } while (loop_counter != 0);
      }
      *(undefined4 *)format_ptr = result1;
      *(undefined4 *)((longlong)format_ptr + 4) = result2;
      *(undefined4 *)(format_ptr + 1) = result3;
      *(undefined4 *)((longlong)format_ptr + 0xc) = result4;
    }
  }
  temp_long = format_ptr[1];
  FUN_1800a0e50(temp_long, 0x3c);
  arg_size = *format_ptr;
  if (arg_size != 0) {
    FUN_1800a1160(temp_long, arg_size);
  }
  FUN_1800a0e50(temp_long);
  if (arg_size != 0) {
    FUN_1800a1160(temp_long);
  }
  arg_ptr = (undefined1 *)*args_ptr;
  temp_long = *format_ptr;
  arg_size = format_ptr[1];
  if (arg_ptr == (undefined1 *)0x0) {
    temp_ptr2 = (undefined1 *)0x180d48d24;
    temp_size = 0;
  }
  else {
    temp_size = args_ptr[2];
    temp_ptr2 = arg_ptr;
  }
  iter_ptr = (undefined1 *)0x180d48d24;
  stack_info1 = temp_long;
  stack_info2 = arg_size;
  if (arg_ptr != (undefined1 *)0x0) {
    iter_ptr = arg_ptr;
  }
  while (iter_ptr != temp_ptr2 + temp_size) {
    format_char = *iter_ptr;
    iter_ptr = iter_ptr + 1;
    FUN_1800a0e50(arg_size, format_char);
    if (temp_long != 0) {
      FUN_1800a1160(arg_size, temp_long);
    }
  }
  *format_ptr = temp_long;
  format_ptr[1] = arg_size;
  temp_long = format_ptr[1];
  FUN_1800a0e50(temp_long, 0x3e);
  arg_size = *format_ptr;
format_complete:
  if (arg_size != 0) {
    FUN_1800a1160(temp_long, arg_size);
  }
  temp_long = format_ptr[1];
  *dest_ptr = *format_ptr;
  dest_ptr[1] = temp_long;
  return;
}

// 函数：格式化输出辅助函数
// 功能：执行特定格式的输出操作
longlong *
format_output_helper(longlong *dest_ptr, longlong *format_ptr, longlong format_data, byte format_flags, uint indent_level)

{
  undefined1 format_char;     // 格式字符
  longlong arg_size;          // 参数大小
  longlong format_size;       // 格式大小
  undefined1 *arg_ptr;        // 参数指针
  longlong temp_size;         // 临时大小
  undefined1 *temp_ptr;       // 临时指针
  longlong temp_long;         // 临时长整型
  ulonglong loop_counter;     // 循环计数器
  undefined1 *iter_ptr;       // 迭代指针
  
  if ((format_flags & 1) == 0) {
    arg_size = *format_ptr;
    format_size = format_ptr[1];
    if (0 < (int)indent_level) {
      loop_counter = (ulonglong)indent_level;
      do {
        FUN_1800a0e50(format_size, 9);
        if (arg_size != 0) {
          FUN_1800a1160(format_size, arg_size);
        }
        loop_counter = loop_counter - 1;
      } while (loop_counter != 0);
    }
    *format_ptr = arg_size;
    format_ptr[1] = format_size;
  }
  format_size = format_ptr[1];
  FUN_1800a0e50(format_size, 0x3c);
  arg_size = *format_ptr;
  if (arg_size != 0) {
    FUN_1800a1160(format_size, arg_size);
  }
  FUN_1800a0e50(format_size, 0x21);
  if (arg_size != 0) {
    FUN_1800a1160(format_size, arg_size);
  }
  FUN_1800a0e50(format_size, 0x5b);
  if (arg_size != 0) {
    FUN_1800a1160(format_size, arg_size);
  }
  FUN_1800a0e50(format_size, 0x43);
  if (arg_size != 0) {
    FUN_1800a1160(format_size, arg_size);
  }
  FUN_1800a0e50(format_size, 0x44);
  if (arg_size != 0) {
    FUN_1800a1160(format_size, arg_size);
  }
  FUN_1800a0e50(format_size, 0x41);
  if (arg_size != 0) {
    FUN_1800a1160(format_size, arg_size);
  }
  FUN_1800a0e50(format_size, 0x54);
  if (arg_size != 0) {
    FUN_1800a1160(format_size, arg_size);
  }
  FUN_1800a0e50(format_size, 0x41);
  if (arg_size != 0) {
    FUN_1800a1160(format_size, arg_size);
  }
  FUN_1800a0e50(format_size);
  if (arg_size != 0) {
    FUN_1800a1160(format_size);
  }
  arg_ptr = *(undefined1 **)(format_data + 8);
  arg_size = *format_ptr;
  format_size = format_ptr[1];
  if (arg_ptr == (undefined1 *)0x0) {
    temp_ptr = (undefined1 *)0x180d48d24;
    temp_size = 0;
  }
  else {
    temp_size = *(longlong *)(format_data + 0x18);
    temp_ptr = arg_ptr;
  }
  iter_ptr = (undefined1 *)0x180d48d24;
  if (arg_ptr != (undefined1 *)0x0) {
    iter_ptr = arg_ptr;
  }
  while (iter_ptr != temp_ptr + temp_size) {
    format_char = *iter_ptr;
    iter_ptr = iter_ptr + 1;
    FUN_1800a0e50(format_size, format_char);
    if (arg_size != 0) {
      FUN_1800a1160(format_size, arg_size);
    }
  }
  *format_ptr = arg_size;
  format_ptr[1] = format_size;
  temp_size = format_ptr[1];
  FUN_1800a0e50(temp_size, 0x5d);
  temp_long = *format_ptr;
  if (temp_long != 0) {
    FUN_1800a1160(temp_size, temp_long);
  }
  FUN_1800a0e50(temp_size, 0x5d);
  if (temp_long != 0) {
    FUN_1800a1160(temp_size, temp_long);
  }
  FUN_1800a0e50(temp_size, 0x3e);
  if (temp_long != 0) {
    FUN_1800a1160(temp_size, temp_long);
  }
  *dest_ptr = arg_size;
  dest_ptr[1] = format_size;
  return format_ptr;
}


// WARNING: Removing unreachable block (ram,0x00018009fe3d)

// 注意：这是简化实现，原代码包含更复杂的异常处理和内存管理逻辑