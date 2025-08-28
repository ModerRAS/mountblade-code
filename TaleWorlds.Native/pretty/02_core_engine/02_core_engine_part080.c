#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part080.c - 核心引擎模块第080部分
// 本文件包含3个函数，主要处理文本渲染、布局计算和字体度量功能

// 函数：处理文本布局和渲染计算
// 原始函数名：FUN_18010e8a0
// 这是一个复杂的文本处理函数，负责计算文本布局、行高和渲染参数
void process_text_layout_and_rendering(ulonglong text_start, ulonglong text_end)

{
  undefined8 *render_context;
  float *font_metrics;
  undefined8 layout_params;
  int line_count;
  char render_flag;
  uint text_flags;
  ulonglong char_ptr;
  longlong engine_context;
  longlong font_data;
  longlong layout_data;
  longlong render_state;
  int char_index;
  int line_height;
  int max_lines;
  float base_font_size;
  float line_spacing;
  float max_line_height;
  float total_height;
  float current_height;
  float x_position;
  float y_position;
  float width;
  float height;
  float char_width;
  float char_height;
  float ascent;
  float descent;
  undefined8 stack_temp;
  float temp_float1;
  float temp_float2;
  undefined8 render_buffer1;
  undefined8 render_buffer2;
  
  // 获取引擎上下文和设置渲染标志
  engine_context = _DAT_180c8a9b0;
  *(undefined1 *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
  render_state = *(longlong *)(engine_context + 0x1af8);
  
  // 检查是否已经启用渲染
  if (*(char *)(render_state + 0xb4) != '\0') {
    return;
  }
  
  // 如果文本结束位置为空，计算字符串长度
  if (text_end == 0) {
    font_data = -1;
    do {
      font_data = font_data + 1;
    } while (*(char *)(text_start + font_data) != '\0');
    text_end = font_data + text_start;
  }
  
  // 获取字体和布局参数
  base_font_size = *(float *)(render_state + 0x1b0);
  line_spacing = *(float *)(render_state + 0x100);
  total_height = *(float *)(render_state + 0x128) + *(float *)(render_state + 0x104);
  
  // 处理长文本的特殊布局逻辑
  if ((longlong)(text_end - text_start) < 0x7d1) {
    if (0.0 <= base_font_size) goto NORMAL_LAYOUT;
  }
  else {
    if (0.0 > base_font_size) {
      // 获取渲染缓冲区和布局参数
      render_buffer1 = *(undefined8 *)(render_state + 0x228);
      render_buffer2 = *(undefined8 *)(render_state + 0x230);
      base_font_size = *(float *)(engine_context + 0x19f8);
      max_line_height = 0.0;
      temp_float1 = 0.0;
      temp_float2 = 0.0;
      
      if (total_height <= *(float *)(render_state + 0x234)) {
        stack_temp = CONCAT44(total_height,line_spacing);
        line_height = 0;
        current_height = total_height;
        
        if (*(char *)(engine_context + 0x2e38) == '\0') {
          stack_temp = CONCAT44(total_height,line_spacing);
          max_lines = (int)((*(float *)(render_state + 0x22c) - total_height) / base_font_size);
          
          if (0 < max_lines) {
            line_count = line_height;
            char_index = 0;
            
            if (text_start < text_end) {
              do {
                line_count = char_index;
                if (max_lines <= line_count) break;
                
                // 查找换行符
                text_start = memchr(text_start,10,text_end - text_start);
                if (text_start == 0) {
                  text_start = text_end;
                }
                
                line_count = line_count + 1;
                text_start = text_start + 1;
                char_index = line_count;
              } while (text_start < text_end);
            }
            
            current_height = (float)line_count * base_font_size + total_height;
            stack_temp = CONCAT44(current_height,(undefined4)stack_temp);
          }
        }
        
        // 处理文本行布局
        if (text_start < text_end) {
          height = current_height;
          width = current_height;
          
          do {
            height = height + base_font_size;
            render_state = *(longlong *)(engine_context + 0x1af8);
            
            // 检查边界条件
            if (((((height < *(float *)(render_state + 0x22c) || height == *(float *)(render_state + 0x22c)) ||
                  (*(float *)(render_state + 0x234) <= current_height)) ||
                 (line_spacing + 3.4028235e+38 < *(float *)(render_state + 0x228) ||
                  line_spacing + 3.4028235e+38 == *(float *)(render_state + 0x228))) ||
                (*(float *)(render_state + 0x230) <= line_spacing)) && (*(char *)(engine_context + 0x2e38) == '\0')) {
              break;
            }
            
            // 查找下一个换行符
            char_ptr = memchr(text_start,10,text_end - text_start);
            font_metrics = *(float **)(engine_context + 0x19f0);
            char_width = *(float *)(engine_context + 0x19f8);
            
            if (char_ptr == 0) {
              char_ptr = text_end;
            }
            
            // 计算字符宽度
            if (text_start == char_ptr) {
              char_width = 0.0;
            }
            else {
              // 调用文本度量计算函数
              FUN_180297340(font_metrics,&render_buffer1,char_width,0x7f7fffff,0xbf800000,text_start,char_ptr,0);
              char_height = (float)render_buffer1;
              
              if (0.0 < (float)render_buffer1) {
                char_height = (float)render_buffer1 - char_width / *font_metrics;
              }
              
              char_width = (float)(int)(char_height + 0.95);
              render_buffer1 = CONCAT44(render_buffer1._4_4_,char_width);
            }
            
            // 更新最大行高
            if (max_line_height < char_width) {
              max_line_height = char_width;
              temp_float1 = char_width;
            }
            
            // 渲染文本行
            FUN_180122320(stack_temp,text_start,char_ptr,0);
            width = width + base_font_size;
            text_start = char_ptr + 1;
            current_height = current_height + base_font_size;
            stack_temp = CONCAT44(width,(undefined4)stack_temp);
            engine_context = _DAT_180c8a9b0;
          } while (text_start < text_end);
          
          // 处理剩余的文本
          for (; text_start < text_end; text_start = text_start + 1) {
            text_start = memchr(text_start,10,text_end - text_start);
            if (text_start == 0) {
              text_start = text_end;
            }
            line_height = line_height + 1;
          }
          
          current_height = width + (float)line_height * base_font_size;
        }
        
        temp_float2 = current_height - total_height;
      }
      
      // 计算最终布局参数
      base_font_size = total_height + temp_float2;
      max_line_height = line_spacing + max_line_height;
      
      // 调用布局处理函数
      func_0x000180124080(&temp_float1,0);
      render_state = *(longlong *)(engine_context + 0x1af8);
      
      // 设置渲染状态
      *(undefined8 *)(render_state + 0x144) = 0;
      *(float *)(render_state + 0x14c) = line_spacing;
      *(float *)(render_state + 0x150) = total_height;
      *(float *)(render_state + 0x154) = max_line_height;
      *(float *)(render_state + 0x158) = base_font_size;
      
      // 验证布局参数
      font_data = *(longlong *)(engine_context + 0x1af8);
      render_buffer1 = CONCAT44(total_height,line_spacing);
      render_buffer2 = CONCAT44(base_font_size,max_line_height);
      
      if ((((base_font_size < *(float *)(font_data + 0x22c) || base_font_size == *(float *)(font_data + 0x22c)) ||
           (*(float *)(font_data + 0x234) <= total_height)) ||
          ((max_line_height < *(float *)(font_data + 0x228) || max_line_height == *(float *)(font_data + 0x228) ||
           (*(float *)(font_data + 0x230) <= line_spacing)))) && (*(char *)(engine_context + 0x2e38) == '\0')) {
        return;
      }
      
      // 调用布局验证函数
      render_flag = FUN_180128040(&render_buffer1,&render_buffer2,1);
      if (render_flag == '\0') {
        return;
      }
      
      // 设置渲染标志
      *(uint *)(render_state + 0x148) = *(uint *)(render_state + 0x148) | 1;
      return;
    }
    
NORMAL_LAYOUT:
    // 标准布局处理逻辑
    if (0.0 <= base_font_size) {
      if (base_font_size == 0.0) {
        // 处理等宽字体布局
        font_data = *(longlong *)(render_state + 0x210);
        base_font_size = *(float *)(render_state + 0x278) - *(float *)(render_state + 0x40);
        
        if (font_data != 0) {
          line_height = *(int *)(font_data + 0xc) + 1;
          max_lines = *(int *)(font_data + 0xc);
          if (-1 < line_height) {
            max_lines = line_height;
          }
          
          base_font_size = ((*(float *)(font_data + 0x18) - *(float *)(font_data + 0x14)) *
                    *(float *)((longlong)max_lines * 0x1c + *(longlong *)(font_data + 0x38)) +
                   *(float *)(font_data + 0x14)) - *(float *)(render_state + 0x70);
        }
        
        base_font_size = (base_font_size + *(float *)(render_state + 0x40)) - line_spacing;
        if (base_font_size <= 1.0) {
          base_font_size = 1.0;
        }
      }
      else {
        if (0.0 < base_font_size) {
          base_font_size = (*(float *)(render_state + 0x40) - *(float *)(render_state + 0x8c)) + base_font_size;
        }
        base_font_size = base_font_size - line_spacing;
        if (base_font_size <= 1.0) {
          base_font_size = 1.0;
        }
      }
      goto FINAL_LAYOUT;
    }
  }
  
  base_font_size = 0.0;
  
FINAL_LAYOUT:
  font_metrics = *(float **)(engine_context + 0x19f0);
  max_line_height = *(float *)(engine_context + 0x19f8);
  
  if (text_start == text_end) {
    current_height = 0.0;
    temp_float2 = max_line_height;
  }
  else {
    // 计算文本度量
    FUN_180297340(font_metrics,&temp_float1,max_line_height,0x7f7fffff,base_font_size,text_start,text_end,0);
    
    if (0.0 < temp_float1) {
      temp_float1 = temp_float1 - max_line_height / *font_metrics;
    }
    
    current_height = (float)(int)(temp_float1 + 0.95);
  }
  
  stack_temp = CONCAT44(temp_float2,current_height);
  max_line_height = temp_float2 + total_height;
  current_height = current_height + line_spacing;
  
  // 调用最终布局处理
  func_0x000180124080(&stack_temp,0);
  render_state = *(longlong *)(engine_context + 0x1af8);
  
  // 设置最终渲染状态
  *(undefined8 *)(render_state + 0x144) = 0;
  *(float *)(render_state + 0x14c) = line_spacing;
  *(float *)(render_state + 0x150) = total_height;
  *(float *)(render_state + 0x154) = current_height;
  *(float *)(render_state + 0x158) = max_line_height;
  
  // 验证最终布局
  font_data = *(longlong *)(engine_context + 0x1af8);
  render_buffer1 = CONCAT44(total_height,line_spacing);
  render_buffer2 = CONCAT44(max_line_height,current_height);
  
  if ((((*(float *)(font_data + 0x22c) <= max_line_height && max_line_height != *(float *)(font_data + 0x22c)) &&
       (total_height < *(float *)(font_data + 0x234))) &&
      ((*(float *)(font_data + 0x228) <= current_height && current_height != *(float *)(font_data + 0x228) &&
       (line_spacing < *(float *)(font_data + 0x230))))) || (*(char *)(engine_context + 0x2e38) != '\0')) {
    
    // 调用最终布局验证
    render_flag = FUN_180128040(&render_buffer1,&render_buffer2,1);
    layout_params = render_buffer1;
    
    if (render_flag != '\0') {
      *(uint *)(render_state + 0x148) = *(uint *)(render_state + 0x148) | 1;
    }
    
    stack_temp = render_buffer1;
    
    // 处理文本渲染
    if (text_end == 0) {
      render_state = -1;
      do {
        render_state = render_state + 1;
      } while (*(char *)(text_start + render_state) != '\0');
      text_end = render_state + text_start;
    }
    
    if (text_start != text_end) {
      // 获取渲染上下文
      render_buffer1 = *(undefined8 *)(engine_context + 0x16c8);
      render_state = *(longlong *)(*(longlong *)(engine_context + 0x1af8) + 0x2e8);
      render_buffer2 = CONCAT44(*(float *)(engine_context + 0x16d4) * *(float *)(engine_context + 0x1628),
                           *(undefined4 *)(engine_context + 0x16d0));
      text_flags = func_0x000180121e20(&render_buffer1);
      
      line_spacing = *(float *)(engine_context + 0x19f8);
      font_data = *(longlong *)(engine_context + 0x19f0);
      
      if ((text_flags & 0xff000000) != 0) {
        char_ptr = text_end;
        if (text_end == 0) {
          layout_data = -1;
          do {
            layout_data = layout_data + 1;
          } while (*(char *)(text_start + layout_data) != '\0');
          char_ptr = layout_data + text_start;
        }
        
        if (text_start != char_ptr) {
          if (font_data == 0) {
            font_data = *(longlong *)(*(longlong *)(render_state + 0x38) + 8);
          }
          if (line_spacing == 0.0) {
            line_spacing = *(float *)(*(longlong *)(render_state + 0x38) + 0x10);
          }
          
          render_context = (undefined8 *)
                   (*(longlong *)(render_state + 0x68) + -0x10 + (longlong)*(int *)(render_state + 0x60) * 0x10);
          
          render_buffer1 = *render_context;
          render_buffer2 = render_context[1];
          FUN_180297590(font_data,render_state,line_spacing,layout_params,text_flags,&render_buffer1,text_start,char_ptr,base_font_size,0);
        }
      }
      
      if (*(char *)(engine_context + 0x2e38) != '\0') {
        FUN_18013c800(&stack_temp,text_start,text_end);
      }
    }
  }
  return;
}



// 函数：处理高级文本布局和渲染
// 原始函数名：FUN_18010e8e1
// 这是第一个函数的变体，处理更复杂的文本布局场景
void process_advanced_text_layout(longlong render_context, longlong text_params)

{
  undefined8 *layout_engine;
  float font_size;
  float *font_metrics;
  undefined8 render_params;
  int line_count;
  char layout_flag;
  uint render_flags;
  ulonglong text_position;
  longlong engine_state;
  ulonglong text_start;
  ulonglong text_end;
  longlong layout_data;
  longlong font_data;
  longlong render_buffer;
  int char_index;
  int line_height;
  int max_lines;
  float base_size;
  float line_spacing;
  float max_height;
  float current_height;
  float x_offset;
  float y_offset;
  float text_width;
  float text_height;
  float char_size;
  float char_width;
  float char_height;
  float font_ascent;
  float font_descent;
  undefined8 stack_var1;
  undefined8 stack_var2;
  undefined8 stack_var3;
  undefined8 stack_var4;
  undefined8 stack_var5;
  undefined8 stack_var6;
  undefined8 stack_var7;
  undefined8 stack_var8;
  undefined8 stack_var9;
  undefined8 stack_var10;
  undefined8 stack_var11;
  undefined8 stack_var12;
  float temp_float;
  
  // 保存寄存器状态到栈
  *(undefined8 *)(render_context + -0x38) = stack_var1;
  *(undefined8 *)(render_context + -0x30) = stack_var2;
  *(undefined4 *)(render_context + -0x58) = stack_var3;
  *(undefined4 *)(render_context + -0x54) = stack_var4;
  *(undefined4 *)(render_context + -0x50) = stack_var5;
  *(undefined4 *)(render_context + -0x4c) = stack_var6;
  *(undefined4 *)(render_context + -0xa8) = stack_var7;
  *(undefined4 *)(render_context + -0xa4) = stack_var8;
  *(undefined4 *)(render_context + -0xa0) = stack_var9;
  *(undefined4 *)(render_context + -0x9c) = stack_var10;
  
  // 计算文本长度
  if (text_params == 0) {
    text_end = -1;
    do {
      text_end = text_end + 1;
    } while (*(char *)(text_start + text_end) != '\0');
    text_position = text_end + text_start;
  }
  
  // 获取字体参数
  font_size = *(float *)(render_context + 0x1b0);
  base_size = *(float *)(render_context + 0x100);
  text_height = *(float *)(render_context + 0x128) + *(float *)(render_context + 0x104);
  
  // 处理长文本布局
  if ((longlong)(text_position - text_start) < 0x7d1) {
    if (font_size >= 0.0) goto NORMAL_LAYOUT_ADVANCED;
  }
  else {
    if (font_size < 0.0) {
      char_width = *(float *)(render_context + 0x22c);
      stack_var1 = *(undefined8 *)(render_context + 0x228);
      char_height = *(float *)(render_context + 0x234);
      stack_var2 = *(undefined8 *)(render_context + 0x230);
      
      current_height = 0.0;
      font_size = *(float *)(engine_state + 0x19f8);
      text_width = 0.0;
      *(undefined4 *)(layout_data + 0x48) = 0;
      *(undefined4 *)(layout_data + 0x4c) = 0;
      
      if (text_height <= char_height) {
        *(float *)(layout_data + 0x40) = base_size;
        *(float *)(layout_data + 0x44) = text_height;
        line_height = 0;
        current_height = text_height;
        
        if (*(char *)(engine_state + 0x2e38) == '\0') {
          *(float *)(layout_data + 0x44) = text_height;
          max_lines = (int)((char_width - text_height) / font_size);
          
          if (0 < max_lines) {
            line_count = line_height;
            char_index = 0;
            
            if (text_start < text_position) {
              do {
                line_count = char_index;
                if (max_lines <= line_count) break;
                
                text_position = memchr(text_start,10,text_position - text_start);
                if (text_position == 0) {
                  text_position = text_end;
                }
                
                line_count = line_count + 1;
                text_start = text_position + 1;
                char_index = line_count;
              } while (text_start < text_position);
            }
            
            current_height = (float)line_count * font_size + text_height;
            *(float *)(layout_data + 0x44) = current_height;
          }
        }
        
        // 处理文本行布局（简化版本）
        if (text_start < text_position) {
          char_width = current_height;
          char_height = current_height;
          
          // 设置渲染参数
          stack_var3 = stack_var11;
          stack_var4 = stack_var12;
          stack_var5 = stack_var7;
          stack_var6 = stack_var8;
          stack_var7 = stack_var9;
          stack_var8 = stack_var10;
          
          do {
            char_width = char_width + font_size;
            engine_state = *(longlong *)(engine_state + 0x1af8);
            
            // 检查边界条件
            if (((((char_width < *(float *)(engine_state + 0x22c) || char_width == *(float *)(engine_state + 0x22c)) ||
                  (*(float *)(engine_state + 0x234) <= current_height)) ||
                 (base_size + 3.4028235e+38 < *(float *)(engine_state + 0x228) ||
                  base_size + 3.4028235e+38 == *(float *)(engine_state + 0x228))) ||
                (*(float *)(engine_state + 0x230) <= base_size)) && (*(char *)(engine_state + 0x2e38) == '\0')) {
              break;
            }
            
            // 查找换行符并处理
            text_position = memchr(text_start,10,text_position - text_start);
            font_metrics = *(float **)(engine_state + 0x19f0);
            char_size = *(float *)(engine_state + 0x19f8);
            
            if (text_position == 0) {
              text_position = text_end;
            }
            
            // 计算字符宽度
            if (text_start == text_position) {
              char_size = 0.0;
            }
            else {
              FUN_180297340(font_metrics,&stack_var1,char_size,0x7f7fffff,0xbf800000);
              temp_float = fStack0000000000000050;
              
              if (0.0 < fStack0000000000000050) {
                temp_float = fStack0000000000000050 - char_size / *font_metrics;
              }
              
              char_size = (float)(int)(temp_float + 0.95);
              stack_var1 = CONCAT44(stack_var4,char_size);
            }
            
            // 更新最大宽度
            if (text_width < char_size) {
              *(float *)(layout_data + 0x48) = char_size;
              text_width = char_size;
            }
            
            // 渲染文本行
            FUN_180122320(*(undefined8 *)(layout_data + 0x40),text_start,text_position,0);
            engine_state = _DAT_180c8a9b0;
            char_height = char_height + font_size;
            text_start = text_position + 1;
            current_height = current_height + font_size;
            *(float *)(layout_data + 0x44) = char_height;
          } while (text_start < text_position);
          
          // 处理剩余文本
          while (text_start < text_position) {
            text_position = memchr(text_start,10,text_position - text_start);
            if (text_position == 0) {
              text_position = text_end;
            }
            line_height = line_height + 1;
            text_start = text_position + 1;
          }
          
          current_height = char_height + (float)line_height * font_size;
        }
        
        current_height = current_height - text_height;
        *(float *)(layout_data + 0x4c) = current_height;
      }
      
      // 计算最终布局
      current_height = text_height + current_height;
      text_width = base_size + text_width;
      
      // 调用布局处理函数
      func_0x000180124080(layout_data + 0x48,0);
      engine_state = *(longlong *)(engine_state + 0x1af8);
      
      // 设置渲染状态
      *(undefined8 *)(engine_state + 0x144) = 0;
      *(float *)(engine_state + 0x14c) = base_size;
      *(float *)(engine_state + 0x150) = text_height;
      *(float *)(engine_state + 0x154) = text_width;
      *(float *)(engine_state + 0x158) = current_height;
      
      // 验证布局参数
      font_data = *(longlong *)(engine_state + 0x1af8);
      stack_var1 = CONCAT44(text_height,base_size);
      stack_var2 = CONCAT44(current_height,text_width);
      
      if ((((current_height < *(float *)(font_data + 0x22c) || current_height == *(float *)(font_data + 0x22c)) ||
           (*(float *)(font_data + 0x234) <= text_height)) ||
          ((text_width < *(float *)(font_data + 0x228) || text_width == *(float *)(font_data + 0x228) ||
           (*(float *)(font_data + 0x230) <= base_size)))) && (*(char *)(engine_state + 0x2e38) == '\0')) {
        return;
      }
      
      // 调用布局验证
      layout_flag = FUN_180128040(&stack_var1,&stack_var2,1);
      if (layout_flag == '\0') {
        return;
      }
      
      *(uint *)(engine_state + 0x148) = *(uint *)(engine_state + 0x148) | 1;
      return;
    }
    
NORMAL_LAYOUT_ADVANCED:
    // 标准布局处理
    if (0.0 <= font_size) {
      if (font_size == 0.0) {
        // 等宽字体处理
        engine_state = *(longlong *)(render_context + 0x210);
        font_size = *(float *)(render_context + 0x278) - *(float *)(render_context + 0x40);
        
        if (engine_state != 0) {
          line_height = *(int *)(engine_state + 0xc) + 1;
          max_lines = *(int *)(engine_state + 0xc);
          if (-1 < line_height) {
            max_lines = line_height;
          }
          
          font_size = ((*(float *)(engine_state + 0x18) - *(float *)(engine_state + 0x14)) *
                    *(float *)((longlong)max_lines * 0x1c + *(longlong *)(engine_state + 0x38)) +
                   *(float *)(engine_state + 0x14)) - *(float *)(render_context + 0x70);
        }
        
        font_size = (font_size + *(float *)(render_context + 0x40)) - base_size;
        if (font_size <= 1.0) {
          font_size = 1.0;
        }
      }
      else {
        if (0.0 < font_size) {
          font_size = (*(float *)(render_context + 0x40) - *(float *)(render_context + 0x8c)) + font_size;
        }
        font_size = font_size - base_size;
        if (font_size <= 1.0) {
          font_size = 1.0;
        }
      }
      goto FINAL_LAYOUT_ADVANCED;
    }
  }
  
  font_size = 0.0;
  
FINAL_LAYOUT_ADVANCED:
  font_metrics = *(float **)(engine_state + 0x19f0);
  char_width = *(float *)(engine_state + 0x19f8);
  
  if (text_start == text_position) {
    font_size = 0.0;
  }
  else {
    FUN_180297340(font_metrics,layout_data + 0x48,char_width,0x7f7fffff,font_size);
    font_size = *(float *)(layout_data + 0x48);
    
    if (0.0 < font_size) {
      font_size = font_size - char_width / *font_metrics;
    }
    
    char_width = *(float *)(layout_data + 0x4c);
    font_size = (float)(int)(font_size + 0.95);
  }
  
  *(float *)(layout_data + 0x44) = char_width;
  *(float *)(layout_data + 0x40) = font_size;
  char_width = char_width + text_height;
  font_size = font_size + base_size;
  
  // 调用最终布局处理
  func_0x000180124080(layout_data + 0x40,0);
  engine_state = *(longlong *)(engine_state + 0x1af8);
  
  // 设置最终状态
  *(undefined8 *)(engine_state + 0x144) = 0;
  *(float *)(engine_state + 0x14c) = base_size;
  *(float *)(engine_state + 0x150) = text_height;
  *(float *)(engine_state + 0x154) = font_size;
  *(float *)(engine_state + 0x158) = char_width;
  
  // 验证最终布局
  font_data = *(longlong *)(engine_state + 0x1af8);
  stack_var1 = CONCAT44(text_height,base_size);
  stack_var2 = CONCAT44(char_width,font_size);
  
  if ((((*(float *)(font_data + 0x22c) <= char_width && char_width != *(float *)(font_data + 0x22c)) &&
       (text_height < *(float *)(font_data + 0x234))) &&
      ((*(float *)(font_data + 0x228) <= font_size && font_size != *(float *)(font_data + 0x228) &&
       (base_size < *(float *)(font_data + 0x230))))) || (*(char *)(engine_state + 0x2e38) != '\0')) {
    
    layout_flag = FUN_180128040(&stack_var1,&stack_var2,1);
    render_params = stack_var1;
    
    if (layout_flag != '\0') {
      *(uint *)(engine_state + 0x148) = *(uint *)(engine_state + 0x148) | 1;
    }
    
    engine_state = *(longlong *)(engine_state + 0x1af8);
    *(undefined8 *)(layout_data + 0x40) = stack_var1;
    
    // 处理最终文本渲染
    if (text_position == 0) {
      font_data = -1;
      do {
        font_data = font_data + 1;
      } while (*(char *)(text_start + font_data) != '\0');
      text_position = font_data + text_start;
    }
    
    if (text_start != text_position) {
      stack_var1 = *(undefined8 *)(engine_state + 0x16c8);
      engine_state = *(longlong *)(engine_state + 0x2e8);
      stack_var2 =
           CONCAT44(*(float *)(engine_state + 0x16d4) * *(float *)(engine_state + 0x1628),
                    *(undefined4 *)(engine_state + 0x16d0));
      render_flags = func_0x000180121e20(&stack_var1);
      
      base_size = *(float *)(engine_state + 0x19f8);
      font_data = *(longlong *)(engine_state + 0x19f0);
      
      if ((render_flags & 0xff000000) != 0) {
        if (text_position == 0) {
          layout_data = -1;
          do {
            layout_data = layout_data + 1;
          } while (*(char *)(text_start + layout_data) != '\0');
          text_position = layout_data + text_start;
        }
        
        if (text_start != text_position) {
          if (font_data == 0) {
            font_data = *(longlong *)(*(longlong *)(engine_state + 0x38) + 8);
          }
          if (base_size == 0.0) {
            base_size = *(float *)(*(longlong *)(engine_state + 0x38) + 0x10);
          }
          
          layout_engine = (undefined8 *)
                   (*(longlong *)(engine_state + 0x68) + -0x10 + (longlong)*(int *)(engine_state + 0x60) * 0x10);
          
          stack_var1 = *layout_engine;
          stack_var2 = layout_engine[1];
          FUN_180297590(font_data,engine_state,base_size,render_params,render_flags);
        }
      }
      
      if (*(char *)(engine_state + 0x2e38) != '\0') {
        FUN_18013c800(layout_data + 0x40);
      }
    }
  }
  return;
}



// 函数：处理优化的文本渲染
// 原始函数名：FUN_18010e97b
// 这是一个简化的文本渲染函数，处理基本的文本布局和渲染
void process_optimized_text_rendering(undefined8 render_params)

{
  float font_size;
  float line_height;
  float *font_metrics;
  longlong render_context;
  char render_flag;
  ulonglong text_start;
  ulonglong text_end;
  ulonglong text_position;
  longlong layout_data;
  longlong engine_state;
  longlong font_data;
  uint text_flags;
  uint line_count;
  int char_index;
  float char_width;
  float text_width;
  float text_height;
  float base_height;
  float max_width;
  float current_width;
  float x_position;
  float y_position;
  float font_ascent;
  float font_descent;
  float temp_float1;
  float temp_float2;
  float temp_float3;
  undefined4 render_param1;
  undefined4 render_param2;
  undefined4 render_param3;
  undefined4 render_param4;
  undefined4 render_param5;
  undefined4 render_param6;
  float stack_float1;
  float stack_float2;
  float stack_float3;
  undefined4 stack_param1;
  undefined4 stack_param2;
  undefined4 stack_param3;
  undefined4 stack_param4;
  undefined4 stack_param5;
  undefined4 stack_param6;
  
  // 初始化渲染参数
  stack_float1 = (float)render_params;
  text_height = 0.0;
  font_size = *(float *)(engine_state + 0x19f8);
  text_width = 0.0;
  *(undefined4 *)(layout_data + 0x48) = 0;
  *(undefined4 *)(layout_data + 0x4c) = 0;
  render_flag = (char)text_flags;
  
  // 检查文本高度边界
  if (font_ascent <= text_width) {
    *(float *)(layout_data + 0x40) = font_descent;
    *(float *)(layout_data + 0x44) = font_ascent;
    line_count = (uint)text_flags;
    text_height = font_ascent;
    
    if (*(char *)(engine_state + 0x2e38) == render_flag) {
      *(float *)(layout_data + 0x44) = font_ascent;
      char_index = (int)(((float)((ulonglong)render_params >> 0x20) - font_ascent) / font_size);
      
      if (0 < char_index) {
        text_end = text_flags & 0xffffffff;
        text_position = line_count;
        
        if (text_start < text_end) {
          do {
            text_position = (uint)text_end;
            if (char_index <= (int)text_position) break;
            
            text_start = memchr(text_start,10,text_end - text_start);
            if (text_start == 0) {
              text_start = text_end;
            }
            
            text_position = text_position + 1;
            text_end = (ulonglong)text_position;
            text_start = text_start + 1;
          } while (text_start < text_end);
        }
        
        text_height = (float)(int)text_position * font_size + font_ascent;
        *(float *)(layout_data + 0x44) = text_height;
      }
    }
    
    // 处理文本行布局
    if (text_start < text_end) {
      char_width = text_height;
      line_height = text_height;
      
      // 设置渲染参数
      render_param1 = render_param5;
      render_param2 = render_param6;
      render_param3 = render_param7;
      render_param4 = render_param8;
      render_param5 = render_param9;
      render_param6 = render_param10;
      
      do {
        char_width = char_width + font_size;
        render_context = *(longlong *)(engine_state + 0x1af8);
        
        // 检查边界条件
        if (((((char_width < *(float *)(render_context + 0x22c) || char_width == *(float *)(render_context + 0x22c)) ||
              (*(float *)(render_context + 0x234) <= text_height)) ||
             (font_descent + 3.4028235e+38 < *(float *)(render_context + 0x228) ||
              font_descent + 3.4028235e+38 == *(float *)(render_context + 0x228))) ||
            (*(float *)(render_context + 0x230) <= font_descent)) &&
           (*(char *)(engine_state + 0x2e38) == render_flag)) {
          break;
        }
        
        // 查找换行符
        text_end = memchr(text_start,10,text_end - text_start);
        font_metrics = *(float **)(engine_state + 0x19f0);
        line_height = *(float *)(engine_state + 0x19f8);
        
        if (text_end == 0) {
          text_end = text_end;
        }
        
        char_width = font_ascent;
        if (text_start != text_end) {
          // 计算字符宽度
          FUN_180297340(font_metrics,&stack_float1,line_height,0x7f7fffff,0xbf800000);
          
          if (font_ascent < stack_float1) {
            stack_float1 = stack_float1 - line_height / *font_metrics;
          }
          
          stack_float1 = (float)(int)(stack_float1 + 0.95);
          char_width = stack_float1;
        }
        
        // 更新最大宽度
        if (text_width < char_width) {
          *(float *)(layout_data + 0x48) = char_width;
          text_width = char_width;
        }
        
        // 渲染文本行
        FUN_180122320(*(undefined8 *)(layout_data + 0x40),text_start,text_end,0);
        engine_state = _DAT_180c8a9b0;
        line_height = line_height + font_size;
        text_start = text_end + 1;
        text_height = text_height + font_size;
        *(float *)(layout_data + 0x44) = line_height;
      } while (text_start < text_end);
      
      // 处理剩余文本
      text_end = text_flags & 0xffffffff;
      while (text_start < text_end) {
        text_position = memchr(text_start,10,text_end - text_start);
        if (text_position == 0) {
          text_position = text_end;
        }
        
        line_count = (int)text_end + 1;
        text_end = (ulonglong)line_count;
        text_start = text_position + 1;
      }
      
      text_height = line_height + (float)(int)line_count * font_size;
    }
    
    text_height = text_height - font_ascent;
    *(float *)(layout_data + 0x4c) = text_height;
  }
  
  // 计算最终布局
  text_height = font_ascent + text_height;
  text_width = font_descent + text_width;
  
  // 调用布局处理函数
  func_0x000180124080(layout_data + 0x48);
  render_context = *(longlong *)(engine_state + 0x1af8);
  
  // 设置渲染状态
  *(ulonglong *)(render_context + 0x144) = text_flags;
  *(float *)(render_context + 0x14c) = font_descent;
  *(float *)(render_context + 0x150) = font_ascent;
  *(float *)(render_context + 0x154) = text_width;
  *(float *)(render_context + 0x158) = text_height;
  
  // 验证最终布局
  font_data = *(longlong *)(engine_state + 0x1af8);
  
  if (((((*(float *)(font_data + 0x22c) <= text_height && text_height != *(float *)(font_data + 0x22c)) &&
        (font_ascent < *(float *)(font_data + 0x234))) &&
       ((*(float *)(font_data + 0x228) <= text_width && text_width != *(float *)(font_data + 0x228) &&
        (font_descent < *(float *)(font_data + 0x230))))) || (*(char *)(engine_state + 0x2e38) != render_flag))
     && (stack_float2 = text_width, stack_float3 = text_height,
        render_flag = FUN_180128040(&stack_float1,&stack_float2,1), render_flag != '\0')) {
    *(uint *)(render_context + 0x148) = *(uint *)(render_context + 0x148) | 1;
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

