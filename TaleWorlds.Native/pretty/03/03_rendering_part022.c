#include "TaleWorlds.Native.Split.h"

// 03_rendering_part022.c - 渲染系统网格组件处理文件

/**
 * 渲染系统网格组件处理函数
 * 处理网格组件的创建、配置和材质应用
 * 
 * @param mesh_component_ptr 网格组件指针
 * @param render_context_ptr 渲染上下文指针
 * @param scene_object_ptr 场景对象指针
 * @param parent_mesh_ptr 父网格指针
 * @param render_flags 渲染标志
 */
void process_mesh_component(undefined8 *mesh_component_ptr, longlong render_context_ptr, longlong scene_object_ptr, undefined8 *parent_mesh_ptr, int render_flags)
{
  byte *byte_ptr;
  char char_val;
  bool bool_flag;
  char char_val2;
  int int_val;
  undefined4 uint_val;
  uint uint_val2;
  undefined8 *component_data_ptr;
  char *string_ptr;
  char *string_ptr2;
  longlong long_val;
  longlong long_val2;
  undefined8 *mesh_data_ptr;
  undefined1 *data_ptr;
  byte *byte_ptr2;
  longlong long_val3;
  undefined8 *texture_ptr;
  uint uint_val3;
  uint uint_val4;
  undefined *render_obj_ptr;
  longlong mesh_index;
  uint uint_val5;
  uint *uint_ptr;
  uint uint_val6;
  undefined *material_ptr;
  int int_val2;
  ulonglong ulong_val;
  ulonglong ulong_val2;
  undefined1 *buffer_ptr;
  bool is_equal;
  int stack_index;
  undefined8 *stack_mesh_ptr;
  undefined *stack_render_ptr;
  byte *stack_buffer_ptr;
  uint buffer_size;
  ulonglong buffer_capacity;
  undefined *stack_data_ptr;
  undefined1 *stack_char_ptr;
  uint stack_uint;
  ulonglong stack_ulong;
  undefined *stack_ptr;
  undefined1 *stack_char_ptr2;
  uint stack_uint2;
  ulonglong stack_ulong2;
  int stack_int;
  float float_val;
  float float_val2;
  float float_val3;
  undefined4 float_pack;
  float float_val4;
  float float_val5;
  float float_val6;
  undefined4 float_pack2;
  longlong stack_long;
  longlong stack_array [2];
  undefined8 stack_guard;
  
  stack_guard = 0xfffffffffffffffe;
  component_data_ptr = (undefined8 *)allocate_render_memory(render_context_ptr + 0x60, 0x60);
  *component_data_ptr = 0;
  component_data_ptr[1] = 0;
  component_data_ptr[4] = 0;
  *(undefined4 *)(component_data_ptr + 5) = 1;
  component_data_ptr[6] = 0;
  component_data_ptr[8] = 0;
  string_ptr = "meta_mesh_component";
  do {
    string_ptr2 = string_ptr;
    string_ptr = string_ptr2 + 1;
  } while (*string_ptr != '\0');
  *component_data_ptr = &META_MESH_COMPONENT_TYPE;
  component_data_ptr[2] = string_ptr2 + -0x180a09d7f;
  if (parent_mesh_ptr == (undefined8 *)0x0) {
    long_val = get_render_manager();
    int_val = *(int *)(mesh_component_ptr + 0x40);
    if (int_val == *(int *)(long_val + 0x10)) {
      if (int_val == 0) {
LAB_18027c7b0:
        if (*(int *)(long_val + 0x10) != 0) goto LAB_18027c7b4;
      }
      else {
        string_ptr = (char *)mesh_component_ptr[0x3f];
        string_ptr2 = string_ptr;
        do {
          char_val2 = *string_ptr2;
          char_val = string_ptr2[*(longlong *)(long_val + 8) - (longlong)string_ptr];
          if (char_val2 != char_val) break;
          string_ptr2 = string_ptr2 + 1;
        } while (char_val != '\0');
        if (char_val2 != char_val) goto LAB_18027c7bb;
      }
    }
    else {
      if (int_val == 0) goto LAB_18027c7b0;
LAB_18027c7b4:
      string_ptr = (char *)mesh_component_ptr[0x3f];
LAB_18027c7bb:
      string_ptr2 = "";
      if (string_ptr != (char *)0x0) {
        string_ptr2 = string_ptr;
      }
      add_render_parameter(render_context_ptr, component_data_ptr, &DEFAULT_SHADER_PARAM, string_ptr2);
    }
    stack_mesh_ptr = (undefined8 *)create_mesh_object(_MESH_FACTORY_HANDLE, mesh_component_ptr + 0x3e, 1);
    if (stack_mesh_ptr == (undefined8 *)0x0) {
      return;
    }
    goto LAB_18027c801;
  }
  int_val = *(int *)(mesh_component_ptr + 0x40);
  stack_mesh_ptr = parent_mesh_ptr;
  if (int_val == *(int *)(parent_mesh_ptr + 0x40)) {
    if (int_val == 0) {
LAB_18027c733:
      if (*(int *)(parent_mesh_ptr + 0x40) == 0) goto LAB_18027c801;
      goto LAB_18027c73b;
    }
    string_ptr = (char *)mesh_component_ptr[0x3f];
    string_ptr2 = string_ptr;
    do {
      char_val2 = *string_ptr2;
      char_val = string_ptr2[parent_mesh_ptr[0x3f] - (longlong)string_ptr];
      if (char_val2 != char_val) break;
      string_ptr2 = string_ptr2 + 1;
    } while (char_val != '\0');
    if (char_val2 == char_val) goto LAB_18027c801;
  }
  else {
    if (int_val == 0) goto LAB_18027c733;
LAB_18027c73b:
    string_ptr = (char *)mesh_component_ptr[0x3f];
  }
  string_ptr2 = "";
  if (string_ptr != (char *)0x0) {
    string_ptr2 = string_ptr;
  }
  add_render_parameter(render_context_ptr, component_data_ptr, &DEFAULT_SHADER_PARAM, string_ptr2);
LAB_18027c801:
  if (*(int *)((longlong)mesh_component_ptr + 0x324) != *(int *)((longlong)stack_mesh_ptr + 0x324)) {
    add_render_parameter(render_context_ptr, component_data_ptr, &RENDER_FLAG_DIFFERENT, 0);
  }
  if ((undefined *)*stack_mesh_ptr == &DEFAULT_MESH_TYPE) {
    mesh_data_ptr = stack_mesh_ptr + 0x66;
  }
  else {
    mesh_data_ptr = (undefined8 *)(**(code **)((undefined *)*stack_mesh_ptr + 0x158))(stack_mesh_ptr);
  }
  if ((undefined *)*mesh_component_ptr == &DEFAULT_MESH_TYPE) {
    texture_ptr = mesh_component_ptr + 0x66;
  }
  else {
    texture_ptr = (undefined8 *)(**(code **)((undefined *)*mesh_component_ptr + 0x158))(mesh_component_ptr);
  }
  char_val2 = compare_mesh_data(mesh_data_ptr, texture_ptr, 0x3c23d70a);
  if (char_val2 == '\0') {
    float_val4 = *(float *)(mesh_component_ptr + 0x6c);
    float_val5 = *(float *)((longlong)mesh_component_ptr + 0x364);
    float_val6 = *(float *)(mesh_component_ptr + 0x6d);
    float_pack2 = *(undefined4 *)((longlong)mesh_component_ptr + 0x36c);
    get_mesh_transform(mesh_component_ptr + 0x66, &float_val);
    get_mesh_rotation(mesh_component_ptr + 0x66, stack_array);
    add_render_parameter(render_context_ptr, component_data_ptr, &MESH_POSITION_PARAM, &float_val4);
    add_render_parameter(render_context_ptr, component_data_ptr, &MESH_TRANSFORM_PARAM, &float_val);
    add_render_parameter(render_context_ptr, component_data_ptr, &MESH_ROTATION_PARAM, stack_array);
  }
  if (mesh_component_ptr[0x77] != 0) {
    render_obj_ptr = *(undefined **)(mesh_component_ptr[0x77] + 0x18);
    material_ptr = &DEFAULT_MATERIAL;
    if (render_obj_ptr != (undefined *)0x0) {
      material_ptr = render_obj_ptr;
    }
    add_render_parameter(render_context_ptr, component_data_ptr, &MATERIAL_PARAM, material_ptr);
  }
  iStack_a8 = 0;
  lVar11 = param_1[7];
  if (param_1[8] - lVar11 >> 4 != 0) {
    alStack_78[0] = 0;
    do {
      lVar21 = alStack_78[0];
      puVar20 = &UNK_180a3c3e0;
      lVar11 = *(longlong *)(lVar11 + alStack_78[0] * 0x10);
      if (*(longlong *)(lVar11 + 0x1b0) == 0) {
        lVar12 = lVar11 + 0x10;
      }
      else {
        lVar12 = func_0x000180079240();
      }
      uStack_f0 = 0;
      pbStack_100 = (byte *)0x0;
      uStack_f8 = 0;
      puStack_108 = puVar20;
      FUN_1806277c0(&puStack_108,*(undefined4 *)(lVar12 + 0x10));
      if (0 < *(int *)(lVar12 + 0x10)) {
        puVar20 = &DAT_18098bc73;
        if (*(undefined **)(lVar12 + 8) != (undefined *)0x0) {
          puVar20 = *(undefined **)(lVar12 + 8);
        }
                    // WARNING: Subroutine does not return
        memcpy(pbStack_100,puVar20,(longlong)(*(int *)(lVar12 + 0x10) + 1));
      }
      if ((*(longlong *)(lVar12 + 8) != 0) && (uStack_f8 = 0, pbStack_100 != (byte *)0x0)) {
        *pbStack_100 = 0;
      }
      while ((0 < (int)uStack_f8 && (lVar12 = strstr(pbStack_100,&DAT_180a0ff10), lVar12 != 0))) {
        iVar26 = 6;
        iVar5 = (int)lVar12 - (int)pbStack_100;
        if (uStack_f8 < iVar5 + 6U) {
          iVar26 = uStack_f8 - iVar5;
        }
        uVar24 = iVar5 + iVar26;
        if (uVar24 < uStack_f8) {
          lVar12 = (longlong)(int)uVar24;
          do {
            pbStack_100[lVar12 - iVar26] = pbStack_100[lVar12];
            uVar24 = uVar24 + 1;
            lVar12 = lVar12 + 1;
          } while (uVar24 < uStack_f8);
        }
        uStack_f8 = uStack_f8 - iVar26;
        pbStack_100[uStack_f8] = 0;
      }
      puVar13 = (undefined8 *)FUN_1804c1300(param_2 + 0x60,0x60);
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[4] = 0;
      *(undefined4 *)(puVar13 + 5) = 1;
      puVar13[6] = 0;
      puVar13[8] = 0;
      pcVar9 = "mesh";
      do {
        pcVar10 = pcVar9;
        pcVar9 = pcVar10 + 1;
      } while (*pcVar9 != '\0');
      *puVar13 = &UNK_180a0f3e8;
      puVar13[2] = pcVar10 + -0x180a0f3e7;
      iStackX_10 = 0;
      lStack_80 = 0;
      if ((longlong)(param_1[8] - param_1[7]) >> 4 != 0) {
        do {
          puVar14 = (undefined1 *)0x0;
          lVar21 = *(longlong *)(puStackX_20[7] + lStack_80 * 0x10);
          if (*(longlong *)(lVar21 + 0x1b0) == 0) {
            lVar12 = lVar21 + 0x10;
          }
          else {
            lVar12 = func_0x000180079240();
          }
          uStack_b8 = (uint)puVar14;
          puStack_c8 = &UNK_180a3c3e0;
          uStack_b0 = 0;
          puVar29 = puVar14;
          if (*(int *)(lVar12 + 0x10) != 0) {
            iVar5 = *(int *)(lVar12 + 0x10) + 1;
            if (iVar5 < 0x10) {
              iVar5 = 0x10;
            }
            puStack_c0 = puVar14;
            puVar14 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar5,0x13);
            *puVar14 = 0;
            uVar27 = (ulonglong)puVar14 & 0xffffffffffc00000;
            if (uVar27 == 0) {
              uVar24 = 0;
            }
            else {
              lVar16 = uVar27 + 0x80 + ((longlong)puVar14 - uVar27 >> 0x10) * 0x50;
              puVar23 = (uint *)(lVar16 - (ulonglong)*(uint *)(lVar16 + 4));
              if ((*(byte *)((longlong)puVar23 + 0xe) & 2) == 0) {
                uVar24 = puVar23[7];
                if (0x3ffffff < uVar24) {
                  uVar24 = *puVar23 << 0x10;
                }
              }
              else {
                uVar24 = puVar23[7];
                if (uVar24 < 0x4000000) {
                  uVar28 = (ulonglong)uVar24;
                }
                else {
                  uVar28 = (ulonglong)*puVar23 << 0x10;
                }
                if (0x3ffffff < uVar24) {
                  uVar24 = *puVar23 << 0x10;
                }
                uVar24 = uVar24 - (int)(((longlong)puVar14 -
                                        (((longlong)((longlong)puVar23 + (-0x80 - uVar27)) / 0x50) *
                                         0x10000 + uVar27)) % uVar28);
              }
            }
            puVar29 = (undefined1 *)0x0;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar24);
            if (0 < *(int *)(lVar12 + 0x10)) {
              puVar20 = &DAT_18098bc73;
              if (*(undefined **)(lVar12 + 8) != (undefined *)0x0) {
                puVar20 = *(undefined **)(lVar12 + 8);
              }
              puStack_c0 = puVar14;
                    // WARNING: Subroutine does not return
              memcpy(puVar14,puVar20,(longlong)(*(int *)(lVar12 + 0x10) + 1));
            }
          }
          puStack_c0 = puVar14;
          if ((*(longlong *)(lVar12 + 8) != 0) &&
             (uStack_b8 = (uint)puVar29, puVar14 != (undefined1 *)0x0)) {
            *puVar14 = 0;
          }
          while ((0 < (int)uStack_b8 && (lVar12 = strstr(puStack_c0,&DAT_180a0ff10), lVar12 != 0)))
          {
            iVar26 = 6;
            iVar5 = (int)lVar12 - (int)puStack_c0;
            if (uStack_b8 < iVar5 + 6U) {
              iVar26 = uStack_b8 - iVar5;
            }
            uVar24 = iVar5 + iVar26;
            if (uVar24 < uStack_b8) {
              lVar12 = (longlong)(int)uVar24;
              do {
                puStack_c0[lVar12 - iVar26] = puStack_c0[lVar12];
                uVar24 = uVar24 + 1;
                lVar12 = lVar12 + 1;
              } while (uVar24 < uStack_b8);
            }
            uStack_b8 = uStack_b8 - iVar26;
            puStack_c0[uStack_b8] = 0;
          }
          bVar3 = true;
          uVar24 = uStack_b8;
          if (uStack_f8 == uStack_b8) {
            if (uStack_f8 != 0) {
              pbVar15 = pbStack_100;
              do {
                pbVar1 = pbVar15 + ((longlong)puStack_c0 - (longlong)pbStack_100);
                uVar24 = (uint)*pbVar15 - (uint)*pbVar1;
                if (uVar24 != 0) break;
                pbVar15 = pbVar15 + 1;
              } while (*pbVar1 != 0);
            }
LAB_18027cd22:
            if (uVar24 == 0) {
              if ((*(longlong *)(lVar11 + 0x1b8) != 0) &&
                 (*(longlong *)(*(longlong *)(lVar11 + 0x1b8) + 0xa8) != 0)) {
                lVar12 = FUN_180079430(lVar11);
                lVar16 = FUN_180079430(lVar21);
                iVar5 = *(int *)(lVar12 + 0x10);
                if (iVar5 == *(int *)(lVar16 + 0x10)) {
                  if (iVar5 == 0) {
LAB_18027cd90:
                    if (*(int *)(lVar16 + 0x10) != 0) goto LAB_18027cd98;
                    bVar30 = true;
                  }
                  else {
                    pcVar9 = *(char **)(lVar12 + 8);
                    lVar12 = *(longlong *)(lVar16 + 8) - (longlong)pcVar9;
                    do {
                      cVar4 = *pcVar9;
                      cVar2 = pcVar9[lVar12];
                      if (cVar4 != cVar2) break;
                      pcVar9 = pcVar9 + 1;
                    } while (cVar2 != '\0');
                    bVar30 = cVar4 == cVar2;
                  }
                }
                else {
                  if (iVar5 == 0) goto LAB_18027cd90;
LAB_18027cd98:
                  bVar30 = false;
                }
                if (!bVar30) {
                  pbVar15 = &DAT_18098bc73;
                  if (pbStack_100 != (byte *)0x0) {
                    pbVar15 = pbStack_100;
                  }
                  FUN_180630b20(param_2,puVar13,&DAT_180a03a84,pbVar15);
                  bVar3 = false;
                  lVar12 = FUN_180079430(lVar11);
                  puStack_e8 = &UNK_180a3c3e0;
                  uStack_d0 = 0;
                  puStack_e0 = (undefined1 *)0x0;
                  uStack_d8 = 0;
                  iVar5 = *(int *)(lVar12 + 0x10);
                  if (iVar5 != 0) {
                    iVar26 = iVar5 + 1;
                    if (iVar26 < 0x10) {
                      iVar26 = 0x10;
                    }
                    puStack_e0 = (undefined1 *)
                                 FUN_18062b420(_DAT_180c8ed18,(longlong)iVar26,
                                               CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),0x13));
                    *puStack_e0 = 0;
                    uVar6 = FUN_18064e990(puStack_e0);
                    uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar6);
                    if (0 < *(int *)(lVar12 + 0x10)) {
                      puVar20 = &DAT_18098bc73;
                      if (*(undefined **)(lVar12 + 8) != (undefined *)0x0) {
                        puVar20 = *(undefined **)(lVar12 + 8);
                      }
                    // WARNING: Subroutine does not return
                      memcpy(puStack_e0,puVar20,(longlong)(*(int *)(lVar12 + 0x10) + 1));
                    }
                  }
                  if ((*(longlong *)(lVar12 + 8) != 0) &&
                     (uStack_d8 = 0, puStack_e0 != (undefined1 *)0x0)) {
                    *puStack_e0 = 0;
                  }
                  while ((0 < (int)uStack_d8 &&
                         (lVar12 = strstr(puStack_e0,&DAT_180a0ff10), lVar12 != 0))) {
                    iVar26 = 6;
                    iVar5 = (int)lVar12 - (int)puStack_e0;
                    if (uStack_d8 < iVar5 + 6U) {
                      iVar26 = uStack_d8 - iVar5;
                    }
                    uVar24 = iVar5 + iVar26;
                    if (uVar24 < uStack_d8) {
                      lVar12 = (longlong)(int)uVar24;
                      do {
                        puStack_e0[lVar12 - iVar26] = puStack_e0[lVar12];
                        uVar24 = uVar24 + 1;
                        lVar12 = lVar12 + 1;
                      } while (uVar24 < uStack_d8);
                    }
                    uStack_d8 = uStack_d8 - iVar26;
                    puStack_e0[uStack_d8] = 0;
                  }
                  puVar14 = &DAT_18098bc73;
                  if (puStack_e0 != (undefined1 *)0x0) {
                    puVar14 = puStack_e0;
                  }
                  FUN_180630b20(param_2,puVar13,&UNK_180a04ec0,puVar14);
                  puStack_e8 = &UNK_180a3c3e0;
                  if (puStack_e0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  puStack_e0 = (undefined1 *)0x0;
                  uStack_d0 = uStack_d0 & 0xffffffff00000000;
                  puStack_e8 = &UNK_18098bcb0;
                }
              }
              fStack_a0 = *(float *)(lVar11 + 0x238);
              fStack_9c = *(float *)(lVar11 + 0x23c);
              fStack_98 = *(float *)(lVar11 + 0x240);
              uStack_94 = *(undefined4 *)(lVar11 + 0x244);
              fStack_90 = *(float *)(lVar21 + 0x238);
              fStack_8c = *(float *)(lVar21 + 0x23c);
              fStack_88 = *(float *)(lVar21 + 0x240);
              uStack_84 = *(undefined4 *)(lVar21 + 0x244);
              if (((fStack_a0 != fStack_90) || (fStack_9c != fStack_8c)) || (fStack_98 != fStack_88)
                 ) {
                if (bVar3) {
                  pbVar15 = &DAT_18098bc73;
                  if (pbStack_100 != (byte *)0x0) {
                    pbVar15 = pbStack_100;
                  }
                  FUN_180630b20(param_2,puVar13,&DAT_180a03a84,pbVar15);
                  bVar3 = false;
                }
                uVar7 = (uint)(longlong)(*(float *)(lVar11 + 0x244) * 256.0);
                uVar24 = 0xff;
                if (uVar7 < 0xff) {
                  uVar24 = uVar7;
                }
                uVar18 = (uint)(longlong)(*(float *)(lVar11 + 0x238) * 256.0);
                uVar7 = 0xff;
                if (uVar18 < 0xff) {
                  uVar7 = uVar18;
                }
                uVar19 = (uint)(longlong)(*(float *)(lVar11 + 0x23c) * 256.0);
                uVar18 = 0xff;
                if (uVar19 < 0xff) {
                  uVar18 = uVar19;
                }
                uVar22 = (uint)(longlong)(*(float *)(lVar11 + 0x240) * 256.0);
                uVar19 = 0xff;
                if (uVar22 < 0xff) {
                  uVar19 = uVar22;
                }
                FUN_18062f640(param_2,puVar13,&UNK_180a1674c,
                              ((uVar24 << 8 | uVar7) << 8 | uVar18) << 8 | uVar19);
              }
              fStack_90 = *(float *)(lVar11 + 0x248);
              fStack_8c = *(float *)(lVar11 + 0x24c);
              fStack_88 = *(float *)(lVar11 + 0x250);
              uStack_84 = *(undefined4 *)(lVar11 + 0x254);
              fStack_a0 = *(float *)(lVar21 + 0x248);
              fStack_9c = *(float *)(lVar21 + 0x24c);
              fStack_98 = *(float *)(lVar21 + 0x250);
              uStack_94 = *(undefined4 *)(lVar21 + 0x254);
              if (((fStack_90 != fStack_a0) || (fStack_8c != fStack_9c)) || (fStack_88 != fStack_98)
                 ) {
                if (bVar3) {
                  pbVar15 = &DAT_18098bc73;
                  if (pbStack_100 != (byte *)0x0) {
                    pbVar15 = pbStack_100;
                  }
                  FUN_180630b20(param_2,puVar13,&DAT_180a03a84,pbVar15);
                  bVar3 = false;
                }
                uVar7 = (uint)(longlong)(*(float *)(lVar11 + 0x254) * 256.0);
                uVar24 = 0xff;
                if (uVar7 < 0xff) {
                  uVar24 = uVar7;
                }
                uVar18 = (uint)(longlong)(*(float *)(lVar11 + 0x248) * 256.0);
                uVar7 = 0xff;
                if (uVar18 < 0xff) {
                  uVar7 = uVar18;
                }
                uVar19 = (uint)(longlong)(*(float *)(lVar11 + 0x24c) * 256.0);
                uVar18 = 0xff;
                if (uVar19 < 0xff) {
                  uVar18 = uVar19;
                }
                uVar22 = (uint)(longlong)(*(float *)(lVar11 + 0x250) * 256.0);
                uVar19 = 0xff;
                if (uVar22 < 0xff) {
                  uVar19 = uVar22;
                }
                FUN_18062f640(param_2,puVar13,&UNK_180a16800,
                              ((uVar24 << 8 | uVar7) << 8 | uVar18) << 8 | uVar19);
              }
              if (((*(float *)(lVar21 + 0x2a8) != *(float *)(lVar11 + 0x2a8)) ||
                  (*(float *)(lVar21 + 0x2ac) != *(float *)(lVar11 + 0x2ac))) ||
                 (*(float *)(lVar21 + 0x2b0) != *(float *)(lVar11 + 0x2b0))) {
                if (bVar3) {
                  pbVar15 = &DAT_18098bc73;
                  if (pbStack_100 != (byte *)0x0) {
                    pbVar15 = pbStack_100;
                  }
                  FUN_180630b20(param_2,puVar13,&DAT_180a03a84,pbVar15);
                  bVar3 = false;
                }
                FUN_180630010(param_2,puVar13,&UNK_180a167e0,lVar11 + 0x2a8);
              }
              if (((*(float *)(lVar21 + 0x2b8) != *(float *)(lVar11 + 0x2b8)) ||
                  (*(float *)(lVar21 + 700) != *(float *)(lVar11 + 700))) ||
                 (*(float *)(lVar21 + 0x2c0) != *(float *)(lVar11 + 0x2c0))) {
                if (bVar3) {
                  pbVar15 = &DAT_18098bc73;
                  if (pbStack_100 != (byte *)0x0) {
                    pbVar15 = pbStack_100;
                  }
                  FUN_180630b20(param_2,puVar13,&DAT_180a03a84,pbVar15);
                  bVar3 = false;
                }
                FUN_180630010(param_2,puVar13,&UNK_180a167f0,lVar11 + 0x2b8);
              }
              if (!bVar3) {
                if (puVar8[6] == 0) {
                  puVar13[10] = 0;
                  puVar8[6] = puVar13;
                }
                else {
                  puVar13[10] = puVar8[7];
                  *(undefined8 **)(puVar8[7] + 0x58) = puVar13;
                }
                puVar8[7] = puVar13;
                puVar13[4] = puVar8;
                puVar13[0xb] = 0;
              }
            }
          }
          else if (uStack_f8 == 0) goto LAB_18027cd22;
          puStack_c8 = &UNK_180a3c3e0;
          if (puStack_c0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puStack_c0 = (undefined1 *)0x0;
          uStack_b0 = uStack_b0 & 0xffffffff00000000;
          puStack_c8 = &UNK_18098bcb0;
          iStackX_10 = iStackX_10 + 1;
          lStack_80 = lStack_80 + 1;
          lVar21 = alStack_78[0];
        } while ((ulonglong)(longlong)iStackX_10 <
                 (ulonglong)((longlong)(param_1[8] - param_1[7]) >> 4));
      }
      puStack_108 = &UNK_180a3c3e0;
      if (pbStack_100 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      pbStack_100 = (byte *)0x0;
      uStack_f0 = uStack_f0 & 0xffffffff00000000;
      puStack_108 = &UNK_18098bcb0;
      iStack_a8 = iStack_a8 + 1;
      alStack_78[0] = lVar21 + 1;
      lVar11 = param_1[7];
    } while ((ulonglong)(longlong)iStack_a8 < (ulonglong)(param_1[8] - lVar11 >> 4));
  }
  if ((puVar8[6] != 0) || (puVar8[8] != 0)) {
    if (param_5 != 0) {
      FUN_180630c80(param_2,puVar8,&UNK_180a16930);
    }
    if (*(longlong *)(param_3 + 0x30) == 0) {
      puVar8[10] = 0;
      *(undefined8 **)(param_3 + 0x30) = puVar8;
    }
    else {
      puVar8[10] = *(undefined8 *)(param_3 + 0x38);
      *(undefined8 **)(*(longlong *)(param_3 + 0x38) + 0x58) = puVar8;
    }
    *(undefined8 **)(param_3 + 0x38) = puVar8;
    puVar8[4] = param_3;
    puVar8[0xb] = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18027d420(longlong param_1)
void FUN_18027d420(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  bool bVar13;
  int aiStackX_8 [2];
  int aiStackX_18 [2];
  int aiStackX_20 [2];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  uint uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  int iStack_84;
  longlong lStack_80;
  undefined4 uStack_78;
  longlong lStack_70;
  longlong *plStack_68;
  undefined *puStack_60;
  longlong lStack_58;
  undefined4 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0x324) < 1) {
    return;
  }
  FUN_1806279c0(auStack_a8);
  iVar10 = uStack_98 + -1;
  lVar3 = (longlong)iVar10;
  if (-1 < iVar10) {
    do {
      if (*(char *)(lVar3 + (longlong)puStack_a0) == '/') goto LAB_18027d492;
      iVar10 = iVar10 + -1;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  iVar10 = -1;
LAB_18027d492:
  lVar3 = FUN_180629a40(auStack_a8,&puStack_60,0,iVar10);
  if (puStack_a0 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uVar9 = 0;
  uStack_98 = *(uint *)(lVar3 + 0x10);
  puStack_a0 = *(undefined **)(lVar3 + 8);
  uStack_90 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined4 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 8) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  puStack_60 = &UNK_180a3c3e0;
  if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_58 = 0;
  uStack_48 = 0;
  puStack_60 = &UNK_18098bcb0;
  uVar8 = uStack_98 + 4;
  FUN_1806277c0(auStack_a8,uVar8);
  *(undefined4 *)(puStack_a0 + uStack_98) = 0x646d6d2f;
  *(undefined1 *)((longlong)(puStack_a0 + uStack_98) + 4) = 0;
  uStack_98 = uVar8;
  FUN_180628380(auStack_a8,*(undefined4 *)(param_1 + 0x324));
  iVar10 = uStack_98 + 4;
  FUN_1806277c0(auStack_a8,iVar10);
  *(undefined4 *)(puStack_a0 + uStack_98) = 0x646d6d2e;
  *(undefined1 *)((longlong)(puStack_a0 + uStack_98) + 4) = 0;
  uStack_98 = iVar10;
  puVar4 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
  puVar6 = &DAT_18098bc73;
  if (puStack_a0 != (undefined *)0x0) {
    puVar6 = puStack_a0;
  }
  *puVar4 = 0;
  *(undefined1 *)(puVar4 + 2) = 0;
  FUN_18062dee0(puVar4,puVar6,&UNK_180a0cf4c);
  uStack_88 = 0x31444d4d;
  fwrite(&uStack_88,4,1,puVar4[1]);
  aiStackX_18[0] = (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 4);
  fwrite(aiStackX_18,4,1,puVar4[1]);
  uVar12 = uVar9;
  if (0 < aiStackX_18[0]) {
    do {
      lVar3 = *(longlong *)(uVar12 + *(longlong *)(param_1 + 0x38));
      aiStackX_20[0] = *(int *)(lVar3 + 0x20);
      fwrite(aiStackX_20,4,1,puVar4[1]);
      puVar6 = &DAT_18098bc73;
      if (*(undefined **)(lVar3 + 0x18) != (undefined *)0x0) {
        puVar6 = *(undefined **)(lVar3 + 0x18);
      }
      fwrite(puVar6,1,(longlong)aiStackX_20[0],puVar4[1]);
      iStack_84 = (int)uVar9;
      fwrite(&iStack_84,4,1,puVar4[1]);
      uStack_78 = 0;
      lStack_80 = lVar3;
      FUN_18007f770(&lStack_80);
      lVar3 = lStack_70;
      aiStackX_8[0] = *(int *)(lStack_70 + 0x60);
      fwrite(aiStackX_8,4,1,puVar4[1]);
      puVar5 = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18,(longlong)aiStackX_8[0] << 2,0x10);
      iVar10 = 0;
      if (0 < aiStackX_8[0]) {
        lVar11 = 0;
        puVar7 = puVar5;
        do {
          *puVar7 = *(undefined4 *)(lVar11 + 0x54 + *(longlong *)(lVar3 + 0x68));
          iVar10 = iVar10 + 1;
          lVar11 = lVar11 + 0x5c;
          puVar7 = puVar7 + 1;
        } while (iVar10 < aiStackX_8[0]);
      }
      fwrite(puVar5,4,(longlong)aiStackX_8[0],puVar4[1]);
      lVar3 = lStack_80;
      if (puVar5 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar5);
      }
      if (lStack_80 != 0) {
        while( true ) {
          LOCK();
          cVar2 = *(char *)(lVar3 + 0xec);
          bVar13 = cVar2 == '\0';
          if (bVar13) {
            *(char *)(lVar3 + 0xec) = '\x01';
            cVar2 = '\0';
          }
          UNLOCK();
          if (bVar13) break;
          iVar10 = _Thrd_id();
          if ((*(int *)(lVar3 + 0xf0) == iVar10) || (*(int *)(lVar3 + 0xf0) != 0))
          goto LAB_18027d773;
          Sleep();
        }
        cVar2 = '\0';
LAB_18027d773:
        LOCK();
        piVar1 = (int *)(lVar3 + 0xe8);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (cVar2 == '\0') {
          if ((((iVar10 == 1) && (*(longlong *)(lStack_80 + 0x210) != 0)) &&
              (lVar11 = lStack_80, FUN_1800791a0(lStack_80), *(char *)(lVar11 + 0xfc) == '\0')) &&
             ((*(char *)(lVar11 + 0xf4) == '\0' &&
              (((*(byte *)(lVar11 + 0xfd) & 0x20) == 0 || ((*(byte *)(lVar11 + 0xfe) & 1) == 0))))))
          {
            plStack_68 = *(longlong **)(lVar11 + 0x210);
            *(undefined8 *)(lVar11 + 0x210) = 0;
            if (plStack_68 != (longlong *)0x0) {
              (**(code **)(*plStack_68 + 0x38))();
            }
          }
          LOCK();
          *(undefined1 *)(lVar3 + 0xec) = 0;
          UNLOCK();
        }
        lStack_80 = 0;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar12 = uVar12 + 0x10;
    } while ((int)uVar8 < aiStackX_18[0]);
  }
  if (puVar4[1] != 0) {
    fclose();
    puVar4[1] = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}





