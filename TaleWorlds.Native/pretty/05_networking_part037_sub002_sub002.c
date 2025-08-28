// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: RenderingTextureManager */
#define RenderingTextureManager RenderingTextureManager
/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0
// 05_networking_part037_sub002_sub002.c - 1 个函数
// 函数: void function_860690(int64_t param_1,uint64_t *param_2)
void function_860690(int64_t param_1,uint64_t *param_2)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  int64_t lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t *plVar15;
  uint64_t *puVar16;
  int iVar17;
  uint uVar18;
  int64_t *plVar19;
  uint64_t uVar20;
  int64_t *plVar21;
  int iVar22;
  int64_t *plVar23;
  int64_t *plVar24;
  uint64_t *puVar25;
  int8_t stack_array_1a8 [32];
  uint local_var_188;
  uint local_var_180;
  uint local_var_178;
  uint local_var_170;
  uint local_var_168;
  uint local_var_160;
  uint local_var_158;
  uint local_var_150;
  uint local_var_148;
  uint local_var_140;
  int64_t lStack_138;
  uint64_t local_var_130;
  byte bStack_128;
  byte bStack_127;
  byte bStack_126;
  byte bStack_125;
  byte bStack_124;
  byte bStack_123;
  byte bStack_122;
  byte bStack_121;
  uint64_t *plocal_var_120;
  int64_t lStack_118;
  int64_t *aplStack_110 [2];
  int8_t stack_array_100 [16];
  int8_t stack_array_f0 [80];
  int8_t stack_array_a0 [40];
  uint64_t local_var_78;
  local_var_78 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1a8;
  lVar13 = *(int64_t *)(param_1 + 0x88);
  lStack_138 = param_1;
  plocal_var_120 = param_2;
  lStack_118 = lVar13;
  if (lVar13 != 0) {
    lVar7 = (**(code **)(*(int64_t *)*param_2 + 0x288))((int64_t *)*param_2,lVar13 + 0x10);
    if (lVar7 == 0) {
// WARNING: Subroutine does not return
      SystemController(lVar13 + 0x10,stack_array_a0);
    }
    *(int64_t *)(param_1 + 0x88) = lVar7;
  }
  iVar6 = function_8b8950(param_1 + 0x90,param_2);
  if ((iVar6 == 0) && (iVar6 = function_8b2950(param_1 + 8,param_2), iVar6 == 0)) {
    lVar7 = *(int64_t *)(param_1 + 0x88);
    if (lVar7 != 0) {
      plVar19 = param_2 + 0x8d;
      if (param_2 == (uint64_t *)0xffffffffffffff08) {
        plVar19 = (int64_t *)0x0;
      }
      if (plVar19 != (int64_t *)0x0) {
        if (((*(int *)((int64_t)plVar19 + 0x24) != 0) && ((int)plVar19[1] != 0)) &&
           (iVar6 = *(int *)(*plVar19 +
                            (int64_t)
                            (int)((*(uint *)(lVar7 + 0x1c) ^ *(uint *)(lVar7 + 0x18) ^
                                   *(uint *)(lVar7 + 0x14) ^ *(uint *)(lVar7 + 0x10)) &
                                 (int)plVar19[1] - 1U) * 4), iVar6 != -1)) {
          lVar14 = plVar19[2];
          do {
            lVar8 = (int64_t)iVar6;
            if ((*(int64_t *)(lVar14 + lVar8 * 0x18) == *(int64_t *)(lVar7 + 0x10)) &&
               (*(int64_t *)(lVar14 + 8 + lVar8 * 0x18) == *(int64_t *)(lVar7 + 0x18)))
            goto LAB_1808607eb;
            iVar6 = *(int *)(lVar14 + 0x10 + lVar8 * 0x18);
          } while (iVar6 != -1);
        }
        iVar6 = -1;
LAB_1808607eb:
        if (iVar6 != -1) {
          iVar6 = SystemDataFlowProcessor(param_1 + 8,10);
          if (((iVar6 != 0) || (iVar6 = SystemDataFlowProcessor(param_1 + 8,0x1e), iVar6 != 0)) ||
             (iVar6 = SystemDataFlowProcessor(param_1 + 8), iVar6 != 0)) goto SystemCore_ValidationSystem;
          lVar7 = *(int64_t *)(param_1 + 0x88);
          for (uVar20 = *(uint64_t *)(lVar7 + 0x70);
              (*(uint64_t *)(lVar7 + 0x70) <= uVar20 &&
              (uVar20 < (int64_t)*(int *)(lVar7 + 0x78) * 0x10 + *(uint64_t *)(lVar7 + 0x70)));
              uVar20 = uVar20 + 0x10) {
            cVar4 = Function_298149bd(lVar13 + 0x70);
            if (cVar4 == '\0') {
              local_var_130 = (int64_t *)0x0;
              iVar6 = function_8bc010(*(uint64_t *)(param_1 + 0x2c8),uVar20,param_1);
              if (iVar6 != 0) goto SystemCore_ValidationSystem;
            }
          }
          for (plVar19 = *(int64_t **)(lVar13 + 0x70);
              (*(int64_t **)(lVar13 + 0x70) <= plVar19 &&
              (plVar19 < *(int64_t **)(lVar13 + 0x70) + (int64_t)*(int *)(lVar13 + 0x78) * 2));
              plVar19 = plVar19 + 2) {
            iVar17 = 0;
            iVar6 = *(int *)(*(int64_t *)(param_1 + 0x88) + 0x78);
            if (0 < iVar6) {
              lVar7 = *(int64_t *)(*(int64_t *)(param_1 + 0x88) + 0x70);
              do {
                if ((*(int64_t *)(lVar7 + (int64_t)iVar17 * 0x10) == *plVar19) &&
                   (*(int64_t *)(lVar7 + 8 + (int64_t)iVar17 * 0x10) == plVar19[1]))
                goto LAB_1808609c2;
                iVar17 = iVar17 + 1;
              } while (iVar17 < iVar6);
            }
            lVar7 = *(int64_t *)(param_1 + 0x2c8);
            uVar18 = *(uint *)(param_1 + 0x2dc);
            lVar14 = *(int64_t *)(lVar7 + 0x130);
            if (lVar14 != 0) {
              SystemMemoryAllocator(lVar14);
            }
            plVar9 = (int64_t *)Function_357ff8fd(lVar7 + 0x138,plVar19);
            if (plVar9 == (int64_t *)0x0) {
              plVar9 = (int64_t *)Function_357ff8fd(lVar7 + 0x108,plVar19);
            }
            if (plVar9 == (int64_t *)0x0) {
              if (lVar14 != 0) {
// WARNING: Subroutine does not return
                SystemMemoryManager(lVar14);
              }
              goto SystemCore_ValidationSystem;
            }
            if (((*(int *)((int64_t)plVar9 + 0x24) != 0) && ((int)plVar9[1] != 0)) &&
               (iVar6 = *(int *)(*plVar9 + (int64_t)(int)((int)plVar9[1] - 1U & uVar18) * 4),
               iVar6 != -1)) {
              lVar7 = plVar9[2];
              do {
                lVar8 = (int64_t)iVar6;
                if (*(uint *)(lVar7 + lVar8 * 0x10) == uVar18) {
                  lVar7 = *(int64_t *)(lVar7 + 8 + lVar8 * 0x10);
                  goto LAB_180860998;
                }
                iVar6 = *(int *)(lVar7 + 4 + lVar8 * 0x10);
              } while (iVar6 != -1);
            }
            lVar7 = 0;
LAB_180860998:
            if (lVar14 != 0) {
// WARNING: Subroutine does not return
              SystemMemoryManager(lVar14);
            }
            if ((lVar7 == 0) ||
               (iVar6 = function_8c19d0(*(uint64_t *)(param_1 + 0x2c8)), iVar6 != 0))
            goto SystemCore_ValidationSystem;
LAB_1808609c2:
          }
          iVar6 = 0;
          if (0 < *(int *)(lVar13 + 0x88)) {
            do {
              iVar22 = 0;
              plVar19 = (int64_t *)((int64_t)iVar6 * 0x10 + *(int64_t *)(lVar13 + 0x80));
              iVar17 = *(int *)(*(int64_t *)(param_1 + 0x88) + 0x88);
              if (0 < iVar17) {
                lVar7 = *(int64_t *)(*(int64_t *)(param_1 + 0x88) + 0x80);
                do {
                  if ((*(int64_t *)(lVar7 + (int64_t)iVar22 * 0x10) == *plVar19) &&
                     (*(int64_t *)(lVar7 + 8 + (int64_t)iVar22 * 0x10) == plVar19[1]))
                  goto LAB_180860a65;
                  iVar22 = iVar22 + 1;
                } while (iVar22 < iVar17);
              }
              iVar17 = function_8626e0(param_1);
              if (iVar17 != 0) goto SystemCore_ValidationSystem;
LAB_180860a65:
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(lVar13 + 0x88));
          }
          iVar6 = 0;
          lVar7 = *(int64_t *)(param_1 + 0x88);
          if (0 < *(int *)(lVar7 + 0x88)) {
            do {
              iVar17 = 0;
              plVar19 = (int64_t *)((int64_t)iVar6 * 0x10 + *(int64_t *)(lVar7 + 0x80));
              if (0 < *(int *)(lVar13 + 0x88)) {
                do {
                  if ((*(int64_t *)(*(int64_t *)(lVar13 + 0x80) + (int64_t)iVar17 * 0x10) ==
                       *plVar19) &&
                     (*(int64_t *)(*(int64_t *)(lVar13 + 0x80) + 8 + (int64_t)iVar17 * 0x10) ==
                      plVar19[1])) goto LAB_180860af6;
                  iVar17 = iVar17 + 1;
                } while (iVar17 < *(int *)(lVar13 + 0x88));
              }
              iVar17 = function_85ea80(param_1,iVar6);
              if (iVar17 != 0) goto SystemCore_ValidationSystem;
LAB_180860af6:
              lVar7 = *(int64_t *)(param_1 + 0x88);
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(lVar7 + 0x88));
          }
          iVar6 = 0;
          param_2 = plocal_var_120;
          if (0 < *(int *)(lVar13 + 0xa8)) {
            do {
              iVar22 = 0;
              plVar19 = (int64_t *)((int64_t)iVar6 * 0x10 + *(int64_t *)(lVar13 + 0xa0));
              iVar17 = *(int *)(*(int64_t *)(param_1 + 0x88) + 0xa8);
              if (0 < iVar17) {
                lVar7 = *(int64_t *)(*(int64_t *)(param_1 + 0x88) + 0xa0);
                do {
                  if ((*(int64_t *)(lVar7 + (int64_t)iVar22 * 0x10) == *plVar19) &&
                     (*(int64_t *)(lVar7 + 8 + (int64_t)iVar22 * 0x10) == plVar19[1]))
                  goto LAB_180860c58;
                  iVar22 = iVar22 + 1;
                } while (iVar22 < iVar17);
              }
              plVar9 = (int64_t *)(param_1 + 0x490);
              plVar21 = (int64_t *)*plVar9;
              plVar23 = plVar21;
              while (plVar23 != plVar9) {
                (**(code **)(*(int64_t *)plVar21[2] + 0x30))((int64_t *)plVar21[2],&local_var_130);
                if ((local_var_130 == (int64_t *)*plVar19) &&
                   (CONCAT17(bStack_121,
                             CONCAT16(bStack_122,
                                      CONCAT15(bStack_123,
                                               CONCAT14(bStack_124,
                                                        CONCAT13(bStack_125,
                                                                 CONCAT12(bStack_126,
                                                                          CONCAT11(bStack_127,
                                                                                   bStack_128)))))))
                    == plVar19[1])) {
                  if (plVar21 != (int64_t *)0x0) {
                    (**(code **)(*(int64_t *)plVar21[2] + 0x30))
                              ((int64_t *)plVar21[2],aplStack_110);
                    iVar6 = function_8caa20(param_1 + 0x3f8,aplStack_110);
                    if (iVar6 == 0) {
                      local_var_188 = CONCAT31(local_var_188._1_3_,1);
                      *(int64_t *)plVar21[1] = *plVar21;
                      *(int64_t *)(*plVar21 + 8) = plVar21[1];
                      plVar21[1] = (int64_t)plVar21;
                      *plVar21 = (int64_t)plVar21;
                      *(int64_t **)plVar21[1] = plVar21;
                      *(int64_t *)(*plVar21 + 8) = plVar21[1];
                      plVar21[1] = (int64_t)plVar21;
                      *plVar21 = (int64_t)plVar21;
// WARNING: Subroutine does not return
                      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar21,&rendering_buffer_2624_ptr,
                                    0xa2c);
                    }
                    goto SystemCore_ValidationSystem;
                  }
                  break;
                }
                if (plVar21 != plVar9) {
                  plVar21 = (int64_t *)*plVar21;
                  plVar23 = plVar21;
                }
              }
LAB_180860c58:
              iVar6 = iVar6 + 1;
              param_2 = plocal_var_120;
            } while (iVar6 < *(int *)(lVar13 + 0xa8));
          }
        }
      }
    }
    if ((*(int64_t *)(param_1 + 0x80) == 0) ||
       (iVar6 = function_868330(*(int64_t *)(param_1 + 0x80),param_2), iVar6 == 0)) {
      for (puVar16 = *(uint64_t **)(param_1 + 0x4d0);
          (*(uint64_t **)(param_1 + 0x4d0) <= puVar16 &&
          (puVar16 < *(uint64_t **)(param_1 + 0x4d0) + *(int *)(param_1 + 0x4d8)));
          puVar16 = puVar16 + 1) {
        iVar6 = function_8cc190(*puVar16,param_2);
        if (iVar6 != 0) goto SystemCore_ValidationSystem;
      }
      plVar19 = (int64_t *)(param_1 + 0x250);
      Function_d194417a(plVar19);
      puVar1 = (uint64_t *)(param_1 + 0x260);
      iVar6 = SystemAnalyzer(puVar1);
      if (iVar6 == 0) {
        puVar25 = (uint64_t *)(param_1 + 0x270);
        iVar6 = SystemAnalyzer(puVar25);
        if (iVar6 == 0) {
          plVar21 = (int64_t *)0x0;
          aplStack_110[0] = (int64_t *)(lStack_138 + 0x240);
          plVar9 = (int64_t *)(*aplStack_110[0] + -0x18);
          if (*aplStack_110[0] == 0) {
            plVar9 = plVar21;
          }
          plVar23 = plVar21;
          if (plVar9 != (int64_t *)0x0) {
            plVar23 = plVar9 + 3;
          }
          if (plVar23 != aplStack_110[0]) {
            do {
              lVar13 = lStack_138;
              (**(code **)(*(int64_t *)(lStack_138 + 8) + 0x30))(lStack_138 + 8);
              plVar9 = plVar23 + -3;
              if (plVar23 == (int64_t *)0x0) {
                plVar9 = (int64_t *)0x0;
              }
              iVar6 = function_8d6650(plVar9,plocal_var_120);
              if (iVar6 != 0) goto SystemCore_ValidationSystem;
              plVar9 = plVar23 + 4;
              if (plVar23 == (int64_t *)0x0) {
                plVar9 = (int64_t *)0x38;
              }
              if ((*(int *)(*plVar9 + 0x30) != -1) &&
                 (iVar6 = function_85e990(lVar13,*plVar9), iVar6 != 0)) goto SystemCore_ValidationSystem;
              if ((*(int64_t *)(lStack_138 + 0x80) != 0) &&
                 (iVar6 = function_868970(*(int64_t *)(lStack_138 + 0x80),plVar21), iVar6 != 0))
              goto SystemCore_ValidationSystem;
              plVar9 = plVar23 + 3;
              iVar6 = 0;
              if (plVar23 == (int64_t *)0x0) {
                plVar9 = (int64_t *)0x30;
                iVar6 = 0;
              }
              while( true ) {
                if (*(int *)(*plVar9 + 0x60) <= iVar6) break;
                local_var_130 = (int64_t *)0x0;
                iVar17 = function_860480(lStack_138,
                                       (int64_t)iVar6 * 0x10 + *(int64_t *)(*plVar9 + 0x58));
                if (iVar17 != 0) goto SystemCore_ValidationSystem;
                iVar6 = iVar6 + 1;
              }
              if (plVar23 != aplStack_110[0]) {
                plVar9 = (int64_t *)(*plVar23 + -0x18);
                if (*plVar23 == 0) {
                  plVar9 = (int64_t *)0x0;
                }
                plVar23 = (int64_t *)0x0;
                if (plVar9 != (int64_t *)0x0) {
                  plVar23 = plVar9 + 3;
                }
              }
              plVar21 = (int64_t *)(uint64_t)((int)plVar21 + 1);
            } while (plVar23 != aplStack_110[0]);
          }
          lVar13 = lStack_138;
          if ((*(int64_t *)(lStack_138 + 0x350) == 0) || (iVar6 = function_8ccc40(), iVar6 == 0)) {
            lVar7 = *plVar19 + -8;
            if (*plVar19 == 0) {
              lVar7 = 0;
            }
            plVar9 = (int64_t *)(lVar7 + 8);
            puVar16 = plocal_var_120;
            if (lVar7 == 0) {
              plVar9 = (int64_t *)0x0;
            }
            while (plVar9 != plVar19) {
              plVar21 = plVar9 + -1;
              if (plVar9 == (int64_t *)0x0) {
                plVar21 = (int64_t *)0x0;
              }
              local_var_130 = plVar21;
              uVar10 = (**(code **)(*(int64_t *)(lVar13 + 8) + 0x38))(lVar13 + 8);
              uVar11 = (**(code **)(*(int64_t *)(lVar13 + 8) + 0x30))(lVar13 + 8);
              puVar16 = plocal_var_120;
              iVar6 = function_8d6410(plVar21,plocal_var_120,uVar11,uVar10);
              if (iVar6 != 0) goto SystemCore_ValidationSystem;
              lVar7 = plVar21[3];
              if (lVar7 != 0) {
                plVar23 = puVar16 + 0x97;
                if (puVar16 == (uint64_t *)0xffffffffffffff08) {
                  plVar23 = (int64_t *)0x0;
                }
                if (plVar23 != (int64_t *)0x0) {
                  if (((*(int *)((int64_t)plVar23 + 0x24) != 0) && ((int)plVar23[1] != 0)) &&
                     (iVar6 = *(int *)(*plVar23 +
                                      (int64_t)
                                      (int)((*(uint *)(lVar7 + 0x1c) ^ *(uint *)(lVar7 + 0x18) ^
                                             *(uint *)(lVar7 + 0x14) ^ *(uint *)(lVar7 + 0x10)) &
                                           (int)plVar23[1] - 1U) * 4), iVar6 != -1)) {
                    lVar14 = plVar23[2];
                    do {
                      lVar8 = (int64_t)iVar6;
                      if ((*(int64_t *)(lVar14 + lVar8 * 0x18) == *(int64_t *)(lVar7 + 0x10)) &&
                         (*(int64_t *)(lVar14 + (lVar8 * 3 + 1) * 8) == *(int64_t *)(lVar7 + 0x18)
                         )) goto LAB_180860f7b;
                      iVar6 = *(int *)(lVar14 + (lVar8 * 3 + 2) * 8);
                    } while (iVar6 != -1);
                  }
                  iVar6 = -1;
LAB_180860f7b:
                  if (iVar6 != -1) {
                    cVar4 = Function_6741ded3(lVar7);
                    plVar23 = local_var_130;
                    iVar6 = *(int *)(param_1 + 0x278);
                    iVar17 = 0;
                    lVar7 = 0;
                    if (0 < iVar6) {
                      puVar12 = (uint64_t *)*puVar25;
                      do {
                        if ((int64_t *)*puVar12 == plVar21) break;
                        iVar17 = iVar17 + 1;
                        lVar7 = lVar7 + 1;
                        puVar12 = puVar12 + 1;
                      } while (lVar7 < iVar6);
                    }
                    uVar2 = *puVar25;
                    uVar20 = uVar2 + (int64_t)iVar17 * 8;
                    if ((uVar20 < uVar2) || (uVar2 + (int64_t)iVar6 * 8 <= uVar20)) {
                      cVar5 = '\0';
                    }
                    else {
                      cVar5 = '\x01';
                    }
                    if (cVar4 != cVar5) {
                      if (cVar4 == '\0') {
                        iVar17 = (int)((int64_t)(uVar20 - uVar2) >> 3);
                        if ((iVar17 < 0) || (iVar6 <= iVar17)) goto SystemCore_ValidationSystem;
                        iVar22 = (iVar6 - iVar17) + -1;
                        if (0 < iVar22) {
                          lVar13 = uVar2 + (int64_t)iVar17 * 8;
// WARNING: Subroutine does not return
                          memmove(lVar13,lVar13 + 8,(int64_t)iVar22 << 3);
                        }
                        *(int *)(param_1 + 0x278) = iVar6 + -1;
                      }
                      else {
                        iVar6 = iVar6 + 1;
                        uVar18 = (int)*(uint *)(param_1 + 0x27c) >> 0x1f;
                        iVar17 = (*(uint *)(param_1 + 0x27c) ^ uVar18) - uVar18;
                        if (iVar17 < iVar6) {
                          iVar22 = (int)((float)iVar17 * 1.5);
                          iVar17 = iVar6;
                          if (iVar6 <= iVar22) {
                            iVar17 = iVar22;
                          }
                          if (iVar17 < 8) {
                            iVar22 = 8;
                          }
                          else if (iVar22 < iVar6) {
                            iVar22 = iVar6;
                          }
                          iVar6 = RenderingTextureManager0(puVar25,iVar22);
                          if (iVar6 != 0) goto SystemCore_ValidationSystem;
                        }
                        *(int64_t **)(*puVar25 + (int64_t)*(int *)(param_1 + 0x278) * 8) = plVar23
                        ;
                        *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 1;
                      }
                    }
                    lVar7 = plVar21[3];
                    if (((*(float *)(lVar7 + 0x40) == 0.0) && (*(float *)(lVar7 + 0x44) == 0.0)) &&
                       (*(float *)(lVar7 + 0x48) == 0.0)) {
                      cVar4 = '\0';
                    }
                    else {
                      cVar4 = '\x01';
                    }
                    iVar6 = *(int *)(param_1 + 0x268);
                    iVar17 = 0;
                    lVar7 = 0;
                    if (0 < iVar6) {
                      puVar12 = (uint64_t *)*puVar1;
                      do {
                        if ((int64_t *)*puVar12 == plVar21) break;
                        iVar17 = iVar17 + 1;
                        lVar7 = lVar7 + 1;
                        puVar12 = puVar12 + 1;
                      } while (lVar7 < iVar6);
                    }
                    uVar2 = *puVar1;
                    uVar20 = uVar2 + (int64_t)iVar17 * 8;
                    if ((uVar20 < uVar2) || (uVar2 + (int64_t)iVar6 * 8 <= uVar20)) {
                      cVar5 = '\0';
                    }
                    else {
                      cVar5 = '\x01';
                    }
                    if (cVar4 != cVar5) {
                      if (cVar4 == '\0') {
                        iVar17 = (int)((int64_t)(uVar20 - uVar2) >> 3);
                        if ((iVar17 < 0) || (iVar6 <= iVar17)) goto SystemCore_ValidationSystem;
                        iVar22 = (iVar6 - iVar17) + -1;
                        if (0 < iVar22) {
                          lVar13 = uVar2 + (int64_t)iVar17 * 8;
// WARNING: Subroutine does not return
                          memmove(lVar13,lVar13 + 8,(int64_t)iVar22 << 3);
                        }
                        *(int *)(param_1 + 0x268) = iVar6 + -1;
                      }
                      else {
                        iVar6 = iVar6 + 1;
                        uVar18 = (int)*(uint *)(param_1 + 0x26c) >> 0x1f;
                        iVar17 = (*(uint *)(param_1 + 0x26c) ^ uVar18) - uVar18;
                        if (iVar17 < iVar6) {
                          iVar22 = (int)((float)iVar17 * 1.5);
                          iVar17 = iVar6;
                          if (iVar6 <= iVar22) {
                            iVar17 = iVar22;
                          }
                          if (iVar17 < 8) {
                            iVar22 = 8;
                          }
                          else if (iVar22 < iVar6) {
                            iVar22 = iVar6;
                          }
                          iVar6 = RenderingTextureManager0(puVar1,iVar22);
                          if (iVar6 != 0) goto SystemCore_ValidationSystem;
                        }
                        *(int64_t **)(*puVar1 + (int64_t)*(int *)(param_1 + 0x268) * 8) = plVar23;
                        *(int *)(param_1 + 0x268) = *(int *)(param_1 + 0x268) + 1;
                      }
                    }
                  }
                }
              }
              lVar7 = *plVar9 + -8;
              if (*plVar9 == 0) {
                lVar7 = 0;
              }
              plVar9 = (int64_t *)(lVar7 + 8);
              if (lVar7 == 0) {
                plVar9 = (int64_t *)0x0;
              }
            }
            if ((((*(int64_t *)(lVar13 + 0x478) == 0) ||
                 (iVar6 = function_8d84d0(*(int64_t *)(lVar13 + 0x478),puVar16), iVar6 == 0)) &&
                (iVar6 = function_8cc000(lVar13 + 0x3f8,puVar16), iVar6 == 0)) &&
               (iVar6 = function_8cc000(lVar13 + 0x378,puVar16), iVar6 == 0)) {
              plVar19 = (int64_t *)(lVar13 + 0x490);
              for (plVar9 = (int64_t *)*plVar19; plVar9 != plVar19; plVar9 = (int64_t *)*plVar9) {
                (**(code **)(*(int64_t *)plVar9[2] + 0x30))((int64_t *)plVar9[2],stack_array_100);
                cVar4 = SystemFunction_0001808c57f0(puVar16,plVar9[2]);
                if ((cVar4 != '\0') && (plVar21 = (int64_t *)plVar9[2], plVar21 != (int64_t *)0x0)
                   ) {
                  (**(code **)(*plVar21 + 0x30))(plVar21,&local_var_130);
                  lVar13 = (**(code **)(*(int64_t *)*puVar16 + 0x128))
                                     ((int64_t *)*puVar16,&local_var_130,1);
                  if (lVar13 == 0) {
                    local_var_140 = (uint)bStack_121;
                    local_var_148 = (uint)bStack_122;
                    local_var_150 = (uint)bStack_123;
                    local_var_158 = (uint)bStack_124;
                    local_var_160 = (uint)bStack_125;
                    local_var_168 = (uint)bStack_126;
                    local_var_170 = (uint)bStack_127;
                    local_var_178 = (uint)bStack_128;
                    local_var_180 = (uint)local_var_130._6_2_;
                    local_var_188 = (uint)local_var_130._4_2_;
// WARNING: Subroutine does not return
                    SystemDataValidator(stack_array_a0,0x27,&processed_var_8960_ptr,(uint64_t)local_var_130 & 0xffffffff)
                    ;
                  }
                  plVar9[2] = lVar13;
                }
                lVar13 = lStack_138;
                if (plVar9 == plVar19) break;
              }
              cVar4 = Function_459d5de3(lVar13 + 200);
              lVar7 = lStack_118;
              if (((cVar4 != '\0') || ((*(uint *)(lVar13 + 0x2d8) >> 0xf & 1) != 0)) ||
                 (*(int *)(lVar13 + 0x2e4) != 0)) {
                lVar14 = *(int64_t *)(lVar13 + 0x88);
                iVar6 = 0;
                if (0 < *(int *)(lVar14 + 0xa8)) {
                  do {
                    iVar22 = 0;
                    iVar17 = *(int *)(lVar7 + 0xa8);
                    plVar9 = (int64_t *)((int64_t)iVar6 * 0x10 + *(int64_t *)(lVar14 + 0xa0));
                    if (0 < iVar17) {
                      lVar14 = *(int64_t *)(lVar7 + 0xa0);
                      do {
                        if ((*(int64_t *)(lVar14 + (int64_t)iVar22 * 0x10) == *plVar9) &&
                           (*(int64_t *)(lVar14 + 8 + (int64_t)iVar22 * 0x10) == plVar9[1]))
                        goto LAB_18086142b;
                        iVar22 = iVar22 + 1;
                      } while (iVar22 < iVar17);
                    }
                    local_var_130 = (int64_t *)0x0;
                    iVar17 = function_860480(lVar13,plVar9,&local_var_130);
                    plVar9 = local_var_130;
                    if (iVar17 != 0) goto SystemCore_ValidationSystem;
                    *(uint *)((int64_t)local_var_130 + 0x1c) =
                         *(uint *)((int64_t)local_var_130 + 0x1c) | 0x80;
                    if (((*(uint *)((int64_t)local_var_130 + 0x1c) >> 5 & 1) == 0) ||
                       ((*(uint *)((int64_t)local_var_130 + 0x1c) >> 6 & 1) != 0)) {
                      uVar10 = function_85ba10(lVar13 + 200,stack_array_f0);
                      iVar17 = function_8c7260(uVar10,plVar9,1);
                      if (iVar17 != 0) goto SystemCore_ValidationSystem;
                    }
LAB_18086142b:
                    lVar14 = *(int64_t *)(lVar13 + 0x88);
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < *(int *)(lVar14 + 0xa8));
                }
              }
              puVar16 = plocal_var_120;
              iVar6 = function_856ec0(lVar13 + 200,plocal_var_120);
              if ((iVar6 == 0) && (iVar6 = function_8d3ee0(lVar13 + 0x280,puVar16), iVar6 == 0)) {
                lVar7 = *(int64_t *)(*(int64_t *)(lVar13 + 0x2b0) + 0x30);
                iVar6 = UISystem_WidgetController(lVar13 + 200);
                lVar7 = lVar7 + iVar6;
                plVar9 = (int64_t *)*plVar19;
                lVar13 = lStack_138;
joined_r0x000180861496:
                plVar21 = plVar9;
                if (plVar21 != plVar19) {
                  plVar23 = plVar21 + 2;
                  (**(code **)(*(int64_t *)plVar21[2] + 0x30))((int64_t *)plVar21[2],&local_var_130);
                  plVar9 = plVar21;
                  if (plVar21 != plVar19) {
                    plVar9 = (int64_t *)*plVar21;
                  }
                  lVar14 = *plVar23;
                  cVar4 = SystemFunction_0001808c57f0(plocal_var_120,lVar14);
                  if (cVar4 == '\0') {
                    if ((*(byte *)((int64_t)plVar21 + 0x1c) & 1) == 0) {
                      plVar24 = (int64_t *)0x0;
                      lVar8 = CONCAT17(bStack_121,
                                       CONCAT16(bStack_122,
                                                CONCAT15(bStack_123,
                                                         CONCAT14(bStack_124,
                                                                  CONCAT13(bStack_125,
                                                                           CONCAT12(bStack_126,
                                                                                    CONCAT11(
                                                  bStack_127,bStack_128)))))));
                      iVar6 = *(int *)(*(int64_t *)(lStack_138 + 0x88) + 0xa8);
                      if (0 < iVar6) {
                        lVar3 = *(int64_t *)(*(int64_t *)(lStack_138 + 0x88) + 0xa0);
                        plVar15 = plVar24;
                        do {
                          iVar17 = (int)plVar15;
                          if ((*(int64_t **)(lVar3 + (int64_t)iVar17 * 0x10) == local_var_130) &&
                             (lVar13 = lStack_138,
                             *(int64_t *)(lVar3 + 8 + (int64_t)iVar17 * 0x10) == lVar8))
                          goto joined_r0x000180861496;
                          plVar15 = (int64_t *)(uint64_t)(iVar17 + 1U);
                        } while ((int)(iVar17 + 1U) < iVar6);
                      }
                      plVar15 = (int64_t *)(*aplStack_110[0] + -0x18);
                      if (*aplStack_110[0] == 0) {
                        plVar15 = plVar24;
                      }
                      if (plVar15 != (int64_t *)0x0) {
                        plVar24 = plVar15 + 3;
                      }
                      while (plVar24 != aplStack_110[0]) {
                        iVar6 = 0;
                        plVar15 = plVar24 + 3;
                        if (plVar24 == (int64_t *)0x0) {
                          plVar15 = (int64_t *)0x30;
                        }
                        iVar17 = *(int *)(*plVar15 + 0x60);
                        if (0 < iVar17) {
                          lVar13 = *(int64_t *)(*plVar15 + 0x58);
                          do {
                            if ((*(int64_t **)(lVar13 + (int64_t)iVar6 * 0x10) == local_var_130) &&
                               (*(int64_t *)(lVar13 + 8 + (int64_t)iVar6 * 0x10) == lVar8)) {
                              function_862080(lStack_138,lVar14,lVar7 + 0x40);
                              lVar13 = lStack_138;
                              goto joined_r0x000180861496;
                            }
                            iVar6 = iVar6 + 1;
                          } while (iVar6 < iVar17);
                        }
                        lVar13 = *plVar24 + -0x18;
                        if (*plVar24 == 0) {
                          lVar13 = 0;
                        }
                        plVar24 = (int64_t *)(lVar13 + 0x18);
                        if (lVar13 == 0) {
                          plVar24 = (int64_t *)0x0;
                        }
                      }
                      uVar18 = *(uint *)((int64_t)plVar21 + 0x1c);
                      (**(code **)(*(int64_t *)*plVar23 + 0x30))((int64_t *)*plVar23,stack_array_100);
                      iVar6 = function_8caa20(lStack_138 + 0x378 +
                                            (uint64_t)(~(uVar18 >> 1) & 1) * 0x80,stack_array_100);
                      if (iVar6 == 0) {
                        local_var_188 = CONCAT31(local_var_188._1_3_,1);
                        *(int64_t *)plVar21[1] = *plVar21;
                        *(int64_t *)(*plVar21 + 8) = plVar21[1];
                        plVar21[1] = (int64_t)plVar21;
                        *plVar21 = (int64_t)plVar21;
                        *(int64_t **)plVar21[1] = plVar21;
                        *(int64_t *)(*plVar21 + 8) = plVar21[1];
                        plVar21[1] = (int64_t)plVar21;
                        *plVar21 = (int64_t)plVar21;
// WARNING: Subroutine does not return
                        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar21,&rendering_buffer_2624_ptr
                                      ,0xadc);
                      }
                      goto SystemCore_ValidationSystem;
                    }
                  }
                  else {
                    function_862080(lVar13,*plVar23,lVar7 + 0x40);
                  }
                  goto joined_r0x000180861496;
                }
              }
            }
          }
        }
      }
    }
  }
SystemCore_ValidationSystem:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_78 ^ (uint64_t)stack_array_1a8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address