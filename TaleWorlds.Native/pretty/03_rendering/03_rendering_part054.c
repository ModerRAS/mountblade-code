#include "TaleWorlds.Native.Split.h"

/**
 * 渲染系统高级数据处理和渲染控制模块
 * 包含6个核心函数，涵盖渲染文本处理、字形渲染、资源管理、内存分配等高级渲染功能
 */

/**
 * 渲染文本处理函数 - 处理文本字符串的渲染和字符编码
 * 
 * @param render_context 渲染上下文
 * @param text_buffer 文本缓冲区指针
 * @param char_count 字符数量
 * @param font_data 字体数据指针
 * @param render_params 渲染参数指针
 * @param line_height 行高参数
 */
void process_rendering_text(uint32_t render_context, char* text_buffer, int char_count, 
                           void* font_data, void* render_params, float line_height)
{
    int* vertex_count_ptr;
    float max_width;
    char current_char;
    uint16_t glyph_index;
    int temp_counter;
    uint32_t char_code;
    longlong glyph_data_ptr;
    char* text_position;
    uint64_t char_data;
    char* line_end_ptr;
    float* vertex_buffer_ptr;
    char* text_end_ptr;
    float* font_metrics_ptr;
    short* index_buffer_ptr;
    float cursor_x;
    float cursor_y;
    float x_advance;
    float y_advance;
    float char_width;
    float char_height;
    float line_spacing;
    float tab_width;
    float space_width;
    int stack_vertex_count;
    float texture_coord;
    int* render_data_ptr;
    float scale_factor;
    uint32_t flags;
    char wrap_mode;
    float kerning_adjustment;
    char alignment_mode;
    
    stack_vertex_count = temp_counter + char_count * 6;
    initialize_render_batch(render_context, char_count * 6, char_count * 4);
    
    vertex_buffer_ptr = *(float**)(glyph_data_ptr + 0x50);
    index_buffer_ptr = *(short**)(glyph_data_ptr + 0x58);
    temp_counter = *(int*)(glyph_data_ptr + 0x48);
    cursor_y = line_spacing;
    
    if (text_position < text_end_ptr) {
        do {
            if (wrap_mode == '\0') {
process_next_char:
                char_code = (uint32_t)*text_position;
                if (char_code < 0x80) {
                    text_position = text_position + 1;
                }
                else {
                    temp_counter = decode_utf8_char(&char_data, text_position);
                    text_position = text_position + temp_counter;
                    if (char_code == 0) break;
                }
                
                if (char_code < 0x20) {
                    if (char_code == 10) { // 换行符
                        line_spacing = line_spacing + tab_width;
                        cursor_y = line_spacing;
                        if (font_metrics_ptr[3] <= line_spacing && line_spacing != font_metrics_ptr[3]) break;
                    }
                    else if (char_code != 0xd) goto process_glyph_data;
                }
                else {
process_glyph_data:
                    if ((int)(char_code & 0xffff) < *(int*)(glyph_data_ptr + 0x30)) {
                        glyph_index = *(uint16_t*)
                                 (*(longlong*)(glyph_data_ptr + 0x38) + (uint64_t)(char_code & 0xffff) * 2);
                        if (glyph_index == 0xffff) {
                            glyph_data_ptr = *(longlong*)(glyph_data_ptr + 0x40);
                        }
                        else {
                            glyph_data_ptr = *(longlong*)(glyph_data_ptr + 0x18) + (uint64_t)glyph_index * 0x28;
                        }
                    }
                    else {
                        glyph_data_ptr = *(longlong*)(glyph_data_ptr + 0x40);
                    }
                    
                    if (((glyph_data_ptr != 0) &&
                        (x_advance = kerning_adjustment * *(float*)(glyph_data_ptr + 4), char_code != 0x20)) &&
                       (char_code != 9)) {
                        max_width = font_metrics_ptr[2];
                        char_width = kerning_adjustment * *(float*)(glyph_data_ptr + 8) + cursor_y;
                        char_height = kerning_adjustment * *(float*)(glyph_data_ptr + 0x10) + cursor_y;
                        x_advance = kerning_adjustment * *(float*)(glyph_data_ptr + 0xc) + line_spacing;
                        y_advance = kerning_adjustment * *(float*)(glyph_data_ptr + 0x14) + line_spacing;
                        
                        if ((char_width <= max_width) && (cursor_x = *font_metrics_ptr, cursor_x <= char_height)) {
                            char_width = *(float*)(glyph_data_ptr + 0x18);
                            char_height = *(float*)(glyph_data_ptr + 0x1c);
                            x_advance = *(float*)(glyph_data_ptr + 0x20);
                            y_advance = *(float*)(glyph_data_ptr + 0x24);
                            
                            if (alignment_mode != '\0') {
                                if (char_width < cursor_x) {
                                    char_width = char_width + (1.0 - (char_height - cursor_x) / (char_height - char_width)) * (x_advance - char_width);
                                    char_width = cursor_x;
                                }
                                cursor_x = font_metrics_ptr[1];
                                if (x_advance < cursor_x) {
                                    char_height = char_height + (1.0 - (y_advance - cursor_x) / (y_advance - x_advance)) * (y_advance - char_height);
                                    x_advance = cursor_x;
                                }
                                if (max_width < char_height) {
                                    x_advance = ((max_width - char_width) / (char_height - char_width)) * (x_advance - char_width) + char_width;
                                    char_height = max_width;
                                }
                                max_width = font_metrics_ptr[3];
                                if (max_width < y_advance) {
                                    y_advance = ((max_width - x_advance) / (y_advance - x_advance)) * (y_advance - char_height) + char_height;
                                    y_advance = max_width;
                                }
                                if (y_advance <= x_advance) goto skip_glyph_render;
                            }
                            
                            // 设置索引缓冲区
                            glyph_index = (short)temp_counter;
                            *index_buffer_ptr = glyph_index;
                            index_buffer_ptr[1] = glyph_index + 1;
                            index_buffer_ptr[2] = glyph_index + 2;
                            index_buffer_ptr[4] = glyph_index + 2;
                            index_buffer_ptr[5] = glyph_index + 3;
                            index_buffer_ptr[3] = glyph_index;
                            temp_counter = temp_counter + 4;
                            
                            // 设置顶点缓冲区纹理坐标
                            vertex_buffer_ptr[4] = texture_coord;
                            vertex_buffer_ptr[9] = texture_coord;
                            vertex_buffer_ptr[0xe] = texture_coord;
                            vertex_buffer_ptr[0x13] = texture_coord;
                            
                            // 设置顶点位置坐标
                            vertex_buffer_ptr[0] = char_width;
                            vertex_buffer_ptr[1] = x_advance;
                            vertex_buffer_ptr[2] = char_width;
                            vertex_buffer_ptr[3] = char_height;
                            vertex_buffer_ptr[5] = char_height;
                            vertex_buffer_ptr[6] = x_advance;
                            vertex_buffer_ptr[7] = char_height;
                            vertex_buffer_ptr[8] = x_advance;
                            vertex_buffer_ptr[10] = char_height;
                            vertex_buffer_ptr[0xb] = y_advance;
                            vertex_buffer_ptr[0xc] = x_advance;
                            vertex_buffer_ptr[0xd] = y_advance;
                            vertex_buffer_ptr[0xf] = char_width;
                            vertex_buffer_ptr[0x10] = y_advance;
                            vertex_buffer_ptr[0x11] = char_width;
                            vertex_buffer_ptr[0x12] = y_advance;
                            
                            vertex_buffer_ptr = vertex_buffer_ptr + 0x14;
                            index_buffer_ptr = index_buffer_ptr + 6;
                        }
                    }
skip_glyph_render:
                    tab_width = scale_factor;
                    cursor_y = cursor_y + x_advance;
                }
            }
            else {
                if ((line_end_ptr == (char*)0x0) &&
                   (line_end_ptr = (char*)calculate_line_break(kerning_adjustment - (cursor_y - line_spacing),
                                          kerning_adjustment, text_position), line_end_ptr == text_position)) {
                    line_end_ptr = line_end_ptr + 1;
                }
                if (text_position < line_end_ptr) goto process_next_char;
                line_end_ptr = (char*)0x0;
                line_spacing = line_spacing + tab_width;
                
                while (true) {
                    if (text_end_ptr <= text_position) goto end_text_processing;
                    current_char = *text_position;
                    if ((current_char != ' ') && (current_char != '\t')) break;
                    text_position = text_position + 1;
                }
                cursor_y = line_spacing;
                if (current_char == '\n') {
                    text_position = text_position + 1;
                }
            }
            x_advance = 0.0;
            kerning_adjustment = scale_factor;
            line_spacing = space_width;
            kerning_adjustment = kerning_adjustment;
        } while (text_position < text_end_ptr);
    }
end_text_processing:
    finalize_render_batch(render_data_ptr + 8,
                         ((longlong)vertex_buffer_ptr - *(longlong*)(render_data_ptr + 10)) / 0x14);
    
    temp_counter = render_data_ptr[5];
    char_data = (longlong)index_buffer_ptr - *(longlong*)(render_data_ptr + 6) >> 1;
    temp_counter = (int)char_data;
    
    if (temp_counter < temp_counter) {
        if (temp_counter == 0) {
            char_data = 8;
        }
        else {
            char_data = temp_counter / 2 + temp_counter;
        }
        char_data = char_data & 0xffffffff;
        if (temp_counter < (int)char_data) {
            char_data = (uint64_t)char_data;
        }
        resize_render_buffer(render_data_ptr + 4, char_data);
    }
    
    render_data_ptr[4] = temp_counter;
    vertex_count_ptr = (int*)(*(longlong*)(render_data_ptr + 2) + -0x30 +
                           (longlong)*render_data_ptr * 0x30);
    *vertex_count_ptr = *vertex_count_ptr + (temp_counter - stack_vertex_count);
    *(float**)(render_data_ptr + 0x14) = vertex_buffer_ptr;
    *(short**)(render_data_ptr + 0x16) = index_buffer_ptr;
    render_data_ptr[0x12] = render_data_ptr[8];
    return;
}

