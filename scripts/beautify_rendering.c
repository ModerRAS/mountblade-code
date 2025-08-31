#!/bin/bash

# 03_rendering.c文件美化脚本
# 简化实现：将常见的非语义化名称替换为语义化名称，为关键函数添加文档注释，保持代码结构不变
# 原本实现：完全重构渲染系统所有命名体系，建立统一的语义化命名规范

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
TEMP_FILE="/tmp/rendering_temp.c"

# 备份原始文件
cp "$INPUT_FILE" "$INPUT_FILE.backup"

# 1. 美化变量名
sed -i 's/renderIntVar[0-9]*/render_texture_index/g' "$INPUT_FILE"
sed -i 's/render_stack_long_value/render_texture_offset/g' "$INPUT_FILE"
sed -i 's/buffer_offset/render_buffer_offset/g' "$INPUT_FILE"
sed -i 's/in_register_[0-9a-f_]*/render_register_input_param/g' "$INPUT_FILE"
sed -i 's/in_stack_[0-9a-f_]*/render_stack_parameter/g' "$INPUT_FILE"
sed -i 's/prender_stack_long/render_stack_long_array/g' "$INPUT_FILE"
sed -i 's/render_char_variable_/render_temp_char_/g' "$INPUT_FILE"

# 2. 美化常量名
sed -i 's/RENDER_FLAG_ACTIVE_BASIC_[0-9a-f_]*/RENDER_FLAG_ACTIVE_BASIC/g' "$INPUT_FILE"

# 3. 美化重复的函数名，添加不同的后缀来区分
# 为重复的render_initialize_texture_object_arrays函数添加不同的后缀
awk '
BEGIN {
    count = 0
}
/^void render_initialize_texture_object_arrays\(/ {
    count++
    if (count == 1) {
        print "void render_initialize_texture_object_arrays_primary("
    } else if (count == 2) {
        print "void render_initialize_texture_object_arrays_secondary("
    } else if (count == 3) {
        print "void render_initialize_texture_object_arrays_tertiary("
    } else if (count == 4) {
        print "void render_initialize_texture_object_arrays_quaternary("
    } else if (count == 5) {
        print "void render_initialize_texture_object_arrays_quinary("
    } else {
        print "void render_initialize_texture_object_arrays_variant_" count "("
    }
    next
}
/^uint64_t \* render_initialize_texture_object_arrays\(/ {
    count++
    if (count == 1) {
        print "uint64_t * render_initialize_texture_object_arrays_primary("
    } else if (count == 2) {
        print "uint64_t * render_initialize_texture_object_arrays_secondary("
    } else {
        print "uint64_t * render_initialize_texture_object_arrays_variant_" count "("
    }
    next
}
/^uint32_t \* render_initialize_texture_object_arrays\(/ {
    count++
    if (count == 1) {
        print "uint32_t * render_initialize_texture_object_arrays_primary("
    } else {
        print "uint32_t * render_initialize_texture_object_arrays_variant_" count "("
    }
    next
}
/^float \* render_initialize_texture_object_arrays\(/ {
    count++
    if (count == 1) {
        print "float * render_initialize_texture_object_arrays_primary("
    } else {
        print "float * render_initialize_texture_object_arrays_variant_" count "("
    }
    next
}
/^uint8_t render_initialize_texture_object_arrays\(/ {
    count++
    if (count == 1) {
        print "uint8_t render_initialize_texture_object_arrays_primary("
    } else {
        print "uint8_t render_initialize_texture_object_arrays_variant_" count "("
    }
    next
}
/^int render_initialize_texture_object_arrays\(/ {
    count++
    if (count == 1) {
        print "int render_initialize_texture_object_arrays_primary("
    } else {
        print "int render_initialize_texture_object_arrays_variant_" count "("
    }
    next
}
{
    print
}
' "$INPUT_FILE" > "$TEMP_FILE" && mv "$TEMP_FILE" "$INPUT_FILE"

# 4. 美化其他重复函数名
sed -i 's/^void render_legacy_variable(/void render_legacy_variable_primary(/g' "$INPUT_FILE"
sed -i 's/^void render_handle_render_commands(/void render_handle_render_commands_primary(/g' "$INPUT_FILE"
sed -i 's/^void render_configure_context_buffer_pointers(/void render_configure_context_buffer_pointers_primary(/g' "$INPUT_FILE"
sed -i 's/^void render_cleanup_render_resources(/void render_cleanup_render_resources_primary(/g' "$INPUT_FILE"
sed -i 's/^void render_free_render_memory(/void render_free_render_memory_primary(/g' "$INPUT_FILE"
sed -i 's/^void render_reset_render_state(/void render_reset_render_state_primary(/g' "$INPUT_FILE"
sed -i 's/^void render_execute_render_pipeline(/void render_execute_render_pipeline_primary(/g' "$INPUT_FILE"
sed -i 's/^void render_update_render_targets(/void render_update_render_targets_primary(/g' "$INPUT_FILE"
sed -i 's/^void render_flush_render_queue(/void render_flush_render_queue_primary(/g' "$INPUT_FILE"
sed -i 's/^void render_validate_context_pointers(/void render_validate_context_pointers_primary(/g' "$INPUT_FILE"
sed -i 's/^void render_process_data_operations(/void render_process_data_operations_primary(/g' "$INPUT_FILE"
sed -i 's/^void render_legacy_handle_primary(/void render_legacy_handle_primary_primary(/g' "$INPUT_FILE"

# 5. 为关键函数添加文档注释
# 为clear_rendering_buffer函数添加文档注释
sed -i '/^void clear_rendering_buffer(/i\
/**\
 * @brief 清空渲染缓冲区\
 * @param renderContextPtr 渲染上下文指针\
 * @param render_buffer_pointer 渲染缓冲区指针\
 * 简化实现：添加函数文档注释，保持代码结构不变\
 */' "$INPUT_FILE"

# 为setup_rendering_parameters函数添加文档注释
sed -i '/^void setup_rendering_parameters(/i\
/**\
 * @brief 设置渲染参数\
 * @param renderHandle 渲染句柄\
 * @param render_flag_datas 渲染标志数据\
 * @param render_config_data_value 渲染配置数据值\
 * 简化实现：添加函数文档注释，保持代码结构不变\
 */' "$INPUT_FILE"

# 为render_init_context_function函数添加文档注释
sed -i '/^uint64_t \* render_init_context_function(/i\
/**\
 * @brief 初始化渲染上下文函数\
 * @param render_context_pointer 渲染上下文指针\
 * @return uint64_t* 初始化后的渲染上下文指针\
 * 简化实现：添加函数文档注释，保持代码结构不变\
 */' "$INPUT_FILE"

# 为render_create_pipeline函数添加文档注释
sed -i '/^void render_create_pipeline(/i\
/**\
 * @brief 创建渲染管线\
 * @param renderHandle 渲染句柄\
 * @param render_device_context_pointer 渲染设备上下文指针\
 * @param render_config_data_value 渲染配置数据值\
 * 简化实现：添加函数文档注释，保持代码结构不变\
 */' "$INPUT_FILE"

# 为render_process_data_operations函数添加文档注释
sed -i '/^void render_process_data_operations_primary(/i\
/**\
 * @brief 处理渲染数据操作\
 * @param renderHandle 渲染句柄\
 * 简化实现：添加函数文档注释，保持代码结构不变\
 */' "$INPUT_FILE"

echo "03_rendering.c文件美化完成"