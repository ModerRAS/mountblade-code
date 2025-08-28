#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part080.c - 文本渲染引擎模块
// 包含3个函数：文本布局计算、文本渲染处理、文本区域管理

/**
 * 函数：calculate_text_layout - 计算文本布局
 * 功能：根据给定的文本内容和渲染参数，计算文本的布局信息
 * 参数：
 *   param_1 - 渲染上下文指针
 *   param_2 - 文本内容指针
 */
void calculate_text_layout(ulonglong render_context, ulonglong text_content)
{
  undefined8 *layout_data;
  float *font_metrics;
  undefined8 temp_data;
  int line_count;
  char layout_flag;
  uint text_flags;
  ulonglong text_end;
  longlong context_base;
  longlong render_data;
  longlong font_data;
  longlong text_length;
  longlong char_position;
  int current_line;
  int total_lines;
  int max_lines;
  float line_height;
  float font_size;
  float vertical_offset;
  float horizontal_offset;
  float text_width;
  float text_height;
  float max_width;
  float min_width;
  float current_x;
  float current_y;
  float baseline;
  undefined8 bounding_box_data;
  float temp_width;
  float temp_height;
  undefined8 margin_data;
  undefined8 padding_data;
  
  context_base = _DAT_180c8a9b0;  // 获取全局渲染上下文
  *(undefined1 *)(*(longlong *)(context_base + 0x1af8) + 0xb1) = 1;  // 设置布局标志
  render_data = *(longlong *)(context_base + 0x1af8);  // 获取渲染数据指针
  if (*(char *)(render_data + 0xb4) != '\0') {  // 检查是否已完成布局
    return;
  }
  if (text_content == 0) {  // 如果文本内容为空，计算长度
    text_length = -1;
    do {
      text_length = text_length + 1;
    } while (*(char *)(text_content + text_length) != '\0');
    text_end = text_length + text_content;
  }
  line_height = *(float *)(render_data + 0x1b0);  // 获取行高
  font_size = *(float *)(render_data + 0x100);  // 获取字体大小
  text_height = *(float *)(render_data + 0x128) + *(float *)(render_data + 0x104);  // 计算文本高度
  if ((longlong)(text_end - text_content) < 0x7d1) {  // 检查文本长度
    if (0.0 <= line_height) goto LAYOUT_PROCESS;  // 如果行高有效，跳转到布局处理
  }
  else {
    if (0.0 > line_height) {  // 处理负行高情况
      margin_data = *(undefined8 *)(render_data + 0x228);  // 获取边距数据
      padding_data = *(undefined8 *)(render_data + 0x230);  // 获取内边距数据
      line_height = *(float *)(context_base + 0x19f8);  // 获取上下文行高
      max_width = 0.0;  // 初始化最大宽度
      temp_width = 0.0;  // 临时宽度
      temp_height = 0.0;  // 临时高度
      if (text_height <= *(float *)(render_data + 0x234)) {  // 检查文本高度限制
        bounding_box_data = CONCAT44(text_height, font_size);  // 构建边界框数据
        total_lines = 0;  // 总行数
        baseline = text_height;  // 基线位置
        if (*(char *)(context_base + 0x2e38) == '\0') {  // 检查布局标志
          bounding_box_data = CONCAT44(text_height, font_size);  // 重新构建边界框
          max_lines = (int)((*(float *)(render_data + 0x22c) - text_height) / line_height);  // 计算最大行数
          if (0 < max_lines) {  // 如果有行数限制
            current_line = total_lines;
            line_count = 0;
            if (text_content < text_end) {  // 遍历文本内容
              do {
                current_line = line_count;
                if (max_lines <= current_line) break;  // 超过最大行数则停止
                text_content = memchr(text_content, 10, text_end - text_content);  // 查找换行符
                if (text_content == 0) {
                  text_content = text_end;  // 到达文本末尾
                }
                current_line = current_line + 1;  // 增加行数
                text_content = text_content + 1;  // 移动到下一行开始
                line_count = current_line;
              } while (text_content < text_end);
            }
            baseline = (float)current_line * line_height + text_height;  // 计算基线位置
            bounding_box_data = CONCAT44(baseline, (undefined4)bounding_box_data);  // 更新边界框
          }
        }
        if (text_content < text_end) {  // 处理剩余文本
          horizontal_offset = baseline;  // 水平偏移
          vertical_offset = baseline;  // 垂直偏移
          do {
            horizontal_offset = horizontal_offset + line_height;  // 增加水平偏移
            render_data = *(longlong *)(context_base + 0x1af8);  // 重新获取渲染数据
            if (((((horizontal_offset < *(float *)(render_data + 0x22c) || horizontal_offset == *(float *)(render_data + 0x22c)) ||
                  (text_height <= baseline)) ||
                 (font_size + 3.4028235e+38 < *(float *)(render_data + 0x228) ||
                  font_size + 3.4028235e+38 == *(float *)(render_data + 0x228))) ||
                (*(float *)(render_data + 0x230) <= font_size)) && (*(char *)(context_base + 0x2e38) == '\0'))
              break;
            text_end = memchr(text_content, 10, text_end - text_content);  // 查找换行符
            font_metrics = *(float **)(context_base + 0x19f0);  // 获取字体度量
            font_size = *(float *)(context_base + 0x19f8);  // 获取字体大小
            if (text_end == 0) {
              text_end = text_end;  // 到达文本末尾
            }
            if (text_content == text_end) {
              font_size = 0.0;  // 空行，字体大小为0
            }
            else {
              measure_text_width(font_metrics, &margin_data, font_size, 0x7f7fffff, 0xbf800000, text_content, text_end, 0);  // 测量文本宽度
              text_width = (float)margin_data;
              if (0.0 < (float)margin_data) {
                text_width = (float)margin_data - font_size / *font_metrics;  // 调整文本宽度
              }
              font_size = (float)(int)(text_width + 0.95);  // 四舍五入字体大小
              margin_data = CONCAT44(margin_data._4_4_, font_size);  // 更新边距数据
            }
            if (max_width < font_size) {
              max_width = font_size;  // 更新最大宽度
              temp_width = font_size;  // 保存临时宽度
            }
            render_text_line(bounding_box_data, text_content, text_end, 0);  // 渲染文本行
            vertical_offset = vertical_offset + line_height;  // 增加垂直偏移
            text_content = text_end + 1;  // 移动到下一行
            baseline = baseline + line_height;  // 更新基线位置
            bounding_box_data = CONCAT44(vertical_offset, (undefined4)bounding_box_data);  // 更新边界框
            context_base = _DAT_180c8a9b0;  // 重新获取上下文
          } while (text_content < text_end);
          for (; text_content < text_end; text_content = text_content + 1) {
            text_content = memchr(text_content, 10, text_end - text_content);  // 查找剩余换行符
            if (text_content == 0) {
              text_content = text_end;  // 到达文本末尾
            }
            total_lines = total_lines + 1;  // 增加总行数
          }
          baseline = vertical_offset + (float)total_lines * line_height;  // 计算最终基线位置
        }
        temp_height = baseline - text_height;  // 计算高度差
      }
      text_height = text_height + temp_height;  // 更新文本高度
      max_width = font_size + max_width;  // 更新最大宽度
      update_text_metrics(&temp_width, 0);  // 更新文本度量
      render_data = *(longlong *)(context_base + 0x1af8);  // 重新获取渲染数据
      *(undefined8 *)(render_data + 0x144) = 0;  // 清除渲染标志
      *(float *)(render_data + 0x14c) = font_size;  // 设置字体大小
      *(float *)(render_data + 0x150) = text_height;  // 设置文本高度
      *(float *)(render_data + 0x154) = max_width;  // 设置最大宽度
      *(float *)(render_data + 0x158) = text_height;  // 设置最终高度
      char_position = *(longlong *)(context_base + 0x1af8);  // 获取字符位置
      margin_data = CONCAT44(text_height, font_size);  // 构建边距数据
      padding_data = CONCAT44(text_height, max_width);  // 构建内边距数据
      if ((((text_height < *(float *)(char_position + 0x22c) || text_height == *(float *)(char_position + 0x22c)) ||
           (text_height <= text_height)) ||
          ((max_width < *(float *)(char_position + 0x228) || max_width == *(float *)(char_position + 0x228) ||
           (font_size <= *(float *)(char_position + 0x230))))) && (*(char *)(context_base + 0x2e38) == '\0')) {
        return;  // 如果在边界内，直接返回
      }
      layout_flag = validate_layout(&margin_data, &padding_data, 1);  // 验证布局
      if (layout_flag == '\0') {
        return;  // 布局验证失败，返回
      }
      *(uint *)(render_data + 0x148) = *(uint *)(render_data + 0x148) | 1;  // 设置布局完成标志
      return;
    }
LAYOUT_PROCESS:
    if (0.0 <= line_height) {  // 处理正行高情况
      if (line_height == 0.0) {  // 行高为0的特殊处理
        text_length = *(longlong *)(render_data + 0x210);  // 获取文本长度
        line_height = *(float *)(render_data + 0x278) - *(float *)(render_data + 0x40);  // 计算行高
        if (text_length != 0) {  // 如果有文本长度数据
          total_lines = *(int *)(text_length + 0xc) + 1;  // 计算总行数
          max_lines = *(int *)(text_length + 0xc);  // 获取最大行数
          if (-1 < total_lines) {
            max_lines = total_lines;  // 调整最大行数
          }
          line_height = ((*(float *)(text_length + 0x18) - *(float *)(text_length + 0x14)) *
                        *(float *)((longlong)max_lines * 0x1c + *(longlong *)(text_length + 0x38)) +
                       *(float *)(text_length + 0x14)) - *(float *)(render_data + 0x70);  // 重新计算行高
        }
        line_height = (line_height + *(float *)(render_data + 0x40)) - font_size;  // 调整行高
        if (line_height <= 1.0) {
          line_height = 1.0;  // 最小行高为1
        }
      }
      else {
        if (0.0 < line_height) {  // 正行高处理
          line_height = (*(float *)(render_data + 0x40) - *(float *)(render_data + 0x8c)) + line_height;  // 调整行高
        }
        line_height = line_height - font_size;  // 减去字体大小
        if (line_height <= 1.0) {
          line_height = 1.0;  // 最小行高为1
        }
      }
      goto LAYOUT_FINALIZE;  // 跳转到最终处理
    }
  }
  line_height = 0.0;  // 行高为0
LAYOUT_FINALIZE:
  font_metrics = *(float **)(context_base + 0x19f0);  // 获取字体度量
  max_width = *(float *)(context_base + 0x19f8);  // 获取最大宽度
  if (text_content == text_end) {
    baseline = 0.0;  // 空文本，基线为0
    temp_height = max_width;  // 高度为最大宽度
  }
  else {
    measure_text_width(font_metrics, &temp_width, max_width, 0x7f7fffff, line_height, text_content, text_end, 0);  // 测量文本宽度
    if (0.0 < temp_width) {
      temp_width = temp_width - max_width / *font_metrics;  // 调整文本宽度
    }
    baseline = (float)(int)(temp_width + 0.95);  // 四舍五入基线位置
  }
  bounding_box_data = CONCAT44(temp_height, baseline);  // 构建边界框
  max_width = temp_height + text_height;  // 更新最大宽度
  baseline = baseline + font_size;  // 更新基线位置
  update_text_metrics(&bounding_box_data, 0);  // 更新文本度量
  render_data = *(longlong *)(context_base + 0x1af8);  // 重新获取渲染数据
  *(undefined8 *)(render_data + 0x144) = 0;  // 清除渲染标志
  *(float *)(render_data + 0x14c) = font_size;  // 设置字体大小
  *(float *)(render_data + 0x150) = text_height;  // 设置文本高度
  *(float *)(render_data + 0x154) = baseline;  // 设置基线位置
  *(float *)(render_data + 0x158) = max_width;  // 设置最大宽度
  text_length = *(longlong *)(context_base + 0x1af8);  // 获取文本长度
  margin_data = CONCAT44(text_height, font_size);  // 构建边距数据
  padding_data = CONCAT44(max_width, baseline);  // 构建内边距数据
  if ((((*(float *)(text_length + 0x22c) <= max_width && max_width != *(float *)(text_length + 0x22c)) &&
       (text_height < *(float *)(text_length + 0x234))) &&
      ((*(float *)(text_length + 0x228) <= baseline && baseline != *(float *)(text_length + 0x228) &&
       (font_size < *(float *)(text_length + 0x230))))) || (*(char *)(context_base + 0x2e38) != '\0')) {
    layout_flag = validate_layout(&margin_data, &padding_data, 1);  // 验证布局
    temp_data = margin_data;
    if (layout_flag != '\0') {
      *(uint *)(render_data + 0x148) = *(uint *)(render_data + 0x148) | 1;  // 设置布局完成标志
    }
    bounding_box_data = margin_data;
    if (text_end == 0) {  // 如果文本结束为空，计算长度
      render_data = -1;
      do {
        render_data = render_data + 1;
      } while (*(char *)(text_content + render_data) != '\0');
      text_end = render_data + text_content;
    }
    if (text_content != text_end) {  // 如果有文本内容
      margin_data = *(undefined8 *)(context_base + 0x16c8);  // 获取边距数据
      render_data = *(longlong *)(*(longlong *)(context_base + 0x1af8) + 0x2e8);  // 获取渲染数据
      padding_data = CONCAT44(*(float *)(context_base + 0x16d4) * *(float *)(context_base + 0x1628),
                           *(undefined4 *)(context_base + 0x16d0));  // 构建内边距数据
      text_flags = create_text_texture(&margin_data);  // 创建文本纹理
      font_size = *(float *)(context_base + 0x19f8);  // 获取字体大小
      text_length = *(longlong *)(context_base + 0x19f0);  // 获取文本长度
      if ((text_flags & 0xff000000) != 0) {  // 检查纹理标志
        text_end = text_end;  // 保存文本结束位置
        if (text_end == 0) {  // 如果文本结束为空，计算长度
          char_position = -1;
          do {
            char_position = char_position + 1;
          } while (*(char *)(text_content + char_position) != '\0');
          text_end = char_position + text_content;
        }
        if (text_content != text_end) {  // 如果有文本内容
          if (text_length == 0) {
            text_length = *(longlong *)(*(longlong *)(render_data + 0x38) + 8);  // 获取文本长度
          }
          if (font_size == 0.0) {
            font_size = *(float *)(*(longlong *)(render_data + 0x38) + 0x10);  // 获取字体大小
          }
          layout_data = (undefined8 *)
                   (*(longlong *)(render_data + 0x68) + -0x10 + (longlong)*(int *)(render_data + 0x60) * 0x10);  // 获取布局数据
          margin_data = *layout_data;  // 获取边距数据
          padding_data = layout_data[1];  // 获取内边距数据
          render_text_with_texture(text_length, render_data, font_size, temp_data, text_flags, &margin_data, text_content, text_end, line_height, 0);  // 渲染文本
        }
      }
      if (*(char *)(context_base + 0x2e38) != '\0') {  // 检查布局标志
        render_text_to_cache(&bounding_box_data, text_content, text_end);  // 渲染文本到缓存
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 函数：render_text_with_params - 使用指定参数渲染文本
 * 功能：根据渲染参数和文本内容，进行文本渲染处理
 * 参数：
 *   param_1 - 渲染参数结构体指针
 *   param_2 - 文本内容指针
 */
void render_text_with_params(longlong render_params, longlong text_content)

{
  undefined8 *texture_data;
  float font_scale;
  float *font_metrics;
  undefined8 render_flags;
  int line_count;
  char render_status;
  uint texture_flags;
  ulonglong text_end;
  longlong context_data;
  longlong render_context;
  longlong font_data;
  longlong text_length;
  ulonglong text_ptr;
  longlong stack_base;
  longlong context_base;
  longlong text_base;
  ulonglong text_position;
  int current_line;
  int total_lines;
  int max_lines;
  float text_width;
  float text_height;
  float baseline;
  float line_spacing;
  float char_spacing;
  float max_width;
  float min_width;
  undefined8 xmm6_data_a;
  undefined8 xmm6_data_b;
  undefined4 xmm8_data_a;
  undefined4 xmm8_data_b;
  undefined4 xmm8_data_c;
  undefined4 xmm8_data_d;
  undefined4 xmm9_data_a;
  float offset_x;
  undefined4 xmm9_data_c;
  float offset_y;
  undefined4 xmm12_data_a;
  undefined4 xmm12_data_c;
  undefined4 xmm13_data_a;
  float spacing;
  undefined4 xmm13_data_b;
  undefined4 xmm13_data_c;
  undefined4 xmm13_data_d;
  undefined4 xmm15_data_a;
  undefined4 xmm15_data_c;
  float texture_width;
  undefined4 texture_height;
  undefined8 stack_data_58;
  undefined4 stack_data_60;
  undefined4 stack_data_68;
  undefined4 stack_data_90;
  undefined4 stack_data_98;
  undefined4 stack_data_a0;
  undefined4 stack_data_a8;
  undefined4 stack_data_b0;
  undefined4 stack_data_b8;
  undefined4 stack_data_c0;
  undefined4 stack_data_c8;
  
  // 保存寄存器数据到栈
  *(undefined8 *)(stack_base + -0x38) = xmm6_data_a;
  *(undefined8 *)(stack_base + -0x30) = xmm6_data_b;
  *(undefined4 *)(stack_base + -0x58) = xmm8_data_a;
  *(undefined4 *)(stack_base + -0x54) = xmm8_data_b;
  *(undefined4 *)(stack_base + -0x50) = xmm8_data_c;
  *(undefined4 *)(stack_base + -0x4c) = xmm8_data_d;
  *(undefined4 *)(stack_base + -0xa8) = xmm13_data_a;
  *(undefined4 *)(stack_base + -0xa4) = xmm13_data_b;
  *(undefined4 *)(stack_base + -0xa0) = xmm13_data_c;
  *(undefined4 *)(stack_base + -0x9c) = xmm13_data_d;
  
  if (text_content == 0) {  // 如果文本内容为空，计算长度
    text_length = -1;
    do {
      text_length = text_length + 1;
    } while (*(char *)(text_base + text_length) != '\0');
    text_ptr = text_length + text_base;
  }
  line_spacing = *(float *)(render_params + 0x1b0);  // 获取行间距
  font_scale = *(float *)(render_params + 0x100);  // 获取字体缩放
  text_height = *(float *)(render_params + 0x128) + *(float *)(render_params + 0x104);  // 计算文本高度
  if ((longlong)(text_ptr - text_base) < 0x7d1) {  // 检查文本长度
    if (line_spacing >= 0.0) goto TEXT_RENDER_PROCESS;  // 如果行间距有效，跳转到渲染处理
  }
  else {
    if (line_spacing < 0.0) {  // 处理负行间距情况
      fVar20 = *(float *)(param_1 + 0x22c);
      _fStack0000000000000050 = *(undefined8 *)(param_1 + 0x228);
      fVar18 = *(float *)(param_1 + 0x234);
      in_stack_00000058 = *(undefined8 *)(param_1 + 0x230);
      fVar17 = 0.0;
      fVar19 = *(float *)(unaff_RSI + 0x19f8);
      fVar21 = 0.0;
      *(undefined4 *)(unaff_RBP + 0x48) = 0;
      *(undefined4 *)(unaff_RBP + 0x4c) = 0;
      if (fVar22 <= fVar18) {
        *(float *)(unaff_RBP + 0x40) = fVar2;
        *(float *)(unaff_RBP + 0x44) = fVar22;
        iVar13 = 0;
        fVar17 = fVar22;
        if (*(char *)(unaff_RSI + 0x2e38) == '\0') {
          *(float *)(unaff_RBP + 0x44) = fVar22;
          iVar14 = (int)((fVar20 - fVar22) / fVar19);
          if (0 < iVar14) {
            iVar12 = iVar13;
            iVar5 = 0;
            if (unaff_RDI < unaff_RBX) {
              do {
                iVar12 = iVar5;
                if (iVar14 <= iVar12) break;
                uVar8 = memchr(unaff_RDI,10,unaff_RBX - unaff_RDI);
                if (uVar8 == 0) {
                  uVar8 = unaff_RBX;
                }
                iVar12 = iVar12 + 1;
                unaff_RDI = uVar8 + 1;
                iVar5 = iVar12;
              } while (unaff_RDI < unaff_RBX);
            }
            fVar17 = (float)iVar12 * fVar19 + fVar22;
            *(float *)(unaff_RBP + 0x44) = fVar17;
          }
        }
        if (unaff_RDI < unaff_RBX) {
          fVar20 = fVar17;
          fVar18 = fVar17;
          in_stack_00000060 = unaff_XMM15_Da;
          in_stack_00000068 = unaff_XMM15_Dc;
          in_stack_00000090 = unaff_XMM12_Da;
          in_stack_00000098 = unaff_XMM12_Dc;
          in_stack_000000c0 = unaff_XMM9_Da;
          in_stack_000000c8 = unaff_XMM9_Dc;
          do {
            fVar20 = fVar20 + fVar19;
            lVar10 = *(longlong *)(unaff_RSI + 0x1af8);
            if (((((fVar20 < *(float *)(lVar10 + 0x22c) || fVar20 == *(float *)(lVar10 + 0x22c)) ||
                  (*(float *)(lVar10 + 0x234) <= fVar17)) ||
                 (fVar2 + 3.4028235e+38 < *(float *)(lVar10 + 0x228) ||
                  fVar2 + 3.4028235e+38 == *(float *)(lVar10 + 0x228))) ||
                (*(float *)(lVar10 + 0x230) <= fVar2)) && (*(char *)(unaff_RSI + 0x2e38) == '\0'))
            break;
            uVar8 = memchr(unaff_RDI,10,unaff_RBX - unaff_RDI);
            pfVar3 = *(float **)(unaff_RSI + 0x19f0);
            fVar16 = *(float *)(unaff_RSI + 0x19f8);
            if (uVar8 == 0) {
              uVar8 = unaff_RBX;
            }
            if (unaff_RDI == uVar8) {
              fVar16 = 0.0;
            }
            else {
              FUN_180297340(pfVar3,&stack0x00000050,fVar16,0x7f7fffff,0xbf800000);
              fVar15 = fStack0000000000000050;
              if (0.0 < fStack0000000000000050) {
                fVar15 = fStack0000000000000050 - fVar16 / *pfVar3;
              }
              fVar16 = (float)(int)(fVar15 + 0.95);
              _fStack0000000000000050 = CONCAT44(uStack0000000000000054,fVar16);
            }
            if (fVar21 < fVar16) {
              *(float *)(unaff_RBP + 0x48) = fVar16;
              fVar21 = fVar16;
            }
            FUN_180122320(*(undefined8 *)(unaff_RBP + 0x40),unaff_RDI,uVar8,0);
            unaff_RSI = _DAT_180c8a9b0;
            fVar18 = fVar18 + fVar19;
            unaff_RDI = uVar8 + 1;
            fVar17 = fVar17 + fVar19;
            *(float *)(unaff_RBP + 0x44) = fVar18;
          } while (unaff_RDI < unaff_RBX);
          while (unaff_RDI < unaff_RBX) {
            uVar8 = memchr(unaff_RDI,10,unaff_RBX - unaff_RDI);
            if (uVar8 == 0) {
              uVar8 = unaff_RBX;
            }
            iVar13 = iVar13 + 1;
            unaff_RDI = uVar8 + 1;
          }
          fVar17 = fVar18 + (float)iVar13 * fVar19;
        }
        fVar17 = fVar17 - fVar22;
        *(float *)(unaff_RBP + 0x4c) = fVar17;
      }
      fVar17 = fVar22 + fVar17;
      fVar21 = fVar2 + fVar21;
      func_0x000180124080(unaff_RBP + 0x48,0);
      lVar10 = *(longlong *)(unaff_RSI + 0x1af8);
      *(undefined8 *)(lVar10 + 0x144) = 0;
      *(float *)(lVar10 + 0x14c) = fVar2;
      *(float *)(lVar10 + 0x150) = fVar22;
      *(float *)(lVar10 + 0x154) = fVar21;
      *(float *)(lVar10 + 0x158) = fVar17;
      lVar11 = *(longlong *)(unaff_RSI + 0x1af8);
      _fStack0000000000000050 = CONCAT44(fVar22,fVar2);
      in_stack_00000058 = CONCAT44(fVar17,fVar21);
      if ((((fVar17 < *(float *)(lVar11 + 0x22c) || fVar17 == *(float *)(lVar11 + 0x22c)) ||
           (*(float *)(lVar11 + 0x234) <= fVar22)) ||
          ((fVar21 < *(float *)(lVar11 + 0x228) || fVar21 == *(float *)(lVar11 + 0x228) ||
           (*(float *)(lVar11 + 0x230) <= fVar2)))) && (*(char *)(unaff_RSI + 0x2e38) == '\0')) {
        return;
      }
      cVar6 = FUN_180128040(&stack0x00000050,&stack0x00000058,1);
      if (cVar6 == '\0') {
        return;
      }
      *(uint *)(lVar10 + 0x148) = *(uint *)(lVar10 + 0x148) | 1;
      return;
    }
LAB_18010ecde:
    if (0.0 <= fVar19) {
      if (fVar19 == 0.0) {
        lVar10 = *(longlong *)(param_1 + 0x210);
        fVar19 = *(float *)(param_1 + 0x278) - *(float *)(param_1 + 0x40);
        if (lVar10 != 0) {
          iVar13 = *(int *)(lVar10 + 0xc) + 1;
          iVar14 = *(int *)(lVar10 + 0xc);
          if (-1 < iVar13) {
            iVar14 = iVar13;
          }
          fVar19 = ((*(float *)(lVar10 + 0x18) - *(float *)(lVar10 + 0x14)) *
                    *(float *)((longlong)iVar14 * 0x1c + *(longlong *)(lVar10 + 0x38)) +
                   *(float *)(lVar10 + 0x14)) - *(float *)(param_1 + 0x70);
        }
        fVar19 = (fVar19 + *(float *)(param_1 + 0x40)) - fVar2;
        if (fVar19 <= 1.0) {
          fVar19 = 1.0;
        }
      }
      else {
        if (0.0 < fVar19) {
          fVar19 = (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x8c)) + fVar19;
        }
        fVar19 = fVar19 - fVar2;
        if (fVar19 <= 1.0) {
          fVar19 = 1.0;
        }
      }
      goto LAB_18010ed80;
    }
  }
  fVar19 = 0.0;
LAB_18010ed80:
  pfVar3 = *(float **)(unaff_RSI + 0x19f0);
  fVar20 = *(float *)(unaff_RSI + 0x19f8);
  if (unaff_RDI == unaff_RBX) {
    fVar19 = 0.0;
  }
  else {
    FUN_180297340(pfVar3,unaff_RBP + 0x48,fVar20,0x7f7fffff,fVar19);
    fVar19 = *(float *)(unaff_RBP + 0x48);
    if (0.0 < fVar19) {
      fVar19 = fVar19 - fVar20 / *pfVar3;
    }
    fVar20 = *(float *)(unaff_RBP + 0x4c);
    fVar19 = (float)(int)(fVar19 + 0.95);
  }
  *(float *)(unaff_RBP + 0x44) = fVar20;
  *(float *)(unaff_RBP + 0x40) = fVar19;
  fVar20 = fVar20 + fVar22;
  fVar19 = fVar19 + fVar2;
  func_0x000180124080(unaff_RBP + 0x40,0);
  lVar10 = *(longlong *)(unaff_RSI + 0x1af8);
  *(undefined8 *)(lVar10 + 0x144) = 0;
  *(float *)(lVar10 + 0x14c) = fVar2;
  *(float *)(lVar10 + 0x150) = fVar22;
  *(float *)(lVar10 + 0x154) = fVar19;
  *(float *)(lVar10 + 0x158) = fVar20;
  lVar11 = *(longlong *)(unaff_RSI + 0x1af8);
  _fStack0000000000000050 = CONCAT44(fVar22,fVar2);
  in_stack_00000058 = CONCAT44(fVar20,fVar19);
  if ((((*(float *)(lVar11 + 0x22c) <= fVar20 && fVar20 != *(float *)(lVar11 + 0x22c)) &&
       (fVar22 < *(float *)(lVar11 + 0x234))) &&
      ((*(float *)(lVar11 + 0x228) <= fVar19 && fVar19 != *(float *)(lVar11 + 0x228) &&
       (fVar2 < *(float *)(lVar11 + 0x230))))) || (*(char *)(unaff_RSI + 0x2e38) != '\0')) {
    cVar6 = FUN_180128040(&stack0x00000050,&stack0x00000058,1);
    uVar4 = _fStack0000000000000050;
    if (cVar6 != '\0') {
      *(uint *)(lVar10 + 0x148) = *(uint *)(lVar10 + 0x148) | 1;
    }
    lVar10 = *(longlong *)(unaff_RSI + 0x1af8);
    *(undefined8 *)(unaff_RBP + 0x40) = _fStack0000000000000050;
    if (unaff_RBX == 0) {
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (*(char *)(unaff_RDI + lVar11) != '\0');
      unaff_RBX = lVar11 + unaff_RDI;
    }
    if (unaff_RDI != unaff_RBX) {
      _fStack0000000000000050 = *(undefined8 *)(unaff_RSI + 0x16c8);
      lVar10 = *(longlong *)(lVar10 + 0x2e8);
      in_stack_00000058 =
           CONCAT44(*(float *)(unaff_RSI + 0x16d4) * *(float *)(unaff_RSI + 0x1628),
                    *(undefined4 *)(unaff_RSI + 0x16d0));
      uVar7 = func_0x000180121e20(&stack0x00000050);
      fVar19 = *(float *)(unaff_RSI + 0x19f8);
      lVar11 = *(longlong *)(unaff_RSI + 0x19f0);
      if ((uVar7 & 0xff000000) != 0) {
        if (unaff_RBX == 0) {
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while (*(char *)(unaff_RDI + lVar9) != '\0');
          unaff_RBX = lVar9 + unaff_RDI;
        }
        if (unaff_RDI != unaff_RBX) {
          if (lVar11 == 0) {
            lVar11 = *(longlong *)(*(longlong *)(lVar10 + 0x38) + 8);
          }
          if (fVar19 == 0.0) {
            fVar19 = *(float *)(*(longlong *)(lVar10 + 0x38) + 0x10);
          }
          puVar1 = (undefined8 *)
                   (*(longlong *)(lVar10 + 0x68) + -0x10 + (longlong)*(int *)(lVar10 + 0x60) * 0x10)
          ;
          _fStack0000000000000050 = *puVar1;
          in_stack_00000058 = puVar1[1];
          FUN_180297590(lVar11,lVar10,fVar19,uVar4,uVar7);
        }
      }
      if (*(char *)(unaff_RSI + 0x2e38) != '\0') {
        FUN_18013c800(unaff_RBP + 0x40);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18010e97b(undefined8 param_1)
void FUN_18010e97b(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  longlong lVar8;
  ulonglong unaff_R12;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float in_XMM0_Dd;
  float fVar13;
  float fVar14;
  float unaff_XMM8_Da;
  undefined4 unaff_XMM9_Da;
  float fVar15;
  undefined4 unaff_XMM9_Dc;
  float fVar16;
  undefined4 unaff_XMM12_Da;
  undefined4 unaff_XMM12_Dc;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  undefined4 unaff_XMM15_Da;
  undefined4 unaff_XMM15_Dc;
  float fStack0000000000000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined4 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  
  fStack0000000000000050 = (float)param_1;
  fVar13 = 0.0;
  fVar1 = *(float *)(unaff_RSI + 0x19f8);
  fVar16 = 0.0;
  *(undefined4 *)(unaff_RBP + 0x48) = 0;
  *(undefined4 *)(unaff_RBP + 0x4c) = 0;
  cVar5 = (char)unaff_R12;
  if (unaff_XMM13_Da <= in_XMM0_Dd) {
    *(float *)(unaff_RBP + 0x40) = unaff_XMM14_Da;
    *(float *)(unaff_RBP + 0x44) = unaff_XMM13_Da;
    uVar10 = (uint)unaff_R12;
    fVar13 = unaff_XMM13_Da;
    if (*(char *)(unaff_RSI + 0x2e38) == cVar5) {
      *(float *)(unaff_RBP + 0x44) = unaff_XMM13_Da;
      iVar11 = (int)(((float)((ulonglong)param_1 >> 0x20) - unaff_XMM13_Da) / fVar1);
      if (0 < iVar11) {
        uVar7 = unaff_R12 & 0xffffffff;
        uVar9 = uVar10;
        if (unaff_RDI < unaff_RBX) {
          do {
            uVar9 = (uint)uVar7;
            if (iVar11 <= (int)uVar9) break;
            uVar6 = memchr(unaff_RDI,10,unaff_RBX - unaff_RDI);
            if (uVar6 == 0) {
              uVar6 = unaff_RBX;
            }
            uVar9 = uVar9 + 1;
            uVar7 = (ulonglong)uVar9;
            unaff_RDI = uVar6 + 1;
          } while (unaff_RDI < unaff_RBX);
        }
        fVar13 = (float)(int)uVar9 * fVar1 + unaff_XMM13_Da;
        *(float *)(unaff_RBP + 0x44) = fVar13;
      }
    }
    if (unaff_RDI < unaff_RBX) {
      fVar15 = fVar13;
      fVar14 = fVar13;
      in_stack_00000060 = unaff_XMM15_Da;
      in_stack_00000068 = unaff_XMM15_Dc;
      in_stack_00000090 = unaff_XMM12_Da;
      in_stack_00000098 = unaff_XMM12_Dc;
      in_stack_000000c0 = unaff_XMM9_Da;
      in_stack_000000c8 = unaff_XMM9_Dc;
      do {
        fVar15 = fVar15 + fVar1;
        lVar8 = *(longlong *)(unaff_RSI + 0x1af8);
        if (((((fVar15 < *(float *)(lVar8 + 0x22c) || fVar15 == *(float *)(lVar8 + 0x22c)) ||
              (*(float *)(lVar8 + 0x234) <= fVar13)) ||
             (unaff_XMM14_Da + 3.4028235e+38 < *(float *)(lVar8 + 0x228) ||
              unaff_XMM14_Da + 3.4028235e+38 == *(float *)(lVar8 + 0x228))) ||
            (*(float *)(lVar8 + 0x230) <= unaff_XMM14_Da)) &&
           (*(char *)(unaff_RSI + 0x2e38) == cVar5)) break;
        uVar7 = memchr(unaff_RDI,10,unaff_RBX - unaff_RDI);
        pfVar3 = *(float **)(unaff_RSI + 0x19f0);
        fVar2 = *(float *)(unaff_RSI + 0x19f8);
        if (uVar7 == 0) {
          uVar7 = unaff_RBX;
        }
        fVar12 = unaff_XMM8_Da;
        if (unaff_RDI != uVar7) {
          FUN_180297340(pfVar3,&stack0x00000050,fVar2,0x7f7fffff,0xbf800000);
          if (unaff_XMM8_Da < fStack0000000000000050) {
            fStack0000000000000050 = fStack0000000000000050 - fVar2 / *pfVar3;
          }
          fStack0000000000000050 = (float)(int)(fStack0000000000000050 + 0.95);
          fVar12 = fStack0000000000000050;
        }
        if (fVar16 < fVar12) {
          *(float *)(unaff_RBP + 0x48) = fVar12;
          fVar16 = fVar12;
        }
        FUN_180122320(*(undefined8 *)(unaff_RBP + 0x40),unaff_RDI,uVar7,0);
        unaff_RSI = _DAT_180c8a9b0;
        fVar14 = fVar14 + fVar1;
        unaff_RDI = uVar7 + 1;
        fVar13 = fVar13 + fVar1;
        *(float *)(unaff_RBP + 0x44) = fVar14;
      } while (unaff_RDI < unaff_RBX);
      uVar7 = unaff_R12 & 0xffffffff;
      while (unaff_RDI < unaff_RBX) {
        uVar6 = memchr(unaff_RDI,10,unaff_RBX - unaff_RDI);
        if (uVar6 == 0) {
          uVar6 = unaff_RBX;
        }
        uVar10 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar10;
        unaff_RDI = uVar6 + 1;
      }
      fVar13 = fVar14 + (float)(int)uVar10 * fVar1;
    }
    fVar13 = fVar13 - unaff_XMM13_Da;
    *(float *)(unaff_RBP + 0x4c) = fVar13;
  }
  fVar13 = unaff_XMM13_Da + fVar13;
  fVar16 = unaff_XMM14_Da + fVar16;
  func_0x000180124080(unaff_RBP + 0x48);
  lVar8 = *(longlong *)(unaff_RSI + 0x1af8);
  *(ulonglong *)(lVar8 + 0x144) = unaff_R12;
  *(float *)(lVar8 + 0x14c) = unaff_XMM14_Da;
  *(float *)(lVar8 + 0x150) = unaff_XMM13_Da;
  *(float *)(lVar8 + 0x154) = fVar16;
  *(float *)(lVar8 + 0x158) = fVar13;
  lVar4 = *(longlong *)(unaff_RSI + 0x1af8);
  if (((((*(float *)(lVar4 + 0x22c) <= fVar13 && fVar13 != *(float *)(lVar4 + 0x22c)) &&
        (unaff_XMM13_Da < *(float *)(lVar4 + 0x234))) &&
       ((*(float *)(lVar4 + 0x228) <= fVar16 && fVar16 != *(float *)(lVar4 + 0x228) &&
        (unaff_XMM14_Da < *(float *)(lVar4 + 0x230))))) || (*(char *)(unaff_RSI + 0x2e38) != cVar5))
     && (fStack0000000000000058 = fVar16, fStack000000000000005c = fVar13,
        cVar5 = FUN_180128040(&stack0x00000050,&stack0x00000058,1), cVar5 != '\0')) {
    *(uint *)(lVar8 + 0x148) = *(uint *)(lVar8 + 0x148) | 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