/**
 * 渲染字形处理函数 - 处理单个字形的渲染和变换
 */
void render_glyph_character(void)
{
    int* vertex_count_ptr;
    float max_width;
    float char_height;
    char current_char;
    uint16_t glyph_index;
    int temp_counter;
    uint32_t char_code;
    longlong glyph_data_ptr;
    char* text_position;
    uint64_t char_data;
    char* line_end_ptr;
    float* vertex_buffer_ptr;
    char* text_end_ptr;
    float* font_metrics_ptr;
    short glyph_index_base;
    longlong glyph_cache_ptr;
    short* index_buffer_ptr;
    float cursor_x;
    float cursor_y;
    float x_advance;
    float y_advance;
    float char_width;
    float line_spacing;
    float tab_width;
    float stack_float;
    int stack_vertex_count;
    float texture_coord;
    int* render_data_ptr;
    float scale_factor;
    uint32_t flags;
    char wrap_mode;
    float kerning_adjustment;
    char alignment_mode;
    
    cursor_y = line_spacing;
    do {
        if (wrap_mode == '\0') {
process_next_char:
            char_code = (uint32_t)*text_position;
            if (char_code < 0x80) {
                text_position = text_position + 1;
            }
            else {
                temp_counter = decode_utf8_char(&char_data, text_position);
                text_position = text_position + temp_counter;
                if (char_code == 0) break;
            }
            
            if (char_code < 0x20) {
                if (char_code == 10) { // 换行符
                    line_spacing = line_spacing + tab_width;
                    cursor_y = line_spacing;
                    if (font_metrics_ptr[3] <= line_spacing && line_spacing != font_metrics_ptr[3]) break;
                }
                else if (char_code != 0xd) goto process_glyph_data;
            }
            else {
process_glyph_data:
                if ((int)(char_code & 0xffff) < *(int*)(glyph_cache_ptr + 0x30)) {
                    glyph_index = *(uint16_t*)
                             (*(longlong*)(glyph_cache_ptr + 0x38) + (uint64_t)(char_code & 0xffff) * 2);
                    if (glyph_index == 0xffff) {
                        glyph_data_ptr = *(longlong*)(glyph_cache_ptr + 0x40);
                    }
                    else {
                        glyph_data_ptr = *(longlong*)(glyph_cache_ptr + 0x18) + (uint64_t)glyph_index * 0x28;
                    }
                }
                else {
                    glyph_data_ptr = *(longlong*)(glyph_cache_ptr + 0x40);
                }
                
                if (((glyph_data_ptr != 0) &&
                    (x_advance = scale_factor * *(float*)(glyph_data_ptr + 4), char_code != 0x20)) &&
                   (char_code != 9)) {
                    max_width = font_metrics_ptr[2];
                    y_advance = scale_factor * *(float*)(glyph_data_ptr + 8) + cursor_y;
                    char_width = scale_factor * *(float*)(glyph_data_ptr + 0x10) + cursor_y;
                    x_advance = scale_factor * *(float*)(glyph_data_ptr + 0xc) + line_spacing;
                    char_height = scale_factor * *(float*)(glyph_data_ptr + 0x14) + line_spacing;
                    
                    if ((y_advance <= max_width) && (char_height = *font_metrics_ptr, char_height <= char_width)) {
                        char_width = *(float*)(glyph_data_ptr + 0x18);
                        char_height = *(float*)(glyph_data_ptr + 0x1c);
                        x_advance = *(float*)(glyph_data_ptr + 0x20);
                        y_advance = *(float*)(glyph_data_ptr + 0x24);
                        
                        if (alignment_mode != '\0') {
                            if (y_advance < char_height) {
                                char_width = char_width + (1.0 - (char_width - char_height) / (char_width - y_advance)) * (x_advance - char_width);
                                y_advance = char_height;
                            }
                            char_height = font_metrics_ptr[1];
                            if (x_advance < char_height) {
                                char_height = char_height + (1.0 - (char_height - x_advance) / (char_height - x_advance)) * (y_advance - char_height);
                                x_advance = char_height;
                            }
                            if (max_width < char_width) {
                                x_advance = ((max_width - y_advance) / (char_width - y_advance)) * (x_advance - char_width) + char_width;
                                char_width = max_width;
                            }
                            max_width = font_metrics_ptr[3];
                            if (max_width < char_height) {
                                y_advance = ((max_width - x_advance) / (char_height - x_advance)) * (y_advance - char_height) + char_height;
                                char_height = max_width;
                            }
                            if (char_height <= x_advance) goto skip_glyph_render;
                        }
                        
                        // 设置索引缓冲区
                        *index_buffer_ptr = glyph_index_base;
                        index_buffer_ptr[1] = glyph_index_base + 1;
                        index_buffer_ptr[2] = glyph_index_base + 2;
                        index_buffer_ptr[4] = glyph_index_base + 2;
                        index_buffer_ptr[5] = glyph_index_base + 3;
                        index_buffer_ptr[3] = glyph_index_base;
                        glyph_index_base = glyph_index_base + 4;
                        
                        // 设置顶点缓冲区纹理坐标
                        vertex_buffer_ptr[4] = texture_coord;
                        vertex_buffer_ptr[9] = texture_coord;
                        vertex_buffer_ptr[0xe] = texture_coord;
                        vertex_buffer_ptr[0x13] = texture_coord;
                        
                        // 设置顶点位置坐标
                        vertex_buffer_ptr[0] = y_advance;
                        vertex_buffer_ptr[1] = x_advance;
                        vertex_buffer_ptr[2] = char_width;
                        vertex_buffer_ptr[3] = char_height;
                        vertex_buffer_ptr[5] = x_advance;
                        vertex_buffer_ptr[6] = char_width;
                        vertex_buffer_ptr[7] = char_height;
                        vertex_buffer_ptr[8] = x_advance;
                        vertex_buffer_ptr[10] = char_width;
                        vertex_buffer_ptr[0xb] = char_height;
                        vertex_buffer_ptr[0xc] = x_advance;
                        vertex_buffer_ptr[0xd] = y_advance;
                        vertex_buffer_ptr[0xf] = y_advance;
                        vertex_buffer_ptr[0x10] = char_height;
                        vertex_buffer_ptr[0x11] = char_width;
                        vertex_buffer_ptr[0x12] = y_advance;
                        
                        vertex_buffer_ptr = vertex_buffer_ptr + 0x14;
                        index_buffer_ptr = index_buffer_ptr + 6;
                    }
                }
skip_glyph_render:
                tab_width = scale_factor;
                cursor_y = cursor_y + x_advance;
            }
        }
        else {
            if ((line_end_ptr == (char*)0x0) &&
               (line_end_ptr = (char*)calculate_line_break(kerning_adjustment - (cursor_y - line_spacing),
                                      scale_factor, text_position), line_end_ptr == text_position)) {
                line_end_ptr = line_end_ptr + 1;
            }
            if (text_position < line_end_ptr) goto process_next_char;
            line_end_ptr = (char*)0x0;
            line_spacing = line_spacing + tab_width;
            
            while (true) {
                if (text_end_ptr <= text_position) goto end_text_processing;
                current_char = *text_position;
                if ((current_char != ' ') && (current_char != '\t')) break;
                text_position = text_position + 1;
            }
            cursor_y = line_spacing;
            if (current_char == '\n') {
                text_position = text_position + 1;
            }
        }
        x_advance = 0.0;
        scale_factor = scale_factor;
        line_spacing = stack_float;
        kerning_adjustment = kerning_adjustment;
    } while (text_position < text_end_ptr);
end_text_processing:
    finalize_render_batch(render_data_ptr + 8,
                         ((longlong)vertex_buffer_ptr - *(longlong*)(render_data_ptr + 10)) / 0x14);
    
    temp_counter = render_data_ptr[5];
    char_data = (longlong)index_buffer_ptr - *(longlong*)(render_data_ptr + 6) >> 1;
    temp_counter = (int)char_data;
    
    if (temp_counter < temp_counter) {
        if (temp_counter == 0) {
            char_data = 8;
        }
        else {
            char_data = temp_counter / 2 + temp_counter;
        }
        char_data = char_data & 0xffffffff;
        if (temp_counter < (int)char_data) {
            char_data = (uint64_t)char_data;
        }
        resize_render_buffer(render_data_ptr + 4, char_data);
    }
    
    render_data_ptr[4] = temp_counter;
    vertex_count_ptr = (int*)(*(longlong*)(render_data_ptr + 2) + -0x30 +
                           (longlong)*render_data_ptr * 0x30);
    *vertex_count_ptr = *vertex_count_ptr + (temp_counter - stack_vertex_count);
    *(float**)(render_data_ptr + 0x14) = vertex_buffer_ptr;
    *(short**)(render_data_ptr + 0x16) = index_buffer_ptr;
    render_data_ptr[0x12] = render_data_ptr[8];
    return;
}

