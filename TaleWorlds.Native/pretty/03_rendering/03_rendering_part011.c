#include "TaleWorlds.Native.Split.h"

// 03_rendering_part011.c - 渲染系统第11部分 - 3个函数

/**
 * 渲染材质加载函数
 * 从数据流中解析并加载渲染材质信息
 * 
 * @param material_context 材质上下文指针
 * @param data_stream 数据流指针
 */
void load_rendering_material(longlong material_context, longlong data_stream)

{
  byte *temp_byte_ptr;
  uint shader_count;
  int *texture_data;
  undefined *texture_ptr;
  int texture_id;
  int texture_width;
  int texture_height;
  int texture_format;
  undefined8 material_flags;
  longlong buffer_offset;
  byte *string_ptr;
  uint *data_ptr;
  undefined4 *material_prop;
  undefined8 *material_array;
  int loop_counter;
  ulonglong flag_index;
  undefined8 *flag_ptr;
  undefined8 *flag_array;
  uint material_index;
  longlong array_offset;
  ulonglong loop_limit;
  undefined8 *render_state;
  undefined *render_config;
  longlong *shader_table;
  ulonglong shader_index;
  undefined1 security_buffer [32];
  uint material_type;
  ulonglong texture_limit;
  undefined8 *current_texture;
  longlong saved_data_stream;
  longlong saved_material_context;
  undefined8 stack_guard;
  undefined *string_buffer;
  undefined1 *char_buffer;
  undefined4 buffer_size;
  undefined1 render_data [72];
  undefined *shader_ptr;
  byte *texture_buffer;
  int texture_count;
  byte texture_data_buffer [1032];
  undefined *temp_ptr;
  byte *temp_buffer;
  int temp_counter;
  byte temp_data_buffer [1032];
  ulonglong checksum;
  
  // 安全检查和初始化
  stack_guard = 0xfffffffffffffffe;
  checksum = GLOBAL_SECURITY_CHECK ^ (ulonglong)security_buffer;
  material_type = **(uint **)(data_stream + 8);
  *(uint **)(data_stream + 8) = *(uint **)(data_stream + 8) + 1;
  saved_material_type = material_type;
  saved_data_stream = data_stream;
  saved_material_context = material_context;
  
  // 调用材质初始化函数
  initialize_material_properties(&MATERIAL_PROPERTY_TABLE, data_stream, material_context);
  *(longlong *)(data_stream + 8) = *(longlong *)(data_stream + 8) + 4;
  
  flag_index = 0;
  *(undefined4 *)(material_context + 4) = 0;
  shader_count = **(uint **)(data_stream + 8);
  *(uint **)(data_stream + 8) = *(uint **)(data_stream + 8) + 1;
  
  if (shader_count != 0) {
    loop_limit = (ulonglong)shader_count;
    do {
      // 初始化着色器解析缓冲区
      temp_ptr = &SHADER_BASE_ADDRESS;
      temp_buffer = temp_data_buffer;
      temp_counter = 0;
      temp_data_buffer[0] = 0;
      
      material_index = **(uint **)(data_stream + 8);
      data_ptr = *(uint **)(data_stream + 8) + 1;
      *(uint **)(data_stream + 8) = data_ptr;
      
      if (material_index != 0) {
        // 读取着色器名称
        parse_shader_name(&temp_ptr, data_ptr, material_index);
        *(longlong *)(data_stream + 8) = *(longlong *)(data_stream + 8) + (ulonglong)material_index;
      }
      
      // 查找着色器表中的匹配项
      shader_table = (longlong *)&SHADER_LOOKUP_TABLE;
      shader_index = flag_index;
      do {
        buffer_offset = -1;
        do {
          buffer_offset = buffer_offset + 1;
        } while (*(char *)(*shader_table + buffer_offset) != '\0');
        loop_counter = (int)buffer_offset;
        
        if (temp_counter == loop_counter) {
          if (temp_counter != 0) {
            string_ptr = temp_buffer;
            do {
              temp_byte_ptr = string_ptr + (*shader_table - (longlong)temp_buffer);
              loop_counter = (uint)*string_ptr - (uint)*temp_byte_ptr;
              if (loop_counter != 0) break;
              string_ptr = string_ptr + 1;
            } while (*temp_byte_ptr != 0);
          }
SHADER_FOUND:
          if (loop_counter == 0) {
            // 设置材质标志
            *(uint *)(material_context + 4) =
                 *(uint *)(material_context + 4) | *(uint *)(&SHADER_FLAG_TABLE + shader_index * 0x10);
            break;
          }
        }
        else if (temp_counter == 0) goto SHADER_FOUND;
        
        shader_index = shader_index + 1;
        shader_table = shader_table + 2;
      } while ((longlong)shader_table < 0x18098e220);
      
      temp_ptr = &SHADER_END_MARKER;
      loop_limit = loop_limit - 1;
      material_index = saved_material_type;
    } while (loop_limit != 0);
  }
  puStack_888 = &UNK_18098bb30;
  pbStack_880 = abStack_870;
  iStack_878 = 0;
  abStack_870[0] = 0;
  uVar2 = **(uint **)(param_2 + 8);
  puVar12 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar12;
  if (uVar2 != 0) {
    FUN_180045f60(&puStack_888,puVar12,uVar2);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar2;
  }
  plVar24 = (longlong *)0x180bf8ff0;
  do {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (*(char *)(*plVar24 + lVar10) != '\0');
    iVar15 = (int)lVar10;
    if (iStack_878 == iVar15) {
      if (iStack_878 != 0) {
        pbVar11 = pbStack_880;
        do {
          pbVar1 = pbVar11 + (*plVar24 - (longlong)pbStack_880);
          iVar15 = (uint)*pbVar11 - (uint)*pbVar1;
          if (iVar15 != 0) break;
          pbVar11 = pbVar11 + 1;
        } while (*pbVar1 != 0);
      }
LAB_180273bfe:
      if (iVar15 == 0) {
        *(undefined1 *)(param_1 + 0x11c) =
             *(undefined1 *)((longlong)(int)uVar16 * 0x10 + 0x180bf8ff8);
        break;
      }
    }
    else if (iStack_878 == 0) goto LAB_180273bfe;
    uVar16 = (ulonglong)((int)uVar16 + 1);
    plVar24 = plVar24 + 2;
  } while ((longlong)plVar24 < 0x180bf90b0);
  puStack_888 = &UNK_18098bcb0;
  uVar9 = (*(undefined8 **)(param_2 + 8))[1];
  *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  lVar10 = *(longlong *)(param_2 + 8);
  puVar12 = (uint *)(lVar10 + 0x10);
  *(uint **)(param_2 + 8) = puVar12;
  uVar2 = *puVar12;
  *(longlong *)(param_2 + 8) = lVar10 + 0x14;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  puVar13 = *(undefined4 **)(param_2 + 8);
  if (0 < (int)uVar2) {
    uVar16 = (ulonglong)uVar2;
    do {
      piVar3 = *(int **)(param_2 + 8);
      iVar15 = *piVar3;
      *(int **)(param_2 + 8) = piVar3 + 1;
      iVar5 = piVar3[1];
      iVar6 = piVar3[2];
      iVar7 = piVar3[3];
      iVar8 = piVar3[4];
      *(int **)(param_2 + 8) = piVar3 + 5;
      piVar3 = (int *)(param_1 + 0x18 + (longlong)iVar15 * 0x10);
      *piVar3 = iVar5;
      piVar3[1] = iVar6;
      piVar3[2] = iVar7;
      piVar3[3] = iVar8;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
    puVar13 = *(undefined4 **)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x118) = *puVar13;
  lVar10 = *(longlong *)(param_2 + 8);
  puVar12 = (uint *)(lVar10 + 4);
  *(uint **)(param_2 + 8) = puVar12;
  uVar2 = *puVar12;
  puVar13 = (undefined4 *)(lVar10 + 8);
  *(undefined4 **)(param_2 + 8) = puVar13;
  uVar16 = (ulonglong)uVar2;
  if (0 < (int)uVar2) {
    do {
      uStack_910 = uVar16;
      puStack_8e8 = &UNK_1809fcc58;
      puStack_8e0 = auStack_8d0;
      uStack_8d8 = 0;
      auStack_8d0[0] = 0;
      uVar19 = **(uint **)(param_2 + 8);
      *(uint **)(param_2 + 8) = *(uint **)(param_2 + 8) + 1;
      if (uVar19 != 0) {
        FUN_180049c70(&puStack_8e8);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar19;
      }
      puVar14 = (undefined8 *)0x0;
      puVar22 = *(undefined8 **)(param_1 + 0x128);
      if (puVar22 < *(undefined8 **)(param_1 + 0x130)) {
        *(undefined8 **)(param_1 + 0x128) = puVar22 + 0xb;
        *puVar22 = &UNK_18098bcb0;
        puVar22[1] = 0;
        *(undefined4 *)(puVar22 + 2) = 0;
        *puVar22 = &UNK_1809fcc58;
        puVar22[1] = puVar22 + 3;
        *(undefined4 *)(puVar22 + 2) = 0;
        *(undefined1 *)(puVar22 + 3) = 0;
        *(undefined4 *)(puVar22 + 2) = uStack_8d8;
        puStack_908 = puVar22;
        strcpy_s(puVar22[1],0x40);
      }
      else {
        puVar18 = *(undefined8 **)(param_1 + 0x120);
        lVar10 = ((longlong)puVar22 - (longlong)puVar18) / 0x58;
        if (lVar10 == 0) {
          lVar10 = 1;
LAB_180273eb0:
          puVar14 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar10 * 0x58);
          puVar22 = *(undefined8 **)(param_1 + 0x128);
          puVar18 = *(undefined8 **)(param_1 + 0x120);
        }
        else {
          lVar10 = lVar10 * 2;
          if (lVar10 != 0) goto LAB_180273eb0;
        }
        puVar17 = puVar14;
        if (puVar18 != puVar22) {
          lVar20 = (longlong)puVar18 - (longlong)puVar14;
          do {
            *puVar17 = &UNK_18098bcb0;
            puVar17[1] = 0;
            *(undefined4 *)(puVar17 + 2) = 0;
            *puVar17 = &UNK_1809fcc58;
            puVar17[1] = puVar17 + 3;
            *(undefined4 *)(puVar17 + 2) = 0;
            *(undefined1 *)(puVar17 + 3) = 0;
            *(undefined4 *)(puVar17 + 2) = *(undefined4 *)(lVar20 + 0x10 + (longlong)puVar17);
            puVar4 = *(undefined **)(lVar20 + 8 + (longlong)puVar17);
            puVar23 = &DAT_18098bc73;
            if (puVar4 != (undefined *)0x0) {
              puVar23 = puVar4;
            }
            puStack_908 = puVar17;
            strcpy_s(puVar17[1],0x40,puVar23);
            puVar17 = puVar17 + 0xb;
            param_2 = lStack_900;
            param_1 = lStack_8f8;
          } while ((undefined8 *)(lVar20 + (longlong)puVar17) != puVar22);
        }
        *puVar17 = &UNK_18098bcb0;
        puVar17[1] = 0;
        *(undefined4 *)(puVar17 + 2) = 0;
        *puVar17 = &UNK_1809fcc58;
        puVar17[1] = puVar17 + 3;
        *(undefined4 *)(puVar17 + 2) = 0;
        *(undefined1 *)(puVar17 + 3) = 0;
        *(undefined4 *)(puVar17 + 2) = uStack_8d8;
        puStack_908 = puVar17;
        strcpy_s(puVar17[1],0x40);
        puVar22 = *(undefined8 **)(param_1 + 0x128);
        puVar18 = *(undefined8 **)(param_1 + 0x120);
        if (puVar18 != puVar22) {
          do {
            (**(code **)*puVar18)(puVar18,0);
            puVar18 = puVar18 + 0xb;
          } while (puVar18 != puVar22);
          puVar18 = *(undefined8 **)(param_1 + 0x120);
        }
        if (puVar18 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar18);
        }
        *(undefined8 **)(param_1 + 0x120) = puVar14;
        *(undefined8 **)(param_1 + 0x128) = puVar17 + 0xb;
        *(undefined8 **)(param_1 + 0x130) = puVar14 + lVar10 * 0xb;
      }
      puStack_8e8 = &UNK_18098bcb0;
      uVar16 = uStack_910 - 1;
    } while (uStack_910 - 1 != 0);
    puVar13 = *(undefined4 **)(param_2 + 8);
    uStack_910 = 0;
    uVar19 = uStack_918;
  }
  *(undefined4 *)(param_1 + 0x140) = *puVar13;
  puVar13 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar13;
  *(undefined4 *)(param_1 + 0x144) = *puVar13;
  puVar13 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar13;
  *(undefined4 *)(param_1 + 0x148) = *puVar13;
  puVar13 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar13;
  *(undefined4 *)(param_1 + 0x14c) = *puVar13;
  lVar10 = *(longlong *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(lVar10 + 4);
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(lVar10 + 8);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(lVar10 + 0xc);
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(lVar10 + 0x10);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(lVar10 + 0x14);
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(lVar10 + 0x18);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(lVar10 + 0x1c);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(lVar10 + 0x20);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(lVar10 + 0x24);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(lVar10 + 0x28);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(lVar10 + 0x2c);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(lVar10 + 0x30);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(lVar10 + 0x34);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(lVar10 + 0x38);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(lVar10 + 0x3c);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(lVar10 + 0x40);
  *(undefined4 **)(param_2 + 8) = (undefined4 *)(lVar10 + 0x44);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(lVar10 + 0x44);
  puVar13 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar13;
  *(undefined4 *)(param_1 + 0x194) = *puVar13;
  puVar13 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar13;
  *(undefined4 *)(param_1 + 0x198) = *puVar13;
  puVar13 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar13;
  *(undefined4 *)(param_1 + 0x19c) = *puVar13;
  puVar13 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar13;
  *(undefined4 *)(param_1 + 0x1a0) = *puVar13;
  puVar13 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar13;
  if (uVar19 != 0) {
    *(undefined4 *)(param_1 + 0x1a4) = *puVar13;
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
    puVar13 = *(undefined4 **)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x1a8) = *puVar13;
  puVar13 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar13;
  if (1 < uVar19) {
    *(undefined4 *)(param_1 + 0x1ac) = *puVar13;
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_938);
}





