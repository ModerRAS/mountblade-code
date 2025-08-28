#!/bin/bash
# 批量美化脚本 - 处理01_initialization_part044.c的11个函数
echo "开始批量美化01_initialization_part044.c的11个函数..."

# 函数1: FUN_180073730 -> initialize_with_default_params
sed -i 's/FUN_180073730/initialize_with_default_params/g' pretty/01_initialization/01_initialization_part044.c

# 函数2: FUN_180073830 -> initialize_with_custom_params
sed -i 's/FUN_180073830/initialize_with_custom_params/g' pretty/01_initialization/01_initialization_part044.c

# 函数3: FUN_180073930 -> initialize_complex_structure
sed -i 's/FUN_180073930/initialize_complex_structure/g' pretty/01_initialization/01_initialization_part044.c

# 函数4: FUN_1800739f0 -> reset_structure_pointers
sed -i 's/FUN_1800739f0/reset_structure_pointers/g' pretty/01_initialization/01_initialization_part044.c

# 函数5: FUN_180073ab0 -> cleanup_linked_structure
sed -i 's/FUN_180073ab0/cleanup_linked_structure/g' pretty/01_initialization/01_initialization_part044.c

# 函数6: FUN_180073ad0 -> serialize_mesh_data
sed -i 's/FUN_180073ad0/serialize_mesh_data/g' pretty/01_initialization/01_initialization_part044.c

# 函数7: FUN_180073adc -> serialize_mesh_data_buffer
sed -i 's/FUN_180073adc/serialize_mesh_data_buffer/g' pretty/01_initialization/01_initialization_part044.c

# 函数8: FUN_180073b64 -> process_mesh_batch
sed -i 's/FUN_180073b64/process_mesh_batch/g' pretty/01_initialization/01_initialization_part044.c

# 函数9: FUN_180073e0b -> write_buffer_header
sed -i 's/FUN_180073e0b/write_buffer_header/g' pretty/01_initialization/01_initialization_part044.c

# 函数10: FUN_180073e23 -> initialize_buffer_writer
sed -i 's/FUN_180073e23/initialize_buffer_writer/g' pretty/01_initialization/01_initialization_part044.c

# 函数11: FUN_180073f90 -> finalize_buffer_writer
sed -i 's/FUN_180073f90/finalize_buffer_writer/g' pretty/01_initialization/01_initialization_part044.c

echo "批量重命名完成！"