/**
 * 渲染批处理完成函数 - 完成渲染批处理并清理资源
 */
void finalize_render_batch_processing(void)
{
    int* vertex_count_ptr;
    int batch_count;
    uint32_t buffer_size;
    int index_count;
    uint64_t index_data;
    longlong vertex_data_ptr;
    longlong index_data_ptr;
    undefined8 stack_param;
    int* render_data_ptr;
    
    finalize_render_batch(render_data_ptr + 8, (vertex_data_ptr - *(longlong*)(render_data_ptr + 10)) / 0x14);
    batch_count = render_data_ptr[5];
    index_data = index_data_ptr - *(longlong*)(render_data_ptr + 6) >> 1;
    index_count = (int)index_data;
    
    if (batch_count < index_count) {
        if (batch_count == 0) {
            buffer_size = 8;
        }
        else {
            buffer_size = batch_count / 2 + batch_count;
        }
        index_data = index_data & 0xffffffff;
        if (index_count < (int)buffer_size) {
            index_data = (uint64_t)buffer_size;
        }
        resize_render_buffer(render_data_ptr + 4, index_data);
    }
    
    render_data_ptr[4] = index_count;
    vertex_count_ptr = (int*)(*(longlong*)(render_data_ptr + 2) + -0x30 +
                           (longlong)*render_data_ptr * 0x30);
    *vertex_count_ptr = *vertex_count_ptr + (index_count - stack_param._4_4_);
    *(longlong*)(render_data_ptr + 0x14) = vertex_data_ptr;
    *(longlong*)(render_data_ptr + 0x16) = index_data_ptr;
    render_data_ptr[0x12] = render_data_ptr[8];
    return;
}

