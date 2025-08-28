#include "TaleWorlds.Native.Split.h"

/**
 * 渲染系统高级碰撞检测和对象处理模块
 * 
 * 本模块包含1个核心函数，用于处理渲染对象之间的碰撞检测、
 * 边界计算、向量运算和对象关系管理。主要功能包括：
 * - 渲染对象碰撞检测和距离计算
 * - 边界框和向量运算处理
 * - 对象关系建立和管理
 * - 渲染状态更新和参数控制
 * 
 * 函数列表：
 * - RenderingSystem_AdvancedCollisionDetection: 高级碰撞检测和对象处理
 */

/**
 * 渲染系统高级碰撞检测和对象处理函数
 * 
 * 该函数负责处理渲染对象之间的复杂碰撞检测，包括：
 * - 对象边界计算和距离测量
 * - 碰撞关系建立和管理
 * - 向量运算和几何计算
 * - 渲染状态更新和同步
 * 
 * @param render_context 渲染上下文指针，包含渲染系统状态
 * @param object_id_1 第一个对象的ID标识
 * @param object_id_2 第二个对象的ID标识
 * @param object_id_3 第三个对象的ID标识
 */
void RenderingSystem_AdvancedCollisionDetection(longlong render_context, int object_id_1, int object_id_2, int object_id_3)
{
    // 声明变量
    byte has_components_flag;
    undefined8 *component_ptr;
    float *float_ptr;
    undefined8 *object_ptr;
    longlong temp_long_1;
    longlong temp_long_2;
    longlong temp_long_3;
    longlong temp_long_4;
    longlong temp_long_5;
    longlong temp_long_6;
    longlong temp_long_7;
    longlong temp_long_8;
    longlong temp_long_9;
    bool collision_detected;
    longlong *long_ptr;
    ulonglong ulong_temp_1;
    int int_temp_1;
    int int_temp_2;
    uint uint_temp_1;
    uint uint_temp_2;
    ulonglong ulong_temp_2;
    undefined8 *data_ptr;
    int int_temp_3;
    ulonglong ulong_temp_3;
    uint uint_temp_3;
    ulonglong ulong_temp_4;
    ulonglong ulong_temp_5;
    undefined8 *array_ptr;
    bool bool_temp_1;
    ulonglong ulong_temp_6;
    longlong *long_ptr_2;
    undefined8 *ptr_temp_1;
    longlong *long_ptr_3;
    int int_temp_4;
    uint uint_temp_4;
    longlong long_temp_10;
    ulonglong *ulong_ptr_1;
    ulonglong ulong_temp_7;
    uint uint_temp_5;
    int int_temp_5;
    longlong *long_ptr_4;
    ulonglong ulong_temp_8;
    char char_temp_1;
    undefined4 undefined_temp_1;
    float float_temp_1;
    undefined1 byte_array_1 [16];
    float distance_x;
    float distance_y;
    float vector_x;
    float vector_y;
    float center_x;
    float center_y;
    float normal_x;
    float normal_y;
    float dot_product;
    float inv_sqrt;
    char stack_char_1;
    uint stack_uint_1;
    int stack_int_1;
    ulonglong stack_ulong_1;
    float stack_float_1;
    uint stack_uint_2;
    ulonglong ulong_temp_9;
  
  puVar34 = *(ulonglong **)(param_1 + 0x478);
  uVar22 = 0;
  uVar21 = 0;
  uVar15 = 0;
  uVar20 = *(longlong *)(param_1 + 0x480) - (longlong)puVar34 >> 3;
  uVar12 = uVar22;
  uVar26 = uVar22;
  uVar17 = uVar22;
  uVar35 = uVar22;
  if (uVar20 != 0) {
    do {
      uVar32 = *puVar34;
      iVar14 = *(int *)(uVar32 + 0x130);
      uVar23 = uVar32;
      uVar39 = uVar35;
      if (((param_2 != iVar14) && (uVar23 = uVar12, uVar39 = uVar32, param_3 != iVar14)) &&
         (uVar39 = uVar35, param_4 == iVar14)) {
        uVar26 = uVar32;
      }
      if (((uVar23 != 0) && (uVar39 != 0)) && (uVar26 != 0)) break;
      uVar36 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar36;
      puVar34 = puVar34 + 1;
      uVar12 = uVar23;
      uVar35 = uVar39;
    } while ((ulonglong)(longlong)(int)uVar36 < uVar20);
    if (((uVar23 != 0) && (uVar39 != 0)) && (uVar26 != 0)) {
      uVar36 = 0xffffffff;
      cVar40 = false;
      iVar13 = -1;
      fStack_100 = 10000.0;
      bVar1 = *(byte *)(uVar23 + 0xa8);
      iVar30 = -1;
      uStack_fc = 0xffffffff;
      iVar14 = -1;
      iStack_110 = -1;
      uStack_108 = 0;
      cStack0000000000000028 = false;
      uStack_124 = 0;
      if (bVar1 != 0) {
        puVar18 = (undefined8 *)(uVar23 + 0x60);
        uVar12 = uVar22;
        uVar17 = uVar22;
        do {
          uVar16 = (uint)uVar12;
          puVar2 = (undefined8 *)*puVar18;
          if (*(char *)(puVar2 + 4) == '\x02') {
            uVar12 = puVar2[2];
            if (uVar12 == uVar23) {
              uVar12 = puVar2[3];
            }
            pfVar3 = (float *)puVar2[1];
            bVar25 = false;
            uVar20 = 0xffffffff;
            iVar37 = -1;
            uVar35 = 0xffffffff;
            iVar19 = -1;
            fVar49 = 10001.0;
            fVar42 = *(float *)*puVar2;
            fVar46 = ((float *)*puVar2)[1];
            fVar51 = *pfVar3 - fVar42;
            fVar50 = fVar46 - pfVar3[1];
            fVar52 = (fVar42 + *pfVar3) * 0.5;
            fVar53 = (fVar46 + pfVar3[1]) * 0.5;
            fVar42 = fVar51 * fVar51 + fVar50 * fVar50;
            auVar43 = rsqrtss(ZEXT416((uint)fVar42),ZEXT416((uint)fVar42));
            fVar46 = auVar43._0_4_;
            fVar42 = fVar46 * 0.5 * (3.0 - fVar42 * fVar46 * fVar46);
            fVar50 = fVar50 * fVar42;
            fVar51 = fVar51 * fVar42;
            if (0.0 < (*(float *)(uVar23 + 0xec) - fVar53) * fVar51 +
                      (*(float *)(uVar23 + 0xe8) - fVar52) * fVar50) {
              fVar50 = -fVar50;
              fVar51 = -fVar51;
            }
            if (*(byte *)(uVar12 + 0xa8) != 0) {
              puVar24 = (undefined8 *)(uVar12 + 0x60);
              uVar32 = uVar22;
              do {
                puVar28 = (undefined8 *)*puVar24;
                if (((*(char *)(puVar28 + 4) == '\x02') && (puVar28 != puVar2)) &&
                   (((puVar28[2] == uVar39 || (puVar28[3] == uVar39)) &&
                    (*(byte *)(uVar26 + 0xa8) != 0)))) {
                  puVar28 = (undefined8 *)(uVar26 + 0x60);
                  uVar17 = uVar22;
                  do {
                    puVar4 = (undefined8 *)*puVar28;
                    if (*(char *)(puVar4 + 4) != '\x02') {
                      pfVar3 = (float *)puVar4[1];
                      fVar42 = *(float *)*puVar4;
                      fVar46 = ((float *)*puVar4)[1];
                      fVar44 = fVar46 - pfVar3[1];
                      fVar45 = *pfVar3 - fVar42;
                      fVar47 = (fVar42 + *pfVar3) * 0.5;
                      fVar48 = (fVar46 + pfVar3[1]) * 0.5;
                      fVar42 = fVar45 * fVar45 + fVar44 * fVar44;
                      auVar43 = rsqrtss(ZEXT416((uint)fVar42),ZEXT416((uint)fVar42));
                      fVar46 = auVar43._0_4_;
                      fVar42 = fVar46 * 0.5 * (3.0 - fVar42 * fVar46 * fVar46);
                      fVar45 = fVar42 * fVar45;
                      fVar42 = fVar42 * fVar44;
                      bVar10 = 0.0 < (*(float *)(uVar26 + 0xec) - fVar48) * fVar45 +
                                     (*(float *)(uVar26 + 0xe8) - fVar47) * fVar42;
                      if (bVar10) {
                        fVar42 = -fVar42;
                        fVar45 = -fVar45;
                      }
                      if (fVar45 * fVar51 + fVar42 * fVar50 <= -0.3) {
                        fVar47 = fVar47 - fVar52;
                        fVar48 = fVar48 - fVar53;
                        fVar46 = fVar48 * fVar48 + fVar47 * fVar47;
                        auVar43 = rsqrtss(ZEXT416((uint)fVar46),ZEXT416((uint)fVar46));
                        fVar42 = auVar43._0_4_;
                        fVar42 = fVar42 * 0.5 * (3.0 - fVar46 * fVar42 * fVar42);
                        fVar42 = fVar42 * fVar48 * fVar51 + fVar42 * fVar47 * fVar50;
                        if ((0.1 <= fVar42) && (fVar46 = fVar46 / fVar42, fVar46 < fVar49)) {
                          uVar35 = uVar17;
                          uVar20 = uVar32;
                          fVar49 = fVar46;
                          bVar25 = bVar10;
                        }
                      }
                    }
                    uVar36 = (int)uVar17 + 1;
                    uVar17 = (ulonglong)uVar36;
                    puVar28 = puVar28 + 1;
                  } while ((int)uVar36 < (int)(uint)*(byte *)(uVar26 + 0xa8));
                }
                iVar37 = (int)uVar20;
                iVar19 = (int)uVar35;
                uVar31 = (int)uVar32 + 1;
                uVar32 = (ulonglong)uVar31;
                puVar24 = puVar24 + 1;
                uVar17 = uStack_108;
                uVar36 = uStack_fc;
                uVar16 = uStack_124;
              } while ((int)uVar31 < (int)(uint)*(byte *)(uVar12 + 0xa8));
            }
            iVar13 = iVar14;
            iVar30 = iStack_110;
            cVar40 = cStack0000000000000028;
            if (fVar49 < fStack_100) {
              uVar17 = uVar12;
              iVar13 = iVar37;
              iVar30 = iVar19;
              cVar40 = bVar25;
              uVar36 = uVar16;
              cStack0000000000000028 = bVar25;
              uStack_108 = uVar12;
              fStack_100 = fVar49;
              uStack_fc = uVar16;
              iStack_110 = iVar19;
              iVar14 = iVar37;
            }
          }
          uStack_124 = uVar16 + 1;
          uVar12 = (ulonglong)uStack_124;
          puVar18 = puVar18 + 1;
        } while ((int)uStack_124 < (int)(uint)bVar1);
        if (((((-1 < (int)uVar36) && ((int)uVar36 < (int)(uint)bVar1)) && (-1 < iVar13)) &&
            ((iVar13 < (int)(uint)*(byte *)(uVar39 + 0xa8) && (-1 < iVar30)))) &&
           ((iVar30 < (int)(uint)*(byte *)(uVar26 + 0xa8) && (uVar17 != 0)))) {
          uStack_124 = 0;
          lVar5 = *(longlong *)(uVar23 + 0x60 + (longlong)(int)uVar36 * 8);
          lVar6 = *(longlong *)(uVar26 + 0x60 + (longlong)iVar30 * 8);
          bVar1 = *(byte *)(uVar17 + 0xa8);
          lVar7 = *(longlong *)(uVar17 + 0x60 + (longlong)iVar13 * 8);
          if (bVar1 != 0) {
            plVar29 = (longlong *)(uVar17 + 0x60);
            uVar12 = uVar22;
            lVar33 = lVar7;
            do {
              uVar36 = (uint)uVar12;
              plVar11 = (longlong *)*plVar29;
              if ((plVar11[2] != uVar23) && (((char)plVar11[4] != '\x02' || (plVar11[3] != uVar23)))
                 ) {
                if (plVar11[2] != uVar39) {
                  if (((char)plVar11[4] != '\x02') || (plVar11[3] != uVar39)) {
                    uVar12 = uVar22;
                    uVar35 = uVar22;
                    do {
                      uVar36 = (uint)uVar35;
                      if (*plVar11 == *(longlong *)(lVar5 + uVar12 * 8)) break;
                      uVar35 = (ulonglong)((uint)uVar35 + 1);
                      uVar12 = uVar12 + 1;
                      uVar36 = 0xffffffff;
                    } while ((longlong)uVar12 < 2);
                    uVar12 = uVar22;
                    uVar35 = uVar22;
                    do {
                      uVar20 = uVar22;
                      uVar16 = (uint)uVar35;
                      if (plVar11[1] == *(longlong *)(lVar5 + uVar12 * 8)) break;
                      uVar35 = (ulonglong)((uint)uVar35 + 1);
                      uVar12 = uVar12 + 1;
                      uVar16 = uVar36;
                    } while ((longlong)uVar12 < 2);
                    do {
                      lVar8 = plVar11[uVar20];
                      plVar27 = plVar11;
                      uVar12 = uVar22;
                      do {
                        plVar11 = plVar27;
                        if (lVar8 == *(longlong *)(lVar33 + uVar12 * 8)) {
                          bVar25 = cVar40 == '\0';
                          if ((char)plVar27[4] == '\x02') {
                            if (plVar27[2] == uVar17) {
                              plVar27[2] = plVar27[3];
                            }
                            plVar27[3] = 0;
                            *(undefined1 *)(plVar27 + 4) = 0;
                            if (plVar27[2] != 0) {
                              *(undefined1 *)(plVar27 + 4) = 1;
                            }
                            FUN_18038b160(plVar27[2]);
                          }
                          else {
                            FUN_18038d8f0(param_1,plVar27);
                          }
                          plVar38 = plVar27;
                          if (uVar20 == 0) {
                            if (bVar25) {
                              plVar38 = (longlong *)((longlong)(int)(uint)(uVar16 == 0) * 8 + lVar6)
                              ;
                            }
                            else {
                              plVar38 = (longlong *)((longlong)(int)uVar16 * 8 + lVar6);
                            }
                          }
                          if (uVar20 == 1) {
                            if (bVar25) {
                              lVar33 = *(longlong *)(lVar6 + (longlong)(int)(uint)(uVar16 == 0) * 8)
                              ;
                            }
                            else {
                              lVar33 = *(longlong *)(lVar6 + (longlong)(int)uVar16 * 8);
                            }
                          }
                          else {
                            lVar33 = plVar27[1];
                          }
                          puVar18 = *(undefined8 **)(param_1 + 0x458);
                          uVar35 = *(longlong *)(param_1 + 0x460) - (longlong)puVar18 >> 3;
                          uVar17 = uVar22;
                          if (uVar35 != 0) {
                            do {
                              plVar11 = (longlong *)*puVar18;
                              if (((*plVar11 == *plVar38) && (plVar11[1] == lVar33)) ||
                                 ((*plVar11 == lVar33 && (plVar11[1] == *plVar38)))) {
                                *(undefined1 *)(plVar11 + 4) = 2;
                                plVar11[3] = uStack_108;
                                *plVar29 = (longlong)plVar11;
                                FUN_18038b160(plVar11[2]);
                                lVar33 = lVar7;
                                uVar17 = uStack_108;
                                goto LAB_1803922c3;
                              }
                              uVar36 = (int)uVar17 + 1;
                              uVar17 = (ulonglong)uVar36;
                              puVar18 = puVar18 + 1;
                            } while ((ulonglong)(longlong)(int)uVar36 < uVar35);
                          }
                          if (uVar20 == 1) {
                            if (bVar25) {
                              lVar33 = *(longlong *)(lVar6 + (longlong)(int)(uint)(uVar16 == 0) * 8)
                              ;
                            }
                            else {
                              lVar33 = *(longlong *)(lVar6 + (longlong)(int)uVar16 * 8);
                            }
                          }
                          else {
                            lVar33 = plVar27[1];
                            if (uVar20 == 0) {
                              uVar36 = uVar16;
                              if (bVar25) {
                                uVar36 = (uint)(uVar16 == 0);
                              }
                              plVar27 = (longlong *)((longlong)(int)uVar36 * 8 + lVar6);
                            }
                          }
                          lVar9 = *plVar27;
                          plVar11 = (longlong *)FUN_18038c180(param_1);
                          plVar11[1] = lVar33;
                          *plVar11 = lVar9;
                          *(undefined1 *)(plVar11 + 4) = 1;
                          plVar11[2] = uStack_108;
                          *plVar29 = (longlong)plVar11;
                          lVar33 = lVar7;
                          uVar17 = uStack_108;
                        }
LAB_1803922c3:
                        uVar12 = uVar12 + 1;
                        plVar27 = plVar11;
                        cVar40 = cStack0000000000000028;
                      } while ((longlong)uVar12 < 2);
                      uVar20 = uVar20 + 1;
                      uVar36 = uStack_124;
                    } while ((longlong)uVar20 < 2);
                    goto LAB_180392028;
                  }
                  plVar11[2] = uVar39;
                }
                *(undefined1 *)(plVar11 + 4) = 1;
                plVar11[3] = 0;
                func_0x00018038ac80(plVar11);
                *plVar29 = lVar6;
                *(undefined1 *)(lVar6 + 0x20) = 2;
                *(ulonglong *)(lVar6 + 0x18) = uVar17;
              }
LAB_180392028:
              bVar1 = *(byte *)(uVar17 + 0xa8);
              uStack_124 = uVar36 + 1;
              uVar12 = (ulonglong)uStack_124;
              plVar29 = plVar29 + 1;
              cVar40 = cStack0000000000000028;
            } while ((int)uStack_124 < (int)(uint)bVar1);
          }
          if (bVar1 != 0) {
            plVar29 = (longlong *)(uVar17 + 0x60);
            uVar12 = uVar22;
            do {
              lVar5 = *plVar29;
              *(undefined1 *)(lVar5 + 0x20) = 0;
              cVar40 = *(longlong *)(lVar5 + 0x10) != 0;
              if ((bool)cVar40) {
                *(undefined1 *)(lVar5 + 0x20) = 1;
              }
              if (*(longlong *)(lVar5 + 0x18) != 0) {
                cVar40 = cVar40 + '\x01';
                *(char *)(lVar5 + 0x20) = cVar40;
              }
              if ((cVar40 == '\x01') && (*(longlong *)(lVar5 + 0x18) != 0)) {
                *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x18);
                *(undefined8 *)(lVar5 + 0x18) = 0;
              }
              bVar1 = *(byte *)(uVar17 + 0xa8);
              uVar36 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar36;
              plVar29 = plVar29 + 1;
            } while ((int)uVar36 < (int)(uint)bVar1);
          }
          uVar12 = uVar22;
          uVar35 = uVar22;
          if (bVar1 != 0) {
            do {
              plVar29 = *(longlong **)(uVar17 + 0x60 + uVar35 * 8);
              uVar36 = (int)uVar12 + 1;
              uVar12 = uVar22;
              if (uVar36 != bVar1) {
                uVar12 = uVar35 + 1;
              }
              plVar11 = *(longlong **)(uVar17 + 0x60 + uVar12 * 8);
              if ((*plVar29 == *plVar11) || (iVar14 = -1, *plVar29 == plVar11[1])) {
                iVar14 = 0;
              }
              if ((plVar29[1] == *plVar11) || (plVar29[1] == plVar11[1])) {
                iVar14 = 1;
              }
              uVar12 = uVar22;
              if (iVar14 == 0) {
                uVar12 = 8;
              }
              *(undefined8 *)(uStack_108 + 0x80 + uVar35 * 8) =
                   *(undefined8 *)(uVar12 + (longlong)plVar29);
              bVar1 = *(byte *)(uStack_108 + 0xa8);
              uVar12 = (ulonglong)uVar36;
              uVar35 = uVar35 + 1;
              uVar17 = uStack_108;
            } while ((int)uVar36 < (int)(uint)bVar1);
          }
          FUN_18038b160(uVar23);
          FUN_18038af00(uVar23);
          uVar36 = uVar15;
          if (*(longlong *)(uVar23 + 0xb0) != 0) {
            uVar36 = *(uint *)(*(longlong *)(uVar23 + 0xb0) + 0x134);
          }
          if (*(longlong *)(uVar23 + 0xb8) != 0) {
            uVar36 = uVar36 | *(uint *)(*(longlong *)(uVar23 + 0xb8) + 0x134);
          }
          if (*(longlong *)(uVar23 + 0xc0) != 0) {
            uVar36 = uVar36 | *(uint *)(*(longlong *)(uVar23 + 0xc0) + 0x134);
          }
          if (*(longlong *)(uVar23 + 200) != 0) {
            uVar36 = uVar36 | *(uint *)(*(longlong *)(uVar23 + 200) + 0x134);
          }
          uVar16 = 0xffffffff;
          if (uVar36 != 0) {
            uVar16 = uVar36;
          }
          *(uint *)(uVar23 + 0x134) = uVar16;
          FUN_18038b160(uVar39);
          FUN_18038af00(uVar39);
          if (*(longlong *)(uVar39 + 0xb0) != 0) {
            uVar15 = *(uint *)(*(longlong *)(uVar39 + 0xb0) + 0x134);
          }
          if (*(longlong *)(uVar39 + 0xb8) != 0) {
            uVar15 = uVar15 | *(uint *)(*(longlong *)(uVar39 + 0xb8) + 0x134);
          }
          if (*(longlong *)(uVar39 + 0xc0) != 0) {
            uVar15 = uVar15 | *(uint *)(*(longlong *)(uVar39 + 0xc0) + 0x134);
          }
          if (*(longlong *)(uVar39 + 200) != 0) {
            uVar15 = uVar15 | *(uint *)(*(longlong *)(uVar39 + 200) + 0x134);
          }
          uVar36 = 0xffffffff;
          if (uVar15 != 0) {
            uVar36 = uVar15;
          }
          *(uint *)(uVar39 + 0x134) = uVar36;
          FUN_18038b160(uVar26);
          FUN_18038af00(uVar26);
          uVar15 = uVar21;
          if (*(longlong *)(uVar26 + 0xb0) != 0) {
            uVar15 = *(uint *)(*(longlong *)(uVar26 + 0xb0) + 0x134);
          }
          if (*(longlong *)(uVar26 + 0xb8) != 0) {
            uVar15 = uVar15 | *(uint *)(*(longlong *)(uVar26 + 0xb8) + 0x134);
          }
          if (*(longlong *)(uVar26 + 0xc0) != 0) {
            uVar15 = uVar15 | *(uint *)(*(longlong *)(uVar26 + 0xc0) + 0x134);
          }
          if (*(longlong *)(uVar26 + 200) != 0) {
            uVar15 = uVar15 | *(uint *)(*(longlong *)(uVar26 + 200) + 0x134);
          }
          uVar36 = 0xffffffff;
          if (uVar15 != 0) {
            uVar36 = uVar15;
          }
          *(uint *)(uVar26 + 0x134) = uVar36;
          FUN_18038b160(uStack_108);
          uVar41 = FUN_18038af00(uStack_108);
          if (*(longlong *)(uStack_108 + 0xb0) != 0) {
            uVar21 = *(uint *)(*(longlong *)(uStack_108 + 0xb0) + 0x134);
          }
          if (*(longlong *)(uStack_108 + 0xb8) != 0) {
            uVar21 = uVar21 | *(uint *)(*(longlong *)(uStack_108 + 0xb8) + 0x134);
          }
          if (*(longlong *)(uStack_108 + 0xc0) != 0) {
            uVar21 = uVar21 | *(uint *)(*(longlong *)(uStack_108 + 0xc0) + 0x134);
          }
          if (*(longlong *)(uStack_108 + 200) != 0) {
            uVar21 = uVar21 | *(uint *)(*(longlong *)(uStack_108 + 200) + 0x134);
          }
          uVar15 = 0xffffffff;
          if (uVar21 != 0) {
            uVar15 = uVar21;
          }
          *(uint *)(uStack_108 + 0x134) = uVar15;
          uVar41 = FUN_18038ee20(uVar41,uVar23,0xffffffff);
          uVar41 = FUN_18038ee20(uVar41,uVar39,0xffffffff);
          uVar41 = FUN_18038ee20(uVar41,uVar26,0xffffffff);
          uVar41 = FUN_18038ee20(uVar41,uStack_108,0xffffffff);
          *(int *)(param_1 + 0x530) = *(int *)(param_1 + 0x530) + 1;
          uVar41 = FUN_18038ee20(uVar41,uVar23,*(undefined4 *)(param_1 + 0x530));
          *(int *)(param_1 + 0x530) = *(int *)(param_1 + 0x530) + 1;
          FUN_18038ee20(uVar41,uVar39,*(undefined4 *)(param_1 + 0x530));
        }
      }
    }
  }
  return;
}