/**
 * 材质序列化函数
 * 将材质数据序列化到数据流中
 * 
 * @param material_header 材质头部信息
 * @param data_stream 数据流指针
 */
void serialize_material_data(undefined4 *material_header, longlong *data_stream)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  int *piVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  
  puVar15 = (undefined4 *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar15 + (4 - *param_2));
    puVar15 = (undefined4 *)param_2[1];
  }
  *puVar15 = 2;
  param_2[1] = param_2[1] + 4;
  FUN_180272d60(&UNK_18098e220,*param_1,param_2);
  puVar15 = (undefined4 *)param_2[1];
  uVar11 = param_1[1];
  if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar15 + (4 - *param_2));
    puVar15 = (undefined4 *)param_2[1];
  }
  uVar16 = 0;
  *puVar15 = 0;
  lVar9 = *param_2;
  lVar7 = param_2[1] + 4;
  param_2[1] = lVar7;
  uVar8 = uVar16;
  if (lVar9 != 0) {
    uVar8 = lVar7 - lVar9;
  }
  if ((ulonglong)((lVar9 - lVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(lVar7 - lVar9) + 4);
    lVar7 = param_2[1];
  }
  param_2[1] = lVar7 + 4;
  puVar13 = (undefined8 *)&UNK_18098e1c0;
  uVar12 = uVar16;
  do {
    if ((*(uint *)(puVar13 + 1) & uVar11) != 0) {
      FUN_180639de0(param_2,*puVar13);
      uVar12 = (ulonglong)((int)uVar12 + 1);
    }
    puVar13 = puVar13 + 2;
  } while ((longlong)puVar13 < 0x18098e220);
  *(int *)(uVar8 + *param_2) = (int)uVar12;
  pcVar5 = (char *)0x180bf8ff8;
  uVar8 = uVar16;
  do {
    if (*pcVar5 == *(char *)(param_1 + 0x47)) {
      FUN_180639de0(param_2,*(undefined8 *)((longlong)(int)uVar8 * 0x10 + 0x180bf8ff0));
      break;
    }
    uVar8 = (ulonglong)((int)uVar8 + 1);
    pcVar5 = pcVar5 + 0x10;
  } while ((longlong)pcVar5 < 0x180bf90b8);
  puVar15 = (undefined4 *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 0x11) {
    FUN_180639bf0(param_2,(longlong)puVar15 + (0x10 - *param_2));
    puVar15 = (undefined4 *)param_2[1];
  }
  uVar2 = param_1[3];
  uVar3 = param_1[4];
  uVar4 = param_1[5];
  plVar14 = (longlong *)(param_1 + 6);
  *puVar15 = param_1[2];
  puVar15[1] = uVar2;
  puVar15[2] = uVar3;
  puVar15[3] = uVar4;
  param_2[1] = param_2[1] + 0x10;
  lVar9 = 0x10;
  puVar15 = (undefined4 *)param_2[1];
  plVar6 = plVar14;
  uVar8 = uVar16;
  do {
    if ((*plVar6 != 0) || (plVar6[1] != 0)) {
      uVar8 = (ulonglong)((int)uVar8 + 1);
    }
    plVar6 = plVar6 + 2;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar15 + (4 - *param_2));
    puVar15 = (undefined4 *)param_2[1];
  }
  *puVar15 = (int)uVar8;
  param_2[1] = param_2[1] + 4;
  uVar8 = uVar16;
  plVar6 = plVar14;
  do {
    piVar10 = (int *)param_2[1];
    if ((*plVar14 != 0) || (plVar14[1] != 0)) {
      if ((ulonglong)((*param_2 - (longlong)piVar10) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)piVar10 + (4 - *param_2));
        piVar10 = (int *)param_2[1];
      }
      *piVar10 = (int)uVar8;
      param_2[1] = param_2[1] + 4;
      puVar15 = (undefined4 *)param_2[1];
      if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 0x11) {
        FUN_180639bf0(param_2,(longlong)puVar15 + (0x10 - *param_2));
        puVar15 = (undefined4 *)param_2[1];
      }
      uVar2 = *(undefined4 *)((longlong)plVar6 + 4);
      lVar9 = plVar6[1];
      uVar3 = *(undefined4 *)((longlong)plVar6 + 0xc);
      *puVar15 = (int)*plVar6;
      puVar15[1] = uVar2;
      puVar15[2] = (int)lVar9;
      puVar15[3] = uVar3;
      param_2[1] = param_2[1] + 0x10;
      piVar10 = (int *)param_2[1];
    }
    uVar11 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar11;
    plVar14 = plVar14 + 2;
    plVar6 = plVar6 + 2;
  } while ((int)uVar11 < 0x10);
  iVar1 = param_1[0x46];
  if ((ulonglong)((*param_2 - (longlong)piVar10) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)piVar10 + (4 - *param_2));
    piVar10 = (int *)param_2[1];
  }
  *piVar10 = iVar1;
  puVar15 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar15;
  lVar9 = *(longlong *)(param_1 + 0x4a);
  lVar7 = *(longlong *)(param_1 + 0x48);
  if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar15 + (4 - *param_2));
    puVar15 = (undefined4 *)param_2[1];
  }
  *puVar15 = (int)((lVar9 - lVar7) / 0x58);
  param_2[1] = param_2[1] + 4;
  puVar15 = (undefined4 *)param_2[1];
  lVar9 = *(longlong *)(param_1 + 0x4a) - *(longlong *)(param_1 + 0x48) >> 0x3f;
  uVar8 = uVar16;
  if ((*(longlong *)(param_1 + 0x4a) - *(longlong *)(param_1 + 0x48)) / 0x58 + lVar9 != lVar9) {
    do {
      FUN_180639ec0(param_2,uVar16 * 0x58 + *(longlong *)(param_1 + 0x48));
      uVar11 = (int)uVar8 + 1;
      uVar16 = (ulonglong)(int)uVar11;
      uVar8 = (ulonglong)uVar11;
    } while (uVar16 < (ulonglong)
                      ((*(longlong *)(param_1 + 0x4a) - *(longlong *)(param_1 + 0x48)) / 0x58));
    puVar15 = (undefined4 *)param_2[1];
  }
  uVar2 = param_1[0x50];
  if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar15 + (4 - *param_2));
    puVar15 = (undefined4 *)param_2[1];
  }
  *puVar15 = uVar2;
  puVar15 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar15;
  uVar2 = param_1[0x51];
  if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar15 + (4 - *param_2));
    puVar15 = (undefined4 *)param_2[1];
  }
  *puVar15 = uVar2;
  puVar15 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar15;
  uVar2 = param_1[0x52];
  if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar15 + (4 - *param_2));
    puVar15 = (undefined4 *)param_2[1];
  }
  *puVar15 = uVar2;
  puVar15 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar15;
  uVar2 = param_1[0x53];
  if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar15 + (4 - *param_2));
    puVar15 = (undefined4 *)param_2[1];
  }
  *puVar15 = uVar2;
  puVar15 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar15;
  if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 0x11) {
    FUN_180639bf0(param_2,(longlong)puVar15 + (0x10 - *param_2));
    puVar15 = (undefined4 *)param_2[1];
  }
  *puVar15 = param_1[0x54];
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = param_1[0x55];
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = param_1[0x56];
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = param_1[0x57];
  puVar15 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar15;
  if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 0x11) {
    FUN_180639bf0(param_2,(longlong)puVar15 + (0x10 - *param_2));
    puVar15 = (undefined4 *)param_2[1];
  }
  *puVar15 = param_1[0x58];
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = param_1[0x59];
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = param_1[0x5a];
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = param_1[0x5b];
  puVar15 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar15;
  if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 0x11) {
    FUN_180639bf0(param_2,(longlong)puVar15 + (0x10 - *param_2));
    puVar15 = (undefined4 *)param_2[1];
  }
  *puVar15 = param_1[0x5c];
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = param_1[0x5d];
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = param_1[0x5e];
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = param_1[0x5f];
  puVar15 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar15;
  if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 0x11) {
    FUN_180639bf0(param_2,(longlong)puVar15 + (0x10 - *param_2));
    puVar15 = (undefined4 *)param_2[1];
  }
  *puVar15 = param_1[0x60];
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = param_1[0x61];
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = param_1[0x62];
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = param_1[99];
  puVar15 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar15;
  uVar2 = param_1[100];
  if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar15 + (4 - *param_2));
    puVar15 = (undefined4 *)param_2[1];
  }
  *puVar15 = uVar2;
  puVar15 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar15;
  uVar2 = param_1[0x65];
  if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar15 + (4 - *param_2));
    puVar15 = (undefined4 *)param_2[1];
  }
  *puVar15 = uVar2;
  puVar15 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar15;
  uVar2 = param_1[0x66];
  if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar15 + (4 - *param_2));
    puVar15 = (undefined4 *)param_2[1];
  }
  *puVar15 = uVar2;
  puVar15 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar15;
  uVar2 = param_1[0x67];
  if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar15 + (4 - *param_2));
    puVar15 = (undefined4 *)param_2[1];
  }
  *puVar15 = uVar2;
  puVar15 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar15;
  uVar2 = param_1[0x68];
  if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar15 + (4 - *param_2));
    puVar15 = (undefined4 *)param_2[1];
  }
  *puVar15 = uVar2;
  puVar15 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar15;
  uVar2 = param_1[0x69];
  if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar15 + (4 - *param_2));
    puVar15 = (undefined4 *)param_2[1];
  }
  *puVar15 = uVar2;
  puVar15 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar15;
  uVar2 = param_1[0x6a];
  if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar15 + (4 - *param_2));
    puVar15 = (undefined4 *)param_2[1];
  }
  *puVar15 = uVar2;
  puVar15 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar15;
  uVar2 = param_1[0x6b];
  if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar15 + (4 - *param_2));
    *(undefined4 *)param_2[1] = uVar2;
  }
  else {
    *puVar15 = uVar2;
  }
  param_2[1] = param_2[1] + 4;
  return;
}



/**
 * 材质对象初始化函数
 * 初始化材质对象的默认值和属性
 * 
 * @param material_obj 材质对象指针
 * @return 初始化后的材质对象指针
 */
undefined8 * initialize_material_object(undefined8 *material_obj)

{
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x11;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x3f266666;
  *(undefined4 *)(param_1 + 0x29) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x35) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x33) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x3f800000;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x3f8000003f800000;
  param_1[0x2f] = 0x3f8000003f800000;
  param_1[0x30] = 0x3f8000003f800000;
  param_1[0x31] = 0x3f8000003f800000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return param_1;
}