/**
 * 空渲染操作函数 - 占位符函数
 */
void render_nop_operation(void)
{
    return;
}

/**
 * 渲染清理函数 - 清理渲染资源
 */
void render_cleanup_operation(void)
{
    return;
}

/**
 * 高级渲染控制函数 - 控制渲染流程和参数设置
 * 
 * @param render_target 渲染目标
 * @param render_scale 渲染缩放比例
 * @param render_flags 渲染标志
 */
void advanced_render_control(uint64_t render_target, float render_scale, uint32_t render_flags)
{
    float char_width;
    float char_height;
    bool needs_update;
    longlong render_context_ptr;
    float* vertex_buffer_ptr;
    longlong material_ptr;
    longlong texture_ptr;
    int index_count;
    longlong shader_ptr;
    float x_offset;
    float y_offset;
    float z_offset;
    float width_scale;
    float height_scale;
    float aspect_ratio;
    undefined1 temp_buffer[32];
    float* position_ptr;
    undefined4 render_mode;
    undefined8 render_params;
    float texture_x;
    float texture_y;
    float texture_width;
    float texture_height;
    float* texture_coords;
    ulonglong checksum;
    
    render_context_ptr = get_render_context();
    checksum = get_render_checksum() ^ (uint64_t)temp_buffer;
    material_ptr = (longlong)(int)render_flags;
    render_params = render_target;
    
    if (render_flags != 0xffffffff) {
        vertex_buffer_ptr = &texture_y;
        texture_ptr = 4;
        shader_ptr = *(longlong*)(render_context_ptr + 0xa0);
        
        do {
            clear_vertex_buffer(vertex_buffer_ptr);
            vertex_buffer_ptr = vertex_buffer_ptr + 2;
            texture_ptr = texture_ptr - 1;
        } while (texture_ptr != 0);
        
        if ((render_flags < 8) && ((*(byte*)(shader_ptr + 4) & 2) == 0)) {
            char_height = render_params._4_4_ - *(float*)(material_ptr * 0x18 + 0x180bf9104);
            aspect_ratio = (float)render_params - *(float*)(material_ptr * 0x18 + 0x180bf9100);
            texture_ptr = *(longlong*)(shader_ptr + 0x70) * 0x20 + *(longlong*)(shader_ptr + 0x58);
            char_width = *(float*)(material_ptr * 0x18 + 0x180bf90f8);
            width_scale = *(float*)(material_ptr * 0x18 + 0x180bf90fc);
            render_params = CONCAT44(char_height, aspect_ratio);
            height_scale = (float)*(uint16_t*)(texture_ptr + 8) + *(float*)(material_ptr * 0x18 + 0x180bf90f0);
            texture_y = height_scale * *(float*)(shader_ptr + 0x30);
            x_offset = (float)*(uint16_t*)(texture_ptr + 10) + *(float*)(material_ptr * 0x18 + 0x180bf90f4);
            texture_width = x_offset * *(float*)(shader_ptr + 0x34);
            texture_height = (width_scale + x_offset) * *(float*)(shader_ptr + 0x34);
            texture_coords = (char_width + height_scale) * *(float*)(shader_ptr + 0x30);
            texture_x = (height_scale + 109.0) * *(float*)(shader_ptr + 0x30);
            texture_coords = x_offset * *(float*)(shader_ptr + 0x34);
            texture_coords = (height_scale + 109.0 + char_width) * *(float*)(shader_ptr + 0x30);
            texture_coords = (width_scale + x_offset) * *(float*)(shader_ptr + 0x34);
            material_ptr = *(longlong*)(shader_ptr + 8);
            index_count = 0;
            
            if (0 < *(int*)(render_context_ptr + 0x1c68)) {
                shader_ptr = 0;
                do {
                    texture_ptr = *(longlong*)(shader_ptr + *(longlong*)(render_context_ptr + 0x1c70));
                    if (((char_height < *(float*)(texture_ptr + 0xc) + *(float*)(texture_ptr + 0x14)) &&
                         (*(float*)(texture_ptr + 0xc) < (width_scale + 2.0) * render_scale + char_height)) &&
                        (aspect_ratio < *(float*)(texture_ptr + 8) + *(float*)(texture_ptr + 0x10))) &&
                       (*(float*)(texture_ptr + 8) < (char_width + 2.0) * render_scale + aspect_ratio)) {
                        texture_ptr = create_render_object();
                        set_render_state(texture_ptr, material_ptr);
                        width_scale = width_scale * render_scale;
                        z_offset = aspect_ratio + render_scale;
                        char_width = char_width * render_scale;
                        y_offset = width_scale + char_height;
                        x_offset = z_offset + char_width;
                        texture_coords = char_height;
                        char_height = aspect_ratio;
                        
                        if ((*(int*)(texture_ptr + 0x70) == 0) ||
                           (material_ptr != *(longlong*)
                                      (*(longlong*)(texture_ptr + 0x78) + -8 + (longlong)*(int*)(texture_ptr + 0x70) * 8))) {
                            needs_update = true;
                            set_render_state(texture_ptr, material_ptr);
                        }
                        else {
                            needs_update = false;
                        }
                        
                        initialize_render_batch(texture_ptr, 6, 4);
                        position_ptr = &texture_coords;
                        render_mode = 0x30000000;
                        set_render_parameters(texture_ptr, &z_offset, &x_offset, &texture_x);
                        
                        if (needs_update) {
                            *(int*)(texture_ptr + 0x70) = *(int*)(texture_ptr + 0x70) - 1;
                            release_render_object(texture_ptr);
                        }
                        
                        char_height = char_height + width_scale;
                        texture_coords = render_scale + render_scale + aspect_ratio;
                        texture_coords = texture_coords + char_width;
                        char_width = char_height;
                        aspect_ratio = aspect_ratio;
                        
                        if ((*(int*)(texture_ptr + 0x70) == 0) ||
                           (material_ptr != *(longlong*)
                                      (*(longlong*)(texture_ptr + 0x78) + -8 + (longlong)*(int*)(texture_ptr + 0x70) * 8))) {
                            needs_update = true;
                            set_render_state(texture_ptr, material_ptr);
                        }
                        else {
                            needs_update = false;
                        }
                        
                        initialize_render_batch(texture_ptr, 6, 4);
                        position_ptr = &texture_coords;
                        render_mode = 0x30000000;
                        set_render_parameters(texture_ptr, &texture_coords, &texture_coords, &texture_x);
                        
                        if (needs_update) {
                            *(int*)(texture_ptr + 0x70) = *(int*)(texture_ptr + 0x70) - 1;
                            release_render_object(texture_ptr);
                        }
                        
                        x_offset = char_width + aspect_ratio;
                        width_scale = width_scale + char_height;
                        texture_coords = x_offset;
                        texture_height = width_scale;
                        
                        if ((*(int*)(texture_ptr + 0x70) == 0) ||
                           (material_ptr != *(longlong*)
                                      (*(longlong*)(texture_ptr + 0x78) + -8 + (longlong)*(int*)(texture_ptr + 0x70) * 8))) {
                            needs_update = true;
                            set_render_state(texture_ptr, material_ptr);
                        }
                        else {
                            needs_update = false;
                        }
                        
                        initialize_render_batch(texture_ptr, 6, 4);
                        position_ptr = &texture_coords;
                        render_mode = 0xff000000;
                        set_render_parameters(texture_ptr, &render_params, &texture_coords, &texture_x);
                        
                        if (needs_update) {
                            *(int*)(texture_ptr + 0x70) = *(int*)(texture_ptr + 0x70) - 1;
                            release_render_object(texture_ptr);
                        }
                        
                        texture_coords = x_offset;
                        texture_width = width_scale;
                        
                        if ((*(int*)(texture_ptr + 0x70) == 0) ||
                           (material_ptr != *(longlong*)
                                      (*(longlong*)(texture_ptr + 0x78) + -8 + (longlong)*(int*)(texture_ptr + 0x70) * 8))) {
                            needs_update = true;
                            set_render_state(texture_ptr, material_ptr);
                        }
                        else {
                            needs_update = false;
                        }
                        
                        initialize_render_batch(texture_ptr, 6, 4);
                        position_ptr = &texture_coords;
                        render_mode = 0xffffffff;
                        set_render_parameters(texture_ptr, &render_params, &texture_coords, &texture_y);
                        
                        if (needs_update) {
                            *(int*)(texture_ptr + 0x70) = *(int*)(texture_ptr + 0x70) - 1;
                            release_render_object(texture_ptr);
                        }
                        
                        *(int*)(texture_ptr + 0x70) = *(int*)(texture_ptr + 0x70) - 1;
                        release_render_object(texture_ptr);
                    }
                    index_count = index_count + 1;
                    shader_ptr = shader_ptr + 8;
                } while (index_count < *(int*)(render_context_ptr + 0x1c68));
            }
        }
    }
    
    // 执行渲染操作
    execute_render_operation(checksum ^ (uint64_t)temp_buffer);
}