#include "TaleWorlds.Native.Split.h"
// 03_rendering_part529_sub002_sub002.c - 1 个函数
// 函数: void function_555f60(int64_t param_1,int32_t param_2,int64_t param_3,uint64_t param_4)
void function_555f60(int64_t param_1,int32_t param_2,int64_t param_3,uint64_t param_4)
{
  char cVar1;
  char cVar2;
  uint uVar3;
  int32_t uVar4;
  char *pcVar5;
  int64_t lVar6;
  uint *puVar7;
  uint64_t *puVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  int64_t lVar12;
  uint uVar13;
  uint64_t uVar14;
  char cVar15;
  char *pcVar16;
  char *pcVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint astack_special_x_10 [2];
  int64_t lStackX_18;
  uint64_t stack_special_x_20;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  int32_t local_var_b8;
  int32_t local_var_b4;
  void *plocal_var_b0;
  int8_t *plocal_var_a8;
  int iStack_a0;
  uint64_t local_var_98;
  uint local_var_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint stack_array_70 [2];
  int64_t alStack_68 [3];
  uint64_t local_var_50;
  local_var_50 = 0xfffffffffffffffe;
  lStackX_18 = param_3;
  stack_special_x_20 = param_4;
  function_5575d0();
  *(int32_t *)(param_1 + 0x20) = param_2;
  if (param_3 == 0) {
    return;
  }
  pcVar16 = "monster_usage_strikes";
  do {
    pcVar17 = pcVar16;
    pcVar16 = pcVar17 + 1;
  } while (*pcVar16 != '\0');
  puVar8 = *(uint64_t **)(param_3 + 0x30);
LAB_180555fcc:
  if (puVar8 == (uint64_t *)0x0) goto LAB_18055623a;
  pcVar16 = (char *)*puVar8;
  if (pcVar16 == (char *)0x0) {
    pcVar5 = (char *)0x0;
    pcVar16 = (char *)0x180d48d24;
  }
  else {
    pcVar5 = (char *)puVar8[2];
  }
  if (pcVar5 == pcVar17 + -0x180a34f5f) {
    pcVar5 = pcVar16 + (int64_t)pcVar5;
    if (pcVar5 <= pcVar16) {
LAB_180556010:
      pcVar16 = "monster_usage_strike";
      do {
        pcVar17 = pcVar16;
        pcVar16 = pcVar17 + 1;
      } while (*pcVar16 != '\0');
      for (puVar8 = (uint64_t *)puVar8[6]; puVar8 != (uint64_t *)0x0;
          puVar8 = (uint64_t *)puVar8[0xb]) {
        pcVar16 = (char *)*puVar8;
        if (pcVar16 == (char *)0x0) {
          pcVar5 = (char *)0x0;
          pcVar16 = (char *)0x180d48d24;
        }
        else {
          pcVar5 = (char *)puVar8[2];
        }
        if (pcVar5 == pcVar17 + -0x180a34f47) {
          pcVar5 = pcVar5 + (int64_t)pcVar16;
          if (pcVar5 <= pcVar16) {
LAB_180556090:
            do {
              local_var_c8 = 0xffffffffffffffff;
              local_var_c0 = CONCAT35(local_var_c0._5_3_,0xffffffffff);
              local_var_b8 = 0xffffffff;
              local_var_b4 = local_var_b4 & 0xff000000;
              cVar9 = -1;
              if (puVar8 != (uint64_t *)0x0) {
                function_558140(&local_var_c8,puVar8);
                cVar9 = local_var_c0._4_1_;
              }
              cVar1 = cVar9 + '\x01';
              if (cVar9 == -1) {
                cVar1 = '\t';
              }
              param_3 = lStackX_18;
              uVar10 = local_var_b4;
              for (iVar18 = (int)cVar9; lStackX_18 = param_3, local_var_b4 = uVar10, iVar18 < cVar1;
                  iVar18 = iVar18 + 1) {
                local_var_b4._2_1_ = (char)(uVar10 >> 0x10);
                local_var_b4._0_1_ = (char)uVar10;
                astack_special_x_10[0] =
                     (-(uint)(local_var_b4._2_1_ != '\0') & 0x800 | local_var_b8) << 2 |
                     ((char)iVar18 + 1) * 0x20 | ((int)local_var_c8 + 1) * 0x4000 |
                     ((uint)local_var_c0 + 1) * 0x200 | -(uint)((char)local_var_b4 != '\0') & 2 |
                     uVar10 >> 8 & 0xff;
                lVar12 = *(int64_t *)(param_1 + 0x30);
                for (puVar7 = *(uint **)(lVar12 + ((uint64_t)(int64_t)(int)astack_special_x_10[0] %
                                                  (uint64_t)*(uint *)(param_1 + 0x38)) * 8);
                    puVar7 != (uint *)0x0; puVar7 = *(uint **)(puVar7 + 2)) {
                  if (astack_special_x_10[0] == *puVar7) {
                    lVar6 = *(int64_t *)(param_1 + 0x38);
                    goto LAB_18055617a;
                  }
                }
                lVar6 = *(int64_t *)(param_1 + 0x38);
                puVar7 = *(uint **)(lVar12 + lVar6 * 8);
LAB_18055617a:
                if (puVar7 == *(uint **)(lVar12 + lVar6 * 8)) {
                  local_var_c8._4_4_ = (uint)((uint64_t)local_var_c8 >> 0x20);
                  uVar4 = local_var_c8._4_4_;
                  UtilitiesSystem_ConfigManager(param_1 + 0x28,&local_var_88,astack_special_x_10[0],astack_special_x_10,
                                (int64_t)(int)astack_special_x_10[0]);
                  *(int32_t *)((int64_t)local_var_88 + 4) = uVar4;
                }
                param_3 = lStackX_18;
                uVar10 = local_var_b4;
              }
              pcVar16 = "monster_usage_strike";
              do {
                pcVar17 = pcVar16;
                pcVar16 = pcVar17 + 1;
              } while (*pcVar16 != '\0');
              for (puVar8 = (uint64_t *)puVar8[0xb]; puVar8 != (uint64_t *)0x0;
                  puVar8 = (uint64_t *)puVar8[0xb]) {
                pcVar16 = (char *)*puVar8;
                if (pcVar16 == (char *)0x0) {
                  pcVar5 = (char *)0x0;
                  pcVar16 = (char *)0x180d48d24;
                }
                else {
                  pcVar5 = (char *)puVar8[2];
                }
                if (pcVar5 == pcVar17 + -0x180a34f47) {
                  pcVar5 = pcVar5 + (int64_t)pcVar16;
                  if (pcVar5 <= pcVar16) goto LAB_18055622d;
                  lVar12 = (int64_t)&memory_allocator_3608_ptr - (int64_t)pcVar16;
                  while (*pcVar16 == pcVar16[lVar12]) {
                    pcVar16 = pcVar16 + 1;
                    if (pcVar5 <= pcVar16) goto LAB_18055622d;
                  }
                }
              }
              puVar8 = (uint64_t *)0x0;
LAB_18055622d:
            } while (puVar8 != (uint64_t *)0x0);
            break;
          }
          lVar12 = (int64_t)&memory_allocator_3608_ptr - (int64_t)pcVar16;
          while (*pcVar16 == pcVar16[lVar12]) {
            pcVar16 = pcVar16 + 1;
            if (pcVar5 <= pcVar16) goto LAB_180556090;
          }
        }
      }
LAB_18055623a:
      pcVar16 = "monster_usage_jumps";
      do {
        pcVar17 = pcVar16;
        pcVar16 = pcVar17 + 1;
      } while (*pcVar16 != '\0');
      puVar8 = *(uint64_t **)(param_3 + 0x30);
LAB_180556254:
      if (puVar8 == (uint64_t *)0x0) goto LAB_1805564f7;
      pcVar16 = (char *)*puVar8;
      if (pcVar16 == (char *)0x0) {
        pcVar5 = (char *)0x0;
        pcVar16 = (char *)0x180d48d24;
      }
      else {
        pcVar5 = (char *)puVar8[2];
      }
      if (pcVar5 == pcVar17 + -0x180a34f8f) {
        pcVar5 = pcVar5 + (int64_t)pcVar16;
        if (pcVar5 <= pcVar16) {
LAB_180556294:
          pcVar16 = "monster_usage_jump";
          do {
            pcVar17 = pcVar16;
            pcVar16 = pcVar17 + 1;
          } while (*pcVar16 != '\0');
          for (local_var_88 = (uint64_t *)puVar8[6]; local_var_88 != (uint64_t *)0x0;
              local_var_88 = (uint64_t *)local_var_88[0xb]) {
            pcVar16 = (char *)*local_var_88;
            if (pcVar16 == (char *)0x0) {
              pcVar5 = (char *)0x0;
              pcVar16 = (char *)0x180d48d24;
            }
            else {
              pcVar5 = (char *)local_var_88[2];
            }
            if (pcVar5 == pcVar17 + -0x180a34f77) {
              pcVar5 = pcVar5 + (int64_t)pcVar16;
              if (pcVar5 <= pcVar16) {
LAB_180556310:
                puVar8 = local_var_88;
                iVar18 = -1;
                local_var_c8 = 0xffffffffffffffff;
                local_var_c8._4_4_ = -1;
                uVar14 = 0xffffffff;
                local_var_c0 = CONCAT17(local_var_c0._7_1_,0xffffffff);
                local_var_b8 = 0xffffffff;
                cVar9 = '\0';
                cVar1 = '\0';
                cVar15 = '\0';
                if (local_var_88 != (uint64_t *)0x0) {
                  function_558ea0(&local_var_c8,local_var_88);
                  uVar14 = local_var_c0 & 0xffffffff;
                  iVar18 = (int)local_var_c8;
                  cVar9 = local_var_c0._6_1_;
                  cVar1 = local_var_c0._5_1_;
                  cVar15 = local_var_c0._4_1_;
                }
                uVar10 = local_var_b8;
                iVar11 = (int)uVar14;
                iVar19 = iVar11 + 1;
                if (iVar11 == -1) {
                  iVar19 = 8;
                }
                if (iVar11 < iVar19) {
                  uVar3 = (local_var_c8._4_4_ + 1) * 0x40;
                  stack_special_x_20 = CONCAT44(stack_special_x_20._4_4_,uVar3);
                  do {
                    astack_special_x_10[0] =
                         (int)uVar14 * 2 + 2U |
                         -(uint)(cVar9 != '\0') & 0x100 | -(uint)(cVar1 != '\0') & 0x20 |
                         (uint)(cVar15 != '\0') | uVar3 | (iVar18 + 1) * 0x200;
                    lVar12 = *(int64_t *)(param_1 + 0xf0);
                    for (puVar7 = *(uint **)(lVar12 + ((uint64_t)(int64_t)(int)astack_special_x_10[0] %
                                                      (uint64_t)*(uint *)(param_1 + 0xf8)) * 8);
                        puVar7 != (uint *)0x0; puVar7 = *(uint **)(puVar7 + 2)) {
                      if (astack_special_x_10[0] == *puVar7) {
                        lVar6 = *(int64_t *)(param_1 + 0xf8);
                        goto LAB_18055641d;
                      }
                    }
                    lVar6 = *(int64_t *)(param_1 + 0xf8);
                    puVar7 = *(uint **)(lVar12 + lVar6 * 8);
LAB_18055641d:
                    if (puVar7 == *(uint **)(lVar12 + lVar6 * 8)) {
                      UtilitiesSystem_ConfigManager(param_1 + 0xe8,alStack_68,astack_special_x_10[0],astack_special_x_10,
                                    (int64_t)(int)astack_special_x_10[0]);
                      *(uint *)(alStack_68[0] + 4) = uVar10;
                    }
                    uVar13 = (int)uVar14 + 1;
                    uVar14 = (uint64_t)uVar13;
                    puVar8 = local_var_88;
                    uVar3 = (uint)stack_special_x_20;
                  } while ((int)uVar13 < iVar19);
                }
                pcVar16 = "monster_usage_jump";
                do {
                  pcVar17 = pcVar16;
                  pcVar16 = pcVar17 + 1;
                } while (*pcVar16 != '\0');
                local_var_88 = (uint64_t *)puVar8[0xb];
                param_3 = lStackX_18;
                if (local_var_88 != (uint64_t *)0x0) {
                  do {
                    pcVar16 = (char *)*local_var_88;
                    if (pcVar16 == (char *)0x0) {
                      pcVar5 = (char *)0x0;
                      pcVar16 = (char *)0x180d48d24;
                    }
                    else {
                      pcVar5 = (char *)local_var_88[2];
                    }
                    if (pcVar5 == pcVar17 + -0x180a34f77) {
                      pcVar5 = pcVar5 + (int64_t)pcVar16;
                      if (pcVar5 <= pcVar16) goto LAB_180556310;
                      lVar12 = (int64_t)&memory_allocator_3656_ptr - (int64_t)pcVar16;
                      while (*pcVar16 == pcVar16[lVar12]) {
                        pcVar16 = pcVar16 + 1;
                        if (pcVar5 <= pcVar16) goto LAB_180556310;
                      }
                    }
                    local_var_88 = (uint64_t *)local_var_88[0xb];
                    if (local_var_88 == (uint64_t *)0x0) break;
                  } while( true );
                }
                break;
              }
              lVar12 = (int64_t)&memory_allocator_3656_ptr - (int64_t)pcVar16;
              while (*pcVar16 == pcVar16[lVar12]) {
                pcVar16 = pcVar16 + 1;
                if (pcVar5 <= pcVar16) goto LAB_180556310;
              }
            }
          }
LAB_1805564f7:
          pcVar16 = "monster_usage_falls";
          do {
            pcVar17 = pcVar16;
            pcVar16 = pcVar17 + 1;
          } while (*pcVar16 != '\0');
          puVar8 = *(uint64_t **)(param_3 + 0x30);
LAB_180556511:
          if (puVar8 == (uint64_t *)0x0) goto LAB_1805567db;
          pcVar16 = (char *)*puVar8;
          if (pcVar16 == (char *)0x0) {
            pcVar5 = (char *)0x0;
            pcVar16 = (char *)0x180d48d24;
          }
          else {
            pcVar5 = (char *)puVar8[2];
          }
          if (pcVar5 == pcVar17 + -0x180a34eff) {
            pcVar5 = pcVar5 + (int64_t)pcVar16;
            if (pcVar5 <= pcVar16) {
LAB_180556551:
              pcVar16 = "monster_usage_fall";
              do {
                pcVar17 = pcVar16;
                pcVar16 = pcVar17 + 1;
              } while (*pcVar16 != '\0');
              for (local_var_88 = (uint64_t *)puVar8[6]; local_var_88 != (uint64_t *)0x0;
                  local_var_88 = (uint64_t *)local_var_88[0xb]) {
                pcVar16 = (char *)*local_var_88;
                if (pcVar16 == (char *)0x0) {
                  pcVar5 = (char *)0x0;
                  pcVar16 = (char *)0x180d48d24;
                }
                else {
                  pcVar5 = (char *)local_var_88[2];
                }
                if (pcVar5 == pcVar17 + -0x180a34ee7) {
                  pcVar5 = pcVar5 + (int64_t)pcVar16;
                  if (pcVar5 <= pcVar16) {
LAB_1805565d0:
                    puVar8 = local_var_88;
                    local_var_c8 = CONCAT35(local_var_c8._5_3_,0xffffffffff);
                    iVar18 = -1;
                    local_var_c0 = 0xffffffffffffffff;
                    local_var_c0._4_4_ = -1;
                    local_var_b8 = local_var_b8 & 0xff000000;
                    local_var_b4 = 0xffffffff;
                    cVar9 = '\0';
                    uVar4 = 0xffffffff;
                    cVar1 = '\0';
                    cVar15 = '\0';
                    cVar2 = -1;
                    if (local_var_88 != (uint64_t *)0x0) {
                      function_559530(&local_var_c8,local_var_88);
                      iVar18 = (int)local_var_c0;
                      cVar9 = local_var_b8._1_1_;
                      uVar4 = (int)local_var_c8;
                      cVar1 = local_var_b8._2_1_;
                      cVar15 = (char)local_var_b8;
                      cVar2 = local_var_c8._4_1_;
                    }
                    iVar19 = (int)cVar2;
                    iVar11 = iVar19 + 1;
                    if (cVar2 == -1) {
                      iVar19 = -1;
                      iVar11 = 9;
                    }
                    if (iVar19 < iVar11) {
                      uVar10 = (local_var_c0._4_4_ + 1) * 0x40;
                      stack_special_x_20 = CONCAT44(stack_special_x_20._4_4_,uVar10);
                      iVar20 = local_var_b4 + 1;
                      local_var_90 = (uint)(cVar15 != '\0');
                      do {
                        astack_special_x_10[0] =
                             (char)iVar19 * 2 + 2U |
                             -(uint)(cVar1 != '\0') & 0x2000 | -(uint)(cVar9 != '\0') & 0x20 |
                             local_var_90 | iVar20 * 0x4000 | uVar10 | (iVar18 + 1) * 0x400;
                        lVar12 = *(int64_t *)(param_1 + 0x120);
                        for (puVar7 = *(uint **)(lVar12 + ((uint64_t)(int64_t)(int)astack_special_x_10[0]
                                                          % (uint64_t)*(uint *)(param_1 + 0x128)) *
                                                          8); puVar7 != (uint *)0x0;
                            puVar7 = *(uint **)(puVar7 + 2)) {
                          if (astack_special_x_10[0] == *puVar7) {
                            lVar6 = *(int64_t *)(param_1 + 0x128);
                            goto LAB_1805566ff;
                          }
                        }
                        lVar6 = *(int64_t *)(param_1 + 0x128);
                        puVar7 = *(uint **)(lVar12 + lVar6 * 8);
LAB_1805566ff:
                        if (puVar7 == *(uint **)(lVar12 + lVar6 * 8)) {
                          UtilitiesSystem_ConfigManager(param_1 + 0x118,alStack_68,astack_special_x_10[0],astack_special_x_10,
                                        (int64_t)(int)astack_special_x_10[0]);
                          *(int32_t *)(alStack_68[0] + 4) = uVar4;
                        }
                        iVar19 = iVar19 + 1;
                        puVar8 = local_var_88;
                        uVar10 = (uint)stack_special_x_20;
                      } while (iVar19 < iVar11);
                    }
                    pcVar16 = "monster_usage_fall";
                    do {
                      pcVar17 = pcVar16;
                      pcVar16 = pcVar17 + 1;
                    } while (*pcVar16 != '\0');
                    local_var_88 = (uint64_t *)puVar8[0xb];
                    param_3 = lStackX_18;
                    if (local_var_88 != (uint64_t *)0x0) {
                      do {
                        pcVar16 = (char *)*local_var_88;
                        if (pcVar16 == (char *)0x0) {
                          pcVar5 = (char *)0x0;
                          pcVar16 = (char *)0x180d48d24;
                        }
                        else {
                          pcVar5 = (char *)local_var_88[2];
                        }
                        if (pcVar5 == pcVar17 + -0x180a34ee7) {
                          pcVar5 = pcVar5 + (int64_t)pcVar16;
                          if (pcVar5 <= pcVar16) goto LAB_1805565d0;
                          lVar12 = (int64_t)&memory_allocator_3512_ptr - (int64_t)pcVar16;
                          while (*pcVar16 == pcVar16[lVar12]) {
                            pcVar16 = pcVar16 + 1;
                            if (pcVar5 <= pcVar16) goto LAB_1805565d0;
                          }
                        }
                        local_var_88 = (uint64_t *)local_var_88[0xb];
                        if (local_var_88 == (uint64_t *)0x0) break;
                      } while( true );
                    }
                    break;
                  }
                  lVar12 = (int64_t)&memory_allocator_3512_ptr - (int64_t)pcVar16;
                  while (*pcVar16 == pcVar16[lVar12]) {
                    pcVar16 = pcVar16 + 1;
                    if (pcVar5 <= pcVar16) goto LAB_1805565d0;
                  }
                }
              }
LAB_1805567db:
              pcVar16 = "monster_usage_mountings";
              do {
                pcVar17 = pcVar16;
                pcVar16 = pcVar17 + 1;
              } while (*pcVar16 != '\0');
              puVar8 = *(uint64_t **)(param_3 + 0x30);
joined_r0x0001805567f8:
              if (puVar8 == (uint64_t *)0x0) goto LAB_180556a17;
              pcVar16 = (char *)*puVar8;
              if (pcVar16 == (char *)0x0) {
                pcVar5 = (char *)0x0;
                pcVar16 = (char *)0x180d48d24;
              }
              else {
                pcVar5 = (char *)puVar8[2];
              }
              param_3 = lStackX_18;
              if (pcVar5 == pcVar17 + -0x180a34f2f) {
                pcVar5 = pcVar16 + (int64_t)pcVar5;
                if (pcVar5 <= pcVar16) {
LAB_180556840:
                  pcVar16 = "monster_usage_mounting";
                  do {
                    pcVar17 = pcVar16;
                    pcVar16 = pcVar17 + 1;
                  } while (*pcVar16 != '\0');
                  for (puVar8 = (uint64_t *)puVar8[6]; puVar8 != (uint64_t *)0x0;
                      puVar8 = (uint64_t *)puVar8[0xb]) {
                    pcVar16 = (char *)*puVar8;
                    if (pcVar16 == (char *)0x0) {
                      pcVar5 = (char *)0x0;
                      pcVar16 = (char *)0x180d48d24;
                    }
                    else {
                      pcVar5 = (char *)puVar8[2];
                    }
                    if (pcVar5 == pcVar17 + -0x180a34f17) {
                      pcVar5 = pcVar5 + (int64_t)pcVar16;
                      if (pcVar5 <= pcVar16) {
LAB_1805568d0:
                        uVar14 = (uint64_t)local_var_88 >> 0x20;
                        local_var_80._0_4_ = -1;
                        local_var_80 = 0xffffffffffffffff;
                        local_var_88 = (uint64_t *)CONCAT44((uint)uVar14 & 0xffff0000,0xffffffff);
                        cVar9 = '\0';
                        cVar1 = '\0';
                        iVar18 = -1;
                        uVar4 = 0xffffffff;
                        if (puVar8 != (uint64_t *)0x0) {
                          function_559e90(&local_var_88,puVar8);
                          cVar9 = local_var_88._5_1_;
                          cVar1 = local_var_88._4_1_;
                          iVar18 = (int)local_var_88;
                          uVar4 = local_var_80._4_4_;
                        }
                        astack_special_x_10[0] =
                             (iVar18 + 1) * 0x40 | -(uint)(cVar9 != '\0') & 0x20 |
                             (uint)(cVar1 != '\0') | (int)local_var_80 * 2 + 2U;
                        lVar12 = *(int64_t *)(param_1 + 0x150);
                        for (puVar7 = *(uint **)(lVar12 + ((uint64_t)(int64_t)(int)astack_special_x_10[0]
                                                          % (uint64_t)*(uint *)(param_1 + 0x158)) *
                                                          8); puVar7 != (uint *)0x0;
                            puVar7 = *(uint **)(puVar7 + 2)) {
                          if (astack_special_x_10[0] == *puVar7) {
                            lVar6 = *(int64_t *)(param_1 + 0x158);
                            goto LAB_180556979;
                          }
                        }
                        lVar6 = *(int64_t *)(param_1 + 0x158);
                        puVar7 = *(uint **)(lVar12 + lVar6 * 8);
LAB_180556979:
                        if (puVar7 == *(uint **)(lVar12 + lVar6 * 8)) {
                          UtilitiesSystem_ConfigManager(param_1 + 0x148,alStack_68,astack_special_x_10[0],astack_special_x_10,
                                        (int64_t)(int)astack_special_x_10[0]);
                          *(int32_t *)(alStack_68[0] + 4) = uVar4;
                        }
                        pcVar16 = "monster_usage_mounting";
                        do {
                          pcVar17 = pcVar16;
                          pcVar16 = pcVar17 + 1;
                        } while (*pcVar16 != '\0');
                        puVar8 = (uint64_t *)puVar8[0xb];
                        param_3 = lStackX_18;
                        if (puVar8 != (uint64_t *)0x0) {
                          do {
                            pcVar16 = (char *)*puVar8;
                            if (pcVar16 == (char *)0x0) {
                              pcVar5 = (char *)0x0;
                              pcVar16 = (char *)0x180d48d24;
                            }
                            else {
                              pcVar5 = (char *)puVar8[2];
                            }
                            if (pcVar5 == pcVar17 + -0x180a34f17) {
                              pcVar5 = pcVar5 + (int64_t)pcVar16;
                              if (pcVar5 <= pcVar16) goto LAB_1805568d0;
                              lVar12 = (int64_t)&memory_allocator_3560_ptr - (int64_t)pcVar16;
                              while (*pcVar16 == pcVar16[lVar12]) {
                                pcVar16 = pcVar16 + 1;
                                if (pcVar5 <= pcVar16) goto LAB_1805568d0;
                              }
                            }
                            puVar8 = (uint64_t *)puVar8[0xb];
                            if (puVar8 == (uint64_t *)0x0) break;
                          } while( true );
                        }
                        break;
                      }
                      lVar12 = (int64_t)&memory_allocator_3560_ptr - (int64_t)pcVar16;
                      while (*pcVar16 == pcVar16[lVar12]) {
                        pcVar16 = pcVar16 + 1;
                        if (pcVar5 <= pcVar16) goto LAB_1805568d0;
                      }
                    }
                  }
LAB_180556a17:
                  pcVar16 = "monster_usage_movements";
                  do {
                    pcVar17 = pcVar16;
                    pcVar16 = pcVar17 + 1;
                  } while (*pcVar16 != '\0');
                  puVar8 = *(uint64_t **)(param_3 + 0x30);
LAB_180556a31:
                  if (puVar8 == (uint64_t *)0x0) goto LAB_180556cea;
                  pcVar16 = (char *)*puVar8;
                  if (pcVar16 == (char *)0x0) {
                    pcVar5 = (char *)0x0;
                    pcVar16 = (char *)0x180d48d24;
                  }
                  else {
                    pcVar5 = (char *)puVar8[2];
                  }
                  if (pcVar5 == pcVar17 + -0x180a3503f) {
                    pcVar5 = pcVar5 + (int64_t)pcVar16;
                    if (pcVar5 <= pcVar16) {
LAB_180556a75:
                      pcVar16 = "monster_usage_movement";
                      do {
                        pcVar17 = pcVar16;
                        pcVar16 = pcVar17 + 1;
                      } while (*pcVar16 != '\0');
                      for (local_var_88 = (uint64_t *)puVar8[6]; local_var_88 != (uint64_t *)0x0;
                          local_var_88 = (uint64_t *)local_var_88[0xb]) {
                        pcVar16 = (char *)*local_var_88;
                        if (pcVar16 == (char *)0x0) {
                          pcVar5 = (char *)0x0;
                          pcVar16 = (char *)0x180d48d24;
                        }
                        else {
                          pcVar5 = (char *)local_var_88[2];
                        }
                        if (pcVar5 == pcVar17 + -0x180a35027) {
                          pcVar5 = pcVar5 + (int64_t)pcVar16;
                          if (pcVar5 <= pcVar16) {
LAB_180556af0:
                            do {
                              puVar8 = local_var_88;
                              local_var_c8 = 0xffffffffffffffff;
                              local_var_c0 = 0xffffffffffffffff;
                              local_var_b8 = local_var_b8 & 0xffffff00;
                              local_var_b4 = 0xffffffff;
                              if (local_var_88 != (uint64_t *)0x0) {
                                function_5588b0(&local_var_c8,local_var_88);
                              }
                              local_var_90 = local_var_c8._4_4_ + 1;
                              if (local_var_c8._4_4_ == 0xffffffff) {
                                local_var_90 = 8;
                              }
                              astack_special_x_10[0] = local_var_c8._4_4_;
                              iVar18 = local_var_c0._4_4_;
                              iVar11 = local_var_c0._4_4_ + 1;
                              if (local_var_c0._4_4_ == -1) {
                                iVar11 = 2;
                              }
                              stack_special_x_20 = CONCAT44(stack_special_x_20._4_4_,iVar11);
                              uVar10 = local_var_90;
                              if ((int)local_var_c8._4_4_ < (int)local_var_90) {
                                do {
                                  if (iVar18 < iVar11) {
                                    iVar19 = astack_special_x_10[0] * 8;
                                    iVar20 = iVar18;
                                    do {
                                      iVar11 = 0;
                                      do {
                                        uVar10 = local_var_b4;
                                        stack_array_70[0] =
                                             (uint)(iVar11 != 0) | (uint)local_var_c0 << 7 |
                                             iVar19 + 8U | iVar20 * 2 + 2U;
                                        lVar12 = *(int64_t *)(param_1 + 0x60);
                                        for (puVar7 = *(uint **)(lVar12 + ((uint64_t)
                                                                           (int64_t)
                                                                           (int)stack_array_70[0] %
                                                                          (uint64_t)
                                                                          *(uint *)(param_1 + 0x68))
                                                                          * 8);
                                            puVar7 != (uint *)0x0; puVar7 = *(uint **)(puVar7 + 2))
                                        {
                                          if (stack_array_70[0] == *puVar7) {
                                            lVar6 = *(int64_t *)(param_1 + 0x68);
                                            goto LAB_180556bea;
                                          }
                                        }
                                        lVar6 = *(int64_t *)(param_1 + 0x68);
                                        puVar7 = *(uint **)(lVar12 + lVar6 * 8);
LAB_180556bea:
                                        if (puVar7 == *(uint **)(lVar12 + lVar6 * 8)) {
                                          UtilitiesSystem_ConfigManager(param_1 + 0x58,alStack_68,stack_array_70[0],
                                                        stack_array_70,(int64_t)(int)stack_array_70[0]);
                                          *(uint *)(alStack_68[0] + 4) = uVar10;
                                        }
                                        iVar11 = iVar11 + 1;
                                      } while (iVar11 <= (int)(local_var_b8 & 0xff));
                                      iVar20 = iVar20 + 1;
                                      iVar11 = (uint)stack_special_x_20;
                                      uVar10 = local_var_90;
                                    } while (iVar20 < (int)(uint)stack_special_x_20);
                                  }
                                  astack_special_x_10[0] = astack_special_x_10[0] + 1;
                                  puVar8 = local_var_88;
                                } while ((int)astack_special_x_10[0] < (int)uVar10);
                              }
                              pcVar16 = "monster_usage_movement";
                              do {
                                pcVar17 = pcVar16;
                                pcVar16 = pcVar17 + 1;
                              } while (*pcVar16 != '\0');
                              for (local_var_88 = (uint64_t *)puVar8[0xb];
                                  local_var_88 != (uint64_t *)0x0;
                                  local_var_88 = (uint64_t *)local_var_88[0xb]) {
                                pcVar16 = (char *)*local_var_88;
                                if (pcVar16 == (char *)0x0) {
                                  pcVar5 = (char *)0x0;
                                  pcVar16 = (char *)0x180d48d24;
                                }
                                else {
                                  pcVar5 = (char *)local_var_88[2];
                                }
                                if (pcVar5 == pcVar17 + -0x180a35027) {
                                  pcVar5 = pcVar5 + (int64_t)pcVar16;
                                  if (pcVar5 <= pcVar16) goto LAB_180556cdd;
                                  lVar12 = (int64_t)&memory_allocator_3832_ptr - (int64_t)pcVar16;
                                  while (*pcVar16 == pcVar16[lVar12]) {
                                    pcVar16 = pcVar16 + 1;
                                    if (pcVar5 <= pcVar16) goto LAB_180556cdd;
                                  }
                                }
                              }
                              local_var_88 = (uint64_t *)0x0;
LAB_180556cdd:
                              param_3 = lStackX_18;
                            } while (local_var_88 != (uint64_t *)0x0);
                            break;
                          }
                          lVar12 = (int64_t)&memory_allocator_3832_ptr - (int64_t)pcVar16;
                          while (*pcVar16 == pcVar16[lVar12]) {
                            pcVar16 = pcVar16 + 1;
                            if (pcVar5 <= pcVar16) goto LAB_180556af0;
                          }
                        }
                      }
LAB_180556cea:
                      pcVar16 = "monster_usage_movement_adders";
                      do {
                        pcVar17 = pcVar16;
                        pcVar16 = pcVar17 + 1;
                      } while (*pcVar16 != '\0');
                      puVar8 = *(uint64_t **)(param_3 + 0x30);
LAB_180556d04:
                      if (puVar8 == (uint64_t *)0x0) goto LAB_180556fcd;
                      pcVar16 = (char *)*puVar8;
                      if (pcVar16 == (char *)0x0) {
                        pcVar5 = (char *)0x0;
                        pcVar16 = (char *)0x180d48d24;
                      }
                      else {
                        pcVar5 = (char *)puVar8[2];
                      }
                      if (pcVar5 == pcVar17 + -0x180a35077) {
                        pcVar5 = pcVar5 + (int64_t)pcVar16;
                        if (pcVar5 <= pcVar16) {
LAB_180556d48:
                          pcVar16 = "monster_usage_movement_adder";
                          do {
                            pcVar17 = pcVar16;
                            pcVar16 = pcVar17 + 1;
                          } while (*pcVar16 != '\0');
                          for (local_var_88 = (uint64_t *)puVar8[6]; local_var_88 != (uint64_t *)0x0;
                              local_var_88 = (uint64_t *)local_var_88[0xb]) {
                            pcVar16 = (char *)*local_var_88;
                            if (pcVar16 == (char *)0x0) {
                              pcVar5 = (char *)0x0;
                              pcVar16 = (char *)0x180d48d24;
                            }
                            else {
                              pcVar5 = (char *)local_var_88[2];
                            }
                            if (pcVar5 == pcVar17 + -0x180a35057) {
                              pcVar5 = pcVar5 + (int64_t)pcVar16;
                              if (pcVar5 <= pcVar16) {
LAB_180556dc0:
                                do {
                                  puVar8 = local_var_88;
                                  local_var_c8 = 0xffffffffffffffff;
                                  local_var_c0 = 0xffffffffffffffff;
                                  local_var_b8 = local_var_b8 & 0xffffff00;
                                  local_var_b4 = 0xffffffff;
                                  if (local_var_88 != (uint64_t *)0x0) {
                                    function_5588b0(&local_var_c8,local_var_88);
                                  }
                                  local_var_90 = local_var_c8._4_4_ + 1;
                                  if (local_var_c8._4_4_ == 0xffffffff) {
                                    local_var_90 = 8;
                                  }
                                  astack_special_x_10[0] = local_var_c8._4_4_;
                                  iVar18 = local_var_c0._4_4_;
                                  iVar11 = local_var_c0._4_4_ + 1;
                                  if (local_var_c0._4_4_ == -1) {
                                    iVar11 = 2;
                                  }
                                  stack_special_x_20 = CONCAT44(stack_special_x_20._4_4_,iVar11);
                                  uVar10 = local_var_90;
                                  if ((int)local_var_c8._4_4_ < (int)local_var_90) {
                                    do {
                                      if (iVar18 < iVar11) {
                                        iVar19 = astack_special_x_10[0] * 8;
                                        iVar20 = iVar18;
                                        do {
                                          iVar11 = 0;
                                          do {
                                            uVar10 = local_var_b4;
                                            stack_array_70[0] =
                                                 (uint)(iVar11 != 0) | (uint)local_var_c0 << 7 |
                                                 iVar19 + 8U | iVar20 * 2 + 2U;
                                            lVar12 = *(int64_t *)(param_1 + 0x90);
                                            for (puVar7 = *(uint **)(lVar12 + ((uint64_t)
                                                                               (int64_t)
                                                                               (int)stack_array_70[0] %
                                                                              (uint64_t)
                                                                              *(uint *)(param_1 +
                                                                                       0x98)) * 8);
                                                puVar7 != (uint *)0x0;
                                                puVar7 = *(uint **)(puVar7 + 2)) {
                                              if (stack_array_70[0] == *puVar7) {
                                                lVar6 = *(int64_t *)(param_1 + 0x98);
                                                goto LAB_180556ebd;
                                              }
                                            }
                                            lVar6 = *(int64_t *)(param_1 + 0x98);
                                            puVar7 = *(uint **)(lVar12 + lVar6 * 8);
LAB_180556ebd:
                                            if (puVar7 == *(uint **)(lVar12 + lVar6 * 8)) {
                                              UtilitiesSystem_ConfigManager(param_1 + 0x88,alStack_68,stack_array_70[0],
                                                            stack_array_70,(int64_t)(int)stack_array_70[0])
                                              ;
                                              *(uint *)(alStack_68[0] + 4) = uVar10;
                                            }
                                            iVar11 = iVar11 + 1;
                                          } while (iVar11 <= (int)(local_var_b8 & 0xff));
                                          iVar20 = iVar20 + 1;
                                          iVar11 = (uint)stack_special_x_20;
                                          uVar10 = local_var_90;
                                        } while (iVar20 < (int)(uint)stack_special_x_20);
                                      }
                                      astack_special_x_10[0] = astack_special_x_10[0] + 1;
                                      puVar8 = local_var_88;
                                    } while ((int)astack_special_x_10[0] < (int)uVar10);
                                  }
                                  pcVar16 = "monster_usage_movement_adder";
                                  do {
                                    pcVar17 = pcVar16;
                                    pcVar16 = pcVar17 + 1;
                                  } while (*pcVar16 != '\0');
                                  for (local_var_88 = (uint64_t *)puVar8[0xb];
                                      local_var_88 != (uint64_t *)0x0;
                                      local_var_88 = (uint64_t *)local_var_88[0xb]) {
                                    pcVar16 = (char *)*local_var_88;
                                    if (pcVar16 == (char *)0x0) {
                                      pcVar5 = (char *)0x0;
                                      pcVar16 = (char *)0x180d48d24;
                                    }
                                    else {
                                      pcVar5 = (char *)local_var_88[2];
                                    }
                                    if (pcVar5 == pcVar17 + -0x180a35057) {
                                      pcVar5 = pcVar5 + (int64_t)pcVar16;
                                      if (pcVar5 <= pcVar16) goto LAB_180556fc0;
                                      lVar12 = (int64_t)&memory_allocator_3880_ptr - (int64_t)pcVar16;
                                      while (*pcVar16 == pcVar16[lVar12]) {
                                        pcVar16 = pcVar16 + 1;
                                        if (pcVar5 <= pcVar16) goto LAB_180556fc0;
                                      }
                                    }
                                  }
                                  local_var_88 = (uint64_t *)0x0;
LAB_180556fc0:
                                  param_3 = lStackX_18;
                                } while (local_var_88 != (uint64_t *)0x0);
                                break;
                              }
                              lVar12 = (int64_t)&memory_allocator_3880_ptr - (int64_t)pcVar16;
                              while (*pcVar16 == pcVar16[lVar12]) {
                                pcVar16 = pcVar16 + 1;
                                if (pcVar5 <= pcVar16) goto LAB_180556dc0;
                              }
                            }
                          }
LAB_180556fcd:
                          lVar12 = function_05d4b0(param_3,&memory_allocator_3744_ptr,0);
                          if (lVar12 != 0) {
                            puVar8 = (uint64_t *)function_05d4b0(lVar12,&memory_allocator_3704_ptr,0);
joined_r0x000180557003:
                            if (puVar8 != (uint64_t *)0x0) {
                              local_var_c8 = 0xffffffffffffffff;
                              local_var_c0 = 0xffffffffffffffff;
                              local_var_b8 = local_var_b8 & 0xffffff00;
                              local_var_b4 = 0xffffffff;
                              if (puVar8 != (uint64_t *)0x0) {
                                function_5588b0(&local_var_c8);
                              }
                              uVar10 = local_var_b4;
                              if ((local_var_c8._4_4_ == 2) || (local_var_c8._4_4_ == 5)) {
                                uVar3 = ((local_var_c8._4_4_ == 2 ^ 1) + 1) * 0x10;
                              }
                              else {
                                uVar3 = 0;
                              }
                              astack_special_x_10[0] =
                                   (local_var_c0._4_4_ + 1) * 0x40 | uVar3 | (uint)local_var_c0;
                              lVar12 = *(int64_t *)(param_1 + 0xc0);
                              for (puVar7 = *(uint **)(lVar12 + ((uint64_t)
                                                                 (int64_t)(int)astack_special_x_10[0] %
                                                                (uint64_t)*(uint *)(param_1 + 200))
                                                                * 8); puVar7 != (uint *)0x0;
                                  puVar7 = *(uint **)(puVar7 + 2)) {
                                if (astack_special_x_10[0] == *puVar7) {
                                  lVar6 = *(int64_t *)(param_1 + 200);
                                  goto LAB_1805570ae;
                                }
                              }
                              lVar6 = *(int64_t *)(param_1 + 200);
                              puVar7 = *(uint **)(lVar12 + lVar6 * 8);
LAB_1805570ae:
                              if (puVar7 == *(uint **)(lVar12 + lVar6 * 8)) {
                                UtilitiesSystem_ConfigManager(param_1 + 0xb8,alStack_68,astack_special_x_10[0],astack_special_x_10,
                                              (int64_t)(int)astack_special_x_10[0]);
                                *(uint *)(alStack_68[0] + 4) = uVar10;
                              }
                              pcVar16 = "monster_usage_upper_body_movement";
                              do {
                                pcVar17 = pcVar16;
                                pcVar16 = pcVar17 + 1;
                              } while (*pcVar16 != '\0');
                              for (puVar8 = (uint64_t *)puVar8[0xb]; puVar8 != (uint64_t *)0x0;
                                  puVar8 = (uint64_t *)puVar8[0xb]) {
                                pcVar16 = (char *)*puVar8;
                                if (pcVar16 == (char *)0x0) {
                                  pcVar5 = (char *)0x0;
                                  pcVar16 = (char *)0x180d48d24;
                                }
                                else {
                                  pcVar5 = (char *)puVar8[2];
                                }
                                if (pcVar5 == pcVar17 + -0x180a34fa7) {
                                  pcVar5 = pcVar5 + (int64_t)pcVar16;
                                  if (pcVar5 <= pcVar16) goto joined_r0x000180557003;
                                  lVar12 = (int64_t)&memory_allocator_3704_ptr - (int64_t)pcVar16;
                                  while (*pcVar16 == pcVar16[lVar12]) {
                                    pcVar16 = pcVar16 + 1;
                                    if (pcVar5 <= pcVar16) goto joined_r0x000180557003;
                                  }
                                }
                              }
                              puVar8 = (uint64_t *)0x0;
                              goto joined_r0x000180557003;
                            }
                          }
                          plocal_var_b0 = &system_data_buffer_ptr;
                          local_var_98 = 0;
                          plocal_var_a8 = (int8_t *)0x0;
                          iStack_a0 = 0;
                          lVar12 = SystemCore_DataManager(param_3,&memory_allocator_3808_ptr);
                          if (lVar12 != 0) {
                            lVar6 = 0x180d48d24;
                            if (*(int64_t *)(lVar12 + 8) != 0) {
                              lVar6 = *(int64_t *)(lVar12 + 8);
                            }
                            (**(code **)(plocal_var_b0 + 0x10))(&plocal_var_b0,lVar6);
                          }
                          if (0 < iStack_a0) {
                            uVar4 = SystemFile_Manager(&system_data_6150,&plocal_var_b0);
                            *(int32_t *)(param_1 + 0x178) = uVar4;
                          }
                          iStack_a0 = 0;
                          if (plocal_var_a8 != (int8_t *)0x0) {
                            *plocal_var_a8 = 0;
                          }
                          lVar12 = SystemCore_DataManager(param_3,&memory_allocator_3784_ptr);
                          if (lVar12 != 0) {
                            lVar6 = 0x180d48d24;
                            if (*(int64_t *)(lVar12 + 8) != 0) {
                              lVar6 = *(int64_t *)(lVar12 + 8);
                            }
                            (**(code **)(plocal_var_b0 + 0x10))(&plocal_var_b0,lVar6);
                          }
                          if (0 < iStack_a0) {
                            uVar4 = SystemFile_Manager(&system_data_6150,&plocal_var_b0);
                            *(int32_t *)(param_1 + 0x17c) = uVar4;
                          }
                          lVar12 = SystemCore_DataManager(param_3,&processed_var_4072_ptr);
                          if (lVar12 != 0) {
                            lVar6 = 0x180d48d24;
                            if (*(int64_t *)(lVar12 + 8) != 0) {
                              lVar6 = *(int64_t *)(lVar12 + 8);
                            }
                            (**(code **)(plocal_var_b0 + 0x10))(&plocal_var_b0,lVar6);
                          }
                          if (0 < iStack_a0) {
                            uVar4 = SystemFile_Manager(&system_data_6150,&plocal_var_b0);
                            *(int32_t *)(param_1 + 0x180) = uVar4;
                          }
                          iStack_a0 = 0;
                          if (plocal_var_a8 != (int8_t *)0x0) {
                            *plocal_var_a8 = 0;
                          }
                          lVar12 = SystemCore_DataManager(param_3,&processed_var_4056_ptr);
                          if (lVar12 != 0) {
                            lVar6 = 0x180d48d24;
                            if (*(int64_t *)(lVar12 + 8) != 0) {
                              lVar6 = *(int64_t *)(lVar12 + 8);
                            }
                            (**(code **)(plocal_var_b0 + 0x10))(&plocal_var_b0,lVar6);
                          }
                          if (0 < iStack_a0) {
                            uVar4 = SystemFile_Manager(&system_data_6150,&plocal_var_b0);
                            *(int32_t *)(param_1 + 0x184) = uVar4;
                          }
                          iStack_a0 = 0;
                          if (plocal_var_a8 != (int8_t *)0x0) {
                            *plocal_var_a8 = 0;
                          }
                          lVar12 = SystemCore_DataManager(param_3,&processed_var_4112_ptr);
                          if (lVar12 != 0) {
                            lVar6 = 0x180d48d24;
                            if (*(int64_t *)(lVar12 + 8) != 0) {
                              lVar6 = *(int64_t *)(lVar12 + 8);
                            }
                            (**(code **)(plocal_var_b0 + 0x10))(&plocal_var_b0,lVar6);
                          }
                          if (0 < iStack_a0) {
                            uVar4 = SystemFile_Manager(&system_data_6150,&plocal_var_b0);
                            *(int32_t *)(param_1 + 0x188) = uVar4;
                          }
                          iStack_a0 = 0;
                          if (plocal_var_a8 != (int8_t *)0x0) {
                            *plocal_var_a8 = 0;
                          }
                          lVar12 = SystemCore_DataManager(param_3,&processed_var_4088_ptr);
                          if (lVar12 != 0) {
                            lVar6 = 0x180d48d24;
                            if (*(int64_t *)(lVar12 + 8) != 0) {
                              lVar6 = *(int64_t *)(lVar12 + 8);
                            }
                            (**(code **)(plocal_var_b0 + 0x10))(&plocal_var_b0,lVar6);
                          }
                          if (0 < iStack_a0) {
                            uVar4 = SystemFile_Manager(&system_data_6150,&plocal_var_b0);
                            *(int32_t *)(param_1 + 0x18c) = uVar4;
                          }
                          iStack_a0 = 0;
                          if (plocal_var_a8 != (int8_t *)0x0) {
                            *plocal_var_a8 = 0;
                          }
                          lVar12 = SystemCore_DataManager(param_3,&memory_allocator_3968_ptr);
                          if (lVar12 != 0) {
                            lVar6 = 0x180d48d24;
                            if (*(int64_t *)(lVar12 + 8) != 0) {
                              lVar6 = *(int64_t *)(lVar12 + 8);
                            }
                            (**(code **)(plocal_var_b0 + 0x10))(&plocal_var_b0,lVar6);
                          }
                          if (0 < iStack_a0) {
                            uVar4 = SystemFile_Manager(&system_data_6150,&plocal_var_b0);
                            *(int32_t *)(param_1 + 400) = uVar4;
                          }
                          iStack_a0 = 0;
                          if (plocal_var_a8 != (int8_t *)0x0) {
                            *plocal_var_a8 = 0;
                          }
                          lVar12 = SystemCore_DataManager(param_3,&memory_allocator_3944_ptr);
                          if (lVar12 != 0) {
                            lVar6 = 0x180d48d24;
                            if (*(int64_t *)(lVar12 + 8) != 0) {
                              lVar6 = *(int64_t *)(lVar12 + 8);
                            }
                            (**(code **)(plocal_var_b0 + 0x10))(&plocal_var_b0,lVar6);
                          }
                          if (0 < iStack_a0) {
                            uVar4 = SystemFile_Manager(&system_data_6150,&plocal_var_b0);
                            *(int32_t *)(param_1 + 0x194) = uVar4;
                          }
                          iStack_a0 = 0;
                          if (plocal_var_a8 != (int8_t *)0x0) {
                            *plocal_var_a8 = 0;
                          }
                          lVar12 = SystemCore_DataManager(param_3,&processed_var_4024_ptr);
                          if (lVar12 != 0) {
                            lVar6 = 0x180d48d24;
                            if (*(int64_t *)(lVar12 + 8) != 0) {
                              lVar6 = *(int64_t *)(lVar12 + 8);
                            }
                            (**(code **)(plocal_var_b0 + 0x10))(&plocal_var_b0,lVar6);
                          }
                          if (0 < iStack_a0) {
                            uVar4 = SystemFile_Manager(&system_data_6150,&plocal_var_b0);
                            *(int32_t *)(param_1 + 0x198) = uVar4;
                          }
                          iStack_a0 = 0;
                          if (plocal_var_a8 != (int8_t *)0x0) {
                            *plocal_var_a8 = 0;
                          }
                          lVar12 = SystemCore_DataManager(param_3,&processed_var_4000_ptr);
                          if (lVar12 != 0) {
                            lVar6 = 0x180d48d24;
                            if (*(int64_t *)(lVar12 + 8) != 0) {
                              lVar6 = *(int64_t *)(lVar12 + 8);
                            }
                            (**(code **)(plocal_var_b0 + 0x10))(&plocal_var_b0,lVar6);
                          }
                          if (0 < iStack_a0) {
                            uVar4 = SystemFile_Manager(&system_data_6150,&plocal_var_b0);
                            *(int32_t *)(param_1 + 0x19c) = uVar4;
                          }
                          iStack_a0 = 0;
                          if (plocal_var_a8 != (int8_t *)0x0) {
                            *plocal_var_a8 = 0;
                          }
                          lVar12 = SystemCore_DataManager(param_3,&processed_var_4264_ptr);
                          if (lVar12 != 0) {
                            lVar6 = 0x180d48d24;
                            if (*(int64_t *)(lVar12 + 8) != 0) {
                              lVar6 = *(int64_t *)(lVar12 + 8);
                            }
                            (**(code **)(plocal_var_b0 + 0x10))(&plocal_var_b0,lVar6);
                          }
                          if (0 < iStack_a0) {
                            uVar4 = SystemFile_Manager(&system_data_6150,&plocal_var_b0);
                            *(int32_t *)(param_1 + 0x1a0) = uVar4;
                          }
                          iStack_a0 = 0;
                          if (plocal_var_a8 != (int8_t *)0x0) {
                            *plocal_var_a8 = 0;
                          }
                          lVar12 = SystemCore_DataManager(param_3,&processed_var_4240_ptr);
                          if (lVar12 != 0) {
                            lVar6 = 0x180d48d24;
                            if (*(int64_t *)(lVar12 + 8) != 0) {
                              lVar6 = *(int64_t *)(lVar12 + 8);
                            }
                            (**(code **)(plocal_var_b0 + 0x10))(&plocal_var_b0,lVar6);
                          }
                          if (0 < iStack_a0) {
                            uVar4 = SystemFile_Manager(&system_data_6150,&plocal_var_b0);
                            *(int32_t *)(param_1 + 0x1a4) = uVar4;
                          }
                          iStack_a0 = 0;
                          if (plocal_var_a8 != (int8_t *)0x0) {
                            *plocal_var_a8 = 0;
                          }
                          plocal_var_b0 = &system_data_buffer_ptr;
                          if (plocal_var_a8 == (int8_t *)0x0) {
                            return;
                          }
// WARNING: Subroutine does not return
                          CoreEngineMemoryPoolCleaner();
                        }
                        lVar12 = (int64_t)&memory_allocator_3912_ptr - (int64_t)pcVar16;
                        while (*pcVar16 == pcVar16[lVar12]) {
                          pcVar16 = pcVar16 + 1;
                          if (pcVar5 <= pcVar16) goto LAB_180556d48;
                        }
                      }
                      puVar8 = (uint64_t *)puVar8[0xb];
                      goto LAB_180556d04;
                    }
                    lVar12 = (int64_t)&memory_allocator_3856_ptr - (int64_t)pcVar16;
                    while (*pcVar16 == pcVar16[lVar12]) {
                      pcVar16 = pcVar16 + 1;
                      if (pcVar5 <= pcVar16) goto LAB_180556a75;
                    }
                  }
                  puVar8 = (uint64_t *)puVar8[0xb];
                  goto LAB_180556a31;
                }
                lVar12 = (int64_t)&memory_allocator_3584_ptr - (int64_t)pcVar16;
                while (*pcVar16 == pcVar16[lVar12]) {
                  pcVar16 = pcVar16 + 1;
                  if (pcVar5 <= pcVar16) goto LAB_180556840;
                }
              }
              puVar8 = (uint64_t *)puVar8[0xb];
              goto joined_r0x0001805567f8;
            }
            lVar12 = (int64_t)&memory_allocator_3536_ptr - (int64_t)pcVar16;
            while (*pcVar16 == pcVar16[lVar12]) {
              pcVar16 = pcVar16 + 1;
              if (pcVar5 <= pcVar16) goto LAB_180556551;
            }
          }
          puVar8 = (uint64_t *)puVar8[0xb];
          goto LAB_180556511;
        }
        lVar12 = (int64_t)&memory_allocator_3680_ptr - (int64_t)pcVar16;
        while (*pcVar16 == pcVar16[lVar12]) {
          pcVar16 = pcVar16 + 1;
          if (pcVar5 <= pcVar16) goto LAB_180556294;
        }
      }
      puVar8 = (uint64_t *)puVar8[0xb];
      goto LAB_180556254;
    }
    lVar12 = (int64_t)&memory_allocator_3632_ptr - (int64_t)pcVar16;
    while (*pcVar16 == pcVar16[lVar12]) {
      pcVar16 = pcVar16 + 1;
      if (pcVar5 <= pcVar16) goto LAB_180556010;
    }
  }
  puVar8 = (uint64_t *)puVar8[0xb];
  goto LAB_180555fcc;
}