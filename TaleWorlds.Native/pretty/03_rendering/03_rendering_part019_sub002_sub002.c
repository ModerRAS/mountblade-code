#include "TaleWorlds.Native.Split.h"

// 03_rendering_part019_sub002_sub002.c - 渲染系统标志位和材质处理模块
// 本文件包含1个函数，用于处理渲染系统中的标志位和材质数据

/**
 * @brief 处理渲染系统标志位和材质数据
 * 
 * 该函数根据不同的操作类型处理渲染系统中的标志位和材质数据。
 * 支持多种渲染操作，包括参数设置、资源管理、材质处理等。
 * 
 * @param render_object 渲染对象指针，包含渲染相关的状态和数据
 * @param param_data 参数数据指针，包含操作所需的参数信息
 * @param operation_mode 操作模式标志，决定如何处理参数
 * 
 * 操作类型说明：
 * - 0: 设置渲染参数
 * - 1: 处理渲染对象
 * - 2: 管理渲染资源
 * - 3: 处理材质数据
 * - 4: 批量设置渲染属性
 * - 5: 查找并处理着色器
 * - 6: 设置颜色值
 * - 7: 设置辅助颜色值
 * - 8: 设置材质属性
 * - 9: 设置渲染批次属性
 */
void process_rendering_flags_and_materials(longlong *render_object, longlong *param_data, char operation_mode)
{
  byte *pbVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  longlong *plVar10;
  int iVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auStack_488 [32];
  longlong *plStack_468;
  longlong *plStack_460;
  char cStack_458;
  longlong *plStack_440;
  longlong *plStack_438;
  longlong *plStack_430;
  undefined8 uStack_428;
  undefined *puStack_418;
  byte *pbStack_410;
  int iStack_408;
  byte abStack_400 [72];
  undefined *puStack_3b8;
  byte *pbStack_3b0;
  int iStack_3a8;
  byte abStack_3a0 [72];
  undefined *puStack_358;
  byte *pbStack_350;
  int iStack_348;
  byte abStack_340 [72];
  undefined *puStack_2f8;
  byte *pbStack_2f0;
  int iStack_2e8;
  byte abStack_2e0 [72];
  undefined *puStack_298;
  byte *pbStack_290;
  int iStack_288;
  byte abStack_280 [72];
  undefined *puStack_238;
  byte *pbStack_230;
  int iStack_228;
  byte abStack_220 [72];
  undefined *puStack_1d8;
  byte *pbStack_1d0;
  int iStack_1c8;
  byte abStack_1c0 [72];
  undefined *puStack_178;
  byte *pbStack_170;
  int iStack_168;
  byte abStack_160 [72];
  undefined *puStack_118;
  byte *pbStack_110;
  int iStack_108;
  byte abStack_100 [72];
  undefined *puStack_b8;
  byte *pbStack_b0;
  int iStack_a8;
  byte abStack_a0 [72];
  ulonglong uStack_58;
  
  // 初始化堆栈保护和变量
  uStack_428 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_488;
  plVar14 = (longlong *)param_data[1];
  plStack_468 = param_data;
  plStack_460 = render_object;
  cStack_458 = operation_mode;
  
  // 遍历参数数据链表
  if (plVar14 != param_data + 1) {
    do {
      uVar17 = 0;
      puVar12 = (undefined4 *)plVar14[2];
      switch(*puVar12) {
      case 0:
        // 操作类型0：设置渲染参数
        if (operation_mode == '\0') {
          // 直接设置参数值
          *(undefined4 *)((longlong)render_object + 0x324) = puVar12[2];
          *(undefined1 *)((longlong)render_object + 0x32c) = 0;
        }
        else {
          // 从源对象复制参数值
          *(undefined4 *)((longlong)render_object + 0x324) = *(undefined4 *)(*param_data + 0x324);
          *(undefined1 *)((longlong)render_object + 0x32c) = *(undefined1 *)(*param_data + 0x32c);
        }
        break;
      case 1:
        // 操作类型1：处理渲染对象
        if (operation_mode == '\0') {
          // 创建新的渲染对象
          pcVar2 = *(code **)(*render_object + 0x118);
          plStack_440 = *(longlong **)(puVar12 + 2);
          if (plStack_440 != (longlong *)0x0) {
            (**(code **)(*plStack_440 + 0x28))();
          }
          (*pcVar2)(render_object,&plStack_440);
          param_data = plStack_468;
          if (plStack_440 != (longlong *)0x0) {
            (**(code **)(*plStack_440 + 0x38))();
            param_data = plStack_468;
          }
        }
        else {
          // 复制现有渲染对象
          lVar13 = *param_data;
          plVar10 = *(longlong **)(lVar13 + 0x38);
          param_data = plStack_468;
          if (*(longlong *)(lVar13 + 0x40) - (longlong)plVar10 >> 4 != 0) {
            (**(code **)(*render_object + 0x118))(render_object,*plVar10 + 0x1b8);
            param_data = plStack_468;
          }
        }
        break;
      case 2:
        // 操作类型2：管理渲染资源
        if (operation_mode == '\0') {
          // 释放旧资源并设置新资源
          plVar10 = *(longlong **)(puVar12 + 2);
          if (plVar10 != (longlong *)0x0) {
            plStack_438 = plVar10;
            (**(code **)(*plVar10 + 0x28))(plVar10);
            param_data = plStack_468;
          }
          plStack_438 = (longlong *)render_object[0x77];
          render_object[0x77] = (longlong)plVar10;
          if (plStack_438 != (longlong *)0x0) {
            (**(code **)(*plStack_438 + 0x38))();
            param_data = plStack_468;
          }
        }
        else {
          // 复制渲染资源
          FUN_180080810(render_object + 0x77,*param_data + 0x3b8);
          param_data = plStack_468;
        }
        break;
      case 3:
        // 操作类型3：处理材质数据
        if (operation_mode == '\0') {
          puVar12 = puVar12 + 2;
        }
        else {
          puVar12 = (undefined4 *)(*param_data + 0x330);
        }
        (**(code **)(*render_object + 0x148))(render_object,puVar12);
        FUN_180276f30(render_object,(longlong)render_object + 0x214,1);
        param_data = plStack_468;
        break;
      case 4:
        // 操作类型4：批量设置渲染属性
        if (operation_mode == '\0') {
          // 直接设置属性值
          plVar10 = (longlong *)render_object[7];
          if (plVar10 < (longlong *)render_object[8]) {
            do {
              lVar13 = *plVar10;
              uVar3 = puVar12[3];
              uVar4 = puVar12[4];
              uVar5 = puVar12[5];
              *(undefined4 *)(lVar13 + 0x2b8) = puVar12[2];
              *(undefined4 *)(lVar13 + 700) = uVar3;
              *(undefined4 *)(lVar13 + 0x2c0) = uVar4;
              *(undefined4 *)(lVar13 + 0x2c4) = uVar5;
              plVar10 = plVar10 + 2;
            } while (plVar10 < (longlong *)render_object[8]);
          }
        }
        else {
          // 从源对象复制属性值
          lVar13 = *param_data;
          plVar10 = *(longlong **)(lVar13 + 0x38);
          param_data = plStack_468;
          if (*(longlong *)(lVar13 + 0x40) - (longlong)plVar10 >> 4 != 0) {
            lVar13 = *plVar10;
            plVar10 = (longlong *)render_object[7];
            if (plVar10 < (longlong *)render_object[8]) {
              do {
                lVar7 = *plVar10;
                uVar3 = *(undefined4 *)(lVar13 + 700);
                uVar4 = *(undefined4 *)(lVar13 + 0x2c0);
                uVar5 = *(undefined4 *)(lVar13 + 0x2c4);
                *(undefined4 *)(lVar7 + 0x2b8) = *(undefined4 *)(lVar13 + 0x2b8);
                *(undefined4 *)(lVar7 + 700) = uVar3;
                *(undefined4 *)(lVar7 + 0x2c0) = uVar4;
                *(undefined4 *)(lVar7 + 0x2c4) = uVar5;
                plVar10 = plVar10 + 2;
              } while (plVar10 < (longlong *)render_object[8]);
            }
          }
        }
        break;
      case 5:
        // 操作类型5：查找并处理着色器
        lVar13 = render_object[7];
        lVar7 = render_object[8] - lVar13 >> 4;
        if (operation_mode == '\0') {
          param_data = plStack_468;
          uVar18 = uVar17;
          if (lVar7 != 0) {
            do {
              puVar16 = &UNK_1809fcc58;
              lVar13 = *(longlong *)(uVar17 + lVar13);
              if (*(longlong *)(lVar13 + 0x1b0) == 0) {
                lVar7 = lVar13 + 0x10;
              }
              else {
                lVar7 = func_0x000180079240();
              }
              pbStack_3b0 = abStack_3a0;
              abStack_3a0[0] = 0;
              iStack_3a8 = *(int *)(lVar7 + 0x10);
              puVar15 = &DAT_18098bc73;
              if (*(undefined **)(lVar7 + 8) != (undefined *)0x0) {
                puVar15 = *(undefined **)(lVar7 + 8);
              }
              puStack_3b8 = puVar16;
              strcpy_s(abStack_3a0,0x40,puVar15);
              lVar7 = -1;
              do {
                lVar8 = lVar7 + 1;
                lVar6 = lVar7 + 9;
                lVar7 = lVar8;
              } while (*(char *)((longlong)puVar12 + lVar6) != '\0');
              iVar11 = (int)lVar8;
              if (iStack_3a8 == iVar11) {
                if (iStack_3a8 != 0) {
                  pbVar9 = pbStack_3b0;
                  do {
                    pbVar1 = pbVar9 + (longlong)puVar12 + (8 - (longlong)pbStack_3b0);
                    iVar11 = (uint)*pbVar9 - (uint)*pbVar1;
                    if (iVar11 != 0) break;
                    pbVar9 = pbVar9 + 1;
                  } while (*pbVar1 != 0);
                }
code_r0x000180279aee:
                if (iVar11 == 0) {
                  plVar10 = *(longlong **)(puVar12 + 0x42);
                  plStack_430 = plVar10;
                  if (plVar10 != (longlong *)0x0) {
                    (**(code **)(*plVar10 + 0x28))(plVar10);
                  }
                  FUN_180076910(lVar13,&plStack_430);
                  if (plVar10 != (longlong *)0x0) {
                    (**(code **)(*plVar10 + 0x38))(plVar10);
                  }
                  puStack_3b8 = &UNK_18098bcb0;
                  param_data = plStack_468;
                  render_object = plStack_460;
                  break;
                }
              }
              else if (iStack_3a8 == 0) goto code_r0x000180279aee;
              puStack_3b8 = &UNK_18098bcb0;
              uVar19 = (int)uVar18 + 1;
              uVar18 = (ulonglong)uVar19;
              uVar17 = uVar17 + 0x10;
              lVar13 = plStack_460[7];
              param_data = plStack_468;
              render_object = plStack_460;
            } while ((ulonglong)(longlong)(int)uVar19 < (ulonglong)(plStack_460[8] - lVar13 >> 4));
          }
        }
        else {
          param_data = plStack_468;
          uVar18 = uVar17;
          uVar20 = uVar17;
          if (lVar7 != 0) {
            do {
              puVar16 = &UNK_1809fcc58;
              lVar13 = *(longlong *)(uVar18 + lVar13);
              if (*(longlong *)(lVar13 + 0x1b0) == 0) {
                lVar7 = lVar13 + 0x10;
              }
              else {
                lVar7 = func_0x000180079240();
              }
              pbStack_410 = abStack_400;
              abStack_400[0] = 0;
              iStack_408 = *(int *)(lVar7 + 0x10);
              puVar15 = &DAT_18098bc73;
              if (*(undefined **)(lVar7 + 8) != (undefined *)0x0) {
                puVar15 = *(undefined **)(lVar7 + 8);
              }
              puStack_418 = puVar16;
              strcpy_s(abStack_400,0x40,puVar15);
              lVar7 = -1;
              do {
                lVar8 = lVar7 + 1;
                lVar6 = lVar7 + 9;
                lVar7 = lVar8;
              } while (*(char *)((longlong)puVar12 + lVar6) != '\0');
              iVar11 = (int)lVar8;
              if (iStack_408 == iVar11) {
                if (iStack_408 != 0) {
                  pbVar9 = pbStack_410;
                  do {
                    pbVar1 = pbVar9 + (longlong)puVar12 + (8 - (longlong)pbStack_410);
                    iVar11 = (uint)*pbVar9 - (uint)*pbVar1;
                    if (iVar11 != 0) break;
                    pbVar9 = pbVar9 + 1;
                  } while (*pbVar1 != 0);
                }
code_r0x0001802799ad:
                if (iVar11 == 0) {
                  FUN_180076910(lVar13,*(longlong *)
                                        (*(longlong *)(*plStack_468 + 0x38) + uVar17 * 0x10) + 0x1b8
                               );
                  puStack_418 = &UNK_18098bcb0;
                  param_data = plStack_468;
                  render_object = plStack_460;
                  break;
                }
              }
              else if (iStack_408 == 0) goto code_r0x0001802799ad;
              puStack_418 = &UNK_18098bcb0;
              uVar19 = (int)uVar20 + 1;
              uVar17 = uVar17 + 1;
              lVar13 = plStack_460[7];
              param_data = plStack_468;
              render_object = plStack_460;
              uVar18 = uVar18 + 0x10;
              uVar20 = (ulonglong)uVar19;
            } while ((ulonglong)(longlong)(int)uVar19 < (ulonglong)(plStack_460[8] - lVar13 >> 4));
          }
        }
        break;
      case 6:
        // 操作类型6：设置颜色值
        lVar13 = render_object[7];
        lVar7 = render_object[8] - lVar13 >> 4;
        if (operation_mode == '\0') {
          param_data = plStack_468;
          uVar18 = uVar17;
          if (lVar7 != 0) {
            do {
              puVar16 = &UNK_1809fcc58;
              lVar13 = *(longlong *)(uVar17 + lVar13);
              if (*(longlong *)(lVar13 + 0x1b0) == 0) {
                lVar7 = lVar13 + 0x10;
              }
              else {
                lVar7 = func_0x000180079240();
              }
              pbStack_2f0 = abStack_2e0;
              abStack_2e0[0] = 0;
              iStack_2e8 = *(int *)(lVar7 + 0x10);
              puVar15 = &DAT_18098bc73;
              if (*(undefined **)(lVar7 + 8) != (undefined *)0x0) {
                puVar15 = *(undefined **)(lVar7 + 8);
              }
              puStack_2f8 = puVar16;
              strcpy_s(abStack_2e0,0x40,puVar15);
              lVar7 = -1;
              do {
                lVar8 = lVar7 + 1;
                lVar6 = lVar7 + 9;
                lVar7 = lVar8;
              } while (*(char *)((longlong)puVar12 + lVar6) != '\0');
              iVar11 = (int)lVar8;
              param_data = plStack_468;
              render_object = plStack_460;
              if (iStack_2e8 == iVar11) {
                if (iStack_2e8 != 0) {
                  pbVar9 = pbStack_2f0;
                  do {
                    pbVar1 = pbVar9 + (longlong)puVar12 + (8 - (longlong)pbStack_2f0);
                    iVar11 = (uint)*pbVar9 - (uint)*pbVar1;
                    if (iVar11 != 0) break;
                    pbVar9 = pbVar9 + 1;
                  } while (*pbVar1 != 0);
                }
code_r0x000180279dbd:
                if (iVar11 == 0) {
                  uVar19 = puVar12[0x42];
                  // 设置RGBA颜色值，将8位颜色转换为浮点数
                  *(float *)(lVar13 + 0x238) = (float)(uVar19 >> 0x10 & 0xff) * 0.003921569;  // Red
                  *(float *)(lVar13 + 0x23c) = (float)(uVar19 >> 8 & 0xff) * 0.003921569;   // Green
                  *(float *)(lVar13 + 0x240) = (float)(uVar19 & 0xff) * 0.003921569;        // Blue
                  *(float *)(lVar13 + 0x244) = (float)(uVar19 >> 0x18) * 0.003921569;       // Alpha
                  puStack_2f8 = &UNK_18098bcb0;
                  break;
                }
              }
              else if (iStack_2e8 == 0) goto code_r0x000180279dbd;
              puStack_2f8 = &UNK_18098bcb0;
              uVar19 = (int)uVar18 + 1;
              uVar18 = (ulonglong)uVar19;
              uVar17 = uVar17 + 0x10;
              lVar13 = plStack_460[7];
            } while ((ulonglong)(longlong)(int)uVar19 < (ulonglong)(plStack_460[8] - lVar13 >> 4));
          }
        }
        else {
          param_data = plStack_468;
          uVar18 = uVar17;
          uVar20 = uVar17;
          if (lVar7 != 0) {
            do {
              puVar16 = &UNK_1809fcc58;
              lVar13 = *(longlong *)(uVar18 + lVar13);
              if (*(longlong *)(lVar13 + 0x1b0) == 0) {
                lVar7 = lVar13 + 0x10;
              }
              else {
                lVar7 = func_0x000180079240();
              }
              pbStack_350 = abStack_340;
              abStack_340[0] = 0;
              iStack_348 = *(int *)(lVar7 + 0x10);
              puVar15 = &DAT_18098bc73;
              if (*(undefined **)(lVar7 + 8) != (undefined *)0x0) {
                puVar15 = *(undefined **)(lVar7 + 8);
              }
              puStack_358 = puVar16;
              strcpy_s(abStack_340,0x40,puVar15);
              lVar7 = -1;
              do {
                lVar8 = lVar7 + 1;
                lVar6 = lVar7 + 9;
                lVar7 = lVar8;
              } while (*(char *)((longlong)puVar12 + lVar6) != '\0');
              iVar11 = (int)lVar8;
              param_data = plStack_468;
              render_object = plStack_460;
              if (iStack_348 == iVar11) {
                if (iStack_348 != 0) {
                  pbVar9 = pbStack_350;
                  do {
                    pbVar1 = pbVar9 + (longlong)puVar12 + (8 - (longlong)pbStack_350);
                    iVar11 = (uint)*pbVar9 - (uint)*pbVar1;
                    if (iVar11 != 0) break;
                    pbVar9 = pbVar9 + 1;
                  } while (*pbVar1 != 0);
                }
code_r0x000180279c5d:
                if (iVar11 == 0) {
                  lVar7 = *(longlong *)(*(longlong *)(*plStack_468 + 0x38) + uVar17 * 0x10);
                  uVar3 = *(undefined4 *)(lVar7 + 0x23c);
                  uVar4 = *(undefined4 *)(lVar7 + 0x240);
                  uVar5 = *(undefined4 *)(lVar7 + 0x244);
                  // 复制颜色值
                  *(undefined4 *)(lVar13 + 0x238) = *(undefined4 *)(lVar7 + 0x238);
                  *(undefined4 *)(lVar13 + 0x23c) = uVar3;
                  *(undefined4 *)(lVar13 + 0x240) = uVar4;
                  *(undefined4 *)(lVar13 + 0x244) = uVar5;
                  puStack_358 = &UNK_18098bcb0;
                  break;
                }
              }
              else if (iStack_348 == 0) goto code_r0x000180279c5d;
              puStack_358 = &UNK_18098bcb0;
              uVar19 = (int)uVar20 + 1;
              uVar17 = uVar17 + 1;
              lVar13 = plStack_460[7];
              uVar18 = uVar18 + 0x10;
              uVar20 = (ulonglong)uVar19;
            } while ((ulonglong)(longlong)(int)uVar19 < (ulonglong)(plStack_460[8] - lVar13 >> 4));
          }
        }
        break;
      case 7:
        // 操作类型7：设置辅助颜色值
        lVar13 = render_object[7];
        lVar7 = render_object[8] - lVar13 >> 4;
        if (operation_mode == '\0') {
          param_data = plStack_468;
          uVar18 = uVar17;
          if (lVar7 != 0) {
            do {
              puVar16 = &UNK_1809fcc58;
              lVar13 = *(longlong *)(uVar17 + lVar13);
              if (*(longlong *)(lVar13 + 0x1b0) == 0) {
                lVar7 = lVar13 + 0x10;
              }
              else {
                lVar7 = func_0x000180079240();
              }
              pbStack_230 = abStack_220;
              abStack_220[0] = 0;
              iStack_228 = *(int *)(lVar7 + 0x10);
              puVar15 = &DAT_18098bc73;
              if (*(undefined **)(lVar7 + 8) != (undefined *)0x0) {
                puVar15 = *(undefined **)(lVar7 + 8);
              }
              puStack_238 = puVar16;
              strcpy_s(abStack_220,0x40,puVar15);
              lVar7 = -1;
              do {
                lVar8 = lVar7 + 1;
                lVar6 = lVar7 + 9;
                lVar7 = lVar8;
              } while (*(char *)((longlong)puVar12 + lVar6) != '\0');
              iVar11 = (int)lVar8;
              param_data = plStack_468;
              render_object = plStack_460;
              if (iStack_228 == iVar11) {
                if (iStack_228 != 0) {
                  pbVar9 = pbStack_230;
                  do {
                    pbVar1 = pbVar9 + (longlong)puVar12 + (8 - (longlong)pbStack_230);
                    iVar11 = (uint)*pbVar9 - (uint)*pbVar1;
                    if (iVar11 != 0) break;
                    pbVar9 = pbVar9 + 1;
                  } while (*pbVar1 != 0);
                }
code_r0x00018027a0fd:
                if (iVar11 == 0) {
                  uVar19 = puVar12[0x42];
                  // 设置辅助RGBA颜色值
                  *(float *)(lVar13 + 0x248) = (float)(uVar19 >> 0x10 & 0xff) * 0.003921569;  // Red
                  *(float *)(lVar13 + 0x24c) = (float)(uVar19 >> 8 & 0xff) * 0.003921569;   // Green
                  *(float *)(lVar13 + 0x250) = (float)(uVar19 & 0xff) * 0.003921569;        // Blue
                  *(float *)(lVar13 + 0x254) = (float)(uVar19 >> 0x18) * 0.003921569;       // Alpha
                  puStack_238 = &UNK_18098bcb0;
                  break;
                }
              }
              else if (iStack_228 == 0) goto code_r0x00018027a0fd;
              puStack_238 = &UNK_18098bcb0;
              uVar19 = (int)uVar18 + 1;
              uVar18 = (ulonglong)uVar19;
              uVar17 = uVar17 + 0x10;
              lVar13 = plStack_460[7];
            } while ((ulonglong)(longlong)(int)uVar19 < (ulonglong)(plStack_460[8] - lVar13 >> 4));
          }
        }
        else {
          param_data = plStack_468;
          uVar18 = uVar17;
          uVar20 = uVar17;
          if (lVar7 != 0) {
            do {
              puVar16 = &UNK_1809fcc58;
              lVar13 = *(longlong *)(uVar18 + lVar13);
              if (*(longlong *)(lVar13 + 0x1b0) == 0) {
                lVar7 = lVar13 + 0x10;
              }
              else {
                lVar7 = func_0x000180079240();
              }
              pbStack_290 = abStack_280;
              abStack_280[0] = 0;
              iStack_288 = *(int *)(lVar7 + 0x10);
              puVar15 = &DAT_18098bc73;
              if (*(undefined **)(lVar7 + 8) != (undefined *)0x0) {
                puVar15 = *(undefined **)(lVar7 + 8);
              }
              puStack_298 = puVar16;
              strcpy_s(abStack_280,0x40,puVar15);
              lVar7 = -1;
              do {
                lVar8 = lVar7 + 1;
                lVar6 = lVar7 + 9;
                lVar7 = lVar8;
              } while (*(char *)((longlong)puVar12 + lVar6) != '\0');
              iVar11 = (int)lVar8;
              param_data = plStack_468;
              render_object = plStack_460;
              if (iStack_288 == iVar11) {
                if (iStack_288 != 0) {
                  pbVar9 = pbStack_290;
                  do {
                    pbVar1 = pbVar9 + (longlong)puVar12 + (8 - (longlong)pbStack_290);
                    iVar11 = (uint)*pbVar9 - (uint)*pbVar1;
                    if (iVar11 != 0) break;
                    pbVar9 = pbVar9 + 1;
                  } while (*pbVar1 != 0);
                }
code_r0x000180279f91:
                if (iVar11 == 0) {
                  lVar7 = *(longlong *)(*(longlong *)(*plStack_468 + 0x38) + uVar17 * 0x10);
                  uVar3 = *(undefined4 *)(lVar7 + 0x24c);
                  uVar4 = *(undefined4 *)(lVar7 + 0x250);
                  uVar5 = *(undefined4 *)(lVar7 + 0x254);
                  // 复制辅助颜色值
                  *(undefined4 *)(lVar13 + 0x248) = *(undefined4 *)(lVar7 + 0x248);
                  *(undefined4 *)(lVar13 + 0x24c) = uVar3;
                  *(undefined4 *)(lVar13 + 0x250) = uVar4;
                  *(undefined4 *)(lVar13 + 0x254) = uVar5;
                  puStack_298 = &UNK_18098bcb0;
                  break;
                }
              }
              else if (iStack_288 == 0) goto code_r0x000180279f91;
              puStack_298 = &UNK_18098bcb0;
              uVar19 = (int)uVar20 + 1;
              uVar17 = uVar17 + 1;
              lVar13 = plStack_460[7];
              uVar18 = uVar18 + 0x10;
              uVar20 = (ulonglong)uVar19;
            } while ((ulonglong)(longlong)(int)uVar19 < (ulonglong)(plStack_460[8] - lVar13 >> 4));
          }
        }
        break;
      case 8:
        // 操作类型8：设置材质属性
        lVar13 = render_object[7];
        lVar7 = render_object[8] - lVar13 >> 4;
        if (operation_mode == '\0') {
          param_data = plStack_468;
          uVar18 = uVar17;
          if (lVar7 != 0) {
            do {
              puVar16 = &UNK_1809fcc58;
              lVar13 = *(longlong *)(uVar17 + lVar13);
              if (*(longlong *)(lVar13 + 0x1b0) == 0) {
                lVar7 = lVar13 + 0x10;
              }
              else {
                lVar7 = func_0x000180079240();
              }
              pbStack_170 = abStack_160;
              abStack_160[0] = 0;
              iStack_168 = *(int *)(lVar7 + 0x10);
              puVar15 = &DAT_18098bc73;
              if (*(undefined **)(lVar7 + 8) != (undefined *)0x0) {
                puVar15 = *(undefined **)(lVar7 + 8);
              }
              puStack_178 = puVar16;
              strcpy_s(abStack_160,0x40,puVar15);
              lVar7 = -1;
              do {
                lVar8 = lVar7 + 1;
                lVar6 = lVar7 + 9;
                lVar7 = lVar8;
              } while (*(char *)((longlong)puVar12 + lVar6) != '\0');
              iVar11 = (int)lVar8;
              param_data = plStack_468;
              render_object = plStack_460;
              if (iStack_168 == iVar11) {
                if (iStack_168 != 0) {
                  pbVar9 = pbStack_170;
                  do {
                    pbVar1 = pbVar9 + (longlong)puVar12 + (8 - (longlong)pbStack_170);
                    iVar11 = (uint)*pbVar9 - (uint)*pbVar1;
                    if (iVar11 != 0) break;
                    pbVar9 = pbVar9 + 1;
                  } while (*pbVar1 != 0);
                }
code_r0x00018027a43d:
                if (iVar11 == 0) {
                  uVar3 = puVar12[0x43];
                  uVar4 = puVar12[0x44];
                  uVar5 = puVar12[0x45];
                  // 设置材质属性
                  *(undefined4 *)(lVar13 + 0x2a8) = puVar12[0x42];
                  *(undefined4 *)(lVar13 + 0x2ac) = uVar3;
                  *(undefined4 *)(lVar13 + 0x2b0) = uVar4;
                  *(undefined4 *)(lVar13 + 0x2b4) = uVar5;
                  puStack_178 = &UNK_18098bcb0;
                  break;
                }
              }
              else if (iStack_168 == 0) goto code_r0x00018027a43d;
              puStack_178 = &UNK_18098bcb0;
              uVar19 = (int)uVar18 + 1;
              uVar18 = (ulonglong)uVar19;
              uVar17 = uVar17 + 0x10;
              lVar13 = plStack_460[7];
            } while ((ulonglong)(longlong)(int)uVar19 < (ulonglong)(plStack_460[8] - lVar13 >> 4));
          }
        }
        else {
          param_data = plStack_468;
          uVar18 = uVar17;
          uVar20 = uVar17;
          if (lVar7 != 0) {
            do {
              puVar16 = &UNK_1809fcc58;
              lVar13 = *(longlong *)(uVar18 + lVar13);
              if (*(longlong *)(lVar13 + 0x1b0) == 0) {
                lVar7 = lVar13 + 0x10;
              }
              else {
                lVar7 = func_0x000180079240();
              }
              pbStack_1d0 = abStack_1c0;
              abStack_1c0[0] = 0;
              iStack_1c8 = *(int *)(lVar7 + 0x10);
              puVar15 = &DAT_18098bc73;
              if (*(undefined **)(lVar7 + 8) != (undefined *)0x0) {
                puVar15 = *(undefined **)(lVar7 + 8);
              }
              puStack_1d8 = puVar16;
              strcpy_s(abStack_1c0,0x40,puVar15);
              lVar7 = -1;
              do {
                lVar8 = lVar7 + 1;
                lVar6 = lVar7 + 9;
                lVar7 = lVar8;
              } while (*(char *)((longlong)puVar12 + lVar6) != '\0');
              iVar11 = (int)lVar8;
              param_data = plStack_468;
              render_object = plStack_460;
              if (iStack_1c8 == iVar11) {
                if (iStack_1c8 != 0) {
                  pbVar9 = pbStack_1d0;
                  do {
                    pbVar1 = pbVar9 + (longlong)puVar12 + (8 - (longlong)pbStack_1d0);
                    iVar11 = (uint)*pbVar9 - (uint)*pbVar1;
                    if (iVar11 != 0) break;
                    pbVar9 = pbVar9 + 1;
                  } while (*pbVar1 != 0);
                }
code_r0x00018027a2d1:
                if (iVar11 == 0) {
                  lVar7 = *(longlong *)(*(longlong *)(*plStack_468 + 0x38) + uVar17 * 0x10);
                  uVar3 = *(undefined4 *)(lVar7 + 0x2ac);
                  uVar4 = *(undefined4 *)(lVar7 + 0x2b0);
                  uVar5 = *(undefined4 *)(lVar7 + 0x2b4);
                  // 复制材质属性
                  *(undefined4 *)(lVar13 + 0x2a8) = *(undefined4 *)(lVar7 + 0x2a8);
                  *(undefined4 *)(lVar13 + 0x2ac) = uVar3;
                  *(undefined4 *)(lVar13 + 0x2b0) = uVar4;
                  *(undefined4 *)(lVar13 + 0x2b4) = uVar5;
                  puStack_1d8 = &UNK_18098bcb0;
                  break;
                }
              }
              else if (iStack_1c8 == 0) goto code_r0x00018027a2d1;
              puStack_1d8 = &UNK_18098bcb0;
              uVar19 = (int)uVar20 + 1;
              uVar17 = uVar17 + 1;
              lVar13 = plStack_460[7];
              uVar18 = uVar18 + 0x10;
              uVar20 = (ulonglong)uVar19;
            } while ((ulonglong)(longlong)(int)uVar19 < (ulonglong)(plStack_460[8] - lVar13 >> 4));
          }
        }
        break;
      case 9:
        // 操作类型9：设置渲染批次属性
        lVar13 = render_object[7];
        lVar7 = render_object[8] - lVar13 >> 4;
        if (operation_mode == '\0') {
          param_data = plStack_468;
          uVar18 = uVar17;
          if (lVar7 != 0) {
            do {
              puVar16 = &UNK_1809fcc58;
              lVar13 = *(longlong *)(uVar17 + lVar13);
              if (*(longlong *)(lVar13 + 0x1b0) == 0) {
                lVar7 = lVar13 + 0x10;
              }
              else {
                lVar7 = func_0x000180079240();
              }
              pbStack_b0 = abStack_a0;
              abStack_a0[0] = 0;
              iStack_a8 = *(int *)(lVar7 + 0x10);
              puVar15 = &DAT_18098bc73;
              if (*(undefined **)(lVar7 + 8) != (undefined *)0x0) {
                puVar15 = *(undefined **)(lVar7 + 8);
              }
              puStack_b8 = puVar16;
              strcpy_s(abStack_a0,0x40,puVar15);
              lVar7 = -1;
              do {
                lVar8 = lVar7 + 1;
                lVar6 = lVar7 + 9;
                lVar7 = lVar8;
              } while (*(char *)((longlong)puVar12 + lVar6) != '\0');
              iVar11 = (int)lVar8;
              param_data = plStack_468;
              render_object = plStack_460;
              if (iStack_a8 == iVar11) {
                if (iStack_a8 != 0) {
                  pbVar9 = pbStack_b0;
                  do {
                    pbVar1 = pbVar9 + (longlong)puVar12 + (8 - (longlong)pbStack_b0);
                    iVar11 = (uint)*pbVar9 - (uint)*pbVar1;
                    if (iVar11 != 0) break;
                    pbVar9 = pbVar9 + 1;
                  } while (*pbVar1 != 0);
                }
code_r0x00018027a71d:
                if (iVar11 == 0) {
                  uVar3 = puVar12[0x43];
                  uVar4 = puVar12[0x44];
                  uVar5 = puVar12[0x45];
                  // 设置渲染批次属性
                  *(undefined4 *)(lVar13 + 0x2b8) = puVar12[0x42];
                  *(undefined4 *)(lVar13 + 700) = uVar3;
                  *(undefined4 *)(lVar13 + 0x2c0) = uVar4;
                  *(undefined4 *)(lVar13 + 0x2c4) = uVar5;
                  puStack_b8 = &UNK_18098bcb0;
                  break;
                }
              }
              else if (iStack_a8 == 0) goto code_r0x00018027a71d;
              puStack_b8 = &UNK_18098bcb0;
              uVar19 = (int)uVar18 + 1;
              uVar18 = (ulonglong)uVar19;
              uVar17 = uVar17 + 0x10;
              lVar13 = plStack_460[7];
            } while ((ulonglong)(longlong)(int)uVar19 < (ulonglong)(plStack_460[8] - lVar13 >> 4));
          }
        }
        else {
          param_data = plStack_468;
          uVar18 = uVar17;
          uVar20 = uVar17;
          if (lVar7 != 0) {
            do {
              puVar16 = &UNK_1809fcc58;
              lVar13 = *(longlong *)(uVar18 + lVar13);
              if (*(longlong *)(lVar13 + 0x1b0) == 0) {
                lVar7 = lVar13 + 0x10;
              }
              else {
                lVar7 = func_0x000180079240();
              }
              pbStack_110 = abStack_100;
              abStack_100[0] = 0;
              iStack_108 = *(int *)(lVar7 + 0x10);
              puVar15 = &DAT_18098bc73;
              if (*(undefined **)(lVar7 + 8) != (undefined *)0x0) {
                puVar15 = *(undefined **)(lVar7 + 8);
              }
              puStack_118 = puVar16;
              strcpy_s(abStack_100,0x40,puVar15);
              lVar7 = -1;
              do {
                lVar8 = lVar7 + 1;
                lVar6 = lVar7 + 9;
                lVar7 = lVar8;
              } while (*(char *)((longlong)puVar12 + lVar6) != '\0');
              iVar11 = (int)lVar8;
              param_data = plStack_468;
              render_object = plStack_460;
              if (iStack_108 == iVar11) {
                if (iStack_108 != 0) {
                  pbVar9 = pbStack_110;
                  do {
                    pbVar1 = pbVar9 + (longlong)puVar12 + (8 - (longlong)pbStack_110);
                    iVar11 = (uint)*pbVar9 - (uint)*pbVar1;
                    if (iVar11 != 0) break;
                    pbVar9 = pbVar9 + 1;
                  } while (*pbVar1 != 0);
                }
code_r0x00018027a5b1:
                if (iVar11 == 0) {
                  lVar7 = *(longlong *)(*(longlong *)(*plStack_468 + 0x38) + uVar17 * 0x10);
                  uVar3 = *(undefined4 *)(lVar7 + 700);
                  uVar4 = *(undefined4 *)(lVar7 + 0x2c0);
                  uVar5 = *(undefined4 *)(lVar7 + 0x2c4);
                  // 复制渲染批次属性
                  *(undefined4 *)(lVar13 + 0x2b8) = *(undefined4 *)(lVar7 + 0x2b8);
                  *(undefined4 *)(lVar13 + 700) = uVar3;
                  *(undefined4 *)(lVar13 + 0x2c0) = uVar4;
                  *(undefined4 *)(lVar13 + 0x2c4) = uVar5;
                  puStack_118 = &UNK_18098bcb0;
                  break;
                }
              }
              else if (iStack_108 == 0) goto code_r0x00018027a5b1;
              puStack_118 = &UNK_18098bcb0;
              uVar19 = (int)uVar20 + 1;
              uVar17 = uVar17 + 1;
              lVar13 = plStack_460[7];
              uVar18 = uVar18 + 0x10;
              uVar20 = (ulonglong)uVar19;
            } while ((ulonglong)(longlong)(int)uVar19 < (ulonglong)(plStack_460[8] - lVar13 >> 4));
          }
        }
      }
      plVar14 = (longlong *)*plVar14;
    } while (plVar14 != param_data + 1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_488);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address