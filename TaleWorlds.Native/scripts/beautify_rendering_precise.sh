#!/bin/bash

# 03_rendering.c 文件语义化美化脚本（精确版）
# 简化实现：仅将特定的非语义化名称替换为语义化名称
# 原本实现：完全重构渲染系统所有命名体系，建立统一的语义化命名规范

# 定义源文件路径
SOURCE_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 创建临时文件
TEMP_FILE="/tmp/rendering_temp.c"

# 使用更精确的替换方式
python3 << 'EOF'
import re

# 读取文件
with open("$SOURCE_FILE", 'r') as f:
    content = f.read()

# 精确替换重复的变量声明
# 替换连续15个相同的声明为一个
pattern = r'void\* render_texture_object_data_array_legacy;\s*\n' + \
          r'void\* render_texture_object_data_array_legacy;\s*\n' + \
          r'void\* render_texture_object_data_array_legacy;\s*\n' + \
          r'void\* render_texture_object_data_array_legacy;\s*\n' + \
          r'void\* render_texture_object_data_array_legacy;\s*\n' + \
          r'void\* render_texture_object_data_array_legacy;\s*\n' + \
          r'void\* render_texture_object_data_array_legacy;\s*\n' + \
          r'void\* render_texture_object_data_array_legacy;\s*\n' + \
          r'void\* render_texture_object_data_array_legacy;\s*\n' + \
          r'void\* render_texture_object_data_array_legacy;\s*\n' + \
          r'void\* render_texture_object_data_array_legacy;\s*\n' + \
          r'void\* render_texture_object_data_array_legacy;\s*\n' + \
          r'void\* render_texture_object_data_array_legacy;\s*\n' + \
          r'void\* render_texture_object_data_array_legacy;\s*\n' + \
          r'void\* render_texture_object_data_array_legacy;\s*\n'

content = re.sub(pattern, 'void* render_texture_object_data_array_legacy_storage;\n', content)

# 替换连续6个相同的声明
pattern = r'void\* render_texture_object_data_array_legacy;\s*\n' + \
          r'void\* render_texture_object_data_array_legacy;\s*\n' + \
          r'void\* render_texture_object_data_array_legacy;\s*\n' + \
          r'void\* render_texture_object_data_array_legacy;\s*\n' + \
          r'void\* render_texture_object_data_array_legacy;\s*\n' + \
          r'void\* render_texture_object_data_array_legacy;\s*\n'

content = re.sub(pattern, 'void* render_texture_object_data_array_legacy_storage_secondary;\n', content)

# 替换全局顶点变量名
content = re.sub(r'void\* render_global_vertex_primary;', 'void* render_global_vertex_data_primary;', content)
content = re.sub(r'void\* render_global_vertex_tertiary;', 'void* render_global_vertex_data_tertiary;', content)
content = re.sub(r'void\* render_global_vertex_quaternary;', 'void* render_global_vertex_data_quaternary;', content)
content = re.sub(r'void\* render_global_vertex_senary;', 'void* render_global_vertex_data_senary;', content)
content = re.sub(r'void\* render_global_vertex_octonary;', 'void* render_global_vertex_data_octonary;', content)
content = re.sub(r'void\* render_global_vertex_novenary;', 'void* render_global_vertex_data_novenary;', content)
content = re.sub(r'void\* render_global_vertex_denary;', 'void* render_global_vertex_data_denary;', content)

# 写入文件
with open("$TEMP_FILE", 'w') as f:
    f.write(content)

print("文件美化完成")
EOF

# 移动临时文件到源文件
mv "$TEMP_FILE" "$SOURCE_FILE"

echo "03_rendering.c 文件语义化美化完成（精确版）"